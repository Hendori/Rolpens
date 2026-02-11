
char * X509_verify_cert_error_string(long n)

{
  switch(n & 0xffffffff) {
  case 0:
    return "ok";
  case 1:
    return "unspecified certificate verification error";
  case 2:
    return "unable to get issuer certificate";
  case 3:
    return "unable to get certificate CRL";
  case 4:
    return "unable to decrypt certificate\'s signature";
  case 5:
    return "unable to decrypt CRL\'s signature";
  case 6:
    return "unable to decode issuer public key";
  case 7:
    return "certificate signature failure";
  case 8:
    return "CRL signature failure";
  case 9:
    return "certificate is not yet valid";
  case 10:
    return "certificate has expired";
  case 0xb:
    return "CRL is not yet valid";
  case 0xc:
    return "CRL has expired";
  case 0xd:
    return "format error in certificate\'s notBefore field";
  case 0xe:
    return "format error in certificate\'s notAfter field";
  case 0xf:
    return "format error in CRL\'s lastUpdate field";
  case 0x10:
    return "format error in CRL\'s nextUpdate field";
  case 0x11:
    return "out of memory";
  case 0x12:
    return "self-signed certificate";
  case 0x13:
    return "self-signed certificate in certificate chain";
  case 0x14:
    return "unable to get local issuer certificate";
  case 0x15:
    return "unable to verify the first certificate";
  case 0x16:
    return "certificate chain too long";
  case 0x17:
    return "certificate revoked";
  case 0x18:
    return "issuer certificate doesn\'t have a public key";
  case 0x19:
    return "path length constraint exceeded";
  case 0x1a:
    return "unsuitable certificate purpose";
  case 0x1b:
    return "certificate not trusted";
  case 0x1c:
    return "certificate rejected";
  case 0x1d:
    return "subject issuer mismatch";
  case 0x1e:
    return "authority and subject key identifier mismatch";
  case 0x1f:
    return "authority and issuer serial number mismatch";
  case 0x20:
    return "key usage does not include certificate signing";
  case 0x21:
    return "unable to get CRL issuer certificate";
  case 0x22:
    return "unhandled critical extension";
  case 0x23:
    return "key usage does not include CRL signing";
  case 0x24:
    return "unhandled critical CRL extension";
  case 0x25:
    return "invalid non-CA certificate (has CA markings)";
  case 0x26:
    return "proxy path length constraint exceeded";
  case 0x27:
    return "key usage does not include digital signature";
  case 0x28:
    return "proxy certificates not allowed, please set the appropriate flag";
  case 0x29:
    return "invalid or inconsistent certificate extension";
  case 0x2a:
    return "invalid or inconsistent certificate policy extension";
  case 0x2b:
    return "no explicit policy";
  case 0x2c:
    return "different CRL scope";
  case 0x2d:
    return "unsupported extension feature";
  case 0x2e:
    return "RFC 3779 resource not subset of parent\'s resources";
  case 0x2f:
    return "permitted subtree violation";
  case 0x30:
    return "excluded subtree violation";
  case 0x31:
    return "name constraints minimum and maximum not supported";
  case 0x32:
    return "application verification failure";
  case 0x33:
    return "unsupported name constraint type";
  case 0x34:
    return "unsupported or invalid name constraint syntax";
  case 0x35:
    return "unsupported or invalid name syntax";
  case 0x36:
    return "CRL path validation error";
  case 0x37:
    return "path loop";
  case 0x38:
    return "Suite B: certificate version invalid";
  case 0x39:
    return "Suite B: invalid public key algorithm";
  case 0x3a:
    return "Suite B: invalid ECC curve";
  case 0x3b:
    return "Suite B: invalid signature algorithm";
  case 0x3c:
    return "Suite B: curve not allowed for this LOS";
  case 0x3d:
    return "Suite B: cannot sign P-384 with P-256";
  case 0x3e:
    return "hostname mismatch";
  case 0x3f:
    return "email address mismatch";
  case 0x40:
    return "IP address mismatch";
  case 0x41:
    return "no matching DANE TLSA records";
  case 0x42:
    return "EE certificate key too weak";
  case 0x43:
    return "CA certificate key too weak";
  case 0x44:
    return "CA signature digest algorithm too weak";
  case 0x45:
    return "invalid certificate verification context";
  case 0x46:
    return "issuer certificate lookup error";
  case 0x47:
    return "Certificate Transparency required, but no valid SCTs found";
  case 0x48:
    return "proxy subject name violation";
  case 0x49:
    return "OCSP verification needed";
  case 0x4a:
    return "OCSP verification failed";
  case 0x4b:
    return "OCSP unknown cert";
  case 0x4c:
    return "Cannot find certificate signature algorithm";
  case 0x4d:
    return "subject signature algorithm and issuer public key algorithm mismatch";
  case 0x4e:
    return "cert info signature and signature algorithm mismatch";
  case 0x4f:
    return "invalid CA certificate";
  case 0x50:
    return "Path length invalid for non-CA cert";
  case 0x51:
    return "Path length given without key usage keyCertSign";
  case 0x52:
    return "Key usage keyCertSign invalid for non-CA cert";
  case 0x53:
    return "Issuer name empty";
  case 0x54:
    return "Subject name empty";
  case 0x55:
    return "Missing Authority Key Identifier";
  case 0x56:
    return "Missing Subject Key Identifier";
  case 0x57:
    return "Empty Subject Alternative Name extension";
  case 0x58:
    return "Subject empty and Subject Alt Name extension not critical";
  case 0x59:
    return "Basic Constraints of CA cert not marked critical";
  case 0x5a:
    return "Authority Key Identifier marked critical";
  case 0x5b:
    return "Subject Key Identifier marked critical";
  case 0x5c:
    return "CA cert does not include key usage extension";
  case 0x5d:
    return "Using cert extension requires at least X509v3";
  case 0x5e:
    return "Certificate public key has explicit ECC parameters";
  case 0x5f:
    return "Raw public key untrusted, no trusted keys configured";
  default:
    return "unknown certificate verification error";
  }
}


