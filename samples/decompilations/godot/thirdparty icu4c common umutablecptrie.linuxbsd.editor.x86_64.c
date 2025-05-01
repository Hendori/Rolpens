
/* icu_76_godot::(anonymous namespace)::MutableCodePointTrie::maskValues(unsigned int) */

void __thiscall
icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::maskValues
          (MutableCodePointTrie *this,uint param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = *(int *)(this + 0x30);
  *(uint *)(this + 0x34) = *(uint *)(this + 0x34) & param_1;
  *(ulong *)(this + 0x28) = *(ulong *)(this + 0x28) & CONCAT44(param_1,param_1);
  if (0 < iVar2 >> 4) {
    lVar3 = 0;
    do {
      if (this[lVar3 + 0x40] == (MutableCodePointTrie)0x0) {
        puVar1 = (uint *)(*(long *)this + lVar3 * 4);
        *puVar1 = *puVar1 & param_1;
      }
      lVar3 = lVar3 + 1;
    } while (iVar2 >> 4 != lVar3);
  }
  if (0 < *(int *)(this + 0x1c)) {
    lVar3 = *(long *)(this + 0x10);
    lVar4 = 0;
    do {
      puVar1 = (uint *)(lVar3 + lVar4 * 4);
      *puVar1 = *puVar1 & param_1;
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(this + 0x1c));
  }
  return;
}



/* icu_76_godot::(anonymous namespace)::MutableCodePointTrie::ensureHighStart(int) */

undefined8 __thiscall
icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::ensureHighStart
          (MutableCodePointTrie *this,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 < *(int *)(this + 0x30)) {
    return 1;
  }
  iVar2 = *(int *)(this + 0x30) >> 4;
  uVar6 = param_1 + 0x200U & 0xfffffe00;
  iVar5 = (int)uVar6 >> 4;
  if (*(int *)(this + 8) < iVar5) {
    lVar4 = uprv_malloc_76_godot(0x44000);
    if (lVar4 == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)this;
    __memcpy_chk(lVar4,uVar1,(long)(iVar2 * 4),0x44000);
    uprv_free_76_godot(uVar1);
    *(long *)this = lVar4;
    *(undefined4 *)(this + 8) = 0x11000;
  }
  else {
    lVar4 = *(long *)this;
  }
  lVar3 = (long)iVar2;
  do {
    this[lVar3 + 0x40] = (MutableCodePointTrie)0x0;
    *(undefined4 *)(lVar4 + lVar3 * 4) = *(undefined4 *)(this + 0x28);
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < iVar5);
  *(uint *)(this + 0x30) = uVar6;
  return 1;
}



/* icu_76_godot::(anonymous namespace)::MutableCodePointTrie::allocDataBlock(int) */

int __thiscall
icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::allocDataBlock
          (MutableCodePointTrie *this,int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(this + 0x1c);
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 < iVar5 + param_1) {
    if (iVar1 < 0x20000) {
      uVar4 = 0x80000;
      uVar6 = 0x20000;
LAB_0010017a:
      lVar3 = uprv_malloc_76_godot(uVar4);
      if (lVar3 != 0) {
        uVar2 = *(undefined8 *)(this + 0x10);
        __memcpy_chk(lVar3,uVar2,(long)*(int *)(this + 0x1c) << 2,uVar4);
        uprv_free_76_godot(uVar2);
        *(long *)(this + 0x10) = lVar3;
        *(undefined4 *)(this + 0x18) = uVar6;
        goto LAB_001001bb;
      }
    }
    else if (iVar1 < 0x110000) {
      uVar4 = 0x440000;
      uVar6 = 0x110000;
      goto LAB_0010017a;
    }
    iVar5 = -1;
  }
  else {
LAB_001001bb:
    *(int *)(this + 0x1c) = iVar5 + param_1;
  }
  return iVar5;
}



/* icu_76_godot::(anonymous namespace)::MutableCodePointTrie::getDataBlock(int) */

ulong __thiscall
icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::getDataBlock
          (MutableCodePointTrie *this,int param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = (long)param_1;
  if (this[lVar10 + 0x40] == (MutableCodePointTrie)0x1) {
    return (ulong)*(uint *)(*(long *)this + lVar10 * 4);
  }
  if (param_1 < 0x1000) {
    uVar7 = allocDataBlock(this,0x40);
    if (-1 < (int)uVar7) {
      lVar8 = (long)(int)uVar7;
      lVar4 = *(long *)this;
      lVar5 = *(long *)(this + 0x10);
      lVar9 = (long)(int)(param_1 & 0xfffffffc);
      lVar1 = lVar8 + 0x40;
      do {
        uVar3 = *(undefined4 *)(lVar4 + lVar9 * 4);
        puVar2 = (undefined4 *)(lVar5 + lVar8 * 4);
        *puVar2 = uVar3;
        puVar2[1] = uVar3;
        puVar2[2] = uVar3;
        puVar2[3] = uVar3;
        puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar8 * 4);
        *puVar2 = uVar3;
        puVar2[1] = uVar3;
        puVar2[2] = uVar3;
        puVar2[3] = uVar3;
        puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar8 * 4);
        *puVar2 = uVar3;
        puVar2[1] = uVar3;
        puVar2[2] = uVar3;
        puVar2[3] = uVar3;
        puVar2 = (undefined4 *)(lVar5 + 0x30 + lVar8 * 4);
        *puVar2 = uVar3;
        puVar2[1] = uVar3;
        puVar2[2] = uVar3;
        puVar2[3] = uVar3;
        this[lVar9 + 0x40] = (MutableCodePointTrie)0x1;
        *(int *)(lVar4 + lVar9 * 4) = (int)lVar8;
        lVar8 = lVar8 + 0x10;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar1);
      return (ulong)*(uint *)(lVar4 + lVar10 * 4);
    }
  }
  else {
    uVar7 = allocDataBlock(this,0x10);
    iVar6 = (int)uVar7;
    if (-1 < iVar6) {
      lVar1 = *(long *)this;
      uVar3 = *(undefined4 *)(lVar1 + lVar10 * 4);
      puVar2 = (undefined4 *)(*(long *)(this + 0x10) + (long)iVar6 * 4);
      *puVar2 = uVar3;
      puVar2[1] = uVar3;
      puVar2[2] = uVar3;
      puVar2[3] = uVar3;
      puVar2[4] = uVar3;
      puVar2[5] = uVar3;
      puVar2[6] = uVar3;
      puVar2[7] = uVar3;
      puVar2[8] = uVar3;
      puVar2[9] = uVar3;
      puVar2[10] = uVar3;
      puVar2[0xb] = uVar3;
      puVar2[0xc] = uVar3;
      puVar2[0xd] = uVar3;
      puVar2[0xe] = uVar3;
      puVar2[0xf] = uVar3;
      this[lVar10 + 0x40] = (MutableCodePointTrie)0x1;
      *(int *)(lVar1 + lVar10 * 4) = iVar6;
    }
  }
  return uVar7;
}



/* icu_76_godot::(anonymous namespace)::MutableCodePointTrie::setRange(int, int, unsigned int,
   UErrorCode&) [clone .part.0] */

void __thiscall
icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::setRange
          (MutableCodePointTrie *this,int param_1,int param_2,uint param_3,UErrorCode *param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  cVar2 = ensureHighStart(this,param_2);
  if (cVar2 == '\0') goto LAB_00100448;
  uVar9 = param_2 + 1;
  uVar8 = param_1 & 0xf;
  if (uVar8 != 0) {
    iVar3 = getDataBlock(this,param_1 >> 4);
    if (iVar3 < 0) goto LAB_00100448;
    param_1 = param_1 + 0xfU & 0xfffffff0;
    lVar1 = *(long *)(this + 0x10) + (long)iVar3 * 4;
    puVar4 = (uint *)(lVar1 + (long)(int)uVar8 * 4);
    if ((int)uVar9 < param_1) {
      puVar7 = (uint *)(lVar1 + (ulong)(uVar9 & 0xf) * 4);
      if (puVar7 <= puVar4) {
        return;
      }
      *puVar4 = param_3;
      if (puVar7 <= puVar4 + 1) {
        return;
      }
      puVar5 = puVar4 + 1;
      if ((~(ulong)puVar4 + (long)puVar7 >> 2 & 1) != 0) {
        puVar5 = puVar4 + 2;
        puVar4[1] = param_3;
        if (puVar7 <= puVar5) {
          return;
        }
      }
      do {
        *puVar5 = param_3;
        puVar4 = puVar5 + 2;
        puVar5[1] = param_3;
        puVar5 = puVar4;
      } while (puVar4 < puVar7);
      return;
    }
    puVar7 = (uint *)(lVar1 + 0x40);
    if (puVar4 < puVar7) {
      *puVar4 = param_3;
      if (puVar4 + 1 < puVar7) {
        puVar5 = puVar4 + 1;
        if ((~(ulong)puVar4 + (long)puVar7 >> 2 & 1) != 0) {
          puVar5 = puVar4 + 2;
          puVar4[1] = param_3;
          if (puVar7 <= puVar5) goto LAB_0010030c;
        }
        do {
          *puVar5 = param_3;
          puVar5[1] = param_3;
          if (puVar7 <= puVar5 + 2) break;
          puVar5[2] = param_3;
          puVar4 = puVar5 + 4;
          puVar5[3] = param_3;
          puVar5 = puVar4;
        } while (puVar4 < puVar7);
      }
    }
  }
LAB_0010030c:
  uVar8 = uVar9 & 0xfffffff0;
  if (param_1 < (int)uVar8) {
    lVar1 = *(long *)this;
    uVar6 = param_1;
    do {
      while (puVar4 = (uint *)(lVar1 + (long)((int)uVar6 >> 4) * 4),
            this[(long)((int)uVar6 >> 4) + 0x40] == (MutableCodePointTrie)0x0) {
        uVar6 = uVar6 + 0x10;
        *puVar4 = param_3;
        if ((int)uVar8 <= (int)uVar6) goto LAB_0010036e;
      }
      uVar6 = uVar6 + 0x10;
      puVar4 = (uint *)(*(long *)(this + 0x10) + (ulong)*puVar4 * 4);
      *puVar4 = param_3;
      puVar4[1] = param_3;
      puVar4[2] = param_3;
      puVar4[3] = param_3;
      puVar4[4] = param_3;
      puVar4[5] = param_3;
      puVar4[6] = param_3;
      puVar4[7] = param_3;
      puVar4[8] = param_3;
      puVar4[9] = param_3;
      puVar4[10] = param_3;
      puVar4[0xb] = param_3;
      puVar4[0xc] = param_3;
      puVar4[0xd] = param_3;
      puVar4[0xe] = param_3;
      puVar4[0xf] = param_3;
    } while ((int)uVar6 < (int)uVar8);
LAB_0010036e:
    param_1 = ((uVar8 - 1) - param_1 & 0xfffffff0) + 0x10 + param_1;
  }
  if ((uVar9 & 0xf) != 0) {
    iVar3 = getDataBlock(this,param_1 >> 4);
    if (iVar3 < 0) {
LAB_00100448:
      *(undefined4 *)param_4 = 7;
      return;
    }
    puVar4 = (uint *)(*(long *)(this + 0x10) + (long)iVar3 * 4);
    puVar7 = puVar4 + (uVar9 & 0xf);
    if (puVar4 < puVar7) {
      *puVar4 = param_3;
      if (puVar4 + 1 < puVar7) {
        puVar5 = puVar4 + 1;
        if ((~(ulong)puVar4 + (long)puVar7 >> 2 & 1) != 0) {
          puVar4[1] = param_3;
          puVar5 = puVar4 + 2;
          if (puVar7 <= puVar4 + 2) {
            return;
          }
        }
        do {
          *puVar5 = param_3;
          puVar5[1] = param_3;
          if (puVar7 <= puVar5 + 2) {
            return;
          }
          puVar5[2] = param_3;
          puVar4 = puVar5 + 4;
          puVar5[3] = param_3;
          puVar5 = puVar4;
        } while (puVar4 < puVar7);
      }
    }
  }
  return;
}



/* (anonymous namespace)::getRange(void const*, int, unsigned int (*)(void const*, unsigned int),
   void const*, unsigned int*) */

