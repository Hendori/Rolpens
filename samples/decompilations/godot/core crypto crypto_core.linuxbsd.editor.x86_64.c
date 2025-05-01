
/* CryptoCore::RandomGenerator::_entropy_poll(void*, unsigned char*, unsigned long, unsigned long*)
    */

undefined8
CryptoCore::RandomGenerator::_entropy_poll
          (void *param_1,uchar *param_2,ulong param_3,ulong *param_4)

{
  int iVar1;
  long *plVar2;
  
  *param_4 = 0;
  plVar2 = (long *)OS::get_singleton();
  iVar1 = (**(code **)(*plVar2 + 0x78))(plVar2,param_2,param_3 & 0xffffffff);
  if (iVar1 == 0) {
    *param_4 = param_3;
    return 0;
  }
  _err_print_error("_entropy_poll","core/crypto/crypto_core.cpp",0x41,
                   "Condition \"err\" is true. Returning: -0x003C",0,0);
  return 0xffffffc4;
}



/* CryptoCore::RandomGenerator::RandomGenerator() */

void __thiscall CryptoCore::RandomGenerator::RandomGenerator(RandomGenerator *this)

{
  undefined8 uVar1;
  
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  uVar1 = Memory::alloc_static(0x340,false);
  *(undefined8 *)this = uVar1;
  mbedtls_entropy_init(uVar1);
  mbedtls_entropy_add_source(*(undefined8 *)this,0x100000,0,0x100,1);
  uVar1 = Memory::alloc_static(0x158,false);
  *(undefined8 *)(this + 8) = uVar1;
  mbedtls_ctr_drbg_init(uVar1);
  return;
}



/* CryptoCore::RandomGenerator::~RandomGenerator() */

void __thiscall CryptoCore::RandomGenerator::~RandomGenerator(RandomGenerator *this)

{
  mbedtls_ctr_drbg_free(*(undefined8 *)(this + 8));
  Memory::free_static(*(void **)(this + 8),false);
  mbedtls_entropy_free(*(undefined8 *)this);
  Memory::free_static(*(void **)this,false);
  return;
}



/* CryptoCore::MD5Context::MD5Context() */

void __thiscall CryptoCore::MD5Context::MD5Context(MD5Context *this)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  uVar1 = Memory::alloc_static(0x58,false);
  *(undefined8 *)this = uVar1;
  mbedtls_md5_init(uVar1);
  return;
}



/* CryptoCore::MD5Context::~MD5Context() */

void __thiscall CryptoCore::MD5Context::~MD5Context(MD5Context *this)

{
  mbedtls_md5_free(*(undefined8 *)this);
  Memory::free_static(*(void **)this,false);
  return;
}



/* CryptoCore::MD5Context::start() */

bool __thiscall CryptoCore::MD5Context::start(MD5Context *this)

{
  int iVar1;
  
  iVar1 = mbedtls_md5_starts(*(undefined8 *)this);
  return iVar1 != 0;
}



/* CryptoCore::MD5Context::update(unsigned char const*, unsigned long) */

bool CryptoCore::MD5Context::update(uchar *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = mbedtls_md5_update(*(undefined8 *)param_1);
  return iVar1 != 0;
}



/* CryptoCore::MD5Context::finish(unsigned char*) */

bool CryptoCore::MD5Context::finish(uchar *param_1)

{
  int iVar1;
  
  iVar1 = mbedtls_md5_finish(*(undefined8 *)param_1);
  return iVar1 != 0;
}



/* CryptoCore::SHA1Context::SHA1Context() */

void __thiscall CryptoCore::SHA1Context::SHA1Context(SHA1Context *this)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  uVar1 = Memory::alloc_static(0x5c,false);
  *(undefined8 *)this = uVar1;
  mbedtls_sha1_init(uVar1);
  return;
}



/* CryptoCore::SHA1Context::~SHA1Context() */

void __thiscall CryptoCore::SHA1Context::~SHA1Context(SHA1Context *this)

{
  mbedtls_sha1_free(*(undefined8 *)this);
  Memory::free_static(*(void **)this,false);
  return;
}



/* CryptoCore::SHA1Context::start() */

bool __thiscall CryptoCore::SHA1Context::start(SHA1Context *this)

{
  int iVar1;
  
  iVar1 = mbedtls_sha1_starts(*(undefined8 *)this);
  return iVar1 != 0;
}



/* CryptoCore::SHA1Context::update(unsigned char const*, unsigned long) */

bool CryptoCore::SHA1Context::update(uchar *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = mbedtls_sha1_update(*(undefined8 *)param_1);
  return iVar1 != 0;
}



