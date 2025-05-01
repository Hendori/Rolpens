
/* glslang::TAttributeArgs::size() const */

long __thiscall glslang::TAttributeArgs::size(TAttributeArgs *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(code **)(*plVar1 + 0x198) == TIntermAggregate::getSequence) {
    return plVar1[0x1a] - plVar1[0x19] >> 3;
  }
  lVar2 = (**(code **)(*plVar1 + 0x198))();
  return *(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 3;
}



/* glslang::TAttributeArgs::getConstUnion(glslang::TBasicType, int) const */

long __thiscall glslang::TAttributeArgs::getConstUnion(TAttributeArgs *this,int param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 8);
  if (plVar3 != (long *)0x0) {
    if (*(code **)(*plVar3 + 0x198) == TIntermAggregate::getSequence) {
      lVar2 = plVar3[0x19];
      if ((int)(plVar3[0x1a] - lVar2 >> 3) <= param_3) {
        return 0;
      }
    }
    else {
      lVar2 = (**(code **)(*plVar3 + 0x198))();
      if ((int)(*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 3) <= param_3) {
        return 0;
      }
      pcVar1 = *(code **)(**(long **)(this + 8) + 0x198);
      if (pcVar1 == TIntermAggregate::getSequence) {
        lVar2 = (*(long **)(this + 8))[0x19];
      }
      else {
        lVar2 = (*pcVar1)();
        lVar2 = *(long *)(lVar2 + 8);
      }
    }
    lVar2 = (**(code **)(**(long **)(lVar2 + (long)param_3 * 8) + 0x28))();
    if (lVar2 != 0) {
      pcVar1 = *(code **)(**(long **)(this + 8) + 0x198);
      if (pcVar1 == TIntermAggregate::getSequence) {
        plVar3 = *(long **)(this + 8) + 0x18;
      }
      else {
        plVar3 = (long *)(*pcVar1)();
      }
      lVar2 = (**(code **)(**(long **)(plVar3[1] + (long)param_3 * 8) + 0x28))();
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((lVar2 != 0) && (param_2 == *(int *)(lVar2 + 8))) {
        return lVar2;
      }
    }
  }
  return 0;
}



/* glslang::TAttributeArgs::getInt(int&, int) const */

undefined8 glslang::TAttributeArgs::getInt(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 in_register_00000034;
  
  puVar1 = (undefined4 *)getConstUnion((TAttributeArgs *)param_1,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)CONCAT44(in_register_00000034,param_2) = *puVar1;
    return 1;
  }
  return 0;
}



/* glslang::TAttributeArgs::getString(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >&, int, bool) const */

int __thiscall
glslang::TAttributeArgs::getString
          (TAttributeArgs *this,basic_string *param_1,int param_2,bool param_3)

