
/* (anonymous namespace)::getHostID((anonymous namespace)::ILcidPosixMap const*, char const*,
   UErrorCode&) */

undefined4
(anonymous_namespace)::getHostID(ILcidPosixMap *param_1,char *param_2,UErrorCode *param_3)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  size_t sVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int local_3c;
  
  if (0 < *(int *)param_3) {
    return 0;
  }
  sVar4 = strlen(param_2);
  if (*(int *)param_1 == 0) {
    lVar9 = 0;
    local_3c = 0;
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 8);
    iVar7 = 0;
    lVar9 = 0;
    local_3c = 0;
    do {
      pcVar1 = *(char **)(puVar6 + 2);
      if ((*pcVar1 == *param_2) && (*param_2 != '\0')) {
        lVar2 = 1;
        do {
          lVar5 = lVar2;
          lVar2 = lVar5 + 1;
        } while (pcVar1[lVar5] == param_2[lVar5] && param_2[lVar5] != '\0');
        iVar8 = (int)lVar5;
        if (((int)lVar9 < iVar8) && (pcVar1[iVar8] == '\0')) {
          if ((int)sVar4 == iVar8) {
            return *puVar6;
          }
          lVar9 = (long)iVar8;
          local_3c = iVar7;
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar7 != *(int *)param_1);
    param_2 = param_2 + lVar9;
  }
  if (((*param_2 == '_') || (*param_2 == '@')) &&
     (puVar6 = (undefined4 *)((long)local_3c * 0x10 + *(long *)(param_1 + 8)),
     *(char *)(*(long *)(puVar6 + 2) + lVar9) == '\0')) {
    *(undefined4 *)param_3 = 0xffffff80;
    uVar3 = *puVar6;
  }
  else {
    *(undefined4 *)param_3 = 1;
    uVar3 = 0;
  }
  return uVar3;
}



ulong uprv_convertToPosix_76_godot(uint param_1,void *param_2,int param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  size_t sVar6;
  undefined **ppuVar7;
  char *__s;
  ulong uVar8;
  
  uVar8 = 0;
  ppuVar7 = &PTR_locmap_am_001013f8;
  uVar2 = 0x36;
  while ((param_1 & 0x3ff) != uVar2) {
    uVar2 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar2;
    if (uVar2 == 0x8d) goto LAB_00100208;
    puVar1 = (uint *)*ppuVar7;
    ppuVar7 = ppuVar7 + 2;
    uVar2 = *puVar1;
  }
  puVar1 = (uint *)(&PTR_locmap_af_001013e8)[uVar8 * 2];
  if ((&(anonymous_namespace)::gPosixIDmap)[uVar8 * 4] != 0) {
    puVar5 = puVar1;
    do {
      if (param_1 == *puVar5) {
        __s = *(char **)(puVar5 + 2);
        goto LAB_001001c1;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1 + (ulong)(uint)(&(anonymous_namespace)::gPosixIDmap)[uVar8 * 4] * 4);
  }
  __s = *(char **)(puVar1 + 2);
LAB_001001c1:
  if (__s == (char *)0x0) {
LAB_00100208:
    *param_4 = 1;
    uVar8 = 0;
  }
  else {
    sVar6 = strlen(__s);
    iVar3 = (int)sVar6;
    uVar8 = sVar6 & 0xffffffff;
    iVar4 = iVar3;
    if (param_3 <= iVar3) {
      iVar4 = param_3;
    }
    memcpy(param_2,__s,(long)iVar4);
    if (iVar3 < param_3) {
      *(undefined1 *)((long)param_2 + (long)iVar3) = 0;
      if (*param_4 == -0x7c) {
        *param_4 = 0;
      }
    }
    else {
      iVar4 = 0xf;
      if (param_3 == iVar3) {
        iVar4 = -0x7c;
      }
      *param_4 = iVar4;
    }
  }
  return uVar8;
}



undefined8 uprv_convertToLCIDPlatform_76_godot(void)

{
  return 0;
}



ulong uprv_convertToLCID_76_godot(char *param_1,char *param_2,UErrorCode *param_3)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  char *__s2;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ILcidPosixMap *pIVar9;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(int *)param_3 < 1) && (param_1 != (char *)0x0)) && (param_2 != (char *)0x0)) &&
     ((sVar3 = strlen(param_1), 1 < sVar3 && (sVar3 = strlen(param_2), 1 < sVar3)))) {
    __s2 = "lb";
    uVar8 = 0;
    uVar7 = 0x46;
    uVar1 = 0x8d;
    while( true ) {
      iVar2 = strcmp(param_1,__s2);
      uVar6 = uVar7;
      if ((-1 < iVar2) && (uVar6 = uVar1, uVar8 = uVar7, iVar2 == 0)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = (anonymous_namespace)::getHostID
                            ((ILcidPosixMap *)
                             (&(anonymous_namespace)::gPosixIDmap + (ulong)uVar7 * 4),param_2,
                             param_3);
          return uVar5;
        }
        goto LAB_0010040c;
      }
      if ((uVar6 <= uVar8) || (uVar1 = uVar8 + uVar6 >> 1, uVar1 == uVar7)) break;
      __s2 = *(char **)((&PTR_locmap_af_001013e8)[(ulong)uVar1 * 2] + 8);
      uVar7 = uVar1;
      uVar1 = uVar6;
    }
    pIVar9 = (ILcidPosixMap *)&(anonymous_namespace)::gPosixIDmap;
    uVar5 = 0xffffffff;
    do {
      local_44 = 0;
      uVar4 = (anonymous_namespace)::getHostID(pIVar9,param_2,(UErrorCode *)&local_44);
      if (local_44 == 0) goto LAB_00100381;
      if (local_44 == -0x80) {
        uVar5 = uVar4 & 0xffffffff;
      }
      uVar4 = uVar5;
      pIVar9 = pIVar9 + 0x10;
      uVar5 = uVar4;
    } while (pIVar9 != (ILcidPosixMap *)&DAT_00101cb0);
    if ((int)uVar4 != -1) {
      *(undefined4 *)param_3 = 0xffffff80;
      goto LAB_00100381;
    }
    *(undefined4 *)param_3 = 1;
  }
  uVar4 = 0;
LAB_00100381:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_0010040c:
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
LAB_001006ff:
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
      goto LAB_001006ff;
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


