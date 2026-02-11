
char * mbedtls_ssl_named_group_to_str(ushort param_1)

{
  char *pcVar1;
  
  if (param_1 < 0x1f) {
    if (param_1 < 0x12) {
      return "UNKNOWN";
    }
    pcVar1 = "secp192k1";
    switch(param_1) {
    case 0x13:
      pcVar1 = "secp192r1";
      break;
    case 0x14:
      return "secp224k1";
    case 0x15:
      return "secp224r1";
    case 0x16:
      return "secp256k1";
    case 0x17:
      return "secp256r1";
    case 0x18:
      return "secp384r1";
    case 0x19:
      return "secp521r1";
    case 0x1a:
      return "bp256r1";
    case 0x1b:
      return "bp384r1";
    case 0x1c:
      return "bp512r1";
    case 0x1d:
      return "x25519";
    case 0x1e:
      return "x448";
    }
  }
  else {
    if (4 < (ushort)(param_1 - 0x100)) {
      return "UNKNOWN";
    }
    pcVar1 = "ffdhe2048";
    switch(param_1) {
    case 0x101:
      return "ffdhe3072";
    case 0x102:
      return "ffdhe4096";
    case 0x103:
      return "ffdhe6144";
    case 0x104:
      return "ffdhe8192";
    }
  }
  return pcVar1;
}



char * mbedtls_ssl_sig_alg_to_str(ushort param_1)

{
  char *pcVar1;
  
  pcVar1 = "ecdsa_secp521r1_sha512";
  if (param_1 != 0x603) {
    if (param_1 < 0x604) {
      pcVar1 = "ecdsa_secp256r1_sha256";
      if (param_1 != 0x403) {
        if (param_1 < 0x404) {
          pcVar1 = "ecdsa_sha1";
          if (param_1 != 0x203) {
            if (0x203 < param_1) {
              pcVar1 = "UNKNOWN";
              if (param_1 == 0x401) {
                pcVar1 = "rsa_pkcs1_sha256";
              }
              return pcVar1;
            }
            pcVar1 = "none";
            if (param_1 != 0) {
              pcVar1 = "UNKNOWN";
              if (param_1 == 0x201) {
                pcVar1 = "rsa_pkcs1_sha1";
              }
              return pcVar1;
            }
          }
        }
        else {
          pcVar1 = "ecdsa_secp384r1_sha384";
          if ((param_1 != 0x503) && (pcVar1 = "rsa_pkcs1_sha512", param_1 != 0x601)) {
            pcVar1 = "UNKNOWN";
            if (param_1 == 0x501) {
              pcVar1 = "rsa_pkcs1_sha384";
            }
            return pcVar1;
          }
        }
      }
    }
    else {
      if (7 < (ushort)(param_1 - 0x804)) {
        return "UNKNOWN";
      }
      pcVar1 = "rsa_pss_rsae_sha256";
      switch(param_1) {
      case 0x805:
        return "rsa_pss_rsae_sha384";
      case 0x806:
        return "rsa_pss_rsae_sha512";
      case 0x807:
        return "ed25519";
      case 0x808:
        return "ed448";
      case 0x809:
        return "rsa_pss_pss_sha256";
      case 0x80a:
        return "rsa_pss_pss_sha384";
      case 0x80b:
        pcVar1 = "rsa_pss_pss_sha512";
      }
    }
  }
  return pcVar1;
}



