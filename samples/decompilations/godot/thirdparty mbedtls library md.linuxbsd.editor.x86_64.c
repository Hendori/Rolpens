
undefined8 * mbedtls_md_info_from_type(undefined4 param_1)

{
  switch(param_1) {
  case 3:
    return &mbedtls_md5_info;
  case 4:
    return &mbedtls_ripemd160_info;
  case 5:
    return &mbedtls_sha1_info;
  default:
    return (undefined8 *)0x0;
  case 8:
    return &mbedtls_sha224_info;
  case 9:
    return &mbedtls_sha256_info;
  case 10:
    return &mbedtls_sha384_info;
  case 0xb:
    return &mbedtls_sha512_info;
  case 0x10:
    return &mbedtls_sha3_224_info;
  case 0x11:
    return &mbedtls_sha3_256_info;
  case 0x12:
    return &mbedtls_sha3_384_info;
  case 0x13:
    return &mbedtls_sha3_512_info;
  }
}



void mbedtls_md_init(undefined1 (*param_1) [16])

{
  *(undefined8 *)param_1[1] = 0;
  *param_1 = (undefined1  [16])0x0;
  return;
}



void mbedtls_md_free(long *param_1)

{
  void *__ptr;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return;
  }
  __ptr = (void *)param_1[1];
  if (__ptr != (void *)0x0) {
    switch(*(undefined4 *)*param_1) {
    case 3:
      mbedtls_md5_free();
      __ptr = (void *)param_1[1];
      break;
    case 4:
      mbedtls_ripemd160_free();
      __ptr = (void *)param_1[1];
      break;
    case 5:
      mbedtls_sha1_free();
      __ptr = (void *)param_1[1];
      break;
    case 8:
    case 9:
      mbedtls_sha256_free();
      free((void *)param_1[1]);
      goto LAB_0010013e;
    case 10:
    case 0xb:
      mbedtls_sha512_free();
      __ptr = (void *)param_1[1];
      break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      mbedtls_sha3_free();
      __ptr = (void *)param_1[1];
    }
    free(__ptr);
  }
LAB_0010013e:
  if (param_1[2] != 0) {
    mbedtls_zeroize_and_free(param_1[2],(uint)*(byte *)(*param_1 + 5) * 2);
  }
  mbedtls_platform_zeroize(param_1,0x18);
  return;
}



undefined8 mbedtls_md_clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  
  if ((((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) &&
      ((undefined4 *)*param_1 != (undefined4 *)0x0)) &&
     ((puVar1 = (undefined4 *)*param_2, (undefined4 *)*param_1 == puVar1 &&
      (puVar1 != (undefined4 *)0x0)))) {
    switch(*puVar1) {
    case 3:
      mbedtls_md5_clone(param_1[1],param_2[1]);
      break;
    case 4:
      mbedtls_ripemd160_clone(param_1[1],param_2[1]);
      break;
    case 5:
      mbedtls_sha1_clone(param_1[1],param_2[1]);
      break;
    case 6:
    case 7:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      return 0xffffaf00;
    case 8:
    case 9:
      mbedtls_sha256_clone(param_1[1],param_2[1]);
      break;
    case 10:
    case 0xb:
      mbedtls_sha512_clone(param_1[1],param_2[1]);
      break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      mbedtls_sha3_clone(param_1[1],param_2[1]);
      break;
    default:
      goto switchD_00100237_default;
    }
    return 0;
  }
switchD_00100237_default:
  return 0xffffaf00;
}



