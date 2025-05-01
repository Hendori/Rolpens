
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * X509_get_default_private_dir(void)

{
  return "/usr/local/ssl/private";
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * X509_get_default_cert_area(void)

{
  return "/usr/local/ssl";
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * X509_get_default_cert_dir(void)

{
  return "/usr/local/ssl/certs";
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * X509_get_default_cert_file(void)

{
  return "/usr/local/ssl/cert.pem";
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * X509_get_default_cert_dir_env(void)

{
  return "SSL_CERT_DIR";
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * X509_get_default_cert_file_env(void)

{
  return "SSL_CERT_FILE";
}


