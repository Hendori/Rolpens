
bool uprv_isASCIILetter_76_godot(byte param_1)

{
  return (byte)((param_1 & 0xdf) + 0xbf) < 0x1a;
}



int uprv_toupper_76_godot(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x20;
  if (0x19 < (byte)((char)param_1 + 0x9fU)) {
    iVar1 = param_1;
  }
  return iVar1;
}



int uprv_asciitolower_76_godot(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if (0x19 < (byte)((char)param_1 + 0xbfU)) {
    iVar1 = param_1;
  }
  return iVar1;
}



int uprv_ebcdictolower_76_godot(int param_1)

{
  if (((byte)(param_1 + 0x3fU) < 0x29) &&
     ((0x1fe01ff01ffU >> ((ulong)(param_1 + 0x3fU) & 0x3f) & 1) != 0)) {
    param_1 = param_1 + -0x40;
  }
  return param_1;
}



char * T_CString_toLowerCase_76_godot(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (param_1 != (char *)0x0) {
    while( true ) {
      cVar1 = *param_1;
      while ((byte)(cVar1 + 0xbfU) < 0x1a) {
        *param_1 = cVar1 + ' ';
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      if (cVar1 == '\0') break;
      param_1 = param_1 + 1;
    }
  }
  return pcVar2;
}



char * T_CString_toUpperCase_76_godot(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (param_1 != (char *)0x0) {
    while( true ) {
      cVar1 = *param_1;
      while ((byte)(cVar1 + 0x9fU) < 0x1a) {
        *param_1 = cVar1 + -0x20;
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      if (cVar1 == '\0') break;
      param_1 = param_1 + 1;
    }
  }
  return pcVar2;
}



int T_CString_integerToString_76_godot(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  char acStack_48 [29];
  undefined1 local_2b;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)param_2 < 0) && (param_3 == 10)) {
    *param_1 = '-';
    param_2 = -param_2;
    param_1 = param_1 + 1;
    iVar4 = 0x1e;
  }
  else {
    iVar4 = 0x1d;
  }
  local_2b = 0;
  lVar3 = 0x1c;
  do {
    lVar5 = lVar3;
    bVar2 = (byte)(param_2 % param_3);
    cVar1 = bVar2 + 0x37;
    if (bVar2 < 10) {
      cVar1 = bVar2 + 0x30;
    }
    acStack_48[lVar5] = cVar1;
    bVar6 = param_3 <= param_2;
    lVar3 = lVar5 + -1;
    param_2 = param_2 / param_3;
  } while (bVar6);
  strcpy(param_1,acStack_48 + (int)lVar5);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4 - (int)lVar5;
}



int T_CString_int64ToString_76_godot(char *param_1,ulong param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  char acStack_48 [29];
  undefined1 local_2b;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((long)param_2 < 0) && (param_3 == 10)) {
    *param_1 = '-';
    param_2 = -param_2;
    param_1 = param_1 + 1;
    iVar4 = 0x1e;
  }
  else {
    iVar4 = 0x1d;
  }
  local_2b = 0;
  uVar6 = (ulong)param_3;
  lVar3 = 0x1c;
  do {
    lVar5 = lVar3;
    bVar2 = (byte)(param_2 % uVar6);
    cVar1 = bVar2 + 0x37;
    if (bVar2 < 10) {
      cVar1 = bVar2 + 0x30;
    }
    acStack_48[lVar5] = cVar1;
    bVar7 = uVar6 <= param_2;
    lVar3 = lVar5 + -1;
    param_2 = param_2 / uVar6;
  } while (bVar7);
  strcpy(param_1,acStack_48 + (int)lVar5);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4 - (int)lVar5;
}



void T_CString_stringToInteger_76_godot(undefined8 param_1,undefined4 param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __isoc23_strtoul(param_1,auStack_18,param_2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int uprv_stricmp_76_godot(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  
  if (param_1 == (byte *)0x0) {
    return -(uint)(param_2 != (byte *)0x0);
  }
  if (param_2 != (byte *)0x0) {
    bVar3 = *param_1;
    bVar1 = *param_2;
    lVar4 = 1;
    while( true ) {
      if (bVar3 == 0) {
        return -(uint)(bVar1 != 0);
      }
      if (bVar1 == 0) break;
      bVar2 = bVar3 + 0x20;
      if (0x19 < (byte)(bVar3 + 0xbf)) {
        bVar2 = bVar3;
      }
      bVar3 = bVar1 + 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar3 = bVar1;
      }
      if ((uint)bVar2 - (uint)bVar3 != 0) {
        return (uint)bVar2 - (uint)bVar3;
      }
      bVar3 = param_1[lVar4];
      bVar1 = param_2[lVar4];
      lVar4 = lVar4 + 1;
    }
  }
  return 1;
}



undefined1  [16] uprv_strnicmp_76_godot(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_1 == 0) {
    auVar12._4_4_ = 0;
    auVar12._0_4_ = -(uint)(param_2 != 0);
    auVar12._8_8_ = param_3;
    return auVar12;
  }
  if (param_2 != 0) {
    iVar4 = (int)param_3;
    if (iVar4 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_3;
      return auVar5 << 0x40;
    }
    uVar8 = 0;
    while( true ) {
      bVar2 = *(byte *)(param_1 + uVar8);
      bVar3 = *(byte *)(param_2 + uVar8);
      param_3 = (ulong)(uint)bVar3;
      if (bVar2 == 0) {
        auVar10[8] = -bVar3;
        auVar10._4_4_ = 0;
        auVar10._0_4_ = -(uint)(bVar3 != 0);
        auVar10._9_7_ = 0;
        return auVar10;
      }
      if (bVar3 == 0) break;
      bVar6 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar6 = bVar2;
      }
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        param_3 = (ulong)(bVar3 + 0x20);
      }
      param_3 = param_3 & 0xff;
      uVar7 = (uint)bVar6 - (int)param_3;
      auVar13._0_8_ = CONCAT44(0,uVar7);
      if (uVar7 != 0) goto LAB_001003e5;
      uVar1 = uVar8 + 1;
      bVar9 = uVar8 == iVar4 - 1;
      uVar8 = uVar1;
      if (bVar9) {
        auVar13._8_8_ = uVar1;
        return auVar13;
      }
    }
  }
  auVar13._0_8_ = 1;
LAB_001003e5:
  auVar11._8_8_ = param_3;
  auVar11._0_8_ = auVar13._0_8_;
  return auVar11;
}



long uprv_strdup_76_godot(char *param_1)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  
  sVar2 = strlen(param_1);
  lVar1 = sVar2 + 1;
  lVar3 = uprv_malloc_76_godot(lVar1);
  if (lVar3 != 0) {
    lVar3 = __memcpy_chk(lVar3,param_1,lVar1,lVar1);
  }
  return lVar3;
}



long uprv_strndup_76_godot(undefined8 param_1,int param_2)

{
  long lVar1;
  
  if (-1 < param_2) {
    lVar1 = uprv_malloc_76_godot((long)(param_2 + 1));
    if (lVar1 != 0) {
      lVar1 = __memcpy_chk(lVar1,param_1,(long)param_2,(long)(param_2 + 1));
      *(undefined1 *)(lVar1 + param_2) = 0;
    }
    return lVar1;
  }
  lVar1 = uprv_strdup_76_godot();
  return lVar1;
}