undefined8 mbedtls_md_setup(undefined8 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffaf00;
  }
  if (param_1 == (undefined8 *)0x0) {
switchD_00100322_caseD_6:
    uVar3 = 0xffffaf00;
  }
  else {
    uVar1 = *param_2;
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    switch(uVar1) {
    case 3:
      pvVar2 = calloc(1,0x58);
      param_1[1] = pvVar2;
      if (pvVar2 != (void *)0x0) {
        mbedtls_md5_init(pvVar2);
LAB_00100348:
        if (param_3 == 0) {
          return 0;
        }
        pvVar2 = calloc(2,(ulong)*(byte *)((long)param_2 + 5));
        param_1[2] = pvVar2;
        if (pvVar2 != (void *)0x0) {
          return 0;
        }
        mbedtls_md_free(param_1);
      }
      break;
    case 4:
      pvVar2 = calloc(1,0x5c);
      param_1[1] = pvVar2;
      if (pvVar2 != (void *)0x0) {
        mbedtls_ripemd160_init(pvVar2);
        goto LAB_00100348;
      }
      break;
    case 5:
      pvVar2 = calloc(1,0x5c);
      param_1[1] = pvVar2;
      if (pvVar2 != (void *)0x0) {
        mbedtls_sha1_init(pvVar2);
        goto LAB_00100348;
      }
      break;
    default:
      goto switchD_00100322_caseD_6;
    case 8:
    case 9:
      pvVar2 = calloc(1,0x6c);
      param_1[1] = pvVar2;
      if (pvVar2 != (void *)0x0) {
        mbedtls_sha256_init(pvVar2);
        goto LAB_00100348;
      }
      break;
    case 10:
    case 0xb:
      pvVar2 = calloc(1,0xd8);
      param_1[1] = pvVar2;
      if (pvVar2 != (void *)0x0) {
        mbedtls_sha512_init(pvVar2);
        goto LAB_00100348;
      }
      break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      pvVar2 = calloc(1,0xd0);
      param_1[1] = pvVar2;
      if (pvVar2 != (void *)0x0) {
        mbedtls_sha3_init(pvVar2);
        goto LAB_00100348;
      }
    }
    uVar3 = 0xffffae80;
  }
  return uVar3;
}



undefined8 mbedtls_md_starts(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    switch(*(undefined4 *)*param_1) {
    case 3:
      uVar1 = mbedtls_md5_starts(param_1[1]);
      return uVar1;
    case 4:
      uVar1 = mbedtls_ripemd160_starts(param_1[1]);
      return uVar1;
    case 5:
      uVar1 = mbedtls_sha1_starts(param_1[1]);
      return uVar1;
    case 8:
      uVar1 = mbedtls_sha256_starts(param_1[1],1);
      return uVar1;
    case 9:
      uVar1 = mbedtls_sha256_starts(param_1[1],0);
      return uVar1;
    case 10:
      uVar1 = mbedtls_sha512_starts(param_1[1],1);
      return uVar1;
    case 0xb:
      uVar1 = mbedtls_sha512_starts(param_1[1],0);
      return uVar1;
    case 0x10:
      uVar1 = mbedtls_sha3_starts(param_1[1],1);
      return uVar1;
    case 0x11:
      uVar1 = mbedtls_sha3_starts(param_1[1],2);
      return uVar1;
    case 0x12:
      uVar1 = mbedtls_sha3_starts(param_1[1],3);
      return uVar1;
    case 0x13:
      uVar1 = mbedtls_sha3_starts(param_1[1],4);
      return uVar1;
    }
  }
  return 0xffffaf00;
}



undefined8 mbedtls_md_update(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    switch(*(undefined4 *)*param_1) {
    case 3:
      uVar1 = mbedtls_md5_update(param_1[1],param_2,param_3);
      return uVar1;
    case 4:
      uVar1 = mbedtls_ripemd160_update(param_1[1],param_2,param_3);
      return uVar1;
    case 5:
      uVar1 = mbedtls_sha1_update(param_1[1],param_2,param_3);
      return uVar1;
    case 8:
    case 9:
      uVar1 = mbedtls_sha256_update(param_1[1],param_2,param_3);
      return uVar1;
    case 10:
    case 0xb:
      uVar1 = mbedtls_sha512_update(param_1[1],param_2,param_3);
      return uVar1;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      uVar1 = mbedtls_sha3_update(param_1[1],param_2,param_3);
      return uVar1;
    }
  }
  return 0xffffaf00;
}



