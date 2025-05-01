
undefined4 ciphersuite_cb(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0x50) {
    uVar2 = __memcpy_chk(auStack_78,param_1,(long)param_2,0x50);
    auStack_78[param_2] = 0;
    lVar3 = ssl3_get_cipher_by_std_name(uVar2);
    if (lVar3 != 0) {
      iVar1 = OPENSSL_sk_push(param_3,lVar3);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("ssl/ssl_ciph.c",0x514,"ciphersuite_cb");
        ERR_set_error(0x14,0xc0103,0);
        uVar4 = 0;
        goto LAB_00100024;
      }
    }
  }
  uVar4 = 1;
LAB_00100024:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ssl_cipher_apply_rule_constprop_0
               (uint param_1,uint param_2,uint param_3,uint param_4,int param_5,ulong param_6,
               int param_7,long *param_8,long *param_9)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  bool bVar11;
  bool bVar12;
  
  bVar11 = (0x48UL >> (param_6 & 0x3f) & 1) == 0;
  plVar10 = (long *)*param_8;
  plVar6 = (long *)*param_9;
  plVar3 = plVar10;
  plVar4 = plVar6;
  if (!bVar11) {
    plVar3 = plVar6;
    plVar4 = plVar10;
  }
  if ((plVar3 != (long *)0x0) && (plVar4 != (long *)0x0)) {
    iVar8 = (int)param_6;
    if (param_7 < 0) {
      do {
        plVar1 = (long *)plVar3[2];
        plVar7 = (long *)plVar3[3];
        lVar2 = *plVar3;
        plVar5 = plVar1;
        if (!bVar11) {
          plVar5 = plVar7;
        }
        if ((((((param_1 == 0) || ((param_1 & *(uint *)(lVar2 + 0x1c)) != 0)) &&
              ((param_2 == 0 || ((param_2 & *(uint *)(lVar2 + 0x20)) != 0)))) &&
             ((param_3 == 0 || ((param_3 & *(uint *)(lVar2 + 0x24)) != 0)))) &&
            ((param_4 == 0 || ((param_4 & *(uint *)(lVar2 + 0x28)) != 0)))) &&
           ((param_5 == 0 || (param_5 == *(int *)(lVar2 + 0x2c))))) {
          switch(param_6 & 0xffffffff) {
          case 1:
            if ((int)plVar3[1] == 0) {
              if (plVar6 != plVar3) {
                if (plVar10 == plVar3) {
                  plVar10 = plVar1;
                }
                if (plVar7 != (long *)0x0) {
                  plVar7[2] = (long)plVar1;
                }
                if (plVar1 != (long *)0x0) {
                  plVar1[3] = (long)plVar7;
                }
                plVar6[2] = (long)plVar3;
                plVar3[2] = 0;
                plVar3[3] = (long)plVar6;
                plVar6 = plVar3;
              }
              *(undefined4 *)(plVar3 + 1) = 1;
            }
            break;
          case 2:
            if (plVar10 == plVar3) {
              *(undefined4 *)(plVar10 + 1) = 0;
              if (plVar6 == plVar10) {
                plVar6 = plVar7;
              }
              plVar10 = plVar1;
              if (plVar1 != (long *)0x0) goto LAB_00100362;
LAB_0010036a:
              if (plVar7 != (long *)0x0) goto LAB_0010036f;
            }
            else {
              plVar7[2] = (long)plVar1;
              if (plVar6 == plVar3) {
                *(undefined4 *)(plVar6 + 1) = 0;
                plVar6 = plVar7;
              }
              else {
                *(undefined4 *)(plVar3 + 1) = 0;
              }
              if (plVar1 != (long *)0x0) {
LAB_00100362:
                plVar1[3] = (long)plVar7;
                plVar7 = (long *)plVar3[3];
                goto LAB_0010036a;
              }
LAB_0010036f:
              plVar7[2] = (long)plVar1;
            }
            *(undefined1 (*) [16])(plVar3 + 2) = (undefined1  [16])0x0;
            break;
          case 3:
            if ((int)plVar3[1] != 0) {
              if (plVar10 != plVar3) {
                if (plVar6 == plVar3) {
                  plVar6 = plVar7;
                }
                if (plVar1 != (long *)0x0) {
                  plVar1[3] = (long)plVar7;
                }
                if (plVar7 != (long *)0x0) {
                  plVar7[2] = (long)plVar1;
                }
                plVar10[3] = (long)plVar3;
                plVar3[3] = 0;
                plVar3[2] = (long)plVar10;
                plVar10 = plVar3;
              }
              *(undefined4 *)(plVar3 + 1) = 0;
            }
            break;
          case 4:
            if (((int)plVar3[1] != 0) && (plVar6 != plVar3)) {
              if (plVar10 == plVar3) {
                plVar10 = plVar1;
              }
              if (plVar7 != (long *)0x0) {
                plVar7[2] = (long)plVar1;
              }
              if (plVar1 != (long *)0x0) {
                plVar1[3] = (long)plVar7;
              }
              plVar6[2] = (long)plVar3;
              plVar3[3] = (long)plVar6;
              plVar3[2] = 0;
              plVar6 = plVar3;
            }
            break;
          case 6:
            if (((int)plVar3[1] != 0) && (plVar10 != plVar3)) {
              if (plVar6 == plVar3) {
                plVar6 = plVar7;
              }
              if (plVar1 != (long *)0x0) {
                plVar1[3] = (long)plVar7;
              }
              if (plVar7 != (long *)0x0) {
                plVar7[2] = (long)plVar1;
              }
              plVar10[3] = (long)plVar3;
              plVar3[2] = (long)plVar10;
              plVar3[3] = 0;
              plVar10 = plVar3;
            }
          }
        }
      } while ((plVar5 != (long *)0x0) && (bVar12 = plVar4 != plVar3, plVar3 = plVar5, bVar12));
    }
    else if (iVar8 == 1) {
      do {
        plVar1 = (long *)plVar3[3];
        plVar7 = (long *)plVar3[2];
        plVar5 = plVar1;
        if (bVar11) {
          plVar5 = plVar7;
        }
        if ((param_7 == *(int *)(*plVar3 + 0x44)) && ((int)plVar3[1] == 0)) {
          if (plVar3 != plVar6) {
            if (plVar3 == plVar10) {
              plVar10 = plVar7;
            }
            if (plVar1 != (long *)0x0) {
              plVar1[2] = (long)plVar7;
            }
            if (plVar7 != (long *)0x0) {
              plVar7[3] = (long)plVar1;
            }
            plVar6[2] = (long)plVar3;
            plVar3[2] = 0;
            plVar3[3] = (long)plVar6;
            plVar6 = plVar3;
          }
          *(undefined4 *)(plVar3 + 1) = 1;
        }
      } while ((plVar4 != plVar3) && (plVar3 = plVar5, plVar5 != (long *)0x0));
    }
    else if (iVar8 == 4) {
      do {
        plVar1 = (long *)plVar3[2];
        plVar7 = (long *)plVar3[3];
        plVar5 = plVar1;
        if (!bVar11) {
          plVar5 = plVar7;
        }
        if (((param_7 == *(int *)(*plVar3 + 0x44)) && ((int)plVar3[1] != 0)) && (plVar3 != plVar6))
        {
          if (plVar3 == plVar10) {
            plVar10 = plVar1;
          }
          if (plVar7 != (long *)0x0) {
            plVar7[2] = (long)plVar1;
          }
          if (plVar1 != (long *)0x0) {
            plVar1[3] = (long)plVar7;
          }
          plVar6[2] = (long)plVar3;
          plVar3[2] = 0;
          plVar3[3] = (long)plVar6;
          plVar6 = plVar3;
        }
      } while ((plVar5 != (long *)0x0) && (bVar12 = plVar4 != plVar3, plVar3 = plVar5, bVar12));
    }
    else {
      do {
        plVar7 = (long *)plVar3[3];
        plVar1 = (long *)plVar3[2];
        plVar5 = plVar7;
        if (bVar11) {
          plVar5 = plVar1;
        }
        if (param_7 == *(int *)(*plVar3 + 0x44)) {
          if (iVar8 == 3) {
            if ((int)plVar3[1] != 0) {
              if (plVar3 != plVar10) {
                if (plVar3 == plVar6) {
                  plVar6 = plVar7;
                }
                if (plVar1 != (long *)0x0) {
                  plVar1[3] = (long)plVar7;
                }
                if (plVar7 != (long *)0x0) {
                  plVar7[2] = (long)plVar1;
                }
                plVar10[3] = (long)plVar3;
                plVar3[3] = 0;
                plVar3[2] = (long)plVar10;
                plVar10 = plVar3;
              }
              *(undefined4 *)(plVar3 + 1) = 0;
            }
          }
          else if (iVar8 == 6) {
            if (((int)plVar3[1] != 0) && (plVar3 != plVar10)) {
              if (plVar3 == plVar6) {
                plVar6 = plVar7;
              }
              if (plVar1 != (long *)0x0) {
                plVar1[3] = (long)plVar7;
              }
              if (plVar7 != (long *)0x0) {
                plVar7[2] = (long)plVar1;
              }
              plVar10[3] = (long)plVar3;
              plVar3[2] = (long)plVar10;
              plVar3[3] = 0;
              plVar10 = plVar3;
            }
          }
          else if (iVar8 == 2) {
            if (plVar3 == plVar10) {
              *(undefined4 *)(plVar3 + 1) = 0;
              if (plVar3 == plVar6) {
                plVar6 = plVar7;
              }
              plVar10 = (long *)0x0;
              plVar9 = plVar1;
              if (plVar1 != (long *)0x0) goto LAB_00100197;
LAB_0010019f:
              if (plVar7 != (long *)0x0) goto LAB_001001a4;
            }
            else {
              plVar7[2] = (long)plVar1;
              *(undefined4 *)(plVar3 + 1) = 0;
              plVar9 = plVar7;
              if (plVar3 != plVar6) {
                plVar9 = plVar6;
              }
              plVar6 = plVar9;
              plVar9 = plVar10;
              if (plVar1 != (long *)0x0) {
LAB_00100197:
                plVar1[3] = (long)plVar7;
                plVar7 = (long *)plVar3[3];
                plVar10 = plVar9;
                goto LAB_0010019f;
              }
LAB_001001a4:
              plVar7[2] = (long)plVar1;
            }
            *(undefined1 (*) [16])(plVar3 + 2) = (undefined1  [16])0x0;
          }
        }
      } while ((plVar5 != (long *)0x0) && (bVar12 = plVar4 != plVar3, plVar3 = plVar5, bVar12));
    }
  }
  *param_8 = (long)plVar10;
  *param_9 = (long)plVar6;
  return;
}



