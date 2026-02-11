
/* msdfgen::EdgeHolder::swap(msdfgen::EdgeHolder&, msdfgen::EdgeHolder&) */

void msdfgen::EdgeHolder::swap(EdgeHolder *param_1,EdgeHolder *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar1;
  return;
}



/* msdfgen::EdgeHolder::EdgeHolder(msdfgen::EdgeHolder const&) */

void __thiscall msdfgen::EdgeHolder::EdgeHolder(EdgeHolder *this,EdgeHolder *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)param_1;
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x10))();
  }
  *(long **)this = plVar1;
  return;
}



/* msdfgen::EdgeHolder::~EdgeHolder() */

void __thiscall msdfgen::EdgeHolder::~EdgeHolder(EdgeHolder *this)

{
  if (*(long **)this != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010004f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)this + 8))();
    return;
  }
  return;
}



/* msdfgen::EdgeHolder::TEMPNAMEPLACEHOLDERVALUE(msdfgen::EdgeHolder const&) */

EdgeHolder * __thiscall msdfgen::EdgeHolder::operator=(EdgeHolder *this,EdgeHolder *param_1)

{
  long *plVar1;
  
  if (this != param_1) {
    if (*(long **)this != (long *)0x0) {
      (**(code **)(**(long **)this + 8))();
    }
    plVar1 = *(long **)param_1;
    if (plVar1 != (long *)0x0) {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x10))();
    }
    *(long **)this = plVar1;
  }
  return this;
}



/* msdfgen::EdgeHolder::TEMPNAMEPLACEHOLDERVALUE() */

undefined8 __thiscall msdfgen::EdgeHolder::operator*(EdgeHolder *this)

{
  return *(undefined8 *)this;
}



/* msdfgen::EdgeHolder::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall msdfgen::EdgeHolder::operator*(EdgeHolder *this)

{
  return *(undefined8 *)this;
}



/* msdfgen::EdgeHolder::TEMPNAMEPLACEHOLDERVALUE() */

undefined8 __thiscall msdfgen::EdgeHolder::operator->(EdgeHolder *this)

{
  return *(undefined8 *)this;
}



/* msdfgen::EdgeHolder::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall msdfgen::EdgeHolder::operator->(EdgeHolder *this)

{
  return *(undefined8 *)this;
}



/* msdfgen::EdgeHolder::operator msdfgen::EdgeSegment*() */

EdgeSegment * __thiscall msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(EdgeHolder *this)

{
  return *(EdgeSegment **)this;
}



/* msdfgen::EdgeHolder::operator msdfgen::EdgeSegment const*() const */

EdgeSegment * __thiscall msdfgen::EdgeHolder::operator_cast_to_EdgeSegment_(EdgeHolder *this)

{
  return *(EdgeSegment **)this;
}


