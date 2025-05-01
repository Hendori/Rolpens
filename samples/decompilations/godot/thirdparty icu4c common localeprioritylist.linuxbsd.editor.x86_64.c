
/* icu_76_godot::(anonymous namespace)::compareLocaleAndWeight(void const*, void const*, void
   const*) */

int icu_76_godot::(anonymous_namespace)::compareLocaleAndWeight
              (void *param_1,void *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((long)param_3 + 8) - *(int *)((long)param_2 + 8);
  if (iVar1 == 0) {
    iVar1 = *(int *)((long)param_2 + 0xc) - *(int *)((long)param_3 + 0xc);
  }
  return iVar1;
}



/* icu_76_godot::(anonymous namespace)::compareLocales(UElement, UElement) */

void icu_76_godot::(anonymous_namespace)::compareLocales(Locale *param_1,Locale *param_2)

{
  icu_76_godot::Locale::operator==(param_1,param_2);
  return;
}



/* icu_76_godot::(anonymous namespace)::hashLocale(UElement) */

void icu_76_godot::(anonymous_namespace)::hashLocale(void)

{
  icu_76_godot::Locale::hashCode();
  return;
}



/* icu_76_godot::LocalePriorityList::~LocalePriorityList() */

void __thiscall icu_76_godot::LocalePriorityList::~LocalePriorityList(LocalePriorityList *this)

{
  long *plVar1;
  long lVar2;
  void *in_RSI;
  UMemory *this_00;
  
  this_00 = *(UMemory **)this;
  if (this_00 != (UMemory *)0x0) {
    if (0 < *(int *)(this + 8)) {
      lVar2 = 0;
      do {
        plVar1 = *(long **)(lVar2 * 0x10 + *(long *)this_00);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
          this_00 = *(UMemory **)this;
        }
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < *(int *)(this + 8));
      if (this_00 == (UMemory *)0x0) goto LAB_0010009b;
    }
    if (this_00[0xc] != (UMemory)0x0) {
      uprv_free_76_godot(*(undefined8 *)this_00);
    }
    icu_76_godot::UMemory::operator_delete(this_00,in_RSI);
  }
LAB_0010009b:
  uhash_close_76_godot(*(undefined8 *)(this + 0x18));
  return;
}



/* icu_76_godot::LocalePriorityList::localeAt(int) const */

undefined8 __thiscall
icu_76_godot::LocalePriorityList::localeAt(LocalePriorityList *this,int param_1)

{
  return *(undefined8 *)((long)param_1 * 0x10 + **(long **)this);
}



/* icu_76_godot::LocalePriorityList::orphanLocaleAt(int) */

long * __thiscall
icu_76_godot::LocalePriorityList::orphanLocaleAt(LocalePriorityList *this,int param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)((long)param_1 * 0x10 + *plVar1);
    plVar1 = (long *)*plVar2;
    *plVar2 = 0;
  }
  return plVar1;
}



