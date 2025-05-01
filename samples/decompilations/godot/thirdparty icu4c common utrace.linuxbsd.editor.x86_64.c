
/* outputChar(char, char*, int*, int, int) */

void outputChar(char param_1,char *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  if (iVar2 == 0) {
    iVar1 = 0;
    if (0 < param_5) goto LAB_00100017;
  }
  else {
    if (param_1 == '\n') {
      if (iVar2 < param_4) {
        param_2[iVar2] = '\n';
        iVar2 = *param_3;
        goto LAB_00100054;
      }
      if (param_5 < 1) goto LAB_00100054;
    }
    else {
      if (param_1 == '\0') {
        if (param_4 <= iVar2) {
          return;
        }
        param_2[iVar2] = '\0';
        return;
      }
      if (param_4 <= iVar2) goto LAB_00100054;
      if (param_2[(long)iVar2 + -1] != '\n') {
        param_2[iVar2] = param_1;
        iVar2 = *param_3;
        goto LAB_00100054;
      }
      if (param_5 < 1) {
        param_2[iVar2] = param_1;
        iVar2 = *param_3;
        goto LAB_00100054;
      }
    }
LAB_00100017:
    iVar3 = 0;
    iVar1 = iVar2;
    do {
      if (iVar1 < param_4) {
        param_2[iVar1] = ' ';
        iVar1 = *param_3;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 1;
      *param_3 = iVar1;
    } while (iVar3 < param_5);
  }
  if (iVar1 < param_4) {
    param_2[iVar1] = param_1;
  }
  if (param_1 == '\0') {
    return;
  }
  iVar2 = *param_3;
LAB_00100054:
  *param_3 = iVar2 + 1;
  return;
}



/* outputUString(char16_t const*, int, char*, int*, int, int) */

void outputUString(wchar16 *param_1,int param_2,char *param_3,int *param_4,int param_5,int param_6)

{
  char cVar1;
  wchar16 wVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  bool bVar9;
  
  uVar5 = (ulong)(uint)param_6;
  if (param_1 == (wchar16 *)0x0) {
    pcVar6 = "*NULL*";
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      outputChar(cVar1,param_3,param_4,param_5,(int)uVar5);
    } while (cVar1 != '\0');
  }
  else {
    bVar9 = param_2 == -1;
    if ((0 < param_2) || (bVar9)) {
      lVar7 = 1;
      do {
        iVar8 = 0xc;
        wVar2 = param_1[lVar7 + -1];
        uVar5 = (ulong)(ushort)wVar2;
        do {
          bVar3 = (byte)iVar8;
          iVar8 = iVar8 + -4;
          iVar4 = param_5;
          outputChar("0123456789abcdef"[(uint)((long)uVar5 >> (bVar3 & 0x3f)) & 0xf],param_3,param_4
                     ,param_5,0);
        } while (iVar8 != -4);
        outputChar(' ',param_3,param_4,iVar4,param_6);
      } while (((wVar2 != L'\0') || (!bVar9)) &&
              (iVar8 = (int)lVar7, lVar7 = lVar7 + 1, iVar8 < param_2 || bVar9));
    }
  }
  return;
}



void utrace_entry_76_godot(undefined4 param_1)

{
  if (pTraceEntryFunc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001001f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pTraceEntryFunc)(gTraceContext,param_1);
    return;
  }
  return;
}



void utrace_exit_76_godot
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  char *pcVar1;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  if (pTraceExitFunc != (code *)0x0) {
    switch(param_10) {
    case 0:
      pcVar1 = "Returns.";
      break;
    case 1:
      pcVar1 = "Returns %d.";
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    case 0x10:
      pcVar1 = "Returns.  Status = %d.";
      break;
    case 0x11:
      pcVar1 = "Returns %d.  Status = %d.";
      break;
    case 0x12:
      pcVar1 = "Returns %d.  Status = %p.";
    }
    local_d0 = &stack0x00000008;
    local_d8 = 0x10;
    local_c8 = local_b8;
    local_d4 = 0x30;
    (*pTraceExitFunc)(gTraceContext,param_9,pcVar1,&local_d8);
  }
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void utrace_data_76_godot
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  if (pTraceDataFunc != (code *)0x0) {
    local_d0 = &stack0x00000008;
    local_d8 = 0x18;
    local_c8 = local_b8;
    local_d4 = 0x30;
    (*pTraceDataFunc)(gTraceContext,param_9,param_10,param_11,&local_d8);
  }
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00100e46) */
/* WARNING: Removing unreachable block (ram,0x00100ad0) */
/* WARNING: Removing unreachable block (ram,0x00100af8) */

