
undefined8 entropy_dummy_source(undefined8 param_1,void *param_2,size_t param_3,size_t *param_4)

{
  memset(param_2,0x2a,param_3);
  *param_4 = param_3;
  return 0;
}



int entropy_update(long param_1,undefined1 param_2,undefined1 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 0x41) {
    local_89 = (undefined1)param_4;
    puVar3 = param_3;
  }
  else {
    puVar3 = local_88;
    uVar2 = mbedtls_md_info_from_type(0xb);
    iVar1 = mbedtls_md(uVar2,param_3,param_4,puVar3);
    if (iVar1 != 0) goto LAB_001000c5;
    local_89 = 0x40;
    param_4 = 0x40;
  }
  local_8a = param_2;
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar2 = mbedtls_md_info_from_type(0xb);
    iVar1 = mbedtls_md_setup(param_1,uVar2,0);
    if (iVar1 != 0) goto LAB_001000c5;
    iVar1 = mbedtls_md_starts(param_1);
    if (iVar1 != 0) goto LAB_001000c5;
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  iVar1 = mbedtls_md_update(param_1,&local_8a,2);
  if (iVar1 == 0) {
    iVar1 = mbedtls_md_update(param_1,puVar3,param_4);
  }
LAB_001000c5:
  mbedtls_platform_zeroize(local_88,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int entropy_gather_internal_part_0(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  long in_FS_OFFSET;
  long local_d0;
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
    bVar1 = false;
    uVar5 = 0;
    do {
      while( true ) {
        if (*(int *)(puVar4 + 4) == 1) {
          bVar1 = true;
        }
        local_d0 = 0;
        iVar2 = (*(code *)*puVar4)(puVar4[1],local_c8,0x80,&local_d0);
        if (iVar2 != 0) goto LAB_0010021f;
        if (local_d0 == 0) break;
        iVar3 = entropy_update(param_1,uVar5 & 0xff,local_c8);
        if (iVar3 != 0) goto LAB_0010022c;
        uVar5 = uVar5 + 1;
        puVar4[2] = puVar4[2] + local_d0;
        puVar4 = puVar4 + 5;
        if (*(int *)(param_1 + 0x1c) <= (int)uVar5) goto LAB_0010021b;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x1c));
LAB_0010021b:
    if (bVar1) goto LAB_0010021f;
  }
  iVar2 = -0x3d;
LAB_0010021f:
  mbedtls_platform_zeroize(local_c8,0x80);
  iVar3 = iVar2;
LAB_0010022c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



int mbedtls_entropy_func_part_0(long param_1,void *param_2,size_t param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  iVar6 = 0x102;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    do {
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar2 = -0x3c;
        goto LAB_00100422;
      }
      if (*(int *)(param_1 + 0x1c) == 0) {
        iVar2 = -0x40;
        goto LAB_00100422;
      }
      iVar2 = entropy_gather_internal_part_0();
      if (iVar2 != 0) goto LAB_00100422;
    } while (*(int *)(param_1 + 0x1c) < 1);
    puVar1 = (ulong *)(param_1 + 0x30);
    bVar5 = true;
    uVar7 = 0;
    puVar3 = puVar1;
    do {
      if (*puVar3 < puVar3[1]) {
        bVar5 = false;
      }
      if ((int)puVar3[2] == 1) {
        uVar7 = uVar7 + *puVar3;
      }
      puVar3 = puVar3 + 5;
    } while (puVar3 != puVar1 + (long)*(int *)(param_1 + 0x1c) * 5);
  } while ((uVar7 < 0x40) || (!bVar5));
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar2 = mbedtls_md_finish(param_1,local_88);
  if (iVar2 != 0) goto LAB_00100422;
  mbedtls_md_free(param_1);
  mbedtls_md_init(param_1);
  uVar4 = mbedtls_md_info_from_type(0xb);
  iVar2 = mbedtls_md_setup(param_1,uVar4,0);
  if (((iVar2 != 0) || (iVar2 = mbedtls_md_starts(param_1), iVar2 != 0)) ||
     (iVar2 = mbedtls_md_update(param_1,local_88,0x40), iVar2 != 0)) goto LAB_00100422;
  uVar4 = mbedtls_md_info_from_type(0xb);
  iVar2 = mbedtls_md(uVar4,local_88,0x40,local_88);
  if (iVar2 != 0) goto LAB_00100422;
  iVar6 = *(int *)(param_1 + 0x1c);
  if (0 < iVar6) {
    puVar3 = puVar1;
    if (((long)iVar6 * 5 & 1U) != 0) {
      *puVar1 = 0;
      puVar3 = (ulong *)(param_1 + 0x58);
      if ((ulong *)(param_1 + 0x58) == puVar1 + (long)iVar6 * 5) goto LAB_00100403;
    }
    do {
      *puVar3 = 0;
      puVar8 = puVar3 + 10;
      puVar3[5] = 0;
      puVar3 = puVar8;
    } while (puVar8 != puVar1 + (long)iVar6 * 5);
  }
