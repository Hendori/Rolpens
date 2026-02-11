
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
LAB_001000f0:
    uVar3 = 0;
  }
  else {
    if (param_3 == 0) {
      do {
        iVar2 = BIO_printf(param_2,"%s: ");
        if (iVar2 == -1) goto LAB_001000f0;
        param_1 = param_1 + 5;
        BIO_printf(param_2,"\n");
      } while (*param_1 != 0);
    }
    else {
      do {
        iVar2 = BIO_printf(param_2,"%s: ");
        if (iVar2 == -1) goto LAB_001000f0;
        switch(*(uint *)(param_1 + 1)) {
        default:
          iVar2 = BIO_printf(param_2,"unknown type (%u) of %zu bytes\n",
                             (ulong)*(uint *)(param_1 + 1),param_1[3]);
          break;
        case 1:
          if ((ulong)param_1[3] < 9) {
            iVar2 = OSSL_PARAM_get_int64(param_1,&local_60);
            if (iVar2 != 0) {
              iVar2 = BIO_printf(param_2,"%lld\n",local_60);
              break;
            }
          }
          else {
LAB_00100188:
            iVar2 = OSSL_PARAM_get_BN(param_1,&local_50);
            if (iVar2 != 0) {
              iVar2 = BN_print(param_2,local_50);
              break;
            }
          }
LAB_001001b0:
          iVar2 = BIO_printf(param_2,"error getting value\n");
          break;
        case 2:
          if (8 < (ulong)param_1[3]) goto LAB_00100188;
          iVar2 = OSSL_PARAM_get_uint64(param_1,&local_58);
          if (iVar2 == 0) goto LAB_001001b0;
          iVar2 = BIO_printf(param_2,"%llu\n",local_58);
          break;
        case 3:
          iVar2 = OSSL_PARAM_get_double(param_1,&local_48);
          if (iVar2 == 1) {
            iVar2 = BIO_printf(param_2,"%f\n",local_48);
            break;
          }
          iVar2 = BIO_printf(param_2,"error getting value\n");
          if (iVar2 != -1) goto LAB_001000a4;
          goto LAB_001000f0;
        case 4:
        case 5:
        case 6:
        case 7:
          iVar2 = BIO_dump(param_2,(char *)param_1[2],(int)param_1[3]);
        }
        if (iVar2 == -1) goto LAB_001000f0;
LAB_001000a4:
        plVar1 = param_1 + 5;
        param_1 = param_1 + 5;
      } while (*plVar1 != 0);
    }
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
  uint *__dest;
  undefined8 uVar7;
  size_t sVar8;
  uint *puVar9;
  BIGNUM *pBVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
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
LAB_00100475:
          __dest = (uint *)CRYPTO_zalloc(param_5,"crypto/params_from_text.c",0x145);
          if (__dest != (uint *)0x0) {
LAB_001004a2:
            pBVar3 = local_50;
            uVar5 = *(uint *)(puVar6 + 1);
            pBVar10 = pBVar3;
            if (uVar5 == 4) {
              strncpy((char *)__dest,param_4,param_5);
              param_5 = param_5 - 1;
            }
            else if (uVar5 < 5) {
              if (((uVar5 - 1 < 2) &&
                  (BN_bn2nativepad(local_50,__dest,param_5 & 0xffffffff), pBVar10 = local_50,
                  *(int *)(puVar6 + 1) == 1)) &&
                 (iVar4 = BN_is_negative(pBVar3), pBVar10 = local_50, iVar4 != 0)) {
                uVar12 = param_5 - 1;
                if (uVar12 < 0xf) {
                  uVar11 = 0;
                  puVar9 = __dest;
                }
                else {
                  uVar11 = 0;
                  uVar13 = (param_5 - 0x10 >> 4) + 1;
                  puVar9 = __dest;
                  do {
                    uVar11 = uVar11 + 1;
                    *puVar9 = *puVar9 ^ 0xffffffff;
                    puVar9[1] = puVar9[1] ^ 0xffffffff;
                    puVar9[2] = puVar9[2] ^ 0xffffffff;
                    puVar9[3] = puVar9[3] ^ 0xffffffff;
                    puVar9 = puVar9 + 4;
                  } while (uVar11 < uVar13);
                  uVar11 = uVar13 * 0x10;
                  uVar12 = uVar12 + uVar13 * -0x10;
                  puVar9 = __dest + uVar13 * 4;
                  if (uVar11 == param_5) goto LAB_00100435;
                }
                uVar13 = param_5 - uVar11;
                if (6 < uVar13 - 1) {
                  *(ulong *)(uVar11 + (long)__dest) = *(ulong *)(uVar11 + (long)__dest) ^ _LC8;
                  puVar9 = (uint *)((long)puVar9 + (uVar13 & 0xfffffffffffffff8));
                  uVar12 = uVar12 - (uVar13 & 0xfffffffffffffff8);
                  if ((uVar13 & 7) == 0) goto LAB_00100435;
                }
                *(byte *)puVar9 = ~(byte)*puVar9;
                if (((((uVar12 != 0) &&
                      (*(byte *)((long)puVar9 + 1) = ~*(byte *)((long)puVar9 + 1), uVar12 != 1)) &&
                     (*(byte *)((long)puVar9 + 2) = ~*(byte *)((long)puVar9 + 2), uVar12 != 2)) &&
                    ((*(byte *)((long)puVar9 + 3) = ~*(byte *)((long)puVar9 + 3), uVar12 != 3 &&
                     (*(byte *)(puVar9 + 1) = ~(byte)puVar9[1], uVar12 != 4)))) &&
                   (*(byte *)((long)puVar9 + 5) = ~*(byte *)((long)puVar9 + 5), uVar12 != 5)) {
                  *(byte *)((long)puVar9 + 6) = ~*(byte *)((long)puVar9 + 6);
                }
              }
            }
            else if (uVar5 == 5) {
              if (bVar2) {
                local_48 = 0;
                iVar4 = OPENSSL_hexstr2buf_ex(__dest,param_5,&local_48,param_4,0x3a);
                pBVar10 = local_50;
                if (iVar4 == 0) {
                  BN_free(local_50);
                  CRYPTO_free(__dest);
                  goto LAB_001003c2;
                }
              }
              else {
                memcpy(__dest,param_4,param_5);
              }
            }
LAB_00100435:
            uVar7 = *puVar6;
            uVar1 = puVar6[1];
            param_1[2] = __dest;
            param_1[3] = param_5;
            param_1[4] = 0xffffffffffffffff;
            *param_1 = uVar7;
            param_1[1] = uVar1;
            BN_free(pBVar10);
            uVar7 = 1;
            goto LAB_001003c4;
          }
        }
      }
      else if (uVar5 < 5) {
        if (1 < uVar5 - 1) goto LAB_00100410;
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
              goto LAB_001003bd;
            }
            iVar4 = *(int *)(puVar6 + 1);
          }
          if (((iVar4 != 1) || (iVar4 = BN_is_negative(), iVar4 == 0)) ||
             (iVar4 = BN_add_word(local_50,1), iVar4 != 0)) {
            uVar5 = BN_num_bits(local_50);
            uVar12 = (ulong)(int)uVar5;
            if ((*(int *)(puVar6 + 1) == 1) && ((uVar5 & 7) == 0)) {
              uVar12 = uVar12 + 8;
            }
            param_5 = puVar6[3];
            if (param_5 == 0) {
              param_5 = uVar12 + 7 >> 3;
              uVar12 = 1;
              if (param_5 != 0) {
                uVar12 = param_5;
              }
              goto LAB_0010038e;
            }
            if (uVar12 <= param_5 * 8) goto LAB_00100475;
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
          uVar12 = 1;
          if (param_5 != 0) {
            uVar12 = param_5;
          }
          if ((sVar8 & 1) != 0) {
            ERR_new(uVar12);
            ERR_set_debug("crypto/params_from_text.c",0x7a,"prepare_from_text");
            ERR_set_error(0xf,0x67,0);
            goto LAB_001003bd;
          }
        }
        else {
          uVar12 = 1;
          if (param_5 != 0) {
            uVar12 = param_5;
          }
        }
LAB_0010038e:
        __dest = (uint *)CRYPTO_zalloc(uVar12,"crypto/params_from_text.c",0x145);
        if (__dest != (uint *)0x0) {
          pBVar10 = local_50;
          if (param_5 != 0) goto LAB_001004a2;
          goto LAB_00100435;
        }
      }
      else {
LAB_00100410:
        __dest = (uint *)CRYPTO_zalloc(1,"crypto/params_from_text.c",0x145);
        if (__dest != (uint *)0x0) {
          param_5 = 0;
          pBVar10 = local_50;
          goto LAB_00100435;
        }
      }
    }
LAB_001003bd:
    BN_free(local_50);
  }
LAB_001003c2:
  uVar7 = 0;
LAB_001003c4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


