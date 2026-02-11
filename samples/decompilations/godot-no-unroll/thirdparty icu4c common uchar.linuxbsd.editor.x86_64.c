
undefined4 u_getUnicodeProperties_76_godot_part_0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x29e8;
    if (0x10ffff < param_1) goto LAB_00100079;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsVectorsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2)
                       + (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsVectorsTrie_index + lVar3 * 2) * 4)
          * 2;
LAB_00100079:
  return *(undefined4 *)
          (propsVectors +
          (long)(int)((uint)*(ushort *)(propsVectorsTrie_index + lVar3) + param_2) * 4);
}



ushort u_charType_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_0010012d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_0010012d:
  return *(ushort *)(propsTrie_index + lVar3) & 0x1f;
}



void u_enumCharTypes_76_godot(long param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  long local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    local_28 = param_1;
    local_20 = param_2;
    utrie2_enum_76_godot(propsTrie,0x100000,_enumTypeRange,&local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool u_islower_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_0010022d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_0010022d:
  return (*(ushort *)(propsTrie_index + lVar3) & 0x1f) == 2;
}



bool u_isupper_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_001002dd;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_001002dd:
  return (*(ushort *)(propsTrie_index + lVar3) & 0x1f) == 1;
}



bool u_istitle_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_0010038d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_0010038d:
  return (*(ushort *)(propsTrie_index + lVar3) & 0x1f) == 3;
}



bool u_isdigit_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_0010043d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_0010043d:
  return (*(ushort *)(propsTrie_index + lVar3) & 0x1f) == 9;
}



undefined8 u_isxdigit_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if (((param_1 - 0x41 < 0x26) && (0x19 < param_1 - 0x47)) ||
     ((param_1 - 0xff21 < 0x26 && (0x19 < param_1 - 0xff27)))) {
    return 1;
  }
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_00100521;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_00100521:
  return CONCAT71((int7)((ulong)lVar3 >> 8),(*(ushort *)(propsTrie_index + lVar3) & 0x1f) == 9);
}



uint u_isalpha_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_001005cd;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_001005cd:
  return 0x3eU >> ((byte)*(undefined2 *)(propsTrie_index + lVar3) & 0x1f) & 1;
}



uint u_isUAlphabetic_76_godot(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = u_getUnicodeProperties_76_godot_part_0(param_1,1);
  return uVar1 >> 8 & 1;
}



uint u_isalnum_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_0010069d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_0010069d:
  return 0x23eU >> ((byte)*(undefined2 *)(propsTrie_index + lVar3) & 0x1f) & 1;
}



bool u_isalnumPOSIX_76_godot(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar3 = param_1 & 0xffffffff;
  uVar2 = u_getUnicodeProperties_76_godot_part_0(param_1,1,param_3,param_4,uVar3);
  bVar4 = true;
  if ((uVar2 & 0x100) == 0) {
    cVar1 = u_isdigit_76_godot(uVar3 & 0xffffffff);
    bVar4 = cVar1 != '\0';
  }
  return bVar4;
}



undefined8 u_isdefined_76_godot(uint param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = (ulong)param_1;
  uVar3 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar4 = (long)(int)uVar3;
  }
  else if (param_1 < 0x10000) {
    iVar2 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar2 = 0x140;
    }
    lVar4 = (long)(int)(uVar3 + iVar2);
  }
  else {
    lVar4 = 0x2618;
    if (0x10ffff < param_1) goto LAB_0010077d;
    lVar4 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar3 & 0x3f));
  }
  uVar1 = 0;
  lVar4 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar4 * 2) * 4) * 2;
LAB_0010077d:
  return CONCAT71((int7)(uVar1 >> 8),(propsTrie_index[lVar4] & 0x1f) != 0);
}



uint u_isbase_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_0010081d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_0010081d:
  return 0xfbeU >> ((byte)*(undefined2 *)(propsTrie_index + lVar3) & 0x1f) & 1;
}



uint u_iscntrl_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_001008cd;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_001008cd:
  return 0x1e000U >> ((byte)*(undefined2 *)(propsTrie_index + lVar3) & 0x1f) & 1;
}



