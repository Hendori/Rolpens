
int get_optional_pkey_id(char *param_1)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  long in_FS_OFFSET;
  int local_1c;
  ENGINE *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 0;
  local_18 = (ENGINE *)0x0;
  ameth = EVP_PKEY_asn1_find_str(&local_18,param_1,-1);
  if (ameth != (EVP_PKEY_ASN1_METHOD *)0x0) {
    iVar1 = EVP_PKEY_asn1_get0_info(&local_1c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,ameth)
    ;
    if (iVar1 < 1) {
      local_1c = 0;
    }
  }
  tls_engine_finish(local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 set_ciphersuites(undefined8 *param_1,char *param_2)

{
  int iVar1;
  void *arg;
  
  arg = (void *)OPENSSL_sk_new_null();
  if (arg != (void *)0x0) {
    if (*param_2 == '\0') {
LAB_001000dd:
      OPENSSL_sk_free(*param_1);
      *param_1 = arg;
      return 1;
    }
    iVar1 = CONF_parse_list(param_2,0x3a,1,ciphersuite_cb,arg);
    if (0 < iVar1) {
      iVar1 = OPENSSL_sk_num(arg);
      if (iVar1 != 0) goto LAB_001000dd;
    }
    ERR_new();
    ERR_set_debug("ssl/ssl_ciph.c",0x526,"set_ciphersuites");
    ERR_set_error(0x14,0xb9,0);
    OPENSSL_sk_free(arg);
  }
  return 0;
}



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
        goto LAB_00100164;
      }
    }
  }
  uVar4 = 1;
