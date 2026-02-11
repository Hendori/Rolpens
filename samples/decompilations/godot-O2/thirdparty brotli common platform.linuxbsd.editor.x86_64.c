
void BrotliDefaultAllocFunc(undefined8 param_1,size_t param_2)

{
  malloc(param_2);
  return;
}



void BrotliDefaultFreeFunc(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}


