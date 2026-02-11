
/* TGenericCompiler::compile(TIntermNode*, int, EProfile) */

undefined8 TGenericCompiler::compile(long param_1)

{
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return 1;
}



/* ConstructCompiler(EShLanguage, int) */

undefined8 * ConstructCompiler(undefined4 param_1)

{
  undefined8 *puVar1;
  TPoolAllocator *this;
  
  puVar1 = (undefined8 *)operator_new(0x80);
  *puVar1 = &PTR__TShHandleBase_00100380;
  this = (TPoolAllocator *)operator_new(0x60);
  glslang::TPoolAllocator::TPoolAllocator(this,0x2000,0x10);
  puVar1[1] = this;
  puVar1[2] = puVar1 + 4;
  *puVar1 = &PTR__TGenericCompiler_001003c0;
  puVar1[4] = puVar1 + 6;
  puVar1[10] = puVar1 + 0xc;
  *(undefined4 *)(puVar1 + 3) = param_1;
  *(undefined1 *)((long)puVar1 + 0x1c) = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined4 *)(puVar1 + 8) = 4;
  puVar1[9] = 0;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0xe) = 4;
  puVar1[0xf] = 0;
  return puVar1;
}



/* DeleteCompiler(TCompiler*) */

void DeleteCompiler(TCompiler *param_1)

{
  if (param_1 != (TCompiler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 8))();
    return;
  }
  return;
}



/* TShHandleBase::getAsCompiler() */

undefined8 TShHandleBase::getAsCompiler(void)

{
  return 0;
}



/* TShHandleBase::getAsLinker() */

undefined8 TShHandleBase::getAsLinker(void)

{
  return 0;
}



/* TShHandleBase::getAsUniformMap() */

undefined8 TShHandleBase::getAsUniformMap(void)

{
  return 0;
}



/* TShHandleBase::getPool() const */

undefined8 __thiscall TShHandleBase::getPool(TShHandleBase *this)

{
  return *(undefined8 *)(this + 8);
}



/* TCompiler::getInfoSink() */

undefined8 __thiscall TCompiler::getInfoSink(TCompiler *this)

{
  return *(undefined8 *)(this + 0x10);
}



/* TCompiler::getAsCompiler() */

TCompiler * __thiscall TCompiler::getAsCompiler(TCompiler *this)

{
  return this;
}



/* TCompiler::linkable() */

TCompiler __thiscall TCompiler::linkable(TCompiler *this)

{
  return this[0x1c];
}



/* TShHandleBase::~TShHandleBase() */

void __thiscall TShHandleBase::~TShHandleBase(TShHandleBase *this)

{
  TPoolAllocator *this_00;
  
  this_00 = *(TPoolAllocator **)(this + 8);
  *(undefined ***)this = &PTR__TShHandleBase_00100380;
  if (this_00 != (TPoolAllocator *)0x0) {
    glslang::TPoolAllocator::~TPoolAllocator(this_00);
    operator_delete(this_00,0x60);
    return;
  }
  return;
}



/* TShHandleBase::~TShHandleBase() */

void __thiscall TShHandleBase::~TShHandleBase(TShHandleBase *this)

{
  TPoolAllocator *this_00;
  
  this_00 = *(TPoolAllocator **)(this + 8);
  *(undefined ***)this = &PTR__TShHandleBase_00100380;
  if (this_00 != (TPoolAllocator *)0x0) {
    glslang::TPoolAllocator::~TPoolAllocator(this_00);
    operator_delete(this_00,0x60);
  }
  operator_delete(this,0x10);
  return;
}



/* TGenericCompiler::~TGenericCompiler() */

void __thiscall TGenericCompiler::~TGenericCompiler(TGenericCompiler *this)

{
  TPoolAllocator *this_00;
  
  *(undefined ***)this = &PTR__TGenericCompiler_001003c0;
  if (*(TGenericCompiler **)(this + 0x50) != this + 0x60) {
    operator_delete(*(TGenericCompiler **)(this + 0x50),*(long *)(this + 0x60) + 1);
  }
  if (*(TGenericCompiler **)(this + 0x20) != this + 0x30) {
    operator_delete(*(TGenericCompiler **)(this + 0x20),*(long *)(this + 0x30) + 1);
  }
  this_00 = *(TPoolAllocator **)(this + 8);
  *(undefined ***)this = &PTR__TShHandleBase_00100380;
  if (this_00 != (TPoolAllocator *)0x0) {
    glslang::TPoolAllocator::~TPoolAllocator(this_00);
    operator_delete(this_00,0x60);
  }
  operator_delete(this,0x80);
  return;
}



/* TGenericCompiler::~TGenericCompiler() */

void __thiscall TGenericCompiler::~TGenericCompiler(TGenericCompiler *this)

{
  TPoolAllocator *this_00;
  
  *(undefined ***)this = &PTR__TGenericCompiler_001003c0;
  if (*(TGenericCompiler **)(this + 0x50) != this + 0x60) {
    operator_delete(*(TGenericCompiler **)(this + 0x50),*(long *)(this + 0x60) + 1);
  }
  if (*(TGenericCompiler **)(this + 0x20) != this + 0x30) {
    operator_delete(*(TGenericCompiler **)(this + 0x20),*(long *)(this + 0x30) + 1);
  }
  *(undefined ***)this = &PTR__TShHandleBase_00100380;
  this_00 = *(TPoolAllocator **)(this + 8);
  if (this_00 != (TPoolAllocator *)0x0) {
    glslang::TPoolAllocator::~TPoolAllocator(this_00);
    operator_delete(this_00,0x60);
    return;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* TShHandleBase::~TShHandleBase() */

void __thiscall TShHandleBase::~TShHandleBase(TShHandleBase *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* TGenericCompiler::~TGenericCompiler() */

void __thiscall TGenericCompiler::~TGenericCompiler(TGenericCompiler *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


