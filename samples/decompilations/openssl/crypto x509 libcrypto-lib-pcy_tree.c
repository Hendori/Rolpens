
void exnode_free(undefined8 *param_1)

{
  if (((byte *)*param_1 != (byte *)0x0) && ((*(byte *)*param_1 & 8) != 0)) {
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void X509_policy_tree_free(X509_POLICY_TREE *tree)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (tree != (X509_POLICY_TREE *)0x0) {
    OPENSSL_sk_free(*(undefined8 *)(tree + 0x28));
    OPENSSL_sk_pop_free(*(undefined8 *)(tree + 0x30),0x100000);
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
  undefined8 uVar11;
  undefined8 *puVar12;
  ASN1_OBJECT *pAVar13;
  uint *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  void *pvVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  stack_st_X509_POLICY_NODE *psVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  X509_POLICY_TREE *pXVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  long in_FS_OFFSET;
  bool bVar30;
  X509_POLICY_TREE *local_98;
  long local_90;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *ptree = (X509_POLICY_TREE *)0x0;
  *pexplicit_policy = 0;
  local_48 = 0;
  uVar3 = OPENSSL_sk_num(certs);
  uVar6 = 0;
  if ((flags & 0x100) == 0) {
    uVar6 = uVar3;
  }
  uVar25 = (ulong)uVar6;
  uVar6 = 0;
  if ((flags & 0x200) == 0) {
    uVar6 = uVar3;
  }
  uVar23 = 0;
  if ((flags & 0x400) == 0) {
    uVar23 = uVar3;
  }
  if ((int)(uVar3 - 1) < 0) {
LAB_001003a1:
    uVar28 = 0;
    goto LAB_001001db;
  }
  if (uVar3 == 1) {
    local_98 = (X509_POLICY_TREE *)0x0;
LAB_00100bf0:
    X509_policy_tree_free(local_98);
    goto LAB_00100b93;
  }
  uVar4 = uVar3 - 2;
  uVar28 = uVar4;
  do {
    x = (X509 *)OPENSSL_sk_value(certs,uVar28);
    X509_check_purpose(x,-1,0);
    lVar10 = ossl_policy_cache_set(x);
    if (lVar10 == 0) {
      uVar28 = 0;
      goto LAB_001001db;
    }
    bVar30 = uVar28 != 0;
    uVar28 = uVar28 - 1;
  } while (bVar30);
  uVar22 = 1;
  uVar27 = uVar4;
  do {
    iVar7 = (int)uVar25;
    if (iVar7 < 1) goto LAB_00100432;
    while( true ) {
      uVar11 = OPENSSL_sk_value(certs,uVar27);
      uVar5 = X509_get_extension_flags(uVar11);
      if ((uVar5 & 0x800) != 0) goto LAB_001001db;
      lVar10 = ossl_policy_cache_set(uVar11);
      if (((uVar22 & 1) != 0) && (*(long *)(lVar10 + 8) == 0)) {
        uVar22 = 2;
      }
      if (0 < iVar7) break;
      bVar30 = uVar27 == 0;
      uVar27 = uVar27 - 1;
      if (bVar30) goto LAB_00100437;
LAB_00100432:
      if ((uVar22 & 2) != 0) goto LAB_00100437;
    }
    uVar2 = *(ulong *)(lVar10 + 0x18);
    uVar5 = iVar7 - (uint)((uVar5 & 0x20) == 0);
    uVar25 = (ulong)uVar5;
    if ((-1 < (long)uVar2) && (uVar25 = (ulong)uVar5, (long)uVar2 < (long)(int)uVar5)) {
      uVar25 = uVar2 & 0xffffffff;
    }
    iVar7 = (int)uVar25;
    bVar30 = uVar27 != 0;
    uVar27 = uVar27 - 1;
  } while (bVar30);
LAB_00100437:
  local_98 = (X509_POLICY_TREE *)0x0;
  uVar28 = uVar22;
  if (iVar7 == 0) {
    uVar28 = uVar22 | 4;
  }
  if ((uVar28 & 1) != 0) {
    local_98 = (X509_POLICY_TREE *)CRYPTO_zalloc(0x40,"crypto/x509/pcy_tree.c",0xb0);
    if (local_98 == (X509_POLICY_TREE *)0x0) goto LAB_001003a1;
    *(undefined8 *)(local_98 + 8) = 1000;
    puVar12 = (undefined8 *)CRYPTO_zalloc((long)(int)uVar3 << 5,"crypto/x509/pcy_tree.c",0xbd);
    *(undefined8 **)(local_98 + 0x10) = puVar12;
    if (puVar12 == (undefined8 *)0x0) {
      uVar28 = 0;
      CRYPTO_free(local_98);
      goto LAB_001001db;
    }
    *(uint *)(local_98 + 0x18) = uVar3;
    pAVar13 = OBJ_nid2obj(0x2ea);
    puVar14 = (uint *)ossl_policy_data_new(0,pAVar13,0);
    if (puVar14 != (uint *)0x0) {
      lVar10 = ossl_policy_level_add_node(puVar12,puVar14,0,local_98,1);
      if (lVar10 != 0) {
        uVar25 = (ulong)uVar6;
        do {
          uVar11 = OPENSSL_sk_value(certs,uVar4);
          uVar6 = X509_get_extension_flags(uVar11);
          plVar15 = (long *)ossl_policy_cache_set(uVar11);
          iVar7 = X509_up_ref(uVar11);
          if (iVar7 == 0) goto LAB_00100398;
          lVar10 = *plVar15;
          puVar12[4] = uVar11;
          if (lVar10 == 0) {
            *(uint *)(puVar12 + 7) = *(uint *)(puVar12 + 7) | 0x200;
          }
          iVar7 = (int)uVar25;
          if (iVar7 == 0) {
            if ((uVar6 & 0x20) == 0) {
              *(uint *)(puVar12 + 7) = *(uint *)(puVar12 + 7) | 0x200;
              goto joined_r0x0010051f;
            }
            if (uVar4 == 0) {
              *(uint *)(puVar12 + 7) = *(uint *)(puVar12 + 7) | 0x200;
            }
LAB_00100ba5:
            if (uVar23 == 0) {
              *(uint *)(puVar12 + 7) = *(uint *)(puVar12 + 7) | 0x400;
              uVar23 = 0;
            }
            else {
LAB_00100528:
              lVar10 = plVar15[4];
              if ((-1 < lVar10) && (lVar10 < (int)uVar23)) {
                uVar23 = (uint)lVar10;
              }
            }
          }
          else {
            if ((uVar6 & 0x20) == 0) {
              uVar2 = plVar15[2];
              uVar25 = (ulong)(iVar7 - 1U);
              if ((-1 < (long)uVar2) && ((long)uVar2 < (long)(int)(iVar7 - 1U))) {
                uVar25 = uVar2 & 0xffffffff;
              }
joined_r0x0010051f:
              if (uVar23 != 0) {
                uVar23 = uVar23 - 1;
                goto LAB_00100528;
              }
            }
            else {
              uVar2 = plVar15[2];
              if (((long)uVar2 < 0) || ((long)iVar7 <= (long)uVar2)) goto LAB_00100ba5;
              uVar25 = uVar2 & 0xffffffff;
              if (uVar23 != 0) goto LAB_00100528;
            }
            *(uint *)(puVar12 + 7) = *(uint *)(puVar12 + 7) | 0x400;
            uVar23 = 0;
          }
          bVar30 = uVar4 != 0;
          uVar4 = uVar4 - 1;
          puVar12 = puVar12 + 4;
        } while (bVar30);
        goto LAB_001005df;
      }
LAB_0010038a:
      ossl_policy_data_free(puVar14);
    }
LAB_00100398:
    X509_policy_tree_free(local_98);
    goto LAB_001003a1;
  }
LAB_001005df:
  if (uVar28 == 0) goto LAB_001001db;
  uVar6 = uVar28 & 2;
  if ((uVar28 & 4) == 0) {
    if ((uVar28 & 2) != 0) goto LAB_00100bf0;
LAB_00100611:
    if (*(int *)(local_98 + 0x18) < 2) {
      lVar10 = *(long *)(*(long *)(local_98 + 0x10) + -0x10 + (long)*(int *)(local_98 + 0x18) * 0x20
                        );
      if (lVar10 != 0) {
LAB_00100856:
        lVar16 = *(long *)(local_98 + 0x28);
        if (lVar16 == 0) {
          lVar16 = ossl_policy_node_cmp_new();
          *(long *)(local_98 + 0x28) = lVar16;
          if (lVar16 == 0) goto LAB_00100398;
        }
        iVar7 = OPENSSL_sk_find(lVar16,lVar10);
        if ((iVar7 < 0) &&
           (iVar7 = OPENSSL_sk_push(*(undefined8 *)(local_98 + 0x28),lVar10), iVar7 == 0))
        goto LAB_00100398;
        lVar29 = *(long *)(local_98 + 0x10);
        if (1 < *(int *)(local_98 + 0x18)) {
          pXVar26 = (X509_POLICY_TREE *)&local_48;
          goto LAB_00100891;
        }
        goto LAB_00100dbc;
      }
LAB_001009d2:
      iVar24 = 1;
      uVar11 = *(undefined8 *)(local_98 + 0x28);
      local_48 = uVar11;
      OPENSSL_sk_sort(uVar11);
      iVar7 = OPENSSL_sk_num(policy_oids);
      if (0 < iVar7) {
LAB_001009fe:
        plVar15 = *(long **)((long)*(int *)(local_98 + 0x18) * 0x20 + *(long *)(local_98 + 0x10) +
                            -0x10);
        for (iVar7 = 0; iVar8 = OPENSSL_sk_num(policy_oids), iVar7 < iVar8; iVar7 = iVar7 + 1) {
          pAVar13 = (ASN1_OBJECT *)OPENSSL_sk_value(policy_oids,iVar7);
          iVar8 = OBJ_obj2nid(pAVar13);
          if (iVar8 == 0x2ea) {
            *(uint *)(local_98 + 0x38) = *(uint *)(local_98 + 0x38) | 2;
            goto joined_r0x00100c73;
          }
        }
        iVar7 = 0;
        if (plVar15 == (long *)0x0) {
          for (; iVar8 = OPENSSL_sk_num(policy_oids), iVar7 < iVar8; iVar7 = iVar7 + 1) {
            uVar19 = OPENSSL_sk_value(policy_oids,iVar7);
            puVar12 = (undefined8 *)ossl_policy_tree_find_sk(uVar11,uVar19);
            if (puVar12 != (undefined8 *)0x0) {
              lVar10 = *(long *)(local_98 + 0x30);
              if (lVar10 == 0) {
                lVar10 = OPENSSL_sk_new_null();
                *(long *)(local_98 + 0x30) = lVar10;
                if (lVar10 == 0) goto LAB_00100d21;
              }
              iVar8 = OPENSSL_sk_push(lVar10,puVar12);
              if (iVar8 == 0) goto LAB_00100d21;
            }
          }
        }
        else {
          for (; iVar8 = OPENSSL_sk_num(policy_oids), iVar7 < iVar8; iVar7 = iVar7 + 1) {
            uVar19 = OPENSSL_sk_value(policy_oids,iVar7);
            puVar12 = (undefined8 *)ossl_policy_tree_find_sk(uVar11,uVar19);
            if (puVar12 == (undefined8 *)0x0) {
              puVar20 = (undefined4 *)ossl_policy_data_new(0,uVar19,*(uint *)*plVar15 & 0x10);
              if (puVar20 == (undefined4 *)0x0) goto joined_r0x00100b2e;
              lVar10 = plVar15[1];
              uVar19 = *(undefined8 *)(*plVar15 + 0x10);
              *puVar20 = 0xc;
              *(undefined8 *)(puVar20 + 4) = uVar19;
              puVar12 = (undefined8 *)ossl_policy_level_add_node(0,puVar20,lVar10,local_98,1);
              if (puVar12 == (undefined8 *)0x0) {
                ossl_policy_data_free(puVar20);
                goto joined_r0x00100b2e;
              }
            }
            lVar10 = *(long *)(local_98 + 0x30);
            if (lVar10 == 0) {
              lVar10 = OPENSSL_sk_new_null();
              *(long *)(local_98 + 0x30) = lVar10;
              if (lVar10 == 0) goto LAB_00100d21;
            }
            iVar8 = OPENSSL_sk_push(lVar10,puVar12);
            if (iVar8 == 0) goto LAB_00100d21;
          }
        }
joined_r0x00100c73:
        if (iVar24 == 2) goto LAB_00100d57;
      }
    }
    else {
      iVar7 = 1;
      local_90 = *(long *)(local_98 + 0x10);
      do {
        lVar10 = local_90 + 0x20;
        plVar15 = (long *)ossl_policy_cache_set(*(undefined8 *)(local_90 + 0x20));
        for (iVar24 = 0; iVar8 = OPENSSL_sk_num(plVar15[1]), iVar24 < iVar8; iVar24 = iVar24 + 1) {
          bVar30 = false;
          lVar16 = OPENSSL_sk_value(plVar15[1],iVar24);
          for (iVar8 = 0; iVar9 = OPENSSL_sk_num(*(undefined8 *)(local_90 + 8)), iVar8 < iVar9;
              iVar8 = iVar8 + 1) {
            uVar11 = OPENSSL_sk_value(*(undefined8 *)(local_90 + 8),iVar8);
            iVar9 = ossl_policy_node_match(local_90,uVar11,*(undefined8 *)(lVar16 + 8));
            if (iVar9 != 0) {
              lVar17 = ossl_policy_level_add_node(lVar10,lVar16,uVar11,local_98,0);
              if (lVar17 == 0) goto LAB_00100398;
              bVar30 = true;
            }
          }
          if (((!bVar30) && (*(long *)(local_90 + 0x10) != 0)) &&
             (lVar16 = ossl_policy_level_add_node
                                 (lVar10,lVar16,*(long *)(local_90 + 0x10),local_98,0), lVar16 == 0)
             ) goto LAB_00100398;
        }
        uVar3 = *(uint *)(local_90 + 0x38);
        if ((uVar3 & 0x200) == 0) {
          for (iVar24 = 0; iVar8 = OPENSSL_sk_num(*(undefined8 *)(local_90 + 8)), iVar24 < iVar8;
              iVar24 = iVar24 + 1) {
            puVar12 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(local_90 + 8),iVar24);
            if (((*(byte *)(local_90 + 0x19) & 4) == 0) && ((*(byte *)*puVar12 & 1) != 0)) {
              uVar11 = *(undefined8 *)((byte *)*puVar12 + 0x18);
              iVar8 = *(int *)(puVar12 + 2);
              iVar9 = OPENSSL_sk_num(uVar11);
              if (iVar9 != iVar8) {
                for (iVar8 = 0; iVar9 = OPENSSL_sk_num(uVar11), iVar8 < iVar9; iVar8 = iVar8 + 1) {
                  lVar16 = OPENSSL_sk_value(uVar11,iVar8);
                  lVar17 = ossl_policy_level_find_node(lVar10,puVar12,lVar16);
                  if (lVar17 == 0) {
                    if (lVar16 == 0) {
                      lVar16 = *(long *)((uint *)*puVar12 + 2);
                    }
                    puVar14 = (uint *)ossl_policy_data_new(0,lVar16,*(uint *)*puVar12 & 0x10);
                    if (puVar14 == (uint *)0x0) goto LAB_00100398;
                    uVar19 = *(undefined8 *)(*plVar15 + 0x10);
                    *puVar14 = *puVar14 | 4;
                    *(undefined8 *)(puVar14 + 4) = uVar19;
                    lVar16 = ossl_policy_level_add_node(lVar10,puVar14,puVar12,local_98,1);
                    if (lVar16 == 0) goto LAB_0010038a;
                  }
                }
              }
            }
            else if (*(int *)(puVar12 + 2) == 0) {
              puVar14 = (uint *)ossl_policy_data_new
                                          (0,*(undefined8 *)((uint *)*puVar12 + 2),
                                           *(uint *)*puVar12 & 0x10);
              if (puVar14 == (uint *)0x0) goto LAB_00100398;
              uVar11 = *(undefined8 *)(*plVar15 + 0x10);
              *puVar14 = *puVar14 | 4;
              *(undefined8 *)(puVar14 + 4) = uVar11;
              lVar16 = ossl_policy_level_add_node(lVar10,puVar14,puVar12,local_98,1);
              if (lVar16 == 0) {
                ossl_policy_data_free(puVar14);
                goto LAB_00100398;
              }
            }
          }
          if ((*(long *)(local_90 + 0x10) != 0) &&
             (lVar16 = ossl_policy_level_add_node
                                 (lVar10,*plVar15,*(long *)(local_90 + 0x10),local_98,0),
             lVar16 == 0)) goto LAB_00100398;
          uVar3 = *(uint *)(local_90 + 0x38);
        }
        lVar16 = lVar10;
        if ((uVar3 & 0x400) != 0) {
          uVar11 = *(undefined8 *)(local_90 + 0x28);
          iVar24 = OPENSSL_sk_num(uVar11);
          iVar24 = iVar24 + -1;
          if (-1 < iVar24) {
            do {
              puVar12 = (undefined8 *)OPENSSL_sk_value(uVar11,iVar24);
              if ((*(byte *)*puVar12 & 3) != 0) {
                *(int *)(puVar12[1] + 0x10) = *(int *)(puVar12[1] + 0x10) + -1;
                CRYPTO_free(puVar12);
                OPENSSL_sk_delete(uVar11,iVar24);
              }
              bVar30 = iVar24 != 0;
              iVar24 = iVar24 + -1;
            } while (bVar30);
          }
        }
        do {
          uVar11 = *(undefined8 *)(lVar16 + -0x18);
          lVar17 = lVar16 + -0x20;
          iVar24 = OPENSSL_sk_num(uVar11);
          iVar24 = iVar24 + -1;
          if (-1 < iVar24) {
            do {
              while (pvVar18 = (void *)OPENSSL_sk_value(uVar11,iVar24),
                    *(int *)((long)pvVar18 + 0x10) == 0) {
                piVar1 = (int *)(*(long *)((long)pvVar18 + 8) + 0x10);
                *piVar1 = *piVar1 + -1;
                CRYPTO_free(pvVar18);
                OPENSSL_sk_delete(uVar11,iVar24);
                bVar30 = iVar24 == 0;
                iVar24 = iVar24 + -1;
                if (bVar30) goto LAB_001007d1;
              }
              bVar30 = iVar24 != 0;
              iVar24 = iVar24 + -1;
            } while (bVar30);
          }
LAB_001007d1:
          pvVar18 = *(void **)(lVar16 + -0x10);
          if ((pvVar18 != (void *)0x0) && (*(int *)((long)pvVar18 + 0x10) == 0)) {
            if (*(long *)((long)pvVar18 + 8) != 0) {
              piVar1 = (int *)(*(long *)((long)pvVar18 + 8) + 0x10);
              *piVar1 = *piVar1 + -1;
            }
            CRYPTO_free(pvVar18);
            *(undefined8 *)(lVar16 + -0x10) = 0;
          }
          lVar29 = *(long *)(local_98 + 0x10);
          lVar16 = lVar17;
        } while (lVar17 != lVar29);
        if (*(long *)(lVar29 + 0x10) == 0) {
          X509_policy_tree_free(local_98);
          if (uVar6 != 0) goto LAB_00100ca6;
          goto LAB_00100b93;
        }
        iVar7 = iVar7 + 1;
        local_90 = lVar10;
      } while (iVar7 < *(int *)(local_98 + 0x18));
      lVar10 = *(long *)(lVar29 + -0x10 + (long)*(int *)(local_98 + 0x18) * 0x20);
      if (lVar10 != 0) goto LAB_00100856;
      pXVar26 = local_98 + 0x28;
      if (*(int *)(local_98 + 0x18) < 2) goto LAB_001009d2;
LAB_00100891:
      local_90._0_4_ = 1;
      do {
        lVar10 = *(long *)(lVar29 + 0x10);
        if (lVar10 == 0) break;
        for (iVar7 = 0; iVar24 = OPENSSL_sk_num(*(undefined8 *)(lVar29 + 0x28)), iVar7 < iVar24;
            iVar7 = iVar7 + 1) {
          lVar16 = OPENSSL_sk_value(*(undefined8 *)(lVar29 + 0x28),iVar7);
          if (lVar10 == *(long *)(lVar16 + 8)) {
            lVar17 = *(long *)pXVar26;
            if (lVar17 == 0) {
              lVar17 = ossl_policy_node_cmp_new();
              *(long *)pXVar26 = lVar17;
              if (lVar17 != 0) goto LAB_001008ed;
            }
            else {
LAB_001008ed:
              iVar24 = OPENSSL_sk_find(lVar17,lVar16);
              if ((-1 < iVar24) || (iVar24 = OPENSSL_sk_push(*(long *)pXVar26,lVar16), iVar24 != 0))
              goto LAB_001008b8;
            }
            if (pXVar26 == (X509_POLICY_TREE *)&local_48) {
              OPENSSL_sk_free(local_48);
            }
            goto LAB_00100398;
          }
LAB_001008b8:
        }
        local_90._0_4_ = (int)local_90 + 1;
        lVar29 = lVar29 + 0x20;
      } while ((int)local_90 < *(int *)(local_98 + 0x18));
      if (pXVar26 != (X509_POLICY_TREE *)&local_48) goto LAB_001009d2;
LAB_00100dbc:
      uVar11 = local_48;
      iVar24 = 2;
      OPENSSL_sk_sort(local_48);
      iVar7 = OPENSSL_sk_num(policy_oids);
      if (0 < iVar7) goto LAB_001009fe;
LAB_00100d57:
      OPENSSL_sk_free(uVar11);
    }
    *ptree = local_98;
    if (uVar6 != 0) {
      psVar21 = X509_policy_tree_get0_user_policies(local_98);
      iVar7 = OPENSSL_sk_num(psVar21);
      if (iVar7 < 1) goto LAB_00100ca6;
    }
LAB_00100b93:
    uVar28 = 1;
  }
  else {
    *pexplicit_policy = 1;
    if ((uVar28 & 2) == 0) {
      uVar6 = 4;
      goto LAB_00100611;
    }
LAB_00100ca6:
    uVar28 = 0xfffffffe;
  }
LAB_001001db:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar28;
LAB_00100d21:
  if (((byte *)*puVar12 != (byte *)0x0) && ((*(byte *)*puVar12 & 8) != 0)) {
    CRYPTO_free(puVar12);
  }
joined_r0x00100b2e:
  if (iVar24 == 2) {
    OPENSSL_sk_free(uVar11);
  }
  goto LAB_00100398;
}


