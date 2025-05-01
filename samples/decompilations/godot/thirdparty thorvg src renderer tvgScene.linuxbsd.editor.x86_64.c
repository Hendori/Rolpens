
/* tvg::Scene::type() const */

undefined8 tvg::Scene::type(void)

{
  return 2;
}



/* tvg::Scene::Impl::resetEffects() */

undefined8 __thiscall tvg::Scene::Impl::resetEffects(Impl *this)

{
  long *plVar1;
  ulong *puVar2;
  long *__ptr;
  
  puVar2 = *(ulong **)(this + 0x38);
  if (puVar2 != (ulong *)0x0) {
    plVar1 = (long *)*puVar2;
    __ptr = plVar1;
    if (plVar1 < plVar1 + (uint)puVar2[1]) {
      do {
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 8))();
          puVar2 = *(ulong **)(this + 0x38);
        }
        plVar1 = plVar1 + 1;
        __ptr = (long *)*puVar2;
      } while (plVar1 < (long *)*puVar2 + (uint)puVar2[1]);
    }
    free(__ptr);
    operator_delete(puVar2,0x10);
    *(undefined8 *)(this + 0x38) = 0;
  }
  return 0;
}



/* tvg::Scene::~Scene() */

void __thiscall tvg::Scene::~Scene(Scene *this)

{
  char *pcVar1;
  Impl *this_00;
  Scene *this_01;
  Impl *pIVar2;
  Impl *pIVar3;
  long *plVar4;
  
  this_00 = *(Impl **)(this + 0x18);
  *(undefined ***)this = &PTR__Scene_001010a8;
  if (this_00 == (Impl *)0x0) goto LAB_0010015a;
  Impl::resetEffects(this_00);
  pIVar3 = *(Impl **)this_00;
  if (pIVar3 == this_00) {
    plVar4 = *(long **)(*(long *)(*(long *)(this_00 + 0x20) + 0x10) + 0x18);
    if (plVar4 != (long *)0x0) goto LAB_00100122;
  }
  else {
    do {
      this_01 = *(Scene **)(pIVar3 + 0x10);
      pcVar1 = (char *)(*(long *)(this_01 + 0x10) + 0x78);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
        if (*(code **)(*(long *)this_01 + 8) == ~Scene) {
          ~Scene(this_01);
          operator_delete(this_01,0x20);
        }
        else {
          (**(code **)(*(long *)this_01 + 8))();
        }
      }
      pIVar3 = *(Impl **)pIVar3;
    } while (this_00 != pIVar3);
    plVar4 = *(long **)(*(long *)(*(long *)(this_00 + 0x20) + 0x10) + 0x18);
    if (plVar4 != (long *)0x0) {
LAB_00100122:
      (**(code **)(*plVar4 + 0x40))(plVar4,*(undefined8 *)(this_00 + 0x18));
    }
    pIVar3 = *(Impl **)this_00;
    while (this_00 != pIVar3) {
      pIVar2 = *(Impl **)pIVar3;
      operator_delete(pIVar3,0x18);
      pIVar3 = pIVar2;
    }
  }
  operator_delete(this_00,0x48);
LAB_0010015a:
  tvg::Paint::~Paint((Paint *)this);
  return;
}



/* tvg::Scene::~Scene() */

void __thiscall tvg::Scene::~Scene(Scene *this)