/* icu_76_godot::LocalePriorityList::add(icu_76_godot::Locale const&, int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::LocalePriorityList::add
          (LocalePriorityList *this,Locale *param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    if (*(long *)(this + 0x18) != 0) {
      local_41 = '\0';
      iVar1 = uhash_getiAndFound_76_godot(*(long *)(this + 0x18),param_1,&local_41);
      if (local_41 == '\0') {
        if (0 < param_2) {
LAB_00100311:
          plVar7 = (long *)icu_76_godot::Locale::clone();
          if (plVar7 == (long *)0x0) {
            *(undefined4 *)param_3 = 7;
            goto LAB_00100260;
          }
          if (((char)plVar7[0x1b] != '\0') && (param_1[0xd8] == (Locale)0x0)) {
            *(undefined4 *)param_3 = 7;
            uVar10 = 0;
            goto LAB_0010038b;
          }
          plVar5 = *(long **)this;
          goto LAB_001001a4;
        }
LAB_00100243:
        uVar10 = 1;
      }
      else {
        plVar5 = *(long **)this;
        plVar3 = (long *)((long)iVar1 * 0x10 + *plVar5);
        plVar7 = (long *)*plVar3;
        *(undefined4 *)(plVar3 + 1) = 0;
        *plVar3 = 0;
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
        if (param_2 < 1) {
          uhash_removei_76_godot(*(undefined8 *)(this + 0x18),param_1);
          if (plVar7 == (long *)0x0) goto LAB_00100243;
          uVar10 = 1;
        }
        else {
LAB_0010019b:
          if (plVar7 == (long *)0x0) goto LAB_00100311;
LAB_001001a4:
          iVar1 = *(int *)(this + 8);
          if (iVar1 == (int)plVar5[1]) {
            if (0x31 < iVar1) {
              iVar9 = iVar1 * 4;
              lVar8 = (long)iVar9 << 4;
              lVar4 = uprv_malloc_76_godot(lVar8);
              if (lVar4 == 0) goto LAB_00100381;
LAB_001003a0:
              iVar2 = (int)plVar5[1];
              if (iVar1 <= (int)plVar5[1]) {
                iVar2 = iVar1;
              }
              if (iVar9 < iVar2) {
                iVar2 = iVar9;
              }
              lVar4 = __memcpy_chk(lVar4,*plVar5,(long)iVar2 << 4,lVar8);
              iVar2 = iVar9;
LAB_001001dd:
              if (*(char *)((long)plVar5 + 0xc) != '\0') {
                uprv_free_76_godot(*plVar5);
              }
              *plVar5 = lVar4;
              *(int *)(plVar5 + 1) = iVar2;
              *(undefined1 *)((long)plVar5 + 0xc) = 1;
              iVar1 = *(int *)(this + 8);
              goto LAB_001001f8;
            }
            lVar4 = uprv_malloc_76_godot(0x640);
            if (lVar4 != 0) {
              iVar9 = 100;
              iVar2 = 100;
              if (0 < iVar1) {
                lVar8 = 0x640;
                goto LAB_001003a0;
              }
              goto LAB_001001dd;
            }
LAB_00100381:
            *(undefined4 *)param_3 = 7;
          }
          else {
LAB_001001f8:
            uhash_putiAllowZero_76_godot(*(undefined8 *)(this + 0x18),plVar7,iVar1,param_3);
            if (*(int *)param_3 < 1) {
              iVar1 = *(int *)(this + 8);
              plVar5 = (long *)((long)iVar1 * 0x10 + **(long **)this);
              *plVar5 = (long)plVar7;
              *(int *)(plVar5 + 1) = param_2;
              *(int *)(this + 8) = iVar1 + 1;
              *(int *)((long)plVar5 + 0xc) = iVar1;
              if (param_2 < 1000) {
                this[0x10] = (LocalePriorityList)0x1;
              }
              goto LAB_00100243;
            }
          }
          uVar10 = 0;
        }
LAB_0010038b:
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      goto LAB_00100263;
    }
    uVar10 = 1;
    if (param_2 < 1) goto LAB_00100263;
    uVar10 = uhash_open_76_godot((anonymous_namespace)::hashLocale,
                                 (anonymous_namespace)::compareLocales,&uhash_compareLong_76_godot);
    iVar1 = *(int *)param_3;
    *(undefined8 *)(this + 0x18) = uVar10;
    if (iVar1 < 1) {
      local_41 = '\0';
      iVar1 = uhash_getiAndFound_76_godot(uVar10,param_1,&local_41);
      if (local_41 != '\0') {
        plVar5 = *(long **)this;
        puVar6 = (undefined8 *)((long)iVar1 * 0x10 + *plVar5);
        plVar7 = (long *)*puVar6;
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = 0;
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
        goto LAB_0010019b;
      }
      goto LAB_00100311;
    }
  }
LAB_00100260:
  uVar10 = 0;
LAB_00100263:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LocalePriorityList::sort(UErrorCode&) */

void __thiscall icu_76_godot::LocalePriorityList::sort(LocalePriorityList *this,UErrorCode *param_1)

{
  if (((*(int *)param_1 < 1) && (1 < *(int *)(this + 8) - *(int *)(this + 0xc))) &&
     (this[0x10] != (LocalePriorityList)0x0)) {
    uprv_sortArray_76_godot(**(undefined8 **)this,*(int *)(this + 8),0x10,0x100000,0,0,param_1);
    return;
  }
  return;
}



/* icu_76_godot::LocalePriorityList::LocalePriorityList(icu_76_godot::StringPiece, UErrorCode&) */

