
/* std::_Function_handler<void (spv::Block*, spv::ReachReason, spv::Block*),
   spv::Builder::postProcessCFG()::{lambda(spv::Block*, spv::ReachReason,
   spv::Block*)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(spv::Block*,spv::ReachReason,spv::Block*),spv::Builder::postProcessCFG()::{lambda(spv::Block*,spv::ReachReason,spv::Block*)#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x18);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x18);
    }
    return 0;
  }
  *param_1 = (long)&spv::Builder::postProcessCFG()::
                    {lambda(spv::Block*,spv::ReachReason,spv::Block*)#1}::typeinfo;
  return 0;
}



/* std::pair<std::__detail::_Node_iterator<unsigned int, true, false>, bool>
   std::_Hashtable<unsigned int, unsigned int, std::allocator<unsigned int>,
   std::__detail::_Identity, std::equal_to<unsigned int>, std::hash<unsigned int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::_M_insert_unique<unsigned int, unsigned int,
   std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<unsigned int, false> > >
   >(unsigned int&&, unsigned int&&,
   std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<unsigned int, false> > >
   const&) [clone .isra.0] */

undefined1  [16]
std::
_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
::
_M_insert_unique<unsigned_int,unsigned_int,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<unsigned_int,false>>>>
          (uint *param_1,uint *param_2,_AllocNode *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  char cVar10;
  long *plVar11;
  uint *__s;
  ulong uVar12;
  ulong extraout_RDX;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  
  uVar2 = *param_2;
  if (*(long *)(param_1 + 6) == 0) {
    for (plVar11 = *(long **)(param_1 + 4); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (*(uint *)(plVar11 + 1) == uVar2) {
        uVar9 = 0;
        goto LAB_00100103;
      }
    }
    uVar12 = (ulong)uVar2 % *(ulong *)(param_1 + 2);
  }
  else {
    uVar12 = (ulong)uVar2 % *(ulong *)(param_1 + 2);
    puVar4 = *(undefined8 **)(*(long *)param_1 + uVar12 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      uVar3 = *(uint *)((undefined8 *)*puVar4 + 1);
      puVar8 = (undefined8 *)*puVar4;
      while (uVar3 != uVar2) {
        puVar5 = (undefined8 *)*puVar8;
        if ((puVar5 == (undefined8 *)0x0) ||
           (uVar3 = *(uint *)(puVar5 + 1), puVar4 = puVar8, puVar8 = puVar5,
           (ulong)uVar3 % *(ulong *)(param_1 + 2) != uVar12)) goto LAB_0010013f;
      }
      plVar11 = (long *)*puVar4;
      uVar9 = 0;
      if (plVar11 != (long *)0x0) goto LAB_00100103;
    }
  }
LAB_0010013f:
  plVar11 = (long *)operator_new(0x10);
  uVar15 = *(ulong *)(param_1 + 6);
  uVar6 = *(ulong *)(param_1 + 2);
  *plVar11 = 0;
  *(uint *)(plVar11 + 1) = *param_2;
  cVar10 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(param_1 + 8),uVar6,uVar15);
  if (cVar10 == '\0') {
    __s = *(uint **)param_1;
    puVar1 = __s + uVar12 * 2;
    plVar13 = *(long **)puVar1;
  }
  else {
    if (extraout_RDX == 1) {
      __s = param_1 + 0xc;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_alloc();
      }
      __s = (uint *)operator_new(extraout_RDX * 8);
      memset(__s,0,extraout_RDX * 8);
    }
    plVar13 = *(long **)(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0;
    uVar12 = 0;
    while (uVar15 = uVar12, plVar14 = plVar13, plVar13 != (long *)0x0) {
      while( true ) {
        plVar13 = (long *)*plVar14;
        uVar12 = (ulong)*(uint *)(plVar14 + 1) % extraout_RDX;
        puVar1 = __s + uVar12 * 2;
        if (*(long **)puVar1 == (long *)0x0) break;
        *plVar14 = **(long **)puVar1;
        **(undefined8 **)puVar1 = plVar14;
        plVar14 = plVar13;
        if (plVar13 == (long *)0x0) goto LAB_0010024d;
      }
      *plVar14 = *(long *)(param_1 + 4);
      *(long **)(param_1 + 4) = plVar14;
      *(uint **)puVar1 = param_1 + 4;
      if (*plVar14 != 0) {
        *(long **)(__s + uVar15 * 2) = plVar14;
      }
    }
LAB_0010024d:
    if (*(uint **)param_1 != param_1 + 0xc) {
      operator_delete(*(uint **)param_1,*(long *)(param_1 + 2) << 3);
    }
    *(ulong *)(param_1 + 2) = extraout_RDX;
    *(uint **)param_1 = __s;
    puVar1 = __s + ((ulong)uVar2 % extraout_RDX) * 2;
    plVar13 = *(long **)puVar1;
  }
  if (plVar13 == (long *)0x0) {
    lVar7 = *(long *)(param_1 + 4);
    *(long **)(param_1 + 4) = plVar11;
    *plVar11 = lVar7;
    if (lVar7 != 0) {
      *(long **)(__s + ((ulong)*(uint *)(lVar7 + 8) % *(ulong *)(param_1 + 2)) * 2) = plVar11;
    }
    *(uint **)puVar1 = param_1 + 4;
  }
  else {
    *plVar11 = *plVar13;
    **(undefined8 **)puVar1 = plVar11;
  }
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  uVar9 = 1;
LAB_00100103:
  auVar16[8] = uVar9;
  auVar16._0_8_ = plVar11;
  auVar16._9_7_ = 0;
  return auVar16;
}



/* spv::Builder::postProcessType(spv::Instruction const&, unsigned int) */

void __thiscall spv::Builder::postProcessType(Builder *this,Instruction *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  _Rb_tree_node_base *p_Var11;
  char *pcVar12;
  _Rb_tree_node_base *p_Var13;
  bool bVar14;
  bool bVar15;
  
  uVar10 = (ulong)param_2;
  iVar2 = spv::Builder::getMostBasicTypeClass((uint)this);
  if (iVar2 - 0x15U < 2) {
    uVar3 = spv::Builder::getScalarTypeId((uint)this);
    plVar9 = *(long **)(this + 0x1b0);
    iVar8 = **(int **)(plVar9[uVar3] + 0x18);
    if (*(int *)(param_1 + 0x10) == 0xc) {
LAB_00100548:
      uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + 4);
      if (uVar3 < 0x35) {
        if (uVar3 < 0x33) {
          return;
        }
        if (0x102ff < *(uint *)(this + 0x40)) {
          return;
        }
        cVar1 = spv::Builder::containsType(this,uVar10,0x15,0x10);
        pcVar12 = "SPV_AMD_gpu_shader_int16";
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        if (2 < uVar3 - 0x4c) {
          return;
        }
        if (0x102ff < *(uint *)(this + 0x40)) {
          return;
        }
        cVar1 = spv::Builder::containsType(this,uVar10,0x16,0x10);
        if (cVar1 == '\0') {
          return;
        }
        pcVar12 = "SPV_AMD_gpu_shader_half_float";
      }
      addExtension(this,pcVar12);
      return;
    }
    switch(*(int *)(param_1 + 0x10)) {
    case 0x3d:
    case 0x3e:
switchD_001004a8_caseD_3d:
      if (plVar9[**(uint **)(param_1 + 0x18)] != 0) {
        plVar9 = plVar9 + *(uint *)(plVar9[**(uint **)(param_1 + 0x18)] + 0xc);
      }
      uVar3 = **(uint **)(*plVar9 + 0x18);
      if (iVar8 != 8) {
        if (iVar8 != 0x10) {
          return;
        }
        if (uVar3 < 0xd) {
          if ((uVar3 != 0) && ((0x120eUL >> ((ulong)uVar3 & 0x3f) & 1) != 0)) {
            return;
          }
        }
        else if (uVar3 == 0x14e5) {
          return;
        }
        if (iVar2 == 0x15) {
          p_Var5 = (_Rb_tree_node_base *)(this + 0x160);
          p_Var4 = *(_Rb_tree_node_base **)(this + 0x168);
          if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
            p_Var11 = p_Var5;
            if (p_Var5 == *(_Rb_tree_node_base **)(this + 0x170)) {
              bVar14 = true;
              goto LAB_001006fa;
            }
LAB_00101081:
            lVar6 = std::_Rb_tree_decrement(p_Var11);
            iVar2 = *(int *)(lVar6 + 0x20);
LAB_00100f82:
            if (0x15 < iVar2) {
              return;
            }
          }
          else {
            do {
              p_Var11 = p_Var4;
              iVar2 = *(int *)(p_Var11 + 0x20);
              p_Var4 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
              if (0x16 < iVar2) {
                p_Var4 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
              }
            } while (p_Var4 != (_Rb_tree_node_base *)0x0);
            if (iVar2 < 0x17) goto LAB_00100f82;
            if (*(_Rb_tree_node_base **)(this + 0x170) != p_Var11) goto LAB_00101081;
          }
          bVar14 = true;
          if (p_Var5 != p_Var11) goto LAB_00100f9a;
          goto LAB_001006fa;
        }
        if (iVar2 != 0x16) {
          return;
        }
        p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
        p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
        if (*(_Rb_tree_node_base **)(this + 0x168) != (_Rb_tree_node_base *)0x0) {
          do {
            p_Var11 = p_Var5;
            iVar2 = *(int *)(p_Var11 + 0x20);
            p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
            if (9 < iVar2) {
              p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
            }
          } while (p_Var5 != (_Rb_tree_node_base *)0x0);
          if (iVar2 < 10) goto joined_r0x00100a38;
        }
        if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
          lVar6 = std::_Rb_tree_decrement(p_Var11);
          iVar2 = *(int *)(lVar6 + 0x20);
          goto joined_r0x00100a38;
        }
        goto LAB_0010067b;
      }
      if (uVar3 < 0xd) {
        if ((1 < uVar3) && ((0x1204UL >> ((ulong)uVar3 & 0x3f) & 1) != 0)) {
          return;
        }
      }
      else if (uVar3 == 0x14e5) {
        return;
      }
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
      p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
      if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
LAB_00100dfe:
        if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
          lVar6 = std::_Rb_tree_decrement(p_Var11);
          iVar2 = *(int *)(lVar6 + 0x20);
          goto LAB_001008ea;
        }
      }
      else {
        do {
          p_Var11 = p_Var5;
          iVar2 = *(int *)(p_Var11 + 0x20);
          p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
          if (0x27 < iVar2) {
            p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
          }
        } while (p_Var5 != (_Rb_tree_node_base *)0x0);
        if (0x27 < iVar2) goto LAB_00100dfe;
LAB_001008ea:
        if (0x26 < iVar2) {
          return;
        }
      }
      bVar14 = true;
      if ((_Rb_tree_node_base *)(this + 0x160) != p_Var11) {
LAB_00100902:
        bVar14 = 0x27 < *(int *)(p_Var11 + 0x20);
      }
LAB_001007ad:
      p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
      *(undefined4 *)(p_Var5 + 0x20) = 0x27;
      break;
    default:
      if (iVar2 == 0x15) {
        if (iVar8 == 0x10) {
          p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
          p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
          if (*(_Rb_tree_node_base **)(this + 0x168) != (_Rb_tree_node_base *)0x0) {
            do {
              p_Var11 = p_Var5;
              iVar2 = *(int *)(p_Var11 + 0x20);
              p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
              if (0x16 < iVar2) {
                p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
              }
            } while (p_Var5 != (_Rb_tree_node_base *)0x0);
            if (iVar2 < 0x17) goto joined_r0x00100db0;
          }
          if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
            lVar6 = std::_Rb_tree_decrement(p_Var11);
            iVar2 = *(int *)(lVar6 + 0x20);
            goto joined_r0x00100db0;
          }
          goto LAB_001006eb;
        }
        if (iVar8 != 8) {
          if (iVar8 != 0x40) {
            return;
          }
          p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
          p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
          if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
LAB_00100f16:
            if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
              lVar6 = std::_Rb_tree_decrement(p_Var11);
              iVar2 = *(int *)(lVar6 + 0x20);
              goto LAB_00100512;
            }
          }
          else {
            do {
              p_Var11 = p_Var5;
              iVar2 = *(int *)(p_Var11 + 0x20);
              p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
              if (0xb < iVar2) {
                p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
              }
            } while (p_Var5 != (_Rb_tree_node_base *)0x0);
            if (0xb < iVar2) goto LAB_00100f16;
LAB_00100512:
            if (10 < iVar2) {
              return;
            }
          }
          bVar14 = true;
          if (p_Var11 != (_Rb_tree_node_base *)(this + 0x160)) {
            bVar14 = 0xb < *(int *)(p_Var11 + 0x20);
          }
          p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
          *(undefined4 *)(p_Var5 + 0x20) = 0xb;
          break;
        }
        p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
        p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
        if (*(_Rb_tree_node_base **)(this + 0x168) != (_Rb_tree_node_base *)0x0) {
          do {
            p_Var11 = p_Var5;
            iVar2 = *(int *)(p_Var11 + 0x20);
            p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
            if (0x27 < iVar2) {
              p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
            }
          } while (p_Var5 != (_Rb_tree_node_base *)0x0);
          if (iVar2 < 0x28) goto joined_r0x00100798;
        }
        if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
          lVar6 = std::_Rb_tree_decrement(p_Var11);
          iVar2 = *(int *)(lVar6 + 0x20);
          goto joined_r0x00100798;
        }
LAB_0010079e:
        bVar14 = true;
        if (p_Var11 != (_Rb_tree_node_base *)(this + 0x160)) goto LAB_00100902;
        goto LAB_001007ad;
      }
      if (iVar8 != 0x10) {
        if (iVar8 != 0x40) {
          return;
        }
        p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
        p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
        if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
LAB_00100fcd:
          if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
            lVar6 = std::_Rb_tree_decrement(p_Var11);
            iVar2 = *(int *)(lVar6 + 0x20);
            goto LAB_0010096a;
          }
        }
        else {
          do {
            p_Var11 = p_Var5;
            iVar2 = *(int *)(p_Var11 + 0x20);
            p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
            if (10 < iVar2) {
              p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
            }
          } while (p_Var5 != (_Rb_tree_node_base *)0x0);
          if (10 < iVar2) goto LAB_00100fcd;
LAB_0010096a:
          if (9 < iVar2) {
            return;
          }
        }
        bVar14 = true;
        if (p_Var11 != (_Rb_tree_node_base *)(this + 0x160)) {
          bVar14 = 10 < *(int *)(p_Var11 + 0x20);
        }
        p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
        *(undefined4 *)(p_Var5 + 0x20) = 10;
        break;
      }
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
      p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
      if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
LAB_00100ef6:
        if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
          lVar6 = std::_Rb_tree_decrement(p_Var11);
          iVar2 = *(int *)(lVar6 + 0x20);
          goto LAB_00100d42;
        }
      }
      else {
        do {
          p_Var11 = p_Var5;
          iVar2 = *(int *)(p_Var11 + 0x20);
          p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
          if (9 < iVar2) {
            p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
          }
        } while (p_Var5 != (_Rb_tree_node_base *)0x0);
        if (9 < iVar2) goto LAB_00100ef6;
LAB_00100d42:
        if (8 < iVar2) {
          return;
        }
      }
      bVar14 = true;
      if (p_Var11 != (_Rb_tree_node_base *)(this + 0x160)) goto LAB_00100d5a;
      goto LAB_0010068a;
    case 0x41:
    case 0x43:
      bVar14 = *(int *)(plVar9[uVar10] + 0x10) == 0x20;
      bVar15 = iVar2 != 0x15;
      if (bVar14 || bVar15) {
        return;
      }
      if (iVar8 != 0x10) {
        if (iVar8 != 8) {
          return;
        }
        p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
        p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
        if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
LAB_00100fad:
          if (p_Var11 == *(_Rb_tree_node_base **)(this + 0x170)) goto LAB_0010079e;
          lVar6 = std::_Rb_tree_decrement(p_Var11);
          iVar2 = *(int *)(lVar6 + 0x20);
        }
        else {
          do {
            p_Var11 = p_Var5;
            iVar2 = *(int *)(p_Var11 + 0x20);
            p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
            if (0x27 < iVar2) {
              p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
            }
          } while (p_Var5 != (_Rb_tree_node_base *)0x0);
          if (0x27 < iVar2 && (!bVar14 && !bVar15)) goto LAB_00100fad;
        }
