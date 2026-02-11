
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ERR_set_mark(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = ossl_err_get_state_int();
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x380);
    bVar4 = *(int *)(lVar3 + 900) != iVar2;
    if (bVar4) {
      piVar1 = (int *)(lVar3 + 0x40 + (long)iVar2 * 4);
      *piVar1 = *piVar1 + 1;
    }
    return (uint)bVar4;
  }
  return 0;
}



undefined8 ERR_pop(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = ossl_err_get_state_int();
  if (lVar4 != 0) {
    uVar6 = 0;
    lVar5 = (long)*(int *)(lVar4 + 0x380);
    if (*(int *)(lVar4 + 900) != *(int *)(lVar4 + 0x380)) {
      puVar1 = (undefined4 *)(lVar4 + lVar5 * 4);
      if ((*(byte *)(puVar1 + 0x80) & 1) == 0) {
        *(undefined8 *)(lVar4 + 0x100 + lVar5 * 8) = 0;
        *(undefined8 *)(lVar4 + 0x180 + lVar5 * 8) = 0;
        puVar1[0x80] = 0;
      }
      else {
        puVar2 = *(undefined1 **)(lVar4 + 0x100 + lVar5 * 8);
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0;
          puVar1[0x80] = 1;
        }
      }
      lVar5 = lVar4 + lVar5 * 8;
      puVar1[0x10] = 0;
      *puVar1 = 0;
      *(undefined8 *)(lVar5 + 0x80) = 0;
      puVar1[0xb0] = 0xffffffff;
      CRYPTO_free(*(void **)(lVar5 + 0x240));
      *(undefined8 *)(lVar5 + 0x240) = 0;
      CRYPTO_free(*(void **)(lVar5 + 0x300));
      *(undefined8 *)(lVar5 + 0x300) = 0;
      iVar3 = *(int *)(lVar4 + 0x380) + -1;
      if (*(int *)(lVar4 + 0x380) < 1) {
        iVar3 = 0xf;
      }
      uVar6 = 1;
      *(int *)(lVar4 + 0x380) = iVar3;
    }
    return uVar6;
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ERR_pop_to_mark(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = ossl_err_get_state_int();
  if (lVar4 != 0) {
    iVar7 = *(int *)(lVar4 + 900);
    iVar6 = *(int *)(lVar4 + 0x380);
    if (iVar6 != iVar7) {
      do {
        lVar5 = (long)iVar6;
        puVar1 = (undefined4 *)(lVar4 + lVar5 * 4);
        if (puVar1[0x10] != 0) {
          if (iVar7 == iVar6) {
            return 0;
          }
          piVar2 = (int *)(lVar4 + 0x40 + lVar5 * 4);
          *piVar2 = *piVar2 + -1;
          return 1;
        }
        if ((*(byte *)(puVar1 + 0x80) & 1) == 0) {
          *(undefined8 *)(lVar4 + 0x100 + lVar5 * 8) = 0;
          *(undefined8 *)(lVar4 + 0x180 + lVar5 * 8) = 0;
          puVar1[0x80] = 0;
        }
        else {
          puVar3 = *(undefined1 **)(lVar4 + 0x100 + lVar5 * 8);
          if (puVar3 != (undefined1 *)0x0) {
            *puVar3 = 0;
            puVar1[0x80] = 1;
          }
        }
        lVar5 = lVar4 + lVar5 * 8;
        puVar1[0x10] = 0;
        *puVar1 = 0;
        *(undefined8 *)(lVar5 + 0x80) = 0;
        puVar1[0xb0] = 0xffffffff;
        CRYPTO_free(*(void **)(lVar5 + 0x240));
        *(undefined8 *)(lVar5 + 0x240) = 0;
        CRYPTO_free(*(void **)(lVar5 + 0x300));
        *(undefined8 *)(lVar5 + 0x300) = 0;
        iVar7 = *(int *)(lVar4 + 900);
        iVar6 = *(int *)(lVar4 + 0x380) + -1;
        if (*(int *)(lVar4 + 0x380) < 1) {
          iVar6 = 0xf;
        }
        *(int *)(lVar4 + 0x380) = iVar6;
      } while (iVar7 != iVar6);
    }
  }
  return 0;
}



int ERR_count_to_mark(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = ossl_err_get_state_int();
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = 0;
  iVar4 = *(int *)(lVar3 + 0x380);
  while ((iVar4 != *(int *)(lVar3 + 900) && (*(int *)(lVar3 + 0x40 + (long)iVar4 * 4) == 0))) {
    iVar2 = iVar2 + 1;
    bVar1 = iVar4 < 1;
    iVar4 = iVar4 + -1;
    if (bVar1) {
      iVar4 = 0xf;
    }
  }
  return iVar2;
}



undefined4 ERR_clear_last_mark(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar3 = ossl_err_get_state_int();
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 900);
    for (iVar4 = *(int *)(lVar3 + 0x380); iVar2 != iVar4; iVar4 = iVar4 + -1) {
      lVar5 = (long)iVar4;
      if (*(int *)(lVar3 + 0x40 + lVar5 * 4) != 0) goto LAB_00100395;
      if (iVar4 < 1) {
        if (iVar2 == 0xf) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x7c) != 0) {
          lVar5 = 0xf;
LAB_00100395:
          piVar1 = (int *)(lVar3 + 0x40 + lVar5 * 4);
          *piVar1 = *piVar1 + -1;
          return 1;
        }
        if (iVar2 == 0xe) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x78) != 0) {
          lVar5 = 0xe;
          goto LAB_00100395;
        }
        iVar4 = 0xe;
      }
    }
  }
  return 0;
}


