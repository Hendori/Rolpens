
int X509_certificate_type(X509 *x,EVP_PKEY *pubkey)

{
  int iVar1;
  uint uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((x == (X509 *)0x0) ||
     ((pubkey == (EVP_PKEY *)0x0 &&
      (pubkey = (EVP_PKEY *)X509_get0_pubkey(x), pubkey == (EVP_PKEY *)0x0)))) {
    uVar2 = 0;
    goto LAB_00100075;
  }
  iVar1 = EVP_PKEY_get_id(pubkey);
  if (iVar1 == 0x198) {
    uVar2 = 0x58;
LAB_00100065:
    local_24 = X509_get_signature_nid(x);
  }
  else {
    if (iVar1 < 0x199) {
      uVar2 = 0x44;
      if ((iVar1 != 0x1c) && (uVar2 = 0x12, iVar1 != 0x74)) {
        uVar2 = 0;
        if (iVar1 == 6) {
          uVar2 = 0x31;
        }
      }
      goto LAB_00100065;
    }
    if (0x3d4 < iVar1) {
      uVar2 = (uint)(iVar1 - 0x43fU < 2) << 4;
      goto LAB_00100065;
    }
    uVar2 = 0x50;
    if ((0x3d2 < iVar1) || (iVar1 == 0x32b)) goto LAB_00100065;
    uVar2 = 0;
    if (iVar1 == 0x390) {
      uVar2 = 0x11;
    }
    local_24 = X509_get_signature_nid(x);
  }
  if ((local_24 == 0) || (iVar1 = OBJ_find_sigid_algs(local_24,(int *)0x0,&local_24), iVar1 == 0))
  goto LAB_00100075;
  if (local_24 == 0x74) {
LAB_00100188:
    uVar2 = uVar2 | 0x200;
  }
  else {
    if (0x74 < local_24) {
      if (local_24 == 0x198) {
        uVar2 = uVar2 | 0x400;
      }
      goto LAB_00100075;
    }
    if (local_24 != 0x13) {
      if (local_24 == 0x43) goto LAB_00100188;
      if (local_24 != 6) goto LAB_00100075;
    }
    uVar2 = uVar2 | 0x100;
  }
LAB_00100075:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


