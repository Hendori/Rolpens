
/* WARNING: Type propagation algorithm not settling */

undefined8 import_public_into_psa_constprop_0(undefined8 *param_1,short *param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined1 *local_260;
  long local_258 [2];
  undefined1 local_248 [528];
  undefined1 local_38 [8];
  long local_30;
  
  sVar1 = *param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_260 = (undefined1 *)0x0;
  local_258[0] = 0;
  if ((param_1 == (undefined8 *)0x0) || ((int *)*param_1 == (int *)0x0)) {
    uVar7 = 0xffffc180;
    goto LAB_00100094;
  }
  iVar2 = *(int *)*param_1;
  if (iVar2 == 1) {
    if (sVar1 != 0x4001) {
      uVar7 = 0xffffc100;
      goto LAB_00100094;
    }
    local_260 = local_38;
    uVar7 = mbedtls_rsa_write_pubkey(param_1[1],local_248,&local_260);
    if ((int)uVar7 < 0) goto LAB_00100094;
    local_258[0] = (long)(int)uVar7;
    puVar4 = local_260;
  }
  else {
    uVar7 = 0xffffc180;
    if (2 < iVar2 - 2U) goto LAB_00100094;
    puVar3 = (undefined4 *)param_1[1];
    local_258[1] = 0;
    uVar5 = mbedtls_ecc_group_to_psa(*puVar3,local_258 + 1);
    uVar7 = 0xffffc100;
    if (sVar1 != CONCAT11(0x41,uVar5)) goto LAB_00100094;
    uVar7 = mbedtls_ecp_write_public_key(puVar3,0,local_258,local_248,0x210);
    puVar4 = local_248;
    if ((int)uVar7 < 0) goto LAB_00100094;
  }
  local_260 = puVar4;
  uVar6 = psa_import_key(param_2,local_260,local_258[0],param_3);
  uVar7 = psa_pk_status_to_mbedtls(uVar6);
LAB_00100094:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



ulong import_pair_into_psa_constprop_0(undefined8 *param_1,short *param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_988;
  undefined1 *local_980;
  undefined1 local_978 [2363];
  undefined1 local_3d [13];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (undefined8 *)0x0) || ((int *)*param_1 == (int *)0x0)) {
    uVar7 = 0xffffc180;
  }
  else {
    iVar2 = *(int *)*param_1;
    if (iVar2 == 1) {
      uVar7 = 0xffffc100;
      if (*param_2 == 0x7001) {
        local_980 = local_3d;
        uVar7 = mbedtls_rsa_write_key(param_1[1],local_978,&local_980);
        if (-1 < (int)uVar7) {
          lVar8 = (long)local_3d - (long)local_980;
          uVar5 = psa_import_key(param_2,local_980,lVar8,param_3);
          uVar6 = psa_pk_status_to_mbedtls(uVar5);
          mbedtls_platform_zeroize(local_980,lVar8);
          uVar7 = (ulong)uVar6;
        }
      }
    }
    else {
      uVar7 = 0xffffc180;
      if (iVar2 - 2U < 3) {
        puVar3 = (undefined4 *)param_1[1];
        sVar1 = *param_2;
        local_988 = 0;
        uVar4 = mbedtls_ecc_group_to_psa(*puVar3,&local_988);
        uVar7 = 0xffffc100;
        if ((sVar1 == CONCAT11(0x71,uVar4)) && (*(short *)((long)puVar3 + 0xca) != 0)) {
          local_980 = (undefined1 *)0x0;
          uVar7 = mbedtls_ecp_write_key_ext(puVar3,&local_980,local_978,0x42);
          if (-1 < (int)uVar7) {
            uVar5 = psa_import_key(param_2,local_978,local_980,param_3);
            uVar6 = psa_pk_status_to_mbedtls(uVar5);
            mbedtls_platform_zeroize(local_978,local_980);
            uVar7 = (ulong)uVar6;
          }
        }
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int copy_from_psa(ulong param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined2 uVar7;
  long in_FS_OFFSET;
  undefined8 local_9b0;
  undefined1 local_9a8 [16];
  undefined8 local_998;
  undefined1 local_988 [2376];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9a8 = (undefined1  [16])0x0;
  local_998 = 0;
  if (param_2 != (long *)0x0) {
    iVar1 = psa_get_key_attributes(param_1,local_9a8);
    if (iVar1 == 0) {
      if (param_3 == 0) {
        iVar1 = psa_export_key();
        if (iVar1 != 0) goto LAB_00100620;
        uVar7 = local_9a8._2_2_;
        uVar5 = local_9a8._0_2_;
        if (local_9a8._0_2_ == 0x7001) {
LAB_001004c8:
          if (*param_2 == 0) {
            if (_mbedtls_rsa_alt_info == (code *)0x0) {
              lVar3 = param_2[1];
            }
            else {
              lVar3 = (*_mbedtls_rsa_alt_info)();
              param_2[1] = lVar3;
              if (lVar3 == 0) {
LAB_0010065a:
                iVar1 = -0x3f80;
                goto LAB_00100458;
              }
            }
            *param_2 = (long)&mbedtls_rsa_info;
            if (_mbedtls_rsa_info != 1) {
              lVar3 = 0;
            }
            if (uVar5 == 0x7001) {
              iVar1 = mbedtls_rsa_parse_key(lVar3,local_988,local_9b0);
            }
            else {
              iVar1 = mbedtls_rsa_parse_pubkey();
            }
            if (iVar1 == 0) {
              uVar4 = local_9a8._12_4_ & 0xff;
              if (((local_9a8 & (undefined1  [16])0xff00000000) != (undefined1  [16])0x0) &&
                 ((uVar4 | 0x2000000) == 0x20000ff)) {
                uVar4 = 0;
              }
              lVar3 = 0;
              if (((local_9a8._12_4_ & 0xffffff00) == 0x7000300) ||
                 ((local_9a8._12_4_ & 0xffffef00) == 0x6000300)) {
                if (((int *)*param_2 != (int *)0x0) && (*(int *)*param_2 == 1)) {
                  lVar3 = param_2[1];
                }
                iVar1 = mbedtls_rsa_set_padding(lVar3,1,uVar4);
              }
              else if (((local_9a8._12_4_ & 0xffffff00) == 0x6000200) ||
                      (local_9a8._12_4_ == 0x7000200)) {
                if (((int *)*param_2 != (int *)0x0) && (*(int *)*param_2 == 1)) {
                  lVar3 = param_2[1];
                }
                iVar1 = mbedtls_rsa_set_padding(lVar3,0,uVar4);
              }
            }
          }
          else {
LAB_00100650:
            iVar1 = -16000;
          }
        }
        else {
LAB_001003bc:
          if (uVar5 == 0x4001) goto LAB_001004c8;
          uVar6 = uVar5 & 0xff00;
          if ((uVar6 != 0x7100) && (uVar6 != 0x4100)) goto LAB_00100640;
          if (*param_2 != 0) goto LAB_00100650;
          if (_mbedtls_pk_ecc_set_key != (code *)0x0) {
            lVar3 = (*_mbedtls_pk_ecc_set_key)();
            param_2[1] = lVar3;
            if (lVar3 != 0) goto LAB_0010040c;
            goto LAB_0010065a;
          }
LAB_0010040c:
          *param_2 = (long)&mbedtls_eckey_info;
          uVar2 = mbedtls_ecc_group_from_psa(uVar5 & 0xff,uVar7);
          iVar1 = mbedtls_pk_ecc_set_group(param_2,uVar2);
          if (iVar1 == 0) {
            if (uVar6 == 0x7100) {
              iVar1 = mbedtls_pk_ecc_set_key(param_2,local_988,local_9b0);
              if (iVar1 == 0) {
                iVar1 = mbedtls_pk_ecc_set_pubkey_from_prv
                                  (param_2,local_988,local_9b0,&mbedtls_psa_get_random,0);
              }
            }
            else {
              iVar1 = mbedtls_pk_ecc_set_pubkey();
            }
          }
        }
      }
      else {
        iVar1 = psa_export_public_key(param_1 & 0xffffffff,local_988,0x93b,&local_9b0);
        if (iVar1 == 0) {
          uVar5 = local_9a8._0_2_ & 0xcfff;
          uVar7 = local_9a8._2_2_;
          if (uVar5 != 0x7001) goto LAB_001003bc;
          goto LAB_001004c8;
        }
LAB_00100620:
        iVar1 = psa_pk_status_to_mbedtls(iVar1);
      }
LAB_00100458:
      psa_reset_key_attributes(local_9a8);
      mbedtls_platform_zeroize(local_988,0x93b);
      goto LAB_0010046d;
    }
  }
LAB_00100640:
  iVar1 = -16000;
LAB_0010046d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_pk_init(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  return;
}



void mbedtls_pk_free(long *param_1)

{
  code *pcVar1;
  
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x50), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1[1]);
    }
    mbedtls_platform_zeroize(param_1,0x10);
    return;
  }
  return;
}



