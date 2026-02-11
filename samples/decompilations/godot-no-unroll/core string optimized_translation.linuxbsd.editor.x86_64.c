
/* OptimizedTranslation::get_plural_message(StringName const&, StringName const&, int, StringName
   const&) const */

StringName *
OptimizedTranslation::get_plural_message
          (StringName *param_1,StringName *param_2,int param_3,StringName *param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_2 + 0x1f0))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char>::_ref(CowData<char> const&) [clone .part.0] */

void __thiscall CowData<char>::_ref(CowData<char> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = __n;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  CowData<int> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  pCVar9 = this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar3 = lVar10 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 != 0) {
    uVar4 = param_1 * 4 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar10) {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_001005e0:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return;
      }
      if (uVar4 + 1 == lVar3) {
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
      }
      else {
        if (lVar10 == 0) {
          puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
            uVar8 = 0x171;
            pcVar7 = "Parameter \"mem_new\" is null.";
            goto LAB_001005c2;
          }
          *puVar5 = 1;
          puVar5[1] = 0;
        }
        else {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_001005e0;
          *puVar5 = 1;
        }
        puVar5 = puVar5 + 2;
        *(undefined8 **)this = puVar5;
      }
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001005c2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* CowData<char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<char>::_copy_on_write(CowData<char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = __n;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<char>::resize<false>(CowData<char> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_001008e6:
    lVar7 = 0;
    lVar4 = 0;
  }
  else {
    lVar7 = *(long *)(lVar4 + -8);
    if (param_1 == lVar7) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar7 == 0) goto LAB_001008e6;
    uVar3 = lVar7 - 1U | lVar7 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    lVar4 = (uVar3 | uVar3 >> 0x20) + 1;
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  if (param_1 <= lVar7) {
    puVar5 = *(undefined8 **)this;
    if (uVar3 + 1 == lVar4) {
      if (puVar5 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar3 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) {
LAB_00100940:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar5 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar5;
    }
    puVar5[-1] = param_1;
    return;
  }
  if (uVar3 + 1 == lVar4) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
      FUN_00104c24();
      return;
    }
  }
  else {
    if (lVar7 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      *puVar5 = 1;
      puVar5[1] = 0;
    }
    else {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00100940;
      *puVar5 = 1;
    }
    puVar5 = puVar5 + 2;
    *(undefined8 **)this = puVar5;
  }
  puVar5[-1] = param_1;
  return;
}



/* OptimizedTranslation::get_message(StringName const&, StringName const&) const */

OptimizedTranslation * __thiscall
OptimizedTranslation::get_message
          (OptimizedTranslation *this,StringName *param_1,StringName *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  uint *puVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x2b0) == 0) ||
     (uVar5 = *(ulong *)(*(long *)(param_1 + 0x2b0) + -8), (int)uVar5 == 0)) {
    *(undefined8 *)this = 0;
    goto LAB_00100bd7;
  }
  lVar6 = *(long *)param_2;
  if (lVar6 == 0) {
LAB_00100c69:
    local_60 = 0;
  }
  else {
    pcVar10 = *(char **)(lVar6 + 8);
    local_60 = 0;
    if (pcVar10 == (char *)0x0) {
      plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
      if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00100c69;
      do {
        lVar7 = *plVar1;
        if (lVar7 == 0) goto LAB_00100c69;
        LOCK();
        lVar11 = *plVar1;
        bVar13 = lVar7 == lVar11;
        if (bVar13) {
          *plVar1 = lVar7 + 1;
          lVar11 = lVar7;
        }
        UNLOCK();
      } while (!bVar13);
      if (lVar11 != -1) {
        local_60 = *(long *)(lVar6 + 0x10);
      }
    }
    else {
      local_50 = strlen(pcVar10);
      local_58 = pcVar10;
      String::parse_latin1((StrRange *)&local_60);
    }
  }
  String::utf8();
  lVar6 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  pcVar10 = (char *)CharString::get_data();
  uVar8 = 0x1000193;
  cVar3 = *pcVar10;
  while (cVar3 != '\0') {
    pcVar10 = pcVar10 + 1;
    uVar8 = uVar8 * 0x1000193 ^ (int)cVar3;
    cVar3 = *pcVar10;
  }
  lVar6 = *(long *)(param_1 + 0x2d0);
  uVar8 = *(uint *)(*(long *)(param_1 + 0x2b0) + ((ulong)uVar8 % (uVar5 & 0xffffffff)) * 4);
  if (uVar8 != 0xffffffff) {
    piVar2 = (int *)(*(long *)(param_1 + 0x2c0) + (ulong)uVar8 * 4);
    pcVar10 = (char *)CharString::get_data();
    uVar8 = piVar2[1];
    if (piVar2[1] == 0) {
      uVar8 = 0x1000193;
    }
    cVar3 = *pcVar10;
    while (cVar3 != '\0') {
      pcVar10 = pcVar10 + 1;
      uVar8 = uVar8 * 0x1000193 ^ (int)cVar3;
      cVar3 = *pcVar10;
    }
    if (0 < *piVar2) {
      puVar12 = (uint *)(piVar2 + 2);
      iVar9 = 0;
      do {
        if (*puVar12 == uVar8) {
          iVar4 = piVar2[(long)iVar9 * 4 + 5];
          if (piVar2[(long)iVar9 * 4 + 4] == iVar4) {
            local_58 = (char *)0x0;
            String::parse_utf8((char *)&local_58,piVar2[(long)iVar9 * 4 + 3] + (int)lVar6,
                               SUB41(iVar4,0));
            StringName::StringName((StringName *)this,(String *)&local_58,false);
            pcVar10 = local_58;
            if (local_58 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_58 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_58 = (char *)0x0;
                Memory::free_static(pcVar10 + -0x10,false);
              }
            }
          }
          else {
            local_60 = 0;
            CowData<char>::resize<false>((CowData<char> *)&local_60,(long)(iVar4 + 1));
            iVar4 = piVar2[(long)iVar9 * 4 + 5];
            CowData<char>::_copy_on_write((CowData<char> *)&local_60);
            smaz_decompress((ulong)(uint)piVar2[(long)iVar9 * 4 + 3] + lVar6,
                            piVar2[(long)iVar9 * 4 + 4],local_60,iVar4);
            local_58 = (char *)0x0;
            iVar9 = CharString::get_data();
            String::parse_utf8((char *)&local_58,iVar9,true);
            StringName::StringName((StringName *)this,(String *)&local_58,false);
            pcVar10 = local_58;
            if (local_58 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_58 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_58 = (char *)0x0;
                Memory::free_static(pcVar10 + -0x10,false);
              }
            }
            lVar6 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar6 + -0x10),false);
              }
            }
          }
          goto LAB_00100c07;
        }
        iVar9 = iVar9 + 1;
        puVar12 = puVar12 + 4;
      } while (iVar9 != *piVar2);
    }
  }
  *(undefined8 *)this = 0;
LAB_00100c07:
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_68 + -0x10),false);
    }
  }
LAB_00100bd7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* OptimizedTranslation::_get(StringName const&, Variant&) const */

undefined4 __thiscall
OptimizedTranslation::_get(OptimizedTranslation *this,StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_50;
  char *local_48;
  size_t local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  lVar2 = *(long *)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 == 0) {
LAB_00100e91:
    local_50 = 0;
  }
  else {
    __s = *(char **)(lVar2 + 8);
    local_50 = 0;
    if (__s == (char *)0x0) {
      plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
      if (*(long *)(lVar2 + 0x10) == 0) goto LAB_00100e91;
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00100e91;
        LOCK();
        lVar6 = *plVar1;
        bVar7 = lVar3 == lVar6;
        if (bVar7) {
          *plVar1 = lVar3 + 1;
          lVar6 = lVar3;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar6 != -1) {
        local_50 = *(long *)(lVar2 + 0x10);
      }
    }
    else {
      local_40 = strlen(__s);
      local_48 = __s;
      String::parse_latin1((StrRange *)&local_50);
    }
  }
  cVar4 = String::operator==((String *)&local_50,"hash_table");
  if (cVar4 == '\0') {
    cVar4 = String::operator==((String *)&local_50,"bucket_table");
    if (cVar4 == '\0') {
      uVar5 = String::operator==((String *)&local_50,"strings");
      if ((char)uVar5 == '\0') goto LAB_00100dfa;
      Variant::Variant((Variant *)local_38,(Vector *)(this + 0x2c8));
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_2 = local_38[0];
      *(undefined8 *)(param_2 + 8) = local_30;
      *(undefined8 *)(param_2 + 0x10) = uStack_28;
    }
    else {
      Variant::Variant((Variant *)local_38,(Vector *)(this + 0x2b8));
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_2 = local_38[0];
      *(undefined8 *)(param_2 + 8) = local_30;
      *(undefined8 *)(param_2 + 0x10) = uStack_28;
    }
  }
  else {
    Variant::Variant((Variant *)local_38,(Vector *)(this + 0x2a8));
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  uVar5 = 1;
LAB_00100dfa:
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
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* OptimizedTranslation::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall OptimizedTranslation::_get_property_list(OptimizedTranslation *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_78 = "";
  local_90 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "hash_table";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,0x1e);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001010dd:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001010ef:
    lVar2 = *(long *)param_1;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_001010dd;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      goto LAB_001010ef;
    }
    StringName::unref();
    lVar2 = *(long *)param_1;
    local_68 = local_80;
  }
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_78 = "";
  local_90 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "bucket_table";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,0x1e);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00101398:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001013a5:
    lVar2 = *(long *)param_1;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00101398;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      goto LAB_001013a5;
    }
    StringName::unref();
    lVar2 = *(long *)param_1;
    local_68 = local_80;
  }
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_78 = "";
  local_90 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "strings";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,0x1d);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00101648:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00101655:
    lVar2 = *(long *)param_1;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00101648;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      goto LAB_00101655;
    }
    StringName::unref();
    lVar2 = *(long *)param_1;
    local_68 = local_80;
  }
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_78 = "Translation";
  local_90 = 0;
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "load_from";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0x11;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00101c38:
    local_50 = 4;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00101c70;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 4;
    if (local_60 == 0x11) goto LAB_00101c38;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  lVar2 = *(long *)param_1;
joined_r0x00101c70:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(long **)(puVar5 + 0x10) = plVar1;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OptimizedTranslation::_bind_methods() */

void OptimizedTranslation::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78 [2];
  long *local_68;
  undefined *local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &_LC28;
  local_48 = &local_58;
  local_50 = 0;
  D_METHODP((char *)local_78,(char ***)"generate",(uint)&local_48);
  local_40 = (undefined1  [16])0x0;
  local_48 = (undefined **)0x0;
  pMVar4 = create_method_bind<OptimizedTranslation,Ref<Translation>const&>(generate);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* OptimizedTranslation::get_translated_message_list() const */

