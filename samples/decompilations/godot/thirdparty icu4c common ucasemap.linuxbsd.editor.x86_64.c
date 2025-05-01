
/* (anonymous namespace)::utf8_caseContextIterator(void*, signed char) */

ulong (anonymous_namespace)::utf8_caseContextIterator(long *param_1,char param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 < '\0') {
    iVar7 = *(int *)((long)param_1 + 0x14);
    *(char *)((long)param_1 + 0x1c) = param_2;
    *(int *)((long)param_1 + 0xc) = iVar7;
LAB_00100051:
    if ((int)param_1[1] < iVar7) {
      *(int *)((long)param_1 + 0xc) = iVar7 + -1;
      bVar3 = *(byte *)(*param_1 + (long)(iVar7 + -1));
      if ((char)bVar3 < '\0') {
        uVar5 = utf8_prevCharSafeBody_76_godot
                          (*param_1,(int)param_1[1],(long)param_1 + 0xc,bVar3,0xffffffff);
        return uVar5;
      }
LAB_00100040:
      return (ulong)bVar3;
    }
  }
  else {
    if (param_2 == '\0') {
      iVar7 = *(int *)((long)param_1 + 0xc);
      if (*(char *)((long)param_1 + 0x1c) < '\0') goto LAB_00100051;
    }
    else {
      iVar7 = (int)param_1[3];
      *(char *)((long)param_1 + 0x1c) = param_2;
      *(int *)((long)param_1 + 0xc) = iVar7;
    }
    iVar1 = (int)param_1[2];
    if (iVar7 < iVar1) {
      lVar2 = *param_1;
      iVar8 = iVar7 + 1;
      *(int *)((long)param_1 + 0xc) = iVar8;
      bVar3 = *(byte *)(lVar2 + iVar7);
      if (-1 < (char)bVar3) goto LAB_00100040;
      if (iVar1 == iVar8) {
        return 0xffffffff;
      }
      uVar4 = (uint)bVar3;
      if (uVar4 < 0xe0) {
        if (uVar4 < 0xc2) {
          return 0xffffffff;
        }
        uVar4 = bVar3 & 0x1f;
      }
      else {
        if (uVar4 < 0xf0) {
          uVar4 = uVar4 & 0xf;
          bVar6 = *(byte *)(lVar2 + iVar8) & 0x3f;
          if (((uint)(int)(char)(&_LC0)[bVar3 & 0xf] >> (*(byte *)(lVar2 + iVar8) >> 5) & 1) == 0) {
            return 0xffffffff;
          }
        }
        else {
          uVar4 = uVar4 - 0xf0;
          if (4 < (int)uVar4) {
            return 0xffffffff;
          }
          bVar3 = *(byte *)(lVar2 + iVar8);
          if (((uint)(int)(char)(&DAT_00102dad)[bVar3 >> 4] >> (uVar4 & 0x1f) & 1) == 0) {
            return 0xffffffff;
          }
          iVar8 = iVar7 + 2;
          *(int *)((long)param_1 + 0xc) = iVar8;
          if (iVar1 == iVar8) {
            return 0xffffffff;
          }
          bVar6 = *(char *)(lVar2 + iVar8) + 0x80;
          if (0x3f < bVar6) {
            return 0xffffffff;
          }
          uVar4 = uVar4 * 0x40 | bVar3 & 0x3f;
        }
        iVar8 = iVar8 + 1;
        *(int *)((long)param_1 + 0xc) = iVar8;
        if (iVar1 == iVar8) {
          return 0xffffffff;
        }
        uVar4 = (uint)bVar6 | uVar4 << 6;
      }
      bVar3 = *(char *)(lVar2 + iVar8) + 0x80;
      if (bVar3 < 0x40) {
        *(int *)((long)param_1 + 0xc) = iVar8 + 1;
        return (ulong)((uint)bVar3 | uVar4 << 6);
      }
    }
  }
  return 0xffffffff;
}



/* (anonymous namespace)::toLower(int, unsigned int, unsigned char const*, UCaseContext*, int, int,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) */

void (anonymous_namespace)::toLower
               (int param_1,uint param_2,uchar *param_3,UCaseContext *param_4,int param_5,
               int param_6,ByteSink *param_7,Edits *param_8,UErrorCode *param_9)

