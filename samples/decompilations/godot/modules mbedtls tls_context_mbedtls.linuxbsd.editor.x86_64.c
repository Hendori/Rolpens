
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* my_debug(void*, int, char const*, int, char const*) */

void my_debug(void *param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  __printf_chk(2,"%s:%04d: %s");
  fflush(_stdout);
  return;
}



/* CookieContextMbedTLS::~CookieContextMbedTLS() */

void __thiscall CookieContextMbedTLS::~CookieContextMbedTLS(CookieContextMbedTLS *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001051f0;
  if (this[0x17c] != (CookieContextMbedTLS)0x0) {
    mbedtls_ctr_drbg_free(this + 0x4c0);
    mbedtls_entropy_free(this + 0x180);
    mbedtls_ssl_cookie_free(this + 0x618);
  }
  *(undefined ***)this = &PTR__initialize_classv_00104c90;
  Object::~Object((Object *)this);
  return;
}



/* CookieContextMbedTLS::~CookieContextMbedTLS() */

void __thiscall CookieContextMbedTLS::~CookieContextMbedTLS(CookieContextMbedTLS *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001051f0;
  if (this[0x17c] != (CookieContextMbedTLS)0x0) {
    mbedtls_ctr_drbg_free(this + 0x4c0);
    mbedtls_entropy_free(this + 0x180);
    mbedtls_ssl_cookie_free(this + 0x618);
  }
  *(undefined ***)this = &PTR__initialize_classv_00104c90;
  Object::~Object((Object *)this);
  operator_delete(this,0x638);
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TLSContextMbedTLS::print_mbedtls_error(int) */

void TLSContextMbedTLS::print_mbedtls_error(int param_1)

{
  __printf_chk(2,"mbedtls error: returned -0x%x\n\n",-param_1);
  fflush(_stdout);
  return;
}



/* CookieContextMbedTLS::setup() */

undefined8 __thiscall CookieContextMbedTLS::setup(CookieContextMbedTLS *this)

{
  long *plVar1;
  CookieContextMbedTLS *pCVar2;
  CookieContextMbedTLS *pCVar3;
  CookieContextMbedTLS *pCVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x17c] == (CookieContextMbedTLS)0x0) {
    pCVar2 = this + 0x4c0;
    pCVar3 = this + 0x180;
    pCVar4 = this + 0x618;
    mbedtls_ctr_drbg_init(pCVar2);
    mbedtls_entropy_init(pCVar3);
    mbedtls_ssl_cookie_init(pCVar4);
    this[0x17c] = (CookieContextMbedTLS)0x1;
    iVar6 = mbedtls_ctr_drbg_seed(pCVar2,&mbedtls_entropy_func,pCVar3,0,0);
    if (iVar6 == 0) {
      iVar6 = mbedtls_ssl_cookie_setup(pCVar4,&mbedtls_ctr_drbg_random,pCVar2);
      uVar7 = 0;
      if (iVar6 == 0) goto LAB_0010031a;
      if (this[0x17c] != (CookieContextMbedTLS)0x0) {
        mbedtls_ctr_drbg_free(pCVar2);
        mbedtls_entropy_free(pCVar3);
        mbedtls_ssl_cookie_free(pCVar4);
      }
      itos((long)&local_40);
      operator+((char *)&local_38,(String *)"mbedtls_ssl_cookie_setup returned an error ");
      uVar7 = 0x46;
    }
    else {
      if (this[0x17c] != (CookieContextMbedTLS)0x0) {
        mbedtls_ctr_drbg_free(pCVar2);
        mbedtls_entropy_free(pCVar3);
        mbedtls_ssl_cookie_free(pCVar4);
      }
      itos((long)&local_40);
      operator+((char *)&local_38,(String *)"mbedtls_ctr_drbg_seed returned an error ");
      uVar7 = 0x40;
    }
    _err_print_error("setup","modules/mbedtls/tls_context_mbedtls.cpp",uVar7,
                     "Method/function failed. Returning: FAILED",&local_38,0,0);
    lVar5 = local_38;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    lVar5 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    uVar7 = 1;
  }
  else {
    _err_print_error("setup","modules/mbedtls/tls_context_mbedtls.cpp",0x36,
                     "Condition \"inited\" is true. Returning: ERR_ALREADY_IN_USE",
                     "This cookie context is already in use",0,0);
    uVar7 = 0x16;
  }
LAB_0010031a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CookieContextMbedTLS::clear() */

void __thiscall CookieContextMbedTLS::clear(CookieContextMbedTLS *this)