uint u_isISOControl_76_godot(uint param_1,undefined8 param_2,undefined4 param_3)

{
  return CONCAT31((int3)(param_1 - 0x20 >> 8),0x5e < param_1 - 0x20) &
         CONCAT31((int3)((uint)param_3 >> 8),param_1 < 0xa0);
}



uint u_isspace_76_godot(uint param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar2 = (long)(int)uVar1;
  }
  else if (param_1 < 0x10000) {
    iVar3 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar3 = 0x140;
    }
    lVar2 = (long)(int)(uVar1 + iVar3);
  }
  else {
    if (0x10ffff < param_1) goto LAB_001009c8;
    lVar2 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar1 & 0x3f));
  }
  if ((0x7000U >>
       (*(ushort *)
         (propsTrie_index +
         (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar2 * 2) * 4) * 2) &
       0x1f) & 1) != 0) {
    return 1;
  }
LAB_001009c8:
  if (0x9f < (int)param_1) {
    return 0;
  }
  return CONCAT31((int3)(param_1 - 9 >> 8),param_1 - 9 < 5) |
         CONCAT31((int3)(param_1 - 0x1c >> 8),param_1 - 0x1c < 4) |
         CONCAT31((int3)(param_1 >> 8),param_1 == 0x85);
}



uint u_isJavaSpaceChar_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_00100a7d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_00100a7d:
  return 0x7000U >> ((byte)*(undefined2 *)(propsTrie_index + lVar3) & 0x1f) & 1;
}



uint u_isWhitespace_76_godot(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    if ((((0x7000U >>
           (*(ushort *)
             (propsTrie_index +
             (long)(int)((param_1 & 0x1f) +
                        (uint)*(ushort *)(propsTrie_index + (long)(int)uVar1 * 2) * 4) * 2) & 0x1f)
          & 1) != 0) && (param_1 != 0xa0 && param_1 != 0x2007)) && (param_1 != 0x202f)) {
      return 1;
    }
  }
  else {
    if (param_1 < 0x10000) {
      iVar2 = 0;
      if ((int)param_1 < 0xdc00) {
        iVar2 = 0x140;
      }
      iVar2 = uVar1 + iVar2;
    }
    else {
      if (0x10ffff < param_1) goto LAB_00100b52;
      iVar2 = (uint)*(ushort *)(propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
              (uVar1 & 0x3f);
    }
    if ((0x7000U >>
         (*(ushort *)
           (propsTrie_index +
           (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + (long)iVar2 * 2) * 4)
           * 2) & 0x1f) & 1) != 0) {
      return 1;
    }
  }
LAB_00100b52:
  return CONCAT31((int3)(param_1 - 9 >> 8),param_1 - 9 < 0x17) &
         CONCAT31((int3)(param_1 - 0xe >> 8),0xd < param_1 - 0xe);
}



uint u_isblank_76_godot(uint param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  long lVar2;
  int iVar3;
  
  if (param_1 < 0xa0) {
    return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),param_1 == 9) |
           CONCAT31((int3)(param_1 >> 8),param_1 == 0x20);
  }
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar2 = (long)(int)uVar1;
  }
  else if (param_1 < 0x10000) {
    iVar3 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar3 = 0x140;
    }
    lVar2 = (long)(int)(uVar1 + iVar3);
  }
  else {
    lVar2 = 0x2618;
    if (0x10ffff < param_1) goto LAB_00100c55;
    lVar2 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar1 & 0x3f));
  }
  lVar2 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar2 * 2) * 4) * 2;
LAB_00100c55:
  return (uint)((*(ushort *)(propsTrie_index + lVar2) & 0x1f) == 0xc);
}



uint u_isUWhiteSpace_76_godot(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = u_getUnicodeProperties_76_godot_part_0(param_1,1);
  return uVar1 & 1;
}



uint u_isprint_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_00100d1d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_00100d1d:
  return -0x78002 >> ((byte)*(undefined2 *)(propsTrie_index + lVar3) & 0x1f) & 1;
}



