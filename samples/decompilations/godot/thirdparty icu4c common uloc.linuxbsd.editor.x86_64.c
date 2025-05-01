
void uloc_kw_resetKeywords(long param_1)

{
  (*(undefined8 **)(param_1 + 8))[1] = **(undefined8 **)(param_1 + 8);
  return;
}



void uloc_kw_closeKeywords(long param_1)

{
  uprv_free_76_godot(**(undefined8 **)(param_1 + 8));
  uprv_free_76_godot(*(undefined8 *)(param_1 + 8));
  uprv_free_76_godot(param_1);
  return;
}



/* (anonymous namespace)::getShortestSubtagLength(char const*) */

ulong (anonymous_namespace)::getShortestSubtagLength(char *param_1)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  
  sVar5 = strlen(param_1);
  uVar7 = sVar5 & 0xffffffff;
  if (0 < (int)sVar5) {
    bVar3 = true;
    pcVar1 = param_1 + (ulong)((int)sVar5 - 1) + 1;
    uVar6 = 0;
    do {
      while( true ) {
        iVar4 = (int)uVar6;
        if ((*param_1 != '_') && (*param_1 != '-')) break;
        bVar2 = iVar4 < (int)uVar7;
        bVar3 = iVar4 != 0 && bVar2;
        if (iVar4 == 0 || !bVar2) {
          bVar3 = true;
          goto LAB_0010007b;
        }
        param_1 = param_1 + 1;
        uVar7 = uVar6;
        if (pcVar1 == param_1) {
          return uVar6;
        }
      }
      uVar6 = (ulong)(iVar4 + 1);
      if (bVar3) {
        uVar6 = 1;
      }
      bVar3 = false;
LAB_0010007b:
      param_1 = param_1 + 1;
    } while (pcVar1 != param_1);
  }
  return uVar7;
}



char * uloc_kw_nextKeyword(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *__s;
  
  lVar1 = *(long *)(param_1 + 8);
  __s = *(char **)(lVar1 + 8);
  if (*__s == '\0') {
    iVar2 = 0;
    __s = (char *)0x0;
  }
  else {
    sVar3 = strlen(__s);
    iVar2 = (int)sVar3;
    *(char **)(lVar1 + 8) = __s + (long)iVar2 + 1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  return __s;
}



int uloc_kw_countKeywords(long param_1)

{
  char cVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  
  iVar3 = 0;
  __s = (char *)**(undefined8 **)(param_1 + 8);
  cVar1 = *__s;
  while (cVar1 != '\0') {
    iVar3 = iVar3 + 1;
    sVar2 = strlen(__s);
    __s = __s + sVar2 + 1;
    cVar1 = *__s;
  }
  return iVar3;
}



/* (anonymous namespace)::compareKeywordStructs(void const*, void const*, void const*) */

void (anonymous_namespace)::compareKeywordStructs(void *param_1,void *param_2,void *param_3)

{
  strcmp((char *)param_2,(char *)param_3);
  return;
}



/* (anonymous namespace)::_findIndex(char const* const*, char const*) */

undefined3 (anonymous_namespace)::_findIndex(char **param_1,char *param_2)

{
  char **ppcVar1;
  char *pcVar2;
  int iVar3;
  char **ppcVar4;
  undefined1 local_2c [12];
  
  pcVar2 = *param_1;
  ppcVar4 = param_1;
  while (pcVar2 != (char *)0x0) {
    iVar3 = strcmp(param_2,pcVar2);
    if (iVar3 == 0) goto LAB_00100199;
    ppcVar1 = ppcVar4 + 1;
    ppcVar4 = ppcVar4 + 1;
    pcVar2 = *ppcVar1;
  }
  pcVar2 = ppcVar4[1];
  ppcVar1 = ppcVar4;
  while (pcVar2 != (char *)0x0) {
    ppcVar4 = ppcVar1 + 1;
    iVar3 = strcmp(param_2,pcVar2);
    if (iVar3 == 0) goto LAB_00100199;
    pcVar2 = ppcVar1[2];
    ppcVar1 = ppcVar4;
  }
  local_2c[2] = 0;
LAB_001001aa:
  return local_2c._0_3_;
LAB_00100199:
  local_2c[2] = 1;
  local_2c._0_2_ = (undefined2)((long)ppcVar4 - (long)param_1 >> 3);
  goto LAB_001001aa;
}



/* (anonymous namespace)::UPRV_ISALPHANUM(char) */

bool (anonymous_namespace)::UPRV_ISALPHANUM(char param_1)

{
  char cVar1;
  
  cVar1 = uprv_isASCIILetter_76_godot((int)param_1);
  return cVar1 != '\0' || (byte)(param_1 - 0x30U) < 10;
}



/* (anonymous namespace)::_getVariant(char const*, char, icu_76_godot::ByteSink*, char const**,
   bool, UErrorCode&) [clone .part.0] */

void (anonymous_namespace)::_getVariant
               (char *param_1,char param_2,ByteSink *param_3,char **param_4,bool param_5,
               UErrorCode *param_6)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  long in_FS_OFFSET;
  char local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != (char **)0x0) {
    *param_4 = param_1;
  }
  if ((param_2 == '_') || (param_2 == '-')) {
    if (((*param_1 & 0xbfU) != 0) && (*param_1 != 0x2e)) {
      pcVar3 = param_1;
      if (!param_5) goto LAB_001003cb;
      if (param_3 == (ByteSink *)0x0) goto LAB_001003ae;
      (**(code **)(*(long *)param_3 + 0x10))(param_3,&_LC0,1);
      do {
        local_31 = uprv_toupper_76_godot((int)*pcVar3);
        if (local_31 == '-') {
          local_31 = '_';
        }
        (**(code **)(*(long *)param_3 + 0x10))(param_3,&local_31,1);
LAB_001003ae:
        do {
          pbVar4 = (byte *)(pcVar3 + 1);
          pcVar3 = pcVar3 + 1;
          if (((*pbVar4 & 0xbf) == 0) || (*pbVar4 == 0x2e)) {
            if (param_4 != (char **)0x0) {
              *param_4 = pcVar3;
            }
            goto LAB_00100304;
          }
          if (pcVar3 == param_1 + 0xb3) goto LAB_0010040a;
LAB_001003cb:
        } while (param_3 == (ByteSink *)0x0);
      } while( true );
    }
    if (param_4 != (char **)0x0) {
      *param_4 = param_1;
    }
LAB_0010033c:
    pcVar3 = strchr(param_1,0x40);
    if (pcVar3 == (char *)0x0) goto LAB_00100304;
    param_1 = pcVar3 + 1;
    bVar2 = *param_1;
  }
  else {
    if (param_2 != '@') goto LAB_0010033c;
    bVar2 = *param_1;
  }
  pbVar4 = (byte *)param_1;
  if (((bVar2 & 0xbf) != 0) && (bVar2 != 0x2e)) {
    if (!param_5) goto LAB_001003e4;
    if (param_3 == (ByteSink *)0x0) goto LAB_001002e3;
    (**(code **)(*(long *)param_3 + 0x10))(param_3,&_LC0,1);
    do {
      local_31 = uprv_toupper_76_godot((int)(char)*pbVar4);
      if ((byte)(local_31 - 0x2cU) < 2) {
        local_31 = '_';
      }
      (**(code **)(*(long *)param_3 + 0x10))(param_3,&local_31,1);
LAB_001002e3:
      do {
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        if (((*pbVar1 & 0xbf) == 0) || (*pbVar1 == 0x2e)) goto LAB_001002fb;
        if (pbVar4 == (byte *)param_1 + 0xb3) goto LAB_0010040a;
LAB_001003e4:
      } while (param_3 == (ByteSink *)0x0);
    } while( true );
  }
LAB_001002fb:
  if (param_4 != (char **)0x0) {
    *param_4 = (char *)pbVar4;
  }
LAB_00100304:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010040a:
  *(undefined4 *)param_6 = 1;
  goto LAB_00100304;
}



/* ulocimp_getParent_76_godot(char const*, icu_76_godot::ByteSink&, UErrorCode&) [clone .part.0] */

void ulocimp_getParent_76_godot(char *param_1,ByteSink *param_2,UErrorCode *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)locale_get_default_76_godot();
  }
  pcVar3 = strrchr(param_1,0x5f);
  if (pcVar3 != (char *)0x0) {
    iVar1 = (int)((long)pcVar3 - (long)param_1);
    uVar4 = (long)pcVar3 - (long)param_1 & 0xffffffff;
    if (0 < iVar1) {
      iVar2 = uprv_strnicmp_76_godot(param_1,&_LC1,4);
      if (iVar2 == 0) {
        param_1 = param_1 + 3;
        uVar4 = (ulong)(iVar1 - 3);
      }
                    /* WARNING: Could not recover jumptable at 0x0010049b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_2 + 0x10))(param_2,param_1,uVar4);
      return;
    }
  }
  return;
}



undefined8 *
uloc_openKeywordList_76_godot_part_0(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  plVar7 = (long *)uprv_malloc_76_godot(0x10);
  uprv_free_76_godot(0);
  puVar8 = (undefined8 *)uprv_malloc_76_godot(0x38);
  uprv_free_76_godot(0);
  uVar6 = gKeywordsEnum._40_8_;
  uVar5 = gKeywordsEnum._32_8_;
  uVar4 = gKeywordsEnum._24_8_;
  uVar3 = gKeywordsEnum._16_8_;
  uVar2 = gKeywordsEnum._8_8_;
  uVar1 = gKeywordsEnum._0_8_;
  if ((plVar7 != (long *)0x0) && (puVar8 != (undefined8 *)0x0)) {
    puVar8[6] = gKeywordsEnum._48_8_;
    *puVar8 = uVar1;
    puVar8[1] = uVar2;
    puVar8[2] = uVar3;
    puVar8[3] = uVar4;
    puVar8[4] = uVar5;
    puVar8[5] = uVar6;
    lVar9 = uprv_malloc_76_godot((long)(param_2 + 1));
    *plVar7 = lVar9;
    if (lVar9 != 0) {
      lVar9 = __memcpy_chk(lVar9,param_1,(long)param_2,(long)(param_2 + 1));
      puVar8[1] = plVar7;
      *(undefined1 *)(lVar9 + param_2) = 0;
      plVar7[1] = lVar9;
      plVar7 = (long *)0x0;
      puVar10 = puVar8;
      puVar8 = (undefined8 *)0x0;
      goto LAB_0010056a;
    }
  }
  *param_3 = 7;
  puVar10 = (undefined8 *)0x0;
LAB_0010056a:
  uprv_free_76_godot(puVar8);
  uprv_free_76_godot(plVar7);
  return puVar10;
}



/* (anonymous namespace)::locale_canonKeywordName(std::basic_string_view<char,
   std::char_traits<char> >, UErrorCode&) */

CharString *
(anonymous_namespace)::locale_canonKeywordName
          (CharString *param_1,long param_2,char *param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  long in_FS_OFFSET;
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 1) {
    local_88 = (long)&local_7c + 1;
    pcVar1 = param_3 + param_2;
    local_80 = 0x28;
    local_50 = 0;
    local_7c = 0;
    if (pcVar1 != param_3) {
      do {
        cVar3 = *param_3;
        cVar2 = uprv_isASCIILetter_76_godot((int)cVar3);
        if ((cVar2 == '\0') && (9 < (byte)(cVar3 - 0x30U))) {
          *param_4 = 1;
          *(undefined4 *)(param_1 + 8) = 0x28;
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(undefined2 *)(param_1 + 0xc) = 0;
          *(CharString **)param_1 = param_1 + 0xd;
          goto LAB_00100696;
        }
        param_3 = param_3 + 1;
        cVar3 = uprv_asciitolower_76_godot((int)cVar3);
        icu_76_godot::CharString::append
                  ((char)(CharString *)&local_88,(UErrorCode *)(ulong)(uint)(int)cVar3);
      } while (pcVar1 != param_3);
      if (local_50 == 0) {
        *param_4 = 1;
        *(CharString **)param_1 = param_1 + 0xd;
        *(undefined4 *)(param_1 + 8) = 0x28;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined2 *)(param_1 + 0xc) = 0;
      }
      else {
        icu_76_godot::CharString::CharString(param_1,(CharString *)&local_88);
      }
LAB_00100696:
      if ((char)local_7c != '\0') {
        uprv_free_76_godot(local_88);
      }
      goto LAB_001005e5;
    }
    *param_4 = 1;
  }
  *(undefined4 *)(param_1 + 8) = 0x28;
  *(CharString **)param_1 = param_1 + 0xd;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
LAB_001005e5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void locale_getKeywordsStart_76_godot(char *param_1)

{
  strchr(param_1,0x40);
  return;
}



/* ulocimp_getKeywords_76_godot(char const*, char, icu_76_godot::ByteSink&, bool, UErrorCode&) */

void ulocimp_getKeywords_76_godot
               (char *param_1,char param_2,ByteSink *param_3,bool param_4,UErrorCode *param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long in_FS_OFFSET;
  char local_4f8 [28];
  int local_4dc;
  undefined8 local_4d8;
  int local_4d0 [292];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)param_5 < 1) && (iVar9 = 0, param_2 == '@')) {
LAB_001007cc:
    do {
      for (; *param_1 == ' '; param_1 = param_1 + 1) {
      }
      if (*param_1 == '\0') {
LAB_00100ad2:
        uprv_sortArray_76_godot
                  (local_4f8,iVar9,0x30,(anonymous_namespace)::compareKeywordStructs,0,0,param_5);
        if (iVar9 < 1) goto LAB_00100799;
        goto LAB_001009b7;
      }
      if (iVar9 == 0x19) {
LAB_00100abf:
        *(undefined4 *)param_5 = 5;
        goto LAB_00100799;
      }
      pcVar4 = strchr(param_1,0x3d);
      pcVar5 = strchr(param_1,0x3b);
      if ((pcVar4 == (char *)0x0) || ((pcVar5 != (char *)0x0 && (pcVar5 < pcVar4))))
      goto LAB_00100aa8;
      lVar10 = (long)pcVar4 - (long)param_1;
      if (0x18 < lVar10) goto LAB_00100abf;
      if (lVar10 < 1) {
LAB_00100aa8:
        *(undefined4 *)param_5 = 3;
        goto LAB_00100799;
      }
      pcVar1 = param_1 + lVar10;
      iVar11 = 0;
      do {
        if (*param_1 != ' ') {
          cVar2 = uprv_asciitolower_76_godot();
          lVar10 = (long)iVar11;
          iVar11 = iVar11 + 1;
          local_4f8[lVar10 + (long)iVar9 * 0x30] = cVar2;
        }
        param_1 = param_1 + 1;
      } while (param_1 != pcVar1);
      if (iVar11 == 0) goto LAB_00100aa8;
      lVar10 = (long)iVar9;
      (&local_4dc)[lVar10 * 0xc] = iVar11;
      cVar2 = pcVar4[1];
      local_4f8[(long)iVar11 + lVar10 * 0x30] = '\0';
      while (pcVar1 = pcVar4 + 1, cVar2 == ' ') {
        cVar2 = pcVar4[2];
        pcVar4 = pcVar1;
      }
      if ((cVar2 == '\0') || (pcVar5 == pcVar1)) goto LAB_00100aa8;
      *(char **)(local_4d0 + lVar10 * 0xc + -2) = pcVar1;
      if (pcVar5 == (char *)0x0) {
        sVar7 = strlen(pcVar1);
        iVar11 = (int)sVar7;
        if (iVar11 != 0) {
          lVar8 = (long)iVar11;
          do {
            if (pcVar4[lVar8] != ' ') {
              iVar11 = (int)lVar8;
              break;
            }
            lVar8 = lVar8 + -1;
            iVar11 = (int)lVar8;
          } while (iVar11 != 0);
        }
        local_4d0[lVar10 * 0xc] = iVar11;
        if (iVar9 < 1) {
          iVar9 = iVar9 + 1;
          goto LAB_00100ad2;
        }
        param_1 = (char *)0x0;
      }
      else {
        if (pcVar5[-1] == ' ') {
          pcVar4 = pcVar5 + -2;
          do {
            pcVar6 = pcVar4;
            pcVar4 = pcVar6 + -1;
          } while (*pcVar6 == ' ');
          iVar11 = ((int)(pcVar5 + -2) + 1) - (int)pcVar6;
        }
        else {
          iVar11 = 0;
        }
        param_1 = pcVar5 + 1;
        local_4d0[lVar10 * 0xc] = ((int)pcVar5 - (int)pcVar1) - iVar11;
        if (iVar9 < 1) {
          iVar9 = iVar9 + 1;
          goto LAB_001007cc;
        }
      }
      iVar11 = 0;
      pcVar4 = local_4f8;
      do {
        iVar3 = strcmp(pcVar4,local_4f8 + lVar10 * 0x30);
        if (iVar3 == 0) goto joined_r0x0010098b;
        iVar11 = iVar11 + 1;
        pcVar4 = pcVar4 + 0x30;
      } while (iVar11 < iVar9);
      iVar9 = iVar9 + 1;
joined_r0x0010098b:
    } while (param_1 != (char *)0x0);
    uprv_sortArray_76_godot
              (local_4f8,iVar9,0x30,(anonymous_namespace)::compareKeywordStructs,0,0,param_5);
LAB_001009b7:
    pcVar4 = local_4f8;
    iVar11 = 0;
    do {
      (**(code **)(*(long *)param_3 + 0x10))(param_3,pcVar4,*(undefined4 *)(pcVar4 + 0x1c));
      if (param_4) {
        (**(code **)(*(long *)param_3 + 0x10))(param_3,&_LC2,1);
        (**(code **)(*(long *)param_3 + 0x10))
                  (param_3,*(undefined8 *)(pcVar4 + 0x20),*(undefined4 *)(pcVar4 + 0x28));
        if (iVar11 < iVar9 + -1) {
          (**(code **)(*(long *)param_3 + 0x10))(param_3,&_LC3,1);
        }
      }
      else {
        (**(code **)(*(long *)param_3 + 0x10))(param_3,&DAT_00106738);
      }
      iVar11 = iVar11 + 1;
      pcVar4 = pcVar4 + 0x30;
    } while (iVar11 != iVar9);
  }
