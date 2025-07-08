/* HMACContextMbedTLS::create(bool) */

RefCounted * HMACContextMbedTLS::create(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(400,"");
  RefCounted::RefCounted(this);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010c0f8;
  *(undefined8 *)(this + 0x188) = 0;
  Object::_initialize();
  if (!param_1) {
    return this;
  }
  Object::_postinitialize();
  return this;
}



/* HMACContextMbedTLS::update(Vector<unsigned char> const&) */

undefined1 __thiscall HMACContextMbedTLS::update(HMACContextMbedTLS *this,Vector *param_1)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (*(long *)(this + 0x188) != 0) {
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 == 0) {
      _err_print_error("update","modules/mbedtls/crypto_mbedtls.cpp",0x113,
                       "Condition \"p_data.is_empty()\" is true. Returning: ERR_INVALID_PARAMETER",
                       "Src must not be empty.",0,0);
      uVar3 = 0x1f;
    }
    else {
      iVar2 = mbedtls_md_hmac_update(*(long *)(this + 0x188),lVar1,*(undefined8 *)(lVar1 + -8));
      uVar3 = iVar2 != 0;
    }
    return uVar3;
  }
  _err_print_error("update","modules/mbedtls/crypto_mbedtls.cpp",0x111,"Parameter \"ctx\" is null.",
                   "Start must be called before update.",0,0);
  return 0x1e;
}



/* HMACContextMbedTLS::~HMACContextMbedTLS() */