undefined * mbedtls_pk_info_from_type(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = &mbedtls_eckeydh_info;
  if (param_1 != 3) {
    if (param_1 < 4) {
      puVar1 = &mbedtls_rsa_info;
      if (param_1 != 1) {
        puVar1 = &mbedtls_eckey_info;
        if (param_1 != 2) {
          puVar1 = (undefined *)0x0;
        }
        return puVar1;
      }
    }
    else {
      puVar1 = &mbedtls_ecdsa_info;
      if (param_1 != 4) {
        puVar1 = (undefined *)0x0;
      }
    }
  }
  return puVar1;
}



undefined8 mbedtls_pk_setup(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return 0xffffc180;
  }
  if (*param_1 == 0) {
    if (*(code **)(param_2 + 0x48) != (code *)0x0) {
      lVar1 = (**(code **)(param_2 + 0x48))();
      param_1[1] = lVar1;
      if (lVar1 == 0) {
        return 0xffffc080;
      }
    }
    *param_1 = param_2;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffc180;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
mbedtls_pk_setup_rsa_alt
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    puVar1 = (undefined8 *)(*_DAT_00102118)();
    param_1[1] = (long)puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      uVar2 = 0xffffc080;
    }
    else {
      *param_1 = (long)&mbedtls_rsa_alt_info;
      *puVar1 = param_2;
      puVar1[1] = param_3;
      puVar1[2] = param_4;
      puVar1[3] = param_5;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffc180;
}



