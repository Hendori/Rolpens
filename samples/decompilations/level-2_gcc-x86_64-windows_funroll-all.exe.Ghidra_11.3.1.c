#include "out.h"



// WARNING: Unknown calling convention

void __mingw_invalidParameterHandler
               (wchar_t *expression,wchar_t *function,wchar_t *file,uint line,uintptr_t pReserved)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x000140001110)
// WARNING: Removing unreachable block (ram,0x00014000111a)
// WARNING: Unknown calling convention

int pre_c_init(void)

{
  int *piVar1;
  
  __mingw_initltsdrot_force = 1;
  __mingw_initltsdyn_force = 1;
  __mingw_initltssuo_force = 1;
  managedapp = 0;
  if (__mingw_app_type == 0) {
    __set_app_type(1);
  }
  else {
    __set_app_type(2);
  }
  piVar1 = __p__fmode();
  *piVar1 = _fmode;
  piVar1 = __p__commode();
  *piVar1 = _commode;
  _setargv();
  if (_MINGW_INSTALL_DEBUG_MATHERR != 1) {
    return 0;
  }
  __mingw_setusermatherr(_matherr);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void pre_cpp_init(void)

{
  startinfo.newmode = _newmode;
  __getmainargs(&argc,&argv,&envp,_dowildcard,&startinfo);
  return;
}



// WARNING: Unknown calling convention

int __tmainCRTStartup(void)

{
  void *pvVar1;
  bool bVar2;
  _TCHAR **pp_Var3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  _TCHAR **pp_Var7;
  size_t sVar8;
  _TCHAR *_Dst;
  _TCHAR **pp_Var9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong unaff_GS_OFFSET;
  
  pvVar1 = *(void **)(*(longlong *)(unaff_GS_OFFSET + 0x30) + 8);
  while( true ) {
    LOCK();
    pvVar6 = (void *)0x0;
    pvVar5 = pvVar1;
    if (__native_startup_lock != (void *)0x0) {
      pvVar6 = __native_startup_lock;
      pvVar5 = __native_startup_lock;
    }
    __native_startup_lock = pvVar5;
    UNLOCK();
    if (pvVar6 == (void *)0x0) break;
    if (pvVar1 == pvVar6) {
      bVar2 = true;
joined_r0x0001400011db:
      if (__native_startup_state == __initializing) {
        _amsg_exit(0x1f);
      }
      else if (__native_startup_state == __uninitialized) {
        __native_startup_state = __initializing;
        _initterm(__xi_a,__xi_z);
      }
      else {
        has_cctor = 1;
      }
      if (__native_startup_state == __initializing) {
        _initterm(__xc_a,__xc_z);
        __native_startup_state = __initialized;
      }
      if (!bVar2) {
        LOCK();
        __native_startup_lock = (void *)0x0;
        UNLOCK();
      }
      __dyn_tls_init((HANDLE)0x0,2,(LPVOID)0x0);
      _pei386_runtime_relocator();
      __mingw_oldexcpt_handler =
           (LPTOP_LEVEL_EXCEPTION_FILTER)SetUnhandledExceptionFilter(_gnu_exception_handler);
      mingw_set_invalid_parameter_handler(__mingw_invalidParameterHandler);
      _fpreset();
      iVar4 = argc;
      lVar11 = (longlong)argc;
      iVar12 = argc + 1;
      pp_Var7 = (_TCHAR **)malloc((longlong)iVar12 * 8);
      pp_Var3 = argv;
      pp_Var9 = pp_Var7;
      if (0 < iVar4) {
        lVar10 = 0;
        do {
          sVar8 = strlen(pp_Var3[lVar10]);
          _Dst = (_TCHAR *)malloc(sVar8 + 1);
          pp_Var7[lVar10] = _Dst;
          pp_Var9 = pp_Var3 + lVar10;
          lVar10 = lVar10 + 1;
          memcpy(_Dst,*pp_Var9,sVar8 + 1);
        } while (lVar11 != lVar10);
        pp_Var9 = pp_Var7 + (longlong)iVar12 + -1;
      }
      *pp_Var9 = (_TCHAR *)0x0;
      argv = pp_Var7;
      __main();
      iVar4 = argc;
      pp_Var9 = envp;
      *(_TCHAR ***)__initenv_exref = envp;
      mainret = main(iVar4,argv,pp_Var9);
      if (managedapp != 0) {
        if (has_cctor != 0) {
          return mainret;
        }
        _cexit();
        return mainret;
      }
                    // WARNING: Subroutine does not return
      exit(mainret);
    }
    Sleep(1000);
  }
  bVar2 = false;
  goto joined_r0x0001400011db;
}



// WARNING: Unknown calling convention

int WinMainCRTStartup(void)

{
  int iVar1;
  
  __mingw_app_type = 1;
  iVar1 = __tmainCRTStartup();
  return iVar1;
}



// WARNING: Unknown calling convention

int mainCRTStartup(void)

{
  int iVar1;
  
  __mingw_app_type = 0;
  iVar1 = __tmainCRTStartup();
  return iVar1;
}



int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return -(uint)(p_Var1 == (_onexit_t)0x0);
}



void __gcc_register_frame(void)

{
  atexit(__gcc_deregister_frame);
  return;
}



void __gcc_deregister_frame(void)

{
  return;
}



int __cdecl printf(char *_Format,...)

{
  FILE *stream;
  int iVar1;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  stream = (*__imp___acrt_iob_func)(1);
  iVar1 = __mingw_vfprintf(stream,_Format,(va_list)&local_res10);
  return iVar1;
}



void count_sheep(void)

{
  printf("%d ",0);
  printf("%d ",1);
  printf("%d ",2);
  printf("%d ",3);
  printf("%d ",4);
  printf("%d ",5);
  printf("%d ",6);
  printf("%d ",7);
  printf("%d ",8);
  printf("%d ",9);
  printf("%d ",10);
  printf("%d ",0xb);
  printf("%d ",0xc);
  printf("%d ",0xd);
  printf("%d ",0xe);
  printf("%d ",0xf);
  printf("%d ",0x10);
  printf("%d ",0x11);
  printf("%d ",0x12);
  printf("%d ",0x13);
  printf("%d ",0x14);
  printf("%d ",0x15);
  printf("%d ",0x16);
  printf("%d ",0x17);
  printf("%d ",0x18);
  printf("%d ",0x19);
  printf("%d ",0x1a);
  printf("%d ",0x1b);
  printf("%d ",0x1c);
  printf("%d ",0x1d);
  printf("%d ",0x1e);
  printf("%d ",0x1f);
  printf("%d ",0x20);
  printf("%d ",0x21);
  printf("%d ",0x22);
  printf("%d ",0x23);
  printf("%d ",0x24);
  printf("%d ",0x25);
  printf("%d ",0x26);
  printf("%d ",0x27);
  printf("%d ",0x28);
  printf("%d ",0x29);
  printf("%d ",0x2a);
  printf("%d ",0x2b);
  printf("%d ",0x2c);
  printf("%d ",0x2d);
  printf("%d ",0x2e);
  printf("%d ",0x2f);
  printf("%d ",0x30);
  printf("%d ",0x31);
  printf("%d ",0x32);
  printf("%d ",0x33);
  printf("%d ",0x34);
  printf("%d ",0x35);
  printf("%d ",0x36);
  printf("%d ",0x37);
  printf("%d ",0x38);
  printf("%d ",0x39);
  printf("%d ",0x3a);
  printf("%d ",0x3b);
  printf("%d ",0x3c);
  printf("%d ",0x3d);
  printf("%d ",0x3e);
  printf("%d ",0x3f);
  printf("%d ",0x40);
  printf("%d ",0x41);
  printf("%d ",0x42);
  printf("%d ",0x43);
  printf("%d ",0x44);
  printf("%d ",0x45);
  printf("(nice) ");
  printf("%d ",0x46);
  printf("%d ",0x47);
  printf("%d ",0x48);
  printf("%d ",0x49);
  printf("%d ",0x4a);
  printf("%d ",0x4b);
  printf("%d ",0x4c);
  printf("%d ",0x4d);
  printf("%d ",0x4e);
  printf("%d ",0x4f);
  printf("%d ",0x50);
  printf("%d ",0x51);
  printf("%d ",0x52);
  printf("%d ",0x53);
  printf("%d ",0x54);
  printf("%d ",0x55);
  printf("%d ",0x56);
  printf("%d ",0x57);
  printf("%d ",0x58);
  printf("%d ",0x59);
  printf("%d ",0x5a);
  printf("%d ",0x5b);
  printf("%d ",0x5c);
  printf("%d ",0x5d);
  printf("%d ",0x5e);
  printf("%d ",0x5f);
  printf("%d ",0x60);
  printf("%d ",0x61);
  printf("%d ",0x62);
  printf("%d ",99);
  printf("ZzZzZz...\n");
  return;
}



void short_multiplication_table(uint param_1)

{
  printf(&DAT_14000a017,0,(ulonglong)param_1,0);
  printf(&DAT_14000a017,1,(ulonglong)param_1,(ulonglong)param_1);
  printf(&DAT_14000a017,2,(ulonglong)param_1,(ulonglong)(param_1 * 2));
  printf(&DAT_14000a029,3,(ulonglong)param_1,(ulonglong)(param_1 * 3));
  printf(&DAT_14000a017,4,(ulonglong)param_1,(ulonglong)(param_1 * 4));
  printf(&DAT_14000a017,5,(ulonglong)param_1,(ulonglong)(param_1 * 5));
  printf(&DAT_14000a017,6,(ulonglong)param_1,(ulonglong)(param_1 * 6));
  printf(&DAT_14000a029,7,(ulonglong)param_1,(ulonglong)(param_1 * 7));
  printf(&DAT_14000a017,8,(ulonglong)param_1,(ulonglong)(param_1 * 8));
  printf(&DAT_14000a017,9,(ulonglong)param_1,(ulonglong)(param_1 * 9));
  printf(&DAT_14000a017,10,(ulonglong)param_1,(ulonglong)(param_1 * 10));
  printf(&DAT_14000a029,0xb,(ulonglong)param_1,(ulonglong)(param_1 * 0xb));
  printf(&DAT_14000a017,0xc,(ulonglong)param_1,(ulonglong)(param_1 * 0xc));
  printf(&DAT_14000a017,0xd,(ulonglong)param_1,(ulonglong)(param_1 * 0xd));
  printf(&DAT_14000a017,0xe,(ulonglong)param_1,(ulonglong)(param_1 * 0xe));
  printf(&DAT_14000a029,0xf,(ulonglong)param_1,(ulonglong)(param_1 * 0xf));
  printf(&DAT_14000a017,0x10,(ulonglong)param_1,(ulonglong)(param_1 * 0x10));
  printf(&DAT_14000a017,0x11,(ulonglong)param_1,(ulonglong)(param_1 * 0x11));
  printf(&DAT_14000a017,0x12,(ulonglong)param_1,(ulonglong)(param_1 * 0x12));
  printf(&DAT_14000a029,0x13,(ulonglong)param_1,(ulonglong)(param_1 * 0x13));
  return;
}



int __cdecl main(int _Argc,char **_Argv,char **_Env)