uint u_isgraph_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_00100dcd;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_00100dcd:
  return -0x5f002 >> ((byte)*(undefined2 *)(propsTrie_index + lVar3) & 0x1f) & 1;
}



uint u_isgraphPOSIX_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_00100e7d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_00100e7d:
  return -0x4f002 >> ((byte)*(undefined2 *)(propsTrie_index + lVar3) & 0x1f) & 1;
}



ulong u_isprintPOSIX_76_godot(uint param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
LAB_00100f1a:
    uVar5 = 1;
    if ((*(ushort *)
          (propsTrie_index +
          (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2) &
        0x1f) == 0xc) goto LAB_00100f47;
  }
  else {
    if (param_1 < 0x10000) {
      iVar4 = 0;
      if ((int)param_1 < 0xdc00) {
        iVar4 = 0x140;
      }
      lVar3 = (long)(int)(uVar2 + iVar4);
      goto LAB_00100f1a;
    }
    if (param_1 < 0x110000) {
      lVar3 = (long)(int)((uint)*(ushort *)
                                 (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                         (uVar2 & 0x3f));
      goto LAB_00100f1a;
    }
  }
  cVar1 = u_isgraphPOSIX_76_godot();
  uVar5 = CONCAT71((int7)((ulong)extraout_RDX >> 8),cVar1 != '\0');
LAB_00100f47:
  return uVar5 & 0xffffffff;
}



uint u_ispunct_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_00100fdd;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_00100fdd:
  return 0x30f80000U >> ((byte)*(undefined2 *)(propsTrie_index + lVar3) & 0x1f) & 1;
}



uint u_isIDIgnorable_76_godot(uint param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  if ((int)param_1 < 0xa0) {
    if ((0x5e < param_1 - 0x20) && (param_1 < 0xa0)) {
      return CONCAT31((int3)(param_1 - 9 >> 8),0x16 < param_1 - 9) |
             CONCAT31((int3)(param_1 - 0xe >> 8),param_1 - 0xe < 0xe);
    }
    return 0;
  }
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar2 = (long)(int)uVar1;
  }
  else if (param_1 < 0x10000) {
    iVar3 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar3 = 0x140;
    }
    lVar2 = (long)(int)(uVar1 + iVar3);
  }
  else {
    lVar2 = 0x2618;
    if (0x10ffff < param_1) goto LAB_001010df;
    lVar2 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar1 & 0x3f));
  }
  lVar2 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar2 * 2) * 4) * 2;
LAB_001010df:
  return (uint)((*(ushort *)(propsTrie_index + lVar2) & 0x1f) == 0x10);
}



uint u_isJavaIDStart_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_0010116d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_0010116d:
  return 0x240003eU >> ((byte)*(undefined2 *)(propsTrie_index + lVar3) & 0x1f) & 1;
}