{
  basic_string *pbVar1;
  ulong __n;
  long lVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  char *pcVar7;
  basic_string *__dest;
  ulong uVar8;
  undefined4 in_register_00000014;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = 0x17;
  plVar6 = (long *)getConstUnion(this,0x17,CONCAT44(in_register_00000014,param_2));
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  pbVar1 = (basic_string *)*plVar6;
  if (pbVar1 == param_1) goto LAB_00100208;
  __dest = *(basic_string **)(param_1 + 8);
  __n = *(ulong *)(pbVar1 + 0x10);
  if (__dest == param_1 + 0x18) {
    uVar8 = 0xf;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar8 < __n) {
    if ((long)__n < 0) {
      std::__throw_length_error("basic_string::_M_create");
      lVar2 = *(long *)(lVar10 + 0x10);
      if (lVar2 == 6) {
        piVar3 = *(int **)(lVar10 + 8);
        if ((*piVar3 == 0x6e617262) && ((short)piVar3[1] == 0x6863)) {
          return 2;
        }
        if ((*piVar3 == 0x6f726e75) && ((short)piVar3[1] == 0x6c6c)) {
          return 0x12;
        }
        if ((*piVar3 == 0x6f707865) && ((short)piVar3[1] == 0x7472)) {
          return 0x4d;
        }
      }
      else {
        if (lVar2 == 0xc) {
          if ((**(long **)(lVar10 + 8) == 0x616c665f746e6f64) &&
             ((int)(*(long **)(lVar10 + 8))[1] == 0x6e657474)) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
          return (uVar5 ^ 1) * 2;
        }
        if (lVar2 == 7) {
          if ((**(int **)(lVar10 + 8) == 0x74616c66) &&
             (*(int *)((long)*(int **)(lVar10 + 8) + 3) == 0x6e657474)) {
            return 7;
          }
        }
        else {
          if (lVar2 == 4) {
            iVar4 = 0x13;
            if (**(int **)(lVar10 + 8) != 0x706f6f6c) {
              iVar4 = 0;
            }
            return iVar4;
          }
          if (lVar2 == 0xb) {
            if ((**(long **)(lVar10 + 8) == 0x726e755f746e6f64) &&
               (*(int *)((long)*(long **)(lVar10 + 8) + 7) == 0x6c6c6f72)) {
              return 0x13;
            }
          }
          else if (lVar2 == 0x13) {
            plVar6 = *(long **)(lVar10 + 8);
            if ((*plVar6 == 0x6e65646e65706564 && plVar6[1] == 0x6e69666e695f7963) &&
               (*(int *)((long)plVar6 + 0xf) == 0x6574696e)) {
              return 0x1b;
            }
          }
          else if (lVar2 == 0x11) {
            plVar6 = *(long **)(lVar10 + 8);
            if ((*plVar6 == 0x6e65646e65706564 && plVar6[1] == 0x74676e656c5f7963) &&
               ((char)plVar6[2] == 'h')) {
              return 0x1c;
            }
          }
          else if (lVar2 == 0xe) {
            plVar6 = *(long **)(lVar10 + 8);
            if ((*plVar6 == 0x726574695f6e696d) &&
               (*(long *)((long)plVar6 + 6) == 0x736e6f6974617265)) {
              return 0x1d;
            }
            if ((*plVar6 == 0x726574695f78616d) &&
               (*(long *)((long)plVar6 + 6) == 0x736e6f6974617265)) {
              return 0x1e;
            }
          }
          else if (lVar2 == 0x12) {
            plVar6 = *(long **)(lVar10 + 8);
            if ((*plVar6 == 0x6f69746172657469 && plVar6[1] == 0x7069746c756d5f6e) &&
               ((short)plVar6[2] == 0x656c)) {
              return 0x1f;
            }
          }
          else {
            if (lVar2 == 10) {
              if ((**(long **)(lVar10 + 8) == 0x756f635f6c656570) &&
                 ((short)(*(long **)(lVar10 + 8))[1] == 0x746e)) {
                uVar5 = 0;
              }
              else {
                uVar5 = 1;
              }
              return (uVar5 ^ 1) << 5;
            }
            if (lVar2 == 0xd) {
              if ((**(long **)(lVar10 + 8) == 0x5f6c616974726170) &&
                 (*(long *)((long)*(long **)(lVar10 + 8) + 5) == 0x746e756f635f6c61)) {
                return 0x21;
              }
            }
            else if (lVar2 == 0x1d) {
              plVar6 = *(long **)(lVar10 + 8);
              if ((*plVar6 == 0x70756f7267627573 && plVar6[1] == 0x6d726f66696e755f) &&
                 (*(long *)((long)plVar6 + 0xd) == 0x746e6f635f6d726f &&
                  *(long *)((long)plVar6 + 0x15) == 0x776f6c665f6c6f72)) {
                return 0x4c;
              }
            }
            else if (((lVar2 == 0x15) &&
                     (plVar6 = *(long **)(lVar10 + 8),
                     *plVar6 == 0x6c6c616d6978616d && plVar6[1] == 0x766e6f6365725f79)) &&
                    (*(long *)((long)plVar6 + 0xd) == 0x7365677265766e6f)) {
              return 0x4e;
            }
          }
        }
      }
      return 0;
    }
    uVar8 = uVar8 * 2;
    uVar11 = 0x7fffffffffffffff;
    if (uVar8 < 0x8000000000000000) {
      uVar11 = uVar8;
    }
    if (uVar8 <= __n) {
      uVar11 = __n;
    }
    __dest = (basic_string *)glslang::TPoolAllocator::allocate(*(ulong *)param_1);
    *(ulong *)(param_1 + 0x18) = uVar11;
    *(basic_string **)(param_1 + 8) = __dest;
LAB_00100290:
    if (__n == 1) {
      *__dest = **(basic_string **)(pbVar1 + 8);
      __dest = *(basic_string **)(param_1 + 8);
    }
    else {
      memcpy(__dest,*(basic_string **)(pbVar1 + 8),__n);
      __dest = *(basic_string **)(param_1 + 8);
    }
  }
  else if (__n != 0) goto LAB_00100290;
  *(ulong *)(param_1 + 0x10) = __n;
  __dest[__n] = (basic_string)0x0;
LAB_00100208:
  if (param_3) {
    pcVar9 = *(char **)(param_1 + 8);
    pcVar7 = pcVar9 + *(long *)(param_1 + 0x10);
    for (; pcVar7 != pcVar9; pcVar9 = pcVar9 + 1) {
      iVar4 = tolower((int)*pcVar9);
      *pcVar9 = (char)iVar4;
    }
  }
  return 1;
}



