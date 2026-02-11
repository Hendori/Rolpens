
undefined8 OSSL_PARAM_print_to_bio(long *param_1,BIO *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  BIGNUM *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
LAB_00100100:
    uVar3 = 0;
  }
  else {
    do {
      iVar2 = BIO_printf(param_2,"%s: ");
      if (iVar2 == -1) goto LAB_00100100;
      if (param_3 == 0) {
        BIO_printf(param_2,"\n");
      }
      else {
        switch(*(uint *)(param_1 + 1)) {
        default:
          iVar2 = BIO_printf(param_2,"unknown type (%u) of %zu bytes\n",
                             (ulong)*(uint *)(param_1 + 1),param_1[3]);
          break;
        case 1:
          if ((ulong)param_1[3] < 9) {
            iVar2 = OSSL_PARAM_get_int64(param_1,&local_60);
            if (iVar2 == 0) goto LAB_001000e6;
            iVar2 = BIO_printf(param_2,"%lld\n",local_60);
          }
          else {
LAB_001001d0:
            iVar2 = OSSL_PARAM_get_BN(param_1,&local_50);
            if (iVar2 == 0) goto LAB_001000e6;
            iVar2 = BN_print(param_2,local_50);
          }
          break;
        case 2:
          if (8 < (ulong)param_1[3]) goto LAB_001001d0;
          iVar2 = OSSL_PARAM_get_uint64(param_1,&local_58);
          if (iVar2 == 0) goto LAB_001000e6;
          iVar2 = BIO_printf(param_2,"%llu\n",local_58);
          break;
        case 3:
          iVar2 = OSSL_PARAM_get_double(param_1,&local_48);
          if (iVar2 != 1) {
LAB_001000e6:
            iVar2 = BIO_printf(param_2,"error getting value\n");
            if (iVar2 != -1) goto LAB_001000b5;
            goto LAB_00100100;
          }
          iVar2 = BIO_printf(param_2,"%f\n",local_48);
          break;
        case 4:
        case 5:
        case 6:
        case 7:
          iVar2 = BIO_dump(param_2,(char *)param_1[2],(int)param_1[3]);
        }
        if (iVar2 == -1) goto LAB_00100100;
      }
LAB_001000b5:
      plVar1 = param_1 + 5;
      param_1 = param_1 + 5;
    } while (*plVar1 != 0);
    uVar3 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
OSSL_PARAM_allocate_from_text
          (undefined8 *param_1,long param_2,char *param_3,char *param_4,ulong param_5,uint *param_6)

{
  undefined8 uVar1;
  bool bVar2;
  BIGNUM *pBVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  byte *__dest;
  undefined8 uVar7;
  size_t sVar8;
  byte *pbVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  BIGNUM *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (BIGNUM *)0x0;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    if ((*param_3 == 'h') && ((param_3[1] == 'e' && (param_3[2] == 'x')))) {
      param_3 = param_3 + 3;
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    puVar6 = (undefined8 *)OSSL_PARAM_locate_const(param_2,param_3);
    if (param_6 != (uint *)0x0) {
      *param_6 = (uint)(puVar6 != (undefined8 *)0x0);
    }
    if (puVar6 != (undefined8 *)0x0) {
      uVar5 = *(uint *)(puVar6 + 1);
      if (uVar5 == 4) {
        if (bVar2) {
          ERR_new();
          ERR_set_debug("crypto/params_from_text.c",0x70,"prepare_from_text");
          ERR_set_error(0xf,0x80106,0);
        }
        else {
          sVar8 = strlen(param_4);
          param_5 = sVar8 + 1;
LAB_00100445:
          __dest = (byte *)CRYPTO_zalloc(param_5,"crypto/params_from_text.c",0x145);
          if (__dest != (byte *)0x0) {
LAB_00100472:
            pBVar3 = local_50;
            uVar5 = *(uint *)(puVar6 + 1);
            if (uVar5 == 4) {
              strncpy((char *)__dest,param_4,param_5);
              param_5 = param_5 - 1;
            }
            else if (uVar5 < 5) {
              if (((uVar5 - 1 < 2) &&
                  (BN_bn2nativepad(local_50,__dest,param_5 & 0xffffffff), *(int *)(puVar6 + 1) == 1)
                  ) && (iVar4 = BN_is_negative(pBVar3), iVar4 != 0)) {
                pbVar9 = __dest;
                if ((param_5 & 1) != 0) {
                  pbVar9 = __dest + 1;
                  *__dest = ~*__dest;
                  if (__dest + param_5 == pbVar9) goto LAB_00100405;
                }
                do {
                  *pbVar9 = ~*pbVar9;
                  pbVar9[1] = ~pbVar9[1];
                  pbVar9 = pbVar9 + 2;
                } while (__dest + param_5 != pbVar9);
              }
            }
            else if (uVar5 == 5) {
              if (bVar2) {
                local_48 = 0;
                iVar4 = OPENSSL_hexstr2buf_ex(__dest,param_5,&local_48,param_4,0x3a);
                if (iVar4 == 0) {
                  BN_free(local_50);
                  CRYPTO_free(__dest);
                  goto LAB_00100392;
                }
              }
              else {
                memcpy(__dest,param_4,param_5);
              }
            }
LAB_00100405:
            uVar7 = *puVar6;
            uVar1 = puVar6[1];
            param_1[2] = __dest;
            param_1[3] = param_5;
            param_1[4] = 0xffffffffffffffff;
            *param_1 = uVar7;
            param_1[1] = uVar1;
            BN_free(local_50);
            uVar7 = 1;
            goto LAB_00100394;
          }
        }
      }
      else if (uVar5 < 5) {
        if (1 < uVar5 - 1) goto LAB_001003e0;
        if (bVar2) {
          iVar4 = BN_hex2bn(&local_50,param_4);
        }
        else {
          iVar4 = BN_asc2bn(&local_50,param_4);
        }
        if ((iVar4 != 0) && (local_50 != (BIGNUM *)0x0)) {
          iVar4 = *(int *)(puVar6 + 1);
          if (iVar4 == 2) {
            iVar4 = BN_is_negative();
            if (iVar4 != 0) {
              ERR_new();
              ERR_set_debug("crypto/params_from_text.c",0x3c,"prepare_from_text");
              ERR_set_error(0xf,0x7a,0);
              goto LAB_0010038d;
            }
            iVar4 = *(int *)(puVar6 + 1);
          }
          if (((iVar4 != 1) || (iVar4 = BN_is_negative(), iVar4 == 0)) ||
             (iVar4 = BN_add_word(local_50,1), iVar4 != 0)) {
            uVar5 = BN_num_bits(local_50);
            uVar10 = (ulong)(int)uVar5;
            if ((*(int *)(puVar6 + 1) == 1) && ((uVar5 & 7) == 0)) {
              uVar10 = uVar10 + 8;
            }
            param_5 = puVar6[3];
            if (param_5 == 0) {
              param_5 = uVar10 + 7 >> 3;
              uVar10 = 1;
              if (param_5 != 0) {
                uVar10 = param_5;
              }
              goto LAB_0010035e;
            }
            if (uVar10 <= param_5 * 8) goto LAB_00100445;
            ERR_new();
            ERR_set_debug("crypto/params_from_text.c",0x66,"prepare_from_text");
            ERR_set_error(0xf,0x74,0);
          }
        }
      }
      else if (uVar5 == 5) {
        if (bVar2) {
          sVar8 = strlen(param_4);
          param_5 = sVar8 >> 1;
          uVar10 = 1;
          if (param_5 != 0) {
            uVar10 = param_5;
          }
          if ((sVar8 & 1) != 0) {
            ERR_new(uVar10);
            ERR_set_debug("crypto/params_from_text.c",0x7a,"prepare_from_text");
            ERR_set_error(0xf,0x67,0);
            goto LAB_0010038d;
          }
        }
        else {
          uVar10 = 1;
          if (param_5 != 0) {
            uVar10 = param_5;
          }
        }
LAB_0010035e:
        __dest = (byte *)CRYPTO_zalloc(uVar10,"crypto/params_from_text.c",0x145);
        if (__dest != (byte *)0x0) {
          if (param_5 != 0) goto LAB_00100472;
          goto LAB_00100405;
        }
      }
      else {
LAB_001003e0:
        __dest = (byte *)CRYPTO_zalloc(1,"crypto/params_from_text.c",0x145);
        if (__dest != (byte *)0x0) {
          param_5 = 0;
          goto LAB_00100405;
        }
      }
    }
LAB_0010038d:
    BN_free(local_50);
  }
LAB_00100392:
  uVar7 = 0;
LAB_00100394:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


