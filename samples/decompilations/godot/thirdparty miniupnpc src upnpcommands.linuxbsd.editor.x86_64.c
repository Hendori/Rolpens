
ulong UPNP_GetTotalBytesSent(undefined8 param_1,undefined8 param_2)

{
  void *__ptr;
  char *__nptr;
  ulonglong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetTotalBytesSent",0,&local_8c);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    ParseNameValue(__ptr,local_8c,local_88);
    uVar2 = 0;
    free(__ptr);
    __nptr = (char *)GetValueFromNameValueList(local_88);
    if (__nptr != (char *)0x0) {
      uVar1 = strtoull(__nptr,(char **)0x0,0);
      uVar2 = uVar1 & 0xffffffff;
    }
    ClearNameValueList(local_88);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong UPNP_GetTotalBytesReceived(undefined8 param_1,undefined8 param_2)

{
  void *__ptr;
  char *__nptr;
  ulonglong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetTotalBytesReceived",0,&local_8c);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    ParseNameValue(__ptr,local_8c,local_88);
    uVar2 = 0;
    free(__ptr);
    __nptr = (char *)GetValueFromNameValueList(local_88);
    if (__nptr != (char *)0x0) {
      uVar1 = strtoull(__nptr,(char **)0x0,0);
      uVar2 = uVar1 & 0xffffffff;
    }
    ClearNameValueList(local_88);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong UPNP_GetTotalPacketsSent(undefined8 param_1,undefined8 param_2)

{
  void *__ptr;
  char *__nptr;
  ulonglong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetTotalPacketsSent",0,&local_8c);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    ParseNameValue(__ptr,local_8c,local_88);
    uVar2 = 0;
    free(__ptr);
    __nptr = (char *)GetValueFromNameValueList(local_88);
    if (__nptr != (char *)0x0) {
      uVar1 = strtoull(__nptr,(char **)0x0,0);
      uVar2 = uVar1 & 0xffffffff;
    }
    ClearNameValueList(local_88);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong UPNP_GetTotalPacketsReceived(undefined8 param_1,undefined8 param_2)

{
  void *__ptr;
  char *__nptr;
  ulonglong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetTotalPacketsReceived",0,&local_8c
                                   );
  if (__ptr == (void *)0x0) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    ParseNameValue(__ptr,local_8c,local_88);
    uVar2 = 0;
    free(__ptr);
    __nptr = (char *)GetValueFromNameValueList(local_88);
    if (__nptr != (char *)0x0) {
      uVar1 = strtoull(__nptr,(char **)0x0,0);
      uVar2 = uVar1 & 0xffffffff;
    }
    ClearNameValueList(local_88);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_GetStatusInfo(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 *param_4,
                  char *param_5)

{
  undefined4 uVar1;
  void *__ptr;
  long lVar2;
  char *__src;
  char *__src_00;
  long in_FS_OFFSET;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = 0xffffffff;
  if (param_4 == (undefined4 *)0x0 && param_3 == (char *)0x0) {
    uVar1 = 0xfffffffe;
    goto LAB_00100487;
  }
  __ptr = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetStatusInfo",0,&local_b0);
  if (__ptr == (void *)0x0) {
    uVar1 = 0xfffffffd;
    goto LAB_00100487;
  }
  ParseNameValue(__ptr,local_b0,local_a8);
  free(__ptr);
  lVar2 = GetValueFromNameValueList(local_a8,"NewUptime");
  __src = (char *)GetValueFromNameValueList(local_a8,"NewConnectionStatus");
  __src_00 = (char *)GetValueFromNameValueList(local_a8,"NewLastConnectionError");
  if ((__src == (char *)0x0) || (lVar2 == 0)) {
    if (param_3 != (char *)0x0) {
      if (__src == (char *)0x0) {
        *param_3 = '\0';
      }
      else {
        strncpy(param_3,__src,0x40);
        param_3[0x3f] = '\0';
      }
    }
    if (param_4 != (undefined4 *)0x0) {
      if (lVar2 != 0) goto LAB_00100408;
      *param_4 = 0;
    }
  }
  else {
    local_ac = 0;
    if (param_3 != (char *)0x0) {
      strncpy(param_3,__src,0x40);
      param_3[0x3f] = '\0';
    }
    if (param_4 != (undefined4 *)0x0) {
LAB_00100408:
      __isoc99_sscanf(lVar2,&_LC12,param_4);
    }
  }
  if (param_5 != (char *)0x0) {
    if (__src_00 == (char *)0x0) {
      *param_5 = '\0';
    }
    else {
      strncpy(param_5,__src_00,0x40);
      param_5[0x3f] = '\0';
    }
  }
  lVar2 = GetValueFromNameValueList(local_a8,"errorCode");
  if (lVar2 != 0) {
    local_ac = 0xffffffff;
    __isoc99_sscanf(lVar2,&_LC14,&local_ac);
  }
  ClearNameValueList(local_a8);
  uVar1 = local_ac;
LAB_00100487:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined4 UPNP_GetConnectionTypeInfo(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  void *__ptr;
  char *__src;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0xffffffff;
  if (param_3 == (char *)0x0) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetConnectionTypeInfo",0,&local_90
                                     );
    if (__ptr == (void *)0x0) {
      uVar1 = 0xfffffffd;
    }
    else {
      ParseNameValue(__ptr,local_90,local_88);
      free(__ptr);
      __src = (char *)GetValueFromNameValueList(local_88,"NewConnectionType");
      if (__src == (char *)0x0) {
        *param_3 = '\0';
      }
      else {
        strncpy(param_3,__src,0x40);
        param_3[0x3f] = '\0';
        local_8c = 0;
      }
      lVar2 = GetValueFromNameValueList(local_88,"errorCode");
      if (lVar2 != 0) {
        local_8c = 0xffffffff;
        __isoc99_sscanf(lVar2,&_LC14,&local_8c);
      }
      ClearNameValueList(local_88);
      uVar1 = local_8c;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_GetLinkLayerMaxBitRates
          (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  void *__ptr;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0xffffffff;
  if (param_4 == (undefined4 *)0x0 && param_3 == (undefined4 *)0x0) {
    uVar1 = 0xfffffffe;
    goto LAB_00100792;
  }
  __ptr = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetCommonLinkProperties",0,&local_a0
                                   );
  if (__ptr == (void *)0x0) {
    uVar1 = 0xfffffffd;
    goto LAB_00100792;
  }
  ParseNameValue(__ptr,local_a0,local_98);
  free(__ptr);
  lVar2 = GetValueFromNameValueList(local_98,"NewLayer1DownstreamMaxBitRate");
  lVar3 = GetValueFromNameValueList(local_98,"NewLayer1UpstreamMaxBitRate");
  if ((lVar2 == 0) || (lVar3 == 0)) {
    if (param_3 != (undefined4 *)0x0) {
      if (lVar2 == 0) {
        *param_3 = 0;
      }
      else {
        __isoc99_sscanf(lVar2,&_LC12,param_3);
      }
    }
    if (param_4 != (undefined4 *)0x0) {
      if (lVar3 != 0) goto LAB_00100744;
      *param_4 = 0;
    }
  }
  else {
    local_9c = 0;
    if (param_3 != (undefined4 *)0x0) {
      __isoc99_sscanf(lVar2,&_LC12,param_3);
    }
    if (param_4 != (undefined4 *)0x0) {
LAB_00100744:
      __isoc99_sscanf(lVar3,&_LC12,param_4);
    }
  }
  lVar2 = GetValueFromNameValueList(local_98,"errorCode");
  if (lVar2 != 0) {
    local_9c = 0xffffffff;
    __isoc99_sscanf(lVar2,&_LC14,&local_9c);
  }
  ClearNameValueList(local_98);
  uVar1 = local_9c;
LAB_00100792:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined4 UPNP_GetExternalIPAddress(long param_1,long param_2,char *param_3)

{
  undefined4 uVar1;
  void *__ptr;
  char *__src;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0xffffffff;
  if ((param_1 == 0 || param_2 == 0) || (param_3 == (char *)0x0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetExternalIPAddress",0,&local_90)
    ;
    if (__ptr == (void *)0x0) {
      uVar1 = 0xfffffffd;
    }
    else {
      ParseNameValue(__ptr,local_90,local_88);
      free(__ptr);
      __src = (char *)GetValueFromNameValueList(local_88,"NewExternalIPAddress");
      if (__src == (char *)0x0) {
        *param_3 = '\0';
      }
      else {
        strncpy(param_3,__src,0x10);
        param_3[0xf] = '\0';
        local_8c = 0;
      }
      lVar2 = GetValueFromNameValueList(local_88,"errorCode");
      if (lVar2 != 0) {
        local_8c = 0xffffffff;
        __isoc99_sscanf(lVar2,&_LC14,&local_8c);
      }
      ClearNameValueList(local_88);
      uVar1 = local_8c;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_AddPortMapping(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                   char *param_6,long param_7,undefined8 param_8,undefined *param_9)

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_4 == 0) || (param_5 == 0)) || (param_7 == 0)) || (param_3 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(9,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      __ptr[1] = param_8;
      __ptr[5] = param_7;
      *__ptr = "NewRemoteHost";
      __ptr[2] = "NewExternalPort";
      __ptr[4] = "NewProtocol";
      __ptr[6] = "NewInternalPort";
      __ptr[8] = "NewInternalClient";
      __ptr[10] = "NewEnabled";
      __ptr[0xb] = &_LC30;
      __ptr[0xc] = "NewPortMappingDescription";
      if (param_6 == (char *)0x0) {
        param_6 = "libminiupnpc";
      }
      __ptr[3] = param_3;
      __ptr[0xe] = "NewLeaseDuration";
      if (param_9 == (undefined *)0x0) {
        param_9 = &_LC23;
      }
      __ptr[9] = param_5;
      __ptr[0xd] = param_6;
      __ptr[7] = param_4;
      __ptr[0xf] = param_9;
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"AddPortMapping",__ptr,
                                           &local_b0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_b0,local_a8);
        free(__ptr_00);
        lVar2 = GetValueFromNameValueList(local_a8,"errorCode");
        if (lVar2 == 0) {
          local_ac = 0;
        }
        else {
          local_ac = 0xffffffff;
          __isoc99_sscanf(lVar2,&_LC14,&local_ac);
        }
        ClearNameValueList(local_a8);
        uVar1 = local_ac;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_AddAnyPortMapping
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
          char *param_6,long param_7,undefined8 param_8,undefined *param_9,char *param_10)

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar2;
  char *__src;
  long in_FS_OFFSET;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_4 == 0) || (param_5 == 0)) || (param_7 == 0)) || (param_3 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(9,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      *__ptr = "NewRemoteHost";
      __ptr[2] = "NewExternalPort";
      __ptr[4] = "NewProtocol";
      __ptr[6] = "NewInternalPort";
      __ptr[8] = "NewInternalClient";
      __ptr[10] = "NewEnabled";
      __ptr[0xb] = &_LC30;
      __ptr[0xc] = "NewPortMappingDescription";
      if (param_6 == (char *)0x0) {
        param_6 = "libminiupnpc";
      }
      __ptr[3] = param_3;
      __ptr[0xe] = "NewLeaseDuration";
      if (param_9 == (undefined *)0x0) {
        param_9 = &_LC23;
      }
      __ptr[7] = param_4;
      __ptr[9] = param_5;
      __ptr[0xd] = param_6;
      __ptr[1] = param_8;
      __ptr[5] = param_7;
      __ptr[0xf] = param_9;
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"AddAnyPortMapping",__ptr,
                                           &local_b0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_b0,local_a8);
        free(__ptr_00);
        lVar2 = GetValueFromNameValueList(local_a8,"errorCode");
        if (lVar2 == 0) {
          __src = (char *)GetValueFromNameValueList(local_a8,"NewReservedPort");
          if (__src == (char *)0x0) {
            local_ac = 0xfffffffc;
          }
          else {
            strncpy(param_10,__src,6);
            param_10[5] = '\0';
            local_ac = 0;
          }
        }
        else {
          local_ac = 0xffffffff;
          __isoc99_sscanf(lVar2,&_LC14,&local_ac);
        }
        ClearNameValueList(local_a8);
        uVar1 = local_ac;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_DeletePortMapping
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(4,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      __ptr[3] = param_3;
      __ptr[1] = param_5;
      *__ptr = "NewRemoteHost";
      __ptr[2] = "NewExternalPort";
      __ptr[4] = "NewProtocol";
      __ptr[5] = param_4;
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"DeletePortMapping",__ptr,
                                           &local_b0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_b0,local_a8);
        free(__ptr_00);
        lVar2 = GetValueFromNameValueList(local_a8,"errorCode");
        if (lVar2 == 0) {
          local_ac = 0;
        }
        else {
          local_ac = 0xffffffff;
          __isoc99_sscanf(lVar2,&_LC14,&local_ac);
        }
        ClearNameValueList(local_a8);
        uVar1 = local_ac;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_DeletePortMappingRange
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,long param_6
          )

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) || (param_6 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(5,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      __ptr[1] = param_3;
      __ptr[3] = param_4;
      *__ptr = "NewStartPort";
      __ptr[2] = "NewEndPort";
      __ptr[4] = "NewProtocol";
      __ptr[7] = param_6;
      __ptr[5] = param_5;
      __ptr[6] = "NewManage";
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"DeletePortMappingRange",__ptr
                                           ,&local_b0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_b0,local_a8);
        free(__ptr_00);
        lVar2 = GetValueFromNameValueList(local_a8,"errorCode");
        if (lVar2 == 0) {
          local_ac = 0;
        }
        else {
          local_ac = 0xffffffff;
          __isoc99_sscanf(lVar2,&_LC14,&local_ac);
        }
        ClearNameValueList(local_a8);
        uVar1 = local_ac;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_GetGenericPortMappingEntry
          (undefined8 param_1,undefined8 param_2,long param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,char *param_8,char *param_9,char *param_10,char *param_11)

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  char *pcVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = 0xffffffff;
  if (param_3 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    *param_5 = '\0';
    *param_6 = '\0';
    __ptr = (undefined8 *)calloc(2,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      *__ptr = "NewPortMappingIndex";
      __ptr[1] = param_3;
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetGenericPortMappingEntry",
                                           __ptr,&local_b0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_b0,local_a8);
        free(__ptr_00);
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewRemoteHost");
        if ((pcVar2 != (char *)0x0) && (param_10 != (char *)0x0)) {
          strncpy(param_10,pcVar2,0x40);
          param_10[0x3f] = '\0';
        }
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewExternalPort");
        if ((pcVar2 != (char *)0x0) && (param_4 != (char *)0x0)) {
          strncpy(param_4,pcVar2,6);
          param_4[5] = '\0';
          local_ac = 0;
        }
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewProtocol");
        if ((pcVar2 != (char *)0x0) && (param_7 != (char *)0x0)) {
          strncpy(param_7,pcVar2,4);
          param_7[3] = '\0';
        }
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewInternalClient");
        if (pcVar2 != (char *)0x0) {
          strncpy(param_5,pcVar2,0x10);
          param_5[0xf] = '\0';
          local_ac = 0;
        }
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewInternalPort");
        if (pcVar2 != (char *)0x0) {
          strncpy(param_6,pcVar2,6);
          param_6[5] = '\0';
        }
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewEnabled");
        if ((pcVar2 != (char *)0x0) && (param_9 != (char *)0x0)) {
          strncpy(param_9,pcVar2,4);
          param_9[3] = '\0';
        }
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewPortMappingDescription");
        if ((pcVar2 != (char *)0x0) && (param_8 != (char *)0x0)) {
          strncpy(param_8,pcVar2,0x50);
          param_8[0x4f] = '\0';
        }
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewLeaseDuration");
        if ((pcVar2 != (char *)0x0) && (param_11 != (char *)0x0)) {
          strncpy(param_11,pcVar2,0x10);
          param_11[0xf] = '\0';
        }
        lVar3 = GetValueFromNameValueList(local_a8,"errorCode");
        if (lVar3 != 0) {
          local_ac = 0xffffffff;
          __isoc99_sscanf(lVar3,&_LC14,&local_ac);
        }
        ClearNameValueList(local_a8);
        uVar1 = local_ac;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_GetPortMappingNumberOfEntries(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  void *__ptr;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0xffffffff;
  __ptr = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetPortMappingNumberOfEntries",0,
                                    &local_90);
  if (__ptr == (void *)0x0) {
    uVar1 = 0xfffffffd;
  }
  else {
    ParseNameValue(__ptr,local_90,local_88);
    free(__ptr);
    lVar2 = GetValueFromNameValueList(local_88,"NewPortMappingNumberOfEntries");
    if ((param_3 != (undefined4 *)0x0) && (lVar2 != 0)) {
      *param_3 = 0;
      __isoc99_sscanf(lVar2,&_LC12,param_3);
      local_8c = 0;
    }
    lVar2 = GetValueFromNameValueList(local_88,"errorCode");
    if (lVar2 != 0) {
      local_8c = 0xffffffff;
      __isoc99_sscanf(lVar2,&_LC14,&local_8c);
    }
    ClearNameValueList(local_88);
    uVar1 = local_8c;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_GetSpecificPortMappingEntry
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
          char *param_6,char *param_7,char *param_8,char *param_9,char *param_10)

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  char *pcVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = 0xffffffff;
  if ((((param_7 == (char *)0x0) || (param_6 == (char *)0x0)) || (param_3 == 0)) || (param_4 == 0))
  {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(4,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      __ptr[1] = param_5;
      *__ptr = "NewRemoteHost";
      __ptr[2] = "NewExternalPort";
      __ptr[3] = param_3;
      __ptr[5] = param_4;
      __ptr[4] = "NewProtocol";
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetSpecificPortMappingEntry",
                                           __ptr,&local_b0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_b0,local_a8);
        free(__ptr_00);
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewInternalClient");
        if (pcVar2 == (char *)0x0) {
          *param_6 = '\0';
        }
        else {
          strncpy(param_6,pcVar2,0x10);
          param_6[0xf] = '\0';
          local_ac = 0;
        }
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewInternalPort");
        if (pcVar2 == (char *)0x0) {
          *param_7 = '\0';
        }
        else {
          strncpy(param_7,pcVar2,6);
          param_7[5] = '\0';
        }
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewEnabled");
        if ((pcVar2 != (char *)0x0) && (param_9 != (char *)0x0)) {
          strncpy(param_9,pcVar2,4);
          param_9[3] = '\0';
        }
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewPortMappingDescription");
        if ((pcVar2 != (char *)0x0) && (param_8 != (char *)0x0)) {
          strncpy(param_8,pcVar2,0x50);
          param_8[0x4f] = '\0';
        }
        pcVar2 = (char *)GetValueFromNameValueList(local_a8,"NewLeaseDuration");
        if ((pcVar2 != (char *)0x0) && (param_10 != (char *)0x0)) {
          strncpy(param_10,pcVar2,0x10);
          param_10[0xf] = '\0';
        }
        lVar3 = GetValueFromNameValueList(local_a8,"errorCode");
        if (lVar3 != 0) {
          local_ac = 0xffffffff;
          __isoc99_sscanf(lVar3,&_LC14,&local_ac);
        }
        ClearNameValueList(local_a8);
        uVar1 = local_ac;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_GetListOfPortMappings
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
          undefined *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [72];
  long local_60;
  undefined4 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = 0xffffffff;
  if ((param_4 == 0 || param_5 == 0) || (param_3 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(6,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      __ptr[3] = param_4;
      __ptr[5] = param_5;
      __ptr[1] = param_3;
      *__ptr = "NewStartPort";
      __ptr[2] = "NewEndPort";
      __ptr[4] = "NewProtocol";
      __ptr[6] = "NewManage";
      __ptr[7] = &_LC30;
      __ptr[8] = "NewNumberOfPorts";
      if (param_6 == (undefined *)0x0) {
        param_6 = &_LC46;
      }
      __ptr[9] = param_6;
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetListOfPortMappings",__ptr,
                                           &local_b0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_b0,local_a8);
        free(__ptr_00);
        if (local_60 != 0) {
          ParsePortListing(local_60,local_58,param_7);
          local_ac = 0;
        }
        lVar2 = GetValueFromNameValueList(local_a8,"errorCode");
        if (lVar2 != 0) {
          local_ac = 0xffffffff;
          __isoc99_sscanf(lVar2,&_LC14,&local_ac);
        }
        ClearNameValueList(local_a8);
        uVar1 = local_ac;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_GetFirewallStatus
          (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  void *__ptr;
  char *__nptr;
  char *__nptr_00;
  ulonglong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0xffffffff;
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined4 *)0x0)) {
    uVar1 = 0xfffffffe;
    goto LAB_00101bf3;
  }
  __ptr = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetFirewallStatus",0,&local_a0);
  if (__ptr == (void *)0x0) {
    uVar1 = 0xfffffffd;
    goto LAB_00101bf3;
  }
  ParseNameValue(__ptr,local_a0,local_98);
  free(__ptr);
  __nptr = (char *)GetValueFromNameValueList(local_98,"FirewallEnabled");
  __nptr_00 = (char *)GetValueFromNameValueList(local_98);
  if (__nptr_00 == (char *)0x0) {
    if (__nptr == (char *)0x0) goto LAB_00101c30;
    uVar2 = strtoull(__nptr,(char **)0x0,0);
    *param_3 = (int)uVar2;
  }
  else {
    if (__nptr == (char *)0x0) {
LAB_00101c30:
      if (__nptr_00 == (char *)0x0) goto LAB_00101bb5;
    }
    else {
      local_9c = 0;
      uVar2 = strtoull(__nptr,(char **)0x0,0);
      *param_3 = (int)uVar2;
    }
    uVar2 = strtoull(__nptr_00,(char **)0x0,0);
    *param_4 = (int)uVar2;
  }
LAB_00101bb5:
  lVar3 = GetValueFromNameValueList(local_98,"errorCode");
  if (lVar3 != 0) {
    local_9c = 0xffffffff;
    __isoc99_sscanf(lVar3,&_LC14,&local_9c);
  }
  ClearNameValueList(local_98);
  uVar1 = local_9c;
LAB_00101bf3:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined4
UPNP_GetOutboundPinholeTimeout
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,long param_6
          ,long param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar2;
  char *__nptr;
  ulonglong uVar3;
  long in_FS_OFFSET;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_6 == 0) || (param_5 == 0)) || (param_7 == 0 || param_4 == 0)) || (param_3 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(6,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      __ptr[7] = param_6;
      __ptr[1] = param_3;
      *__ptr = "RemoteHost";
      __ptr[2] = "RemotePort";
      __ptr[4] = "Protocol";
      __ptr[6] = "InternalPort";
      __ptr[3] = param_4;
      __ptr[5] = param_7;
      __ptr[8] = "InternalClient";
      __ptr[9] = param_5;
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetOutboundPinholeTimeout",
                                           __ptr,&local_b0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_b0,local_a8);
        free(__ptr_00);
        lVar2 = GetValueFromNameValueList(local_a8,"errorCode");
        if (lVar2 == 0) {
          __nptr = (char *)GetValueFromNameValueList(local_a8);
          if (__nptr != (char *)0x0) {
            uVar3 = strtoull(__nptr,(char **)0x0,0);
            *param_8 = (int)uVar3;
          }
          local_ac = 0;
        }
        else {
          local_ac = 0xffffffff;
          __isoc99_sscanf(lVar2,&_LC14,&local_ac);
        }
        ClearNameValueList(local_a8);
        uVar1 = local_ac;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_AddPinhole(undefined8 param_1,undefined8 param_2,char *param_3,long param_4,char *param_5,
               long param_6,long param_7,long param_8,char *param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *__ptr;
  void *__ptr_00;
  char *__src;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_6 == 0) || (param_5 == (char *)0x0)) || (param_7 == 0)) ||
     (((param_3 == (char *)0x0 || (param_4 == 0)) || (param_8 == 0)))) {
    uVar2 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(7,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar2 = 0xfffffffb;
    }
    else {
      iVar1 = strncmp(param_3,"empty",5);
      __ptr[3] = param_4;
      __ptr[5] = param_7;
      if (iVar1 == 0) {
        param_3 = "";
      }
      *__ptr = "RemoteHost";
      __ptr[2] = "RemotePort";
      __ptr[4] = "Protocol";
      __ptr[6] = "InternalPort";
      __ptr[1] = param_3;
      __ptr[7] = param_6;
      iVar1 = strncmp(param_5,"empty",5);
      __ptr[8] = "InternalClient";
      if (iVar1 == 0) {
        param_5 = "";
      }
      __ptr[10] = "LeaseTime";
      __ptr[9] = param_5;
      __ptr[0xb] = param_8;
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"AddPinhole",__ptr,&local_b0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar2 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_b0,local_a8);
        free(__ptr_00);
        __src = (char *)GetValueFromNameValueList(local_a8,"UniqueID");
        if (__src != (char *)0x0) {
          strncpy(param_9,__src,8);
          param_9[7] = '\0';
        }
        lVar3 = GetValueFromNameValueList(local_a8,"errorCode");
        if (lVar3 == 0) {
          local_ac = 0;
        }
        else {
          local_ac = 0xffffffff;
          __isoc99_sscanf(lVar3,&_LC14,&local_ac);
        }
        ClearNameValueList(local_a8);
        uVar2 = local_ac;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 UPNP_UpdatePinhole(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(3,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      __ptr[1] = param_3;
      __ptr[3] = param_4;
      *__ptr = "UniqueID";
      __ptr[2] = "NewLeaseTime";
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"UpdatePinhole",__ptr,
                                           &local_a0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_a0,local_98);
        free(__ptr_00);
        lVar2 = GetValueFromNameValueList(local_98,"errorCode");
        if (lVar2 == 0) {
          local_9c = 0;
        }
        else {
          local_9c = 0xffffffff;
          __isoc99_sscanf(lVar2,&_LC14,&local_9c);
        }
        ClearNameValueList(local_98);
        uVar1 = local_9c;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 UPNP_DeletePinhole(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(2,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      __ptr[1] = param_3;
      *__ptr = "UniqueID";
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"DeletePinhole",__ptr,
                                           &local_a0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_a0,local_98);
        free(__ptr_00);
        lVar2 = GetValueFromNameValueList(local_98,"errorCode");
        if (lVar2 == 0) {
          local_9c = 0;
        }
        else {
          local_9c = 0xffffffff;
          __isoc99_sscanf(lVar2,&_LC14,&local_9c);
        }
        ClearNameValueList(local_98);
        uVar1 = local_9c;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_CheckPinholeWorking(undefined8 param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  char *__nptr;
  ulonglong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0xffffffff;
  if (param_3 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(4,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      __ptr[1] = param_3;
      *__ptr = "UniqueID";
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"CheckPinholeWorking",__ptr,
                                           &local_a0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_a0,local_98);
        free(__ptr_00);
        __nptr = (char *)GetValueFromNameValueList(local_98);
        if (__nptr == (char *)0x0) {
          *param_4 = 0;
        }
        else {
          uVar2 = strtoull(__nptr,(char **)0x0,0);
          local_9c = 0;
          *param_4 = (int)uVar2;
        }
        lVar3 = GetValueFromNameValueList(local_98,"errorCode");
        if (lVar3 != 0) {
          local_9c = 0xffffffff;
          __isoc99_sscanf(lVar3,&_LC14,&local_9c);
        }
        ClearNameValueList(local_98);
        uVar1 = local_9c;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
UPNP_GetPinholePackets(undefined8 param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  char *__nptr;
  ulonglong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0xffffffff;
  if (param_3 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    __ptr = (undefined8 *)calloc(4,0x10);
    if (__ptr == (undefined8 *)0x0) {
      uVar1 = 0xfffffffb;
    }
    else {
      __ptr[1] = param_3;
      *__ptr = "UniqueID";
      __ptr_00 = (void *)simpleUPnPcommand(0xffffffff,param_1,param_2,"GetPinholePackets",__ptr,
                                           &local_a0);
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        uVar1 = 0xfffffffd;
      }
      else {
        ParseNameValue(__ptr_00,local_a0,local_98);
        free(__ptr_00);
        __nptr = (char *)GetValueFromNameValueList(local_98);
        if (__nptr != (char *)0x0) {
          uVar2 = strtoull(__nptr,(char **)0x0,0);
          local_9c = 0;
          *param_4 = (int)uVar2;
        }
        lVar3 = GetValueFromNameValueList(local_98,"errorCode");
        if (lVar3 != 0) {
          local_9c = 0xffffffff;
          __isoc99_sscanf(lVar3,&_LC14,&local_9c);
        }
        ClearNameValueList(local_98);
        uVar1 = local_9c;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