/* glslang::TParseContext::attributeFromName(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) const */

int __thiscall glslang::TParseContext::attributeFromName(TParseContext *this,basic_string *param_1)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 6) {
    piVar2 = *(int **)(param_1 + 8);
    if ((*piVar2 == 0x6e617262) && ((short)piVar2[1] == 0x6863)) {
      return 2;
    }
    if ((*piVar2 == 0x6f726e75) && ((short)piVar2[1] == 0x6c6c)) {
      return 0x12;
    }
    if ((*piVar2 == 0x6f707865) && ((short)piVar2[1] == 0x7472)) {
      return 0x4d;
    }
  }
  else {
    if (lVar1 == 0xc) {
      if ((**(long **)(param_1 + 8) == 0x616c665f746e6f64) &&
         ((int)(*(long **)(param_1 + 8))[1] == 0x6e657474)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      return (uVar4 ^ 1) * 2;
    }
    if (lVar1 == 7) {
      if ((**(int **)(param_1 + 8) == 0x74616c66) &&
         (*(int *)((long)*(int **)(param_1 + 8) + 3) == 0x6e657474)) {
        return 7;
      }
    }
    else {
      if (lVar1 == 4) {
        iVar5 = 0x13;
        if (**(int **)(param_1 + 8) != 0x706f6f6c) {
          iVar5 = 0;
        }
        return iVar5;
      }
      if (lVar1 == 0xb) {
        if ((**(long **)(param_1 + 8) == 0x726e755f746e6f64) &&
           (*(int *)((long)*(long **)(param_1 + 8) + 7) == 0x6c6c6f72)) {
          return 0x13;
        }
      }
      else if (lVar1 == 0x13) {
        plVar3 = *(long **)(param_1 + 8);
        if ((*plVar3 == 0x6e65646e65706564 && plVar3[1] == 0x6e69666e695f7963) &&
           (*(int *)((long)plVar3 + 0xf) == 0x6574696e)) {
          return 0x1b;
        }
      }
      else if (lVar1 == 0x11) {
        plVar3 = *(long **)(param_1 + 8);
        if ((*plVar3 == 0x6e65646e65706564 && plVar3[1] == 0x74676e656c5f7963) &&
           ((char)plVar3[2] == 'h')) {
          return 0x1c;
        }
      }
      else if (lVar1 == 0xe) {
        plVar3 = *(long **)(param_1 + 8);
        if ((*plVar3 == 0x726574695f6e696d) && (*(long *)((long)plVar3 + 6) == 0x736e6f6974617265))
        {
          return 0x1d;
        }
        if ((*plVar3 == 0x726574695f78616d) && (*(long *)((long)plVar3 + 6) == 0x736e6f6974617265))
        {
          return 0x1e;
        }
      }
      else if (lVar1 == 0x12) {
        plVar3 = *(long **)(param_1 + 8);
        if ((*plVar3 == 0x6f69746172657469 && plVar3[1] == 0x7069746c756d5f6e) &&
           ((short)plVar3[2] == 0x656c)) {
          return 0x1f;
        }
      }
      else {
        if (lVar1 == 10) {
          if ((**(long **)(param_1 + 8) == 0x756f635f6c656570) &&
             ((short)(*(long **)(param_1 + 8))[1] == 0x746e)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          return (uVar4 ^ 1) << 5;
        }
        if (lVar1 == 0xd) {
          if ((**(long **)(param_1 + 8) == 0x5f6c616974726170) &&
             (*(long *)((long)*(long **)(param_1 + 8) + 5) == 0x746e756f635f6c61)) {
            return 0x21;
          }
        }
        else if (lVar1 == 0x1d) {
          plVar3 = *(long **)(param_1 + 8);
          if ((*plVar3 == 0x70756f7267627573 && plVar3[1] == 0x6d726f66696e755f) &&
             (*(long *)((long)plVar3 + 0xd) == 0x746e6f635f6d726f &&
              *(long *)((long)plVar3 + 0x15) == 0x776f6c665f6c6f72)) {
            return 0x4c;
          }
        }
        else if (((lVar1 == 0x15) &&
                 (plVar3 = *(long **)(param_1 + 8),
                 *plVar3 == 0x6c6c616d6978616d && plVar3[1] == 0x766e6f6365725f79)) &&
                (*(long *)((long)plVar3 + 0xd) == 0x7365677265766e6f)) {
          return 0x4e;
        }
      }
    }
  }
  return 0;
}



/* glslang::TParseContext::makeAttributes(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) const */

ulong * __thiscall glslang::TParseContext::makeAttributes(TParseContext *this,basic_string *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  _List_node_base *p_Var4;
  
  uVar2 = glslang::GetThreadPoolAllocator();
  puVar3 = (ulong *)glslang::TPoolAllocator::allocate(uVar2);
  uVar2 = glslang::GetThreadPoolAllocator();
  puVar3[2] = (ulong)(puVar3 + 1);
  puVar3[1] = (ulong)(puVar3 + 1);
  *puVar3 = uVar2;
  puVar3[3] = 0;
  uVar1 = attributeFromName(this,param_1);
  p_Var4 = (_List_node_base *)glslang::TPoolAllocator::allocate(uVar2);
  *(ulong *)(p_Var4 + 0x10) = (ulong)uVar1;
  *(undefined8 *)(p_Var4 + 0x18) = 0;
  std::__detail::_List_node_base::_M_hook(p_Var4);
  puVar3[3] = puVar3[3] + 1;
  return puVar3;
}



/* glslang::TParseContext::makeAttributes(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&, TIntermNode*) const */

ulong * glslang::TParseContext::makeAttributes(basic_string *param_1,TIntermNode *param_2)

{
  TIntermNode *pTVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  _List_node_base *p_Var6;
  
  uVar3 = glslang::GetThreadPoolAllocator();
  puVar4 = (ulong *)glslang::TPoolAllocator::allocate(uVar3);
  uVar3 = glslang::GetThreadPoolAllocator();
  pTVar1 = *(TIntermNode **)(param_1 + 0x38);
  puVar4[2] = (ulong)(puVar4 + 1);
  puVar4[1] = (ulong)(puVar4 + 1);
  *puVar4 = uVar3;
  puVar4[3] = 0;
  uVar5 = glslang::TIntermediate::makeAggregate(pTVar1);
  uVar2 = attributeFromName((TParseContext *)param_1,(basic_string *)param_2);
  p_Var6 = (_List_node_base *)glslang::TPoolAllocator::allocate(*puVar4);
  *(undefined4 *)(p_Var6 + 0x10) = uVar2;
  *(undefined8 *)(p_Var6 + 0x18) = uVar5;
  std::__detail::_List_node_base::_M_hook(p_Var6);
  puVar4[3] = puVar4[3] + 1;
  return puVar4;
}



/* glslang::TParseContext::mergeAttributes(glslang::TList<glslang::TAttributeArgs>*,
   glslang::TList<glslang::TAttributeArgs>*) const */

TList * __thiscall
glslang::TParseContext::mergeAttributes(TParseContext *this,TList *param_1,TList *param_2)

{
  _List_node_base *p_Var1;
  
  p_Var1 = *(_List_node_base **)(param_2 + 8);
  if (p_Var1 != (_List_node_base *)(param_2 + 8)) {
    if (*(long *)param_1 != *(long *)param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    std::__detail::_List_node_base::_M_transfer((_List_node_base *)(param_1 + 8),p_Var1);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* glslang::TParseContext::handleSelectionAttributes(glslang::TList<glslang::TAttributeArgs> const&,
   TIntermNode*) */

void __thiscall
glslang::TParseContext::handleSelectionAttributes
          (TParseContext *this,TList *param_1,TIntermNode *param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  TIntermNode *pTVar4;
  TList *pTVar5;
  
  lVar2 = (**(code **)(*(long *)param_2 + 0x48))(param_2);
  if (lVar2 == 0) {
    return;
  }
  pTVar5 = *(TList **)(param_1 + 8);
joined_r0x00100848:
  if (pTVar5 == param_1 + 8) {
    return;
  }
  do {
    plVar3 = *(long **)(pTVar5 + 0x18);
    if (plVar3 == (long *)0x0) {
LAB_001008d9:
      if (*(int *)(pTVar5 + 0x10) == 2) {
        *(undefined1 *)(lVar2 + 0xd2) = 1;
      }
      else {
        if (*(int *)(pTVar5 + 0x10) == 7) break;
        pcVar1 = *(code **)(*(long *)this + 0x160);
        if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
          pTVar4 = param_2 + 8;
        }
        else {
          pTVar4 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
        }
        (*pcVar1)(this,pTVar4,"attribute does not apply to a selection",&_LC17);
      }
    }
    else {
      if (*(code **)(*plVar3 + 0x198) == TIntermAggregate::getSequence) {
        plVar3 = plVar3 + 0x18;
      }
      else {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x198))();
      }
      if ((int)(plVar3[2] - plVar3[1] >> 3) < 1) goto LAB_001008d9;
      pcVar1 = *(code **)(*(long *)this + 0x160);
      if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
        pTVar4 = param_2 + 8;
      }
      else {
        pTVar4 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
      }
      (*pcVar1)(this,pTVar4,"attribute with arguments not recognized, skipping",&_LC17);
    }
    pTVar5 = *(TList **)pTVar5;
    if (pTVar5 == param_1 + 8) {
      return;
    }
  } while( true );
  pTVar5 = *(TList **)pTVar5;
  *(undefined1 *)(lVar2 + 0xd1) = 1;
  goto joined_r0x00100848;
}