LAB_00100164:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ssl_cipher_apply_rule
               (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
               uint param_7,uint param_8,int param_9,long *param_10,long *param_11)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  bool bVar10;
  
  bVar10 = (0x48UL >> ((ulong)param_8 & 0x3f) & 1) == 0;
  plVar8 = (long *)*param_10;
  plVar9 = (long *)*param_11;
  plVar3 = plVar8;
  plVar6 = plVar9;
  if (!bVar10) {
    plVar3 = plVar9;
    plVar6 = plVar8;
  }
  if ((plVar3 != (long *)0x0) && (plVar6 != (long *)0x0)) {
    do {
      plVar5 = (long *)plVar3[3];
      plVar1 = (long *)plVar3[2];
      lVar2 = *plVar3;
      plVar4 = plVar5;
      if (bVar10) {
        plVar4 = plVar1;
      }
      if (param_9 < 0) {
        if (((((((param_1 == 0) || (*(int *)(lVar2 + 0x18) == param_1)) &&
               ((param_2 == 0 || ((param_2 & *(uint *)(lVar2 + 0x1c)) != 0)))) &&
              ((param_3 == 0 || ((param_3 & *(uint *)(lVar2 + 0x20)) != 0)))) &&
             ((param_4 == 0 || ((param_4 & *(uint *)(lVar2 + 0x24)) != 0)))) &&
            ((((param_5 == 0 || ((param_5 & *(uint *)(lVar2 + 0x28)) != 0)) &&
              ((param_6 == 0 || (*(int *)(lVar2 + 0x2c) == param_6)))) &&
             (((param_7 & 0x1f) == 0 || ((param_7 & *(uint *)(lVar2 + 0x3c) & 0x1f) != 0)))))) &&
           (((param_7 & 0x20) == 0 || ((param_7 & *(uint *)(lVar2 + 0x3c) & 0x20) != 0))))
        goto code_r0x001002bb;
        goto switchD_001002c8_caseD_0;
      }
      if (*(int *)(lVar2 + 0x44) != param_9) goto switchD_001002c8_caseD_0;
code_r0x001002bb:
      switch(param_8) {
      case 1:
        if ((int)plVar3[1] == 0) {
          if (plVar9 != plVar3) {
            if (plVar8 == plVar3) {
              plVar8 = plVar1;
            }
            if (plVar5 != (long *)0x0) {
              plVar5[2] = (long)plVar1;
            }
            if (plVar1 != (long *)0x0) {
              plVar1[3] = (long)plVar5;
            }
            plVar9[2] = (long)plVar3;
            plVar3[3] = (long)plVar9;
            plVar3[2] = 0;
          }
          *(undefined4 *)(plVar3 + 1) = 1;
          plVar9 = plVar3;
        }
        break;
      case 2:
        if (plVar8 == plVar3) {
          *(undefined4 *)(plVar8 + 1) = 0;
          if (plVar9 == plVar8) {
            plVar9 = plVar5;
          }
          plVar8 = (long *)0x0;
          plVar7 = plVar1;
          if (plVar1 != (long *)0x0) goto LAB_001003c2;
LAB_001003ca:
          if (plVar5 != (long *)0x0) goto LAB_001003cf;
        }
        else {
          plVar5[2] = (long)plVar1;
          if (plVar9 == plVar3) {
            *(undefined4 *)(plVar9 + 1) = 0;
            plVar9 = plVar5;
          }
          else {
            *(undefined4 *)(plVar3 + 1) = 0;
          }
          plVar7 = plVar8;
          if (plVar1 != (long *)0x0) {
LAB_001003c2:
            plVar1[3] = (long)plVar5;
            plVar5 = (long *)plVar3[3];
            plVar8 = plVar7;
            goto LAB_001003ca;
          }
LAB_001003cf:
          plVar5[2] = (long)plVar1;
        }
        *(undefined1 (*) [16])(plVar3 + 2) = (undefined1  [16])0x0;
        break;
      case 3:
        if ((int)plVar3[1] != 0) {
          if (plVar8 != plVar3) {
            if (plVar9 == plVar3) {
              plVar9 = plVar5;
            }
            if (plVar1 != (long *)0x0) {
              plVar1[3] = (long)plVar5;
            }
            if (plVar5 != (long *)0x0) {
              plVar5[2] = (long)plVar1;
            }
            plVar8[3] = (long)plVar3;
            plVar3[2] = (long)plVar8;
            plVar3[3] = 0;
          }
          *(undefined4 *)(plVar3 + 1) = 0;
          plVar8 = plVar3;
        }
        break;
      case 4:
        if (((int)plVar3[1] == 0) || (plVar9 == plVar3)) break;
        if (plVar8 == plVar3) {
          plVar8 = plVar1;
        }
        if (plVar5 != (long *)0x0) {
          plVar5[2] = (long)plVar1;
        }
        if (plVar1 != (long *)0x0) {
          plVar1[3] = (long)plVar5;
        }
        plVar9[2] = (long)plVar3;
        plVar3[3] = (long)plVar9;
        plVar3[2] = 0;
        plVar9 = plVar3;
        if (plVar6 != plVar3) goto LAB_001002e5;
        goto LAB_0010033a;
      case 6:
        if (((int)plVar3[1] != 0) && (plVar8 != plVar3)) {
          if (plVar9 == plVar3) {
            plVar9 = plVar5;
          }
          if (plVar1 != (long *)0x0) {
            plVar1[3] = (long)plVar5;
          }
          if (plVar5 != (long *)0x0) {
            plVar5[2] = (long)plVar1;
          }
          plVar8[3] = (long)plVar3;
          plVar3[2] = (long)plVar8;
          plVar3[3] = 0;
          plVar8 = plVar3;
        }
      }
switchD_001002c8_caseD_0:
      if (plVar6 == plVar3) break;
LAB_001002e5:
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_0010033a:
  *param_10 = (long)plVar8;
  *param_11 = (long)plVar9;
  return;
}



undefined8 ssl_cipher_strength_sort(long *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  void *ptr;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    lVar5 = 4;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      if (((int)plVar2[1] != 0) && (iVar4 < *(int *)(*plVar2 + 0x44))) {
        iVar4 = *(int *)(*plVar2 + 0x44);
      }
      plVar2 = (long *)plVar2[2];
    } while (plVar2 != (long *)0x0);
    lVar5 = (long)(iVar4 + 1) << 2;
  }
  ptr = (void *)CRYPTO_zalloc(lVar5,"ssl/ssl_ciph.c",0x3ab);
  if (ptr == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    for (plVar2 = (long *)*param_1; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
      if ((int)plVar2[1] != 0) {
        piVar1 = (int *)((long)ptr + (long)*(int *)(*plVar2 + 0x44) * 4);
        *piVar1 = *piVar1 + 1;
      }
    }
    lVar5 = (long)iVar4;
    while (-1 < iVar4) {
      if (0 < *(int *)((long)ptr + lVar5 * 4)) {
        ssl_cipher_apply_rule(0,0,0,0,0,0,0,4,lVar5,param_1,param_2);
      }
      lVar5 = lVar5 + -1;
      iVar4 = (int)lVar5;
    }
    CRYPTO_free(ptr);
    uVar3 = 1;
  }
  return uVar3;
}