undefined8 mbedtls_pk_can_do(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x001007f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x18))(param_2);
    return uVar1;
  }
  return 0;
}



undefined8 mbedtls_pk_get_psa_attributes(long *param_1,uint param_2,short *param_3)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (long *)0x0) || (puVar1 = (uint *)*param_1, puVar1 == (uint *)0x0)) {
    uVar9 = 0xffffc180;
    if ((param_2 == 0x400) || ((uVar9 = 0xffffc180, param_2 == 0x1000 || (param_2 == 0x200))))
    goto LAB_001008a5;
LAB_00100a7e:
    uVar9 = 0xffffc180;
    goto LAB_001008a5;
  }
  uVar8 = *puVar1;
  if (param_2 == 0x400) {
    uVar15 = 0xc03;
    uVar14 = 0xc00;
LAB_001008dc:
    bVar16 = param_2 != 0x100;
joined_r0x001008eb:
    if (4 < uVar8) {
LAB_00100894:
      uVar9 = 0xffffc180;
      if (uVar8 == 5) {
        uVar9 = 0xffffc680;
      }
      goto LAB_001008a5;
    }
    if (1 < uVar8) goto LAB_00100965;
    if (uVar8 != 1) goto LAB_00100a7e;
    if (param_2 == 0x200) {
LAB_00100bc4:
      bVar3 = true;
    }
    else {
      if (param_2 < 0x201) {
        if (param_2 != 0x100) goto LAB_00100b98;
        goto LAB_00100bc4;
      }
      if (param_2 != 0x1000) {
        if (param_2 < 0x1001) {
          if ((param_2 - 0x400 & 0xfffffbff) == 0) goto LAB_0010092b;
        }
        else if (param_2 == 0x2000) goto LAB_0010092b;
        goto LAB_00100b98;
      }
LAB_0010092b:
      bVar3 = false;
    }
    lVar11 = 0;
    if (puVar1 != (uint *)0x0) {
      lVar11 = param_1[1];
LAB_00100af3:
      if (*puVar1 != 1) {
        lVar11 = 0;
      }
    }
    iVar7 = mbedtls_rsa_check_privkey(lVar11);
    if ((iVar7 == 0) || (!bVar16)) {
      *param_3 = (-(ushort)!bVar16 & 0xd000) + 0x7001;
      if (*param_1 == 0) {
        sVar6 = 0;
      }
      else {
        uVar10 = (**(code **)(*param_1 + 0x10))(param_1);
        sVar6 = (short)uVar10;
        if (0xfff8 < uVar10) {
          sVar6 = -1;
        }
      }
      param_3[1] = sVar6;
      iVar7 = mbedtls_rsa_get_padding_mode(lVar11);
      if (iVar7 == 1) {
        uVar8 = 0x60013ff;
        if (bVar3) {
          bVar5 = mbedtls_rsa_get_md_alg(lVar11);
          uVar8 = bVar5 | 0x7000300;
        }
      }
      else {
        uVar8 = (-(uint)!bVar3 & 0xff0000ff) + 0x7000200;
      }
      *(uint *)(param_3 + 6) = uVar8;
LAB_00100a14:
      param_3[8] = 0;
      param_3[9] = 0;
      if ((uVar14 & 0x1000) != 0) {
        uVar15 = uVar14 | 0x403;
      }
      if ((uVar15 & 0x2000) != 0) {
        uVar15 = uVar15 | 0x800;
      }
      uVar9 = 0;
      *(uint *)(param_3 + 4) = uVar15;
      goto LAB_001008a5;
    }
  }
  else {
    if (param_2 == 0x1000) {
      if (4 < uVar8) goto LAB_00100894;
      if (1 < uVar8) {
        puVar13 = (undefined4 *)param_1[1];
        uVar15 = 0x3003;
        bVar16 = true;
        uVar14 = 0x3000;
        goto LAB_00100972;
      }
      if (uVar8 != 1) goto LAB_00100a7e;
      bVar16 = true;
      lVar11 = param_1[1];
      uVar15 = 0x3003;
      uVar14 = 0x3000;
      bVar3 = false;
      goto LAB_00100af3;
    }
    if (param_2 != 0x200) {
      uVar15 = param_2 | 3;
      uVar14 = param_2;
      if ((param_2 != 0x800) && (param_2 != 0x2000)) goto LAB_001008dc;
      bVar16 = false;
      goto joined_r0x001008eb;
    }
    if (4 < uVar8) goto LAB_00100894;
    if (uVar8 < 2) {
      if (uVar8 != 1) goto LAB_00100a7e;
      bVar16 = true;
      uVar15 = 0x303;
      uVar14 = 0x300;
      goto LAB_00100bc4;
    }
    uVar15 = 0x303;
    uVar14 = 0x300;
    bVar16 = true;
LAB_00100965:
    puVar13 = (undefined4 *)param_1[1];
    if (puVar1 == (uint *)0x0) goto mbedtls_pk_get_psa_attributes_cold;
LAB_00100972:
    if (2 < *puVar1 - 2) {
mbedtls_pk_get_psa_attributes_cold:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    sVar6 = *(short *)((long)puVar13 + 0xca);
    local_48 = 0;
    uVar4 = mbedtls_ecc_group_to_psa(*puVar13,&local_48);
    if (param_2 == 0x2000) {
LAB_00100aaa:
      if (uVar8 != 3) {
        uVar12 = 0x60007ff;
LAB_001009d4:
        if ((sVar6 != 0) || (!bVar16)) {
          if (bVar16) {
            sVar6 = CONCAT11(0x71,uVar4);
          }
          else {
            sVar6 = CONCAT11(0x41,uVar4);
          }
          *param_3 = sVar6;
          *(undefined4 *)(param_3 + 6) = uVar12;
          uVar10 = local_48;
          if (0xfff8 < local_48) {
            uVar10 = 0xffff;
          }
          param_3[1] = (short)uVar10;
          goto LAB_00100a14;
        }
      }
    }
    else if (param_2 < 0x2001) {
      if (((param_2 - 0x400 & 0xfffffbff) == 0) || (param_2 == 0x1000)) goto LAB_00100aaa;
    }
    else if ((param_2 == 0x4000) && (uVar8 != 4)) {
      uVar12 = 0x9020000;
      goto LAB_001009d4;
    }
  }
LAB_00100b98:
  uVar9 = 0xffffc100;
LAB_001008a5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_pk_import_into_psa(undefined8 *param_1,ushort *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = 0;
  if (((param_1 != (undefined8 *)0x0) && ((int *)*param_1 != (int *)0x0)) && (*(int *)*param_1 == 5)
     ) {
    return 0xffffc680;
  }
  if ((*param_2 & 0x7000) != 0x4000) {
    uVar1 = import_pair_into_psa_constprop_0();
    return uVar1;
  }
  uVar1 = import_public_into_psa_constprop_0();
  return uVar1;
}



void mbedtls_pk_copy_from_psa(undefined8 param_1,undefined8 param_2)

{
  copy_from_psa(param_1,param_2,0);
  return;
}



void mbedtls_pk_copy_public_from_psa(undefined8 param_1,undefined8 param_2)

{
  copy_from_psa(param_1,param_2,1);
  return;
}



undefined8
mbedtls_pk_verify_restartable
          (long *param_1,int param_2,long param_3,ulong param_4,undefined8 param_5,
          undefined8 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 == 0) && (param_4 == 0)) {
    if (*param_1 == 0) {
      return 0xffffc180;
    }
  }
  else {
    if (param_3 == 0) {
      return 0xffffc180;
    }
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 0xffffc180;
    }
    if (param_4 != 0) goto LAB_00100d10;
  }
  uVar2 = mbedtls_md_info_from_type(param_2);
  bVar1 = mbedtls_md_get_size(uVar2);
  param_4 = (ulong)bVar1;
  if (param_4 == 0) {
    return 0xffffc180;
  }
  lVar3 = *param_1;
