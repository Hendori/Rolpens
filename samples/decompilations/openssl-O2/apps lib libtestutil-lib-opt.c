
void opt_number_error(char *param_1)

{
  int iVar1;
  size_t __n;
  undefined **ppuVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined *local_58;
  char *apcStack_50 [6];
  long local_20;
  
  lVar3 = 0;
  ppuVar2 = &local_58;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &_LC1;
  apcStack_50[0] = "a hexadecimal";
  apcStack_50[1] = "0X";
  apcStack_50[2] = "a hexadecimal";
  apcStack_50[3] = "0";
  apcStack_50[4] = "an octal";
  iVar1 = strncmp(param_1,"0x",2);
  do {
    if (iVar1 == 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        opt_printf_stderr("%s: Can\'t parse \"%s\" as %s number\n",prog,param_1,
                          apcStack_50[lVar3 * 2]);
        return;
      }
LAB_00100120:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = lVar3 + 1;
    ppuVar2 = ppuVar2 + 2;
    if (lVar3 == 3) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        opt_printf_stderr("%s: Can\'t parse \"%s\" as a number\n",prog,param_1);
        return;
      }
      goto LAB_00100120;
    }
    __n = strlen(*ppuVar2);
    iVar1 = strncmp(param_1,*ppuVar2,__n);
  } while( true );
}



char * valtype2param_isra_0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 0x2d:
    return "";
  default:
    return "parm";
  case 0x2f:
    return "dir";
  case 0x3a:
    return "uri";
  case 0x3c:
    return "infile";
  case 0x3e:
    return "outfile";
  case 0x45:
    return "PEM|DER|ENGINE";
  case 0x46:
    return "PEM|DER";
  case 0x4d:
    return "intmax";
  case 0x4e:
    return "nonneg";
  case 0x55:
    return "uintmax";
  case 0x66:
    return "format";
  case 0x6c:
    return "long";
  case 0x6e:
    return "int";
  case 0x70:
    return "+int";
  case 0x73:
    return "val";
  case 0x75:
    return "ulong";
  }
}



char * opt_path_end(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  
  sVar1 = strlen(param_1);
  pcVar3 = param_1 + sVar1;
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + -1;
    if (pcVar3 <= param_1) {
      return pcVar3;
    }
  } while (*pcVar3 != '/');
  return pcVar2;
}



char * opt_progname(void)

{
  char *__src;
  undefined1 *puVar1;
  
  __src = (char *)opt_path_end();
  puVar1 = prog;
  if (__src != prog) {
    puVar1 = strncpy(prog,__src,0x27);
  }
  prog[0x27] = 0;
  return puVar1;
}



undefined1 * opt_appname(long param_1)

{
  size_t sVar1;
  
  if (param_1 != 0) {
    sVar1 = strlen(prog);
    BIO_snprintf(prog + sVar1,0x27 - sVar1," %s",param_1);
  }
  return prog;
}



undefined1 * opt_getprog(void)

{
  return prog;
}



void opt_set_unknown_name(undefined8 param_1)

{
  unknown_name = param_1;
  return;
}



undefined8 opt_format(char *param_1,ulong param_2,undefined4 *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  
  switch(*param_1) {
  case '1':
    uVar3 = 6;
    if ((param_2 & 0x10) != 0) {
LAB_00100380:
      *param_3 = uVar3;
      return 1;
    }
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
          opt_printf_stderr(&_LC24);
        }
        ppuVar1 = ppuVar4 + 2;
        ppuVar4 = ppuVar4 + 2;
      } while (*ppuVar1 != (undefined *)0x0);
    }
    break;
  default:
