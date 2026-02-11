
void eat_alpha_numeric(long param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  
  lVar3 = (long)*param_2;
  if (-1 < *param_2) {
LAB_00100010:
    do {
      uVar2 = *(ushort *)(*(long *)(param_1 + 8) + lVar3 * 2);
      if ((uVar2 & 0x20) == 0) {
        if ((uVar2 & 0x307) == 0) {
          if (*(int *)(param_1 + 0x18) == 0) {
            return;
          }
          if ((uVar2 & 0x1000) == 0) {
            return;
          }
        }
        cVar1 = param_2[1];
        param_2 = param_2 + 1;
      }
      else {
        lVar3 = (long)param_2[1];
        if ((-1 < param_2[1]) && ((*(byte *)(*(long *)(param_1 + 8) + lVar3 * 2) & 8) != 0)) {
          param_2 = param_2 + 1;
          goto LAB_00100010;
        }
        cVar1 = param_2[2];
        param_2 = param_2 + 2;
      }
      lVar3 = (long)cVar1;
    } while (-1 < cVar1);
  }
  return;
}



void lh_CONF_VALUE_doall_BIO_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



ushort def_is_number(long param_1,char param_2)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (-1 < param_2) {
    uVar1 = *(ushort *)(*(long *)(param_1 + 8) + (long)param_2 * 2) & 1;
  }
  return uVar1;
}



int def_to_int(undefined8 param_1,char param_2)

{
  return param_2 + -0x30;
}



undefined8 def_dump(long param_1,undefined8 param_2)

{
  OPENSSL_LH_doall_arg_thunk
            (*(undefined8 *)(param_1 + 0x10),lh_CONF_VALUE_doall_BIO_thunk,dump_value_doall_arg,
             param_2);
  return 1;
}



void * def_create(long param_1)

{
  int iVar1;
  void *ptr;
  
  ptr = CRYPTO_malloc(0x30,"crypto/conf/conf_def.c",0x73);
  if (ptr != (void *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))(ptr);
    if (iVar1 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



undefined8 parsebool(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_1,&_LC1);
  if ((iVar1 == 0) || (iVar1 = OPENSSL_strcasecmp(param_1,&_LC2), iVar1 == 0)) {
    *param_2 = 1;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_1,&_LC3);
    if ((iVar1 != 0) && (iVar1 = OPENSSL_strcasecmp(param_1,"false"), iVar1 != 0)) {
      ERR_new();
      ERR_set_debug("crypto/conf/conf_def.c",0xca,"parsebool");
      ERR_set_error(0xe,0x7a,0);
      return 0;
    }
    *param_2 = 0;
  }
  return 1;
}



BIO * get_next_file(char *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *__s;
  size_t sVar4;
  char *filename;
  BIO *pBVar5;
  
  sVar3 = strlen(param_1);
LAB_00100238:
  do {
    __s = (char *)OPENSSL_DIR_read(param_2,param_1);
    if (__s == (char *)0x0) goto LAB_00100348;
    sVar4 = strlen(__s);
    if (sVar4 < 6) {
      if (sVar4 != 5) goto LAB_00100238;
LAB_00100266:
      iVar2 = OPENSSL_strcasecmp(__s + (sVar4 - 4),&_LC6);
      if (iVar2 != 0) goto LAB_00100238;
    }
    else {
      iVar2 = OPENSSL_strcasecmp(__s + (sVar4 - 5),".conf");
      if (iVar2 != 0) goto LAB_00100266;
    }
    lVar1 = sVar3 + 2 + sVar4;
    filename = (char *)CRYPTO_zalloc(lVar1,"crypto/conf/conf_def.c",0x35b);
    if (filename == (char *)0x0) {
LAB_00100348:
      OPENSSL_DIR_end(param_2);
      *param_2 = 0;
      return (BIO *)0x0;
    }
    if (*filename == '\0') {
      OPENSSL_strlcpy(filename,param_1,lVar1);
      OPENSSL_strlcat(filename,&_LC7,lVar1);
    }
    OPENSSL_strlcat(filename,__s,lVar1);
    pBVar5 = BIO_new_file(filename,"r");
    CRYPTO_free(filename);
    if (pBVar5 != (BIO *)0x0) {
      return pBVar5;
    }
  } while( true );
}



undefined8 str_copy(lhash_st_CONF_VALUE *param_1,char *param_2,undefined8 *param_3,char *param_4)

