
/* WARNING: Unknown calling convention */

_Bool gl_dynarray_emplace_enlarge(dynarray_header *list,void *scratch,size_t element_size)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  size_t __size;
  size_t __size_00;
  void *pvVar4;
  int *piVar5;
  ulong uVar6;
  
  uVar1 = list->allocated;
  if (uVar1 == 0) {
    uVar6 = 0x10;
    if (3 < element_size) {
      uVar6 = (ulong)(-(uint)(element_size < 8) & 4) + 4;
    }
  }
  else {
    uVar6 = uVar1 + 1 + (uVar1 >> 1);
    if (uVar6 <= uVar1) {
      piVar5 = __errno_location();
      *piVar5 = 0xc;
      return false;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = element_size;
  __size = SUB168(auVar2 * auVar3,0);
  if (SUB168(auVar2 * auVar3,8) != 0) {
    return false;
  }
  if (list->array == scratch) {
    pvVar4 = malloc(__size);
    if (pvVar4 == (void *)0x0) {
      return false;
    }
    if (scratch != (void *)0x0) {
      pvVar4 = (void *)__memcpy_chk(pvVar4,scratch,element_size * list->used,__size);
    }
  }
  else {
    __size_00 = 1;
    if (__size != 0) {
      __size_00 = __size;
    }
    pvVar4 = realloc(list->array,__size_00);
    if (pvVar4 == (void *)0x0) {
      return false;
    }
  }
  list->array = pvVar4;
  list->allocated = uVar6;
  return true;
}