undefined8 update_cipher_list(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  lVar2 = OPENSSL_sk_dup(*param_2);
  if (lVar2 != 0) {
    while ((iVar1 = OPENSSL_sk_num(lVar2), 0 < iVar1 &&
           (lVar3 = OPENSSL_sk_value(lVar2,0), *(int *)(lVar3 + 0x2c) == 0x304))) {
      OPENSSL_sk_delete(lVar2);
    }
    iVar1 = OPENSSL_sk_num(param_4);
    iVar1 = iVar1 + -1;
    if (-1 < iVar1) {
      do {
        while ((lVar3 = OPENSSL_sk_value(param_4,iVar1),
               (*(uint *)(lVar3 + 0x24) & *(uint *)(param_1 + 0x6a0)) == 0 &&
               (((&ssl_cipher_table_mac)[(ulong)*(byte *)(lVar3 + 0x40) * 2] &
                *(uint *)(param_1 + 0x6a4)) == 0))) {
          OPENSSL_sk_unshift(lVar2);
          bVar4 = iVar1 == 0;
          iVar1 = iVar1 + -1;
          if (bVar4) goto LAB_001006c0;
        }
        bVar4 = iVar1 != 0;
        iVar1 = iVar1 + -1;
      } while (bVar4);
    }
LAB_001006c0:
    lVar3 = OPENSSL_sk_dup(lVar2);
    if (lVar3 != 0) {
      OPENSSL_sk_free(*param_3);
      *param_3 = lVar3;
      OPENSSL_sk_set_cmp_func(lVar3,&ssl_cipher_ptr_id_cmp);
      OPENSSL_sk_sort(*param_3);
      OPENSSL_sk_free(*param_2);
      *param_2 = lVar2;
      return 1;
    }
    OPENSSL_sk_free(lVar2);
  }
  return 0;
}



undefined8 ssl_cipher_strength_sort(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  void *ptr;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    lVar9 = 4;
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    do {
      if (((int)plVar5[1] != 0) && (iVar7 < *(int *)(*plVar5 + 0x44))) {
        iVar7 = *(int *)(*plVar5 + 0x44);
      }
      plVar5 = (long *)plVar5[2];
    } while (plVar5 != (long *)0x0);
    lVar9 = (long)(iVar7 + 1) << 2;
  }
  ptr = (void *)CRYPTO_zalloc(lVar9,"ssl/ssl_ciph.c",0x3ab);
  if (ptr == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    plVar5 = (long *)*param_1;
    while (plVar5 != (long *)0x0) {
      while ((int)plVar5[1] == 0) {
        plVar5 = (long *)plVar5[2];
        if (plVar5 == (long *)0x0) goto LAB_001007da;
      }
      lVar9 = *plVar5;
      plVar5 = (long *)plVar5[2];
      piVar1 = (int *)((long)ptr + (long)*(int *)(lVar9 + 0x44) * 4);
      *piVar1 = *piVar1 + 1;
    }
LAB_001007da:
    lVar9 = (long)iVar7;
    while (-1 < iVar7) {
      while (*(int *)((long)ptr + lVar9 * 4) < 1) {
        lVar9 = lVar9 + -1;
        if ((int)lVar9 < 0) goto LAB_00100888;
      }
      plVar5 = (long *)*param_1;
      plVar2 = (long *)*param_2;
      plVar10 = plVar2;
      if ((plVar5 != (long *)0x0) && (plVar8 = plVar5, plVar2 != (long *)0x0)) {
        do {
          plVar3 = (long *)plVar8[2];
          if ((*(int *)(*plVar8 + 0x44) == (int)lVar9) &&
             (((int)plVar8[1] != 0 && (plVar10 != plVar8)))) {
            lVar4 = plVar8[3];
            if (plVar8 == plVar5) {
              plVar5 = plVar3;
            }
            if (lVar4 != 0) {
              *(long **)(lVar4 + 0x10) = plVar3;
            }
            if (plVar3 != (long *)0x0) {
              plVar3[3] = lVar4;
            }
            plVar10[2] = (long)plVar8;
            plVar8[2] = 0;
            plVar8[3] = (long)plVar10;
            plVar10 = plVar8;
          }
        } while ((plVar3 != (long *)0x0) && (bVar11 = plVar2 != plVar8, plVar8 = plVar3, bVar11));
      }
      lVar9 = lVar9 + -1;
      *param_1 = (long)plVar5;
      *param_2 = (long)plVar10;
      iVar7 = (int)lVar9;
    }
LAB_00100888:
    CRYPTO_free(ptr);
    uVar6 = 1;
  }
  return uVar6;
}