LAB_00100d10:
  if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100d29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  return 0xffffc100;
}



undefined8
mbedtls_pk_verify(long *param_1,int param_2,long param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 == 0) && (param_4 == 0)) {
    if (*param_1 == 0) {
      return 0xffffc180;
    }
  }
  else {
    if (param_3 == 0) {
      return 0xffffc180;
    }
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 0xffffc180;
    }
    if (param_4 != 0) goto LAB_00100db0;
  }
  uVar2 = mbedtls_md_info_from_type(param_2);
  bVar1 = mbedtls_md_get_size(uVar2);
  param_4 = (ulong)bVar1;
  if (param_4 == 0) {
    return 0xffffc180;
  }
  lVar3 = *param_1;
LAB_00100db0:
  if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100dc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  return 0xffffc100;
}



ulong mbedtls_pk_verify_ext
                (int param_1,undefined4 *param_2,long *param_3,int param_4,long param_5,
                ulong param_6,undefined8 param_7,ulong param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if (((param_4 == 0 && param_6 == 0) || (param_5 != 0)) && (*param_3 != 0)) {
    iVar2 = (**(code **)(*param_3 + 0x18))();
    if (iVar2 == 0) {
      return 0xffffc100;
    }
    if (param_1 == 6) {
      piVar1 = (int *)*param_3;
      if ((piVar1 == (int *)0x0) || (*piVar1 != 1)) {
        return 0xffffc680;
      }
      if ((param_4 != 0 || param_6 >> 0x20 == 0) && (param_2 != (undefined4 *)0x0)) {
        lVar5 = (**(code **)(piVar1 + 4))(param_3);
        if (param_8 < lVar5 + 7U >> 3) {
          return 0xffffbc80;
        }
        lVar5 = param_3[1];
        if ((int *)*param_3 == (int *)0x0) {
          lVar5 = 0;
        }
        else if (*(int *)*param_3 != 1) {
          lVar5 = 0;
        }
        uVar3 = mbedtls_rsa_rsassa_pss_verify_ext
                          (lVar5,param_4,param_6 & 0xffffffff,param_5,*param_2,param_2[1],param_7);
        if (uVar3 != 0) {
          return (ulong)uVar3;
        }
        if (*param_3 == 0) {
          uVar4 = 0;
        }
        else {
          lVar5 = (**(code **)(*param_3 + 0x10))(param_3);
          uVar4 = lVar5 + 7U >> 3;
        }
        if (param_8 <= uVar4) {
          return (ulong)uVar3;
        }
        return 0xffffc700;
      }
    }
    else if (param_2 == (undefined4 *)0x0) {
      uVar4 = mbedtls_pk_verify_restartable(param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar4;
    }
  }
  return 0xffffc180;
}



undefined8
mbedtls_pk_sign_restartable
          (long *param_1,int param_2,long param_3,ulong param_4,undefined8 param_5,
          undefined8 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 == 0) && (param_4 == 0)) {
    if (*param_1 == 0) {
      return 0xffffc180;
    }
  }
  else {
    if (param_3 == 0) {
      return 0xffffc180;
    }
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 0xffffc180;
    }
    if (param_4 != 0) goto LAB_00101015;
  }
  uVar2 = mbedtls_md_info_from_type(param_2);
  bVar1 = mbedtls_md_get_size(uVar2);
  param_4 = (ulong)bVar1;
  if (param_4 == 0) {
    return 0xffffc180;
  }
  lVar3 = *param_1;
