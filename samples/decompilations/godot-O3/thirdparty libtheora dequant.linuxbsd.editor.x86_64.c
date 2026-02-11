
/* WARNING: Type propagation algorithm not settling */

undefined8 oc_quant_params_unpack(undefined8 param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  void *__ptr;
  int *piVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined2 *puVar15;
  undefined1 *puVar16;
  long lVar17;
  size_t sVar18;
  undefined2 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long lVar22;
  long in_FS_OFFSET;
  ulong local_278;
  int local_24c [65];
  int local_148 [66];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = oc_pack_read_c(param_1,3);
  puVar15 = param_2 + 0x80;
  do {
    puVar19 = (undefined2 *)((long)puVar15 + 1);
    uVar1 = oc_pack_read_c(param_1,uVar3);
    *(undefined1 *)puVar15 = uVar1;
    puVar15 = puVar19;
  } while (puVar19 != param_2 + 0xa0);
  iVar4 = oc_pack_read_c(param_1,4);
  puVar15 = param_2 + 0x40;
  do {
    puVar19 = puVar15 + 1;
    uVar2 = oc_pack_read_c(param_1,iVar4 + 1);
    *puVar15 = uVar2;
    puVar15 = puVar19;
  } while (puVar19 != param_2 + 0x80);
  iVar4 = oc_pack_read_c(param_1,4);
  puVar15 = param_2;
  do {
    puVar19 = puVar15 + 1;
    uVar2 = oc_pack_read_c(param_1,iVar4 + 1);
    *puVar15 = uVar2;
    puVar15 = puVar19;
  } while (puVar19 != param_2 + 0x40);
  uVar5 = oc_pack_read_c(param_1,9);
  iVar4 = uVar5 + 1;
  local_24c[0] = iVar4;
  __ptr = malloc((long)iVar4 << 6);
  if (__ptr == (void *)0x0) {
LAB_00100451:
    uVar12 = 0xffffffff;
  }
  else {
    if (0 < iVar4) {
      puVar16 = (undefined1 *)((long)__ptr + 0x40);
      do {
        puVar20 = puVar16 + -0x40;
        do {
          puVar21 = puVar20 + 1;
          uVar1 = oc_pack_read_c(param_1,8);
          *puVar20 = uVar1;
          puVar20 = puVar21;
        } while (puVar16 != puVar21);
        puVar16 = puVar16 + 0x40;
      } while (puVar16 != (undefined1 *)((long)__ptr + (ulong)uVar5 * 0x40 + 0x80));
    }
    uVar3 = oc_ilog(uVar5);
    local_278 = 0;
LAB_00100177:
    do {
      lVar17 = (long)((int)local_278 + (int)((local_278 & 0xffffffff) / 3) * -3) * 0x18;
      piVar8 = (int *)((long)param_2 +
                      lVar17 + 0x140 + (ulong)(-(int)((local_278 & 0xffffffff) / 3) & 0x48));
      if ((local_278 == 0) || (iVar4 = oc_pack_read1_c(param_1), iVar4 != 0)) {
        iVar4 = 0;
        local_148[0] = oc_pack_read_c(param_1,uVar3);
        lVar17 = 1;
        do {
          lVar13 = lVar17;
          uVar6 = oc_ilog(0x3e - iVar4);
          iVar7 = oc_pack_read_c(param_1,uVar6);
          local_24c[lVar13] = iVar7 + 1;
          iVar4 = iVar4 + iVar7 + 1;
          iVar7 = oc_pack_read_c(param_1,uVar3);
          local_148[lVar13] = iVar7;
          lVar17 = lVar13 + 1;
        } while (iVar4 < 0x3f);
        if (iVar4 == 0x3f) {
          iVar4 = (int)lVar13;
          lVar17 = (long)iVar4;
          sVar18 = lVar17 * 4;
          *piVar8 = iVar4;
          pvVar10 = malloc(sVar18);
          *(void **)(piVar8 + 2) = pvVar10;
          if (pvVar10 != (void *)0x0) {
            __memcpy_chk(pvVar10,local_24c + 1,sVar18,sVar18);
            sVar18 = (long)(iVar4 + 1) << 6;
            pvVar10 = malloc(sVar18);
            iVar4 = local_24c[0];
            if (pvVar10 != (void *)0x0) {
              *(void **)(piVar8 + 4) = pvVar10;
              pvVar10 = (void *)((long)pvVar10 + lVar17 * 0x40);
              lVar11 = lVar17;
              do {
                if (iVar4 <= local_148[lVar11]) goto LAB_0010039d;
                uVar14 = lVar11 * 0x40;
                if ((ulong)(lVar11 * 0x40) <= sVar18) {
                  uVar14 = sVar18;
                }
                lVar22 = lVar11 + -1;
                lVar11 = __memcpy_chk(pvVar10,(void *)((long)__ptr + (long)local_148[lVar11] * 0x40)
                                      ,0x40,uVar14 + lVar11 * -0x40);
                pvVar10 = (void *)(lVar11 + -0x40);
                lVar11 = lVar22;
              } while ((lVar17 + -1) - lVar13 != lVar22);
              goto LAB_00100209;
            }
          }
          free(__ptr);
          goto LAB_00100451;
        }
LAB_0010039d:
        free(__ptr);
        uVar12 = 0xffffffec;
        goto LAB_001003aa;
      }
      if (local_278 < 3) {
        uVar12 = *(undefined8 *)(param_2 + local_278 * 0xc + 0x98);
        *(undefined8 *)piVar8 = *(undefined8 *)(param_2 + local_278 * 0xc + 0x94);
        *(undefined8 *)(piVar8 + 2) = uVar12;
        *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(param_2 + local_278 * 0xc + 0x9c);
        local_278 = local_278 + 1;
        goto LAB_00100177;
      }
      iVar4 = oc_pack_read1_c(param_1);
      lVar13 = 0x140;
      if (iVar4 == 0) {
        uVar5 = (int)local_278 - 1;
        lVar13 = (ulong)(-(uVar5 / 3) & 0x48) + 0x140;
        lVar17 = (long)(int)(uVar5 % 3) * 0x18;
      }
      puVar9 = (undefined8 *)((long)param_2 + lVar13 + lVar17);
      uVar12 = puVar9[1];
      *(undefined8 *)piVar8 = *puVar9;
      *(undefined8 *)(piVar8 + 2) = uVar12;
      *(undefined8 *)(piVar8 + 4) = puVar9[2];
LAB_00100209:
      local_278 = local_278 + 1;
    } while (local_278 != 6);
    free(__ptr);
    uVar12 = 0;
  }
LAB_001003aa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



void oc_quant_params_clear(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  uVar6 = 5;
  while( true ) {
    while( true ) {
      iVar5 = (int)uVar6;
      lVar3 = (long)(int)(uVar6 / 3);
      uVar1 = iVar5 - 1;
      lVar2 = (long)(iVar5 + (int)(uVar6 / 3) * -3);
      lVar4 = lVar3 * 0x48 + lVar2 * 0x18 + param_1;
      if (*(long *)(lVar4 + 0x148) ==
          *(long *)(param_1 + 0x148 + (long)(int)(uVar1 / 3) * 0x48 + (long)(int)(uVar1 % 3) * 0x18)
         ) {
        *(undefined8 *)(lVar4 + 0x148) = 0;
      }
      lVar3 = lVar3 * 0x48 + lVar2 * 0x18 + param_1;
      if (*(long *)(lVar3 + 0x150) ==
          *(long *)(param_1 + 0x150 + (long)(int)(uVar1 / 3) * 0x48 + (long)(int)(uVar1 % 3) * 0x18)
         ) {
        *(undefined8 *)(lVar3 + 0x150) = 0;
      }
      if (iVar5 < 3) break;
      lVar3 = param_1 + lVar2 * 0x18;
      if (*(long *)(lVar3 + 400) == *(long *)(lVar3 + 0x148)) {
        *(undefined8 *)(lVar3 + 400) = 0;
      }
      lVar2 = param_1 + lVar2 * 0x18;
      if (*(long *)(lVar2 + 0x198) == *(long *)(lVar2 + 0x150)) {
        *(undefined8 *)(lVar2 + 0x198) = 0;
      }
      free(*(void **)(lVar2 + 400));
      uVar6 = (ulong)uVar1;
      free(*(void **)(lVar2 + 0x198));
    }
    lVar2 = param_1 + lVar2 * 0x18;
    free(*(void **)(lVar2 + 0x148));
    free(*(void **)(lVar2 + 0x150));
    if (iVar5 == 1) break;
    uVar6 = 1;
  }
  free(*(void **)(param_1 + 0x148));
  free(*(void **)(param_1 + 0x150));
  return;
}