joined_r0x00100798:
        if (0x26 < iVar2) {
          return;
        }
        goto LAB_0010079e;
      }
      p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
      if (*(_Rb_tree_node_base **)(this + 0x168) != (_Rb_tree_node_base *)0x0) {
        do {
          p_Var11 = p_Var5;
          iVar2 = *(int *)(p_Var11 + 0x20);
          p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
          if (0x16 < iVar2) {
            p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
          }
        } while (p_Var5 != (_Rb_tree_node_base *)0x0);
        if (iVar2 < 0x17 || (bVar14 || bVar15)) goto joined_r0x00100db0;
      }
      if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
        lVar6 = std::_Rb_tree_decrement(p_Var11);
        iVar2 = *(int *)(lVar6 + 0x20);
joined_r0x00100db0:
        if (0x15 < iVar2) {
          return;
        }
      }
LAB_001006eb:
      bVar14 = true;
      if (p_Var11 != (_Rb_tree_node_base *)(this + 0x160)) {
LAB_00100f9a:
        bVar14 = 0x16 < *(int *)(p_Var11 + 0x20);
      }
LAB_001006fa:
      p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
      *(undefined4 *)(p_Var5 + 0x20) = 0x16;
      break;
    case 0x53:
      goto switchD_001004a8_caseD_53;
    case 0x71:
    case 0x72:
    case 0x73:
      goto switchD_001004a8_caseD_71;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x10);
    if (uVar3 == 0x41) {
      return;
    }
    if (0x41 < uVar3) {
      if (uVar3 == 0x43) {
        return;
      }
      if (2 < uVar3 - 0x71) {
        return;
      }
switchD_001004a8_caseD_71:
      cVar1 = spv::Builder::containsType(this,uVar10,0x16,0x10);
      if ((cVar1 != '\0') ||
         (cVar1 = spv::Builder::containsType(this,uVar10,0x15,0x10), cVar1 != '\0')) {
        p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
        for (p_Var5 = *(_Rb_tree_node_base **)(this + 0x170); p_Var5 != p_Var11;
            p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var5)) {
          if (*(int *)(p_Var5 + 0x20) - 0x1151U < 4) goto LAB_001003fe;
        }
        cVar1 = spv::Builder::containsType(this,uVar10,0x16,0x10);
        if (cVar1 != '\0') {
          p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
          p_Var4 = p_Var11;
          if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
LAB_00100dbe:
            if (p_Var4 != *(_Rb_tree_node_base **)(this + 0x170)) {
              lVar6 = std::_Rb_tree_decrement(p_Var4);
              iVar2 = *(int *)(lVar6 + 0x20);
              goto LAB_00100b1e;
            }
          }
          else {
            do {
              p_Var4 = p_Var5;
              iVar2 = *(int *)(p_Var4 + 0x20);
              p_Var5 = *(_Rb_tree_node_base **)(p_Var4 + 0x18);
              cVar7 = '\0';
              if (9 < iVar2) {
                p_Var5 = *(_Rb_tree_node_base **)(p_Var4 + 0x10);
                cVar7 = cVar1;
              }
            } while (p_Var5 != (_Rb_tree_node_base *)0x0);
            if (cVar7 != '\0') goto LAB_00100dbe;
LAB_00100b1e:
            if (8 < iVar2) goto LAB_001007ec;
          }
          bVar14 = true;
          if (p_Var11 != p_Var4) {
            bVar14 = 9 < *(int *)(p_Var4 + 0x20);
          }
          p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
          *(undefined4 *)(p_Var5 + 0x20) = 9;
          std::_Rb_tree_insert_and_rebalance(bVar14,p_Var5,p_Var4,p_Var11);
          *(long *)(this + 0x180) = *(long *)(this + 0x180) + 1;
        }
LAB_001007ec:
        cVar1 = spv::Builder::containsType(this,uVar10,0x15,0x10);
        if (cVar1 != '\0') {
          p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
          p_Var4 = p_Var11;
          if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
LAB_00100dde:
            if (p_Var4 != *(_Rb_tree_node_base **)(this + 0x170)) {
              lVar6 = std::_Rb_tree_decrement(p_Var4);
              iVar2 = *(int *)(lVar6 + 0x20);
              goto LAB_00100846;
            }
          }
          else {
            do {
              p_Var4 = p_Var5;
              iVar2 = *(int *)(p_Var4 + 0x20);
              p_Var5 = *(_Rb_tree_node_base **)(p_Var4 + 0x18);
              cVar7 = '\0';
              if (0x16 < iVar2) {
                p_Var5 = *(_Rb_tree_node_base **)(p_Var4 + 0x10);
                cVar7 = cVar1;
              }
            } while (p_Var5 != (_Rb_tree_node_base *)0x0);
            if (cVar7 != '\0') goto LAB_00100dde;
LAB_00100846:
            if (0x15 < iVar2) goto LAB_001003fe;
          }
          bVar14 = true;
          if (p_Var11 != p_Var4) {
            bVar14 = 0x16 < *(int *)(p_Var4 + 0x20);
          }
          p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
          *(undefined4 *)(p_Var5 + 0x20) = 0x16;
          std::_Rb_tree_insert_and_rebalance(bVar14,p_Var5,p_Var4,p_Var11);
          *(long *)(this + 0x180) = *(long *)(this + 0x180) + 1;
        }
      }
LAB_001003fe:
      cVar1 = spv::Builder::containsType(this,uVar10,0x15,8);
      if (cVar1 == '\0') {
        return;
      }
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x170);
      p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
      p_Var4 = p_Var5;
      p_Var13 = p_Var11;
      if (p_Var5 == p_Var11) {
        p_Var4 = *(_Rb_tree_node_base **)(this + 0x168);
        if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
          bVar14 = true;
          goto LAB_00100a9e;
        }
LAB_00100a63:
        do {
          p_Var13 = p_Var4;
          iVar2 = *(int *)(p_Var13 + 0x20);
          p_Var4 = *(_Rb_tree_node_base **)(p_Var13 + 0x18);
          if (0x27 < iVar2) {
            p_Var4 = *(_Rb_tree_node_base **)(p_Var13 + 0x10);
          }
          cVar7 = '\0';
          if (0x27 < iVar2) {
            cVar7 = cVar1;
          }
        } while (p_Var4 != (_Rb_tree_node_base *)0x0);
        if (cVar7 == '\0') goto LAB_00100a86;
        if (p_Var5 != p_Var13) goto LAB_00100ad0;
      }
      else {
        do {
          if (*(int *)(p_Var4 + 0x20) - 0x1160U < 3) {
            return;
          }
          p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var4);
        } while (p_Var4 != p_Var11);
        p_Var4 = *(_Rb_tree_node_base **)(this + 0x168);
        if (*(_Rb_tree_node_base **)(this + 0x168) != (_Rb_tree_node_base *)0x0) goto LAB_00100a63;
LAB_00100ad0:
        lVar6 = std::_Rb_tree_decrement(p_Var13);
        iVar2 = *(int *)(lVar6 + 0x20);
LAB_00100a86:
        if (0x26 < iVar2) {
          return;
        }
      }
      bVar14 = true;
      if (p_Var13 != p_Var11) {
        bVar14 = 0x27 < *(int *)(p_Var13 + 0x20);
      }
LAB_00100a9e:
      p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
      *(undefined4 *)(p_Var5 + 0x20) = 0x27;
      std::_Rb_tree_insert_and_rebalance(bVar14,p_Var5,p_Var13,p_Var11);
      *(long *)(this + 0x180) = *(long *)(this + 0x180) + 1;
      return;
    }
    if (uVar3 == 0xc) goto LAB_00100548;
    if (1 < uVar3 - 0x3d) {
      return;
    }
    if (iVar2 != 0x1e) {
      plVar9 = *(long **)(this + 0x1b0);
      iVar8 = 0;
      goto switchD_001004a8_caseD_3d;
    }
    cVar1 = spv::Builder::containsType(this,uVar10,0x15,8);
    if (cVar1 != '\0') {
      p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
      if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
        p_Var4 = p_Var11;
        if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
LAB_00100ea6:
          lVar6 = std::_Rb_tree_decrement(p_Var4);
          iVar2 = *(int *)(lVar6 + 0x20);
          goto LAB_00100bb9;
        }
        bVar14 = true;
      }
      else {
        do {
          p_Var4 = p_Var5;
          iVar2 = *(int *)(p_Var4 + 0x20);
          p_Var5 = *(_Rb_tree_node_base **)(p_Var4 + 0x18);
          cVar7 = '\0';
          if (0x27 < iVar2) {
            p_Var5 = *(_Rb_tree_node_base **)(p_Var4 + 0x10);
            cVar7 = cVar1;
          }
        } while (p_Var5 != (_Rb_tree_node_base *)0x0);
        if (cVar7 == '\0') {
LAB_00100bb9:
          if (0x26 < iVar2) goto LAB_001009bc;
        }
        else if (*(_Rb_tree_node_base **)(this + 0x170) != p_Var4) goto LAB_00100ea6;
        bVar14 = true;
        if (p_Var11 != p_Var4) {
          bVar14 = 0x27 < *(int *)(p_Var4 + 0x20);
        }
      }
      p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
      *(undefined4 *)(p_Var5 + 0x20) = 0x27;
      std::_Rb_tree_insert_and_rebalance(bVar14,p_Var5,p_Var4,p_Var11);
      *(long *)(this + 0x180) = *(long *)(this + 0x180) + 1;
    }
LAB_001009bc:
    cVar1 = spv::Builder::containsType(this,uVar10,0x15,0x10);
    if (cVar1 != '\0') {
      p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
      if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
        p_Var4 = p_Var11;
        if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
LAB_00100ec3:
          lVar6 = std::_Rb_tree_decrement(p_Var4);
          iVar2 = *(int *)(lVar6 + 0x20);
          goto LAB_00100c49;
        }
        bVar14 = true;
      }
      else {
        do {
          p_Var4 = p_Var5;
          iVar2 = *(int *)(p_Var4 + 0x20);
          p_Var5 = *(_Rb_tree_node_base **)(p_Var4 + 0x18);
          cVar7 = '\0';
          if (0x16 < iVar2) {
            p_Var5 = *(_Rb_tree_node_base **)(p_Var4 + 0x10);
            cVar7 = cVar1;
          }
        } while (p_Var5 != (_Rb_tree_node_base *)0x0);
        if (cVar7 == '\0') {
LAB_00100c49:
          if (0x15 < iVar2) goto LAB_001009d8;
        }
        else if (*(_Rb_tree_node_base **)(this + 0x170) != p_Var4) goto LAB_00100ec3;
        bVar14 = true;
        if (p_Var11 != p_Var4) {
          bVar14 = 0x16 < *(int *)(p_Var4 + 0x20);
        }
      }
      p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
      *(undefined4 *)(p_Var5 + 0x20) = 0x16;
      std::_Rb_tree_insert_and_rebalance(bVar14,p_Var5,p_Var4,p_Var11);
      *(long *)(this + 0x180) = *(long *)(this + 0x180) + 1;
    }
LAB_001009d8:
    cVar1 = spv::Builder::containsType(this,uVar10,0x16,0x10);
    if (cVar1 == '\0') {
      return;
    }
    p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
    p_Var5 = *(_Rb_tree_node_base **)(this + 0x168);
    if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
LAB_00100e3e:
      if (p_Var11 == *(_Rb_tree_node_base **)(this + 0x170)) goto LAB_0010067b;
      lVar6 = std::_Rb_tree_decrement(p_Var11);
      iVar2 = *(int *)(lVar6 + 0x20);
    }
    else {
      do {
        p_Var11 = p_Var5;
        iVar2 = *(int *)(p_Var11 + 0x20);
        p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
        cVar7 = '\0';
        if (9 < iVar2) {
          p_Var5 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
          cVar7 = cVar1;
        }
      } while (p_Var5 != (_Rb_tree_node_base *)0x0);
      if (cVar7 != '\0') goto LAB_00100e3e;
    }
joined_r0x00100a38:
    if (8 < iVar2) {
      return;
    }
LAB_0010067b:
    bVar14 = true;
    if ((_Rb_tree_node_base *)(this + 0x160) != p_Var11) {
LAB_00100d5a:
      bVar14 = 9 < *(int *)(p_Var11 + 0x20);
    }
LAB_0010068a:
    p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
    *(undefined4 *)(p_Var5 + 0x20) = 9;
  }
  std::_Rb_tree_insert_and_rebalance(bVar14,p_Var5,p_Var11,(_Rb_tree_node_base *)(this + 0x160));
  *(long *)(this + 0x180) = *(long *)(this + 0x180) + 1;
switchD_001004a8_caseD_53:
  return;
}



/* spv::Builder::postProcess(spv::Instruction&) */

void __thiscall spv::Builder::postProcess(Builder *this,Instruction *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  long *plVar9;
  long lVar10;
  _Rb_tree_node_base *p_Var11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  bool bVar17;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0x6c) {
    if (uVar1 < 0x67) {
      if (uVar1 != 0xc) {
        if (uVar1 - 0x3d < 2) {
          lVar10 = *(long *)(this + 0x1b0);
          lVar15 = *(long *)(lVar10 + (ulong)**(uint **)(param_1 + 0x18) * 8);
          if (*(int *)(lVar15 + 0x10) == 0x41) {
            puVar4 = *(uint **)(lVar15 + 0x18);
            piVar5 = *(int **)(*(long *)(lVar10 + (ulong)*(uint *)(*(long *)(lVar10 + (ulong)*puVar4
                                                                                      * 8) + 0xc) *
                                                  8) + 0x18);
            if (*piVar5 == 0x14e5) {
              uVar12 = (ulong)(uint)piVar5[1];
              lVar14 = *(long *)(lVar10 + uVar12 * 8);
              iVar6 = (int)(*(long *)(lVar15 + 0x20) - (long)puVar4 >> 2);
              if (iVar6 < 2) {
                uVar13 = 0;
              }
              else {
                puVar16 = puVar4 + 1;
                uVar13 = 0;
                do {
                  if (*(int *)(lVar14 + 0x10) == 0x1e) {
                    iVar2 = **(int **)(*(long *)(lVar10 + (ulong)*puVar16 * 8) + 0x18);
                    for (plVar9 = *(long **)(this + 0x2b8); plVar9 != *(long **)(this + 0x2c0);
                        plVar9 = plVar9 + 1) {
                      if ((((*(int *)(*plVar9 + 0x10) == 0x48) &&
                           (piVar5 = *(int **)(*plVar9 + 0x18), *piVar5 == (int)uVar12)) &&
                          (iVar2 == piVar5[1])) && ((piVar5[2] == 0x23 || (piVar5[2] == 7)))) {
                        uVar13 = uVar13 | piVar5[3];
                      }
                    }
                    uVar12 = (ulong)*(uint *)(*(long *)(lVar14 + 0x18) + (long)iVar2 * 4);
                    lVar14 = *(long *)(lVar10 + uVar12 * 8);
                  }
                  else {
                    if (1 < *(int *)(lVar14 + 0x10) - 0x1cU) break;
                    for (plVar9 = *(long **)(this + 0x2b8); plVar9 != *(long **)(this + 0x2c0);
                        plVar9 = plVar9 + 1) {
                      if (((*(int *)(*plVar9 + 0x10) == 0x47) &&
                          (piVar5 = *(int **)(*plVar9 + 0x18), *piVar5 == (int)uVar12)) &&
                         (piVar5[1] == 6)) {
                        uVar13 = uVar13 | piVar5[2];
                      }
                    }
                    uVar12 = (ulong)**(uint **)(lVar14 + 0x18);
                    lVar14 = *(long *)(lVar10 + uVar12 * 8);
                  }
                  puVar16 = puVar16 + 1;
                } while (puVar4 + (ulong)(iVar6 - 2) + 2 != puVar16);
              }
              puVar4 = *(uint **)(param_1 + 0x18) + (ulong)(uVar1 == 0x3e) + 2;
              uVar13 = uVar13 | *puVar4;
              *puVar4 = -uVar13 & uVar13;
            }
          }
        }
        goto LAB_00101140;
      }
      if (2 < *(int *)(*(long *)(param_1 + 0x18) + 4) - 0x4cU) goto LAB_00101140;
      p_Var8 = (_Rb_tree_node_base *)(this + 0x160);
      p_Var11 = *(_Rb_tree_node_base **)(this + 0x168);
      if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
        p_Var7 = p_Var8;
        if (p_Var8 != *(_Rb_tree_node_base **)(this + 0x170)) {
LAB_0010148e:
          lVar10 = std::_Rb_tree_decrement(p_Var7);
          iVar6 = *(int *)(lVar10 + 0x20);
LAB_001014c2:
          if (0x33 < iVar6) goto LAB_00101140;
          goto LAB_001014cb;
        }
        bVar17 = true;
      }
      else {
        do {
          p_Var7 = p_Var11;
          iVar6 = *(int *)(p_Var7 + 0x20);
          p_Var11 = *(_Rb_tree_node_base **)(p_Var7 + 0x18);
          if (0x34 < iVar6) {
            p_Var11 = *(_Rb_tree_node_base **)(p_Var7 + 0x10);
          }
        } while (p_Var11 != (_Rb_tree_node_base *)0x0);
        if (iVar6 < 0x35) goto LAB_001014c2;
        if (*(_Rb_tree_node_base **)(this + 0x170) != p_Var7) goto LAB_0010148e;
LAB_001014cb:
        bVar17 = true;
        if (p_Var8 != p_Var7) {
          bVar17 = 0x34 < *(int *)(p_Var7 + 0x20);
        }
      }
      p_Var11 = (_Rb_tree_node_base *)operator_new(0x28);
      *(undefined4 *)(p_Var11 + 0x20) = 0x34;
      std::_Rb_tree_insert_and_rebalance(bVar17,p_Var11,p_Var7,p_Var8);
      *(long *)(this + 0x180) = *(long *)(this + 0x180) + 1;
      goto LAB_00101140;
    }
    p_Var8 = *(_Rb_tree_node_base **)(this + 0x168);
    p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
    if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
