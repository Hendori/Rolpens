
char * SSL_state_string_long(SSL *s)

{
  int iVar1;
  undefined4 uVar2;
  SSL *pSVar3;
  
  if (s == (SSL *)0x0) {
    return "error";
  }
  pSVar3 = s;
  if (((s->version == 0) ||
      (((s->version & 0x80U) != 0 &&
       (pSVar3 = (SSL *)ossl_quic_obj_get0_handshake_layer(), pSVar3 != (SSL *)0x0)))) &&
     (iVar1 = ossl_statem_in_error(pSVar3), iVar1 == 0)) {
    uVar2 = SSL_get_state(s);
    switch(uVar2) {
    case 0:
      return "before SSL initialization";
    case 1:
      return "SSL negotiation finished successfully";
    case 2:
      return "DTLS1 read hello verify request";
    case 3:
      return "SSLv3/TLS read server hello";
    case 4:
      return "SSLv3/TLS read server certificate";
    case 5:
      return "TLSv1.3 read server compressed certificate";
    case 6:
      return "SSLv3/TLS read certificate status";
    case 7:
      return "SSLv3/TLS read server key exchange";
    case 8:
      return "SSLv3/TLS read server certificate request";
    case 9:
      return "SSLv3/TLS read server done";
    case 10:
      return "SSLv3/TLS read server session ticket";
    case 0xb:
    case 0x23:
      return "SSLv3/TLS read change cipher spec";
    case 0xc:
    case 0x24:
      return "SSLv3/TLS read finished";
    case 0xd:
      return "SSLv3/TLS write client hello";
    case 0xe:
      return "SSLv3/TLS write client certificate";
    case 0xf:
      return "TLSv1.3 write client compressed certificate";
    case 0x10:
      return "SSLv3/TLS write client key exchange";
    case 0x11:
      return "SSLv3/TLS write certificate verify";
    case 0x12:
    case 0x27:
      return "SSLv3/TLS write change cipher spec";
    case 0x13:
      return "SSLv3/TLS write next proto";
    case 0x14:
    case 0x28:
      return "SSLv3/TLS write finished";
    case 0x15:
      return "SSLv3/TLS write hello request";
    case 0x16:
      return "SSLv3/TLS read client hello";
    case 0x17:
      return "DTLS1 write hello verify request";
    case 0x18:
      return "SSLv3/TLS write server hello";
    case 0x19:
      return "SSLv3/TLS write certificate";
    case 0x1a:
      return "TLSv1.3 write server compressed certificate";
    case 0x1b:
      return "SSLv3/TLS write key exchange";
    case 0x1c:
      return "SSLv3/TLS write certificate request";
    case 0x1d:
      return "SSLv3/TLS write server done";
    case 0x1e:
      return "SSLv3/TLS read client certificate";
    case 0x1f:
      return "TLSv1.3 read client compressed certificate";
    case 0x20:
      return "SSLv3/TLS read client key exchange";
    case 0x21:
      return "SSLv3/TLS read certificate verify";
    case 0x22:
      return "SSLv3/TLS read next proto";
    case 0x25:
      return "SSLv3/TLS write session ticket";
    case 0x26:
      return "SSLv3/TLS write certificate status";
    case 0x29:
      return "TLSv1.3 write encrypted extensions";
    case 0x2a:
      return "TLSv1.3 read encrypted extensions";
    case 0x2b:
      return "TLSv1.3 read server certificate verify";
    case 0x2c:
      return "TLSv1.3 write server certificate verify";
    case 0x2d:
      return "SSLv3/TLS read hello request";
    case 0x2e:
      return "TLSv1.3 write server key update";
    case 0x2f:
      return "TLSv1.3 write client key update";
    case 0x30:
      return "TLSv1.3 read client key update";
    case 0x31:
      return "TLSv1.3 read server key update";
    case 0x32:
      return "TLSv1.3 early data";
    case 0x33:
      return "TLSv1.3 pending early data end";
    case 0x34:
      return "TLSv1.3 write end of early data";
    case 0x35:
      return "TLSv1.3 read end of early data";
    default:
      return "unknown state";
    }
  }
  return "error";
}



char * SSL_state_string(SSL *s)