{
  __main();
  short_multiplication_table(0x13);
  count_sheep();
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __do_global_dtors(void)

{
  func_ptr p_Var1;
  
  p_Var1 = *__do_global_dtors::p;
  while (p_Var1 != (func_ptr)0x0) {
    (*p_Var1)();
    p_Var1 = __do_global_dtors::p[1];
    __do_global_dtors::p = __do_global_dtors::p + 1;
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __do_global_ctors(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  do {
    uVar3 = uVar2;
    iVar1 = (int)uVar3;
    uVar2 = (ulonglong)(iVar1 + 1);
  } while ((&___CTOR_LIST__)[iVar1 + 1] != 0);
  if (iVar1 != 0) {
    puVar4 = &___CTOR_LIST__ + uVar3;
    do {
      (*(code *)*puVar4)();
      puVar4 = puVar4 + -1;
    } while (puVar4 != (undefined8 *)(&UNK_1400082c8 + (uVar3 - (iVar1 - 1)) * 8));
  }
  atexit(__do_global_dtors);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __main(void)

{
  if (initialized != 0) {
    return;
  }
  initialized = 1;
  __do_global_ctors();
  return;
}



int __cdecl _setargv(void)

{
  return 0;
}



// WARNING: Unknown calling convention

BOOL __dyn_tls_dtor(HANDLE hDllHandle,DWORD dwReason,LPVOID lpreserved)

{
  if ((dwReason != 3) && (dwReason != 0)) {
    return 1;
  }
  __mingw_TLScallback(hDllHandle,dwReason,lpreserved);
  return 1;
}



// WARNING: Removing unreachable block (ram,0x000140001d23)
// WARNING: Removing unreachable block (ram,0x000140001d28)
// WARNING: Removing unreachable block (ram,0x000140001d30)
// WARNING: Removing unreachable block (ram,0x000140001d32)
// WARNING: Removing unreachable block (ram,0x000140001d3b)
// WARNING: Unknown calling convention

BOOL __dyn_tls_init(HANDLE hDllHandle,DWORD dwReason,LPVOID lpreserved)

{
  if (_CRT_MT != 2) {
    _CRT_MT = 2;
  }
  if ((dwReason != 2) && (dwReason == 1)) {
    __mingw_TLScallback(hDllHandle,1,lpreserved);
    return 1;
  }
  return 1;
}



// WARNING: Unknown calling convention

int __tlregdtor(_PVFV func)

{
  return 0;
}



int __cdecl _matherr(_exception *_Except)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char *pcVar4;
  FILE *_File;
  char *pcVar5;
  
  switch(_Except->type) {
  default:
    pcVar5 = "Unknown error";
    break;
  case 1:
    pcVar5 = "Argument domain error (DOMAIN)";
    break;
  case 2:
    pcVar5 = "Argument singularity (SIGN)";
    break;
  case 3:
    pcVar5 = "Overflow range error (OVERFLOW)";
    break;
  case 4:
    pcVar5 = "The result is too small to be represented (UNDERFLOW)";
    break;
  case 5:
    pcVar5 = "Total loss of significance (TLOSS)";
    break;
  case 6:
    pcVar5 = "Partial loss of significance (PLOSS)";
  }
  dVar1 = _Except->retval;
  dVar2 = _Except->arg2;
  dVar3 = _Except->arg1;
  pcVar4 = _Except->name;
  _File = __acrt_iob_func(2);
  fprintf((FILE *)_File,"_matherr(): %s in %s(%g, %g)  (retval=%g)\n",pcVar5,pcVar4,dVar3,dVar2,
          dVar1);
  return 0;
}



void __cdecl _fpreset(void)

{
  return;
}



// WARNING: Unknown calling convention

void __report_error(char *msg,...)

{
  FILE *pFVar1;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  va_list argp;
  
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  pFVar1 = __acrt_iob_func(2);
  fwrite("Mingw-w64 runtime failure:\n",1,0x1b,(FILE *)pFVar1);
  pFVar1 = __acrt_iob_func(2);
  vfprintf((FILE *)pFVar1,msg,(va_list)&local_res10);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention

void mark_section_writable(LPVOID addr)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  PBYTE *ppBVar4;
  PIMAGE_SECTION_HEADER p_Var5;
  sSecInfo *psVar6;
  PBYTE pBVar7;
  SIZE_T SVar8;
  longlong lVar9;
  int iVar10;
  MEMORY_BASIC_INFORMATION b;
  
  lVar9 = (longlong)maxSections;
  if (maxSections < 1) {
    lVar9 = 0;
  }
  else {
    iVar10 = 0;
    ppBVar4 = &the_secs->sec_start;
    do {
      if ((*ppBVar4 <= addr) &&
         (addr < *ppBVar4 + (((PIMAGE_SECTION_HEADER)ppBVar4[1])->Misc).PhysicalAddress)) {
        return;
      }
      iVar10 = iVar10 + 1;
      ppBVar4 = ppBVar4 + 5;
    } while (iVar10 != maxSections);
  }
  p_Var5 = __mingw_GetSectionForAddress(addr);
  if (p_Var5 == (PIMAGE_SECTION_HEADER)0x0) {
                    // WARNING: Subroutine does not return
    __report_error("Address %p has no image-section",addr);
  }
  psVar6 = the_secs + lVar9;
  psVar6->hash = p_Var5;
  psVar6->old_protect = 0;
  pBVar7 = _GetPEImageBase();
  uVar1 = p_Var5->VirtualAddress;
  the_secs[lVar9].sec_start = pBVar7 + uVar1;
  SVar8 = VirtualQuery(pBVar7 + uVar1,(PMEMORY_BASIC_INFORMATION)&b,0x30);
  if (SVar8 != 0) {
    if (((b.Protect - 0x40 & 0xffffffbf) != 0) && ((b.Protect - 4 & 0xfffffffb) != 0)) {
      DVar3 = 4;
      if (b.Protect != 2) {
        DVar3 = 0x40;
      }
      psVar6 = the_secs + lVar9;
      psVar6->base_address = b.BaseAddress;
      psVar6->region_size = b.RegionSize;
      BVar2 = VirtualProtect(b.BaseAddress,b.RegionSize,DVar3,&psVar6->old_protect);
      if (BVar2 == 0) {
        DVar3 = GetLastError();
                    // WARNING: Subroutine does not return
        __report_error("  VirtualProtect failed with code 0x%x",(ulonglong)DVar3);
      }
    }
    maxSections = maxSections + 1;
    return;
  }
                    // WARNING: Subroutine does not return
  __report_error("  VirtualQuery failed for %d bytes at address %p",
                 (ulonglong)(p_Var5->Misc).PhysicalAddress,the_secs[lVar9].sec_start);
}



// WARNING: Function: ___chkstk_ms replaced with injection: alloca_probe
// WARNING: Removing unreachable block (ram,0x0001400020f9)
// WARNING: Removing unreachable block (ram,0x000140002288)
// WARNING: Removing unreachable block (ram,0x000140002290)
// WARNING: Removing unreachable block (ram,0x00014000229e)
// WARNING: Removing unreachable block (ram,0x000140002105)
// WARNING: Removing unreachable block (ram,0x00014000210f)
// WARNING: Removing unreachable block (ram,0x000140002112)
// WARNING: Removing unreachable block (ram,0x00014000211a)
// WARNING: Removing unreachable block (ram,0x000140002398)
// WARNING: Removing unreachable block (ram,0x000140002126)
// WARNING: Removing unreachable block (ram,0x000140002133)
// WARNING: Removing unreachable block (ram,0x0001400021a3)
// WARNING: Removing unreachable block (ram,0x0001400022e8)
// WARNING: Removing unreachable block (ram,0x0001400022f4)
// WARNING: Removing unreachable block (ram,0x0001400022f8)
// WARNING: Removing unreachable block (ram,0x000140002308)
// WARNING: Removing unreachable block (ram,0x000140002317)
// WARNING: Removing unreachable block (ram,0x000140002321)
// WARNING: Removing unreachable block (ram,0x0001400021c3)
// WARNING: Removing unreachable block (ram,0x0001400022b0)
// WARNING: Removing unreachable block (ram,0x0001400022b9)
// WARNING: Removing unreachable block (ram,0x0001400022cc)
// WARNING: Removing unreachable block (ram,0x0001400022d5)
// WARNING: Removing unreachable block (ram,0x0001400021c9)
// WARNING: Removing unreachable block (ram,0x0001400021ce)
// WARNING: Removing unreachable block (ram,0x000140002378)
// WARNING: Removing unreachable block (ram,0x0001400021d7)
// WARNING: Removing unreachable block (ram,0x0001400021e8)
// WARNING: Removing unreachable block (ram,0x0001400021ec)
// WARNING: Removing unreachable block (ram,0x0001400021fc)
// WARNING: Removing unreachable block (ram,0x000140002209)
// WARNING: Removing unreachable block (ram,0x000140002216)
// WARNING: Removing unreachable block (ram,0x000140002150)
// WARNING: Removing unreachable block (ram,0x000140002160)
// WARNING: Removing unreachable block (ram,0x000140002164)
// WARNING: Removing unreachable block (ram,0x000140002174)
// WARNING: Removing unreachable block (ram,0x00014000217e)
// WARNING: Removing unreachable block (ram,0x000140002384)
// WARNING: Removing unreachable block (ram,0x00014000218b)
// WARNING: Removing unreachable block (ram,0x000140002196)
// WARNING: Removing unreachable block (ram,0x000140002338)
// WARNING: Removing unreachable block (ram,0x000140002341)
// WARNING: Removing unreachable block (ram,0x000140002350)
// WARNING: Removing unreachable block (ram,0x000140002373)
// WARNING: Removing unreachable block (ram,0x000140002230)
// WARNING: Removing unreachable block (ram,0x00014000223e)
// WARNING: Removing unreachable block (ram,0x000140002250)
// WARNING: Removing unreachable block (ram,0x000140002262)
// WARNING: Removing unreachable block (ram,0x00014000226f)
// WARNING: Removing unreachable block (ram,0x00014000227e)
// WARNING: Unknown calling convention -- yet parameter storage is locked

void _pei386_runtime_relocator(void)

{
  int iVar1;
  DWORD oldprot;
  
  if (_pei386_runtime_relocator::was_init == 0) {
    _pei386_runtime_relocator::was_init = 1;
    iVar1 = __mingw_GetSectionCount();
    maxSections = 0;
    the_secs = (sSecInfo *)
               (&stack0xffffffffffffffa8 + -((longlong)iVar1 * 0x28 + 0xfU & 0xfffffffffffffff0));
  }
  return;
}



// WARNING: Unknown calling convention

void __mingw_raise_matherr(int typ,char *name,double a1,double a2,double rslt)

{
  _exception ex;
  
  if (stUserMathErr != (fUserMathErr)0x0) {
    ex.retval = rslt;
    ex.type = typ;
    ex.name = name;
    ex.arg1 = a1;
    ex.arg2 = a2;
    (*stUserMathErr)(&ex);
  }
  return;
}



// WARNING: Unknown calling convention

void __mingw_setusermatherr(_func_int__exception_ptr *f)

{
  stUserMathErr = f;
  __setusermatherr();
  return;
}



// WARNING: Unknown calling convention

long _gnu_exception_handler(EXCEPTION_POINTERS *exception_data)

{
  uint uVar1;
  LONG LVar2;
  code *extraout_RAX;
  code *extraout_RAX_00;
  code *pcVar3;
  code *extraout_RAX_01;
  code *extraout_RAX_02;
  
  uVar1 = exception_data->ExceptionRecord->ExceptionCode;
  if (((uVar1 & 0x20ffffff) == 0x20474343) &&
     ((exception_data->ExceptionRecord->ExceptionFlags & 1) == 0)) {
    return -1;
  }
  if (0xc0000096 < uVar1) goto LAB_1400024d7;
  if (uVar1 < 0xc000008c) {
    if (uVar1 == 0xc0000005) {
      signal(0xb);
      if (extraout_RAX_02 == (code *)0x1) {
        signal(0xb);
        return -1;
      }
      if (extraout_RAX_02 != (code *)0x0) {
        (*extraout_RAX_02)(0xb);
        return -1;
      }
      goto LAB_1400024d7;
    }
    if (uVar1 < 0xc0000006) {
      if (uVar1 == 0x80000002) {
        return -1;
      }
      goto LAB_1400024d7;
    }
    if (uVar1 == 0xc0000008) {
      return -1;
    }
    if (uVar1 != 0xc000001d) goto LAB_1400024d7;
switchD_14000245c_caseD_c0000096:
    signal(4);
    if (extraout_RAX == (code *)0x1) {
      signal(4);
      return -1;
    }
    if (extraout_RAX != (code *)0x0) {
      (*extraout_RAX)(4);
      return -1;
    }
  }
  else {
    switch(uVar1) {
    case 0xc000008d:
    case 0xc000008e:
    case 0xc000008f:
    case 0xc0000090:
    case 0xc0000091:
    case 0xc0000093:
      signal(8);
      pcVar3 = extraout_RAX_00;
      if (extraout_RAX_00 == (code *)0x1) {
        signal(8);
        _fpreset();
        return -1;
      }
      break;
    default:
      return -1;
    case 0xc0000094:
      signal(8);
      pcVar3 = extraout_RAX_01;
      if (extraout_RAX_01 == (code *)0x1) {
        signal(8);
        return -1;
      }
      break;
    case 0xc0000096:
      goto switchD_14000245c_caseD_c0000096;
    }
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(8);
      return -1;
    }
  }
LAB_1400024d7:
  if (__mingw_oldexcpt_handler != (LPTOP_LEVEL_EXCEPTION_FILTER)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001400024ec. Too many branches
                    // WARNING: Treating indirect jump as call
    LVar2 = (*__mingw_oldexcpt_handler)(exception_data);
    return LVar2;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __mingwthr_run_key_dtors(void)

{
  __mingwthr_key_t *p_Var1;
  DWORD DVar2;
  LPVOID pvVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
  for (p_Var1 = key_dtor_list; p_Var1 != (__mingwthr_key_t *)0x0; p_Var1 = p_Var1->next) {
    pvVar3 = TlsGetValue(p_Var1->key);
    DVar2 = GetLastError();
    if ((DVar2 == 0) && (pvVar3 != (LPVOID)0x0)) {
      (*p_Var1->dtor)(pvVar3);
    }
  }
                    // WARNING: Could not recover jumptable at 0x00014000263a. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
  return;
}



// WARNING: Unknown calling convention

int ___w64_mingwthr_add_key_dtor(DWORD key,_func_void_void_ptr *dtor)

{
  int iVar1;
  __mingwthr_key_t *p_Var2;
  
  iVar1 = __mingwthr_cs_init;
  if (__mingwthr_cs_init != 0) {
    p_Var2 = (__mingwthr_key_t *)calloc(1,0x18);
    if (p_Var2 != (__mingwthr_key_t *)0x0) {
      p_Var2->key = key;
      p_Var2->dtor = dtor;
      EnterCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
      p_Var2->next = key_dtor_list;
      key_dtor_list = p_Var2;
      LeaveCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
      return 0;
    }
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int ___w64_mingwthr_remove_key_dtor(DWORD key)

{
  __mingwthr_key_t *p_Var1;
  __mingwthr_key_t *_Memory;
  __mingwthr_key_t *p_Var2;
  
  if (__mingwthr_cs_init == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
  if (key_dtor_list != (__mingwthr_key_t *)0x0) {
    p_Var1 = key_dtor_list;
    p_Var2 = (__mingwthr_key_t *)0x0;
    do {
      _Memory = p_Var1;
      p_Var1 = _Memory->next;
      if (_Memory->key == key) {
        if (p_Var2 != (__mingwthr_key_t *)0x0) {
          p_Var2->next = p_Var1;
          p_Var1 = key_dtor_list;
        }
        key_dtor_list = p_Var1;
        free(_Memory);
        break;
      }
      p_Var2 = _Memory;
    } while (p_Var1 != (__mingwthr_key_t *)0x0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
  return 0;
}



// WARNING: Unknown calling convention

WINBOOL __mingw_TLScallback(HANDLE hDllHandle,DWORD reason,LPVOID reserved)

{
  __mingwthr_key_t *p_Var1;
  __mingwthr_key_t *_Memory;
  
  if (reason == 2) {
    _fpreset();
    return 1;
  }
  if (reason < 3) {
    if (reason == 0) {
      if (__mingwthr_cs_init != 0) {
        __mingwthr_run_key_dtors();
      }
      if (__mingwthr_cs_init == 1) {
        __mingwthr_cs_init = 1;
        _Memory = key_dtor_list;
        while (_Memory != (__mingwthr_key_t *)0x0) {
          p_Var1 = _Memory->next;
          free(_Memory);
          _Memory = p_Var1;
        }
        key_dtor_list = (__mingwthr_key_t *)0x0;
        __mingwthr_cs_init = 0;
        DeleteCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
      }
    }
    else {
      if (__mingwthr_cs_init == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&__mingwthr_cs);
      }
      __mingwthr_cs_init = 1;
    }
  }
  else if ((reason == 3) && (__mingwthr_cs_init != 0)) {
    __mingwthr_run_key_dtors();
  }
  return 1;
}



BOOL __cdecl _ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (BOOL)((short)*(int *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) ==
                 0x20b);
  }
  return 0;
}



PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  PIMAGE_SECTION_HEADER p_Var1;
  int iVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  
  iVar2 = *(int *)(pImageBase + 0x3c);
  p_Var3 = (PIMAGE_SECTION_HEADER)
           (pImageBase +
           (ulonglong)*(ushort *)(pImageBase + (longlong)iVar2 + 0x14) + (longlong)iVar2 + 0x18);
  if (*(ushort *)(pImageBase + (longlong)iVar2 + 6) != 0) {
    p_Var1 = p_Var3 + (ulonglong)(*(ushort *)(pImageBase + (longlong)iVar2 + 6) - 1) + 1;
    do {
      if ((p_Var3->VirtualAddress <= rva) &&
         (rva < p_Var3->VirtualAddress + (p_Var3->Misc).PhysicalAddress)) {
        return p_Var3;
      }
      p_Var3 = p_Var3 + 1;
    } while (p_Var3 != p_Var1);
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// WARNING: Unknown calling convention
// WARNING: Enum "SectionFlags": Some values do not have unique names

PIMAGE_SECTION_HEADER _FindPESectionByName(char *pName)

{
  int iVar1;
  size_t sVar2;
  IMAGE_SECTION_HEADER *_Str1;
  
  sVar2 = strlen(pName);
  if (sVar2 < 9) {
    _Str1 = &IMAGE_SECTION_HEADER_140000188;
    do {
      iVar1 = strncmp(_Str1->Name,pName,8);
      if (iVar1 == 0) {
        return (PIMAGE_SECTION_HEADER)_Str1;
      }
      _Str1 = (IMAGE_SECTION_HEADER *)((PIMAGE_SECTION_HEADER)_Str1 + 1);
    } while ((PIMAGE_SECTION_HEADER)_Str1 != (PIMAGE_SECTION_HEADER)&DAT_140000480);
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// WARNING: Unknown calling convention
// WARNING: Enum "SectionFlags": Some values do not have unique names

PIMAGE_SECTION_HEADER __mingw_GetSectionForAddress(LPVOID p)

{
  IMAGE_SECTION_HEADER *pIVar1;
  
  pIVar1 = &IMAGE_SECTION_HEADER_140000188;
  while (((longlong)p - 0x140000000U < (ulonglong)((PIMAGE_SECTION_HEADER)pIVar1)->VirtualAddress ||
         ((ulonglong)
          (((PIMAGE_SECTION_HEADER)pIVar1)->VirtualAddress +
          ((Misc *)&((PIMAGE_SECTION_HEADER)pIVar1)->Misc)->PhysicalAddress) <=
          (longlong)p - 0x140000000U))) {
    pIVar1 = (IMAGE_SECTION_HEADER *)((PIMAGE_SECTION_HEADER)pIVar1 + 1);
    if ((PIMAGE_SECTION_HEADER)pIVar1 == (PIMAGE_SECTION_HEADER)&DAT_140000480) {
      return (PIMAGE_SECTION_HEADER)0x0;
    }
  }
  return (PIMAGE_SECTION_HEADER)pIVar1;
}



// WARNING: Removing unreachable block (ram,0x000140002a20)
// WARNING: Unknown calling convention

int __mingw_GetSectionCount(void)

{
  return 0x13;
}



// WARNING: Unknown calling convention
// WARNING: Enum "SectionFlags": Some values do not have unique names

PIMAGE_SECTION_HEADER _FindPESectionExec(size_t eNo)

{
  IMAGE_SECTION_HEADER *pIVar1;
  
  pIVar1 = &IMAGE_SECTION_HEADER_140000188;
  do {
    if ((((PIMAGE_SECTION_HEADER)pIVar1)->Characteristics & IMAGE_SCN_MEM_EXECUTE) != 0) {
      if (eNo == 0) {
        return (PIMAGE_SECTION_HEADER)pIVar1;
      }
      eNo = eNo - 1;
    }
    pIVar1 = (IMAGE_SECTION_HEADER *)((PIMAGE_SECTION_HEADER)pIVar1 + 1);
  } while ((PIMAGE_SECTION_HEADER)pIVar1 != (PIMAGE_SECTION_HEADER)&DAT_140000480);
  return (PIMAGE_SECTION_HEADER)0x0;
}



// WARNING: Removing unreachable block (ram,0x000140002ad0)
// WARNING: Unknown calling convention

PBYTE _GetPEImageBase(void)

{
  return (PBYTE)&IMAGE_DOS_HEADER_140000000;
}



// WARNING: Removing unreachable block (ram,0x000140002b10)
// WARNING: Enum "SectionFlags": Some values do not have unique names

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  IMAGE_SECTION_HEADER *pIVar1;
  
  pIVar1 = &IMAGE_SECTION_HEADER_140000188;
  while ((pTarget + -0x140000000 < (PBYTE)(ulonglong)(uint)pIVar1->VirtualAddress ||
         ((PBYTE)(ulonglong)(pIVar1->VirtualAddress + (pIVar1->Misc).PhysicalAddress) <=
          pTarget + -0x140000000))) {
    pIVar1 = pIVar1 + 1;
    if (pIVar1 == (IMAGE_SECTION_HEADER *)&DAT_140000480) {
      return 0;
    }
  }
  return ~pIVar1->Characteristics >> 0x1f;
}



// WARNING: Removing unreachable block (ram,0x000140002ba2)
// WARNING: Unknown calling convention
// WARNING: Enum "SectionFlags": Some values do not have unique names

char * __mingw_enum_import_library_names(int i)

{
  dword *pdVar1;
  IMAGE_SECTION_HEADER *pIVar2;
  
  pIVar2 = &IMAGE_SECTION_HEADER_140000188;
  while ((0xe000 < (uint)pIVar2->VirtualAddress ||
         (pIVar2->VirtualAddress + (pIVar2->Misc).PhysicalAddress < 0xe001))) {
    pIVar2 = pIVar2 + 1;
    if (pIVar2 == (IMAGE_SECTION_HEADER *)&DAT_140000480) {
      return (char *)0x0;
    }
  }
  for (pdVar1 = &DWORD_14000e000; (pdVar1[1] != 0 || (pdVar1[3] != 0)); pdVar1 = pdVar1 + 5) {
    if (i < 1) {
      return IMAGE_DOS_HEADER_140000000.e_magic + pdVar1[3];
    }
    i = i + -1;
  }
  return (char *)0x0;
}



// WARNING: This is an inlined function

ulonglong ___chkstk_ms(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 local_res8 [4];
  
  puVar2 = local_res8;
  uVar1 = in_RAX;
  if (0xfff < in_RAX) {
    do {
      puVar2 = puVar2 + -0x200;
      *puVar2 = *puVar2;
      uVar1 = uVar1 - 0x1000;
    } while (0x1000 < uVar1);
  }
  *(undefined8 *)((longlong)puVar2 - uVar1) = *(undefined8 *)((longlong)puVar2 - uVar1);
  return in_RAX;
}



// WARNING: Unknown calling convention

int __mingw_vfprintf(FILE *stream,char *fmt,va_list argv)

{
  int iVar1;
  
  _lock_file((FILE *)stream);
  iVar1 = __mingw_pformat(0x6000,stream,0,fmt,argv);
  _unlock_file((FILE *)stream);
  return iVar1;
}



char * __pformat_cvt(int mode,long_double *val,int nd,int *dp,int *sign)

{
  char *pcVar1;
  uint uVar2;
  int be;
  ushort uVar3;
  int k;
  char *ep;
  __pformat_fpreg_t x;
  
  x.__pformat_fpreg_double_t = (double)*(undefined8 *)val;
  x._8_4_ = *(uint *)((longlong)val + 8);
  uVar3 = (ushort)x._8_4_ & 0x7fff;
  if ((x._8_4_ & 0x7fff) == 0) {
    if ((int)x.field_2.__pformat_fpreg_mantissa == 0 &&
        (int)(x.field_2.__pformat_fpreg_mantissa >> 0x20) == 0) {
      k = 0;
      be = 0;
    }
    else {
      if ((longlong)x.field_2.__pformat_fpreg_mantissa < 0) goto LAB_140002d0b;
      k = 2;
      be = -0x403d;
    }
  }
  else if (uVar3 == 0x7fff) {
    if ((x.field_2.__pformat_fpreg_mantissa & 0x7fffffff00000000) != 0 ||
        (int)x.field_2.__pformat_fpreg_mantissa != 0) {
      k = 4;
      be = 0;
      uVar2 = 0;
      goto LAB_140002d24;
    }
    k = 3;
    be = 0;
  }
  else {
LAB_140002d0b:
    k = 1;
    be = (int)(short)(uVar3 + 0xbfc2);
  }
  uVar2 = x._8_4_ & 0x8000;
LAB_140002d24:
  *sign = uVar2;
  pcVar1 = __gdtoa(&__pformat_cvt::fpi,be,&x.__pformat_fpreg_bits,&k,mode,nd,dp,&ep);
  return pcVar1;
}



// WARNING: Unknown calling convention

void __pformat_putc(int c,__pformat_t *stream)

{
  int iVar1;
  
  if (((stream->flags & 0x4000U) != 0) || (iVar1 = stream->count, iVar1 < stream->quota)) {
    if ((stream->flags & 0x2000U) != 0) {
      fputc(c,(FILE *)stream->dest);
      stream->count = stream->count + 1;
      return;
    }
    *(char *)((longlong)&((FILE *)stream->dest)->_ptr + (longlong)stream->count) = (char)c;
    iVar1 = stream->count;
  }
  stream->count = iVar1 + 1;
  return;
}



// WARNING: Unknown calling convention

void __pformat_wputchars(wchar_t *s,int count,__pformat_t *stream)

{
  wchar_t _Source;
  int iVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  mbstate_t state;
  char buf [16];
  
  wcrtomb(buf,L'\0',(mbstate_t *)&state);
  iVar1 = stream->precision;
  iVar3 = iVar1;
  if (count <= iVar1) {
    iVar3 = count;
  }
  if (-1 < iVar1) {
    count = iVar3;
  }
  if (count < stream->width) {
    iVar1 = stream->width - count;
    stream->width = iVar1;
    if ((stream->flags & 0x400) == 0) {
      stream->width = iVar1 + -1;
      do {
        __pformat_putc(0x20,stream);
        iVar1 = stream->width;
        stream->width = iVar1 + -1;
      } while (iVar1 != 0);
      goto LAB_140002e6e;
    }
    if (count < 1) {
      stream->width = iVar1 + -1;
      goto LAB_140002f18;
    }
  }
  else {
    stream->width = -1;
LAB_140002e6e:
    if (count < 1) {
      stream->width = -2;
      return;
    }
  }
  do {
    _Source = *s;
    s = s + 1;
    sVar2 = wcrtomb(buf,_Source,(mbstate_t *)&state);
    if ((int)sVar2 < 1) goto LAB_140002f25;
    pcVar4 = buf;
    do {
      while( true ) {
        pcVar5 = pcVar4 + 1;
        if (((stream->flags & 0x4000U) != 0) || (iVar1 = stream->count, iVar1 < stream->quota))
        break;
LAB_140002ebb:
        stream->count = iVar1 + 1;
        pcVar4 = pcVar5;
        if (pcVar5 == buf + (ulonglong)((int)sVar2 - 1) + 1) goto LAB_140002efc;
      }
      if ((stream->flags & 0x2000U) == 0) {
        *(char *)((longlong)&((FILE *)stream->dest)->_ptr + (longlong)stream->count) = *pcVar4;
        iVar1 = stream->count;
        goto LAB_140002ebb;
      }
      fputc((int)*pcVar4,(FILE *)stream->dest);
      stream->count = stream->count + 1;
      pcVar4 = pcVar5;
    } while (pcVar5 != buf + (ulonglong)((int)sVar2 - 1) + 1);
LAB_140002efc:
    count = count + -1;
  } while (count != 0);
  iVar1 = stream->width;
  stream->width = iVar1 + -1;
  if (iVar1 < 1) {
    return;
  }
LAB_140002f18:
  do {
    __pformat_putc(0x20,stream);
LAB_140002f25:
    iVar1 = stream->width;
    stream->width = iVar1 + -1;
  } while (0 < iVar1);
  return;
}



// WARNING: Unknown calling convention

void __pformat_putchars(char *s,int count,__pformat_t *stream)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = stream->precision;
  iVar3 = iVar2;
  if (count <= iVar2) {
    iVar3 = count;
  }
  if (-1 < iVar2) {
    count = iVar3;
  }
  if (count < stream->width) {
    iVar2 = stream->width - count;
    stream->width = iVar2;
    uVar1 = stream->flags;
    if ((uVar1 & 0x400) != 0) {
      if (count == 0) {
        stream->width = iVar2 + -1;
        goto LAB_140003041;
      }
      goto LAB_140002fce;
    }
    stream->width = iVar2 + -1;
    do {
      __pformat_putc(0x20,stream);
      iVar2 = stream->width;
      stream->width = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    stream->width = -1;
  }
  if (count == 0) {
    stream->width = -2;
    return;
  }
  uVar1 = stream->flags;
LAB_140002fce:
  pcVar4 = s + (count - 1);
  while( true ) {
    if (((uVar1 & 0x4000) != 0) || (iVar2 = stream->count, iVar2 < stream->quota)) {
      if ((uVar1 & 0x2000) == 0) {
        *(char *)((longlong)&((FILE *)stream->dest)->_ptr + (longlong)stream->count) = *s;
        iVar2 = stream->count;
      }
      else {
        fputc((int)*s,(FILE *)stream->dest);
        iVar2 = stream->count;
      }
    }
    stream->count = iVar2 + 1;
    if (pcVar4 == s) break;
    uVar1 = stream->flags;
    s = s + 1;
  }
  while (iVar2 = stream->width, stream->width = iVar2 + -1, 0 < iVar2) {
    uVar1 = stream->flags;
LAB_140003041:
    if (((uVar1 & 0x4000) != 0) || (iVar2 = stream->count, iVar2 < stream->quota)) {
      if ((uVar1 & 0x2000) == 0) {
        *(undefined1 *)((longlong)&((FILE *)stream->dest)->_ptr + (longlong)stream->count) = 0x20;
        iVar2 = stream->count;
      }
      else {
        fputc(0x20,(FILE *)stream->dest);
        iVar2 = stream->count;
      }
    }
    stream->count = iVar2 + 1;
  }
  return;
}



// WARNING: Unknown calling convention

void __pformat_puts(char *s,__pformat_t *stream)

{
  int count;
  size_t sVar1;
  
  if (s == (char *)0x0) {
    s = "(null)";
  }
  if (stream->precision < 0) {
    sVar1 = strlen(s);
    count = (int)sVar1;
  }
  else {
    sVar1 = strnlen(s,(longlong)stream->precision);
    count = (int)sVar1;
  }
  __pformat_putchars(s,count,stream);
  return;
}



// WARNING: Unknown calling convention

void __pformat_emit_inf_or_nan(int sign,char *value,__pformat_t *stream)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  char buf [4];
  
  uVar1 = stream->flags;
  stream->precision = -1;
  if (sign == 0) {
    if ((uVar1 & 0x100) == 0) {
      if ((uVar1 & 0x40) == 0) {
        pcVar3 = buf;
      }
      else {
        buf[0] = ' ';
        pcVar3 = buf + 1;
      }
    }
    else {
      buf[0] = '+';
      pcVar3 = buf + 1;
    }
  }
  else {
    buf[0] = '-';
    pcVar3 = buf + 1;
  }
  lVar2 = 0;
  do {
    pcVar3[lVar2] = value[lVar2] & 0xdfU | (byte)uVar1 & 0x20;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  __pformat_putchars(buf,((int)pcVar3 + 3) - (int)buf,stream);
  return;
}



// WARNING: Function: ___chkstk_ms replaced with injection: alloca_probe
// DWARF original prototype: void __pformat_xint(int fmt, __pformat_intarg_t value, __pformat_t *
// stream, __pformat_intarg_t value)

void __pformat_xint(int fmt,__pformat_intarg_t *value,__pformat_t *stream,
                   __pformat_intarg_t *value_1)

{
  FILE *pFVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  sbyte sVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  byte bVar16;
  uint uVar17;
  byte *pbVar18;
  byte bVar19;
  bool bVar20;
  undefined1 auStack_78 [32];
  byte abStack_58 [12];
  int local_4c;
  
  bVar19 = (byte)fmt;
  if (fmt == 0x6f) {
    iVar10 = stream->precision;
    uVar13 = stream->flags;
    iVar15 = 0;
    if (-1 < iVar10) {
      iVar15 = iVar10;
    }
    uVar4 = iVar15 + 0x18;
    if ((uVar13 & 0x1000) == 0) {
      uVar17 = stream->width;
      if ((int)uVar4 <= (int)uVar17) {
        uVar4 = uVar17;
      }
    }
    else {
      if (stream->thousands_chr != L'\0') {
        sVar7 = 3;
        goto LAB_1400033c9;
      }
      uVar17 = stream->width;
      if ((int)uVar4 < (int)uVar17) {
        uVar4 = uVar17;
      }
    }
    sVar7 = 3;
    lVar2 = -((longlong)(int)uVar4 + 0xfU & 0xfffffffffffffff0);
    puVar8 = auStack_78 + lVar2;
    pbVar11 = abStack_58 + lVar2;
LAB_140003547:
    bVar14 = 7;
LAB_140003231:
    puVar9 = puVar8;
    pbVar18 = pbVar11;
    if (value == (__pformat_intarg_t *)0x0) goto LAB_140003420;
LAB_14000323d:
    pbVar12 = pbVar18;
    do {
      pbVar11 = pbVar12 + 1;
      bVar3 = bVar14 & (byte)value;
      bVar16 = bVar3 + 0x30;
      bVar3 = bVar3 + 0x37 | bVar19 & 0x20;
      if (bVar16 < 0x3a) {
        bVar3 = bVar16;
      }
      value = (__pformat_intarg_t *)((ulonglong)value >> sVar7);
      *pbVar12 = bVar3;
      pbVar12 = pbVar11;
    } while (value != (__pformat_intarg_t *)0x0);
    if (pbVar11 == pbVar18) goto LAB_140003420;
    if (0 < iVar10) goto LAB_140003283;
LAB_140003438:
    if ((fmt == 0x6f) && ((stream->flags & 0x800) != 0)) {
      *pbVar12 = 0x30;
      pbVar12 = pbVar12 + 1;
    }
    if ((pbVar12 != pbVar18) || (iVar10 == 0)) goto LAB_1400032b7;
LAB_140003454:
    *pbVar12 = 0x30;
    pbVar12 = pbVar12 + 1;
    iVar15 = (int)pbVar12 - (int)pbVar18;
    if ((int)uVar17 <= iVar15) goto LAB_1400032c6;
LAB_140003470:
    iVar15 = uVar17 - iVar15;
    uVar13 = stream->flags;
    stream->width = iVar15;
    if (fmt == 0x6f) {
      if ((iVar10 < 0) && ((uVar13 & 0x600) == 0x200)) {
LAB_140003632:
        local_4c = iVar15 + -1;
        pbVar11 = pbVar12 + iVar15;
        *(undefined8 *)(puVar9 + -8) = 0x140003655;
        memset(pbVar12,0x30,(longlong)iVar15);
        iVar15 = local_4c - iVar15;
        if ((fmt != 0x6f) && (pbVar12 = pbVar11, (uVar13 & 0x800) != 0)) goto LAB_1400034a2;
        goto LAB_1400034ad;
      }
    }
    else {
      if ((uVar13 & 0x800) == 0) {
        if (-1 < iVar10) goto joined_r0x00014000357f;
LAB_140003680:
        if ((uVar13 & 0x600) == 0x200) goto LAB_140003632;
        if ((uVar13 & 0x800) == 0) goto joined_r0x00014000357f;
      }
      else {
        iVar15 = iVar15 + -2;
        if ((0 < iVar15) && (iVar10 < 0)) goto LAB_140003680;
      }
LAB_1400034a2:
      *pbVar12 = bVar19;
      pbVar11 = pbVar12 + 2;
      pbVar12[1] = 0x30;
LAB_1400034ad:
      if (iVar15 < 1) {
LAB_1400032e7:
        pbVar12 = pbVar11;
        iVar10 = iVar15;
        if (pbVar11 <= pbVar18) {
          return;
        }
        goto LAB_14000330d;
      }
      uVar13 = stream->flags;
      pbVar12 = pbVar11;
    }
joined_r0x00014000357f:
    if ((uVar13 & 0x400) != 0) {
      if (pbVar18 < pbVar12) goto LAB_140003310;
      iVar10 = iVar15 + -1;
      goto LAB_140003371;
    }
    do {
      iVar15 = iVar15 + -1;
      *(undefined8 *)(puVar9 + -8) = 0x1400034dd;
      __pformat_putc(0x20,stream);
    } while (0 < iVar15);
    iVar15 = -1;
    iVar10 = -1;
    if (pbVar12 <= pbVar18) goto LAB_140003345;
  }
  else {
    iVar10 = stream->precision;
    uVar13 = stream->flags;
    iVar15 = 0;
    if (-1 < iVar10) {
      iVar15 = iVar10;
    }
    uVar4 = iVar15 + 0x12;
    if ((uVar13 & 0x1000) == 0) {
      uVar17 = stream->width;
      if ((int)uVar4 < (int)uVar17) {
        uVar4 = uVar17;
      }
      sVar7 = 4;
      bVar14 = 0xf;
      lVar2 = -((longlong)(int)uVar4 + 0xfU & 0xfffffffffffffff0);
      puVar8 = auStack_78 + lVar2;
      pbVar11 = abStack_58 + lVar2;
      goto LAB_140003231;
    }
    sVar7 = 4;
    if (stream->thousands_chr == L'\0') {
      uVar17 = stream->width;
      if ((int)uVar4 < (int)uVar17) {
        uVar4 = uVar17;
      }
      lVar2 = -((longlong)(int)uVar4 + 0xfU & 0xfffffffffffffff0);
      puVar9 = auStack_78 + lVar2;
      pbVar11 = abStack_58 + lVar2;
    }
    else {
LAB_1400033c9:
      uVar17 = stream->width;
      uVar4 = (uint)((ulonglong)uVar4 * 0x2aaaaaaab >> 0x20);
      uVar6 = uVar4 >> 1;
      if ((int)(uVar4 >> 1) < (int)uVar17) {
        uVar6 = uVar17;
      }
      lVar2 = -((longlong)(int)uVar6 + 0xfU & 0xfffffffffffffff0);
      puVar8 = auStack_78 + lVar2;
      puVar9 = auStack_78 + lVar2;
      pbVar11 = abStack_58 + lVar2;
      if (fmt == 0x6f) goto LAB_140003547;
    }
    bVar14 = 0xf;
    pbVar18 = pbVar11;
    if (value != (__pformat_intarg_t *)0x0) goto LAB_14000323d;
LAB_140003420:
    stream->flags = uVar13 & 0xfffff7ff;
    pbVar12 = pbVar11;
    if (iVar10 < 1) goto LAB_140003438;
LAB_140003283:
    iVar15 = iVar10 - ((int)pbVar11 - (int)pbVar18);
    pbVar12 = pbVar11;
    if (iVar15 < 1) goto LAB_140003438;
    pbVar12 = pbVar11 + iVar15;
    *(undefined8 *)(puVar9 + -8) = 0x1400032ae;
    memset(pbVar11,0x30,(longlong)iVar15);
    if (pbVar12 == pbVar18) goto LAB_140003454;
LAB_1400032b7:
    iVar15 = (int)pbVar12 - (int)pbVar18;
    if (iVar15 < (int)uVar17) goto LAB_140003470;
LAB_1400032c6:
    stream->width = -1;
    if (fmt != 0x6f) {
      iVar15 = -1;
      pbVar11 = pbVar12;
      if ((stream->flags & 0x800) != 0) {
        *pbVar12 = bVar19;
        pbVar11 = pbVar12 + 2;
        pbVar12[1] = 0x30;
      }
      goto LAB_1400032e7;
    }
    iVar10 = -1;
    if (pbVar12 <= pbVar18) {
      return;
    }
  }
LAB_14000330d:
  do {
    while( true ) {
      iVar15 = iVar10;
      uVar13 = stream->flags;
LAB_140003310:
      pbVar12 = pbVar12 + -1;
      iVar10 = iVar15;
      if (((uVar13 & 0x4000) != 0) || (iVar5 = stream->count, iVar5 < stream->quota)) break;
LAB_140003302:
      stream->count = iVar5 + 1;
      if (pbVar12 <= pbVar18) goto LAB_140003345;
    }
    bVar19 = *pbVar12;
    pFVar1 = (FILE *)stream->dest;
    if ((uVar13 & 0x2000) == 0) {
      *(byte *)((longlong)&pFVar1->_ptr + (longlong)stream->count) = bVar19;
      iVar5 = stream->count;
      goto LAB_140003302;
    }
    *(undefined8 *)(puVar9 + -8) = 0x140003337;
    fputc((int)(char)bVar19,pFVar1);
    stream->count = stream->count + 1;
  } while (pbVar18 < pbVar12);
LAB_140003345:
  iVar10 = iVar15 + -1;
  if (0 < iVar15) {
    do {
      while( true ) {
        uVar13 = stream->flags;
LAB_140003371:
        if (((uVar13 & 0x4000) != 0) || (iVar15 = stream->count, iVar15 < stream->quota)) break;
LAB_140003363:
        stream->count = iVar15 + 1;
        bVar20 = iVar10 == 0;
        iVar10 = iVar10 + -1;
        if (bVar20) {
          return;
        }
      }
      pFVar1 = (FILE *)stream->dest;
      if ((uVar13 & 0x2000) == 0) {
        *(undefined1 *)((longlong)&pFVar1->_ptr + (longlong)stream->count) = 0x20;
        iVar15 = stream->count;
        goto LAB_140003363;
      }
      *(undefined8 *)(puVar9 + -8) = 0x140003396;
      fputc(0x20,pFVar1);
      stream->count = stream->count + 1;
      bVar20 = iVar10 != 0;
      iVar10 = iVar10 + -1;
    } while (bVar20);
  }
  return;
}



// WARNING: Function: ___chkstk_ms replaced with injection: alloca_probe
// DWARF original prototype: void __pformat_int(__pformat_intarg_t value, __pformat_t * stream,
// __pformat_intarg_t value)

void __pformat_int(__pformat_intarg_t *value,__pformat_t *stream,__pformat_intarg_t *value_1)

{
  size_t _Size;
  char *pcVar1;
  char cVar2;
  uint uVar3;
  FILE *pFVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  __pformat_intarg_t *p_Var8;
  char *pcVar9;
  char *_Dst;
  int iVar10;
  uint uVar11;
  undefined8 auStack_70 [5];
  char local_48 [8];
  
  iVar7 = stream->precision;
  uVar11 = stream->flags;
  iVar10 = 0;
  if (-1 < iVar7) {
    iVar10 = iVar7;
  }
  uVar6 = iVar10 + 0x17;
  if (((uVar11 & 0x1000) != 0) && (stream->thousands_chr != L'\0')) {
    uVar6 = (uint)((ulonglong)uVar6 * 0x2aaaaaaab >> 0x21);
  }
  uVar3 = stream->width;
  if ((int)uVar6 <= (int)uVar3) {
    uVar6 = uVar3;
  }
  auStack_70[0] = 0x140003727;
  lVar5 = -((longlong)(int)uVar6 + 0xfU & 0xfffffffffffffff0);
  pcVar1 = local_48 + lVar5;
  if ((uVar11 & 0x80) == 0) {
LAB_140003746:
    if (value != (__pformat_intarg_t *)0x0) goto LAB_14000374f;
    pcVar9 = pcVar1;
    _Dst = pcVar1;
    iVar10 = iVar7;
    if (0 < iVar7) goto LAB_1400037ea;
LAB_140003989:
    if (iVar7 == 0) goto LAB_140003809;
  }
  else {
    if (-1 < (longlong)value) {
      uVar11 = uVar11 & 0xffffff7f;
      stream->flags = uVar11;
      goto LAB_140003746;
    }
    value = (__pformat_intarg_t *)-(longlong)value;
LAB_14000374f:
    _Dst = pcVar1;
    while( true ) {
      pcVar9 = _Dst;
      _Dst = pcVar9 + 1;
      p_Var8 = (__pformat_intarg_t *)((ulonglong)value / 10);
      *pcVar9 = (char)value + (char)p_Var8 * -10 + '0';
      if (value < (__pformat_intarg_t *)0xa) break;
      value = p_Var8;
      if ((((pcVar1 != _Dst) && ((uVar11 & 0x1000) != 0)) && (stream->thousands_chr != L'\0')) &&
         (((longlong)_Dst - (longlong)pcVar1 & 0x8000000000000003U) == 3)) {
        pcVar9[1] = ',';
        _Dst = pcVar9 + 2;
      }
    }
    if (iVar7 < 1) {
      if (pcVar1 != _Dst) goto LAB_140003809;
      goto LAB_140003989;
    }
    iVar10 = iVar7 - ((int)_Dst - (int)pcVar1);
    pcVar9 = _Dst;
    if (0 < iVar10) {
LAB_1400037ea:
      _Dst = pcVar9 + iVar10;
      *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x140003800;
      memset(pcVar9,0x30,(longlong)iVar10);
    }
    if (pcVar1 != _Dst) goto LAB_140003809;
  }
  *_Dst = '0';
  _Dst = _Dst + 1;
LAB_140003809:
  pcVar9 = _Dst;
  if (0 < (int)uVar3) {
    iVar10 = uVar3 - ((int)_Dst - (int)pcVar1);
    stream->width = iVar10;
    if (0 < iVar10) {
      if ((uVar11 & 0x1c0) != 0) {
        stream->width = iVar10 + -1;
      }
      if ((iVar7 < 0) && ((uVar11 & 0x600) == 0x200)) {
        iVar7 = stream->width;
        uVar6 = iVar7 - 1;
        stream->width = uVar6;
        if (0 < iVar7) {
          _Size = (ulonglong)uVar6 + 1;
          pcVar9 = _Dst + _Size;
          *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x1400039f2;
          memset(_Dst,0x30,_Size);
          stream->width = -1;
        }
      }
      else if (((uVar11 & 0x400) == 0) &&
              (iVar7 = stream->width, stream->width = iVar7 + -1, 0 < iVar7)) {
        do {
          *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x140003a25;
          __pformat_putc(0x20,stream);
          iVar7 = stream->width;
          stream->width = iVar7 + -1;
        } while (0 < iVar7);
        uVar11 = stream->flags;
      }
    }
  }
  if ((uVar11 & 0x80) == 0) {
    if ((uVar11 & 0x100) == 0) {
      if ((uVar11 & 0x40) != 0) {
        *pcVar9 = ' ';
        pcVar9 = pcVar9 + 1;
      }
    }
    else {
      *pcVar9 = '+';
      pcVar9 = pcVar9 + 1;
    }
  }
  else {
    *pcVar9 = '-';
    pcVar9 = pcVar9 + 1;
  }
  if (pcVar9 <= pcVar1) {
LAB_1400038b0:
    iVar7 = stream->width;
    while( true ) {
      stream->width = iVar7 + -1;
      if (iVar7 < 1) break;
      if (((stream->flags & 0x4000U) != 0) ||
         (iVar10 = stream->count, iVar7 = iVar7 + -1, iVar10 < stream->quota)) {
        pFVar4 = (FILE *)stream->dest;
        if ((stream->flags & 0x2000U) == 0) {
          *(undefined1 *)((longlong)&pFVar4->_ptr + (longlong)stream->count) = 0x20;
          iVar10 = stream->count;
          iVar7 = stream->width;
        }
        else {
          *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x1400038fa;
          fputc(0x20,pFVar4);
          iVar10 = stream->count;
          iVar7 = stream->width;
        }
      }
      stream->count = iVar10 + 1;
    }
    return;
  }
  do {
    pcVar9 = pcVar9 + -1;
    if (((uVar11 & 0x4000) == 0) && (iVar7 = stream->count, stream->quota <= iVar7)) {
LAB_14000386a:
      stream->count = iVar7 + 1;
    }
    else {
      cVar2 = *pcVar9;
      pFVar4 = (FILE *)stream->dest;
      if ((uVar11 & 0x2000) == 0) {
        *(char *)((longlong)&pFVar4->_ptr + (longlong)stream->count) = cVar2;
        iVar7 = stream->count;
        goto LAB_14000386a;
      }
      *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x1400038a2;
      fputc((int)cVar2,pFVar4);
      stream->count = stream->count + 1;
    }
    if (pcVar1 == pcVar9) goto LAB_1400038b0;
    uVar11 = stream->flags;
  } while( true );
}



// WARNING: Function: ___chkstk_ms replaced with injection: alloca_probe
// WARNING: Unknown calling convention

void __pformat_emit_radix_point(__pformat_t *stream)

{
  char cVar1;
  FILE *_File;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  lconv *plVar5;
  wchar_t _Source;
  char *pcVar6;
  char *pcVar7;
  undefined8 auStack_60 [5];
  char acStack_38 [6];
  wchar_t rpchr;
  mbstate_t state;
  
  if (stream->rplen == -3) {
    state._Wchar = 0;
    state._Byte = L'\0';
    state._State = L'\0';
    auStack_60[0] = 0x140003b71;
    plVar5 = localeconv();
    auStack_60[0] = 0x140003b86;
    sVar4 = mbrtowc(&rpchr,plVar5->decimal_point,0x10,(mbstate_t *)&state);
    if ((int)sVar4 < 1) {
      _Source = stream->rpchr;
    }
    else {
      stream->rpchr = rpchr;
      _Source = rpchr;
    }
    stream->rplen = (int)sVar4;
  }
  else {
    _Source = stream->rpchr;
  }
  if (_Source == L'\0') {
    auStack_60[0] = 0x140003b4d;
    __pformat_putc(0x2e,stream);
    return;
  }
  auStack_60[0] = 0x140003a9e;
  lVar2 = -((longlong)stream->rplen + 0xfU & 0xfffffffffffffff0);
  state._Wchar = 0;
  state._Byte = L'\0';
  state._State = L'\0';
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x140003aba;
  sVar4 = wcrtomb(acStack_38 + lVar2,_Source,(mbstate_t *)&state);
  if ((int)sVar4 < 1) {
    *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x140003bad;
    __pformat_putc(0x2e,stream);
  }
  else {
    pcVar6 = acStack_38 + lVar2;
    do {
      while( true ) {
        pcVar7 = pcVar6 + 1;
        if (((stream->flags & 0x4000U) != 0) || (iVar3 = stream->count, iVar3 < stream->quota))
        break;
LAB_140003ade:
        stream->count = iVar3 + 1;
        pcVar6 = pcVar7;
        if (acStack_38 + (ulonglong)((int)sVar4 - 1) + lVar2 + 1 == pcVar7) {
          return;
        }
      }
      cVar1 = *pcVar6;
      _File = (FILE *)stream->dest;
      if ((stream->flags & 0x2000U) == 0) {
        *(char *)((longlong)&_File->_ptr + (longlong)stream->count) = cVar1;
        iVar3 = stream->count;
        goto LAB_140003ade;
      }
      *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x140003b1a;
      fputc((int)cVar1,_File);
      stream->count = stream->count + 1;
      pcVar6 = pcVar7;
    } while (acStack_38 + (ulonglong)((int)sVar4 - 1) + lVar2 + 1 != pcVar7);
  }
  return;
}



// WARNING: Unknown calling convention

void __pformat_emit_float(int sign,char *value,int len,__pformat_t *stream)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = stream->width;
  if (len < 1) {
    if (iVar2 < 1) {
      if (iVar2 == 0) goto LAB_140003d9b;
      stream->width = -1;
    }
    else {
      iVar2 = iVar2 + -1;
LAB_140003d9b:
      iVar3 = stream->precision;
      if (iVar3 < iVar2) goto LAB_140003d39;
      stream->width = -1;
    }
    if (sign == 0) goto LAB_140003c72;
LAB_140003db1:
    __pformat_putc(0x2d,stream);
  }
  else {
    if (iVar2 < len) {
LAB_140003be9:
      stream->width = -1;
      if (((stream->flags & 0x1000) != 0) && (stream->thousands_chr != L'\0')) {
        iVar2 = -1;
LAB_140003c02:
        iVar3 = ((len + 2U) / 3 - 1) - iVar2;
        if ((len + 2U) / 3 != 1) {
          do {
            if (iVar2 < 1) goto LAB_140003c6a;
            iVar2 = iVar2 + -1;
            stream->width = iVar2;
          } while (iVar3 + iVar2 != 0);
        }
LAB_140003c20:
        if (0 < iVar2) goto LAB_140003c24;
      }
LAB_140003c6a:
      if (sign != 0) goto LAB_140003db1;
LAB_140003c72:
      uVar4 = stream->flags;
    }
    else {
      iVar2 = iVar2 - len;
      stream->width = iVar2;
      if ((iVar2 < 0) || (iVar3 = stream->precision, iVar2 <= iVar3)) goto LAB_140003be9;
LAB_140003d39:
      iVar2 = iVar2 - iVar3;
      stream->width = iVar2;
      if ((0 < iVar3) || ((stream->flags & 0x800U) != 0)) {
        iVar2 = iVar2 + -1;
        stream->width = iVar2;
        if (((0 < len) && ((stream->flags & 0x1000) != 0)) && (stream->thousands_chr != L'\0'))
        goto LAB_140003c02;
        goto LAB_140003c20;
      }
      if (((0 < len) && ((stream->flags & 0x1000U) != 0)) && (stream->thousands_chr != L'\0'))
      goto LAB_140003c02;
LAB_140003c24:
      if (sign != 0) {
        stream->width = iVar2 + -1;
        if (iVar2 + -1 == 0) goto LAB_140003db1;
        if ((stream->flags & 0x600U) == 0) goto LAB_140003c48;
        __pformat_putc(0x2d,stream);
        goto LAB_140003c87;
      }
      uVar4 = stream->flags;
      if ((uVar4 & 0x1c0) == 0) {
        if (((uVar4 & 0x600) == 0) && (iVar2 = stream->width, stream->width = iVar2 + -1, 0 < iVar2)
           ) goto LAB_140003c50;
      }
      else {
        stream->width = iVar2 + -1;
        if ((iVar2 + -1 != 0) && ((uVar4 & 0x600) == 0)) {
LAB_140003c48:
          stream->width = iVar2 + -2;
LAB_140003c50:
          do {
            __pformat_putc(0x20,stream);
            iVar2 = stream->width;
            stream->width = iVar2 + -1;
          } while (0 < iVar2);
          goto LAB_140003c6a;
        }
      }
    }
    if ((uVar4 & 0x100) == 0) {
      if ((uVar4 & 0x40) != 0) {
        __pformat_putc(0x20,stream);
      }
    }
    else {
      __pformat_putc(0x2b,stream);
    }
  }
LAB_140003c87:
  if ((0 < stream->width) && ((stream->flags & 0x600U) == 0x200)) {
    stream->width = stream->width + -1;
    do {
      __pformat_putc(0x30,stream);
      iVar2 = stream->width;
      stream->width = iVar2 + -1;
    } while (0 < iVar2);
  }
  if (len < 1) {
    __pformat_putc(0x30,stream);
    iVar2 = stream->precision;
    if ((iVar2 < 1) && ((stream->flags & 0x800) == 0)) {
      if (len == 0) goto LAB_140003d7d;
    }
    else {
      __pformat_emit_radix_point(stream);
      if (len == 0) goto LAB_140003df3;
      iVar2 = stream->precision;
    }
    stream->precision = iVar2 + len;
    do {
      __pformat_putc(0x30,stream);
      len = len + 1;
    } while (len != 0);
  }
  else {
    while( true ) {
      cVar1 = *value;
      iVar2 = 0x30;
      if (cVar1 != '\0') {
        value = value + 1;
        iVar2 = (int)cVar1;
      }
      __pformat_putc(iVar2,stream);
      len = len + -1;
      if (len == 0) break;
      if ((((stream->flags & 0x1000) != 0) && (stream->thousands_chr != L'\0')) &&
         ((uint)(len * -0x55555555) < 0x55555556)) {
        __pformat_wputchars(&stream->thousands_chr,1,stream);
      }
    }
    iVar2 = stream->precision;
    if ((iVar2 < 1) && ((stream->flags & 0x800) == 0)) {
LAB_140003d7d:
      stream->precision = iVar2 + -1;
      return;
    }
    __pformat_emit_radix_point(stream);
  }
LAB_140003df3:
  while (iVar2 = stream->precision, stream->precision = iVar2 + -1, 0 < iVar2) {
    cVar1 = *value;
    iVar2 = 0x30;
    if (cVar1 != '\0') {
      value = value + 1;
      iVar2 = (int)cVar1;
    }
    __pformat_putc(iVar2,stream);
  }
  return;
}



// WARNING: Unknown calling convention

void __pformat_emit_efloat(int sign,char *value,int e,__pformat_t *stream)

{
  uint uVar1;
  int iVar2;
  __pformat_intarg_t *value_1;
  int iVar3;
  __pformat_intarg_t *value_00;
  
  iVar3 = 1;
  iVar2 = e + -1;
  value_00 = (__pformat_intarg_t *)(longlong)iVar2;
  while (iVar2 = iVar2 / 10, iVar2 != 0) {
    iVar3 = iVar3 + 1;
  }
  iVar2 = stream->expmin;
  if (iVar2 == -1) {
    stream->expmin = 2;
    iVar2 = 2;
  }
  if (iVar3 <= iVar2) {
    iVar3 = iVar2;
  }
  iVar2 = stream->width - (iVar3 + 2);
  value_1 = (__pformat_intarg_t *)0x1;
  if (stream->width <= iVar3 + 2) {
    iVar2 = -1;
  }
  stream->width = iVar2;
  __pformat_emit_float(sign,value,1,stream);
  uVar1 = stream->flags;
  stream->precision = stream->expmin;
  stream->flags = uVar1 | 0x1c0;
  __pformat_putc(uVar1 & 0x20 | 0x45,stream);
  stream->width = stream->width + iVar3 + 1;
  __pformat_int(value_00,stream,value_1);
  return;
}



void __pformat_efloat(long_double *x,__pformat_t *stream)

{
  char *value;
  int nd;
  long_double local_38;
  int sign;
  int intlen;
  
  local_38._0_10_ = *(unkbyte10 *)x;
  if (stream->precision < 0) {
    stream->precision = 6;
    nd = 7;
  }
  else {
    nd = stream->precision + 1;
  }
  value = __pformat_cvt(2,&local_38,nd,&intlen,&sign);
  if (intlen != -0x8000) {
    __pformat_emit_efloat(sign,value,intlen,stream);
    __freedtoa(value);
    return;
  }
  __pformat_emit_inf_or_nan(sign,value,stream);
  __freedtoa(value);
  return;
}



void __pformat_float(long_double *x,__pformat_t *stream)

{
  char *value;
  int iVar1;
  int iVar2;
  long_double local_38;
  int sign;
  int intlen;
  
  iVar2 = stream->precision;
  local_38._0_10_ = *(unkbyte10 *)x;
  if (iVar2 < 0) {
    stream->precision = 6;
    iVar2 = 6;
  }
  value = __pformat_cvt(3,&local_38,iVar2,&intlen,&sign);
  if (intlen == -0x8000) {
    __pformat_emit_inf_or_nan(sign,value,stream);
  }
  else {
    __pformat_emit_float(sign,value,intlen,stream);
    iVar2 = stream->width;
    while( true ) {
      stream->width = iVar2 + -1;
      if (iVar2 < 1) break;
      if (((stream->flags & 0x4000U) != 0) ||
         (iVar1 = stream->count, iVar2 = iVar2 + -1, iVar1 < stream->quota)) {
        if ((stream->flags & 0x2000U) == 0) {
          *(undefined1 *)((longlong)&((FILE *)stream->dest)->_ptr + (longlong)stream->count) = 0x20;
          iVar1 = stream->count;
          iVar2 = stream->width;
        }
        else {
          fputc(0x20,(FILE *)stream->dest);
          iVar1 = stream->count;
          iVar2 = stream->width;
        }
      }
      stream->count = iVar1 + 1;
    }
  }
  __freedtoa(value);
  return;
}



void __pformat_gfloat(long_double *x,__pformat_t *stream)

{
  uint uVar1;
  int iVar2;
  char *value;
  size_t sVar3;
  long_double local_38;
  int sign;
  int intlen;
  
  iVar2 = stream->precision;
  local_38._0_10_ = *(unkbyte10 *)x;
  if (iVar2 < 0) {
    stream->precision = 6;
    iVar2 = 6;
  }
  else if (iVar2 == 0) {
    stream->precision = 1;
    iVar2 = 1;
  }
  value = __pformat_cvt(2,&local_38,iVar2,&intlen,&sign);
  if (intlen == -0x8000) {
    __pformat_emit_inf_or_nan(sign,value,stream);
  }
  else {
    uVar1 = stream->flags & 0x800;
    if ((intlen < -3) || (stream->precision < intlen)) {
      if (uVar1 == 0) {
        sVar3 = strlen(value);
        iVar2 = (int)sVar3;
      }
      else {
        iVar2 = stream->precision;
      }
      stream->precision = iVar2 + -1;
      __pformat_emit_efloat(sign,value,intlen,stream);
    }
    else {
      if (uVar1 == 0) {
        sVar3 = strlen(value);
        iVar2 = (int)sVar3 - intlen;
        stream->precision = iVar2;
        if ((iVar2 < 0) && (0 < stream->width)) {
          stream->width = iVar2 + stream->width;
        }
      }
      else {
        stream->precision = stream->precision - intlen;
      }
      __pformat_emit_float(sign,value,intlen,stream);
      while (iVar2 = stream->width, stream->width = iVar2 + -1, 0 < iVar2) {
        __pformat_putc(0x20,stream);
      }
    }
  }
  __freedtoa(value);
  return;
}



// DWARF original prototype: void __pformat_emit_xfloat(__pformat_fpreg_t value, __pformat_t *
// stream, __pformat_fpreg_t value)

void __pformat_emit_xfloat(__pformat_fpreg_t *value,__pformat_t *stream,__pformat_fpreg_t *value_1)

{
  ULong UVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  short sVar12;
  __pformat_intarg_t *value_1_00;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  wchar_t wcs;
  char buf [24];
  
  if (((short)stream != 0) || (sVar12 = 0, value != (__pformat_fpreg_t *)0x0)) {
    sVar12 = (short)stream + -3;
  }
  uVar8 = value_1[1].__pformat_fpreg_bits;
  if (uVar8 < 0xf) {
    cVar3 = (char)uVar8;
    uVar6 = (4L << (('\x0e' - cVar3) * '\x04' & 0x3fU)) + ((ulonglong)value >> 1);
    if ((longlong)uVar6 < 0) {
      sVar12 = sVar12 + 4;
      value = (__pformat_fpreg_t *)((uVar6 >> 3) >> (('\x0f' - cVar3) * '\x04' & 0x3fU));
    }
    else {
      value = (__pformat_fpreg_t *)(uVar6 * 2 >> (('\x0f' - cVar3) * '\x04' & 0x3fU));
      if ((value == (__pformat_fpreg_t *)0x0) && ((int)uVar8 < 1)) goto LAB_1400043ad;
    }
    iVar16 = uVar8 + 1;
LAB_14000459a:
    uVar8 = *(uint *)&(value_1->field_2).__pformat_fpreg_exponent;
    value_1_00 = (__pformat_intarg_t *)(ulonglong)uVar8;
    pbVar10 = (byte *)buf;
    do {
      uVar5 = (uint)value & 0xf;
      cVar3 = (char)uVar5;
      if (iVar16 == 1) {
        if (((buf < pbVar10) || ((uVar8 & 0x800) != 0)) ||
           (0 < (int)value_1[1].__pformat_fpreg_bits)) {
          *pbVar10 = 0x2e;
          pbVar10 = pbVar10 + 1;
          goto LAB_140004603;
        }
        if (((ulonglong)value & 0xf) == 0) {
          if (value_1[1].__pformat_fpreg_bits == 0) goto LAB_1400045cf;
          break;
        }
LAB_140004607:
        if (uVar5 < 10) {
LAB_1400045cf:
          bVar4 = cVar3 + 0x30;
        }
        else {
          bVar4 = cVar3 + 0x37U | (byte)uVar8 & 0x20;
        }
        *pbVar10 = bVar4;
        pbVar10 = pbVar10 + 1;
      }
      else {
        if (0 < (int)value_1[1].__pformat_fpreg_bits) {
          value_1[1].__pformat_fpreg_bits = value_1[1].__pformat_fpreg_bits - 1;
        }
LAB_140004603:
        if (((ulonglong)value & 0xf) != 0) goto LAB_140004607;
        if ((buf < pbVar10) || (-1 < (int)value_1[1].__pformat_fpreg_bits)) goto LAB_1400045cf;
      }
      value = (__pformat_fpreg_t *)((ulonglong)value >> 4);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    if (pbVar10 != (byte *)buf) goto LAB_1400043cd;
    if ((int)value_1[1].__pformat_fpreg_bits < 1) goto LAB_1400043b7;
LAB_140004646:
    buf[0] = '.';
    pcVar7 = buf + 1;
  }
  else {
    if ((value != (__pformat_fpreg_t *)0x0) || ((int)uVar8 >= 1)) {
      iVar16 = 0x10;
      goto LAB_14000459a;
    }
LAB_1400043ad:
    uVar8 = *(uint *)&(value_1->field_2).__pformat_fpreg_exponent;
LAB_1400043b7:
    pcVar7 = buf;
    value_1_00 = (__pformat_intarg_t *)(ulonglong)uVar8;
    if ((uVar8 & 0x800) != 0) goto LAB_140004646;
  }
  *pcVar7 = '0';
  pbVar10 = (byte *)(pcVar7 + 1);
LAB_1400043cd:
  iVar16 = *(int *)(value_1->__pformat_fpreg_bitmap + 6);
  iVar11 = 2;
  if (0 < iVar16) {
    iVar9 = (int)pbVar10 - (int)buf;
    if (0 < (int)value_1[1].__pformat_fpreg_bits) {
      iVar9 = value_1[1].__pformat_fpreg_bits + iVar9;
    }
    iVar15 = (iVar9 + 6) - (uint)((uVar8 & 0x1c0) == 0);
    iVar9 = (int)sVar12 / 10 - ((int)sVar12 >> 0x1f);
    iVar13 = iVar15;
    iVar14 = iVar15;
    if (iVar9 != 0) {
      do {
        iVar14 = iVar13 + 1;
        sVar2 = (short)iVar13;
        iVar9 = iVar9 / 10;
        iVar13 = iVar14;
      } while (iVar9 != 0);
      iVar11 = (int)(short)((sVar2 + 3) - (short)iVar15);
    }
    if (iVar14 < iVar16) {
      iVar16 = iVar16 - iVar14;
      if ((uVar8 & 0x600) == 0) {
        *(int *)(value_1->__pformat_fpreg_bitmap + 6) = iVar16 + -1;
        if (0 < iVar16) {
          do {
            __pformat_putc(0x20,(__pformat_t *)&value_1->field_2);
            iVar16 = *(int *)(value_1->__pformat_fpreg_bitmap + 6);
            *(int *)(value_1->__pformat_fpreg_bitmap + 6) = iVar16 + -1;
          } while (0 < iVar16);
          value_1_00 = (__pformat_intarg_t *)
                       (ulonglong)*(uint *)&(value_1->field_2).__pformat_fpreg_exponent;
        }
      }
      else {
        *(int *)(value_1->__pformat_fpreg_bitmap + 6) = iVar16;
      }
    }
    else {
      *(wchar_t *)((longlong)value_1 + 0xc) = L'\xffff';
      *(wchar_t *)((longlong)value_1 + 0xe) = L'\xffff';
    }
  }
  if (((ulonglong)value_1_00 & 0x80) == 0) {
    if (((ulonglong)value_1_00 & 0x100) == 0) {
      uVar6 = (ulonglong)value_1_00 & 0x40;
      value_1_00 = (__pformat_intarg_t *)(ulonglong)((uint)value_1_00 & 0x40);
      if (uVar6 != 0) {
        __pformat_putc(0x20,(__pformat_t *)&value_1->field_2);
      }
    }
    else {
      __pformat_putc(0x2b,(__pformat_t *)&value_1->field_2);
    }
  }
  else {
    __pformat_putc(0x2d,(__pformat_t *)&value_1->field_2);
  }
  __pformat_putc(0x30,(__pformat_t *)&value_1->field_2);
  __pformat_putc(*(uint *)&(value_1->field_2).__pformat_fpreg_exponent & 0x20 | 0x58,
                 (__pformat_t *)&value_1->field_2);
  if ((0 < *(int *)(value_1->__pformat_fpreg_bitmap + 6)) &&
     (((value_1->field_2).__pformat_fpreg_exponent & 0x200) != 0)) {
    *(int *)(value_1->__pformat_fpreg_bitmap + 6) =
         *(int *)(value_1->__pformat_fpreg_bitmap + 6) + -1;
    do {
      __pformat_putc(0x30,(__pformat_t *)&value_1->field_2);
      iVar16 = *(int *)(value_1->__pformat_fpreg_bitmap + 6);
      *(int *)(value_1->__pformat_fpreg_bitmap + 6) = iVar16 + -1;
    } while (0 < iVar16);
  }
  if (buf < pbVar10) {
    do {
      iVar16 = (int)(char)pbVar10[-1];
      pbVar10 = pbVar10 + -1;
      if (iVar16 == 0x2e) {
        __pformat_emit_radix_point((__pformat_t *)&value_1->field_2);
      }
      else if (iVar16 == 0x2c) {
        wcs = value_1[2].__pformat_fpreg_bitmap[0];
        if (wcs != L'\0') {
          value_1_00 = (__pformat_intarg_t *)value_1;
          __pformat_wputchars(&wcs,1,(__pformat_t *)&value_1->field_2);
        }
      }
      else {
        __pformat_putc(iVar16,(__pformat_t *)&value_1->field_2);
      }
    } while (pbVar10 != (byte *)buf);
  }
  while (UVar1 = value_1[1].__pformat_fpreg_bits, value_1[1].__pformat_fpreg_bits = UVar1 - 1,
        0 < (int)UVar1) {
    __pformat_putc(0x30,(__pformat_t *)&value_1->field_2);
  }
  __pformat_putc(*(uint *)&(value_1->field_2).__pformat_fpreg_exponent & 0x20 | 0x50,
                 (__pformat_t *)&value_1->field_2);
  *(int *)(value_1->__pformat_fpreg_bitmap + 6) =
       *(int *)(value_1->__pformat_fpreg_bitmap + 6) + iVar11;
  *(uint *)&(value_1->field_2).__pformat_fpreg_exponent =
       *(uint *)&(value_1->field_2).__pformat_fpreg_exponent | 0x1c0;
  __pformat_int((__pformat_intarg_t *)(longlong)sVar12,(__pformat_t *)&value_1->field_2,value_1_00);
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Unknown calling convention

int __mingw_pformat(int flags,void *dest,int max,char *fmt,va_list argv)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  int *piVar4;
  char *s;
  lconv *plVar5;
  __pformat_fpreg_t *value;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  int fmt_00;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  float10 *pfVar12;
  ulonglong uVar13;
  __pformat_t *stream_00;
  ushort uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  undefined4 in_register_00000084;
  __pformat_intarg_t *value_1;
  __pformat_intarg_t *p_Var19;
  uint *puVar20;
  wchar_t *_Str;
  bool bVar21;
  float10 fVar22;
  ulonglong local_c8;
  ushort uStack_c0;
  undefined6 uStack_be;
  long_double local_a8;
  wchar_t rpchr;
  __pformat_intarg_t argval;
  __pformat_t stream;
  
  value_1 = (__pformat_intarg_t *)CONCAT44(in_register_00000084,max);
  p_Var19 = (__pformat_intarg_t *)fmt;
  piVar4 = _errno();
  bVar3 = *fmt;
  uVar7 = (uint)(char)bVar3;
  uVar18 = flags & 0x6000;
  iVar1 = *piVar4;
  stream.thousands_chr = L'\0';
  stream.quota = max;
  pbVar15 = (byte *)(fmt + 1);
  stream.precision = -1;
  stream.rplen = -3;
  stream.width = -1;
  stream.rpchr = L'\0';
  stream.thousands_chr_len = 0;
  stream.count = 0;
  stream.expmin = -1;
  uVar8 = uVar7;
  uVar9 = uVar7;
  stream.flags = uVar18;
joined_r0x000140004811:
  if (bVar3 != 0) {
    stream.dest = dest;
    if (uVar8 != 0x25) {
      value_1 = (__pformat_intarg_t *)(ulonglong)(uint)stream.flags;
      if (((stream.flags & 0x4000U) != 0) || (stream.count < stream.quota)) {
        value_1 = (__pformat_intarg_t *)(ulonglong)(stream.flags & 0x2000U);
        if ((stream.flags & 0x2000U) == 0) {
          *(char *)((longlong)dest + (longlong)stream.count) = (char)uVar7;
          p_Var19 = (__pformat_intarg_t *)dest;
        }
        else {
          fputc(uVar8,(FILE *)dest);
          p_Var19 = (__pformat_intarg_t *)dest;
        }
      }
      stream.count = stream.count + 1;
      pbVar17 = pbVar15;
      goto LAB_14000486d;
    }
    bVar3 = *pbVar15;
    stream.width = -1;
    stream.precision = -1;
    uVar9 = stream.count;
    if (bVar3 != 0) {
      piVar4 = &stream.width;
      iVar10 = 0;
      uVar7 = 0;
      pbVar16 = pbVar15;
      stream.flags = uVar18;
      do {
        pbVar17 = pbVar16 + 1;
        fmt_00 = (int)(char)bVar3;
        switch(bVar3) {
        case 0x20:
          if (uVar7 != 0) goto LAB_140004930;
          bVar3 = pbVar16[1];
          stream.flags = stream.flags | 0x40;
          break;
        default:
          if (((byte)(bVar3 - 0x30) < 10) && (uVar7 < 4)) {
            if (uVar7 == 0) {
              uVar7 = 1;
            }
            else {
LAB_14000508a:
              if (uVar7 == 2) {
                uVar7 = 3;
              }
            }
            if (piVar4 != (int *)0x0) {
              if (*piVar4 < 0) {
                bVar3 = pbVar16[1];
                *piVar4 = fmt_00 - 0x30;
                break;
              }
              *piVar4 = fmt_00 + -0x30 + *piVar4 * 10;
            }
            goto LAB_140004930;
          }
LAB_1400050db:
          __pformat_putc(0x25,&stream);
          pbVar17 = pbVar15;
          goto LAB_14000486d;
        case 0x23:
          if (uVar7 != 0) goto LAB_140004930;
          bVar3 = pbVar16[1];
          stream.flags = stream.flags | 0x800;
          break;
        case 0x25:
          goto switchD_1400048ca_caseD_25;
        case 0x27:
          if (uVar7 == 0) {
            p_Var19 = &argval;
            stream.flags = stream.flags | 0x1000;
            argval.__pformat_ullong_t = argval.__pformat_ullong_t & 0xffffffff00000000;
            plVar5 = localeconv();
            value_1 = (__pformat_intarg_t *)0x10;
            sVar6 = mbrtowc(&rpchr,plVar5->thousands_sep,0x10,&p_Var19->__pformat_long_t);
            if (0 < (int)sVar6) {
              stream.thousands_chr = rpchr;
            }
            stream.thousands_chr_len = (int)sVar6;
          }
LAB_140004930:
          bVar3 = pbVar16[1];
          break;
        case 0x2a:
          if (piVar4 == (int *)0x0) {
LAB_140004e31:
            bVar3 = pbVar16[1];
            uVar7 = 4;
          }
          else if ((uVar7 & 0xfffffffd) == 0) {
            uVar8 = *(uint *)argv;
            argv = (va_list)((longlong)argv + 8);
            *piVar4 = uVar8;
            if ((int)uVar8 < 0) {
              if (uVar7 != 0) {
                bVar3 = pbVar16[1];
                piVar4 = (int *)0x0;
                stream.precision = -1;
                uVar7 = 2;
                break;
              }
              stream.flags = stream.flags | 0x400;
              stream.width = -stream.width;
            }
            bVar3 = pbVar16[1];
            piVar4 = (int *)0x0;
          }
          else {
            bVar3 = pbVar16[1];
            piVar4 = (int *)0x0;
            uVar7 = 4;
          }
          break;
        case 0x2b:
          if (uVar7 != 0) goto LAB_140004930;
          bVar3 = pbVar16[1];
          stream.flags = stream.flags | 0x100;
          break;
        case 0x2d:
          if (uVar7 != 0) goto LAB_140004930;
          bVar3 = pbVar16[1];
          stream.flags = stream.flags | 0x400;
          break;
        case 0x2e:
          if (1 < uVar7) goto LAB_140004e31;
          bVar3 = pbVar16[1];
          uVar7 = 2;
          stream.precision = 0;
          piVar4 = &stream.precision;
          break;
        case 0x30:
          if (uVar7 != 0) {
            if (uVar7 < 4) {
              fmt_00 = 0x30;
              goto LAB_14000508a;
            }
            goto LAB_1400050db;
          }
          bVar3 = pbVar16[1];
          stream.flags = stream.flags | 0x200;
          break;
        case 0x41:
          plVar11 = *(longlong **)argv;
          if ((stream.flags & 4U) == 0) goto LAB_140004e74;
LAB_140004afd:
          uVar7 = *(uint *)(plVar11 + 1);
          value = (__pformat_fpreg_t *)*plVar11;
          uVar14 = (ushort)uVar7;
          uVar8 = (uint)((ulonglong)value >> 0x20) & 0x7fffffff | (uint)value;
          p_Var19 = (__pformat_intarg_t *)(ulonglong)uVar8;
          if (0xfffe - ((-uVar8 | uVar8) >> 0x1f | (short)uVar14 * 2 & 0xffffU) >> 0x10 != 0)
          goto LAB_140005097;
          if ((short)uVar14 < 0) {
            stream.flags = stream.flags | 0x80;
          }
          stream_00 = (__pformat_t *)((ulonglong)uVar7 & 0xffffffffffff7fff);
          if ((uVar7 & 0x7fff) == 0) {
            if (value != (__pformat_fpreg_t *)0x0) {
              stream_00 = (__pformat_t *)0xffffc002;
            }
          }
          else {
            if (((uVar14 & 0x7fff) == 0x7fff) && (uVar8 == 0)) {
              value_1 = (__pformat_intarg_t *)&stream;
              __pformat_emit_inf_or_nan((int)(short)uVar14 & 0x8000,"Inf",(__pformat_t *)value_1);
              goto LAB_140005077;
            }
            stream_00 = (__pformat_t *)
                        CONCAT62((int6)((ulonglong)stream_00 >> 0x10),(short)stream_00 + -0x3fff);
          }
LAB_140005028:
          value_1 = (__pformat_intarg_t *)&stream;
          __pformat_emit_xfloat(value,stream_00,(__pformat_fpreg_t *)value_1);
          goto LAB_140005077;
        case 0x43:
          goto LAB_140004f20;
        case 0x45:
          pfVar12 = *(float10 **)argv;
          if ((stream.flags & 4U) == 0) goto LAB_140004f5c;
LAB_140004bf7:
          local_a8._0_10_ = *pfVar12;
          __pformat_efloat(&local_a8,&stream);
          argv = (va_list)((longlong)argv + 8);
          goto LAB_14000486d;
        case 0x46:
          pfVar12 = *(float10 **)argv;
          if ((stream.flags & 4U) == 0) goto LAB_140004f94;
LAB_140004c8d:
          local_a8._0_10_ = *pfVar12;
          __pformat_float(&local_a8,&stream);
          argv = (va_list)((longlong)argv + 8);
          goto LAB_14000486d;
        case 0x47:
          pfVar12 = *(float10 **)argv;
          if ((stream.flags & 4U) == 0) goto LAB_140004fcc;
LAB_140004cc5:
          local_a8._0_10_ = *pfVar12;
          __pformat_gfloat(&local_a8,&stream);
          argv = (va_list)((longlong)argv + 8);
          goto LAB_14000486d;
        case 0x49:
          bVar3 = pbVar16[1];
          if (bVar3 == 0x36) {
            if (pbVar16[2] != 0x34) goto LAB_1400050db;
            bVar3 = pbVar16[3];
            iVar10 = 3;
            pbVar17 = pbVar16 + 3;
            uVar7 = 4;
          }
          else if (bVar3 == 0x33) {
            if (pbVar16[2] != 0x32) goto LAB_1400050db;
            bVar3 = pbVar16[3];
            iVar10 = 2;
            pbVar17 = pbVar16 + 3;
            uVar7 = 4;
          }
          else {
            iVar10 = 3;
            uVar7 = 4;
          }
          break;
        case 0x4c:
          bVar3 = pbVar16[1];
          stream.flags = stream.flags | 4;
          uVar7 = 4;
          break;
        case 0x53:
          goto LAB_140005039;
        case 0x58:
        case 0x6f:
        case 0x75:
        case 0x78:
          stream.flags = stream.flags & 0xfffffeff;
          if (iVar10 == 3) {
            argval.__pformat_llong_t = *(undefined8 *)argv;
          }
          else {
            uVar7 = *(uint *)argv;
            argval.__pformat_llong_t = (longlong)uVar7;
            if (iVar10 != 2) {
              if (iVar10 == 1) {
                argval.__pformat_llong_t = (longlong)(ushort)uVar7;
              }
              else if (iVar10 == 5) {
                argval.__pformat_llong_t = (longlong)(byte)uVar7;
              }
            }
          }
          p_Var19 = (__pformat_intarg_t *)argval.__pformat_llong_t;
          if (fmt_00 == 0x75) {
            __pformat_int((__pformat_intarg_t *)argval.__pformat_ptr_t,&stream,value_1);
            argv = (va_list)((longlong)argv + 8);
          }
          else {
            value_1 = (__pformat_intarg_t *)&stream;
            __pformat_xint(fmt_00,(__pformat_intarg_t *)argval.__pformat_ptr_t,
                           (__pformat_t *)value_1,(__pformat_intarg_t *)argval._0_8_);
            argv = (va_list)((longlong)argv + 8);
          }
          goto LAB_14000486d;
        case 0x61:
          plVar11 = *(longlong **)argv;
          uVar8 = stream.flags | 0x20;
          uVar7 = stream.flags & 4;
          stream.flags = uVar8;
          if (uVar7 != 0) goto LAB_140004afd;
LAB_140004e74:
          uVar7 = (uint)plVar11;
          fVar22 = (float10)(double)plVar11;
          uVar8 = (uint)((ulonglong)plVar11 >> 0x20);
          local_c8 = SUB108(fVar22,0);
          uStack_c0 = (ushort)((unkuint10)fVar22 >> 0x40);
          p_Var19 = (__pformat_intarg_t *)0x7ff00000;
          if ((int)(0x7ff00000 - ((-uVar7 | uVar7) >> 0x1f | uVar8 & 0x7fffffff)) < 0) {
LAB_140005097:
            value_1 = (__pformat_intarg_t *)&stream;
            __pformat_emit_inf_or_nan(0,"NaN",(__pformat_t *)value_1);
          }
          else {
            uVar2 = CONCAT62(uStack_be,uStack_c0);
            if ((short)uStack_c0 < 0) {
              stream.flags = stream.flags | 0x80;
            }
            bVar21 = (uVar8 & 0x7ff00000) != 0x7ff00000;
            p_Var19 = (__pformat_intarg_t *)CONCAT71(0x7ff000,bVar21);
            if (((((ulonglong)plVar11 & 0xfffff00000000) != 0 || uVar7 != 0) || bVar21) ||
               ((((ulonglong)plVar11 & 0xfffff00000000) == 0 && uVar7 == 0) &&
                ((ulonglong)plVar11 & 0x7ff0000000000000) == 0)) {
              uVar13 = uVar2 & 0xffffffffffff7fff;
              if (((unkuint10)fVar22 & 0x7fff) == 0) {
LAB_14000511c:
                stream_00 = (__pformat_t *)(uVar2 & 0xffff7fff);
                if (local_c8 != 0) {
                  stream_00 = (__pformat_t *)0xfffffc05;
                }
              }
              else {
                if ((uStack_c0 & 0x7fff) < 0x3c01) {
                  iVar10 = 0x3c01 - (short)uVar13;
                  local_c8 = local_c8 >> ((byte)iVar10 & 0x3f);
                  uVar13 = (ulonglong)(uint)((int)uVar13 + iVar10);
                }
                else if ((short)uVar13 == 0) goto LAB_14000511c;
                stream_00 = (__pformat_t *)CONCAT62((int6)(uVar13 >> 0x10),(short)uVar13 + -0x3ffc);
              }
              value = (__pformat_fpreg_t *)(local_c8 >> 3);
              goto LAB_140005028;
            }
            value_1 = (__pformat_intarg_t *)&stream;
            __pformat_emit_inf_or_nan((uint)uVar2 & 0x8000,"Inf",(__pformat_t *)value_1);
          }
          goto LAB_140005077;
        case 99:
          stream.precision = -1;
          if (iVar10 - 2U < 2) {
LAB_140004f20:
            stream.precision = -1;
            value_1 = (__pformat_intarg_t *)&stream;
            argval.__pformat_ushort_t = (short)*(uint *)argv;
            __pformat_wputchars(&argval.__pformat_ushort_t,1,(__pformat_t *)value_1);
            argv = (va_list)((longlong)argv + 8);
          }
          else {
            value_1 = (__pformat_intarg_t *)&stream;
            argval.__pformat_uchar_t = (char)*(uint *)argv;
            __pformat_putchars(&argval.__pformat_char_t,1,(__pformat_t *)value_1);
            argv = (va_list)((longlong)argv + 8);
          }
          goto LAB_14000486d;
        case 100:
        case 0x69:
          stream.flags = stream.flags | 0x80;
          if (iVar10 == 3) {
            argval.__pformat_llong_t = *(undefined8 *)argv;
          }
          else {
            uVar7 = *(uint *)argv;
            argval.__pformat_llong_t = (longlong)(int)uVar7;
            if (iVar10 != 2) {
              if (iVar10 == 1) {
                argval.__pformat_llong_t = (longlong)(short)uVar7;
              }
              else if (iVar10 == 5) {
                argval.__pformat_llong_t = (longlong)(char)uVar7;
              }
            }
          }
          argval._8_8_ = argval.__pformat_llong_t >> 0x3f;
          __pformat_int((__pformat_intarg_t *)argval.__pformat_ptr_t,&stream,value_1);
          argv = (va_list)((longlong)argv + 8);
          goto LAB_14000486d;
        case 0x65:
          pfVar12 = *(float10 **)argv;
          uVar8 = stream.flags | 0x20;
          uVar7 = stream.flags & 4;
          stream.flags = uVar8;
          if (uVar7 != 0) goto LAB_140004bf7;
LAB_140004f5c:
          local_a8._0_10_ = (float10)(double)pfVar12;
          __pformat_efloat(&local_a8,&stream);
          argv = (va_list)((longlong)argv + 8);
          goto LAB_14000486d;
        case 0x66:
          pfVar12 = *(float10 **)argv;
          uVar8 = stream.flags | 0x20;
          uVar7 = stream.flags & 4;
          stream.flags = uVar8;
          if (uVar7 != 0) goto LAB_140004c8d;
LAB_140004f94:
          local_a8._0_10_ = (float10)(double)pfVar12;
          __pformat_float(&local_a8,&stream);
          argv = (va_list)((longlong)argv + 8);
          goto LAB_14000486d;
        case 0x67:
          pfVar12 = *(float10 **)argv;
          uVar8 = stream.flags | 0x20;
          uVar7 = stream.flags & 4;
          stream.flags = uVar8;
          if (uVar7 != 0) goto LAB_140004cc5;
LAB_140004fcc:
          local_a8._0_10_ = (float10)(double)pfVar12;
          __pformat_gfloat(&local_a8,&stream);
          argv = (va_list)((longlong)argv + 8);
          goto LAB_14000486d;
        case 0x68:
          bVar3 = pbVar16[1];
          if (bVar3 == 0x68) {
            bVar3 = pbVar16[2];
            iVar10 = 5;
            pbVar17 = pbVar16 + 2;
            uVar7 = 4;
          }
          else {
            iVar10 = 1;
            uVar7 = 4;
          }
          break;
        case 0x6a:
        case 0x74:
        case 0x7a:
          bVar3 = pbVar16[1];
          iVar10 = 3;
          uVar7 = 4;
          break;
        case 0x6c:
          bVar3 = pbVar16[1];
          if (bVar3 == 0x6c) {
            bVar3 = pbVar16[2];
            iVar10 = 3;
            pbVar17 = pbVar16 + 2;
            uVar7 = 4;
          }
          else {
            iVar10 = 2;
            uVar7 = 4;
          }
          break;
        case 0x6d:
          s = strerror(iVar1);
          __pformat_puts(s,&stream);
          goto LAB_14000486d;
        case 0x6e:
          plVar11 = *(longlong **)argv;
          puVar20 = (uint *)((longlong)argv + 8);
          if (iVar10 == 5) {
            *(char *)plVar11 = (char)stream.count;
            goto LAB_140005077;
          }
          argv = (va_list)puVar20;
          if (iVar10 == 1) {
            *(short *)plVar11 = (short)stream.count;
          }
          else if ((iVar10 == 2) || (iVar10 != 3)) {
            *(int *)plVar11 = stream.count;
          }
          else {
            *plVar11 = (longlong)stream.count;
          }
          goto LAB_14000486d;
        case 0x70:
          if ((uVar7 == 0) && (stream.flags == uVar18)) {
            stream.precision = 0x10;
            stream.flags = uVar18 | 0x200;
          }
          argval.__pformat_llong_t = *(undefined8 *)argv;
          value_1 = (__pformat_intarg_t *)&stream;
          argval._8_8_ = 0;
          __pformat_xint(0x78,(__pformat_intarg_t *)argval.__pformat_ptr_t,(__pformat_t *)value_1,
                         p_Var19);
          argv = (va_list)((longlong)argv + 8);
          goto LAB_14000486d;
        case 0x73:
          if (iVar10 - 2U < 2) {
LAB_140005039:
            _Str = *(wchar_t **)argv;
            if (_Str == (wchar_t *)0x0) {
              _Str = L"(null)";
            }
            if (stream.precision < 0) {
              sVar6 = wcslen(_Str);
              iVar10 = (int)sVar6;
            }
            else {
              sVar6 = wcsnlen(_Str,(longlong)stream.precision);
              iVar10 = (int)sVar6;
            }
            value_1 = (__pformat_intarg_t *)&stream;
            __pformat_wputchars(_Str,iVar10,(__pformat_t *)value_1);
LAB_140005077:
            argv = (va_list)((longlong)argv + 8);
          }
          else {
            __pformat_puts(*(char **)argv,&stream);
            argv = (va_list)((longlong)argv + 8);
          }
          goto LAB_14000486d;
        }
        pbVar16 = pbVar17;
        if (bVar3 == 0) {
          return stream.count;
        }
      } while( true );
    }
  }
  return uVar9;
switchD_1400048ca_caseD_25:
  __pformat_putc(0x25,&stream);
LAB_14000486d:
  bVar3 = *pbVar17;
  uVar7 = (uint)bVar3;
  pbVar15 = pbVar17 + 1;
  uVar8 = (uint)(char)bVar3;
  uVar9 = stream.count;
  dest = stream.dest;
  goto joined_r0x000140004811;
}



// WARNING: Unknown calling convention

char * __rv_alloc_D2A(int i)

{
  int iVar1;
  __Bigint *p_Var2;
  int k;
  
  k = 0;
  if (0x1b < i) {
    iVar1 = 4;
    do {
      iVar1 = iVar1 * 2;
      k = k + 1;
    } while (iVar1 + 0x17 < i);
  }
  p_Var2 = __Balloc_D2A(k);
  *(int *)&p_Var2->next = k;
  return (char *)((longlong)&p_Var2->next + 4);
}



// WARNING: Unknown calling convention

char * __nrv_alloc_D2A(char *s,char **rve,int n)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  __Bigint *p_Var4;
  char *pcVar5;
  char *pcVar6;
  int k;
  
  if (n < 0x1c) {
    k = 0;
  }
  else {
    iVar3 = 4;
    k = 0;
    do {
      iVar3 = iVar3 * 2;
      k = k + 1;
    } while (iVar3 + 0x17 < n);
  }
  p_Var4 = __Balloc_D2A(k);
  pcVar6 = s + 1;
  *(int *)&p_Var4->next = k;
  cVar2 = *s;
  pcVar1 = (char *)((longlong)&p_Var4->next + 4);
  *(char *)((longlong)&p_Var4->next + 4) = cVar2;
  pcVar5 = pcVar1;
  while (cVar2 != '\0') {
    cVar2 = *pcVar6;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
    *pcVar5 = cVar2;
  }
  if (rve != (char **)0x0) {
    *rve = pcVar5;
  }
  return pcVar1;
}



// WARNING: Unknown calling convention

void __freedtoa(char *s)

{
  *(undefined4 *)(s + 4) = *(undefined4 *)(s + -4);
  *(int *)(s + 8) = 1 << ((byte)*(undefined4 *)(s + -4) & 0x1f);
  __Bfree_D2A((__Bigint *)(s + -4));
  return;
}



// WARNING: Unknown calling convention

int __quorem_D2A(__Bigint *b,__Bigint *S)

{
  ULong *pUVar1;
  ULong *pUVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ULong *pUVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ULong *pUVar13;
  ULong *pUVar14;
  ULong *pUVar15;
  ulonglong uVar16;
  
  if (b->wds < S->wds) {
    return 0;
  }
  iVar12 = S->wds + -1;
  pUVar9 = S->x;
  pUVar1 = b->x;
  pUVar2 = pUVar9 + iVar12;
  pUVar14 = pUVar1 + iVar12;
  uVar4 = (ulonglong)*pUVar14 / (ulonglong)(*pUVar2 + 1);
  iVar6 = (int)uVar4;
  if (*pUVar2 + 1 <= *pUVar14) {
    uVar16 = 0;
    uVar11 = 0;
    pUVar13 = pUVar1;
    pUVar15 = pUVar9;
    do {
      uVar7 = *pUVar15;
      pUVar15 = pUVar15 + 1;
      uVar8 = uVar7 * uVar4 + uVar16;
      uVar16 = uVar8 >> 0x20;
      lVar10 = (ulonglong)*pUVar13 - ((uVar8 & 0xffffffff) + uVar11);
      *pUVar13 = (uint)lVar10;
      uVar11 = (ulonglong)((uint)((ulonglong)lVar10 >> 0x20) & 1);
      pUVar13 = pUVar13 + 1;
    } while (pUVar15 <= pUVar2);
    if (*pUVar14 == 0) {
      while ((pUVar14 = pUVar14 + -1, pUVar1 < pUVar14 && (*pUVar14 == 0))) {
        iVar12 = iVar12 + -1;
      }
      b->wds = iVar12;
      iVar5 = __cmp_D2A(b,S);
      goto joined_r0x000140005450;
    }
  }
  iVar5 = __cmp_D2A(b,S);
joined_r0x000140005450:
  if (-1 < iVar5) {
    iVar6 = iVar6 + 1;
    uVar7 = 0;
    pUVar14 = pUVar1;
    do {
      uVar3 = *pUVar9;
      pUVar9 = pUVar9 + 1;
      lVar10 = (ulonglong)*pUVar14 - ((ulonglong)uVar7 + (ulonglong)uVar3);
      *pUVar14 = (uint)lVar10;
      uVar7 = (uint)((ulonglong)lVar10 >> 0x20) & 1;
      pUVar14 = pUVar14 + 1;
    } while (pUVar9 <= pUVar2);
    pUVar9 = pUVar1 + iVar12;
    if (*pUVar9 == 0) {
      while ((pUVar9 = pUVar9 + -1, pUVar1 < pUVar9 && (*pUVar9 == 0))) {
        iVar12 = iVar12 + -1;
      }
      b->wds = iVar12;
    }
  }
  return iVar6;
}



// WARNING: Unknown calling convention

char * __gdtoa(FPI *fpi,int be,ULong *bits,int *kindp,int mode,int ndigits,int *decpt,char **rve)

{
  ULong UVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  __Bigint *b;
  longlong lVar13;
  ULong *pUVar14;
  char *pcVar15;
  __Bigint *p_Var16;
  __Bigint *p_Var17;
  __Bigint *b_00;
  __Bigint *p_Var18;
  int iVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ULong *pUVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  char *pcVar28;
  char *pcVar29;
  longlong lVar30;
  int iVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  char local_d8;
  char *local_c0;
  uint local_b4;
  uint local_a8;
  uint uStack_a4;
  uint uStack_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_6c;
  int i;
  
  uVar11 = *kindp;
  local_a8 = ndigits;
  *kindp = uVar11 & 0xffffffcf;
  uVar8 = uVar11 & 7;
  if (uVar8 == 3) {
    iVar10 = 8;
    pcVar15 = "Infinity";
    *decpt = -0x8000;
  }
  else {
    uVar5 = uVar11 & 4;
    if ((uVar11 & 4) == 0) {
      if (uVar8 != 0) {
        if (1 < uVar8 - 1) {
          return (char *)0x0;
        }
        iVar10 = fpi->nbits;
        iVar19 = 0;
        iVar21 = 0x20;
        if (0x20 < iVar10) {
          do {
            iVar31 = iVar21 * 2;
            iVar19 = iVar19 + 1;
            iVar26 = iVar21 * -2;
            iVar21 = iVar31;
          } while (iVar10 != iVar31 && SBORROW4(iVar10,iVar31) == iVar10 + iVar26 < 0);
        }
        b = __Balloc_D2A(iVar19);
        lVar30 = (longlong)(iVar10 + -1 >> 5);
        pUVar14 = bits;
        pUVar24 = b->x;
        do {
          UVar1 = *pUVar14;
          pUVar14 = pUVar14 + 1;
          *pUVar24 = UVar1;
          pUVar24 = pUVar24 + 1;
        } while (pUVar14 <= bits + lVar30);
        lVar13 = lVar30 * 4 + 4;
        if ((longlong)(bits + lVar30) + 1U < (longlong)bits + 1U) {
          lVar13 = 4;
        }
        uVar25 = lVar13 >> 2 & 0xffffffff;
        pUVar14 = b->x + ((lVar13 >> 2) - 6);
LAB_14000568c:
        iVar21 = (int)uVar25;
        uVar8 = iVar21 - 1;
        uVar25 = (ulonglong)uVar8;
        if (pUVar14[5] == 0) goto LAB_140005680;
        b->wds = iVar21;
        uVar12 = 0x1f;
        if (b->x[(int)uVar8] != 0) {
          for (; b->x[(int)uVar8] >> uVar12 == 0; uVar12 = uVar12 - 1) {
          }
        }
        iVar21 = iVar21 * 0x20 - (uVar12 ^ 0x1f);
        goto LAB_1400056b1;
      }
      goto LAB_140005800;
    }
    if (uVar8 != 4) {
      return (char *)0x0;
    }
    iVar10 = 3;
    pcVar15 = "NaN";
    *decpt = -0x8000;
  }
  pcVar15 = __nrv_alloc_D2A(pcVar15,rve,iVar10);
  return pcVar15;
LAB_140005680:
  pUVar14 = pUVar14 + -1;
  if (uVar8 == 0) goto LAB_140005858;
  goto LAB_14000568c;
LAB_1400067c5:
  while( true ) {
    pcVar29 = local_c0 + 1;
    iVar10 = __cmp_D2A(p_Var17,p_Var16);
    if (iVar10 < 1) break;
    *local_c0 = (char)uVar11;
    p_Var18 = __multadd_D2A(p_Var16,10,0);
    if (b_00 == p_Var16) {
      b_00 = p_Var18;
    }
    b = __multadd_D2A(b,10,0);
    iVar10 = __quorem_D2A(b,p_Var17);
    uVar11 = iVar10 + 0x30;
    local_c0 = pcVar29;
    p_Var16 = p_Var18;
  }
  if (uVar11 == 0x39) {
LAB_140006ab8:
    cVar7 = '9';
    *local_c0 = '9';
LAB_1400064d0:
    while (pcVar28 = pcVar29 + -1, cVar7 == '9') {
      if (pcVar28 == pcVar15) {
        local_b4 = local_b4 + 1;
        *pcVar15 = '1';
        uVar12 = 0x20;
        goto LAB_140006260;
      }
      cVar7 = pcVar29[-2];
      pcVar29 = pcVar28;
    }
    *pcVar28 = cVar7 + '\x01';
    uVar12 = 0x20;
  }
  else {
    uVar11 = uVar11 + 1;
    uStack_88 = 0x20;
LAB_140006810:
    local_d8 = (char)uVar11;
    *local_c0 = local_d8;
    uVar12 = uStack_88;
  }
LAB_140006260:
  __Bfree_D2A(p_Var17);
  if (p_Var16 != (__Bigint *)0x0) {
    if ((b_00 != (__Bigint *)0x0) && (b_00 != p_Var16)) {
      __Bfree_D2A(b_00);
    }
    goto LAB_14000628d;
  }
  goto LAB_140005e48;
LAB_140005b08:
  *pcVar28 = cVar7 + '\x01';
  local_b4 = local_b4 + 1;
  uVar12 = 0x20;
  goto LAB_140005e48;
LAB_140005858:
  b->wds = 0;
  iVar21 = 0;
LAB_1400056b1:
  i = __trailz_D2A(b);
  iVar19 = be;
  if (i != 0) {
    __rshift_D2A(b,i);
    iVar19 = be + i;
    iVar21 = iVar21 - i;
  }
  if (b->wds == 0) {
    __Bfree_D2A(b);
LAB_140005800:
    *decpt = 1;
    pcVar15 = __nrv_alloc_D2A("0",rve,1);
    return pcVar15;
  }
  dVar32 = __b2d_D2A(b,&i);
  iVar26 = iVar19 + iVar21 + -1;
  uVar8 = (uint)((ulonglong)dVar32 >> 0x20) & 0xfffff | 0x3ff00000;
  iVar31 = -iVar26;
  if (0 < iVar26) {
    iVar31 = iVar26;
  }
  dVar33 = ((double)((ulonglong)dVar32 & 0xffffffff | (ulonglong)uVar8 << 0x20) - 1.5) *
           0.289529654602168 + 0.1760912590558 + (double)iVar26 * 0.301029995663981;
  if (0 < iVar31 + -0x435) {
    dVar33 = dVar33 + (double)(iVar31 + -0x435) * 7e-17;
  }
  uStack_84 = (uint)dVar33;
  if ((dVar33 < 0.0) && ((double)(int)uStack_84 != dVar33)) {
    uStack_84 = uStack_84 - 1;
  }
  dVar32 = (double)((ulonglong)dVar32 & 0xffffffff | (ulonglong)(uVar8 + iVar26 * 0x100000) << 0x20)
  ;
  iVar31 = (iVar21 - iVar26) + -1;
  if (uStack_84 < 0x17) {
    if (dVar32 < __tens_D2A[(int)uStack_84]) {
      bVar3 = false;
      uStack_84 = uStack_84 - 1;
      goto LAB_140005898;
    }
    bVar3 = false;
    iVar23 = 0;
    if (iVar31 < 0) goto LAB_140005ea0;
LAB_140005b41:
    iVar31 = iVar31 + uStack_84;
    iStack_80 = 0;
    uVar8 = uStack_84;
  }
  else {
    bVar3 = true;
LAB_140005898:
    iVar23 = 0;
    if (iVar31 < 0) {
LAB_140005ea0:
      iVar31 = 0;
      iVar23 = 1 - (iVar21 - iVar26);
    }
    if (-1 < (int)uStack_84) goto LAB_140005b41;
    iVar23 = iVar23 - uStack_84;
    iStack_80 = -uStack_84;
    uVar8 = 0;
  }
  iVar26 = iStack_80;
  iVar27 = iVar23;
  uVar12 = uVar5;
  if ((uint)mode < 10) {
    iVar4 = mode;
    if (5 < mode) {
      iVar4 = mode + -4;
    }
    bVar2 = iVar19 + iVar21 + 0x3fdU < 0x7f8;
    if (iVar4 == 3) {
      uStack_6c = ndigits + uStack_84;
      uStack_a4 = uStack_6c + 1;
      if ((int)uStack_a4 < 1) {
        bVar20 = false;
LAB_140006666:
        uStack_6c = ndigits + uStack_84;
        i = 1;
        goto LAB_140005f79;
      }
      i = uStack_a4;
      pcVar15 = __rv_alloc_D2A(uStack_a4);
      bVar20 = false;
LAB_140005968:
      uVar22 = fpi->rounding - 1;
      uStack_88 = uVar22;
      if (uVar22 == 0) goto LAB_140005996;
      uStack_88 = 2;
      if (-1 < (int)uVar22) {
        uStack_88 = uVar22;
      }
      if ((uVar11 & 8) != 0) {
        uStack_88 = 3 - uStack_88;
        goto LAB_140005996;
      }
LAB_140006018:
      if ((iVar19 < 0) || (fpi->int_max < (int)uStack_84)) {
        if (bVar20) goto LAB_140005be1;
        p_Var16 = (__Bigint *)0x0;
        bVar2 = false;
        goto LAB_140005c7f;
      }
      dVar33 = __tens_D2A[(int)uStack_84];
      if ((-1 < (int)local_a8) || (0 < (int)uStack_a4)) goto LAB_140006558;
      if ((uStack_a4 != 0) || (dVar32 <= dVar33 * 5.0)) goto LAB_1400062cd;
      local_b4 = uStack_84 + 2;
      p_Var17 = (__Bigint *)0x0;
      p_Var16 = (__Bigint *)0x0;
LAB_140005e20:
      *pcVar15 = '1';
      pcVar29 = pcVar15 + 1;
      __Bfree_D2A(p_Var17);
      uVar12 = 0x20;
      if (p_Var16 != (__Bigint *)0x0) goto LAB_14000628d;
      goto LAB_140005e48;
    }
    if (iVar4 < 4) {
      if (iVar4 != 2) goto LAB_140005b68;
      bVar20 = false;
    }
    else {
      if (iVar4 != 4) {
        uStack_6c = ndigits + uStack_84;
        uStack_a4 = uStack_6c + 1;
        if ((int)uStack_a4 < 1) {
          bVar20 = true;
          goto LAB_140006666;
        }
        i = uStack_a4;
        pcVar15 = __rv_alloc_D2A(uStack_a4);
        bVar20 = true;
        goto LAB_140005968;
      }
      bVar20 = true;
    }
    local_a8 = 1;
    uStack_a4 = local_a8;
    uStack_6c = local_a8;
    i = local_a8;
    if (0 < ndigits) {
      local_a8 = ndigits;
      uStack_a4 = ndigits;
      uStack_6c = ndigits;
      i = ndigits;
    }
LAB_140005f79:
    pcVar15 = __rv_alloc_D2A(i);
    if (1 < iVar4) goto LAB_140005968;
    uStack_88 = 0;
LAB_140005996:
    bVar6 = uStack_a4 < 0xf && (mode < 6 && bVar2);
    if ((uStack_a4 >= 0xf || (5 < mode || !bVar2)) || (uStack_88 != 0 || uStack_84 != 0))
    goto LAB_140006018;
    i = 0;
    if ((bVar3) && (dVar32 < 1.0)) {
      if (uStack_a4 == 0) {
        dVar33 = dVar32 + dVar32 + 7.0;
        dVar33 = (double)((ulonglong)dVar33 & 0xffffffff |
                         (ulonglong)((int)((ulonglong)dVar33 >> 0x20) + 0xfcc00000) << 0x20);
        goto LAB_140005fe0;
      }
      if (0 < (int)uStack_6c) {
        dVar35 = dVar32 * 10.0;
        local_b4 = 0xffffffff;
        dVar33 = dVar35 * 3.0 + 7.0;
        dVar33 = (double)((ulonglong)dVar33 & 0xffffffff |
                         (ulonglong)((int)((ulonglong)dVar33 >> 0x20) + 0xfcc00000) << 0x20);
        uVar11 = uStack_6c;
        goto LAB_140005a28;
      }
LAB_140006009:
      uStack_88 = 0;
      goto LAB_140006018;
    }
    dVar33 = dVar32 + dVar32 + 7.0;
    dVar33 = (double)((ulonglong)dVar33 & 0xffffffff |
                     (ulonglong)((int)((ulonglong)dVar33 >> 0x20) + 0xfcc00000) << 0x20);
    if (uStack_a4 != 0) {
      local_b4 = 0;
      uVar11 = uStack_a4;
      dVar35 = dVar32;
LAB_140005a28:
      if (bVar20) {
        pcVar28 = pcVar15 + 1;
        dVar33 = 0.5 / __tens_D2A[(int)(uVar11 - 1)] - dVar33;
        *pcVar15 = (char)(int)dVar35 + '0';
        dVar34 = dVar35 - (double)(int)dVar35;
        pcVar29 = pcVar28;
        if (dVar33 <= dVar34) {
          do {
            if (1.0 - dVar34 < dVar33) {
              uVar22 = (uint)(byte)pcVar28[-1];
              pcVar29 = pcVar28;
              goto LAB_140005b00;
            }
            i = i + 1;
            if ((int)uVar11 <= i) goto LAB_140006009;
            pcVar29 = pcVar28 + 1;
            dVar33 = dVar33 * 10.0;
            iVar9 = (int)(dVar34 * 10.0);
            *pcVar28 = (char)iVar9 + '0';
            dVar34 = dVar34 * 10.0 - (double)iVar9;
            pcVar28 = pcVar29;
          } while (dVar33 <= dVar34);
        }
      }
      else {
        i = 1;
        dVar33 = dVar33 * __tens_D2A[(int)(uVar11 - 1)];
        pcVar28 = pcVar15;
        dVar34 = dVar35;
        bVar2 = false;
        while( true ) {
          iVar9 = (int)dVar34;
          if (iVar9 != 0) {
            dVar34 = dVar34 - (double)iVar9;
            bVar2 = bVar6;
          }
          pcVar29 = pcVar28 + 1;
          uVar22 = iVar9 + 0x30;
          *pcVar28 = (char)uVar22;
          if (i == uVar11) break;
          dVar34 = dVar34 * 10.0;
          i = i + 1;
          pcVar28 = pcVar29;
          bVar2 = bVar6;
        }
        if (!bVar2) {
          dVar34 = dVar35;
        }
        if (dVar33 + 0.5 < dVar34) {
LAB_140005b00:
          do {
            pcVar28 = pcVar29 + -1;
            cVar7 = (char)uVar22;
            if (cVar7 != '9') goto LAB_140005b08;
            if (pcVar28 == pcVar15) {
              *pcVar15 = '0';
              local_b4 = local_b4 + 1;
              cVar7 = pcVar29[-1];
              goto LAB_140005b08;
            }
            uVar22 = (uint)(byte)pcVar29[-2];
            pcVar29 = pcVar28;
          } while( true );
        }
        if (0.5 - dVar33 <= dVar34) goto LAB_140006009;
      }
      uVar11 = (uint)NAN(dVar34);
      if (dVar34 != 0.0) {
        uVar11 = 1;
      }
      local_b4 = local_b4 + 1;
      uVar12 = uVar11 << 4;
      goto LAB_140005e48;
    }
LAB_140005fe0:
    if (dVar33 < dVar32 - 5.0) {
      local_b4 = 2;
      p_Var17 = (__Bigint *)0x0;
      p_Var16 = (__Bigint *)0x0;
      goto LAB_140005e20;
    }
    if (-dVar33 <= dVar32 - 5.0) goto LAB_140006009;
LAB_1400062cd:
    p_Var17 = (__Bigint *)0x0;
    p_Var16 = (__Bigint *)0x0;
    pcVar29 = pcVar15;
  }
  else {
    iVar4 = 0;
LAB_140005b68:
    i = (int)((double)iVar10 * 0.30103) + 3;
    pcVar15 = __rv_alloc_D2A(i);
    if (iVar19 < 0) {
      iVar9 = fpi->emin;
      local_a8 = 0;
      i = (iVar10 - iVar21) + 1;
      uStack_88 = 0;
      uStack_a4 = 0xffffffff;
      uStack_6c = 0xffffffff;
      if (iVar19 - (iVar10 - iVar21) < iVar9) {
LAB_140005c02:
        if ((iVar4 - 3U & 0xfffffffd) == 0) goto LAB_1400064f0;
        i = (iVar19 - iVar9) + 1;
        if ((1 < iVar4 && 0 < (int)uStack_a4) && ((int)uStack_a4 < i)) goto LAB_1400064fb;
      }
LAB_140005c3d:
      iVar31 = iVar31 + i;
      iVar23 = i + iVar23;
    }
    else {
      if ((int)uStack_84 <= fpi->int_max) {
        uStack_88 = 0;
        uStack_a4 = 0xffffffff;
        dVar33 = __tens_D2A[(int)uStack_84];
LAB_140006558:
        i = 1;
        local_b4 = uStack_84 + 1;
        uVar11 = (uint)(dVar32 / dVar33);
        *pcVar15 = (char)uVar11 + '0';
        pcVar29 = pcVar15;
        for (dVar32 = dVar32 - (double)(int)uVar11 * dVar33; pcVar29 = pcVar29 + 1, dVar32 != 0.0;
            dVar32 = dVar32 * 10.0 - (double)(int)uVar11 * dVar33) {
          if (i == uStack_a4) {
            if (uStack_88 == 0) {
              if ((dVar32 + dVar32 <= dVar33) &&
                 ((uVar12 = 0x10, dVar32 + dVar32 != dVar33 || ((uVar11 & 1) == 0)))) break;
            }
            else {
              uVar12 = 0x10;
              if (uStack_88 != 1) break;
            }
            uVar22 = (uint)(byte)pcVar29[-1];
            local_b4 = uStack_84;
            goto LAB_140005b00;
          }
          i = i + 1;
          uVar11 = (uint)((dVar32 * 10.0) / dVar33);
          *pcVar29 = (char)uVar11 + '0';
        }
        goto LAB_140005e48;
      }
      local_a8 = 0;
      uStack_88 = 0;
      uStack_a4 = 0xffffffff;
      uStack_6c = 0xffffffff;
LAB_140005be1:
      iVar9 = fpi->emin;
      i = (iVar10 - iVar21) + 1;
      if (iVar19 - (iVar10 - iVar21) < iVar9) goto LAB_140005c02;
LAB_1400064f0:
      if (iVar4 < 2) goto LAB_140005c3d;
LAB_1400064fb:
      iVar10 = uStack_a4 - 1;
      if (iStack_80 < iVar10) {
        iVar26 = 0;
        uVar8 = uVar8 + (iVar10 - iStack_80);
        iStack_80 = iVar10;
      }
      else {
        iVar26 = iStack_80 - iVar10;
      }
      i = uStack_a4;
      if ((int)uStack_a4 < 0) {
        i = 0;
        iVar27 = iVar23 - uStack_a4;
      }
      else {
        iVar31 = iVar31 + uStack_a4;
        iVar23 = uStack_a4 + iVar23;
      }
    }
    p_Var16 = __i2b_D2A(1);
    bVar2 = true;
LAB_140005c7f:
    if ((0 < iVar27) && (0 < iVar31)) {
      i = iVar31;
      if (iVar27 <= iVar31) {
        i = iVar27;
      }
      iVar23 = iVar23 - i;
      iVar27 = iVar27 - i;
      iVar31 = iVar31 - i;
    }
    if (iStack_80 != 0) {
      if (bVar2) {
        if (0 < iVar26) {
          p_Var16 = __pow5mult_D2A(p_Var16,iVar26);
          p_Var17 = __mult_D2A(p_Var16,b);
          __Bfree_D2A(b);
          b = p_Var17;
        }
        if (iStack_80 - iVar26 != 0) {
          b = __pow5mult_D2A(b,iStack_80 - iVar26);
        }
      }
      else {
        b = __pow5mult_D2A(b,iStack_80);
      }
    }
    p_Var17 = __i2b_D2A(1);
    bVar20 = iVar21 == 1 && iVar4 < 2;
    if ((int)uVar8 < 1) {
      bVar6 = false;
      if ((bVar20) && (fpi->emin + 1 < be)) {
LAB_14000699b:
        iVar23 = iVar23 + 1;
        iVar31 = iVar31 + 1;
        bVar6 = true;
      }
      uVar11 = 0x1f;
      if (uVar8 != 0) goto LAB_140006331;
    }
    else {
      p_Var17 = __pow5mult_D2A(p_Var17,uVar8);
      if ((bVar20) && (fpi->emin + 1 < be)) goto LAB_14000699b;
      bVar6 = false;
LAB_140006331:
      uVar11 = 0x1f;
      if (p_Var17->x[p_Var17->wds + -1] != 0) {
        for (; p_Var17->x[p_Var17->wds + -1] >> uVar11 == 0; uVar11 = uVar11 - 1) {
        }
      }
      uVar11 = uVar11 ^ 0x1f;
    }
    uVar11 = (uVar11 - iVar31) - 4 & 0x1f;
    i = uVar11;
    if (0 < (int)(iVar23 + uVar11)) {
      b = __lshift_D2A(b,iVar23 + uVar11);
    }
    if (0 < i + iVar31) {
      p_Var17 = __lshift_D2A(p_Var17,i + iVar31);
    }
    bVar20 = iVar4 < 3;
    if ((bVar3) && (iVar10 = __cmp_D2A(b,p_Var17), iVar10 < 0)) {
      b = __multadd_D2A(b,10,0);
      uStack_a4 = uStack_6c;
      if (bVar2) {
        p_Var16 = __multadd_D2A(p_Var16,10,0);
        if (bVar20 || 0 < (int)uStack_6c) {
          local_b4 = uStack_84;
LAB_1400060a7:
          b_00 = p_Var16;
          if (0 < (int)(uVar11 + iVar27)) {
            b_00 = __lshift_D2A(p_Var16,uVar11 + iVar27);
          }
          p_Var16 = b_00;
          if (bVar6) {
            p_Var16 = __Balloc_D2A(b_00->k);
            memcpy(&p_Var16->sign,&b_00->sign,(longlong)b_00->wds * 4 + 8);
            p_Var16 = __lshift_D2A(p_Var16,1);
          }
          i = 1;
          local_c0 = pcVar15;
          do {
            iVar10 = __quorem_D2A(b,p_Var17);
            uVar11 = iVar10 + 0x30;
            iVar21 = __cmp_D2A(b,b_00);
            p_Var18 = __diff_D2A(p_Var17,p_Var16);
            if (p_Var18->sign == 0) {
              iVar19 = __cmp_D2A(b,p_Var18);
              __Bfree_D2A(p_Var18);
              if ((iVar19 != 0 || iVar4 != 0) || (iVar19 = 0, (*bits & 1) != 0 || uStack_88 != 0))
              goto LAB_1400060f5;
              if (uVar11 != 0x39) {
                if (iVar21 < 1) {
                  uVar12 = 0x10;
                  if (b->wds < 2) {
                    uVar12 = (uint)(b->x[0] != 0) << 4;
                  }
                }
                else {
                  uVar11 = iVar10 + 0x31;
                  uVar12 = 0x20;
                }
                local_d8 = (char)uVar11;
                *local_c0 = local_d8;
                pcVar29 = local_c0 + 1;
                goto LAB_140006260;
              }
LAB_140006aaf:
              pcVar29 = local_c0 + 1;
              goto LAB_140006ab8;
            }
            __Bfree_D2A(p_Var18);
            iVar19 = 1;
LAB_1400060f5:
            if ((iVar21 < 0) || ((iVar21 == 0 && iVar4 == 0 && ((*bits & 1) == 0)))) {
              if (uStack_88 == 0) {
                if (0 < iVar19) goto LAB_140006a4f;
LAB_140006a88:
                if (b->wds < 2) {
                  if (b->x[0] == 0) {
                    pcVar29 = local_c0 + 1;
                  }
                  else {
                    uStack_88 = 0x10;
                    pcVar29 = local_c0 + 1;
                  }
                  goto LAB_140006810;
                }
              }
              else {
                if ((b->wds < 2) && (b->x[0] == 0)) {
                  if (0 < iVar19) {
LAB_140006a4f:
                    b = __lshift_D2A(b,1);
                    iVar21 = __cmp_D2A(b,p_Var17);
                    if ((iVar21 < 1) && ((iVar21 != 0 || ((uVar11 & 1) == 0)))) {
                      uStack_88 = 0x20;
                    }
                    else {
                      if (uVar11 == 0x39) goto LAB_140006aaf;
                      uVar11 = iVar10 + 0x31;
                      uStack_88 = 0x20;
                    }
                    goto LAB_140006a88;
                  }
                  pcVar29 = local_c0 + 1;
                  uStack_88 = uVar5;
                  goto LAB_140006810;
                }
                if (uStack_88 != 2) goto LAB_1400067c5;
              }
              pcVar29 = local_c0 + 1;
              uStack_88 = 0x10;
              goto LAB_140006810;
            }
            pcVar29 = local_c0 + 1;
            if ((0 < iVar19) && (uStack_88 != 2)) {
              if (uVar11 == 0x39) goto LAB_140006ab8;
              *local_c0 = (char)uVar11 + '\x01';
              uVar12 = 0x20;
              goto LAB_140006260;
            }
            *local_c0 = (char)uVar11;
            if (i == uStack_a4) goto LAB_140006489;
            b = __multadd_D2A(b,10,0);
            if (b_00 == p_Var16) {
              b_00 = __multadd_D2A(b_00,10,0);
              p_Var16 = b_00;
            }
            else {
              b_00 = __multadd_D2A(b_00,10,0);
              p_Var16 = __multadd_D2A(p_Var16,10,0);
            }
            i = i + 1;
            local_c0 = pcVar29;
          } while( true );
        }
      }
      else if (bVar20 || 0 < (int)uStack_6c) {
        local_b4 = uStack_84;
        goto LAB_140006430;
      }
      uStack_84 = uStack_84 - 1;
    }
    else if ((0 < (int)uStack_a4) || (bVar20)) {
      local_b4 = uStack_84 + 1;
      if (bVar2) goto LAB_1400060a7;
LAB_140006430:
      i = 1;
      pcVar28 = pcVar15;
      while( true ) {
        pcVar29 = pcVar28 + 1;
        iVar10 = __quorem_D2A(b,p_Var17);
        uVar11 = iVar10 + 0x30;
        *pcVar28 = (char)uVar11;
        if ((int)uStack_a4 <= i) break;
        b = __multadd_D2A(b,10,0);
        i = i + 1;
        pcVar28 = pcVar29;
      }
      b_00 = (__Bigint *)0x0;
LAB_140006489:
      if (uStack_88 == 0) {
        b = __lshift_D2A(b,1);
        iVar10 = __cmp_D2A(b,p_Var17);
        if ((0 < iVar10) || ((iVar10 == 0 && ((uVar11 & 1) != 0)))) goto LAB_1400064b3;
      }
      else if (uStack_88 != 2) {
        if ((b->wds < 2) && (b->x[0] == 0)) goto LAB_140006260;
LAB_1400064b3:
        cVar7 = pcVar29[-1];
        goto LAB_1400064d0;
      }
      if (b->wds < 2) {
        uVar12 = 0x10;
        if (b->x[0] == 0) {
          uVar12 = uVar5;
        }
      }
      else {
        uVar12 = 0x10;
      }
      goto LAB_140006260;
    }
    pcVar29 = pcVar15;
    if (uStack_a4 == 0) {
      p_Var17 = __multadd_D2A(p_Var17,5,0);
      iVar10 = __cmp_D2A(b,p_Var17);
      if (0 < iVar10) {
        local_b4 = uStack_84 + 2;
        goto LAB_140005e20;
      }
    }
  }
  local_b4 = -local_a8;
  __Bfree_D2A(p_Var17);
  uVar12 = 0x10;
  pcVar15 = pcVar29;
  if (p_Var16 == (__Bigint *)0x0) goto LAB_140005e67;
LAB_14000628d:
  __Bfree_D2A(p_Var16);
LAB_140005e48:
  if (pcVar15 < pcVar29) {
    do {
      if (pcVar29[-1] != '0') break;
      pcVar29 = pcVar29 + -1;
    } while (pcVar29 != pcVar15);
  }
LAB_140005e67:
  __Bfree_D2A(b);
  *pcVar29 = '\0';
  *decpt = local_b4;
  if (rve != (char **)0x0) {
    *rve = pcVar29;
  }
  *kindp = *kindp | uVar12;
  return pcVar15;
}



// WARNING: Unknown calling convention

void __rshift_D2A(__Bigint *b,int k)

{
  ULong *pUVar1;
  ULong *pUVar2;
  uint uVar3;
  sbyte sVar4;
  int iVar5;
  ULong *pUVar6;
  longlong lVar7;
  longlong lVar8;
  ULong *pUVar9;
  ULong *pUVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  
  lVar7 = (longlong)b->wds;
  if (k >> 5 < b->wds) {
    pUVar1 = b->x;
    lVar8 = (longlong)(k >> 5);
    pUVar6 = pUVar1 + lVar7;
    pUVar9 = pUVar1 + lVar8;
    if ((k & 0x1fU) == 0) {
      pUVar10 = pUVar1;
      if (pUVar6 <= pUVar9) goto LAB_140006cc0;
      do {
        pUVar2 = pUVar9 + 1;
        *pUVar10 = *pUVar9;
        pUVar9 = pUVar2;
        pUVar10 = pUVar10 + 1;
      } while (pUVar2 < pUVar6);
      pUVar6 = pUVar1 + (lVar7 - lVar8);
    }
    else {
      uVar3 = *pUVar9;
      puVar11 = pUVar9 + 1;
      sVar4 = (sbyte)(k & 0x1fU);
      uVar13 = uVar3 >> sVar4;
      pUVar9 = pUVar1;
      if (puVar11 < pUVar6) {
        do {
          puVar12 = puVar11 + 1;
          *pUVar9 = *puVar11 << (0x20U - sVar4 & 0x1f) | uVar13;
          uVar3 = *puVar11;
          uVar13 = uVar3 >> sVar4;
          pUVar9 = pUVar9 + 1;
          puVar11 = puVar12;
        } while (puVar12 < pUVar6);
        pUVar6 = (ULong *)((longlong)b + (lVar7 - lVar8) * 4 + 0x14);
        *pUVar6 = uVar13;
        if (uVar3 >> sVar4 == 0) goto LAB_140006cfd;
      }
      else {
        b->x[0] = uVar13;
        pUVar6 = pUVar1;
        if (uVar3 >> sVar4 == 0) goto LAB_140006cc0;
      }
      pUVar6 = pUVar6 + 1;
    }
LAB_140006cfd:
    iVar5 = (int)((longlong)pUVar6 - (longlong)pUVar1 >> 2);
    b->wds = iVar5;
    if (iVar5 != 0) {
      return;
    }
  }
  else {
LAB_140006cc0:
    b->wds = 0;
  }
  b->x[0] = 0;
  return;
}



// WARNING: Unknown calling convention

int __trailz_D2A(__Bigint *b)

{
  ULong *pUVar1;
  uint uVar2;
  int iVar3;
  ULong *pUVar4;
  int iVar5;
  
  iVar5 = 0;
  pUVar4 = b->x;
  pUVar1 = pUVar4 + b->wds;
  while( true ) {
    if (pUVar1 <= pUVar4) {
      return iVar5;
    }
    uVar2 = *pUVar4;
    if (uVar2 != 0) break;
    pUVar4 = pUVar4 + 1;
    iVar5 = iVar5 + 0x20;
  }
  if (pUVar1 <= pUVar4) {
    return iVar5;
  }
  iVar3 = 0;
  for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar3 = iVar3 + 1;
  }
  return iVar5 + iVar3;
}



// WARNING: Removing unreachable block (ram,0x000140006e4b)
// WARNING: Removing unreachable block (ram,0x000140006e30)
// WARNING: Removing unreachable block (ram,0x000140006e3c)
// WARNING: Unknown calling convention

void dtoa_lock(uint n)

{
  if (dtoa_CS_init != 2) {
    if (dtoa_CS_init != 0) {
      if (dtoa_CS_init == 1) {
        do {
          Sleep(1);
        } while (dtoa_CS_init == 1);
        if (dtoa_CS_init == 2) goto LAB_140006e16;
      }
      return;
    }
    LOCK();
    dtoa_CS_init = 1;
    UNLOCK();
    InitializeCriticalSection((LPCRITICAL_SECTION)dtoa_CritSec);
    InitializeCriticalSection((LPCRITICAL_SECTION)(dtoa_CritSec + 1));
    atexit(dtoa_lock_cleanup);
    dtoa_CS_init = 2;
  }
LAB_140006e16:
                    // WARNING: Could not recover jumptable at 0x000140006e27. Too many branches
                    // WARNING: Treating indirect jump as call
  EnterCriticalSection((LPCRITICAL_SECTION)(dtoa_CritSec + n));
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void dtoa_lock_cleanup(void)

{
  long lVar1;
  
  lVar1 = dtoa_CS_init;
  LOCK();
  dtoa_CS_init = 3;
  UNLOCK();
  if (lVar1 != 2) {
    return;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)dtoa_CritSec);
                    // WARNING: Could not recover jumptable at 0x000140006e9f. Too many branches
                    // WARNING: Treating indirect jump as call
  DeleteCriticalSection((LPCRITICAL_SECTION)(dtoa_CritSec + 1));
  return;
}



// WARNING: Unknown calling convention

__Bigint * __Balloc_D2A(int k)

{
  int iVar1;
  __Bigint *p_Var2;
  ulonglong uVar3;
  int iVar4;
  
  dtoa_lock(0);
  iVar1 = dtoa_CS_init;
  if (k < 10) {
    p_Var2 = freelist[k];
    if (p_Var2 != (__Bigint *)0x0) {
      freelist[k] = p_Var2->next;
      goto joined_r0x000140006f31;
    }
    iVar4 = 1 << ((byte)k & 0x1f);
    uVar3 = (longlong)(iVar4 + 9) * 4 - 1U >> 3;
    if (0x120 < ((longlong)(pmem_next + -0x28001a34) >> 3) + uVar3) goto LAB_140006ede;
    p_Var2 = (__Bigint *)pmem_next;
    pmem_next = pmem_next + uVar3;
  }
  else {
    iVar4 = 1 << ((byte)k & 0x1f);
    uVar3 = (longlong)iVar4 * 4 + 0x23U >> 3 & 0xffffffff;
LAB_140006ede:
    p_Var2 = (__Bigint *)malloc(uVar3 << 3);
    if (p_Var2 == (__Bigint *)0x0) {
      return (__Bigint *)0x0;
    }
  }
  iVar1 = dtoa_CS_init;
  p_Var2->k = k;
  p_Var2->maxwds = iVar4;
joined_r0x000140006f31:
  if (iVar1 == 2) {
    LeaveCriticalSection((LPCRITICAL_SECTION)dtoa_CritSec);
  }
  p_Var2->sign = 0;
  p_Var2->wds = 0;
  return p_Var2;
}



// WARNING: Unknown calling convention

void __Bfree_D2A(__Bigint *v)

{
  __Bigint *p_Var1;
  bool bVar2;
  
  if (v != (__Bigint *)0x0) {
    if (9 < v->k) {
      free(v);
      return;
    }
    dtoa_lock(0);
    bVar2 = dtoa_CS_init == 2;
    p_Var1 = freelist[v->k];
    freelist[v->k] = v;
    v->next = p_Var1;
    if (bVar2) {
                    // WARNING: Could not recover jumptable at 0x00014000700d. Too many branches
                    // WARNING: Treating indirect jump as call
      LeaveCriticalSection((LPCRITICAL_SECTION)dtoa_CritSec);
      return;
    }
  }
  return;
}



// WARNING: Unknown calling convention

__Bigint * __multadd_D2A(__Bigint *b,int m,int a)

{
  int iVar1;
  ulonglong uVar2;
  __Bigint *p_Var3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar1 = b->wds;
  uVar5 = (ulonglong)a;
  lVar4 = 0;
  do {
    uVar2 = (ulonglong)b->x[lVar4] * (longlong)m + uVar5;
    b->x[lVar4] = (ULong)uVar2;
    lVar4 = lVar4 + 1;
    uVar5 = uVar2 >> 0x20;
  } while ((int)lVar4 < iVar1);
  p_Var3 = b;
  if (uVar5 != 0) {
    if (b->maxwds <= iVar1) {
      p_Var3 = __Balloc_D2A(b->k + 1);
      if (p_Var3 == (__Bigint *)0x0) {
        return (__Bigint *)0x0;
      }
      memcpy(&p_Var3->sign,&b->sign,(longlong)b->wds * 4 + 8);
      __Bfree_D2A(b);
    }
    p_Var3->x[iVar1] = (ULong)(uVar2 >> 0x20);
    p_Var3->wds = iVar1 + 1;
  }
  return p_Var3;
}



// WARNING: Unknown calling convention

__Bigint * __i2b_D2A(int i)

{
  int iVar1;
  __Bigint *p_Var2;
  
  dtoa_lock(0);
  if (freelist[1] == (__Bigint *)0x0) {
    if (((longlong)(pmem_next + -0x28001a34) >> 3) + 5U < 0x121) {
      p_Var2 = (__Bigint *)pmem_next;
      pmem_next = pmem_next + 5;
    }
    else {
      p_Var2 = (__Bigint *)malloc(0x28);
      if (p_Var2 == (__Bigint *)0x0) {
        return (__Bigint *)0x0;
      }
    }
    iVar1 = dtoa_CS_init;
    p_Var2->k = 1;
    p_Var2->maxwds = 2;
  }
  else {
    p_Var2 = freelist[1];
    freelist[1] = freelist[1]->next;
    iVar1 = dtoa_CS_init;
  }
  if (iVar1 == 2) {
    LeaveCriticalSection((LPCRITICAL_SECTION)dtoa_CritSec);
  }
  p_Var2->x[0] = i;
  p_Var2->sign = 0;
  p_Var2->wds = 1;
  return p_Var2;
}



// WARNING: Unknown calling convention

__Bigint * __mult_D2A(__Bigint *a,__Bigint *b)

{
  int *piVar1;
  ULong *pUVar2;
  ULong *pUVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  __Bigint *p_Var8;
  ULong *_Dst;
  ulonglong uVar9;
  ULong *pUVar10;
  ULong *pUVar11;
  int iVar12;
  ULong *pUVar13;
  ulonglong uVar14;
  ULong *pUVar15;
  __Bigint *p_Var16;
  longlong lVar17;
  
  iVar12 = a->wds;
  iVar4 = b->wds;
  p_Var16 = a;
  iVar7 = iVar12;
  if (iVar4 <= iVar12) {
    p_Var16 = b;
    b = a;
    iVar7 = iVar4;
    iVar4 = iVar12;
  }
  iVar12 = iVar4 + iVar7;
  p_Var8 = __Balloc_D2A((uint)(b->maxwds < iVar12) + b->k);
  if (p_Var8 != (__Bigint *)0x0) {
    _Dst = p_Var8->x;
    pUVar13 = _Dst + iVar12;
    if (_Dst < pUVar13) {
      _Dst = (ULong *)memset(_Dst,0,((ulonglong)((longlong)pUVar13 + (-0x19 - (longlong)p_Var8)) &
                                    0xfffffffffffffffc) + 4);
    }
    pUVar15 = p_Var16->x;
    pUVar2 = pUVar15 + iVar7;
    pUVar3 = b->x + iVar4;
    if (pUVar15 < pUVar2) {
      lVar17 = ((longlong)pUVar3 + (-0x19 - (longlong)b) & 0xfffffffffffffffcU) + 4;
      if (pUVar3 < (uint *)((longlong)b->x + 1)) {
        lVar17 = 4;
      }
      do {
        while( true ) {
          uVar5 = *pUVar15;
          pUVar15 = pUVar15 + 1;
          if (uVar5 == 0) break;
          uVar14 = 0;
          pUVar10 = _Dst;
          pUVar11 = b->x;
          do {
            uVar6 = *pUVar11;
            pUVar11 = pUVar11 + 1;
            uVar9 = (ulonglong)uVar6 * (ulonglong)uVar5 + (ulonglong)*pUVar10 + uVar14;
            *pUVar10 = (uint)uVar9;
            uVar14 = uVar9 >> 0x20;
            pUVar10 = pUVar10 + 1;
          } while (pUVar11 < pUVar3);
          *(int *)((longlong)_Dst + lVar17) = (int)(uVar9 >> 0x20);
          _Dst = _Dst + 1;
          if (pUVar2 <= pUVar15) goto LAB_1400072b3;
        }
        _Dst = _Dst + 1;
      } while (pUVar15 < pUVar2);
    }
LAB_1400072b3:
    if (0 < iVar12) {
      do {
        piVar1 = (int *)(pUVar13 + -1);
        pUVar13 = pUVar13 + -1;
        if (*piVar1 != 0) break;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    p_Var8->wds = iVar12;
  }
  return p_Var8;
}



// WARNING: Unknown calling convention

__Bigint * __pow5mult_D2A(__Bigint *b,int k)

{
  __Bigint *p_Var1;
  uint uVar2;
  __Bigint *p_Var3;
  uint uVar4;
  __Bigint *b_00;
  bool bVar5;
  
  if (((k & 3U) != 0) &&
     (b = __multadd_D2A(b,__pow5mult_D2A::p05[(int)((k & 3U) - 1)],0), b == (__Bigint *)0x0)) {
    return (__Bigint *)0x0;
  }
  uVar4 = k >> 2;
  if (uVar4 != 0) {
    p_Var3 = p5s;
    if (p5s == (__Bigint *)0x0) {
      dtoa_lock(1);
      p_Var3 = p5s;
      if (p5s == (__Bigint *)0x0) {
        p_Var3 = __Balloc_D2A(1);
        if (p_Var3 == (__Bigint *)0x0) {
          p5s = (__Bigint *)0x0;
          return (__Bigint *)0x0;
        }
        p5s = p_Var3;
        p_Var3->wds = 1;
        p_Var3->x[0] = 0x271;
        p_Var3->next = (__Bigint *)0x0;
      }
      if (dtoa_CS_init == 2) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(dtoa_CritSec + 1));
      }
    }
    while( true ) {
      b_00 = p_Var3;
      uVar2 = uVar4 & 1;
      uVar4 = (int)uVar4 >> 1;
      p_Var3 = b;
      if (uVar2 != 0) {
        p_Var3 = __mult_D2A(b,b_00);
        if (p_Var3 == (__Bigint *)0x0) {
          return (__Bigint *)0x0;
        }
        if (b != (__Bigint *)0x0) {
          if (b->k < 10) {
            dtoa_lock(0);
            bVar5 = dtoa_CS_init == 2;
            p_Var1 = freelist[b->k];
            freelist[b->k] = b;
            b->next = p_Var1;
            if (bVar5) {
              LeaveCriticalSection((LPCRITICAL_SECTION)dtoa_CritSec);
            }
          }
          else {
            free(b);
          }
        }
      }
      b = p_Var3;
      if (uVar4 == 0) break;
      p_Var3 = b_00->next;
      if (b_00->next == (__Bigint *)0x0) {
        dtoa_lock(1);
        p_Var3 = b_00->next;
        if (p_Var3 == (__Bigint *)0x0) {
          p_Var3 = __mult_D2A(b_00,b_00);
          b_00->next = p_Var3;
          if (p_Var3 == (__Bigint *)0x0) {
            return (__Bigint *)0x0;
          }
          p_Var3->next = (__Bigint *)0x0;
        }
        if (dtoa_CS_init == 2) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(dtoa_CritSec + 1));
        }
      }
    }
  }
  return b;
}



// WARNING: Unknown calling convention

__Bigint * __lshift_D2A(__Bigint *b,int k)

{
  ULong *pUVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  sbyte sVar7;
  __Bigint *p_Var8;
  longlong lVar9;
  int k_00;
  uint uVar10;
  int iVar11;
  int iVar12;
  ULong *pUVar13;
  ULong *pUVar14;
  ULong *pUVar15;
  ULong *pUVar16;
  
  k_00 = b->k;
  iVar12 = k >> 5;
  iVar11 = b->wds + iVar12;
  for (iVar4 = b->maxwds; iVar4 < iVar11 + 1; iVar4 = iVar4 * 2) {
    k_00 = k_00 + 1;
  }
  p_Var8 = __Balloc_D2A(k_00);
  if (p_Var8 != (__Bigint *)0x0) {
    pUVar1 = p_Var8->x;
    pUVar15 = pUVar1;
    if (0 < iVar12) {
      pUVar15 = pUVar1 + iVar12;
      memset(pUVar1,0,(longlong)iVar12 * 4);
    }
    pUVar14 = b->x;
    pUVar1 = pUVar14 + b->wds;
    if ((k & 0x1fU) == 0) {
      do {
        puVar3 = pUVar15 + 1;
        puVar2 = pUVar14 + 1;
        *pUVar15 = *pUVar14;
        if (pUVar1 <= puVar2) break;
        pUVar15 = pUVar15 + 2;
        pUVar14 = pUVar14 + 2;
        *puVar3 = *puVar2;
      } while (pUVar14 < pUVar1);
    }
    else {
      uVar10 = 0;
      sVar7 = (sbyte)(k & 0x1fU);
      pUVar16 = pUVar15;
      do {
        pUVar13 = pUVar14 + 1;
        *pUVar16 = *pUVar14 << sVar7 | uVar10;
        uVar5 = *pUVar14;
        bVar6 = 0x20U - sVar7 & 0x1f;
        uVar10 = uVar5 >> bVar6;
        pUVar14 = pUVar13;
        pUVar16 = pUVar16 + 1;
      } while (pUVar13 < pUVar1);
      lVar9 = ((longlong)pUVar1 + (-0x19 - (longlong)b) & 0xfffffffffffffffcU) + 4;
      if (pUVar1 < (uint *)((longlong)b->x + 1U)) {
        lVar9 = 4;
      }
      if (uVar5 >> bVar6 != 0) {
        iVar11 = iVar11 + 1;
      }
      *(uint *)((longlong)pUVar15 + lVar9) = uVar10;
    }
    p_Var8->wds = iVar11;
    __Bfree_D2A(b);
  }
  return p_Var8;
}



// WARNING: Unknown calling convention

int __cmp_D2A(__Bigint *a,__Bigint *b)

{
  int iVar1;
  ULong *pUVar2;
  ULong *pUVar3;
  int iVar4;
  
  iVar1 = b->wds;
  iVar4 = a->wds - iVar1;
  if (iVar4 == 0) {
    pUVar2 = a->x + iVar1;
    pUVar3 = b->x + iVar1;
    do {
      pUVar2 = pUVar2 + -1;
      pUVar3 = pUVar3 + -1;
      if (*pUVar2 != *pUVar3) {
        return -(uint)(*pUVar2 < *pUVar3) | 1;
      }
    } while (a->x < pUVar2);
  }
  return iVar4;
}



// WARNING: Unknown calling convention

__Bigint * __diff_D2A(__Bigint *a,__Bigint *b)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ULong *pUVar4;
  __Bigint *p_Var5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  ULong *pUVar12;
  ulonglong uVar13;
  __Bigint *p_Var14;
  int *piVar15;
  uint *puVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  
  iVar3 = b->wds;
  p_Var14 = b;
  if (a->wds == iVar3) {
    pUVar4 = a->x + iVar3;
    pUVar12 = b->x + iVar3;
    do {
      pUVar4 = pUVar4 + -1;
      pUVar12 = pUVar12 + -1;
      if (*pUVar4 != *pUVar12) {
        iVar19 = 0;
        if (*pUVar12 <= *pUVar4) goto LAB_1400076bf;
        goto LAB_1400077e3;
      }
    } while (a->x < pUVar4);
    p_Var5 = __Balloc_D2A(0);
    if (p_Var5 != (__Bigint *)0x0) {
      p_Var5->wds = 1;
      p_Var5->x[0] = 0;
      return p_Var5;
    }
  }
  else {
    iVar19 = 0;
    if (a->wds - iVar3 < 0) {
LAB_1400077e3:
      iVar19 = 1;
      p_Var14 = a;
      a = b;
    }
LAB_1400076bf:
    p_Var5 = __Balloc_D2A(a->k);
    if (p_Var5 != (__Bigint *)0x0) {
      p_Var5->sign = iVar19;
      uVar20 = a->wds;
      uVar6 = (ulonglong)(int)uVar20;
      uVar13 = 0;
      pUVar12 = a->x + uVar6;
      pUVar4 = p_Var14->x + p_Var14->wds;
      lVar10 = 0x18;
      do {
        lVar7 = (*(uint *)((longlong)a->x + lVar10 + -0x18) - uVar13) -
                (ulonglong)*(uint *)((longlong)p_Var14->x + lVar10 + -0x18);
        iVar3 = (int)lVar7;
        *(int *)((longlong)p_Var5->x + lVar10 + -0x18) = iVar3;
        lVar17 = lVar10 + -0x14;
        uVar13 = (ulonglong)((uint)((ulonglong)lVar7 >> 0x20) & 1);
        lVar10 = lVar10 + 4;
      } while ((undefined1 *)((longlong)p_Var14->x + lVar17) < pUVar4);
      puVar1 = (undefined1 *)((longlong)p_Var14->x + 1);
      uVar8 = (longlong)pUVar4 + (-0x19 - (longlong)p_Var14);
      uVar9 = uVar8 & 0xfffffffffffffffc;
      if (pUVar4 < puVar1) {
        uVar9 = 0;
      }
      lVar17 = (uVar8 & 0xfffffffffffffffc) + 4;
      lVar10 = (longlong)p_Var5->x + uVar9;
      if (pUVar4 < puVar1) {
        lVar17 = 4;
      }
      puVar16 = (uint *)((longlong)a->x + lVar17);
      piVar18 = (int *)((longlong)p_Var5->x + lVar17);
      puVar11 = puVar16;
      piVar15 = piVar18;
      if (puVar16 < pUVar12) {
        do {
          uVar2 = *puVar11;
          puVar11 = puVar11 + 1;
          iVar3 = (int)(uVar2 - uVar13);
          *piVar15 = iVar3;
          uVar13 = (ulonglong)((uint)(uVar2 - uVar13 >> 0x20) & 1);
          piVar15 = piVar15 + 1;
        } while (puVar11 < pUVar12);
        lVar10 = (longlong)piVar18 +
                 ((longlong)pUVar12 + (-1 - (longlong)puVar16) & 0xfffffffffffffffcU);
      }
      while (iVar3 == 0) {
        piVar15 = (int *)(lVar10 + -4);
        lVar10 = lVar10 + -4;
        uVar20 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar20;
        iVar3 = *piVar15;
      }
      p_Var5->wds = uVar20;
    }
  }
  return p_Var5;
}



// WARNING: Unknown calling convention

double __b2d_D2A(__Bigint *a,int *e)

{
  ULong *pUVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar2 = a->wds;
  pUVar1 = a->x;
  uVar6 = pUVar1[(longlong)iVar2 + -1];
  uVar3 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  uVar3 = uVar3 ^ 0x1f;
  *e = 0x20 - uVar3;
  if (10 < (int)uVar3) {
    iVar4 = uVar3 - 0xb;
    bVar5 = (byte)iVar4;
    if (pUVar1 < pUVar1 + (longlong)iVar2 + -1) {
      uVar3 = pUVar1[(longlong)iVar2 + -2];
      uVar7 = (ulonglong)uVar3;
      if (iVar4 != 0) {
        uVar6 = uVar6 << (bVar5 & 0x1f) | uVar3 >> (0x20 - bVar5 & 0x1f);
        uVar3 = uVar3 << (bVar5 & 0x1f);
        uVar7 = (ulonglong)uVar3;
        if (pUVar1 < pUVar1 + (longlong)iVar2 + -2) {
          return (double)(CONCAT44(uVar6,uVar3 | pUVar1[(longlong)iVar2 + -3] >>
                                                 (0x20 - bVar5 & 0x1f)) | 0x3ff0000000000000);
        }
      }
    }
    else {
      uVar7 = 0;
      if (iVar4 != 0) {
        return (double)((ulonglong)(uVar6 << (bVar5 & 0x1f) | 0x3ff00000) << 0x20);
      }
    }
    return (double)((ulonglong)(uVar6 | 0x3ff00000) << 0x20 | uVar7);
  }
  uVar8 = 0;
  bVar5 = 0xb - (char)uVar3;
  if (pUVar1 < pUVar1 + (longlong)iVar2 + -1) {
    uVar8 = pUVar1[(longlong)iVar2 + -2] >> (bVar5 & 0x1f);
  }
  return (double)(CONCAT44(uVar6 >> (bVar5 & 0x1f),uVar6 << ((char)uVar3 + 0x15U & 0x1f) | uVar8) |
                 0x3ff0000000000000);
}



// WARNING: Unknown calling convention

__Bigint * __d2b_D2A(double dd,int *e,int *bits)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  __Bigint *p_Var6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  p_Var6 = __Balloc_D2A(1);
  if (p_Var6 != (__Bigint *)0x0) {
    uVar8 = (uint)((ulonglong)dd >> 0x20);
    uVar9 = uVar8 & 0xfffff;
    uVar8 = uVar8 >> 0x14 & 0x7ff;
    if (uVar8 != 0) {
      uVar9 = uVar9 | 0x100000;
    }
    uVar4 = SUB84(dd,0);
    if (uVar4 == 0) {
      iVar5 = 1;
      iVar2 = 0;
      for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        iVar2 = iVar2 + 1;
      }
      p_Var6->wds = 1;
      iVar1 = iVar2 + 0x20;
      p_Var6->x[0] = uVar9 >> ((byte)iVar2 & 0x1f);
    }
    else {
      iVar1 = 0;
      for (uVar3 = uVar4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        iVar1 = iVar1 + 1;
      }
      bVar7 = (byte)iVar1;
      uVar4 = uVar4 >> (bVar7 & 0x1f);
      if (iVar1 != 0) {
        uVar4 = uVar4 | uVar9 << (0x20 - bVar7 & 0x1f);
        uVar9 = uVar9 >> (bVar7 & 0x1f);
      }
      p_Var6->x[0] = uVar4;
      iVar5 = 2 - (uint)(uVar9 == 0);
      *(uint *)&p_Var6->field_0x1c = uVar9;
      p_Var6->wds = iVar5;
    }
    if (uVar8 != 0) {
      *e = (uVar8 - 0x433) + iVar1;
      *bits = 0x35 - iVar1;
      return p_Var6;
    }
    uVar9 = 0x1f;
    if (p_Var6->x[(longlong)iVar5 + -1] != 0) {
      for (; p_Var6->x[(longlong)iVar5 + -1] >> uVar9 == 0; uVar9 = uVar9 - 1) {
      }
    }
    *e = iVar1 + -0x432;
    *bits = iVar5 * 0x20 - (uVar9 ^ 0x1f);
  }
  return p_Var6;
}



// WARNING: Unknown calling convention

char * __strcp_D2A(char *a,char *b)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = b + 1;
  cVar1 = *b;
  *a = cVar1;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    a = a + 1;
    pcVar2 = pcVar2 + 1;
    *a = cVar1;
  }
  return a;
}



