
/* enumSameValue(void const*, unsigned int) */

uint enumSameValue(void *param_1,uint param_2)

{
  return param_2;
}



/* enumEitherTrie(UTrie2 const*, int, int, unsigned int (*)(void const*, unsigned int), signed char
   (*)(void const*, int, int, unsigned int), void const*) */

void enumEitherTrie(UTrie2 *param_1,int param_2,int param_3,_func_uint_void_ptr_uint *param_4,
                   _func_signed_void_ptr_int_int_uint *param_5,void *param_6)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long local_a8;
  uint local_74;
  uint local_58;
  uint local_54;
  int iVar8;
  
  if (param_5 == (_func_signed_void_ptr_int_int_uint *)0x0) {
    return;
  }
  pcVar6 = enumSameValue;
  if (param_4 != (_func_uint_void_ptr_uint *)0x0) {
    pcVar6 = param_4;
  }
  lVar14 = *(long *)(param_1 + 0x48);
  if (lVar14 == 0) {
    local_a8 = *(long *)(param_1 + 0x10);
    lVar12 = *(long *)param_1;
    local_74 = (uint)*(ushort *)(param_1 + 0x22);
    local_54 = (uint)*(ushort *)(param_1 + 0x20);
  }
  else {
    local_a8 = *(long *)(lVar14 + 0x23300);
    local_54 = *(uint *)(lVar14 + 0x23320);
    lVar12 = 0;
    local_74 = *(uint *)(lVar14 + 0x23324);
  }
  iVar10 = *(int *)(param_1 + 0x2c);
  uVar4 = (*pcVar6)(param_6,*(uint *)(param_1 + 0x24));
  if (param_3 < iVar10) {
    iVar10 = param_3;
  }
  uVar17 = param_2;
  if (param_2 < iVar10) {
    uVar5 = 0;
    uVar11 = 0xffffffff;
    uVar16 = 0xffffffff;
    do {
      uVar15 = param_2 + 0x800;
      uVar7 = param_2 >> 5;
      iVar8 = param_2 >> 0xb;
      uVar1 = uVar5;
      uVar2 = uVar17;
      if (param_2 < 0x10000) {
        uVar9 = uVar7;
        if ((param_2 & 0xfffff800U) == 0xd800) {
          if ((param_2 & 0x400U) != 0) {
            uVar11 = 0x6c0;
            if (local_54 == 0x6c0) goto LAB_0010010d;
            uVar9 = 0x6c0;
            uVar13 = (ulong)(uVar7 & 0x3f);
LAB_0010023b:
            local_58 = 0x40;
            uVar11 = uVar9;
            goto LAB_00100243;
          }
          uVar11 = 0x800;
          if (local_54 != 0x800) {
            local_58 = 0x20;
            uVar11 = 0x800;
            uVar13 = (ulong)(uVar7 & 0x3f);
            goto LAB_0010049e;
          }
        }
        else {
LAB_001000ff:
          uVar11 = local_54;
          if (uVar9 != local_54) {
            if (param_3 <= (int)uVar15) {
              uVar15 = param_3;
            }
            uVar13 = (ulong)(uVar7 & 0x3f);
            if (iVar8 != (int)uVar15 >> 0xb) goto LAB_0010023b;
            local_58 = (int)uVar15 >> 5 & 0x3f;
            uVar11 = uVar9;
LAB_0010049e:
            uVar15 = param_2;
            if (local_58 <= (uint)uVar13) goto LAB_00100187;
LAB_00100243:
            do {
              while( true ) {
                if (lVar12 == 0) {
                  uVar15 = *(uint *)(*(long *)(param_1 + 0x48) + 0x880 +
                                    (long)(int)(uVar11 + (int)uVar13) * 4);
                }
                else {
                  uVar15 = (uint)*(ushort *)(lVar12 + (long)(int)uVar11 * 2 + uVar13 * 2) << 2;
                }
                if ((uVar15 == uVar16) && (0x1f < (int)(param_2 - uVar17))) break;
                if (uVar15 == local_74) {
                  uVar16 = uVar17;
                  if (((uVar4 != uVar5) && (uVar16 = param_2, (int)uVar17 < param_2)) &&
                     (cVar3 = (*param_5)(param_6,uVar17,param_2 - 1,uVar5), cVar3 == '\0')) {
                    return;
                  }
                  param_2 = param_2 + 0x20;
                  uVar5 = uVar4;
                  uVar17 = uVar16;
                }
                else {
                  lVar14 = 0;
                  uVar16 = uVar5;
                  do {
                    if (local_a8 == 0) {
                      uVar5 = (uint)*(ushort *)(lVar12 + (long)(int)uVar15 * 2 + lVar14 * 2);
                    }
                    else {
                      uVar5 = *(uint *)(local_a8 + (long)(int)uVar15 * 4 + lVar14 * 4);
                    }
                    uVar5 = (*pcVar6)(param_6,uVar5);
                    uVar1 = uVar17;
                    if (((uVar5 != uVar16) && (uVar1 = param_2, (int)uVar17 < param_2)) &&
                       (cVar3 = (*param_5)(param_6,uVar17,param_2 - 1,uVar16), cVar3 == '\0')) {
                      return;
                    }
                    uVar17 = uVar1;
                    lVar14 = lVar14 + 1;
                    param_2 = param_2 + 1;
                    uVar16 = uVar5;
                  } while (lVar14 != 0x20);
                }
                uVar13 = uVar13 + 1;
                uVar1 = uVar5;
                uVar16 = uVar15;
                uVar2 = uVar17;
                uVar15 = param_2;
                if ((int)local_58 <= (int)uVar13) goto LAB_00100187;
              }
              param_2 = param_2 + 0x20;
              uVar13 = uVar13 + 1;
              uVar1 = uVar5;
              uVar2 = uVar17;
              uVar15 = param_2;
            } while ((int)uVar13 < (int)local_58);
            goto LAB_00100187;
          }
        }
LAB_0010010d:
        if (((uVar4 != uVar5) &&
            (uVar1 = uVar4, uVar16 = local_74, uVar2 = param_2, (int)uVar17 < param_2)) &&
           (cVar3 = (*param_5)(param_6,uVar17,param_2 - 1,uVar5), cVar3 == '\0')) {
          return;
        }
      }
      else {
        if (lVar12 == 0) {
          uVar9 = *(uint *)(*(long *)(param_1 + 0x48) + (long)iVar8 * 4);
        }
        else {
          uVar9 = (uint)*(ushort *)(lVar12 + (long)(iVar8 + 0x820) * 2);
        }
        if ((uVar9 != uVar11) || ((int)(param_2 - uVar17) < 0x800)) goto LAB_001000ff;
      }
LAB_00100187:
      param_2 = uVar15;
      uVar17 = uVar2;
      uVar5 = uVar1;
    } while (param_2 < iVar10);
  }
  else {
    uVar5 = 0;
  }
  uVar4 = param_3;
  uVar11 = uVar5;
  uVar16 = uVar17;
  if ((param_2 <= param_3) && (uVar4 = param_2, param_2 < param_3)) {
    if (lVar12 == 0) {
      uVar4 = *(uint *)(*(long *)(*(long *)(param_1 + 0x48) + 0x23300) + -0x10 +
                       (long)*(int *)(*(long *)(param_1 + 0x48) + 0x23318) * 4);
    }
    else if (local_a8 == 0) {
      uVar4 = (uint)*(ushort *)(lVar12 + (long)*(int *)(param_1 + 0x30) * 2);
    }
    else {
      uVar4 = *(uint *)(local_a8 + (long)*(int *)(param_1 + 0x30) * 4);
    }
    uVar15 = (*pcVar6)(param_6,uVar4);
    uVar4 = param_3;
    if (((uVar15 != uVar5) && (uVar11 = uVar15, uVar16 = param_2, (int)uVar17 < param_2)) &&
       (cVar3 = (*param_5)(param_6,uVar17,param_2 - 1,uVar5), cVar3 == '\0')) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00100209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_5)(param_6,uVar16,uVar4 - 1,uVar11);
  return;
}



