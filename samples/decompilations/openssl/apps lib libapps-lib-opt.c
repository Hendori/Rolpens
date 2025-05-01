
void opt_number_error(char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  char *apcStack_40 [6];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  apcStack_40[0] = "a hexadecimal";
  apcStack_40[1] = "0X";
  apcStack_40[2] = "a hexadecimal";
  apcStack_40[3] = "0";
  apcStack_40[4] = "an octal";
  if (*param_1 == '0') {
    if (param_1[1] == 'x') {
      lVar1 = 0;
    }
    else {
      if (param_1[1] != 'X') goto LAB_00100084;
      lVar1 = 1;
    }
  }
  else {
LAB_00100084:
    lVar1 = 2;
    if (*param_1 != '0') {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        opt_printf_stderr("%s: Can\'t parse \"%s\" as a number\n",prog);
        return;
      }
      goto LAB_001000ff;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    opt_printf_stderr("%s: Can\'t parse \"%s\" as %s number\n",prog,param_1,apcStack_40[lVar1 * 2]);
    return;
  }
LAB_001000ff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00100360:
      *param_3 = uVar3;
      return 1;
    }
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
          ppuVar1 = ppuVar4 + 2;
          ppuVar4 = ppuVar4 + 2;
          if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
        }
        ppuVar4 = ppuVar4 + 2;
        opt_printf_stderr(&_LC24);
      } while (*ppuVar4 != (undefined *)0x0);
    }
    break;
  default:
switchD_001002dc_caseD_32:
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
    if ((param_2 & 8) != 0) goto LAB_00100360;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
          ppuVar1 = ppuVar4 + 2;
          ppuVar4 = ppuVar4 + 2;
          if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
        }
        ppuVar4 = ppuVar4 + 2;
        opt_printf_stderr(&_LC24);
      } while (*ppuVar4 != (undefined *)0x0);
    }
    break;
  case 'D':
  case 'd':
    uVar3 = 4;
    if ((param_2 & 4) != 0) goto LAB_00100360;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
          ppuVar1 = ppuVar4 + 2;
          ppuVar4 = ppuVar4 + 2;
          if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
        }
        ppuVar4 = ppuVar4 + 2;
        opt_printf_stderr(&_LC24);
      } while (*ppuVar4 != (undefined *)0x0);
    }
    break;
  case 'E':
  case 'e':
    uVar3 = 8;
    if ((param_2 & 0x40) != 0) goto LAB_00100360;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
          ppuVar1 = ppuVar4 + 2;
          ppuVar4 = ppuVar4 + 2;
          if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
        }
        ppuVar4 = ppuVar4 + 2;
        opt_printf_stderr(&_LC24);
      } while (*ppuVar4 != (undefined *)0x0);
    }
    break;
  case 'H':
  case 'h':
    uVar3 = 0xd;
    if ((param_2 & 0x400) != 0) goto LAB_00100360;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
          ppuVar1 = ppuVar4 + 2;
          ppuVar4 = ppuVar4 + 2;
          if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
        }
        ppuVar4 = ppuVar4 + 2;
        opt_printf_stderr(&_LC24);
      } while (*ppuVar4 != (undefined *)0x0);
    }
    break;
  case 'M':
  case 'm':
    uVar3 = 0xb;
    if ((param_2 & 0x80) != 0) goto LAB_00100360;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
          ppuVar1 = ppuVar4 + 2;
          ppuVar4 = ppuVar4 + 2;
          if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
        }
        ppuVar4 = ppuVar4 + 2;
        opt_printf_stderr(&_LC24);
      } while (*ppuVar4 != (undefined *)0x0);
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
              while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
                ppuVar1 = ppuVar4 + 2;
                ppuVar4 = ppuVar4 + 2;
                if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
              }
              ppuVar4 = ppuVar4 + 2;
              opt_printf_stderr(&_LC24);
            } while (*ppuVar4 != (undefined *)0x0);
          }
          break;
        }
      }
      goto LAB_00100360;
    }
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
          ppuVar1 = ppuVar4 + 2;
          ppuVar4 = ppuVar4 + 2;
          if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
        }
        ppuVar4 = ppuVar4 + 2;
        opt_printf_stderr(&_LC24);
      } while (*ppuVar4 != (undefined *)0x0);
    }
    break;
  case 'P':
  case 'p':
    if (((param_1[1] == '\0') || (iVar2 = strcmp(param_1,"PEM"), iVar2 == 0)) ||
       (iVar2 = strcmp(param_1,"pem"), iVar2 == 0)) {
      uVar3 = 0x8005;
      if ((param_2 & 2) != 0) goto LAB_00100360;
      opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
      if (formats != (undefined *)0x0) {
        ppuVar4 = &formats;
        do {
          while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
            ppuVar1 = ppuVar4 + 2;
            ppuVar4 = ppuVar4 + 2;
            if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
          }
          ppuVar4 = ppuVar4 + 2;
          opt_printf_stderr(&_LC24);
        } while (*ppuVar4 != (undefined *)0x0);
      }
    }
    else {
      iVar2 = strcmp(param_1,"PVK");
      if ((iVar2 == 0) || (iVar2 = strcmp(param_1,"pvk"), iVar2 == 0)) {
        uVar3 = 0xc;
        if ((param_2 & 0x800) != 0) goto LAB_00100360;
        opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
        if (formats != (undefined *)0x0) {
          ppuVar4 = &formats;
          do {
            while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
              ppuVar1 = ppuVar4 + 2;
              ppuVar4 = ppuVar4 + 2;
              if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
            }
            ppuVar4 = ppuVar4 + 2;
            opt_printf_stderr(&_LC24);
          } while (*ppuVar4 != (undefined *)0x0);
        }
      }
      else {
        iVar2 = strcmp(param_1,"P12");
        if (((iVar2 != 0) && (iVar2 = strcmp(param_1,"p12"), iVar2 != 0)) &&
           ((iVar2 = strcmp(param_1,"PKCS12"), iVar2 != 0 &&
            (iVar2 = strcmp(param_1,"pkcs12"), iVar2 != 0)))) goto switchD_001002dc_caseD_32;
        uVar3 = 6;
        if ((param_2 & 0x10) != 0) goto LAB_00100360;
        opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
        if (formats != (undefined *)0x0) {
          ppuVar4 = &formats;
          do {
            while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
              ppuVar1 = ppuVar4 + 2;
              ppuVar4 = ppuVar4 + 2;
              if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
            }
            ppuVar4 = ppuVar4 + 2;
            opt_printf_stderr(&_LC24);
          } while (*ppuVar4 != (undefined *)0x0);
        }
      }
    }
    break;
  case 'S':
  case 's':
    uVar3 = 0x8007;
    if ((param_2 & 0x20) != 0) goto LAB_00100360;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
          ppuVar1 = ppuVar4 + 2;
          ppuVar4 = ppuVar4 + 2;
          if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
        }
        ppuVar4 = ppuVar4 + 2;
        opt_printf_stderr(&_LC24);
      } while (*ppuVar4 != (undefined *)0x0);
    }
    break;
  case 'T':
  case 't':
    uVar3 = 0x8001;
    if ((param_2 & 0x200) != 0) goto LAB_00100360;
    opt_printf_stderr("%s: Bad format \"%s\"; must be one of: ",prog,param_1);
    if (formats != (undefined *)0x0) {
      ppuVar4 = &formats;
      do {
        while (((long)*(int *)(ppuVar4 + 1) & param_2) == 0) {
          ppuVar1 = ppuVar4 + 2;
          ppuVar4 = ppuVar4 + 2;
          if (*ppuVar1 == (undefined *)0x0) goto LAB_001003d0;
        }
        ppuVar4 = ppuVar4 + 2;
        opt_printf_stderr(&_LC24);
      } while (*ppuVar4 != (undefined *)0x0);
    }
  }
LAB_001003d0:
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
      while (((long)*(int *)(ppuVar3 + 1) & param_2) == 0) {
        ppuVar1 = ppuVar3 + 2;
        ppuVar3 = ppuVar3 + 2;
        if (*ppuVar1 == (undefined *)0x0) goto LAB_00100c16;
      }
      ppuVar3 = ppuVar3 + 2;
      opt_printf_stderr(&_LC24);
    } while (*ppuVar3 != (undefined *)0x0);
  }