size_t __cdecl strnlen(char *_Str,size_t _MaxCount)

{
  char *pcVar1;
  size_t sVar2;
  
  sVar2 = 0;
  pcVar1 = _Str;
  if (_MaxCount != 0) {
    do {
      if (*pcVar1 == '\0') {
        return sVar2;
      }
      pcVar1 = pcVar1 + 1;
      sVar2 = (longlong)pcVar1 - (longlong)_Str;
    } while (sVar2 < _MaxCount);
  }
  return sVar2;
}



size_t __cdecl wcsnlen(wchar_t *_Src,size_t _MaxCount)

{
  size_t sVar1;
  
  sVar1 = 0;
  if (_MaxCount != 0) {
    do {
      if (_Src[sVar1] == L'\0') {
        return sVar1;
      }
      sVar1 = sVar1 + 1;
    } while (_MaxCount != sVar1);
  }
  return _MaxCount;
}



// WARNING: Unknown calling convention

int * __p__fmode(void)

{
  return (int *)_fmode_exref;
}



// WARNING: Unknown calling convention

int * __p__commode(void)

{
  return (int *)_commode_exref;
}



void __cdecl _lock_file(FILE *_File)

{
  FILE *pFVar1;
  
  pFVar1 = __acrt_iob_func(0);
  if (pFVar1 <= _File) {
    pFVar1 = __acrt_iob_func(0x13);
    if (_File <= pFVar1) {
      pFVar1 = __acrt_iob_func(0);
      _lock((int)((longlong)_File - (longlong)pFVar1 >> 4) * -0x55555555 + 0x10);
      _File->_flag = _File->_flag | 0x8000;
      return;
    }
  }
                    // WARNING: Could not recover jumptable at 0x000140007b2c. Too many branches
                    // WARNING: Treating indirect jump as call
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



void __cdecl _unlock_file(FILE *_File)

{
  FILE *pFVar1;
  
  pFVar1 = __acrt_iob_func(0);
  if (pFVar1 <= _File) {
    pFVar1 = __acrt_iob_func(0x13);
    if (_File <= pFVar1) {
      _File->_flag = _File->_flag & 0xffff7fff;
      pFVar1 = __acrt_iob_func(0);
      _unlock((int)((longlong)_File - (longlong)pFVar1 >> 4) * -0x55555555 + 0x10);
      return;
    }
  }
                    // WARNING: Could not recover jumptable at 0x000140007b9c. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



_invalid_parameter_handler __cdecl mingw_get_invalid_parameter_handler(void)

{
  return (_invalid_parameter_handler)handler;
}



_invalid_parameter_handler __cdecl
mingw_set_invalid_parameter_handler(_invalid_parameter_handler _Handler)

{
  _invalid_parameter_handler p_Var1;
  
  p_Var1 = handler;
  LOCK();
  handler = (_invalid_parameter_handler)_Handler;
  UNLOCK();
  return (_invalid_parameter_handler)p_Var1;
}



// WARNING: Unknown calling convention

FILE * __acrt_iob_func(uint index)

{
  FILE *pFVar1;
  
  pFVar1 = __iob_func();
  return (FILE *)(pFVar1 + index);
}



// WARNING: Unknown calling convention

int __wcrtomb_cp(char *dst,wchar_t wc,uint cp,uint mb_max)

{
  int iVar1;
  int *piVar2;
  wchar_t local_res10 [12];
  int invalid_char;
  
  local_res10[0] = wc;
  if (cp == 0) {
    if (0xff < (ushort)wc) {
LAB_140007c84:
      piVar2 = _errno();
      *piVar2 = 0x2a;
      return -1;
    }
    *dst = (char)wc;
    iVar1 = 1;
  }
  else {
    invalid_char = 0;
    iVar1 = WideCharToMultiByte(cp,0,local_res10,1,dst,mb_max,(LPCSTR)0x0,&invalid_char);
    if ((iVar1 == 0) || (invalid_char != 0)) goto LAB_140007c84;
  }
  return iVar1;
}



size_t __cdecl wcrtomb(char *_Dest,wchar_t _Source,mbstate_t *_State)

{
  uint mb_max;
  UINT cp;
  int iVar1;
  char byte_bucket [5];
  
  if (_Dest == (char *)0x0) {
    _Dest = byte_bucket;
  }
  mb_max = ___mb_cur_max_func();
  cp = ___lc_codepage_func();
  iVar1 = __wcrtomb_cp(_Dest,_Source,cp,mb_max);
  return (longlong)iVar1;
}



size_t __cdecl wcsrtombs(char *_Dest,wchar_t **_PSource,size_t _Count,mbstate_t *_State)

{
  UINT cp;
  uint mb_max;
  int iVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  char byte_bucket [5];
  
  sVar3 = 0;
  cp = ___lc_codepage_func();
  mb_max = ___mb_cur_max_func();
  pwVar2 = *_PSource;
  if (pwVar2 != (wchar_t *)0x0) {
    if (_Dest == (char *)0x0) {
      while (iVar1 = __wcrtomb_cp(byte_bucket,*pwVar2,cp,mb_max), 0 < iVar1) {
        sVar3 = sVar3 + (longlong)iVar1;
        if (byte_bucket[iVar1 + -1] == '\0') {
          return sVar3 - 1;
        }
        pwVar2 = pwVar2 + 1;
      }
LAB_140007d68:
      sVar3 = 0xffffffffffffffff;
    }
    else {
      if (_Count != 0) {
        do {
          iVar1 = __wcrtomb_cp(_Dest,*pwVar2,cp,mb_max);
          if (iVar1 < 1) goto LAB_140007d68;
          _Dest = _Dest + iVar1;
          sVar3 = sVar3 + (longlong)iVar1;
          if (_Dest[-1] == '\0') {
            *_PSource = (wchar_t *)0x0;
            return sVar3 - 1;
          }
          pwVar2 = pwVar2 + 1;
        } while (sVar3 < _Count);
      }
      *_PSource = pwVar2;
    }
  }
  return sVar3;
}



// WARNING: Unknown calling convention

int __mbrtowc_cp(wchar_t *pwc,char *s,size_t n,mbstate_t *ps,uint cp,uint mb_max)

{
  BYTE TestChar;
  BOOL BVar1;
  int iVar2;
  int *piVar3;
  anon_union_4_2_626584ff shift_state;
  
  if (s == (char *)0x0) {
    return 0;
  }
  if (n == 0) {
    return -2;
  }
  shift_state.val = *ps;
  TestChar = *s;
  *ps = 0;
  if (TestChar == '\0') {
    *pwc = L'\0';
    return 0;
  }
  if (mb_max < 2) {
LAB_140007ea8:
    if (cp == 0) {
      *pwc = (ushort)(byte)*s;
      return 1;
    }
    iVar2 = MultiByteToWideChar(cp,8,s,1,pwc,1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  else {
    if (shift_state.mbcs[0] == '\0') {
      BVar1 = IsDBCSLeadByteEx(cp,TestChar);
      if (BVar1 == 0) goto LAB_140007ea8;
      if (n == 1) {
        *(char *)ps = *s;
        return -2;
      }
    }
    else {
      shift_state.val._2_2_ = (undefined2)((uint)shift_state >> 0x10);
      shift_state.mbcs[1] = TestChar;
      s = (char *)&shift_state;
    }
    iVar2 = MultiByteToWideChar(cp,8,s,2,pwc,1);
    if (iVar2 != 0) {
      return 2;
    }
  }
  piVar3 = _errno();
  *piVar3 = 0x2a;
  return -1;
}



size_t __cdecl mbrtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SizeInBytes,mbstate_t *_State)

{
  uint mb_max;
  UINT cp;
  int iVar1;
  mbstate_t *ps;
  wchar_t byte_bucket;
  
  byte_bucket = L'\0';
  if (_DstCh == (wchar_t *)0x0) {
    _DstCh = &byte_bucket;
  }
  mb_max = ___mb_cur_max_func();
  cp = ___lc_codepage_func();
  ps = &mbrtowc::internal_mbstate;
  if (_State != (mbstate_t *)0x0) {
    ps = _State;
  }
  iVar1 = __mbrtowc_cp(_DstCh,_SrcCh,_SizeInBytes,ps,cp,mb_max);
  return (longlong)iVar1;
}



size_t __cdecl mbsrtowcs(wchar_t *_Dest,char **_PSrc,size_t _Count,mbstate_t *_State)

{
  UINT cp;
  uint mb_max;
  int iVar1;
  char *s;
  ulonglong uVar2;
  wchar_t byte_bucket;
  
  if (_State == (mbstate_t *)0x0) {
    _State = &mbsrtowcs::internal_mbstate;
  }
  cp = ___lc_codepage_func();
  mb_max = ___mb_cur_max_func();
  if ((_PSrc == (char **)0x0) || (s = *_PSrc, s == (char *)0x0)) {
    uVar2 = 0;
  }
  else if (_Dest == (wchar_t *)0x0) {
    uVar2 = 0;
    byte_bucket = L'\0';
    while (iVar1 = __mbrtowc_cp(&byte_bucket,s + uVar2,(ulonglong)mb_max,_State,cp,mb_max),
          0 < iVar1) {
      s = *_PSrc;
      uVar2 = uVar2 + (longlong)iVar1;
    }
  }
  else {
    uVar2 = 0;
    if (_Count != 0) {
      do {
        iVar1 = __mbrtowc_cp(_Dest,s,_Count - uVar2,_State,cp,mb_max);
        if (iVar1 < 1) {
          if (_Count <= uVar2) {
            return uVar2;
          }
          if (iVar1 != 0) {
            return uVar2;
          }
          *_PSrc = (char *)0x0;
          return uVar2;
        }
        _Dest = _Dest + 1;
        uVar2 = uVar2 + (longlong)iVar1;
        s = *_PSrc + iVar1;
        *_PSrc = s;
      } while (uVar2 < _Count);
    }
  }
  return uVar2;
}



size_t __cdecl mbrlen(char *_Ch,size_t _SizeInBytes,mbstate_t *_State)

{
  uint mb_max;
  UINT cp;
  int iVar1;
  wchar_t byte_bucket;
  
  byte_bucket = L'\0';
  mb_max = ___mb_cur_max_func();
  cp = ___lc_codepage_func();
  if (_State == (mbstate_t *)0x0) {
    _State = &mbrlen::s_mbstate;
  }
  iVar1 = __mbrtowc_cp(&byte_bucket,_Ch,_SizeInBytes,_State,cp,mb_max);
  return (longlong)iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

EXCEPTION_DISPOSITION
__C_specific_handler
          (_EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,_CONTEXT *ContextRecord,
          _DISPATCHER_CONTEXT *DispatcherContext)

{
  EXCEPTION_DISPOSITION EVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008150. Too many branches
                    // WARNING: Treating indirect jump as call
  EVar1 = __C_specific_handler(ExceptionRecord,EstablisherFrame,ContextRecord,DispatcherContext);
  return EVar1;
}



UINT __cdecl ___lc_codepage_func(void)

{
  UINT UVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008158. Too many branches
                    // WARNING: Treating indirect jump as call
  UVar1 = ___lc_codepage_func();
  return UVar1;
}



int __cdecl ___mb_cur_max_func(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008160. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = ___mb_cur_max_func();
  return iVar1;
}



void __getmainargs(void)

{
                    // WARNING: Could not recover jumptable at 0x000140008168. Too many branches
                    // WARNING: Treating indirect jump as call
  __getmainargs();
  return;
}



FILE * __cdecl __iob_func(void)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008170. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = __iob_func();
  return pFVar1;
}



void __cdecl __set_app_type(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000140008178. Too many branches
                    // WARNING: Treating indirect jump as call
  __set_app_type(param_1);
  return;
}



void __setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x000140008180. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000140008188. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140008190. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



int * __cdecl _errno(void)

{
  int *piVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008198. Too many branches
                    // WARNING: Treating indirect jump as call
  piVar1 = _errno();
  return piVar1;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400081a0. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x0001400081a8. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
                    // WARNING: Could not recover jumptable at 0x0001400081b0. Too many branches
                    // WARNING: Treating indirect jump as call
  p_Var1 = _onexit(_Func);
  return p_Var1;
}



void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x0001400081b8. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



void __cdecl abort(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400081c0. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  abort();
  return;
}



void * __cdecl calloc(size_t _Count,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400081c8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = calloc(_Count,_Size);
  return pvVar1;
}



void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x0001400081d0. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  exit(_Code);
  return;
}



int __cdecl fprintf(FILE *_File,char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400081d8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fprintf(_File,_Format);
  return iVar1;
}



int __cdecl fputc(int _Ch,FILE *_File)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400081e0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fputc(_Ch,_File);
  return iVar1;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x0001400081e8. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



size_t __cdecl fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400081f0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = fwrite(_Str,_Size,_Count,_File);
  return sVar1;
}



lconv * __cdecl localeconv(void)

{
  lconv *plVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400081f8. Too many branches
                    // WARNING: Treating indirect jump as call
  plVar1 = localeconv();
  return plVar1;
}



void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008200. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc(_Size);
  return pvVar1;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008208. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008210. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void signal(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000140008218. Too many branches
                    // WARNING: Treating indirect jump as call
  signal(param_1);
  return;
}



char * __cdecl strerror(int param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008220. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strerror(param_1);
  return pcVar1;
}



size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008228. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen(_Str);
  return sVar1;
}