undefined8 mbedtls_md_finish(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar1 = (undefined4 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    switch(*puVar1) {
    case 3:
      uVar2 = mbedtls_md5_finish(param_1[1]);
      return uVar2;
    case 4:
      uVar2 = mbedtls_ripemd160_finish(param_1[1]);
      return uVar2;
    case 5:
      uVar2 = mbedtls_sha1_finish(param_1[1]);
      return uVar2;
    case 8:
    case 9:
      uVar2 = mbedtls_sha256_finish(param_1[1]);
      return uVar2;
    case 10:
    case 0xb:
      uVar2 = mbedtls_sha512_finish(param_1[1]);
      return uVar2;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      uVar2 = mbedtls_sha3_finish(param_1[1],param_2,*(undefined1 *)(puVar1 + 1));
      return uVar2;
    }
  }
  return 0xffffaf00;
}



undefined8 mbedtls_md(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    switch(*param_1) {
    case 3:
      uVar1 = mbedtls_md5();
      return uVar1;
    case 4:
      uVar1 = mbedtls_ripemd160();
      return uVar1;
    case 5:
      uVar1 = mbedtls_sha1();
      return uVar1;
    case 8:
      uVar1 = mbedtls_sha256();
      return uVar1;
    case 9:
      uVar1 = mbedtls_sha256();
      return uVar1;
    case 10:
      uVar1 = mbedtls_sha512();
      return uVar1;
    case 0xb:
      uVar1 = mbedtls_sha512();
      return uVar1;
    case 0x10:
      uVar1 = mbedtls_sha3(1,param_2,param_3,param_4,*(undefined1 *)(param_1 + 1));
      return uVar1;
    case 0x11:
      uVar1 = mbedtls_sha3(2,param_2,param_3,param_4,*(undefined1 *)(param_1 + 1));
      return uVar1;
    case 0x12:
      uVar1 = mbedtls_sha3(3,param_2,param_3,param_4,*(undefined1 *)(param_1 + 1));
      return uVar1;
    case 0x13:
      uVar1 = mbedtls_sha3(4,param_2,param_3,param_4,*(undefined1 *)(param_1 + 1));
      return uVar1;
    }
  }
  return 0xffffaf00;
}



undefined1 mbedtls_md_get_size(long param_1)

{
  if (param_1 != 0) {
    return *(undefined1 *)(param_1 + 4);
  }
  return 0;
}



undefined4 mbedtls_md_get_type(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0;
}



void mbedtls_md_error_from_psa(undefined8 param_1)

{
  psa_status_to_mbedtls(param_1,&psa_to_md_errors,4,&psa_generic_status_to_mbedtls);
  return;
}



undefined1 * mbedtls_md_list(void)

{
  return supported_digests;
}



undefined8 mbedtls_md_info_from_string(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  char *__s1;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  __s1 = "MD5";
  ppuVar3 = &md_names;
  do {
    iVar1 = strcmp(__s1,param_1);
    if (iVar1 == 0) break;
    __s1 = ppuVar3[2];
    ppuVar3 = ppuVar3 + 2;
  } while (__s1 != (char *)0x0);
  uVar2 = mbedtls_md_info_from_type(*(undefined4 *)(ppuVar3 + 1));
  return uVar2;
}



undefined * mbedtls_md_get_name(int *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return (undefined *)0x0;
  }
  ppuVar1 = &md_names;
  iVar2 = 3;
  do {
    if (*param_1 == iVar2) break;
    iVar2 = *(int *)(ppuVar1 + 3);
    ppuVar1 = ppuVar1 + 2;
  } while (iVar2 != 0);
  return *ppuVar1;
}



