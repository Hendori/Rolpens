
/* std::_Hashtable<linalg::vec<int, 4>, std::pair<linalg::vec<int, 4> const,
   std::unique_ptr<(anonymous namespace)::Partition, std::default_delete<(anonymous
   namespace)::Partition> > >, std::allocator<std::pair<linalg::vec<int, 4> const,
   std::unique_ptr<(anonymous namespace)::Partition, std::default_delete<(anonymous
   namespace)::Partition> > > >, std::__detail::_Select1st, std::equal_to<linalg::vec<int, 4> >,
   std::hash<linalg::vec<int, 4> >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, true> >::_M_find_before_node(unsigned long,
   linalg::vec<int, 4> const&, unsigned long) const [clone .constprop.0] */

long * std::
       _Hashtable<linalg::vec<int,4>,std::pair<linalg::vec<int,4>const,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>>,std::allocator<std::pair<linalg::vec<int,4>const,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>>>,std::__detail::_Select1st,std::equal_to<linalg::vec<int,4>>,std::hash<linalg::vec<int,4>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
       ::_M_find_before_node(ulong param_1,vec *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar3 = *(long **)((anonymous_namespace)::Partition::cache + param_1 * 8);
  if (plVar3 != (long *)0x0) {
    uVar4 = ((long *)*plVar3)[4];
    plVar1 = (long *)*plVar3;
    do {
      plVar2 = plVar1;
      if (((((param_3 == uVar4) && (*(int *)param_2 == (int)plVar2[1])) &&
           (*(int *)(param_2 + 4) == *(int *)((long)plVar2 + 0xc))) &&
          ((*(int *)(param_2 + 8) == (int)plVar2[2] &&
           (*(int *)(param_2 + 0xc) == *(int *)((long)plVar2 + 0x14))))) ||
         (plVar3 = (long *)*plVar2, plVar3 == (long *)0x0)) {
        return plVar3;
      }
      uVar4 = plVar3[4];
      plVar1 = plVar3;
      plVar3 = plVar2;
    } while (param_1 == uVar4 % DAT_00108768);
  }
  return (long *)0x0;
}



/* std::unordered_map<linalg::vec<int, 4>, std::unique_ptr<(anonymous namespace)::Partition,
   std::default_delete<(anonymous namespace)::Partition> >, std::hash<linalg::vec<int, 4> >,
   std::equal_to<linalg::vec<int, 4> >, std::allocator<std::pair<linalg::vec<int, 4> const,
   std::unique_ptr<(anonymous namespace)::Partition, std::default_delete<(anonymous
   namespace)::Partition> > > > >::~unordered_map() */