uint (anonymous_namespace)::getRange
               (void *param_1,int param_2,_func_uint_void_ptr_uint *param_3,void *param_4,
               uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint in_R11D;
  uint unaff_R15D;
  bool bVar5;
  uint local_5c;
  long local_48;
  
  if ((uint)param_2 < 0x110000) {
    if (param_2 < *(int *)((long)param_1 + 0x30)) {
      local_5c = *(uint *)((long)param_1 + 0x28);
      if (param_3 != (_func_uint_void_ptr_uint *)0x0) {
        local_5c = (*param_3)(param_4,local_5c);
      }
      local_48 = (long)(param_2 >> 4);
      bVar5 = false;
      do {
                    /* WARNING: Load size is inaccurate */
        uVar3 = *(uint *)(*param_1 + local_48 * 4);
        if (*(char *)((long)param_1 + local_48 + 0x40) == '\0') {
          if (bVar5) {
            if (in_R11D != uVar3) {
              if (param_3 == (_func_uint_void_ptr_uint *)0x0) goto LAB_00100641;
              uVar1 = local_5c;
              if (*(uint *)((long)param_1 + 0x28) != uVar3) {
                uVar1 = (*param_3)(param_4,uVar3);
              }
              if (unaff_R15D != uVar1) goto LAB_00100641;
            }
          }
          else {
            unaff_R15D = local_5c;
            if ((*(uint *)((long)param_1 + 0x28) != uVar3) &&
               (unaff_R15D = uVar3, param_3 != (_func_uint_void_ptr_uint *)0x0)) {
              unaff_R15D = (*param_3)(param_4,uVar3);
            }
            if (param_5 != (uint *)0x0) {
              *param_5 = unaff_R15D;
            }
          }
          param_2 = param_2 + 0x10U & 0xfffffff0;
          in_R11D = uVar3;
        }
        else {
          lVar4 = (long)(int)((param_2 & 0xfU) + uVar3);
          uVar3 = *(uint *)(*(long *)((long)param_1 + 0x10) + lVar4 * 4);
          if (bVar5) {
            if (in_R11D != uVar3) {
              if (param_3 == (_func_uint_void_ptr_uint *)0x0) goto LAB_00100641;
              uVar1 = local_5c;
              if (uVar3 != *(uint *)((long)param_1 + 0x28)) {
                uVar1 = (*param_3)(param_4,uVar3);
              }
              bVar5 = unaff_R15D != uVar1;
              unaff_R15D = uVar1;
              if (bVar5) goto LAB_00100641;
            }
          }
          else {
            unaff_R15D = local_5c;
            if ((uVar3 != *(uint *)((long)param_1 + 0x28)) &&
               (unaff_R15D = uVar3, param_3 != (_func_uint_void_ptr_uint *)0x0)) {
              unaff_R15D = (*param_3)(param_4,uVar3);
            }
            if (param_5 != (uint *)0x0) {
              *param_5 = unaff_R15D;
            }
          }
          lVar4 = lVar4 * 4;
          in_R11D = uVar3;
          while (uVar3 = param_2, param_2 = uVar3 + 1, (param_2 & 0xfU) != 0) {
            lVar4 = lVar4 + 4;
            uVar1 = *(uint *)(*(long *)((long)param_1 + 0x10) + lVar4);
            bVar5 = uVar1 != in_R11D;
            in_R11D = uVar1;
            if (bVar5) {
              if (param_3 == (_func_uint_void_ptr_uint *)0x0) {
                return uVar3;
              }
              uVar2 = local_5c;
              if (uVar1 != *(uint *)((long)param_1 + 0x28)) {
                uVar2 = (*param_3)(param_4,uVar1);
              }
              if (uVar2 != unaff_R15D) {
                return uVar3;
              }
            }
          }
        }
        local_48 = local_48 + 1;
        bVar5 = true;
      } while (param_2 < *(int *)((long)param_1 + 0x30));
      uVar3 = *(uint *)((long)param_1 + 0x34);
      if ((*(uint *)((long)param_1 + 0x28) != uVar3) &&
         (local_5c = uVar3, param_3 != (_func_uint_void_ptr_uint *)0x0)) {
        local_5c = (*param_3)(param_4,uVar3);
      }
      if (local_5c != unaff_R15D) {
LAB_00100641:
        return param_2 - 1;
      }
    }
    else if (param_5 != (uint *)0x0) {
      uVar3 = *(uint *)((long)param_1 + 0x34);
      if (param_3 != (_func_uint_void_ptr_uint *)0x0) {
        uVar3 = (*param_3)(param_4,uVar3);
      }
      *param_5 = uVar3;
    }
    uVar3 = 0x10ffff;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* WARNING: Type propagation algorithm not settling */
/* icu_76_godot::(anonymous namespace)::MutableCodePointTrie::compactTrie(int, UErrorCode&) */

uint __thiscall
icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::compactTrie
          (MutableCodePointTrie *this,int param_1,UErrorCode *param_2)

{
  MutableCodePointTrie MVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  void *__s;
  uint *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  long lVar22;
  byte bVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int *piVar28;
  int *piVar29;
  long lVar30;
  uint uVar31;
  size_t sVar32;
  ulong uVar33;
  uint *puVar34;
  uint *puVar35;
  long lVar36;
  ushort *puVar37;
  uint uVar38;
  uint uVar39;
  MutableCodePointTrie *pMVar40;
  uint uVar41;
  short sVar42;
  uint uVar43;
  long in_FS_OFFSET;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  uint local_1da0;
  uint local_1d98;
  uint local_1d88;
  short *local_1d80;
  int local_1d78;
  long local_1d70;
  int local_1d68;
  long local_1d58;
  uint local_1d50;
  void *local_1d48;
  long local_1d40;
  uint local_1d38;
  uint local_1d34;
  ushort *local_1d28;
  byte local_1d10;
  uint auStack_1cd0 [32];
  uint auStack_1c50 [32];
  uint auStack_1bd0 [34];
  int local_1b48 [128];
  ushort local_1948 [32];
  ushort local_1908 [992];
  ushort local_1148 [32];
  ushort local_1108 [2148];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x30) < 0x110000) {
    uVar43 = *(uint *)(this + 0x34);
    lVar17 = *(long *)this;
  }
  else {
    lVar17 = *(long *)this;
    uVar43 = *(uint *)(lVar17 + 0x43ffc);
    if (this[0x1103f] != (MutableCodePointTrie)0x0) {
      uVar43 = *(uint *)(*(long *)(this + 0x10) + (ulong)(uVar43 + 0xf) * 4);
    }
  }
  iVar25 = *(int *)(this + 0x30) >> 4;
  *(uint *)(this + 0x34) = uVar43;
  pMVar40 = this + (long)iVar25 + 0x3f;
  lVar36 = (long)iVar25 * 4;
  while (lVar36 = lVar36 + -4, 0 < iVar25) {
    if (*pMVar40 == (MutableCodePointTrie)0x0) {
      if (uVar43 != *(uint *)(lVar17 + lVar36)) {
LAB_001008cd:
        uVar26 = iVar25 * 0x10 + 0x1ffU & 0xfffffe00;
        local_1d38 = uVar26;
        if (uVar26 != 0x110000) {
          local_1da0 = (int)uVar26 >> 4;
          uVar38 = param_1 * 0x10;
          if (param_1 * 0x10 <= (int)uVar26) goto LAB_00100975;
          goto LAB_0010091a;
        }
        local_1da0 = 0x11000;
        *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x28);
        goto LAB_00100975;
      }
    }
    else {
      lVar16 = (ulong)*(uint *)(lVar17 + lVar36) * 4;
      puVar15 = (uint *)(*(long *)(this + 0x10) + lVar16);
      do {
        if (uVar43 != *puVar15) goto LAB_001008cd;
        puVar15 = puVar15 + 1;
      } while ((uint *)(*(long *)(this + 0x10) + 0x40 + lVar16) != puVar15);
    }
    pMVar40 = pMVar40 + -1;
    iVar25 = iVar25 + -1;
  }
  local_1da0 = 0;
  local_1d38 = 0;
  uVar38 = param_1 << 4;
LAB_0010091a:
  uVar26 = uVar38;
  if ((int)local_1da0 < param_1) {
    this[(long)(int)local_1da0 + 0x40] = (MutableCodePointTrie)0x0;
    *(uint *)(lVar17 + (long)(int)local_1da0 * 4) = uVar43;
    if ((int)(local_1da0 + 1) < param_1) {
      lVar36 = (long)(int)(local_1da0 + 1);
      do {
        uVar2 = *(undefined4 *)(this + 0x34);
        this[lVar36 + 0x40] = (MutableCodePointTrie)0x0;
        *(undefined4 *)(lVar17 + lVar36 * 4) = uVar2;
        lVar36 = lVar36 + 1;
      } while ((int)lVar36 < param_1);
    }
    lVar17 = *(long *)this;
  }
  local_1da0 = (int)uVar26 >> 4;
LAB_00100975:
  *(uint *)(this + 0x30) = uVar26;
  lVar36 = 0;
  do {
    lVar16 = (long)((int)(uint)lVar36 >> 4);
    iVar25 = *(int *)(lVar17 + lVar16 * 4);
    if (this[lVar16 + 0x40] != (MutableCodePointTrie)0x0) {
      iVar25 = *(int *)(*(long *)(this + 0x10) + (ulong)(iVar25 + ((uint)lVar36 & 0xf)) * 4);
    }
    local_1b48[lVar36] = iVar25;
    lVar36 = lVar36 + 1;
  } while (lVar36 != 0x80);
  iVar11 = 0;
  uVar26 = 0;
  local_1d68 = 0x94;
  iVar25 = -1;
  uVar43 = 4;
  iVar10 = 0x40;
  do {
    lVar36 = (long)(int)uVar26;
    puVar15 = (uint *)(lVar17 + lVar36 * 4);
    uVar38 = *puVar15;
    if (param_1 == uVar26) {
      if (this[lVar36 + 0x40] == (MutableCodePointTrie)0x1) {
        lVar16 = 0x3c;
        uVar43 = 1;
        iVar10 = 0x10;
        uVar8 = param_1 + 1;
        goto LAB_00100c5b;
      }
      uVar43 = 1;
      iVar10 = 0x10;
      uVar8 = param_1 + 1;
LAB_00100aaa:
      if ((iVar25 < 0) || (uVar38 != auStack_1c50[iVar25])) {
        lVar16 = (long)iVar11;
        lVar30 = 0;
        if (0 < iVar11) {
          do {
            if (uVar38 == auStack_1c50[lVar30]) {
              iVar25 = (int)lVar30;
              auStack_1bd0[iVar25] = auStack_1bd0[iVar25] + uVar43;
              uVar14 = auStack_1cd0[iVar25];
              if (uVar14 == 0xfffffffe) goto LAB_00100d58;
              goto LAB_00100b0b;
            }
            lVar30 = lVar30 + 1;
          } while (lVar16 != lVar30);
          if (iVar11 == 0x20) {
LAB_00100d58:
            if (uVar26 != 0) goto LAB_00100cbd;
LAB_00100d04:
            lVar17 = 0;
            iVar25 = -1;
            uVar14 = 0x11000;
            do {
              if ((int)auStack_1bd0[lVar17] < (int)uVar14) {
                uVar14 = auStack_1bd0[lVar17];
                iVar25 = (int)lVar17;
              }
              lVar17 = lVar17 + 1;
            } while (iVar11 != lVar17);
            goto LAB_00100d2b;
          }
        }
        auStack_1cd0[lVar16] = uVar26;
        auStack_1c50[lVar16] = uVar38;
        auStack_1bd0[lVar16] = uVar43;
        iVar25 = iVar11;
        iVar11 = iVar11 + 1;
        goto LAB_00100c40;
      }
      auStack_1bd0[iVar25] = auStack_1bd0[iVar25] + uVar43;
      uVar14 = auStack_1cd0[iVar25];
      if (uVar14 == 0xfffffffe) {
        if (uVar26 != 0) {
LAB_00100cbd:
          iVar7 = 4;
          uVar14 = 0;
LAB_00100cd0:
          if (param_1 == uVar14) {
            iVar7 = 1;
          }
          if ((this[(long)(int)uVar14 + 0x40] != (MutableCodePointTrie)0x0) ||
             (uVar38 != *(uint *)(lVar17 + (long)(int)uVar14 * 4))) break;
          if (iVar11 < 1) {
            iVar25 = -1;
          }
          else {
            lVar17 = 0;
            iVar25 = -1;
            uVar26 = 0x11000;
            do {
              if ((int)auStack_1bd0[lVar17] < (int)uVar26) {
                uVar26 = auStack_1bd0[lVar17];
                iVar25 = (int)lVar17;
              }
              lVar17 = lVar17 + 1;
            } while (iVar11 != lVar17);
          }
          auStack_1c50[iVar25] = uVar38;
          auStack_1cd0[iVar25] = uVar14;
          auStack_1bd0[iVar25] = iVar7 + uVar43;
          goto LAB_00100b0b;
        }
LAB_00100cf0:
        if (0 < iVar11) goto LAB_00100d04;
        iVar25 = -1;
LAB_00100d2b:
        local_1d68 = local_1d68 + iVar10;
        auStack_1cd0[iVar25] = uVar26;
        auStack_1c50[iVar25] = uVar38;
        auStack_1bd0[iVar25] = uVar43;
        uVar26 = uVar8;
      }
      else {
LAB_00100b0b:
        if ((int)uVar14 < 0) goto LAB_00100c40;
        this[lVar36 + 0x40] = (MutableCodePointTrie)0x2;
        *puVar15 = uVar14;
        uVar26 = uVar8;
      }
    }
    else {
      uVar8 = uVar26 + uVar43;
      if (this[lVar36 + 0x40] != (MutableCodePointTrie)0x1) {
        if (1 < uVar43) {
          lVar16 = (long)(int)(uVar26 + 1);
          do {
            if (*(uint *)(lVar17 + lVar16 * 4) != uVar38) {
              iVar7 = getDataBlock(this,uVar26);
              if (iVar7 < 0) goto LAB_001015f8;
              local_1d68 = local_1d68 + iVar10;
              uVar26 = uVar8;
              goto joined_r0x00100b24;
            }
            lVar16 = lVar16 + 1;
          } while ((int)lVar16 < (int)uVar8);
        }
        goto LAB_00100aaa;
      }
      lVar16 = (long)(iVar10 + -1) << 2;
LAB_00100c5b:
      puVar19 = (uint *)(*(long *)(this + 0x10) + (ulong)uVar38 * 4);
      uVar38 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar34 = (uint *)(lVar16 + (long)puVar19);
      for (; (puVar19 < puVar34 && (uVar38 == *puVar19)); puVar19 = puVar19 + 1) {
      }
      if (puVar34 == puVar19) {
        this[lVar36 + 0x40] = (MutableCodePointTrie)0x0;
        *puVar15 = uVar38;
        goto LAB_00100aaa;
      }
LAB_00100c40:
      local_1d68 = local_1d68 + iVar10;
      uVar26 = uVar8;
    }
joined_r0x00100b24:
    if ((int)local_1da0 <= (int)uVar26) goto LAB_00100b2a;
    lVar17 = *(long *)this;
  } while( true );
  uVar14 = uVar14 + iVar7;
  if (uVar26 == uVar14) goto LAB_00100cf0;
  goto LAB_00100cd0;
LAB_0010176f:
  iVar25 = (int)uVar33;
  piVar29 = piVar24;
  if (iVar25 == -1) {
    uVar33 = uVar18 & 0xffffffff;
  }
  else if ((*(int *)(this + 0xc) < 0) && ((int)uVar18 - iVar25 == 0x1f)) {
    *(int *)(this + 0xc) = iVar25;
  }
  goto LAB_0010173a;
LAB_0010254b:
  if (-1 < (int)uVar14) {
    *local_1d80 = (short)uVar14;
    goto LAB_001024a6;
  }
