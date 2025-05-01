
void EVP_set_pw_prompt(char *prompt)

{
  if (prompt != (char *)0x0) {
    strncpy(&prompt_string,prompt,0x4f);
    DAT_0010050f = 0;
    return;
  }
  prompt_string = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * EVP_get_pw_prompt(void)

{
  char *pcVar1;
  
  pcVar1 = &prompt_string;
  if (prompt_string == '\0') {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



int EVP_read_pw_string_min(char *buf,int minlen,int maxlen,char *prompt,int verify)

{
  int iVar1;
  UI *ui;
  long in_FS_OFFSET;
  char acStack_2048 [8200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((prompt == (char *)0x0) && (prompt_string != '\0')) {
    prompt = &prompt_string;
  }
  ui = UI_new();
  if (ui == (UI *)0x0) {
    iVar1 = -1;
  }
  else {
    if (0x1fff < maxlen) {
      maxlen = 0x1fff;
    }
    iVar1 = UI_add_input_string(ui,prompt,0,buf,minlen,maxlen);
    if ((iVar1 < 0) ||
       ((verify != 0 &&
        (iVar1 = UI_add_verify_string(ui,prompt,0,acStack_2048,minlen,maxlen,buf), iVar1 < 0)))) {
      iVar1 = -1;
    }
    else {
      iVar1 = UI_process(ui);
      OPENSSL_cleanse(acStack_2048,0x2000);
    }
    UI_free(ui);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int EVP_read_pw_string(char *buf,int length,char *prompt,int verify)

{
  int iVar1;
  
  iVar1 = EVP_read_pw_string_min(buf,0,length,prompt,verify);
  return iVar1;
}



/* WARNING: Control flow encountered bad instruction data */

int EVP_BytesToKey(EVP_CIPHER *type,EVP_MD *md,uchar *salt,uchar *data,int datal,int count,
                  uchar *key,uchar *iv)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  EVP_MD_CTX *ctx;
  uchar *puVar4;
  uchar *puVar5;
  long in_FS_OFFSET;
  int local_d4;
  uint local_c0;
  int local_bc;
  uchar *local_b0;
  uchar *local_a8;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_b0 = key;
  local_a8 = iv;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  local_d4 = EVP_CIPHER_get_key_length();
  local_c0 = EVP_CIPHER_get_iv_length(type);
  if (local_d4 < 0x41) {
    if (local_c0 < 0x11) {
      if (data != (uchar *)0x0) {
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if (ctx != (EVP_MD_CTX *)0x0) {
          local_bc = 0;
          while ((iVar1 = EVP_DigestInit_ex(ctx,md,(ENGINE *)0x0), iVar1 != 0 &&
                 ((((local_bc == 0 ||
                    (iVar1 = EVP_DigestUpdate(ctx,local_88,(ulong)local_8c), iVar1 != 0)) &&
                   (iVar1 = EVP_DigestUpdate(ctx,data,(long)datal), iVar1 != 0)) &&
                  ((salt == (uchar *)0x0 || (iVar1 = EVP_DigestUpdate(ctx,salt,8), iVar1 != 0)))))))
          {
            iVar1 = EVP_DigestFinal_ex(ctx,local_88,&local_8c);
            if (iVar1 == 0) break;
            iVar1 = 1;
            if (1 < (uint)count) {
              do {
                iVar2 = EVP_DigestInit_ex(ctx,md,(ENGINE *)0x0);
                if (((iVar2 == 0) ||
                    (iVar2 = EVP_DigestUpdate(ctx,local_88,(ulong)local_8c), iVar2 == 0)) ||
                   (iVar2 = EVP_DigestFinal_ex(ctx,local_88,&local_8c), iVar2 == 0))
                goto LAB_0010034b;
                iVar1 = iVar1 + 1;
              } while (iVar1 != count);
            }
            uVar3 = 0;
            if (local_d4 != 0) {
              uVar3 = 0;
              puVar5 = local_88;
              do {
                if (local_8c == uVar3) {
                  local_d4 = local_d4 - local_8c;
                  goto LAB_001003de;
                }
                puVar4 = local_b0;
                if (local_b0 != (uchar *)0x0) {
                  puVar4 = local_b0 + 1;
                  *local_b0 = *puVar5;
                }
                puVar5 = puVar5 + 1;
                uVar3 = uVar3 + 1;
                local_b0 = puVar4;
              } while (puVar5 != local_88 + (ulong)(local_d4 - 1) + 1);
            }
            while( true ) {
              if (local_c0 == 0) {
                local_d4 = EVP_CIPHER_get_key_length(type);
                goto LAB_00100353;
              }
              if (local_8c == uVar3) break;
              puVar5 = local_a8;
              if (local_a8 != (uchar *)0x0) {
                puVar5 = local_a8 + 1;
                *local_a8 = local_88[uVar3];
              }
              uVar3 = uVar3 + 1;
              local_c0 = local_c0 - 1;
              local_a8 = puVar5;
            }
            local_d4 = 0;
LAB_001003de:
            local_bc = local_bc + 1;
          }
        }
LAB_0010034b:
        local_d4 = 0;
LAB_00100353:
        EVP_MD_CTX_free(ctx);
        OPENSSL_cleanse(local_88,0x40);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_d4;
    }
    OPENSSL_die("assertion failed: niv >= 0 && niv <= EVP_MAX_IV_LENGTH","crypto/evp/evp_key.c",0x5b
               );
  }
  OPENSSL_die("assertion failed: nkey <= EVP_MAX_KEY_LENGTH","crypto/evp/evp_key.c",0x5a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


