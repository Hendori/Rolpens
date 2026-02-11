
/* (anonymous namespace)::getRange(void const*, int, unsigned int (*)(void const*, unsigned int),
   void const*, unsigned int*) */

int (anonymous_namespace)::getRange
              (void *param_1,int param_2,_func_uint_void_ptr_uint *param_3,void *param_4,
              uint *param_5)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_EBX;
  int iVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint local_88;
  uint local_84;
  uint local_54;
  int local_50;
  
  if ((uint)param_2 < 0x110000) {
    cVar1 = *(char *)((long)param_1 + 0x1f);
    if (param_2 < *(int *)((long)param_1 + 0x18)) {
      local_88 = *(uint *)((long)param_1 + 0x2c);
      if (param_3 != (_func_uint_void_ptr_uint *)0x0) {
        local_88 = (*param_3)(param_4,local_88);
      }
                    /* WARNING: Load size is inaccurate */
      lVar3 = *param_1;
      uVar8 = 0xffffffff;
      bVar16 = false;
      uVar12 = 0xffffffff;
      local_84 = local_88;
      uVar15 = param_2;
      do {
        if ((int)uVar15 < 0x10000) {
          uVar13 = (int)uVar15 >> 6;
          uVar9 = uVar12;
          if (*(char *)((long)param_1 + 0x1e) == '\0') {
            local_50 = 0x400;
            uVar14 = 0;
            local_54 = 0;
            iVar5 = 0x40;
          }
          else {
            if (0xfff < (int)uVar15) goto LAB_001000bd;
            local_50 = 0x40;
            uVar14 = 0;
            local_54 = 0;
            iVar5 = 0x40;
          }
LAB_00100157:
          uVar12 = uVar9;
          uVar9 = iVar5 - 1;
          do {
            if (uVar14 == 0) {
              uVar2 = *(ushort *)(lVar3 + (long)(int)(local_54 + uVar13) * 2);
              uVar7 = (uint)uVar2;
              if (uVar8 == uVar2) goto LAB_0010034d;
LAB_0010019e:
              uVar8 = uVar7;
              if (*(uint *)((long)param_1 + 0x28) == uVar7) {
                if (bVar16) {
                  if (local_88 != local_84) goto LAB_00100118;
                }
                else {
                  unaff_EBX = *(uint *)((long)param_1 + 0x2c);
                  if (param_5 != (uint *)0x0) {
                    *param_5 = local_88;
                  }
                  local_84 = local_88;
                }
                bVar16 = true;
                uVar15 = uVar15 + iVar5 & -iVar5;
              }
              else {
                lVar11 = *(long *)((long)param_1 + 8);
                iVar10 = (uVar15 & uVar9) + uVar7;
                if (cVar1 == '\x01') {
                  uVar7 = *(uint *)(lVar11 + (long)iVar10 * 4);
                }
                else if (cVar1 == '\x02') {
                  uVar7 = (uint)*(byte *)(lVar11 + iVar10);
                }
                else {
                  uVar7 = 0xffffffff;
                  if (cVar1 == '\0') {
                    uVar7 = (uint)*(ushort *)(lVar11 + (long)iVar10 * 2);
                  }
                }
                if (bVar16) {
                  if (unaff_EBX != uVar7) {
                    if (param_3 == (_func_uint_void_ptr_uint *)0x0) goto LAB_00100118;
                    uVar6 = local_88;
                    if (*(uint *)((long)param_1 + 0x2c) != uVar7) {
                      uVar6 = (*param_3)(param_4,uVar7);
                    }
                    bVar16 = local_84 != uVar6;
                    local_84 = uVar6;
                    if (bVar16) goto LAB_00100118;
                  }
                }
                else {
                  local_84 = local_88;
                  if ((*(uint *)((long)param_1 + 0x2c) != uVar7) &&
                     (local_84 = uVar7, param_3 != (_func_uint_void_ptr_uint *)0x0)) {
                    local_84 = (*param_3)(param_4,uVar7);
                  }
                  if (param_5 != (uint *)0x0) {
                    *param_5 = local_84;
                  }
                }
                uVar15 = uVar15 + 1;
                lVar11 = (long)(iVar10 + 1);
                if ((uVar9 & uVar15) == 0) {
                  bVar16 = true;
                  unaff_EBX = uVar7;
                }
                else {
                  do {
                    lVar4 = *(long *)((long)param_1 + 8);
                    if (cVar1 == '\x01') {
                      unaff_EBX = *(uint *)(lVar4 + lVar11 * 4);
                    }
                    else if (cVar1 == '\x02') {
                      unaff_EBX = (uint)*(byte *)(lVar4 + lVar11);
                    }
                    else {
                      unaff_EBX = 0xffffffff;
                      if (cVar1 == '\0') {
                        unaff_EBX = (uint)*(ushort *)(lVar4 + lVar11 * 2);
                      }
                    }
                    if (uVar7 != unaff_EBX) {
                      if (param_3 == (_func_uint_void_ptr_uint *)0x0) {
                        return uVar15 - 1;
                      }
                      uVar7 = local_88;
                      if (*(uint *)((long)param_1 + 0x2c) != unaff_EBX) {
                        uVar7 = (*param_3)(param_4,unaff_EBX);
                      }
                      if (local_84 != uVar7) {
                        return uVar15 - 1;
                      }
                    }
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + 1;
                    uVar7 = unaff_EBX;
                  } while ((uVar9 & uVar15) != 0);
                  bVar16 = true;
                }
              }
            }
            else {
              iVar10 = (uVar13 & 0xfffffff8) + (local_54 & 0x7fff) + ((int)uVar13 >> 3);
              uVar7 = (uint)*(ushort *)(lVar3 + (long)(int)(iVar10 + 1 + (uVar13 & 7)) * 2) |
                      (uint)*(ushort *)(lVar3 + (long)iVar10 * 2) << (char)(uVar13 & 7) * '\x02' + 2
                      & 0x30000;
              if (uVar8 != uVar7) goto LAB_0010019e;
LAB_0010034d:
              if ((int)(uVar15 - param_2) < iVar5) goto LAB_0010019e;
              uVar15 = uVar15 + iVar5;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < local_50);
        }
        else {
          if (*(char *)((long)param_1 + 0x1e) == '\0') {
            iVar5 = ((int)uVar15 >> 0xe) + 0x3fc;
          }
          else {
LAB_001000bd:
            iVar5 = ((int)uVar15 >> 0xe) + 0x40;
          }
                    /* WARNING: Load size is inaccurate */
          uVar2 = *(ushort *)
                   (*param_1 +
                   (long)(int)((uint)*(ushort *)(*param_1 + (long)iVar5 * 2) +
                              ((int)uVar15 >> 9 & 0x1fU)) * 2);
          if ((uVar12 == uVar2) && (0x1ff < (int)(uVar15 - param_2))) {
            uVar15 = uVar15 + 0x200;
          }
          else {
            uVar12 = (uint)uVar2;
            if (uVar2 != *(ushort *)((long)param_1 + 0x26)) {
              iVar5 = 0x10;
              local_50 = 0x20;
              uVar14 = uVar2 & 0x8000;
              uVar13 = (int)uVar15 >> 4 & 0x1f;
              uVar9 = (uint)uVar2;
              local_54 = uVar12;
              goto LAB_00100157;
            }
            if (bVar16) {
              if (local_88 != local_84) goto LAB_00100118;
            }
            else {
              unaff_EBX = *(uint *)((long)param_1 + 0x2c);
              if (param_5 != (uint *)0x0) {
                *param_5 = local_88;
              }
              local_84 = local_88;
            }
            uVar8 = *(uint *)((long)param_1 + 0x28);
            bVar16 = true;
            uVar15 = uVar15 + 0x200 & 0xfffffe00;
          }
        }
      } while ((int)uVar15 < *(int *)((long)param_1 + 0x18));
      lVar3 = *(long *)((long)param_1 + 8);
      iVar5 = *(int *)((long)param_1 + 0x14) + -2;
      if (cVar1 == '\x01') {
        uVar8 = *(uint *)(lVar3 + (long)iVar5 * 4);
      }
      else if (cVar1 == '\x02') {
        uVar8 = (uint)*(byte *)(lVar3 + iVar5);
      }
      else {
        uVar8 = 0xffffffff;
        if (cVar1 == '\0') {
          uVar8 = (uint)*(ushort *)(lVar3 + (long)iVar5 * 2);
        }
      }
      if ((*(uint *)((long)param_1 + 0x2c) != uVar8) &&
         (local_88 = uVar8, param_3 != (_func_uint_void_ptr_uint *)0x0)) {
        local_88 = (*param_3)(param_4,uVar8);
      }
      if (local_84 != local_88) {
LAB_00100118:
        return uVar15 - 1;
      }
    }
    else if (param_5 != (uint *)0x0) {
      iVar5 = *(int *)((long)param_1 + 0x14) + -2;
      lVar3 = *(long *)((long)param_1 + 8);
      if (cVar1 == '\x01') {
        uVar8 = *(uint *)(lVar3 + (long)iVar5 * 4);
      }
      else if (cVar1 == '\x02') {
        uVar8 = (uint)*(byte *)(lVar3 + iVar5);
      }
      else {
        uVar8 = 0xffffffff;
        if (cVar1 == '\0') {
          uVar8 = (uint)*(ushort *)(lVar3 + (long)iVar5 * 2);
        }
      }
      if (param_3 != (_func_uint_void_ptr_uint *)0x0) {
        uVar8 = (*param_3)(param_4,uVar8);
      }
      *param_5 = uVar8;
      return 0x10ffff;
    }
    iVar5 = 0x10ffff;
  }
  else {
    iVar5 = -1;
  }
  return iVar5;
}



