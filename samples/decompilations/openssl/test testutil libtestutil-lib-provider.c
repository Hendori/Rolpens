
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
      goto LAB_001000cf;
    }
  }
  if (param_2 != (long *)0x0) {
    lVar3 = OSSL_PROVIDER_load(0,&_LC1);
    *param_2 = lVar3;
    if (lVar3 == 0) {
      opt_printf_stderr("Failed to load null provider into default libctx\n");
      goto LAB_001000cf;
    }
  }
  if (param_3 != 0) {
    iVar1 = OSSL_LIB_CTX_load_config(lVar2,param_3);
    if (iVar1 == 0) {
      opt_printf_stderr("Error loading config from file %s\n",param_3);
      goto LAB_001000cf;
    }
  }
  if ((param_4 != (long *)0x0) && (param_5 != 0)) {
    lVar2 = OSSL_PROVIDER_load(lVar2,param_5);
    *param_4 = lVar2;
    if (lVar2 == 0) {
      opt_printf_stderr("Failed to load provider %s\n",param_5);
LAB_001000cf:
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
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  iVar1 = OSSL_PROVIDER_available(param_1,&_LC9);
  bVar3 = true;
  if (iVar1 == 0) goto LAB_0010025e;
  OSSL_PARAM_construct_utf8_ptr(&local_d8,"version",&local_a0,0);
  local_88._8_8_ = uStack_d0;
  local_88._0_8_ = local_d8;
  local_68._0_8_ = local_b8;
  local_78._8_8_ = uStack_c0;
  local_78._0_8_ = local_c8;
  lVar2 = OSSL_PROVIDER_load(param_1,&_LC9);
  if (lVar2 != 0) {
    iVar1 = OSSL_PROVIDER_get_params(lVar2,local_88);
    if (iVar1 != 0) {
      iVar1 = __isoc99_sscanf(local_a0,"%d.%d.%d",&local_94,&local_90,&local_8c);
      if (iVar1 == 3) {
        iVar1 = OSSL_PROVIDER_unload(lVar2);
        if (iVar1 != 0) {
          bVar3 = false;
          if ((local_94 == param_2) && (local_90 == param_3)) {
            bVar3 = local_8c == param_4;
          }
          goto LAB_0010025e;
        }
        goto LAB_00100310;
      }
    }
    OSSL_PROVIDER_unload(lVar2);
  }
LAB_00100310:
  bVar3 = false;
LAB_0010025e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool fips_provider_version_ne(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  bVar3 = true;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar1 = OSSL_PROVIDER_available(param_1,&_LC9);
  if (iVar1 == 0) goto LAB_001003cf;
  OSSL_PARAM_construct_utf8_ptr(&local_e8,"version",&local_b0,0);
  local_98._8_8_ = uStack_e0;
  local_98._0_8_ = local_e8;
  local_78._0_8_ = local_c8;
  local_88._8_8_ = uStack_d0;
  local_88._0_8_ = local_d8;
  lVar2 = OSSL_PROVIDER_load(param_1,&_LC9);
  if (lVar2 != 0) {
    iVar1 = OSSL_PROVIDER_get_params(lVar2,local_98);
    if (iVar1 != 0) {
      iVar1 = __isoc99_sscanf(local_b0,"%d.%d.%d",&local_a4,&local_a0,&local_9c);
      if (iVar1 == 3) {
        iVar1 = OSSL_PROVIDER_unload(lVar2);
        if (iVar1 != 0) {
          if ((local_a4 == param_2) && (local_a0 == param_3)) {
            bVar3 = local_9c != param_4;
          }
          goto LAB_001003cf;
        }
        goto LAB_00100488;
      }
    }
    OSSL_PROVIDER_unload(lVar2);
  }
LAB_00100488:
  bVar3 = false;
LAB_001003cf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool fips_provider_version_le(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  bVar3 = true;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar1 = OSSL_PROVIDER_available(param_1,&_LC9);
  if (iVar1 == 0) goto LAB_0010053f;
  OSSL_PARAM_construct_utf8_ptr(&local_e8,"version",&local_b0,0);
  local_98._8_8_ = uStack_e0;
  local_98._0_8_ = local_e8;
  local_78._0_8_ = local_c8;
  local_88._8_8_ = uStack_d0;
  local_88._0_8_ = local_d8;
  lVar2 = OSSL_PROVIDER_load(param_1,&_LC9);
  if (lVar2 != 0) {
    iVar1 = OSSL_PROVIDER_get_params(lVar2,local_98);
    if (iVar1 != 0) {
      iVar1 = __isoc99_sscanf(local_b0,"%d.%d.%d",&local_a4,&local_a0,&local_9c);
      if (iVar1 == 3) {
        iVar1 = OSSL_PROVIDER_unload(lVar2);
        if (iVar1 != 0) {
          if ((param_2 <= local_a4) && (bVar3 = false, local_a4 == param_2)) {
            bVar3 = true;
            if ((param_3 <= local_a0) && (bVar3 = false, local_a0 == param_3)) {
              bVar3 = local_9c <= param_4;
            }
          }
          goto LAB_0010053f;
        }
        goto LAB_001005f8;
      }
    }
    OSSL_PROVIDER_unload(lVar2);
  }
LAB_001005f8:
  bVar3 = false;
LAB_0010053f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool fips_provider_version_lt(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  bVar3 = true;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar1 = OSSL_PROVIDER_available(param_1,&_LC9);
  if (iVar1 == 0) goto LAB_001006cf;
  OSSL_PARAM_construct_utf8_ptr(&local_e8,"version",&local_b0,0);
  local_98._8_8_ = uStack_e0;
  local_98._0_8_ = local_e8;
  local_78._0_8_ = local_c8;
  local_88._8_8_ = uStack_d0;
  local_88._0_8_ = local_d8;
  lVar2 = OSSL_PROVIDER_load(param_1,&_LC9);
  if (lVar2 != 0) {
    iVar1 = OSSL_PROVIDER_get_params(lVar2,local_98);
    if (iVar1 != 0) {
      iVar1 = __isoc99_sscanf(local_b0,"%d.%d.%d",&local_a4,&local_a0,&local_9c);
      if (iVar1 == 3) {
        iVar1 = OSSL_PROVIDER_unload(lVar2);
        if (iVar1 != 0) {
          if ((param_2 <= local_a4) && (bVar3 = false, local_a4 == param_2)) {
            bVar3 = true;
            if ((param_3 <= local_a0) && (bVar3 = false, local_a0 == param_3)) {
              bVar3 = local_9c < param_4;
            }
          }
          goto LAB_001006cf;
        }
        goto LAB_00100788;
      }
    }
    OSSL_PROVIDER_unload(lVar2);
  }
LAB_00100788:
  bVar3 = false;
LAB_001006cf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool fips_provider_version_gt(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  bVar3 = true;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar1 = OSSL_PROVIDER_available(param_1,&_LC9);
  if (iVar1 == 0) goto LAB_0010085f;
  OSSL_PARAM_construct_utf8_ptr(&local_e8,"version",&local_b0,0);
  local_98._8_8_ = uStack_e0;
  local_98._0_8_ = local_e8;
  local_78._0_8_ = local_c8;
  local_88._8_8_ = uStack_d0;
  local_88._0_8_ = local_d8;
  lVar2 = OSSL_PROVIDER_load(param_1,&_LC9);
  if (lVar2 != 0) {
    iVar1 = OSSL_PROVIDER_get_params(lVar2,local_98);
    if (iVar1 != 0) {
      iVar1 = __isoc99_sscanf(local_b0,"%d.%d.%d",&local_a4,&local_a0,&local_9c);
      if (iVar1 == 3) {
        iVar1 = OSSL_PROVIDER_unload(lVar2);
        if (iVar1 != 0) {
          if ((local_a4 <= param_2) && (bVar3 = false, local_a4 == param_2)) {
            bVar3 = true;
            if ((local_a0 <= param_3) && (bVar3 = false, local_a0 == param_3)) {
              bVar3 = param_4 < local_9c;
            }
          }
          goto LAB_0010085f;
        }
        goto LAB_00100918;
      }
    }
    OSSL_PROVIDER_unload(lVar2);
  }
LAB_00100918:
  bVar3 = false;
LAB_0010085f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool fips_provider_version_ge(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  bVar3 = true;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar1 = OSSL_PROVIDER_available(param_1,&_LC9);
  if (iVar1 == 0) goto LAB_001009ef;
  OSSL_PARAM_construct_utf8_ptr(&local_e8,"version",&local_b0,0);
  local_98._8_8_ = uStack_e0;
  local_98._0_8_ = local_e8;
  local_78._0_8_ = local_c8;
  local_88._8_8_ = uStack_d0;
  local_88._0_8_ = local_d8;
  lVar2 = OSSL_PROVIDER_load(param_1,&_LC9);
  if (lVar2 != 0) {
    iVar1 = OSSL_PROVIDER_get_params(lVar2,local_98);
    if (iVar1 != 0) {
      iVar1 = __isoc99_sscanf(local_b0,"%d.%d.%d",&local_a4,&local_a0,&local_9c);
      if (iVar1 == 3) {
        iVar1 = OSSL_PROVIDER_unload(lVar2);
        if (iVar1 != 0) {
          if ((local_a4 <= param_2) && (bVar3 = false, local_a4 == param_2)) {
            bVar3 = true;
            if ((local_a0 <= param_3) && (bVar3 = false, local_a0 == param_3)) {
              bVar3 = param_4 <= local_9c;
            }
          }
          goto LAB_001009ef;
        }
        goto LAB_00100aa8;
      }
    }
    OSSL_PROVIDER_unload(lVar2);
  }
LAB_00100aa8:
  bVar3 = false;
LAB_001009ef:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00100c18:
      uVar6 = 1;
      goto LAB_00100c1d;
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
      if (bVar8 == 0) goto LAB_00100c18;
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
        goto LAB_00100bb0;
      }
      goto LAB_00100c69;
    }
    if (bVar8 != 0x3d) {
      if (bVar8 == 0x3c) {
        if (pbVar9[1] == 0x3d) {
          pbVar9 = pbVar9 + 2;
          iVar5 = __isoc99_sscanf(pbVar9,"%d.%d.%d",&local_3c,&local_38,&local_34);
          if (iVar5 == 3) {
            uVar6 = fips_provider_version_le(param_1,local_3c,local_38,local_34);
            goto LAB_00100bb0;
          }
        }
        else {
          pbVar9 = pbVar9 + 1;
          iVar5 = __isoc99_sscanf(pbVar9,"%d.%d.%d",&local_3c,&local_38,&local_34);
          if (iVar5 == 3) {
            uVar6 = fips_provider_version_lt(param_1,local_3c,local_38,local_34);
LAB_00100bb0:
            iVar5 = (int)uVar6;
            goto joined_r0x00100bb2;
          }
        }
LAB_00100c69:
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
              goto LAB_00100bb0;
            }
          }
          else {
            pbVar9 = pbVar9 + 1;
            iVar5 = __isoc99_sscanf(pbVar9,"%d.%d.%d",&local_3c,&local_38,&local_34);
            if (iVar5 == 3) {
              uVar6 = fips_provider_version_gt(param_1,local_3c,local_38,local_34);
              goto LAB_00100bb0;
            }
          }
          goto LAB_00100c69;
        }
        if ((uVar3 & 0x800) != 0) goto LAB_00100c94;
        test_info("test/testutil/provider.c",0xcf,"Error matching FIPS version: mode %s\n",pbVar9);
      }
LAB_00100c86:
      uVar6 = 0xffffffff;
      goto LAB_00100c1d;
    }
    pbVar9 = pbVar9 + 1;
LAB_00100c94:
    iVar5 = __isoc99_sscanf(pbVar9,"%d.%d.%d",&local_3c,&local_38,&local_34);
    if (iVar5 != 3) goto LAB_00100c69;
    uVar6 = fips_provider_version_eq(param_1,local_3c,local_38,local_34);
    iVar5 = (int)uVar6;
joined_r0x00100bb2:
    if (iVar5 < 0) {
      test_info("test/testutil/provider.c",0xeb,"Error matching FIPS version: internal error\n");
      goto LAB_00100c86;
    }
    if (iVar5 == 0) {
LAB_00100c1d:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