{
  char *pcVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  BUF_MEM *str;
  size_t sVar6;
  undefined4 extraout_var;
  char *pcVar7;
  undefined4 extraout_var_00;
  long lVar8;
  char *name;
  long lVar9;
  char cVar10;
  char cVar11;
  char *pcVar12;
  bool bVar13;
  char *local_60;
  
  str = BUF_MEM_new();
  if (str == (BUF_MEM *)0x0) {
    return 0;
  }
  sVar6 = strlen(param_4);
  iVar4 = BUF_MEM_grow(str,(long)((int)sVar6 + 1));
  if (CONCAT44(extraout_var,iVar4) != 0) {
    cVar10 = '\0';
    cVar3 = *param_4;
    iVar4 = 0;
    lVar8 = *(long *)(param_1 + 2);
joined_r0x001003cb:
    do {
      if (-1 < cVar3) {
LAB_001003d1:
        uVar2 = *(ushort *)(lVar8 + (long)cVar3 * 2);
        if ((uVar2 & 0x40) != 0) {
          lVar9 = (long)iVar4;
          pcVar7 = param_4;
          do {
            param_4 = pcVar7 + 1;
            cVar11 = *param_4;
            if (-1 < cVar11) {
              uVar2 = *(ushort *)(lVar8 + (long)cVar11 * 2);
              if (((uVar2 & 8) != 0) || (cVar11 == cVar3)) goto LAB_001006b8;
              if ((uVar2 & 0x20) != 0) {
                cVar11 = pcVar7[2];
                param_4 = pcVar7 + 2;
                if ((-1 < cVar11) && ((*(byte *)(lVar8 + (long)cVar11 * 2) & 8) != 0))
                goto LAB_001006b8;
              }
            }
            str->data[lVar9] = cVar11;
            lVar8 = *(long *)(param_1 + 2);
            lVar9 = lVar9 + 1;
            pcVar7 = param_4;
          } while( true );
        }
        if ((uVar2 & 0x400) != 0) {
          lVar9 = (long)iVar4;
          pcVar7 = param_4;
          do {
            param_4 = pcVar7 + 1;
            cVar11 = *param_4;
            if (-1 < cVar11) {
              iVar4 = (int)lVar9;
              if ((*(byte *)(lVar8 + (long)cVar11 * 2) & 8) != 0) goto code_r0x00100729;
              if (cVar11 == cVar3) {
                if (pcVar7[2] != cVar3) goto LAB_00100750;
                param_4 = pcVar7 + 2;
              }
            }
            str->data[lVar9] = cVar11;
            lVar8 = *(long *)(param_1 + 2);
            lVar9 = lVar9 + 1;
            pcVar7 = param_4;
          } while( true );
        }
        if ((uVar2 & 0x20) != 0) {
          cVar3 = param_4[1];
          if (-1 < cVar3) {
            if ((*(byte *)(lVar8 + (long)cVar3 * 2) & 8) != 0) goto LAB_001008b0;
            if (cVar3 == 'r') {
              cVar3 = '\r';
            }
            else if (cVar3 == 'n') {
              cVar3 = '\n';
            }
            else if (cVar3 == 'b') {
              cVar3 = '\b';
            }
            else if (cVar3 == 't') {
              cVar3 = '\t';
            }
          }
          lVar8 = (long)iVar4;
          iVar4 = iVar4 + 1;
          str->data[lVar8] = cVar3;
          cVar3 = param_4[2];
          lVar8 = *(long *)(param_1 + 2);
          param_4 = param_4 + 2;
          goto joined_r0x001003cb;
        }
        if ((uVar2 & 8) != 0) {
LAB_001008b0:
          str->data[iVar4] = '\0';
          CRYPTO_free((void *)*param_3);
          *param_3 = str->data;
          CRYPTO_free(str);
          return 1;
        }
        if (cVar3 != '$') goto LAB_00100450;
        cVar11 = param_4[1];
        if (param_1[6].dummy == 0) {
          if (cVar11 != '{') {
            if (cVar11 == '(') {
              cVar3 = ')';
              goto LAB_00100502;
            }
            pcVar7 = param_4 + 1;
            cVar3 = '\0';
            pcVar12 = pcVar7;
            if (-1 < cVar11) goto LAB_00100520;
            param_4[1] = '\0';
            name = pcVar7;
            goto LAB_0010079a;
          }
          cVar11 = param_4[2];
          cVar3 = '}';
        }
        else {
          if ((cVar11 != '{') && (cVar11 != '(')) goto LAB_00100450;
          cVar3 = '}';
          if (cVar11 != '{') {
            cVar3 = ')';
          }
LAB_00100502:
          cVar11 = param_4[2];
        }
        if (cVar11 < '\0') {
          param_4[2] = '\0';
          goto LAB_0010087a;
        }
        pcVar7 = param_4 + 2;
        pcVar12 = pcVar7;
        goto LAB_00100520;
      }
LAB_00100450:
      lVar8 = (long)iVar4;
      param_4 = param_4 + 1;
      iVar4 = iVar4 + 1;
      str->data[lVar8] = cVar3;
      cVar3 = *param_4;
      lVar8 = *(long *)(param_1 + 2);
    } while( true );
  }
  goto LAB_001004a0;
LAB_001006b8:
  iVar4 = (int)lVar9;
  bVar13 = cVar3 == cVar11;
  cVar3 = cVar11;
  if (bVar13) goto LAB_001006d0;
  goto LAB_001003d1;
LAB_001006d0:
  cVar3 = param_4[1];
  param_4 = param_4 + 1;
  goto joined_r0x001003cb;
code_r0x00100729:
  bVar13 = cVar11 == cVar3;
  cVar3 = cVar11;
  if (bVar13) {
LAB_00100750:
    cVar3 = pcVar7[2];
    param_4 = pcVar7 + 2;
    goto joined_r0x001003cb;
  }
  goto LAB_001003d1;
  while( true ) {
    cVar11 = pcVar12[1];
    pcVar12 = pcVar12 + 1;
    local_60 = pcVar12;
    if (cVar11 < '\0') break;
LAB_00100520:
    uVar2 = *(ushort *)(lVar8 + (long)cVar11 * 2);
    if (((uVar2 & 0x107) == 0) && ((param_1[6].dummy == 0 || ((uVar2 & 0x1000) == 0)))) {
      local_60 = pcVar12;
      if ((cVar11 == ':') && (pcVar12[1] == ':')) {
        cVar11 = pcVar12[2];
        *pcVar12 = '\0';
        name = pcVar12 + 2;
        local_60 = name;
        if (-1 < cVar11) goto LAB_001007f0;
        pcVar12[2] = '\0';
        if (cVar3 != '\0') goto LAB_0010087a;
        pcVar7 = _CONF_get_string(param_1,pcVar7,name);
        cVar10 = ':';
        goto LAB_001005a4;
      }
      break;
    }
  }
  cVar11 = *local_60;
  *local_60 = '\0';
  name = local_60;
  if (cVar3 != '\0') {
    pcVar12 = (char *)0x0;
    name = pcVar7;
    pcVar7 = param_2;
    goto LAB_0010056d;
  }
LAB_0010079a:
  pcVar7 = _CONF_get_string(param_1,param_2,pcVar7);
  local_60 = name;
  goto LAB_001005a7;
  while( true ) {
    local_60 = local_60 + 1;
    cVar11 = *local_60;
    if (cVar11 < '\0') break;
LAB_001007f0:
    uVar2 = *(ushort *)(*(long *)(param_1 + 2) + (long)cVar11 * 2);
    if (((uVar2 & 0x107) == 0) && ((param_1[6].dummy == 0 || ((uVar2 & 0x1000) == 0)))) {
      cVar11 = *local_60;
      break;
    }
  }
  *local_60 = '\0';
  if (cVar3 == '\0') {
    pcVar7 = _CONF_get_string(param_1,pcVar7,name);
    cVar10 = ':';
    name = local_60;
  }
  else {
    cVar10 = ':';
LAB_0010056d:
    if (cVar3 != cVar11) {
LAB_0010087a:
      ERR_new();
      ERR_set_debug("crypto/conf/conf_def.c",0x2e3,"str_copy");
      ERR_set_error(0xe,0x66,0);
      goto LAB_001004a0;
    }
    pcVar1 = local_60 + 1;
    pcVar7 = _CONF_get_string(param_1,pcVar7,name);
    name = local_60;
    local_60 = pcVar1;
    if (pcVar12 == (char *)0x0) goto LAB_001005a7;
  }
LAB_001005a4:
  *pcVar12 = cVar10;
LAB_001005a7:
  *name = cVar11;
  if (pcVar7 == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/conf/conf_def.c",0x2f7,"str_copy");
    ERR_set_error(0xe,0x68,0);
    goto LAB_001004a0;
  }
  sVar6 = strlen(pcVar7);
  if ((char *)0x10000 < param_4 + sVar6 + (str->length - (long)local_60)) {
    ERR_new();
    ERR_set_debug("crypto/conf/conf_def.c",0x2fc,"str_copy");
    ERR_set_error(0xe,0x74,0);
    goto LAB_001004a0;
  }
  iVar5 = BUF_MEM_grow_clean(str,(size_t)(param_4 + sVar6 + (str->length - (long)local_60)));
  if (CONCAT44(extraout_var_00,iVar5) != 0) {
    cVar3 = *pcVar7;
    lVar8 = (long)iVar4;
    if (cVar3 != '\0') {
      do {
        lVar9 = lVar8;
        str->data[lVar9] = cVar3;
        cVar3 = pcVar7[(lVar9 + 1) - (long)iVar4];
        lVar8 = lVar9 + 1;
      } while (cVar3 != '\0');
      iVar4 = (int)lVar9 + 1;
    }
    *name = cVar11;
    lVar8 = *(long *)(param_1 + 2);
    cVar3 = *local_60;
    param_4 = local_60;
    goto joined_r0x001003cb;
  }
  ERR_new();
  ERR_set_debug("crypto/conf/conf_def.c",0x300,"str_copy");
  ERR_set_error(0xe,0x80007,0);
LAB_001004a0:
  BUF_MEM_free(str);
  return 0;
}



