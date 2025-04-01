void __mingw_invalidParameterHandler(short unsigned int const* expression, short unsigned int const* function, short unsigned int const* file, unsigned int line, long long unsigned int pReserved) __pure
{
    return;
}

int pre_c_init()
{
    __mingw_initltsdrot_force = 1;
    __mingw_initltsdyn_force = 1;
    __mingw_initltssuo_force = 1;
    int rcx;
    rcx = false;
    managedapp = rcx;
    
    if (!__mingw_app_type)
        __set_app_type(_crt_console_app);
    else
        __set_app_type(_crt_gui_app);
    
    int32_t* rax_1 = __p__fmode();
    *rax_1 = _fmode;
    int32_t* rax_2 = __p__commode();
    *rax_2 = _commode;
    
    if (_MINGW_INSTALL_DEBUG_MATHERR != 1)
        return 0;
    
    __mingw_setusermatherr(_matherr);
    return 0;
}

uint64_t pre_cpp_init()
{
    startinfo.newmode = _newmode;
    return __getmainargs(&argc, &argv, &envp, _dowildcard, &startinfo);
}

int __tmainCRTStartup()
{
    TEB* gsbase;
    void* StackBase = gsbase->NtTib.Self->NtTib.StackBase;
    
    while (true)
    {
        int64_t _.bss_1 = 0;
        
        if (0 == _.bss)
            _.bss = StackBase;
        else
            _.bss_1 = _.bss;
        
        int32_t rdi;
        
        if (_.bss_1)
        {
            if (StackBase != _.bss_1)
            {
                Sleep(0x3e8);
                continue;
            }
            
            rdi = 1;
            
            if (__native_startup_state != 1)
                goto label_1400011e5;
            
            goto label_14000133c;
        }
        else
        {
            rdi = 0;
            
            if (__native_startup_state != 1)
            {
                label_1400011e5:
                
                if (!__native_startup_state)
                {
                    __native_startup_state = 1;
                    _initterm(&__xi_a, &__xi_z);
                }
                else
                    has_cctor = 1;
                
                if (__native_startup_state == 1)
                    goto label_14000135a;
                
                goto label_140001200;
            }
            
            label_14000133c:
            _amsg_exit(0x1f);
            
            if (__native_startup_state != 1)
            {
                label_140001200:
                
                if (rdi)
                    break;
            }
            else
            {
                label_14000135a:
                _initterm(&__xc_a, &__xc_z);
                __native_startup_state = 2;
                
                if (rdi)
                    break;
            }
        }
        _.bss;
        _.bss = 0;
        break;
    }
    
    __dyn_tls_init(nullptr, 2, nullptr);
    _pei386_runtime_relocator();
    __mingw_oldexcpt_handler = SetUnhandledExceptionFilter(_gnu_exception_handler);
    mingw_set_invalid_parameter_handler(__mingw_invalidParameterHandler);
    int64_t argc_1 = argc;
    int64_t* rax_5 = malloc((argc_1 + 1) << 3);
    char** argv_1 = argv;
    char** rdi_1 = rax_5;
    
    if (argc_1 > 0)
    {
        int64_t rbx_1 = 0;
        
        do
        {
            uint64_t _Size = strlen(argv_1[rbx_1]) + 1;
            int64_t rax_7 = malloc(_Size);
            rdi_1[rbx_1] = rax_7;
            int64_t rdx_1 = argv_1[rbx_1];
            rbx_1 += 1;
            memcpy(rax_7, rdx_1, _Size);
        } while (argc_1 != rbx_1);
        
        rax_5 = &rdi_1[argc_1 + 1 - 1];
    }
    
    *rax_5 = 0;
    argv = rdi_1;
    __main();
    argc;
    *__initenv = envp;
    argv;
    main();
    int managedapp_1 = managedapp;
    mainret = 0;
    
    if (!managedapp_1)
    {
        exit(0);
        /* no return */
    }
    
    if (has_cctor)
        return 0;
    
    _cexit();
    return mainret;
}

int WinMainCRTStartup()
{
    __mingw_app_type = 1;
    return __tmainCRTStartup();
}

int mainCRTStartup()
{
    __mingw_app_type = 0;
    return __tmainCRTStartup();
}

int atexit(void (* func)())
{
    _onexit_t_1 rax = _onexit(func);
    return rax - rax;
}

int64_t __gcc_register_frame()
{
    /* tailcall */
    return atexit(__gcc_deregister_frame);
}

void __gcc_deregister_frame() __pure
{
    return;
}

int64_t printf(char* arg1, int64_t arg2)
{
    argv = arg2;
    int64_t r8;
    arg_18 = r8;
    int64_t r9;
    arg_20 = r9;
    int64_t* var_20 = &argv;
    return __mingw_vfprintf(__imp___acrt_iob_func(), arg1, &argv);
}

int64_t it_crowd()
{
    puts("Are you feeling stressed, Jen?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Well, I guess you're not.\n");
    return puts("Well done, Jen.\n");
}

uint64_t some_calculation(int64_t arg1) __pure
{
    int32_t rdx = arg1;
    int32_t r8 = arg1 * arg1 + (arg1 << 1);
    int32_t rcx_3 = r8 * r8 + rdx + r8;
    int32_t r9_3 = rcx_3 * rcx_3 + rdx + rcx_3;
    int32_t r10_3 = r9_3 * r9_3 + rdx + r9_3;
    int32_t r11_3 = r10_3 * r10_3 + rdx + r10_3;
    int32_t r8_4 = r11_3 * r11_3 + rdx + r11_3;
    return r8_4 * r8_4 + rdx + r8_4;
}

int64_t main()
{
    __main();
    it_crowd();
    printf("Some calculation returned %d.\n", 0x937c862f);
    return 0;
}

void __do_global_dtors()
{
    void (* i)() = **&p;
    
    while (i)
    {
        i();
        void (** p_1)() = p;
        i = p_1[1];
        p = &p_1[1];
    }
}

int64_t __do_global_ctors()
{
    int32_t rax_4 = 0;
    int32_t rcx;
    uint64_t r8_2;
    
    do
    {
        r8_2 = rax_4 + 1;
        rcx = rax_4;
        rax_4 = r8_2;
    } while (*(&__CTOR_LIST__ + (r8_2 << 3)));
    
    if (rcx)
    {
        uint64_t rax_1 = rcx;
        void* i = &__CTOR_LIST__ + (rax_1 << 3);
        
        do
        {
            (*i)();
            i -= 8;
        } while (i != ((rax_1 - (rcx - 1)) << 3) + 0x140007d28);
    }
    
    /* tailcall */
    return atexit(__do_global_dtors);
}

int __main()
{
    int initialized_1 = initialized;
    
    if (initialized_1)
        return initialized_1;
    
    initialized = 1;
    /* tailcall */
    return __do_global_ctors();
}

int _setargv() __pure
{
    return 0;
}

int __dyn_tls_dtor(void* hDllHandle, long unsigned int dwReason, void* lpreserved)
{
    if (dwReason != 3 && dwReason)
        return 1;
    
    __mingw_TLScallback(hDllHandle, dwReason, lpreserved);
    return 1;
}

int __dyn_tls_init(void* hDllHandle, long unsigned int dwReason, void* lpreserved)
{
    if (_CRT_MT != 2)
        _CRT_MT = 2;
    
    if (dwReason != 2 && dwReason == 1)
        __mingw_TLScallback(hDllHandle, dwReason, lpreserved);
    
    return 1;
}

int __tlregdtor(void (* func)()) __pure
{
    return 0;
}

int _matherr(struct _exception* pexcept)
{
    void* const rbx;
    
    if (pexcept->type > 6)
        rbx = "Unknown error";
    else
        switch (pexcept->type)
        {
            case 0:
            {
                rbx = "Unknown error";
                break;
            }
            case 1:
            {
                rbx = "Argument domain error (DOMAIN)";
                break;
            }
            case 2:
            {
                rbx = "Argument singularity (SIGN)";
                break;
            }
            case 3:
            {
                rbx = "Overflow range error (OVERFLOW)";
                break;
            }
            case 4:
            {
                rbx = "The result is too small to be re…";
                break;
            }
            case 5:
            {
                rbx = "Total loss of significance (TLOS…";
                break;
            }
            case 6:
            {
                rbx = "Partial loss of significance (PL…";
                break;
            }
        }
    
    fprintf(__acrt_iob_func(2), "_matherr(): %s in %s(%g, %g)  (r…", rbx, pexcept->name, pexcept->arg1, pexcept->arg2, pexcept->retval);
    return 0;
}

void _fpreset() __pure
{
    return;
}

void __report_error(char const* msg, ...) __noreturn
{
    int64_t _ArgList_1;
    _ArgList = _ArgList_1;
    int64_t r8;
    arg_18 = r8;
    int64_t r9;
    arg_20 = r9;
    fwrite("Mingw-w64 runtime failure:\n", 1, 0x1b, __acrt_iob_func(2));
    vfprintf(__acrt_iob_func(2), msg, &_ArgList);
    abort();
    /* no return */
}

unsigned char** mark_section_writable(void* addr)
{
    struct _MEMORY_BASIC_INFORMATION b;
    int64_t r12;
    b.Type = r12;
    int64_t rsi;
    b.State = rsi;
    b.Protect = *rsi[4];
    int64_t rbx;
    b.RegionSize = rbx;
    int64_t maxSections_1 = maxSections;
    unsigned char** result;
    
    if (maxSections_1 <= 0)
        maxSections_1 = 0;
    else
    {
        int32_t i = 0;
        result = &the_secs->sec_start;
        
        do
        {
            unsigned char* sec_start = ADJ(result)->sec_start;
            
            if (sec_start <= addr && addr < &sec_start[ADJ(result)->hash->Misc])
                goto label_140001a3a;
            
            i += 1;
            result = &result[5];
        } while (i != maxSections_1);
    }
    
    struct Section_Header* rax_2 = __mingw_GetSectionForAddress(addr);
    
    if (!rax_2)
    {
        __report_error("Address %p has no image-section", addr);
        /* no return */
    }
    
    int64_t rbx_2 = maxSections_1 * 0x28;
    void* rax_4 = the_secs + rbx_2;
    *(rax_4 + 0x20) = rax_2;
    *rax_4 = 0;
    void* lpAddress = &_GetPEImageBase()->e_magic[rax_2->virtualAddress];
    *(&the_secs->sec_start + rbx_2) = lpAddress;
    int64_t lpBuffer;
    
    if (!VirtualQuery(lpAddress, &lpBuffer, 0x30))
    {
        __report_error("  VirtualQuery failed for %d byt…", rax_2->virtualSize, *(&the_secs->sec_start + rbx_2));
        /* no return */
    }
    
    result = *b.AllocationBase[4];
    
    if (&result[-8] & 0xffffffbf && (result - 4) & 0xfffffffb)
    {
        int64_t lpAddress_1 = lpBuffer;
        uint64_t BaseAddress = b.BaseAddress;
        enum PAGE_PROTECTION_FLAGS flNewProtect = PAGE_READWRITE;
        
        if (result != 2)
            flNewProtect = PAGE_EXECUTE_READWRITE;
        
        void* lpflOldProtect = rbx_2 + the_secs;
        *(lpflOldProtect + 8) = lpAddress_1;
        *(lpflOldProtect + 0x10) = BaseAddress;
        result = VirtualProtect(lpAddress_1, BaseAddress, flNewProtect, lpflOldProtect);
        
        if (!result)
        {
            __report_error("  VirtualProtect failed with cod…", GetLastError());
            /* no return */
        }
    }
    
    maxSections += 1;
    label_140001a3a:
    int64_t rsi_2;
    rsi_2 = b.State;
    *rsi_2[4] = b.Protect;
    return result;
}

void _pei386_runtime_relocator()
{
    if (!was_init)
    {
        was_init = 1;
        void* rax_5 = (__mingw_GetSectionCount() * 0x28 + 0xf) & 0xfffffffffffffff0;
        _.text(rax_5);
        maxSections = 0;
        void var_88;
        the_secs = &var_88 - rax_5 + 0x30;
    }
}

int (*)() __mingw_raise_matherr(int typ, char const* name, double a1, double a2, double rslt)
{
    int (* stUserMathErr_1)() = stUserMathErr;
    
    if (!stUserMathErr_1)
        return stUserMathErr_1;
    
    int typ_1 = typ;
    char const* name_1 = name;
    double a1_1 = a1;
    double a2_1 = a2;
    double rslt_1 = rslt;
    return stUserMathErr_1();
}

int64_t __mingw_setusermatherr(int (* f)())
{
    stUserMathErr = f;
    /* tailcall */
    return __setusermatherr(f);
}

long int _gnu_exception_handler(struct _EXCEPTION_POINTERS* exception_data)
{
    EXCEPTION_RECORD* ExceptionRecord = exception_data->ExceptionRecord;
    uint32_t ExceptionCode = ExceptionRecord->ExceptionCode;
    
    if ((ExceptionCode & 0x20ffffff) == 0x20474343 && !(ExceptionRecord->ExceptionFlags & 1))
        return 0xffffffff;
    
    if (ExceptionCode <= 0xc0000096)
    {
        if (ExceptionCode > 0xc000008b)
        {
            uint64_t rax = ExceptionCode + 0x3fffff73;
            
            if (rax > 9)
                return 0xffffffff;
            
            _crt_signal_t rax_8;
            
            switch (rax)
            {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                {
                    rax_8 = signal(8, nullptr);
                    
                    if (rax_8 == 1)
                    {
                        signal(8, 1);
                        return 0xffffffff;
                    }
                    
                    label_140001f86:
                    
                    if (rax_8)
                    {
                        rax_8(8);
                        return 0xffffffff;
                    }
                    break;
                }
                case 5:
                case 8:
                {
                    return 0xffffffff;
                    break;
                }
                case 7:
                {
                    rax_8 = signal(8, nullptr);
                    
                    if (rax_8 != 1)
                        goto label_140001f86;
                    
                    signal(8, 1);
                    return 0xffffffff;
                    break;
                }
                case 9:
                {
                    label_140001f0a:
                    _crt_signal_t rax_4 = signal(4, nullptr);
                    
                    if (rax_4 == 1)
                    {
                        signal(4, 1);
                        return 0xffffffff;
                    }
                    
                    if (rax_4)
                    {
                        rax_4(4);
                        return 0xffffffff;
                    }
                    break;
                }
            }
        }
        else if (ExceptionCode == 0xc0000005)
        {
            _crt_signal_t rax_11 = signal(0xb, nullptr);
            
            if (rax_11 == 1)
            {
                signal(0xb, 1);
                return 0xffffffff;
            }
            
            if (rax_11)
            {
                rax_11(0xb);
                return 0xffffffff;
            }
        }
        else
        {
            if (ExceptionCode == 0xc0000008)
                return 0xffffffff;
            
            if (ExceptionCode == 0xc000001d)
                goto label_140001f0a;
            
            if (ExceptionCode == 0x80000002)
                return 0xffffffff;
        }
    }
    
    long int (* __mingw_oldexcpt_handler_1)() = __mingw_oldexcpt_handler;
    
    if (!__mingw_oldexcpt_handler_1)
        return 0;
    
    /* tailcall */
    return __mingw_oldexcpt_handler_1();
}

void __mingwthr_run_key_dtors()
{
    EnterCriticalSection(&__mingwthr_cs);
    
    for (struct __mingwthr_key* i = key_dtor_list; i; i = i->next)
    {
        int64_t rax_1 = TlsGetValue(i->key);
        
        if (!GetLastError() && rax_1)
            i->dtor();
    }
    
    /* tailcall */
    return LeaveCriticalSection(&__mingwthr_cs);
}

int volatile ___w64_mingwthr_add_key_dtor(long unsigned int key, void (* dtor)())
{
    int volatile __mingwthr_cs_init_1 = __mingwthr_cs_init;
    
    if (!__mingwthr_cs_init_1)
        return __mingwthr_cs_init_1;
    
    long unsigned int* rax = calloc(1, 0x18);
    
    if (!rax)
        return -1;
    
    *rax = key;
    *(rax + 8) = dtor;
    EnterCriticalSection(&__mingwthr_cs);
    struct __mingwthr_key* key_dtor_list_1 = key_dtor_list;
    key_dtor_list = rax;
    *(rax + 0x10) = key_dtor_list_1;
    LeaveCriticalSection(&__mingwthr_cs);
    return 0;
}

int ___w64_mingwthr_remove_key_dtor(long unsigned int key)
{
    if (!__mingwthr_cs_init)
        return 0;
    
    EnterCriticalSection(&__mingwthr_cs);
    struct __mingwthr_key* key_dtor_list_1 = key_dtor_list;
    
    if (key_dtor_list_1)
    {
        struct __mingwthr_key* key_dtor_list_2 = nullptr;
        
        while (true)
        {
            struct __mingwthr_key* next = key_dtor_list_1->next;
            
            if (key_dtor_list_1->key == key)
            {
                if (!key_dtor_list_2)
                    key_dtor_list = next;
                else
                    key_dtor_list_2->next = next;
                
                free(key_dtor_list_1);
                break;
            }
            
            key_dtor_list_2 = key_dtor_list_1;
            
            if (!next)
                break;
            
            key_dtor_list_1 = next;
        }
    }
    
    LeaveCriticalSection(&__mingwthr_cs);
    return 0;
}

int __mingw_TLScallback(void* hDllHandle, long unsigned int reason, void* reserved)
{
    if (reason == 2)
        return 1;
    
    if (reason > 2)
    {
        if (reason == 3 && __mingwthr_cs_init)
            __mingwthr_run_key_dtors();
    }
    else if (!reason)
    {
        if (__mingwthr_cs_init)
            __mingwthr_run_key_dtors();
        
        if (__mingwthr_cs_init == 1)
        {
            struct __mingwthr_key* i = key_dtor_list;
            
            while (i)
            {
                struct __mingwthr_key* i_1 = i;
                i = i->next;
                free(i_1);
            }
            
            key_dtor_list = nullptr;
            __mingwthr_cs_init = 0;
            DeleteCriticalSection(&__mingwthr_cs);
        }
    }
    else
    {
        if (!__mingwthr_cs_init)
            InitializeCriticalSection(&__mingwthr_cs);
        
        __mingwthr_cs_init = 1;
    }
    
    return 1;
}

int _ValidateImageBase(unsigned char* pImageBase)
{
    if (*pImageBase == 0x5a4d)
    {
        void* rcx = &pImageBase[*(pImageBase + 0x3c)];
        
        if (*rcx == 0x4550)
        {
            int32_t result;
            result = *(rcx + 0x18) == 0x20b;
            return result;
        }
    }
    
    return 0;
}

void* _FindPESection(unsigned char* pImageBase, long long unsigned int rva)
{
    void* rcx = &pImageBase[*(pImageBase + 0x3c)];
    void* result = rcx + *(rcx + 0x14) + 0x18;
    uint32_t rcx_1 = *(rcx + 6);
    
    if (rcx_1)
    {
        void* r9_1 = result + (rcx_1 - 1) * 0x28 + 0x28;
        
        do
        {
            uint64_t r8_1 = *(result + 0xc);
            
            if (r8_1 <= rva && r8_1 + *(result + 8) > rva)
                return result;
            
            result += 0x28;
        } while (result != r9_1);
    }
    
    return nullptr;
}

struct Section_Header* const _FindPESectionByName(char const* pName)
{
    if (strlen(pName) <= 8)
    {
        for (struct Section_Header* const _Str1 = &__section_headers; _Str1 != 0x140000480; _Str1 = &_Str1[1])
        {
            if (!strncmp(_Str1, pName, 8))
                return _Str1;
        }
    }
    
    return 0;
}

struct Section_Header* const __mingw_GetSectionForAddress(void* p)
{
    for (struct Section_Header* const i = &__section_headers; i != 0x140000480; i = &i[1])
    {
        uint64_t virtualAddress = i->virtualAddress;
        
        if (p - &__dos_header >= virtualAddress && p - &__dos_header < virtualAddress + i->virtualSize)
            return i;
    }
    
    return 0;
}

int __mingw_GetSectionCount() __pure
{
    return 0x13;
}

struct Section_Header* const _FindPESectionExec(long long unsigned int eNo)
{
    for (struct Section_Header* const i = &__section_headers; i != 0x140000480; i = &i[1])
    {
        if (*i->characteristics[3] & 0x20)
        {
            if (!eNo)
                return i;
            
            eNo -= 1;
        }
    }
    
    return 0;
}

struct DOS_Header* const _GetPEImageBase() __pure
{
    return &__dos_header;
}

uint32_t _IsNonwritableInCurrentImage(unsigned char* pTarget)
{
    for (struct Section_Header* const i = &__section_headers; i != 0x140000480; i = &i[1])
    {
        uint64_t virtualAddress = i->virtualAddress;
        
        if (pTarget - &__dos_header >= virtualAddress && pTarget - &__dos_header < virtualAddress + i->virtualSize)
            return ~i->characteristics >> 0x1f;
    }
    
    return 0;
}

void* __mingw_enum_import_library_names(int i)
{
    struct Section_Header* const i_1 = &__section_headers;
    
    do
    {
        uint64_t virtualAddress = i_1->virtualAddress;
        
        if (0xd000 >= virtualAddress && 0xd000 < virtualAddress + i_1->virtualSize)
        {
            void* rax_3 = &_.idata$2;
            
            while (*(rax_3 + 4) || *(rax_3 + 0xc))
            {
                if (i <= 0)
                    return &__dos_header.e_magic[*(rax_3 + 0xc)];
                
                i -= 1;
                rax_3 += 0x14;
            }
            
            break;
        }
        
        i_1 = &i_1[1];
    } while (0x140000480 != i_1);
    
    return 0;
}