{
  uchar *puVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 *local_60;
  char local_48;
  undefined7 uStack_47;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = &icu_76_godot::LatinCase::TO_LOWER_NORMAL;
  if (param_1 != 1) {
    if (param_1 < 0) {
      local_60 = &icu_76_godot::LatinCase::TO_LOWER_TR_LT;
      if ((param_2 & 7) == 0) {
        local_60 = &icu_76_godot::LatinCase::TO_LOWER_NORMAL;
      }
    }
    else {
      local_60 = &icu_76_godot::LatinCase::TO_LOWER_TR_LT;
      if (1 < param_1 - 2U) {
        local_60 = &icu_76_godot::LatinCase::TO_LOWER_NORMAL;
      }
    }
  }
  plVar6 = (long *)ucase_getTrie_76_godot();
  if ((*(int *)param_9 < 1) && (param_5 < param_6)) {
    local_78 = (long)param_5;
    iVar15 = param_5;
LAB_00100280:
    iVar13 = param_5 + 1;
    bVar7 = param_3[param_5];
    uVar4 = (uint)bVar7;
    puVar1 = param_3 + local_78;
    iVar10 = iVar13;
    if (-1 < (char)bVar7) {
      cVar2 = *(char *)((long)local_60 + (ulong)bVar7);
      if (cVar2 == -0x80) {
LAB_001003a8:
        if (param_1 < 0) {
          iVar5 = ucase_toFullFolding_76_godot(uVar4,&local_48,param_2);
        }
        else {
          *(int *)(param_4 + 0x14) = param_5;
          *(int *)(param_4 + 0x18) = iVar13;
          iVar5 = ucase_toFullLower_76_godot(uVar4,0x100000,param_4,&local_48,param_1);
        }
        iVar10 = iVar13;
        if (iVar5 < 0) goto LAB_001002d0;
        if ((*(int *)param_9 < 1) && (0 < param_5 - iVar15)) {
          icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                    (puVar1,param_5 - iVar15,param_7,param_2,param_8);
        }
        iVar15 = iVar13;
        if (iVar5 < 0x20) {
          icu_76_godot::ByteSinkUtil::appendChange
                    (iVar13 - param_5,(wchar16 *)CONCAT71(uStack_47,local_48),iVar5,param_7,param_8,
                     param_9);
        }
        else {
          icu_76_godot::ByteSinkUtil::appendCodePoint(iVar13 - param_5,iVar5,param_7,param_8);
        }
      }
      else {
        if (cVar2 == '\0') goto LAB_001002d0;
        if (0 < param_5 - iVar15) {
          icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                    (puVar1,param_5 - iVar15,param_7,param_2,param_8);
        }
        local_48 = cVar2 + bVar7;
        (**(code **)(*(long *)param_7 + 0x10))(param_7,&local_48,1);
        iVar15 = iVar13;
        if (param_8 != (Edits *)0x0) {
          icu_76_godot::Edits::addReplace((int)param_8,1);
        }
      }
LAB_00100430:
      local_78 = (long)iVar15;
      iVar10 = iVar15;
LAB_001002d0:
      param_5 = iVar10;
      iVar13 = *(int *)param_9;
      if ((0 < iVar13) || (param_6 <= param_5)) goto LAB_001002e3;
      goto LAB_00100280;
    }
    uVar4 = (uint)bVar7;
    iVar5 = iVar13;
    if (bVar7 < 0xe3) {
      if ((byte)(bVar7 + 0x3e) < 4) {
        if (iVar13 < param_6) {
          lVar11 = (long)iVar13;
          if ((byte)(param_3[lVar11] + 0x80) < 0x40) {
            iVar13 = param_5 + 2;
            uVar4 = (uint)(byte)(param_3[lVar11] + 0x80) | (bVar7 - 0xc0) * 0x40;
            cVar2 = *(char *)((long)local_60 + (long)(int)uVar4);
            if (cVar2 == -0x80) goto LAB_001003a8;
            iVar10 = iVar13;
            if (cVar2 != '\0') {
              if (0 < param_5 - iVar15) {
                icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                          (puVar1,param_5 - iVar15,param_7,param_2,param_8);
              }
              icu_76_godot::ByteSinkUtil::appendTwoBytes((int)cVar2 + uVar4,param_7);
              iVar15 = iVar13;
              if (param_8 != (Edits *)0x0) {
                icu_76_godot::Edits::addReplace((int)param_8,2);
              }
              goto LAB_00100430;
            }
          }
        }
        else {
          if (param_6 == iVar13) goto LAB_00100690;
LAB_0010075e:
          lVar11 = (long)iVar13;
          if ((byte)(param_3[lVar11] + 0x80) < 0x40) {
            iVar13 = param_5 + 2;
            uVar4 = (uint)(byte)(param_3[lVar11] + 0x80) | (uVar4 & 0x1f) << 6;
            lVar11 = *plVar6;
LAB_0010078f:
            iVar10 = (int)uVar4 >> 5;
LAB_00100548:
            lVar12 = (long)(int)((uVar4 & 0x1f) + (uint)*(ushort *)(lVar11 + (long)iVar10 * 2) * 4)
                     * 2;
LAB_0010055d:
            uVar3 = *(ushort *)(lVar11 + lVar12);
            if ((uVar3 & 8) != 0) goto LAB_001003a8;
            iVar10 = iVar13;
            if (((uVar3 & 2) != 0) && ((short)uVar3 >> 7 != 0)) {
              if (0 < param_5 - iVar15) {
                icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                          (puVar1,param_5 - iVar15,param_7,param_2,param_8);
              }
              icu_76_godot::ByteSinkUtil::appendCodePoint
                        (iVar13 - param_5,(int)((short)uVar3 >> 7) + uVar4,param_7,param_8);
              iVar15 = iVar13;
              goto LAB_00100430;
            }
          }
        }
      }
      else {
        if (param_6 == iVar13) goto LAB_00100690;
        if (0xdf < bVar7) goto LAB_001004aa;
        if (0xc1 < bVar7) goto LAB_0010075e;
      }
      goto LAB_001002d0;
    }
    if (((byte)(bVar7 + 0x15) < 2) || (bVar7 < 0xea)) {
      if (param_5 + 2 < param_6) {
        bVar7 = param_3[iVar13];
        if (((char)bVar7 < -0x40) && ((char)param_3[(long)iVar13 + 1] < -0x40)) {
          iVar10 = param_5 + 3;
          goto LAB_001002d0;
        }
        if (param_6 != iVar13) goto LAB_001004b6;
      }
      else if (param_6 != iVar13) goto LAB_001004aa;
    }
    else if (param_6 != iVar13) {
      if (bVar7 < 0xf0) {
LAB_001004aa:
        bVar7 = param_3[iVar13];
LAB_001004b6:
        uVar9 = uVar4 & 0xf;
        bVar8 = bVar7 & 0x3f;
        if (((uint)(int)(char)(&_LC0)[uVar4 & 0xf] >> (bVar7 >> 5) & 1) != 0) {
LAB_001004da:
          iVar10 = iVar13 + 1;
          iVar5 = param_6;
          if (param_6 == iVar10) goto LAB_00100690;
          if ((byte)(param_3[iVar10] + 0x80) < 0x40) {
            iVar13 = iVar13 + 2;
            uVar4 = (uVar9 << 6 | (uint)bVar8) << 6 | (uint)(byte)(param_3[iVar10] + 0x80);
            lVar11 = *plVar6;
            if ((int)uVar4 < 0xd800) goto LAB_0010078f;
            uVar9 = (int)uVar4 >> 5;
            if ((int)uVar4 < 0x10000) {
              uVar14 = 0;
              if ((int)uVar4 < 0xdc00) {
                uVar14 = 0x140;
              }
LAB_00100546:
              iVar10 = uVar9 + uVar14;
              goto LAB_00100548;
            }
            if ((int)uVar4 < 0x110000) {
              if ((int)uVar4 < *(int *)((long)plVar6 + 0x2c)) {
                uVar14 = uVar9 & 0x3f;
                uVar9 = (uint)*(ushort *)(lVar11 + (long)(((int)uVar4 >> 0xb) + 0x820) * 2);
                goto LAB_00100546;
              }
              lVar12 = (long)(int)plVar6[6] * 2;
            }
            else {
              lVar12 = (long)((int)plVar6[3] + 0x80) * 2;
            }
            goto LAB_0010055d;
          }
        }
      }
      else {
        uVar4 = bVar7 - 0xf0;
        if (((int)uVar4 < 5) &&
           (lVar11 = (long)iVar13,
           ((uint)(int)(char)(&DAT_00102dad)[param_3[lVar11] >> 4] >> (uVar4 & 0x1f) & 1) != 0)) {
          iVar13 = param_5 + 2;
          iVar5 = iVar13;
          if (param_6 == iVar13) goto LAB_00100690;
          bVar8 = param_3[iVar13] + 0x80;
          iVar10 = iVar13;
          if (bVar8 < 0x40) {
            uVar9 = uVar4 * 0x40 | param_3[lVar11] & 0x3f;
            goto LAB_001004da;
          }
        }
      }
      goto LAB_001002d0;
    }
LAB_00100690:
    param_5 = iVar5;
    iVar13 = *(int *)param_9;
LAB_001002e3:
    if ((0 < param_5 - iVar15) && (iVar13 < 1)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                  (param_3 + local_78,param_5 - iVar15,param_7,param_2,param_8);
        return;
      }
      goto LAB_00100880;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100880:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ucasemap_internalUTF8ToLower(int, unsigned int, icu_76_godot::BreakIterator*, unsigned char
   const*, int, icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) */

void ucasemap_internalUTF8ToLower
               (int param_1,uint param_2,BreakIterator *param_3,uchar *param_4,int param_5,
               ByteSink *param_6,Edits *param_7,UErrorCode *param_8)

{
  long in_FS_OFFSET;
  uchar *local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  local_30 = ZEXT416((uint)param_5) << 0x40;
  local_38 = param_4;
  (anonymous_namespace)::toLower
            (param_1,param_2,param_4,(UCaseContext *)&local_38,0,param_5,param_6,param_7,param_8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ucasemap_internalUTF8Fold(int, unsigned int, icu_76_godot::BreakIterator*, unsigned char const*,
   int, icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) */

void ucasemap_internalUTF8Fold
               (int param_1,uint param_2,BreakIterator *param_3,uchar *param_4,int param_5,
               ByteSink *param_6,Edits *param_7,UErrorCode *param_8)

{
  (anonymous_namespace)::toLower
            (-1,param_2,param_4,(UCaseContext *)0x0,0,param_5,param_6,param_7,param_8);
  return;
}



/* UCaseMap::~UCaseMap() */

void __thiscall UCaseMap::~UCaseMap(UCaseMap *this)

{
  if (*(long **)this != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010093f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)this + 8))();
    return;
  }
  return;
}



void ucasemap_close_76_godot(UMemory *param_1,void *param_2)

{
  if (param_1 != (UMemory *)0x0) {
    if (*(long **)param_1 != (long *)0x0) {
      (**(code **)(**(long **)param_1 + 8))();
    }
    icu_76_godot::UMemory::operator_delete(param_1,param_2);
    return;
  }
  return;
}



long ucasemap_getLocale_76_godot(long param_1)

{
  return param_1 + 8;
}



undefined4 ucasemap_getOptions_76_godot(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



void ucasemap_setLocale_76_godot(long param_1,char *param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (0 < *param_3) {
    return;
  }
  if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
    lVar1 = param_1 + 8;
    iVar2 = uloc_getName_76_godot(param_2,lVar1,0x20,param_3);
    iVar3 = *param_3;
    if ((iVar3 == 0xf) || (iVar2 == 0x20)) {
      *param_3 = 0;
      iVar3 = uloc_getLanguage_76_godot(param_2,lVar1,0x20,param_3);
      if (iVar3 == 0x20) {
        *param_3 = 0xf;
        goto LAB_001009ef;
      }
      iVar3 = *param_3;
    }
    if (iVar3 < 1) {
      uVar4 = ucase_getCaseLocale_76_godot(lVar1);
      *(undefined4 *)(param_1 + 0x28) = uVar4;
      return;
    }
  }
LAB_001009ef:
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}



/* UCaseMap::UCaseMap(char const*, unsigned int, UErrorCode*) */

void __thiscall UCaseMap::UCaseMap(UCaseMap *this,char *param_1,uint param_2,UErrorCode *param_3)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(uint *)(this + 0x2c) = param_2;
  ucasemap_setLocale_76_godot(this,param_1,param_3);
  return;
}



UMemory * ucasemap_open_76_godot(void *param_1,ulong param_2,int *param_3)

