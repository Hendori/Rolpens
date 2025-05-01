
void oc_dequant_tables_init(long param_1,long param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *__s1;
  void *__s2;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  ushort *puVar16;
  long lVar17;
  long in_FS_OFFSET;
  long local_120;
  undefined8 *local_110;
  long local_108;
  long local_f0;
  int local_e8;
  int local_e4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0;
  do {
    lVar17 = 0;
    uVar4 = (uint)local_120;
    local_f0 = (ulong)(-uVar4 & 0x48) + param_3;
    do {
      iVar6 = *(int *)(local_f0 + 0x140);
      if (-1 < iVar6) {
        lVar11 = 0;
        iVar13 = 0;
        uVar2 = *(uint *)((long)&OC_DC_QUANT_MIN + local_120 * 4);
        uVar3 = *(uint *)((long)&OC_AC_QUANT_MIN + local_120 * 4);
        puVar12 = *(undefined8 **)(local_f0 + 0x150);
LAB_001000c7:
        local_88 = *puVar12;
        uStack_80 = puVar12[1];
        local_78 = puVar12[2];
        uStack_70 = puVar12[3];
        local_68 = puVar12[4];
        uStack_60 = puVar12[5];
        local_58 = puVar12[6];
        uStack_50 = puVar12[7];
        if (iVar6 == (int)lVar11) {
          local_e4 = iVar13 + 1;
        }
        else {
          local_e4 = *(int *)(*(long *)(local_f0 + 0x148) + lVar11 * 4) + iVar13;
        }
        local_108 = (long)(iVar13 + 1);
        puVar16 = (ushort *)(param_3 + (long)iVar13 * 2);
        local_110 = (undefined8 *)((long)iVar13 * 0x30 + param_1);
        local_e8 = 1;
        do {
          uVar1 = *puVar16;
          if (param_2 != 0) {
            *(uint *)(param_2 + -4 + local_108 * 4) = ((uint)uVar1 * (uint)(byte)local_88) / 0xa0;
          }
          uVar9 = ((uint)uVar1 * (uint)(byte)local_88) / 100 << 2;
          __s1 = (undefined2 *)local_110[lVar17 * 2 + local_120];
          if (0x1000 < uVar9) {
            uVar9 = 0x1000;
          }
          lVar7 = 1;
          uVar8 = (undefined2)uVar9;
          if (uVar9 < uVar2) {
            uVar8 = (undefined2)uVar2;
          }
          *__s1 = uVar8;
          do {
            uVar9 = ((uint)*(byte *)((long)&local_88 + (ulong)(byte)(&OC_FZIG_ZAG)[lVar7]) *
                    (uint)puVar16[0x40]) / 100 << 2;
            if (0x1000 < uVar9) {
              uVar9 = 0x1000;
            }
            uVar8 = (undefined2)uVar9;
            if (uVar9 < uVar3) {
              uVar8 = (undefined2)uVar3;
            }
            __s1[lVar7] = uVar8;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x40);
          uVar9 = 0;
          puVar10 = local_110;
          while( true ) {
            iVar6 = 3;
            if (uVar4 <= uVar9) {
              iVar6 = (int)lVar17;
            }
            puVar14 = puVar10;
            for (iVar15 = 0; iVar15 != iVar6; iVar15 = iVar15 + 1) {
              __s2 = (void *)*puVar14;
              puVar14 = puVar14 + 2;
              iVar5 = memcmp(__s1,__s2,0x80);
              if (iVar5 == 0) {
                local_110[lVar17 * 2 + local_120] = local_110[(long)(int)uVar9 + (long)iVar15 * 2];
                goto joined_r0x00100301;
              }
            }
            puVar10 = puVar10 + 1;
            if (uVar4 <= uVar9) break;
            uVar9 = 1;
          }
joined_r0x00100301:
          if (local_e4 <= (int)local_108) goto LAB_00100399;
          lVar7 = 0;
          iVar6 = *(int *)(*(long *)(local_f0 + 0x148) + lVar11 * 4);
          do {
            *(char *)((long)&local_88 + lVar7) =
                 (char)((int)(iVar6 + ((uint)*(byte *)((long)puVar12 + lVar7) *
                                       (local_e4 - (int)local_108) +
                                      (uint)*(byte *)((long)(puVar12 + 8) + lVar7) * local_e8) * 2)
                       / (iVar6 * 2));
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x40);
          local_108 = local_108 + 1;
          puVar16 = puVar16 + 1;
          local_e8 = local_e8 + 1;
          local_110 = local_110 + 6;
        } while( true );
      }
LAB_00100400:
      lVar17 = lVar17 + 1;
      local_f0 = local_f0 + 0x18;
    } while (lVar17 != 3);
    if (local_120 != 0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_120 = 1;
  } while( true );
LAB_00100399:
  iVar6 = (local_e4 - iVar13) + -1;
  if (local_e4 <= iVar13) {
    iVar6 = 0;
  }
  lVar11 = lVar11 + 1;
  iVar13 = iVar13 + 1 + iVar6;
  iVar6 = *(int *)(local_f0 + 0x140);
  puVar12 = puVar12 + 8;
  if (iVar6 < (int)lVar11) goto LAB_00100400;
  goto LAB_001000c7;
}