/* get32(UNewTrie2 const*, int, signed char) */

undefined4 get32(long param_1,uint param_2,byte param_3)

{
  int iVar1;
  
  if ((int)param_2 < *(int *)(param_1 + 0x23328)) {
    if (((param_2 & 0xfffffc00) == 0xd800) && (param_3 != 0)) {
      iVar1 = ((int)param_2 >> 5) + 0x140;
      goto LAB_00100583;
    }
  }
  else if (((param_2 & 0xfffffc00) != 0xd800) || ((param_3 & 1) != 0)) {
    return *(undefined4 *)
            (*(long *)(param_1 + 0x23300) + -0x10 + (long)*(int *)(param_1 + 0x23318) * 4);
  }
  iVar1 = ((int)param_2 >> 5 & 0x3fU) + *(int *)(param_1 + (long)((int)param_2 >> 0xb) * 4);
LAB_00100583:
  return *(undefined4 *)
          (*(long *)(param_1 + 0x23300) +
          (long)(int)((param_2 & 0x1f) + *(int *)(param_1 + 0x880 + (long)iVar1 * 4)) * 4);
}



ulong utrie2_get32_76_godot(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (uint)param_2;
  uVar2 = (int)uVar7 >> 5;
  if (param_1[1] != 0) {
    lVar1 = *param_1;
    if (0xd7ff < uVar7) {
      if (uVar7 < 0x10000) {
        iVar5 = 0;
        if ((int)uVar7 < 0xdc00) {
          iVar5 = 0x140;
        }
        uVar2 = uVar2 + iVar5;
      }
      else {
        if (0x10ffff < uVar7) {
          lVar3 = (long)((int)param_1[3] + 0x80) * 2;
          goto LAB_001005dc;
        }
        if (*(int *)((long)param_1 + 0x2c) <= (int)uVar7) {
          lVar3 = (long)(int)param_1[6] * 2;
          goto LAB_001005dc;
        }
        uVar2 = (uint)*(ushort *)(lVar1 + (long)(((int)uVar7 >> 0xb) + 0x820) * 2) + (uVar2 & 0x3f);
      }
    }
    lVar3 = (long)(int)((uVar7 & 0x1f) + (uint)*(ushort *)(lVar1 + (long)(int)uVar2 * 2) * 4) * 2;
LAB_001005dc:
    return (ulong)*(ushort *)(lVar1 + lVar3);
  }
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    if (0x10ffff < uVar7) {
      return (ulong)*(uint *)(param_1 + 5);
    }
    uVar4 = get32(param_1[9],param_2,1);
    return uVar4;
  }
  if (uVar7 < 0xd800) {
    return (ulong)*(uint *)(lVar1 + (long)(int)((uVar7 & 0x1f) +
                                               (uint)*(ushort *)(*param_1 + (long)(int)uVar2 * 2) *
                                               4) * 4);
  }
  if (uVar7 < 0x10000) {
    lVar3 = *param_1;
    uVar6 = 0;
    if ((int)uVar7 < 0xdc00) {
      uVar6 = 0x140;
    }
  }
  else {
    lVar3 = 0x200;
    if (0x10ffff < uVar7) goto LAB_00100659;
    if (*(int *)((long)param_1 + 0x2c) <= (int)uVar7) {
      lVar3 = (long)(int)param_1[6] << 2;
      goto LAB_00100659;
    }
    lVar3 = *param_1;
    uVar6 = uVar2 & 0x3f;
    uVar2 = (uint)*(ushort *)(lVar3 + (long)(((int)uVar7 >> 0xb) + 0x820) * 2);
  }
  lVar3 = (long)(int)((uVar7 & 0x1f) + (uint)*(ushort *)(lVar3 + (long)(int)(uVar2 + uVar6) * 2) * 4
                     ) << 2;
