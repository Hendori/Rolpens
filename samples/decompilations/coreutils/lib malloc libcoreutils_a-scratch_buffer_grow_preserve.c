
/* WARNING: Unknown calling convention */

_Bool gl_scratch_buffer_grow_preserve(scratch_buffer *buffer)

{
  ulong uVar1;
  ulong __size;
  void *pvVar2;
  int *piVar3;
  size_t __size_00;
  undefined1 *__ptr;
  
  uVar1 = buffer->length;
  __ptr = (undefined1 *)buffer->data;
  __size = uVar1 * 2;
  if ((anon_union_1024_2_7bb2425f_for___space *)__ptr == &buffer->__space) {
    pvVar2 = malloc(__size);
    if (pvVar2 != (void *)0x0) {
      pvVar2 = (void *)__memcpy_chk(pvVar2,__ptr,uVar1,__size);
LAB_00100045:
      buffer->data = pvVar2;
      buffer->length = __size;
      return true;
    }
  }
  else {
    if (__size < uVar1) {
      piVar3 = __errno_location();
      *piVar3 = 0xc;
    }
    else {
      __size_00 = 1;
      if (__size != 0) {
        __size_00 = __size;
      }
      pvVar2 = realloc(__ptr,__size_00);
      if (pvVar2 != (void *)0x0) goto LAB_00100045;
      __ptr = (undefined1 *)buffer->data;
    }
    free(__ptr);
    buffer->data = &buffer->__space;
    buffer->length = 0x400;
  }
  return false;
}