Vector<String> * OptimizedTranslation::get_translated_message_list(void)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  long in_RSI;
  Vector<String> *in_RDI;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  lVar4 = *(long *)(in_RSI + 0x2c0);
  lVar5 = *(long *)(in_RSI + 0x2d0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  lVar6 = *(long *)(in_RSI + 0x2b0);
  if (lVar6 != 0) {
    lVar9 = 0;
    lVar12 = lVar6;
    do {
      while( true ) {
        if (*(long *)(lVar12 + -8) <= lVar9) goto LAB_00102428;
        uVar3 = *(uint *)(lVar6 + lVar9 * 4);
        if ((uVar3 == 0xffffffff) || (piVar2 = (int *)(lVar4 + (ulong)uVar3 * 4), *piVar2 < 1))
        break;
        puVar10 = (uint *)(piVar2 + 3);
        iVar11 = 0;
        do {
          while (uVar3 = puVar10[2], puVar10[1] != uVar3) {
            local_58 = 0;
            CowData<char>::resize<false>((CowData<char> *)&local_58,(long)(int)(uVar3 + 1));
            uVar3 = puVar10[2];
            CowData<char>::_copy_on_write((CowData<char> *)&local_58);
            smaz_decompress((ulong)*puVar10 + lVar5,puVar10[1],local_58,uVar3);
            local_50 = 0;
            iVar7 = CharString::get_data();
            String::parse_utf8((char *)&local_50,iVar7,true);
            local_48 = 0;
            plVar1 = (long *)(local_50 + -0x10);
            if (local_50 == 0) {
              Vector<String>::push_back(in_RDI);
            }
            else {
              do {
                lVar12 = *plVar1;
                if (lVar12 == 0) goto LAB_00102293;
                LOCK();
                lVar8 = *plVar1;
                bVar13 = lVar12 == lVar8;
                if (bVar13) {
                  *plVar1 = lVar12 + 1;
                  lVar8 = lVar12;
                }
                UNLOCK();
              } while (!bVar13);
              if (lVar8 != -1) {
                local_48 = local_50;
              }
LAB_00102293:
              lVar12 = local_48;
              Vector<String>::push_back(in_RDI);
              if (lVar12 != 0) {
                LOCK();
                plVar1 = (long *)(lVar12 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_48 + -0x10),false);
                }
              }
            }
            lVar12 = local_50;
            if (local_50 != 0) {
              LOCK();
              plVar1 = (long *)(local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            lVar12 = local_58;
            if (local_58 != 0) {
              LOCK();
              plVar1 = (long *)(local_58 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_58 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
LAB_00102315:
            iVar11 = iVar11 + 1;
            puVar10 = puVar10 + 4;
            if (*piVar2 <= iVar11) goto LAB_00102400;
          }
          local_50 = 0;
          String::parse_utf8((char *)&local_50,*puVar10 + (int)lVar5,SUB41(uVar3,0));
          local_48 = 0;
          plVar1 = (long *)(local_50 + -0x10);
          if (local_50 == 0) {
            Vector<String>::push_back(in_RDI);
          }
          else {
            do {
              lVar12 = *plVar1;
              if (lVar12 == 0) goto LAB_00102391;
              LOCK();
              lVar8 = *plVar1;
              bVar13 = lVar12 == lVar8;
              if (bVar13) {
                *plVar1 = lVar12 + 1;
                lVar8 = lVar12;
              }
              UNLOCK();
            } while (!bVar13);
            if (lVar8 != -1) {
              local_48 = local_50;
            }
LAB_00102391:
            lVar12 = local_48;
            Vector<String>::push_back(in_RDI);
            if (lVar12 != 0) {
              LOCK();
              plVar1 = (long *)(lVar12 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_48 + -0x10),false);
              }
            }
          }
          lVar12 = local_50;
          if (local_50 == 0) goto LAB_00102315;
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 != 0) goto LAB_00102315;
          iVar11 = iVar11 + 1;
          puVar10 = puVar10 + 4;
          local_50 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        } while (iVar11 < *piVar2);
LAB_00102400:
        lVar12 = *(long *)(in_RSI + 0x2b0);
        lVar9 = lVar9 + 1;
        if (lVar12 == 0) goto LAB_00102428;
      }
      lVar9 = lVar9 + 1;
    } while (lVar12 != 0);
  }
