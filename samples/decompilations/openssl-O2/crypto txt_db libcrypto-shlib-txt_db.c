
TXT_DB * TXT_DB_read(BIO *in,int num)

{
  lhash_st_OPENSSL_STRING **__s;
  char cVar1;
  int iVar2;
  int iVar3;
  BUF_MEM *str;
  undefined4 extraout_var;
  TXT_DB *ptr;
  stack_st_OPENSSL_PSTRING *psVar4;
  lhash_st_OPENSSL_STRING **pplVar5;
  undefined4 extraout_var_00;
  size_t sVar6;
  undefined8 *ptr_00;
  long lVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  int size;
  char *pcVar13;
  int iVar14;
  bool bVar15;
  
  str = BUF_MEM_new();
  if (str == (BUF_MEM *)0x0) {
    BUF_MEM_free((BUF_MEM *)0x0);
  }
  else {
    iVar2 = BUF_MEM_grow(str,0x200);
    if ((CONCAT44(extraout_var,iVar2) == 0) ||
       (ptr = (TXT_DB *)CRYPTO_malloc(0x40,"crypto/txt_db/txt_db.c",0x24), ptr == (TXT_DB *)0x0)) {
      BUF_MEM_free(str);
    }
    else {
      ptr->num_fields = num;
      ptr->index = (lhash_st_OPENSSL_STRING **)0x0;
      ptr->qual = (_func_4786 **)0x0;
      psVar4 = (stack_st_OPENSSL_PSTRING *)OPENSSL_sk_new_null();
      ptr->data = psVar4;
      if (psVar4 != (stack_st_OPENSSL_PSTRING *)0x0) {
        lVar7 = (long)num * 8;
        iVar2 = (int)lVar7;
        pplVar5 = (lhash_st_OPENSSL_STRING **)CRYPTO_malloc(iVar2,"crypto/txt_db/txt_db.c",0x2b);
        ptr->index = pplVar5;
        if (pplVar5 != (lhash_st_OPENSSL_STRING **)0x0) {
          pplVar5 = (lhash_st_OPENSSL_STRING **)CRYPTO_malloc(iVar2,"crypto/txt_db/txt_db.c",0x2d);
          ptr->qual = (_func_4786 **)pplVar5;
          if (pplVar5 != (lhash_st_OPENSSL_STRING **)0x0) {
            if (0 < num) {
              uVar10 = (ulong)(uint)num;
              __s = ptr->index;
              if ((pplVar5 < __s + uVar10) && (__s < pplVar5 + uVar10)) {
                lVar8 = 0;
                do {
                  *(undefined8 *)((long)__s + lVar8) = 0;
                  *(undefined8 *)((long)pplVar5 + lVar8) = 0;
                  lVar8 = lVar8 + 8;
                } while (lVar7 - lVar8 != 0);
              }
              else {
                memset(__s,0,uVar10 * 8);
                memset(pplVar5,0,uVar10 * 8);
              }
            }
            iVar14 = 0;
            size = 0x200;
            iVar2 = num * 8 + 8;
            str->data[0x1ff] = '\0';
            while( true ) {
              if (iVar14 == 0) goto LAB_001001c7;
              size = size + 0x200;
              iVar3 = BUF_MEM_grow_clean(str,(long)size);
              if (CONCAT44(extraout_var_00,iVar3) == 0) break;
              str->data[iVar14] = '\0';
              BIO_gets(in,str->data + iVar14,size - iVar14);
              pcVar11 = str->data + iVar14;
              pcVar9 = str->data;
              if (*pcVar11 == '\0') {
LAB_00100300:
                BUF_MEM_free(str);
                return ptr;
              }
              while( true ) {
                sVar6 = strlen(pcVar11);
                iVar14 = iVar14 + (int)sVar6;
                if (pcVar9[(long)iVar14 + -1] != '\n') break;
                pcVar9[(long)iVar14 + -1] = '\0';
                ptr_00 = (undefined8 *)CRYPTO_malloc(iVar2 + iVar14,"crypto/txt_db/txt_db.c",0x49);
                if (ptr_00 == (undefined8 *)0x0) goto LAB_00100338;
                pcVar11 = (char *)((long)ptr_00 + (long)iVar2);
                *ptr_00 = pcVar11;
                pcVar9 = str->data;
                cVar1 = *pcVar9;
                if (cVar1 == '\0') {
                  iVar14 = 1;
                }
                else {
                  iVar14 = 1;
                  bVar15 = false;
                  do {
                    pcVar13 = pcVar11 + 1;
                    pcVar9 = pcVar9 + 1;
                    pcVar12 = pcVar11;
                    if (cVar1 == '\t') {
                      if (bVar15) {
                        pcVar12 = pcVar11 + -1;
                        pcVar13 = pcVar11;
                        goto LAB_00100250;
                      }
                      *pcVar11 = '\0';
                      pcVar11 = pcVar13;
                      if (num <= iVar14) break;
                      lVar7 = (long)iVar14;
                      iVar14 = iVar14 + 1;
                      ptr_00[lVar7] = pcVar13;
                    }
                    else {
LAB_00100250:
                      bVar15 = cVar1 == '\\';
                      *pcVar12 = cVar1;
                      pcVar11 = pcVar13;
                    }
                    cVar1 = *pcVar9;
                  } while (cVar1 != '\0');
                }
                *pcVar11 = '\0';
                if ((num != iVar14) || (*pcVar9 != '\0')) {
                  CRYPTO_free(ptr_00);
                  ptr->error = 6;
                  BUF_MEM_free(str);
                  goto LAB_00100340;
                }
                ptr_00[num] = pcVar11 + 1;
                iVar14 = OPENSSL_sk_push(ptr->data,ptr_00);
                if (iVar14 == 0) {
                  CRYPTO_free(ptr_00);
                  BUF_MEM_free(str);
                  goto LAB_00100340;
                }
LAB_001001c7:
                pcVar11 = str->data;
                do {
                  *pcVar11 = '\0';
                  BIO_gets(in,str->data,size);
                  pcVar11 = str->data;
                  if (*pcVar11 == '\0') goto LAB_00100300;
                  iVar14 = 0;
                  pcVar9 = pcVar11;
                } while (*pcVar11 == '#');
              }
            }
          }
        }
      }
LAB_00100338:
      BUF_MEM_free(str);
LAB_00100340:
      OPENSSL_sk_free(ptr->data);
      CRYPTO_free(ptr->index);
      CRYPTO_free(ptr->qual);
      CRYPTO_free(ptr);
    }
  }
  return (TXT_DB *)0x0;
}