undefined4
ssl_cipher_process_rulestr
          (byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  size_t __n;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  byte *__s1;
  bool bVar17;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_58;
  int local_54;
  
  uVar9 = 1;
  bVar2 = *param_1;
  cVar12 = bVar2 - 0x2b;
  bVar17 = bVar2 == 0x2b;
  if (bVar17) goto LAB_0010089c;
LAB_001006d4:
  uVar14 = (ulong)bVar2;
  if (!bVar17 && SBORROW1(bVar2,'+') == cVar12 < '\0') goto LAB_00100ae9;
  if (bVar2 == 0) {
    return uVar9;
  }
  do {
    if ((char)uVar14 != '!') goto LAB_00100869;
    local_70 = 2;
    uVar14 = (ulong)param_1[1];
    param_1 = param_1 + 1;
LAB_00100778:
    local_54 = 0;
    uVar8 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_58 = 0;
    __s1 = param_1;
LAB_001007a8:
    iVar7 = 0;
    param_1 = __s1;
    while (cVar12 = (char)uVar14, cVar12 < '{') {
      if (cVar12 < '=') {
        if (cVar12 < '/') {
          if (cVar12 < '-') {
            if (iVar7 == 0) goto LAB_00100b83;
            if (local_70 == 5) goto LAB_00100b3d;
            if (cVar12 != '+') goto LAB_001008dc;
            param_1 = param_1 + 1;
            bVar17 = true;
            piVar10 = (int *)*param_4;
            goto joined_r0x001008ea;
          }
        }
        else if (9 < (byte)(cVar12 - 0x30U)) break;
      }
      else if ((0x3ffffff43ffffff1U >> ((ulong)((int)uVar14 - 0x3d) & 0x3f) & 1) == 0) break;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      iVar7 = iVar7 + 1;
      uVar14 = (ulong)*pbVar1;
    }
    if (iVar7 == 0) {
LAB_00100b83:
      ERR_new();
      ERR_set_debug("ssl/ssl_ciph.c",0x40c,"ssl_cipher_process_rulestr");
      ERR_set_error(0x14,0x118,0);
      return 0;
    }
    if (local_70 == 5) goto LAB_00100b3d;
LAB_001008dc:
    bVar17 = false;
    piVar10 = (int *)*param_4;
joined_r0x001008ea:
    if (piVar10 == (int *)0x0) {
LAB_00100828:
      bVar2 = *param_1;
      while( true ) {
        if (bVar2 == 0) {
          return uVar9;
        }
        if ((bVar2 < 0x3c) && ((0xf3ffeffeffffffffU >> ((ulong)bVar2 & 0x3f) & 1) == 0)) break;
        bVar2 = param_1[1];
        param_1 = param_1 + 1;
      }
      goto LAB_00100741;
    }
    __n = (size_t)iVar7;
    puVar16 = param_4;
    while( true ) {
      puVar16 = puVar16 + 1;
      pcVar5 = *(char **)(piVar10 + 2);
      iVar6 = strncmp((char *)__s1,pcVar5,__n);
      if (((iVar6 == 0) && (pcVar5[__n] == '\0')) ||
         ((pcVar5 = *(char **)(piVar10 + 4), pcVar5 != (char *)0x0 &&
          ((iVar6 = strncmp((char *)__s1,pcVar5,__n), iVar6 == 0 && (pcVar5[__n] == '\0'))))))
      break;
      piVar10 = (int *)*puVar16;
      if (piVar10 == (int *)0x0) goto LAB_0010096b;
    }
    uVar3 = piVar10[7];
    uVar15 = local_6c;
    if (((((uVar3 != 0) &&
          ((uVar15 = uVar3, local_6c != 0 && (uVar15 = local_6c & uVar3, (local_6c & uVar3) == 0))))
         || ((local_6c = uVar15, uVar3 = piVar10[8], uVar15 = local_68, uVar3 != 0 &&
             ((uVar15 = uVar3, local_68 != 0 && (uVar15 = local_68 & uVar3, (local_68 & uVar3) == 0)
              ))))) ||
        ((local_68 = uVar15, uVar3 = piVar10[9], uVar15 = local_64, uVar3 != 0 &&
         ((uVar15 = uVar3, local_64 != 0 && (uVar15 = local_64 & uVar3, (local_64 & uVar3) == 0)))))
        ) || ((local_64 = uVar15, uVar3 = piVar10[10], uVar15 = local_58, uVar3 != 0 &&
              ((uVar15 = uVar3, local_58 != 0 &&
               (uVar15 = local_58 & uVar3, (local_58 & uVar3) == 0)))))) {
LAB_0010096b:
      if (local_70 != 5) goto LAB_00100828;
      goto LAB_00100b3d;
    }
    local_58 = uVar15;
    uVar3 = piVar10[0xf];
    uVar15 = uVar3 & 0x1f;
    if (uVar15 == 0) {
LAB_00100a5f:
      if ((uVar3 & 0x20) != 0) {
        if ((uVar8 & 0x20) == 0) goto LAB_00100a28;
        uVar8 = uVar8 & (uVar3 | 0xffffffdf);
        if ((uVar8 & 0x20) == 0) goto LAB_0010096b;
      }
    }
    else {
      if ((uVar8 & 0x1f) != 0) {
        uVar8 = uVar8 & (uVar3 | 0xffffffe0);
        if ((uVar8 & 0x1f) == 0) goto LAB_0010096b;
        goto LAB_00100a5f;
      }
      uVar8 = uVar15;
      if ((uVar3 & 0x20) != 0) {
LAB_00100a28:
        uVar8 = uVar8 | 0x20;
      }
    }
    iVar6 = local_54;
    if (*piVar10 == 0) {
      iVar4 = piVar10[0xb];
      iVar13 = 0;
      if (((iVar4 != 0) && (iVar6 = iVar4, iVar4 != local_54)) && (local_54 != 0))
      goto LAB_0010096b;
    }
    else {
      iVar13 = piVar10[6];
    }
    local_54 = iVar6;
    if (bVar17) goto code_r0x00100a40;
    if (local_70 == 5) {
LAB_00100b3d:
      if (iVar7 == 8) {
        iVar7 = strncmp((char *)__s1,"STRENGTH",8);
        if (iVar7 != 0) goto LAB_00100bd2;
        iVar7 = ssl_cipher_strength_sort(param_2);
        if (iVar7 != 0) goto LAB_00100c04;
LAB_00100c02:
        uVar9 = 0;
      }
      else {
        if ((iVar7 != 10) || (iVar7 = strncmp((char *)__s1,"SECLEVEL=",9), iVar7 != 0)) {
LAB_00100bd2:
          ERR_new();
          uVar11 = 0x4b3;
LAB_00100be3:
          ERR_set_debug("ssl/ssl_ciph.c",uVar11,"ssl_cipher_process_rulestr");
          ERR_set_error(0x14,0x118,0);
          goto LAB_00100c02;
        }
        if (5 < (int)(char)__s1[9] - 0x30U) {
          ERR_new();
          uVar11 = 0x4ad;
          goto LAB_00100be3;
        }
        *(uint *)(param_5 + 0x98) = (int)(char)__s1[9] - 0x30U;
      }
LAB_00100c04:
      bVar2 = *param_1;
      while( true ) {
        if (bVar2 == 0) {
          return uVar9;
        }
        if ((bVar2 < 0x3c) && ((0xf3ffeffeffffffffU >> ((ulong)bVar2 & 0x3f) & 1) == 0)) break;
        bVar2 = param_1[1];
        param_1 = param_1 + 1;
      }
    }
    else {
      ssl_cipher_apply_rule(iVar13,local_6c,local_68);
    }
LAB_00100741:
    bVar2 = *param_1;
    uVar14 = (ulong)bVar2;
    if (bVar2 == 0) {
      return uVar9;
    }
    if (bVar2 == 0x2b) {
LAB_0010089c:
      local_70 = 4;
      uVar14 = (ulong)param_1[1];
      param_1 = param_1 + 1;
      goto LAB_00100778;
    }
  } while ((char)bVar2 < ',');
LAB_00100ae9:
  if ((char)uVar14 == '-') {
    local_70 = 3;
    uVar14 = (ulong)param_1[1];
    param_1 = param_1 + 1;
  }
  else if ((char)uVar14 == '@') {
    local_70 = 5;
    uVar14 = (ulong)param_1[1];
    param_1 = param_1 + 1;
  }
  else {
LAB_00100869:
    if (((byte)uVar14 < 0x3c) && ((0xc00100100000000U >> (uVar14 & 0x3f) & 1) != 0)) {
      bVar2 = param_1[1];
      param_1 = param_1 + 1;
      cVar12 = bVar2 - 0x2b;
      bVar17 = cVar12 == '\0';
      if (bVar17) goto LAB_0010089c;
      goto LAB_001006d4;
    }
    local_70 = 1;
  }
  goto LAB_00100778;
code_r0x00100a40:
  uVar14 = (ulong)*param_1;
  __s1 = param_1;
  goto LAB_001007a8;
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
          if (bVar4) goto LAB_00100d40;
        }
        bVar4 = iVar1 != 0;
        iVar1 = iVar1 + -1;
      } while (bVar4);
    }