LAB_00102428:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* CowData<Pair<int, CharString> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Pair<int,CharString>>::_copy_on_write(CowData<Pair<int,CharString>> *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 0x10 != 0) {
    uVar7 = lVar2 * 0x10 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar9 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar2;
  puVar8 = puVar5 + 2;
  if (lVar2 != 0) {
    do {
      puVar6 = (undefined4 *)(lVar9 * 0x10 + *(long *)this);
      uVar1 = *puVar6;
      puVar8[1] = 0;
      lVar3 = *(long *)(puVar6 + 2);
      *(undefined4 *)puVar8 = uVar1;
      if (lVar3 != 0) {
        CowData<char>::_ref((CowData<char> *)(puVar8 + 1),(CowData *)(puVar6 + 2));
      }
      lVar9 = lVar9 + 1;
      puVar8 = puVar8 + 2;
    } while (lVar2 != lVar9);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OptimizedTranslation::generate(Ref<Translation> const&) */

void __thiscall OptimizedTranslation::generate(OptimizedTranslation *this,Ref *param_1)

{
  CowData<unsigned_char> *this_00;
  CowData *pCVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  undefined8 uVar22;
  long lVar23;
  undefined4 *puVar24;
  void *__src;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  int *piVar30;
  ulong uVar31;
  long lVar32;
  undefined8 *puVar33;
  long lVar34;
  CowData<Pair<int,CharString>> *this_01;
  uint uVar35;
  int iVar36;
  undefined4 uVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  uint *puVar41;
  CowData *pCVar42;
  HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>
  *this_02;
  long *plVar43;
  long lVar44;
  size_t sVar45;
  int *piVar46;
  long *plVar47;
  long in_FS_OFFSET;
  bool bVar48;
  uint local_118;
  long *local_c8;
  size_t local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0 [2];
  undefined8 *local_90 [2];
  int *local_80 [2];
  undefined8 *local_70 [2];
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  uint local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)param_1 == (long *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("generate","core/string/optimized_translation.cpp",0x31,
                       "Condition \"p_from.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00103ed8;
  }
  local_c8 = (long *)0x0;
  (**(code **)(**(long **)param_1 + 0x208))();
  uVar16 = 0;
  if (local_c8 != (long *)0x0) {
    uVar16 = *(uint *)(local_c8 + 2);
  }
  uVar16 = Math::larger_prime(uVar16);
  local_90[0] = (undefined8 *)0x0;
  lVar44 = (long)(int)uVar16;
  local_80[0] = (int *)0x0;
  local_70[0] = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  if (lVar44 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    if (local_c8 != (long *)0x0) goto LAB_0010274d;
  }
  else {
    if (lVar44 == 0) {
LAB_0010273f:
      if (local_c8 == (long *)0x0) {
        if (local_60 != (undefined8 *)0x0) {
LAB_0010323d:
          if (local_60[-1] != 0) {
LAB_00102771:
            CowData<CompressedString>::_unref((CowData<CompressedString> *)&local_60);
            goto LAB_0010277e;
          }
        }
LAB_00103248:
        local_118 = 0;
      }
      else {
LAB_0010274d:
        lVar34 = (long)(int)local_c8[2];
        if (lVar34 < 0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x157,
                           "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
          ;
LAB_0010277e:
          if (local_c8 == (long *)0x0) goto LAB_00103248;
        }
        else if (local_60 == (undefined8 *)0x0) {
          if (lVar34 != 0) {
            uVar19 = lVar34 * 0x18 - 1;
            uVar19 = uVar19 | uVar19 >> 1;
            uVar19 = uVar19 | uVar19 >> 2;
            uVar19 = uVar19 | uVar19 >> 4;
            uVar19 = uVar19 | uVar19 >> 8;
            uVar19 = uVar19 | uVar19 >> 0x10;
            puVar20 = (undefined8 *)Memory::alloc_static((uVar19 | uVar19 >> 0x20) + 0x11,false);
            if (puVar20 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              local_60 = puVar20 + 2;
              *puVar20 = 1;
              puVar26 = local_60;
              do {
                *(undefined4 *)puVar26 = 0;
                puVar33 = puVar26 + 3;
                puVar26[1] = 0;
                *(undefined4 *)(puVar26 + 2) = 0;
                puVar26 = puVar33;
              } while (puVar20 + lVar34 * 3 + 2 != puVar33);
              puVar20[1] = lVar34;
            }
            goto LAB_0010277e;
          }
        }
        else if (lVar34 != local_60[-1]) goto LAB_00102771;
        plVar43 = (long *)*local_c8;
        if (plVar43 == (long *)0x0) goto LAB_00103248;
        local_118 = 0;
        uVar19 = 0;
        do {
          lVar34 = *plVar43;
          if (lVar34 == 0) {
            local_a0[0] = 0;
          }
          else {
            pcVar21 = *(char **)(lVar34 + 8);
            local_a0[0] = 0;
            if (pcVar21 == (char *)0x0) {
              plVar47 = (long *)(*(long *)(lVar34 + 0x10) + -0x10);
              if (*(long *)(lVar34 + 0x10) != 0) {
                do {
                  lVar40 = *plVar47;
                  if (lVar40 == 0) goto LAB_0010281a;
                  LOCK();
                  lVar32 = *plVar47;
                  bVar48 = lVar40 == lVar32;
                  if (bVar48) {
                    *plVar47 = lVar40 + 1;
                    lVar32 = lVar40;
                  }
                  UNLOCK();
                } while (!bVar48);
                if (lVar32 != -1) {
                  local_a0[0] = *(long *)(lVar34 + 0x10);
                }
              }
            }
            else {
              local_50 = (undefined1 *)strlen(pcVar21);
              local_58 = pcVar21;
              String::parse_latin1((StrRange *)local_a0);
            }
          }
LAB_0010281a:
          String::utf8();
          lVar34 = local_a0[0];
          if (local_a0[0] != 0) {
            LOCK();
            plVar47 = (long *)(local_a0[0] + -0x10);
            *plVar47 = *plVar47 + -1;
            UNLOCK();
            if (*plVar47 == 0) {
              local_a0[0] = 0;
              Memory::free_static((void *)(lVar34 + -0x10),false);
            }
          }
          pcVar21 = (char *)CharString::get_data();
          puVar20 = local_90[0];
          uVar27 = 0x1000193;
          cVar3 = *pcVar21;
          while (cVar3 != '\0') {
            pcVar21 = pcVar21 + 1;
            uVar27 = (ulong)(uint)((int)uVar27 * 0x1000193 ^ (int)cVar3);
            cVar3 = *pcVar21;
          }
          plVar47 = (long *)(local_c0 - 0x10);
          if (local_c0 == 0) {
LAB_00102d50:
            sVar45 = 0;
          }
          else {
            do {
              lVar34 = *plVar47;
              if (lVar34 == 0) goto LAB_00102d50;
              LOCK();
              lVar40 = *plVar47;
              bVar48 = lVar34 == lVar40;
              if (bVar48) {
                *plVar47 = lVar34 + 1;
                lVar40 = lVar34;
              }
              UNLOCK();
            } while (!bVar48);
            sVar45 = local_c0;
            if (lVar40 == -1) goto LAB_00102d50;
          }
          uVar27 = uVar27 % (ulong)uVar16;
          if (local_90[0] == (undefined8 *)0x0) {
            lVar34 = 0;
            goto LAB_00102f16;
          }
          lVar34 = local_90[0][-1];
          if (lVar34 <= (long)uVar27) goto LAB_00102f16;
          if (1 < (ulong)local_90[0][-2]) {
            if (local_90[0] == (undefined8 *)0x0) goto OptimizedTranslation_generate;
            lVar34 = local_90[0][-1];
            uVar38 = 0x10;
            if (lVar34 * 0x10 != 0) {
              uVar38 = lVar34 * 0x10 - 1;
              uVar38 = uVar38 | uVar38 >> 1;
              uVar38 = uVar38 | uVar38 >> 2;
              uVar38 = uVar38 | uVar38 >> 4;
              uVar38 = uVar38 | uVar38 >> 8;
              uVar38 = uVar38 | uVar38 >> 0x10;
              uVar38 = (uVar38 | uVar38 >> 0x20) + 0x11;
            }
            puVar26 = (undefined8 *)Memory::alloc_static(uVar38,false);
            if (puVar26 == (undefined8 *)0x0) {
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              puVar20 = puVar26 + 2;
              this_01 = (CowData<Pair<int,CharString>> *)(puVar26 + 3);
              lVar40 = 0;
              *puVar26 = 1;
              puVar26[1] = lVar34;
              if (lVar34 != 0) {
                do {
                  puVar26 = local_90[0];
                  *(undefined8 *)this_01 = 0;
                  if (local_90[0][lVar40 * 2 + 1] != 0) {
                    CowData<Pair<int,CharString>>::_unref(this_01);
                    lVar32 = puVar26[lVar40 * 2 + 1];
                    if (lVar32 != 0) {
                      plVar47 = (long *)(lVar32 + -0x10);
                      do {
                        lVar32 = *plVar47;
                        if (lVar32 == 0) goto LAB_001030e7;
                        LOCK();
                        lVar23 = *plVar47;
                        bVar48 = lVar32 == lVar23;
                        if (bVar48) {
                          *plVar47 = lVar32 + 1;
                          lVar23 = lVar32;
                        }
                        UNLOCK();
                      } while (!bVar48);
                      if (lVar23 != -1) {
                        *(undefined8 *)this_01 = puVar26[lVar40 * 2 + 1];
                      }
                    }
                  }
LAB_001030e7:
                  lVar40 = lVar40 + 1;
                  this_01 = this_01 + 0x10;
                } while (lVar34 != lVar40);
              }
              CowData<Vector<Pair<int,CharString>>>::_unref
                        ((CowData<Vector<Pair<int,CharString>>> *)local_90);
              local_90[0] = puVar20;
            }
          }
          local_58 = (char *)CONCAT44(local_58._4_4_,(int)uVar19);
          local_50 = (undefined1 *)0x0;
          puVar15 = local_50;
          if (sVar45 == 0) {
LAB_00102955:
            local_50 = puVar15;
            lVar34 = puVar20[uVar27 * 2 + 1];
            if (lVar34 != 0) goto LAB_00102962;
LAB_00102e25:
            lVar34 = 1;
          }
          else {
            plVar47 = (long *)(sVar45 - 0x10);
            do {
              lVar34 = *plVar47;
              if (lVar34 == 0) goto LAB_00102e10;
              LOCK();
              lVar40 = *plVar47;
              bVar48 = lVar34 == lVar40;
              if (bVar48) {
                *plVar47 = lVar34 + 1;
                lVar40 = lVar34;
              }
              UNLOCK();
            } while (!bVar48);
            puVar15 = (undefined1 *)sVar45;
            if (lVar40 != -1) goto LAB_00102955;
LAB_00102e10:
            lVar34 = puVar20[uVar27 * 2 + 1];
            if (lVar34 == 0) goto LAB_00102e25;
LAB_00102962:
            lVar34 = *(long *)(lVar34 + -8) + 1;
          }
          puVar15 = local_50;
          iVar17 = CowData<Pair<int,CharString>>::resize<false>
                             ((CowData<Pair<int,CharString>> *)(puVar20 + uVar27 * 2 + 1),lVar34);
          if (iVar17 == 0) {
            if (puVar20[uVar27 * 2 + 1] == 0) {
              lVar40 = -1;
              lVar34 = 0;
            }
            else {
              lVar34 = *(long *)(puVar20[uVar27 * 2 + 1] + -8);
              lVar40 = lVar34 + -1;
              if (-1 < lVar40) {
                CowData<Pair<int,CharString>>::_copy_on_write
                          ((CowData<Pair<int,CharString>> *)(puVar20 + uVar27 * 2 + 1));
                puVar41 = (uint *)(lVar40 * 0x10 + puVar20[uVar27 * 2 + 1]);
                *puVar41 = (uint)local_58;
                if ((undefined1 *)*(size_t *)(puVar41 + 2) != puVar15) {
                  CowData<char>::_ref((CowData<char> *)(puVar41 + 2),(CowData *)&local_50);
                }
                goto LAB_001029e0;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar40,lVar34,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
          }
LAB_001029e0:
          if (puVar15 != (undefined1 *)0x0) {
            LOCK();
            plVar47 = (long *)((long)puVar15 - 0x10);
            *plVar47 = *plVar47 + -1;
            UNLOCK();
            if (*plVar47 == 0) {
              Memory::free_static((void *)((long)local_50 - 0x10),false);
            }
          }
          plVar47 = *(long **)param_1;
          pcVar5 = *(code **)(*plVar47 + 0x1f0);
          StringName::StringName((StringName *)&local_b0,"",false);
          (*pcVar5)(&local_a8,plVar47,plVar43);
          if (local_a8 == 0) {
            local_a0[0] = 0;
          }
          else {
            pcVar21 = *(char **)(local_a8 + 8);
            local_a0[0] = 0;
            if (pcVar21 == (char *)0x0) {
              plVar47 = (long *)(*(long *)(local_a8 + 0x10) + -0x10);
              if (*(long *)(local_a8 + 0x10) != 0) {
                do {
                  lVar34 = *plVar47;
                  if (lVar34 == 0) goto LAB_00102a9c;
                  LOCK();
                  lVar40 = *plVar47;
                  bVar48 = lVar34 == lVar40;
                  if (bVar48) {
                    *plVar47 = lVar34 + 1;
                    lVar40 = lVar34;
                  }
                  UNLOCK();
                } while (!bVar48);
                if (lVar40 != -1) {
                  local_a0[0] = *(long *)(local_a8 + 0x10);
                }
              }
            }
            else {
              local_50 = (undefined1 *)strlen(pcVar21);
              local_58 = pcVar21;
              String::parse_latin1((StrRange *)local_a0);
            }
          }
LAB_00102a9c:
          String::utf8();
          lVar34 = local_a0[0];
          if (local_a0[0] != 0) {
            LOCK();
            plVar47 = (long *)(local_a0[0] + -0x10);
            *plVar47 = *plVar47 + -1;
            UNLOCK();
            if (*plVar47 == 0) {
              local_a0[0] = 0;
              Memory::free_static((void *)(lVar34 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') &&
             (((local_a8 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
              (local_b0 != 0)))) {
            StringName::unref();
          }
          local_50 = (undefined1 *)0x0;
          if (local_b8 == 0) {
LAB_00102d68:
            local_48 = local_118;
            local_58 = (char *)CONCAT44(local_58._4_4_,1);
            CowData<char>::resize<false>((CowData<char> *)&local_50,1);
            if (local_50 == (undefined1 *)0x0) {
              lVar34 = 0;
            }
            else {
              lVar34 = *(long *)(local_50 + -8);
              if (0 < lVar34) {
                CowData<char>::_copy_on_write((CowData<char> *)&local_50);
                *local_50 = 0;
                puVar20 = local_60;
                goto joined_r0x00102c27;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,0,lVar34,"p_index","size()","",false,
                       false);
            puVar20 = local_60;
          }
          else {
            iVar17 = (int)*(undefined8 *)(local_b8 + -8);
            local_58 = (char *)CONCAT44(local_58._4_4_,iVar17);
            local_48 = local_118;
            if (iVar17 == 0) goto LAB_00102d68;
            local_a0[0] = 0;
            CowData<char>::resize<false>((CowData<char> *)local_a0,(long)iVar17);
            CowData<char>::_copy_on_write((CowData<char> *)local_a0);
            lVar34 = local_a0[0];
            if (local_b8 == 0) {
              uVar37 = 0;
            }
            else {
              uVar37 = *(undefined4 *)(local_b8 + -8);
            }
            uVar22 = CharString::get_data();
            iVar17 = smaz_compress(uVar22,uVar37,lVar34);
            if (local_b8 == 0) {
              if (-1 < iVar17) {
                local_58 = (char *)((ulong)local_58._4_4_ << 0x20);
                goto LAB_00102bfb;
              }
LAB_00102ec0:
              CowData<char>::resize<false>((CowData<char> *)local_a0,(long)iVar17);
              lVar34 = local_a0[0];
              puVar20 = local_60;
              if (local_a0[0] != 0) {
                CowData<char>::_ref((CowData<char> *)&local_50,(CowData *)local_a0);
LAB_00102c00:
                LOCK();
                plVar47 = (long *)(lVar34 + -0x10);
                *plVar47 = *plVar47 + -1;
                UNLOCK();
                puVar20 = local_60;
                if (*plVar47 == 0) {
                  Memory::free_static((void *)(local_a0[0] + -0x10),false);
                  puVar20 = local_60;
                }
              }
            }
            else {
              iVar36 = (int)*(undefined8 *)(local_b8 + -8);
              if (iVar17 < iVar36) goto LAB_00102ec0;
              local_58 = (char *)CONCAT44(local_58._4_4_,iVar36);
              CowData<char>::_ref((CowData<char> *)&local_50,(CowData *)&local_b8);
LAB_00102bfb:
              puVar20 = local_60;
              if (lVar34 != 0) goto LAB_00102c00;
            }
          }
joined_r0x00102c27:
          uVar27 = uVar19;
          local_60 = puVar20;
          if (puVar20 == (undefined8 *)0x0) {
            lVar34 = 0;
            goto LAB_00102f16;
          }
          lVar34 = puVar20[-1];
          if (lVar34 <= (long)uVar19) goto LAB_00102f16;
          if (1 < (ulong)puVar20[-2]) {
            if (puVar20 == (undefined8 *)0x0) goto OptimizedTranslation_generate;
            lVar34 = puVar20[-1];
            uVar27 = 0x10;
            if (lVar34 * 0x18 != 0) {
              uVar27 = lVar34 * 0x18 - 1;
              uVar27 = uVar27 | uVar27 >> 1;
              uVar27 = uVar27 | uVar27 >> 2;
              uVar27 = uVar27 | uVar27 >> 4;
              uVar27 = uVar27 | uVar27 >> 8;
              uVar27 = uVar27 | uVar27 >> 0x10;
              uVar27 = (uVar27 | uVar27 >> 0x20) + 0x11;
            }
            puVar26 = (undefined8 *)Memory::alloc_static(uVar27,false);
            if (puVar26 == (undefined8 *)0x0) {
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              puVar20 = puVar26 + 2;
              *puVar26 = 1;
              puVar26[1] = lVar34;
              if (lVar34 != 0) {
                pCVar42 = (CowData *)(local_60 + 1);
                lVar40 = 0;
                puVar26 = puVar20;
                do {
                  uVar37 = *(undefined4 *)(pCVar42 + -8);
                  puVar26[1] = 0;
                  lVar32 = *(long *)pCVar42;
                  *(undefined4 *)puVar26 = uVar37;
                  if (lVar32 != 0) {
                    CowData<char>::_ref((CowData<char> *)(puVar26 + 1),pCVar42);
                  }
                  pCVar1 = pCVar42 + 8;
                  lVar40 = lVar40 + 1;
                  pCVar42 = pCVar42 + 0x18;
                  *(undefined4 *)(puVar26 + 2) = *(undefined4 *)pCVar1;
                  puVar26 = puVar26 + 3;
                } while (lVar34 != lVar40);
              }
              CowData<CompressedString>::_unref((CowData<CompressedString> *)&local_60);
              local_60 = puVar20;
            }
          }
          puVar15 = local_50;
          puVar41 = (uint *)(puVar20 + uVar19 * 3);
          *puVar41 = (uint)local_58;
          if (*(undefined1 **)(puVar41 + 2) != local_50) {
            CowData<char>::_ref((CowData<char> *)(puVar41 + 2),(CowData *)&local_50);
          }
          puVar41[4] = local_48;
          if (puVar15 != (undefined1 *)0x0) {
            uVar22 = *(undefined8 *)(puVar15 + -8);
            LOCK();
            plVar47 = (long *)(puVar15 + -0x10);
            *plVar47 = *plVar47 + -1;
            UNLOCK();
            if (*plVar47 == 0) {
              Memory::free_static(local_50 + -0x10,false);
            }
            local_118 = local_118 + (int)uVar22;
          }
          lVar34 = local_b8;
          if (local_b8 != 0) {
            LOCK();
            plVar47 = (long *)(local_b8 + -0x10);
            *plVar47 = *plVar47 + -1;
            UNLOCK();
            if (*plVar47 == 0) {
              local_b8 = 0;
              Memory::free_static((void *)(lVar34 + -0x10),false);
            }
          }
          if (sVar45 != 0) {
            plVar47 = (long *)(sVar45 - 0x10);
            LOCK();
            *plVar47 = *plVar47 + -1;
            UNLOCK();
            if (*plVar47 == 0) {
              Memory::free_static(plVar47,false);
            }
          }
          sVar45 = local_c0;
          if (local_c0 != 0) {
            LOCK();
            plVar47 = (long *)(local_c0 - 0x10);
            *plVar47 = *plVar47 + -1;
            UNLOCK();
            if (*plVar47 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(sVar45 - 0x10),false);
            }
          }
          plVar43 = (long *)plVar43[1];
          uVar19 = uVar19 + 1;
        } while (plVar43 != (long *)0x0);
      }
      if ((int)uVar16 < 1) goto LAB_001038a4;
    }
    else {
      uVar27 = (ulong)uVar16;
      uVar19 = uVar27 * 0x30 - 1;
      uVar19 = uVar19 | uVar19 >> 1;
      uVar19 = uVar19 | uVar19 >> 2;
      uVar19 = uVar19 | uVar19 >> 4;
      uVar19 = uVar19 | uVar19 >> 8;
      uVar19 = uVar19 | uVar19 >> 0x10;
      puVar20 = (undefined8 *)Memory::alloc_static((uVar19 | uVar19 >> 0x20) + 0x11,false);
      if (puVar20 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
LAB_001034c5:
        uVar19 = uVar27 * 4 - 1;
        uVar19 = uVar19 | uVar19 >> 1;
        uVar19 = uVar19 | uVar19 >> 2;
        uVar19 = uVar19 | uVar19 >> 4;
        uVar19 = uVar19 | uVar19 >> 8;
        uVar19 = uVar19 | uVar19 >> 0x10;
        puVar20 = (undefined8 *)Memory::alloc_static((uVar19 | uVar19 >> 0x20) + 0x11,false);
        if (puVar20 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          local_70[0] = puVar20 + 2;
          *puVar20 = 1;
          puVar20[1] = uVar27;
        }
      }
      else {
        local_80[0] = (int *)(puVar20 + 2);
        *puVar20 = 1;
        uVar22 = _LC47;
        piVar30 = local_80[0];
        do {
          *(undefined8 *)(piVar30 + 10) = uVar22;
          piVar46 = piVar30 + 0xc;
          *(undefined1 (*) [16])(piVar30 + 2) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(piVar30 + 6) = (undefined1  [16])0x0;
          piVar30 = piVar46;
        } while ((int *)(puVar20 + uVar27 * 6 + 2) != piVar46);
        puVar20[1] = uVar27;
        if (local_70[0] == (undefined8 *)0x0) goto LAB_001034c5;
      }
      if (local_90[0] != (undefined8 *)0x0) goto LAB_0010273f;
      uVar19 = uVar27 * 0x10 - 1;
      uVar19 = uVar19 | uVar19 >> 1;
      uVar19 = uVar19 | uVar19 >> 2;
      uVar19 = uVar19 | uVar19 >> 4;
      uVar19 = uVar19 | uVar19 >> 8;
      uVar19 = uVar19 | uVar19 >> 0x10;
      puVar20 = (undefined8 *)Memory::alloc_static((uVar19 | uVar19 >> 0x20) + 0x11,false);
      if (puVar20 != (undefined8 *)0x0) {
        local_90[0] = puVar20 + 2;
        *puVar20 = 1;
        puVar26 = local_90[0];
        do {
          puVar26[1] = 0;
          puVar26 = puVar26 + 2;
        } while (puVar26 != puVar20 + (uVar27 + 1) * 2);
        puVar20[1] = uVar27;
        if (local_c8 == (long *)0x0) goto LAB_00103483;
        goto LAB_0010274d;
      }
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      if (local_c8 != (long *)0x0) goto LAB_0010274d;
LAB_00103483:
      if (local_60 != (undefined8 *)0x0) goto LAB_0010323d;
      local_118 = 0;
    }
    iVar17 = 0;
    uVar27 = 0;
    do {
      piVar30 = local_80[0];
      puVar20 = local_90[0];
      uVar19 = uVar27;
      if (local_90[0] == (undefined8 *)0x0) {
        lVar34 = 0;
        goto LAB_00103a7b;
      }
      lVar34 = local_90[0][-1];
      if ((long)local_90[0][-1] <= (long)uVar27) goto LAB_00103a7b;
      if (local_80[0] == (int *)0x0) {
LAB_00103a9e:
        lVar34 = 0;
LAB_00102f16:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,uVar27,lVar34,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar34 = *(long *)(local_80[0] + -2);
      if (lVar34 <= (long)uVar27) goto LAB_00102f16;
      if (1 < *(ulong *)(local_80[0] + -4)) {
        if (local_80[0] == (int *)0x0) goto OptimizedTranslation_generate;
        lVar34 = *(long *)(local_80[0] + -2);
        uVar19 = 0x10;
        if (lVar34 * 0x30 != 0) {
          uVar19 = lVar34 * 0x30 - 1;
          uVar19 = uVar19 | uVar19 >> 1;
          uVar19 = uVar19 | uVar19 >> 2;
          uVar19 = uVar19 | uVar19 >> 4;
          uVar19 = uVar19 | uVar19 >> 8;
          uVar19 = uVar19 | uVar19 >> 0x10;
          uVar19 = (uVar19 | uVar19 >> 0x20) + 0x11;
        }
        puVar26 = (undefined8 *)Memory::alloc_static(uVar19,false);
        if (puVar26 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          piVar30 = (int *)(puVar26 + 2);
          *puVar26 = 1;
          puVar26[1] = lVar34;
          if (lVar34 != 0) {
            lVar40 = 0;
            plVar43 = (long *)(local_80[0] + 6);
            piVar46 = piVar30;
            do {
              uVar2 = *(uint *)(plVar43 + 2);
              piVar46[10] = 0;
              piVar46[0xb] = 0;
              *(undefined1 (*) [16])(piVar46 + 2) = (undefined1  [16])0x0;
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)uVar2 * 4);
              *(undefined1 (*) [16])(piVar46 + 6) = (undefined1  [16])0x0;
              lVar32 = 1;
              if (5 < uVar2) {
                do {
                  if (uVar2 <= *(uint *)(hash_table_size_primes + lVar32 * 4)) {
                    piVar46[10] = (int)lVar32;
                    goto LAB_00103c99;
                  }
                  lVar32 = lVar32 + 1;
                } while (lVar32 != 0x1d);
                _err_print_error("reserve","./core/templates/hash_map.h",0x1b7);
              }
LAB_00103c99:
              if ((*(int *)((long)plVar43 + 0x14) != 0) &&
                 (plVar47 = (long *)*plVar43, plVar47 != (long *)0x0)) {
                do {
                  HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>
                  ::insert((uint *)&local_58,piVar46,(bool)((char)plVar47 + '\x10'));
                  plVar47 = (long *)*plVar47;
                } while (plVar47 != (long *)0x0);
              }
              lVar40 = lVar40 + 1;
              piVar46 = piVar46 + 0xc;
              plVar43 = plVar43 + 6;
            } while (lVar34 != lVar40);
          }
          CowData<HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>>
          ::_unref((CowData<HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>>
                    *)local_80);
          local_80[0] = piVar30;
        }
      }
      if ((puVar20[uVar27 * 2 + 1] != 0) &&
         (lVar34 = *(long *)(puVar20[uVar27 * 2 + 1] + -8), lVar34 != 0)) {
        uVar19 = 0;
        iVar36 = 0;
        uVar2 = 1;
        this_02 = (HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>
                   *)(piVar30 + uVar27 * 0xc);
        while ((long)uVar19 < lVar34) {
          pcVar21 = (char *)CharString::get_data();
          cVar3 = *pcVar21;
          uVar14 = 0x1000193;
          if (uVar2 != 0) {
            uVar14 = uVar2;
          }
          while (cVar3 != '\0') {
            uVar28 = (uint)cVar3;
            pcVar21 = pcVar21 + 1;
            uVar14 = uVar14 * 0x1000193 ^ uVar28;
            cVar3 = *pcVar21;
          }
          lVar34 = *(long *)(this_02 + 8);
          local_58 = (char *)CONCAT44(local_58._4_4_,uVar14);
          if ((lVar34 != 0) && (*(int *)(this_02 + 0x2c) != 0)) {
            uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this_02 + 0x28) * 4);
            uVar38 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this_02 + 0x28) * 8);
            uVar18 = (uVar14 >> 0x10 ^ uVar14) * -0x7a143595;
            uVar18 = (uVar18 ^ uVar18 >> 0xd) * -0x3d4d51cb;
            uVar35 = uVar18 ^ uVar18 >> 0x10;
            if (uVar18 == uVar18 >> 0x10) {
              uVar35 = 1;
              uVar31 = uVar38;
            }
            else {
              uVar31 = uVar35 * uVar38;
            }
            uVar39 = CONCAT44(0,uVar28);
            lVar40 = *(long *)(this_02 + 0x10);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar39;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar31;
            lVar32 = SUB168(auVar6 * auVar10,8);
            uVar18 = *(uint *)(lVar40 + lVar32 * 4);
            uVar31 = (ulong)uVar18;
            iVar29 = SUB164(auVar6 * auVar10,8);
            if (uVar18 != 0) {
              uVar18 = 0;
LAB_0010370a:
              if ((uVar35 != (uint)uVar31) ||
                 (uVar14 != *(uint *)(*(long *)(lVar34 + lVar32 * 8) + 0x10))) goto LAB_001036c0;
              lVar32 = 0;
              if (uVar28 != 0) {
                while( true ) {
                  if (*(int *)(lVar40 + lVar32) != 0) {
                    *(int *)(lVar40 + lVar32) = 0;
                    Memory::free_static(*(void **)(lVar34 + lVar32 * 2),false);
                    lVar34 = *(long *)(this_02 + 8);
                    *(undefined8 *)(lVar34 + lVar32 * 2) = 0;
                  }
                  lVar32 = lVar32 + 4;
                  if (lVar32 == uVar39 * 4) break;
                  lVar40 = *(long *)(this_02 + 0x10);
                }
              }
              uVar2 = uVar2 + 1;
              uVar19 = 0;
              *(undefined4 *)(this_02 + 0x2c) = 0;
              iVar36 = 0;
              *(undefined1 (*) [16])(this_02 + 0x18) = (undefined1  [16])0x0;
              goto LAB_00103789;
            }
          }
LAB_001037a9:
          lVar40 = puVar20[uVar27 * 2 + 1];
          if (lVar40 == 0) goto LAB_00103ad3;
          lVar34 = *(long *)(lVar40 + -8);
          if (*(long *)(lVar40 + -8) <= (long)uVar19) goto LAB_00103a7b;
          uVar37 = *(undefined4 *)(lVar40 + (long)iVar36 * 0x10);
          puVar24 = (undefined4 *)
                    HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>
                    ::operator[](this_02,(uint *)&local_58);
          iVar36 = iVar36 + 1;
          uVar19 = (ulong)iVar36;
          *puVar24 = uVar37;
LAB_00103789:
          if (puVar20[uVar27 * 2 + 1] == 0) break;
          lVar34 = *(long *)(puVar20[uVar27 * 2 + 1] + -8);
        }
        puVar26 = local_70[0];
        if (local_70[0] == (undefined8 *)0x0) goto LAB_00103a9e;
        lVar34 = local_70[0][-1];
        if (lVar34 <= (long)uVar27) goto LAB_00102f16;
        puVar33 = local_70[0];
        if (1 < (ulong)local_70[0][-2]) {
          if (local_70[0] == (undefined8 *)0x0) {
OptimizedTranslation_generate:
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar34 = local_70[0][-1];
          lVar40 = 0;
          sVar45 = lVar34 * 4;
          if (sVar45 != 0) {
            uVar19 = sVar45 - 1 | sVar45 - 1 >> 1;
            uVar19 = uVar19 | uVar19 >> 2;
            uVar19 = uVar19 | uVar19 >> 4;
            uVar19 = uVar19 | uVar19 >> 8;
            uVar19 = uVar19 | uVar19 >> 0x10;
            lVar40 = (uVar19 | uVar19 >> 0x20) + 1;
          }
          puVar25 = (undefined8 *)Memory::alloc_static(lVar40 + 0x10,false);
          puVar33 = local_70[0];
          if (puVar25 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
            puVar33 = local_70[0];
          }
          else {
            puVar26 = puVar25 + 2;
            *puVar25 = 1;
            puVar25[1] = lVar34;
            memcpy(puVar26,local_70[0],sVar45);
            LOCK();
            plVar43 = puVar33 + -2;
            *plVar43 = *plVar43 + -1;
            UNLOCK();
            puVar33 = puVar26;
            if (*plVar43 == 0) {
              Memory::free_static(local_70[0] + -2,false);
            }
          }
        }
        local_70[0] = puVar33;
        *(uint *)((long)puVar26 + uVar27 * 4) = uVar2;
        if (puVar20[uVar27 * 2 + 1] == 0) {
          iVar36 = 2;
        }
        else {
          iVar36 = (int)*(undefined8 *)(puVar20[uVar27 * 2 + 1] + -8) * 4 + 2;
        }
        iVar17 = iVar17 + iVar36;
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar16);
    if (iVar17 != 0) {
      CowData<int>::resize<false>((CowData<int> *)(this + 0x2b0),lVar44);
      CowData<int>::resize<false>((CowData<int> *)(this + 0x2c0),(long)iVar17);
      CowData<int>::_copy_on_write((CowData<int> *)(this + 0x2b0));
      lVar44 = *(long *)(this + 0x2b0);
      CowData<int>::_copy_on_write((CowData<int> *)(this + 0x2c0));
      lVar40 = *(long *)(this + 0x2c0);
      if (local_80[0] == (int *)0x0) {
        uVar19 = 0;
        lVar34 = 0;
      }
      else {
        lVar32 = *(long *)(local_80[0] + -2);
        uVar19 = 0;
        piVar30 = local_80[0] + 0xb;
        iVar36 = 0;
        uVar27 = 0;
        lVar34 = lVar32;
        if (0 < lVar32) {
          do {
            if (*piVar30 == 0) {
              *(undefined4 *)(lVar44 + uVar27 * 4) = 0xffffffff;
            }
            else {
              *(int *)(lVar44 + uVar27 * 4) = iVar36;
              *(int *)(lVar40 + (long)iVar36 * 4) = *piVar30;
              uVar19 = uVar27;
              if (local_70[0] == (undefined8 *)0x0) goto LAB_00103ad3;
              lVar34 = local_70[0][-1];
              if ((long)local_70[0][-1] <= (long)uVar27) break;
              plVar43 = *(long **)(piVar30 + -5);
              *(undefined4 *)(lVar40 + 4 + (long)iVar36 * 4) =
                   *(undefined4 *)((long)local_70[0] + uVar27 * 4);
              if (plVar43 == (long *)0x0) {
                iVar36 = iVar36 + 2;
              }
              else {
                *(int *)(lVar40 + -0x10 + (long)(iVar36 + 6) * 4) = (int)plVar43[2];
                uVar19 = (ulong)*(int *)((long)plVar43 + 0x14);
                if ((long)uVar19 < 0) {
LAB_00104318:
                  if (local_60 == (undefined8 *)0x0) {
LAB_00103ad3:
                    lVar34 = 0;
                  }
                  else {
                    lVar34 = local_60[-1];
                  }
                  break;
                }
                if (local_60 == (undefined8 *)0x0) goto LAB_00103ad3;
                lVar34 = local_60[-1];
                lVar23 = (long)(iVar36 + 6);
                while( true ) {
                  if (lVar34 <= (long)uVar19) goto LAB_00103a7b;
                  *(undefined4 *)(lVar40 + -0xc + lVar23 * 4) =
                       *(undefined4 *)(local_60 + uVar19 * 3 + 2);
                  uVar19 = (ulong)*(int *)((long)plVar43 + 0x14);
                  if (((long)uVar19 < 0) || (lVar34 <= (long)uVar19)) goto LAB_00103a7b;
                  if (local_60[uVar19 * 3 + 1] == 0) {
                    uVar37 = 0;
                  }
                  else {
                    uVar37 = (undefined4)*(undefined8 *)(local_60[uVar19 * 3 + 1] + -8);
                  }
                  *(undefined4 *)(lVar40 + -8 + lVar23 * 4) = uVar37;
                  uVar19 = (ulong)*(int *)((long)plVar43 + 0x14);
                  if ((lVar34 <= (long)uVar19) || ((long)uVar19 < 0)) goto LAB_00103a7b;
                  plVar43 = (long *)*plVar43;
                  *(undefined4 *)(lVar40 + -4 + lVar23 * 4) = *(undefined4 *)(local_60 + uVar19 * 3)
                  ;
                  if (plVar43 == (long *)0x0) break;
                  *(undefined4 *)(lVar40 + -0x10 + (lVar23 + 4) * 4) = *(undefined4 *)(plVar43 + 2);
                  uVar19 = (ulong)*(int *)((long)plVar43 + 0x14);
                  lVar23 = lVar23 + 4;
                  if ((long)uVar19 < 0) goto LAB_00104318;
                }
                iVar36 = (int)lVar23;
              }
            }
            uVar19 = uVar27 + 1;
            piVar30 = piVar30 + 0xc;
            if (uVar27 == uVar16 - 1) {
              lVar44 = (long)(int)local_118;
              this_00 = (CowData<unsigned_char> *)(this + 0x2d0);
              if (lVar44 < 0) {
                _err_print_error("resize","./core/templates/cowdata.h",0x157,
                                 "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                                 ,0,0);
              }
              else {
                lVar34 = *(long *)(this + 0x2d0);
                if (lVar34 == 0) {
                  if (lVar44 != 0) {
                    CowData<unsigned_char>::_copy_on_write(this_00);
                    uVar19 = lVar44 - 1U >> 1 | lVar44 - 1U;
                    uVar19 = uVar19 >> 2 | uVar19;
                    uVar19 = uVar19 >> 4 | uVar19;
                    uVar19 = uVar19 >> 8 | uVar19;
                    uVar19 = uVar19 >> 0x10 | uVar19;
LAB_00104094:
                    puVar20 = (undefined8 *)Memory::alloc_static(uVar19 + 0x11,false);
                    if (puVar20 == (undefined8 *)0x0) {
                      _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                       "Parameter \"mem_new\" is null.",0,0);
                    }
                    else {
                      *puVar20 = 1;
                      puVar20[1] = 0;
LAB_001040b5:
                      puVar20 = puVar20 + 2;
                      *(undefined8 **)(this + 0x2d0) = puVar20;
LAB_001040bc:
                      puVar20[-1] = lVar44;
                    }
                  }
                }
                else {
                  lVar40 = *(long *)(lVar34 + -8);
                  if (lVar44 != lVar40) {
                    if (lVar44 == 0) {
                      LOCK();
                      plVar43 = (long *)(lVar34 + -0x10);
                      *plVar43 = *plVar43 + -1;
                      UNLOCK();
                      if (*plVar43 == 0) {
                        lVar44 = *(long *)(this + 0x2d0);
                        *(undefined8 *)(this + 0x2d0) = 0;
                        Memory::free_static((void *)(lVar44 + -0x10),false);
                      }
                      else {
                        *(undefined8 *)(this + 0x2d0) = 0;
                      }
                    }
                    else {
                      CowData<unsigned_char>::_copy_on_write(this_00);
                      uVar19 = lVar44 - 1U >> 1 | lVar44 - 1U;
                      uVar19 = uVar19 >> 2 | uVar19;
                      uVar19 = uVar19 >> 4 | uVar19;
                      uVar19 = uVar19 >> 8 | uVar19;
                      uVar19 = uVar19 >> 0x10 | uVar19;
                      if (lVar40 == 0) goto LAB_00104094;
                      uVar27 = lVar40 - 1U | lVar40 - 1U >> 1;
                      uVar27 = uVar27 | uVar27 >> 2;
                      uVar27 = uVar27 | uVar27 >> 4;
                      uVar27 = uVar27 | uVar27 >> 8;
                      uVar27 = uVar27 | uVar27 >> 0x10;
                      uVar27 = uVar27 | uVar27 >> 0x20;
                      if (lVar40 < lVar44) {
                        if (uVar27 != uVar19) {
                          puVar20 = (undefined8 *)
                                    Memory::realloc_static
                                              ((void *)(*(long *)(this + 0x2d0) + -0x10),
                                               uVar19 + 0x11,false);
                          if (puVar20 == (undefined8 *)0x0) goto LAB_001042b4;
                          *puVar20 = 1;
                          goto LAB_001040b5;
                        }
                        puVar20 = *(undefined8 **)(this + 0x2d0);
                        if (puVar20 == (undefined8 *)0x0) {
                          FUN_00104c58();
                          return;
                        }
                        goto LAB_001040bc;
                      }
                      puVar20 = *(undefined8 **)(this + 0x2d0);
                      if (uVar27 == uVar19) {
                        if (puVar20 == (undefined8 *)0x0) {
                          _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                          pcVar5 = (code *)invalidInstructionException();
                          (*pcVar5)();
                        }
                      }
                      else {
                        puVar26 = (undefined8 *)
                                  Memory::realloc_static(puVar20 + -2,uVar19 + 0x11,false);
                        if (puVar26 == (undefined8 *)0x0) {
LAB_001042b4:
                          _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                                           "Parameter \"mem_new\" is null.",0,0);
                          goto LAB_00103fcf;
                        }
                        puVar20 = puVar26 + 2;
                        *puVar26 = 1;
                        *(undefined8 **)(this + 0x2d0) = puVar20;
                      }
                      puVar20[-1] = lVar44;
                    }
                  }
                }
              }
LAB_00103fcf:
              CowData<unsigned_char>::_copy_on_write(this_00);
              puVar20 = local_60;
              lVar44 = *(long *)(this + 0x2d0);
              if (local_60 == (undefined8 *)0x0) goto LAB_0010435b;
              uVar19 = 0;
              plVar43 = local_60 + 1;
              goto LAB_00104037;
            }
            uVar27 = uVar19;
            lVar34 = lVar32;
          } while ((long)uVar19 < lVar32);
        }
      }
LAB_00103a7b:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar19,lVar34,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
LAB_001038a4:
  _err_print_error("generate","core/string/optimized_translation.cpp",0x88,
                   "Condition \"bucket_table_size == 0\" is true.",0,0);
  goto LAB_001038c9;
LAB_001036c0:
  uVar18 = uVar18 + 1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (iVar29 + 1) * uVar38;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar39;
  lVar32 = SUB168(auVar7 * auVar11,8);
  uVar4 = *(uint *)(lVar40 + lVar32 * 4);
  uVar31 = (ulong)uVar4;
  iVar29 = SUB164(auVar7 * auVar11,8);
  if ((uVar4 == 0) ||
     (auVar8._8_8_ = 0, auVar8._0_8_ = uVar31 * uVar38, auVar12._8_8_ = 0, auVar12._0_8_ = uVar39,
     auVar9._8_8_ = 0, auVar9._0_8_ = ((uVar28 + iVar29) - SUB164(auVar8 * auVar12,8)) * uVar38,
     auVar13._8_8_ = 0, auVar13._0_8_ = uVar39, SUB164(auVar9 * auVar13,8) < uVar18))
  goto LAB_001037a9;
  goto LAB_0010370a;
LAB_00104037:
  if ((long)puVar20[-1] <= (long)uVar19) goto LAB_0010435b;
  if (*plVar43 == 0) {
    iVar29 = 0;
  }
  else {
    iVar29 = (int)*(undefined8 *)(*plVar43 + -8);
  }
  __src = (void *)CharString::get_data();
  lVar34 = puVar20[-1];
  if (lVar34 <= (long)uVar19) goto LAB_00103a7b;
  uVar19 = uVar19 + 1;
  memcpy((void *)((int)plVar43[1] + lVar44),__src,(long)iVar29);
  plVar43 = plVar43 + 3;
  goto LAB_00104037;
LAB_0010435b:
  if (iVar17 == iVar36) {
    local_58 = (char *)0x0;
    if (*(long *)(*(long *)param_1 + 0x240) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(*(long *)param_1 + 0x240));
    }
    Translation::set_locale((String *)this);
    pcVar21 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar43 = (long *)(local_58 + -0x10);
      *plVar43 = *plVar43 + -1;
      UNLOCK();
      if (*plVar43 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar21 + -0x10,false);
      }
    }
  }
  else {
    _err_print_error("generate","core/string/optimized_translation.cpp",0xaf,
                     "Condition \"btindex != bucket_table_size\" is true.",0,0);
  }
LAB_001038c9:
  CowData<CompressedString>::_unref((CowData<CompressedString> *)&local_60);
  CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_70);
  CowData<HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>>
  ::_unref((CowData<HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>>
            *)local_80);
  CowData<Vector<Pair<int,CharString>>>::_unref((CowData<Vector<Pair<int,CharString>>> *)local_90);
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_c8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103ed8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OptimizedTranslation::_set(StringName const&, Variant const&) */

undefined4 OptimizedTranslation::_set(StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  size_t sVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_40;
  Object *local_38;
  size_t local_30;
  long local_20;
  
  lVar8 = *(long *)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar8 == 0) {
LAB_00104579:
    local_40 = 0;
  }
  else {
    pOVar9 = *(Object **)(lVar8 + 8);
    local_40 = 0;
    if (pOVar9 == (Object *)0x0) {
      plVar1 = (long *)(*(long *)(lVar8 + 0x10) + -0x10);
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00104579;
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00104579;
        LOCK();
        lVar6 = *plVar1;
        bVar10 = lVar2 == lVar6;
        if (bVar10) {
          *plVar1 = lVar2 + 1;
          lVar6 = lVar2;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar6 != -1) {
        local_40 = *(long *)(lVar8 + 0x10);
      }
    }
    else {
      local_30 = strlen((char *)pOVar9);
      local_38 = pOVar9;
      String::parse_latin1((StrRange *)&local_40);
    }
  }
  cVar4 = String::operator==((String *)&local_40,"hash_table");
  if (cVar4 == '\0') {
    cVar4 = String::operator==((String *)&local_40,"bucket_table");
    if (cVar4 == '\0') {
      cVar4 = String::operator==((String *)&local_40,"strings");
      if (cVar4 == '\0') {
        uVar5 = String::operator==((String *)&local_40,"load_from");
        if ((char)uVar5 == '\0') goto LAB_001044e4;
        local_38 = (Object *)0x0;
        lVar8 = Variant::get_validated_object();
        if ((lVar8 != 0) &&
           (pOVar9 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&Translation::typeinfo,0),
           pOVar9 != (Object *)0x0)) {
          local_38 = pOVar9;
          cVar4 = RefCounted::reference();
          if (cVar4 != '\0') {
            generate((OptimizedTranslation *)param_1,(Ref *)&local_38);
            cVar4 = RefCounted::unreference();
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
            }
            goto LAB_001044de;
          }
          local_38 = (Object *)0x0;
        }
        generate((OptimizedTranslation *)param_1,(Ref *)&local_38);
      }
      else {
        Variant::operator_cast_to_Vector((Variant *)&local_38);
        sVar7 = *(size_t *)(param_1 + 0x2d0);
        if (sVar7 == local_30) goto LAB_001045bd;
        if (sVar7 != 0) {
          LOCK();
          plVar1 = (long *)(sVar7 - 0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar8 = *(long *)(param_1 + 0x2d0);
            *(undefined8 *)(param_1 + 0x2d0) = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        *(size_t *)(param_1 + 0x2d0) = local_30;
      }
    }
    else {
      Variant::operator_cast_to_Vector((Variant *)&local_38);
      sVar7 = *(size_t *)(param_1 + 0x2c0);
      if (sVar7 == local_30) goto LAB_001045bd;
      if (sVar7 != 0) {
        LOCK();
        plVar1 = (long *)(sVar7 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *(long *)(param_1 + 0x2c0);
          *(undefined8 *)(param_1 + 0x2c0) = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      *(size_t *)(param_1 + 0x2c0) = local_30;
    }
  }
  else {
    Variant::operator_cast_to_Vector((Variant *)&local_38);
    sVar7 = *(size_t *)(param_1 + 0x2b0);
    if (sVar7 == local_30) {
LAB_001045bd:
      sVar3 = local_30;
      if (sVar7 != 0) {
        LOCK();
        plVar1 = (long *)(sVar7 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_30 = 0;
          Memory::free_static((void *)(sVar3 - 0x10),false);
        }
      }
    }
    else {
      if (sVar7 != 0) {
        LOCK();
        plVar1 = (long *)(sVar7 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *(long *)(param_1 + 0x2b0);
          *(undefined8 *)(param_1 + 0x2b0) = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      *(size_t *)(param_1 + 0x2b0) = local_30;
    }
  }
LAB_001044de:
  uVar5 = 1;
LAB_001044e4:
  lVar8 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* OptimizedTranslation::is_class_ptr(void*) const */

uint __thiscall OptimizedTranslation::is_class_ptr(OptimizedTranslation *this,void *param_1)

{
  return (uint)CONCAT71(0x10a2,(undefined4 *)param_1 == &Translation::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a2,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a3,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* OptimizedTranslation::_validate_propertyv(PropertyInfo&) const */

void OptimizedTranslation::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* OptimizedTranslation::_property_can_revertv(StringName const&) const */

undefined8 OptimizedTranslation::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* OptimizedTranslation::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OptimizedTranslation::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OptimizedTranslation::_notificationv(int, bool) */

void OptimizedTranslation::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<Ref<Translation> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Translation>const&>::_gen_argument_type
          (MethodBindT<Ref<Translation>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Translation> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Translation>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Translation> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Translation>const&>::~MethodBindT(MethodBindT<Ref<Translation>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a280;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Translation> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Translation>const&>::~MethodBindT(MethodBindT<Ref<Translation>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a280;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Translation::get_save_class() const */

Translation * __thiscall Translation::get_save_class(Translation *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Translation::get_base_extension() const */

Translation * __thiscall Translation::get_base_extension(Translation *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OptimizedTranslation::_get_class_namev() const */

undefined8 * OptimizedTranslation::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00104a63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104a63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"OptimizedTranslation");
      goto LAB_00104ace;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OptimizedTranslation");
LAB_00104ace:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<int>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104c24(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OptimizedTranslation::_bind_methods() [clone .cold] */

void OptimizedTranslation::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Pair<int, CharString> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Pair<int,CharString>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OptimizedTranslation::generate(Ref<Translation> const&) [clone .cold] */

void OptimizedTranslation::generate(Ref *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104c58(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OptimizedTranslation::get_class() const */

void OptimizedTranslation::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OptimizedTranslation::~OptimizedTranslation() */

void __thiscall OptimizedTranslation::~OptimizedTranslation(OptimizedTranslation *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010a050;
  if (*(long *)(this + 0x2d0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2d0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x2d0);
      *(undefined8 *)(this + 0x2d0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x2c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x2c0);
      *(undefined8 *)(this + 0x2c0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x2b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x2b0);
      *(undefined8 *)(this + 0x2b0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = StringName::operator=;
  if (bVar5) {
    if (*(long *)(this + 0x290) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104fe9;
    }
    if (*(long *)(this + 0x278) != 0) {
      StringName::unref();
    }
  }
LAB_00104fe9:
  pvVar4 = *(void **)(this + 0x250);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x274) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x274) = 0;
        *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 600) + lVar3) != 0) {
            bVar5 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 600) + lVar3) = 0;
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            if (bVar5) {
              if (*(long *)((long)pvVar4 + 0x18) != 0) {
                StringName::unref();
                if (StringName::configured == '\0') goto LAB_00105085;
              }
              if (*(long *)((long)pvVar4 + 0x10) != 0) {
                StringName::unref();
              }
            }
LAB_00105085:
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x250);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x274) = 0;
        *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_001050c1;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 600),false);
  }
LAB_001050c1:
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* OptimizedTranslation::~OptimizedTranslation() */

void __thiscall OptimizedTranslation::~OptimizedTranslation(OptimizedTranslation *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010a050;
  if (*(long *)(this + 0x2d0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2d0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x2d0);
      *(undefined8 *)(this + 0x2d0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x2c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x2c0);
      *(undefined8 *)(this + 0x2c0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x2b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x2b0);
      *(undefined8 *)(this + 0x2b0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = StringName::operator=;
  if (bVar5) {
    if (*(long *)(this + 0x290) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105279;
    }
    if (*(long *)(this + 0x278) != 0) {
      StringName::unref();
    }
  }
LAB_00105279:
  pvVar4 = *(void **)(this + 0x250);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x274) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x274) = 0;
        *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 600) + lVar3) != 0) {
            bVar5 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 600) + lVar3) = 0;
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            if (bVar5) {
              if (*(long *)((long)pvVar4 + 0x18) != 0) {
                StringName::unref();
                if (StringName::configured == '\0') goto LAB_00105315;
              }
              if (*(long *)((long)pvVar4 + 0x10) != 0) {
                StringName::unref();
              }
            }
LAB_00105315:
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x250);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x274) = 0;
        *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_00105351;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 600),false);
  }