OPENSSL_STRING * TXT_DB_get_by_index(TXT_DB *db,int idx,OPENSSL_STRING *value)

{
  lhash_st_OPENSSL_STRING *plVar1;
  OPENSSL_STRING *ppcVar2;
  
  if (db->num_fields <= idx) {
    db->error = 3;
    return (OPENSSL_STRING *)0x0;
  }
  plVar1 = db->index[idx];
  if (plVar1 != (lhash_st_OPENSSL_STRING *)0x0) {
    ppcVar2 = (OPENSSL_STRING *)OPENSSL_LH_retrieve(plVar1,value);
    db->error = 0;
    return ppcVar2;
  }
  db->error = 4;
  return (OPENSSL_STRING *)plVar1;
}



int TXT_DB_create_index(TXT_DB *db,int field,qual *qual,LHASH_HASH_FN_TYPE hash,
                       LHASH_COMP_FN_TYPE cmp)

{
  int iVar1;
  int iVar2;
  lhash_st_OPENSSL_STRING *plVar3;
  OPENSSL_STRING *ppcVar4;
  long lVar5;
  int iVar6;
  
  if (field < db->num_fields) {
    plVar3 = (lhash_st_OPENSSL_STRING *)OPENSSL_LH_new(hash,cmp);
    if (plVar3 != (lhash_st_OPENSSL_STRING *)0x0) {
      iVar1 = OPENSSL_sk_num(db->data);
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          ppcVar4 = (OPENSSL_STRING *)OPENSSL_sk_value(db->data,iVar6);
          if ((qual == (qual *)0x0) || (iVar2 = (*qual)(ppcVar4), iVar2 != 0)) {
            lVar5 = OPENSSL_LH_insert(plVar3,ppcVar4);
            if (lVar5 != 0) {
              db->error = 2;
              iVar1 = OPENSSL_sk_find(db->data,lVar5);
              db->arg2 = (long)iVar6;
              db->arg1 = (long)iVar1;
              OPENSSL_LH_free(plVar3);
              return 0;
            }
            lVar5 = OPENSSL_LH_retrieve(plVar3,ppcVar4);
            if (lVar5 == 0) {
              db->error = 1;
              OPENSSL_LH_free(plVar3);
              return 0;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      OPENSSL_LH_free(db->index[field]);
      db->index[field] = plVar3;
      db->qual[field] = (_func_4786 *)qual;
      return 1;
    }
    db->error = 1;
  }
  else {
    db->error = 3;
  }
  return 0;
}



long TXT_DB_write(BIO *out,TXT_DB *db)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BUF_MEM *str;
  undefined8 *puVar5;
  size_t sVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  char cVar12;
  undefined8 *puVar13;
  long local_68;
  
  str = BUF_MEM_new();
  if (str == (BUF_MEM *)0x0) {
LAB_0010074e:
    local_68 = -1;
  }
  else {
    iVar3 = OPENSSL_sk_num(db->data);
    iVar2 = db->num_fields;
    if ((long)iVar3 < 1) {
      local_68 = 0;
    }
    else {
      local_68 = 0;
      uVar10 = 0;
      do {
        puVar5 = (undefined8 *)OPENSSL_sk_value(db->data,uVar10 & 0xffffffff);
        if (iVar2 < 1) {
          iVar4 = BUF_MEM_grow_clean(str,(long)iVar2);
          if (CONCAT44(extraout_var_00,iVar4) == 0) goto LAB_0010074e;
          pcVar11 = str->data;
        }
        else {
          lVar9 = 0;
          puVar1 = puVar5 + iVar2;
          puVar13 = puVar5;
          do {
            if ((char *)*puVar13 != (char *)0x0) {
              sVar6 = strlen((char *)*puVar13);
              lVar9 = lVar9 + sVar6;
            }
            puVar13 = puVar13 + 1;
          } while (puVar13 != puVar1);
          iVar4 = BUF_MEM_grow_clean(str,(long)(iVar2 + (int)lVar9 * 2));
          if (CONCAT44(extraout_var,iVar4) == 0) goto LAB_0010074e;
          pcVar11 = str->data;
          do {
            while ((pcVar8 = (char *)*puVar5, pcVar8 != (char *)0x0 &&
                   (cVar12 = *pcVar8, cVar12 != '\0'))) {
              do {
                pcVar7 = pcVar11;
                if (cVar12 == '\t') {
                  *pcVar7 = '\\';
                  pcVar7 = pcVar7 + 1;
                }
                cVar12 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                *pcVar7 = cVar12;
                cVar12 = *pcVar8;
                pcVar11 = pcVar7 + 1;
              } while (cVar12 != '\0');
              puVar5 = puVar5 + 1;
              pcVar11 = pcVar7 + 2;
              pcVar7[1] = '\t';
              if (puVar5 == puVar1) goto LAB_001006e0;
            }
            puVar5 = puVar5 + 1;
            *pcVar11 = '\t';
            pcVar11 = pcVar11 + 1;
          } while (puVar5 != puVar1);
        }
LAB_001006e0:
        pcVar11[-1] = '\n';
        lVar9 = (long)pcVar11 - (long)str->data;
        iVar4 = BIO_write(out,str->data,(int)lVar9);
        if (iVar4 != lVar9) goto LAB_0010074e;
        local_68 = local_68 + iVar4;
        uVar10 = uVar10 + 1;
      } while ((long)iVar3 != uVar10);
    }
  }
  BUF_MEM_free(str);
  return local_68;
}



int TXT_DB_insert(TXT_DB *db,OPENSSL_STRING *value)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  OPENSSL_STRING *ppcVar4;
  long lVar5;
  long lVar6;
  lhash_st_OPENSSL_STRING *plVar7;
  
  lVar6 = 0;
  if (0 < db->num_fields) {
    do {
      plVar7 = db->index[lVar6];
      if (plVar7 != (lhash_st_OPENSSL_STRING *)0x0) {
        if (db->qual[lVar6] != (_func_4786 *)0x0) {
          iVar2 = (*db->qual[lVar6])(value);
          if (iVar2 == 0) goto LAB_001007d4;
          plVar7 = db->index[lVar6];
        }
        ppcVar4 = (OPENSSL_STRING *)OPENSSL_LH_retrieve(plVar7,value);
        if (ppcVar4 != (OPENSSL_STRING *)0x0) {
          db->error = 2;
          db->arg1 = (long)(int)lVar6;
          db->arg_row = ppcVar4;
          return 0;
        }
      }
LAB_001007d4:
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < db->num_fields);
    if (0 < db->num_fields) {
      lVar6 = 0;
      do {
        plVar7 = db->index[lVar6];
        iVar2 = (int)lVar6;
        if (plVar7 != (lhash_st_OPENSSL_STRING *)0x0) {
          if (db->qual[lVar6] != (_func_4786 *)0x0) {
            iVar3 = (*db->qual[lVar6])(value);
            if (iVar3 == 0) goto LAB_00100843;
            plVar7 = db->index[lVar6];
          }
          OPENSSL_LH_insert(plVar7,value);
          lVar5 = OPENSSL_LH_retrieve(db->index[lVar6],value);
          if (lVar5 == 0) {
            db->error = 1;
            iVar3 = iVar2 + -1;
            if (iVar2 == 0) {
              return 0;
            }
            goto LAB_001008a1;
          }
        }
LAB_00100843:
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < db->num_fields);
      iVar3 = OPENSSL_sk_push(db->data,value);
      if (iVar3 != 0) {
        return 1;
      }
      db->error = 1;
      iVar3 = iVar2;
      iVar2 = iVar2 + 1;
LAB_001008a1:
      lVar6 = (long)iVar3 << 3;
      do {
        lVar5 = *(long *)((long)db->index + lVar6);
        if (lVar5 != 0) {
          pcVar1 = *(code **)((long)db->qual + lVar6);
          if (pcVar1 != (code *)0x0) {
            iVar3 = (*pcVar1)(value);
            if (iVar3 == 0) goto LAB_001008f3;
            lVar5 = *(long *)((long)db->index + lVar6);
          }
          OPENSSL_LH_delete(lVar5,value);
        }
LAB_001008f3:
        lVar6 = lVar6 + -8;
        if (((long)iVar2 - (ulong)(iVar2 - 1)) * 8 + -0x10 == lVar6) {
          return 0;
        }
      } while( true );
    }
  }
  iVar2 = OPENSSL_sk_push(db->data,value);
  if (iVar2 != 0) {
    return 1;
  }
  db->error = 1;
  return 0;
}