undefined8 *
ucptrie_openFromBinary_76_godot
          (uint param_1,uint param_2,int *param_3,int param_4,int *param_5,int *param_6)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  long lStack_48;
  ulong uStack_40;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 < 1) {
    if ((((param_4 < 1) || (((ulong)param_3 & 3) != 0)) || (2 < param_1 + 1)) || (3 < param_2 + 1))
    {
      *param_6 = 1;
    }
    else {
      if ((0xf < param_4) && (*param_3 == 0x54726933)) {
        uVar2 = *(ushort *)(param_3 + 1);
        uVar13 = uVar2 & 7;
        if (((ushort)uVar13 < 3) && ((uVar2 & 0xb8) == 0)) {
          uVar9 = (int)(uint)uVar2 >> 6 & 3;
          if (param_1 == 0xffffffff) {
            if ((param_2 == 0xffffffff) || (param_2 == uVar13)) goto LAB_00100733;
          }
          else {
            bVar8 = ((byte)uVar9 ^ (byte)param_1) & 1;
            if (param_2 != 0xffffffff) {
              bVar8 = bVar8 | param_2 != uVar13;
              uVar13 = param_2;
            }
            uVar9 = param_1;
            if (bVar8 == 0) {
LAB_00100733:
              uVar3 = *(ushort *)((long)param_3 + 6);
              uVar14 = (uVar2 & 0xf000) << 4 | (uint)*(ushort *)(param_3 + 2);
              uVar11 = (uVar2 & 0xf00) << 8 | (uint)*(ushort *)(param_3 + 3);
              lStack_48 = (ulong)CONCAT42(uVar11,*(undefined2 *)((long)param_3 + 10)) << 0x30;
              iVar10 = (uint)*(ushort *)((long)param_3 + 0xe) * 0x200;
              if (uVar13 == 0) {
                uVar6 = uVar14 * 2;
              }
              else {
                uVar6 = uVar14;
                if (uVar13 == 1) {
                  uVar6 = uVar14 * 4;
                }
              }
              iVar5 = uVar3 + 0x10 + (uint)uVar3 + uVar6;
              if (iVar5 <= param_4) {
                puVar7 = (undefined8 *)uprv_malloc_76_godot(0x30);
                if (puVar7 != (undefined8 *)0x0) {
                  uStack_40 = (ulong)uVar11;
                  lVar1 = (long)(param_3 + 4) + (ulong)uVar3 * 2;
                  *puVar7 = param_3 + 4;
                  puVar7[5] = uStack_40;
                  if (uVar14 <= uVar11) {
                    uVar11 = uVar14 - 2;
                  }
                  puVar7[1] = 0;
                  puVar7[2] = CONCAT44(uVar14,(uint)uVar3);
                  puVar7[3] = CONCAT17((char)uVar13,
                                       CONCAT16((char)uVar9,
                                                CONCAT24((short)(iVar10 + 0xfff >> 0xc),iVar10)));
                  puVar7[4] = lStack_48;
                  puVar7[1] = lVar1;
                  lVar12 = (long)(int)uVar11;
                  if (uVar13 == 1) {
                    uVar13 = *(uint *)(lVar1 + lVar12 * 4);
                  }
                  else if (uVar13 == 2) {
                    uVar13 = (uint)*(byte *)(lVar1 + lVar12);
                  }
                  else {
                    uVar13 = (uint)*(ushort *)(lVar1 + lVar12 * 2);
                  }
                  *(uint *)((long)puVar7 + 0x2c) = uVar13;
                  if (param_5 != (int *)0x0) {
                    *param_5 = iVar5;
                  }
                  goto LAB_00100861;
                }
                *param_6 = 7;
                goto LAB_0010085f;
              }
            }
          }
        }
      }
      *param_6 = 3;
    }
  }
