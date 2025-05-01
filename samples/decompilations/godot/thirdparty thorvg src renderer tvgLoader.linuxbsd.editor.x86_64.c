
/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */

void std::__cxx11::string::_M_construct<char_const*>
               (ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00100114;
    }
    if (__n == 0) goto LAB_00100114;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100114:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HASH_KEY(char const*) */

char * HASH_KEY(char *param_1)

{
  return param_1;
}



/* LoaderMgr::init() */

undefined8 LoaderMgr::init(void)

{
  return 1;
}



/* LoaderMgr::term() */

undefined8 LoaderMgr::term(void)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  
  plVar4 = _activeLoaders;
  if (_activeLoaders != (long *)0x0) {
    do {
      if ((int)plVar4[4] != 6) {
        return 1;
      }
      if (*(code **)(*plVar4 + 0x38) == LoadModule::close) {
        cVar3 = '\x01';
        if (*(short *)((long)plVar4 + 0x24) != 0) {
          cVar3 = '\0';
          *(short *)((long)plVar4 + 0x24) = *(short *)((long)plVar4 + 0x24) + -1;
        }
      }
      else {
        cVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      lVar1 = plVar4[1];
      plVar2 = (long *)plVar4[2];
      if (lVar1 != 0) {
        *(long **)(lVar1 + 0x10) = plVar2;
      }
      if (plVar2 != (long *)0x0) {
        plVar2[1] = lVar1;
      }
      if (plVar4 == _activeLoaders) {
        _activeLoaders = plVar2;
      }
      if (plVar4 == DAT_001011e8) {
        DAT_001011e8 = (long *)plVar4[1];
      }
      if (cVar3 != '\0') {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      plVar4 = plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return 1;
}



/* LoaderMgr::retrieve(LoadModule*) */

undefined8 LoaderMgr::retrieve(LoadModule *param_1)

{
  long lVar1;
  LoadModule *pLVar2;
  char cVar3;
  int iVar4;
  undefined1 *__mutex;
  
  if (param_1 == (LoadModule *)0x0) {
    return 0;
  }
  if (*(code **)(*(long *)param_1 + 0x38) == LoadModule::close) {
    if (*(short *)(param_1 + 0x24) != 0) {
      *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + -1;
      return 1;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)param_1 + 0x38))();
    if (cVar3 == '\0') {
      return 1;
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_001005b5;
  iVar4 = tvg::TaskScheduler::threads();
  __mutex = (undefined1 *)0x0;
  if (iVar4 == 0) {
LAB_001005e3:
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    pLVar2 = *(LoadModule **)(param_1 + 0x10);
    if (pLVar2 != (LoadModule *)0x0) {
      *(long *)(pLVar2 + 8) = lVar1;
    }
    if (param_1 == _activeLoaders) {
      _activeLoaders = pLVar2;
    }
    if (param_1 == DAT_001011e8) goto LAB_00100650;
  }
  else {
    __mutex = key;
    iVar4 = pthread_mutex_lock((pthread_mutex_t *)key);
    if (iVar4 == 0) goto LAB_001005e3;
    std::__throw_system_error(iVar4);
LAB_00100650:
    DAT_001011e8 = *(LoadModule **)(param_1 + 8);
  }
  iVar4 = tvg::TaskScheduler::threads();
  if (iVar4 != 0) {
    pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  }
LAB_001005b5:
  (**(code **)(*(long *)param_1 + 8))(param_1);
  return 1;
}



/* LoaderMgr::loader(std::__cxx11::string const&, bool*) */

PngLoader * LoaderMgr::loader(string *param_1,bool *param_2)

{
  bool bVar1;
  long *__s1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  PngLoader *pPVar6;
  char *pcVar7;
  PngLoader *pPVar8;
  ulong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  code *pcVar12;
  code *__s1_00;
  long in_FS_OFFSET;
  PngLoader *local_a0;
  PngLoader *local_90;
  long *local_88;
  ulong local_80;
  long local_78 [2];
  code *local_68;
  PngLoader *local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = false;
  lVar4 = std::__cxx11::string::find_last_of((char *)param_1,0x1012bb,0xffffffffffffffff);
  uVar9 = *(ulong *)(param_1 + 8);
  uVar5 = lVar4 + 1;
  if (uVar9 < uVar5) {
LAB_00100d52:
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",uVar5
               ,uVar9);
    goto LAB_00100d6d;
  }
  local_88 = local_78;
  std::__cxx11::string::_M_construct<char_const*>
            (&local_88,*(long *)param_1 + uVar5,uVar9 + *(long *)param_1);
  __s1 = local_88;
  if (local_80 < 4) {
    if (local_80 != 0) {
      iVar3 = memcmp(local_88,&_LC1,local_80);
      if ((iVar3 == 0) && (bVar1 = false, (int)local_80 == 3)) goto LAB_001007c1;
LAB_00100772:
      iVar3 = memcmp(__s1,&_LC12,local_80);
      if ((iVar3 == 0) && ((int)local_80 == 4)) {
        bVar1 = false;
        goto LAB_001007c1;
      }
    }
  }
  else if (((((short)*local_88 != 0x7673) || (*(char *)((long)local_88 + 2) != 'g')) ||
           (((long)(local_80 - 3) < 0x80000000 && (-0x80000001 < (long)(local_80 - 3))))) &&
          (local_80 == 4)) goto LAB_00100772;
  pPVar6 = (PngLoader *)_findFromCache(param_1);
  if (pPVar6 != (PngLoader *)0x0) {
LAB_00100718:
    if (local_88 != local_78) {
      operator_delete(local_88,local_78[0] + 1);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return pPVar6;
    }
LAB_00100d6d:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  bVar1 = true;
LAB_001007c1:
  lVar4 = std::__cxx11::string::find_last_of((char *)param_1,0x1012bb,0xffffffffffffffff);
  uVar9 = *(ulong *)(param_1 + 8);
  uVar5 = lVar4 + 1;
  if (uVar5 <= uVar9) {
    pcVar12 = (code *)local_58;
    local_68 = pcVar12;
    std::__cxx11::string::_M_construct<char_const*>
              (&local_68,*(long *)param_1 + uVar5,uVar9 + *(long *)param_1);
    __s1_00 = local_68;
    puVar10 = param_1;
    if ((PngLoader *)0x3 < local_60) {
      if ((*(short *)local_68 == 0x7674) && (local_68[2] == (code)0x67)) {
        if (0x7fffffff < (long)(local_60 + -3)) goto LAB_00100a4a;
        if ((long)(local_60 + -3) < -0x80000000) goto LAB_00100a4a;
      }
      if (*(short *)local_68 == 0x7673) goto LAB_00100be8;
      goto LAB_00100a40;
    }
    if (local_60 == (PngLoader *)0x0) goto LAB_00100982;
    iVar3 = memcmp(local_68,&_LC0,(size_t)local_60);
    if ((iVar3 == 0) && ((int)local_60 == 3)) goto LAB_00100982;
    iVar3 = memcmp(__s1_00,&_LC1,(size_t)local_60);
    if ((iVar3 == 0) && ((int)local_60 == 3)) {
      pPVar6 = (PngLoader *)operator_new(0x1e8);
      SvgLoader::SvgLoader((SvgLoader *)pPVar6);
      if (local_68 != pcVar12) goto LAB_001008da;
      goto LAB_001008e8;
    }
    local_a0 = local_60;
    pPVar6 = local_60;
LAB_0010085c:
    iVar3 = memcmp(__s1_00,&_LC12,(size_t)pPVar6);
    local_90 = pPVar6;
    if ((iVar3 == 0) && ((int)pPVar6 == 4)) goto LAB_00100982;
LAB_0010087b:
    iVar3 = memcmp(__s1_00,&_LC7,(size_t)local_a0);
    if (iVar3 == 0) {
      local_60 = pPVar6 + -3;
      if (0x7fffffff < (long)local_60) goto LAB_00100c88;
      goto LAB_001008a7;
    }
LAB_00100ac0:
    if ((PngLoader *)0x3 < pPVar6) goto LAB_00100cea;
    iVar3 = memcmp(__s1_00,&_LC8,(size_t)local_a0);
    if (iVar3 != 0) goto LAB_00100ae6;
    pPVar8 = pPVar6 + -3;
LAB_00100c3a:
    if ((int)pPVar8 == 0) {
      pPVar6 = (PngLoader *)operator_new(0x100);
      JpgLoader::JpgLoader((JpgLoader *)pPVar6);
      if (local_68 != pcVar12) goto LAB_001008da;
      goto LAB_001008e8;
    }
LAB_00100c7e:
    if ((PngLoader *)0x4 < pPVar6) goto LAB_00100c88;
LAB_00100ae6:
    iVar3 = memcmp(__s1_00,&_LC13,(size_t)local_90);
    if ((iVar3 == 0) && ((int)pPVar6 == 4)) goto LAB_00100b0c;
LAB_00100982:
    if (__s1_00 == pcVar12) goto LAB_00100905;
LAB_0010098b:
    operator_delete(__s1_00,local_58[0] + 1);
LAB_00100905:
    pcVar12 = (code *)0x0;
    __s1_00 = LoadModule::open;
    do {
      pPVar6 = (PngLoader *)_find(pcVar12);
      if (pPVar6 != (PngLoader *)0x0) {
        lVar4 = *(long *)pPVar6;
        if (*(code **)(lVar4 + 0x10) != LoadModule::open) {
          cVar2 = (**(code **)(lVar4 + 0x10))(pPVar6,puVar10);
          if (cVar2 != '\0') goto LAB_001009b8;
          lVar4 = *(long *)pPVar6;
        }
        (**(code **)(lVar4 + 8))(pPVar6);
      }
      uVar11 = (int)pcVar12 + 1;
      pcVar12 = (code *)(ulong)uVar11;
      if (uVar11 == 7) {
        *param_2 = true;
        pPVar6 = (PngLoader *)0x0;
        goto LAB_00100718;
      }
    } while( true );
  }
  goto LAB_00100d52;
LAB_001009b8:
  do {
    if (!bVar1) goto LAB_00100718;
    pcVar7 = *(char **)puVar10;
    puVar10 = (undefined1 *)0x0;
    pcVar7 = strdup(pcVar7);
    pPVar6[0x27] = (PngLoader)0x1;
    *(char **)(pPVar6 + 0x18) = pcVar7;
    iVar3 = tvg::TaskScheduler::threads();
    if (iVar3 == 0) {
LAB_001009e3:
      if (DAT_001011e8 == (PngLoader *)0x0) {
        _activeLoaders = pPVar6;
        DAT_001011e8 = pPVar6;
        *(undefined1 (*) [16])(pPVar6 + 8) = (undefined1  [16])0x0;
      }
      else {
        *(PngLoader **)(DAT_001011e8 + 0x10) = pPVar6;
        *(PngLoader **)(pPVar6 + 8) = DAT_001011e8;
        *(long *)(pPVar6 + 0x10) = 0;
        DAT_001011e8 = pPVar6;
      }
      iVar3 = tvg::TaskScheduler::threads();
      if (iVar3 != 0) {
        pthread_mutex_unlock((pthread_mutex_t *)puVar10);
      }
      goto LAB_00100718;
    }
    puVar10 = key;
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)key);
    if (iVar3 == 0) goto LAB_001009e3;
    std::__throw_system_error(iVar3);
    local_60 = pPVar6;
LAB_00100be8:
    if ((__s1_00[2] != (code)0x67) ||
       (((long)(local_60 + -3) < 0x80000000 && (-0x80000001 < (long)(local_60 + -3))))) {
LAB_00100a40:
      if (local_60 == (PngLoader *)0x4) {
        local_a0 = (PngLoader *)0x3;
        pPVar6 = local_60;
        goto LAB_0010085c;
      }
    }
LAB_00100a4a:
    pPVar6 = local_60;
    if (((*(int *)__s1_00 != 0x6e6f736a) || (0x7fffffff < (long)(local_60 + -4))) ||
       (-0x80000001 < (long)(local_60 + -4))) {
      local_a0 = (PngLoader *)0x3;
      local_90 = (PngLoader *)0x4;
      goto LAB_0010087b;
    }
    if ((*(short *)__s1_00 == 0x6e70) && (__s1_00[2] == (code)0x67)) {
      local_a0 = (PngLoader *)0x3;
      local_60 = local_60 + -3;
      local_90 = (PngLoader *)0x4;
LAB_001008a7:
      if ((long)local_60 < -0x80000000) {
        iVar3 = memcmp(__s1_00,&_LC8,(size_t)local_a0);
        if (iVar3 == 0) goto LAB_00100c88;
        goto LAB_00100c7e;
      }
      if ((int)local_60 != 0) goto LAB_00100ac0;
      pPVar6 = (PngLoader *)operator_new(0x78);
      PngLoader::PngLoader(pPVar6);
      if (local_68 != pcVar12) goto LAB_001008da;
    }
    else {
      local_90 = (PngLoader *)0x4;
      local_a0 = (PngLoader *)0x3;
LAB_00100cea:
      iVar3 = memcmp(__s1_00,&_LC8,(size_t)local_a0);
      if (iVar3 != 0) goto LAB_00100c7e;
      pPVar8 = pPVar6 + -3;
      if (((long)pPVar8 < 0x80000000) && (-0x80000001 < (long)pPVar8)) goto LAB_00100c3a;
LAB_00100c88:
      iVar3 = memcmp(__s1_00,&_LC13,(size_t)local_90);
      if (iVar3 != 0) goto LAB_00100982;
      pPVar6 = pPVar6 + -4;
      if ((0x7fffffff < (long)pPVar6) || ((long)pPVar6 < -0x80000000)) goto LAB_0010098b;
      if ((int)pPVar6 != 0) goto LAB_00100982;
LAB_00100b0c:
      pPVar6 = (PngLoader *)operator_new(0x100);
      WebpLoader::WebpLoader((WebpLoader *)pPVar6);
      if (local_68 != pcVar12) {
LAB_001008da:
        operator_delete(local_68,local_58[0] + 1);
      }
    }
LAB_001008e8:
    lVar4 = *(long *)pPVar6;
    if (*(code **)(lVar4 + 0x10) == LoadModule::open) goto LAB_001008ff;
    cVar2 = (**(code **)(lVar4 + 0x10))(pPVar6,puVar10);
  } while (cVar2 != '\0');
  lVar4 = *(long *)pPVar6;
LAB_001008ff:
  (**(code **)(lVar4 + 8))(pPVar6);
  goto LAB_00100905;
}



/* LoaderMgr::retrieve(std::__cxx11::string const&) */

void LoaderMgr::retrieve(string *param_1)

{
  LoadModule *pLVar1;
  
  pLVar1 = (LoadModule *)_findFromCache(param_1);
  retrieve(pLVar1);
  return;
}



/* LoaderMgr::loader(char const*) */

long LoaderMgr::loader(char *param_1)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = _activeLoaders;
  if (_activeLoaders != 0) {
    do {
      if ((*(char *)(lVar2 + 0x27) != '\0') &&
         (pcVar1 = strstr(*(char **)(lVar2 + 0x18),param_1), pcVar1 != (char *)0x0)) {
        *(short *)(lVar2 + 0x24) = *(short *)(lVar2 + 0x24) + 1;
        return lVar2;
      }
      lVar2 = *(long *)(lVar2 + 0x10);
    } while (lVar2 != 0);
  }
  return lVar2;
}