ulong utrace_vformat_76_godot(char *param_1,int param_2,uint param_3,long param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  byte *pbVar12;
  byte bVar13;
  wchar16 *pwVar14;
  long lVar15;
  char *pcVar16;
  char cVar17;
  byte *pbVar18;
  ulong uVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  long local_a8;
  undefined4 local_4c;
  undefined8 local_48;
  long local_40;
  
  uVar5 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  local_a8 = 0;
  iVar4 = 0;
LAB_0010045c:
  while( true ) {
    while( true ) {
      iVar20 = iVar4 + 1;
      cVar17 = *(char *)(param_4 + iVar4);
      iVar11 = (int)uVar5;
      if (cVar17 == '%') break;
      iVar6 = param_2;
      iVar4 = iVar20;
      outputChar(cVar17,param_1,&local_4c,param_2,iVar11);
      if (cVar17 == '\0') {
        outputChar('\0',param_1,&local_4c,iVar6,iVar11);
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return (ulong)(local_4c + 1);
      }
    }
    iVar6 = iVar4 + 2;
    cVar17 = *(char *)(param_4 + iVar20);
    if (cVar17 != '\0') break;
    iVar4 = iVar20;
    outputChar('%',param_1,&local_4c,param_2,iVar11);
  }
  switch(cVar17) {
  case 'S':
    uVar2 = *param_5;
    if (uVar2 < 0x30) {
      uVar1 = uVar2 + 8;
      *param_5 = uVar1;
      pwVar14 = *(wchar16 **)(*(long *)(param_5 + 4) + (ulong)uVar2);
      if (0x2f < uVar1) {
        piVar8 = *(int **)(param_5 + 2);
        goto LAB_00100a97;
      }
      piVar8 = (int *)(*(long *)(param_5 + 4) + (ulong)uVar1);
      *param_5 = uVar2 + 0x10;
    }
    else {
      puVar9 = *(undefined8 **)(param_5 + 2);
      piVar8 = (int *)(puVar9 + 1);
      *(int **)(param_5 + 2) = piVar8;
      pwVar14 = (wchar16 *)*puVar9;
LAB_00100a97:
      *(int **)(param_5 + 2) = piVar8 + 2;
    }
    outputUString(pwVar14,*piVar8,param_1,&local_4c,param_2,iVar11);
    iVar4 = iVar6;
    goto LAB_0010045c;
  default:
    break;
  case 'b':
    uVar2 = *param_5;
    if (uVar2 < 0x30) {
      puVar7 = (uint *)((ulong)uVar2 + *(long *)(param_5 + 4));
      *param_5 = uVar2 + 8;
    }
    else {
      puVar7 = *(uint **)(param_5 + 2);
      *(uint **)(param_5 + 2) = puVar7 + 2;
    }
    iVar20 = 0;
    uVar19 = (ulong)(*puVar7 & 0xf);
    iVar4 = param_2;
    outputChar("0123456789abcdef"[*puVar7 >> 4 & 0xf],param_1,&local_4c,param_2,0);
    outputChar("0123456789abcdef"[uVar19],param_1,&local_4c,iVar4,iVar20);
    iVar4 = iVar6;
    goto LAB_0010045c;
  case 'c':
    uVar2 = *param_5;
    if (uVar2 < 0x30) {
      pcVar16 = (char *)((ulong)uVar2 + *(long *)(param_5 + 4));
      *param_5 = uVar2 + 8;
    }
    else {
      pcVar16 = *(char **)(param_5 + 2);
      *(char **)(param_5 + 2) = pcVar16 + 8;
    }
    cVar17 = *pcVar16;
    break;
  case 'd':
    uVar2 = *param_5;
    if (uVar2 < 0x30) {
      piVar8 = (int *)((ulong)uVar2 + *(long *)(param_5 + 4));
      *param_5 = uVar2 + 8;
    }
    else {
      piVar8 = *(int **)(param_5 + 2);
      *(int **)(param_5 + 2) = piVar8 + 2;
    }
    lVar15 = (long)*piVar8;
    uVar19 = 0x1c;
    do {
      bVar13 = (byte)uVar19;
      uVar19 = (ulong)((int)uVar19 - 4);
      outputChar("0123456789abcdef"[(uint)(lVar15 >> (bVar13 & 0x3f)) & 0xf],param_1,&local_4c,
                 param_2,0);
      iVar4 = iVar6;
    } while ((int)uVar19 != -4);
    goto LAB_0010045c;
  case 'h':
    uVar2 = *param_5;
    if (uVar2 < 0x30) {
      piVar8 = (int *)((ulong)uVar2 + *(long *)(param_5 + 4));
      *param_5 = uVar2 + 8;
    }
    else {
      piVar8 = *(int **)(param_5 + 2);
      *(int **)(param_5 + 2) = piVar8 + 2;
    }
    lVar15 = (long)*piVar8;
    uVar19 = 0xc;
    do {
      bVar13 = (byte)uVar19;
      uVar19 = (ulong)((int)uVar19 - 4);
      outputChar("0123456789abcdef"[(uint)(lVar15 >> (bVar13 & 0x3f)) & 0xf],param_1,&local_4c,
                 param_2,0);
      iVar4 = iVar6;
    } while ((int)uVar19 != -4);
    goto LAB_0010045c;
  case 'l':
    uVar2 = *param_5;
    if (uVar2 < 0x30) {
      plVar10 = (long *)((ulong)uVar2 + *(long *)(param_5 + 4));
      *param_5 = uVar2 + 8;
    }
    else {
      plVar10 = *(long **)(param_5 + 2);
      *(long **)(param_5 + 2) = plVar10 + 1;
    }
    local_a8 = *plVar10;
    uVar19 = 0x3c;
    lVar15 = local_a8;
    do {
      bVar13 = (byte)uVar19;
      uVar19 = (ulong)((int)uVar19 - 4);
      outputChar("0123456789abcdef"[(uint)(lVar15 >> (bVar13 & 0x3f)) & 0xf],param_1,&local_4c,
                 param_2,0);
      iVar4 = iVar6;
    } while ((int)uVar19 != -4);
    goto LAB_0010045c;
  case 'p':
    uVar2 = *param_5;
    if (uVar2 < 0x30) {
      puVar9 = (undefined8 *)((ulong)uVar2 + *(long *)(param_5 + 4));
      *param_5 = uVar2 + 8;
    }
    else {
      puVar9 = *(undefined8 **)(param_5 + 2);
      *(undefined8 **)(param_5 + 2) = puVar9 + 1;
    }
    local_48 = *puVar9;
    pbVar12 = (byte *)((long)&local_48 + 7);
    pbVar18 = (byte *)((long)&local_4c + 3);
    do {
      bVar13 = *pbVar12;
      iVar20 = 0;
      pbVar12 = pbVar12 + -1;
      uVar19 = (ulong)(bVar13 & 0xf);
      iVar4 = param_2;
      outputChar("0123456789abcdef"[bVar13 >> 4],param_1,&local_4c,param_2,0);
      outputChar("0123456789abcdef"[uVar19],param_1,&local_4c,iVar4,iVar20);
      iVar4 = iVar6;
    } while (pbVar12 != pbVar18);
    goto LAB_0010045c;
  case 's':
    goto switchD_001004fc_caseD_73;
  case 'v':
    cVar17 = *(char *)(param_4 + iVar6);
    if (cVar17 != '\0') {
      iVar6 = iVar4 + 3;
    }
    uVar2 = *param_5;
    if (uVar2 < 0x30) {
      uVar1 = uVar2 + 8;
      *param_5 = uVar1;
      lVar15 = *(long *)(*(long *)(param_5 + 4) + (ulong)uVar2);
      if (0x2f < uVar1) {
        plVar10 = *(long **)(param_5 + 2);
        goto LAB_001009d7;
      }
      plVar10 = (long *)(*(long *)(param_5 + 4) + (ulong)uVar1);
      *param_5 = uVar2 + 0x10;
    }
    else {
      plVar3 = *(long **)(param_5 + 2);
      plVar10 = plVar3 + 1;
      *(long **)(param_5 + 2) = plVar10;
      lVar15 = *plVar3;
LAB_001009d7:
      *(long **)(param_5 + 2) = plVar10 + 1;
    }
    iVar4 = (int)*plVar10;
    if (lVar15 == 0) {
      pcVar16 = "*NULL* ";
      do {
        cVar17 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        outputChar(cVar17,param_1,&local_4c,param_2,(int)uVar5);
      } while (cVar17 != '\0');
      uVar5 = uVar5 & 0xffffffff;
    }
    else {
      bVar21 = iVar4 == -1;
      if ((0 < iVar4) || (bVar21)) {
        bVar13 = cVar17 + 0xad;
        iVar20 = 0;
        do {
          if (bVar13 < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x00100903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (*(code *)(&DAT_001012fc + *(int *)(&DAT_001012fc + (ulong)bVar13 * 4)))();
            return uVar5;
          }
          if ((local_a8 == 0) && (bVar21)) {
            local_a8 = 0;
            break;
          }
          iVar20 = iVar20 + 1;
        } while ((iVar20 < iVar4) || (bVar21));
      }
    }
    uVar19 = 0x1c;
    outputChar('[',param_1,&local_4c,param_2,(int)uVar5);
    lVar15 = (long)iVar4;
    do {
      bVar13 = (byte)uVar19;
      uVar19 = (ulong)((int)uVar19 - 4);
      iVar4 = param_2;
      outputChar("0123456789abcdef"[(uint)(lVar15 >> (bVar13 & 0x3f)) & 0xf],param_1,&local_4c,
                 param_2,0);
    } while ((int)uVar19 != -4);
    outputChar(']',param_1,&local_4c,iVar4,(int)uVar5);
    iVar4 = iVar6;
    goto LAB_0010045c;
  }
  outputChar(cVar17,param_1,&local_4c,param_2,iVar11);
  iVar4 = iVar6;
  goto LAB_0010045c;
switchD_001004fc_caseD_73:
  uVar2 = *param_5;
  if (uVar2 < 0x30) {
    puVar9 = (undefined8 *)((ulong)uVar2 + *(long *)(param_5 + 4));
    *param_5 = uVar2 + 8;
  }
  else {
    puVar9 = *(undefined8 **)(param_5 + 2);
    *(undefined8 **)(param_5 + 2) = puVar9 + 1;
  }
  pcVar16 = (char *)*puVar9;
  if (pcVar16 == (char *)0x0) {
    pcVar16 = "*NULL*";
  }
  do {
    cVar17 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    outputChar(cVar17,param_1,&local_4c,param_2,(int)uVar5);
  } while (cVar17 != '\0');
  uVar5 = uVar5 & 0xffffffff;
  iVar4 = iVar6;
  goto LAB_0010045c;
}



