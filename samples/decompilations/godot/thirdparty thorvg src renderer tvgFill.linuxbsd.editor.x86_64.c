
/* tvg::RadialGradient::type() const */

undefined8 tvg::RadialGradient::type(void)

{
  return 0xb;
}



/* tvg::LinearGradient::type() const */

undefined8 tvg::LinearGradient::type(void)

{
  return 10;
}



/* tvg::RadialGradient::Impl::radial(float, float, float, float, float, float) */

undefined8 __thiscall
tvg::RadialGradient::Impl::radial
          (Impl *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((0.0 <= param_3) && (0.0 <= param_6)) {
    uVar1 = 0;
    *(ulong *)(this + 0x10) = CONCAT44(param_6,param_3);
    *(float *)this = param_1;
    *(float *)(this + 4) = param_2;
    *(float *)(this + 8) = param_4;
    *(float *)(this + 0xc) = param_5;
  }
  return uVar1;
}



/* tvg::Fill::Fill() */

void __thiscall tvg::Fill::Fill(Fill *this)

{
  undefined1 (*pauVar1) [16];
  
  *(undefined **)this = &DAT_00100910;
  pauVar1 = (undefined1 (*) [16])operator_new(0x20);
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0;
  *(undefined1 (**) [16])(this + 8) = pauVar1;
  *pauVar1 = (undefined1  [16])0x0;
  return;
}



/* tvg::Fill::~Fill() */

void __thiscall tvg::Fill::~Fill(Fill *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined **)this = &DAT_00100910;
  if (puVar1 != (undefined8 *)0x0) {
    if ((long *)puVar1[3] != (long *)0x0) {
      (**(code **)(*(long *)puVar1[3] + 8))();
    }
    free((void *)*puVar1);
    free((void *)puVar1[1]);
    operator_delete(puVar1,0x20);
    return;
  }
  return;
}



/* tvg::RadialGradient::~RadialGradient() */

void __thiscall tvg::RadialGradient::~RadialGradient(RadialGradient *this)

{
  *(undefined ***)this = &PTR__RadialGradient_00100960;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10),0x18);
  }
  Fill::~Fill((Fill *)this);
  return;
}



/* tvg::LinearGradient::~LinearGradient() */

void __thiscall tvg::LinearGradient::~LinearGradient(LinearGradient *this)

{
  *(undefined ***)this = &PTR__LinearGradient_001009b0;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10),0x10);
  }
  Fill::~Fill((Fill *)this);
  return;
}



/* tvg::LinearGradient::~LinearGradient() */

void __thiscall tvg::LinearGradient::~LinearGradient(LinearGradient *this)

{
  *(undefined ***)this = &PTR__LinearGradient_001009b0;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10),0x10);
  }
  Fill::~Fill((Fill *)this);
  operator_delete(this,0x18);
  return;
}



/* tvg::RadialGradient::~RadialGradient() */

void __thiscall tvg::RadialGradient::~RadialGradient(RadialGradient *this)

{
  *(undefined ***)this = &PTR__RadialGradient_00100960;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10),0x18);
  }
  Fill::~Fill((Fill *)this);
  operator_delete(this,0x18);
  return;
}



/* tvg::Fill::~Fill() */

void __thiscall tvg::Fill::~Fill(Fill *this)

{
  ~Fill(this);
  operator_delete(this,0x10);
  return;
}



/* tvg::Fill::colorStops(tvg::Fill::ColorStop const*, unsigned int) */

