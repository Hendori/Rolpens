
/* initialize_mbedtls_module(ModuleInitializationLevel) */

void initialize_mbedtls_module(int param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [8];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 2) {
    Variant::Variant((Variant *)local_58,true);
    local_70 = 0;
    local_68 = "network/tls/enable_tls_v1.3";
    local_60 = 0x1b;
    String::parse_latin1((StrRange *)&local_70);
    _GLOBAL_DEF((String *)local_38,(Variant *)&local_70,SUB81((Variant *)local_58,0),false,false,
                false);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
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
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar4 = psa_crypto_init();
    if (iVar4 == 0) {
      OS::get_singleton();
      cVar3 = OS::is_stdout_verbose();
      if (cVar3 != '\0') {
        mbedtls_debug_set_threshold(1);
      }
      godot_mbedtls_initialized = 1;
      CryptoMbedTLS::initialize_crypto();
      StreamPeerMbedTLS::initialize_tls();
      PacketPeerMbedDTLS::initialize_dtls();
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        DTLSServerMbedTLS::initialize();
        return;
      }
      goto LAB_001001c6;
    }
    _err_print_error("initialize_mbedtls_module","modules/mbedtls/register_types.cpp",0x3b,
                     "Condition \"status != ((psa_status_t)0)\" is true.",
                     "Failed to initialize psa crypto. The mbedTLS modules will not work.",0,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001001c6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* uninitialize_mbedtls_module(ModuleInitializationLevel) */

void uninitialize_mbedtls_module(int param_1)

{
  if ((param_1 == 2) && (godot_mbedtls_initialized != '\0')) {
    mbedtls_psa_crypto_free();
    DTLSServerMbedTLS::finalize();
    PacketPeerMbedDTLS::finalize_dtls();
    StreamPeerMbedTLS::finalize_tls();
    CryptoMbedTLS::finalize_crypto();
    return;
  }
  return;
}


