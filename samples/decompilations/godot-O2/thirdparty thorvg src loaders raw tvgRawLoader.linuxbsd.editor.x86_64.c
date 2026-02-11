
/* RawLoader::read() */

undefined8 __thiscall RawLoader::read(RawLoader *this)

{
  if (this[0x26] == (RawLoader)0x0) {
    this[0x26] = (RawLoader)0x1;
  }
  return 1;
}



/* RawLoader::~RawLoader() */

void __thiscall RawLoader::~RawLoader(RawLoader *this)

{
  RawLoader RVar1;
  
  if (this[0x70] == (RawLoader)0x0) {
    RVar1 = this[0x27];
  }
  else {
    free(*(void **)(this + 0x30));
    RVar1 = this[0x27];
  }
  if (RVar1 == (RawLoader)0x0) {
    return;
  }
  free(*(void **)(this + 0x18));
  return;
}



/* RawLoader::~RawLoader() */

void __thiscall RawLoader::~RawLoader(RawLoader *this)

{
  RawLoader RVar1;
  
  if (this[0x70] == (RawLoader)0x0) {
    RVar1 = this[0x27];
  }
  else {
    free(*(void **)(this + 0x30));
    RVar1 = this[0x27];
  }
  if (RVar1 == (RawLoader)0x0) {
    operator_delete(this,0x78);
    return;
  }
  free(*(void **)(this + 0x18));
  operator_delete(this,0x78);
  return;
}



/* RawLoader::RawLoader() */

void __thiscall RawLoader::RawLoader(RawLoader *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x6c) = 5;
  *(undefined8 *)(this + 0x20) = 7;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x6e] = (RawLoader)0x0;
  *(undefined ***)this = &PTR__RawLoader_00100398;
  this[0x70] = (RawLoader)0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  return;
}



/* RawLoader::open(unsigned int const*, unsigned int, unsigned int, bool) */

undefined1 __thiscall
RawLoader::open(RawLoader *this,uint *param_1,uint param_2,uint param_3,bool param_4)

{
  size_t __size;
  void *pvVar1;
  
  if (this[0x26] == (RawLoader)0x0) {
    this[0x26] = (RawLoader)0x1;
    if (param_2 == 0 || param_3 == 0) {
      return 0;
    }
    if (param_1 == (uint *)0x0) {
      return 0;
    }
    this[0x70] = (RawLoader)param_4;
    *(ulong *)(this + 0x28) = CONCAT44((float)param_3,(float)param_2);
    if (param_4) {
      __size = (ulong)param_2 * (ulong)param_3 * 4;
      pvVar1 = malloc(__size);
      *(void **)(this + 0x30) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      __memcpy_chk(pvVar1,param_1,__size,__size);
    }
    else {
      *(uint **)(this + 0x30) = param_1;
    }
    *(uint *)(this + 0x68) = param_3;
    *(undefined2 *)(this + 0x6c) = 0x401;
    this[0x6e] = (RawLoader)0x1;
    *(ulong *)(this + 0x60) = CONCAT44(param_2,param_2);
  }
  return 1;
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