void __thiscall
icu_76_godot::LocalePriorityList::LocalePriorityList
          (LocalePriorityList *this,byte *param_2,int param_3,UErrorCode *param_4)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  long in_FS_OFFSET;
  char *local_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined4 local_130;
  Locale local_128 [216];
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (LocalePriorityList)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  if (*(int *)param_4 < 1) {
    plVar3 = (long *)icu_76_godot::UMemory::operator_new((UMemory *)0x150,(ulong)param_2);
    if (plVar3 != (long *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 0x14;
      *plVar3 = (long)(plVar3 + 2);
      *(undefined1 *)((long)plVar3 + 0xc) = 0;
      pbVar1 = param_2 + param_3;
      *(long **)this = plVar3;
joined_r0x00100553:
      for (; pbVar1 <= param_2; param_2 = param_2 + 1) {
        if (pbVar1 == param_2) {
LAB_001006f0:
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            sort(this,param_4);
            return;
          }
          goto LAB_001008bf;
        }
        if (*param_2 != 0x2c) goto LAB_001006a3;
LAB_001006b0:
      }
      while (*param_2 == 0x20) {
        param_2 = param_2 + 1;
        if (pbVar1 == param_2) goto LAB_001006f0;
      }
      if (pbVar1 == param_2) goto LAB_001006f0;
      if (*param_2 == 0x2c) goto LAB_001006b0;
      pbVar4 = param_2;
      if (pbVar1 <= param_2) {
LAB_001006a3:
        *(undefined4 *)param_4 = 1;
        goto LAB_001004de;
      }
      do {
        if ((*pbVar4 < 0x3c) && ((0x800100100000000U >> ((ulong)*pbVar4 & 0x3f) & 1) != 0)) break;
        pbVar4 = pbVar4 + 1;
      } while (pbVar1 != pbVar4);
      iVar6 = (int)((long)pbVar4 - (long)param_2);
      if (iVar6 == 0) goto LAB_001006a3;
      local_168 = (char *)((long)&local_15c + 1);
      local_160 = 0x28;
      local_130 = 0;
      local_15c = 0;
      icu_76_godot::CharString::append
                ((char *)&local_168,(int)param_2,
                 (UErrorCode *)((long)pbVar4 - (long)param_2 & 0xffffffff));
      if (0 < *(int *)param_4) goto LAB_00100880;
      icu_76_godot::Locale::Locale(local_128,local_168,(char *)0x0,(char *)0x0,(char *)0x0);
      if (local_50 != '\0') goto LAB_00100870;
      param_2 = param_2 + iVar6;
      if (param_2 < pbVar1) {
        while (*param_2 == 0x20) {
          param_2 = param_2 + 1;
          if (param_2 == pbVar1) goto LAB_001006c0;
        }
      }
      if (param_2 == pbVar1) {
LAB_001006c0:
        uVar5 = 1000;
      }
      else {
        bVar2 = *param_2;
        uVar5 = 1000;
        if (bVar2 != 0x3b) {
LAB_00100657:
          if (bVar2 != 0x2c) goto LAB_00100870;
          param_2 = param_2 + 1;
          add(this,local_128,uVar5,param_4);
          icu_76_godot::Locale::~Locale(local_128);
          if ((char)local_15c != '\0') {
            uprv_free_76_godot(local_168);
          }
          goto joined_r0x00100553;
        }
        param_2 = param_2 + 1;
        if (param_2 < pbVar1) {
          while (*param_2 == 0x20) {
            param_2 = param_2 + 1;
            if (pbVar1 == param_2) goto LAB_00100870;
          }
        }
        if ((pbVar1 == param_2) || (*param_2 != 0x71)) goto LAB_00100870;
        param_2 = param_2 + 1;
        if (param_2 < pbVar1) {
          while (*param_2 == 0x20) {
            param_2 = param_2 + 1;
            if (pbVar1 == param_2) goto LAB_00100870;
          }
        }
        if ((pbVar1 == param_2) || (*param_2 != 0x3d)) goto LAB_00100870;
        pbVar4 = param_2 + 1;
        if (pbVar4 < pbVar1) {
          while (*pbVar4 == 0x20) {
            pbVar4 = pbVar4 + 1;
            if (pbVar1 == pbVar4) goto LAB_00100870;
          }
        }
        if ((pbVar1 == pbVar4) || (1 < (byte)(*pbVar4 - 0x30))) goto LAB_00100870;
        param_2 = pbVar4 + 1;
        uVar5 = -((char)*pbVar4 + -0x30) & 1000;
        if (pbVar1 == param_2) goto LAB_001006c5;
        if (pbVar4[1] != 0x2e) {
          if (param_2 < pbVar1) {
LAB_0010084d:
            do {
              if (*param_2 != 0x20) goto LAB_00100852;
              param_2 = param_2 + 1;
              if (pbVar1 == param_2) goto LAB_001006c5;
            } while( true );
          }
LAB_0010085b:
          bVar2 = *param_2;
          goto LAB_00100657;
        }
        param_2 = pbVar4 + 2;
        if (pbVar1 != param_2) {
          iVar6 = 100;
          do {
            bVar2 = *param_2 - 0x30;
            if (9 < bVar2) {
              if (1000 < uVar5) goto LAB_00100870;
              if (pbVar1 <= param_2) goto LAB_00100852;
              goto LAB_0010084d;
            }
            if (iVar6 < 1) {
              if (iVar6 == 0) {
                iVar6 = -1;
                uVar5 = (uVar5 + 1) - (uint)(bVar2 < 5);
              }
            }
            else {
              uVar5 = uVar5 + (uint)bVar2 * iVar6;
              iVar6 = iVar6 / 10;
            }
            param_2 = param_2 + 1;
          } while (pbVar1 != param_2);
          if (1000 < uVar5) goto LAB_00100870;
LAB_00100852:
          if (param_2 != pbVar1) goto LAB_0010085b;
        }
      }
LAB_001006c5:
      add(this,local_128,uVar5,param_4);
      icu_76_godot::Locale::~Locale(local_128);
      if ((char)local_15c != '\0') {
        uprv_free_76_godot(local_168);
      }
      goto LAB_001006f0;
    }
    *(undefined4 *)param_4 = 7;
    *(undefined8 *)this = 0;
  }
LAB_001004de:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001008bf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100870:
  *(undefined4 *)param_4 = 1;
  icu_76_godot::Locale::~Locale(local_128);
LAB_00100880:
  if ((char)local_15c != '\0') {
    uprv_free_76_godot(local_168);
  }
  goto LAB_001004de;
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
LAB_00100bbf:
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
      goto LAB_00100bbf;
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