LAB_00100799:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_getKeywordValue_76_godot(char const*, std::basic_string_view<char, std::char_traits<char>
   >, icu_76_godot::ByteSink&, UErrorCode&) */

void ulocimp_getKeywordValue_76_godot
               (char *param_1,long param_2,undefined8 param_3,long *param_4,int *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  size_t sVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  char *local_108;
  undefined4 local_100;
  undefined2 local_fc;
  int local_d0;
  void *local_c8;
  char local_bc;
  int local_90;
  void *local_88;
  undefined4 local_80;
  undefined2 local_7c;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_5 < 1) {
    if ((param_1 == (char *)0x0) || (param_2 == 0)) {
      *param_5 = 1;
    }
    else {
      local_108 = (char *)((long)&local_fc + 1);
      local_100 = 0x28;
      local_d0 = 0;
      local_fc = 0;
      (anonymous_namespace)::locale_canonKeywordName(&local_c8);
      if (*param_5 < 1) {
        pbVar4 = (byte *)strchr(param_1,0x40);
        if (pbVar4 != (byte *)0x0) {
LAB_00100bca:
LAB_00100bdf:
          pbVar7 = pbVar4 + 1;
          pbVar5 = (byte *)strchr((char *)pbVar7,0x3d);
          if (pbVar5 == (byte *)0x0) {
LAB_00100f60:
            *param_5 = 1;
          }
          else {
            bVar1 = pbVar4[1];
            while (bVar1 == 0x20) {
              pbVar7 = pbVar7 + 1;
              bVar1 = *pbVar7;
            }
            pbVar4 = pbVar5;
            if (pbVar7 < pbVar5) {
              while (pbVar4[-1] == 0x20) {
                pbVar4 = pbVar4 + -1;
                if (pbVar7 == pbVar4) goto LAB_00100f60;
              }
              if (pbVar7 == pbVar4) goto LAB_00100f60;
              local_80 = 0x28;
              local_50 = 0;
              local_7c = 0;
              local_88 = (void *)((long)&local_7c + 1);
              if (pbVar7 < pbVar4) {
                do {
                  bVar1 = *pbVar7;
                  cVar2 = uprv_isASCIILetter_76_godot();
                  if ((cVar2 == '\0') && (9 < (byte)(bVar1 - 0x30))) goto LAB_00100ca0;
                  bVar1 = *pbVar7;
                  pbVar7 = pbVar7 + 1;
                  cVar2 = uprv_asciitolower_76_godot((int)(char)bVar1);
                  icu_76_godot::CharString::append
                            ((char)&local_88,(UErrorCode *)(ulong)(uint)(int)cVar2);
                } while (pbVar4 != pbVar7);
              }
            }
            else {
              if (pbVar7 == pbVar5) goto LAB_00100f60;
              local_80 = 0x28;
              local_50 = 0;
              local_7c = 0;
              local_88 = (void *)((long)&local_7c + 1);
            }
            if (*param_5 < 1) {
              pbVar4 = (byte *)strchr((char *)pbVar5,0x3b);
              if ((local_90 != local_50) ||
                 ((local_90 != 0 && (iVar3 = memcmp(local_c8,local_88,(long)local_90), iVar3 != 0)))
                 ) goto LAB_00100d77;
              pbVar7 = pbVar5 + 1;
              bVar1 = pbVar5[1];
              while (bVar1 == 0x20) {
                pbVar7 = pbVar7 + 1;
                bVar1 = *pbVar7;
              }
              if (pbVar4 == (byte *)0x0) {
                sVar6 = strlen((char *)pbVar7);
                pbVar4 = pbVar7 + sVar6;
              }
              if (pbVar7 < pbVar4) {
                while (pbVar4[-1] == 0x20) {
                  pbVar4 = pbVar4 + -1;
                  if (pbVar7 == pbVar4) goto LAB_00100ca0;
                }
                if (pbVar7 == pbVar4) goto LAB_00100ca0;
                if (pbVar7 < pbVar4) {
                  do {
                    bVar1 = *pbVar7;
                    cVar2 = uprv_isASCIILetter_76_godot();
                    if (((cVar2 == '\0') && (9 < (byte)(bVar1 - 0x30))) &&
                       ((0x34 < (byte)(*pbVar7 - 0x2b) ||
                        ((0x10000000000015U >> ((ulong)(*pbVar7 - 0x2b) & 0x3f) & 1) == 0))))
                    goto LAB_00100ca0;
                    pbVar5 = pbVar7 + 1;
                    (**(code **)(*param_4 + 0x10))(param_4,pbVar7,1);
                    pbVar7 = pbVar5;
                  } while (pbVar5 != pbVar4);
                }
              }
              else {
                if (pbVar7 != pbVar4) goto LAB_00100ca7;
LAB_00100ca0:
                *param_5 = 1;
              }
            }
LAB_00100ca7:
            if ((char)local_7c != '\0') {
              uprv_free_76_godot(local_88);
            }
          }
          goto LAB_00100cb5;
        }
        iVar3 = (anonymous_namespace)::getShortestSubtagLength(param_1);
        if (iVar3 == 1) {
          ulocimp_forLanguageTag_76_godot
                    ((char *)&local_88,(int)param_1,(int *)0xffffffff,(UErrorCode *)0x0);
          icu_76_godot::CharString::operator=((CharString *)&local_108,(CharString *)&local_88);
          if ((char)local_7c != '\0') {
            uprv_free_76_godot(local_88);
          }
          if ((*param_5 < 1) && (local_d0 != 0)) {
            param_1 = local_108;
          }
          pbVar4 = (byte *)strchr(param_1,0x40);
          if (pbVar4 != (byte *)0x0) goto LAB_00100bca;
        }
      }
LAB_00100cb5:
      if (local_bc != '\0') {
        uprv_free_76_godot(local_c8);
      }
      if ((char)local_fc != '\0') {
        uprv_free_76_godot(local_108);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100d77:
  if ((char)local_7c != '\0') {
    uprv_free_76_godot(local_88);
  }
  if (pbVar4 == (byte *)0x0) goto LAB_00100cb5;
  goto LAB_00100bdf;
}



/* ulocimp_setKeywordValue_76_godot(std::basic_string_view<char, std::char_traits<char> >,
   std::basic_string_view<char, std::char_traits<char> >, std::basic_string_view<char,
   std::char_traits<char> >, icu_76_godot::ByteSink&, UErrorCode&) */

ulong ulocimp_setKeywordValue_76_godot
                (ulong param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                char *param_6,long *param_7,int *param_8)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  char local_15a;
  int local_14c;
  void *local_148;
  undefined4 local_140;
  undefined2 local_13c;
  uint local_110;
  char *local_108;
  char local_fc;
  uint local_d0;
  void *local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  uint local_90;
  char *local_88;
  undefined4 local_80;
  undefined2 local_7c;
  uint local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_8 < 1) {
    local_148 = (void *)((long)&local_13c + 1);
    local_140 = 0x28;
    local_110 = 0;
    local_13c = 0;
    if (*param_8 == -0x7c) {
      *param_8 = 0;
    }
    if (param_3 != 0) {
      uVar9 = 0;
      (anonymous_namespace)::locale_canonKeywordName(&local_108,param_3,param_4,param_8);
      if (*param_8 < 1) {
        local_c8 = (void *)((long)&local_bc + 1);
        local_c0 = 0x28;
        pcVar12 = param_6 + param_5;
        local_90 = 0;
        local_bc = 0;
        if (param_6 == pcVar12) {
          if (1 < param_1) {
LAB_00101125:
            local_15a = '@';
            uVar9 = 1;
            bVar1 = false;
            do {
              pvVar5 = memchr((void *)(param_2 + uVar9),0x3d,param_1 - uVar9);
              if ((pvVar5 == (void *)0x0) ||
                 (uVar6 = (long)pvVar5 - param_2, uVar6 == 0xffffffffffffffff)) break;
              uVar10 = uVar6;
              if (uVar9 < param_1) {
                do {
                  if (*(char *)(param_2 + uVar9) != ' ') break;
                  uVar9 = uVar9 + 1;
                } while (uVar9 != param_1);
              }
              do {
                uVar7 = uVar10;
                if (uVar7 <= uVar9) {
                  if (uVar7 == uVar9) goto LAB_001012f8;
                  local_88 = (char *)((long)&local_7c + 1);
                  local_80 = 0x28;
                  local_50 = 0;
                  local_7c = 0;
                  goto LAB_00101208;
                }
                uVar10 = uVar7 - 1;
              } while (*(char *)((uVar7 - 1) + param_2) == ' ');
              pcVar12 = (char *)(param_2 + uVar9);
              local_80 = 0x28;
              local_50 = 0;
              local_7c = 0;
              local_88 = (char *)((long)&local_7c + 1);
              do {
                cVar3 = *pcVar12;
                cVar2 = uprv_isASCIILetter_76_godot();
                if ((cVar2 == '\0') && (9 < (byte)(cVar3 - 0x30U))) goto LAB_001013ef;
                cVar3 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                cVar3 = uprv_asciitolower_76_godot((int)cVar3);
                icu_76_godot::CharString::append
                          ((char)&local_88,(UErrorCode *)(ulong)(uint)(int)cVar3);
              } while (pcVar12 != (char *)(param_2 + uVar7));
LAB_00101208:
              if (0 < *param_8) goto LAB_001013f6;
              uVar10 = uVar6 + 1;
              if (uVar6 < param_1) {
                pvVar5 = memchr(pvVar5,0x3b,param_1 - uVar6);
                if (pvVar5 == (void *)0x0) {
                  uVar9 = 0xffffffffffffffff;
                  if (uVar10 < param_1) goto LAB_00101261;
                  goto LAB_00101570;
                }
                uVar9 = (long)pvVar5 - param_2;
                for (; uVar10 < param_1; uVar10 = uVar10 + 1) {
LAB_00101261:
                  if (*(char *)(param_2 + uVar10) != ' ') break;
                }
                uVar6 = uVar9;
                if (uVar9 == 0xffffffffffffffff) goto LAB_00101570;
              }
              else {
LAB_00101570:
                uVar9 = 0xffffffffffffffff;
                uVar6 = param_1;
              }
              do {
                uVar7 = uVar6;
                if (uVar7 <= uVar10) {
                  if (uVar7 == uVar10) goto LAB_001013ef;
                  break;
                }
                uVar6 = uVar7 - 1;
              } while (*(char *)((uVar7 - 1) + param_2) == ' ');
              iVar4 = strcmp(local_108,local_88);
              if (iVar4 == 0) {
                if (local_90 != 0) {
                  cVar3 = (char)&local_148;
                  icu_76_godot::CharString::append(cVar3,(UErrorCode *)(ulong)(uint)(int)local_15a);
                  icu_76_godot::CharString::append
                            ((char *)&local_148,(int)local_108,(UErrorCode *)(ulong)local_d0);
                  icu_76_godot::CharString::append(cVar3,(UErrorCode *)0x3d);
                  icu_76_godot::CharString::append
                            ((char *)&local_148,(int)local_c8,(UErrorCode *)(ulong)local_90);
                  local_15a = ';';
                }
                if ((char)local_7c != '\0') {
                  uprv_free_76_godot(local_88);
                }
                if (uVar9 == 0xffffffffffffffff) {
LAB_001016ab:
                  uVar11 = local_110;
                  if (0 < *param_8) {
LAB_001016b5:
                    uVar9 = param_1 & 0xffffffff;
                    goto LAB_00101302;
                  }
                  uVar9 = (ulong)local_110;
                  if ((int)local_110 < 1) goto LAB_00101302;
                  local_14c = 0;
                  pvVar5 = (void *)(**(code **)(*param_7 + 0x18))
                                             (param_7,local_110,local_110,0,uVar9,&local_14c);
                  if ((local_14c < (int)uVar11) || (pvVar5 == (void *)0x0)) goto LAB_0010157f;
                  pvVar5 = memcpy(pvVar5,local_148,(long)(int)uVar11);
                  (**(code **)(*param_7 + 0x10))(param_7,pvVar5,uVar11);
                  goto LAB_00101302;
                }
                bVar1 = true;
              }
              else {
                cVar3 = (char)&local_148;
                if (((iVar4 < 0) && (local_90 != 0)) && (!bVar1)) {
                  icu_76_godot::CharString::append(cVar3,(UErrorCode *)(ulong)(uint)(int)local_15a);
                  icu_76_godot::CharString::append
                            ((char *)&local_148,(int)local_108,(UErrorCode *)(ulong)local_d0);
                  icu_76_godot::CharString::append(cVar3,(UErrorCode *)0x3d);
                  icu_76_godot::CharString::append
                            ((char *)&local_148,(int)local_c8,(UErrorCode *)(ulong)local_90);
                  local_15a = ';';
                  bVar1 = true;
                }
                icu_76_godot::CharString::append(cVar3,(UErrorCode *)(ulong)(uint)(int)local_15a);
                icu_76_godot::CharString::append
                          ((char *)&local_148,(int)local_88,(UErrorCode *)(ulong)local_50);
                icu_76_godot::CharString::append(cVar3,(UErrorCode *)0x3d);
                icu_76_godot::CharString::append
                          ((char *)&local_148,(int)param_2 + (int)uVar10,
                           (UErrorCode *)(ulong)(uint)((int)uVar7 - (int)uVar10));
                if (uVar9 == 0xffffffffffffffff) {
                  if (local_90 != 0) {
                    if (!bVar1) {
                      icu_76_godot::CharString::append(cVar3,(UErrorCode *)0x3b);
                      icu_76_godot::CharString::append
                                ((char *)&local_148,(int)local_108,(UErrorCode *)(ulong)local_d0);
                      icu_76_godot::CharString::append(cVar3,(UErrorCode *)0x3d);
                      icu_76_godot::CharString::append
                                ((char *)&local_148,(int)local_c8,(UErrorCode *)(ulong)local_90);
                    }
                    bVar1 = true;
                  }
                  if ((char)local_7c != '\0') {
                    uprv_free_76_godot(local_88);
                  }
                  if (bVar1) goto LAB_001016ab;
                  goto LAB_001016b5;
                }
                if ((char)local_7c != '\0') {
                  uprv_free_76_godot(local_88);
                }
                local_15a = ';';
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < param_1);
LAB_001012f8:
            *param_8 = 1;
          }
LAB_001012ff:
          uVar9 = 0;
        }
        else {
          do {
            cVar3 = *param_6;
            uVar11 = (uint)cVar3;
            cVar2 = uprv_isASCIILetter_76_godot(uVar11);
            if (((cVar2 == '\0') && (9 < (byte)(cVar3 - 0x30U))) &&
               ((0x34 < (byte)(uVar11 - 0x2b) ||
                ((0x10000000000015U >> ((ulong)(uVar11 - 0x2b) & 0x3f) & 1) == 0))))
            goto LAB_001012f8;
            param_6 = param_6 + 1;
            icu_76_godot::CharString::append((char)&local_c8,(UErrorCode *)(ulong)uVar11);
          } while (pcVar12 != param_6);
          if (0 < *param_8) goto LAB_001012ff;
          if (1 < param_1) goto LAB_00101125;
          if (local_90 == 0) goto LAB_001012ff;
          local_14c = 0;
          uVar11 = local_90 + 2 + local_d0;
          uVar9 = (ulong)uVar11;
          puVar8 = (undefined1 *)
                   (**(code **)(*param_7 + 0x18))(param_7,uVar9,uVar11,0,uVar9,&local_14c);
          if ((local_14c < (int)uVar11) || (puVar8 == (undefined1 *)0x0)) {
LAB_0010157f:
            *param_8 = 0xf;
          }
          else {
            *puVar8 = 0x40;
            pvVar5 = memcpy(puVar8 + 1,local_108,(long)(int)local_d0);
            *(undefined1 *)((long)pvVar5 + (long)(int)local_d0) = 0x3d;
            memcpy((undefined1 *)((long)pvVar5 + (long)(int)local_d0) + 1,local_c8,
                   (long)(int)local_90);
            (**(code **)(*param_7 + 0x10))(param_7,puVar8,uVar11);
          }
        }
LAB_00101302:
        if ((char)local_bc != '\0') {
          uprv_free_76_godot(local_c8);
        }
      }
      if (local_fc != '\0') {
        uprv_free_76_godot(local_108);
      }
      if ((char)local_13c != '\0') {
        uprv_free_76_godot(local_148);
      }
      goto LAB_0010101d;
    }
    *param_8 = 1;
  }
  uVar9 = 0;
LAB_0010101d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
LAB_001013ef:
  *param_8 = 1;
LAB_001013f6:
  if ((char)local_7c != '\0') {
    uprv_free_76_godot(local_88);
  }
  goto LAB_001012ff;
}



char * uloc_getCurrentCountryID_76_godot(char *param_1)

{
  uint uVar1;
  short local_c;
  
  uVar1 = (anonymous_namespace)::_findIndex
                    ((char **)(anonymous_namespace)::DEPRECATED_COUNTRIES,param_1);
  if ((uVar1 & 0xff0000) != 0) {
    local_c = (short)uVar1;
    param_1 = *(char **)((anonymous_namespace)::REPLACEMENT_COUNTRIES + (long)local_c * 8);
  }
  return param_1;
}



char * uloc_getCurrentLanguageID_76_godot(char *param_1)

{
  uint uVar1;
  short local_c;
  
  uVar1 = (anonymous_namespace)::_findIndex
                    ((char **)(anonymous_namespace)::DEPRECATED_LANGUAGES,param_1);
  if ((uVar1 & 0xff0000) != 0) {
    local_c = (short)uVar1;
    param_1 = *(char **)((anonymous_namespace)::REPLACEMENT_LANGUAGES + (long)local_c * 8);
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00101edd) */
/* ulocimp_getSubtags_76_godot(char const*, icu_76_godot::ByteSink*, icu_76_godot::ByteSink*,
   icu_76_godot::ByteSink*, icu_76_godot::ByteSink*, char const**, UErrorCode&) */

void ulocimp_getSubtags_76_godot
               (char *param_1,ByteSink *param_2,ByteSink *param_3,ByteSink *param_4,
               ByteSink *param_5,char **param_6,UErrorCode *param_7)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  size_t sVar11;
  bool bVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined4 local_5c;
  byte *local_58;
  undefined1 local_4b [11];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_7) goto LAB_00101938;
  if (param_6 == (char **)0x0) {
    if (((param_4 == (ByteSink *)0x0 && param_5 == (ByteSink *)0x0) && param_3 == (ByteSink *)0x0)
        && param_2 == (ByteSink *)0x0) goto LAB_00101938;
  }
  else {
    *param_6 = param_1;
  }
  if (param_1 == (char *)0x0) {
    param_1 = (char *)locale_get_default_76_godot();
  }
  iVar6 = uprv_stricmp_76_godot(param_1,&_LC5);
  if (iVar6 == 0) {
    uVar7 = (uint)((byte *)param_1)[4];
    pbVar15 = (byte *)param_1 + 4;
LAB_001018c3:
    iVar6 = 0;
    if (((byte)(uVar7 - 0x49) < 0x30) &&
       ((0x800100008001U >> ((ulong)(uVar7 - 0x49) & 0x3f) & 1) != 0)) {
      iVar6 = (uint)(pbVar15[1] == 0x5f || pbVar15[1] == 0x2d) * 2;
    }
  }
  else {
    iVar6 = uprv_strnicmp_76_godot(param_1,&_LC6,3);
    if (iVar6 != 0) {
LAB_00101c20:
      uVar7 = (uint)(byte)*param_1;
      pbVar15 = (byte *)param_1;
      goto LAB_001018c3;
    }
    bVar4 = ((byte *)param_1)[3];
    uVar7 = (uint)bVar4;
    if (bVar4 != 0) {
      if (((byte)(bVar4 - 0x2d) < 0x33) &&
         (pbVar15 = (byte *)param_1 + 3,
         (0x4000000080001U >> ((ulong)(bVar4 - 0x2d) & 0x3f) & 1) != 0)) goto LAB_001018c3;
      goto LAB_00101c20;
    }
    pbVar15 = (byte *)param_1 + 3;
    iVar6 = 0;
  }
  pbVar13 = pbVar15 + iVar6;
  while ((*pbVar13 != 0 &&
         ((uVar7 = *pbVar13 - 0x2d, 0x32 < (byte)uVar7 ||
          ((0x4000000080003U >> ((ulong)uVar7 & 0x3f) & 1) == 0))))) {
    pbVar13 = pbVar13 + 1;
    if (iVar6 == 0xb) {
      *(undefined4 *)param_7 = 1;
      goto LAB_00101938;
    }
    iVar6 = iVar6 + 1;
  }
  if ((param_2 == (ByteSink *)0x0) || (iVar6 == 0)) {
    iVar6 = *(int *)param_7;
  }
  else {
    lVar14 = 0;
    uVar8 = uprv_max_76_godot(iVar6,4);
    local_5c = 0;
    pcVar9 = (char *)(**(code **)(*(long *)param_2 + 0x18))
                               (param_2,uVar8,uVar8,local_4b,0xb,&local_5c);
    do {
      cVar3 = uprv_asciitolower_76_godot((int)(char)pbVar15[lVar14]);
      pcVar9[lVar14] = cVar3;
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 < iVar6);
    if ((pbVar15[1] == 0x5f) || (pbVar15[1] == 0x2d)) {
      pcVar9[1] = '-';
    }
    if (iVar6 == 3) {
      pcVar9[3] = '\0';
      uVar7 = (anonymous_namespace)::_findIndex((char **)(anonymous_namespace)::LANGUAGES_3,pcVar9);
      local_58 = (byte *)CONCAT44(local_58._4_4_,uVar7);
      pbVar15 = local_58;
      if ((uVar7 & 0xff0000) != 0) {
        local_58._0_2_ = (short)uVar7;
        pcVar9 = *(char **)((anonymous_namespace)::LANGUAGES + (long)(short)local_58 * 8);
        local_58 = pbVar15;
        sVar11 = strlen(pcVar9);
        (**(code **)(*(long *)param_2 + 0x10))(param_2,pcVar9,sVar11 & 0xffffffff);
        iVar6 = *(int *)param_7;
        goto LAB_00101a1d;
      }
    }
    (**(code **)(*(long *)param_2 + 0x10))(param_2,pcVar9,iVar6);
    iVar6 = *(int *)param_7;
  }
LAB_00101a1d:
  if (0 < iVar6) goto LAB_00101938;
  if (param_6 == (char **)0x0) {
    if ((param_4 == (ByteSink *)0x0 && param_5 == (ByteSink *)0x0) && param_3 == (ByteSink *)0x0)
    goto LAB_00101938;
  }
  else {
    *param_6 = (char *)pbVar13;
  }
  if ((*pbVar13 == 0x2d) || (*pbVar13 == 0x5f)) {
    lVar14 = 0;
LAB_00101c4a:
    if ((pbVar13[lVar14 + 1] != 0) &&
       (((uVar7 = (int)(char)pbVar13[lVar14 + 1] - 0x2d, 0x32 < (byte)uVar7 ||
         ((0x4000000080003U >> ((ulong)uVar7 & 0x3f) & 1) == 0)) &&
        (cVar3 = uprv_isASCIILetter_76_godot(), cVar3 != '\0')))) goto code_r0x00101c85;
    if ((int)lVar14 == 4) {
      pbVar15 = pbVar13 + 5;
      if (param_3 != (ByteSink *)0x0) {
        local_58 = (byte *)((ulong)local_58 & 0xffffffff00000000);
        lVar14 = 2;
        puVar10 = (undefined1 *)
                  (**(code **)(*(long *)param_3 + 0x18))(param_3,4,4,local_4b,4,&local_58);
        uVar5 = uprv_toupper_76_godot((int)(char)pbVar13[1]);
        *puVar10 = uVar5;
        do {
          uVar5 = uprv_asciitolower_76_godot((int)(char)pbVar13[lVar14]);
          puVar10[lVar14 + -1] = uVar5;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 5);
        (**(code **)(*(long *)param_3 + 0x10))(param_3,puVar10,4);
      }
      if (param_6 == (char **)0x0) {
        if (param_5 == (ByteSink *)0x0 && param_4 == (ByteSink *)0x0) goto LAB_00101938;
      }
      else {
        *param_6 = (char *)pbVar15;
      }
      bVar16 = param_5 == (ByteSink *)0x0;
      goto LAB_00101a5e;
    }
  }
LAB_00101a44:
  pbVar15 = pbVar13;
  if (param_5 == (ByteSink *)0x0 && param_4 == (ByteSink *)0x0) {
    if (param_6 == (char **)0x0) goto LAB_00101938;
    bVar16 = true;
  }
  else {
    bVar16 = param_5 == (ByteSink *)0x0;
  }
LAB_00101a5e:
  bVar12 = *pbVar15 == 0x5f || *pbVar15 == 0x2d;
  if (bVar12) {
    iVar6 = 0;
    pbVar13 = pbVar15 + 1;
    while ((*pbVar13 != 0 &&
           ((uVar7 = *pbVar13 - 0x2d, 0x32 < (byte)uVar7 ||
            ((0x4000000080003U >> ((ulong)uVar7 & 0x3f) & 1) == 0))))) {
      pbVar13 = pbVar13 + 1;
      if (iVar6 == 3) goto LAB_00101a75;
      iVar6 = iVar6 + 1;
    }
    if (iVar6 < 2) goto LAB_00101a75;
    if (param_4 != (ByteSink *)0x0) {
      local_5c = 0;
      pcVar9 = (char *)(**(code **)(*(long *)param_4 + 0x18))(param_4,4,4,local_4b,4,&local_5c);
      lVar14 = 0;
      do {
        cVar3 = uprv_toupper_76_godot((int)(char)pbVar15[lVar14 + 1]);
        pcVar9[lVar14] = cVar3;
        lVar14 = lVar14 + 1;
      } while (lVar14 != iVar6);
      if (iVar6 == 3) {
        pcVar9[3] = '\0';
        uVar7 = (anonymous_namespace)::_findIndex
                          ((char **)(anonymous_namespace)::COUNTRIES_3,pcVar9);
        local_58 = (byte *)CONCAT44(local_58._4_4_,uVar7);
        pbVar2 = local_58;
        if ((uVar7 & 0xff0000) != 0) {
          local_58._0_2_ = (short)uVar7;
          pcVar9 = *(char **)((anonymous_namespace)::COUNTRIES + (long)(short)local_58 * 8);
          local_58 = pbVar2;
          sVar11 = strlen(pcVar9);
          (**(code **)(*(long *)param_4 + 0x10))(param_4,pcVar9,sVar11 & 0xffffffff);
          goto LAB_00101dc7;
        }
      }
      (**(code **)(*(long *)param_4 + 0x10))(param_4,pcVar9,iVar6);
    }
LAB_00101dc7:
    if (pbVar15 + 1 == pbVar13) goto LAB_00101a75;
    if (param_6 == (char **)0x0) goto LAB_00101a77;
    *param_6 = (char *)pbVar13;
  }
  else {
LAB_00101a75:
    bVar12 = false;
    pbVar13 = pbVar15;
LAB_00101a77:
    if ((param_6 == (char **)0x0) && (bVar16)) goto LAB_00101938;
  }
  bVar4 = *pbVar13;
  if ((bVar4 == 0x5f) ||
     ((bVar4 == 0x2d &&
      (((0x24 < (byte)(pbVar13[1] - 0x54) ||
        ((0x1300000013U >> ((ulong)(pbVar13[1] - 0x54) & 0x3f) & 1) == 0)) || (pbVar13[2] != 0x2d)))
      ))) {
    if ((!bVar12) && ((bVar1 = pbVar13[1], bVar1 == 0x5f || (bVar1 == 0x2d)))) {
      pbVar13 = pbVar13 + 1;
      bVar4 = bVar1;
    }
    local_58 = (byte *)0x0;
    if (*(int *)param_7 < 1) {
      (anonymous_namespace)::_getVariant
                ((char *)(pbVar13 + 1),bVar4,param_5,(char **)&local_58,false,param_7);
      if (((*(int *)param_7 < 1) && (param_6 != (char **)0x0)) && (local_58 != pbVar13 + 1)) {
        *param_6 = (char *)local_58;
      }
    }
  }
LAB_00101938:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00101c85:
  lVar14 = lVar14 + 1;
  if (lVar14 == 5) goto LAB_00101a44;
  goto LAB_00101c4a;
}



