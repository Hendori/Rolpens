
/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LineBuilder::LineBuilder() */

void __thiscall LineBuilder::LineBuilder(LineBuilder *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = __LC57;
  uVar1 = __LC37;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x48) = 0x4000000000000000;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (LineBuilder)0x0;
  *(undefined4 *)(this + 0x20) = 0x41200000;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0x3f80000000000008;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x98] = (LineBuilder)0x0;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = uVar2;
  return;
}



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Vector<Color>::push_back(Color) [clone .isra.0] */

void Vector<Color>::push_back(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar1 = CowData<Color>::resize<false>((CowData<Color> *)(param_3 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<Color>::_copy_on_write((CowData<Color> *)(param_3 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_3 + 8));
        *puVar2 = param_1;
        puVar2[1] = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LineBuilder::new_arc(Vector2, Vector2, float, Color, Rect2) */

void __thiscall
LineBuilder::new_arc
          (Vector<Vector2> *param_1,undefined8 param_2,float param_3,undefined8 param_4,
          undefined8 param_5,LineBuilder *this)

{
  Vector<Vector2> *pVVar1;
  Vector<int> *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  float fVar5;
  float __x;
  float local_c8;
  float local_b0;
  float local_ac;
  float local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_2;
  Vector2::length();
  local_b0 = (float)(_LC52 / (double)*(int *)(this + 0x50));
  fVar5 = ABS(param_3) / local_b0;
  if (param_3 < 0.0) {
    local_b0 = (float)((uint)local_b0 ^ __LC54);
  }
  local_48 = 0x3f800000;
  local_c8 = (float)Vector2::angle_to((Vector2 *)&local_48);
  __x = param_3 + local_c8;
  if (*(long *)(this + 0x60) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(long *)(this + 0x60) + -8);
  }
  pVVar1 = (Vector<Vector2> *)(this + 0x58);
  Vector<Vector2>::push_back(param_1,pVVar1);
  if (this[0x98] == (LineBuilder)0x0) {
    iVar2 = *(int *)(this + 0x48);
  }
  else {
    Vector<Color>::push_back(param_4,param_5,this + 0x68);
    iVar2 = *(int *)(this + 0x48);
  }
  if (iVar2 != 0) {
    Vector<Vector2>::push_back((Vector<Vector2> *)(this + 0x78));
  }
  if (0.0 < fVar5) {
    iVar2 = 0;
    local_ac = _LC51;
    do {
      sincosf(local_c8,&local_54,&local_58);
      Vector<Vector2>::push_back(pVVar1);
      if (this[0x98] == (LineBuilder)0x0) {
        iVar3 = *(int *)(this + 0x48);
      }
      else {
        Vector<Color>::push_back(param_4,param_5,this + 0x68);
        iVar3 = *(int *)(this + 0x48);
      }
      if (iVar3 != 0) {
        sincosf(local_ac,&local_54,&local_58);
        Vector<Vector2>::push_back((Vector<Vector2> *)(this + 0x78));
        local_ac = local_ac + local_b0;
      }
      iVar2 = iVar2 + 1;
      local_c8 = local_c8 + local_b0;
    } while ((float)iVar2 < fVar5);
  }
  sincosf(__x,&local_54,&local_58);
  Vector<Vector2>::push_back(pVVar1);
  if (this[0x98] != (LineBuilder)0x0) {
    Vector<Color>::push_back(param_4,param_5,this + 0x68);
  }
  if (*(int *)(this + 0x48) != 0) {
    sincosf(param_3 - __LC58,&local_54,&local_58);
    Vector<Vector2>::push_back((Vector<Vector2> *)(this + 0x78));
  }
  this_00 = (Vector<int> *)(this + 0x88);
  iVar2 = iVar4;
  if (0.0 < fVar5) {
    do {
      iVar3 = iVar2 + 1;
      Vector<int>::push_back(this_00,iVar4);
      Vector<int>::push_back(this_00,iVar3);
      Vector<int>::push_back(this_00,iVar2 + 2);
      iVar2 = iVar3;
    } while ((float)(iVar3 - iVar4) < fVar5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LineBuilder::strip_add_tri(Vector2, LineBuilder::Orientation) */

void LineBuilder::strip_add_tri(long param_1,int param_2)

{
  Vector<int> *this;
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(*(long *)(param_1 + 0x60) + -8);
  }
  Vector<Vector2>::push_back((Vector<Vector2> *)(param_1 + 0x58));
  if (*(char *)(param_1 + 0x98) != '\0') {
    lVar1 = *(long *)(param_1 + 0x70);
    if (lVar1 == 0) {
      lVar7 = 0;
      lVar5 = -1;
      goto LAB_00100c91;
    }
    lVar7 = *(long *)(lVar1 + -8);
    lVar5 = lVar7 + -1;
    if (lVar5 < 0) goto LAB_00100c91;
    puVar4 = (undefined8 *)(lVar1 + lVar5 * 0x10);
    Vector<Color>::push_back(*puVar4,puVar4[1],param_1 + 0x68);
  }
  lVar1 = param_1 + (ulong)(param_2 == 0) * 4;
  iVar6 = *(int *)(lVar1 + 0x9c);
  if (*(int *)(param_1 + 0x48) == 0) {
LAB_00100c4b:
    this = (Vector<int> *)(param_1 + 0x88);
    Vector<int>::push_back(this,iVar6);
    Vector<int>::push_back(this,iVar8);
    Vector<int>::push_back(this,*(int *)(param_1 + 0x9c + (long)param_2 * 4));
    *(int *)(lVar1 + 0x9c) = iVar8;
    return;
  }
  lVar5 = (long)iVar6;
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar5 < 0) {
    if (lVar2 != 0) {
      lVar7 = *(long *)(lVar2 + -8);
      goto LAB_00100c91;
    }
  }
  else if (lVar2 != 0) {
    lVar7 = *(long *)(lVar2 + -8);
    if (lVar7 <= lVar5) goto LAB_00100c91;
    Vector<Vector2>::push_back(*(Vector<Vector2> **)(lVar2 + lVar5 * 8),param_1 + 0x78);
    iVar6 = *(int *)(lVar1 + 0x9c);
    goto LAB_00100c4b;
  }
  lVar7 = 0;
LAB_00100c91:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LineBuilder::strip_add_arc(Vector2, float, LineBuilder::Orientation) */

void __thiscall
LineBuilder::strip_add_arc(undefined8 param_1,float param_2,LineBuilder *this,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  float __x;
  float fVar7;
  float local_68;
  float local_60;
  float local_5c [3];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = (long)*(int *)(this + ((ulong)(param_4 == 0) + 0x24) * 4 + 0xc);
  lVar2 = *(long *)(this + 0x60);
  if (lVar4 < 0) {
    if (lVar2 != 0) {
      lVar5 = *(long *)(lVar2 + -8);
      goto LAB_00100f19;
    }
  }
  else if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + -8);
    if (lVar4 < lVar5) {
      uVar1 = *(undefined8 *)(lVar2 + lVar4 * 8);
      local_50 = CONCAT44((float)((ulong)uVar1 >> 0x20) - (float)((ulong)param_1 >> 0x20),
                          (float)uVar1 - (float)param_1);
      Vector2::length();
      local_68 = (float)(_LC52 / (double)*(int *)(this + 0x50));
      fVar7 = ABS(param_2) / local_68;
      if (param_2 < 0.0) {
        local_68 = (float)((uint)local_68 ^ __LC54);
      }
      iVar6 = 0;
      local_48 = 0x3f800000;
      __x = (float)Vector2::angle_to((Vector2 *)&local_48);
      param_2 = param_2 + __x;
      if (0.0 < fVar7) {
        do {
          sincosf(__x,local_5c,&local_60);
          iVar6 = iVar6 + 1;
          strip_add_tri(this,param_4);
          __x = __x + local_68;
        } while ((float)iVar6 < fVar7);
      }
      sincosf(param_2,local_5c,&local_60);
      strip_add_tri(this,param_4);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    goto LAB_00100f19;
  }
  lVar5 = 0;
LAB_00100f19:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* LineBuilder::strip_add_quad(Vector2, Vector2, Color, float) */

void LineBuilder::strip_add_quad
               (undefined8 param_1,Vector<Vector2> *param_2,undefined8 param_3,undefined8 param_4,
               Vector<Vector2> *param_5,long param_6)

{
  Vector<int> *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(long *)(param_6 + 0x60) == 0) {
    iVar3 = 1;
    iVar2 = 0;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_6 + 0x60) + -8);
    iVar3 = iVar2 + 1;
  }
  Vector<Vector2>::push_back((Vector<Vector2> *)(param_6 + 0x58));
  Vector<Vector2>::push_back(param_2,(Vector<Vector2> *)(param_6 + 0x58));
  if (*(char *)(param_6 + 0x98) == '\0') {
    iVar1 = *(int *)(param_6 + 0x48);
  }
  else {
    Vector<Color>::push_back(param_3,param_4,param_6 + 0x68);
    Vector<Color>::push_back(param_3,param_4,param_6 + 0x68);
    iVar1 = *(int *)(param_6 + 0x48);
  }
  if (iVar1 != 0) {
    Vector<Vector2>::push_back(param_5._0_4_,param_6 + 0x78);
    Vector<Vector2>::push_back
              ((Vector<Vector2> *)((ulong)(uint)param_5._0_4_ | 0x3f80000000000000),param_6 + 0x78);
  }
  this = (Vector<int> *)(param_6 + 0x88);
  Vector<int>::push_back(this,*(int *)(param_6 + 0x9c));
  Vector<int>::push_back(this,iVar3);
  Vector<int>::push_back(this,*(int *)(param_6 + 0xa0));
  Vector<int>::push_back(this,*(int *)(param_6 + 0x9c));
  Vector<int>::push_back(this,iVar2);
  Vector<int>::push_back(this,iVar3);
  *(int *)(param_6 + 0x9c) = iVar2;
  *(int *)(param_6 + 0xa0) = iVar3;
  return;
}



/* LineBuilder::strip_begin(Vector2, Vector2, Color, float) */

void LineBuilder::strip_begin
               (undefined8 param_1,Vector<Vector2> *param_2,undefined8 param_3,undefined8 param_4,
               Vector<Vector2> *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(long *)(param_6 + 0x60) == 0) {
    iVar3 = 1;
    iVar2 = 0;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_6 + 0x60) + -8);
    iVar3 = iVar2 + 1;
  }
  Vector<Vector2>::push_back((Vector<Vector2> *)(param_6 + 0x58));
  Vector<Vector2>::push_back(param_2,(Vector<Vector2> *)(param_6 + 0x58));
  if (*(char *)(param_6 + 0x98) == '\0') {
    iVar1 = *(int *)(param_6 + 0x48);
  }
  else {
    Vector<Color>::push_back(param_3,param_4,param_6 + 0x68);
    Vector<Color>::push_back(param_3,param_4,param_6 + 0x68);
    iVar1 = *(int *)(param_6 + 0x48);
  }
  if (iVar1 != 0) {
    Vector<Vector2>::push_back(param_5._0_4_,param_6 + 0x78);
    Vector<Vector2>::push_back
              ((Vector<Vector2> *)((ulong)(uint)param_5._0_4_ | 0x3f80000000000000),param_6 + 0x78);
  }
  *(int *)(param_6 + 0x9c) = iVar2;
  *(int *)(param_6 + 0xa0) = iVar3;
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LineBuilder::build() */

