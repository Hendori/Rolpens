
/* icu_76_godot::CanonicalIterator::getDynamicClassID() const */

undefined1 * icu_76_godot::CanonicalIterator::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::CanonicalIterator::getStaticClassID() */

undefined1 * icu_76_godot::CanonicalIterator::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::CanonicalIterator::cleanPieces() */

void icu_76_godot::CanonicalIterator::cleanPieces(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *in_RSI;
  long in_RDI;
  
  lVar3 = *(long *)(in_RDI + 0x50);
  if (lVar3 != 0) {
    if (0 < *(int *)(in_RDI + 0x58)) {
      lVar4 = 0;
      do {
        while( true ) {
          lVar2 = *(long *)(lVar3 + lVar4 * 8);
          if (lVar2 == 0) break;
          lVar3 = *(long *)(lVar2 + -8) * 0x40 + lVar2;
          if (lVar2 != lVar3) {
            do {
              puVar1 = (undefined8 *)(lVar3 + -0x40);
              lVar3 = lVar3 + -0x40;
              (**(code **)*puVar1)(lVar3);
            } while (*(long *)(*(long *)(in_RDI + 0x50) + lVar4 * 8) != lVar3);
          }
          lVar4 = lVar4 + 1;
          icu_76_godot::UMemory::operator_delete__((UMemory *)(lVar3 + -8),in_RSI);
          lVar3 = *(long *)(in_RDI + 0x50);
          if (*(int *)(in_RDI + 0x58) <= (int)lVar4) goto LAB_001000ae;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(in_RDI + 0x58));
    }
LAB_001000ae:
    uprv_free_76_godot();
    *(undefined8 *)(in_RDI + 0x50) = 0;
    *(undefined4 *)(in_RDI + 0x58) = 0;
  }
  if (*(long *)(in_RDI + 0x60) != 0) {
    uprv_free_76_godot();
    *(undefined8 *)(in_RDI + 0x60) = 0;
  }
  if (*(long *)(in_RDI + 0x68) != 0) {
    uprv_free_76_godot();
    *(undefined8 *)(in_RDI + 0x68) = 0;
    *(undefined4 *)(in_RDI + 0x70) = 0;
  }
  return;
}



/* icu_76_godot::CanonicalIterator::~CanonicalIterator() */

void __thiscall icu_76_godot::CanonicalIterator::~CanonicalIterator(CanonicalIterator *this)

{
  *(undefined ***)this = &PTR__CanonicalIterator_00101dd0;
  cleanPieces();
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x78));
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 8));
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::CanonicalIterator::~CanonicalIterator() */

void __thiscall icu_76_godot::CanonicalIterator::~CanonicalIterator(CanonicalIterator *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__CanonicalIterator_00101dd0;
  cleanPieces();
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x78));
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 8));
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::CanonicalIterator::getSource() */

void icu_76_godot::CanonicalIterator::getSource(void)

{
  long in_RSI;
  UnicodeString *in_RDI;
  
  icu_76_godot::UnicodeString::UnicodeString(in_RDI,(UnicodeString *)(in_RSI + 8));
  return;
}



/* icu_76_godot::CanonicalIterator::reset() */

void __thiscall icu_76_godot::CanonicalIterator::reset(CanonicalIterator *this)

{
  long lVar1;
  long lVar2;
  
  this[0x48] = (CanonicalIterator)0x0;
  if (0 < *(int *)(this + 0x70)) {
    lVar1 = *(long *)(this + 0x68);
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar1 + lVar2 * 4) = 0;
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(this + 0x70));
  }
  return;
}



/* icu_76_godot::CanonicalIterator::next() */

void icu_76_godot::CanonicalIterator::next(void)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long in_RSI;
  UnicodeString *in_RDI;
  long lVar5;
  
  if (*(char *)(in_RSI + 0x48) != '\0') {
    icu_76_godot::UnicodeString::setToBogus();
    icu_76_godot::UnicodeString::UnicodeString(in_RDI,(UnicodeString *)(in_RSI + 0x78));
    return;
  }
  uVar2 = *(ushort *)(in_RSI + 0x80) & 0x1f;
  if ((*(ushort *)(in_RSI + 0x80) & 1) != 0) {
    uVar2 = 2;
  }
  *(ushort *)(in_RSI + 0x80) = uVar2;
  if (0 < *(int *)(in_RSI + 0x58)) {
    lVar5 = 0;
    do {
      lVar1 = lVar5 * 4;
      lVar4 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      icu_76_godot::UnicodeString::doAppend
                ((UnicodeString *)(in_RSI + 0x78),
                 *(int *)(*(long *)(in_RSI + 0x68) + lVar1) * 0x40 +
                 (int)*(undefined8 *)(*(long *)(in_RSI + 0x50) + lVar4),0);
    } while ((int)lVar5 < *(int *)(in_RSI + 0x58));
  }
  iVar3 = *(int *)(in_RSI + 0x70) + -1;
  if (-1 < iVar3) {
    lVar5 = *(long *)(in_RSI + 0x68);
    lVar1 = *(long *)(in_RSI + 0x60);
    lVar4 = (long)iVar3;
    do {
      iVar3 = *(int *)(lVar5 + lVar4 * 4) + 1;
      *(int *)(lVar5 + lVar4 * 4) = iVar3;
      if (iVar3 < *(int *)(lVar1 + lVar4 * 4)) goto LAB_001002ad;
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + -1;
    } while (-1 < (int)lVar4);
  }
  *(undefined1 *)(in_RSI + 0x48) = 1;
