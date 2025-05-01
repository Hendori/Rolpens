
/* WARNING: Unknown calling convention */

int getcon(char **con)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return -1;
}



undefined8 getcon_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



/* WARNING: Unknown calling convention */

void freecon(char *con)

{
  return;
}



undefined8 getfscreatecon(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 getfscreatecon_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 setfscreatecon(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 setfscreatecon_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



/* WARNING: Unknown calling convention */

int matchpathcon(char *file,mode_t m,char **con)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return -1;
}



/* WARNING: Unknown calling convention */

int getfilecon(char *file,char **con)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return -1;
}



undefined8 getfilecon_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 lgetfilecon(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 lgetfilecon_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



/* WARNING: Unknown calling convention */

int fgetfilecon(int fd,char **con)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return -1;
}



undefined8 fgetfilecon_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 setfilecon(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 setfilecon_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 lsetfilecon(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 lsetfilecon_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 fsetfilecon(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 fsetfilecon_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 security_check_context(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 security_check_context_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 setexeccon(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



undefined8 setexeccon_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



/* WARNING: Unknown calling convention */

int security_compute_create(char *scon,char *tcon,security_class_t tclass,char **newcon)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return -1;
}



undefined8 security_compute_create_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



/* WARNING: Unknown calling convention */

security_class_t string_to_security_class(char *name)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0;
}



undefined8 matchpathcon_init_prefix(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}