undefined8 __thiscall tvg::Fill::colorStops(Fill *this,ColorStop *param_1,uint param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  uVar1 = 1;
  if ((param_1 == (ColorStop *)0x0) == (param_2 == 0)) {
    puVar3 = *(undefined8 **)(this + 8);
    pvVar2 = (void *)*puVar3;
    if (param_2 == 0) {
      if (pvVar2 != (void *)0x0) {
        free(pvVar2);
        puVar3 = *(undefined8 **)(this + 8);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 2) = 0;
        return 0;
      }
    }
    else {
      if (*(uint *)(puVar3 + 2) != param_2) {
        pvVar2 = realloc(pvVar2,(ulong)param_2 << 3);
        *puVar3 = pvVar2;
        puVar3 = *(undefined8 **)(this + 8);
      }
      *(uint *)(puVar3 + 2) = param_2;
      memcpy((void *)*puVar3,param_1,(ulong)param_2 << 3);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* tvg::Fill::colorStops(tvg::Fill::ColorStop const**) const */

undefined4 __thiscall tvg::Fill::colorStops(Fill *this,ColorStop **param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  if (param_1 != (ColorStop **)0x0) {
    *param_1 = (ColorStop *)*puVar1;
  }
  return *(undefined4 *)(puVar1 + 2);
}



/* tvg::Fill::spread(tvg::FillSpread) */

undefined8 __thiscall tvg::Fill::spread(Fill *this,undefined4 param_2)

{
  *(undefined4 *)(*(long *)(this + 8) + 0x14) = param_2;
  return 0;
}



/* tvg::Fill::spread() const */

undefined4 __thiscall tvg::Fill::spread(Fill *this)

{
  return *(undefined4 *)(*(long *)(this + 8) + 0x14);
}



/* tvg::Fill::transform(tvg::Matrix const&) */

undefined8 __thiscall tvg::Fill::transform(Fill *this,Matrix *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(this + 8);
  puVar3 = *(undefined8 **)(lVar1 + 8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)malloc(0x24);
    *(undefined8 **)(lVar1 + 8) = puVar3;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar3 = *(undefined8 *)param_1;
  puVar3[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[3] = uVar2;
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  return 0;
}



/* tvg::Fill::transform() const */

void tvg::Fill::transform(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  
  uVar6 = _LC1;
  puVar2 = *(undefined8 **)(*(long *)(in_RSI + 8) + 8);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    uVar5 = puVar2[3];
    uVar1 = *(undefined4 *)(puVar2 + 4);
    *(undefined8 *)*in_RDI = *puVar2;
    *(undefined8 *)(*in_RDI + 8) = uVar3;
    *(undefined4 *)in_RDI[2] = uVar1;
    *(undefined8 *)in_RDI[1] = uVar4;
    *(undefined8 *)(in_RDI[1] + 8) = uVar5;
    return;
  }
  *(undefined4 *)in_RDI[2] = 0x3f800000;
  *in_RDI = ZEXT416(uVar6);
  in_RDI[1] = ZEXT416(uVar6);
  return;
}



/* tvg::Fill::duplicate() const */

long __thiscall tvg::Fill::duplicate(Fill *this)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  size_t __size;
  
  puVar3 = *(undefined8 **)(this + 8);
  lVar6 = (**(code **)(*(long *)puVar3[3] + 0x10))();
  if (lVar6 != 0) {
    puVar8 = *(undefined8 **)(lVar6 + 8);
    uVar1 = *(uint *)(puVar3 + 2);
    uVar2 = *(undefined4 *)((long)puVar3 + 0x14);
    *(uint *)(puVar8 + 2) = uVar1;
    __size = (ulong)uVar1 << 3;
    *(undefined4 *)((long)puVar8 + 0x14) = uVar2;
    pvVar7 = malloc(__size);
    *puVar8 = pvVar7;
    if (uVar1 == 0) {
      lVar4 = puVar3[1];
    }
    else {
      __memcpy_chk(pvVar7,*puVar3,__size,__size);
      lVar4 = puVar3[1];
    }
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar6 + 8);
      puVar8 = (undefined8 *)malloc(0x24);
      *(undefined8 **)(lVar4 + 8) = puVar8;
      puVar3 = (undefined8 *)puVar3[1];
      uVar5 = puVar3[1];
      *puVar8 = *puVar3;
      puVar8[1] = uVar5;
      uVar5 = puVar3[3];
      puVar8[2] = puVar3[2];
      puVar8[3] = uVar5;
      *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar3 + 4);
    }
  }
  return lVar6;
}



/* tvg::Fill::identifier() const */

undefined1 __thiscall tvg::Fill::identifier(Fill *this)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x10))();
  return uVar1;
}



/* tvg::RadialGradient::RadialGradient() */