{
  UMemory *this;
  
  if (*param_3 < 1) {
    this = (UMemory *)icu_76_godot::UMemory::operator_new((UMemory *)0x30,param_2);
    if (this == (UMemory *)0x0) {
      *param_3 = 7;
      return (UMemory *)0x0;
    }
    *(undefined8 *)this = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(int *)(this + 0x2c) = (int)param_2;
    ucasemap_setLocale_76_godot(this,param_1,param_3);
    if (*param_3 < 1) {
      return this;
    }
    if (*(long **)this != (long *)0x0) {
      (**(code **)(**(long **)this + 8))();
    }
    icu_76_godot::UMemory::operator_delete(this,param_1);
  }
  return (UMemory *)0x0;
}



void ucasemap_setOptions_76_godot(long param_1,undefined4 param_2,int *param_3)

{
  if (*param_3 < 1) {
    *(undefined4 *)(param_1 + 0x2c) = param_2;
  }
  return;
}



void ucasemap_internalUTF8ToTitle_76_godot
               (int param_1,uint param_2,long *param_3,uchar *param_4,uint param_5,ByteSink *param_6
               ,Edits *param_7,UErrorCode *param_8)

{
  uchar uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  bool bVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  uchar *puVar15;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  wchar16 *local_70;
  uchar *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_8 < 1) {
    if ((~param_2 & 0x600) == 0) {
      *(undefined4 *)param_8 = 1;
    }
    else {
      local_50 = 0;
      local_60 = ZEXT416(param_5) << 0x40;
      local_68 = param_4;
      if (0 < (int)param_5) {
        uVar5 = (**(code **)(*param_3 + 0x50))(param_3);
        if (((int)param_5 < (int)uVar5) || (uVar5 == 0xffffffff)) {
          uVar17 = 0;
          uVar5 = param_5;
          goto LAB_00100c35;
        }
        uVar17 = uVar5;
        if (0 < (int)uVar5) {
          uVar17 = 0;
          goto LAB_00100c35;
        }
LAB_00100bd4:
        uVar5 = (**(code **)(*param_3 + 0x68))(param_3);
        if ((uVar5 != 0xffffffff) && ((int)uVar5 <= (int)param_5)) {
          if ((int)uVar17 < (int)uVar5) goto LAB_00100c35;
          goto LAB_00100bf5;
        }
        uVar5 = param_5;
        if ((int)uVar17 < (int)param_5) {
LAB_00100c35:
          uVar16 = uVar17 + 1;
          bVar4 = param_4[(int)uVar17];
          uVar9 = (uint)bVar4;
          uVar6 = param_2 & 0x200;
          uVar7 = uVar17;
          if ((char)bVar4 < '\0') {
            if (uVar5 == uVar16) {
LAB_00100dbd:
              uVar9 = 0xffffffff;
LAB_00100dc3:
              if (uVar6 == 0) {
LAB_00100dcb:
                uVar6 = uVar16;
LAB_00100e3a:
                uVar16 = uVar6;
                if ((param_2 & 0x400) == 0) {
                  uVar6 = u_charType_76_godot(uVar9);
                  if ((0xf020e2eU >> (uVar6 & 0x1f) & 1) != 0) goto LAB_00100e6b;
                  if ((char)uVar6 == '\x04') {
                    iVar8 = ucase_getType_76_godot(uVar9);
                    goto joined_r0x00100e48;
                  }
                }
                else {
                  iVar8 = ucase_getType_76_godot();
joined_r0x00100e48:
                  if (iVar8 != 0) goto LAB_00100e6b;
                }
                uVar7 = uVar16;
                if (uVar16 == uVar5) goto LAB_00100e6b;
                uVar6 = uVar16 + 1;
                bVar4 = param_4[(int)uVar16];
                uVar9 = (uint)bVar4;
                if ((char)bVar4 < '\0') {
                  if (uVar5 == uVar6) {
LAB_00100f50:
                    uVar9 = 0xffffffff;
                    goto LAB_00100e3a;
                  }
                  uVar12 = (uint)bVar4;
                  if (bVar4 < 0xe0) {
                    if (uVar12 < 0xc2) goto LAB_00100f50;
                    uVar16 = bVar4 & 0x1f;
                  }
                  else {
                    if (uVar12 < 0xf0) {
                      uVar9 = 0xffffffff;
                      uVar12 = uVar12 & 0xf;
                      if (((uint)(int)(char)(&_LC0)[bVar4 & 0xf] >> (param_4[(int)uVar6] >> 5) & 1)
                          == 0) goto LAB_00100e3a;
                      bVar4 = param_4[(int)uVar6] & 0x3f;
                    }
                    else {
                      uVar12 = bVar4 - 0xf0;
                      uVar9 = 0xffffffff;
                      if ((((4 < (int)uVar12) ||
                           (lVar10 = (long)(int)uVar6,
                           ((uint)(int)(char)(&DAT_00102dad)[param_4[lVar10] >> 4] >>
                            (uVar12 & 0x1f) & 1) == 0)) || (uVar6 = uVar16 + 2, uVar5 == uVar6)) ||
                         (bVar4 = param_4[(int)uVar6] + 0x80, 0x3f < bVar4)) goto LAB_00100e3a;
                      uVar12 = uVar12 * 0x40 | param_4[lVar10] & 0x3f;
                    }
                    uVar6 = uVar6 + 1;
                    uVar9 = 0xffffffff;
                    if (uVar5 == uVar6) goto LAB_00100e3a;
                    uVar16 = (uint)bVar4 | uVar12 << 6;
                  }
                  uVar9 = 0xffffffff;
                  if ((byte)(param_4[(int)uVar6] + 0x80) < 0x40) {
                    uVar9 = uVar16 << 6 | (uint)(byte)(param_4[(int)uVar6] + 0x80);
                    uVar6 = uVar6 + 1;
                  }
                }
                goto LAB_00100e3a;
              }
              goto LAB_00100e7b;
            }
            uVar12 = (uint)bVar4;
            if (bVar4 < 0xe0) {
              if (uVar12 < 0xc2) goto LAB_00100dbd;
              uVar12 = bVar4 & 0x1f;
LAB_001011f4:
              lVar10 = (long)(int)uVar16;
              uVar9 = 0xffffffff;
              if ((byte)(param_4[lVar10] + 0x80) < 0x40) {
                uVar16 = uVar16 + 1;
                uVar9 = uVar12 << 6 | (uint)(byte)(param_4[lVar10] + 0x80);
              }
              goto LAB_00100dc3;
            }
            if (uVar12 < 0xf0) {
              uVar12 = uVar12 & 0xf;
              uVar9 = 0xffffffff;
              bVar13 = param_4[(int)uVar16] & 0x3f;
              if (((uint)(int)(char)(&_LC0)[bVar4 & 0xf] >> (param_4[(int)uVar16] >> 5) & 1) != 0) {
LAB_00100d92:
                uVar16 = uVar16 + 1;
                uVar9 = 0xffffffff;
                if (uVar5 != uVar16) {
                  uVar12 = (uint)bVar13 | uVar12 << 6;
                  goto LAB_001011f4;
                }
              }
              goto LAB_00100dc3;
            }
            uVar12 = bVar4 - 0xf0;
            if ((4 < (int)uVar12) ||
               (lVar10 = (long)(int)uVar16,
               ((uint)(int)(char)(&DAT_00102dad)[param_4[lVar10] >> 4] >> (uVar12 & 0x1f) & 1) == 0)
               ) goto LAB_00100dbd;
            uVar16 = uVar17 + 2;
            if (uVar5 != uVar16) {
              uVar9 = 0xffffffff;
              bVar13 = param_4[(int)uVar16] + 0x80;
              if (bVar13 < 0x40) {
                uVar12 = uVar12 * 0x40 | param_4[lVar10] & 0x3f;
                goto LAB_00100d92;
              }
              goto LAB_00100dc3;
            }
            iVar8 = 2;
            if (uVar6 == 0) {
              uVar9 = 0xffffffff;
              goto LAB_00100dcb;
            }
            goto LAB_00100e94;
          }
          iVar8 = 1;
          if (uVar6 == 0) goto LAB_00100dcb;
          goto LAB_00100c6a;
        }
      }
    }
  }
LAB_00100c00:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100e6b:
  if ((int)uVar17 < (int)uVar7) {
    if (0 < *(int *)param_8) goto LAB_00100c00;
    icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
              (param_4 + (int)uVar17,uVar7 - uVar17,param_6,param_2,param_7);
  }
