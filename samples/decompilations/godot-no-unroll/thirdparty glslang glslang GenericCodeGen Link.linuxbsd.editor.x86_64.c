
/* ConstructLinker(EShExecutable, int) */

undefined8 * ConstructLinker(undefined4 param_1)

{
  undefined8 *puVar1;
  TPoolAllocator *this;
  
  puVar1 = (undefined8 *)operator_new(0xa8);
  *puVar1 = &PTR__TShHandleBase_00100690;
  this = (TPoolAllocator *)operator_new(0x60);
  glslang::TPoolAllocator::TPoolAllocator(this,0x2000,0x10);
  puVar1[1] = this;
  puVar1[2] = puVar1 + 9;
  *puVar1 = &PTR__TGenericLinker_00100720;
  puVar1[9] = puVar1 + 0xb;
  puVar1[0xf] = puVar1 + 0x11;
  *(undefined4 *)(puVar1 + 3) = param_1;
  *(undefined1 *)((long)puVar1 + 0x1c) = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)(puVar1 + 0xd) = 4;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined4 *)(puVar1 + 0x13) = 4;
  puVar1[0x14] = 0;
  *(undefined1 (*) [16])(puVar1 + 4) = (undefined1  [16])0x0;
  return puVar1;
}



/* DeleteLinker(TShHandleBase*) */

void DeleteLinker(TShHandleBase *param_1)

{
  if (param_1 != (TShHandleBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 8))();
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConstructUniformMap() */

undefined8 * ConstructUniformMap(void)

{
  undefined8 *puVar1;
  TPoolAllocator *this;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  *puVar1 = &PTR__TShHandleBase_00100690;
  this = (TPoolAllocator *)operator_new(0x60);
  glslang::TPoolAllocator::TPoolAllocator(this,0x2000,0x10);
  puVar1[1] = this;
  puVar1[2] = puVar1 + 4;
  puVar1[8] = puVar1 + 10;
  *puVar1 = &PTR__TUniformLinkedMap_001007a8;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 6) = 4;
  puVar1[7] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 4;
  puVar1[0xd] = 0;
  return puVar1;
}



/* DeleteUniformMap(TUniformMap*) */

void DeleteUniformMap(TUniformMap *param_1)

