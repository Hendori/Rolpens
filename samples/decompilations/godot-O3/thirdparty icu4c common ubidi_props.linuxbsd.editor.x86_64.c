
void ubidi_addPropertyStarts_76_godot(undefined8 *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  int local_3c;
  
  if (0 < *param_2) {
    return;
  }
  puVar4 = &ubidi_props_mirrors;
  utrie2_enum_76_godot(0x1077a8,0,0x100000,param_1);
  do {
    uVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    (*(code *)param_1[2])(*param_1,uVar2 & 0x1fffff,(uVar2 & 0x1fffff) + 1);
  } while (puVar4 != (uint *)ubidi_props_trieIndex);
  local_3c = 2;
  pcVar3 = "h";
  iVar6 = 0x8cb;
  iVar5 = 0x620;
  while( true ) {
    pcVar7 = pcVar3;
    cVar9 = '\0';
    do {
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      if (cVar1 != cVar9) {
        (*(code *)param_1[1])(*param_1,(int)pcVar7 + (iVar5 - (int)pcVar3));
      }
      pcVar7 = pcVar8;
      cVar9 = cVar1;
    } while (pcVar8 != pcVar3 + (uint)(iVar6 - iVar5));
    if (cVar1 != '\0') {
      (*(code *)param_1[1])(*param_1,iVar6);
    }
    iVar5 = 0x10ac0;
    iVar6 = 0x10ec5;
    pcVar3 = ":<<@@=";
    if (local_3c == 1) break;
    local_3c = 1;
  }
  return;
}



undefined4 ubidi_getMaxValue_76_godot(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 - 0x1000U < 0x16) {
    uVar1 = *(undefined4 *)(CSWTCH_73 + (ulong)(param_1 - 0x1000U) * 4);
  }
  return uVar1;
}



ushort ubidi_getClass_76_godot(uint param_1)

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
    lVar3 = 0x1da8;
    if (0x10ffff < param_1) goto LAB_0010017d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (ubidi_props_trieIndex + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(ubidi_props_trieIndex + lVar3 * 2) * 4) *
          2;
LAB_0010017d:
  return *(ushort *)(ubidi_props_trieIndex + lVar3) & 0x1f;
}



ushort ubidi_isMirrored_76_godot(uint param_1)

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
    lVar3 = 0x1da8;
    if (0x10ffff < param_1) goto LAB_0010021d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (ubidi_props_trieIndex + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(ubidi_props_trieIndex + lVar3 * 2) * 4) *
          2;
LAB_0010021d:
  return *(ushort *)(ubidi_props_trieIndex + lVar3) >> 0xc & 1;
}



uint ubidi_getMirror_76_godot(uint param_1)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar1 = (long)(int)uVar4;
  }
  else if (param_1 < 0x10000) {
    iVar2 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar2 = 0x140;
    }
    lVar1 = (long)(int)(uVar4 + iVar2);
  }
  else {
    if (0x10ffff < param_1) {
      return param_1;
    }
    lVar1 = (long)(int)((uint)*(ushort *)
                               (ubidi_props_trieIndex + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar4 & 0x3f));
  }
  puVar3 = &ubidi_props_mirrors;
  if (*(short *)(ubidi_props_trieIndex +
                (long)(int)((param_1 & 0x1f) +
                           (uint)*(ushort *)(ubidi_props_trieIndex + lVar1 * 2) * 4) * 2) >> 0xd !=
      -4) {
    return (int)(*(short *)(ubidi_props_trieIndex +
                           (long)(int)((param_1 & 0x1f) +
                                      (uint)*(ushort *)(ubidi_props_trieIndex + lVar1 * 2) * 4) * 2)
                >> 0xd) + param_1;
  }
  do {
    uVar4 = *puVar3 & 0x1fffff;
    if (param_1 == uVar4) {
      return (&ubidi_props_mirrors)[*puVar3 >> 0x15] & 0x1fffff;
    }
  } while (((int)uVar4 <= (int)param_1) &&
          (puVar3 = puVar3 + 1, puVar3 != (uint *)ubidi_props_trieIndex));
  return param_1;
}



ushort ubidi_isBidiControl_76_godot(uint param_1)

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
    lVar3 = 0x1da8;
    if (0x10ffff < param_1) goto LAB_001003cd;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (ubidi_props_trieIndex + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(ubidi_props_trieIndex + lVar3 * 2) * 4) *
          2;
