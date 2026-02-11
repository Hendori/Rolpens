
/* VulkanHooks::VulkanHooks() */

void __thiscall VulkanHooks::VulkanHooks(VulkanHooks *this)

{
  bool bVar1;
  
  bVar1 = singleton != (VulkanHooks *)0x0;
  *(undefined **)this = &DAT_001000c0;
  if (bVar1) {
    return;
  }
  singleton = this;
  return;
}



/* VulkanHooks::~VulkanHooks() */

void __thiscall VulkanHooks::~VulkanHooks(VulkanHooks *this)

{
  if (singleton != this) {
    return;
  }
  singleton = (VulkanHooks *)0x0;
  return;
}



/* VulkanHooks::~VulkanHooks() */

void __thiscall VulkanHooks::~VulkanHooks(VulkanHooks *this)

{
  if (this != singleton) {
    operator_delete(this,8);
    return;
  }
  singleton = (VulkanHooks *)0x0;
  operator_delete(this,8);
  return;
}