int64_t _.text(int64_t arg1 @ rax)
{
    int64_t result = arg1;
    void* rcx = &arg_8;
    
    if (arg1 >= 0x1000)
    {
        do
        {
            rcx -= 0x1000;
            *rcx = *rcx;
            arg1 -= 0x1000;
        } while (arg1 > 0x1000);
    }
    
    void* rcx_1 = rcx - arg1;
    *rcx_1 = *rcx_1;
    return result;
}

int32_t __mingw_vfprintf(struct _iobuf* stream, char const* fmt, char* argv)
{
    _lock_file(stream);
    int32_t result = __mingw_pformat(0x6000, stream, 0, fmt, argv);
    _unlock_file(stream);
    return result;
}

char* __pformat_cvt(int mode, float128 val, int nd, int* dp, int* sign)
{
    int64_t* rdx;
    int64_t bits_1 = *rdx;
    int32_t rdx_1 = rdx[1];
    int64_t bits = bits_1;
    int32_t var_10 = rdx_1;
    int16_t r10 = rdx_1 & 0x7fff;
    int kindp;
    int rcx_1;
    int be;
    
    if (!r10)
    {
        uint32_t rdx_3 = bits_1 >> 0x20;
        
        if (!(bits_1 | rdx_3))
        {
            be = 0;
            kindp = 0;
            rcx_1 = rdx_1 & 0x8000;
        }
        else
        {
            if (rdx_3 < 0)
                goto label_140002772;
            
            be = -0x403d;
            kindp = 2;
            rcx_1 = rdx_1 & 0x8000;
        }
    }
    else if (r10 != 0x7fff)
    {
        label_140002772:
        be = r10 - 0x403e;
        kindp = 1;
        rcx_1 = rdx_1 & 0x8000;
    }
    else if (!((bits_1 >> 0x20 & 0x7fffffff) | bits_1))
    {
        kindp = 3;
        be = 0;
        rcx_1 = rdx_1 & 0x8000;
    }
    else
    {
        kindp = 4;
        be = 0;
        rcx_1 = 0;
    }
    
    *sign = rcx_1;
    void rve;
    return __gdtoa(&fpi, be, &bits, &kindp, mode, nd, dp, &rve);
}

int __pformat_putc(int c, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int16_t flags = stream->flags;
    int count;
    
    if (!(*flags[1] & 0x40))
        count = stream->count;
    
    if (*flags[1] & 0x40 || stream->quota > count)
    {
        void* dest = stream->dest;
        *flags[1] &= 0x20;
        
        if (*flags[1])
        {
            fputc(c, dest);
            int result = stream->count + 1;
            stream->count = result;
            return result;
        }
        
        *(dest + stream->count) = c;
        count = stream->count;
    }
    
    stream->count = count + 1;
    return count + 1;
}

int __pformat_wputchars(short unsigned int const* s, int count, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    char buf[0x10];
    int64_t rsi;
    buf[8] = rsi;
    int64_t rbx;
    buf[0] = rbx;
    int count_2 = count;
    short unsigned int const* s_1 = s;
    void ps;
    void var_48;
    wcrtomb(&var_48, 0, &ps);
    int precision = stream->precision;
    int precision_1 = precision;
    
    if (count_2 <= precision)
        precision_1 = count_2;
    
    int width = stream->width;
    
    if (precision >= 0)
        count_2 = precision_1;
    
    if (width > count_2)
    {
        int32_t rax_6 = width - count_2;
        stream->width = rax_6;
        
        if (*stream->flags[1] & 4)
        {
            if (count_2 > 0)
                goto label_1400028e0;
            
            stream->width = rax_6 - 1;
            goto label_140002980;
        }
        
        stream->width = rax_6 - 1;
        
        do
        {
            __pformat_putc(0x20, stream);
            width = stream->width;
            stream->width = width - 1;
        } while (width);
        
        goto label_1400028ce;
    }
    
    stream->width = 0xffffffff;
    label_1400028ce:
    
    if (count_2 <= 0)
        stream->width = 0xfffffffe;
    else
    {
        label_1400028e0:
        
        while (true)
        {
            short unsigned int const wc = *s_1;
            s_1 = &s_1[1];
            int32_t rax = wcrtomb(&var_48, wc, &ps);
            
            if (rax <= 0)
            {
                while (true)
                {
                    width = stream->width;
                    stream->width = width - 1;
                    
                    if (width <= 0)
                        break;
                    
                    label_140002980:
                    __pformat_putc(0x20, stream);
                }
                
                break;
            }
            
            void* rsi_1 = &var_48;
            
            while (true)
            {
                int16_t flags = stream->flags;
                rsi_1 += 1;
                int count_1;
                
                if (!(*flags[1] & 0x40))
                    count_1 = stream->count;
                
                if (*flags[1] & 0x40 || stream->quota > count_1)
                {
                    int32_t _Character = *(rsi_1 - 1);
                    void* dest = stream->dest;
                    *flags[1] &= 0x20;
                    
                    if (!*flags[1])
                    {
                        *(dest + stream->count) = _Character;
                        count_1 = stream->count;
                    }
                    else
                    {
                        fputc(_Character, dest);
                        stream->count += 1;
                        
                        if (rsi_1 == &var_48 + rax - 1 + 1)
                            break;
                        
                        continue;
                    }
                }
                
                stream->count = count_1 + 1;
                
                if (rsi_1 == &var_48 + rax - 1 + 1)
                    break;
            }
            
            int count_3 = count_2;
            count_2 -= 1;
            
            if (count_3 == 1)
            {
                width = stream->width;
                stream->width = width - 1;
                
                if (width > 0)
                    goto label_140002980;
                
                break;
            }
        }
    }
    
    buf[0];
    buf[8];
    return width;
}

int __pformat_putchars(char const* s, int count, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int precision = stream->precision;
    int count_3 = count;
    int precision_1 = precision;
    char const* s_1 = s;
    
    if (count <= precision)
        precision_1 = count_3;
    
    int width = stream->width;
    
    if (precision >= 0)
        count_3 = precision_1;
    
    int16_t flags;
    
    if (width > count_3)
    {
        int32_t rax_2 = width - count_3;
        stream->width = rax_2;
        flags = stream->flags;
        
        if (!(*flags[1] & 4))
        {
            stream->width = rax_2 - 1;
            
            do
            {
                __pformat_putc(0x20, stream);
                width = stream->width;
                stream->width = width - 1;
            } while (width);
            
            goto label_140002a23;
        }
        
        if (!count_3)
        {
            stream->width = rax_2 - 1;
            goto label_140002aa1;
        }
    }
    else
    {
        stream->width = 0xffffffff;
        label_140002a23:
        
        if (!count_3)
        {
            stream->width = 0xfffffffe;
            return width;
        }
        
        flags = stream->flags;
    }
    
    while (true)
    {
        int count_1;
        
        if (!(*flags[1] & 0x40))
            count_1 = stream->count;
        
        if (*flags[1] & 0x40 || stream->quota > count_1)
        {
            int32_t _Character = *s_1;
            void* dest = stream->dest;
            
            if (!(*flags[1] & 0x20))
            {
                *(dest + stream->count) = _Character;
                count_1 = stream->count;
            }
            else
            {
                fputc(_Character, dest);
                count_1 = stream->count;
            }
        }
        
        stream->count = count_1 + 1;
        
        if (&s_1[count_3 - 1] == s_1)
            break;
        
        flags = stream->flags;
        s_1 = &s_1[1];
    }
    
    while (true)
    {
        width = stream->width;
        stream->width = width - 1;
        
        if (width <= 0)
            return width;
        
        flags = stream->flags;
        label_140002aa1:
        int count_2;
        
        if (!(*flags[1] & 0x40))
            count_2 = stream->count;
        
        if (*flags[1] & 0x40 || stream->quota > count_2)
        {
            char* dest_1 = stream->dest;
            
            if (!(*flags[1] & 0x20))
            {
                dest_1[stream->count] = 0x20;
                count_2 = stream->count;
            }
            else
            {
                fputc(0x20, dest_1);
                count_2 = stream->count;
            }
        }
        
        stream->count = count_2 + 1;
    }
}

int64_t __pformat_puts(char const* s, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    char const* s_1 = s;
    int64_t precision = stream->precision;
    
    if (!s)
        s_1 = "(null)";
    
    int rax;
    
    if (precision < 0)
        rax = strlen(s_1);
    else
        rax = strnlen(s_1, precision);
    
    /* tailcall */
    return __pformat_putchars(s_1, rax, stream);
}

int64_t __pformat_emit_inf_or_nan(int sign, char* value, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int flags = stream->flags;
    stream->precision = 0xffffffff;
    char s;
    void* r9;
    void var_b;
    
    if (sign)
    {
        s = 0x2d;
        r9 = &var_b;
    }
    else if (flags & 0x100)
    {
        s = 0x2b;
        r9 = &var_b;
    }
    else if (!(flags & 0x40))
        r9 = &s;
    else
    {
        s = 0x20;
        r9 = &var_b;
    }
    
    for (int64_t i = 0; i != 3; i += 1)
        *(r9 + i) = (value[i] & 0xdf) | (flags & 0x20);
    
    return __pformat_putchars(&s, r9 + 3 - &s, stream);
}

int64_t __pformat_xint(int fmt, union value, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream, union value)
{
    void var_78;
    int32_t rax_1;
    char rcx;
    int32_t rdi;
    char** stream_1;
    char r8;
    int32_t r12;
    void* r13;
    int32_t r15;
    
    if (fmt != 0x6f)
    {
        r15 = stream_1[2];
        int32_t rax = 0;
        rdi = stream_1[1];
        
        if (r15 >= 0)
            rax = r15;
        
        rax_1 = rax + 0x12;
        
        if (!(rdi & 0x1000))
        {
            r12 = *(stream_1 + 0xc);
            
            if (rax_1 < r12)
                rax_1 = r12;
            
            int64_t rax_4 = (rax_1 + 0xf) & 0xfffffffffffffff0;
            _.text(rax_4);
            rcx = 4;
            r8 = 0xf;
            r13 = &var_78 - rax_4 + 0x20;
            goto label_140002c91;
        }
        
        rcx = 4;
        
        if (stream_1[4])
            goto label_140002e32;
        
        r12 = *(stream_1 + 0xc);
        
        if (rax_1 < r12)
            rax_1 = r12;
        
        int64_t rax_29 = (rax_1 + 0xf) & 0xfffffffffffffff0;
        _.text(rax_29);
        r8 = 0xf;
        r13 = &var_78 - rax_29 + 0x20;
        goto label_140002e6f;
    }
    
    r15 = stream_1[2];
    int32_t rax_23 = 0;
    rdi = stream_1[1];
    
    if (r15 >= 0)
        rax_23 = r15;
    
    rax_1 = rax_23 + 0x18;
    char* rsi;
    
    if (rdi & 0x1000)
    {
        if (!stream_1[4])
        {
            r12 = *(stream_1 + 0xc);
            
            if (rax_1 < r12)
                rax_1 = r12;
            
            goto label_140002f91;
        }
        
        rcx = 3;
        label_140002e32:
        r12 = *(stream_1 + 0xc);
        int32_t rax_18 = rax_1 + rax_1 / 3;
        
        if (rax_18 < r12)
            rax_18 = r12;
        
        int64_t rax_21 = (rax_18 + 0xf) & 0xfffffffffffffff0;
        _.text(rax_21);
        r13 = &var_78 - rax_21 + 0x20;
        
        if (fmt == 0x6f)
            goto label_140002fa7;
        
        r8 = 0xf;
        label_140002e6f:
        rsi = r13;
        
        if (stream)
            goto label_140002ccf;
        
        goto label_140002e86;
    }
    
    r12 = *(stream_1 + 0xc);
    
    if (r12 >= rax_1)
        rax_1 = r12;
    
    label_140002f91:
    int64_t rax_26 = (rax_1 + 0xf) & 0xfffffffffffffff0;
    _.text(rax_26);
    rcx = 3;
    r13 = &var_78 - rax_26 + 0x20;
    label_140002fa7:
    r8 = 7;
    label_140002c91:
    rsi = r13;
    
    if (stream)
    {
        label_140002ccf:
        
        do
        {
            rsi = &rsi[1];
            char rax_6 = r8 & stream;
            char rax_8 = (rax_6 + 0x37) | (fmt & 0x20);
            
            if (rax_6 + 0x30 < 0x3a)
                rax_8 = rax_6 + 0x30;
            
            stream u>>= rcx;
            rsi[-1] = rax_8;
        } while (stream);
        
        if (rsi == r13)
            goto label_140002e86;
        
        if (r15 <= 0)
            goto label_140002fbc;
        
        goto label_140002cec;
    }
    
    label_140002e86:
    stream_1[1] = rdi & 0xfffff7ff;
    
    if (r15 <= 0)
    {
        label_140002fbc:
        
        if (fmt == 0x6f && *(stream_1 + 9) & 8)
        {
            *rsi = 0x30;
            rsi = &rsi[1];
        }
        
        if (rsi != r13 || !r15)
            goto label_140002d1a;
        
        goto label_140002eb4;
    }
    
    label_140002cec:
    int32_t _Size_2 = r15 - (rsi - r13);
    
    if (_Size_2 <= 0)
        goto label_140002fbc;
    
    int64_t _Size = _Size_2;
    char* rcx_1 = rsi;
    rsi = &rsi[_Size];
    memset(rcx_1, 0x30, _Size);
    int32_t i;
    
    if (rsi != r13)
    {
        label_140002d1a:
        i = rsi - r13;
        
        if (i < r12)
            goto label_140002ed0;
        
        goto label_140002d26;
    }
    
    label_140002eb4:
    *rsi = 0x30;
    rsi = &rsi[1];
    i = rsi - r13;
    int32_t _Size_3;
    
    if (i >= r12)
    {
        label_140002d26:
        *(stream_1 + 0xc) = 0xffffffff;
        
        if (fmt == 0x6f)
        {
            _Size_3 = -1;
            
            if (rsi > r13)
                goto label_140002d6d;
            
            return i;
        }
        
        _Size_3 = -1;
        
        if (*(stream_1 + 9) & 8)
        {
            *rsi = fmt;
            rsi = &rsi[2];
            rsi[-1] = 0x30;
        }
        
        goto label_140002d47;
    }
    
    label_140002ed0:
    _Size_3 = r12 - i;
    int32_t rdi_1 = stream_1[1];
    *(stream_1 + 0xc) = _Size_3;
    int32_t rsi_1;
    
    if (fmt == 0x6f)
    {
        if (r15 < 0 && (rdi_1 & 0x600) == 0x200)
        {
            label_140003097:
            char* rcx_2 = rsi;
            uint64_t _Size_1 = _Size_3;
            rsi = &rsi[_Size_1];
            i = memset(rcx_2, 0x30, _Size_1);
            _Size_3 = _Size_3 * 0 - 1;
            
            if (fmt == 0x6f || !(rdi_1 & 0x800))
                goto label_140002f0d;
            
            goto label_140002f02;
        }
        
        if (!(rdi_1 & 0x400))
        {
            label_140002f25:
            int32_t i_1 = _Size_3 - 1;
            
            do
            {
                __pformat_putc(0x20, stream_1);
                i = i_1;
                i_1 -= 1;
            } while (i > 0);
            
            _Size_3 = -1;
            
            if (rsi > r13)
                goto label_140002d6d;
            
            goto label_140002da5;
        }
        
        if (rsi > r13)
        {
            label_140002d70:
            
            while (true)
            {
                rsi -= 1;
                int32_t rax_13;
                
                if (!(rdi_1 & 0x4000))
                    rax_13 = *(stream_1 + 0x24);
                
                if (!(rdi_1 & 0x4000) && stream_1[5] <= rax_13)
                    goto label_140002d62;
                
                int32_t _Character = *rsi;
                char* _Stream = *stream_1;
                
                if (!(rdi_1 & 0x2000))
                {
                    _Stream[*(stream_1 + 0x24)] = _Character;
                    rax_13 = *(stream_1 + 0x24);
                    label_140002d62:
                    i = rax_13 + 1;
                    *(stream_1 + 0x24) = i;
                    
                    if (rsi <= r13)
                        break;
                }
                else
                {
                    fputc(_Character, _Stream);
                    i = *(stream_1 + 0x24) + 1;
                    *(stream_1 + 0x24) = i;
                    
                    if (rsi <= r13)
                        break;
                }
                
                label_140002d6d:
                rdi_1 = stream_1[1];
            }
            
            label_140002da5:
            rsi_1 = _Size_3 - 1;
            
            if (_Size_3 > 0)
                goto label_140002dce;
            
            return i;
        }
    }
    else
    {
        if (rdi_1 & 0x800)
        {
            _Size_3 -= 2;
            
            if (_Size_3 > 0 && r15 < 0)
                goto label_1400030e2;
            
            label_140002f02:
            *rsi = fmt;
            rsi = &rsi[2];
            rsi[-1] = 0x30;
            label_140002f0d:
            
            if (_Size_3 <= 0)
            {
                label_140002d47:
                
                if (r13 < rsi)
                    goto label_140002d6d;
                
                return i;
            }
            
            rdi_1 = stream_1[1];
            
            if (rdi_1 & 0x400)
                goto label_140003015;
            
            goto label_140002f25;
        }
        
        if (r15 < 0)
        {
            label_1400030e2:
            i = rdi_1 & 0x600;
            
            if (i == 0x200)
                goto label_140003097;
            
            if (rdi_1 & 0x800)
                goto label_140002f02;
        }
        
        if (!(rdi_1 & 0x400))
            goto label_140002f25;
        
        label_140003015:
        
        if (r13 < rsi)
            goto label_140002d70;
    }
    
    rsi_1 = _Size_3 - 1;
    
    while (true)
    {
        int32_t rax_16;
        
        if (!(rdi_1 & 0x4000))
            rax_16 = *(stream_1 + 0x24);
        
        if (!(rdi_1 & 0x4000) && stream_1[5] <= rax_16)
            goto label_140002dc3;
        
        char* _Stream_1 = *stream_1;
        
        if (!(rdi_1 & 0x2000))
        {
            _Stream_1[*(stream_1 + 0x24)] = 0x20;
            rax_16 = *(stream_1 + 0x24);
            label_140002dc3:
            i = rax_16 + 1;
            *(stream_1 + 0x24) = i;
            int32_t temp1_1 = rsi_1;
            rsi_1 -= 1;
            
            if (temp1_1 < 1)
                return i;
        }
        else
        {
            fputc(0x20, _Stream_1);
            i = *(stream_1 + 0x24) + 1;
            *(stream_1 + 0x24) = i;
            int32_t temp0_1 = rsi_1;
            rsi_1 -= 1;
            
            if (temp0_1 < 1)
                return i;
        }
        
        label_140002dce:
        rdi_1 = stream_1[1];
    }
}