LAB_0010150d:
      if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
        lVar10 = std::_Rb_tree_decrement(p_Var11);
        iVar6 = *(int *)(lVar10 + 0x20);
        goto LAB_00101352;
      }
    }
    else {
      do {
        p_Var11 = p_Var8;
        iVar6 = *(int *)(p_Var11 + 0x20);
        p_Var8 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
        if (0x32 < iVar6) {
          p_Var8 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
        }
      } while (p_Var8 != (_Rb_tree_node_base *)0x0);
      if (0x32 < iVar6) goto LAB_0010150d;
LAB_00101352:
      if (0x31 < iVar6) goto LAB_00101140;
    }
    bVar17 = true;
    if ((_Rb_tree_node_base *)(this + 0x160) != p_Var11) {
      bVar17 = 0x32 < *(int *)(p_Var11 + 0x20);
    }
    p_Var8 = (_Rb_tree_node_base *)operator_new(0x28);
    *(undefined4 *)(p_Var8 + 0x20) = 0x32;
  }
  else if (uVar1 < 0xd8) {
    if (uVar1 < 0xd2) goto LAB_00101140;
    p_Var8 = (_Rb_tree_node_base *)(this + 0x160);
    p_Var7 = *(_Rb_tree_node_base **)(this + 0x168);
    if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
      p_Var11 = p_Var8;
      if (p_Var8 != *(_Rb_tree_node_base **)(this + 0x170)) {
LAB_0010155a:
        lVar10 = std::_Rb_tree_decrement(p_Var11);
        iVar6 = *(int *)(lVar10 + 0x20);
LAB_00101232:
        if (0x32 < iVar6) goto LAB_00101140;
        goto LAB_0010123b;
      }
      bVar17 = true;
    }
    else {
      do {
        p_Var11 = p_Var7;
        iVar6 = *(int *)(p_Var11 + 0x20);
        p_Var7 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
        if (0x33 < iVar6) {
          p_Var7 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
        }
      } while (p_Var7 != (_Rb_tree_node_base *)0x0);
      if (iVar6 < 0x34) goto LAB_00101232;
      if (*(_Rb_tree_node_base **)(this + 0x170) != p_Var11) goto LAB_0010155a;
LAB_0010123b:
      bVar17 = true;
      if (p_Var8 != p_Var11) {
        bVar17 = 0x33 < *(int *)(p_Var11 + 0x20);
      }
    }
    p_Var8 = (_Rb_tree_node_base *)operator_new(0x28);
    *(undefined4 *)(p_Var8 + 0x20) = 0x33;
  }
  else {
    if (uVar1 != 0x14b0) goto LAB_00101140;
    addExtension(this,"SPV_NV_shader_subgroup_partitioned");
    p_Var8 = *(_Rb_tree_node_base **)(this + 0x168);
    p_Var11 = (_Rb_tree_node_base *)(this + 0x160);
    if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
LAB_0010152e:
      if (p_Var11 != *(_Rb_tree_node_base **)(this + 0x170)) {
        lVar10 = std::_Rb_tree_decrement(p_Var11);
        iVar6 = *(int *)(lVar10 + 0x20);
        goto LAB_001012dd;
      }
    }
    else {
      do {
        p_Var11 = p_Var8;
        iVar6 = *(int *)(p_Var11 + 0x20);
        p_Var8 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
        if (0x14b1 < iVar6) {
          p_Var8 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
        }
      } while (p_Var8 != (_Rb_tree_node_base *)0x0);
      if (0x14b1 < iVar6) goto LAB_0010152e;
LAB_001012dd:
      if (0x14b0 < iVar6) goto LAB_00101140;
    }
    bVar17 = true;
    if ((_Rb_tree_node_base *)(this + 0x160) != p_Var11) {
      bVar17 = 0x14b1 < *(int *)(p_Var11 + 0x20);
    }
    p_Var8 = (_Rb_tree_node_base *)operator_new(0x28);
    *(undefined4 *)(p_Var8 + 0x20) = 0x14b1;
  }
  std::_Rb_tree_insert_and_rebalance(bVar17,p_Var8,p_Var11,(_Rb_tree_node_base *)(this + 0x160));
  *(long *)(this + 0x180) = *(long *)(this + 0x180) + 1;
LAB_00101140:
  if (*(uint *)(param_1 + 0xc) != 0) {
    postProcessType(this,param_1,*(uint *)(param_1 + 0xc));
  }
  lVar15 = *(long *)(param_1 + 0x20);
  lVar10 = *(long *)(param_1 + 0x18);
  lVar14 = 0;
  if (0 < (int)(lVar15 - lVar10 >> 2)) {
    do {
      if ((((1L << ((byte)lVar14 & 0x3f) & *(ulong *)(*(long *)(param_1 + 0x30) + (lVar14 >> 6) * 8)
            ) != 0) &&
          (lVar3 = *(long *)(*(long *)(this + 0x1b0) + (ulong)*(uint *)(lVar10 + lVar14 * 4) * 8),
          lVar3 != 0)) && (uVar1 = *(uint *)(lVar3 + 0xc), uVar1 != 0)) {
        postProcessType(this,param_1,uVar1);
        lVar10 = *(long *)(param_1 + 0x18);
        lVar15 = *(long *)(param_1 + 0x20);
      }
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 < (int)(lVar15 - lVar10 >> 2));
  }
  return;
}



/* spv::Builder::postProcessFeatures() */

void __thiscall spv::Builder::postProcessFeatures(Builder *this)

{
  uint uVar1;
  Instruction *pIVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  char cVar6;
  long *plVar7;
  _Rb_tree_node_base *p_Var8;
  long *plVar9;
  _Rb_tree_node_base *p_Var10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  char cVar17;
  _Rb_tree_node_base *p_Var18;
  _Rb_tree_node_base *p_Var19;
  _Rb_tree_node_base *p_Var20;
  bool bVar21;
  undefined8 *puVar22;
  long *plVar23;
  long in_FS_OFFSET;
  long *local_80;
  uint local_5c;
  undefined1 local_58 [16];
  _Rb_tree_node_base *local_48;
  long local_40;
  
  lVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var20 = (_Rb_tree_node_base *)(this + 0x160);
  while( true ) {
    local_58._0_4_ = 0x20;
    plVar7 = (long *)std::__detail::
                     _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                     ::operator[]((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                   *)(this + 0x388),(uint *)local_58);
    if ((int)(plVar7[1] - *plVar7 >> 3) <= (int)lVar15) break;
    local_58._0_4_ = 0x20;
    plVar7 = (long *)std::__detail::
                     _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                     ::operator[]((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                   *)(this + 0x388),(uint *)local_58);
    lVar13 = *(long *)(*plVar7 + lVar15 * 8);
    if (**(int **)(lVar13 + 0x18) == 0x14e5) {
      cVar6 = spv::Builder::containsType(this,(*(int **)(lVar13 + 0x18))[1],0x15,8);
      if (cVar6 != '\0') {
        if (*(uint *)(this + 0x40) < 0x10500) {
          addExtension(this,"SPV_KHR_8bit_storage");
        }
        p_Var8 = *(_Rb_tree_node_base **)(this + 0x168);
        if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) {
          p_Var18 = p_Var20;
          if (*(_Rb_tree_node_base **)(this + 0x170) != p_Var20) {
LAB_00101bf0:
            lVar12 = std::_Rb_tree_decrement(p_Var18);
            if (*(int *)(lVar12 + 0x20) < 0x1160) goto LAB_00101ba2;
            goto LAB_001017b0;
          }
          bVar21 = true;
        }
        else {
          do {
            p_Var18 = p_Var8;
            iVar14 = *(int *)(p_Var18 + 0x20);
            p_Var8 = *(_Rb_tree_node_base **)(p_Var18 + 0x18);
            if (0x1160 < iVar14) {
              p_Var8 = *(_Rb_tree_node_base **)(p_Var18 + 0x10);
            }
            cVar17 = '\0';
            if (0x1160 < iVar14) {
              cVar17 = cVar6;
            }
          } while (p_Var8 != (_Rb_tree_node_base *)0x0);
          if (cVar17 == '\0') {
            if (0x115f < iVar14) goto LAB_001017b0;
          }
          else if (*(_Rb_tree_node_base **)(this + 0x170) != p_Var18) goto LAB_00101bf0;
LAB_00101ba2:
          bVar21 = true;
          if (p_Var18 != p_Var20) {
            bVar21 = 0x1160 < *(int *)(p_Var18 + 0x20);
          }
        }
        p_Var8 = (_Rb_tree_node_base *)operator_new(0x28);
        *(undefined4 *)(p_Var8 + 0x20) = 0x1160;
        std::_Rb_tree_insert_and_rebalance(bVar21,p_Var8,p_Var18,p_Var20);
        *(long *)(this + 0x180) = *(long *)(this + 0x180) + 1;
      }
LAB_001017b0:
      cVar6 = spv::Builder::containsType
                        (this,*(undefined4 *)(*(long *)(lVar13 + 0x18) + 4),0x15,0x10);
      if (cVar6 == '\0') {
        cVar6 = spv::Builder::containsType
                          (this,*(undefined4 *)(*(long *)(lVar13 + 0x18) + 4),0x16,0x10);
        if (cVar6 == '\0') goto LAB_001016e6;
        uVar1 = *(uint *)(this + 0x40);
      }
      else {
        uVar1 = *(uint *)(this + 0x40);
      }
      if (uVar1 < 0x10300) {
        addExtension(this,"SPV_KHR_16bit_storage");
        p_Var8 = *(_Rb_tree_node_base **)(this + 0x168);
        if (*(_Rb_tree_node_base **)(this + 0x168) != (_Rb_tree_node_base *)0x0) goto LAB_001017f3;
LAB_00101c95:
        p_Var18 = p_Var20;
        if (*(_Rb_tree_node_base **)(this + 0x170) != p_Var20) {
LAB_00101c38:
          lVar13 = std::_Rb_tree_decrement(p_Var18);
          iVar14 = *(int *)(lVar13 + 0x20);
LAB_00101816:
          if (0x1150 < iVar14) goto LAB_001016e6;
          goto LAB_00101822;
        }
        bVar21 = true;
      }
      else {
        p_Var8 = *(_Rb_tree_node_base **)(this + 0x168);
        if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) goto LAB_00101c95;
LAB_001017f3:
        do {
          p_Var18 = p_Var8;
          iVar14 = *(int *)(p_Var18 + 0x20);
          p_Var8 = *(_Rb_tree_node_base **)(p_Var18 + 0x18);
          if (0x1151 < iVar14) {
            p_Var8 = *(_Rb_tree_node_base **)(p_Var18 + 0x10);
          }
        } while (p_Var8 != (_Rb_tree_node_base *)0x0);
        if (iVar14 < 0x1152) goto LAB_00101816;
        if (*(_Rb_tree_node_base **)(this + 0x170) != p_Var18) goto LAB_00101c38;
LAB_00101822:
        bVar21 = true;
        if (p_Var20 != p_Var18) {
          bVar21 = 0x1151 < *(int *)(p_Var18 + 0x20);
        }
      }
      p_Var8 = (_Rb_tree_node_base *)operator_new(0x28);
      *(undefined4 *)(p_Var8 + 0x20) = 0x1151;
      std::_Rb_tree_insert_and_rebalance(bVar21,p_Var8,p_Var18,p_Var20);
      *(long *)(this + 0x180) = *(long *)(this + 0x180) + 1;
    }