/* CryptoCore::SHA1Context::finish(unsigned char*) */

bool CryptoCore::SHA1Context::finish(uchar *param_1)

{
  int iVar1;
  
  iVar1 = mbedtls_sha1_finish(*(undefined8 *)param_1);
  return iVar1 != 0;
}



/* CryptoCore::SHA256Context::SHA256Context() */

void __thiscall CryptoCore::SHA256Context::SHA256Context(SHA256Context *this)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  uVar1 = Memory::alloc_static(0x6c,false);
  *(undefined8 *)this = uVar1;
  mbedtls_sha256_init(uVar1);
  return;
}



/* CryptoCore::SHA256Context::~SHA256Context() */

void __thiscall CryptoCore::SHA256Context::~SHA256Context(SHA256Context *this)

{
  mbedtls_sha256_free(*(undefined8 *)this);
  Memory::free_static(*(void **)this,false);
  return;
}



/* CryptoCore::SHA256Context::start() */

bool __thiscall CryptoCore::SHA256Context::start(SHA256Context *this)

{
  int iVar1;
  
  iVar1 = mbedtls_sha256_starts(*(undefined8 *)this,0);
  return iVar1 != 0;
}



/* CryptoCore::SHA256Context::update(unsigned char const*, unsigned long) */

bool CryptoCore::SHA256Context::update(uchar *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = mbedtls_sha256_update(*(undefined8 *)param_1);
  return iVar1 != 0;
}



/* CryptoCore::SHA256Context::finish(unsigned char*) */

bool CryptoCore::SHA256Context::finish(uchar *param_1)

{
  int iVar1;
  
  iVar1 = mbedtls_sha256_finish(*(undefined8 *)param_1);
  return iVar1 != 0;
}



/* CryptoCore::AESContext::AESContext() */

void __thiscall CryptoCore::AESContext::AESContext(AESContext *this)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  uVar1 = Memory::alloc_static(0x120,false);
  *(undefined8 *)this = uVar1;
  mbedtls_aes_init(uVar1);
  return;
}



/* CryptoCore::AESContext::~AESContext() */

void __thiscall CryptoCore::AESContext::~AESContext(AESContext *this)

{
  mbedtls_aes_free(*(undefined8 *)this);
  Memory::free_static(*(void **)this,false);
  return;
}



/* CryptoCore::AESContext::set_encode_key(unsigned char const*, unsigned long) */

bool CryptoCore::AESContext::set_encode_key(uchar *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = mbedtls_aes_setkey_enc(*(undefined8 *)param_1);
  return iVar1 != 0;
}



/* CryptoCore::AESContext::set_decode_key(unsigned char const*, unsigned long) */

bool CryptoCore::AESContext::set_decode_key(uchar *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = mbedtls_aes_setkey_dec(*(undefined8 *)param_1);
  return iVar1 != 0;
}



/* CryptoCore::AESContext::encrypt_ecb(unsigned char const*, unsigned char*) */

bool __thiscall CryptoCore::AESContext::encrypt_ecb(AESContext *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = mbedtls_aes_crypt_ecb(*(undefined8 *)this,1,param_1,param_2);
  return iVar1 != 0;
}



/* CryptoCore::AESContext::encrypt_cbc(unsigned long, unsigned char*, unsigned char const*, unsigned
   char*) */

bool __thiscall
CryptoCore::AESContext::encrypt_cbc
          (AESContext *this,ulong param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  int iVar1;
  
  iVar1 = mbedtls_aes_crypt_cbc(*(undefined8 *)this,1,param_1,param_2,param_3,param_4);
  return iVar1 != 0;
}



/* CryptoCore::AESContext::encrypt_cfb(unsigned long, unsigned char*, unsigned char const*, unsigned
   char*) */