undefined8 uloc_openKeywordList_76_godot(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 < 1) {
    uVar1 = uloc_openKeywordList_76_godot_part_0();
    return uVar1;
  }
  return 0;
}



/* ulocimp_getParent_76_godot(char const*, icu_76_godot::ByteSink&, UErrorCode&) */

void ulocimp_getParent_76_godot(char *param_1,ByteSink *param_2,UErrorCode *param_3)

{
  if (*(int *)param_3 < 1) {
    ulocimp_getParent_76_godot(param_1,param_2,param_3);
    return;
  }
  return;
}



void uloc_getLocaleForLCID_76_godot(void)

{
  uprv_convertToPosix_76_godot();
  return;
}



void uloc_getDefault_76_godot(void)

{
  locale_get_default_76_godot();
  return;
}



void uloc_setDefault_76_godot(undefined8 param_1,int *param_2)

{
  if (0 < *param_2) {
    return;
  }
  locale_set_default_76_godot();
  return;
}



undefined1 * uloc_getISOLanguages_76_godot(void)

{
  return (anonymous_namespace)::LANGUAGES;
}



undefined1 * uloc_getISOCountries_76_godot(void)

{
  return (anonymous_namespace)::COUNTRIES;
}



/* ulocimp_toBcpKeyWithFallback_76_godot(std::basic_string_view<char, std::char_traits<char> >) */

