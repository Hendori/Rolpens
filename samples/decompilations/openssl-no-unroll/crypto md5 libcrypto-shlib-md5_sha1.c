
int ossl_md5_sha1_init(MD5_CTX *param_1)

{
  int iVar1;
  
  iVar1 = MD5_Init(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = SHA1_Init((SHA_CTX *)(param_1 + 1));
  return iVar1;
}



int ossl_md5_sha1_update(MD5_CTX *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = MD5_Update(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = SHA1_Update((SHA_CTX *)(param_1 + 1),param_2,param_3);
  return iVar1;
}



int ossl_md5_sha1_final(uchar *param_1,MD5_CTX *param_2)

{
  int iVar1;
  
  iVar1 = MD5_Final(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = SHA1_Final(param_1 + 0x10,(SHA_CTX *)(param_2 + 1));
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_md5_sha1_ctrl(MD5_CTX *param_1,int param_2,int param_3,undefined8 param_4)

{
  SHA_CTX *c;
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uchar auStack_a8 [16];
  uchar local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0x1d) {
    if ((param_3 == 0x30) && (param_1 != (MD5_CTX *)0x0)) {
      iVar1 = ossl_md5_sha1_update(param_1,param_4,0x30);
      if (0 < iVar1) {
        local_78 = __LC0;
        uStack_70 = _UNK_00100278;
        local_68 = __LC0;
        uStack_60 = _UNK_00100278;
        local_58 = __LC0;
        uStack_50 = _UNK_00100278;
        iVar1 = MD5_Update(param_1,&local_78,0x30);
        if (iVar1 != 0) {
          iVar1 = MD5_Final(auStack_a8,param_1);
          if (iVar1 != 0) {
            c = (SHA_CTX *)(param_1 + 1);
            iVar1 = SHA1_Update(c,&local_78,0x28);
            if (iVar1 != 0) {
              iVar1 = SHA1_Final(local_98,c);
              if (iVar1 != 0) {
                iVar1 = ossl_md5_sha1_init(param_1);
                if (iVar1 != 0) {
                  iVar1 = ossl_md5_sha1_update(param_1,param_4,0x30);
                  if (0 < iVar1) {
                    local_78 = __LC1;
                    uStack_70 = _UNK_00100288;
                    local_68 = __LC1;
                    uStack_60 = _UNK_00100288;
                    local_58 = __LC1;
                    uStack_50 = _UNK_00100288;
                    iVar1 = MD5_Update(param_1,&local_78,0x30);
                    if (iVar1 != 0) {
                      iVar1 = MD5_Update(param_1,auStack_a8,0x10);
                      if (iVar1 != 0) {
                        iVar1 = SHA1_Update(c,&local_78,0x28);
                        if (iVar1 != 0) {
                          iVar1 = SHA1_Update(c,local_98,0x14);
                          if (iVar1 != 0) {
                            OPENSSL_cleanse(auStack_a8,0x10);
                            OPENSSL_cleanse(local_98,0x14);
                            uVar2 = 1;
                            goto LAB_001000ea;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
LAB_001000ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