LAB_00100c16:
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
LAB_00100d26:
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
    if (pEVar4 != (EVP_CIPHER *)0x0) goto LAB_00100d26;
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
LAB_00100e80:
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
          goto LAB_00100e80;
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
LAB_00100f06:
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
    if (pEVar4 != (EVP_MD *)0x0) goto LAB_00100f06;
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
      if ((lVar3 == 0) && (*piVar2 != 0)) goto LAB_001011b8;
    }
    else if (*piVar2 == 0x22) goto LAB_001011b8;
    *param_2 = lVar3;
    uVar4 = 1;
  }
  else {
LAB_001011b8:
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
    if (local_28 == (int)local_28) goto LAB_00101230;
    opt_printf_stderr("%s: Value \"%s\" outside integer range\n",prog,param_1);
  }
  uVar2 = 0;
LAB_00101230:
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
      if ((iVar3 == 0) && (*piVar2 != 0)) goto LAB_00101358;
    }
    else if (*piVar2 == 0x22) goto LAB_00101358;
    *param_2 = iVar3;
    uVar4 = 1;
  }
  else {
LAB_00101358:
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
      if (*piVar2 == 0x22) goto LAB_00101428;
    }
    else if ((uVar3 == 0) && (*piVar2 != 0)) goto LAB_00101428;
    *param_2 = uVar3;
    uVar4 = 1;
  }
  else {
LAB_00101428:
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
      if (*piVar2 == 0x22) goto LAB_001014d8;
    }
    else if ((uVar3 == 0) && (*piVar2 != 0)) goto LAB_001014d8;
    *param_2 = uVar3;
    uVar4 = 1;
  }
  else {
LAB_001014d8:
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
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  
  argv = param_2;
  opt_begin();
  unknown = (undefined8 *)0x0;
  opts = param_3;
  opt_progname(*argv);
  pcVar3 = (char *)*param_3;
  pcVar4 = "-P";
  bVar1 = pcVar3 != "-P" && pcVar3 != (char *)0x0;
  if (pcVar3 != "-P" && pcVar3 != (char *)0x0) {
    if (unknown_name == 0) {
LAB_0010163f:
      pcVar6 = "-H";
      pcVar5 = "-M";
      do {
        if (((pcVar3 != pcVar5 && pcVar3 != pcVar6) && (pcVar3 != _GLOBAL_OFFSET_TABLE_)) &&
           (*pcVar3 == '\0')) {
          pcVar4 = "apps/lib/opt.c";
          pcVar5 = "assertion failed: unknown_name != NULL";
          OPENSSL_die("assertion failed: unknown_name != NULL","apps/lib/opt.c",0xda);
        }
        pcVar3 = (char *)param_3[3];
        param_3 = param_3 + 3;
      } while ((pcVar3 != (char *)0x0) && (pcVar3 != pcVar4));
    }
    else {
      bVar2 = false;
      puVar7 = unknown;
      do {
        if (((pcVar3 != "-H" && pcVar3 != "-M") && (pcVar3 != _GLOBAL_OFFSET_TABLE_)) &&
           (*pcVar3 == '\0')) {
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = param_3;
            bVar2 = bVar1;
            if ((*(int *)((long)param_3 + 0xc) == 0x2d) || (*(int *)((long)param_3 + 0xc) == 0))
            goto LAB_001015da;
          }
          else {
            if (bVar2) {
              unknown = puVar7;
            }
            OPENSSL_die("assertion failed: unknown == NULL","apps/lib/opt.c",0xdb);
          }
          pcVar4 = "apps/lib/opt.c";
          unknown = param_3;
          pcVar3 = (char *)OPENSSL_die("assertion failed: unknown->valtype == 0 || unknown->valtype == \'-\'"
                                       ,"apps/lib/opt.c",0xdd);
          goto LAB_0010163f;
        }
LAB_001015da:
        pcVar3 = (char *)param_3[3];
        param_3 = param_3 + 3;
      } while ((pcVar3 != "-P") && (pcVar3 != (char *)0x0));
      if (bVar2) {
        unknown = puVar7;
      }
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
LAB_00101b92:
    OPENSSL_die("assertion failed: vpm != NULL","apps/lib/opt.c",0x2cb);
    return flag;
  }
  if (param_1 < 0x7d1) {
    OPENSSL_die("assertion failed: opt > OPT_V__FIRST","apps/lib/opt.c",0x2cc);
    goto LAB_00101b92;
  }
  if (0x7ee < param_1) {
    OPENSSL_die("assertion failed: opt < OPT_V__LAST","apps/lib/opt.c",0x2cd);
    goto LAB_00101b75;
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
    goto LAB_0010172d;
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
    goto LAB_0010172d;
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
    goto LAB_0010172d;
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
    goto LAB_0010172d;
  case 0x7d6:
    uVar4 = opt_arg();
    iVar1 = X509_VERIFY_PARAM_set1_host(param_2,uVar4,0);
    uVar2 = (ulong)(iVar1 != 0);
    goto LAB_0010172d;
  case 0x7d7:
    uVar4 = opt_arg();
    iVar1 = X509_VERIFY_PARAM_set1_email(param_2,uVar4,0);
    uVar2 = (ulong)(iVar1 != 0);
    goto LAB_0010172d;
  case 0x7d8:
    uVar4 = opt_arg();
    iVar1 = X509_VERIFY_PARAM_set1_ip_asc(param_2,uVar4);
    uVar2 = (ulong)(iVar1 != 0);
    goto LAB_0010172d;
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
LAB_0010172d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00101b75:
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
  size_t sVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  int iVar11;
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
  
  pcVar9 = (char *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pcVar9 == (char *)0x0) {
    iVar11 = 5;
LAB_00101f9e:
    opt_printf_stderr("Usage: %s [options]\n",prog);
    pcVar9 = (char *)*param_1;
    if (pcVar9 != _GLOBAL_OFFSET_TABLE_) {
      opt_printf_stderr("Valid options are:\n",prog);
      pcVar9 = (char *)*param_1;
      if (pcVar9 == (char *)0x0) goto LAB_00101fe3;
    }
  }
  else {
    iVar11 = 5;
    pcVar4 = pcVar9;
    puVar10 = param_1;
    do {
      if (pcVar4 != "-M") {
        sVar3 = strlen(pcVar4);
        iVar7 = (int)sVar3 + 2;
        if (*(int *)((long)puVar10 + 0xc) != 0x2d) {
          pcVar4 = (char *)valtype2param_isra_0();
          sVar5 = strlen(pcVar4);
          iVar7 = (int)sVar3 + 3 + (int)sVar5;
        }
        if (iVar11 < iVar7) {
          iVar11 = iVar7;
        }
      }
      pcVar4 = (char *)puVar10[3];
      puVar10 = puVar10 + 3;
    } while (pcVar4 != (char *)0x0);
    if (0x1e < iVar11) {
      iVar11 = 0x1e;
    }
    if (pcVar9 != "-H") goto LAB_00101f9e;
  }
  bVar1 = false;
  do {
    pcVar4 = (char *)param_1[2];
    if (pcVar9 == "-P") {
      bVar1 = true;
    }
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "(No additional info)";
    }
    if (pcVar9 == "-H") {
LAB_0010201e:
      opt_printf_stderr(pcVar4,prog);
    }
    else {
      if (pcVar9 == _GLOBAL_OFFSET_TABLE_) {
        opt_printf_stderr(&_LC31);
        goto LAB_0010201e;
      }
      if (pcVar9 == "-P") {
        opt_printf_stderr("\nParameters:\n");
      }
      else {
        local_48 = 0;
        local_98 = __LC78;
        uStack_90 = _UNK_00103208;
        local_88 = __LC78;
        uStack_80 = _UNK_00103208;
        local_78 = __LC78;
        uStack_70 = _UNK_00103208;
        local_68 = __LC78;
        uStack_60 = _UNK_00103208;
        local_58 = __LC78;
        uStack_50 = _UNK_00103208;
        if (pcVar9 == PTR_OPT_MORE_STR_00105008) {
          *(undefined1 *)((long)&local_98 + (long)iVar11) = 0;
          opt_printf_stderr("%s  %s\n",&local_98,pcVar4);
        }
        else {
          puVar8 = &_LC73;
          if (bVar1) {
            puVar8 = &_LC7;
          }
          iVar7 = opt_printf_stderr(&_LC24,puVar8);
          pcVar9 = (char *)*param_1;
          if (iVar7 < 1) {
            iVar7 = 0x1e;
          }
          if (*pcVar9 == '\0') {
            pcVar9 = "*";
          }
          iVar2 = opt_printf_stderr(&_LC80,pcVar9);
          if (iVar2 < 1) {
            iVar7 = iVar7 + 0x1e;
            if (*(int *)((long)param_1 + 0xc) != 0x2d) {
LAB_00101dfa:
              uVar6 = valtype2param_isra_0();
              iVar2 = opt_printf_stderr(&_LC24,uVar6);
              if (0 < iVar2) {
                iVar7 = iVar7 + iVar2;
                goto LAB_00101e1e;
              }
            }
LAB_00101f52:
            opt_printf_stderr(&_LC80,&_LC31);
            local_98 = __LC78;
            uStack_90 = _UNK_00103208;
            local_48 = 0x20;
            iVar7 = iVar11;
            local_88 = local_98;
            uStack_80 = uStack_90;
            local_78 = local_98;
            uStack_70 = uStack_90;
            local_68 = local_98;
            uStack_60 = uStack_90;
            local_58 = local_98;
            uStack_50 = uStack_90;
          }
          else {
            iVar7 = iVar7 + iVar2;
            if (*(int *)((long)param_1 + 0xc) != 0x2d) goto LAB_00101dfa;
LAB_00101e1e:
            iVar2 = 0x1d;
            if (iVar11 < 0x1e) {
              iVar2 = iVar11;
            }
            if (iVar2 < iVar7) goto LAB_00101f52;
            iVar7 = iVar11 - iVar7;
          }
          *(undefined1 *)((long)&local_98 + (long)iVar7) = 0;
          opt_printf_stderr("%s  %s\n",&local_98,pcVar4);
        }
      }
    }
    pcVar9 = (char *)param_1[3];
    param_1 = param_1 + 3;
  } while (pcVar9 != (char *)0x0);
LAB_00101fe3:
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
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *__s;
  long *plVar8;
  long in_FS_OFFSET;
  char *local_70;
  int local_64;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  long local_40;
  
  lVar1 = argv;
  iVar4 = opt_index;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = (long)opt_index;
  arg = (char *)0x0;
  pcVar6 = *(char **)(argv + lVar5 * 8);
  if (((pcVar6 == (char *)0x0) || (*pcVar6 != '-')) ||
     ((opt_index = opt_index + 1, pcVar6[1] == '-' && (pcVar6[2] == '\0')))) {
    uVar2 = 0;
    goto LAB_00102177;
  }
  flag = pcVar6;
  __s = pcVar6 + 1;
  if (pcVar6[1] == '-') {
    __s = pcVar6 + 2;
    flag = pcVar6 + 1;
  }
  pcVar6 = strchr(__s,0x3d);
  if (pcVar6 == (char *)0x0) {
    local_70 = (char *)0x0;
  }
  else {
    local_70 = pcVar6 + 1;
    *pcVar6 = '\0';
  }
  pcVar6 = (char *)*opts;
  arg = local_70;
  if (pcVar6 != (char *)0x0) {
    plVar8 = opts;
    if ((*__s == 'h') && (__s[1] == '\0')) {
      do {
        iVar3 = strcmp(pcVar6,"help");
        if ((iVar3 == 0) || (iVar3 = strcmp(__s,pcVar6), iVar3 == 0)) goto LAB_00102246;
        pcVar6 = (char *)plVar8[3];
        plVar8 = plVar8 + 3;
      } while (pcVar6 != (char *)0x0);
    }
    else {
      do {
        iVar3 = strcmp(__s,pcVar6);
        if (iVar3 == 0) goto LAB_00102246;
        pcVar6 = (char *)plVar8[3];
        plVar8 = plVar8 + 3;
      } while (pcVar6 != (char *)0x0);
    }
  }
  if (unknown == 0) {
    opt_printf_stderr("%s: Unknown option: -%s\n",prog,__s);
  }
  else {
    if (dunno == (char *)0x0) {
      uVar2 = *(undefined4 *)(unknown + 8);
      dunno = __s;
      goto LAB_00102177;
    }
    opt_printf_stderr("%s: Multiple %s or unknown options: -%s and -%s\n",prog,unknown_name,dunno,
                      __s);
  }
  goto LAB_00102390;
LAB_00102246:
  iVar3 = *(int *)((long)plVar8 + 0xc);
  if ((iVar3 == 0) || (iVar3 == 0x2d)) {
    if (local_70 == (char *)0x0) goto switchD_00102281_caseD_30;
    opt_printf_stderr("%s: Option -%s does not take a value\n",prog,__s);
    goto LAB_00102390;
  }
  if (local_70 == (char *)0x0) {
    local_70 = *(char **)(lVar1 + 8 + lVar5 * 8);
    if (local_70 == (char *)0x0) {
      opt_printf_stderr("%s: Option -%s needs a value\n",prog,pcVar6);
      goto LAB_00102390;
    }
    opt_index = iVar4 + 2;
    arg = local_70;
  }
  switch(iVar3) {
  case 0x2f:
    iVar4 = opt_isdir(local_70);
    if (0 < iVar4) goto switchD_00102281_caseD_30;
    opt_printf_stderr("%s: Not a directory: %s\n",prog,arg);
    break;
  default:
    goto switchD_00102281_caseD_30;
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x61:
  case 99:
  case 0x66:
    if (iVar3 == 0x46) {
      uVar7 = 6;
    }
    else if (iVar3 < 0x47) {
      uVar7 = 0xe;
      if (iVar3 != 0x41) {
        uVar7 = 0x46;
      }
    }
    else {
      uVar7 = 0x26;
      if (iVar3 != 99) {
        uVar7 = 0xffe;
      }
    }
    iVar4 = opt_format(local_70,uVar7,&local_64);
    if (iVar4 != 0) goto switchD_00102281_caseD_30;
    opt_printf_stderr("%s: Invalid format \"%s\" for option -%s\n",prog,arg,*plVar8);
    break;
  case 0x4d:
    iVar4 = opt_intmax(local_70,local_50);
    goto joined_r0x001024c1;
  case 0x4e:
  case 0x6e:
  case 0x70:
    iVar4 = opt_int(local_70,&local_64);
    if (iVar4 != 0) {
      if (*(int *)((long)plVar8 + 0xc) == 0x70) {
        if (0 < local_64) goto switchD_00102281_caseD_30;
        opt_printf_stderr("%s: Non-positive number \"%s\" for option -%s\n",prog,arg,*plVar8);
      }
      else {
        if ((*(int *)((long)plVar8 + 0xc) != 0x4e) || (-1 < local_64))
        goto switchD_00102281_caseD_30;
        opt_printf_stderr("%s: Negative number \"%s\" for option -%s\n",prog,arg,*plVar8);
      }
    }
    break;
  case 0x55:
    iVar4 = opt_uintmax(local_70,local_48);
joined_r0x001024c1:
    if (iVar4 != 0) {
switchD_00102281_caseD_30:
      uVar2 = (undefined4)plVar8[1];
      goto LAB_00102177;
    }
    break;
  case 0x6c:
    iVar4 = opt_long(local_70,local_60);
    goto joined_r0x00102481;
  case 0x75:
    iVar4 = opt_ulong(local_70,local_58);
joined_r0x00102481:
    if (iVar4 == 0) break;
    goto switchD_00102281_caseD_30;
  }
LAB_00102390:
  uVar2 = 0xffffffff;
LAB_00102177:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