undefined8 *
ulocimp_toBcpKeyWithFallback_76_godot(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  undefined7 uStack_27;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ulocimp_toBcpKey_76_godot(&local_38);
  if (local_28 == '\0') {
    cVar1 = ultag_isUnicodeLocaleKey_76_godot(param_3,(int)param_2);
    if (cVar1 != '\0') {
      *param_1 = param_2;
      param_1[1] = param_3;
      *(undefined1 *)(param_1 + 2) = 1;
      goto LAB_00102045;
    }
  }
  param_1[2] = CONCAT71(uStack_27,local_28);
  *param_1 = local_38;
  param_1[1] = uStack_30;
LAB_00102045:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 uloc_toUnicodeLocaleKey_76_godot(char *param_1)

{
  size_t sVar1;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined8 local_20;
  char local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    sVar1 = strlen(param_1);
    ulocimp_toBcpKeyWithFallback_76_godot(auStack_28,sVar1,param_1);
    if (local_18 != '\0') goto LAB_001020e2;
  }
  local_20 = 0;
LAB_001020e2:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_20;
}



/* ulocimp_toBcpTypeWithFallback_76_godot(std::basic_string_view<char, std::char_traits<char> >,
   std::basic_string_view<char, std::char_traits<char> >) */

undefined8 *
ulocimp_toBcpTypeWithFallback_76_godot
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          char *param_5)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  undefined7 uStack_27;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ulocimp_toBcpType_76_godot(&local_38);
  if (local_28 == '\0') {
    cVar1 = ultag_isUnicodeLocaleType_76_godot(param_5,(int)param_4);
    if (cVar1 != '\0') {
      *param_1 = param_4;
      param_1[1] = param_5;
      *(undefined1 *)(param_1 + 2) = 1;
      goto LAB_00102145;
    }
  }
  param_1[2] = CONCAT71(uStack_27,local_28);
  *param_1 = local_38;
  param_1[1] = uStack_30;
LAB_00102145:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 uloc_toUnicodeLocaleType_76_godot(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  char local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 != (char *)0x0) && (*param_1 != '\0')) && (param_2 != (char *)0x0)) &&
     (*param_2 != '\0')) {
    sVar1 = strlen(param_2);
    sVar2 = strlen(param_1);
    ulocimp_toBcpTypeWithFallback_76_godot(auStack_38,sVar2,param_1,sVar1,param_2);
    if (local_28 != '\0') goto LAB_00102202;
  }
  local_30 = 0;
LAB_00102202:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_30;
}



/* ulocimp_toLegacyKeyWithFallback_76_godot(std::basic_string_view<char, std::char_traits<char> >)
    */

long * ulocimp_toLegacyKeyWithFallback_76_godot(long *param_1,long param_2,char *param_3)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  long local_58;
  long lStack_50;
  char local_48;
  undefined7 uStack_47;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ulocimp_toLegacyKey_76_godot(&local_58);
  if (local_48 == '\0') {
    lVar2 = param_2;
    pcVar3 = param_3;
    if (0 < param_2 >> 2) {
      do {
        cVar1 = (anonymous_namespace)::UPRV_ISALPHANUM(*pcVar3);
        if (cVar1 == '\0') goto LAB_00102308;
        cVar1 = (anonymous_namespace)::UPRV_ISALPHANUM(pcVar3[1]);
        if (cVar1 == '\0') {
          pcVar3 = pcVar3 + 1;
          goto LAB_00102308;
        }
        cVar1 = (anonymous_namespace)::UPRV_ISALPHANUM(pcVar3[2]);
        if (cVar1 == '\0') {
          pcVar3 = pcVar3 + 2;
          goto LAB_00102308;
        }
        cVar1 = (anonymous_namespace)::UPRV_ISALPHANUM(pcVar3[3]);
        if (cVar1 == '\0') {
          pcVar3 = pcVar3 + 3;
          goto LAB_00102308;
        }
        pcVar3 = pcVar3 + 4;
      } while (pcVar3 != param_3 + (param_2 >> 2) * 4);
      lVar2 = (long)(param_3 + param_2) - (long)pcVar3;
    }
    if (lVar2 == 2) {
LAB_0010238a:
      cVar1 = (anonymous_namespace)::UPRV_ISALPHANUM(*pcVar3);
      if (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
LAB_00102340:
        cVar1 = (anonymous_namespace)::UPRV_ISALPHANUM(*pcVar3);
        if (cVar1 != '\0') goto LAB_00102311;
      }
LAB_00102308:
      if (param_3 + param_2 != pcVar3) goto LAB_0010225a;
    }
    else {
      if (lVar2 == 3) {
        cVar1 = (anonymous_namespace)::UPRV_ISALPHANUM(*pcVar3);
        if (cVar1 != '\0') {
          pcVar3 = pcVar3 + 1;
          goto LAB_0010238a;
        }
        goto LAB_00102308;
      }
      if (lVar2 == 1) goto LAB_00102340;
    }
LAB_00102311:
    *param_1 = param_2;
    param_1[1] = (long)param_3;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
LAB_0010225a:
    param_1[2] = CONCAT71(uStack_47,local_48);
    *param_1 = local_58;
    param_1[1] = lStack_50;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



undefined8 uloc_toLegacyKey_76_godot(char *param_1)

{
  size_t sVar1;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined8 local_20;
  char local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    sVar1 = strlen(param_1);
    ulocimp_toLegacyKeyWithFallback_76_godot(auStack_28,sVar1,param_1);
    if (local_18 != '\0') goto LAB_00102402;
  }
  local_20 = 0;
LAB_00102402:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_20;
}



