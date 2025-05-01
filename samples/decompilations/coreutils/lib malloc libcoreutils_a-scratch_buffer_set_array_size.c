
/* WARNING: Unknown calling convention */

_Bool gl_scratch_buffer_set_array_size(scratch_buffer *buffer,size_t nelem,size_t size)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  _Bool _Var3;
  size_t __size;
  void *pvVar4;
  int *piVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = nelem;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = size;
  __size = SUB168(auVar1 * auVar2,0);
  if ((((size | nelem) >> 0x20 == 0) || (nelem == 0)) || (SUB168(auVar1 * auVar2,8) == 0)) {
    if (buffer->length < __size) {
      if ((anon_union_1024_2_7bb2425f_for___space *)buffer->data != &buffer->__space) {
        free(buffer->data);
      }
      pvVar4 = malloc(__size);
      if (pvVar4 == (void *)0x0) {
        buffer->data = &buffer->__space;
        buffer->length = 0x400;
        return false;
      }
      buffer->data = pvVar4;
      buffer->length = __size;
    }
    _Var3 = true;
  }
  else {
    if ((anon_union_1024_2_7bb2425f_for___space *)buffer->data != &buffer->__space) {
      free(buffer->data);
    }
    buffer->data = &buffer->__space;
    buffer->length = 0x400;
    piVar5 = __errno_location();
    *piVar5 = 0xc;
    _Var3 = false;
  }
  return _Var3;
}