LAB_00100d40:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ssl_load_ciphers(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  
  lVar6 = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  do {
    while ((&DAT_00103684)[lVar6 * 2] == 0) {
LAB_00100df0:
      lVar6 = lVar6 + 1;
      if (lVar6 == 0x18) goto LAB_00100e38;
    }
    lVar5 = ssl_evp_cipher_fetch(*param_1,(&DAT_00103684)[lVar6 * 2],param_1[0x8e]);
    param_1[lVar6 + 0x96] = lVar5;
    if (lVar5 != 0) goto LAB_00100df0;
    lVar5 = lVar6 * 2;
    lVar6 = lVar6 + 1;
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | (&ssl_cipher_table_cipher)[lVar5];
  } while (lVar6 != 0x18);
LAB_00100e38:
  puVar7 = &ssl_cipher_table_mac;
  *(undefined4 *)((long)param_1 + 0x6a4) = 0;
  plVar8 = param_1 + 0xbc;
  do {
    while( true ) {
      lVar6 = ssl_evp_md_fetch(*param_1,puVar7[1],param_1[0x8e]);
      plVar8[-0xe] = lVar6;
      if (lVar6 != 0) break;
      uVar1 = *puVar7;
      puVar7 = puVar7 + 2;
      *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | uVar1;
      plVar8 = plVar8 + 1;
      if (puVar7 == (uint *)&DAT_00103670) goto LAB_00100eb4;
    }
    iVar4 = EVP_MD_get_size(lVar6);
    if (iVar4 < 1) {
      return 0;
    }
    puVar7 = puVar7 + 2;
    *plVar8 = (long)iVar4;
    plVar8 = plVar8 + 1;
  } while (puVar7 != (uint *)&DAT_00103670);
LAB_00100eb4:
  param_1[0xd5] = 0;
  ERR_set_mark();
  lVar6 = EVP_SIGNATURE_fetch(*param_1,&_LC3,param_1[0x8e]);
  if (lVar6 == 0) {
    *(uint *)((long)param_1 + 0x6ac) = *(uint *)((long)param_1 + 0x6ac) | 2;
  }
  else {
    EVP_SIGNATURE_free(lVar6);
  }
  lVar6 = EVP_KEYEXCH_fetch(*param_1,&_LC4,param_1[0x8e]);
  if (lVar6 == 0) {
    *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) | 0x102;
  }
  else {
    EVP_KEYEXCH_free(lVar6);
  }
  lVar6 = EVP_KEYEXCH_fetch(*param_1,&_LC5,param_1[0x8e]);
  if (lVar6 == 0) {
    *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) | 0x84;
  }
  else {
    EVP_KEYEXCH_free(lVar6);
  }
  lVar6 = EVP_SIGNATURE_fetch(*param_1,"ECDSA",param_1[0x8e]);
  if (lVar6 == 0) {
    *(uint *)((long)param_1 + 0x6ac) = *(uint *)((long)param_1 + 0x6ac) | 8;
  }
  else {
    EVP_SIGNATURE_free(lVar6);
  }
  ERR_pop_to_mark();
  uVar3 = _UNK_001050d8;
  uVar2 = __LC14;
  param_1[0x93] = 0x357;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x8f] = uVar2;
  param_1[0x90] = uVar3;
  param_1[0x91] = uVar2;
  param_1[0x92] = uVar3;
  iVar4 = get_optional_pkey_id("gost-mac");
  *(int *)((long)param_1 + 0x484) = iVar4;
  if (iVar4 == 0) {
    *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | 8;
  }
  else {
    param_1[0xbf] = 0x20;
  }
  iVar4 = get_optional_pkey_id("gost-mac-12");
  *(int *)((long)param_1 + 0x494) = iVar4;
  if (iVar4 == 0) {
    *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | 0x100;
  }
  else {
    param_1[0xc3] = 0x20;
  }
  iVar4 = get_optional_pkey_id("magma-mac");
  *(int *)(param_1 + 0x95) = iVar4;
  if (iVar4 == 0) {
    *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | 0x400;
  }
  else {
    param_1[200] = 0x20;
  }
  iVar4 = get_optional_pkey_id("kuznyechik-mac");
  *(int *)((long)param_1 + 0x4ac) = iVar4;
  if (iVar4 == 0) {
    *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) | 0x800;
  }
  else {
    param_1[0xc9] = 0x20;
  }
  iVar4 = get_optional_pkey_id("gost2001");
  if (iVar4 == 0) {
    *(uint *)((long)param_1 + 0x6ac) = *(uint *)((long)param_1 + 0x6ac) | 0xa0;
  }
  iVar4 = get_optional_pkey_id("gost2012_256");
  if (iVar4 == 0) {
    *(uint *)((long)param_1 + 0x6ac) = *(uint *)((long)param_1 + 0x6ac) | 0x80;
  }
  iVar4 = get_optional_pkey_id("gost2012_512");
  uVar1 = *(uint *)((long)param_1 + 0x6ac);
  if (iVar4 == 0) {
    *(uint *)((long)param_1 + 0x6ac) = uVar1 | 0x80;
    if ((uVar1 & 0xa0 | 0x80) == 0xa0) {
      *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) | 0x10;
    }
  }
  else {
    if ((~uVar1 & 0xa0) == 0) {
      *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) | 0x10;
    }
    if ((uVar1 & 0x80) == 0) {
      return 1;
    }
  }
  *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) | 0x200;
  return 1;
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
LAB_001011d6:
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
      goto LAB_001011d6;
    }
  }
  return false;
}