LAB_00105351:
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2d8);
  return;
}



/* MethodBindT<Ref<Translation> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Translation>const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001054a7;
  local_68 = 0;
  local_58 = "Translation";
  local_70 = 0;
  local_50._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (char *)CONCAT44(local_58._4_4_,0x18);
  local_40 = 0x11;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_001056ad:
    local_30 = 6;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 == 0x11) goto LAB_001056ad;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_58._0_4_;
  lVar2 = *(long *)(puVar7 + 2);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar7 + 2);
        *(undefined8 *)(puVar7 + 2) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(puVar7 + 2) = local_50._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_50._8_8_;
    local_50 = auVar4 << 0x40;
  }
  if (*(long *)(puVar7 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar5 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_38;
  puVar7[6] = local_40;
  lVar2 = *(long *)(puVar7 + 8);
  if (lVar2 == local_38) {
    puVar7[10] = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar7 + 8);
        *(undefined8 *)(puVar7 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(puVar7 + 8) = local_38;
    puVar7[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_50._8_8_;
      local_50 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_001054a7:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105918:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105918;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00105936;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00105936:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105d18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105d18;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105d35;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105d35:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Translation::is_class(String const&) const */

undefined8 __thiscall Translation::is_class(Translation *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010605f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010605f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00106113;
  }
  cVar6 = String::operator==((String *)param_1,"Translation");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00106283;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00106283:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00106113;
    }
    cVar6 = String::operator==((String *)param_1,"Resource");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
            if (*(long *)(lVar4 + 0x10) != 0) {
              do {
                lVar5 = *plVar1;
                if (lVar5 == 0) goto LAB_00106363;
                LOCK();
                lVar7 = *plVar1;
                bVar9 = lVar5 == lVar7;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar7 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar7 != -1) {
                local_60 = *(long *)(lVar4 + 0x10);
              }
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
LAB_00106363:
        cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
        lVar4 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        if (cVar6 != '\0') goto LAB_00106113;
      }
      cVar6 = String::operator==((String *)param_1,"RefCounted");
      if (cVar6 == '\0') {
        for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
          lVar4 = *(long *)(lVar2 + 0x20);
          if (lVar4 == 0) {
            local_60 = 0;
          }
          else {
            pcVar3 = *(char **)(lVar4 + 8);
            local_60 = 0;
            if (pcVar3 == (char *)0x0) {
              plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
              if (*(long *)(lVar4 + 0x10) != 0) {
                do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_001061eb;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                    *plVar1 = lVar5 + 1;
                    lVar7 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar9);
                if (lVar7 != -1) {
                  local_60 = *(long *)(lVar4 + 0x10);
                }
              }
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_60);
            }
          }