int64_t __pformat_int(union value, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream, union value)
{
    int32_t _Size_3 = 0;
    char** stream_1;
    int32_t _Size_2 = stream_1[2];
    int32_t r12 = stream_1[1];
    
    if (_Size_2 >= 0)
        _Size_3 = _Size_2;
    
    int32_t rax = _Size_3 + 0x17;
    
    if (r12 & 0x1000 && stream_1[4])
        rax += rax / 3;
    
    int32_t rsi = *(stream_1 + 0xc);
    
    if (rsi >= rax)
        rax = rsi;
    
    int64_t rax_3 = (rax + 0xf) & 0xfffffffffffffff0;
    _.text(rax_3);
    
    if (!(r12 & 0x80))
        goto label_1400031a6;
    
    void var_68;
    void* rdi_1;
    int32_t _Size_1;
    
    if (stream < 0)
    {
        stream = -(stream);
        label_1400031bc:
        void* r8 = &var_68 - rax_3 + 0x20;
        
        while (true)
        {
            rdi_1 = r8 + 1;
            uint64_t stream_2 = stream / 0xa;
            *r8 = stream - (stream_2 + (stream_2 << 2)) * 2 + 0x30;
            
            if (stream <= 9)
                break;
            
            if (&var_68 - rax_3 + 0x20 != rdi_1 && r12 & 0x1000 && stream_1[4] && ((rdi_1 - (&var_68 - rax_3 + 0x20)) & 0x8000000000000003) == 3)
            {
                *(r8 + 1) = 0x2c;
                rdi_1 = r8 + 2;
            }
            
            stream = stream_2;
            r8 = rdi_1;
        }
        
        if (_Size_2 > 0)
        {
            _Size_1 = _Size_2 - (rdi_1 - (&var_68 - rax_3 + 0x20));
            
            if (_Size_1 <= 0)
                goto label_140003260;
            
            goto label_14000324a;
        }
        
        if (&var_68 - rax_3 + 0x20 == rdi_1)
            goto label_1400033e9;
    }
    else
    {
        r12 &= 0x7f;
        stream_1[1] = r12;
        label_1400031a6:
        
        if (stream)
            goto label_1400031bc;
        
        rdi_1 = &var_68 - rax_3 + 0x20;
        _Size_1 = _Size_2;
        
        if (_Size_2 > 0)
        {
            label_14000324a:
            int64_t _Size = _Size_1;
            void* rcx = rdi_1;
            rdi_1 += _Size;
            memset(rcx, 0x30, _Size);
            label_140003260:
            
            if (&var_68 - rax_3 + 0x20 == rdi_1)
            {
                *rdi_1 = 0x30;
                rdi_1 += 1;
            }
        }
        else
        {
            label_1400033e9:
            
            if (_Size_2)
            {
                *rdi_1 = 0x30;
                rdi_1 += 1;
            }
        }
    }
    
    if (rsi > 0)
    {
        int32_t rsi_1 = rsi - (rdi_1 - (&var_68 - rax_3 + 0x20));
        *(stream_1 + 0xc) = rsi_1;
        
        if (rsi_1 > 0)
        {
            if (!(r12 & 0x1c0))
            {
                if (_Size_2 < 0 && (r12 & 0x600) == 0x200)
                    goto label_14000342a;
                
                goto label_140003292;
            }
            
            *(stream_1 + 0xc) = rsi_1 - 1;
            
            if (_Size_2 >= 0 || (r12 & 0x600) != 0x200)
            {
                label_140003292:
                
                if (!(r12 & 0x400))
                {
                    int32_t rax_25 = *(stream_1 + 0xc);
                    *(stream_1 + 0xc) = rax_25 - 1;
                    
                    if (rax_25 > 0)
                    {
                        int32_t i;
                        
                        do
                        {
                            __pformat_putc(0x20, stream_1);
                            i = *(stream_1 + 0xc);
                            *(stream_1 + 0xc) = i - 1;
                        } while (i > 0);
                        r12 = stream_1[1];
                    }
                }
            }
            else
            {
                label_14000342a:
                int32_t rdx_6 = *(stream_1 + 0xc);
                uint64_t rax_24 = rdx_6 - 1;
                *(stream_1 + 0xc) = rax_24;
                
                if (rdx_6 > 0)
                {
                    void* rcx_2 = rdi_1;
                    rdi_1 += rax_24 + 1;
                    memset(rcx_2, 0x30, rax_24 + 1);
                    *(stream_1 + 0xc) = 0xffffffff;
                }
            }
        }
    }
    
    void* rsi_2;
    
    if (r12 & 0x80)
    {
        *rdi_1 = 0x2d;
        rsi_2 = rdi_1 + 1;
    }
    else if (!(r12 & 0x100))
    {
        rsi_2 = rdi_1;
        
        if (r12 & 0x40)
        {
            *rdi_1 = 0x20;
            rsi_2 += 1;
        }
    }
    else
    {
        *rdi_1 = 0x2b;
        rsi_2 = rdi_1 + 1;
    }
    
    if (&var_68 - rax_3 + 0x20 < rsi_2)
    {
        while (true)
        {
            rsi_2 -= 1;
            int32_t rax_17;
            
            if (!(r12 & 0x4000))
                rax_17 = *(stream_1 + 0x24);
            
            if (!(r12 & 0x4000) && stream_1[5] <= rax_17)
                goto label_1400032cd;
            
            int32_t _Character = *rsi_2;
            FILE* _Stream = *stream_1;
            
            if (!(r12 & 0x2000))
            {
                *(_Stream + *(stream_1 + 0x24)) = _Character;
                rax_17 = *(stream_1 + 0x24);
                label_1400032cd:
                *(stream_1 + 0x24) = rax_17 + 1;
                
                if (&var_68 - rax_3 + 0x20 == rsi_2)
                    break;
            }
            else
            {
                fputc(_Character, _Stream);
                *(stream_1 + 0x24) += 1;
                
                if (&var_68 - rax_3 + 0x20 == rsi_2)
                    break;
            }
            
            r12 = stream_1[1];
        }
    }
    
    int32_t result = *(stream_1 + 0xc);
    
    while (true)
    {
        int32_t result_1 = result;
        result -= 1;
        *(stream_1 + 0xc) = result;
        
        if (result_1 <= 0)
            break;
        
        int16_t rcx_1 = stream_1[1];
        int32_t rdx_1;
        
        if (!(*rcx_1[1] & 0x40))
            rdx_1 = *(stream_1 + 0x24);
        
        if (*rcx_1[1] & 0x40 || stream_1[5] > rdx_1)
        {
            char* _Stream_1 = *stream_1;
            *rcx_1[1] &= 0x20;
            
            if (!*rcx_1[1])
            {
                _Stream_1[*(stream_1 + 0x24)] = 0x20;
                rdx_1 = *(stream_1 + 0x24);
                result = *(stream_1 + 0xc);
            }
            else
            {
                fputc(0x20, _Stream_1);
                rdx_1 = *(stream_1 + 0x24);
                result = *(stream_1 + 0xc);
            }
        }
        
        *(stream_1 + 0x24) = rdx_1 + 1;
    }
    
    return result;
}

int64_t __pformat_emit_radix_point(struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    void var_10;
    int64_t r12;
    var_10 = r12;
    int64_t ps;
    short unsigned int rpchr_1;
    
    if (stream->rplen == 0xfffffffd)
    {
        ps = 0;
        short unsigned int pwc;
        int rax_10 = mbrtowc(&pwc, *localeconv(), 0x10, &ps);
        
        if (rax_10 <= 0)
            rpchr_1 = stream->rpchr;
        else
        {
            rpchr_1 = pwc;
            stream->rpchr = rpchr_1;
        }
        
        stream->rplen = rax_10;
    }
    else
        rpchr_1 = stream->rpchr;
    
    if (!rpchr_1)
        return __pformat_putc(0x2e, stream);
    
    int64_t rax_3 = (stream->rplen + 0xf) & 0xfffffffffffffff0;
    _.text(rax_3);
    ps = 0;
    void var_58;
    char* rbx = &var_58 - rax_3 + 0x20;
    int32_t rax_4 = wcrtomb(rbx, rpchr_1, &ps);
    
    if (rax_4 <= 0)
        return __pformat_putc(0x2e, stream);
    
    void* rdi_1 = &rbx[rax_4 - 1 + 1];
    int result;
    
    while (true)
    {
        int16_t flags = stream->flags;
        rbx = &rbx[1];
        int count;
        
        if (!(*flags[1] & 0x40))
            count = stream->count;
        
        if (*flags[1] & 0x40 || stream->quota > count)
        {
            int32_t _Character = rbx[-1];
            FILE* dest = stream->dest;
            *flags[1] &= 0x20;
            
            if (!*flags[1])
            {
                *(dest + stream->count) = _Character;
                count = stream->count;
            }
            else
            {
                fputc(_Character, dest);
                result = stream->count + 1;
                stream->count = result;
                
                if (rdi_1 == rbx)
                    break;
                
                continue;
            }
        }
        
        result = count + 1;
        stream->count = result;
        
        if (rdi_1 == rbx)
            break;
    }
    
    return result;
}

int __pformat_emit_float(int sign, char* value, int len, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int width = stream->width;
    char* value_1 = value;
    int rsi = len;
    int rax;
    int precision_2;
    
    if (len > 0)
    {
        if (width >= len)
        {
            int width_5 = width;
            width -= len;
            stream->width = width;
            
            if (width_5 - len < 0)
                goto label_140003649;
            
            precision_2 = stream->precision;
            
            if (width <= precision_2)
                goto label_140003649;
            
            goto label_140003799;
        }
        
        label_140003649:
        stream->width = 0xffffffff;
        
        if (*stream->flags[1] & 0x10 && stream->thousands_chr)
        {
            rax = -1;
            label_14000366e:
            uint32_t rcx_2 = (rsi + 2) / 3;
            int32_t i = rcx_2 - 1 - rax;
            
            if (rcx_2 != 1)
            {
                do
                {
                    if (rax <= 0)
                        goto label_1400036ca;
                    
                    rax -= 1;
                    stream->width = rax;
                } while (i != -(rax));
            }
            
            goto label_140003680;
        }
        
        label_1400036ca:
        
        if (!sign)
            goto label_1400036d2;
        
        __pformat_putc(0x2d, stream);
    }
    else
    {
        int flags;
        
        if (width <= 0)
        {
            if (!width)
                goto label_1400037fb;
            
            stream->width = 0xffffffff;
            label_140003809:
            
            if (!sign)
            {
                label_1400036d2:
                flags = stream->flags;
                label_1400036d5:
                
                if (*flags[1] & 1)
                    __pformat_putc(0x2b, stream);
                else if (flags & 0x40)
                    __pformat_putc(0x20, stream);
            }
            else
                __pformat_putc(0x2d, stream);
        }
        else
        {
            width -= 1;
            label_1400037fb:
            precision_2 = stream->precision;
            
            if (width <= precision_2)
            {
                stream->width = 0xffffffff;
                goto label_140003809;
            }
            
            label_140003799:
            rax = width - precision_2;
            stream->width = rax;
            int16_t flags_1;
            
            if (precision_2 <= 0)
                flags_1 = stream->flags;
            
            if (precision_2 > 0 || *flags_1[1] & 8)
            {
                rax -= 1;
                stream->width = rax;
                
                if (rsi > 0 && *stream->flags[1] & 0x10 && stream->thousands_chr)
                    goto label_14000366e;
                
                label_140003680:
                
                if (rax <= 0)
                    goto label_1400036ca;
            }
            else if (rsi > 0)
            {
                *flags_1[1] &= 0x10;
                
                if (!*flags_1[1] || !stream->thousands_chr)
                    goto label_140003684;
                
                goto label_14000366e;
            }
            
            label_140003684:
            int rax_1;
            
            if (!sign)
            {
                flags = stream->flags;
                
                if (flags & 0x1c0)
                {
                    rax_1 = rax - 1;
                    stream->width = rax_1;
                    
                    if (rax == 1 || *flags[1] & 6)
                        goto label_1400036d5;
                    
                    goto label_1400036ab;
                }
                
                if (*flags[1] & 6)
                    goto label_1400036d5;
                
                int width_4 = stream->width;
                stream->width = width_4 - 1;
                
                if (width_4 <= 0)
                    goto label_1400036d5;
                
                goto label_1400036c8;
            }
            
            rax_1 = rax - 1;
            stream->width = rax_1;
            
            if (rax == 1)
                __pformat_putc(0x2d, stream);
            else
            {
                if (!(stream->flags & 0x600))
                {
                    label_1400036ab:
                    stream->width = rax_1 - 1;
                    label_1400036c8:
                    int width_1;
                    
                    do
                    {
                        __pformat_putc(0x20, stream);
                        width_1 = stream->width;
                        stream->width = width_1 - 1;
                    } while (width_1 > 0);
                    goto label_1400036ca;
                }
                
                __pformat_putc(0x2d, stream);
            }
        }
    }
    int width_2 = stream->width;
    
    if (width_2 > 0 && (stream->flags & 0x600) == 0x200)
    {
        stream->width = width_2 - 1;
        int width_3;
        
        do
        {
            __pformat_putc(0x30, stream);
            width_3 = stream->width;
            stream->width = width_3 - 1;
        } while (width_3 > 0);
    }
    
    int precision;
    
    if (rsi <= 0)
    {
        __pformat_putc(0x30, stream);
        precision = stream->precision;
        
        if (precision <= 0 && !(*stream->flags[1] & 8))
        {
            if (rsi)
                goto label_1400038dd;
            
            stream->precision = precision - 1;
            return precision - 1;
        }
        
        __pformat_emit_radix_point(stream);
        
        if (rsi)
        {
            precision = stream->precision;
            label_1400038dd:
            stream->precision = precision + rsi;
            int i_1;
            
            do
            {
                __pformat_putc(0x30, stream);
                i_1 = rsi;
                rsi += 1;
            } while (i_1 != 0xffffffff);
        }
    }
    else
    {
        while (true)
        {
            char c_2 = *value_1;
            int c = 0x30;
            
            if (c_2)
            {
                value_1 = &value_1[1];
                c = c_2;
            }
            
            __pformat_putc(c, stream);
            int temp5_1 = rsi;
            rsi -= 1;
            
            if (temp5_1 == 1)
                break;
            
            if (*stream->flags[1] & 0x10 && stream->thousands_chr && rsi * 0xaaaaaaab <= 0x55555555)
                __pformat_wputchars(&stream->thousands_chr, 1, stream);
        }
        
        precision = stream->precision;
        
        if (precision <= 0 && !(*stream->flags[1] & 8))
        {
            stream->precision = precision - 1;
            return precision - 1;
        }
        
        __pformat_emit_radix_point(stream);
    }
    int precision_1;
    
    while (true)
    {
        precision_1 = stream->precision;
        stream->precision = precision_1 - 1;
        
        if (precision_1 <= 0)
            break;
        
        char c_3 = *value_1;
        int c_1 = 0x30;
        
        if (c_3)
        {
            value_1 = &value_1[1];
            c_1 = c_3;
        }
        
        __pformat_putc(c_1, stream);
    }
    
    return precision_1;
}

int64_t __pformat_emit_efloat(int sign, char* value, int e, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int expmin_2 = 1;
    int64_t r13 = e - 1;
    int32_t r8_1 = (e - 1) >> 0x1f;
    int32_t rcx_1 = (r13 * 0x66666667) >> 0x22;
    int32_t rcx_2 = rcx_1 - r8_1;
    
    if (rcx_1 != r8_1)
    {
        int32_t rax_3;
        int32_t rcx_3;
        
        do
        {
            rcx_3 = rcx_2 >> 0x1f;
            expmin_2 += 1;
            rax_3 = (rcx_2 * 0x66666667) >> 0x22;
            rcx_2 s/= 0xa;
        } while (rax_3 != rcx_3);
    }
    
    int expmin = stream->expmin;
    
    if (expmin == 0xffffffff)
    {
        stream->expmin = 2;
        expmin = 2;
    }
    
    int expmin_1 = expmin_2;
    int width = stream->width;
    
    if (expmin >= expmin_2)
        expmin_1 = expmin;
    
    int rax_6 = width - (expmin_1 + 2);
    
    if (width <= expmin_1 + 2)
        rax_6 = -1;
    
    stream->width = rax_6;
    __pformat_emit_float(sign, value, 1, stream);
    int flags = stream->flags;
    stream->precision = stream->expmin;
    stream->flags = flags | 0x1c0;
    __pformat_putc((flags & 0x20) | 0x45, stream);
    stream->width += expmin_1 + 1;
    /* tailcall */
    return __pformat_int(r13);
}

int64_t __pformat_efloat(float128 x, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int precision = stream->precision;
    int80_t* rcx;
    int80_t x87_r7 = *rcx;
    int nd;
    
    if (precision < 0)
    {
        stream->precision = 6;
        nd = 7;
    }
    else
        nd = precision + 1;
    
    int80_t var_38 = x87_r7;
    int sign;
    int dp;
    float128 val;
    char* rax = __pformat_cvt(2, val, nd, &dp, &sign);
    int e = dp;
    
    if (e != 0xffff8000)
    {
        __pformat_emit_efloat(sign, rax, e, stream);
        return __freedtoa(rax);
    }
    
    __pformat_emit_inf_or_nan(sign, rax, stream);
    return __freedtoa(rax);
}

int64_t __pformat_float(float128 x, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int precision = stream->precision;
    int80_t* rcx;
    int80_t x87_r7 = *rcx;
    
    if (precision < 0)
    {
        stream->precision = 6;
        precision = 6;
    }
    
    int80_t var_38 = x87_r7;
    int sign;
    int dp;
    float128 val;
    char* rax = __pformat_cvt(3, val, precision, &dp, &sign);
    int len = dp;
    
    if (len == 0xffff8000)
        __pformat_emit_inf_or_nan(sign, rax, stream);
    else
    {
        __pformat_emit_float(sign, rax, len, stream);
        int width = stream->width;
        
        while (true)
        {
            int width_1 = width;
            width -= 1;
            stream->width = width;
            
            if (width_1 <= 0)
                break;
            
            int16_t flags = stream->flags;
            int count;
            
            if (!(*flags[1] & 0x40))
                count = stream->count;
            
            if (*flags[1] & 0x40 || stream->quota > count)
            {
                void* dest = stream->dest;
                *flags[1] &= 0x20;
                
                if (!*flags[1])
                {
                    *(dest + stream->count) = 0x20;
                    count = stream->count;
                    width = stream->width;
                }
                else
                {
                    fputc(0x20, dest);
                    count = stream->count;
                    width = stream->width;
                }
            }
            
            stream->count = count + 1;
        }
    }
    
    return __freedtoa(rax);
}

int64_t __pformat_gfloat(float128 x, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int precision_1 = stream->precision;
    int80_t* rcx;
    int80_t x87_r7 = *rcx;
    
    if (precision_1 < 0)
    {
        stream->precision = 6;
        precision_1 = 6;
    }
    else if (!precision_1)
    {
        stream->precision = 1;
        precision_1 = 1;
    }
    
    int80_t var_38 = x87_r7;
    int sign;
    int dp;
    float128 val;
    char* rax = __pformat_cvt(2, val, precision_1, &dp, &sign);
    int dp_1 = dp;
    
    if (dp_1 == 0xffff8000)
        __pformat_emit_inf_or_nan(sign, rax, stream);
    else
    {
        int32_t rax_2 = stream->flags & 0x800;
        int precision;
        
        if (dp_1 >= 0xfffffffd)
            precision = stream->precision;
        
        if (dp_1 < 0xfffffffd || dp_1 > precision)
        {
            int rax_4;
            
            if (rax_2)
                rax_4 = stream->precision - 1;
            else
                rax_4 = strlen(rax) - 1;
            
            stream->precision = rax_4;
            __pformat_emit_efloat(sign, rax, dp_1, stream);
        }
        else
        {
            if (!rax_2)
            {
                int32_t rax_7 = strlen(rax);
                int rax_8 = rax_7 - dp_1;
                stream->precision = rax_8;
                
                if (rax_7 - dp_1 < 0)
                {
                    int width_1 = stream->width;
                    
                    if (width_1 > 0)
                        stream->width = rax_8 + width_1;
                }
            }
            else
                stream->precision = precision - dp_1;
            
            __pformat_emit_float(sign, rax, dp_1, stream);
            
            while (true)
            {
                int width = stream->width;
                stream->width = width - 1;
                
                if (width <= 0)
                    break;
                
                __pformat_putc(0x20, stream);
            }
        }
    }
    
    return __freedtoa(rax);
}

int64_t __pformat_emit_xfloat(union value, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream, union value)
{
    bool cond:0 = stream;
    struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream_3 = stream;
    struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream_2;
    struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream_1 = stream_2;
    int32_t rdx;
    int32_t rdi_1;
    
    if (!rdx)
        rdi_1 = 0;
    
    if (rdx || cond:0)
        rdi_1 = rdx - 3;
    
    int precision_1 = stream_1->precision;
    stream_2 = precision_1 > 0;
    int32_t i_2;
    
    if (precision_1 <= 0xe)
    {
        uint64_t r9 = stream_3 >> 1;
        int64_t rax_1 = 4 << (0xe - precision_1) << 2;
        int64_t rax_2 = rax_1 + r9;
        
        if (rax_1 + r9 < 0)
        {
            rdi_1 += 4;
            stream_3 = rax_2 >> 3 >> (0xf - precision_1) << 2;
            label_140003ff7:
            i_2 = precision_1 + 1;
            goto label_140003ffa;
        }
        
        uint64_t stream_4 = (rax_2 * 2) >> (0xf - precision_1) << 2;
        stream_3 = stream_4;
        
        if (stream_4 || stream_2)
            goto label_140003ff7;
        
        goto label_140003e0d;
    }
    
    char var_58;
    int flags;
    void* i_1;
    int flags_1;
    
    if (cond:0 || stream_2)
    {
        i_2 = 0x10;
        label_140003ffa:
        flags = stream_1->flags;
        i_1 = &var_58;
        flags_1 = flags;
        int32_t i;
        
        do
        {
            int32_t rax_17 = stream_3 & 0xf;
            
            if (i_2 != 1)
            {
                int precision_3 = stream_1->precision;
                
                if (precision_3 > 0)
                    stream_1->precision = precision_3 - 1;
                
                goto label_140004063;
            }
            
            int precision_4;
            
            if (i_1 <= &var_58 && !(flags & 0x800))
                precision_4 = stream_1->precision;
            
            if (i_1 <= &var_58 && !(flags & 0x800) && precision_4 <= 0)
            {
                if (rax_17)
                    goto label_140004067;
                
                if (!precision_4)
                    goto label_14000402f;
                
                break;
            }
            
            *i_1 = 0x2e;
            i_1 += 1;
            label_140004063:
            
            if (rax_17)
            {
                label_140004067:
                
                if (rax_17 <= 9)
                    goto label_14000402f;
                
                *i_1 = (rax_17 + 0x37) | (flags & 0x20);
                i_1 += 1;
            }
            else if (i_1 > &var_58 || stream_1->precision >= 0)
            {
                label_14000402f:
                *i_1 = rax_17 + 0x30;
                i_1 += 1;
            }
            
            stream_3 u>>= 4;
            i = i_2;
            i_2 -= 1;
        } while (i != 1);
        
        if (i_1 == &var_58)
        {
            if (stream_1->precision <= 0)
                goto label_140003e17;
            
            goto label_1400040a6;
        }
    }
    else
    {
        label_140003e0d:
        flags = stream_1->flags;
        label_140003e17:
        flags_1 = flags;
        char* rax_4 = &var_58;
        
        if (*flags[1] & 8)
        {
            label_1400040a6:
            var_58 = 0x2e;
            void var_57;
            rax_4 = &var_57;
            *rax_4 = 0x30;
            i_1 = &rax_4[1];
        }
        else
        {
            *rax_4 = 0x30;
            i_1 = &rax_4[1];
        }
    }
    
    int width_3 = stream_1->width;
    int32_t rbp_1 = 2;
    
    if (width_3 > 0)
    {
        int precision_2 = stream_1->precision;
        int32_t r10_2 = i_1 - &var_58;
        
        if (precision_2 > 0)
            r10_2 += precision_2;
        
        int32_t r10_3 = r10_2 + 6;
        int32_t rax_6 = rdi_1 >> 0x1f;
        int32_t r9_2 = r10_3;
        int32_t rdx_5 = (rdi_1 * 0x66666667) >> 0x22;
        int32_t rdx_6 = rdx_5 - rax_6;
        
        if (rdx_5 != rax_6)
        {
            int32_t rax_9;
            int32_t rdx_7;
            
            do
            {
                r9_2 += 1;
                rdx_7 = rdx_6 >> 0x1f;
                rax_9 = (rdx_6 * 0x66666667) >> 0x22;
                rdx_6 s/= 0xa;
            } while (rax_9 != rdx_7);
            rbp_1 = r9_2 + 2 - r10_3;
        }
        
        if (width_3 <= r9_2)
            stream_1->width = 0xffffffff;
        else
        {
            int r11_1 = width_3 - r9_2;
            *flags[1] &= 6;
            
            if (*flags[1])
                stream_1->width = r11_1;
            else
            {
                stream_1->width = r11_1 - 1;
                
                if (r11_1 > 0)
                {
                    int width;
                    
                    do
                    {
                        __pformat_putc(0x20, stream_1);
                        width = stream_1->width;
                        stream_1->width = width - 1;
                    } while (width > 0);
                    flags_1 = stream_1->flags;
                }
            }
        }
    }
    
    if (flags_1 & 0x80)
        __pformat_putc(0x2d, stream_1);
    else if (flags_1 & 0x100)
        __pformat_putc(0x2b, stream_1);
    else if (flags_1 & 0x40)
        __pformat_putc(0x20, stream_1);
    
    __pformat_putc(0x30, stream_1);
    __pformat_putc((stream_1->flags & 0x20) | 0x58, stream_1);
    int width_1 = stream_1->width;
    
    if (width_1 > 0 && *stream_1->flags[1] & 2)
    {
        stream_1->width = width_1 - 1;
        int width_2;
        
        do
        {
            __pformat_putc(0x30, stream_1);
            width_2 = stream_1->width;
            stream_1->width = width_2 - 1;
        } while (width_2 > 0);
    }
    
    if (i_1 > &var_58)
    {
        do
        {
            int32_t c = *(i_1 - 1);
            i_1 -= 1;
            
            if (c == 0x2e)
                __pformat_emit_radix_point(stream_1);
            else if (c == 0x2c)
            {
                short unsigned int thousands_chr = stream_1->thousands_chr;
                char buf[0x18];
                buf[0x16] = thousands_chr;
                
                if (thousands_chr)
                    __pformat_wputchars(&buf[0x16], 1, stream_1);
            }
            else
                __pformat_putc(c, stream_1);
        } while (i_1 != &var_58);
    }
    
    while (true)
    {
        int precision = stream_1->precision;
        stream_1->precision = precision - 1;
        
        if (precision <= 0)
            break;
        
        __pformat_putc(0x30, stream_1);
    }
    
    __pformat_putc((stream_1->flags & 0x20) | 0x50, stream_1);
    stream_1->width += rbp_1;
    stream_1->flags |= 0x1c0;
    /* tailcall */
    return __pformat_int(value, rdi_1, value);
}