/* glslang::TParseContext::handleSwitchAttributes(glslang::TList<glslang::TAttributeArgs> const&,
   TIntermNode*) */

void __thiscall
glslang::TParseContext::handleSwitchAttributes
          (TParseContext *this,TList *param_1,TIntermNode *param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  TIntermNode *pTVar4;
  TList *pTVar5;
  
  lVar2 = (**(code **)(*(long *)param_2 + 0x50))(param_2);
  if (lVar2 == 0) {
    return;
  }
  pTVar5 = *(TList **)(param_1 + 8);
joined_r0x001009e8:
  if (pTVar5 == param_1 + 8) {
    return;
  }
  do {
    plVar3 = *(long **)(pTVar5 + 0x18);
    if (plVar3 == (long *)0x0) {
LAB_00100a79:
      if (*(int *)(pTVar5 + 0x10) == 2) {
        *(undefined1 *)(lVar2 + 0x31) = 1;
      }
      else {
        if (*(int *)(pTVar5 + 0x10) == 7) break;
        pcVar1 = *(code **)(*(long *)this + 0x160);
        if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
          pTVar4 = param_2 + 8;
        }
        else {
          pTVar4 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
        }
        (*pcVar1)(this,pTVar4,"attribute does not apply to a switch",&_LC17);
      }
    }
    else {
      if (*(code **)(*plVar3 + 0x198) == TIntermAggregate::getSequence) {
        plVar3 = plVar3 + 0x18;
      }
      else {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x198))();
      }
      if ((int)(plVar3[2] - plVar3[1] >> 3) < 1) goto LAB_00100a79;
      pcVar1 = *(code **)(*(long *)this + 0x160);
      if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
        pTVar4 = param_2 + 8;
      }
      else {
        pTVar4 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
      }
      (*pcVar1)(this,pTVar4,"attribute with arguments not recognized, skipping",&_LC17);
    }
    pTVar5 = *(TList **)pTVar5;
    if (pTVar5 == param_1 + 8) {
      return;
    }
  } while( true );
  pTVar5 = *(TList **)pTVar5;
  *(undefined1 *)(lVar2 + 0x30) = 1;
  goto joined_r0x001009e8;
}