void __thiscall
std::
unordered_map<linalg::vec<int,4>,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>,std::hash<linalg::vec<int,4>>,std::equal_to<linalg::vec<int,4>>,std::allocator<std::pair<linalg::vec<int,4>const,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>>>>
::~unordered_map(unordered_map<linalg::vec<int,4>,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>,std::hash<linalg::vec<int,4>>,std::equal_to<linalg::vec<int,4>>,std::allocator<std::pair<linalg::vec<int,4>const,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>>>>
                 *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x10);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    pvVar2 = (void *)puVar3[3];
    if (pvVar2 != (void *)0x0) {
      if (*(void **)((long)pvVar2 + 0x38) != (void *)0x0) {
        free(*(void **)((long)pvVar2 + 0x38));
      }
      if (*(void **)((long)pvVar2 + 0x20) != (void *)0x0) {
        free(*(void **)((long)pvVar2 + 0x20));
      }
      operator_delete(pvVar2,0x50);
    }
    operator_delete(puVar3,0x28);
    puVar3 = puVar1;
  }
  memset(*(void **)this,0,*(long *)(this + 8) * 8);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (*(unordered_map<linalg::vec<int,4>,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>,std::hash<linalg::vec<int,4>>,std::equal_to<linalg::vec<int,4>>,std::allocator<std::pair<linalg::vec<int,4>const,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>>>>
        **)this != this + 0x30) {
    operator_delete(*(unordered_map<linalg::vec<int,4>,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>,std::hash<linalg::vec<int,4>>,std::equal_to<linalg::vec<int,4>>,std::allocator<std::pair<linalg::vec<int,4>const,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>>>>
                      **)this,*(long *)(this + 8) << 3);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (anonymous namespace)::Partition::Reindex(linalg::vec<int, 4>, linalg::vec<int, 4>,
   linalg::vec<bool, 4>, int) const */

undefined8 *
(anonymous_namespace)::Partition::Reindex
          (undefined8 *param_1,int *param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 param_6,uint param_7,int param_8)

{
  size_t __size;
  int iVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  void *pvVar11;
  int *piVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  ulong uVar19;
  size_t sVar20;
  long lVar21;
  int iVar22;
  undefined4 uVar23;
  int *piVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  byte bVar28;
  int iVar29;
  long lVar30;
  size_t sVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  ulong uVar35;
  byte bVar36;
  int iVar37;
  int iVar38;
  long in_FS_OFFSET;
  undefined8 uVar39;
  undefined8 uVar40;
  int *local_f8;
  int local_f0;
  undefined4 *local_c0;
  int local_90;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48 [2];
  long local_40;
  
  puVar10 = (undefined4 *)0x0;
  uVar2 = *(ulong *)(param_2 + 10);
  bVar13 = (byte)(param_7 >> 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar34 = param_7 >> 8;
  iVar14 = (int)param_4;
  __size = uVar2 * 4;
  iVar38 = (int)((ulong)param_3 >> 0x20);
  bVar36 = (byte)(param_7 >> 0x18);
  if (uVar2 != 0) {
    puVar10 = (undefined4 *)malloc(__size);
    uVar34 = param_7 >> 8 & 0xff;
  }
  uVar34 = uVar34 & 0xff;
  iVar18 = param_2[2];
  bVar5 = true;
  iVar8 = *param_2;
  iVar37 = param_2[1];
  iVar22 = (int)((ulong)param_4 >> 0x20);
  iVar1 = param_2[3];
  bVar6 = false;
  iVar29 = iVar8;
  iVar33 = iVar37;
  if (param_4 < 0) {
    iVar15 = 1;
    if (iVar8 != 0) {
      iVar15 = (uint)(iVar8 == 1) * 2;
    }
    if (iVar15 == iVar37) {
      bVar5 = true;
      bVar6 = false;
    }
    else {
      uVar34 = uVar34 ^ 1;
      param_7 = param_7 ^ 1;
      bVar13 = bVar13 ^ 1;
      bVar5 = false;
      bVar36 = bVar36 ^ 1;
      bVar6 = true;
      iVar29 = iVar18;
      iVar33 = iVar8;
      iVar18 = iVar37;
    }
  }
  local_58 = _LC1;
  uStack_50 = _UNK_00108c58;
  uVar25 = 0;
  piVar24 = (int *)&local_58;
  uVar27 = uVar2;
  uVar39 = _LC1;
  uVar40 = _UNK_00108c58;
  do {
    while (iVar8 = *piVar24, uVar19 = uVar25, puVar9 = puVar10, iVar37 = iVar38, iVar8 != 1) {
      if (iVar8 == 2) {
        if (iVar18 != 1) {
          iVar15 = iVar18;
          if (iVar18 != 2) goto LAB_001002b0;
          if (iVar14 < 0) goto LAB_0010031b;
LAB_001002e0:
          if (((iVar15 != 1) && (iVar37 = iVar14, iVar15 != 2)) && (iVar37 = iVar22, iVar15 == 0)) {
            iVar37 = (int)param_3;
          }
          goto LAB_001002ff;
        }
LAB_00100870:
        if (-1 < param_3) goto LAB_001002ff;
      }
      else {
        if (iVar8 != 0) {
          if (iVar1 != 1) {
            iVar15 = iVar1;
            if (iVar1 != 2) goto LAB_001002b0;
            if (iVar14 < 0) goto LAB_0010031b;
joined_r0x00100823:
            iVar15 = iVar18;
            if ((iVar8 != 2) && (iVar15 = iVar1, iVar8 == 0)) {
              iVar15 = iVar29;
            }
            goto LAB_001002e0;
          }
          goto LAB_00100870;
        }
        if (iVar29 == 1) goto LAB_00100870;
        iVar15 = iVar29;
        if (iVar29 == 2) {
          if (-1 < iVar14) goto LAB_001002e0;
        }
        else {
LAB_001002b0:
          iVar16 = iVar22;
          if (iVar15 == 0) {
            iVar16 = (int)param_3;
          }
          if (-1 < iVar16) {
            iVar15 = iVar33;
            if (iVar8 == 1) goto LAB_001002e0;
            goto joined_r0x00100823;
          }
        }
      }
LAB_0010031b:
      piVar24 = piVar24 + 1;
      uVar25 = uVar19;
      if (piVar24 == local_48) goto LAB_00100328;
    }
    if (iVar33 == 1) goto LAB_00100870;
    iVar15 = iVar33;
    if (iVar33 != 2) goto LAB_001002b0;
    iVar37 = iVar14;
    if (iVar14 < 0) goto LAB_0010031b;
LAB_001002ff:
    uVar19 = uVar25 + 1;
    sVar20 = uVar25 * 4;
    if (uVar25 < uVar27) {
      puVar10[uVar25] = iVar37;
      goto LAB_0010031b;
    }
    if (uVar27 == 0) {
      sVar31 = 0x200;
      uVar35 = 0x80;
LAB_00100913:
      puVar9 = (undefined4 *)malloc(sVar31);
      if (uVar25 == 0) {
LAB_00100988:
        if (puVar10 != (undefined4 *)0x0) goto LAB_00100c83;
      }
      else {
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00100988;
          *puVar9 = *puVar10;
        }
        else {
          puVar9 = (undefined4 *)memmove(puVar9,puVar10,sVar20);
        }
LAB_00100c83:
        free(puVar10);
      }
      param_7 = param_7 & 0xff;
      uVar27 = uVar35;
      uVar39 = _LC1;
      uVar40 = _UNK_00108c58;
    }
    else {
      uVar35 = uVar27 * 2;
      if (uVar27 < uVar35) {
        sVar31 = uVar27 * 8;
        goto LAB_00100913;
      }
    }
    piVar24 = piVar24 + 1;
    puVar9[uVar25] = iVar37;
    uVar25 = uVar19;
    puVar10 = puVar9;
  } while (piVar24 != local_48);
LAB_00100328:
  local_90 = (int)param_5;
  local_f8 = (int *)&local_58;
  local_58 = uVar39;
  uStack_50 = uVar40;
  do {
    bVar7 = (byte)uVar34;
    iVar14 = *local_f8;
    iVar38 = (int)((ulong)param_5 >> 0x20);
    if (iVar14 == 0) {
      iVar18 = param_2[4];
      local_f0 = iVar18 + -1;
      iVar8 = *param_2;
      if (iVar8 != 1) goto LAB_0010039b;
    }
    else {
      if (iVar14 == 1) {
        iVar18 = param_2[5];
        local_f0 = iVar18 + -1;
        iVar8 = param_2[1];
        if (iVar8 == 1) {
          iVar8 = 1;
          goto LAB_001003c3;
        }
LAB_0010039b:
        iVar38 = (int)param_6;
        if ((iVar8 != 2) && (iVar38 = (int)((ulong)param_6 >> 0x20), iVar8 == 0)) {
          iVar38 = local_90;
        }
        if (iVar14 == 0) {
          iVar8 = *param_2;
          goto LAB_001003c3;
        }
      }
      else {
        if (iVar14 == 2) {
          iVar18 = param_2[6];
          local_f0 = iVar18 + -1;
          iVar8 = param_2[2];
          if (iVar8 == 1) goto LAB_001003c3;
          goto LAB_0010039b;
        }
        iVar18 = param_2[7];
        iVar8 = param_2[3];
        local_f0 = iVar18 + -1;
        if (iVar8 != 1) goto LAB_0010039b;
      }
      if (iVar14 == 1) {
        iVar8 = param_2[1];
      }
      else if (iVar14 == 2) {
        iVar8 = param_2[2];
      }
      else {
        iVar8 = param_2[3];
      }
    }
LAB_001003c3:
    bVar28 = bVar7;
    if (((iVar8 != 1) && (bVar28 = bVar13, iVar8 != 2)) && (bVar28 = bVar36, iVar8 == 0)) {
      bVar28 = (byte)param_7;
    }
    if (bVar28 == 0) {
      iVar38 = iVar38 + -2 + iVar18;
    }
    if (0 < local_f0) {
      sVar20 = uVar19 * 4;
      uVar25 = uVar19;
      uVar35 = uVar27;
      if (uVar27 <= uVar19) {
        if (uVar27 != 0) goto LAB_0010045e;
        sVar31 = 0x200;
        uVar27 = 0x80;
        local_c0 = puVar9;
        uVar32 = param_7;
        goto LAB_00100478;
      }
LAB_00100410:
      *(int *)((long)puVar9 + sVar20) = iVar38;
      uVar27 = uVar35;
      if (iVar14 != 0) goto LAB_00100538;
      do {
        iVar18 = *param_2;
LAB_00100420:
        bVar7 = (byte)uVar34;
        if (((iVar18 != 1) && (bVar7 = bVar13, iVar18 != 2)) && (bVar7 = bVar36, iVar18 == 0)) {
          bVar7 = (byte)param_7;
        }
        uVar25 = uVar25 + 1;
        iVar38 = iVar38 + (-(uint)(bVar7 == 0) | 1);
        if ((long)local_f0 + uVar19 == uVar25) {
          uVar19 = uVar19 + 1 + (ulong)(local_f0 - 1);
          goto LAB_00100574;
        }
        sVar20 = uVar25 * 4;
        uVar35 = uVar27;
        if (uVar25 < uVar27) goto LAB_00100410;
LAB_0010045e:
        bVar7 = (byte)uVar34;
        uVar27 = uVar35 * 2;
        if (uVar27 <= uVar35) goto LAB_00100410;
        sVar31 = uVar35 * 8;
        local_c0 = puVar9;
        uVar32 = param_7;
LAB_00100478:
        puVar9 = (undefined4 *)malloc(sVar31);
        param_7 = uVar32 & 0xff;
        uVar34 = (uint)bVar7;
        if (uVar25 == 0) {
LAB_001004cc:
          uVar35 = uVar27;
          if (local_c0 == (undefined4 *)0x0) goto LAB_00100410;
        }
        else if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_001004cc;
          *puVar9 = *local_c0;
        }
        else {
          memmove(puVar9,local_c0,sVar20);
        }
        free(local_c0);
        uVar34 = (uint)bVar7;
        param_7 = uVar32 & 0xff;
        *(int *)((long)puVar9 + sVar20) = iVar38;
      } while (iVar14 == 0);
LAB_00100538:
      if (iVar14 == 1) {
        iVar18 = param_2[1];
      }
      else if (iVar14 == 2) {
        iVar18 = param_2[2];
      }
      else {
        iVar18 = param_2[3];
      }
      goto LAB_00100420;
    }
LAB_00100574:
    local_f8 = local_f8 + 1;
  } while (local_f8 != local_48);
  sVar20 = uVar19 * 4;
  uVar25 = uVar2 * 2;
  if (uVar27 < uVar2) {
    puVar10 = (undefined4 *)malloc(__size);
    if (uVar19 == 0) {
      if (puVar9 != (undefined4 *)0x0) {
        free(puVar9);
        puVar9 = puVar10 + uVar2;
        puVar17 = puVar10;
        if (puVar9 == puVar10) goto LAB_0010064f;
        goto LAB_001005d5;
      }
      if (puVar10 == puVar10 + uVar2) goto LAB_0010064f;
      puVar10 = (undefined4 *)memset(puVar10,0,__size);
LAB_001005ff:
      puVar9 = puVar10 + uVar19;
      puVar17 = puVar10 + uVar2;
    }
    else {
      if ((long)sVar20 < 5) {
        if (sVar20 == 4) {
          *puVar10 = *puVar9;
          goto LAB_00100d44;
        }
        if (puVar9 != (undefined4 *)0x0) goto LAB_00100d44;
      }
      else {
        puVar10 = (undefined4 *)memcpy(puVar10,puVar9,sVar20);
LAB_00100d44:
        free(puVar9);
      }
      if (uVar19 < uVar2) goto LAB_001005bf;
      if (uVar25 < uVar19) goto LAB_00100d74;
      puVar9 = puVar10 + uVar19;
      puVar17 = puVar10 + uVar2;
    }
  }
  else {
    puVar10 = puVar9;
    if (uVar19 < uVar2) {
LAB_001005bf:
      puVar9 = puVar10 + uVar2;
      puVar17 = puVar10 + uVar19;
      if (puVar9 != puVar10 + uVar19) {
LAB_001005d5:
        memset(puVar17,0,(long)puVar9 - (long)puVar17);
        goto LAB_001005f6;
      }
      if (uVar19 <= uVar25) goto LAB_0010064f;
LAB_00100d74:
      puVar9 = (undefined4 *)malloc(__size);
      if ((long)__size < 5) {
        if (__size != 4) goto LAB_001009a5;
        *puVar9 = *puVar10;
      }
      else {
        memcpy(puVar9,puVar10,__size);
      }
LAB_001009ae:
      free(puVar10);
    }
    else {
LAB_001005f6:
      if (uVar19 <= uVar25) goto LAB_001005ff;
      puVar9 = (undefined4 *)0x0;
      if (uVar2 != 0) goto LAB_00100d74;
LAB_001009a5:
      if (puVar10 != (undefined4 *)0x0) goto LAB_001009ae;
    }
    puVar10 = puVar9;
    puVar9 = puVar10 + uVar19;
    puVar17 = puVar10 + uVar2;
  }
  lVar26 = (long)(param_8 - (int)uVar19) + uVar19;
  if (puVar9 != puVar17) {
    lVar3 = lVar26 + 1;
    lVar30 = lVar26;
    while (lVar21 = lVar3, puVar9[lVar30 - lVar26] = (int)lVar30,
          ((ulong)((long)puVar17 + (-4 - (long)puVar9)) >> 2) + lVar26 + 1 != lVar21) {
      lVar30 = lVar21;
      lVar3 = lVar21 + 1;
    }
  }
LAB_0010064f:
  lVar26 = (long)param_2[0x10];
  *param_1 = 0;
  param_1[2] = 0;
  if (lVar26 == 0) {
    param_1[1] = 0;
  }
  else {
    pvVar11 = malloc(lVar26 * 0xc);
    lVar30 = 0;
    local_58 = _LC1;
    *param_1 = pvVar11;
    lVar3 = *(long *)(param_2 + 0xe);
    param_1[1] = lVar26;
    param_1[2] = lVar26;
    do {
      uStack_50 = CONCAT44(uStack_50._4_4_,2);
      lVar21 = (long)(int)lVar30 * 0xc;
      piVar24 = (int *)(lVar3 + lVar21);
      puVar9 = (undefined4 *)(lVar21 + (long)pvVar11);
      piVar12 = (int *)&local_58;
      do {
        if (*piVar12 == 0) {
          uVar23 = puVar10[*piVar24];
          bVar4 = bVar6;
LAB_00100b9d:
          puVar17 = puVar9;
          if (bVar4) {
            puVar17 = puVar9 + 1;
          }
        }
        else {
          if (*piVar12 == 1) {
            uVar23 = puVar10[piVar24[1]];
            bVar4 = bVar5;
            goto LAB_00100b9d;
          }
          uVar23 = puVar10[piVar24[2]];
          puVar17 = puVar9 + 2;
        }
        piVar12 = piVar12 + 1;
        *puVar17 = uVar23;
      } while (piVar12 != (int *)((long)&uStack_50 + 4));
      lVar30 = lVar30 + 1;
    } while (lVar26 != lVar30);
  }
  if (puVar10 != (undefined4 *)0x0) {
    free(puVar10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (anonymous namespace)::Partition::PartitionQuad(manifold::Vec<linalg::vec<int, 3> >&,
   manifold::Vec<linalg::vec<double, 4> >&, linalg::vec<int, 4>, linalg::vec<int, 4>,
   linalg::vec<int, 4>, linalg::vec<bool, 4>) */

void __thiscall
(anonymous_namespace)::Partition::PartitionQuad
          (Partition *this,undefined8 *param_1,ulong param_2,ulong param_4,ulong param_5,
          ulong param_6,ulong param_7,ulong param_8,uint param_9)

{
  double *pdVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [8];
  byte bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  byte bVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  double *pdVar29;
  uint uVar30;
  uint uVar31;
  size_t sVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint *puVar44;
  long in_FS_OFFSET;
  bool bVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  ulong local_190;
  uint local_17c;
  ulong local_178;
  uint local_170;
  uint local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  uint local_13c;
  int local_138;
  ulong local_130;
  uint local_128;
  uint local_120;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48 [2];
  long local_40;
  
  local_60 = (undefined1  [8])param_4;
  uVar13 = (long)param_5 >> 0x20;
  puVar44 = (uint *)&local_58;
  local_68 = (undefined1  [8])param_2;
  auVar8 = local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar33 = (uint)param_6;
  uVar39 = (uint)param_7;
  uVar12 = (uint)(param_5 >> 0x20);
  uVar41 = (uint)(param_6 >> 0x20);
  uVar26 = (uint)param_5;
  local_170 = (uint)(param_7 >> 0x20);
  bVar9 = (byte)param_9;
  bVar18 = (byte)(param_9 >> 0x10);
  uVar43 = (uint)param_8;
  bVar19 = (byte)(param_9 >> 0x18);
  uVar25 = 0xffffffff;
  local_58 = _LC1;
  uStack_50 = _UNK_00108c58;
  puVar14 = puVar44;
  uVar22 = 3;
  uVar15 = 0xffffffff;
  do {
    uVar31 = *puVar14;
    uVar30 = (uint)(param_8 >> 0x20);
    uVar37 = uVar39;
    if (uVar15 == 0xffffffff) {
      if (uVar31 == 1) {
        uVar37 = local_170;
        if (local_170 == 0) {
          if (uVar22 == 1) {
LAB_001026e8:
            uVar34 = 1;
            goto LAB_00100fa5;
          }
          if (uVar22 == 2) {
            if (uVar43 == 0) goto LAB_001026e8;
          }
          else if (uVar22 == 0) {
            if (uVar39 == 0) {
              uVar15 = 1;
            }
          }
          else if (uVar30 == 0) {
            uVar15 = uVar31;
          }
        }
        goto LAB_00100f99;
      }
      if (uVar31 == 2) {
        uVar37 = uVar43;
        if (uVar43 == 0) {
          if (uVar22 == 1) {
            if (local_170 == 0) goto LAB_00102701;
          }
          else {
            if (uVar22 == 2) {
LAB_00102701:
              uVar34 = 2;
              goto LAB_00100fa5;
            }
            if (uVar22 == 0) {
              if (uVar39 == 0) {
                uVar15 = uVar31;
              }
            }
            else if (uVar30 == 0) {
              uVar15 = uVar31;
            }
          }
        }
        goto LAB_00100f99;
      }
      if (uVar31 != 0) {
        if (uVar30 != 0) goto LAB_00100f97;
        uVar37 = local_170;
        uVar34 = uVar31;
        if ((((uVar22 == 1) || (uVar37 = uVar43, uVar22 == 2)) || (uVar37 = uVar39, uVar22 == 0)) &&
           (uVar37 != 0)) goto LAB_00100f8f;
        goto LAB_00100fa5;
      }
      if (uVar39 != 0) goto LAB_00100f99;
      uVar34 = local_170;
      if ((uVar22 == 1) || (uVar34 = uVar43, uVar22 == 2)) {
        if (uVar34 != 0) goto LAB_00100f99;
        uVar34 = 0;
      }
      else {
        uVar34 = 0;
        if (uVar22 != 0) {
          uVar15 = -(uint)(uVar30 != 0);
          goto LAB_00100f99;
        }
      }
    }
    else {
      uVar37 = local_170;
      if ((uVar31 != 1) && (uVar37 = uVar43, uVar31 != 2)) {
LAB_00100f8f:
        uVar37 = uVar39;
        if (uVar31 != 0) {
LAB_00100f97:
          uVar37 = uVar30;
        }
      }
LAB_00100f99:
      uVar34 = uVar15;
      if ((0 < (int)uVar37) && (bVar45 = uVar25 == 0xffffffff, uVar25 = 0xfffffffe, bVar45)) {
        uVar25 = uVar31;
      }
    }
LAB_00100fa5:
    puVar14 = puVar14 + 1;
    uVar22 = uVar31;
    uVar15 = uVar34;
  } while (local_48 != puVar14);
  local_68._0_4_ = (undefined4)param_2;
  uVar3 = local_68._0_4_;
  local_13c._0_1_ = (byte)(param_9 >> 8);
  local_68 = auVar8;
  if ((int)uVar34 < 0) {
    uVar15 = uVar30;
    if ((int)local_170 <= (int)uVar30) {
      uVar15 = local_170;
    }
    iVar20 = uVar15 + 1;
    local_158 = param_2 >> 0x20;
    local_150 = param_2 << 0x20;
    if (bVar19 == 0) {
      local_138 = -1;
      uVar25 = ~uVar30;
    }
    else {
      local_138 = 1;
      uVar25 = uVar30 + 1;
    }
    local_148 = param_5 << 0x20;
    local_190 = param_7 << 0x20;
    uVar22 = (uint)CONCAT11(1,(byte)local_13c) | (param_9 >> 0x18) << 0x10 | param_9 << 0x18;
    uVar26 = uVar12;
    if (1 < iVar20) {
      local_120 = -(uint)((byte)local_13c == 0) | 1;
      local_160 = 1;
      local_17c = uVar41 + uVar25;
      local_13c = uVar22;
      local_128 = local_170;
      local_130._0_4_ = uVar30;
      uVar31 = uVar12;
      do {
        iVar23 = ((int)local_128 / iVar20 + 1) * local_120;
        uVar26 = uVar12 + iVar23;
        uVar25 = (uVar30 - (int)(uint)local_130 / iVar20) * local_138;
        uVar37 = uVar41 + uVar25;
        dVar46 = round(((double)(int)local_160 / (double)iVar20) * (double)(int)uVar43 +
                       (_LC3 - (double)(int)local_160 / (double)iVar20) * (double)(int)uVar39);
        iVar21 = (int)dVar46;
        iVar27 = uVar26 - uVar31;
        iVar16 = (iVar23 - local_120) + uVar12;
        uVar34 = (uVar25 - local_138) + uVar41;
        iVar24 = -iVar27;
        if (0 < iVar27) {
          iVar24 = iVar27;
        }
        iVar28 = uVar37 - local_17c;
        uVar13 = param_1[1];
        iVar27 = -iVar28;
        if (0 < iVar28) {
          iVar27 = iVar28;
        }
        if (0 < iVar21) {
          iVar28 = 0;
          dVar52 = (double)iVar21 + _LC3;
          uVar17 = uVar13;
          dVar46 = _LC3;
          do {
            puVar11 = (undefined8 *)*param_1;
            pdVar29 = (double *)(puVar11 + (long)(int)uVar34 * 4);
            pdVar1 = (double *)(puVar11 + (long)iVar16 * 4);
            dVar47 = ((double)iVar28 + dVar46) / dVar52;
            dVar51 = dVar46 - dVar47;
            dVar49 = *pdVar1 * dVar51 + *pdVar29 * dVar47;
            dVar50 = pdVar1[1] * dVar51 + pdVar29[1] * dVar47;
            uVar36 = param_1[2];
            dVar48 = pdVar29[2] * dVar47 + dVar51 * pdVar1[2];
            dVar47 = pdVar29[3] * dVar47 + dVar51 * pdVar1[3];
            if (uVar17 < uVar36) {
              pdVar29 = (double *)(puVar11 + uVar17 * 4);
              param_1[1] = uVar17 + 1;
              *pdVar29 = dVar49;
              pdVar29[1] = dVar50;
              pdVar29[2] = dVar48;
              pdVar29[3] = dVar47;
            }
            else {
              if (uVar36 == 0) {
                sVar32 = 0x1000;
                uVar35 = 0x80;
LAB_0010153b:
                puVar10 = (undefined8 *)malloc(sVar32);
                if (uVar17 == 0) {
LAB_001015b4:
                  if (puVar11 != (undefined8 *)0x0) goto LAB_0010161a;
                }
                else {
                  sVar32 = uVar17 * 0x20;
                  if ((long)sVar32 < 0x21) {
                    if (sVar32 != 0x20) goto LAB_001015b4;
                    uVar5 = puVar11[1];
                    *puVar10 = *puVar11;
                    puVar10[1] = uVar5;
                    uVar5 = puVar11[3];
                    puVar10[2] = puVar11[2];
                    puVar10[3] = uVar5;
                  }
                  else {
                    puVar10 = (undefined8 *)memmove(puVar10,puVar11,sVar32);
                  }
LAB_0010161a:
                  free(puVar11);
                  uVar17 = param_1[1];
                }
                puVar11 = puVar10;
                dVar46 = _LC3;
                *param_1 = puVar11;
                param_1[2] = uVar35;
              }
              else {
                uVar35 = uVar36 * 2;
                if (uVar36 < uVar35) {
                  sVar32 = uVar36 << 6;
                  goto LAB_0010153b;
                }
              }
              pdVar29 = (double *)(puVar11 + uVar17 * 4);
              param_1[1] = uVar17 + 1;
              *pdVar29 = dVar49;
              pdVar29[1] = dVar50;
              pdVar29[2] = dVar48;
              pdVar29[3] = dVar47;
            }
            if (iVar21 == iVar28 + 1) break;
            iVar28 = iVar28 + 1;
            uVar17 = param_1[1];
          } while( true );
        }
        PartitionQuad(this,param_1,CONCAT44(iVar16,(undefined4)local_158),
                      local_150 & 0xffffffff00000000 | (ulong)uVar34,(ulong)uVar31 | uVar13 << 0x20,
                      local_148 & 0xffffffff00000000 | (ulong)uVar37,CONCAT44(iVar21,iVar24 + -1),
                      local_190 & 0xffffffff00000000 | (ulong)(iVar27 - 1U),local_13c);
        uVar22 = local_13c & 0xffffff;
        local_150 = CONCAT44(uVar34,uVar34);
        local_158 = CONCAT44(iVar16,iVar16);
        local_128 = local_128 + local_170;
        local_130._0_4_ = (uint)local_130 + uVar30;
        local_190 = CONCAT44(iVar21,iVar27 - 1U);
        local_148 = CONCAT44((int)uVar13 + -1 + iVar21,uVar37);
        bVar45 = local_160 != uVar15;
        local_17c = uVar37;
        local_160 = local_160 + 1;
        local_13c = uVar22;
        uVar31 = uVar26;
      } while (bVar45);
      iVar20 = -iVar23;
      if (0 < iVar23) {
        iVar20 = iVar23;
      }
      local_170 = local_170 - iVar20;
    }
    uVar15 = -uVar25;
    if (0 < (int)uVar25) {
      uVar15 = uVar25;
    }
    PartitionQuad(this,param_1,local_158 & 0xffffffff | (long)local_60 << 0x20,
                  (ulong)local_60 >> 0x20 | local_150 & 0xffffffff00000000,CONCAT44(uVar33,uVar26),
                  local_148 & 0xffffffff00000000 | (long)param_6 >> 0x20 & 0xffffffffU,
                  CONCAT44(uVar43,local_170),local_190 & 0xffffffff00000000 | (ulong)(uVar15 - 1),
                  CONCAT22((short)(uVar22 >> 0x10),CONCAT11(bVar18,(char)uVar22)));
    goto LAB_0010176d;
  }
  if ((int)uVar25 < 0) {
    local_58 = _LC2;
    iVar20 = local_68._0_4_;
    do {
      uVar15 = *puVar44;
      uVar25 = uVar15 + uVar34;
      iVar16 = (int)uVar25 % 4;
      iVar24 = uVar3;
      if (uVar15 == 2) {
        uVar22 = uVar26;
        uVar31 = uVar39;
        if ((((uVar25 & 3) == 0) ||
            (uVar22 = uVar12, iVar24 = local_68._4_4_, uVar31 = local_170, iVar16 == 1)) ||
           (uVar22 = uVar33, iVar24 = local_60._0_4_, uVar31 = uVar43, iVar16 == 2)) {
          if ((int)uVar31 < 1) goto LAB_00101f10;
        }
        else {
          iVar24 = local_60._4_4_;
          uVar22 = uVar41;
          if ((int)uVar30 < 1) goto LAB_00101f01;
        }
        uVar13 = *(ulong *)(this + 8);
        uVar17 = *(ulong *)(this + 0x10);
        if (uVar13 < uVar17) {
          *(ulong *)(this + 8) = uVar13 + 1;
          piVar2 = (int *)(*(long *)this + uVar13 * 0xc);
          *piVar2 = iVar24;
          piVar2[1] = uVar22;
          piVar2[2] = iVar20;
          iVar24 = iVar20;
        }
        else {
          if (uVar17 == 0) {
            local_130 = 0x80;
            sVar32 = 0x600;
LAB_001029c3:
            puVar11 = (undefined8 *)malloc(sVar32);
            puVar10 = *(undefined8 **)this;
            if (uVar13 == 0) {
LAB_00102a16:
              if (puVar10 != (undefined8 *)0x0) goto LAB_00102af0;
            }
            else {
              sVar32 = uVar13 * 0xc;
              if ((long)sVar32 < 0xd) {
                if (sVar32 != 0xc) goto LAB_00102a16;
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
              }
              else {
                puVar11 = (undefined8 *)memmove(puVar11,puVar10,sVar32);
              }
LAB_00102af0:
              free(puVar10);
              uVar13 = *(ulong *)(this + 8);
            }
            *(undefined8 **)this = puVar11;
            *(ulong *)(this + 0x10) = local_130;
          }
          else {
            local_130 = uVar17 * 2;
            if (uVar17 < local_130) {
              sVar32 = uVar17 * 0x18;
              goto LAB_001029c3;
            }
            puVar11 = *(undefined8 **)this;
          }
          *(ulong *)(this + 8) = uVar13 + 1;
          piVar2 = (int *)((long)puVar11 + uVar13 * 0xc);
          *piVar2 = iVar24;
          piVar2[1] = uVar22;
          piVar2[2] = iVar20;
          iVar24 = iVar20;
        }
      }
      else if ((((uVar25 & 3) != 0) && (iVar24 = local_68._4_4_, iVar16 != 1)) &&
              (iVar24 = local_60._0_4_, iVar16 != 2)) {
LAB_00101f01:
        iVar24 = local_60._4_4_;
      }
LAB_00101f10:
      iVar21 = 0;
      iVar20 = iVar24;
      while( true ) {
        uVar22 = uVar39;
        uVar31 = uVar26;
        bVar7 = bVar9;
        if (((uVar25 & 3) != 0) &&
           ((uVar37 = uVar12, uVar38 = local_170, bVar6 = (byte)local_13c, iVar16 == 1 ||
            (uVar37 = uVar41, uVar38 = uVar30, bVar6 = bVar19, uVar22 = uVar43, uVar31 = uVar33,
            bVar7 = bVar18, iVar16 != 2)))) {
          uVar22 = uVar38;
          uVar31 = uVar37;
          bVar7 = bVar6;
        }
        if ((int)uVar22 <= iVar21) break;
        iVar24 = -iVar21;
        if (bVar7 != 0) {
          iVar24 = iVar21;
        }
        iVar24 = uVar31 + iVar24;
        iVar23 = local_68._4_4_;
        if (((uVar34 != 1) && (iVar23 = local_60._0_4_, uVar34 != 2)) &&
           (iVar23 = uVar3, uVar34 != 0)) {
          iVar23 = local_60._4_4_;
        }
        uVar13 = *(ulong *)(this + 8);
        uVar17 = *(ulong *)(this + 0x10);
        if (uVar13 < uVar17) {
          *(ulong *)(this + 8) = uVar13 + 1;
          piVar2 = (int *)(*(long *)this + uVar13 * 0xc);
          *piVar2 = iVar23;
          piVar2[1] = iVar20;
          piVar2[2] = iVar24;
        }
        else {
          if (uVar17 == 0) {
            sVar32 = 0x600;
            uVar36 = 0x80;
LAB_00102063:
            puVar11 = (undefined8 *)malloc(sVar32);
            puVar10 = *(undefined8 **)this;
            if (uVar13 == 0) {
LAB_001020b6:
              if (puVar10 != (undefined8 *)0x0) goto LAB_00102223;
            }
            else {
              sVar32 = uVar13 * 0xc;
              if ((long)sVar32 < 0xd) {
                if (sVar32 != 0xc) goto LAB_001020b6;
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
              }
              else {
                puVar11 = (undefined8 *)memmove(puVar11,puVar10,sVar32);
              }
LAB_00102223:
              free(puVar10);
              uVar13 = *(ulong *)(this + 8);
            }
            *(undefined8 **)this = puVar11;
            *(ulong *)(this + 0x10) = uVar36;
          }
          else {
            uVar36 = uVar17 * 2;
            if (uVar17 < uVar36) {
              sVar32 = uVar17 * 0x18;
              goto LAB_00102063;
            }
            puVar11 = *(undefined8 **)this;
          }
          *(ulong *)(this + 8) = uVar13 + 1;
          piVar2 = (int *)((long)puVar11 + uVar13 * 0xc);
          *piVar2 = iVar23;
          piVar2[1] = iVar20;
          piVar2[2] = iVar24;
        }
        iVar21 = iVar21 + 1;
        iVar20 = iVar24;
      }
      if ((uVar15 == 2) || (uVar22 == 0)) {
        iVar24 = local_68._4_4_;
        if ((uVar34 != 1) &&
           ((iVar24 = local_60._0_4_, uVar34 != 2 && (iVar24 = uVar3, uVar34 != 0)))) {
          iVar24 = local_60._4_4_;
        }
        iVar16 = uVar3;
        if ((((uVar25 + 1 & 3) != 0) &&
            (iVar21 = (int)(uVar25 + 1) % 4, iVar16 = local_68._4_4_, iVar21 != 1)) &&
           (iVar16 = local_60._4_4_, iVar21 == 2)) {
          iVar16 = local_60._0_4_;
        }
        uVar13 = *(ulong *)(this + 8);
        uVar17 = *(ulong *)(this + 0x10);
        if (uVar13 < uVar17) {
          *(ulong *)(this + 8) = uVar13 + 1;
          piVar2 = (int *)(*(long *)this + uVar13 * 0xc);
          *piVar2 = iVar24;
          piVar2[1] = iVar20;
          piVar2[2] = iVar16;
        }
        else {
          if (uVar17 == 0) {
            sVar32 = 0x600;
            uVar36 = 0x80;
LAB_00102500:
            puVar11 = (undefined8 *)malloc(sVar32);
            puVar10 = *(undefined8 **)this;
            if (uVar13 == 0) {
LAB_00102529:
              if (puVar10 != (undefined8 *)0x0) goto LAB_0010295c;
            }
            else {
              sVar32 = uVar13 * 0xc;
              if ((long)sVar32 < 0xd) {
                if (sVar32 != 0xc) goto LAB_00102529;
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
              }
              else {
                puVar11 = (undefined8 *)memmove(puVar11,puVar10,sVar32);
              }
LAB_0010295c:
              free(puVar10);
              uVar13 = *(ulong *)(this + 8);
            }
            *(undefined8 **)this = puVar11;
            *(ulong *)(this + 0x10) = uVar36;
          }
          else {
            uVar36 = uVar17 * 2;
            if (uVar17 < uVar36) {
              sVar32 = uVar17 * 0x18;
              goto LAB_00102500;
            }
            puVar11 = *(undefined8 **)this;
          }
          *(ulong *)(this + 8) = uVar13 + 1;
          piVar2 = (int *)((long)puVar11 + uVar13 * 0xc);
          *piVar2 = iVar24;
          piVar2[1] = iVar20;
          piVar2[2] = iVar16;
        }
      }
      puVar44 = puVar44 + 1;
    } while ((uint *)&uStack_50 != puVar44);
    goto LAB_0010176d;
  }
  uVar37 = uVar25 & 3;
  uVar31 = uVar25 + 2 & 3;
  uVar22 = uVar25 + 3 & 3;
  uVar15 = uVar25 + 3 & 3;
  if (uVar25 == 1) {
    puVar11 = (undefined8 *)((long)local_60 + 4);
    iVar20 = (int)(((uint)((ulong)((long)param_7 >> 0x20) >> 0x1f) & 1) + local_170) >> 1;
LAB_00101a59:
    puVar10 = (undefined8 *)local_68;
LAB_00101a61:
    if (uVar25 == 1) {
      param_5 = uVar13 & 0xffffffff;
      param_9 = param_9 >> 8 & 0xff;
    }
    else {
LAB_0010182e:
      param_5 = (long)param_6 >> 0x20 & 0xffffffff;
      param_9 = (uint)bVar19;
    }
  }
  else if (uVar25 == 2) {
    param_5 = param_6 & 0xffffffff;
    puVar10 = (undefined8 *)((long)local_68 + 4);
    puVar11 = (undefined8 *)local_68;
    iVar20 = (int)(((uint)(param_8 >> 0x1f) & 1) + uVar43) >> 1;
    param_9 = param_9 >> 0x10 & 0xff;
  }
  else {
    if (uVar25 != 0) {
      iVar20 = (int)(((uint)((ulong)((long)param_8 >> 0x20) >> 0x1f) & 1) + uVar30) >> 1;
      puVar11 = (undefined8 *)((long)local_68 + 4);
      if ((uVar31 != 1) && (puVar11 = (undefined8 *)local_60, uVar31 != 2)) {
        puVar11 = (undefined8 *)local_68;
        if (uVar31 != 0) {
          puVar11 = (undefined8 *)((long)local_60 + 4);
        }
      }
      if (uVar22 == 1) {
        puVar10 = (undefined8 *)((long)local_68 + 4);
      }
      else {
        if (uVar22 == 2) {
          puVar10 = (undefined8 *)local_60;
          goto LAB_00101a61;
        }
        if (uVar22 == 0) goto LAB_00101a59;
        puVar10 = (undefined8 *)((long)local_60 + 4);
      }
      goto LAB_0010182e;
    }
    puVar10 = (undefined8 *)((long)local_60 + 4);
    puVar11 = (undefined8 *)local_60;
    iVar20 = (int)(((uint)(param_7 >> 0x1f) & 1) + uVar39) >> 1;
  }
  uVar3 = *(undefined4 *)puVar10;
  uVar4 = *(undefined4 *)puVar11;
  uVar17 = *(ulong *)(this + 0x10);
  iVar24 = -iVar20;
  if ((char)param_9 != '\0') {
    iVar24 = iVar20;
  }
  iVar24 = iVar24 + (int)param_5;
  uVar36 = *(ulong *)(this + 8);
  if (uVar36 < uVar17) {
    *(ulong *)(this + 8) = uVar36 + 1;
    puVar11 = (undefined8 *)(*(long *)this + uVar36 * 0xc);
    *(int *)(puVar11 + 1) = iVar24;
    *puVar11 = CONCAT44(uVar3,uVar4);
  }
  else {
    if (uVar17 == 0) {
      sVar32 = 0x600;
      uVar35 = 0x80;
LAB_0010247c:
      puVar11 = (undefined8 *)malloc(sVar32);
      puVar10 = *(undefined8 **)this;
      if (uVar36 == 0) {
LAB_001024c0:
        if (puVar10 != (undefined8 *)0x0) goto LAB_001028f7;
      }
      else {
        sVar32 = uVar36 * 0xc;
        if ((long)sVar32 < 0xd) {
          if (sVar32 != 0xc) goto LAB_001024c0;
          *puVar11 = *puVar10;
          *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
        }
        else {
          memmove(puVar11,puVar10,sVar32);
        }
LAB_001028f7:
        free(puVar10);
        uVar36 = *(ulong *)(this + 8);
      }
      *(undefined8 **)this = puVar11;
      *(ulong *)(this + 0x10) = uVar35;
    }
    else {
      uVar35 = uVar17 * 2;
      if (uVar17 < uVar35) {
        sVar32 = uVar17 * 0x18;
        goto LAB_0010247c;
      }
      puVar11 = *(undefined8 **)this;
    }
    *(ulong *)(this + 8) = uVar36 + 1;
    puVar11 = (undefined8 *)((long)puVar11 + uVar36 * 0xc);
    *(int *)(puVar11 + 1) = iVar24;
    *puVar11 = CONCAT44(uVar3,uVar4);
  }
  uVar34 = uVar25 + 1 & 3;
  uVar22 = local_68._4_4_;
  if (uVar37 == 1) {
LAB_001018ae:
    if (-1 < iVar20) {
LAB_001018ba:
      uVar17 = uVar13 & 0xffffffff;
      uVar13 = uVar13 & 0xffffffff;
      uVar37 = uVar41;
      do {
        uVar42 = (uint)uVar17;
        uVar38 = (uint)uVar13;
        if (uVar25 == 0) {
          if (bVar9 == 0) {
            puVar11 = (undefined8 *)((long)local_60 + 4);
            uVar40 = (uVar26 - uVar12) + uVar38;
          }
          else {
            puVar11 = (undefined8 *)((long)local_60 + 4);
            uVar40 = (uVar26 - uVar12) + uVar42;
          }
        }
        else if (uVar25 == 1) {
          if ((byte)local_13c == 0) {
            puVar11 = (undefined8 *)local_68;
            uVar40 = uVar38;
          }
          else {
            puVar11 = (undefined8 *)local_68;
            uVar40 = uVar42;
          }
        }
        else if (uVar25 == 2) {
          if (bVar18 == 0) {
            puVar11 = (undefined8 *)((long)local_68 + 4);
            uVar40 = (uVar33 - uVar12) + uVar38;
          }
          else {
            puVar11 = (undefined8 *)((long)local_68 + 4);
            uVar40 = (uVar33 - uVar12) + uVar42;
          }
        }
        else {
          puVar11 = (undefined8 *)local_60;
          uVar40 = uVar37;
          if (uVar15 != 2) {
            if (uVar15 == 3) {
              puVar11 = (undefined8 *)((long)local_60 + 4);
            }
            else {
              puVar11 = (undefined8 *)local_68;
              if (uVar15 != 0) {
                puVar11 = (undefined8 *)((long)local_68 + 4);
              }
            }
          }
        }
        uVar3 = *(undefined4 *)puVar11;
        uVar13 = *(ulong *)(this + 8);
        uVar17 = *(ulong *)(this + 0x10);
        if (uVar13 < uVar17) {
          *(ulong *)(this + 8) = uVar13 + 1;
          puVar11 = (undefined8 *)(*(long *)this + uVar13 * 0xc);
          *(uint *)(puVar11 + 1) = uVar40;
          *puVar11 = CONCAT44(uVar22,uVar3);
        }
        else {
          if (uVar17 == 0) {
            sVar32 = 0x600;
            uVar36 = 0x80;
LAB_00101cab:
            puVar11 = (undefined8 *)malloc(sVar32);
            puVar10 = *(undefined8 **)this;
            if (uVar13 == 0) {
LAB_00101d1a:
              if (puVar10 != (undefined8 *)0x0) goto LAB_00102381;
            }
            else {
              sVar32 = uVar13 * 0xc;
              if ((long)sVar32 < 0xd) {
                if (sVar32 != 0xc) goto LAB_00101d1a;
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
              }
              else {
                puVar11 = (undefined8 *)memmove(puVar11,puVar10,sVar32);
              }
LAB_00102381:
              free(puVar10);
              uVar13 = *(ulong *)(this + 8);
            }
            *(undefined8 **)this = puVar11;
            *(ulong *)(this + 0x10) = uVar36;
          }
          else {
            uVar36 = uVar17 * 2;
            if (uVar17 < uVar36) {
              sVar32 = uVar17 * 0x18;
              goto LAB_00101cab;
            }
            puVar11 = *(undefined8 **)this;
          }
          *(ulong *)(this + 8) = uVar13 + 1;
          puVar11 = (undefined8 *)((long)puVar11 + uVar13 * 0xc);
          *(uint *)(puVar11 + 1) = uVar40;
          *puVar11 = CONCAT44(uVar22,uVar3);
        }
        if (uVar38 - 1 == (uVar12 - 1) - iVar20) break;
        uVar37 = uVar37 + (-(uint)(bVar19 == 0) | 1);
        uVar17 = (ulong)(uVar42 + 1);
        uVar13 = (ulong)(uVar38 - 1);
        uVar22 = uVar40;
      } while( true );
    }
    if (uVar34 == 1) {
LAB_001025e8:
      uVar15 = local_68._4_4_;
LAB_00101af8:
      if (uVar25 != 1) goto LAB_00101afd;
    }
    else {
LAB_00101add:
      if (uVar34 == 2) {
        uVar15 = local_60._0_4_;
        if (uVar25 == 1) goto LAB_00101b1d;
      }
      else {
        if (uVar34 == 0) {
          uVar15 = local_68._0_4_;
          goto LAB_00101af8;
        }
        uVar15 = local_60._4_4_;
      }
      local_170 = uVar43;
      if (uVar25 != 2) goto LAB_00101d4c;
    }
  }
  else {
    if (uVar37 != 2) {
      if (uVar37 != 0) {
        uVar22 = local_60._4_4_;
        goto LAB_001018ae;
      }
      uVar22 = local_68._0_4_;
      if (-1 < iVar20) goto LAB_001018ba;
      uVar15 = local_68._0_4_;
      if (uVar34 == 1) goto LAB_001025e8;
      goto LAB_00101af8;
    }
    uVar22 = local_60._0_4_;
    if (-1 < iVar20) goto LAB_001018ba;
    uVar15 = local_68._4_4_;
    if (uVar34 != 1) goto LAB_00101add;
LAB_00101afd:
    local_170 = uVar43;
    if ((uVar25 != 2) && (local_170 = uVar39, uVar25 != 0)) {
LAB_00101d4c:
      local_170 = uVar30;
    }
  }
LAB_00101b1d:
  if (iVar20 <= (int)(local_170 - 1)) {
    uVar43 = (local_170 - 1) + uVar33;
    uVar39 = (uVar33 + 1) - local_170;
    uVar22 = -(uint)(bVar19 == 0) | 1;
    uVar41 = (local_170 - 1) * uVar22 + uVar41;
    do {
      if (uVar25 == 0) {
        if (bVar9 == 0) {
          puVar11 = (undefined8 *)local_60;
          uVar37 = (uVar26 - uVar33) + uVar39;
        }
        else {
          puVar11 = (undefined8 *)local_60;
          uVar37 = (uVar26 - uVar33) + uVar43;
        }
      }
      else if (uVar25 == 1) {
        if ((byte)local_13c == 0) {
          puVar11 = (undefined8 *)((long)local_60 + 4);
          uVar37 = (uVar12 - uVar33) + uVar39;
        }
        else {
          puVar11 = (undefined8 *)((long)local_60 + 4);
          uVar37 = (uVar12 - uVar33) + uVar43;
        }
      }
      else if (uVar25 == 2) {
        if (bVar18 == 0) {
          puVar11 = (undefined8 *)local_68;
          uVar37 = uVar39;
        }
        else {
          puVar11 = (undefined8 *)local_68;
          uVar37 = uVar43;
        }
      }
      else {
        puVar11 = (undefined8 *)((long)local_68 + 4);
        uVar37 = uVar41;
        if (uVar31 != 1) {
          if (uVar31 == 2) {
            puVar11 = (undefined8 *)local_60;
          }
          else {
            puVar11 = (undefined8 *)local_68;
            if (uVar31 != 0) {
              puVar11 = (undefined8 *)((long)local_60 + 4);
            }
          }
        }
      }
      uVar3 = *(undefined4 *)puVar11;
      uVar13 = *(ulong *)(this + 8);
      uVar17 = *(ulong *)(this + 0x10);
      if (uVar13 < uVar17) {
        *(ulong *)(this + 8) = uVar13 + 1;
        puVar11 = (undefined8 *)(*(long *)this + uVar13 * 0xc);
        *(uint *)(puVar11 + 1) = uVar15;
        *puVar11 = CONCAT44(uVar37,uVar3);
      }
      else {
        if (uVar17 == 0) {
          local_178 = 0x80;
          sVar32 = 0x600;
LAB_00101e16:
          puVar11 = (undefined8 *)malloc(sVar32);
          puVar10 = *(undefined8 **)this;
          if (uVar13 == 0) {
LAB_00101e67:
            if (puVar10 != (undefined8 *)0x0) goto LAB_001022e2;
          }
          else {
            sVar32 = uVar13 * 0xc;
            if ((long)sVar32 < 0xd) {
              if (sVar32 != 0xc) goto LAB_00101e67;
              *puVar11 = *puVar10;
              *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
            }
            else {
              puVar11 = (undefined8 *)memmove(puVar11,puVar10,sVar32);
            }
LAB_001022e2:
            free(puVar10);
            uVar13 = *(ulong *)(this + 8);
          }
          *(undefined8 **)this = puVar11;
          *(ulong *)(this + 0x10) = local_178;
        }
        else {
          local_178 = uVar17 * 2;
          if (uVar17 < local_178) {
            sVar32 = uVar17 * 0x18;
            goto LAB_00101e16;
          }
          puVar11 = *(undefined8 **)this;
        }
        *(ulong *)(this + 8) = uVar13 + 1;
        puVar11 = (undefined8 *)((long)puVar11 + uVar13 * 0xc);
        *(uint *)(puVar11 + 1) = uVar15;
        *puVar11 = CONCAT44(uVar37,uVar3);
      }
      uVar39 = uVar39 + 1;
      uVar41 = uVar41 - uVar22;
      uVar43 = uVar43 - 1;
      uVar15 = uVar37;
    } while (uVar39 != (uVar33 + 1) - iVar20);
  }
LAB_0010176d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (anonymous namespace)::Partition::GetPartition(linalg::vec<int, 4>) */

undefined1 (*) [16]
(anonymous_namespace)::Partition::GetPartition
          (undefined1 (*param_1) [16],ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  Partition *pPVar11;
  Partition *pPVar12;
  Partition *pPVar13;
  Partition *pPVar14;
  undefined8 *puVar15;
  long *plVar16;
  void *__s;
  undefined *puVar17;
  undefined8 *puVar18;
  int iVar19;
  int *piVar20;
  Partition *pPVar21;
  int iVar22;
  Partition *extraout_RDX;
  ulong uVar23;
  undefined1 auVar24 [8];
  Partition *extraout_RDX_00;
  undefined1 auVar25 [8];
  Partition *extraout_RDX_01;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  Partition *in_R10;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  undefined1 auVar35 [8];
  size_t sVar36;
  uint uVar37;
  Partition *pPVar38;
  int iVar39;
  ulong uVar40;
  long in_FS_OFFSET;
  undefined1 uVar41;
  Partition *pPVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  Partition *pPVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  Partition *local_1d8;
  long lStack_1d0;
  Partition *local_1c8;
  double dStack_1c0;
  Partition *local_1b8;
  Partition *local_1a8;
  Partition *local_198;
  undefined1 (*local_190) [16];
  Partition *local_188;
  Partition *local_180;
  uint local_170;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  Partition *local_88;
  undefined1 local_80 [16];
  Partition *local_70;
  undefined1 local_68 [8];
  Partition *pPStack_60;
  Partition *local_58;
  undefined8 uStack_50;
  Partition local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)param_2;
  if (uVar8 != 0) {
    uStack_f0 = (uint)param_3;
    uVar29 = uStack_f0;
    uStack_ec = (uint)(param_3 >> 0x20);
    uVar5 = uStack_ec;
    uStack_f4 = (uint)(param_2 >> 0x20);
    uVar33 = uStack_f4;
    local_f8 = uVar8;
    if (uStack_ec == 0) {
      if ((int)uStack_f4 < (int)uStack_f0) {
        uVar29 = 1;
        uVar31 = 2;
        uStack_f4 = uStack_f0;
        uStack_f0 = uVar33;
      }
      else {
        uVar29 = 2;
        uVar31 = 1;
      }
      uVar37 = 3;
      uVar27 = 0;
      uVar28 = uVar29;
      if ((int)uVar8 < (int)uStack_f4) {
        uVar27 = uVar31;
        local_f8 = uStack_f4;
        if ((int)uVar8 < (int)uStack_f0) {
          uStack_f4 = uStack_f0;
          uVar28 = 0;
          uVar31 = uVar29;
          uStack_f0 = uVar8;
        }
        else {
          uVar31 = 0;
          uStack_f4 = uVar8;
        }
      }
    }
    else {
      iVar9 = 0;
      iVar22 = 0;
      uStack_50 = CONCAT44(uStack_50._4_4_,3);
      uVar40 = (long)param_2 >> 0x20;
      local_58 = (Partition *)_LC2;
      pPVar14 = (Partition *)&local_58;
      uVar34 = uVar40 & 0xffffffff;
      uVar23 = param_2;
      pPVar13 = pPVar14;
      do {
        iVar39 = *(int *)pPVar13;
        uVar32 = param_2 & 0xffffffff;
        if ((((iVar39 + 1U & 3) != 0) &&
            (iVar19 = (int)(iVar39 + 1U) % 4, uVar32 = uVar34, iVar19 != 1)) &&
           (uVar32 = (ulong)uStack_ec, iVar19 == 2)) {
          uVar32 = param_3 & 0xffffffff;
        }
        uVar27 = (uint)uVar23;
        iVar30 = (int)uVar32;
        iVar19 = (int)uVar40;
        if (iVar39 == 1) {
          if ((int)uStack_f4 < (int)uVar27) {
            uVar23 = uVar34;
            uVar40 = uVar32;
            iVar22 = 1;
            iVar9 = 1;
          }
          else if ((iVar30 < iVar19) &&
                  (uVar40 = uVar40 & 0xffffffff, iVar22 = iVar9, uStack_f4 == uVar27)) {
            uVar40 = uVar32;
            iVar22 = iVar39;
            iVar9 = iVar39;
          }
        }
        else if (iVar39 == 2) {
          if ((int)uStack_f0 < (int)uVar27) {
            uVar23 = param_3 & 0xffffffff;
            uVar40 = uVar32;
            iVar22 = 2;
            iVar9 = 2;
          }
          else if ((iVar30 < iVar19) &&
                  (uVar40 = uVar40 & 0xffffffff, iVar22 = iVar9, uStack_f0 == uVar27)) {
            uVar40 = uVar32;
            iVar22 = iVar39;
            iVar9 = iVar39;
          }
        }
        else if (iVar39 == 0) {
          if ((int)uVar8 < (int)uVar27) {
            uVar23 = param_2 & 0xffffffff;
            uVar40 = uVar32;
            iVar22 = 0;
            iVar9 = 0;
          }
          else if ((iVar30 < iVar19) &&
                  (uVar40 = uVar40 & 0xffffffff, iVar22 = iVar9, uVar8 == uVar27)) {
            uVar40 = uVar32;
            iVar22 = iVar39;
            iVar9 = iVar39;
          }
        }
        else if ((int)uStack_ec < (int)uVar27) {
          uVar23 = (ulong)uStack_ec;
          uVar40 = uVar32;
          iVar22 = iVar39;
          iVar9 = iVar39;
        }
        else if ((iVar30 < iVar19) &&
                (uVar40 = uVar40 & 0xffffffff, iVar22 = iVar9, uStack_ec == uVar27)) {
          uVar40 = uVar32;
          iVar22 = iVar39;
          iVar9 = iVar39;
        }
        pPVar13 = pPVar13 + 4;
      } while (pPVar13 != (Partition *)((long)&uStack_50 + 4));
      local_1d8 = (Partition *)(ulong)uStack_ec;
      uVar37 = 3;
      uVar28 = 2;
      uVar27 = 0;
      pPVar13 = (Partition *)0x1;
      local_58 = _LC1;
      uStack_50 = _UNK_00108c58;
      do {
        iVar9 = *(int *)pPVar14;
        uVar31 = iVar22 + iVar9;
        uVar7 = (int)uVar31 % 4;
        in_R10 = (Partition *)(ulong)uVar7;
        uVar26 = uVar8;
        if (iVar9 == 1) {
          uVar26 = uVar33;
          if (((uVar7 != 1) && (uVar26 = uVar29, uVar7 != 2)) && (uVar26 = uVar5, (uVar31 & 3) == 0)
             ) {
            in_R10 = (Partition *)0x0;
            uVar26 = uVar8;
          }
          puVar10 = &uStack_f4;
          pPVar13 = in_R10;
          goto LAB_00102e1d;
        }
        if (iVar9 == 2) {
          if (uVar7 == 1) {
            uVar28 = 1;
            uVar26 = uVar33;
          }
          else if (uVar7 == 2) {
            uVar28 = 2;
            uVar26 = uVar29;
          }
          else {
            uVar28 = uVar31 & 3;
            if ((uVar31 & 3) != 0) {
              uVar28 = uVar7;
              uVar26 = uVar5;
            }
          }
LAB_00103390:
          puVar10 = &uStack_f0;
        }
        else if (iVar9 == 0) {
          if (uVar7 == 1) {
            uVar27 = 1;
            uVar26 = uVar33;
          }
          else if (uVar7 == 2) {
            uVar27 = 2;
            uVar26 = uVar29;
          }
          else {
            uVar27 = uVar31 & 3;
            if ((uVar31 & 3) != 0) {
              uVar26 = uVar5;
              uVar27 = uVar7;
            }
          }
LAB_00102e15:
          puVar10 = &local_f8;
        }
        else if (uVar7 == 1) {
          uVar37 = 1;
          puVar10 = &uStack_ec;
          uVar26 = uVar33;
        }
        else {
          if (uVar7 == 2) {
            uVar37 = 2;
            uVar26 = uVar29;
          }
          else {
            uVar37 = uVar7;
            uVar26 = uVar5;
            if ((uVar31 & 3) == 0) {
              puVar10 = &uStack_ec;
              uVar37 = 0;
              uVar26 = uVar8;
              goto LAB_00102e1d;
            }
          }
          if (iVar9 == 2) goto LAB_00103390;
          puVar10 = &uStack_ec;
          if (iVar9 == 0) goto LAB_00102e15;
        }
LAB_00102e1d:
        uVar31 = (uint)pPVar13;
        pPVar14 = pPVar14 + 4;
        *puVar10 = uVar26;
      } while (pPVar14 != local_48);
    }
    local_e8 = (double)CONCAT44(uStack_f4,local_f8);
    uStack_e0 = (double)CONCAT44(uStack_ec,uStack_f0);
    uVar8 = pthread_mutex_lock((pthread_mutex_t *)cacheLock);
    pPVar14 = (Partition *)(ulong)uVar8;
    if (uVar8 != 0) {
      std::__throw_system_error(uVar8);
      goto LAB_0010519d;
    }
    pPVar13 = DAT_00108770;
    if (DAT_00108778 == (Partition *)0x0) {
      for (; pPVar13 != (Partition *)0x0; pPVar13 = *(Partition **)pPVar13) {
        if ((((uint)local_e8 == *(uint *)(pPVar13 + 8)) &&
            (local_e8._4_4_ == *(uint *)(pPVar13 + 0xc))) &&
           (((uint)uStack_e0 == *(uint *)(pPVar13 + 0x10) &&
            (uStack_e0._4_4_ == *(uint *)(pPVar13 + 0x14))))) goto LAB_00102edf;
      }
    }
    else {
      uVar23 = (ulong)(int)((uint)local_e8 ^ local_e8._4_4_ ^ (uint)uStack_e0 ^ uStack_e0._4_4_);
      puVar15 = (undefined8 *)
                std::
                _Hashtable<linalg::vec<int,4>,std::pair<linalg::vec<int,4>const,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>>,std::allocator<std::pair<linalg::vec<int,4>const,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>>>,std::__detail::_Select1st,std::equal_to<linalg::vec<int,4>>,std::hash<linalg::vec<int,4>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                ::_M_find_before_node(uVar23 % (ulong)DAT_00108768,(vec *)&local_e8,uVar23);
      if ((puVar15 != (undefined8 *)0x0) &&
         (pPVar13 = (Partition *)*puVar15, pPVar13 != (Partition *)0x0)) {
LAB_00102edf:
        lVar1 = *(long *)(pPVar13 + 0x18);
        pPVar14 = (Partition *)0x0;
        local_1d8 = *(Partition **)(lVar1 + 0x28);
        local_1c8 = *(Partition **)(lVar1 + 0x10);
        dStack_1c0 = *(double *)(lVar1 + 0x18);
        puVar15 = *(undefined8 **)(lVar1 + 0x20);
        if (local_1d8 != (Partition *)0x0) {
          sVar36 = (long)local_1d8 * 0x20;
          pPVar14 = (Partition *)malloc(sVar36);
          if ((long)sVar36 < 0x21) {
            if (sVar36 == 0x20) {
              uVar2 = puVar15[1];
              *(undefined8 *)pPVar14 = *puVar15;
              *(undefined8 *)(pPVar14 + 8) = uVar2;
              uVar2 = puVar15[3];
              *(undefined8 *)(pPVar14 + 0x10) = puVar15[2];
              *(undefined8 *)(pPVar14 + 0x18) = uVar2;
            }
          }
          else {
            memmove(pPVar14,puVar15,sVar36);
          }
        }
        local_1e8 = *(undefined1 (*) [8])(lVar1 + 0x40);
        puVar15 = *(undefined8 **)(lVar1 + 0x38);
        pPVar13 = (Partition *)0x0;
        if (local_1e8 != (undefined1  [8])0x0) {
          sVar36 = (long)local_1e8 * 0xc;
          pPVar13 = (Partition *)malloc(sVar36);
          if ((long)sVar36 < 0xd) {
            if (sVar36 == 0xc) {
              *(undefined8 *)pPVar13 = *puVar15;
              *(undefined4 *)(pPVar13 + 8) = *(undefined4 *)(puVar15 + 1);
            }
          }
          else {
            memmove(pPVar13,puVar15,sVar36);
          }
        }
        pthread_mutex_unlock((pthread_mutex_t *)cacheLock);
        uStack_1e0 = (Partition *)local_1e8;
        lStack_1d0 = (long)local_1d8;
        goto LAB_00102f38;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)cacheLock);
    uVar8 = uStack_e0._4_4_;
    auVar24 = (undefined1  [8])(ulong)uStack_e0._4_4_;
    local_a8 = (undefined1  [16])0x0;
    local_88 = (Partition *)0x0;
    local_70 = (Partition *)0x0;
    local_80 = (undefined1  [16])0x0;
    local_68 = (undefined1  [8])0x0;
    pPStack_60 = (Partition *)0x0;
    local_98 = local_e8;
    dStack_90 = uStack_e0;
    local_190 = param_1;
    if (0 < (int)uStack_e0._4_4_) {
      local_88 = (Partition *)malloc(0x1000);
      uVar3 = _UNK_00108c88;
      uVar2 = __LC6;
      dVar43 = _LC3;
      local_198 = local_48;
      pPVar13 = (Partition *)&local_58;
      local_80._8_8_ = _UNK_00108c68;
      local_80._0_8_ = __LC4;
      *(undefined1 (*) [16])(local_88 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(local_88 + 0x30) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(local_88 + 0x40) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(local_88 + 0x60) = (undefined1  [16])0x0;
      uStack_50 = _UNK_00108c58;
      local_58 = _LC1;
      local_d8 = __LC7;
      uStack_d0 = _UNK_00108c98;
      *(double *)local_88 = dVar43;
      *(undefined8 *)(local_88 + 8) = 0;
      *(undefined8 *)(local_88 + 0x20) = uVar2;
      *(undefined8 *)(local_88 + 0x28) = uVar3;
      *(double *)(local_88 + 0x50) = dVar43;
      *(undefined8 *)(local_88 + 0x58) = 0;
      *(undefined8 *)(local_88 + 0x70) = uVar2;
      *(undefined8 *)(local_88 + 0x78) = uVar3;
      in_R10 = pPVar13;
      do {
        uVar33 = *(uint *)pPVar13;
        pPVar38 = (Partition *)(ulong)uVar33;
        if (0 < (int)uVar33) {
          if (uVar33 == 2) {
            piVar20 = (int *)&uStack_d0;
            iVar22 = local_e8._4_4_ + local_d8._4_4_ + -1;
          }
          else if (uVar33 == 3) {
            piVar20 = (int *)((long)&uStack_d0 + 4);
            iVar22 = (uint)uStack_e0 + (int)uStack_d0 + -1;
          }
          else if (uVar33 == 1) {
            piVar20 = (int *)((long)&local_d8 + 4);
            iVar22 = (uint)local_e8 + (int)local_d8 + -1;
          }
          else {
            piVar20 = (int *)((long)&uStack_d0 + 4);
            iVar22 = uStack_d0._4_4_ + uVar8 + -1;
          }
          *piVar20 = iVar22;
        }
        auVar35 = (undefined1  [8])0x1;
        pPVar11 = local_88 + (long)((int)(uVar33 + 1) % 4) * 0x20;
        local_c8 = *(double *)pPVar11;
        dStack_c0 = *(double *)(pPVar11 + 8);
        local_b8 = *(double *)(pPVar11 + 0x10);
        dStack_b0 = *(double *)(pPVar11 + 0x18);
        while( true ) {
          pPVar11 = local_88;
          iVar22 = SUB84(auVar35,0);
          uVar29 = local_e8._4_4_;
          if (((uVar33 != 1) && (uVar29 = (uint)uStack_e0, uVar33 != 2)) &&
             (uVar29 = (uint)local_e8, uVar33 != 0)) {
            uVar29 = uVar8;
          }
          if ((int)uVar29 <= iVar22) break;
          pPVar21 = (Partition *)local_80._0_8_;
          pPVar14 = local_88 + (long)(int)uVar33 * 0x20;
          dVar46 = (double)iVar22 / (double)(int)uVar29;
          dVar52 = dVar43 - dVar46;
          pPVar47 = (Partition *)(*(double *)pPVar14 * dVar52 + local_c8 * dVar46);
          dVar50 = *(double *)(pPVar14 + 8) * dVar52 + dStack_c0 * dVar46;
          pPVar42 = (Partition *)(dVar46 * local_b8 + dVar52 * *(double *)(pPVar14 + 0x10));
          dVar46 = dVar46 * dStack_b0 + dVar52 * *(double *)(pPVar14 + 0x18);
          if ((ulong)local_80._0_8_ < (ulong)local_80._8_8_) {
            pPVar14 = (Partition *)(local_80._0_8_ * 0x20);
            pPVar11 = local_88 + (long)pPVar14;
            local_80._0_8_ = (Partition *)(local_80._0_8_ + 1);
            *(Partition **)pPVar11 = pPVar47;
            *(double *)(pPVar11 + 8) = dVar50;
            *(Partition **)(pPVar11 + 0x10) = pPVar42;
            *(double *)(pPVar11 + 0x18) = dVar46;
          }
          else {
            if ((Partition *)local_80._8_8_ == (Partition *)0x0) {
              sVar36 = 0x1000;
              pPVar14 = (Partition *)0x80;
LAB_00103313:
              pPVar12 = (Partition *)malloc(sVar36);
              if (pPVar21 == (Partition *)0x0) {
LAB_00103360:
                local_1d8 = (Partition *)((long)(int)uVar33 * 0x20);
                local_1c8 = pPVar14;
                if (pPVar11 != (Partition *)0x0) goto LAB_00103497;
              }
              else {
                sVar36 = (long)pPVar21 * 0x20;
                if ((long)sVar36 < 0x21) {
                  if (sVar36 != 0x20) goto LAB_00103360;
                  uVar2 = *(undefined8 *)(pPVar11 + 8);
                  *(undefined8 *)pPVar12 = *(undefined8 *)pPVar11;
                  *(undefined8 *)(pPVar12 + 8) = uVar2;
                  uVar2 = *(undefined8 *)(pPVar11 + 0x18);
                  *(undefined8 *)(pPVar12 + 0x10) = *(undefined8 *)(pPVar11 + 0x10);
                  *(undefined8 *)(pPVar12 + 0x18) = uVar2;
                }
                else {
                  pPVar12 = (Partition *)memmove(pPVar12,pPVar11,sVar36);
                }
LAB_00103497:
                free(pPVar11);
                pPVar21 = (Partition *)local_80._0_8_;
                local_1d8 = pPVar14;
                local_1c8 = pPVar12;
              }
              local_88 = pPVar12;
              dVar43 = _LC3;
              local_1b8 = pPVar47;
              local_1a8 = pPVar42;
              local_80._8_8_ = pPVar14;
            }
            else {
              pPVar14 = (Partition *)(local_80._8_8_ * 2);
              if ((ulong)local_80._8_8_ < pPVar14) {
                sVar36 = local_80._8_8_ << 6;
                goto LAB_00103313;
              }
            }
            pPVar14 = local_88 + (long)pPVar21 * 0x20;
            local_80._0_8_ = pPVar21 + 1;
            *(Partition **)pPVar14 = pPVar47;
            *(double *)(pPVar14 + 8) = dVar50;
            *(Partition **)(pPVar14 + 0x10) = pPVar42;
            *(double *)(pPVar14 + 0x18) = dVar46;
          }
          auVar35 = (undefined1  [8])(ulong)(iVar22 + 1);
        }
        pPVar13 = pPVar13 + 4;
      } while (pPVar13 != local_198);
      pPVar13 = (Partition *)&local_88;
      pPVar11 = (Partition *)&DAT_300000002;
      local_1e8 = (undefined1  [8])CONCAT44(local_e8._4_4_ - 1,(uint)local_e8 - 1);
      uStack_1e0 = (Partition *)CONCAT44(uVar8 - 1,(uint)uStack_e0 - 1);
      PartitionQuad((Partition *)&local_70,pPVar13,0x100000000,&DAT_300000002,local_d8,uStack_d0,
                    local_1e8,uStack_1e0,0x1010101);
      goto LAB_0010364c;
    }
    pPVar14 = (Partition *)&local_58;
    local_88 = (Partition *)malloc(0x1000);
    uVar3 = _UNK_00108c88;
    uVar2 = __LC6;
    dVar43 = _LC3;
    uStack_50 = CONCAT44(uStack_50._4_4_,2);
    local_58 = _LC1;
    local_1a8 = (Partition *)((long)&uStack_50 + 4);
    local_80._8_8_ = _UNK_00108ca8;
    local_80._0_8_ = __LC8;
    local_198 = (Partition *)0x0;
    *(double *)local_88 = _LC3;
    *(undefined8 *)(local_88 + 8) = 0;
    *(undefined1 (*) [16])(local_88 + 0x10) = (undefined1  [16])0x0;
    *(undefined8 *)(local_88 + 0x20) = uVar2;
    *(undefined8 *)(local_88 + 0x28) = uVar3;
    *(undefined1 (*) [16])(local_88 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_88 + 0x40) = (undefined1  [16])0x0;
    *(double *)(local_88 + 0x50) = dVar43;
    *(undefined8 *)(local_88 + 0x58) = 0;
    do {
      iVar22 = *(int *)pPVar14;
      auVar35 = (undefined1  [8])((long)iVar22 * 0x20);
      pPVar13 = local_88 + (long)((iVar22 + 1) % 3) * 0x20;
      local_c8 = *(double *)pPVar13;
      dStack_c0 = *(double *)(pPVar13 + 8);
      local_b8 = *(double *)(pPVar13 + 0x10);
      dStack_b0 = *(double *)(pPVar13 + 0x18);
      if (iVar22 == 1) {
        iVar9 = 1;
        goto LAB_001041c7;
      }
      if (iVar22 == 2) {
        iVar39 = 1;
        goto LAB_001040c0;
      }
      if (iVar22 == 0) {
        iVar39 = 1;
LAB_00104175:
        iVar9 = (uint)local_e8;
        if (iVar39 < (int)(uint)local_e8) {
          do {
            while( true ) {
              pPVar38 = local_88;
              pPVar11 = (Partition *)local_80._0_8_;
              pPVar13 = local_88 + (long)auVar35;
              dVar50 = (double)iVar39 / (double)iVar9;
              dVar46 = dVar43 - dVar50;
              pPVar42 = (Partition *)(local_c8 * dVar50 + *(double *)pPVar13 * dVar46);
              dVar52 = dStack_c0 * dVar50 + *(double *)(pPVar13 + 8) * dVar46;
              pPVar21 = (Partition *)(dVar50 * local_b8 + dVar46 * *(double *)(pPVar13 + 0x10));
              dVar46 = dVar50 * dStack_b0 + dVar46 * *(double *)(pPVar13 + 0x18);
              if ((ulong)local_80._0_8_ < (ulong)local_80._8_8_) break;
              if ((Partition *)local_80._8_8_ == (Partition *)0x0) {
                sVar36 = 0x1000;
                pPVar13 = (Partition *)0x80;
LAB_001041eb:
                in_R10 = (Partition *)malloc(sVar36);
                if (pPVar11 == (Partition *)0x0) {
LAB_0010422a:
                  local_1d8 = pPVar13;
                  if (pPVar38 != (Partition *)0x0) goto LAB_00104282;
                }
                else {
                  sVar36 = (long)pPVar11 * 0x20;
                  if ((long)sVar36 < 0x21) {
                    if (sVar36 != 0x20) goto LAB_0010422a;
                    uVar2 = *(undefined8 *)(pPVar38 + 8);
                    *(undefined8 *)in_R10 = *(undefined8 *)pPVar38;
                    *(undefined8 *)(in_R10 + 8) = uVar2;
                    uVar2 = *(undefined8 *)(pPVar38 + 0x18);
                    *(undefined8 *)(in_R10 + 0x10) = *(undefined8 *)(pPVar38 + 0x10);
                    *(undefined8 *)(in_R10 + 0x18) = uVar2;
                  }
                  else {
                    in_R10 = (Partition *)memmove(in_R10,pPVar38,sVar36);
                  }
LAB_00104282:
                  free(pPVar38);
                  pPVar11 = (Partition *)local_80._0_8_;
                  local_1d8 = in_R10;
                }
                local_88 = in_R10;
                dVar43 = _LC3;
                local_1c8 = pPVar21;
                local_1b8 = pPVar42;
                local_80._8_8_ = pPVar13;
              }
              else {
                pPVar13 = (Partition *)(local_80._8_8_ * 2);
                if ((ulong)local_80._8_8_ < pPVar13) {
                  sVar36 = local_80._8_8_ << 6;
                  goto LAB_001041eb;
                }
              }
              pPVar13 = local_88 + (long)pPVar11 * 0x20;
              local_80._0_8_ = pPVar11 + 1;
              *(Partition **)pPVar13 = pPVar42;
              *(double *)(pPVar13 + 8) = dVar52;
              *(Partition **)(pPVar13 + 0x10) = pPVar21;
              *(double *)(pPVar13 + 0x18) = dVar46;
              iVar9 = iVar39 + 1;
              if (iVar22 != 1) goto LAB_0010416c;
LAB_001041c7:
              iVar39 = iVar9;
              iVar9 = local_e8._4_4_;
              if ((int)local_e8._4_4_ <= iVar39) goto LAB_00103ab8;
            }
            pPVar13 = local_88 + local_80._0_8_ * 0x20;
            local_80._0_8_ = (Partition *)(local_80._0_8_ + 1);
            *(Partition **)pPVar13 = pPVar42;
            *(double *)(pPVar13 + 8) = dVar52;
            *(Partition **)(pPVar13 + 0x10) = pPVar21;
            *(double *)(pPVar13 + 0x18) = dVar46;
            iVar9 = iVar39 + 1;
            if (iVar22 == 1) goto LAB_001041c7;
LAB_0010416c:
            iVar39 = iVar39 + 1;
            if (iVar22 != 2) goto LAB_00104175;
LAB_001040c0:
            iVar9 = (uint)uStack_e0;
            if ((int)(uint)uStack_e0 <= iVar39) break;
          } while( true );
        }
      }
LAB_00103ab8:
      auVar25 = local_68;
      pPVar13 = local_70;
      pPVar11 = _LC1;
      pPVar14 = pPVar14 + 4;
    } while (pPVar14 != local_1a8);
    uVar8 = local_e8._4_4_;
    auVar24 = (undefined1  [8])(ulong)local_e8._4_4_;
    pPVar14 = (Partition *)0x0;
    local_1e8 = (undefined1  [8])((ulong)uStack_e0 & 0xffffffff);
    iVar22 = (uint)local_e8;
    pPVar38 = (Partition *)((ulong)local_e8 & 0xffffffff);
    if (local_e8._4_4_ != 1) {
      local_1b8 = (Partition *)(ulong)((uint)local_e8 + 2);
      local_170 = (uint)local_e8 + 2 + local_e8._4_4_;
      local_190 = (undefined1 (*) [16])(ulong)(local_170 - 1);
      iVar9 = (uint)uStack_e0 * (uint)uStack_e0;
      uVar33 = (uint)local_e8 - 2;
      auVar35 = (undefined1  [8])(ulong)uVar33;
      dVar43 = (double)(int)((uint)local_e8 * (uint)local_e8 + iVar9);
      local_1a8 = (Partition *)(ulong)((uint)local_e8 + 1);
      if (dVar43 - (double)(int)(uint)local_e8 * __LC9 * (double)(int)(uint)uStack_e0 <
          (double)(int)(local_e8._4_4_ * local_e8._4_4_)) {
        pPVar14 = local_70;
        pPVar11 = pPStack_60;
        if ((ulong)local_68 < pPStack_60) goto LAB_0010460a;
        if (pPStack_60 == (Partition *)0x0) goto LAB_00104d2b;
        sVar36 = (long)pPStack_60 * 0x18;
        pPVar21 = (Partition *)((long)pPStack_60 * 2);
        if (pPVar21 <= pPStack_60) goto LAB_0010460a;
        goto LAB_00104a97;
      }
      dVar43 = round((dVar43 - (double)(int)(local_e8._4_4_ * local_e8._4_4_)) /
                     (double)(int)((uint)local_e8 * 2));
      if ((int)dVar43 <= (int)uVar33) {
        uVar33 = (int)dVar43;
      }
      local_1c8 = (Partition *)(ulong)uVar33;
      dVar43 = (double)(int)(iVar9 - uVar33 * uVar33);
      if (dVar43 < 0.0) {
        dVar43 = sqrt(dVar43);
      }
      else {
        dVar43 = SQRT(dVar43);
      }
      dVar43 = round(dVar43);
      local_1d8 = (Partition *)(ulong)(uVar33 + 2);
      local_180 = (Partition *)(ulong)(uVar33 + 3);
      uVar4 = local_80._0_4_;
      if (dVar43 <= _LC3) {
        local_188 = (Partition *)0x0;
        uVar29 = 1;
      }
      else {
        uVar29 = (uint)dVar43;
        pPVar14 = local_88 + (long)(int)(uVar33 + 2) * 0x20;
        dVar43 = *(double *)pPVar14;
        dVar46 = *(double *)(pPVar14 + 8);
        dVar50 = *(double *)(pPVar14 + 0x10);
        dVar52 = *(double *)(pPVar14 + 0x18);
        local_188 = (Partition *)(ulong)(uVar29 - 1);
        local_c8 = dVar43;
        dStack_c0 = dVar46;
        local_b8 = dVar50;
        dStack_b0 = dVar52;
        if (1 < (int)uVar29) {
          uVar33 = 1;
          uVar23 = local_80._0_8_;
          dVar53 = _LC3;
          do {
            pPVar14 = local_88;
            dVar48 = (double)(int)uVar33 / (double)(int)uVar29;
            dVar44 = dVar53 - dVar48;
            dVar49 = *(double *)(local_88 + 0x40) * dVar44 + dVar48 * dVar43;
            dVar51 = *(double *)(local_88 + 0x48) * dVar44 + dVar48 * dVar46;
            dVar45 = dVar44 * *(double *)(local_88 + 0x50) + dVar48 * dVar50;
            dVar44 = dVar44 * *(double *)(local_88 + 0x58) + dVar48 * dVar52;
            if (uVar23 < (ulong)local_80._8_8_) {
              local_80._0_8_ = uVar23 + 1;
              pPVar14 = local_88 + uVar23 * 0x20;
              *(double *)pPVar14 = dVar49;
              *(double *)(pPVar14 + 8) = dVar51;
              *(double *)(pPVar14 + 0x10) = dVar45;
              *(double *)(pPVar14 + 0x18) = dVar44;
            }
            else {
              if (local_80._8_8_ == 0) {
                sVar36 = 0x1000;
                uVar40 = 0x80;
LAB_00104483:
                pPVar13 = (Partition *)malloc(sVar36);
                if (uVar23 != 0) {
                  sVar36 = uVar23 * 0x20;
                  if ((long)sVar36 < 0x21) {
                    if (sVar36 == 0x20) {
                      uVar2 = *(undefined8 *)(pPVar14 + 8);
                      *(undefined8 *)pPVar13 = *(undefined8 *)pPVar14;
                      *(undefined8 *)(pPVar13 + 8) = uVar2;
                      uVar2 = *(undefined8 *)(pPVar14 + 0x18);
                      *(undefined8 *)(pPVar13 + 0x10) = *(undefined8 *)(pPVar14 + 0x10);
                      *(undefined8 *)(pPVar13 + 0x18) = uVar2;
                    }
                  }
                  else {
                    pPVar13 = (Partition *)memmove(pPVar13,pPVar14,sVar36);
                  }
                }
                free(pPVar14);
                dVar53 = _LC3;
                local_88 = pPVar13;
                local_80._8_8_ = uVar40;
              }
              else {
                uVar40 = local_80._8_8_ * 2;
                local_80._0_8_ = uVar23;
                if ((ulong)local_80._8_8_ < uVar40) {
                  sVar36 = local_80._8_8_ << 6;
                  goto LAB_00104483;
                }
              }
              pPVar14 = local_88 + local_80._0_8_ * 0x20;
              local_80._0_8_ = local_80._0_8_ + 1;
              *(double *)pPVar14 = dVar49;
              *(double *)(pPVar14 + 8) = dVar51;
              *(double *)(pPVar14 + 0x10) = dVar45;
              *(double *)(pPVar14 + 0x18) = dVar44;
            }
            uVar33 = uVar33 + 1;
            if (uVar29 == uVar33) break;
            uVar23 = local_80._0_8_;
          } while( true );
        }
      }
      auVar24 = local_68;
      pPVar13 = local_70;
      pPVar14 = (Partition *)0x0;
      local_198 = (Partition *)(ulong)(uint)uVar4;
      pPVar11 = local_70;
      pPVar38 = pPStack_60;
      if ((ulong)local_68 < pPStack_60) goto LAB_00103c32;
      if (pPStack_60 == (Partition *)0x0) {
        sVar36 = 0x600;
        auVar35 = (undefined1  [8])0x80;
      }
      else {
        sVar36 = (long)pPStack_60 * 0x18;
        auVar35 = (undefined1  [8])((long)pPStack_60 * 2);
        if ((ulong)auVar35 <= pPStack_60) goto LAB_00103c32;
      }
      pPVar11 = (Partition *)malloc(sVar36);
      if (auVar24 == (undefined1  [8])0x0) goto LAB_001047a7;
      sVar36 = (long)auVar24 * 0xc;
      uVar41 = sVar36 == 0xc;
      if ((long)sVar36 < 0xd) goto LAB_001051a9;
      pPVar11 = (Partition *)memmove(pPVar11,pPVar13,sVar36);
      goto LAB_00104ec7;
    }
    if ((uint)local_e8 != 1) {
      pPVar11 = pPStack_60;
      pPVar21 = local_70;
      if (1 < (int)(uint)local_e8) {
        uVar33 = (uint)local_e8 + 2;
        auVar35 = (undefined1  [8])0x3;
        uVar8 = 3;
        if (pPStack_60 <= (ulong)local_68) {
          pPVar42 = pPStack_60;
          pPVar47 = pPVar14;
          if (pPStack_60 != (Partition *)0x0) goto LAB_00103fb2;
          uVar29 = 0;
          pPVar14 = (Partition *)0x3;
          sVar36 = 0x600;
          pPVar11 = (Partition *)0x80;
          goto LAB_00104b0f;
        }
        do {
          pPVar13 = (Partition *)((long)local_68 + 1);
          pPVar42 = pPVar21 + (long)local_68 * 0xc;
          *(uint *)(pPVar42 + 4) = uVar8;
          *(undefined4 *)(pPVar42 + 8) = 2;
          *(int *)pPVar42 = (int)pPVar14;
          pPVar14 = (Partition *)(ulong)uVar8;
          local_68 = (undefined1  [8])pPVar13;
          while( true ) {
            uVar8 = SUB84(auVar35,0) + 1;
            auVar35 = (undefined1  [8])(ulong)uVar8;
            if (uVar8 == uVar33) {
              pPVar14 = (Partition *)(ulong)(iVar22 + 1);
              pPVar42 = local_70;
              pPVar47 = pPStack_60;
              if (pPVar11 <= (ulong)local_68) goto LAB_00104d3a;
              goto LAB_001046d3;
            }
            pPVar42 = pPVar11;
            pPVar47 = pPVar14;
            if ((ulong)local_68 < pPVar11) break;
LAB_00103fb2:
            pPVar11 = (Partition *)((long)pPVar42 * 2);
            if (pPVar42 < pPVar11) {
              uVar29 = (uint)pPVar47;
              pPVar14 = (Partition *)(ulong)uVar8;
              sVar36 = (long)pPVar42 * 0x18;
              pPVar13 = pPVar21;
LAB_00104b0f:
              auVar24 = local_68;
              local_1a8 = (Partition *)(ulong)uVar29;
              pPVar21 = (Partition *)malloc(sVar36);
              if (auVar24 == (undefined1  [8])0x0) {
LAB_00104b4e:
                local_1d8 = (Partition *)auVar24;
                local_1c8 = pPVar13;
                uVar8 = uVar33;
                if (pPVar13 != (Partition *)0x0) goto LAB_00104bb0;
              }
              else {
                sVar36 = (long)auVar24 * 0xc;
                if ((long)sVar36 < 0xd) {
                  if (sVar36 != 0xc) goto LAB_00104b4e;
                  *(undefined8 *)pPVar21 = *(undefined8 *)pPVar13;
                  *(undefined4 *)(pPVar21 + 8) = *(undefined4 *)(pPVar13 + 8);
                }
                else {
                  pPVar21 = (Partition *)memmove(pPVar21,pPVar13,sVar36);
                }
LAB_00104bb0:
                local_1c8 = (Partition *)(ulong)uVar33;
                free(pPVar13);
                auVar24 = local_68;
                local_1d8 = pPVar21;
                uVar8 = uVar29;
              }
              local_1b8 = (Partition *)(ulong)uVar8;
              pPVar47 = (Partition *)(ulong)uVar29;
              local_1e8 = (undefined1  [8])pPVar11;
              local_70 = pPVar21;
              pPStack_60 = pPVar11;
            }
            else {
              pPVar14 = (Partition *)(ulong)uVar8;
              pPVar11 = pPVar42;
              auVar24 = local_68;
            }
            local_68 = (undefined1  [8])((long)auVar24 + 1);
            pPVar42 = pPVar21 + (long)auVar24 * 0xc;
            *(int *)pPVar42 = (int)pPVar47;
            *(int *)(pPVar42 + 4) = (int)pPVar14;
            *(undefined4 *)(pPVar42 + 8) = 2;
            in_R10 = pPVar47;
          }
        } while( true );
      }
      pPVar42 = local_70;
      pPVar47 = pPStack_60;
      if (pPStack_60 <= (ulong)local_68) {
        if (pPStack_60 == (Partition *)0x0) {
          sVar36 = 0x600;
          auVar35 = (undefined1  [8])0x80;
          pPVar12 = local_70;
        }
        else {
LAB_00104d3a:
          sVar36 = (long)pPVar11 * 0x18;
          auVar35 = (undefined1  [8])((long)pPVar11 * 2);
          pPVar12 = pPVar21;
          pPVar42 = local_70;
          pPVar47 = pPStack_60;
          if ((ulong)auVar35 <= pPVar11) goto LAB_001046d3;
        }
        auVar24 = local_68;
        pPVar21 = (Partition *)malloc(sVar36);
        pPVar38 = pPVar21;
        local_1e8 = (undefined1  [8])pPVar12;
        pPVar42 = pPVar21;
        pPVar47 = (Partition *)auVar35;
        if (auVar24 == (undefined1  [8])0x0) {
LAB_00104d66:
          if (pPVar12 == (Partition *)0x0) goto LAB_001046d3;
        }
        else {
          sVar36 = (long)auVar24 * 0xc;
          if ((long)sVar36 < 0xd) {
            if (sVar36 != 0xc) goto LAB_00104d66;
            *(undefined8 *)pPVar21 = *(undefined8 *)pPVar12;
            *(undefined4 *)(pPVar21 + 8) = *(undefined4 *)(pPVar12 + 8);
          }
          else {
            pPVar13 = pPVar12;
            memmove(pPVar21,pPVar12,sVar36);
          }
        }
        free(pPVar12);
      }
LAB_001046d3:
      pPStack_60 = pPVar47;
      local_70 = pPVar42;
      pPVar11 = (Partition *)0x200000001;
      *(int *)(pPVar21 + (long)local_68 * 0xc) = (int)pPVar14;
      *(undefined8 *)(pPVar21 + (long)local_68 * 0xc + 4) = 0x200000001;
      auVar24 = local_68;
      local_68 = (undefined1  [8])((long)local_68 + 1);
      goto LAB_0010364c;
    }
    if ((ulong)local_68 < pPStack_60) {
      *(Partition **)(local_70 + (long)local_68 * 0xc) = _LC1;
      *(undefined4 *)(local_70 + (long)local_68 * 0xc + 8) = 2;
      auVar24 = local_68;
      local_68 = (undefined1  [8])((long)local_68 + 1);
      goto LAB_0010364c;
    }
    if (pPStack_60 == (Partition *)0x0) {
      sVar36 = 0x600;
      pPVar14 = (Partition *)0x80;
LAB_00104f06:
      local_1e8 = (undefined1  [8])local_70;
      pPVar38 = (Partition *)malloc(sVar36);
      pPVar11 = pPVar38;
      pPVar21 = pPVar14;
      if (auVar25 == (undefined1  [8])0x0) {
LAB_00104f21:
        if (pPVar13 == (Partition *)0x0) goto LAB_00104cf2;
      }
      else {
        sVar36 = (long)auVar25 * 0xc;
        if ((long)sVar36 < 0xd) {
          if (sVar36 != 0xc) goto LAB_00104f21;
          *(undefined8 *)pPVar38 = *(undefined8 *)pPVar13;
          *(undefined4 *)(pPVar38 + 8) = *(undefined4 *)(pPVar13 + 8);
        }
        else {
          memmove(pPVar38,pPVar13,sVar36);
        }
      }
      free(pPVar13);
    }
    else {
      sVar36 = (long)pPStack_60 * 0x18;
      pPVar14 = (Partition *)((long)pPStack_60 * 2);
      pPVar11 = local_70;
      pPVar21 = pPStack_60;
      if (pPStack_60 < pPVar14) goto LAB_00104f06;
    }
LAB_00104cf2:
    pPStack_60 = pPVar21;
    local_70 = pPVar11;
    pPVar11 = _LC1;
    *(Partition **)(local_70 + (long)local_68 * 0xc) = _LC1;
    *(undefined4 *)(local_70 + (long)local_68 * 0xc + 8) = 2;
    pPVar13 = local_70;
    auVar24 = local_68;
    local_68 = (undefined1  [8])((long)local_68 + 1);
LAB_0010364c:
    do {
      while( true ) {
        uVar8 = SUB84(auVar24,0);
        iVar22 = (int)pPVar38;
        iVar9 = pthread_mutex_lock((pthread_mutex_t *)cacheLock);
        uVar29 = (uint)in_R10;
        uVar41 = iVar9 == 0;
        if ((bool)uVar41) break;
        std::__throw_system_error(iVar9);
        auVar24 = (undefined1  [8])extraout_RDX_01;
LAB_001051a9:
        if ((bool)uVar41) {
          *(undefined8 *)pPVar11 = *(undefined8 *)pPVar13;
          *(undefined4 *)(pPVar11 + 8) = *(undefined4 *)(pPVar13 + 8);
LAB_00104ec7:
          free(pPVar13);
          auVar24 = local_68;
          pPVar38 = (Partition *)auVar35;
        }
        else {
LAB_001047a7:
          pPVar38 = (Partition *)auVar35;
          if (pPVar13 != (Partition *)0x0) goto LAB_00104ec7;
        }
LAB_00103c32:
        pPStack_60 = pPVar38;
        local_70 = pPVar11;
        uVar33 = (uint)pPVar14;
        local_68 = (undefined1  [8])((long)auVar24 + 1);
        uVar4 = local_188._0_4_;
        auVar35 = (undefined1  [8])((ulong)local_188 & 0xffffffff);
        pPVar11 = (Partition *)((ulong)local_1d8 & 0xffffffff);
        pPVar13 = local_70 + (long)auVar24 * 0xc;
        *(undefined4 *)pPVar13 = local_1a8._0_4_;
        *(undefined4 *)(pPVar13 + 4) = 1;
        *(undefined4 *)(pPVar13 + 8) = local_1b8._0_4_;
        auVar24 = (undefined1  [8])((ulong)local_198 & 0xffffffff);
        pPVar38 = (Partition *)&local_70;
        uVar23 = (long)local_1b8 << 0x20;
        local_1b8 = (Partition *)&local_88;
        pPVar13 = local_1b8;
        PartitionQuad(pPVar38,local_1b8,(ulong)local_1a8 & 0xffffffff | uVar23,
                      (long)pPVar11 << 0x20 | 2,(ulong)(iVar22 + 3) << 0x20 | 0xffffffff,
                      (long)local_180 << 0x20 | (ulong)auVar24,(ulong)(uVar8 - 2) << 0x20,
                      CONCAT44((iVar22 - (int)local_1c8) + -2,local_188._0_4_),0x1010101);
        auVar25 = local_68;
        pPVar21 = local_70;
        in_R10 = (Partition *)(ulong)uVar29;
        local_1a8 = pPVar11;
        if ((int)local_1e8 == 1) {
          auVar35 = local_68;
          auVar24 = (undefined1  [8])pPStack_60;
          if (1 < (int)local_1c8) {
            pPVar38 = (Partition *)0x3;
            uVar8 = 3;
            if (pPStack_60 <= (ulong)local_68) {
              pPVar11 = pPStack_60;
              if (pPStack_60 != (Partition *)0x0) goto LAB_00104982;
              uVar33 = 0;
              pPVar14 = (Partition *)0x3;
              sVar36 = 0x600;
              auVar24 = (undefined1  [8])0x80;
              pPVar13 = local_70;
              goto LAB_00104de7;
            }
            do {
              pPVar13 = (Partition *)((long)local_68 + 1);
              pPVar11 = pPVar21 + (long)local_68 * 0xc;
              *(uint *)(pPVar11 + 4) = uVar8;
              *(undefined4 *)(pPVar11 + 8) = 2;
              *(int *)pPVar11 = (int)pPVar14;
              pPVar14 = (Partition *)(ulong)uVar8;
              local_68 = (undefined1  [8])pPVar13;
              while( true ) {
                uVar33 = (uint)pPVar14;
                uVar8 = (int)pPVar38 + 1;
                pPVar38 = (Partition *)(ulong)uVar8;
                if (uVar8 == (uint)local_1d8) {
                  pPVar14 = (Partition *)(ulong)((int)local_1c8 + 1);
                  auVar35 = local_68;
                  if ((ulong)auVar24 <= (ulong)local_68) goto LAB_00104fd9;
                  goto LAB_001049ca;
                }
                pPVar11 = (Partition *)auVar24;
                if ((ulong)local_68 < (ulong)auVar24) break;
LAB_00104982:
                auVar24 = (undefined1  [8])((long)pPVar11 * 2);
                if (pPVar11 < (ulong)auVar24) {
                  sVar36 = (long)pPVar11 * 0x18;
                  pPVar14 = (Partition *)(ulong)uVar8;
                  pPVar13 = pPVar21;
LAB_00104de7:
                  auVar35 = local_68;
                  local_1a8 = (Partition *)(ulong)uVar33;
                  pPVar21 = (Partition *)malloc(sVar36);
                  pPVar11 = (Partition *)auVar24;
                  if (auVar35 == (undefined1  [8])0x0) {
LAB_00104e12:
                    local_1e8 = auVar35;
                    local_1b8 = pPVar13;
                    pPVar42 = pPVar21;
                    if (pPVar13 == (Partition *)0x0) goto LAB_00104997;
                  }
                  else {
                    sVar36 = (long)auVar35 * 0xc;
                    if ((long)sVar36 < 0xd) {
                      if (sVar36 != 0xc) goto LAB_00104e12;
                      *(undefined8 *)pPVar21 = *(undefined8 *)pPVar13;
                      *(undefined4 *)(pPVar21 + 8) = *(undefined4 *)(pPVar13 + 8);
                    }
                    else {
                      pPVar21 = (Partition *)memmove(pPVar21,pPVar13,sVar36);
                    }
                  }
                  local_1b8 = (Partition *)(ulong)uVar33;
                  free(pPVar13);
                  auVar35 = local_68;
                  local_1e8 = (undefined1  [8])pPVar21;
                  pPVar42 = pPVar21;
                }
                else {
                  pPVar14 = (Partition *)(ulong)uVar8;
                  auVar35 = local_68;
                  auVar24 = (undefined1  [8])pPVar11;
                  pPVar42 = local_70;
                  pPVar11 = pPStack_60;
                }
LAB_00104997:
                pPStack_60 = pPVar11;
                local_70 = pPVar42;
                local_68 = (undefined1  [8])((long)auVar35 + 1);
                pPVar11 = pPVar21 + (long)auVar35 * 0xc;
                *(uint *)pPVar11 = uVar33;
                *(int *)(pPVar11 + 4) = (int)pPVar14;
                *(undefined4 *)(pPVar11 + 8) = 2;
              }
            } while( true );
          }
LAB_0010504f:
          if ((ulong)auVar35 < (ulong)auVar24) {
LAB_001049ca:
            pPVar21 = pPVar21 + (long)auVar35 * 0xc;
            pPVar11 = (Partition *)((ulong)local_1d8 & 0xffffffff);
            *(int *)pPVar21 = (int)pPVar14;
            *(uint *)(pPVar21 + 4) = (uint)local_1d8;
            *(undefined4 *)(pPVar21 + 8) = 2;
            local_68 = (undefined1  [8])((long)auVar35 + 1);
          }
          else {
            pPVar38 = (Partition *)0x80;
            if (auVar24 == (undefined1  [8])0x0) {
LAB_00105067:
              auVar24 = (undefined1  [8])malloc((long)pPVar38 * 0xc);
              local_1e8 = (undefined1  [8])pPVar21;
              pPVar11 = (Partition *)auVar24;
              pPVar42 = pPVar38;
              if (auVar35 == (undefined1  [8])0x0) {
LAB_00105082:
                if (pPVar21 == (Partition *)0x0) goto LAB_00104fe6;
              }
              else {
                sVar36 = (long)auVar35 * 0xc;
                if ((long)sVar36 < 0xd) {
                  if (sVar36 != 0xc) goto LAB_00105082;
                  *(undefined8 *)auVar24 = *(undefined8 *)pPVar21;
                  *(undefined4 *)((long)auVar24 + 8) = *(undefined4 *)(pPVar21 + 8);
                }
                else {
                  pPVar13 = pPVar21;
                  memmove((void *)auVar24,pPVar21,sVar36);
                }
              }
              free(pPVar21);
            }
            else {
LAB_00104fd9:
              pPVar38 = (Partition *)((long)auVar24 * 2);
              pPVar11 = local_70;
              pPVar42 = pPStack_60;
              if ((ulong)auVar24 < pPVar38) goto LAB_00105067;
            }
LAB_00104fe6:
            pPStack_60 = pPVar42;
            local_70 = pPVar11;
            pPVar11 = (Partition *)((ulong)local_1d8 & 0xffffffff);
            pPVar21 = local_70 + (long)local_68 * 0xc;
            *(int *)pPVar21 = (int)pPVar14;
            *(uint *)(pPVar21 + 4) = (uint)local_1d8;
            *(undefined4 *)(pPVar21 + 8) = 2;
            local_68 = (undefined1  [8])((long)local_68 + 1);
          }
        }
        else if ((int)local_1c8 == 1) {
          if (pPStack_60 <= (ulong)local_68) {
            if (pPStack_60 == (Partition *)0x0) {
              sVar36 = 0x600;
              pPVar14 = (Partition *)0x80;
            }
            else {
              sVar36 = (long)pPStack_60 * 0x18;
              pPVar14 = (Partition *)((long)pPStack_60 * 2);
              if (pPVar14 <= pPStack_60) goto LAB_00104822;
            }
            local_1a8 = local_70;
            local_1c8 = (Partition *)local_68;
            auVar35 = (undefined1  [8])malloc(sVar36);
            if (auVar25 == (undefined1  [8])0x0) {
LAB_00104c36:
              if (pPVar21 != (Partition *)0x0) goto LAB_0010513f;
            }
            else {
              sVar36 = (long)auVar25 * 0xc;
              if ((long)sVar36 < 0xd) {
                if (sVar36 != 0xc) goto LAB_00104c36;
                *(undefined8 *)auVar35 = *(undefined8 *)pPVar21;
                *(undefined4 *)((long)auVar35 + 8) = *(undefined4 *)(pPVar21 + 8);
              }
              else {
                local_1c8 = (Partition *)(ulong)uVar29;
                memmove((void *)auVar35,pPVar21,sVar36);
              }
LAB_0010513f:
              free(pPVar21);
            }
            local_1d8 = (Partition *)(ulong)uVar29;
            local_70 = (Partition *)auVar35;
            pPStack_60 = pPVar14;
          }
LAB_00104822:
          pPVar11 = _LC12;
          in_R10 = (Partition *)(ulong)uVar29;
          pPVar14 = (Partition *)((ulong)local_1e8 & 0xffffffff);
          pPVar13 = local_70 + (long)local_68 * 0xc;
          *(int *)pPVar13 = (int)local_198;
          *(undefined4 *)(pPVar13 + 4) = 2;
          *(undefined4 *)(pPVar13 + 8) = local_190._0_4_;
          pPVar13 = local_1b8;
          local_68 = (undefined1  [8])((long)local_68 + 1);
          PartitionQuad(pPVar38,local_1b8,(long)local_190 << 0x20 | (ulong)auVar24,pPVar11,
                        (ulong)local_170 << 0x20 | 0xffffffff,
                        (ulong)((uVar29 - 2) + (int)local_198) << 0x20 | 0xffffffff,
                        (ulong)((int)local_1e8 - 2) << 0x20,(ulong)(uVar29 - 2) << 0x20,0x10101);
        }
        else {
          uVar8 = (int)local_198 - 1;
          if ((ulong)local_68 < pPStack_60) {
            *(uint *)(local_70 + (long)local_68 * 0xc) = uVar8;
            *(undefined8 *)(local_70 + (long)local_68 * 0xc + 4) = 0x300000000;
          }
          else {
            if (pPStack_60 == (Partition *)0x0) {
              sVar36 = 0x600;
              pPVar14 = (Partition *)0x80;
LAB_00104c69:
              local_180 = local_70;
              local_188 = (Partition *)local_68;
              pPVar13 = (Partition *)malloc(sVar36);
              if (auVar25 == (undefined1  [8])0x0) {
LAB_00104c98:
                if (pPVar21 != (Partition *)0x0) goto LAB_00104fb8;
              }
              else {
                sVar36 = (long)auVar25 * 0xc;
                if ((long)sVar36 < 0xd) {
                  if (sVar36 != 0xc) goto LAB_00104c98;
                  *(undefined8 *)pPVar13 = *(undefined8 *)pPVar21;
                  *(undefined4 *)(pPVar13 + 8) = *(undefined4 *)(pPVar21 + 8);
                }
                else {
                  pPVar13 = (Partition *)memmove(pPVar13,pPVar21,sVar36);
                }
LAB_00104fb8:
                free(pPVar21);
                local_188 = pPVar13;
              }
              local_1d8 = (Partition *)(ulong)uVar29;
              local_70 = pPVar13;
              pPStack_60 = pPVar14;
            }
            else {
              sVar36 = (long)pPStack_60 * 0x18;
              pPVar14 = (Partition *)((long)pPStack_60 * 2);
              if (pPStack_60 < pPVar14) goto LAB_00104c69;
            }
            *(uint *)(local_70 + (long)local_68 * 0xc) = uVar8;
            *(undefined8 *)(local_70 + (long)local_68 * 0xc + 4) = 0x300000000;
          }
          in_R10 = (Partition *)(ulong)uVar29;
          local_68 = (undefined1  [8])((long)local_68 + 1);
          pPVar14 = (Partition *)CONCAT44((int)local_1e8 + -2,uVar4);
          pPVar11 = (Partition *)((ulong)pPVar11 | 0x200000000);
          pPVar13 = local_1b8;
          PartitionQuad(pPVar38,local_1b8,(ulong)uVar8 | 0x300000000,pPVar11,_LC13,
                        (ulong)((uVar29 - 2) + (int)local_198) | (long)local_190 << 0x20,
                        (ulong)((int)local_1c8 - 2) << 0x20,pPVar14,0x1000101);
          auVar24 = (undefined1  [8])(ulong)uVar8;
        }
      }
      puVar15 = (undefined8 *)operator_new(0x50);
      pPVar14 = local_88;
      uVar2 = local_80._0_8_;
      puVar18 = (undefined8 *)0x0;
      *(undefined1 (*) [16])(puVar15 + 5) = (undefined1  [16])0x0;
      puVar15[4] = 0;
      *puVar15 = local_a8._0_8_;
      puVar15[1] = local_a8._8_8_;
      puVar15[2] = local_98;
      puVar15[3] = dStack_90;
      if ((Partition *)local_80._0_8_ != (Partition *)0x0) {
        sVar36 = local_80._0_8_ * 0x20;
        local_1e8 = (undefined1  [8])local_80._0_8_;
        puVar18 = (undefined8 *)malloc(sVar36);
        if ((long)sVar36 < 0x21) {
          if (sVar36 == 0x20) {
            uVar3 = *(undefined8 *)(pPVar14 + 8);
            *puVar18 = *(undefined8 *)pPVar14;
            puVar18[1] = uVar3;
            uVar3 = *(undefined8 *)(pPVar14 + 0x18);
            puVar18[2] = *(undefined8 *)(pPVar14 + 0x10);
            puVar18[3] = uVar3;
          }
        }
        else {
          puVar18 = (undefined8 *)memmove(puVar18,pPVar14,sVar36);
        }
      }
      auVar24 = local_68;
      pPVar14 = local_70;
      puVar15[5] = uVar2;
      puVar15[6] = uVar2;
      *(undefined1 (*) [16])(puVar15 + 8) = (undefined1  [16])0x0;
      puVar15[4] = puVar18;
      puVar18 = (undefined8 *)0x0;
      puVar15[7] = 0;
      if (local_68 != (undefined1  [8])0x0) {
        local_1e8 = local_68;
        sVar36 = (long)local_68 * 0xc;
        puVar18 = (undefined8 *)malloc(sVar36);
        if ((long)sVar36 < 0xd) {
          if (sVar36 == 0xc) {
            *puVar18 = *(undefined8 *)pPVar14;
            *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(pPVar14 + 8);
          }
        }
        else {
          puVar18 = (undefined8 *)memmove(puVar18,pPVar14,sVar36);
        }
      }
      puVar15[7] = puVar18;
      puVar15[8] = auVar24;
      puVar15[9] = auVar24;
      local_c8 = local_e8;
      dStack_c0 = uStack_e0;
      auVar35 = (undefined1  [8])operator_new(0x28);
      pPVar14 = DAT_00108778;
      *(undefined8 *)auVar35 = 0;
      *(undefined8 **)((long)auVar35 + 0x18) = puVar15;
      *(double *)((long)auVar35 + 8) = local_c8;
      *(double *)((long)auVar35 + 0x10) = dStack_c0;
      pPVar13 = DAT_00108768;
      if (pPVar14 == (Partition *)0x0) {
        for (pPVar38 = DAT_00108770; pPVar38 != (Partition *)0x0; pPVar38 = *(Partition **)pPVar38)
        {
          if (((*(uint *)(pPVar38 + 8) == *(uint *)((long)auVar35 + 8)) &&
              (*(uint *)((long)auVar35 + 0xc) == *(uint *)(pPVar38 + 0xc))) &&
             ((*(uint *)((long)auVar35 + 0x10) == *(uint *)(pPVar38 + 0x10) &&
              (*(int *)((long)auVar35 + 0x14) == *(int *)(pPVar38 + 0x14))))) goto LAB_00103784;
        }
        pPVar38 = (Partition *)
                  (long)(int)(*(uint *)((long)auVar35 + 0x10) ^ *(uint *)((long)auVar35 + 8) ^
                              *(uint *)((long)auVar35 + 0xc) ^ *(uint *)((long)auVar35 + 0x14));
        auVar24 = (undefined1  [8])((ulong)pPVar38 % (ulong)DAT_00108768);
      }
      else {
        local_1d8 = pPVar14;
        pPVar38 = (Partition *)
                  (long)(int)(*(uint *)((long)auVar35 + 8) ^ *(uint *)((long)auVar35 + 0xc) ^
                              *(uint *)((long)auVar35 + 0x10) ^ *(uint *)((long)auVar35 + 0x14));
        auVar24 = (undefined1  [8])((ulong)pPVar38 % (ulong)DAT_00108768);
        local_1e8 = (undefined1  [8])DAT_00108768;
        plVar16 = (long *)std::
                          _Hashtable<linalg::vec<int,4>,std::pair<linalg::vec<int,4>const,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>>,std::allocator<std::pair<linalg::vec<int,4>const,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>>>,std::__detail::_Select1st,std::equal_to<linalg::vec<int,4>>,std::hash<linalg::vec<int,4>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                          ::_M_find_before_node
                                    ((ulong)auVar24,(vec *)((long)auVar35 + 8),(ulong)pPVar38);
        if ((plVar16 != (long *)0x0) && (*plVar16 != 0)) {
LAB_00103784:
          if ((void *)puVar15[7] != (void *)0x0) {
            free((void *)puVar15[7]);
          }
          if ((void *)puVar15[4] != (void *)0x0) {
            free((void *)puVar15[4]);
          }
          operator_delete(puVar15,0x50);
          operator_delete((void *)auVar35,0x28);
          goto LAB_00103869;
        }
      }
      pPVar21 = (Partition *)0x1;
      cVar6 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                        (0x108780,(ulong)pPVar13,(ulong)pPVar14);
      if (cVar6 == '\0') goto LAB_00103840;
      if (extraout_RDX == (Partition *)0x1) {
        _DAT_00108790 = 0;
        puVar17 = &DAT_00108790;
        goto LAB_00103e9c;
      }
      if ((ulong)extraout_RDX >> 0x3c == 0) goto code_r0x00103e75;
      if ((ulong)extraout_RDX >> 0x3d == 0) {
        std::__throw_bad_alloc();
        pPVar14 = (Partition *)0x0;
        goto LAB_0010504f;
      }
      std::__throw_bad_array_new_length();
      auVar25 = (undefined1  [8])extraout_RDX_00;
LAB_00104d2b:
      sVar36 = 0x600;
      pPVar21 = (Partition *)0x80;
LAB_00104a97:
      pPVar14 = (Partition *)malloc(sVar36);
      local_1c8 = pPVar13;
      pPVar11 = pPVar21;
      if (auVar25 == (undefined1  [8])0x0) {
LAB_00104abc:
        local_1d8 = (Partition *)auVar25;
        if (pPVar13 != (Partition *)0x0) goto LAB_001050bf;
      }
      else {
        sVar36 = (long)auVar25 * 0xc;
        if ((long)sVar36 < 0xd) {
          if (sVar36 != 0xc) goto LAB_00104abc;
          *(undefined8 *)pPVar14 = *(undefined8 *)pPVar13;
          *(undefined4 *)(pPVar14 + 8) = *(undefined4 *)(pPVar13 + 8);
        }
        else {
          pPVar14 = (Partition *)memmove(pPVar14,pPVar13,sVar36);
        }
LAB_001050bf:
        free(pPVar13);
        local_1d8 = pPVar14;
      }
LAB_0010460a:
      pPStack_60 = pPVar11;
      local_70 = pPVar14;
      auVar35 = (undefined1  [8])((long)auVar35 << 0x20);
      pPVar14 = local_70 + (long)local_68 * 0xc;
      *(undefined4 *)pPVar14 = local_1a8._0_4_;
      *(undefined4 *)(pPVar14 + 4) = 1;
      *(undefined4 *)(pPVar14 + 8) = local_1b8._0_4_;
      pPVar14 = (Partition *)((ulong)((int)local_1e8 - 1) | (ulong)auVar35);
      pPVar13 = (Partition *)&local_88;
      pPVar11 = (Partition *)0x2;
      local_68 = (undefined1  [8])((long)local_68 + 1);
      PartitionQuad((Partition *)&local_70,pPVar13,
                    (ulong)local_1a8 & 0xffffffff | (long)local_1b8 << 0x20,2,
                    (ulong)((int)pPVar38 + 3) << 0x20 | 0xffffffff,
                    (ulong)local_190 & 0xffffffff | 0x300000000,
                    (ulong)(SUB84(auVar24,0) - 2) << 0x20,pPVar14,0x1010101);
    } while( true );
  }
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  param_1[4] = (undefined1  [16])0x0;
  goto LAB_00102bf2;
code_r0x00103e75:
  __s = operator_new((long)extraout_RDX * 8);
  puVar17 = (undefined *)memset(__s,0,(long)extraout_RDX * 8);
LAB_00103e9c:
  pPVar14 = DAT_00108770;
  DAT_00108770 = (Partition *)0x0;
  uVar23 = 0;
  while (uVar40 = uVar23, pPVar13 = pPVar14, pPVar14 != (Partition *)0x0) {
    while( true ) {
      pPVar14 = *(Partition **)pPVar13;
      uVar23 = *(ulong *)(pPVar13 + 0x20) % (ulong)extraout_RDX;
      plVar16 = (long *)(puVar17 + uVar23 * 8);
      if ((undefined8 *)*plVar16 == (undefined8 *)0x0) break;
      *(undefined8 *)pPVar13 = *(undefined8 *)*plVar16;
      *(Partition **)*plVar16 = pPVar13;
      pPVar13 = pPVar14;
      if (pPVar14 == (Partition *)0x0) goto LAB_00103eec;
    }
    *(Partition **)pPVar13 = DAT_00108770;
    DAT_00108770 = pPVar13;
    *plVar16 = (long)&DAT_00108770;
    if (*(long *)pPVar13 != 0) {
      *(Partition **)(puVar17 + uVar40 * 8) = pPVar13;
    }
  }
LAB_00103eec:
  if (cache != &DAT_00108790) {
    operator_delete(cache,(long)DAT_00108768 << 3);
  }
  auVar24 = (undefined1  [8])((ulong)pPVar38 % (ulong)extraout_RDX);
  cache = puVar17;
  DAT_00108768 = extraout_RDX;
LAB_00103840:
  puVar17 = cache;
  plVar16 = (long *)(cache + (long)auVar24 * 8);
  *(Partition **)((long)auVar35 + 0x20) = pPVar38;
  pPVar14 = DAT_00108770;
  if ((undefined8 *)*plVar16 == (undefined8 *)0x0) {
    pPVar13 = (Partition *)auVar35;
    *(Partition **)auVar35 = DAT_00108770;
    DAT_00108770 = pPVar13;
    if (pPVar14 != (Partition *)0x0) {
      *(undefined1 (*) [8])(puVar17 + (*(ulong *)(pPVar14 + 0x20) % (ulong)DAT_00108768) * 8) =
           auVar35;
    }
    *plVar16 = (long)&DAT_00108770;
  }
  else {
    *(undefined8 *)auVar35 = *(undefined8 *)*plVar16;
    *(undefined1 (*) [8])*plVar16 = auVar35;
  }
  DAT_00108778 = DAT_00108778 + 1;
LAB_00103869:
  pPVar13 = local_70;
  pPVar14 = local_88;
  local_88 = (Partition *)0x0;
  local_1c8 = (Partition *)local_98;
  dStack_1c0 = dStack_90;
  local_70 = (Partition *)0x0;
  local_1d8 = (Partition *)local_80._0_8_;
  lStack_1d0 = local_80._8_8_;
  local_80 = (undefined1  [16])0x0;
  local_1e8 = local_68;
  uStack_1e0 = pPStack_60;
  _local_68 = (undefined1  [16])0x0;
  pthread_mutex_unlock((pthread_mutex_t *)cacheLock);
  if (local_70 != (Partition *)0x0) {
    free(local_70);
  }
  if (local_88 != (Partition *)0x0) {
    free(local_88);
  }
LAB_00102f38:
  *(Partition **)param_1[2] = pPVar14;
  *(Partition **)(param_1[3] + 8) = pPVar13;
  *(ulong *)*param_1 = CONCAT44(uVar31,uVar27);
  *(ulong *)(*param_1 + 8) = CONCAT44(uVar37,uVar28);
  *(Partition **)param_1[1] = local_1c8;
  *(double *)(param_1[1] + 8) = dStack_1c0;
  *(Partition **)(param_1[2] + 8) = local_1d8;
  *(long *)param_1[3] = lStack_1d0;
  *(undefined1 (*) [8])param_1[4] = local_1e8;
  *(Partition **)(param_1[4] + 8) = uStack_1e0;
LAB_00102bf2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_0010519d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::GetNeighbor(int) const */

int manifold::Manifold::Impl::GetNeighbor(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  iVar4 = -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 2;
  piVar3 = (int *)&local_50;
  local_50 = _LC1;
  do {
    iVar1 = *piVar3;
    cVar2 = manifold::Manifold::Impl::IsMarkedInsideQuad(param_1);
    if (cVar2 != '\0') {
      bVar5 = iVar4 == -1;
      iVar4 = -2;
      if (bVar5) {
        iVar4 = iVar1;
      }
    }
    piVar3 = piVar3 + 1;
  } while (piVar3 != &local_44);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::GetHalfedges(int) const */

undefined8 __thiscall manifold::Manifold::Impl::GetHalfedges(Impl *this,int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  long in_FS_OFFSET;
  bool bVar8;
  int local_68 [6];
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  piVar6 = (int *)&local_50;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = _LC1;
  local_48 = 2;
  local_68[0] = -1;
  local_68[1] = -1;
  local_68[2] = -1;
  local_68[3] = -1;
  piVar3 = piVar6;
  do {
    iVar7 = *piVar3;
    piVar5 = local_68 + 1;
    if (((iVar7 != 1) && (piVar5 = local_68 + 2, iVar7 != 2)) && (piVar5 = local_68 + 3, iVar7 == 0)
       ) {
      piVar5 = local_68;
    }
    piVar3 = piVar3 + 1;
    *piVar5 = param_1 * 3 + iVar7;
  } while (&local_44 != piVar3);
  iVar7 = -1;
  local_48 = 2;
  do {
    iVar1 = *piVar6;
    cVar2 = manifold::Manifold::Impl::IsMarkedInsideQuad((int)this);
    if ((cVar2 != '\0') && (bVar8 = iVar7 == -1, iVar7 = -2, bVar8)) {
      iVar7 = iVar1;
    }
    piVar6 = piVar6 + 1;
  } while (&local_44 != piVar6);
  if (-1 < iVar7) {
    iVar1 = *(int *)((long)(param_1 * 3 + iVar7) * 0xc + *(long *)(this + 0x60) + 8);
    if (iVar1 / 3 < param_1) {
      uVar4 = 0xffffffffffffffff;
      goto LAB_001054c0;
    }
    if (((iVar7 != 1) && (local_68[1] = local_68[2], iVar7 != 2)) &&
       (local_68[1] = local_68[0], iVar7 != 0)) {
      local_68[1] = local_68[3];
    }
    local_68[2] = local_68[1] + 1;
    if ((local_68[1] + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
      local_68[2] = local_68[1] + -2;
    }
    local_68[3] = local_68[2] + 1;
    if ((local_68[2] + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
      local_68[3] = local_68[2] + -2;
    }
    local_68[0] = iVar1 + 1;
    if ((iVar1 + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
      local_68[0] = iVar1 + -2;
    }
    local_68[1] = local_68[0] + 1;
    if ((local_68[0] + 1) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
      local_68[1] = local_68[0] + -2;
    }
  }
  uVar4 = CONCAT44(local_68[1],local_68[0]);
LAB_001054c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* manifold::Manifold::Impl::GetIndices(int) const */

undefined8 __thiscall manifold::Manifold::Impl::GetIndices(Impl *this,int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  long local_40;
  
  uVar7 = 0xffffffff;
  iVar4 = param_1 / 3;
  puVar6 = (uint *)&local_50;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 2;
  local_50 = _LC1;
  uVar5 = param_1 % 3;
  do {
    uVar3 = *puVar6;
    cVar2 = manifold::Manifold::Impl::IsMarkedInsideQuad((int)this);
    if ((cVar2 != '\0') && (bVar8 = uVar7 == 0xffffffff, uVar7 = 0xfffffffe, bVar8)) {
      uVar7 = uVar3;
    }
    puVar6 = puVar6 + 1;
  } while (&local_44 != puVar6);
  if (uVar5 == uVar7) {
    iVar4 = -1;
    uVar5 = 0xffffffff;
  }
  else if (-1 < (int)uVar7) {
    iVar1 = *(int *)((long)(int)(iVar4 * 3 + uVar7) * 0xc + *(long *)(this + 0x60) + 8) / 3;
    if (iVar1 < iVar4) {
      uVar3 = 1;
      if (uVar7 != 0) {
        uVar3 = (uint)(uVar7 == 1) * 2;
      }
      uVar5 = (uint)(uVar5 != uVar3);
      iVar4 = iVar1;
    }
    else {
      uVar3 = 1;
      if (uVar7 != 0) {
        uVar3 = (uint)(uVar7 == 1) * 2;
      }
      if (uVar5 == uVar3) {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(uVar5,iVar4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::FillRetainedVerts(manifold::Vec<manifold::Barycentric>&) const */

void __thiscall manifold::Manifold::Impl::FillRetainedVerts(Impl *this,Vec *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  long in_FS_OFFSET;
  undefined4 local_84;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = (int)(*(ulong *)(this + 0x68) / 3);
  if (0 < iVar6) {
    iVar7 = 0;
    do {
      local_48 = 2;
      local_50 = _LC1;
      piVar9 = (int *)&local_50;
      do {
        iVar2 = *piVar9;
        lVar4 = GetIndices(this,iVar2 + iVar7);
        iVar8 = (int)((ulong)lVar4 >> 0x20);
        if (-1 < lVar4) {
          local_78 = (undefined1  [16])0x0;
          local_68 = (undefined1  [16])0x0;
          puVar5 = (undefined8 *)(local_78 + 8);
          if ((iVar8 != 1) && (puVar5 = (undefined8 *)local_68, iVar8 != 2)) {
            puVar5 = (undefined8 *)local_78;
            if (iVar8 != 0) {
              puVar5 = (undefined8 *)(local_68 + 8);
            }
          }
          lVar3 = *(long *)(this + 0x60);
          *puVar5 = _LC3;
          puVar1 = (undefined4 *)
                   (*(long *)param_1 + (long)*(int *)(lVar3 + (long)(iVar2 + iVar7) * 0xc) * 0x28);
          local_84 = (undefined4)lVar4;
          *(undefined8 *)(puVar1 + 2) = local_78._0_8_;
          *(undefined8 *)(puVar1 + 4) = local_78._8_8_;
          *puVar1 = local_84;
          *(undefined8 *)(puVar1 + 6) = local_68._0_8_;
          *(undefined8 *)(puVar1 + 8) = local_68._8_8_;
        }
        piVar9 = piVar9 + 1;
      } while (piVar9 != &local_44);
      iVar7 = iVar7 + 3;
    } while (iVar7 != iVar6 * 3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe68 : 0x001067f3 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* manifold::Manifold::Impl::Subdivide(std::function<int (linalg::vec<double, 3>,
   linalg::vec<double, 4>, linalg::vec<double, 4>)>, bool) */

Vec * manifold::Manifold::Impl::Subdivide(Vec *param_1,Impl *param_2,long param_3,char param_4)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  void **ppvVar11;
  manifold *pmVar12;
  void *__ptr;
  undefined1 auVar13 [8];
  undefined1 __ptr_00 [8];
  char cVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  size_t sVar18;
  int *piVar19;
  undefined1 (*pauVar20) [16];
  long *plVar21;
  void ***pppvVar22;
  long lVar23;
  undefined1 (*pauVar24) [16];
  undefined8 *puVar25;
  undefined4 *puVar26;
  undefined1 *puVar27;
  undefined8 *puVar28;
  void *pvVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  Vec *__dest;
  int iVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  double *pdVar37;
  double *pdVar38;
  int iVar39;
  Impl *pIVar40;
  void ***pppvVar41;
  size_t sVar42;
  Impl *pIVar43;
  size_t sVar44;
  Impl *pIVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  ulong uVar52;
  int iVar53;
  ulong uVar54;
  Impl *pIVar55;
  int iVar56;
  long lVar57;
  undefined1 (*pauVar58) [16];
  long lVar59;
  long in_FS_OFFSET;
  undefined1 uVar60;
  bool bVar61;
  byte bVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [12];
  int local_3a8;
  Impl *local_388;
  void *local_380;
  undefined8 local_378;
  ulong local_358;
  void *local_350;
  undefined1 local_348 [16];
  undefined8 *local_338;
  undefined1 (*local_300) [16];
  long local_2f8;
  int *local_2f0;
  int *local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  undefined1 (*local_2c8) [16];
  int local_2c0;
  ulong local_298;
  undefined1 local_25c [2];
  undefined1 auStack_25a [2];
  undefined1 local_258 [16];
  void *local_248;
  int local_240;
  void *local_228;
  undefined1 local_220 [8];
  Impl *pIStack_218;
  undefined1 local_208 [12];
  int iStack_1fc;
  double local_1f8;
  void *local_1e8;
  undefined1 auStack_1e0 [8];
  long lStack_1d8;
  undefined1 local_1c8 [8];
  undefined8 uStack_1c0;
  undefined1 local_1b8 [8];
  double dStack_1b0;
  double local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188 [8];
  double dStack_180;
  undefined1 local_178 [16];
  undefined1 auStack_168 [16];
  double local_158;
  double dStack_150;
  double dStack_148;
  double local_140;
  void **local_138;
  manifold *pmStack_130;
  undefined1 local_128 [16];
  code *local_118;
  undefined8 uStack_110;
  Impl *local_108;
  void **local_f8;
  manifold *pmStack_f0;
  Impl local_e8 [16];
  code *local_d8;
  undefined8 uStack_d0;
  Impl *local_c8;
  void **local_b8;
  manifold *pmStack_b0;
  undefined1 local_a8 [16];
  code *local_98;
  undefined8 local_90;
  Impl *local_88;
  void **local_78;
  undefined1 auStack_70 [8];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  Impl *local_48;
  long local_40;
  
  bVar62 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CreateTmpEdges((manifold *)&local_248,(Vec *)(param_2 + 0x60));
  iVar15 = (int)*(undefined8 *)(param_2 + 0x50);
  local_388 = *(Impl **)(param_2 + 0x68);
  pIVar40 = (Impl *)((ulong)local_388 / 3);
  iVar39 = (int)pIVar40;
  if ((long)(local_240 * 2) == 0) {
    pIVar43 = (Impl *)0x0;
    if (iVar39 != 0) {
      local_380 = (void *)0x0;
      local_348 = (undefined1  [16])0x0;
      goto LAB_00105c67;
    }
    local_228 = (void *)0x0;
    local_380 = (void *)0x0;
    local_350 = (void *)0x0;
    pIStack_218 = (Impl *)0x0;
    local_348 = (undefined1  [16])0x0;
  }
  else {
    local_380 = malloc((long)(local_240 * 2) * 4);
    if ((Impl *)(long)local_240 == (Impl *)0x0) {
      if (iVar39 == 0) {
        local_350 = (void *)0x0;
        pIVar43 = (Impl *)0x0;
        local_228 = (void *)0x0;
        pIStack_218 = (Impl *)0x0;
        local_348 = (undefined1  [16])0x0;
        goto LAB_0010592f;
      }
      pIVar43 = (Impl *)0x0;
      local_348 = (undefined1  [16])0x0;
LAB_00105c67:
      local_358 = (ulong)iVar39;
      lVar57 = 0;
      local_350 = malloc(local_358 << 4);
      do {
        iVar17 = (int)lVar57;
        auVar65 = GetHalfedges(param_2,iVar17);
        lVar57 = lVar57 + 1;
        lVar59 = (long)iVar17 * 0x10;
        *(long *)((long)local_350 + lVar59) = auVar65._0_8_;
        *(long *)((long)local_350 + lVar59 + 8) = auVar65._8_8_;
      } while (lVar57 != local_358);
      local_228 = (void *)0x0;
      _local_220 = (undefined1  [16])0x0;
      pIStack_218 = (Impl *)0x0;
      pIVar40 = param_2;
      local_388 = pIVar43;
      if (pIVar43 == (Impl *)0x0) goto LAB_0010592f;
    }
    else {
      lVar57 = *(long *)(param_2 + 0x60);
      pIVar43 = (Impl *)0x0;
      do {
        iVar17 = (int)pIVar43;
        lVar59 = (long)*(int *)((long)local_248 + (long)iVar17 * 0xc + 8);
        *(int *)((long)local_380 + lVar59 * 4) = iVar17;
        *(int *)((long)local_380 + (long)*(int *)(lVar57 + 8 + lVar59 * 0xc) * 4) = iVar17;
        pIVar43 = pIVar43 + 1;
      } while ((Impl *)(long)local_240 != pIVar43);
      local_350 = (void *)0x0;
      local_348._8_8_ = pIVar43;
      local_348._0_8_ = pIVar43;
      if (iVar39 != 0) goto LAB_00105c67;
    }
    local_228 = malloc((long)pIVar43 * 4);
    pIStack_218 = pIVar43;
  }
LAB_0010592f:
  local_358 = (ulong)iVar39;
  local_220 = (undefined1  [8])pIVar43;
  local_118 = (code *)0x0;
  uStack_110 = 0;
  local_128 = (undefined1  [16])0x0;
  local_138 = &local_228;
  pmStack_130 = (manifold *)&local_248;
  local_108 = param_2;
  if (*(code **)(param_3 + 0x10) == (code *)0x0) {
LAB_00107b2b:
    uStack_d0 = 0;
    local_d8 = (code *)0x0;
    local_e8[0] = (Impl)0x0;
    local_e8[1] = (Impl)0x0;
    local_e8[2] = (Impl)0x0;
    local_e8[3] = (Impl)0x0;
    local_e8[4] = (Impl)0x0;
    local_e8[5] = (Impl)0x0;
    local_e8[6] = (Impl)0x0;
    local_e8[7] = (Impl)0x0;
    local_e8[8] = (Impl)0x0;
    local_e8[9] = (Impl)0x0;
    local_e8[10] = (Impl)0x0;
    local_e8[0xb] = (Impl)0x0;
    local_e8[0xc] = (Impl)0x0;
    local_e8[0xd] = (Impl)0x0;
    local_e8[0xe] = (Impl)0x0;
    local_e8[0xf] = (Impl)0x0;
    local_78 = local_138;
    auStack_70 = (undefined1  [8])pmStack_130;
    local_58 = ZEXT816(0);
    local_68 = (undefined1  [16])0x0;
    local_f8 = local_138;
    pmStack_f0 = pmStack_130;
    local_c8 = param_2;
  }
  else {
    (**(code **)(param_3 + 0x10))(local_128,param_3,2);
    local_118 = *(code **)(param_3 + 0x10);
    uStack_110 = *(undefined8 *)(param_3 + 0x18);
    local_d8 = (code *)0x0;
    uStack_d0 = 0;
    local_f8 = local_138;
    pmStack_f0 = pmStack_130;
    local_e8[0] = (Impl)0x0;
    local_e8[1] = (Impl)0x0;
    local_e8[2] = (Impl)0x0;
    local_e8[3] = (Impl)0x0;
    local_e8[4] = (Impl)0x0;
    local_e8[5] = (Impl)0x0;
    local_e8[6] = (Impl)0x0;
    local_e8[7] = (Impl)0x0;
    local_e8[8] = (Impl)0x0;
    local_e8[9] = (Impl)0x0;
    local_e8[10] = (Impl)0x0;
    local_e8[0xb] = (Impl)0x0;
    local_e8[0xc] = (Impl)0x0;
    local_e8[0xd] = (Impl)0x0;
    local_e8[0xe] = (Impl)0x0;
    local_e8[0xf] = (Impl)0x0;
    if (*(code **)(param_3 + 0x10) == (code *)0x0) goto LAB_00107b2b;
    pIVar40 = local_e8;
    (**(code **)(param_3 + 0x10))(pIVar40,local_128,2);
    local_c8 = local_108;
    local_58 = ZEXT816(0);
    local_d8 = local_118;
    uStack_d0 = uStack_110;
    local_78 = local_f8;
    auStack_70 = (undefined1  [8])pmStack_f0;
    local_68 = (undefined1  [16])0x0;
    if (local_118 != (code *)0x0) {
      (*local_118)(local_68,pIVar40,2);
      local_58._8_8_ = uStack_d0;
      local_58._0_8_ = local_d8;
    }
  }
  local_48 = local_c8;
  if (pIVar43 != (Impl *)0x0) {
    pIVar40 = (Impl *)0x0;
    __dest = (Vec *)local_1c8;
    do {
      lVar59 = (long)(int)pIVar40;
      pauVar1 = (undefined1 (*) [12])(*(long *)auStack_70 + lVar59 * 0xc);
      lVar57 = (long)*(int *)(*pauVar1 + 8);
      local_258._0_12_ = *pauVar1;
      cVar14 = manifold::Manifold::Impl::IsMarkedInsideQuad((int)local_48);
      if (cVar14 == '\0') {
        pdVar37 = (double *)(*(long *)(local_48 + 0x48) + (long)(int)local_258._4_4_ * 0x18);
        pdVar38 = (double *)(*(long *)(local_48 + 0x48) + (long)(int)local_258._0_4_ * 0x18);
        local_1f8 = pdVar38[2] - pdVar37[2];
        local_1e8 = (void *)(*pdVar38 - *pdVar37);
        stack0xfffffffffffffe00 = pdVar38[1] - pdVar37[1];
        local_208._0_8_ = local_1e8;
        if (*(long *)(local_48 + 0xb0) == 0) {
          local_188 = (undefined1  [8])0x0;
          dStack_180 = 0.0;
          local_198._0_8_ = 0;
          local_198._8_8_ = 0;
          local_1b8 = (undefined1  [8])0x0;
          dStack_1b0 = 0.0;
          local_1c8 = (undefined1  [8])0x0;
          uStack_1c0 = 0.0;
        }
        else {
          puVar32 = (undefined8 *)(lVar57 * 0x20 + *(long *)(local_48 + 0xa8));
          local_198._0_8_ = *puVar32;
          local_198._8_8_ = puVar32[1];
          local_188 = (undefined1  [8])puVar32[2];
          dStack_180 = (double)puVar32[3];
          puVar32 = (undefined8 *)
                    ((long)*(int *)(*(long *)(local_48 + 0x60) + lVar57 * 0xc + 8) * 0x20 +
                    *(long *)(local_48 + 0xa8));
          local_1c8 = (undefined1  [8])*puVar32;
          uStack_1c0 = (double)puVar32[1];
          local_1b8 = (undefined1  [8])puVar32[2];
          dStack_1b0 = (double)puVar32[3];
        }
        uVar60 = local_58._0_8_ == 0;
        lStack_1d8 = (long)local_1f8;
        auStack_1e0 = (undefined1  [8])(pdVar38[1] - pdVar37[1]);
        if ((bool)uVar60) {
          std::__throw_bad_function_call();
          goto LAB_00108676;
        }
        uVar16 = (*(code *)local_58._8_8_)(local_68,&local_1e8,local_198,__dest);
        *(undefined4 *)((long)*local_78 + lVar59 * 4) = uVar16;
      }
      else {
        *(undefined4 *)((long)*local_78 + lVar59 * 4) = 0;
      }
      pIVar40 = pIVar40 + 1;
    } while (pIVar40 != pIVar43);
  }
  local_98 = (code *)0x0;
  local_90 = local_58._8_8_;
  uVar31 = local_58._0_8_;
  local_a8 = (undefined1  [16])0x0;
  local_b8 = local_78;
  pmStack_b0 = (manifold *)auStack_70;
  if ((code *)local_58._0_8_ != (code *)0x0) {
    local_98 = (code *)local_58._0_8_;
    local_a8 = local_68;
    local_58 = (undefined1  [16])0x0;
    local_88 = local_48;
    (*(code *)uVar31)(local_a8,local_a8,3);
    if ((code *)local_58._0_8_ != (code *)0x0) {
      (*(code *)local_58._0_8_)(local_68,local_68,3);
    }
  }
  if (local_d8 != (code *)0x0) {
    (*local_d8)(local_e8,local_e8,3);
  }
  if (local_118 != (code *)0x0) {
    (*local_118)(local_128,local_128,3);
  }
  sVar42 = (long)pIVar43 * 4;
  if (param_4 == '\0') {
LAB_00105e18:
    sVar44 = (long)local_220 * 4;
  }
  else {
    pvVar29 = (void *)0x0;
    if (pIVar43 != (Impl *)0x0) {
      pIVar45 = (Impl *)0x0;
      pvVar29 = malloc(sVar42);
      do {
        lVar57 = (long)(int)pIVar45;
        pIVar40 = (Impl *)((long)pvVar29 + lVar57 * 4);
        pauVar1 = (undefined1 (*) [12])((long)local_248 + lVar57 * 0xc);
        *(int *)pIVar40 = *(int *)((long)local_228 + lVar57 * 4);
        iVar39 = *(int *)(*pauVar1 + 8);
        local_198._0_12_ = *pauVar1;
        iVar17 = (int)param_2;
        cVar14 = manifold::Manifold::Impl::IsMarkedInsideQuad(iVar17);
        if (cVar14 == '\0') {
          iVar51 = *(int *)pIVar40;
          iVar56 = 0;
          iVar49 = 0;
          iVar33 = *(int *)(*(long *)(param_2 + 0x60) + (long)iVar39 * 0xc + 8);
          lVar57 = 3;
          do {
            iVar53 = iVar33 + -2;
            iVar4 = *(int *)((long)local_228 +
                            (long)*(int *)((long)local_380 + (long)iVar33 * 4) * 4);
            iVar33 = iVar33 + 1;
            if (iVar49 < iVar4) {
              iVar49 = iVar4;
            }
            iVar56 = iVar56 + iVar4;
            if (iVar33 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
              iVar33 = iVar53;
            }
            cVar14 = manifold::Manifold::Impl::IsMarkedInsideQuad(iVar17);
            if (cVar14 != '\0') {
              iVar33 = 0;
              goto LAB_00108459;
            }
            lVar57 = lVar57 + -1;
          } while (lVar57 != 0);
          iVar33 = 0;
          iVar56 = ((int)((double)iVar49 * __LC19 + _LC3) + iVar49 * 2) - iVar56;
          if (0 < iVar56) {
            iVar33 = ((iVar49 - iVar51) * iVar56) / iVar49;
          }
LAB_00108459:
          iVar49 = 0;
          iVar56 = 0;
          lVar57 = 3;
          do {
            iVar53 = iVar39 + -2;
            iVar4 = *(int *)((long)local_228 +
                            (long)*(int *)((long)local_380 + (long)iVar39 * 4) * 4);
            iVar39 = iVar39 + 1;
            if (iVar49 < iVar4) {
              iVar49 = iVar4;
            }
            iVar56 = iVar56 + iVar4;
            if (iVar39 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
              iVar39 = iVar53;
            }
            cVar14 = manifold::Manifold::Impl::IsMarkedInsideQuad(iVar17);
            if (cVar14 != '\0') {
              iVar39 = 0;
              goto LAB_00108514;
            }
            lVar57 = lVar57 + -1;
          } while (lVar57 != 0);
          iVar39 = 0;
          iVar56 = ((int)((double)iVar49 * __LC19 + _LC3) + iVar49 * 2) - iVar56;
          if (0 < iVar56) {
            iVar39 = ((iVar49 - iVar51) * iVar56) / iVar49;
          }
LAB_00108514:
          if (iVar39 < iVar33) {
            iVar39 = iVar33;
          }
          *(int *)pIVar40 = *(int *)pIVar40 + iVar39;
        }
        pIVar45 = pIVar45 + 1;
      } while (pIVar45 != pIVar43);
    }
    __ptr = local_228;
    _local_220 = local_348;
    bVar61 = local_228 != (void *)0x0;
    sVar44 = sVar42;
    local_228 = pvVar29;
    if (bVar61) {
      free(__ptr);
      goto LAB_00105e18;
    }
  }
  pvVar29 = local_228;
  local_388 = (Impl *)0x0;
  if (pIVar43 != (Impl *)0x0) {
    local_388 = (Impl *)malloc(sVar42);
  }
  sVar18 = 0;
  iVar39 = iVar15;
  if (sVar44 != 0) {
    do {
      iVar17 = *(int *)((long)pvVar29 + sVar18);
      *(int *)(local_388 + sVar18) = iVar39;
      sVar18 = sVar18 + 4;
      iVar39 = iVar39 + iVar17;
    } while (sVar18 != sVar44);
  }
  local_2c0 = *(int *)((long)pvVar29 + (sVar44 - 4)) + *(int *)(local_388 + (sVar42 - 4));
  lVar57 = (long)local_2c0;
  *(undefined8 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (lVar57 != 0) {
    pvVar29 = malloc(lVar57 * 0x28);
    *(void **)param_1 = pvVar29;
    *(long *)(param_1 + 0x10) = lVar57;
  }
  pIVar45 = (Impl *)0x0;
  *(long *)(param_1 + 8) = lVar57;
  FillRetainedVerts(param_2,param_1);
  if (pIVar43 != (Impl *)0x0) {
    do {
      lVar57 = (long)(int)pIVar45;
      pIVar55 = (Impl *)(long)*(int *)(local_388 + lVar57 * 4);
      iVar39 = *(int *)((long)local_228 + lVar57 * 4);
      auVar66 = GetIndices(param_2,*(int *)((long)local_248 + lVar57 * 0xc + 8));
      dVar5 = _LC3;
      iVar17 = auVar66._8_4_;
      _local_1c8 = auVar66;
      auVar65 = _local_1c8;
      pIVar40 = pIVar55;
      if ((-1 < auVar66._0_4_) && (dVar64 = _LC3 / (double)(iVar39 + 1), 0 < iVar39)) {
        local_1c8._4_4_ = auVar66._4_4_;
        pIVar40 = (Impl *)local_198;
        iVar33 = 0;
        piVar19 = (int *)(*(long *)param_1 + (long)pIVar55 * 0x28);
        do {
          iVar33 = iVar33 + 1;
          local_198 = (undefined1  [16])0x0;
          _local_188 = (undefined1  [16])0x0;
          dVar63 = (double)iVar33 * dVar64;
          if (iVar17 == 1) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = dVar63;
            local_198 = auVar10 << 0x40;
          }
          else if (iVar17 == 2) {
            dStack_180 = 0.0;
            local_188 = (undefined1  [8])dVar63;
          }
          else if (iVar17 == 0) {
            local_198._8_8_ = 0;
            local_198._0_8_ = dVar63;
          }
          else {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = dVar63;
            _local_188 = auVar9 << 0x40;
          }
          pIVar55 = (Impl *)(local_198 + 8);
          if (((local_1c8._4_4_ != 1) && (pIVar55 = (Impl *)local_188, local_1c8._4_4_ != 2)) &&
             (pIVar55 = (Impl *)(local_188 + 8), local_1c8._4_4_ == 0)) {
            pIVar55 = pIVar40;
          }
          *(double *)pIVar55 = dVar5 - dVar63;
          *(undefined8 *)(piVar19 + 2) = local_198._0_8_;
          *(undefined8 *)(piVar19 + 4) = local_198._8_8_;
          *piVar19 = auVar66._0_4_;
          *(undefined1 (*) [8])(piVar19 + 6) = local_188;
          *(double *)(piVar19 + 8) = dStack_180;
          piVar19 = piVar19 + 10;
        } while (iVar39 != iVar33);
      }
      pIVar45 = pIVar45 + 1;
      _local_1c8 = auVar65;
    } while (pIVar43 != pIVar45);
  }
  uVar60 = local_358 == 0x199999999999999;
  __dest = param_1;
  if (local_358 < 0x19999999999999a) {
    if (local_358 == 0) {
      local_2c8 = (undefined1 (*) [16])0x0;
      local_2e8 = (int *)0x0;
      local_298 = 0;
      uVar46 = *(ulong *)(param_1 + 8);
      local_2f0 = (int *)0x0;
      local_300 = (undefined1 (*) [16])0x0;
    }
    else {
      local_298 = local_358 * 0x50;
      local_300 = (undefined1 (*) [16])operator_new(local_298);
      pauVar58 = local_300 + local_358 * 5;
      pauVar24 = local_300;
      do {
        *(undefined8 *)pauVar24[2] = 0;
        pauVar20 = pauVar24 + 5;
        *pauVar24 = (undefined1  [16])0x0;
        pauVar24[1] = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar24[2] + 8) = (undefined1  [16])0x0;
        *(undefined8 *)(pauVar24[3] + 8) = 0;
        pauVar24[4] = (undefined1  [16])0x0;
        pauVar24 = pauVar20;
      } while (pauVar20 != pauVar58);
      uVar46 = 0;
      do {
        _local_1c8 = (undefined1  [16])0x0;
        plVar21 = (long *)((long)(int)uVar46 * 0x10 + (long)local_350);
        local_78 = _LC1;
        auStack_70 = (undefined1  [8])_UNK_00108c58;
        lVar57 = *plVar21;
        lVar59 = plVar21[1];
        pppvVar22 = &local_78;
        do {
          iVar39 = *(int *)pppvVar22;
          if (iVar39 == 1) {
            if (-1 < lVar57) {
              piVar19 = (int *)(local_1c8 + 4);
              iVar39 = *(int *)((long)local_228 +
                               (long)*(int *)((long)local_380 + (lVar57 >> 0x20) * 4) * 4) + 1;
              goto LAB_001061a5;
            }
          }
          else if (iVar39 == 2) {
            if (-1 < (int)lVar59) {
              piVar19 = (int *)(local_1c8 + 8);
              iVar39 = *(int *)((long)local_228 +
                               (long)*(int *)((long)local_380 + (long)(int)lVar59 * 4) * 4) + 1;
              goto LAB_001061a5;
            }
          }
          else if (iVar39 == 0) {
            if (-1 < (int)lVar57) {
              piVar19 = (int *)local_1c8;
              iVar39 = *(int *)((long)local_228 +
                               (long)*(int *)((long)local_380 + (long)(int)lVar57 * 4) * 4) + 1;
              goto LAB_001061a5;
            }
          }
          else if (-1 < lVar59) {
            piVar19 = (int *)(local_1c8 + 0xc);
            iVar39 = *(int *)((long)local_228 +
                             (long)*(int *)((long)local_380 + (lVar59 >> 0x20) * 4) * 4) + 1;
LAB_001061a5:
            *piVar19 = iVar39;
          }
          pppvVar22 = (void ***)((long)pppvVar22 + 4);
        } while (pppvVar22 != (void ***)local_68);
        (anonymous_namespace)::Partition::GetPartition(local_198,local_1c8,uStack_1c0);
        pauVar24 = local_300 + (long)(int)uVar46 * 5;
        pvVar29 = *(void **)pauVar24[2];
        *(undefined8 *)*pauVar24 = local_198._0_8_;
        *(undefined8 *)(*pauVar24 + 8) = local_198._8_8_;
        *(undefined1 (*) [8])pauVar24[1] = local_188;
        *(double *)(pauVar24[1] + 8) = dStack_180;
        if (pvVar29 != (void *)0x0) {
          free(pvVar29);
        }
        pvVar29 = *(void **)(pauVar24[3] + 8);
        *(undefined8 *)pauVar24[2] = local_178._0_8_;
        *(undefined8 *)(pauVar24[2] + 8) = local_178._8_8_;
        *(undefined8 *)pauVar24[3] = auStack_168._0_8_;
        if (pvVar29 != (void *)0x0) {
          free(pvVar29);
        }
        uVar46 = uVar46 + 1;
        *(undefined8 *)(pauVar24[3] + 8) = auStack_168._8_8_;
        *(double *)pauVar24[4] = local_158;
        *(double *)(pauVar24[4] + 8) = dStack_150;
      } while (local_358 != uVar46);
      local_2f0 = (int *)malloc(local_358 * 4);
      pauVar24 = local_300;
      piVar19 = local_2f0;
      iVar39 = 0;
      do {
        pauVar20 = pauVar24 + 5;
        iVar17 = *(int *)pauVar24[4];
        *piVar19 = iVar39;
        pauVar24 = pauVar20;
        piVar19 = piVar19 + 1;
        iVar39 = iVar39 + iVar17;
      } while (pauVar20 != pauVar58);
      local_2e8 = (int *)malloc(local_358 * 4);
      uVar46 = *(ulong *)(param_1 + 8);
      uVar52 = uVar46 & 0xffffffff;
      pauVar24 = local_300;
      piVar19 = local_2e8;
      do {
        iVar39 = *(int *)(pauVar24[1] + 4);
        iVar17 = *(int *)pauVar24[1];
        local_2c8 = pauVar24 + 5;
        iVar33 = *(int *)(pauVar24[1] + 8);
        iVar51 = *(int *)(pauVar24[1] + 0xc);
        *piVar19 = (int)uVar52;
        uVar52 = (ulong)(uint)(((int)uVar52 - (iVar39 + iVar17 + iVar33 + iVar51)) +
                              *(int *)(pauVar24[2] + 8));
        pauVar24 = local_2c8;
        piVar19 = piVar19 + 1;
      } while (pauVar58 != local_2c8);
    }
    local_1e8 = (void *)0x0;
    _auStack_1e0 = (undefined1  [16])0x0;
    lStack_1d8 = 0;
    lVar57 = (long)local_2f0[local_358 - 1] + *(long *)local_2c8[-1];
    if (lVar57 != 0) {
      local_1e8 = malloc(lVar57 * 0xc);
      lStack_1d8 = lVar57;
    }
    auStack_1e0 = (undefined1  [8])lVar57;
    local_3a8 = (int)*(undefined8 *)(local_2c8[-3] + 8);
    uVar54 = (ulong)((local_3a8 -
                     (*(int *)(local_2c8[-4] + 4) + *(int *)local_2c8[-4] +
                      *(int *)(local_2c8[-4] + 8) + *(int *)(local_2c8[-4] + 0xc))) +
                    local_2e8[local_358 - 1]);
    uVar52 = uVar54 * 2;
    uVar30 = uVar46;
    if (*(ulong *)(param_1 + 0x10) < uVar54) {
      puVar32 = (undefined8 *)malloc(uVar54 * 0x28);
      puVar25 = *(undefined8 **)param_1;
      if (uVar46 == 0) {
        if (puVar25 == (undefined8 *)0x0) {
          *(undefined8 **)param_1 = puVar32;
          *(ulong *)(param_1 + 0x10) = uVar54;
          uVar30 = 0;
          goto LAB_0010798d;
        }
LAB_00108217:
        free(puVar25);
        uVar30 = *(ulong *)(param_1 + 8);
      }
      else {
        sVar42 = uVar46 * 0x28;
        if (0x28 < (long)sVar42) {
          memmove(puVar32,puVar25,sVar42);
          goto LAB_00108217;
        }
        if (sVar42 == 0x28) {
          uVar31 = puVar25[1];
          *puVar32 = *puVar25;
          puVar32[1] = uVar31;
          uVar31 = puVar25[3];
          puVar32[2] = puVar25[2];
          puVar32[3] = uVar31;
          puVar32[4] = puVar25[4];
          goto LAB_00108217;
        }
        if (puVar25 != (undefined8 *)0x0) goto LAB_00108217;
      }
      *(undefined8 **)param_1 = puVar32;
      *(ulong *)(param_1 + 0x10) = uVar54;
      if (uVar30 < uVar54) goto LAB_0010798d;
      *(ulong *)(param_1 + 8) = uVar54;
      if (uVar46 <= uVar52) goto LAB_001063d6;
LAB_00108250:
      sVar42 = uVar54 * 0x28;
      __dest = (Vec *)malloc(sVar42);
      pIVar40 = *(Impl **)param_1;
      uVar60 = sVar42 == 0x28;
      if ((long)sVar42 < 0x29) goto LAB_00108688;
      memmove(__dest,pIVar40,sVar42);
      goto LAB_0010827e;
    }
    if (uVar46 < uVar54) {
      puVar32 = *(undefined8 **)param_1;
LAB_0010798d:
      puVar25 = puVar32 + uVar30 * 5;
      if (puVar32 + uVar54 * 5 == puVar25) {
        *(ulong *)(param_1 + 8) = uVar54;
      }
      else {
        do {
          *(undefined4 *)puVar25 = 0;
          puVar28 = puVar25 + 5;
          *(undefined1 (*) [16])(puVar25 + 1) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar25 + 3) = (undefined1  [16])0x0;
          puVar25 = puVar28;
        } while (puVar32 + uVar54 * 5 != puVar28);
        *(ulong *)(param_1 + 8) = uVar54;
      }
      if (uVar52 < uVar46) goto LAB_00108250;
    }
    else {
      *(ulong *)(param_1 + 8) = uVar54;
      if (uVar52 < uVar46) {
        if (uVar54 != 0) goto LAB_00108250;
        __dest = (Vec *)0x0;
        pIVar40 = *(Impl **)param_1;
        goto LAB_001063ba;
      }
    }
  }
  else {
LAB_00108676:
    std::__throw_length_error("cannot create std::vector larger than max_size()");
LAB_00108688:
    if ((bool)uVar60) {
      uVar31 = *(undefined8 *)(pIVar40 + 8);
      *(undefined8 *)__dest = *(undefined8 *)pIVar40;
      *(undefined8 *)(__dest + 8) = uVar31;
      uVar31 = *(undefined8 *)(pIVar40 + 0x18);
      *(undefined8 *)(__dest + 0x10) = *(undefined8 *)(pIVar40 + 0x10);
      *(undefined8 *)(__dest + 0x18) = uVar31;
      *(undefined8 *)(__dest + 0x20) = *(undefined8 *)(pIVar40 + 0x20);
LAB_0010827e:
      free(pIVar40);
    }
    else {
LAB_001063ba:
      if (pIVar40 != (Impl *)0x0) goto LAB_0010827e;
    }
    *(Vec **)param_1 = __dest;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  }
LAB_001063d6:
  auVar13 = auStack_1e0;
  if (auStack_1e0 == (undefined1  [8])0x0) {
    local_2d8 = (undefined8 *)0x0;
    if (local_358 == 0) {
      if (*(void **)(param_2 + 0x110) == (void *)0x0) {
        *(undefined1 (*) [16])(param_2 + 0x118) = (undefined1  [16])0x0;
      }
      else {
        free(*(void **)(param_2 + 0x110));
        *(undefined8 *)(param_2 + 0x118) = 0;
        *(undefined8 *)(param_2 + 0x120) = 0;
      }
      local_2d8 = (undefined8 *)0x0;
    }
    else {
LAB_00106410:
      local_378 = 0;
      do {
        lVar23 = (long)(int)local_378;
        lVar47 = lVar23 * 0x10;
        lVar57 = *(long *)((long)local_350 + lVar47);
        lVar59 = *(long *)((long)local_350 + lVar47 + 8);
        iVar39 = (int)lVar57;
        if (-1 < iVar39) {
          uVar46 = 0;
          uVar52 = 0;
          pppvVar22 = &local_78;
          _local_25c = 0;
          local_258 = (undefined1  [16])0x0;
          local_78 = _LC1;
          auStack_70 = (undefined1  [8])_UNK_00108c58;
          pppvVar41 = pppvVar22;
          do {
            iVar17 = *(int *)pppvVar41;
            if (iVar17 == 1) {
              if (-1 < lVar57) {
                lVar35 = (long)(int)((ulong)lVar57 >> 0x20);
                piVar19 = (int *)(*(long *)(param_2 + 0x60) + lVar35 * 0xc);
                iVar17 = *piVar19;
                local_258._4_4_ = iVar17;
                uVar46 = uVar46 & 0xffffffff |
                         (ulong)*(uint *)(local_388 +
                                         (long)*(int *)((long)local_380 + lVar35 * 4) * 4) << 0x20;
                puVar26 = (undefined4 *)((long)local_25c + 1);
                bVar61 = iVar17 < piVar19[1];
                goto LAB_00106536;
              }
              puVar26 = (undefined4 *)(local_258 + 4);
LAB_00106c5a:
              *puVar26 = 0xffffffff;
            }
            else {
              if (iVar17 == 2) {
                iVar17 = (int)lVar59;
                if (iVar17 < 0) {
                  puVar26 = (undefined4 *)(local_258 + 8);
                  goto LAB_00106c5a;
                }
                piVar19 = (int *)(*(long *)(param_2 + 0x60) + (long)iVar17 * 0xc);
                iVar33 = *piVar19;
                local_258._8_4_ = iVar33;
                uVar52 = uVar52 & 0xffffffff00000000 |
                         (ulong)*(uint *)(local_388 +
                                         (long)*(int *)((long)local_380 + (long)iVar17 * 4) * 4);
                puVar26 = (undefined4 *)((long)local_25c + 2);
                bVar61 = iVar33 < piVar19[1];
              }
              else if (iVar17 == 0) {
                piVar19 = (int *)(*(long *)(param_2 + 0x60) + (long)iVar39 * 0xc);
                iVar17 = *piVar19;
                uVar46 = uVar46 & 0xffffffff00000000 |
                         (ulong)*(uint *)(local_388 +
                                         (long)*(int *)((long)local_380 + (long)iVar39 * 4) * 4);
                local_258._0_4_ = iVar17;
                puVar26 = (undefined4 *)local_25c;
                bVar61 = iVar17 < piVar19[1];
              }
              else {
                if (lVar59 < 0) {
                  puVar26 = (undefined4 *)(local_258 + 0xc);
                  goto LAB_00106c5a;
                }
                lVar35 = (long)(int)((ulong)lVar59 >> 0x20);
                piVar19 = (int *)(*(long *)(param_2 + 0x60) + lVar35 * 0xc);
                iVar17 = *piVar19;
                local_258._12_4_ = iVar17;
                uVar52 = uVar52 & 0xffffffff |
                         (ulong)*(uint *)(local_388 +
                                         (long)*(int *)((long)local_380 + lVar35 * 4) * 4) << 0x20;
                puVar26 = (undefined4 *)((long)local_25c + 3);
                bVar61 = iVar17 < piVar19[1];
              }
LAB_00106536:
              *(bool *)puVar26 = bVar61;
            }
            pppvVar41 = (void ***)((long)pppvVar41 + 4);
          } while (pppvVar41 != (void ***)local_68);
          pauVar24 = local_300 + lVar23 * 5;
          iVar39 = local_2e8[lVar23];
          (anonymous_namespace)::Partition::Reindex
                    (local_1c8,pauVar24,local_258._0_8_,local_258._8_8_,uVar46,uVar52,_local_25c,
                     (long)iVar39);
          lVar57 = (long)uStack_1c0;
          __ptr_00 = local_1c8;
          iVar17 = local_2f0[lVar23];
          puVar32 = (undefined8 *)((long)local_1e8 + (long)iVar17 * 0xc);
          sVar42 = (long)uStack_1c0 * 0xc;
          if ((long)sVar42 < 0xd) {
            if (sVar42 == 0xc) {
              *puVar32 = *(undefined8 *)local_1c8;
              *(undefined4 *)(puVar32 + 1) = *(undefined4 *)((long)local_1c8 + 8);
            }
          }
          else {
            memmove(puVar32,(void *)local_1c8,sVar42);
          }
          uVar31 = *(undefined8 *)(*(long *)(param_2 + 0x110) + lVar47);
          uVar6 = ((undefined8 *)(*(long *)(param_2 + 0x110) + lVar47))[1];
          if (lVar57 * 0x10 != 0) {
            uVar46 = 0;
            do {
              uVar52 = uVar46 + 1;
              local_2d8[(long)iVar17 * 2 + uVar46 * 2] = uVar31;
              (local_2d8 + (long)iVar17 * 2 + uVar46 * 2)[1] = uVar6;
              uVar46 = uVar52;
            } while (uVar52 < (lVar57 * 0x10 - 0x10U >> 4) + 1);
          }
          lVar57 = *(long *)*pauVar24;
          lVar23 = *(long *)(*pauVar24 + 8);
          iVar33 = (int)lVar57;
          iVar51 = (int)((ulong)lVar57 >> 0x20);
          iVar17 = iVar51;
          if (lVar59 < 0) {
            iVar17 = 1;
            lVar59 = lVar57 >> 0x20;
            if (iVar33 != 0) {
              iVar17 = (uint)(iVar33 == 1) * 2;
            }
            lVar47 = lVar23;
            if (iVar51 == iVar17) goto LAB_0010665f;
          }
          else {
LAB_0010665f:
            iVar33 = iVar17;
            lVar59 = lVar23;
            lVar47 = lVar57;
          }
          _local_208 = (undefined1  [16])0x0;
          local_78 = _LC1;
          auStack_70 = (undefined1  [8])_UNK_00108c58;
          do {
            iVar17 = *(int *)pppvVar22;
            iVar51 = iVar33;
            if (((iVar17 != 1) && (iVar51 = (int)lVar59, iVar17 != 2)) &&
               (iVar51 = (int)((ulong)lVar23 >> 0x20), iVar17 == 0)) {
              iVar51 = (int)lVar47;
            }
            piVar19 = (int *)(local_208 + 4);
            if (((iVar51 != 1) && (piVar19 = (int *)(local_208 + 8), iVar51 != 2)) &&
               (piVar19 = (int *)(local_208 + 0xc), iVar51 == 0)) {
              piVar19 = (int *)local_208;
            }
            pppvVar22 = (void ***)((long)pppvVar22 + 4);
            *piVar19 = iVar17;
          } while (pppvVar22 != (void ***)local_68);
          lVar57 = *(long *)(pauVar24[2] + 8);
          lVar59 = *(long *)pauVar24[2];
          piVar19 = (int *)(*(long *)param_1 + (long)iVar39 * 0x28);
          for (pauVar24 = (undefined1 (*) [16])
                          (lVar59 + (long)(*(int *)(pauVar24[1] + 4) + *(int *)pauVar24[1] +
                                           *(int *)(pauVar24[1] + 8) + *(int *)(pauVar24[1] + 0xc))
                                    * 0x20);
              (undefined1 (*) [16])(lVar57 * 0x20 + lVar59) != pauVar24; pauVar24 = pauVar24 + 2) {
            local_198 = *pauVar24;
            auVar65 = local_198;
            _local_188 = pauVar24[1];
            local_198._0_8_ = SUB168(*pauVar24,0);
            *piVar19 = (int)local_378;
            *(undefined8 *)(piVar19 + 6) = local_198._0_8_;
            *(undefined8 *)(piVar19 + 8) = local_198._0_8_;
            *(undefined8 *)(piVar19 + 2) = local_198._0_8_;
            *(undefined8 *)(piVar19 + 4) = local_198._0_8_;
            piVar19 = piVar19 + 10;
            local_198 = auVar65;
          }
          if (__ptr_00 != (undefined1  [8])0x0) {
            free((void *)__ptr_00);
          }
        }
        local_378 = local_378 + 1;
      } while (local_358 != local_378);
      if (*(void **)(param_2 + 0x110) != (void *)0x0) {
        free(*(void **)(param_2 + 0x110));
      }
      *(undefined1 (*) [8])(param_2 + 0x118) = auVar13;
      *(undefined1 (*) [8])(param_2 + 0x120) = auVar13;
      if (auVar13 != (undefined1  [8])0x0) goto LAB_00107c3b;
    }
  }
  else {
    local_2d8 = (undefined8 *)malloc((long)auStack_1e0 << 4);
    if (local_358 != 0) goto LAB_00106410;
    if (*(void **)(param_2 + 0x110) == (void *)0x0) {
      *(undefined1 (*) [8])(param_2 + 0x118) = auVar13;
      *(undefined1 (*) [8])(param_2 + 0x120) = auVar13;
    }
    else {
      free(*(void **)(param_2 + 0x110));
      *(undefined1 (*) [8])(param_2 + 0x118) = auVar13;
      *(undefined1 (*) [8])(param_2 + 0x120) = auVar13;
    }
LAB_00107c3b:
    sVar42 = (long)auVar13 * 0x10;
    puVar32 = (undefined8 *)malloc(sVar42);
    *(undefined8 **)(param_2 + 0x110) = puVar32;
    if ((long)sVar42 < 0x11) {
      if (sVar42 == 0x10) {
        uVar31 = local_2d8[1];
        *puVar32 = *local_2d8;
        puVar32[1] = uVar31;
      }
    }
    else {
      memcpy(puVar32,local_2d8,sVar42);
    }
  }
  lVar57 = *(long *)(param_1 + 8);
  if (lVar57 == 0) {
    if (*(void **)(param_2 + 0x48) != (void *)0x0) {
      free(*(void **)(param_2 + 0x48));
    }
    local_2e0 = (undefined8 *)0x0;
    *(undefined1 (*) [16])(param_2 + 0x50) = (undefined1  [16])0x0;
  }
  else {
    sVar42 = lVar57 * 0x18;
    local_2e0 = (undefined8 *)malloc(sVar42);
    pmVar12 = _UNK_00108c58;
    ppvVar11 = _LC1;
    lVar23 = 0;
    pvVar29 = *(void **)(param_2 + 0x48);
    lVar59 = *(long *)param_1;
    do {
      lVar48 = (long)(int)lVar23;
      pauVar24 = (undefined1 (*) [16])(lVar59 + lVar48 * 0x28);
      auVar65 = *pauVar24;
      _local_1b8 = pauVar24[1];
      local_1a8 = *(double *)pauVar24[2];
      local_1c8._0_4_ = (undefined4)*(undefined8 *)*pauVar24;
      plVar21 = (long *)((long)(int)local_1c8._0_4_ * 0x10 + (long)local_350);
      lVar47 = plVar21[1];
      lVar35 = *plVar21;
      iVar39 = (int)lVar35;
      iVar17 = (int)((ulong)lVar47 >> 0x20);
      lVar35 = lVar35 >> 0x20;
      uStack_1c0 = auVar65._8_8_;
      if (lVar47 < 0) {
        local_158 = 0.0;
        auStack_70._0_4_ = 2;
        lVar36 = *(long *)(param_2 + 0x60);
        local_198 = (undefined1  [16])0x0;
        _local_188 = (undefined1  [16])0x0;
        local_178 = (undefined1  [16])0x0;
        auStack_168 = (undefined1  [16])0x0;
        pppvVar22 = &local_78;
        do {
          iVar33 = *(int *)pppvVar22;
          if (iVar33 == 1) {
            pdVar37 = (double *)((long)pvVar29 + (long)*(int *)(lVar36 + lVar35 * 0xc) * 0x18);
            pdVar38 = (double *)(local_188 + 8);
          }
          else {
            iVar51 = (int)lVar47;
            if ((iVar33 == 2) || (iVar51 = iVar17, iVar33 != 0)) {
              pdVar37 = (double *)
                        ((long)pvVar29 + (long)*(int *)(lVar36 + (long)iVar51 * 0xc) * 0x18);
              pdVar38 = (double *)auStack_168;
            }
            else {
              pdVar37 = (double *)
                        ((long)pvVar29 + (long)*(int *)(lVar36 + (long)iVar39 * 0xc) * 0x18);
              pdVar38 = (double *)local_198;
            }
          }
          dVar5 = *pdVar37;
          dVar64 = pdVar37[1];
          pppvVar22 = (void ***)((long)pppvVar22 + 4);
          pdVar38[2] = pdVar37[2];
          *pdVar38 = dVar5;
          pdVar38[1] = dVar64;
        } while (pppvVar22 != (void ***)(auStack_70 + 4));
        pdVar37 = (double *)(local_2e0 + lVar48 * 3);
        pdVar37[2] = local_158 * dStack_1b0 +
                     (double)local_1b8 * (double)local_178._8_8_ + uStack_1c0 * (double)local_188;
        *pdVar37 = (double)local_1b8 * dStack_180 + (double)local_198._0_8_ * uStack_1c0 +
                   dStack_1b0 * (double)auStack_168._0_8_;
        pdVar37[1] = (double)local_1b8 * (double)local_178._0_8_ +
                     (double)local_198._8_8_ * uStack_1c0 + dStack_1b0 * (double)auStack_168._8_8_;
      }
      else {
        pdVar37 = (double *)local_198;
        for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
          *pdVar37 = 0.0;
          pdVar37 = pdVar37 + (ulong)bVar62 * -2 + 1;
        }
        auStack_70 = (undefined1  [8])pmVar12;
        lVar36 = *(long *)(param_2 + 0x60);
        pppvVar22 = &local_78;
        do {
          iVar33 = *(int *)pppvVar22;
          if (iVar33 == 1) {
            pdVar37 = (double *)((long)pvVar29 + (long)*(int *)(lVar36 + lVar35 * 0xc) * 0x18);
            pdVar38 = (double *)(local_188 + 8);
          }
          else if (iVar33 == 2) {
            pdVar37 = (double *)
                      ((long)pvVar29 + (long)*(int *)(lVar36 + (long)(int)lVar47 * 0xc) * 0x18);
            pdVar38 = (double *)auStack_168;
          }
          else if (iVar33 == 0) {
            pdVar37 = (double *)((long)pvVar29 + (long)*(int *)(lVar36 + (long)iVar39 * 0xc) * 0x18)
            ;
            pdVar38 = (double *)local_198;
          }
          else {
            pdVar37 = (double *)((long)pvVar29 + (long)*(int *)(lVar36 + (long)iVar17 * 0xc) * 0x18)
            ;
            pdVar38 = &dStack_150;
          }
          dVar5 = *pdVar37;
          dVar64 = pdVar37[1];
          pppvVar22 = (void ***)((long)pppvVar22 + 4);
          pdVar38[2] = pdVar37[2];
          *pdVar38 = dVar5;
          pdVar38[1] = dVar64;
        } while (pppvVar22 != (void ***)local_68);
        pdVar37 = (double *)(local_2e0 + lVar48 * 3);
        pdVar37[2] = (double)local_1b8 * (double)local_178._8_8_ + uStack_1c0 * (double)local_188 +
                     dStack_1b0 * local_158 + local_1a8 * local_140;
        *pdVar37 = uStack_1c0 * (double)local_198._0_8_ + dStack_180 * (double)local_1b8 +
                   dStack_1b0 * (double)auStack_168._0_8_ + local_1a8 * dStack_150;
        pdVar37[1] = uStack_1c0 * (double)local_198._8_8_ +
                     (double)local_178._0_8_ * (double)local_1b8 +
                     dStack_1b0 * (double)auStack_168._8_8_ + local_1a8 * dStack_148;
      }
      local_78 = ppvVar11;
      lVar23 = lVar23 + 1;
    } while (lVar57 != lVar23);
    _local_1c8 = auVar65;
    if (pvVar29 != (void *)0x0) {
      free(pvVar29);
    }
    *(long *)(param_2 + 0x50) = lVar57;
    *(long *)(param_2 + 0x58) = lVar57;
    puVar32 = (undefined8 *)malloc(sVar42);
    *(undefined8 **)(param_2 + 0x48) = puVar32;
    if ((long)sVar42 < 0x19) {
      if (sVar42 == 0x18) {
        uVar31 = *local_2e0;
        uVar6 = local_2e0[1];
        puVar32[2] = local_2e0[2];
        *puVar32 = uVar31;
        puVar32[1] = uVar6;
      }
    }
    else {
      memcpy(puVar32,local_2e0,sVar42);
    }
  }
  lVar57 = *(long *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  if (lVar57 != 0) {
    uVar31 = 0;
    if (*(void **)(param_2 + 0x90) != (void *)0x0) {
      free(*(void **)(param_2 + 0x90));
      uVar31 = *(undefined8 *)(param_2 + 0x98);
    }
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0xa0) = uVar31;
  }
  iVar39 = *(int *)(param_2 + 0xc4);
  if (0 < iVar39) {
    uVar46 = *(ulong *)(param_2 + 0xd0);
    uVar52 = (ulong)iVar39;
    local_3a8 = (int)*(undefined8 *)(param_2 + 0x50);
    local_348._0_8_ = (undefined8 *)0x0;
    local_3a8 = local_3a8 - iVar15;
    iVar17 = (int)(uVar46 / uVar52);
    iVar33 = iVar17 - iVar15;
    lVar57 = (long)((iVar17 + local_3a8 + (local_2c0 - iVar15)) * iVar39);
    if (lVar57 != 0) {
      local_348._0_8_ = malloc(lVar57 * 8);
    }
    sVar42 = uVar46 * 8;
    puVar32 = *(undefined8 **)(param_2 + 200);
    if ((long)sVar42 < 9) {
      if (sVar42 == 8) {
        *(undefined8 *)local_348._0_8_ = *puVar32;
      }
    }
    else {
      memcpy((void *)local_348._0_8_,puVar32,sVar42);
    }
    pmVar12 = _UNK_00108c58;
    ppvVar11 = _LC1;
    if ((long)local_3a8 != 0) {
      local_2f8 = 0;
      lVar59 = *(long *)param_1;
      lVar23 = *(long *)(param_2 + 0x128);
      do {
        local_78 = _LC1;
        pauVar24 = (undefined1 (*) [16])(lVar59 + (long)(iVar15 + (int)local_2f8) * 0x28);
        dVar64 = *(double *)(*pauVar24 + 8);
        local_198 = *pauVar24;
        auVar65 = local_198;
        dVar63 = *(double *)pauVar24[1];
        dVar7 = *(double *)(pauVar24[1] + 8);
        local_198._0_4_ = (undefined4)*(undefined8 *)*pauVar24;
        _local_188 = pauVar24[1];
        dVar5 = *(double *)pauVar24[2];
        local_178._0_8_ = dVar5;
        plVar21 = (long *)((long)(int)local_198._0_4_ * 0x10 + (long)local_350);
        lVar47 = plVar21[1];
        lVar35 = *plVar21;
        iVar51 = (int)((ulong)lVar47 >> 0x20);
        iVar49 = ((int)local_2f8 + iVar17) * iVar39;
        if (lVar47 < 0) {
          iVar51 = 0;
          piVar19 = (int *)(lVar23 + (long)(int)local_198._0_4_ * 0xc);
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = dStack_1b0;
            _local_1b8 = auVar8 << 0x40;
            auStack_70._0_4_ = 2;
            _local_1c8 = (undefined1  [16])0x0;
            pppvVar22 = &local_78;
            do {
              if (*(int *)pppvVar22 == 0) {
                uVar31 = puVar32[*piVar19 * iVar39 + iVar51];
                puVar25 = (undefined8 *)local_1c8;
              }
              else if (*(int *)pppvVar22 == 1) {
                uVar31 = puVar32[iVar39 * piVar19[1] + iVar51];
                puVar25 = (undefined8 *)(local_1c8 + 8);
              }
              else {
                uVar31 = puVar32[iVar39 * piVar19[2] + iVar51];
                puVar25 = (undefined8 *)local_1b8;
              }
              pppvVar22 = (void ***)((long)pppvVar22 + 4);
              *puVar25 = uVar31;
            } while (pppvVar22 != (void ***)(auStack_70 + 4));
            lVar47 = (long)iVar49;
            iVar51 = iVar51 + 1;
            iVar49 = iVar49 + 1;
            *(double *)(local_348._0_8_ + lVar47 * 8) =
                 (double)local_1c8 * dVar64 + 0.0 + uStack_1c0 * dVar63 + (double)local_1b8 * dVar7;
          } while (iVar39 != iVar51);
        }
        else {
          iVar53 = 0;
          iVar56 = (int)((ulong)lVar35 >> 0x20);
          local_338._0_4_ = (int)lVar47;
          do {
            _local_1c8 = (undefined1  [16])0x0;
            _local_1b8 = (undefined1  [16])0x0;
            local_78 = ppvVar11;
            auStack_70 = (undefined1  [8])pmVar12;
            pppvVar22 = &local_78;
            do {
              iVar4 = *(int *)pppvVar22;
              iVar34 = (int)((ulong)((lVar35 >> 0x20) * 0x55555556) >> 0x20) - (iVar56 >> 0x1f);
              iVar50 = iVar56;
              if ((iVar4 != 1) && (iVar34 = (int)local_338 / 3, iVar50 = (int)local_338, iVar4 != 2)
                 ) {
                if (iVar4 == 0) {
                  iVar34 = (int)lVar35 / 3;
                  iVar50 = (int)lVar35;
                }
                else {
                  iVar34 = iVar51 / 3;
                  iVar50 = iVar51;
                }
              }
              piVar19 = (int *)(lVar23 + (long)iVar34 * 0xc);
              if (iVar50 % 3 == 0) {
                iVar34 = *piVar19;
              }
              else if (iVar50 % 3 == 1) {
                iVar34 = piVar19[1];
              }
              else {
                iVar34 = piVar19[2];
              }
              puVar25 = (undefined8 *)(local_1c8 + 8);
              if (((iVar4 != 1) && (puVar25 = (undefined8 *)local_1b8, iVar4 != 2)) &&
                 (puVar25 = (undefined8 *)(local_1b8 + 8), iVar4 == 0)) {
                puVar25 = (undefined8 *)local_1c8;
              }
              pppvVar22 = (void ***)((long)pppvVar22 + 4);
              *puVar25 = puVar32[iVar34 * iVar39 + iVar53];
            } while (pppvVar22 != (void ***)local_68);
            lVar47 = (long)iVar49;
            iVar53 = iVar53 + 1;
            iVar49 = iVar49 + 1;
            *(double *)(local_348._0_8_ + lVar47 * 8) =
                 (double)local_1c8 * dVar64 + 0.0 + uStack_1c0 * dVar63 + (double)local_1b8 * dVar7
                 + dStack_1b0 * dVar5;
          } while (iVar39 != iVar53);
        }
        local_2f8 = local_2f8 + 1;
        local_198 = auVar65;
      } while (local_3a8 != local_2f8);
    }
    dVar5 = _LC3;
    if (pIVar43 != (Impl *)0x0) {
      pIVar40 = (Impl *)0x0;
      lVar59 = *(long *)(param_2 + 0x60);
      lVar23 = *(long *)(param_2 + 0x128);
      do {
        lVar47 = (long)(int)pIVar40;
        iVar15 = *(int *)((long)local_228 + lVar47 * 4);
        iVar17 = *(int *)(lVar59 + 8 + (long)*(int *)((long)local_248 + lVar47 * 0xc + 8) * 0xc);
        piVar19 = (int *)(lVar23 + (long)(iVar17 / 3) * 0xc);
        iVar17 = iVar17 % 3;
        if (iVar17 == 0) {
          iVar17 = *piVar19;
          iVar51 = piVar19[1];
        }
        else {
          iVar51 = piVar19[2];
          if (iVar17 == 1) {
            iVar17 = piVar19[1];
          }
          else {
            iVar17 = iVar51;
            iVar51 = *piVar19;
          }
        }
        if (0 < iVar15) {
          iVar49 = 0;
          puVar25 = (undefined8 *)
                    (local_348._0_8_ +
                    (long)((iVar33 + *(int *)(local_388 + lVar47 * 4) + local_3a8) * iVar39) * 8);
          do {
            iVar49 = iVar49 + 1;
            lVar47 = 0;
            dVar64 = (double)iVar49 * (dVar5 / (double)(iVar15 + 1));
            do {
              *(double *)((long)puVar25 + lVar47) =
                   *(double *)((long)puVar32 + lVar47 + (long)(iVar17 * iVar39) * 8) *
                   (dVar5 - dVar64) +
                   *(double *)((long)puVar32 + lVar47 + (long)(iVar51 * iVar39) * 8) * dVar64;
              lVar47 = lVar47 + 8;
            } while (lVar47 != uVar52 * 8);
            puVar25 = puVar25 + uVar52;
          } while (iVar15 != iVar49);
        }
        pIVar40 = pIVar40 + 1;
      } while (pIVar43 != pIVar40);
    }
    auVar13 = auStack_1e0;
    if (auStack_1e0 == (undefined1  [8])0x0) {
      local_338 = (undefined8 *)0x0;
    }
    else {
      local_338 = (undefined8 *)malloc((long)auStack_1e0 * 0xc);
    }
    if (local_358 != 0) {
      uVar46 = 0;
      do {
        while( true ) {
          lVar47 = (long)(int)uVar46;
          plVar21 = (long *)(lVar47 * 0x10 + (long)local_350);
          lVar59 = *plVar21;
          lVar23 = plVar21[1];
          iVar15 = (int)lVar59;
          if (-1 < iVar15) break;
LAB_0010759d:
          uVar46 = uVar46 + 1;
          if (local_358 == uVar46) goto LAB_001075ac;
        }
        _local_208 = (undefined1  [16])0x0;
        pppvVar22 = &local_78;
        local_258._0_4_ = _LC21;
        _local_1c8 = (undefined1  [16])0x0;
        local_78 = _LC1;
        auStack_70 = (undefined1  [8])_UNK_00108c58;
        do {
          iVar39 = *(int *)pppvVar22;
          iVar49 = (int)((ulong)lVar23 >> 0x20);
          iVar51 = (int)((ulong)lVar59 >> 0x20);
          iVar17 = (int)lVar23;
          if (iVar39 == 1) {
            if (-1 < lVar59) {
              iVar56 = iVar51 / 3;
              iVar53 = iVar51 % 3;
              lVar35 = (long)iVar51;
              goto LAB_00107400;
            }
            local_208._4_4_ = 0xffffffff;
          }
          else {
            if (iVar39 == 2) {
              puVar26 = (undefined4 *)(local_208 + 8);
              if (iVar17 < 0) {
LAB_0010768b:
                *puVar26 = 0xffffffff;
                goto LAB_001073a9;
              }
              iVar56 = iVar17 / 3;
              iVar53 = iVar17 % 3;
              lVar35 = (long)iVar17;
            }
            else if (iVar39 == 0) {
              lVar35 = (long)iVar15;
              iVar53 = iVar15 % 3;
              iVar56 = iVar15 / 3;
            }
            else {
              if (lVar23 < 0) {
                puVar26 = (undefined4 *)(local_208 + 0xc);
                goto LAB_0010768b;
              }
              lVar35 = (long)iVar49;
              iVar53 = iVar49 % 3;
              iVar56 = iVar49 / 3;
            }
LAB_00107400:
            piVar19 = (int *)(*(long *)(param_2 + 0x60) + lVar35 * 0xc);
            lVar35 = *(long *)(param_2 + 0x128);
            piVar3 = (int *)(lVar35 + (long)iVar56 * 0xc);
            if (iVar53 == 0) {
              iVar56 = *piVar3;
LAB_001072d3:
              if (iVar39 == 1) goto LAB_0010743c;
LAB_001072dc:
              if (iVar39 == 2) {
                local_208._8_4_ = iVar56;
                uVar16 = *(undefined4 *)
                          (local_388 + (long)*(int *)((long)local_380 + (long)iVar17 * 4) * 4);
                puVar26 = (undefined4 *)(local_1c8 + 8);
              }
              else if (iVar39 == 0) {
                local_208._0_4_ = iVar56;
                uVar16 = *(undefined4 *)
                          (local_388 + (long)*(int *)((long)local_380 + (long)iVar15 * 4) * 4);
                puVar26 = (undefined4 *)local_1c8;
              }
              else {
                iStack_1fc = iVar56;
                uVar16 = *(undefined4 *)
                          (local_388 + (long)*(int *)((long)local_380 + (long)iVar49 * 4) * 4);
                puVar26 = (undefined4 *)(local_1c8 + 0xc);
              }
            }
            else {
              if (iVar53 == 1) {
                iVar56 = piVar3[1];
                goto LAB_001072d3;
              }
              iVar56 = piVar3[2];
              if (iVar39 != 1) goto LAB_001072dc;
LAB_0010743c:
              local_208._4_4_ = iVar56;
              uVar16 = *(undefined4 *)
                        (local_388 + (long)*(int *)((long)local_380 + (long)iVar51 * 4) * 4);
              puVar26 = (undefined4 *)(local_1c8 + 4);
            }
            *puVar26 = uVar16;
            if (piVar19[1] <= *piVar19) {
              piVar2 = (int *)(lVar35 + (long)(piVar19[2] / 3) * 0xc);
              iVar17 = piVar19[2] % 3;
              if (iVar17 == 0) {
                iVar51 = *piVar2;
              }
              else if (iVar17 == 1) {
                iVar51 = piVar2[1];
              }
              else {
                iVar51 = piVar2[2];
              }
              if (iVar53 == 0) {
                if (piVar3[1] != iVar51) goto LAB_00107375;
                if (iVar17 != 0) goto LAB_001078e5;
                iVar17 = piVar2[1];
LAB_0010774e:
                iVar51 = *piVar3;
LAB_00107750:
                if (iVar17 == iVar51) {
                  puVar27 = local_258 + 1;
                  if ((iVar39 != 1) && (puVar27 = local_258 + 2, iVar39 != 2)) {
                    puVar27 = local_258;
                    if (iVar39 != 0) {
                      puVar27 = local_258 + 3;
                    }
                  }
                  *puVar27 = 0;
                  goto LAB_001073a9;
                }
              }
              else if (iVar53 == 1) {
                if (piVar3[2] == iVar51) {
                  if (iVar17 != 0) goto LAB_001078e5;
                  iVar17 = piVar2[1];
                  goto LAB_001081d7;
                }
              }
              else if (*piVar3 == iVar51) {
                if (iVar17 == 0) {
                  iVar17 = piVar2[1];
                }
                else {
LAB_001078e5:
                  if (iVar17 == 1) {
                    iVar17 = piVar2[2];
                  }
                  else {
                    iVar17 = *piVar2;
                  }
                  if (iVar53 == 0) goto LAB_0010774e;
                }
                if (iVar53 != 1) {
                  iVar51 = piVar3[2];
                  goto LAB_00107750;
                }
LAB_001081d7:
                iVar51 = piVar3[1];
                goto LAB_00107750;
              }
LAB_00107375:
              if (iVar39 == 1) {
                piVar19 = (int *)(local_1c8 + 4);
                iVar39 = local_1c8._4_4_;
              }
              else if (iVar39 == 2) {
                piVar19 = (int *)(local_1c8 + 8);
                iVar39 = (int)uStack_1c0;
              }
              else if (iVar39 == 0) {
                piVar19 = (int *)local_1c8;
                iVar39 = local_1c8._0_4_;
              }
              else {
                piVar19 = (int *)(local_1c8 + 0xc);
                iVar39 = uStack_1c0._4_4_;
              }
              *piVar19 = iVar39 + local_3a8;
            }
          }
LAB_001073a9:
          pppvVar22 = (void ***)((long)pppvVar22 + 4);
        } while (pppvVar22 != (void ***)local_68);
        local_378 = CONCAT44(iVar33 + local_1c8._4_4_,iVar33 + local_1c8._0_4_);
        (anonymous_namespace)::Partition::Reindex
                  (local_198,local_300 + lVar47 * 5,local_208._0_8_,stack0xfffffffffffffe00,
                   local_378,CONCAT44(iVar33 + uStack_1c0._4_4_,iVar33 + (int)uStack_1c0),
                   local_258._0_4_,iVar33 + local_2e8[lVar47]);
        uVar31 = local_198._0_8_;
        puVar32 = (undefined8 *)((long)local_338 + (long)local_2f0[lVar47] * 0xc);
        sVar42 = local_198._8_8_ * 0xc;
        if (0xc < (long)sVar42) {
          memcpy(puVar32,(void *)local_198._0_8_,sVar42);
LAB_00107595:
          free((void *)uVar31);
          goto LAB_0010759d;
        }
        if (sVar42 == 0xc) {
          *puVar32 = *(undefined8 *)local_198._0_8_;
          *(undefined4 *)(puVar32 + 1) = *(undefined4 *)(local_198._0_8_ + 8);
          goto LAB_00107595;
        }
        if ((undefined8 *)local_198._0_8_ != (undefined8 *)0x0) goto LAB_00107595;
        uVar46 = uVar46 + 1;
      } while (local_358 != uVar46);
LAB_001075ac:
      puVar32 = *(undefined8 **)(param_2 + 200);
    }
    if (puVar32 != (undefined8 *)0x0) {
      free(puVar32);
    }
    *(long *)(param_2 + 0xd0) = lVar57;
    *(long *)(param_2 + 0xd8) = lVar57;
    if (lVar57 != 0) {
      sVar42 = lVar57 * 8;
      puVar32 = (undefined8 *)malloc(sVar42);
      *(undefined8 **)(param_2 + 200) = puVar32;
      if ((long)sVar42 < 9) {
        if (sVar42 == 8) {
          *puVar32 = *(undefined8 *)local_348._0_8_;
        }
      }
      else {
        memcpy(puVar32,(void *)local_348._0_8_,sVar42);
      }
    }
    if (*(void **)(param_2 + 0x128) != (void *)0x0) {
      free(*(void **)(param_2 + 0x128));
    }
    *(undefined1 (*) [8])(param_2 + 0x130) = auVar13;
    *(undefined1 (*) [8])(param_2 + 0x138) = auVar13;
    if (auVar13 == (undefined1  [8])0x0) {
LAB_00107625:
      if (local_338 != (undefined8 *)0x0) goto LAB_001081c4;
    }
    else {
      sVar42 = (long)auVar13 * 0xc;
      puVar32 = (undefined8 *)malloc(sVar42);
      *(undefined8 **)(param_2 + 0x128) = puVar32;
      if ((long)sVar42 < 0xd) {
        if (sVar42 != 0xc) goto LAB_00107625;
        *puVar32 = *local_338;
        *(undefined4 *)(puVar32 + 1) = *(undefined4 *)(local_338 + 1);
      }
      else {
        memcpy(puVar32,local_338,sVar42);
      }
LAB_001081c4:
      free(local_338);
    }
    if ((undefined8 *)local_348._0_8_ != (undefined8 *)0x0) {
      free((void *)local_348._0_8_);
    }
  }
  manifold::Manifold::Impl::CreateHalfedges((Vec *)param_2);
  if (local_2e0 != (undefined8 *)0x0) {
    free(local_2e0);
  }
  if (local_2d8 != (undefined8 *)0x0) {
    free(local_2d8);
  }
  if (local_1e8 != (void *)0x0) {
    free(local_1e8);
  }
  if (local_2e8 != (int *)0x0) {
    free(local_2e8);
  }
  if (local_2f0 != (int *)0x0) {
    free(local_2f0);
  }
  pauVar24 = local_300;
  if (local_300 != local_2c8) {
    do {
      if (*(void **)(pauVar24[3] + 8) != (void *)0x0) {
        free(*(void **)(pauVar24[3] + 8));
      }
      if (*(void **)pauVar24[2] != (void *)0x0) {
        free(*(void **)pauVar24[2]);
      }
      pauVar24 = pauVar24 + 5;
    } while (pauVar24 != local_2c8);
    if (local_300 == (undefined1 (*) [16])0x0) goto LAB_001069f5;
  }
  operator_delete(local_300,local_298);
LAB_001069f5:
  if (local_388 != (Impl *)0x0) {
    free(local_388);
  }
  if (local_228 != (void *)0x0) {
    free(local_228);
  }
  if (local_350 != (void *)0x0) {
    free(local_350);
  }
  if (local_380 != (void *)0x0) {
    free(local_380);
  }
  if (local_248 != (void *)0x0) {
    free(local_248);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* manifold::CreateTmpEdges(manifold::Vec<manifold::Halfedge> const&) */

manifold * __thiscall manifold::CreateTmpEdges(manifold *this,Vec *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  size_t __size;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  size_t __size_00;
  ulong uVar14;
  int iVar15;
  int iVar17;
  undefined8 uVar16;
  undefined8 *puVar9;
  
  uVar1 = *(ulong *)(param_1 + 8);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __size_00 = uVar1 * 0xc;
  if (uVar1 == 0) {
    *(undefined8 *)(this + 8) = 0;
    uVar12 = 0;
    uVar14 = 0;
    __size = 0;
LAB_00108819:
    uVar4 = *(ulong *)(this + 8);
    if (uVar4 < uVar14) {
      puVar10 = *(undefined8 **)this;
LAB_0010885c:
      for (puVar5 = (undefined4 *)((long)puVar10 + uVar4 * 0xc);
          (undefined4 *)((long)puVar10 + __size) != puVar5; puVar5 = puVar5 + 3) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      *(ulong *)(this + 8) = uVar14;
      goto joined_r0x00108a95;
    }
    *(ulong *)(this + 8) = uVar14;
    if (uVar1 <= uVar12) {
      return this;
    }
    if (uVar14 != 0) goto LAB_00108a9b;
    puVar6 = *(undefined8 **)this;
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)malloc(__size_00);
    lVar8 = *(long *)param_1;
    uVar12 = 0;
    *(undefined8 **)this = puVar6;
    *(ulong *)(this + 8) = uVar1;
    *(ulong *)(this + 0x10) = uVar1;
    do {
      iVar11 = (int)uVar12;
      lVar7 = (long)iVar11;
      puVar10 = (undefined8 *)(lVar8 + lVar7 * 0xc);
      uVar16 = *puVar10;
      iVar15 = (int)uVar16;
      iVar17 = (int)((ulong)uVar16 >> 0x20);
      if (iVar17 <= iVar15) {
        if (iVar15 <= iVar17) {
          iVar17 = iVar15;
        }
        iVar11 = -1;
        uVar16 = CONCAT44(*(undefined4 *)puVar10,iVar17);
      }
      puVar10 = (undefined8 *)(lVar7 * 0xc + (long)puVar6);
      uVar12 = uVar12 + 1;
      *(int *)(puVar10 + 1) = iVar11;
      *puVar10 = uVar16;
    } while (uVar12 != uVar1);
    puVar10 = (undefined8 *)((long)puVar6 + __size_00);
    lVar8 = ((long)__size_00 >> 2) * -0x5555555555555555 >> 2;
    puVar9 = puVar6;
    if (0 < lVar8) {
      puVar13 = puVar6;
      do {
        if (*(int *)(puVar13 + 1) < 0) goto LAB_001089ab;
        if (*(int *)((long)puVar13 + 0x14) < 0) {
          puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          goto LAB_001089ab;
        }
        if (*(int *)(puVar13 + 4) < 0) {
          puVar13 = puVar13 + 3;
          goto LAB_001089ab;
        }
        if (*(int *)((long)puVar13 + 0x2c) < 0) {
          puVar13 = (undefined8 *)((long)puVar13 + 0x24);
          goto LAB_001089ab;
        }
        puVar13 = puVar13 + 6;
        puVar9 = puVar6 + lVar8 * 6;
      } while (puVar6 + lVar8 * 6 != puVar13);
    }
    puVar13 = puVar9;
    lVar8 = (long)puVar10 - (long)puVar13;
    puVar9 = puVar10;
    if (lVar8 == 0x18) {
LAB_00108b4b:
      if (-1 < *(int *)(puVar13 + 1)) {
        puVar13 = (undefined8 *)((long)puVar13 + 0xc);
LAB_00108b28:
        if (-1 < *(int *)(puVar13 + 1)) goto LAB_001089e1;
      }
LAB_001089ab:
      puVar9 = puVar13;
      puVar2 = puVar13;
      if (puVar10 != puVar13) {
        while (puVar3 = puVar2, puVar2 = (undefined8 *)((long)puVar3 + 0xc), puVar9 = puVar13,
              puVar10 != puVar2) {
          if (-1 < *(int *)((long)puVar3 + 0x14)) {
            *puVar13 = *puVar2;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)((long)puVar3 + 0x14);
            puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          }
        }
      }
    }
    else {
      if (lVar8 == 0x24) {
        if (-1 < *(int *)(puVar13 + 1)) {
          puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          goto LAB_00108b4b;
        }
        goto LAB_001089ab;
      }
      if (lVar8 == 0xc) goto LAB_00108b28;
    }
LAB_001089e1:
    __size = (long)puVar9 - (long)puVar6;
    uVar14 = ((long)__size >> 2) * -0x5555555555555555;
    uVar12 = ((long)__size >> 2) * 0x5555555555555556;
    if (uVar14 <= uVar1) goto LAB_00108819;
    puVar10 = (undefined8 *)malloc(__size);
    if ((long)__size_00 < 0xd) {
      if (__size_00 == 0xc) {
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        goto LAB_00108a50;
      }
      if (puVar6 != (undefined8 *)0x0) goto LAB_00108a50;
    }
    else {
      puVar10 = (undefined8 *)memcpy(puVar10,puVar6,__size_00);
LAB_00108a50:
      free(puVar6);
    }
    uVar4 = *(ulong *)(this + 8);
    *(undefined8 **)this = puVar10;
    *(ulong *)(this + 0x10) = uVar14;
    if (uVar4 < uVar14) goto LAB_0010885c;
    *(ulong *)(this + 8) = uVar14;
joined_r0x00108a95:
    if (uVar1 <= uVar12) {
      return this;
    }
LAB_00108a9b:
    puVar10 = (undefined8 *)malloc(__size);
    puVar6 = *(undefined8 **)this;
    if (0xc < (long)__size) {
      memmove(puVar10,puVar6,__size);
      goto LAB_00108ac2;
    }
    if (__size == 0xc) {
      *puVar10 = *puVar6;
      *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
      goto LAB_00108ac2;
    }
  }
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 **)this = puVar10;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
    return this;
  }
LAB_00108ac2:
  free(puVar6);
  *(undefined8 **)this = puVar10;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::Manifold::Impl::GetNeighbor(int) const */

void manifold::Manifold::Impl::_GLOBAL__sub_I_GetNeighbor(void)

{
  DAT_00108768 = 1;
  (anonymous_namespace)::Partition::cache = &DAT_00108790;
  DAT_00108770 = 0;
  _DAT_00108778 = ZEXT412(0x3f800000) << 0x40;
  DAT_00108778_12 = 0;
  _DAT_00108788 = (undefined1  [16])0x0;
  __cxa_atexit(std::
               unordered_map<linalg::vec<int,4>,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>,std::hash<linalg::vec<int,4>>,std::equal_to<linalg::vec<int,4>>,std::allocator<std::pair<linalg::vec<int,4>const,std::unique_ptr<(anonymous_namespace)::Partition,std::default_delete<(anonymous_namespace)::Partition>>>>>
               ::~unordered_map,&(anonymous_namespace)::Partition::cache,&__dso_handle);
  return;
}


