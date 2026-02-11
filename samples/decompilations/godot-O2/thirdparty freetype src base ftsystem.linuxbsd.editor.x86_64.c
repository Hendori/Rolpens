
void ft_ansi_stream_close(undefined8 *param_1)

{
  fclose((FILE *)param_1[3]);
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



size_t ft_ansi_stream_io(long param_1,ulong param_2,void *param_3,size_t param_4)

{
  size_t sVar1;
  FILE *__stream;
  
  if (*(ulong *)(param_1 + 8) < param_2) {
    if (param_4 == 0) {
      return 1;
    }
    __stream = *(FILE **)(param_1 + 0x18);
    if (param_2 != *(ulong *)(param_1 + 0x10)) {
      fseek(__stream,param_2,0);
    }
  }
  else {
    __stream = *(FILE **)(param_1 + 0x18);
    if (*(ulong *)(param_1 + 0x10) != param_2) {
      fseek(__stream,param_2,0);
    }
    if (param_4 == 0) {
      return 0;
    }
  }
  sVar1 = fread(param_3,1,param_4,__stream);
  return sVar1;
}



void ft_alloc(undefined8 param_1,size_t param_2)

{
  malloc(param_2);
  return;
}



void ft_free(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}



void ft_realloc(undefined8 param_1,undefined8 param_2,size_t param_3,void *param_4)

{
  realloc(param_4,param_3);
  return;
}



undefined8 FT_Stream_Open(undefined8 *param_1,char *param_2)

{
  FILE *__stream;
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x28;
  }
  param_1[4] = param_2;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  __stream = fopen64(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    uVar2 = 1;
  }
  else {
    fseek(__stream,0,2);
    lVar1 = ftell(__stream);
    param_1[1] = lVar1;
    if (lVar1 == 0) {
      fclose(__stream);
      return 0x51;
    }
    fseek(__stream,0,0);
    param_1[3] = __stream;
    uVar2 = 0;
    param_1[5] = ft_ansi_stream_io;
    param_1[6] = 0x100000;
  }
  return uVar2;
}



void FT_New_Memory(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[3] = ft_realloc;
    puVar1[1] = ft_alloc;
    puVar1[2] = ft_free;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FT_Done_Memory(void *__ptr)

{
  free(__ptr);
  return;
}