LAB_001016e6:
    lVar15 = lVar15 + 1;
  }
  local_80 = *(long **)(this + 0x198);
  if (local_80 != *(long **)(this + 0x1a0)) {
    do {
      lVar15 = *local_80;
      plVar7 = *(long **)(lVar15 + 0x90);
      if (plVar7 != *(long **)(lVar15 + 0x98)) {
        do {
          lVar13 = *plVar7;
          puVar22 = *(undefined8 **)(lVar13 + 8);
          if (puVar22 != *(undefined8 **)(lVar13 + 0x10)) {
            do {
              pIVar2 = (Instruction *)*puVar22;
              puVar22 = puVar22 + 1;
              postProcess(this,pIVar2);
            } while (*(undefined8 **)(lVar13 + 0x10) != puVar22);
          }
          plVar23 = *(long **)(lVar13 + 0x50);
          if (plVar23 != *(long **)(lVar13 + 0x58)) {
            do {
              while( true ) {
                iVar14 = *(int *)(*plVar23 + 8);
                spv::Builder::getDerefTypeId((uint)this);
                cVar6 = spv::Builder::containsPhysicalStorageBufferOrArray((uint)this);
                if (cVar6 == '\0') break;
                plVar3 = *(long **)(this + 0x2c0);
                plVar9 = *(long **)(this + 0x2b8);
                cVar17 = '\0';
                if (plVar9 != plVar3) {
                  do {
                    while( true ) {
                      piVar4 = *(int **)(*plVar9 + 0x18);
                      if ((iVar14 != *piVar4) || (*(int *)(*plVar9 + 0x10) != 0x47)) break;
                      if (piVar4[1] - 0x14ebU < 2) {
                        cVar17 = cVar6;
                      }
                      plVar9 = plVar9 + 1;
                      if (plVar9 == plVar3) goto LAB_00101958;
                    }
                    plVar9 = plVar9 + 1;
                  } while (plVar9 != plVar3);
LAB_00101958:
                  if (cVar17 != '\0') break;
                }
                spv::Builder::addDecoration(this,iVar14,0x14ec,0xffffffff);
                plVar23 = plVar23 + 1;
                if (*(long **)(lVar13 + 0x58) == plVar23) goto LAB_00101988;
              }
              plVar23 = plVar23 + 1;
            } while (*(long **)(lVar13 + 0x58) != plVar23);
          }
LAB_00101988:
          plVar7 = plVar7 + 1;
        } while (*(long **)(lVar15 + 0x98) != plVar7);
      }
      local_80 = local_80 + 1;
    } while (*(long **)(this + 0x1a0) != local_80);
  }
  p_Var8 = *(_Rb_tree_node_base **)(this + 0x168);
  p_Var18 = p_Var8;
  p_Var19 = p_Var20;
  if (p_Var8 != (_Rb_tree_node_base *)0x0) {
    do {
      while( true ) {
        p_Var10 = p_Var18;
        if (*(int *)(p_Var10 + 0x20) < 0x14e1) break;
        p_Var18 = *(_Rb_tree_node_base **)(p_Var10 + 0x10);
        p_Var19 = p_Var10;
        if (*(_Rb_tree_node_base **)(p_Var10 + 0x10) == (_Rb_tree_node_base *)0x0)
        goto LAB_001019f4;
      }
      p_Var18 = *(_Rb_tree_node_base **)(p_Var10 + 0x18);
    } while (*(_Rb_tree_node_base **)(p_Var10 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_001019f4:
    p_Var18 = p_Var20;
    if (((p_Var20 != p_Var19) && (*(int *)(p_Var19 + 0x20) < 0x14e2)) &&
       (*(undefined4 *)(this + 0x154) = 3, *(uint *)(this + 0x40) < 0x10500)) {
      addExtension(this,"SPV_KHR_vulkan_memory_model");
      p_Var8 = *(_Rb_tree_node_base **)(this + 0x168);
      if (*(_Rb_tree_node_base **)(this + 0x168) == (_Rb_tree_node_base *)0x0) goto LAB_00101b7f;
    }
    do {
      while( true ) {
        p_Var10 = p_Var8;
        p_Var19 = *(_Rb_tree_node_base **)(p_Var10 + 0x10);
        p_Var8 = *(_Rb_tree_node_base **)(p_Var10 + 0x18);
        if (*(int *)(p_Var10 + 0x20) < 0x114c) break;
        p_Var8 = p_Var19;
        p_Var18 = p_Var10;
        if (p_Var19 == (_Rb_tree_node_base *)0x0) goto LAB_00101a33;
      }
    } while (p_Var8 != (_Rb_tree_node_base *)0x0);
LAB_00101a33:
    if ((p_Var20 != p_Var18) && (*(int *)(p_Var18 + 0x20) < 0x114d)) {
      plVar7 = *(long **)(this + 0x270);
      p_Var20 = (_Rb_tree_node_base *)0x0;
      lVar12 = 0;
      local_48 = (_Rb_tree_node_base *)0x0;
      lVar13 = *plVar7;
      local_58 = (undefined1  [16])0x0;
      lVar15 = *(long *)(lVar13 + 0x18);
      if (0 < (int)(*(long *)(lVar13 + 0x20) - lVar15 >> 2)) {
        do {
          if ((1L << ((byte)lVar12 & 0x3f) &
              *(ulong *)(*(long *)(lVar13 + 0x30) + (lVar12 >> 6) * 8)) != 0) {
            local_5c = *(uint *)(lVar15 + lVar12 * 4);
            lVar15 = *(long *)(*(long *)(this + 0x1b0) + (ulong)local_5c * 8);
            if ((*(int *)(lVar15 + 0x10) == 0x3b) && (**(int **)(lVar15 + 0x18) == 4)) {
              if (p_Var20 == p_Var8) {
                std::vector<unsigned_int,std::allocator<unsigned_int>>::
                _M_realloc_insert<unsigned_int_const&>
                          ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_58,p_Var20,
                           &local_5c);
                lVar13 = *plVar7;
                p_Var8 = (_Rb_tree_node_base *)local_58._8_8_;
                p_Var20 = local_48;
              }
              else {
                *(uint *)p_Var8 = local_5c;
                local_58._8_8_ = p_Var8 + 4;
                p_Var8 = p_Var8 + 4;
              }
            }
          }
          lVar15 = *(long *)(lVar13 + 0x18);
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < (int)(*(long *)(lVar13 + 0x20) - lVar15 >> 2));
        uVar5 = local_58._0_8_;
        uVar11 = (long)p_Var8 - local_58._0_8_;
        if (uVar11 < 5) {
          if ((void *)local_58._0_8_ == (void *)0x0) goto LAB_00101b7f;
        }
        else {
          uVar16 = 0;
          do {
            lVar15 = uVar16 * 4;
            uVar16 = uVar16 + 1;
            spv::Builder::addDecoration(this,*(undefined4 *)(uVar5 + lVar15),0x14,0xffffffff);
          } while (uVar16 < (ulong)((long)uVar11 >> 2));
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          operator_delete((void *)uVar5,(long)p_Var20 - uVar5);
          return;
        }
        goto LAB_00101d3c;
      }
    }
  }
LAB_00101b7f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101d3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (spv::Block*, spv::ReachReason, spv::Block*),
   spv::Builder::postProcessCFG()::{lambda(spv::Block*, spv::ReachReason,
   spv::Block*)#1}>::_M_invoke(std::_Any_data const&, spv::Block*&&, spv::ReachReason&&,
   spv::Block*&&) */

void std::
     _Function_handler<void(spv::Block*,spv::ReachReason,spv::Block*),spv::Builder::postProcessCFG()::{lambda(spv::Block*,spv::ReachReason,spv::Block*)#1}>
     ::_M_invoke(_Any_data *param_1,Block **param_2,ReachReason *param_3,Block **param_4)

{
  long *plVar1;
  int iVar2;
  Block *pBVar3;
  Block *pBVar4;
  long *plVar5;
  Block *pBVar6;
  ulong uVar7;
  char cVar8;
  undefined8 *puVar9;
  long *plVar10;
  void *__s;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong extraout_RDX;
  long *extraout_RDX_00;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  Block *local_48;
  long local_40;
  
  plVar12 = *(long **)param_1;
  pBVar3 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pBVar4 = *param_4;
  iVar2 = *(int *)param_3;
  plVar5 = (long *)*plVar12;
  local_48 = pBVar3;
  if (plVar5[3] == 0) {
    for (puVar9 = (undefined8 *)plVar5[2]; puVar9 != (undefined8 *)0x0;
        puVar9 = (undefined8 *)*puVar9) {
      if (pBVar3 == (Block *)puVar9[1]) goto joined_r0x00101eb8;
    }
    uVar13 = (ulong)pBVar3 % (ulong)plVar5[1];
  }
  else {
    uVar13 = (ulong)pBVar3 % (ulong)plVar5[1];
    plVar10 = *(long **)(*plVar5 + uVar13 * 8);
    if (plVar10 != (long *)0x0) {
      pBVar6 = (Block *)((long *)*plVar10)[1];
      plVar11 = (long *)*plVar10;
      while (pBVar3 != pBVar6) {
        plVar15 = (long *)*plVar11;
        if ((plVar15 == (long *)0x0) ||
           (pBVar6 = (Block *)plVar15[1], plVar10 = plVar11, plVar11 = plVar15,
           uVar13 != (ulong)pBVar6 % (ulong)plVar5[1])) goto LAB_00101e4c;
      }
      if (*plVar10 != 0) goto joined_r0x00101eb8;
    }
  }
LAB_00101e4c:
  plVar10 = (long *)operator_new(0x10);
  uVar16 = plVar5[3];
  uVar7 = plVar5[1];
  *plVar10 = 0;
  plVar10[1] = (long)pBVar3;
  cVar8 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(plVar5 + 4),uVar7,uVar16);
  if (cVar8 == '\0') {
    plVar11 = (long *)*plVar5;
    plVar15 = plVar11 + uVar13;
    plVar14 = (long *)*plVar15;
  }
  else {
    if (extraout_RDX == 1) {
      plVar11 = plVar5 + 6;
      plVar5[6] = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        plVar5 = (long *)(extraout_RDX >> 0x3d);
        goto joined_r0x0010223f;
      }
      __s = operator_new(extraout_RDX * 8);
      plVar11 = (long *)memset(__s,0,extraout_RDX * 8);
    }
    plVar15 = (long *)plVar5[2];
    plVar5[2] = 0;
    uVar13 = 0;
    while (uVar16 = uVar13, plVar14 = plVar15, plVar15 != (long *)0x0) {
      while( true ) {
        plVar15 = (long *)*plVar14;
        uVar13 = (ulong)plVar14[1] % extraout_RDX;
        plVar1 = plVar11 + uVar13;
        if ((long *)*plVar1 == (long *)0x0) break;
        *plVar14 = *(long *)*plVar1;
        *(long **)*plVar1 = plVar14;
        plVar14 = plVar15;
        if (plVar15 == (long *)0x0) goto LAB_00102059;
      }
      *plVar14 = plVar5[2];
      plVar5[2] = (long)plVar14;
      *plVar1 = (long)(plVar5 + 2);
      if (*plVar14 != 0) {
        plVar11[uVar16] = (long)plVar14;
      }
    }
LAB_00102059:
    if ((long *)*plVar5 != plVar5 + 6) {
      operator_delete((long *)*plVar5,plVar5[1] << 3);
    }
    plVar5[1] = extraout_RDX;
    *plVar5 = (long)plVar11;
    plVar15 = plVar11 + (ulong)pBVar3 % extraout_RDX;
    plVar14 = (long *)*plVar15;
  }
  if (plVar14 == (long *)0x0) {
    *plVar10 = plVar5[2];
    plVar5[2] = (long)plVar10;
    if (*plVar10 != 0) {
      plVar11[*(ulong *)(*plVar10 + 8) % (ulong)plVar5[1]] = (long)plVar10;
    }
    *plVar15 = (long)(plVar5 + 2);
  }
  else {
    *plVar10 = *plVar14;
    *(long **)*plVar15 = plVar10;
  }
  plVar5[3] = plVar5[3] + 1;
joined_r0x00101eb8:
  if (iVar2 == 1) {
    puVar9 = (undefined8 *)
             __detail::
             _Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             ::operator[]((_Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                           *)plVar12[2],&local_48);
    *puVar9 = pBVar4;
  }
  else if (iVar2 == 2) {
    plVar5 = (long *)plVar12[1];
    if (plVar5[3] == 0) {
      for (puVar9 = (undefined8 *)plVar5[2]; puVar9 != (undefined8 *)0x0;
          puVar9 = (undefined8 *)*puVar9) {
        if (pBVar3 == (Block *)puVar9[1]) goto LAB_00101e03;
      }
      uVar13 = (ulong)pBVar3 % (ulong)plVar5[1];
    }
    else {
      uVar13 = (ulong)pBVar3 % (ulong)plVar5[1];
      plVar12 = *(long **)(*plVar5 + uVar13 * 8);
      if (plVar12 != (long *)0x0) {
        pBVar4 = (Block *)((long *)*plVar12)[1];
        plVar10 = (long *)*plVar12;
        while (pBVar3 != pBVar4) {
          plVar11 = (long *)*plVar10;
          if ((plVar11 == (long *)0x0) ||
             (pBVar4 = (Block *)plVar11[1], plVar12 = plVar10, plVar10 = plVar11,
             uVar13 != (ulong)pBVar4 % (ulong)plVar5[1])) goto LAB_00101f69;
        }
        if (*plVar12 != 0) goto LAB_00101e03;
      }
    }
LAB_00101f69:
    plVar10 = (long *)operator_new(0x10);
    uVar16 = plVar5[3];
    uVar7 = plVar5[1];
    *plVar10 = 0;
    plVar10[1] = (long)pBVar3;
    cVar8 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(plVar5 + 4),uVar7,uVar16);
    if (cVar8 == '\0') {
      plVar12 = (long *)*plVar5;
    }
    else {
      if (extraout_RDX_00 == (long *)0x1) {
        plVar12 = plVar5 + 6;
        plVar5[6] = 0;
      }
      else {
        plVar12 = extraout_RDX_00;
        if ((ulong)extraout_RDX_00 >> 0x3c != 0) {
          while( true ) {
            plVar12 = (long *)((ulong)plVar12 >> 0x3d);
            plVar5 = plVar12;
joined_r0x0010223f:
            if (plVar5 == (long *)0x0) break;
            std::__throw_bad_array_new_length();
          }
                    /* WARNING: Subroutine does not return */
          std::__throw_bad_alloc();
        }
        plVar12 = (long *)operator_new((long)extraout_RDX_00 * 8);
        memset(plVar12,0,(long)extraout_RDX_00 * 8);
      }
      plVar11 = (long *)plVar5[2];
      plVar5[2] = 0;
      uVar13 = 0;
      while (uVar16 = uVar13, plVar15 = plVar11, plVar11 != (long *)0x0) {
        while( true ) {
          plVar11 = (long *)*plVar15;
          uVar13 = (ulong)plVar15[1] % (ulong)extraout_RDX_00;
          plVar14 = plVar12 + uVar13;
          if ((long *)*plVar14 == (long *)0x0) break;
          *plVar15 = *(long *)*plVar14;
          *(long **)*plVar14 = plVar15;
          plVar15 = plVar11;
          if (plVar11 == (long *)0x0) goto LAB_001021a2;
        }
        *plVar15 = plVar5[2];
        plVar5[2] = (long)plVar15;
        *plVar14 = (long)(plVar5 + 2);
        if (*plVar15 != 0) {
          plVar12[uVar16] = (long)plVar15;
        }
      }
LAB_001021a2:
      if ((long *)*plVar5 != plVar5 + 6) {
        operator_delete((long *)*plVar5,plVar5[1] * 8);
      }
      plVar5[1] = (long)extraout_RDX_00;
      uVar13 = (ulong)pBVar3 % (ulong)extraout_RDX_00;
      *plVar5 = (long)plVar12;
    }
    plVar11 = plVar12 + uVar13;
    if ((long *)*plVar11 == (long *)0x0) {
      *plVar10 = plVar5[2];
      plVar5[2] = (long)plVar10;
      if (*plVar10 != 0) {
        plVar12[*(ulong *)(*plVar10 + 8) % (ulong)plVar5[1]] = (long)plVar10;
      }
      *plVar11 = (long)(plVar5 + 2);
    }
    else {
      *plVar10 = *(long *)*plVar11;
      *(long **)*plVar11 = plVar10;
    }
    plVar5[3] = plVar5[3] + 1;
  }
LAB_00101e03:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* spv::Builder::postProcessCFG() */

