
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool buffer_or_output(char *str,char **pbuf,size_t *plen)

{
  char *__dest;
  size_t sVar1;
  
  __dest = *pbuf;
  if (__dest == (char *)0x0) {
    fputs_unlocked(str,_stdout);
  }
  else {
    sVar1 = strlen(str);
    if (*plen <= sVar1) {
      return true;
    }
    memcpy(__dest,str,sVar1 + 1);
    *pbuf = *pbuf + sVar1;
    *plen = *plen - sVar1;
  }
  return false;
}



/* WARNING: Unknown calling convention */

_Bool relpath(char *can_fname,char *can_reldir,char *buf,size_t len)

{
  char cVar1;
  char cVar2;
  _Bool _Var3;
  _Bool _Var4;
  _Bool _Var5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  size_t local_48;
  char *local_40 [2];
  
  _Var3 = false;
  if (((can_reldir[1] == '/') == (can_fname[1] == '/')) &&
     (cVar2 = *can_reldir, _Var3 = false, cVar2 != '\0')) {
    iVar11 = 0;
    iVar10 = 0;
    pcVar9 = can_fname;
    pcVar8 = can_reldir;
    do {
      pcVar7 = pcVar9;
      cVar1 = *pcVar7;
      if ((cVar1 != cVar2) || (cVar1 == '\0')) {
        if ((cVar2 == '/') && (cVar1 == '\0')) {
          iVar11 = iVar10;
        }
        goto LAB_00100107;
      }
      iVar10 = iVar10 + 1;
      if (cVar2 == '/') {
        iVar11 = iVar10;
      }
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if ((pcVar7[1] != '\0') && (pcVar7[1] != '/')) {
LAB_00100107:
      iVar10 = iVar11;
      if (iVar11 == 0) {
        return false;
      }
    }
    pcVar9 = can_reldir + iVar10;
    cVar2 = *pcVar9;
    if (cVar2 == '/') {
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 1;
    }
    pcVar8 = can_fname + iVar10 + (can_fname[iVar10] == '/');
    local_48 = len;
    local_40[0] = buf;
    if (cVar2 == '\0') {
      if (*pcVar8 == '\0') {
        pcVar8 = ".";
      }
      _Var3 = buffer_or_output(pcVar8,local_40,&local_48);
    }
    else {
      _Var3 = buffer_or_output("..",local_40,&local_48);
      cVar2 = *pcVar9;
      while (cVar2 != '\0') {
        while (cVar2 != '/') {
          cVar2 = pcVar9[1];
          pcVar9 = pcVar9 + 1;
          if (cVar2 == '\0') goto LAB_00100200;
        }
        pcVar9 = pcVar9 + 1;
        _Var4 = buffer_or_output("/..",local_40,&local_48);
        _Var3 = (_Bool)(_Var3 | _Var4);
        cVar2 = *pcVar9;
      }
LAB_00100200:
      if (*pcVar8 != '\0') {
        _Var4 = buffer_or_output("/",local_40,&local_48);
        _Var5 = buffer_or_output(pcVar8,local_40,&local_48);
        _Var3 = (_Bool)(_Var3 | (_Var4 || _Var5));
      }
    }
    if (_Var3 != false) {
      uVar6 = dcgettext(0,"generating relative path",5);
      error(0,0x24,&_LC5,uVar6);
    }
    _Var3 = (_Bool)(_Var3 ^ 1);
  }
  return _Var3;
}