LAB_001027c3:
  if (uVar38 == uVar43) {
    sVar42 = (short)uVar38;
    uVar9 = 0;
    lVar36 = (long)(int)uVar38;
    uVar26 = uVar38;
    uVar14 = uVar38;
    if (0 < (int)uVar8) goto LAB_00102825;
  }
  else {
    uVar9 = uVar8 - 1;
    lVar36 = (long)(int)uVar43;
    uVar14 = uVar43 - uVar9;
    if (0 < (int)uVar9) {
      lVar36 = (long)(int)uVar43;
      lVar16 = lVar17 + (lVar36 - (int)uVar9) * 2;
      do {
        uVar18 = 0;
        while (*(ushort *)(lVar16 + uVar18 * 2) == puVar37[uVar18]) {
          uVar18 = uVar18 + 1;
          if (uVar18 == uVar9) {
            sVar42 = (short)(uVar43 - uVar9);
            uVar26 = uVar43;
            uVar14 = uVar43 - uVar9;
            if ((int)uVar8 <= (int)uVar9) goto LAB_0010286e;
            goto LAB_00102825;
          }
        }
        lVar16 = lVar16 + 2;
        uVar9 = uVar9 - 1;
        uVar14 = uVar43;
      } while (uVar9 != 0);
    }
LAB_00102825:
    sVar42 = (short)uVar14;
    memcpy((void *)(lVar17 + lVar36 * 2),local_1148 + (long)(int)uVar9 + (long)iVar11,
           (ulong)((uVar8 - 1) - uVar9) * 2 + 2);
    uVar26 = (uVar43 + uVar8) - uVar9;
LAB_0010286e:
    uVar14 = uVar43 - 0x1f;
    if ((int)(uVar43 - 0x20) < (int)uVar38) {
      uVar14 = uVar38;
    }
  }
  uVar43 = uVar26;
  if ((int)uVar14 <= (int)(uVar26 - 0x20)) {
    puVar37 = (ushort *)(lVar17 + 0x40 + (long)(int)uVar14 * 2);
    do {
      uVar9 = (uint)puVar37[-0x20];
      uVar14 = uVar14 + 1;
      puVar20 = puVar37 + -0x1f;
      do {
        puVar21 = puVar20 + 1;
        uVar9 = (uint)*puVar20 + uVar9 * 0x25;
        puVar20 = puVar21;
      } while (puVar21 != puVar37);
      uVar27 = uVar9 << (bVar6 & 0x1f);
      uVar12 = (int)(CONCAT44(0 << (bVar6 & 0x1f),uVar9) % (ulong)(local_1d88 - 1)) + 1;
      uVar18 = (ulong)uVar12;
      uVar9 = *(uint *)((long)__s + uVar18 * 4);
      uVar41 = uVar12;
      while (uVar9 != 0) {
        if (uVar27 == (uVar9 & ~local_1da0)) {
          lVar36 = 0;
          while (*(short *)(lVar17 + (long)(int)((uVar9 & local_1da0) - 1) * 2 + lVar36) ==
                 *(short *)((long)puVar37 + lVar36 + -0x40)) {
            lVar36 = lVar36 + 2;
            if (lVar36 == 0x40) goto LAB_0010296a;
          }
        }
        uVar33 = (long)(int)(uVar12 + (int)uVar18) % (long)(int)local_1d88;
        uVar18 = uVar33 & 0xffffffff;
        uVar41 = (uint)uVar33;
        uVar9 = *(uint *)((long)__s + (long)(int)uVar41 * 4);
      }
      *(uint *)((long)__s + (long)(int)uVar41 * 4) = uVar27 | uVar14;
LAB_0010296a:
      puVar37 = puVar37 + 1;
    } while (uVar14 != uVar26 - 0x1f);
  }
LAB_00102487:
  iVar11 = iVar10;
  *local_1d80 = sVar42;
  local_1d80 = local_1d80 + 1;
  if (iVar25 <= iVar11) goto LAB_001024a6;
  goto LAB_00102395;