LAB_0010085f:
  puVar7 = (undefined8 *)0x0;
LAB_00100861:
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



void ucptrie_close_76_godot(void)

{
  uprv_free_76_godot();
  return;
}



int ucptrie_getType_76_godot(long param_1)

{
  return (int)*(char *)(param_1 + 0x1e);
}



int ucptrie_getValueWidth_76_godot(long param_1)

{
  return (int)*(char *)(param_1 + 0x1f);
}



int ucptrie_internalSmallIndex_76_godot(long *param_1,uint param_2)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = ((int)param_2 >> 0xe) + 0x40;
  if (*(char *)((long)param_1 + 0x1e) == '\0') {
    iVar4 = ((int)param_2 >> 0xe) + 0x3fc;
  }
  lVar2 = *param_1;
  uVar3 = (int)param_2 >> 4;
  uVar1 = *(ushort *)
           (lVar2 + (long)(int)((uint)*(ushort *)(lVar2 + (long)iVar4 * 2) +
                               ((int)param_2 >> 9 & 0x1fU)) * 2);
  if (-1 < (short)uVar1) {
    return (param_2 & 0xf) +
           (uint)*(ushort *)(lVar2 + (long)(int)((uint)uVar1 + (uVar3 & 0x1f)) * 2);
  }
  iVar4 = (uVar1 & 0x7fff) + (uVar3 & 0x18) + ((int)(uVar3 & 0x1f) >> 3);
  return (param_2 & 0xf) +
         ((uint)*(ushort *)(lVar2 + (long)(int)(iVar4 + 1 + (uVar3 & 7)) * 2) |
         (uint)*(ushort *)(lVar2 + (long)iVar4 * 2) << (char)(uVar3 & 7) * '\x02' + 2 & 0x30000);
}