LAB_001003cd:
  return *(ushort *)(ubidi_props_trieIndex + lVar3) >> 0xb & 1;
}



ushort ubidi_isJoinControl_76_godot(uint param_1)

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
    lVar3 = 0x1da8;
    if (0x10ffff < param_1) goto LAB_0010047d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (ubidi_props_trieIndex + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(ubidi_props_trieIndex + lVar3 * 2) * 4) *
          2;
LAB_0010047d:
  return *(ushort *)(ubidi_props_trieIndex + lVar3) >> 10 & 1;
}



ushort ubidi_getJoiningType_76_godot(uint param_1)

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
    lVar3 = 0x1da8;
    if (0x10ffff < param_1) goto LAB_0010052d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (ubidi_props_trieIndex + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(ubidi_props_trieIndex + lVar3 * 2) * 4) *
          2;
LAB_0010052d:
  return *(ushort *)(ubidi_props_trieIndex + lVar3) >> 5 & 7;
}



char ubidi_getJoiningGroup_76_godot(int param_1)

{
  if (param_1 - 0x620U < 0x2ab) {
    return (&ubidi_props_jgArray)[(int)(param_1 - 0x620U)];
  }
  if (0x404 < param_1 - 0x10ac0U) {
    return '\0';
  }
  return ":<<@@="[(int)(param_1 - 0x10ac0U)];
}



ushort ubidi_getPairedBracketType_76_godot(uint param_1)

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
    lVar3 = 0x1da8;
    if (0x10ffff < param_1) goto LAB_0010062d;
    lVar3 = (long)(int)((uint)*(ushort *)
                               (ubidi_props_trieIndex + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar2 & 0x3f));
  }
  lVar3 = (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(ubidi_props_trieIndex + lVar3 * 2) * 4) *
          2;
LAB_0010062d:
  return *(ushort *)(ubidi_props_trieIndex + lVar3) >> 8 & 3;
}



uint ubidi_getPairedBracket_76_godot(uint param_1)

{
  short sVar1;
  long lVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (int)param_1 >> 5;
  if (param_1 < 0xd800) {
    lVar2 = (long)(int)uVar5;
  }
  else if (param_1 < 0x10000) {
    iVar4 = 0;
    if ((int)param_1 < 0xdc00) {
      iVar4 = 0x140;
    }
    lVar2 = (long)(int)(uVar5 + iVar4);
  }
  else {
    if (0x10ffff < param_1) {
      return param_1;
    }
    lVar2 = (long)(int)((uint)*(ushort *)
                               (ubidi_props_trieIndex + (long)(((int)param_1 >> 0xb) + 0x820) * 2) +
                       (uVar5 & 0x3f));
  }
  if ((*(ushort *)
        (ubidi_props_trieIndex +
        (long)(int)((param_1 & 0x1f) + (uint)*(ushort *)(ubidi_props_trieIndex + lVar2 * 2) * 4) * 2
        ) & 0x300) != 0) {
    sVar1 = (short)*(ushort *)
                    (ubidi_props_trieIndex +
                    (long)(int)((param_1 & 0x1f) +
                               (uint)*(ushort *)(ubidi_props_trieIndex + lVar2 * 2) * 4) * 2) >> 0xd
    ;
    if (sVar1 != -4) {
      return param_1 + (int)sVar1;
    }
    puVar3 = &ubidi_props_mirrors;
    while( true ) {
      uVar5 = *puVar3 & 0x1fffff;
      if (param_1 == uVar5) break;
      if ((int)param_1 < (int)uVar5) {
        return param_1;
      }
      puVar3 = puVar3 + 1;
      if (puVar3 == (uint *)ubidi_props_trieIndex) {
        return param_1;
      }
    }
    param_1 = (&ubidi_props_mirrors)[*puVar3 >> 0x15] & 0x1fffff;
  }
  return param_1;
}



void u_charDirection_76_godot(void)

{
  ubidi_getClass_76_godot();
  return;
}



void u_isMirrored_76_godot(void)

{
  ubidi_isMirrored_76_godot();
  return;
}



void u_charMirror_76_godot(void)

{
  ubidi_getMirror_76_godot();
  return;
}



void u_getBidiPairedBracket_76_godot(void)

{
  ubidi_getPairedBracket_76_godot();
  return;
}