LAB_00100b2a:
  if (-1 < local_1d68) {
    lVar17 = uprv_malloc_76_godot((long)(local_1d68 * 4));
    if (lVar17 != 0) {
      __memcpy_chk(lVar17,local_1b48,0x200,(long)(local_1d68 * 4));
      iVar25 = local_1d68 + -0x3f;
      if (iVar11 == 0) {
        local_1d58._0_4_ = 0xffffffff;
      }
      else {
        if (iVar11 < 1) {
          iVar10 = -1;
        }
        else {
          uVar18 = 0;
          uVar33 = 0xffffffff;
          uVar43 = 0;
          do {
            uVar26 = auStack_1bd0[uVar18];
            if ((int)uVar43 < (int)uVar26) {
              uVar33 = uVar18 & 0xffffffff;
            }
            iVar10 = (int)uVar33;
            if ((int)uVar43 < (int)uVar26) {
              uVar43 = uVar26;
            }
            uVar18 = uVar18 + 1;
          } while ((long)iVar11 != uVar18);
        }
        local_1d58._0_4_ = auStack_1cd0[iVar10];
      }
      puVar4 = *(undefined4 **)this;
      *puVar4 = 0;
      puVar4[4] = 0x40;
      if (iVar25 < 0x1000) {
        sVar32 = 0x5ddc;
        bVar6 = 0xc;
        uVar43 = 0xfff;
        uVar26 = 0x1777;
      }
      else if (iVar25 < 0x8000) {
        sVar32 = 0x30d94;
        bVar6 = 0xf;
        uVar43 = 0x7fff;
        uVar26 = 0xc365;
      }
      else {
        bVar46 = SBORROW4(iVar25,0x1ffff);
        bVar45 = local_1d68 + -0x2003e < 0;
        bVar44 = iVar25 != 0x1ffff;
        sVar32 = 0xc350c;
        if (0x1ffff < iVar25) {
          sVar32 = 0x5b8d9c;
        }
        uVar43 = 0x1ffff;
        if (bVar44 && bVar46 == bVar45) {
          uVar43 = 0x1fffff;
        }
        bVar6 = (bVar44 && bVar46 == bVar45) * '\x04' + 0x11;
        uVar26 = 0x30d43;
        if (bVar44 && bVar46 == bVar45) {
          uVar26 = 0x16e367;
        }
      }
      uprv_free_76_godot(0);
      __s = (void *)uprv_malloc_76_godot(sVar32);
      if (__s == (void *)0x0) {
LAB_0010165a:
        __s = (void *)0x0;
        uVar43 = 0;
        *(undefined4 *)param_2 = 7;
      }
      else {
        memset(__s,0,sVar32);
        piVar24 = (int *)(lVar17 + 0x100);
        uVar38 = 0;
        do {
          uVar8 = piVar24[-0x40];
          uVar38 = uVar38 + 1;
          piVar29 = piVar24 + -0x3f;
          do {
            piVar28 = piVar29 + 1;
            uVar8 = uVar8 * 0x25 + *piVar29;
            piVar29 = piVar28;
          } while (piVar24 != piVar28);
          uVar41 = uVar8 << (bVar6 & 0x1f);
          uVar9 = uVar8 % (uVar26 - 1) + 1;
          uVar18 = (ulong)uVar9;
          uVar8 = *(uint *)((long)__s + uVar18 * 4);
          uVar14 = uVar9;
          while (uVar8 != 0) {
            if (uVar41 == (uVar8 & ~uVar43)) {
              lVar36 = 0;
              while (*(int *)(lVar17 + (long)(int)((uVar8 & uVar43) - 1) * 4 + lVar36) ==
                     *(int *)((long)piVar24 + lVar36 + -0x100)) {
                lVar36 = lVar36 + 4;
                if (lVar36 == 0x100) goto LAB_00100f0e;
              }
            }
            uVar33 = (long)(int)(uVar9 + (int)uVar18) % (long)(int)uVar26;
            uVar18 = uVar33 & 0xffffffff;
            uVar14 = (uint)uVar33;
            uVar8 = *(uint *)((long)__s + (long)(int)uVar14 * 4);
          }
          *(uint *)((long)__s + (long)(int)uVar14 * 4) = uVar41 | uVar38;
LAB_00100f0e:
          piVar24 = piVar24 + 1;
        } while (uVar38 != 0x41);
        iVar25 = *(int *)(this + 0x30);
        local_1d48._0_4_ = uVar26;
        if (iVar25 < 0x90) {
          if (*(int *)param_2 < 1) {
            uprv_free_76_godot(*(undefined8 *)(this + 0x10));
            *(long *)(this + 0x10) = lVar17;
            *(undefined4 *)(this + 0x1c) = 0x80;
            *(int *)(this + 0x18) = local_1d68;
LAB_001016b1:
            iVar25 = 0xfffff;
            if (-1 < (int)(uint)local_1d58) {
              iVar25 = *(int *)(*(long *)this + (long)(int)(uint)local_1d58 * 4);
              *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar17 + (long)iVar25 * 4);
            }
            *(int *)(this + 0x20) = iVar25;
            uVar43 = param_1 >> 2;
            if ((int)uVar43 < *(int *)(this + 0x30) >> 6) {
              uVar18 = 0;
              uVar33 = 0xffffffff;
              piVar24 = *(int **)this + 1;
              iVar10 = **(int **)this;
              local_1948[0] = (ushort)iVar10;
              if (iVar10 == iVar25) goto LAB_0010176f;
LAB_00101734:
              uVar33 = 0xffffffff;
              piVar29 = piVar24;
LAB_0010173a:
              iVar25 = iVar10 + 0x30;
              piVar24 = piVar29;
              do {
                iVar10 = iVar10 + 0x10;
                *piVar24 = iVar10;
                piVar24 = piVar24 + 1;
              } while (iVar10 != iVar25);
              piVar24 = piVar29 + 4;
              if (param_1 - 1U >> 2 != uVar18) {
                iVar10 = piVar29[3];
                iVar25 = *(int *)(this + 0x20);
                uVar18 = uVar18 + 1;
                local_1948[uVar18] = (ushort)iVar10;
                if (iVar10 == iVar25) goto LAB_0010176f;
                goto LAB_00101734;
              }
              if ((uint)local_1d48 < 0x1777) {
                uprv_free_76_godot(__s);
                __s = (void *)uprv_malloc_76_godot(0x5ddc);
                if (__s == (void *)0x0) goto LAB_00102012;
                local_1d48._0_4_ = 0x1777;
              }
              memset(__s,0,0x5ddc);
              puVar37 = local_1908;
              uVar26 = 0;
              do {
                uVar38 = (uint)puVar37[-0x20];
                uVar26 = uVar26 + 1;
                puVar20 = puVar37 + -0x1f;
                do {
                  puVar21 = puVar20 + 1;
                  uVar38 = (uint)*puVar20 + uVar38 * 0x25;
                  puVar20 = puVar21;
                } while (puVar37 != puVar21);
                uVar8 = uVar38 % 0x1776 + 1;
                uVar18 = (ulong)uVar8;
                uVar14 = *(uint *)((long)__s + uVar18 * 4);
                uVar9 = uVar8;
                while (uVar14 != 0) {
                  if (uVar38 * 0x1000 == (uVar14 & 0xfffff000)) {
                    lVar17 = 0;
                    while (*(short *)((long)local_1948 +
                                     lVar17 + (long)(int)((uVar14 & 0xfff) - 1) * 2) ==
                           *(short *)((long)puVar37 + lVar17 + -0x40)) {
                      lVar17 = lVar17 + 2;
                      if (lVar17 == 0x40) goto joined_r0x00101b3c;
                    }
                  }
                  uVar9 = (int)(uVar8 + (int)uVar18) % 0x1777;
                  uVar18 = (ulong)uVar9;
                  uVar14 = *(uint *)((long)__s + (long)(int)uVar9 * 4);
                }
                *(uint *)((long)__s + (long)(int)uVar9 * 4) = uVar38 * 0x1000 | uVar26;
joined_r0x00101b3c:
                puVar37 = puVar37 + 1;
              } while (uVar26 != uVar43 - 0x1f);
              local_1da0 = *(uint *)(this + 0xc);
              uVar26 = (uint)(param_1 == 0x1000);
              iVar25 = uVar26 * 0x1000;
              iVar10 = *(int *)(this + 0x30) >> 4;
              if (iVar10 == iVar25 ||
                  SBORROW4(iVar10,iVar25) != (int)(iVar10 + uVar26 * -0x1000) < 0) {
                bVar44 = false;
                iVar11 = 0;
              }
              else {
                lVar17 = *(long *)this;
                lVar36 = (long)iVar25;
                bVar44 = false;
                iVar11 = 0;
                puVar15 = (uint *)(lVar17 + lVar36 * 4);
                puVar19 = (uint *)(lVar17 + 0x80 + lVar36 * 4);
                do {
                  bVar45 = true;
                  uVar38 = 0;
                  puVar34 = puVar15;
                  do {
                    uVar38 = uVar38 | *puVar34;
                    if (*(uint *)(this + 0x20) != *puVar34) {
                      bVar45 = false;
                    }
                    puVar34 = puVar34 + 1;
                  } while (puVar19 != puVar34);
                  if (bVar45) {
                    this[lVar36 + 0x40] = (MutableCodePointTrie)0x0;
                    if ((int)local_1da0 < 0) {
                      if (uVar38 < 0x10000) {
                        local_1da0 = 0;
                        iVar11 = iVar11 + 0x20;
                      }
                      else {
                        iVar11 = iVar11 + 0x24;
                        local_1da0 = 0;
                        bVar44 = bVar45;
                      }
                    }
                  }
                  else if (uVar38 < 0x10000) {
                    uVar38 = *puVar15;
                    puVar34 = (uint *)(lVar17 + (long)((int)lVar36 + 1) * 4);
                    do {
                      puVar35 = puVar34 + 1;
                      uVar38 = uVar38 * 0x25 + *puVar34;
                      puVar34 = puVar35;
                    } while (puVar35 != puVar19);
                    uVar14 = uVar38 % 0x1776 + 1;
                    uVar18 = (ulong)uVar14;
                    uVar8 = *(uint *)((long)__s + uVar18 * 4);
                    if (uVar8 != 0) {
                      do {
                        uVar9 = (uint)uVar18;
                        if (uVar38 * 0x1000 == (uVar8 & 0xfffff000)) {
                          lVar16 = 0;
                          while ((uint)*(ushort *)
                                        ((long)local_1948 +
                                        lVar16 + (long)(int)((uVar8 & 0xfff) - 1) * 2) ==
                                 *(uint *)((long)puVar15 + lVar16 * 2)) {
                            lVar16 = lVar16 + 2;
                            if (lVar16 == 0x40) goto LAB_00102167;
                          }
                        }
                        uVar9 = (int)(uVar9 + uVar14) % 0x1777;
                        uVar18 = (ulong)uVar9;
                        uVar8 = *(uint *)((long)__s + (long)(int)uVar9 * 4);
                      } while (uVar8 != 0);
                      uVar9 = ~uVar9;
LAB_00102167:
                      if ((-1 < (int)uVar9) &&
                         (uVar38 = *(uint *)((long)__s + (long)(int)uVar9 * 4) & 0xfff, uVar38 != 0)
                         ) {
                        this[lVar36 + 0x40] = (MutableCodePointTrie)0x1;
                        *puVar15 = uVar38 - 1;
                        goto LAB_00101be9;
                      }
                    }
                    this[lVar36 + 0x40] = (MutableCodePointTrie)0x2;
                    iVar11 = iVar11 + 0x20;
                  }
                  else {
                    this[lVar36 + 0x40] = (MutableCodePointTrie)0x3;
                    iVar11 = iVar11 + 0x24;
                    bVar44 = true;
                  }
LAB_00101be9:
                  lVar36 = lVar36 + 0x20;
                  puVar15 = puVar15 + 0x20;
                  puVar19 = puVar19 + 0x20;
                } while ((int)lVar36 < iVar10);
              }
              iVar7 = (int)(iVar10 + uVar26 * -0x1000) >> 5;
              uVar38 = (iVar7 + 0x1f >> 5) + uVar43;
              iVar7 = uVar38 + iVar11 + iVar7;
              lVar17 = uprv_malloc_76_godot((long)(iVar7 * 2 + 2));
              *(long *)(this + 0x38) = lVar17;
              if (lVar17 == 0) {
                uVar43 = 0;
                *(undefined4 *)param_2 = 7;
                goto LAB_00102023;
              }
              iVar13 = uVar43 * 2;
              __memcpy_chk(lVar17,local_1948,(long)iVar13);
              iVar11 = iVar7 + -0x1e;
              if (iVar11 < 0x1000) {
                memset(__s,0,0x5ddc);
                bVar6 = 0xc;
                local_1d88 = 0x1777;
                local_1da0 = 0xfff;
                if (!bVar44) goto LAB_00101cfa;
LAB_001029d2:
                local_1d98 = 0xfff;
                sVar32 = 0x5ddc;
                iVar11 = 0x1777;
                local_1d68._0_1_ = 0xc;
LAB_001029ec:
                uprv_free_76_godot(0);
                local_1d48 = (void *)uprv_malloc_76_godot(sVar32);
                if (local_1d48 != (void *)0x0) {
                  memset(local_1d48,0,sVar32);
                  iVar7 = 0x24;
                  goto LAB_00101d17;
                }
                *(undefined4 *)param_2 = 7;
                uVar43 = 0;
              }
              else {
                if (iVar11 < 0x8000) {
                  local_1da0 = 0x7fff;
                  sVar32 = 0x30d94;
                  bVar6 = 0xf;
                  local_1d88 = 0xc365;
                }
                else {
                  bVar47 = SBORROW4(iVar11,0x1ffff);
                  bVar46 = iVar7 + -0x2001d < 0;
                  bVar45 = iVar11 != 0x1ffff;
                  sVar32 = 0x5b8d9c;
                  if (iVar11 < 0x20000) {
                    sVar32 = 0xc350c;
                  }
                  local_1da0 = 0x1ffff;
                  if (bVar45 && bVar47 == bVar46) {
                    local_1da0 = 0x1fffff;
                  }
                  bVar6 = (bVar45 && bVar47 == bVar46) * '\x04' + 0x11;
                  local_1d88 = 0x30d43;
                  if (bVar45 && bVar47 == bVar46) {
                    local_1d88 = 0x16e367;
                  }
                }
                if ((uint)local_1d48 < local_1d88) {
                  uprv_free_76_godot(__s);
                  __s = (void *)uprv_malloc_76_godot(sVar32);
                  if (__s == (void *)0x0) {
LAB_00102012:
                    __s = (void *)0x0;
                    uVar43 = 0;
                    *(undefined4 *)param_2 = 7;
                    goto LAB_00102023;
                  }
                }
                memset(__s,0,sVar32);
                if (bVar44) {
                  iVar11 = iVar7 + -0x22;
                  if (iVar11 < 0x1000) goto LAB_001029d2;
                  if (iVar11 < 0x8000) {
                    local_1d98 = 0x7fff;
                    sVar32 = 0x30d94;
                    iVar11 = 0xc365;
                    local_1d68._0_1_ = 0xf;
                  }
                  else {
                    bVar47 = SBORROW4(iVar11,0x1ffff);
                    bVar46 = iVar7 + -0x20021 < 0;
                    bVar45 = iVar11 != 0x1ffff;
                    sVar32 = 0xc350c;
                    if (0x1ffff < iVar11) {
                      sVar32 = 0x5b8d9c;
                    }
                    local_1d98 = 0x1ffff;
                    if (bVar45 && bVar47 == bVar46) {
                      local_1d98 = 0x1fffff;
                    }
                    local_1d68._0_1_ = (bVar45 && bVar47 == bVar46) * '\x04' + 0x11;
                    iVar11 = 0x30d43;
                    if (bVar45 && bVar47 == bVar46) {
                      iVar11 = 0x16e367;
                    }
                  }
                  goto LAB_001029ec;
                }
LAB_00101cfa:
                local_1d98 = 0;
                iVar7 = 0;
                iVar11 = 0;
                local_1d68._0_1_ = 0;
                local_1d48 = (void *)0x0;
LAB_00101d17:
                local_1d50 = *(uint *)(this + 0xc);
                if (iVar25 < iVar10) {
                  local_1d58 = (long)iVar25;
                  local_1d40 = local_1d58 << 2;
                  local_1d34 = local_1d50;
                  local_1d28 = local_1148;
                  uVar8 = uVar38;
                  do {
                    MVar1 = this[local_1d58 + 0x40];
                    bVar5 = (byte)(local_1d50 >> 0x18);
                    bVar23 = MVar1 == (MutableCodePointTrie)0x0 & bVar5 >> 7;
                    uVar43 = uVar8;
                    if (bVar23 == 0) {
                      bVar5 = ~bVar5;
                      local_1d10 = bVar5 >> 7;
                      uVar14 = local_1d34;
                      if (MVar1 != (MutableCodePointTrie)0x0) {
                        lVar17 = *(long *)this;
                        uVar14 = *(uint *)(lVar17 + local_1d40);
                        if (MVar1 != (MutableCodePointTrie)0x1) {
                          local_1d10 = bVar5 >> 7;
                          bVar23 = bVar5 >> 7;
                          if (MVar1 == (MutableCodePointTrie)0x2) goto LAB_001021cd;
                          goto LAB_00101de3;
                        }
                      }
                    }
                    else {
                      local_1d50 = 0;
                      if (*(int *)(this + 0x20) < 0x10000) {
                        lVar17 = *(long *)this;
LAB_001021cd:
                        local_1d10 = bVar23;
                        puVar15 = (uint *)(lVar17 + local_1d40);
                        lVar36 = *(long *)(this + 0x38);
                        uVar14 = *puVar15;
                        piVar24 = (int *)(lVar17 + (long)(int)((uint)local_1d58 + 1) * 4);
                        do {
                          piVar29 = piVar24 + 1;
                          uVar14 = uVar14 * 0x25 + *piVar24;
                          piVar24 = piVar29;
                        } while ((int *)(lVar17 + 0x80 + local_1d40) != piVar29);
                        uVar41 = uVar14 % (local_1d88 - 1) + 1;
                        uVar18 = (ulong)uVar41;
                        uVar9 = *(uint *)((long)__s + uVar18 * 4);
                        if (uVar9 != 0) {
                          do {
                            uVar12 = (uint)uVar18;
                            if (uVar14 << (bVar6 & 0x1f) == (uVar9 & ~local_1da0)) {
                              lVar17 = 0;
                              while ((uint)*(ushort *)
                                            (lVar36 + (long)(int)((uVar9 & local_1da0) - 1) * 2 +
                                            lVar17) == *(uint *)((long)puVar15 + lVar17 * 2)) {
                                lVar17 = lVar17 + 2;
                                if (lVar17 == 0x40) goto LAB_0010256a;
                              }
                            }
                            uVar33 = (long)(int)(uVar41 + uVar12) % (long)(int)local_1d88;
                            uVar18 = uVar33 & 0xffffffff;
                            uVar12 = (uint)uVar33;
                            uVar9 = *(uint *)((long)__s + (long)(int)uVar12 * 4);
                          } while (uVar9 != 0);
                          uVar12 = ~uVar12;
LAB_0010256a:
                          if ((-1 < (int)uVar12) &&
                             (uVar9 = local_1da0 & *(uint *)((long)__s + (long)(int)uVar12 * 4),
                             uVar14 = uVar9 - 1, uVar9 != 0)) goto LAB_001022be;
                        }
                        if (uVar38 == uVar8) {
                          iVar25 = 0;
                          lVar17 = (long)(int)uVar38;
                          uVar14 = uVar38;
                        }
                        else {
                          lVar17 = (long)(int)uVar8;
                          lVar30 = 0x1f;
                          lVar16 = lVar36 + -0x3e + lVar17 * 2;
                          do {
                            lVar22 = 0;
                            while ((uint)*(ushort *)(lVar16 + lVar22 * 2) == puVar15[lVar22]) {
                              lVar22 = lVar22 + 1;
                              if (lVar30 == lVar22) {
                                iVar25 = (int)lVar30;
                                uVar14 = uVar8 - iVar25;
                                goto LAB_001025c3;
                              }
                            }
                            lVar16 = lVar16 + 2;
                            lVar30 = lVar30 + -1;
                          } while (lVar30 != 0);
                          iVar25 = 0;
                          uVar14 = uVar8;
                        }
LAB_001025c3:
                        lVar16 = (long)iVar25;
                        lVar17 = lVar17 - lVar16;
                        do {
                          *(short *)(lVar36 + lVar17 * 2 + lVar16 * 2) = (short)puVar15[lVar16];
                          lVar16 = lVar16 + 1;
                        } while ((int)lVar16 != 0x20);
                        uVar43 = (uVar8 + 0x20) - iVar25;
                        uVar9 = uVar8 - 0x1f;
                        if ((int)(uVar8 - 0x20) < (int)uVar38) {
                          uVar9 = uVar38;
                        }
                        if ((int)uVar9 <= (int)(uVar8 - iVar25)) {
                          puVar37 = (ushort *)(lVar36 + 0x40 + (long)(int)uVar9 * 2);
                          do {
                            uVar9 = uVar9 + 1;
                            uVar41 = (uint)puVar37[-0x20];
                            puVar20 = puVar37 + -0x1f;
                            do {
                              puVar21 = puVar20 + 1;
                              uVar41 = (uint)*puVar20 + uVar41 * 0x25;
                              puVar20 = puVar21;
                            } while (puVar37 != puVar21);
                            uVar31 = uVar41 << (bVar6 & 0x1f);
                            uVar27 = uVar41 % (local_1d88 - 1) + 1;
                            uVar18 = (ulong)uVar27;
                            uVar41 = *(uint *)((long)__s + uVar18 * 4);
                            uVar12 = uVar27;
                            while (uVar41 != 0) {
                              if (uVar31 == (uVar41 & ~local_1da0)) {
                                lVar17 = 0;
                                while (*(short *)(lVar36 + (long)(int)((uVar41 & local_1da0) - 1) *
                                                           2 + lVar17) ==
                                       *(short *)((long)puVar37 + lVar17 + -0x40)) {
                                  lVar17 = lVar17 + 2;
                                  if (lVar17 == 0x40) goto LAB_00102704;
                                }
                              }
                              uVar33 = (long)(int)((int)uVar18 + uVar27) % (long)(int)local_1d88;
                              uVar18 = uVar33 & 0xffffffff;
                              uVar12 = (uint)uVar33;
                              uVar41 = *(uint *)((long)__s + (long)(int)uVar12 * 4);
                            }
                            *(uint *)((long)__s + (long)(int)uVar12 * 4) = uVar31 | uVar9;
LAB_00102704:
                            puVar37 = puVar37 + 1;
                          } while (uVar9 != (uVar8 - iVar25) + 1);
                        }
                        if (bVar44) {
                          uVar9 = (uVar8 - iVar7) + 1;
                          if ((int)(uVar8 - iVar7) < (int)uVar38) {
                            uVar9 = uVar38;
                          }
                          if ((int)uVar9 <= (int)(uVar43 - iVar7)) {
                            iVar25 = uVar9 + iVar7;
                            lVar17 = (long)(int)(uVar9 + 1);
                            puVar37 = (ushort *)(lVar36 + (long)(int)uVar9 * 2);
                            do {
                              uVar8 = (uint)*puVar37;
                              lVar16 = lVar17;
                              do {
                                lVar30 = lVar16 * 2;
                                lVar16 = lVar16 + 1;
                                uVar8 = (uint)*(ushort *)(lVar36 + lVar30) + uVar8 * 0x25;
                              } while ((int)lVar16 < iVar25);
                              uVar41 = uVar8 << ((byte)local_1d68 & 0x1f);
                              uVar12 = (int)(CONCAT44(0 << ((byte)local_1d68 & 0x1f),uVar8) %
                                            (ulong)(iVar11 - 1)) + 1;
                              uVar8 = *(uint *)((long)local_1d48 + (long)(int)uVar12 * 4);
                              uVar9 = uVar12;
                              while (uVar8 != 0) {
                                if (uVar41 == (~local_1d98 & uVar8)) {
                                  if (iVar7 == 0) goto LAB_00103069;
                                  lVar16 = 0;
                                  while (*(ushort *)
                                          (lVar36 + (long)(int)((uVar8 & local_1d98) - 1) * 2 +
                                          lVar16 * 2) == puVar37[lVar16]) {
                                    lVar16 = lVar16 + 1;
                                    if (lVar16 == 0x24) goto LAB_00103069;
                                  }
                                }
                                uVar9 = (int)(uVar9 + uVar12) % iVar11;
                                uVar8 = *(uint *)((long)local_1d48 + (long)(int)uVar9 * 4);
                              }
                              uVar9 = ~uVar9;
LAB_00103069:
                              if ((int)uVar9 < 0) {
                                *(uint *)((long)local_1d48 + (long)(int)~uVar9 * 4) =
                                     uVar41 | (uint)lVar17;
                              }
                              lVar17 = lVar17 + 1;
                              puVar37 = puVar37 + 1;
                              iVar25 = iVar25 + 1;
                            } while ((uVar43 - iVar7) + 1 + iVar7 != iVar25);
                          }
                        }
                      }
                      else {
                        lVar17 = *(long *)this;
                        local_1d10 = bVar23;
LAB_00101de3:
                        lVar16 = (long)(int)uVar8;
                        lVar36 = *(long *)(this + 0x38);
                        puVar37 = (ushort *)(lVar36 + lVar16 * 2);
                        puVar20 = puVar37;
                        puVar15 = (uint *)(lVar17 + local_1d40);
                        do {
                          uVar14 = *puVar15;
                          uVar9 = puVar15[1];
                          puVar19 = puVar15 + 8;
                          uVar41 = puVar15[2];
                          uVar12 = puVar15[3];
                          uVar27 = puVar15[4];
                          uVar31 = puVar15[5];
                          uVar39 = puVar15[6];
                          uVar3 = puVar15[7];
                          puVar20[8] = (ushort)uVar3;
                          *(ulong *)puVar20 =
                               CONCAT44(uVar9 & 0xffff | uVar41 << 0x10,
                                        uVar3 >> 0x10 & 3 |
                                        uVar39 >> 0xe & 0xc |
                                        uVar31 >> 0xc & 0x30 |
                                        uVar27 >> 10 & 0xc0 |
                                        uVar12 >> 8 & 0x300 |
                                        uVar41 >> 6 & 0xc00 |
                                        uVar14 >> 2 & 0xc000 | uVar9 >> 4 & 0x3000 | uVar14 << 0x10)
                          ;
                          *(ulong *)(puVar20 + 4) =
                               CONCAT44(uVar31 & 0xffff | uVar39 << 0x10,
                                        uVar12 & 0xffff | uVar27 << 0x10);
                          puVar20 = puVar20 + 9;
                          puVar15 = puVar19;
                        } while (puVar19 != (uint *)(lVar17 + 0x80 + local_1d40));
                        lVar17 = (long)(int)(uVar8 + 1);
                        uVar14 = (uint)*puVar37;
                        do {
                          lVar30 = lVar17 * 2;
                          lVar17 = lVar17 + 1;
                          uVar14 = (uint)*(ushort *)(lVar36 + lVar30) + uVar14 * 0x25;
                        } while ((int)lVar17 < (int)(uVar8 + iVar7));
                        uVar12 = uVar14 % (iVar11 - 1U) + 1;
                        uVar9 = *(uint *)((long)local_1d48 + (long)(int)uVar12 * 4);
                        uVar41 = uVar12;
                        while (uVar9 != 0) {
                          if (uVar14 << ((byte)local_1d68 & 0x1f) == (~local_1d98 & uVar9)) {
                            if (iVar7 == 0) goto LAB_001022a0;
                            lVar17 = 0;
                            while (*(ushort *)
                                    (lVar36 + (long)(int)((uVar9 & local_1d98) - 1) * 2 + lVar17 * 2
                                    ) == puVar37[lVar17]) {
                              lVar17 = lVar17 + 1;
                              if (lVar17 == 0x24) goto LAB_001022a0;
                            }
                          }
                          uVar41 = (int)(uVar41 + uVar12) % iVar11;
                          uVar9 = *(uint *)((long)local_1d48 + (long)(int)uVar41 * 4);
                        }
                        uVar41 = ~uVar41;
LAB_001022a0:
                        if (((int)uVar41 < 0) ||
                           (uVar14 = local_1d98 &
                                     *(uint *)((long)local_1d48 + (long)(int)uVar41 * 4),
                           uVar14 == 0)) {
                          if (uVar38 == uVar8) {
                            uVar43 = uVar38 + 0x24;
                            uVar14 = uVar38;
                            uVar9 = uVar38;
                          }
                          else {
                            lVar17 = lVar36 + -0x46 + lVar16 * 2;
                            lVar30 = 0x23;
                            do {
                              lVar22 = 0;
                              while (*(ushort *)(lVar17 + lVar22 * 2) == puVar37[lVar22]) {
                                lVar22 = lVar22 + 1;
                                if (lVar30 == lVar22) {
                                  iVar25 = (int)lVar30;
                                  do {
                                    puVar20 = puVar37 + 1;
                                    *puVar37 = puVar37[iVar25];
                                    puVar37 = puVar20;
                                  } while ((ushort *)
                                           (lVar36 + 2 + ((ulong)(0x23 - iVar25) + lVar16) * 2) !=
                                           puVar20);
                                  uVar14 = uVar8 - iVar25;
                                  uVar43 = (uVar8 + 0x24) - iVar25;
                                  goto LAB_00102ae9;
                                }
                              }
                              lVar17 = lVar17 + 2;
                              lVar30 = lVar30 + -1;
                            } while (lVar30 != 0);
                            uVar43 = uVar8 + 0x24;
                            uVar14 = uVar8;
LAB_00102ae9:
                            uVar9 = uVar8 - 0x1f;
                            if ((int)(uVar8 - 0x20) < (int)uVar38) {
                              uVar9 = uVar38;
                            }
                          }
                          uVar14 = uVar14 | 0x8000;
                          if ((int)uVar9 <= (int)(uVar43 - 0x20)) {
                            puVar37 = (ushort *)(lVar36 + 0x40 + (long)(int)uVar9 * 2);
                            do {
                              uVar9 = uVar9 + 1;
                              uVar41 = (uint)puVar37[-0x20];
                              puVar20 = puVar37 + -0x1f;
                              do {
                                puVar21 = puVar20 + 1;
                                uVar41 = (uint)*puVar20 + uVar41 * 0x25;
                                puVar20 = puVar21;
                              } while (puVar37 != puVar21);
                              uVar31 = uVar41 << (bVar6 & 0x1f);
                              uVar27 = uVar41 % (local_1d88 - 1) + 1;
                              uVar18 = (ulong)uVar27;
                              uVar41 = *(uint *)((long)__s + uVar18 * 4);
                              uVar12 = uVar27;
                              while (uVar41 != 0) {
                                if (uVar31 == (uVar41 & ~local_1da0)) {
                                  lVar17 = 0;
                                  while (*(short *)(lVar36 + (long)(int)((uVar41 & local_1da0) - 1)
                                                             * 2 + lVar17) ==
                                         *(short *)((long)puVar37 + lVar17 + -0x40)) {
                                    lVar17 = lVar17 + 2;
                                    if (lVar17 == 0x40) goto LAB_00102c14;
                                  }
                                }
                                uVar33 = (long)(int)(uVar27 + (int)uVar18) % (long)(int)local_1d88;
                                uVar18 = uVar33 & 0xffffffff;
                                uVar12 = (uint)uVar33;
                                uVar41 = *(uint *)((long)__s + (long)(int)uVar12 * 4);
                              }
                              *(uint *)((long)__s + (long)(int)uVar12 * 4) = uVar31 | uVar9;
LAB_00102c14:
                              puVar37 = puVar37 + 1;
                            } while (uVar9 != uVar43 - 0x1f);
                          }
                          if (bVar44) {
                            uVar9 = (uVar8 - iVar7) + 1;
                            if ((int)(uVar8 - iVar7) < (int)uVar38) {
                              uVar9 = uVar38;
                            }
                            if ((int)uVar9 <= (int)(uVar43 - iVar7)) {
                              iVar25 = uVar9 + iVar7;
                              local_1d70 = (long)(int)(uVar9 + 1);
                              puVar37 = (ushort *)(lVar36 + (long)(int)uVar9 * 2);
                              do {
                                uVar8 = (uint)*puVar37;
                                lVar17 = local_1d70;
                                do {
                                  lVar16 = lVar17 * 2;
                                  lVar17 = lVar17 + 1;
                                  uVar8 = (uint)*(ushort *)(lVar36 + lVar16) + uVar8 * 0x25;
                                } while ((int)lVar17 < iVar25);
                                uVar41 = uVar8 << ((byte)local_1d68 & 0x1f);
                                uVar12 = (int)(CONCAT44(0 << ((byte)local_1d68 & 0x1f),uVar8) %
                                              (ulong)(iVar11 - 1U)) + 1;
                                uVar8 = *(uint *)((long)local_1d48 + (long)(int)uVar12 * 4);
                                uVar9 = uVar12;
                                while (uVar8 != 0) {
                                  if (uVar41 == (uVar8 & ~local_1d98)) {
                                    if (iVar7 == 0) goto LAB_00102e17;
                                    lVar17 = 0;
                                    while (*(ushort *)
                                            (lVar36 + (long)(int)((uVar8 & local_1d98) - 1) * 2 +
                                            lVar17 * 2) == puVar37[lVar17]) {
                                      lVar17 = lVar17 + 1;
                                      if (lVar17 == 0x24) goto LAB_00102e17;
                                    }
                                  }
                                  uVar9 = (int)(uVar12 + uVar9) % iVar11;
                                  uVar8 = *(uint *)((long)local_1d48 + (long)(int)uVar9 * 4);
                                }
                                uVar9 = ~uVar9;
LAB_00102e17:
                                if ((int)uVar9 < 0) {
                                  *(uint *)((long)local_1d48 + (long)(int)~uVar9 * 4) =
                                       uVar41 | (uint)local_1d70;
                                }
                                local_1d70 = local_1d70 + 1;
                                puVar37 = puVar37 + 1;
                                iVar25 = iVar25 + 1;
                              } while ((uVar43 - iVar7) + 1 + iVar7 != iVar25);
                            }
                          }
                        }
                        else {
                          uVar14 = uVar14 - 1 | 0x8000;
                        }
                      }
                    }
LAB_001022be:
                    if (((int)local_1d34 < 0) && (local_1d10 != 0)) {
                      *(uint *)(this + 0xc) = uVar14;
                      local_1d34 = uVar14;
                    }
                    local_1d58 = local_1d58 + 0x20;
                    local_1d40 = local_1d40 + 0x80;
                    *local_1d28 = (ushort)uVar14;
                    local_1d28 = local_1d28 + 1;
                    uVar8 = uVar43;
                  } while ((int)local_1d58 < iVar10);
                  if ((int)local_1d34 < 0) {
                    *(undefined4 *)(this + 0xc) = 0x7fff;
                  }
                  if ((int)uVar43 < 0x801f) {
                    uVar8 = 0x20;
                    iVar11 = 0;
                    iVar25 = (iVar10 + -1 + uVar26 * -0x1000 >> 5) + 1;
                    lVar17 = *(long *)(this + 0x38);
                    local_1d80 = (short *)(iVar13 + lVar17);
LAB_00102395:
                    uVar26 = iVar25 - iVar11;
                    puVar37 = local_1148 + iVar11;
                    if ((int)uVar26 < (int)uVar8) {
                      iVar7 = uVar43 - uVar26;
                      iVar10 = iVar25;
                      uVar8 = uVar26;
                      if ((int)uVar38 <= iVar7) {
                        lVar36 = lVar17 + (long)(int)uVar38 * 2;
                        uVar14 = uVar38;
                        if ((int)uVar26 < 1) {
                          do {
                            if (uVar26 == 0) goto LAB_0010254b;
                            uVar14 = uVar14 + 1;
                          } while ((int)uVar14 <= iVar7);
                        }
                        else {
                          do {
                            uVar18 = 0;
                            while (*(ushort *)(lVar36 + uVar18 * 2) == puVar37[uVar18]) {
                              uVar18 = uVar18 + 1;
                              if (uVar26 == uVar18) goto LAB_0010254b;
                            }
                            uVar14 = uVar14 + 1;
                            lVar36 = lVar36 + 2;
                          } while ((int)uVar14 <= iVar7);
                        }
                      }
                      goto LAB_001027c3;
                    }
                    uVar26 = (uint)*puVar37;
                    puVar20 = local_1148 + (long)iVar11 + 1;
                    do {
                      puVar21 = puVar20 + 1;
                      uVar26 = (uint)*puVar20 + uVar26 * 0x25;
                      puVar20 = puVar21;
                    } while (local_1108 + iVar11 != puVar21);
                    uVar9 = uVar26 % (local_1d88 - 1) + 1;
                    uVar18 = (ulong)uVar9;
                    uVar14 = *(uint *)((long)__s + uVar18 * 4);
                    if (uVar14 == 0) {
                      iVar10 = iVar11 + uVar8;
                      goto LAB_001027c3;
                    }
                    do {
                      uVar41 = (uint)uVar18;
                      if (uVar26 << (bVar6 & 0x1f) == (uVar14 & ~local_1da0)) {
                        lVar36 = 0;
                        while (*(short *)(lVar17 + (long)(int)((uVar14 & local_1da0) - 1) * 2 +
                                         lVar36) == *(short *)((long)puVar37 + lVar36)) {
                          lVar36 = lVar36 + 2;
                          if (lVar36 == 0x40) goto LAB_00102467;
                        }
                      }
                      uVar33 = (long)(int)(uVar9 + uVar41) % (long)(int)local_1d88;
                      uVar18 = uVar33 & 0xffffffff;
                      uVar41 = (uint)uVar33;
                      uVar14 = *(uint *)((long)__s + (long)(int)uVar41 * 4);
                    } while (uVar14 != 0);
                    uVar41 = ~uVar41;
LAB_00102467:
                    iVar10 = iVar11 + uVar8;
                    if (((int)uVar41 < 0) ||
                       (uVar26 = local_1da0 & *(uint *)((long)__s + (long)(int)uVar41 * 4),
                       sVar42 = (short)uVar26 + -1, uVar26 == 0)) goto LAB_001027c3;
                    goto LAB_00102487;
                  }
LAB_00102a71:
                  *(undefined4 *)param_2 = 8;
                  uVar43 = 0;
                }
                else {
                  if ((int)local_1d50 < 0) {
                    *(undefined4 *)(this + 0xc) = 0x7fff;
                  }
                  uVar43 = uVar38;
                  if (0x801e < (int)uVar38) goto LAB_00102a71;
                }
              }
LAB_001024a6:
              uprv_free_76_godot(local_1d48);
            }
            else {
              *(undefined4 *)(this + 0xc) = 0x7fff;
            }
LAB_00102023:
            *(uint *)(this + 0x30) = local_1d38;
            goto LAB_0010166b;
          }
        }
        else {
          uVar14 = 0x40;
          local_1da0 = 8;
          puVar15 = *(uint **)this;
          local_1d78 = 4;
          iVar10 = local_1d68 + -0xf;
          uVar8 = 0x80;
          uVar38 = 0;
LAB_00100f88:
          puVar19 = puVar15 + (int)local_1da0;
          uVar9 = *puVar19;
          uVar18 = (ulong)uVar9;
          uVar41 = uVar8;
          if (this[(long)(int)local_1da0 + 0x40] == (MutableCodePointTrie)0x0) {
            uVar12 = uVar9;
            if (1 < uVar14) {
              uVar27 = 1;
              do {
                uVar27 = uVar27 + 1;
                uVar12 = (int)uVar18 * 0x25 + uVar9;
                uVar18 = (ulong)uVar12;
              } while (uVar14 != uVar27);
            }
            uVar39 = uVar12 % (uVar26 - 1) + 1;
            uVar18 = (ulong)uVar39;
            uVar27 = *(uint *)((long)__s + (long)(int)uVar39 * 4);
            uVar31 = uVar39;
            if (uVar27 != 0) {
              do {
                uVar31 = (uint)uVar18;
                if (uVar12 << (bVar6 & 0x1f) == (uVar27 & ~uVar43)) {
                  puVar34 = (uint *)(lVar17 + (long)(int)((uVar27 & uVar43) - 1) * 4);
                  puVar35 = puVar34 + (int)uVar14;
                  for (; (puVar34 < puVar35 && (*puVar34 == uVar9)); puVar34 = puVar34 + 1) {
                  }
                  if (puVar35 == puVar34) goto LAB_00101386;
                }
                uVar33 = (long)(int)(uVar39 + uVar31) % (long)(int)uVar26;
                uVar18 = uVar33 & 0xffffffff;
                uVar31 = (uint)uVar33;
                uVar27 = *(uint *)((long)__s + (long)(int)uVar31 * 4);
              } while (uVar27 != 0);
            }
            uVar31 = ~uVar31;
LAB_00101386:
            if ((int)uVar31 < 0) {
              uVar12 = 0xffffffff;
            }
            else {
              uVar12 = (*(uint *)((long)__s + (long)(int)uVar31 * 4) & uVar43) - 1;
            }
            iVar11 = uVar8 - uVar14;
LAB_001013c8:
            if (-1 < (int)uVar12) {
              if ((uint)local_1d58 == local_1da0) {
                if (((int)uVar38 <= (int)uVar12) || (puVar34 = puVar15, (int)local_1da0 < param_1))
                goto LAB_00100fbc;
                while (uVar12 != *puVar34) {
                  puVar34 = puVar34 + 4;
                  if (puVar15 + (ulong)(param_1 - 1U >> 2) * 4 + 4 == puVar34) goto LAB_00100fbc;
                }
                uVar12 = uVar12 + 1;
                if (iVar11 < (int)uVar12) goto LAB_00101469;
                do {
                  while (puVar34 = (uint *)(lVar17 + (long)(int)uVar12 * 4), *puVar34 != uVar9) {
                    uVar12 = uVar12 + 1;
                    if (iVar11 < (int)uVar12) goto LAB_00101464;
                  }
                  lVar36 = 1;
                  while (puVar34[lVar36] == uVar9) {
                    lVar36 = lVar36 + 1;
                    if ((ulong)(uVar14 - 2) + 2 == lVar36) goto LAB_001013c8;
                  }
                  uVar12 = uVar12 + (int)lVar36 + 1;
                } while ((int)uVar12 <= iVar11);
              }
              else if (-1 < (int)uVar12) goto LAB_00100fbc;
            }
LAB_00101464:
            iVar11 = uVar8 - uVar14;
LAB_00101469:
            iVar7 = 0;
            uVar27 = uVar8 - (uVar14 - 1);
            uVar12 = uVar8;
            if ((int)uVar27 < (int)uVar8) {
              lVar36 = lVar17 + (long)(int)uVar8 * 4;
              do {
                if (*(uint *)(lVar36 + -4) != uVar9) break;
                uVar12 = uVar12 - 1;
                lVar36 = lVar36 + -4;
              } while (uVar27 != uVar12);
              iVar7 = uVar8 - uVar12;
            }
            *puVar19 = uVar12;
            iVar13 = iVar11;
            if (iVar7 < (int)uVar14) {
              puVar19 = (uint *)(lVar17 + (long)(int)uVar8 * 4);
              puVar34 = (uint *)(lVar17 + ((ulong)(uVar14 - iVar7) + (long)(int)uVar8) * 4);
              if (((int)puVar34 - (int)puVar19 & 4U) == 0) goto LAB_001014d3;
              *puVar19 = uVar9;
              for (puVar19 = puVar19 + 1; puVar34 != puVar19; puVar19 = puVar19 + 2) {
LAB_001014d3:
                *puVar19 = uVar9;
                puVar19[1] = uVar9;
              }
              uVar41 = (uVar8 + uVar14) - iVar7;
              iVar13 = uVar41 - uVar14;
            }
            if (iVar11 < 0) {
              iVar11 = -1;
            }
            iVar7 = iVar11 + 1;
            if (iVar7 <= iVar13) {
              lVar36 = (long)(iVar11 + 2);
              puVar19 = (uint *)(lVar17 + (long)iVar7 * 4);
              iVar7 = iVar7 + uVar14;
              do {
                uVar8 = *puVar19;
                lVar16 = lVar36;
                do {
                  uVar8 = uVar8 * 0x25 + *(int *)(lVar17 + lVar16 * 4);
                  lVar16 = lVar16 + 1;
                } while ((int)lVar16 < iVar7);
                uVar12 = uVar8 << (bVar6 & 0x1f);
                uVar27 = uVar8 % (uVar26 - 1) + 1;
                uVar18 = (ulong)uVar27;
                uVar8 = *(uint *)((long)__s + (long)(int)uVar27 * 4);
                uVar9 = uVar27;
                while (uVar8 != 0) {
                  if (uVar12 == (uVar8 & ~uVar43)) {
                    lVar16 = 0;
                    uVar9 = uVar14;
                    if (uVar14 == 0) {
                      if (uVar14 == 0) goto LAB_00101820;
                    }
                    else {
                      while (*(int *)(lVar17 + (long)(int)((uVar8 & uVar43) - 1) * 4 + lVar16) ==
                             *(int *)((long)puVar19 + lVar16)) {
                        lVar16 = lVar16 + 4;
                        uVar9 = uVar9 - 1;
                        if (uVar9 == 0) goto LAB_00101820;
                      }
                    }
                  }
                  uVar33 = (long)(int)(uVar27 + (int)uVar18) % (long)(int)uVar26;
                  uVar18 = uVar33 & 0xffffffff;
                  uVar9 = (uint)uVar33;
                  uVar8 = *(uint *)((long)__s + (long)(int)uVar9 * 4);
                }
                *(uint *)((long)__s + (long)(int)uVar9 * 4) = uVar12 | (uint)lVar36;
LAB_00101820:
                lVar36 = lVar36 + 1;
                puVar19 = puVar19 + 1;
                iVar7 = iVar7 + 1;
              } while (uVar14 + 1 + iVar13 != iVar7);
            }
          }
          else if (this[(long)(int)local_1da0 + 0x40] == (MutableCodePointTrie)0x1) {
            lVar36 = 1;
            puVar34 = (uint *)(uVar18 * 4 + *(long *)(this + 0x10));
            uVar9 = *puVar34;
            do {
              uVar9 = uVar9 * 0x25 + puVar34[lVar36];
              lVar36 = lVar36 + 1;
            } while ((int)lVar36 < (int)uVar14);
            uVar31 = uVar9 % (uVar26 - 1) + 1;
            uVar12 = *(uint *)((long)__s + (long)(int)uVar31 * 4);
            uVar27 = uVar31;
            while (uVar12 != 0) {
              if (uVar9 << (bVar6 & 0x1f) == (uVar12 & ~uVar43)) {
                if (uVar14 == 0) {
                  if (uVar14 == 0) goto LAB_00101311;
                }
                else {
                  uVar18 = 0;
                  while (*(uint *)(lVar17 + (long)(int)((uVar12 & uVar43) - 1) * 4 + uVar18 * 4) ==
                         puVar34[uVar18]) {
                    uVar18 = uVar18 + 1;
                    if (uVar14 == uVar18) goto LAB_0010130d;
                  }
                }
              }
              uVar27 = (int)(uVar31 + uVar27) % (int)uVar26;
              uVar12 = *(uint *)((long)__s + (long)(int)uVar27 * 4);
            }
            uVar27 = ~uVar27;
LAB_0010130d:
            if (-1 < (int)uVar27) {
LAB_00101311:
              uVar12 = (*(uint *)((long)__s + (long)(int)uVar27 * 4) & uVar43) - 1;
              if (-1 < (int)uVar12) goto LAB_00100fbc;
            }
            uVar9 = uVar14 - 1;
            if ((int)uVar9 < 1) {
              *puVar19 = uVar8 - uVar9;
            }
            else {
              lVar36 = lVar17 + ((long)(int)uVar8 - (long)(int)uVar9) * 4;
              do {
                uVar18 = 0;
                while (*(uint *)(lVar36 + uVar18 * 4) == puVar34[uVar18]) {
                  uVar18 = uVar18 + 1;
                  if (uVar9 == uVar18) {
                    *puVar19 = uVar8 - uVar9;
                    if ((int)uVar14 <= (int)uVar9) goto LAB_001018aa;
                    goto LAB_00101871;
                  }
                }
                lVar36 = lVar36 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
              *puVar19 = uVar8;
            }
LAB_00101871:
            lVar36 = 0;
            do {
              *(undefined4 *)(lVar17 + (long)(int)uVar8 * 4 + lVar36) =
                   *(undefined4 *)((long)puVar34 + lVar36 + (long)(int)uVar9 * 4);
              lVar36 = lVar36 + 4;
            } while ((ulong)(uVar14 - uVar9) << 2 != lVar36);
            uVar41 = (uVar8 + uVar14) - uVar9;
LAB_001018aa:
            iVar11 = -1;
            if (-1 < (int)(uVar8 - uVar14)) {
              iVar11 = uVar8 - uVar14;
            }
            iVar7 = iVar11 + 1;
            if (iVar7 <= (int)(uVar41 - uVar14)) {
              lVar36 = (long)(iVar11 + 2);
              piVar24 = (int *)(lVar17 + (long)iVar7 * 4);
              iVar7 = iVar7 + uVar14;
              do {
                iVar11 = *piVar24;
                lVar16 = lVar36;
                do {
                  iVar11 = iVar11 * 0x25 + *(int *)(lVar17 + lVar16 * 4);
                  lVar16 = lVar16 + 1;
                } while ((int)lVar16 < iVar7);
                uVar12 = iVar11 << (bVar6 & 0x1f);
                uVar27 = (int)(CONCAT44(0 << (bVar6 & 0x1f),iVar11) % (ulong)(uVar26 - 1)) + 1;
                uVar18 = (ulong)uVar27;
                uVar8 = *(uint *)((long)__s + (long)(int)uVar27 * 4);
                uVar9 = uVar27;
                while (uVar8 != 0) {
                  if (uVar12 == (uVar8 & ~uVar43)) {
                    if (uVar14 == 0) {
                      if (uVar14 == 0) goto LAB_001019a0;
                    }
                    else {
                      uVar33 = 0;
                      while (*(int *)(lVar17 + (long)(int)((uVar8 & uVar43) - 1) * 4 + uVar33 * 4)
                             == piVar24[uVar33]) {
                        uVar33 = uVar33 + 1;
                        if (uVar14 == uVar33) goto LAB_001019a0;
                      }
                    }
                  }
                  uVar33 = (long)(int)(uVar27 + (int)uVar18) % (long)(int)uVar26;
                  uVar18 = uVar33 & 0xffffffff;
                  uVar9 = (uint)uVar33;
                  uVar8 = *(uint *)((long)__s + (long)(int)uVar9 * 4);
                }
                *(uint *)((long)__s + (long)(int)uVar9 * 4) = uVar12 | (uint)lVar36;
LAB_001019a0:
                lVar36 = lVar36 + 1;
                piVar24 = piVar24 + 1;
                iVar7 = iVar7 + 1;
              } while (uVar14 + 1 + (uVar41 - uVar14) != iVar7);
            }
          }
          else {
            uVar12 = puVar15[uVar18];
LAB_00100fbc:
            *puVar19 = uVar12;
          }
          local_1da0 = local_1da0 + local_1d78;
          if ((int)local_1da0 < iVar25 >> 4) {
            uVar8 = uVar41;
            if (param_1 == local_1da0) {
              if (iVar10 < 0x1000) {
                sVar32 = 0x5ddc;
                bVar6 = 0xc;
                uVar43 = 0xfff;
                uVar26 = 0x1777;
              }
              else if (iVar10 < 0x8000) {
                sVar32 = 0x30d94;
                bVar6 = 0xf;
                uVar43 = 0x7fff;
                uVar26 = 0xc365;
              }
              else {
                sVar32 = 0x5b8d9c;
                if (iVar10 < 0x20000) {
                  sVar32 = 0xc350c;
                }
                uVar43 = 0x1fffff;
                if (iVar10 < 0x20000) {
                  uVar43 = 0x1ffff;
                }
                bVar6 = (0x1ffff < iVar10) * '\x04' + 0x11;
                uVar26 = 0x16e367;
                if (iVar10 < 0x20000) {
                  uVar26 = 0x30d43;
                }
              }
              if ((uint)local_1d48 < uVar26) {
                uprv_free_76_godot(__s);
                __s = (void *)uprv_malloc_76_godot(sVar32);
                local_1d48._0_4_ = uVar26;
                if (__s == (void *)0x0) goto LAB_0010165a;
              }
              memset(__s,0,sVar32);
              if (0xf < (int)uVar41) {
                piVar24 = (int *)(lVar17 + 0x40);
                uVar38 = 0;
                do {
                  iVar11 = piVar24[-0x10];
                  uVar38 = uVar38 + 1;
                  piVar29 = piVar24 + -0xf;
                  do {
                    piVar28 = piVar29 + 1;
                    iVar11 = iVar11 * 0x25 + *piVar29;
                    piVar29 = piVar28;
                  } while (piVar24 != piVar28);
                  uVar27 = iVar11 << (bVar6 & 0x1f);
                  uVar12 = (int)(CONCAT44(0 << (bVar6 & 0x1f),iVar11) % (ulong)(uVar26 - 1)) + 1;
                  uVar18 = (ulong)uVar12;
                  uVar14 = *(uint *)((long)__s + uVar18 * 4);
                  uVar9 = uVar12;
                  while (uVar14 != 0) {
                    if (uVar27 == (uVar14 & ~uVar43)) {
                      lVar36 = 0;
                      while (*(int *)(lVar17 + (long)(int)((uVar14 & uVar43) - 1) * 4 + lVar36) ==
                             *(int *)((long)piVar24 + lVar36 + -0x40)) {
                        lVar36 = lVar36 + 4;
                        if (lVar36 == 0x40) goto LAB_0010114e;
                      }
                    }
                    uVar33 = (long)(int)(uVar12 + (int)uVar18) % (long)(int)uVar26;
                    uVar18 = uVar33 & 0xffffffff;
                    uVar9 = (uint)uVar33;
                    uVar14 = *(uint *)((long)__s + (long)(int)uVar9 * 4);
                  }
                  *(uint *)((long)__s + (long)(int)uVar9 * 4) = uVar27 | uVar38;
LAB_0010114e:
                  piVar24 = piVar24 + 1;
                } while (uVar38 != uVar41 - 0xf);
              }
              uVar14 = 0x10;
              local_1d78 = 1;
              puVar15 = *(uint **)this;
              uVar38 = uVar41;
            }
            goto LAB_00100f88;
          }
          if (*(int *)param_2 < 1) {
            uprv_free_76_godot(*(undefined8 *)(this + 0x10));
            *(long *)(this + 0x10) = lVar17;
            *(uint *)(this + 0x1c) = uVar41;
            *(int *)(this + 0x18) = local_1d68;
            if ((int)uVar41 < 0x40010) goto LAB_001016b1;
            *(undefined4 *)param_2 = 8;
          }
        }
        uVar43 = 0;
      }
LAB_0010166b:
      uprv_free_76_godot(__s);
      goto LAB_00101606;
    }
  }