bool u_isJavaIDPart_76_godot(uint param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar4 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar4 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar4);
  }
  else {
    if (0x10ffff < param_1) goto LAB_00101240;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  if ((0x240077eU >>
       (*(ushort *)
         (propsTrie_index +
         (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2) &
       0x1f) & 1) != 0) {
    return true;
  }
LAB_00101240:
  cVar1 = u_isIDIgnorable_76_godot();
  return cVar1 != '\0';
}



int u_charDigitValue_76_godot(uint param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar1;
  }
  else if (param_1 < 0x10000) {
    iVar2 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar2 = 0x140;
    }
    lVar3 = (long)(int)(uVar1 + iVar2);
  }
  else {
    if (0x10ffff < param_1) {
      return -1;
    }
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar1 & 0x3f));
  }
  iVar2 = (*(ushort *)
            (propsTrie_index +
            (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2)
          >> 6) - 1;
  if (9 < iVar2) {
    iVar2 = -1;
  }
  return iVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double u_getNumericValue_76_godot(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  double dVar5;
  
  uVar1 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar4 = (long)(int)uVar1;
  }
  else if (param_1 < 0x10000) {
    iVar3 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar3 = 0x140;
    }
    lVar4 = (long)(int)(uVar1 + iVar3);
  }
  else {
    if (0x10ffff < param_1) {
      return _LC0;
    }
    lVar4 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar1 & 0x3f));
  }
  uVar1 = (uint)(*(ushort *)
                  (propsTrie_index +
                  (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar4 * 2) * 4)
                  * 2) >> 6);
  if (uVar1 == 0) {
    return _LC0;
  }
  if (uVar1 < 0xb) {
    return (double)(int)(uVar1 - 1);
  }
  if (uVar1 < 0x15) {
    return (double)(int)(uVar1 - 0xb);
  }
  if (uVar1 < 0xb0) {
    return (double)(int)(uVar1 - 0x15);
  }
  if (uVar1 < 0x1e0) {
    return (double)(((int)uVar1 >> 4) + -0xc) / (double)((uVar1 & 0xf) + 1);
  }
  if (0x2ff < uVar1) {
    if (uVar1 < 0x324) {
      uVar2 = uVar1 & 3;
      iVar3 = ((int)uVar1 >> 2) + -0xbf;
      if (uVar2 == 2) {
        iVar3 = iVar3 * 0x34bc0;
      }
      else if (uVar2 == 3) {
        iVar3 = iVar3 * 0xc5c100;
      }
      else if (uVar2 == 1) {
        iVar3 = iVar3 * 0xe10;
      }
      else {
        iVar3 = iVar3 * 0x3c;
      }
      return (double)iVar3;
    }
    if (0x33b < uVar1) {
      if (0x34b < uVar1) {
        return _LC0;
      }
      return (double)((uVar1 & 3) * 2 + 1) /
             (double)(0x20 << ((byte)((int)(uVar1 - 0x33c) >> 2) & 0x1f));
    }
    return (double)((uVar1 & 3) * 2 + 1) /
           (double)(0x14 << ((byte)((int)(uVar1 - 0x324) >> 2) & 0x1f));
  }
  dVar5 = (double)(((int)uVar1 >> 5) + -0xe);
  uVar2 = (uVar1 & 0x1f) + 2;
  if (uVar2 < 4) {
    if (uVar2 == 2) goto LAB_001015c0;
  }
  else {
    do {
      dVar5 = dVar5 * _LC1;
      uVar2 = uVar2 - 4;
    } while (3 < (int)uVar2);
    uVar1 = (uVar1 & 0x1f) - 2 & 3;
    if (uVar1 == 2) {
LAB_001015c0:
      return dVar5 * __LC3;
    }
    if (uVar1 != 3) {
      if (uVar1 != 1) {
        return dVar5;
      }
      return dVar5 * __LC4;
    }
  }
  return dVar5 * __LC2;
}



int u_digit_76_godot(int param_1,char param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  if (0x22 < (byte)(param_2 - 2U)) {
    return -1;
  }
  cVar2 = u_charDigitValue_76_godot();
  if (cVar2 < '\0') {
    cVar1 = (char)param_1;
    if (param_1 - 0x61U < 0x1a) {
      iVar3 = (int)(char)(cVar1 + -0x57);
      if (param_2 <= (char)(cVar1 + -0x57)) {
        iVar3 = -1;
      }
      return iVar3;
    }
    if ((param_1 - 0x41U < 0x1a) || (param_1 - 0xff41U < 0x1a)) {
      cVar2 = cVar1 + -0x37;
    }
    else {
      if (0x19 < param_1 - 0xff21U) {
        return (int)cVar2;
      }
      cVar2 = cVar1 + -0x17;
    }
  }
  iVar3 = (int)cVar2;
  if (param_2 <= cVar2) {
    iVar3 = -1;
  }
  return iVar3;
}



int u_forDigit_76_godot(uint param_1,char param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (((byte)(param_2 - 2U) < 0x23) && (param_1 < (uint)(int)param_2)) {
    iVar1 = param_1 + 0x57;
    if ((int)param_1 < 10) {
      iVar1 = param_1 + 0x30;
    }
  }
  return iVar1;
}