/* ulocimp_toLegacyTypeWithFallback_76_godot(std::basic_string_view<char, std::char_traits<char> >,
   std::basic_string_view<char, std::char_traits<char> >) */

long * ulocimp_toLegacyTypeWithFallback_76_godot
                 (long *param_1,undefined8 param_2,undefined8 param_3,long param_4,byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_58;
  long lStack_50;
  char local_48;
  undefined7 uStack_47;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ulocimp_toLegacyType_76_godot(&local_58);
  if ((local_48 == '\0') && (pbVar1 = param_5 + param_4, pbVar1 != param_5)) {
    iVar5 = 0;
    pbVar4 = param_5;
    do {
      while( true ) {
        bVar2 = *pbVar4;
        if ((byte)(bVar2 - 0x2d) < 0x33) break;
        cVar3 = uprv_isASCIILetter_76_godot((int)(char)bVar2);
        if (cVar3 == '\0') goto LAB_0010245f;
LAB_00102503:
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + 1;
        if (pbVar1 == pbVar4) goto LAB_00102510;
      }
      if ((0x4000000000005U >> ((ulong)(bVar2 - 0x2d) & 0x3f) & 1) == 0) {
        cVar3 = uprv_isASCIILetter_76_godot((int)(char)bVar2);
        if ((cVar3 != '\0') || ((byte)(bVar2 - 0x30) < 10)) goto LAB_00102503;
        goto LAB_0010245f;
      }
      if (iVar5 == 0) goto LAB_0010245f;
      pbVar4 = pbVar4 + 1;
      iVar5 = 0;
    } while (pbVar1 != pbVar4);
LAB_00102510:
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 2) = 1;
      *param_1 = param_4;
      param_1[1] = (long)param_5;
      goto LAB_00102474;
    }
  }
LAB_0010245f:
  param_1[2] = CONCAT71(uStack_47,local_48);
  *param_1 = local_58;
  param_1[1] = lStack_50;
LAB_00102474:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



undefined8 uloc_toLegacyType_76_godot(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  char local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 != (char *)0x0) && (*param_1 != '\0')) && (param_2 != (char *)0x0)) &&
     (*param_2 != '\0')) {
    sVar1 = strlen(param_2);
    sVar2 = strlen(param_1);
    ulocimp_toLegacyTypeWithFallback_76_godot(auStack_38,sVar2,param_1,sVar1,param_2);
    if (local_28 != '\0') goto LAB_001025d2;
  }
  local_30 = 0;
LAB_001025d2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_30;
}



undefined8 uloc_openKeywords_76_godot(char *param_1,UErrorCode *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_110;
  CharStringByteSink local_108 [16];
  char *local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  int local_c0;
  undefined8 local_b8;
  char local_ac;
  undefined4 local_80;
  long local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (UErrorCode *)0x0) {
    uVar3 = 0;
    goto LAB_00102764;
  }
  uVar3 = 0;
  if (0 < *(int *)param_2) goto LAB_00102764;
  local_f8 = (char *)((long)&local_ec + 1);
  local_f0 = 0x28;
  local_c0 = 0;
  local_ec = 0;
  if (param_1 == (char *)0x0) {
    param_1 = (char *)locale_get_default_76_godot();
  }
  else {
    pcVar2 = strchr(param_1,0x40);
    if (pcVar2 == (char *)0x0) {
      iVar1 = (anonymous_namespace)::getShortestSubtagLength(param_1);
      if (iVar1 == 1) {
        ulocimp_forLanguageTag_76_godot
                  ((char *)&local_78,(int)param_1,(int *)0xffffffff,(UErrorCode *)0x0);
        icu_76_godot::CharString::operator=((CharString *)&local_f8,(CharString *)&local_78);
        if ((char)local_6c != '\0') {
          uprv_free_76_godot(local_78);
        }
        if ((*(int *)param_2 < 1) && (local_c0 != 0)) {
          param_1 = local_f8;
        }
      }
    }
  }
  local_110 = param_1;
  ulocimp_getSubtags_76_godot
            (param_1,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)0x0,&local_110,
             param_2);
  if (*(int *)param_2 < 1) {
    pcVar2 = strchr(local_110,0x40);
    local_110 = pcVar2;
    if (pcVar2 == (char *)0x0) goto LAB_00102790;
    local_70 = 0x28;
    local_78 = (long)&local_6c + 1;
    local_6c = 0;
    local_40 = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(local_108,(CharString *)&local_78);
    ulocimp_getKeywords_76_godot(pcVar2 + 1,'@',(ByteSink *)local_108,false,param_2);
    icu_76_godot::CharString::CharString((CharString *)&local_b8,(CharString *)&local_78);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(local_108);
    if ((char)local_6c != '\0') {
      uprv_free_76_godot(local_78);
    }
    uVar3 = 0;
    if (*(int *)param_2 < 1) {
      uVar3 = uloc_openKeywordList_76_godot_part_0(local_b8,local_80,param_2);
    }
    if (local_ac != '\0') {
      uprv_free_76_godot(local_b8);
    }
  }
  else {
LAB_00102790:
    uVar3 = 0;
  }
  if ((char)local_ec != '\0') {
    uprv_free_76_godot(local_f8);
  }
LAB_00102764:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_setKeywordValue_76_godot(std::basic_string_view<char, std::char_traits<char> >,
   std::basic_string_view<char, std::char_traits<char> >, icu_76_godot::CharString&, UErrorCode&) */

void ulocimp_setKeywordValue_76_godot
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               CharString *param_5,int *param_6)