void utrace_format_76_godot(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  utrace_vformat_76_godot();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void utrace_setFunctions_76_godot
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  pTraceEntryFunc = param_2;
  pTraceExitFunc = param_3;
  pTraceDataFunc = param_4;
  gTraceContext = param_1;
  return;
}



void utrace_getFunctions_76_godot
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_2 = pTraceEntryFunc;
  *param_3 = pTraceExitFunc;
  *param_4 = pTraceDataFunc;
  *param_1 = gTraceContext;
  return;
}



void utrace_setLevel_76_godot(int param_1)

{
  if (9 < param_1) {
    param_1 = 9;
  }
  if (param_1 < 0) {
    param_1 = -1;
  }
  utrace_level = param_1;
  return;
}



undefined4 utrace_getLevel_76_godot(void)

{
  return utrace_level;
}



undefined8 utrace_cleanup_76_godot(void)

{
  pTraceEntryFunc = 0;
  pTraceExitFunc = 0;
  pTraceDataFunc = 0;
  utrace_level = 0xffffffff;
  gTraceContext = 0;
  return 1;
}



char * utrace_functionName_76_godot(uint param_1)

{
  char *pcVar1;
  
  if (param_1 < 2) {
    return *(char **)(trFnName + (long)(int)param_1 * 8);
  }
  if (7 < param_1 - 0x1000) {
    if (8 < param_1 - 0x2000) {
      pcVar1 = "[BOGUS Trace Function Number]";
      if (param_1 - 0x3000 < 4) {
        pcVar1 = *(char **)(trResDataNames + (long)(int)(param_1 - 0x3000) * 8);
      }
      return pcVar1;
    }
    return *(char **)(trCollNames + (long)(int)(param_1 - 0x2000) * 8);
  }
  return *(char **)(trConvNames + (long)(int)(param_1 - 0x1000) * 8);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void utrace_exit_76_godot_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