{
  ~Scene(this);
  operator_delete(this,0x20);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg::Scene::Scene() */

void __thiscall tvg::Scene::Scene(Scene *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  tvg::Paint::Paint((Paint *)this);
  *(undefined ***)this = &PTR__Scene_001010a8;
  pvVar3 = operator_new(0x48);
  *(undefined8 *)((long)pvVar3 + 0x10) = 0;
  *(undefined8 *)((long)pvVar3 + 0x18) = 0;
  *(void **)pvVar3 = pvVar3;
  *(void **)((long)pvVar3 + 8) = pvVar3;
  uVar2 = _UNK_001010c8;
  uVar1 = __LC0;
  *(Scene **)((long)pvVar3 + 0x20) = this;
  *(undefined8 *)((long)pvVar3 + 0x38) = 0;
  *(undefined1 *)((long)pvVar3 + 0x40) = 0;
  *(void **)(this + 0x18) = pvVar3;
  *(undefined8 *)((long)pvVar3 + 0x28) = uVar1;
  *(undefined8 *)((long)pvVar3 + 0x30) = uVar2;
  return;
}



/* tvg::Scene::gen() */

Scene * __thiscall tvg::Scene::gen(Scene *this)

{
  Scene *this_00;
  
  this_00 = (Scene *)operator_new(0x20);
  Scene(this_00);
  *(Scene **)this = this_00;
  return this;
}



/* tvg::Scene::identifier() */

undefined8 tvg::Scene::identifier(void)

{
  return 2;
}



/* tvg::Scene::push(std::unique_ptr<tvg::Paint, std::default_delete<tvg::Paint> >) */

undefined8 __thiscall tvg::Scene::push(Scene *this,long *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  _List_node_base *p_Var5;
  
  lVar3 = *param_2;
  *param_2 = 0;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    pcVar1 = (char *)(lVar4 + 0x78);
    *pcVar1 = *pcVar1 + '\x01';
    pbVar2 = (byte *)(lVar4 + 0x75);
    *pbVar2 = *pbVar2 | 0x10;
    lVar4 = *(long *)(this + 0x18);
    p_Var5 = (_List_node_base *)operator_new(0x18);
    *(long *)(p_Var5 + 0x10) = lVar3;
    std::__detail::_List_node_base::_M_hook(p_Var5);
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    return 0;
  }
  return 4;
}



/* tvg::Scene::reserve(unsigned int) */

undefined8 tvg::Scene::reserve(uint param_1)

{
  return 5;
}



/* tvg::Scene::clear(bool) */

undefined8 __thiscall tvg::Scene::clear(Scene *this,bool param_1)

{
  char *pcVar1;
  long *plVar2;
  Scene *this_00;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = *(long **)(this + 0x18);
  plVar4 = (long *)*plVar2;
  if (plVar4 != plVar2) {
    do {
      while( true ) {
        this_00 = (Scene *)plVar4[2];
        pcVar1 = (char *)(*(long *)(this_00 + 0x10) + 0x78);
        *pcVar1 = *pcVar1 + -1;
        if ((*pcVar1 == '\0') && (param_1)) break;
LAB_00100300:
        plVar4 = (long *)*plVar4;
        if (plVar2 == plVar4) goto LAB_00100345;
      }
      if (*(code **)(*(long *)this_00 + 8) != ~Scene) {
        (**(code **)(*(long *)this_00 + 8))();
        goto LAB_00100300;
      }
      ~Scene(this_00);
      operator_delete(this_00,0x20);
      plVar4 = (long *)*plVar4;
    } while (plVar2 != plVar4);
LAB_00100345:
    plVar5 = (long *)*plVar2;
    if (plVar2 != (long *)*plVar2) {
      do {
        plVar3 = (long *)*plVar5;
        operator_delete(plVar5,0x18);
        plVar5 = plVar3;
      } while (plVar4 != plVar3);
    }
  }
  plVar2[2] = 0;
  *plVar2 = (long)plVar2;
  plVar2[1] = (long)plVar2;
  return 0;
}



/* tvg::Scene::paints[abi:cxx11]() */

undefined8 __thiscall tvg::Scene::paints_abi_cxx11_(Scene *this)

{
  return *(undefined8 *)(this + 0x18);
}