void __thiscall spv::Builder::postProcessCFG(Builder *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  ulong *puVar9;
  uint uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  _AllocNode *extraout_RDX;
  _AllocNode *extraout_RDX_00;
  _AllocNode *extraout_RDX_01;
  long *plVar18;
  long lVar19;
  _AllocNode *p_Var20;
  _AllocNode *p_Var21;
  _AllocNode *extraout_RDX_02;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  long in_FS_OFFSET;
  long local_188;
  long *local_180;
  ulong *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 *local_168;
  ulong local_160;
  undefined8 *local_158;
  long local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138 [2];
  undefined8 *local_128;
  ulong local_120;
  undefined8 *local_118;
  long local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 *local_e8;
  ulong local_e0;
  undefined8 *local_d8;
  long local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 *local_a8;
  ulong local_a0;
  undefined8 *local_98;
  long local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = 1;
  local_158 = (undefined8 *)0x0;
  local_150 = 0;
  local_140 = 0;
  local_138[0] = 0;
  local_120 = 1;
  local_118 = (undefined8 *)0x0;
  local_148 = _LC10;
  local_110 = 0;
  plVar14 = *(long **)(this + 0x198);
  local_100 = 0;
  local_f8[0] = 0;
  local_e0 = 1;
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_c0 = 0;
  local_b8[0] = 0;
  local_a0 = 1;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_78[0] = 0;
  local_108 = _LC10;
  local_c8 = _LC10;
  local_88 = _LC10;
  local_168 = local_138;
  local_128 = local_f8;
  local_e8 = local_b8;
  local_a8 = local_78;
  if (plVar14 != *(long **)(this + 0x1a0)) {
    do {
      lVar15 = *plVar14;
      uVar4 = **(undefined8 **)(lVar15 + 0x90);
      local_68 = (undefined1  [16])0x0;
      local_58 = (code *)0x0;
      pcStack_50 = (code *)0x0;
      plVar11 = (long *)operator_new(0x18);
      local_68._0_8_ = plVar11;
      plVar11[2] = (long)&local_128;
      *plVar11 = (long)&local_168;
      plVar11[1] = (long)&local_e8;
      local_58 = std::
                 _Function_handler<void(spv::Block*,spv::ReachReason,spv::Block*),spv::Builder::postProcessCFG()::{lambda(spv::Block*,spv::ReachReason,spv::Block*)#1}>
                 ::_M_manager;
      pcStack_50 = std::
                   _Function_handler<void(spv::Block*,spv::ReachReason,spv::Block*),spv::Builder::postProcessCFG()::{lambda(spv::Block*,spv::ReachReason,spv::Block*)#1}>
                   ::_M_invoke;
      spv::inReadableOrder(uVar4);
      p_Var21 = extraout_RDX;
      if (local_58 != (code *)0x0) {
        (*local_58)(local_68,local_68,3);
        p_Var21 = extraout_RDX_00;
      }
      puVar13 = *(ulong **)(lVar15 + 0x90);
      if (puVar13 != *(ulong **)(lVar15 + 0x98)) {
LAB_00102540:
        do {
          uVar22 = *puVar13;
          puVar24 = local_d8;
          if (local_d0 == 0) {
            for (; puVar24 != (undefined8 *)0x0; puVar24 = (undefined8 *)*puVar24) {
              if (uVar22 == puVar24[1]) goto LAB_0010257a;
            }
          }
          else {
            p_Var20 = (_AllocNode *)(uVar22 % local_e0);
            plVar11 = (long *)local_e8[(long)p_Var20];
            p_Var21 = p_Var20;
            if (plVar11 != (long *)0x0) {
              uVar16 = ((long *)*plVar11)[1];
              plVar18 = (long *)*plVar11;
              do {
                if (uVar22 == uVar16) {
                  if (*plVar11 != 0) goto LAB_0010257a;
                  break;
                }
                plVar26 = (long *)*plVar18;
                if (plVar26 == (long *)0x0) break;
                uVar16 = plVar26[1];
                p_Var21 = (_AllocNode *)(uVar16 % local_e0);
                plVar11 = plVar18;
                plVar18 = plVar26;
              } while (p_Var20 == p_Var21);
            }
          }
          puVar24 = local_118;
          if (local_110 == 0) {
            for (; puVar24 != (undefined8 *)0x0; puVar24 = (undefined8 *)*puVar24) {
              if (uVar22 == puVar24[1]) goto LAB_0010257a;
            }
          }
          else {
            p_Var20 = (_AllocNode *)(uVar22 % local_120);
            plVar11 = (long *)local_128[(long)p_Var20];
            p_Var21 = p_Var20;
            if (plVar11 != (long *)0x0) {
              uVar16 = ((long *)*plVar11)[1];
              plVar18 = (long *)*plVar11;
              do {
                if (uVar22 == uVar16) {
                  if (*plVar11 != 0) goto LAB_0010257a;
                  break;
                }
                plVar26 = (long *)*plVar18;
                if (plVar26 == (long *)0x0) break;
                uVar16 = plVar26[1];
                p_Var21 = (_AllocNode *)(uVar16 % local_120);
                plVar11 = plVar18;
                plVar18 = plVar26;
              } while (p_Var20 == p_Var21);
            }
          }
          puVar24 = local_158;
          if (local_150 == 0) {
            for (; puVar24 != (undefined8 *)0x0; puVar24 = (undefined8 *)*puVar24) {
              if (uVar22 == puVar24[1]) goto LAB_001025b3;
            }
          }
          else {
            p_Var20 = (_AllocNode *)(uVar22 % local_160);
            plVar11 = (long *)local_168[(long)p_Var20];
            p_Var21 = p_Var20;
            if (plVar11 != (long *)0x0) {
              uVar16 = ((long *)*plVar11)[1];
              plVar18 = (long *)*plVar11;
              do {
                if (uVar22 == uVar16) {
                  if (*plVar11 != 0) goto LAB_001025b3;
                  break;
                }
                plVar26 = (long *)*plVar18;
                if (plVar26 == (long *)0x0) break;
                uVar16 = plVar26[1];
                p_Var21 = (_AllocNode *)(uVar16 % local_160);
                plVar11 = plVar18;
                plVar18 = plVar26;
              } while (p_Var20 == p_Var21);
            }
          }
          plVar11 = *(long **)(uVar22 + 8);
          if (plVar11 == *(long **)(uVar22 + 0x10)) goto LAB_001025b3;
          do {
            lVar19 = *plVar11;
            plVar11 = plVar11 + 1;
            local_178 = (ulong *)CONCAT44(local_178._4_4_,*(undefined4 *)(lVar19 + 8));
            std::
            _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
            ::
            _M_insert_unique<unsigned_int,unsigned_int,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<unsigned_int,false>>>>
                      ((uint *)&local_a8,(uint *)&local_178,p_Var21);
            p_Var21 = extraout_RDX_02;
          } while (*(long **)(uVar22 + 0x10) != plVar11);
          puVar13 = puVar13 + 1;
        } while (*(ulong **)(lVar15 + 0x98) != puVar13);
      }
LAB_001025c4:
      plVar14 = plVar14 + 1;
      puVar24 = local_d8;
    } while (*(long **)(this + 0x1a0) != plVar14);
    for (; puVar24 != (undefined8 *)0x0; puVar24 = (undefined8 *)*puVar24) {
      uVar22 = puVar24[1];
      puVar17 = *(undefined8 **)(uVar22 + 0x10);
      puVar12 = *(undefined8 **)(uVar22 + 8);
      if (puVar17 == puVar12) {
        std::
        vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
        ::_M_default_append((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
                             *)(uVar22 + 8),1);
      }
      else if (((long)puVar17 - (long)puVar12 != 8) &&
              (puVar12 = puVar12 + 1, puVar23 = puVar12, puVar17 != puVar12)) {
LAB_00102688:
        do {
          plVar14 = (long *)*puVar23;
          if (plVar14 != (long *)0x0) {
            if (*(code **)(*plVar14 + 8) != Instruction::~Instruction) {
              puVar23 = puVar23 + 1;
              (**(code **)(*plVar14 + 8))(plVar14);
              if (puVar17 == puVar23) break;
              goto LAB_00102688;
            }
            pvVar8 = (void *)plVar14[6];
            *plVar14 = (long)&PTR__Instruction_00105028;
            if (pvVar8 != (void *)0x0) {
              operator_delete(pvVar8,plVar14[10] - (long)pvVar8);
            }
            pvVar8 = (void *)plVar14[3];
            if (pvVar8 != (void *)0x0) {
              operator_delete(pvVar8,plVar14[5] - (long)pvVar8);
            }
            operator_delete(plVar14,0x60);
          }
          puVar23 = puVar23 + 1;
        } while (puVar17 != puVar23);
        *(undefined8 **)(uVar22 + 0x10) = puVar12;
      }
      if (*(long *)(uVar22 + 0x38) != *(long *)(uVar22 + 0x40)) {
        *(long *)(uVar22 + 0x40) = *(long *)(uVar22 + 0x38);
      }
      puVar13 = (ulong *)operator_new(0x60);
      *(undefined1 (*) [16])(puVar13 + 3) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar13 + 5) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar13 + 10) = (undefined1  [16])0x0;
      puVar17 = *(undefined8 **)(uVar22 + 0x10);
      *puVar13 = (ulong)&PTR__Instruction_00105028;
      puVar13[1] = 0;
      *(undefined4 *)(puVar13 + 2) = 0xff;
      *(undefined4 *)(puVar13 + 7) = 0;
      puVar13[8] = 0;
      *(undefined4 *)(puVar13 + 9) = 0;
      local_178 = puVar13;
      if (puVar17 == *(undefined8 **)(uVar22 + 0x18)) {
        std::
        vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
        ::_M_realloc_insert<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>
                  ((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
                    *)(uVar22 + 8),puVar17,&local_178);
        puVar9 = local_178;
        uVar10 = (uint)puVar13[1];
        puVar13[0xb] = uVar22;
        if (uVar10 != 0) {
          lVar15 = *(long *)(*(long *)(uVar22 + 0x68) + 8);
          lVar19 = *(long *)(lVar15 + 0x20);
          uVar22 = *(long *)(lVar15 + 0x28) - lVar19 >> 3;
          if (uVar22 <= uVar10) {
            uVar16 = (ulong)(uVar10 + 0x10);
            if (uVar22 < uVar16) {
              std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append
                        ((vector<spv::Instruction*,std::allocator<spv::Instruction*>> *)
                         (lVar15 + 0x20),uVar16 - uVar22);
              lVar19 = *(long *)(lVar15 + 0x20);
            }
            else if ((uVar16 < uVar22) &&
                    (lVar7 = lVar19 + uVar16 * 8, *(long *)(lVar15 + 0x28) != lVar7)) {
              *(long *)(lVar15 + 0x28) = lVar7;
            }
          }
          *(ulong **)(lVar19 + (ulong)uVar10 * 8) = puVar13;
        }
        if (puVar9 != (ulong *)0x0) {
          if (*(code **)(*puVar9 + 8) == Instruction::~Instruction) {
            pvVar8 = (void *)puVar9[6];
            *puVar9 = (ulong)&PTR__Instruction_00105028;
            if (pvVar8 != (void *)0x0) {
              operator_delete(pvVar8,puVar9[10] - (long)pvVar8);
            }
            pvVar8 = (void *)puVar9[3];
            if (pvVar8 != (void *)0x0) {
              operator_delete(pvVar8,puVar9[5] - (long)pvVar8);
            }
            operator_delete(puVar9,0x60);
          }
          else {
            (**(code **)(*puVar9 + 8))(puVar9);
          }
        }
      }
      else {
        *puVar17 = puVar13;
        *(undefined8 **)(uVar22 + 0x10) = puVar17 + 1;
        puVar13[0xb] = uVar22;
      }
    }
    for (puVar24 = local_118; puVar24 != (undefined8 *)0x0; puVar24 = (undefined8 *)*puVar24) {
      lVar15 = puVar24[1];
      lVar19 = puVar24[2];
      puVar12 = *(undefined8 **)(lVar15 + 0x10);
      puVar17 = *(undefined8 **)(lVar15 + 8);
      local_188 = lVar19;
      if (puVar12 == puVar17) {
        std::
        vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
        ::_M_default_append((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
                             *)(lVar15 + 8),1);
      }
      else if (((long)puVar12 - (long)puVar17 != 8) &&
              (puVar17 = puVar17 + 1, puVar23 = puVar17, puVar12 != puVar17)) {
LAB_0010280c:
        do {
          plVar14 = (long *)*puVar23;
          if (plVar14 != (long *)0x0) {
            if (*(code **)(*plVar14 + 8) != Instruction::~Instruction) {
              puVar23 = puVar23 + 1;
              (**(code **)(*plVar14 + 8))(plVar14);
              if (puVar12 == puVar23) break;
              goto LAB_0010280c;
            }
            pvVar8 = (void *)plVar14[6];
            *plVar14 = (long)&PTR__Instruction_00105028;
            if (pvVar8 != (void *)0x0) {
              operator_delete(pvVar8,plVar14[10] - (long)pvVar8);
            }
            pvVar8 = (void *)plVar14[3];
            if (pvVar8 != (void *)0x0) {
              operator_delete(pvVar8,plVar14[5] - (long)pvVar8);
            }
            operator_delete(plVar14,0x60);
          }
          puVar23 = puVar23 + 1;
        } while (puVar12 != puVar23);
        *(undefined8 **)(lVar15 + 0x10) = puVar17;
      }
      if (*(long *)(lVar15 + 0x38) != *(long *)(lVar15 + 0x40)) {
        *(long *)(lVar15 + 0x40) = *(long *)(lVar15 + 0x38);
      }
      plVar14 = (long *)operator_new(0x60);
      *plVar14 = (long)&PTR__Instruction_00105028;
      plVar14[1] = 0;
      *(undefined4 *)(plVar14 + 2) = 0xf9;
      *(undefined4 *)(plVar14 + 7) = 0;
      plVar14[8] = 0;
      *(undefined4 *)(plVar14 + 9) = 0;
      *(undefined1 (*) [16])(plVar14 + 3) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar14 + 5) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar14 + 10) = (undefined1  [16])0x0;
      local_180 = (long *)CONCAT44(local_180._4_4_,*(undefined4 *)(**(long **)(lVar19 + 8) + 8));
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)(plVar14 + 3),0,&local_180);
      puVar13 = (ulong *)plVar14[8];
      if (puVar13 == (ulong *)plVar14[10]) {
        local_170 = (undefined4)plVar14[9];
        local_178 = puVar13;
        std::vector<bool,std::allocator<bool>>::_M_insert_aux
                  (plVar14 + 6,puVar13,CONCAT44(uStack_16c,local_170),1);
      }
      else {
        iVar2 = (int)plVar14[9];
        if (iVar2 == 0x3f) {
          *(undefined4 *)(plVar14 + 9) = 0;
          plVar14[8] = (long)(puVar13 + 1);
        }
        else {
          *(int *)(plVar14 + 9) = iVar2 + 1;
        }
        *puVar13 = *puVar13 | 1L << ((byte)iVar2 & 0x3f);
      }
      puVar17 = *(undefined8 **)(lVar15 + 0x10);
      if (puVar17 == *(undefined8 **)(lVar15 + 0x18)) {
        local_180 = plVar14;
        std::
        vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
        ::_M_realloc_insert<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>
                  ((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
                    *)(lVar15 + 8),puVar17,&local_180);
        uVar10 = *(uint *)(plVar14 + 1);
        plVar14[0xb] = lVar15;
        plVar11 = local_180;
        if (uVar10 != 0) goto LAB_001030b5;
LAB_00103035:
        if (plVar11 == (long *)0x0) goto LAB_0010291b;
        if (*(code **)(*plVar11 + 8) != Instruction::~Instruction) {
          (**(code **)(*plVar11 + 8))(plVar11);
          goto LAB_0010291b;
        }
        pvVar8 = (void *)plVar11[6];
        *plVar11 = (long)&PTR__Instruction_00105028;
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8,plVar11[10] - (long)pvVar8);
        }
        pvVar8 = (void *)plVar11[3];
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8,plVar11[5] - (long)pvVar8);
        }
        operator_delete(plVar11,0x60);
        plVar14 = *(long **)(lVar15 + 0x40);
        if (plVar14 == *(long **)(lVar15 + 0x48)) goto LAB_0010309f;
