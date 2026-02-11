
EVP_PKEY * d2i_KeyParams(int param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  EVP_PKEY *pkey;
  
  if (((param_2 != (long *)0x0) && (pkey = (EVP_PKEY *)*param_2, pkey != (EVP_PKEY *)0x0)) ||
     (pkey = EVP_PKEY_new(), pkey != (EVP_PKEY *)0x0)) {
    iVar2 = EVP_PKEY_get_id(pkey);
    if ((iVar2 == param_1) || (iVar2 = EVP_PKEY_set_type(pkey,param_1), iVar2 != 0)) {
      if ((*(long *)&pkey->references == 0) ||
         (pcVar1 = *(code **)(*(long *)&pkey->references + 0x70), pcVar1 == (code *)0x0)) {
        ERR_new();
        ERR_set_debug("crypto/asn1/d2i_param.c",0x21,"d2i_KeyParams");
        ERR_set_error(0xd,0xc4,0);
      }
      else {
        iVar2 = (*pcVar1)(pkey,param_3,param_4);
        if (iVar2 != 0) {
          if (param_2 != (long *)0x0) {
            *param_2 = (long)pkey;
          }
          return pkey;
        }
      }
    }
    if ((param_2 == (long *)0x0) || ((EVP_PKEY *)*param_2 != pkey)) {
      EVP_PKEY_free(pkey);
    }
  }
  return (EVP_PKEY *)0x0;
}



undefined8 d2i_KeyParams_bio(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  BUF_MEM *local_30;
  char *local_28;
  long local_20;
  
  uVar2 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (BUF_MEM *)0x0;
  iVar1 = asn1_d2i_read_bio(param_3,&local_30);
  if (-1 < iVar1) {
    local_28 = local_30->data;
    uVar2 = d2i_KeyParams(param_1,param_2,&local_28,(long)iVar1);
  }
  BUF_MEM_free(local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