LAB_00100e7b:
  uVar17 = uVar7;
  if ((int)uVar16 <= (int)uVar17) goto LAB_00100bf5;
  iVar8 = uVar16 - uVar17;
  if (uVar9 == 0xffffffff) {
LAB_00100e94:
    if (0 < *(int *)param_8) goto LAB_00100c00;
    icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
              (param_4 + (int)uVar17,iVar8,param_6,param_2,param_7);
    uVar17 = uVar16;
LAB_00100ec6:
    if ((int)uVar5 <= (int)uVar17) goto LAB_00100bf5;
  }
  else {
LAB_00100c6a:
    local_60._12_4_ = uVar17;
    local_50 = CONCAT44(local_50._4_4_,uVar16);
    uVar7 = ucase_toFullTitle_76_godot(uVar9,0x100000,&local_68,&local_70,param_1);
    uVar17 = uVar16;
    if (-1 < (int)uVar7) {
      if ((int)uVar7 < 0x20) {
        cVar3 = icu_76_godot::ByteSinkUtil::appendChange
                          (iVar8,local_70,uVar7,param_6,param_7,param_8);
        if (cVar3 == '\0') goto LAB_00100c00;
        if (((int)uVar16 < (int)uVar5) && (param_1 == 5)) goto LAB_00100cea;
      }
      else {
        icu_76_godot::ByteSinkUtil::appendCodePoint(iVar8,uVar7,param_6,param_7);
        if ((param_1 == 5) && ((int)uVar16 < (int)uVar5)) goto LAB_001010b4;
      }
      goto LAB_00100ec6;
    }
    if (param_7 != (Edits *)0x0) {
      icu_76_godot::Edits::addUnchanged((int)param_7);
    }
    if ((param_2 & 0x4000) == 0) {
      icu_76_godot::ByteSinkUtil::appendCodePoint(iVar8,~uVar7,param_6,(Edits *)0x0);
    }
    if ((param_1 != 5) || ((int)uVar5 <= (int)uVar16)) goto LAB_00100ec6;
    uVar7 = ~uVar7;
LAB_001010b4:
    if (uVar7 == 0x49) {
      uVar7 = uVar16 + 1;
      puVar15 = param_4 + (int)uVar16;
      uVar1 = *puVar15;
      bVar11 = uVar1 == 0xcc && (int)uVar7 < (int)uVar5;
      if (bVar11) {
        if (param_4[(int)uVar7] == 0x81 && uVar5 != uVar16 + 2) {
          iVar8 = uVar16 + 3;
          if (param_4[(int)(uVar16 + 2)] == 'j') {
            iVar14 = 2;
          }
          else {
            bVar11 = false;
            iVar14 = 3;
            if (param_4[(int)(uVar16 + 2)] != 'J') goto LAB_00100ec6;
          }
          goto LAB_001010f8;
        }
      }
      else {
        if (uVar1 == 'j') {
          bVar11 = true;
          bVar2 = false;
          iVar14 = 0;
        }
        else {
          bVar2 = false;
          iVar14 = 1;
          if (uVar1 != 'J') goto LAB_00100ec6;
        }
LAB_00101367:
        if ((int)uVar7 < (int)uVar5) {
LAB_0010136c:
          bVar4 = param_4[(int)uVar7];
          uVar6 = (uint)bVar4;
          if (-1 < (char)bVar4) goto LAB_00101383;
          uVar9 = uVar7 + 1;
          if (uVar5 == uVar9) {
LAB_0010156e:
            uVar6 = 0xffffffff;
          }
          else {
            uVar12 = (uint)bVar4;
            if (bVar4 < 0xe0) {
              if (uVar12 < 0xc2) goto LAB_0010156e;
              uVar12 = bVar4 & 0x1f;
LAB_0010151c:
              uVar6 = 0xffffffff;
              if ((byte)(param_4[(int)uVar9] + 0x80) < 0x40) {
                uVar6 = uVar12 << 6 | (uint)(byte)(param_4[(int)uVar9] + 0x80);
              }
            }
            else if (uVar12 < 0xf0) {
              uVar12 = uVar12 & 0xf;
              uVar6 = 0xffffffff;
              bVar13 = param_4[(int)uVar9] & 0x3f;
              if (((uint)(int)(char)(&_LC0)[bVar4 & 0xf] >> (param_4[(int)uVar9] >> 5) & 1) != 0) {
LAB_00101500:
                uVar9 = uVar9 + 1;
                uVar6 = 0xffffffff;
                if (uVar5 != uVar9) {
                  uVar12 = uVar12 << 6 | (uint)bVar13;
                  goto LAB_0010151c;
                }
              }
            }
            else {
              uVar12 = bVar4 - 0xf0;
              uVar6 = 0xffffffff;
              if (((((int)uVar12 < 5) &&
                   (lVar10 = (long)(int)uVar9,
                   ((uint)(int)(char)(&DAT_00102dad)[param_4[lVar10] >> 4] >> (uVar12 & 0x1f) & 1)
                   != 0)) && (uVar9 = uVar7 + 2, uVar5 != uVar9)) &&
                 (bVar13 = param_4[(int)uVar9] + 0x80, bVar13 < 0x40)) {
                uVar12 = uVar12 * 0x40 | param_4[lVar10] & 0x3f;
                goto LAB_00101500;
              }
            }
          }
LAB_00101383:
          bVar4 = u_charType_76_godot(uVar6);
          if ((1 << (bVar4 & 0x1f) & 0x1c0U) != 0) goto LAB_00100ec6;
        }
        uVar17 = uVar7;
        if (*(int *)param_8 < 1) {
          if (iVar14 != 0) goto LAB_0010114c;
LAB_0010118b:
          if (bVar11) {
LAB_00101472:
            uVar16 = uVar16 + 1;
            icu_76_godot::ByteSinkUtil::appendCodePoint(1,0x4a,param_6,param_7);
          }
          if ((*(int *)param_8 < 1) && (bVar2)) {
            icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                      (param_4 + (int)uVar16,2,param_6,param_2,param_7);
          }
        }
        else if (bVar11) {
          uVar16 = uVar16 + iVar14;
          goto LAB_00101472;
        }
      }
      goto LAB_00100ec6;
    }
    if (uVar7 == 0xcd) {
      iVar8 = uVar16 + 1;
      puVar15 = param_4 + (int)uVar16;
      if (*puVar15 == 'j') {
        iVar14 = 0;
        bVar11 = true;
      }
      else {
        iVar14 = 1;
        bVar11 = false;
        if (*puVar15 != 'J') goto LAB_00100cea;
      }
LAB_001010f8:
      if (iVar8 + 1 < (int)uVar5) {
        if ((param_4[iVar8] != 0xcc) || (param_4[iVar8 + 1] != 0x81)) goto LAB_00100ec6;
        uVar7 = iVar8 + 2;
        if (bVar11) {
          bVar2 = true;
          goto LAB_00101367;
        }
        iVar14 = iVar14 + 2;
        if ((int)uVar7 < (int)uVar5) {
          bVar2 = false;
          goto LAB_0010136c;
        }
        bVar2 = false;
        uVar17 = uVar7;
        if (0 < *(int *)param_8) goto LAB_00100bf5;
LAB_0010114c:
        icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged(puVar15,iVar14,param_6,param_2,param_7);
        uVar16 = uVar16 + iVar14;
        goto LAB_0010118b;
      }
    }
  }
LAB_00100cea:
  if ((param_2 & 0x100) == 0) {
    (anonymous_namespace)::toLower
              (param_1,param_2,param_4,(UCaseContext *)&local_68,uVar17,uVar5,param_6,param_7,
               param_8);
    if (0 < *(int *)param_8) goto LAB_00100c00;
  }
  else {
    if (0 < *(int *)param_8) goto LAB_00100c00;
    icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
              (param_4 + (int)uVar17,uVar5 - uVar17,param_6,param_2,param_7);
  }
LAB_00100bf5:
  uVar17 = uVar5;
  if ((int)param_5 <= (int)uVar5) goto LAB_00100c00;
  goto LAB_00100bd4;
}



/* icu_76_godot::GreekUpper::isFollowedByCasedLetter(unsigned char const*, int, int) */