/* glslang::TParseContext::handleLoopAttributes(glslang::TList<glslang::TAttributeArgs> const&,
   TIntermNode*) */

void __thiscall
glslang::TParseContext::handleLoopAttributes
          (TParseContext *this,TList *param_1,TIntermNode *param_2)

{
  undefined4 uVar1;
  TList *pTVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  TIntermNode *pTVar8;
  code *pcVar9;
  undefined8 *puVar10;
  
  lVar3 = (**(code **)(*(long *)param_2 + 0x70))(param_2);
  if (lVar3 == 0) {
    plVar6 = (long *)(**(code **)(*(long *)param_2 + 0x30))(param_2);
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (*(code **)(*plVar6 + 400) == TIntermAggregate::getSequence) {
      plVar7 = plVar6 + 0x18;
      pcVar9 = TIntermAggregate::getSequence;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar6 + 400))(plVar6);
      pcVar9 = *(code **)(*plVar6 + 400);
    }
    puVar10 = (undefined8 *)plVar7[1];
    while( true ) {
      plVar7 = plVar6 + 0x18;
      if (pcVar9 != TIntermAggregate::getSequence) {
        plVar7 = (long *)(*pcVar9)(plVar6);
      }
      if ((undefined8 *)plVar7[2] == puVar10) {
        return;
      }
      plVar7 = (long *)*puVar10;
      puVar10 = puVar10 + 1;
      lVar3 = (**(code **)(*plVar7 + 0x70))();
      if (lVar3 != 0) break;
      pcVar9 = *(code **)(*plVar6 + 400);
    }
  }
  pTVar2 = *(TList **)(param_1 + 8);
  do {
    if (pTVar2 == param_1 + 8) {
      return;
    }
    switch(*(undefined4 *)(pTVar2 + 0x10)) {
    case 0x12:
      plVar6 = *(long **)(pTVar2 + 0x18);
      if (plVar6 != (long *)0x0) {
        if (*(code **)(*plVar6 + 0x198) == TIntermAggregate::getSequence) {
          plVar6 = plVar6 + 0x18;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x198))();
        }
        if (0 < (int)(plVar6[2] - plVar6[1] >> 3)) {
          pcVar9 = *(code **)(*(long *)this + 0x160);
          if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
            pTVar8 = param_2 + 8;
          }
          else {
            pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
          }
          (*pcVar9)(this,pTVar8,"expected no arguments","unroll",&_LC17);
          break;
        }
      }
      *(undefined1 *)(lVar3 + 0x39) = 1;
      break;
    case 0x13:
      plVar6 = *(long **)(pTVar2 + 0x18);
      if (plVar6 != (long *)0x0) {
        if (*(code **)(*plVar6 + 0x198) == TIntermAggregate::getSequence) {
          plVar6 = plVar6 + 0x18;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x198))();
        }
        if (0 < (int)(plVar6[2] - plVar6[1] >> 3)) {
          pcVar9 = *(code **)(*(long *)this + 0x160);
          if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
            pTVar8 = param_2 + 8;
          }
          else {
            pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
          }
          (*pcVar9)(this,pTVar8,"expected no arguments","dont_unroll",&_LC17);
          break;
        }
      }
      *(undefined1 *)(lVar3 + 0x3a) = 1;
      *(undefined8 *)(lVar3 + 0x4c) = 0;
      break;
    default:
      pcVar9 = *(code **)(*(long *)this + 0x160);
      if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
        pTVar8 = param_2 + 8;
      }
      else {
        pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
      }
      (*pcVar9)(this,pTVar8,"attribute does not apply to a loop",&_LC17);
      break;
    case 0x1b:
      plVar6 = *(long **)(pTVar2 + 0x18);
      if (plVar6 != (long *)0x0) {
        if (*(code **)(*plVar6 + 0x198) == TIntermAggregate::getSequence) {
          plVar6 = plVar6 + 0x18;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x198))();
        }
        if (0 < (int)(plVar6[2] - plVar6[1] >> 3)) {
          pcVar9 = *(code **)(*(long *)this + 0x160);
          if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
            pTVar8 = param_2 + 8;
          }
          else {
            pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
          }
          (*pcVar9)(this,pTVar8,"expected no arguments","dependency_infinite",&_LC17);
          break;
        }
      }
      *(undefined4 *)(lVar3 + 0x3c) = 0xffffffff;
      break;
    case 0x1c:
      plVar6 = *(long **)(pTVar2 + 0x18);
      if (plVar6 != (long *)0x0) {
        if (*(code **)(*plVar6 + 0x198) == TIntermAggregate::getSequence) {
          plVar6 = plVar6 + 0x18;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x198))();
        }
        if (((int)(plVar6[2] - plVar6[1] >> 3) == 1) &&
           (piVar5 = (int *)TAttributeArgs::getConstUnion((TAttributeArgs *)(pTVar2 + 0x10),8,0),
           piVar5 != (int *)0x0)) {
          if (*piVar5 < 1) {
            pcVar9 = *(code **)(*(long *)this + 0x158);
            if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
              pTVar8 = param_2 + 8;
            }
            else {
              pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
            }
            (*pcVar9)(this,pTVar8,"must be positive","dependency_length",&_LC17);
          }
          else {
            *(int *)(lVar3 + 0x3c) = *piVar5;
          }
          break;
        }
      }
      pcVar9 = *(code **)(*(long *)this + 0x160);
      if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
        pTVar8 = param_2 + 8;
      }
      else {
        pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
      }
      (*pcVar9)(this,pTVar8,"expected a single integer argument","dependency_length",&_LC17);
      break;
    case 0x1d:
      if (*(int *)(this + 0x20) - 1U < 0x103ff) {
        pcVar9 = *(code **)(*(long *)this + 0x160);
        if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
          pTVar8 = param_2 + 8;
        }
        else {
          pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
        }
        (*pcVar9)(this,pTVar8,"attribute requires a SPIR-V 1.4 target-env","min_iterations",&_LC17);
      }
      plVar6 = *(long **)(pTVar2 + 0x18);
      if (plVar6 != (long *)0x0) {
        if (*(code **)(*plVar6 + 0x198) == TIntermAggregate::getSequence) {
          plVar6 = plVar6 + 0x18;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x198))();
        }
        if (((int)(plVar6[2] - plVar6[1] >> 3) == 1) &&
           (puVar4 = (undefined4 *)
                     TAttributeArgs::getConstUnion((TAttributeArgs *)(pTVar2 + 0x10),8,0),
           puVar4 != (undefined4 *)0x0)) {
          *(undefined4 *)(lVar3 + 0x40) = *puVar4;
          break;
        }
      }
      pcVar9 = *(code **)(*(long *)this + 0x160);
      if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
        pTVar8 = param_2 + 8;
      }
      else {
        pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
      }
      (*pcVar9)(this,pTVar8,"expected a single integer argument","min_iterations",&_LC17);
      break;
    case 0x1e:
      if (*(int *)(this + 0x20) - 1U < 0x103ff) {
        pcVar9 = *(code **)(*(long *)this + 0x160);
        if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
          pTVar8 = param_2 + 8;
        }
        else {
          pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
        }
        (*pcVar9)(this,pTVar8,"attribute requires a SPIR-V 1.4 target-env","max_iterations",&_LC17);
      }
      plVar6 = *(long **)(pTVar2 + 0x18);
      if (plVar6 != (long *)0x0) {
        if (*(code **)(*plVar6 + 0x198) == TIntermAggregate::getSequence) {
          plVar6 = plVar6 + 0x18;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x198))();
        }
        if (((int)(plVar6[2] - plVar6[1] >> 3) == 1) &&
           (puVar4 = (undefined4 *)
                     TAttributeArgs::getConstUnion((TAttributeArgs *)(pTVar2 + 0x10),8,0),
           puVar4 != (undefined4 *)0x0)) {
          *(undefined4 *)(lVar3 + 0x44) = *puVar4;
          break;
        }
      }
      pcVar9 = *(code **)(*(long *)this + 0x160);
      if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
        pTVar8 = param_2 + 8;
      }
      else {
        pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
      }
      (*pcVar9)(this,pTVar8,"expected a single integer argument","max_iterations",&_LC17);
      break;
    case 0x1f:
      if (*(int *)(this + 0x20) - 1U < 0x103ff) {
        pcVar9 = *(code **)(*(long *)this + 0x160);
        if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
          pTVar8 = param_2 + 8;
        }
        else {
          pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
        }
        (*pcVar9)(this,pTVar8,"attribute requires a SPIR-V 1.4 target-env","iteration_multiple",
                  &_LC17);
      }
      plVar6 = *(long **)(pTVar2 + 0x18);
      if (plVar6 != (long *)0x0) {
        if (*(code **)(*plVar6 + 0x198) == TIntermAggregate::getSequence) {
          plVar6 = plVar6 + 0x18;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x198))();
        }
        if (((int)(plVar6[2] - plVar6[1] >> 3) == 1) &&
           (piVar5 = (int *)TAttributeArgs::getConstUnion((TAttributeArgs *)(pTVar2 + 0x10),8,0),
           piVar5 != (int *)0x0)) {
          if (*piVar5 == 0) {
            pcVar9 = *(code **)(*(long *)this + 0x158);
            if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
              pTVar8 = param_2 + 8;
            }
            else {
              pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
            }
            (*pcVar9)(this,pTVar8,"must be greater than or equal to 1","iteration_multiple",&_LC17);
          }
          else {
            *(int *)(lVar3 + 0x48) = *piVar5;
          }
          break;
        }
      }
      pcVar9 = *(code **)(*(long *)this + 0x160);
      if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
        pTVar8 = param_2 + 8;
      }
      else {
        pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
      }
      (*pcVar9)(this,pTVar8,"expected a single integer argument","iteration_multiple",&_LC17);
      break;
    case 0x20:
      if (*(int *)(this + 0x20) - 1U < 0x103ff) {
        pcVar9 = *(code **)(*(long *)this + 0x160);
        if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
          pTVar8 = param_2 + 8;
        }
        else {
          pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
        }
        (*pcVar9)(this,pTVar8,"attribute requires a SPIR-V 1.4 target-env","peel_count",&_LC17);
      }
      plVar6 = *(long **)(pTVar2 + 0x18);
      if (plVar6 != (long *)0x0) {
        if (*(code **)(*plVar6 + 0x198) == TIntermAggregate::getSequence) {
          plVar6 = plVar6 + 0x18;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x198))();
        }
        if (((int)(plVar6[2] - plVar6[1] >> 3) == 1) &&
           (puVar4 = (undefined4 *)
                     TAttributeArgs::getConstUnion((TAttributeArgs *)(pTVar2 + 0x10),8,0),
           puVar4 != (undefined4 *)0x0)) {
          uVar1 = *puVar4;
          *(undefined1 *)(lVar3 + 0x3a) = 0;
          *(undefined4 *)(lVar3 + 0x4c) = uVar1;
          break;
        }
      }
      pcVar9 = *(code **)(*(long *)this + 0x160);
      if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
        pTVar8 = param_2 + 8;
      }
      else {
        pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
      }
      (*pcVar9)(this,pTVar8,"expected a single integer argument","peel_count",&_LC17);
      break;
    case 0x21:
      if (*(int *)(this + 0x20) - 1U < 0x103ff) {
        pcVar9 = *(code **)(*(long *)this + 0x160);
        if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
          pTVar8 = param_2 + 8;
        }
        else {
          pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
        }
        (*pcVar9)(this,pTVar8,"attribute requires a SPIR-V 1.4 target-env","partial_count",&_LC17);
      }
      plVar6 = *(long **)(pTVar2 + 0x18);
      if (plVar6 != (long *)0x0) {
        if (*(code **)(*plVar6 + 0x198) == TIntermAggregate::getSequence) {
          plVar6 = plVar6 + 0x18;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x198))();
        }
        if (((int)(plVar6[2] - plVar6[1] >> 3) == 1) &&
           (puVar4 = (undefined4 *)
                     TAttributeArgs::getConstUnion((TAttributeArgs *)(pTVar2 + 0x10),8,0),
           puVar4 != (undefined4 *)0x0)) {
          uVar1 = *puVar4;
          *(undefined1 *)(lVar3 + 0x3a) = 0;
          *(undefined4 *)(lVar3 + 0x50) = uVar1;
          break;
        }
      }
      pcVar9 = *(code **)(*(long *)this + 0x160);
      if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
        pTVar8 = param_2 + 8;
      }
      else {
        pTVar8 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
      }
      (*pcVar9)(this,pTVar8,"expected a single integer argument","partial_count",&_LC17);
    }
    pTVar2 = *(TList **)pTVar2;
  } while( true );
}