LAB_00102929:
        *plVar14 = lVar19;
        *(long **)(lVar15 + 0x40) = plVar14 + 1;
      }
      else {
        uVar10 = *(uint *)(plVar14 + 1);
        *puVar17 = plVar14;
        *(undefined8 **)(lVar15 + 0x10) = puVar17 + 1;
        local_180 = (long *)0x0;
        plVar14[0xb] = lVar15;
        if (uVar10 != 0) {
LAB_001030b5:
          plVar11 = local_180;
          lVar7 = *(long *)(*(long *)(lVar15 + 0x68) + 8);
          lVar25 = *(long *)(lVar7 + 0x20);
          uVar22 = *(long *)(lVar7 + 0x28) - lVar25 >> 3;
          if (uVar22 <= uVar10) {
            uVar16 = (ulong)(uVar10 + 0x10);
            if (uVar22 < uVar16) {
              std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append
                        ((vector<spv::Instruction*,std::allocator<spv::Instruction*>> *)
                         (lVar7 + 0x20),uVar16 - uVar22);
              lVar25 = *(long *)(lVar7 + 0x20);
            }
            else if ((uVar16 < uVar22) &&
                    (lVar1 = lVar25 + uVar16 * 8, *(long *)(lVar7 + 0x28) != lVar1)) {
              *(long *)(lVar7 + 0x28) = lVar1;
            }
          }
          *(long **)(lVar25 + (ulong)uVar10 * 8) = plVar14;
          goto LAB_00103035;
        }
LAB_0010291b:
        plVar14 = *(long **)(lVar15 + 0x40);
        if (plVar14 != *(long **)(lVar15 + 0x48)) goto LAB_00102929;
LAB_0010309f:
        std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>
                  ((vector<spv::Block*,std::allocator<spv::Block*>> *)(lVar15 + 0x38),plVar14,
                   &local_188);
      }
    }
  }
  plVar11 = *(long **)(this + 0x2c0);
  plVar14 = *(long **)(this + 0x2b8);
  lVar15 = (long)plVar11 - (long)plVar14;
  puVar24 = local_98;
  if (0 < lVar15 >> 5) {
    plVar18 = plVar14 + (lVar15 >> 5) * 4;
    uVar10 = **(uint **)(*plVar14 + 0x18);
    if (local_90 != 0) {
      do {
        plVar26 = (long *)local_a8[(ulong)uVar10 % local_a0];
        if (plVar26 != (long *)0x0) {
          uVar3 = *(uint *)((long *)*plVar26 + 1);
          plVar6 = (long *)*plVar26;
          while (uVar3 != uVar10) {
            plVar5 = (long *)*plVar6;
            if ((plVar5 == (long *)0x0) ||
               (uVar3 = *(uint *)(plVar5 + 1), plVar26 = plVar6, plVar6 = plVar5,
               (ulong)uVar10 % local_a0 != (ulong)uVar3 % local_a0)) goto LAB_00103382;
          }
          if (*plVar26 != 0) goto LAB_001029f8;
        }
LAB_00103382:
        uVar22 = (ulong)**(uint **)(plVar14[1] + 0x18) % local_a0;
        plVar26 = (long *)local_a8[uVar22];
        if (plVar26 != (long *)0x0) {
          uVar10 = *(uint *)((long *)*plVar26 + 1);
          plVar6 = (long *)*plVar26;
          while (uVar10 != **(uint **)(plVar14[1] + 0x18)) {
            plVar5 = (long *)*plVar6;
            if ((plVar5 == (long *)0x0) ||
               (uVar10 = *(uint *)(plVar5 + 1), plVar26 = plVar6, plVar6 = plVar5,
               uVar22 != (ulong)uVar10 % local_a0)) goto LAB_001033d7;
          }
          if (*plVar26 != 0) goto LAB_001032a1;
        }
LAB_001033d7:
        uVar22 = (ulong)**(uint **)(plVar14[2] + 0x18) % local_a0;
        plVar26 = (long *)local_a8[uVar22];
        if (plVar26 != (long *)0x0) {
          uVar10 = *(uint *)((long *)*plVar26 + 1);
          plVar6 = (long *)*plVar26;
          while (**(uint **)(plVar14[2] + 0x18) != uVar10) {
            plVar5 = (long *)*plVar6;
            if ((plVar5 == (long *)0x0) ||
               (uVar10 = *(uint *)(plVar5 + 1), plVar26 = plVar6, plVar6 = plVar5,
               uVar22 != (ulong)uVar10 % local_a0)) goto LAB_0010342c;
          }
          if (*plVar26 != 0) goto LAB_0010334d;
        }
LAB_0010342c:
        uVar22 = (ulong)**(uint **)(plVar14[3] + 0x18) % local_a0;
        plVar26 = (long *)local_a8[uVar22];
        if (plVar26 != (long *)0x0) {
          uVar10 = *(uint *)((long *)*plVar26 + 1);
          plVar6 = (long *)*plVar26;
          while (uVar10 != **(uint **)(plVar14[3] + 0x18)) {
            plVar5 = (long *)*plVar6;
            if ((plVar5 == (long *)0x0) ||
               (uVar10 = *(uint *)(plVar5 + 1), plVar26 = plVar6, plVar6 = plVar5,
               uVar22 != (ulong)uVar10 % local_a0)) goto LAB_00103481;
          }
          if (*plVar26 != 0) goto LAB_00103379;
        }
LAB_00103481:
        plVar14 = plVar14 + 4;
        if (plVar14 == plVar18) goto LAB_001032b3;
        uVar10 = **(uint **)(*plVar14 + 0x18);
      } while( true );
    }
    while (puVar17 = local_98, local_98 != (undefined8 *)0x0) {
      do {
        if (*(uint *)(puVar17 + 1) == uVar10) goto LAB_001029f8;
        puVar17 = (undefined8 *)*puVar17;
      } while (puVar17 != (undefined8 *)0x0);
      puVar17 = local_98;
      do {
        if (*(int *)(puVar17 + 1) == **(int **)(plVar14[1] + 0x18)) goto LAB_001032a1;
        puVar17 = (undefined8 *)*puVar17;
      } while (puVar17 != (undefined8 *)0x0);
      puVar17 = local_98;
      do {
        if (*(int *)(puVar17 + 1) == **(int **)(plVar14[2] + 0x18)) goto LAB_0010334d;
        puVar17 = (undefined8 *)*puVar17;
      } while (puVar17 != (undefined8 *)0x0);
      puVar17 = local_98;
      do {
        if (*(int *)(puVar17 + 1) == **(int **)(plVar14[3] + 0x18)) goto LAB_00103379;
        puVar17 = (undefined8 *)*puVar17;
      } while (puVar17 != (undefined8 *)0x0);
      plVar14 = plVar14 + 4;
      if (plVar18 == plVar14) goto LAB_001032b3;
      uVar10 = **(uint **)(*plVar14 + 0x18);
    }
    do {
      plVar14 = plVar14 + 4;
    } while (plVar14 != plVar18);
LAB_001032b3:
    lVar15 = (long)plVar11 - (long)plVar14;
  }
  lVar15 = lVar15 >> 3;
  puVar17 = local_98;
  if (lVar15 == 2) {
    uVar10 = **(uint **)(*plVar14 + 0x18);
    if (local_90 != 0) {
LAB_0010366c:
      plVar18 = (long *)local_a8[(ulong)uVar10 % local_a0];
      if (plVar18 != (long *)0x0) {
        uVar3 = *(uint *)((long *)*plVar18 + 1);
        plVar26 = (long *)*plVar18;
        while (uVar3 != uVar10) {
          plVar6 = (long *)*plVar26;
          if ((plVar6 == (long *)0x0) ||
             (uVar3 = *(uint *)(plVar6 + 1), plVar18 = plVar26, plVar26 = plVar6,
             (ulong)uVar10 % local_a0 != (ulong)uVar3 % local_a0)) goto LAB_001036b5;
        }
        if (*plVar18 != 0) goto LAB_001029f8;
      }
LAB_001036b5:
      plVar18 = plVar14 + 1;
      plVar14 = plVar14 + 1;
      uVar10 = **(uint **)(*plVar18 + 0x18);
LAB_001036c3:
      plVar18 = (long *)local_a8[(ulong)uVar10 % local_a0];
      if (plVar18 != (long *)0x0) {
        uVar3 = *(uint *)((long *)*plVar18 + 1);
        plVar26 = (long *)*plVar18;
        while (uVar3 != uVar10) {
          plVar6 = (long *)*plVar26;
          if ((plVar6 == (long *)0x0) ||
             (uVar3 = *(uint *)(plVar6 + 1), plVar18 = plVar26, plVar26 = plVar6,
             (ulong)uVar10 % local_a0 != (ulong)uVar3 % local_a0)) goto LAB_00102c01;
        }
        if (*plVar18 != 0) goto LAB_001029f8;
      }
      goto LAB_00102c01;
    }
joined_r0x001035ed:
    for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)*puVar17) {
      if (uVar10 == *(uint *)(puVar17 + 1)) goto LAB_001029f8;
    }
    plVar18 = plVar14 + 1;
    plVar14 = plVar14 + 1;
    uVar10 = **(uint **)(*plVar18 + 0x18);
  }
  else {
    if (lVar15 == 3) {
      uVar10 = **(uint **)(*plVar14 + 0x18);
      puVar12 = local_98;
      if (local_90 != 0) {
        plVar18 = (long *)local_a8[(ulong)uVar10 % local_a0];
        if (plVar18 != (long *)0x0) {
          uVar3 = *(uint *)((long *)*plVar18 + 1);
          plVar26 = (long *)*plVar18;
          while (uVar10 != uVar3) {
            plVar6 = (long *)*plVar26;
            if ((plVar6 == (long *)0x0) ||
               (uVar3 = *(uint *)(plVar6 + 1), plVar18 = plVar26, plVar26 = plVar6,
               (ulong)uVar10 % local_a0 != (ulong)uVar3 % local_a0)) goto LAB_00103793;
          }
          if (*plVar18 != 0) goto LAB_001029f8;
        }
LAB_00103793:
        plVar18 = plVar14 + 1;
        plVar14 = plVar14 + 1;
        uVar10 = **(uint **)(*plVar18 + 0x18);
        goto LAB_0010366c;
      }
      for (; puVar12 != (undefined8 *)0x0; puVar12 = (undefined8 *)*puVar12) {
        if (uVar10 == *(uint *)(puVar12 + 1)) goto LAB_001029f8;
      }
      plVar18 = plVar14 + 1;
      plVar14 = plVar14 + 1;
      uVar10 = **(uint **)(*plVar18 + 0x18);
      goto joined_r0x001035ed;
    }
    if (lVar15 != 1) goto LAB_00102c01;
    uVar10 = **(uint **)(*plVar14 + 0x18);
    if (local_90 != 0) goto LAB_001036c3;
  }
  puVar17 = local_98;
  if (local_98 == (undefined8 *)0x0) goto LAB_00102c06;
  do {
    if (uVar10 == *(uint *)(puVar17 + 1)) goto LAB_001029f8;
    puVar17 = (undefined8 *)*puVar17;
  } while (puVar17 != (undefined8 *)0x0);
  goto LAB_00102c01;
LAB_0010257a:
  plVar11 = (long *)(*(long *)(uVar22 + 8) + 8);
  if (plVar11 != *(long **)(uVar22 + 0x10)) {
    do {
      lVar19 = *plVar11;
      plVar11 = plVar11 + 1;
      local_178 = (ulong *)CONCAT44(local_178._4_4_,*(undefined4 *)(lVar19 + 8));
      std::
      _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
      ::
      _M_insert_unique<unsigned_int,unsigned_int,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<unsigned_int,false>>>>
                ((uint *)&local_a8,(uint *)&local_178,p_Var21);
      p_Var21 = extraout_RDX_01;
    } while (*(long **)(uVar22 + 0x10) != plVar11);
  }
LAB_001025b3:
  puVar13 = puVar13 + 1;
  if (*(ulong **)(lVar15 + 0x98) == puVar13) goto LAB_001025c4;
  goto LAB_00102540;
LAB_001032a1:
  plVar14 = plVar14 + 1;
  goto LAB_001029f8;
LAB_0010334d:
  plVar14 = plVar14 + 2;
  goto LAB_001029f8;
LAB_00102a59:
  plVar18 = plVar18 + 1;
  if (plVar11 == plVar18) goto LAB_00102a62;
  goto LAB_00102a18;
LAB_00102a62:
  puVar24 = local_98;
  if (plVar11 == plVar14) goto LAB_00102c01;
  goto LAB_00102a6b;
LAB_00103379:
  plVar14 = plVar14 + 3;
LAB_001029f8:
  if (plVar11 != plVar14) {
    plVar18 = plVar14 + 1;
    if (plVar11 != plVar18) {
LAB_00102a18:
      do {
        lVar15 = *plVar18;
        uVar10 = **(uint **)(lVar15 + 0x18);
        puVar24 = local_98;
        if (local_90 == 0) {
          for (; puVar24 != (undefined8 *)0x0; puVar24 = (undefined8 *)*puVar24) {
            if (uVar10 == *(uint *)(puVar24 + 1)) goto LAB_00102a59;
          }
        }
        else {
          plVar26 = (long *)local_a8[(ulong)uVar10 % local_a0];
          if (plVar26 != (long *)0x0) {
            uVar3 = *(uint *)((long *)*plVar26 + 1);
            plVar6 = (long *)*plVar26;
            while (uVar10 != uVar3) {
              plVar5 = (long *)*plVar6;
              if ((plVar5 == (long *)0x0) ||
                 (uVar3 = *(uint *)(plVar5 + 1), plVar26 = plVar6, plVar6 = plVar5,
                 (ulong)uVar10 % local_a0 != (ulong)uVar3 % local_a0)) goto LAB_00103510;
            }
            if (*plVar26 != 0) goto LAB_00102a59;
          }
        }
LAB_00103510:
        *plVar18 = 0;
        plVar26 = (long *)*plVar14;
        *plVar14 = lVar15;
        if (plVar26 != (long *)0x0) {
          if (*(code **)(*plVar26 + 8) == Instruction::~Instruction) {
            pvVar8 = (void *)plVar26[6];
            *plVar26 = (long)&PTR__Instruction_00105028;
            if (pvVar8 != (void *)0x0) {
              operator_delete(pvVar8,plVar26[10] - (long)pvVar8);
            }
            pvVar8 = (void *)plVar26[3];
            if (pvVar8 != (void *)0x0) {
              operator_delete(pvVar8,plVar26[5] - (long)pvVar8);
            }
            operator_delete(plVar26,0x60);
          }
          else {
            (**(code **)(*plVar26 + 8))(plVar26);
          }
        }
        plVar18 = plVar18 + 1;
        plVar14 = plVar14 + 1;
      } while (plVar11 != plVar18);
      goto LAB_00102a62;
    }
LAB_00102a6b:
    plVar18 = *(long **)(this + 0x2c0);
    lVar15 = (long)plVar18 - (long)plVar11;
    if ((plVar11 != plVar18) && (0 < lVar15)) {
      plVar18 = plVar11;
      plVar26 = plVar14;
      do {
        while( true ) {
          lVar19 = *plVar18;
          *plVar18 = 0;
          plVar6 = (long *)*plVar26;
          *plVar26 = lVar19;
          if (plVar6 != (long *)0x0) break;
LAB_00102ae2:
          plVar26 = plVar26 + 1;
          plVar18 = plVar18 + 1;
          if (plVar26 == (long *)(lVar15 + (long)plVar14)) goto LAB_00102b2d;
        }
        if (*(code **)(*plVar6 + 8) == Instruction::~Instruction) {
          pvVar8 = (void *)plVar6[6];
          *plVar6 = (long)&PTR__Instruction_00105028;
          if (pvVar8 != (void *)0x0) {
            operator_delete(pvVar8,plVar6[10] - (long)pvVar8);
          }
          pvVar8 = (void *)plVar6[3];
          if (pvVar8 != (void *)0x0) {
            operator_delete(pvVar8,plVar6[5] - (long)pvVar8);
          }
          operator_delete(plVar6,0x60);
          goto LAB_00102ae2;
        }
        plVar26 = plVar26 + 1;
        plVar18 = plVar18 + 1;
        (**(code **)(*plVar6 + 8))(plVar6);
      } while (plVar26 != (long *)(lVar15 + (long)plVar14));
LAB_00102b2d:
      plVar18 = *(long **)(this + 0x2c0);
      lVar15 = (long)plVar18 - (long)plVar11;
    }
    plVar14 = (long *)((long)plVar14 + lVar15);
    puVar24 = local_98;
    plVar11 = plVar14;
    if (plVar14 != plVar18) {
LAB_00102bad:
      do {
        plVar26 = (long *)*plVar11;
        if (plVar26 != (long *)0x0) {
          if (*(code **)(*plVar26 + 8) != Instruction::~Instruction) {
            plVar11 = plVar11 + 1;
            (**(code **)(*plVar26 + 8))(plVar26);
            if (plVar11 == plVar18) break;
            goto LAB_00102bad;
          }
          pvVar8 = (void *)plVar26[6];
          *plVar26 = (long)&PTR__Instruction_00105028;
          if (pvVar8 != (void *)0x0) {
            operator_delete(pvVar8,plVar26[10] - (long)pvVar8);
          }
          pvVar8 = (void *)plVar26[3];
          if (pvVar8 != (void *)0x0) {
            operator_delete(pvVar8,plVar26[5] - (long)pvVar8);
          }
          operator_delete(plVar26,0x60);
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar18);
      *(long **)(this + 0x2c0) = plVar14;
      puVar24 = local_98;
    }
  }
LAB_00102c01:
  while (puVar24 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)*puVar24;
    operator_delete(puVar24,0x10);
    puVar24 = puVar17;
  }
