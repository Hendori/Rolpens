
/* tvg::Initializer::init(tvg::CanvasEngine, unsigned int) */

undefined8 tvg::Initializer::init(uint param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if ((param_1 == 0) || (uVar2 = 5, (param_1 & 2) == 0)) {
    return uVar2;
  }
  cVar1 = tvg::SwRenderer::init(param_2);
  uVar2 = 3;
  if (cVar1 != '\0') {
    if (_initCnt < 1) {
      _initCnt = _initCnt + 1;
      cVar1 = _buildVersionInfo((uint *)0x0,(uint *)0x0,(uint *)0x0);
      if ((cVar1 != '\0') && (cVar1 = LoaderMgr::init(), cVar1 != '\0')) {
        tvg::TaskScheduler::init(param_2);
        return 0;
      }
      return 6;
    }
    uVar2 = 0;
    _initCnt = _initCnt + 1;
  }
  return uVar2;
}



/* tvg::Initializer::term(tvg::CanvasEngine) */

undefined8 tvg::Initializer::term(uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (_initCnt == 0) {
    return 2;
  }
  uVar2 = 1;
  if ((param_1 != 0) && (uVar2 = 5, (param_1 & 2) != 0)) {
    cVar1 = tvg::SwRenderer::term();
    if (cVar1 == '\0') {
      uVar2 = 2;
    }
    else {
      _initCnt = _initCnt + -1;
      if (_initCnt < 1) {
        tvg::TaskScheduler::term();
        cVar1 = LoaderMgr::term();
        if (cVar1 == '\0') {
          return 6;
        }
      }
      uVar2 = 0;
    }
    return uVar2;
  }
  return uVar2;
}



/* tvg::Initializer::version(unsigned int*, unsigned int*, unsigned int*) */

undefined * tvg::Initializer::version(uint *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  undefined *puVar2;
  
  if ((param_3 != (uint *)0x0 || param_2 != (uint *)0x0) || param_1 != (uint *)0x0) {
    cVar1 = _buildVersionInfo(param_1,param_2,param_3);
    puVar2 = (undefined *)0x0;
    if (cVar1 != '\0') {
      puVar2 = &_LC0;
    }
    return puVar2;
  }
  return &_LC0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* THORVG_VERSION_NUMBER() */

undefined2 THORVG_VERSION_NUMBER(void)

{
  return _version;
}