{
  if (param_1 != (TUniformMap *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001001ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 8))();
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConstructBindings() */

undefined8 ConstructBindings(void)

{
  return 0;
}



/* DeleteBindingList(TShHandleBase*) */

void DeleteBindingList(TShHandleBase *param_1)

{
  if (param_1 != (TShHandleBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001001dc. Too many branches */
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



/* TUniformMap::getAsUniformMap() */

TUniformMap * __thiscall TUniformMap::getAsUniformMap(TUniformMap *this)

{
  return this;
}



/* TUniformMap::getInfoSink() */

TUniformMap * __thiscall TUniformMap::getInfoSink(TUniformMap *this)

{
  return this + 0x10;
}



/* TLinker::getAsLinker() */

TLinker * __thiscall TLinker::getAsLinker(TLinker *this)

{
  return this;
}



/* TLinker::link(glslang::TVector<TShHandleBase*>&) */

undefined8 TLinker::link(TVector *param_1)

{
  return 0;
}



/* TLinker::setAppAttributeBindings(ShBindingTable const*) */

void __thiscall TLinker::setAppAttributeBindings(TLinker *this,ShBindingTable *param_1)

{
  *(ShBindingTable **)(this + 0x20) = param_1;
  return;
}



/* TLinker::setFixedAttributeBindings(ShBindingTable const*) */

void __thiscall TLinker::setFixedAttributeBindings(TLinker *this,ShBindingTable *param_1)

{
  *(ShBindingTable **)(this + 0x28) = param_1;
  return;
}



/* TLinker::setExcludedAttributes(int const*, int) */

void __thiscall TLinker::setExcludedAttributes(TLinker *this,int *param_1,int param_2)

{
  *(int **)(this + 0x30) = param_1;
  *(int *)(this + 0x38) = param_2;
  return;
}



/* TLinker::getUniformBindings() const */

undefined8 __thiscall TLinker::getUniformBindings(TLinker *this)

{
  return *(undefined8 *)(this + 0x40);
}



/* TLinker::getObjectCode() const */

undefined8 TLinker::getObjectCode(void)

{
  return 0;
}



/* TLinker::getInfoSink() */

undefined8 __thiscall TLinker::getInfoSink(TLinker *this)

{
  return *(undefined8 *)(this + 0x10);
}



/* TGenericLinker::link(glslang::TVector<TCompiler*>&, TUniformMap*) */

undefined8 TGenericLinker::link(TVector *param_1,TUniformMap *param_2)

{
  return 1;
}



/* TGenericLinker::getAttributeBindings(ShBindingTable const**) const */

void TGenericLinker::getAttributeBindings(ShBindingTable **param_1)

{
  return;
}



/* TUniformLinkedMap::getLocation(char const*) */

undefined8 TUniformLinkedMap::getLocation(char *param_1)

{
  return 0;
}



/* TShHandleBase::~TShHandleBase() */

void __thiscall TShHandleBase::~TShHandleBase(TShHandleBase *this)

{
  TPoolAllocator *this_00;
  
  this_00 = *(TPoolAllocator **)(this + 8);
  *(undefined ***)this = &PTR__TShHandleBase_00100690;
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
  *(undefined ***)this = &PTR__TShHandleBase_00100690;
  if (this_00 != (TPoolAllocator *)0x0) {
    glslang::TPoolAllocator::~TPoolAllocator(this_00);
    operator_delete(this_00,0x60);
  }
  operator_delete(this,0x10);
  return;
}



/* TUniformLinkedMap::~TUniformLinkedMap() */

void __thiscall TUniformLinkedMap::~TUniformLinkedMap(TUniformLinkedMap *this)

{
  TPoolAllocator *this_00;
  
  *(undefined **)this = &DAT_001006d0;
  if (*(TUniformLinkedMap **)(this + 0x40) != this + 0x50) {
    operator_delete(*(TUniformLinkedMap **)(this + 0x40),*(long *)(this + 0x50) + 1);
  }
  if (*(TUniformLinkedMap **)(this + 0x10) != this + 0x20) {
    operator_delete(*(TUniformLinkedMap **)(this + 0x10),*(long *)(this + 0x20) + 1);
  }
  this_00 = *(TPoolAllocator **)(this + 8);
  *(undefined ***)this = &PTR__TShHandleBase_00100690;
  if (this_00 != (TPoolAllocator *)0x0) {
    glslang::TPoolAllocator::~TPoolAllocator(this_00);
    operator_delete(this_00,0x60);
  }
  operator_delete(this,0x70);
  return;
}



/* TUniformLinkedMap::~TUniformLinkedMap() */

void __thiscall TUniformLinkedMap::~TUniformLinkedMap(TUniformLinkedMap *this)

{
  TPoolAllocator *this_00;
  
  *(undefined **)this = &DAT_001006d0;
  if (*(TUniformLinkedMap **)(this + 0x40) != this + 0x50) {
    operator_delete(*(TUniformLinkedMap **)(this + 0x40),*(long *)(this + 0x50) + 1);
  }
  if (*(TUniformLinkedMap **)(this + 0x10) != this + 0x20) {
    operator_delete(*(TUniformLinkedMap **)(this + 0x10),*(long *)(this + 0x20) + 1);
  }
  *(undefined ***)this = &PTR__TShHandleBase_00100690;
  this_00 = *(TPoolAllocator **)(this + 8);
  if (this_00 != (TPoolAllocator *)0x0) {
    glslang::TPoolAllocator::~TPoolAllocator(this_00);
    operator_delete(this_00,0x60);
    return;
  }
  return;
}



/* TGenericLinker::~TGenericLinker() */

void __thiscall TGenericLinker::~TGenericLinker(TGenericLinker *this)

{
  TPoolAllocator *this_00;
  
  *(undefined ***)this = &PTR__TGenericLinker_00100720;
  if (*(TGenericLinker **)(this + 0x78) != this + 0x88) {
    operator_delete(*(TGenericLinker **)(this + 0x78),*(long *)(this + 0x88) + 1);
  }
  if (*(TGenericLinker **)(this + 0x48) != this + 0x58) {
    operator_delete(*(TGenericLinker **)(this + 0x48),*(long *)(this + 0x58) + 1);
  }
  *(undefined ***)this = &PTR__TShHandleBase_00100690;
  this_00 = *(TPoolAllocator **)(this + 8);
  if (this_00 != (TPoolAllocator *)0x0) {
    glslang::TPoolAllocator::~TPoolAllocator(this_00);
    operator_delete(this_00,0x60);
    return;
  }
  return;
}



/* TGenericLinker::~TGenericLinker() */

void __thiscall TGenericLinker::~TGenericLinker(TGenericLinker *this)

{
  TPoolAllocator *this_00;
  
  *(undefined ***)this = &PTR__TGenericLinker_00100720;
  if (*(TGenericLinker **)(this + 0x78) != this + 0x88) {
    operator_delete(*(TGenericLinker **)(this + 0x78),*(long *)(this + 0x88) + 1);
  }
  if (*(TGenericLinker **)(this + 0x48) != this + 0x58) {
    operator_delete(*(TGenericLinker **)(this + 0x48),*(long *)(this + 0x58) + 1);
  }
  this_00 = *(TPoolAllocator **)(this + 8);
  *(undefined ***)this = &PTR__TShHandleBase_00100690;
  if (this_00 != (TPoolAllocator *)0x0) {
    glslang::TPoolAllocator::~TPoolAllocator(this_00);
    operator_delete(this_00,0x60);
  }
  operator_delete(this,0xa8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* TGenericLinker::~TGenericLinker() */

void __thiscall TGenericLinker::~TGenericLinker(TGenericLinker *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* TUniformLinkedMap::~TUniformLinkedMap() */

void __thiscall TUniformLinkedMap::~TUniformLinkedMap(TUniformLinkedMap *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* TShHandleBase::~TShHandleBase() */

void __thiscall TShHandleBase::~TShHandleBase(TShHandleBase *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