LAB_00100659:
  return (ulong)*(uint *)(lVar1 + lVar3);
}



ulong utrie2_get32FromLeadSurrogateCodeUnit_76_godot(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if ((uVar2 & 0xfffffc00) != 0xd800) {
    return (ulong)*(uint *)(param_1 + 5);
  }
  if (param_1[1] != 0) {
    return (ulong)*(ushort *)
                   (*param_1 +
                   (long)(int)((uVar2 & 0x1f) +
                              (uint)*(ushort *)(*param_1 + (long)((int)uVar2 >> 5) * 2) * 4) * 2);
  }
  if (param_1[2] != 0) {
    return (ulong)*(uint *)(param_1[2] +
                           (long)(int)((uVar2 & 0x1f) +
                                      (uint)*(ushort *)(*param_1 + (long)((int)uVar2 >> 5) * 2) * 4)
                           * 4);
  }
  uVar1 = get32(param_1[9],param_2,0);
  return uVar1;
}



uint utrie2_internalU8NextIndex_76_godot(long *param_1,undefined4 param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  param_4 = param_4 - param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (7 < param_4) {
    param_4 = 7;
  }
  uVar1 = utf8_nextCharSafeBody_76_godot(param_3,&local_14,param_4,param_2,0xffffffff);
  uVar2 = (int)uVar1 >> 5;
  if (uVar1 < 0xd800) {
    uVar1 = ((uVar1 & 0x1f) + (uint)*(ushort *)(*param_1 + (long)(int)uVar2 * 2) * 4) * 8;
    goto LAB_00100844;
  }
  if (uVar1 < 0x10000) {
    lVar4 = *param_1;
    uVar3 = 0;
    if ((int)uVar1 < 0xdc00) {
      uVar3 = 0x140;
    }
  }
  else {
    if (0x10ffff < uVar1) {
      uVar1 = 0x400;
      if (param_1[2] == 0) {
        uVar1 = (int)param_1[3] * 8 + 0x400;
      }
      goto LAB_00100844;
    }
    if (*(int *)((long)param_1 + 0x2c) <= (int)uVar1) {
      uVar1 = (int)param_1[6] << 3;
      goto LAB_00100844;
    }
    lVar4 = *param_1;
    uVar3 = uVar2 & 0x3f;
    uVar2 = (uint)*(ushort *)(lVar4 + (long)(((int)uVar1 >> 0xb) + 0x820) * 2);
  }
  uVar1 = ((uVar1 & 0x1f) + (uint)*(ushort *)(lVar4 + (long)(int)(uVar2 + uVar3) * 2) * 4) * 8;
LAB_00100844:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_14 | uVar1;
}