LAB_001002ad:
  icu_76_godot::UnicodeString::UnicodeString(in_RDI,(UnicodeString *)(in_RSI + 0x78));
  return;
}



/* icu_76_godot::CanonicalIterator::permute(icu_76_godot::UnicodeString&, signed char,
   icu_76_godot::Hashtable*, UErrorCode&, int) */

void icu_76_godot::CanonicalIterator::permute
               (UnicodeString *param_1,char param_2,undefined8 *param_3,int *param_4,int param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  UnicodeString *pUVar8;
  UnicodeString *pUVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long in_FS_OFFSET;
  undefined4 local_ec;
  undefined1 *local_e8;
  undefined1 local_e0 [88];
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 1) {
    if (param_5 < 9) {
      if (*(short *)(param_1 + 8) < 0) {
        iVar3 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar3 = (int)(*(short *)(param_1 + 8) >> 5);
      }
      if (iVar3 < 3) {
        uVar10 = 0;
        iVar3 = icu_76_godot::UnicodeString::countChar32((int)param_1,0);
        if (iVar3 < 2) {
          pUVar9 = (UnicodeString *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,uVar10);
          if (pUVar9 != (UnicodeString *)0x0) {
            pUVar8 = param_1;
            icu_76_godot::UnicodeString::UnicodeString(pUVar9,param_1);
            pUVar8 = (UnicodeString *)
                     icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar8);
            if (pUVar8 != (UnicodeString *)0x0) {
              icu_76_godot::UnicodeString::UnicodeString(pUVar8,param_1);
            }
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              uhash_put_76_godot(*param_3,pUVar8,pUVar9,param_4);
              return;
            }
            goto LAB_00100708;
          }
          *param_4 = 7;
        }
        else {
          local_e8 = (undefined1 *)0x0;
          if (*param_4 < 1) goto LAB_00100383;
        }
      }
      else {
LAB_00100383:
        local_e8 = (undefined1 *)0x0;
        uhash_init_76_godot(local_e0,&uhash_hashUnicodeString_76_godot,
                            &uhash_compareUnicodeString_76_godot,0);
        if ((*param_4 < 1) &&
           (local_e8 = local_e0, uhash_setKeyDeleter_76_godot(local_e0,&uprv_deleteUObject_76_godot)
           , *param_4 < 1)) {
          iVar3 = 0;
          uhash_setValueDeleter_76_godot(local_e8,&uprv_deleteUObject_76_godot);
          sVar2 = *(short *)(param_1 + 8);
          if (sVar2 < 0) goto LAB_00100657;
LAB_001004d0:
          iVar4 = (int)(sVar2 >> 5);
          do {
            if (iVar4 <= iVar3) break;
            uVar5 = icu_76_godot::UnicodeString::char32At((int)param_1);
            local_ec = 0xffffffff;
            icu_76_godot::UnicodeString::UnicodeString(local_88,param_1);
            if (((param_2 == '\0') || (iVar3 == 0)) ||
               (cVar1 = u_getCombiningClass_76_godot(uVar5), cVar1 != '\0')) {
              uhash_removeAll_76_godot(local_e8);
              uVar6 = icu_76_godot::UnicodeString::doReplace
                                ((int)local_88,iVar3,(wchar16 *)(ulong)((0xffff < uVar5) + 1),0,0);
              permute(uVar6,(int)param_2,&local_e8);
              if (0 < *param_4) {
LAB_0010066c:
                icu_76_godot::UnicodeString::~UnicodeString(local_88);
                break;
              }
              puVar11 = &local_ec;
              lVar7 = uhash_nextElement_76_godot(local_e8);
              while (lVar7 != 0) {
                uVar10 = *(ulong *)(lVar7 + 8);
                pUVar9 = (UnicodeString *)
                         icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)puVar11);
                if (pUVar9 == (UnicodeString *)0x0) {
                  *param_4 = 7;
                  goto LAB_0010066c;
                }
                icu_76_godot::UnicodeString::UnicodeString(pUVar9,uVar5);
                icu_76_godot::UnicodeString::doAppend(pUVar9,(int)uVar10,0);
                pUVar8 = (UnicodeString *)
                         icu_76_godot::UMemory::operator_new((UMemory *)0x40,uVar10);
                if (pUVar8 != (UnicodeString *)0x0) {
                  icu_76_godot::UnicodeString::UnicodeString(pUVar8,pUVar9);
                }
                uhash_put_76_godot(*param_3,pUVar8,pUVar9);
                puVar11 = &local_ec;
                lVar7 = uhash_nextElement_76_godot(local_e8);
              }
            }
            icu_76_godot::UnicodeString::~UnicodeString(local_88);
            iVar3 = iVar3 + 1 + (uint)(0xffff < uVar5);
            sVar2 = *(short *)(param_1 + 8);
            if (-1 < sVar2) goto LAB_001004d0;
LAB_00100657:
            iVar4 = *(int *)(param_1 + 0xc);
          } while( true );
        }
        if (local_e8 != (undefined1 *)0x0) {
          uhash_close_76_godot();
        }
      }
    }
    else {
      *param_4 = 0x10;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100708:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::CanonicalIterator::getEquivalents2(icu_76_godot::Hashtable*, char16_t const*, int,
   UErrorCode&) [clone .part.0] */

Hashtable * __thiscall
icu_76_godot::CanonicalIterator::getEquivalents2
          (CanonicalIterator *this,Hashtable *param_1,wchar16 *param_2,int param_3,
          UErrorCode *param_4)

{
  char cVar1;
  int iVar2;
  UnicodeString *pUVar3;
  UnicodeString *pUVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined4 local_26c;
  UnicodeSetIterator local_268 [8];
  int local_260;
  undefined1 *local_228;
  undefined1 local_220 [88];
  UnicodeString local_1c8 [64];
  UnicodeString local_188 [64];
  UnicodeString local_148 [64];
  UnicodeSet local_108 [200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pUVar4 = (UnicodeString *)param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_1c8,param_2,param_3);
  pUVar3 = (UnicodeString *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar4);
  if (pUVar3 != (UnicodeString *)0x0) {
    pUVar4 = local_1c8;
    icu_76_godot::UnicodeString::UnicodeString(pUVar3,local_1c8);
  }
  pUVar4 = (UnicodeString *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar4);
  if (pUVar4 != (UnicodeString *)0x0) {
    icu_76_godot::UnicodeString::UnicodeString(pUVar4,local_1c8);
  }
  uhash_put_76_godot(*(undefined8 *)param_1,pUVar4,pUVar3,param_4);
  icu_76_godot::UnicodeSet::UnicodeSet(local_108);
  iVar6 = 0;
  if (0 < param_3) {
    do {
      uVar7 = (uint)(ushort)param_2[iVar6];
      if ((uVar7 & 0xf800) == 0xd800) {
        if ((param_2[iVar6] & 0x400U) != 0) {
          if ((iVar6 < 1) || (((ushort)param_2[(long)iVar6 + -1] & 0xfffffc00) != 0xd800))
          goto LAB_001007fb;
          uVar7 = uVar7 + 0xfca02400 + (uint)(ushort)param_2[(long)iVar6 + -1] * 0x400;
          cVar1 = icu_76_godot::Normalizer2Impl::getCanonStartSet
                            ((int)*(undefined8 *)(this + 0xc0),(UnicodeSet *)(ulong)uVar7);
          if (cVar1 != '\0') goto LAB_00100824;
          goto LAB_00100bfb;
        }
        if ((param_3 == iVar6 + 1) || ((param_2[(long)iVar6 + 1] & 0xfc00U) != 0xdc00))
        goto LAB_001007fb;
        uVar7 = (ushort)param_2[(long)iVar6 + 1] + 0xfca02400 + uVar7 * 0x400;
        cVar1 = icu_76_godot::Normalizer2Impl::getCanonStartSet
                          ((int)*(undefined8 *)(this + 0xc0),(UnicodeSet *)(ulong)uVar7);
        if (cVar1 != '\0') goto LAB_00100824;
LAB_00100a60:
        iVar2 = 2;
      }
      else {
LAB_001007fb:
        cVar1 = icu_76_godot::Normalizer2Impl::getCanonStartSet
                          ((int)*(undefined8 *)(this + 0xc0),(UnicodeSet *)(ulong)uVar7);
        if (cVar1 != '\0') {
LAB_00100824:
          icu_76_godot::UnicodeSetIterator::UnicodeSetIterator(local_268,local_108);
          while (cVar1 = icu_76_godot::UnicodeSetIterator::next(), iVar2 = local_260, cVar1 != '\0')
          {
            local_228 = (undefined1 *)0x0;
            if (*(int *)param_4 < 1) {
              uhash_init_76_godot(local_220,&uhash_hashUnicodeString_76_godot,
                                  &uhash_compareUnicodeString_76_godot,0,param_4);
              if (*(int *)param_4 < 1) {
                local_228 = local_220;
                uhash_setKeyDeleter_76_godot(local_220);
                goto LAB_00100897;
              }
              uhash_setValueDeleter_76_godot(local_228,&uprv_deleteUObject_76_godot);
              if (*(int *)param_4 < 1) goto LAB_001008a7;
LAB_00100b27:
              if (local_228 != (undefined1 *)0x0) {
                uhash_close_76_godot();
              }
              icu_76_godot::UnicodeSetIterator::~UnicodeSetIterator(local_268);
              goto LAB_00100b3b;
            }
LAB_00100897:
            uhash_setValueDeleter_76_godot(local_228,&uprv_deleteUObject_76_godot);
            if (0 < *(int *)param_4) goto LAB_00100b27;
LAB_001008a7:
            lVar5 = extract(this,(Hashtable *)&local_228,iVar2,param_2,param_3,iVar6,param_4);
            if (lVar5 == 0) {
              if (0 < *(int *)param_4) goto LAB_00100b27;
            }
            else {
              icu_76_godot::UnicodeString::UnicodeString(local_188,param_2,iVar6);
              icu_76_godot::UnicodeString::append((int)local_188);
              local_26c = 0xffffffff;
              lVar5 = uhash_nextElement_76_godot(local_228,&local_26c);
              while (lVar5 != 0) {
                pUVar4 = *(UnicodeString **)(lVar5 + 8);
                icu_76_godot::UnicodeString::UnicodeString(local_148,pUVar4);
                pUVar4 = (UnicodeString *)
                         icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar4);
                if (pUVar4 == (UnicodeString *)0x0) {
                  *(undefined4 *)param_4 = 7;
                  icu_76_godot::UnicodeString::~UnicodeString(local_148);
                  goto LAB_00100c8e;
                }
                icu_76_godot::UnicodeString::UnicodeString(pUVar4,local_188);
                pUVar3 = local_148;
                icu_76_godot::UnicodeString::doAppend(pUVar4,(int)local_148,0);
                pUVar3 = (UnicodeString *)
                         icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar3);
                if (pUVar3 != (UnicodeString *)0x0) {
                  icu_76_godot::UnicodeString::UnicodeString(pUVar3,pUVar4);
                }
                uhash_put_76_godot(*(undefined8 *)param_1,pUVar3,pUVar4);
                lVar5 = uhash_nextElement_76_godot(local_228,&local_26c);
                icu_76_godot::UnicodeString::~UnicodeString(local_148);
              }
              iVar2 = uhash_count_76_godot(*(undefined8 *)param_1);
              if (0x1000 < iVar2) {
                *(undefined4 *)param_4 = 0x10;
LAB_00100c8e:
                icu_76_godot::UnicodeString::~UnicodeString(local_188);
                goto LAB_00100b27;
              }
              icu_76_godot::UnicodeString::~UnicodeString(local_188);
            }
            if (local_228 != (undefined1 *)0x0) {
              uhash_close_76_godot();
            }
          }
          icu_76_godot::UnicodeSetIterator::~UnicodeSetIterator(local_268);
LAB_00100bfb:
          if (0xffff < (int)uVar7) goto LAB_00100a60;
        }
        iVar2 = 1;
      }
      iVar6 = iVar6 + iVar2;
    } while (iVar6 < param_3);
  }
  if (0 < *(int *)param_4) {
LAB_00100b3b:
    param_1 = (Hashtable *)0x0;
  }
  icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
  icu_76_godot::UnicodeString::~UnicodeString(local_1c8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::CanonicalIterator::getEquivalents2(icu_76_godot::Hashtable*, char16_t const*, int,
   UErrorCode&) */

undefined8 __thiscall
icu_76_godot::CanonicalIterator::getEquivalents2
          (CanonicalIterator *this,Hashtable *param_1,wchar16 *param_2,int param_3,
          UErrorCode *param_4)

{
  undefined8 uVar1;
  
  if (*(int *)param_4 < 1) {
    uVar1 = getEquivalents2(this,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::CanonicalIterator::extract(icu_76_godot::Hashtable*, int, char16_t const*, int,
   int, UErrorCode&) [clone .part.0] */

Hashtable * __thiscall
icu_76_godot::CanonicalIterator::extract
          (CanonicalIterator *this,Hashtable *param_1,int param_2,wchar16 *param_3,int param_4,
          int param_5,UErrorCode *param_6)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  UnicodeString *this_00;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  long in_FS_OFFSET;
  int local_114;
  UnicodeString local_108 [8];
  ushort local_100;
  undefined1 local_fe [2];
  int local_fc;
  undefined1 *local_f0;
  code *local_c8;
  ushort local_c0;
  ushort local_be;
  int local_bc;
  ushort *local_b0;
  code *local_88;
  short local_80;
  uint local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UnicodeString::UnicodeString(local_108,param_2);
  if ((short)local_100 < 0) {
    local_114 = local_fc;
  }
  else {
    local_114 = (int)((short)local_100 >> 5);
  }
  local_c8 = icu_76_godot::UnicodeString::doCompare;
  local_c0 = 2;
  (**(code **)(**(long **)(this + 0xb8) + 0x18))
            (*(long **)(this + 0xb8),local_108,(UnicodeString *)&local_c8,param_6);
  if (*(int *)param_6 < 1) {
    if ((local_c0 & 1) == 0) {
      if ((local_c0 & 0x11) == 0) {
        puVar12 = &local_be;
        if ((local_c0 & 2) == 0) {
          puVar12 = local_b0;
        }
      }
      else {
        puVar12 = (ushort *)0x0;
      }
      iVar11 = local_bc;
      if (-1 < (short)local_c0) {
        iVar11 = (int)((short)local_c0 >> 5);
      }
      uVar8 = (uint)*puVar12;
      if (((uVar8 & 0xfffffc00) == 0xd800) && (iVar11 != 1)) {
        iVar9 = 1;
        if ((puVar12[1] & 0xfc00) == 0xdc00) {
          iVar9 = 2;
          uVar8 = puVar12[1] + 0xfca02400 + (uint)*puVar12 * 0x400;
        }
      }
      else {
        iVar9 = 1;
      }
      iVar4 = param_5;
      if (param_5 < param_4) {
LAB_00100e40:
        do {
          iVar1 = iVar4 + 1;
          uVar10 = (uint)(ushort)param_3[iVar4];
          if ((((uVar10 & 0xfffffc00) == 0xd800) && (iVar1 != param_4)) &&
             (((ushort)param_3[(long)iVar4 + 1] & 0xfffffc00) == 0xdc00)) {
            uVar10 = (ushort)param_3[(long)iVar4 + 1] + 0xfca02400 +
                     (uint)(ushort)param_3[iVar4] * 0x400;
            iVar1 = iVar4 + 2;
          }
          iVar4 = iVar1;
          if (uVar10 == uVar8) {
            if (iVar11 == iVar9) {
              icu_76_godot::UnicodeString::doAppend((wchar16 *)local_108,(int)(param_3 + iVar4),0);
              iVar11 = (int)((short)local_100 >> 5);
              if ((short)local_100 < 0) {
                iVar11 = local_fc;
              }
              if (local_114 == iVar11) {
                puVar6 = (undefined8 *)
                         icu_76_godot::UMemory::operator_new
                                   ((UMemory *)0x40,(ulong)(param_3 + iVar4));
                if (puVar6 != (undefined8 *)0x0) {
                  *puVar6 = icu_76_godot::UnicodeString::doCompare;
                  *(undefined2 *)(puVar6 + 1) = 2;
                }
                local_88 = icu_76_godot::UnicodeString::doCompare;
                local_80 = 2;
                this_00 = (UnicodeString *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,2);
                if (this_00 != (UnicodeString *)0x0) {
                  icu_76_godot::UnicodeString::UnicodeString(this_00,(UnicodeString *)&local_88);
                }
                uhash_put_76_godot(*(undefined8 *)param_1,this_00,puVar6,param_6);
                icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
              }
              else {
                local_88 = icu_76_godot::UnicodeString::doCompare;
                local_80 = 2;
                (**(code **)(**(long **)(this + 0xb8) + 0x18))
                          (*(long **)(this + 0xb8),local_108,(UnicodeString *)&local_88,param_6);
                if (*(int *)param_6 < 1) {
                  if (-1 < local_80) {
                    local_7c = (uint)(local_80 >> 5);
                  }
                  cVar3 = icu_76_godot::UnicodeString::doCompare
                                    ((int)(UnicodeString *)&local_88,0,(wchar16 *)(ulong)local_7c,
                                     (int)param_3 + param_5 * 2,0);
                  if (cVar3 != '\0') goto LAB_00101087;
                  iVar11 = (int)((short)local_100 >> 5);
                  if ((short)local_100 < 0) {
                    iVar11 = local_fc;
                  }
                  if ((local_100 & 0x11) == 0) {
                    puVar7 = local_fe;
                    if ((local_100 & 2) == 0) {
                      puVar7 = local_f0;
                    }
                  }
                  else {
                    puVar7 = (undefined1 *)0x0;
                  }
                  if (0 < *(int *)param_6) goto LAB_00101087;
                  param_1 = (Hashtable *)
                            getEquivalents2(this,param_1,(wchar16 *)(puVar7 + (long)local_114 * 2),
                                            iVar11 - local_114,param_6);
                }
                else {
LAB_00101087:
                  param_1 = (Hashtable *)0x0;
                }
                icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
              }
              goto LAB_00100ee7;
            }
            iVar1 = iVar9 + 1;
            uVar2 = puVar12[iVar9];
            uVar8 = (uint)uVar2;
            if ((((uVar2 & 0xfc00) == 0xd800) && (iVar11 != iVar1)) &&
               (lVar5 = (long)iVar9, (puVar12[lVar5 + 1] & 0xfc00) == 0xdc00)) {
              iVar9 = iVar9 + 2;
              uVar8 = puVar12[lVar5 + 1] + 0xfca02400 + (uint)uVar2 * 0x400;
              if (param_4 <= iVar4) break;
              goto LAB_00100e40;
            }
          }
          else {
            icu_76_godot::UnicodeString::append((int)local_108);
            iVar1 = iVar9;
          }
          iVar9 = iVar1;
        } while (iVar4 < param_4);
      }
    }
    else {
      *(undefined4 *)param_6 = 7;
    }
  }
  param_1 = (Hashtable *)0x0;
LAB_00100ee7:
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_c8);
  icu_76_godot::UnicodeString::~UnicodeString(local_108);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::CanonicalIterator::extract(icu_76_godot::Hashtable*, int, char16_t const*, int,
   int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::CanonicalIterator::extract
          (CanonicalIterator *this,Hashtable *param_1,int param_2,wchar16 *param_3,int param_4,
          int param_5,UErrorCode *param_6)

{
  undefined8 uVar1;
  
  if (*(int *)param_6 < 1) {
    uVar1 = extract(this,param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::CanonicalIterator::getEquivalents(icu_76_godot::UnicodeString const&, int&,
   UErrorCode&) */

ulong * __thiscall
icu_76_godot::CanonicalIterator::getEquivalents
          (CanonicalIterator *this,UnicodeString *param_1,int *param_2,UErrorCode *param_3)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  UnicodeString *this_00;
  UnicodeString *pUVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined4 local_434;
  wchar16 *local_430;
  undefined1 *local_428;
  undefined1 local_420 [88];
  undefined1 *local_3c8;
  undefined1 local_3c0 [88];
  undefined1 *local_368;
  undefined1 local_360 [88];
  UnicodeString local_308 [64];
  UnicodeString local_2c8 [64];
  code *local_288;
  ushort local_280;
  int local_27c;
  wchar16 local_248 [260];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_428 = (undefined1 *)0x0;
  if (*(int *)param_3 < 1) {
    uhash_init_76_godot(local_420,&uhash_hashUnicodeString_76_godot,
                        &uhash_compareUnicodeString_76_godot,0,param_3);
    if (0 < *(int *)param_3) goto LAB_0010125c;
    local_428 = local_420;
    uhash_setKeyDeleter_76_godot(local_420,&uprv_deleteUObject_76_godot);
    local_3c8 = (undefined1 *)0x0;
    if (*(int *)param_3 < 1) {
      uhash_init_76_godot(local_3c0,&uhash_hashUnicodeString_76_godot,
                          &uhash_compareUnicodeString_76_godot,0,param_3);
      if (*(int *)param_3 < 1) {
        local_3c8 = local_3c0;
        uhash_setKeyDeleter_76_godot(local_3c0,&uprv_deleteUObject_76_godot);
        local_368 = (undefined1 *)0x0;
        if (*(int *)param_3 < 1) {
          uhash_init_76_godot(local_360,&uhash_hashUnicodeString_76_godot,
                              &uhash_compareUnicodeString_76_godot,0,param_3);
          if ((*(int *)param_3 < 1) &&
             (local_368 = local_360,
             uhash_setKeyDeleter_76_godot(local_360,&uprv_deleteUObject_76_godot),
             *(int *)param_3 < 1)) {
            uhash_setValueDeleter_76_godot(local_428,&uprv_deleteUObject_76_godot);
            uhash_setValueDeleter_76_godot(local_3c8,&uprv_deleteUObject_76_godot);
            uhash_setValueDeleter_76_godot(local_368,&uprv_deleteUObject_76_godot);
            local_430 = local_248;
            iVar3 = icu_76_godot::UnicodeString::extract(param_1,&local_430,0x100,param_3);
            if ((0 < *(int *)param_3) ||
               (getEquivalents2(this,(Hashtable *)&local_368,local_248,iVar3,param_3),
               0 < *(int *)param_3)) goto LAB_001013ac;
            local_434 = 0xffffffff;
            puVar9 = &local_434;
            lVar4 = uhash_nextElement_76_godot(local_368);
            while (lVar4 != 0) {
              icu_76_godot::UnicodeString::UnicodeString(local_308,*(UnicodeString **)(lVar4 + 8));
              uhash_removeAll_76_godot(local_3c8);
              permute(local_308,1,&local_3c8,param_3,0);
              local_430 = (wchar16 *)CONCAT44(local_430._4_4_,0xffffffff);
              lVar4 = uhash_nextElement_76_godot(local_3c8,&local_430);
              while (lVar4 != 0) {
                icu_76_godot::UnicodeString::UnicodeString(local_2c8,*(UnicodeString **)(lVar4 + 8))
                ;
                local_280 = 2;
                local_288 = icu_76_godot::UnicodeString::doCompare;
                pUVar5 = local_2c8;
                (**(code **)(**(long **)(this + 0xb8) + 0x18))
                          (*(long **)(this + 0xb8),local_2c8,(UnicodeString *)&local_288,param_3);
                if ((local_280 & 1) == 0) {
                  iVar3 = local_27c;
                  if (-1 < (short)local_280) {
                    iVar3 = (int)((short)local_280 >> 5);
                  }
                  uVar1 = *(ushort *)(param_1 + 8);
                  if ((short)uVar1 < 0) {
                    iVar8 = *(int *)(param_1 + 0xc);
                  }
                  else {
                    iVar8 = (int)((short)uVar1 >> 5);
                  }
                  if ((iVar8 == iVar3) && ((uVar1 & 1) == 0)) {
                    pUVar5 = param_1 + 10;
                    if ((uVar1 & 2) == 0) {
                      pUVar5 = *(UnicodeString **)(param_1 + 0x18);
                    }
                    bVar2 = icu_76_godot::UnicodeString::doEquals((wchar16 *)&local_288,(int)pUVar5)
                    ;
                    goto joined_r0x0010153e;
                  }
                }
                else {
                  bVar2 = (byte)param_1[8] & 1;
joined_r0x0010153e:
                  if (bVar2 != 0) {
                    this_00 = (UnicodeString *)
                              icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar5);
                    if (this_00 != (UnicodeString *)0x0) {
                      pUVar5 = local_2c8;
                      icu_76_godot::UnicodeString::UnicodeString(this_00,local_2c8);
                    }
                    pUVar5 = (UnicodeString *)
                             icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar5);
                    if (pUVar5 != (UnicodeString *)0x0) {
                      icu_76_godot::UnicodeString::UnicodeString(pUVar5,local_2c8);
                    }
                    uhash_put_76_godot(local_428,pUVar5,this_00,param_3);
                  }
                }
                lVar4 = uhash_nextElement_76_godot(local_3c8,&local_430);
                icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_288);
                icu_76_godot::UnicodeString::~UnicodeString(local_2c8);
              }
              puVar9 = &local_434;
              lVar4 = uhash_nextElement_76_godot(local_368);
              icu_76_godot::UnicodeString::~UnicodeString(local_308);
            }
            if (0 < *(int *)param_3) goto LAB_001013ac;
            iVar3 = uhash_count_76_godot(local_428);
            if (iVar3 == 0) {
              *(undefined4 *)param_3 = 1;
              puVar7 = (ulong *)0x0;
            }
            else {
              uVar10 = (ulong)iVar3;
              if (uVar10 >> 0x39 == 0) {
                puVar6 = (ulong *)icu_76_godot::UMemory::operator_new__
                                            ((UMemory *)(uVar10 * 0x40 + 8),(ulong)puVar9);
                if (puVar6 == (ulong *)0x0) {
LAB_001017b1:
                  *(undefined4 *)param_3 = 7;
                  puVar7 = (ulong *)0x0;
                  goto LAB_001013b6;
                }
                puVar7 = puVar6 + 1;
                *puVar6 = uVar10;
                lVar4 = uVar10 - 1;
                puVar6 = puVar7;
                do {
                  lVar4 = lVar4 + -1;
                  *puVar6 = (ulong)icu_76_godot::UnicodeString::doCompare;
                  *(undefined2 *)(puVar6 + 1) = 2;
                  puVar6 = puVar6 + 8;
                } while (lVar4 != -1);
              }
              else {
                puVar7 = (ulong *)icu_76_godot::UMemory::operator_new__
                                            ((UMemory *)0xffffffffffffffff,(ulong)puVar9);
                if (puVar7 == (ulong *)0x0) goto LAB_001017b1;
                *puVar7 = uVar10;
                puVar7 = puVar7 + 1;
              }
              local_434 = 0xffffffff;
              *param_2 = 0;
              lVar4 = uhash_nextElement_76_godot(local_428,&local_434);
              while (lVar4 != 0) {
                iVar3 = *param_2;
                pUVar5 = *(UnicodeString **)(lVar4 + 8);
                *param_2 = iVar3 + 1;
                icu_76_godot::UnicodeString::operator=
                          ((UnicodeString *)(puVar7 + (long)iVar3 * 8),pUVar5);
                lVar4 = uhash_nextElement_76_godot(local_428,&local_434);
              }
            }
          }
          else {
LAB_001013ac:
            puVar7 = (ulong *)0x0;
          }
LAB_001013b6:
          if (local_368 != (undefined1 *)0x0) {
            uhash_close_76_godot();
          }
          goto LAB_0010126a;
        }
      }
    }
  }
  else {
LAB_0010125c:
    local_3c8 = (undefined1 *)0x0;
  }
  puVar7 = (ulong *)0x0;
LAB_0010126a:
  if (local_3c8 != (undefined1 *)0x0) {
    uhash_close_76_godot();
  }
  if (local_428 != (undefined1 *)0x0) {
    uhash_close_76_godot();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::CanonicalIterator::setSource(icu_76_godot::UnicodeString const&, UErrorCode&) */

void __thiscall
icu_76_godot::CanonicalIterator::setSource
          (CanonicalIterator *this,UnicodeString *param_1,UErrorCode *param_2)

{
  UnicodeString *pUVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  void *__s;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  UnicodeString *pUVar16;
  UnicodeString *pUVar17;
  UnicodeString *pUVar18;
  int iVar19;
  int iVar20;
  long local_60;
  int local_54;
  int local_48;
  int local_44;
  UMemory *local_40;
  
  pUVar18 = param_1;
  (**(code **)(**(long **)(this + 0xb8) + 0x18))(*(long **)(this + 0xb8),param_1,this + 8,param_2);
  if (0 < *(int *)param_2) {
    return;
  }
  this[0x48] = (CanonicalIterator)0x0;
  cleanPieces();
  if (*(short *)(param_1 + 8) < 0) {
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_00101b7b;
LAB_00101867:
    if (*(short *)(this + 0x10) < 0) {
      uVar13 = (ulong)*(int *)(this + 0x14);
      if (uVar13 >> 0x39 == 0) goto LAB_0010187d;
      local_40 = (UMemory *)
                 icu_76_godot::UMemory::operator_new__((UMemory *)0xffffffffffffffff,(ulong)pUVar18)
      ;
      if (local_40 == (UMemory *)0x0) goto LAB_0010199b;
      *(ulong *)local_40 = uVar13;
      pUVar18 = (UnicodeString *)(local_40 + 8);
    }
    else {
      uVar13 = (ulong)(*(short *)(this + 0x10) >> 5);
LAB_0010187d:
      local_40 = (UMemory *)
                 icu_76_godot::UMemory::operator_new__
                           ((UMemory *)(uVar13 * 0x40 + 8),(ulong)pUVar18);
      if (local_40 == (UMemory *)0x0) goto LAB_0010199b;
      *(ulong *)local_40 = uVar13;
      pUVar18 = (UnicodeString *)(local_40 + 8);
      pUVar16 = pUVar18;
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(code **)pUVar16 = icu_76_godot::UnicodeString::doCompare;
        *(undefined2 *)(pUVar16 + 8) = 2;
        pUVar16 = pUVar16 + 0x40;
      }
    }
    iVar19 = (int)(this + 8);
    uVar6 = icu_76_godot::UnicodeString::char32At(iVar19);
    local_54 = 0;
    local_44 = 0;
    local_48 = 1;
    local_60 = 0;
    iVar20 = (0xffff < uVar6) + 1;
    while( true ) {
      if (*(short *)(this + 0x10) < 0) {
        iVar7 = *(int *)(this + 0x14);
      }
      else {
        iVar7 = (int)(*(short *)(this + 0x10) >> 5);
      }
      pUVar16 = pUVar18 + local_60 * 0x40;
      if (iVar7 <= iVar20) break;
      uVar6 = icu_76_godot::UnicodeString::char32At(iVar19);
      cVar5 = icu_76_godot::Normalizer2Impl::isCanonSegmentStarter
                        ((int)*(undefined8 *)(this + 0xc0));
      if (cVar5 != '\0') {
        if (*(short *)(pUVar16 + 8) < 0) {
          uVar12 = *(uint *)(pUVar16 + 0xc);
        }
        else {
          uVar12 = (uint)(*(short *)(pUVar16 + 8) >> 5);
        }
        icu_76_godot::UnicodeString::doReplace
                  ((int)pUVar16,0,(UnicodeString *)(ulong)uVar12,iVar19,local_54);
        local_44 = local_48;
        local_60 = (long)local_48;
        local_48 = local_48 + 1;
        local_54 = iVar20;
      }
      iVar20 = iVar20 + 1 + (uint)(0xffff < uVar6);
    }
    if (*(short *)(pUVar16 + 8) < 0) {
      uVar6 = *(uint *)(pUVar16 + 0xc);
    }
    else {
      uVar6 = (uint)(*(short *)(pUVar16 + 8) >> 5);
    }
    pUVar17 = (UnicodeString *)0x0;
    icu_76_godot::UnicodeString::doReplace
              ((int)pUVar16,0,(UnicodeString *)(ulong)uVar6,iVar19,local_54);
    uVar8 = uprv_malloc_76_godot((long)local_48 * 8);
    *(int *)(this + 0x58) = local_48;
    lVar14 = (long)local_48 << 2;
    *(undefined8 *)(this + 0x50) = uVar8;
    uVar8 = uprv_malloc_76_godot(lVar14);
    *(undefined8 *)(this + 0x60) = uVar8;
    __s = (void *)uprv_malloc_76_godot(lVar14);
    *(int *)(this + 0x70) = local_48;
    *(void **)(this + 0x68) = __s;
    lVar14 = *(long *)(this + 0x50);
    if (((lVar14 != 0) && (lVar11 = *(long *)(this + 0x60), __s != (void *)0x0)) && (lVar11 != 0)) {
      if (0 < local_48) {
        if (local_44 < 0) {
          local_44 = 0;
        }
        pUVar17 = (UnicodeString *)0x0;
        memset(__s,0,(long)(local_44 + 1) << 2);
      }
      if (0 < *(int *)(this + 0x58)) {
        lVar15 = 0;
        pUVar17 = pUVar18;
        while( true ) {
          lVar2 = lVar15 * 4;
          lVar3 = lVar15 * 8;
          pUVar16 = pUVar17 + 0x40;
          lVar15 = lVar15 + 1;
          uVar8 = getEquivalents(this,pUVar17,(int *)(lVar11 + lVar2),param_2);
          *(undefined8 *)(lVar14 + lVar3) = uVar8;
          if (*(int *)(this + 0x58) <= (int)lVar15) break;
          lVar11 = *(long *)(this + 0x60);
          lVar14 = *(long *)(this + 0x50);
          pUVar17 = pUVar16;
        }
      }
      pUVar16 = pUVar18 + *(long *)local_40 * 0x40;
      while (pUVar18 != pUVar16) {
        pUVar1 = pUVar16 + -0x40;
        pUVar16 = pUVar16 + -0x40;
        (*(code *)**(undefined8 **)pUVar1)(pUVar16);
      }
      icu_76_godot::UMemory::operator_delete__(local_40,pUVar17);
      return;
    }
    *(undefined4 *)param_2 = 7;
    pUVar16 = pUVar18 + *(long *)local_40 * 0x40;
    while (pUVar18 != pUVar16) {
      pUVar1 = pUVar16 + -0x40;
      pUVar16 = pUVar16 + -0x40;
      (*(code *)**(undefined8 **)pUVar1)(pUVar16);
    }
    icu_76_godot::UMemory::operator_delete__(local_40,pUVar17);
  }
  else {
    if (*(short *)(param_1 + 8) >> 5 != 0) goto LAB_00101867;
LAB_00101b7b:
    uVar8 = uprv_malloc_76_godot(8);
    *(undefined8 *)(this + 0x50) = uVar8;
    uVar8 = uprv_malloc_76_godot(4);
    *(undefined4 *)(this + 0x58) = 1;
    *(undefined8 *)(this + 0x60) = uVar8;
    puVar9 = (undefined4 *)uprv_malloc_76_godot(4);
    *(undefined4 *)(this + 0x70) = 1;
    *(undefined4 **)(this + 0x68) = puVar9;
    if (((*(long *)(this + 0x50) != 0) && (*(long *)(this + 0x60) != 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      *puVar9 = 0;
      puVar10 = (undefined8 *)icu_76_godot::UMemory::operator_new__((UMemory *)0x48,(ulong)pUVar18);
      if (puVar10 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)(this + 0x50);
        *puVar10 = 1;
        puVar10[1] = icu_76_godot::UnicodeString::doCompare;
        *(undefined2 *)(puVar10 + 2) = 2;
        *puVar4 = puVar10 + 1;
        **(undefined4 **)(this + 0x60) = 1;
        return;
      }
      **(undefined8 **)(this + 0x50) = 0;
      **(undefined4 **)(this + 0x60) = 1;
    }
LAB_0010199b:
    *(undefined4 *)param_2 = 7;
  }
  cleanPieces();
  return;
}



/* icu_76_godot::CanonicalIterator::CanonicalIterator(icu_76_godot::UnicodeString const&,
   UErrorCode&) */

void __thiscall
icu_76_godot::CanonicalIterator::CanonicalIterator
          (CanonicalIterator *this,UnicodeString *param_1,UErrorCode *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  UErrorCode *pUVar4;
  
  *(undefined2 *)(this + 0x10) = 2;
  *(undefined2 *)(this + 0x80) = 2;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(code **)(this + 0x78) = icu_76_godot::UnicodeString::doCompare;
  *(undefined ***)this = &PTR__CanonicalIterator_00101dd0;
  *(code **)(this + 8) = icu_76_godot::UnicodeString::doCompare;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  uVar3 = icu_76_godot::Normalizer2::getNFDInstance(param_2);
  *(undefined8 *)(this + 0xb8) = uVar3;
  pUVar4 = (UErrorCode *)icu_76_godot::Normalizer2Factory::getNFCImpl(param_2);
  iVar1 = *(int *)param_2;
  *(UErrorCode **)(this + 0xc0) = pUVar4;
  if (iVar1 < 1) {
    cVar2 = icu_76_godot::Normalizer2Impl::ensureCanonIterData(pUVar4);
    if (cVar2 != '\0') {
      setSource(this,param_1,param_2);
      return;
    }
  }
  return;
}


