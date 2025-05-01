
/* embree::alignedMalloc(unsigned long, unsigned long) */

void * embree::alignedMalloc(ulong param_1,ulong param_2)

{
  int iVar1;
  void *pvVar2;
  void **ppvVar3;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  ppvVar3 = &local_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_18 = (void *)0x0;
  }
  else {
    if (param_2 == 1) {
      local_18 = malloc(param_1);
      ppvVar3 = (void **)param_1;
    }
    else {
      if ((param_2 - 2 & 0xfffffffffffffffd) == 0) {
        param_2 = 8;
      }
      iVar1 = posix_memalign(&local_18,param_2,param_1);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (local_18 == (void *)0x0) {
      pvVar2 = (void *)alignedMalloc((ulong)ppvVar3,param_2);
      return pvVar2;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* embree::alignedFree(void*) */

void embree::alignedFree(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}



/* embree::alignedUSMMalloc(unsigned long, unsigned long, embree::EmbreeUSMMode) */

void * embree::alignedUSMMalloc(size_t param_1,size_t param_2)

{
  int iVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_18 = (void *)0x0;
  }
  else {
    if (param_2 == 1) {
      local_18 = malloc(param_1);
    }
    else {
      if ((param_2 - 2 & 0xfffffffffffffffd) == 0) {
        param_2 = 8;
      }
      iVar1 = posix_memalign(&local_18,param_2,param_1);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (local_18 == (void *)0x0) {
      pvVar2 = (void *)alignedUSMMalloc();
      return pvVar2;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* embree::alignedUSMFree(void*) */

void embree::alignedUSMFree(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::os_init(bool, bool) */

char embree::os_init(bool param_1,bool param_2)

{
  long *plVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *__n;
  char cVar4;
  int iVar5;
  long lVar6;
  istream *piVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined *unaff_R12;
  code *unaff_R13;
  long in_FS_OFFSET;
  istream *local_4a0;
  string *local_498;
  char local_48d;
  undefined1 *local_470;
  undefined1 *local_460;
  undefined1 *local_458;
  undefined1 *local_450;
  undefined1 local_448;
  undefined7 uStack_447;
  long *local_438;
  long local_430;
  undefined1 local_428;
  undefined7 uStack_427;
  undefined1 *local_418;
  undefined8 local_410;
  undefined1 local_408;
  undefined7 uStack_407;
  istream *local_3f8;
  long local_3f0;
  istream local_3e8;
  undefined7 uStack_3e7;
  undefined *local_3d8 [2];
  code *local_3c8;
  code *local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  locale local_388 [8];
  undefined4 local_380;
  undefined1 **local_378;
  undefined1 *local_370;
  undefined1 *local_368 [2];
  code *local_358 [4];
  byte local_338;
  undefined8 local_280;
  undefined2 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  code *local_248 [2];
  code *local_238 [2];
  uint auStack_228 [10];
  locale local_200 [48];
  __basic_file<char> local_1d0 [120];
  undefined8 auStack_158 [2];
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  embree::MutexSys::lock();
  if (param_1) {
    local_4a0 = (istream *)local_248;
    std::ios_base::ios_base((ios_base *)local_148);
    local_148[0] = std::ios::init;
    local_68 = 0;
    local_248[0] = _init;
    local_70 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    *(undefined8 *)((long)local_248 + *(long *)(_init + -0x18)) = _vtable;
    local_248[1] = (code *)0x0;
    std::ios::init((streambuf *)(local_4a0 + *(long *)(local_248[0] + -0x18)));
    local_248[0] = std::ios::clear;
    local_148[0] = (code *)&std::streambuf::vtable;
    std::filebuf::filebuf((filebuf *)local_238);
    std::ios::init((streambuf *)local_148);
    lVar6 = std::filebuf::open((filebuf *)local_238,"/proc/meminfo",8);
    if (lVar6 == 0) {
      std::ios::clear(local_4a0 + *(long *)(local_248[0] + -0x18),
                      *(uint *)((long)auStack_228 + *(long *)(local_248[0] + -0x18)) | 4);
    }
    else {
      std::ios::clear(local_4a0 + *(long *)(local_248[0] + -0x18),0);
    }
    local_48d = std::__basic_file<char>::is_open();
    if (local_48d != '\0') {
      local_470 = &local_448;
      local_448 = 0;
      local_450 = (undefined1 *)0x0;
      plVar10 = *(long **)((long)auStack_158 + *(long *)(local_248[0] + -0x18));
      local_458 = local_470;
      if (plVar10 != (long *)0x0) {
        local_498 = (string *)&local_458;
        unaff_R12 = _vtable;
        unaff_R13 = _locale;
        goto LAB_00100390;
      }
LAB_001008be:
      std::__throw_bad_cast();
LAB_001008c8:
      std::ctype<char>::_M_widen_init();
      cVar4 = '\n';
      if (*(code **)(*plVar10 + 0x30) != std::ctype<char>::do_widen) {
        cVar4 = (**(code **)(*plVar10 + 0x30))(plVar10,10);
      }
      do {
        piVar7 = std::getline<char,std::char_traits<char>,std::allocator<char>>
                           (local_4a0,local_498,cVar4);
        if (((byte)piVar7[*(long *)(*(long *)piVar7 + -0x18) + 0x20] & 5) != 0) {
LAB_00100c8a:
          if (param_2) {
            plVar10 = &std::cout;
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)&std::cout,
                       "WARNING: Only 2MB huge pages supported. Huge page support cannot get enabled!"
                       ,0x4d);
            plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x102220);
            if (plVar1 == (long *)0x0) goto LAB_001008be;
            if ((char)plVar1[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
                (**(code **)(*plVar1 + 0x30))(plVar1,10);
              }
            }
            std::ostream::put('0');
            std::ostream::flush();
          }
          local_48d = '\0';
LAB_00100b12:
          huge_pages_enabled = local_48d;
          if (local_458 != local_470) {
            operator_delete(local_458,CONCAT71(uStack_447,local_448) + 1);
          }
          goto LAB_00100b3d;
        }
        std::ios_base::ios_base((ios_base *)local_358);
        local_358[0] = std::ios::init;
        local_280 = 0;
        local_278 = 0;
        local_270 = 0;
        local_268 = 0;
        local_260 = 0;
        local_258 = 0;
        local_3d8[0] = unaff_R12;
        *(undefined8 *)((long)local_3d8 + *(long *)(unaff_R12 + -0x18)) = _vtable;
        local_3d8[1] = (undefined *)0x0;
        std::ios::init((streambuf *)((istream *)local_3d8 + *(long *)(local_3d8[0] + -0x18)));
        local_3c8 = unaff_R13;
        *(undefined8 *)((long)&local_3c8 + *(long *)(unaff_R13 + -0x18)) = _vtable;
        std::ios::init((streambuf *)((long)&local_3c8 + *(long *)(local_3c8 + -0x18)));
        lVar6 = _getline<char,std::char_traits<char>,std::allocator<char>>;
        *(undefined8 *)
         ((long)local_3d8 +
         *(long *)(_getline<char,std::char_traits<char>,std::allocator<char>> + -0x18)) = __M_sync;
        local_3d8[0] = &std::__cxx11::stringbuf::vtable;
        local_358[0] = __isoc23_strtol;
        local_3c8 = std::locale::~locale;
        local_3c0 = (code *)&std::__cxx11::stringbuf::vtable;
        local_3b8 = 0;
        local_3b0 = 0;
        local_3a8 = 0;
        local_3a0 = 0;
        local_398 = 0;
        local_390 = 0;
        std::locale::locale(local_388);
        __n = local_450;
        puVar3 = local_458;
        local_3c0 = std::istream::ignore;
        local_380 = 0;
        local_378 = local_368;
        if ((local_458 == (undefined1 *)0x0) && (local_450 != (undefined1 *)0x0)) {
          std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_00100dcb:
          std::__throw_invalid_argument("stoi");
LAB_00100dd7:
          std::__throw_out_of_range("stoi");
          goto LAB_00100de3;
        }
        local_460 = local_450;
        if (local_450 < (undefined1 *)0x10) {
          if (local_450 == (undefined1 *)0x1) {
            local_368[0] = (undefined1 *)CONCAT71(local_368[0]._1_7_,*local_458);
          }
          else if (local_450 != (undefined1 *)0x0) goto LAB_00100c2c;
        }
        else {
          local_378 = (undefined1 **)
                      std::__cxx11::string::_M_create((ulong *)&local_378,(ulong)&local_460);
          local_368[0] = local_460;
LAB_00100c2c:
          memcpy(local_378,puVar3,(size_t)__n);
        }
        *(undefined1 *)((long)local_378 + (long)local_460) = 0;
        local_380 = 0x18;
        local_370 = local_460;
        std::__cxx11::stringbuf::_M_sync((char *)&local_3c0,(ulong)local_378,0);
        std::ios::init((streambuf *)local_358);
        while (((local_338 & 2) == 0 && (iVar5 = std::istream::peek(), iVar5 == 0x20))) {
          std::istream::ignore();
        }
        local_430 = 0;
        local_428 = 0;
        local_438 = (long *)&local_428;
        std::getline<char,std::char_traits<char>,std::allocator<char>>
                  ((istream *)local_3d8,(string *)&local_438,' ');
        while (((local_338 & 2) == 0 && (iVar5 = std::istream::peek(), iVar5 == 0x20))) {
          std::istream::ignore();
        }
        local_410 = 0;
        local_408 = 0;
        local_418 = &local_408;
        std::getline<char,std::char_traits<char>,std::allocator<char>>
                  ((istream *)local_3d8,(string *)&local_418,' ');
        while (((local_338 & 2) == 0 && (iVar5 = std::istream::peek(), iVar5 == 0x20))) {
          std::istream::ignore();
        }
        local_3f0 = 0;
        local_3e8 = (istream)0x0;
        local_3f8 = &local_3e8;
        std::getline<char,std::char_traits<char>,std::allocator<char>>
                  ((istream *)local_3d8,(string *)&local_3f8,' ');
        puVar3 = local_418;
        if (local_430 == 0xd) {
          if ((*local_438 == 0x6567617065677548) &&
             (*(long *)((long)local_438 + 5) == 0x3a657a6973656761)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((!bVar2) && (local_3f0 == 2)) && (*(short *)local_3f8 == 0x426b)) {
            piVar8 = __errno_location();
            iVar5 = *piVar8;
            *piVar8 = 0;
            local_498 = (string *)CONCAT44(local_498._4_4_,iVar5);
            lVar9 = __isoc23_strtol(puVar3,&local_460,10);
            if (puVar3 == local_460) goto LAB_00100dcb;
            if ((*piVar8 != 0x22) && (lVar9 + 0x80000000U >> 0x20 == 0)) {
              if (*piVar8 == 0) {
                *piVar8 = iVar5;
              }
              if (local_3f8 != &local_3e8) {
                operator_delete(local_3f8,CONCAT71(uStack_3e7,local_3e8) + 1);
              }
              if (local_418 != &local_408) {
                operator_delete(local_418,CONCAT71(uStack_407,local_408) + 1);
              }
              if (local_438 != (long *)&local_428) {
                operator_delete(local_438,CONCAT71(uStack_427,local_428) + 1);
              }
              local_3d8[0] = &std::__cxx11::stringbuf::vtable;
              local_358[0] = __isoc23_strtol;
              local_3c8 = std::locale::~locale;
              local_3c0 = std::istream::ignore;
              if (local_378 != local_368) {
                operator_delete(local_378,(ulong)(local_368[0] + 1));
              }
              local_3c0 = (code *)&std::__cxx11::stringbuf::vtable;
              std::locale::~locale(local_388);
              *(undefined8 *)((long)local_3d8 + *(long *)(lVar6 + -0x18)) = __M_sync;
              local_3c8 = unaff_R13;
              *(undefined8 *)((long)&local_3c8 + *(long *)(unaff_R13 + -0x18)) = _vtable;
              local_3d8[0] = unaff_R12;
              *(undefined8 *)((long)local_3d8 + *(long *)(unaff_R12 + -0x18)) = _vtable;
              local_3d8[1] = (undefined *)0x0;
              local_358[0] = std::ios::init;
              std::ios_base::~ios_base((ios_base *)local_358);
              local_4a0 = &local_3e8;
              if (((uint)lVar9 & 0x3fffff) != 0x800) goto LAB_00100c8a;
              goto LAB_00100b12;
            }
            goto LAB_00100dd7;
          }
        }
        if (local_3f8 != &local_3e8) {
          operator_delete(local_3f8,CONCAT71(uStack_3e7,local_3e8) + 1);
        }
        if (local_418 != &local_408) {
          operator_delete(local_418,CONCAT71(uStack_407,local_408) + 1);
        }
        if (local_438 != (long *)&local_428) {
          operator_delete(local_438,CONCAT71(uStack_427,local_428) + 1);
        }
        local_3d8[0] = &std::__cxx11::stringbuf::vtable;
        local_358[0] = __isoc23_strtol;
        local_3c8 = std::locale::~locale;
        local_3c0 = std::istream::ignore;
        if (local_378 != local_368) {
          operator_delete(local_378,(ulong)(local_368[0] + 1));
        }
        local_3c0 = (code *)&std::__cxx11::stringbuf::vtable;
        std::locale::~locale(local_388);
        *(undefined8 *)((long)local_3d8 + *(long *)(lVar6 + -0x18)) = __M_sync;
        local_3c8 = unaff_R13;
        *(undefined8 *)((long)&local_3c8 + *(long *)(unaff_R13 + -0x18)) = _vtable;
        local_3d8[0] = unaff_R12;
        *(undefined8 *)((long)local_3d8 + *(long *)(unaff_R12 + -0x18)) = _vtable;
        local_358[0] = std::ios::init;
        local_3d8[1] = (undefined *)0x0;
        std::ios_base::~ios_base((ios_base *)local_358);
        plVar10 = *(long **)((long)auStack_158 + *(long *)(local_248[0] + -0x18));
        if (plVar10 == (long *)0x0) goto LAB_001008be;
LAB_00100390:
        if ((char)plVar10[7] == '\0') goto LAB_001008c8;
        cVar4 = *(char *)((long)plVar10 + 0x43);
      } while( true );
    }
    if (param_2) {
      plVar10 = &std::cout;
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,
                 "WARNING: Could not open /proc/meminfo. Huge page support cannot get enabled!",0x4c
                );
      plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x102220);
      if (plVar1 == (long *)0x0) goto LAB_001008be;
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put('0');
      std::ostream::flush();
    }
    huge_pages_enabled = '\0';
LAB_00100b3d:
    local_248[0] = std::ios::clear;
    local_148[0] = (code *)&std::streambuf::vtable;
    local_238[0] = std::__basic_file<char>::~__basic_file;
    std::filebuf::close();
    std::__basic_file<char>::~__basic_file(local_1d0);
    local_238[0] = (code *)&std::__cxx11::stringbuf::vtable;
    std::locale::~locale(local_200);
    local_248[0] = _init;
    *(undefined8 *)((long)local_248 + *(long *)(_init + -0x18)) = _vtable;
    local_248[1] = (code *)0x0;
    local_148[0] = std::ios::init;
    std::ios_base::~ios_base((ios_base *)local_148);
  }
  else {
    huge_pages_enabled = '\0';
    local_48d = '\x01';
  }
  embree::MutexSys::unlock();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_48d;
  }
LAB_00100de3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::os_malloc(unsigned long, bool&) */

void * embree::os_malloc(ulong param_1,bool *param_2)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    *param_2 = false;
    return (void *)0x0;
  }
  if (((huge_pages_enabled != '\0') &&
      (((param_1 + 0x1fffff & 0xffffffffffe00000) - param_1) * 0x42 < param_1)) &&
     (pvVar1 = mmap64((void *)0x0,param_1,3,0x40022,-1,0), pvVar1 != (void *)0xffffffffffffffff)) {
    *param_2 = true;
    return pvVar1;
  }
  pvVar1 = mmap64((void *)0x0,param_1,3,0x22,-1,0);
  if (pvVar1 != (void *)0xffffffffffffffff) {
    *param_2 = false;
    madvise(pvVar1,param_1,0xe);
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::os_shrink(void*, unsigned long, unsigned long, bool) */

ulong embree::os_shrink(void *param_1,ulong param_2,ulong param_3,bool param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)(-(uint)!param_4 & 0x1ff000) - 0x200000;
  uVar3 = (-(ulong)!param_4 & 0xffffffffffe01000) + 0x1fffff + param_2 & uVar2;
  uVar2 = (-(ulong)!param_4 & 0xffffffffffe01000) + 0x1fffff + param_3 & uVar2;
  if (uVar2 <= uVar3) {
    return uVar2;
  }
  iVar1 = munmap((void *)((long)param_1 + uVar3),uVar2 - uVar3);
  if (iVar1 != -1) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::os_free(void*, unsigned long, bool) */

void embree::os_free(void *param_1,ulong param_2,bool param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = munmap(param_1,(-(ulong)!param_3 & 0xffffffffffe01000) + 0x1fffff + param_2 &
                         (ulong)(-(uint)!param_3 & 0x1ff000) - 0x200000);
  if (iVar1 != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::os_advise(void*, unsigned long) */

void embree::os_advise(void *param_1,ulong param_2)

{
  madvise(param_1,param_2,0xe);
  return;
}



/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
}



/* embree::alignedMalloc(unsigned long, unsigned long) [clone .cold] */

void embree::alignedMalloc(ulong param_1,ulong param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::alignedUSMMalloc(unsigned long, unsigned long, embree::EmbreeUSMMode) [clone .cold] */

void embree::alignedUSMMalloc(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::os_malloc(unsigned long, bool&) [clone .cold] */

void embree::os_malloc(ulong param_1,bool *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::os_shrink(void*, unsigned long, unsigned long, bool) [clone .cold] */

void embree::os_shrink(void *param_1,ulong param_2,ulong param_3,bool param_4)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::os_free(void*, unsigned long, bool) [clone .cold] */

void embree::os_free(void *param_1,ulong param_2,bool param_3)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::total_allocations */

void embree::_GLOBAL__sub_I_total_allocations(void)

{
  embree::MutexSys::MutexSys((MutexSys *)&os_init_mutex);
  __cxa_atexit(embree::MutexSys::~MutexSys,&os_init_mutex,&__dso_handle);
  return;
}