uint utrie2_internalU8PrevIndex_76_godot(long *param_1,undefined4 param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
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
  uVar2 = (int)uVar1 >> 5;
  if (uVar1 < 0xd800) {
    uVar1 = ((uVar1 & 0x1f) + (uint)*(ushort *)(*param_1 + (long)(int)uVar2 * 2) * 4) * 8;
    goto LAB_00100970;
  }
  if (uVar1 < 0x10000) {
    lVar5 = *param_1;
    uVar3 = 0;
    if ((int)uVar1 < 0xdc00) {
      uVar3 = 0x140;
    }
  }
  else {
    if (0x10ffff < uVar1) {
      uVar1 = 0x400;
      if (param_1[2] == 0) {
        uVar1 = (int)param_1[3] * 8 + 0x400;
      }
      goto LAB_00100970;
    }
    if (*(int *)((long)param_1 + 0x2c) <= (int)uVar1) {
      uVar1 = (int)param_1[6] << 3;
      goto LAB_00100970;
    }
    lVar5 = *param_1;
    uVar3 = uVar2 & 0x3f;
    uVar2 = (uint)*(ushort *)(lVar5 + (long)(((int)uVar1 >> 0xb) + 0x820) * 2);
  }
  uVar1 = ((uVar1 & 0x1f) + (uint)*(ushort *)(lVar5 + (long)(int)(uVar2 + uVar3) * 2) * 4) * 8;
LAB_00100970:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)lVar4 - local_24 | uVar1;
}