void u_getUnicodeVersion_76_godot(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x10;
  }
  return;
}



undefined2 u_getMainProperties_76_godot(uint param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar3 = (long)(int)uVar2;
  }
  else if (param_1 < 0x10000) {
    iVar1 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar1 = 0x140;
    }
    lVar3 = (long)(int)(uVar2 + iVar1);
  }
  else {
    lVar3 = 0x2618;
    if (0x10ffff < param_1) goto LAB_001016fd;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (propsTrie_index + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(propsTrie_index + lVar3 * 2) * 4) * 2;
LAB_001016fd:
  return *(undefined2 *)(propsTrie_index + lVar3);
}



undefined8 u_getUnicodeProperties_76_godot(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 3) {
    uVar1 = u_getUnicodeProperties_76_godot_part_0();
    return uVar1;
  }
  return 0;
}



undefined4 uprv_getMaxValues_76_godot(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0xd) {
    uVar1 = *(undefined4 *)(CSWTCH_298 + (ulong)param_1 * 4);
  }
  return uVar1;
}



void u_charAge_76_godot(undefined8 param_1,byte *param_2)

{
  byte extraout_var;
  
  if (param_2 != (byte *)0x0) {
    u_getUnicodeProperties_76_godot_part_0(param_1,0);
    param_2[1] = extraout_var & 3;
    *param_2 = extraout_var >> 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



uint uscript_getScript_76_godot(uint param_1,int *param_2)

{
  uint uVar1;
  
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if (param_1 < 0x110000) {
      uVar1 = u_getUnicodeProperties_76_godot_part_0(param_1,0);
      if ((uVar1 & 0xc00) == 0) {
        return uVar1 & 0x3ff;
      }
      if ((uVar1 & 0x800) == 0) {
        return 0;
      }
      if ((uVar1 & 0xfff) < 0xc00) {
        return 1;
      }
      return (uint)*(ushort *)(scriptExtensions + (ulong)(uVar1 & 0x3ff) * 2);
    }
    *param_2 = 1;
  }
  return 0xffffffff;
}



bool uscript_hasScript_76_godot(undefined8 param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ushort *puVar3;
  
  uVar2 = u_getUnicodeProperties_76_godot_part_0(param_1,0);
  if ((uVar2 & 0xc00) == 0) {
    return (uVar2 & 0x3ff) == param_2;
  }
  lVar1 = (ulong)(uVar2 & 0x3ff) * 2;
  if (0xbff < (uVar2 & 0xfff)) {
    lVar1 = (ulong)*(ushort *)(scriptExtensions + lVar1 + 2) * 2;
  }
  puVar3 = (ushort *)(scriptExtensions + lVar1);
  if (0x7fff < param_2) {
    return false;
  }
  for (; *puVar3 < param_2; puVar3 = puVar3 + 1) {
  }
  return (*puVar3 & 0x7fff) == param_2;
}



int uscript_getScriptExtensions_76_godot(undefined8 param_1,uint *param_2,int param_3,int *param_4)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    if ((-1 < param_3) && ((param_3 < 1 || (param_2 != (uint *)0x0)))) {
      uVar3 = u_getUnicodeProperties_76_godot_part_0(param_1,0);
      if ((uVar3 & 0xc00) == 0) {
        if (param_3 == 0) {
          *param_4 = 0xf;
        }
        else {
          *param_2 = uVar3 & 0x3ff;
        }
        iVar4 = 1;
      }
      else {
        lVar1 = (ulong)(uVar3 & 0x3ff) * 2;
        if (0xbff < (uVar3 & 0xfff)) {
          lVar1 = (ulong)*(ushort *)(scriptExtensions + lVar1 + 2) * 2;
        }
        lVar5 = 0;
        do {
          uVar2 = *(ushort *)(scriptExtensions + lVar5 * 2 + lVar1);
          iVar4 = (int)lVar5;
          if (iVar4 < param_3) {
            param_2[lVar5] = uVar2 & 0x7fff;
          }
          lVar5 = lVar5 + 1;
        } while (-1 < (short)uVar2);
        iVar4 = iVar4 + 1;
        if (param_3 < iVar4) {
          *param_4 = 0xf;
          return iVar4;
        }
      }
      return iVar4;
    }
    *param_4 = 1;
  }
  return 0;
}



