
/* WARNING: Unknown calling convention */

_Bool gl_dynarray_resize_clear(dynarray_header *list,size_t size,void *scratch,size_t element_size)

{
  size_t sVar1;
  char cVar2;
  
  sVar1 = list->used;
  cVar2 = gl_dynarray_resize();
  if (cVar2 != '\0') {
    memset((void *)(sVar1 * element_size + (long)list->array),0,(size - sVar1) * element_size);
  }
  return (_Bool)cVar2;
}