LAB_001015f8:
  uVar43 = 0;
  *(undefined4 *)param_2 = 7;
LAB_00101606:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar43;
}



UMemory * umutablecptrie_open_76_godot(undefined4 param_1,ulong param_2,int *param_3)

{
  int iVar1;
  UMemory *this;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  uVar5 = (undefined4)(param_2 >> 0x20);
  if (*param_3 < 1) {
    uVar4 = (int)param_2;
    this = (UMemory *)icu_76_godot::UMemory::operator_new((UMemory *)0x11040,param_2);
    if (this == (UMemory *)0x0) {
      if (*param_3 < 1) {
        *param_3 = 7;
      }
    }
    else {
      iVar1 = *param_3;
      *(undefined8 *)this = 0;
      uVar2 = _LC0;
      lVar6 = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 8) = uVar2;
      *(undefined4 *)(this + 0x20) = 0xffffffff;
      *(int *)(this + 0x2c) = (int)param_2;
      *(undefined4 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      *(ulong *)(this + 0x24) = CONCAT44(param_1,param_1);
      *(undefined4 *)(this + 0x34) = param_1;
      if (iVar1 < 1) {
        uVar2 = uprv_malloc_76_godot(0x4000);
        *(undefined8 *)this = uVar2;
        lVar3 = uprv_malloc_76_godot(0x10000);
        lVar6 = *(long *)this;
        *(long *)(this + 0x10) = lVar3;
        if ((lVar3 == 0) || (lVar6 == 0)) {
          *param_3 = 7;
        }
        else {
          iVar1 = *param_3;
          *(undefined4 *)(this + 8) = 0x1000;
          *(undefined4 *)(this + 0x18) = 0x4000;
          if (iVar1 < 1) {
            return this;
          }
        }
      }
      uprv_free_76_godot(lVar6);
      uprv_free_76_godot(*(undefined8 *)(this + 0x10));
      uprv_free_76_godot(*(undefined8 *)(this + 0x38));
      icu_76_godot::UMemory::operator_delete(this,(void *)CONCAT44(uVar5,uVar4));
    }
  }
  return (UMemory *)0x0;
}