{
  if (this[0x17c] == (CookieContextMbedTLS)0x0) {
    return;
  }
  mbedtls_ctr_drbg_free(this + 0x4c0);
  mbedtls_entropy_free(this + 0x180);
  mbedtls_ssl_cookie_free(this + 0x618);
  return;
}



/* CookieContextMbedTLS::CookieContextMbedTLS() */

void __thiscall CookieContextMbedTLS::CookieContextMbedTLS(CookieContextMbedTLS *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  this[0x17c] = (CookieContextMbedTLS)0x0;
  *(undefined ***)this = &PTR__initialize_classv_001051f0;
  return;
}



/* TLSContextMbedTLS::get_context() */

TLSContextMbedTLS * __thiscall TLSContextMbedTLS::get_context(TLSContextMbedTLS *this)

{
  if (this[0x17c] != (TLSContextMbedTLS)0x0) {
    return this + 0x630;
  }
  _err_print_error("get_context","modules/mbedtls/tls_context_mbedtls.cpp",0x100,
                   "Condition \"!inited\" is true. Returning: nullptr",0,0);
  return (TLSContextMbedTLS *)0x0;
}



/* TLSContextMbedTLS::TLSContextMbedTLS() */

void __thiscall TLSContextMbedTLS::TLSContextMbedTLS(TLSContextMbedTLS *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  this[0x17c] = (TLSContextMbedTLS)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00105350;
  *(undefined8 *)(this + 400) = 0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  return;
}



/* TLSContextMbedTLS::clear() [clone .part.0] */

void __thiscall TLSContextMbedTLS::clear(TLSContextMbedTLS *this)

{
  Object *pOVar1;
  CryptoKeyMbedTLS *pCVar2;
  char cVar3;
  
  mbedtls_ssl_free(this + 0x630);
  mbedtls_ssl_config_free(this + 0x868);
  mbedtls_ctr_drbg_free(this + 0x4d8);
  mbedtls_entropy_free(this + 0x198);
  pOVar1 = *(Object **)(this + 0x180);
  if (pOVar1 != (Object *)0x0) {
    *(int *)(pOVar1 + 0x528) = *(int *)(pOVar1 + 0x528) + -1;
    *(undefined8 *)(this + 0x180) = 0;
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
        if (*(code **)(*(long *)pOVar1 + 0x140) == X509CertificateMbedTLS::~X509CertificateMbedTLS)
        {
          *(code **)pOVar1 = __cxa_guard_acquire;
          mbedtls_x509_crt_free(pOVar1 + 0x240);
          *(undefined ***)pOVar1 = &PTR__initialize_classv_00104ff0;
          Resource::~Resource((Resource *)pOVar1);
        }
        else {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        }
        Memory::free_static(pOVar1,false);
      }
    }
  }
  pCVar2 = *(CryptoKeyMbedTLS **)(this + 0x188);
  if (pCVar2 != (CryptoKeyMbedTLS *)0x0) {
    *(int *)(pCVar2 + 0x250) = *(int *)(pCVar2 + 0x250) + -1;
    *(undefined8 *)(this + 0x188) = 0;
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<CryptoKeyMbedTLS>(pCVar2);
    }
  }
  pOVar1 = *(Object **)(this + 400);
  if (pOVar1 != (Object *)0x0) {
    *(undefined8 *)(this + 400) = 0;
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
        if (*(code **)(*(long *)pOVar1 + 0x140) == CookieContextMbedTLS::~CookieContextMbedTLS) {
          *(undefined ***)pOVar1 = &PTR__initialize_classv_001051f0;
          if (pOVar1[0x17c] != (Object)0x0) {
            mbedtls_ctr_drbg_free(pOVar1 + 0x4c0);
            mbedtls_entropy_free(pOVar1 + 0x180);
            mbedtls_ssl_cookie_free(pOVar1 + 0x618);
          }
          *(undefined ***)pOVar1 = &PTR__initialize_classv_00104c90;
          Object::~Object(pOVar1);
        }
        else {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        }
        Memory::free_static(pOVar1,false);
      }
    }
  }
  this[0x17c] = (TLSContextMbedTLS)0x0;
  return;
}



/* TLSContextMbedTLS::clear() */

void __thiscall TLSContextMbedTLS::clear(TLSContextMbedTLS *this)