switchD_001002fc_caseD_32:
    opt_printf_stderr("%s: Bad format \"%s\"\n",prog,param_1);
    return 0;
  case 'B':
  case 'b':
    if ((((param_1[1] != '\0') && (iVar2 = strcmp(param_1,"B64"), iVar2 != 0)) &&
        (iVar2 = strcmp(param_1,"b64"), iVar2 != 0)) &&
       ((iVar2 = strcmp(param_1,"BASE64"), iVar2 != 0 &&
        (iVar2 = strcmp(param_1,"base64"), iVar2 != 0)))) {
      return 0;
    }
    uVar3 = 0x8003;
    if ((param_2 & 8) != 0) goto LAB_00100380;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
          opt_printf_stderr(&_LC24);
        }
        ppuVar1 = ppuVar4 + 2;
        ppuVar4 = ppuVar4 + 2;
      } while (*ppuVar1 != (undefined *)0x0);
    }
    break;
  case 'D':
  case 'd':
    uVar3 = 4;
    if ((param_2 & 4) != 0) goto LAB_00100380;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
          opt_printf_stderr(&_LC24);
        }
        ppuVar1 = ppuVar4 + 2;
        ppuVar4 = ppuVar4 + 2;
      } while (*ppuVar1 != (undefined *)0x0);
    }
    break;
  case 'E':
  case 'e':
    uVar3 = 8;
    if ((param_2 & 0x40) != 0) goto LAB_00100380;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
          opt_printf_stderr(&_LC24);
        }
        ppuVar1 = ppuVar4 + 2;
        ppuVar4 = ppuVar4 + 2;
      } while (*ppuVar1 != (undefined *)0x0);
    }
    break;
  case 'H':
  case 'h':
    uVar3 = 0xd;
    if ((param_2 & 0x400) != 0) goto LAB_00100380;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
          opt_printf_stderr(&_LC24);
        }
        ppuVar1 = ppuVar4 + 2;
        ppuVar4 = ppuVar4 + 2;
      } while (*ppuVar1 != (undefined *)0x0);
    }
    break;
  case 'M':
  case 'm':
    uVar3 = 0xb;
    if ((param_2 & 0x80) != 0) goto LAB_00100380;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
          opt_printf_stderr(&_LC24);
        }
        ppuVar1 = ppuVar4 + 2;
        ppuVar4 = ppuVar4 + 2;
      } while (*ppuVar1 != (undefined *)0x0);
    }
    break;
  case 'N':
  case 'n':
    if ((param_2 & 0x100) != 0) {
      iVar2 = strcmp(param_1,"NSS");
      if (iVar2 == 0) {
        uVar3 = 0xe;
      }
      else {
        iVar2 = strcmp(param_1,"nss");
        uVar3 = 0xe;
        if (iVar2 != 0) {
          opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
          if (formats != (undefined *)0x0) {
            ppuVar4 = &formats;
            do {
              if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
                opt_printf_stderr(&_LC24);
              }
              ppuVar1 = ppuVar4 + 2;
              ppuVar4 = ppuVar4 + 2;
            } while (*ppuVar1 != (undefined *)0x0);
          }
          break;
        }
      }
      goto LAB_00100380;
    }
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
          opt_printf_stderr(&_LC24);
        }
        ppuVar1 = ppuVar4 + 2;
        ppuVar4 = ppuVar4 + 2;
      } while (*ppuVar1 != (undefined *)0x0);
    }
    break;
  case 'P':
  case 'p':
    if (((param_1[1] == '\0') || (iVar2 = strcmp(param_1,"PEM"), iVar2 == 0)) ||
       (iVar2 = strcmp(param_1,"pem"), iVar2 == 0)) {
      uVar3 = 0x8005;
      if ((param_2 & 2) != 0) goto LAB_00100380;
      opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
      if (formats != (undefined *)0x0) {
        ppuVar4 = &formats;
        do {
          if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
            opt_printf_stderr(&_LC24);
          }
          ppuVar1 = ppuVar4 + 2;
          ppuVar4 = ppuVar4 + 2;
        } while (*ppuVar1 != (undefined *)0x0);
      }
    }
    else {
      iVar2 = strcmp(param_1,"PVK");
      if ((iVar2 == 0) || (iVar2 = strcmp(param_1,"pvk"), iVar2 == 0)) {
        uVar3 = 0xc;
        if ((param_2 & 0x800) != 0) goto LAB_00100380;
        opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
        if (formats != (undefined *)0x0) {
          ppuVar4 = &formats;
          do {
            if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
              opt_printf_stderr(&_LC24);
            }
            ppuVar1 = ppuVar4 + 2;
            ppuVar4 = ppuVar4 + 2;
          } while (*ppuVar1 != (undefined *)0x0);
        }
      }
      else {
        iVar2 = strcmp(param_1,"P12");
        if (((iVar2 != 0) && (iVar2 = strcmp(param_1,"p12"), iVar2 != 0)) &&
           ((iVar2 = strcmp(param_1,"PKCS12"), iVar2 != 0 &&
            (iVar2 = strcmp(param_1,"pkcs12"), iVar2 != 0)))) goto switchD_001002fc_caseD_32;
        uVar3 = 6;
        if ((param_2 & 0x10) != 0) goto LAB_00100380;
        opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
        if (formats != (undefined *)0x0) {
          ppuVar4 = &formats;
          do {
            if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
              opt_printf_stderr(&_LC24);
            }
            ppuVar1 = ppuVar4 + 2;
            ppuVar4 = ppuVar4 + 2;
          } while (*ppuVar1 != (undefined *)0x0);
        }
      }
    }
    break;
  case 'S':
  case 's':
    uVar3 = 0x8007;
    if ((param_2 & 0x20) != 0) goto LAB_00100380;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
          opt_printf_stderr(&_LC24);
        }
        ppuVar1 = ppuVar4 + 2;
        ppuVar4 = ppuVar4 + 2;
      } while (*ppuVar1 != (undefined *)0x0);
    }
    break;
  case 'T':
  case 't':
    uVar3 = 0x8001;
    if ((param_2 & 0x200) != 0) goto LAB_00100380;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        if (((long)*(int *)(ppuVar4 + 1) & param_2) != 0) {
          opt_printf_stderr(&_LC24);
        }
        ppuVar1 = ppuVar4 + 2;
        ppuVar4 = ppuVar4 + 2;
      } while (*ppuVar1 != (undefined *)0x0);
    }
  }
  opt_printf_stderr(&_LC31);
  return 0;
}



void print_format_error(int param_1,ulong param_2)