/* LoaderMgr::loader(char const*, unsigned int, std::__cxx11::string const&, bool) */

long * LoaderMgr::loader(char *param_1,uint param_2,string *param_3,bool param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  string *extraout_RDX;
  undefined1 *__mutex;
  
  if (param_4) {
    lVar5 = *(long *)(param_3 + 8);
    bVar1 = false;
  }
  else {
    iVar3 = _convert(param_3);
    bVar1 = false;
    if (iVar3 != 5) {
      plVar6 = (long *)_findFromCache(param_1,(uint)param_3,extraout_RDX);
      if (plVar6 != (long *)0x0) {
        return plVar6;
      }
      bVar1 = true;
    }
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar5 != 0) {
    uVar4 = _convert(param_3);
    plVar6 = (long *)_find(uVar4);
    if (plVar6 != (long *)0x0) {
      lVar5 = *plVar6;
      if (*(code **)(lVar5 + 0x18) != LoadModule::open) {
        cVar2 = (**(code **)(lVar5 + 0x18))(plVar6,param_1,param_2,param_4);
        if (cVar2 != '\0') {
          if (!bVar1) {
            return plVar6;
          }
          plVar6[3] = (long)param_1;
          __mutex = (undefined1 *)0x0;
          iVar3 = tvg::TaskScheduler::threads();
          if (iVar3 != 0) {
            __mutex = key;
            iVar3 = pthread_mutex_lock((pthread_mutex_t *)key);
            if (iVar3 != 0) goto LAB_00100fcd;
          }
LAB_00100f46:
          if (DAT_001011e8 == (long *)0x0) {
            _activeLoaders = plVar6;
            DAT_001011e8 = plVar6;
            *(undefined1 (*) [16])(plVar6 + 1) = (undefined1  [16])0x0;
          }
          else {
            *(long **)((long)DAT_001011e8 + 0x10) = plVar6;
            plVar6[1] = (long)DAT_001011e8;
            plVar6[2] = 0;
            DAT_001011e8 = plVar6;
          }
          iVar3 = tvg::TaskScheduler::threads();
          if (iVar3 == 0) {
            return plVar6;
          }
          pthread_mutex_unlock((pthread_mutex_t *)__mutex);
          return plVar6;
        }
        lVar5 = *plVar6;
      }
      (**(code **)(lVar5 + 8))(plVar6);
    }
  }
  iVar3 = 0;
  do {
    plVar6 = (long *)_find(iVar3);
    if (plVar6 != (long *)0x0) {
      lVar5 = *plVar6;
      if (*(code **)(lVar5 + 0x18) != LoadModule::open) {
        cVar2 = (**(code **)(lVar5 + 0x18))(plVar6,param_1,param_2,param_4);
        if (cVar2 != '\0') {
          if (!bVar1) {
            return plVar6;
          }
          plVar6[3] = (long)param_1;
          __mutex = (undefined1 *)0x0;
          iVar3 = tvg::TaskScheduler::threads();
          if (iVar3 != 0) {
            while( true ) {
              __mutex = key;
              iVar3 = pthread_mutex_lock((pthread_mutex_t *)key);
              if (iVar3 == 0) break;
LAB_00100fcd:
              std::__throw_system_error(iVar3);
            }
          }
          goto LAB_00100f46;
        }
        lVar5 = *plVar6;
      }
      (**(code **)(lVar5 + 8))(plVar6);
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 7) {
      return (long *)0x0;
    }
  } while( true );
}



