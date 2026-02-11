
undefined8
tree_add_unmatched(undefined8 param_1,long *param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  long lVar3;
  
  if (param_3 == 0) {
    param_3 = *(long *)((uint *)*param_4 + 2);
  }
  puVar2 = (uint *)ossl_policy_data_new(0,param_3,*(uint *)*param_4 & 0x10);
  if (puVar2 != (uint *)0x0) {
    uVar1 = *(undefined8 *)(*param_2 + 0x10);
    *puVar2 = *puVar2 | 4;
    *(undefined8 *)(puVar2 + 4) = uVar1;
    lVar3 = ossl_policy_level_add_node(param_1,puVar2,param_4,param_5,1);
    if (lVar3 != 0) {
      return 1;
    }
    ossl_policy_data_free(puVar2);
  }
  return 0;
}



void exnode_free(undefined8 *param_1)

{
  if (((byte *)*param_1 != (byte *)0x0) && ((*(byte *)*param_1 & 8) != 0)) {
    CRYPTO_free(param_1);
    return;
  }
  return;
}



bool tree_add_auth_node(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = ossl_policy_node_cmp_new();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = OPENSSL_sk_find(lVar2,param_2);
  bVar3 = true;
  if (iVar1 < 0) {
    iVar1 = OPENSSL_sk_push(*param_1,param_2);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



void X509_policy_tree_free(X509_POLICY_TREE *tree)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (tree != (X509_POLICY_TREE *)0x0) {
    OPENSSL_sk_free(*(undefined8 *)(tree + 0x28));
    OPENSSL_sk_pop_free(*(undefined8 *)(tree + 0x30),exnode_free);
    if (0 < *(int *)(tree + 0x18)) {
      iVar2 = 0;
      puVar1 = *(undefined8 **)(tree + 0x10);
      do {
        iVar2 = iVar2 + 1;
        X509_free((X509 *)*puVar1);
        OPENSSL_sk_pop_free(puVar1[1],ossl_policy_node_free);
        ossl_policy_node_free(puVar1[2]);
        puVar1 = puVar1 + 4;
      } while (iVar2 < *(int *)(tree + 0x18));
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(tree + 0x20),ossl_policy_data_free);
    CRYPTO_free(*(void **)(tree + 0x10));
    CRYPTO_free(tree);
    return;
  }
  return;
}



int X509_policy_check(X509_POLICY_TREE **ptree,int *pexplicit_policy,stack_st_X509 *certs,
                     stack_st_ASN1_OBJECT *policy_oids,uint flags)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  X509 *x;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ASN1_OBJECT *pAVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  void *pvVar19;
  undefined4 *puVar20;
  stack_st_X509_POLICY_NODE *psVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  X509_POLICY_TREE *pXVar27;
  uint uVar28;
  long lVar29;
  long in_FS_OFFSET;
  bool bVar30;
  X509_POLICY_TREE *local_90;
  long local_88;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *ptree = (X509_POLICY_TREE *)0x0;
  *pexplicit_policy = 0;
  local_48 = 0;
  uVar4 = OPENSSL_sk_num(certs);
  uVar23 = 0;
  if ((flags & 0x100) == 0) {
    uVar23 = uVar4;
  }
  uVar25 = (ulong)uVar23;
  uVar23 = 0;
  if ((flags & 0x200) == 0) {
    uVar23 = uVar4;
  }
  uVar3 = 0;
  if ((flags & 0x400) == 0) {
    uVar3 = uVar4;
  }
  if (-1 < (int)(uVar4 - 1)) {
    if (uVar4 == 1) {
      local_90 = (X509_POLICY_TREE *)0x0;
LAB_00100bbe:
      X509_policy_tree_free(local_90);
      goto LAB_00100b90;
    }
    uVar5 = uVar4 - 2;
    uVar28 = uVar5;
    do {
      x = (X509 *)OPENSSL_sk_value(certs,uVar28);
      X509_check_purpose(x,-1,0);
      lVar10 = ossl_policy_cache_set(x);
      if (lVar10 == 0) {
        uVar28 = 0;
        goto LAB_001002db;
      }
      bVar30 = uVar28 != 0;
      uVar28 = uVar28 - 1;
    } while (bVar30);
    uVar22 = 1;
    uVar26 = uVar5;
    do {
      iVar7 = (int)uVar25;
      if (iVar7 < 1) goto LAB_0010049c;
      while( true ) {
        uVar13 = OPENSSL_sk_value(certs,uVar26);
        uVar6 = X509_get_extension_flags(uVar13);
        if ((uVar6 & 0x800) != 0) goto LAB_001002db;
        lVar10 = ossl_policy_cache_set(uVar13);
        if (((uVar22 & 1) != 0) && (*(long *)(lVar10 + 8) == 0)) {
          uVar22 = 2;
        }
        if (0 < iVar7) break;
        bVar30 = uVar26 == 0;
        uVar26 = uVar26 - 1;
        if (bVar30) goto LAB_001004a1;
LAB_0010049c:
        if ((uVar22 & 2) != 0) goto LAB_001004a1;
      }
      uVar2 = *(ulong *)(lVar10 + 0x18);
      uVar6 = iVar7 - (uint)((uVar6 & 0x20) == 0);
      uVar25 = (ulong)uVar6;
      if ((-1 < (long)uVar2) && (uVar25 = (ulong)uVar6, (long)uVar2 < (long)(int)uVar6)) {
        uVar25 = uVar2 & 0xffffffff;
      }
      iVar7 = (int)uVar25;
      bVar30 = uVar26 != 0;
      uVar26 = uVar26 - 1;
    } while (bVar30);
LAB_001004a1:
    uVar25 = (ulong)uVar3;
    local_90 = (X509_POLICY_TREE *)0x0;
    uVar28 = uVar22;
    if (iVar7 == 0) {
      uVar28 = uVar22 | 4;
    }
    if ((uVar28 & 1) == 0) {
LAB_00100653:
      if (uVar28 == 0) goto LAB_001002db;
      uVar23 = uVar28 & 2;
      if ((uVar28 & 4) == 0) {
        if ((uVar28 & 2) != 0) goto LAB_00100bbe;
LAB_00100685:
        if (*(int *)(local_90 + 0x18) < 2) {
          if (*(long *)(*(long *)(local_90 + 0x10) + -0x10 + (long)*(int *)(local_90 + 0x18) * 0x20)
              != 0) goto LAB_001008d8;
LAB_00100a0f:
          iVar24 = 1;
          uVar13 = *(undefined8 *)(local_90 + 0x28);
          local_48 = uVar13;
          OPENSSL_sk_sort(uVar13);
          iVar7 = OPENSSL_sk_num(policy_oids);
          if (0 < iVar7) goto LAB_00100a3d;
        }
        else {
          iVar7 = 1;
          local_88 = *(long *)(local_90 + 0x10);
          do {
            lVar10 = local_88 + 0x20;
            puVar14 = (undefined8 *)ossl_policy_cache_set(*(undefined8 *)(local_88 + 0x20));
            for (iVar24 = 0; iVar8 = OPENSSL_sk_num(puVar14[1]), iVar24 < iVar8; iVar24 = iVar24 + 1
                ) {
              bVar30 = false;
              lVar16 = OPENSSL_sk_value(puVar14[1],iVar24);
              for (iVar8 = 0; iVar9 = OPENSSL_sk_num(*(undefined8 *)(local_88 + 8)), iVar8 < iVar9;
                  iVar8 = iVar8 + 1) {
                uVar13 = OPENSSL_sk_value(*(undefined8 *)(local_88 + 8),iVar8);
                iVar9 = ossl_policy_node_match(local_88,uVar13,*(undefined8 *)(lVar16 + 8));
                if (iVar9 != 0) {
                  lVar18 = ossl_policy_level_add_node(lVar10,lVar16,uVar13,local_90,0);
                  if (lVar18 == 0) goto LAB_00100400;
                  bVar30 = true;
                }
              }
              if (((!bVar30) && (*(long *)(local_88 + 0x10) != 0)) &&
                 (lVar16 = ossl_policy_level_add_node
                                     (lVar10,lVar16,*(long *)(local_88 + 0x10),local_90,0),
                 lVar16 == 0)) goto LAB_00100400;
            }
            uVar4 = *(uint *)(local_88 + 0x38);
            if ((uVar4 & 0x200) == 0) {
              for (iVar24 = 0; iVar8 = OPENSSL_sk_num(*(undefined8 *)(local_88 + 8)), iVar24 < iVar8
                  ; iVar24 = iVar24 + 1) {
                puVar11 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(local_88 + 8),iVar24);
                if (((*(byte *)(local_88 + 0x19) & 4) == 0) && ((*(byte *)*puVar11 & 1) != 0)) {
                  uVar13 = *(undefined8 *)((byte *)*puVar11 + 0x18);
                  iVar8 = *(int *)(puVar11 + 2);
                  iVar9 = OPENSSL_sk_num(uVar13);
                  if (iVar9 != iVar8) {
                    for (iVar8 = 0; iVar9 = OPENSSL_sk_num(uVar13), iVar8 < iVar9; iVar8 = iVar8 + 1
                        ) {
                      uVar12 = OPENSSL_sk_value(uVar13,iVar8);
                      lVar16 = ossl_policy_level_find_node(lVar10,puVar11,uVar12);
                      if ((lVar16 == 0) &&
                         (iVar9 = tree_add_unmatched(lVar10,puVar14,uVar12,puVar11), iVar9 == 0))
                      goto LAB_00100400;
                    }
                  }
                }
                else if ((*(int *)(puVar11 + 2) == 0) &&
                        (iVar8 = tree_add_unmatched(lVar10,puVar14,0,puVar11), iVar8 == 0))
                goto LAB_00100400;
              }
              if ((*(long *)(local_88 + 0x10) != 0) &&
                 (lVar16 = ossl_policy_level_add_node
                                     (lVar10,*puVar14,*(long *)(local_88 + 0x10),local_90,0),
                 lVar16 == 0)) goto LAB_00100400;
              uVar4 = *(uint *)(local_88 + 0x38);
            }
            lVar16 = lVar10;
            if ((uVar4 & 0x400) != 0) {
              uVar13 = *(undefined8 *)(local_88 + 0x28);
              iVar24 = OPENSSL_sk_num(uVar13);
              iVar24 = iVar24 + -1;
              if (-1 < iVar24) {
                do {
                  puVar14 = (undefined8 *)OPENSSL_sk_value(uVar13,iVar24);
                  if ((*(byte *)*puVar14 & 3) != 0) {
                    *(int *)(puVar14[1] + 0x10) = *(int *)(puVar14[1] + 0x10) + -1;
                    CRYPTO_free(puVar14);
                    OPENSSL_sk_delete(uVar13,iVar24);
                  }
                  bVar30 = iVar24 != 0;
                  iVar24 = iVar24 + -1;
                } while (bVar30);
              }
            }
            do {
              uVar13 = *(undefined8 *)(lVar16 + -0x18);
              lVar18 = lVar16 + -0x20;
              iVar24 = OPENSSL_sk_num(uVar13);
              iVar24 = iVar24 + -1;
              if (-1 < iVar24) {
                do {
                  while (pvVar19 = (void *)OPENSSL_sk_value(uVar13,iVar24),
                        *(int *)((long)pvVar19 + 0x10) != 0) {
                    bVar30 = iVar24 == 0;
                    iVar24 = iVar24 + -1;
                    if (bVar30) goto LAB_00100859;
                  }
                  piVar1 = (int *)(*(long *)((long)pvVar19 + 8) + 0x10);
                  *piVar1 = *piVar1 + -1;
                  CRYPTO_free(pvVar19);
                  OPENSSL_sk_delete(uVar13,iVar24);
                  bVar30 = iVar24 != 0;
                  iVar24 = iVar24 + -1;
                } while (bVar30);
              }
LAB_00100859:
              pvVar19 = *(void **)(lVar16 + -0x10);
              if ((pvVar19 != (void *)0x0) && (*(int *)((long)pvVar19 + 0x10) == 0)) {
                if (*(long *)((long)pvVar19 + 8) != 0) {
                  piVar1 = (int *)(*(long *)((long)pvVar19 + 8) + 0x10);
                  *piVar1 = *piVar1 + -1;
                }
                CRYPTO_free(pvVar19);
                *(undefined8 *)(lVar16 + -0x10) = 0;
              }
              lVar29 = *(long *)(local_90 + 0x10);
              lVar16 = lVar18;
            } while (lVar18 != lVar29);
            if (*(long *)(lVar29 + 0x10) == 0) {
              X509_policy_tree_free(local_90);
              if (uVar23 == 0) goto LAB_00100b90;
              goto LAB_00100cc5;
            }
            iVar7 = iVar7 + 1;
            local_88 = lVar10;
          } while (iVar7 < *(int *)(local_90 + 0x18));
          if (*(long *)(lVar29 + -0x10 + (long)*(int *)(local_90 + 0x18) * 0x20) == 0) {
            pXVar27 = local_90 + 0x28;
            if (*(int *)(local_90 + 0x18) < 2) goto LAB_00100a0f;
LAB_00100909:
            iVar7 = 1;
            do {
              lVar10 = *(long *)(lVar29 + 0x10);
              if (lVar10 == 0) break;
              for (iVar24 = 0; iVar8 = OPENSSL_sk_num(*(undefined8 *)(lVar29 + 0x28)),
                  iVar24 < iVar8; iVar24 = iVar24 + 1) {
                lVar16 = OPENSSL_sk_value(*(undefined8 *)(lVar29 + 0x28),iVar24);
                if ((lVar10 == *(long *)(lVar16 + 8)) &&
                   (iVar8 = tree_add_auth_node(pXVar27,lVar16), iVar8 == 0)) {
                  if (pXVar27 == (X509_POLICY_TREE *)&local_48) {
                    OPENSSL_sk_free(local_48);
                  }
                  goto LAB_00100400;
                }
              }
              iVar7 = iVar7 + 1;
              lVar29 = lVar29 + 0x20;
            } while (iVar7 < *(int *)(local_90 + 0x18));
            if (pXVar27 != (X509_POLICY_TREE *)&local_48) goto LAB_00100a0f;
          }
          else {
LAB_001008d8:
            iVar7 = tree_add_auth_node(local_90 + 0x28);
            if (iVar7 == 0) goto LAB_00100400;
            lVar29 = *(long *)(local_90 + 0x10);
            if (1 < *(int *)(local_90 + 0x18)) {
              pXVar27 = (X509_POLICY_TREE *)&local_48;
              goto LAB_00100909;
            }
          }
          uVar13 = local_48;
          iVar24 = 2;
          OPENSSL_sk_sort(local_48);
          iVar7 = OPENSSL_sk_num(policy_oids);
          if (0 < iVar7) {
LAB_00100a3d:
            plVar17 = *(long **)((long)*(int *)(local_90 + 0x18) * 0x20 + *(long *)(local_90 + 0x10)
                                + -0x10);
            for (iVar7 = 0; iVar8 = OPENSSL_sk_num(policy_oids), iVar7 < iVar8; iVar7 = iVar7 + 1) {
              pAVar15 = (ASN1_OBJECT *)OPENSSL_sk_value(policy_oids,iVar7);
              iVar8 = OBJ_obj2nid(pAVar15);
              if (iVar8 == 0x2ea) {
                *(uint *)(local_90 + 0x38) = *(uint *)(local_90 + 0x38) | 2;
                goto joined_r0x00100c95;
              }
            }
            for (iVar7 = 0; iVar8 = OPENSSL_sk_num(policy_oids), iVar7 < iVar8; iVar7 = iVar7 + 1) {
              uVar12 = OPENSSL_sk_value(policy_oids,iVar7);
              puVar14 = (undefined8 *)ossl_policy_tree_find_sk(uVar13,uVar12);
              if (puVar14 != (undefined8 *)0x0) {
LAB_00100a90:
                lVar10 = *(long *)(local_90 + 0x30);
                if (lVar10 == 0) {
                  lVar10 = OPENSSL_sk_new_null();
                  *(long *)(local_90 + 0x30) = lVar10;
                  if (lVar10 != 0) goto LAB_00100aa2;
                }
                else {
LAB_00100aa2:
                  iVar8 = OPENSSL_sk_push(lVar10,puVar14);
                  if (iVar8 != 0) goto LAB_00100ab2;
                }
                if (((byte *)*puVar14 != (byte *)0x0) && ((*(byte *)*puVar14 & 8) != 0)) {
                  CRYPTO_free(puVar14);
                }
joined_r0x00100d57:
                if (iVar24 == 2) {
                  OPENSSL_sk_free(uVar13);
                }
                goto LAB_00100400;
              }
              if (plVar17 != (long *)0x0) {
                puVar20 = (undefined4 *)ossl_policy_data_new(0,uVar12,*(uint *)*plVar17 & 0x10);
                if (puVar20 != (undefined4 *)0x0) {
                  lVar10 = plVar17[1];
                  uVar12 = *(undefined8 *)(*plVar17 + 0x10);
                  *puVar20 = 0xc;
                  *(undefined8 *)(puVar20 + 4) = uVar12;
                  puVar14 = (undefined8 *)ossl_policy_level_add_node(0,puVar20,lVar10,local_90,1);
                  if (puVar14 != (undefined8 *)0x0) goto LAB_00100a90;
                  ossl_policy_data_free(puVar20);
                }
                goto joined_r0x00100d57;
              }
LAB_00100ab2:
            }
joined_r0x00100c95:
            if (iVar24 != 2) goto LAB_00100c97;
          }
          OPENSSL_sk_free(uVar13);
        }
LAB_00100c97:
        *ptree = local_90;
        if (uVar23 != 0) {
          psVar21 = X509_policy_tree_get0_user_policies(local_90);
          iVar7 = OPENSSL_sk_num(psVar21);
          if (iVar7 < 1) goto LAB_00100cc5;
        }
LAB_00100b90:
        uVar28 = 1;
      }
      else {
        *pexplicit_policy = 1;
        if ((uVar28 & 2) == 0) {
          uVar23 = 4;
          goto LAB_00100685;
        }
LAB_00100cc5:
        uVar28 = 0xfffffffe;
      }
      goto LAB_001002db;
    }
    local_90 = (X509_POLICY_TREE *)CRYPTO_zalloc(0x40,"crypto/x509/pcy_tree.c",0xb0);
    if (local_90 == (X509_POLICY_TREE *)0x0) goto LAB_0010040a;
    *(undefined8 *)(local_90 + 8) = 1000;
    puVar14 = (undefined8 *)CRYPTO_zalloc((long)(int)uVar4 << 5,"crypto/x509/pcy_tree.c",0xbd);
    *(undefined8 **)(local_90 + 0x10) = puVar14;
    if (puVar14 == (undefined8 *)0x0) {
      uVar28 = 0;
      CRYPTO_free(local_90);
      goto LAB_001002db;
    }
    *(uint *)(local_90 + 0x18) = uVar4;
    pAVar15 = OBJ_nid2obj(0x2ea);
    lVar10 = ossl_policy_data_new(0,pAVar15,0);
    if (lVar10 != 0) {
      lVar16 = ossl_policy_level_add_node(puVar14,lVar10,0,local_90,1);
      if (lVar16 != 0) {
        do {
          uVar13 = OPENSSL_sk_value(certs,uVar5);
          uVar4 = X509_get_extension_flags(uVar13);
          plVar17 = (long *)ossl_policy_cache_set(uVar13);
          iVar7 = X509_up_ref(uVar13);
          if (iVar7 == 0) goto LAB_00100400;
          lVar10 = *plVar17;
          puVar14[4] = uVar13;
          if (lVar10 == 0) {
            *(uint *)(puVar14 + 7) = *(uint *)(puVar14 + 7) | 0x200;
          }
          iVar7 = (int)uVar25;
          if (uVar23 == 0) {
            if ((uVar4 & 0x20) == 0) {
              *(uint *)(puVar14 + 7) = *(uint *)(puVar14 + 7) | 0x200;
              goto joined_r0x00100593;
            }
            if (uVar5 == 0) {
              *(uint *)(puVar14 + 7) = *(uint *)(puVar14 + 7) | 0x200;
            }
LAB_00100bd2:
            if (iVar7 == 0) {
              *(uint *)(puVar14 + 7) = *(uint *)(puVar14 + 7) | 0x400;
              uVar25 = 0;
            }
            else {
LAB_0010059c:
              uVar2 = plVar17[4];
              if ((-1 < (long)uVar2) && ((long)uVar2 < (long)(int)uVar25)) {
                uVar25 = uVar2 & 0xffffffff;
              }
            }
          }
          else {
            if ((uVar4 & 0x20) == 0) {
              lVar10 = plVar17[2];
              uVar23 = uVar23 - 1;
              if ((-1 < lVar10) && (lVar10 < (int)uVar23)) {
                uVar23 = (uint)lVar10;
              }
joined_r0x00100593:
              if (iVar7 != 0) {
                uVar25 = (ulong)(iVar7 - 1);
                goto LAB_0010059c;
              }
            }
            else {
              lVar10 = plVar17[2];
              if ((lVar10 < 0) || ((int)uVar23 <= lVar10)) goto LAB_00100bd2;
              uVar23 = (uint)lVar10;
              if (iVar7 != 0) goto LAB_0010059c;
            }
            *(uint *)(puVar14 + 7) = *(uint *)(puVar14 + 7) | 0x400;
            uVar25 = 0;
          }
          bVar30 = uVar5 != 0;
          uVar5 = uVar5 - 1;
          puVar14 = puVar14 + 4;
        } while (bVar30);
        goto LAB_00100653;
      }
      ossl_policy_data_free(lVar10);
    }
LAB_00100400:
    X509_policy_tree_free(local_90);
  }
LAB_0010040a:
  uVar28 = 0;
LAB_001002db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