void __thiscall LineBuilder::build(LineBuilder *this)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  LineBuilder *pLVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  long in_FS_OFFSET;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  undefined8 uVar39;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [12];
  undefined8 local_198;
  undefined8 local_178;
  float local_164;
  undefined8 local_160;
  float local_150;
  float fStack_14c;
  float local_140;
  float local_138;
  float local_130;
  float local_118;
  float local_114;
  float local_108;
  float local_fc;
  float local_f8;
  float local_f4;
  float fStack_ec;
  int local_d0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_84;
  float fStack_80;
  LineBuilder *local_78;
  LineBuilder *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = *(undefined8 **)(this + 8);
  if ((puVar3 == (undefined8 *)0x0) || ((long)puVar3[-1] < 2)) {
    CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0x60),0);
    CowData<Color>::resize<false>((CowData<Color> *)(this + 0x70),0);
    CowData<int>::resize<false>((CowData<int> *)(this + 0x90),0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0x80),0);
      return;
    }
    goto LAB_00103a74;
  }
  if (*(float *)(this + 0x54) <= 0.0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("build","scene/2d/line_builder.cpp",0x37,
                       "Condition \"tile_aspect <= 0.f\" is true.",0,0);
      return;
    }
    goto LAB_00103a74;
  }
  iVar26 = (int)puVar3[-1];
  lVar4 = *(long *)(this + 0x28);
  fVar38 = *(float *)(this + 0x4c);
  bVar13 = 2 < iVar26 & (byte)this[0x1c];
  bVar6 = true;
  fVar44 = _LC65 * *(float *)(this + 0x20);
  this[0x98] = (LineBuilder)(*(long *)(this + 0x40) != 0);
  if (*(long *)(this + 0x40) == 0 && lVar4 == 0) {
    bVar6 = *(int *)(this + 0x48) - 1U < 2;
  }
  local_78 = (LineBuilder *)*puVar3;
  local_70 = (LineBuilder *)puVar3[1];
  local_48 = CONCAT44((float)((ulong)local_70 >> 0x20) - (float)((ulong)local_78 >> 0x20),
                      SUB84(local_70,0) - SUB84(local_78,0));
  local_160 = Vector2::normalized();
  pLVar10 = local_78;
  fVar31 = (float)((ulong)local_160 >> 0x20);
  local_68 = CONCAT44((uint)(float)local_160 ^ __LC54,fVar31);
  auVar55 = ZEXT816(0x3f80000000000000) << 0x40;
  if (lVar4 != 0) {
    local_118 = (float)Curve::sample_baked(0.0);
    local_164 = fVar44 * local_118;
    if (bVar6) goto LAB_00101351;
LAB_00101458:
    if (iVar26 < 2) goto LAB_00101e70;
    fVar29 = 0.0;
LAB_0010146a:
    if (this[0x98] == (LineBuilder)0x0) {
      Vector<Color>::push_back
                (*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38),this + 0x68);
    }
    else {
      auVar55 = Gradient::get_color((int)*(undefined8 *)(this + 0x40));
    }
    local_178 = auVar55._8_8_;
    local_198 = auVar55._0_8_;
    fStack_14c = (float)((ulong)pLVar10 >> 0x20);
    if (bVar13 == 0) {
      fVar28 = (float)local_68 * local_164;
      fVar33 = (float)((ulong)local_68 >> 0x20) * local_164;
      fVar50 = SUB84(pLVar10,0);
      fVar37 = fVar50 + fVar28;
      fVar40 = fStack_14c + fVar33;
      uVar32 = CONCAT44(fVar40,fVar37);
      fVar50 = fVar50 - fVar28;
      fStack_14c = fStack_14c - fVar33;
      uVar39 = CONCAT44(fStack_14c,fVar50);
      if (*(int *)(this + 0x14) == 1) {
        local_150 = local_164 + 0.0;
        fVar28 = (float)local_160 * local_164;
        fVar31 = fVar31 * local_164;
        uVar39 = CONCAT44(fStack_14c - fVar31,fVar50 - fVar28);
        uVar32 = CONCAT44(fVar40 - fVar31,fVar37 - fVar28);
      }
      else {
        local_150 = 0.0;
        if (*(int *)(this + 0x14) == 2) {
          new_arc(local_78,this);
          local_150 = local_164 + 0.0;
        }
      }
      strip_begin(uVar32,uVar39,local_198,local_178,this);
      if (iVar26 + -2 != 0) {
        iVar17 = 1;
        local_d0 = iVar26 + -2;
        goto LAB_00101539;
      }
LAB_001028e6:
      lVar5 = *(long *)(this + 8);
      uVar12 = (ulong)(iVar26 + -1);
      if (lVar5 == 0) goto LAB_00101ee0;
      lVar23 = *(long *)(lVar5 + -8);
      if (lVar23 <= (long)uVar12) goto LAB_00101404;
      local_70 = *(LineBuilder **)(lVar5 + uVar12 * 8);
      if (bVar6) {
        Vector2::distance_to((Vector2 *)&local_78);
      }
      if (this[0x98] != (LineBuilder)0x0) {
        uVar32 = *(undefined8 *)(this + 0x40);
        Gradient::get_point_count();
        Gradient::get_color((int)uVar32);
      }
      fStack_ec = local_164;
      if (lVar4 != 0) {
        fStack_ec = (float)Curve::sample_baked(_LC57);
        fStack_ec = fVar44 * fStack_ec;
      }
      fVar38 = (float)local_68 * fStack_ec + SUB84(local_70,0);
      fVar44 = (float)((ulong)local_68 >> 0x20) * fStack_ec + (float)((ulong)local_70 >> 0x20);
      uVar32 = CONCAT44(fVar44,fVar38);
      if (*(int *)(this + 0x18) == 1) {
        uVar32 = CONCAT44(fVar44 + (float)((ulong)local_160 >> 0x20) * fStack_ec,
                          fVar38 + (float)local_160 * fStack_ec);
      }
      strip_add_quad(uVar32,this);
      if (*(int *)(this + 0x18) == 2) {
        if (this[0x98] != (LineBuilder)0x0) {
          uVar32 = *(undefined8 *)(this + 0x40);
          Gradient::get_point_count();
          Gradient::get_color((int)uVar32);
        }
        new_arc(local_70,this);
      }
    }
    else {
      iVar17 = -1;
      local_150 = 0.0;
      local_d0 = iVar26;
LAB_00101539:
      local_f4 = 1.0;
      bVar27 = false;
      local_fc = 0.0;
      local_138 = 0.0;
      local_f8 = 0.0;
      fVar38 = fVar38 * fVar38;
LAB_001015d6:
      do {
        iVar14 = iVar26 + -1;
        if (iVar17 != -1) {
          iVar14 = iVar17 % iVar26;
        }
        uVar12 = (ulong)iVar14;
        lVar5 = *(long *)(this + 8);
        if (lVar5 == 0) goto LAB_00101ee0;
        lVar23 = *(long *)(lVar5 + -8);
        if (lVar23 <= (long)uVar12) goto LAB_00101404;
        local_70 = *(LineBuilder **)(lVar5 + uVar12 * 8);
        iVar14 = iVar17 + 1;
        uVar12 = (ulong)(iVar14 % iVar26);
        if (lVar23 <= (long)uVar12) goto LAB_00101404;
        uVar32 = *(undefined8 *)(lVar5 + uVar12 * 8);
        fVar33 = (float)uVar32;
        fVar31 = (float)((ulong)uVar32 >> 0x20);
        local_48 = CONCAT44(fVar31 - (float)((ulong)local_70 >> 0x20),fVar33 - SUB84(local_70,0));
        uVar32 = Vector2::normalized();
        local_60._0_4_ = (uint)uVar32;
        local_60._4_4_ = (float)((ulong)uVar32 >> 0x20);
        fVar28 = local_60._4_4_;
        fVar50 = (float)((uint)local_60 ^ __LC54);
        uVar39 = CONCAT44(fVar50,local_60._4_4_);
        local_60 = uVar32;
        fVar37 = (float)Vector2::dot((Vector2 *)&local_68);
        if ((0 < iVar17) && (bVar6)) {
          fVar40 = (float)Vector2::distance_to((Vector2 *)&local_78);
          local_150 = fVar40 + local_150;
        }
        if (this[0x98] != (LineBuilder)0x0) {
          lVar5 = *(long *)(this + 0x40);
          uVar22 = *(uint *)(lVar5 + 0x240);
          if (uVar22 == 0) {
            local_f4 = 1.0;
            local_138 = 0.0;
            local_fc = 0.0;
            local_f8 = 0.0;
          }
          else {
            if (*(char *)(lVar5 + 0x250) == '\0') {
              LocalVector<Gradient::Point,unsigned_int,false,false>::
              sort_custom<_DefaultComparator<Gradient::Point>>
                        ((LocalVector<Gradient::Point,unsigned_int,false,false> *)(lVar5 + 0x240));
              *(undefined1 *)(lVar5 + 0x250) = 1;
              uVar22 = *(uint *)(lVar5 + 0x240);
            }
            uVar25 = (ulong)uVar22;
            iVar20 = 0;
            fVar40 = local_150 / fVar29;
            iVar18 = uVar22 - 1;
            if (iVar18 < 0) {
              _err_print_error("get_color_at_offset","./scene/resources/gradient.h",0xa6,
                               "low > high, this may be a bug",0);
              uVar25 = (ulong)*(uint *)(lVar5 + 0x240);
              if (*(uint *)(lVar5 + 0x240) == 0) {
                uVar25 = 0;
                uVar11 = 0;
                goto LAB_00101fa3;
              }
              lVar23 = *(long *)(lVar5 + 0x248);
              uVar12 = 0;
              uVar21 = 0;
            }
            else {
              do {
                uVar21 = (iVar18 + iVar20) / 2;
                uVar11 = (ulong)uVar21;
                uVar12 = (ulong)uVar21;
                if (uVar22 <= uVar21) goto LAB_00101fa3;
                lVar23 = *(long *)(lVar5 + 0x248);
                pfVar1 = (float *)(lVar23 + (long)(int)uVar21 * 0x14);
                if (fVar40 < *pfVar1) {
                  iVar18 = uVar21 - 1;
                }
                else {
                  if (fVar40 <= *pfVar1) {
                    local_f8 = pfVar1[1];
                    local_fc = pfVar1[2];
                    local_138 = pfVar1[3];
                    local_f4 = pfVar1[4];
                    goto LAB_00101834;
                  }
                  iVar20 = uVar21 + 1;
                }
              } while (iVar20 <= iVar18);
            }
            fVar53 = _LC73;
            uVar22 = (uint)uVar25;
            if (*(float *)(lVar23 + uVar12 * 0x14) <= fVar40) {
              uVar15 = uVar21 + 1;
              uVar19 = uVar21;
              if ((int)uVar22 <= (int)(uVar21 + 1)) goto LAB_0010257f;
LAB_001025d1:
              pfVar1 = (float *)(lVar23 + (long)(int)uVar19 * 0x14);
              if (uVar22 <= uVar15) {
                uVar11 = (ulong)(int)uVar15;
                goto LAB_00101fa3;
              }
              lVar16 = (long)(int)uVar15;
              pfVar2 = (float *)(lVar23 + lVar16 * 0x14);
              if (*(int *)(lVar5 + 0x254) == 1) {
                local_f8 = pfVar1[1];
                local_fc = pfVar1[2];
                local_f4 = pfVar1[4];
                local_138 = pfVar1[3];
              }
              else {
                fVar40 = (fVar40 - *pfVar1) / (*pfVar2 - *pfVar1);
                if (*(int *)(lVar5 + 0x254) == 2) {
                  uVar21 = uVar19 + 2;
                  uVar19 = uVar19 - 1;
                  lVar24 = lVar23;
                  if ((int)uVar21 < (int)uVar22) {
                    if (uVar19 == 0xffffffff) {
                      lVar16 = 2;
                    }
                    else {
                      if (uVar22 <= uVar19) {
LAB_00103d4c:
                        uVar11 = (ulong)(int)uVar19;
LAB_00101fa3:
                        _err_print_index_error
                                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,uVar25
                                   ,"p_index","count","",false,true);
                        _err_flush_stdout();
                    /* WARNING: Does not return */
                        pcVar7 = (code *)invalidInstructionException();
                        (*pcVar7)();
                      }
                      if (uVar22 <= uVar21) {
                        uVar11 = (ulong)(int)uVar21;
                        goto LAB_00101fa3;
                      }
                      lVar16 = (long)(int)uVar21;
                      lVar24 = (long)(int)uVar19 * 0x14 + lVar23;
                    }
                  }
                  else if (uVar19 != 0xffffffff) {
                    if (uVar22 <= uVar19) goto LAB_00103d4c;
                    lVar24 = (long)(int)uVar19 * 0x14 + lVar23;
                  }
                  local_114 = *(float *)(lVar24 + 4);
                  fVar35 = *(float *)(lVar24 + 8);
                  local_138 = *(float *)(lVar24 + 0xc);
                  fVar36 = *(float *)(lVar24 + 0x10);
                  lVar23 = lVar23 + lVar16 * 0x14;
                  iVar18 = *(int *)(lVar5 + 600);
                  if (iVar18 == 1) {
                    if (_LC73 <= local_138) {
                      local_138 = powf((float)(((double)local_138 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      local_138 = local_138 * _LC74;
                    }
                    if (fVar53 <= fVar35) {
                      fVar35 = powf((float)(((double)fVar35 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      fVar35 = fVar35 * _LC74;
                    }
                    if (fVar53 <= local_114) {
                      local_114 = powf((float)(((double)local_114 + __LC75) * __LC76),_LC77);
                      local_b8 = pfVar1[4];
                      local_b0 = pfVar1[1];
                      local_fc = pfVar1[2];
                      local_108 = pfVar1[3];
                    }
                    else {
                      local_114 = local_114 * _LC74;
                      local_b0 = pfVar1[1];
                      local_fc = pfVar1[2];
                      local_108 = pfVar1[3];
                      local_b8 = pfVar1[4];
                    }
                    if (fVar53 <= local_108) {
                      local_108 = powf((float)(((double)local_108 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      local_108 = local_108 * _LC74;
                    }
                    if (fVar53 <= local_fc) {
                      local_fc = powf((float)(((double)local_fc + __LC75) * __LC76),_LC77);
                    }
                    else {
                      local_fc = local_fc * _LC74;
                    }
                    if (fVar53 <= local_b0) {
                      local_b0 = powf((float)(((double)local_b0 + __LC75) * __LC76),_LC77);
                      local_b4 = pfVar2[4];
                      local_140 = pfVar2[1];
                      local_f8 = pfVar2[2];
                      local_f4 = pfVar2[3];
                    }
                    else {
                      local_b0 = local_b0 * _LC74;
                      local_b4 = pfVar2[4];
                      local_f8 = pfVar2[2];
                      local_f4 = pfVar2[3];
                      local_140 = pfVar2[1];
                    }
                    if (fVar53 <= local_f4) {
                      local_f4 = powf((float)(((double)local_f4 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      local_f4 = local_f4 * _LC74;
                    }
                    if (fVar53 <= local_f8) {
                      local_f8 = powf((float)(((double)local_f8 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      local_f8 = local_f8 * _LC74;
                    }
                    if (fVar53 <= local_140) {
                      local_140 = powf((float)(((double)local_140 + __LC75) * __LC76),_LC77);
                      fVar34 = *(float *)(lVar23 + 0x10);
                      local_84 = *(float *)(lVar23 + 4);
                      fStack_80 = *(float *)(lVar23 + 8);
                      fVar30 = *(float *)(lVar23 + 0xc);
                    }
                    else {
                      local_140 = local_140 * _LC74;
                      fVar34 = *(float *)(lVar23 + 0x10);
                      local_84 = *(float *)(lVar23 + 4);
                      fStack_80 = *(float *)(lVar23 + 8);
                      fVar30 = *(float *)(lVar23 + 0xc);
                    }
                    if (fVar53 <= fVar30) {
                      fVar30 = powf((float)(((double)fVar30 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      fVar30 = fVar30 * _LC74;
                    }
                    if (fVar53 <= fStack_80) {
                      fStack_80 = powf((float)(((double)fStack_80 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      fStack_80 = fStack_80 * _LC74;
                    }
                    if (fVar53 <= local_84) {
                      local_84 = powf((float)(((double)local_84 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      local_84 = local_84 * _LC74;
                    }
                  }
                  else if (iVar18 == 2) {
                    if (_LC73 <= local_138) {
                      powf((float)(((double)local_138 + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= fVar35) {
                      powf((float)(((double)fVar35 + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= local_114) {
                      powf((float)(((double)local_114 + __LC75) * __LC76),_LC77);
                    }
                    auVar56 = ok_color::linear_srgb_to_oklab();
                    local_138 = auVar56._8_4_;
                    fStack_80 = auVar56._4_4_;
                    fVar35 = fStack_80;
                    local_84 = auVar56._0_4_;
                    fVar34 = pfVar1[1];
                    local_b8 = pfVar1[4];
                    fVar30 = pfVar1[2];
                    local_114 = local_84;
                    if (fVar53 <= pfVar1[3]) {
                      powf((float)(((double)pfVar1[3] + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= fVar30) {
                      powf((float)(((double)fVar30 + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= fVar34) {
                      powf((float)(((double)fVar34 + __LC75) * __LC76),_LC77);
                    }
                    auVar56 = ok_color::linear_srgb_to_oklab();
                    local_108 = auVar56._8_4_;
                    local_84 = auVar56._0_4_;
                    fVar34 = pfVar2[1];
                    local_b0 = local_84;
                    local_b4 = pfVar2[4];
                    fStack_80 = auVar56._4_4_;
                    local_fc = fStack_80;
                    fVar30 = pfVar2[2];
                    if (fVar53 <= pfVar2[3]) {
                      powf((float)(((double)pfVar2[3] + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= fVar30) {
                      powf((float)(((double)fVar30 + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= fVar34) {
                      powf((float)(((double)fVar34 + __LC75) * __LC76),_LC77);
                    }
                    auVar56 = ok_color::linear_srgb_to_oklab();
                    local_f4 = auVar56._8_4_;
                    local_84 = auVar56._0_4_;
                    fVar30 = *(float *)(lVar23 + 4);
                    fVar34 = *(float *)(lVar23 + 0x10);
                    local_140 = local_84;
                    fStack_80 = auVar56._4_4_;
                    local_f8 = fStack_80;
                    fVar45 = *(float *)(lVar23 + 8);
                    if (fVar53 <= *(float *)(lVar23 + 0xc)) {
                      powf((float)(((double)*(float *)(lVar23 + 0xc) + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= fVar45) {
                      powf((float)(((double)fVar45 + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= fVar30) {
                      powf((float)(((double)fVar30 + __LC75) * __LC76),_LC77);
                    }
                    auVar56 = ok_color::linear_srgb_to_oklab();
                    fVar30 = auVar56._8_4_;
                    local_84 = auVar56._0_4_;
                    fStack_80 = auVar56._4_4_;
                  }
                  else {
                    local_b0 = pfVar1[1];
                    local_fc = pfVar1[2];
                    local_108 = pfVar1[3];
                    local_140 = pfVar2[1];
                    local_b8 = pfVar1[4];
                    local_f8 = pfVar2[2];
                    local_f4 = pfVar2[3];
                    local_b4 = pfVar2[4];
                    fVar34 = *(float *)(lVar23 + 0x10);
                    local_84 = *(float *)(lVar23 + 4);
                    fVar30 = *(float *)(lVar23 + 0xc);
                    fStack_80 = *(float *)(lVar23 + 8);
                  }
                  fVar53 = _LC78;
                  fVar48 = fVar40 * fVar40;
                  fVar45 = fVar40 * fVar48;
                  local_84 = (((((local_114 + local_114) - _LC85 * local_b0) + _LC86 * local_140) -
                              local_84) * fVar48 +
                              (local_140 - local_114) * fVar40 + local_b0 + local_b0 +
                             (((local_b0 * _LC87 - local_114) - local_140 * _LC87) + local_84) *
                             fVar45) * _LC65;
                  local_fc = (((((fVar35 + fVar35) - _UNK_0010605c * local_fc) +
                               _UNK_00106064 * local_f8) - fStack_80) * fVar48 +
                              (local_f8 - fVar35) * fVar40 + local_fc + local_fc +
                             (((local_fc * _UNK_0010606c - fVar35) - local_f8 * _UNK_0010606c) +
                             fStack_80) * fVar45) * _UNK_0010603c;
                  local_138 = (((((local_138 + local_138) - local_108 * _LC85) + local_f4 * _LC86) -
                               fVar30) * fVar48 +
                               (local_f4 - local_138) * fVar40 + local_108 + local_108 +
                              (((local_108 * _LC87 - local_138) - local_f4 * _LC87) + fVar30) *
                              fVar45) * _LC65;
                  local_f4 = (((((fVar36 + fVar36) - _LC85 * local_b8) + _LC86 * local_b4) - fVar34)
                              * fVar48 + (local_b4 - fVar36) * fVar40 + local_b8 + local_b8 +
                             (((local_b8 * _LC87 - fVar36) - _LC87 * local_b4) + fVar34) * fVar45) *
                             _LC65;
                  if (iVar18 == 1) {
                    if (_LC78 <= local_138) {
                      fVar40 = powf(local_138,_LC80);
                      local_138 = (float)((double)fVar40 * __LC81 - __LC75);
                    }
                    else {
                      local_138 = local_138 * __LC79;
                    }
                    if (fVar53 <= local_fc) {
                      fVar40 = powf(local_fc,_LC80);
                      local_fc = (float)((double)fVar40 * __LC81 - __LC75);
                    }
                    else {
                      local_fc = local_fc * __LC79;
                    }
                    if (local_84 < fVar53) goto LAB_001031aa;
LAB_001033f4:
                    fVar40 = powf(local_84,_LC80);
                    local_f8 = (float)((double)fVar40 * __LC81 - __LC75);
                  }
                  else {
                    local_f8 = local_84;
                    if (iVar18 == 2) {
                      auVar56 = ok_color::oklab_to_linear_srgb();
                      fVar40 = _LC78;
                      local_138 = auVar56._8_4_;
                      local_84 = auVar56._0_4_;
                      fStack_80 = auVar56._4_4_;
                      if (_LC78 <= local_138) {
                        fVar53 = powf(local_138,_LC80);
                        local_138 = (float)((double)fVar53 * __LC81 - __LC75);
                      }
                      else {
                        local_138 = local_138 * __LC79;
                      }
                      if (fVar40 <= fStack_80) {
                        fVar53 = powf(fStack_80,_LC80);
                        local_fc = (float)((double)fVar53 * __LC81 - __LC75);
                      }
                      else {
                        local_fc = fStack_80 * __LC79;
                      }
                      if (fVar40 <= local_84) goto LAB_001033f4;
                      local_f8 = local_84 * __LC79;
                    }
                  }
                }
                else {
                  local_114 = pfVar1[1];
                  local_130 = pfVar1[2];
                  local_138 = pfVar1[3];
                  local_f4 = pfVar1[4];
                  iVar18 = *(int *)(lVar5 + 600);
                  if (iVar18 == 1) {
                    if (_LC73 <= local_138) {
                      local_138 = powf((float)(((double)local_138 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      local_138 = local_138 * _LC74;
                    }
                    if (fVar53 <= local_130) {
                      local_130 = powf((float)(((double)local_130 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      local_130 = local_130 * _LC74;
                    }
                    if (fVar53 <= local_114) {
                      local_114 = powf((float)(((double)local_114 + __LC75) * __LC76),_LC77);
                      local_140 = pfVar2[4];
                      local_84 = pfVar2[1];
                      fStack_80 = pfVar2[2];
                      fVar35 = pfVar2[3];
                    }
                    else {
                      local_114 = local_114 * _LC74;
                      local_84 = pfVar2[1];
                      fStack_80 = pfVar2[2];
                      fVar35 = pfVar2[3];
                      local_140 = pfVar2[4];
                    }
                    if (fVar53 <= fVar35) {
                      fVar35 = powf((float)(((double)fVar35 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      fVar35 = fVar35 * _LC74;
                    }
                    if (fVar53 <= fStack_80) {
                      fStack_80 = powf((float)(((double)fStack_80 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      fStack_80 = fStack_80 * _LC74;
                    }
                    if (fVar53 <= local_84) {
                      local_84 = powf((float)(((double)local_84 + __LC75) * __LC76),_LC77);
                    }
                    else {
                      local_84 = local_84 * _LC74;
                    }
                  }
                  else if (iVar18 == 2) {
                    if (_LC73 <= local_138) {
                      powf((float)(((double)local_138 + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= local_130) {
                      powf((float)(((double)local_130 + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= local_114) {
                      powf((float)(((double)local_114 + __LC75) * __LC76),_LC77);
                    }
                    auVar56 = ok_color::linear_srgb_to_oklab();
                    local_138 = auVar56._8_4_;
                    local_84 = auVar56._0_4_;
                    fStack_80 = auVar56._4_4_;
                    fVar35 = pfVar2[1];
                    local_140 = pfVar2[4];
                    local_130 = fStack_80;
                    local_114 = local_84;
                    fVar36 = pfVar2[2];
                    if (fVar53 <= pfVar2[3]) {
                      powf((float)(((double)pfVar2[3] + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= fVar36) {
                      powf((float)(((double)fVar36 + __LC75) * __LC76),_LC77);
                    }
                    if (fVar53 <= fVar35) {
                      powf((float)(((double)fVar35 + __LC75) * __LC76),_LC77);
                    }
                    auVar56 = ok_color::linear_srgb_to_oklab();
                    fVar35 = auVar56._8_4_;
                    local_84 = auVar56._0_4_;
                    fStack_80 = auVar56._4_4_;
                  }
                  else {
                    local_140 = pfVar2[4];
                    local_84 = pfVar2[1];
                    fStack_80 = pfVar2[2];
                    fVar35 = pfVar2[3];
                  }
                  fVar53 = _LC78;
                  local_84 = (local_84 - local_114) * fVar40 + local_114;
                  local_fc = (fStack_80 - local_130) * fVar40 + local_130;
                  local_f4 = (local_140 - local_f4) * fVar40 + local_f4;
                  local_138 = (fVar35 - local_138) * fVar40 + local_138;
                  if (iVar18 == 1) {
                    if (_LC78 <= local_138) {
                      fVar40 = powf(local_138,_LC80);
                      local_138 = (float)((double)fVar40 * __LC81 - __LC75);
                    }
                    else {
                      local_138 = local_138 * __LC79;
                    }
                    if (fVar53 <= local_fc) {
                      fVar40 = powf(local_fc,_LC80);
                      local_fc = (float)((double)fVar40 * __LC81 - __LC75);
                    }
                    else {
                      local_fc = local_fc * __LC79;
                    }
                    if (fVar53 <= local_84) {
                      fVar40 = powf(local_84,_LC80);
                      local_f8 = (float)((double)fVar40 * __LC81 - __LC75);
                    }
                    else {
LAB_001031aa:
                      local_f8 = local_84 * __LC79;
                    }
                  }
                  else {
                    local_f8 = local_84;
                    if (iVar18 == 2) {
                      auVar56 = ok_color::oklab_to_linear_srgb();
                      fVar40 = _LC78;
                      local_138 = auVar56._8_4_;
                      local_84 = auVar56._0_4_;
                      fStack_80 = auVar56._4_4_;
                      if (_LC78 <= local_138) {
                        fVar53 = powf(local_138,_LC80);
                        local_138 = (float)((double)fVar53 * __LC81 - __LC75);
                      }
                      else {
                        local_138 = local_138 * __LC79;
                      }
                      if (fVar40 <= fStack_80) {
                        fVar53 = powf(fStack_80,_LC80);
                        local_fc = (float)((double)fVar53 * __LC81 - __LC75);
                      }
                      else {
                        local_fc = fStack_80 * __LC79;
                      }
                      if (fVar40 <= local_84) {
                        fVar40 = powf(local_84,_LC80);
                        local_f8 = (float)((double)fVar40 * __LC81 - __LC75);
                      }
                      else {
                        local_f8 = local_84 * __LC79;
                      }
                    }
                  }
                }
              }
            }
            else if ((int)uVar21 < (int)uVar22) {
              uVar19 = uVar21 - 1;
              if (uVar21 != 0) {
                uVar15 = uVar21;
                if (uVar22 <= uVar19) {
                  uVar11 = (ulong)(int)uVar19;
                  goto LAB_00101fa3;
                }
                goto LAB_001025d1;
              }
              local_f8 = *(float *)(lVar23 + 4);
              local_fc = *(float *)(lVar23 + 8);
              local_138 = *(float *)(lVar23 + 0xc);
              local_f4 = *(float *)(lVar23 + 0x10);
            }
            else {
LAB_0010257f:
              lVar23 = lVar23 + (ulong)(uVar22 - 1) * 0x14;
              local_f8 = *(float *)(lVar23 + 4);
              local_fc = *(float *)(lVar23 + 8);
              local_138 = *(float *)(lVar23 + 0xc);
              local_f4 = *(float *)(lVar23 + 0x10);
            }
          }
        }
LAB_00101834:
        if (lVar4 != 0) {
          local_118 = (float)Curve::sample_baked(local_150 / fVar29);
          local_164 = fVar44 * local_118;
        }
        fVar28 = fVar28 * local_164;
        fVar50 = fVar50 * local_164;
        fVar35 = (float)local_68 * local_164;
        fVar36 = (float)((ulong)local_68 >> 0x20) * local_164;
        fVar40 = fVar28;
        fVar53 = fVar50;
        if (fVar37 <= 0.0) {
          fVar53 = (float)((uint)fVar50 ^ __LC54);
          fVar40 = (float)((uint)fVar28 ^ __LC54);
          fVar35 = (float)((uint)fVar35 ^ (uint)_LC88);
          fVar36 = (float)((uint)fVar36 ^ _LC88._4_4_);
        }
        fVar48 = SUB84(local_78,0) + fVar35;
        fVar49 = (float)((ulong)local_78 >> 0x20) + fVar36;
        fVar34 = SUB84(local_70,0);
        fVar45 = (float)((ulong)local_70 >> 0x20);
        local_58 = 0;
        local_48 = CONCAT44((fVar45 + fVar36) - fVar49,(fVar34 + fVar35) - fVar48);
        fVar30 = (float)Vector2::dot((Vector2 *)&local_48);
        fVar51 = SUB84(local_70,0);
        fVar52 = (float)((ulong)local_70 >> 0x20);
        if (fVar30 <= 0.0) {
LAB_00101d35:
          iVar18 = *(int *)(this + 0x10);
LAB_00101d43:
          local_58 = CONCAT44(fVar52 - fVar36,fVar51 - fVar35);
          uVar41 = CONCAT44(fVar52 + fVar36,fVar51 + fVar35);
          uVar32 = uVar41;
          uVar42 = local_58;
          if (fVar37 <= 0.0) {
            uVar32 = local_58;
            uVar42 = uVar41;
          }
          iVar20 = 1;
          if (iVar18 != 0) {
            iVar20 = iVar18;
          }
          bVar9 = false;
          iVar18 = iVar20;
          uVar41 = uVar32;
          uVar46 = uVar42;
          local_78 = local_70;
          local_160 = local_60;
        }
        else {
          fVar34 = (fVar34 + fVar40) - fVar48;
          fVar54 = local_48._4_4_ / fVar30;
          fVar45 = (fVar45 + fVar53) - fVar49;
          fVar53 = (fVar31 + fVar53) - fVar49;
          fVar33 = (fVar33 + fVar40) - fVar48;
          fVar30 = (float)local_48 / fVar30;
          fVar31 = fVar45 * fVar30 - fVar34 * fVar54;
          fVar40 = fVar53 * fVar30 - fVar33 * fVar54;
          if (fVar31 < _LC89) {
            if (_LC89 <= fVar40) goto LAB_00101a49;
            goto LAB_00101d35;
          }
          if (_LC61 < fVar31) {
            if (_LC61 < fVar40) goto LAB_00101d35;
          }
          else if (fVar31 == fVar40) goto LAB_00101d35;
LAB_00101a49:
          iVar18 = *(int *)(this + 0x10);
          fVar8 = _LC61;
          if (_LC61 <= ABS(fVar31) * _LC61) {
            fVar8 = ABS(fVar31) * _LC61;
          }
          if (((ABS(fVar31 - fVar40) < fVar8) ||
              (fVar33 = fVar53 * fVar54 + fVar33 * fVar30,
              fVar33 = (((fVar34 * fVar30 + fVar45 * fVar54) - fVar33) * fVar40) / (fVar40 - fVar31)
                       + fVar33, fVar33 < 0.0)) || (_LC57 < fVar33)) goto LAB_00101d43;
          fVar48 = fVar33 * (float)local_48 + fVar48;
          fVar49 = fVar33 * local_48._4_4_ + fVar49;
          uVar46 = CONCAT44(fVar49,fVar48);
          uVar41 = CONCAT44((fVar52 + fVar52) - fVar49,(fVar51 + fVar51) - fVar48);
          local_58 = uVar41;
          if (fVar37 <= 0.0) {
            uVar42 = uVar46;
            if (iVar18 == 0) {
              fVar31 = (float)Vector2::distance_squared_to((Vector2 *)&local_58);
              uVar32 = uVar41;
              if (fVar31 / (local_118 * local_118 * fVar44 * fVar44) <= fVar38) goto LAB_001020f6;
              iVar18 = 1;
            }
            uVar32 = CONCAT44((float)((ulong)local_68 >> 0x20) * local_164 +
                              (float)((ulong)local_70 >> 0x20),
                              (float)local_68 * local_164 + SUB84(local_70,0));
          }
          else {
            uVar32 = uVar46;
            uVar42 = uVar41;
            if (iVar18 == 0) {
              fVar31 = (float)Vector2::distance_squared_to((Vector2 *)&local_58);
              if (fVar31 / (local_118 * local_118 * fVar44 * fVar44) <= fVar38) {
LAB_001020f6:
                iVar18 = 0;
                uVar41 = uVar32;
                uVar46 = uVar42;
                goto LAB_00101b4c;
              }
              iVar18 = 1;
            }
            uVar41 = uVar46;
            uVar46 = CONCAT44((float)((ulong)local_70 >> 0x20) -
                              (float)((ulong)local_68 >> 0x20) * local_164,
                              SUB84(local_70,0) - (float)local_68 * local_164);
          }
LAB_00101b4c:
          bVar9 = true;
          local_78 = local_70;
          local_160 = local_60;
        }
        fVar31 = SUB84(local_78,0);
        fVar33 = (float)((ulong)local_78 >> 0x20);
        if (bVar9) {
          uVar43 = uVar46;
          uVar47 = uVar32;
          if (iVar18 != 0) {
            if (fVar37 <= 0.0) {
              uVar43 = uVar42;
              uVar47 = CONCAT44(fVar50 + fVar33,fVar28 + fVar31);
            }
            else {
              uVar43 = CONCAT44(fVar33 - fVar50,fVar31 - fVar28);
              uVar47 = uVar41;
            }
          }
        }
        else {
          uVar43 = CONCAT44(fVar33 - fVar50,fVar31 - fVar28);
          uVar47 = CONCAT44(fVar33 + fVar50,fVar31 + fVar28);
        }
        local_70 = local_78;
        local_68 = uVar39;
        local_60 = local_160;
        if (iVar17 == -1) {
          iVar17 = 0;
          goto LAB_001015d6;
        }
        if ((iVar17 == 0) && (bVar13 != 0)) {
          bVar27 = iVar18 == 0;
        }
        else if (((lVar4 != 0) && ((bVar13 != 0 && (!bVar27)))) && (iVar17 == local_d0)) {
          strip_add_quad(this);
          goto LAB_00101e70;
        }
        strip_add_quad(uVar32,uVar46,CONCAT44(local_fc,local_f8),CONCAT44(local_f4,local_138),this);
        if (iVar18 != 0) {
          uVar39 = uVar47;
          if (0.0 < fVar37) {
            uVar32 = uVar46;
            uVar39 = uVar43;
          }
          if (iVar18 == 1) {
            if ((bVar13 == 0) || (iVar17 != local_d0)) {
              strip_add_tri(this,fVar37 <= 0.0);
              goto LAB_00101cf6;
            }
LAB_00102056:
            if (bVar9) goto LAB_00101e70;
          }
          else {
            if (iVar18 == 2) {
              if ((bVar13 != 0) && (iVar17 == local_d0)) goto LAB_00102056;
              fVar31 = (float)((ulong)local_70 >> 0x20);
              local_50 = CONCAT44((float)((ulong)uVar32 >> 0x20) - fVar31,
                                  (float)uVar32 - SUB84(local_70,0));
              local_48 = CONCAT44((float)((ulong)uVar39 >> 0x20) - fVar31,
                                  (float)uVar39 - SUB84(local_70,0));
              fVar31 = (float)Vector2::cross((Vector2 *)&local_50);
              fVar28 = (float)Vector2::dot((Vector2 *)&local_50);
              if ((fVar31 == 0.0) && ((int)fVar31 < 0)) {
                fVar31 = 0.0;
              }
              atan2f(fVar31,fVar28);
              strip_add_arc(local_70,this,fVar37 <= 0.0);
            }
LAB_00101cf6:
            if (bVar9) goto LAB_00101cfe;
          }
          strip_begin(uVar47,uVar43,CONCAT44(local_fc,local_f8),CONCAT44(local_f4,local_138),this);
        }
LAB_00101cfe:
        iVar17 = iVar14;
      } while (iVar14 <= local_d0);
      if (bVar13 == 0) goto LAB_001028e6;
    }
LAB_00101e70:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00103a74:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_118 = _LC57;
  local_164 = fVar44;
  if (!bVar6) goto LAB_00101458;
LAB_00101351:
  if (1 < iVar26) {
    uVar25 = 1;
    fVar29 = 0.0;
    lVar5 = *(long *)(this + 8);
    uVar11 = 0;
    while (uVar12 = uVar25, lVar5 != 0) {
      lVar23 = *(long *)(lVar5 + -8);
      if ((lVar23 <= (long)uVar25) || (lVar16 = uVar25 * 8, uVar12 = uVar11, lVar23 <= (long)uVar11)
         ) goto LAB_00101404;
      uVar25 = uVar25 + 1;
      fVar28 = (float)Vector2::distance_to((Vector2 *)(lVar5 + lVar16));
      fVar29 = fVar28 + fVar29;
      if (uVar11 == iVar26 - 2) goto LAB_0010224e;
      uVar11 = uVar11 + 1;
      lVar5 = *(long *)(this + 8);
    }
    lVar23 = 0;
    goto LAB_00101404;
  }
  fVar29 = 0.0;
LAB_0010224e:
  if (bVar13 == 0) {
    if (*(int *)(this + 0x14) - 1U < 2) {
      fVar29 = fVar29 + local_164;
    }
    if (*(int *)(this + 0x18) - 1U < 2) {
      if (lVar4 == 0) {
        if (1 < iVar26) {
          fVar29 = fVar29 + fVar44;
          goto LAB_001022a7;
        }
      }
      else {
        fVar28 = (float)Curve::sample_baked(_LC57);
        if (1 < iVar26) {
          fVar29 = fVar28 * fVar44 + fVar29;
LAB_001022a7:
          if (_LC61 <= ABS(fVar29)) goto LAB_0010146a;
        }
      }
    }
    else if (1 < iVar26) goto LAB_001022a7;
    goto LAB_00101e70;
  }
  lVar5 = *(long *)(this + 8);
  uVar12 = (ulong)(iVar26 + -1);
  if (lVar5 != 0) {
    lVar23 = *(long *)(lVar5 + -8);
    if (lVar23 <= (long)uVar12) goto LAB_00101404;
    fVar28 = (float)Vector2::distance_to((Vector2 *)(lVar5 + uVar12 * 8));
    fVar29 = fVar28 + fVar29;
    goto LAB_001022a7;
  }
LAB_00101ee0:
  lVar23 = 0;
LAB_00101404:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar23,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SortArray<Gradient::Point, _DefaultComparator<Gradient::Point>, true>::introsort(long, long,
   Gradient::Point*, long) const [clone .isra.0] */

void SortArray<Gradient::Point,_DefaultComparator<Gradient::Point>,true>::introsort
               (long param_1,long param_2,Point *param_3,long param_4)

{
  Point *pPVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  long lVar11;
  long lVar12;
  Point *pPVar13;
  long lVar14;
  Point *pPVar15;
  long lVar16;
  Point *pPVar17;
  long lVar18;
  Point *pPVar19;
  long lVar20;
  long lVar21;
  long in_FS_OFFSET;
  bool bVar22;
  float fVar23;
  long local_b8;
  float local_78;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  
  lVar14 = param_2 - param_1;
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar14) {
    if (param_4 != 0) {
      lVar21 = param_2;
      local_b8 = param_4;
LAB_001048a1:
      local_b8 = local_b8 + -1;
      fVar2 = *(float *)(param_3 + param_1 * 0x14);
      fVar3 = *(float *)(param_3 + ((lVar14 >> 1) + param_1) * 0x14);
      fVar4 = *(float *)(param_3 + lVar21 * 0x14 + -0x14);
      if (fVar3 <= fVar2) {
        fVar23 = fVar2;
        if ((fVar4 <= fVar2) && (fVar23 = fVar4, fVar4 <= fVar3)) {
          fVar23 = fVar3;
        }
      }
      else {
        fVar23 = fVar3;
        if ((fVar4 <= fVar3) && (fVar23 = fVar4, fVar4 <= fVar2)) {
          fVar23 = fVar2;
        }
      }
      lVar14 = lVar21;
      pPVar17 = param_3 + param_1 * 0x14;
      param_2 = param_1;
      do {
        if (*(float *)pPVar17 <= fVar23 && fVar23 != *(float *)pPVar17) {
          if (lVar21 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_0010491c;
          }
        }
        else {
LAB_0010491c:
          lVar14 = lVar14 + -1;
          pPVar19 = param_3 + lVar14 * 0x14;
          if (fVar23 < *(float *)pPVar19) {
            pPVar13 = param_3 + lVar14 * 0x14 + -0x14;
            while (param_1 != lVar14) {
              lVar14 = lVar14 + -1;
              pPVar19 = pPVar13;
              if (*(float *)pPVar13 <= fVar23) goto LAB_0010499c;
              pPVar13 = pPVar13 + -0x14;
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_0010499c:
          if (lVar14 <= param_2) goto LAB_001049e0;
          uVar7 = *(undefined8 *)(pPVar19 + 8);
          auVar5 = *(undefined1 (*) [16])pPVar17;
          fVar2 = *(float *)(pPVar17 + 0x10);
          *(undefined8 *)pPVar17 = *(undefined8 *)pPVar19;
          *(undefined8 *)(pPVar17 + 8) = uVar7;
          *(float *)(pPVar17 + 0x10) = *(float *)(pPVar19 + 0x10);
          *(float *)(pPVar19 + 0x10) = fVar2;
          *(undefined1 (*) [16])pPVar19 = auVar5;
        }
        pPVar17 = pPVar17 + 0x14;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_00104c46:
    lVar20 = lVar14 + -2 >> 1;
    lVar21 = lVar20 * 2 + 2;
    pPVar17 = param_3 + (param_1 + lVar20) * 0x14;
    do {
      auVar5 = *(undefined1 (*) [16])pPVar17;
      fVar2 = *(float *)(pPVar17 + 0x10);
      local_78 = (float)*(undefined8 *)pPVar17;
      lVar11 = lVar21;
      lVar18 = lVar20;
      if (lVar21 < lVar14) {
        do {
          pPVar19 = param_3 + (param_1 + lVar11) * 0x14;
          fVar3 = *(float *)(param_3 + (param_1 + lVar11 + -1) * 0x14);
          lVar12 = lVar11 + -1;
          lVar16 = lVar11;
          pPVar13 = param_3 + (param_1 + lVar11 + -1) * 0x14;
          if (fVar3 < *(float *)pPVar19 || fVar3 == *(float *)pPVar19) {
            lVar16 = lVar11 + 1;
            lVar12 = lVar11;
            pPVar13 = pPVar19;
          }
          uVar7 = *(undefined8 *)(pPVar13 + 8);
          lVar11 = lVar16 * 2;
          pPVar19 = param_3 + (lVar18 + param_1) * 0x14;
          *(undefined8 *)pPVar19 = *(undefined8 *)pPVar13;
          *(undefined8 *)(pPVar19 + 8) = uVar7;
          *(float *)(pPVar19 + 0x10) = *(float *)(pPVar13 + 0x10);
          lVar18 = lVar12;
        } while (lVar14 != lVar11 && SBORROW8(lVar14,lVar11) == lVar14 + lVar16 * -2 < 0);
        pPVar19 = pPVar13;
        if (lVar14 == lVar11) {
LAB_00104da4:
          lVar12 = lVar11 + -1;
          pPVar13 = param_3 + (param_1 + lVar12) * 0x14;
          uVar7 = *(undefined8 *)(pPVar13 + 8);
          *(undefined8 *)pPVar19 = *(undefined8 *)pPVar13;
          *(undefined8 *)(pPVar19 + 8) = uVar7;
          *(float *)(pPVar19 + 0x10) = *(float *)(pPVar13 + 0x10);
        }
        lVar11 = lVar12 + -1;
        stack0xffffffffffffffac = auVar5._4_12_;
        if (lVar12 <= lVar20) goto LAB_00104e52;
        do {
          lVar18 = lVar11 >> 1;
          pPVar19 = param_3 + (param_1 + lVar18) * 0x14;
          pPVar13 = param_3 + (lVar12 + param_1) * 0x14;
          if (local_78 < *(float *)pPVar19 || local_78 == *(float *)pPVar19) break;
          uVar7 = *(undefined8 *)(pPVar19 + 8);
          *(undefined8 *)pPVar13 = *(undefined8 *)pPVar19;
          *(undefined8 *)(pPVar13 + 8) = uVar7;
          *(float *)(pPVar13 + 0x10) = *(float *)(pPVar19 + 0x10);
          lVar11 = (lVar18 + -1) - (lVar18 + -1 >> 0x3f);
          pPVar13 = pPVar19;
          lVar12 = lVar18;
        } while (lVar20 < lVar18);
        local_58._0_4_ = local_78;
        uStack_50 = auVar5._8_8_;
        *(float *)(pPVar13 + 0x10) = fVar2;
        *(undefined1 (*) [8])pPVar13 = local_58;
        *(undefined8 *)(pPVar13 + 8) = uStack_50;
        if (lVar20 == 0) goto LAB_00104a7a;
      }
      else {
        pPVar19 = pPVar17;
        if (lVar21 == lVar14) goto LAB_00104da4;
        stack0xffffffffffffffac = SUB1612(*(undefined1 (*) [16])pPVar17,4);
        pPVar13 = pPVar17;
LAB_00104e52:
        auVar10 = stack0xffffffffffffffac;
        local_58._0_4_ = local_78;
        uStack_50 = auVar10._4_8_;
        *(float *)(pPVar13 + 0x10) = fVar2;
        *(undefined1 (*) [8])pPVar13 = local_58;
        *(undefined8 *)(pPVar13 + 8) = uStack_50;
      }
      lVar20 = lVar20 + -1;
      pPVar17 = pPVar17 + -0x14;
      lVar21 = lVar21 + -2;
    } while( true );
  }
  goto LAB_00104bfc;
LAB_001049e0:
  introsort(param_2,lVar21,param_3,local_b8);
  lVar14 = param_2 - param_1;
  if (lVar14 < 0x11) goto LAB_00104bfc;
  lVar21 = param_2;
  if (local_b8 == 0) goto LAB_00104c46;
  goto LAB_001048a1;
LAB_00104a7a:
  pPVar17 = param_3 + param_1 * 0x14;
  pPVar19 = param_3 + (param_2 + -1) * 0x14 + -0x14;
  lVar14 = (param_2 + -1) - param_1;
  do {
    uVar7 = *(undefined8 *)(pPVar17 + 8);
    pPVar13 = pPVar19 + 0x14;
    uVar8 = *(undefined8 *)pPVar13;
    auVar9 = *(undefined1 (*) [16])pPVar13;
    auVar5 = *(undefined1 (*) [16])pPVar13;
    fVar2 = *(float *)(pPVar19 + 0x24);
    *(undefined8 *)(pPVar19 + 0x14) = *(undefined8 *)pPVar17;
    *(undefined8 *)(pPVar19 + 0x1c) = uVar7;
    *(float *)(pPVar19 + 0x24) = *(float *)(pPVar17 + 0x10);
    local_78 = (float)uVar8;
    if (lVar14 < 3) {
      pPVar15 = pPVar17;
      if (lVar14 == 2) goto LAB_00104dda;
      stack0xffffffffffffffac = auVar9._4_12_;
    }
    else {
      lVar21 = 2;
      lVar20 = 0;
      do {
        pPVar1 = param_3 + (param_1 + lVar21) * 0x14;
        fVar3 = *(float *)(param_3 + (param_1 + lVar21 + -1) * 0x14);
        lVar11 = lVar21 + -1;
        lVar18 = lVar21;
        pPVar15 = param_3 + (param_1 + lVar21 + -1) * 0x14;
        if (fVar3 < *(float *)pPVar1 || fVar3 == *(float *)pPVar1) {
          lVar18 = lVar21 + 1;
          lVar11 = lVar21;
          pPVar15 = pPVar1;
        }
        uVar7 = *(undefined8 *)(pPVar15 + 8);
        lVar21 = lVar18 * 2;
        pPVar1 = param_3 + (lVar20 + param_1) * 0x14;
        *(undefined8 *)pPVar1 = *(undefined8 *)pPVar15;
        *(undefined8 *)(pPVar1 + 8) = uVar7;
        *(float *)(pPVar1 + 0x10) = *(float *)(pPVar15 + 0x10);
        lVar20 = lVar11;
      } while (lVar21 < lVar14);
      if (lVar21 == lVar14) {
LAB_00104dda:
        uVar7 = *(undefined8 *)(pPVar19 + 8);
        *(undefined8 *)pPVar15 = *(undefined8 *)pPVar19;
        *(undefined8 *)(pPVar15 + 8) = uVar7;
        *(float *)(pPVar15 + 0x10) = *(float *)(pPVar19 + 0x10);
        lVar11 = lVar14 + -1;
        lVar21 = lVar14 + -2 >> 1;
      }
      else {
        stack0xffffffffffffffac = auVar5._4_12_;
        lVar21 = (lVar11 + -1) / 2;
        if (lVar11 == 0) goto LAB_00104bcc;
      }
      do {
        _local_58 = *(undefined1 (*) [16])pPVar13;
        pPVar1 = param_3 + (param_1 + lVar21) * 0x14;
        pPVar15 = param_3 + (lVar11 + param_1) * 0x14;
        if (local_78 < *(float *)pPVar1 || local_78 == *(float *)pPVar1) break;
        uVar7 = *(undefined8 *)(pPVar1 + 8);
        *(undefined8 *)pPVar15 = *(undefined8 *)pPVar1;
        *(undefined8 *)(pPVar15 + 8) = uVar7;
        *(float *)(pPVar15 + 0x10) = *(float *)(pPVar1 + 0x10);
        bVar22 = lVar21 != 0;
        lVar11 = lVar21;
        pPVar15 = pPVar1;
        lVar21 = (lVar21 + -1) / 2;
      } while (bVar22);
    }
LAB_00104bcc:
    auVar10 = stack0xffffffffffffffac;
    pPVar19 = pPVar19 + -0x14;
    local_58._0_4_ = local_78;
    uStack_50 = auVar10._4_8_;
    *(float *)(pPVar15 + 0x10) = fVar2;
    *(undefined1 (*) [8])pPVar15 = local_58;
    *(undefined8 *)(pPVar15 + 8) = uStack_50;
    bVar22 = 1 < lVar14;
    lVar14 = lVar14 + -1;
  } while (bVar22);
LAB_00104bfc:
  if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ok_color::linear_srgb_to_oklab(ok_color::RGB) */

undefined8 __thiscall ok_color::linear_srgb_to_oklab(undefined8 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 extraout_XMM0_Qb;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = (float)param_1;
  uStack_24 = (float)((ulong)param_1 >> 0x20);
  fVar1 = cbrtf(_LC9 * local_28 + _LC10 * uStack_24 + param_2 * __LC11);
  fVar5 = fVar1 * (float)_LC12;
  fVar1 = fVar1 * _LC12._4_4_;
  fVar2 = cbrtf(_LC13 * local_28 + _LC14 * uStack_24 + param_2 * __LC15);
  fVar3 = fVar2 * (float)_LC16;
  fVar2 = fVar2 * _LC16._4_4_;
  fVar4 = cbrtf(local_28 * __LC17 + uStack_24 * __LC18 + param_2 * __LC19);
  auVar6._4_4_ = (fVar1 - fVar2) + fVar4 * _LC20._4_4_;
  auVar6._8_4_ = (float)extraout_XMM0_Qb * 0.0 + 0.0;
  auVar6._12_4_ = (float)((ulong)extraout_XMM0_Qb >> 0x20) * 0.0 + 0.0;
  auVar6._0_4_ = (fVar5 + fVar3) - fVar4 * (float)_LC20;
  return auVar6._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ok_color::oklab_to_linear_srgb(ok_color::Lab) */

undefined8 __thiscall ok_color::oklab_to_linear_srgb(undefined8 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  fVar1 = _LC24 * fVar2 + fVar3 + _LC25 * param_2;
  fVar4 = (fVar3 - _LC26 * fVar2) - _LC27 * param_2;
  fVar1 = fVar1 * fVar1 * fVar1;
  fVar3 = (fVar3 - fVar2 * __LC28) - param_2 * __LC29;
  fVar4 = fVar4 * fVar4 * fVar4;
  fVar3 = fVar3 * fVar3 * fVar3;
  return CONCAT44((fVar1 * _LC30._4_4_ + fVar4 * _LC31._4_4_) - fVar3 * _LC32._4_4_,
                  (fVar1 * (float)_LC30 - fVar4 * (float)_LC31) + fVar3 * (float)_LC32);
}



/* void LocalVector<Gradient::Point, unsigned int, false,
   false>::sort_custom<_DefaultComparator<Gradient::Point> >() */

void __thiscall
LocalVector<Gradient::Point,unsigned_int,false,false>::
sort_custom<_DefaultComparator<Gradient::Point>>
          (LocalVector<Gradient::Point,unsigned_int,false,false> *this)

{
  Point *__dest;
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  Point *__src;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  Point *pPVar15;
  Point *pPVar16;
  ulong uVar17;
  long lVar18;
  size_t sVar19;
  long in_FS_OFFSET;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)this;
  if (uVar3 != 0) {
    __src = *(Point **)(this + 8);
    uVar17 = (ulong)uVar3;
    if (uVar3 == 1) {
      if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
        SortArray<Gradient::Point,_DefaultComparator<Gradient::Point>,true>::introsort(0,1,__src,0);
        return;
      }
      goto LAB_00105504;
    }
    lVar11 = 0;
    uVar14 = uVar17;
    do {
      uVar14 = (long)uVar14 >> 1;
      lVar11 = lVar11 + 1;
    } while (uVar14 != 1);
    SortArray<Gradient::Point,_DefaultComparator<Gradient::Point>,true>::introsort
              (0,uVar17,__src,lVar11 * 2);
    __dest = __src + 0x14;
    if (uVar17 < 0x11) {
      sVar19 = 0x14;
      uVar14 = 1;
      pPVar15 = __dest;
      do {
        fVar1 = *(float *)pPVar15;
        uVar6 = *(undefined8 *)pPVar15;
        uVar7 = *(undefined8 *)(pPVar15 + 8);
        fVar4 = *(float *)(pPVar15 + 0x10);
        if (fVar1 < *(float *)__src) {
          memmove(__dest,__src,sVar19);
          *(float *)(__src + 0x10) = fVar4;
          *(undefined8 *)__src = uVar6;
          *(undefined8 *)(__src + 8) = uVar7;
        }
        else {
          pPVar16 = pPVar15;
          if (fVar1 < *(float *)(pPVar15 + -0x14)) {
            sVar10 = sVar19;
            uVar9 = uVar14;
            while (uVar9 = uVar9 - 1, uVar9 != 0) {
              uVar8 = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14 + 8);
              fVar2 = *(float *)(__src + (sVar10 - 0x28));
              *(undefined8 *)(__src + sVar10) = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14);
              *(undefined8 *)(__src + sVar10 + 8) = uVar8;
              *(undefined4 *)(__src + sVar10 + 0x10) =
                   *(undefined4 *)(pPVar15 + sVar10 + -sVar19 + -4);
              if (fVar2 <= fVar1) {
                pPVar16 = __src + uVar9 * 0x14;
                goto LAB_0010548c;
              }
              sVar10 = sVar10 - 0x14;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pPVar16 = __dest;
          }
LAB_0010548c:
          *(undefined8 *)pPVar16 = uVar6;
          *(undefined8 *)(pPVar16 + 8) = uVar7;
          *(float *)(pPVar16 + 0x10) = fVar4;
        }
        uVar14 = uVar14 + 1;
        sVar19 = sVar19 + 0x14;
        pPVar15 = pPVar15 + 0x14;
      } while (uVar17 != uVar14);
    }
    else {
      pPVar15 = __dest;
      lVar11 = 0;
      sVar19 = 0x14;
      do {
        while( true ) {
          fVar1 = *(float *)pPVar15;
          lVar18 = lVar11 + 1;
          uVar6 = *(undefined8 *)pPVar15;
          uVar7 = *(undefined8 *)(pPVar15 + 8);
          fVar4 = *(float *)(pPVar15 + 0x10);
          if (fVar1 < *(float *)__src) break;
          pPVar16 = pPVar15;
          if (fVar1 < *(float *)(pPVar15 + -0x14)) {
            sVar10 = sVar19;
            while (lVar11 != 0) {
              uVar8 = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14 + 8);
              fVar2 = *(float *)(__src + (sVar10 - 0x28));
              *(undefined8 *)(__src + sVar10) = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14);
              *(undefined8 *)(__src + sVar10 + 8) = uVar8;
              *(undefined4 *)(__src + sVar10 + 0x10) =
                   *(undefined4 *)(pPVar15 + sVar10 + -sVar19 + -4);
              if (fVar2 <= fVar1) {
                pPVar16 = __src + lVar11 * 0x14;
                goto LAB_001052b0;
              }
              sVar10 = sVar10 - 0x14;
              lVar11 = lVar11 + -1;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pPVar16 = __dest;
          }
LAB_001052b0:
          pPVar15 = pPVar15 + 0x14;
          *(float *)(pPVar16 + 0x10) = fVar4;
          *(undefined8 *)pPVar16 = uVar6;
          *(undefined8 *)(pPVar16 + 8) = uVar7;
          lVar11 = lVar18;
          sVar19 = sVar19 + 0x14;
          if (lVar18 == 0xf) goto LAB_001052d2;
        }
        memmove(__dest,__src,sVar19);
        pPVar15 = pPVar15 + 0x14;
        *(float *)(__src + 0x10) = fVar4;
        *(undefined8 *)__src = uVar6;
        *(undefined8 *)(__src + 8) = uVar7;
        lVar11 = lVar18;
        sVar19 = sVar19 + 0x14;
      } while (lVar18 != 0xf);
LAB_001052d2:
      pPVar15 = __src + 0x140;
      lVar11 = -0x140;
      uVar14 = 0x10;
      do {
        fVar4 = *(float *)(pPVar15 + 0x10);
        fVar1 = *(float *)pPVar15;
        uVar6 = *(undefined8 *)pPVar15;
        uVar7 = *(undefined8 *)(pPVar15 + 8);
        lVar13 = -lVar11;
        lVar18 = uVar14 - 1;
        pPVar16 = pPVar15;
        if (fVar1 < *(float *)(pPVar15 + -0x14)) {
          do {
            uVar8 = *(undefined8 *)(pPVar15 + lVar13 + lVar11 + -0x14 + 8);
            fVar2 = *(float *)(__src + lVar13 + -0x28);
            *(undefined8 *)(__src + lVar13) = *(undefined8 *)(pPVar15 + lVar13 + lVar11 + -0x14);
            *(undefined8 *)(__src + lVar13 + 8) = uVar8;
            *(undefined4 *)(__src + lVar13 + 0x10) = *(undefined4 *)(pPVar15 + lVar13 + lVar11 + -4)
            ;
            lVar12 = lVar18 + -1;
            if (fVar2 <= fVar1) {
              pPVar16 = __src + lVar18 * 0x14;
              goto LAB_00105378;
            }
            lVar13 = lVar13 + -0x14;
            lVar18 = lVar12;
          } while (lVar12 != 0);
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          pPVar16 = __dest;
        }
LAB_00105378:
        uVar14 = uVar14 + 1;
        pPVar15 = pPVar15 + 0x14;
        lVar11 = lVar11 + -0x14;
        *(float *)(pPVar16 + 0x10) = fVar4;
        *(undefined8 *)pPVar16 = uVar6;
        *(undefined8 *)(pPVar16 + 8) = uVar7;
      } while (uVar17 != uVar14);
    }
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105504:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00105880:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00105880;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_001057ec:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00105781;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001057ec;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00105781:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00105bf0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00105bf0;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00105b01;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00105b01:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Color>::resize<false>(long) */

undefined8 __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar10 * 0x10;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00105f10:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x10 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_00105f10;
  if (param_1 <= lVar10) {
    if ((lVar11 != lVar4) && (uVar7 = _realloc(this,lVar11), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar11 == lVar4) {
LAB_00105e7c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar8[-1];
    if (param_1 <= lVar4) goto LAB_00105e14;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00105e7c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar4 = 0;
  }
  uVar3 = _UNK_00106098;
  uVar7 = __LC50;
  puVar6 = puVar8 + lVar4 * 2;
  puVar9 = puVar6 + (param_1 - lVar4) * 2;
  do {
    *puVar6 = uVar7;
    puVar6[1] = uVar3;
    puVar6 = puVar6 + 2;
  } while (puVar9 != puVar6);
LAB_00105e14:
  puVar8[-1] = param_1;
  return 0;
}