undefined8 *
utrie2_openFromSerialized_76_godot(uint param_1,int *param_2,int param_3,int *param_4,int *param_5)

{
  long lVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  long in_FS_OFFSET;
  undefined1 local_78 [12];
  int iStack_6c;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [48];
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_5 < 1) {
    if (((param_3 < 1) || (((ulong)param_2 & 3) != 0)) || (1 < param_1)) {
      *param_5 = 1;
    }
    else {
      if (((0xf < param_3) && (*param_2 == 0x54726932)) &&
         ((*(ushort *)(param_2 + 1) & 0xf) == param_1)) {
        uVar2 = *(ushort *)((long)param_2 + 6);
        iStack_6c = (uint)*(ushort *)(param_2 + 2) * 4;
        local_58._0_4_ = iStack_6c + -4;
        uVar3 = *(undefined4 *)((long)param_2 + 10);
        local_78 = ZEXT212(uVar2) << 0x40;
        stack0xffffffffffffff9c = SUB1612((undefined1  [16])0x0,4);
        local_68._0_4_ = uVar3;
        auVar5 = _local_68;
        if (param_1 == 0) {
          local_58._0_4_ = local_58._0_4_ + (uint)uVar2;
          iVar11 = (uVar2 + 8 + iStack_6c) * 2;
        }
        else {
          iVar11 = (uint)*(ushort *)(param_2 + 2) * 0x10 + 0x10 + (uint)uVar2 * 2;
        }
        uStack_60._4_4_ = (uint)*(ushort *)((long)param_2 + 0xe) << 0xb;
        auVar6 = _local_68;
        local_58._4_12_ = SUB1612((undefined1  [16])0x0,4);
        if (iVar11 <= param_3) {
          puVar7 = (undefined8 *)uprv_malloc_76_godot(0x50);
          if (puVar7 != (undefined8 *)0x0) {
            local_68 = auVar5._0_8_;
            uStack_60 = auVar6._8_8_;
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[7] = param_2;
            param_2 = param_2 + 4;
            puVar7[9] = 0;
            lVar1 = (long)param_2 + (ulong)uVar2 * 2;
            uVar10 = (ulong)(ushort)((uint)uVar3 >> 0x10);
            *(int *)(puVar7 + 8) = iVar11;
            *puVar7 = param_2;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = stack0xffffffffffffff90;
            puVar7[4] = local_68;
            puVar7[5] = uStack_60;
            puVar7[6] = local_58._0_8_;
            if (param_1 == 1) {
              puVar7[2] = lVar1;
              uVar9 = *(uint *)(lVar1 + uVar10 * 4);
              uVar8 = *(uint *)(lVar1 + 0x200);
            }
            else {
              puVar7[1] = lVar1;
              uVar9 = (uint)*(ushort *)((long)param_2 + uVar10 * 2);
              uVar8 = (uint)*(ushort *)(lVar1 + 0x100);
            }
            *(uint *)(puVar7 + 5) = uVar8;
            *(uint *)((long)puVar7 + 0x24) = uVar9;
            if (param_4 != (int *)0x0) {
              *param_4 = iVar11;
            }
            goto LAB_00100bb9;
          }
          *param_5 = 7;
          goto LAB_00100bb7;
        }
      }
      *param_5 = 3;
    }
  }
LAB_00100bb7:
  puVar7 = (undefined8 *)0x0;
LAB_00100bb9:
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 (*) [16] utrie2_openDummy_76_godot(uint param_1,uint param_2,uint param_3,int *param_4)

