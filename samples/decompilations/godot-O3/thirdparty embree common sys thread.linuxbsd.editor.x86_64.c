
/* embree::threadStartup(embree::ThreadStartupData*) */

undefined8 embree::threadStartup(ThreadStartupData *param_1)

{
  MXCSR = MXCSR | 0x8040;
  (**(code **)param_1)(*(undefined8 *)(param_1 + 8));
  if (param_1 != (ThreadStartupData *)0x0) {
    operator_delete(param_1,0x18);
  }
  return 0;
}



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
      goto LAB_00100084;
    }
    if (__n == 0) goto LAB_00100084;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100084:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::setAffinity(long) */

void embree::setAffinity(long param_1)

{
  pthread_t __th;
  long lVar1;
  cpu_set_t *pcVar2;
  long in_FS_OFFSET;
  cpu_set_t cStack_98;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = &cStack_98;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    pcVar2->__bits[0] = 0;
    pcVar2 = (cpu_set_t *)((long)pcVar2 + 8);
  }
  if ((ulong)param_1 < 0x400) {
    cStack_98.__bits[(ulong)param_1 >> 6] =
         cStack_98.__bits[(ulong)param_1 >> 6] | 1L << ((byte)param_1 & 0x3f);
  }
  __th = pthread_self();
  pthread_setaffinity_np(__th,0x80,&cStack_98);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::yield() */

void embree::yield(void)

{
  sched_yield();
  return;
}



/* embree::join(embree::opaque_thread_t*) */

void embree::join(opaque_thread_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_join(*(pthread_t *)param_1,(void **)0x0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1 != (opaque_thread_t *)0x0) {
    operator_delete(param_1,8);
    return;
  }
  return;
}



/* embree::destroyThread(embree::opaque_thread_t*) */

void embree::destroyThread(opaque_thread_t *param_1)

{
  pthread_cancel(*(pthread_t *)param_1);
  if (param_1 != (opaque_thread_t *)0x0) {
    operator_delete(param_1,8);
    return;
  }
  return;
}



/* embree::createTls() */

pthread_key_t * embree::createTls(void)