{
  char *__s;
  char *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  CharStringByteSink local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 < 1) {
    __s = *(char **)param_5;
    pcVar1 = strchr(__s,0x40);
    local_60 = 0;
    if (pcVar1 != (char *)0x0) {
      lVar2 = (long)((int)pcVar1 - (int)__s);
      local_60 = *(int *)(param_5 + 0x38) - lVar2;
      pcVar1 = __s + lVar2;
      icu_76_godot::CharString::truncate((int)param_5);
    }
    icu_76_godot::CharStringByteSink::CharStringByteSink(local_58,param_5);
    ulocimp_setKeywordValue_76_godot(local_60,pcVar1,param_1,param_2,param_3,param_4,local_58);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_getScript_76_godot(char const*, UErrorCode&) */

char * ulocimp_getScript_76_godot(char *param_1,UErrorCode *param_2)

{
  UErrorCode *in_RDX;
  long in_FS_OFFSET;
  CharStringByteSink aCStack_88 [16];
  long local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RDX < 1) {
    local_78 = (long)&local_6c + 1;
    local_70 = 0x28;
    local_40 = 0;
    local_6c = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(aCStack_88,(CharString *)&local_78);
    ulocimp_getSubtags_76_godot
              ((char *)param_2,(ByteSink *)0x0,(ByteSink *)aCStack_88,(ByteSink *)0x0,
               (ByteSink *)0x0,(char **)0x0,in_RDX);
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_78);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(aCStack_88);
    if ((char)local_6c != '\0') {
      uprv_free_76_godot(local_78);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined * uloc_getISO3Country_76_godot(char *param_1)

{
  undefined8 extraout_RDX;
  undefined *puVar1;
  long in_FS_OFFSET;
  UErrorCode *pUVar2;
  int local_bc;
  uint local_b8 [4];
  char *local_a8;
  char local_9c;
  long local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_bc = 0;
  if (param_1 == (char *)0x0) {
    param_1 = (char *)locale_get_default_76_godot();
  }
  local_60 = 0x28;
  local_68 = (long)&local_5c + 1;
  local_5c = 0;
  local_30 = 0;
  icu_76_godot::CharStringByteSink::CharStringByteSink
            ((CharStringByteSink *)local_b8,(CharString *)&local_68);
  pUVar2 = (UErrorCode *)&local_bc;
  ulocimp_getSubtags_76_godot
            (param_1,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)local_b8,(ByteSink *)0x0,
             (char **)0x0,pUVar2);
  icu_76_godot::CharString::CharString((CharString *)&local_a8,(CharString *)&local_68);
  icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)local_b8);
  if ((char)local_5c != '\0') {
    uprv_free_76_godot(local_68,0x102aef,extraout_RDX,pUVar2);
  }
  if ((local_bc < 1) &&
     (local_b8[0] = (anonymous_namespace)::_findIndex
                              ((char **)(anonymous_namespace)::COUNTRIES,local_a8),
     (local_b8[0] & 0xff0000) != 0)) {
    puVar1 = *(undefined **)((anonymous_namespace)::COUNTRIES_3 + (long)(short)local_b8[0] * 8);
  }
  else {
    puVar1 = &_LC7;
  }
  if (local_9c != '\0') {
    uprv_free_76_godot(local_a8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar1;
}



/* ulocimp_getVariant_76_godot(char const*, UErrorCode&) */

char * ulocimp_getVariant_76_godot(char *param_1,UErrorCode *param_2)

{
  UErrorCode *in_RDX;
  long in_FS_OFFSET;
  CharStringByteSink aCStack_88 [16];
  long local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RDX < 1) {
    local_78 = (long)&local_6c + 1;
    local_70 = 0x28;
    local_40 = 0;
    local_6c = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(aCStack_88,(CharString *)&local_78);
    ulocimp_getSubtags_76_godot
              ((char *)param_2,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)0x0,
               (ByteSink *)aCStack_88,(char **)0x0,in_RDX);
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_78);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(aCStack_88);
    if ((char)local_6c != '\0') {
      uprv_free_76_godot(local_78);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_getParent_76_godot(char const*, UErrorCode&) */

char * ulocimp_getParent_76_godot(char *param_1,UErrorCode *param_2)

{
  uint *in_RDX;
  long in_FS_OFFSET;
  CharStringByteSink aCStack_88 [16];
  long local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)*in_RDX < 1) {
    local_78 = (long)&local_6c + 1;
    local_70 = 0x28;
    local_40 = 0;
    local_6c = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(aCStack_88,(CharString *)&local_78);
    if ((int)*in_RDX < 1) {
      ulocimp_getParent_76_godot
                ((char *)param_2,(ByteSink *)aCStack_88,(UErrorCode *)(ulong)*in_RDX);
    }
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_78);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(aCStack_88);
    if ((char)local_6c != '\0') {
      uprv_free_76_godot(local_78);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_getRegion_76_godot(char const*, UErrorCode&) */

char * ulocimp_getRegion_76_godot(char *param_1,UErrorCode *param_2)

{
  UErrorCode *in_RDX;
  long in_FS_OFFSET;
  CharStringByteSink aCStack_88 [16];
  long local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RDX < 1) {
    local_78 = (long)&local_6c + 1;
    local_70 = 0x28;
    local_40 = 0;
    local_6c = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(aCStack_88,(CharString *)&local_78);
    ulocimp_getSubtags_76_godot
              ((char *)param_2,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)aCStack_88,
               (ByteSink *)0x0,(char **)0x0,in_RDX);
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_78);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(aCStack_88);
    if ((char)local_6c != '\0') {
      uprv_free_76_godot(local_78);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_getKeywords_76_godot(char const*, char, bool, UErrorCode&) */

char * ulocimp_getKeywords_76_godot(char *param_1,char param_2,bool param_3,UErrorCode *param_4)

{
  undefined7 in_register_00000031;
  UErrorCode *in_R8;
  long in_FS_OFFSET;
  CharStringByteSink local_98 [16];
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_R8 < 1) {
    local_88 = (long)&local_7c + 1;
    local_7c = 0;
    local_80 = 0x28;
    local_50 = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(local_98,(CharString *)&local_88);
    ulocimp_getKeywords_76_godot
              ((char *)CONCAT71(in_register_00000031,param_2),param_3,(ByteSink *)local_98,
               SUB81(param_4,0),in_R8);
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_88);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(local_98);
    if ((char)local_7c != '\0') {
      uprv_free_76_godot(local_88);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_getKeywordValue_76_godot(char const*, std::basic_string_view<char, std::char_traits<char>
   >, UErrorCode&) */

CharString *
ulocimp_getKeywordValue_76_godot
          (CharString *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int *param_5
          )

{
  long in_FS_OFFSET;
  CharStringByteSink local_98 [16];
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_5 < 1) {
    local_88 = (long)&local_7c + 1;
    local_7c = 0;
    local_80 = 0x28;
    local_50 = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(local_98,(CharString *)&local_88);
    ulocimp_getKeywordValue_76_godot(param_2,param_3,param_4,local_98,param_5);
    icu_76_godot::CharString::CharString(param_1,(CharString *)&local_88);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(local_98);
    if ((char)local_7c != '\0') {
      uprv_free_76_godot(local_88);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0x28;
    *(CharString **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined2 *)(param_1 + 0xc) = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_getSubtags_76_godot(char const*, icu_76_godot::CharString*, icu_76_godot::CharString*,
   icu_76_godot::CharString*, icu_76_godot::CharString*, char const**, UErrorCode&) */

void ulocimp_getSubtags_76_godot
               (char *param_1,CharString *param_2,CharString *param_3,CharString *param_4,
               CharString *param_5,char **param_6,UErrorCode *param_7)

{
  ByteSink *pBVar1;
  ByteSink *pBVar2;
  ByteSink *pBVar3;
  CharStringByteSink *pCVar4;
  long in_FS_OFFSET;
  CharStringByteSink local_b8 [16];
  ulong local_a8;
  CharStringByteSink local_98 [16];
  ulong local_88;
  CharStringByteSink local_78 [16];
  ulong local_68;
  CharStringByteSink local_58 [16];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_7) goto LAB_0010326b;
  local_a8 = 0;
  local_88 = 0;
  local_68 = 0;
  local_48 = 0;
  local_b8[0] = (CharStringByteSink)0x0;
  local_b8[1] = (CharStringByteSink)0x0;
  local_b8[2] = (CharStringByteSink)0x0;
  local_b8[3] = (CharStringByteSink)0x0;
  local_b8[4] = (CharStringByteSink)0x0;
  local_b8[5] = (CharStringByteSink)0x0;
  local_b8[6] = (CharStringByteSink)0x0;
  local_b8[7] = (CharStringByteSink)0x0;
  local_b8[8] = (CharStringByteSink)0x0;
  local_b8[9] = (CharStringByteSink)0x0;
  local_b8[10] = (CharStringByteSink)0x0;
  local_b8[0xb] = (CharStringByteSink)0x0;
  local_b8[0xc] = (CharStringByteSink)0x0;
  local_b8[0xd] = (CharStringByteSink)0x0;
  local_b8[0xe] = (CharStringByteSink)0x0;
  local_b8[0xf] = (CharStringByteSink)0x0;
  local_98[0] = (CharStringByteSink)0x0;
  local_98[1] = (CharStringByteSink)0x0;
  local_98[2] = (CharStringByteSink)0x0;
  local_98[3] = (CharStringByteSink)0x0;
  local_98[4] = (CharStringByteSink)0x0;
  local_98[5] = (CharStringByteSink)0x0;
  local_98[6] = (CharStringByteSink)0x0;
  local_98[7] = (CharStringByteSink)0x0;
  local_98[8] = (CharStringByteSink)0x0;
  local_98[9] = (CharStringByteSink)0x0;
  local_98[10] = (CharStringByteSink)0x0;
  local_98[0xb] = (CharStringByteSink)0x0;
  local_98[0xc] = (CharStringByteSink)0x0;
  local_98[0xd] = (CharStringByteSink)0x0;
  local_98[0xe] = (CharStringByteSink)0x0;
  local_98[0xf] = (CharStringByteSink)0x0;
  local_78[0] = (CharStringByteSink)0x0;
  local_78[1] = (CharStringByteSink)0x0;
  local_78[2] = (CharStringByteSink)0x0;
  local_78[3] = (CharStringByteSink)0x0;
  local_78[4] = (CharStringByteSink)0x0;
  local_78[5] = (CharStringByteSink)0x0;
  local_78[6] = (CharStringByteSink)0x0;
  local_78[7] = (CharStringByteSink)0x0;
  local_78[8] = (CharStringByteSink)0x0;
  local_78[9] = (CharStringByteSink)0x0;
  local_78[10] = (CharStringByteSink)0x0;
  local_78[0xb] = (CharStringByteSink)0x0;
  local_78[0xc] = (CharStringByteSink)0x0;
  local_78[0xd] = (CharStringByteSink)0x0;
  local_78[0xe] = (CharStringByteSink)0x0;
  local_78[0xf] = (CharStringByteSink)0x0;
  local_58[0] = (CharStringByteSink)0x0;
  local_58[1] = (CharStringByteSink)0x0;
  local_58[2] = (CharStringByteSink)0x0;
  local_58[3] = (CharStringByteSink)0x0;
  local_58[4] = (CharStringByteSink)0x0;
  local_58[5] = (CharStringByteSink)0x0;
  local_58[6] = (CharStringByteSink)0x0;
  local_58[7] = (CharStringByteSink)0x0;
  local_58[8] = (CharStringByteSink)0x0;
  local_58[9] = (CharStringByteSink)0x0;
  local_58[10] = (CharStringByteSink)0x0;
  local_58[0xb] = (CharStringByteSink)0x0;
  local_58[0xc] = (CharStringByteSink)0x0;
  local_58[0xd] = (CharStringByteSink)0x0;
  local_58[0xe] = (CharStringByteSink)0x0;
  local_58[0xf] = (CharStringByteSink)0x0;
  if (param_2 != (CharString *)0x0) {
    icu_76_godot::CharStringByteSink::CharStringByteSink(local_b8,param_2);
    local_a8 = CONCAT71(local_a8._1_7_,1);
  }
  if (param_3 != (CharString *)0x0) {
    if ((char)local_88 != '\0') {
      local_88 = local_88 & 0xffffffffffffff00;
      icu_76_godot::CharStringByteSink::~CharStringByteSink(local_98);
    }
    icu_76_godot::CharStringByteSink::CharStringByteSink(local_98,param_3);
    local_88 = CONCAT71(local_88._1_7_,1);
  }
  if (param_4 != (CharString *)0x0) {
    if ((char)local_68 != '\0') {
      local_68 = local_68 & 0xffffffffffffff00;
      icu_76_godot::CharStringByteSink::~CharStringByteSink(local_78);
    }
    icu_76_godot::CharStringByteSink::CharStringByteSink(local_78,param_4);
    local_68 = CONCAT71(local_68._1_7_,1);
  }
  if (param_5 == (CharString *)0x0) {
    pBVar3 = (ByteSink *)0x0;
    if ((char)local_48 != '\0') goto LAB_001031f2;
  }
  else {
    if ((char)local_48 != '\0') {
      local_48 = local_48 & 0xffffffffffffff00;
      icu_76_godot::CharStringByteSink::~CharStringByteSink(local_58);
    }
    icu_76_godot::CharStringByteSink::CharStringByteSink(local_58,param_5);
    local_48 = CONCAT71(local_48._1_7_,1);
LAB_001031f2:
    pBVar3 = (ByteSink *)local_58;
  }
  pBVar1 = (ByteSink *)0x0;
  if ((char)local_68 != '\0') {
    pBVar1 = (ByteSink *)local_78;
  }
  pBVar2 = (ByteSink *)0x0;
  if ((char)local_88 != '\0') {
    pBVar2 = (ByteSink *)local_98;
  }
  pCVar4 = (CharStringByteSink *)0x0;
  if ((char)local_a8 != '\0') {
    pCVar4 = local_b8;
  }
  ulocimp_getSubtags_76_godot(param_1,(ByteSink *)pCVar4,pBVar2,pBVar1,pBVar3,param_6,param_7);
  if ((char)local_48 != '\0') {
    local_48 = local_48 & 0xffffffffffffff00;
    icu_76_godot::CharStringByteSink::~CharStringByteSink(local_58);
  }
  if ((char)local_68 != '\0') {
    local_68 = local_68 & 0xffffffffffffff00;
    icu_76_godot::CharStringByteSink::~CharStringByteSink(local_78);
  }
  if ((char)local_88 != '\0') {
    local_88 = local_88 & 0xffffffffffffff00;
    icu_76_godot::CharStringByteSink::~CharStringByteSink(local_98);
  }
  if ((char)local_a8 != '\0') {
    local_a8 = local_a8 & 0xffffffffffffff00;
    icu_76_godot::CharStringByteSink::~CharStringByteSink(local_b8);
  }
LAB_0010326b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* (anonymous namespace)::_canonicalize(char const*, icu_76_godot::ByteSink&, unsigned int,
   UErrorCode&) */

void (anonymous_namespace)::_canonicalize
               (char *param_1,ByteSink *param_2,uint param_3,UErrorCode *param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  undefined **ppuVar9;
  size_t sVar10;
  int iVar11;
  long in_FS_OFFSET;
  char *local_218;
  char *local_210;
  char *local_1f0;
  void *local_1e8;
  int local_1e0;
  int local_1d8 [2];
  uint local_1d0;
  char *local_1c8;
  undefined4 local_1c0;
  undefined2 local_1bc;
  int local_190;
  char *local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined4 local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined2 local_13c;
  int local_110;
  long local_108;
  undefined4 local_100;
  undefined2 local_fc;
  uint local_d0;
  long local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  uint local_90;
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  uint local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_4) goto LAB_0010366d;
  local_1c8 = (char *)((long)&local_1bc + 1);
  local_188 = (char *)((long)&local_17c + 1);
  local_1c0 = 0x28;
  local_190 = 0;
  local_1bc = 0;
  local_180 = 0x28;
  local_150 = 0;
  local_17c = 0;
  if (param_1 == (char *)0x0) {
    param_1 = (char *)locale_get_default_76_godot();
  }
  else {
    pcVar5 = strchr(param_1,0x40);
    if ((pcVar5 == (char *)0x0) && (iVar4 = getShortestSubtagLength(param_1), iVar4 == 1)) {
      pcVar5 = strchr(param_1,0x5f);
      if ((pcVar5 != (char *)0x0) &&
         (((param_1[1] != '-' && (param_1[1] != '_')) &&
          (icu_76_godot::CharString::append
                     ((char *)&local_188,(int)param_1,(UErrorCode *)0xffffffff), *(int *)param_4 < 1
          )))) {
        cVar7 = *local_188;
        pcVar5 = local_188;
        while (param_1 = local_188, cVar7 != '\0') {
          if (cVar7 == '_') {
            *pcVar5 = '-';
          }
          pcVar6 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          cVar7 = *pcVar6;
        }
      }
      ulocimp_forLanguageTag_76_godot
                ((char *)&local_88,(int)param_1,(int *)0xffffffff,(UErrorCode *)0x0);
      icu_76_godot::CharString::operator=((CharString *)&local_1c8,(CharString *)&local_88);
      if ((char)local_7c != '\0') {
        uprv_free_76_godot(local_88);
      }
      if ((*(int *)param_4 < 1) && (local_190 != 0)) {
        param_1 = local_1c8;
      }
    }
  }
  local_148 = (undefined1 *)((long)&local_13c + 1);
  local_140 = 0x28;
  local_108 = (long)&local_fc + 1;
  local_c8 = (long)&local_bc + 1;
  local_bc = 0;
  local_88 = (long)&local_7c + 1;
  local_110 = 0;
  local_13c = 0;
  local_100 = 0x28;
  local_d0 = 0;
  local_fc = 0;
  local_c0 = 0x28;
  local_90 = 0;
  local_80 = 0x28;
  local_50 = 0;
  local_7c = 0;
  local_1f0 = param_1;
  ulocimp_getSubtags_76_godot
            (param_1,(CharString *)&local_148,(CharString *)&local_108,(CharString *)&local_c8,
             (CharString *)&local_88,&local_1f0,param_4);
  if (*(int *)param_4 < 1) {
    cVar7 = (char)(CharString *)&local_148;
    if ((local_110 == 9) && (iVar4 = strncmp(param_1,i_default,9), iVar4 == 0)) {
      local_110 = 0;
      *local_148 = 0;
      pcVar5 = (char *)locale_get_default_76_godot();
      icu_76_godot::StringPiece::StringPiece((StringPiece *)local_1d8,pcVar5);
      icu_76_godot::CharString::append
                ((char *)&local_148,local_1d8[0],(UErrorCode *)(ulong)local_1d0);
      uVar8 = 0;
LAB_00103564:
      if ((param_3 & 1) != 0) goto LAB_0010374f;
LAB_00103573:
      pcVar5 = local_1f0;
      if (*local_1f0 == '.') {
        pcVar5 = local_1f0 + 1;
        icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x2e);
        local_1f0 = pcVar5;
        pcVar6 = strchr(pcVar5,0x40);
        if (pcVar6 == (char *)0x0) {
          sVar10 = strlen(pcVar5);
        }
        else {
          sVar10 = (long)pcVar6 - (long)pcVar5;
        }
        if (0x40 < sVar10) {
          *(undefined4 *)param_4 = 1;
          goto LAB_00103620;
        }
        icu_76_godot::CharString::append
                  ((char *)&local_148,(int)pcVar5,(UErrorCode *)(sVar10 & 0xffffffff));
        pcVar5 = pcVar5 + sVar10;
      }
      pcVar5 = strchr(pcVar5,0x40);
      local_1f0 = pcVar5;
      if (pcVar5 == (char *)0x0) {
LAB_00103a6d:
        (**(code **)(*(long *)param_2 + 0x10))(param_2,local_148,local_110);
        goto LAB_00103620;
      }
      local_218 = strchr(pcVar5,0x3d);
      local_210 = strchr(pcVar5,0x3b);
      iVar4 = local_110;
      if (local_218 == (char *)0x0) {
        cVar1 = *pcVar5;
        while (cVar1 != '\0') {
          pcVar5 = pcVar5 + 1;
          icu_76_godot::CharString::append(cVar7,(UErrorCode *)(ulong)(uint)(int)cVar1);
          local_1f0 = pcVar5;
          cVar1 = *pcVar5;
        }
        goto LAB_00103a6d;
      }
    }
    else {
      uVar8 = local_d0;
      if (local_d0 != 0) {
        uVar8 = 1;
        icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x5f);
        icu_76_godot::CharString::append
                  ((char *)&local_148,(int)local_108,(UErrorCode *)(ulong)local_d0);
      }
      if (local_90 != 0) {
        icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x5f);
        icu_76_godot::CharString::append
                  ((char *)&local_148,(int)local_c8,(UErrorCode *)(ulong)local_90);
        if (local_50 != 0) {
          uVar8 = uVar8 + 2;
          if (local_90 == 0) goto LAB_00103b9c;
          goto LAB_00103716;
        }
        uVar8 = uVar8 + 1;
        goto LAB_00103564;
      }
      if (local_50 == 0) goto LAB_00103564;
      uVar8 = uVar8 + 1;
LAB_00103b9c:
      icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x5f);
LAB_00103716:
      icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x5f);
      icu_76_godot::CharString::append
                ((char *)&local_148,(int)local_88,(UErrorCode *)(ulong)local_50);
      if ((param_3 & 1) == 0) goto LAB_00103573;
LAB_0010374f:
      pcVar5 = strchr(local_1f0,0x40);
      local_1f0 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        local_210 = (char *)0x0;
        local_218 = (char *)0x0;
      }
      else {
        local_218 = strchr(pcVar5,0x3d);
        local_210 = strchr(pcVar5,0x3b);
        if (local_218 == (char *)0x0) {
          if ((int)uVar8 < 2) {
            icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x5f);
            if (uVar8 == 0) goto LAB_00103cb1;
          }
          else if ((uVar8 == 2) && (local_d0 != 0)) {
LAB_00103cb1:
            icu_76_godot::CharString::append(cVar7,(UErrorCode *)0x5f);
          }
          icu_76_godot::CharStringByteSink::CharStringByteSink
                    ((CharStringByteSink *)local_1d8,(CharString *)&local_148);
          if ((0 < *(int *)param_4) ||
             (_getVariant(pcVar5 + 1,'@',(ByteSink *)local_1d8,(char **)0x0,local_50 != 0,param_4),
             0 < *(int *)param_4)) {
            icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)local_1d8);
            goto LAB_00103620;
          }
          icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)local_1d8);
        }
      }
      ppuVar9 = &CANONICALIZE_MAP;
      iVar11 = 0;
      do {
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_1e8,*ppuVar9);
        iVar4 = local_110;
        puVar2 = local_148;
        if (local_1e0 == local_110) {
          if (local_110 == 0) {
            if (pcVar5 != (char *)0x0) break;
          }
          else {
            iVar3 = memcmp(local_148,local_1e8,(long)local_110);
            if (iVar3 != 0) goto LAB_001037c0;
          }
          local_110 = 0;
          *puVar2 = 0;
          icu_76_godot::StringPiece::StringPiece
                    ((StringPiece *)local_1d8,(&PTR_DAT_001067a8)[(long)iVar11 * 2]);
          icu_76_godot::CharString::append
                    ((char *)&local_148,local_1d8[0],(UErrorCode *)(ulong)local_1d0);
          iVar4 = local_110;
          break;
        }