{
  if (this[0x17c] == (TLSContextMbedTLS)0x0) {
    return;
  }
  clear(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TLSContextMbedTLS::_setup(int, int, int) */

undefined8 __thiscall
TLSContextMbedTLS::_setup(TLSContextMbedTLS *this,int param_1,int param_2,int param_3)

{
  long *plVar1;
  TLSContextMbedTLS *pTVar2;
  TLSContextMbedTLS *pTVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x17c] == (TLSContextMbedTLS)0x0) {
    pTVar2 = this + 0x868;
    pTVar3 = this + 0x4d8;
    mbedtls_ssl_init(this + 0x630);
    mbedtls_ssl_config_init(pTVar2);
    mbedtls_ctr_drbg_init(pTVar3);
    mbedtls_entropy_init(this + 0x198);
    this[0x17c] = (TLSContextMbedTLS)0x1;
    iVar5 = mbedtls_ctr_drbg_seed(pTVar3,&mbedtls_entropy_func,this + 0x198,0,0);
    if (iVar5 == 0) {
      iVar5 = mbedtls_ssl_config_defaults(pTVar2,param_1,param_2,0);
      if (iVar5 == 0) {
        mbedtls_ssl_conf_authmode(pTVar2,param_3);
        mbedtls_ssl_conf_rng(pTVar2,&mbedtls_ctr_drbg_random,pTVar3);
        mbedtls_ssl_conf_dbg(pTVar2,0x100000,_stdout);
        uVar6 = 0;
        goto LAB_00100852;
      }
      if (this[0x17c] != (TLSContextMbedTLS)0x0) {
        clear(this);
      }
      itos((long)&local_50);
      operator+((char *)&local_48,(String *)"mbedtls_ssl_config_defaults returned an error");
      uVar6 = 0x6f;
    }
    else {
      if (this[0x17c] != (TLSContextMbedTLS)0x0) {
        clear(this);
      }
      itos((long)&local_50);
      operator+((char *)&local_48,(String *)"mbedtls_ctr_drbg_seed returned an error ");
      uVar6 = 0x69;
    }
    _err_print_error("_setup","modules/mbedtls/tls_context_mbedtls.cpp",uVar6,
                     "Method/function failed. Returning: FAILED",&local_48,0,0);
    lVar4 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar4 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    uVar6 = 1;
  }
  else {
    _err_print_error("_setup","modules/mbedtls/tls_context_mbedtls.cpp",0x5e,
                     "Condition \"inited\" is true. Returning: ERR_ALREADY_IN_USE",
                     "This SSL context is already active",0,0);
    uVar6 = 0x16;
  }
LAB_00100852:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TLSContextMbedTLS::~TLSContextMbedTLS() */

void __thiscall TLSContextMbedTLS::~TLSContextMbedTLS(TLSContextMbedTLS *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00105350;
  if (this[0x17c] != (TLSContextMbedTLS)0x0) {
    clear(this);
  }
  if (*(long *)(this + 400) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 400);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        if (*(code **)(*(long *)pOVar1 + 0x140) == CookieContextMbedTLS::~CookieContextMbedTLS) {
          *(undefined ***)pOVar1 = &PTR__initialize_classv_001051f0;
          if (pOVar1[0x17c] != (Object)0x0) {
            mbedtls_ctr_drbg_free(pOVar1 + 0x4c0);
            mbedtls_entropy_free(pOVar1 + 0x180);
            mbedtls_ssl_cookie_free(pOVar1 + 0x618);
          }
          *(undefined ***)pOVar1 = &PTR__initialize_classv_00104c90;
          Object::~Object(pOVar1);
        }
        else {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        }
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x188) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<CryptoKeyMbedTLS>(*(CryptoKeyMbedTLS **)(this + 0x188));
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        if (*(code **)(*(long *)pOVar1 + 0x140) == X509CertificateMbedTLS::~X509CertificateMbedTLS)
        {
          *(code **)pOVar1 = __cxa_guard_acquire;
          mbedtls_x509_crt_free(pOVar1 + 0x240);
          *(undefined ***)pOVar1 = &PTR__initialize_classv_00104ff0;
          Resource::~Resource((Resource *)pOVar1);
        }
        else {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        }
        Memory::free_static(pOVar1,false);
        *(undefined ***)this = &PTR__initialize_classv_00104c90;
        Object::~Object((Object *)this);
        return;
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00104c90;
  Object::~Object((Object *)this);
  return;
}



/* TLSContextMbedTLS::~TLSContextMbedTLS() */

void __thiscall TLSContextMbedTLS::~TLSContextMbedTLS(TLSContextMbedTLS *this)

{
  ~TLSContextMbedTLS(this);
  operator_delete(this,0x9c0);
  return;
}



/* TLSContextMbedTLS::init_client(int, String const&, Ref<TLSOptions>) */