bool icu_76_godot::GreekUpper::isFollowedByCasedLetter(uchar *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  do {
    while( true ) {
      if (param_3 <= param_2) {
        return false;
      }
      iVar4 = param_2 + 1;
      bVar1 = param_1[param_2];
      uVar6 = (uint)bVar1;
      if ((char)bVar1 < '\0') break;
LAB_0010163a:
      uVar6 = ucase_getTypeOrIgnorable_76_godot(uVar6);
      param_2 = iVar4;
      if ((uVar6 & 4) == 0) goto LAB_001016e3;
    }
    if (param_3 == iVar4) {
      uVar6 = 0xffffffff;
      iVar4 = param_3;
      goto LAB_0010163a;
    }
    uVar2 = (uint)bVar1;
    if (bVar1 < 0xe0) {
      if (uVar2 < 0xc2) goto LAB_001016cf;
      uVar2 = bVar1 & 0x1f;
LAB_0010170d:
      uVar6 = 0xffffffff;
      if ((byte)(param_1[iVar4] + 0x80) < 0x40) {
        uVar6 = (uint)(byte)(param_1[iVar4] + 0x80) | uVar2 << 6;
        iVar4 = iVar4 + 1;
      }
      goto LAB_0010163a;
    }
    if (uVar2 < 0xf0) {
      uVar2 = uVar2 & 0xf;
      bVar5 = param_1[iVar4] & 0x3f;
      if (((uint)(int)(char)(&_LC0)[bVar1 & 0xf] >> (param_1[iVar4] >> 5) & 1) != 0) {
LAB_001016a5:
        iVar4 = iVar4 + 1;
        uVar6 = 0xffffffff;
        if (param_3 == iVar4) goto LAB_0010163a;
        uVar2 = (uint)bVar5 | uVar2 << 6;
        goto LAB_0010170d;
      }
    }
    else {
      uVar2 = bVar1 - 0xf0;
      if (((int)uVar2 < 5) &&
         (lVar3 = (long)iVar4,
         ((uint)(int)(char)(&DAT_00102dad)[param_1[lVar3] >> 4] >> (uVar2 & 0x1f) & 1) != 0)) {
        iVar4 = param_2 + 2;
        uVar6 = 0xffffffff;
        if ((param_3 == iVar4) || (bVar5 = param_1[iVar4] + 0x80, 0x3f < bVar5)) goto LAB_0010163a;
        uVar2 = uVar2 * 0x40 | param_1[lVar3] & 0x3f;
        goto LAB_001016a5;
      }
    }
LAB_001016cf:
    uVar6 = ucase_getTypeOrIgnorable_76_godot(0xffffffff);
    param_2 = iVar4;
  } while ((uVar6 & 4) != 0);
LAB_001016e3:
  return uVar6 != 0;
}



/* icu_76_godot::GreekUpper::toUpper(unsigned int, unsigned char const*, int,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) */