UMemory * umutablecptrie_clone_76_godot(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  UMemory *this;
  long lVar4;
  int *__src;
  undefined8 uVar5;
  undefined4 uVar6;
  void *__dest;
  
  if ((*param_2 < 1) && (param_1 != (undefined8 *)0x0)) {
    __src = param_2;
    this = (UMemory *)icu_76_godot::UMemory::operator_new((UMemory *)0x11040,(ulong)param_2);
    if (this == (UMemory *)0x0) {
      if (*param_2 < 1) {
        *param_2 = 7;
      }
    }
    else {
      iVar1 = *param_2;
      iVar2 = *(int *)(param_1 + 6);
      *(undefined8 *)this = 0;
      *(undefined4 *)(this + 8) = 0;
      uVar6 = *(undefined4 *)((long)param_1 + 0xc);
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0xc) = uVar6;
      uVar5 = param_1[4];
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = uVar5;
      uVar5 = param_1[5];
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x28) = uVar5;
      *(undefined8 *)(this + 0x30) = param_1[6];
      if (iVar1 < 1) {
        uVar5 = 0x44000;
        if (iVar2 < 0x10001) {
          uVar5 = 0x4000;
        }
        uVar6 = 0x11000;
        if (iVar2 < 0x10001) {
          uVar6 = 0x1000;
        }
        uVar5 = uprv_malloc_76_godot(uVar5);
        *(undefined8 *)this = uVar5;
        lVar4 = uprv_malloc_76_godot((long)(*(int *)(param_1 + 3) * 4));
        __dest = *(void **)this;
        *(long *)(this + 0x10) = lVar4;
        if ((__dest == (void *)0x0) || (lVar4 == 0)) {
          *param_2 = 7;
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 3);
          *(undefined4 *)(this + 8) = uVar6;
          iVar1 = *(int *)(this + 0x30);
          *(undefined4 *)(this + 0x18) = uVar3;
          memcpy(this + 0x40,param_1 + 8,(long)(iVar1 >> 4));
          memcpy(__dest,(void *)*param_1,(long)((iVar1 >> 4) * 4));
          __src = (int *)param_1[2];
          memcpy(*(void **)(this + 0x10),__src,(long)*(int *)((long)param_1 + 0x1c) << 2);
          *(undefined4 *)(this + 0x1c) = *(undefined4 *)((long)param_1 + 0x1c);
          if (*param_2 < 1) {
            return this;
          }
          __dest = *(void **)this;
        }
      }
      else {
        __dest = (void *)0x0;
      }
      uprv_free_76_godot(__dest);
      uprv_free_76_godot(*(undefined8 *)(this + 0x10));
      uprv_free_76_godot(*(undefined8 *)(this + 0x38));
      icu_76_godot::UMemory::operator_delete(this,__src);
    }
  }
  return (UMemory *)0x0;
}