void __thiscall tvg::RadialGradient::RadialGradient(RadialGradient *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  
  *(undefined **)this = &DAT_00100910;
  pauVar3 = (undefined1 (*) [16])operator_new(0x20);
  *(undefined1 (**) [16])(this + 8) = pauVar3;
  *pauVar3 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar3[1] = 0;
  *(undefined8 *)(pauVar3[1] + 8) = 0;
  *(undefined ***)this = &PTR__RadialGradient_00100960;
  pauVar3 = (undefined1 (*) [16])operator_new(0x18);
  lVar1 = *(long *)(this + 8);
  *(undefined1 (**) [16])(this + 0x10) = pauVar3;
  *(undefined8 *)pauVar3[1] = 0;
  *pauVar3 = (undefined1  [16])0x0;
  puVar4 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(this + 0x10);
  *puVar4 = &PTR__FillDup_00100938;
  puVar4[1] = uVar2;
  *(undefined8 **)(lVar1 + 0x18) = puVar4;
  return;
}



/* tvg::RadialGradient::Impl::duplicate() */

RadialGradient * __thiscall tvg::RadialGradient::Impl::duplicate(Impl *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RadialGradient *this_00;
  
  this_00 = (RadialGradient *)operator_new(0x18);
  RadialGradient(this_00);
  puVar1 = *(undefined8 **)(this_00 + 0x10);
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x10);
  *puVar1 = *(undefined8 *)this;
  puVar1[1] = uVar3;
  puVar1[2] = uVar2;
  return this_00;
}



/* tvg::RadialGradient::radial(float, float, float) */

bool __thiscall
tvg::RadialGradient::radial(RadialGradient *this,float param_1,float param_2,float param_3)

{
  float *pfVar1;
  
  if (param_3 >= 0.0) {
    pfVar1 = *(float **)(this + 0x10);
    pfVar1[4] = param_3;
    *pfVar1 = param_1;
    pfVar1[1] = param_2;
    pfVar1[2] = param_1;
    pfVar1[3] = param_2;
    pfVar1[5] = 0.0;
  }
  return param_3 < 0.0;
}



/* tvg::RadialGradient::radial(float*, float*, float*) const */

undefined8 __thiscall
tvg::RadialGradient::radial(RadialGradient *this,float *param_1,float *param_2,float *param_3)

{
  if (param_1 != (float *)0x0) {
    *param_1 = **(float **)(this + 0x10);
  }
  if (param_2 != (float *)0x0) {
    *param_2 = *(float *)(*(long *)(this + 0x10) + 4);
  }
  if (param_3 != (float *)0x0) {
    *param_3 = *(float *)(*(long *)(this + 0x10) + 0x10);
  }
  return 0;
}



/* tvg::RadialGradient::gen() */

RadialGradient * __thiscall tvg::RadialGradient::gen(RadialGradient *this)

{
  RadialGradient *this_00;
  
  this_00 = (RadialGradient *)operator_new(0x18);
  RadialGradient(this_00);
  *(RadialGradient **)this = this_00;
  return this;
}



/* tvg::RadialGradient::identifier() */

undefined8 tvg::RadialGradient::identifier(void)

{
  return 0xb;
}



/* tvg::LinearGradient::LinearGradient() */

void __thiscall tvg::LinearGradient::LinearGradient(LinearGradient *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  
  *(undefined **)this = &DAT_00100910;
  pauVar3 = (undefined1 (*) [16])operator_new(0x20);
  *(undefined1 (**) [16])(this + 8) = pauVar3;
  *pauVar3 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar3[1] = 0;
  *(undefined8 *)(pauVar3[1] + 8) = 0;
  *(undefined ***)this = &PTR__LinearGradient_001009b0;
  pauVar3 = (undefined1 (*) [16])operator_new(0x10);
  lVar1 = *(long *)(this + 8);
  *(undefined1 (**) [16])(this + 0x10) = pauVar3;
  *pauVar3 = (undefined1  [16])0x0;
  puVar4 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(this + 0x10);
  *puVar4 = &PTR__FillDup_00100988;
  puVar4[1] = uVar2;
  *(undefined8 **)(lVar1 + 0x18) = puVar4;
  return;
}



