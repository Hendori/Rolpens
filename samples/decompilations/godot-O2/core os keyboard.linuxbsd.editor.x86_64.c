
/* keycode_has_unicode(Key) */

bool keycode_has_unicode(int param_1)

{
  if (0x40003e < param_1) {
    return 0x31 < param_1 - 0x400042U ||
           (0x3fffffffc1fcbU >> ((ulong)(param_1 - 0x400042U) & 0x3f) & 1) == 0;
  }
  return param_1 < 0x400001;
}



/* keycode_get_string(Key) */

String * keycode_get_string(String *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int *piVar4;
  uint *puVar5;
  String *pSVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  if ((param_2 & 0x2000000) != 0) {
    piVar4 = &_keycodes;
    pcVar7 = "Escape";
    do {
      if (*piVar4 == 0x400015) goto LAB_001000b1;
      pcVar7 = *(char **)(piVar4 + 6);
      piVar4 = piVar4 + 4;
    } while (pcVar7 != (char *)0x0);
    pcVar7 = "";
LAB_001000b1:
    String::operator+=(param_1,pcVar7);
    String::operator+=(param_1,"+");
  }
  if ((param_2 & 0x4000000) != 0) {
    pcVar7 = "Escape";
    piVar4 = &_keycodes;
    do {
      if (*piVar4 == 0x400018) goto LAB_001000f9;
      pcVar7 = *(char **)(piVar4 + 6);
      piVar4 = piVar4 + 4;
    } while (pcVar7 != (char *)0x0);
    pcVar7 = "";
LAB_001000f9:
    String::operator+=(param_1,pcVar7);
    String::operator+=(param_1,"+");
  }
  if ((param_2 & 0x1000000) == 0) goto LAB_0010011c;
  pSVar6 = (String *)OS::get_singleton();
  local_60 = 0;
  local_48 = "macos";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_60);
  cVar3 = OS::has_feature(pSVar6);
  lVar2 = local_60;
  if (cVar3 == '\0') {
    pSVar6 = (String *)OS::get_singleton();
    local_58 = 0;
    local_40 = 9;
    local_48 = "web_macos";
    String::parse_latin1((StrRange *)&local_58);
    cVar3 = OS::has_feature(pSVar6);
    if (cVar3 == '\0') {
      pSVar6 = (String *)OS::get_singleton();
      local_50 = 0;
      local_40 = 7;
      local_48 = "web_ios";
      String::parse_latin1((StrRange *)&local_50);
      cVar3 = OS::has_feature(pSVar6);
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (local_58 != 0) goto LAB_001003d2;
LAB_001003da:
      if (local_60 != 0) goto LAB_001003e4;
    }
    else {
      if (local_58 != 0) {
LAB_001003d2:
        lVar2 = local_58;
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
        goto LAB_001003da;
      }
      if (local_60 == 0) goto LAB_001002d9;
LAB_001003e4:
      lVar2 = local_60;
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (cVar3 != '\0') goto LAB_001002d9;
    pcVar7 = "Escape";
    piVar4 = &_keycodes;
    do {
      if (*piVar4 == 0x400016) goto LAB_00100305;
      pcVar7 = *(char **)(piVar4 + 6);
      piVar4 = piVar4 + 4;
    } while (pcVar7 != (char *)0x0);
  }
  else {
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
LAB_001002d9:
    pcVar7 = "Escape";
    piVar4 = &_keycodes;
    do {
      if (*piVar4 == 0x400017) goto LAB_00100305;
      pcVar7 = *(char **)(piVar4 + 6);
      piVar4 = piVar4 + 4;
    } while (pcVar7 != (char *)0x0);
  }
  pcVar7 = "";
LAB_00100305:
  String::operator+=(param_1,pcVar7);
  String::operator+=(param_1,"+");
LAB_0010011c:
  if ((param_2 & 0x10000000) != 0) {
    pcVar7 = "Escape";
    piVar4 = &_keycodes;
    do {
      if (*piVar4 == 0x400016) goto LAB_00100151;
      pcVar7 = *(char **)(piVar4 + 6);
      piVar4 = piVar4 + 4;
    } while (pcVar7 != (char *)0x0);
    pcVar7 = "";
LAB_00100151:
    String::operator+=(param_1,pcVar7);
    String::operator+=(param_1,"+");
  }
  if ((param_2 & 0x8000000) != 0) {
    pcVar7 = "Escape";
    piVar4 = &_keycodes;
    do {
      if (*piVar4 == 0x400017) goto LAB_00100199;
      pcVar7 = *(char **)(piVar4 + 6);
      piVar4 = piVar4 + 4;
    } while (pcVar7 != (char *)0x0);
    pcVar7 = "";
LAB_00100199:
    String::operator+=(param_1,pcVar7);
    String::operator+=(param_1,"+");
  }
  puVar5 = &_keycodes;
  pcVar7 = "Escape";
  do {
    if (*puVar5 == (param_2 & 0x7fffff)) {
      String::operator+=(param_1,pcVar7);
      goto LAB_001001e9;
    }
    pcVar7 = *(char **)(puVar5 + 6);
    puVar5 = puVar5 + 4;
  } while (pcVar7 != (char *)0x0);
  String::chr((wchar32)(String *)&local_48);
  String::operator+=(param_1,(String *)&local_48);
  pcVar7 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar7 + -0x10,false);
    }
  }
