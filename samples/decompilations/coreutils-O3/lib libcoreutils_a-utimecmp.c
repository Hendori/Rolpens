
ulong dev_info_hash(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}



undefined8 dev_info_compare(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}



uint utimecmpat(int param_1,char *param_2,undefined8 *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  ulong local_148;
  undefined8 *local_140;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  timespec local_f8;
  ulong local_e8;
  long lStack_e0;
  stat local_d8;
  long local_40;
  
  uVar1 = param_3[0xb];
  uVar20 = *(ulong *)(param_4 + 0x58);
  iVar19 = (int)*(undefined8 *)(param_4 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar21 = uVar1 == uVar20;
  param_5 = param_5 & 1;
  iVar18 = (int)param_3[0xc];
  if (param_5 != 0) {
    bVar8 = iVar18 == iVar19 && bVar21;
    local_148 = (ulong)bVar8;
    if (bVar8) {
      param_5 = 0;
      goto LAB_0010017c;
    }
    if ((long)uVar1 < (long)(uVar20 - 1)) {
LAB_001001b8:
      param_5 = 0xffffffff;
      goto LAB_0010017c;
    }
    if ((long)uVar20 < (long)(uVar1 - 1)) goto LAB_0010017c;
    if ((ht_1 == 0) && (ht_1 = hash_initialize(0x10,0,0x100000,dev_info_compare,&free), ht_1 == 0))
    {
LAB_00100217:
      local_140 = &local_108;
      local_100 = 2000000000;
      local_fc = 0;
      iVar14 = 2000000000;
    }
    else {
      lVar13 = ht_1;
      puVar11 = new_dst_res_0;
      if (new_dst_res_0 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)malloc(0x10);
        new_dst_res_0 = puVar11;
        if (puVar11 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar11 + 1) = 2000000000;
          *(undefined1 *)((long)puVar11 + 0xc) = 0;
          goto LAB_001000c5;
        }
LAB_00100a00:
        local_108 = *param_3;
        local_140 = (undefined8 *)hash_lookup(lVar13,&local_108);
        if (local_140 == (undefined8 *)0x0) goto LAB_00100217;
      }
      else {
LAB_001000c5:
        *puVar11 = *param_3;
        local_140 = (undefined8 *)hash_insert(lVar13);
        if (local_140 == (undefined8 *)0x0) {
          lVar13 = ht_1;
          if (ht_1 == 0) goto LAB_00100217;
          goto LAB_00100a00;
        }
        if (new_dst_res_0 == local_140) {
          new_dst_res_0 = (undefined8 *)0x0;
        }
      }
      iVar14 = *(int *)(local_140 + 1);
      if (*(char *)((long)local_140 + 0xc) != '\0') {
        uVar20 = uVar20 & (long)(int)~(uint)(iVar14 == 2000000000);
        iVar19 = iVar19 - iVar19 % iVar14;
        bVar21 = uVar1 == uVar20;
        goto LAB_00100150;
      }
    }
    uVar2 = param_3[9];
    iVar16 = (int)param_3[10];
    iVar9 = (int)param_3[0xe] / 10;
    if (iVar18 % 10 == 0 && (iVar16 % 10 == 0 && (int)param_3[0xe] % 10 == 0)) {
      uVar10 = uVar20;
      if (iVar14 < 0xb) {
LAB_00100b40:
        uVar17 = 0xffffffffffffffff;
        uVar15 = 10;
        *(undefined4 *)(local_140 + 1) = 10;
      }
      else {
        iVar3 = (iVar16 / 10) / 10;
        iVar4 = iVar9 / 10;
        iVar5 = (iVar18 / 10) / 10;
        if ((iVar18 / 10) % 10 != 0 || ((iVar16 / 10) % 10 != 0 || iVar9 % 10 != 0))
        goto LAB_00100b40;
        if (iVar14 < 0x65) {
LAB_00100aee:
          uVar15 = 100;
LAB_00100af8:
          uVar17 = 0xffffffffffffffff;
          *(int *)(local_140 + 1) = (int)uVar15;
        }
        else {
          iVar9 = iVar4 / 10;
          iVar6 = iVar3 / 10;
          iVar7 = iVar5 / 10;
          if (iVar5 % 10 != 0 || (iVar4 % 10 != 0 || iVar3 % 10 != 0)) goto LAB_00100aee;
          if (iVar14 < 0x3e9) {
LAB_00100b0f:
            uVar15 = 1000;
            goto LAB_00100af8;
          }
          iVar3 = iVar9 / 10;
          iVar4 = iVar6 / 10;
          iVar5 = iVar7 / 10;
          if (iVar7 % 10 != 0 || (iVar6 % 10 != 0 || iVar9 % 10 != 0)) goto LAB_00100b0f;
          if (iVar14 < 0x2711) {
LAB_00100b16:
            uVar15 = 10000;
            goto LAB_00100af8;
          }
          iVar9 = iVar3 / 10;
          iVar6 = iVar4 / 10;
          iVar7 = iVar5 / 10;
          if (iVar5 % 10 != 0 || (iVar4 % 10 != 0 || iVar3 % 10 != 0)) goto LAB_00100b16;
          if (iVar14 < 0x186a1) {
LAB_00100b1d:
            uVar15 = 100000;
            goto LAB_00100af8;
          }
          iVar3 = iVar9 / 10;
          iVar4 = iVar6 / 10;
          iVar5 = iVar7 / 10;
          if (iVar7 % 10 != 0 || (iVar6 % 10 != 0 || iVar9 % 10 != 0)) goto LAB_00100b1d;
          if (iVar14 < 0xf4241) {
LAB_00100b24:
            uVar15 = 1000000;
            goto LAB_00100af8;
          }
          iVar9 = iVar3 / 10;
          iVar6 = iVar4 / 10;
          iVar7 = iVar5 / 10;
          if (iVar5 % 10 != 0 || (iVar4 % 10 != 0 || iVar3 % 10 != 0)) goto LAB_00100b24;
          if (iVar14 < 0x989681) {
LAB_00100b2b:
            uVar15 = 10000000;
            goto LAB_00100af8;
          }
          iVar3 = iVar9 / 10;
          iVar4 = iVar6 / 10;
          iVar5 = iVar7 / 10;
          if (iVar7 % 10 != 0 || (iVar6 % 10 != 0 || iVar9 % 10 != 0)) goto LAB_00100b2b;
          if (iVar14 < 0x5f5e101) {
LAB_00100b32:
            uVar15 = 100000000;
            goto LAB_00100af8;
          }
          if (iVar5 % 10 != 0 || (iVar4 % 10 != 0 || iVar3 % 10 != 0)) goto LAB_00100b32;
          if ((iVar14 < 0x3b9aca01) || ((iVar4 / 10 != 0 || iVar3 / 10 != 0) || iVar5 / 10 != 0)) {
            uVar15 = 1000000000;
            goto LAB_00100af8;
          }
          if (((uVar2 | uVar1 | param_3[0xd]) & 1) == 0) {
            *(undefined4 *)(local_140 + 1) = 2000000000;
            uVar15 = 2000000000;
            uVar17 = 0xfffffffffffffffe;
            local_148 = 1;
            uVar10 = uVar20 & 0xfffffffffffffffe;
          }
          else {
            *(undefined4 *)(local_140 + 1) = 1000000000;
            uVar17 = 0xffffffffffffffff;
            uVar15 = 1000000000;
          }
        }
      }
      if (((long)uVar20 < (long)uVar1) || ((iVar19 <= iVar18 && (bVar21)))) goto LAB_0010017c;
      if (((long)uVar1 < (long)uVar10) ||
         ((iVar14 = (int)uVar15, uVar1 == uVar10 && (iVar18 < iVar19 - iVar19 % iVar14))))
      goto LAB_001001b8;
      local_e8 = local_148 | uVar1;
      lStack_e0 = (long)((int)(uVar15 / 9) + iVar18);
      local_f8.tv_sec = uVar2;
      local_f8.tv_nsec = (long)iVar16;
      iVar9 = utimensat(param_1,param_2,&local_f8,0x100);
      if ((iVar9 != 0) ||
         ((iVar9 = fstatat(param_1,param_2,&local_d8,0x100),
          iVar9 != 0 || (iVar18 != local_d8.st_mtim.tv_nsec || local_d8.st_mtim.tv_sec != uVar1) &&
          (local_e8 = uVar1, lStack_e0 = (long)iVar18, utimensat(param_1,param_2,&local_f8,0x100),
          iVar9 != 0)))) {
        param_5 = 0xfffffffe;
        goto LAB_0010017c;
      }
      iVar9 = (-((uint)local_d8.st_mtim.tv_sec & 1) & 1000000000) + (int)local_d8.st_mtim.tv_nsec;
      uVar12 = iVar9 * -0x33333333 + 0x19999998;
      if ((uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f) < 0x19999999) {
        if ((iVar14 == 10) ||
           (iVar9 = iVar9 / 10, uVar12 = iVar9 * -0x33333333 + 0x19999998,
           0x19999998 < (uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f))) {
          param_5 = 10;
          goto LAB_00100bbc;
        }
        if (iVar14 == 100) {
          param_5 = 100;
        }
        else {
          iVar9 = iVar9 / 10;
          uVar12 = iVar9 * -0x33333333 + 0x19999998;
          if (0x19999998 < (uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f)) {
            param_5 = 100;
            goto LAB_00100bbc;
          }
          if (iVar14 == 1000) {
            param_5 = 1000;
          }
          else {
            iVar9 = iVar9 / 10;
            uVar12 = iVar9 * -0x33333333 + 0x19999998;
            if (0x19999998 < (uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f)) {
              param_5 = 1000;
              goto LAB_00100bbc;
            }
            if (iVar14 == 10000) {
              param_5 = 10000;
            }
            else {
              iVar9 = iVar9 / 10;
              uVar12 = iVar9 * -0x33333333 + 0x19999998;
              if (0x19999998 < (uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f)) {
                param_5 = 10000;
                goto LAB_00100bbc;
              }
              if (iVar14 == 100000) {
                param_5 = 100000;
              }
              else {
                iVar9 = iVar9 / 10;
                uVar12 = iVar9 * -0x33333333 + 0x19999998;
                if (0x19999998 < (uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f)) {
                  param_5 = 100000;
                  goto LAB_00100bbc;
                }
                if (iVar14 == 1000000) {
                  param_5 = 1000000;
                }
                else {
                  iVar9 = iVar9 / 10;
                  uVar12 = iVar9 * -0x33333333 + 0x19999998;
                  if (0x19999998 < (uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f)) {
                    param_5 = 1000000;
                    goto LAB_00100bbc;
                  }
                  if (iVar14 == 10000000) {
                    param_5 = 10000000;
                  }
                  else {
                    iVar9 = iVar9 / 10;
                    uVar12 = iVar9 * -0x33333333 + 0x19999998;
                    if (0x19999998 < (uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f)) {
                      param_5 = 10000000;
                      goto LAB_00100bbc;
                    }
                    if (iVar14 == 100000000) {
                      param_5 = 100000000;
                    }
                    else {
                      iVar9 = iVar9 / 10;
                      uVar12 = iVar9 * -0x33333333 + 0x19999998;
                      if (0x19999998 < (uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f)) {
                        param_5 = 100000000;
                        goto LAB_00100bbc;
                      }
                      if (iVar14 == 1000000000) {
                        param_5 = 1000000000;
                      }
                      else {
                        uVar17 = 0xfffffffffffffffe;
                        param_5 = 2000000000;
                        if (0x12 < iVar9 + 9U) {
                          param_5 = 1000000000;
                          goto LAB_00100bbc;
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
      else {
LAB_00100bbc:
        uVar17 = 0xffffffffffffffff;
      }
      uVar20 = uVar20 & uVar17;
      iVar19 = iVar19 - iVar19 % (int)param_5;
      bVar21 = uVar1 == uVar20;
    }
    *(uint *)(local_140 + 1) = param_5;
    *(undefined1 *)((long)local_140 + 0xc) = 1;
  }
LAB_00100150:
  param_5 = ((uint)(iVar19 < iVar18) - (uint)(iVar18 < iVar19) & -(uint)bVar21) +
            ((uint)((long)uVar20 < (long)uVar1) - (uint)((long)uVar1 < (long)uVar20));
LAB_0010017c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_5;
}



void utimecmp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  utimecmpat(0xffffff9c,param_1,param_2,param_3,param_4);
  return;
}