bool __thiscall
CryptoCore::AESContext::encrypt_cfb
          (AESContext *this,ulong param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  iVar1 = mbedtls_aes_crypt_cfb128(*(undefined8 *)this,1,param_1,&local_18,param_2,param_3,param_4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoCore::AESContext::decrypt_ecb(unsigned char const*, unsigned char*) */

bool __thiscall CryptoCore::AESContext::decrypt_ecb(AESContext *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = mbedtls_aes_crypt_ecb(*(undefined8 *)this,0,param_1,param_2);
  return iVar1 != 0;
}



/* CryptoCore::AESContext::decrypt_cbc(unsigned long, unsigned char*, unsigned char const*, unsigned
   char*) */

bool __thiscall
CryptoCore::AESContext::decrypt_cbc
          (AESContext *this,ulong param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  int iVar1;
  
  iVar1 = mbedtls_aes_crypt_cbc(*(undefined8 *)this,0,param_1,param_2,param_3,param_4);
  return iVar1 != 0;
}



/* CryptoCore::AESContext::decrypt_cfb(unsigned long, unsigned char*, unsigned char const*, unsigned
   char*) */

bool __thiscall
CryptoCore::AESContext::decrypt_cfb
          (AESContext *this,ulong param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  iVar1 = mbedtls_aes_crypt_cfb128(*(undefined8 *)this,0,param_1,&local_18,param_2,param_3,param_4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoCore::b64_encode(unsigned char*, int, unsigned long*, unsigned char const*, int) */

bool CryptoCore::b64_encode(uchar *param_1,int param_2,ulong *param_3,uchar *param_4,int param_5)

{
  int iVar1;
  
  iVar1 = mbedtls_base64_encode(param_1,(long)param_2,param_3,param_4,(long)param_5);
  return iVar1 != 0;
}



/* CryptoCore::b64_decode(unsigned char*, int, unsigned long*, unsigned char const*, int) */

bool CryptoCore::b64_decode(uchar *param_1,int param_2,ulong *param_3,uchar *param_4,int param_5)

{
  int iVar1;
  
  iVar1 = mbedtls_base64_decode(param_1,(long)param_2,param_3,param_4,(long)param_5);
  return iVar1 != 0;
}



/* CryptoCore::md5(unsigned char const*, int, unsigned char*) */

bool CryptoCore::md5(uchar *param_1,int param_2,uchar *param_3)

{
  int iVar1;
  
  iVar1 = mbedtls_md5(param_1,(long)param_2);
  return iVar1 != 0;
}



/* CryptoCore::sha1(unsigned char const*, int, unsigned char*) */

bool CryptoCore::sha1(uchar *param_1,int param_2,uchar *param_3)

{
  int iVar1;
  
  iVar1 = mbedtls_sha1(param_1,(long)param_2);
  return iVar1 != 0;
}



/* CryptoCore::sha256(unsigned char const*, int, unsigned char*) */

bool CryptoCore::sha256(uchar *param_1,int param_2,uchar *param_3)

{
  int iVar1;
  
  iVar1 = mbedtls_sha256(param_1,(long)param_2,param_3,0);
  return iVar1 != 0;
}



/* CryptoCore::RandomGenerator::init() */

undefined8 __thiscall CryptoCore::RandomGenerator::init(RandomGenerator *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = mbedtls_ctr_drbg_seed
                    (*(undefined8 *)(this + 8),&mbedtls_entropy_func,*(undefined8 *)this,0,0);
  uVar5 = 0;
  if (iVar4 != 0) {
    local_40 = 0;
    local_30 = 0x37;
    local_38 = " failed\n  ! mbedtls_ctr_drbg_seed returned an error %d.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<int>((String_conflict *)&local_38,(int)(StrRange *)&local_40);
    _err_print_error(&_LC11,"core/crypto/crypto_core.cpp",0x49,
                     "Condition \"ret\" is true. Returning: FAILED",(String_conflict *)&local_38,0,0
                    );
    pcVar3 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    uVar5 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoCore::RandomGenerator::get_random_bytes(unsigned char*, unsigned long) */

undefined8 CryptoCore::RandomGenerator::get_random_bytes(uchar *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    _err_print_error("get_random_bytes","core/crypto/crypto_core.cpp",0x4f,
                     "Parameter \"ctx\" is null.",0,0);
    uVar5 = 3;
  }
  else {
    iVar4 = mbedtls_ctr_drbg_random();
    uVar5 = 0;
    if (iVar4 != 0) {
      local_40 = 0;
      local_30 = 0x37;
      local_38 = " failed\n  ! mbedtls_ctr_drbg_seed returned an error %d.";
      String::parse_latin1((StrRange *)&local_40);
      vformat<int>((String_conflict *)&local_38,(int)(StrRange *)&local_40);
      _err_print_error("get_random_bytes","core/crypto/crypto_core.cpp",0x51,
                       "Condition \"ret\" is true. Returning: FAILED",(String_conflict *)&local_38,0
                       ,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar5 = 1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CryptoCore::b64_encode_str(unsigned char const*, int) */

CryptoCore * __thiscall CryptoCore::b64_encode_str(CryptoCore *this,uchar *param_1,int param_2)

{
  ulong *__src;
  size_t __n;
  int iVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  long in_FS_OFFSET;
  undefined1 *local_70 [2];
  ulong *local_60;
  ulong *local_58;
  size_t local_50;
  long local_40;
  
  lVar6 = (long)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (param_2 / 3) * 4 + 5;
  uVar5 = (ulong)iVar1;
  if (iVar1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
  }
  else {
    uVar4 = uVar5 - 1 | uVar5 - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    puVar2 = (ulong *)Memory::alloc_static((uVar4 | uVar4 >> 0x10) + 0x11,false);
    if (puVar2 != (ulong *)0x0) {
      __src = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = uVar5;
      local_60 = __src;
      if (*puVar2 < 2) {
LAB_0010092b:
        local_70[0] = (undefined1 *)0x0;
        iVar1 = mbedtls_base64_encode(__src,uVar5,local_70,param_1,lVar6);
        puVar7 = __src;
        if (iVar1 == 0) {
LAB_0010094e:
          *(undefined1 *)((long)puVar7 + (long)local_70[0]) = 0;
          *(undefined8 *)this = 0;
          local_50 = strlen((char *)puVar7);
          local_58 = puVar7;
          String::parse_latin1((StrRange *)this);
        }
        else {
          *(undefined1 *)((long)(puVar2 + 2) + (long)local_70[0]) = 0;
          *(undefined8 *)this = 0;
        }
      }
      else {
        __n = puVar2[1];
        uVar4 = 0x10;
        if (__n != 0) {
          uVar4 = __n - 1 | __n - 1 >> 1;
          uVar4 = uVar4 | uVar4 >> 2;
          uVar4 = uVar4 | uVar4 >> 4;
          uVar4 = uVar4 | uVar4 >> 8;
          uVar4 = uVar4 | uVar4 >> 0x10;
          uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
        if (puVar3 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_0010092b;
        }
        puVar7 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = __n;
        memcpy(puVar7,__src,__n);
        LOCK();
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if (*puVar2 == 0) {
          Memory::free_static(puVar2,false);
        }
        local_70[0] = (undefined1 *)0x0;
        local_60 = puVar7;
        iVar1 = mbedtls_base64_encode(puVar7,uVar5,local_70,param_1,lVar6);
        if (iVar1 == 0) goto LAB_0010094e;
        *(undefined1 *)((long)(puVar3 + 2) + (long)local_70[0]) = 0;
        *(undefined8 *)this = 0;
      }
      LOCK();
      puVar7 = puVar7 + -2;
      *puVar7 = *puVar7 - 1;
      UNLOCK();
      if (*puVar7 == 0) {
        Memory::free_static(local_60 + -2,false);
      }
      goto LAB_00100996;
    }
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
  }
  local_70[0] = (undefined1 *)0x0;
  iVar1 = mbedtls_base64_encode(0,uVar5,local_70,param_1,lVar6);
  if (iVar1 == 0) {
    *local_70[0] = 0;
    *(undefined8 *)this = 0;
    local_58 = (ulong *)0x0;
    local_50 = 0;
    String::parse_latin1((StrRange *)this);
  }
  else {
    *local_70[0] = 0;
    *(undefined8 *)this = 0;
  }
LAB_00100996:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00100eb8) */
/* WARNING: Removing unreachable block (ram,0x00100fe8) */
/* WARNING: Removing unreachable block (ram,0x001011b0) */
/* WARNING: Removing unreachable block (ram,0x00100ff4) */
/* WARNING: Removing unreachable block (ram,0x00100ffe) */
/* WARNING: Removing unreachable block (ram,0x00101190) */
/* WARNING: Removing unreachable block (ram,0x0010100a) */
/* WARNING: Removing unreachable block (ram,0x00101014) */
/* WARNING: Removing unreachable block (ram,0x00101170) */
/* WARNING: Removing unreachable block (ram,0x00101020) */
/* WARNING: Removing unreachable block (ram,0x0010102a) */
/* WARNING: Removing unreachable block (ram,0x00101150) */
/* WARNING: Removing unreachable block (ram,0x00101036) */
/* WARNING: Removing unreachable block (ram,0x00101040) */
/* WARNING: Removing unreachable block (ram,0x00101130) */
/* WARNING: Removing unreachable block (ram,0x0010104c) */
/* WARNING: Removing unreachable block (ram,0x00101056) */
/* WARNING: Removing unreachable block (ram,0x00101110) */
/* WARNING: Removing unreachable block (ram,0x00101062) */
/* WARNING: Removing unreachable block (ram,0x0010106c) */
/* WARNING: Removing unreachable block (ram,0x001010f0) */
/* WARNING: Removing unreachable block (ram,0x00101074) */
/* WARNING: Removing unreachable block (ram,0x0010108a) */
/* WARNING: Removing unreachable block (ram,0x00101096) */
/* String vformat<int>(String const&, int const) */

String_conflict * vformat<int>(String_conflict *param_1,int param_2)

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