ulong ucptrie_internalSmallU8Index_76_godot(long param_1,int param_2,byte param_3,byte param_4)

{
  ulong uVar1;
  
  if ((int)(param_2 << 0xc | (uint)param_3 << 6 | (uint)param_4) < *(int *)(param_1 + 0x18)) {
    uVar1 = ucptrie_internalSmallIndex_76_godot();
    return uVar1;
  }
  return (ulong)(*(int *)(param_1 + 0x14) - 2);
}



uint ucptrie_internalU8PrevIndex_76_godot
               (long *param_1,undefined4 param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  lVar4 = param_4 - param_3;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (7 < lVar4) {
    param_3 = param_4 + -7;
    lVar4 = 7;
  }
  local_24 = (int)lVar4;
  uVar1 = utf8_prevCharSafeBody_76_godot(param_3,0,&local_24,param_2,0xffffffff);
  uVar3 = (int)lVar4 - local_24;
  if (uVar1 < 0x10000) {
    iVar2 = (uVar1 & 0x3f) + (uint)*(ushort *)(*param_1 + (long)((int)uVar1 >> 6) * 2);
  }
  else if (uVar1 < 0x110000) {
    if ((int)uVar1 < (int)param_1[3]) {
      iVar2 = ucptrie_internalSmallIndex_76_godot(param_1,uVar1);
    }
    else {
      iVar2 = *(int *)((long)param_1 + 0x14) + -2;
    }
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0x14) + -1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2 << 3 | uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ucptrie_get_76_godot(long *param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  
  if (0x7f < param_2) {
    if ((-(uint)(*(char *)((long)param_1 + 0x1e) == '\0') & 0xf000) + 0xfff < param_2) {
      if (0x10ffff < param_2) {
        lVar2 = param_1[1];
        param_2 = *(int *)((long)param_1 + 0x14) - 1;
        cVar1 = *(char *)((long)param_1 + 0x1f);
        goto joined_r0x00100b38;
      }
      if ((int)param_2 < (int)param_1[3]) {
        iVar3 = ucptrie_internalSmallIndex_76_godot();
        cVar1 = *(char *)((long)param_1 + 0x1f);
        lVar2 = param_1[1];
        if (cVar1 == '\x01') {
          return *(uint *)(lVar2 + (long)iVar3 * 4);
        }
        if (cVar1 != '\x02') {
          uVar4 = 0xffffffff;
          if (cVar1 == '\0') {
            uVar4 = (uint)*(ushort *)(lVar2 + (long)iVar3 * 2);
          }
          return uVar4;
        }
        return (uint)*(byte *)(lVar2 + iVar3);
      }
      param_2 = *(int *)((long)param_1 + 0x14) - 2;
    }
    else {
      param_2 = (param_2 & 0x3f) + (uint)*(ushort *)(*param_1 + (long)((int)param_2 >> 6) * 2);
    }
  }
  cVar1 = *(char *)((long)param_1 + 0x1f);
  lVar2 = param_1[1];
joined_r0x00100b38:
  if (cVar1 == '\x01') {
    return *(uint *)(lVar2 + (long)(int)param_2 * 4);
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\0') {
      return 0xffffffff;
    }
    return (uint)*(ushort *)(lVar2 + (long)(int)param_2 * 2);
  }
  return (uint)*(byte *)(lVar2 + (int)param_2);
}



