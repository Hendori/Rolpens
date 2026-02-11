
int X509_certificate_type(X509 *x,EVP_PKEY *pubkey)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((x == (X509 *)0x0) ||
     ((pubkey == (EVP_PKEY *)0x0 &&
      (pubkey = (EVP_PKEY *)X509_get0_pubkey(x), pubkey == (EVP_PKEY *)0x0)))) {
    uVar2 = 0;
  }
  else {
    iVar1 = EVP_PKEY_get_id(pubkey);
    if (iVar1 == 0x198) {
      uVar3 = 0x158;
      uVar5 = 600;
      uVar4 = 0x458;
      uVar6 = 0x58;
    }
    else if (iVar1 < 0x199) {
      if (iVar1 == 0x1c) {
        uVar3 = 0x144;
        uVar5 = 0x244;
        uVar4 = 0x444;
        uVar6 = 0x44;
      }
      else if (iVar1 == 0x74) {
        uVar3 = 0x112;
        uVar5 = 0x212;
        uVar4 = 0x412;
        uVar6 = 0x12;
      }
      else {
        bVar7 = iVar1 == 6;
        uVar3 = 0x100;
        if (bVar7) {
          uVar3 = 0x131;
        }
        uVar5 = 0x200;
        if (bVar7) {
          uVar5 = 0x231;
        }
        uVar4 = 0x400;
        if (bVar7) {
          uVar4 = 0x431;
        }
        uVar6 = 0;
        if (bVar7) {
          uVar6 = 0x31;
        }
      }
    }
    else if (iVar1 < 0x3d5) {
      if ((iVar1 < 0x3d3) && (iVar1 != 0x32b)) {
        bVar7 = iVar1 == 0x390;
        uVar3 = 0x100;
        if (bVar7) {
          uVar3 = 0x111;
        }
        uVar5 = 0x200;
        if (bVar7) {
          uVar5 = 0x211;
        }
        uVar4 = 0x400;
        if (bVar7) {
          uVar4 = 0x411;
        }
        uVar6 = 0;
        if (bVar7) {
          uVar6 = 0x11;
        }
      }
      else {
        uVar3 = 0x150;
        uVar5 = 0x250;
        uVar4 = 0x450;
        uVar6 = 0x50;
      }
    }
    else {
      uVar2 = iVar1 - 0x43f;
      uVar3 = (-(uint)(uVar2 < 2) & 0x10) + 0x100;
      uVar5 = (-(uint)(uVar2 < 2) & 0x10) + 0x200;
      uVar4 = (-(uint)(uVar2 < 2) & 0x10) + 0x400;
      uVar6 = -(uint)(uVar2 < 2) & 0x10;
    }
    local_34 = X509_get_signature_nid(x);
    uVar2 = uVar6;
    if (((local_34 != 0) && (iVar1 = OBJ_find_sigid_algs(local_34,(int *)0x0,&local_34), iVar1 != 0)
        ) && (uVar2 = uVar5, local_34 != 0x74)) {
      if (local_34 < 0x75) {
        uVar2 = uVar3;
        if (((local_34 != 0x13) && (uVar2 = uVar5, local_34 != 0x43)) &&
           (uVar2 = uVar6, local_34 == 6)) {
          uVar2 = uVar3;
        }
      }
      else {
        uVar2 = uVar6;
        if (local_34 == 0x198) {
          uVar2 = uVar4;
        }
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


