
/* tvg::Canvas::sync() */

undefined8 __thiscall tvg::Canvas::sync(Canvas *this)

{
  long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(this + 8);
  if ((*(char *)(lVar1 + 0x30) != '\0') && (*(char *)(lVar1 + 0x30) != '\x03')) {
    cVar2 = (**(code **)(**(long **)(lVar1 + 0x18) + 0x80))();
    if (cVar2 == '\0') {
      return 6;
    }
    *(undefined1 *)(lVar1 + 0x30) = 0;
    return 0;
  }
  return 2;
}



/* tvg::Canvas::viewport(int, int, int, int) */

undefined8 __thiscall
tvg::Canvas::viewport(Canvas *this,int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  lVar1 = *(long *)(this + 8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(char *)(lVar1 + 0x30) == '\x03') || (uVar3 = 2, *(char *)(lVar1 + 0x30) == '\0')) {
    local_38 = CONCAT44(param_2,param_1);
    uStack_30 = CONCAT44(param_4,param_3);
    lVar2 = (**(code **)(**(long **)(lVar1 + 0x18) + 0x70))();
    if ((lVar2 != 0) && ((*(int *)(lVar2 + 0x34) != 0 && (*(int *)(lVar2 + 0x38) != 0)))) {
      local_28 = 0;
      local_20 = *(undefined8 *)(lVar2 + 0x34);
      tvg::RenderRegion::intersect((RenderRegion *)&local_38);
    }
    if ((((*(int *)(lVar1 + 0x20) != (int)local_38) || (*(int *)(lVar1 + 0x24) != local_38._4_4_))
        || (*(int *)(lVar1 + 0x28) != (int)uStack_30)) ||
       (*(int *)(lVar1 + 0x2c) != uStack_30._4_4_)) {
      (**(code **)(**(long **)(lVar1 + 0x18) + 0x58))(*(long **)(lVar1 + 0x18),&local_38);
      *(undefined1 *)(lVar1 + 0x30) = 3;
      *(undefined8 *)(lVar1 + 0x20) = local_38;
      *(undefined8 *)(lVar1 + 0x28) = uStack_30;
    }
    uVar3 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* tvg::Canvas::draw() */

undefined8 __thiscall tvg::Canvas::draw(Canvas *this)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  long local_30;
  
  plVar1 = *(long **)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = (char)plVar1[6];
  if (cVar2 == '\x03') {
    plVar5 = (long *)*plVar1;
    if (plVar5 != plVar1) {
      local_68 = (void *)0x0;
      local_60 = 0;
      local_38 = 0x3f800000;
      local_58 = ZEXT416(_LC0);
      local_48 = ZEXT416(_LC0);
      do {
        tvg::Paint::Impl::update
                  (*(undefined8 *)(plVar5[2] + 0x10),plVar1[3],local_58,&local_68,0xff,0xff,0);
        plVar5 = (long *)*plVar5;
      } while (plVar5 != plVar1);
      *(undefined1 *)(plVar1 + 6) = 1;
      free(local_68);
      cVar2 = (char)plVar1[6];
      goto LAB_0010017a;
    }
  }
  else {
LAB_0010017a:
    if ((cVar2 != '\x02') && ((long *)*plVar1 != plVar1)) {
      cVar2 = (**(code **)(*(long *)plVar1[3] + 0x20))();
      if ((cVar2 != '\0') && (plVar5 = (long *)*plVar1, plVar1 != plVar5)) {
        cVar2 = '\0';
        do {
          cVar3 = tvg::Paint::Impl::render(*(RenderMethod **)(plVar5[2] + 0x10));
          plVar5 = (long *)*plVar5;
          if (cVar3 != '\0') {
            cVar2 = cVar3;
          }
        } while (plVar1 != plVar5);
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*(long *)plVar1[3] + 0x38))();
          if (cVar2 != '\0') {
            *(undefined1 *)(plVar1 + 6) = 2;
            uVar4 = 0;
            goto LAB_001001f5;
          }
        }
      }
    }
  }
  uVar4 = 2;
LAB_001001f5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Canvas::clear(bool) */

undefined8 __thiscall tvg::Canvas::clear(Canvas *this,bool param_1)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar2 = *(long **)(this + 8);
  cVar4 = (**(code **)(*(long *)plVar2[3] + 0x78))();
  uVar5 = 2;
  if (cVar4 != '\0') {
    if (param_1) {
      plVar6 = (long *)*plVar2;
      if (plVar6 != plVar2) {
        do {
          plVar7 = (long *)plVar6[2];
          pcVar1 = (char *)(plVar7[2] + 0x78);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            (**(code **)(*plVar7 + 8))();
          }
          plVar6 = (long *)*plVar6;
        } while (plVar2 != plVar6);
        plVar7 = (long *)*plVar2;
        if (plVar2 != (long *)*plVar2) {
          do {
            plVar3 = (long *)*plVar7;
            operator_delete(plVar7,0x18);
            plVar7 = plVar3;
          } while (plVar6 != plVar3);
        }
      }
      plVar2[2] = 0;
      *plVar2 = (long)plVar2;
      plVar2[1] = (long)plVar2;
    }
    *(undefined1 *)(plVar2 + 6) = 0;
    uVar5 = 0;
  }
  return uVar5;
}



/* tvg::Canvas::~Canvas() */

void __thiscall tvg::Canvas::~Canvas(Canvas *this)