ulong ucptrie_internalGetRange_76_godot
                (code *UNRECOVERED_JUMPTABLE,undefined8 param_2,int param_3,int param_4,int param_5,
                undefined8 param_6,undefined8 param_7,int *param_8)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_6,param_7,param_8);
      return uVar2;
    }
    goto LAB_00100d07;
  }
  if (param_8 == (int *)0x0) {
    param_8 = &local_48;
  }
  uVar3 = 0xdbff;
  if (param_4 == 2) {
    uVar3 = 0xdfff;
  }
  uVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_6,param_7,param_8);
  iVar1 = (int)uVar2;
  if ((0xd7fe < iVar1) && (param_3 <= (int)uVar3)) {
    if (param_5 == *param_8) {
      if (iVar1 < (int)uVar3) {
LAB_00100ca6:
        uVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,uVar3 + 1,param_6,param_7,&local_44);
        if (param_5 != local_44) goto LAB_00100ccb;
      }
    }
    else if (param_3 < 0xd800) {
      uVar2 = 0xd7ff;
    }
    else {
      *param_8 = param_5;
      if (iVar1 <= (int)uVar3) goto LAB_00100ca6;
LAB_00100ccb:
      uVar2 = (ulong)uVar3;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00100d07:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ucptrie_getRange_76_godot
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ucptrie_internalGetRange_76_godot
            (0x100000,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



int ucptrie_toBinary_76_godot(undefined8 *param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  
  if (*param_4 < 1) {
    cVar2 = *(char *)((long)param_1 + 0x1e);
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    if (((((uint)(int)cVar2 < 2) && (bVar3 < 3)) && (-1 < param_3)) &&
       ((param_3 == 0 || ((param_2 != (undefined4 *)0x0 && (((ulong)param_2 & 3) == 0)))))) {
      uVar5 = *(uint *)(param_1 + 2);
      uVar6 = *(uint *)((long)param_1 + 0x14);
      iVar8 = uVar5 * 2;
      iVar1 = iVar8 + 0x10;
      if (bVar3 == 1) {
        iVar10 = iVar1 + uVar6 * 4;
      }
      else {
        iVar10 = iVar1 + uVar6;
        if (bVar3 != 2) {
          iVar10 = iVar1 + uVar6 * 2;
        }
      }
      if (param_3 < iVar10) {
        *param_4 = 0xf;
        return iVar10;
      }
      uVar7 = *(undefined4 *)(param_1 + 5);
      *param_2 = 0x54726933;
      uVar4 = *(ushort *)((long)param_1 + 0x26);
      *(short *)(param_2 + 3) = (short)uVar7;
      *(ulong *)(param_2 + 1) =
           (((ulong)uVar4 << 0x10 | (ulong)(uVar6 & 0xffff)) << 0x10 | (ulong)(uVar5 & 0xffff)) <<
           0x10 | (ulong)((uint)((ushort)((int)uVar6 >> 4) & 0xf000) |
                          ((int)cVar2 & 0x3ffU) << 6 | (uint)(ushort)(short)(char)bVar3 |
                         (uint)((ushort)((uint)uVar7 >> 8) & 0xf00));
      *(short *)((long)param_2 + 0xe) = (short)(*(int *)(param_1 + 3) >> 9);
      pvVar9 = memcpy(param_2 + 4,(void *)*param_1,(long)iVar8);
      pvVar9 = (void *)((long)pvVar9 + (long)(*(int *)(param_1 + 2) * 2));
      if (bVar3 == 1) {
        memcpy(pvVar9,(void *)param_1[1],(long)(*(int *)((long)param_1 + 0x14) * 4));
        return iVar10;
      }
      if (bVar3 != 2) {
        memcpy(pvVar9,(void *)param_1[1],(long)(*(int *)((long)param_1 + 0x14) * 2));
        return iVar10;
      }
      memcpy(pvVar9,(void *)param_1[1],(long)*(int *)((long)param_1 + 0x14));
      return iVar10;
    }
    *param_4 = 1;
  }
  return 0;
}



void ucpmap_get_76_godot(void)

{
  ucptrie_get_76_godot();
  return;
}



void ucpmap_getRange_76_godot
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ucptrie_internalGetRange_76_godot
            (0x100000,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


