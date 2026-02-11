
ulong soapPostSubmit(int param_1,undefined8 param_2,undefined8 param_3,short param_4,
                    undefined8 param_5,char *param_6,undefined8 param_7)

{
  uint uVar1;
  size_t sVar2;
  void *__buf;
  ulong uVar3;
  ulong uVar4;
  size_t __size;
  long in_FS_OFFSET;
  undefined1 local_250 [8];
  undefined1 local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen(param_6);
  local_250[0] = 0;
  if (param_4 != 0x50) {
    __snprintf_chk(local_250,8,2,8,&_LC0,param_4);
  }
  uVar1 = __snprintf_chk(local_248,0x200,2,0x200,
                         "POST %s HTTP/%s\r\nHost: %s%s\r\nUser-Agent: Godot Engine/1.0 UPnP/1.1 MiniUPnPc/2.2.8\r\nContent-Length: %d\r\nContent-Type: text/xml; charset=\"utf-8\"\r\nSOAPAction: \"%s\"\r\nConnection: close\r\nCache-Control: no-cache\r\n\r\n"
                         ,param_2,param_7,param_3,local_250,sVar2,param_5);
  if (uVar1 < 0x200) {
    __size = (size_t)(int)(uVar1 + (int)sVar2);
    __buf = malloc(__size);
    if (__buf != (void *)0x0) {
      __memcpy_chk(__buf,local_248,(long)(int)uVar1,__size);
      __memcpy_chk((long)__buf + (long)(int)uVar1,param_6,(long)(int)sVar2);
      uVar3 = send(param_1,__buf,__size,0);
      uVar4 = uVar3 & 0xffffffff;
      if ((int)uVar3 < 0) {
        perror("send");
      }
      free(__buf);
      goto LAB_0010013d;
    }
  }
  uVar4 = 0xffffffff;
LAB_0010013d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 soapPostSubmit_cold(void)

{
  undefined4 unaff_EBX;
  void *unaff_R12;
  long in_FS_OFFSET;
  long in_stack_00000238;
  
  perror("send");
  free(unaff_R12);
  if (in_stack_00000238 == *(long *)(in_FS_OFFSET + 0x28)) {
    return unaff_EBX;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


