
/* WARNING: Unknown calling convention */

int rof_scanf_lx(rofile *rof,ulong *valuep)

{
  byte bVar1;
  size_t sVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0;
  while (sVar2 = rof->position, sVar2 != rof->filled) {
    bVar1 = rof->buffer[sVar2];
    if (bVar1 - 0x30 < 10) {
      uVar3 = uVar3 * 0x10 + (long)(int)(bVar1 - 0x30);
    }
    else if (bVar1 - 0x41 < 6) {
      uVar3 = uVar3 * 0x10 + (long)(int)(bVar1 - 0x37);
    }
    else {
      if (5 < bVar1 - 0x61) goto LAB_00100080;
      uVar3 = uVar3 * 0x10 + (long)(int)(bVar1 - 0x57);
    }
    iVar4 = iVar4 + 1;
    rof->position = sVar2 + 1;
  }
  rof->eof_seen = 1;
LAB_00100080:
  if (iVar4 != 0) {
    *valuep = uVar3;
    return 0;
  }
  return -1;
}



/* WARNING: Unknown calling convention */

int vma_iterate(vma_iterate_callback_fn callback,void *data)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ssize_t sVar12;
  __off_t _Var13;
  int *piVar14;
  size_t sVar15;
  ulong uVar16;
  ulong uVar17;
  rofile *rof_00;
  size_t sVar18;
  size_t __nbytes;
  long in_FS_OFFSET;
  byte bVar19;
  ulong start;
  ulong end;
  rofile rof;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  iVar10 = open("/proc/self/maps",0x80000);
  if (-1 < iVar10) {
    rof.buffer = rof.stack_allocated_buffer;
    uVar16 = 0;
    rof.position = 0;
    __nbytes = 1;
    rof.eof_seen = 0;
    rof.auxmap = (char *)0x0;
    rof.auxmap_start = 0;
    rof.auxmap_end = 0;
LAB_00100118:
    if (__nbytes < 0x104a) goto LAB_001001f5;
LAB_00100125:
    sVar12 = read(iVar10,rof.buffer,__nbytes);
    iVar11 = (int)sVar12;
    if (iVar11 < 0) {
      piVar14 = __errno_location();
      iVar11 = *piVar14;
joined_r0x00100240:
      if (iVar11 == 4) goto LAB_001001b8;
    }
    else if (iVar11 != 0) {
      if (__nbytes < (ulong)(long)(iVar11 + 0x1049)) {
        __nbytes = __nbytes * 2;
        if (uVar16 == 0) goto LAB_00100201;
LAB_00100160:
        do {
          if (rof.auxmap != (char *)0x0) {
            munmap(rof.auxmap,rof.auxmap_length);
          }
          while( true ) {
            rof.auxmap = (char *)mmap((void *)0x0,__nbytes,3,0x22,-1,0);
            if (rof.auxmap == (char *)0xffffffffffffffff) {
              close(iVar10);
              goto LAB_00100516;
            }
            rof.auxmap_end = (ulong)(rof.auxmap + __nbytes);
            rof.auxmap_start = (ulong)rof.auxmap;
            rof.buffer = rof.auxmap;
            rof.auxmap_length = __nbytes;
LAB_001001b8:
            _Var13 = lseek(iVar10,0,0);
            if (-1 < _Var13) goto LAB_00100118;
            close(iVar10);
            iVar10 = open("/proc/self/maps",0x80000);
            if (iVar10 < 0) goto LAB_0010024d;
            if (0x1049 < __nbytes) goto LAB_00100125;
LAB_001001f5:
            __nbytes = __nbytes * 2;
            if (uVar16 != 0) break;
LAB_00100201:
            iVar11 = getpagesize();
            uVar16 = (ulong)iVar11;
            for (__nbytes = uVar16; __nbytes < 0x104a; __nbytes = __nbytes * 2) {
            }
          }
        } while( true );
      }
      rof.filled = (size_t)iVar11;
      while( true ) {
        sVar12 = read(iVar10,rof.buffer + rof.filled,__nbytes - rof.filled);
        iVar11 = (int)sVar12;
        if (iVar11 < 0) {
          piVar14 = __errno_location();
          iVar11 = *piVar14;
          goto joined_r0x00100240;
        }
        if (__nbytes - rof.filled < (ulong)(long)(iVar11 + 0x1049)) break;
        if (iVar11 == 0) {
          close(iVar10);
          uVar9 = rof.auxmap_end;
          uVar16 = rof.auxmap_start;
          goto LAB_00100300;
        }
        rof.filled = (long)iVar11 + rof.filled;
      }
      if (uVar16 == 0) goto LAB_00100201;
      __nbytes = __nbytes * 2;
      if (__nbytes != 0) goto LAB_00100160;
    }
    close(iVar10);
LAB_0010024d:
    if (rof.auxmap != (char *)0x0) {
      munmap(rof.auxmap,rof.auxmap_length);
    }
  }
LAB_00100516:
  iVar10 = -1;
  goto LAB_001004a2;
  while (iVar10 = (*callback)(data,uVar17,uVar7,(uint)bVar19), iVar10 == 0) {
LAB_00100300:
    rof_00 = &rof;
    iVar10 = rof_scanf_lx(&rof,&start);
    pcVar8 = rof.buffer;
    if (iVar10 < 0) break;
    if (rof.position == rof.filled) {
      rof.eof_seen = 1;
      break;
    }
    pcVar4 = rof.buffer + rof.position;
    rof.position = rof.position + 1;
    if ((*pcVar4 != '-') ||
       (sVar18 = rof.filled, iVar10 = rof_scanf_lx(rof_00,&end), uVar7 = end, sVar15 = rof.position,
       iVar10 < 0)) break;
    do {
      rof.position = sVar15;
      if (sVar18 == rof.position) {
        bVar19 = 0;
        sVar15 = sVar18;
        sVar1 = rof.position;
        goto LAB_001004de;
      }
      sVar15 = rof.position + 1;
    } while (pcVar8[rof.position] == ' ');
    bVar19 = pcVar8[rof.position] == 'r';
    sVar1 = sVar15;
    if (sVar18 == sVar15) {
LAB_001004de:
      rof.position = sVar1;
      rof.eof_seen = 1;
    }
    else {
      sVar1 = rof.position + 2;
      if (pcVar8[sVar15] == 'w') {
        bVar19 = bVar19 | 2;
      }
      sVar15 = sVar1;
      if (sVar18 == sVar1) goto LAB_001004de;
      lVar6 = rof.position + 2;
      sVar15 = rof.position + 3;
      rof.position = sVar15;
      if (pcVar8[lVar6] == 'x') {
        bVar19 = bVar19 | 4;
      }
    }
    do {
      if (sVar18 == sVar15) {
        rof.eof_seen = 1;
        break;
      }
      pcVar4 = pcVar8 + sVar15;
      sVar15 = sVar15 + 1;
      rof.position = sVar15;
    } while (*pcVar4 != '\n');
    uVar17 = start;
    if (start <= uVar16) {
      uVar2 = end - 1;
      uVar3 = uVar9 - 1;
      if (uVar3 <= uVar2) {
        if ((start < uVar16) && (iVar10 = (*callback)(data,start,uVar16,(uint)bVar19), iVar10 != 0))
        break;
        uVar17 = uVar9;
        if (uVar2 <= uVar3) goto LAB_00100300;
      }
    }
  }
  iVar10 = 0;
  if (rof.auxmap != (char *)0x0) {
    munmap(rof.auxmap,rof.auxmap_length);
  }
LAB_001004a2:
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


