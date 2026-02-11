
char * mbedtls_high_level_strerr(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = -param_1;
  if (0 < (int)param_1) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 & 0xff80;
  if (uVar1 == 0x5100) {
    pcVar2 = "MD - Bad input parameters to function";
  }
  else if (uVar1 < 0x5101) {
    if (uVar1 == 0x2f80) {
      pcVar2 = "PKCS5 - Bad input parameters to function";
    }
    else if (uVar1 < 0x2f81) {
      pcVar2 = "X509 - The serial tag or value is invalid";
      if (uVar1 != 0x2280) {
        if (uVar1 < 0x2281) {
          pcVar2 = "PEM - Bad input parameters to function";
          if (uVar1 != 0x1480) {
            if (uVar1 < 0x1481) {
              pcVar2 = "PEM - Unsupported key encryption algorithm";
              if (uVar1 != 0x1280) {
                if (uVar1 < 0x1281) {
                  pcVar2 = "PEM - Failed to allocate memory";
                  if (uVar1 != 0x1180) {
                    if (uVar1 < 0x1181) {
                      pcVar2 = "PEM - No PEM header or footer found";
                      if ((uVar1 != 0x1080) &&
                         (pcVar2 = "PEM - PEM string is not as expected", uVar1 != 0x1100)) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                    else {
                      pcVar2 = "PEM - RSA IV is not in hex-format";
                      if (uVar1 != 0x1200) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                  }
                }
                else {
                  pcVar2 = "PEM - Given private key password does not allow for correct decryption";
                  if (((uVar1 != 0x1380) &&
                      (pcVar2 = "PEM - Unavailable feature, e.g. hashing/encryption combination",
                      uVar1 != 0x1400)) &&
                     (pcVar2 = "PEM - Private key password can\'t be empty", uVar1 != 0x1300)) {
                    pcVar2 = (char *)0x0;
                  }
                }
              }
            }
            else {
              pcVar2 = "X509 - Unavailable feature, e.g. RSA hashing/encryption combination";
              if (uVar1 != 0x2080) {
                if (uVar1 < 0x2081) {
                  pcVar2 = "PKCS12 - Feature not available, e.g. unsupported encryption scheme";
                  if (uVar1 != 0x1f00) {
                    if (uVar1 < 0x1f01) {
                      pcVar2 = 
                      "PKCS12 - Given private key password does not allow for correct decryption";
                      if ((uVar1 != 0x1e00) &&
                         (pcVar2 = "PKCS12 - PBE ASN.1 data not as expected", uVar1 != 0x1e80)) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                    else {
                      pcVar2 = "PKCS12 - Bad input parameters to function";
                      if (uVar1 != 0x1f80) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                  }
                }
                else {
                  pcVar2 = "X509 - The CRT/CRL/CSR format is invalid, e.g. different type expected";
                  if (((uVar1 != 0x2180) &&
                      (pcVar2 = "X509 - The CRT/CRL/CSR version element is invalid", uVar1 != 0x2200
                      )) && (pcVar2 = "X509 - Requested OID is unknown", uVar1 != 0x2100)) {
                    pcVar2 = (char *)0x0;
                  }
                }
              }
            }
          }
        }
        else {
          pcVar2 = "X509 - Certificate verification failed, e.g. CRL, CA or signature check failed";
          if (uVar1 != 0x2700) {
            if (uVar1 < 0x2701) {
              pcVar2 = "X509 - The extension tag or value is invalid";
              if (uVar1 != 0x2500) {
                if (uVar1 < 0x2501) {
                  pcVar2 = "X509 - The date tag or value is invalid";
                  if (uVar1 != 0x2400) {
                    if (uVar1 < 0x2401) {
                      pcVar2 = "X509 - The algorithm tag or value is invalid";
                      if ((uVar1 != 0x2300) &&
                         (pcVar2 = "X509 - The name tag or value is invalid", uVar1 != 0x2380)) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                    else {
                      pcVar2 = "X509 - The signature tag or value invalid";
                      if (uVar1 != 0x2480) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                  }
                }
                else {
                  pcVar2 = "X509 - Signature algorithm (oid) is unsupported";
                  if (((uVar1 != 0x2600) &&
                      (pcVar2 = 
                       "X509 - Signature algorithms do not match. (see \\c ::mbedtls_x509_crt sig_oid)"
                      , uVar1 != 0x2680)) &&
                     (pcVar2 = "X509 - CRT/CRL/CSR has an unsupported version number",
                     uVar1 != 0x2580)) {
                    pcVar2 = (char *)0x0;
                  }
                }
              }
            }
            else {
              pcVar2 = "X509 - Destination buffer is too small";
              if (uVar1 != 0x2980) {
                if (uVar1 < 0x2981) {
                  pcVar2 = "X509 - Allocation of memory failed";
                  if (uVar1 != 0x2880) {
                    if (uVar1 < 0x2881) {
                      pcVar2 = "X509 - Format not recognized as DER or PEM";
                      if ((uVar1 != 0x2780) && (pcVar2 = "X509 - Input invalid", uVar1 != 0x2800)) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                    else {
                      pcVar2 = "X509 - Read/write of file failed";
                      if (uVar1 != 0x2900) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                  }
                }
                else {
                  pcVar2 = "PKCS5 - Requested encryption or digest alg not available";
                  if (((uVar1 != 0x2e80) &&
                      (pcVar2 = "PKCS5 - Unexpected ASN.1 data", uVar1 != 0x2f00)) &&
                     (pcVar2 = 
                      "PKCS5 - Given private key password does not allow for correct decryption",
                     uVar1 != 0x2e00)) {
                    pcVar2 = (char *)0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      pcVar2 = "RSA - Input data contains invalid padding and is rejected";
      if (uVar1 != 0x4100) {
        if (uVar1 < 0x4101) {
          pcVar2 = "PK - Private key password can\'t be empty";
          if (uVar1 != 0x3c00) {
            if (uVar1 < 0x3c01) {
              pcVar2 = "PK - Elliptic curve is unsupported (only NIST curves are supported)";
              if (uVar1 != 0x3a00) {
                if (uVar1 < 0x3a01) {
                  pcVar2 = "PK - The buffer contains a valid signature followed by more data";
                  if (uVar1 != 0x3900) {
                    if (uVar1 < 0x3901) {
                      pcVar2 = 
                      "X509 - A fatal error occurred, eg the chain is too long or the vrfy callback failed"
                      ;
                      if ((uVar1 != 0x3000) &&
                         (pcVar2 = "PK - The output buffer is too small", uVar1 != 0x3880)) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                    else {
                      pcVar2 = "PK - Unavailable feature, e.g. RSA disabled for RSA key";
                      if (uVar1 != 0x3980) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                  }
                }
                else {
                  pcVar2 = "PK - The pubkey tag or value is invalid (only RSA and EC are supported)"
                  ;
                  if (((uVar1 != 0x3b00) &&
                      (pcVar2 = 
                       "PK - Given private key password does not allow for correct decryption",
                      uVar1 != 0x3b80)) &&
                     (pcVar2 = "PK - The algorithm tag or value is invalid", uVar1 != 0x3a80)) {
                    pcVar2 = (char *)0x0;
                  }
                }
              }
            }
            else {
              pcVar2 = "PK - Bad input parameters to function";
              if (uVar1 != 16000) {
                if (uVar1 < 0x3e81) {
                  pcVar2 = "PK - Unsupported key version";
                  if (uVar1 != 0x3d80) {
                    if (uVar1 < 0x3d81) {
                      pcVar2 = "PK - Key algorithm is unsupported (only RSA and EC are supported)";
                      if ((uVar1 != 0x3c80) &&
                         (pcVar2 = "PK - Invalid key tag or value", uVar1 != 0x3d00)) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                    else {
                      pcVar2 = "PK - Read/write of file failed";
                      if (uVar1 != 0x3e00) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                  }
                }
                else {
                  pcVar2 = "PK - Memory allocation failed";
                  if (((uVar1 != 0x3f80) &&
                      (pcVar2 = "RSA - Bad input parameters to function", uVar1 != 0x4080)) &&
                     (pcVar2 = "PK - Type mismatch, eg attempt to encrypt with an ECDSA key",
                     uVar1 != 0x3f00)) {
                    pcVar2 = (char *)0x0;
                  }
                }
              }
            }
          }
        }
        else {
          pcVar2 = "ECP - The buffer contains a valid signature followed by more data";
          if (uVar1 != 0x4c00) {
            if (uVar1 < 0x4c01) {
              pcVar2 = "RSA - The PKCS#1 verification failed";
              if (uVar1 != 0x4380) {
                if (uVar1 < 0x4381) {
                  pcVar2 = "RSA - The public key operation failed";
                  if (uVar1 != 0x4280) {
                    if (uVar1 < 0x4281) {
                      pcVar2 = "RSA - Something failed during generation of a key";
                      if ((uVar1 != 0x4180) &&
                         (pcVar2 = "RSA - Key failed to pass the validity check of the library",
                         uVar1 != 0x4200)) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                    else {
                      pcVar2 = "RSA - The private key operation failed";
                      if (uVar1 != 0x4300) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                  }
                }
                else {
                  pcVar2 = "RSA - The random generator failed to generate non-zeros";
                  if (((uVar1 != 0x4480) &&
                      (pcVar2 = 
                       "ECP - Operation in progress, call again with the same parameters to continue"
                      , uVar1 != 0x4b00)) &&
                     (pcVar2 = "RSA - The output buffer for decryption is not large enough",
                     uVar1 != 0x4400)) {
                    pcVar2 = (char *)0x0;
                  }
                }
              }
            }
            else {
              pcVar2 = 
              "ECP - The requested feature is not available, for example, the requested curve is not supported"
              ;
              if (uVar1 != 0x4e80) {
                if (uVar1 < 0x4e81) {
                  pcVar2 = "ECP - Memory allocation failed";
                  if (uVar1 != 0x4d80) {
                    if (uVar1 < 0x4d81) {
                      pcVar2 = "ECP - Invalid private or public key";
                      if ((uVar1 != 0x4c80) &&
                         (pcVar2 = "ECP - Generation of random value, such as ephemeral key, failed"
                         , uVar1 != 0x4d00)) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                    else {
                      pcVar2 = "ECP - The signature is not valid";
                      if (uVar1 != 0x4e00) {
                        pcVar2 = (char *)0x0;
                      }
                    }
                  }
                }
                else {
                  pcVar2 = "ECP - Bad input parameters to function";
                  if (((uVar1 != 0x4f80) &&
                      (pcVar2 = "MD - The selected feature is not available", uVar1 != 0x5080)) &&
                     (pcVar2 = "ECP - The buffer is too small to write to", uVar1 != 0x4f00)) {
                    pcVar2 = (char *)0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (uVar1 == 0x6a00) {
    pcVar2 = "SSL - A buffer is too small to receive or write a message";
  }
  else if (uVar1 < 0x6a01) {
    pcVar2 = "SSL - An encrypted DTLS-frame with an unexpected CID was received";
    if (uVar1 != 0x6000) {
      if (uVar1 < 0x6001) {
        pcVar2 = "PKCS7 - Error parsing the signature";
        if (uVar1 != 0x5600) {
          if (uVar1 < 0x5601) {
            pcVar2 = "PKCS7 - The PKCS #7 version element is invalid or cannot be parsed";
            if (uVar1 != 0x5400) {
              if (uVar1 < 0x5401) {
                pcVar2 = "PKCS7 - The format is invalid, e.g. different type expected";
                if (uVar1 != 0x5300) {
                  if (uVar1 < 0x5301) {
                    pcVar2 = "MD - Failed to allocate memory";
                    if ((uVar1 != 0x5180) &&
                       (pcVar2 = "MD - Opening or reading of file failed", uVar1 != 0x5200)) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                  else {
                    pcVar2 = "PKCS7 - Unavailable feature, e.g. anything other than signed data";
                    if (uVar1 != 0x5380) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                }
              }
              else {
                pcVar2 = "PKCS7 - The algorithm tag or value is invalid or cannot be parsed";
                if (((uVar1 != 0x5500) &&
                    (pcVar2 = "PKCS7 - The certificate tag or value is invalid or cannot be parsed",
                    uVar1 != 0x5580)) &&
                   (pcVar2 = "PKCS7 - The PKCS #7 content info is invalid or cannot be parsed",
                   uVar1 != 0x5480)) {
                  pcVar2 = (char *)0x0;
                }
              }
            }
          }
          else {
            pcVar2 = "PKCS7 - The PKCS #7 date issued/expired dates are invalid";
            if (uVar1 != 0x5880) {
              if (uVar1 < 0x5881) {
                pcVar2 = "PKCS7 - Allocation of memory failed";
                if (uVar1 != 0x5780) {
                  if (uVar1 < 0x5781) {
                    pcVar2 = "PKCS7 - Error parsing the signer\'s info";
                    if ((uVar1 != 0x5680) && (pcVar2 = "PKCS7 - Input invalid", uVar1 != 0x5700)) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                  else {
                    pcVar2 = "PKCS7 - Verification Failed";
                    if (uVar1 != 0x5800) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                }
              }
              else {
                pcVar2 = "SSL - Invalid value in SSL config";
                if (((uVar1 != 0x5e80) &&
                    (pcVar2 = 
                     "SSL - An operation failed due to an unexpected version or configuration",
                    uVar1 != 0x5f00)) &&
                   (pcVar2 = 
                    "SSL - Attempt to verify a certificate without an expected hostname. This is usually insecure.  In TLS clients, when a client authenticates a server through its certificate, the client normally checks three things: - the certificate chain must be valid; - the chain must start from a trusted CA; - the certificate must cover the server name that is expected by the client.  Omitting any of these checks is generally insecure, and can allow a malicious server to impersonate a legitimate server.  The third check may be safely skipped in some unusual scenarios, such as networks where eavesdropping is a risk but not active attacks, or a private PKI where the client equally trusts all servers that are accredited by the root CA.  You should call mbedtls_ssl_set_hostname() with the expected server name before starting a TLS handshake on a client (unless the client is set up to only use PSK-based authentication, which does not rely on the host name). If you have determined that server name verification is not required for security in your scenario, call mbedtls_ssl_set_hostname() with \\p NULL as the server name.  This error is raised if all of the following conditions are met:  - A TLS client is configured with the authentication mode #MBEDTLS_SSL_VERIFY_REQUIRED (default). - Certificate authentication is enabled. - The client does not call mbedtls_ssl_set_hostname(). - The configuration option #MBEDTLS_SSL_CLI_ALLOW_WEAK_CERTIFICATE_VERIFICATION_WITHOUT_HOSTNAME is not enabled"
                   , uVar1 != 0x5d80)) {
                  pcVar2 = (char *)0x0;
                }
              }
            }
          }
        }
      }
      else {
        pcVar2 = "SSL - The asynchronous operation is not completed yet";
        if (uVar1 != 0x6500) {
          if (uVar1 < 0x6501) {
            pcVar2 = "CIPHER - Decryption of block requires a full block";
            if (uVar1 != 0x6280) {
              if (uVar1 < 0x6281) {
                pcVar2 = "CIPHER - Failed to allocate memory";
                if (uVar1 != 0x6180) {
                  if (uVar1 < 0x6181) {
                    pcVar2 = "CIPHER - The selected feature is not available";
                    if ((uVar1 != 0x6080) &&
                       (pcVar2 = "CIPHER - Bad input parameters", uVar1 != 0x6100)) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                  else {
                    pcVar2 = "CIPHER - Input data contains invalid padding and is rejected";
                    if (uVar1 != 0x6200) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                }
              }
              else {
                pcVar2 = "CIPHER - The context is invalid. For example, because it was freed";
                if (((uVar1 != 0x6380) &&
                    (pcVar2 = "SSL - Internal-only message signaling that a message arrived early",
                    uVar1 != 0x6480)) &&
                   (pcVar2 = "CIPHER - Authentication failed (for AEAD modes)", uVar1 != 0x6300)) {
                  pcVar2 = (char *)0x0;
                }
              }
            }
          }
          else {
            pcVar2 = "SSL - The client initiated a reconnect from the same port";
            if (uVar1 != 0x6780) {
              if (uVar1 < 0x6781) {
                pcVar2 = "SSL - The alert message received indicates a non-fatal error";
                if (uVar1 != 0x6680) {
                  if (uVar1 < 0x6681) {
                    pcVar2 = 
                    "SSL - Internal-only message signaling that further message-processing should be done"
                    ;
                    if ((uVar1 != 0x6580) &&
                       (pcVar2 = 
                        "SSL - A field in a message was incorrect or inconsistent with other fields"
                       , uVar1 != 0x6600)) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                  else {
                    pcVar2 = "SSL - Record header looks valid but is not expected";
                    if (uVar1 != 0x6700) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                }
              }
              else {
                pcVar2 = "SSL - Connection requires a write call";
                if (((uVar1 != 0x6880) &&
                    (pcVar2 = 
                     "SSL - No data of requested type currently available on underlying transport",
                    uVar1 != 0x6900)) && (pcVar2 = "SSL - The operation timed out", uVar1 != 0x6800)
                   ) {
                  pcVar2 = (char *)0x0;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    pcVar2 = "SSL - No RNG was provided to the SSL module";
    if (uVar1 != 0x7400) {
      if (uVar1 < 0x7401) {
        pcVar2 = "SSL - Handshake protocol not within min/max boundaries";
        if (uVar1 != 0x6e80) {
          if (uVar1 < 0x6e81) {
            pcVar2 = "SSL - Unknown identity received (eg, PSK identity)";
            if (uVar1 != 0x6c80) {
              if (uVar1 < 0x6c81) {
                pcVar2 = "SSL - A counter would wrap (eg, too many messages exchanged)";
                if (uVar1 != 0x6b80) {
                  if (uVar1 < 0x6b81) {
                    pcVar2 = "SSL - DTLS client must retry for hello verification";
                    if ((uVar1 != 0x6a80) &&
                       (pcVar2 = "SSL - Unexpected message at ServerHello in renegotiation",
                       uVar1 != 0x6b00)) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                  else {
                    pcVar2 = "SSL - Internal error (eg, unexpected failure in lower-level module)";
                    if (uVar1 != 0x6c00) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                }
              }
              else {
                pcVar2 = "SSL - Session ticket has expired";
                if (((uVar1 != 0x6d80) &&
                    (pcVar2 = "SSL - The handshake negotiation failed", uVar1 != 0x6e00)) &&
                   (pcVar2 = 
                    "SSL - Public key type mismatch (eg, asked for RSA key exchange and presented EC key)"
                   , uVar1 != 0x6d00)) {
                  pcVar2 = (char *)0x0;
                }
              }
            }
          }
          else {
            pcVar2 = "SSL - Verification of the message MAC failed";
            if (uVar1 != 0x7180) {
              if (uVar1 < 0x7181) {
                pcVar2 = "SSL - The requested feature is not available";
                if (uVar1 != 0x7080) {
                  if (uVar1 < 0x7081) {
                    pcVar2 = "SSL - Hardware acceleration function skipped / left alone data";
                    if ((uVar1 != 0x6f80) &&
                       (pcVar2 = "SSL - A cryptographic operation is in progress. Try again later",
                       uVar1 != 0x7000)) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                  else {
                    pcVar2 = "SSL - Bad input parameters to function";
                    if (uVar1 != 0x7100) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                }
              }
              else {
                pcVar2 = "SSL - The connection indicated an EOF";
                if (((uVar1 != 0x7280) &&
                    (pcVar2 = "SSL - A message could not be parsed due to a syntactic error",
                    uVar1 != 0x7300)) &&
                   (pcVar2 = "SSL - An invalid SSL record was received", uVar1 != 0x7200)) {
                  pcVar2 = (char *)0x0;
                }
              }
            }
          }
        }
      }
      else {
        pcVar2 = "SSL - The peer notified us that the connection is going to be closed";
        if (uVar1 != 0x7880) {
          if (uVar1 < 0x7881) {
            pcVar2 = "SSL - No CA Chain is set, but required to operate";
            if (uVar1 != 0x7680) {
              if (uVar1 < 0x7681) {
                pcVar2 = "SSL - No ALPN protocols supported that the client advertises";
                if (uVar1 != 0x7580) {
                  if (uVar1 < 0x7581) {
                    pcVar2 = 
                    "SSL - No client certification received from the client, but required by the authentication mode"
                    ;
                    if ((uVar1 != 0x7480) &&
                       (pcVar2 = 
                        "SSL - Client received an extended server hello containing an unsupported extension"
                       , uVar1 != 0x7500)) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                  else {
                    pcVar2 = "SSL - The own private key or pre-shared key is not set, but needed";
                    if (uVar1 != 0x7600) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                }
              }
              else {
                pcVar2 = "SSL - A fatal alert message was received from our peer";
                if (((uVar1 != 0x7780) &&
                    (pcVar2 = "SSL - No server could be identified matching the client\'s SNI",
                    uVar1 != 0x7800)) &&
                   (pcVar2 = "SSL - An unexpected message was received from our peer",
                   uVar1 != 0x7700)) {
                  pcVar2 = (char *)0x0;
                }
              }
            }
          }
          else {
            pcVar2 = "SSL - Not possible to write early data";
            if (uVar1 != 0x7c80) {
              if (uVar1 < 0x7c81) {
                pcVar2 = "SSL - Not possible to read early data";
                if (uVar1 != 0x7b80) {
                  if (uVar1 < 0x7b81) {
                    pcVar2 = "SSL - Processing of the Certificate handshake message failed";
                    if ((uVar1 != 0x7a00) &&
                       (pcVar2 = "SSL - A TLS 1.3 NewSessionTicket message has been received",
                       uVar1 != 0x7b00)) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                  else {
                    pcVar2 = 
                    "SSL - * Early data has been received as part of an on-going handshake. This error code can be returned only on server side if and only if early data has been enabled by means of the mbedtls_ssl_conf_early_data() API. This error code can then be returned by mbedtls_ssl_handshake(), mbedtls_ssl_handshake_step(), mbedtls_ssl_read() or mbedtls_ssl_write() if early data has been received as part of the handshake sequence they triggered. To read the early data, call mbedtls_ssl_read_early_data()"
                    ;
                    if (uVar1 != 0x7c00) {
                      pcVar2 = (char *)0x0;
                    }
                  }
                }
              }
              else {
                pcVar2 = "SSL - Memory allocation failed";
                if (((uVar1 != 0x7f00) &&
                    (pcVar2 = "SSL - Hardware acceleration function returned with error",
                    uVar1 != 0x7f80)) && (pcVar2 = "SSL - Cache entry not found", uVar1 != 0x7e80))
                {
                  pcVar2 = (char *)0x0;
                }
              }
            }
          }
        }
      }
    }
  }
  return pcVar2;
}



char * mbedtls_low_level_strerr(uint param_1)

{
  uint uVar1;
  
  uVar1 = -param_1;
  if (0 < (int)param_1) {
    uVar1 = param_1;
  }
  switch(uVar1 & 0xffff007f) {
  case 1:
    return "ERROR - Generic error";
  case 2:
    return "BIGNUM - An error occurred while reading from or writing to a file";
  case 3:
    return "HMAC_DRBG - Too many random requested in single call";
  case 4:
    return "BIGNUM - Bad input parameters to function";
  case 5:
    return "HMAC_DRBG - Input too large (Entropy + additional)";
  case 6:
    return "BIGNUM - There is an invalid character in the digit string";
  case 7:
    return "HMAC_DRBG - Read/write error in file";
  case 8:
    return "BIGNUM - The buffer is too small to write to";
  case 9:
    return "HMAC_DRBG - The entropy source failed";
  case 10:
    return "BIGNUM - The input arguments are negative or result in illegal output";
  case 0xb:
    return "OID - output buffer is too small";
  case 0xc:
    return "BIGNUM - The input argument for division is zero, which is not allowed";
  case 0xd:
    return "CCM - Bad input parameters to the function";
  case 0xe:
    return "BIGNUM - The input arguments are not acceptable";
  case 0xf:
    return "CCM - Authenticated decryption failed";
  case 0x10:
    return "BIGNUM - Memory allocation failed";
  case 0x11:
    return "LMS - Bad data has been input to an LMS function";
  case 0x12:
    return "GCM - Authenticated decryption failed";
  case 0x13:
    return "LMS - Specified LMS key has utilised all of its private keys";
  case 0x14:
    return "GCM - Bad input parameters to function";
  case 0x15:
    return "LMS - LMS signature verification failed";
  case 0x16:
    return "GCM - An output buffer is too small";
  case 0x17:
    return "LMS - LMS failed to allocate space for a private key";
  default:
    return (char *)0x0;
  case 0x19:
    return "LMS - Input/output buffer is too small to contain requited data";
  case 0x20:
    return "AES - Invalid key length";
  case 0x21:
    return "AES - Invalid input data";
  case 0x22:
    return "AES - Invalid data input length";
  case 0x24:
    return "CAMELLIA - Bad input data";
  case 0x26:
    return "CAMELLIA - Invalid data input length";
  case 0x2a:
    return "BASE64 - Output buffer too small";
  case 0x2c:
    return "BASE64 - Invalid character in input";
  case 0x2e:
    return "OID - OID is not found";
  case 0x34:
    return "CTR_DRBG - The entropy source failed";
  case 0x36:
    return "CTR_DRBG - The requested random buffer length is too big";
  case 0x38:
    return "CTR_DRBG - The input (entropy + additional data) is too large";
  case 0x3a:
    return "CTR_DRBG - Read or write error in file";
  case 0x3c:
    return "ENTROPY - Critical entropy source failure";
  case 0x3d:
    return "ENTROPY - No strong sources have been added to poll";
  case 0x3e:
    return "ENTROPY - No more sources can be added";
  case 0x3f:
    return "ENTROPY - Read/write error in file";
  case 0x40:
    return "ENTROPY - No sources have been added to poll";
  case 0x42:
    return "NET - Failed to open a socket";
  case 0x43:
    return "NET - Buffer is too small to hold the data";
  case 0x44:
    return "NET - The connection to the given server / port failed";
  case 0x45:
    return "NET - The context is invalid, eg because it was free()ed";
  case 0x46:
    return "NET - Binding of the socket failed";
  case 0x47:
    return "NET - Polling the net context failed";
  case 0x48:
    return "NET - Could not listen on the socket";
  case 0x49:
    return "NET - Input invalid";
  case 0x4a:
    return "NET - Could not accept the incoming connection";
  case 0x4c:
    return "NET - Reading information from the socket failed";
  case 0x4e:
    return "NET - Sending information through the socket failed";
  case 0x50:
    return "NET - Connection was reset by peer";
  case 0x51:
    return "CHACHA20 - Invalid input parameter(s)";
  case 0x52:
    return "NET - Failed to get an IP address for the given hostname";
  case 0x54:
    return "CHACHAPOLY - The requested operation is not permitted in the current state";
  case 0x56:
    return "CHACHAPOLY - Authenticated decryption failed: data was not authentic";
  case 0x57:
    return "POLY1305 - Invalid input parameter(s)";
  case 0x5c:
    return "ARIA - Bad input data";
  case 0x5e:
    return "ARIA - Invalid data input length";
  case 0x60:
    return "ASN1 - Out of data when parsing an ASN1 data structure";
  case 0x62:
    return "ASN1 - ASN1 tag was of an unexpected value";
  case 100:
    return "ASN1 - Error when trying to determine the length or invalid length";
  case 0x66:
    return "ASN1 - Actual length differs from expected length";
  case 0x68:
    return "ASN1 - Data is invalid";
  case 0x6a:
    return "ASN1 - Memory allocation failed";
  case 0x6c:
    return "ASN1 - Buffer too small when writing ASN.1 data structure";
  case 0x6e:
    return "ERROR - This is a bug in the library";
  case 0x70:
    return "PLATFORM - Hardware accelerator failed";
  case 0x72:
    return "PLATFORM - The requested feature is not supported by the platform";
  case 0x73:
    return "SHA1 - SHA-1 input data was malformed";
  case 0x74:
    return "SHA256 - SHA-256 input data was malformed";
  case 0x75:
    return "SHA512 - SHA-512 input data was malformed";
  case 0x76:
    return "SHA3 - SHA-3 input data was malformed";
  }
}



void mbedtls_strerror(uint param_1,char *param_2,size_t param_3)

{
  long lVar1;
  size_t sVar2;
  ulong __maxlen;
  uint uVar3;
  
  if (param_3 == 0) {
    return;
  }
  memset(param_2,0,param_3);
  if ((int)param_1 < 1) {
    param_1 = -param_1;
  }
  uVar3 = param_1 & 0xff80;
  if (uVar3 != 0) {
    lVar1 = mbedtls_high_level_strerr(param_1);
    if (lVar1 == 0) {
      __snprintf_chk(param_2,param_3,2,0xffffffffffffffff,"UNKNOWN ERROR CODE (%04X)",uVar3);
    }
    else {
      snprintf(param_2,param_3,"%s",lVar1);
    }
    if (uVar3 == 0x7780) {
      return;
    }
  }
  if ((param_1 & 0xffff007f) == 0) {
    return;
  }
  sVar2 = strlen(param_2);
  if (sVar2 != 0) {
    __maxlen = param_3 - sVar2;
    if (__maxlen < 5) {
      return;
    }
    snprintf(param_2 + sVar2,__maxlen," : ");
    param_2 = param_2 + sVar2 + 3;
    param_3 = __maxlen - 3;
  }
  lVar1 = mbedtls_low_level_strerr(param_1);
  if (lVar1 == 0) {
    __snprintf_chk(param_2,param_3,2,0xffffffffffffffff,"UNKNOWN ERROR CODE (%04X)",
                   param_1 & 0xffff007f);
    return;
  }
  snprintf(param_2,param_3,"%s",lVar1);
  return;
}