LAB_00101015:
  if (*(code **)(lVar3 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar3 + 0x28))(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  return 0xffffc100;
}



undefined8
mbedtls_pk_sign(long *param_1,int param_2,long param_3,ulong param_4,undefined8 param_5,
               undefined8 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 == 0) && (param_4 == 0)) {
    if (*param_1 == 0) {
      return 0xffffc180;
    }
  }
  else {
    if (param_3 == 0) {
      return 0xffffc180;
    }
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 0xffffc180;
    }
    if (param_4 != 0) goto LAB_001010e5;
  }
  uVar2 = mbedtls_md_info_from_type(param_2);
  bVar1 = mbedtls_md_get_size(uVar2);
  param_4 = (ulong)bVar1;
  if (param_4 == 0) {
    return 0xffffc180;
  }
  lVar3 = *param_1;
LAB_001010e5:
  if (*(code **)(lVar3 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar3 + 0x28))(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  return 0xffffc100;
}



undefined8
mbedtls_pk_sign_ext(int param_1,long *param_2,undefined4 param_3,undefined8 param_4,ulong param_5,
                   undefined8 param_6,ulong param_7,undefined8 *param_8,undefined8 param_9,
                   undefined8 param_10)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if (*param_2 == 0) {
    return 0xffffc180;
  }
  iVar2 = (**(code **)(*param_2 + 0x18))();
  if (iVar2 == 0) {
    return 0xffffc100;
  }
  if (param_1 != 6) {
    uVar4 = mbedtls_pk_sign_restartable(param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar4;
  }
  if (*param_2 == 0) {
    piVar5 = (int *)0x0;
    if (param_5 != 0) goto LAB_001011fd;
LAB_001012a0:
    uVar4 = mbedtls_md_info_from_type(param_3);
    bVar1 = mbedtls_md_get_size(uVar4);
    param_5 = (ulong)bVar1;
    if (param_5 == 0) {
      return 0xffffc180;
    }
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    if (param_7 < lVar3 + 7U >> 3) {
      return 0xffffc780;
    }
    if (param_5 == 0) goto LAB_001012a0;
  }
  piVar5 = (int *)*param_2;
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 1) {
      piVar5 = (int *)param_2[1];
    }
    else {
      piVar5 = (int *)0x0;
    }
  }
