
undefined8 fips_provider_version(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  uVar2 = OSSL_PROVIDER_available(param_1,&_LC0);
  if ((int)uVar2 == 0) goto LAB_00100057;
  OSSL_PARAM_construct_utf8_ptr(&local_b8,"version",&local_80,0);
  local_78._8_8_ = uStack_b0;
  local_78._0_8_ = local_b8;
  local_58._0_8_ = local_98;
  local_68._8_8_ = uStack_a0;
  local_68._0_8_ = local_a8;
  lVar3 = OSSL_PROVIDER_load(param_1,&_LC0);
  if (lVar3 != 0) {
    iVar1 = OSSL_PROVIDER_get_params(lVar3,local_78);
    if (iVar1 != 0) {
      iVar1 = __isoc99_sscanf(local_80,"%d.%d.%d",param_2,param_2 + 4,param_2 + 8);
      if (iVar1 == 3) {
        iVar1 = OSSL_PROVIDER_unload(lVar3);
        if (iVar1 != 0) {
          uVar2 = 1;
          goto LAB_00100057;
        }
        goto LAB_00100104;
      }
    }
    OSSL_PROVIDER_unload(lVar3);
  }
LAB_00100104:
  uVar2 = 0xffffffff;
LAB_00100057:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_get_libctx(long *param_1,long *param_2,long param_3,long *param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = OSSL_LIB_CTX_new();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      opt_printf_stderr("Failed to create libctx\n");
      goto LAB_001001ff;
    }
  }
  if (param_2 != (long *)0x0) {
    lVar3 = OSSL_PROVIDER_load(0,&_LC4);
    *param_2 = lVar3;
    if (lVar3 == 0) {
      opt_printf_stderr("Failed to load null provider into default libctx\n");
      goto LAB_001001ff;
    }
  }
  if (param_3 != 0) {
    iVar1 = OSSL_LIB_CTX_load_config(lVar2,param_3);
    if (iVar1 == 0) {
      opt_printf_stderr("Error loading config from file %s\n",param_3);
      goto LAB_001001ff;
    }
  }
  if ((param_4 != (long *)0x0) && (param_5 != 0)) {
    lVar2 = OSSL_PROVIDER_load(lVar2,param_5);
    *param_4 = lVar2;
    if (lVar2 == 0) {
      opt_printf_stderr("Failed to load provider %s\n",param_5);
LAB_001001ff:
      ERR_print_errors_fp(_stderr);
      return 0;
    }
  }
  return 1;
}



undefined8
test_arg_libctx(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
               undefined8 param_5)

{
  int iVar1;
  char *__s1;
  undefined8 uVar2;
  
  __s1 = (char *)test_get_argument((long)param_4);
  iVar1 = test_ptr("test/testutil/provider.c",0x3a,"module_name = test_get_argument(argn)",__s1);
  if (iVar1 == 0) {
    test_error("test/testutil/provider.c",0x3b,"usage: <prog> %s",param_5);
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(__s1,"none");
    uVar2 = 1;
    if (iVar1 != 0) {
      uVar2 = test_get_argument((long)(param_4 + 1));
      uVar2 = test_get_libctx(param_1,param_2,uVar2,param_3,__s1);
      return uVar2;
    }
  }
  return uVar2;
}



