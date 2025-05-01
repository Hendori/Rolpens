
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pcre2_serialize_encode_16
              (long *param_1,int param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  void *__src;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  byte bVar12;
  
  bVar12 = 0;
  puVar4 = (undefined8 *)&_pcre2_default_compile_context_16;
  if (param_5 != (undefined8 *)0x0) {
    puVar4 = param_5;
  }
  if ((param_3 == (long *)0x0 || param_4 == (long *)0x0) || (param_1 == (long *)0x0)) {
LAB_001001a8:
    iVar3 = -0x33;
  }
  else if (param_2 < 1) {
    iVar3 = -0x1d;
  }
  else {
    plVar1 = param_1 + param_2;
    lVar11 = 0x450;
    plVar8 = param_1;
    puVar10 = (undefined8 *)0x0;
    do {
      while( true ) {
        lVar9 = *plVar8;
        if (lVar9 == 0) goto LAB_001001a8;
        if (*(int *)(lVar9 + 0x50) != 0x50435245) {
          return -0x1f;
        }
        puVar5 = *(undefined8 **)(lVar9 + 0x18);
        if (puVar10 != (undefined8 *)0x0) break;
        lVar11 = lVar11 + *(long *)(lVar9 + 0x48);
        plVar8 = plVar8 + 1;
        puVar10 = puVar5;
        if (plVar8 == plVar1) goto LAB_001000be;
      }
      if (puVar5 != puVar10) {
        return -0x1e;
      }
      lVar11 = lVar11 + *(long *)(lVar9 + 0x48);
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
LAB_001000be:
    puVar5 = (undefined8 *)(*(code *)*puVar4)(lVar11 + 0x18,puVar4[2]);
    if (puVar5 != (undefined8 *)0x0) {
      uVar2 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar2;
      uVar2 = puVar4[2];
      *(undefined4 *)(puVar5 + 4) = 0x80802;
      puVar5[2] = uVar2;
      uVar2 = __LC0;
      *(int *)((long)puVar5 + 0x24) = param_2;
      puVar5[3] = uVar2;
      lVar9 = (long)puVar5 + (0x28 - (long)((ulong)(puVar5 + 6) & 0xfffffffffffffff8));
      puVar5[5] = *puVar10;
      puVar5[0x8c] = puVar10[0x87];
      puVar4 = (undefined8 *)((long)puVar10 - lVar9);
      puVar10 = (undefined8 *)((ulong)(puVar5 + 6) & 0xfffffffffffffff8);
      for (uVar7 = (ulong)((int)lVar9 + 0x440U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar4;
        puVar4 = puVar4 + (ulong)bVar12 * -2 + 1;
        puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
      }
      puVar4 = puVar5 + 0x8d;
      do {
        __src = (void *)*param_1;
        param_1 = param_1 + 1;
        pauVar6 = (undefined1 (*) [16])memcpy(puVar4,__src,*(size_t *)((long)__src + 0x48));
        *(undefined8 *)pauVar6[1] = 0;
        *(undefined8 *)(pauVar6[1] + 8) = 0;
        *(undefined8 *)pauVar6[2] = 0;
        *pauVar6 = (undefined1  [16])0x0;
        puVar4 = (undefined8 *)(*pauVar6 + *(long *)((long)__src + 0x48));
      } while (param_1 != plVar1);
      *param_3 = (long)(puVar5 + 3);
      *param_4 = lVar11;
      return param_2;
    }
    iVar3 = -0x30;
  }
  return iVar3;
}



int pcre2_serialize_decode_16(undefined8 *param_1,int param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  int local_3c;
  
  bVar10 = 0;
  puVar9 = (undefined8 *)&_pcre2_default_compile_context_16;
  if (param_4 != (undefined8 *)0x0) {
    puVar9 = param_4;
  }
  if ((param_3 == (int *)0x0) || (param_1 == (undefined8 *)0x0)) {
    local_3c = -0x33;
  }
  else if (param_2 < 1) {
    local_3c = -0x1d;
  }
  else {
    iVar1 = param_3[3];
    if (iVar1 < 1) {
LAB_0010038b:
      local_3c = -0x3e;
    }
    else if (*param_3 == 0x50523253) {
      if ((param_3[1] == 0x2b000a) && (param_3[2] == 0x80802)) {
        local_3c = param_2;
        if (iVar1 <= param_2) {
          local_3c = iVar1;
        }
        puVar2 = (undefined8 *)(*(code *)*puVar9)(0x448,puVar9[2]);
        if (puVar2 == (undefined8 *)0x0) {
LAB_001003ee:
          local_3c = -0x30;
        }
        else {
          *puVar2 = *(undefined8 *)(param_3 + 4);
          lVar4 = (long)puVar2 - (long)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
          puVar2[0x87] = *(undefined8 *)(param_3 + 0x112);
          piVar6 = param_3 + 0x114;
          puVar7 = (undefined8 *)((long)param_3 + (0x10 - lVar4));
          puVar8 = (undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
          for (uVar5 = (ulong)((int)lVar4 + 0x440U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
            puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
          }
          lVar4 = 0;
          puVar2[0x88] = (long)local_3c;
          do {
            uVar5 = *(ulong *)(piVar6 + 0x12);
            if (uVar5 < 0x89) goto LAB_0010038b;
            lVar3 = _pcre2_memctl_malloc_16(uVar5,param_4);
            if (lVar3 == 0) {
              (*(code *)puVar9[1])(puVar2,puVar9[2]);
              if ((int)lVar4 != 0) {
                puVar2 = param_1;
                do {
                  puVar7 = puVar2 + 1;
                  (*(code *)puVar9[1])(*puVar2,puVar9[2]);
                  *puVar2 = 0;
                  puVar2 = puVar7;
                } while (puVar7 != param_1 + (int)lVar4);
              }
              goto LAB_001003ee;
            }
            memcpy((void *)(lVar3 + 0x18),piVar6 + 6,uVar5 - 0x18);
            if (((*(int *)(lVar3 + 0x50) != 0x50435245) || (0x22 < *(ushort *)(lVar3 + 0x84))) ||
               (10000 < *(ushort *)(lVar3 + 0x86))) {
              (*(code *)puVar9[1])(lVar3,puVar9[2]);
              goto LAB_0010038b;
            }
            *(undefined8 **)(lVar3 + 0x18) = puVar2;
            piVar6 = (int *)((long)piVar6 + uVar5);
            *(uint *)(lVar3 + 0x60) = *(uint *)(lVar3 + 0x60) | 0x40000;
            *(undefined8 *)(lVar3 + 0x20) = 0;
            param_1[lVar4] = lVar3;
            lVar4 = lVar4 + 1;
          } while (local_3c != lVar4);
        }
      }
      else {
        local_3c = -0x20;
      }
    }
    else {
      local_3c = -0x1f;
    }
  }
  return local_3c;
}



int pcre2_serialize_get_number_of_codes_16(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return -0x33;
  }
  if (*param_1 == 0x50523253) {
    if ((param_1[1] == 0x2b000a) && (param_1[2] == 0x80802)) {
      return param_1[3];
    }
    return -0x20;
  }
  return -0x1f;
}



void pcre2_serialize_free_16(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00100498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + -0x10))(param_1 + -0x18,*(undefined8 *)(param_1 + -8));
    return;
  }
  return;
}