undefined8 def_destroy_data(CONF *param_1)

{
  if (param_1 != (CONF *)0x0) {
    _CONF_free_data(param_1);
    return 1;
  }
  return 0;
}



bool def_init_default(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
    *param_1 = default_method;
    param_1[1] = CONF_type_default;
  }
  return param_1 != (undefined8 *)0x0;
}



bool def_init_WIN32(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
    *param_1 = WIN32_method;
    param_1[1] = CONF_type_win32;
  }
  return param_1 != (undefined8 *)0x0;
}



undefined8 def_destroy(CONF *param_1)

{
  if (param_1 != (CONF *)0x0) {
    _CONF_free_data(param_1);
    CRYPTO_free(param_1);
    return 1;
  }
  return 0;
}



void dump_value_doall_arg(undefined8 *param_1,BIO *param_2)

{
  if (param_1[1] != 0) {
    BIO_printf(param_2,"[%s] %s=%s\n",*param_1,param_1[1],param_1[2]);
    return;
  }
  BIO_printf(param_2,"[[%s]]\n",*param_1);
  return;
}



void trim_ws_isra_0(long param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = param_2;
  while ((*pcVar1 < '\0' || ((*(byte *)(param_1 + (long)*pcVar1 * 2) & 8) == 0))) {
    pcVar1 = pcVar1 + 1;
  }
  pcVar1 = pcVar1 + -1;
  if (param_2 <= pcVar1) {
    do {
      if ((*pcVar1 < '\0') || ((*(byte *)(param_1 + (long)*pcVar1 * 2) & 0x10) == 0)) break;
      pcVar1 = pcVar1 + -1;
    } while (pcVar1 != param_2 + -1);
  }
  pcVar1[1] = '\0';
  return;
}



