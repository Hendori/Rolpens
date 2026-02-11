
/* JpgLoader::open(std::__cxx11::string const&) */

bool __thiscall JpgLoader::open(JpgLoader *this,string *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = jpgdHeader(*(char **)param_1,&local_18,&local_14);
  *(long *)(this + 0xe8) = lVar1;
  if (lVar1 != 0) {
    *(ulong *)(this + 0x28) = CONCAT44((float)local_14,(float)local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar1 != 0;
}



/* JpgLoader::open(char const*, unsigned int, bool) */

undefined8 __thiscall JpgLoader::open(JpgLoader *this,char *param_1,uint param_2,bool param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong __size;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3) {
    __size = (ulong)param_2;
    pvVar3 = malloc(__size);
    *(void **)(this + 0xf0) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      param_1 = (char *)__memcpy_chk(pvVar3,param_1,__size,__size);
      goto LAB_001000b7;
    }
  }
  else {
    *(char **)(this + 0xf0) = param_1;
LAB_001000b7:
    this[0xf8] = (JpgLoader)param_3;
    lVar1 = jpgdHeader(param_1,param_2,&local_38,&local_34);
    *(long *)(this + 0xe8) = lVar1;
    if (lVar1 != 0) {
      uVar2 = 1;
      *(ulong *)(this + 0x28) = CONCAT44((float)local_34,(float)local_38);
      goto LAB_001000f8;
    }
  }
  uVar2 = 0;
LAB_001000f8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JpgLoader::read() */

JpgLoader __thiscall JpgLoader::read(JpgLoader *this)

{
  JpgLoader JVar1;
  
  JVar1 = this[0x26];
  if (JVar1 != (JpgLoader)0x0) {
    return (JpgLoader)0x1;
  }
  this[0x26] = (JpgLoader)0x1;
  if (((*(long *)(this + 0xe8) != 0) && (*(float *)(this + 0x28) != 0.0)) &&
     (*(float *)(this + 0x2c) != 0.0)) {
    tvg::TaskScheduler::request((Task *)(this + 0x70));
    return (JpgLoader)0x1;
  }
  return JVar1;
}



/* JpgLoader::close() */

long __thiscall JpgLoader::close(JpgLoader *this)

{
  pthread_mutex_t *ppVar1;
  float fVar2;
  jpeg_decoder *pjVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_RAX;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined4 uVar9;
  
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(short *)(this + 0x24) == 0) {
    if (this[0xd1] != (JpgLoader)0x0) {
      ppVar1 = (pthread_mutex_t *)(this + 0x78);
      uVar4 = pthread_mutex_lock(ppVar1);
      if (uVar4 != 0) {
        uVar8 = (ulong)uVar4;
        std::__throw_system_error(uVar4);
        lVar7 = *(long *)(in_FS_OFFSET + 0x28);
        if (*(char *)(uVar8 + 0xd1) != '\0') {
          ppVar1 = (pthread_mutex_t *)(uVar8 + 0x78);
          uVar4 = pthread_mutex_lock(ppVar1);
          if (uVar4 != 0) {
            uVar8 = (ulong)uVar4;
            std::__throw_system_error(uVar4);
            uVar6 = jpgdDecompress(*(jpeg_decoder **)(uVar8 + 0x78));
            *(undefined1 *)(uVar8 - 2) = 1;
            pjVar3 = *(jpeg_decoder **)(uVar8 + 0x78);
            *(undefined8 *)(uVar8 - 0x40) = uVar6;
            fVar2 = *(float *)(uVar8 - 0x44);
            uVar9 = (undefined4)(long)*(float *)(uVar8 - 0x48);
            *(ulong *)(uVar8 - 0x10) = CONCAT44(uVar9,uVar9);
            *(int *)(uVar8 - 8) = (int)(long)fVar2;
            *(undefined2 *)(uVar8 - 4) = 0x401;
            lVar7 = jpgdDelete(pjVar3);
            if (*(char *)(uVar8 + 0x88) != '\0') {
              free(*(void **)(uVar8 + 0x80));
              lVar7 = extraout_RAX;
            }
            *(undefined1 *)(uVar8 + 0x88) = 0;
            *(undefined1 (*) [16])(uVar8 + 0x78) = (undefined1  [16])0x0;
            return lVar7;
          }
          if (*(char *)(uVar8 + 0xd0) == '\0') {
            do {
              std::condition_variable::wait((unique_lock *)(uVar8 + 0xa0));
            } while (*(char *)(uVar8 + 0xd0) == '\0');
            *(undefined1 *)(uVar8 + 0xd1) = 0;
          }
          else {
            *(undefined1 *)(uVar8 + 0xd1) = 0;
          }
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            pthread_mutex_unlock(ppVar1);
          }
        }
        lVar5 = *(long *)(uVar8 + 0x30);
        if (*(long *)(uVar8 + 0x30) != 0) {
          lVar5 = uVar8 + 0x30;
        }
        if (lVar7 == *(long *)(in_FS_OFFSET + 0x28)) {
          return lVar5;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (this[0xd0] == (JpgLoader)0x0) {
        do {
          std::condition_variable::wait((unique_lock *)(this + 0xa0));
        } while (this[0xd0] == (JpgLoader)0x0);
        this[0xd1] = (JpgLoader)0x0;
      }
      else {
        this[0xd1] = (JpgLoader)0x0;
      }
      if (ppVar1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(ppVar1);
      }
    }
    lVar5 = 1;
  }
  else {
    *(short *)(this + 0x24) = *(short *)(this + 0x24) + -1;
    lVar5 = 0;
  }
  if (lVar7 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JpgLoader::bitmap() */

JpgLoader * __thiscall JpgLoader::bitmap(JpgLoader *this)

{
  pthread_mutex_t *__mutex;
  float fVar1;
  long lVar2;
  jpeg_decoder *pjVar3;
  uint uVar4;
  undefined8 uVar5;
  JpgLoader *pJVar6;
  JpgLoader *extraout_RAX;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined4 uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xd1] != (JpgLoader)0x0) {
    __mutex = (pthread_mutex_t *)(this + 0x78);
    uVar4 = pthread_mutex_lock(__mutex);
    if (uVar4 != 0) {
      uVar7 = (ulong)uVar4;
      std::__throw_system_error(uVar4);
      uVar5 = jpgdDecompress(*(jpeg_decoder **)(uVar7 + 0x78));
      *(undefined1 *)(uVar7 - 2) = 1;
      pjVar3 = *(jpeg_decoder **)(uVar7 + 0x78);
      *(undefined8 *)(uVar7 - 0x40) = uVar5;
      fVar1 = *(float *)(uVar7 - 0x44);
      uVar8 = (undefined4)(long)*(float *)(uVar7 - 0x48);
      *(ulong *)(uVar7 - 0x10) = CONCAT44(uVar8,uVar8);
      *(int *)(uVar7 - 8) = (int)(long)fVar1;
      *(undefined2 *)(uVar7 - 4) = 0x401;
      pJVar6 = (JpgLoader *)jpgdDelete(pjVar3);
      if (*(char *)(uVar7 + 0x88) != '\0') {
        free(*(void **)(uVar7 + 0x80));
        pJVar6 = extraout_RAX;
      }
      *(undefined1 *)(uVar7 + 0x88) = 0;
      *(undefined1 (*) [16])(uVar7 + 0x78) = (undefined1  [16])0x0;
      return pJVar6;
    }
    if (this[0xd0] == (JpgLoader)0x0) {
      do {
        std::condition_variable::wait((unique_lock *)(this + 0xa0));
      } while (this[0xd0] == (JpgLoader)0x0);
      this[0xd1] = (JpgLoader)0x0;
    }
    else {
      this[0xd1] = (JpgLoader)0x0;
    }
    if (__mutex != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(__mutex);
    }
  }
  pJVar6 = *(JpgLoader **)(this + 0x30);
  if (*(JpgLoader **)(this + 0x30) != (JpgLoader *)0x0) {
    pJVar6 = this + 0x30;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pJVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* non-virtual thunk to JpgLoader::run(unsigned int) */

void __thiscall JpgLoader::run(JpgLoader *this,uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = jpgdDecompress(*(jpeg_decoder **)(this + 0x78));
  this[-2] = (JpgLoader)0x1;
  *(undefined8 *)(this + -0x40) = uVar1;
  *(ulong *)(this + -0x10) =
       CONCAT44((int)(long)*(float *)(this + -0x48),(int)(long)*(float *)(this + -0x48));
  *(int *)(this + -8) = (int)(long)*(float *)(this + -0x44);
  *(undefined2 *)(this + -4) = 0x401;
  jpgdDelete(*(jpeg_decoder **)(this + 0x78));
  if (this[0x88] != (JpgLoader)0x0) {
    free(*(void **)(this + 0x80));
  }
  this[0x88] = (JpgLoader)0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  return;
}



/* JpgLoader::~JpgLoader() */

void __thiscall JpgLoader::~JpgLoader(JpgLoader *this)

{
  *(undefined ***)this = &PTR__JpgLoader_001008e8;
  *(undefined ***)(this + 0x70) = &PTR__JpgLoader_00100958;
  jpgdDelete(*(jpeg_decoder **)(this + 0xe8));
  if (this[0xf8] != (JpgLoader)0x0) {
    free(*(void **)(this + 0xf0));
  }
  this[0xf8] = (JpgLoader)0x0;
  *(undefined1 (*) [16])(this + 0xe8) = (undefined1  [16])0x0;
  free(*(void **)(this + 0x30));
  *(undefined **)(this + 0x70) = &DAT_00100858;
  std::condition_variable::~condition_variable((condition_variable *)(this + 0xa0));
  if (this[0x27] == (JpgLoader)0x0) {
    return;
  }
  free(*(void **)(this + 0x18));
  return;
}



/* non-virtual thunk to JpgLoader::~JpgLoader() */

void __thiscall JpgLoader::~JpgLoader(JpgLoader *this)

{
  ~JpgLoader(this + -0x70);
  return;
}



/* JpgLoader::~JpgLoader() */

void __thiscall JpgLoader::~JpgLoader(JpgLoader *this)

{
  ~JpgLoader(this);
  operator_delete(this,0x100);
  return;
}



/* non-virtual thunk to JpgLoader::~JpgLoader() */

void __thiscall JpgLoader::~JpgLoader(JpgLoader *this)

{
  ~JpgLoader(this + -0x70);
  operator_delete(this + -0x70,0x100);
  return;
}



/* JpgLoader::run(unsigned int) */

void JpgLoader::run(uint param_1)

{
  undefined8 uVar1;
  undefined4 in_register_0000003c;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = CONCAT44(in_register_0000003c,param_1);
  uVar1 = jpgdDecompress(*(jpeg_decoder **)(lVar2 + 0xe8));
  *(undefined1 *)(lVar2 + 0x6e) = 1;
  *(undefined8 *)(lVar2 + 0x30) = uVar1;
  uVar3 = (undefined4)(long)*(float *)(lVar2 + 0x28);
  *(ulong *)(lVar2 + 0x60) = CONCAT44(uVar3,uVar3);
  *(int *)(lVar2 + 0x68) = (int)(long)*(float *)(lVar2 + 0x2c);
  *(undefined2 *)(lVar2 + 0x6c) = 0x401;
  jpgdDelete(*(jpeg_decoder **)(lVar2 + 0xe8));
  if (*(char *)(lVar2 + 0xf8) != '\0') {
    free(*(void **)(lVar2 + 0xf0));
  }
  *(undefined1 *)(lVar2 + 0xf8) = 0;
  *(undefined1 (*) [16])(lVar2 + 0xe8) = (undefined1  [16])0x0;
  return;
}



/* JpgLoader::clear() */

void __thiscall JpgLoader::clear(JpgLoader *this)

{
  jpgdDelete(*(jpeg_decoder **)(this + 0xe8));
  if (this[0xf8] != (JpgLoader)0x0) {
    free(*(void **)(this + 0xf0));
  }
  this[0xf8] = (JpgLoader)0x0;
  *(undefined1 (*) [16])(this + 0xe8) = (undefined1  [16])0x0;
  return;
}



/* JpgLoader::JpgLoader() */

void __thiscall JpgLoader::JpgLoader(JpgLoader *this)

{
  *(undefined ***)this = &PTR__ImageLoader_00100880;
  *(undefined2 *)(this + 0x6c) = 5;
  *(undefined **)(this + 0x70) = &DAT_00100858;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x6e] = (JpgLoader)0x0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0xa0));
  *(undefined ***)this = &PTR__JpgLoader_001008e8;
  *(undefined2 *)(this + 0xd0) = 1;
  *(undefined ***)(this + 0x70) = &PTR__JpgLoader_00100958;
  this[0xf8] = (JpgLoader)0x0;
  *(undefined1 (*) [16])(this + 0xe8) = (undefined1  [16])0x0;
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