/* tvg::LinearGradient::Impl::duplicate() */

LinearGradient * __thiscall tvg::LinearGradient::Impl::duplicate(Impl *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  LinearGradient *this_00;
  
  this_00 = (LinearGradient *)operator_new(0x18);
  LinearGradient(this_00);
  puVar1 = *(undefined8 **)(this_00 + 0x10);
  uVar2 = *(undefined8 *)(this + 8);
  *puVar1 = *(undefined8 *)this;
  puVar1[1] = uVar2;
  return this_00;
}



/* tvg::LinearGradient::linear(float, float, float, float) */

undefined8 __thiscall
tvg::LinearGradient::linear
          (LinearGradient *this,float param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(this + 0x10);
  *pfVar1 = param_1;
  pfVar1[1] = param_2;
  pfVar1[2] = param_3;
  pfVar1[3] = param_4;
  return 0;
}



/* tvg::LinearGradient::linear(float*, float*, float*, float*) const */

undefined8 __thiscall
tvg::LinearGradient::linear
          (LinearGradient *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  if (param_1 != (float *)0x0) {
    *param_1 = **(float **)(this + 0x10);
  }
  if (param_3 != (float *)0x0) {
    *param_3 = *(float *)(*(long *)(this + 0x10) + 8);
  }
  if (param_2 != (float *)0x0) {
    *param_2 = *(float *)(*(long *)(this + 0x10) + 4);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = *(float *)(*(long *)(this + 0x10) + 0xc);
  }
  return 0;
}



/* tvg::LinearGradient::gen() */

LinearGradient * __thiscall tvg::LinearGradient::gen(LinearGradient *this)

{
  LinearGradient *this_00;
  
  this_00 = (LinearGradient *)operator_new(0x18);
  LinearGradient(this_00);
  *(LinearGradient **)this = this_00;
  return this;
}



/* tvg::LinearGradient::identifier() */

undefined8 tvg::LinearGradient::identifier(void)

{
  return 10;
}



/* FillDup<tvg::LinearGradient::Impl>::~FillDup() */

void __thiscall
FillDup<tvg::LinearGradient::Impl>::~FillDup(FillDup<tvg::LinearGradient::Impl> *this)

{
  return;
}



/* FillDup<tvg::RadialGradient::Impl>::~FillDup() */

void __thiscall
FillDup<tvg::RadialGradient::Impl>::~FillDup(FillDup<tvg::RadialGradient::Impl> *this)

{
  return;
}



/* FillDup<tvg::LinearGradient::Impl>::~FillDup() */

void __thiscall
FillDup<tvg::LinearGradient::Impl>::~FillDup(FillDup<tvg::LinearGradient::Impl> *this)

{
  operator_delete(this,0x10);
  return;
}



/* FillDup<tvg::RadialGradient::Impl>::~FillDup() */

void __thiscall
FillDup<tvg::RadialGradient::Impl>::~FillDup(FillDup<tvg::RadialGradient::Impl> *this)

{
  operator_delete(this,0x10);
  return;
}



/* FillDup<tvg::RadialGradient::Impl>::duplicate() */

void __thiscall
FillDup<tvg::RadialGradient::Impl>::duplicate(FillDup<tvg::RadialGradient::Impl> *this)

{
  tvg::RadialGradient::Impl::duplicate(*(Impl **)(this + 8));
  return;
}



/* FillDup<tvg::LinearGradient::Impl>::duplicate() */

void __thiscall
FillDup<tvg::LinearGradient::Impl>::duplicate(FillDup<tvg::LinearGradient::Impl> *this)

{
  tvg::LinearGradient::Impl::duplicate(*(Impl **)(this + 8));
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* FillDup<tvg::RadialGradient::Impl>::~FillDup() */

void __thiscall
FillDup<tvg::RadialGradient::Impl>::~FillDup(FillDup<tvg::RadialGradient::Impl> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* FillDup<tvg::LinearGradient::Impl>::~FillDup() */

void __thiscall
FillDup<tvg::LinearGradient::Impl>::~FillDup(FillDup<tvg::LinearGradient::Impl> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