void icu_76_godot::GreekUpper::toUpper
               (uint param_1,uchar *param_2,int param_3,ByteSink *param_4,Edits *param_5,
               UErrorCode *param_6)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int local_94;
  wchar16 *local_48;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  if (0 < param_3) {
    bVar17 = false;
    bVar1 = 0;
    do {
      iVar14 = local_94 + 1;
      pbVar9 = param_2 + local_94;
      bVar12 = *pbVar9;
      uVar6 = (uint)bVar12;
      iVar16 = iVar14;
      if (-1 < (char)bVar12) goto LAB_00101838;
      if (param_3 == iVar14) {
LAB_00101ccc:
        uVar6 = 0xffffffff;
      }
      else if (bVar12 < 0xe0) {
        if (uVar6 < 0xc2) goto LAB_00101ccc;
        uVar5 = uVar6 & 0x1f;
LAB_00101ecb:
        uVar6 = 0xffffffff;
        if ((byte)(param_2[iVar16] + 0x80) < 0x40) {
          uVar6 = uVar5 << 6 | (uint)(byte)(param_2[iVar16] + 0x80);
          iVar16 = iVar16 + 1;
        }
      }
      else if (uVar6 < 0xf0) {
        uVar7 = uVar6 & 0xf;
        uVar5 = uVar6 & 0xf;
        uVar6 = 0xffffffff;
        bVar12 = param_2[iVar14] & 0x3f;
        if (((uint)(int)(char)(&_LC0)[uVar7] >> (param_2[iVar14] >> 5) & 1) != 0) {
LAB_00101a73:
          iVar16 = iVar16 + 1;
          uVar6 = 0xffffffff;
          if (param_3 != iVar16) {
            uVar5 = (uint)bVar12 | uVar5 << 6;
            goto LAB_00101ecb;
          }
        }
      }
      else {
        uVar5 = uVar6 - 0xf0;
        uVar6 = 0xffffffff;
        if (((((int)uVar5 < 5) &&
             (((uint)(int)(char)(&DAT_00102dad)[param_2[iVar14] >> 4] >> (uVar5 & 0x1f) & 1) != 0))
            && (iVar16 = local_94 + 2, param_3 != iVar16)) &&
           (bVar12 = param_2[iVar16] + 0x80, bVar12 < 0x40)) {
          uVar5 = uVar5 * 0x40 | param_2[iVar14] & 0x3f;
          goto LAB_00101a73;
        }
      }
LAB_00101838:
      uVar5 = ucase_getTypeOrIgnorable_76_godot(uVar6);
      iVar19 = (int)param_5;
      if ((uVar5 & 4) == 0) {
        bVar21 = uVar5 != 0;
        uVar10 = icu_76_godot::GreekUpper::getLetterData(uVar6);
        uVar5 = (uint)uVar10;
        if (uVar5 == 0) goto LAB_00101864;
LAB_00101926:
        bVar12 = 0;
        uVar20 = uVar10 & 0xffffffff;
        uVar6 = uVar5 & 0x3ff;
        if ((((uVar5 & 0x1000) != 0) && ((bVar1 & 6) != 0)) &&
           ((uVar6 == 0x399 || (uVar6 == 0x3a5)))) {
          uVar20 = (ulong)((uint)uVar10 | (-(uint)((bVar1 & 4) == 0) & 0x8000) + 0x8000);
        }
        uVar10 = uVar20 & 0x4000;
        uVar3 = uVar20 & 0x4000;
        uVar5 = (uint)(uVar20 >> 0xd) & 1;
        while (uVar7 = (uint)uVar20, iVar16 < param_3) {
          iVar15 = iVar16 + 1;
          bVar1 = param_2[iVar16];
          uVar8 = (uint)bVar1;
          if (-1 < (char)bVar1) goto LAB_00101968;
          if (param_3 == iVar15) {
LAB_00101ad0:
            uVar8 = icu_76_godot::GreekUpper::getDiacriticData(-1);
          }
          else {
            uVar18 = (uint)bVar1;
            if (uVar8 < 0xe0) {
              if (uVar18 < 0xc2) goto LAB_00101ad0;
              uVar18 = bVar1 & 0x1f;
LAB_00101c8f:
              lVar13 = (long)iVar15;
              uVar8 = 0xffffffff;
              if ((byte)(param_2[lVar13] + 0x80) < 0x40) {
                iVar15 = iVar15 + 1;
                uVar8 = uVar18 << 6 | (uint)(byte)(param_2[lVar13] + 0x80);
              }
            }
            else if (uVar18 < 0xf0) {
              uVar18 = uVar18 & 0xf;
              uVar8 = 0xffffffff;
              bVar11 = param_2[iVar15] & 0x3f;
              if (((uint)(int)(char)(&_LC0)[bVar1 & 0xf] >> (param_2[iVar15] >> 5) & 1) != 0) {
LAB_001019f9:
                iVar15 = iVar15 + 1;
                uVar8 = 0xffffffff;
                if (param_3 != iVar15) {
                  uVar18 = (uint)bVar11 | uVar18 << 6;
                  goto LAB_00101c8f;
                }
              }
            }
            else {
              uVar18 = bVar1 - 0xf0;
              uVar8 = 0xffffffff;
              if ((((int)uVar18 < 5) &&
                  (lVar13 = (long)iVar15,
                  ((uint)(int)(char)(&DAT_00102dad)[param_2[lVar13] >> 4] >> (uVar18 & 0x1f) & 1) !=
                  0)) && ((iVar15 = iVar16 + 2, param_3 != iVar15 &&
                          (bVar11 = param_2[iVar15] + 0x80, bVar11 < 0x40)))) {
                uVar18 = param_2[lVar13] & 0x3f | uVar18 * 0x40;
                goto LAB_001019f9;
              }
            }
LAB_00101968:
            uVar8 = icu_76_godot::GreekUpper::getDiacriticData(uVar8);
          }
          if (uVar8 == 0) break;
          uVar20 = (ulong)(uVar7 | uVar8);
          uVar5 = (uVar5 + 1) - (uint)((uVar8 & 0x2000) == 0);
          iVar16 = iVar15;
        }
        if ((uVar7 & 0xd000) == 0x5000) {
          bVar12 = (-(uVar10 == 0) & 0xfeU) + 4;
        }
        if (uVar6 == 0x397) {
          uVar8 = uVar7 & 0x18000;
          if ((((uVar20 & 0x4000) == 0) || (bVar17 || uVar5 != 0)) ||
             (cVar4 = isFollowedByCasedLetter(param_2,iVar16,param_3), cVar4 != '\0'))
          goto LAB_00101b2c;
          bVar23 = uVar3 == 0;
          if (!bVar23) {
            uVar6 = 0x389;
          }
LAB_00101b2f:
          if (param_5 != (Edits *)0x0) goto LAB_00101b3b;
LAB_00101e40:
          if ((param_1 & 0x4000) != 0) goto LAB_00101b3b;
        }
        else {
          if ((uVar20 & 0x8000) == 0) {
LAB_00101b2c:
            uVar8 = uVar7 & 0x18000;
            bVar23 = false;
            goto LAB_00101b2f;
          }
          if (uVar6 == 0x399) {
            uVar8 = 0;
            bVar23 = false;
            uVar6 = 0x3aa;
            goto LAB_00101b2f;
          }
          if (uVar6 != 0x3a5) goto LAB_00101b2c;
          uVar8 = 0;
          bVar23 = false;
          uVar6 = 0x3ab;
          if (param_5 == (Edits *)0x0) goto LAB_00101e40;
LAB_00101b3b:
          if (iVar14 < iVar16) {
            bVar17 = true;
            if (*pbVar9 == (byte)((byte)((int)uVar6 >> 6) | 0xc0)) {
              bVar17 = param_2[(long)local_94 + 1] != ((byte)uVar6 & 0x3f | 0x80) || 0 < (int)uVar5;
            }
          }
          else {
            bVar17 = true;
          }
          iVar14 = local_94 + 2;
          if (uVar8 != 0) {
            bVar22 = true;
            if ((local_94 + 3 < iVar16) && (param_2[iVar14] == 0xcc)) {
              bVar22 = (bool)(param_2[(long)iVar14 + 1] != 0x88 | bVar17);
            }
            bVar17 = bVar22;
            iVar14 = local_94 + 4;
          }
          if (bVar23) {
            bVar22 = bVar23;
            if ((iVar14 + 1 < iVar16) && (param_2[iVar14] == 0xcc)) {
              bVar22 = param_2[(long)iVar14 + 1] != 0x81;
            }
            bVar17 = (bool)(bVar17 | bVar22);
            iVar14 = iVar14 + 2;
          }
          if (iVar16 - local_94 != (iVar14 - local_94) + uVar5 * 2 || bVar17) {
            if (param_5 != (Edits *)0x0) {
              icu_76_godot::Edits::addReplace(iVar19,iVar16 - local_94);
            }
          }
          else {
            if (param_5 != (Edits *)0x0) {
              icu_76_godot::Edits::addUnchanged(iVar19);
            }
            bVar17 = bVar21;
            if ((param_1 & 0x4000) != 0) goto LAB_001018c8;
          }
        }
        icu_76_godot::ByteSinkUtil::appendTwoBytes(uVar6,param_4);
        if (uVar8 != 0) {
          (**(code **)(*(long *)param_4 + 0x10))(param_4,&_LC2,2);
        }
        if (bVar23) {
          (**(code **)(*(long *)param_4 + 0x10))(param_4,&_LC3,2);
        }
        bVar17 = bVar21;
        if (0 < (int)uVar5) {
          do {
            (**(code **)(*(long *)param_4 + 0x10))(param_4,&_LC4,2);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      else {
        uVar10 = icu_76_godot::GreekUpper::getLetterData(uVar6);
        uVar5 = (uint)uVar10;
        bVar21 = bVar17;
        if (uVar5 != 0) goto LAB_00101926;
LAB_00101864:
        bVar17 = bVar21;
        bVar12 = 0;
        local_94 = iVar16 - local_94;
        if (uVar6 == 0xffffffff) {
          if (0 < *(int *)param_6) break;
          if (0 < local_94) {
            icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                      (pbVar9,local_94,param_4,param_1,param_5);
          }
        }
        else {
          uVar6 = ucase_toFullUpper_76_godot(uVar6,0,0);
          if ((int)uVar6 < 0) {
            if (param_5 != (Edits *)0x0) {
              icu_76_godot::Edits::addUnchanged(iVar19);
            }
            if ((param_1 & 0x4000) == 0) {
              icu_76_godot::ByteSinkUtil::appendCodePoint(local_94,~uVar6,param_4,(Edits *)0x0);
            }
          }
          else if ((int)uVar6 < 0x20) {
            cVar4 = icu_76_godot::ByteSinkUtil::appendChange
                              (local_94,local_48,uVar6,param_4,param_5,param_6);
            if (cVar4 == '\0') break;
          }
          else {
            icu_76_godot::ByteSinkUtil::appendCodePoint(local_94,uVar6,param_4,param_5);
          }
        }
      }
LAB_001018c8:
      local_94 = iVar16;
      bVar1 = bVar12;
    } while (iVar16 < param_3);
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ucasemap_internalUTF8ToUpper(int, unsigned int, icu_76_godot::BreakIterator*, unsigned char
   const*, int, icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) */

void ucasemap_internalUTF8ToUpper
               (int param_1,uint param_2,BreakIterator *param_3,uchar *param_4,int param_5,
               ByteSink *param_6,Edits *param_7,UErrorCode *param_8)

{
  uchar *puVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  long local_a8;
  char local_70;
  undefined7 uStack_6f;
  uchar *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 4) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      icu_76_godot::GreekUpper::toUpper(param_2,param_4,param_5,param_6,param_7,param_8);
      return;
    }
  }
  else {
    puVar7 = &icu_76_godot::LatinCase::TO_UPPER_TR;
    if (param_1 != 2) {
      puVar7 = &icu_76_godot::LatinCase::TO_UPPER_NORMAL;
    }
    local_60 = ZEXT416((uint)param_5) << 0x40;
    local_50 = 0;
    local_68 = param_4;
    plVar8 = (long *)ucase_getTrie_76_godot();
    if ((*(int *)param_8 < 1) && (0 < param_5)) {
      local_a8 = 0;
      iVar16 = 0;
      iVar14 = 0;
LAB_00102158:
      iVar17 = iVar14 + 1;
      bVar2 = param_4[iVar14];
      uVar6 = (uint)bVar2;
      puVar1 = param_4 + local_a8;
      iVar11 = iVar17;
      if (-1 < (char)bVar2) {
        cVar3 = *(char *)((long)puVar7 + (ulong)bVar2);
        if (cVar3 == -0x80) {
LAB_001021f0:
          local_60._12_4_ = iVar14;
          local_50 = CONCAT44(local_50._4_4_,iVar17);
          iVar5 = ucase_toFullUpper_76_godot(uVar6,0x100000,&local_68,&local_70,param_1);
          iVar11 = iVar17;
          if (iVar5 < 0) goto LAB_001021a0;
          if ((*(int *)param_8 < 1) && (0 < iVar14 - iVar16)) {
            icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                      (puVar1,iVar14 - iVar16,param_6,param_2,param_7);
          }
          if (iVar5 < 0x20) {
            icu_76_godot::ByteSinkUtil::appendChange
                      (iVar17 - iVar14,(wchar16 *)CONCAT71(uStack_6f,local_70),iVar5,param_6,param_7
                       ,param_8);
          }
          else {
            icu_76_godot::ByteSinkUtil::appendCodePoint(iVar17 - iVar14,iVar5,param_6,param_7);
          }
        }
        else {
          if (cVar3 == '\0') goto LAB_001021a0;
          if (0 < iVar14 - iVar16) {
            icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                      (puVar1,iVar14 - iVar16,param_6,param_2,param_7);
          }
          local_70 = cVar3 + bVar2;
          (**(code **)(*(long *)param_6 + 0x10))(param_6,&local_70,1);
          if (param_7 != (Edits *)0x0) {
            icu_76_godot::Edits::addReplace((int)param_7,1);
          }
        }
LAB_00102267:
        local_a8 = (long)iVar17;
        iVar11 = iVar17;
        iVar16 = iVar17;
LAB_001021a0:
        iVar14 = iVar11;
        iVar17 = *(int *)param_8;
        if ((0 < iVar17) || (param_5 <= iVar14)) goto LAB_001021b0;
        goto LAB_00102158;
      }
      uVar6 = (uint)bVar2;
      iVar5 = iVar17;
      if (bVar2 < 0xe3) {
        if ((byte)(bVar2 + 0x3e) < 4) {
          if (iVar17 < param_5) {
            lVar12 = (long)iVar17;
            if ((byte)(param_4[lVar12] + 0x80) < 0x40) {
              iVar17 = iVar14 + 2;
              uVar6 = (uint)(byte)(param_4[lVar12] + 0x80) | (bVar2 - 0xc0) * 0x40;
              cVar3 = *(char *)((long)puVar7 + (long)(int)uVar6);
              if (cVar3 == -0x80) goto LAB_001021f0;
              iVar11 = iVar17;
              if (cVar3 != '\0') {
                if (0 < iVar14 - iVar16) {
                  icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                            (puVar1,iVar14 - iVar16,param_6,param_2,param_7);
                }
                icu_76_godot::ByteSinkUtil::appendTwoBytes((int)cVar3 + uVar6,param_6);
                if (param_7 != (Edits *)0x0) {
                  icu_76_godot::Edits::addReplace((int)param_7,2);
                }
                goto LAB_00102267;
              }
            }
          }
          else {
            if (param_5 == iVar17) goto LAB_00102510;
LAB_00102629:
            lVar12 = (long)iVar17;
            if ((byte)(param_4[lVar12] + 0x80) < 0x40) {
              iVar17 = iVar14 + 2;
              uVar6 = (uint)(byte)(param_4[lVar12] + 0x80) | (uVar6 & 0x1f) << 6;
              lVar12 = *plVar8;
LAB_0010265a:
              iVar11 = (int)uVar6 >> 5;
LAB_0010246a:
              lVar13 = (long)(int)((uVar6 & 0x1f) + (uint)*(ushort *)(lVar12 + (long)iVar11 * 2) * 4
                                  ) * 2;
LAB_0010247f:
              uVar4 = *(ushort *)(lVar12 + lVar13);
              if ((uVar4 & 8) != 0) goto LAB_001021f0;
              iVar11 = iVar17;
              if (((uVar4 & 3) == 1) && ((short)uVar4 >> 7 != 0)) {
                if (0 < iVar14 - iVar16) {
                  icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                            (puVar1,iVar14 - iVar16,param_6,param_2,param_7);
                }
                icu_76_godot::ByteSinkUtil::appendCodePoint
                          (iVar17 - iVar14,(int)((short)uVar4 >> 7) + uVar6,param_6,param_7);
                local_a8 = (long)iVar17;
                iVar16 = iVar17;
              }
            }
          }
        }
        else {
          if (param_5 == iVar17) goto LAB_00102510;
          if (0xdf < bVar2) goto LAB_0010260c;
          if (0xc1 < bVar2) goto LAB_00102629;
        }
        goto LAB_001021a0;
      }
      if (((byte)(bVar2 + 0x15) < 2) || (bVar2 < 0xea)) {
        if (iVar14 + 2 < param_5) {
          bVar2 = param_4[iVar17];
          if (((char)bVar2 < -0x40) && ((char)param_4[(long)iVar17 + 1] < -0x40)) {
            iVar11 = iVar14 + 3;
            goto LAB_001021a0;
          }
          if (param_5 != iVar17) goto LAB_00102555;
        }
        else if (param_5 != iVar17) goto LAB_0010260c;
      }
      else if (param_5 != iVar17) {
        if (bVar2 < 0xf0) {
LAB_0010260c:
          bVar2 = param_4[iVar17];
LAB_00102555:
          uVar10 = uVar6 & 0xf;
          bVar9 = bVar2 & 0x3f;
          if (((uint)(int)(char)(&_LC0)[uVar6 & 0xf] >> (bVar2 >> 5) & 1) != 0) {
LAB_001023fb:
            iVar11 = iVar17 + 1;
            iVar5 = param_5;
            if (param_5 == iVar11) goto LAB_00102510;
            if ((byte)(param_4[iVar11] + 0x80) < 0x40) {
              iVar17 = iVar17 + 2;
              uVar6 = (uVar10 << 6 | (uint)bVar9) << 6 | (uint)(byte)(param_4[iVar11] + 0x80);
              lVar12 = *plVar8;
              if ((int)uVar6 < 0xd800) goto LAB_0010265a;
              uVar10 = (int)uVar6 >> 5;
              if ((int)uVar6 < 0x10000) {
                uVar15 = 0;
                if ((int)uVar6 < 0xdc00) {
                  uVar15 = 0x140;
                }
LAB_00102468:
                iVar11 = uVar10 + uVar15;
                goto LAB_0010246a;
              }
              if ((int)uVar6 < 0x110000) {
                if ((int)uVar6 < *(int *)((long)plVar8 + 0x2c)) {
                  uVar15 = uVar10 & 0x3f;
                  uVar10 = (uint)*(ushort *)(lVar12 + (long)(((int)uVar6 >> 0xb) + 0x820) * 2);
                  goto LAB_00102468;
                }
                lVar13 = (long)(int)plVar8[6] * 2;
              }
              else {
                lVar13 = (long)((int)plVar8[3] + 0x80) * 2;
              }
              goto LAB_0010247f;
            }
          }
        }
        else {
          uVar6 = bVar2 - 0xf0;
          if (((int)uVar6 < 5) &&
             (lVar12 = (long)iVar17,
             ((uint)(int)(char)(&DAT_00102dad)[param_4[lVar12] >> 4] >> (uVar6 & 0x1f) & 1) != 0)) {
            iVar17 = iVar14 + 2;
            iVar5 = iVar17;
            if (param_5 == iVar17) goto LAB_00102510;
            bVar9 = param_4[iVar17] + 0x80;
            iVar11 = iVar17;
            if (bVar9 < 0x40) {
              uVar10 = uVar6 * 0x40 | param_4[lVar12] & 0x3f;
              goto LAB_001023fb;
            }
          }
        }
        goto LAB_001021a0;
      }
LAB_00102510:
      iVar14 = iVar5;
      iVar17 = *(int *)param_8;
LAB_001021b0:
      if ((0 < iVar14 - iVar16) && (iVar17 < 1)) {
        icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
                  (param_4 + local_a8,iVar14 - iVar16,param_6,param_2,param_7);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ucasemap_mapUTF8_76_godot(int, unsigned int, icu_76_godot::BreakIterator*, char const*, int, void
   (*)(int, unsigned int, icu_76_godot::BreakIterator*, unsigned char const*, int,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&), icu_76_godot::ByteSink&,
   icu_76_godot::Edits*, UErrorCode&) */

void ucasemap_mapUTF8_76_godot
               (int param_1,uint param_2,BreakIterator *param_3,char *param_4,int param_5,
               _func_void_int_uint_BreakIterator_ptr_uchar_ptr_int_ByteSink_ptr_Edits_ptr_UErrorCode_ptr
               *param_6,ByteSink *param_7,Edits *param_8,UErrorCode *param_9)

{
  size_t sVar1;
  
  if (*(int *)param_9 < 1) {
    if ((param_4 == (char *)0x0 && param_5 != 0) || (param_5 < -1)) {
      *(undefined4 *)param_9 = 1;
    }
    else {
      if (param_5 == -1) {
        sVar1 = strlen(param_4);
        param_5 = (int)sVar1;
      }
      if (param_8 == (Edits *)0x0) {
        (*param_6)(param_1,param_2,param_3,(uchar *)param_4,param_5,param_7,(Edits *)0x0,param_9);
                    /* WARNING: Could not recover jumptable at 0x00102805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_7 + 0x20))(param_7);
        return;
      }
      if ((param_2 & 0x2000) == 0) {
        icu_76_godot::Edits::reset();
      }
      (*param_6)(param_1,param_2,param_3,(uchar *)param_4,param_5,param_7,param_8,param_9);
      (**(code **)(*(long *)param_7 + 0x20))(param_7);
      if (*(int *)param_9 < 1) {
        icu_76_godot::Edits::copyErrorTo((UErrorCode *)param_8);
        return;
      }
    }
  }
  return;
}



/* icu_76_godot::CaseMap::utf8ToLower(char const*, unsigned int, icu_76_godot::StringPiece,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) */

void __thiscall
icu_76_godot::CaseMap::utf8ToLower
          (undefined8 param_1,uint param_2,char *param_3,int param_4,ByteSink *param_5,
          Edits *param_6,UErrorCode *param_7)

{
  int iVar1;
  
  iVar1 = ustrcase_getCaseLocale_76_godot();
  ucasemap_mapUTF8_76_godot
            (iVar1,param_2,(BreakIterator *)0x0,param_3,param_4,ucasemap_internalUTF8ToLower,param_5
             ,param_6,param_7);
  return;
}



/* icu_76_godot::CaseMap::utf8ToUpper(char const*, unsigned int, icu_76_godot::StringPiece,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) */

void __thiscall
icu_76_godot::CaseMap::utf8ToUpper
          (undefined8 param_1,uint param_2,char *param_3,int param_4,ByteSink *param_5,
          Edits *param_6,UErrorCode *param_7)

{
  int iVar1;
  
  iVar1 = ustrcase_getCaseLocale_76_godot();
  ucasemap_mapUTF8_76_godot
            (iVar1,param_2,(BreakIterator *)0x0,param_3,param_4,ucasemap_internalUTF8ToUpper,param_5
             ,param_6,param_7);
  return;
}



/* icu_76_godot::CaseMap::utf8Fold(unsigned int, icu_76_godot::StringPiece, icu_76_godot::ByteSink&,
   icu_76_godot::Edits*, UErrorCode&) */

void __thiscall
icu_76_godot::CaseMap::utf8Fold
          (uint param_1,char *param_2,int param_3,ByteSink *param_4,Edits *param_5,
          UErrorCode *param_6)

{
  ucasemap_mapUTF8_76_godot
            (1,param_1,(BreakIterator *)0x0,param_2,param_3,ucasemap_internalUTF8Fold,param_4,
             param_5,param_6);
  return;
}



/* ucasemap_mapUTF8_76_godot(int, unsigned int, icu_76_godot::BreakIterator*, char*, int, char
   const*, int, void (*)(int, unsigned int, icu_76_godot::BreakIterator*, unsigned char const*, int,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&), icu_76_godot::Edits*, UErrorCode&)
    */

undefined4
ucasemap_mapUTF8_76_godot
          (int param_1,uint param_2,BreakIterator *param_3,char *param_4,int param_5,char *param_6,
          int param_7,
          _func_void_int_uint_BreakIterator_ptr_uchar_ptr_int_ByteSink_ptr_Edits_ptr_UErrorCode_ptr
          *param_8,Edits *param_9,UErrorCode *param_10)

{
  undefined4 uVar1;
  size_t sVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  CheckedArrayByteSink *local_88;
  CheckedArrayByteSink local_68 [24];
  undefined4 local_50;
  char local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_10) goto LAB_00102989;
  if ((param_5 < 0) || ((param_4 == (char *)0x0 && (0 < param_5)))) {
LAB_00102982:
    *(undefined4 *)param_10 = 1;
  }
  else {
    if (param_6 == (char *)0x0) {
      if (param_7 == 0) goto LAB_00102a3f;
      goto LAB_00102982;
    }
    if (param_7 < -1) goto LAB_00102982;
    if (param_7 == -1) {
      sVar2 = strlen(param_6);
      param_7 = (int)sVar2;
    }
    if (param_4 != (char *)0x0) {
      if (param_6 < param_4) {
        pcVar3 = param_6 + param_7;
      }
      else {
        if (param_6 < param_4 + param_5) goto LAB_00102982;
        if (param_4 != param_6) goto LAB_00102a3f;
        pcVar3 = param_4 + param_7;
      }
      if (param_4 < pcVar3) goto LAB_00102982;
    }
LAB_00102a3f:
    if (param_9 == (Edits *)0x0) {
      icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(local_68,param_4,param_5);
      (*param_8)(param_1,param_2,param_3,(uchar *)param_6,param_7,(ByteSink *)local_68,(Edits *)0x0,
                 param_10);
      if (*(int *)param_10 < 1) {
LAB_00102abf:
        if (local_4c == '\0') {
          uVar1 = u_terminateChars_76_godot(param_4,param_5,local_50,param_10);
        }
        else {
          *(undefined4 *)param_10 = 0xf;
          uVar1 = local_50;
        }
LAB_00102ad6:
        local_88 = local_68;
        icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_88);
        if ((*(int *)param_10 < 1) && (param_9 != (Edits *)0x0)) {
          icu_76_godot::Edits::copyErrorTo((UErrorCode *)param_9);
        }
        goto LAB_0010298c;
      }
      icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_68);
    }
    else if (((param_2 & 0x2000) != 0) || (icu_76_godot::Edits::reset(), *(int *)param_10 < 1)) {
      icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(local_68,param_4,param_5);
      (*param_8)(param_1,param_2,param_3,(uchar *)param_6,param_7,(ByteSink *)local_68,param_9,
                 param_10);
      uVar1 = 0;
      if (*(int *)param_10 < 1) goto LAB_00102abf;
      goto LAB_00102ad6;
    }
  }
LAB_00102989:
  uVar1 = 0;
LAB_0010298c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



void ucasemap_utf8ToLower_76_godot
               (long param_1,char *param_2,int param_3,char *param_4,int param_5,UErrorCode *param_6
               )

{
  ucasemap_mapUTF8_76_godot
            (*(int *)(param_1 + 0x28),*(uint *)(param_1 + 0x2c),(BreakIterator *)0x0,param_2,param_3
             ,param_4,param_5,ucasemap_internalUTF8ToLower,(Edits *)0x0,param_6);
  return;
}



void ucasemap_utf8ToUpper_76_godot
               (long param_1,char *param_2,int param_3,char *param_4,int param_5,UErrorCode *param_6
               )

{
  ucasemap_mapUTF8_76_godot
            (*(int *)(param_1 + 0x28),*(uint *)(param_1 + 0x2c),(BreakIterator *)0x0,param_2,param_3
             ,param_4,param_5,ucasemap_internalUTF8ToUpper,(Edits *)0x0,param_6);
  return;
}



void ucasemap_utf8FoldCase_76_godot
               (long param_1,char *param_2,int param_3,char *param_4,int param_5,UErrorCode *param_6
               )

{
  ucasemap_mapUTF8_76_godot
            (1,*(uint *)(param_1 + 0x2c),(BreakIterator *)0x0,param_2,param_3,param_4,param_5,
             ucasemap_internalUTF8Fold,(Edits *)0x0,param_6);
  return;
}



/* icu_76_godot::CaseMap::utf8ToLower(char const*, unsigned int, char const*, int, char*, int,
   icu_76_godot::Edits*, UErrorCode&) */

void icu_76_godot::CaseMap::utf8ToLower
               (char *param_1,uint param_2,char *param_3,int param_4,char *param_5,int param_6,
               Edits *param_7,UErrorCode *param_8)

{
  int iVar1;
  
  iVar1 = ustrcase_getCaseLocale_76_godot();
  ucasemap_mapUTF8_76_godot
            (iVar1,param_2,(BreakIterator *)0x0,param_5,param_6,param_3,param_4,
             ucasemap_internalUTF8ToLower,param_7,param_8);
  return;
}



/* icu_76_godot::CaseMap::utf8ToUpper(char const*, unsigned int, char const*, int, char*, int,
   icu_76_godot::Edits*, UErrorCode&) */

void icu_76_godot::CaseMap::utf8ToUpper
               (char *param_1,uint param_2,char *param_3,int param_4,char *param_5,int param_6,
               Edits *param_7,UErrorCode *param_8)

{
  int iVar1;
  
  iVar1 = ustrcase_getCaseLocale_76_godot();
  ucasemap_mapUTF8_76_godot
            (iVar1,param_2,(BreakIterator *)0x0,param_5,param_6,param_3,param_4,
             ucasemap_internalUTF8ToUpper,param_7,param_8);
  return;
}



/* icu_76_godot::CaseMap::utf8Fold(unsigned int, char const*, int, char*, int, icu_76_godot::Edits*,
   UErrorCode&) */

void icu_76_godot::CaseMap::utf8Fold
               (uint param_1,char *param_2,int param_3,char *param_4,int param_5,Edits *param_6,
               UErrorCode *param_7)

{
  ucasemap_mapUTF8_76_godot
            (1,param_1,(BreakIterator *)0x0,param_4,param_5,param_2,param_3,
             ucasemap_internalUTF8Fold,param_6,param_7);
  return;
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
LAB_001030bf:
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
      goto LAB_001030bf;
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


