
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* initialize_camera_module(ModuleInitializationLevel) */

void initialize_camera_module(int param_1)

{
  if (param_1 == 2) {
    _create_func = CameraServer::_create_builtin<CameraLinux>;
  }
  return;
}



/* uninitialize_camera_module(ModuleInitializationLevel) */

void uninitialize_camera_module(void)

{
  return;
}



/* CameraServer* CameraServer::_create_builtin<CameraLinux>() */

CameraServer * CameraServer::_create_builtin<CameraLinux>(void)

{
  CameraLinux *this;
  
  this = (CameraLinux *)operator_new(0x1f0,"");
  CameraLinux::CameraLinux(this);
  postinitialize_handler((Object *)this);
  return (CameraServer *)this;
}