int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008230. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = strncmp(_Str1,_Str2,_MaxCount);
  return iVar1;
}



int __cdecl vfprintf(FILE *_File,char *_Format,va_list _ArgList)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008238. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = vfprintf(_File,_Format,_ArgList);
  return iVar1;
}



size_t __cdecl wcslen(wchar_t *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008240. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = wcslen(_Str);
  return sVar1;
}



int __stdcall
WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
                   LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,
                   LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008250. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}



SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008258. Too many branches
                    // WARNING: Treating indirect jump as call
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}



BOOL __stdcall
VirtualProtect(LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008260. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = VirtualProtect(lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}



LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008268. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}



void __stdcall Sleep(DWORD dwMilliseconds)

{
                    // WARNING: Could not recover jumptable at 0x000140008270. Too many branches
                    // WARNING: Treating indirect jump as call
  Sleep(dwMilliseconds);
  return;
}



LPTOP_LEVEL_EXCEPTION_FILTER __stdcall
SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008278. Too many branches
                    // WARNING: Treating indirect jump as call
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}



int __stdcall
MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                   LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008280. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}



void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x000140008288. Too many branches
                    // WARNING: Treating indirect jump as call
  LeaveCriticalSection(lpCriticalSection);
  return;
}



BOOL __stdcall IsDBCSLeadByteEx(UINT CodePage,BYTE TestChar)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140008290. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsDBCSLeadByteEx(CodePage,TestChar);
  return BVar1;
}



void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x000140008298. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeCriticalSection(lpCriticalSection);
  return;
}



DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001400082a0. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetLastError();
  return DVar1;
}



void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x0001400082a8. Too many branches
                    // WARNING: Treating indirect jump as call
  EnterCriticalSection(lpCriticalSection);
  return;
}



void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    // WARNING: Could not recover jumptable at 0x0001400082b0. Too many branches
                    // WARNING: Treating indirect jump as call
  DeleteCriticalSection(lpCriticalSection);
  return;
}



