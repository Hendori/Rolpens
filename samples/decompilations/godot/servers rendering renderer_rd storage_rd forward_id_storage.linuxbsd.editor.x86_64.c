
/* RendererRD::ForwardIDStorage::~ForwardIDStorage() */

void __thiscall RendererRD::ForwardIDStorage::~ForwardIDStorage(ForwardIDStorage *this)

{
  singleton = 0;
  return;
}



/* RendererRD::ForwardIDStorage::~ForwardIDStorage() */

void __thiscall RendererRD::ForwardIDStorage::~ForwardIDStorage(ForwardIDStorage *this)

{
  singleton = 0;
  operator_delete(this,8);
  return;
}



/* RendererRD::ForwardIDStorage::ForwardIDStorage() */

void __thiscall RendererRD::ForwardIDStorage::ForwardIDStorage(ForwardIDStorage *this)

{
  singleton = this;
  *(undefined ***)this = &PTR__ForwardIDStorage_001000e8;
  return;
}



/* RendererRD::ForwardIDStorage::allocate_forward_id(RendererRD::ForwardIDType) */

undefined8 RendererRD::ForwardIDStorage::allocate_forward_id(void)

{
  return 0xffffffff;
}



/* RendererRD::ForwardIDStorage::free_forward_id(RendererRD::ForwardIDType, int) */

void RendererRD::ForwardIDStorage::free_forward_id(void)

{
  return;
}



/* RendererRD::ForwardIDStorage::map_forward_id(RendererRD::ForwardIDType, int, unsigned int,
   unsigned long) */

void RendererRD::ForwardIDStorage::map_forward_id(void)

{
  return;
}



/* RendererRD::ForwardIDStorage::uses_forward_ids() const */

undefined8 RendererRD::ForwardIDStorage::uses_forward_ids(void)

{
  return 0;
}


