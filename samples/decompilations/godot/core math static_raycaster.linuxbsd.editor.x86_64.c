
/* StaticRaycaster::create() */

StaticRaycaster * __thiscall StaticRaycaster::create(StaticRaycaster *this)

{
  char cVar1;
  long lVar2;
  
  if ((create_function != (code *)0x0) && (lVar2 = (*create_function)(), lVar2 != 0)) {
    *(long *)this = lVar2;
    cVar1 = RefCounted::init_ref();
    if (cVar1 != '\0') {
      return this;
    }
  }
  *(undefined8 *)this = 0;
  return this;
}


