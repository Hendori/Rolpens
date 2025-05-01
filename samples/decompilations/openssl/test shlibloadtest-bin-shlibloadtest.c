
void atexit_handler(void)

{
  FILE *__s;
  
  __s = fopen(path_atexit,"w");
  if (__s != (FILE *)0x0) {
    fwrite("atexit() run\n",1,0xd,__s);
    fclose(__s);
    atexit_handler_done = atexit_handler_done + 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(int param_1,long param_2)

{
  char *__s1;
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 5) {
    __s1 = *(char **)(param_2 + 8);
    iVar3 = strcmp(__s1,"-crypto_first");
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      iVar3 = strcmp(__s1,"-ssl_first");
      if (iVar3 == 0) {
        uVar4 = 1;
      }
      else {
        iVar3 = strcmp(__s1,"-just_crypto");
        if (iVar3 == 0) {
          uVar4 = 2;
        }
        else {
          iVar3 = strcmp(__s1,"-dso_ref");
          if (iVar3 == 0) {
            uVar4 = 3;
          }
          else {
            iVar3 = strcmp(__s1,"-no_atexit");
            uVar4 = 4;
            if (iVar3 != 0) {
              fwrite("Unrecognised argument\n",1,0x16,_stderr);
              goto LAB_00100604;
            }
          }
        }
      }
    }
    path_crypto = *(long *)(param_2 + 0x10);
    path_ssl = *(long *)(param_2 + 0x18);
    path_atexit = *(undefined8 *)(param_2 + 0x20);
    test_type = uVar4;
    if ((path_ssl != 0) && (path_crypto != 0)) {
      local_68 = 0;
      local_60 = 0;
      if (uVar4 == 1) {
LAB_00100432:
        iVar3 = sd_load(path_ssl,&local_68,0x101);
        if (iVar3 == 0) {
          fwrite("Failed to load libssl\n",1,0x16,_stderr);
          goto LAB_00100677;
        }
        if ((test_type != 1) || (iVar3 = sd_load(path_crypto,&local_60,0x101), iVar3 != 0))
        goto LAB_0010045b;
LAB_0010081c:
        fwrite("Failed to load libcrypto\n",1,0x19,_stderr);
LAB_00100677:
        uVar4 = 0;
        if (local_60 != 0) {
LAB_00100683:
          sd_close();
        }
LAB_0010068c:
        if (local_68 != 0) {
          sd_close();
        }
      }
      else {
        iVar3 = sd_load(path_crypto,&local_60,0x101);
        if (iVar3 == 0) goto LAB_0010081c;
        if (test_type == 0) goto LAB_00100432;
LAB_0010045b:
        if (test_type == 4) {
          iVar3 = sd_sym(local_60,"OPENSSL_init_crypto",&local_58);
          if (iVar3 == 0) {
            fwrite("Failed to load OPENSSL_init_crypto symbol\n",1,0x2a,_stderr);
          }
          else {
            iVar3 = (*local_58)(0x80000,0);
            if (iVar3 != 0) goto LAB_0010046d;
            fwrite("Failed to initialise libcrypto\n",1,0x1f,_stderr);
          }
          goto LAB_00100677;
        }
LAB_0010046d:
        if (2 < test_type - 2) {
          iVar3 = sd_sym(local_68,"TLS_method",&local_58);
          if (((iVar3 == 0) || (iVar3 = sd_sym(local_68,"SSL_CTX_new",&local_50), iVar3 == 0)) ||
             (iVar3 = sd_sym(local_68,"SSL_CTX_free",&local_48), pcVar2 = local_48,
             pcVar1 = local_50, iVar3 == 0)) {
            fwrite("Failed to load libssl symbols\n",1,0x1e,_stderr);
          }
          else {
            uVar5 = (*local_58)();
            lVar6 = (*pcVar1)(uVar5);
            if (lVar6 != 0) {
              (*pcVar2)(lVar6);
              goto LAB_001004f2;
            }
            fwrite("Failed to create SSL_CTX\n",1,0x19,_stderr);
          }
          goto LAB_00100677;
        }
LAB_001004f2:
        iVar3 = sd_sym(local_60,"ERR_get_error",&local_58);
        if (iVar3 == 0) {
LAB_00100545:
          fwrite("Failed to load libcrypto symbols\n",1,0x21,_stderr);
          goto LAB_00100677;
        }
        iVar3 = sd_sym(local_60,"OPENSSL_version_major",&local_50);
        if (((iVar3 == 0) ||
            (iVar3 = sd_sym(local_60,"OPENSSL_version_minor",&local_48), iVar3 == 0)) ||
           ((iVar3 = sd_sym(local_60,"OPENSSL_version_patch",&local_40), iVar3 == 0 ||
            (iVar3 = sd_sym(local_60,"OPENSSL_atexit",&local_38), pcVar1 = local_58, iVar3 == 0))))
        goto LAB_00100545;
        lVar6 = (*local_58)();
        if (lVar6 != 0) {
          fwrite("Unexpected ERR_get_error() response\n",1,0x24,_stderr);
          goto LAB_00100677;
        }
        lVar6 = (*local_50)();
        if (((lVar6 != 3) || (lVar6 = (*local_48)(), lVar6 != 5)) ||
           (lVar6 = (*local_40)(), lVar6 != 0)) {
          fwrite("Invalid library version number\n",1,0x1f,_stderr);
          goto LAB_00100677;
        }
        iVar3 = (*local_38)(0x100000);
        if (iVar3 == 0) {
          fwrite("Failed to register atexit handler\n",1,0x22,_stderr);
          goto LAB_00100677;
        }
        if (test_type == 3) {
          iVar3 = sd_sym(local_60,"DSO_dsobyaddr",&local_58);
          if ((iVar3 == 0) || (iVar3 = sd_sym(local_60,"DSO_free",&local_50), iVar3 == 0)) {
            fwrite("Unable to load DSO symbols\n",1,0x1b,_stderr);
          }
          else {
            lVar6 = (*local_58)(pcVar1,0);
            if (lVar6 != 0) {
              (*local_50)(lVar6);
              goto LAB_001007ae;
            }
            fwrite("DSO_dsobyaddr() failed\n",1,0x17,_stderr);
          }
          goto LAB_00100677;
        }
LAB_001007ae:
        iVar3 = sd_close(local_60);
        if (iVar3 == 0) {
          fwrite("Failed to close libcrypto\n",1,0x1a,_stderr);
          goto LAB_00100677;
        }
        uVar4 = 1;
        local_60 = 0;
        if (1 < test_type) goto LAB_0010068c;
        iVar3 = sd_close();
        if (iVar3 == 0) {
          fwrite("Failed to close libssl\n",1,0x17,_stderr);
          goto LAB_00100677;
        }
        local_68 = 0;
        if (local_60 != 0) goto LAB_00100683;
      }
      uVar4 = uVar4 ^ 1;
      goto LAB_00100610;
    }
    fwrite("Invalid libcrypto/libssl path\n",1,0x1e,_stderr);
  }
  else {
    fwrite("Incorrect number of arguments\n",1,0x1e,_stderr);
  }
LAB_00100604:
  uVar4 = 1;
LAB_00100610:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