/* LoaderMgr::loader(unsigned int const*, unsigned int, unsigned int, bool) */

RawLoader * LoaderMgr::loader(uint *param_1,uint param_2,uint param_3,bool param_4)

{
  char cVar1;
  int iVar2;
  RawLoader *this;
  string *extraout_RDX;
  RawLoader *pRVar3;
  undefined1 *__mutex;
  long in_FS_OFFSET;
  long *local_58 [2];
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    this = (RawLoader *)operator_new(0x78);
    RawLoader::RawLoader(this);
    cVar1 = RawLoader::open((uint *)this,(uint)param_1,param_2,SUB41(param_3,0));
    pRVar3 = this;
    if (cVar1 != '\0') goto LAB_00101096;
LAB_001010f0:
    this = (RawLoader *)0x0;
    (**(code **)(*(long *)pRVar3 + 8))(pRVar3);
    goto LAB_00101096;
  }
  local_58[0] = local_48;
  std::__cxx11::string::_M_construct<char_const*>(local_58,&_LC6);
  this = (RawLoader *)_findFromCache((char *)param_1,(uint)local_58,extraout_RDX);
  if (local_58[0] != local_48) {
    operator_delete(local_58[0],local_48[0] + 1);
  }
  if (this != (RawLoader *)0x0) goto LAB_00101096;
  this = (RawLoader *)operator_new(0x78);
  RawLoader::RawLoader(this);
  cVar1 = RawLoader::open((uint *)this,(uint)param_1,param_2,SUB41(param_3,0));
  pRVar3 = this;
  if (cVar1 == '\0') goto LAB_001010f0;
  *(uint **)(this + 0x18) = param_1;
  iVar2 = tvg::TaskScheduler::threads();
  __mutex = (undefined1 *)0x0;
  if (iVar2 == 0) {
LAB_0010113a:
    if (DAT_001011e8 == (RawLoader *)0x0) {
      _activeLoaders = this;
      DAT_001011e8 = this;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    }
    else {
      *(RawLoader **)(DAT_001011e8 + 0x10) = this;
      *(RawLoader **)(this + 8) = DAT_001011e8;
      DAT_001011e8 = pRVar3;
      *(undefined8 *)(this + 0x10) = 0;
    }
    iVar2 = tvg::TaskScheduler::threads();
    if (iVar2 == 0) goto LAB_00101096;
  }
  else {
    __mutex = key;
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)key);
    if (iVar2 == 0) goto LAB_0010113a;
    std::__throw_system_error(iVar2);
  }
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
LAB_00101096:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* LoaderMgr::loader(char const*, char const*, unsigned int, std::__cxx11::string const&, bool) */

undefined8 LoaderMgr::loader(char *param_1,char *param_2,uint param_3,string *param_4,bool param_5)

{
  return 0;
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