LAB_00100403:
  memcpy(param_2,local_88,param_3);
LAB_00100422:
  mbedtls_platform_zeroize(local_88,0x40);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



void mbedtls_entropy_init(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  puVar4 = (undefined8 *)(param_1 + 0x28U & 0xfffffffffffffff8);
  uVar3 = (ulong)(((int)param_1 - (int)puVar4) + 0x340U >> 3);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  mbedtls_md_init(param_1);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 < 0x14) {
    lVar1 = param_1 + (long)iVar2 * 0x28;
    *(undefined **)(lVar1 + 0x20) = &mbedtls_platform_entropy_poll;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0x20;
    *(undefined4 *)(lVar1 + 0x40) = 1;
    *(int *)(param_1 + 0x1c) = iVar2 + 1;
  }
  return;
}



void mbedtls_entropy_free(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != -1) {
      mbedtls_md_free();
      *(undefined4 *)(param_1 + 0x1c) = 0;
      mbedtls_platform_zeroize(param_1 + 0x20,800);
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    }
    return;
  }
  return;
}



undefined8
mbedtls_entropy_add_source
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 < 0x14) {
    lVar1 = param_1 + (long)iVar2 * 0x28;
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    *(undefined8 *)(lVar1 + 0x38) = param_4;
    *(undefined4 *)(lVar1 + 0x40) = param_5;
    *(int *)(param_1 + 0x1c) = iVar2 + 1;
    return 0;
  }
  return 0xffffffc2;
}



void mbedtls_entropy_update_manual(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  entropy_update(param_1,0x14,param_2,param_3);
  return;
}



undefined8 mbedtls_entropy_gather(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = entropy_gather_internal_part_0();
    return uVar1;
  }
  return 0xffffffc0;
}



undefined8 mbedtls_entropy_func(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0x41) {
    uVar1 = mbedtls_entropy_func_part_0();
    return uVar1;
  }
  return 0xffffffc4;
}