undefined4
ssl_cipher_process_rulestr
          (byte *param_1,long *param_2,long *param_3,undefined8 *param_4,long param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  byte bVar11;
  char cVar12;
  ulong uVar13;
  uint uVar14;
  undefined4 uVar15;
  byte *__s1;
  long *plVar16;
  int *piVar17;
  long *plVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 *puVar21;
  size_t __n;
  long *plVar22;
  long *plVar23;
  bool bVar24;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_58;
  int local_54;
  
  uVar15 = 1;
  bVar11 = *param_1;
LAB_00100917:
  uVar13 = (ulong)bVar11;
  if (bVar11 == 0x2b) goto LAB_00100aa6;
  if ('+' < (char)bVar11) goto LAB_00100e92;
  if (bVar11 == 0) {
    return uVar15;
  }
  do {
    if ((char)uVar13 != '!') goto LAB_00100abe;
    local_70 = 2;
    uVar13 = (ulong)param_1[1];
    param_1 = param_1 + 1;
LAB_001009ab:
    local_54 = 0;
    uVar14 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_58 = 0;
    __s1 = param_1;
LAB_001009e0:
    iVar9 = 0;
    param_1 = __s1;
    while (cVar12 = (char)uVar13, cVar12 < '{') {
      if (cVar12 < '=') {
        if (cVar12 < '/') {
          if (cVar12 < '-') {
            if (iVar9 == 0) goto LAB_00100f31;
            if (local_70 == 5) goto LAB_00100ee3;
            if (cVar12 != '+') goto LAB_00100b13;
            param_1 = param_1 + 1;
            bVar24 = true;
            piVar17 = (int *)*param_4;
            goto joined_r0x00100b21;
          }
        }
        else if (9 < (byte)(cVar12 - 0x30U)) break;
      }
      else if ((0x3ffffff43ffffff1U >> ((ulong)((int)uVar13 - 0x3d) & 0x3f) & 1) == 0) break;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      iVar9 = iVar9 + 1;
      uVar13 = (ulong)*pbVar1;
    }
    if (iVar9 == 0) {
LAB_00100f31:
      ERR_new();
      ERR_set_debug("ssl/ssl_ciph.c",0x40c,"ssl_cipher_process_rulestr");
      ERR_set_error(0x14,0x118,0);
      return 0;
    }
    if (local_70 == 5) goto LAB_00100ee3;
LAB_00100b13:
    bVar24 = false;
    piVar17 = (int *)*param_4;
joined_r0x00100b21:
    if (piVar17 == (int *)0x0) {
LAB_00100a61:
      bVar11 = *param_1;
      while( true ) {
        if (bVar11 == 0) {
          return uVar15;
        }
        uVar13 = (ulong)bVar11;
        if ((bVar11 < 0x3c) && ((0xf3ffeffeffffffffU >> (uVar13 & 0x3f) & 1) == 0)) break;
        bVar11 = param_1[1];
        param_1 = param_1 + 1;
      }
      cVar12 = bVar11 - 0x2b;
      bVar24 = cVar12 == '\0';
      goto joined_r0x00100aa0;
    }
    __n = (size_t)iVar9;
    puVar21 = param_4;
    while( true ) {
      puVar21 = puVar21 + 1;
      pcVar5 = *(char **)(piVar17 + 2);
      iVar8 = strncmp((char *)__s1,pcVar5,__n);
      if (((iVar8 == 0) && (pcVar5[__n] == '\0')) ||
         ((pcVar5 = *(char **)(piVar17 + 4), pcVar5 != (char *)0x0 &&
          ((iVar8 = strncmp((char *)__s1,pcVar5,__n), iVar8 == 0 && (pcVar5[__n] == '\0'))))))
      break;
      piVar17 = (int *)*puVar21;
      if (piVar17 == (int *)0x0) goto LAB_00100ba4;
    }
    uVar2 = piVar17[7];
    uVar20 = local_6c;
    if ((((uVar2 != 0) &&
         ((uVar20 = uVar2, local_6c != 0 && (uVar20 = local_6c & uVar2, (local_6c & uVar2) == 0))))
        || ((local_6c = uVar20, uVar2 = piVar17[8], uVar20 = local_68, uVar2 != 0 &&
            ((uVar20 = uVar2, local_68 != 0 && (uVar20 = local_68 & uVar2, (local_68 & uVar2) == 0))
            )))) ||
       (((local_68 = uVar20, uVar2 = piVar17[9], uVar20 = local_64, uVar2 != 0 &&
         ((uVar20 = uVar2, local_64 != 0 && (uVar20 = local_64 & uVar2, (local_64 & uVar2) == 0))))
        || ((local_64 = uVar20, uVar2 = piVar17[10], uVar20 = local_58, uVar2 != 0 &&
            ((uVar20 = uVar2, local_58 != 0 && (uVar20 = local_58 & uVar2, (local_58 & uVar2) == 0))
            )))))) {
LAB_00100ba4:
      if (local_70 != 5) goto LAB_00100a61;
      goto LAB_00100ee3;
    }
    local_58 = uVar20;
    uVar2 = piVar17[0xf];
    uVar20 = uVar2 & 0x1f;
    if (uVar20 == 0) {
LAB_00100ca7:
      uVar20 = uVar14;
      uVar14 = uVar20;
      if ((uVar2 & 0x20) != 0) {
        if ((uVar20 & 0x20) == 0) goto LAB_00100c6e;
        uVar14 = uVar20 & (uVar2 | 0xffffffdf);
        if ((uVar14 & 0x20) == 0) goto LAB_00100ba4;
      }
    }
    else {
      if ((uVar14 & 0x1f) != 0) {
        uVar14 = uVar14 & (uVar2 | 0xffffffe0);
        if ((uVar14 & 0x1f) == 0) goto LAB_00100ba4;
        goto LAB_00100ca7;
      }
      uVar14 = uVar20;
      if ((uVar2 & 0x20) != 0) {
LAB_00100c6e:
        uVar14 = uVar20 | 0x20;
      }
    }
    iVar8 = local_54;
    if (*piVar17 == 0) {
      iVar4 = piVar17[0xb];
      iVar3 = 0;
      if (((iVar4 != 0) && (iVar8 = iVar4, iVar4 != local_54)) && (local_54 != 0))
      goto LAB_00100ba4;
    }
    else {
      iVar3 = piVar17[6];
    }
    local_54 = iVar8;
    if (bVar24) goto LAB_00100c86;
    if (local_70 == 5) {
LAB_00100ee3:
      if (iVar9 == 8) {
        iVar9 = strncmp((char *)__s1,"STRENGTH",8);
        if (iVar9 != 0) goto LAB_0010110e;
        iVar9 = ssl_cipher_strength_sort(param_2);
        if (iVar9 != 0) goto LAB_00101140;
LAB_0010113e:
        uVar15 = 0;
      }
      else {
        if ((iVar9 != 10) || (iVar9 = strncmp((char *)__s1,"SECLEVEL=",9), iVar9 != 0)) {
LAB_0010110e:
          ERR_new();
          uVar19 = 0x4b3;
LAB_0010111f:
          ERR_set_debug("ssl/ssl_ciph.c",uVar19,"ssl_cipher_process_rulestr");
          ERR_set_error(0x14,0x118,0);
          goto LAB_0010113e;
        }
        if (5 < (int)(char)__s1[9] - 0x30U) {
          ERR_new();
          uVar19 = 0x4ad;
          goto LAB_0010111f;
        }
        *(uint *)(param_5 + 0x98) = (int)(char)__s1[9] - 0x30U;
      }
LAB_00101140:
      bVar11 = *param_1;
      while( true ) {
        if (bVar11 == 0) {
          return uVar15;
        }
        uVar13 = (ulong)bVar11;
        if ((bVar11 < 0x3c) && ((0xf3ffeffeffffffffU >> (uVar13 & 0x3f) & 1) == 0)) break;
        bVar11 = param_1[1];
        param_1 = param_1 + 1;
      }
    }
    else {
      plVar22 = (long *)*param_3;
      plVar18 = (long *)*param_2;
      plVar16 = plVar18;
      plVar23 = plVar22;
      if (local_70 == 3) {
        if ((plVar18 != (long *)0x0) && (plVar22 != (long *)0x0)) {
          plVar10 = plVar22;
          do {
            plVar6 = (long *)plVar10[3];
            lVar7 = *plVar10;
            if ((((((iVar3 == 0) || (iVar3 == *(int *)(lVar7 + 0x18))) &&
                  ((local_6c == 0 || ((local_6c & *(uint *)(lVar7 + 0x1c)) != 0)))) &&
                 (((local_68 == 0 || ((local_68 & *(uint *)(lVar7 + 0x20)) != 0)) &&
                  ((local_64 == 0 || ((local_64 & *(uint *)(lVar7 + 0x24)) != 0)))))) &&
                (((((local_58 == 0 || ((local_58 & *(uint *)(lVar7 + 0x28)) != 0)) &&
                   ((local_54 == 0 || (local_54 == *(int *)(lVar7 + 0x2c))))) &&
                  (((uVar14 & 0x1f) == 0 || ((*(uint *)(lVar7 + 0x3c) & uVar14 & 0x1f) != 0)))) &&
                 (((uVar14 & 0x20) == 0 || ((*(uint *)(lVar7 + 0x3c) & uVar14 & 0x20) != 0)))))) &&
               ((int)plVar10[1] != 0)) {
              if (plVar10 != plVar16) {
                lVar7 = plVar10[2];
                if (plVar10 == plVar22) {
                  plVar22 = plVar6;
                }
                if (lVar7 != 0) {
                  *(long **)(lVar7 + 0x18) = plVar6;
                }
                if (plVar6 != (long *)0x0) {
                  plVar6[2] = lVar7;
                }
                plVar16[3] = (long)plVar10;
                plVar10[2] = (long)plVar16;
                plVar10[3] = 0;
              }
              *(undefined4 *)(plVar10 + 1) = 0;
              plVar16 = plVar10;
            }
            plVar23 = plVar22;
          } while ((plVar10 != plVar18) && (plVar10 = plVar6, plVar6 != (long *)0x0));
        }
      }
      else if ((plVar18 != (long *)0x0) && (plVar22 != (long *)0x0)) {
        plVar10 = plVar18;
        do {
          plVar6 = (long *)plVar10[2];
          lVar7 = *plVar10;
          if ((((((iVar3 == 0) || (iVar3 == *(int *)(lVar7 + 0x18))) &&
                ((local_6c == 0 || ((local_6c & *(uint *)(lVar7 + 0x1c)) != 0)))) &&
               ((local_68 == 0 || ((local_68 & *(uint *)(lVar7 + 0x20)) != 0)))) &&
              ((local_64 == 0 || ((local_64 & *(uint *)(lVar7 + 0x24)) != 0)))) &&
             (((((local_58 == 0 || ((local_58 & *(uint *)(lVar7 + 0x28)) != 0)) &&
                ((local_54 == 0 || (local_54 == *(int *)(lVar7 + 0x2c))))) &&
               (((uVar14 & 0x1f) == 0 || ((*(uint *)(lVar7 + 0x3c) & uVar14 & 0x1f) != 0)))) &&
              (((uVar14 & 0x20) == 0 || ((*(uint *)(lVar7 + 0x3c) & uVar14 & 0x20) != 0)))))) {
            plVar16 = (long *)plVar10[3];
            if (local_70 == 4) {
              if (((int)plVar10[1] != 0) && (plVar10 != plVar23)) {
                if (plVar10 == plVar18) {
                  plVar18 = plVar6;
                }
                if (plVar16 != (long *)0x0) {
                  plVar16[2] = (long)plVar6;
                }
                if (plVar6 != (long *)0x0) {
                  plVar6[3] = (long)plVar16;
                }
                plVar23[2] = (long)plVar10;
                plVar10[3] = (long)plVar23;
                plVar10[2] = 0;
                plVar23 = plVar10;
              }
            }
            else if (local_70 == 2) {
              if (plVar10 == plVar18) {
                *(undefined4 *)(plVar10 + 1) = 0;
                if (plVar10 == plVar23) {
                  plVar23 = plVar16;
                }
                plVar18 = plVar6;
                if (plVar6 != (long *)0x0) goto LAB_0010107a;
LAB_00101082:
                if (plVar16 != (long *)0x0) goto LAB_00101087;
              }
              else {
                plVar16[2] = (long)plVar6;
                *(undefined4 *)(plVar10 + 1) = 0;
                if (plVar10 == plVar23) {
                  plVar23 = plVar16;
                }
                if (plVar6 != (long *)0x0) {
LAB_0010107a:
                  plVar6[3] = (long)plVar16;
                  plVar16 = (long *)plVar10[3];
                  goto LAB_00101082;
                }
LAB_00101087:
                plVar16[2] = (long)plVar6;
              }
              *(undefined1 (*) [16])(plVar10 + 2) = (undefined1  [16])0x0;
            }
            else if ((int)plVar10[1] == 0) {
              if (plVar10 != plVar23) {
                if (plVar10 == plVar18) {
                  plVar18 = plVar6;
                }
                if (plVar16 != (long *)0x0) {
                  plVar16[2] = (long)plVar6;
                }
                if (plVar6 != (long *)0x0) {
                  plVar6[3] = (long)plVar16;
                }
                plVar23[2] = (long)plVar10;
                plVar10[2] = 0;
                plVar10[3] = (long)plVar23;
                plVar23 = plVar10;
              }
              *(undefined4 *)(plVar10 + 1) = 1;
            }
          }
          plVar16 = plVar18;
        } while ((plVar6 != (long *)0x0) && (bVar24 = plVar22 != plVar10, plVar10 = plVar6, bVar24))
        ;
      }
      *param_2 = (long)plVar16;
      *param_3 = (long)plVar23;
      uVar13 = (ulong)*param_1;
      if (*param_1 == 0) {
        return uVar15;
      }
    }
    bVar11 = (byte)uVar13;
    cVar12 = bVar11 - 0x2b;
    bVar24 = bVar11 == 0x2b;
joined_r0x00100aa0:
    if (bVar24) {
LAB_00100aa6:
      local_70 = 4;
      uVar13 = (ulong)param_1[1];
      param_1 = param_1 + 1;
      goto LAB_001009ab;
    }
  } while (bVar24 || SBORROW1(bVar11,'+') != cVar12 < '\0');
LAB_00100e92:
  if ((char)uVar13 == '-') {
    local_70 = 3;
    uVar13 = (ulong)param_1[1];
    param_1 = param_1 + 1;
  }
  else if ((char)uVar13 == '@') {
    local_70 = 5;
    uVar13 = (ulong)param_1[1];
    param_1 = param_1 + 1;
  }
  else {
LAB_00100abe:
    if (((byte)uVar13 < 0x3c) && ((0xc00100100000000U >> (uVar13 & 0x3f) & 1) != 0)) {
      bVar11 = param_1[1];
      param_1 = param_1 + 1;
      goto LAB_00100917;
    }
    local_70 = 1;
  }
  goto LAB_001009ab;
LAB_00100c86:
  uVar13 = (ulong)*param_1;
  __s1 = param_1;
  goto LAB_001009e0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ssl_load_ciphers(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  EVP_PKEY_ASN1_METHOD *pEVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  long *plVar9;
  long in_FS_OFFSET;
  int local_3c;
  ENGINE *local_38;
  long local_30;
  
  lVar7 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0xd4) = 0;
LAB_0010128a:
  do {
    if ((&DAT_00104184)[lVar7 * 2] != 0) {
      lVar4 = ssl_evp_cipher_fetch(*param_1,(&DAT_00104184)[lVar7 * 2],param_1[0x8e]);
      param_1[lVar7 + 0x96] = lVar4;
      if (lVar4 == 0) {
        lVar4 = lVar7 * 2;
        lVar7 = lVar7 + 1;
        *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | (&ssl_cipher_table_cipher)[lVar4];
        if (lVar7 == 0x18) break;
        goto LAB_0010128a;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x18);
  puVar8 = &ssl_cipher_table_mac;
  *(undefined4 *)((long)param_1 + 0x6a4) = 0;
  plVar9 = param_1 + 0xbc;
  do {
    while( true ) {
      lVar7 = ssl_evp_md_fetch(*param_1,puVar8[1],param_1[0x8e]);
      plVar9[-0xe] = lVar7;
      if (lVar7 != 0) break;
      uVar1 = *puVar8;
      puVar8 = puVar8 + 2;
      *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | uVar1;
      plVar9 = plVar9 + 1;
      if (puVar8 == (uint *)&DAT_00104170) goto LAB_00101344;
    }
    iVar3 = EVP_MD_get_size(lVar7);
    if (iVar3 < 1) {
      uVar6 = 0;
      goto LAB_00101734;
    }
    puVar8 = puVar8 + 2;
    *plVar9 = (long)iVar3;
    plVar9 = plVar9 + 1;
  } while (puVar8 != (uint *)&DAT_00104170);
LAB_00101344:
  param_1[0xd5] = 0;
  ERR_set_mark();
  lVar7 = EVP_SIGNATURE_fetch(*param_1,&_LC3,param_1[0x8e]);
  if (lVar7 == 0) {
    *(uint *)((long)param_1 + 0x6ac) = *(uint *)((long)param_1 + 0x6ac) | 2;
  }
  else {
    EVP_SIGNATURE_free(lVar7);
  }
  lVar7 = EVP_KEYEXCH_fetch(*param_1,&_LC4,param_1[0x8e]);
  if (lVar7 == 0) {
    *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) | 0x102;
  }
  else {
    EVP_KEYEXCH_free(lVar7);
  }
  lVar7 = EVP_KEYEXCH_fetch(*param_1,&_LC5,param_1[0x8e]);
  if (lVar7 == 0) {
    *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) | 0x84;
  }
  else {
    EVP_KEYEXCH_free(lVar7);
  }
  lVar7 = EVP_SIGNATURE_fetch(*param_1,"ECDSA",param_1[0x8e]);
  if (lVar7 == 0) {
    *(uint *)((long)param_1 + 0x6ac) = *(uint *)((long)param_1 + 0x6ac) | 8;
  }
  else {
    EVP_SIGNATURE_free(lVar7);
  }
  ERR_pop_to_mark();
  uVar2 = _UNK_00105bd8;
  uVar6 = __LC14;
  param_1[0x93] = 0x357;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x8f] = uVar6;
  param_1[0x90] = uVar2;
  param_1[0x91] = uVar6;
  param_1[0x92] = uVar2;
  local_38 = (ENGINE *)0x0;
  local_3c = 0;
  pEVar5 = EVP_PKEY_asn1_find_str(&local_38,"gost-mac",-1);
  if (pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0) {
    iVar3 = EVP_PKEY_asn1_get0_info
                      (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar5);
    if (iVar3 < 1) {
      local_3c = 0;
    }
  }
  tls_engine_finish(local_38);
  *(int *)((long)param_1 + 0x484) = local_3c;
  if (local_3c == 0) {
    *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | 8;
  }
  else {
    param_1[0xbf] = 0x20;
  }
  local_38 = (ENGINE *)0x0;
  local_3c = 0;
  pEVar5 = EVP_PKEY_asn1_find_str(&local_38,"gost-mac-12",-1);
  if (pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0) {
    iVar3 = EVP_PKEY_asn1_get0_info
                      (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar5);
    if (iVar3 < 1) {
      local_3c = 0;
    }
  }
  tls_engine_finish(local_38);
  *(int *)((long)param_1 + 0x494) = local_3c;
  if (local_3c == 0) {
    *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | 0x100;
  }
  else {
    param_1[0xc3] = 0x20;
  }
  local_38 = (ENGINE *)0x0;
  local_3c = 0;
  pEVar5 = EVP_PKEY_asn1_find_str(&local_38,"magma-mac",-1);
  if (pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0) {
    iVar3 = EVP_PKEY_asn1_get0_info
                      (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar5);
    if (iVar3 < 1) {
      local_3c = 0;
    }
  }
  tls_engine_finish(local_38);
  *(int *)(param_1 + 0x95) = local_3c;
  if (local_3c == 0) {
    *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | 0x400;
  }
  else {
    param_1[200] = 0x20;
  }
  local_38 = (ENGINE *)0x0;
  local_3c = 0;
  pEVar5 = EVP_PKEY_asn1_find_str(&local_38,"kuznyechik-mac",-1);
  if (pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0) {
    iVar3 = EVP_PKEY_asn1_get0_info
                      (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar5);
    if (iVar3 < 1) {
      local_3c = 0;
    }
  }
  tls_engine_finish(local_38);
  *(int *)((long)param_1 + 0x4ac) = local_3c;
  if (local_3c == 0) {
    *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | 0x800;
  }
  else {
    param_1[0xc9] = 0x20;
  }
  local_38 = (ENGINE *)0x0;
  local_3c = 0;
  pEVar5 = EVP_PKEY_asn1_find_str(&local_38,"gost2001",-1);
  if (pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0) {
    iVar3 = EVP_PKEY_asn1_get0_info
                      (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar5);
    if (iVar3 < 1) {
      local_3c = 0;
    }
  }
  tls_engine_finish(local_38);
  if (local_3c == 0) {
    *(uint *)((long)param_1 + 0x6ac) = *(uint *)((long)param_1 + 0x6ac) | 0xa0;
  }
  local_38 = (ENGINE *)0x0;
  local_3c = 0;
  pEVar5 = EVP_PKEY_asn1_find_str(&local_38,"gost2012_256",-1);
  if (pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0) {
    iVar3 = EVP_PKEY_asn1_get0_info
                      (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar5);
    if (iVar3 < 1) {
      local_3c = 0;
    }
  }
  tls_engine_finish(local_38);
  if (local_3c == 0) {
    *(uint *)((long)param_1 + 0x6ac) = *(uint *)((long)param_1 + 0x6ac) | 0x80;
  }
  local_38 = (ENGINE *)0x0;
  local_3c = 0;
  pEVar5 = EVP_PKEY_asn1_find_str(&local_38,"gost2012_512",-1);
  if (pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0) {
    iVar3 = EVP_PKEY_asn1_get0_info
                      (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar5);
    if (iVar3 < 1) {
      local_3c = 0;
    }
  }
  tls_engine_finish(local_38);
  uVar1 = *(uint *)((long)param_1 + 0x6ac);
  if (local_3c == 0) {
    *(uint *)((long)param_1 + 0x6ac) = uVar1 | 0x80;
    if ((uVar1 & 0xa0 | 0x80) == 0xa0) {
      *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) | 0x10;
    }
  }
  else {
    if ((~uVar1 & 0xa0) == 0) {
      *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) | 0x10;
    }
    if ((uVar1 & 0x80) == 0) goto LAB_0010172f;
  }
  *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) | 0x200;