LAB_001037c0:
        iVar11 = iVar11 + 1;
        ppuVar9 = ppuVar9 + 2;
      } while (iVar11 != 10);
    }
    (**(code **)(*(long *)param_2 + 0x10))(param_2,local_148,iVar4);
    pcVar5 = local_1f0;
    if (((((param_3 & 2) == 0) && (local_1f0 != (char *)0x0)) && (local_218 != (char *)0x0)) &&
       ((local_210 == (char *)0x0 || (local_218 < local_210)))) {
      (**(code **)(*(long *)param_2 + 0x10))(param_2,&_LC8,1);
      ulocimp_getKeywords_76_godot(pcVar5 + 1,'@',param_2,true,param_4);
    }
  }
LAB_00103620:
  if ((char)local_7c == '\0') {
    if ((char)local_bc != '\0') goto LAB_00103883;
LAB_0010363c:
    if ((char)local_fc != '\0') goto LAB_0010389e;
LAB_0010364a:
    if ((char)local_13c != '\0') goto LAB_001038b9;
LAB_00103658:
  }
  else {
    uprv_free_76_godot(local_88);
    if ((char)local_bc == '\0') goto LAB_0010363c;
LAB_00103883:
    uprv_free_76_godot(local_c8);
    if ((char)local_fc == '\0') goto LAB_0010364a;
LAB_0010389e:
    uprv_free_76_godot(local_108);
    if ((char)local_13c == '\0') goto LAB_00103658;
LAB_001038b9:
    uprv_free_76_godot(local_148);
  }
  if ((char)local_17c != '\0') {
    uprv_free_76_godot(local_188);
  }
  if ((char)local_1bc != '\0') {
    uprv_free_76_godot(local_1c8);
  }
LAB_0010366d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ulocimp_getName_76_godot(char const*, icu_76_godot::ByteSink&, UErrorCode&) */

void ulocimp_getName_76_godot(char *param_1,ByteSink *param_2,UErrorCode *param_3)

{
  (anonymous_namespace)::_canonicalize(param_1,param_2,0,param_3);
  return;
}



/* ulocimp_getBaseName_76_godot(char const*, icu_76_godot::ByteSink&, UErrorCode&) */

void ulocimp_getBaseName_76_godot(char *param_1,ByteSink *param_2,UErrorCode *param_3)

{
  (anonymous_namespace)::_canonicalize(param_1,param_2,2,param_3);
  return;
}



/* ulocimp_canonicalize_76_godot(char const*, icu_76_godot::ByteSink&, UErrorCode&) */

void ulocimp_canonicalize_76_godot(char *param_1,ByteSink *param_2,UErrorCode *param_3)

{
  (anonymous_namespace)::_canonicalize(param_1,param_2,1,param_3);
  return;
}



/* ulocimp_getName_76_godot(char const*, UErrorCode&) */

char * ulocimp_getName_76_godot(char *param_1,UErrorCode *param_2)

{
  UErrorCode *in_RDX;
  long in_FS_OFFSET;
  CharStringByteSink aCStack_88 [16];
  long local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RDX < 1) {
    local_78 = (long)&local_6c + 1;
    local_6c = 0;
    local_70 = 0x28;
    local_40 = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(aCStack_88,(CharString *)&local_78);
    (anonymous_namespace)::_canonicalize((char *)param_2,(ByteSink *)aCStack_88,0,in_RDX);
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_78);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(aCStack_88);
    if ((char)local_6c != '\0') {
      uprv_free_76_godot(local_78);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong uloc_getLCID_76_godot(char *param_1)

{
  long lVar1;
  size_t sVar2;
  ulong uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  int local_15c;
  CharStringByteSink local_158 [16];
  undefined8 local_148;
  char local_13c;
  undefined8 local_108;
  char local_fc;
  int local_d0;
  undefined8 local_c8;
  char local_bc;
  long local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_15c = 0;
  if (param_1 != (char *)0x0) {
    sVar2 = strlen(param_1);
    if (1 < sVar2) {
      uVar3 = uprv_convertToLCIDPlatform_76_godot(param_1,(UErrorCode *)&local_15c);
      if (local_15c < 1) {
        if ((int)uVar3 != 0) goto LAB_0010402a;
        lVar1 = (long)&local_7c + 1;
        local_7c = 0;
        local_80 = 0x28;
        local_50 = 0;
        local_88 = lVar1;
        icu_76_godot::CharStringByteSink::CharStringByteSink(local_158,(CharString *)&local_88);
        ulocimp_getSubtags_76_godot
                  (param_1,(ByteSink *)local_158,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)0x0,
                   (char **)0x0,(UErrorCode *)&local_15c);
        icu_76_godot::CharString::CharString((CharString *)&local_148,(CharString *)&local_88);
        icu_76_godot::CharStringByteSink::~CharStringByteSink(local_158);
        if ((char)local_7c != '\0') {
          uprv_free_76_godot(local_88);
        }
        uVar3 = uVar3 & 0xffffffff;
        if (local_15c < 1) {
          pcVar4 = strchr(param_1,0x40);
          if (pcVar4 != (char *)0x0) {
            local_7c = 0;
            local_80 = 0x28;
            local_50 = 0;
            local_88 = lVar1;
            icu_76_godot::CharStringByteSink::CharStringByteSink(local_158,(CharString *)&local_88);
            ulocimp_getKeywordValue_76_godot
                      (param_1,9,"collation",local_158,(UErrorCode *)&local_15c);
            icu_76_godot::CharString::CharString((CharString *)&local_108,(CharString *)&local_88);
            icu_76_godot::CharStringByteSink::~CharStringByteSink(local_158);
            if ((char)local_7c != '\0') {
              uprv_free_76_godot(local_88);
            }
            if ((local_15c < 1) && (local_d0 != 0)) {
              local_7c = 0;
              local_80 = 0x28;
              local_50 = 0;
              local_88 = lVar1;
              icu_76_godot::CharStringByteSink::CharStringByteSink
                        (local_158,(CharString *)&local_88);
              (anonymous_namespace)::_canonicalize
                        (param_1,(ByteSink *)local_158,2,(UErrorCode *)&local_15c);
              icu_76_godot::CharString::CharString((CharString *)&local_c8,(CharString *)&local_88);
              icu_76_godot::CharStringByteSink::~CharStringByteSink(local_158);
              if ((char)local_7c != '\0') {
                uprv_free_76_godot(local_88);
              }
              ulocimp_setKeywordValue_76_godot
                        (9,"collation",(long)local_d0,local_108,(CharString *)&local_c8,
                         (UErrorCode *)&local_15c);
              if (local_15c < 1) {
                uVar3 = uprv_convertToLCID_76_godot(local_148,local_c8,(UErrorCode *)&local_15c);
                if (local_bc != '\0') {
                  uprv_free_76_godot(local_c8);
                  uVar3 = uVar3 & 0xffffffff;
                }
                if (local_fc != '\0') {
                  uprv_free_76_godot(local_108);
                  uVar3 = uVar3 & 0xffffffff;
                }
                goto LAB_00104006;
              }
              if (local_bc != '\0') {
                uprv_free_76_godot(local_c8);
              }
            }
            local_15c = 0;
            if (local_fc != '\0') {
              uprv_free_76_godot(local_108);
            }
          }
          uVar3 = uprv_convertToLCID_76_godot(local_148,param_1,(UErrorCode *)&local_15c);
        }
LAB_00104006:
        if (local_13c != '\0') {
          uprv_free_76_godot(local_148);
          uVar3 = uVar3 & 0xffffffff;
        }
        goto LAB_0010402a;
      }
    }
  }
  uVar3 = 0;
LAB_0010402a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_canonicalize_76_godot(char const*, UErrorCode&) */

char * ulocimp_canonicalize_76_godot(char *param_1,UErrorCode *param_2)

{
  UErrorCode *in_RDX;
  long in_FS_OFFSET;
  CharStringByteSink aCStack_88 [16];
  long local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RDX < 1) {
    local_78 = (long)&local_6c + 1;
    local_6c = 0;
    local_70 = 0x28;
    local_40 = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(aCStack_88,(CharString *)&local_78);
    (anonymous_namespace)::_canonicalize((char *)param_2,(ByteSink *)aCStack_88,1,in_RDX);
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_78);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(aCStack_88);
    if ((char)local_6c != '\0') {
      uprv_free_76_godot(local_78);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_getBaseName_76_godot(char const*, UErrorCode&) */

char * ulocimp_getBaseName_76_godot(char *param_1,UErrorCode *param_2)

{
  UErrorCode *in_RDX;
  long in_FS_OFFSET;
  CharStringByteSink aCStack_88 [16];
  long local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RDX < 1) {
    local_78 = (long)&local_6c + 1;
    local_6c = 0;
    local_70 = 0x28;
    local_40 = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(aCStack_88,(CharString *)&local_78);
    (anonymous_namespace)::_canonicalize((char *)param_2,(ByteSink *)aCStack_88,2,in_RDX);
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_78);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(aCStack_88);
    if ((char)local_6c != '\0') {
      uprv_free_76_godot(local_78);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ulocimp_getLanguage_76_godot(char const*, UErrorCode&) */

char * ulocimp_getLanguage_76_godot(char *param_1,UErrorCode *param_2)

{
  UErrorCode *in_RDX;
  long in_FS_OFFSET;
  CharStringByteSink aCStack_88 [16];
  long local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RDX < 1) {
    local_78 = (long)&local_6c + 1;
    local_70 = 0x28;
    local_40 = 0;
    local_6c = 0;
    icu_76_godot::CharStringByteSink::CharStringByteSink(aCStack_88,(CharString *)&local_78);
    ulocimp_getSubtags_76_godot
              ((char *)param_2,(ByteSink *)aCStack_88,(ByteSink *)0x0,(ByteSink *)0x0,
               (ByteSink *)0x0,(char **)0x0,in_RDX);
    icu_76_godot::CharString::CharString((CharString *)param_1,(CharString *)&local_78);
    icu_76_godot::CharStringByteSink::~CharStringByteSink(aCStack_88);
    if ((char)local_6c != '\0') {
      uprv_free_76_godot(local_78);
    }
  }
  else {
    param_1[8] = '(';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(char **)param_1 = param_1 + 0xd;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined * uloc_getISO3Language_76_godot(char *param_1)

{
  undefined8 extraout_RDX;
  undefined *puVar1;
  long in_FS_OFFSET;
  UErrorCode *pUVar2;
  int local_bc;
  uint local_b8 [4];
  char *local_a8;
  char local_9c;
  long local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_bc = 0;
  if (param_1 == (char *)0x0) {
    param_1 = (char *)locale_get_default_76_godot();
  }
  local_60 = 0x28;
  local_68 = (long)&local_5c + 1;
  local_5c = 0;
  local_30 = 0;
  icu_76_godot::CharStringByteSink::CharStringByteSink
            ((CharStringByteSink *)local_b8,(CharString *)&local_68);
  pUVar2 = (UErrorCode *)&local_bc;
  ulocimp_getSubtags_76_godot
            (param_1,(ByteSink *)local_b8,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)0x0,
             (char **)0x0,pUVar2);
  icu_76_godot::CharString::CharString((CharString *)&local_a8,(CharString *)&local_68);
  icu_76_godot::CharStringByteSink::~CharStringByteSink((CharStringByteSink *)local_b8);
  if ((char)local_5c != '\0') {
    uprv_free_76_godot(local_68,0x10452f,extraout_RDX,pUVar2);
  }
  if ((local_bc < 1) &&
     (local_b8[0] = (anonymous_namespace)::_findIndex
                              ((char **)(anonymous_namespace)::LANGUAGES,local_a8),
     (local_b8[0] & 0xff0000) != 0)) {
    puVar1 = *(undefined **)((anonymous_namespace)::LANGUAGES_3 + (long)(short)local_b8[0] * 8);
  }
  else {
    puVar1 = &_LC7;
  }
  if (local_9c != '\0') {
    uprv_free_76_godot(local_a8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar1;
}



undefined4
uloc_getKeywordValue_76_godot
          (undefined8 param_1,char *param_2,char *param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  CheckedArrayByteSink local_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_5 < 1) {
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(local_68,param_3,param_4);
      sVar2 = strlen(param_2);
      ulocimp_getKeywordValue_76_godot(param_1,sVar2,param_2,local_68,param_5);
      uVar1 = 0;
      if (*param_5 < 1) {
        if (local_4c == '\0') {
          uVar1 = u_terminateChars_76_godot(param_3,param_4,local_50,param_5);
        }
        else {
          *param_5 = 0xf;
          uVar1 = local_50;
        }
      }
      icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_68);
      goto LAB_001046d0;
    }
    *param_5 = 1;
  }
  uVar1 = 0;
LAB_001046d0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int uloc_setKeywordValue_76_godot
              (char *param_1,char *param_2,char *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *__s;
  size_t sVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  size_t local_80;
  char *local_78;
  CheckedArrayByteSink local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_5 < 1) {
    if (((param_1 != (char *)0x0) && (*param_1 != '\0')) && (1 < param_4)) {
      sVar3 = strlen(param_3);
      iVar1 = (int)sVar3;
      if (iVar1 <= param_4) {
        __s = strchr(param_3,0x40);
        if (__s == (char *)0x0) {
          pcVar5 = param_3 + iVar1;
        }
        else {
          iVar1 = (int)__s - (int)param_3;
          pcVar5 = __s;
        }
        icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink
                  (local_68,pcVar5,(param_4 - iVar1) + -1);
        if (param_2 == (char *)0x0) {
          local_80 = 0;
          local_78 = (char *)0x0;
        }
        else {
          local_80 = strlen(param_2);
          local_78 = param_2;
        }
        sVar3 = strlen(param_1);
        sVar4 = 0;
        pcVar5 = (char *)0x0;
        if (__s != (char *)0x0) {
          sVar4 = strlen(__s);
          pcVar5 = __s;
        }
        iVar2 = ulocimp_setKeywordValue_76_godot
                          (sVar4,pcVar5,sVar3,param_1,local_80,local_78,local_68,param_5);
        if (*param_5 < 1) {
          iVar2 = u_terminateChars_76_godot(param_3,param_4,iVar1 + iVar2,param_5);
        }
        else {
          iVar2 = iVar2 + iVar1;
          if (*param_5 != 0xf) {
            iVar2 = 0;
          }
        }
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_68);
        goto LAB_00104859;
      }
    }
    *param_5 = 1;
  }
  iVar2 = 0;
LAB_00104859:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uloc_getParent_76_godot(char *param_1,char *param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  CheckedArrayByteSink aCStack_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < (int)*param_4) goto LAB_001048fd;
  icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(aCStack_68,param_2,param_3);
  if ((int)*param_4 < 1) {
    ulocimp_getParent_76_godot(param_1,(ByteSink *)aCStack_68,(UErrorCode *)(ulong)*param_4);
    if (0 < (int)*param_4) goto LAB_00104990;
    if (local_4c == '\0') {
      uVar1 = u_terminateChars_76_godot(param_2,param_3,local_50,param_4);
    }
    else {
      *param_4 = 0xf;
      uVar1 = local_50;
    }
  }
  else {
LAB_00104990:
    uVar1 = 0;
  }
  icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
LAB_001048fd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uloc_getLanguage_76_godot(char *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  CheckedArrayByteSink aCStack_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(aCStack_68,param_2,param_3);
    ulocimp_getSubtags_76_godot
              (param_1,(ByteSink *)aCStack_68,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)0x0,
               (char **)0x0,param_4);
    if (*(int *)param_4 < 1) {
      if (local_4c == '\0') {
        uVar1 = u_terminateChars_76_godot(param_2,param_3,local_50,param_4);
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
        goto LAB_001049cd;
      }
      *(undefined4 *)param_4 = 0xf;
      uVar1 = local_50;
    }
    icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
  }
LAB_001049cd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uloc_getScript_76_godot(char *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  CheckedArrayByteSink aCStack_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(aCStack_68,param_2,param_3);
    ulocimp_getSubtags_76_godot
              (param_1,(ByteSink *)0x0,(ByteSink *)aCStack_68,(ByteSink *)0x0,(ByteSink *)0x0,
               (char **)0x0,param_4);
    if (*(int *)param_4 < 1) {
      if (local_4c == '\0') {
        uVar1 = u_terminateChars_76_godot(param_2,param_3,local_50,param_4);
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
        goto LAB_00104aad;
      }
      *(undefined4 *)param_4 = 0xf;
      uVar1 = local_50;
    }
    icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
  }
LAB_00104aad:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uloc_getCountry_76_godot(char *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  CheckedArrayByteSink aCStack_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(aCStack_68,param_2,param_3);
    ulocimp_getSubtags_76_godot
              (param_1,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)aCStack_68,(ByteSink *)0x0,
               (char **)0x0,param_4);
    if (*(int *)param_4 < 1) {
      if (local_4c == '\0') {
        uVar1 = u_terminateChars_76_godot(param_2,param_3,local_50,param_4);
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
        goto LAB_00104b8d;
      }
      *(undefined4 *)param_4 = 0xf;
      uVar1 = local_50;
    }
    icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
  }