int32_t __mingw_pformat(int flags, void* dest, int max, char const* fmt, char* argv)
{
    char* argv_1 = argv;
    int32_t* rax;
    int64_t r9;
    float128 x;
    rax = _errno();
    int32_t _Character = *fmt;
    int32_t rdi_1 = flags & 0x6000;
    int32_t _ErrorMessage = *rax;
    int16_t var_58 = 0;
    char _Character_1 = _Character;
    void* rbx_1 = &fmt[1];
    struct stream;
    stream.quota = 0xffffffff;
    stream.expmin = 0xfffffffd;
    stream.rpchr = dest;
    stream.thousands_chr_len = *dest[4];
    stream.thousands_chr = rdi_1;
    stream.count = 0xffffffff;
    int16_t var_60 = 0;
    int32_t var_5c = 0;
    int32_t var_54 = 0;
    int32_t var_4c = 0xffffffff;
    
    if (!_Character)
        return _Character;
    
    do
    {
        if (_Character != 0x25)
        {
            int32_t r8 = stream.thousands_chr;
            int32_t rax_1;
            
            if (!(r8 & 0x4000))
                rax_1 = var_54;
            
            if (r8 & 0x4000 || max > rax_1)
            {
                FILE* _Stream;
                _Stream = stream.rpchr;
                *_Stream[4] = stream.thousands_chr_len;
                
                if (r8 & 0x2000)
                {
                    int64_t r9_1;
                    r9_1 = fputc(_Character, _Stream);
                    rax_1 = var_54;
                }
                else
                {
                    *(_Stream + var_54) = _Character_1;
                    rax_1 = var_54;
                }
            }
            
            var_54 = rax_1 + 1;
        }
        else
        {
            char rax_4 = *rbx_1;
            stream.thousands_chr = rdi_1;
            stream.count = 0xffffffff;
            stream.quota = 0xffffffff;
            
            if (!rax_4)
                break;
            
            void* rsi_1 = rbx_1;
            int* r10_1 = &stream.count;
            int32_t r15_1 = 0;
            int32_t r14_1 = 0;
            
            while (true)
            {
                int32_t rcx = rax_4;
                int32_t rax_15;
                uint64_t* rcx_3;
                double rdx_8;
                double rdx_11;
                int80_t* rdx_13;
                void* argv_2;
                void* argv_3;
                
                if (rax_4 - 0x20 > 0x5a)
                {
                    label_14000434b:
                    
                    if (rax_4 - 0x30 > 9 || r14_1 > 3)
                    {
                        label_140004b45:
                        int64_t r9_29;
                        r9_29 = __pformat_putc(0x25, &stream.rpchr);
                        break;
                        break;
                    }
                    
                    if (r14_1)
                        goto label_140004aea;
                    
                    r14_1 = 1;
                    label_14000436c:
                    
                    if (!r10_1)
                    {
                        rax_4 = *(rsi_1 + 1);
                        rsi_1 += 1;
                    }
                    else
                    {
                        uint64_t rax_6 = *r10_1;
                        
                        if (rax_6 < 0)
                        {
                            rax_4 = *(rsi_1 + 1);
                            rsi_1 += 1;
                            *r10_1 = rcx - 0x30;
                        }
                        else
                        {
                            *r10_1 = rcx + ((rax_6 * 5) << 1) - 0x30;
                            rax_4 = *(rsi_1 + 1);
                            rsi_1 += 1;
                        }
                    }
                }
                else
                    switch (rax_4)
                    {
                        case 0x20:
                        {
                            if (r14_1)
                            {
                                rax_4 = *(rsi_1 + 1);
                                rsi_1 += 1;
                            }
                            else
                            {
                                rax_4 = *(rsi_1 + 1);
                                stream.thousands_chr |= 0x40;
                                rsi_1 += 1;
                            }
                            break;
                        }
                        case 0x21:
                        case 0x22:
                        case 0x24:
                        case 0x26:
                        case 0x28:
                        case 0x29:
                        case 0x2c:
                        case 0x2f:
                        case 0x31:
                        case 0x32:
                        case 0x33:
                        case 0x34:
                        case 0x35:
                        case 0x36:
                        case 0x37:
                        case 0x38:
                        case 0x39:
                        case 0x3a:
                        case 0x3b:
                        case 0x3c:
                        case 0x3d:
                        case 0x3e:
                        case 0x3f:
                        case 0x40:
                        case 0x42:
                        case 0x44:
                        case 0x48:
                        case 0x4a:
                        case 0x4b:
                        case 0x4d:
                        case 0x4e:
                        case 0x4f:
                        case 0x50:
                        case 0x51:
                        case 0x52:
                        case 0x54:
                        case 0x55:
                        case 0x56:
                        case 0x57:
                        case 0x59:
                        case 0x5a:
                        case 0x5b:
                        case 0x5c:
                        case 0x5d:
                        case 0x5e:
                        case 0x5f:
                        case 0x60:
                        case 0x62:
                        case 0x6b:
                        case 0x71:
                        case 0x72:
                        case 0x76:
                        case 0x77:
                        case 0x79:
                        {
                            goto label_14000434b;
                        }
                        case 0x23:
                        {
                            if (r14_1)
                            {
                                rax_4 = *(rsi_1 + 1);
                                rsi_1 += 1;
                            }
                            else
                            {
                                rax_4 = *(rsi_1 + 1);
                                stream.thousands_chr |= 0x800;
                                rsi_1 += 1;
                            }
                            break;
                        }
                        case 0x25:
                        {
                            rbx_1 = rsi_1 + 1;
                            int64_t r9_15;
                            r9_15 = __pformat_putc(0x25, &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x27:
                        {
                            if (!r14_1)
                            {
                                stream.thousands_chr |= 0x1000;
                                stream.flags = 0;
                                struct lconv* rax_23 = localeconv();
                                int32_t rax_24;
                                int64_t r9_17;
                                rax_24 = mbrtowc(&*stream.dest[6], rax_23->thousands_sep, 0x10, &stream.flags);
                                
                                if (rax_24 > 0)
                                    int16_t var_58_1 = *stream.dest[6];
                                
                                int32_t var_5c_1 = rax_24;
                            }
                            
                            rax_4 = *(rsi_1 + 1);
                            rsi_1 += 1;
                            break;
                        }
                        case 0x2a:
                        {
                            if (!r10_1)
                            {
                                label_140004891:
                                rax_4 = *(rsi_1 + 1);
                                r14_1 = 4;
                                rsi_1 += 1;
                            }
                            else if (r14_1 & 0xfffffffd)
                            {
                                rax_4 = *(rsi_1 + 1);
                                r10_1 = nullptr;
                                rsi_1 += 1;
                                r14_1 = 4;
                            }
                            else
                            {
                                int rax_25 = *argv_1;
                                *r10_1 = rax_25;
                                
                                if (rax_25 >= 0)
                                    goto label_14000483b;
                                
                                if (r14_1)
                                {
                                    rax_4 = *(rsi_1 + 1);
                                    argv_1 = &argv_1[8];
                                    rsi_1 += 1;
                                    r10_1 = nullptr;
                                    stream.quota = 0xffffffff;
                                    r14_1 = 2;
                                }
                                else
                                {
                                    stream.thousands_chr |= 0x400;
                                    stream.count = -(stream.count);
                                    label_14000483b:
                                    rax_4 = *(rsi_1 + 1);
                                    argv_1 = &argv_1[8];
                                    rsi_1 += 1;
                                    r10_1 = nullptr;
                                }
                            }
                            break;
                        }
                        case 0x2b:
                        {
                            if (r14_1)
                            {
                                rax_4 = *(rsi_1 + 1);
                                rsi_1 += 1;
                            }
                            else
                            {
                                rax_4 = *(rsi_1 + 1);
                                stream.thousands_chr |= 0x100;
                                rsi_1 += 1;
                            }
                            break;
                        }
                        case 0x2d:
                        {
                            if (r14_1)
                            {
                                rax_4 = *(rsi_1 + 1);
                                rsi_1 += 1;
                            }
                            else
                            {
                                rax_4 = *(rsi_1 + 1);
                                stream.thousands_chr |= 0x400;
                                rsi_1 += 1;
                            }
                            break;
                        }
                        case 0x2e:
                        {
                            if (r14_1 > 1)
                                goto label_140004891;
                            
                            rax_4 = *(rsi_1 + 1);
                            r14_1 = 2;
                            rsi_1 += 1;
                            stream.quota = 0;
                            r10_1 = &stream.quota;
                            break;
                        }
                        case 0x30:
                        {
                            if (r14_1)
                            {
                                if (r14_1 > 3)
                                    goto label_140004b45;
                                
                                rcx = 0x30;
                                label_140004aea:
                                
                                if (r14_1 != 2)
                                    goto label_14000436c;
                                
                                r14_1 = 3;
                                goto label_14000436c;
                            }
                            
                            rax_4 = *(rsi_1 + 1);
                            stream.thousands_chr |= 0x200;
                            rsi_1 += 1;
                            break;
                        }
                        case 0x41:
                        {
                            rax_15 = stream.thousands_chr;
                            rcx_3 = *argv_1;
                            argv_1 = &argv_1[8];
                            
                            if (rax_15 & 4)
                                goto label_14000455d;
                            
                            goto label_1400048e2;
                        }
                        case 0x43:
                        {
                            stream.quota = 0xffffffff;
                            argv_3 = &argv_1[8];
                            label_140004980:
                            int16_t rax_30 = *argv_1;
                            argv_1 = argv_3;
                            rbx_1 = rsi_1 + 1;
                            stream.flags = rax_30;
                            int64_t r9_22;
                            r9_22 = __pformat_wputchars(&stream.flags, 1, &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x45:
                        {
                            rdx_8 = *argv_1;
                            argv_1 = &argv_1[8];
                            
                            if (stream.thousands_chr & 4)
                                goto label_140004663;
                            
                            goto label_1400049ca;
                        }
                        case 0x46:
                        {
                            rdx_11 = *argv_1;
                            argv_1 = &argv_1[8];
                            
                            if (stream.thousands_chr & 4)
                                goto label_1400046f9;
                            
                            goto label_140004a02;
                        }
                        case 0x47:
                        {
                            rdx_13 = *argv_1;
                            argv_1 = &argv_1[8];
                            
                            if (stream.thousands_chr & 4)
                                goto label_140004731;
                            
                            goto label_140004a3a;
                        }
                        case 0x49:
                        {
                            rax_4 = *(rsi_1 + 1);
                            
                            if (rax_4 == 0x36)
                            {
                                if (*(rsi_1 + 2) != 0x34)
                                    goto label_140004b45;
                                
                                rax_4 = *(rsi_1 + 3);
                                r15_1 = 3;
                                rsi_1 += 3;
                                r14_1 = 4;
                            }
                            else if (rax_4 == 0x33)
                            {
                                if (*(rsi_1 + 2) != 0x32)
                                    goto label_140004b45;
                                
                                rax_4 = *(rsi_1 + 3);
                                r15_1 = 2;
                                rsi_1 += 3;
                                r14_1 = 4;
                            }
                            else
                            {
                                rsi_1 += 1;
                                r15_1 = 3;
                                r14_1 = 4;
                            }
                            break;
                        }
                        case 0x4c:
                        {
                            rax_4 = *(rsi_1 + 1);
                            stream.thousands_chr |= 4;
                            rsi_1 += 1;
                            r14_1 = 4;
                            break;
                        }
                        case 0x53:
                        {
                            argv_2 = &argv_1[8];
                            label_140004a99:
                            short unsigned int* r12 = *argv_1;
                            
                            if (!r12)
                                r12 = u"(null)";
                            
                            int quota = stream.quota;
                            int count;
                            
                            if (quota < 0)
                                count = wcslen(r12);
                            else
                                count = wcsnlen(r12, quota);
                            
                            argv_1 = argv_2;
                            int64_t r9_27;
                            r9_27 = __pformat_wputchars(r12, count, &stream.rpchr);
                            goto label_140004ad7;
                        }
                        case 0x58:
                        case 0x6f:
                        case 0x75:
                        case 0x78:
                        {
                            stream.thousands_chr &= 0xfffffeff;
                            uint64_t value_2;
                            
                            if (r15_1 == 3)
                            {
                                value_2 = *argv_1;
                                stream.flags = value_2;
                                stream.width = *value_2[4];
                            }
                            else
                            {
                                value_2 = *argv_1;
                                
                                if (r15_1 == 2)
                                {
                                    stream.flags = value_2;
                                    stream.width = *value_2[4];
                                }
                                else if (r15_1 == 1)
                                {
                                    value_2 = value_2;
                                    stream.flags = value_2;
                                    stream.width = *value_2[4];
                                }
                                else
                                {
                                    if (r15_1 == 5)
                                        value_2 = value_2;
                                    
                                    stream.flags = value_2;
                                    stream.width = *value_2[4];
                                }
                            }
                            
                            if (rcx == 0x75)
                            {
                                argv_1 = &argv_1[8];
                                rbx_1 = rsi_1 + 1;
                                int64_t r9_30;
                                r9_30 = __pformat_int(value_2);
                            }
                            else
                            {
                                argv_1 = &argv_1[8];
                                rbx_1 = rsi_1 + 1;
                                int64_t r9_2;
                                r9_2 = __pformat_xint();
                            }
                            
                            break;
                            break;
                            break;
                        }
                        case 0x61:
                        {
                            rcx_3 = *argv_1;
                            argv_1 = &argv_1[8];
                            rax_15 = stream.thousands_chr | 0x20;
                            stream.thousands_chr = rax_15;
                            int64_t r9_26;
                            
                            if (rax_15 & 4)
                            {
                                label_14000455d:
                                int16_t rbx_4 = rcx_3[1];
                                uint64_t value = *rcx_3;
                                int32_t r10_2 = rbx_4;
                                int32_t r9_9 = (value >> 0x20 & 0x7fffffff) | value;
                                
                                if ((0xfffe - ((-(r9_9) | r9_9) >> 0x1f | (r10_2 * 2))) >> 0x10)
                                    goto label_140004b05;
                                
                                if (rbx_4 < 0)
                                {
                                    rax_15 |= 0x80;
                                    stream.thousands_chr = rax_15;
                                }
                                
                                int16_t rdx_7 = rbx_4 & 0x7fff;
                                
                                if (!rdx_7)
                                {
                                    r9_26 = __pformat_emit_xfloat(value);
                                    goto label_140004ad7;
                                }
                                
                                if (rdx_7 != 0x7fff || r9_9)
                                {
                                    r9_26 = __pformat_emit_xfloat(value);
                                    goto label_140004ad7;
                                }
                                
                                int64_t r9_31;
                                r9_31 = __pformat_emit_inf_or_nan(r10_2 & 0x8000, "Inf", &stream.rpchr);
                                goto label_140004ad7;
                            }
                            
                            label_1400048e2:
                            uint32_t r8_9 = rcx_3 >> 0x20;
                            double var_c8_2;
                            var_c8_2 = rcx_3;
                            
                            if (0x7ff00000 - ((-(rcx_3) | rcx_3) >> 0x1f | (r8_9 & 0x7fffffff)) < 0)
                            {
                                label_140004b05:
                                int64_t r9_28;
                                r9_28 = __pformat_emit_inf_or_nan(0, "NaN", &stream.rpchr);
                                label_140004ad7:
                                rbx_1 = rsi_1 + 1;
                                break;
                                break;
                            }
                            
                            int32_t var_c0;
                            
                            if (var_c0 < 0)
                            {
                                rax_15 |= 0x80;
                                stream.thousands_chr = rax_15;
                            }
                            
                            int32_t r8_10 = r8_9 & 0x7ff00000;
                            int32_t rax_28 = (r8_9 & 0xfffff) | rcx_3;
                            rcx_3 = rax_28;
                            rcx_3 |= r8_10 != 0x7ff00000;
                            
                            if (!rcx_3 && rax_28 | r8_10)
                            {
                                int64_t r9_21;
                                r9_21 = __pformat_emit_inf_or_nan(var_c0 & 0x8000, "Inf", &stream.rpchr);
                                goto label_140004ad7;
                            }
                            
                            double rax_34 = var_c8_2;
                            int32_t rdx_24;
                            rdx_24 = var_c0 & 0x7fff;
                            
                            if (!rdx_24)
                                label_140004b7c:
                            else if (rdx_24 > 0x3c00)
                            {
                                if (!rdx_24)
                                    goto label_140004b7c;
                                
                                rdx_24 -= 0x3ffc;
                            }
                            else
                            {
                                rax_34 u>>= (0x3c01 - rdx_24);
                                rdx_24 = (rdx_24 + 0x3c01 - rdx_24) - 0x3ffc;
                            }
                            
                            r9_26 = __pformat_emit_xfloat(rax_34 >> 3);
                            goto label_140004ad7;
                        }
                        case 0x63:
                        {
                            argv_3 = &argv_1[8];
                            stream.quota = 0xffffffff;
                            
                            if (r15_1 - 2 <= 1)
                                goto label_140004980;
                            
                            stream.flags = *argv_1;
                            argv_1 = argv_3;
                            rbx_1 = rsi_1 + 1;
                            int64_t r9_5;
                            r9_5 = __pformat_putchars(&stream.flags, 1, &stream.rpchr);
                            break;
                            break;
                        }
                        case 0x64:
                        case 0x69:
                        {
                            stream.thousands_chr |= 0x80;
                            int64_t rcx_1;
                            
                            if (r15_1 == 3)
                            {
                                rcx_1 = *argv_1;
                                stream.flags = rcx_1;
                                stream.width = *rcx_1[4];
                            }
                            else
                            {
                                rcx_1 = *argv_1;
                                
                                if (r15_1 == 2)
                                {
                                    stream.flags = rcx_1;
                                    stream.width = *rcx_1[4];
                                }
                                else if (r15_1 == 1)
                                {
                                    rcx_1 = rcx_1;
                                    stream.flags = rcx_1;
                                    stream.width = *rcx_1[4];
                                }
                                else
                                {
                                    if (r15_1 == 5)
                                        rcx_1 = rcx_1;
                                    
                                    stream.flags = rcx_1;
                                    stream.width = *rcx_1[4];
                                }
                            }
                            
                            argv_1 = &argv_1[8];
                            rbx_1 = rsi_1 + 1;
                            int64_t rax_11 = rcx_1 >> 0x3f;
                            stream.precision = rax_11;
                            stream.rplen = *rax_11[4];
                            int64_t r9_3;
                            r9_3 = __pformat_int();
                            break;
                            break;
                            break;
                        }
                        case 0x65:
                        {
                            rdx_8 = *argv_1;
                            argv_1 = &argv_1[8];
                            int32_t rax_17 = stream.thousands_chr | 0x20;
                            stream.thousands_chr = rax_17;
                            
                            if (rax_17 & 4)
                            {
                                label_140004663:
                                rbx_1 = rsi_1 + 1;
                                int80_t var_a8_1 = *rdx_8;
                                int64_t r9_11;
                                r9_11 = __pformat_efloat(x, &stream.rpchr);
                                break;
                                break;
                            }
                            
                            label_1400049ca:
                            rbx_1 = rsi_1 + 1;
                            long double var_a8_4 = rdx_8;
                            int64_t r9_23;
                            r9_23 = __pformat_efloat(x, &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x66:
                        {
                            rdx_11 = *argv_1;
                            argv_1 = &argv_1[8];
                            int32_t rax_20 = stream.thousands_chr | 0x20;
                            stream.thousands_chr = rax_20;
                            
                            if (rax_20 & 4)
                            {
                                label_1400046f9:
                                rbx_1 = rsi_1 + 1;
                                int80_t var_a8_2 = *rdx_11;
                                int64_t r9_13;
                                r9_13 = __pformat_float(x, &stream.rpchr);
                                break;
                                break;
                            }
                            
                            label_140004a02:
                            rbx_1 = rsi_1 + 1;
                            long double var_a8_5 = rdx_11;
                            int64_t r9_24;
                            r9_24 = __pformat_float(x, &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x67:
                        {
                            rdx_13 = *argv_1;
                            argv_1 = &argv_1[8];
                            int32_t rax_22 = stream.thousands_chr | 0x20;
                            stream.thousands_chr = rax_22;
                            
                            if (rax_22 & 4)
                            {
                                label_140004731:
                                rbx_1 = rsi_1 + 1;
                                int80_t var_a8_3 = *rdx_13;
                                int64_t r9_14;
                                r9_14 = __pformat_gfloat(x, &stream.rpchr);
                                break;
                                break;
                            }
                            
                            label_140004a3a:
                            rbx_1 = rsi_1 + 1;
                            long double var_a8_6 = rdx_13;
                            int64_t r9_25;
                            r9_25 = __pformat_gfloat(x, &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x68:
                        {
                            rax_4 = *(rsi_1 + 1);
                            
                            if (rax_4 == 0x68)
                            {
                                rax_4 = *(rsi_1 + 2);
                                r15_1 = 5;
                                rsi_1 += 2;
                                r14_1 = 4;
                            }
                            else
                            {
                                rsi_1 += 1;
                                r15_1 = 1;
                                r14_1 = 4;
                            }
                            break;
                        }
                        case 0x6a:
                        case 0x74:
                        case 0x7a:
                        {
                            rax_4 = *(rsi_1 + 1);
                            r15_1 = 3;
                            rsi_1 += 1;
                            r14_1 = 4;
                            break;
                        }
                        case 0x6c:
                        {
                            rax_4 = *(rsi_1 + 1);
                            
                            if (rax_4 == 0x6c)
                            {
                                rax_4 = *(rsi_1 + 2);
                                r15_1 = 3;
                                rsi_1 += 2;
                                r14_1 = 4;
                            }
                            else
                            {
                                rsi_1 += 1;
                                r15_1 = 2;
                                r14_1 = 4;
                            }
                            break;
                        }
                        case 0x6d:
                        {
                            rbx_1 = rsi_1 + 1;
                            int64_t r9_12;
                            r9_12 = __pformat_puts(strerror(_ErrorMessage), &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x6e:
                        {
                            int64_t* rdx_6 = *argv_1;
                            int64_t rax_13 = var_54;
                            argv_1 = &argv_1[8];
                            
                            if (r15_1 == 5)
                            {
                                *rdx_6 = rax_13;
                                goto label_140004ad7;
                            }
                            
                            if (r15_1 == 1)
                            {
                                *rdx_6 = rax_13;
                                rbx_1 = rsi_1 + 1;
                            }
                            else if (r15_1 == 2 || r15_1 != 3)
                            {
                                *rdx_6 = rax_13;
                                rbx_1 = rsi_1 + 1;
                            }
                            else
                            {
                                *rdx_6 = rax_13;
                                rbx_1 = rsi_1 + 1;
                            }
                            
                            break;
                            break;
                        }
                        case 0x70:
                        {
                            if (!r14_1 && stream.thousands_chr == rdi_1)
                            {
                                stream.quota = 0x10;
                                int32_t rax_36;
                                *rax_36[1] = *rdi_1[1] | 2;
                                stream.thousands_chr = rax_36;
                            }
                            
                            int64_t value_1 = *argv_1;
                            stream.precision = 0;
                            stream.rplen = 0;
                            argv_1 = &argv_1[8];
                            rbx_1 = rsi_1 + 1;
                            stream.flags = value_1;
                            stream.width = *value_1[4];
                            int64_t r9_10;
                            r9_10 = __pformat_xint(0x78, value_1);
                            break;
                            break;
                            break;
                        }
                        case 0x73:
                        {
                            char* s = *argv_1;
                            argv_2 = &argv_1[8];
                            
                            if (r15_1 - 2 <= 1)
                                goto label_140004a99;
                            
                            argv_1 = argv_2;
                            rbx_1 = rsi_1 + 1;
                            int64_t r9_4;
                            r9_4 = __pformat_puts(s, &stream.rpchr);
                            break;
                            break;
                        }
                    }
                
                if (!rax_4)
                    return var_54;
            }
        }
        
        _Character_1 = *rbx_1;
        rbx_1 += 1;
        _Character = _Character_1;
    } while (_Character);
    
    return var_54;
}

void* __rv_alloc_D2A(int i)
{
    int k = 0;
    
    if (i > 0x1b)
    {
        int32_t rax_1 = 4;
        
        do
        {
            rax_1 *= 2;
            k += 1;
        } while (rax_1 + 0x17 < i);
    }
    
    int64_t* rax_2 = __Balloc_D2A(k);
    *rax_2 = k;
    return rax_2 + 4;
}

void* __nrv_alloc_D2A(char* s, char** rve, int n)
{
    int k;
    
    if (n <= 0x1b)
        k = 0;
    else
    {
        int32_t rax_1 = 4;
        k = 0;
        
        do
        {
            rax_1 *= 2;
            k += 1;
        } while (n > rax_1 + 0x17);
    }
    
    int64_t* rax_2 = __Balloc_D2A(k);
    char* rdx_1 = &s[1];
    *rax_2 = k;
    char rcx_1 = *s;
    *(rax_2 + 4) = rcx_1;
    char* rax_3 = rax_2 + 4;
    
    if (rcx_1)
    {
        char i;
        
        do
        {
            i = *rdx_1;
            rax_3 = &rax_3[1];
            rdx_1 = &rdx_1[1];
            *rax_3 = i;
        } while (i);
    }
    
    if (rve)
        *rve = rax_3;
    
    return rax_2 + 4;
}

int64_t __freedtoa(char* s)
{
    int32_t rcx = *(s - 4);
    *(s + 4) = rcx;
    *(s + 8) = 1 << rcx;
    /* tailcall */
    return __Bfree_D2A(&s[-4]);
}

uint32_t __quorem_D2A(struct __Bigint* b, struct __Bigint* S)
{
    int wds = S->wds;
    
    if (b->wds < wds)
        return 0;
    
    int rsi = wds - 1;
    long unsigned int (* rbx_1)[0x1] = &S->x;
    void* rdi_1 = &rbx_1[rsi];
    void* r10_3 = &(&b->x)[rsi];
    int32_t r8_1 = *r10_3;
    int32_t rcx = *rdi_1 + 1;
    uint32_t result_1 = COMBINE(0, r8_1) / rcx;
    uint32_t result = result_1;
    
    if (r8_1 >= rcx)
    {
        long unsigned int (* r9_1)[0x1] = rbx_1;
        long unsigned int (* r8_2)[0x1] = &b->x;
        uint64_t r14_1 = 0;
        uint64_t rdx_1 = 0;
        
        do
        {
            uint64_t x = ADJ(r9_1)->x;
            uint64_t x_1 = ADJ(r8_2)->x;
            r9_1 = &r9_1[1];
            r8_2 = &r8_2[1];
            int64_t rax_5 = x * result_1 + r14_1;
            r14_1 = rax_5 >> 0x20;
            uint64_t rcx_1 = x_1 - (rax_5 + rdx_1);
            ADJ(r8_2)->wds = rcx_1;
            rdx_1 = rcx_1 >> 0x20 & 1;
        } while (rdi_1 >= r9_1);
    }
    
    if (r8_1 >= rcx && !*r10_3)
    {
        while (true)
        {
            r10_3 -= 4;
            
            if (&b->x >= r10_3)
                break;
            
            if (*r10_3)
                break;
            
            rsi -= 1;
        }
        
        b->wds = rsi;
        
        if (__cmp_D2A(b, S) >= 0)
            goto label_140004eb6;
    }
    else if (__cmp_D2A(b, S) >= 0)
    {
        label_140004eb6:
        long unsigned int (* r8_3)[0x1] = &b->x;
        result = result_1 + 1;
        uint64_t rax_10 = 0;
        
        do
        {
            uint64_t x_2 = ADJ(rbx_1)->x;
            uint64_t x_3 = ADJ(r8_3)->x;
            rbx_1 = &rbx_1[1];
            r8_3 = &r8_3[1];
            uint64_t rdx_5 = x_3 - (rax_10 + x_2);
            ADJ(r8_3)->wds = rdx_5;
            rax_10 = rdx_5 >> 0x20 & 1;
        } while (rdi_1 >= rbx_1);
        
        void* rax_15 = &(&b->x)[rsi];
        
        if (!*rax_15)
        {
            while (true)
            {
                rax_15 -= 4;
                
                if (&b->x >= rax_15)
                    break;
                
                if (*rax_15)
                    break;
                
                rsi -= 1;
            }
            
            b->wds = rsi;
        }
    }
    
    return result;
}

char* __gdtoa(struct FPI const* fpi, int be, long unsigned int* bits, int* kindp, int mode, int ndigits, int* decpt, char** rve)
{
    int128_t zmm6;
    int128_t var_58 = zmm6;
    int rsi = *kindp;
    int mode_1 = mode;
    int* kindp_1 = kindp;
    int ndigits_1 = ndigits;
    *kindp = rsi & 0xffffffcf;
    int32_t rax_7 = rsi & 7;
    char* rcx;
    char** rve_1;
    int r8;
    
    if (rax_7 == 3)
    {
        rve_1 = rve;
        r8 = 8;
        rcx = "Infinity";
        *decpt = 0xffff8000;
    }
    else
    {
        uint32_t rdi_2 = rsi & 4;
        uint32_t var_b0_1 = rdi_2;
        
        if (!rdi_2)
        {
            if (!rax_7)
            {
                *decpt = 1;
                return __nrv_alloc_D2A(U"0", rve, 1);
            }
            
            char* result = nullptr;
            
            if (rax_7 - 1 <= 1)
            {
                int nbits = fpi->nbits;
                int32_t rax_12 = 0x20;
                int k_2 = 0;
                
                if (nbits > 0x20)
                {
                    do
                    {
                        rax_12 *= 2;
                        k_2 += 1;
                    } while (nbits > rax_12);
                }
                
                int64_t* r13_1 = __Balloc_D2A(k_2);
                long unsigned int* bits_1 = bits;
                void* rdx_1 = &r13_1[3];
                int64_t r8_5 = (nbits - 1) >> 5 << 2;
                void* rcx_2 = bits_1 + r8_5;
                
                do
                {
                    long unsigned int r9_1 = *bits_1;
                    bits_1 = &bits_1[1];
                    rdx_1 += 4;
                    *(rdx_1 - 4) = r9_1;
                } while (rcx_2 >= bits_1);
                
                int64_t rax_14 = r8_5 + 4;
                
                if (rcx_2 + 1 < bits + 1)
                    rax_14 = 4;
                
                int64_t rax_15 = rax_14 >> 2;
                int32_t rbp_1 = rax_15;
                void* rax_16 = r13_1 + (rax_15 << 2);
                
                while (true)
                {
                    int32_t rdx_3 = rbp_1;
                    rbp_1 -= 1;
                    
                    if (*(rax_16 + 0x14))
                    {
                        *(r13_1 + 0x14) = rdx_3;
                        uint64_t rflags_1;
                        int32_t temp0_1;
                        temp0_1 = __bsr_gprv_memv(*(r13_1 + (rbp_1 << 2) + 0x18));
                        rbp_1 = (rdx_3 << 5) - (temp0_1 ^ 0x1f);
                        break;
                    }
                    
                    rax_16 -= 4;
                    
                    if (!rbp_1)
                    {
                        *(r13_1 + 0x14) = 0;
                        break;
                    }
                }
                
                int32_t k_1 = __trailz_D2A(r13_1);
                int32_t e = k_1;
                int be_1 = be;
                
                if (k_1)
                {
                    __rshift_D2A(r13_1, k_1);
                    be_1 = be + e;
                    rbp_1 -= e;
                }
                
                if (!*(r13_1 + 0x14))
                {
                    __Bfree_D2A(r13_1);
                    *decpt = 1;
                    return __nrv_alloc_D2A(U"0", rve, 1);
                }
                
                double zmm0_2 = __b2d_D2A(r13_1, &e);
                int32_t r8_6 = be_1 + rbp_1;
                uint64_t rcx_9 = (zmm0_2 >> 0x20 & 0xfffff) | 0x3ff00000;
                uint128_t zmm1;
                zmm1 = r8_6 - 1;
                zmm1 = zmm1 * 0.30102999566398098;
                uint64_t rax_21 = zmm0_2 | rcx_9 << 0x20;
                int32_t r10_6 = -((r8_6 - 1));
                
                if (r10_6 < 0)
                    r10_6 = r8_6 - 1;
                
                zmm0_2 = (rax_21 - 1.5) * 0.28952965460216801 + 0.1760912590558 + zmm1;
                
                if (r10_6 - 0x435 > 0)
                {
                    zmm1 = r10_6 - 0x435;
                    zmm1 = zmm1 * 7.0000000000000003e-17;
                    zmm0_2 = zmm0_2 + zmm1;
                }
                
                int32_t k_10 = zmm0_2;
                
                if (0.0 > zmm0_2)
                {
                    zmm1 = k_10;
                    zmm1 - zmm0_2;
                    
                    if (FCMP_UO(zmm1, zmm0_2) || !(zmm1 == zmm0_2))
                        k_10 -= 1;
                }
                
                uint64_t rax_23 = rax_21 | (rcx_9 + ((r8_6 - 1) << 0x14)) << 0x20;
                void var_78;
                var_78 = rax_23;
                int32_t rax_25 = rbp_1 - (r8_6 - 1);
                int32_t e_14 = rax_25 - 1;
                int32_t e_13;
                int32_t k_11;
                int32_t k;
                int32_t var_7c_1;
                
                if (k_10 > 0x16)
                {
                    var_7c_1 = 1;
                    label_1400052f8:
                    e_13 = 0;
                    
                    if (e_14 < 0)
                    {
                        label_140005905:
                        e_14 = 0;
                        e_13 = 1 - rax_25;
                    }
                    
                    if (k_10 >= 0)
                        goto label_1400055a1;
                    
                    e_13 -= k_10;
                    int32_t k_8 = -(k_10);
                    k_11 = k_10;
                    k_10 = 0;
                    k = k_8;
                }
                else
                {
                    if (!(__tens_D2A[k_10] <= rax_23))
                    {
                        var_7c_1 = 0;
                        k_10 -= 1;
                        goto label_1400052f8;
                    }
                    
                    var_7c_1 = 0;
                    e_13 = 0;
                    
                    if (e_14 < 0)
                        goto label_140005905;
                    
                    label_1400055a1:
                    k_11 = k_10;
                    e_14 += k_10;
                    k = 0;
                }
                
                int32_t k_12;
                char* result_2;
                int32_t i_1;
                int32_t var_90_1;
                uint32_t var_88_2;
                int32_t i_4;
                char i_3;
                int k_5;
                struct __Bigint* b_9;
                int32_t e_11;
                int32_t k_14;
                int32_t e_12;
                int32_t k_9;
                struct __Bigint* r12_2;
                uint128_t zmm0_3;
                uint128_t zmm2;
                
                if (mode_1 > 9)
                {
                    mode_1 = 0;
                    label_1400055ea:
                    e = nbits * 0.30103000000000002 + 3;
                    k_9 = k_10;
                    e_12 = e_14;
                    result = __rv_alloc_D2A(nbits * 0.30103000000000002 + 3);
                    int32_t e_2;
                    int emin;
                    
                    if (be_1 < 0)
                    {
                        int32_t r12_3 = nbits - rbp_1;
                        emin = fpi->emin;
                        ndigits_1 = 0;
                        e_2 = r12_3 + 1;
                        var_88_2 = 0;
                        e = e_2;
                        i_1 = 0xffffffff;
                        i_4 = 0xffffffff;
                        
                        if (be_1 - r12_3 < emin)
                        {
                            if (!((mode_1 - 3) & 0xfffffffd))
                            {
                                label_140005f50:
                                
                                if (mode_1 <= 1)
                                    goto label_1400056a1;
                            }
                            else
                            {
                                label_140005678:
                                e_2 = be_1 - emin + 1;
                                int32_t rcx_23;
                                rcx_23 = mode_1 > 1;
                                e = e_2;
                                emin = i_1 > 0;
                                
                                if (!(rcx_23 & emin) || e_2 <= i_1)
                                    goto label_1400056a1;
                            }
                            
                            if (k < i_1 - 1)
                            {
                                int32_t rdx_49 = i_1 - 1 - k;
                                k_5 = 0;
                                k = i_1 - 1;
                                k_9 += rdx_49;
                            }
                            else
                                k_5 = k - (i_1 - 1);
                            
                            if (i_1 < 0)
                            {
                                e = 0;
                                e_11 = e_13 - i_1;
                                goto label_1400056b5;
                            }
                            
                            e = i_1;
                            e_12 += i_1;
                            e_11 = e_13;
                            e_13 += i_1;
                            goto label_1400056b5;
                        }
                        
                        label_1400056a1:
                        e_12 += e_2;
                        k_5 = k;
                        e_11 = e_13;
                        e_13 += e_2;
                        label_1400056b5:
                        var_78 = e_12;
                        var_90_1 = 1;
                        e_12 = var_78;
                        r12_2 = __i2b_D2A(1);
                        label_1400056e6:
                        
                        if (e_11 > 0 && e_12 > 0)
                        {
                            int32_t e_3 = e_12;
                            
                            if (e_11 <= e_12)
                                e_3 = e_11;
                            
                            e_13 -= e_3;
                            e = e_3;
                            e_11 -= e_3;
                            e_12 -= e_3;
                        }
                        
                        if (k)
                        {
                            if (!var_90_1)
                            {
                                var_78 = e_12;
                                e_12 = var_78;
                                r13_1 = __pow5mult_D2A(r13_1, k);
                            }
                            else
                            {
                                if (k_5 > 0)
                                {
                                    var_78 = k_9;
                                    struct __Bigint* a = __pow5mult_D2A(r12_2, k_5);
                                    r12_2 = a;
                                    be_1 = __mult_D2A(a, r13_1);
                                    __Bfree_D2A(r13_1);
                                    r13_1 = be_1;
                                    k_9 = var_78;
                                }
                                
                                if (k != k_5)
                                    r13_1 = __pow5mult_D2A(r13_1, k - k_5);
                            }
                        }
                        
                        int32_t k_7 = k_9;
                        int32_t e_15 = e_12;
                        b_9 = __i2b_D2A(1);
                        struct __Bigint* rax_56;
                        rax_56 = mode_1 <= 1;
                        bool rdx_24 = rbp_1 == 1 & rax_56;
                        int32_t var_a0_2;
                        
                        if (k_7 <= 0)
                        {
                            var_a0_2 = 0;
                            
                            if (rdx_24 && fpi->emin + 1 < be)
                                goto label_1400063fb;
                            
                            goto label_1400057bb;
                        }
                        
                        struct __Bigint* b_10 = __pow5mult_D2A(b_9, k_7);
                        k_7 = k_9;
                        e_15 = e_12;
                        b_9 = b_10;
                        int32_t rbx_1;
                        uint64_t rflags_2;
                        int32_t temp0_4;
                        
                        if (rdx_24 && be > fpi->emin + 1)
                        {
                            label_1400063fb:
                            e_13 += 1;
                            e_15 += 1;
                            var_a0_2 = 1;
                            label_1400057bb:
                            rbx_1 = 0x1f;
                            
                            if (k_7)
                            {
                                temp0_4 = __bsr_gprv_memv((&b_9->x)[b_9->wds - 1]);
                                rbx_1 = temp0_4 ^ 0x1f;
                            }
                        }
                        else
                        {
                            var_a0_2 = 0;
                            temp0_4 = __bsr_gprv_memv((&b_9->x)[b_9->wds - 1]);
                            rbx_1 = temp0_4 ^ 0x1f;
                        }
                        int32_t e_10 = (rbx_1 - e_15 - 4) & 0x1f;
                        int k_6 = e_13 + e_10;
                        e = e_10;
                        int32_t e_6 = e_10;
                        
                        if (k_6 > 0)
                        {
                            int64_t* rax_57 = __lshift_D2A(r13_1, k_6);
                            e_6 = e;
                            r13_1 = rax_57;
                        }
                        
                        int k_3 = e_6 + e_15;
                        
                        if (k_3 > 0)
                            b_9 = __lshift_D2A(b_9, k_3);
                        
                        bool rbp_3 = mode_1 > 2;
                        
                        if (!var_7c_1)
                        {
                            label_140005832:
                            
                            if (i_1 <= 0 && rbp_3)
                                goto label_140005847;
                            
                            k_12 = k_11 + 1;
                            
                            if (!var_90_1)
                                goto label_140005e94;
                            
                            goto label_140005b07;
                        }
                        
                        if (__cmp_D2A(r13_1, b_9) >= 0)
                            goto label_140005832;
                        
                        r13_1 = __multadd_D2A(r13_1, 0xa, 0);
                        int32_t rax_106;
                        rax_106 = i_4 <= 0;
                        char rbp_5 = rbp_3 & rax_106;
                        int32_t var_d8;
                        char rdx_42;
                        struct __Bigint* r8_11;
                        
                        if (var_90_1)
                        {
                            r12_2 = __multadd_D2A(r12_2, 0xa, 0);
                            
                            if (rbp_5)
                            {
                                label_140006537:
                                k_11 -= 1;
                                i_1 = i_4;
                                label_140005847:
                                
                                if (i_1)
                                    goto label_140005d39;
                                
                                struct __Bigint* b = __multadd_D2A(b_9, 5, 0);
                                b_9 = b;
                                
                                if (__cmp_D2A(r13_1, b) <= 0)
                                    goto label_140005d39;
                                
                                k_12 = k_11 + 2;
                                goto label_140005880;
                            }
                            
                            k_12 = k_11;
                            i_1 = i_4;
                            label_140005b07:
                            int k_4 = e_10 + e_11;
                            
                            if (k_4 > 0)
                                r12_2 = __lshift_D2A(r12_2, k_4);
                            
                            struct __Bigint* b_7 = r12_2;
                            
                            if (var_a0_2)
                            {
                                struct __Bigint* b_2 = __Balloc_D2A(r12_2->k);
                                memcpy(&b_2->sign, &r12_2->sign, (r12_2->wds << 2) + 8);
                                b_7 = __lshift_D2A(b_2, 1);
                            }
                            
                            var_90_1 = kindp_1;
                            int32_t e_4 = 1;
                            struct __Bigint* b_3 = b_7;
                            char* result_1 = result;
                            e_13 = result;
                            
                            while (true)
                            {
                                e = e_4;
                                uint32_t rax_83 = __quorem_D2A(r13_1, b_9);
                                int rax_84 = __cmp_D2A(r13_1, r12_2);
                                int64_t* rax_85 = __diff_D2A(b_9, b_3);
                                char* result_3;
                                int rdx_32;
                                struct __Bigint* b_8;
                                
                                if (rax_85[2])
                                {
                                    __Bfree_D2A(rax_85);
                                    rdx_32 = 1;
                                }
                                else
                                {
                                    var_a0_2 = rax_85;
                                    int rax_86 = __cmp_D2A(r13_1, rax_85);
                                    __Bfree_D2A(var_a0_2);
                                    rdx_32 = rax_86 | mode_1;
                                    
                                    if (rdx_32)
                                        rdx_32 = rax_86;
                                    else
                                    {
                                        long unsigned int rax_88 = *bits;
                                        long unsigned int var_a8_2 = rax_88;
                                        
                                        if (!((rax_88 & 1) | var_88_2))
                                        {
                                            var_d8 = rax_83 + 0x30;
                                            result = e_13;
                                            result_3 = result_1;
                                            b_8 = b_3;
                                            kindp_1 = var_90_1;
                                            
                                            if (rax_83 == 9)
                                                goto label_140006514;
                                            
                                            if (rax_84 <= 0)
                                            {
                                                var_b0_1 = 0x10;
                                                
                                                if (*(r13_1 + 0x14) <= 1)
                                                {
                                                    int32_t rax_161;
                                                    rax_161 = r13_1[3];
                                                    var_b0_1 = rax_161 << 4;
                                                }
                                            }
                                            else
                                            {
                                                var_b0_1 = 0x20;
                                                var_d8 = rax_83 + 0x31;
                                            }
                                            
                                            r8_11 = r12_2;
                                            r12_2 = b_8;
                                            *result_3 = var_d8;
                                            result_2 = &result_3[1];
                                            goto label_140005cc3;
                                        }
                                    }
                                }
                                
                                void* result_4;
                                
                                if (rax_84 < 0 || (!(rax_84 | mode_1) && !(*bits & 1)))
                                {
                                    var_d8 = rax_83 + 0x30;
                                    result_3 = result_1;
                                    result = e_13;
                                    b_8 = b_3;
                                    kindp_1 = var_90_1;
                                    
                                    if (!var_88_2)
                                    {
                                        if (rdx_32 <= 0)
                                            goto label_1400064e8;
                                        
                                        label_1400064b7:
                                        struct __Bigint* a_2 = __lshift_D2A(r13_1, 1);
                                        r13_1 = a_2;
                                        int rax_145 = __cmp_D2A(a_2, b_9);
                                        
                                        if (rax_145 <= 0 && (rax_145 || !(var_d8 & 1)))
                                        {
                                            var_88_2 = 0x20;
                                            label_1400064e8:
                                            
                                            if (*(r13_1 + 0x14) > 1)
                                            {
                                                label_1400064f8:
                                                r8_11 = r12_2;
                                                var_b0_1 = 0x10;
                                                r12_2 = b_8;
                                                result_4 = &result_3[1];
                                                goto label_140006275;
                                            }
                                            
                                            r8_11 = r12_2;
                                            r12_2 = b_8;
                                            
                                            if (!r13_1[3])
                                            {
                                                var_b0_1 = var_88_2;
                                                result_4 = &result_3[1];
                                            }
                                            else
                                            {
                                                var_b0_1 = 0x10;
                                                result_4 = &result_3[1];
                                            }
                                            
                                            goto label_140006275;
                                        }
                                        
                                        if (var_d8 != 0x39)
                                        {
                                            var_88_2 = 0x20;
                                            var_d8 = rax_83 + 0x31;
                                            goto label_1400064e8;
                                        }
                                        
                                        label_140006514:
                                        result_4 = &result_3[1];
                                    }
                                    else
                                    {
                                        if (*(r13_1 + 0x14) <= 1 && !r13_1[3])
                                        {
                                            if (rdx_32 > 0)
                                                goto label_1400064b7;
                                            
                                            r8_11 = r12_2;
                                            r12_2 = b_8;
                                            result_4 = &result_3[1];
                                            label_140006275:
                                            result_2 = result_4;
                                            *result_3 = var_d8;
                                            goto label_140005cc3;
                                        }
                                        
                                        if (var_88_2 == 2)
                                            goto label_1400064f8;
                                        
                                        var_b0_1 = kindp_1;
                                        int32_t rbx_16 = var_d8;
                                        struct __Bigint* b_4 = b_8;
                                        var_d8 = result;
                                        char* result_5 = result_3;
                                        
                                        while (__cmp_D2A(b_9, b_4) > 0)
                                        {
                                            *result_5 = rbx_16;
                                            result_5 = &result_5[1];
                                            struct __Bigint* b_6 = __multadd_D2A(b_4, 0xa, 0);
                                            
                                            if (r12_2 == b_4)
                                                r12_2 = b_6;
                                            
                                            struct __Bigint* b_1 = __multadd_D2A(r13_1, 0xa, 0);
                                            b_4 = b_6;
                                            r13_1 = b_1;
                                            rbx_16 = __quorem_D2A(b_1, b_9) + 0x30;
                                        }
                                        
                                        result_3 = result_5;
                                        result_4 = &result_5[1];
                                        result = var_d8;
                                        b_8 = b_4;
                                        kindp_1 = var_b0_1;
                                        
                                        if (rbx_16 != 0x39)
                                        {
                                            var_b0_1 = 0x20;
                                            r8_11 = r12_2;
                                            r12_2 = b_8;
                                            var_d8 = rbx_16 + 1;
                                            goto label_140006275;
                                        }
                                    }
                                }
                                else
                                {
                                    result_4 = &result_1[1];
                                    result_2 = result_4;
                                    
                                    if (rdx_32 <= 0 || var_88_2 == 2)
                                    {
                                        *(result_4 - 1) = (rax_83 + 0x30);
                                        
                                        if (e == i_1)
                                        {
                                            var_d8 = rax_83 + 0x30;
                                            r8_11 = r12_2;
                                            result = e_13;
                                            kindp_1 = var_90_1;
                                            r12_2 = b_3;
                                            break;
                                        }
                                        
                                        r13_1 = __multadd_D2A(r13_1, 0xa, 0);
                                        
                                        if (r12_2 == b_3)
                                        {
                                            struct __Bigint* b_5 = __multadd_D2A(r12_2, 0xa, 0);
                                            r12_2 = b_5;
                                            b_3 = b_5;
                                        }
                                        else
                                        {
                                            r12_2 = __multadd_D2A(r12_2, 0xa, 0);
                                            b_3 = __multadd_D2A(b_3, 0xa, 0);
                                        }
                                        
                                        result_1 = result_4;
                                        e_4 = e + 1;
                                        continue;
                                    }
                                    else
                                    {
                                        result = e_13;
                                        result_3 = result_1;
                                        b_8 = b_3;
                                        kindp_1 = var_90_1;
                                        
                                        if (rax_83 != 9)
                                        {
                                            r8_11 = r12_2;
                                            var_b0_1 = 0x20;
                                            r12_2 = b_8;
                                            *result_3 = (rax_83 + 0x30) + 1;
                                            goto label_140005cc3;
                                        }
                                    }
                                }
                                
                                r8_11 = r12_2;
                                result_2 = result_4;
                                r12_2 = b_8;
                                rdx_42 = 0x39;
                                *result_3 = 0x39;
                                goto label_140005f37;
                            }
                        }
                        else
                        {
                            if (rbp_5)
                                goto label_140006537;
                            
                            k_12 = k_11;
                            i_1 = i_4;
                            label_140005e94:
                            result_2 = result;
                            int32_t e_5 = 1;
                            int32_t rax_113;
                            
                            while (true)
                            {
                                e = e_5;
                                result_2 = &result_2[1];
                                rax_113 = __quorem_D2A(r13_1, b_9) + 0x30;
                                result_2[-1] = rax_113;
                                
                                if (e >= i_1)
                                    break;
                                
                                r13_1 = __multadd_D2A(r13_1, 0xa, 0);
                                e_5 = e + 1;
                            }
                            
                            var_d8 = rax_113;
                            r8_11 = nullptr;
                        }
                        
                        if (!var_88_2)
                        {
                            struct __Bigint* a_1 = __lshift_D2A(r13_1, 1);
                            r13_1 = a_1;
                            int rax_124 = __cmp_D2A(a_1, b_9);
                            
                            if (rax_124 > 0 || (!rax_124 && var_d8 & 1))
                            {
                                label_140005f13:
                                rdx_42 = result_2[-1];
                                label_140005f37:
                                
                                while (true)
                                {
                                    if (rdx_42 != 0x39)
                                    {
                                        var_b0_1 = 0x20;
                                        result_2[-1] = rdx_42 + 1;
                                        break;
                                    }
                                    
                                    if (&result_2[-1] == result)
                                    {
                                        k_12 += 1;
                                        *result = 0x31;
                                        var_b0_1 = 0x20;
                                        break;
                                    }
                                    
                                    rdx_42 = result_2[-2];
                                    result_2 = &result_2[-1];
                                }
                            }
                            else
                            {
                                label_14000616d:
                                
                                if (*(r13_1 + 0x14) <= 1)
                                {
                                    uint32_t rax_156 = 0x10;
                                    
                                    if (!r13_1[3])
                                        rax_156 = var_b0_1;
                                    
                                    var_b0_1 = rax_156;
                                }
                                else
                                    var_b0_1 = 0x10;
                            }
                        }
                        else
                        {
                            if (var_88_2 == 2)
                                goto label_14000616d;
                            
                            if (*(r13_1 + 0x14) > 1 || r13_1[3])
                                goto label_140005f13;
                        }
                        
                        label_140005cc3:
                        var_d8 = r8_11;
                        __Bfree_D2A(b_9);
                        
                        if (!r12_2)
                            goto label_1400058a8;
                        
                        struct __Bigint* v = var_d8;
                        
                        if (v && v != r12_2)
                            __Bfree_D2A(v);
                        
                        goto label_140005cf0;
                    }
                    
                    if (k_11 > fpi->int_max)
                    {
                        ndigits_1 = 0;
                        var_88_2 = 0;
                        i_1 = 0xffffffff;
                        i_4 = 0xffffffff;
                        label_140005645:
                        int32_t r12_1 = nbits - rbp_1;
                        emin = fpi->emin;
                        e_2 = r12_1 + 1;
                        e = e_2;
                        
                        if (be_1 - r12_1 >= emin || !((mode_1 - 3) & 0xfffffffd))
                            goto label_140005f50;
                        
                        goto label_140005678;
                    }
                    
                    var_88_2 = 0;
                    i_1 = 0xffffffff;
                    zmm2 = __tens_D2A[k_11];
                    label_140005fb8:
                    zmm0_3 = var_78;
                    result_2 = &result[1];
                    e = 1;
                    zmm1 = zmm0_3 / zmm2;
                    k_12 = k_11 + 1;
                    int32_t rax_121 = zmm1;
                    zmm1 = rax_121;
                    *result = rax_121 + 0x30;
                    zmm1 = zmm1 * zmm2;
                    zmm0_3 = zmm0_3 - zmm1;
                    zmm0_3 - 0.0;
                    
                    if (!FCMP_UO(zmm0_3, 0.0) && zmm0_3 == 0.0)
                        goto label_1400058a8;
                    
                    while (true)
                    {
                        int32_t e_7 = e;
                        
                        if (e_7 == i_1)
                            break;
                        
                        zmm0_3 = zmm0_3 * 10.0;
                        result_2 = &result_2[1];
                        e = e_7 + 1;
                        zmm1 = zmm0_3 / zmm2;
                        rax_121 = zmm1;
                        zmm1 = rax_121;
                        result_2[-1] = rax_121 + 0x30;
                        zmm1 = zmm1 * zmm2;
                        zmm0_3 = zmm0_3 - zmm1;
                        zmm0_3 - 0.0;
                        
                        if (!FCMP_UO(zmm0_3, 0.0))
                        {
                            if (zmm0_3 == 0.0)
                                goto label_1400058a8;
                        }
                    }
                    
                    if (var_88_2)
                    {
                        var_b0_1 = 0x10;
                        
                        if (var_88_2 != 1)
                            goto label_1400058a8;
                        
                        goto label_140006082;
                    }
                    
                    zmm0_3 = zmm0_3 + zmm0_3;
                    
                    if (!(zmm0_3 > zmm2))
                    {
                        zmm0_3 - zmm2;
                        var_b0_1 = 0x10;
                        
                        if (FCMP_UO(zmm0_3, zmm2) || zmm0_3 != zmm2 || !(rax_121 & 1))
                            goto label_1400058a8;
                        
                        goto label_140006082;
                    }
                    
                    label_140006082:
                    i_3 = result_2[-1];
                    k_14 = k_11;
                    label_140005566:
                    
                    while (i_3 == 0x39)
                    {
                        if (&result_2[-1] == result)
                        {
                            *result = 0x30;
                            k_14 += 1;
                            i_3 = result_2[-1];
                            break;
                        }
                        
                        i_3 = result_2[-2];
                        result_2 = &result_2[-1];
                    }
                    
                    var_b0_1 = 0x20;
                    result_2[-1] = i_3 + 1;
                    k_12 = k_14 + 1;
                    label_1400058a8:
                    
                    if (result_2 > result)
                    {
                        while (result_2[-1] == 0x30)
                        {
                            result_2 -= 1;
                            
                            if (result_2 == result)
                                break;
                        }
                    }
                    else
                    {
                        result_2 = result_2;
                        result = result;
                    }
                }
                else
                {
                    bool rdi_7;
                    
                    if (mode_1 > 5)
                    {
                        rdi_7 = false;
                        mode_1 -= 4;
                    }
                    else
                        rdi_7 = r8_6 + 0x3fd <= 0x7f7;
                    
                    int i_2;
                    
                    if (mode_1 != 3)
                    {
                        if (mode_1 <= 3)
                        {
                            if (mode_1 != 2)
                                goto label_1400055ea;
                            
                            var_90_1 = 0;
                        }
                        else
                        {
                            if (mode_1 != 4)
                            {
                                int32_t i_6 = ndigits_1 + k_11;
                                i_4 = i_6;
                                i_1 = i_6 + 1;
                                e = i_6 + 1;
                                
                                if (i_6 + 1 <= 0)
                                {
                                    var_90_1 = 1;
                                    goto label_1400060c6;
                                }
                                
                                var_90_1 = 1;
                                k_9 = k_10;
                                e_12 = e_14;
                                result = __rv_alloc_D2A(i_1);
                                goto label_1400053c8;
                            }
                            
                            var_90_1 = 1;
                        }
                        
                        int rax_69 = 1;
                        
                        if (ndigits_1 > 0)
                            rax_69 = ndigits_1;
                        
                        ndigits_1 = rax_69;
                        i_2 = rax_69;
                        e = rax_69;
                        i_4 = rax_69;
                        i_1 = rax_69;
                        goto label_1400059f0;
                    }
                    
                    int32_t i_7 = ndigits_1 + k_11;
                    i_4 = i_7;
                    i_1 = i_7 + 1;
                    e = i_7 + 1;
                    
                    if (i_7 + 1 <= 0)
                    {
                        var_90_1 = 0;
                        label_1400060c6:
                        e = 1;
                        i_2 = 1;
                        label_1400059f0:
                        k_9 = k_10;
                        e_12 = e_14;
                        result = __rv_alloc_D2A(i_2);
                        
                        if (mode_1 > 1)
                            goto label_1400053c8;
                        
                        var_88_2 = 0;
                        label_1400053fd:
                        void* rax_35;
                        rax_35 = i_1 <= 0xe;
                        rax_35 &= rdi_7;
                        char r8_8 = rax_35;
                        
                        if (!rax_35 || var_88_2 | k_11)
                            goto label_140005a7c;
                        
                        e = 0;
                        zmm0_3 = var_78;
                        uint64_t rax_41;
                        int32_t i_5;
                        
                        if (!var_7c_1 || !(0x3ff0000000000000 > zmm0_3))
                        {
                            zmm1 = zmm0_3 + zmm0_3;
                            zmm1 = zmm1 + 7.0;
                            rax_41 = zmm1 | ((zmm1 >> 0x20) - 0x3400000) << 0x20;
                            
                            if (!i_1)
                                goto label_140005a40;
                            
                            i_5 = i_1;
                            k_14 = 0;
                            label_14000548f:
                            zmm2 = rax_41;
                            double zmm3 = __tens_D2A[i_5 - 1];
                            bool cond:21_1;
                            bool cond:22_1;
                            
                            if (!var_90_1)
                            {
                                zmm1 = zmm0_3;
                                result_2 = result;
                                int32_t e_8 = 1;
                                uint128_t zmm4_2;
                                zmm4_2 = zmm2 * zmm3;
                                char rcx_67 = 0;
                                
                                while (true)
                                {
                                    int32_t rax_130 = zmm1;
                                    e = e_8;
                                    
                                    if (rax_130)
                                    {
                                        rcx_67 = r8_8;
                                        zmm1 = zmm1 - rax_130;
                                    }
                                    
                                    result_2 = &result_2[1];
                                    i_3 = rax_130 + 0x30;
                                    result_2[-1] = i_3;
                                    int32_t e_9 = e;
                                    
                                    if (e_9 == i_5)
                                        break;
                                    
                                    zmm1 = zmm1 * 0x4024000000000000;
                                    e_8 = e_9 + 1;
                                    rcx_67 = r8_8;
                                }
                                
                                if (!rcx_67)
                                    zmm1 = zmm0_3;
                                
                                zmm0_3 = 0x3fe0000000000000;
                                zmm2 = zmm4_2 + zmm0_3;
                                
                                if (zmm1 > zmm2)
                                    goto label_140005566;
                                
                                zmm0_3 = zmm0_3 - zmm4_2;
                                
                                if (zmm0_3 <= zmm1)
                                    goto label_140005a69;
                                
                                zmm1 - 0.0;
                                cond:21_1 = FCMP_UO(zmm1, 0.0);
                                cond:22_1 = zmm1 != 0.0;
                            }
                            else
                            {
                                int32_t rax_44 = zmm0_3;
                                result_2 = &result[1];
                                zmm1 = 0x3fe0000000000000 / zmm3;
                                zmm1 = zmm1 - zmm2;
                                zmm2 = rax_44;
                                *result = rax_44 + 0x30;
                                zmm0_3 = zmm0_3 - zmm2;
                                
                                if (!(zmm1 > zmm0_3))
                                {
                                    zmm3 = 10.0;
                                    
                                    while (true)
                                    {
                                        zmm2 = 0x3ff0000000000000 - zmm0_3;
                                        
                                        if (!(zmm1 <= zmm2))
                                        {
                                            i_3 = result_2[-1];
                                            break;
                                        }
                                        
                                        int32_t e_1 = e + 1;
                                        e = e_1;
                                        
                                        if (e_1 >= i_5)
                                            goto label_140005a69;
                                        
                                        zmm0_3 = zmm0_3 * zmm3;
                                        result_2 = &result_2[1];
                                        zmm1 = zmm1 * zmm3;
                                        int32_t rax_46 = zmm0_3;
                                        zmm2 = rax_46;
                                        result_2[-1] = rax_46 + 0x30;
                                        zmm0_3 = zmm0_3 - zmm2;
                                        
                                        if (zmm1 > zmm0_3)
                                            goto label_14000654b;
                                    }
                                    
                                    goto label_140005566;
                                }
                                
                                label_14000654b:
                                zmm0_3 - 0.0;
                                cond:21_1 = FCMP_UO(zmm0_3, 0.0);
                                cond:22_1 = zmm0_3 != 0.0;
                            }
                            
                            uint32_t rax_131 = cond:21_1;
                            
                            if (cond:22_1)
                                rax_131 = 1;
                            
                            var_b0_1 = rax_131 << 4;
                            k_12 = k_14 + 1;
                            goto label_1400058a8;
                        }
                        
                        if (!i_1)
                        {
                            zmm1 = zmm0_3 + zmm0_3;
                            zmm1 = zmm1 + 7.0;
                            rax_41 = zmm1 | ((zmm1 >> 0x20) - 0x3400000) << 0x20;
                            label_140005a40:
                            zmm0_3 = zmm0_3 - 5.0;
                            zmm1 = rax_41;
                            
                            if (!(zmm0_3 > zmm1))
                            {
                                if (__xorpd_xmmxuq_memxuq(zmm1, data_1400095b0) > zmm0_3)
                                    goto label_140005d2d;
                                
                                goto label_140005a69;
                            }
                            
                            k_12 = 2;
                            b_9 = nullptr;
                            r12_2 = nullptr;
                            label_140005880:
                            *result = 0x31;
                            result_2 = &result[1];
                            __Bfree_D2A(b_9);
                            var_b0_1 = 0x20;
                            
                            if (!r12_2)
                                goto label_1400058a8;
                            
                            label_140005cf0:
                            __Bfree_D2A(r12_2);
                            goto label_1400058a8;
                        }
                        
                        i_5 = i_4;
                        
                        if (i_5 > 0)
                        {
                            zmm0_3 = zmm0_3 * 10.0;
                            k_14 = -1;
                            zmm1 = 0x4008000000000000 * zmm0_3;
                            zmm1 = zmm1 + 7.0;
                            rax_41 = zmm1 | ((zmm1 >> 0x20) - 0x3400000) << 0x20;
                            goto label_14000548f;
                        }
                        
                        label_140005a69:
                        var_88_2 = 0;
                    }
                    else
                    {
                        var_90_1 = 0;
                        k_9 = k_10;
                        e_12 = e_14;
                        result = __rv_alloc_D2A(i_1);
                        label_1400053c8:
                        int rounding = fpi->rounding;
                        var_88_2 = rounding - 1;
                        
                        if (rounding == 1)
                            goto label_1400053fd;
                        
                        uint32_t rax_36 = 2;
                        
                        if (rounding - 1 >= 0)
                            rax_36 = rounding - 1;
                        
                        var_88_2 = rax_36;
                        
                        if (rsi & 8)
                        {
                            var_88_2 = 3 - rax_36;
                            goto label_1400053fd;
                        }
                    }
                    
                    label_140005a7c:
                    
                    if (be_1 < 0 || fpi->int_max < k_11)
                    {
                        if (var_90_1)
                            goto label_140005645;
                        
                        k_5 = k;
                        e_11 = e_13;
                        r12_2 = nullptr;
                        goto label_1400056e6;
                    }
                    
                    int64_t k_13 = k_11;
                    zmm2 = __tens_D2A[k_13];
                    
                    if (ndigits_1 >= 0 || i_1 > 0)
                        goto label_140005fb8;
                    
                    if (!i_1)
                    {
                        zmm2 = zmm2 * 5.0;
                        
                        if (zmm2 >= var_78)
                            goto label_140005d2d;
                        
                        b_9 = nullptr;
                        r12_2 = nullptr;
                        k_12 = k_13 + 2;
                        goto label_140005880;
                    }
                    
                    label_140005d2d:
                    b_9 = nullptr;
                    r12_2 = nullptr;
                    label_140005d39:
                    result_2 = result;
                    k_12 = -(ndigits_1);
                    __Bfree_D2A(b_9);
                    var_b0_1 = 0x10;
                    
                    if (r12_2)
                        goto label_140005cf0;
                    
                    result_2 = result;
                    result = result;
                }
                __Bfree_D2A(r13_1);
                *result_2 = 0;
                *decpt = k_12;
                
                if (rve)
                    *rve = result_2;
                
                *kindp_1 |= var_b0_1;
            }
            
            return result;
        }
        
        if (rax_7 != 4)
            return nullptr;
        
        rve_1 = rve;
        r8 = 3;
        rcx = &data_140009549;
        *decpt = 0xffff8000;
    }
    
    /* tailcall */
    return __nrv_alloc_D2A(rcx, rve_1, r8);
}

void __rshift_D2A(struct __Bigint* b, int k)
{
    int64_t wds = b->wds;
    int32_t rbp_1 = k >> 5;
    
    if (wds <= rbp_1)
        b->wds = 0;
    else
    {
        int64_t rbp_2 = rbp_1;
        void* r11_1 = &(&b->x)[wds];
        void* rsi_1 = &(&b->x)[rbp_2];
        int32_t rdx = k & 0x1f;
        void* rax_4;
        
        if (!rdx)
        {
            int32_t* rdi_2 = &b->x;
            
            if (r11_1 > rsi_1)
            {
                do
                {
                    *rdi_2 = *rsi_1;
                    rdi_2 = &rdi_2[1];
                    rsi_1 += 4;
                } while (r11_1 > rsi_1);
                
                rax_4 = &(&b->x)[wds - rbp_2];
                goto label_140006760;
            }
            
            b->wds = 0;
        }
        else
        {
            void* r8_1 = rsi_1 + 4;
            uint32_t r9_2 = *rsi_1 >> rdx;
            
            if (r11_1 > r8_1)
            {
                long unsigned int (* rsi_2)[0x1] = &b->x;
                
                do
                {
                    int32_t rax_1 = *r8_1;
                    rsi_2 = &rsi_2[1];
                    r8_1 += 4;
                    ADJ(rsi_2)->wds = rax_1 << (0x20 - rdx) | r9_2;
                    r9_2 = *(r8_1 - 4) >> rdx;
                } while (r11_1 > r8_1);
                
                rax_4 = &(&b->x)[wds - rbp_2 - 1];
                *rax_4 = r9_2;
                
                if (!r9_2)
                    goto label_140006760;
                
                goto label_140006713;
            }
            
            b->x = r9_2;
            
            if (!r9_2)
                b->wds = 0;
            else
            {
                rax_4 = &b->x;
                label_140006713:
                rax_4 += 4;
                label_140006760:
                int rax = (rax_4 - &b->x) >> 2;
                b->wds = rax;
                
                if (rax)
                    return;
            }
        }
    }
    
    b->x = 0;
}

int __trailz_D2A(struct __Bigint* b)
{
    int32_t result = 0;
    long unsigned int (* rax)[0x1] = &b->x;
    void* rcx = &rax[b->wds];
    
    if (rax < rcx)
    {
        do
        {
            long unsigned int x[0x1] = ADJ(rax)->x;
            
            if (x)
            {
                if (rcx > rax)
                    return result + _tzcnt_u32(x);
                
                break;
            }
            
            rax = &rax[1];
            result += 0x20;
        } while (rcx > rax);
    }
    
    return result;
}

long int dtoa_lock(unsigned int n)
{
    long int dtoa_CS_init_1 = dtoa_CS_init;
    
    if (dtoa_CS_init_1 != 2)
    {
        if (dtoa_CS_init_1)
        {
            if (dtoa_CS_init_1 != 1)
                return dtoa_CS_init_1;
            
            label_140006820:
            
            do
            {
                Sleep(1);
                dtoa_CS_init_1 = dtoa_CS_init;
            } while (dtoa_CS_init_1 == 1);
            
            goto label_140006822;
        }
        
        long int dtoa_CS_init_2 = dtoa_CS_init;
        dtoa_CS_init = 1;
        
        if (!dtoa_CS_init_2)
        {
            InitializeCriticalSection(&dtoa_CritSec);
            InitializeCriticalSection(&dtoa_CritSec[1]);
            atexit(dtoa_lock_cleanup);
            dtoa_CS_init = 2;
        }
        else if (dtoa_CS_init_2 == 2)
            dtoa_CS_init = 2;
        else
        {
            dtoa_CS_init_1 = dtoa_CS_init;
            
            if (dtoa_CS_init_1 == 1)
                goto label_140006820;
            
            label_140006822:
            
            if (dtoa_CS_init_1 != 2)
                return dtoa_CS_init_1;
        }
    }
    
    /* tailcall */
    return EnterCriticalSection(&dtoa_CritSec[n]);
}

void dtoa_lock_cleanup()
{
    long int dtoa_CS_init_1 = dtoa_CS_init;
    dtoa_CS_init = 3;
    
    if (dtoa_CS_init_1 != 2)
        return;
    
    DeleteCriticalSection(&dtoa_CritSec);
    /* tailcall */
    return DeleteCriticalSection(&dtoa_CritSec[1]);
}

int64_t* __Balloc_D2A(int k)
{
    dtoa_lock(0);
    int64_t* pmem_next_1;
    uint64_t rcx_3;
    int32_t rsi_1;
    
    if (k <= 9)
    {
        int64_t k_1 = k;
        pmem_next_1 = freelist[k_1];
        
        if (!pmem_next_1)
        {
            rsi_1 = 1 << k;
            pmem_next_1 = pmem_next;
            rcx_3 = (((rsi_1 + 9) << 2) + -ffffffffffffffff) >> 3;
            
            if (((pmem_next_1 - &private_mem) >> 3) + rcx_3 > 0x120)
                goto label_140006942;
            
            pmem_next = &pmem_next_1[rcx_3];
            label_14000694c:
            bool cond:1_1 = dtoa_CS_init == 2;
            pmem_next_1[1] = k;
            *(pmem_next_1 + 0xc) = rsi_1;
            
            if (cond:1_1)
            {
                LeaveCriticalSection(&dtoa_CritSec);
                pmem_next_1[2] = 0;
            }
            else
                pmem_next_1[2] = 0;
        }
        else
        {
            bool cond:0_1 = dtoa_CS_init != 2;
            freelist[k_1] = *pmem_next_1;
            
            if (cond:0_1)
                pmem_next_1[2] = 0;
            else
            {
                LeaveCriticalSection(&dtoa_CritSec);
                pmem_next_1[2] = 0;
            }
        }
    }
    else
    {
        rsi_1 = 1 << k;
        rcx_3 = ((rsi_1 << 2) + 0x23) >> 3;
        label_140006942:
        pmem_next_1 = malloc(rcx_3 << 3);
        
        if (pmem_next_1)
            goto label_14000694c;
    }
    return pmem_next_1;
}

void __Bfree_D2A(struct __Bigint* v)
{
    if (v)
    {
        if (v->k > 9)
            /* tailcall */
            return free(v);
        
        dtoa_lock(0);
        int64_t k = v->k;
        bool cond:0_1 = dtoa_CS_init == 2;
        int64_t rcx_1 = freelist[k];
        freelist[k] = v;
        v->next = rcx_1;
        
        if (cond:0_1)
            /* tailcall */
            return LeaveCriticalSection(&dtoa_CritSec);
    }
}

struct __Bigint* __multadd_D2A(struct __Bigint* b, int m, int a)
{
    int wds = b->wds;
    struct __Bigint* r12 = b;
    int64_t a_1 = a;
    int64_t rcx = 0;
    
    do
    {
        int64_t rax_3 = (&r12->x)[rcx] * m + a_1;
        (&r12->x)[rcx] = rax_3;
        rcx += 1;
        a_1 = rax_3 >> 0x20;
    } while (wds > rcx);
    
    struct __Bigint* result = r12;
    
    if (a_1)
    {
        if (r12->maxwds > wds)
            goto label_140006ad5;
        
        struct __Bigint* result_1 = __Balloc_D2A(r12->k + 1);
        result = result_1;
        
        if (result_1)
        {
            memcpy(&result_1->sign, &r12->sign, (r12->wds << 2) + 8);
            struct __Bigint* v = r12;
            r12 = result;
            __Bfree_D2A(v);
            label_140006ad5:
            result = r12;
            (&r12->x)[wds] = a_1;
            r12->wds = wds + 1;
        }
    }
    
    return result;
}

struct __Bigint* __i2b_D2A(int i)
{
    dtoa_lock(0);
    struct __Bigint* pmem_next_1 = freelist[1];
    
    if (!pmem_next_1)
    {
        pmem_next_1 = pmem_next;
        
        if (((pmem_next_1 - &private_mem) >> 3) + 5 <= 0x120)
        {
            pmem_next = pmem_next_1 + 0x28;
            label_140006bb6:
            bool cond:1_1 = dtoa_CS_init != 2;
            pmem_next_1->k = 1;
            pmem_next_1->maxwds = 2;
            
            if (cond:1_1)
                goto label_140006b5d;
            
            goto label_140006bcf;
        }
        
        pmem_next_1 = malloc(0x28);
        
        if (pmem_next_1)
            goto label_140006bb6;
    }
    else
    {
        bool cond:0_1 = dtoa_CS_init == 2;
        freelist[1] = pmem_next_1->next;
        
        if (!cond:0_1)
            goto label_140006b5d;
        
        label_140006bcf:
        LeaveCriticalSection(&dtoa_CritSec);
        label_140006b5d:
        pmem_next_1->x = i;
        pmem_next_1->sign = 0;
        pmem_next_1->wds = 1;
    }
    
    return pmem_next_1;
}

int64_t* __mult_D2A(struct __Bigint* a, struct __Bigint* b)
{
    int64_t wds = a->wds;
    int64_t wds_1 = b->wds;
    struct __Bigint* r13 = a;
    struct __Bigint* r15 = b;
    
    if (wds >= wds_1)
    {
        int32_t wds_2 = wds_1;
        r15 = a;
        wds_1 = wds;
        r13 = b;
        wds = wds_2;
    }
    
    int32_t i_1 = wds_1 + wds;
    int32_t rcx;
    rcx = r15->maxwds < i_1;
    int64_t* result = __Balloc_D2A(rcx + r15->k);
    
    if (result)
    {
        int32_t* r11_1 = &result[3];
        void* rsi_1 = &r11_1[i_1];
        
        if (r11_1 < rsi_1)
            r11_1 = memset(r11_1, 0, ((rsi_1 - result - 0x19) >> 2 << 2) + 4);
        
        long unsigned int (* r9_1)[0x1] = &r13->x;
        void* rbp = &r9_1[wds];
        void* rdi = &(&r15->x)[wds_1];
        
        if (r9_1 < rbp)
        {
            void* r13_1 = ((rdi - r15 - 0x19) >> 2 << 2) + 4;
            
            if (rdi < &r15->x[0] + 1)
                r13_1 = 4;
            
            while (true)
            {
                uint64_t x_1 = ADJ(r9_1)->x;
                r9_1 = &r9_1[1];
                
                if (!x_1)
                {
                    r11_1 = &r11_1[1];
                    
                    if (rbp <= r9_1)
                        break;
                }
                else
                {
                    int32_t* rcx_3 = r11_1;
                    long unsigned int (* rdx)[0x1] = &r15->x;
                    uint64_t r8_2 = 0;
                    
                    do
                    {
                        uint64_t x = ADJ(rdx)->x;
                        uint64_t r15_2 = *rcx_3;
                        rdx = &rdx[1];
                        rcx_3 = &rcx_3[1];
                        int64_t rax_13 = x * x_1 + r15_2 + r8_2;
                        rcx_3[-1] = rax_13;
                        r8_2 = rax_13 >> 0x20;
                    } while (rdi > rdx);
                    
                    *(r11_1 + r13_1) = r8_2;
                    r11_1 = &r11_1[1];
                    
                    if (rbp <= r9_1)
                        break;
                }
            }
        }
        
        if (i_1 > 0)
        {
            int32_t i;
            
            do
            {
                int32_t rax_14 = *(rsi_1 - 4);
                rsi_1 -= 4;
                
                if (rax_14)
                    break;
                
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
        
        *(result + 0x14) = i_1;
    }
    
    return result;
}

struct __Bigint* __pow5mult_D2A(struct __Bigint* b, int k)
{
    struct __Bigint* r13 = b;
    int32_t rax_1 = k & 3;
    
    if (rax_1)
    {
        struct __Bigint* rax_5 = __multadd_D2A(b, p05[rax_1 - 1], 0);
        r13 = rax_5;
        
        if (!rax_5)
            return 0;
    }
    
    int32_t rbx_1 = k >> 2;
    
    if (!rbx_1)
        return r13;
    
    struct __Bigint* p5s_1 = p5s;
    
    if (!p5s_1)
    {
        dtoa_lock(1);
        p5s_1 = p5s;
        
        if (!p5s_1)
        {
            struct __Bigint* p5s_2 = __Balloc_D2A(1);
            p5s_1 = p5s_2;
            
            if (!p5s_2)
            {
                p5s = nullptr;
                return nullptr;
            }
            
            p5s = p5s_1;
            p5s_1->wds = 1;
            p5s_1->x = 0x271;
            p5s_1->next = 0;
        }
        
        if (dtoa_CS_init == 2)
            LeaveCriticalSection(&dtoa_CritSec[1]);
    }
    
    struct __Bigint* a = r13;
    
    while (true)
    {
        if (!(rbx_1 & 1))
            goto label_140006da0;
        
        int64_t* a_1 = __mult_D2A(a, p5s_1);
        
        if (!a_1)
            return 0;
        
        if (!a)
        {
            a = a_1;
            label_140006da0:
            rbx_1 s>>= 1;
            
            if (!rbx_1)
                return a;
        }
        else
        {
            if (a->k <= 9)
            {
                dtoa_lock(0);
                int64_t k_1 = a->k;
                bool cond:1_1 = dtoa_CS_init != 2;
                int64_t rdx_1 = freelist[k_1];
                freelist[k_1] = a;
                a->next = rdx_1;
                a = a_1;
                
                if (!cond:1_1)
                    LeaveCriticalSection(&dtoa_CritSec);
                
                goto label_140006da0;
            }
            
            struct __Bigint* a_2 = a;
            a = a_1;
            free(a_2);
            rbx_1 s>>= 1;
            
            if (!rbx_1)
                return a;
        }
        
        int64_t* next = p5s_1->next;
        
        if (!next)
        {
            dtoa_lock(1);
            next = p5s_1->next;
            
            if (!next)
            {
                int64_t* next_1 = __mult_D2A(p5s_1, p5s_1);
                p5s_1->next = next_1;
                next = next_1;
                
                if (!next_1)
                    return 0;
                
                *next_1 = 0;
            }
            
            if (dtoa_CS_init == 2)
                LeaveCriticalSection(&dtoa_CritSec[1]);
        }
        
        p5s_1 = next;
    }
}

int64_t* __lshift_D2A(struct __Bigint* b, int k)
{
    int k_1 = b->k;
    int32_t rsi_1 = k >> 5;
    int maxwds = b->maxwds;
    int32_t rbp_1 = b->wds + rsi_1;
    
    while (rbp_1 + 1 > maxwds)
    {
        maxwds *= 2;
        k_1 += 1;
    }
    
    int64_t* result = __Balloc_D2A(k_1);
    
    if (result)
    {
        void* rdi_1 = &result[3];
        
        if (rsi_1 > 0)
        {
            void* rcx = rdi_1;
            int64_t _Size = rsi_1 << 2;
            rdi_1 += _Size;
            memset(rcx, 0, _Size);
        }
        
        void* rsi_3 = &b->x;
        void* r9_1 = rsi_3 + (b->wds << 2);
        int32_t rbx_1 = k & 0x1f;
        
        if (!rbx_1)
        {
            do
            {
                *rdi_1 = *rsi_3;
                void* rdi_2 = rdi_1 + 4;
                void* rsi_4 = rsi_3 + 4;
                
                if (r9_1 <= rsi_4)
                    break;
                
                *rdi_2 = *rsi_4;
                rdi_1 = rdi_2 + 4;
                rsi_3 = rsi_4 + 4;
            } while (r9_1 > rsi_3);
        }
        else
        {
            void* r8_2 = rdi_1;
            uint32_t rdx = 0;
            
            do
            {
                int32_t rax_1 = *rsi_3;
                r8_2 += 4;
                rsi_3 += 4;
                *(r8_2 - 4) = rax_1 << rbx_1 | rdx;
                rdx = *(rsi_3 - 4) >> (0x20 - rbx_1);
            } while (r9_1 > rsi_3);
            
            void* rax_8 = ((r9_1 - b - 0x19) >> 2 << 2) + 4;
            
            if (r9_1 < &b->x[0] + 1)
                rax_8 = 4;
            
            if (rdx)
                rbp_1 += 1;
            
            *(rdi_1 + rax_8) = rdx;
        }
        
        *(result + 0x14) = rbp_1;
        __Bfree_D2A(b);
    }
    
    return result;
}

int __cmp_D2A(struct __Bigint* a, struct __Bigint* b)
{
    int64_t wds = b->wds;
    int wds_1 = a->wds;
    int32_t result = wds_1 - wds;
    
    if (wds_1 == wds)
    {
        int64_t r8_1 = wds << 2;
        void* i = &a->x + r8_1;
        void* rdx = &b->x + r8_1;
        
        do
        {
            i -= 4;
            rdx -= 4;
            int32_t r10_1 = *rdx;
            int32_t temp1_1 = *i;
            
            if (temp1_1 != r10_1)
                return (result - result) | 1;
        } while (&a->x < i);
    }
    
    return result;
}

int64_t* __diff_D2A(struct __Bigint* a, struct __Bigint* b)
{
    int64_t wds = b->wds;
    int wds_2 = a->wds;
    struct __Bigint* a_1 = a;
    struct __Bigint* b_1 = b;
    int32_t rdi = wds_2 - wds;
    int64_t* result;
    
    if (wds_2 != wds)
    {
        rdi = 0;
        
        if (wds_2 - wds < 0)
        {
            label_140007243:
            struct __Bigint* rax_14 = a_1;
            rdi = 1;
            a_1 = b_1;
            b_1 = rax_14;
        }
    }
    else
    {
        int64_t rdx = wds << 2;
        void* rax = &a->x + rdx;
        void* rdx_1 = &b_1->x + rdx;
        int32_t r9_1;
        int32_t temp1_1;
        
        while (true)
        {
            rax -= 4;
            rdx_1 -= 4;
            r9_1 = *rdx_1;
            temp1_1 = *rax;
            
            if (temp1_1 != r9_1)
                break;
            
            if (&a->x >= rax)
            {
                int64_t* result_2 = __Balloc_D2A(0);
                result = result_2;
                
                if (!result_2)
                    goto label_140007230;
                
                *(result + 0x14) = 1;
                return result;
            }
        }
        
        if (temp1_1 < r9_1)
            goto label_140007243;
    }
    
    int64_t* result_1 = __Balloc_D2A(a_1->k);
    result = result_1;
    
    if (result_1)
    {
        result_1[2] = rdi;
        int64_t wds_1 = a_1->wds;
        void* rcx_2 = 0x18;
        uint64_t rdx_2 = 0;
        int32_t r9_2 = wds_1;
        void* r11_1 = &(&a_1->x)[wds_1];
        void* i = &(&b_1->x)[b_1->wds];
        int32_t r10_1;
        
        do
        {
            uint64_t rax_4 = *(a_1 + rcx_2) - rdx_2 - *(b_1 + rcx_2);
            *(result + rcx_2) = rax_4;
            rcx_2 += 4;
            r10_1 = rax_4;
            rdx_2 = rax_4 >> 0x20 & 1;
        } while (i > rcx_2 + b_1);
        
        void* rax_9 = (i - b_1 - 0x19) & 0xfffffffffffffffc;
        
        if (i < &b_1->x[0] + 1)
            rax_9 = nullptr;
        
        void* rsi = ((i - b_1 - 0x19) >> 2 << 2) + 4;
        void* rax_10 = rax_9 + &result[3];
        
        if (i < &b_1->x[0] + 1)
            rsi = 4;
        
        void* rbp_2 = &a_1->x + rsi;
        void* rsi_1 = rsi + &result[3];
        
        if (r11_1 > rbp_2)
        {
            void* rbx_2 = rsi_1;
            void* rcx_4 = rbp_2;
            
            do
            {
                uint64_t rax_11 = *rcx_4;
                rcx_4 += 4;
                rbx_2 += 4;
                uint64_t rax_12 = rax_11 - rdx_2;
                *(rbx_2 - 4) = rax_12;
                r10_1 = rax_12;
                rdx_2 = rax_12 >> 0x20 & 1;
            } while (r11_1 > rcx_4);
            
            rax_10 = rsi_1 + ((r11_1 - 1 - rbp_2) & 0xfffffffffffffffc);
        }
        
        if (!r10_1)
        {
            int32_t i_1;
            
            do
            {
                i_1 = *(rax_10 - 4);
                rax_10 -= 4;
                r9_2 -= 1;
            } while (!i_1);
        }
        
        *(result + 0x14) = r9_2;
    }
    
    label_140007230:
    return result;
}

uint64_t __b2d_D2A(struct __Bigint* a, int* e)
{
    void* rbx = &(&a->x)[a->wds];
    int32_t r11 = *(rbx - 4);
    uint64_t rflags;
    int32_t temp0;
    temp0 = _bit_scan_reverse(r11);
    int32_t rax_2 = temp0 ^ 0x1f;
    *e = 0x20 - rax_2;
    
    if (rax_2 <= 0xa)
    {
        uint32_t r9_2 = 0;
        
        if (&a->x < rbx - 4)
            r9_2 = *(rbx - 8) >> (0xb - rax_2);
        
        return (r11 >> (0xb - rax_2) | 0x3ff00000) << 0x20 | r11 << (rax_2 + 0x15) | r9_2;
    }
    
    uint64_t rdx_4;
    uint64_t r8_1;
    
    if (&a->x >= rbx - 4)
    {
        r8_1 = 0;
        
        if (rax_2 != 0xb)
            return (r11 << (rax_2 - 0xb) | 0x3ff00000) << 0x20;
        
        rdx_4 = (r11 | 0x3ff00000) << 0x20;
    }
    else
    {
        r8_1 = *(rbx - 8);
        
        if (rax_2 == 0xb)
            rdx_4 = (r11 | 0x3ff00000) << 0x20;
        else
        {
            int32_t rdx_2 = r11 << (rax_2 - 0xb) | r8_1 >> (0x20 - (rax_2 - 0xb));
            r8_1 = r8_1 << (rax_2 - 0xb);
            rdx_4 = (rdx_2 | 0x3ff00000) << 0x20;
            
            if (&a->x < rbx - 8)
                return rdx_4 | r8_1 | *(rbx - 0xc) >> (0x20 - (rax_2 - 0xb));
        }
    }
    
    return rdx_4 | r8_1;
}

int64_t* __d2b_D2A(double dd, int* e, int* bits)
{
    int64_t* result = __Balloc_D2A(1);
    
    if (result)
    {
        uint32_t rcx_2 = dd >> 0x20;
        uint32_t rdx_1 = rcx_2 & 0xfffff;
        int32_t rcx_4 = rcx_2 >> 0x14 & 0x7ff;
        
        if (rcx_4)
            rdx_1 |= 0x100000;
        
        int32_t rax_2;
        uint32_t r8_2;
        
        if (!dd)
        {
            rax_2 = 1;
            uint32_t temp0_3 = _tzcnt_u32(rdx_1);
            *(result + 0x14) = 1;
            r8_2 = temp0_3 + 0x20;
            result[3] = rdx_1 >> temp0_3;
            
            if (rcx_4)
            {
                label_14000748e:
                *e = rcx_4 + r8_2 - 0x433;
                *bits = 0x35 - r8_2;
                return result;
            }
        }
        else
        {
            r8_2 = _tzcnt_u32(dd);
            uint32_t rax_1 = dd >> r8_2;
            
            if (r8_2)
            {
                rax_1 |= rdx_1 << (0x20 - r8_2);
                rdx_1 u>>= r8_2;
            }
            
            result[3] = rax_1;
            rax_2 = 1 + 1;
            *(result + 0x1c) = rdx_1;
            *(result + 0x14) = rax_2;
            
            if (rcx_4)
                goto label_14000748e;
        }
        
        uint64_t rflags_1;
        int32_t temp0_2;
        temp0_2 = __bsr_gprv_memv(*(result + (rax_2 << 2) + 0x14));
        *e = r8_2 - 0x432;
        *bits = (rax_2 << 5) - (temp0_2 ^ 0x1f);
    }
    
    return result;
}

char* __strcp_D2A(char* a, char const* b)
{
    char* result = a;
    void* rcx = &b[1];
    char const rdx = *b;
    *result = rdx;
    
    if (rdx)
    {
        char i;
        
        do
        {
            i = *rcx;
            result = &result[1];
            rcx += 1;
            *result = i;
        } while (i);
    }
    
    return result;
}

long long unsigned int strnlen(char const* s, long long unsigned int maxlen)
{
    int64_t result = 0;
    char const* s_1 = s;
    
    if (maxlen)
    {
        while (*s_1)
        {
            s_1 = &s_1[1];
            result = s_1 - s;
            
            if (result >= maxlen)
                break;
        }
    }
    
    return result;
}

long long unsigned int wcsnlen(short unsigned int const* w, long long unsigned int ncnt)
{
    long long unsigned int r8 = 0;
    
    if (ncnt)
    {
        do
        {
            if (!w[r8])
                return r8;
            
            r8 += 1;
        } while (ncnt != r8);
    }
    
    return ncnt;
}

int* __p__fmode() __pure
{
    return _fmode;
}

int* __p__commode() __pure
{
    return _commode;
}

int64_t _lock_file(struct _iobuf* pf)
{
    if (pf >= __acrt_iob_func(0) && pf <= __acrt_iob_func(0x13))
    {
        int64_t result = _lock(((pf - __acrt_iob_func(0)) >> 4) * 0xaaaaaaab + 0x10);
        *(pf + 0x18) |= 0x8000;
        return result;
    }
    
    /* tailcall */
    return EnterCriticalSection(&pf[6]);
}

int64_t _unlock_file(struct _iobuf* pf)
{
    if (pf >= __acrt_iob_func(0) && pf <= __acrt_iob_func(0x13))
    {
        *(pf + 0x18) &= 0xffff7fff;
        /* tailcall */
        return _unlock(((pf - __acrt_iob_func(0)) >> 4) * 0xaaaaaaab + 0x10);
    }
    
    /* tailcall */
    return LeaveCriticalSection(&pf[6]);
}

void (*)() mingw_get_invalid_parameter_handler()
{
    return handler;
}

void (*)() mingw_set_invalid_parameter_handler(void (* new_handler)())
{
    void (* handler_1)() = handler;
    handler = new_handler;
    return handler_1;
}

void* __acrt_iob_func(unsigned int index)
{
    return &__iob_func()[index * 6];
}

int32_t __wcrtomb_cp(char* dst, short unsigned int wc, unsigned int const cp, unsigned int const mb_max)
{
    lpWideCharStr = wc;
    
    if (cp)
    {
        BOOL lpUsedDefaultChar = 0;
        int32_t result = WideCharToMultiByte(cp, 0, &lpWideCharStr, 1, dst, mb_max, nullptr, &lpUsedDefaultChar);
        
        if (result && !lpUsedDefaultChar)
            return result;
    }
    else if (wc <= 0xff)
    {
        *dst = wc;
        return 1;
    }
    
    *_errno() = 0x2a;
    return 0xffffffff;
}

int64_t wcrtomb(char* dst, short unsigned int wc, int* ps)
{
    char* dst_1 = dst;
    void var_1d;
    
    if (!dst)
        dst_1 = &var_1d;
    int32_t mb_max = ___mb_cur_max_func();
    return __wcrtomb_cp(dst_1, wc, ___lc_codepage_func(), mb_max);
}

long long unsigned int wcsrtombs(char* dst, short unsigned int const** src, long long unsigned int len, int* ps)
{
    int64_t result = 0;
    char* dst_1 = dst;
    uint32_t cp = ___lc_codepage_func();
    int32_t mb_max = ___mb_cur_max_func();
    short unsigned int const* rsi = *src;
    
    if (rsi)
    {
        if (!dst_1)
        {
            while (true)
            {
                void var_3d;
                int32_t rax_5 = __wcrtomb_cp(&var_3d, *rsi, cp, mb_max);
                
                if (rax_5 <= 0)
                    break;
                
                result += rax_5;
                
                if (!*(&var_3d + rax_5 - 1))
                    return result - 1;
                
                rsi = &rsi[1];
            }
            
            return -1;
        }
        
        if (len)
        {
            do
            {
                int32_t rax_1 = __wcrtomb_cp(dst_1, *rsi, cp, mb_max);
                
                if (rax_1 <= 0)
                    return -1;
                
                int64_t rax = rax_1;
                dst_1 = &dst_1[rax];
                result += rax;
                
                if (!dst_1[-1])
                {
                    *src = nullptr;
                    return result - 1;
                }
                
                rsi = &rsi[1];
            } while (len > result);
        }
        
        *src = rsi;
    }
    
    return result;
}

int __mbrtowc_cp(short unsigned int* pwc, char const* s, long long unsigned int n, int* ps, unsigned int const cp, unsigned int const mb_max)
{
    void var_10;
    int64_t rbx;
    var_10 = rbx;
    
    if (!s)
        return 0;
    
    if (!n)
        return -2;
    
    int rax = *ps;
    char const TestChar = *s;
    *ps = 0;
    int var_1c = rax;
    
    if (!TestChar)
    {
        *pwc = 0;
        return 0;
    }
    
    if (mb_max <= 1)
    {
        label_14000790f:
        
        if (!cp)
        {
            *pwc = *s;
            return 1;
        }
        
        if (MultiByteToWideChar(cp, MB_ERR_INVALID_CHARS, s, 1, pwc, 1))
            return 1;
    }
    else
    {
        short unsigned int* lpWideCharStr;
        char const* lpMultiByteStr;
        
        if (rax)
        {
            *var_1c[1] = TestChar;
            lpMultiByteStr = &var_1c;
            int32_t var_30_2 = 1;
            lpWideCharStr = pwc;
        }
        else
        {
            if (!IsDBCSLeadByteEx(cp, TestChar))
                goto label_14000790f;
            
            if (n == 1)
            {
                *ps = *s;
                return -2;
            }
            
            lpWideCharStr = pwc;
            lpMultiByteStr = s;
            int32_t var_30_1 = 1;
        }
        
        if (MultiByteToWideChar(cp, MB_ERR_INVALID_CHARS, lpMultiByteStr, 2, lpWideCharStr, 1))
            return 2;
    }
    
    *_errno() = 0x2a;
    return -1;
}

int64_t mbrtowc(short unsigned int* pwc, char const* s, long long unsigned int n, int* ps)
{
    short unsigned int* pwc_1 = pwc;
    short unsigned int var_2a = 0;
    
    if (!pwc)
        pwc_1 = &var_2a;
    
    int32_t mb_max = ___mb_cur_max_func();
    uint32_t cp = ___lc_codepage_func();
    int* ps_1 = &internal_mbstate;
    
    if (ps)
        ps_1 = ps;
    
    return __mbrtowc_cp(pwc_1, s, n, ps_1, cp, mb_max);
}

long long unsigned int mbsrtowcs(short unsigned int* dst, char const** src, long long unsigned int len, int* ps)
{
    int* ps_1 = ps;
    short unsigned int* pwc_1 = dst;
    
    if (!ps)
        ps_1 = &internal_mbstate;
    
    uint32_t cp = ___lc_codepage_func();
    int32_t mb_max = ___mb_cur_max_func();
    
    if (src)
    {
        char* s = *src;
        
        if (s)
        {
            int64_t result;
            
            if (!pwc_1)
            {
                result = 0;
                short unsigned int pwc = 0;
                
                while (true)
                {
                    int rax_4 = __mbrtowc_cp(&pwc, &s[result], mb_max, ps_1, cp, mb_max);
                    
                    if (rax_4 <= 0)
                        break;
                    
                    s = *src;
                    result += rax_4;
                }
            }
            else
            {
                result = 0;
                
                if (len)
                {
                    do
                    {
                        int rax_1 = __mbrtowc_cp(pwc_1, s, len - result, ps_1, cp, mb_max);
                        
                        if (rax_1 <= 0)
                        {
                            if (len > result && !rax_1)
                                *src = nullptr;
                            
                            break;
                        }
                        
                        int64_t rax = rax_1;
                        pwc_1 = &pwc_1[1];
                        result += rax;
                        s = &(*src)[rax];
                        *src = s;
                    } while (len > result);
                }
            }
            
            return result;
        }
    }
    
    return 0;
}

int64_t mbrlen(char const* s, long long unsigned int n, int* ps)
{
    void var_18;
    int64_t rsi;
    var_18 = rsi;
    int* ps_1 = ps;
    short unsigned int pwc = 0;
    int32_t mb_max = ___mb_cur_max_func();
    uint32_t cp = ___lc_codepage_func();
    
    if (!ps_1)
        ps_1 = &s_mbstate;
    
    return __mbrtowc_cp(&pwc, s, n, ps_1, cp, mb_max);
}

EXCEPTION_DISPOSITION _.text(struct _EXCEPTION_RECORD* ExceptionRecord, void* EstablisherFrame, struct _CONTEXT* ContextRecord, struct _DISPATCHER_CONTEXT* DispatcherContext)
{
    /* tailcall */
    return __C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
}

uint32_t ___lc_codepage_func()
{
    /* tailcall */
    return ___lc_codepage_func();
}

int32_t ___mb_cur_max_func()
{
    /* tailcall */
    return ___mb_cur_max_func();
}

uint64_t __getmainargs(int32_t* arg1, int64_t* arg2, int64_t* arg3, int32_t arg4, int32_t* arg5)
{
    /* tailcall */
    return __getmainargs(arg1, arg2, arg3, arg4, arg5);
}

FILE* __iob_func()
{
    /* tailcall */
    return __iob_func();
}

void __set_app_type(enum _crt_app_type _Type)
{
    /* tailcall */
    return __set_app_type(_Type);
}

void __setusermatherr(_UserMathErrorFunctionPointer _UserMathErrorFunction)
{
    /* tailcall */
    return __setusermatherr(_UserMathErrorFunction);
}

void _amsg_exit(int32_t rterrnum)
{
    /* tailcall */
    return _amsg_exit(rterrnum);
}

void _cexit()
{
    /* tailcall */
    return _cexit();
}

int32_t* _errno()
{
    /* tailcall */
    return _errno();
}

void _initterm(_PVFV* _First, _PVFV* _Last)
{
    /* tailcall */
    return _initterm(_First, _Last);
}

void _lock(int32_t locknum)
{
    /* tailcall */
    return _lock(locknum);
}

_onexit_t_1 _onexit(_onexit_t_1 _Func)
{
    /* tailcall */
    return _onexit(_Func);
}

void _unlock(int32_t locknum)
{
    /* tailcall */
    return _unlock(locknum);
}

void abort() __noreturn
{
    /* tailcall */
    return abort();
}

int64_t calloc(uint64_t _Count, uint64_t _Size)
{
    /* tailcall */
    return calloc(_Count, _Size);
}

void exit(int32_t _Except) __noreturn
{
    /* tailcall */
    return exit(_Except);
}

int32_t fprintf(FILE* const _Stream, char const* const _Format, ...)
{
    /* tailcall */
    return fprintf();
}

int32_t fputc(int32_t _Character, FILE* _Stream)
{
    /* tailcall */
    return fputc(_Character, _Stream);
}

void free(void* _Block)
{
    /* tailcall */
    return free(_Block);
}

uint64_t fwrite(void const* _Buffer, uint64_t _ElementSize, uint64_t _ElementCount, FILE* _Stream)
{
    /* tailcall */
    return fwrite(_Buffer, _ElementSize, _ElementCount, _Stream);
}

struct lconv* localeconv()
{
    /* tailcall */
    return localeconv();
}

int64_t malloc(uint64_t _Size)
{
    /* tailcall */
    return malloc(_Size);
}

int64_t memcpy(void* _Dst, void const* _Src, uint64_t _Size)
{
    /* tailcall */
    return memcpy(_Dst, _Src, _Size);
}

int64_t memset(void* _Dst, int32_t _Val, uint64_t _Size)
{
    /* tailcall */
    return memset(_Dst, _Val, _Size);
}

int32_t puts(char const* _Buffer)
{
    /* tailcall */
    return puts(_Buffer);
}

_crt_signal_t signal(int32_t _Signal, _crt_signal_t _Function)
{
    /* tailcall */
    return signal(_Signal, _Function);
}

char* strerror(int32_t _ErrorMessage)
{
    /* tailcall */
    return strerror(_ErrorMessage);
}

uint64_t strlen(char const* _Str)
{
    /* tailcall */
    return strlen(_Str);
}

int32_t strncmp(char const* _Str1, char const* _Str2, uint64_t _MaxCount)
{
    /* tailcall */
    return strncmp(_Str1, _Str2, _MaxCount);
}

int32_t vfprintf(FILE* const _Stream, char const* const _Format, va_list _ArgList)
{
    /* tailcall */
    return vfprintf(_Stream, _Format, _ArgList);
}

uint64_t wcslen(wchar16 const* _String)
{
    /* tailcall */
    return wcslen(_String);
}

int32_t WideCharToMultiByte(uint32_t CodePage, uint32_t dwFlags, wchar16* lpWideCharStr, int32_t cchWideChar, PSTR lpMultiByteStr, int32_t cbMultiByte, PSTR lpDefaultChar, BOOL* lpUsedDefaultChar)
{
    /* tailcall */
    return WideCharToMultiByte(CodePage, dwFlags, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, lpDefaultChar, lpUsedDefaultChar);
}

uint64_t VirtualQuery(void* lpAddress, MEMORY_BASIC_INFORMATION* lpBuffer, uint64_t dwLength)
{
    /* tailcall */
    return VirtualQuery(lpAddress, lpBuffer, dwLength);
}

BOOL VirtualProtect(void* lpAddress, uint64_t dwSize, enum PAGE_PROTECTION_FLAGS flNewProtect, enum PAGE_PROTECTION_FLAGS* lpflOldProtect)
{
    /* tailcall */
    return VirtualProtect(lpAddress, dwSize, flNewProtect, lpflOldProtect);
}

int64_t TlsGetValue(uint32_t dwTlsIndex)
{
    /* tailcall */
    return TlsGetValue(dwTlsIndex);
}

void Sleep(uint32_t dwMilliseconds)
{
    /* tailcall */
    return Sleep(dwMilliseconds);
}

LPTOP_LEVEL_EXCEPTION_FILTER SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
{
    /* tailcall */
    return SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}

int32_t MultiByteToWideChar(uint32_t CodePage, enum MULTI_BYTE_TO_WIDE_CHAR_FLAGS dwFlags, uint8_t* lpMultiByteStr, int32_t cbMultiByte, wchar16* lpWideCharStr, int32_t cchWideChar)
{
    /* tailcall */
    return MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}

void LeaveCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    /* tailcall */
    return LeaveCriticalSection(lpCriticalSection);
}

BOOL IsDBCSLeadByteEx(uint32_t CodePage, uint8_t TestChar)
{
    /* tailcall */
    return IsDBCSLeadByteEx(CodePage, TestChar);
}

void InitializeCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    /* tailcall */
    return InitializeCriticalSection(lpCriticalSection);
}

enum WIN32_ERROR GetLastError()
{
    /* tailcall */
    return GetLastError();
}

void EnterCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    /* tailcall */
    return EnterCriticalSection(lpCriticalSection);
}

void DeleteCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    /* tailcall */
    return DeleteCriticalSection(lpCriticalSection);
}

int64_t register_frame_ctor()
{
    /* tailcall */
    return __gcc_register_frame();
}

int64_t sub_140007d37(int64_t arg1 @ rax)
{
    /* jump -> *arg1 */
}