LAB_0010172f:
  uVar6 = 1;
LAB_00101734:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ssl_cipher_get_evp_cipher(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  while (*(int *)(param_2 + 0x24) != (&ssl_cipher_table_cipher)[lVar2 * 2]) {
    lVar2 = lVar2 + 1;
    if (lVar2 == 0x18) {
      lVar2 = 0;
LAB_001018e6:
      *param_3 = lVar2;
      return true;
    }
  }
  if (lVar2 == 5) {
    lVar2 = EVP_CIPHER_fetch(*param_1,&_LC15,param_1[0x8e]);
    *param_3 = lVar2;
    return lVar2 != 0;
  }
  lVar2 = (long)(int)lVar2 + 0x96;
  if (param_1[lVar2] != 0) {
    iVar1 = ssl_evp_cipher_up_ref();
    if (iVar1 != 0) {
      lVar2 = param_1[lVar2];
      goto LAB_001018e6;
    }
  }
  return false;
}



undefined8
ssl_cipher_get_evp_md_mac
          (long param_1,long param_2,long *param_3,undefined4 *param_4,undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_2 + 0x28);
  if (iVar2 == 1) {
    lVar3 = 0;
  }
  else if (iVar2 == 2) {
    lVar3 = 1;
  }
  else if (iVar2 == 4) {
    lVar3 = 2;
  }
  else if (iVar2 == 8) {
    lVar3 = 3;
  }
  else if (iVar2 == 0x10) {
    lVar3 = 4;
  }
  else if (iVar2 == 0x20) {
    lVar3 = 5;
  }
  else if (iVar2 == 0x80) {
    lVar3 = 6;
  }
  else if (iVar2 == 0x100) {
    lVar3 = 7;
  }
  else if (iVar2 == 0x200) {
    lVar3 = 8;
  }
  else if (iVar2 == 0) {
    lVar3 = 9;
  }
  else if (iVar2 == 0x400) {
    lVar3 = 0xc;
  }
  else {
    if (iVar2 != 0x800) {
      *param_3 = 0;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      if (param_5 == (undefined8 *)0x0) {
        return 1;
      }
      *param_5 = 0;
      return 1;
    }
    lVar3 = 0xd;
  }
  lVar1 = *(long *)(param_1 + 0x570 + lVar3 * 8);
  if ((lVar1 != 0) && (iVar2 = ssl_evp_md_up_ref(lVar1), iVar2 != 0)) {
    *param_3 = lVar1;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_1 + 0x478 + (long)(int)lVar3 * 4);
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = *(undefined8 *)(param_1 + 0x5e0 + (long)(int)lVar3 * 8);
    }
    return 1;
  }
  return 0;
}