/* WARNING: Removing unreachable block (ram,0x001009f0) */
/* WARNING: Removing unreachable block (ram,0x00100c48) */
/* WARNING: Removing unreachable block (ram,0x00100d28) */
/* WARNING: Removing unreachable block (ram,0x00100ca8) */
/* WARNING: Removing unreachable block (ram,0x00100d18) */
/* WARNING: Removing unreachable block (ram,0x001008d9) */
/* WARNING: Removing unreachable block (ram,0x00100cc8) */
/* WARNING: Removing unreachable block (ram,0x001008f0) */
/* WARNING: Removing unreachable block (ram,0x00100cf8) */
/* WARNING: Removing unreachable block (ram,0x00100b98) */
/* WARNING: Removing unreachable block (ram,0x00100c88) */
/* WARNING: Removing unreachable block (ram,0x00100d38) */
/* WARNING: Removing unreachable block (ram,0x00100c98) */
/* WARNING: Removing unreachable block (ram,0x00100529) */
/* WARNING: Removing unreachable block (ram,0x00100c68) */
/* WARNING: Removing unreachable block (ram,0x00100540) */
/* WARNING: Removing unreachable block (ram,0x00100d08) */
/* WARNING: Removing unreachable block (ram,0x00100bae) */
/* WARNING: Removing unreachable block (ram,0x00100bbf) */
/* WARNING: Removing unreachable block (ram,0x00100ce8) */
/* WARNING: Removing unreachable block (ram,0x00100bd0) */
/* WARNING: Removing unreachable block (ram,0x00100b80) */
/* WARNING: Removing unreachable block (ram,0x00100a80) */
/* WARNING: Removing unreachable block (ram,0x00100a96) */
/* WARNING: Removing unreachable block (ram,0x00100cb8) */
/* WARNING: Removing unreachable block (ram,0x00100aa7) */
/* WARNING: Removing unreachable block (ram,0x00100ab8) */
/* WARNING: Removing unreachable block (ram,0x00100a38) */
/* WARNING: Removing unreachable block (ram,0x00100a4e) */
/* WARNING: Removing unreachable block (ram,0x00100c58) */
/* WARNING: Removing unreachable block (ram,0x00100a5f) */
/* WARNING: Removing unreachable block (ram,0x00100a70) */
/* WARNING: Removing unreachable block (ram,0x00100c00) */
/* WARNING: Removing unreachable block (ram,0x00100c1a) */
/* WARNING: Removing unreachable block (ram,0x00100c1d) */
/* WARNING: Removing unreachable block (ram,0x00100d51) */
/* WARNING: Removing unreachable block (ram,0x001009c0) */
/* WARNING: Removing unreachable block (ram,0x00100ad0) */
/* WARNING: Removing unreachable block (ram,0x00100ae6) */
/* WARNING: Removing unreachable block (ram,0x00100af7) */
/* WARNING: Removing unreachable block (ram,0x00100b08) */
/* WARNING: Removing unreachable block (ram,0x00100a0e) */
/* WARNING: Removing unreachable block (ram,0x00100b40) */
/* WARNING: Removing unreachable block (ram,0x00100b51) */
/* WARNING: Removing unreachable block (ram,0x00100b54) */
/* WARNING: Removing unreachable block (ram,0x00100b6a) */
/* WARNING: Removing unreachable block (ram,0x00100b6d) */
/* WARNING: Removing unreachable block (ram,0x00100c28) */
/* WARNING: Removing unreachable block (ram,0x00100a27) */
/* WARNING: Removing unreachable block (ram,0x00100777) */
/* WARNING: Heritage AFTER dead removal. Example location: z0xffffffffffffff60 : 0x001006ed */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* tvg::Scene::push(tvg::SceneEffect, ...) */