{
  undefined **ppuVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  if (param_1 < 0xf) {
    pcVar2 = "(undefined)";
    if (3 < param_1) {
      switch(param_1) {
      case 4:
        pcVar2 = "DER";
        break;
      default:
        pcVar2 = "(undefined)";
        break;
      case 6:
        pcVar2 = "P12";
        break;
      case 8:
        pcVar2 = "ENGINE";
        break;
      case 0xb:
        pcVar2 = "MSBLOB";
        break;
      case 0xc:
        pcVar2 = "PVK";
        break;
      case 0xd:
        pcVar2 = "HTTP";
        break;
      case 0xe:
        pcVar2 = "NSS";
      }
    }
  }
  else {
    pcVar2 = "PEM";
    if (((param_1 != 0x8005) && (pcVar2 = "SMIME", param_1 != 0x8007)) &&
       (pcVar2 = "(undefined)", param_1 == 0x8001)) {
      pcVar2 = "TEXT";
    }
  }
  opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,pcVar2);
  if (formats != (undefined *)0x0) {
    ppuVar3 = &formats;
    do {
      while (((long)*(int *)(ppuVar3 + 1) & param_2) != 0) {
        ppuVar3 = ppuVar3 + 2;
        opt_printf_stderr(&_LC24);
        if (*ppuVar3 == (undefined *)0x0) goto LAB_00100b44;
      }
      ppuVar1 = ppuVar3 + 2;
      ppuVar3 = ppuVar3 + 2;
    } while (*ppuVar1 != (undefined *)0x0);
  }
LAB_00100b44:
  opt_printf_stderr(&_LC31);
  return;
}



undefined8 opt_cipher_silent(char *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EVP_CIPHER *pEVar4;
  
  ERR_set_mark();
  uVar2 = app_get0_propq();
  uVar3 = app_get0_libctx();
  pEVar4 = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar3,param_1,uVar2);
  if (pEVar4 != (EVP_CIPHER *)0x0) {
LAB_00100c36:
    ERR_pop_to_mark();
    if (param_2 == (long *)0x0) {
      EVP_CIPHER_free(pEVar4);
    }
    else {
      EVP_CIPHER_free(*param_2);
      *param_2 = (long)pEVar4;
    }
    return 1;
  }
  iVar1 = opt_legacy_okay();
  if (iVar1 != 0) {
    pEVar4 = EVP_get_cipherbyname(param_1);
    if (pEVar4 != (EVP_CIPHER *)0x0) goto LAB_00100c36;
  }
  ERR_clear_last_mark();
  return 0;
}



int opt_cipher_any(long param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_1 != 0) {
    iVar1 = opt_cipher_silent();
    if (iVar1 == 0) {
      opt_printf_stderr("%s: Unknown option or cipher: %s\n",prog,param_1);
      return 0;
    }
  }
  return iVar1;
}



