
/* manifold::CsgLeafNode::GetNodeType() const */

undefined8 manifold::CsgLeafNode::GetNodeType(void)

{
  return 3;
}



/* manifold::CsgOpNode::GetNodeType() const */

undefined4 __thiscall manifold::CsgOpNode::GetNodeType(CsgOpNode *this)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if (*(uint *)(this + 0x38) < 3) {
    uVar1 = *(undefined4 *)(CSWTCH_352 + (ulong)*(uint *)(this + 0x38) * 4);
  }
  return uVar1;
}



/* std::_Rb_tree<int, std::pair<int const, manifold::Manifold::Impl::Relation>,
   std::_Select1st<std::pair<int const, manifold::Manifold::Impl::Relation> >, std::less<int>,
   std::allocator<std::pair<int const, manifold::Manifold::Impl::Relation> >
   >::_M_get_insert_unique_pos(int const&) [clone .isra.0] */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
::_M_get_insert_unique_pos
          (_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
           *this,int *param_1)

{
  undefined1 auVar1 [16];
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  iVar6 = (int)param_1;
  p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var2 = (_Rb_tree_node_base *)(this + 8);
  }
  else {
    do {
      p_Var4 = p_Var2;
      iVar5 = *(int *)(p_Var4 + 0x20);
      p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 0x18);
      if (iVar6 < iVar5) {
        p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 0x10);
      }
    } while (p_Var2 != (_Rb_tree_node_base *)0x0);
    p_Var2 = p_Var4;
    if (iVar5 <= iVar6) goto LAB_00100068;
  }
  if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_00100068:
  p_Var3 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < iVar6) {
    p_Var4 = p_Var3;
    p_Var3 = p_Var2;
  }
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* std::_Rb_tree<int, std::pair<int const, manifold::Manifold::Impl::Relation>,
   std::_Select1st<std::pair<int const, manifold::Manifold::Impl::Relation> >, std::less<int>,
   std::allocator<std::pair<int const, manifold::Manifold::Impl::Relation> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, manifold::Manifold::Impl::Relation> >*)
   [clone .isra.0] */

void std::
     _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  _Rb_tree_node *p_Var9;
  void *pvVar10;
  _Rb_tree_node *local_48;
  
  local_48 = param_1;
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      pvVar10 = *(void **)(local_48 + 0x18);
      while (pvVar10 != (void *)0x0) {
        pvVar8 = *(void **)((long)pvVar10 + 0x18);
        while (pvVar8 != (void *)0x0) {
          pvVar7 = *(void **)((long)pvVar8 + 0x18);
          while (pvVar7 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar7 + 0x18);
            while (pvVar5 != (void *)0x0) {
              pvVar3 = *(void **)((long)pvVar5 + 0x18);
              while (pvVar3 != (void *)0x0) {
                pvVar4 = *(void **)((long)pvVar3 + 0x18);
                while (pvVar4 != (void *)0x0) {
                  pvVar6 = *(void **)((long)pvVar4 + 0x18);
                  while (pvVar6 != (void *)0x0) {
                    pvVar2 = *(void **)((long)pvVar6 + 0x18);
                    while (pvVar2 != (void *)0x0) {
                      _M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
                      pvVar1 = *(void **)((long)pvVar2 + 0x10);
                      operator_delete(pvVar2,0x98);
                      pvVar2 = pvVar1;
                    }
                    pvVar2 = *(void **)((long)pvVar6 + 0x10);
                    operator_delete(pvVar6,0x98);
                    pvVar6 = pvVar2;
                  }
                  pvVar6 = *(void **)((long)pvVar4 + 0x10);
                  operator_delete(pvVar4,0x98);
                  pvVar4 = pvVar6;
                }
                pvVar4 = *(void **)((long)pvVar3 + 0x10);
                operator_delete(pvVar3,0x98);
                pvVar3 = pvVar4;
              }
              pvVar3 = *(void **)((long)pvVar5 + 0x10);
              operator_delete(pvVar5,0x98);
              pvVar5 = pvVar3;
            }
            pvVar5 = *(void **)((long)pvVar7 + 0x10);
            operator_delete(pvVar7,0x98);
            pvVar7 = pvVar5;
          }
          pvVar7 = *(void **)((long)pvVar8 + 0x10);
          operator_delete(pvVar8,0x98);
          pvVar8 = pvVar7;
        }
        pvVar8 = *(void **)((long)pvVar10 + 0x10);
        operator_delete(pvVar10,0x98);
        pvVar10 = pvVar8;
      }
      p_Var9 = *(_Rb_tree_node **)(local_48 + 0x10);
      operator_delete(local_48,0x98);
      local_48 = p_Var9;
    } while (p_Var9 != (_Rb_tree_node *)0x0);
  }
  return;
}



/* manifold::BatchUnion(std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> > >&)::{lambda(manifold::Vec<unsigned long>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(manifold::Vec<unsigned long> const&) const [clone .isra.0]
    */

undefined8 __thiscall
manifold::
BatchUnion(std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>&)
::{lambda(manifold::Vec<unsigned_long>const&)#1}::operator()
          (_lambda_manifold__Vec<unsigned_long>const___1_ *this,Vec *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  double *pdVar4;
  long *in_RDX;
  double *pdVar5;
  long lVar6;
  long *plVar7;
  double dVar8;
  
  plVar3 = (long *)*in_RDX;
  lVar6 = in_RDX[1] * 8;
  plVar1 = plVar3 + in_RDX[1];
  if (0 < lVar6 >> 5) {
    lVar2 = *(long *)this;
    plVar7 = plVar3 + (lVar6 >> 5) * 4;
    pdVar4 = (double *)((long)param_1 * 0x30 + lVar2);
    dVar8 = *pdVar4;
    do {
      pdVar5 = (double *)(*plVar3 * 0x30 + lVar2);
      if ((((dVar8 <= pdVar5[3]) && (pdVar4[1] <= pdVar5[4])) && (pdVar4[2] <= pdVar5[5])) &&
         (((*pdVar5 <= pdVar4[3] && (pdVar5[1] <= pdVar4[4])) && (pdVar5[2] <= pdVar4[5])))) {
        return CONCAT71((int7)((ulong)plVar3 >> 8),plVar1 == plVar3);
      }
      pdVar5 = (double *)(plVar3[1] * 0x30 + lVar2);
      if (((dVar8 <= pdVar5[3]) && (pdVar4[1] <= pdVar5[4])) &&
         ((pdVar4[2] <= pdVar5[5] &&
          (((*pdVar5 <= pdVar4[3] && (pdVar5[1] <= pdVar4[4])) && (pdVar5[2] <= pdVar4[5])))))) {
        return CONCAT71((int7)((ulong)(plVar3 + 1) >> 8),plVar1 == plVar3 + 1);
      }
      pdVar5 = (double *)(plVar3[2] * 0x30 + lVar2);
      if (((dVar8 <= pdVar5[3]) && (pdVar4[1] <= pdVar5[4])) &&
         (((pdVar4[2] <= pdVar5[5] && ((*pdVar5 <= pdVar4[3] && (pdVar5[1] <= pdVar4[4])))) &&
          (pdVar5[2] <= pdVar4[5])))) {
        return CONCAT71((int7)((ulong)(plVar3 + 2) >> 8),plVar1 == plVar3 + 2);
      }
      pdVar5 = (double *)(plVar3[3] * 0x30 + lVar2);
      if (((((dVar8 <= pdVar5[3]) && (pdVar4[1] <= pdVar5[4])) && (pdVar4[2] <= pdVar5[5])) &&
          ((*pdVar5 <= pdVar4[3] && (pdVar5[1] <= pdVar4[4])))) && (pdVar5[2] <= pdVar4[5])) {
        return CONCAT71((int7)((ulong)(plVar3 + 3) >> 8),plVar1 == plVar3 + 3);
      }
      plVar3 = plVar3 + 4;
    } while (plVar3 != plVar7);
    lVar6 = (long)plVar1 - (long)plVar3;
  }
  lVar6 = lVar6 >> 3;
  if (lVar6 == 2) {
    lVar6 = *(long *)this;
    pdVar4 = (double *)((long)param_1 * 0x30 + lVar6);
    dVar8 = *pdVar4;
LAB_0010055d:
    pdVar5 = (double *)(*plVar3 * 0x30 + lVar6);
    if ((((dVar8 <= pdVar5[3]) && (pdVar4[1] <= pdVar5[4])) &&
        ((pdVar4[2] <= pdVar5[5] && ((*pdVar5 <= pdVar4[3] && (pdVar5[1] <= pdVar4[4])))))) &&
       (pdVar5[2] <= pdVar4[5])) goto LAB_001004e3;
    plVar3 = plVar3 + 1;
  }
  else {
    if (lVar6 == 3) {
      lVar6 = *(long *)this;
      pdVar4 = (double *)((long)param_1 * 0x30 + lVar6);
      dVar8 = *pdVar4;
      pdVar5 = (double *)(*plVar3 * 0x30 + lVar6);
      if (((dVar8 <= pdVar5[3]) && (pdVar4[1] <= pdVar5[4])) &&
         ((pdVar4[2] <= pdVar5[5] &&
          (((*pdVar5 <= pdVar4[3] && (pdVar5[1] <= pdVar4[4])) && (pdVar5[2] <= pdVar4[5]))))))
      goto LAB_001004e3;
      plVar3 = plVar3 + 1;
      goto LAB_0010055d;
    }
    if (lVar6 != 1) {
      return 1;
    }
    lVar6 = *(long *)this;
    pdVar4 = (double *)((long)param_1 * 0x30 + lVar6);
    dVar8 = *pdVar4;
  }
  pdVar5 = (double *)(lVar6 + *plVar3 * 0x30);
  if ((((pdVar5[3] < dVar8) || (pdVar5[4] < pdVar4[1])) || (pdVar5[5] < pdVar4[2])) ||
     (((pdVar4[3] < *pdVar5 || (pdVar4[4] < pdVar5[1])) || (pdVar4[5] < pdVar5[2])))) {
    return 1;
  }
LAB_001004e3:
  return CONCAT71((int7)((ulong)plVar3 >> 8),plVar1 == plVar3);
}



/* manifold::CsgLeafNode::ToLeafNode() const */

void manifold::CsgLeafNode::ToLeafNode(void)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int iVar17;
  long in_RSI;
  long *in_RDI;
  long *plVar18;
  
  *in_RDI = 0;
  puVar16 = (undefined8 *)operator_new(0x98);
  uVar3 = _LC0;
  *puVar16 = &PTR___Sp_counted_ptr_inplace_0010f098;
  puVar1 = puVar16 + 2;
  puVar16[1] = uVar3;
  uVar3 = *(undefined8 *)(in_RSI + 0x18);
  puVar16[3] = 0;
  puVar16[5] = uVar3;
  lVar4 = *(long *)(in_RSI + 0x20);
  puVar16[4] = 0;
  puVar16[2] = &PTR_ToLeafNode_0010ef90;
  puVar16[6] = lVar4;
  if (lVar4 == 0) {
LAB_001006bb:
    uVar8 = *(undefined8 *)(in_RSI + 0x30);
    uVar9 = *(undefined8 *)(in_RSI + 0x38);
    uVar10 = *(undefined8 *)(in_RSI + 0x40);
    uVar3 = *(undefined8 *)(in_RSI + 0x68);
    uVar5 = *(undefined8 *)(in_RSI + 0x70);
    uVar6 = *(undefined8 *)(in_RSI + 0x78);
    uVar7 = *(undefined8 *)(in_RSI + 0x80);
    puVar16[7] = *(undefined8 *)(in_RSI + 0x28);
    puVar16[8] = uVar8;
    uVar8 = *(undefined8 *)(in_RSI + 0x48);
    uVar11 = *(undefined8 *)(in_RSI + 0x50);
    puVar16[9] = uVar9;
    puVar16[10] = uVar10;
    uVar9 = *(undefined8 *)(in_RSI + 0x58);
    uVar10 = *(undefined8 *)(in_RSI + 0x60);
    in_RDI[1] = (long)puVar16;
    *in_RDI = (long)puVar1;
    puVar16[0xb] = uVar8;
    puVar16[0xc] = uVar11;
    puVar16[0xd] = uVar9;
    puVar16[0xe] = uVar10;
    puVar16[0xf] = uVar3;
    puVar16[0x10] = uVar5;
    puVar16[0x11] = uVar6;
    puVar16[0x12] = uVar7;
LAB_001006fc:
    puVar16[3] = puVar1;
LAB_00100700:
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)((long)puVar16 + 0xc) = *(int *)((long)puVar16 + 0xc) + 1;
      UNLOCK();
      goto LAB_001007c5;
    }
    plVar18 = (long *)puVar16[4];
    *(int *)((long)puVar16 + 0xc) = *(int *)((long)puVar16 + 0xc) + 1;
    if (plVar18 == (long *)0x0) goto LAB_00100738;
LAB_0010071a:
    iVar17 = *(int *)((long)plVar18 + 0xc);
    *(int *)((long)plVar18 + 0xc) = iVar17 + -1;
  }
  else {
    if (__libc_single_threaded != '\0') {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      goto LAB_001006bb;
    }
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    uVar3 = *(undefined8 *)(in_RSI + 0x28);
    uVar5 = *(undefined8 *)(in_RSI + 0x30);
    uVar6 = *(undefined8 *)(in_RSI + 0x38);
    uVar7 = *(undefined8 *)(in_RSI + 0x40);
    uVar8 = *(undefined8 *)(in_RSI + 0x48);
    uVar9 = *(undefined8 *)(in_RSI + 0x50);
    uVar10 = *(undefined8 *)(in_RSI + 0x58);
    uVar11 = *(undefined8 *)(in_RSI + 0x60);
    uVar12 = *(undefined8 *)(in_RSI + 0x68);
    uVar13 = *(undefined8 *)(in_RSI + 0x70);
    uVar14 = *(undefined8 *)(in_RSI + 0x78);
    uVar15 = *(undefined8 *)(in_RSI + 0x80);
    lVar4 = puVar16[4];
    in_RDI[1] = (long)puVar16;
    *in_RDI = (long)puVar1;
    puVar16[7] = uVar3;
    puVar16[8] = uVar5;
    puVar16[9] = uVar6;
    puVar16[10] = uVar7;
    puVar16[0xb] = uVar8;
    puVar16[0xc] = uVar9;
    puVar16[0xd] = uVar10;
    puVar16[0xe] = uVar11;
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar13;
    puVar16[0x11] = uVar14;
    puVar16[0x12] = uVar15;
    if (lVar4 == 0) goto LAB_001006fc;
    if (*(int *)(lVar4 + 8) != 0) {
      return;
    }
    puVar16[3] = puVar1;
    if (puVar16 != (undefined8 *)0x0) goto LAB_00100700;
LAB_001007c5:
    plVar18 = (long *)puVar16[4];
    if (plVar18 == (long *)0x0) goto LAB_00100738;
    if (__libc_single_threaded != '\0') goto LAB_0010071a;
    LOCK();
    piVar2 = (int *)((long)plVar18 + 0xc);
    iVar17 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if (iVar17 == 1) {
    (**(code **)(*plVar18 + 0x18))();
  }
LAB_00100738:
  puVar16[4] = puVar16;
  return;
}



/* manifold::CsgNode::Translate(linalg::vec<double, 3> const&) const */

vec * manifold::CsgNode::Translate(vec *param_1)

{
  double *in_RDX;
  long *in_RSI;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  double local_30;
  double dStack_28;
  double local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_30 = *in_RDX + 0.0;
  dStack_28 = in_RDX[1] + 0.0;
  local_78 = _LC10;
  uStack_70 = 0;
  local_58 = _LC10;
  uStack_50 = 0;
  local_20 = in_RDX[2] + 0.0;
  local_38 = _LC10;
  local_48 = (undefined1  [16])0x0;
  (**(code **)(*in_RSI + 8))(param_1,in_RSI,&local_78);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::CsgNode::Scale(linalg::vec<double, 3> const&) const */

vec * manifold::CsgNode::Scale(vec *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *in_RDX;
  long *in_RSI;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined8 local_88 [4];
  undefined8 local_68 [2];
  undefined1 local_58 [24];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined4 local_18;
  int local_14;
  long local_10;
  undefined1 *puVar5;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 2;
  puVar4 = local_88;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_20 = _LC12;
  piVar2 = (int *)&local_20;
  do {
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      uVar6 = *in_RDX;
      puVar4 = local_88;
    }
    else if (iVar1 == 1) {
      uVar6 = in_RDX[1];
      puVar4 = local_68;
    }
    else {
      uVar6 = in_RDX[2];
      puVar5 = local_40;
      if (iVar1 == 2) {
        puVar5 = local_58;
      }
      puVar4 = (undefined8 *)(puVar5 + 0x10);
    }
    piVar2 = piVar2 + 1;
    *puVar4 = uVar6;
  } while (piVar2 != &local_14);
  (**(code **)(*in_RSI + 8))(param_1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::CsgNode::Rotate(double, double, double) const */

void manifold::CsgNode::Rotate(double param_1,double param_2,double param_3)

{
  int iVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_158;
  double local_150;
  double local_148;
  double local_130;
  double local_128;
  double local_120;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  dVar3 = _LC1;
  dVar7 = _LC5;
  dVar2 = (double)((ulong)param_1 & _LC3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_LC4 < dVar2) {
    dVar3 = sin(param_1);
    local_158 = _LC5;
    local_148 = _LC1;
    dVar8 = param_1 + _LC5;
    local_c8 = (double)((ulong)dVar3 ^ (ulong)_LC1);
    dVar7 = (double)((ulong)dVar8 & _LC3);
    if (dVar7 <= _LC4) {
LAB_00100b51:
      if (dVar8 < 0.0) {
        dVar7 = remquo((double)((ulong)dVar8 ^ (ulong)local_148),local_158,(int *)&local_a8);
        iVar1 = (int)local_a8._0_4_ % 4;
        if (iVar1 == 2) {
          local_c0 = sin((dVar7 * __LC7) / __LC8);
        }
        else if (iVar1 == 3) {
          local_c0 = cos((dVar7 * __LC7) / __LC8);
        }
        else if (((ulong)local_a8 & 3) == 0) {
          local_c0 = sin((dVar7 * __LC7) / __LC8);
          local_c0 = (double)((ulong)local_c0 ^ (ulong)local_148);
        }
        else if (iVar1 == 1) {
          local_c0 = cos((dVar7 * __LC7) / __LC8);
          local_c0 = (double)((ulong)local_c0 ^ (ulong)local_148);
        }
        else {
          local_c0 = _LC1;
        }
        dVar3 = remquo((double)((ulong)dVar8 ^ (ulong)local_148),local_158,(int *)&local_a8);
        iVar1 = (int)local_a8._0_4_ % 4;
        if (iVar1 == 2) {
          dVar7 = sin((dVar3 * __LC7) / __LC8);
        }
        else if (iVar1 == 3) {
          dVar7 = cos((dVar3 * __LC7) / __LC8);
        }
        else if (((ulong)local_a8 & 3) == 0) {
          dVar7 = sin((dVar3 * __LC7) / __LC8);
          dVar7 = (double)((ulong)dVar7 ^ (ulong)local_148);
        }
        else {
          dVar7 = _LC1;
          if (iVar1 == 1) {
            dVar7 = cos((dVar3 * __LC7) / __LC8);
            dVar7 = (double)((ulong)dVar7 ^ (ulong)local_148);
          }
        }
        goto LAB_00100c50;
      }
LAB_00100ff0:
      dVar3 = remquo(dVar7,local_158,(int *)&local_a8);
      iVar1 = (int)local_a8._0_4_ % 4;
      if (iVar1 == 2) {
        local_c0 = sin((dVar3 * __LC7) / __LC8);
        local_c0 = (double)((ulong)local_c0 ^ (ulong)_LC1);
      }
      else if (iVar1 == 3) {
        local_c0 = cos((dVar3 * __LC7) / __LC8);
        local_c0 = (double)((ulong)local_c0 ^ (ulong)_LC1);
      }
      else if (((ulong)local_a8 & 3) == 0) {
        local_c0 = sin((dVar3 * __LC7) / __LC8);
      }
      else if (iVar1 == 1) {
        local_c0 = cos((dVar3 * __LC7) / __LC8);
      }
      else {
        local_c0 = 0.0;
      }
      dVar3 = remquo(dVar7,local_158,(int *)&local_a8);
      iVar1 = (int)local_a8._0_4_ % 4;
      if (iVar1 == 2) {
        dVar7 = sin((dVar3 * __LC7) / __LC8);
        dVar7 = (double)((ulong)dVar7 ^ (ulong)_LC1);
      }
      else if (iVar1 == 3) {
        dVar7 = cos((dVar3 * __LC7) / __LC8);
        dVar7 = (double)((ulong)dVar7 ^ (ulong)_LC1);
      }
      else if (((ulong)local_a8 & 3) == 0) {
        dVar7 = sin((dVar3 * __LC7) / __LC8);
      }
      else {
        dVar7 = 0.0;
        if (iVar1 == 1) {
          dVar7 = cos((dVar3 * __LC7) / __LC8);
        }
      }
      if (param_1 < 0.0) {
        local_148 = _LC1;
        goto LAB_00100c50;
      }
      goto LAB_001010e7;
    }
    dVar7 = sin(dVar8);
    local_c0 = dVar7;
  }
  else if (param_1 < 0.0) {
    local_158 = _LC5;
    local_148 = _LC1;
    dVar8 = remquo((double)((ulong)param_1 ^ (ulong)_LC1),_LC5,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
      local_c8 = sin((dVar8 * __LC7) / __LC8);
      local_c8 = (double)((ulong)local_c8 ^ (ulong)dVar3);
    }
    else if (iVar1 == 3) {
      local_c8 = cos((dVar8 * __LC7) / __LC8);
      local_c8 = (double)((ulong)local_c8 ^ (ulong)dVar3);
    }
    else if (((ulong)local_a8 & 3) == 0) {
      local_c8 = sin((dVar8 * __LC7) / __LC8);
    }
    else if (iVar1 == 1) {
      local_c8 = cos((dVar8 * __LC7) / __LC8);
    }
    else {
      local_c8 = 0.0;
    }
    dVar8 = param_1 + dVar7;
    dVar7 = (double)((ulong)dVar8 & _LC3);
    if (dVar7 <= _LC4) goto LAB_00100b51;
    local_c0 = sin(dVar8);
    dVar7 = local_c0;
LAB_00100c50:
    dVar2 = remquo((double)((ulong)param_1 ^ (ulong)local_148),local_158,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
LAB_00101d20:
      dVar3 = sin((dVar2 * __LC7) / __LC8);
    }
    else {
      if (iVar1 != 3) {
        if (((ulong)local_a8 & 3) == 0) {
          dVar3 = sin((dVar2 * __LC7) / __LC8);
          dVar3 = (double)((ulong)dVar3 ^ (ulong)local_148);
        }
        else {
          dVar3 = _LC1;
          if (iVar1 == 1) {
            dVar3 = cos((dVar2 * __LC7) / __LC8);
            dVar3 = (double)((ulong)dVar3 ^ (ulong)local_148);
          }
        }
        goto LAB_00100d56;
      }
LAB_00101138:
      dVar3 = cos((dVar2 * __LC7) / __LC8);
    }
  }
  else {
    local_158 = _LC5;
    dVar3 = remquo(dVar2,_LC5,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
      local_c8 = sin((dVar3 * __LC7) / __LC8);
LAB_001020c5:
      dVar7 = param_1 + dVar7;
      if (dVar7 <= _LC4) goto LAB_00100ff0;
      dVar7 = sin(_LC13);
      local_c0 = dVar7;
    }
    else if (iVar1 == 3) {
      local_c8 = cos((dVar3 * __LC7) / __LC8);
LAB_00100a53:
      dVar7 = param_1 + dVar7;
      if (dVar7 <= _LC4) goto LAB_00100ff0;
      dVar7 = sin(_LC13);
      local_c0 = dVar7;
    }
    else {
      if (((ulong)local_a8 & 3) == 0) {
        local_c8 = sin((dVar3 * __LC7) / __LC8);
        local_c8 = (double)((ulong)local_c8 ^ (ulong)_LC1);
        goto LAB_001020c5;
      }
      if (iVar1 == 1) {
        local_c8 = cos((dVar3 * __LC7) / __LC8);
        local_c8 = (double)((ulong)local_c8 ^ (ulong)_LC1);
        goto LAB_00100a53;
      }
      dVar7 = param_1 + dVar7;
      if (dVar7 <= _LC4) {
        local_c8 = _LC1;
        goto LAB_00100ff0;
      }
      dVar7 = sin(_LC13);
      local_c8 = _LC1;
      local_c0 = dVar7;
    }
LAB_001010e7:
    dVar2 = remquo(dVar2,local_158,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
      dVar3 = sin((dVar2 * __LC7) / __LC8);
      dVar3 = (double)((ulong)dVar3 ^ (ulong)_LC1);
    }
    else if (iVar1 == 3) {
      dVar3 = cos((dVar2 * __LC7) / __LC8);
      dVar3 = (double)((ulong)dVar3 ^ (ulong)_LC1);
    }
    else {
      if (((ulong)local_a8 & 3) == 0) goto LAB_00101d20;
      dVar3 = 0.0;
      if (iVar1 == 1) goto LAB_00101138;
    }
  }
LAB_00100d56:
  dVar2 = _LC1;
  dVar8 = (double)((ulong)param_2 & _LC3);
  if (_LC4 < dVar8) {
    local_130 = sin(param_2);
    dVar2 = (double)((ulong)(param_2 + local_158) & _LC3);
    if (dVar2 <= _LC4) {
LAB_001017a9:
      dVar4 = _LC1;
      if (0.0 <= param_2 + local_158) goto LAB_00100e38;
      dVar2 = (double)((ulong)(param_2 + local_158) ^ (ulong)_LC1);
      local_148 = _LC1;
      dVar8 = remquo(dVar2,local_158,(int *)&local_a8);
      iVar1 = (int)local_a8._0_4_ % 4;
      if (iVar1 == 2) {
        local_b8 = sin((dVar8 * __LC7) / __LC8);
      }
      else if (iVar1 == 3) {
        local_b8 = cos((dVar8 * __LC7) / __LC8);
      }
      else if (((ulong)local_a8 & 3) == 0) {
        local_b8 = sin((dVar8 * __LC7) / __LC8);
        local_b8 = (double)((ulong)local_b8 ^ (ulong)dVar4);
      }
      else if (iVar1 == 1) {
        local_b8 = cos((dVar8 * __LC7) / __LC8);
        local_b8 = (double)((ulong)local_b8 ^ (ulong)dVar4);
      }
      else {
        local_b8 = _LC1;
      }
      dVar8 = remquo(dVar2,local_158,(int *)&local_a8);
      iVar1 = (int)local_a8._0_4_ % 4;
      if (iVar1 == 2) {
        dVar2 = sin((dVar8 * __LC7) / __LC8);
      }
      else if (iVar1 == 3) {
        dVar2 = cos((dVar8 * __LC7) / __LC8);
      }
      else if (((ulong)local_a8 & 3) == 0) {
        dVar2 = sin((dVar8 * __LC7) / __LC8);
        dVar2 = (double)((ulong)dVar2 ^ (ulong)dVar4);
      }
      else {
        dVar2 = _LC1;
        if (iVar1 == 1) {
          dVar2 = cos((dVar8 * __LC7) / __LC8);
          dVar2 = (double)((ulong)dVar2 ^ (ulong)dVar4);
        }
      }
      goto LAB_001018b0;
    }
    dVar2 = sin(param_2 + local_158);
    local_d8 = (double)((ulong)local_130 ^ (ulong)_LC1);
    local_128 = local_130;
    local_b8 = dVar2;
  }
  else if (param_2 < 0.0) {
    local_148 = _LC1;
    dVar4 = remquo((double)((ulong)param_2 ^ (ulong)_LC1),local_158,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
      local_130 = sin((dVar4 * __LC7) / __LC8);
    }
    else if (iVar1 == 3) {
      local_130 = cos((dVar4 * __LC7) / __LC8);
    }
    else if (((ulong)local_a8 & 3) == 0) {
      local_130 = sin((dVar4 * __LC7) / __LC8);
      local_130 = (double)((ulong)local_130 ^ (ulong)dVar2);
    }
    else if (iVar1 == 1) {
      local_130 = cos((dVar4 * __LC7) / __LC8);
      local_130 = (double)((ulong)local_130 ^ (ulong)dVar2);
    }
    else {
      local_130 = _LC1;
    }
    dVar2 = (double)((ulong)(param_2 + local_158) & _LC3);
    if (dVar2 <= _LC4) goto LAB_001017a9;
    local_b8 = sin(param_2 + local_158);
    dVar2 = local_b8;
LAB_001018b0:
    dVar8 = remquo((double)((ulong)param_2 ^ (ulong)local_148),local_158,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
      local_128 = sin((dVar8 * __LC7) / __LC8);
      local_d8 = (double)((ulong)local_128 ^ (ulong)local_148);
    }
    else if (iVar1 == 3) {
      local_128 = cos((dVar8 * __LC7) / __LC8);
      local_d8 = (double)((ulong)local_128 ^ (ulong)local_148);
    }
    else if (((ulong)local_a8 & 3) == 0) {
      local_d8 = sin((dVar8 * __LC7) / __LC8);
      local_128 = (double)((ulong)local_d8 ^ (ulong)local_148);
    }
    else if (iVar1 == 1) {
      local_d8 = cos((dVar8 * __LC7) / __LC8);
      local_128 = (double)((ulong)local_d8 ^ (ulong)local_148);
    }
    else {
      local_d8 = 0.0;
      local_128 = _LC1;
    }
  }
  else {
    dVar2 = remquo(dVar8,local_158,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
      local_130 = sin((dVar2 * __LC7) / __LC8);
      dVar2 = param_2 + local_158;
      local_130 = (double)((ulong)local_130 ^ (ulong)_LC1);
      if (dVar2 <= _LC4) goto LAB_00100e38;
LAB_00101d80:
      dVar2 = sin(_LC13);
      local_b8 = dVar2;
    }
    else {
      if (iVar1 == 3) {
        local_130 = cos((dVar2 * __LC7) / __LC8);
        dVar2 = param_2 + local_158;
        local_130 = (double)((ulong)local_130 ^ (ulong)_LC1);
        if (_LC4 < dVar2) {
LAB_00101be0:
          dVar2 = sin(_LC13);
          local_b8 = dVar2;
          goto LAB_00100f2f;
        }
      }
      else if (((ulong)local_a8 & 3) == 0) {
        local_130 = sin((dVar2 * __LC7) / __LC8);
        dVar2 = param_2 + local_158;
        if (_LC4 < dVar2) goto LAB_00101d80;
      }
      else if (iVar1 == 1) {
        local_130 = cos((dVar2 * __LC7) / __LC8);
        dVar2 = param_2 + local_158;
        if (_LC4 < dVar2) goto LAB_00101be0;
      }
      else {
        dVar2 = param_2 + local_158;
        if (_LC4 < dVar2) {
          dVar2 = sin(_LC13);
          local_130 = 0.0;
          local_b8 = dVar2;
          goto LAB_00100f2f;
        }
        local_130 = 0.0;
      }
LAB_00100e38:
      dVar4 = remquo(dVar2,local_158,(int *)&local_a8);
      iVar1 = (int)local_a8._0_4_ % 4;
      if (iVar1 == 2) {
        local_b8 = sin((dVar4 * __LC7) / __LC8);
        local_b8 = (double)((ulong)local_b8 ^ (ulong)_LC1);
      }
      else if (iVar1 == 3) {
        local_b8 = cos((dVar4 * __LC7) / __LC8);
        local_b8 = (double)((ulong)local_b8 ^ (ulong)_LC1);
      }
      else if (((ulong)local_a8 & 3) == 0) {
        local_b8 = sin((dVar4 * __LC7) / __LC8);
      }
      else if (iVar1 == 1) {
        local_b8 = cos((dVar4 * __LC7) / __LC8);
      }
      else {
        local_b8 = 0.0;
      }
      dVar4 = remquo(dVar2,local_158,(int *)&local_a8);
      iVar1 = (int)local_a8._0_4_ % 4;
      if (iVar1 == 2) {
        dVar2 = sin((dVar4 * __LC7) / __LC8);
        dVar2 = (double)((ulong)dVar2 ^ (ulong)_LC1);
      }
      else if (iVar1 == 3) {
        dVar2 = cos((dVar4 * __LC7) / __LC8);
        dVar2 = (double)((ulong)dVar2 ^ (ulong)_LC1);
      }
      else if (((ulong)local_a8 & 3) == 0) {
        dVar2 = sin((dVar4 * __LC7) / __LC8);
      }
      else {
        dVar2 = 0.0;
        if (iVar1 == 1) {
          dVar2 = cos((dVar4 * __LC7) / __LC8);
        }
      }
      if (param_2 < 0.0) {
        local_148 = _LC1;
        goto LAB_001018b0;
      }
    }
LAB_00100f2f:
    dVar8 = remquo(dVar8,local_158,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
      local_d8 = sin((dVar8 * __LC7) / __LC8);
      local_128 = (double)((ulong)local_d8 ^ (ulong)_LC1);
    }
    else if (iVar1 == 3) {
      local_d8 = cos((dVar8 * __LC7) / __LC8);
      local_128 = (double)((ulong)local_d8 ^ (ulong)_LC1);
    }
    else if (((ulong)local_a8 & 3) == 0) {
      local_128 = sin((dVar8 * __LC7) / __LC8);
      local_d8 = (double)((ulong)local_128 ^ (ulong)_LC1);
    }
    else if (iVar1 == 1) {
      local_128 = cos((dVar8 * __LC7) / __LC8);
      local_d8 = (double)((ulong)local_128 ^ (ulong)_LC1);
    }
    else {
      local_128 = 0.0;
      local_d8 = _LC1;
    }
  }
  dVar8 = _LC1;
  dVar4 = (double)((ulong)param_3 & _LC3);
  if (_LC4 < dVar4) {
    local_d0 = sin(param_3);
    local_148 = _LC1;
    local_120 = (double)((ulong)_LC1 ^ (ulong)local_d0);
    dVar8 = (double)((ulong)(param_3 + local_158) & _LC3);
    if (_LC4 < dVar8) {
      dVar8 = sin(param_3 + local_158);
      dVar4 = local_d0 * 0.0 + dVar8;
      dVar5 = local_d0;
      local_150 = dVar8;
      goto LAB_001014dd;
    }
LAB_001019f9:
    if (0.0 <= param_3 + local_158) goto LAB_001012d0;
    dVar8 = (double)((ulong)(param_3 + local_158) ^ (ulong)local_148);
    dVar4 = remquo(dVar8,local_158,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
      local_150 = sin((dVar4 * __LC7) / __LC8);
    }
    else if (iVar1 == 3) {
      local_150 = cos((dVar4 * __LC7) / __LC8);
    }
    else if (((ulong)local_a8 & 3) == 0) {
      local_150 = sin((dVar4 * __LC7) / __LC8);
      local_150 = (double)((ulong)local_150 ^ (ulong)local_148);
    }
    else if (iVar1 == 1) {
      local_150 = cos((dVar4 * __LC7) / __LC8);
      local_150 = (double)((ulong)local_150 ^ (ulong)local_148);
    }
    else {
      local_150 = _LC1;
    }
    dVar4 = remquo(dVar8,local_158,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
      dVar8 = sin((dVar4 * __LC7) / __LC8);
    }
    else if (iVar1 == 3) {
      dVar8 = cos((dVar4 * __LC7) / __LC8);
    }
    else if (((ulong)local_a8 & 3) == 0) {
      dVar8 = sin((dVar4 * __LC7) / __LC8);
      dVar8 = (double)((ulong)dVar8 ^ (ulong)local_148);
    }
    else {
      dVar8 = _LC1;
      if (iVar1 == 1) {
        dVar8 = cos((dVar4 * __LC7) / __LC8);
        dVar8 = (double)((ulong)dVar8 ^ (ulong)local_148);
      }
    }
LAB_00101af8:
    dVar6 = remquo((double)((ulong)param_3 ^ (ulong)local_148),local_158,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        if ((local_a8._0_4_ & 3) == 0) {
          dVar5 = sin((dVar6 * __LC7) / __LC8);
          dVar4 = (double)((ulong)local_148 ^ (ulong)dVar5) * 0.0 + local_150;
          dVar5 = (double)((ulong)local_148 ^ (ulong)dVar5);
        }
        else {
          dVar4 = local_150;
          dVar5 = _LC1;
          if (iVar1 == 1) {
            dVar5 = cos((dVar6 * __LC7) / __LC8);
            dVar4 = (double)((ulong)local_148 ^ (ulong)dVar5) * 0.0 + local_150;
            dVar5 = (double)((ulong)local_148 ^ (ulong)dVar5);
          }
        }
        goto LAB_001014dd;
      }
      goto LAB_00101421;
    }
LAB_00101cf8:
    dVar5 = sin((dVar6 * __LC7) / __LC8);
    local_158 = dVar8;
  }
  else {
    if (param_3 < 0.0) {
      local_148 = _LC1;
      dVar5 = remquo((double)((ulong)param_3 ^ (ulong)_LC1),local_158,(int *)&local_a8);
      iVar1 = (int)local_a8._0_4_ % 4;
      if (iVar1 == 2) {
        local_d0 = sin((dVar5 * __LC7) / __LC8);
        local_120 = (double)((ulong)local_d0 ^ (ulong)dVar8);
      }
      else if (iVar1 == 3) {
        local_d0 = cos((dVar5 * __LC7) / __LC8);
        local_120 = (double)((ulong)local_d0 ^ (ulong)dVar8);
      }
      else if (((ulong)local_a8 & 3) == 0) {
        local_120 = sin((dVar5 * __LC7) / __LC8);
        local_d0 = (double)((ulong)local_120 ^ (ulong)dVar8);
      }
      else if (iVar1 == 1) {
        local_120 = cos((dVar5 * __LC7) / __LC8);
        local_d0 = (double)((ulong)local_120 ^ (ulong)dVar8);
      }
      else {
        local_120 = 0.0;
        local_d0 = _LC1;
      }
      dVar8 = (double)((ulong)(param_3 + local_158) & _LC3);
      if (dVar8 <= _LC4) goto LAB_001019f9;
      dVar8 = sin(param_3 + local_158);
      local_150 = dVar8;
      goto LAB_00101af8;
    }
    dVar8 = remquo(dVar4,local_158,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
      local_120 = sin((dVar8 * __LC7) / __LC8);
      dVar8 = param_3 + local_158;
      local_d0 = (double)((ulong)local_120 ^ (ulong)_LC1);
      if (dVar8 <= _LC4) goto LAB_001012d0;
LAB_00101c8d:
      dVar8 = sin(_LC13);
      local_150 = dVar8;
    }
    else {
      if (iVar1 == 3) {
        local_120 = cos((dVar8 * __LC7) / __LC8);
        dVar8 = param_3 + local_158;
        local_d0 = (double)((ulong)local_120 ^ (ulong)_LC1);
        if (_LC4 < dVar8) goto LAB_00101c8d;
      }
      else if (((ulong)local_a8 & 3) == 0) {
        local_d0 = sin((dVar8 * __LC7) / __LC8);
        dVar8 = param_3 + local_158;
        local_120 = (double)((ulong)local_d0 ^ (ulong)_LC1);
        if (_LC4 < dVar8) goto LAB_00101c8d;
      }
      else if (iVar1 == 1) {
        local_d0 = cos((dVar8 * __LC7) / __LC8);
        dVar8 = param_3 + local_158;
        local_120 = (double)((ulong)local_d0 ^ (ulong)_LC1);
        if (_LC4 < dVar8) goto LAB_00101c8d;
      }
      else {
        dVar8 = param_3 + local_158;
        if (_LC4 < dVar8) {
          dVar8 = sin(_LC13);
          local_120 = _LC1;
          local_d0 = 0.0;
          local_150 = dVar8;
          goto LAB_001013c4;
        }
        local_d0 = 0.0;
        local_120 = _LC1;
      }
LAB_001012d0:
      dVar5 = remquo(dVar8,local_158,(int *)&local_a8);
      iVar1 = (int)local_a8._0_4_ % 4;
      if (iVar1 == 2) {
        local_150 = sin((dVar5 * __LC7) / __LC8);
        local_150 = (double)((ulong)local_150 ^ (ulong)_LC1);
      }
      else if (iVar1 == 3) {
        local_150 = cos((dVar5 * __LC7) / __LC8);
        local_150 = (double)((ulong)local_150 ^ (ulong)_LC1);
      }
      else if (((ulong)local_a8 & 3) == 0) {
        local_150 = sin((dVar5 * __LC7) / __LC8);
      }
      else if (iVar1 == 1) {
        local_150 = cos((dVar5 * __LC7) / __LC8);
      }
      else {
        local_150 = 0.0;
      }
      dVar5 = remquo(dVar8,local_158,(int *)&local_a8);
      iVar1 = (int)local_a8._0_4_ % 4;
      if (iVar1 == 2) {
        dVar8 = sin((dVar5 * __LC7) / __LC8);
        dVar8 = (double)((ulong)dVar8 ^ (ulong)_LC1);
      }
      else if (iVar1 == 3) {
        dVar8 = cos((dVar5 * __LC7) / __LC8);
        dVar8 = (double)((ulong)dVar8 ^ (ulong)_LC1);
      }
      else if (((ulong)local_a8 & 3) == 0) {
        dVar8 = sin((dVar5 * __LC7) / __LC8);
      }
      else {
        dVar8 = 0.0;
        if (iVar1 == 1) {
          dVar8 = cos((dVar5 * __LC7) / __LC8);
        }
      }
      if (param_3 < 0.0) {
        local_148 = _LC1;
        goto LAB_00101af8;
      }
    }
LAB_001013c4:
    dVar6 = remquo(dVar4,local_158,(int *)&local_a8);
    iVar1 = (int)local_a8._0_4_ % 4;
    if (iVar1 == 2) {
      dVar5 = sin((dVar6 * __LC7) / __LC8);
LAB_0010219a:
      dVar4 = (double)((ulong)dVar5 ^ (ulong)_LC1) * 0.0 + local_150;
      dVar5 = (double)((ulong)dVar5 ^ (ulong)_LC1);
      goto LAB_001014dd;
    }
    if (iVar1 == 3) {
      dVar5 = cos((dVar6 * __LC7) / __LC8);
      goto LAB_0010219a;
    }
    if ((local_a8._0_4_ & 3) == 0) goto LAB_00101cf8;
    if (iVar1 != 1) {
      dVar4 = local_150 + 0.0;
      dVar5 = 0.0;
      goto LAB_001014dd;
    }
LAB_00101421:
    dVar5 = cos((dVar6 * __LC7) / __LC8);
    local_158 = dVar8;
  }
  dVar8 = local_158;
  dVar4 = dVar5 * 0.0 + local_150;
LAB_001014dd:
  local_60 = (undefined1  [16])0x0;
  local_50 = 0;
  local_128 = (dVar2 * 0.0 + 0.0) - local_128;
  dVar11 = dVar2 * dVar8 + local_120 * 0.0 + local_d8 * 0.0;
  dVar12 = dVar2 * dVar5 + local_150 * 0.0 + local_d8 * 0.0;
  dVar2 = (dVar8 * 0.0 - local_d0) + 0.0;
  dVar4 = dVar4 + 0.0;
  dVar9 = dVar11 * 0.0;
  dVar10 = dVar12 * 0.0;
  dVar6 = local_128 * 0.0;
  dVar8 = local_130 * dVar8 + local_120 * 0.0 + local_b8 * 0.0;
  dVar5 = local_130 * dVar5 + local_150 * 0.0 + local_b8 * 0.0;
  local_b8 = local_130 * 0.0 + 0.0 + local_b8;
  local_a8 = dVar2 * 0.0 + dVar11 + dVar8 * 0.0;
  dStack_a0 = dVar4 * 0.0 + dVar12 + dVar5 * 0.0;
  local_98 = local_b8 * 0.0 + local_128 + 0.0;
  local_90 = dVar7 * dVar2 + dVar9 + dVar3 * dVar8;
  dStack_88 = dVar7 * dVar4 + dVar10 + dVar3 * dVar5;
  local_80 = dVar7 * 0.0 + dVar6 + dVar3 * local_b8;
  local_78 = dVar2 * local_c8 + dVar9 + dVar8 * local_c0;
  local_70 = dVar4 * local_c8 + dVar10 + dVar5 * local_c0;
  local_68 = local_c8 * 0.0 + dVar6 + local_b8 * local_c0;
  (**(code **)(*in_RSI + 8))();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* manifold::CsgLeafNode::CsgLeafNode() */

void __thiscall manifold::CsgLeafNode::CsgLeafNode(CsgLeafNode *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_ToLeafNode_0010ef90;
  puVar4 = (undefined8 *)operator_new(0x198);
  uVar2 = _LC13;
  uVar1 = _LC0;
  *puVar4 = &PTR___Sp_counted_ptr_inplace_0010f028;
  puVar4[1] = uVar1;
  uVar1 = _LC20;
  puVar4[2] = uVar2;
  puVar4[3] = uVar2;
  uVar3 = _LC17;
  uVar2 = _LC13;
  puVar4[0x1a] = uVar1;
  puVar4[4] = uVar2;
  puVar4[5] = uVar3;
  uVar1 = _LC17;
  puVar4[0x21] = puVar4 + 0x1f;
  puVar4[0x22] = puVar4 + 0x1f;
  puVar4[6] = uVar1;
  puVar4[7] = uVar1;
  uVar1 = _LC19;
  *(undefined4 *)(puVar4 + 10) = 0;
  puVar4[0xb] = 0;
  puVar4[8] = uVar1;
  puVar4[9] = uVar1;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xf) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0x15) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0x1c) = (undefined1  [16])0x0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x1b] = 0;
  *(undefined4 *)(puVar4 + 0x1f) = 0;
  puVar4[0x20] = 0;
  puVar4[0x23] = 0;
  puVar4[0x24] = 0;
  *(undefined1 (*) [16])(puVar4 + 0x25) = (undefined1  [16])0x0;
  uVar1 = _LC10;
  *(undefined1 (*) [16])(puVar4 + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0x2b) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0x2e) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0x31) = (undefined1  [16])0x0;
  puVar4[0x27] = 0;
  puVar4[0x2a] = 0;
  puVar4[0x2d] = 0;
  puVar4[0x30] = 0;
  *(undefined8 **)(this + 0x18) = puVar4 + 2;
  *(undefined8 **)(this + 0x20) = puVar4;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x48) = uVar1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x68) = uVar1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  return;
}



/* manifold::CsgLeafNode::CsgLeafNode(std::shared_ptr<manifold::Manifold::Impl const>) */

void __thiscall manifold::CsgLeafNode::CsgLeafNode(CsgLeafNode *this,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_ToLeafNode_0010ef90;
  uVar1 = *param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  lVar2 = param_2[1];
  *(long *)(this + 0x20) = lVar2;
  if (lVar2 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    }
  }
  uVar1 = _LC10;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = uVar1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x68) = uVar1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  return;
}



/* manifold::CsgLeafNode::CsgLeafNode(std::shared_ptr<manifold::Manifold::Impl const>,
   linalg::mat<double, 3, 4>) */

void __thiscall manifold::CsgLeafNode::CsgLeafNode(CsgLeafNode *this,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_ToLeafNode_0010ef90;
  uVar1 = *param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  lVar2 = param_2[1];
  *(long *)(this + 0x20) = lVar2;
  if (lVar2 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    }
  }
  *(undefined8 *)(this + 0x28) = in_stack_00000008;
  *(undefined8 *)(this + 0x30) = in_stack_00000010;
  *(undefined8 *)(this + 0x38) = in_stack_00000018;
  *(undefined8 *)(this + 0x40) = in_stack_00000020;
  *(undefined8 *)(this + 0x48) = in_stack_00000028;
  *(undefined8 *)(this + 0x50) = in_stack_00000030;
  *(undefined8 *)(this + 0x58) = in_stack_00000038;
  *(undefined8 *)(this + 0x60) = in_stack_00000040;
  *(undefined8 *)(this + 0x68) = in_stack_00000048;
  *(undefined8 *)(this + 0x70) = in_stack_00000050;
  *(undefined8 *)(this + 0x78) = in_stack_00000058;
  *(undefined8 *)(this + 0x80) = in_stack_00000060;
  return;
}



/* manifold::CsgOpNode::CsgOpNode() */

void __thiscall manifold::CsgOpNode::CsgOpNode(CsgOpNode *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_ToLeafNode_0010efc0;
  *(undefined8 *)(this + 0x18) = 0;
  puVar3 = (undefined8 *)operator_new(0x28);
  uVar1 = _LC0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  puVar3[1] = uVar1;
  *puVar3 = &PTR___Sp_counted_ptr_inplace_0010f108;
  puVar3[4] = 0;
  *(undefined8 **)(this + 0x20) = puVar3;
  *(undefined8 **)(this + 0x18) = puVar3 + 2;
  *(undefined8 *)(this + 0x28) = 0;
  puVar3 = (undefined8 *)operator_new(0x38);
  uVar2 = _LC10;
  *(undefined1 (*) [16])(puVar3 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  puVar3[1] = uVar1;
  *puVar3 = &PTR___Sp_counted_ptr_inplace_0010f140;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 4) = 1;
  *(undefined8 **)(this + 0x30) = puVar3;
  *(undefined8 **)(this + 0x28) = puVar3 + 2;
  *(undefined8 *)(this + 0x40) = uVar2;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x60) = uVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x80) = uVar2;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  return;
}



/* manifold::CsgOpNode::CsgOpNode(std::vector<std::shared_ptr<manifold::CsgNode>,
   std::allocator<std::shared_ptr<manifold::CsgNode> > > const&, manifold::OpType) */

void __thiscall
manifold::CsgOpNode::CsgOpNode
          (CsgOpNode *this,long *param_1,undefined4 param_3,undefined8 param_4,undefined8 param_5,
          long param_6)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long lVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  ulong uVar8;
  undefined8 *puVar9;
  long *unaff_R13;
  undefined8 *unaff_R15;
  
  *(undefined ***)this = &PTR_ToLeafNode_0010efc0;
  puVar9 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)*param_1;
  *(undefined8 *)(this + 8) = 0;
  uVar8 = (long)puVar9 - (long)puVar6;
  *(undefined8 *)(this + 0x10) = 0;
  if (uVar8 == 0) {
    unaff_RBP = (undefined8 *)0x0;
    unaff_R15 = unaff_RBP;
    if (puVar9 != puVar6) goto LAB_00103080;
LAB_0010332c:
    *(undefined8 *)(this + 0x18) = 0;
    uVar5 = 0;
    param_1 = (long *)operator_new(0x28);
    param_6 = _LC0;
    param_1[1] = _LC0;
    unaff_R13 = param_1 + 2;
    *param_1 = (long)&PTR___Sp_counted_ptr_inplace_0010f108;
    puVar6 = (undefined8 *)0x0;
    param_1[4] = 0;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    unaff_R15 = unaff_RBP;
  }
  else {
    if (0x7ffffffffffffff0 < uVar8) {
LAB_00103390:
      puVar9 = (undefined8 *)std::__throw_bad_array_new_length();
      goto LAB_001031b0;
    }
    unaff_RBP = (undefined8 *)operator_new(uVar8);
    puVar6 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)param_1[1];
    unaff_R15 = unaff_RBP;
    if (puVar9 == puVar6) goto LAB_0010332c;
LAB_00103080:
    uVar5 = (long)puVar9 - (long)puVar6;
    unaff_RBP = (undefined8 *)((long)unaff_R15 + uVar5);
    puVar9 = unaff_R15;
    do {
      while( true ) {
        uVar4 = puVar6[1];
        lVar3 = puVar6[1];
        *puVar9 = *puVar6;
        puVar9[1] = uVar4;
        if (lVar3 != 0) break;
LAB_00103094:
        puVar9 = puVar9 + 2;
        puVar6 = puVar6 + 2;
        if (puVar9 == unaff_RBP) goto LAB_001030d0;
      }
      if (__libc_single_threaded != '\0') {
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        goto LAB_00103094;
      }
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      puVar9 = puVar9 + 2;
      puVar6 = puVar6 + 2;
    } while (puVar9 != unaff_RBP);
LAB_001030d0:
    *(undefined8 *)(this + 0x18) = 0;
    param_1 = (long *)operator_new(0x28);
    param_6 = _LC0;
    param_1[1] = _LC0;
    unaff_R13 = param_1 + 2;
    *param_1 = (long)&PTR___Sp_counted_ptr_inplace_0010f108;
    param_1[4] = 0;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    if (uVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      if (0x7ffffffffffffff0 < uVar5) goto LAB_00103390;
      puVar6 = (undefined8 *)operator_new(uVar5);
    }
  }
  *unaff_R13 = (long)puVar6;
  unaff_R13[1] = (long)puVar6;
  param_1[4] = (long)puVar6 + uVar5;
  puVar9 = puVar6;
  if (unaff_R15 != unaff_RBP) {
    puVar9 = (undefined8 *)(((long)unaff_RBP - (long)unaff_R15) + (long)puVar6);
    puVar7 = unaff_R15;
    do {
      while( true ) {
        uVar4 = puVar7[1];
        lVar3 = puVar7[1];
        *puVar6 = *puVar7;
        puVar6[1] = uVar4;
        if (lVar3 != 0) break;
LAB_00103174:
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
        if (puVar9 == puVar6) goto LAB_001031b0;
      }
      if (__libc_single_threaded != '\0') {
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        goto LAB_00103174;
      }
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (puVar9 != puVar6);
  }
LAB_001031b0:
  param_1[3] = (long)puVar9;
  *(long **)(this + 0x18) = unaff_R13;
  *(long **)(this + 0x20) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  puVar6 = (undefined8 *)operator_new(0x38);
  *puVar6 = &PTR___Sp_counted_ptr_inplace_0010f140;
  *(undefined1 (*) [16])(puVar6 + 4) = (undefined1  [16])0x0;
  puVar6[1] = param_6;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 4) = 1;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  *(undefined8 **)(this + 0x30) = puVar6;
  *(undefined8 **)(this + 0x28) = puVar6 + 2;
  puVar6 = unaff_R15;
joined_r0x0010321e:
  do {
    if (puVar6 == unaff_RBP) {
      if (unaff_R15 != (undefined8 *)0x0) {
        operator_delete(unaff_R15,uVar8);
      }
      uVar4 = _LC10;
      *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
      *(undefined4 *)(this + 0x38) = param_3;
      *(undefined8 *)(this + 0x40) = uVar4;
      *(undefined8 *)(this + 0x48) = 0;
      *(undefined8 *)(this + 0x60) = uVar4;
      *(undefined8 *)(this + 0x68) = 0;
      *(undefined8 *)(this + 0x80) = uVar4;
      *(undefined8 *)(this + 0x88) = 0;
      *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
      return;
    }
    this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar6[1];
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = this_00 + 8;
      if (*(long *)(this_00 + 8) == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar2 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar2 = *(int *)(this_00 + 8);
          *(int *)(this_00 + 8) = iVar2 + -1;
        }
        if (iVar2 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
          puVar6 = puVar6 + 2;
          goto joined_r0x0010321e;
        }
      }
    }
    puVar6 = puVar6 + 2;
  } while( true );
}



/* void std::vector<std::shared_ptr<manifold::CsgNode>,
   std::allocator<std::shared_ptr<manifold::CsgNode> >
   >::_M_assign_aux<std::shared_ptr<manifold::CsgNode> const*>(std::shared_ptr<manifold::CsgNode>
   const*, std::shared_ptr<manifold::CsgNode> const*, std::forward_iterator_tag) [clone .isra.0] */

void std::
     vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>::
     _M_assign_aux<std::shared_ptr<manifold::CsgNode>const*>
               (long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  void *pvVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var14;
  
  uVar8 = (long)param_3 - (long)param_2;
  puVar12 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar12) < uVar8) {
    if (0x7ffffffffffffff0 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    }
    puVar5 = (undefined8 *)operator_new(uVar8);
    puVar12 = puVar5;
    if (param_3 != param_2) {
      do {
        while( true ) {
          uVar4 = param_2[1];
          lVar7 = param_2[1];
          *puVar12 = *param_2;
          puVar12[1] = uVar4;
          if (lVar7 != 0) break;
LAB_00103404:
          param_2 = param_2 + 2;
          puVar12 = puVar12 + 2;
          if (param_3 == param_2) goto LAB_00103440;
        }
        if (__libc_single_threaded != '\0') {
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          goto LAB_00103404;
        }
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
        param_2 = param_2 + 2;
        puVar12 = puVar12 + 2;
      } while (param_3 != param_2);
    }
LAB_00103440:
    pvVar2 = (void *)param_1[1];
    pvVar11 = (void *)*param_1;
    if (pvVar2 != pvVar11) {
LAB_00103477:
      do {
        p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar11 + 8);
        if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var14 = p_Var3 + 8;
          if (*(long *)(p_Var3 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var3 + 8) = 0;
            (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
            (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var14;
              *(int *)p_Var14 = *(int *)p_Var14 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(p_Var3 + 8);
              *(int *)(p_Var3 + 8) = iVar9 + -1;
            }
            if (iVar9 == 1) {
              pvVar11 = (void *)((long)pvVar11 + 0x10);
              _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
              if (pvVar2 == pvVar11) break;
              goto LAB_00103477;
            }
          }
        }
        pvVar11 = (void *)((long)pvVar11 + 0x10);
      } while (pvVar2 != pvVar11);
      pvVar11 = (void *)*param_1;
    }
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11,param_1[2] - (long)pvVar11);
    }
    *param_1 = (long)puVar5;
    param_1[1] = (long)puVar5 + uVar8;
    param_1[2] = (long)puVar5 + uVar8;
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    uVar6 = (long)puVar5 - (long)puVar12;
    if (uVar6 < uVar8) {
      puVar13 = (undefined8 *)((long)param_2 + uVar6);
      if (0 < (long)uVar6) {
        do {
          p_Var3 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_2[1];
          p_Var14 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar12[1];
          *puVar12 = *param_2;
          if (p_Var3 != p_Var14) {
            if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              if (__libc_single_threaded == '\0') {
                LOCK();
                *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
                UNLOCK();
                p_Var14 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar12[1];
              }
              else {
                *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
              }
            }
            if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              p_Var1 = p_Var14 + 8;
              if (*(long *)(p_Var14 + 8) == 0x100000001) {
                *(undefined8 *)(p_Var14 + 8) = 0;
                (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
                (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar9 = *(int *)p_Var1;
                  *(int *)p_Var1 = *(int *)p_Var1 + -1;
                  UNLOCK();
                }
                else {
                  iVar9 = *(int *)(p_Var14 + 8);
                  *(int *)(p_Var14 + 8) = iVar9 + -1;
                }
                if (iVar9 == 1) {
                  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var14);
                }
              }
            }
            puVar12[1] = p_Var3;
          }
          param_2 = param_2 + 2;
          puVar12 = puVar12 + 2;
        } while (param_2 != puVar13);
        puVar5 = (undefined8 *)param_1[1];
      }
      puVar12 = puVar13;
      puVar10 = puVar5;
      if (param_3 != puVar13) {
        do {
          while( true ) {
            uVar4 = puVar12[1];
            lVar7 = puVar12[1];
            *puVar10 = *puVar12;
            puVar10[1] = uVar4;
            if (lVar7 != 0) break;
LAB_0010373c:
            puVar12 = puVar12 + 2;
            puVar10 = puVar10 + 2;
            if (param_3 == puVar12) goto LAB_00103778;
          }
          if (__libc_single_threaded != '\0') {
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            goto LAB_0010373c;
          }
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
          puVar12 = puVar12 + 2;
          puVar10 = puVar10 + 2;
        } while (param_3 != puVar12);
LAB_00103778:
        puVar5 = (undefined8 *)((long)puVar5 + ((long)param_3 - (long)puVar13));
      }
      param_1[1] = (long)puVar5;
      return;
    }
    if (0 < (long)uVar8) {
      lVar7 = (long)uVar8 >> 4;
      puVar5 = puVar12;
      do {
        p_Var3 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_2[1];
        p_Var14 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar5[1];
        *puVar5 = *param_2;
        if (p_Var3 != p_Var14) {
          if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (__libc_single_threaded == '\0') {
              LOCK();
              *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
              UNLOCK();
              p_Var14 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar5[1];
            }
            else {
              *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
            }
          }
          if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var1 = p_Var14 + 8;
            if (*(long *)(p_Var14 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var14 + 8) = 0;
              (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
              (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(p_Var14 + 8);
                *(int *)(p_Var14 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var14);
              }
            }
          }
          puVar5[1] = p_Var3;
        }
        param_2 = param_2 + 2;
        puVar5 = puVar5 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      puVar5 = (undefined8 *)param_1[1];
      if ((long)uVar8 < 1) {
        uVar8 = 0x10;
      }
      puVar12 = (undefined8 *)((long)puVar12 + uVar8);
    }
    puVar13 = puVar12;
    if (puVar5 != puVar12) {
      do {
        p_Var3 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar13[1];
        if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var14 = p_Var3 + 8;
          if (*(long *)(p_Var3 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var3 + 8) = 0;
            (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
            (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var14;
              *(int *)p_Var14 = *(int *)p_Var14 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(p_Var3 + 8);
              *(int *)(p_Var3 + 8) = iVar9 + -1;
            }
            if (iVar9 == 1) {
              _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
            }
          }
        }
        puVar13 = puVar13 + 2;
      } while (puVar5 != puVar13);
      param_1[1] = (long)puVar12;
      return;
    }
  }
  return;
}



/* manifold::CsgLeafNode::Transform(linalg::mat<double, 3, 4> const&) const */

mat * manifold::CsgLeafNode::Transform(mat *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int *piVar2;
  undefined8 uVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 *puVar9;
  int iVar10;
  double *in_RDX;
  long in_RSI;
  long *plVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  dVar15 = *in_RDX;
  dVar17 = in_RDX[1];
  dVar18 = in_RDX[6];
  dVar5 = in_RDX[7];
  dVar6 = in_RDX[2];
  dVar16 = in_RDX[0xb];
  dVar7 = in_RDX[5];
  dVar8 = in_RDX[8];
  dVar13 = *(double *)(in_RSI + 0x78) * in_RDX[3] + *(double *)(in_RSI + 0x70) * dVar15 +
           *(double *)(in_RSI + 0x80) * dVar18 + in_RDX[9];
  dVar14 = *(double *)(in_RSI + 0x78) * in_RDX[4] + *(double *)(in_RSI + 0x70) * dVar17 +
           *(double *)(in_RSI + 0x80) * dVar5 + in_RDX[10];
  dVar21 = *(double *)(in_RSI + 0x28) * dVar15 + in_RDX[3] * *(double *)(in_RSI + 0x30) +
           *(double *)(in_RSI + 0x38) * dVar18 + in_RDX[9] * 0.0;
  dVar22 = *(double *)(in_RSI + 0x28) * dVar17 + in_RDX[4] * *(double *)(in_RSI + 0x30) +
           *(double *)(in_RSI + 0x38) * dVar5 + in_RDX[10] * 0.0;
  dVar23 = *(double *)(in_RSI + 0x48) * in_RDX[3] + *(double *)(in_RSI + 0x40) * dVar15 +
           *(double *)(in_RSI + 0x50) * dVar18 + in_RDX[9] * 0.0;
  dVar24 = *(double *)(in_RSI + 0x48) * in_RDX[4] + *(double *)(in_RSI + 0x40) * dVar17 +
           *(double *)(in_RSI + 0x50) * dVar5 + in_RDX[10] * 0.0;
  dVar19 = *(double *)(in_RSI + 0x50) * dVar8 +
           *(double *)(in_RSI + 0x40) * dVar6 + *(double *)(in_RSI + 0x48) * dVar7 + dVar16 * 0.0;
  dVar20 = *(double *)(in_RSI + 0x68) * dVar18 +
           *(double *)(in_RSI + 0x58) * dVar15 + *(double *)(in_RSI + 0x60) * in_RDX[3] +
           in_RDX[9] * 0.0;
  dVar17 = *(double *)(in_RSI + 0x60) * in_RDX[4] + dVar17 * *(double *)(in_RSI + 0x58) +
           dVar5 * *(double *)(in_RSI + 0x68) + in_RDX[10] * 0.0;
  dVar18 = *(double *)(in_RSI + 0x60) * dVar7 + dVar6 * *(double *)(in_RSI + 0x58) +
           dVar8 * *(double *)(in_RSI + 0x68) + dVar16 * 0.0;
  dVar15 = *(double *)(in_RSI + 0x38) * dVar8 +
           *(double *)(in_RSI + 0x30) * dVar7 + *(double *)(in_RSI + 0x28) * dVar6 + dVar16 * 0.0;
  dVar16 = *(double *)(in_RSI + 0x80) * dVar8 +
           *(double *)(in_RSI + 0x78) * dVar7 + *(double *)(in_RSI + 0x70) * dVar6 + dVar16;
  puVar9 = (undefined8 *)operator_new(0x98);
  puVar9[1] = _LC0;
  *puVar9 = &PTR___Sp_counted_ptr_inplace_0010f098;
  uVar3 = *(undefined8 *)(in_RSI + 0x18);
  this = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(in_RSI + 0x20);
  if (this == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    puVar9[5] = uVar3;
    puVar9[4] = 0;
    puVar9[2] = &PTR_ToLeafNode_0010ef90;
    puVar9[3] = 0;
    lVar4 = puVar9[4];
    puVar9[7] = dVar21;
    puVar9[8] = dVar22;
    puVar9[6] = 0;
    puVar9[9] = dVar15;
    puVar9[10] = dVar23;
    puVar9[0xb] = dVar24;
    puVar9[0xc] = dVar19;
    puVar9[0xd] = dVar20;
    puVar9[0xe] = dVar17;
    puVar9[0xf] = dVar18;
    puVar9[0x10] = dVar13;
    puVar9[0x11] = dVar14;
    puVar9[0x12] = dVar16;
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
      bVar12 = __libc_single_threaded != '\0';
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[2] = &PTR_ToLeafNode_0010ef90;
      puVar9[5] = uVar3;
      puVar9[6] = this;
      if (bVar12) {
        iVar10 = *(int *)(this + 8);
        goto LAB_00103be8;
      }
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      iVar10 = *(int *)(this + 8);
      puVar9[3] = 0;
      puVar9[4] = 0;
      iVar10 = iVar10 + 1;
      puVar9[5] = uVar3;
      puVar9[2] = &PTR_ToLeafNode_0010ef90;
      puVar9[6] = this;
LAB_00103be8:
      *(int *)(this + 8) = iVar10 + 1;
    }
    p_Var1 = this + 8;
    puVar9[7] = dVar21;
    puVar9[8] = dVar22;
    puVar9[9] = dVar15;
    puVar9[10] = dVar23;
    puVar9[0xb] = dVar24;
    puVar9[0xc] = dVar19;
    puVar9[0xd] = dVar20;
    puVar9[0xe] = dVar17;
    puVar9[0xf] = dVar18;
    puVar9[0x10] = dVar13;
    puVar9[0x11] = dVar14;
    puVar9[0x12] = dVar16;
    if (*(long *)(this + 8) == 0x100000001) {
      *(undefined8 *)(this + 8) = 0;
      (**(code **)(*(long *)this + 0x10))(this);
      (**(code **)(*(long *)this + 0x18))(this);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar10 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar10 = *(int *)(this + 8);
        *(int *)(this + 8) = iVar10 + -1;
      }
      if (iVar10 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
      }
    }
    lVar4 = puVar9[4];
  }
  if ((lVar4 != 0) && (*(int *)(lVar4 + 8) != 0)) goto LAB_00103c9b;
  bVar12 = __libc_single_threaded == '\0';
  puVar9[3] = puVar9 + 2;
  if (bVar12) {
    LOCK();
    *(int *)((long)puVar9 + 0xc) = *(int *)((long)puVar9 + 0xc) + 1;
    UNLOCK();
    plVar11 = (long *)puVar9[4];
    if (plVar11 != (long *)0x0) {
      if (__libc_single_threaded != '\0') goto LAB_00103d55;
      LOCK();
      piVar2 = (int *)((long)plVar11 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      goto LAB_00103d5e;
    }
  }
  else {
    plVar11 = (long *)puVar9[4];
    *(int *)((long)puVar9 + 0xc) = *(int *)((long)puVar9 + 0xc) + 1;
    if (plVar11 != (long *)0x0) {
LAB_00103d55:
      iVar10 = *(int *)((long)plVar11 + 0xc);
      *(int *)((long)plVar11 + 0xc) = iVar10 + -1;
LAB_00103d5e:
      if (iVar10 == 1) {
        (**(code **)(*plVar11 + 0x18))();
      }
    }
  }
  puVar9[4] = puVar9;
LAB_00103c9b:
  *(undefined8 **)param_1 = puVar9 + 2;
  *(undefined8 **)(param_1 + 8) = puVar9;
  return param_1;
}



/* manifold::CsgOpNode::Transform(linalg::mat<double, 3, 4> const&) const */

mat * manifold::CsgOpNode::Transform(mat *param_1)

{
  CsgOpNode *this;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 *puVar26;
  int iVar27;
  double *in_RDX;
  long in_RSI;
  long *plVar28;
  bool bVar29;
  
  puVar26 = (undefined8 *)operator_new(0xc0);
  puVar26[1] = _LC0;
  *puVar26 = &PTR___Sp_counted_ptr_inplace_0010eff0;
  this = (CsgOpNode *)(puVar26 + 2);
  CsgOpNode(this);
  if ((puVar26[4] != 0) && (*(int *)(puVar26[4] + 8) != 0)) goto LAB_00103ea9;
  bVar29 = __libc_single_threaded == '\0';
  puVar26[3] = this;
  if (bVar29) {
    LOCK();
    *(int *)((long)puVar26 + 0xc) = *(int *)((long)puVar26 + 0xc) + 1;
    UNLOCK();
    plVar28 = (long *)puVar26[4];
    if (plVar28 != (long *)0x0) {
      if (__libc_single_threaded != '\0') goto LAB_0010427e;
      LOCK();
      piVar2 = (int *)((long)plVar28 + 0xc);
      iVar27 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      goto LAB_00104287;
    }
  }
  else {
    plVar28 = (long *)puVar26[4];
    *(int *)((long)puVar26 + 0xc) = *(int *)((long)puVar26 + 0xc) + 1;
    if (plVar28 != (long *)0x0) {
LAB_0010427e:
      iVar27 = *(int *)((long)plVar28 + 0xc);
      *(int *)((long)plVar28 + 0xc) = iVar27 + -1;
LAB_00104287:
      if (iVar27 == 1) {
        (**(code **)(*plVar28 + 0x18))();
      }
    }
  }
  puVar26[4] = puVar26;
LAB_00103ea9:
  p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(in_RSI + 0x20);
  p_Var7 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar26[6];
  puVar26[5] = *(undefined8 *)(in_RSI + 0x18);
  if (p_Var6 != p_Var7) {
    if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
        UNLOCK();
        p_Var7 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar26[6];
      }
      else {
        *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
      }
    }
    if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var7 + 8;
      if (*(long *)(p_Var7 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var7 + 8) = 0;
        (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
        (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar27 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar27 = *(int *)(p_Var7 + 8);
          *(int *)(p_Var7 + 8) = iVar27 + -1;
        }
        if (iVar27 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
        }
      }
    }
    puVar26[6] = p_Var6;
  }
  p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(in_RSI + 0x30);
  p_Var7 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar26[8];
  puVar26[7] = *(undefined8 *)(in_RSI + 0x28);
  if (p_Var6 != p_Var7) {
    if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
        UNLOCK();
        p_Var7 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar26[8];
      }
      else {
        *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
      }
    }
    if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var7 + 8;
      if (*(long *)(p_Var7 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var7 + 8) = 0;
        (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
        (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar27 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar27 = *(int *)(p_Var7 + 8);
          *(int *)(p_Var7 + 8) = iVar27 + -1;
        }
        if (iVar27 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
        }
      }
    }
    puVar26[8] = p_Var6;
  }
  dVar4 = *(double *)(in_RSI + 0x40);
  dVar5 = *(double *)(in_RSI + 0x48);
  dVar8 = *in_RDX;
  dVar9 = in_RDX[1];
  dVar10 = in_RDX[3];
  dVar11 = in_RDX[4];
  dVar12 = in_RDX[6];
  dVar13 = in_RDX[7];
  dVar14 = in_RDX[9];
  dVar15 = in_RDX[10];
  dVar16 = in_RDX[4];
  dVar17 = in_RDX[5];
  dVar18 = in_RDX[2];
  dVar19 = in_RDX[3];
  dVar20 = in_RDX[8];
  dVar21 = in_RDX[9];
  dVar22 = in_RDX[10];
  dVar23 = in_RDX[0xb];
  dVar24 = *(double *)(in_RSI + 0x70);
  dVar25 = *(double *)(in_RSI + 0x50);
  dVar3 = *(double *)(in_RSI + 0x48);
  puVar26[10] = dVar4 * dVar8 + dVar5 * dVar10 + dVar25 * dVar12 + dVar14 * 0.0;
  puVar26[0xb] = dVar4 * dVar9 + dVar5 * dVar11 + dVar25 * dVar13 + dVar15 * 0.0;
  dVar4 = *(double *)(in_RSI + 0x60);
  puVar26[0xc] = *(double *)(in_RSI + 0x40) * dVar18 + dVar3 * dVar17 +
                 *(double *)(in_RSI + 0x50) * dVar20 + dVar23 * 0.0;
  dVar3 = *(double *)(in_RSI + 0x58);
  dVar5 = *(double *)(in_RSI + 0x68);
  puVar26[0xd] = dVar19 * dVar4 + dVar3 * dVar8 + dVar5 * dVar12 + dVar21 * 0.0;
  puVar26[0xe] = dVar16 * dVar4 + dVar3 * dVar9 + dVar5 * dVar13 + dVar22 * 0.0;
  dVar3 = *(double *)(in_RSI + 0x78);
  dVar4 = *(double *)(in_RSI + 0x80);
  dVar5 = *(double *)(in_RSI + 0x88);
  puVar26[0xf] = *(double *)(in_RSI + 0x68) * dVar20 +
                 *(double *)(in_RSI + 0x58) * dVar18 + dVar17 * *(double *)(in_RSI + 0x60) +
                 dVar23 * 0.0;
  puVar26[0x10] = dVar4 * dVar12 + dVar24 * dVar8 + dVar19 * dVar3 + dVar21 * 0.0;
  dVar3 = *(double *)(in_RSI + 0x70);
  dVar19 = *(double *)(in_RSI + 0x78);
  puVar26[0x11] = dVar19 * dVar16 + dVar3 * dVar9 + dVar13 * dVar4 + dVar22 * 0.0;
  puVar26[0x12] = dVar19 * dVar17 + dVar3 * dVar18 + dVar20 * dVar4 + dVar23 * 0.0;
  dVar4 = *(double *)(in_RSI + 0x90);
  *(undefined4 *)(puVar26 + 9) = *(undefined4 *)(in_RSI + 0x38);
  dVar16 = *(double *)(in_RSI + 0x98);
  dVar3 = *(double *)(in_RSI + 0x90);
  puVar26[0x13] = dVar5 * dVar8 + dVar10 * dVar4 + dVar12 * dVar16 + dVar14;
  puVar26[0x14] = dVar5 * dVar9 + dVar11 * dVar4 + dVar13 * dVar16 + dVar15;
  dVar4 = *(double *)(in_RSI + 0x88);
  dVar5 = *(double *)(in_RSI + 0x98);
  *(CsgOpNode **)param_1 = this;
  *(undefined8 **)(param_1 + 8) = puVar26;
  puVar26[0x15] = dVar5 * dVar20 + dVar3 * dVar17 + dVar4 * dVar18 + dVar23;
  return param_1;
}



/* manifold::CsgLeafNode::GetImpl() const */

void manifold::CsgLeafNode::GetImpl(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  double dVar2;
  long lVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  double dVar9;
  double dVar10;
  undefined1 local_1b9;
  undefined1 local_1b8 [16];
  mat local_1a8 [72];
  void *local_160;
  void *local_148;
  void *local_130;
  void *local_118;
  void *local_100;
  void *local_e0;
  void *local_b8;
  void *local_98;
  void *local_80;
  void *local_68;
  void *local_50;
  void *local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(double *)(in_RSI + 0x28) == _LC10) {
    dVar10 = *(double *)(in_RSI + 0x30);
    if ((dVar10 == 0.0) && (dVar10 = *(double *)(in_RSI + 0x38), dVar10 == 0.0)) {
      if (*(double *)(in_RSI + 0x40) != 0.0) goto LAB_001044e4;
      dVar2 = *(double *)(in_RSI + 0x48);
      dVar9 = *(double *)(in_RSI + 0x28);
      dVar10 = dVar2;
      if (dVar2 == _LC10) {
        dVar10 = *(double *)(in_RSI + 0x50);
        if (dVar10 == 0.0) {
          if (*(double *)(in_RSI + 0x58) != 0.0) goto LAB_001044e4;
          dVar10 = *(double *)(in_RSI + 0x60);
          if (dVar10 == 0.0) {
            dVar10 = *(double *)(in_RSI + 0x68);
            dVar9 = dVar2;
            if (dVar10 == _LC10) {
              if (*(double *)(in_RSI + 0x70) == 0.0) {
                dVar10 = *(double *)(in_RSI + 0x78);
                if (dVar10 == 0.0) {
                  dVar10 = *(double *)(in_RSI + 0x80);
                }
                goto LAB_00104730;
              }
              goto LAB_001044e4;
            }
          }
          else {
            dVar9 = 0.0;
          }
        }
        else {
          dVar9 = 0.0;
        }
      }
    }
    else {
LAB_00104730:
      dVar9 = 0.0;
    }
    if (dVar9 == dVar10) {
      lVar3 = *(long *)(in_RSI + 0x20);
      *in_RDI = *(undefined8 *)(in_RSI + 0x18);
      in_RDI[1] = lVar3;
      goto joined_r0x001046c6;
    }
  }
LAB_001044e4:
  manifold::Manifold::Impl::Transform(local_1a8);
  std::shared_ptr<manifold::Manifold::Impl_const>::
  shared_ptr<std::allocator<void>,manifold::Manifold::Impl>
            ((shared_ptr<manifold::Manifold::Impl_const> *)local_1b8,&local_1b9,local_1a8);
  uVar6 = local_1b8._0_8_;
  uVar7 = local_1b8._8_8_;
  p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(in_RSI + 0x20);
  local_1b8 = (undefined1  [16])0x0;
  *(undefined8 *)(in_RSI + 0x18) = uVar6;
  *(undefined8 *)(in_RSI + 0x20) = uVar7;
  if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = p_Var4 + 8;
    if (*(long *)(p_Var4 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var4 + 8) = 0;
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar8 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar8 = *(int *)(p_Var4 + 8);
        *(int *)(p_Var4 + 8) = iVar8 + -1;
      }
      if (iVar8 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
      }
    }
    uVar6 = local_1b8._8_8_;
    if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1b8._8_8_ !=
        (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var4 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_1b8._8_8_ + 8);
      if (*(long *)(local_1b8._8_8_ + 8) == 0x100000001) {
        *(undefined8 *)(local_1b8._8_8_ + 8) = 0;
        (**(code **)(*(long *)local_1b8._8_8_ + 0x10))(local_1b8._8_8_);
        (**(code **)(*(long *)uVar6 + 0x18))(uVar6);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var4;
          *(int *)p_Var4 = *(int *)p_Var4 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(local_1b8._8_8_ + 8);
          *(int *)(local_1b8._8_8_ + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                    ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_1b8._8_8_);
        }
      }
    }
  }
  if (local_38 != (void *)0x0) {
    free(local_38);
  }
  if (local_50 != (void *)0x0) {
    free(local_50);
  }
  if (local_68 != (void *)0x0) {
    free(local_68);
  }
  if (local_80 != (void *)0x0) {
    free(local_80);
  }
  if (local_98 != (void *)0x0) {
    free(local_98);
  }
  while (local_b8 != (void *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)((long)local_b8 + 0x18));
    pvVar5 = *(void **)((long)local_b8 + 0x10);
    operator_delete(local_b8,0x98);
    local_b8 = pvVar5;
  }
  if (local_e0 != (void *)0x0) {
    free(local_e0);
  }
  if (local_100 != (void *)0x0) {
    free(local_100);
  }
  if (local_118 != (void *)0x0) {
    free(local_118);
  }
  if (local_130 != (void *)0x0) {
    free(local_130);
  }
  if (local_148 != (void *)0x0) {
    free(local_148);
  }
  if (local_160 != (void *)0x0) {
    free(local_160);
  }
  dVar10 = _LC10;
  uVar6 = *(undefined8 *)(in_RSI + 0x20);
  *(undefined1 (*) [16])(in_RSI + 0x38) = (undefined1  [16])0x0;
  *(double *)(in_RSI + 0x28) = dVar10;
  *(undefined8 *)(in_RSI + 0x30) = 0;
  *(double *)(in_RSI + 0x48) = dVar10;
  *(undefined8 *)(in_RSI + 0x50) = 0;
  *(undefined1 (*) [16])(in_RSI + 0x58) = (undefined1  [16])0x0;
  *(double *)(in_RSI + 0x68) = dVar10;
  *(undefined8 *)(in_RSI + 0x70) = 0;
  *(undefined1 (*) [16])(in_RSI + 0x78) = (undefined1  [16])0x0;
  *in_RDI = *(undefined8 *)(in_RSI + 0x18);
  in_RDI[1] = uVar6;
  lVar3 = in_RDI[1];
joined_r0x001046c6:
  if (lVar3 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__push_heap<__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,
   std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> > > >, long,
   std::shared_ptr<manifold::CsgLeafNode>, __gnu_cxx::__ops::_Iter_comp_val<(anonymous
   namespace)::MeshCompare> >(__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,
   std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> > > >, long, long,
   std::shared_ptr<manifold::CsgLeafNode>, __gnu_cxx::__ops::_Iter_comp_val<(anonymous
   namespace)::MeshCompare>&) [clone .isra.0] */

void std::
     __push_heap<__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>>,long,std::shared_ptr<manifold::CsgLeafNode>,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::MeshCompare>>
               (long param_1,long param_2,long param_3,undefined1 (*param_4) [16])

{
  long lVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  long in_FS_OFFSET;
  long local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  long local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_50;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_2 + -1;
  if (param_3 < param_2) {
    do {
      lVar11 = lVar1 / 2;
      pauVar4 = (undefined1 (*) [16])(param_1 + lVar11 * 0x10);
      manifold::CsgLeafNode::GetImpl();
      uVar6 = *(ulong *)(local_68 + 0x50);
      manifold::CsgLeafNode::GetImpl();
      uVar7 = *(ulong *)(local_58 + 0x50);
      if (local_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var3 = local_50 + 8;
        if (*(long *)(local_50 + 8) == 0x100000001) {
          *(undefined8 *)(local_50 + 8) = 0;
          (**(code **)(*(long *)local_50 + 0x10))();
          (**(code **)(*(long *)local_50 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var3;
            *(int *)p_Var3 = *(int *)p_Var3 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(local_50 + 8);
            *(int *)(local_50 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_50);
          }
        }
      }
      if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var3 = local_60 + 8;
        if (*(long *)(local_60 + 8) == 0x100000001) {
          *(undefined8 *)(local_60 + 8) = 0;
          (**(code **)(*(long *)local_60 + 0x10))();
          (**(code **)(*(long *)local_60 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var3;
            *(int *)p_Var3 = *(int *)p_Var3 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(local_60 + 8);
            *(int *)(local_60 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
          }
        }
      }
      pauVar10 = (undefined1 (*) [16])(param_2 * 0x10 + param_1);
      if (uVar7 <= uVar6) break;
      uVar8 = *(undefined8 *)(*pauVar4 + 8);
      *pauVar4 = (undefined1  [16])0x0;
      p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(*pauVar10 + 8);
      *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar4;
      *(undefined8 *)(*pauVar10 + 8) = uVar8;
      if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var3 + 8;
        if (*(long *)(p_Var3 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var3 + 8) = 0;
          (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
          (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(p_Var3 + 8);
            *(int *)(p_Var3 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
          }
        }
      }
      lVar1 = lVar11 + -1;
      pauVar10 = pauVar4;
      param_2 = lVar11;
    } while (param_3 < lVar11);
  }
  else {
    pauVar10 = (undefined1 (*) [16])(param_2 * 0x10 + param_1);
  }
  uVar8 = *(undefined8 *)(*param_4 + 8);
  *param_4 = (undefined1  [16])0x0;
  p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(*pauVar10 + 8);
  *(undefined8 *)*pauVar10 = *(undefined8 *)*param_4;
  *(undefined8 *)(*pauVar10 + 8) = uVar8;
  if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var2 = p_Var3 + 8;
    if (*(long *)(p_Var3 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var3 + 8) = 0;
      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
      if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
        return;
      }
      goto LAB_00104bd3;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar9 = *(int *)p_Var2;
      *(int *)p_Var2 = *(int *)p_Var2 + -1;
      UNLOCK();
    }
    else {
      iVar9 = *(int *)(p_Var3 + 8);
      *(int *)(p_Var3 + 8) = iVar9 + -1;
    }
    if (iVar9 == 1) {
      if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
        _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
        return;
      }
      goto LAB_00104bd3;
    }
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104bd3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,
   std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> > > >, long,
   std::shared_ptr<manifold::CsgLeafNode>, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MeshCompare> >(__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,
   std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> > > >, long, long,
   std::shared_ptr<manifold::CsgLeafNode>, __gnu_cxx::__ops::_Iter_comp_iter<(anonymous
   namespace)::MeshCompare>) */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>>,long,std::shared_ptr<manifold::CsgLeafNode>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MeshCompare>>
               (long param_1,long param_2,ulong param_3,undefined1 (*param_4) [16])

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  bool bVar14;
  long local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  long local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = (long)(param_3 - 1) / 2;
  lVar12 = param_2;
  lVar13 = param_2;
  if (param_2 < lVar11) {
LAB_00104d37:
    do {
      lVar6 = (lVar13 + 1) * 2;
      lVar12 = lVar6 + -1;
      manifold::CsgLeafNode::GetImpl();
      uVar3 = *(ulong *)(local_68 + 0x50);
      manifold::CsgLeafNode::GetImpl();
      p_Var1 = p_Stack_50;
      uVar4 = *(ulong *)(local_58 + 0x50);
      if (p_Stack_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Stack_50 + 8;
        if (*(long *)(p_Stack_50 + 8) == 0x100000001) {
          *(undefined8 *)(p_Stack_50 + 8) = 0;
          (**(code **)(*(long *)p_Stack_50 + 0x10))();
          (**(code **)(*(long *)p_Var1 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar8 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar8 = *(int *)(p_Stack_50 + 8);
            *(int *)(p_Stack_50 + 8) = iVar8 + -1;
          }
          if (iVar8 == 1) {
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_50);
          }
        }
      }
      if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = local_60 + 8;
        if (*(long *)(local_60 + 8) == 0x100000001) {
          *(undefined8 *)(local_60 + 8) = 0;
          (**(code **)(*(long *)local_60 + 0x10))();
          (**(code **)(*(long *)local_60 + 0x18))();
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar8 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar8 = *(int *)(local_60 + 8);
            *(int *)(local_60 + 8) = iVar8 + -1;
          }
          if (iVar8 == 1) {
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
          }
        }
      }
      bVar14 = uVar4 <= uVar3;
      lVar5 = lVar12 * 0x10;
      if (bVar14) {
        lVar5 = (lVar13 + 1) * 0x20;
      }
      pauVar10 = (undefined1 (*) [16])(lVar5 + param_1);
      if (bVar14) {
        lVar12 = lVar6;
      }
      puVar9 = (undefined8 *)(lVar13 * 0x10 + param_1);
      uVar7 = *(undefined8 *)(*pauVar10 + 8);
      *pauVar10 = (undefined1  [16])0x0;
      p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar9[1];
      *puVar9 = *(undefined8 *)*pauVar10;
      puVar9[1] = uVar7;
      lVar13 = lVar12;
      if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var1 + 8;
        if (*(long *)(p_Var1 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var1 + 8) = 0;
          (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
          (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar8 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar8 = *(int *)(p_Var1 + 8);
            *(int *)(p_Var1 + 8) = iVar8 + -1;
          }
          if (iVar8 == 1) {
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var1);
            if (lVar11 <= lVar12) break;
            goto LAB_00104d37;
          }
        }
      }
    } while (lVar12 < lVar11);
  }
  lVar13 = lVar12;
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar12)) {
    lVar13 = lVar12 * 2 + 1;
    puVar9 = (undefined8 *)(lVar12 * 0x10 + param_1);
    pauVar10 = (undefined1 (*) [16])(lVar13 * 0x10 + param_1);
    uVar7 = *(undefined8 *)(*pauVar10 + 8);
    *pauVar10 = (undefined1  [16])0x0;
    p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar9[1];
    *puVar9 = *(undefined8 *)*pauVar10;
    puVar9[1] = uVar7;
    if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var2 = p_Var1 + 8;
      if (*(long *)(p_Var1 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var1 + 8) = 0;
        (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
        (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var2;
          *(int *)p_Var2 = *(int *)p_Var2 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(p_Var1 + 8);
          *(int *)(p_Var1 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var1);
        }
      }
    }
  }
  local_58 = *(long *)*param_4;
  p_Stack_50 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(*param_4 + 8);
  *param_4 = (undefined1  [16])0x0;
  __push_heap<__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>>,long,std::shared_ptr<manifold::CsgLeafNode>,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::MeshCompare>>
            (param_1,lVar13,param_2,&local_58);
  p_Var1 = p_Stack_50;
  if (p_Stack_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var2 = p_Stack_50 + 8;
    if (*(long *)(p_Stack_50 + 8) == 0x100000001) {
      *(undefined8 *)(p_Stack_50 + 8) = 0;
      (**(code **)(*(long *)p_Stack_50 + 0x10))(p_Stack_50);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
        return;
      }
      goto LAB_001050f1;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar8 = *(int *)p_Var2;
      *(int *)p_Var2 = *(int *)p_Var2 + -1;
      UNLOCK();
    }
    else {
      iVar8 = *(int *)(p_Stack_50 + 8);
      *(int *)(p_Stack_50 + 8) = iVar8 + -1;
    }
    if (iVar8 == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_50);
        return;
      }
      goto LAB_001050f1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001050f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::CsgOpNode::~CsgOpNode() */

void __thiscall manifold::CsgOpNode::~CsgOpNode(CsgOpNode *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  int *piVar5;
  pthread_mutex_t *__mutex;
  long *plVar6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var7;
  pthread_mutex_t *__mutex_00;
  long *plVar8;
  int iVar9;
  long lVar10;
  long in_FS_OFFSET;
  long *local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_60;
  undefined1 local_58 [16];
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_ToLeafNode_0010efc0;
  if ((*(long *)(this + 0x20) != 0) && (*(int *)(*(long *)(this + 0x20) + 8) == 1)) {
    __mutex = *(pthread_mutex_t **)(this + 0x28);
    plVar6 = *(long **)(this + 0x18);
    iVar9 = pthread_mutex_lock(__mutex);
    if (iVar9 != 0) {
LAB_0010583d:
      std::__throw_system_error(iVar9);
      goto LAB_00105844;
    }
    local_48 = (undefined8 *)0x0;
    local_58 = (undefined1  [16])0x0;
    while (lVar10 = plVar6[1], lVar10 != *plVar6) {
      plVar8 = *(long **)(lVar10 + -0x10);
      p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar10 + -8);
      p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar10 + -8);
      plVar6[1] = lVar10 + -0x10;
      iVar9 = (**(code **)(*plVar8 + 0x10))();
      if (iVar9 != 3) {
        if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
          }
        }
        local_68 = plVar8;
        p_Stack_60 = p_Var1;
        if ((undefined8 *)local_58._8_8_ == local_48) {
          std::
          vector<std::shared_ptr<manifold::CsgOpNode>,std::allocator<std::shared_ptr<manifold::CsgOpNode>>>
          ::_M_realloc_insert<std::shared_ptr<manifold::CsgOpNode>>
                    ((vector<std::shared_ptr<manifold::CsgOpNode>,std::allocator<std::shared_ptr<manifold::CsgOpNode>>>
                      *)local_58,local_58._8_8_,&local_68);
          p_Var3 = p_Stack_60;
          if (p_Stack_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var2 = p_Stack_60 + 8;
            if (*(long *)(p_Stack_60 + 8) == 0x100000001) {
              *(undefined8 *)(p_Stack_60 + 8) = 0;
              (**(code **)(*(long *)p_Stack_60 + 0x10))(p_Stack_60);
              (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var2;
                *(int *)p_Var2 = *(int *)p_Var2 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(p_Stack_60 + 8);
                *(int *)(p_Stack_60 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (p_Stack_60);
              }
            }
          }
        }
        else {
          *(long **)local_58._8_8_ = plVar8;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(local_58._8_8_ + 8) = p_Var1;
          local_58._8_8_ = (undefined8 *)(local_58._8_8_ + 0x10);
        }
      }
      if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = p_Var7 + 8;
        if (*(long *)(p_Var7 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var7 + 8) = 0;
          (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
          (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(p_Var7 + 8);
            *(int *)(p_Var7 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
          }
        }
      }
    }
    while( true ) {
      if (local_58._8_8_ == local_58._0_8_) break;
      plVar6 = (long *)(local_58._8_8_ + -0x10);
      p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(local_58._8_8_ + -8);
      local_58._8_8_ = local_58._8_8_ + -0x10;
      if ((*(long *)(this + 0x20) != 0) && (*(int *)(*(long *)(this + 0x20) + 8) == 1)) {
        __mutex_00 = *(pthread_mutex_t **)(*plVar6 + 0x28);
        plVar6 = *(long **)(*plVar6 + 0x18);
        iVar9 = pthread_mutex_lock(__mutex_00);
        if (iVar9 != 0) goto LAB_0010583d;
LAB_00105480:
        lVar10 = plVar6[1];
        if (lVar10 != *plVar6) {
          while( true ) {
            plVar8 = *(long **)(lVar10 + -0x10);
            p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar10 + -8);
            p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar10 + -8);
            plVar6[1] = lVar10 + -0x10;
            iVar9 = (**(code **)(*plVar8 + 0x10))();
            if (iVar9 != 3) {
              if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
                  UNLOCK();
                }
                else {
                  *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
                }
              }
              local_68 = plVar8;
              p_Stack_60 = p_Var3;
              if ((undefined8 *)local_58._8_8_ == local_48) {
                std::
                vector<std::shared_ptr<manifold::CsgOpNode>,std::allocator<std::shared_ptr<manifold::CsgOpNode>>>
                ::_M_realloc_insert<std::shared_ptr<manifold::CsgOpNode>>
                          ((vector<std::shared_ptr<manifold::CsgOpNode>,std::allocator<std::shared_ptr<manifold::CsgOpNode>>>
                            *)local_58,local_58._8_8_,&local_68);
                p_Var2 = p_Stack_60;
                if (p_Stack_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                  p_Var4 = p_Stack_60 + 8;
                  if (*(long *)(p_Stack_60 + 8) == 0x100000001) {
                    *(undefined8 *)(p_Stack_60 + 8) = 0;
                    (**(code **)(*(long *)p_Stack_60 + 0x10))();
                    (**(code **)(*(long *)p_Var2 + 0x18))();
                  }
                  else {
                    if (__libc_single_threaded == '\0') {
                      LOCK();
                      iVar9 = *(int *)p_Var4;
                      *(int *)p_Var4 = *(int *)p_Var4 + -1;
                      UNLOCK();
                    }
                    else {
                      iVar9 = *(int *)(p_Stack_60 + 8);
                      *(int *)(p_Stack_60 + 8) = iVar9 + -1;
                    }
                    if (iVar9 == 1) {
                      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                                (p_Stack_60);
                    }
                  }
                }
              }
              else {
                *(long **)local_58._8_8_ = plVar8;
                *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(local_58._8_8_ + 8) = p_Var3;
                local_58._8_8_ = (undefined8 *)(local_58._8_8_ + 0x10);
              }
            }
            if (p_Var3 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00105480;
            p_Var3 = p_Var1 + 8;
            if (*(long *)(p_Var1 + 8) == 0x100000001) break;
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var3;
              *(int *)p_Var3 = *(int *)p_Var3 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(p_Var1 + 8);
              *(int *)(p_Var1 + 8) = iVar9 + -1;
            }
            if (iVar9 != 1) goto LAB_00105480;
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var1);
            lVar10 = plVar6[1];
            if (lVar10 == *plVar6) goto LAB_00105558;
          }
          *(undefined8 *)(p_Var1 + 8) = 0;
          (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
          (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
          goto LAB_00105480;
        }
LAB_00105558:
        pthread_mutex_unlock(__mutex_00);
      }
      if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = p_Var7 + 8;
        if (*(long *)(p_Var7 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var7 + 8) = 0;
          (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
          (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(p_Var7 + 8);
            *(int *)(p_Var7 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
          }
        }
      }
    }
    if ((void *)local_58._8_8_ != (void *)0x0) {
      operator_delete((void *)local_58._8_8_,(long)local_48 - local_58._8_8_);
    }
    pthread_mutex_unlock(__mutex);
  }
  p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0xa8);
  if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = p_Var7 + 8;
    if (*(long *)(p_Var7 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var7 + 8) = 0;
      (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
      (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar9 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar9 = *(int *)(p_Var7 + 8);
        *(int *)(p_Var7 + 8) = iVar9 + -1;
      }
      if (iVar9 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
      }
    }
  }
  p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x30);
  if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = p_Var7 + 8;
    if (*(long *)(p_Var7 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var7 + 8) = 0;
      (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
      (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar9 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar9 = *(int *)(p_Var7 + 8);
        *(int *)(p_Var7 + 8) = iVar9 + -1;
      }
      if (iVar9 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
      }
    }
  }
  p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x20);
  if (p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = p_Var7 + 8;
    if (*(long *)(p_Var7 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var7 + 8) = 0;
      (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
      (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar9 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar9 = *(int *)(p_Var7 + 8);
        *(int *)(p_Var7 + 8) = iVar9 + -1;
      }
      if (iVar9 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
      }
    }
  }
  plVar6 = *(long **)(this + 0x10);
  *(undefined ***)this = &PTR___cxa_pure_virtual_0010ef60;
  if (plVar6 != (long *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar5 = (int *)((long)plVar6 + 0xc);
      iVar9 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
    }
    else {
      iVar9 = *(int *)((long)plVar6 + 0xc);
      *(int *)((long)plVar6 + 0xc) = iVar9 + -1;
    }
    if (iVar9 == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))();
        return;
      }
      goto LAB_00105844;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105844:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001058d1) */
/* manifold::CsgOpNode::Boolean(std::shared_ptr<manifold::CsgNode> const&, manifold::OpType) */

undefined8 *
manifold::CsgOpNode::Boolean
          (undefined8 *param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  CsgOpNode *pCVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int *piVar3;
  int iVar4;
  long lVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long *plVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_50;
  undefined1 local_48 [16];
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 0x10);
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined8 *)0x0;
  if (local_50 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
manifold_CsgOpNode_Boolean:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar8 = *(int *)(local_50 + 8);
  do {
    if (iVar8 == 0) goto manifold_CsgOpNode_Boolean;
    LOCK();
    iVar4 = *(int *)(local_50 + 8);
    bVar12 = iVar8 == iVar4;
    if (bVar12) {
      *(int *)(local_50 + 8) = iVar8 + 1;
      iVar4 = iVar8;
    }
    iVar8 = iVar4;
    UNLOCK();
  } while (!bVar12);
  local_58 = *(undefined8 *)(param_2 + 8);
  std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
  ::_M_realloc_insert<std::shared_ptr<manifold::CsgNode>>
            ((vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
              *)local_48,0,&local_58);
  p_Var6 = local_50;
  if (local_50 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00105aaa:
    if (local_38 == (undefined8 *)local_48._8_8_) goto LAB_00105abd;
LAB_001058f1:
    uVar7 = param_3[1];
    *(undefined8 *)local_48._8_8_ = *param_3;
    *(undefined8 *)(local_48._8_8_ + 8) = uVar7;
    lVar5 = *(long *)(local_48._8_8_ + 8);
    puVar9 = (undefined8 *)local_48._8_8_;
    if (lVar5 != 0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        puVar9 = (undefined8 *)local_48._8_8_;
      }
      else {
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      }
    }
    local_48._8_8_ = puVar9 + 2;
  }
  else {
    p_Var2 = local_50 + 8;
    if (*(long *)(local_50 + 8) != 0x100000001) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar8 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar8 = *(int *)(local_50 + 8);
        *(int *)(local_50 + 8) = iVar8 + -1;
      }
      if (iVar8 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_50);
      }
      goto LAB_00105aaa;
    }
    *(undefined8 *)(local_50 + 8) = 0;
    (**(code **)(*(long *)local_50 + 0x10))(local_50);
    (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
    if (local_38 != (undefined8 *)local_48._8_8_) goto LAB_001058f1;
LAB_00105abd:
    std::
    vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>::
    _M_realloc_insert<std::shared_ptr<manifold::CsgNode>const&>
              ((vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
                *)local_48,local_38,param_3);
  }
  puVar9 = (undefined8 *)operator_new(0xc0);
  pCVar1 = (CsgOpNode *)(puVar9 + 2);
  puVar9[1] = _LC0;
  *puVar9 = &PTR___Sp_counted_ptr_inplace_0010eff0;
  CsgOpNode(pCVar1,local_48,param_4);
  if ((puVar9[4] != 0) && (*(int *)(puVar9[4] + 8) != 0)) goto LAB_00105966;
  bVar12 = __libc_single_threaded == '\0';
  puVar9[3] = pCVar1;
  if (bVar12) {
    LOCK();
    *(int *)((long)puVar9 + 0xc) = *(int *)((long)puVar9 + 0xc) + 1;
    UNLOCK();
    plVar11 = (long *)puVar9[4];
    if (plVar11 != (long *)0x0) {
      if (__libc_single_threaded != '\0') goto LAB_00105b1a;
      LOCK();
      piVar3 = (int *)((long)plVar11 + 0xc);
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      goto LAB_00105b23;
    }
  }
  else {
    plVar11 = (long *)puVar9[4];
    *(int *)((long)puVar9 + 0xc) = *(int *)((long)puVar9 + 0xc) + 1;
    if (plVar11 != (long *)0x0) {
LAB_00105b1a:
      iVar8 = *(int *)((long)plVar11 + 0xc);
      *(int *)((long)plVar11 + 0xc) = iVar8 + -1;
LAB_00105b23:
      if (iVar8 == 1) {
        (**(code **)(*plVar11 + 0x18))();
      }
    }
  }
  puVar9[4] = puVar9;
LAB_00105966:
  param_1[1] = puVar9;
  uVar7 = local_48._8_8_;
  *param_1 = pCVar1;
  pvVar10 = (void *)local_48._0_8_;
  if (local_48._8_8_ != local_48._0_8_) {
LAB_001059a7:
    do {
      p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar10 + 8);
      if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var6 + 8;
        if (*(long *)(p_Var6 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var6 + 8) = 0;
          (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
          (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar8 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar8 = *(int *)(p_Var6 + 8);
            *(int *)(p_Var6 + 8) = iVar8 + -1;
          }
          if (iVar8 == 1) {
            pvVar10 = (void *)((long)pvVar10 + 0x10);
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
            if ((void *)uVar7 == pvVar10) break;
            goto LAB_001059a7;
          }
        }
      }
      pvVar10 = (void *)((long)pvVar10 + 0x10);
    } while ((void *)uVar7 != pvVar10);
  }
  if ((void *)local_48._0_8_ != (void *)0x0) {
    operator_delete((void *)local_48._0_8_,(long)local_38 - local_48._0_8_);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::CsgNode::Boolean(std::shared_ptr<manifold::CsgNode> const&, manifold::OpType) */

undefined8 *
manifold::CsgNode::Boolean(undefined8 *param_1,long param_2,undefined8 *param_3,uint param_4)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  CsgOpNode *pCVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  int *piVar4;
  int iVar5;
  long lVar6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var7;
  undefined8 uVar8;
  int iVar9;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long in_FS_OFFSET;
  bool bVar14;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_88;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_80;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_78;
  undefined8 local_68;
  long lStack_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = (**(code **)(*(long *)*param_3 + 0x10))();
  if ((iVar9 != 3) && ((param_4 & 0xfffffffd) == 0)) {
    p_Var10 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_3[1];
    uVar8 = *param_3;
    if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var10 + 8) = *(int *)(p_Var10 + 8) + 1;
      }
    }
    local_80 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 0x10);
    if (local_80 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0)
    goto manifold_CsgNode_Boolean;
    iVar9 = *(int *)(local_80 + 8);
    do {
      if (iVar9 == 0) goto manifold_CsgNode_Boolean;
      LOCK();
      iVar5 = *(int *)(local_80 + 8);
      bVar14 = iVar9 == iVar5;
      if (bVar14) {
        *(int *)(local_80 + 8) = iVar9 + 1;
        iVar5 = iVar9;
      }
      iVar9 = iVar5;
      UNLOCK();
    } while (!bVar14);
    local_88 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 8);
    CsgOpNode::Boolean(param_1,uVar8,&local_88,param_4);
    p_Var1 = local_80;
    if (local_80 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var7 = local_80 + 8;
      if (*(long *)(local_80 + 8) == 0x100000001) {
        *(undefined8 *)(local_80 + 8) = 0;
        (**(code **)(*(long *)local_80 + 0x10))(local_80);
        (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar9 = *(int *)p_Var7;
          *(int *)p_Var7 = *(int *)p_Var7 + -1;
          UNLOCK();
        }
        else {
          iVar9 = *(int *)(local_80 + 8);
          *(int *)(local_80 + 8) = iVar9 + -1;
        }
        if (iVar9 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_80);
        }
      }
    }
    if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var10 + 8;
      if (*(long *)(p_Var10 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var10 + 8) = 0;
        (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
        (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar9 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar9 = *(int *)(p_Var10 + 8);
          *(int *)(p_Var10 + 8) = iVar9 + -1;
        }
        if (iVar9 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10);
        }
      }
    }
    goto LAB_00105df1;
  }
  lStack_60 = *(long *)(param_2 + 0x10);
  if (lStack_60 == 0) {
manifold_CsgNode_Boolean:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar9 = *(int *)(lStack_60 + 8);
  do {
    if (iVar9 == 0) goto manifold_CsgNode_Boolean;
    LOCK();
    iVar5 = *(int *)(lStack_60 + 8);
    bVar14 = iVar9 == iVar5;
    if (bVar14) {
      *(int *)(lStack_60 + 8) = iVar9 + 1;
      iVar5 = iVar9;
    }
    iVar9 = iVar5;
    UNLOCK();
  } while (!bVar14);
  local_68 = *(undefined8 *)(param_2 + 8);
  local_58 = *param_3;
  lStack_50 = param_3[1];
  if (lStack_50 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lStack_50 + 8) = *(int *)(lStack_50 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lStack_50 + 8) = *(int *)(lStack_50 + 8) + 1;
    }
  }
  local_80 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_88 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x20);
  local_80 = local_88 + 0x20;
  p_Var10 = local_88;
  puVar11 = &local_68;
  do {
    while( true ) {
      puVar12 = puVar11;
      uVar8 = puVar12[1];
      lVar6 = puVar12[1];
      *(undefined8 *)p_Var10 = *puVar12;
      *(undefined8 *)(p_Var10 + 8) = uVar8;
      if (lVar6 != 0) break;
LAB_00105c74:
      p_Var10 = p_Var10 + 0x10;
      puVar11 = puVar12 + 2;
      if (puVar12 + 2 == &local_48) goto LAB_00105cb0;
    }
    if (__libc_single_threaded != '\0') {
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      goto LAB_00105c74;
    }
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    p_Var10 = p_Var10 + 0x10;
    puVar11 = puVar12 + 2;
  } while (puVar12 + 2 != &local_48);
LAB_00105cb0:
  puVar12 = puVar12 + 2;
  local_78 = local_80;
  do {
    while( true ) {
      p_Var10 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar12[-1];
      puVar12 = puVar12 + -2;
      if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) break;
LAB_00105d01:
      if (puVar12 == &local_68) goto LAB_00105d06;
    }
    p_Var1 = p_Var10 + 8;
    if (*(long *)(p_Var10 + 8) != 0x100000001) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar9 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar9 = *(int *)(p_Var10 + 8);
        *(int *)(p_Var10 + 8) = iVar9 + -1;
      }
      if (iVar9 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10);
      }
      goto LAB_00105d01;
    }
    *(undefined8 *)(p_Var10 + 8) = 0;
    (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
    (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
  } while (puVar12 != &local_68);
LAB_00105d06:
  puVar11 = (undefined8 *)operator_new(0xc0);
  pCVar2 = (CsgOpNode *)(puVar11 + 2);
  puVar11[1] = _LC0;
  *puVar11 = &PTR___Sp_counted_ptr_inplace_0010eff0;
  CsgOpNode::CsgOpNode(pCVar2,&local_88,param_4);
  if ((puVar11[4] == 0) || (*(int *)(puVar11[4] + 8) == 0)) {
    bVar14 = __libc_single_threaded == '\0';
    puVar11[3] = pCVar2;
    if (bVar14) {
      LOCK();
      *(int *)((long)puVar11 + 0xc) = *(int *)((long)puVar11 + 0xc) + 1;
      UNLOCK();
      plVar13 = (long *)puVar11[4];
      if (plVar13 != (long *)0x0) {
        if (__libc_single_threaded != '\0') goto LAB_00105fde;
        LOCK();
        piVar4 = (int *)((long)plVar13 + 0xc);
        iVar9 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        goto LAB_00105fe7;
      }
    }
    else {
      plVar13 = (long *)puVar11[4];
      *(int *)((long)puVar11 + 0xc) = *(int *)((long)puVar11 + 0xc) + 1;
      if (plVar13 != (long *)0x0) {
LAB_00105fde:
        iVar9 = *(int *)((long)plVar13 + 0xc);
        *(int *)((long)plVar13 + 0xc) = iVar9 + -1;
LAB_00105fe7:
        if (iVar9 == 1) {
          (**(code **)(*plVar13 + 0x18))();
        }
      }
    }
    puVar11[4] = puVar11;
  }
  p_Var1 = local_80;
  *param_1 = pCVar2;
  param_1[1] = puVar11;
  for (p_Var10 = local_88; p_Var1 != p_Var10; p_Var10 = p_Var10 + 0x10) {
    while (p_Var7 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var10 + 8),
          p_Var7 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var3 = p_Var7 + 8;
      if (*(long *)(p_Var7 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var7 + 8) = 0;
        (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
        (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
        break;
      }
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar9 = *(int *)p_Var3;
        *(int *)p_Var3 = *(int *)p_Var3 + -1;
        UNLOCK();
      }
      else {
        iVar9 = *(int *)(p_Var7 + 8);
        *(int *)(p_Var7 + 8) = iVar9 + -1;
      }
      if (iVar9 != 1) break;
      p_Var10 = p_Var10 + 0x10;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
      if (p_Var1 == p_Var10) goto LAB_00105ddc;
    }
  }
LAB_00105ddc:
  if (local_88 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    operator_delete(local_88,(long)local_78 - (long)local_88);
  }
LAB_00105df1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* manifold::ImplToLeaf(manifold::Manifold::Impl&&) */

manifold * __thiscall manifold::ImplToLeaf(manifold *this,Impl *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 *__src;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 *puVar17;
  void *pvVar18;
  undefined4 *__dest;
  ulong uVar19;
  size_t sVar20;
  long *plVar21;
  bool bVar22;
  
  this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x198);
  uVar15 = _LC0;
  uVar7 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 8);
  puVar17 = (undefined8 *)0x0;
  p_Var1 = this_00 + 8;
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this_00 + 8) = _LC0;
  *(undefined ***)this_00 = &PTR___Sp_counted_ptr_inplace_0010f028;
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  *(undefined1 (*) [16])(this_00 + 0x60) = (undefined1  [16])0x0;
  *(undefined4 *)(this_00 + 0x50) = uVar3;
  lVar5 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x10) = uVar7;
  *(undefined8 *)(this_00 + 0x18) = uVar8;
  *(undefined8 *)(this_00 + 0x20) = uVar9;
  *(undefined8 *)(this_00 + 0x28) = uVar10;
  *(undefined8 *)(this_00 + 0x30) = uVar11;
  *(undefined8 *)(this_00 + 0x38) = uVar12;
  *(undefined8 *)(this_00 + 0x40) = uVar13;
  *(undefined8 *)(this_00 + 0x48) = uVar14;
  if (lVar5 != 0) {
    sVar20 = lVar5 * 0x18;
    puVar17 = (undefined8 *)malloc(sVar20);
    if ((long)sVar20 < 0x19) {
      if (sVar20 == 0x18) {
        uVar7 = puVar4[1];
        *puVar17 = *puVar4;
        puVar17[1] = uVar7;
        puVar17[2] = puVar4[2];
      }
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar4,sVar20);
    }
  }
  lVar6 = *(long *)(param_1 + 0x68);
  *(long *)(this_00 + 0x60) = lVar5;
  *(long *)(this_00 + 0x68) = lVar5;
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  *(undefined1 (*) [16])(this_00 + 0x78) = (undefined1  [16])0x0;
  *(undefined8 **)(this_00 + 0x58) = puVar17;
  puVar17 = (undefined8 *)0x0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  if (lVar6 != 0) {
    sVar20 = lVar6 * 0xc;
    puVar17 = (undefined8 *)malloc(sVar20);
    if ((long)sVar20 < 0xd) {
      if (sVar20 == 0xc) {
        *puVar17 = *puVar4;
        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar4 + 1);
      }
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar4,sVar20);
    }
  }
  lVar5 = *(long *)(param_1 + 0x80);
  *(long *)(this_00 + 0x78) = lVar6;
  *(long *)(this_00 + 0x80) = lVar6;
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  *(undefined1 (*) [16])(this_00 + 0x90) = (undefined1  [16])0x0;
  *(undefined8 **)(this_00 + 0x70) = puVar17;
  puVar17 = (undefined8 *)0x0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  if (lVar5 != 0) {
    sVar20 = lVar5 * 0x18;
    puVar17 = (undefined8 *)malloc(sVar20);
    if ((long)sVar20 < 0x19) {
      if (sVar20 == 0x18) {
        uVar7 = puVar4[1];
        *puVar17 = *puVar4;
        puVar17[1] = uVar7;
        puVar17[2] = puVar4[2];
      }
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar4,sVar20);
    }
  }
  lVar6 = *(long *)(param_1 + 0x98);
  *(long *)(this_00 + 0x90) = lVar5;
  *(long *)(this_00 + 0x98) = lVar5;
  puVar4 = *(undefined8 **)(param_1 + 0x90);
  *(undefined1 (*) [16])(this_00 + 0xa8) = (undefined1  [16])0x0;
  *(undefined8 **)(this_00 + 0x88) = puVar17;
  puVar17 = (undefined8 *)0x0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  if (lVar6 != 0) {
    sVar20 = lVar6 * 0x18;
    puVar17 = (undefined8 *)malloc(sVar20);
    if ((long)sVar20 < 0x19) {
      if (sVar20 == 0x18) {
        uVar7 = puVar4[1];
        *puVar17 = *puVar4;
        puVar17[1] = uVar7;
        puVar17[2] = puVar4[2];
      }
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar4,sVar20);
    }
  }
  lVar5 = *(long *)(param_1 + 0xb0);
  *(long *)(this_00 + 0xa8) = lVar6;
  *(long *)(this_00 + 0xb0) = lVar6;
  puVar4 = *(undefined8 **)(param_1 + 0xa8);
  *(undefined1 (*) [16])(this_00 + 0xc0) = (undefined1  [16])0x0;
  *(undefined8 **)(this_00 + 0xa0) = puVar17;
  puVar17 = (undefined8 *)0x0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  if (lVar5 != 0) {
    sVar20 = lVar5 << 5;
    puVar17 = (undefined8 *)malloc(sVar20);
    if ((long)sVar20 < 0x21) {
      if (sVar20 == 0x20) {
        uVar7 = puVar4[1];
        *puVar17 = *puVar4;
        puVar17[1] = uVar7;
        uVar7 = puVar4[3];
        puVar17[2] = puVar4[2];
        puVar17[3] = uVar7;
      }
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar4,sVar20);
    }
  }
  *(undefined8 **)(this_00 + 0xb8) = puVar17;
  *(long *)(this_00 + 0xc0) = lVar5;
  *(long *)(this_00 + 200) = lVar5;
  Manifold::Impl::MeshRelationD::MeshRelationD
            ((MeshRelationD *)(this_00 + 0xd0),(MeshRelationD *)(param_1 + 0xc0));
  lVar5 = *(long *)(param_1 + 0x148);
  puVar17 = (undefined8 *)0x0;
  *(undefined1 (*) [16])(this_00 + 0x158) = (undefined1  [16])0x0;
  puVar4 = *(undefined8 **)(param_1 + 0x140);
  *(undefined8 *)(this_00 + 0x150) = 0;
  if (lVar5 != 0) {
    sVar20 = lVar5 * 0x30;
    puVar17 = (undefined8 *)malloc(sVar20);
    if ((long)sVar20 < 0x31) {
      if (sVar20 == 0x30) {
        uVar7 = puVar4[1];
        *puVar17 = *puVar4;
        puVar17[1] = uVar7;
        uVar7 = puVar4[3];
        puVar17[2] = puVar4[2];
        puVar17[3] = uVar7;
        uVar7 = puVar4[5];
        puVar17[4] = puVar4[4];
        puVar17[5] = uVar7;
      }
    }
    else {
      puVar17 = (undefined8 *)memmove(puVar17,puVar4,sVar20);
    }
  }
  lVar6 = *(long *)(param_1 + 0x160);
  *(long *)(this_00 + 0x158) = lVar5;
  *(long *)(this_00 + 0x160) = lVar5;
  __src = *(undefined4 **)(param_1 + 0x158);
  *(undefined1 (*) [16])(this_00 + 0x170) = (undefined1  [16])0x0;
  *(undefined8 **)(this_00 + 0x150) = puVar17;
  __dest = (undefined4 *)0x0;
  *(undefined8 *)(this_00 + 0x168) = 0;
  if (lVar6 != 0) {
    sVar20 = lVar6 << 2;
    __dest = (undefined4 *)malloc(sVar20);
    if ((long)sVar20 < 5) {
      if (sVar20 == 4) {
        *__dest = *__src;
      }
    }
    else {
      __dest = (undefined4 *)memmove(__dest,__src,sVar20);
    }
  }
  lVar5 = *(long *)(param_1 + 0x178);
  pvVar18 = (void *)0x0;
  *(long *)(this_00 + 0x170) = lVar6;
  *(long *)(this_00 + 0x178) = lVar6;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  lVar6 = *(long *)(param_1 + 0x170);
  *(undefined4 **)(this_00 + 0x168) = __dest;
  *(undefined8 *)(this_00 + 0x180) = 0;
  if (lVar5 != 0) {
    sVar20 = lVar5 * 8;
    pvVar18 = malloc(sVar20);
    if (0 < (long)sVar20) {
      uVar19 = 0;
      do {
        *(undefined8 *)((long)pvVar18 + uVar19 * 8) = *(undefined8 *)(lVar6 + uVar19 * 8);
        uVar19 = uVar19 + 1;
      } while (uVar19 < (ulong)((long)sVar20 >> 3));
    }
  }
  *(void **)(this_00 + 0x180) = pvVar18;
  *(undefined8 *)this = 0;
  *(long *)(this_00 + 0x188) = lVar5;
  *(long *)(this_00 + 400) = lVar5;
  puVar17 = (undefined8 *)operator_new(0x98);
  bVar22 = __libc_single_threaded == '\0';
  puVar17[1] = uVar15;
  *puVar17 = &PTR___Sp_counted_ptr_inplace_0010f098;
  puVar4 = puVar17 + 2;
  puVar17[3] = 0;
  puVar17[4] = 0;
  puVar17[2] = &PTR_ToLeafNode_0010ef90;
  puVar17[5] = this_00 + 0x10;
  puVar17[6] = this_00;
  if (bVar22) {
    LOCK();
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    UNLOCK();
  }
  else {
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  }
  uVar7 = _LC10;
  *(undefined1 (*) [16])(puVar17 + 9) = (undefined1  [16])0x0;
  puVar17[7] = uVar7;
  puVar17[8] = 0;
  puVar17[0xb] = uVar7;
  puVar17[0xc] = 0;
  *(undefined1 (*) [16])(puVar17 + 0xd) = (undefined1  [16])0x0;
  puVar17[0xf] = uVar7;
  puVar17[0x10] = 0;
  *(undefined1 (*) [16])(puVar17 + 0x11) = (undefined1  [16])0x0;
  if (*(long *)(this_00 + 8) == 0x100000001) {
    *(undefined8 *)(this_00 + 8) = 0;
    (**(code **)(*(long *)this_00 + 0x10))(this_00);
    (**(code **)(*(long *)this_00 + 0x18))(this_00);
    *(undefined8 **)(this + 8) = puVar17;
    *(undefined8 **)this = puVar4;
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar16 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar16 = *(int *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar16 + -1;
    }
    if (iVar16 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      *(undefined8 **)(this + 8) = puVar17;
      *(undefined8 **)this = puVar4;
    }
    else {
      *(undefined8 **)(this + 8) = puVar17;
      *(undefined8 **)this = puVar4;
    }
  }
  if ((puVar17[4] != 0) && (*(int *)(puVar17[4] + 8) != 0)) {
    return this;
  }
  lVar5 = *(long *)(this + 8);
  puVar17[3] = puVar4;
  if (lVar5 == 0) {
LAB_00106718:
    plVar21 = (long *)puVar17[4];
    if (plVar21 == (long *)0x0) goto LAB_001066f6;
    if (__libc_single_threaded != '\0') goto LAB_001066e4;
    LOCK();
    piVar2 = (int *)((long)plVar21 + 0xc);
    iVar16 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
      UNLOCK();
      goto LAB_00106718;
    }
    plVar21 = (long *)puVar17[4];
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    if (plVar21 == (long *)0x0) goto LAB_001066f6;
LAB_001066e4:
    iVar16 = *(int *)((long)plVar21 + 0xc);
    *(int *)((long)plVar21 + 0xc) = iVar16 + -1;
  }
  if (iVar16 == 1) {
    (**(code **)(*plVar21 + 0x18))();
  }
LAB_001066f6:
  puVar17[4] = lVar5;
  return this;
}



/* manifold::SimpleBoolean(manifold::Manifold::Impl const&, manifold::Manifold::Impl const&,
   manifold::OpType) */

manifold * __thiscall
manifold::SimpleBoolean(manifold *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  long in_FS_OFFSET;
  Boolean3 aBStack_298 [24];
  void *local_280;
  void *local_268;
  void *local_250;
  void *local_238;
  void *local_220;
  void *local_208;
  void *local_1f0;
  void *local_1d8;
  Impl local_1b8 [72];
  void *local_170;
  void *local_158;
  void *local_140;
  void *local_128;
  void *local_110;
  void *local_f0;
  void *local_c8;
  void *local_a8;
  void *local_90;
  void *local_78;
  void *local_60;
  void *local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  manifold::Boolean3::Boolean3(aBStack_298);
  manifold::Boolean3::Result(local_1b8,aBStack_298,param_4);
  ImplToLeaf(this,local_1b8);
  if (local_48 != (void *)0x0) {
    free(local_48);
  }
  if (local_60 != (void *)0x0) {
    free(local_60);
  }
  if (local_78 != (void *)0x0) {
    free(local_78);
  }
  if (local_90 != (void *)0x0) {
    free(local_90);
  }
  if (local_a8 != (void *)0x0) {
    free(local_a8);
  }
  while (local_c8 != (void *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)((long)local_c8 + 0x18));
    pvVar1 = *(void **)((long)local_c8 + 0x10);
    operator_delete(local_c8,0x98);
    local_c8 = pvVar1;
  }
  if (local_f0 != (void *)0x0) {
    free(local_f0);
  }
  if (local_110 != (void *)0x0) {
    free(local_110);
  }
  if (local_128 != (void *)0x0) {
    free(local_128);
  }
  if (local_140 != (void *)0x0) {
    free(local_140);
  }
  if (local_158 != (void *)0x0) {
    free(local_158);
  }
  if (local_170 != (void *)0x0) {
    free(local_170);
  }
  if (local_1d8 != (void *)0x0) {
    free(local_1d8);
  }
  if (local_1f0 != (void *)0x0) {
    free(local_1f0);
  }
  if (local_208 != (void *)0x0) {
    free(local_208);
  }
  if (local_220 != (void *)0x0) {
    free(local_220);
  }
  if (local_238 != (void *)0x0) {
    free(local_238);
  }
  if (local_250 != (void *)0x0) {
    free(local_250);
  }
  if (local_268 != (void *)0x0) {
    free(local_268);
  }
  if (local_280 != (void *)0x0) {
    free(local_280);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::BatchBoolean(manifold::OpType, std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> > >&) */

manifold * __thiscall
manifold::BatchBoolean
          (manifold *this,undefined4 param_2,
          vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
          *param_3)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  CsgLeafNode *this_00;
  int *piVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  long lVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long in_FS_OFFSET;
  undefined8 local_78;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_70;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_50;
  long local_40;
  
  pauVar11 = *(undefined1 (**) [16])param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pauVar10 = *(undefined1 (**) [16])(param_3 + 8);
  uVar13 = (long)pauVar10 - (long)pauVar11;
  if (pauVar11 != pauVar10) {
    if (uVar13 == 0x10) {
      lVar16 = *(long *)(*pauVar11 + 8);
      *(undefined8 *)this = *(undefined8 *)*pauVar11;
      *(long *)(this + 8) = lVar16;
    }
    else {
      if (uVar13 == 0x20) {
        CsgLeafNode::GetImpl();
        uVar7 = local_58;
        CsgLeafNode::GetImpl();
        SimpleBoolean(this,local_68,uVar7,param_2);
        p_Var6 = p_Stack_50;
        if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var4 = local_60 + 8;
          if (*(long *)(local_60 + 8) == 0x100000001) {
            *(undefined8 *)(local_60 + 8) = 0;
            (**(code **)(*(long *)local_60 + 0x10))(local_60);
            (**(code **)(*(long *)local_60 + 0x18))(local_60);
            p_Var6 = p_Stack_50;
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var4;
              *(int *)p_Var4 = *(int *)p_Var4 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(local_60 + 8);
              *(int *)(local_60 + 8) = iVar9 + -1;
            }
            if (iVar9 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
              p_Var6 = p_Stack_50;
            }
          }
        }
joined_r0x0010717d:
        if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var4 = p_Var6 + 8;
          if (*(long *)(p_Var6 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var6 + 8) = 0;
            (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
            (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var4;
              *(int *)p_Var4 = *(int *)p_Var4 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(p_Var6 + 8);
              *(int *)(p_Var6 + 8) = iVar9 + -1;
            }
            if (iVar9 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
            }
          }
        }
        goto LAB_00106f08;
      }
      if (0x10 < (long)uVar13) {
        lVar16 = (((long)uVar13 >> 4) + -2) / 2;
        pauVar10 = pauVar11 + lVar16;
        while( true ) {
          local_58 = *(undefined8 *)*pauVar10;
          p_Stack_50 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(*pauVar10 + 8);
          *pauVar10 = (undefined1  [16])0x0;
          std::
          __adjust_heap<__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>>,long,std::shared_ptr<manifold::CsgLeafNode>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MeshCompare>>
                    (pauVar11,lVar16,(long)uVar13 >> 4,&local_58);
          p_Var6 = p_Stack_50;
          if (p_Stack_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var4 = p_Stack_50 + 8;
            if (*(long *)(p_Stack_50 + 8) == 0x100000001) {
              *(undefined8 *)(p_Stack_50 + 8) = 0;
              (**(code **)(*(long *)p_Stack_50 + 0x10))();
              (**(code **)(*(long *)p_Var6 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var4;
                *(int *)p_Var4 = *(int *)p_Var4 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(p_Stack_50 + 8);
                *(int *)(p_Stack_50 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (p_Stack_50);
              }
            }
          }
          if (lVar16 == 0) break;
          pauVar10 = pauVar10 + -1;
          lVar16 = lVar16 + -1;
        }
        pauVar10 = *(undefined1 (**) [16])(param_3 + 8);
        pauVar11 = *(undefined1 (**) [16])param_3;
        uVar13 = (long)pauVar10 - (long)pauVar11;
      }
      if (0x10 < uVar13) {
        do {
          if (0x10 < (long)uVar13) {
            local_58 = *(undefined8 *)pauVar10[-1];
            p_Stack_50 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pauVar10[-1] + 8);
            pauVar12 = pauVar10 + -1;
            *pauVar12 = (undefined1  [16])0x0;
            uVar7 = *(undefined8 *)(*pauVar11 + 8);
            *pauVar11 = (undefined1  [16])0x0;
            *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar11;
            *(undefined8 *)(pauVar10[-1] + 8) = uVar7;
            std::
            __adjust_heap<__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>>,long,std::shared_ptr<manifold::CsgLeafNode>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MeshCompare>>
                      (pauVar11,0,(long)pauVar12 - (long)pauVar11 >> 4,&local_58);
            p_Var6 = p_Stack_50;
            if (p_Stack_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              p_Var4 = p_Stack_50 + 8;
              if (*(long *)(p_Stack_50 + 8) == 0x100000001) {
                *(undefined8 *)(p_Stack_50 + 8) = 0;
                (**(code **)(*(long *)p_Stack_50 + 0x10))(p_Stack_50);
                (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar9 = *(int *)p_Var4;
                  *(int *)p_Var4 = *(int *)p_Var4 + -1;
                  UNLOCK();
                }
                else {
                  iVar9 = *(int *)(p_Stack_50 + 8);
                  *(int *)(p_Stack_50 + 8) = iVar9 + -1;
                }
                if (iVar9 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (p_Stack_50);
                }
              }
            }
          }
          lVar5 = *(long *)(param_3 + 8);
          pauVar10 = *(undefined1 (**) [16])param_3;
          lVar16 = lVar5 + -0x10;
          p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar5 + -8);
          *(long *)(param_3 + 8) = lVar16;
          if (0x10 < lVar16 - (long)pauVar10) {
            local_58 = *(undefined8 *)(lVar5 + -0x20);
            p_Stack_50 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar5 + -0x18);
            pauVar11 = (undefined1 (*) [16])(lVar5 + -0x20);
            *pauVar11 = (undefined1  [16])0x0;
            uVar7 = *(undefined8 *)(*pauVar10 + 8);
            *pauVar10 = (undefined1  [16])0x0;
            *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar10;
            *(undefined8 *)(lVar5 + -0x18) = uVar7;
            std::
            __adjust_heap<__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>>,long,std::shared_ptr<manifold::CsgLeafNode>,__gnu_cxx::__ops::_Iter_comp_iter<(anonymous_namespace)::MeshCompare>>
                      (pauVar10,0,(long)pauVar11 - (long)pauVar10 >> 4,&local_58);
            p_Var4 = p_Stack_50;
            if (p_Stack_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              p_Var2 = p_Stack_50 + 8;
              if (*(long *)(p_Stack_50 + 8) == 0x100000001) {
                *(undefined8 *)(p_Stack_50 + 8) = 0;
                (**(code **)(*(long *)p_Stack_50 + 0x10))(p_Stack_50);
                (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar9 = *(int *)p_Var2;
                  *(int *)p_Var2 = *(int *)p_Var2 + -1;
                  UNLOCK();
                }
                else {
                  iVar9 = *(int *)(p_Stack_50 + 8);
                  *(int *)(p_Stack_50 + 8) = iVar9 + -1;
                }
                if (iVar9 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (p_Stack_50);
                }
              }
            }
            lVar16 = *(long *)(param_3 + 8);
          }
          p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar16 + -8);
          *(long *)(param_3 + 8) = lVar16 + -0x10;
          CsgLeafNode::GetImpl();
          uVar7 = local_58;
          CsgLeafNode::GetImpl();
          SimpleBoolean((manifold *)&local_78,local_68,uVar7,param_2);
          p_Var2 = local_60;
          if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var1 = local_60 + 8;
            if (*(long *)(local_60 + 8) == 0x100000001) {
              *(undefined8 *)(local_60 + 8) = 0;
              (**(code **)(*(long *)local_60 + 0x10))(local_60);
              (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(local_60 + 8);
                *(int *)(local_60 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_60);
              }
            }
          }
          p_Var2 = p_Stack_50;
          if (p_Stack_50 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00106bc5:
            puVar8 = *(undefined8 **)(param_3 + 8);
            puVar14 = *(undefined8 **)param_3;
            if (puVar8 == puVar14) {
LAB_00106ea0:
              *(undefined8 *)this = local_78;
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8) = p_Stack_70;
              if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                p_Var2 = p_Var4 + 8;
                if (*(long *)(p_Var4 + 8) == 0x100000001) {
                  *(undefined8 *)(p_Var4 + 8) = 0;
                  (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
                  (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
                }
                else {
                  if (__libc_single_threaded == '\0') {
                    LOCK();
                    iVar9 = *(int *)p_Var2;
                    *(int *)p_Var2 = *(int *)p_Var2 + -1;
                    UNLOCK();
                  }
                  else {
                    iVar9 = *(int *)(p_Var4 + 8);
                    *(int *)(p_Var4 + 8) = iVar9 + -1;
                  }
                  if (iVar9 == 1) {
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                              (p_Var4);
                  }
                }
              }
              goto joined_r0x0010717d;
            }
          }
          else {
            p_Var1 = p_Stack_50 + 8;
            if (*(long *)(p_Stack_50 + 8) == 0x100000001) {
              *(undefined8 *)(p_Stack_50 + 8) = 0;
              (**(code **)(*(long *)p_Stack_50 + 0x10))(p_Stack_50);
              (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
              goto LAB_00106bc5;
            }
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar9 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar9 = *(int *)(p_Stack_50 + 8);
              *(int *)(p_Stack_50 + 8) = iVar9 + -1;
            }
            if (iVar9 != 1) goto LAB_00106bc5;
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_50);
            puVar8 = *(undefined8 **)(param_3 + 8);
            puVar14 = *(undefined8 **)param_3;
            if (puVar8 == puVar14) goto LAB_00106ea0;
          }
          if (puVar8 == *(undefined8 **)(param_3 + 0x10)) {
            std::
            vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
            ::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>const&>
                      (param_3,puVar8,(manifold *)&local_78);
            puVar8 = *(undefined8 **)(param_3 + 8);
            puVar14 = *(undefined8 **)param_3;
            local_58 = puVar8[-2];
            p_Stack_50 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar8[-1];
          }
          else {
            *puVar8 = local_78;
            puVar8[1] = p_Stack_70;
            local_58 = local_78;
            p_Stack_50 = p_Stack_70;
            if (p_Stack_70 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              if (__libc_single_threaded == '\0') {
                LOCK();
                *(int *)(p_Stack_70 + 8) = *(int *)(p_Stack_70 + 8) + 1;
                UNLOCK();
                puVar8 = *(undefined8 **)(param_3 + 8);
                puVar14 = *(undefined8 **)param_3;
                local_58 = *puVar8;
                p_Stack_50 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar8[1];
              }
              else {
                *(int *)(p_Stack_70 + 8) = *(int *)(p_Stack_70 + 8) + 1;
              }
            }
            puVar8 = puVar8 + 2;
            *(undefined8 **)(param_3 + 8) = puVar8;
          }
          *(undefined1 (*) [16])(puVar8 + -2) = (undefined1  [16])0x0;
          std::
          __push_heap<__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>>,long,std::shared_ptr<manifold::CsgLeafNode>,__gnu_cxx::__ops::_Iter_comp_val<(anonymous_namespace)::MeshCompare>>
                    (puVar14,((long)puVar8 - (long)puVar14 >> 4) + -1,0,&local_58);
          p_Var2 = p_Stack_50;
          if (p_Stack_50 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var1 = p_Stack_50 + 8;
            if (*(long *)(p_Stack_50 + 8) == 0x100000001) {
              *(undefined8 *)(p_Stack_50 + 8) = 0;
              (**(code **)(*(long *)p_Stack_50 + 0x10))(p_Stack_50);
              (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(p_Stack_50 + 8);
                *(int *)(p_Stack_50 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (p_Stack_50);
              }
            }
          }
          p_Var2 = p_Stack_70;
          if (p_Stack_70 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var1 = p_Stack_70 + 8;
            if (*(long *)(p_Stack_70 + 8) == 0x100000001) {
              *(undefined8 *)(p_Stack_70 + 8) = 0;
              (**(code **)(*(long *)p_Stack_70 + 0x10))(p_Stack_70);
              (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(p_Stack_70 + 8);
                *(int *)(p_Stack_70 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (p_Stack_70);
              }
            }
          }
          if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var2 = p_Var4 + 8;
            if (*(long *)(p_Var4 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var4 + 8) = 0;
              (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
              (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var2;
                *(int *)p_Var2 = *(int *)p_Var2 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(p_Var4 + 8);
                *(int *)(p_Var4 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
              }
            }
          }
          if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var4 = p_Var6 + 8;
            if (*(long *)(p_Var6 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var6 + 8) = 0;
              (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
              (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var4;
                *(int *)p_Var4 = *(int *)p_Var4 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(p_Var6 + 8);
                *(int *)(p_Var6 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
              }
            }
          }
          pauVar10 = *(undefined1 (**) [16])(param_3 + 8);
          pauVar11 = *(undefined1 (**) [16])param_3;
          uVar13 = (long)pauVar10 - (long)pauVar11;
        } while (0x10 < uVar13);
      }
      lVar16 = *(long *)(*pauVar11 + 8);
      *(undefined8 *)this = *(undefined8 *)*pauVar11;
      *(long *)(this + 8) = lVar16;
    }
    if (lVar16 != 0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
      }
    }
    goto LAB_00106f08;
  }
  *(undefined8 *)this = 0;
  puVar8 = (undefined8 *)operator_new(0x98);
  this_00 = (CsgLeafNode *)(puVar8 + 2);
  puVar8[1] = _LC0;
  *puVar8 = &PTR___Sp_counted_ptr_inplace_0010f098;
  CsgLeafNode::CsgLeafNode(this_00);
  lVar16 = puVar8[4];
  *(undefined8 **)(this + 8) = puVar8;
  *(CsgLeafNode **)this = this_00;
  if (lVar16 == 0) {
    puVar8[3] = this_00;
LAB_00107364:
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)((long)puVar8 + 0xc) = *(int *)((long)puVar8 + 0xc) + 1;
      UNLOCK();
      goto LAB_001074cc;
    }
    plVar15 = (long *)puVar8[4];
    *(int *)((long)puVar8 + 0xc) = *(int *)((long)puVar8 + 0xc) + 1;
    if (plVar15 != (long *)0x0) goto LAB_0010737e;
  }
  else {
    if (*(int *)(lVar16 + 8) != 0) goto LAB_00106f08;
    puVar8[3] = this_00;
    if (puVar8 != (undefined8 *)0x0) goto LAB_00107364;
LAB_001074cc:
    plVar15 = (long *)puVar8[4];
    if (plVar15 != (long *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        piVar3 = (int *)((long)plVar15 + 0xc);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
      }
      else {
LAB_0010737e:
        iVar9 = *(int *)((long)plVar15 + 0xc);
        *(int *)((long)plVar15 + 0xc) = iVar9 + -1;
      }
      if (iVar9 == 1) {
        (**(code **)(*plVar15 + 0x18))();
      }
    }
  }
  puVar8[4] = puVar8;
LAB_00106f08:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::CsgLeafNode::Compose(std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> > > const&) */

CsgLeafNode * __thiscall manifold::CsgLeafNode::Compose(CsgLeafNode *this,vector *param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  undefined1 (*pauVar12) [16];
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  _Rb_tree_node_base *p_Var18;
  _Rb_tree_node_base *p_Var19;
  _Rb_tree_node_base *p_Var20;
  double *pdVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 (*pauVar24) [16];
  undefined8 *puVar25;
  ulong uVar26;
  int *piVar27;
  double *pdVar28;
  ulong uVar29;
  int iVar30;
  size_t sVar31;
  double *__src;
  uint uVar32;
  long *plVar33;
  long lVar34;
  int *piVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  int iVar40;
  long lVar41;
  int *piVar42;
  ulong uVar43;
  long lVar44;
  int *piVar45;
  ulong uVar46;
  _Rb_tree_node_base *p_Var47;
  ulong uVar48;
  long in_FS_OFFSET;
  bool bVar49;
  byte bVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  double dVar61;
  double dVar62;
  undefined1 auVar63 [16];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  undefined1 auVar72 [16];
  long local_380;
  ulong local_378;
  double local_370;
  double local_348;
  int local_32c;
  Impl *local_320;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  undefined1 local_2b8 [16];
  int *local_2a8;
  undefined1 local_298 [16];
  int *local_288;
  undefined1 local_278 [16];
  int *local_268;
  undefined1 local_258 [16];
  int *local_248;
  double local_238;
  double dStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  undefined8 local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined4 local_198;
  undefined1 (*local_190) [16];
  undefined1 local_188 [16];
  undefined8 *local_178;
  undefined1 local_170 [16];
  void *local_160;
  undefined1 local_158 [16];
  undefined1 (*local_148) [16];
  undefined1 local_140 [16];
  undefined1 (*local_130) [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 *local_110;
  ulong local_108;
  ulong uStack_100;
  _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
  local_f8 [8];
  undefined4 local_f0 [2];
  _Rb_tree_node_base *local_e8;
  _Rb_tree_node_base *local_e0;
  _Rb_tree_node_base *local_d8;
  long local_d0;
  void *local_c8;
  undefined1 local_c0 [16];
  undefined8 *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined1 local_90 [16];
  void *local_80;
  undefined1 local_78 [16];
  void *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  bVar50 = 0;
  plVar33 = *(long **)param_1;
  plVar5 = *(long **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2b8 = (undefined1  [16])0x0;
  local_2c4 = 0;
  local_2c0 = 0;
  local_2bc = 0;
  local_2a8 = (int *)0x0;
  local_288 = (int *)0x0;
  local_268 = (int *)0x0;
  local_248 = (int *)0x0;
  local_298 = (undefined1  [16])0x0;
  local_278 = (undefined1  [16])0x0;
  local_258 = (undefined1  [16])0x0;
  if (plVar5 == plVar33) {
    uVar43 = 0;
    uVar46 = 0;
    lVar34 = 0;
    local_32c = 0;
    lVar44 = 0;
    local_1a8 = _LC19;
    dStack_1a0 = _LC19;
  }
  else {
    local_348 = _LC19;
    iVar40 = 0;
    local_32c = 0;
    local_370 = _LC19;
    uVar43 = _LC3;
    do {
      piVar27 = local_248;
      piVar42 = local_268;
      piVar45 = local_288;
      piVar35 = local_2a8;
      iVar3 = local_2c4;
      lVar34 = *plVar33;
      pdVar28 = *(double **)(lVar34 + 0x18);
      if (*(int *)(pdVar28 + 8) != 0) {
        local_190 = (undefined1 (*) [16])0x0;
        local_1d8 = _LC13;
        uStack_1d0 = _LC13;
        local_118 = _LC20;
        local_e0 = (_Rb_tree_node_base *)local_f0;
        local_1c8 = _LC13;
        uStack_1c0 = _LC17;
        local_1b8 = _LC17;
        uStack_1b0 = _LC17;
        local_178 = (undefined8 *)0x0;
        local_160 = (void *)0x0;
        local_1a8 = _LC19;
        dStack_1a0 = _LC19;
        local_188 = (undefined1  [16])0x0;
        local_170 = (undefined1  [16])0x0;
        local_158 = (undefined1  [16])0x0;
        local_140 = (undefined1  [16])0x0;
        local_128 = (undefined1  [16])0x0;
        local_108 = 0;
        uStack_100 = 0;
        local_c0 = (undefined1  [16])0x0;
        local_148 = (undefined1 (*) [16])0x0;
        local_130 = (undefined1 (*) [16])0x0;
        local_110 = (undefined8 *)0x0;
        local_f0[0] = 0;
        local_e8 = (_Rb_tree_node_base *)0x0;
        local_d0 = 0;
        local_c8 = (void *)0x0;
        local_b0 = (undefined8 *)0x0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_198 = *(undefined4 *)(pdVar28 + 8);
        local_98 = (void *)0x0;
        local_80 = (void *)0x0;
        local_68 = (void *)0x0;
        local_90 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        local_60 = (undefined1  [16])0x0;
        local_d8 = local_e0;
        ImplToLeaf((manifold *)this,(Impl *)&local_1d8);
        if (local_68 != (void *)0x0) {
          free(local_68);
        }
        if (local_80 != (void *)0x0) {
          free(local_80);
        }
        if (local_98 != (void *)0x0) {
          free(local_98);
        }
        if (local_b0 != (undefined8 *)0x0) {
          free(local_b0);
        }
        p_Var20 = local_e8;
        if (local_c8 != (void *)0x0) {
          free(local_c8);
          p_Var20 = local_e8;
        }
        while (p_Var20 != (_Rb_tree_node_base *)0x0) {
          std::
          _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
          ::_M_erase(*(_Rb_tree_node **)(p_Var20 + 0x18));
          p_Var19 = *(_Rb_tree_node_base **)(p_Var20 + 0x10);
          operator_delete(p_Var20,0x98);
          p_Var20 = p_Var19;
        }
        if (local_110 != (undefined8 *)0x0) {
          free(local_110);
        }
        if (local_130 != (undefined1 (*) [16])0x0) {
          free(local_130);
        }
        if (local_148 != (undefined1 (*) [16])0x0) {
          free(local_148);
        }
        if (local_160 != (void *)0x0) {
          free(local_160);
        }
        if (local_178 != (undefined8 *)0x0) {
          free(local_178);
        }
        if (local_190 != (undefined1 (*) [16])0x0) {
          free(local_190);
        }
        goto LAB_00107ee8;
      }
      dVar60 = pdVar28[2];
      dVar53 = pdVar28[1];
      dVar71 = *pdVar28;
      dVar61 = (double)((ulong)pdVar28[5] & uVar43);
      if ((double)((ulong)pdVar28[5] & uVar43) <= (double)((ulong)dVar60 & uVar43)) {
        dVar61 = (double)((ulong)dVar60 & uVar43);
      }
      dVar57 = (double)((ulong)pdVar28[4] & uVar43);
      if ((double)((ulong)pdVar28[4] & uVar43) <= (double)((ulong)dVar53 & uVar43)) {
        dVar57 = (double)((ulong)dVar53 & uVar43);
      }
      dVar51 = (double)((ulong)pdVar28[3] & uVar43);
      if ((double)((ulong)pdVar28[3] & uVar43) <= (double)((ulong)dVar71 & uVar43)) {
        dVar51 = (double)((ulong)dVar71 & uVar43);
      }
      if (dVar61 <= dVar57) {
        dVar61 = dVar57;
      }
      if (dVar61 <= dVar51) {
        dVar61 = dVar51;
      }
      dVar57 = dVar71 * *(double *)(lVar34 + 0x28) + dVar53 * *(double *)(lVar34 + 0x40) +
               dVar60 * *(double *)(lVar34 + 0x58) + *(double *)(lVar34 + 0x70);
      dVar62 = *(double *)(lVar34 + 0x28) * pdVar28[3] + *(double *)(lVar34 + 0x40) * pdVar28[4] +
               *(double *)(lVar34 + 0x58) * pdVar28[5] + *(double *)(lVar34 + 0x70);
      dVar54 = dVar71 * *(double *)(lVar34 + 0x30) + dVar53 * *(double *)(lVar34 + 0x48) +
               dVar60 * *(double *)(lVar34 + 0x60) + *(double *)(lVar34 + 0x78);
      dVar51 = dVar71 * *(double *)(lVar34 + 0x38) + dVar53 * *(double *)(lVar34 + 0x50) +
               dVar60 * *(double *)(lVar34 + 0x68) + *(double *)(lVar34 + 0x80);
      dVar64 = *(double *)(lVar34 + 0x60) * pdVar28[5] +
               *(double *)(lVar34 + 0x30) * pdVar28[3] + *(double *)(lVar34 + 0x48) * pdVar28[4] +
               *(double *)(lVar34 + 0x78);
      dVar67 = pdVar28[4] * *(double *)(lVar34 + 0x50) + *(double *)(lVar34 + 0x38) * pdVar28[3] +
               pdVar28[5] * *(double *)(lVar34 + 0x68) + *(double *)(lVar34 + 0x80);
      dVar60 = dVar54;
      dVar53 = dVar54;
      dVar71 = dVar67;
      if (dVar57 < dVar62) {
        dVar56 = dVar57;
        if (dVar54 < dVar64) {
          if (dVar51 < dVar67) {
            dVar71 = dVar51;
          }
        }
        else {
          dVar53 = dVar64;
          if (dVar51 < dVar67) goto LAB_00107a82;
        }
LAB_0010762d:
        dVar57 = dVar62;
LAB_00107635:
        dVar52 = dVar57;
        dVar62 = dVar56;
        if (dVar54 < dVar64) {
LAB_00107a3c:
          dVar60 = dVar64;
          dVar57 = dVar52;
          dVar56 = dVar62;
        }
        bVar49 = dVar51 < dVar67;
        dVar62 = dVar51;
        dVar51 = dVar71;
        if (bVar49) goto LAB_00107a94;
      }
      else {
        dVar56 = dVar62;
        if (dVar64 <= dVar54) {
          dVar53 = dVar64;
          if (dVar67 <= dVar51) {
            if (dVar57 < dVar62) goto LAB_0010762d;
            goto LAB_00107635;
          }
        }
        else if (dVar67 <= dVar51) {
          dVar52 = dVar62;
          if (dVar62 <= dVar57) {
            dVar52 = dVar57;
          }
          goto LAB_00107a3c;
        }
LAB_00107a82:
        if (dVar57 < dVar62) {
          dVar57 = dVar62;
          if (dVar54 < dVar64) {
            dVar60 = dVar64;
          }
        }
        else {
          dVar60 = dVar64;
          if (dVar64 <= dVar54) {
            dVar60 = dVar54;
          }
        }
LAB_00107a94:
        dVar62 = dVar67;
      }
      dVar71 = (double)((ulong)dVar60 & uVar43);
      if ((double)((ulong)dVar60 & uVar43) <= (double)((ulong)dVar53 & uVar43)) {
        dVar71 = (double)((ulong)dVar53 & uVar43);
      }
      dVar60 = (double)((ulong)dVar62 & uVar43);
      if ((double)((ulong)dVar62 & uVar43) <= (double)((ulong)dVar51 & uVar43)) {
        dVar60 = (double)((ulong)dVar51 & uVar43);
      }
      dVar53 = (double)((ulong)dVar57 & uVar43);
      if ((double)((ulong)dVar57 & uVar43) <= (double)((ulong)dVar56 & uVar43)) {
        dVar53 = (double)((ulong)dVar56 & uVar43);
      }
      dVar57 = pdVar28[6];
      if (dVar60 <= dVar71) {
        dVar60 = dVar71;
      }
      if (dVar60 <= dVar53) {
        dVar60 = dVar53;
      }
      if (_LC10 < dVar60 / dVar61) {
        dVar57 = dVar57 * (dVar60 / dVar61);
      }
      dVar60 = dVar60 * __LC27;
      dVar53 = dVar60;
      if (dVar60 <= dVar57) {
        dVar60 = (double)((ulong)dVar57 & uVar43);
        dVar53 = dVar57;
      }
      dVar71 = pdVar28[7];
      if (pdVar28[7] <= local_348) {
        dVar71 = local_348;
      }
      if (_LC4 < dVar60) {
        dVar53 = _LC19;
      }
      if (dVar53 <= local_370) {
        dVar53 = local_370;
      }
      if ((int *)local_2b8._8_8_ == local_2a8) {
        std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
                  ((vector<int,std::allocator<int>> *)local_2b8,local_2a8,&local_2c4);
        uVar43 = _LC3;
      }
      else {
        *(int *)local_2b8._8_8_ = local_2c4;
        local_2b8._8_8_ = (int *)(local_2b8._8_8_ + 4);
      }
      local_1d8 = CONCAT44(local_1d8._4_4_,iVar40 * 2);
      if ((int *)local_298._8_8_ == piVar45) {
        std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                  ((vector<int,std::allocator<int>> *)local_298,piVar45,(Impl *)&local_1d8);
        uVar43 = _LC3;
      }
      else {
        *(int *)local_298._8_8_ = iVar40 * 2;
        local_298._8_8_ = (int *)(local_298._8_8_ + 4);
      }
      iVar30 = local_2c0;
      if ((int *)local_278._8_8_ == piVar42) {
        std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
                  ((vector<int,std::allocator<int>> *)local_278,piVar42,&local_2c0);
        uVar43 = _LC3;
      }
      else {
        *(int *)local_278._8_8_ = local_2c0;
        local_278._8_8_ = (int *)(local_278._8_8_ + 4);
      }
      iVar13 = local_2bc;
      if ((int *)local_258._8_8_ == piVar27) {
        std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
                  ((vector<int,std::allocator<int>> *)local_258,piVar27,&local_2bc);
        uVar43 = _LC3;
      }
      else {
        *(int *)local_258._8_8_ = local_2bc;
        local_258._8_8_ = (int *)(local_258._8_8_ + 4);
      }
      lVar34 = *(long *)(*plVar33 + 0x18);
      local_2c4 = iVar3 + *(int *)(lVar34 + 0x50);
      local_2bc = 1;
      iVar40 = (int)(*(ulong *)(lVar34 + 0x68) >> 1) + iVar40;
      local_2c0 = iVar30 + (int)(*(ulong *)(lVar34 + 0x68) / 3);
      iVar3 = *(int *)(lVar34 + 0xc4);
      if (local_32c < iVar3) {
        local_32c = iVar3;
      }
      if (iVar3 != 0) {
        local_2bc = (int)(*(ulong *)(lVar34 + 0xd0) / (ulong)(long)iVar3);
      }
      local_2bc = iVar13 + local_2bc;
      plVar33 = plVar33 + 2;
      local_370 = dVar53;
      local_348 = dVar71;
    } while (plVar5 != plVar33);
    uVar46 = (ulong)local_2c0;
    lVar44 = (long)local_2c4;
    lVar34 = (long)(iVar40 * 2);
    uVar43 = uVar46 * 2;
    local_1a8 = dVar53;
    dStack_1a0 = dVar71;
  }
  local_320 = (Impl *)&local_1d8;
  local_198 = 0;
  local_190 = (undefined1 (*) [16])0x0;
  local_178 = (undefined8 *)0x0;
  local_1d8 = _LC13;
  uStack_1d0 = _LC13;
  local_160 = (void *)0x0;
  local_1c8 = _LC13;
  uStack_1c0 = _LC17;
  local_148 = (undefined1 (*) [16])0x0;
  local_130 = (undefined1 (*) [16])0x0;
  local_1b8 = _LC17;
  uStack_1b0 = _LC17;
  local_118 = _LC20;
  local_110 = (undefined8 *)0x0;
  local_f0[0] = 0;
  local_e8 = (_Rb_tree_node_base *)0x0;
  local_d8 = (_Rb_tree_node_base *)local_f0;
  local_d0 = 0;
  local_c8 = (void *)0x0;
  local_b0 = (undefined8 *)0x0;
  local_98 = (void *)0x0;
  local_188 = (undefined1  [16])0x0;
  local_188._8_8_ = 0;
  local_170 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_140 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_c0 = (undefined1  [16])0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = (undefined1  [16])0x0;
  local_80 = (void *)0x0;
  local_68 = (void *)0x0;
  local_78 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_e0 = (_Rb_tree_node_base *)local_f0;
  if (lVar44 != 0) {
    local_190 = (undefined1 (*) [16])malloc(lVar44 * 0x18);
    pauVar24 = local_190;
    do {
      *(undefined8 *)pauVar24[1] = 0;
      pauVar12 = pauVar24 + 1;
      *pauVar24 = (undefined1  [16])0x0;
      pauVar24 = (undefined1 (*) [16])(*pauVar12 + 8);
      local_188._8_8_ = lVar44;
    } while ((undefined1 (*) [16])((long)local_190 + lVar44 * 0x18) !=
             (undefined1 (*) [16])(*pauVar12 + 8));
  }
  local_188._0_8_ = lVar44;
  if (lVar34 == 0) {
    auVar66._8_8_ = 0;
    auVar66._0_8_ = local_170._8_8_;
    local_170 = auVar66 << 0x40;
    if (uVar46 != 0) {
LAB_00109154:
      local_148 = (undefined1 (*) [16])malloc(uVar46 * 0x18);
      pauVar24 = local_148;
      do {
        *(undefined8 *)pauVar24[1] = 0;
        pauVar12 = pauVar24 + 1;
        *pauVar24 = (undefined1  [16])0x0;
        pauVar24 = (undefined1 (*) [16])(*pauVar12 + 8);
      } while ((undefined1 (*) [16])((long)local_148 + uVar46 * 0x18) !=
               (undefined1 (*) [16])(*pauVar12 + 8));
      local_140._8_8_ = uVar46;
      local_140._0_8_ = uVar46;
      if (lVar34 != 0) goto LAB_0010929c;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = local_128._8_8_;
      local_128 = auVar70 << 0x40;
      goto LAB_001091b2;
    }
    auVar59._8_8_ = 0;
    auVar59._0_8_ = local_140._8_8_;
    local_140 = auVar59 << 0x40;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_128._8_8_;
    local_128 = auVar9 << 0x40;
LAB_00108153:
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_c0._8_8_;
    local_c0 = auVar10 << 0x40;
    if (local_32c < 1) {
LAB_0010816d:
      lVar34 = *(long *)(param_1 + 8);
      lVar44 = *(long *)param_1;
      goto LAB_0010817c;
    }
LAB_0010934a:
    uVar29 = local_108;
    local_118 = CONCAT44(local_32c,(undefined4)local_118);
    uVar48 = (ulong)(local_2bc * local_32c);
    if (uStack_100 < uVar48) {
      puVar17 = (undefined8 *)malloc(uVar48 * 8);
      puVar23 = local_110;
      if (uVar29 == 0) {
        if (local_110 == (undefined8 *)0x0) {
          uVar26 = 0;
          local_110 = puVar17;
          uStack_100 = uVar48;
          goto LAB_001094d6;
        }
LAB_00109642:
        free(puVar23);
        uVar26 = local_108;
      }
      else {
        sVar31 = uVar29 * 8;
        if (8 < (long)sVar31) {
          memmove(puVar17,local_110,sVar31);
          goto LAB_00109642;
        }
        if (sVar31 == 8) {
          *puVar17 = *local_110;
          goto LAB_00109642;
        }
        uVar26 = uVar29;
        if (local_110 != (undefined8 *)0x0) goto LAB_00109642;
      }
      local_110 = puVar17;
      uStack_100 = uVar48;
      if (uVar26 < uVar48) goto LAB_001094d6;
joined_r0x00109678:
      local_108 = uVar48;
      if (uVar48 * 2 < uVar29) {
LAB_0010967e:
        puVar23 = local_110;
        local_378 = uVar48 * 8;
        local_108 = uVar48;
        puVar17 = (undefined8 *)malloc(local_378);
        if ((long)local_378 < 9) {
          if (local_378 != 8) goto LAB_001093af;
          *puVar17 = *puVar23;
        }
        else {
          memmove(puVar17,puVar23,local_378);
        }
LAB_001096a6:
        free(puVar23);
LAB_001093b8:
        uStack_100 = local_108;
        local_110 = puVar17;
      }
    }
    else {
      uVar26 = local_108;
      if (local_108 < uVar48) {
LAB_001094d6:
        local_378 = uVar48 * 8;
        if (local_110 + uVar26 != local_110 + uVar48) {
          memset(local_110 + uVar26,0,local_378 + uVar26 * -8);
        }
        goto joined_r0x00109678;
      }
      bVar49 = uVar48 * 2 < local_108;
      local_108 = uVar48;
      if (bVar49) {
        if (uVar48 != 0) goto LAB_0010967e;
        puVar17 = (undefined8 *)0x0;
        puVar23 = local_110;
LAB_001093af:
        if (puVar23 != (undefined8 *)0x0) goto LAB_001096a6;
        goto LAB_001093b8;
      }
    }
    uVar29 = local_a8;
    if (uStack_a0 < uVar46) {
      puVar17 = (undefined8 *)malloc(uVar46 * 0xc);
      puVar23 = local_b0;
      if (uVar29 == 0) {
        if (local_b0 == (undefined8 *)0x0) {
          local_b0 = puVar17;
          local_a8 = 0;
          uStack_a0 = uVar46;
          goto LAB_0010953c;
        }
LAB_001096d8:
        free(puVar23);
        uVar48 = local_a8;
      }
      else {
        sVar31 = uVar29 * 0xc;
        if (0xc < (long)sVar31) {
          memmove(puVar17,local_b0,sVar31);
          goto LAB_001096d8;
        }
        if (sVar31 == 0xc) {
          *puVar17 = *local_b0;
          *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(local_b0 + 1);
          goto LAB_001096d8;
        }
        uVar48 = uVar29;
        if (local_b0 != (undefined8 *)0x0) goto LAB_001096d8;
      }
      local_b0 = puVar17;
      local_a8 = uVar48;
      uStack_a0 = uVar46;
      if (uVar48 < uVar46) goto LAB_0010953c;
LAB_00109701:
      local_a8 = uVar46;
joined_r0x0010970c:
      local_a8 = uVar46;
      if (uVar29 <= uVar43) goto LAB_00109210;
    }
    else {
      if (local_a8 < uVar46) {
LAB_0010953c:
        puVar23 = (undefined8 *)((long)local_b0 + uVar46 * 0xc);
        puVar17 = (undefined8 *)((long)local_b0 + local_a8 * 0xc);
        if (puVar23 == puVar17) goto LAB_00109701;
        do {
          *puVar17 = 0;
          puVar25 = (undefined8 *)((long)puVar17 + 0xc);
          *(undefined4 *)(puVar17 + 1) = 0;
          puVar17 = puVar25;
        } while (puVar23 != puVar25);
        local_a8 = uVar46;
        goto joined_r0x0010970c;
      }
      local_a8 = uVar46;
      if (uVar29 <= uVar43) goto LAB_00109210;
      if (uVar46 == 0) {
        if (local_b0 == (undefined8 *)0x0) {
          local_a8 = uVar46;
          uStack_a0 = 0;
          lVar34 = *(long *)(param_1 + 8);
          lVar44 = *(long *)param_1;
          goto LAB_0010817c;
        }
        free(local_b0);
        local_b0 = (undefined8 *)0x0;
        uStack_a0 = local_a8;
        goto LAB_0010816d;
      }
    }
    puVar23 = local_b0;
    sVar31 = uVar46 * 0xc;
    local_a8 = uVar46;
    puVar17 = (undefined8 *)malloc(sVar31);
    if ((long)sVar31 < 0xd) {
      if (sVar31 == 0xc) {
        *puVar17 = *puVar23;
        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar23 + 1);
        goto LAB_00109731;
      }
      if (puVar23 != (undefined8 *)0x0) goto LAB_00109731;
    }
    else {
      memmove(puVar17,puVar23,sVar31);
LAB_00109731:
      free(puVar23);
    }
    local_b0 = puVar17;
    uStack_a0 = local_a8;
  }
  else {
    local_178 = (undefined8 *)malloc(lVar34 * 0xc);
    puVar23 = local_178;
    do {
      *puVar23 = 0;
      puVar17 = (undefined8 *)((long)puVar23 + 0xc);
      *(undefined4 *)(puVar23 + 1) = 0;
      puVar23 = puVar17;
    } while ((undefined8 *)((long)local_178 + lVar34 * 0xc) != puVar17);
    local_170._8_8_ = lVar34;
    local_170._0_8_ = lVar34;
    if (uVar46 != 0) goto LAB_00109154;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = local_140._8_8_;
    local_140 = auVar72 << 0x40;
LAB_0010929c:
    sVar31 = lVar34 * 0x20;
    local_130 = (undefined1 (*) [16])malloc(sVar31);
    if (sVar31 != 0) {
      uVar29 = 0;
      pauVar24 = local_130;
      do {
        uVar29 = uVar29 + 1;
        *pauVar24 = (undefined1  [16])0x0;
        pauVar24[1] = (undefined1  [16])0x0;
        pauVar24 = pauVar24 + 2;
      } while (uVar29 < (sVar31 - 0x20 >> 5) + 1);
    }
    local_128._8_8_ = lVar34;
    local_128._0_8_ = lVar34;
    if (uVar46 == 0) goto LAB_00108153;
LAB_001091b2:
    local_c8 = malloc(uVar46 * 0x10);
    uVar29 = 0;
    do {
      uVar48 = uVar29 + 1;
      *(undefined1 (*) [16])((long)local_c8 + uVar29 * 0x10) = (undefined1  [16])0x0;
      uVar29 = uVar48;
    } while (uVar48 < (uVar46 * 0x10 - 0x10 >> 4) + 1);
    local_c0._8_8_ = uVar46;
    local_c0._0_8_ = uVar46;
    if (0 < local_32c) goto LAB_0010934a;
  }
LAB_00109210:
  lVar34 = *(long *)(param_1 + 8);
  lVar44 = *(long *)param_1;
LAB_0010817c:
  lVar34 = lVar34 - lVar44 >> 4;
  if (lVar34 != 0) {
    local_380 = 0;
    lVar36 = local_278._0_8_;
    do {
      lVar38 = (long)(int)local_380;
      lVar37 = lVar38 * 4;
      piVar35 = (int *)(local_298._0_8_ + lVar37);
      plVar33 = (long *)(lVar44 + lVar38 * 0x10);
      iVar40 = *piVar35;
      lVar16 = (long)iVar40;
      lVar44 = *plVar33;
      lVar41 = *(long *)(lVar44 + 0x18);
      pauVar24 = local_130 + lVar16 * 2;
      puVar23 = *(undefined8 **)(lVar41 + 0xa8);
      sVar31 = *(long *)(lVar41 + 0xb0) * 0x20;
      if ((long)sVar31 < 0x21) {
        if (sVar31 == 0x20) {
          uVar2 = puVar23[1];
          *(undefined8 *)*pauVar24 = *puVar23;
          *(undefined8 *)(*pauVar24 + 8) = uVar2;
          uVar2 = puVar23[3];
          *(undefined8 *)pauVar24[1] = puVar23[2];
          *(undefined8 *)(pauVar24[1] + 8) = uVar2;
        }
      }
      else {
        memmove(pauVar24,puVar23,sVar31);
        lVar44 = *plVar33;
        iVar40 = *piVar35;
        lVar16 = (long)iVar40;
        lVar41 = *(long *)(lVar44 + 0x18);
      }
      puVar15 = local_110;
      puVar14 = local_178;
      piVar45 = (int *)(lVar36 + lVar37);
      uVar43 = *(ulong *)(lVar41 + 0x68);
      puVar23 = *(undefined8 **)(lVar41 + 0x60);
      piVar42 = (int *)(local_2b8._0_8_ + lVar37);
      iVar3 = *piVar42;
      puVar25 = (undefined8 *)((long)local_178 + lVar16 * 0xc);
      for (puVar17 = puVar23; puVar17 != (undefined8 *)((long)puVar23 + uVar43 * 0xc);
          puVar17 = (undefined8 *)((long)puVar17 + 0xc)) {
        uVar2 = *puVar17;
        *(int *)(puVar25 + 1) = *(int *)(puVar17 + 1) + iVar40;
        *puVar25 = CONCAT44((int)((ulong)uVar2 >> 0x20) + iVar3,(int)uVar2 + iVar3);
        puVar25 = (undefined8 *)((long)puVar25 + 0xc);
      }
      if (0 < local_32c) {
        iVar40 = *(int *)(lVar41 + 0xc4);
        puVar17 = (undefined8 *)((long)local_b0 + (long)*piVar45 * 0xc);
        iVar3 = *(int *)(lVar37 + local_258._0_8_);
        if (iVar40 == 0) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar43;
          puVar25 = (undefined8 *)
                    ((long)puVar17 +
                    ((SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar6,8) & 0xfffffffffffffffe) +
                    uVar43 / 3) * 4);
          for (; puVar17 != puVar25; puVar17 = (undefined8 *)((long)puVar17 + 0xc)) {
            *(int *)(puVar17 + 1) = iVar3;
            *puVar17 = CONCAT44(iVar3,iVar3);
          }
        }
        else {
          puVar22 = *(undefined8 **)(lVar41 + 0x128);
          puVar25 = (undefined8 *)((long)puVar22 + *(long *)(lVar41 + 0x130) * 0xc);
          for (; puVar22 != puVar25; puVar22 = (undefined8 *)((long)puVar22 + 0xc)) {
            uVar2 = *puVar22;
            *(int *)(puVar17 + 1) = *(int *)(puVar22 + 1) + iVar3;
            *puVar17 = CONCAT44((int)((ulong)uVar2 >> 0x20) + iVar3,(int)uVar2 + iVar3);
            puVar17 = (undefined8 *)((long)puVar17 + 0xc);
          }
          if (0 < iVar40) {
            uVar46 = (ulong)iVar40;
            iVar40 = *(int *)(lVar37 + local_258._0_8_);
            lVar37 = *(long *)(lVar41 + 0xd0);
            lVar36 = lVar37 * 8;
            lVar16 = *(long *)(lVar41 + 200) + lVar36;
            do {
              lVar39 = lVar16 - lVar36;
              uVar29 = (lVar36 >> 3) + (uVar46 - 1);
              lVar11 = (lVar37 + local_32c * iVar40) * 8 - lVar36;
              lVar36 = lVar36 + -8;
              copy<manifold::StridedRange<double_const*>::StridedRangeIter,manifold::StridedRange<double*>::StridedRangeIter>
                        (lVar39,uVar46,lVar39 + (uVar29 - uVar29 % uVar46) * 8,uVar46,
                         (long)puVar15 + lVar11,(long)local_32c);
            } while ((lVar37 - uVar46) * 8 != lVar36);
          }
        }
      }
      dVar60 = *(double *)(lVar44 + 0x28);
      if (dVar60 == _LC10) {
        dVar53 = *(double *)(lVar44 + 0x30);
        if ((dVar53 == 0.0) && (dVar53 = *(double *)(lVar44 + 0x38), dVar53 == 0.0)) {
          if (*(double *)(lVar44 + 0x40) != 0.0) goto LAB_001087e8;
          dVar71 = *(double *)(lVar44 + 0x48);
          dVar53 = dVar71;
          dVar61 = dVar60;
          if (dVar71 == _LC10) {
            if (*(double *)(lVar44 + 0x50) == 0.0) {
              if (*(double *)(lVar44 + 0x58) != 0.0) goto LAB_001087e8;
              dVar53 = *(double *)(lVar44 + 0x60);
              if (dVar53 == 0.0) {
                dVar53 = *(double *)(lVar44 + 0x68);
                dVar61 = dVar71;
                if (dVar53 == _LC10) {
                  if (*(double *)(lVar44 + 0x70) == 0.0) {
                    dVar53 = *(double *)(lVar44 + 0x78);
                    if (dVar53 == 0.0) {
                      dVar53 = *(double *)(lVar44 + 0x80);
                    }
                    goto LAB_00108f00;
                  }
                  goto LAB_001087e8;
                }
              }
              else {
                dVar61 = 0.0;
              }
            }
            else {
              dVar53 = *(double *)(lVar44 + 0x50);
              dVar61 = 0.0;
            }
          }
        }
        else {
LAB_00108f00:
          dVar61 = 0.0;
        }
        __src = *(double **)(lVar41 + 0x48);
        sVar31 = *(long *)(lVar41 + 0x50) * 0x18;
        pdVar28 = (double *)((long)local_190 + (long)*piVar42 * 0x18);
        if (dVar61 != dVar53) goto LAB_0010880f;
        if ((long)sVar31 < 0x19) {
          if (sVar31 == 0x18) {
            dVar60 = __src[1];
            *pdVar28 = *__src;
            pdVar28[1] = dVar60;
            pdVar28[2] = __src[2];
          }
        }
        else {
          memmove(pdVar28,__src,sVar31);
          lVar41 = *(long *)(*plVar33 + 0x18);
        }
        puVar17 = *(undefined8 **)(lVar41 + 0x90);
        puVar23 = (undefined8 *)((long)local_148 + (long)*piVar45 * 0x18);
        sVar31 = *(long *)(lVar41 + 0x98) * 0x18;
        if ((long)sVar31 < 0x19) {
          if (sVar31 == 0x18) {
            uVar2 = puVar17[1];
            *puVar23 = *puVar17;
            puVar23[1] = uVar2;
            puVar23[2] = puVar17[2];
          }
        }
        else {
          memmove(puVar23,puVar17,sVar31);
        }
      }
      else {
LAB_001087e8:
        __src = *(double **)(lVar41 + 0x48);
        sVar31 = *(long *)(lVar41 + 0x50) * 0x18;
        pdVar28 = (double *)((long)local_190 + (long)*piVar42 * 0x18);
LAB_0010880f:
        local_208 = *(double *)(lVar44 + 0x58);
        dStack_200 = *(double *)(lVar44 + 0x60);
        dVar54 = *(double *)(lVar44 + 0x60);
        dVar64 = *(double *)(lVar44 + 0x68);
        dVar53 = *(double *)(lVar44 + 0x68);
        dVar71 = *(double *)(lVar44 + 0x50);
        dVar61 = *(double *)(lVar44 + 0x38);
        dVar67 = *(double *)(lVar44 + 0x40);
        dVar56 = *(double *)(lVar44 + 0x48);
        local_238 = *(double *)(lVar44 + 0x28);
        dStack_230 = *(double *)(lVar44 + 0x30);
        local_218 = *(undefined8 *)(lVar44 + 0x48);
        uStack_210 = *(undefined8 *)(lVar44 + 0x50);
        lVar36 = ((long)sVar31 >> 3) * -0x5555555555555555;
        dVar57 = *(double *)(lVar44 + 0x30);
        local_228 = *(undefined8 *)(lVar44 + 0x38);
        uStack_220 = *(undefined8 *)(lVar44 + 0x40);
        local_1e8 = *(double *)(lVar44 + 0x78);
        dStack_1e0 = *(double *)(lVar44 + 0x80);
        local_1f8 = *(undefined8 *)(lVar44 + 0x68);
        dStack_1f0 = *(double *)(lVar44 + 0x70);
        dVar51 = *(double *)(lVar44 + 0x58);
        dVar62 = *(double *)(lVar44 + 0x48);
        dVar52 = (dVar53 * *(double *)(lVar44 + 0x48) - *(double *)(lVar44 + 0x60) * dVar71) *
                 dVar60 + (*(double *)(lVar44 + 0x60) * dVar61 - dVar53 * *(double *)(lVar44 + 0x30)
                          ) * dVar67 +
                 (*(double *)(lVar44 + 0x30) * dVar71 - *(double *)(lVar44 + 0x48) * dVar61) *
                 dVar51;
        auVar68._8_8_ = dVar52;
        auVar68._0_8_ = dVar52;
        auVar69._0_8_ = *(double *)(lVar44 + 0x48) * dVar64 - *(double *)(lVar44 + 0x50) * dVar54;
        auVar69._8_8_ = *(double *)(lVar44 + 0x50) * *(double *)(lVar44 + 0x58) - dVar67 * dVar64;
        auVar70 = divpd(auVar69,auVar68);
        auVar63._0_8_ = dVar54 * dVar61 - dVar64 * *(double *)(lVar44 + 0x30);
        auVar63._8_8_ = dVar64 * dVar60 - *(double *)(lVar44 + 0x58) * *(double *)(lVar44 + 0x38);
        pdVar21 = *(double **)(lVar41 + 0x90);
        auVar65._0_8_ =
             *(double *)(lVar44 + 0x50) * *(double *)(lVar44 + 0x30) -
             *(double *)(lVar44 + 0x48) * dVar61;
        auVar65._8_8_ = dVar67 * *(double *)(lVar44 + 0x38) - *(double *)(lVar44 + 0x50) * dVar60;
        auVar72 = divpd(auVar63,auVar68);
        auVar66 = divpd(auVar65,auVar68);
        if (0 < (long)sVar31) {
          do {
            dVar7 = *__src;
            dVar8 = __src[1];
            dVar64 = __src[2];
            __src = __src + 3;
            *pdVar28 = dVar64 * local_208 + dVar7 * local_238 + dVar8 * dVar67 + dStack_1f0;
            pdVar28[1] = dVar64 * dStack_200 + dVar7 * dStack_230 + dVar8 * dVar56 + local_1e8;
            pdVar28[2] = dVar7 * dVar61 + dVar8 * dVar71 + dVar64 * dVar53 + dStack_1e0;
            lVar36 = lVar36 + -1;
            pdVar28 = pdVar28 + 3;
          } while (lVar36 != 0);
        }
        lVar16 = (long)*piVar45;
        pauVar24 = (undefined1 (*) [16])((long)local_148 + lVar16 * 0x18);
        lVar36 = *(long *)(lVar41 + 0x98) * 0x18;
        lVar37 = (lVar36 >> 3) * -0x5555555555555555;
        if (0 < lVar36) {
          do {
            dVar53 = pdVar21[2];
            auVar58._0_8_ =
                 *pdVar21 * auVar70._0_8_ + pdVar21[1] * auVar72._0_8_ + dVar53 * auVar66._0_8_;
            auVar58._8_8_ =
                 *pdVar21 * auVar70._8_8_ + pdVar21[1] * auVar72._8_8_ + dVar53 * auVar66._8_8_;
            dVar71 = *pdVar21 * ((dVar54 * dVar67 - dVar51 * dVar62) / dVar52) +
                     pdVar21[1] * ((dVar51 * dVar57 - dVar54 * dVar60) / dVar52) +
                     dVar53 * ((dVar62 * dVar60 - dVar57 * dVar67) / dVar52);
            dVar53 = SQRT(dVar71 * dVar71 +
                          auVar58._0_8_ * auVar58._0_8_ + 0.0 + auVar58._8_8_ * auVar58._8_8_);
            dVar71 = dVar71 / dVar53;
            auVar55._8_8_ = dVar53;
            auVar55._0_8_ = dVar53;
            auVar59 = divpd(auVar58,auVar55);
            if (NAN(auVar59._0_8_)) {
              auVar59 = (undefined1  [16])0x0;
              dVar71 = 0.0;
            }
            *pauVar24 = auVar59;
            pdVar21 = pdVar21 + 3;
            *(double *)pauVar24[1] = dVar71;
            lVar37 = lVar37 + -1;
            pauVar24 = (undefined1 (*) [16])(pauVar24[1] + 8);
          } while (lVar37 != 0);
        }
        dVar61 = *(double *)(lVar44 + 0x40);
        dVar57 = *(double *)(lVar44 + 0x48);
        dVar51 = *(double *)(lVar44 + 0x58);
        dVar62 = *(double *)(lVar44 + 0x60);
        lVar37 = 0;
        dVar60 = *(double *)(lVar44 + 0x68);
        dVar53 = *(double *)(lVar44 + 0x38);
        lVar36 = *(long *)(lVar41 + 0xa8);
        dVar71 = *(double *)(lVar44 + 0x50);
        iVar40 = *piVar35;
        dVar54 = *(double *)(lVar44 + 0x28);
        dVar64 = *(double *)(lVar44 + 0x30);
        lVar44 = *(long *)(lVar41 + 0xb0);
        dVar67 = (dVar60 * dVar57 - dVar71 * dVar62) * dVar54 +
                 (dVar71 * dVar51 - dVar60 * dVar61) * dVar64 +
                 (dVar61 * dVar62 - dVar57 * dVar51) * dVar53;
        if (lVar44 != 0) {
          do {
            iVar30 = (int)lVar37;
            iVar3 = iVar30;
            if (dVar67 < 0.0) {
              iVar3 = *(int *)((long)puVar23 + (long)(((iVar30 / 3) * 6 - iVar30) + 2) * 0xc + 8);
            }
            lVar37 = lVar37 + 1;
            pdVar28 = (double *)((long)iVar3 * 0x20 + lVar36);
            dVar56 = *pdVar28;
            dVar52 = pdVar28[1];
            dVar7 = pdVar28[2];
            pauVar24 = local_130 + (long)(iVar30 + iVar40) * 2;
            *(double *)(pauVar24[1] + 8) = pdVar28[3];
            *(double *)*pauVar24 = dVar56 * dVar54 + dVar52 * dVar61 + dVar7 * dVar51;
            *(double *)(*pauVar24 + 8) = dVar56 * dVar64 + dVar52 * dVar57 + dVar7 * dVar62;
            *(double *)pauVar24[1] = dVar56 * dVar53 + dVar52 * dVar71 + dVar7 * dVar60;
          } while (lVar44 != lVar37);
        }
        if ((dVar67 < 0.0) && (lVar44 = uVar43 / 3 + lVar16, lVar16 != lVar44)) {
          do {
            local_48 = 2;
            iVar40 = (int)lVar16 * 3;
            puVar23 = (undefined8 *)((long)puVar14 + (long)iVar40 * 0xc);
            puVar17 = (undefined8 *)((long)puVar14 + (long)(iVar40 + 2) * 0xc);
            uVar2 = *puVar23;
            uVar4 = *(undefined4 *)(puVar23 + 1);
            *puVar23 = *puVar17;
            *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar17 + 1);
            *puVar17 = uVar2;
            *(undefined4 *)(puVar17 + 1) = uVar4;
            local_50 = _LC12;
            piVar35 = (int *)&local_50;
            do {
              iVar3 = *piVar35;
              piVar35 = piVar35 + 1;
              puVar1 = (ulong *)((long)puVar14 + (long)(iVar3 + iVar40) * 0xc);
              *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
              *(int *)(puVar1 + 1) = (((int)puVar1[1] / 3) * 6 - (int)puVar1[1]) + 2;
            } while (&local_44 != piVar35);
            lVar16 = lVar16 + 1;
          } while (lVar44 != lVar16);
        }
      }
      iVar40 = (int)Manifold::Impl::meshIDCounter_ * (int)local_380;
      puVar17 = (undefined8 *)((long)*(int *)(local_278._0_8_ + lVar38 * 4) * 0x10 + (long)local_c8)
      ;
      uVar43 = *(ulong *)(*(long *)(*plVar33 + 0x18) + 0x118);
      piVar35 = *(int **)(*(long *)(*plVar33 + 0x18) + 0x110);
      puVar23 = puVar17;
      if ((uVar43 & 0xfffffffffffffff) != 0) {
        do {
          puVar25 = puVar23 + 2;
          uVar2 = *(undefined8 *)(piVar35 + 2);
          *puVar23 = CONCAT44(piVar35[1],*piVar35 + iVar40);
          puVar23[1] = uVar2;
          piVar35 = piVar35 + 4;
          puVar23 = puVar25;
        } while (puVar25 != puVar17 + uVar43 * 2);
      }
      local_380 = local_380 + 1;
      lVar44 = *(long *)param_1;
      lVar36 = local_278._0_8_;
    } while (lVar34 != local_380);
  }
  local_378 = 0;
  if (*(long *)(param_1 + 8) != lVar44) {
    do {
      iVar40 = (int)Manifold::Impl::meshIDCounter_ * (int)local_378;
      lVar34 = *(long *)(*(long *)(lVar44 + local_378 * 0x10) + 0x18);
      for (p_Var20 = *(_Rb_tree_node_base **)(lVar34 + 0xf8);
          (_Rb_tree_node_base *)(lVar34 + 0xe8) != p_Var20;
          p_Var20 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var20)) {
        uVar32 = *(int *)(p_Var20 + 0x20) + iVar40;
        p_Var19 = local_e8;
        p_Var47 = (_Rb_tree_node_base *)local_f0;
        if (local_e8 == (_Rb_tree_node_base *)0x0) {
LAB_0010856f:
          p_Var18 = (_Rb_tree_node_base *)operator_new(0x98);
          *(uint *)(p_Var18 + 0x20) = uVar32;
          p_Var19 = p_Var18 + 0x28;
          for (lVar44 = 0xe; lVar44 != 0; lVar44 = lVar44 + -1) {
            *(undefined8 *)p_Var19 = 0;
            p_Var19 = p_Var19 + (ulong)bVar50 * -0x10 + 8;
          }
          *(undefined4 *)(p_Var18 + 0x28) = 0xffffffff;
          *(undefined2 *)(p_Var18 + 0x36) = 0x3ff0;
          *(undefined2 *)(p_Var18 + 0x56) = 0x3ff0;
          *(undefined2 *)(p_Var18 + 0x76) = 0x3ff0;
          if (p_Var47 == (_Rb_tree_node_base *)local_f0) {
            if ((local_d0 == 0) || (p_Var19 = local_d8, (int)uVar32 <= *(int *)(local_d8 + 0x20))) {
LAB_00108e90:
              auVar72 = std::
                        _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
                        ::_M_get_insert_unique_pos(local_f8,(int *)(ulong)uVar32);
              p_Var19 = auVar72._8_8_;
              p_Var47 = auVar72._0_8_;
              if (p_Var19 == (_Rb_tree_node_base *)0x0) {
LAB_00108eab:
                operator_delete(p_Var18,0x98);
                goto LAB_0010860b;
              }
              bVar49 = p_Var47 != (_Rb_tree_node_base *)0x0;
            }
            else {
LAB_00108f41:
              bVar49 = false;
            }
LAB_00108f43:
            p_Var47 = p_Var19;
            if ((p_Var19 == (_Rb_tree_node_base *)local_f0) || (bVar49)) goto LAB_001085ec;
LAB_00108f54:
            bVar49 = (int)uVar32 < *(int *)(p_Var47 + 0x20);
          }
          else {
            if (*(int *)(p_Var47 + 0x20) <= (int)uVar32) {
              if ((int)uVar32 <= *(int *)(p_Var47 + 0x20)) goto LAB_00108eab;
              if (local_d8 != p_Var47) {
                p_Var19 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var47);
                if (*(int *)(p_Var19 + 0x20) <= (int)uVar32) goto LAB_00108e90;
                if (*(long *)(p_Var47 + 0x18) != 0) {
                  bVar49 = true;
                  goto LAB_00108f43;
                }
              }
              goto LAB_00108f54;
            }
            if (local_e0 != p_Var47) {
              p_Var19 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var47);
              if ((int)uVar32 <= *(int *)(p_Var19 + 0x20)) goto LAB_00108e90;
              if (*(long *)(p_Var19 + 0x18) == 0) goto LAB_00108f41;
            }
LAB_001085ec:
            bVar49 = true;
          }
          std::_Rb_tree_insert_and_rebalance(bVar49,p_Var18,p_Var47,(_Rb_tree_node_base *)local_f0);
          local_d0 = local_d0 + 1;
          p_Var47 = p_Var18;
        }
        else {
          do {
            while( true ) {
              p_Var18 = p_Var19;
              if (*(int *)(p_Var18 + 0x20) < (int)uVar32) break;
              p_Var19 = *(_Rb_tree_node_base **)(p_Var18 + 0x10);
              p_Var47 = p_Var18;
              if (*(_Rb_tree_node_base **)(p_Var18 + 0x10) == (_Rb_tree_node_base *)0x0)
              goto LAB_00108560;
            }
            p_Var19 = *(_Rb_tree_node_base **)(p_Var18 + 0x18);
          } while (*(_Rb_tree_node_base **)(p_Var18 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00108560:
          if ((p_Var47 == (_Rb_tree_node_base *)local_f0) ||
             ((int)uVar32 < *(int *)(p_Var47 + 0x20))) goto LAB_0010856f;
        }
LAB_0010860b:
        uVar2 = *(undefined8 *)(p_Var20 + 0x30);
        *(undefined8 *)(p_Var47 + 0x28) = *(undefined8 *)(p_Var20 + 0x28);
        *(undefined8 *)(p_Var47 + 0x30) = uVar2;
        uVar2 = *(undefined8 *)(p_Var20 + 0x40);
        *(undefined8 *)(p_Var47 + 0x38) = *(undefined8 *)(p_Var20 + 0x38);
        *(undefined8 *)(p_Var47 + 0x40) = uVar2;
        uVar2 = *(undefined8 *)(p_Var20 + 0x50);
        *(undefined8 *)(p_Var47 + 0x48) = *(undefined8 *)(p_Var20 + 0x48);
        *(undefined8 *)(p_Var47 + 0x50) = uVar2;
        uVar2 = *(undefined8 *)(p_Var20 + 0x60);
        *(undefined8 *)(p_Var47 + 0x58) = *(undefined8 *)(p_Var20 + 0x58);
        *(undefined8 *)(p_Var47 + 0x60) = uVar2;
        uVar2 = *(undefined8 *)(p_Var20 + 0x70);
        *(undefined8 *)(p_Var47 + 0x68) = *(undefined8 *)(p_Var20 + 0x68);
        *(undefined8 *)(p_Var47 + 0x70) = uVar2;
        uVar2 = *(undefined8 *)(p_Var20 + 0x80);
        *(undefined8 *)(p_Var47 + 0x78) = *(undefined8 *)(p_Var20 + 0x78);
        *(undefined8 *)(p_Var47 + 0x80) = uVar2;
        uVar2 = *(undefined8 *)(p_Var20 + 0x89);
        *(undefined8 *)(p_Var47 + 0x81) = *(undefined8 *)(p_Var20 + 0x81);
        *(undefined8 *)(p_Var47 + 0x89) = uVar2;
      }
      local_378 = local_378 + 1;
      lVar44 = *(long *)param_1;
    } while (local_378 < (ulong)(*(long *)(param_1 + 8) - lVar44 >> 4));
  }
  manifold::Manifold::Impl::SimplifyTopology();
  manifold::Manifold::Impl::Finish();
  manifold::Manifold::Impl::IncrementMeshIDs();
  ImplToLeaf((manifold *)this,local_320);
  if (local_68 != (void *)0x0) {
    free(local_68);
  }
  if (local_80 != (void *)0x0) {
    free(local_80);
  }
  if (local_98 != (void *)0x0) {
    free(local_98);
  }
  if (local_b0 != (undefined8 *)0x0) {
    free(local_b0);
  }
  p_Var20 = local_e8;
  if (local_c8 != (void *)0x0) {
    free(local_c8);
    p_Var20 = local_e8;
  }
  while (p_Var20 != (_Rb_tree_node_base *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)(p_Var20 + 0x18));
    p_Var19 = *(_Rb_tree_node_base **)(p_Var20 + 0x10);
    operator_delete(p_Var20,0x98);
    p_Var20 = p_Var19;
  }
  if (local_110 != (undefined8 *)0x0) {
    free(local_110);
  }
  if (local_130 != (undefined1 (*) [16])0x0) {
    free(local_130);
  }
  if (local_148 != (undefined1 (*) [16])0x0) {
    free(local_148);
  }
  if (local_160 != (void *)0x0) {
    free(local_160);
  }
  if (local_178 != (undefined8 *)0x0) {
    free(local_178);
  }
  piVar27 = local_248;
  piVar35 = local_2a8;
  piVar45 = local_288;
  piVar42 = local_268;
  if (local_190 != (undefined1 (*) [16])0x0) {
    free(local_190);
    piVar27 = local_248;
    piVar35 = local_2a8;
    piVar45 = local_288;
    piVar42 = local_268;
  }
LAB_00107ee8:
  if ((void *)local_258._0_8_ != (void *)0x0) {
    operator_delete((void *)local_258._0_8_,(long)piVar27 - local_258._0_8_);
  }
  if ((void *)local_278._0_8_ != (void *)0x0) {
    operator_delete((void *)local_278._0_8_,(long)piVar42 - local_278._0_8_);
  }
  if ((void *)local_298._0_8_ != (void *)0x0) {
    operator_delete((void *)local_298._0_8_,(long)piVar45 - local_298._0_8_);
  }
  if ((void *)local_2b8._0_8_ != (void *)0x0) {
    operator_delete((void *)local_2b8._0_8_,(long)piVar35 - local_2b8._0_8_);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::BatchUnion(std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> > >&) */

manifold * __thiscall manifold::BatchUnion(manifold *this,vector *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Vec *pVVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  Vec *pVVar18;
  long *plVar19;
  long lVar20;
  void *pvVar21;
  size_t sVar22;
  size_t __size;
  ulong uVar23;
  Vec *pVVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  long local_120;
  undefined8 local_c8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_c0;
  undefined8 *local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [16];
  long *local_88;
  undefined1 local_78 [16];
  undefined8 *local_68;
  undefined1 local_58 [16];
  undefined8 *local_48;
  long local_40;
  
  puVar16 = *(undefined8 **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = *(long *)(param_1 + 8);
  uVar15 = lVar12 - (long)puVar16;
  if (0x10 < uVar15) {
    do {
      uVar28 = (long)uVar15 >> 4;
      if (uVar15 < 0x3e81) {
        local_b8 = (undefined8 *)0x0;
        local_120 = 0;
        local_b0._0_16_ = (undefined1  [16])0x0;
        if (uVar28 != 0) {
          uVar15 = 0;
          goto LAB_001098e2;
        }
      }
      else {
        uVar15 = uVar28 - 1000;
        uVar28 = 1000;
        local_120 = uVar15 * 0x10;
LAB_001098e2:
        local_b0._0_16_ = (undefined1  [16])0x0;
        local_b8 = (undefined8 *)malloc(uVar28 * 0x30);
        local_b0._8_8_ = uVar28;
        puVar16 = *(undefined8 **)param_1;
        lVar12 = *(long *)(param_1 + 8);
        uVar28 = uVar15;
      }
      if (uVar28 < (ulong)(lVar12 - (long)puVar16 >> 4)) {
        pVVar18 = (Vec *)0x0;
        uVar15 = uVar28;
        do {
          sVar22 = (long)pVVar18 * 0x30;
          CsgLeafNode::GetImpl();
          puVar16 = local_b8;
          if (pVVar18 < (ulong)local_b0._8_8_) {
            uVar14 = *(undefined8 *)(local_58._0_8_ + 8);
            uVar17 = *(undefined8 *)(local_58._0_8_ + 0x10);
            uVar4 = *(undefined8 *)(local_58._0_8_ + 0x18);
            uVar5 = *(undefined8 *)(local_58._0_8_ + 0x20);
            uVar6 = *(undefined8 *)(local_58._0_8_ + 0x28);
            local_b8[(long)pVVar18 * 6] = *(undefined8 *)local_58._0_8_;
            (local_b8 + (long)pVVar18 * 6)[1] = uVar14;
            local_b8[(long)pVVar18 * 6 + 2] = uVar17;
            (local_b8 + (long)pVVar18 * 6 + 2)[1] = uVar4;
            local_b8[(long)pVVar18 * 6 + 4] = uVar5;
            (local_b8 + (long)pVVar18 * 6 + 4)[1] = uVar6;
          }
          else {
            uVar6 = *(undefined8 *)local_58._0_8_;
            uVar7 = *(undefined8 *)(local_58._0_8_ + 8);
            uVar4 = *(undefined8 *)(local_58._0_8_ + 0x10);
            uVar5 = *(undefined8 *)(local_58._0_8_ + 0x18);
            uVar14 = *(undefined8 *)(local_58._0_8_ + 0x20);
            uVar17 = *(undefined8 *)(local_58._0_8_ + 0x28);
            if ((Vec *)local_b0._8_8_ == (Vec *)0x0) {
              __size = 0x1800;
              pVVar24 = (Vec *)0x80;
LAB_00109a5b:
              puVar13 = (undefined8 *)malloc(__size);
              pVVar9 = pVVar24;
              if (pVVar18 == (Vec *)0x0) {
LAB_00109aa1:
                if (puVar16 == (undefined8 *)0x0) goto LAB_00109a2b;
              }
              else if ((long)sVar22 < 0x31) {
                if (sVar22 != 0x30) goto LAB_00109aa1;
                uVar8 = puVar16[1];
                *puVar13 = *puVar16;
                puVar13[1] = uVar8;
                uVar8 = puVar16[3];
                puVar13[2] = puVar16[2];
                puVar13[3] = uVar8;
                uVar8 = puVar16[5];
                puVar13[4] = puVar16[4];
                puVar13[5] = uVar8;
              }
              else {
                puVar13 = (undefined8 *)memmove(puVar13,puVar16,sVar22);
              }
              free(puVar16);
            }
            else {
              pVVar24 = (Vec *)(local_b0._8_8_ * 2);
              __size = local_b0._8_8_ * 0x60;
              puVar13 = local_b8;
              pVVar9 = (Vec *)local_b0._8_8_;
              if ((ulong)local_b0._8_8_ < pVVar24) goto LAB_00109a5b;
            }
LAB_00109a2b:
            local_b0._8_8_ = pVVar9;
            local_b8 = puVar13;
            puVar16 = local_b8 + (long)pVVar18 * 6;
            *puVar16 = uVar6;
            puVar16[1] = uVar7;
            puVar16[2] = uVar4;
            puVar16[3] = uVar5;
            puVar16[4] = uVar14;
            puVar16[5] = uVar17;
          }
          local_b0._0_8_ = pVVar18 + 1;
          uVar14 = local_58._8_8_;
          if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_ !=
              (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_58._8_8_ + 8);
            if (*(long *)(local_58._8_8_ + 8) == 0x100000001) {
              *(undefined8 *)(local_58._8_8_ + 8) = 0;
              (**(code **)(*(long *)local_58._8_8_ + 0x10))(local_58._8_8_);
              (**(code **)(*(long *)uVar14 + 0x18))(uVar14);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar11 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar11 = *(int *)(local_58._8_8_ + 8);
                *(int *)(local_58._8_8_ + 8) = iVar11 + -1;
              }
              if (iVar11 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_);
              }
            }
          }
          uVar15 = uVar15 + 1;
          uVar14 = local_b0._0_8_;
          pVVar18 = (Vec *)local_b0._0_8_;
        } while (uVar15 < (ulong)(*(long *)(param_1 + 8) - *(long *)param_1 >> 4));
        local_88 = (long *)0x0;
        local_98 = (undefined1  [16])0x0;
        if ((Vec *)local_b0._0_8_ == (Vec *)0x0) goto LAB_0010a59f;
        plVar26 = (long *)0x0;
        plVar27 = (long *)0x0;
        pVVar18 = (Vec *)0x0;
        do {
          lVar12 = ((long)plVar27 - (long)plVar26 >> 3) * -0x5555555555555555;
          plVar19 = plVar26;
          if (0 < lVar12 >> 2) {
            plVar25 = plVar26;
            do {
              cVar10 = BatchUnion(std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>&)
                       ::{lambda(manifold::Vec<unsigned_long>const&)#1}::operator()
                                 ((_lambda_manifold__Vec<unsigned_long>const___1_ *)&local_b8,
                                  pVVar18);
              plVar19 = plVar25;
              if (cVar10 != '\0') goto joined_r0x0010a096;
              plVar19 = plVar25 + 3;
              cVar10 = BatchUnion(std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>&)
                       ::{lambda(manifold::Vec<unsigned_long>const&)#1}::operator()
                                 ((_lambda_manifold__Vec<unsigned_long>const___1_ *)&local_b8,
                                  pVVar18);
              if (cVar10 != '\0') goto joined_r0x0010a096;
              plVar19 = plVar25 + 6;
              cVar10 = BatchUnion(std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>&)
                       ::{lambda(manifold::Vec<unsigned_long>const&)#1}::operator()
                                 ((_lambda_manifold__Vec<unsigned_long>const___1_ *)&local_b8,
                                  pVVar18);
              if (cVar10 != '\0') goto joined_r0x0010a096;
              plVar19 = plVar25 + 9;
              cVar10 = BatchUnion(std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>&)
                       ::{lambda(manifold::Vec<unsigned_long>const&)#1}::operator()
                                 ((_lambda_manifold__Vec<unsigned_long>const___1_ *)&local_b8,
                                  pVVar18);
              if (cVar10 != '\0') goto joined_r0x0010a096;
              plVar25 = plVar25 + 0xc;
            } while (plVar26 + (lVar12 >> 2) * 0xc != plVar25);
            lVar12 = ((long)plVar27 - (long)plVar25 >> 3) * -0x5555555555555555;
            plVar19 = plVar25;
          }
          if (lVar12 == 2) {
LAB_0010a391:
            cVar10 = BatchUnion(std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>&)
                     ::{lambda(manifold::Vec<unsigned_long>const&)#1}::operator()
                               ((_lambda_manifold__Vec<unsigned_long>const___1_ *)&local_b8,pVVar18)
            ;
            if (cVar10 == '\0') {
              plVar19 = plVar19 + 3;
LAB_0010a26e:
              cVar10 = BatchUnion(std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>&)
                       ::{lambda(manifold::Vec<unsigned_long>const&)#1}::operator()
                                 ((_lambda_manifold__Vec<unsigned_long>const___1_ *)&local_b8,
                                  pVVar18);
              if (cVar10 == '\0') goto LAB_0010a09c;
            }
joined_r0x0010a096:
            if (plVar19 == plVar27) goto LAB_0010a09c;
            uVar15 = plVar19[1];
            uVar3 = plVar19[2];
            if (uVar15 < uVar3) {
              plVar19[1] = uVar15 + 1;
              *(Vec **)(*plVar19 + uVar15 * 8) = pVVar18;
            }
            else {
              if (uVar3 == 0) {
                sVar22 = 0x400;
                uVar23 = 0x80;
LAB_0010a2db:
                puVar16 = (undefined8 *)malloc(sVar22);
                puVar13 = (undefined8 *)*plVar19;
                if (uVar15 == 0) {
LAB_0010a303:
                  if (puVar13 != (undefined8 *)0x0) goto LAB_0010a308;
                }
                else {
                  sVar22 = uVar15 * 8;
                  if (8 < (long)sVar22) {
                    puVar16 = (undefined8 *)memmove(puVar16,puVar13,sVar22);
                    puVar13 = (undefined8 *)*plVar19;
                    goto LAB_0010a303;
                  }
                  if (sVar22 != 8) goto LAB_0010a303;
                  *puVar16 = *puVar13;
LAB_0010a308:
                  free(puVar13);
                }
                *plVar19 = (long)puVar16;
                uVar15 = plVar19[1];
                plVar19[2] = uVar23;
              }
              else {
                uVar23 = uVar3 * 2;
                if (uVar3 < uVar23) {
                  sVar22 = uVar3 << 4;
                  goto LAB_0010a2db;
                }
                puVar16 = (undefined8 *)*plVar19;
              }
              plVar19[1] = uVar15 + 1;
              puVar16[uVar15] = pVVar18;
            }
          }
          else {
            if (lVar12 == 3) {
              cVar10 = BatchUnion(std::vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>&)
                       ::{lambda(manifold::Vec<unsigned_long>const&)#1}::operator()
                                 ((_lambda_manifold__Vec<unsigned_long>const___1_ *)&local_b8,
                                  pVVar18);
              if (cVar10 == '\0') {
                plVar19 = plVar19 + 3;
                goto LAB_0010a391;
              }
              goto joined_r0x0010a096;
            }
            if (lVar12 == 1) goto LAB_0010a26e;
LAB_0010a09c:
            puVar13 = (undefined8 *)operator_new(8);
            local_48 = _UNK_0010f208;
            lVar12 = __LC29;
            *puVar13 = pVVar18;
            local_58._8_8_ = lVar12;
            local_58._0_8_ = malloc(8);
            *(Vec **)local_58._0_8_ = pVVar18;
            puVar16 = _UNK_0010f208;
            lVar12 = __LC29;
            if (local_88 == plVar27) {
              std::vector<manifold::Vec<unsigned_long>,std::allocator<manifold::Vec<unsigned_long>>>
              ::_M_realloc_insert<manifold::Vec<unsigned_long>>
                        ((vector<manifold::Vec<unsigned_long>,std::allocator<manifold::Vec<unsigned_long>>>
                          *)local_98,plVar27,(manifold *)local_58);
              if ((void *)local_58._0_8_ == (void *)0x0) {
                plVar26 = (long *)local_98._0_8_;
                plVar27 = (long *)local_98._8_8_;
              }
              else {
                free((void *)local_58._0_8_);
                plVar26 = (long *)local_98._0_8_;
                plVar27 = (long *)local_98._8_8_;
              }
            }
            else {
              *plVar27 = local_58._0_8_;
              plVar27[1] = lVar12;
              plVar27[2] = (long)puVar16;
              local_98._8_8_ = plVar27 + 3;
              plVar27 = plVar27 + 3;
            }
            operator_delete(puVar13,8);
          }
          pVVar18 = pVVar18 + 1;
        } while (pVVar18 != (Vec *)uVar14);
        local_68 = (undefined8 *)0x0;
        local_78 = (undefined1  [16])0x0;
        for (; plVar26 != plVar27; plVar26 = plVar26 + 3) {
          plVar19 = (long *)*plVar26;
          if (plVar26[1] == 1) {
            puVar16 = (undefined8 *)((*plVar19 + uVar28) * 0x10 + *(long *)param_1);
            if ((undefined8 *)local_78._8_8_ == local_68) {
              std::
              vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
              ::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>const&>();
            }
            else {
              uVar14 = puVar16[1];
              *(undefined8 *)local_78._8_8_ = *puVar16;
              *(undefined8 *)(local_78._8_8_ + 8) = uVar14;
              lVar12 = *(long *)(local_78._8_8_ + 8);
              if (lVar12 != 0) {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
                  UNLOCK();
                }
                else {
                  *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
                }
              }
              local_78._8_8_ = (undefined8 *)(local_78._8_8_ + 0x10);
            }
          }
          else {
            plVar25 = plVar19 + plVar26[1];
            local_48 = (undefined8 *)0x0;
            local_58 = (undefined1  [16])0x0;
            if (plVar25 != plVar19) {
              local_58._8_8_ = (undefined8 *)0x0;
              while( true ) {
                puVar16 = (undefined8 *)((*plVar19 + uVar28) * 0x10 + *(long *)param_1);
                if ((undefined8 *)local_58._8_8_ == local_48) {
                  std::
                  vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                  ::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>const&>
                            ((vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                              *)local_58);
                }
                else {
                  uVar14 = puVar16[1];
                  *(undefined8 *)local_58._8_8_ = *puVar16;
                  *(undefined8 *)(local_58._8_8_ + 8) = uVar14;
                  lVar12 = *(long *)(local_58._8_8_ + 8);
                  puVar16 = (undefined8 *)local_58._8_8_;
                  if (lVar12 != 0) {
                    if (__libc_single_threaded == '\0') {
                      LOCK();
                      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
                      UNLOCK();
                      puVar16 = (undefined8 *)local_58._8_8_;
                    }
                    else {
                      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
                    }
                  }
                  local_58._8_8_ = puVar16 + 2;
                }
                if (plVar25 == plVar19 + 1) break;
                plVar19 = plVar19 + 1;
              }
            }
            CsgLeafNode::Compose((CsgLeafNode *)&local_c8,(vector *)local_58);
            if ((undefined8 *)local_78._8_8_ == local_68) {
              std::
              vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
              ::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>>
                        ((vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                          *)local_78,local_78._8_8_,(CsgLeafNode *)&local_c8);
              p_Var1 = p_Stack_c0;
              if (p_Stack_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                p_Var2 = p_Stack_c0 + 8;
                if (*(long *)(p_Stack_c0 + 8) == 0x100000001) {
                  *(undefined8 *)(p_Stack_c0 + 8) = 0;
                  (**(code **)(*(long *)p_Stack_c0 + 0x10))(p_Stack_c0);
                  (**(code **)(*(long *)p_Var1 + 0x18))();
                }
                else {
                  if (__libc_single_threaded == '\0') {
                    LOCK();
                    iVar11 = *(int *)p_Var2;
                    *(int *)p_Var2 = *(int *)p_Var2 + -1;
                    UNLOCK();
                  }
                  else {
                    iVar11 = *(int *)(p_Stack_c0 + 8);
                    *(int *)(p_Stack_c0 + 8) = iVar11 + -1;
                  }
                  if (iVar11 == 1) {
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                              (p_Stack_c0);
                  }
                }
              }
            }
            else {
              *(undefined8 *)local_78._8_8_ = local_c8;
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(local_78._8_8_ + 8) = p_Stack_c0;
              local_78._8_8_ = (undefined8 *)(local_78._8_8_ + 0x10);
            }
            uVar14 = local_58._8_8_;
            pvVar21 = (void *)local_58._0_8_;
            if (local_58._8_8_ != local_58._0_8_) {
              do {
                while (p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)
                                 ((long)pvVar21 + 8),
                      p_Var1 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00109dae:
                  pvVar21 = (void *)((long)pvVar21 + 0x10);
                  if ((void *)uVar14 == pvVar21) goto LAB_00109e00;
                }
                p_Var2 = p_Var1 + 8;
                if (*(long *)(p_Var1 + 8) == 0x100000001) {
                  *(undefined8 *)(p_Var1 + 8) = 0;
                  (**(code **)(*(long *)p_Var1 + 0x10))();
                  (**(code **)(*(long *)p_Var1 + 0x18))();
                  goto LAB_00109dae;
                }
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar11 = *(int *)p_Var2;
                  *(int *)p_Var2 = *(int *)p_Var2 + -1;
                  UNLOCK();
                }
                else {
                  iVar11 = *(int *)(p_Var1 + 8);
                  *(int *)(p_Var1 + 8) = iVar11 + -1;
                }
                if (iVar11 != 1) goto LAB_00109dae;
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var1);
                pvVar21 = (void *)((long)pvVar21 + 0x10);
              } while ((void *)uVar14 != pvVar21);
LAB_00109e00:
            }
            if ((void *)local_58._0_8_ != (void *)0x0) {
              operator_delete((void *)local_58._0_8_,(long)local_48 - local_58._0_8_);
            }
          }
        }
      }
      else {
LAB_0010a59f:
        local_88 = (long *)0x0;
        local_98 = (undefined1  [16])0x0;
        local_68 = (undefined8 *)0x0;
        local_78 = (undefined1  [16])0x0;
      }
      lVar12 = *(long *)(param_1 + 8);
      local_120 = local_120 + *(long *)param_1;
      lVar20 = local_120;
      if (local_120 != lVar12) {
        do {
          while (p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar20 + 8),
                p_Var1 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00109e56:
            lVar20 = lVar20 + 0x10;
            if (lVar12 == lVar20) goto LAB_00109eab;
          }
          p_Var2 = p_Var1 + 8;
          if (*(long *)(p_Var1 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var1 + 8) = 0;
            (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
            (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
            goto LAB_00109e56;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar11 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar11 = *(int *)(p_Var1 + 8);
            *(int *)(p_Var1 + 8) = iVar11 + -1;
          }
          if (iVar11 != 1) goto LAB_00109e56;
          lVar20 = lVar20 + 0x10;
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var1);
        } while (lVar12 != lVar20);
LAB_00109eab:
        *(long *)(param_1 + 8) = local_120;
      }
      BatchBoolean((manifold *)local_58,0,
                   (vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                    *)local_78);
      puVar16 = *(undefined8 **)(param_1 + 8);
      if (puVar16 == *(undefined8 **)(param_1 + 0x10)) {
        std::
        vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
        ::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>>
                  ((vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                    *)param_1,puVar16,(manifold *)local_58);
        uVar14 = local_58._8_8_;
        if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_ !=
            (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_58._8_8_ + 8);
          if (*(long *)(local_58._8_8_ + 8) == 0x100000001) {
            *(undefined8 *)(local_58._8_8_ + 8) = 0;
            (**(code **)(*(long *)local_58._8_8_ + 0x10))(local_58._8_8_);
            (**(code **)(*(long *)uVar14 + 0x18))(uVar14);
            puVar13 = *(undefined8 **)(param_1 + 8);
            uVar14 = puVar13[-2];
            uVar17 = puVar13[-1];
            goto LAB_00109eee;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar11 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar11 = *(int *)(local_58._8_8_ + 8);
            *(int *)(local_58._8_8_ + 8) = iVar11 + -1;
          }
          if (iVar11 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                      ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_58._8_8_);
          }
        }
        puVar13 = *(undefined8 **)(param_1 + 8);
        uVar14 = puVar13[-2];
        uVar17 = puVar13[-1];
      }
      else {
        puVar13 = puVar16 + 2;
        *puVar16 = local_58._0_8_;
        puVar16[1] = local_58._8_8_;
        *(undefined8 **)(param_1 + 8) = puVar13;
        uVar14 = local_58._0_8_;
        uVar17 = local_58._8_8_;
      }
LAB_00109eee:
      puVar16 = *(undefined8 **)param_1;
      uVar6 = local_78._8_8_;
      uVar4 = *puVar16;
      uVar5 = puVar16[1];
      *puVar16 = uVar14;
      puVar13[-2] = uVar4;
      puVar13[-1] = uVar5;
      puVar16[1] = uVar17;
      pvVar21 = (void *)local_78._0_8_;
      if (local_78._8_8_ != local_78._0_8_) {
        do {
          while (p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar21 + 8),
                p_Var1 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00109f2e:
            pvVar21 = (void *)((long)pvVar21 + 0x10);
            if ((void *)uVar6 == pvVar21) goto LAB_00109f88;
          }
          p_Var2 = p_Var1 + 8;
          if (*(long *)(p_Var1 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var1 + 8) = 0;
            (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
            (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
            goto LAB_00109f2e;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar11 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar11 = *(int *)(p_Var1 + 8);
            *(int *)(p_Var1 + 8) = iVar11 + -1;
          }
          if (iVar11 != 1) goto LAB_00109f2e;
          pvVar21 = (void *)((long)pvVar21 + 0x10);
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var1);
        } while ((void *)uVar6 != pvVar21);
LAB_00109f88:
      }
      if ((void *)local_78._0_8_ != (void *)0x0) {
        operator_delete((void *)local_78._0_8_,(long)local_68 - local_78._0_8_);
      }
      uVar14 = local_98._0_8_;
      uVar17 = local_98._8_8_;
      for (puVar16 = (undefined8 *)local_98._0_8_; (undefined8 *)uVar17 != puVar16;
          puVar16 = puVar16 + 3) {
        if ((void *)*puVar16 != (void *)0x0) {
          free((void *)*puVar16);
        }
      }
      if ((undefined8 *)uVar14 != (undefined8 *)0x0) {
        operator_delete((void *)uVar14,(long)local_88 - uVar14);
      }
      if (local_b8 != (undefined8 *)0x0) {
        free(local_b8);
      }
      lVar12 = *(long *)(param_1 + 8);
      puVar16 = *(undefined8 **)param_1;
      uVar15 = lVar12 - (long)puVar16;
    } while (0x10 < uVar15);
  }
  uVar14 = puVar16[1];
  *(undefined8 *)this = *puVar16;
  *(undefined8 *)(this + 8) = uVar14;
  lVar12 = *(long *)(this + 8);
  if (lVar12 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* manifold::CsgOpNode::ToLeafNode() const */

long * manifold::CsgOpNode::ToLeafNode(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  CsgLeafNode *this;
  int *piVar2;
  undefined4 uVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  char *pcVar5;
  long *plVar6;
  pthread_mutex_t *__mutex;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var13;
  long lVar14;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var15;
  vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
  *pvVar16;
  void *pvVar17;
  int iVar18;
  long in_RSI;
  long *in_RDI;
  long *plVar19;
  long lVar20;
  long lVar21;
  vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
  *pvVar22;
  vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
  *pvVar23;
  ulong uVar24;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
  *local_1d8;
  manifold local_198 [8];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_190;
  manifold local_188 [8];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_180;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_178;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_170;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_168;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_160;
  undefined1 local_158 [16];
  long *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  CsgLeafNode *local_58;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_50;
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0xa0) == 0) {
    p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(in_RSI + 0x10);
    local_148 = (long *)0x0;
    local_158 = (undefined1  [16])0x0;
    if (p_Var4 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
manifold_CsgOpNode_ToLeafNode:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar10 = *(int *)(p_Var4 + 8);
    p_Var25 = p_Var4 + 8;
    do {
      if (iVar10 == 0) goto manifold_CsgOpNode_ToLeafNode;
      LOCK();
      iVar18 = *(int *)p_Var25;
      bVar26 = iVar10 == iVar18;
      if (bVar26) {
        *(int *)p_Var25 = iVar10 + 1;
        iVar18 = iVar10;
      }
      iVar10 = iVar18;
      UNLOCK();
    } while (!bVar26);
    uVar33 = *(undefined8 *)(in_RSI + 8);
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_d8._8_8_;
    local_d8 = auVar8 << 0x40;
    puVar12 = (undefined8 *)operator_new(200);
    uVar32 = _LC10;
    uVar31 = _LC0;
    bVar26 = __libc_single_threaded == '\0';
    *(undefined1 (*) [16])(puVar12 + 5) = (undefined1  [16])0x0;
    puVar12[1] = uVar31;
    *puVar12 = &PTR___Sp_counted_ptr_inplace_0010f0d0;
    uVar3 = *(undefined4 *)(in_RSI + 0x38);
    *(undefined1 (*) [16])(puVar12 + 9) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar12 + 0xd) = (undefined1  [16])0x0;
    *(undefined1 *)(puVar12 + 2) = 0;
    *(undefined4 *)((long)puVar12 + 0x14) = uVar3;
    puVar12[3] = uVar32;
    puVar12[4] = 0;
    puVar12[7] = uVar32;
    puVar12[8] = 0;
    puVar12[0xb] = uVar32;
    puVar12[0xc] = 0;
    *(undefined1 (*) [16])(puVar12 + 0xf) = (undefined1  [16])0x0;
    puVar12[0x11] = uVar33;
    puVar12[0x12] = p_Var4;
    if (bVar26) {
      LOCK();
      *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
    }
    *(undefined1 (*) [16])(puVar12 + 0x13) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar12 + 0x15) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar12 + 0x17) = (undefined1  [16])0x0;
    if (*(long *)(p_Var4 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var4 + 8) = 0;
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar10 = *(int *)p_Var25;
        *(int *)p_Var25 = *(int *)p_Var25 + -1;
        UNLOCK();
      }
      else {
        iVar10 = *(int *)(p_Var4 + 8);
        *(int *)(p_Var4 + 8) = iVar10 + -1;
      }
      if (iVar10 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
      }
    }
    local_d8._8_8_ = puVar12;
    local_d8._0_8_ = puVar12 + 2;
    if ((long *)local_158._8_8_ == local_148) {
      std::
      vector<std::shared_ptr<manifold::CsgStackFrame>,std::allocator<std::shared_ptr<manifold::CsgStackFrame>>>
      ::_M_realloc_insert<std::shared_ptr<manifold::CsgStackFrame>>
                ((vector<std::shared_ptr<manifold::CsgStackFrame>,std::allocator<std::shared_ptr<manifold::CsgStackFrame>>>
                  *)local_158,local_158._8_8_,local_d8);
      uVar33 = local_d8._8_8_;
      if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_ !=
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var15 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_d8._8_8_ + 8);
        if (*(long *)(local_d8._8_8_ + 8) == 0x100000001) {
          *(undefined8 *)(local_d8._8_8_ + 8) = 0;
          (**(code **)(*(long *)local_d8._8_8_ + 0x10))(local_d8._8_8_);
          (**(code **)(*(long *)uVar33 + 0x18))(uVar33);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar10 = *(int *)p_Var15;
            *(int *)p_Var15 = *(int *)p_Var15 + -1;
            UNLOCK();
          }
          else {
            iVar10 = *(int *)(local_d8._8_8_ + 8);
            *(int *)(local_d8._8_8_ + 8) = iVar10 + -1;
          }
          if (iVar10 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                      ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_);
          }
        }
      }
    }
    else {
      *(undefined8 **)local_158._8_8_ = puVar12 + 2;
      *(undefined8 **)(local_158._8_8_ + 8) = puVar12;
      local_158._8_8_ = (long *)(local_158._8_8_ + 0x10);
    }
    if (*(long *)(p_Var4 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var4 + 8) = 0;
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar10 = *(int *)p_Var25;
        *(int *)p_Var25 = *(int *)p_Var25 + -1;
        UNLOCK();
      }
      else {
        iVar10 = *(int *)(p_Var4 + 8);
        *(int *)(p_Var4 + 8) = iVar10 + -1;
      }
      if (iVar10 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
      }
    }
    while( true ) {
      uVar33 = local_158._8_8_;
      if (local_158._8_8_ == local_158._0_8_) break;
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(local_158._8_8_ + -8);
      pcVar5 = *(char **)(local_158._8_8_ + -0x10);
      if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
        }
      }
      plVar6 = *(long **)(*(long *)(pcVar5 + 0x78) + 0x18);
      __mutex = *(pthread_mutex_t **)(*(long *)(pcVar5 + 0x78) + 0x28);
      iVar10 = pthread_mutex_lock(__mutex);
      uVar33 = _LC10;
      if (iVar10 != 0) {
        std::__throw_system_error(iVar10);
        goto LAB_0010c115;
      }
      lVar14 = *(long *)(pcVar5 + 0x78);
      iVar10 = *(int *)(lVar14 + 0x38);
      if (*pcVar5 == '\0') {
        if (*(long *)(pcVar5 + 0x68) == 0) {
          lVar21 = plVar6[1];
          lVar20 = *plVar6;
LAB_0010ac6d:
          local_1d8 = (vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                       *)(pcVar5 + 0xa0);
          *pcVar5 = '\x01';
          pvVar22 = (vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                     *)(pcVar5 + 0x88);
          uVar31 = 0;
          uVar32 = 0;
          uVar34 = 0;
          uVar29 = uVar33;
          uVar30 = 0;
          uVar35 = 0;
          uVar36 = 0;
          uVar37 = uVar33;
          uVar38 = 0;
          uVar27 = 0;
          uVar28 = 0;
        }
        else {
          if (((*(int *)(pcVar5 + 4) != iVar10) ||
              (((*(long *)(pcVar5 + 0x80) != 0 && (2 < *(int *)(*(long *)(pcVar5 + 0x80) + 8))) ||
               (*(long *)(lVar14 + 0x20) == 0)))) || (*(int *)(*(long *)(lVar14 + 0x20) + 8) != 1))
          {
            lVar21 = plVar6[1];
            lVar20 = *plVar6;
            if (lVar21 - lVar20 != 0x10) goto LAB_0010ac6d;
          }
          p_Var25 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(local_158._8_8_ + -8);
          local_158._8_8_ = local_158._8_8_ + -0x10;
          if (p_Var25 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var15 = p_Var25 + 8;
            if (*(long *)(p_Var25 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var25 + 8) = 0;
              (**(code **)(*(long *)p_Var25 + 0x10))(p_Var25);
              (**(code **)(*(long *)p_Var25 + 0x18))(p_Var25);
              lVar14 = *(long *)(pcVar5 + 0x78);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar18 = *(int *)p_Var15;
                *(int *)p_Var15 = *(int *)p_Var15 + -1;
                UNLOCK();
              }
              else {
                iVar18 = *(int *)(p_Var25 + 8);
                *(int *)(p_Var25 + 8) = iVar18 + -1;
              }
              if (iVar18 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var25)
                ;
                lVar14 = *(long *)(pcVar5 + 0x78);
              }
              else {
                lVar14 = *(long *)(pcVar5 + 0x78);
              }
            }
          }
          local_a8 = *(undefined8 *)(lVar14 + 0x68);
          local_98 = *(undefined8 *)(lVar14 + 0x70);
          uStack_90 = *(undefined8 *)(lVar14 + 0x78);
          local_88 = *(undefined8 *)(lVar14 + 0x80);
          local_d8 = *(undefined1 (*) [16])(lVar14 + 0x40);
          local_c8 = *(undefined8 *)(lVar14 + 0x50);
          local_78 = *(undefined8 *)(lVar14 + 0x88);
          local_70 = *(undefined8 *)(lVar14 + 0x90);
          local_b8 = *(undefined8 *)(lVar14 + 0x58);
          uStack_b0 = *(undefined8 *)(lVar14 + 0x60);
          local_68 = *(undefined8 *)(lVar14 + 0x98);
          local_60 = _LC10;
          uStack_c0 = 0;
          uStack_a0 = 0;
          uStack_80 = 0;
          linalg::mul<double,3,4>((linalg *)&local_138,pcVar5 + 8,local_d8);
          local_1d8 = *(vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                        **)(pcVar5 + 0x70);
          pvVar22 = *(vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                      **)(pcVar5 + 0x68);
          lVar21 = plVar6[1];
          lVar20 = *plVar6;
          uVar31 = local_108;
          uVar32 = uStack_100;
          uVar33 = local_118;
          uVar34 = uStack_110;
          uVar29 = local_f8;
          uVar30 = uStack_f0;
          uVar35 = local_128;
          uVar36 = uStack_120;
          uVar37 = local_138;
          uVar38 = uStack_130;
          uVar27 = local_e8;
          uVar28 = uStack_e0;
        }
        uVar24 = 0;
        if (lVar21 != lVar20) {
          do {
            pvVar16 = pvVar22;
            iVar18 = iVar10;
            if (uVar24 == 0) {
LAB_0010aff8:
              pvVar23 = local_1d8;
              if (iVar10 != 1) {
LAB_0010b079:
                pvVar23 = (vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                           *)0x0;
              }
            }
            else {
              if (iVar10 != 1) {
                if (uVar24 == 0) goto LAB_0010aff8;
                goto LAB_0010b079;
              }
              pvVar16 = local_1d8;
              pvVar23 = (vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                         *)0x0;
              iVar18 = 0;
            }
            puVar12 = (undefined8 *)(lVar20 + uVar24 * 0x10);
            local_d8._8_8_ = uVar38;
            local_d8._0_8_ = uVar37;
            local_c8 = uVar35;
            uStack_c0 = uVar36;
            local_b8 = uVar33;
            uStack_b0 = uVar34;
            local_a8 = uVar31;
            uStack_a0 = uVar32;
            local_98 = uVar29;
            uStack_90 = uVar30;
            local_88 = uVar27;
            uStack_80 = uVar28;
            iVar11 = (**(code **)(*(long *)*puVar12 + 0x10))();
            if (iVar11 == 3) {
              (**(code **)(*(long *)*puVar12 + 8))(&local_178,(long *)*puVar12,local_d8);
              local_168 = local_178;
              p_Stack_160 = p_Stack_170;
              if (p_Stack_170 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int *)(p_Stack_170 + 8) = *(int *)(p_Stack_170 + 8) + 1;
                  UNLOCK();
                }
                else {
                  *(int *)(p_Stack_170 + 8) = *(int *)(p_Stack_170 + 8) + 1;
                }
              }
              plVar19 = *(long **)(pvVar16 + 8);
              if (plVar19 == *(long **)(pvVar16 + 0x10)) {
                std::
                vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                ::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>>
                          (pvVar16,plVar19,&local_168);
                p_Var15 = p_Stack_160;
                p_Var25 = p_Stack_170;
                if (p_Stack_160 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                  p_Var13 = p_Stack_160 + 8;
                  if (*(long *)(p_Stack_160 + 8) == 0x100000001) {
                    *(undefined8 *)(p_Stack_160 + 8) = 0;
                    (**(code **)(*(long *)p_Stack_160 + 0x10))(p_Stack_160);
                    (**(code **)(*(long *)p_Var15 + 0x18))(p_Var15);
                    p_Var25 = p_Stack_170;
                  }
                  else {
                    if (__libc_single_threaded == '\0') {
                      LOCK();
                      iVar18 = *(int *)p_Var13;
                      *(int *)p_Var13 = *(int *)p_Var13 + -1;
                      UNLOCK();
                    }
                    else {
                      iVar18 = *(int *)(p_Stack_160 + 8);
                      *(int *)(p_Stack_160 + 8) = iVar18 + -1;
                    }
                    if (iVar18 == 1) {
                      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                                (p_Stack_160);
                      p_Var25 = p_Stack_170;
                    }
                  }
                }
              }
              else {
                *plVar19 = (long)local_178;
                plVar19[1] = (long)p_Stack_170;
                *(long **)(pvVar16 + 8) = plVar19 + 2;
                p_Var25 = p_Stack_170;
              }
joined_r0x0010b040:
              if (p_Var25 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                p_Var15 = p_Var25 + 8;
                if (*(long *)(p_Var25 + 8) == 0x100000001) {
                  *(undefined8 *)(p_Var25 + 8) = 0;
                  (**(code **)(*(long *)p_Var25 + 0x10))(p_Var25);
                  (**(code **)(*(long *)p_Var25 + 0x18))(p_Var25);
                }
                else {
                  if (__libc_single_threaded == '\0') {
                    LOCK();
                    iVar18 = *(int *)p_Var15;
                    *(int *)p_Var15 = *(int *)p_Var15 + -1;
                    UNLOCK();
                  }
                  else {
                    iVar18 = *(int *)(p_Var25 + 8);
                    *(int *)(p_Var25 + 8) = iVar18 + -1;
                  }
                  if (iVar18 == 1) {
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                              (p_Var25);
                  }
                }
              }
            }
            else {
              uVar7 = *puVar12;
              p_Var25 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar12[1];
              lVar14 = puVar12[1];
              if (p_Var25 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int *)(p_Var25 + 8) = *(int *)(p_Var25 + 8) + 1;
                  UNLOCK();
                }
                else {
                  *(int *)(p_Var25 + 8) = *(int *)(p_Var25 + 8) + 1;
                }
              }
              local_168 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
              p_Var13 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(200);
              uVar9 = _LC0;
              p_Var13[0x10] = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>)0x0;
              *(int *)(p_Var13 + 0x14) = iVar18;
              *(undefined8 *)(p_Var13 + 8) = uVar9;
              *(undefined ***)p_Var13 = &PTR___Sp_counted_ptr_inplace_0010f0d0;
              p_Var15 = p_Var13 + 0x10;
              *(vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                **)(p_Var13 + 0x78) = pvVar16;
              *(vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                **)(p_Var13 + 0x80) = pvVar23;
              *(undefined8 *)(p_Var13 + 0x18) = local_d8._0_8_;
              *(undefined8 *)(p_Var13 + 0x20) = local_d8._8_8_;
              *(undefined8 *)(p_Var13 + 0x28) = local_c8;
              *(undefined8 *)(p_Var13 + 0x30) = uStack_c0;
              *(undefined8 *)(p_Var13 + 0x38) = local_b8;
              *(undefined8 *)(p_Var13 + 0x40) = uStack_b0;
              *(undefined8 *)(p_Var13 + 0x48) = local_a8;
              *(undefined8 *)(p_Var13 + 0x50) = uStack_a0;
              *(undefined8 *)(p_Var13 + 0x58) = local_98;
              *(undefined8 *)(p_Var13 + 0x60) = uStack_90;
              *(undefined8 *)(p_Var13 + 0x68) = local_88;
              *(undefined8 *)(p_Var13 + 0x70) = uStack_80;
              *(undefined8 *)(p_Var13 + 0x88) = uVar7;
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var13 + 0x90) = p_Var25;
              if (p_Var25 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                *(undefined1 (*) [16])(p_Var13 + 0x98) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(p_Var13 + 0xa8) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(p_Var13 + 0xb8) = (undefined1  [16])0x0;
              }
              else {
                p_Var1 = p_Var25 + 8;
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int *)(p_Var25 + 8) = *(int *)(p_Var25 + 8) + 1;
                  UNLOCK();
                  *(undefined1 (*) [16])(p_Var13 + 0x98) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(p_Var13 + 0xa8) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(p_Var13 + 0xb8) = (undefined1  [16])0x0;
                }
                else {
                  *(int *)(p_Var25 + 8) = *(int *)(p_Var25 + 8) + 1;
                  *(undefined1 (*) [16])(p_Var13 + 0x98) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(p_Var13 + 0xa8) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(p_Var13 + 0xb8) = (undefined1  [16])0x0;
                }
                if (*(long *)(p_Var25 + 8) == 0x100000001) {
                  lVar20 = *(long *)p_Var25;
                  *(undefined8 *)(lVar14 + 8) = 0;
                  (**(code **)(lVar20 + 0x10))(p_Var25);
                  (**(code **)(*(long *)p_Var25 + 0x18))(p_Var25);
                }
                else {
                  if (__libc_single_threaded == '\0') {
                    LOCK();
                    iVar18 = *(int *)p_Var1;
                    *(int *)p_Var1 = *(int *)p_Var1 + -1;
                    UNLOCK();
                  }
                  else {
                    iVar18 = *(int *)(p_Var25 + 8);
                    *(int *)(p_Var25 + 8) = iVar18 + -1;
                  }
                  if (iVar18 == 1) {
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                              (p_Var25);
                  }
                }
              }
              local_168 = p_Var15;
              p_Stack_160 = p_Var13;
              if ((long *)local_158._8_8_ == local_148) {
                std::
                vector<std::shared_ptr<manifold::CsgStackFrame>,std::allocator<std::shared_ptr<manifold::CsgStackFrame>>>
                ::_M_realloc_insert<std::shared_ptr<manifold::CsgStackFrame>>
                          ((vector<std::shared_ptr<manifold::CsgStackFrame>,std::allocator<std::shared_ptr<manifold::CsgStackFrame>>>
                            *)local_158,local_158._8_8_,&local_168);
                p_Var25 = p_Stack_160;
                goto joined_r0x0010b040;
              }
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)local_158._8_8_ = p_Var15;
              *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(local_158._8_8_ + 8) = p_Var13;
              local_158._8_8_ = (long *)(local_158._8_8_ + 0x10);
            }
            lVar20 = *plVar6;
            uVar24 = uVar24 + 1;
          } while (uVar24 < (ulong)(plVar6[1] - lVar20 >> 4));
        }
      }
      else {
        if (iVar10 == 1) {
          if (*(long *)(pcVar5 + 0x88) != *(long *)(pcVar5 + 0x90)) {
            BatchUnion(local_198,(vector *)(pcVar5 + 0x88));
            if (*(long *)(pcVar5 + 0xa0) == *(long *)(pcVar5 + 0xa8)) {
              local_58 = (CsgLeafNode *)**(undefined8 **)(pcVar5 + 0x88);
              p_Var25 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                        (*(undefined8 **)(pcVar5 + 0x88))[1];
              p_Stack_50 = p_Var25;
              if (p_Var25 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                std::
                vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
                ::_M_assign_aux<std::shared_ptr<manifold::CsgNode>const*>(plVar6,&local_58,local_48)
                ;
                p_Var15 = local_190;
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int *)(p_Var25 + 8) = *(int *)(p_Var25 + 8) + 1;
                  UNLOCK();
                  std::
                  vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
                  ::_M_assign_aux<std::shared_ptr<manifold::CsgNode>const*>
                            (plVar6,&local_58,local_48);
                  p_Var15 = local_190;
                  if (p_Var25 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0)
                  goto LAB_0010b22e;
                }
                else {
                  *(int *)(p_Var25 + 8) = *(int *)(p_Var25 + 8) + 1;
                  std::
                  vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
                  ::_M_assign_aux<std::shared_ptr<manifold::CsgNode>const*>
                            (plVar6,&local_58,local_48);
                }
                p_Var13 = p_Var25 + 8;
                if (*(long *)(p_Var25 + 8) != 0x100000001) {
                  p_Var15 = local_190;
                  if (__libc_single_threaded == '\0') {
                    LOCK();
                    iVar10 = *(int *)p_Var13;
                    *(int *)p_Var13 = *(int *)p_Var13 + -1;
                    UNLOCK();
                  }
                  else {
                    iVar10 = *(int *)(p_Var25 + 8);
                    *(int *)(p_Var25 + 8) = iVar10 + -1;
                  }
                  goto joined_r0x0010b8de;
                }
                *(long *)(p_Var25 + 8) = 0;
                (**(code **)(*(long *)p_Var25 + 0x10))(p_Var25);
                (**(code **)(*(long *)p_Var25 + 0x18))(p_Var25);
                p_Var15 = local_190;
              }
            }
            else {
              BatchUnion(local_188,(vector *)(pcVar5 + 0xa0));
              CsgLeafNode::GetImpl();
              p_Var25 = local_168;
              CsgLeafNode::GetImpl();
              SimpleBoolean((manifold *)local_d8,local_178,p_Var25,1);
              uVar33 = local_d8._8_8_;
              local_58 = (CsgLeafNode *)local_d8._0_8_;
              p_Stack_50 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_;
              local_d8 = (undefined1  [16])0x0;
              std::
              vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
              ::_M_assign_aux<std::shared_ptr<manifold::CsgNode>const*>(plVar6,&local_58,local_48);
              if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)uVar33 !=
                  (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                p_Var25 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(uVar33 + 8);
                if (*(long *)(uVar33 + 8) == 0x100000001) {
                  *(undefined8 *)(uVar33 + 8) = 0;
                  (**(code **)(*(long *)uVar33 + 0x10))(uVar33);
                  (**(code **)(*(long *)uVar33 + 0x18))(uVar33);
                  p_Var25 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_;
                }
                else {
                  if (__libc_single_threaded == '\0') {
                    LOCK();
                    iVar10 = *(int *)p_Var25;
                    *(int *)p_Var25 = *(int *)p_Var25 + -1;
                    UNLOCK();
                  }
                  else {
                    iVar10 = *(int *)(uVar33 + 8);
                    *(int *)(uVar33 + 8) = iVar10 + -1;
                  }
                  p_Var25 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_;
                  if (iVar10 == 1) {
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                              ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)uVar33);
                  }
                }
                if (p_Var25 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                  p_Var15 = p_Var25 + 8;
                  if (*(long *)(p_Var25 + 8) == 0x100000001) {
                    *(undefined8 *)(p_Var25 + 8) = 0;
                    (**(code **)(*(long *)p_Var25 + 0x10))(p_Var25);
                    (**(code **)(*(long *)p_Var25 + 0x18))(p_Var25);
                  }
                  else {
                    if (__libc_single_threaded == '\0') {
                      LOCK();
                      iVar10 = *(int *)p_Var15;
                      *(int *)p_Var15 = *(int *)p_Var15 + -1;
                      UNLOCK();
                    }
                    else {
                      iVar10 = *(int *)(p_Var25 + 8);
                      *(int *)(p_Var25 + 8) = iVar10 + -1;
                    }
                    if (iVar10 == 1) {
                      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                                (p_Var25);
                    }
                  }
                }
              }
              p_Var25 = p_Stack_170;
              if (p_Stack_170 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                p_Var15 = p_Stack_170 + 8;
                if (*(long *)(p_Stack_170 + 8) == 0x100000001) {
                  *(undefined8 *)(p_Stack_170 + 8) = 0;
                  (**(code **)(*(long *)p_Stack_170 + 0x10))(p_Stack_170);
                  (**(code **)(*(long *)p_Var25 + 0x18))(p_Var25);
                }
                else {
                  if (__libc_single_threaded == '\0') {
                    LOCK();
                    iVar10 = *(int *)p_Var15;
                    *(int *)p_Var15 = *(int *)p_Var15 + -1;
                    UNLOCK();
                  }
                  else {
                    iVar10 = *(int *)(p_Stack_170 + 8);
                    *(int *)(p_Stack_170 + 8) = iVar10 + -1;
                  }
                  if (iVar10 == 1) {
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                              (p_Stack_170);
                  }
                }
              }
              p_Var25 = p_Stack_160;
              if (p_Stack_160 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                p_Var15 = p_Stack_160 + 8;
                if (*(long *)(p_Stack_160 + 8) == 0x100000001) {
                  *(undefined8 *)(p_Stack_160 + 8) = 0;
                  (**(code **)(*(long *)p_Stack_160 + 0x10))(p_Stack_160);
                  (**(code **)(*(long *)p_Var25 + 0x18))(p_Var25);
                }
                else {
                  if (__libc_single_threaded == '\0') {
                    LOCK();
                    iVar10 = *(int *)p_Var15;
                    *(int *)p_Var15 = *(int *)p_Var15 + -1;
                    UNLOCK();
                  }
                  else {
                    iVar10 = *(int *)(p_Stack_160 + 8);
                    *(int *)(p_Stack_160 + 8) = iVar10 + -1;
                  }
                  if (iVar10 == 1) {
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                              (p_Stack_160);
                  }
                }
              }
              p_Var25 = local_180;
              p_Var15 = local_190;
              if (local_180 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                p_Var13 = local_180 + 8;
                if (*(long *)(local_180 + 8) == 0x100000001) {
                  *(long *)(local_180 + 8) = 0;
                  (**(code **)(*(long *)local_180 + 0x10))(local_180);
                  (**(code **)(*(long *)p_Var25 + 0x18))(p_Var25);
                  p_Var15 = local_190;
                }
                else {
                  if (__libc_single_threaded == '\0') {
                    LOCK();
                    iVar10 = *(int *)p_Var13;
                    *(int *)p_Var13 = *(int *)p_Var13 + -1;
                    UNLOCK();
                  }
                  else {
                    iVar10 = *(int *)(local_180 + 8);
                    *(int *)(local_180 + 8) = iVar10 + -1;
                  }
joined_r0x0010b8de:
                  local_190 = p_Var15;
                  if (iVar10 == 1) {
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                              (p_Var25);
                    p_Var15 = local_190;
                  }
                }
              }
            }
LAB_0010b22e:
            if (p_Var15 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              p_Var25 = p_Var15 + 8;
              if (*(long *)(p_Var15 + 8) == 0x100000001) {
                *(long *)(p_Var15 + 8) = 0;
                (**(code **)(*(long *)p_Var15 + 0x10))(p_Var15);
                (**(code **)(*(long *)p_Var15 + 0x18))(p_Var15);
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar10 = *(int *)p_Var25;
                  *(int *)p_Var25 = *(int *)p_Var25 + -1;
                  UNLOCK();
                }
                else {
                  iVar10 = *(int *)(p_Var15 + 8);
                  *(int *)(p_Var15 + 8) = iVar10 + -1;
                }
joined_r0x0010b26d:
                if (iVar10 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (p_Var15);
                }
              }
            }
            goto LAB_0010a9d0;
          }
          p_Var15 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator_new(0x98);
          p_Var25 = p_Var15 + 8;
          this = (CsgLeafNode *)(p_Var15 + 0x10);
          *(undefined8 *)(p_Var15 + 8) = _LC0;
          *(undefined ***)p_Var15 = &PTR___Sp_counted_ptr_inplace_0010f098;
          CsgLeafNode::CsgLeafNode(this);
          if ((*(long *)(p_Var15 + 0x20) == 0) || (*(int *)(*(long *)(p_Var15 + 0x20) + 8) == 0)) {
            bVar26 = __libc_single_threaded == '\0';
            *(CsgLeafNode **)(p_Var15 + 0x18) = this;
            if (bVar26) {
              LOCK();
              *(int *)(p_Var15 + 0xc) = *(int *)(p_Var15 + 0xc) + 1;
              UNLOCK();
              plVar19 = *(long **)(p_Var15 + 0x20);
              if (plVar19 != (long *)0x0) {
                if (__libc_single_threaded != '\0') goto LAB_0010c0c2;
                LOCK();
                piVar2 = (int *)((long)plVar19 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                goto LAB_0010c0cb;
              }
            }
            else {
              plVar19 = *(long **)(p_Var15 + 0x20);
              *(int *)(p_Var15 + 0xc) = *(int *)(p_Var15 + 0xc) + 1;
              if (plVar19 != (long *)0x0) {
LAB_0010c0c2:
                iVar10 = *(int *)((long)plVar19 + 0xc);
                *(int *)((long)plVar19 + 0xc) = iVar10 + -1;
LAB_0010c0cb:
                if (iVar10 == 1) {
                  (**(code **)(*plVar19 + 0x18))();
                }
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var15 + 0x20) = p_Var15;
          }
          local_58 = this;
          p_Stack_50 = p_Var15;
          std::
          vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
          ::_M_assign_aux<std::shared_ptr<manifold::CsgNode>const*>(plVar6,&local_58,local_48);
          if (*(long *)(p_Var15 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var15 + 8) = 0;
            (**(code **)(*(long *)p_Var15 + 0x10))(p_Var15);
            (**(code **)(*(long *)p_Var15 + 0x18))(p_Var15);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var25;
              *(int *)p_Var25 = *(int *)p_Var25 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(p_Var15 + 8);
              *(int *)(p_Var15 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var15);
            }
          }
          lVar14 = *(long *)(pcVar5 + 0x78);
        }
        else {
          if (iVar10 == 2) {
            BatchBoolean((manifold *)local_d8,2,pcVar5 + 0x88);
            uVar33 = local_d8._8_8_;
            local_58 = (CsgLeafNode *)local_d8._0_8_;
            p_Stack_50 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_;
            local_d8 = (undefined1  [16])0x0;
            std::
            vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
            ::_M_assign_aux<std::shared_ptr<manifold::CsgNode>const*>(plVar6,&local_58,local_48);
            if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)uVar33 !=
                (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              p_Var25 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(uVar33 + 8);
              if (*(long *)(uVar33 + 8) == 0x100000001) {
                *(undefined8 *)(uVar33 + 8) = 0;
                (**(code **)(*(long *)uVar33 + 0x10))(uVar33);
                (**(code **)(*(long *)uVar33 + 0x18))(uVar33);
                p_Var15 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_;
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar10 = *(int *)p_Var25;
                  *(int *)p_Var25 = *(int *)p_Var25 + -1;
                  UNLOCK();
                }
                else {
                  iVar10 = *(int *)(uVar33 + 8);
                  *(int *)(uVar33 + 8) = iVar10 + -1;
                }
                p_Var15 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_;
                if (iVar10 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)uVar33);
                }
              }
              goto LAB_0010b22e;
            }
          }
          else {
            if (iVar10 != 0) goto LAB_0010a9d4;
            BatchUnion((manifold *)local_d8,(vector *)(pcVar5 + 0x88));
            p_Var15 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_;
            local_58 = (CsgLeafNode *)local_d8._0_8_;
            p_Stack_50 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_;
            std::
            vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
            ::_M_assign_aux<std::shared_ptr<manifold::CsgNode>const*>(plVar6,&local_58,local_48);
            if (p_Var15 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              p_Var25 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((undefined8)p_Var15 + 8);
              if (*(long *)((undefined8)p_Var15 + 8) != 0x100000001) {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar10 = *(int *)p_Var25;
                  *(int *)p_Var25 = *(int *)p_Var25 + -1;
                  UNLOCK();
                }
                else {
                  iVar10 = *(int *)((undefined8)p_Var15 + 8);
                  *(int *)((undefined8)p_Var15 + 8) = iVar10 + -1;
                }
                goto joined_r0x0010b26d;
              }
              *(long *)((undefined8)p_Var15 + 8) = 0;
              (**(code **)(*(long *)p_Var15 + 0x10))(p_Var15);
              (**(code **)(*(long *)p_Var15 + 0x18))(p_Var15);
            }
          }
LAB_0010a9d0:
          lVar14 = *(long *)(pcVar5 + 0x78);
        }
LAB_0010a9d4:
        (**(code **)(**(long **)*plVar6 + 8))(local_d8,*(long **)*plVar6,lVar14 + 0x40);
        if (local_d8._8_8_ != 0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_d8._8_8_ + 8) = *(int *)(local_d8._8_8_ + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_d8._8_8_ + 8) = *(int *)(local_d8._8_8_ + 8) + 1;
          }
        }
        lVar14 = *(long *)(pcVar5 + 0x78);
        p_Var25 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar14 + 0xa8);
        *(undefined8 *)(lVar14 + 0xa0) = local_d8._0_8_;
        *(undefined8 *)(lVar14 + 0xa8) = local_d8._8_8_;
        if (p_Var25 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var15 = p_Var25 + 8;
          if (*(long *)(p_Var25 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var25 + 8) = 0;
            (**(code **)(*(long *)p_Var25 + 0x10))(p_Var25);
            (**(code **)(*(long *)p_Var25 + 0x18))(p_Var25);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var15;
              *(int *)p_Var15 = *(int *)p_Var15 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(p_Var25 + 8);
              *(int *)(p_Var25 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var25);
            }
          }
        }
        uVar33 = local_d8._8_8_;
        if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_ !=
            (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var25 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_d8._8_8_ + 8);
          if (*(long *)(local_d8._8_8_ + 8) == 0x100000001) {
            *(undefined8 *)(local_d8._8_8_ + 8) = 0;
            (**(code **)(*(long *)local_d8._8_8_ + 0x10))(local_d8._8_8_);
            (**(code **)(*(long *)uVar33 + 0x18))(uVar33);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var25;
              *(int *)p_Var25 = *(int *)p_Var25 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(local_d8._8_8_ + 8);
              *(int *)(local_d8._8_8_ + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                        ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_);
            }
          }
        }
        pvVar22 = *(vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
                    **)(pcVar5 + 0x68);
        if (pvVar22 !=
            (vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
             *)0x0) {
          CsgLeafNode::Transform((mat *)&local_168);
          p_Var25 = p_Stack_160;
          local_d8._8_8_ = p_Stack_160;
          local_d8._0_8_ = local_168;
          if (p_Stack_160 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (__libc_single_threaded == '\0') {
              LOCK();
              *(int *)(p_Stack_160 + 8) = *(int *)(p_Stack_160 + 8) + 1;
              UNLOCK();
            }
            else {
              *(int *)(p_Stack_160 + 8) = *(int *)(p_Stack_160 + 8) + 1;
            }
          }
          plVar6 = *(long **)(pvVar22 + 8);
          if (plVar6 == *(long **)(pvVar22 + 0x10)) {
            std::
            vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
            ::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>>(pvVar22,plVar6,local_d8);
            uVar33 = local_d8._8_8_;
            if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_ !=
                (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              p_Var15 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_d8._8_8_ + 8);
              if (*(long *)(local_d8._8_8_ + 8) == 0x100000001) {
                *(undefined8 *)(local_d8._8_8_ + 8) = 0;
                (**(code **)(*(long *)local_d8._8_8_ + 0x10))(local_d8._8_8_);
                (**(code **)(*(long *)uVar33 + 0x18))(uVar33);
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar10 = *(int *)p_Var15;
                  *(int *)p_Var15 = *(int *)p_Var15 + -1;
                  UNLOCK();
                }
                else {
                  iVar10 = *(int *)(local_d8._8_8_ + 8);
                  *(int *)(local_d8._8_8_ + 8) = iVar10 + -1;
                }
                if (iVar10 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_);
                }
              }
            }
          }
          else {
            *plVar6 = (long)local_168;
            plVar6[1] = (long)p_Stack_160;
            *(long **)(pvVar22 + 8) = plVar6 + 2;
          }
          if (p_Var25 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var15 = p_Var25 + 8;
            if (*(long *)(p_Var25 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var25 + 8) = 0;
              (**(code **)(*(long *)p_Var25 + 0x10))(p_Var25);
              (**(code **)(*(long *)p_Var25 + 0x18))(p_Var25);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar10 = *(int *)p_Var15;
                *(int *)p_Var15 = *(int *)p_Var15 + -1;
                UNLOCK();
              }
              else {
                iVar10 = *(int *)(p_Var25 + 8);
                *(int *)(p_Var25 + 8) = iVar10 + -1;
              }
              if (iVar10 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var25)
                ;
              }
            }
          }
        }
        p_Var25 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(local_158._8_8_ + -8);
        local_158._8_8_ = local_158._8_8_ + -0x10;
        if (p_Var25 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var15 = p_Var25 + 8;
          if (*(long *)(p_Var25 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var25 + 8) = 0;
            (**(code **)(*(long *)p_Var25 + 0x10))(p_Var25);
            (**(code **)(*(long *)p_Var25 + 0x18))(p_Var25);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var15;
              *(int *)p_Var15 = *(int *)p_Var15 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(p_Var25 + 8);
              *(int *)(p_Var25 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var25);
            }
          }
        }
      }
      pthread_mutex_unlock(__mutex);
      if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var25 = p_Var4 + 8;
        if (*(long *)(p_Var4 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var4 + 8) = 0;
          (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
          (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar10 = *(int *)p_Var25;
            *(int *)p_Var25 = *(int *)p_Var25 + -1;
            UNLOCK();
          }
          else {
            iVar10 = *(int *)(p_Var4 + 8);
            *(int *)(p_Var4 + 8) = iVar10 + -1;
          }
          if (iVar10 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
          }
        }
      }
    }
    lVar14 = *(long *)(in_RSI + 0xa8);
    *in_RDI = *(long *)(in_RSI + 0xa0);
    in_RDI[1] = lVar14;
    lVar14 = in_RDI[1];
    if (lVar14 != 0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
        pvVar17 = (void *)local_158._0_8_;
        if (local_158._8_8_ != local_158._0_8_) {
          do {
            p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar17 + 8);
            if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              p_Var25 = p_Var4 + 8;
              if (*(long *)(p_Var4 + 8) == 0x100000001) {
                *(undefined8 *)(p_Var4 + 8) = 0;
                (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
                (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
              }
              else {
                if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar10 = *(int *)p_Var25;
                  *(int *)p_Var25 = *(int *)p_Var25 + -1;
                  UNLOCK();
                }
                else {
                  iVar10 = *(int *)(p_Var4 + 8);
                  *(int *)(p_Var4 + 8) = iVar10 + -1;
                }
                if (iVar10 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (p_Var4);
                }
              }
            }
            pvVar17 = (void *)((long)pvVar17 + 0x10);
          } while ((void *)uVar33 != pvVar17);
        }
      }
      else {
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      }
    }
    if ((void *)local_158._0_8_ != (void *)0x0) {
      operator_delete((void *)local_158._0_8_,(long)local_148 - local_158._0_8_);
    }
  }
  else {
    lVar14 = *(long *)(in_RSI + 0xa8);
    *in_RDI = *(long *)(in_RSI + 0xa0);
    in_RDI[1] = lVar14;
    if (lVar14 != 0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
LAB_0010c115:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Sp_counted_ptr_inplace<std::recursive_mutex, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  return;
}



/* std::_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,
   std::allocator<std::shared_ptr<manifold::CsgNode> > >, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgStackFrame, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl const, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  return;
}



/* std::_Sp_counted_ptr_inplace<std::recursive_mutex, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void std::
     _Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
     _M_dispose(void)

{
  return;
}



/* std::_Sp_counted_ptr_inplace<std::recursive_mutex, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* std::_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,
   std::allocator<std::shared_ptr<manifold::CsgNode> > >, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x28);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgStackFrame, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,200);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x98);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl const, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x198);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x198);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0xc0);
  return;
}



/* std::_Sp_counted_ptr_inplace<std::recursive_mutex, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_destroy(_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* std::_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,
   std::allocator<std::shared_ptr<manifold::CsgNode> > >, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_destroy(_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  operator_delete(this,0x28);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgStackFrame, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_destroy(_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,200);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_destroy(_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  operator_delete(this,0x98);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl const, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_destroy(_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  operator_delete(this,0x198);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_destroy(_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x198);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_destroy(_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0xc0);
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> *
__thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_get_deleter(_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 *this,type_info *param_1)

{
  char *__s1;
  int iVar1;
  _Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var2;
  
  p_Var2 = this + 0x10;
  if ((param_1 != (type_info *)_Sp_make_shared_tag::_S_ti()::__tag) &&
     (__s1 = *(char **)(param_1 + 8), __s1 != "St19_Sp_make_shared_tag")) {
    if (*__s1 == '*') {
      return (_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    iVar1 = strcmp(__s1,"St19_Sp_make_shared_tag");
    if (iVar1 != 0) {
      p_Var2 = (_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                *)0x0;
    }
  }
  return p_Var2;
}



/* std::_Rb_tree_node<std::pair<int const, manifold::Manifold::Impl::Relation> >* std::_Rb_tree<int,
   std::pair<int const, manifold::Manifold::Impl::Relation>, std::_Select1st<std::pair<int const,
   manifold::Manifold::Impl::Relation> >, std::less<int>, std::allocator<std::pair<int const,
   manifold::Manifold::Impl::Relation> > >::_M_copy<false, std::_Rb_tree<int, std::pair<int const,
   manifold::Manifold::Impl::Relation>, std::_Select1st<std::pair<int const,
   manifold::Manifold::Impl::Relation> >, std::less<int>, std::allocator<std::pair<int const,
   manifold::Manifold::Impl::Relation> > >::_Alloc_node>(std::_Rb_tree_node<std::pair<int const,
   manifold::Manifold::Impl::Relation> >*, std::_Rb_tree_node_base*, std::_Rb_tree<int,
   std::pair<int const, manifold::Manifold::Impl::Relation>, std::_Select1st<std::pair<int const,
   manifold::Manifold::Impl::Relation> >, std::less<int>, std::allocator<std::pair<int const,
   manifold::Manifold::Impl::Relation> > >::_Alloc_node&) [clone .isra.0] */

_Rb_tree_node *
std::
_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
::
_M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
          (_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,_Alloc_node *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  _Rb_tree_node_base *p_Var13;
  _Rb_tree_node_base *p_Var14;
  _Rb_tree_node *p_Var15;
  _Rb_tree_node_base *p_Var16;
  _Alloc_node *extraout_RDX;
  _Alloc_node *extraout_RDX_00;
  
  p_Var14 = (_Rb_tree_node_base *)operator_new(0x98);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(p_Var14 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(p_Var14 + 0x28) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  uVar12 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(p_Var14 + 0x50) = uVar4;
  *(undefined8 *)(p_Var14 + 0x58) = uVar5;
  p_Var15 = *(_Rb_tree_node **)(param_1 + 0x18);
  *(undefined8 *)(p_Var14 + 0x30) = uVar2;
  *(undefined8 *)(p_Var14 + 0x38) = uVar10;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(p_Var14 + 0x60) = uVar6;
  *(undefined8 *)(p_Var14 + 0x68) = uVar7;
  *(undefined8 *)(p_Var14 + 0x40) = uVar2;
  *(undefined8 *)(p_Var14 + 0x48) = uVar4;
  *(undefined8 *)(p_Var14 + 0x70) = uVar8;
  *(undefined8 *)(p_Var14 + 0x78) = uVar9;
  *(undefined8 *)(p_Var14 + 0x80) = uVar11;
  *(undefined8 *)(p_Var14 + 0x88) = uVar12;
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(p_Var14 + 0x10) = 0;
  *(undefined8 *)(p_Var14 + 0x90) = uVar2;
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(p_Var14 + 0x18) = 0;
  *(undefined4 *)p_Var14 = uVar1;
  *(_Rb_tree_node_base **)(p_Var14 + 8) = param_2;
  if (p_Var15 != (_Rb_tree_node *)0x0) {
    p_Var15 = _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
                        (p_Var15,p_Var14,extraout_RDX);
    *(_Rb_tree_node **)(p_Var14 + 0x18) = p_Var15;
  }
  p_Var13 = p_Var14;
  for (puVar3 = *(undefined4 **)(param_1 + 0x10); puVar3 != (undefined4 *)0x0;
      puVar3 = *(undefined4 **)(puVar3 + 4)) {
    p_Var16 = (_Rb_tree_node_base *)operator_new(0x98);
    uVar2 = *(undefined8 *)(puVar3 + 10);
    *(undefined8 *)(p_Var16 + 0x20) = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(p_Var16 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0xe);
    *(undefined8 *)(p_Var16 + 0x30) = *(undefined8 *)(puVar3 + 0xc);
    *(undefined8 *)(p_Var16 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0x12);
    *(undefined8 *)(p_Var16 + 0x40) = *(undefined8 *)(puVar3 + 0x10);
    *(undefined8 *)(p_Var16 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0x16);
    *(undefined8 *)(p_Var16 + 0x50) = *(undefined8 *)(puVar3 + 0x14);
    *(undefined8 *)(p_Var16 + 0x58) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0x1a);
    *(undefined8 *)(p_Var16 + 0x60) = *(undefined8 *)(puVar3 + 0x18);
    *(undefined8 *)(p_Var16 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0x1e);
    *(undefined8 *)(p_Var16 + 0x70) = *(undefined8 *)(puVar3 + 0x1c);
    *(undefined8 *)(p_Var16 + 0x78) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 0x22);
    *(undefined8 *)(p_Var16 + 0x80) = *(undefined8 *)(puVar3 + 0x20);
    *(undefined8 *)(p_Var16 + 0x88) = uVar2;
    *(undefined8 *)(p_Var16 + 0x90) = *(undefined8 *)(puVar3 + 0x24);
    uVar1 = *puVar3;
    *(undefined8 *)(p_Var16 + 0x10) = 0;
    *(undefined8 *)(p_Var16 + 0x18) = 0;
    *(undefined4 *)p_Var16 = uVar1;
    *(_Rb_tree_node_base **)(p_Var13 + 0x10) = p_Var16;
    *(_Rb_tree_node_base **)(p_Var16 + 8) = p_Var13;
    if (*(_Rb_tree_node **)(puVar3 + 6) != (_Rb_tree_node *)0x0) {
      p_Var15 = _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
                          (*(_Rb_tree_node **)(puVar3 + 6),p_Var16,extraout_RDX_00);
      *(_Rb_tree_node **)(p_Var16 + 0x18) = p_Var15;
    }
    p_Var13 = p_Var16;
  }
  return (_Rb_tree_node *)p_Var14;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl const, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
* __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_get_deleter(_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 *this,type_info *param_1)

{
  char *__s1;
  int iVar1;
  _Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var2;
  
  p_Var2 = this + 0x10;
  if ((param_1 != (type_info *)_Sp_make_shared_tag::_S_ti()::__tag) &&
     (__s1 = *(char **)(param_1 + 8), __s1 != "St19_Sp_make_shared_tag")) {
    if (*__s1 == '*') {
      return (_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    iVar1 = strcmp(__s1,"St19_Sp_make_shared_tag");
    if (iVar1 != 0) {
      p_Var2 = (_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                *)0x0;
    }
  }
  return p_Var2;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> *
__thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_get_deleter(_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
               *this,type_info *param_1)

{
  char *__s1;
  int iVar1;
  _Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var2;
  
  p_Var2 = this + 0x10;
  if ((param_1 != (type_info *)_Sp_make_shared_tag::_S_ti()::__tag) &&
     (__s1 = *(char **)(param_1 + 8), __s1 != "St19_Sp_make_shared_tag")) {
    if (*__s1 == '*') {
      return (_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    iVar1 = strcmp(__s1,"St19_Sp_make_shared_tag");
    if (iVar1 != 0) {
      p_Var2 = (_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                *)0x0;
    }
  }
  return p_Var2;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgStackFrame, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> *
__thiscall
std::
_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_get_deleter(_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
               *this,type_info *param_1)

{
  char *__s1;
  int iVar1;
  _Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var2;
  
  p_Var2 = this + 0x10;
  if ((param_1 != (type_info *)_Sp_make_shared_tag::_S_ti()::__tag) &&
     (__s1 = *(char **)(param_1 + 8), __s1 != "St19_Sp_make_shared_tag")) {
    if (*__s1 == '*') {
      return (_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    iVar1 = strcmp(__s1,"St19_Sp_make_shared_tag");
    if (iVar1 != 0) {
      p_Var2 = (_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                *)0x0;
    }
  }
  return p_Var2;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> *
__thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_get_deleter(_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
               *this,type_info *param_1)

{
  char *__s1;
  int iVar1;
  _Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var2;
  
  p_Var2 = this + 0x10;
  if ((param_1 != (type_info *)_Sp_make_shared_tag::_S_ti()::__tag) &&
     (__s1 = *(char **)(param_1 + 8), __s1 != "St19_Sp_make_shared_tag")) {
    if (*__s1 == '*') {
      return (_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    iVar1 = strcmp(__s1,"St19_Sp_make_shared_tag");
    if (iVar1 != 0) {
      p_Var2 = (_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                *)0x0;
    }
  }
  return p_Var2;
}



/* std::_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,
   std::allocator<std::shared_ptr<manifold::CsgNode> > >, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
* __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_get_deleter(_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 *this,type_info *param_1)

{
  char *__s1;
  int iVar1;
  _Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var2;
  
  p_Var2 = this + 0x10;
  if ((param_1 != (type_info *)_Sp_make_shared_tag::_S_ti()::__tag) &&
     (__s1 = *(char **)(param_1 + 8), __s1 != "St19_Sp_make_shared_tag")) {
    if (*__s1 == '*') {
      return (_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    iVar1 = strcmp(__s1,"St19_Sp_make_shared_tag");
    if (iVar1 != 0) {
      p_Var2 = (_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                *)0x0;
    }
  }
  return p_Var2;
}



/* std::_Sp_counted_ptr_inplace<std::recursive_mutex, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> *
__thiscall
std::_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_get_deleter(_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
               *this,type_info *param_1)

{
  char *__s1;
  int iVar1;
  _Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
  *p_Var2;
  
  p_Var2 = this + 0x10;
  if ((param_1 != (type_info *)_Sp_make_shared_tag::_S_ti()::__tag) &&
     (__s1 = *(char **)(param_1 + 8), __s1 != "St19_Sp_make_shared_tag")) {
    if (*__s1 == '*') {
      return (_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    iVar1 = strcmp(__s1,"St19_Sp_make_shared_tag");
    if (iVar1 != 0) {
      p_Var2 = (_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                *)0x0;
    }
  }
  return p_Var2;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_dispose(_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(void **)(this + 0x180) != (void *)0x0) {
    free(*(void **)(this + 0x180));
  }
  if (*(void **)(this + 0x168) != (void *)0x0) {
    free(*(void **)(this + 0x168));
  }
  if (*(void **)(this + 0x150) != (void *)0x0) {
    free(*(void **)(this + 0x150));
  }
  if (*(void **)(this + 0x138) != (void *)0x0) {
    free(*(void **)(this + 0x138));
  }
  if (*(void **)(this + 0x120) != (void *)0x0) {
    free(*(void **)(this + 0x120));
  }
  pvVar2 = *(void **)(this + 0x100);
  while (pvVar2 != (void *)0x0) {
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
    pvVar1 = *(void **)((long)pvVar2 + 0x10);
    operator_delete(pvVar2,0x98);
    pvVar2 = pvVar1;
  }
  if (*(void **)(this + 0xd8) != (void *)0x0) {
    free(*(void **)(this + 0xd8));
  }
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    free(*(void **)(this + 0xb8));
  }
  if (*(void **)(this + 0xa0) != (void *)0x0) {
    free(*(void **)(this + 0xa0));
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    free(*(void **)(this + 0x88));
  }
  if (*(void **)(this + 0x70) != (void *)0x0) {
    free(*(void **)(this + 0x70));
  }
  if (*(void **)(this + 0x58) == (void *)0x0) {
    return;
  }
  free(*(void **)(this + 0x58));
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl const, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(void **)(this + 0x180) != (void *)0x0) {
    free(*(void **)(this + 0x180));
  }
  if (*(void **)(this + 0x168) != (void *)0x0) {
    free(*(void **)(this + 0x168));
  }
  if (*(void **)(this + 0x150) != (void *)0x0) {
    free(*(void **)(this + 0x150));
  }
  if (*(void **)(this + 0x138) != (void *)0x0) {
    free(*(void **)(this + 0x138));
  }
  if (*(void **)(this + 0x120) != (void *)0x0) {
    free(*(void **)(this + 0x120));
  }
  pvVar2 = *(void **)(this + 0x100);
  while (pvVar2 != (void *)0x0) {
    _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
    pvVar1 = *(void **)((long)pvVar2 + 0x10);
    operator_delete(pvVar2,0x98);
    pvVar2 = pvVar1;
  }
  if (*(void **)(this + 0xd8) != (void *)0x0) {
    free(*(void **)(this + 0xd8));
  }
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    free(*(void **)(this + 0xb8));
  }
  if (*(void **)(this + 0xa0) != (void *)0x0) {
    free(*(void **)(this + 0xa0));
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    free(*(void **)(this + 0x88));
  }
  if (*(void **)(this + 0x70) != (void *)0x0) {
    free(*(void **)(this + 0x70));
  }
  if (*(void **)(this + 0x58) == (void *)0x0) {
    return;
  }
  free(*(void **)(this + 0x58));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::sind(double) */

double manifold::sind(double param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  double dVar3;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (_LC4 < (double)((ulong)param_1 & _LC3)) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010c970;
    goto LAB_0010c9ed;
  }
  if (param_1 < 0.0) {
    dVar2 = remquo((double)((ulong)param_1 ^ (ulong)_LC1),_LC5,(int *)&local_14);
    iVar1 = (int)local_14 % 4;
    if (iVar1 == 2) {
LAB_0010c980:
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        param_1 = (dVar2 * __LC7) / __LC8;
LAB_0010c970:
        dVar2 = sin(param_1);
        return dVar2;
      }
      goto LAB_0010c9ed;
    }
    if (iVar1 == 3) {
LAB_0010c8ae:
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        dVar2 = cos((dVar2 * __LC7) / __LC8);
        return dVar2;
      }
      goto LAB_0010c9ed;
    }
    if ((local_14 & 3) != 0) {
      dVar3 = _LC1;
      if (iVar1 != 1) goto LAB_0010c942;
      goto LAB_0010c925;
    }
LAB_0010c9a8:
    dVar2 = sin((dVar2 * __LC7) / __LC8);
    dVar3 = (double)((ulong)dVar2 ^ (ulong)_LC1);
  }
  else {
    dVar2 = remquo((double)((ulong)param_1 & _LC3),_LC5,(int *)&local_14);
    iVar1 = (int)local_14 % 4;
    if (iVar1 == 2) goto LAB_0010c9a8;
    if (iVar1 == 3) {
LAB_0010c925:
      dVar2 = cos((dVar2 * __LC7) / __LC8);
      dVar3 = (double)((ulong)dVar2 ^ (ulong)_LC1);
    }
    else {
      if ((local_14 & 3) == 0) goto LAB_0010c980;
      if (iVar1 == 1) goto LAB_0010c8ae;
      dVar3 = 0.0;
    }
  }
LAB_0010c942:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar3;
  }
LAB_0010c9ed:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold() */

void __thiscall
std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  
  (**(code **)(*(long *)this + 0x10))();
  if (__libc_single_threaded == '\0') {
    LOCK();
    p_Var1 = this + 0xc;
    iVar2 = *(int *)p_Var1;
    *(int *)p_Var1 = *(int *)p_Var1 + -1;
    UNLOCK();
  }
  else {
    iVar2 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar2 + -1;
  }
  if (iVar2 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0010ca3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this);
  return;
}



/* std::_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,
   std::allocator<std::shared_ptr<manifold::CsgNode> > >, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  void *pvVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  void *pvVar4;
  
  pvVar3 = *(void **)(this + 0x18);
  pvVar4 = *(void **)(this + 0x10);
  if (pvVar3 != pvVar4) {
LAB_0010ca97:
    do {
      this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar4 + 8);
      if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = this_00 + 8;
        if (*(long *)(this_00 + 8) == 0x100000001) {
          *(undefined8 *)(this_00 + 8) = 0;
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          (**(code **)(*(long *)this_00 + 0x18))(this_00);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar2 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar2 = *(int *)(this_00 + 8);
            *(int *)(this_00 + 8) = iVar2 + -1;
          }
          if (iVar2 == 1) {
            pvVar4 = (void *)((long)pvVar4 + 0x10);
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
            if (pvVar3 == pvVar4) break;
            goto LAB_0010ca97;
          }
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar3 != pvVar4);
    pvVar4 = *(void **)(this + 0x10);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x20) - (long)pvVar4);
    return;
  }
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int *piVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long *plVar3;
  int iVar4;
  
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x30);
  *(undefined ***)(this + 0x10) = &PTR_ToLeafNode_0010ef90;
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = this_00 + 8;
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar4 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar4 + -1;
      }
      if (iVar4 == 1) {
        _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
  plVar3 = *(long **)(this + 0x20);
  *(undefined ***)(this + 0x10) = &PTR___cxa_pure_virtual_0010ef60;
  if (plVar3 != (long *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar2 = (int *)((long)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    else {
      iVar4 = *(int *)((long)plVar3 + 0xc);
      *(int *)((long)plVar3 + 0xc) = iVar4 + -1;
    }
    if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0010cbdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgStackFrame, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_dispose(_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  void *pvVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  int iVar4;
  void *pvVar5;
  
  pvVar2 = *(void **)(this + 0xb8);
  pvVar5 = *(void **)(this + 0xb0);
  if (pvVar2 != pvVar5) {
LAB_0010cc77:
    do {
      p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar5 + 8);
      if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = p_Var3 + 8;
        if (*(long *)(p_Var3 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var3 + 8) = 0;
          (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
          (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar4 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar4 = *(int *)(p_Var3 + 8);
            *(int *)(p_Var3 + 8) = iVar4 + -1;
          }
          if (iVar4 == 1) {
            pvVar5 = (void *)((long)pvVar5 + 0x10);
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
            if (pvVar2 == pvVar5) break;
            goto LAB_0010cc77;
          }
        }
      }
      pvVar5 = (void *)((long)pvVar5 + 0x10);
    } while (pvVar2 != pvVar5);
    pvVar5 = *(void **)(this + 0xb0);
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5,*(long *)(this + 0xc0) - (long)pvVar5);
  }
  pvVar2 = *(void **)(this + 0xa0);
  pvVar5 = *(void **)(this + 0x98);
  if (pvVar2 != pvVar5) {
LAB_0010cd1f:
    do {
      p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar5 + 8);
      if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = p_Var3 + 8;
        if (*(long *)(p_Var3 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var3 + 8) = 0;
          (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
          (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar4 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar4 = *(int *)(p_Var3 + 8);
            *(int *)(p_Var3 + 8) = iVar4 + -1;
          }
          if (iVar4 == 1) {
            pvVar5 = (void *)((long)pvVar5 + 0x10);
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
            if (pvVar2 == pvVar5) break;
            goto LAB_0010cd1f;
          }
        }
      }
      pvVar5 = (void *)((long)pvVar5 + 0x10);
    } while (pvVar2 != pvVar5);
    pvVar5 = *(void **)(this + 0x98);
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5,*(long *)(this + 0xa8) - (long)pvVar5);
  }
  p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x90);
  if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = p_Var3 + 8;
    if (*(long *)(p_Var3 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var3 + 8) = 0;
      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
                    /* WARNING: Could not recover jumptable at 0x0010ce4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
      return;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar4 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = *(int *)(p_Var3 + 8);
      *(int *)(p_Var3 + 8) = iVar4 + -1;
    }
    if (iVar4 == 1) {
      _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
      return;
    }
  }
  return;
}



/* linalg::mat<double, 3, 4> linalg::mul<double, 3, 4>(linalg::mat<double, 3, 4> const&,
   linalg::mat<double, 4, 4> const&) */

linalg * __thiscall linalg::mul<double,3,4>(linalg *this,mat *param_1,mat *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  dVar1 = *(double *)(param_1 + 0x20);
  dVar2 = *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 0x10);
  dVar4 = *(double *)(param_1 + 0x18);
  dVar5 = *(double *)(param_1 + 0x50);
  dVar6 = *(double *)(param_1 + 0x58);
  dVar7 = *(double *)(param_1 + 0x40);
  dVar8 = *(double *)(param_1 + 0x48);
  dVar9 = *(double *)param_2;
  dVar10 = *(double *)(param_2 + 8);
  dVar11 = *(double *)(param_2 + 0x10);
  dVar12 = *(double *)(param_2 + 0x18);
  dVar13 = *(double *)param_1;
  dVar14 = *(double *)(param_1 + 8);
  dVar15 = *(double *)(param_1 + 0x30);
  dVar16 = *(double *)(param_1 + 0x38);
  dVar17 = *(double *)(param_2 + 0x30);
  dVar18 = *(double *)(param_2 + 0x38);
  dVar19 = *(double *)(param_2 + 0x50);
  dVar20 = *(double *)(param_2 + 0x58);
  dVar21 = *(double *)(param_2 + 0x20);
  dVar22 = *(double *)(param_2 + 0x28);
  dVar23 = *(double *)(param_2 + 0x60);
  dVar24 = *(double *)(param_2 + 0x68);
  dVar25 = *(double *)(param_2 + 0x70);
  dVar26 = *(double *)(param_2 + 0x78);
  dVar27 = *(double *)(param_2 + 0x40);
  dVar28 = *(double *)(param_2 + 0x48);
  *(double *)this = dVar10 * dVar4 + dVar9 * dVar13 + dVar11 * dVar15 + dVar12 * dVar8;
  *(double *)(this + 8) = dVar10 * dVar1 + dVar9 * dVar14 + dVar11 * dVar16 + dVar12 * dVar5;
  *(double *)(this + 0x10) = dVar11 * dVar7 + dVar9 * dVar3 + dVar10 * dVar2 + dVar12 * dVar6;
  *(double *)(this + 0x18) = dVar17 * dVar15 + dVar21 * dVar13 + dVar22 * dVar4 + dVar18 * dVar8;
  *(double *)(this + 0x20) = dVar17 * dVar16 + dVar21 * dVar14 + dVar22 * dVar1 + dVar18 * dVar5;
  *(double *)(this + 0x28) = dVar17 * dVar7 + dVar21 * dVar3 + dVar22 * dVar2 + dVar18 * dVar6;
  *(double *)(this + 0x30) = dVar27 * dVar13 + dVar28 * dVar4 + dVar19 * dVar15 + dVar20 * dVar8;
  *(double *)(this + 0x38) = dVar27 * dVar14 + dVar28 * dVar1 + dVar19 * dVar16 + dVar20 * dVar5;
  *(double *)(this + 0x40) = dVar28 * dVar2 + dVar27 * dVar3 + dVar19 * dVar7 + dVar20 * dVar6;
  *(double *)(this + 0x48) = dVar24 * dVar4 + dVar23 * dVar13 + dVar25 * dVar15 + dVar26 * dVar8;
  *(double *)(this + 0x50) = dVar24 * dVar1 + dVar23 * dVar14 + dVar25 * dVar16 + dVar26 * dVar5;
  *(double *)(this + 0x58) = dVar24 * dVar2 + dVar23 * dVar3 + dVar25 * dVar7 + dVar26 * dVar6;
  return this;
}



/* void manifold::copy<manifold::StridedRange<double const*>::StridedRangeIter,
   manifold::StridedRange<double*>::StridedRangeIter>(manifold::StridedRange<double
   const*>::StridedRangeIter, manifold::StridedRange<double const*>::StridedRangeIter,
   manifold::StridedRange<double*>::StridedRangeIter) */

void manifold::
     copy<manifold::StridedRange<double_const*>::StridedRangeIter,manifold::StridedRange<double*>::StridedRangeIter>
               (undefined8 *param_1,long param_2,long param_3,ulong param_4,undefined8 *param_5,
               long param_6)

{
  undefined8 uVar1;
  
  param_4 = (ulong)(param_3 - (long)param_1 >> 3) / param_4;
  if (0 < (long)param_4) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + param_2;
      *param_5 = uVar1;
      param_5 = param_5 + param_6;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return;
}



/* std::shared_ptr<manifold::Manifold::Impl const>::shared_ptr<std::allocator<void>,
   manifold::Manifold::Impl>(std::_Sp_alloc_shared_tag<std::allocator<void> >,
   manifold::Manifold::Impl&&) */

void __thiscall
std::shared_ptr<manifold::Manifold::Impl_const>::
shared_ptr<std::allocator<void>,manifold::Manifold::Impl>
          (shared_ptr<manifold::Manifold::Impl_const> *this,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  
  *(undefined8 *)this = 0;
  puVar17 = (undefined8 *)operator_new(0x198);
  uVar13 = _LC0;
  uVar2 = *param_3;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_3[4];
  uVar8 = param_3[5];
  uVar9 = param_3[10];
  uVar10 = param_3[0xb];
  uVar11 = param_3[0xd];
  uVar12 = param_3[0xe];
  *puVar17 = &PTR___Sp_counted_ptr_inplace_0010f060;
  puVar17[1] = uVar13;
  uVar1 = *(undefined4 *)(param_3 + 8);
  uVar13 = param_3[0x10];
  uVar14 = param_3[0x11];
  uVar15 = param_3[6];
  uVar16 = param_3[7];
  puVar17[2] = uVar2;
  puVar17[3] = uVar4;
  *(undefined4 *)(puVar17 + 10) = uVar1;
  uVar2 = param_3[9];
  puVar17[4] = uVar5;
  puVar17[5] = uVar6;
  puVar17[0xb] = uVar2;
  uVar2 = param_3[0xc];
  puVar17[6] = uVar7;
  puVar17[7] = uVar8;
  puVar17[0xe] = uVar2;
  param_3[9] = 0;
  puVar17[0x11] = param_3[0xf];
  uVar2 = param_3[0x12];
  param_3[0xc] = 0;
  param_3[0xf] = 0;
  puVar17[8] = uVar15;
  puVar17[9] = uVar16;
  puVar17[0xc] = uVar9;
  puVar17[0xd] = uVar10;
  *(undefined1 (*) [16])(param_3 + 10) = (undefined1  [16])0x0;
  puVar17[0xf] = uVar11;
  puVar17[0x10] = uVar12;
  *(undefined1 (*) [16])(param_3 + 0xd) = (undefined1  [16])0x0;
  puVar17[0x12] = uVar13;
  puVar17[0x13] = uVar14;
  *(undefined1 (*) [16])(param_3 + 0x10) = (undefined1  [16])0x0;
  puVar17[0x14] = uVar2;
  uVar4 = param_3[0x13];
  uVar5 = param_3[0x14];
  uVar6 = param_3[0x16];
  uVar7 = param_3[0x17];
  param_3[0x12] = 0;
  puVar17[0x17] = param_3[0x15];
  uVar2 = param_3[0x18];
  uVar8 = param_3[0x1a];
  uVar9 = param_3[0x1b];
  puVar17[0x15] = uVar4;
  puVar17[0x16] = uVar5;
  puVar17[0x1a] = uVar2;
  param_3[0x15] = 0;
  puVar17[0x1b] = param_3[0x19];
  lVar3 = param_3[0x1e];
  param_3[0x19] = 0;
  *(undefined1 (*) [16])(param_3 + 0x13) = (undefined1  [16])0x0;
  puVar17[0x18] = uVar6;
  puVar17[0x19] = uVar7;
  *(undefined1 (*) [16])(param_3 + 0x16) = (undefined1  [16])0x0;
  puVar17[0x1c] = uVar8;
  puVar17[0x1d] = uVar9;
  *(undefined1 (*) [16])(param_3 + 0x1a) = (undefined1  [16])0x0;
  if (lVar3 == 0) {
    *(undefined4 *)(puVar17 + 0x1f) = 0;
    puVar17[0x20] = 0;
    puVar17[0x21] = puVar17 + 0x1f;
    puVar17[0x22] = puVar17 + 0x1f;
    puVar17[0x23] = 0;
  }
  else {
    uVar2 = param_3[0x1f];
    *(undefined4 *)(puVar17 + 0x1f) = *(undefined4 *)(param_3 + 0x1d);
    uVar4 = param_3[0x20];
    puVar17[0x20] = lVar3;
    puVar17[0x21] = uVar2;
    puVar17[0x22] = uVar4;
    *(undefined8 **)(lVar3 + 8) = puVar17 + 0x1f;
    param_3[0x1e] = 0;
    puVar17[0x23] = param_3[0x21];
    param_3[0x1f] = param_3 + 0x1d;
    param_3[0x20] = param_3 + 0x1d;
    param_3[0x21] = 0;
  }
  uVar2 = param_3[0x22];
  uVar4 = param_3[0x23];
  uVar5 = param_3[0x24];
  param_3[0x22] = 0;
  uVar6 = param_3[0x26];
  uVar7 = param_3[0x27];
  uVar8 = param_3[0x29];
  uVar9 = param_3[0x2a];
  *(undefined1 (*) [16])(param_3 + 0x23) = (undefined1  [16])0x0;
  puVar17[0x24] = uVar2;
  uVar2 = param_3[0x25];
  uVar10 = param_3[0x2c];
  uVar11 = param_3[0x2d];
  puVar17[0x25] = uVar4;
  puVar17[0x26] = uVar5;
  uVar4 = param_3[0x2f];
  uVar5 = param_3[0x30];
  puVar17[0x27] = uVar2;
  param_3[0x25] = 0;
  puVar17[0x2a] = param_3[0x28];
  param_3[0x28] = 0;
  puVar17[0x2d] = param_3[0x2b];
  uVar2 = param_3[0x2e];
  param_3[0x2b] = 0;
  param_3[0x2e] = 0;
  *(undefined1 (*) [16])(param_3 + 0x26) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0x29) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0x2c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0x2f) = (undefined1  [16])0x0;
  puVar17[0x30] = uVar2;
  *(undefined8 **)(this + 8) = puVar17;
  *(undefined8 **)this = puVar17 + 2;
  puVar17[0x28] = uVar6;
  puVar17[0x29] = uVar7;
  puVar17[0x2b] = uVar8;
  puVar17[0x2c] = uVar9;
  puVar17[0x2e] = uVar10;
  puVar17[0x2f] = uVar11;
  puVar17[0x31] = uVar4;
  puVar17[0x32] = uVar5;
  return;
}



/* void std::vector<int, std::allocator<int> >::_M_realloc_insert<int
   const&>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&)
    */

void __thiscall
std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
          (vector<int,std::allocator<int>> *this,void *param_2,undefined4 *param_3)

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
    if (0xfffffffffffffffe < uVar2) goto LAB_0010d570;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010d57a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010d570:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010d57a;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010d57a;
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
    if (__src == (void *)0x0) goto LAB_0010d54b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010d54b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> >
   >::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>
   const&>(__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,
   std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> > > >,
   std::shared_ptr<manifold::CsgLeafNode> const&) */

void __thiscall
std::
vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>const&>
          (vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
           *this,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0010d788;
    uVar9 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar9 = uVar5 + 1;
    }
    uVar9 = uVar9 << 4;
LAB_0010d792:
    pvVar7 = operator_new(uVar9);
    lVar10 = uVar9 + (long)pvVar7;
    lVar8 = (long)pvVar7 + 0x10;
  }
  else {
    uVar9 = uVar5 * 2;
    if (uVar9 < uVar5) {
LAB_0010d788:
      uVar9 = 0x7ffffffffffffff0;
      goto LAB_0010d792;
    }
    if (uVar9 != 0) {
      if (0x7ffffffffffffff < uVar9) {
        uVar9 = 0x7ffffffffffffff;
      }
      uVar9 = uVar9 << 4;
      goto LAB_0010d792;
    }
    lVar8 = 0x10;
    lVar10 = 0;
    pvVar7 = (void *)0x0;
  }
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)((long)pvVar7 + ((long)param_2 - (long)pvVar3));
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  lVar6 = *(long *)((long)pvVar7 + ((long)param_2 - (long)pvVar3) + 8);
  if (lVar6 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
  }
  if (param_2 == pvVar3) {
    if (param_2 != pvVar2) goto LAB_0010d718;
LAB_0010d74c:
    if (pvVar3 == (void *)0x0) goto LAB_0010d768;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((undefined8 *)((long)pvVar3 + lVar8))[1];
      uVar5 = uVar5 + 1;
      *(undefined8 *)((long)pvVar7 + lVar8) = *(undefined8 *)((long)pvVar3 + lVar8);
      ((undefined8 *)((long)pvVar7 + lVar8))[1] = uVar4;
      lVar8 = lVar8 + 0x10;
    } while (uVar5 < ((ulong)((long)param_2 + (-0x10 - (long)pvVar3)) >> 4) + 1);
    lVar8 = (long)param_2 + (long)pvVar7 + (0x10 - (long)pvVar3);
    if (param_2 != pvVar2) {
LAB_0010d718:
      uVar5 = 0;
      lVar6 = 0;
      do {
        uVar4 = ((undefined8 *)((long)param_2 + lVar6))[1];
        uVar5 = uVar5 + 1;
        *(undefined8 *)(lVar8 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
        ((undefined8 *)(lVar8 + lVar6))[1] = uVar4;
        lVar6 = lVar6 + 0x10;
      } while (uVar5 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
      lVar8 = (long)pvVar2 + (lVar8 - (long)param_2);
      goto LAB_0010d74c;
    }
  }
  operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
LAB_0010d768:
  *(void **)this = pvVar7;
  *(long *)(this + 8) = lVar8;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* void std::vector<std::shared_ptr<manifold::CsgNode>,
   std::allocator<std::shared_ptr<manifold::CsgNode> >
   >::_M_realloc_insert<std::shared_ptr<manifold::CsgNode>
   const&>(__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgNode>*,
   std::vector<std::shared_ptr<manifold::CsgNode>, std::allocator<std::shared_ptr<manifold::CsgNode>
   > > >, std::shared_ptr<manifold::CsgNode> const&) */

void __thiscall
std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>::
_M_realloc_insert<std::shared_ptr<manifold::CsgNode>const&>
          (vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
           *this,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0010d978;
    uVar9 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar9 = uVar5 + 1;
    }
    uVar9 = uVar9 << 4;
LAB_0010d982:
    pvVar7 = operator_new(uVar9);
    lVar10 = uVar9 + (long)pvVar7;
    lVar8 = (long)pvVar7 + 0x10;
  }
  else {
    uVar9 = uVar5 * 2;
    if (uVar9 < uVar5) {
LAB_0010d978:
      uVar9 = 0x7ffffffffffffff0;
      goto LAB_0010d982;
    }
    if (uVar9 != 0) {
      if (0x7ffffffffffffff < uVar9) {
        uVar9 = 0x7ffffffffffffff;
      }
      uVar9 = uVar9 << 4;
      goto LAB_0010d982;
    }
    lVar8 = 0x10;
    lVar10 = 0;
    pvVar7 = (void *)0x0;
  }
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)((long)pvVar7 + ((long)param_2 - (long)pvVar3));
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  lVar6 = *(long *)((long)pvVar7 + ((long)param_2 - (long)pvVar3) + 8);
  if (lVar6 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
  }
  if (param_2 == pvVar3) {
    if (param_2 != pvVar2) goto LAB_0010d908;
LAB_0010d93c:
    if (pvVar3 == (void *)0x0) goto LAB_0010d958;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((undefined8 *)((long)pvVar3 + lVar8))[1];
      uVar5 = uVar5 + 1;
      *(undefined8 *)((long)pvVar7 + lVar8) = *(undefined8 *)((long)pvVar3 + lVar8);
      ((undefined8 *)((long)pvVar7 + lVar8))[1] = uVar4;
      lVar8 = lVar8 + 0x10;
    } while (uVar5 < ((ulong)((long)param_2 + (-0x10 - (long)pvVar3)) >> 4) + 1);
    lVar8 = (long)param_2 + (long)pvVar7 + (0x10 - (long)pvVar3);
    if (param_2 != pvVar2) {
LAB_0010d908:
      uVar5 = 0;
      lVar6 = 0;
      do {
        uVar4 = ((undefined8 *)((long)param_2 + lVar6))[1];
        uVar5 = uVar5 + 1;
        *(undefined8 *)(lVar8 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
        ((undefined8 *)(lVar8 + lVar6))[1] = uVar4;
        lVar6 = lVar6 + 0x10;
      } while (uVar5 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
      lVar8 = (long)pvVar2 + (lVar8 - (long)param_2);
      goto LAB_0010d93c;
    }
  }
  operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
LAB_0010d958:
  *(void **)this = pvVar7;
  *(long *)(this + 8) = lVar8;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* void std::vector<int, std::allocator<int>
   >::_M_realloc_insert<int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int&&) */

void __thiscall
std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
          (vector<int,std::allocator<int>> *this,void *param_2,undefined4 *param_3)

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
    if (0xfffffffffffffffe < uVar2) goto LAB_0010dae0;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0010daea:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0010dae0:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0010daea;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0010daea;
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
    if (__src == (void *)0x0) goto LAB_0010dabb;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010dabb:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<manifold::Vec<unsigned long>, std::allocator<manifold::Vec<unsigned long> >
   >::_M_realloc_insert<manifold::Vec<unsigned long>
   >(__gnu_cxx::__normal_iterator<manifold::Vec<unsigned long>*, std::vector<manifold::Vec<unsigned
   long>, std::allocator<manifold::Vec<unsigned long> > > >, manifold::Vec<unsigned long>&&) */

void __thiscall
std::vector<manifold::Vec<unsigned_long>,std::allocator<manifold::Vec<unsigned_long>>>::
_M_realloc_insert<manifold::Vec<unsigned_long>>
          (vector<manifold::Vec<unsigned_long>,std::allocator<manifold::Vec<unsigned_long>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *__dest;
  undefined8 *puVar8;
  size_t sVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *local_88;
  undefined8 *local_48;
  long local_40;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar6 = (long)puVar1 - (long)puVar2 >> 3;
  uVar7 = lVar6 * -0x5555555555555555;
  if (uVar7 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    uVar11 = uVar7 + 1;
    if (0xfffffffffffffffe < uVar7) goto LAB_0010dd08;
    if (0x555555555555555 < uVar11) {
      uVar11 = 0x555555555555555;
    }
    uVar11 = uVar11 * 0x18;
LAB_0010dd12:
    local_48 = (undefined8 *)operator_new(uVar11);
    local_40 = (long)local_48 + uVar11;
    local_88 = local_48 + 3;
  }
  else {
    uVar11 = lVar6 * 0x5555555555555556;
    if (uVar11 < uVar7) {
LAB_0010dd08:
      uVar11 = 0x7ffffffffffffff8;
      goto LAB_0010dd12;
    }
    if (uVar11 != 0) {
      if (0x555555555555555 < uVar11) {
        uVar11 = 0x555555555555555;
      }
      uVar11 = uVar11 * 0x18;
      goto LAB_0010dd12;
    }
    local_88 = (undefined8 *)0x18;
    local_40 = 0;
    local_48 = (undefined8 *)0x0;
  }
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  *(undefined1 (*) [16])(param_3 + 1) = (undefined1  [16])0x0;
  puVar10 = (undefined8 *)((long)local_48 + ((long)param_2 - (long)puVar2));
  uVar3 = *param_3;
  *param_3 = 0;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  *puVar10 = uVar3;
  puVar12 = puVar2;
  puVar14 = local_48;
  puVar10 = puVar2;
  puVar13 = param_2;
  if (param_2 == puVar2) {
    puVar12 = local_88;
    if (param_2 != puVar1) goto LAB_0010dd85;
LAB_0010de3f:
    if (puVar2 == (undefined8 *)0x0) goto LAB_0010de53;
  }
  else {
    do {
      *puVar14 = 0;
      __dest = (undefined8 *)0x0;
      puVar8 = (undefined8 *)*puVar12;
      *(undefined1 (*) [16])(puVar14 + 1) = (undefined1  [16])0x0;
      lVar6 = puVar12[1];
      if (lVar6 != 0) {
        sVar9 = lVar6 << 3;
        __dest = (undefined8 *)malloc(sVar9);
        if ((long)sVar9 < 9) {
          if (sVar9 == 8) {
            *__dest = *puVar8;
          }
        }
        else {
          __dest = (undefined8 *)memmove(__dest,puVar8,sVar9);
        }
      }
      puVar12 = puVar12 + 3;
      *puVar14 = __dest;
      puVar14[1] = lVar6;
      puVar14[2] = lVar6;
      puVar14 = puVar14 + 3;
    } while (puVar12 != param_2);
    local_88 = (undefined8 *)
               ((long)local_48 +
               ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x30);
    puVar12 = local_88;
    if (param_2 == puVar1) {
LAB_0010de28:
      do {
        if ((void *)*puVar10 != (void *)0x0) {
          free((void *)*puVar10);
        }
        puVar10 = puVar10 + 3;
      } while (puVar1 != puVar10);
      goto LAB_0010de3f;
    }
LAB_0010dd85:
    do {
      lVar6 = puVar13[1];
      puVar14 = (undefined8 *)*puVar13;
      puVar8 = (undefined8 *)0x0;
      *puVar12 = 0;
      *(undefined1 (*) [16])(puVar12 + 1) = (undefined1  [16])0x0;
      if (lVar6 != 0) {
        sVar9 = lVar6 << 3;
        puVar8 = (undefined8 *)malloc(sVar9);
        if ((long)sVar9 < 9) {
          if (sVar9 == 8) {
            *puVar8 = *puVar14;
          }
        }
        else {
          puVar8 = (undefined8 *)memmove(puVar8,puVar14,sVar9);
        }
      }
      puVar13 = puVar13 + 3;
      *puVar12 = puVar8;
      puVar12[1] = lVar6;
      puVar12[2] = lVar6;
      puVar12 = puVar12 + 3;
    } while (puVar13 != puVar1);
    local_88 = (undefined8 *)
               ((long)local_88 +
               ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x18);
    if (puVar2 != puVar1) goto LAB_0010de28;
  }
  operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
LAB_0010de53:
  *(undefined8 **)this = local_48;
  *(undefined8 **)(this + 8) = local_88;
  *(long *)(this + 0x10) = local_40;
  return;
}



/* void std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> >
   >::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>
   >(__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgLeafNode>*,
   std::vector<std::shared_ptr<manifold::CsgLeafNode>,
   std::allocator<std::shared_ptr<manifold::CsgLeafNode> > > >,
   std::shared_ptr<manifold::CsgLeafNode>&&) */

void __thiscall
std::
vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
::_M_realloc_insert<std::shared_ptr<manifold::CsgLeafNode>>
          (vector<std::shared_ptr<manifold::CsgLeafNode>,std::allocator<std::shared_ptr<manifold::CsgLeafNode>>>
           *this,void *param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0010e058;
    uVar9 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar9 = uVar5 + 1;
    }
    uVar9 = uVar9 << 4;
LAB_0010e062:
    pvVar7 = operator_new(uVar9);
    lVar10 = uVar9 + (long)pvVar7;
    lVar8 = (long)pvVar7 + 0x10;
  }
  else {
    uVar9 = uVar5 * 2;
    if (uVar9 < uVar5) {
LAB_0010e058:
      uVar9 = 0x7ffffffffffffff0;
      goto LAB_0010e062;
    }
    if (uVar9 != 0) {
      if (0x7ffffffffffffff < uVar9) {
        uVar9 = 0x7ffffffffffffff;
      }
      uVar9 = uVar9 << 4;
      goto LAB_0010e062;
    }
    lVar8 = 0x10;
    lVar10 = 0;
    pvVar7 = (void *)0x0;
  }
  uVar4 = *(undefined8 *)(*param_3 + 8);
  *param_3 = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)((long)pvVar7 + ((long)param_2 - (long)pvVar3));
  *puVar1 = *(undefined8 *)*param_3;
  puVar1[1] = uVar4;
  if (param_2 == pvVar3) {
    if (param_2 != pvVar2) goto LAB_0010dfe0;
LAB_0010e01c:
    if (pvVar3 == (void *)0x0) goto LAB_0010e038;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((undefined8 *)((long)pvVar3 + lVar8))[1];
      uVar5 = uVar5 + 1;
      *(undefined8 *)((long)pvVar7 + lVar8) = *(undefined8 *)((long)pvVar3 + lVar8);
      ((undefined8 *)((long)pvVar7 + lVar8))[1] = uVar4;
      lVar8 = lVar8 + 0x10;
    } while (uVar5 < ((ulong)((long)param_2 + (-0x10 - (long)pvVar3)) >> 4) + 1);
    lVar8 = (long)param_2 + (long)pvVar7 + (0x10 - (long)pvVar3);
    if (param_2 != pvVar2) {
LAB_0010dfe0:
      uVar5 = 0;
      lVar6 = 0;
      do {
        uVar4 = ((undefined8 *)((long)param_2 + lVar6))[1];
        uVar5 = uVar5 + 1;
        *(undefined8 *)(lVar8 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
        ((undefined8 *)(lVar8 + lVar6))[1] = uVar4;
        lVar6 = lVar6 + 0x10;
      } while (uVar5 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
      lVar8 = (long)pvVar2 + (lVar8 - (long)param_2);
      goto LAB_0010e01c;
    }
  }
  operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
LAB_0010e038:
  *(void **)this = pvVar7;
  *(long *)(this + 8) = lVar8;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* void std::vector<std::shared_ptr<manifold::CsgOpNode>,
   std::allocator<std::shared_ptr<manifold::CsgOpNode> >
   >::_M_realloc_insert<std::shared_ptr<manifold::CsgOpNode>
   >(__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgOpNode>*,
   std::vector<std::shared_ptr<manifold::CsgOpNode>,
   std::allocator<std::shared_ptr<manifold::CsgOpNode> > > >,
   std::shared_ptr<manifold::CsgOpNode>&&) */

void __thiscall
std::
vector<std::shared_ptr<manifold::CsgOpNode>,std::allocator<std::shared_ptr<manifold::CsgOpNode>>>::
_M_realloc_insert<std::shared_ptr<manifold::CsgOpNode>>
          (vector<std::shared_ptr<manifold::CsgOpNode>,std::allocator<std::shared_ptr<manifold::CsgOpNode>>>
           *this,void *param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0010e228;
    uVar9 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar9 = uVar5 + 1;
    }
    uVar9 = uVar9 << 4;
LAB_0010e232:
    pvVar7 = operator_new(uVar9);
    lVar10 = uVar9 + (long)pvVar7;
    lVar8 = (long)pvVar7 + 0x10;
  }
  else {
    uVar9 = uVar5 * 2;
    if (uVar9 < uVar5) {
LAB_0010e228:
      uVar9 = 0x7ffffffffffffff0;
      goto LAB_0010e232;
    }
    if (uVar9 != 0) {
      if (0x7ffffffffffffff < uVar9) {
        uVar9 = 0x7ffffffffffffff;
      }
      uVar9 = uVar9 << 4;
      goto LAB_0010e232;
    }
    lVar8 = 0x10;
    lVar10 = 0;
    pvVar7 = (void *)0x0;
  }
  uVar4 = *(undefined8 *)(*param_3 + 8);
  *param_3 = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)((long)pvVar7 + ((long)param_2 - (long)pvVar3));
  *puVar1 = *(undefined8 *)*param_3;
  puVar1[1] = uVar4;
  if (param_2 == pvVar3) {
    if (param_2 != pvVar2) goto LAB_0010e1b0;
LAB_0010e1ec:
    if (pvVar3 == (void *)0x0) goto LAB_0010e208;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((undefined8 *)((long)pvVar3 + lVar8))[1];
      uVar5 = uVar5 + 1;
      *(undefined8 *)((long)pvVar7 + lVar8) = *(undefined8 *)((long)pvVar3 + lVar8);
      ((undefined8 *)((long)pvVar7 + lVar8))[1] = uVar4;
      lVar8 = lVar8 + 0x10;
    } while (uVar5 < ((ulong)((long)param_2 + (-0x10 - (long)pvVar3)) >> 4) + 1);
    lVar8 = (long)param_2 + (long)pvVar7 + (0x10 - (long)pvVar3);
    if (param_2 != pvVar2) {
LAB_0010e1b0:
      uVar5 = 0;
      lVar6 = 0;
      do {
        uVar4 = ((undefined8 *)((long)param_2 + lVar6))[1];
        uVar5 = uVar5 + 1;
        *(undefined8 *)(lVar8 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
        ((undefined8 *)(lVar8 + lVar6))[1] = uVar4;
        lVar6 = lVar6 + 0x10;
      } while (uVar5 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
      lVar8 = (long)pvVar2 + (lVar8 - (long)param_2);
      goto LAB_0010e1ec;
    }
  }
  operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
LAB_0010e208:
  *(void **)this = pvVar7;
  *(long *)(this + 8) = lVar8;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
_M_dispose(_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  manifold::CsgOpNode::~CsgOpNode((CsgOpNode *)(this + 0x10));
  return;
}



/* void std::vector<std::shared_ptr<manifold::CsgNode>,
   std::allocator<std::shared_ptr<manifold::CsgNode> >
   >::_M_realloc_insert<std::shared_ptr<manifold::CsgNode>
   >(__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgNode>*,
   std::vector<std::shared_ptr<manifold::CsgNode>, std::allocator<std::shared_ptr<manifold::CsgNode>
   > > >, std::shared_ptr<manifold::CsgNode>&&) */

void __thiscall
std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>::
_M_realloc_insert<std::shared_ptr<manifold::CsgNode>>
          (vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>
           *this,void *param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0010e408;
    uVar9 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar9 = uVar5 + 1;
    }
    uVar9 = uVar9 << 4;
LAB_0010e412:
    pvVar7 = operator_new(uVar9);
    lVar10 = uVar9 + (long)pvVar7;
    lVar8 = (long)pvVar7 + 0x10;
  }
  else {
    uVar9 = uVar5 * 2;
    if (uVar9 < uVar5) {
LAB_0010e408:
      uVar9 = 0x7ffffffffffffff0;
      goto LAB_0010e412;
    }
    if (uVar9 != 0) {
      if (0x7ffffffffffffff < uVar9) {
        uVar9 = 0x7ffffffffffffff;
      }
      uVar9 = uVar9 << 4;
      goto LAB_0010e412;
    }
    lVar8 = 0x10;
    lVar10 = 0;
    pvVar7 = (void *)0x0;
  }
  uVar4 = *(undefined8 *)(*param_3 + 8);
  *param_3 = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)((long)pvVar7 + ((long)param_2 - (long)pvVar3));
  *puVar1 = *(undefined8 *)*param_3;
  puVar1[1] = uVar4;
  if (param_2 == pvVar3) {
    if (param_2 != pvVar2) goto LAB_0010e390;
LAB_0010e3cc:
    if (pvVar3 == (void *)0x0) goto LAB_0010e3e8;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((undefined8 *)((long)pvVar3 + lVar8))[1];
      uVar5 = uVar5 + 1;
      *(undefined8 *)((long)pvVar7 + lVar8) = *(undefined8 *)((long)pvVar3 + lVar8);
      ((undefined8 *)((long)pvVar7 + lVar8))[1] = uVar4;
      lVar8 = lVar8 + 0x10;
    } while (uVar5 < ((ulong)((long)param_2 + (-0x10 - (long)pvVar3)) >> 4) + 1);
    lVar8 = (long)param_2 + (long)pvVar7 + (0x10 - (long)pvVar3);
    if (param_2 != pvVar2) {
LAB_0010e390:
      uVar5 = 0;
      lVar6 = 0;
      do {
        uVar4 = ((undefined8 *)((long)param_2 + lVar6))[1];
        uVar5 = uVar5 + 1;
        *(undefined8 *)(lVar8 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
        ((undefined8 *)(lVar8 + lVar6))[1] = uVar4;
        lVar6 = lVar6 + 0x10;
      } while (uVar5 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
      lVar8 = (long)pvVar2 + (lVar8 - (long)param_2);
      goto LAB_0010e3cc;
    }
  }
  operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
LAB_0010e3e8:
  *(void **)this = pvVar7;
  *(long *)(this + 8) = lVar8;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* manifold::CsgOpNode::Boolean(std::shared_ptr<manifold::CsgNode> const&, manifold::OpType) [clone
   .cold] */

void manifold::CsgOpNode::Boolean(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* manifold::CsgNode::Boolean(std::shared_ptr<manifold::CsgNode> const&, manifold::OpType) [clone
   .cold] */

void manifold::CsgNode::Boolean(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* manifold::CsgOpNode::ToLeafNode() const [clone .cold] */

void manifold::CsgOpNode::ToLeafNode(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void std::vector<std::shared_ptr<manifold::CsgStackFrame>,
   std::allocator<std::shared_ptr<manifold::CsgStackFrame> >
   >::_M_realloc_insert<std::shared_ptr<manifold::CsgStackFrame>
   >(__gnu_cxx::__normal_iterator<std::shared_ptr<manifold::CsgStackFrame>*,
   std::vector<std::shared_ptr<manifold::CsgStackFrame>,
   std::allocator<std::shared_ptr<manifold::CsgStackFrame> > > >,
   std::shared_ptr<manifold::CsgStackFrame>&&) */

void __thiscall
std::
vector<std::shared_ptr<manifold::CsgStackFrame>,std::allocator<std::shared_ptr<manifold::CsgStackFrame>>>
::_M_realloc_insert<std::shared_ptr<manifold::CsgStackFrame>>
          (vector<std::shared_ptr<manifold::CsgStackFrame>,std::allocator<std::shared_ptr<manifold::CsgStackFrame>>>
           *this,void *param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0010e5e8;
    uVar9 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar9 = uVar5 + 1;
    }
    uVar9 = uVar9 << 4;
LAB_0010e5f2:
    pvVar7 = operator_new(uVar9);
    lVar10 = uVar9 + (long)pvVar7;
    lVar8 = (long)pvVar7 + 0x10;
  }
  else {
    uVar9 = uVar5 * 2;
    if (uVar9 < uVar5) {
LAB_0010e5e8:
      uVar9 = 0x7ffffffffffffff0;
      goto LAB_0010e5f2;
    }
    if (uVar9 != 0) {
      if (0x7ffffffffffffff < uVar9) {
        uVar9 = 0x7ffffffffffffff;
      }
      uVar9 = uVar9 << 4;
      goto LAB_0010e5f2;
    }
    lVar8 = 0x10;
    lVar10 = 0;
    pvVar7 = (void *)0x0;
  }
  uVar4 = *(undefined8 *)(*param_3 + 8);
  *param_3 = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)((long)pvVar7 + ((long)param_2 - (long)pvVar3));
  *puVar1 = *(undefined8 *)*param_3;
  puVar1[1] = uVar4;
  if (param_2 == pvVar3) {
    if (param_2 != pvVar2) goto LAB_0010e570;
LAB_0010e5ac:
    if (pvVar3 == (void *)0x0) goto LAB_0010e5c8;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((undefined8 *)((long)pvVar3 + lVar8))[1];
      uVar5 = uVar5 + 1;
      *(undefined8 *)((long)pvVar7 + lVar8) = *(undefined8 *)((long)pvVar3 + lVar8);
      ((undefined8 *)((long)pvVar7 + lVar8))[1] = uVar4;
      lVar8 = lVar8 + 0x10;
    } while (uVar5 < ((ulong)((long)param_2 + (-0x10 - (long)pvVar3)) >> 4) + 1);
    lVar8 = (long)param_2 + (long)pvVar7 + (0x10 - (long)pvVar3);
    if (param_2 != pvVar2) {
LAB_0010e570:
      uVar5 = 0;
      lVar6 = 0;
      do {
        uVar4 = ((undefined8 *)((long)param_2 + lVar6))[1];
        uVar5 = uVar5 + 1;
        *(undefined8 *)(lVar8 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
        ((undefined8 *)(lVar8 + lVar6))[1] = uVar4;
        lVar6 = lVar6 + 0x10;
      } while (uVar5 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
      lVar8 = (long)pvVar2 + (lVar8 - (long)param_2);
      goto LAB_0010e5ac;
    }
  }
  operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
LAB_0010e5c8:
  *(void **)this = pvVar7;
  *(long *)(this + 8) = lVar8;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* manifold::Manifold::Impl::MeshRelationD::MeshRelationD(manifold::Manifold::Impl::MeshRelationD
   const&) */

void __thiscall
manifold::Manifold::Impl::MeshRelationD::MeshRelationD(MeshRelationD *this,MeshRelationD *param_1)

{
  MeshRelationD *pMVar1;
  _Rb_tree_node_base *p_Var2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  _Rb_tree_node *p_Var6;
  _Rb_tree_node *p_Var7;
  undefined8 *puVar8;
  _Alloc_node *p_Var9;
  _Rb_tree_node *p_Var10;
  _Alloc_node *extraout_RDX;
  _Alloc_node *extraout_RDX_00;
  _Alloc_node *extraout_RDX_01;
  _Alloc_node *extraout_RDX_02;
  size_t sVar11;
  long in_FS_OFFSET;
  undefined8 *local_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  pMVar1 = this + 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(undefined8 *)param_1;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = 0;
  puVar5 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)this = uVar3;
  local_58 = (undefined8 *)0x0;
  local_50 = lVar4;
  lStack_48 = lVar4;
  if (lVar4 == 0) {
    p_Var9 = (_Alloc_node *)0x0;
    if (pMVar1 != (MeshRelationD *)&local_58) {
      puVar8 = (undefined8 *)0x0;
LAB_0010e6f6:
      *(undefined8 **)(this + 8) = puVar8;
      *(long *)(this + 0x10) = lVar4;
      *(long *)(this + 0x18) = lVar4;
    }
  }
  else {
    sVar11 = lVar4 * 8;
    puVar8 = (undefined8 *)malloc(sVar11);
    local_58 = puVar8;
    if ((long)sVar11 < 9) {
      p_Var9 = extraout_RDX;
      if (sVar11 != 8) {
        if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010e6f6;
        if (puVar8 != (undefined8 *)0x0) {
          free(puVar8);
          p_Var9 = extraout_RDX_02;
        }
        goto LAB_0010e6fe;
      }
      *puVar8 = *puVar5;
    }
    else {
      puVar8 = (undefined8 *)memmove(puVar8,puVar5,sVar11);
      p_Var9 = extraout_RDX_00;
    }
    if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010e6f6;
    free(puVar8);
    p_Var9 = extraout_RDX_01;
  }
LAB_0010e6fe:
  *(undefined8 *)(this + 0x30) = 0;
  p_Var6 = *(_Rb_tree_node **)(param_1 + 0x30);
  p_Var2 = (_Rb_tree_node_base *)(this + 0x28);
  *(undefined4 *)(this + 0x28) = 0;
  *(_Rb_tree_node_base **)(this + 0x38) = p_Var2;
  *(_Rb_tree_node_base **)(this + 0x40) = p_Var2;
  *(undefined8 *)(this + 0x48) = 0;
  if (p_Var6 != (_Rb_tree_node *)0x0) {
    p_Var7 = std::
             _Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>
             ::
             _M_copy<false,std::_Rb_tree<int,std::pair<int_const,manifold::Manifold::Impl::Relation>,std::_Select1st<std::pair<int_const,manifold::Manifold::Impl::Relation>>,std::less<int>,std::allocator<std::pair<int_const,manifold::Manifold::Impl::Relation>>>::_Alloc_node>
                       (p_Var6,p_Var2,p_Var9);
    p_Var6 = p_Var7;
    do {
      p_Var10 = p_Var6;
      p_Var6 = *(_Rb_tree_node **)(p_Var10 + 0x10);
    } while (p_Var6 != (_Rb_tree_node *)0x0);
    *(_Rb_tree_node **)(this + 0x38) = p_Var10;
    p_Var6 = p_Var7;
    do {
      p_Var10 = p_Var6;
      p_Var6 = *(_Rb_tree_node **)(p_Var10 + 0x18);
    } while (p_Var6 != (_Rb_tree_node *)0x0);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(_Rb_tree_node **)(this + 0x40) = p_Var10;
    *(_Rb_tree_node **)(this + 0x30) = p_Var7;
    *(undefined8 *)(this + 0x48) = uVar3;
  }
  *(undefined8 *)(this + 0x50) = 0;
  pMVar1 = this + 0x50;
  puVar5 = *(undefined8 **)(param_1 + 0x50);
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x58);
  local_58 = (undefined8 *)0x0;
  if (lVar4 == 0) {
    if (pMVar1 != (MeshRelationD *)&local_58) {
      puVar8 = (undefined8 *)0x0;
LAB_0010e7af:
      *(undefined8 **)(this + 0x50) = puVar8;
      *(long *)(this + 0x58) = lVar4;
      *(long *)(this + 0x60) = lVar4;
    }
  }
  else {
    sVar11 = lVar4 * 0x10;
    local_50 = lVar4;
    lStack_48 = lVar4;
    puVar8 = (undefined8 *)malloc(sVar11);
    local_58 = puVar8;
    if ((long)sVar11 < 0x11) {
      if (sVar11 != 0x10) {
        if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010e7af;
        if (puVar8 != (undefined8 *)0x0) {
          free(puVar8);
        }
        goto LAB_0010e7b7;
      }
      uVar3 = puVar5[1];
      *puVar8 = *puVar5;
      puVar8[1] = uVar3;
    }
    else {
      puVar8 = (undefined8 *)memmove(puVar8,puVar5,sVar11);
    }
    if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010e7af;
    free(puVar8);
  }
LAB_0010e7b7:
  *(undefined8 *)(this + 0x68) = 0;
  pMVar1 = this + 0x68;
  puVar5 = *(undefined8 **)(param_1 + 0x68);
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  lVar4 = *(long *)(param_1 + 0x70);
  local_58 = (undefined8 *)0x0;
  local_50 = lVar4;
  lStack_48 = lVar4;
  if (lVar4 == 0) {
    if (pMVar1 != (MeshRelationD *)&local_58) {
      puVar8 = (undefined8 *)0x0;
LAB_0010e7fa:
      *(undefined8 **)(this + 0x68) = puVar8;
      *(long *)(this + 0x70) = lVar4;
      *(long *)(this + 0x78) = lVar4;
    }
LAB_0010e802:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    sVar11 = lVar4 * 0xc;
    puVar8 = (undefined8 *)malloc(sVar11);
    local_58 = puVar8;
    if ((long)sVar11 < 0xd) {
      if (sVar11 == 0xc) {
        *puVar8 = *puVar5;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
        goto LAB_0010e91e;
      }
      if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010e7fa;
      if (puVar8 == (undefined8 *)0x0) goto LAB_0010e802;
    }
    else {
      puVar8 = (undefined8 *)memmove(puVar8,puVar5,sVar11);
LAB_0010e91e:
      if (pMVar1 != (MeshRelationD *)&local_58) goto LAB_0010e7fa;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      free(puVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::shared_ptr<manifold::Manifold::Impl const>::shared_ptr<std::allocator<void>,
   manifold::Manifold::Impl>(std::_Sp_alloc_shared_tag<std::allocator<void> >,
   manifold::Manifold::Impl&&) */

void std::shared_ptr<manifold::Manifold::Impl_const>::
     shared_ptr<std::allocator<void>,manifold::Manifold::Impl>(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* manifold::Manifold::Impl::MeshRelationD::MeshRelationD(manifold::Manifold::Impl::MeshRelationD
   const&) */

void __thiscall
manifold::Manifold::Impl::MeshRelationD::MeshRelationD(MeshRelationD *this,MeshRelationD *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_ptr_inplace<manifold::CsgOpNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgOpNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::Manifold::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_ptr_inplace<manifold::Manifold::Impl const, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::Manifold::Impl_const,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgLeafNode,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_ptr_inplace<manifold::CsgStackFrame, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<manifold::CsgStackFrame,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,
   std::allocator<std::shared_ptr<manifold::CsgNode> > >, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<std::vector<std::shared_ptr<manifold::CsgNode>,std::allocator<std::shared_ptr<manifold::CsgNode>>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_ptr_inplace<std::recursive_mutex, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::
~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<std::recursive_mutex,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.