{
  undefined8 uVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  uint *puVar6;
  uint *puVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar11 [16];
  
  if (*param_4 < 1) {
    if (param_1 < 2) {
      pauVar2 = (undefined1 (*) [16])uprv_malloc_76_godot(0x50);
      if (pauVar2 != (undefined1 (*) [16])0x0) {
        *pauVar2 = (undefined1  [16])0x0;
        pauVar2[1] = (undefined1  [16])0x0;
        pauVar2[2] = (undefined1  [16])0x0;
        pauVar2[3] = (undefined1  [16])0x0;
        pauVar2[4] = (undefined1  [16])0x0;
        puVar3 = (undefined4 *)uprv_malloc_76_godot();
        auVar11._8_8_ = extraout_XMM1_Qb;
        auVar11._0_8_ = extraout_XMM1_Qa;
        *(undefined4 **)(pauVar2[3] + 8) = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          *(uint *)pauVar2[4] = (-(uint)(param_1 == 0) & 0xfffffe78) + 0x13a0;
          pauVar2[4][4] = 1;
          uVar4 = (ulong)-(uint)(param_1 == 0) & 0xffffffffffff0840;
          *(uint *)(pauVar2[2] + 4) = param_2;
          *(uint *)(pauVar2[2] + 8) = param_3;
          uVar1 = _LC0;
          *(undefined4 *)(pauVar2[2] + 0xc) = 0;
          *puVar3 = 0x54726932;
          auVar11 = pshuflw(auVar11,ZEXT416((uint)CONCAT62((int6)(uVar4 >> 0x10),(short)uVar4 + 0x80
                                                          )),0);
          *(undefined8 *)(pauVar2[1] + 8) = uVar1;
          *(short *)(puVar3 + 1) = (short)param_1;
          uVar9 = CONCAT22(-(ushort)(param_1 == 0),-(ushort)(param_1 == 0));
          auVar10._0_8_ = CONCAT44(uVar9,uVar9) & 0x210021002100210;
          auVar10._8_4_ = uVar9 & 0x2100210;
          auVar10._12_4_ = uVar9 & 0x2100210;
          puVar3[2] = 0x31;
          *(uint *)pauVar2[3] = (-(uint)(param_1 == 0) & 0x840) + 0xc0;
          uVar9 = -(uint)(param_1 == 0) & 0xffff0840;
          *(undefined2 *)pauVar2[2] = 0;
          pauVar5 = (undefined1 (*) [16])(puVar3 + 4);
          uVar8 = (undefined2)uVar9;
          *(undefined2 *)(pauVar2[2] + 2) = uVar8;
          *(undefined2 *)((long)puVar3 + 6) = 0x840;
          *(undefined2 *)(puVar3 + 3) = uVar8;
          *(undefined2 *)((long)puVar3 + 0xe) = 0;
          *(undefined1 (**) [16])*pauVar2 = pauVar5;
          do {
            *pauVar5 = auVar10;
            pauVar5 = pauVar5 + 1;
          } while (pauVar5 != (undefined1 (*) [16])(puVar3 + 0x414));
          puVar3[0x414] = auVar11._0_4_;
          puVar6 = puVar3 + 0x415;
          auVar10 = pshuflw(auVar10,ZEXT416(uVar9),0);
          do {
            *puVar6 = auVar10._0_4_;
            puVar6 = puVar6 + 1;
          } while (puVar6 != puVar3 + 0x424);
          if (param_1 != 1) {
            *(uint **)(*pauVar2 + 8) = puVar6;
            *(undefined8 *)pauVar2[1] = 0;
            uVar9 = CONCAT22((short)param_2,(short)param_2);
            auVar11 = pshuflw(auVar11,ZEXT416(param_2),0);
            do {
              *puVar6 = uVar9;
              puVar6[1] = uVar9;
              puVar6[2] = uVar9;
              puVar6[3] = uVar9;
              puVar6 = puVar6 + 4;
            } while (puVar6 != puVar3 + 0x464);
            uVar9 = CONCAT22((short)param_3,(short)param_3);
            do {
              *puVar6 = uVar9;
              puVar6[1] = uVar9;
              puVar6[2] = uVar9;
              puVar6[3] = uVar9;
              puVar6 = puVar6 + 4;
            } while (puVar6 != puVar3 + 0x484);
            *(long *)(puVar3 + 0x484) = auVar11._0_8_;
            return pauVar2;
          }
          *(uint **)pauVar2[1] = puVar6;
          puVar7 = puVar3 + 0x4a4;
          *(undefined8 *)(*pauVar2 + 8) = 0;
          do {
            *puVar6 = param_2;
            puVar6[1] = param_2;
            puVar6[2] = param_2;
            puVar6[3] = param_2;
            puVar6 = puVar6 + 4;
          } while (puVar7 != puVar6);
          do {
            *puVar7 = param_3;
            puVar7[1] = param_3;
            puVar7[2] = param_3;
            puVar7[3] = param_3;
            puVar7 = puVar7 + 4;
          } while (puVar7 != puVar3 + 0x4e4);
          puVar3[0x4e4] = param_2;
          puVar3[0x4e5] = param_2;
          puVar3[0x4e6] = param_2;
          puVar3[0x4e7] = param_2;
          return pauVar2;
        }
        uprv_free_76_godot(pauVar2);
      }
      *param_4 = 7;
    }
    else {
      *param_4 = 1;
    }
  }
  return (undefined1 (*) [16])0x0;
}