undefined8 opt_cipher(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (param_1 == 0) {
LAB_00100d90:
    uVar3 = 1;
  }
  else {
    iVar1 = opt_cipher_any(param_1,&local_28);
    if (iVar1 != 0) {
      iVar1 = EVP_CIPHER_get_mode(local_28);
      uVar2 = EVP_CIPHER_get_flags(local_28);
      if (iVar1 == 0x10001) {
        opt_printf_stderr("%s XTS ciphers not supported\n",prog);
      }
      else {
        if ((uVar2 & 0x200000) == 0) {
          if (param_2 != (undefined8 *)0x0) {
            *param_2 = local_28;
          }
          goto LAB_00100d90;
        }
        opt_printf_stderr("%s: AEAD ciphers not supported\n",prog);
      }
    }
    uVar3 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 opt_md_silent(char *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EVP_MD *pEVar4;
  
  ERR_set_mark();
  uVar2 = app_get0_propq();
  uVar3 = app_get0_libctx();
  pEVar4 = (EVP_MD *)EVP_MD_fetch(uVar3,param_1,uVar2);
  if (pEVar4 != (EVP_MD *)0x0) {
LAB_00100e16:
    ERR_pop_to_mark();
    if (param_2 == (long *)0x0) {
      EVP_MD_free(pEVar4);
    }
    else {
      EVP_MD_free(*param_2);
      *param_2 = (long)pEVar4;
    }
    return 1;
  }
  iVar1 = opt_legacy_okay();
  if (iVar1 != 0) {
    pEVar4 = EVP_get_digestbyname(param_1);
    if (pEVar4 != (EVP_MD *)0x0) goto LAB_00100e16;
  }
  ERR_clear_last_mark();
  return 0;
}



int opt_md(long param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_1 != 0) {
    iVar1 = opt_md_silent();
    if (iVar1 == 0) {
      opt_printf_stderr("%s: Unknown option or message digest: %s\n",prog,param_1);
      return 0;
    }
  }
  return iVar1;
}



bool opt_check_md(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = opt_md(param_1,0);
  if (iVar1 == 0) {
    ERR_clear_error();
  }
  return iVar1 != 0;
}



undefined8 opt_pair(char *param_1,long *param_2,undefined4 *param_3)

{
  char *__s1;
  long lVar1;
  int iVar2;
  long *plVar3;
  
  __s1 = (char *)*param_2;
  plVar3 = param_2;
  while( true ) {
    if (__s1 == (char *)0x0) {
      opt_printf_stderr("%s: Value must be one of:\n",prog);
      lVar1 = *param_2;
      while (lVar1 != 0) {
        param_2 = param_2 + 2;
        opt_printf_stderr(&_LC54);
        lVar1 = *param_2;
      }
      return 0;
    }
    iVar2 = strcmp(__s1,param_1);
    if (iVar2 == 0) break;
    __s1 = (char *)plVar3[2];
    plVar3 = plVar3 + 2;
  }
  *param_3 = (int)plVar3[1];
  return 1;
}



undefined8 opt_string(char *param_1,long *param_2)

{
  char *__s1;
  long lVar1;
  int iVar2;
  long *plVar3;
  
  __s1 = (char *)*param_2;
  plVar3 = param_2;
  while( true ) {
    if (__s1 == (char *)0x0) {
      opt_printf_stderr("%s: Value must be one of:\n",prog);
      lVar1 = *param_2;
      while (lVar1 != 0) {
        param_2 = param_2 + 1;
        opt_printf_stderr(&_LC54);
        lVar1 = *param_2;
      }
      return 0;
    }
    iVar2 = strcmp(__s1,param_1);
    if (iVar2 == 0) break;
    __s1 = (char *)plVar3[1];
    plVar3 = plVar3 + 1;
  }
  return 1;
}



undefined8 opt_long(char *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  *piVar2 = 0;
  lVar3 = strtol(param_1,&local_38,0);
  if ((*local_38 == '\0') && (local_38 != param_1)) {
    if (lVar3 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
      if ((lVar3 == 0) && (*piVar2 != 0)) goto LAB_001010c8;
    }
    else if (*piVar2 == 0x22) goto LAB_001010c8;
    *param_2 = lVar3;
    uVar4 = 1;
  }
  else {
LAB_001010c8:
    opt_number_error(param_1);
    uVar4 = 0;
  }
  *piVar2 = iVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 opt_int(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = opt_long(param_1,&local_28);
  if (iVar1 != 0) {
    uVar2 = 1;
    *param_2 = (int)local_28;
    if (local_28 == (int)local_28) goto LAB_00101140;
    opt_printf_stderr("%s: Value \"%s\" outside integer range\n",prog,param_1);
  }
  uVar2 = 0;
LAB_00101140:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 opt_int_arg(void)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0xffffffff;
  opt_int(arg,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 opt_intmax(char *param_1,intmax_t *param_2)

{
  int iVar1;
  int *piVar2;
  intmax_t iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  *piVar2 = 0;
  iVar3 = strtoimax(param_1,&local_38,0);
  if ((*local_38 == '\0') && (local_38 != param_1)) {
    if (iVar3 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
      if ((iVar3 == 0) && (*piVar2 != 0)) goto LAB_00101268;
    }
    else if (*piVar2 == 0x22) goto LAB_00101268;
    *param_2 = iVar3;
    uVar4 = 1;
  }
  else {
LAB_00101268:
    opt_number_error(param_1);
    uVar4 = 0;
  }
  *piVar2 = iVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 opt_uintmax(char *param_1,uintmax_t *param_2)

{
  int iVar1;
  int *piVar2;
  uintmax_t uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  *piVar2 = 0;
  uVar3 = strtoumax(param_1,&local_38,0);
  if ((*local_38 == '\0') && (local_38 != param_1)) {
    if (uVar3 == 0xffffffffffffffff) {
      if (*piVar2 == 0x22) goto LAB_00101338;
    }
    else if ((uVar3 == 0) && (*piVar2 != 0)) goto LAB_00101338;
    *param_2 = uVar3;
    uVar4 = 1;
  }
  else {
LAB_00101338:
    opt_number_error(param_1);
    uVar4 = 0;
  }
  *piVar2 = iVar1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 opt_ulong(char *param_1,ulong *param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  *piVar2 = 0;
  uVar3 = strtoul(param_1,&local_38,0);
  if ((*local_38 == '\0') && (local_38 != param_1)) {
    if (uVar3 == 0xffffffffffffffff) {
      if (*piVar2 == 0x22) goto LAB_001013e8;
    }
    else if ((uVar3 == 0) && (*piVar2 != 0)) goto LAB_001013e8;
    *param_2 = uVar3;
    uVar4 = 1;
  }
  else {
LAB_001013e8:
    opt_number_error(param_1);
    uVar4 = 0;
  }
  *piVar2 = iVar1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void opt_begin(void)

{
  opt_index = 1;
  arg = 0;
  flag = 0;
  return;
}



undefined1 * opt_init(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  
  argv = param_2;
  opt_begin();
  unknown = (undefined8 *)0x0;
  opts = param_3;
  opt_progname(*argv);
  pcVar2 = (char *)*param_3;
  bVar5 = pcVar2 != "-P" && pcVar2 != (char *)0x0;
  if (pcVar2 != "-P" && pcVar2 != (char *)0x0) {
    cVar6 = false;
    puVar4 = unknown;
    do {
      puVar3 = puVar4;
      bVar1 = (bool)cVar6;
      if (((pcVar2 != "-M" && pcVar2 != "-H") && (pcVar2 != _GLOBAL_OFFSET_TABLE_)) &&
         (*pcVar2 == '\0')) {
        if (unknown_name == 0) {
          if ((bool)cVar6 != false) {
            unknown = puVar4;
          }
          OPENSSL_die("assertion failed: unknown_name != NULL","apps/lib/opt.c",0xda);
        }
        else {
          if (puVar4 != (undefined8 *)0x0) goto LAB_00101559;
          puVar3 = param_3;
          bVar1 = bVar5;
          if ((*(int *)((long)param_3 + 0xc) == 0) || (*(int *)((long)param_3 + 0xc) == 0x2d))
          goto LAB_001014ef;
        }
        unknown = param_3;
        OPENSSL_die("assertion failed: unknown->valtype == 0 || unknown->valtype == \'-\'",
                    "apps/lib/opt.c",0xdd);
LAB_00101559:
        if (cVar6 != '\0') {
          unknown = puVar4;
        }
        OPENSSL_die("assertion failed: unknown == NULL","apps/lib/opt.c",0xdb);
        return arg;
      }
LAB_001014ef:
      cVar6 = bVar1;
      pcVar2 = (char *)param_3[3];
      param_3 = param_3 + 3;
    } while ((pcVar2 != (char *)0x0) && (puVar4 = puVar3, pcVar2 != "-P"));
    if ((bool)cVar6 != false) {
      unknown = puVar3;
    }
  }
  return prog;
}



undefined8 opt_arg(void)

{
  return arg;
}



ulong opt_verify(int param_1,X509_VERIFY_PARAM *param_2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  X509_VERIFY_PARAM *from;
  X509_PURPOSE *pXVar6;
  ASN1_OBJECT *policy;
  long in_FS_OFFSET;
  time_t local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (param_2 == (X509_VERIFY_PARAM *)0x0) {
LAB_00101a72:
    OPENSSL_die("assertion failed: vpm != NULL","apps/lib/opt.c",0x2cb);
    return flag;
  }
  if (param_1 < 0x7d1) {
    OPENSSL_die("assertion failed: opt > OPT_V__FIRST","apps/lib/opt.c",0x2cc);
    goto LAB_00101a72;
  }
  if (0x7ee < param_1) {
    OPENSSL_die("assertion failed: opt < OPT_V__LAST","apps/lib/opt.c",0x2cd);
    goto LAB_00101a55;
  }
  switch(param_1) {
  case 0x7d1:
    pcVar3 = (char *)opt_arg();
    policy = OBJ_txt2obj(pcVar3,0);
    if (policy == (ASN1_OBJECT *)0x0) {
      uVar4 = opt_arg();
      opt_printf_stderr("%s: Invalid Policy %s\n",prog,uVar4);
      uVar2 = 0;
    }
    else {
      iVar1 = X509_VERIFY_PARAM_add0_policy(param_2,policy);
      if (iVar1 != 0) break;
      ASN1_OBJECT_free(policy);
      uVar4 = opt_arg();
      opt_printf_stderr("%s: Internal error adding Policy %s\n",prog,uVar4);
      uVar2 = 0;
    }
    goto LAB_0010160d;
  case 0x7d2:
    pcVar3 = (char *)opt_arg();
    iVar1 = X509_PURPOSE_get_by_sname(pcVar3);
    if (iVar1 < 0) {
      uVar4 = opt_arg();
      opt_printf_stderr("%s: Invalid purpose %s\n",prog,uVar4);
      uVar2 = 0;
    }
    else {
      pXVar6 = X509_PURPOSE_get0(iVar1);
      iVar1 = X509_PURPOSE_get_id(pXVar6);
      iVar1 = X509_VERIFY_PARAM_set_purpose(param_2,iVar1);
      if (iVar1 != 0) break;
      uVar4 = opt_arg();
      opt_printf_stderr("%s: Internal error setting purpose %s\n",prog,uVar4);
      uVar2 = 0;
    }
    goto LAB_0010160d;
  case 0x7d3:
    pcVar3 = (char *)opt_arg();
    from = X509_VERIFY_PARAM_lookup(pcVar3);
    if (from != (X509_VERIFY_PARAM *)0x0) {
      X509_VERIFY_PARAM_set1(param_2,from);
      break;
    }
    uVar4 = opt_arg();
    opt_printf_stderr("%s: Invalid verify name %s\n",prog,uVar4);
    uVar2 = 0;
    goto LAB_0010160d;
  case 0x7d4:
    pcVar3 = (char *)opt_arg();
    lVar5 = strtol(pcVar3,(char **)0x0,10);
    if (-1 < (int)lVar5) {
      X509_VERIFY_PARAM_set_depth(param_2,(int)lVar5);
    }
    break;
  case 0x7d5:
    uVar4 = opt_arg();
    iVar1 = opt_intmax(uVar4,&local_28);
    if (iVar1 != 0) {
      X509_VERIFY_PARAM_set_time(param_2,local_28);
      break;
    }
    uVar2 = 0;
    goto LAB_0010160d;
  case 0x7d6:
    uVar4 = opt_arg();
    iVar1 = X509_VERIFY_PARAM_set1_host(param_2,uVar4,0);
    uVar2 = (ulong)(iVar1 != 0);
    goto LAB_0010160d;
  case 0x7d7:
    uVar4 = opt_arg();
    iVar1 = X509_VERIFY_PARAM_set1_email(param_2,uVar4,0);
    uVar2 = (ulong)(iVar1 != 0);
    goto LAB_0010160d;
  case 0x7d8:
    uVar4 = opt_arg();
    iVar1 = X509_VERIFY_PARAM_set1_ip_asc(param_2,uVar4);
    uVar2 = (ulong)(iVar1 != 0);
    goto LAB_0010160d;
  case 0x7d9:
    X509_VERIFY_PARAM_set_flags(param_2,0x10);
    break;
  case 0x7db:
    X509_VERIFY_PARAM_set_flags(param_2,4);
    break;
  case 0x7dc:
    X509_VERIFY_PARAM_set_flags(param_2,0xc);
    break;
  case 0x7dd:
    X509_VERIFY_PARAM_set_flags(param_2,0x80);
    break;
  case 0x7de:
    X509_VERIFY_PARAM_set_flags(param_2,0x100);
    break;
  case 0x7df:
    X509_VERIFY_PARAM_set_flags(param_2,0x200);
    break;
  case 0x7e0:
    X509_VERIFY_PARAM_set_flags(param_2,0x400);
    break;
  case 0x7e1:
    X509_VERIFY_PARAM_set_flags(param_2,0x20);
    break;
  case 0x7e2:
    X509_VERIFY_PARAM_set_flags(param_2,0x1000);
    break;
  case 0x7e3:
    X509_VERIFY_PARAM_set_flags(param_2,0x2000);
    break;
  case 0x7e4:
    X509_VERIFY_PARAM_set_flags(param_2,0x800);
    break;
  case 0x7e5:
    X509_VERIFY_PARAM_set_flags(param_2,0x4000);
    break;
  case 0x7e6:
    X509_VERIFY_PARAM_set_flags(param_2,0x8000);
    break;
  case 0x7e7:
    X509_VERIFY_PARAM_set_flags(param_2,0x10000);
    break;
  case 0x7e8:
    X509_VERIFY_PARAM_set_flags(param_2,0x30000);
    break;
  case 0x7e9:
    X509_VERIFY_PARAM_set_flags(param_2,0x20000);
    break;
  case 0x7ea:
    X509_VERIFY_PARAM_set_flags(param_2,0x80000);
    break;
  case 0x7eb:
    X509_VERIFY_PARAM_set_flags(param_2,0x100000);
    break;
  case 0x7ec:
    X509_VERIFY_PARAM_set_flags(param_2,0x200000);
    break;
  case 0x7ed:
    pcVar3 = (char *)opt_arg();
    uVar2 = strtol(pcVar3,(char **)0x0,10);
    if (-1 < (int)uVar2) {
      X509_VERIFY_PARAM_set_auth_level(param_2,uVar2 & 0xffffffff);
    }
    break;
  case 0x7ee:
    X509_VERIFY_PARAM_set_flags(param_2,0x40);
  }
  uVar2 = 1;
LAB_0010160d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00101a55:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 opt_flag(void)

{
  return flag;
}



undefined8 opt_unknown(void)

{
  return dunno;
}



void reset_unknown(void)

{
  dunno = 0;
  return;
}



long opt_rest(void)

{
  return argv + (long)opt_index * 8;
}



int opt_num_rest(void)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  
  plVar2 = (long *)opt_rest();
  iVar3 = 0;
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    plVar2 = plVar2 + 1;
    iVar3 = iVar3 + 1;
    lVar1 = *plVar2;
  }
  return iVar3;
}



undefined8 opt_check_rest_arg(long param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)opt_rest();
  pcVar1 = (char *)*puVar2;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    uVar3 = 1;
    if (param_1 != 0) {
      opt_printf_stderr("%s: Missing argument: %s\n",prog,param_1);
      uVar3 = 0;
    }
  }
  else if (param_1 == 0) {
    lVar4 = opt_unknown();
    if (lVar4 == 0) {
      opt_printf_stderr("%s: Extra option: \"%s\"\n",prog,pcVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = opt_unknown();
      opt_printf_stderr("%s: Extra (unknown) options: \"%s\" \"%s\"\n",prog,uVar3,pcVar1);
      uVar3 = 0;
    }
  }
  else {
    pcVar1 = *(char **)(argv + 8 + (long)opt_index * 8);
    uVar3 = 1;
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      opt_printf_stderr("%s: Extra argument after %s: \"%s\"\n",prog,param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void opt_help(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  size_t sVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 *puVar11;
  int iVar12;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  long local_40;
  
  pcVar10 = (char *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pcVar10 == (char *)0x0) {
    iVar12 = 5;
LAB_00101e56:
    opt_printf_stderr("Usage: %s [options]\n",prog);
    pcVar10 = (char *)*param_1;
    if (pcVar10 != _GLOBAL_OFFSET_TABLE_) {
      opt_printf_stderr("Valid options are:\n",prog);
      pcVar10 = (char *)*param_1;
      if (pcVar10 == (char *)0x0) goto LAB_00101e26;
    }
  }
  else {
    iVar12 = 5;
    pcVar5 = pcVar10;
    puVar11 = param_1;
    do {
      if (pcVar5 != "-M") {
        sVar4 = strlen(pcVar5);
        iVar8 = (int)sVar4 + 2;
        if (*(int *)((long)puVar11 + 0xc) != 0x2d) {
          pcVar5 = (char *)valtype2param_isra_0();
          sVar6 = strlen(pcVar5);
          iVar8 = (int)sVar4 + 3 + (int)sVar6;
        }
        if (iVar12 < iVar8) {
          iVar12 = iVar8;
        }
      }
      pcVar5 = (char *)puVar11[3];
      puVar11 = puVar11 + 3;
    } while (pcVar5 != (char *)0x0);
    if (0x1e < iVar12) {
      iVar12 = 0x1e;
    }
    if (pcVar10 != "-H") goto LAB_00101e56;
  }
  bVar1 = false;
  do {
    pcVar5 = (char *)param_1[2];
    if (pcVar10 == "-P") {
      bVar1 = true;
    }
    if (pcVar5 == (char *)0x0) {
      pcVar5 = "(No additional info)";
    }
    if (pcVar10 == "-H") {
LAB_00101f0e:
      opt_printf_stderr(pcVar5,prog);
    }
    else {
      if (pcVar10 == _GLOBAL_OFFSET_TABLE_) {
        opt_printf_stderr(&_LC31);
        goto LAB_00101f0e;
      }
      if (pcVar10 == "-P") {
        opt_printf_stderr("\nParameters:\n");
      }
      else {
        local_48 = 0;
        iVar8 = iVar12;
        local_98 = __LC78;
        uStack_90 = _UNK_00103088;
        local_88 = __LC78;
        uStack_80 = _UNK_00103088;
        local_78 = __LC78;
        uStack_70 = _UNK_00103088;
        local_68 = __LC78;
        uStack_60 = _UNK_00103088;
        local_58 = __LC78;
        uStack_50 = _UNK_00103088;
        if (pcVar10 != PTR_OPT_MORE_STR_00105008) {
          puVar9 = &_LC73;
          if (bVar1) {
            puVar9 = &_LC7;
          }
          iVar2 = opt_printf_stderr(&_LC24,puVar9);
          pcVar10 = (char *)*param_1;
          if (iVar2 < 1) {
            iVar2 = 0x1e;
          }
          if (*pcVar10 == '\0') {
            pcVar10 = "*";
          }
          iVar3 = opt_printf_stderr(&_LC80,pcVar10);
          if (iVar3 < 1) {
            iVar2 = iVar2 + 0x1e;
            if (*(int *)((long)param_1 + 0xc) != 0x2d) goto LAB_00101db3;
          }
          else {
            iVar2 = iVar2 + iVar3;
            if (*(int *)((long)param_1 + 0xc) != 0x2d) {
LAB_00101db3:
              uVar7 = valtype2param_isra_0();
              iVar3 = opt_printf_stderr(&_LC24,uVar7);
              if (iVar3 < 1) goto LAB_00101eb7;
              iVar2 = iVar2 + iVar3;
            }
            iVar3 = 0x1d;
            if (iVar12 < 0x1e) {
              iVar3 = iVar12;
            }
            if (iVar2 <= iVar3) {
              iVar8 = iVar12 - iVar2;
              goto LAB_00101df2;
            }
          }
LAB_00101eb7:
          opt_printf_stderr(&_LC80,&_LC31);
          local_98 = __LC78;
          uStack_90 = _UNK_00103088;
          local_48 = 0x20;
          local_88 = local_98;
          uStack_80 = uStack_90;
          local_78 = local_98;
          uStack_70 = uStack_90;
          local_68 = local_98;
          uStack_60 = uStack_90;
          local_58 = local_98;
          uStack_50 = uStack_90;
        }
LAB_00101df2:
        *(undefined1 *)((long)&local_98 + (long)iVar8) = 0;
        opt_printf_stderr("%s  %s\n",&local_98,pcVar5);
      }
    }
    pcVar10 = (char *)param_1[3];
    param_1 = param_1 + 3;
  } while (pcVar10 != (char *)0x0);
LAB_00101e26:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



ulong opt_isdir(char *param_1)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  stat sStack_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = stat(param_1,&sStack_a8);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = (ulong)((sStack_a8.st_mode & 0xf000) == 0x4000);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 opt_next(void)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  byte *__s;
  long *plVar10;
  uint uVar11;
  long in_FS_OFFSET;
  int local_64;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  long local_40;
  
  lVar3 = argv;
  iVar6 = opt_index;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = (long)opt_index;
  arg = (char *)0x0;
  pbVar1 = *(byte **)(argv + lVar7 * 8);
  if (((pbVar1 == (byte *)0x0) || (*pbVar1 != 0x2d)) ||
     ((opt_index = opt_index + 1, pbVar1[1] == 0x2d && (pbVar1[2] == 0)))) {
    uVar4 = 0;
  }
  else {
    flag = pbVar1;
    __s = pbVar1 + 1;
    if (pbVar1[1] == 0x2d) {
      __s = pbVar1 + 2;
      flag = pbVar1 + 1;
    }
    pcVar8 = strchr((char *)__s,0x3d);
    if (pcVar8 == (char *)0x0) {
      arg = (char *)0x0;
    }
    else {
      arg = pcVar8 + 1;
      *pcVar8 = '\0';
    }
    pcVar8 = (char *)*opts;
    if (pcVar8 != (char *)0x0) {
      uVar11 = *__s - 0x68;
      plVar10 = opts;
      if (uVar11 != 0) goto LAB_001020cd;
      uVar11 = (uint)__s[1];
      do {
        if ((uVar11 == 0) && (iVar5 = strcmp(pcVar8,"help"), iVar5 == 0)) {
LAB_001020dc:
          iVar5 = *(int *)((long)plVar10 + 0xc);
          if ((iVar5 == 0) || (iVar5 == 0x2d)) {
            if (arg == (char *)0x0) goto switchD_0010210f_caseD_30;
            opt_printf_stderr("%s: Option -%s does not take a value\n",prog,__s);
            goto LAB_001021f6;
          }
          if (arg == (char *)0x0) {
            pcVar2 = *(char **)(lVar3 + 8 + lVar7 * 8);
            if (pcVar2 == (char *)0x0) {
              opt_printf_stderr("%s: Option -%s needs a value\n",prog,pcVar8);
              goto LAB_001021f6;
            }
            opt_index = iVar6 + 2;
            arg = pcVar2;
          }
          switch(iVar5) {
          case 0x2f:
            iVar6 = opt_isdir(arg);
            if (iVar6 < 1) {
              opt_printf_stderr("%s: Not a directory: %s\n",prog,arg);
              goto LAB_001021f6;
            }
            break;
          case 0x41:
          case 0x45:
          case 0x46:
          case 0x61:
          case 99:
          case 0x66:
            if (iVar5 == 0x46) {
              uVar9 = 6;
            }
            else if (iVar5 < 0x47) {
              uVar9 = 0xe;
              if (iVar5 != 0x41) {
                uVar9 = 0x46;
              }
            }
            else {
              uVar9 = 0x26;
              if (iVar5 != 99) {
                uVar9 = 0xffe;
              }
            }
            iVar6 = opt_format(arg,uVar9,&local_64);
            if (iVar6 == 0) {
              opt_printf_stderr("%s: Invalid format \"%s\" for option -%s\n",prog,arg,*plVar10);
              goto LAB_001021f6;
            }
            break;
          case 0x4d:
            iVar6 = opt_intmax(arg,local_50);
            goto joined_r0x001022f3;
          case 0x4e:
          case 0x6e:
          case 0x70:
            iVar6 = opt_int(arg,&local_64);
            if (iVar6 == 0) goto LAB_001021f6;
            if (*(int *)((long)plVar10 + 0xc) == 0x70) {
              if (local_64 < 1) {
                opt_printf_stderr("%s: Non-positive number \"%s\" for option -%s\n",prog,arg,
                                  *plVar10);
                goto LAB_001021f6;
              }
            }
            else if ((*(int *)((long)plVar10 + 0xc) == 0x4e) && (local_64 < 0)) {
              opt_printf_stderr("%s: Negative number \"%s\" for option -%s\n",prog,arg,*plVar10);
              goto LAB_001021f6;
            }
            break;
          case 0x55:
            iVar6 = opt_uintmax(arg,local_48);
            goto joined_r0x001022f3;
          case 0x6c:
            iVar6 = opt_long(arg,local_60);
            goto joined_r0x001022f3;
          case 0x75:
            iVar6 = opt_ulong(arg,local_58);
joined_r0x001022f3:
            if (iVar6 == 0) goto LAB_001021f6;
          }
switchD_0010210f_caseD_30:
          uVar4 = (undefined4)plVar10[1];
          goto LAB_0010201c;
        }
LAB_001020cd:
        iVar5 = strcmp((char *)__s,pcVar8);
        if (iVar5 == 0) goto LAB_001020dc;
        pcVar8 = (char *)plVar10[3];
        plVar10 = plVar10 + 3;
      } while (pcVar8 != (char *)0x0);
    }
    if (unknown == 0) {
      opt_printf_stderr("%s: Unknown option: -%s\n",prog,__s);
    }
    else {
      if (dunno == (byte *)0x0) {
        uVar4 = *(undefined4 *)(unknown + 8);
        dunno = __s;
        goto LAB_0010201c;
      }
      opt_printf_stderr("%s: Multiple %s or unknown options: -%s and -%s\n",prog,unknown_name,dunno,
                        __s);
    }
LAB_001021f6:
    uVar4 = 0xffffffff;
  }
LAB_0010201c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