bool fips_provider_version_eq(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = fips_provider_version(param_1,&local_2c);
  bVar2 = iVar1 == 0;
  if (((0 < iVar1) && (bVar2 = false, local_2c == param_2)) && (local_28 == param_3)) {
    bVar2 = local_24 == param_4;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool fips_provider_version_ne(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = fips_provider_version(param_1,&local_2c);
  bVar2 = iVar1 == 0;
  if (((0 < iVar1) && (bVar2 = true, local_2c == param_2)) && (local_28 == param_3)) {
    bVar2 = local_24 != param_4;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool fips_provider_version_le(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = fips_provider_version(param_1,&local_2c);
  bVar2 = iVar1 == 0;
  if (0 < iVar1) {
    bVar2 = true;
    if ((param_2 <= local_2c) && (bVar2 = false, local_2c == param_2)) {
      bVar2 = true;
      if ((param_3 <= local_28) && (bVar2 = false, local_28 == param_3)) {
        bVar2 = local_24 <= param_4;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool fips_provider_version_lt(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = fips_provider_version(param_1,&local_2c);
  bVar2 = iVar1 == 0;
  if (0 < iVar1) {
    bVar2 = true;
    if ((param_2 <= local_2c) && (bVar2 = false, local_2c == param_2)) {
      bVar2 = true;
      if ((param_3 <= local_28) && (bVar2 = false, local_28 == param_3)) {
        bVar2 = local_24 < param_4;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool fips_provider_version_gt(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = fips_provider_version(param_1,&local_2c);
  bVar2 = iVar1 == 0;
  if (0 < iVar1) {
    bVar2 = true;
    if ((local_2c <= param_2) && (bVar2 = false, local_2c == param_2)) {
      bVar2 = true;
      if ((local_28 <= param_3) && (bVar2 = false, local_28 == param_3)) {
        bVar2 = param_4 < local_24;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool fips_provider_version_ge(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = fips_provider_version(param_1,&local_2c);
  bVar2 = iVar1 == 0;
  if (0 < iVar1) {
    bVar2 = true;
    if ((local_2c <= param_2) && (bVar2 = false, local_2c == param_2)) {
      bVar2 = true;
      if ((local_28 <= param_3) && (bVar2 = false, local_28 == param_3)) {
        bVar2 = param_4 <= local_24;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



undefined8 fips_provider_version_match(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  undefined8 uVar6;
  ushort **ppuVar7;
  byte bVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    bVar8 = *param_2;
    if (bVar8 == 0) {
LAB_00100768:
      uVar6 = 1;
      goto LAB_0010076d;
    }
    ppuVar7 = __ctype_b_loc();
    puVar4 = *ppuVar7;
    uVar2 = puVar4[bVar8];
    uVar3 = uVar2;
    pbVar9 = param_2;
    if ((uVar2 & 0x2000) != 0) {
      do {
        bVar8 = param_2[1];
        param_2 = param_2 + 1;
        uVar2 = puVar4[bVar8];
      } while ((uVar2 & 0x2000) != 0);
      uVar3 = uVar2;
      pbVar9 = param_2;
      if (bVar8 == 0) goto LAB_00100768;
    }
    while ((uVar2 & 0x2000) == 0) {
      pbVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      if (*pbVar1 == 0) break;
      uVar2 = puVar4[*pbVar1];
    }
    if (bVar8 == 0x21) {
      pbVar9 = pbVar9 + 1;
      iVar5 = __isoc99_sscanf(pbVar9,"%d.%d.%d",&local_3c,&local_38,&local_34);
      if (iVar5 == 3) {
        uVar6 = fips_provider_version_ne(param_1,local_3c,local_38,local_34);
        goto LAB_00100700;
      }
      goto LAB_001007b9;
    }
    if (bVar8 != 0x3d) {
      if (bVar8 == 0x3c) {
        if (pbVar9[1] == 0x3d) {
          pbVar9 = pbVar9 + 2;
          iVar5 = __isoc99_sscanf(pbVar9,"%d.%d.%d",&local_3c,&local_38,&local_34);
          if (iVar5 == 3) {
            uVar6 = fips_provider_version_le(param_1,local_3c,local_38,local_34);
            goto LAB_00100700;
          }
        }
        else {
          pbVar9 = pbVar9 + 1;
          iVar5 = __isoc99_sscanf(pbVar9,"%d.%d.%d",&local_3c,&local_38,&local_34);
          if (iVar5 == 3) {
            uVar6 = fips_provider_version_lt(param_1,local_3c,local_38,local_34);
LAB_00100700:
            iVar5 = (int)uVar6;
            goto joined_r0x00100702;
          }
        }
LAB_001007b9:
        test_info("test/testutil/provider.c",0xd3,"Error matching FIPS version: version %s\n",pbVar9
                 );
      }
      else {
        if (bVar8 == 0x3e) {
          if (pbVar9[1] == 0x3d) {
            pbVar9 = pbVar9 + 2;
            iVar5 = __isoc99_sscanf(pbVar9,"%d.%d.%d",&local_3c,&local_38,&local_34);
            if (iVar5 == 3) {
              uVar6 = fips_provider_version_ge(param_1,local_3c,local_38,local_34);
              goto LAB_00100700;
            }
          }
          else {
            pbVar9 = pbVar9 + 1;
            iVar5 = __isoc99_sscanf(pbVar9,"%d.%d.%d",&local_3c,&local_38,&local_34);
            if (iVar5 == 3) {
              uVar6 = fips_provider_version_gt(param_1,local_3c,local_38,local_34);
              goto LAB_00100700;
            }
          }
          goto LAB_001007b9;
        }
        if ((uVar3 & 0x800) != 0) goto LAB_001007e4;
        test_info("test/testutil/provider.c",0xcf,"Error matching FIPS version: mode %s\n",pbVar9);
      }
LAB_001007d6:
      uVar6 = 0xffffffff;
      goto LAB_0010076d;
    }
    pbVar9 = pbVar9 + 1;
LAB_001007e4:
    iVar5 = __isoc99_sscanf(pbVar9,"%d.%d.%d",&local_3c,&local_38,&local_34);
    if (iVar5 != 3) goto LAB_001007b9;
    uVar6 = fips_provider_version_eq(param_1,local_3c,local_38,local_34);
    iVar5 = (int)uVar6;
joined_r0x00100702:
    if (iVar5 < 0) {
      test_info("test/testutil/provider.c",0xeb,"Error matching FIPS version: internal error\n");
      goto LAB_001007d6;
    }
    if (iVar5 == 0) {
LAB_0010076d:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