LAB_001061eb:
          cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
          lVar4 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (cVar6 != '\0') goto LAB_00106113;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==((String *)param_1,"Object");
          return uVar8;
        }
        goto LAB_00106479;
      }
    }
  }
LAB_00106113:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00106479:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OptimizedTranslation::is_class(String const&) const */

undefined8 __thiscall OptimizedTranslation::is_class(OptimizedTranslation *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001064ef;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001064ef:
    cVar5 = String::operator==((String *)param_1,(StrRange *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_001065a3;
  }
  cVar5 = String::operator==((String *)param_1,"OptimizedTranslation");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Translation::is_class((Translation *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001065a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Translation::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Translation::_get_property_listv(Translation *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Translation";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Translation";
  local_98 = 0;
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00106778:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106778;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106795;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106795:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Translation",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OptimizedTranslation::_getv(StringName const&, Variant&) const */

void __thiscall
OptimizedTranslation::_getv(OptimizedTranslation *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* OptimizedTranslation::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
OptimizedTranslation::_get_property_listv(OptimizedTranslation *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  StringName *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Translation::_get_property_listv((Translation *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OptimizedTranslation";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "OptimizedTranslation";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00106be8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106be8;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106c0a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106c0a:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"OptimizedTranslation",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Translation::_get_property_listv((Translation *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* MethodBind* create_method_bind<OptimizedTranslation, Ref<Translation> const&>(void
   (OptimizedTranslation::*)(Ref<Translation> const&)) */

MethodBind *
create_method_bind<OptimizedTranslation,Ref<Translation>const&>(_func_void_Ref_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a280;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OptimizedTranslation";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OptimizedTranslation::_initialize_classv() */

void OptimizedTranslation::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Translation::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          lVar2 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          lVar2 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((code *)PTR__bind_methods_0010d008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "Resource";
        local_70 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        lVar2 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "Translation";
      local_70 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        Translation::_bind_methods();
      }
      Translation::initialize_class()::initialized = '\x01';
    }
    local_58 = "Translation";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "OptimizedTranslation";
    local_70 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar5 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar9 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00107a80:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  if (uVar6 == 0xffffffffffffffff) goto LAB_00107a80;
  if (param_1 <= lVar9) {
    puVar7 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar7 != (undefined8 *)0x0) {
      if ((ulong)puVar7[-1] <= uVar8) {
LAB_00107909:
        if (uVar6 + 1 != lVar5) {
          puVar4 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar6 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00107aaf;
          puVar7 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar7;
        }
        puVar7[-1] = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = puVar7 + uVar8;
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if ((ulong)puVar7[-1] <= uVar8) goto LAB_00107909;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar9 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      puVar7 = *(undefined8 **)this;
    }
LAB_00107afd:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar6 + 1 == lVar5) {
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) goto LAB_00107afd;
    lVar9 = puVar7[-1];
LAB_001079e0:
    if (param_1 <= lVar9) goto LAB_00107995;
  }
  else {
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
LAB_00107aaf:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      *(undefined8 **)this = puVar7;
      lVar9 = puVar4[1];
      goto LAB_001079e0;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar9 = 0;
  }
  memset(puVar7 + lVar9,0,(param_1 - lVar9) * 8);
LAB_00107995:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<HashMap<unsigned int, int, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, int> > > >::_unref() */

void __thiscall
CowData<HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>>
::_unref(CowData<HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>>
         *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar4 = *(long *)(lVar3 + -8);
  lVar10 = 0;
  *(undefined8 *)this = 0;
  lVar8 = lVar3;
  if (lVar4 != 0) {
    do {
      pvVar9 = *(void **)(lVar8 + 8);
      if (pvVar9 != (void *)0x0) {
        if (*(int *)(lVar8 + 0x2c) != 0) {
          uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar8 + 0x28) * 4);
          if (uVar2 == 0) {
            *(undefined4 *)(lVar8 + 0x2c) = 0;
            *(undefined1 (*) [16])(lVar8 + 0x18) = (undefined1  [16])0x0;
          }
          else {
            lVar7 = 0;
            do {
              piVar6 = (int *)(*(long *)(lVar8 + 0x10) + lVar7);
              if (*piVar6 != 0) {
                *piVar6 = 0;
                Memory::free_static(*(void **)((long)pvVar9 + lVar7 * 2),false);
                pvVar9 = *(void **)(lVar8 + 8);
                *(undefined8 *)((long)pvVar9 + lVar7 * 2) = 0;
              }
              lVar7 = lVar7 + 4;
            } while (lVar7 != (ulong)uVar2 * 4);
            *(undefined4 *)(lVar8 + 0x2c) = 0;
            *(undefined1 (*) [16])(lVar8 + 0x18) = (undefined1  [16])0x0;
            if (pvVar9 == (void *)0x0) goto LAB_00107c27;
          }
        }
        Memory::free_static(pvVar9,false);
        Memory::free_static(*(void **)(lVar8 + 0x10),false);
      }
LAB_00107c27:
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar4 != lVar10);
  }
  Memory::free_static((void *)(lVar3 + -0x10),false);
  return;
}



/* CowData<CompressedString>::_unref() */

void __thiscall CowData<CompressedString>::_unref(CowData<CompressedString> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<HashMap<unsigned int, int, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, int> > > >::_realloc(long) */

undefined8 __thiscall
CowData<HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>>
::_realloc(CowData<HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>>
           *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* HashMap<unsigned int, int, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, int> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>
::_resize_and_rehash
          (HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned int, int, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, int> > >::operator[](unsigned int const&) */

undefined1  [16] __thiscall
HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>
::operator[](HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>
             *this,uint *param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 (*pauVar28) [16];
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 (*pauVar32) [16];
  undefined8 uVar33;
  void *__s_00;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  int iVar39;
  uint uVar40;
  ulong uVar41;
  long lVar42;
  uint uVar43;
  uint uVar44;
  undefined1 (*pauVar45) [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long lStack_70;
  uint local_68;
  
  uVar38 = (ulong)*(uint *)(this + 0x28);
  __s_00 = *(void **)(this + 8);
  uVar31 = *param_1;
  uVar30 = *(uint *)(hash_table_size_primes + uVar38 * 4);
  uVar41 = CONCAT44(0,uVar30);
  if (__s_00 == (void *)0x0) {
    uVar38 = uVar41 * 4;
    uVar2 = uVar41 * 8;
    uVar33 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    lStack_70 = 0x1084e0;
    __s_00 = (void *)Memory::alloc_static(uVar2,false);
    *(void **)(this + 8) = __s_00;
    if (uVar30 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar2)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar41 != uVar38);
        uVar31 = *param_1;
        iVar39 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar38);
        lStack_70 = 0x10852a;
        memset(__s_00,0,uVar2);
        uVar31 = *param_1;
        iVar39 = *(int *)(this + 0x2c);
      }
LAB_00108539:
      if (iVar39 == 0) goto LAB_001085f0;
      uVar38 = (ulong)*(uint *)(this + 0x28);
      lVar42 = *(long *)(this + 0x10);
      goto LAB_00108204;
    }
    uVar31 = *param_1;
    iVar39 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_00108539;
  }
  else {
    iVar39 = *(int *)(this + 0x2c);
    if (iVar39 == 0) {
LAB_001085f0:
      iVar39 = 0;
    }
    else {
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar38 * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar43 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar43 = 1;
        uVar35 = uVar2;
      }
      else {
        uVar35 = uVar43 * uVar2;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar35;
      lVar36 = SUB168(auVar4 * auVar16,8);
      lVar42 = *(long *)(this + 0x10);
      uVar44 = SUB164(auVar4 * auVar16,8);
      uVar29 = *(uint *)(lVar42 + lVar36 * 4);
      if (uVar29 != 0) {
        uVar40 = 0;
        lVar37 = lVar36;
        do {
          if ((uVar43 == uVar29) &&
             (uVar31 == *(uint *)(*(long *)((long)__s_00 + lVar36 * 8) + 0x10))) {
            auVar46._0_8_ = *(long *)((long)__s_00 + (ulong)uVar44 * 8) + 0x14;
            auVar46._8_8_ = lVar37;
            return auVar46;
          }
          uVar40 = uVar40 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar44 + 1) * uVar2;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          lVar36 = SUB168(auVar5 * auVar17,8);
          uVar29 = *(uint *)(lVar42 + lVar36 * 4);
          uVar44 = SUB164(auVar5 * auVar17,8);
        } while ((uVar29 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar29 * uVar2, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar41, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar44 + uVar30) - SUB164(auVar6 * auVar18,8)) * uVar2,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar41, lVar37 = SUB168(auVar7 * auVar19,8),
                uVar40 <= SUB164(auVar7 * auVar19,8)));
      }
LAB_00108204:
      uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar38 * 4));
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar38 * 8);
      uVar30 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
      uVar29 = uVar30 ^ uVar30 >> 0x10;
      if (uVar30 == uVar30 >> 0x10) {
        uVar29 = 1;
        uVar34 = uVar2;
      }
      else {
        uVar34 = uVar29 * uVar2;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar35;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      lVar36 = SUB168(auVar8 * auVar20,8);
      uVar30 = *(uint *)(lVar42 + lVar36 * 4);
      uVar43 = SUB164(auVar8 * auVar20,8);
      if (uVar30 != 0) {
        uVar44 = 0;
        lVar37 = lVar36;
        do {
          if ((uVar29 == uVar30) &&
             (uVar31 == *(uint *)(*(long *)((long)__s_00 + lVar36 * 8) + 0x10))) {
            pauVar32 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar43 * 8);
            *(undefined4 *)(pauVar32[1] + 4) = 0;
            lStack_70 = lVar37;
            goto LAB_001082d6;
          }
          uVar44 = uVar44 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (uVar43 + 1) * uVar2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar35;
          lVar36 = SUB168(auVar9 * auVar21,8);
          uVar30 = *(uint *)(lVar42 + lVar36 * 4);
          uVar43 = SUB164(auVar9 * auVar21,8);
        } while ((uVar30 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = uVar30 * uVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar35, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar38 * 4) + uVar43) -
                     SUB164(auVar10 * auVar22,8)) * uVar2, auVar23._8_8_ = 0, auVar23._0_8_ = uVar35
                , lVar37 = SUB168(auVar11 * auVar23,8), uVar44 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar41 * __LC38 < (float)(iVar39 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar32 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001082d6;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  uVar31 = *param_1;
  pauVar32 = (undefined1 (*) [16])operator_new(0x18,"");
  *(uint *)pauVar32[1] = uVar31;
  *(undefined4 *)(pauVar32[1] + 4) = 0;
  *pauVar32 = (undefined1  [16])0x0;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar32;
  }
  else {
    *puVar3 = pauVar32;
    *(undefined8 **)(*pauVar32 + 8) = puVar3;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar32;
  uVar31 = (*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar30 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
  uVar31 = uVar30 ^ uVar30 >> 0x10;
  if (uVar30 == uVar30 >> 0x10) {
    uVar38 = 1;
    uVar31 = 1;
  }
  else {
    uVar38 = (ulong)uVar31;
  }
  uVar43 = 0;
  lVar42 = *(long *)(this + 0x10);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar30);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar38 * lVar36;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar41;
  lStack_70 = SUB168(auVar12 * auVar24,8);
  lVar37 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar42 + lStack_70 * 4);
  iVar39 = SUB164(auVar12 * auVar24,8);
  uVar29 = *puVar1;
  pauVar28 = pauVar32;
  while (uVar29 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar29 * lVar36;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar41;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar30 + iVar39) - SUB164(auVar13 * auVar25,8)) * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar41;
    local_68 = SUB164(auVar14 * auVar26,8);
    pauVar45 = pauVar28;
    if (local_68 < uVar43) {
      *puVar1 = uVar31;
      puVar3 = (undefined8 *)(lVar37 + lStack_70 * 8);
      pauVar45 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar31 = uVar29;
      uVar43 = local_68;
    }
    uVar43 = uVar43 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar39 + 1) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar41;
    lStack_70 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar42 + lStack_70 * 4);
    iVar39 = SUB164(auVar15 * auVar27,8);
    pauVar28 = pauVar45;
    uVar29 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar37 + lStack_70 * 8) = pauVar28;
  *puVar1 = uVar31;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001082d6:
  auVar47._8_8_ = lStack_70;
  auVar47._0_8_ = pauVar32[1] + 4;
  return auVar47;
}