undefined8 mbedtls_md_info_from_ctx(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



int mbedtls_md_file(long param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  size_t sVar3;
  long in_FS_OFFSET;
  undefined1 local_458 [16];
  undefined8 local_448;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    iVar1 = -0x5100;
  }
  else {
    __stream = fopen64(param_2,"rb");
    if (__stream == (FILE *)0x0) {
      iVar1 = -0x5200;
    }
    else {
      setbuf(__stream,(char *)0x0);
      local_458 = (undefined1  [16])0x0;
      local_448 = 0;
      iVar1 = mbedtls_md_setup(local_458,param_1,0);
      if (iVar1 == 0) {
        iVar1 = mbedtls_md_starts(local_458);
        while (iVar1 == 0) {
          sVar3 = fread(local_438,1,0x400,__stream);
          if (sVar3 == 0) {
            iVar1 = -0x5200;
            iVar2 = ferror(__stream);
            if (iVar2 == 0) {
              iVar1 = mbedtls_md_finish(local_458,param_3);
            }
            break;
          }
          iVar1 = mbedtls_md_update(local_458,local_438,sVar3);
        }
      }
      mbedtls_platform_zeroize(local_438,0x400);
      fclose(__stream);
      mbedtls_md_free(local_458);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_md_hmac_starts(long *param_1,undefined1 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  byte bVar11;
  undefined1 local_88 [72];
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (long *)0x0) || (lVar8 = *param_1, lVar8 == 0)) ||
     (puVar10 = (undefined8 *)param_1[2], puVar10 == (undefined8 *)0x0)) {
    iVar5 = -0x5100;
    goto LAB_00100c03;
  }
  uVar6 = (ulong)*(byte *)(lVar8 + 5);
  if (uVar6 < param_3) {
    iVar5 = mbedtls_md_starts(param_1);
    if (((iVar5 == 0) && (iVar5 = mbedtls_md_update(param_1,param_2,param_3), iVar5 == 0)) &&
       (iVar5 = mbedtls_md_finish(param_1,local_88), iVar5 == 0)) {
      lVar8 = *param_1;
      puVar10 = (undefined8 *)param_1[2];
      param_3 = (ulong)*(byte *)(lVar8 + 4);
      uVar6 = (ulong)*(byte *)(lVar8 + 5);
      param_2 = local_88;
      goto LAB_00100ae0;
    }
  }
  else {
LAB_00100ae0:
    puVar1 = (undefined8 *)((long)puVar10 + uVar6);
    uVar7 = (uint)uVar6;
    if (uVar7 < 8) {
      if ((uVar6 & 4) == 0) {
        if (uVar7 != 0) {
          *(undefined1 *)puVar10 = 0x36;
          if ((uVar6 & 2) == 0) goto LAB_00100b19;
          *(undefined2 *)((long)puVar10 + (uVar6 - 2)) = 0x3636;
          lVar8 = *param_1;
        }
      }
      else {
        *(undefined4 *)puVar10 = 0x36363636;
        *(undefined4 *)((long)puVar10 + (uVar6 - 4)) = 0x36363636;
        lVar8 = *param_1;
      }
    }
    else {
      *puVar10 = 0x3636363636363636;
      *(undefined8 *)((long)puVar10 + (uVar6 - 8)) = 0x3636363636363636;
      puVar9 = (undefined8 *)((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
      for (uVar6 = (ulong)(((int)puVar10 -
                           (int)(undefined8 *)((ulong)(puVar10 + 1) & 0xfffffffffffffff8)) + uVar7
                          >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = 0x3636363636363636;
        puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
      }
LAB_00100b19:
      lVar8 = *param_1;
    }
    bVar3 = *(byte *)(lVar8 + 5);
    uVar6 = (ulong)bVar3;
    if (bVar3 < 8) {
      if ((bVar3 & 4) == 0) {
        if ((bVar3 != 0) && (*(undefined1 *)puVar1 = 0x5c, (bVar3 & 2) != 0)) {
          *(undefined2 *)((long)puVar1 + (uVar6 - 2)) = 0x5c5c;
        }
      }
      else {
        *(undefined4 *)puVar1 = 0x5c5c5c5c;
        *(undefined4 *)((long)puVar1 + (uVar6 - 4)) = 0x5c5c5c5c;
      }
    }
    else {
      *puVar1 = 0x5c5c5c5c5c5c5c5c;
      *(undefined8 *)((long)puVar1 + (uVar6 - 8)) = 0x5c5c5c5c5c5c5c5c;
      puVar9 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
      for (uVar6 = (ulong)(((int)puVar1 -
                           (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8)) +
                           (uint)bVar3 >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = 0x5c5c5c5c5c5c5c5c;
        puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
      }
    }
    if (param_3 < 8) {
      uVar6 = 0;
      if (param_3 != 0) goto LAB_00100b78;
    }
    else {
      uVar4 = 8;
      do {
        uVar6 = uVar4;
        puVar2 = (ulong *)((long)puVar10 + (uVar6 - 8));
        *puVar2 = *puVar2 ^ *(ulong *)(param_2 + (uVar6 - 8));
        uVar4 = uVar6 + 8;
      } while (uVar6 + 8 <= param_3);
      if (uVar6 < param_3) {
LAB_00100b78:
        do {
          *(byte *)((long)puVar10 + uVar6) = *(byte *)((long)puVar10 + uVar6) ^ param_2[uVar6];
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_3);
        uVar6 = 0;
        if (7 < param_3) goto LAB_00100b93;
      }
      else {
LAB_00100b93:
        uVar4 = 8;
        do {
          uVar6 = uVar4;
          puVar2 = (ulong *)((long)puVar1 + (uVar6 - 8));
          *puVar2 = *puVar2 ^ *(ulong *)(param_2 + (uVar6 - 8));
          uVar4 = uVar6 + 8;
        } while (uVar6 + 8 <= param_3);
        if (param_3 <= uVar6) goto LAB_00100bd2;
      }
      do {
        *(byte *)((long)puVar1 + uVar6) = *(byte *)((long)puVar1 + uVar6) ^ param_2[uVar6];
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
LAB_00100bd2:
    iVar5 = mbedtls_md_starts(param_1);
    if (iVar5 == 0) {
      iVar5 = mbedtls_md_update(param_1,puVar10,*(undefined1 *)(*param_1 + 5));
    }
  }
  mbedtls_platform_zeroize(local_88,0x40);
LAB_00100c03:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



undefined8 mbedtls_md_hmac_update(long *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[2] != 0)) {
    uVar1 = mbedtls_md_update();
    return uVar1;
  }
  return 0xffffaf00;
}



undefined8 mbedtls_md_hmac_finish(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (lVar2 = param_1[2], lVar2 == 0)) {
    uVar3 = 0xffffaf00;
  }
  else {
    bVar1 = *(byte *)(*param_1 + 5);
    uVar3 = mbedtls_md_finish(param_1,auStack_78);
    if ((int)uVar3 == 0) {
      uVar3 = mbedtls_md_starts(param_1);
      if ((int)uVar3 == 0) {
        uVar3 = mbedtls_md_update(param_1,lVar2 + (ulong)bVar1,*(undefined1 *)(*param_1 + 5));
        if ((int)uVar3 == 0) {
          uVar3 = mbedtls_md_update(param_1,auStack_78,*(undefined1 *)(*param_1 + 4));
          if ((int)uVar3 == 0) {
            uVar3 = mbedtls_md_finish(param_1,param_2);
          }
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_md_hmac_reset(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == (long *)0x0) {
    return 0xffffaf00;
  }
  if ((*param_1 == 0) || (lVar1 = param_1[2], lVar1 == 0)) {
    uVar2 = 0xffffaf00;
  }
  else {
    uVar2 = mbedtls_md_starts();
    if ((int)uVar2 == 0) {
      uVar2 = mbedtls_md_update(param_1,lVar1,*(undefined1 *)(*param_1 + 5));
      return uVar2;
    }
  }
  return uVar2;
}



int mbedtls_md_hmac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    iVar1 = -0x5100;
  }
  else {
    local_48 = 0;
    local_58 = (undefined1  [16])0x0;
    iVar1 = mbedtls_md_setup(local_58,param_1,1);
    if (iVar1 == 0) {
      iVar1 = mbedtls_md_hmac_starts(local_58,param_2,param_3);
      if (iVar1 == 0) {
        if ((local_58._0_8_ == 0) || (local_48 == 0)) {
          iVar1 = -0x5100;
        }
        else {
          iVar1 = mbedtls_md_update(local_58,param_4,param_5);
          if (iVar1 == 0) {
            iVar1 = mbedtls_md_hmac_finish(local_58,param_6);
          }
        }
      }
    }
    mbedtls_md_free(local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


