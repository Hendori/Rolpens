
undefined8 find_mount_point(char *param_1,__dev_t *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long in_FS_OFFSET;
  undefined1 local_168 [16];
  stat local_158;
  stat local_c8;
  long local_30;
  undefined1 *puVar13;
  
  puVar13 = local_168;
  puVar12 = local_168;
  puVar14 = local_168;
  puVar15 = local_168;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = save_cwd(local_168);
  if (iVar3 == 0) {
    if ((param_2[3] & 0xf000) == 0x4000) {
      local_158.st_dev = *param_2;
      local_158.st_ino = param_2[1];
      local_158.st_nlink = param_2[2];
      local_158._24_8_ = param_2[3];
      local_158._32_8_ = param_2[4];
      local_158.st_rdev = param_2[5];
      local_158.st_size = param_2[6];
      local_158.st_blksize = param_2[7];
      local_158.st_blocks = param_2[8];
      local_158.st_atim.tv_sec = param_2[9];
      local_158.st_atim.tv_nsec = param_2[10];
      local_158.st_mtim.tv_sec = param_2[0xb];
      local_158.st_mtim.tv_nsec = param_2[0xc];
      local_158.st_ctim.tv_sec = param_2[0xd];
      local_158.st_ctim.tv_nsec = param_2[0xe];
      local_158.__unused[0] = param_2[0xf];
      local_158.__unused[1] = param_2[0x10];
      local_158.__unused[2] = param_2[0x11];
      iVar3 = chdir(param_1);
      puVar2 = local_168;
      if (iVar3 < 0) goto LAB_001003b3;
LAB_001001c6:
      puVar14 = puVar2;
      while( true ) {
        *(undefined8 *)(puVar14 + -8) = 0x100287;
        iVar3 = stat("..",&local_c8);
        if (iVar3 < 0) break;
        if ((local_c8.st_dev != local_158.st_dev) || (local_c8.st_ino == local_158.st_ino)) {
          *(undefined8 *)(puVar14 + -8) = 0x1002a8;
          uVar10 = xgetcwd();
          *(undefined8 *)(puVar14 + -8) = 0x1002b0;
          piVar9 = __errno_location();
          goto LAB_001002b3;
        }
        *(undefined8 *)(puVar14 + -8) = 0x1001fc;
        iVar3 = chdir("..");
        if (iVar3 < 0) {
          *(undefined8 *)(puVar14 + -8) = 0x100301;
          uVar7 = quotearg_style(4,&_LC4);
          pcVar5 = "cannot change to directory %s";
          goto LAB_00100310;
        }
        local_158.st_dev = local_c8.st_dev;
        local_158.st_ino = local_c8.st_ino;
        local_158.st_nlink = local_c8.st_nlink;
        local_158.st_mode = local_c8.st_mode;
        local_158.st_uid = local_c8.st_uid;
        local_158.st_gid = local_c8.st_gid;
        local_158.__pad0 = local_c8.__pad0;
        local_158.st_rdev = local_c8.st_rdev;
        local_158.st_size = local_c8.st_size;
        local_158.st_blksize = local_c8.st_blksize;
        local_158.st_blocks = local_c8.st_blocks;
        local_158.st_atim.tv_sec = local_c8.st_atim.tv_sec;
        local_158.st_atim.tv_nsec = local_c8.st_atim.tv_nsec;
        local_158.st_mtim.tv_sec = local_c8.st_mtim.tv_sec;
        local_158.st_mtim.tv_nsec = local_c8.st_mtim.tv_nsec;
        local_158.st_ctim.tv_sec = local_c8.st_ctim.tv_sec;
        local_158.st_ctim.tv_nsec = local_c8.st_ctim.tv_nsec;
        local_158.__unused[0] = local_c8.__unused[0];
        local_158.__unused[1] = local_c8.__unused[1];
        local_158.__unused[2] = local_c8.__unused[2];
      }
      *(undefined8 *)(puVar14 + -8) = 0x100348;
      uVar7 = quotearg_style(4,&_LC4);
      pcVar5 = "cannot stat %s";
LAB_00100310:
      *(undefined8 *)(puVar14 + -8) = 0x100317;
      uVar8 = dcgettext(0,pcVar5,5);
      *(undefined8 *)(puVar14 + -8) = 0x10031f;
      piVar9 = __errno_location();
      iVar3 = *piVar9;
      uVar10 = 0;
      *(undefined8 *)(puVar14 + -8) = 0x100336;
      error(0,iVar3,uVar8,uVar7);
    }
    else {
      pcVar5 = (char *)dir_name(param_1);
      sVar6 = strlen(pcVar5);
      puVar14 = local_168;
      while (puVar13 != local_168 + -(sVar6 + 0x18 & 0xfffffffffffff000)) {
        puVar12 = puVar14 + -0x1000;
        *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
        puVar13 = puVar14 + -0x1000;
        puVar14 = puVar14 + -0x1000;
      }
      uVar11 = (ulong)((uint)(sVar6 + 0x18) & 0xff0);
      lVar1 = -uVar11;
      puVar14 = puVar12 + lVar1;
      puVar15 = puVar12 + lVar1;
      if (uVar11 != 0) {
        *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
      }
      *(undefined8 *)(puVar12 + lVar1 + -8) = 0x1000c8;
      param_1 = (char *)__memcpy_chk((ulong)(puVar12 + lVar1 + 0xf) & 0xfffffffffffffff0,pcVar5,
                                     sVar6 + 1,sVar6 + 1);
      *(undefined8 *)(puVar12 + lVar1 + -8) = 0x1000d3;
      free(pcVar5);
      *(undefined8 *)(puVar12 + lVar1 + -8) = 0x1000db;
      iVar3 = chdir(param_1);
      if (iVar3 < 0) {
LAB_001003b3:
        *(undefined8 *)(puVar15 + -8) = 0x1003c0;
        uVar10 = quotearg_style(4,param_1);
        *(undefined8 *)(puVar15 + -8) = 0x1003d6;
        uVar7 = dcgettext(0,"cannot change to directory %s",5);
        *(undefined8 *)(puVar15 + -8) = 0x1003de;
        piVar9 = __errno_location();
        iVar3 = *piVar9;
        *(undefined8 *)(puVar15 + -8) = 0x1003ef;
        error(0,iVar3,uVar7,uVar10);
        puVar14 = puVar15;
        goto LAB_001003ab;
      }
      *(undefined8 *)(puVar12 + lVar1 + -8) = 0x1000f6;
      iVar3 = stat(".",&local_158);
      puVar2 = puVar12 + lVar1;
      if (-1 < iVar3) goto LAB_001001c6;
      *(undefined8 *)(puVar12 + lVar1 + -8) = 0x10010b;
      uVar7 = quotearg_style(4,param_1);
      *(undefined8 *)(puVar12 + lVar1 + -8) = 0x100121;
      uVar8 = dcgettext(0,"cannot stat current directory (now %s)",5);
      *(undefined8 *)(puVar12 + lVar1 + -8) = 0x100129;
      piVar9 = __errno_location();
      iVar3 = *piVar9;
      uVar10 = 0;
      *(undefined8 *)(puVar12 + lVar1 + -8) = 0x100140;
      error(0,iVar3,uVar8,uVar7);
    }
LAB_001002b3:
    iVar3 = *piVar9;
    *(undefined8 *)(puVar14 + -8) = 0x1002be;
    iVar4 = restore_cwd(local_168);
    if (iVar4 != 0) {
      *(undefined8 *)(puVar14 + -8) = 0x10036c;
      uVar10 = dcgettext(0,"failed to return to initial working directory",5);
      iVar3 = *piVar9;
      *(undefined8 *)(puVar14 + -8) = 0x10037d;
      error(1,iVar3,uVar10);
      goto LAB_0010037d;
    }
    *(undefined8 *)(puVar14 + -8) = 0x1002ce;
    free_cwd(local_168);
    *piVar9 = iVar3;
  }
  else {
    uVar10 = dcgettext(0,"cannot get current directory",5);
    piVar9 = __errno_location();
    error(0,*piVar9,uVar10);
LAB_001003ab:
    uVar10 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
LAB_0010037d:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar14 + -8) = 0x100382;
  __stack_chk_fail();
}


