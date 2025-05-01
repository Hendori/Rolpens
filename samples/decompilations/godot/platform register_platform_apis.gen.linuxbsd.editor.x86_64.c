
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* register_platform_apis() */

void register_platform_apis(void)

{
  register_android_api();
  register_ios_api();
  register_web_api();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unregister_platform_apis() */

void unregister_platform_apis(void)

{
  unregister_android_api();
  unregister_ios_api();
  unregister_web_api();
  return;
}