LAB_00102c06:
  memset(local_a8,0,local_a0 * 8);
  local_90 = 0;
  local_98 = (undefined8 *)0x0;
  puVar24 = local_d8;
  if (local_a8 != local_78) {
    operator_delete(local_a8,local_a0 << 3);
    puVar24 = local_d8;
  }
  while (puVar24 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)*puVar24;
    operator_delete(puVar24,0x10);
    puVar24 = puVar17;
  }
  memset(local_e8,0,local_e0 * 8);
  local_d0 = 0;
  local_d8 = (undefined8 *)0x0;
  puVar24 = local_118;
  if (local_e8 != local_b8) {
    operator_delete(local_e8,local_e0 << 3);
    puVar24 = local_118;
  }
  while (puVar24 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)*puVar24;
    operator_delete(puVar24,0x18);
    puVar24 = puVar17;
  }
  memset(local_128,0,local_120 * 8);
  local_110 = 0;
  local_118 = (undefined8 *)0x0;
  puVar24 = local_158;
  if (local_128 != local_f8) {
    operator_delete(local_128,local_120 << 3);
    puVar24 = local_158;
  }
  while (puVar24 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)*puVar24;
    operator_delete(puVar24,0x10);
    puVar24 = puVar17;
  }
  memset(local_168,0,local_160 * 8);
  local_150 = 0;
  local_158 = (undefined8 *)0x0;
  if (local_168 != local_138) {
    operator_delete(local_168,local_160 << 3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* spv::Builder::postProcess(bool) */

void __thiscall spv::Builder::postProcess(Builder *this,bool param_1)

{
  if (param_1) {
    postProcessFeatures(this);
    return;
  }
  postProcessCFG(this);
  postProcessFeatures(this);
  return;
}



/* spv::Instruction::~Instruction() */

void __thiscall spv::Instruction::~Instruction(Instruction *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__Instruction_00105028;
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x50) - (long)pvVar1);
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x28) - (long)pvVar1);
    return;
  }
  return;
}



/* spv::Instruction::~Instruction() */

void __thiscall spv::Instruction::~Instruction(Instruction *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__Instruction_00105028;
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x50) - (long)pvVar1);
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x28) - (long)pvVar1);
  }
  operator_delete(this,0x60);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* spv::Builder::addExtension(char const*) */

void __thiscall spv::Builder::addExtension(Builder *this,char *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  _Rb_tree_node_base *p_Var4;
  ulong uVar5;
  _Rb_tree_node_base *p_Var6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  size_t *psVar10;
  _Rb_tree_node_base *p_Var11;
  ulong uVar12;
  ulong uVar13;
  void *__s2;
  _Rb_tree_node_base *p_Var14;
  long in_FS_OFFSET;
  size_t *local_88;
  ulong local_70;
  size_t *local_68;
  undefined8 local_60;
  size_t local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = local_58;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = strlen(param_1);
  local_70 = __n;
  if (__n < 0x10) {
    psVar10 = local_58;
    if (__n == 1) {
      local_58[0] = CONCAT71(local_58[0]._1_7_,*param_1);
    }
    else if (__n != 0) goto LAB_00103b66;
  }
  else {
    local_68 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
    local_58[0] = local_70;
    psVar10 = local_68;
LAB_00103b66:
    memcpy(psVar10,param_1,__n);
    psVar10 = local_68;
  }
  local_88 = local_68;
  uVar12 = local_70;
  *(undefined1 *)((long)psVar10 + local_70) = 0;
  p_Var4 = (_Rb_tree_node_base *)(this + 0xf8);
  p_Var11 = *(_Rb_tree_node_base **)(this + 0x100);
  local_60 = local_70;
  if (*(_Rb_tree_node_base **)(this + 0x100) == (_Rb_tree_node_base *)0x0) {
    p_Var14 = p_Var4;
    if (p_Var4 != *(_Rb_tree_node_base **)(this + 0x108)) {
LAB_00103b12:
      lVar8 = std::_Rb_tree_decrement(p_Var14);
      uVar13 = *(ulong *)(lVar8 + 0x28);
      __s2 = *(void **)(lVar8 + 0x20);
      uVar7 = uVar12;
      if (uVar13 <= uVar12) {
        uVar7 = uVar13;
      }
LAB_001039e1:
      if ((uVar7 == 0) || (iVar3 = memcmp(__s2,local_88,uVar7), iVar3 == 0)) {
        lVar8 = uVar13 - uVar12;
        if (0x7fffffff < lVar8) goto LAB_00103aa8;
        if (lVar8 < -0x80000000) goto LAB_00103a1e;
        iVar3 = (int)lVar8;
      }
      if (-1 < iVar3) goto LAB_00103aa8;
      goto LAB_00103a1e;
    }
LAB_00103a29:
    p_Var6 = (_Rb_tree_node_base *)operator_new(0x40);
    p_Var11 = p_Var6 + 0x30;
    *(_Rb_tree_node_base **)(p_Var6 + 0x20) = p_Var11;
    if (local_68 != local_58) {
      bVar1 = true;
      goto LAB_00103a55;
    }
    bVar1 = true;
LAB_00103bf0:
    uVar12 = local_60 + 1;
    uVar2 = (uint)uVar12;
    if (uVar2 < 8) {
      if ((uVar12 & 4) == 0) {
        if (uVar2 != 0) {
          *p_Var11 = local_58[0]._0_1_;
          if ((uVar12 & 2) != 0) {
            *(undefined2 *)(p_Var11 + ((uVar12 & 0xffffffff) - 2)) =
                 *(undefined2 *)((long)local_58 + ((uVar12 & 0xffffffff) - 2));
          }
        }
      }
      else {
        *(undefined4 *)p_Var11 = (undefined4)local_58[0];
        *(undefined4 *)(p_Var11 + ((uVar12 & 0xffffffff) - 4)) =
             *(undefined4 *)((long)local_58 + ((uVar12 & 0xffffffff) - 4));
      }
    }
    else {
      *(size_t *)p_Var11 = local_58[0];
      *(undefined8 *)(p_Var11 + ((uVar12 & 0xffffffff) - 8)) =
           *(undefined8 *)((long)local_58 + ((uVar12 & 0xffffffff) - 8));
      lVar8 = (long)p_Var11 - ((ulong)(p_Var11 + 8) & 0xfffffffffffffff8);
      uVar2 = uVar2 + (int)lVar8 & 0xfffffff8;
      if (7 < uVar2) {
        uVar12 = 0;
        do {
          uVar9 = (int)uVar12 + 8;
          *(undefined8 *)(((ulong)(p_Var11 + 8) & 0xfffffffffffffff8) + uVar12) =
               *(undefined8 *)((long)local_58 + (uVar12 - lVar8));
          uVar12 = (ulong)uVar9;
        } while (uVar9 < uVar2);
      }
    }
  }
  else {
    do {
      p_Var14 = p_Var11;
      uVar13 = *(ulong *)(p_Var14 + 0x28);
      __s2 = *(void **)(p_Var14 + 0x20);
      uVar7 = uVar13;
      if (uVar12 <= uVar13) {
        uVar7 = uVar12;
      }
      if (uVar7 == 0) {
LAB_001039aa:
        uVar5 = uVar12 - uVar13;
        if ((long)uVar5 < 0x80000000) {
          if (-0x80000001 < (long)uVar5) goto LAB_001039c9;
          goto LAB_00103970;
        }
LAB_001039cd:
        p_Var11 = *(_Rb_tree_node_base **)(p_Var14 + 0x18);
        bVar1 = false;
      }
      else {
        uVar2 = memcmp(local_88,__s2,uVar7);
        uVar5 = (ulong)uVar2;
        if (uVar2 == 0) goto LAB_001039aa;
LAB_001039c9:
        if (-1 < (int)uVar5) goto LAB_001039cd;
LAB_00103970:
        p_Var11 = *(_Rb_tree_node_base **)(p_Var14 + 0x10);
        bVar1 = true;
      }
    } while (p_Var11 != (_Rb_tree_node_base *)0x0);
    if (!bVar1) goto LAB_001039e1;
    if (*(_Rb_tree_node_base **)(this + 0x108) != p_Var14) goto LAB_00103b12;
LAB_00103a1e:
    if (p_Var4 == p_Var14) goto LAB_00103a29;
    uVar13 = *(ulong *)(p_Var14 + 0x28);
    uVar7 = uVar13;
    if (uVar12 <= uVar13) {
      uVar7 = uVar12;
    }
    if (uVar7 == 0) {
LAB_00103ba3:
      bVar1 = false;
      uVar7 = uVar12 - uVar13;
      if ((long)uVar7 < 0x80000000) {
        if (-0x80000001 < (long)uVar7) goto LAB_00103bbf;
        bVar1 = true;
      }
    }
    else {
      uVar2 = memcmp(local_88,*(void **)(p_Var14 + 0x20),uVar7);
      uVar7 = (ulong)uVar2;
      if (uVar2 == 0) goto LAB_00103ba3;
LAB_00103bbf:
      bVar1 = (bool)((byte)(uVar7 >> 0x1f) & 1);
    }
    p_Var6 = (_Rb_tree_node_base *)operator_new(0x40);
    p_Var11 = p_Var6 + 0x30;
    *(_Rb_tree_node_base **)(p_Var6 + 0x20) = p_Var11;
    if (local_68 == local_58) goto LAB_00103bf0;
LAB_00103a55:
    *(size_t **)(p_Var6 + 0x20) = local_68;
    *(size_t *)(p_Var6 + 0x30) = local_58[0];
  }
  *(ulong *)(p_Var6 + 0x28) = local_60;
  local_58[0] = local_58[0] & 0xffffffffffffff00;
  local_60 = 0;
  local_68 = local_58;
  std::_Rb_tree_insert_and_rebalance(bVar1,p_Var6,p_Var14,p_Var4);
  *(long *)(this + 0x118) = *(long *)(this + 0x118) + 1;
  local_88 = local_68;
LAB_00103aa8:
  if (local_88 != local_58) {
    operator_delete(local_88,local_58[0] + 1);
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void std::vector<unsigned int, std::allocator<unsigned int> >::_M_realloc_insert<unsigned int
   const&>(__gnu_cxx::__normal_iterator<unsigned int*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int const&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,void *param_2,undefined4 *param_3
          )

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 2;
  if (uVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00103fb0;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_00103fba:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00103fb0:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_00103fba;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_00103fba;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 4);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined4 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00103f8b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00103f8b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* std::vector<bool, std::allocator<bool> >::_M_insert_aux(std::_Bit_iterator, bool) */

void std::vector<bool,std::allocator<bool>>::_M_insert_aux
               (long *param_1,ulong *param_2,uint param_3,char param_4)

{
  uint uVar1;
  undefined8 *__src;
  ulong uVar2;
  ulong uVar3;
  undefined8 *__dest;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  size_t __n;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  ulong local_70;
  
  puVar10 = (ulong *)param_1[2];
  if (puVar10 == (ulong *)param_1[4]) {
    uVar9 = (ulong)*(uint *)(param_1 + 3) + ((long)puVar10 - *param_1) * 8;
    if (uVar9 == 0x7fffffffffffffc0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector<bool>::_M_insert_aux");
    }
    local_70 = 8;
    if (uVar9 != 0) {
      uVar3 = uVar9 * 2;
      local_70 = 0xffffffffffffff8;
      if (uVar9 <= uVar3) {
        uVar9 = 0x7fffffffffffffc0;
        if (uVar3 < 0x7fffffffffffffc1) {
          uVar9 = uVar3;
        }
        local_70 = (uVar9 + 0x3f >> 6) << 3;
      }
    }
    __dest = (undefined8 *)operator_new(local_70);
    __src = (undefined8 *)*param_1;
    __n = (long)param_2 - (long)__src;
    if ((long)__n < 9) {
      if (__n == 8) {
        *__dest = *__src;
      }
    }
    else {
      memmove(__dest,__src,__n);
    }
    puVar10 = (ulong *)((long)__dest + __n);
    uVar3 = (ulong)param_3;
    uVar9 = *puVar10;
    if (uVar3 == 0) {
      uVar2 = 1;
      iVar5 = 1;
      puVar12 = puVar10;
    }
    else {
      iVar4 = 0;
      uVar2 = uVar3;
      puVar6 = param_2;
      do {
        while( true ) {
          uVar7 = 1L << ((byte)iVar4 & 0x3f);
          uVar8 = ~uVar7 & uVar9;
          uVar9 = uVar9 | uVar7;
          if ((*puVar6 & uVar7) == 0) {
            uVar9 = uVar8;
          }
          *puVar10 = uVar9;
          if (iVar4 != 0x3f) break;
          uVar9 = puVar10[1];
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
          iVar4 = 0;
          uVar2 = uVar2 - 1;
          puVar12 = puVar10;
          if (uVar2 == 0) goto LAB_00104337;
        }
        iVar4 = iVar4 + 1;
        uVar2 = uVar2 - 1;
        puVar12 = puVar10;
      } while (uVar2 != 0);
LAB_00104337:
      if (iVar4 == 0x3f) {
        uVar2 = 0x8000000000000000;
        puVar10 = puVar12 + 1;
        iVar5 = 0;
      }
      else {
        iVar5 = iVar4 + 1;
        uVar2 = 1L << ((byte)iVar4 & 0x3f);
        puVar10 = puVar12;
      }
    }
    uVar1 = *(uint *)(param_1 + 3);
    uVar7 = uVar2 | uVar9;
    if (param_4 == '\0') {
      uVar7 = ~uVar2 & uVar9;
    }
    *puVar12 = uVar7;
    lVar11 = ((ulong)uVar1 + (param_1[2] - (long)param_2) * 8) - uVar3;
    iVar4 = iVar5;
    if (0 < lVar11) {
      do {
        while( true ) {
          uVar3 = 1L << ((byte)iVar4 & 0x3f);
          uVar9 = ~uVar3 & *puVar10;
          if ((*param_2 & 1L << ((byte)param_3 & 0x3f)) != 0) {
            uVar9 = uVar3 | *puVar10;
          }
          *puVar10 = uVar9;
          if (param_3 != 0x3f) break;
          param_2 = param_2 + 1;
          param_3 = 0;
          if (iVar4 != 0x3f) goto LAB_00104398;
LAB_001043e1:
          puVar10 = puVar10 + 1;
          iVar5 = 0;
          lVar11 = lVar11 + -1;
          iVar4 = 0;
          if (lVar11 == 0) goto LAB_001043ed;
        }
        param_3 = param_3 + 1;
        if (iVar4 == 0x3f) goto LAB_001043e1;
LAB_00104398:
        iVar5 = iVar4 + 1;
        lVar11 = lVar11 + -1;
        iVar4 = iVar5;
      } while (lVar11 != 0);
    }
LAB_001043ed:
    if (__src != (undefined8 *)0x0) {
      operator_delete(__src,param_1[4] - (long)__src);
    }
    *param_1 = (long)__dest;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[4] = local_70 + (long)__dest;
    param_1[2] = (long)puVar10;
    *(int *)(param_1 + 3) = iVar5;
    return;
  }
  uVar1 = *(uint *)(param_1 + 3);
  lVar11 = (ulong)uVar1 + 1;
  uVar13 = (uint)lVar11 & 0x3f;
  puVar12 = puVar10 + (lVar11 >> 6);
  lVar11 = ((ulong)uVar1 + ((long)puVar10 - (long)param_2) * 8) - (ulong)param_3;
  puVar6 = puVar10;
  uVar14 = uVar1;
  if (0 < lVar11) {
    do {
      if (uVar14 == 0) {
        puVar6 = puVar6 + -1;
        uVar14 = 0x3f;
        uVar9 = 0x8000000000000000;
        uVar3 = 0x8000000000000000;
        if (uVar13 != 0) goto LAB_00104142;
LAB_0010418b:
        puVar12 = puVar12 + -1;
        uVar13 = 0x3f;
        uVar2 = 0x8000000000000000;
        uVar9 = uVar3;
      }
      else {
        uVar14 = uVar14 - 1;
        uVar9 = 1L << ((byte)uVar14 & 0x3f);
        uVar3 = uVar9;
        if (uVar13 == 0) goto LAB_0010418b;
LAB_00104142:
        uVar13 = uVar13 - 1;
        uVar2 = 1L << ((byte)uVar13 & 0x3f);
      }
      uVar3 = ~uVar2 & *puVar12;
      if ((uVar9 & *puVar6) != 0) {
        uVar3 = *puVar12 | uVar2;
      }
      *puVar12 = uVar3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  uVar3 = 1L << ((byte)param_3 & 0x3f);
  uVar9 = uVar3 | *param_2;
  if (param_4 == '\0') {
    uVar9 = ~uVar3 & *param_2;
  }
  *param_2 = uVar9;
  if (uVar1 == 0x3f) {
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = (long)(puVar10 + 1);
    return;
  }
  *(uint *)(param_1 + 3) = uVar1 + 1;
  return;
}



/* void std::vector<spv::Block*, std::allocator<spv::Block*> >::_M_realloc_insert<spv::Block*
   const&>(__gnu_cxx::__normal_iterator<spv::Block**, std::vector<spv::Block*,
   std::allocator<spv::Block*> > >, spv::Block* const&) */

void __thiscall
std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>
          (vector<spv::Block*,std::allocator<spv::Block*>> *this,void *param_2,undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00104550;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010455a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00104550:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010455a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010455a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010452c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010452c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* std::vector<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >,
   std::allocator<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> > >
   >::_M_default_append(unsigned long) */

void __thiscall
std::
vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
::_M_default_append(vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
                    *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *__s;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    return;
  }
  __s = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)__s >> 3) < param_1) {
    uVar4 = (long)__s - (long)puVar2 >> 3;
    if (0xfffffffffffffff - uVar4 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar1 = param_1 + uVar4;
    uVar7 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar7 = uVar1;
    }
    if ((param_1 <= uVar4) && (uVar7 = uVar4 * 2, 0xfffffffffffffff < uVar7)) {
      uVar7 = 0xfffffffffffffff;
    }
    puVar5 = (undefined8 *)operator_new(uVar7 * 8);
    memset((void *)((long)puVar5 + ((long)__s - (long)puVar2)),0,param_1 * 8);
    puVar3 = puVar5;
    for (puVar6 = puVar2; puVar6 != __s; puVar6 = puVar6 + 1) {
      *puVar3 = *puVar6;
      puVar3 = puVar3 + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
    }
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar5 + uVar1;
    *(undefined8 **)(this + 0x10) = puVar5 + uVar7;
    return;
  }
  memset(__s,0,param_1 * 8);
  *(undefined8 **)(this + 8) = __s + param_1;
  return;
}



/* std::vector<spv::Instruction*, std::allocator<spv::Instruction*> >::_M_default_append(unsigned
   long) */

void __thiscall
std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append
          (vector<spv::Instruction*,std::allocator<spv::Instruction*>> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  undefined8 *__s;
  size_t sVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (param_1 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(this + 8);
  pvVar3 = *(void **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar6 >> 3)) {
    *puVar6 = 0;
    __s = puVar6 + 1;
    if (param_1 - 1 != 0) {
      sVar4 = (long)__s + ((param_1 - 1) * 8 - (long)puVar6) + -8;
      pvVar3 = memset(__s,0,sVar4);
      __s = (undefined8 *)((long)pvVar3 + sVar4);
    }
    *(undefined8 **)(this + 8) = __s;
    return;
  }
  sVar4 = (long)puVar6 - (long)pvVar3;
  uVar2 = (long)sVar4 >> 3;
  if (0xfffffffffffffff - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_default_append");
  }
  uVar1 = param_1 + uVar2;
  if (uVar2 < param_1) {
    uVar2 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar2 = uVar1;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar6 = (undefined8 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 - 1 != 0) goto LAB_00104855;
LAB_00104869:
    if (sVar4 != 0) goto LAB_00104940;
    if (pvVar3 == (void *)0x0) goto LAB_0010487b;
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  else {
    uVar2 = uVar2 * 2;
    if (0xfffffffffffffff < uVar2) {
      uVar2 = 0xfffffffffffffff;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar6 = (undefined8 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 != 1) {
LAB_00104855:
      memset(puVar6 + 1,0,(param_1 - 1) * 8);
      goto LAB_00104869;
    }
LAB_00104940:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_0010487b:
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 8);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* std::__detail::_Map_base<unsigned int, std::pair<unsigned int const,
   std::vector<spv::Instruction*, std::allocator<spv::Instruction*> > >,
   std::allocator<std::pair<unsigned int const, std::vector<spv::Instruction*,
   std::allocator<spv::Instruction*> > > >, std::__detail::_Select1st, std::equal_to<unsigned int>,
   std::hash<unsigned int>, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, false, true>,
   true>::operator[](unsigned int&&) */

long * __thiscall
std::__detail::
_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  char cVar8;
  long *plVar9;
  void *__s;
  _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *p_Var10;
  ulong uVar11;
  ulong extraout_RDX;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *p_Var15;
  
  uVar1 = *param_1;
  uVar11 = (ulong)uVar1 % *(ulong *)(this + 8);
  puVar3 = *(undefined8 **)(*(long *)this + uVar11 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = *(uint *)((undefined8 *)*puVar3 + 1);
    puVar7 = (undefined8 *)*puVar3;
    while (uVar1 != uVar2) {
      puVar4 = (undefined8 *)*puVar7;
      if ((puVar4 == (undefined8 *)0x0) ||
         (uVar2 = *(uint *)(puVar4 + 1), puVar3 = puVar7, puVar7 = puVar4,
         uVar11 != (ulong)uVar2 % *(ulong *)(this + 8))) goto LAB_00104a10;
    }
    plVar9 = (long *)*puVar3;
    if (plVar9 != (long *)0x0) goto LAB_001049fa;
  }
LAB_00104a10:
  plVar9 = (long *)operator_new(0x28);
  uVar14 = *(ulong *)(this + 0x18);
  uVar5 = *(ulong *)(this + 8);
  *plVar9 = 0;
  uVar2 = *param_1;
  *(undefined1 (*) [16])(plVar9 + 2) = (undefined1  [16])0x0;
  *(uint *)(plVar9 + 1) = uVar2;
  plVar9[4] = 0;
  cVar8 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(this + 0x20),uVar5,uVar14);
  if (cVar8 == '\0') {
    p_Var10 = *(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                **)this;
    p_Var15 = p_Var10 + uVar11 * 8;
    plVar12 = *(long **)p_Var15;
  }
  else {
    if (extraout_RDX == 1) {
      p_Var10 = this + 0x30;
      *(undefined8 *)(this + 0x30) = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_alloc();
      }
      __s = operator_new(extraout_RDX * 8);
      p_Var10 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                 *)memset(__s,0,extraout_RDX * 8);
    }
    plVar12 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    uVar11 = 0;
    while (uVar14 = uVar11, plVar13 = plVar12, plVar12 != (long *)0x0) {
      while( true ) {
        plVar12 = (long *)*plVar13;
        uVar11 = (ulong)*(uint *)(plVar13 + 1) % extraout_RDX;
        p_Var15 = p_Var10 + uVar11 * 8;
        if (*(long **)p_Var15 == (long *)0x0) break;
        *plVar13 = **(long **)p_Var15;
        **(undefined8 **)p_Var15 = plVar13;
        plVar13 = plVar12;
        if (plVar12 == (long *)0x0) goto LAB_00104b11;
      }
      *plVar13 = *(long *)(this + 0x10);
      *(long **)(this + 0x10) = plVar13;
      *(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
        **)p_Var15 = this + 0x10;
      if (*plVar13 != 0) {
        *(long **)(p_Var10 + uVar14 * 8) = plVar13;
      }
    }
LAB_00104b11:
    if (*(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
          **)this != this + 0x30) {
      operator_delete(*(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                        **)this,*(long *)(this + 8) << 3);
    }
    *(ulong *)(this + 8) = extraout_RDX;
    *(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)this = p_Var10;
    p_Var15 = p_Var10 + ((ulong)uVar1 % extraout_RDX) * 8;
    plVar12 = *(long **)p_Var15;
  }
  if (plVar12 == (long *)0x0) {
    lVar6 = *(long *)(this + 0x10);
    *(long **)(this + 0x10) = plVar9;
    *plVar9 = lVar6;
    if (lVar6 != 0) {
      *(long **)(p_Var10 + ((ulong)*(uint *)(lVar6 + 8) % *(ulong *)(this + 8)) * 8) = plVar9;
    }
    *(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)p_Var15 = this + 0x10;
  }
  else {
    *plVar9 = *plVar12;
    **(undefined8 **)p_Var15 = plVar9;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_001049fa:
  return plVar9 + 2;
}



/* std::__detail::_Map_base<spv::Block*, std::pair<spv::Block* const, spv::Block*>,
   std::allocator<std::pair<spv::Block* const, spv::Block*> >, std::__detail::_Select1st,
   std::equal_to<spv::Block*>, std::hash<spv::Block*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>, true>::operator[](spv::Block* const&) */

long * __thiscall
std::__detail::
_Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](_Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *this,Block **param_1)