void TXT_DB_free(TXT_DB *db)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  void *ptr;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  lhash_st_OPENSSL_STRING **ptr_00;
  bool bVar9;
  
  if (db == (TXT_DB *)0x0) {
    return;
  }
  ptr_00 = db->index;
  if (ptr_00 != (lhash_st_OPENSSL_STRING **)0x0) {
    iVar4 = db->num_fields;
    uVar7 = iVar4 - 1;
    if (-1 < (int)uVar7) {
      lVar8 = (long)(int)uVar7 << 3;
      do {
        puVar2 = (undefined8 *)((long)ptr_00 + lVar8);
        lVar8 = lVar8 + -8;
        OPENSSL_LH_free(*puVar2);
        ptr_00 = db->index;
      } while (((long)iVar4 - (ulong)uVar7) * 8 + -0x10 != lVar8);
    }
    CRYPTO_free(ptr_00);
  }
  CRYPTO_free(db->qual);
  if (db->data != (stack_st_OPENSSL_PSTRING *)0x0) {
    iVar4 = OPENSSL_sk_num();
    iVar4 = iVar4 + -1;
    if (-1 < iVar4) {
      do {
        pvVar5 = (void *)OPENSSL_sk_value(db->data,iVar4);
        iVar3 = db->num_fields;
        pvVar6 = *(void **)((long)pvVar5 + (long)iVar3 * 8);
        if (pvVar6 == (void *)0x0) {
          if (0 < iVar3) {
            lVar8 = 0;
            do {
              lVar1 = lVar8 * 8;
              lVar8 = lVar8 + 1;
              CRYPTO_free(*(void **)((long)pvVar5 + lVar1));
            } while ((int)lVar8 < db->num_fields);
          }
        }
        else {
          lVar8 = 0;
          if (0 < iVar3) {
            do {
              ptr = *(void **)((long)pvVar5 + lVar8 * 8);
              if ((pvVar6 < ptr) || (ptr < pvVar5)) {
                CRYPTO_free(ptr);
              }
              lVar8 = lVar8 + 1;
            } while ((int)lVar8 < db->num_fields);
          }
        }
        pvVar6 = (void *)OPENSSL_sk_value(db->data,iVar4);
        CRYPTO_free(pvVar6);
        bVar9 = iVar4 != 0;
        iVar4 = iVar4 + -1;
      } while (bVar9);
    }
    OPENSSL_sk_free(db->data);
  }
  CRYPTO_free(db);
  return;
}


