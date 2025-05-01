
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* register_exporters() */

void register_exporters(void)

{
  register_android_exporter();
  register_ios_exporter();
  register_linuxbsd_exporter();
  register_macos_exporter();
  register_web_exporter();
  register_windows_exporter();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* register_exporter_types() */

void register_exporter_types(void)

{
  register_android_exporter_types();
  register_ios_exporter_types();
  register_linuxbsd_exporter_types();
  register_macos_exporter_types();
  register_web_exporter_types();
  register_windows_exporter_types();
  return;
}