undefined8 ssl_md(long param_1,byte param_2)

{
  if (param_2 < 0xe) {
    return *(undefined8 *)(param_1 + 0x570 + (ulong)param_2 * 8);
  }
  return 0;
}



void ssl_handshake_md(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = ssl_get_algorithm2();
  ssl_md(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}



void ssl_prf_md(long param_1)

{
  long lVar1;
  
  lVar1 = ssl_get_algorithm2();
  ssl_md(*(undefined8 *)(param_1 + 8),lVar1 >> 8);
  return;
}



undefined8 SSL_CTX_set_ciphersuites(long param_1,char *param_2)

{
  int iVar1;
  void *arg;
  undefined8 uVar2;
  
  arg = (void *)OPENSSL_sk_new_null();
  if (arg != (void *)0x0) {
    if (*param_2 == '\0') {
LAB_00101ba1:
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x20));
      *(void **)(param_1 + 0x20) = arg;
      if (*(long *)(param_1 + 0x10) == 0) {
        return 1;
      }
      uVar2 = update_cipher_list(param_1,param_1 + 0x10,param_1 + 0x18,arg);
      return uVar2;
    }
    iVar1 = CONF_parse_list(param_2,0x3a,1,ciphersuite_cb,arg);
    if (0 < iVar1) {
      iVar1 = OPENSSL_sk_num(arg);
      if (iVar1 != 0) goto LAB_00101ba1;
    }
    ERR_new();
    ERR_set_debug("ssl/ssl_ciph.c",0x526,"set_ciphersuites");
    ERR_set_error(0x14,0xb9,0);
    OPENSSL_sk_free(arg);
  }
  return 0;
}



undefined8 SSL_set_ciphersuites(SSL *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  SSL *pSVar4;
  BIO *arg;
  stack_st_SSL_CIPHER *psVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_1 == (SSL *)0x0) {
    return 0;
  }
  pSVar4 = param_1;
  if ((param_1->version == 0) ||
     (((param_1->version & 0x80U) != 0 &&
      (pSVar4 = (SSL *)ossl_quic_obj_get0_handshake_layer(), pSVar4 != (SSL *)0x0)))) {
    arg = (BIO *)OPENSSL_sk_new_null();
    if (arg != (BIO *)0x0) {
      if ((*param_2 == '\0') ||
         ((iVar3 = CONF_parse_list(param_2,0x3a,1,ciphersuite_cb,arg), 0 < iVar3 &&
          (iVar3 = OPENSSL_sk_num(arg), iVar3 != 0)))) {
        OPENSSL_sk_free(pSVar4[2].rbio);
        pSVar4[2].rbio = arg;
        lVar2._0_4_ = pSVar4[2].version;
        lVar2._4_4_ = pSVar4[2].type;
        if (lVar2 == 0) {
          psVar5 = SSL_get_ciphers(param_1);
          if (psVar5 == (stack_st_SSL_CIPHER *)0x0) {
            lVar7._0_4_ = pSVar4[2].version;
            lVar7._4_4_ = pSVar4[2].type;
          }
          else {
            lVar7 = OPENSSL_sk_dup(psVar5);
            pSVar4[2].version = (int)lVar7;
            pSVar4[2].type = (int)((ulong)lVar7 >> 0x20);
          }
          if (lVar7 == 0) {
            return 1;
          }
          arg = pSVar4[2].rbio;
        }
        uVar6 = update_cipher_list(param_1->method,pSVar4 + 2,&pSVar4[2].method,arg);
        return uVar6;
      }
      ERR_new();
      ERR_set_debug("ssl/ssl_ciph.c",0x526,"set_ciphersuites");
      ERR_set_error(0x14,0xb9,0);
      OPENSSL_sk_free(arg);
    }
    lVar1._0_4_ = pSVar4[2].version;
    lVar1._4_4_ = pSVar4[2].type;
    if ((lVar1 == 0) && (psVar5 = SSL_get_ciphers(param_1), psVar5 != (stack_st_SSL_CIPHER *)0x0)) {
      uVar6 = OPENSSL_sk_dup(psVar5);
      pSVar4[2].version = (int)uVar6;
      pSVar4[2].type = (int)((ulong)uVar6 >> 0x20);
    }
  }
  return 0;
}



char * SSL_CIPHER_description(SSL_CIPHER *param_1,char *buf,int size)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  size_t local_40;
  
  if (buf == (char *)0x0) {
    buf = (char *)CRYPTO_malloc(0x80,"ssl/ssl_ciph.c",0x691);
    if (buf == (char *)0x0) {
      return (char *)0x0;
    }
    local_40 = 0x80;
  }
  else {
    if (size < 0x80) {
      return (char *)0x0;
    }
    local_40 = (size_t)size;
  }
  uVar1 = *(uint *)((long)&param_1->algorithm_mkey + 4);
  iVar2 = (int)param_1->algorithm_auth;
  uVar3 = *(uint *)((long)&param_1->algorithm_auth + 4);
  uVar4 = (uint)param_1->algorithm_enc;
  uVar5 = ssl_protocol_to_string(*(undefined4 *)((long)&param_1->algorithm_enc + 4));
  switch(uVar1) {
  case 0:
    pcVar9 = "any";
    break;
  case 1:
    pcVar9 = "RSA";
    break;
  case 2:
    pcVar9 = "DH";
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    pcVar9 = "unknown";
    break;
  case 4:
    pcVar9 = "ECDH";
    break;
  case 8:
    pcVar9 = "PSK";
    break;
  case 0x10:
    pcVar9 = "GOST";
    break;
  case 0x20:
    pcVar9 = "SRP";
    break;
  default:
    pcVar9 = "DHEPSK";
    if (uVar1 != 0x100) {
      if (uVar1 < 0x101) {
        pcVar9 = "RSAPSK";
        if ((uVar1 != 0x40) && (pcVar9 = "unknown", uVar1 == 0x80)) {
          pcVar9 = "ECDHEPSK";
        }
      }
      else {
        pcVar9 = "unknown";
        if (uVar1 == 0x200) {
          pcVar9 = "GOST18";
        }
      }
    }
  }
  switch(iVar2) {
  case 0:
    pcVar7 = "any";
    break;
  case 1:
    pcVar7 = "RSA";
    break;
  case 2:
    pcVar7 = "DSS";
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    pcVar7 = "unknown";
    break;
  case 4:
    pcVar7 = "None";
    break;
  case 8:
    pcVar7 = "ECDSA";
    break;
  case 0x10:
    pcVar7 = "PSK";
    break;
  case 0x20:
    pcVar7 = "GOST01";
    break;
  default:
    pcVar7 = "SRP";
    if ((iVar2 != 0x40) && (pcVar7 = "unknown", iVar2 == 0xa0)) {
      pcVar7 = "GOST12";
    }
  }
  pcVar6 = "AESGCM(128)";
  if (uVar3 != 0x1000) {
    if (uVar3 < 0x1001) {
      if (uVar3 < 0x21) {
        pcVar6 = "unknown";
        if (uVar3 != 0) {
          switch(uVar3) {
          case 1:
            pcVar6 = "DES(56)";
            break;
          case 2:
            pcVar6 = "3DES(168)";
            break;
          default:
            pcVar6 = "unknown";
            break;
          case 4:
            pcVar6 = "RC4(128)";
            break;
          case 8:
            pcVar6 = "RC2(128)";
            break;
          case 0x10:
            pcVar6 = "IDEA(128)";
            break;
          case 0x20:
            pcVar6 = "None";
          }
        }
      }
      else {
        pcVar6 = "Camellia(128)";
        if (uVar3 != 0x100) {
          if (uVar3 < 0x101) {
            pcVar6 = "AES(128)";
            if ((uVar3 != 0x40) && (pcVar6 = "unknown", uVar3 == 0x80)) {
              pcVar6 = "AES(256)";
            }
          }
          else {
            pcVar6 = "GOST89(256)";
            if (((uVar3 != 0x400) && (pcVar6 = "SEED(128)", uVar3 != 0x800)) &&
               (pcVar6 = "unknown", uVar3 == 0x200)) {
              pcVar6 = "Camellia(256)";
            }
          }
        }
      }
    }
    else {
      pcVar6 = "GOST89(256)";
      if (uVar3 != 0x40000) {
        if (uVar3 < 0x40001) {
          pcVar6 = "AESCCM(256)";
          if (uVar3 != 0x8000) {
            if (uVar3 < 0x8001) {
              pcVar6 = "AESGCM(256)";
              if ((uVar3 != 0x2000) && (pcVar6 = "unknown", uVar3 == 0x4000)) {
                pcVar6 = "AESCCM(128)";
              }
            }
            else {
              pcVar6 = "AESCCM8(128)";
              if ((uVar3 != 0x10000) && (pcVar6 = "unknown", uVar3 == 0x20000)) {
                pcVar6 = "AESCCM8(256)";
              }
            }
          }
        }
        else {
          pcVar6 = "ARIAGCM(256)";
          if (uVar3 != 0x200000) {
            if (uVar3 < 0x200001) {
              pcVar6 = "CHACHA20/POLY1305(256)";
              if ((uVar3 != 0x80000) && (pcVar6 = "unknown", uVar3 == 0x100000)) {
                pcVar6 = "ARIAGCM(128)";
              }
            }
            else {
              pcVar6 = "MAGMA";
              if ((uVar3 != 0x400000) && (pcVar6 = "unknown", uVar3 == 0x800000)) {
                pcVar6 = "KUZNYECHIK";
              }
            }
          }
        }
      }
    }
  }
  if (uVar4 < 0x21) {
    pcVar8 = "unknown";
    if (uVar4 != 0) {
      switch(uVar4) {
      case 1:
        pcVar8 = "MD5";
        break;
      case 2:
        pcVar8 = "SHA1";
        break;
      default:
        pcVar8 = "unknown";
        break;
      case 4:
        pcVar8 = "GOST94";
        break;
      case 8:
        pcVar8 = "GOST89";
        break;
      case 0x10:
        pcVar8 = "SHA256";
        break;
      case 0x20:
        pcVar8 = "SHA384";
      }
    }
  }
  else {
    pcVar8 = "GOST2012";
    if (uVar4 != 0x80) {
      if (uVar4 < 0x81) {
        pcVar8 = "unknown";
        if (uVar4 == 0x40) {
          pcVar8 = "AEAD";
        }
      }
      else {
        pcVar8 = "GOST89";
        if ((uVar4 != 0x100) && (pcVar8 = "unknown", uVar4 == 0x200)) {
          pcVar8 = "GOST2012";
        }
      }
    }
  }
  BIO_snprintf(buf,local_40,"%-30s %-7s Kx=%-8s Au=%-5s Enc=%-22s Mac=%-4s\n",param_1->name,uVar5,
               pcVar9,pcVar7,pcVar6,pcVar8);
  return buf;
}



