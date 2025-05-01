
/* WARNING: Unknown calling convention */

_Bool gl_dynarray_resize(dynarray_header *list,size_t size,void *scratch,size_t element_size)

{
  void *__ptr;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  size_t __size;
  size_t __size_00;
  void *pvVar3;
  int *piVar4;
  
  if (list->allocated < size) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = size;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = element_size;
    __size = SUB168(auVar1 * auVar2,0);
    if (SUB168(auVar1 * auVar2,8) != 0) {
      piVar4 = __errno_location();
      *piVar4 = 0xc;
      return false;
    }
    __ptr = list->array;
    if (__ptr == scratch) {
      pvVar3 = malloc(__size);
      if (pvVar3 == (void *)0x0) {
        return false;
      }
      if (__ptr != (void *)0x0) {
        pvVar3 = (void *)__memcpy_chk(pvVar3,__ptr,list->used * element_size,__size);
      }
    }
    else {
      __size_00 = 1;
      if (__size != 0) {
        __size_00 = __size;
      }
      pvVar3 = realloc(__ptr,__size_00);
      if (pvVar3 == (void *)0x0) {
        return false;
      }
    }
    list->array = pvVar3;
    list->used = size;
    list->allocated = size;
  }
  else {
    list->used = size;
  }
  return true;
}