undefined8
tvg::Scene::push(double param_1,double param_2,double param_3,long param_4,char param_5,int param_6,
                int param_7,int param_8,undefined1 param_9,int param_10,undefined1 param_11,
                undefined1 param_12,undefined1 param_13,undefined1 param_14,...)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  char in_AL;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  void *__ptr;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  float fVar12;
  double dVar13;
  double local_98;
  double local_88;
  double local_78;
  
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == '\0') {
    uVar9 = Impl::resetEffects(*(Impl **)(param_4 + 0x18));
  }
  else {
    if (*(long *)(*(Impl **)(param_4 + 0x18) + 0x38) == 0) {
      puVar8 = (undefined8 *)operator_new(0x10);
      lVar3 = *(long *)(param_4 + 0x18);
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined8 **)(lVar3 + 0x38) = puVar8;
    }
    uVar4 = (undefined1)param_6;
    uVar10 = (undefined1)param_7;
    uVar5 = (undefined1)param_8;
    uVar6 = (undefined1)param_10;
    switch(param_5) {
    default:
      uVar9 = 1;
      goto LAB_0010046d;
    case '\x01':
      puVar8 = (undefined8 *)operator_new(0x30);
      puVar8[1] = 0;
      *(undefined1 *)((long)puVar8 + 0x21) = 0;
      *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
      *puVar8 = &PTR__RenderEffectGaussianBlur_00101008;
      fVar12 = (float)local_98;
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      *(float *)((long)puVar8 + 0x24) = fVar12;
      if (2 < param_6) {
        uVar4 = 2;
      }
      *(undefined1 *)(puVar8 + 5) = uVar4;
      if (0 < param_7) {
        uVar10 = 1;
      }
      *(undefined1 *)((long)puVar8 + 0x29) = uVar10;
      *(undefined1 *)(puVar8 + 4) = 1;
      if (100 < param_8) {
        uVar5 = 100;
      }
      *(undefined1 *)((long)puVar8 + 0x2a) = uVar5;
      break;
    case '\x02':
      puVar8 = (undefined8 *)operator_new(0x38);
      puVar8[1] = 0;
      *(undefined1 *)((long)puVar8 + 0x21) = 0;
      *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
      *puVar8 = &PTR__RenderEffectDropShadow_00101028;
      *(undefined1 *)((long)puVar8 + 0x22) = uVar4;
      *(undefined1 *)((long)puVar8 + 0x23) = uVar10;
      *(undefined1 *)((long)puVar8 + 0x24) = uVar5;
      *(undefined1 *)((long)puVar8 + 0x25) = param_9;
      *(float *)(puVar8 + 5) = (float)local_98;
      *(float *)((long)puVar8 + 0x2c) = (float)local_88;
      fVar12 = (float)local_78;
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      *(float *)(puVar8 + 6) = fVar12;
      *(undefined1 *)(puVar8 + 4) = 2;
      if (100 < param_10) {
        uVar6 = 100;
      }
      *(undefined1 *)((long)puVar8 + 0x34) = uVar6;
      break;
    case '\x03':
      puVar8 = (undefined8 *)operator_new(0x28);
      puVar8[1] = 0;
      *(undefined1 *)((long)puVar8 + 0x21) = 0;
      *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
      *puVar8 = &PTR__RenderEffectFill_00101048;
      *(undefined1 *)((long)puVar8 + 0x22) = uVar4;
      *(undefined1 *)((long)puVar8 + 0x23) = uVar10;
      *(undefined1 *)((long)puVar8 + 0x24) = uVar5;
      *(undefined1 *)(puVar8 + 4) = 3;
      *(undefined1 *)((long)puVar8 + 0x25) = param_9;
      break;
    case '\x04':
      puVar8 = (undefined8 *)operator_new(0x30);
      puVar8[1] = 0;
      *(undefined1 *)((long)puVar8 + 0x21) = 0;
      *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
      *puVar8 = &PTR__RenderEffectTint_00101068;
      *(undefined1 *)((long)puVar8 + 0x22) = uVar4;
      *(undefined1 *)((long)puVar8 + 0x23) = uVar10;
      *(undefined1 *)((long)puVar8 + 0x24) = uVar5;
      *(undefined1 *)((long)puVar8 + 0x25) = param_9;
      *(undefined1 *)((long)puVar8 + 0x26) = uVar6;
      *(undefined1 *)((long)puVar8 + 0x27) = param_11;
      dVar13 = _LC2 * local_98;
      *(undefined1 *)(puVar8 + 4) = 4;
      *(char *)(puVar8 + 5) = (char)(int)dVar13;
      break;
    case '\x05':
      puVar8 = (undefined8 *)operator_new(0x30);
      puVar8[1] = 0;
      *(undefined1 *)((long)puVar8 + 0x21) = 0;
      *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
      *puVar8 = &PTR__RenderEffectTritone_00101088;
      *(undefined1 *)((long)puVar8 + 0x22) = uVar4;
      *(undefined1 *)((long)puVar8 + 0x23) = uVar10;
      *(undefined1 *)((long)puVar8 + 0x24) = uVar5;
      *(undefined1 *)((long)puVar8 + 0x25) = param_9;
      *(undefined1 *)((long)puVar8 + 0x26) = uVar6;
      *(undefined1 *)((long)puVar8 + 0x27) = param_11;
      *(undefined1 *)(puVar8 + 4) = 5;
      *(undefined1 *)(puVar8 + 5) = param_12;
      *(undefined1 *)((long)puVar8 + 0x29) = param_13;
      *(undefined1 *)((long)puVar8 + 0x2a) = param_14;
    }
    puVar2 = *(undefined8 **)(*(long *)(param_4 + 0x18) + 0x38);
    uVar11 = *(uint *)(puVar2 + 1);
    __ptr = (void *)*puVar2;
    uVar7 = uVar11 + 1;
    if (*(uint *)((long)puVar2 + 0xc) < uVar7) {
      uVar11 = (uVar11 + 2 >> 1) + uVar11;
      *(uint *)((long)puVar2 + 0xc) = uVar11;
      __ptr = realloc(__ptr,(ulong)uVar11 << 3);
      uVar11 = *(uint *)(puVar2 + 1);
      *puVar2 = __ptr;
      uVar7 = uVar11 + 1;
    }
    *(uint *)(puVar2 + 1) = uVar7;
    uVar9 = 0;
    *(undefined8 **)((long)__ptr + (ulong)uVar11 * 8) = puVar8;
  }