void __thiscall HMACContextMbedTLS::~HMACContextMbedTLS(HMACContextMbedTLS *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010c0f8;
  if (*(long *)(this + 0x188) != 0) {
    mbedtls_md_free();
    Memory::free_static(*(void **)(this + 0x188),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_0010b798;
  Object::~Object((Object *)this);
  return;
}



/* CryptoMbedTLS::~CryptoMbedTLS() */

void __thiscall CryptoMbedTLS::~CryptoMbedTLS(CryptoMbedTLS *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010c270;
  mbedtls_ctr_drbg_free();
  mbedtls_entropy_free(this + 0x180);
  *(undefined ***)this = &PTR__initialize_classv_0010b798;
  Object::~Object((Object *)this);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = __n;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CryptoKeyMbedTLS::create(bool) */

Resource * CryptoKeyMbedTLS::create(bool param_1)

{
  Resource *this;
  
  this = (Resource *)operator_new(600,"");
  Resource::Resource(this);
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010bcf8;
  this[0x254] = (Resource)0x1;
  mbedtls_pk_init(this + 0x240);
  *(undefined4 *)(this + 0x250) = 0;
  Object::_initialize();
  if (!param_1) {
    return this;
  }
  Object::_postinitialize();
  return this;
}



/* X509CertificateMbedTLS::create(bool) */

Resource * X509CertificateMbedTLS::create(bool param_1)

{
  Resource *this;
  
  this = (Resource *)operator_new(0x530,"");
  Resource::Resource(this);
  *(undefined ***)this = &PTR__initialize_classv_0010bef8;
  mbedtls_x509_crt_init(this + 0x240);
  *(undefined4 *)(this + 0x528) = 0;
  Object::_initialize();
  if (!param_1) {
    return this;
  }
  Object::_postinitialize();
  return this;
}



/* CryptoMbedTLS::~CryptoMbedTLS() */

void __thiscall CryptoMbedTLS::~CryptoMbedTLS(CryptoMbedTLS *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010c270;
  mbedtls_ctr_drbg_free();
  mbedtls_entropy_free(this + 0x180);
  *(undefined ***)this = &PTR__initialize_classv_0010b798;
  Object::~Object((Object *)this);
  operator_delete(this,0x618);
  return;
}



/* HMACContextMbedTLS::~HMACContextMbedTLS() */

void __thiscall HMACContextMbedTLS::~HMACContextMbedTLS(HMACContextMbedTLS *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010c0f8;
  if (*(long *)(this + 0x188) != 0) {
    mbedtls_md_free();
    Memory::free_static(*(void **)(this + 0x188),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_0010b798;
  Object::~Object((Object *)this);
  operator_delete(this,400);
  return;
}



/* HMACContextMbedTLS::start(HashingContext::HashType, Vector<unsigned char> const&) */

undefined1 __thiscall HMACContextMbedTLS::start(HMACContextMbedTLS *this,int param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(this + 0x188) != 0) {
    _err_print_error("start","modules/mbedtls/crypto_mbedtls.cpp",0xfd,
                     "Condition \"ctx != nullptr\" is true. Returning: ERR_FILE_ALREADY_IN_USE",
                     "HMACContext already started.",0,0);
    return 0xb;
  }
  if (*(long *)(param_3 + 8) == 0) {
    _err_print_error("start","modules/mbedtls/crypto_mbedtls.cpp",0x100,
                     "Condition \"p_key.is_empty()\" is true. Returning: ERR_INVALID_PARAMETER",
                     "Key must not be empty.",0,0);
    return 0x1f;
  }
  *(int *)(this + 0x17c) = param_2;
  if (param_2 == 1) {
    uVar2 = 0x14;
    uVar5 = 5;
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        *(undefined4 *)(this + 0x180) = 0x10;
      }
      else {
        *(undefined4 *)(this + 0x180) = 0;
        _err_print_error("md_type_from_hashtype","modules/mbedtls/crypto_mbedtls.cpp",0x1d4,
                         "Method/function failed. Returning: MBEDTLS_MD_NONE","Invalid hash type.",0
                         ,0);
      }
      _err_print_error("start","modules/mbedtls/crypto_mbedtls.cpp",0x106,
                       "Condition \"!allowed\" is true. Returning: ERR_INVALID_PARAMETER",
                       "Unsupported hash type.",0,0);
      return 0x1f;
    }
    uVar2 = 0x20;
    uVar5 = 9;
  }
  *(undefined4 *)(this + 0x180) = uVar2;
  uVar4 = Memory::alloc_static(0x18,false);
  *(undefined8 *)(this + 0x188) = uVar4;
  mbedtls_md_init(uVar4);
  uVar5 = mbedtls_md_info_from_type(uVar5);
  mbedtls_md_setup(*(undefined8 *)(this + 0x188),uVar5,1);
  lVar1 = *(long *)(param_3 + 8);
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + -8);
  }
  iVar3 = mbedtls_md_hmac_starts(*(undefined8 *)(this + 0x188),lVar1,uVar5);
  return iVar3 != 0;
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



/* X509CertificateMbedTLS::save_to_string() */

long * X509CertificateMbedTLS::save_to_string(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long in_RSI;
  long *in_RDI;
  long lVar6;
  long in_FS_OFFSET;
  long local_1070;
  long local_1068;
  long local_1060;
  char *local_1058;
  size_t local_1050;
  char local_1048 [4104];
  long local_40;
  
  lVar6 = in_RSI + 0x240;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1070 = 0;
  do {
    local_1068 = 0;
    iVar3 = mbedtls_pem_write_buffer
                      ("-----BEGIN CERTIFICATE-----\n","-----END CERTIFICATE-----\n",
                       *(undefined8 *)(in_RSI + 600),*(undefined8 *)(in_RSI + 0x250),local_1048,
                       0x1000,&local_1068);
    if ((iVar3 != 0) || (local_1068 == 0)) {
      _err_print_error("save_to_string","modules/mbedtls/crypto_mbedtls.cpp",0xd5,
                       "Condition \"ret != 0 || wrote == 0\" is true. Returning: String()",
                       "Error saving the certificate.",0);
      *in_RDI = 0;
      if (local_1070 == 0) goto LAB_001008ef;
      goto LAB_001008e7;
    }
    local_1060 = 0;
    iVar3 = (int)local_1068;
    if (iVar3 < 0) {
      local_1050 = strlen(local_1048);
    }
    else {
      iVar4 = 0;
      pcVar5 = local_1048;
      if (iVar3 == 0) {
        local_1050 = 0;
      }
      else {
        do {
          if (*pcVar5 == '\0') {
            local_1050 = (size_t)iVar4;
            goto LAB_001007f6;
          }
          iVar4 = iVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (iVar3 != iVar4);
        local_1050 = (size_t)iVar3;
      }
    }
LAB_001007f6:
    local_1058 = local_1048;
    String::parse_latin1((StrRange *)&local_1060);
    String::operator+=((String *)&local_1070,(String *)&local_1060);
    lVar2 = local_1060;
    if (local_1060 != 0) {
      LOCK();
      plVar1 = (long *)(local_1060 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1060 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar6 = *(long *)(lVar6 + 0x2e0);
  } while (lVar6 != 0);
  if (local_1070 == 0) {
    *in_RDI = 0;
  }
  else if (*(int *)(local_1070 + -8) < 0x38) {
    *in_RDI = 0;
LAB_001008e7:
    lVar6 = local_1070;
    LOCK();
    plVar1 = (long *)(local_1070 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_1070 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  else {
    *in_RDI = local_1070;
  }
LAB_001008ef:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* CryptoKeyMbedTLS::save_to_string(bool) */

StrRange * CryptoKeyMbedTLS::save_to_string(bool param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  char in_DL;
  long in_RSI;
  undefined7 in_register_00000039;
  StrRange *pSVar6;
  long in_FS_OFFSET;
  long local_3ee0;
  long local_3ed8;
  long local_3ed0;
  undefined *local_3ec8;
  undefined8 local_3ec0;
  undefined1 local_3eb8 [16008];
  long local_30;
  
  pSVar6 = (StrRange *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_3eb8,0,16000);
  if (in_DL == '\0') {
    iVar5 = mbedtls_pk_write_key_pem(in_RSI + 0x240,local_3eb8,16000);
  }
  else {
    iVar5 = mbedtls_pk_write_pubkey_pem();
  }
  if (iVar5 == 0) {
    String::utf8((char *)&local_3ec8,(int)local_3eb8);
    *(undefined **)pSVar6 = local_3ec8;
  }
  else {
    mbedtls_platform_zeroize(local_3eb8,16000);
    local_3ed0 = 0;
    local_3ec8 = &_LC34;
    local_3ec0 = 2;
    String::parse_latin1((StrRange *)&local_3ed0);
    itos((long)&local_3ee0);
    operator+((char *)&local_3ed8,(String *)"Error saving key \'");
    String::operator+((String *)&local_3ec8,(String *)&local_3ed8);
    _err_print_error("save_to_string","modules/mbedtls/crypto_mbedtls.cpp",0x7e,
                     "Method/function failed. Returning: \"\"",(String *)&local_3ec8,0,0);
    puVar4 = local_3ec8;
    lVar2 = local_3ed8;
    if (local_3ec8 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_3ec8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_3ec8 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
        lVar2 = local_3ed8;
      }
    }
    lVar3 = local_3ee0;
    local_3ed8 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_3ed8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar3 = local_3ee0;
      }
    }
    local_3ee0 = lVar3;
    lVar2 = local_3ed0;
    if (lVar3 != 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_3ee0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar2 = local_3ed0;
      }
    }
    local_3ed0 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_3ed0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)pSVar6 = 0;
    local_3ec8 = &_LC0;
    local_3ec0 = 0;
    String::parse_latin1(pSVar6);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pSVar6;
}



/* CryptoKeyMbedTLS::save(String const&, bool) */

undefined8 __thiscall CryptoKeyMbedTLS::save(CryptoKeyMbedTLS *this,String *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  Object *local_3ee8;
  long local_3ee0;
  long local_3ed8;
  long local_3ed0;
  undefined *local_3ec8;
  undefined8 local_3ec0;
  char local_3eb8 [16008];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_3ee8,(int)param_1,(Error *)0x2);
  if (local_3ee8 == (Object *)0x0) {
    local_3ed0 = 0;
    local_3ec8 = &_LC34;
    local_3ec0 = 2;
    String::parse_latin1((StrRange *)&local_3ed0);
    operator+((char *)&local_3ed8,(String *)"Cannot save CryptoKeyMbedTLS file \'");
    String::operator+((String *)&local_3ec8,(String *)&local_3ed8);
    _err_print_error(&_LC39,"modules/mbedtls/crypto_mbedtls.cpp",0x4e,
                     "Condition \"f.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",
                     (String *)&local_3ec8,0,0);
    puVar3 = local_3ec8;
    if (local_3ec8 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_3ec8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_3ec8 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
    }
    lVar2 = local_3ed8;
    if (local_3ed8 != 0) {
      LOCK();
      plVar1 = (long *)(local_3ed8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_3ed8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_3ed0;
    if (local_3ed0 != 0) {
      LOCK();
      plVar1 = (long *)(local_3ed0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_3ed0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    uVar7 = 0x1f;
  }
  else {
    memset(local_3eb8,0,16000);
    if (param_2) {
      iVar5 = mbedtls_pk_write_pubkey_pem(this + 0x240,local_3eb8,16000);
    }
    else {
      iVar5 = mbedtls_pk_write_key_pem();
    }
    if (iVar5 == 0) {
      uVar7 = 0;
      sVar6 = strlen(local_3eb8);
      (**(code **)(*(long *)local_3ee8 + 0x2d0))(local_3ee8,local_3eb8,sVar6);
      mbedtls_platform_zeroize(local_3eb8);
    }
    else {
      mbedtls_platform_zeroize(local_3eb8,16000);
      local_3ed0 = 0;
      local_3ec8 = &_LC34;
      local_3ec0 = 2;
      String::parse_latin1((StrRange *)&local_3ed0);
      itos((long)&local_3ee0);
      operator+((char *)&local_3ed8,(String *)"Error writing key \'");
      String::operator+((String *)&local_3ec8,(String *)&local_3ed8);
      _err_print_error(&_LC39,"modules/mbedtls/crypto_mbedtls.cpp",0x5b,
                       "Method/function failed. Returning: FAILED",(String *)&local_3ec8,0,0);
      puVar3 = local_3ec8;
      if (local_3ec8 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_3ec8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_3ec8 = (undefined *)0x0;
          Memory::free_static(puVar3 + -0x10,false);
        }
      }
      lVar2 = local_3ed8;
      if (local_3ed8 != 0) {
        LOCK();
        plVar1 = (long *)(local_3ed8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_3ed8 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar2 = local_3ee0;
      if (local_3ee0 != 0) {
        LOCK();
        plVar1 = (long *)(local_3ee0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_3ee0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar2 = local_3ed0;
      if (local_3ed0 != 0) {
        LOCK();
        plVar1 = (long *)(local_3ed0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_3ed0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar7 = 1;
    }
  }
  if (((local_3ee8 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_3ee8), cVar4 != '\0')) {
    (**(code **)(*(long *)local_3ee8 + 0x140))(local_3ee8);
    Memory::free_static(local_3ee8,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* HMACContextMbedTLS::is_md_type_allowed(mbedtls_md_type_t) */

bool HMACContextMbedTLS::is_md_type_allowed(int param_1)

{
  return (param_1 - 5U & 0xfffffffb) == 0;
}



/* CryptoMbedTLS::initialize_crypto() */

void CryptoMbedTLS::initialize_crypto(void)

{
  Crypto::_create = create;
  Crypto::_load_default_certificates = load_default_certificates;
  X509Certificate::_create = X509CertificateMbedTLS::create;
  CryptoKey::_create = CryptoKeyMbedTLS::create;
  HMACContext::_create = 0x100000;
  return;
}



/* CryptoMbedTLS::CryptoMbedTLS() */

void __thiscall CryptoMbedTLS::CryptoMbedTLS(CryptoMbedTLS *this)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010c270;
  mbedtls_ctr_drbg_init(this + 0x4c0);
  mbedtls_entropy_init(this + 0x180);
  iVar3 = mbedtls_ctr_drbg_seed(this + 0x4c0,&mbedtls_entropy_func,this + 0x180,0,0);
  if (iVar3 != 0) {
    itos((long)&local_28);
    operator+((char *)&local_30,(String *)" failed\n  ! mbedtls_ctr_drbg_seed returned an error");
    _err_print_error("CryptoMbedTLS","modules/mbedtls/crypto_mbedtls.cpp",0x150,&local_30,0,0);
    lVar2 = local_30;
    if (local_30 != 0) {
      LOCK();
      plVar1 = (long *)(local_30 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_30 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_28;
    if (local_28 != 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_28 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoMbedTLS::create(bool) */

CryptoMbedTLS * CryptoMbedTLS::create(bool param_1)

{
  CryptoMbedTLS *this;
  
  this = (CryptoMbedTLS *)operator_new(0x618,"");
  CryptoMbedTLS(this);
  Object::_initialize();
  if (!param_1) {
    return this;
  }
  Object::_postinitialize();
  return this;
}



/* CryptoMbedTLS::get_default_certificates() */

undefined8 CryptoMbedTLS::get_default_certificates(void)

{
  return default_certs;
}



/* CryptoMbedTLS::md_type_from_hashtype(HashingContext::HashType, int&) */

undefined8 CryptoMbedTLS::md_type_from_hashtype(int param_1,undefined4 *param_2)

{
  if (param_1 == 1) {
    *param_2 = 0x14;
    return 5;
  }
  if (param_1 != 2) {
    if (param_1 == 0) {
      *param_2 = 0x10;
      return 3;
    }
    *param_2 = 0;
    _err_print_error("md_type_from_hashtype","modules/mbedtls/crypto_mbedtls.cpp",0x1d4,
                     "Method/function failed. Returning: MBEDTLS_MD_NONE","Invalid hash type.",0,0);
    return 0;
  }
  *param_2 = 0x20;
  return 9;
}



/* CryptoKeyMbedTLS::_parse_key(unsigned char const*, int) */

int __thiscall CryptoKeyMbedTLS::_parse_key(CryptoKeyMbedTLS *this,uchar *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_500;
  char *local_4f8;
  undefined8 local_4f0;
  undefined1 local_4e8 [352];
  undefined1 local_388 [840];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_ctr_drbg_init(local_4e8);
  mbedtls_entropy_init(local_388);
  iVar4 = mbedtls_ctr_drbg_seed(local_4e8,&mbedtls_entropy_func,local_388,0,0);
  if (iVar4 == 0) {
    iVar4 = mbedtls_pk_parse_key
                      (this + 0x240,param_1,(long)param_2,0,0,mbedtls_ctr_drbg_random,local_4e8);
    mbedtls_ctr_drbg_free(local_4e8);
    mbedtls_entropy_free(local_388);
  }
  else {
    local_500 = 0;
    local_4f0 = 0x25;
    local_4f8 = "mbedtls_ctr_drbg_seed returned -0x%x\n";
    String::parse_latin1((StrRange *)&local_500);
    vformat<unsigned_int>((String *)&local_4f8,(uint)(StrRange *)&local_500);
    _err_print_error("_parse_key","modules/mbedtls/crypto_mbedtls.cpp",0x8c,
                     "Condition \"ret != 0\" is true. Returning: ret",(String *)&local_4f8,0,0);
    pcVar3 = local_4f8;
    if (local_4f8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_4f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_4f8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_500;
    if (local_500 != 0) {
      LOCK();
      plVar1 = (long *)(local_500 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_500 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoKeyMbedTLS::load_from_string(String const&, bool) */

undefined8 __thiscall
CryptoKeyMbedTLS::load_from_string(CryptoKeyMbedTLS *this,String *param_1,bool param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  uchar *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::utf8();
  if (param_2) {
    if (local_68 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (long)*(int *)(local_68 + -8);
    }
    uVar4 = CharString::get_data();
    iVar3 = mbedtls_pk_parse_public_key(this + 0x240,uVar4,lVar6);
  }
  else {
    if (local_68 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_68 + -8);
    }
    puVar5 = (uchar *)CharString::get_data();
    iVar3 = _parse_key(this,puVar5,iVar3);
  }
  if (iVar3 == 0) {
    this[0x254] = (CryptoKeyMbedTLS)param_2;
    uVar4 = 0;
  }
  else {
    local_50 = 0;
    local_48 = &_LC34;
    local_40 = 2;
    String::parse_latin1((StrRange *)&local_50);
    itos((long)&local_60);
    operator+((char *)&local_58,(String *)"Error parsing key \'");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error("load_from_string","modules/mbedtls/crypto_mbedtls.cpp",0x6c,
                     "Condition \"ret\" is true. Returning: FAILED",(String *)&local_48,0,0);
    puVar2 = local_48;
    if (local_48 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (undefined *)0x0;
        Memory::free_static(puVar2 + -0x10,false);
      }
    }
    lVar6 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    uVar4 = 1;
  }
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_68 + -0x10),false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* X509CertificateMbedTLS::save(String const&) */

ulong __thiscall X509CertificateMbedTLS::save(X509CertificateMbedTLS *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  X509CertificateMbedTLS *pXVar7;
  long in_FS_OFFSET;
  bool bVar8;
  Object *local_1080;
  long local_1078;
  long local_1070;
  long local_1068;
  long local_1060;
  char *local_1058;
  undefined8 local_1050;
  undefined1 local_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_1080,(int)param_1,(Error *)0x2);
  if (local_1080 == (Object *)0x0) {
    local_1060 = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_001019b6;
        LOCK();
        lVar6 = *plVar1;
        bVar8 = lVar2 == lVar6;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar6 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar6 != -1) {
        local_1060 = *(long *)param_1;
      }
    }
LAB_001019b6:
    local_1068 = 0;
    local_1050 = 0x2d;
    local_1058 = "Cannot save X509CertificateMbedTLS file \'%s\'.";
    String::parse_latin1((StrRange *)&local_1068);
    vformat<String>(&local_1058,(StrRange *)&local_1068,&local_1060);
    _err_print_error(&_LC39,"modules/mbedtls/crypto_mbedtls.cpp",0xbd,
                     "Condition \"f.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",
                     &local_1058,0,0);
    pcVar3 = local_1058;
    if (local_1058 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_1058 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1058 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_1068;
    if (local_1068 != 0) {
      LOCK();
      plVar1 = (long *)(local_1068 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1068 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_1060;
    if (local_1060 != 0) {
      LOCK();
      plVar1 = (long *)(local_1060 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1060 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pXVar7 = (X509CertificateMbedTLS *)0x1f;
  }
  else {
    pXVar7 = this + 0x240;
    do {
      local_1078 = 0;
      iVar5 = mbedtls_pem_write_buffer
                        ("-----BEGIN CERTIFICATE-----\n","-----END CERTIFICATE-----\n",
                         *(undefined8 *)(this + 600),*(undefined8 *)(this + 0x250),local_1048,0x1000
                         ,&local_1078);
      if ((iVar5 != 0) || (local_1078 == 0)) {
        local_1060 = 0;
        local_1058 = "\'.";
        local_1050 = 2;
        String::parse_latin1((StrRange *)&local_1060);
        itos((long)&local_1070);
        operator+((char *)&local_1068,(String *)"Error writing certificate \'");
        String::operator+((String *)&local_1058,(String *)&local_1068);
        _err_print_error(&_LC39,"modules/mbedtls/crypto_mbedtls.cpp",0xc5,
                         "Method/function failed. Returning: FAILED",(String *)&local_1058,0,0);
        pcVar3 = local_1058;
        if (local_1058 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_1058 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_1058 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar2 = local_1068;
        if (local_1068 != 0) {
          LOCK();
          plVar1 = (long *)(local_1068 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_1068 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = local_1070;
        if (local_1070 != 0) {
          LOCK();
          plVar1 = (long *)(local_1070 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_1070 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = local_1060;
        if (local_1060 != 0) {
          LOCK();
          plVar1 = (long *)(local_1060 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_1060 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        pXVar7 = (X509CertificateMbedTLS *)0x1;
        break;
      }
      (**(code **)(*(long *)local_1080 + 0x2d0))(local_1080,local_1048,local_1078 + -1);
      pXVar7 = *(X509CertificateMbedTLS **)(pXVar7 + 0x2e0);
    } while (pXVar7 != (X509CertificateMbedTLS *)0x0);
  }
  if (((local_1080 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_1080), cVar4 != '\0')) {
    (**(code **)(*(long *)local_1080 + 0x140))(local_1080);
    Memory::free_static(local_1080,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)pXVar7 & 0xffffffff;
}



/* X509CertificateMbedTLS::load_from_memory(unsigned char const*, int) */

undefined8 __thiscall
X509CertificateMbedTLS::load_from_memory(X509CertificateMbedTLS *this,uchar *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x528) == 0) {
    iVar5 = mbedtls_x509_crt_parse(this + 0x240,param_1,(long)param_2);
    if (iVar5 < 0) {
      local_60 = 0;
      local_50 = 0x24;
      local_58 = "Error parsing X509 certificates: %d.";
      String::parse_latin1((StrRange *)&local_60);
      vformat<int>((String *)&local_58,(int)(StrRange *)&local_60);
      _err_print_error("load_from_memory","modules/mbedtls/crypto_mbedtls.cpp",0xb4,
                       "Condition \"ret < 0\" is true. Returning: FAILED",(String *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar6 = 1;
    }
    else {
      if (iVar5 != 0) {
        cVar4 = is_print_verbose_enabled();
        if (cVar4 != '\0') {
          local_68 = 0;
          local_58 = 
          "MbedTLS: Some X509 certificates could not be parsed (%d certificates skipped).";
          local_50 = 0x4e;
          String::parse_latin1((StrRange *)&local_68);
          vformat<int>((String *)&local_60,(int)&local_68);
          Variant::Variant((Variant *)local_48,(String *)&local_60);
          stringify_variants((Variant *)&local_58);
          __print_line((String *)&local_58);
          pcVar3 = local_58;
          if (local_58 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar3 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar2 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
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
        }
      }
      uVar6 = 0;
    }
  }
  else {
    _err_print_error("load_from_memory","modules/mbedtls/crypto_mbedtls.cpp",0xb1,
                     "Condition \"locks\" is true. Returning: ERR_ALREADY_IN_USE",
                     "Certificate is already in use.",0,0);
    uVar6 = 0x16;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* X509CertificateMbedTLS::load_from_string(String const&) */

undefined8 X509CertificateMbedTLS::load_from_string(String *param_1)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x528) == 0) {
    String::utf8();
    if (local_70 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (long)*(int *)(local_70 + -8);
    }
    uVar5 = CharString::get_data();
    iVar4 = mbedtls_x509_crt_parse(param_1 + 0x240,uVar5,lVar6);
    if (iVar4 < 0) {
      local_60 = 0;
      local_50 = 0x24;
      local_58 = "Error parsing X509 certificates: %d.";
      String::parse_latin1((StrRange *)&local_60);
      vformat<int>((String *)&local_58,(int)(StrRange *)&local_60);
      _err_print_error("load_from_string","modules/mbedtls/crypto_mbedtls.cpp",0xe6,
                       "Condition \"ret < 0\" is true. Returning: FAILED",(String *)&local_58,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar6 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      uVar5 = 1;
    }
    else {
      if (iVar4 != 0) {
        cVar3 = is_print_verbose_enabled();
        if (cVar3 != '\0') {
          local_68 = 0;
          local_58 = 
          "MbedTLS: Some X509 certificates could not be parsed (%d certificates skipped).";
          local_50 = 0x4e;
          String::parse_latin1((StrRange *)&local_68);
          vformat<int>((String *)&local_60,(int)(StrRange *)&local_68);
          Variant::Variant((Variant *)local_48,(String *)&local_60);
          stringify_variants((Variant *)&local_58);
          __print_line((String *)&local_58);
          pcVar2 = local_58;
          if (local_58 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          lVar6 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
        }
      }
      uVar5 = 0;
    }
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_70 + -0x10),false);
      }
    }
  }
  else {
    uVar5 = 0x16;
    _err_print_error("load_from_string","modules/mbedtls/crypto_mbedtls.cpp",0xe2,
                     "Condition \"locks\" is true. Returning: ERR_ALREADY_IN_USE",
                     "Certificate is already in use.",0,0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoMbedTLS::finalize_crypto() */

void CryptoMbedTLS::finalize_crypto(void)

{
  Crypto::_create = 0;
  Crypto::_load_default_certificates = 0;
  if (default_certs != (X509CertificateMbedTLS *)0x0) {
    memdelete<X509CertificateMbedTLS>(default_certs);
    default_certs = (X509CertificateMbedTLS *)0x0;
  }
  X509Certificate::_create = 0;
  CryptoKey::_create = 0;
  HMACContext::_create = 0;
  return;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_001022e6:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_001022e6;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00105f2c();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_0010223c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_0010223c:
  puVar8[-1] = param_1;
  return;
}



/* CryptoMbedTLS::generate_random_bytes(int) */

long CryptoMbedTLS::generate_random_bytes(int param_1)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  long in_RSI;
  undefined4 in_register_0000003c;
  long lVar6;
  int iVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_70 [2];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  lVar6 = CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 0) {
    _err_print_error("generate_random_bytes","modules/mbedtls/crypto_mbedtls.cpp",0x1b7,
                     "Condition \"p_bytes < 0\" is true. Returning: PackedByteArray()",0,0);
    *(undefined8 *)(lVar6 + 8) = 0;
  }
  else {
    local_60 = 0;
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,(long)in_EDX);
    lVar8 = local_60;
    if (in_EDX != 0) {
      iVar5 = 0;
      iVar7 = in_EDX;
      do {
        iVar4 = 0x400;
        if (iVar7 < 0x401) {
          iVar4 = iVar7;
        }
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
        lVar8 = local_60;
        iVar3 = mbedtls_ctr_drbg_random(in_RSI + 0x4c0,iVar5 + local_60,(long)iVar4);
        if (iVar3 != 0) {
          local_70[0] = 0;
          local_58 = "Failed to generate %d random bytes(s). Error: %d.";
          local_50 = 0x31;
          String::parse_latin1((StrRange *)local_70);
          vformat<int,int>((String *)&local_58,(int)(StrRange *)local_70,in_EDX);
          _err_print_error("generate_random_bytes","modules/mbedtls/crypto_mbedtls.cpp",0x1c0,
                           "Condition \"ret != 0\" is true. Returning: PackedByteArray()",
                           (String *)&local_58,0);
          pcVar2 = local_58;
          lVar8 = local_70[0];
          if (local_58 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
              lVar8 = local_70[0];
            }
          }
          local_70[0] = lVar8;
          if (lVar8 != 0) {
            LOCK();
            plVar1 = (long *)(lVar8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70[0] = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
            }
          }
          *(undefined8 *)(lVar6 + 8) = 0;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_60 + -0x10),false);
            }
          }
          goto LAB_001024ac;
        }
        iVar7 = iVar7 - iVar4;
        iVar5 = iVar5 + iVar4;
      } while (0 < iVar7);
    }
    *(long *)(lVar6 + 8) = lVar8;
  }
LAB_001024ac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar6;
}



/* CryptoMbedTLS::load_default_certificates(String const&) */

void CryptoMbedTLS::load_default_certificates(String *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  Resource *pRVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  undefined *local_58;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (default_certs != (Resource *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("load_default_certificates","modules/mbedtls/crypto_mbedtls.cpp",0x160,
                       "Condition \"default_certs != nullptr\" is true.",0,0);
      return;
    }
    goto LAB_001029f2;
  }
  pRVar5 = (Resource *)operator_new(0x530,"");
  Resource::Resource(pRVar5);
  *(undefined ***)pRVar5 = &PTR__initialize_classv_0010bef8;
  mbedtls_x509_crt_init(pRVar5 + 0x240);
  *(undefined4 *)(pRVar5 + 0x528) = 0;
  postinitialize_handler((Object *)pRVar5);
  default_certs = pRVar5;
  if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)pRVar5 + 0x1c8))(pRVar5,param_1);
      return;
    }
    goto LAB_001029f2;
  }
  plVar6 = (long *)OS::get_singleton();
  if (*(code **)(*plVar6 + 0x80) == OS::get_system_ca_certificates) {
    local_58 = &_LC0;
    local_68 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_68);
  }
  else {
    (**(code **)(*plVar6 + 0x80))(&local_68,plVar6);
  }
  if ((local_68 == 0) || (*(uint *)(local_68 + -8) < 2)) {
    local_50 = 0;
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_50,0x39560);
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_50);
    lVar8 = local_50;
    Compression::decompress(local_50,0x3955f,_certs_compressed,0x208e6);
    if (lVar8 == 0) {
      lVar8 = 0;
LAB_0010299b:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,0x3955f,lVar8,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar8 = *(long *)(lVar8 + -8);
    if (lVar8 < 0x39560) goto LAB_0010299b;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_50);
    lVar8 = local_50;
    pRVar5 = default_certs;
    *(undefined1 *)(local_50 + 0x3955f) = 0;
    (**(code **)(*(long *)pRVar5 + 0x1d0))(pRVar5,local_50,*(undefined4 *)(local_50 + -8));
    cVar4 = is_print_verbose_enabled();
    if (cVar4 != '\0') {
      Variant::Variant((Variant *)local_48,"Loaded builtin CA certificates");
      stringify_variants((Variant *)&local_60);
      __print_line((String *)&local_60);
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        lVar8 = local_50;
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
          lVar8 = local_50;
        }
      }
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (lVar8 == 0) goto LAB_001027f0;
    }
    LOCK();
    plVar6 = (long *)(lVar8 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      Memory::free_static((void *)(local_50 + -0x10),false);
    }
  }
  else {
    String::utf8();
    pRVar5 = default_certs;
    pcVar1 = *(code **)(*(long *)default_certs + 0x1d0);
    if (local_60 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(local_60 + -8);
    }
    uVar7 = CharString::get_data();
    (*pcVar1)(pRVar5,uVar7,uVar9);
    cVar4 = is_print_verbose_enabled();
    if (cVar4 != '\0') {
      Variant::Variant((Variant *)local_48,"Loaded system CA certificates");
      stringify_variants((Variant *)&local_58);
      __print_line((String *)&local_58);
      puVar3 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar3 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    lVar8 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar6 = (long *)(local_60 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
LAB_001027f0:
  lVar8 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar6 = (long *)(local_68 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001029f2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HMACContextMbedTLS::finish() */

void HMACContextMbedTLS::finish(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_RSI;
  long in_RDI;
  char *pcVar6;
  long in_FS_OFFSET;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x188) == 0) {
    pcVar6 = "Start must be called before finish.";
    uVar5 = 0x11a;
    pcVar4 = "Parameter \"ctx\" is null.";
  }
  else {
    if (*(int *)(in_RSI + 0x180) != 0) {
      local_40[0] = 0;
      CowData<unsigned_char>::resize<false>
                ((CowData<unsigned_char> *)local_40,(long)*(int *)(in_RSI + 0x180));
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_40);
      lVar2 = local_40[0];
      iVar3 = mbedtls_md_hmac_finish(*(undefined8 *)(in_RSI + 0x188));
      mbedtls_md_free(*(undefined8 *)(in_RSI + 0x188));
      Memory::free_static(*(void **)(in_RSI + 0x188),false);
      *(undefined8 *)(in_RSI + 0x188) = 0;
      *(undefined4 *)(in_RSI + 0x180) = 0;
      if (iVar3 == 0) {
        *(long *)(in_RDI + 8) = lVar2;
      }
      else {
        _err_print_error("finish","modules/mbedtls/crypto_mbedtls.cpp",0x128,
                         "Condition \"ret\" is true. Returning: PackedByteArray()",
                         "Error received while finishing HMAC",0,0);
        *(undefined8 *)(in_RDI + 8) = 0;
        if (lVar2 != 0) {
          LOCK();
          plVar1 = (long *)(lVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_40[0] + -0x10),false);
          }
        }
      }
      goto LAB_00102aae;
    }
    pcVar6 = "Unsupported hash type.";
    uVar5 = 0x11b;
    pcVar4 = "Condition \"hash_len == 0\" is true. Returning: PackedByteArray()";
  }
  _err_print_error("finish","modules/mbedtls/crypto_mbedtls.cpp",uVar5,pcVar4,pcVar6,0,0);
  *(undefined8 *)(in_RDI + 8) = 0;
LAB_00102aae:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* X509CertificateMbedTLS::load(String const&) */

undefined8 __thiscall X509CertificateMbedTLS::load(X509CertificateMbedTLS *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  Object *pOVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  Object *local_98;
  long local_90;
  long local_88;
  long local_80 [2];
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x528) != 0) {
    uVar8 = 0x16;
    _err_print_error(&_LC85,"modules/mbedtls/crypto_mbedtls.cpp",0x9c,
                     "Condition \"locks\" is true. Returning: ERR_ALREADY_IN_USE",
                     "Certificate is already in use.",0,0);
    goto LAB_00102cd3;
  }
  local_70 = 0;
  FileAccess::open((String *)&local_98,(int)param_1,(Error *)0x1);
  if (local_98 == (Object *)0x0) {
    local_80[0] = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_00102f38;
        LOCK();
        lVar7 = *plVar1;
        bVar10 = lVar9 == lVar7;
        if (bVar10) {
          *plVar1 = lVar9 + 1;
          lVar7 = lVar9;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar7 != -1) {
        local_80[0] = *(long *)param_1;
      }
    }
LAB_00102f38:
    local_88 = 0;
    local_60 = 0x2d;
    local_68 = "Cannot open X509CertificateMbedTLS file \'%s\'.";
    String::parse_latin1((StrRange *)&local_88);
    vformat<String>(&local_68,(StrRange *)&local_88,local_80);
    _err_print_error(&_LC85,"modules/mbedtls/crypto_mbedtls.cpp",0xa0,
                     "Condition \"f.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",&local_68
                     ,0,0);
    pcVar4 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar9 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_80[0];
    if (local_80[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_80[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80[0] = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    uVar8 = 0x1f;
    lVar9 = local_70;
LAB_00102cae:
    if (((local_98 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_98), cVar5 != '\0')) {
      (**(code **)(*(long *)local_98 + 0x140))(local_98);
      Memory::free_static(local_98,false);
    }
    if (lVar9 != 0) {
      LOCK();
      plVar1 = (long *)(lVar9 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_70 + -0x10),false);
      }
    }
LAB_00102cd3:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar8;
  }
  lVar7 = (**(code **)(*(long *)local_98 + 0x1d0))();
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_70,lVar7 + 1);
  pOVar3 = local_98;
  pcVar2 = *(code **)(*(long *)local_98 + 0x220);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_70);
  lVar9 = local_70;
  (*pcVar2)(pOVar3,local_70,lVar7);
  if (lVar7 < 0) {
    if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + -8);
      goto LAB_00102e7e;
    }
  }
  else if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + -8);
    if (lVar9 <= lVar7) goto LAB_00102e7e;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_70);
    lVar9 = local_70;
    *(undefined1 *)(local_70 + lVar7) = 0;
    if (local_70 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(local_70 + -8);
    }
    iVar6 = mbedtls_x509_crt_parse(this + 0x240,local_70,uVar8);
    if (iVar6 < 0) {
      local_80[0] = 0;
      plVar1 = (long *)(*(long *)param_1 + -0x10);
      if (*(long *)param_1 != 0) {
        do {
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_00103038;
          LOCK();
          lVar7 = *plVar1;
          bVar10 = lVar9 == lVar7;
          if (bVar10) {
            *plVar1 = lVar9 + 1;
            lVar7 = lVar9;
          }
          UNLOCK();
        } while (!bVar10);
        if (lVar7 != -1) {
          local_80[0] = *(long *)param_1;
        }
      }
LAB_00103038:
      local_88 = 0;
      local_60 = 0x33;
      local_68 = "Error parsing X509 certificates from file \'%s\': %d.";
      String::parse_latin1((StrRange *)&local_88);
      vformat<String,int>(&local_68,(StrRange *)&local_88,local_80,iVar6);
      _err_print_error(&_LC85,"modules/mbedtls/crypto_mbedtls.cpp",0xa8,
                       "Condition \"ret < 0\" is true. Returning: FAILED",&local_68,0,0);
      pcVar4 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar9 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_80[0];
      if (local_80[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_80[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80[0] = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      uVar8 = 1;
      lVar9 = local_70;
    }
    else {
      uVar8 = 0;
      if ((iVar6 != 0) && (cVar5 = is_print_verbose_enabled(), cVar5 != '\0')) {
        local_88 = 0;
        plVar1 = (long *)(*(long *)param_1 + -0x10);
        if (*(long *)param_1 != 0) {
          do {
            lVar9 = *plVar1;
            if (lVar9 == 0) goto LAB_00102d59;
            LOCK();
            lVar7 = *plVar1;
            bVar10 = lVar9 == lVar7;
            if (bVar10) {
              *plVar1 = lVar9 + 1;
              lVar7 = lVar9;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar7 != -1) {
            local_88 = *(long *)param_1;
          }
        }
LAB_00102d59:
        local_90 = 0;
        local_68 = 
        "MbedTLS: Some X509 certificates could not be parsed from file \'%s\' (%d certificates skipped)."
        ;
        local_60 = 0x5d;
        String::parse_latin1((StrRange *)&local_90);
        vformat<String,int>((String *)local_80,(StrRange *)&local_90,&local_88,iVar6);
        Variant::Variant((Variant *)local_58,(String *)local_80);
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        pcVar4 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar9 = local_80[0];
        if (local_80[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_80[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80[0] = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        lVar9 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        lVar9 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        uVar8 = 0;
        lVar9 = local_70;
      }
    }
    goto LAB_00102cae;
  }
  lVar9 = 0;
LAB_00102e7e:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar9,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CryptoKeyMbedTLS::load(String const&, bool) */

undefined8 __thiscall CryptoKeyMbedTLS::load(CryptoKeyMbedTLS *this,String *param_1,bool param_2)

{
  long *plVar1;
  code *pcVar2;
  Object *pOVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  uchar *puVar8;
  undefined8 uVar9;
  long lVar10;
  long in_FS_OFFSET;
  Object *local_88;
  long local_80;
  long local_78;
  long local_70 [2];
  uchar *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x250) != 0) {
    uVar9 = 0x16;
    _err_print_error(&_LC85,"modules/mbedtls/crypto_mbedtls.cpp",0x33,
                     "Condition \"locks\" is true. Returning: ERR_ALREADY_IN_USE","Key is in use",0,
                     0);
    goto LAB_001033b9;
  }
  local_60 = (uchar *)0x0;
  FileAccess::open((String *)&local_88,(int)param_1,(Error *)0x1);
  if (local_88 == (Object *)0x0) {
    local_70[0] = 0;
    local_58 = &_LC34;
    local_50 = 2;
    String::parse_latin1((StrRange *)local_70);
    operator+((char *)&local_78,(String *)"Cannot open CryptoKeyMbedTLS file \'");
    String::operator+((String *)&local_58,(String *)&local_78);
    _err_print_error(&_LC85,"modules/mbedtls/crypto_mbedtls.cpp",0x37,
                     "Condition \"f.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",
                     (String *)&local_58,0,0);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    lVar7 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_70[0];
    if (local_70[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_70[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70[0] = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar9 = 0x1f;
    puVar8 = local_60;
LAB_00103385:
    if (((local_88 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_88), cVar5 != '\0')) {
      (**(code **)(*(long *)local_88 + 0x140))(local_88);
      Memory::free_static(local_88,false);
    }
    if (puVar8 != (uchar *)0x0) {
      LOCK();
      plVar1 = (long *)(puVar8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(local_60 + -0x10,false);
      }
    }
LAB_001033b9:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar9;
  }
  lVar7 = (**(code **)(*(long *)local_88 + 0x1d0))();
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,lVar7 + 1);
  pOVar3 = local_88;
  pcVar2 = *(code **)(*(long *)local_88 + 0x220);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
  puVar8 = local_60;
  (*pcVar2)(pOVar3,local_60,lVar7);
  if (lVar7 < 0) {
    if (puVar8 != (uchar *)0x0) {
      lVar10 = *(long *)(puVar8 + -8);
      goto LAB_00103415;
    }
  }
  else if (puVar8 != (uchar *)0x0) {
    lVar10 = *(long *)(puVar8 + -8);
    if (lVar10 <= lVar7) goto LAB_00103415;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
    local_60[lVar7] = '\0';
    if (param_2) {
      if (local_60 == (uchar *)0x0) {
        iVar6 = mbedtls_pk_parse_public_key(this + 0x240,0,0);
      }
      else {
        iVar6 = mbedtls_pk_parse_public_key(this + 0x240,local_60,*(undefined8 *)(local_60 + -8));
      }
    }
    else if (local_60 == (uchar *)0x0) {
      iVar6 = _parse_key(this,(uchar *)0x0,0);
    }
    else {
      iVar6 = _parse_key(this,local_60,*(int *)(local_60 + -8));
    }
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
    puVar8 = local_60;
    mbedtls_platform_zeroize(local_60);
    if (iVar6 == 0) {
      this[0x254] = (CryptoKeyMbedTLS)param_2;
      uVar9 = 0;
    }
    else {
      local_70[0] = 0;
      local_50 = 2;
      local_58 = &_LC34;
      String::parse_latin1((StrRange *)local_70);
      itos((long)&local_80);
      operator+((char *)&local_78,(String *)"Error parsing key \'");
      String::operator+((String *)&local_58,(String *)&local_78);
      _err_print_error(&_LC85,"modules/mbedtls/crypto_mbedtls.cpp",0x46,
                       "Condition \"ret\" is true. Returning: FAILED",(String *)&local_58,0,0);
      puVar4 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar4 + -0x10,false);
        }
      }
      lVar7 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_70[0];
      if (local_70[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_70[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70[0] = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      uVar9 = 1;
      puVar8 = local_60;
    }
    goto LAB_00103385;
  }
  lVar10 = 0;
LAB_00103415:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar10,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CryptoMbedTLS::generate_self_signed_certificate(Ref<CryptoKey>, String const&, String const&,
   String const&) */

long * CryptoMbedTLS::generate_self_signed_certificate(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  CryptoKeyMbedTLS *pCVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Resource *this;
  size_t sVar8;
  long lVar9;
  X509CertificateMbedTLS *pXVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  byte bVar12;
  long local_10e8;
  long local_10e0;
  undefined1 local_10d8 [112];
  undefined1 local_1068 [32];
  char local_1048 [4095];
  undefined1 local_49;
  long local_40;
  
  bVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 != 0) {
    pCVar5 = (CryptoKeyMbedTLS *)
             __dynamic_cast(*param_3,&Object::typeinfo,&CryptoKeyMbedTLS::typeinfo,0);
    if (pCVar5 != (CryptoKeyMbedTLS *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
        mbedtls_x509write_crt_init(local_10d8);
        mbedtls_x509write_crt_set_subject_key(local_10d8,pCVar5 + 0x240);
        mbedtls_x509write_crt_set_issuer_key(local_10d8,pCVar5 + 0x240);
        String::utf8();
        CharString::get_data();
        mbedtls_x509write_crt_set_subject_name(local_10d8);
        lVar9 = local_10e0;
        if (local_10e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_10e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_10e0 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        String::utf8();
        CharString::get_data();
        mbedtls_x509write_crt_set_issuer_name(local_10d8);
        lVar9 = local_10e0;
        if (local_10e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_10e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_10e0 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        mbedtls_x509write_crt_set_version(local_10d8,2);
        mbedtls_x509write_crt_set_md_alg(local_10d8,9);
        mbedtls_ctr_drbg_random(param_2 + 0x4c0,local_1068,0x14);
        mbedtls_x509write_crt_set_serial_raw(local_10d8,local_1068,0x14);
        String::utf8();
        uVar6 = CharString::get_data();
        String::utf8();
        uVar7 = CharString::get_data();
        mbedtls_x509write_crt_set_validity(local_10d8,uVar7,uVar6);
        lVar9 = local_10e8;
        if (local_10e8 != 0) {
          LOCK();
          plVar1 = (long *)(local_10e8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_10e8 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        lVar9 = local_10e0;
        if (local_10e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_10e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_10e0 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        mbedtls_x509write_crt_set_basic_constraints(local_10d8,1,0xffffffff);
        mbedtls_x509write_crt_set_basic_constraints(local_10d8,1,0);
        pcVar11 = local_1048;
        for (lVar9 = 0x200; lVar9 != 0; lVar9 = lVar9 + -1) {
          pcVar11[0] = '\0';
          pcVar11[1] = '\0';
          pcVar11[2] = '\0';
          pcVar11[3] = '\0';
          pcVar11[4] = '\0';
          pcVar11[5] = '\0';
          pcVar11[6] = '\0';
          pcVar11[7] = '\0';
          pcVar11 = pcVar11 + (ulong)bVar12 * -0x10 + 8;
        }
        iVar4 = mbedtls_x509write_crt_pem
                          (local_10d8,local_1048,0x1000,mbedtls_ctr_drbg_random,param_2 + 0x4c0);
        mbedtls_x509write_crt_free(local_10d8);
        if (iVar4 == 0) {
          local_49 = 0;
          this = (Resource *)operator_new(0x530,"");
          Resource::Resource(this);
          *(undefined ***)this = &PTR__initialize_classv_0010bef8;
          mbedtls_x509_crt_init(this + 0x240);
          *(undefined4 *)(this + 0x528) = 0;
          postinitialize_handler((Object *)this);
          cVar3 = RefCounted::init_ref();
          if (cVar3 == '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          cVar3 = RefCounted::reference();
          pXVar10 = (X509CertificateMbedTLS *)0x0;
          if (cVar3 != '\0') {
            pXVar10 = (X509CertificateMbedTLS *)this;
          }
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            memdelete<X509CertificateMbedTLS>((X509CertificateMbedTLS *)this);
          }
          sVar8 = strlen(local_1048);
          (**(code **)(*(long *)pXVar10 + 0x1d0))(pXVar10,local_1048,(int)sVar8 + 1);
          *param_1 = 0;
          lVar9 = __dynamic_cast(pXVar10,&Object::typeinfo,&X509Certificate::typeinfo,0);
          if (lVar9 != 0) {
            *param_1 = lVar9;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              *param_1 = 0;
            }
          }
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            memdelete<X509CertificateMbedTLS>(pXVar10);
          }
        }
        else {
          itos((long)&local_10e8);
          operator+((char *)&local_10e0,(String *)"Failed to generate certificate: ");
          _err_print_error("generate_self_signed_certificate","modules/mbedtls/crypto_mbedtls.cpp",
                           0x1ad,"Condition \"ret != 0\" is true. Returning: nullptr",&local_10e0,0,
                           0);
          lVar9 = local_10e0;
          if (local_10e0 != 0) {
            LOCK();
            plVar1 = (long *)(local_10e0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_10e0 = 0;
              Memory::free_static((void *)(lVar9 + -0x10),false);
            }
          }
          lVar9 = local_10e8;
          if (local_10e8 != 0) {
            LOCK();
            plVar1 = (long *)(local_10e8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_10e8 = 0;
              Memory::free_static((void *)(lVar9 + -0x10),false);
            }
          }
          *param_1 = 0;
        }
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          memdelete<CryptoKeyMbedTLS>(pCVar5);
        }
        goto LAB_00103861;
      }
    }
  }
  _err_print_error("generate_self_signed_certificate","modules/mbedtls/crypto_mbedtls.cpp",0x18b,
                   "Condition \"key.is_null()\" is true. Returning: nullptr",
                   "Invalid private key argument.",0,0);
  *param_1 = 0;
LAB_00103861:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoMbedTLS::encrypt(Ref<CryptoKey>, Vector<unsigned char> const&) */

long CryptoMbedTLS::encrypt(long param_1,long param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  CryptoKeyMbedTLS *pCVar5;
  void *pvVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  size_t local_460;
  long local_458;
  long local_450 [2];
  void *local_440;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 != 0) {
    pCVar5 = (CryptoKeyMbedTLS *)
             __dynamic_cast(*param_3,&Object::typeinfo,&CryptoKeyMbedTLS::typeinfo,0);
    if (pCVar5 != (CryptoKeyMbedTLS *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
        lVar2 = *(long *)(param_4 + 8);
        local_440 = (void *)0x0;
        if (lVar2 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar2 + -8);
        }
        iVar4 = mbedtls_pk_encrypt(pCVar5 + 0x240,lVar2,uVar7,local_438,&local_460,0x400,
                                   _GLOBAL_OFFSET_TABLE_,param_2 + 0x4c0);
        if (iVar4 == 0) {
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_440,local_460);
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_440);
          pvVar6 = memcpy(local_440,local_438,local_460);
          *(void **)(param_1 + 8) = pvVar6;
        }
        else {
          itos((long)&local_458);
          operator+((char *)local_450,(String *)"Error while encrypting: ");
          _err_print_error("encrypt","modules/mbedtls/crypto_mbedtls.cpp",0x203,
                           "Condition \"ret\" is true. Returning: out",local_450,0,0);
          lVar2 = local_450[0];
          if (local_450[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_450[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_450[0] = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar2 = local_458;
          if (local_458 != 0) {
            LOCK();
            plVar1 = (long *)(local_458 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_458 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          *(undefined8 *)(param_1 + 8) = 0;
          if (local_440 != (void *)0x0) {
            LOCK();
            plVar1 = (long *)((long)local_440 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)((long)local_440 + -0x10),false);
            }
          }
        }
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          memdelete<CryptoKeyMbedTLS>(pCVar5);
        }
        goto LAB_00103db0;
      }
    }
  }
  _err_print_error("encrypt","modules/mbedtls/crypto_mbedtls.cpp",0x1fe,
                   "Condition \"key.is_null()\" is true. Returning: Vector<uint8_t>()",
                   "Invalid key provided.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
LAB_00103db0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoMbedTLS::decrypt(Ref<CryptoKey>, Vector<unsigned char> const&) */

long CryptoMbedTLS::decrypt(long param_1,long param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  CryptoKeyMbedTLS CVar4;
  int iVar5;
  CryptoKeyMbedTLS *pCVar6;
  void *pvVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  size_t local_860;
  long local_858;
  long local_850 [2];
  void *local_840;
  undefined1 local_838 [2056];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 != 0) {
    pCVar6 = (CryptoKeyMbedTLS *)
             __dynamic_cast(*param_3,&Object::typeinfo,&CryptoKeyMbedTLS::typeinfo,0);
    if (pCVar6 != (CryptoKeyMbedTLS *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
        if (*(code **)(*(long *)pCVar6 + 0x1e8) == CryptoKeyMbedTLS::is_public_only) {
          CVar4 = pCVar6[0x254];
        }
        else {
          CVar4 = (CryptoKeyMbedTLS)(**(code **)(*(long *)pCVar6 + 0x1e8))(pCVar6);
        }
        if (CVar4 == (CryptoKeyMbedTLS)0x0) {
          lVar2 = *(long *)(param_4 + 8);
          local_840 = (void *)0x0;
          if (lVar2 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)(lVar2 + -8);
          }
          iVar5 = mbedtls_pk_decrypt(pCVar6 + 0x240,lVar2,uVar8,local_838,&local_860,0x800,
                                     _GLOBAL_OFFSET_TABLE_,param_2 + 0x4c0);
          if (iVar5 == 0) {
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_840,local_860);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_840);
            pvVar7 = memcpy(local_840,local_838,local_860);
            *(void **)(param_1 + 8) = pvVar7;
          }
          else {
            itos((long)&local_858);
            operator+((char *)local_850,(String *)"Error while decrypting: ");
            _err_print_error("decrypt","modules/mbedtls/crypto_mbedtls.cpp",0x211,
                             "Condition \"ret\" is true. Returning: out",local_850,0,0);
            lVar2 = local_850[0];
            if (local_850[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_850[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_850[0] = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            lVar2 = local_858;
            if (local_858 != 0) {
              LOCK();
              plVar1 = (long *)(local_858 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_858 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            *(undefined8 *)(param_1 + 8) = 0;
            if (local_840 != (void *)0x0) {
              LOCK();
              plVar1 = (long *)((long)local_840 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)((long)local_840 + -0x10),false);
              }
            }
          }
        }
        else {
          _err_print_error("decrypt","modules/mbedtls/crypto_mbedtls.cpp",0x20c,
                           "Condition \"key->is_public_only()\" is true. Returning: Vector<uint8_t>()"
                           ,"Invalid key provided. Cannot decrypt using a public_only key.",0,0);
          *(undefined8 *)(param_1 + 8) = 0;
        }
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          memdelete<CryptoKeyMbedTLS>(pCVar6);
        }
        goto LAB_001040b3;
      }
    }
  }
  _err_print_error("decrypt","modules/mbedtls/crypto_mbedtls.cpp",0x20b,
                   "Condition \"key.is_null()\" is true. Returning: Vector<uint8_t>()",
                   "Invalid key provided.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
LAB_001040b3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoMbedTLS::verify(HashingContext::HashType, Vector<unsigned char> const&, Vector<unsigned
   char> const&, Ref<CryptoKey>) */

ulong __thiscall
CryptoMbedTLS::verify(undefined8 param_1,int param_2,long param_3,long param_4,long *param_5)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  CryptoKeyMbedTLS *pCVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  ulong uVar9;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 1) {
    lVar5 = 0x14;
    uVar7 = 0x14;
    uVar8 = 5;
LAB_00104321:
    if ((*(long *)(param_3 + 8) == 0) || (*(long *)(*(long *)(param_3 + 8) + -8) != lVar5)) {
      itos((long)&local_40);
      operator+((char *)&local_38,(String *)"Invalid hash provided. Size must be ");
      _err_print_error("verify","modules/mbedtls/crypto_mbedtls.cpp",0x1f6,
                       "Condition \"p_hash.size() != size\" is true. Returning: false",&local_38,0,0
                      );
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
    }
    else {
      if (*param_5 != 0) {
        pCVar4 = (CryptoKeyMbedTLS *)
                 __dynamic_cast(*param_5,&Object::typeinfo,&CryptoKeyMbedTLS::typeinfo,0);
        if (pCVar4 != (CryptoKeyMbedTLS *)0x0) {
          cVar2 = RefCounted::reference();
          if (cVar2 != '\0') {
            lVar5 = *(long *)(param_4 + 8);
            if (lVar5 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined8 *)(lVar5 + -8);
            }
            iVar3 = mbedtls_pk_verify(pCVar4 + 0x240,uVar8,*(undefined8 *)(param_3 + 8),uVar7,lVar5,
                                      uVar6);
            uVar9 = CONCAT71((int7)((ulong)param_3 >> 8),iVar3 == 0);
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
              memdelete<CryptoKeyMbedTLS>(pCVar4);
            }
            goto LAB_001042e3;
          }
        }
      }
      _err_print_error("verify","modules/mbedtls/crypto_mbedtls.cpp",0x1f8,
                       "Condition \"key.is_null()\" is true. Returning: false",
                       "Invalid key provided.",0,0);
    }
  }
  else {
    if (param_2 == 2) {
      lVar5 = 0x20;
      uVar7 = 0x20;
      uVar8 = 9;
      goto LAB_00104321;
    }
    if (param_2 == 0) {
      lVar5 = 0x10;
      uVar7 = 0x10;
      uVar8 = 3;
      goto LAB_00104321;
    }
    uVar9 = 0;
    _err_print_error("md_type_from_hashtype","modules/mbedtls/crypto_mbedtls.cpp",0x1d4,
                     "Method/function failed. Returning: MBEDTLS_MD_NONE","Invalid hash type.",0,0);
    _err_print_error("verify","modules/mbedtls/crypto_mbedtls.cpp",0x1f5,
                     "Condition \"type == MBEDTLS_MD_NONE\" is true. Returning: false",
                     "Invalid hash type.",0,uVar9 & 0xffffffff00000000);
  }
  uVar9 = 0;
LAB_001042e3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoMbedTLS::generate_rsa(int) */

long * CryptoMbedTLS::generate_rsa(int param_1)

{
  char cVar1;
  int iVar2;
  Resource *this;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 in_EDX;
  CryptoKeyMbedTLS *pCVar6;
  long in_RSI;
  int iVar7;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  plVar5 = (long *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this = (Resource *)operator_new(600,"");
  Resource::Resource(this);
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010bcf8;
  this[0x254] = (Resource)0x1;
  mbedtls_pk_init(this + 0x240);
  *(undefined4 *)(this + 0x250) = 0;
  postinitialize_handler((Object *)this);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    uVar3 = mbedtls_pk_info_from_type(1);
    iVar7 = 0x240;
    iVar2 = mbedtls_pk_setup(0x240,uVar3);
    if (iVar2 == 0) {
      plVar5 = (long *)generate_rsa(iVar7);
      return plVar5;
    }
    _err_print_error("generate_rsa","modules/mbedtls/crypto_mbedtls.cpp",0x182,
                     "Condition \"ret != 0\" is true. Returning: nullptr",0,0);
    *plVar5 = 0;
  }
  else {
    cVar1 = RefCounted::reference();
    pCVar6 = (CryptoKeyMbedTLS *)0x0;
    if (cVar1 != '\0') {
      pCVar6 = (CryptoKeyMbedTLS *)this;
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<CryptoKeyMbedTLS>((CryptoKeyMbedTLS *)this);
    }
    uVar3 = mbedtls_pk_info_from_type(1);
    iVar2 = mbedtls_pk_setup(pCVar6 + 0x240,uVar3);
    if (iVar2 == 0) {
      local_48 = *(undefined8 *)(pCVar6 + 0x240);
      uStack_40 = *(undefined8 *)(pCVar6 + 0x248);
      iVar2 = mbedtls_pk_get_type(&local_48);
      uVar3 = 0;
      if (iVar2 == 1) {
        uVar3 = uStack_40;
      }
      iVar2 = mbedtls_rsa_gen_key(uVar3,mbedtls_ctr_drbg_random,in_RSI + 0x4c0,in_EDX,0x10001);
      pCVar6[0x254] = (CryptoKeyMbedTLS)0x0;
      if (iVar2 == 0) {
        *plVar5 = 0;
        lVar4 = __dynamic_cast(pCVar6,&Object::typeinfo,&CryptoKey::typeinfo,0);
        if (lVar4 != 0) {
          *plVar5 = lVar4;
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') {
            *plVar5 = 0;
          }
        }
      }
      else {
        _err_print_error("generate_rsa","modules/mbedtls/crypto_mbedtls.cpp",0x185,
                         "Condition \"ret != 0\" is true. Returning: nullptr",0,0);
        *plVar5 = 0;
      }
    }
    else {
      _err_print_error("generate_rsa","modules/mbedtls/crypto_mbedtls.cpp",0x182,
                       "Condition \"ret != 0\" is true. Returning: nullptr",0,0);
      *plVar5 = 0;
      if (pCVar6 == (CryptoKeyMbedTLS *)0x0) goto LAB_001045e0;
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<CryptoKeyMbedTLS>(pCVar6);
    }
  }
LAB_001045e0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar5;
}



/* CryptoMbedTLS::sign(HashingContext::HashType, Vector<unsigned char> const&, Ref<CryptoKey>) */

long CryptoMbedTLS::sign(long param_1,long param_2,int param_3,long param_4,long *param_5)

{
  long *plVar1;
  size_t __n;
  char cVar2;
  CryptoKeyMbedTLS CVar3;
  int iVar4;
  CryptoKeyMbedTLS *pCVar5;
  void *pvVar6;
  long lVar7;
  undefined4 uVar8;
  long in_FS_OFFSET;
  ulong uVar9;
  undefined4 local_47c;
  size_t local_470;
  long local_468;
  long local_460;
  long local_458;
  void *local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 1) {
    local_47c = 5;
    lVar7 = 0x14;
    uVar8 = 0x14;
  }
  else if (param_3 == 2) {
    local_47c = 9;
    lVar7 = 0x20;
    uVar8 = 0x20;
  }
  else {
    if (param_3 != 0) {
      uVar9 = 0;
      _err_print_error("md_type_from_hashtype","modules/mbedtls/crypto_mbedtls.cpp",0x1d4,
                       "Method/function failed. Returning: MBEDTLS_MD_NONE","Invalid hash type.",0,0
                      );
      _err_print_error(&_LC114,"modules/mbedtls/crypto_mbedtls.cpp",0x1db,
                       "Condition \"type == MBEDTLS_MD_NONE\" is true. Returning: Vector<uint8_t>()"
                       ,"Invalid hash type.",0,uVar9 & 0xffffffff00000000);
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_00104838;
    }
    local_47c = 3;
    lVar7 = 0x10;
    uVar8 = 0x10;
  }
  if ((*(long *)(param_4 + 8) == 0) || (lVar7 != *(long *)(*(long *)(param_4 + 8) + -8))) {
    itos((long)&local_460);
    operator+((char *)&local_458,(String *)"Invalid hash provided. Size must be ");
    _err_print_error(&_LC114,"modules/mbedtls/crypto_mbedtls.cpp",0x1dc,
                     "Condition \"p_hash.size() != size\" is true. Returning: Vector<uint8_t>()",
                     &local_458,0,0);
    lVar7 = local_458;
    if (local_458 != 0) {
      LOCK();
      plVar1 = (long *)(local_458 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_458 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_460;
    if (local_460 != 0) {
      LOCK();
      plVar1 = (long *)(local_460 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_460 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    if (*param_5 != 0) {
      pCVar5 = (CryptoKeyMbedTLS *)
               __dynamic_cast(*param_5,&Object::typeinfo,&CryptoKeyMbedTLS::typeinfo,0);
      if (pCVar5 != (CryptoKeyMbedTLS *)0x0) {
        cVar2 = RefCounted::reference();
        if (cVar2 != '\0') {
          if (*(code **)(*(long *)pCVar5 + 0x1e8) == CryptoKeyMbedTLS::is_public_only) {
            CVar3 = pCVar5[0x254];
          }
          else {
            CVar3 = (CryptoKeyMbedTLS)(**(code **)(*(long *)pCVar5 + 0x1e8))(pCVar5);
          }
          if (CVar3 == (CryptoKeyMbedTLS)0x0) {
            local_470 = 0;
            local_450 = (void *)0x0;
            iVar4 = mbedtls_pk_sign(pCVar5 + 0x240,local_47c,*(undefined8 *)(param_4 + 8),uVar8,
                                    local_448,0x400,&local_470,_GLOBAL_OFFSET_TABLE_,param_2 + 0x4c0
                                   );
            if (iVar4 == 0) {
              CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_450,local_470);
              __n = local_470;
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_450);
              pvVar6 = memcpy(local_450,local_448,__n);
              *(void **)(param_1 + 8) = pvVar6;
            }
            else {
              itos((long)&local_468);
              operator+((char *)&local_460,(String *)"Error while signing: ");
              _err_print_error(&_LC114,"modules/mbedtls/crypto_mbedtls.cpp",0x1ec,
                               "Condition \"ret\" is true. Returning: out",&local_460,0,0);
              lVar7 = local_460;
              if (local_460 != 0) {
                LOCK();
                plVar1 = (long *)(local_460 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_460 = 0;
                  Memory::free_static((void *)(lVar7 + -0x10),false);
                }
              }
              lVar7 = local_468;
              if (local_468 != 0) {
                LOCK();
                plVar1 = (long *)(local_468 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_468 = 0;
                  Memory::free_static((void *)(lVar7 + -0x10),false);
                }
              }
              *(undefined8 *)(param_1 + 8) = 0;
              if (local_450 != (void *)0x0) {
                LOCK();
                plVar1 = (long *)((long)local_450 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)((long)local_450 + -0x10),false);
                }
              }
            }
          }
          else {
            _err_print_error(&_LC114,"modules/mbedtls/crypto_mbedtls.cpp",0x1df,
                             "Condition \"key->is_public_only()\" is true. Returning: Vector<uint8_t>()"
                             ,"Invalid key provided. Cannot sign with public_only keys.",0,0);
            *(undefined8 *)(param_1 + 8) = 0;
          }
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            memdelete<CryptoKeyMbedTLS>(pCVar5);
          }
          goto LAB_00104838;
        }
      }
    }
    _err_print_error(&_LC114,"modules/mbedtls/crypto_mbedtls.cpp",0x1de,
                     "Condition \"key.is_null()\" is true. Returning: Vector<uint8_t>()",
                     "Invalid key provided.",0,0);
    *(undefined8 *)(param_1 + 8) = 0;
  }
LAB_00104838:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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
  return (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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
  return (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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
  return (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* HMACContext::is_class_ptr(void*) const */

uint __thiscall HMACContext::is_class_ptr(HMACContext *this,void *param_1)

{
  return (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* HMACContext::_getv(StringName const&, Variant&) const */

undefined8 HMACContext::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* HMACContext::_setv(StringName const&, Variant const&) */

undefined8 HMACContext::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* HMACContext::_validate_propertyv(PropertyInfo&) const */

void HMACContext::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* HMACContext::_property_can_revertv(StringName const&) const */

undefined8 HMACContext::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* HMACContext::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HMACContext::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* HMACContext::_notificationv(int, bool) */

void HMACContext::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Crypto::is_class_ptr(void*) const */

uint __thiscall Crypto::is_class_ptr(Crypto *this,void *param_1)

{
  return (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12cc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12cd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Crypto::_getv(StringName const&, Variant&) const */

undefined8 Crypto::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Crypto::_setv(StringName const&, Variant const&) */

undefined8 Crypto::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Crypto::_validate_propertyv(PropertyInfo&) const */

void Crypto::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Crypto::_property_can_revertv(StringName const&) const */

undefined8 Crypto::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Crypto::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Crypto::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Crypto::_notificationv(int, bool) */

void Crypto::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CryptoKeyMbedTLS::is_public_only() const */

CryptoKeyMbedTLS __thiscall CryptoKeyMbedTLS::is_public_only(CryptoKeyMbedTLS *this)

{
  return this[0x254];
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b798;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b798;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* X509CertificateMbedTLS::~X509CertificateMbedTLS() */

void __thiscall X509CertificateMbedTLS::~X509CertificateMbedTLS(X509CertificateMbedTLS *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010bef8;
  mbedtls_x509_crt_free();
  *(undefined ***)this = &PTR__initialize_classv_0010baf8;
  Resource::~Resource((Resource *)this);
  return;
}



/* CryptoKeyMbedTLS::~CryptoKeyMbedTLS() */

void __thiscall CryptoKeyMbedTLS::~CryptoKeyMbedTLS(CryptoKeyMbedTLS *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010bcf8;
  mbedtls_pk_free();
  *(undefined ***)this = &PTR__initialize_classv_0010b8f8;
  Resource::~Resource((Resource *)this);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105f2c(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CryptoMbedTLS::generate_self_signed_certificate(Ref<CryptoKey>, String const&, String const&,
   String const&) [clone .cold] */

void CryptoMbedTLS::generate_self_signed_certificate(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CryptoMbedTLS::generate_rsa(int) [clone .cold] */

void CryptoMbedTLS::generate_rsa(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* HMACContext::_get_class_namev() const */

undefined8 * HMACContext::_get_class_namev(void)

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
LAB_00105f93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105f93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HMACContext");
      goto LAB_00105ffe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HMACContext");
LAB_00105ffe:
  return &_get_class_namev()::_class_name_static;
}



/* CryptoKeyMbedTLS::~CryptoKeyMbedTLS() */

void __thiscall CryptoKeyMbedTLS::~CryptoKeyMbedTLS(CryptoKeyMbedTLS *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010bcf8;
  mbedtls_pk_free();
  *(undefined ***)this = &PTR__initialize_classv_0010b8f8;
  Resource::~Resource((Resource *)this);
  operator_delete(this,600);
  return;
}



/* X509CertificateMbedTLS::~X509CertificateMbedTLS() */

void __thiscall X509CertificateMbedTLS::~X509CertificateMbedTLS(X509CertificateMbedTLS *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010bef8;
  mbedtls_x509_crt_free();
  *(undefined ***)this = &PTR__initialize_classv_0010baf8;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x530);
  return;
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
LAB_00106113:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106113;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010617e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010617e:
  return &_get_class_namev()::_class_name_static;
}



/* Crypto::_get_class_namev() const */

undefined8 * Crypto::_get_class_namev(void)

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
LAB_001061f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001061f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Crypto");
      goto LAB_0010625e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Crypto");
LAB_0010625e:
  return &_get_class_namev()::_class_name_static;
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
LAB_001062d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001062d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CryptoKey");
      goto LAB_0010633e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CryptoKey");
LAB_0010633e:
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
LAB_001063c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001063c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"X509Certificate");
      goto LAB_0010642e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"X509Certificate");
LAB_0010642e:
  return &_get_class_namev()::_class_name_static;
}



/* OS::get_system_ca_certificates() */

OS * __thiscall OS::get_system_ca_certificates(OS *this)

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



/* HMACContext::get_class() const */

void HMACContext::get_class(void)

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



/* Crypto::get_class() const */

void Crypto::get_class(void)

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
            if (lVar5 == 0) goto LAB_001069cf;
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
LAB_001069cf:
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
    if (cVar6 != '\0') goto LAB_00106a83;
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
              if (lVar5 == 0) goto LAB_00106b33;
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
LAB_00106b33:
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
      if (cVar6 != '\0') goto LAB_00106a83;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00106a83:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HMACContext::is_class(String const&) const */

undefined8 __thiscall HMACContext::is_class(HMACContext *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00106c5f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00106c5f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00106d13;
  }
  cVar5 = String::operator==(param_1,"HMACContext");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106d13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Crypto::is_class(String const&) const */

undefined8 __thiscall Crypto::is_class(Crypto *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00106ddf;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00106ddf:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00106e93;
  }
  cVar5 = String::operator==(param_1,"Crypto");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106e93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
            if (lVar5 == 0) goto LAB_00106f6f;
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
LAB_00106f6f:
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
    if (cVar6 != '\0') goto LAB_00107023;
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
              if (lVar5 == 0) goto LAB_001070e3;
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
LAB_001070e3:
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
      if (cVar6 != '\0') goto LAB_00107023;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010718c;
    }
  }
LAB_00107023:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010718c:
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
            if (lVar5 == 0) goto LAB_0010720f;
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
LAB_0010720f:
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
    if (cVar6 != '\0') goto LAB_001072c3;
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
              if (lVar5 == 0) goto LAB_00107383;
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
LAB_00107383:
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
      if (cVar6 != '\0') goto LAB_001072c3;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010742c;
    }
  }
LAB_001072c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010742c:
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
    if ((code *)PTR__bind_methods_00130008 != Object::_bind_methods) {
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
LAB_00107748:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107748;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00107766;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00107766:
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



/* Crypto::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Crypto::_get_property_listv(Crypto *this,List *param_1,bool param_2)

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
  local_78 = "Crypto";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Crypto";
  local_98 = 0;
  local_70 = 6;
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
LAB_00107b48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107b48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107b65;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107b65:
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
  StringName::StringName((StringName *)&local_78,"Crypto",false);
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



/* HMACContext::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HMACContext::_get_property_listv(HMACContext *this,List *param_1,bool param_2)

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
  local_78 = "HMACContext";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HMACContext";
  local_98 = 0;
  local_70 = 0xb;
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
LAB_00107f98:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107f98;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107fb5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107fb5:
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
  StringName::StringName((StringName *)&local_78,"HMACContext",false);
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



/* HMACContext::_initialize_classv() */

void HMACContext::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_001083db;
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
    if (local_68 == 0) {
LAB_001084ea:
      if ((code *)PTR__bind_methods_00130018 != RefCounted::_bind_methods) {
LAB_001084fa:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001084ea;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00130018 != RefCounted::_bind_methods) goto LAB_001084fa;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "HMACContext";
  local_70 = 0;
  local_50 = 0xb;
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
  if ((code *)PTR__bind_methods_00130010 != RefCounted::_bind_methods) {
    HMACContext::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_001083db:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Crypto::_initialize_classv() */

void Crypto::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_001086db;
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
    if (local_68 == 0) {
LAB_001087ea:
      if ((code *)PTR__bind_methods_00130018 != RefCounted::_bind_methods) {
LAB_001087fa:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001087ea;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00130018 != RefCounted::_bind_methods) goto LAB_001087fa;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "Crypto";
  local_70 = 0;
  local_50 = 6;
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
  if ((code *)PTR__bind_methods_00130020 != RefCounted::_bind_methods) {
    Crypto::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_001086db:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
        if ((code *)PTR__bind_methods_00130018 != RefCounted::_bind_methods) {
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
    if ((code *)PTR__bind_methods_00130028 != Resource::_bind_methods) {
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
        if ((code *)PTR__bind_methods_00130018 != RefCounted::_bind_methods) {
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
    if ((code *)PTR__bind_methods_00130030 != Resource::_bind_methods) {
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
LAB_00109288:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109288;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001092a5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001092a5:
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
LAB_001096d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001096d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001096f5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001096f5:
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
LAB_00109b28:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109b28;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00109b45;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00109b45:
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



/* WARNING: Removing unreachable block (ram,0x00109f88) */
/* WARNING: Removing unreachable block (ram,0x0010a0b8) */
/* WARNING: Removing unreachable block (ram,0x0010a280) */
/* WARNING: Removing unreachable block (ram,0x0010a0c4) */
/* WARNING: Removing unreachable block (ram,0x0010a0ce) */
/* WARNING: Removing unreachable block (ram,0x0010a260) */
/* WARNING: Removing unreachable block (ram,0x0010a0da) */
/* WARNING: Removing unreachable block (ram,0x0010a0e4) */
/* WARNING: Removing unreachable block (ram,0x0010a240) */
/* WARNING: Removing unreachable block (ram,0x0010a0f0) */
/* WARNING: Removing unreachable block (ram,0x0010a0fa) */
/* WARNING: Removing unreachable block (ram,0x0010a220) */
/* WARNING: Removing unreachable block (ram,0x0010a106) */
/* WARNING: Removing unreachable block (ram,0x0010a110) */
/* WARNING: Removing unreachable block (ram,0x0010a200) */
/* WARNING: Removing unreachable block (ram,0x0010a11c) */
/* WARNING: Removing unreachable block (ram,0x0010a126) */
/* WARNING: Removing unreachable block (ram,0x0010a1e0) */
/* WARNING: Removing unreachable block (ram,0x0010a132) */
/* WARNING: Removing unreachable block (ram,0x0010a13c) */
/* WARNING: Removing unreachable block (ram,0x0010a1c0) */
/* WARNING: Removing unreachable block (ram,0x0010a144) */
/* WARNING: Removing unreachable block (ram,0x0010a15a) */
/* WARNING: Removing unreachable block (ram,0x0010a166) */
/* String vformat<unsigned int>(String const&, unsigned int const) */

String * vformat<unsigned_int>(String *param_1,uint param_2)

{
  char cVar1;
  Variant *this;
  uint in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010a3c8) */
/* WARNING: Removing unreachable block (ram,0x0010a4f8) */
/* WARNING: Removing unreachable block (ram,0x0010a6c0) */
/* WARNING: Removing unreachable block (ram,0x0010a504) */
/* WARNING: Removing unreachable block (ram,0x0010a50e) */
/* WARNING: Removing unreachable block (ram,0x0010a6a0) */
/* WARNING: Removing unreachable block (ram,0x0010a51a) */
/* WARNING: Removing unreachable block (ram,0x0010a524) */
/* WARNING: Removing unreachable block (ram,0x0010a680) */
/* WARNING: Removing unreachable block (ram,0x0010a530) */
/* WARNING: Removing unreachable block (ram,0x0010a53a) */
/* WARNING: Removing unreachable block (ram,0x0010a660) */
/* WARNING: Removing unreachable block (ram,0x0010a546) */
/* WARNING: Removing unreachable block (ram,0x0010a550) */
/* WARNING: Removing unreachable block (ram,0x0010a640) */
/* WARNING: Removing unreachable block (ram,0x0010a55c) */
/* WARNING: Removing unreachable block (ram,0x0010a566) */
/* WARNING: Removing unreachable block (ram,0x0010a620) */
/* WARNING: Removing unreachable block (ram,0x0010a572) */
/* WARNING: Removing unreachable block (ram,0x0010a57c) */
/* WARNING: Removing unreachable block (ram,0x0010a600) */
/* WARNING: Removing unreachable block (ram,0x0010a584) */
/* WARNING: Removing unreachable block (ram,0x0010a59a) */
/* WARNING: Removing unreachable block (ram,0x0010a5a6) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010a840) */
/* WARNING: Removing unreachable block (ram,0x0010a970) */
/* WARNING: Removing unreachable block (ram,0x0010aae9) */
/* WARNING: Removing unreachable block (ram,0x0010a97c) */
/* WARNING: Removing unreachable block (ram,0x0010a986) */
/* WARNING: Removing unreachable block (ram,0x0010aacb) */
/* WARNING: Removing unreachable block (ram,0x0010a992) */
/* WARNING: Removing unreachable block (ram,0x0010a99c) */
/* WARNING: Removing unreachable block (ram,0x0010aaad) */
/* WARNING: Removing unreachable block (ram,0x0010a9a8) */
/* WARNING: Removing unreachable block (ram,0x0010a9b2) */
/* WARNING: Removing unreachable block (ram,0x0010aa8f) */
/* WARNING: Removing unreachable block (ram,0x0010a9be) */
/* WARNING: Removing unreachable block (ram,0x0010a9c8) */
/* WARNING: Removing unreachable block (ram,0x0010aa71) */
/* WARNING: Removing unreachable block (ram,0x0010a9d4) */
/* WARNING: Removing unreachable block (ram,0x0010a9de) */
/* WARNING: Removing unreachable block (ram,0x0010aa53) */
/* WARNING: Removing unreachable block (ram,0x0010a9e6) */
/* WARNING: Removing unreachable block (ram,0x0010a9f0) */
/* WARNING: Removing unreachable block (ram,0x0010aa38) */
/* WARNING: Removing unreachable block (ram,0x0010a9f8) */
/* WARNING: Removing unreachable block (ram,0x0010aa0e) */
/* WARNING: Removing unreachable block (ram,0x0010aa1a) */
/* String vformat<String, int>(String const&, String const, int const) */

undefined8 * vformat<String,int>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010ac28) */
/* WARNING: Removing unreachable block (ram,0x0010ad58) */
/* WARNING: Removing unreachable block (ram,0x0010af20) */
/* WARNING: Removing unreachable block (ram,0x0010ad64) */
/* WARNING: Removing unreachable block (ram,0x0010ad6e) */
/* WARNING: Removing unreachable block (ram,0x0010af00) */
/* WARNING: Removing unreachable block (ram,0x0010ad7a) */
/* WARNING: Removing unreachable block (ram,0x0010ad84) */
/* WARNING: Removing unreachable block (ram,0x0010aee0) */
/* WARNING: Removing unreachable block (ram,0x0010ad90) */
/* WARNING: Removing unreachable block (ram,0x0010ad9a) */
/* WARNING: Removing unreachable block (ram,0x0010aec0) */
/* WARNING: Removing unreachable block (ram,0x0010ada6) */
/* WARNING: Removing unreachable block (ram,0x0010adb0) */
/* WARNING: Removing unreachable block (ram,0x0010aea0) */
/* WARNING: Removing unreachable block (ram,0x0010adbc) */
/* WARNING: Removing unreachable block (ram,0x0010adc6) */
/* WARNING: Removing unreachable block (ram,0x0010ae80) */
/* WARNING: Removing unreachable block (ram,0x0010add2) */
/* WARNING: Removing unreachable block (ram,0x0010addc) */
/* WARNING: Removing unreachable block (ram,0x0010ae60) */
/* WARNING: Removing unreachable block (ram,0x0010ade4) */
/* WARNING: Removing unreachable block (ram,0x0010adfa) */
/* WARNING: Removing unreachable block (ram,0x0010ae06) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void memdelete<X509CertificateMbedTLS>(X509CertificateMbedTLS*) */

void memdelete<X509CertificateMbedTLS>(X509CertificateMbedTLS *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == X509CertificateMbedTLS::~X509CertificateMbedTLS) {
    *(undefined ***)param_1 = &PTR__initialize_classv_0010bef8;
    mbedtls_x509_crt_free(param_1 + 0x240);
    *(undefined ***)param_1 = &PTR__initialize_classv_0010baf8;
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010b120) */
/* WARNING: Removing unreachable block (ram,0x0010b250) */
/* WARNING: Removing unreachable block (ram,0x0010b3c9) */
/* WARNING: Removing unreachable block (ram,0x0010b25c) */
/* WARNING: Removing unreachable block (ram,0x0010b266) */
/* WARNING: Removing unreachable block (ram,0x0010b3ab) */
/* WARNING: Removing unreachable block (ram,0x0010b272) */
/* WARNING: Removing unreachable block (ram,0x0010b27c) */
/* WARNING: Removing unreachable block (ram,0x0010b38d) */
/* WARNING: Removing unreachable block (ram,0x0010b288) */
/* WARNING: Removing unreachable block (ram,0x0010b292) */
/* WARNING: Removing unreachable block (ram,0x0010b36f) */
/* WARNING: Removing unreachable block (ram,0x0010b29e) */
/* WARNING: Removing unreachable block (ram,0x0010b2a8) */
/* WARNING: Removing unreachable block (ram,0x0010b351) */
/* WARNING: Removing unreachable block (ram,0x0010b2b4) */
/* WARNING: Removing unreachable block (ram,0x0010b2be) */
/* WARNING: Removing unreachable block (ram,0x0010b333) */
/* WARNING: Removing unreachable block (ram,0x0010b2c6) */
/* WARNING: Removing unreachable block (ram,0x0010b2d0) */
/* WARNING: Removing unreachable block (ram,0x0010b318) */
/* WARNING: Removing unreachable block (ram,0x0010b2d8) */
/* WARNING: Removing unreachable block (ram,0x0010b2ee) */
/* WARNING: Removing unreachable block (ram,0x0010b2fa) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
    *(undefined ***)param_1 = &PTR__initialize_classv_0010bef8;
    mbedtls_x509_crt_free(param_1 + 0x240);
    *(undefined ***)param_1 = &PTR__initialize_classv_0010baf8;
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
    *(undefined ***)param_1 = &PTR__initialize_classv_0010bcf8;
    mbedtls_pk_free(param_1 + 0x240);
    *(undefined ***)param_1 = &PTR__initialize_classv_0010b8f8;
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
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
    *(undefined ***)param_1 = &PTR__initialize_classv_0010bcf8;
    mbedtls_pk_free(param_1 + 0x240);
    *(undefined ***)param_1 = &PTR__initialize_classv_0010b8f8;
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

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
/* X509CertificateMbedTLS::~X509CertificateMbedTLS() */

void __thiscall X509CertificateMbedTLS::~X509CertificateMbedTLS(X509CertificateMbedTLS *this)

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



