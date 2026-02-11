
void xrGetInstanceProperties(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrGetInstanceProperties");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x28))(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrPollEvent(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrPollEvent");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x30))(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrResultToString(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrResultToString");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x38))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrStructureTypeToString(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrStructureTypeToString");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x40))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrGetSystem(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrGetSystem");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x48))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrGetSystemProperties(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrGetSystemProperties");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x50))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrEnumerateEnvironmentBlendModes
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_48,"xrEnumerateEnvironmentBlendModes");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x58))
              (param_1,param_2,param_3,param_4,param_5,param_6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrCreateSession(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrCreateSession");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x60))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrDestroySession(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_18,"xrDestroySession");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x68))(param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrEnumerateReferenceSpaces
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_38,"xrEnumerateReferenceSpaces");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x70))(param_1,param_2,param_3,param_4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrCreateReferenceSpace(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrCreateReferenceSpace");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x78))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrGetReferenceSpaceBoundsRect(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrGetReferenceSpaceBoundsRect");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x80))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrCreateActionSpace(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrCreateActionSpace");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x88))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrLocateSpace(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_38,"xrLocateSpace");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x90))(param_1,param_2,param_3,param_4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrDestroySpace(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_18,"xrDestroySpace");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x98))(param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrEnumerateViewConfigurations
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_38,"xrEnumerateViewConfigurations");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0xa0))(param_1,param_2,param_3,param_4,param_5);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrGetViewConfigurationProperties
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_38,"xrGetViewConfigurationProperties");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0xa8))(param_1,param_2,param_3,param_4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrEnumerateViewConfigurationViews
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_48,"xrEnumerateViewConfigurationViews");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0xb0))
              (param_1,param_2,param_3,param_4,param_5,param_6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrEnumerateSwapchainFormats
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_38,"xrEnumerateSwapchainFormats");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0xb8))(param_1,param_2,param_3,param_4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrCreateSwapchain(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrCreateSwapchain");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0xc0))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrDestroySwapchain(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_18,"xrDestroySwapchain");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_18 + 0x48) + 200))(param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrEnumerateSwapchainImages
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_38,"xrEnumerateSwapchainImages");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0xd0))(param_1,param_2,param_3,param_4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrAcquireSwapchainImage(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrAcquireSwapchainImage");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0xd8))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrWaitSwapchainImage(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrWaitSwapchainImage");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0xe0))(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrReleaseSwapchainImage(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrReleaseSwapchainImage");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0xe8))(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrBeginSession(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrBeginSession");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0xf0))(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrEndSession(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_18,"xrEndSession");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0xf8))(param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrRequestExitSession(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_18,"xrRequestExitSession");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x100))(param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrWaitFrame(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrWaitFrame");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x108))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrBeginFrame(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrBeginFrame");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x110))(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrEndFrame(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrEndFrame");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x118))(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrLocateViews(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_48,"xrLocateViews");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x120))
              (param_1,param_2,param_3,param_4,param_5,param_6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrStringToPath(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrStringToPath");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x128))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrPathToString(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_38,"xrPathToString");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x130))(param_1,param_2,param_3,param_4,param_5);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrCreateActionSet(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrCreateActionSet");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x138))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrDestroyActionSet(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_18,"xrDestroyActionSet");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x140))(param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrCreateAction(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrCreateAction");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x148))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrDestroyAction(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_18,"xrDestroyAction");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x150))(param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrSuggestInteractionProfileBindings(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrSuggestInteractionProfileBindings");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x158))(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrAttachSessionActionSets(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrAttachSessionActionSets");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x160))(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrGetCurrentInteractionProfile(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrGetCurrentInteractionProfile");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x168))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrGetActionStateBoolean(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrGetActionStateBoolean");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x170))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrGetActionStateFloat(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrGetActionStateFloat");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x178))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrGetActionStateVector2f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrGetActionStateVector2f");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x180))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrGetActionStatePose(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrGetActionStatePose");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x188))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrSyncActions(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrSyncActions");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 400))(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrEnumerateBoundSourcesForAction
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_38,"xrEnumerateBoundSourcesForAction");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x198))(param_1,param_2,param_3,param_4,param_5);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrGetInputSourceLocalizedName
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_38,"xrGetInputSourceLocalizedName");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x1a0))(param_1,param_2,param_3,param_4,param_5);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrApplyHapticFeedback(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrApplyHapticFeedback");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x1a8))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrStopHapticFeedback(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrStopHapticFeedback");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x1b0))(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void xrLocateSpaces(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  LoaderInstance *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ActiveLoaderInstance::Get(&local_28,"xrLocateSpaces");
  if (-1 < iVar1) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x1b8))(param_1,param_2,param_3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