{
  char *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar2 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__Canvas_00100790;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)(*(long *)puVar2[3] + 0x80))();
    (**(code **)(*(long *)puVar2[3] + 0x78))();
    puVar6 = (undefined8 *)*puVar2;
    if (puVar6 != puVar2) {
      do {
        plVar3 = (long *)puVar6[2];
        pcVar1 = (char *)(plVar3[2] + 0x78);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          (**(code **)(*plVar3 + 8))();
        }
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar2 != puVar6);
      puVar7 = (undefined8 *)*puVar2;
      if (puVar2 != (undefined8 *)*puVar2) {
        do {
          puVar4 = (undefined8 *)*puVar7;
          operator_delete(puVar7,0x18);
          puVar7 = puVar4;
        } while (puVar6 != puVar4);
      }
    }
    puVar2[2] = 0;
    *puVar2 = puVar2;
    puVar2[1] = puVar2;
    iVar5 = tvg::RenderMethod::unref();
    if ((iVar5 == 0) && ((long *)puVar2[3] != (long *)0x0)) {
      (**(code **)(*(long *)puVar2[3] + 8))();
    }
    puVar6 = (undefined8 *)*puVar2;
    while (puVar2 != puVar6) {
      puVar7 = (undefined8 *)*puVar6;
      operator_delete(puVar6,0x18);
      puVar6 = puVar7;
    }
    operator_delete(puVar2,0x38);
    return;
  }
  return;
}



/* tvg::Canvas::~Canvas() */

void __thiscall tvg::Canvas::~Canvas(Canvas *this)

{
  ~Canvas(this);
  operator_delete(this,0x10);
  return;
}



/* tvg::Canvas::update(tvg::Paint*) */

undefined8 __thiscall tvg::Canvas::update(Canvas *this,Paint *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  long local_30;
  
  plVar1 = *(long **)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)*plVar1;
  if ((plVar3 == plVar1) || ((char)plVar1[6] == '\x02')) {
    uVar2 = 2;
  }
  else {
    local_68 = (void *)0x0;
    local_38 = 0x3f800000;
    lVar4 = plVar1[3];
    cVar5 = -((char)plVar1[6] == '\x03');
    local_58 = ZEXT416(_LC0);
    local_60 = 0;
    local_48 = ZEXT416(_LC0);
    if (param_1 == (Paint *)0x0) {
      while( true ) {
        tvg::Paint::Impl::update
                  (*(undefined8 *)(plVar3[2] + 0x10),lVar4,local_58,&local_68,0xff,cVar5,0);
        plVar3 = (long *)*plVar3;
        if (plVar1 == plVar3) break;
        lVar4 = plVar1[3];
      }
    }
    else {
      tvg::Paint::Impl::update
                (*(undefined8 *)(param_1 + 0x10),lVar4,local_58,&local_68,0xff,cVar5,0);
    }
    *(undefined1 *)(plVar1 + 6) = 1;
    free(local_68);
    uVar2 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* tvg::Canvas::push(std::unique_ptr<tvg::Paint, std::default_delete<tvg::Paint> >) */

undefined8 __thiscall tvg::Canvas::push(Canvas *this,long *param_2)

{
  long *plVar1;
  long *plVar2;
  _List_node_base *p_Var3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  void *local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined4 local_28;
  long local_20;
  
  plVar1 = *(long **)(this + 8);
  plVar2 = (long *)*param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = 0;
  if ((char)plVar1[6] == '\x02') {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  else {
    if (plVar2 == (long *)0x0) {
      uVar4 = 4;
      goto LAB_00100698;
    }
    *(char *)(plVar2[2] + 0x78) = *(char *)(plVar2[2] + 0x78) + '\x01';
    p_Var3 = (_List_node_base *)operator_new(0x18);
    *(long **)(p_Var3 + 0x10) = plVar2;
    std::__detail::_List_node_base::_M_hook(p_Var3);
    plVar1[2] = plVar1[2] + 1;
    if ((plVar1 != (long *)*plVar1) && ((char)plVar1[6] != '\x02')) {
      local_58 = (void *)0x0;
      local_28 = 0x3f800000;
      local_48 = ZEXT416(_LC0);
      local_50 = 0;
      local_38 = ZEXT416(_LC0);
      tvg::Paint::Impl::update(plVar2[2],plVar1[3],local_48,&local_58,0xff,0xff,0);
      *(undefined1 *)(plVar1 + 6) = 1;
      free(local_58);
      uVar4 = 0;
      goto LAB_00100698;
    }
  }
  uVar4 = 2;
LAB_00100698:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg::Canvas::Canvas(tvg::RenderMethod*) */

void __thiscall tvg::Canvas::Canvas(Canvas *this,RenderMethod *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__Canvas_00100790;
  pvVar3 = operator_new(0x38);
  *(RenderMethod **)((long)pvVar3 + 0x18) = param_1;
  *(undefined8 *)((long)pvVar3 + 0x10) = 0;
  *(void **)pvVar3 = pvVar3;
  *(void **)((long)pvVar3 + 8) = pvVar3;
  uVar2 = _UNK_001007e8;
  uVar1 = __LC2;
  *(undefined1 *)((long)pvVar3 + 0x30) = 0;
  *(undefined8 *)((long)pvVar3 + 0x20) = uVar1;
  *(undefined8 *)((long)pvVar3 + 0x28) = uVar2;
  tvg::RenderMethod::ref();
  *(void **)(this + 8) = pvVar3;
  return;
}



/* tvg::Canvas::reserve(unsigned int) */

undefined8 tvg::Canvas::reserve(uint param_1)

{
  return 5;
}



/* tvg::Canvas::paints[abi:cxx11]() */

undefined8 __thiscall tvg::Canvas::paints_abi_cxx11_(Canvas *this)

{
  return *(undefined8 *)(this + 8);
}


