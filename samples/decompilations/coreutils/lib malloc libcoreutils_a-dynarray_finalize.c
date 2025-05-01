
/* WARNING: Unknown calling convention */

_Bool gl_dynarray_finalize
                (dynarray_header *list,void *scratch,size_t element_size,
                dynarray_finalize_result *result)

{
  size_t sVar1;
  void *__ptr;
  void *pvVar2;
  size_t __size;
  
  if (list->allocated == 0xffffffffffffffff) {
    return false;
  }
  sVar1 = list->used;
  if (sVar1 == 0) {
    if (list->array != scratch) {
      free(list->array);
    }
    result->array = (void *)0x0;
    result->length = 0;
  }
  else {
    __size = element_size * sVar1;
    pvVar2 = malloc(__size);
    if (pvVar2 == (void *)0x0) {
      return false;
    }
    __ptr = list->array;
    if (__ptr != (void *)0x0) {
      __memcpy_chk(pvVar2,__ptr,__size,__size);
    }
    if (__ptr != scratch) {
      free(__ptr);
    }
    result->array = pvVar2;
    result->length = sVar1;
  }
  return true;
}


