
/* WARNING: Unknown calling convention */

ssize_t getndelim2(char **lineptr,size_t *linesize,size_t offset,size_t nmax,int delim1,int delim2,
                  FILE *stream)

{
  byte *pbVar1;
  size_t sVar2;
  int iVar3;
  void *__src;
  ssize_t sVar4;
  char *pcVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  char *__dest;
  ulong uVar9;
  size_t __size;
  size_t sVar10;
  uint uVar11;
  bool bVar12;
  long in_FS_OFFSET;
  char *local_88;
  uint local_70;
  size_t buffer_len;
  long local_40;
  
  local_88 = *lineptr;
  sVar10 = *linesize;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_88 == (char *)0x0) {
    sVar10 = 0x40;
    if (nmax < 0x41) {
      sVar10 = nmax;
    }
    local_88 = (char *)malloc(sVar10);
    if (local_88 != (char *)0x0) goto LAB_00100045;
  }
  else {
LAB_00100045:
    if ((sVar10 < offset) || (uVar9 = sVar10 - offset, uVar9 == 0 && nmax <= sVar10)) {
LAB_001001bf:
      *lineptr = local_88;
      *linesize = sVar10;
    }
    else {
      uVar11 = delim2;
      if ((delim1 != -1) && (uVar11 = delim1, delim2 == -1)) {
        delim2 = delim1;
      }
      __dest = local_88 + offset;
      do {
        while( true ) {
          __src = (void *)freadptr(stream,&buffer_len);
          sVar2 = buffer_len;
          sVar7 = sVar10;
          if (__src == (void *)0x0) {
            pbVar1 = (byte *)stream->_IO_read_ptr;
            if (pbVar1 < stream->_IO_read_end) {
              stream->_IO_read_ptr = (char *)(pbVar1 + 1);
              local_70 = (uint)*pbVar1;
            }
            else {
              local_70 = __uflow((_IO_FILE *)stream);
              if (local_70 == 0xffffffff) {
                pcVar5 = __dest;
                if (__dest == local_88) goto LAB_001001bf;
                goto LAB_00100176;
              }
            }
            buffer_len = 1;
            bVar12 = uVar11 == local_70 || delim2 == local_70;
            uVar6 = 2;
          }
          else if ((uVar11 == 0xffffffff) ||
                  (lVar8 = memchr2(__src,uVar11,delim2,buffer_len), lVar8 == 0)) {
            uVar6 = sVar2 + 1;
            bVar12 = false;
          }
          else {
            bVar12 = true;
            buffer_len = (lVar8 - (long)__src) + 1;
            uVar6 = (lVar8 - (long)__src) + 2;
          }
          if ((uVar9 < uVar6) && (sVar10 < nmax)) {
            sVar7 = sVar10 * 2;
            if (sVar10 < 0x40) {
              sVar7 = sVar10 + 0x40;
            }
            lVar8 = (long)__dest - (long)local_88;
            if (sVar7 - lVar8 < uVar6) {
              sVar7 = lVar8 + uVar6;
            }
            if ((sVar7 <= sVar10) || (nmax < sVar7)) {
              sVar7 = nmax;
            }
            if (((long)(sVar7 - offset) < 0) &&
               (sVar7 = offset + 0x8000000000000000, sVar10 == sVar7)) goto LAB_001001bf;
            uVar9 = sVar7 - lVar8;
            __size = 1;
            if (sVar7 != 0) {
              __size = sVar7;
            }
            pcVar5 = (char *)realloc(local_88,__size);
            if (pcVar5 == (char *)0x0) goto LAB_001001bf;
            __dest = pcVar5 + lVar8;
            local_88 = pcVar5;
          }
          sVar10 = sVar7;
          if (uVar9 < 2) break;
          uVar6 = uVar9 - 1;
          if (buffer_len < uVar9 - 1) {
            uVar6 = buffer_len;
          }
          pcVar5 = __dest + uVar6;
          uVar9 = uVar9 - uVar6;
          if (__src != (void *)0x0) {
            memcpy(__dest,__src,uVar6);
            goto LAB_001000ed;
          }
          *__dest = (char)local_70;
LAB_00100102:
          __dest = pcVar5;
          if (bVar12) goto LAB_00100176;
        }
        pcVar5 = __dest;
        if (__src != (void *)0x0) {
LAB_001000ed:
          iVar3 = freadseek(stream,buffer_len);
          if (iVar3 == 0) goto LAB_00100102;
          goto LAB_001001bf;
        }
      } while (!bVar12);
LAB_00100176:
      *pcVar5 = '\0';
      *lineptr = local_88;
      *linesize = sVar7;
      sVar4 = (long)pcVar5 - (long)(local_88 + offset);
      if (sVar4 != 0) goto LAB_0010018c;
    }
  }
  sVar4 = -1;
LAB_0010018c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar4;
}