{
  int iVar1;
  pthread_key_t *ppVar2;
  
  ppVar2 = (pthread_key_t *)operator_new(4);
  iVar1 = pthread_key_create(ppVar2,(__destr_function *)0x0);
  if (iVar1 == 0) {
    return ppVar2;
  }
  if (ppVar2 != (pthread_key_t *)0x0) {
    operator_delete(ppVar2,4);
    ppVar2 = (pthread_key_t *)createTls();
    return ppVar2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::getTls(embree::opaque_tls_t*) */

void embree::getTls(opaque_tls_t *param_1)

{
  pthread_getspecific(*(pthread_key_t *)param_1);
  return;
}



/* embree::setTls(embree::opaque_tls_t*, void*) */

void embree::setTls(opaque_tls_t *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = pthread_setspecific(*(pthread_key_t *)param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::destroyTls(embree::opaque_tls_t*) */

void embree::destroyTls(opaque_tls_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_key_delete(*(pthread_key_t *)param_1);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1 != (opaque_tls_t *)0x0) {
    operator_delete(param_1,4);
    return;
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::mapThreadID(unsigned long) */

_func_void_void_ptr * embree::mapThreadID(ulong param_1)

{
  uint uVar1;
  undefined8 ******ppppppuVar2;
  __cpu_mask *p_Var3;
  bool bVar4;
  undefined1 auVar5 [16];
  __cpu_mask _Var6;
  __cpu_mask _Var7;
  int iVar8;
  _func_void_void_ptr *p_Var9;
  pthread_t __th;
  long lVar10;
  long *plVar11;
  _func_void_void_ptr *p_Var12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *__arg;
  int iVar15;
  uint uVar16;
  long lVar17;
  undefined8 *******pppppppuVar18;
  _func_void_void_ptr *p_Var19;
  long lVar20;
  undefined8 *******pppppppuVar21;
  long *plVar22;
  size_t __stacksize;
  ulong extraout_RDX;
  char *pcVar23;
  undefined8 *******pppppppuVar24;
  void *pvVar25;
  long *plVar26;
  undefined8 ******ppppppuVar27;
  cpu_set_t *pcVar28;
  char cVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  byte bVar33;
  pthread_attr_t pStack_530;
  cpu_set_t cStack_4f0;
  long lStack_468;
  istream *piStack_460;
  undefined8 *******pppppppuStack_458;
  ulong uStack_450;
  __cpu_mask _Stack_448;
  __cpu_mask _Stack_440;
  filebuf *local_438;
  ios_base *local_430;
  long *local_428;
  undefined8 *******local_420;
  undefined8 *******local_418;
  undefined8 *******local_410;
  undefined8 *******local_408;
  undefined8 *******local_400;
  ulong local_3f8;
  undefined8 *******local_3f0;
  undefined1 *local_3e8;
  _func_void_void_ptr *local_3e0;
  int local_3d4;
  long local_3d0;
  long *local_3c8;
  long local_3c0;
  long local_3b8 [2];
  undefined8 *******local_3a8;
  long local_3a0;
  undefined8 *******local_398 [2];
  undefined8 *******local_388;
  ulong local_380;
  undefined8 *******local_378 [2];
  undefined8 *******local_368;
  long local_360;
  undefined8 *******local_358 [3];
  ulong local_340;
  undefined8 ******local_338 [2];
  undefined1 local_328 [24];
  code *local_310;
  uint auStack_308 [12];
  locale local_2d8 [48];
  __basic_file<char> local_2a8 [136];
  code *local_220 [4];
  byte local_200;
  undefined8 local_148;
  undefined2 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  char cStack_58;
  char acStack_57 [23];
  long local_40;
  
  bVar33 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _Stack_440 = 0x1002e7;
  embree::MutexSys::lock();
  _Var7 = _vtable;
  _Var6 = _vtable;
  lVar17 = _ios_base;
  if (threadIDs == DAT_001014f8) {
    local_430 = (ios_base *)local_220;
    uVar32 = 0;
    local_3e8 = local_328 + 0x10;
    local_438 = (filebuf *)&local_310;
    local_3f0 = local_358 + 2;
    local_418 = local_338;
    local_400 = &local_388;
    local_420 = local_378;
    local_408 = &local_3a8;
    local_410 = local_398;
    local_3e0 = (_func_void_void_ptr *)param_1;
    do {
      _Stack_440 = 0x100453;
      std::ios_base::ios_base(local_430);
      local_328._0_8_ = _Var6;
      local_220[0] = (code *)&std::fstream::vtable;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0;
      local_120 = 0;
      *(undefined8 *)(local_328 + *(long *)(_Var6 - 0x18)) = _init;
      local_328._8_8_ = 0;
      _Stack_440 = 0x1004e8;
      std::ios::init((streambuf *)((istream *)local_328 + *(long *)(local_328._0_8_ - 0x18)));
      local_328._16_8_ = _Var7;
      *(undefined8 *)(local_328 + *(long *)(_Var7 - 0x18) + 0x10) = _filebuf;
      _Stack_440 = 0x10051e;
      std::ios::init((streambuf *)(local_3e8 + *(long *)(local_328._16_8_ - 0x18)));
      *(undefined8 *)(local_328 + *(long *)(lVar17 + -0x18)) = __M_construct;
      local_328._0_8_ = std::__cxx11::string::_M_append;
      local_220[0] = std::locale::~locale;
      local_328._16_8_ = std::istream::ignore;
      _Stack_440 = 0x10056c;
      std::filebuf::filebuf(local_438);
      _Stack_440 = 0x100579;
      std::ios::init((streambuf *)local_430);
      local_358[2] = local_418;
      _Stack_440 = 0x10059b;
      std::__cxx11::string::_M_construct<char_const*>(local_3f0,"/topology/thread_siblings_list");
      lVar10 = -((long)uVar32 >> 0x3f);
      uVar30 = -uVar32;
      if (0 < (long)uVar32) {
        uVar30 = uVar32;
      }
      cVar29 = (char)((long)uVar32 >> 0x3f);
      if (uVar30 < 10) {
        local_388 = local_420;
        _Stack_440 = 0x1012e2;
        local_428 = (long *)uVar30;
        std::__cxx11::string::_M_construct((ulong)local_400,'\x01' - cVar29);
        pcVar23 = (char *)(lVar10 + (long)local_388);
        plVar26 = local_428;
LAB_001007c2:
        cVar29 = (char)plVar26 + '0';
      }
      else {
        if (uVar30 < 100) {
          local_388 = local_420;
          _Stack_440 = 0x100cb1;
          local_428 = (long *)uVar30;
          std::__cxx11::string::_M_construct((ulong)local_400,'\x02' - cVar29);
          pcVar23 = (char *)(lVar10 + (long)local_388);
          local_118 = __LC8;
          uStack_110 = _UNK_001017a8;
          local_108 = __LC9;
          uStack_100 = _UNK_001017b8;
          local_f8 = __LC10;
          uStack_f0 = _UNK_001017c8;
          local_e8 = __LC11;
          uStack_e0 = _UNK_001017d8;
          local_d8 = __LC12;
          uStack_d0 = _UNK_001017e8;
          local_c8 = __LC13;
          uStack_c0 = _UNK_001017f8;
          local_b8 = __LC14;
          uStack_b0 = _UNK_00101808;
          local_a8 = __LC15;
          uStack_a0 = _UNK_00101818;
          local_98 = __LC16;
          uStack_90 = _UNK_00101828;
          local_88 = __LC17;
          uStack_80 = _UNK_00101838;
          local_78 = __LC18;
          uStack_70 = _UNK_00101848;
          local_68 = __LC19;
          uStack_60 = (undefined1)_UNK_00101858;
          uStack_5f = (undefined7)_LC20._0_8_;
          cStack_58 = SUB81(_LC20._0_8_,7);
          acStack_57[0] = _LC20[8];
          acStack_57[1] = _LC20[9];
          acStack_57[2] = _LC20[10];
          acStack_57[3] = _LC20[0xb];
          acStack_57[4] = _LC20[0xc];
          acStack_57[5] = _LC20[0xd];
          acStack_57[6] = _LC20[0xe];
          acStack_57[7] = _LC20[0xf];
          plVar26 = local_428;
        }
        else {
          if (uVar30 < 1000) {
            iVar15 = 2;
            iVar8 = 3;
          }
          else if (uVar30 < 10000) {
            iVar15 = 3;
            iVar8 = 4;
          }
          else {
            uVar13 = uVar30;
            iVar8 = 1;
            do {
              iVar15 = iVar8;
              iVar8 = iVar15 + 4;
              if (uVar13 < 100000) {
                iVar15 = iVar15 + 3;
                goto LAB_0010063f;
              }
              if (uVar13 < 1000000) {
                local_428 = (long *)CONCAT44(local_428._4_4_,iVar8);
                local_388 = local_420;
                _Stack_440 = 0x100f6a;
                local_3f8 = uVar30;
                std::__cxx11::string::_M_construct
                          ((ulong)local_400,('\x05' - cVar29) + (char)iVar15);
                plVar26 = (long *)local_3f8;
                uVar16 = (uint)local_428;
                goto LAB_00100679;
              }
              if (uVar13 < 10000000) {
                iVar8 = iVar15 + 6;
                iVar15 = iVar15 + 5;
                goto LAB_0010063f;
              }
              bVar4 = 99999999 < uVar13;
              uVar13 = uVar13 / 10000;
            } while (bVar4);
            iVar8 = iVar15 + 7;
            iVar15 = iVar15 + 6;
          }
LAB_0010063f:
          local_3f8 = CONCAT44(local_3f8._4_4_,iVar15);
          local_388 = local_420;
          _Stack_440 = 0x100668;
          local_428 = (long *)uVar30;
          std::__cxx11::string::_M_construct((ulong)local_400,(char)iVar8 - cVar29);
          plVar26 = local_428;
          uVar16 = (uint)local_3f8;
LAB_00100679:
          pcVar23 = (char *)(lVar10 + (long)local_388);
          local_d8 = __LC12;
          uStack_d0 = _UNK_001017e8;
          local_118 = __LC8;
          uStack_110 = _UNK_001017a8;
          local_c8 = __LC13;
          uStack_c0 = _UNK_001017f8;
          local_108 = __LC9;
          uStack_100 = _UNK_001017b8;
          local_b8 = __LC14;
          uStack_b0 = _UNK_00101808;
          local_f8 = __LC10;
          uStack_f0 = _UNK_001017c8;
          local_a8 = __LC15;
          uStack_a0 = _UNK_00101818;
          local_e8 = __LC11;
          uStack_e0 = _UNK_001017d8;
          local_98 = __LC16;
          uStack_90 = _UNK_00101828;
          local_88 = __LC17;
          uStack_80 = _UNK_00101838;
          local_78 = __LC18;
          uStack_70 = _UNK_00101848;
          local_68 = __LC19;
          uStack_60 = (undefined1)_UNK_00101858;
          uStack_5f = (undefined7)_LC20._0_8_;
          cStack_58 = SUB81(_LC20._0_8_,7);
          acStack_57[0] = _LC20[8];
          acStack_57[1] = _LC20[9];
          acStack_57[2] = _LC20[10];
          acStack_57[3] = _LC20[0xb];
          acStack_57[4] = _LC20[0xc];
          acStack_57[5] = _LC20[0xd];
          acStack_57[6] = _LC20[0xe];
          acStack_57[7] = _LC20[0xf];
          do {
            uVar30 = (ulong)plVar26;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar30 >> 2;
            plVar26 = (long *)((uVar30 >> 2) / 0x19);
            lVar10 = (uVar30 + ((SUB168(auVar5 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffffffffffffffc
                                ) + (long)plVar26) * -0x14) * 2;
            cVar29 = *(char *)((long)&local_118 + lVar10);
            pcVar23[uVar16] = *(char *)((long)&local_118 + lVar10 + 1);
            uVar1 = uVar16 - 1;
            uVar16 = uVar16 - 2;
            pcVar23[uVar1] = cVar29;
          } while (9999 < uVar30);
          if (uVar30 < 1000) goto LAB_001007c2;
        }
        cVar29 = *(char *)((long)&local_118 + (long)plVar26 * 2);
        pcVar23[1] = *(char *)((long)&local_118 + (long)plVar26 * 2 + 1);
      }
      pppppppuVar24 = local_410;
      *pcVar23 = cVar29;
      local_3a8 = local_410;
      _Stack_440 = 0x1007ec;
      std::__cxx11::string::_M_construct<char_const*>(local_408,"/sys/devices/system/cpu/cpu");
      pppppppuVar18 = (undefined8 *******)(local_3a0 + local_380);
      pppppppuVar21 = local_378[0];
      if (local_3a8 == pppppppuVar24) {
        if (((undefined8 *******)0xf < pppppppuVar18) && (local_388 != local_420))
        goto LAB_0010083c;
LAB_00100848:
        pppppppuVar21 = local_388;
        if (0x3fffffffffffffffU - local_3a0 < local_380) goto LAB_0010138f;
        _Stack_440 = 0x100870;
        plVar26 = (long *)std::__cxx11::string::_M_append((char *)local_408,(ulong)local_388);
        pppppppuVar18 = (undefined8 *******)(plVar26 + 2);
        if ((undefined8 *******)*plVar26 == pppppppuVar18) {
          uVar30 = plVar26[1] + 1;
          pppppppuVar21 = pppppppuVar18;
          pppppppuVar24 = local_358;
          if (7 < (uint)uVar30) {
            uVar13 = 0;
            do {
              uVar16 = (int)uVar13 + 8;
              uVar14 = (ulong)uVar16;
              *(undefined8 *)((long)local_358 + uVar13) =
                   *(undefined8 *)((long)pppppppuVar18 + uVar13);
              uVar13 = uVar14;
            } while (uVar16 < ((uint)uVar30 & 0xfffffff8));
            pppppppuVar24 = (undefined8 *******)((long)local_358 + uVar14);
            pppppppuVar21 = (undefined8 *******)(uVar14 + (long)pppppppuVar18);
          }
          lVar10 = 0;
          if ((uVar30 & 4) != 0) {
            *(undefined4 *)pppppppuVar24 = *(undefined4 *)pppppppuVar21;
            lVar10 = 4;
          }
          if ((uVar30 & 2) != 0) {
            *(undefined2 *)((long)pppppppuVar24 + lVar10) =
                 *(undefined2 *)((long)pppppppuVar21 + lVar10);
            lVar10 = lVar10 + 2;
          }
          local_368 = local_358;
          if ((uVar30 & 1) != 0) {
            *(undefined1 *)((long)pppppppuVar24 + lVar10) =
                 *(undefined1 *)((long)pppppppuVar21 + lVar10);
          }
        }
        else {
          local_358[0] = (undefined8 *******)plVar26[2];
          local_368 = (undefined8 *******)*plVar26;
        }
        local_360 = plVar26[1];
        *plVar26 = (long)pppppppuVar18;
        plVar26[1] = 0;
        *(undefined1 *)(plVar26 + 2) = 0;
      }
      else {
        if (pppppppuVar18 <= local_398[0]) goto LAB_00100848;
        if (local_388 == local_420) {
          pppppppuVar21 = (undefined8 *******)0xf;
        }
LAB_0010083c:
        if (pppppppuVar21 < pppppppuVar18) goto LAB_00100848;
        _Stack_440 = 0x101010;
        plVar26 = (long *)std::__cxx11::string::_M_replace
                                    ((ulong)local_400,0,(char *)0x0,(ulong)local_3a8);
        pppppppuVar18 = (undefined8 *******)(plVar26 + 2);
        if ((undefined8 *******)*plVar26 == pppppppuVar18) {
          uVar30 = plVar26[1] + 1;
          pppppppuVar21 = pppppppuVar18;
          pppppppuVar24 = local_358;
          if (7 < (uint)uVar30) {
            uVar13 = 0;
            do {
              uVar16 = (int)uVar13 + 8;
              uVar14 = (ulong)uVar16;
              *(undefined8 *)((long)local_358 + uVar13) =
                   *(undefined8 *)((long)pppppppuVar18 + uVar13);
              uVar13 = uVar14;
            } while (uVar16 < ((uint)uVar30 & 0xfffffff8));
            pppppppuVar24 = (undefined8 *******)((long)local_358 + uVar14);
            pppppppuVar21 = (undefined8 *******)(uVar14 + (long)pppppppuVar18);
          }
          lVar10 = 0;
          if ((uVar30 & 4) != 0) {
            *(undefined4 *)pppppppuVar24 = *(undefined4 *)pppppppuVar21;
            lVar10 = 4;
          }
          if ((uVar30 & 2) != 0) {
            *(undefined2 *)((long)pppppppuVar24 + lVar10) =
                 *(undefined2 *)((long)pppppppuVar21 + lVar10);
            lVar10 = lVar10 + 2;
          }
          local_368 = local_358;
          if ((uVar30 & 1) != 0) {
            *(undefined1 *)((long)pppppppuVar24 + lVar10) =
                 *(undefined1 *)((long)pppppppuVar21 + lVar10);
          }
        }
        else {
          local_358[0] = (undefined8 *******)plVar26[2];
          local_368 = (undefined8 *******)*plVar26;
        }
        local_360 = plVar26[1];
        *plVar26 = (long)pppppppuVar18;
        plVar26[1] = 0;
        *(undefined1 *)(plVar26 + 2) = 0;
      }
      pppppppuVar24 = local_358;
      ppppppuVar2 = (undefined8 ******)(local_360 + local_340);
      ppppppuVar27 = local_338[0];
      if (local_368 == pppppppuVar24) {
        if (((undefined8 ******)0xf < ppppppuVar2) && (local_358[2] != local_418))
        goto LAB_00100904;
LAB_0010090d:
        pppppppuVar18 = local_368;
        pppppppuVar21 = local_358[2];
        if (0x3fffffffffffffffU - local_360 < local_340) {
LAB_0010138f:
          pcVar23 = "basic_string::append";
          _Stack_440 = 0x10139b;
          std::__throw_length_error("basic_string::append");
          _Stack_440 = _Var7;
          _Stack_448 = _Var6;
          lStack_468 = *(long *)(in_FS_OFFSET + 0x28);
          piStack_460 = (istream *)local_328;
          pppppppuStack_458 = pppppppuVar24;
          uStack_450 = uVar32;
          pthread_attr_init(&pStack_530);
          if (__stacksize != 0) {
            pthread_attr_setstacksize(&pStack_530,__stacksize);
          }
          p_Var9 = (_func_void_void_ptr *)operator_new(8);
          __arg = (undefined8 *)operator_new(0x18);
          *__arg = pcVar23;
          __arg[1] = pppppppuVar21;
          __arg[2] = (long)(int)pppppppuVar18;
          iVar8 = pthread_create((pthread_t *)p_Var9,&pStack_530,threadStartup,__arg);
          if (iVar8 != 0) {
            pthread_attr_destroy(&pStack_530);
            if (p_Var9 != (_func_void_void_ptr *)0x0) {
              pvVar25 = (void *)0x8;
              operator_delete(p_Var9,8);
              p_Var9 = (_func_void_void_ptr *)createThread(p_Var9,pvVar25,extraout_RDX,(long)__arg);
              return p_Var9;
            }
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pthread_attr_destroy(&pStack_530);
          if (-1 < (long)pppppppuVar18) {
            pcVar28 = &cStack_4f0;
            for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
              pcVar28->__bits[0] = 0;
              pcVar28 = (cpu_set_t *)((long)pcVar28 + ((ulong)bVar33 * -2 + 1) * 8);
            }
            uVar32 = mapThreadID((ulong)pppppppuVar18);
            if (uVar32 < 0x400) {
              p_Var3 = cStack_4f0.__bits + (uVar32 >> 6);
              *p_Var3 = *p_Var3 | 1L << ((byte)uVar32 & 0x3f);
            }
            pthread_setaffinity_np(*(pthread_t *)p_Var9,0x80,&cStack_4f0);
          }
          if (lStack_468 == *(long *)(in_FS_OFFSET + 0x28)) {
            return p_Var9;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        _Stack_440 = 0x100930;
        plVar11 = (long *)std::__cxx11::string::_M_append((char *)&local_368,(ulong)local_358[2]);
        local_3c8 = local_3b8;
        plVar26 = plVar11 + 2;
        if ((long *)*plVar11 == plVar26) {
          uVar30 = plVar11[1] + 1;
          plVar22 = plVar26;
          plVar31 = local_3c8;
          if (7 < (uint)uVar30) {
            uVar13 = 0;
            do {
              uVar16 = (int)uVar13 + 8;
              uVar14 = (ulong)uVar16;
              *(undefined8 *)((long)local_3c8 + uVar13) = *(undefined8 *)((long)plVar26 + uVar13);
              uVar13 = uVar14;
            } while (uVar16 < ((uint)uVar30 & 0xfffffff8));
            plVar31 = (long *)((long)local_3c8 + uVar14);
            plVar22 = (long *)(uVar14 + (long)plVar26);
          }
          lVar10 = 0;
          if ((uVar30 & 4) != 0) {
            *(int *)plVar31 = (int)*plVar22;
            lVar10 = 4;
          }
          if ((uVar30 & 2) != 0) {
            *(undefined2 *)((long)plVar31 + lVar10) = *(undefined2 *)((long)plVar22 + lVar10);
            lVar10 = lVar10 + 2;
          }
          if ((uVar30 & 1) != 0) {
            *(undefined1 *)((long)plVar31 + lVar10) = *(undefined1 *)((long)plVar22 + lVar10);
          }
        }
        else {
          local_3b8[0] = plVar11[2];
          local_3c8 = (long *)*plVar11;
        }
        local_3c0 = plVar11[1];
        *plVar11 = (long)plVar26;
        plVar11[1] = 0;
        *(undefined1 *)(plVar11 + 2) = 0;
      }
      else {
        if (ppppppuVar2 <= local_358[0]) goto LAB_0010090d;
        if (local_358[2] == local_418) {
          ppppppuVar27 = (undefined8 ******)0xf;
        }
LAB_00100904:
        if (ppppppuVar27 < ppppppuVar2) goto LAB_0010090d;
        _Stack_440 = 0x100f8e;
        plVar11 = (long *)std::__cxx11::string::_M_replace
                                    ((ulong)local_3f0,0,(char *)0x0,(ulong)local_368);
        local_3c8 = local_3b8;
        plVar26 = plVar11 + 2;
        if ((long *)*plVar11 == plVar26) {
          uVar30 = plVar11[1] + 1;
          plVar22 = plVar26;
          plVar31 = local_3c8;
          if (7 < (uint)uVar30) {
            uVar13 = 0;
            do {
              uVar16 = (int)uVar13 + 8;
              uVar14 = (ulong)uVar16;
              *(undefined8 *)((long)local_3c8 + uVar13) = *(undefined8 *)((long)plVar26 + uVar13);
              uVar13 = uVar14;
            } while (uVar16 < ((uint)uVar30 & 0xfffffff8));
            plVar31 = (long *)((long)local_3c8 + uVar14);
            plVar22 = (long *)(uVar14 + (long)plVar26);
          }
          lVar10 = 0;
          if ((uVar30 & 4) != 0) {
            *(undefined4 *)plVar31 = *(undefined4 *)plVar22;
            lVar10 = 4;
          }
          if ((uVar30 & 2) != 0) {
            *(undefined2 *)((long)plVar31 + lVar10) = *(undefined2 *)((long)plVar22 + lVar10);
            lVar10 = lVar10 + 2;
          }
          if ((uVar30 & 1) != 0) {
            *(undefined1 *)((long)plVar31 + lVar10) = *(undefined1 *)((long)plVar22 + lVar10);
          }
        }
        else {
          local_3b8[0] = plVar11[2];
          local_3c8 = (long *)*plVar11;
        }
        local_3c0 = plVar11[1];
        *plVar11 = (long)plVar26;
        plVar11[1] = 0;
        *(undefined1 *)(plVar11 + 2) = 0;
      }
      local_428 = local_3b8;
      if (local_368 != pppppppuVar24) {
        _Stack_440 = 0x100999;
        operator_delete(local_368,(long)local_358[0] + 1);
      }
      if (local_3a8 != local_410) {
        _Stack_440 = 0x1009bc;
        operator_delete(local_3a8,(long)local_398[0] + 1);
      }
      if (local_388 != local_420) {
        _Stack_440 = 0x1009df;
        operator_delete(local_388,(long)local_378[0] + 1);
      }
      if (local_358[2] != local_418) {
        _Stack_440 = 0x100a02;
        operator_delete(local_358[2],(long)local_338[0] + 1);
      }
      _Stack_440 = 0x100a15;
      lVar10 = std::filebuf::open(local_438,local_3c8,8);
      if (lVar10 == 0) {
        _Stack_440 = 0x100dd0;
        std::ios::clear((istream *)local_328 + *(long *)(local_328._0_8_ + -0x18),
                        *(uint *)((long)auStack_308 + *(long *)(local_328._0_8_ + -0x18)) | 4);
        param_1 = (ulong)local_3e0;
      }
      else {
        _Stack_440 = 0x100a34;
        std::ios::clear((istream *)local_328 + *(long *)(local_328._0_8_ + -0x18),0);
        param_1 = (ulong)local_3e0;
      }
      local_3e0 = (_func_void_void_ptr *)param_1;
      if ((local_200 & 5) != 0) goto LAB_00100dde;
      while( true ) {
        _Stack_440 = 0x100a5b;
        plVar26 = (long *)std::istream::operator>>((istream *)local_328,&local_3d4);
        if ((*(byte *)((long)plVar26 + *(long *)(*plVar26 + -0x18) + 0x20) & 5) != 0) break;
        lVar20 = (long)local_3d4;
        lVar10 = (long)DAT_001014f8 - (long)threadIDs;
        plVar26 = threadIDs;
        if (0 < lVar10 >> 5) {
          do {
            if (local_3d4 == (int)*plVar26) goto LAB_00100ac8;
            if (local_3d4 == (int)plVar26[1]) {
              plVar26 = plVar26 + 1;
              goto LAB_00100ac8;
            }
            if (local_3d4 == (int)plVar26[2]) {
              plVar26 = plVar26 + 2;
              goto LAB_00100ac8;
            }
            if (local_3d4 == (int)plVar26[3]) {
              plVar26 = plVar26 + 3;
              goto LAB_00100ac8;
            }
            plVar26 = plVar26 + 4;
          } while (plVar26 != threadIDs + (lVar10 >> 5) * 4);
          lVar10 = (long)DAT_001014f8 - (long)plVar26;
        }
        lVar10 = lVar10 >> 3;
        if (lVar10 == 2) {
LAB_00100b65:
          if (local_3d4 != (int)*plVar26) {
            plVar26 = plVar26 + 1;
LAB_00100b0c:
            if (local_3d4 != (int)*plVar26) goto LAB_00100b10;
          }
LAB_00100ac8:
          if (DAT_001014f8 == plVar26) goto LAB_00100b10;
        }
        else {
          if (lVar10 == 3) {
            if (local_3d4 != (int)*plVar26) {
              plVar26 = plVar26 + 1;
              goto LAB_00100b65;
            }
            goto LAB_00100ac8;
          }
          if (lVar10 == 1) goto LAB_00100b0c;
LAB_00100b10:
          local_3d0 = lVar20;
          if (DAT_00101500 == DAT_001014f8) {
            _Stack_440 = 0x100dbc;
            std::vector<unsigned_long,std::allocator<unsigned_long>>::
            _M_realloc_insert<unsigned_long>
                      ((vector<unsigned_long,std::allocator<unsigned_long>> *)&threadIDs,
                       DAT_001014f8,&local_3d0);
          }
          else {
            *DAT_001014f8 = lVar20;
            DAT_001014f8 = DAT_001014f8 + 1;
          }
        }
        _Stack_440 = 0x100ad5;
        iVar8 = std::istream::peek();
        if (iVar8 == 0x2c) {
          _Stack_440 = 0x100ae6;
          std::istream::ignore();
        }
      }
      _Stack_440 = 0x100b7c;
      lVar10 = std::filebuf::close();
      if (lVar10 == 0) {
        _Stack_440 = 0x1010be;
        std::ios::clear((istream *)local_328 + *(long *)(local_328._0_8_ + -0x18),
                        *(uint *)((long)auStack_308 + *(long *)(local_328._0_8_ + -0x18)) | 4);
      }
      if (local_3c8 != local_428) {
        _Stack_440 = 0x100ba5;
        operator_delete(local_3c8,local_3b8[0] + 1);
      }
      uVar32 = uVar32 + 1;
      local_328._0_8_ = std::__cxx11::string::_M_append;
      local_220[0] = std::locale::~locale;
      local_328._16_8_ = std::istream::ignore;
      local_310 = (code *)&std::streambuf::vtable;
      _Stack_440 = 0x100be8;
      std::filebuf::close();
      _Stack_440 = 0x100bf5;
      std::__basic_file<char>::~__basic_file(local_2a8);
      local_310 = std::ios_base::~ios_base;
      _Stack_440 = 0x100c11;
      std::locale::~locale(local_2d8);
      *(undefined8 *)(local_328 + *(long *)(lVar17 + -0x18)) = __M_construct;
      local_328._16_8_ = _Var7;
      *(undefined8 *)(local_328 + *(long *)(_Var7 - 0x18) + 0x10) = _filebuf;
      local_328._0_8_ = _Var6;
      *(undefined8 *)(local_328 + *(long *)(_Var6 - 0x18)) = _init;
      local_328._8_8_ = 0;
      local_220[0] = (code *)&std::fstream::vtable;
      _Stack_440 = 0x100c87;
      std::ios_base::~ios_base(local_430);
    } while( true );
  }
  p_Var9 = (_func_void_void_ptr *)((long)DAT_001014f8 - (long)threadIDs >> 3);
LAB_00100310:
  plVar26 = DAT_001014f8;
  if (param_1 < p_Var9) {
    param_1 = threadIDs[param_1];
  }
LAB_00100319:
  DAT_001014f8 = plVar26;
  pcVar28 = (cpu_set_t *)local_328;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    pcVar28->__bits[0] = 0;
    pcVar28 = (cpu_set_t *)((long)pcVar28 + ((ulong)bVar33 * -2 + 1) * 8);
  }
  _Stack_440 = 0x10032b;
  __th = pthread_self();
  _Stack_440 = 0x10033b;
  iVar8 = pthread_getaffinity_np(__th,0x80,(cpu_set_t *)local_328);
  p_Var9 = (_func_void_void_ptr *)param_1;
  if (iVar8 == 0) {
    p_Var19 = (_func_void_void_ptr *)0x0;
    iVar8 = 0;
    do {
      if ((*(ulong *)(local_328 + ((ulong)p_Var19 >> 6) * 8) >> ((ulong)p_Var19 & 0x3f) & 1) != 0) {
        p_Var9 = p_Var19;
        if ((_func_void_void_ptr *)(long)iVar8 == (_func_void_void_ptr *)param_1) break;
        iVar8 = iVar8 + 1;
      }
      p_Var19 = p_Var19 + 1;
      p_Var9 = (_func_void_void_ptr *)param_1;
    } while (p_Var19 != (_func_void_void_ptr *)0x400);
  }
  _Stack_440 = 0x100384;
  embree::MutexSys::unlock();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return p_Var9;
  }
                    /* WARNING: Subroutine does not return */
  _Stack_440 = 0x10138f;
  __stack_chk_fail();
LAB_00100dde:
  if (local_3c8 != local_428) {
    _Stack_440 = 0x100e03;
    operator_delete(local_3c8,local_3b8[0] + 1);
  }
  local_328._0_8_ = std::__cxx11::string::_M_append;
  local_220[0] = std::locale::~locale;
  local_328._16_8_ = std::istream::ignore;
  local_310 = (code *)&std::streambuf::vtable;
  _Stack_440 = 0x100e42;
  std::filebuf::close();
  _Stack_440 = 0x100e4f;
  std::__basic_file<char>::~__basic_file(local_2a8);
  local_310 = std::ios_base::~ios_base;
  _Stack_440 = 0x100e6b;
  std::locale::~locale(local_2d8);
  *(undefined8 *)(local_328 + *(long *)(lVar17 + -0x18)) = __M_construct;
  local_328._16_8_ = _Var7;
  *(undefined8 *)(local_328 + *(long *)(_Var7 - 0x18) + 0x10) = _filebuf;
  local_328._0_8_ = _Var6;
  *(undefined8 *)(local_328 + *(long *)(_Var6 - 0x18)) = _init;
  local_328._8_8_ = 0;
  local_220[0] = (code *)&std::fstream::vtable;
  _Stack_440 = 0x100ee1;
  std::ios_base::~ios_base(local_430);
  p_Var19 = (_func_void_void_ptr *)0x0;
  p_Var9 = (_func_void_void_ptr *)((long)DAT_001014f8 - (long)threadIDs >> 3);
  plVar26 = DAT_001014f8;
  if (threadIDs == DAT_001014f8) goto LAB_00100319;
  do {
    p_Var12 = (_func_void_void_ptr *)0x0;
    if (DAT_001014f8 != threadIDs) {
      do {
        if ((p_Var12 != p_Var19) &&
           (plVar26 = threadIDs, threadIDs[(long)p_Var19] == threadIDs[(long)p_Var12]))
        goto LAB_00100319;
        p_Var12 = p_Var12 + 1;
      } while (p_Var12 < p_Var9);
    }
    p_Var19 = p_Var19 + 1;
  } while (p_Var19 < p_Var9);
  goto LAB_00100310;
}



/* embree::createThread(void (*)(void*), void*, unsigned long, long) */

_func_void_void_ptr *
embree::createThread(_func_void_void_ptr *param_1,void *param_2,ulong param_3,long param_4)

{
  __cpu_mask *p_Var1;
  int iVar2;
  _func_void_void_ptr *p_Var3;
  undefined8 *__arg;
  ulong uVar4;
  long lVar5;
  ulong extraout_RDX;
  void *pvVar6;
  cpu_set_t *pcVar7;
  long in_FS_OFFSET;
  byte bVar8;
  pthread_attr_t pStack_f8;
  cpu_set_t local_b8;
  long local_30;
  
  bVar8 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pthread_attr_init(&pStack_f8);
  if (param_3 != 0) {
    pthread_attr_setstacksize(&pStack_f8,param_3);
  }
  p_Var3 = (_func_void_void_ptr *)operator_new(8);
  __arg = (undefined8 *)operator_new(0x18);
  *__arg = param_1;
  __arg[1] = param_2;
  __arg[2] = (long)(int)param_4;
  iVar2 = pthread_create((pthread_t *)p_Var3,&pStack_f8,threadStartup,__arg);
  if (iVar2 != 0) {
    pthread_attr_destroy(&pStack_f8);
    if (p_Var3 != (_func_void_void_ptr *)0x0) {
      pvVar6 = (void *)0x8;
      operator_delete(p_Var3,8);
      p_Var3 = (_func_void_void_ptr *)createThread(p_Var3,pvVar6,extraout_RDX,(long)__arg);
      return p_Var3;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pthread_attr_destroy(&pStack_f8);
  if (-1 < param_4) {
    pcVar7 = &local_b8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      pcVar7->__bits[0] = 0;
      pcVar7 = (cpu_set_t *)((long)pcVar7 + ((ulong)bVar8 * -2 + 1) * 8);
    }
    uVar4 = mapThreadID(param_4);
    if (uVar4 < 0x400) {
      p_Var1 = local_b8.__bits + (uVar4 >> 6);
      *p_Var1 = *p_Var1 | 1L << ((byte)uVar4 & 0x3f);
    }
    pthread_setaffinity_np(*(pthread_t *)p_Var3,0x80,&local_b8);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return p_Var3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::vector<unsigned long, std::allocator<unsigned long> >::~vector() */

void __thiscall
std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector
          (vector<unsigned_long,std::allocator<unsigned_long>> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x10) - (long)pvVar1);
    return;
  }
  return;
}



/* embree::join(embree::opaque_thread_t*) [clone .cold] */

void embree::join(opaque_thread_t *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::createTls() [clone .cold] */

void embree::createTls(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::setTls(embree::opaque_tls_t*, void*) [clone .cold] */

void embree::setTls(opaque_tls_t *param_1,void *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::destroyTls(embree::opaque_tls_t*) [clone .cold] */

void embree::destroyTls(opaque_tls_t *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::createThread(void (*)(void*), void*, unsigned long, long) [clone .cold] */

void embree::createThread(_func_void_void_ptr *param_1,void *param_2,ulong param_3,long param_4)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<unsigned long, std::allocator<unsigned long> >::_M_realloc_insert<unsigned
   long>(__gnu_cxx::__normal_iterator<unsigned long*, std::vector<unsigned long,
   std::allocator<unsigned long> > >, unsigned long&&) */

void __thiscall
std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_realloc_insert<unsigned_long>
          (vector<unsigned_long,std::allocator<unsigned_long>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__src;
  ulong uVar1;
  void *pvVar2;
  void *__dest;
  size_t __n;
  long lVar3;
  ulong uVar4;
  size_t __n_00;
  
  pvVar2 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar1 = (long)pvVar2 - (long)__src >> 3;
  if (uVar1 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar2) {
    if (0xfffffffffffffffe < uVar1) goto LAB_00101650;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00101650:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_001015d9;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_001015d9:
  *(undefined8 *)((long)__dest + __n) = *param_3;
  if (0 < (long)__n) {
    memmove(__dest,__src,__n);
  }
  __n_00 = (long)pvVar2 - (long)param_2;
  pvVar2 = (void *)((long)__dest + __n + 8);
  if (0 < (long)__n_00) {
    pvVar2 = memmove(pvVar2,param_2,__n_00);
  }
  if (__src != (void *)0x0) {
    operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
  }
  *(void **)this = __dest;
  *(size_t *)(this + 8) = __n_00 + (long)pvVar2;
  *(long *)(this + 0x10) = lVar3;
  return;
}



/* embree::mapThreadID(unsigned long) */

void embree::_GLOBAL__sub_I_mapThreadID(void)

{
  embree::MutexSys::MutexSys((MutexSys *)&mutex);
  __cxa_atexit(embree::MutexSys::~MutexSys,&mutex,&__dso_handle);
  threadIDs = 0;
  DAT_001014f8 = 0;
  DAT_00101500 = 0;
  __cxa_atexit(std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector,&threadIDs,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<unsigned long, std::allocator<unsigned long> >::~vector() */

void __thiscall
std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector
          (vector<unsigned_long,std::allocator<unsigned_long>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