undefined8
ssl_cipher_get_evp_md_mac
          (long param_1,long param_2,long *param_3,undefined4 *param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  while (*(int *)(param_2 + 0x28) != (&ssl_cipher_table_mac)[lVar3 * 2]) {
    lVar3 = lVar3 + 1;
    if (lVar3 == 0xe) {
      *param_3 = 0;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = 0;
      }
      return 1;
    }
  }
  iVar1 = (int)lVar3;
  lVar3 = *(long *)(param_1 + 0x570 + (long)iVar1 * 8);
  if ((lVar3 != 0) && (iVar2 = ssl_evp_md_up_ref(lVar3), iVar2 != 0)) {
    *param_3 = lVar3;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_1 + 0x478 + (long)iVar1 * 4);
    }
    if (param_5 == (undefined8 *)0x0) {
      return 1;
    }
    *param_5 = *(undefined8 *)(param_1 + 0x5e0 + (long)iVar1 * 8);
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



void SSL_CTX_set_ciphersuites(long param_1)

{
  int iVar1;
  
  iVar1 = set_ciphersuites(param_1 + 0x20);
  if ((iVar1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    update_cipher_list(param_1,param_1 + 0x10,param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



ulong SSL_set_ciphersuites(SSL *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  SSL *pSVar4;
  ulong uVar5;
  stack_st_SSL_CIPHER *psVar6;
  undefined8 uVar7;
  
  if ((param_1 != (SSL *)0x0) &&
     ((pSVar4 = param_1, param_1->version == 0 ||
      (((param_1->version & 0x80U) != 0 &&
       (pSVar4 = (SSL *)ossl_quic_obj_get0_handshake_layer(), pSVar4 != (SSL *)0x0)))))) {
    uVar3 = set_ciphersuites(&pSVar4[2].rbio,param_2);
    lVar1._0_4_ = pSVar4[2].version;
    lVar1._4_4_ = pSVar4[2].type;
    if (lVar1 == 0) {
      psVar6 = SSL_get_ciphers(param_1);
      if (psVar6 != (stack_st_SSL_CIPHER *)0x0) {
        uVar7 = OPENSSL_sk_dup(psVar6);
        pSVar4[2].version = (int)uVar7;
        pSVar4[2].type = (int)((ulong)uVar7 >> 0x20);
      }
      if (uVar3 != 0) {
        lVar2._0_4_ = pSVar4[2].version;
        lVar2._4_4_ = pSVar4[2].type;
        if (lVar2 == 0) {
          return (ulong)uVar3;
        }
        goto LAB_00101420;
      }
    }
    else if (uVar3 != 0) {
LAB_00101420:
      uVar5 = update_cipher_list(param_1->method,pSVar4 + 2,&pSVar4[2].method,pSVar4[2].rbio);
      return uVar5;
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
      goto LAB_00101bd2;
    }
  }
  uVar2 = 0;
LAB_00101bd2:
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
      if (param_4 != (long *)0x0 || param_3 != (long *)0x0) goto LAB_00101cb3;
      goto LAB_00101dc8;
    }
LAB_00101cb3:
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
            if (iVar2 != 1) goto LAB_00101dc8;
            lVar4 = ssl_evp_cipher_fetch(*param_1,0x393,param_1[0x8e]);
          }
          else if (iVar1 == 0x40) {
            if (iVar2 == 2) {
              lVar4 = ssl_evp_cipher_fetch(*param_1,0x394,param_1[0x8e]);
            }
            else {
              if (iVar2 != 0x10) goto LAB_00101dc8;
              lVar4 = ssl_evp_cipher_fetch(*param_1,0x3b4,param_1[0x8e]);
            }
          }
          else {
            if (iVar1 != 0x80) goto LAB_00101dc8;
            if (iVar2 == 2) {
              lVar4 = ssl_evp_cipher_fetch(*param_1,0x396,param_1[0x8e]);
            }
            else {
              if (iVar2 != 0x10) goto LAB_00101dc8;
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
LAB_00101dc8:
        uVar5 = 1;
        goto LAB_00101cd1;
      }
    }
  }
  uVar5 = 0;
LAB_00101cd1:
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
                    /* WARNING: Could not recover jumptable at 0x001020ce. Too many branches */
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
        return (&DAT_00103684)[(long)(int)lVar1 * 2];
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x18);
  }
  return 0;
}



