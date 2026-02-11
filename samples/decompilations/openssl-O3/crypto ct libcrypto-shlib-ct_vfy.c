
int SCT_CTX_verify(long *param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  EVP_MD_CTX *ctx;
  size_t cnt;
  void *d;
  long in_FS_OFFSET;
  undefined1 local_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  uint7 uStack_49;
  ushort local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = SCT_is_complete(param_2);
  if ((((iVar2 == 0) || (*param_1 == 0)) || (param_2[0x16] == -1)) ||
     ((param_2[0x16] == 1 && (param_1[3] == 0)))) {
    ERR_new();
    ERR_set_debug("crypto/ct/ct_vfy.c",0x68,"SCT_CTX_verify");
    ERR_set_error(0x32,0x6a,0);
  }
  else if (*param_2 == 0) {
    if ((*(size_t *)(param_2 + 8) == param_1[2]) &&
       (iVar2 = memcmp(*(void **)(param_2 + 6),(void *)param_1[1],param_1[2]), iVar2 == 0)) {
      if (*(ulong *)(param_2 + 10) <= (ulong)param_1[9]) {
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        iVar2 = 0;
        if ((ctx != (EVP_MD_CTX *)0x0) &&
           (iVar3 = EVP_DigestVerifyInit_ex(ctx,0,"SHA2-256",param_1[10],param_1[0xb],*param_1,0),
           iVar3 != 0)) {
          if ((param_2[0x16] != -1) && ((param_2[0x16] != 1 || (param_1[3] != 0)))) {
            uStack_4b = 0;
            local_4c = (undefined1)*param_2;
            uVar1 = *(ulong *)(param_2 + 10);
            uStack_49 = (uint7)((ushort)(uVar1 >> 0x30) & 0xff) |
                        (uint7)((uint)(uVar1 >> 0x20) & 0xff00) |
                        ((uint7)(uVar1 >> 8) & 0xff000000) >> 8 | (uint7)uVar1 & 0xff000000 |
                        (uint7)(((uVar1 & 0xff0000) << 0x18) >> 8) |
                        (uint7)(((uVar1 & 0xff00) << 0x28) >> 8) | (uint7)((uVar1 << 0x38) >> 8);
            uStack_4a = (undefined1)(uVar1 >> 0x38);
            local_42 = *(ushort *)(param_2 + 0x16) << 8 | *(ushort *)(param_2 + 0x16) >> 8;
            iVar3 = EVP_DigestUpdate(ctx,&local_4c,0xc);
            if (iVar3 != 0) {
              if (param_2[0x16] == 0) {
                d = (void *)param_1[5];
                cnt = param_1[6];
              }
              else {
                iVar3 = EVP_DigestUpdate(ctx,(void *)param_1[3],param_1[4]);
                if (iVar3 == 0) goto LAB_001000d4;
                d = (void *)param_1[7];
                cnt = param_1[8];
              }
              if (d != (void *)0x0) {
                local_4c = (undefined1)(cnt >> 0x10);
                uStack_4b = (undefined1)(cnt >> 8);
                uStack_4a = (undefined1)cnt;
                iVar3 = EVP_DigestUpdate(ctx,&local_4c,3);
                if ((iVar3 != 0) && (iVar3 = EVP_DigestUpdate(ctx,d,cnt), iVar3 != 0)) {
                  local_4c = (undefined1)((ushort)(short)param_2[0xe] >> 8);
                  uStack_4b = (undefined1)(short)param_2[0xe];
                  iVar3 = EVP_DigestUpdate(ctx,&local_4c,2);
                  if ((iVar3 != 0) &&
                     (((*(size_t *)(param_2 + 0xe) == 0 ||
                       (iVar3 = EVP_DigestUpdate(ctx,*(void **)(param_2 + 0xc),
                                                 *(size_t *)(param_2 + 0xe)), iVar3 != 0)) &&
                      (iVar2 = EVP_DigestVerifyFinal
                                         (ctx,*(uchar **)(param_2 + 0x12),
                                          *(size_t *)(param_2 + 0x14)), iVar2 == 0)))) {
                    ERR_new();
                    ERR_set_debug("crypto/ct/ct_vfy.c",0x88,"SCT_CTX_verify");
                    ERR_set_error(0x32,0x6b,0);
                  }
                }
              }
            }
          }
        }
LAB_001000d4:
        EVP_MD_CTX_free(ctx);
        goto LAB_00100122;
      }
      ERR_new();
      ERR_set_debug("crypto/ct/ct_vfy.c",0x75,"SCT_CTX_verify");
      ERR_set_error(0x32,0x74,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/ct/ct_vfy.c",0x71,"SCT_CTX_verify");
      ERR_set_error(0x32,0x72,0);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/ct/ct_vfy.c",0x6c,"SCT_CTX_verify");
    ERR_set_error(0x32,0x73,0);
  }
  iVar2 = 0;
LAB_00100122:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