/* glslang::TParseContext::handleFunctionAttributes(glslang::TSourceLoc const&,
   glslang::TList<glslang::TAttributeArgs> const&) */

void __thiscall
glslang::TParseContext::handleFunctionAttributes
          (TParseContext *this,TSourceLoc *param_1,TList *param_2)

{
  TList *pTVar1;
  long *plVar2;
  long lVar3;
  
  pTVar1 = *(TList **)(param_2 + 8);
  do {
    while( true ) {
      if (pTVar1 == param_2 + 8) {
        return;
      }
      plVar2 = *(long **)(pTVar1 + 0x18);
      if (plVar2 == (long *)0x0) break;
      if (*(code **)(*plVar2 + 0x198) == TIntermAggregate::getSequence) {
        plVar2 = plVar2 + 0x18;
      }
      else {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x198))();
      }
      lVar3 = *(long *)this;
      if ((int)(plVar2[2] - plVar2[1] >> 3) < 1) goto LAB_00101832;
      (**(code **)(lVar3 + 0x160))
                (this,param_1,"attribute with arguments not recognized, skipping",&_LC17);
LAB_0010181d:
      pTVar1 = *(TList **)pTVar1;
    }
    lVar3 = *(long *)this;
LAB_00101832:
    if (*(int *)(pTVar1 + 0x10) == 0x4c) {
      (**(code **)(lVar3 + 0x28))
                (this,param_1,1,&E_GL_EXT_subgroup_uniform_control_flow,"attribute");
      *(undefined1 *)(*(long *)(this + 0x38) + 0x50e) = 1;
      goto LAB_0010181d;
    }
    if (*(int *)(pTVar1 + 0x10) == 0x4e) {
      (**(code **)(lVar3 + 0x28))(this,param_1,1,&E_GL_EXT_maximal_reconvergence,"attribute");
      *(undefined1 *)(*(long *)(this + 0x38) + 0x50f) = 1;
      goto LAB_0010181d;
    }
    (**(code **)(lVar3 + 0x160))(this,param_1,"attribute does not apply to a function",&_LC17);
    pTVar1 = *(TList **)pTVar1;
  } while( true );
}



/* TIntermNode::getLoc() const */

TIntermNode * __thiscall TIntermNode::getLoc(TIntermNode *this)

{
  return this + 8;
}



/* glslang::TIntermAggregate::getSequence() */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this)

{
  return this + 0xc0;
}



/* glslang::TIntermAggregate::getSequence() const */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this)

{
  return this + 0xc0;
}



/* glslang::TParseContext::mergeAttributes(glslang::TList<glslang::TAttributeArgs>*,
   glslang::TList<glslang::TAttributeArgs>*) const [clone .cold] */

void glslang::TParseContext::mergeAttributes(TList *param_1,TList *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


