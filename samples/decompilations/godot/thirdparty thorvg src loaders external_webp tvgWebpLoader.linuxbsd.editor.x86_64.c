
/* WebpLoader::run(unsigned int) */

void WebpLoader::run(uint param_1)

{
  undefined8 uVar1;
  undefined4 in_register_0000003c;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = CONCAT44(in_register_0000003c,param_1);
  uVar1 = WebPDecodeBGRA(*(undefined8 *)(lVar2 + 0xe8),*(undefined8 *)(lVar2 + 0xf0),0,0);
  *(undefined1 *)(lVar2 + 0x6e) = 0;
  *(undefined8 *)(lVar2 + 0x30) = uVar1;
  uVar3 = (undefined4)(long)*(float *)(lVar2 + 0x28);
  *(ulong *)(lVar2 + 0x60) = CONCAT44(uVar3,uVar3);
  *(int *)(lVar2 + 0x68) = (int)(long)*(float *)(lVar2 + 0x2c);
  *(undefined2 *)(lVar2 + 0x6c) = 0x401;
  return;
}



/* WebpLoader::open(std::__cxx11::string const&) */

undefined8 __thiscall WebpLoader::open(WebpLoader *this,string *param_1)

{
  int iVar1;
  FILE *__stream;
  long lVar2;
  void *__ptr;
  size_t sVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = fopen64(*(char **)param_1,"rb");
  if (__stream == (FILE *)0x0) {
    uVar4 = 0;
    goto LAB_001000bb;
  }
  iVar1 = fseek(__stream,0,2);
  if (iVar1 < 0) {
LAB_001000b1:
    uVar4 = 0;
  }
  else {
    lVar2 = ftell(__stream);
    *(long *)(this + 0xf0) = lVar2;
    if (lVar2 == 0) goto LAB_001000b1;
    iVar1 = fseek(__stream,0,0);
    if (iVar1 != 0) goto LAB_001000b1;
    sVar3 = *(size_t *)(this + 0xf0);
    __ptr = malloc(sVar3);
    *(void **)(this + 0xe8) = __ptr;
    if (__ptr == (void *)0x0) goto LAB_001000b1;
    this[0xf8] = (WebpLoader)0x1;
    sVar3 = fread(__ptr,sVar3,1,__stream);
    if (sVar3 == 0) goto LAB_001000b1;
    iVar1 = WebPGetInfo(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0),&local_28,
                        &local_24);
    if (iVar1 == 0) goto LAB_001000b1;
    *(ulong *)(this + 0x28) = CONCAT44((float)local_24,(float)local_28);
    uVar4 = 1;
  }
  fclose(__stream);
LAB_001000bb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebpLoader::open(char const*, unsigned int, bool) */

undefined8 __thiscall WebpLoader::open(WebpLoader *this,char *param_1,uint param_2,bool param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong __size;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  long local_30;
  
  __size = (ulong)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3) {
    pvVar3 = malloc(__size);
    *(void **)(this + 0xe8) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      param_1 = (char *)__memcpy_chk(pvVar3,param_1,__size,__size);
      goto LAB_001001b4;
    }
  }
  else {
    *(char **)(this + 0xe8) = param_1;
LAB_001001b4:
    this[0xf8] = (WebpLoader)param_3;
    iVar1 = WebPGetInfo(param_1,__size,&local_38,&local_34);
    if (iVar1 != 0) {
      this[0x6c] = (WebpLoader)0x1;
      uVar2 = 1;
      *(ulong *)(this + 0xf0) = __size;
      *(ulong *)(this + 0x28) = CONCAT44((float)local_34,(float)local_38);
      goto LAB_001001f8;
    }
  }
  uVar2 = 0;
LAB_001001f8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebpLoader::read() */

WebpLoader __thiscall WebpLoader::read(WebpLoader *this)

{
  WebpLoader WVar1;
  
  WVar1 = this[0x26];
  if (WVar1 != (WebpLoader)0x0) {
    return (WebpLoader)0x1;
  }
  this[0x26] = (WebpLoader)0x1;
  if (((*(long *)(this + 0xe8) != 0) && (*(float *)(this + 0x28) != 0.0)) &&
     (*(float *)(this + 0x2c) != 0.0)) {
    tvg::TaskScheduler::request((Task *)(this + 0x70));
    return (WebpLoader)0x1;
  }
  return WVar1;
}



/* WebpLoader::~WebpLoader() */