{
  Block *pBVar1;
  Block *pBVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  _Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *__s;
  ulong uVar7;
  ulong extraout_RDX;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  _Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *p_Var11;
  
  pBVar1 = *param_1;
  uVar7 = (ulong)pBVar1 % *(ulong *)(this + 8);
  plVar6 = *(long **)(*(long *)this + uVar7 * 8);
  if (plVar6 != (long *)0x0) {
    pBVar2 = (Block *)((long *)*plVar6)[1];
    plVar8 = (long *)*plVar6;
    while (pBVar2 != pBVar1) {
      plVar9 = (long *)*plVar8;
      if ((plVar9 == (long *)0x0) ||
         (pBVar2 = (Block *)plVar9[1], plVar6 = plVar8, plVar8 = plVar9,
         uVar7 != (ulong)pBVar2 % *(ulong *)(this + 8))) goto LAB_00104c60;
    }
    if (*plVar6 != 0) {
      return (long *)(*plVar6 + 0x10);
    }
  }
LAB_00104c60:
  plVar6 = (long *)operator_new(0x18);
  uVar10 = *(ulong *)(this + 0x18);
  uVar3 = *(ulong *)(this + 8);
  *plVar6 = 0;
  pBVar2 = *param_1;
  plVar6[2] = 0;
  plVar6[1] = (long)pBVar2;
  cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(this + 0x20),uVar3,uVar10);
  if (cVar5 == '\0') {
    __s = *(_Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
            **)this;
    p_Var11 = __s + uVar7 * 8;
    plVar8 = *(long **)p_Var11;
  }
  else {
    if (extraout_RDX == 1) {
      __s = this + 0x30;
      *(undefined8 *)(this + 0x30) = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_alloc();
      }
      __s = (_Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *)operator_new(extraout_RDX * 8);
      memset(__s,0,extraout_RDX * 8);
    }
    plVar8 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    uVar7 = 0;
    while (uVar10 = uVar7, plVar9 = plVar8, plVar8 != (long *)0x0) {
      while( true ) {
        plVar8 = (long *)*plVar9;
        uVar7 = (ulong)plVar9[1] % extraout_RDX;
        p_Var11 = __s + uVar7 * 8;
        if (*(long **)p_Var11 == (long *)0x0) break;
        *plVar9 = **(long **)p_Var11;
        **(undefined8 **)p_Var11 = plVar9;
        plVar9 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_00104d63;
      }
      *plVar9 = *(long *)(this + 0x10);
      *(long **)(this + 0x10) = plVar9;
      *(_Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
        **)p_Var11 = this + 0x10;
      if (*plVar9 != 0) {
        *(long **)(__s + uVar10 * 8) = plVar9;
      }
    }
LAB_00104d63:
    if (*(_Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
          **)this != this + 0x30) {
      operator_delete(*(_Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                        **)this,*(long *)(this + 8) << 3);
    }
    *(ulong *)(this + 8) = extraout_RDX;
    *(_Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)this = __s;
    p_Var11 = __s + ((ulong)pBVar1 % extraout_RDX) * 8;
    plVar8 = *(long **)p_Var11;
  }
  if (plVar8 == (long *)0x0) {
    lVar4 = *(long *)(this + 0x10);
    *(long **)(this + 0x10) = plVar6;
    *plVar6 = lVar4;
    if (lVar4 != 0) {
      *(long **)(__s + (*(ulong *)(lVar4 + 8) % *(ulong *)(this + 8)) * 8) = plVar6;
    }
    *(_Map_base<spv::Block*,std::pair<spv::Block*const,spv::Block*>,std::allocator<std::pair<spv::Block*const,spv::Block*>>,std::__detail::_Select1st,std::equal_to<spv::Block*>,std::hash<spv::Block*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)p_Var11 = this + 0x10;
  }
  else {
    *plVar6 = *plVar8;
    **(undefined8 **)p_Var11 = plVar6;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar6 + 2;
}



/* void std::vector<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >,
   std::allocator<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> > >
   >::_M_realloc_insert<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<spv::Instruction,
   std::default_delete<spv::Instruction> >*, std::vector<std::unique_ptr<spv::Instruction,
   std::default_delete<spv::Instruction> >, std::allocator<std::unique_ptr<spv::Instruction,
   std::default_delete<spv::Instruction> > > > >, std::unique_ptr<spv::Instruction,
   std::default_delete<spv::Instruction> >&&) */

void __thiscall
std::
vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
::_M_realloc_insert<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>
          (vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar4 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar4 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar4) goto LAB_00104f20;
    uVar8 = 0xfffffffffffffff;
    if (uVar4 + 1 < 0x1000000000000000) {
      uVar8 = uVar4 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_00104f2a:
    puVar5 = (undefined8 *)operator_new(uVar8);
    local_50 = (long)puVar5 + uVar8;
    uVar3 = *param_3;
    puVar6 = puVar5 + 1;
    *param_3 = 0;
    *(undefined8 *)((long)puVar5 + ((long)param_2 - (long)puVar2)) = uVar3;
    if (param_2 != puVar2) {
LAB_00104ea4:
      puVar6 = puVar2;
      puVar7 = puVar5;
      do {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
      } while (param_2 != puVar6);
      puVar6 = (undefined8 *)((long)puVar5 + (long)param_2 + (8 - (long)puVar2));
    }
    puVar7 = puVar6;
    if (param_2 == puVar1) goto LAB_00104ee2;
  }
  else {
    uVar8 = uVar4 * 2;
    if (uVar8 < uVar4) {
LAB_00104f20:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_00104f2a;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_00104f2a;
    }
    uVar3 = *param_3;
    puVar5 = (undefined8 *)0x0;
    *param_3 = 0;
    puVar6 = (undefined8 *)0x8;
    local_50 = 0;
    *(undefined8 *)((long)param_2 - (long)puVar2) = uVar3;
    if (param_2 != puVar2) goto LAB_00104ea4;
  }
  puVar7 = (undefined8 *)((long)puVar6 + ((long)puVar1 - (long)param_2));
  memcpy(puVar6,param_2,(long)puVar1 - (long)param_2);
LAB_00104ee2:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar7;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* spv::Builder::postProcessType(spv::Instruction const&, unsigned int) */

void spv::Builder::_GLOBAL__sub_I_postProcessType(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* spv::Instruction::~Instruction() */

void __thiscall spv::Instruction::~Instruction(Instruction *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