char * SSL_CIPHER_get_version(SSL_CIPHER *c)

{
  char *pcVar1;
  
  if (c == (SSL_CIPHER *)0x0) {
    return "(NONE)";
  }
  if (*(int *)((long)&c->algorithm_enc + 4) != 0x301) {
    pcVar1 = (char *)ssl_protocol_to_string();
    return pcVar1;
  }
  return "TLSv1.0";
}



char * SSL_CIPHER_get_name(SSL_CIPHER *c)

{
  char *pcVar1;
  
  pcVar1 = "(NONE)";
  if (c != (SSL_CIPHER *)0x0) {
    pcVar1 = c->name;
  }
  return pcVar1;
}



char * SSL_CIPHER_standard_name(long param_1)

{
  char *pcVar1;
  
  pcVar1 = "(NONE)";
  if (param_1 != 0) {
    pcVar1 = *(char **)(param_1 + 0x10);
  }
  return pcVar1;
}



char * OPENSSL_cipher_name(long param_1)

{
  SSL_CIPHER *c;
  char *pcVar1;
  
  if (param_1 != 0) {
    c = (SSL_CIPHER *)ssl3_get_cipher_by_std_name();
    pcVar1 = SSL_CIPHER_get_name(c);
    return pcVar1;
  }
  return "(NONE)";
}



int SSL_CIPHER_get_bits(SSL_CIPHER *c,int *alg_bits)

{
  int iVar1;
  
  iVar1 = 0;
  if (c != (SSL_CIPHER *)0x0) {
    if (alg_bits != (int *)0x0) {
      *alg_bits = (int)c->algorithm2;
    }
    iVar1 = *(int *)((long)&c->algo_strength + 4);
  }
  return iVar1;
}



ulong SSL_CIPHER_get_id(SSL_CIPHER *c)

{
  return (ulong)(uint)c->algorithm_mkey;
}



undefined2 SSL_CIPHER_get_protocol_id(long param_1)

{
  return *(undefined2 *)(param_1 + 0x18);
}



undefined8 ssl3_comp_find(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_28 [6];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && (param_1 != 0)) {
    local_28[0] = param_2;
    iVar1 = OPENSSL_sk_find(param_1,local_28);
    if (-1 < iVar1) {
      uVar2 = OPENSSL_sk_value(param_1,iVar1);
      goto LAB_00102522;
    }
  }
  uVar2 = 0;
LAB_00102522:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

stack_st_SSL_COMP * SSL_COMP_get_compression_methods(void)

{
  stack_st_SSL_COMP *psVar1;
  
  psVar1 = (stack_st_SSL_COMP *)OSSL_LIB_CTX_get_data(0,0x15);
  if (psVar1 != (stack_st_SSL_COMP *)0x0) {
    psVar1 = *(stack_st_SSL_COMP **)&psVar1->stack;
  }
  return psVar1;
}



undefined8
ssl_cipher_get_evp(undefined8 *param_1,int *param_2,long *param_3,long *param_4,int *param_5,
                  undefined8 param_6,undefined8 *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  stack_st_SSL_COMP *psVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  lVar4 = *(long *)(param_2 + 0xbe);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 != 0) {
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = 0;
      local_58[0] = param_2[0xbc];
      psVar3 = SSL_COMP_get_compression_methods();
      if ((psVar3 != (stack_st_SSL_COMP *)0x0) &&
         (iVar2 = OPENSSL_sk_find(psVar3,local_58), -1 < iVar2)) {
        uVar5 = OPENSSL_sk_value(psVar3,iVar2);
        *param_7 = uVar5;
      }
      if (param_4 != (long *)0x0 || param_3 != (long *)0x0) goto LAB_00102603;
      goto LAB_00102718;
    }
LAB_00102603:
    if (((param_3 != (long *)0x0) && (param_4 != (long *)0x0)) &&
       (iVar2 = ssl_cipher_get_evp_cipher(param_1,lVar4,param_3), iVar2 != 0)) {
      iVar2 = ssl_cipher_get_evp_md_mac(param_1,lVar4,param_4,param_5,param_6);
      if (iVar2 == 0) {
        ssl_evp_cipher_free();
      }
      else if (((*param_3 != 0) &&
               ((*param_4 != 0 || (uVar6 = EVP_CIPHER_get_flags(), (uVar6 & 0x200000) != 0)))) &&
              ((iVar2 = *(int *)(lVar4 + 0x28), param_5 == (int *)0x0 ||
               ((iVar2 == 0x40 || (*param_5 != 0)))))) {
        if ((param_8 == 0) && ((*param_2 >> 8 == 3 && (*param_2 != 0x300)))) {
          iVar1 = *(int *)(lVar4 + 0x24);
          if (iVar1 == 4) {
            if (iVar2 != 1) goto LAB_00102718;
            lVar4 = ssl_evp_cipher_fetch(*param_1,0x393,param_1[0x8e]);
          }
          else if (iVar1 == 0x40) {
            if (iVar2 == 2) {
              lVar4 = ssl_evp_cipher_fetch(*param_1,0x394,param_1[0x8e]);
            }
            else {
              if (iVar2 != 0x10) goto LAB_00102718;
              lVar4 = ssl_evp_cipher_fetch(*param_1,0x3b4,param_1[0x8e]);
            }
          }
          else {
            if (iVar1 != 0x80) goto LAB_00102718;
            if (iVar2 == 2) {
              lVar4 = ssl_evp_cipher_fetch(*param_1,0x396,param_1[0x8e]);
            }
            else {
              if (iVar2 != 0x10) goto LAB_00102718;
              lVar4 = ssl_evp_cipher_fetch(*param_1,0x3b6,param_1[0x8e]);
            }
          }
          if (lVar4 != 0) {
            ssl_evp_cipher_free(*param_3);
            ssl_evp_md_free(*param_4);
            *param_3 = lVar4;
            *param_4 = 0;
          }
        }
LAB_00102718:
        uVar5 = 1;
        goto LAB_00102621;
      }
    }
  }
  uVar5 = 0;
LAB_00102621:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8 SSL_COMP_set0_compression_methods(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)OSSL_LIB_CTX_get_data(0,0x15);
  uVar2 = param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = param_1;
  }
  return uVar2;
}



int SSL_COMP_add_compression_method(int id,COMP_METHOD *cm)