void utrie2_close_76_godot(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x44) == '\0') {
      lVar1 = *(long *)(param_1 + 0x48);
    }
    else {
      uprv_free_76_godot(*(undefined8 *)(param_1 + 0x38));
      lVar1 = *(long *)(param_1 + 0x48);
    }
    if (lVar1 != 0) {
      uprv_free_76_godot(*(undefined8 *)(lVar1 + 0x23300));
      uprv_free_76_godot(*(undefined8 *)(param_1 + 0x48));
    }
    uprv_free_76_godot(param_1);
    return;
  }
  return;
}



bool utrie2_isFrozen_76_godot(long param_1)

{
  return *(long *)(param_1 + 0x48) == 0;
}



int utrie2_serialize_76_godot(long param_1,void *param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if (0 < *param_4) {
    return 0;
  }
  if (((((param_1 != 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) &&
       (*(long *)(param_1 + 0x48) == 0)) && (-1 < param_3)) &&
     ((param_3 == 0 || ((param_2 != (void *)0x0 && (((ulong)param_2 & 3) == 0)))))) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (param_3 < iVar1) {
      *param_4 = 0xf;
      return iVar1;
    }
    memcpy(param_2,*(void **)(param_1 + 0x38),(long)iVar1);
    return *(int *)(param_1 + 0x40);
  }
  *param_4 = 1;
  return 0;
}



void utrie2_enum_76_godot
               (UTrie2 *param_1,_func_uint_void_ptr_uint *param_2,
               _func_signed_void_ptr_int_int_uint *param_3,void *param_4)

{
  enumEitherTrie(param_1,0,0x110000,param_2,param_3,param_4);
  return;
}



void utrie2_enumForLeadSurrogate_76_godot
               (UTrie2 *param_1,uint param_2,_func_uint_void_ptr_uint *param_3,
               _func_signed_void_ptr_int_int_uint *param_4,void *param_5)

{
  int iVar1;
  
  if ((param_2 & 0xfffffc00) != 0xd800) {
    return;
  }
  iVar1 = (param_2 - 0xd7c0) * 0x400;
  enumEitherTrie(param_1,iVar1,iVar1 + 0x400,param_3,param_4,param_5);
  return;
}



/* icu_76_godot::BackwardUTrie2StringIterator::previous16() */