LAB_001011fd:
  uVar4 = mbedtls_rsa_rsassa_pss_sign_no_mode_check
                    (piVar5,param_9,param_10,param_3,param_5 & 0xffffffff,param_4,param_6);
  if ((int)uVar4 == 0) {
    *param_8 = *(undefined8 *)(piVar5 + 2);
  }
  return uVar4;
}



undefined8 mbedtls_pk_decrypt(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0xffffc180;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffc100;
}



undefined8 mbedtls_pk_encrypt(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0xffffc180;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffc100;
}



undefined8 mbedtls_pk_check_pair(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)*param_1;
  if (((piVar1 != (int *)0x0) && (piVar2 = (int *)*param_2, param_3 != 0)) && (piVar2 != (int *)0x0)
     ) {
    if (*(code **)(piVar2 + 0x10) == (code *)0x0) {
      return 0xffffc680;
    }
    if (*piVar2 == 5) {
      if (*piVar1 != 1) {
        return 0xffffc100;
      }
    }
    else if ((piVar1 != piVar2) && (*piVar2 != 7)) {
      return 0xffffc100;
    }
                    /* WARNING: Could not recover jumptable at 0x001013b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(piVar2 + 0x10))();
    return uVar3;
  }
  return 0xffffc180;
}



undefined8 mbedtls_pk_get_bitlen(long *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x001013f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x10))();
    return uVar1;
  }
  return 0;
}



undefined8 mbedtls_pk_debug(long *param_1)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
    return 0xffffc180;
  }
  pcVar1 = *(code **)(*param_1 + 0x58);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return 0;
  }
  return 0xffffc100;
}



char * mbedtls_pk_get_name(long *param_1)

{
  char *pcVar1;
  
  pcVar1 = "invalid PK";
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    pcVar1 = *(char **)(*param_1 + 8);
  }
  return pcVar1;
}



undefined4 mbedtls_pk_get_type(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    return *(undefined4 *)*param_1;
  }
  return 0;
}



void mbedtls_pk_get_psa_attributes_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