undefined8 mbedtls_entropy_write_seed_file(undefined8 param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = mbedtls_entropy_func_part_0(param_1,auStack_68,0x40);
  if (iVar1 == 0) {
    uVar3 = 0;
    __stream = fopen64(param_2,"wb");
    if (__stream == (FILE *)0x0) {
      uVar3 = 0xffffffc1;
      mbedtls_platform_zeroize(auStack_68,0x40);
    }
    else {
      setbuf(__stream,(char *)0x0);
      sVar2 = fwrite(auStack_68,1,0x40,__stream);
      if (sVar2 == 0x40) {
        mbedtls_platform_zeroize(auStack_68,0x40);
      }
      else {
        mbedtls_platform_zeroize(auStack_68,0x40);
        uVar3 = 0xffffffc1;
      }
      fclose(__stream);
    }
  }
  else {
    uVar3 = 0xffffffc4;
    mbedtls_platform_zeroize(auStack_68,0x40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_entropy_update_seed_file(undefined8 param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  ulong __n;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined1 auStack_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = fopen64(param_2,"rb");
  if (__stream != (FILE *)0x0) {
    setbuf(__stream,(char *)0x0);
    fseek(__stream,0,2);
    __n = ftell(__stream);
    fseek(__stream,0,0);
    if (0x400 < __n) {
      __n = 0x400;
    }
    sVar2 = fread(auStack_438,1,__n,__stream);
    if (sVar2 == __n) {
      iVar1 = entropy_update(param_1,0x14,auStack_438,sVar2);
      fclose(__stream);
      mbedtls_platform_zeroize(auStack_438,0x400);
      if (iVar1 == 0) {
        iVar1 = mbedtls_entropy_write_seed_file(param_1,param_2);
      }
      goto LAB_00100798;
    }
    fclose(__stream);
    mbedtls_platform_zeroize(auStack_438,0x400);
  }
  iVar1 = -0x3f;
LAB_00100798:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool mbedtls_entropy_self_test(int param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined1 auStack_408 [24];
  int local_3f0;
  int local_3ec;
  undefined8 local_3e8 [4];
  undefined8 auStack_3c8 [96];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_1 != 0) {
    __printf_chk(2,"  ENTROPY test: ");
  }
  mbedtls_entropy_init(auStack_408);
  if (local_3ec == 0) {
    iVar4 = -0x40;
LAB_001009ea:
    if (local_3f0 != -1) {
LAB_0010099b:
      mbedtls_md_free(auStack_408);
      local_3ec = 0;
      mbedtls_platform_zeroize(local_3e8,800);
      local_3f0 = -1;
      goto LAB_001009c2;
    }
LAB_001009f1:
    bVar11 = true;
    if (param_1 == 0) goto LAB_00100a1b;
LAB_001009fc:
    bVar11 = true;
    puts("failed");
  }
  else {
    iVar4 = entropy_gather_internal_part_0(auStack_408);
    if (iVar4 != 0) goto LAB_001009ea;
    if (0x13 < local_3ec) {
      iVar4 = -0x3e;
      if (local_3f0 == -1) goto LAB_001009f1;
      goto LAB_0010099b;
    }
    lVar5 = (long)local_3ec;
    local_3ec = local_3ec + 1;
    local_3e8[lVar5 * 5] = 0x100000;
    lVar10 = 8;
    local_3e8[lVar5 * 5 + 1] = 0;
    auStack_3c8[lVar5 * 5 + -1] = 0x10;
    *(undefined4 *)(auStack_3c8 + lVar5 * 5) = 0;
    iVar4 = entropy_update(auStack_408,0x14,local_c8,0x40);
    if (iVar4 != 0) goto LAB_001009ea;
    do {
      iVar4 = mbedtls_entropy_func_part_0(auStack_408,local_c8,0x40);
      if (iVar4 != 0) goto LAB_00100994;
      puVar8 = (ulong *)local_88;
      puVar6 = puVar8;
      puVar9 = (ulong *)local_c8;
      do {
        uVar2 = *puVar9;
        uVar3 = puVar9[1];
        puVar7 = puVar6 + 2;
        puVar9 = puVar9 + 2;
        *puVar6 = *puVar6 | uVar2;
        puVar6[1] = puVar6[1] | uVar3;
        puVar6 = puVar7;
      } while (puVar7 != &local_48);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    cVar1 = local_88[0];
    while (cVar1 != '\0') {
      puVar8 = (ulong *)((long)puVar8 + 1);
      if (puVar8 == &local_48) goto LAB_00100994;
      cVar1 = *(char *)puVar8;
    }
    iVar4 = 1;
LAB_00100994:
    if (local_3f0 != -1) goto LAB_0010099b;
LAB_001009c2:
    if (param_1 == 0) {
      bVar11 = iVar4 != 0;
      goto LAB_00100a1b;
    }
    if (iVar4 != 0) goto LAB_001009fc;
    puts("passed");
    bVar11 = false;
  }
  putchar(10);
LAB_00100a1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


