
/* tvg::SwCanvas::~SwCanvas() */

void __thiscall tvg::SwCanvas::~SwCanvas(SwCanvas *this)

{
  *(undefined ***)this = &PTR__SwCanvas_00100248;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10),1);
  }
  tvg::Canvas::~Canvas((Canvas *)this);
  return;
}



/* tvg::SwCanvas::~SwCanvas() */

void __thiscall tvg::SwCanvas::~SwCanvas(SwCanvas *this)

{
  *(undefined ***)this = &PTR__SwCanvas_00100248;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10),1);
  }
  tvg::Canvas::~Canvas((Canvas *)this);
  operator_delete(this,0x18);
  return;
}



/* tvg::SwCanvas::SwCanvas() */

void __thiscall tvg::SwCanvas::SwCanvas(SwCanvas *this)

{
  RenderMethod *pRVar1;
  
  pRVar1 = (RenderMethod *)tvg::SwRenderer::gen();
  tvg::Canvas::Canvas((Canvas *)this,pRVar1);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__SwCanvas_00100248;
  return;
}



/* tvg::SwCanvas::mempool(tvg::SwCanvas::MempoolPolicy) */

undefined8 __thiscall tvg::SwCanvas::mempool(SwCanvas *this,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  bool bVar3;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1[3] == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = 2;
    if ((long *)*plVar1 == plVar1) {
      bVar3 = SUB81(plVar1[3],0);
      if (param_2 != 2) {
        tvg::SwRenderer::mempool(bVar3);
        return 0;
      }
      tvg::SwRenderer::mempool(bVar3);
      return 0;
    }
  }
  return uVar2;
}



/* tvg::SwCanvas::target(unsigned int*, unsigned int, unsigned int, unsigned int,
   tvg::SwCanvas::Colorspace) */

undefined8 __thiscall
tvg::SwCanvas::target
          (SwCanvas *this,undefined8 param_1,undefined8 param_3_00,undefined4 param_3,
          undefined4 param_4,undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  
  cVar4 = *(char *)(*(long *)(this + 8) + 0x30);
  if ((cVar4 == '\x03') || (uVar5 = 2, cVar4 == '\0')) {
    plVar1 = *(long **)(*(long *)(this + 8) + 0x18);
    if (plVar1 == (long *)0x0) {
      return 4;
    }
    cVar4 = tvg::SwRenderer::target(plVar1,param_1,param_3_00,param_3,param_4,param_6);
    uVar5 = 1;
    if (cVar4 != '\0') {
      lVar2 = *(long *)(this + 8);
      lVar3 = *plVar1;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x28) = param_3;
      *(undefined4 *)(lVar2 + 0x2c) = param_4;
      (**(code **)(lVar3 + 0x58))(plVar1);
      ImageLoader::cs._0_1_ = param_6;
      *(undefined1 *)(*(long *)(this + 8) + 0x30) = 3;
      uVar5 = 0;
    }
  }
  return uVar5;
}



/* tvg::SwCanvas::gen() */

SwCanvas * __thiscall tvg::SwCanvas::gen(SwCanvas *this)

{
  int iVar1;
  Canvas *this_00;
  RenderMethod *pRVar2;
  
  iVar1 = tvg::SwRenderer::init();
  if (iVar1 < 1) {
    *(undefined8 *)this = 0;
    return this;
  }
  this_00 = (Canvas *)operator_new(0x18);
  pRVar2 = (RenderMethod *)tvg::SwRenderer::gen();
  tvg::Canvas::Canvas(this_00,pRVar2);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined ***)this_00 = &PTR__SwCanvas_00100248;
  *(Canvas **)this = this_00;
  return this;
}