void __thiscall WebpLoader::~WebpLoader(WebpLoader *this)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__WebpLoader_00100910;
  *(undefined **)(this + 0x70) = &DAT_00100980;
  if (this[0xd1] != (WebpLoader)0x0) {
    __mutex = (pthread_mutex_t *)(this + 0x78);
    uVar2 = pthread_mutex_lock(__mutex);
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      std::__throw_system_error(uVar2);
      ~WebpLoader((WebpLoader *)(uVar3 - 0x70));
      return;
    }
    if (this[0xd0] == (WebpLoader)0x0) {
      do {
        std::condition_variable::wait((unique_lock *)(this + 0xa0));
      } while (this[0xd0] == (WebpLoader)0x0);
      this[0xd1] = (WebpLoader)0x0;
    }
    else {
      this[0xd1] = (WebpLoader)0x0;
    }
    if (__mutex != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(__mutex);
    }
  }
  if (this[0xf8] != (WebpLoader)0x0) {
    free(*(void **)(this + 0xe8));
  }
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf8] = (WebpLoader)0x0;
  WebPFree(*(undefined8 *)(this + 0x30));
  *(undefined **)(this + 0x70) = &DAT_00100880;
  std::condition_variable::~condition_variable((condition_variable *)(this + 0xa0));
  if (this[0x27] == (WebpLoader)0x0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    free(*(void **)(this + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* non-virtual thunk to WebpLoader::~WebpLoader() */

void __thiscall WebpLoader::~WebpLoader(WebpLoader *this)

{
  ~WebpLoader(this + -0x70);
  return;
}



/* WebpLoader::~WebpLoader() */

void __thiscall WebpLoader::~WebpLoader(WebpLoader *this)

{
  ~WebpLoader(this);
  operator_delete(this,0x100);
  return;
}



/* non-virtual thunk to WebpLoader::~WebpLoader() */

void __thiscall WebpLoader::~WebpLoader(WebpLoader *this)

{
  ~WebpLoader(this + -0x70);
  operator_delete(this + -0x70,0x100);
  return;
}



/* WebpLoader::bitmap() */

WebpLoader * __thiscall WebpLoader::bitmap(WebpLoader *this)

{
  float fVar1;
  long lVar2;
  uint uVar3;
  WebpLoader *pWVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined4 uVar7;
  pthread_mutex_t *__mutex;
  undefined1 uVar8;
  char cVar9;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xd1] != (WebpLoader)0x0) {
    __mutex = (pthread_mutex_t *)(this + 0x78);
    uVar8 = 0;
    uVar3 = pthread_mutex_lock(__mutex);
    if (uVar3 != 0) {
      uVar6 = (ulong)uVar3;
      std::__throw_system_error(uVar3);
      uVar5 = WebPDecodeBGRA(*(undefined8 *)(uVar6 + 0x78),*(undefined8 *)(uVar6 + 0x80),0,0,in_R8,
                             in_R9,this,__mutex,uVar8);
      *(undefined1 *)(uVar6 - 2) = 0;
      *(undefined8 *)(uVar6 - 0x40) = uVar5;
      fVar1 = *(float *)(uVar6 - 0x44);
      uVar7 = (undefined4)(long)*(float *)(uVar6 - 0x48);
      *(ulong *)(uVar6 - 0x10) = CONCAT44(uVar7,uVar7);
      *(int *)(uVar6 - 8) = (int)(long)fVar1;
      *(undefined2 *)(uVar6 - 4) = 0x401;
      return (WebpLoader *)0x401;
    }
    cVar9 = '\x01';
    if (this[0xd0] == (WebpLoader)0x0) {
      do {
        std::condition_variable::wait((unique_lock *)(this + 0xa0));
      } while (this[0xd0] == (WebpLoader)0x0);
      this[0xd1] = (WebpLoader)0x0;
      if (cVar9 == '\0') goto LAB_001004b8;
    }
    else {
      this[0xd1] = (WebpLoader)0x0;
    }
    if (__mutex != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(__mutex);
    }
  }
LAB_001004b8:
  pWVar4 = *(WebpLoader **)(this + 0x30);
  if (*(WebpLoader **)(this + 0x30) != (WebpLoader *)0x0) {
    pWVar4 = this + 0x30;
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pWVar4;
}



/* non-virtual thunk to WebpLoader::run(unsigned int) */

void __thiscall WebpLoader::run(WebpLoader *this,uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = WebPDecodeBGRA(*(undefined8 *)(this + 0x78),*(undefined8 *)(this + 0x80),0,0);
  this[-2] = (WebpLoader)0x0;
  *(undefined8 *)(this + -0x40) = uVar1;
  *(ulong *)(this + -0x10) =
       CONCAT44((int)(long)*(float *)(this + -0x48),(int)(long)*(float *)(this + -0x48));
  *(int *)(this + -8) = (int)(long)*(float *)(this + -0x44);
  *(undefined2 *)(this + -4) = 0x401;
  return;
}



/* WebpLoader::WebpLoader() */

void __thiscall WebpLoader::WebpLoader(WebpLoader *this)

{
  *(undefined ***)this = &PTR__ImageLoader_001008a8;
  *(undefined2 *)(this + 0x6c) = 5;
  *(undefined **)(this + 0x70) = &DAT_00100880;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x6e] = (WebpLoader)0x0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0xa0));
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR__WebpLoader_00100910;
  *(undefined2 *)(this + 0xd0) = 1;
  *(undefined **)(this + 0x70) = &DAT_00100980;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf8] = (WebpLoader)0x0;
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


