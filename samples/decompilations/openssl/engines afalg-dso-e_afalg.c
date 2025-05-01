
undefined8 afalg_init(void)

{
  return 1;
}



void afalg_waitfd_cleanup(undefined8 param_1,undefined8 param_2,int param_3)

{
  close(param_3);
  return;
}



undefined8 afalg_cipher_cleanup(long param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = (int *)EVP_CIPHER_CTX_get_cipher_data();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x1890671)) {
    close(piVar1[1]);
    close(piVar1[2]);
    if (piVar1[5] == 1) {
      close(piVar1[4]);
    }
    syscall(0xcf,*(undefined8 *)(piVar1 + 6));
    return 1;
  }
  return 1;
}



undefined8 afalg_finish(void)

{
  return 1;
}



void ERR_AFALG_error_constprop_0(undefined4 param_1,undefined4 param_2)

{
  if (lib_code == 0) {
    lib_code = ERR_get_next_error_library();
  }
  ERR_new();
  ERR_set_debug("engines/e_afalg_err.c",0x46,"ERR_AFALG_error");
  ERR_set_error(lib_code,param_1,0);
  ERR_set_debug("engines/e_afalg.c",param_2,0);
  return;
}



undefined8 afalg_destroy(void)

{
  if (error_loaded != 0) {
    ERR_unload_strings(lib_code,(ERR_STRING_DATA *)AFALG_str_reasons);
    error_loaded = 0;
  }
  EVP_CIPHER_meth_free(DAT_00101668);
  DAT_00101668 = 0;
  EVP_CIPHER_meth_free(DAT_00101678);
  DAT_00101678 = 0;
  EVP_CIPHER_meth_free(DAT_00101688);
  DAT_00101688 = 0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 afalg_cipher_init(long param_1,void *param_2)

{
  int iVar1;
  socklen_t __optlen;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  byte bVar7;
  sockaddr local_88;
  undefined1 local_70 [56];
  undefined8 local_38;
  long local_30;
  
  bVar7 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    lVar2 = EVP_CIPHER_CTX_get0_cipher();
    if (lVar2 != 0) {
      puVar3 = (undefined4 *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      if (puVar3 != (undefined4 *)0x0) {
        iVar1 = EVP_CIPHER_CTX_get_nid(param_1);
        if ((iVar1 - 0x1a3U < 9) && ((0x111UL >> ((ulong)(iVar1 - 0x1a3U) & 0x3f) & 1) != 0)) {
          iVar1 = EVP_CIPHER_CTX_get_iv_length(param_1);
          uVar4 = _LC2;
          if (iVar1 == 0x10) {
            *(undefined8 *)(puVar3 + 1) = _LC2;
            local_88.sa_data[0] = '\0';
            local_88.sa_data[1] = '\0';
            local_88.sa_data[2] = '\0';
            local_88.sa_data[3] = '\0';
            local_88.sa_data[4] = '\0';
            local_88.sa_data[5] = '\0';
            local_88.sa_data[6] = '\0';
            local_88.sa_data[7] = '\0';
            local_38 = 0;
            pcVar6 = local_88.sa_data + 6;
            for (uVar5 = (ulong)(((int)local_88.sa_data - (int)(local_88.sa_data + 6)) + 0x56U >> 3)
                ; uVar5 != 0; uVar5 = uVar5 - 1) {
              pcVar6[0] = '\0';
              pcVar6[1] = '\0';
              pcVar6[2] = '\0';
              pcVar6[3] = '\0';
              pcVar6[4] = '\0';
              pcVar6[5] = '\0';
              pcVar6[6] = '\0';
              pcVar6[7] = '\0';
              pcVar6 = pcVar6 + ((ulong)bVar7 * -2 + 1) * 8;
            }
            local_88.sa_family = 0x26;
            OPENSSL_strlcpy(local_88.sa_data,"skcipher",0xe);
            OPENSSL_strlcpy(local_70,"cbc(aes)",0x40);
            iVar1 = socket(0x26,5,0);
            puVar3[2] = iVar1;
            if (iVar1 == -1) {
              __fprintf_chk(_stderr,2,"ALG_PERR: %s(%d): Failed to open socket : ",
                            "engines/e_afalg.c",0x1c7);
              perror((char *)0x0);
              ERR_AFALG_error_constprop_0(0x6d,0x1c8);
            }
            else {
              iVar1 = bind(iVar1,&local_88,0x58);
              if (iVar1 < 0) {
                __fprintf_chk(_stderr,2,"ALG_PERR: %s(%d): Failed to bind socket : ",
                              "engines/e_afalg.c",0x1ce);
                perror((char *)0x0);
                ERR_AFALG_error_constprop_0(0x67,0x1cf);
              }
              else {
                iVar1 = accept(puVar3[2],(sockaddr *)0x0,(socklen_t *)0x0);
                puVar3[1] = iVar1;
                if (-1 < iVar1) {
                  __optlen = EVP_CIPHER_CTX_get_key_length(param_1);
                  if (0 < (int)__optlen) {
                    iVar1 = setsockopt(puVar3[2],0x117,1,param_2,__optlen);
                    if (iVar1 < 0) {
                      __fprintf_chk(_stderr,2,"ALG_PERR: %s(%d): Failed to set socket option : ",
                                    "engines/e_afalg.c",0x1b1);
                      perror((char *)0x0);
                      ERR_AFALG_error_constprop_0(0x6a,0x1b2);
                    }
                    else {
                      *(undefined8 *)(puVar3 + 6) = 0;
                      lVar2 = syscall(0xce,1,puVar3 + 6);
                      if (-1 < (int)lVar2) {
                        *puVar3 = 0x1890671;
                        *(undefined8 *)(puVar3 + 4) = 0xffffffff;
                        uVar4 = 1;
                        *(undefined1 (*) [16])(puVar3 + 0x10) = (undefined1  [16])0x0;
                        *(undefined1 (*) [16])(puVar3 + 0x14) = (undefined1  [16])0x0;
                        *(undefined1 (*) [16])(puVar3 + 0x18) = (undefined1  [16])0x0;
                        *(undefined1 (*) [16])(puVar3 + 0x1c) = (undefined1  [16])0x0;
                        goto LAB_0010022a;
                      }
                      __fprintf_chk(_stderr,2,"ALG_PERR: %s(%d): io_setup error : ",
                                    "engines/e_afalg.c",0xfb);
                      perror((char *)0x0);
                      ERR_AFALG_error_constprop_0(0x69,0xfc);
                    }
                  }
                  close(puVar3[1]);
                  close(puVar3[2]);
                  goto LAB_00100228;
                }
                __fprintf_chk(_stderr,2,"ALG_PERR: %s(%d): Socket Accept Failed : ",
                              "engines/e_afalg.c",0x1d5);
                perror((char *)0x0);
                ERR_AFALG_error_constprop_0(0x6e,0x1d6);
              }
            }
            if (-1 < (int)puVar3[2]) {
              close(puVar3[2]);
            }
            if (-1 < (int)puVar3[1]) {
              close(puVar3[1]);
            }
            *(undefined8 *)(puVar3 + 1) = uVar4;
          }
        }
      }
    }
  }
LAB_00100228:
  uVar4 = 0;
LAB_0010022a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 afalg_ciphers(undefined8 param_1,long *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if (param_2 == (long *)0x0) {
    *param_3 = &afalg_cipher_nids;
    return 3;
  }
  if ((8 < param_4 - 0x1a3U) || ((0x111UL >> ((ulong)(param_4 - 0x1a3U) & 0x3f) & 1) == 0)) {
    *param_2 = 0;
    return 0;
  }
  if (param_4 == 0x1a7) {
    puVar4 = (undefined4 *)&DAT_00101670;
  }
  else if (param_4 == 0x1ab) {
    puVar4 = (undefined4 *)&DAT_00101680;
  }
  else {
    lVar3 = 0;
    puVar4 = &cbc_handle;
    if (param_4 != 0x1a3) goto LAB_00100593;
  }
  lVar3 = *(long *)(puVar4 + 2);
  if (lVar3 == 0) {
    lVar2 = EVP_CIPHER_meth_new(param_4,0x10,*puVar4);
    *(long *)(puVar4 + 2) = lVar2;
    if (lVar2 != 0) {
      iVar1 = EVP_CIPHER_meth_set_iv_length(lVar2,0x10);
      lVar2 = *(long *)(puVar4 + 2);
      if (iVar1 != 0) {
        iVar1 = EVP_CIPHER_meth_set_flags(lVar2,2);
        lVar2 = *(long *)(puVar4 + 2);
        if (iVar1 != 0) {
          iVar1 = EVP_CIPHER_meth_set_init(lVar2,afalg_cipher_init);
          lVar2 = *(long *)(puVar4 + 2);
          if (iVar1 != 0) {
            iVar1 = EVP_CIPHER_meth_set_do_cipher(lVar2,afalg_do_cipher);
            lVar2 = *(long *)(puVar4 + 2);
            if (iVar1 != 0) {
              iVar1 = EVP_CIPHER_meth_set_cleanup(lVar2,afalg_cipher_cleanup);
              lVar2 = *(long *)(puVar4 + 2);
              if (iVar1 != 0) {
                iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(lVar2,0x80);
                if (iVar1 != 0) {
                  lVar3 = *(long *)(puVar4 + 2);
                  goto LAB_00100593;
                }
                lVar2 = *(long *)(puVar4 + 2);
              }
            }
          }
        }
      }
    }
    EVP_CIPHER_meth_free(lVar2);
    *(undefined8 *)(puVar4 + 2) = 0;
  }
LAB_00100593:
  *param_2 = lVar3;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 afalg_chk_platform(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  int local_1b0;
  utsname local_1a8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_1b8 = 0xffffffffffffffff;
  local_1b0 = -1;
  uStack_1c0 = (undefined *)0x1006c8;
  iVar1 = uname(&local_1a8);
  if (iVar1 == 0) {
    uStack_1c0 = (undefined *)0x1006e7;
    pcVar3 = strtok(local_1a8.release,".");
    if (pcVar3 == (char *)0x0) {
      iVar8 = -1;
      iVar1 = -1;
      uVar5 = 0xffffffff;
    }
    else {
      lVar7 = 1;
      do {
        uStack_1c0 = (undefined *)0x100707;
        uVar2 = __isoc23_strtol(pcVar3,0,10);
        *(undefined4 *)((long)&uStack_1c0 + lVar7 * 4 + 4) = uVar2;
        uStack_1c0 = (undefined *)0x100716;
        pcVar3 = strtok((char *)0x0,".");
        iVar1 = (int)lVar7;
        lVar7 = lVar7 + 1;
      } while (iVar1 < 3 && pcVar3 != (char *)0x0);
      uVar5 = local_1b8 & 0xffffffff;
      iVar6 = 0xff;
      if (local_1b0 < 0x100) {
        iVar6 = local_1b0;
      }
      iVar1 = local_1b8._4_4_;
      iVar8 = local_1b0;
      if (0x400ff < (int)local_1b8 * 0x10000 + local_1b8._4_4_ * 0x100 + iVar6) {
        uStack_1c0 = (undefined *)0x100771;
        iVar1 = socket(0x26,5,0);
        if (iVar1 == -1) {
          if (lib_code == 0) {
            uStack_1c0 = (undefined *)0x10093d;
            lib_code = ERR_get_next_error_library();
          }
          uStack_1c0 = (undefined *)0x1008ef;
          ERR_new();
          uStack_1c0 = (undefined *)0x100907;
          ERR_set_debug("engines/e_afalg_err.c",0x46,"ERR_AFALG_error");
          uStack_1c0 = (undefined *)0x10091b;
          ERR_set_error(lib_code,0x6d,0);
          uStack_1c0 = (undefined *)0x10092e;
          ERR_set_debug("engines/e_afalg.c",0x373,0);
          uVar4 = 0;
        }
        else {
          uStack_1c0 = (undefined *)0x100781;
          close(iVar1);
          uVar4 = 1;
        }
        goto LAB_00100786;
      }
    }
    uStack_1c0 = (undefined *)0x10083e;
    __fprintf_chk(_stderr,2,"ALG_ERR: ASYNC AFALG not supported this kernel(%d.%d.%d)\n",uVar5,iVar1
                  ,iVar8);
    uStack_1c0 = (undefined *)0x100862;
    __fprintf_chk(_stderr,2,"ALG_ERR: ASYNC AFALG requires kernel version %d.%d.%d or later\n",4,1,0
                 );
    if (lib_code == 0) {
      uStack_1c0 = (undefined *)0x1008c5;
      lib_code = ERR_get_next_error_library();
    }
    uStack_1c0 = (undefined *)0x100871;
    ERR_new();
    uStack_1c0 = (undefined *)0x100889;
    ERR_set_debug("engines/e_afalg_err.c",0x46,"ERR_AFALG_error");
    uStack_1c0 = (undefined *)0x10089d;
    ERR_set_error(lib_code,0x6b,0);
    uStack_1c0 = (undefined *)0x1008b0;
    ERR_set_debug("engines/e_afalg.c",0x36b,0);
    uVar4 = 0;
  }
  else {
    if (lib_code == 0) {
      uStack_1c0 = (undefined *)0x1008d5;
      lib_code = ERR_get_next_error_library();
    }
    uStack_1c0 = (undefined *)0x1007c3;
    ERR_new();
    uStack_1c0 = (undefined *)0x1007db;
    ERR_set_debug("engines/e_afalg_err.c",0x46,"ERR_AFALG_error");
    uStack_1c0 = (undefined *)0x1007ef;
    ERR_set_error(lib_code,0x6f,0);
    uStack_1c0 = (undefined *)0x100802;
    ERR_set_debug("engines/e_afalg.c",0x35a,0);
    uVar4 = 0;
  }
LAB_00100786:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  uStack_1c0 = &UNK_0010094a;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 afalg_do_cipher(long param_1,long param_2,int *param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  ssize_t sVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined8 uStack_120;
  long local_100;
  int *local_f8;
  long local_f0;
  undefined1 local_e8 [16];
  int **local_d8;
  undefined8 uStack_d0;
  char *local_c8;
  size_t local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  long local_98;
  char local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_74 [12];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_2 == 0 || param_3 == (int *)0x0) || (param_1 == 0)) ||
      (piVar4 = (int *)EVP_CIPHER_CTX_get_cipher_data(), piVar4 == (int *)0x0)) ||
     (*piVar4 != 0x1890671)) goto LAB_001009ae;
  iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
  local_128 = 0;
  uStack_120 = 0;
  if (iVar1 == 0) {
    puVar5 = (undefined8 *)((long)param_3 + param_4 + -0x10);
    local_128 = *puVar5;
    uStack_120 = puVar5[1];
  }
  uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
  puVar5 = (undefined8 *)EVP_CIPHER_CTX_iv(param_1);
  local_80 = _LC14;
  local_68 = _LC15;
  uStack_4c = 0;
  auStack_74 = SUB1612((undefined1  [16])0x0,4);
  local_78 = uVar2;
  local_e8 = (undefined1  [16])0x0;
  local_c0 = 0x40;
  local_88[0] = '\x14';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  auStack_74._4_8_ = 0x24;
  uStack_60 = 0x10;
  uStack_54 = puVar5[1];
  uStack_5c = (undefined4)*puVar5;
  local_58 = (undefined4)((ulong)*puVar5 >> 0x20);
  local_b8._0_4_ = 0x8000;
  local_b8._4_4_ = 0;
  uStack_d0 = 1;
  local_d8 = &local_f8;
  local_f8 = param_3;
  local_f0 = param_4;
  local_c8 = local_88;
  sVar6 = sendmsg(piVar4[1],(msghdr *)local_e8,0);
  if (sVar6 < 0) {
    uVar9 = 0x230;
    pcVar12 = "ALG_PERR: %s(%d): sendmsg failed for cipher operation : ";
  }
  else {
    if (sVar6 != param_4) goto LAB_001009ae;
    iVar1 = piVar4[1];
    local_100 = 0;
    local_e8 = (undefined1  [16])0x0;
    if (piVar4[5] == 0) {
      local_f8 = (int *)0x0;
      lVar7 = ASYNC_get_current_job();
      if (lVar7 == 0) {
        lVar7 = syscall(0x122,0,0);
        piVar4[4] = (int)lVar7;
        if ((int)lVar7 == -1) {
          __fprintf_chk(_stderr,2,"ALG_PERR: %s(%d): Failed to get eventfd : ","engines/e_afalg.c",
                        0xe9);
          perror((char *)0x0);
          ERR_AFALG_error_constprop_0(0x6c,0xea);
          goto LAB_001009ae;
        }
        piVar4[5] = 1;
      }
      else {
        lVar7 = ASYNC_get_wait_ctx(lVar7);
        if (lVar7 == 0) goto LAB_001009ae;
        iVar3 = ASYNC_WAIT_CTX_get_fd(lVar7,"afalg",piVar4 + 4,&local_f8);
        if (iVar3 == 0) {
          uVar11 = syscall(0x122,0,0);
          piVar4[4] = (int)uVar11;
          if ((int)uVar11 == -1) {
            __fprintf_chk(_stderr,2,"ALG_PERR: %s(%d): Failed to get eventfd : ","engines/e_afalg.c"
                          ,0xd1);
            perror((char *)0x0);
            ERR_AFALG_error_constprop_0(0x6c,0xd2);
            goto LAB_001009ae;
          }
          iVar3 = ASYNC_WAIT_CTX_set_wait_fd
                            (lVar7,"afalg",uVar11 & 0xffffffff,local_f8,afalg_waitfd_cleanup);
          if (iVar3 == 0) {
            close(piVar4[4]);
            goto LAB_001009ae;
          }
          fcntl(piVar4[4],4,0x800);
        }
        piVar4[5] = 2;
      }
    }
    local_f8 = piVar4 + 0x10;
    *(undefined1 (*) [16])(piVar4 + 0x14) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(piVar4 + 0x1c) = (undefined1  [16])0x0;
    piVar4[0x15] = iVar1;
    piVar4[0x1f] = piVar4[4];
    *(long *)(piVar4 + 0x16) = param_2;
    piVar4[0x1a] = 0;
    piVar4[0x1b] = 0;
    *(long *)(piVar4 + 0x18) = param_4;
    piVar4[0x1e] = 1;
    *(undefined1 (*) [16])(piVar4 + 0x10) = (undefined1  [16])0x0;
    lVar7 = syscall(0xd1,*(undefined8 *)(piVar4 + 6),1,&local_f8);
    if ((int)lVar7 < 0) {
      uVar9 = 0x131;
      pcVar12 = "ALG_PERR: %s(%d): io_read failed : ";
    }
    else {
      iVar1 = 0;
      do {
        while( true ) {
          ASYNC_pause_job();
          sVar6 = read(piVar4[4],&local_100,8);
          if ((int)sVar6 < 0) break;
          if (local_100 != 0) {
            lVar7 = syscall(0xd0,*(undefined8 *)(piVar4 + 6),1,1,local_a8,(msghdr *)local_e8);
            if ((int)lVar7 < 1) {
              if ((int)lVar7 != 0) {
                uVar9 = 0x189;
                pcVar12 = "ALG_PERR: %s(%d): io_getevents failed : ";
                goto LAB_00100cd2;
              }
            }
            else {
              if (-1 < local_98) {
                iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
                if (iVar1 == 0) {
                  puVar5 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
                  *puVar5 = local_128;
                  puVar5[1] = uStack_120;
                }
                else {
                  puVar5 = (undefined8 *)(param_2 + -0x10 + param_4);
                  puVar10 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
                  uVar9 = puVar5[1];
                  *puVar10 = *puVar5;
                  puVar10[1] = uVar9;
                }
                uVar9 = 1;
                goto LAB_001009b0;
              }
              if ((local_98 != -0x10) || (iVar3 = iVar1 + 1, 2 < iVar1)) {
                BIO_snprintf(local_88,0x20,"%lld");
                if (local_98 == -0xc) {
                  if (lib_code == 0) {
                    lib_code = ERR_get_next_error_library();
                  }
                  ERR_new();
                  ERR_set_debug("engines/e_afalg_err.c",0x46,"ERR_AFALG_error");
                  ERR_set_error(lib_code,0x70,0);
                  ERR_set_debug("engines/e_afalg.c",0x17b,0);
                  ERR_add_error_data(3,"-ENOMEM ( code ",local_88,&_LC23);
                }
                else {
                  if (lib_code == 0) {
                    lib_code = ERR_get_next_error_library();
                  }
                  ERR_new();
                  ERR_set_debug("engines/e_afalg_err.c",0x46,"ERR_AFALG_error");
                  ERR_set_error(lib_code,0x70,0);
                  ERR_set_debug("engines/e_afalg.c",0x17f,0);
                  ERR_add_error_data(2,"code ",local_88);
                }
                goto LAB_001009ae;
              }
              lVar7 = syscall(0xd1,*(undefined8 *)(piVar4 + 6),1,&local_f8);
              iVar1 = iVar3;
              if ((int)lVar7 < 0) {
                __fprintf_chk(_stderr,2,"ALG_PERR: %s(%d): retry %d for io_read failed : ",
                              "engines/e_afalg.c",0x160,iVar3);
                perror((char *)0x0);
                goto LAB_001009ae;
              }
            }
          }
        }
        piVar8 = __errno_location();
      } while (*piVar8 == 0xb);
      uVar9 = 0x13e;
      pcVar12 = "ALG_PERR: %s(%d): read failed for event fd : ";
    }
  }
LAB_00100cd2:
  __fprintf_chk(_stderr,2,pcVar12,"engines/e_afalg.c",uVar9);
  perror((char *)0x0);
LAB_001009ae:
  uVar9 = 0;
LAB_001009b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



uint v_check(ulong param_1)

{
  return ~-(uint)(param_1 < 0x30000) & 0x30000;
}



undefined8 bind_engine(ENGINE *param_1,char *param_2,long *param_3)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  pvVar2 = ENGINE_get_static_state();
  if ((void *)*param_3 != pvVar2) {
    CRYPTO_set_mem_functions((m *)param_3[1],(r *)param_3[2],(f *)param_3[3]);
    OPENSSL_init_crypto(0x80000,0);
  }
  if ((param_2 != (char *)0x0) && (iVar1 = strcmp(param_2,"afalg"), iVar1 != 0)) {
    return 0;
  }
  iVar1 = afalg_chk_platform();
  if (iVar1 == 0) {
    return 0;
  }
  if (lib_code == 0) {
    lib_code = ERR_get_next_error_library();
  }
  if (error_loaded == 0) {
    ERR_load_strings(lib_code,(ERR_STRING_DATA *)AFALG_str_reasons);
    error_loaded = 1;
  }
  iVar1 = ENGINE_set_id(param_1,"afalg");
  if ((((iVar1 == 0) || (iVar1 = ENGINE_set_name(param_1,"AFALG engine support"), iVar1 == 0)) ||
      (iVar1 = ENGINE_set_destroy_function(param_1,afalg_destroy), iVar1 == 0)) ||
     ((iVar1 = ENGINE_set_init_function(param_1,afalg_init), iVar1 == 0 ||
      (iVar1 = ENGINE_set_finish_function(param_1,afalg_finish), iVar1 == 0)))) {
    if (lib_code == 0) {
      lib_code = ERR_get_next_error_library();
    }
    ERR_new();
    ERR_set_debug("engines/e_afalg_err.c",0x46,"ERR_AFALG_error");
    ERR_set_error(lib_code,100,0);
    ERR_set_debug("engines/e_afalg.c",0x323,0);
    goto LAB_0010112a;
  }
  if (afalg_cipher_nids == 0x1a7) {
    puVar4 = (undefined4 *)&DAT_00101670;
LAB_001012c8:
    if (*(long *)(puVar4 + 2) != 0) {
LAB_001012d3:
      if (DAT_00101694 == 0x1a7) {
        puVar4 = (undefined4 *)&DAT_00101670;
      }
      else if (DAT_00101694 == 0x1ab) {
        puVar4 = (undefined4 *)&DAT_00101680;
      }
      else {
        puVar4 = &cbc_handle;
        if (DAT_00101694 != 0x1a3) goto LAB_001011fe;
      }
      if (*(long *)(puVar4 + 2) == 0) {
        lVar3 = EVP_CIPHER_meth_new(DAT_00101694,0x10,*puVar4);
        *(long *)(puVar4 + 2) = lVar3;
        if (lVar3 == 0) goto LAB_001015a0;
        iVar1 = EVP_CIPHER_meth_set_iv_length(lVar3,0x10);
        if ((((iVar1 == 0) ||
             (iVar1 = EVP_CIPHER_meth_set_flags(*(undefined8 *)(puVar4 + 2),2), iVar1 == 0)) ||
            ((iVar1 = EVP_CIPHER_meth_set_init(*(undefined8 *)(puVar4 + 2),afalg_cipher_init),
             iVar1 == 0 ||
             ((iVar1 = EVP_CIPHER_meth_set_do_cipher(*(undefined8 *)(puVar4 + 2),afalg_do_cipher),
              iVar1 == 0 ||
              (iVar1 = EVP_CIPHER_meth_set_cleanup(*(undefined8 *)(puVar4 + 2),afalg_cipher_cleanup)
              , iVar1 == 0)))))) ||
           (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(*(undefined8 *)(puVar4 + 2),0x80), iVar1 == 0)
           ) goto LAB_0010142a;
        if (*(long *)(puVar4 + 2) == 0) goto LAB_001011fe;
      }
      if (DAT_00101698 == 0x1a7) {
        puVar4 = (undefined4 *)&DAT_00101670;
      }
      else if (DAT_00101698 == 0x1ab) {
        puVar4 = (undefined4 *)&DAT_00101680;
      }
      else {
        if (DAT_00101698 != 0x1a3) goto LAB_001011fe;
        puVar4 = &cbc_handle;
      }
      if (*(long *)(puVar4 + 2) == 0) {
        lVar3 = EVP_CIPHER_meth_new(DAT_00101698,0x10,*puVar4);
        *(long *)(puVar4 + 2) = lVar3;
        if (lVar3 == 0) goto LAB_001015a0;
        iVar1 = EVP_CIPHER_meth_set_iv_length(lVar3,0x10);
        if (((((iVar1 == 0) ||
              (iVar1 = EVP_CIPHER_meth_set_flags(*(undefined8 *)(puVar4 + 2),2), iVar1 == 0)) ||
             (iVar1 = EVP_CIPHER_meth_set_init(*(undefined8 *)(puVar4 + 2),afalg_cipher_init),
             iVar1 == 0)) ||
            ((iVar1 = EVP_CIPHER_meth_set_do_cipher(*(undefined8 *)(puVar4 + 2),afalg_do_cipher),
             iVar1 == 0 ||
             (iVar1 = EVP_CIPHER_meth_set_cleanup(*(undefined8 *)(puVar4 + 2),afalg_cipher_cleanup),
             iVar1 == 0)))) ||
           (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(*(undefined8 *)(puVar4 + 2),0x80), iVar1 == 0)
           ) goto LAB_0010142a;
        if (*(long *)(puVar4 + 2) == 0) goto LAB_001011fe;
      }
      iVar1 = ENGINE_set_ciphers(param_1,afalg_ciphers);
      if (iVar1 != 0) {
        return 1;
      }
      if (lib_code == 0) {
        lib_code = ERR_get_next_error_library();
      }
      ERR_new();
      ERR_set_debug("engines/e_afalg_err.c",0x46,"ERR_AFALG_error");
      ERR_set_error(lib_code,100,0);
      ERR_set_debug("engines/e_afalg.c",0x334,0);
      goto LAB_0010112a;
    }
    lVar3 = EVP_CIPHER_meth_new(afalg_cipher_nids,0x10,*puVar4);
    *(long *)(puVar4 + 2) = lVar3;
    if (lVar3 == 0) {
LAB_001015a0:
      uVar5 = 0;
    }
    else {
      iVar1 = EVP_CIPHER_meth_set_iv_length(lVar3,0x10);
      if (((iVar1 != 0) &&
          (iVar1 = EVP_CIPHER_meth_set_flags(*(undefined8 *)(puVar4 + 2),2), iVar1 != 0)) &&
         ((iVar1 = EVP_CIPHER_meth_set_init(*(undefined8 *)(puVar4 + 2),afalg_cipher_init),
          iVar1 != 0 &&
          (((iVar1 = EVP_CIPHER_meth_set_do_cipher(*(undefined8 *)(puVar4 + 2),afalg_do_cipher),
            iVar1 != 0 &&
            (iVar1 = EVP_CIPHER_meth_set_cleanup(*(undefined8 *)(puVar4 + 2),afalg_cipher_cleanup),
            iVar1 != 0)) &&
           (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(*(undefined8 *)(puVar4 + 2),0x80), iVar1 != 0)
           ))))) {
        if (*(long *)(puVar4 + 2) == 0) goto LAB_001011fe;
        goto LAB_001012d3;
      }
LAB_0010142a:
      uVar5 = *(undefined8 *)(puVar4 + 2);
    }
    EVP_CIPHER_meth_free(uVar5);
    *(undefined8 *)(puVar4 + 2) = 0;
  }
  else {
    if (afalg_cipher_nids == 0x1ab) {
      puVar4 = (undefined4 *)&DAT_00101680;
      goto LAB_001012c8;
    }
    puVar4 = &cbc_handle;
    if (afalg_cipher_nids == 0x1a3) goto LAB_001012c8;
  }
LAB_001011fe:
  if (lib_code == 0) {
    lib_code = ERR_get_next_error_library();
  }
  ERR_new();
  ERR_set_debug("engines/e_afalg_err.c",0x46,"ERR_AFALG_error");
  ERR_set_error(lib_code,100,0);
  ERR_set_debug("engines/e_afalg.c",0x32e,0);
LAB_0010112a:
  if (error_loaded != 0) {
    ERR_unload_strings(lib_code,(ERR_STRING_DATA *)AFALG_str_reasons);
    error_loaded = 0;
  }
  EVP_CIPHER_meth_free(DAT_00101668);
  DAT_00101668 = 0;
  EVP_CIPHER_meth_free(DAT_00101678);
  DAT_00101678 = 0;
  EVP_CIPHER_meth_free(DAT_00101688);
  DAT_00101688 = 0;
  return 0;
}