void umutablecptrie_close_76_godot(UMemory *param_1,void *param_2)

{
  if (param_1 != (UMemory *)0x0) {
    uprv_free_76_godot(*(undefined8 *)param_1);
    uprv_free_76_godot(*(undefined8 *)(param_1 + 0x10));
    uprv_free_76_godot(*(undefined8 *)(param_1 + 0x38));
    icu_76_godot::UMemory::operator_delete(param_1,param_2);
    return;
  }
  return;
}



UMemory * umutablecptrie_fromUCPMap_76_godot(long param_1,UErrorCode *param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  UMemory *this;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    if (param_1 == 0) {
      *(undefined4 *)param_2 = 1;
    }
    else {
      uVar3 = ucpmap_get_76_godot(param_1,0xffffffff);
      pvVar9 = (void *)0x10ffff;
      uVar4 = ucpmap_get_76_godot(param_1);
      this = (UMemory *)icu_76_godot::UMemory::operator_new((UMemory *)0x11040,(ulong)pvVar9);
      if (this == (UMemory *)0x0) {
        if (*(int *)param_2 < 1) {
          *(undefined4 *)param_2 = 7;
        }
      }
      else {
        *(undefined8 *)this = 0;
        uVar7 = _LC0;
        iVar6 = *(int *)param_2;
        lVar10 = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 8) = uVar7;
        *(undefined4 *)(this + 0x20) = 0xffffffff;
        *(ulong *)(this + 0x24) = CONCAT44(uVar4,uVar4);
        *(undefined4 *)(this + 0x2c) = uVar3;
        *(undefined4 *)(this + 0x30) = 0;
        *(uint *)(this + 0x34) = uVar4;
        *(undefined8 *)(this + 0x38) = 0;
        if (iVar6 < 1) {
          uVar7 = uprv_malloc_76_godot(0x4000);
          *(undefined8 *)this = uVar7;
          lVar8 = uprv_malloc_76_godot(0x10000);
          lVar10 = *(long *)this;
          *(long *)(this + 0x10) = lVar8;
          if ((lVar8 == 0) || (lVar10 == 0)) {
            *(undefined4 *)param_2 = 7;
          }
          else {
            uVar11 = *(uint *)param_2;
            pvVar9 = (void *)(ulong)uVar11;
            *(undefined4 *)(this + 8) = 0x1000;
            *(undefined4 *)(this + 0x18) = 0x4000;
            if ((int)uVar11 < 1) {
              uVar11 = 0;
              while( true ) {
                pvVar9 = (void *)(ulong)uVar11;
                uVar5 = ucpmap_getRange_76_godot(param_1,pvVar9,0,0,0,0,&local_44);
                uVar1 = local_44;
                if ((int)uVar5 < 0) break;
                if (uVar4 != local_44) {
                  if (uVar11 == uVar5) {
                    if (*(int *)param_2 < 1) {
                      if ((int)uVar5 < 0x110000) {
                        cVar2 = icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::
                                ensureHighStart((MutableCodePointTrie *)this,uVar5);
                        if (cVar2 != '\0') {
                          iVar6 = icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::
                                  getDataBlock((MutableCodePointTrie *)this,(int)uVar5 >> 4);
                          if (-1 < iVar6) {
                            *(uint *)(*(long *)(this + 0x10) +
                                     (long)(int)(iVar6 + (uVar5 & 0xf)) * 4) = uVar1;
                            goto LAB_001035c0;
                          }
                        }
                        *(undefined4 *)param_2 = 7;
                      }
                      else {
LAB_00103650:
                        *(undefined4 *)param_2 = 1;
                      }
                    }
                  }
                  else if (*(int *)param_2 < 1) {
                    if ((0x10ffff < uVar11 || 0x10ffff < uVar5) || ((int)uVar5 < (int)uVar11))
                    goto LAB_00103650;
                    icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::setRange
                              ((MutableCodePointTrie *)this,uVar11,uVar5,local_44,param_2);
                  }
                }
LAB_001035c0:
                uVar11 = uVar5 + 1;
              }
              if (*(int *)param_2 < 1) goto LAB_001034f0;
              lVar10 = *(long *)this;
            }
          }
        }
        uprv_free_76_godot(lVar10);
        uprv_free_76_godot(*(undefined8 *)(this + 0x10));
        uprv_free_76_godot(*(undefined8 *)(this + 0x38));
        icu_76_godot::UMemory::operator_delete(this,pvVar9);
      }
    }
  }
  this = (UMemory *)0x0;
LAB_001034f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