char * mbedtls_ssl_states_str(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "MBEDTLS_SSL_HELLO_REQUEST";
  case 1:
    return "MBEDTLS_SSL_CLIENT_HELLO";
  case 2:
    return "MBEDTLS_SSL_SERVER_HELLO";
  case 3:
    return "MBEDTLS_SSL_SERVER_CERTIFICATE";
  case 4:
    return "MBEDTLS_SSL_SERVER_KEY_EXCHANGE";
  case 5:
    return "MBEDTLS_SSL_CERTIFICATE_REQUEST";
  case 6:
    return "MBEDTLS_SSL_SERVER_HELLO_DONE";
  case 7:
    return "MBEDTLS_SSL_CLIENT_CERTIFICATE";
  case 8:
    return "MBEDTLS_SSL_CLIENT_KEY_EXCHANGE";
  case 9:
    return "MBEDTLS_SSL_CERTIFICATE_VERIFY";
  case 10:
    return "MBEDTLS_SSL_CLIENT_CHANGE_CIPHER_SPEC";
  case 0xb:
    return "MBEDTLS_SSL_CLIENT_FINISHED";
  case 0xc:
    return "MBEDTLS_SSL_SERVER_CHANGE_CIPHER_SPEC";
  case 0xd:
    return "MBEDTLS_SSL_SERVER_FINISHED";
  case 0xe:
    return "MBEDTLS_SSL_FLUSH_BUFFERS";
  case 0xf:
    return "MBEDTLS_SSL_HANDSHAKE_WRAPUP";
  case 0x10:
    return "MBEDTLS_SSL_NEW_SESSION_TICKET";
  case 0x11:
    return "MBEDTLS_SSL_SERVER_HELLO_VERIFY_REQUEST_SENT";
  case 0x12:
    return "MBEDTLS_SSL_HELLO_RETRY_REQUEST";
  case 0x13:
    return "MBEDTLS_SSL_ENCRYPTED_EXTENSIONS";
  case 0x14:
    return "MBEDTLS_SSL_END_OF_EARLY_DATA";
  case 0x15:
    return "MBEDTLS_SSL_CLIENT_CERTIFICATE_VERIFY";
  case 0x16:
    return "MBEDTLS_SSL_CLIENT_CCS_AFTER_SERVER_FINISHED";
  case 0x17:
    return "MBEDTLS_SSL_CLIENT_CCS_BEFORE_2ND_CLIENT_HELLO";
  case 0x18:
    return "MBEDTLS_SSL_SERVER_CCS_AFTER_SERVER_HELLO";
  case 0x19:
    return "MBEDTLS_SSL_CLIENT_CCS_AFTER_CLIENT_HELLO";
  case 0x1a:
    return "MBEDTLS_SSL_SERVER_CCS_AFTER_HELLO_RETRY_REQUEST";
  case 0x1b:
    return "MBEDTLS_SSL_HANDSHAKE_OVER";
  case 0x1c:
    return "MBEDTLS_SSL_TLS1_3_NEW_SESSION_TICKET";
  case 0x1d:
    return "MBEDTLS_SSL_TLS1_3_NEW_SESSION_TICKET_FLUSH";
  default:
    return "UNKNOWN_VALUE";
  }
}



char * mbedtls_ssl_protocol_version_str(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "MBEDTLS_SSL_VERSION_TLS1_2";
  if (((param_1 != 0x303) && (pcVar1 = "MBEDTLS_SSL_VERSION_TLS1_3", param_1 != 0x304)) &&
     (pcVar1 = "MBEDTLS_SSL_VERSION_UNKNOWN", param_1 != 0)) {
    pcVar1 = "UNKNOWN_VALUE";
  }
  return pcVar1;
}



char * mbedtls_tls_prf_types_str(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "MBEDTLS_SSL_TLS_PRF_NONE";
  case 1:
    return "MBEDTLS_SSL_TLS_PRF_SHA384";
  case 2:
    return "MBEDTLS_SSL_TLS_PRF_SHA256";
  case 3:
    return "MBEDTLS_SSL_HKDF_EXPAND_SHA384";
  case 4:
    return "MBEDTLS_SSL_HKDF_EXPAND_SHA256";
  default:
    return "UNKNOWN_VALUE";
  }
}



char * mbedtls_ssl_key_export_type_str(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "MBEDTLS_SSL_KEY_EXPORT_TLS12_MASTER_SECRET";
  case 1:
    return "MBEDTLS_SSL_KEY_EXPORT_TLS1_3_CLIENT_EARLY_SECRET";
  case 2:
    return "MBEDTLS_SSL_KEY_EXPORT_TLS1_3_EARLY_EXPORTER_SECRET";
  case 3:
    return "MBEDTLS_SSL_KEY_EXPORT_TLS1_3_CLIENT_HANDSHAKE_TRAFFIC_SECRET";
  case 4:
    return "MBEDTLS_SSL_KEY_EXPORT_TLS1_3_SERVER_HANDSHAKE_TRAFFIC_SECRET";
  case 5:
    return "MBEDTLS_SSL_KEY_EXPORT_TLS1_3_CLIENT_APPLICATION_TRAFFIC_SECRET";
  case 6:
    return "MBEDTLS_SSL_KEY_EXPORT_TLS1_3_SERVER_APPLICATION_TRAFFIC_SECRET";
  default:
    return "UNKNOWN_VALUE";
  }
}