undefined2 __thiscall
icu_76_godot::BackwardUTrie2StringIterator::previous16(BackwardUTrie2StringIterator *this)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = *(ulong *)(this + 8);
  plVar3 = *(long **)this;
  *(ulong *)(this + 0x10) = uVar2;
  if (uVar2 <= *(ulong *)(this + 0x20)) {
    *(undefined4 *)(this + 0x18) = 0xffffffff;
    return (short)plVar3[5];
  }
  uVar1 = *(ushort *)(uVar2 - 2);
  lVar4 = *plVar3;
  *(ulong *)(this + 8) = uVar2 - 2;
  *(uint *)(this + 0x18) = (uint)uVar1;
  uVar6 = uVar1 & 0xfffffc00;
  if (uVar6 == 0xdc00) {
    if (*(ulong *)(this + 0x20) == uVar2 - 2) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      if ((*(ushort *)(uVar2 - 4) & 0xfc00) == 0xd800) {
        uVar6 = uVar1 + 0xfca02400 + (uint)*(ushort *)(uVar2 - 4) * 0x400;
        *(ulong *)(this + 8) = uVar2 - 4;
        *(uint *)(this + 0x18) = uVar6;
        if ((int)uVar6 < *(int *)((long)plVar3 + 0x2c)) {
          iVar5 = (uVar6 & 0x1f) +
                  (uint)*(ushort *)
                         (lVar4 + (long)(int)((uint)*(ushort *)
                                                     (lVar4 + (long)(((int)uVar6 >> 0xb) + 0x820) *
                                                              2) + ((int)uVar6 >> 5 & 0x3fU)) * 2) *
                  4;
        }
        else {
          iVar5 = (int)plVar3[6];
        }
        return *(undefined2 *)(lVar4 + (long)iVar5 * 2);
      }
    }
  }
  else {
    iVar5 = 0x140;
    if (uVar6 != 0xd800) {
      iVar5 = 0;
    }
  }
  return *(undefined2 *)
          (lVar4 + (long)(int)((uVar1 & 0x1f) +
                              (uint)*(ushort *)(lVar4 + (long)(((int)(uint)uVar1 >> 5) + iVar5) * 2)
                              * 4) * 2);
}



/* icu_76_godot::ForwardUTrie2StringIterator::next16() */

undefined2 __thiscall
icu_76_godot::ForwardUTrie2StringIterator::next16(ForwardUTrie2StringIterator *this)

{
  ushort uVar1;
  ushort *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = *(ushort **)(this + 0x10);
  plVar3 = *(long **)this;
  *(ushort **)(this + 8) = puVar2;
  if (puVar2 == *(ushort **)(this + 0x20)) {
    *(undefined4 *)(this + 0x18) = 0xffffffff;
    return (short)plVar3[5];
  }
  uVar1 = *puVar2;
  lVar4 = *plVar3;
  *(ushort **)(this + 0x10) = puVar2 + 1;
  *(uint *)(this + 0x18) = (uint)uVar1;
  iVar6 = (int)(uint)uVar1 >> 5;
  if ((uVar1 & 0xfffffc00) == 0xd800) {
    if ((*(ushort **)(this + 0x20) != puVar2 + 1) && ((puVar2[1] & 0xfc00) == 0xdc00)) {
      uVar5 = puVar2[1] + 0xfca02400 + (uint)uVar1 * 0x400;
      *(ushort **)(this + 0x10) = puVar2 + 2;
      *(uint *)(this + 0x18) = uVar5;
      if ((int)uVar5 < *(int *)((long)plVar3 + 0x2c)) {
        iVar6 = (uVar5 & 0x1f) +
                (uint)*(ushort *)
                       (lVar4 + (long)(int)((uint)*(ushort *)
                                                   (lVar4 + (long)(((int)uVar5 >> 0xb) + 0x820) * 2)
                                           + ((int)uVar5 >> 5 & 0x3fU)) * 2) * 4;
      }
      else {
        iVar6 = (int)plVar3[6];
      }
      return *(undefined2 *)(lVar4 + (long)iVar6 * 2);
    }
    iVar6 = iVar6 + 0x140;
  }
  return *(undefined2 *)
          (lVar4 + (long)(int)((uVar1 & 0x1f) + (uint)*(ushort *)(lVar4 + (long)iVar6 * 2) * 4) * 2)
  ;
}