UMemory * umutablecptrie_fromUCPTrie_76_godot(long param_1,UErrorCode *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  UMemory *this;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  UErrorCode *pUVar8;
  uint uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    if (param_1 == 0) {
LAB_0010371d:
      *(undefined4 *)param_2 = 1;
    }
    else {
      cVar2 = *(char *)(param_1 + 0x1f);
      if (cVar2 == '\x01') {
        lVar5 = (long)*(int *)(param_1 + 0x14) + -1;
        uVar10 = *(uint *)(*(long *)(param_1 + 8) + lVar5 * 4);
        uVar9 = *(uint *)(*(long *)(param_1 + 8) + -4 + lVar5 * 4);
      }
      else if (cVar2 == '\x02') {
        uVar10 = (uint)*(byte *)(*(long *)(param_1 + 8) + -1 + (long)*(int *)(param_1 + 0x14));
        uVar9 = (uint)*(byte *)(*(long *)(param_1 + 8) + -2 + (long)*(int *)(param_1 + 0x14));
      }
      else {
        if (cVar2 != '\0') goto LAB_0010371d;
        uVar10 = (uint)*(ushort *)(*(long *)(param_1 + 8) + -2 + (long)*(int *)(param_1 + 0x14) * 2)
        ;
        uVar9 = (uint)*(ushort *)(*(long *)(param_1 + 8) + -4 + (long)*(int *)(param_1 + 0x14) * 2);
      }
      pUVar8 = param_2;
      this = (UMemory *)icu_76_godot::UMemory::operator_new((UMemory *)0x11040,(ulong)param_2);
      if (this == (UMemory *)0x0) {
        if (*(int *)param_2 < 1) {
          *(undefined4 *)param_2 = 7;
        }
      }
      else {
        *(undefined8 *)this = 0;
        uVar6 = _LC0;
        iVar4 = *(int *)param_2;
        lVar5 = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 8) = uVar6;
        *(undefined4 *)(this + 0x20) = 0xffffffff;
        *(ulong *)(this + 0x24) = CONCAT44(uVar9,uVar9);
        *(uint *)(this + 0x2c) = uVar10;
        *(undefined4 *)(this + 0x30) = 0;
        *(uint *)(this + 0x34) = uVar9;
        *(undefined8 *)(this + 0x38) = 0;
        if (iVar4 < 1) {
          uVar6 = uprv_malloc_76_godot(0x4000);
          *(undefined8 *)this = uVar6;
          lVar7 = uprv_malloc_76_godot(0x10000);
          lVar5 = *(long *)this;
          *(long *)(this + 0x10) = lVar7;
          if ((lVar7 == 0) || (lVar5 == 0)) {
            *(undefined4 *)param_2 = 7;
          }
          else {
            uVar10 = *(uint *)param_2;
            pUVar8 = (UErrorCode *)(ulong)uVar10;
            *(undefined4 *)(this + 8) = 0x1000;
            *(undefined4 *)(this + 0x18) = 0x4000;
            if ((int)uVar10 < 1) {
              uVar10 = 0;
              while( true ) {
                pUVar8 = (UErrorCode *)(ulong)uVar10;
                uVar3 = ucptrie_getRange_76_godot(param_1,pUVar8,0,0,0,0,&local_44);
                uVar1 = local_44;
                if ((int)uVar3 < 0) break;
                if (uVar9 != local_44) {
                  if (uVar10 == uVar3) {
                    if (*(int *)param_2 < 1) {
                      if ((int)uVar3 < 0x110000) {
                        cVar2 = icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::
                                ensureHighStart((MutableCodePointTrie *)this,uVar3);
                        if (cVar2 != '\0') {
                          iVar4 = icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::
                                  getDataBlock((MutableCodePointTrie *)this,(int)uVar3 >> 4);
                          if (-1 < iVar4) {
                            *(uint *)(*(long *)(this + 0x10) +
                                     (long)(int)(iVar4 + (uVar3 & 0xf)) * 4) = uVar1;
                            goto LAB_001038c0;
                          }
                        }
                        *(undefined4 *)param_2 = 7;
                      }
                      else {
LAB_00103950:
                        *(undefined4 *)param_2 = 1;
                      }
                    }
                  }
                  else if (*(int *)param_2 < 1) {
                    if ((0x10ffff < uVar10 || 0x10ffff < uVar3) || ((int)uVar3 < (int)uVar10))
                    goto LAB_00103950;
                    icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::setRange
                              ((MutableCodePointTrie *)this,uVar10,uVar3,local_44,param_2);
                  }
                }
LAB_001038c0:
                uVar10 = uVar3 + 1;
              }
              if (*(int *)param_2 < 1) goto LAB_00103728;
              lVar5 = *(long *)this;
            }
          }
        }
        uprv_free_76_godot(lVar5);
        uprv_free_76_godot(*(undefined8 *)(this + 0x10));
        uprv_free_76_godot(*(undefined8 *)(this + 0x38));
        icu_76_godot::UMemory::operator_delete(this,pUVar8);
      }
    }
  }
  this = (UMemory *)0x0;
LAB_00103728:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int umutablecptrie_get_76_godot(long *param_1,uint param_2)

{
  int iVar1;
  
  if (0x10ffff < param_2) {
    return *(int *)((long)param_1 + 0x2c);
  }
  if ((int)param_2 < (int)param_1[6]) {
    iVar1 = *(int *)(*param_1 + (long)((int)param_2 >> 4) * 4);
    if (*(char *)((long)param_1 + (long)((int)param_2 >> 4) + 0x40) != '\0') {
      iVar1 = *(int *)(param_1[2] + (ulong)((param_2 & 0xf) + iVar1) * 4);
    }
    return iVar1;
  }
  return *(int *)((long)param_1 + 0x34);
}



void umutablecptrie_getRange_76_godot
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ucptrie_internalGetRange_76_godot
            ((anonymous_namespace)::getRange,param_1,param_2,param_3,param_4,param_5,param_6,param_7
            );
  return;
}



void umutablecptrie_set_76_godot
               (MutableCodePointTrie *param_1,uint param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  
  if (0 < *param_4) {
    return;
  }
  if (param_2 < 0x110000) {
    cVar1 = icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::ensureHighStart
                      (param_1,param_2);
    if ((cVar1 != '\0') &&
       (iVar2 = icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::getDataBlock
                          (param_1,(int)param_2 >> 4), -1 < iVar2)) {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)(int)(iVar2 + (param_2 & 0xf)) * 4) =
           param_3;
      return;
    }
    *param_4 = 7;
  }
  else {
    *param_4 = 1;
  }
  return;
}



void umutablecptrie_setRange_76_godot
               (MutableCodePointTrie *param_1,uint param_2,uint param_3,uint param_4,
               UErrorCode *param_5)

{
  if (0 < *(int *)param_5) {
    return;
  }
  if ((param_3 < 0x110000 && (int)param_2 <= (int)param_3) && (param_2 < 0x110000)) {
    icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::setRange
              (param_1,param_2,param_3,param_4,param_5);
    return;
  }
  *(undefined4 *)param_5 = 1;
  return;
}



long * umutablecptrie_buildImmutable_76_godot
                 (MutableCodePointTrie *param_1,uint param_2,uint param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  
  if (0 < *(int *)param_4) {
    return (long *)0x0;
  }
  if ((1 < param_2) || (2 < param_3)) {
    *(undefined4 *)param_4 = 1;
    return (long *)0x0;
  }
  if (param_3 == 0) {
    icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::maskValues(param_1,0xffff);
  }
  else if (param_3 == 2) {
    icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::maskValues(param_1,0xff);
  }
  uVar6 = icu_76_godot::(anonymous_namespace)::MutableCodePointTrie::compactTrie
                    (param_1,(-(uint)(param_2 == 0) & 0xf00) + 0x100,param_4);
  uVar17 = (ulong)(int)uVar6;
  if (0 < *(int *)param_4) goto LAB_00104010;
  uVar13 = *(uint *)(param_1 + 0x1c);
  uVar15 = (ulong)(int)uVar13;
  lVar3 = *(long *)(param_1 + 0x10);
  lVar19 = uVar15 * 4;
  if (param_3 == 1) {
    if ((uVar17 & 1) != 0) {
      uVar6 = uVar6 + 1;
      *(undefined2 *)(*(long *)(param_1 + 0x38) + uVar17 * 2) = 0xffee;
    }
    iVar4 = uVar6 * 2;
    iVar18 = *(int *)(lVar3 + -4 + lVar19);
    iVar11 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x34);
    if ((iVar18 != iVar11) || (*(int *)(lVar3 + -8 + lVar19) != iVar2)) {
      if (iVar18 != iVar2) {
        *(uint *)(param_1 + 0x1c) = uVar13 + 1;
        *(int *)(lVar3 + uVar15 * 4) = iVar2;
        uVar13 = *(uint *)(param_1 + 0x1c);
        iVar11 = *(int *)(param_1 + 0x2c);
        lVar19 = (long)(int)uVar13 << 2;
      }
      *(uint *)(param_1 + 0x1c) = uVar13 + 1;
      *(int *)(lVar3 + lVar19) = iVar11;
      uVar13 = *(uint *)(param_1 + 0x1c);
    }
    uVar16 = iVar4 + uVar13 * 4;
  }
  else {
    iVar4 = uVar6 * 2;
    if (param_3 == 0) {
      if (((uVar6 ^ uVar13) & 1) != 0) {
        *(uint *)(param_1 + 0x1c) = uVar13 + 1;
        *(undefined4 *)(lVar3 + uVar15 * 4) = *(undefined4 *)(param_1 + 0x2c);
        uVar15 = (ulong)*(int *)(param_1 + 0x1c);
      }
      if ((*(int *)(lVar3 + -4 + uVar15 * 4) != *(int *)(param_1 + 0x2c)) ||
         (*(int *)(lVar3 + -8 + uVar15 * 4) != *(int *)(param_1 + 0x34))) {
        *(int *)(param_1 + 0x1c) = (int)uVar15 + 1;
        *(int *)(lVar3 + uVar15 * 4) = *(int *)(param_1 + 0x34);
        iVar18 = *(int *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x1c) = iVar18 + 1;
        *(undefined4 *)(lVar3 + (long)iVar18 * 4) = *(undefined4 *)(param_1 + 0x2c);
        uVar15 = (ulong)*(uint *)(param_1 + 0x1c);
      }
      uVar16 = iVar4 + (int)uVar15 * 2;
    }
    else {
      iVar18 = *(int *)(param_1 + 0x34);
      uVar16 = iVar4 + uVar13;
      uVar12 = uVar16 & 3;
      if (uVar12 == 0) {
        if ((*(int *)(lVar3 + -4 + lVar19) != *(int *)(param_1 + 0x2c)) ||
           (*(int *)(lVar3 + -8 + lVar19) != iVar18)) {
LAB_00103f2c:
          *(uint *)(param_1 + 0x1c) = uVar13 + 1;
          uVar13 = uVar12 + 1 & 3;
          *(int *)(lVar3 + uVar15 * 4) = iVar18;
          while( true ) {
            iVar18 = *(int *)(param_1 + 0x1c);
            *(int *)(param_1 + 0x1c) = iVar18 + 1;
            *(undefined4 *)(lVar3 + (long)iVar18 * 4) = *(undefined4 *)(param_1 + 0x34);
            if (uVar13 != 0) break;
            uVar13 = 1;
          }
LAB_00103f59:
          uVar13 = *(uint *)(param_1 + 0x1c);
          uVar15 = (ulong)(int)uVar13;
          iVar18 = *(int *)(param_1 + 0x34);
          goto LAB_00103f64;
        }
      }
      else if (uVar12 == 3) {
        if (*(int *)(lVar3 + -4 + lVar19) != iVar18) goto LAB_00103f2c;
        *(uint *)(param_1 + 0x1c) = uVar13 + 1;
        *(undefined4 *)(lVar3 + uVar15 * 4) = *(undefined4 *)(param_1 + 0x2c);
        uVar16 = iVar4 + *(int *)(param_1 + 0x1c);
      }
      else {
        if (uVar12 != 2) {
          *(uint *)(param_1 + 0x1c) = uVar13 + 1;
          *(int *)(lVar3 + uVar15 * 4) = iVar18;
          goto LAB_00103f59;
        }
LAB_00103f64:
        *(uint *)(param_1 + 0x1c) = uVar13 + 1;
        *(int *)(lVar3 + uVar15 * 4) = iVar18;
        iVar18 = *(int *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x1c) = iVar18 + 1;
        *(undefined4 *)(lVar3 + (long)iVar18 * 4) = *(undefined4 *)(param_1 + 0x2c);
        uVar16 = iVar4 + *(int *)(param_1 + 0x1c);
      }
    }
  }
  uVar17 = (ulong)(int)(uVar16 + 0x30);
  plVar7 = (long *)uprv_malloc_76_godot(uVar17);
  if (plVar7 != (long *)0x0) {
    __memset_chk(plVar7,0,0x30,uVar17);
    iVar18 = *(int *)(param_1 + 0x30);
    uVar13 = *(uint *)(param_1 + 0x1c);
    plVar10 = plVar7 + 6;
    *(char *)((long)plVar7 + 0x1e) = (char)param_2;
    *(int *)(plVar7 + 3) = iVar18;
    lVar19 = (long)iVar4;
    *(char *)((long)plVar7 + 0x1f) = (char)param_3;
    *(short *)((long)plVar7 + 0x1c) = (short)(iVar18 + 0xfff >> 0xc);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    uVar15 = 0x30;
    if (0x2f < uVar17) {
      uVar15 = uVar17;
    }
    *plVar7 = (long)plVar10;
    *(short *)((long)plVar7 + 0x26) = (short)uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    uVar15 = uVar15 - 0x30;
    plVar7[2] = CONCAT44(uVar13,uVar6);
    *(undefined4 *)(plVar7 + 5) = uVar1;
    *(undefined4 *)((long)plVar7 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
    if ((int)((-(uint)(param_2 == 0) & 0xf000) + 0x1000) < iVar18) {
      plVar10 = (long *)__memcpy_chk(plVar10,*(undefined8 *)(param_1 + 0x38),lVar19,uVar15);
      plVar14 = (long *)((long)plVar10 + (long)(int)uVar6 * 2);
    }
    else {
      plVar14 = plVar10;
      if (0 < (int)uVar6) {
        lVar3 = *(long *)param_1;
        lVar8 = 0;
        do {
          *(short *)((long)plVar7 + lVar8 + 0x30) = (short)*(undefined4 *)(lVar3 + lVar8 * 8);
          lVar8 = lVar8 + 2;
        } while (lVar8 != (long)(int)uVar6 * 2);
        plVar14 = (long *)((long)plVar10 + (ulong)uVar6 * 2);
      }
    }
    lVar3 = *(long *)(param_1 + 0x10);
    lVar8 = (long)plVar10 + lVar19;
    if (param_3 == 1) {
      plVar7[1] = lVar8;
      if (uVar17 <= uVar15) {
        uVar17 = uVar15;
      }
      uVar9 = (lVar19 + uVar17) - uVar15;
      if (uVar9 < uVar17) {
        uVar9 = uVar17;
      }
      __memcpy_chk(lVar8,lVar3,(long)(int)uVar13 << 2,uVar9 + (uVar15 - (lVar19 + uVar17)));
    }
    else if (param_3 == 2) {
      plVar7[1] = lVar8;
      if (0 < (int)uVar13) {
        uVar17 = 0;
        do {
          *(char *)(lVar8 + uVar17) = (char)*(undefined4 *)(lVar3 + uVar17 * 4);
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar13);
      }
    }
    else {
      plVar7[1] = (long)plVar14;
      uVar17 = 0;
      if (0 < (int)uVar13) {
        do {
          *(short *)((long)plVar14 + uVar17 * 2) = (short)*(undefined4 *)(lVar3 + uVar17 * 4);
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar13);
      }
    }
    uVar5 = _LC0;
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x1c) = uVar5;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
    uprv_free_76_godot(*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
    return plVar7;
  }
  *(undefined4 *)param_4 = 7;
LAB_00104010:
  uVar5 = _LC0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
  uprv_free_76_godot(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  return (long *)0x0;
}