undefined4 SSL_CIPHER_get_digest_nid(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x28) == (&ssl_cipher_table_mac)[lVar1 * 2]) {
      return (&DAT_00103604)[(long)(int)lVar1 * 2];
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xe);
  return 0;
}



undefined4 SSL_CIPHER_get_kx_nid(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x1c) == (&ssl_cipher_table_kx)[lVar1 * 2]) {
      return (&DAT_001035a4)[(long)(int)lVar1 * 2];
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xb);
  return 0;
}



undefined4 SSL_CIPHER_get_auth_nid(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x20) == (&ssl_cipher_table_auth)[lVar1 * 2]) {
      return (&DAT_00103544)[(long)(int)lVar1 * 2];
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 9);
  return 0;
}



long ssl_get_md_idx(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((&DAT_00103604)[lVar1 * 2] == param_1) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xe);
  return 0xffffffff;
}



EVP_MD * SSL_CIPHER_get_handshake_digest(long param_1)

{
  char *name;
  EVP_MD *pEVar1;
  
  if (*(byte *)(param_1 + 0x40) < 0xe) {
    name = OBJ_nid2sn((&DAT_00103604)[(ulong)*(byte *)(param_1 + 0x40) * 2]);
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
            goto LAB_00102293;
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
              goto LAB_00102293;
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
LAB_00102293:
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
LAB_001024ce:
      *(uint *)(param_6 + 0x1c) = uVar1 & 0xfffcffff | uVar7;
LAB_001024e1:
      if ((*(byte *)(*(long *)(lVar12 + 0xd8) + 0x50) & 0x10) == 0) {
        ERR_new();
        ERR_set_debug("ssl/ssl_ciph.c",0x4ea,"check_suiteb_cipher_list");
        ERR_set_error(0x14,0x9e,0);
        goto LAB_00102aef;
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
        goto LAB_001024ce;
      }
      iVar6 = strncmp(param_5,"SUITEB128",9);
      if (iVar6 == 0) {
        bVar5 = false;
        uVar7 = 0x30000;
        goto LAB_001024ce;
      }
      iVar6 = strncmp(param_5,"SUITEB192",9);
      if (iVar6 == 0) {
        bVar5 = false;
        uVar7 = 0x20000;
        goto LAB_001024ce;
      }
      uVar7 = uVar1 & 0x30000;
      local_a8 = param_5;
      if (uVar7 != 0) {
        bVar5 = false;
        goto LAB_001024e1;
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
      if (local_98 == (long *)0x0) goto LAB_00102aef;
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
    ssl_cipher_apply_rule(0,4,8,0,0,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule(0,4,0,0,0,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule(0,4,0,0,0,0,0,3,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule(0,0,0,0x3000,0,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule(0,0,0,0x80000,0,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule(0,0,0,0x3c0c0,0,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule(0,0,0,0,0,0,0,1,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule(0,0,0,0,1,0,0,4,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule(0,0,4,0,0,0,0,4,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule(0,1,0,0,0,0,0,4,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule(0,8,0,0,0,0,0,4,0xffffffffffffffff,&local_50,&local_48);
    ssl_cipher_apply_rule(0,0,0,4,0,0,0,4,0xffffffffffffffff,&local_50,&local_48);
    iVar16 = ssl_cipher_strength_sort(&local_50,&local_48);
    if (iVar16 == 0) {
      CRYPTO_free(local_98);
    }
    else {
      ssl_cipher_apply_rule(0,0,0,0,0,0x303,0,6,0xffffffffffffffff,&local_50,&local_48);
      ssl_cipher_apply_rule(0,0,0,0,0x40,0,0,6,0xffffffffffffffff,&local_50,&local_48);
      ssl_cipher_apply_rule(0,6,0,0,0,0,0,6,0xffffffffffffffff,&local_50,&local_48);
      ssl_cipher_apply_rule(0,6,0,0,0x40,0,0,6,0xffffffffffffffff,&local_50,&local_48);
      ssl_cipher_apply_rule(0,0,0,0,0,0,0,3,0xffffffffffffffff,&local_50,&local_48);
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
          if (iVar6 != 0) goto LAB_00102a03;
          CRYPTO_free(plVar10);
LAB_00102cb3:
          CRYPTO_free(local_98);
        }
        else {
LAB_00102a03:
          if (*local_a8 == '\0') {
            CRYPTO_free(plVar10);
          }
          else {
            iVar6 = ssl_cipher_process_rulestr(local_a8,&local_50,&local_48,plVar10,param_6);
            CRYPTO_free(plVar10);
            if (iVar6 == 0) goto LAB_00102cb3;
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
                if (iVar16 == 0) goto LAB_00102ad8;
                iVar6 = iVar6 + 1;
                iVar16 = OPENSSL_sk_num(param_2);
                plVar10 = local_50;
                if (iVar16 <= iVar6) goto joined_r0x00102aa2;
              }
              OPENSSL_sk_delete(param_2,iVar6);
            }
joined_r0x00102aa2:
            do {
              if (plVar10 == (long *)0x0) goto LAB_00102c00;
              if (((int)plVar10[1] != 0) && (iVar6 = OPENSSL_sk_push(lVar12,*plVar10), iVar6 == 0))
              goto LAB_00102ad8;
              plVar10 = (long *)plVar10[2];
            } while( true );
          }
          CRYPTO_free(local_98);
        }
      }
    }
  }
  goto LAB_00102aef;
LAB_00102ad8:
  CRYPTO_free(local_98);
  goto LAB_00102ae7;
LAB_00102c00:
  CRYPTO_free(local_98);
  lVar14 = OPENSSL_sk_dup(lVar12);
  if (lVar14 != 0) {
    OPENSSL_sk_free(*param_4);
    *param_4 = lVar14;
    OPENSSL_sk_set_cmp_func(lVar14,&ssl_cipher_ptr_id_cmp);
    OPENSSL_sk_sort(*param_4);
    OPENSSL_sk_free(*param_3);
    *param_3 = lVar12;
    goto LAB_00102af2;
  }
LAB_00102ae7:
  OPENSSL_sk_free(lVar12);
LAB_00102aef:
  lVar12 = 0;
LAB_00102af2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar12;
}



char * OSSL_default_ciphersuites(void)

{
  return "TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_GCM_SHA256";
}