LAB_0010046d:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::RenderEffectTritone::~RenderEffectTritone() */

void __thiscall tvg::RenderEffectTritone::~RenderEffectTritone(RenderEffectTritone *this)

{
  free(*(void **)(this + 8));
  return;
}



/* tvg::RenderEffectTritone::~RenderEffectTritone() */

void __thiscall tvg::RenderEffectTritone::~RenderEffectTritone(RenderEffectTritone *this)

{
  free(*(void **)(this + 8));
  operator_delete(this,0x30);
  return;
}



/* tvg::RenderEffectTint::~RenderEffectTint() */

void __thiscall tvg::RenderEffectTint::~RenderEffectTint(RenderEffectTint *this)

{
  free(*(void **)(this + 8));
  return;
}



/* tvg::RenderEffectTint::~RenderEffectTint() */

void __thiscall tvg::RenderEffectTint::~RenderEffectTint(RenderEffectTint *this)

{
  free(*(void **)(this + 8));
  operator_delete(this,0x30);
  return;
}



/* tvg::RenderEffectFill::~RenderEffectFill() */

void __thiscall tvg::RenderEffectFill::~RenderEffectFill(RenderEffectFill *this)

{
  free(*(void **)(this + 8));
  return;
}



/* tvg::RenderEffectFill::~RenderEffectFill() */

void __thiscall tvg::RenderEffectFill::~RenderEffectFill(RenderEffectFill *this)

{
  free(*(void **)(this + 8));
  operator_delete(this,0x28);
  return;
}



/* tvg::RenderEffectDropShadow::~RenderEffectDropShadow() */

void __thiscall tvg::RenderEffectDropShadow::~RenderEffectDropShadow(RenderEffectDropShadow *this)

{
  free(*(void **)(this + 8));
  return;
}



/* tvg::RenderEffectDropShadow::~RenderEffectDropShadow() */

void __thiscall tvg::RenderEffectDropShadow::~RenderEffectDropShadow(RenderEffectDropShadow *this)

{
  free(*(void **)(this + 8));
  operator_delete(this,0x38);
  return;
}



/* tvg::RenderEffectGaussianBlur::~RenderEffectGaussianBlur() */

void __thiscall
tvg::RenderEffectGaussianBlur::~RenderEffectGaussianBlur(RenderEffectGaussianBlur *this)

{
  free(*(void **)(this + 8));
  return;
}



/* tvg::RenderEffectGaussianBlur::~RenderEffectGaussianBlur() */

void __thiscall
tvg::RenderEffectGaussianBlur::~RenderEffectGaussianBlur(RenderEffectGaussianBlur *this)

{
  free(*(void **)(this + 8));
  operator_delete(this,0x30);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* tvg::RenderEffectGaussianBlur::~RenderEffectGaussianBlur() */

void __thiscall
tvg::RenderEffectGaussianBlur::~RenderEffectGaussianBlur(RenderEffectGaussianBlur *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* tvg::RenderEffectDropShadow::~RenderEffectDropShadow() */

void __thiscall tvg::RenderEffectDropShadow::~RenderEffectDropShadow(RenderEffectDropShadow *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* tvg::RenderEffectFill::~RenderEffectFill() */

void __thiscall tvg::RenderEffectFill::~RenderEffectFill(RenderEffectFill *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* tvg::RenderEffectTint::~RenderEffectTint() */

void __thiscall tvg::RenderEffectTint::~RenderEffectTint(RenderEffectTint *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* tvg::RenderEffectTritone::~RenderEffectTritone() */

void __thiscall tvg::RenderEffectTritone::~RenderEffectTritone(RenderEffectTritone *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