void ublock_getCode_76_godot(uint param_1)

{
  if (param_1 < 0x110000) {
    param_1 = param_1 >> 4;
  }
  ucptrie_get_76_godot(block_trie,param_1);
  return;
}



void uchar_addPropertyStarts_76_godot(undefined8 *param_1,int *param_2)

{
  if (0 < *param_2) {
    return;
  }
  utrie2_enum_76_godot(propsTrie,0,_enumPropertyStartsRange,param_1);
  (*(code *)param_1[1])(*param_1,9);
  (*(code *)param_1[1])(*param_1,10);
  (*(code *)param_1[1])(*param_1,0xe);
  (*(code *)param_1[1])(*param_1,0x1c);
  (*(code *)param_1[1])(*param_1,0x20);
  (*(code *)param_1[1])(*param_1,0x85);
  (*(code *)param_1[1])(*param_1,0x86);
  (*(code *)param_1[1])(*param_1,0x7f);
  (*(code *)param_1[1])(*param_1,0x200a);
  (*(code *)param_1[1])(*param_1,0x2010);
  (*(code *)param_1[1])(*param_1,0x206a);
  (*(code *)param_1[1])(*param_1,0x2070);
  (*(code *)param_1[1])(*param_1,0xfeff);
  (*(code *)param_1[1])(*param_1,0xff00);
  (*(code *)param_1[1])(*param_1,0xa0);
  (*(code *)param_1[1])(*param_1,0xa1);
  (*(code *)param_1[1])(*param_1,0x2007);
  (*(code *)param_1[1])(*param_1,0x2008);
  (*(code *)param_1[1])(*param_1,0x202f);
  (*(code *)param_1[1])(*param_1,0x2030);
  (*(code *)param_1[1])(*param_1,0x61);
  (*(code *)param_1[1])(*param_1,0x7b);
  (*(code *)param_1[1])(*param_1,0x41);
  (*(code *)param_1[1])(*param_1,0x5b);
  (*(code *)param_1[1])(*param_1,0xff41);
  (*(code *)param_1[1])(*param_1,0xff5b);
  (*(code *)param_1[1])(*param_1,0xff21);
  (*(code *)param_1[1])(*param_1,0xff3b);
  (*(code *)param_1[1])(*param_1,0x67);
  (*(code *)param_1[1])(*param_1,0x47);
  (*(code *)param_1[1])(*param_1,0xff47);
  (*(code *)param_1[1])(*param_1,0xff27);
  (*(code *)param_1[1])(*param_1,0x2060);
  (*(code *)param_1[1])(*param_1,0xfff0);
  (*(code *)param_1[1])(*param_1,0xfffc);
  (*(code *)param_1[1])(*param_1,0xe0000);
  (*(code *)param_1[1])(*param_1,0xe1000);
  (*(code *)param_1[1])(*param_1,0x34f);
                    /* WARNING: Could not recover jumptable at 0x00101b9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[1])(*param_1,0x350);
  return;
}



void upropsvec_addPropertyStarts_76_godot(undefined8 param_1,int *param_2)

{
  if (0 < *param_2) {
    return;
  }
  utrie2_enum_76_godot(propsVectorsTrie,0,_enumPropertyStartsRange,param_1);
  return;
}



void ublock_addPropertyStarts_76_godot(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 uStack_40;
  undefined1 local_34 [4];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = 0;
  do {
    uVar1 = uStack_40;
    iVar2 = ucptrie_getRange_76_godot(block_trie,iVar3,0,0,0,0,local_34);
    if (iVar2 < 0) break;
    uStack_40 = 0x101c19;
    (*(code *)param_1[1])(*param_1,iVar3 << 4,uVar1);
    iVar3 = iVar2 + 1;
  } while (iVar2 + 1 < 0x11000);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