undefined8 def_load_bio(CONF *param_1,BIO *param_2,long *param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  lhash_st_CONF_VALUE *plVar6;
  bool bVar7;
  char *__s;
  int iVar8;
  int iVar9;
  uint uVar10;
  BUF_MEM *str;
  byte *pbVar11;
  undefined4 extraout_var;
  ulong uVar12;
  BIO *pBVar13;
  byte *pbVar14;
  char *pcVar15;
  byte *pbVar16;
  CONF_VALUE *value;
  CONF_VALUE *section;
  size_t sVar17;
  size_t sVar18;
  char *__s_00;
  BIO *a;
  int *piVar19;
  byte bVar20;
  uint uVar21;
  short *__s_01;
  void *pvVar22;
  byte bVar23;
  undefined8 uVar24;
  ulong uVar25;
  CONF *pCVar26;
  byte *pbVar27;
  char *pcVar28;
  long in_FS_OFFSET;
  bool bVar29;
  undefined1 auVar30 [16];
  long local_168;
  long local_140;
  CONF_VALUE *local_128;
  byte *local_110;
  byte *local_100;
  long local_f8;
  char *local_f0;
  stat local_e8;
  undefined2 local_58;
  undefined1 local_56;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = param_1->data;
  local_100 = (byte *)0x0;
  local_f8 = 0;
  str = BUF_MEM_new();
  if (str == (BUF_MEM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/conf/conf_def.c",0xea,"def_load_bio");
    ERR_set_error(0xe,0x80007,0);
  }
  else {
    pbVar11 = (byte *)CRYPTO_strdup("default","crypto/conf/conf_def.c",0xee);
    local_100 = pbVar11;
    if (pbVar11 != (byte *)0x0) {
      iVar8 = _CONF_new_data(param_1);
      if (iVar8 == 0) {
        ERR_new();
        ERR_set_debug("crypto/conf/conf_def.c",0xf3,"def_load_bio");
        ERR_set_error(0xe,0x8000e,0);
      }
      else {
        local_128 = _CONF_new_section(param_1,(char *)pbVar11);
        if (local_128 != (CONF_VALUE *)0x0) {
          bVar7 = false;
          local_168 = 0;
          bVar29 = true;
          local_140 = 0;
          iVar8 = 0;
          pBVar13 = param_2;
          pcVar15 = (char *)0x0;
          while (iVar9 = BUF_MEM_grow(str,(long)(iVar8 + 0x200)), param_2 = pBVar13,
                pcVar28 = pcVar15, CONCAT44(extraout_var,iVar9) != 0) {
            __s_01 = (short *)(str->data + iVar8);
            *(undefined1 *)__s_01 = 0;
            if (pBVar13 != (BIO *)0x0) goto LAB_00100daf;
            while( true ) {
              *(undefined1 *)((long)__s_01 + 0x1ff) = 0;
              uVar12 = strlen((char *)__s_01);
              if (bVar29) {
                local_56 = 0xbf;
                local_58 = 0xbbef;
                iVar9 = (int)uVar12;
                if (2 < iVar9) {
                  if ((*__s_01 != -0x4411) || ((char)__s_01[1] != -0x41)) goto LAB_00100cec;
                  memmove(__s_01,(void *)((long)__s_01 + 3),(long)(int)(iVar9 - 3U));
                  uVar12 = (ulong)(iVar9 - 3U);
                  *(undefined1 *)((long)__s_01 + (long)iVar9 + -3) = 0;
                }
              }
              uVar10 = (uint)uVar12;
              if (uVar10 != 0 || bVar7) break;
              pcVar15 = pcVar28;
              if (local_f8 == 0) {
LAB_00100f35:
                pBVar13 = (BIO *)OPENSSL_sk_pop(local_168);
                if (pBVar13 == (BIO *)0x0) {
                  BUF_MEM_free(str);
                  CRYPTO_free(local_100);
                  OPENSSL_sk_free(local_168);
                  uVar24 = 1;
                  goto LAB_00100ef2;
                }
              }
              else {
                pBVar13 = (BIO *)get_next_file(pcVar28,&local_f8);
                if (pBVar13 == (BIO *)0x0) {
                  pcVar15 = (char *)0x0;
                  CRYPTO_free(pcVar28);
                  goto LAB_00100f35;
                }
              }
              BIO_vfree(param_2);
              bVar29 = false;
LAB_00100daf:
              iVar9 = BIO_gets(pBVar13,(char *)__s_01,0x1ff);
              param_2 = pBVar13;
              pcVar28 = pcVar15;
              if (iVar9 < 0) goto LAB_00100dc7;
            }
            if ((int)uVar10 < 1) {
              bVar29 = true;
              uVar21 = uVar10;
LAB_00100d21:
              iVar8 = iVar8 + uVar21;
              if ((uVar10 == 0) || (bVar7 = true, !bVar29)) goto LAB_00100ff8;
            }
            else {
LAB_00100cec:
              uVar10 = (uint)uVar12;
              pcVar15 = (char *)((long)__s_01 + (long)(int)uVar10 + -1);
              uVar12 = uVar12 & 0xffffffff;
              do {
                uVar21 = (uint)uVar12;
                if ((*pcVar15 != '\r') && (*pcVar15 != '\n')) {
                  bVar29 = uVar21 == uVar10;
                  goto LAB_00100d21;
                }
                pcVar15 = pcVar15 + -1;
                uVar21 = uVar21 - 1;
                uVar12 = (ulong)uVar21;
              } while (uVar21 != 0);
LAB_00100ff8:
              *(undefined1 *)((long)__s_01 + (long)(int)uVar21) = 0;
              local_140 = local_140 + 1;
              pbVar27 = (byte *)str->data;
              if (iVar8 < 1) {
                pvVar22 = param_1->meth_data;
              }
              else {
                bVar20 = pbVar27[(long)iVar8 + -1];
                pvVar22 = param_1->meth_data;
                if (((-1 < (char)bVar20) &&
                    ((*(byte *)((long)pvVar22 + (long)(char)bVar20 * 2) & 0x20) != 0)) &&
                   ((iVar8 == 1 ||
                    ((bVar20 = (pbVar27 + (long)iVar8 + -1)[-1], (char)bVar20 < '\0' ||
                     ((*(byte *)((long)pvVar22 + (long)(char)bVar20 * 2) & 0x20) == 0)))))) {
                  iVar8 = iVar8 + -1;
                  bVar7 = true;
                  goto LAB_00100d3b;
                }
              }
              bVar3 = *pbVar27;
              pbVar11 = pbVar27;
              bVar20 = bVar3;
              while( true ) {
                pbVar14 = pbVar11;
                if ((char)bVar20 < '\0') goto LAB_0010105c;
                uVar5 = *(ushort *)((long)pvVar22 + (long)(char)bVar20 * 2);
                if ((uVar5 & 0x800) != 0) break;
                if ((uVar5 & 0x10) == 0) {
                  uVar12 = (ulong)*pbVar11;
LAB_00101064:
                  do {
                    pbVar14 = pbVar11;
                    if (-1 < (char)uVar12) {
                      uVar25 = (long)(char)uVar12;
LAB_0010106c:
                      uVar5 = *(ushort *)((long)pvVar22 + uVar25 * 2);
                      if ((uVar5 & 0x80) != 0) goto LAB_001013f0;
                      bVar20 = (byte)uVar12;
                      if ((uVar5 & 0x400) != 0) {
                        do {
                          do {
                            bVar23 = pbVar14[1];
                            pbVar14 = pbVar14 + 1;
                          } while ((char)bVar23 < '\0');
                          uVar25 = (ulong)(char)bVar23;
                          bVar4 = *(byte *)((long)pvVar22 + uVar25 * 2);
                          while( true ) {
                            if ((bVar4 & 8) != 0) {
                              if (bVar20 == bVar23) goto LAB_0010105c;
                              uVar12 = (ulong)bVar23;
                              goto LAB_0010106c;
                            }
                            if (bVar20 != bVar23) break;
                            if (bVar20 != pbVar14[1]) goto LAB_0010105c;
                            bVar23 = pbVar14[2];
                            pbVar14 = pbVar14 + 2;
                            if ((char)bVar23 < '\0') break;
                            uVar25 = (ulong)(char)bVar23;
                            bVar4 = *(byte *)((long)pvVar22 + uVar25 * 2);
                          }
                        } while( true );
                      }
                      if ((uVar5 & 0x40) != 0) {
                        do {
                          do {
                            bVar23 = pbVar14[1];
                            pbVar14 = pbVar14 + 1;
                          } while ((char)bVar23 < '\0');
                          do {
                            uVar5 = *(ushort *)((long)pvVar22 + (long)(char)bVar23 * 2);
                            if ((uVar5 & 8) != 0) {
                              if (bVar20 == bVar23) goto LAB_0010105c;
                              uVar12 = (ulong)(char)bVar23;
                              uVar25 = uVar12;
                              goto LAB_0010106c;
                            }
                            if (bVar20 == bVar23) goto LAB_0010105c;
                            if ((uVar5 & 0x20) == 0) break;
                            pbVar11 = pbVar14 + 1;
                            bVar23 = pbVar14[1];
                            if ((-1 < (char)bVar23) &&
                               ((*(byte *)((long)pvVar22 + (long)(char)bVar23 * 2) & 8) != 0)) {
                              uVar12 = (ulong)bVar23;
                              goto LAB_00101064;
                            }
                            bVar23 = pbVar14[2];
                            pbVar14 = pbVar14 + 2;
                          } while (-1 < (char)bVar23);
                        } while( true );
                      }
                      if ((uVar5 & 0x20) != 0) {
                        bVar20 = pbVar14[1];
                        uVar12 = (ulong)bVar20;
                        if (((char)bVar20 < '\0') ||
                           ((*(byte *)((long)pvVar22 + (long)(char)bVar20 * 2) & 8) == 0)) {
                          uVar12 = (ulong)pbVar14[2];
                          pbVar11 = pbVar14 + 2;
                          goto LAB_00101064;
                        }
                        pbVar14 = pbVar14 + 1;
                        uVar25 = (long)(char)bVar20;
                        goto LAB_0010106c;
                      }
                      if ((uVar5 & 8) != 0) goto joined_r0x001010a2;
                    }
LAB_0010105c:
                    uVar12 = (ulong)pbVar14[1];
                    pbVar11 = pbVar14 + 1;
                  } while( true );
                }
                bVar20 = pbVar11[1];
                pbVar11 = pbVar11 + 1;
              }
LAB_001013f0:
              *pbVar14 = 0;
              bVar3 = *pbVar27;
              pvVar22 = param_1->meth_data;
joined_r0x001010a2:
              pBVar13 = param_2;
              if (-1 < (char)bVar3) {
                uVar5 = *(ushort *)((long)pvVar22 + (long)(char)bVar3 * 2);
                if (((uVar5 & 0x10) != 0) && ((uVar5 & 8) == 0)) goto code_r0x001010bd;
                if ((*(byte *)((long)pvVar22 + (long)(char)bVar3 * 2) & 8) != 0) goto LAB_001015da;
                if (bVar3 == 0x5b) {
                  bVar20 = pbVar27[1];
                  while (((pbVar11 = pbVar27 + 1, pbVar14 = pbVar11, pCVar26 = param_1,
                          -1 < (char)bVar20 &&
                          (uVar5 = *(ushort *)((long)pvVar22 + (long)(char)bVar20 * 2),
                          (uVar5 & 0x10) != 0)) && ((uVar5 & 8) == 0))) {
                    bVar20 = pbVar27[2];
                    pbVar27 = pbVar11;
                  }
                  do {
                    pbVar16 = (byte *)eat_alpha_numeric(pCVar26,pbVar14);
                    bVar20 = *pbVar16;
                    pbVar27 = pbVar16;
                    while (-1 < (char)bVar20) {
                      uVar5 = *(ushort *)((long)pvVar22 + (long)(char)bVar20 * 2);
                      if (((uVar5 & 0x10) == 0) || ((uVar5 & 8) != 0)) {
                        if (bVar20 == 0x5d) {
                          *pbVar16 = 0;
                          iVar8 = str_copy(param_1,0,&local_100,pbVar11);
                          pbVar11 = local_100;
                          if (iVar8 == 0) goto LAB_00100dc7;
                          bVar7 = false;
                          local_128 = _CONF_get_section(param_1,(char *)local_100);
                          iVar8 = 0;
                          if ((local_128 != (CONF_VALUE *)0x0) ||
                             (local_128 = _CONF_new_section(param_1,(char *)pbVar11),
                             local_128 != (CONF_VALUE *)0x0)) goto LAB_00100d3b;
                          value = (CONF_VALUE *)0x0;
                          ERR_new();
                          ERR_set_debug("crypto/conf/conf_def.c",0x178,"def_load_bio");
                          ERR_set_error(0xe,0x67,0);
                          goto LAB_00100dd4;
                        }
                        break;
                      }
                      pbVar1 = pbVar27 + 1;
                      pbVar27 = pbVar27 + 1;
                      bVar20 = *pbVar1;
                    }
                  } while ((bVar20 != 0) && (bVar29 = pbVar27 != pbVar14, pbVar14 = pbVar27, bVar29)
                          );
                  ERR_new();
                  ERR_set_debug("crypto/conf/conf_def.c",0x16f,"def_load_bio");
                  uVar24 = 100;
                  goto LAB_00101977;
                }
              }
              pbVar14 = (byte *)eat_alpha_numeric(param_1,pbVar27);
              bVar20 = *pbVar14;
              local_110 = local_100;
              pbVar16 = pbVar14;
              pbVar11 = pbVar27;
              if (bVar20 == 0x3a) {
                if (pbVar14[1] != 0x3a) goto LAB_001010fa;
                *pbVar14 = 0;
                pbVar11 = pbVar14 + 2;
                pCVar26 = param_1;
                pbVar14 = (byte *)eat_alpha_numeric(param_1,pbVar11);
                pvVar22 = pCVar26->meth_data;
                bVar20 = *pbVar14;
                pbVar16 = pbVar14;
                local_110 = pbVar27;
              }
              while (pbVar27 = pbVar11, -1 < (char)bVar20) {
LAB_001010fa:
                uVar5 = *(ushort *)((long)pvVar22 + (long)(char)bVar20 * 2);
                if (((uVar5 & 0x10) == 0) || ((uVar5 & 8) != 0)) break;
                pbVar11 = pbVar14 + 1;
                pbVar14 = pbVar14 + 1;
                bVar20 = *pbVar11;
                pbVar11 = pbVar27;
              }
              iVar8 = strncmp((char *)pbVar27,".pragma",7);
              if (iVar8 == 0) {
                pbVar27 = pbVar27 + 7;
                if (pbVar14 == pbVar27) {
                  if (bVar20 != 0x3d) {
                    iVar8 = strncmp((char *)pbVar14,".include",8);
                    if (iVar8 != 0) goto LAB_001017f1;
                    goto LAB_001015ea;
                  }
LAB_00101a88:
                  bVar20 = pbVar14[1];
                  while (((pbVar14 = pbVar14 + 1, -1 < (char)bVar20 &&
                          (uVar5 = *(ushort *)((long)pvVar22 + (long)(char)bVar20 * 2),
                          (uVar5 & 0x10) != 0)) && ((uVar5 & 8) == 0))) {
                    bVar20 = pbVar14[1];
                  }
                }
                else if (bVar20 == 0x3d) goto LAB_00101a88;
                trim_ws_isra_0(pvVar22,pbVar14);
                pbVar11 = (byte *)strchr((char *)pbVar14,0x3a);
                if (((pbVar11 == (byte *)0x0) || (pbVar14 == pbVar11)) || (pbVar11[1] == 0)) {
                  ERR_new();
                  ERR_set_debug("crypto/conf/conf_def.c",0x196,"def_load_bio");
                  uVar24 = 0x7a;
                  goto LAB_00101977;
                }
                *pbVar11 = 0;
                pbVar27 = pbVar11;
                pCVar26 = param_1;
                trim_ws_isra_0(param_1->meth_data,pbVar14);
                bVar20 = pbVar27[1];
                while (((pbVar27 = pbVar11 + 1, -1 < (char)bVar20 &&
                        (uVar5 = *(ushort *)((long)pCVar26->meth_data + (long)(char)bVar20 * 2),
                        (uVar5 & 0x10) != 0)) && ((uVar5 & 8) == 0))) {
                  bVar20 = pbVar11[2];
                  pbVar11 = pbVar27;
                }
                iVar8 = strcmp((char *)pbVar14,"dollarid");
                if (iVar8 != 0) {
                  iVar8 = strcmp((char *)pbVar14,"abspath");
                  if (iVar8 == 0) {
                    iVar8 = parsebool(pbVar27,(undefined1 *)((long)&param_1[1].meth + 4));
                    if (iVar8 == 0) goto LAB_00100dc7;
                  }
                  else {
                    iVar8 = strcmp((char *)pbVar14,"includedir");
                    if (iVar8 == 0) {
                      CRYPTO_free(param_1[1].meth_data);
                      pcVar15 = CRYPTO_strdup((char *)pbVar27,"crypto/conf/conf_def.c",0x1ad);
                      param_1[1].meth_data = pcVar15;
                      if (pcVar15 == (char *)0x0) {
                        value = (CONF_VALUE *)0x0;
                        pbVar11 = local_100;
                        goto LAB_00100dd4;
                      }
                    }
                  }
                  bVar7 = false;
                  iVar8 = 0;
                  goto LAB_00100d3b;
                }
                iVar8 = parsebool(pbVar27,param_1 + 1);
                if (iVar8 == 0) {
LAB_00100dc7:
                  value = (CONF_VALUE *)0x0;
                  param_2 = pBVar13;
                  pbVar11 = local_100;
                  goto LAB_00100dd4;
                }
              }
              else {
                iVar8 = strncmp((char *)pbVar27,".include",8);
                if (iVar8 == 0) {
LAB_001015ea:
                  if ((pbVar14 == pbVar27 + 8) && (bVar20 != 0x3d)) {
LAB_001017f1:
                    ERR_new();
                    ERR_set_debug("crypto/conf/conf_def.c",0x20d,"def_load_bio");
                    ERR_set_error(0xe,0x65,"HERE-->%s",pbVar14);
                  }
                  else {
                    local_f0 = (char *)0x0;
                    auVar30 = ossl_safe_getenv("OPENSSL_CONF_INCLUDE");
                    uVar12 = auVar30._8_8_;
                    pcVar15 = auVar30._0_8_;
                    if (pcVar15 == (char *)0x0) {
                      pcVar15 = (char *)param_1[1].meth_data;
                    }
                    if (*pbVar14 == 0x3d) {
                      bVar20 = pbVar14[1];
                      while( true ) {
                        pbVar14 = pbVar14 + 1;
                        uVar12 = (ulong)(char)bVar20;
                        if ((char)bVar20 < '\0') break;
                        uVar5 = *(ushort *)((long)param_1->meth_data + uVar12 * 2);
                        uVar12 = (ulong)uVar5;
                        if (((uVar5 & 0x10) == 0) || (uVar12 = (ulong)(uVar5 & 8), (uVar5 & 8) != 0)
                           ) break;
                        bVar20 = pbVar14[1];
                      }
                    }
                    trim_ws_isra_0(param_1->meth_data,pbVar14,uVar12,pbVar14);
                    iVar8 = str_copy(param_1,local_110,&local_f0);
                    __s = local_f0;
                    if (iVar8 != 0) {
                      __s_00 = local_f0;
                      if ((pcVar15 != (char *)0x0) && (*local_f0 != '/')) {
                        sVar17 = strlen(pcVar15);
                        sVar18 = strlen(__s);
                        lVar2 = sVar17 + 2 + sVar18;
                        __s_00 = (char *)CRYPTO_malloc((int)lVar2,"crypto/conf/conf_def.c",0x1d8);
                        if (__s_00 == (char *)0x0) {
                          CRYPTO_free(__s);
                          goto LAB_0010182c;
                        }
                        OPENSSL_strlcpy(__s_00,pcVar15,lVar2);
                        if ((*__s_00 == '\0') ||
                           (sVar17 = strlen(__s_00), __s_00[sVar17 - 1] != '/')) {
                          OPENSSL_strlcat(__s_00,&_LC7,lVar2);
                        }
                        OPENSSL_strlcat(__s_00,__s,lVar2);
                        CRYPTO_free(__s);
                      }
                      if ((*(int *)((long)&param_1[1].meth + 4) == 0) || (*__s_00 == '/')) {
                        iVar8 = stat(__s_00,&local_e8);
                        if (iVar8 < 0) {
                          ERR_new();
                          ERR_set_debug("crypto/conf/conf_def.c",0x32d,"process_include");
                          piVar19 = __errno_location();
                          ERR_set_error(2,*piVar19,"calling stat(%s)",__s_00);
joined_r0x00101ca2:
                          if (__s_00 != pcVar28) {
                            CRYPTO_free(__s_00);
                          }
                        }
                        else if ((local_e8.st_mode & 0xf000) == 0x4000) {
                          if (local_f8 != 0) {
                            ERR_new();
                            ERR_set_debug("crypto/conf/conf_def.c",0x334,"process_include");
                            ERR_set_error(0xe,0x6f,&_LC19,__s_00);
                            goto joined_r0x00101ca2;
                          }
                          a = (BIO *)get_next_file(__s_00,&local_f8);
                          if (a != (BIO *)0x0) goto LAB_00101a09;
                          if (__s_00 != pcVar28) {
                            CRYPTO_free(__s_00);
                          }
                        }
                        else {
                          a = BIO_new_file(__s_00,"r");
                          if (__s_00 != pcVar28) {
                            CRYPTO_free(__s_00);
                          }
                          __s_00 = pcVar28;
                          if (a != (BIO *)0x0) {
LAB_00101a09:
                            pcVar28 = __s_00;
                            if ((local_168 == 0) &&
                               (local_168 = OPENSSL_sk_new_null(), local_168 == 0)) {
                              ERR_new();
                              uVar24 = 0x1fe;
                            }
                            else {
                              iVar8 = OPENSSL_sk_push(local_168,param_2);
                              pBVar13 = a;
                              if (iVar8 != 0) goto LAB_001017b0;
                              ERR_new();
                              uVar24 = 0x204;
                            }
                            ERR_set_debug("crypto/conf/conf_def.c",uVar24,"def_load_bio");
                            ERR_set_error(0xe,0x8000f,0);
                            BIO_free(a);
                            goto LAB_0010182c;
                          }
                        }
LAB_001017b0:
                        param_2 = pBVar13;
                        iVar8 = 0;
                        bVar7 = false;
                        goto LAB_00100d3b;
                      }
                      ERR_new();
                      ERR_set_debug("crypto/conf/conf_def.c",0x1e9,"def_load_bio");
                      ERR_set_error(0xe,0x7d,0);
                      CRYPTO_free(__s_00);
                    }
                  }
LAB_0010182c:
                  value = (CONF_VALUE *)0x0;
                  pbVar11 = local_100;
                  goto LAB_00100dd4;
                }
                if (bVar20 != 0x3d) goto LAB_001017f1;
                *pbVar16 = 0;
                bVar20 = pbVar14[1];
                while (((pbVar16 = pbVar14 + 1, -1 < (char)bVar20 &&
                        (uVar5 = *(ushort *)((long)param_1->meth_data + (long)(char)bVar20 * 2),
                        (uVar5 & 0x10) != 0)) && ((uVar5 & 8) == 0))) {
                  bVar20 = pbVar14[2];
                  pbVar14 = pbVar16;
                }
                trim_ws_isra_0(param_1->meth_data,pbVar16);
                value = (CONF_VALUE *)CRYPTO_malloc(0x18,"crypto/conf/conf_def.c",0x216);
                pbVar11 = local_100;
                if (value == (CONF_VALUE *)0x0) goto LAB_00100dd4;
                pcVar15 = CRYPTO_strdup((char *)pbVar27,"crypto/conf/conf_def.c",0x218);
                value->value = (char *)0x0;
                value->name = pcVar15;
                if ((pcVar15 == (char *)0x0) ||
                   (iVar8 = str_copy(param_1,local_110,&value->value,pbVar16), iVar8 == 0))
                goto LAB_00100dd4;
                iVar8 = strcmp((char *)local_110,(char *)pbVar11);
                section = local_128;
                if ((iVar8 != 0) &&
                   ((section = _CONF_get_section(param_1,(char *)local_110),
                    section == (CONF_VALUE *)0x0 &&
                    (section = _CONF_new_section(param_1,(char *)local_110),
                    section == (CONF_VALUE *)0x0)))) {
                  ERR_new();
                  ERR_set_debug("crypto/conf/conf_def.c",0x224,"def_load_bio");
                  ERR_set_error(0xe,0x67,0);
                  goto LAB_00100dd4;
                }
                iVar8 = _CONF_add_string(param_1,section,value);
                if (iVar8 == 0) {
                  ERR_new();
                  ERR_set_debug("crypto/conf/conf_def.c",0x22b,"def_load_bio");
                  ERR_set_error(0xe,0x8000e,0);
                  goto LAB_00100dd4;
                }
              }
LAB_001015da:
              iVar8 = 0;
              bVar7 = false;
            }
LAB_00100d3b:
            bVar29 = false;
            pBVar13 = param_2;
            pcVar15 = pcVar28;
          }
          ERR_new();
          ERR_set_debug("crypto/conf/conf_def.c",0x101,"def_load_bio");
          uVar24 = 0x80007;
LAB_00101977:
          value = (CONF_VALUE *)0x0;
          ERR_set_error(0xe,uVar24,0);
          pbVar11 = local_100;
          goto LAB_00100dd4;
        }
        ERR_new();
        ERR_set_debug("crypto/conf/conf_def.c",0xf9,"def_load_bio");
        ERR_set_error(0xe,0x67,0);
      }
      local_140 = 0;
      pcVar28 = (char *)0x0;
      local_168 = 0;
      value = (CONF_VALUE *)0x0;
      goto LAB_00100dd4;
    }
  }
  pbVar11 = (byte *)0x0;
  pcVar28 = (char *)0x0;
  local_168 = 0;
  local_140 = 0;
  value = (CONF_VALUE *)0x0;
LAB_00100dd4:
  BUF_MEM_free(str);
  CRYPTO_free(pbVar11);
  while (iVar8 = OPENSSL_sk_num(local_168), 0 < iVar8) {
    pBVar13 = (BIO *)OPENSSL_sk_pop(local_168);
    BIO_vfree(param_2);
    param_2 = pBVar13;
  }
  OPENSSL_sk_free();
  CRYPTO_free(pcVar28);
  if (local_f8 != 0) {
    OPENSSL_DIR_end(&local_f8);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = local_140;
  }
  BIO_snprintf((char *)&local_58,0x18,"%ld",local_140);
  ERR_add_error_data(2,"line ",&local_58);
  if (param_1->data != plVar6) {
    CONF_free(param_1->data);
    param_1->data = (lhash_st_CONF_VALUE *)0x0;
  }
  if (value != (CONF_VALUE *)0x0) {
    CRYPTO_free(value->name);
    CRYPTO_free(value->value);
    CRYPTO_free(value);
  }
  uVar24 = 0;
LAB_00100ef2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar24;
code_r0x001010bd:
  bVar3 = pbVar27[1];
  pbVar27 = pbVar27 + 1;
  goto joined_r0x001010a2;
}



undefined4 def_load(undefined8 param_1,char *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  BIO *a;
  ulong uVar3;
  
  a = BIO_new_file(param_2,"rb");
  if (a != (BIO *)0x0) {
    uVar1 = def_load_bio(param_1,a,param_3);
    BIO_free(a);
    return uVar1;
  }
  uVar3 = ERR_peek_last_error();
  uVar2 = (uint)uVar3 & 0x7fffffff;
  if ((uVar3 & 0x80000000) == 0) {
    uVar2 = (uint)uVar3 & 0x7fffff;
  }
  if (uVar2 == 0x80) {
    ERR_new();
    ERR_set_debug("crypto/conf/conf_def.c",0xb3,"def_load");
    ERR_set_error(0xe,0x72,0);
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/conf/conf_def.c",0xb5,"def_load");
    ERR_set_error(0xe,0x80002,0);
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CONF_METHOD * NCONF_default(void)

{
  return (CONF_METHOD *)default_method;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CONF_METHOD * NCONF_WIN32(void)

{
  return (CONF_METHOD *)WIN32_method;
}


