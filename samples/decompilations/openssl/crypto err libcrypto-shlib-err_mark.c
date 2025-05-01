
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
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  lVar5 = ossl_err_get_state_int();
  if (lVar5 != 0) {
    iVar8 = *(int *)(lVar5 + 900);
    iVar7 = *(int *)(lVar5 + 0x380);
    if (iVar7 != iVar8) {
      do {
        lVar6 = (long)iVar7;
        puVar1 = (undefined4 *)(lVar5 + lVar6 * 4);
        iVar3 = puVar1[0x10];
        while( true ) {
          if (iVar3 != 0) {
            if (iVar8 == iVar7) {
              return 0;
            }
            piVar2 = (int *)(lVar5 + 0x40 + lVar6 * 4);
            *piVar2 = *piVar2 + -1;
            return 1;
          }
          if ((*(byte *)(puVar1 + 0x80) & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x100 + lVar6 * 8) = 0;
            *(undefined8 *)(lVar5 + 0x180 + lVar6 * 8) = 0;
            puVar1[0x80] = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar5 + 0x100 + lVar6 * 8);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              puVar1[0x80] = 1;
            }
          }
          lVar6 = lVar5 + lVar6 * 8;
          puVar1[0x10] = 0;
          *puVar1 = 0;
          *(undefined8 *)(lVar6 + 0x80) = 0;
          puVar1[0xb0] = 0xffffffff;
          CRYPTO_free(*(void **)(lVar6 + 0x240));
          *(undefined8 *)(lVar6 + 0x240) = 0;
          CRYPTO_free(*(void **)(lVar6 + 0x300));
          *(undefined8 *)(lVar6 + 0x300) = 0;
          if (0 < *(int *)(lVar5 + 0x380)) break;
          *(undefined4 *)(lVar5 + 0x380) = 0xf;
          iVar8 = *(int *)(lVar5 + 900);
          if (iVar8 == 0xf) {
            return 0;
          }
          iVar7 = 0xf;
          lVar6 = 0xf;
          puVar1 = (undefined4 *)(lVar5 + 0x3c);
          iVar3 = *(int *)(lVar5 + 0x7c);
        }
        iVar8 = *(int *)(lVar5 + 900);
        iVar7 = *(int *)(lVar5 + 0x380) + -1;
        *(int *)(lVar5 + 0x380) = iVar7;
      } while (iVar7 != iVar8);
    }
  }
  return 0;
}



int ERR_count_to_mark(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = ossl_err_get_state_int();
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + 0x380);
    iVar1 = *(int *)(lVar2 + 900);
    iVar3 = 0;
    if (iVar4 != iVar1) {
      do {
        if (*(int *)(lVar2 + 0x40 + (long)iVar4 * 4) != 0) {
          return iVar3;
        }
        iVar5 = iVar3 + 1;
        if (iVar4 < 1) {
          if (iVar1 == 0xf) {
            return iVar5;
          }
          if (*(int *)(lVar2 + 0x7c) != 0) {
            return iVar5;
          }
          iVar4 = 0xf;
          iVar5 = iVar3 + 2;
        }
        iVar3 = iVar5;
        iVar4 = iVar4 + -1;
        if (iVar4 == iVar1) {
          return iVar3;
        }
      } while( true );
    }
  }
  return 0;
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
      if (*(int *)(lVar3 + 0x40 + lVar5 * 4) != 0) goto LAB_001003e5;
      if (iVar4 < 1) {
        if (iVar2 == 0xf) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x7c) != 0) {
          lVar5 = 0xf;
LAB_001003e5:
          piVar1 = (int *)(lVar3 + 0x40 + lVar5 * 4);
          *piVar1 = *piVar1 + -1;
          return 1;
        }
        if (iVar2 == 0xe) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x78) != 0) {
          lVar5 = 0xe;
          goto LAB_001003e5;
        }
        iVar4 = 0xe;
      }
    }
  }
  return 0;
}