{
  int iVar1;
  undefined4 uVar2;
  SSL *pSVar3;
  
  if (s == (SSL *)0x0) {
    return "SSLERR";
  }
  pSVar3 = s;
  if (((s->version == 0) ||
      (((s->version & 0x80U) != 0 &&
       (pSVar3 = (SSL *)ossl_quic_obj_get0_handshake_layer(), pSVar3 != (SSL *)0x0)))) &&
     (iVar1 = ossl_statem_in_error(pSVar3), iVar1 == 0)) {
    uVar2 = SSL_get_state(s);
    switch(uVar2) {
    case 0:
      return "PINIT";
    case 1:
      return "SSLOK";
    case 2:
      return "DRCHV";
    case 3:
      return "TRSH";
    case 4:
      return "TRSC";
    case 5:
      return "TRSCC";
    case 6:
      return "TRCS";
    case 7:
      return "TRSKE";
    case 8:
      return "TRCR";
    case 9:
      return "TRSD";
    case 10:
      return "TRST";
    case 0xb:
    case 0x23:
      return "TRCCS";
    case 0xc:
    case 0x24:
      return "TRFIN";
    case 0xd:
      return "TWCH";
    case 0xe:
      return "TWCC";
    case 0xf:
      return "TWCCC";
    case 0x10:
      return "TWCKE";
    case 0x11:
      return "TWCV";
    case 0x12:
    case 0x27:
      return "TWCCS";
    case 0x13:
      return "TWNP";
    case 0x14:
    case 0x28:
      return "TWFIN";
    case 0x15:
      return "TWHR";
    case 0x16:
      return "TRCH";
    case 0x17:
      return "DWCHV";
    case 0x18:
      return "TWSH";
    case 0x19:
      return "TWSC";
    case 0x1a:
      return "TWSCC";
    case 0x1b:
      return "TWSKE";
    case 0x1c:
      return "TWCR";
    case 0x1d:
      return "TWSD";
    case 0x1e:
      return "TRCC";
    case 0x1f:
      return "TRCCC";
    case 0x20:
      return "TRCKE";
    case 0x21:
      return "TRCV";
    case 0x22:
      return "TRNP";
    case 0x25:
      return "TWST";
    case 0x26:
      return "TWCS";
    case 0x29:
      return "TWEE";
    case 0x2a:
      return "TREE";
    case 0x2b:
      return "TRSCV";
    case 0x2c:
      return "TWSCV";
    case 0x2d:
      return "TRHR";
    case 0x2e:
      return "TWSKU";
    case 0x2f:
      return "TWCKU";
    case 0x30:
      return "TRCKU";
    case 0x31:
      return "TRSKU";
    case 0x32:
      return "TED";
    case 0x33:
      return "TPEDE";
    case 0x34:
    case 0x35:
      return "TWEOED";
    default:
      return "UNKWN";
    }
  }
  return "SSLERR";
}



char * SSL_alert_type_string_long(int value)

{
  char *pcVar1;
  
  pcVar1 = "warning";
  if ((value >> 8 != 1) && (pcVar1 = "fatal", value >> 8 != 2)) {
    pcVar1 = "unknown";
  }
  return pcVar1;
}



char * SSL_alert_type_string(int value)

{
  char *pcVar1;
  
  pcVar1 = "W";
  if ((value >> 8 != 1) && (pcVar1 = "F", value >> 8 != 2)) {
    pcVar1 = "U";
  }
  return pcVar1;
}



char * SSL_alert_desc_string(int value)

{
  switch(value & 0xff) {
  case 0:
    return "CN";
  default:
    return "UK";
  case 10:
    return "UM";
  case 0x14:
    return "BM";
  case 0x15:
    return "DC";
  case 0x16:
    return "RO";
  case 0x1e:
    return "DF";
  case 0x28:
    return "HF";
  case 0x29:
    return "NC";
  case 0x2a:
    return "BC";
  case 0x2b:
    return "UC";
  case 0x2c:
    return "CR";
  case 0x2d:
    return "CE";
  case 0x2e:
    return "CU";
  case 0x2f:
    return "IP";
  case 0x30:
    return "CA";
  case 0x31:
    return "AD";
  case 0x32:
    return "DE";
  case 0x33:
    return "CY";
  case 0x3c:
    return "ER";
  case 0x46:
    return "PV";
  case 0x47:
    return "IS";
  case 0x50:
    return "IE";
  case 0x5a:
    return "US";
  case 100:
    return "NR";
  case 0x6e:
    return "UE";
  case 0x6f:
    return "CO";
  case 0x70:
    return "UN";
  case 0x71:
    return "BR";
  case 0x72:
    return "BH";
  case 0x73:
    return "UP";
  }
}



char * SSL_alert_desc_string_long(int value)

{
  switch(value & 0xff) {
  case 0:
    return "close notify";
  default:
    return "unknown";
  case 10:
    return "unexpected message";
  case 0x14:
    return "bad record mac";
  case 0x15:
    return "decryption failed";
  case 0x16:
    return "record overflow";
  case 0x1e:
    return "decompression failure";
  case 0x28:
    return "handshake failure";
  case 0x29:
    return "no certificate";
  case 0x2a:
    return "bad certificate";
  case 0x2b:
    return "unsupported certificate";
  case 0x2c:
    return "certificate revoked";
  case 0x2d:
    return "certificate expired";
  case 0x2e:
    return "certificate unknown";
  case 0x2f:
    return "illegal parameter";
  case 0x30:
    return "unknown CA";
  case 0x31:
    return "access denied";
  case 0x32:
    return "decode error";
  case 0x33:
    return "decrypt error";
  case 0x3c:
    return "export restriction";
  case 0x46:
    return "protocol version";
  case 0x47:
    return "insufficient security";
  case 0x50:
    return "internal error";
  case 0x5a:
    return "user canceled";
  case 100:
    return "no renegotiation";
  case 0x6e:
    return "unsupported extension";
  case 0x6f:
    return "certificate unobtainable";
  case 0x70:
    return "unrecognized name";
  case 0x71:
    return "bad certificate status response";
  case 0x72:
    return "bad certificate hash value";
  case 0x73:
    return "unknown PSK identity";
  case 0x78:
    return "no application protocol";
  }
}