LAB_00104b8d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uloc_getVariant_76_godot(char *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  CheckedArrayByteSink aCStack_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(aCStack_68,param_2,param_3);
    ulocimp_getSubtags_76_godot
              (param_1,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)0x0,(ByteSink *)aCStack_68,
               (char **)0x0,param_4);
    if (*(int *)param_4 < 1) {
      if (local_4c == '\0') {
        uVar1 = u_terminateChars_76_godot(param_2,param_3,local_50,param_4);
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
        goto LAB_00104c6d;
      }
      *(undefined4 *)param_4 = 0xf;
      uVar1 = local_50;
    }
    icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
  }
LAB_00104c6d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uloc_getName_76_godot(char *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  CheckedArrayByteSink aCStack_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(aCStack_68,param_2,param_3);
    (anonymous_namespace)::_canonicalize(param_1,(ByteSink *)aCStack_68,0,param_4);
    if (*(int *)param_4 < 1) {
      if (local_4c == '\0') {
        uVar1 = u_terminateChars_76_godot(param_2,param_3,local_50,param_4);
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
        goto LAB_00104d4d;
      }
      *(undefined4 *)param_4 = 0xf;
      uVar1 = local_50;
    }
    icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
  }
LAB_00104d4d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uloc_getBaseName_76_godot(char *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  CheckedArrayByteSink aCStack_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(aCStack_68,param_2,param_3);
    (anonymous_namespace)::_canonicalize(param_1,(ByteSink *)aCStack_68,2,param_4);
    if (*(int *)param_4 < 1) {
      if (local_4c == '\0') {
        uVar1 = u_terminateChars_76_godot(param_2,param_3,local_50,param_4);
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
        goto LAB_00104e1d;
      }
      *(undefined4 *)param_4 = 0xf;
      uVar1 = local_50;
    }
    icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
  }
LAB_00104e1d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uloc_canonicalize_76_godot(char *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  CheckedArrayByteSink aCStack_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(aCStack_68,param_2,param_3);
    (anonymous_namespace)::_canonicalize(param_1,(ByteSink *)aCStack_68,1,param_4);
    if (*(int *)param_4 < 1) {
      if (local_4c == '\0') {
        uVar1 = u_terminateChars_76_godot(param_2,param_3,local_50,param_4);
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
        goto LAB_00104eed;
      }
      *(undefined4 *)param_4 = 0xf;
      uVar1 = local_50;
    }
    icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(aCStack_68);
  }
LAB_00104eed:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,int param_1,int param_3)

{
  long lVar1;
  
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  if ((0x28 < param_1) && (param_3 < 1)) {
    lVar1 = uprv_malloc_76_godot((long)param_1);
    if (lVar1 != 0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar1;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
    }
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  __src = *(MaybeStackArray **)param_1;
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  *(MaybeStackArray **)this = __src;
  *(int *)(this + 8) = iVar1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return;
  }
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return;
}



/* icu_76_godot::MaybeStackArray<char,
   40>::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::MaybeStackArray<char, 40>&&) */

MaybeStackArray<char,40> * __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator=
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uprv_free_76_godot(*(undefined8 *)this);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  __src = *(MaybeStackArray **)param_1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)this = __src;
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return this;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getCapacity() const */

undefined4 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getCapacity(MaybeStackArray<char,40> *this)

{
  return *(undefined4 *)(this + 8);
}



/* icu_76_godot::MaybeStackArray<char, 40>::getAlias() const */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getAlias(MaybeStackArray<char,40> *this)

{
  return *(undefined8 *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getArrayLimit() const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::getArrayLimit(MaybeStackArray<char,40> *this)

{
  return (long)*(int *)(this + 8) + *(long *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::aliasInstead(char*, int) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::aliasInstead
          (MaybeStackArray<char,40> *this,char *param_1,int param_2)

{
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
      *(char **)this = param_1;
      *(int *)(this + 8) = param_2;
      this[0xc] = (MaybeStackArray<char,40>)0x0;
      return;
    }
    uprv_free_76_godot(*(undefined8 *)this);
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    *(char **)this = param_1;
    *(int *)(this + 8) = param_2;
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resize(int, int) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::resize
          (MaybeStackArray<char,40> *this,int param_1,int param_2)

{
  MaybeStackArray<char,40> MVar1;
  long lVar2;
  
  if (0 < param_1) {
    lVar2 = uprv_malloc_76_godot((long)param_1);
    if (lVar2 != 0) {
      if (param_2 < 1) {
        MVar1 = this[0xc];
      }
      else {
        if (*(int *)(this + 8) < param_2) {
          param_2 = *(int *)(this + 8);
        }
        if (param_1 < param_2) {
          param_2 = param_1;
        }
        __memcpy_chk(lVar2,*(undefined8 *)this,(long)param_2,(long)param_1);
        MVar1 = this[0xc];
      }
      if (MVar1 != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar2;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      return lVar2;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::orphanOrClone(int, int&) */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::orphanOrClone
          (MaybeStackArray<char,40> *this,int param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uVar2 = *(undefined8 *)this;
LAB_001065ef:
    *param_2 = param_1;
    *(MaybeStackArray<char,40> **)this = this + 0xd;
    *(undefined4 *)(this + 8) = 0x28;
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    return uVar2;
  }
  if (0 < param_1) {
    if (*(int *)(this + 8) < param_1) {
      param_1 = *(int *)(this + 8);
    }
    lVar3 = (long)param_1;
    lVar1 = uprv_malloc_76_godot(lVar3);
    if (lVar1 != 0) {
      uVar2 = __memcpy_chk(lVar1,*(undefined8 *)this,lVar3,lVar3);
      goto LAB_001065ef;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::copyFrom(icu_76_godot::MaybeStackArray<char, 40> const&,
   UErrorCode&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::copyFrom
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1,UErrorCode *param_2)

{
  int iVar1;
  void *__src;
  void *__dest;
  
  if (0 < *(int *)param_2) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    __dest = (void *)uprv_malloc_76_godot((long)iVar1);
    if (__dest != (void *)0x0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(void **)this = __dest;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      __src = *(void **)param_1;
      *(int *)(this + 8) = iVar1;
      memcpy(__dest,__src,(long)iVar1);
      return;
    }
  }
  *(undefined4 *)param_2 = 7;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::releaseArray() */

void __thiscall icu_76_godot::MaybeStackArray<char,40>::releaseArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resetToStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::resetToStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