/* CowData<Pair<int, CharString> >::_unref() */

void __thiscall CowData<Pair<int,CharString>>::_unref(CowData<Pair<int,CharString>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Vector<Pair<int, CharString> > >::_unref() */

void __thiscall
CowData<Vector<Pair<int,CharString>>>::_unref(CowData<Vector<Pair<int,CharString>>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<Pair<int,CharString>> *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = (CowData<Pair<int,CharString>> *)(lVar2 + 8);
        do {
          lVar5 = lVar5 + 1;
          CowData<Pair<int,CharString>>::_unref(this_00);
          this_00 = this_00 + 0x10;
        } while (lVar3 != lVar5);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* Error CowData<Pair<int, CharString> >::resize<false>(long) */

undefined8 __thiscall
CowData<Pair<int,CharString>>::resize<false>(CowData<Pair<int,CharString>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 0x10;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00108a68:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x10 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  if (uVar9 == 0xffffffffffffffff) goto LAB_00108a68;
  if (param_1 <= lVar7) {
    puVar5 = *(undefined8 **)this;
    uVar6 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar6) {
LAB_001088d2:
        if (uVar9 + 1 != lVar8) {
          puVar4 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar9 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00108a97;
          puVar5 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while (puVar5[uVar6 * 2 + 1] == 0) {
        uVar6 = uVar6 + 1;
        if ((ulong)puVar5[-1] <= uVar6) goto LAB_001088d2;
      }
      LOCK();
      plVar1 = (long *)(puVar5[uVar6 * 2 + 1] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = puVar5[uVar6 * 2 + 1];
        puVar5[uVar6 * 2 + 1] = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
      uVar6 = uVar6 + 1;
      puVar5 = *(undefined8 **)this;
    }
LAB_00108ae5:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar9 + 1 == lVar8) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00108ae5;
    lVar7 = puVar5[-1];
LAB_001089c0:
    if (param_1 <= lVar7) goto LAB_0010896f;
  }
  else {
    if (lVar7 != 0) {
      puVar4 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar9 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
LAB_00108a97:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar5 = puVar4 + 2;
      *puVar4 = 1;
      *(undefined8 **)this = puVar5;
      lVar7 = puVar4[1];
      goto LAB_001089c0;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar7 = 0;
  }
  puVar4 = puVar5 + lVar7 * 2;
  do {
    *(undefined4 *)puVar4 = 0;
    puVar3 = puVar4 + 2;
    puVar4[1] = 0;
    puVar4 = puVar3;
  } while (puVar3 != puVar5 + param_1 * 2);
LAB_0010896f:
  puVar5[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned int, int, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, int> > >::insert(unsigned int const&, int
   const&, bool) */

void HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>
     ::insert(uint *param_1,int *param_2,bool param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 (*pauVar21) [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  undefined8 uVar27;
  void *__s_00;
  undefined4 *in_RCX;
  int iVar28;
  undefined7 in_register_00000011;
  uint *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  char in_R8B;
  ulong uVar35;
  uint uVar36;
  undefined1 (*pauVar37) [16];
  
  puVar29 = (uint *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 2);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  if (__s_00 == (void *)0x0) {
    uVar30 = (ulong)uVar23;
    uVar33 = uVar30 * 4;
    uVar35 = uVar30 * 8;
    uVar27 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(param_2 + 4) = uVar27;
    __s_00 = (void *)Memory::alloc_static(uVar35,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)((long)__s_00 + uVar35)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar30 != uVar33);
        goto LAB_00108b36;
      }
      memset(__s,0,uVar33);
      memset(__s_00,0,uVar35);
      iVar28 = param_2[0xb];
      uVar24 = *puVar29;
      goto LAB_00108b41;
    }
    iVar28 = param_2[0xb];
    uVar24 = *puVar29;
    if (__s_00 != (void *)0x0) goto LAB_00108b41;
  }
  else {
LAB_00108b36:
    iVar28 = param_2[0xb];
    uVar24 = *puVar29;
LAB_00108b41:
    if (iVar28 != 0) {
      uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4));
      uVar33 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
      uVar22 = (uVar24 >> 0x10 ^ uVar24) * -0x7a143595;
      uVar22 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
      uVar34 = uVar22 ^ uVar22 >> 0x10;
      if (uVar22 == uVar22 >> 0x10) {
        uVar34 = 1;
        uVar30 = uVar33;
      }
      else {
        uVar30 = uVar34 * uVar33;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar30;
      lVar31 = SUB168(auVar5 * auVar13,8);
      uVar22 = *(uint *)(*(long *)(param_2 + 4) + lVar31 * 4);
      uVar25 = SUB164(auVar5 * auVar13,8);
      if (uVar22 != 0) {
        uVar36 = 0;
        do {
          if ((uVar34 == uVar22) &&
             (*(uint *)(*(long *)((long)__s_00 + lVar31 * 8) + 0x10) == uVar24)) {
            pauVar26 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar25 * 8);
            *(undefined4 *)(pauVar26[1] + 4) = *in_RCX;
            goto LAB_00108dc8;
          }
          uVar36 = uVar36 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar25 + 1) * uVar33;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar35;
          lVar31 = SUB168(auVar6 * auVar14,8);
          uVar22 = *(uint *)(*(long *)(param_2 + 4) + lVar31 * 4);
          uVar25 = SUB164(auVar6 * auVar14,8);
        } while ((uVar22 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar22 * uVar33, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar35, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4) +
                                uVar25) - SUB164(auVar7 * auVar15,8)) * uVar33, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar35, uVar36 <= SUB164(auVar8 * auVar16,8)));
      }
    }
  }
  if ((float)uVar23 * __LC38 < (float)(iVar28 + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar26 = (undefined1 (*) [16])0x0;
      goto LAB_00108dc8;
    }
    _resize_and_rehash((HashMap<unsigned_int,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,int>>>
                        *)param_2,param_2[10] + 1);
  }
  uVar23 = *puVar29;
  uVar1 = *in_RCX;
  pauVar26 = (undefined1 (*) [16])operator_new(0x18,"");
  *(uint *)pauVar26[1] = uVar23;
  *(undefined4 *)(pauVar26[1] + 4) = uVar1;
  *pauVar26 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 6) = pauVar26;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar26;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar26;
    *(undefined8 **)(*pauVar26 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar26;
  }
  else {
    lVar31 = *(long *)(param_2 + 6);
    *(undefined1 (**) [16])(lVar31 + 8) = pauVar26;
    *(long *)*pauVar26 = lVar31;
    *(undefined1 (**) [16])(param_2 + 6) = pauVar26;
  }
  uVar23 = (*puVar29 >> 0x10 ^ *puVar29) * -0x7a143595;
  uVar24 = (uVar23 ^ uVar23 >> 0xd) * -0x3d4d51cb;
  uVar23 = uVar24 ^ uVar24 >> 0x10;
  if (uVar24 == uVar24 >> 0x10) {
    uVar33 = 1;
    uVar23 = 1;
  }
  else {
    uVar33 = (ulong)uVar23;
  }
  lVar31 = *(long *)(param_2 + 4);
  uVar34 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
  uVar24 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  uVar35 = CONCAT44(0,uVar24);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar33 * lVar3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar35;
  lVar32 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 2);
  puVar29 = (uint *)(lVar31 + lVar32 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar22 = *puVar29;
  pauVar21 = pauVar26;
  while (uVar22 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar22 * lVar3;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar35;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar24 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar3;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar35;
    uVar25 = SUB164(auVar11 * auVar19,8);
    pauVar37 = pauVar21;
    if (uVar25 < uVar34) {
      *puVar29 = uVar23;
      puVar2 = (undefined8 *)(lVar4 + lVar32 * 8);
      pauVar37 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar21;
      uVar23 = uVar22;
      uVar34 = uVar25;
    }
    uVar34 = uVar34 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar3;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    lVar32 = SUB168(auVar12 * auVar20,8);
    puVar29 = (uint *)(lVar31 + lVar32 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    pauVar21 = pauVar37;
    uVar22 = *puVar29;
  }
  *(undefined1 (**) [16])(lVar4 + lVar32 * 8) = pauVar21;
  *puVar29 = uVar23;
  param_2[0xb] = param_2[0xb] + 1;
LAB_00108dc8:
  *(undefined1 (**) [16])param_1 = pauVar26;
  return;
}



/* OptimizedTranslation::_setv(StringName const&, Variant const&) */

void OptimizedTranslation::_setv(StringName *param_1,Variant *param_2)

{
  _set(param_1,param_2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001090a8) */
/* WARNING: Removing unreachable block (ram,0x001091d8) */
/* WARNING: Removing unreachable block (ram,0x001093a0) */
/* WARNING: Removing unreachable block (ram,0x001091e4) */
/* WARNING: Removing unreachable block (ram,0x001091ee) */
/* WARNING: Removing unreachable block (ram,0x00109380) */
/* WARNING: Removing unreachable block (ram,0x001091fa) */
/* WARNING: Removing unreachable block (ram,0x00109204) */
/* WARNING: Removing unreachable block (ram,0x00109360) */
/* WARNING: Removing unreachable block (ram,0x00109210) */
/* WARNING: Removing unreachable block (ram,0x0010921a) */
/* WARNING: Removing unreachable block (ram,0x00109340) */
/* WARNING: Removing unreachable block (ram,0x00109226) */
/* WARNING: Removing unreachable block (ram,0x00109230) */
/* WARNING: Removing unreachable block (ram,0x00109320) */
/* WARNING: Removing unreachable block (ram,0x0010923c) */
/* WARNING: Removing unreachable block (ram,0x00109246) */
/* WARNING: Removing unreachable block (ram,0x00109300) */
/* WARNING: Removing unreachable block (ram,0x00109252) */
/* WARNING: Removing unreachable block (ram,0x0010925c) */
/* WARNING: Removing unreachable block (ram,0x001092e0) */
/* WARNING: Removing unreachable block (ram,0x00109264) */
/* WARNING: Removing unreachable block (ram,0x0010927a) */
/* WARNING: Removing unreachable block (ram,0x00109286) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<Translation> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Translation>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x1093c8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pOVar3 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar5 = local_58 + -0x10;
        *(long *)pOVar5 = *(long *)pOVar5 + -1;
        UNLOCK();
        if (*(long *)pOVar5 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
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
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001095a8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_58;
  if (pOVar5 != local_58) {
    if (pOVar5 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00109566:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Translation::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_58 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00109566;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2));
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_001095a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Translation> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Translation>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  Object *pOVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x1093c8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pOVar3 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_48 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001098bc;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00109898:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00109898;
  }
  (*pcVar6)((long *)((long)param_2 + lVar2));
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_001098bc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Translation> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Translation>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x1093c8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC68,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pOVar5 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar8 = local_48 + -0x10;
        *(long *)pOVar8 = *(long *)pOVar8 + -1;
        UNLOCK();
        if (*(long *)pOVar8 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar11 = (long *)(local_50 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109ce0;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00109cd5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00109ce0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00109d30;
LAB_00109d20:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00109d30:
      uVar7 = 4;
      goto LAB_00109cd5;
    }
    if (in_R8D == 1) goto LAB_00109d20;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC69;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_00109e4d:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Translation::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00109e4d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00109ce0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OptimizedTranslation::~OptimizedTranslation() */

void __thiscall OptimizedTranslation::~OptimizedTranslation(OptimizedTranslation *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Translation> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Translation>const&>::~MethodBindT(MethodBindT<Ref<Translation>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.