LAB_001001e9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* find_keycode(String const&) */

uint find_keycode(String *param_1)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  char cVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  long in_FS_OFFSET;
  long local_70;
  char local_68 [8];
  long *local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_68,SUB81(param_1,0),0x100b05);
  if (local_60 == (long *)0x0) {
    uVar11 = 0;
  }
  else if (local_60[-1] < 1) {
    uVar11 = 0;
LAB_001007d5:
    plVar5 = local_60;
    LOCK();
    plVar8 = local_60 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_60 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar13 = local_60[-1];
      lVar9 = 0;
      local_60 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar13 != 0) {
        do {
          if (*plVar8 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *plVar8;
              *plVar8 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar13 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  else {
    pSVar2 = (String *)(local_60 + local_60[-1] + -1);
    puVar12 = &_keycodes;
    pcVar10 = "Escape";
    do {
      local_70 = 0;
      local_50 = strlen(pcVar10);
      local_58 = pcVar10;
      String::parse_latin1((StrRange *)&local_70);
      cVar6 = String::nocasecmp_to(pSVar2);
      lVar13 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar8 = (long *)(local_70 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      if (cVar6 == '\0') {
        uVar11 = *puVar12;
        goto LAB_001005f8;
      }
      pcVar10 = *(char **)(puVar12 + 6);
      puVar12 = puVar12 + 4;
    } while (pcVar10 != (char *)0x0);
    uVar11 = 0;
LAB_001005f8:
    if (local_60 != (long *)0x0) {
      lVar13 = 0;
      do {
        if (local_60[-1] + -1 <= lVar13) {
          if (local_60 != (long *)0x0) goto LAB_001007d5;
          break;
        }
        pSVar2 = (String *)(local_60 + lVar13);
        pcVar10 = "Escape";
        piVar7 = &_keycodes;
        do {
          if (*piVar7 == 0x400015) goto LAB_00100651;
          pcVar10 = *(char **)(piVar7 + 6);
          piVar7 = piVar7 + 4;
        } while (pcVar10 != (char *)0x0);
        pcVar10 = "";
LAB_00100651:
        local_70 = 0;
        local_50 = strlen(pcVar10);
        local_58 = pcVar10;
        String::parse_latin1((StrRange *)&local_70);
        cVar6 = String::nocasecmp_to(pSVar2);
        lVar9 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar8 = (long *)(local_70 + -0x10);
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        if (cVar6 == '\0') {
          uVar11 = uVar11 | 0x2000000;
        }
        else {
          pcVar10 = "Escape";
          piVar7 = &_keycodes;
          do {
            if (*piVar7 == 0x400016) goto LAB_00100739;
            pcVar10 = *(char **)(piVar7 + 6);
            piVar7 = piVar7 + 4;
          } while (pcVar10 != (char *)0x0);
          pcVar10 = "";
LAB_00100739:
          local_70 = 0;
          local_50 = strlen(pcVar10);
          local_58 = pcVar10;
          String::parse_latin1((StrRange *)&local_70);
          cVar6 = String::nocasecmp_to(pSVar2);
          lVar9 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar8 = (long *)(local_70 + -0x10);
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar9 + -0x10),false);
            }
          }
          if (cVar6 == '\0') {
            uVar11 = uVar11 | 0x10000000;
          }
          else {
            pcVar10 = "Escape";
            piVar7 = &_keycodes;
            do {
              if (*piVar7 == 0x400017) goto LAB_00100881;
              pcVar10 = *(char **)(piVar7 + 6);
              piVar7 = piVar7 + 4;
            } while (pcVar10 != (char *)0x0);
            pcVar10 = "";
LAB_00100881:
            local_70 = 0;
            local_50 = strlen(pcVar10);
            local_58 = pcVar10;
            String::parse_latin1((StrRange *)&local_70);
            cVar6 = String::nocasecmp_to(pSVar2);
            lVar9 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar8 = (long *)(local_70 + -0x10);
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (*plVar8 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            if (cVar6 == '\0') {
              uVar11 = uVar11 | 0x8000000;
            }
            else {
              pcVar10 = "Escape";
              piVar7 = &_keycodes;
              do {
                if (*piVar7 == 0x400018) goto LAB_00100941;
                pcVar10 = *(char **)(piVar7 + 6);
                piVar7 = piVar7 + 4;
              } while (pcVar10 != (char *)0x0);
              pcVar10 = "";
LAB_00100941:
              local_70 = 0;
              local_50 = strlen(pcVar10);
              local_58 = pcVar10;
              String::parse_latin1((StrRange *)&local_70);
              cVar6 = String::nocasecmp_to(pSVar2);
              lVar9 = local_70;
              if (local_70 != 0) {
                LOCK();
                plVar8 = (long *)(local_70 + -0x10);
                *plVar8 = *plVar8 + -1;
                UNLOCK();
                if (*plVar8 == 0) {
                  local_70 = 0;
                  Memory::free_static((void *)(lVar9 + -0x10),false);
                }
              }
              if (cVar6 == '\0') {
                uVar11 = uVar11 | 0x4000000;
              }
            }
          }
        }
        lVar13 = lVar13 + 1;
      } while (local_60 != (long *)0x0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* find_keycode_name(Key) */

char * find_keycode_name(int param_1)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = &_keycodes;
  pcVar2 = "Escape";
  do {
    if (*piVar1 == param_1) {
      return pcVar2;
    }
    pcVar2 = *(char **)(piVar1 + 6);
    piVar1 = piVar1 + 4;
  } while (pcVar2 != (char *)0x0);
  return "";
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* keycode_get_count() */

int keycode_get_count(void)

{
  long *plVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &_keycodes;
  do {
    iVar3 = iVar3 + 1;
    plVar1 = (long *)(puVar2 + 6);
    puVar2 = puVar2 + 4;
  } while (*plVar1 != 0);
  return iVar3;
}



/* keycode_get_value_by_index(int) */

undefined4 keycode_get_value_by_index(int param_1)

{
  return (&_keycodes)[(long)param_1 * 4];
}



/* keycode_get_name_by_index(int) */

undefined * keycode_get_name_by_index(int param_1)

{
  return (&PTR__LC0_00100fa8)[(long)param_1 * 2];
}



/* fix_unicode(char32_t) */

wchar32 fix_unicode(wchar32 param_1)

{
  if ((0x1f < (uint)param_1) && (param_1 != L'\x7f')) {
    return param_1;
  }
  return L'\0';
}



/* fix_keycode(char32_t, Key) */

ulong fix_keycode(wchar32 param_1,uint param_2)

{
  ulong uVar1;
  
  if (0x5e < (uint)(param_1 + L'\xffffffe0')) {
    return (ulong)param_2;
  }
  uVar1 = String::char_uppercase(param_1);
  return uVar1;
}



/* fix_key_label(char32_t, Key) */

ulong fix_key_label(wchar32 param_1,uint param_2)

{
  ulong uVar1;
  
  if ((0x1f < (uint)param_1) && (param_1 != L'\x7f')) {
    uVar1 = String::char_uppercase(param_1);
    return uVar1;
  }
  return (ulong)param_2;
}



/* find_keycode(String const&) [clone .cold] */

void find_keycode(String *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