{
  int iVar1;
  stack_st_SSL_COMP *psVar2;
  int *ptr;
  
  psVar2 = SSL_COMP_get_compression_methods();
  if (((psVar2 != (stack_st_SSL_COMP *)0x0) && (cm != (COMP_METHOD *)0x0)) &&
     (iVar1 = COMP_get_type(cm), iVar1 != 0)) {
    if (id - 0xc1U < 0x3f) {
      ptr = (int *)CRYPTO_malloc(0x18,"ssl/ssl_ciph.c",0x7f3);
      if (ptr != (int *)0x0) {
        *ptr = id;
        iVar1 = OPENSSL_sk_find(psVar2,ptr);
        if (iVar1 < 0) {
          iVar1 = OPENSSL_sk_push(psVar2,ptr);
          if (iVar1 != 0) {
            return 0;
          }
          CRYPTO_free(ptr);
          ERR_new();
          ERR_set_debug("ssl/ssl_ciph.c",0x7ff,"SSL_COMP_add_compression_method");
          ERR_set_error(0x14,0x8000f,0);
        }
        else {
          CRYPTO_free(ptr);
          ERR_new();
          ERR_set_debug("ssl/ssl_ciph.c",0x7fa,"SSL_COMP_add_compression_method");
          ERR_set_error(0x14,0x135,0);
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("ssl/ssl_ciph.c",0x7ef,"SSL_COMP_add_compression_method");
      ERR_set_error(0x14,0x133,0);
    }
  }
  return 1;
}



char * SSL_COMP_get_name(COMP_METHOD *comp)

{
  char *pcVar1;
  
  if (comp != (COMP_METHOD *)0x0) {
    pcVar1 = (char *)COMP_get_name();
    return pcVar1;
  }
  return (char *)0x0;
}



undefined8 SSL_COMP_get0_name(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined4 SSL_COMP_get_id(undefined4 *param_1)

{
  return *param_1;
}



int * ssl_get_cipher_by_char(long param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(long *)(param_1 + 0x18) + 0xa8))(param_2);
  if (((piVar1 != (int *)0x0) && (param_3 == 0)) && (*piVar1 == 0)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



void SSL_CIPHER_find(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00102a1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0xa8))(param_2);
  return;
}



undefined4 SSL_CIPHER_get_cipher_nid(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = 0;
    do {
      if (*(int *)(param_1 + 0x24) == (&ssl_cipher_table_cipher)[lVar1 * 2]) {
        return (&DAT_00104184)[(long)(int)lVar1 * 2];
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x18);
  }
  return 0;
}



undefined4 SSL_CIPHER_get_digest_nid(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 1) {
    lVar2 = 0;
  }
  else if (iVar1 == 2) {
    lVar2 = 1;
  }
  else if (iVar1 == 4) {
    lVar2 = 2;
  }
  else if (iVar1 == 8) {
    lVar2 = 3;
  }
  else if (iVar1 == 0x10) {
    lVar2 = 4;
  }
  else if (iVar1 == 0x20) {
    lVar2 = 5;
  }
  else if (iVar1 == 0x80) {
    lVar2 = 6;
  }
  else if (iVar1 == 0x100) {
    lVar2 = 7;
  }
  else if (iVar1 == 0x200) {
    lVar2 = 8;
  }
  else if (iVar1 == 0) {
    lVar2 = 9;
  }
  else if (iVar1 == 0x400) {
    lVar2 = 0xc;
  }
  else {
    if (iVar1 != 0x800) {
      return 0;
    }
    lVar2 = 0xd;
  }
  return (&DAT_00104104)[lVar2 * 2];
}



undefined4 SSL_CIPHER_get_kx_nid(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    lVar2 = 0;
  }
  else if (iVar1 == 4) {
    lVar2 = 1;
  }
  else if (iVar1 == 2) {
    lVar2 = 2;
  }
  else if (iVar1 == 0x80) {
    lVar2 = 3;
  }
  else if (iVar1 == 0x100) {
    lVar2 = 4;
  }
  else if (iVar1 == 0x40) {
    lVar2 = 5;
  }
  else if (iVar1 == 8) {
    lVar2 = 6;
  }
  else if (iVar1 == 0x20) {
    lVar2 = 7;
  }
  else if (iVar1 == 0x10) {
    lVar2 = 8;
  }
  else if (iVar1 == 0x200) {
    lVar2 = 9;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    lVar2 = 10;
  }
  return *(undefined4 *)(ssl_cipher_table_kx + lVar2 * 8 + 4);
}



undefined4 SSL_CIPHER_get_auth_nid(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 1) {
    lVar2 = 0;
  }
  else if (iVar1 == 8) {
    lVar2 = 1;
  }
  else if (iVar1 == 0x10) {
    lVar2 = 2;
  }
  else if (iVar1 == 2) {
    lVar2 = 3;
  }
  else if (iVar1 == 0x20) {
    lVar2 = 4;
  }
  else if (iVar1 == 0x80) {
    lVar2 = 5;
  }
  else if (iVar1 == 0x40) {
    lVar2 = 6;
  }
  else if (iVar1 == 4) {
    lVar2 = 7;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    lVar2 = 8;
  }
  return *(undefined4 *)(ssl_cipher_table_auth + lVar2 * 8 + 4);
}



undefined8 ssl_get_md_idx(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 4) {
    return 0;
  }
  if (param_1 == 0x40) {
    return 1;
  }
  if (param_1 == 0x329) {
    return 2;
  }
  if (param_1 == 0x32f) {
    return 3;
  }
  if (param_1 == 0x2a0) {
    return 4;
  }
  if (param_1 == 0x2a1) {
    return 5;
  }
  if (param_1 == 0x3d6) {
    return 6;
  }
  if (param_1 != 0x3d0) {
    if (param_1 == 0x3d7) {
      return 8;
    }
    if (param_1 == 0x72) {
      return 9;
    }
    if (param_1 == 0x2a3) {
      return 10;
    }
    if (param_1 != 0x2a2) {
      if (param_1 != 0x4a8) {
        uVar1 = 0xffffffff;
        if (param_1 == 0x3f9) {
          uVar1 = 0xd;
        }
        return uVar1;
      }
      return 0xc;
    }
    return 0xb;
  }
  return 7;
}



EVP_MD * SSL_CIPHER_get_handshake_digest(long param_1)

{
  char *name;
  EVP_MD *pEVar1;
  
  if (*(byte *)(param_1 + 0x40) < 0xe) {
    name = OBJ_nid2sn((&DAT_00104104)[(ulong)*(byte *)(param_1 + 0x40) * 2]);
    pEVar1 = EVP_get_digestbyname(name);
    return pEVar1;
  }
  return (EVP_MD *)0x0;
}



uint SSL_CIPHER_is_aead(long param_1)

{
  return *(uint *)(param_1 + 0x28) >> 6 & 1;
}



undefined8
ssl_cipher_get_overhead(long param_1,long *param_2,undefined8 *param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  EVP_MD *pEVar5;
  long lVar6;
  EVP_CIPHER *pEVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((*(uint *)(param_1 + 0x24) & 0x30f000) == 0) {
    if ((*(uint *)(param_1 + 0x24) & 0xb0000) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 0x40) == 0) {
        iVar1 = SSL_CIPHER_get_digest_nid();
        pcVar4 = OBJ_nid2sn(iVar1);
        pEVar5 = EVP_get_digestbyname(pcVar4);
        if ((pEVar5 != (EVP_MD *)0x0) && (iVar1 = EVP_MD_get_size(), 0 < iVar1)) {
          if (*(int *)(param_1 + 0x24) == 0x20) {
            lVar6 = (long)iVar1;
            lVar8 = 0;
            lVar9 = 0;
            uVar10 = 0;
            goto LAB_00102da3;
          }
          iVar2 = SSL_CIPHER_get_cipher_nid(param_1);
          pcVar4 = OBJ_nid2sn(iVar2);
          pEVar7 = EVP_get_cipherbyname(pcVar4);
          if (((pEVar7 != (EVP_CIPHER *)0x0) && (iVar2 = EVP_CIPHER_get_mode(pEVar7), iVar2 == 2))
             && (iVar2 = EVP_CIPHER_get_iv_length(pEVar7), -1 < iVar2)) {
            iVar3 = EVP_CIPHER_get_block_size(pEVar7);
            lVar9 = (long)iVar3;
            if (0 < iVar3) {
              lVar6 = (long)iVar1;
              lVar8 = (long)iVar2;
              uVar10 = 1;
              goto LAB_00102da3;
            }
          }
        }
      }
      return 0;
    }
    lVar8 = 0x10;
    lVar9 = 0;
    uVar10 = 0;
    lVar6 = 0;
  }
  else {
    lVar8 = 0x18;
    lVar9 = 0;
    uVar10 = 0;
    lVar6 = 0;
  }
LAB_00102da3:
  *param_2 = lVar6;
  *param_3 = uVar10;
  *param_4 = lVar9;
  *param_5 = lVar8;
  return 1;
}



bool ssl_cert_is_disabled(long param_1,ulong param_2)

{
  long lVar1;
  
  if (8 < param_2) {
    return false;
  }
  lVar1 = ssl_cert_lookup_by_idx(param_2,param_1);
  if (lVar1 != 0) {
    return (*(uint *)(lVar1 + 4) & *(uint *)(param_1 + 0x6ac)) != 0;
  }
  return true;
}



char * OSSL_default_cipher_list(void)

{
  return "ALL:!COMPLEMENTOFDEFAULT:!eNULL";
}