int __thiscall
TLSContextMbedTLS::init_client(TLSContextMbedTLS *this,int param_1,CowData *param_2,long *param_4)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  Object *pOVar8;
  Object *this_00;
  X509Certificate *pXVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *param_4;
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x17c) == 2)) {
    _err_print_error("init_client","modules/mbedtls/tls_context_mbedtls.cpp",0xae,
                     "Condition \"p_options.is_null() || p_options->is_server()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
    iVar5 = 0x1f;
    goto LAB_00100e80;
  }
  if (*(int *)(lVar7 + 0x17c) == 1) {
    pXVar9 = *(X509Certificate **)(lVar7 + 0x188);
    if ((pXVar9 == (X509Certificate *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      iVar5 = 0;
    }
    else {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        memdelete<X509Certificate>(pXVar9);
      }
      iVar5 = 2;
    }
    iVar5 = _setup(this,0,param_1,iVar5);
    if (iVar5 != 0) goto LAB_00100e50;
    mbedtls_ssl_set_hostname(this + 0x630);
  }
  else {
    iVar5 = _setup(this,0,param_1,2);
    if (iVar5 != 0) {
LAB_00100e50:
      _err_print_error("init_client","modules/mbedtls/tls_context_mbedtls.cpp",0xb7,
                       "Condition \"err != OK\" is true. Returning: err",0,0);
      goto LAB_00100e80;
    }
    local_70 = 0;
    lVar7 = *param_4;
    lVar2 = *(long *)(lVar7 + 0x180);
    if (lVar2 == 0) {
LAB_0010117a:
      lVar7 = 0;
LAB_00100c38:
      if (*(long *)param_2 != lVar7) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,param_2);
      }
    }
    else {
      plVar1 = (long *)(lVar2 + -0x10);
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00100c24;
        LOCK();
        lVar6 = *plVar1;
        bVar10 = lVar2 == lVar6;
        if (bVar10) {
          *plVar1 = lVar2 + 1;
          lVar6 = lVar2;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar6 != -1) {
        local_70 = *(long *)(lVar7 + 0x180);
      }
LAB_00100c24:
      if (local_70 == 0) goto LAB_0010117a;
      lVar7 = local_70;
      if (*(uint *)(local_70 + -8) < 2) goto LAB_00100c38;
    }
    String::utf8();
    CharString::get_data();
    mbedtls_ssl_set_hostname(this + 0x630);
    pcVar3 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar7 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  pXVar9 = *(X509Certificate **)(*param_4 + 0x188);
  if ((pXVar9 == (X509Certificate *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    this_00 = (Object *)CryptoMbedTLS::get_default_certificates();
    if (this_00 == (Object *)0x0) {
      if (this[0x17c] != (TLSContextMbedTLS)0x0) {
        clear(this);
      }
      _err_print_error("init_client","modules/mbedtls/tls_context_mbedtls.cpp",0xd0,
                       "Method/function failed. Returning: ERR_UNCONFIGURED",
                       "SSL module failed to initialize!",0,0);
      iVar5 = 3;
      goto LAB_00100e80;
    }
  }
  else {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<X509Certificate>(pXVar9);
    }
    pXVar9 = *(X509Certificate **)(*param_4 + 0x188);
    if ((pXVar9 == (X509Certificate *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      this_00 = *(Object **)(this + 0x180);
      if (this_00 != (Object *)0x0) {
        *(undefined8 *)(this + 0x180) = 0;
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pXVar9 = (X509Certificate *)0x0;
          cVar4 = predelete_handler(this_00);
          if (cVar4 != '\0') goto LAB_00100f20;
        }
        goto LAB_00100d50;
      }
    }
    else {
      pOVar8 = (Object *)
               __dynamic_cast(pXVar9,&Object::typeinfo,&X509CertificateMbedTLS::typeinfo,0);
      this_00 = *(Object **)(this + 0x180);
      if (this_00 != pOVar8) {
        *(Object **)(this + 0x180) = pOVar8;
        if ((pOVar8 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          *(undefined8 *)(this + 0x180) = 0;
        }
        if (((this_00 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(this_00), cVar4 != '\0')) {
LAB_00100f20:
          if (*(code **)(*(long *)this_00 + 0x140) ==
              X509CertificateMbedTLS::~X509CertificateMbedTLS) {
            *(code **)this_00 = __cxa_guard_acquire;
            mbedtls_x509_crt_free((Resource *)this_00 + 0x240);
            *(undefined ***)this_00 = &PTR__initialize_classv_00104ff0;
            Resource::~Resource((Resource *)this_00);
          }
          else {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
          }
          Memory::free_static(this_00,false);
          if (pXVar9 == (X509Certificate *)0x0) goto LAB_00100d50;
        }
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        memdelete<X509Certificate>(pXVar9);
      }
LAB_00100d50:
      this_00 = *(Object **)(this + 0x180);
    }
    *(int *)(this_00 + 0x528) = *(int *)(this_00 + 0x528) + 1;
  }
  lVar7 = Engine::get_singleton();
  if (*(char *)(lVar7 + 0xc0) == '\0') {
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_68,"network/tls/enable_tls_v1.3",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    bVar10 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    EditorSettings::get_singleton();
    local_70 = 0;
    local_60 = 0x1b;
    local_68 = "network/tls/enable_tls_v1.3";
    String::parse_latin1((StrRange *)&local_70);
    EditorSettings::get_setting((String *)local_58);
    bVar10 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar7 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  if (bVar10 == false) {
    *(undefined4 *)(this + 0x868) = 0x303;
  }
  mbedtls_ssl_conf_ca_chain(this + 0x868,this_00 + 0x240,0);
  mbedtls_ssl_setup(this + 0x630,this + 0x868);
  iVar5 = 0;
LAB_00100e80:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



/* TLSContextMbedTLS::init_server(int, Ref<TLSOptions>, Ref<CookieContextMbedTLS>) */

int __thiscall
TLSContextMbedTLS::init_server(TLSContextMbedTLS *this,int param_1,long *param_3,long *param_4)

{
  long *plVar1;
  TLSContextMbedTLS *pTVar2;
  int *piVar3;
  CryptoKey *pCVar4;
  long lVar5;
  CookieContextMbedTLS *pCVar6;
  char *pcVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  CryptoKeyMbedTLS *pCVar12;
  long lVar13;
  Object *pOVar14;
  X509Certificate *pXVar15;
  CookieContextMbedTLS *pCVar16;
  CryptoKeyMbedTLS *pCVar17;
  Object *this_00;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = *param_3;
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0x17c) != 2)) {
    _err_print_error("init_server","modules/mbedtls/tls_context_mbedtls.cpp",0x78,
                     "Condition \"p_options.is_null() || !p_options->is_server()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  else {
    pCVar4 = *(CryptoKey **)(lVar13 + 0x198);
    if (pCVar4 == (CryptoKey *)0x0) {
      pCVar17 = *(CryptoKeyMbedTLS **)(this + 0x188);
      if (pCVar17 != (CryptoKeyMbedTLS *)0x0) {
LAB_00101201:
        *(undefined8 *)(this + 0x188) = 0;
        cVar8 = RefCounted::unreference();
        if (cVar8 != '\0') {
          memdelete<CryptoKeyMbedTLS>(pCVar17);
        }
        goto LAB_00101290;
      }
    }
    else {
      cVar8 = RefCounted::reference();
      if (cVar8 == '\0') {
        pCVar17 = *(CryptoKeyMbedTLS **)(this + 0x188);
        if (pCVar17 != (CryptoKeyMbedTLS *)0x0) goto LAB_00101201;
      }
      else {
        pCVar12 = (CryptoKeyMbedTLS *)
                  __dynamic_cast(pCVar4,&Object::typeinfo,&CryptoKeyMbedTLS::typeinfo);
        pCVar17 = *(CryptoKeyMbedTLS **)(this + 0x188);
        if (pCVar17 == pCVar12) {
LAB_00101278:
          cVar8 = RefCounted::unreference();
        }
        else {
          *(CryptoKeyMbedTLS **)(this + 0x188) = pCVar12;
          if ((pCVar12 != (CryptoKeyMbedTLS *)0x0) &&
             (cVar8 = RefCounted::reference(), cVar8 == '\0')) {
            *(undefined8 *)(this + 0x188) = 0;
          }
          if ((pCVar17 == (CryptoKeyMbedTLS *)0x0) ||
             (cVar8 = RefCounted::unreference(), cVar8 == '\0')) goto LAB_00101278;
          memdelete<CryptoKeyMbedTLS>(pCVar17);
          cVar8 = RefCounted::unreference();
        }
        if (cVar8 != '\0') {
          memdelete<CryptoKey>(pCVar4);
        }
      }
LAB_00101290:
      lVar13 = *param_3;
    }
    pXVar15 = *(X509Certificate **)(lVar13 + 400);
    if ((pXVar15 == (X509Certificate *)0x0) || (cVar8 = RefCounted::reference(), cVar8 == '\0')) {
      this_00 = *(Object **)(this + 0x180);
      if (this_00 != (Object *)0x0) {
        *(undefined8 *)(this + 0x180) = 0;
        cVar8 = RefCounted::unreference();
        if (cVar8 != '\0') {
          pXVar15 = (X509Certificate *)0x0;
          cVar8 = predelete_handler(this_00);
          if (cVar8 != '\0') goto LAB_00101559;
        }
        goto LAB_001012e0;
      }
    }
    else {
      pOVar14 = (Object *)
                __dynamic_cast(pXVar15,&Object::typeinfo,&X509CertificateMbedTLS::typeinfo);
      this_00 = *(Object **)(this + 0x180);
      if (pOVar14 != this_00) {
        *(Object **)(this + 0x180) = pOVar14;
        if ((pOVar14 != (Object *)0x0) && (cVar8 = RefCounted::reference(), cVar8 == '\0')) {
          *(undefined8 *)(this + 0x180) = 0;
        }
        if (((this_00 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
           (cVar8 = predelete_handler(this_00), cVar8 != '\0')) {
LAB_00101559:
          if (*(code **)(*(long *)this_00 + 0x140) ==
              X509CertificateMbedTLS::~X509CertificateMbedTLS) {
            *(code **)this_00 = __cxa_guard_acquire;
            mbedtls_x509_crt_free((Resource *)this_00 + 0x240);
            *(undefined ***)this_00 = &PTR__initialize_classv_00104ff0;
            Resource::~Resource((Resource *)this_00);
          }
          else {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
          }
          Memory::free_static(this_00,false);
          if (pXVar15 == (X509Certificate *)0x0) goto LAB_001012e0;
        }
      }
      cVar8 = RefCounted::unreference();
      if (cVar8 != '\0') {
        memdelete<X509Certificate>(pXVar15);
      }
LAB_001012e0:
      if ((*(long *)(this + 0x188) != 0) && (*(long *)(this + 0x180) != 0)) {
        iVar10 = _setup(this,1,param_1,0);
        if (iVar10 != 0) {
          _err_print_error("init_server","modules/mbedtls/tls_context_mbedtls.cpp",0x80,
                           "Condition \"err != OK\" is true. Returning: err",0,0);
          goto LAB_00101492;
        }
        lVar13 = *(long *)(this + 0x188);
        lVar5 = *(long *)(this + 0x180);
        pTVar2 = this + 0x868;
        piVar3 = (int *)(lVar13 + 0x250);
        *piVar3 = *piVar3 + 1;
        piVar3 = (int *)(lVar5 + 0x528);
        *piVar3 = *piVar3 + 1;
        iVar11 = mbedtls_ssl_conf_own_cert(pTVar2,lVar5 + 0x240,lVar13 + 0x240);
        if (iVar11 == 0) {
          if (*(long *)(*(long *)(this + 0x180) + 0x520) != 0) {
            mbedtls_ssl_conf_ca_chain(pTVar2,*(long *)(*(long *)(this + 0x180) + 0x520),0);
          }
          if (param_1 == 1) {
            pCVar6 = (CookieContextMbedTLS *)*param_4;
            if ((pCVar6 == (CookieContextMbedTLS *)0x0) ||
               (pCVar6[0x17c] == (CookieContextMbedTLS)0x0)) {
              if (this[0x17c] != (TLSContextMbedTLS)0x0) {
                clear(this);
              }
              iVar10 = 0x2f;
              _err_print_error("init_server","modules/mbedtls/tls_context_mbedtls.cpp",0x94,
                               "Method/function failed. Returning: ERR_BUG",0,0);
              goto LAB_00101492;
            }
            pCVar16 = *(CookieContextMbedTLS **)(this + 400);
            if (pCVar6 != pCVar16) {
              *(CookieContextMbedTLS **)(this + 400) = pCVar6;
              cVar8 = RefCounted::reference();
              if (cVar8 == '\0') {
                *(undefined8 *)(this + 400) = 0;
              }
              if ((pCVar16 != (CookieContextMbedTLS *)0x0) &&
                 (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
                memdelete<CookieContextMbedTLS>(pCVar16);
              }
              pCVar16 = *(CookieContextMbedTLS **)(this + 400);
            }
            mbedtls_ssl_conf_dtls_cookies
                      (pTVar2,&mbedtls_ssl_cookie_write,&mbedtls_ssl_cookie_check,pCVar16 + 0x618);
          }
          lVar13 = Engine::get_singleton();
          if (*(char *)(lVar13 + 0xc0) == '\0') {
            ProjectSettings::get_singleton();
            StringName::StringName((StringName *)&local_68,"network/tls/enable_tls_v1.3",false);
            ProjectSettings::get_setting_with_override((StringName *)local_58);
            bVar9 = Variant::operator_cast_to_bool((Variant *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
              StringName::unref();
            }
          }
          else {
            EditorSettings::get_singleton();
            local_70 = 0;
            local_60 = 0x1b;
            local_68 = "network/tls/enable_tls_v1.3";
            String::parse_latin1((StrRange *)&local_70);
            EditorSettings::get_setting((String *)local_58);
            bVar9 = Variant::operator_cast_to_bool((Variant *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar13 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar1 = (long *)(local_70 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar13 + -0x10),false);
              }
            }
          }
          if (bVar9 == false) {
            *(undefined4 *)(this + 0x868) = 0x303;
          }
          mbedtls_ssl_setup(this + 0x630,pTVar2);
          goto LAB_00101492;
        }
        if (this[0x17c] != (TLSContextMbedTLS)0x0) {
          clear(this);
        }
        itos((long)&local_70);
        operator+((char *)&local_68,(String *)"Invalid cert/key combination ");
        _err_print_error("init_server","modules/mbedtls/tls_context_mbedtls.cpp",0x8a,
                         "Method/function failed. Returning: ERR_INVALID_PARAMETER",&local_68,0);
        pcVar7 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        lVar13 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar13 + -0x10),false);
          }
        }
        goto LAB_001016f5;
      }
    }
    _err_print_error("init_server","modules/mbedtls/tls_context_mbedtls.cpp",0x7d,
                     "Condition \"pkey.is_null() || certs.is_null()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
LAB_001016f5:
  iVar10 = 0x1f;
LAB_00101492:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1054,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1054,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* CryptoKey::is_class_ptr(void*) const */

uint __thiscall CryptoKey::is_class_ptr(CryptoKey *this,void *param_1)

{
  return (uint)CONCAT71(0x1054,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1054,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1054,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1054,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CryptoKey::_getv(StringName const&, Variant&) const */

undefined8 CryptoKey::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CryptoKey::_setv(StringName const&, Variant const&) */

undefined8 CryptoKey::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CryptoKey::_validate_propertyv(PropertyInfo&) const */

void CryptoKey::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CryptoKey::_property_can_revertv(StringName const&) const */

undefined8 CryptoKey::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CryptoKey::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CryptoKey::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CryptoKey::_notificationv(int, bool) */

void CryptoKey::_notificationv(int param_1,bool param_2)

{
  return;
}



/* X509Certificate::is_class_ptr(void*) const */

uint __thiscall X509Certificate::is_class_ptr(X509Certificate *this,void *param_1)

{
  return (uint)CONCAT71(0x1054,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1054,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1054,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1054,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* X509Certificate::_getv(StringName const&, Variant&) const */

undefined8 X509Certificate::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* X509Certificate::_setv(StringName const&, Variant const&) */

undefined8 X509Certificate::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* X509Certificate::_validate_propertyv(PropertyInfo&) const */

void X509Certificate::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* X509Certificate::_property_can_revertv(StringName const&) const */

undefined8 X509Certificate::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* X509Certificate::_property_get_revertv(StringName const&, Variant&) const */

undefined8 X509Certificate::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* X509Certificate::_notificationv(int, bool) */

void X509Certificate::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104c90;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104c90;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CryptoKeyMbedTLS::~CryptoKeyMbedTLS() */

void __thiscall CryptoKeyMbedTLS::~CryptoKeyMbedTLS(CryptoKeyMbedTLS *this)

{
  *(code **)this = Resource::~Resource;
  mbedtls_pk_free();
  *(undefined ***)this = &PTR__initialize_classv_00104df0;
  Resource::~Resource((Resource *)this);
  return;
}



/* X509CertificateMbedTLS::~X509CertificateMbedTLS() */

void __thiscall X509CertificateMbedTLS::~X509CertificateMbedTLS(X509CertificateMbedTLS *this)

{
  *(code **)this = __cxa_guard_acquire;
  mbedtls_x509_crt_free();
  *(undefined ***)this = &PTR__initialize_classv_00104ff0;
  Resource::~Resource((Resource *)this);
  return;
}



/* CryptoKey::_get_class_namev() const */

undefined8 * CryptoKey::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00101c93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101c93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CryptoKey");
      goto LAB_00101cfe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CryptoKey");
LAB_00101cfe:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00101d73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101d73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00101dde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00101dde:
  return &_get_class_namev()::_class_name_static;
}



/* X509Certificate::_get_class_namev() const */

undefined8 * X509Certificate::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00101e63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101e63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"X509Certificate");
      goto LAB_00101ece;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"X509Certificate");
LAB_00101ece:
  return &_get_class_namev()::_class_name_static;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* X509Certificate::get_class() const */

void X509Certificate::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoKey::get_class() const */

void CryptoKey::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010225f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010225f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00102313;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_001023c3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_001023c3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00102313;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00102313:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoKey::is_class(String const&) const */

undefined8 __thiscall CryptoKey::is_class(CryptoKey *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_001024ef;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001024ef:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001025a3;
  }
  cVar6 = String::operator==(param_1,"CryptoKey");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00102663;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00102663:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_001025a3;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010270c;
    }
  }
LAB_001025a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010270c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* X509Certificate::is_class(String const&) const */

undefined8 __thiscall X509Certificate::is_class(X509Certificate *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010278f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010278f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00102843;
  }
  cVar6 = String::operator==(param_1,"X509Certificate");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00102903;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00102903:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00102843;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001029ac;
    }
  }
LAB_00102843:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001029ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00102cc8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102cc8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102ce6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102ce6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* X509Certificate::_initialize_classv() */

void X509Certificate::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        lVar2 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((code *)PTR__bind_methods_00108010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "X509Certificate";
    local_70 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)PTR__bind_methods_00108008 != Resource::_bind_methods) {
      X509Certificate::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoKey::_initialize_classv() */

void CryptoKey::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        lVar2 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((code *)PTR__bind_methods_00108010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CryptoKey";
    local_70 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)PTR__bind_methods_00108018 != Resource::_bind_methods) {
      CryptoKey::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00103968:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103968;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103985;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103985:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoKey::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CryptoKey::_get_property_listv(CryptoKey *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CryptoKey";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CryptoKey";
  local_98 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00103db8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103db8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103dd5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103dd5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CryptoKey",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* X509Certificate::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
X509Certificate::_get_property_listv(X509Certificate *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "X509Certificate";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "X509Certificate";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00104208:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104208;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104225;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104225:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"X509Certificate",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoKeyMbedTLS::~CryptoKeyMbedTLS() */

void __thiscall CryptoKeyMbedTLS::~CryptoKeyMbedTLS(CryptoKeyMbedTLS *this)

{
  *(code **)this = Resource::~Resource;
  mbedtls_pk_free();
  *(undefined ***)this = &PTR__initialize_classv_00104df0;
  Resource::~Resource((Resource *)this);
  operator_delete(this,600);
  return;
}



/* X509CertificateMbedTLS::~X509CertificateMbedTLS() */

void __thiscall X509CertificateMbedTLS::~X509CertificateMbedTLS(X509CertificateMbedTLS *this)

{
  *(code **)this = __cxa_guard_acquire;
  mbedtls_x509_crt_free();
  *(undefined ***)this = &PTR__initialize_classv_00104ff0;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x530);
  return;
}



/* void memdelete<X509Certificate>(X509Certificate*) */

void memdelete<X509Certificate>(X509Certificate *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == X509CertificateMbedTLS::~X509CertificateMbedTLS) {
    *(code **)param_1 = __cxa_guard_acquire;
    mbedtls_x509_crt_free(param_1 + 0x240);
    *(undefined ***)param_1 = &PTR__initialize_classv_00104ff0;
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* void memdelete<CryptoKey>(CryptoKey*) */

void memdelete<CryptoKey>(CryptoKey *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == CryptoKeyMbedTLS::~CryptoKeyMbedTLS) {
    *(code **)param_1 = Resource::~Resource;
    mbedtls_pk_free(param_1 + 0x240);
    *(undefined ***)param_1 = &PTR__initialize_classv_00104df0;
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* void memdelete<CookieContextMbedTLS>(CookieContextMbedTLS*) */

void memdelete<CookieContextMbedTLS>(CookieContextMbedTLS *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == CookieContextMbedTLS::~CookieContextMbedTLS) {
    *(undefined ***)param_1 = &PTR__initialize_classv_001051f0;
    if (param_1[0x17c] != (CookieContextMbedTLS)0x0) {
      mbedtls_ctr_drbg_free(param_1 + 0x4c0);
      mbedtls_entropy_free(param_1 + 0x180);
      mbedtls_ssl_cookie_free(param_1 + 0x618);
    }
    *(undefined ***)param_1 = &PTR__initialize_classv_00104c90;
    Object::~Object((Object *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* void memdelete<CryptoKeyMbedTLS>(CryptoKeyMbedTLS*) */

void memdelete<CryptoKeyMbedTLS>(CryptoKeyMbedTLS *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == CryptoKeyMbedTLS::~CryptoKeyMbedTLS) {
    *(code **)param_1 = Resource::~Resource;
    mbedtls_pk_free(param_1 + 0x240);
    *(undefined ***)param_1 = &PTR__initialize_classv_00104df0;
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* X509CertificateMbedTLS::~X509CertificateMbedTLS() */

void __thiscall X509CertificateMbedTLS::~X509CertificateMbedTLS(X509CertificateMbedTLS *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CryptoKeyMbedTLS::~CryptoKeyMbedTLS() */

void __thiscall CryptoKeyMbedTLS::~CryptoKeyMbedTLS(CryptoKeyMbedTLS *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


