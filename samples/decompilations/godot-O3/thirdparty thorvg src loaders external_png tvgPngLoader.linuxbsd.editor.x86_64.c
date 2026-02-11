
/* PngLoader::open(char const*, unsigned int, bool) */

bool PngLoader::open(char *param_1,uint param_2,bool param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined7 in_register_00000011;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  *puVar1 = 0;
  iVar2 = png_image_begin_read_from_memory
                    (puVar1,param_2,CONCAT71(in_register_00000011,param_3) & 0xffffffff);
  if (iVar2 != 0) {
    *(ulong *)(param_1 + 0x28) =
         CONCAT44((float)*(uint *)(*(long *)(param_1 + 0x70) + 0x10),
                  (float)*(uint *)(*(long *)(param_1 + 0x70) + 0xc));
  }
  return iVar2 != 0;
}



/* PngLoader::open(std::__cxx11::string const&) */

bool __thiscall PngLoader::open(PngLoader *this,string *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  puVar1 = *(undefined8 **)(this + 0x70);
  uVar2 = *(undefined8 *)param_1;
  *puVar1 = 0;
  iVar3 = png_image_begin_read_from_file(puVar1,uVar2);
  if (iVar3 != 0) {
    *(ulong *)(this + 0x28) =
         CONCAT44((float)*(uint *)(*(long *)(this + 0x70) + 0x10),
                  (float)*(uint *)(*(long *)(this + 0x70) + 0xc));
  }
  return iVar3 != 0;
}



/* PngLoader::~PngLoader() */

void __thiscall PngLoader::~PngLoader(PngLoader *this)

{
  *(undefined ***)this = &PTR__PngLoader_001004b8;
  png_image_free(*(undefined8 *)(this + 0x70));
  free(*(void **)(this + 0x70));
  free(*(void **)(this + 0x30));
  if (this[0x27] == (PngLoader)0x0) {
    return;
  }
  free(*(void **)(this + 0x18));
  return;
}



/* PngLoader::~PngLoader() */

void __thiscall PngLoader::~PngLoader(PngLoader *this)

{
  *(undefined ***)this = &PTR__PngLoader_001004b8;
  png_image_free(*(undefined8 *)(this + 0x70));
  free(*(void **)(this + 0x70));
  free(*(void **)(this + 0x30));
  if (this[0x27] == (PngLoader)0x0) {
    operator_delete(this,0x78);
    return;
  }
  free(*(void **)(this + 0x18));
  operator_delete(this,0x78);
  return;
}



/* PngLoader::read() */

undefined1 __thiscall PngLoader::read(PngLoader *this)

{
  long lVar1;
  int iVar2;
  void *__ptr;
  undefined4 uVar3;
  bool bVar4;
  
  if (this[0x26] == (PngLoader)0x0) {
    this[0x26] = (PngLoader)0x1;
    if (*(float *)(this + 0x28) == 0.0) {
      return 0;
    }
    if (*(float *)(this + 0x2c) == 0.0) {
      return 0;
    }
    lVar1 = *(long *)(this + 0x70);
    bVar4 = ((byte)ImageLoader::cs & 0xfd) == 1;
    uVar3 = 0x13;
    if (!bVar4) {
      uVar3 = 3;
    }
    *(undefined4 *)(lVar1 + 0x14) = uVar3;
    this[0x6c] = (PngLoader)(bVar4 + '\x02');
    __ptr = malloc((ulong)(uint)(*(int *)(lVar1 + 0x10) * *(int *)(lVar1 + 0xc) * 4));
    iVar2 = png_image_finish_read(lVar1,0,__ptr,0,0);
    if (iVar2 == 0) {
      free(__ptr);
      return 0;
    }
    *(void **)(this + 0x30) = __ptr;
    *(ulong *)(this + 0x60) =
         CONCAT44((int)(long)*(float *)(this + 0x28),(int)(long)*(float *)(this + 0x28));
    *(int *)(this + 0x68) = (int)(long)*(float *)(this + 0x2c);
    *(undefined2 *)(this + 0x6d) = 4;
    png_image_free(*(undefined8 *)(this + 0x70));
    free(*(void **)(this + 0x70));
    *(undefined8 *)(this + 0x70) = 0;
  }
  return 1;
}



/* PngLoader::clear() */

void __thiscall PngLoader::clear(PngLoader *this)

{
  png_image_free(*(undefined8 *)(this + 0x70));
  free(*(void **)(this + 0x70));
  *(undefined8 *)(this + 0x70) = 0;
  return;
}



/* PngLoader::PngLoader() */

void __thiscall PngLoader::PngLoader(PngLoader *this)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(this + 0x6c) = 5;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x6e] = (PngLoader)0x0;
  *(undefined ***)this = &PTR__PngLoader_001004b8;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)calloc(1,0x68);
  *(undefined8 **)(this + 0x70) = puVar1;
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = 0;
  return;
}



/* LoadModule::open(std::__cxx11::string const&) */

undefined8 LoadModule::open(string *param_1)

{
  return 0;
}



/* LoadModule::open(char const*, unsigned int, bool) */

undefined8 LoadModule::open(char *param_1,uint param_2,bool param_3)

{
  return 0;
}



/* LoadModule::resize(tvg::Paint*, float, float) */

undefined8 LoadModule::resize(Paint *param_1,float param_2,float param_3)

{
  return 0;
}



/* LoadModule::sync() */

void LoadModule::sync(void)

{
  return;
}



/* LoadModule::read() */

bool __thiscall LoadModule::read(LoadModule *this)

{
  LoadModule LVar1;
  
  LVar1 = this[0x26];
  if (LVar1 == (LoadModule)0x0) {
    this[0x26] = (LoadModule)0x1;
  }
  return LVar1 == (LoadModule)0x0;
}



/* LoadModule::close() */

bool __thiscall LoadModule::close(LoadModule *this)

{
  short sVar1;
  
  sVar1 = *(short *)(this + 0x24);
  if (sVar1 != 0) {
    *(short *)(this + 0x24) = sVar1 + -1;
  }
  return sVar1 == 0;
}



/* ImageLoader::animatable() */

undefined8 ImageLoader::animatable(void)

{
  return 0;
}



/* ImageLoader::paint() */

undefined8 ImageLoader::paint(void)

{
  return 0;
}



/* ImageLoader::bitmap() */

ImageLoader * __thiscall ImageLoader::bitmap(ImageLoader *this)

{
  ImageLoader *pIVar1;
  
  pIVar1 = *(ImageLoader **)(this + 0x30);
  if (*(ImageLoader **)(this + 0x30) != (ImageLoader *)0x0) {
    pIVar1 = this + 0x30;
  }
  return pIVar1;
}



/* ImageLoader::~ImageLoader() */

void __thiscall ImageLoader::~ImageLoader(ImageLoader *this)

{
  if (this[0x27] == (ImageLoader)0x0) {
    return;
  }
  free(*(void **)(this + 0x18));
  return;
}



/* ImageLoader::~ImageLoader() */

void __thiscall ImageLoader::~ImageLoader(ImageLoader *this)

{
  if (this[0x27] == (ImageLoader)0x0) {
    operator_delete(this,0x70);
    return;
  }
  free(*(void **)(this + 0x18));
  operator_delete(this,0x70);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* ImageLoader::~ImageLoader() */

void __thiscall ImageLoader::~ImageLoader(ImageLoader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