long ssl_create_cipher_list
               (long param_1,undefined8 param_2,long *param_3,long *param_4,char *param_5,
               long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  char *local_a8;
  long *local_98;
  long *local_50;
  long *local_48;
  long local_40;
  
  lVar12 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  if ((param_5 != (char *)0x0 && param_4 != (long *)0x0) && (param_3 != (long *)0x0)) {
    iVar6 = strncmp(param_5,"SUITEB128ONLY",0xd);
    uVar1 = *(uint *)(param_6 + 0x1c);
    if (iVar6 == 0) {
      bVar5 = false;
      uVar7 = 0x10000;
LAB_00102fe1:
      *(uint *)(param_6 + 0x1c) = uVar1 & 0xfffcffff | uVar7;
LAB_00102fef:
      if ((*(byte *)(*(long *)(lVar12 + 0xd8) + 0x50) & 0x10) == 0) {
        ERR_new();
        ERR_set_debug("ssl/ssl_ciph.c",0x4ea,"check_suiteb_cipher_list");
        ERR_set_error(0x14,0x9e,0);
        goto LAB_001035e7;
      }
      if (uVar7 == 0x20000) {
        local_a8 = "ECDHE-ECDSA-AES256-GCM-SHA384";
      }
      else if (uVar7 == 0x30000) {
        local_a8 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384";
        if (bVar5) {
          local_a8 = "ECDHE-ECDSA-AES256-GCM-SHA384";
        }
      }
      else {
        local_a8 = "ECDHE-ECDSA-AES128-GCM-SHA256";
        if (uVar7 != 0x10000) {
          local_a8 = param_5;
        }
      }
    }
    else {
      iVar6 = strncmp(param_5,"SUITEB128C2",0xb);
      if (iVar6 == 0) {
        bVar5 = true;
        uVar7 = 0x30000;
        goto LAB_00102fe1;
      }
      iVar6 = strncmp(param_5,"SUITEB128",9);
      if (iVar6 == 0) {
        bVar5 = false;
        uVar7 = 0x30000;
        goto LAB_00102fe1;
      }
      iVar6 = strncmp(param_5,"SUITEB192",9);
      if (iVar6 == 0) {
        bVar5 = false;
        uVar7 = 0x20000;
        goto LAB_00102fe1;
      }
      uVar7 = uVar1 & 0x30000;
      local_a8 = param_5;
      if (uVar7 != 0) {
        bVar5 = false;
        goto LAB_00102fef;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x6ac);
    uVar7 = *(uint *)(param_1 + 0x6a8);
    uVar2 = *(uint *)(param_1 + 0x6a0);
    uVar3 = *(uint *)(param_1 + 0x6a4);
    iVar6 = (**(code **)(lVar12 + 0xc0))();
    if (iVar6 < 1) {
      local_98 = (long *)0x0;
    }
    else {
      local_98 = (long *)CRYPTO_malloc((int)((long)iVar6 << 5),"ssl/ssl_ciph.c",0x5ba);
      if (local_98 == (long *)0x0) goto LAB_001035e7;
      iVar17 = 0;
      iVar16 = 0;
      do {
        piVar8 = (int *)(**(code **)(lVar12 + 200))(iVar16);
        if (((((piVar8 != (int *)0x0) && (*piVar8 != 0)) && ((uVar7 & piVar8[7]) == 0)) &&
            (((uVar1 & piVar8[8]) == 0 && ((uVar2 & piVar8[9]) == 0)))) &&
           ((uVar3 & piVar8[10]) == 0)) {
          if ((*(byte *)(*(long *)(lVar12 + 0xd8) + 0x50) & 8) == 0) {
            iVar4 = piVar8[0xb];
          }
          else {
            iVar4 = piVar8[0xd];
          }
          if (iVar4 != 0) {
            lVar14 = (long)iVar17;
            iVar17 = iVar17 + 1;
            plVar10 = local_98 + lVar14 * 4;
            *plVar10 = (long)piVar8;
            *(undefined4 *)(plVar10 + 1) = 0;
            *(undefined1 (*) [16])(plVar10 + 2) = (undefined1  [16])0x0;
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar6 != iVar16);
      if (0 < iVar17) {
        local_98[3] = 0;
        local_48 = local_98 + (long)iVar17 * 4 + -4;
        if (iVar17 != 1) {
          local_98[2] = (long)(local_98 + 4);
          if (iVar17 != 2) {
            plVar10 = local_98;
            do {
              plVar10[7] = (long)plVar10;
              plVar9 = plVar10 + 4;
              plVar10[6] = (long)(plVar10 + 8);
              plVar10 = plVar9;
            } while (local_98 + 4 + (ulong)(iVar17 - 3) * 4 != plVar9);
          }
          local_48[3] = (long)(local_98 + (long)iVar17 * 4 + -8);
        }
        local_48[2] = 0;
        local_50 = local_98;
      }
    }
    ssl_cipher_apply_rule_constprop_0(4,8,0,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule_constprop_0(4,0,0,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule_constprop_0(4,0,0,0,0,3,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule_constprop_0(0,0,0x3000,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule_constprop_0(0,0,0x80000,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule_constprop_0(0,0,0x3c0c0,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule_constprop_0(0,0,0,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule_constprop_0(0,0,0,1,0,4,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule_constprop_0(0,4,0,0,0,4,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule_constprop_0(1,0,0,0,0,4,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule_constprop_0(8,0,0,0,0,4,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule_constprop_0(0,0,4,0,0,4,0xffffffffffffffff,&local_50,&local_48);
    iVar16 = ssl_cipher_strength_sort(&local_50,&local_48);
    if (iVar16 == 0) {
      CRYPTO_free(local_98);
    }
    else {
      ssl_cipher_apply_rule_constprop_0(0,0,0,0,0x303,6,0xffffffffffffffff,&local_50,&local_48);
      ssl_cipher_apply_rule_constprop_0(0,0,0,0x40,0,6,0xffffffffffffffff,&local_50,&local_48);
      ssl_cipher_apply_rule_constprop_0(6,0,0,0,0,6,0xffffffffffffffff,&local_50,&local_48);
      ssl_cipher_apply_rule_constprop_0(6,0,0,0x40,0,6,0xffffffffffffffff,&local_50,&local_48);
      ssl_cipher_apply_rule_constprop_0(0,0,0,0,0,3,0xffffffffffffffff,&local_50,&local_48);
      plVar10 = (long *)CRYPTO_malloc((int)((long)(iVar6 + 0x50) << 3),"ssl/ssl_ciph.c",0x629);
      if (plVar10 == (long *)0x0) {
        CRYPTO_free(local_98);
      }
      else {
        plVar15 = plVar10;
        plVar9 = local_50;
        while (plVar9 != (long *)0x0) {
          lVar12 = *plVar9;
          plVar9 = (long *)plVar9[2];
          *plVar15 = lVar12;
          plVar15 = plVar15 + 1;
        }
        puVar11 = cipher_aliases;
        do {
          if ((((*(uint *)(puVar11 + 0x1c) == 0) || ((~uVar7 & *(uint *)(puVar11 + 0x1c)) != 0)) &&
              ((*(uint *)(puVar11 + 0x20) == 0 || ((~uVar1 & *(uint *)(puVar11 + 0x20)) != 0)))) &&
             (((*(uint *)(puVar11 + 0x24) == 0 || ((~uVar2 & *(uint *)(puVar11 + 0x24)) != 0)) &&
              ((*(uint *)(puVar11 + 0x28) == 0 || ((~uVar3 & *(uint *)(puVar11 + 0x28)) != 0)))))) {
            *plVar15 = (long)puVar11;
            plVar15 = plVar15 + 1;
          }
          puVar11 = puVar11 + 0x50;
        } while (puVar11 != &_LC14);
        *plVar15 = 0;
        iVar6 = strncmp(local_a8,"DEFAULT",7);
        if (iVar6 == 0) {
          uVar13 = OSSL_default_cipher_list();
          iVar6 = ssl_cipher_process_rulestr(uVar13,&local_50,&local_48,plVar10,param_6);
          if (local_a8[7] == ':') {
            local_a8 = local_a8 + 8;
          }
          else {
            local_a8 = local_a8 + 7;
          }
          if (iVar6 != 0) goto LAB_001034fb;
          CRYPTO_free(plVar10);
LAB_001037a3:
          CRYPTO_free(local_98);
        }
        else {
LAB_001034fb:
          if (*local_a8 == '\0') {
            CRYPTO_free(plVar10);
          }
          else {
            iVar6 = ssl_cipher_process_rulestr(local_a8,&local_50,&local_48,plVar10,param_6);
            CRYPTO_free(plVar10);
            if (iVar6 == 0) goto LAB_001037a3;
          }
          lVar12 = OPENSSL_sk_new_null();
          iVar6 = 0;
          if (lVar12 != 0) {
            while (iVar16 = OPENSSL_sk_num(param_2), plVar10 = local_50, iVar6 < iVar16) {
              while ((lVar14 = OPENSSL_sk_value(param_2,iVar6),
                     (uVar2 & *(uint *)(lVar14 + 0x24)) == 0 &&
                     (((&ssl_cipher_table_mac)[(ulong)*(byte *)(lVar14 + 0x40) * 2] &
                      *(uint *)(param_1 + 0x6a4)) == 0))) {
                iVar16 = OPENSSL_sk_push(lVar12);
                if (iVar16 == 0) goto LAB_001035d0;
                iVar6 = iVar6 + 1;
                iVar16 = OPENSSL_sk_num(param_2);
                plVar10 = local_50;
                if (iVar16 <= iVar6) goto joined_r0x0010359a;
              }
              OPENSSL_sk_delete(param_2,iVar6);
            }
joined_r0x0010359a:
            do {
              if (plVar10 == (long *)0x0) goto LAB_001036f0;
              if (((int)plVar10[1] != 0) && (iVar6 = OPENSSL_sk_push(lVar12,*plVar10), iVar6 == 0))
              goto LAB_001035d0;
              plVar10 = (long *)plVar10[2];
            } while( true );
          }
          CRYPTO_free(local_98);
        }
      }
    }
  }
  goto LAB_001035e7;
LAB_001035d0:
  CRYPTO_free(local_98);
  goto LAB_001035df;
LAB_001036f0:
  CRYPTO_free(local_98);
  lVar14 = OPENSSL_sk_dup(lVar12);
  if (lVar14 != 0) {
    OPENSSL_sk_free(*param_4);
    *param_4 = lVar14;
    OPENSSL_sk_set_cmp_func(lVar14,&ssl_cipher_ptr_id_cmp);
    OPENSSL_sk_sort(*param_4);
    OPENSSL_sk_free(*param_3);
    *param_3 = lVar12;
    goto LAB_001035ea;
  }
LAB_001035df:
  OPENSSL_sk_free(lVar12);
LAB_001035e7:
  lVar12 = 0;
LAB_001035ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * OSSL_default_ciphersuites(void)

{
  return "TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_GCM_SHA256";
}


