
/* StringBuilder::append(char const*) */

StringBuilder * __thiscall StringBuilder::append(StringBuilder *this,char *param_1)

{
  uint uVar1;
  code *pcVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  sVar3 = strlen(param_1);
  uVar1 = *(uint *)(this + 0x18);
  pvVar4 = *(void **)(this + 0x20);
  if (uVar1 == *(uint *)(this + 0x1c)) {
    uVar5 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar5 = 1;
    }
    *(int *)(this + 0x1c) = (int)uVar5;
    pvVar4 = (void *)Memory::realloc_static(pvVar4,uVar5 * 8,false);
    *(void **)(this + 0x20) = pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_001000b0;
    uVar1 = *(uint *)(this + 0x18);
  }
  *(uint *)(this + 0x18) = uVar1 + 1;
  *(char **)((long)pvVar4 + (ulong)uVar1 * 8) = param_1;
  uVar1 = *(uint *)(this + 0x28);
  pvVar4 = *(void **)(this + 0x30);
  if (uVar1 == *(uint *)(this + 0x2c)) {
    uVar5 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar5 = 1;
    }
    *(int *)(this + 0x2c) = (int)uVar5;
    pvVar4 = (void *)Memory::realloc_static(pvVar4,uVar5 * 4,false);
    *(void **)(this + 0x30) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_001000b0:
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(uint *)(this + 0x28);
  }
  *(uint *)(this + 0x28) = uVar1 + 1;
  *(int *)((long)pvVar4 + (ulong)uVar1 * 4) = (int)sVar3;
  *(int *)this = *(int *)this + (int)sVar3;
  return this;
}



/* StringBuilder::append(String const&) */

StringBuilder * __thiscall StringBuilder::append(StringBuilder *this,String *param_1)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
    local_28 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_28,(CowData *)param_1);
    uVar2 = *(uint *)(this + 8);
    if (uVar2 == *(uint *)(this + 0xc)) {
      uVar8 = (ulong)(uVar2 * 2);
      if (uVar2 * 2 == 0) {
        uVar8 = 1;
      }
      *(int *)(this + 0xc) = (int)uVar8;
      lVar6 = Memory::realloc_static(*(void **)(this + 0x10),uVar8 * 8,false);
      *(long *)(this + 0x10) = lVar6;
      if (lVar6 == 0) goto LAB_00100251;
      uVar2 = *(uint *)(this + 8);
    }
    else {
      lVar6 = *(long *)(this + 0x10);
    }
    this_00 = (CowData<char32_t> *)(lVar6 + (ulong)uVar2 * 8);
    *(uint *)(this + 8) = uVar2 + 1;
    *(undefined8 *)this_00 = 0;
    CowData<char32_t>::_ref(this_00,(CowData *)&local_28);
    if (local_28 != 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_28 + -0x10),false);
      }
    }
    uVar2 = *(uint *)(this + 0x28);
    pvVar5 = *(void **)(this + 0x30);
    if (uVar2 == *(uint *)(this + 0x2c)) {
      uVar8 = (ulong)(uVar2 * 2);
      if (uVar2 * 2 == 0) {
        uVar8 = 1;
      }
      *(int *)(this + 0x2c) = (int)uVar8;
      pvVar5 = (void *)Memory::realloc_static(pvVar5,uVar8 * 4,false);
      *(void **)(this + 0x30) = pvVar5;
      if (pvVar5 == (void *)0x0) {
LAB_00100251:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar2 = *(uint *)(this + 0x28);
    }
    *(uint *)(this + 0x28) = uVar2 + 1;
    lVar6 = *(long *)param_1;
    *(undefined4 *)((long)pvVar5 + (ulong)uVar2 * 4) = 0xffffffff;
    if (lVar6 == 0) {
      *(undefined4 *)this = *(undefined4 *)this;
    }
    else {
      iVar7 = (int)*(undefined8 *)(lVar6 + -8);
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      *(int *)this = *(int *)this + iVar4;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StringBuilder::as_string() const */

StrRange * StringBuilder::as_string(void)

{
  ulong *__dest;
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *__src;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int *in_RSI;
  StrRange *in_RDI;
  ulong uVar14;
  size_t sVar15;
  int iVar16;
  uint uVar17;
  long in_FS_OFFSET;
  ulong *local_68;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
    goto LAB_001002e1;
  }
  uVar8 = *in_RSI + 1;
  if ((int)uVar8 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_0010053a:
    local_68 = (ulong *)0x0;
  }
  else {
    if (uVar8 == 0) goto LAB_0010053a;
    uVar14 = (ulong)uVar8 * 4 - 1;
    uVar14 = uVar14 | uVar14 >> 1;
    uVar14 = uVar14 | uVar14 >> 2;
    uVar14 = uVar14 | uVar14 >> 4;
    uVar14 = uVar14 | uVar14 >> 8;
    uVar14 = uVar14 | uVar14 >> 0x10;
    puVar10 = (ulong *)Memory::alloc_static((uVar14 | uVar14 >> 0x20) + 0x11,false);
    if (puVar10 == (ulong *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      goto LAB_0010053a;
    }
    local_68 = puVar10 + 2;
    *puVar10 = 1;
    puVar10[1] = (ulong)uVar8;
    if (1 < *puVar10) {
      uVar5 = puVar10[1];
      uVar14 = 0x10;
      sVar15 = uVar5 * 4;
      if (sVar15 != 0) {
        uVar14 = sVar15 - 1 | sVar15 - 1 >> 1;
        uVar14 = uVar14 | uVar14 >> 2;
        uVar14 = uVar14 | uVar14 >> 4;
        uVar14 = uVar14 | uVar14 >> 8;
        uVar14 = uVar14 | uVar14 >> 0x10;
        uVar14 = (uVar14 | uVar14 >> 0x20) + 0x11;
      }
      puVar12 = (undefined8 *)Memory::alloc_static(uVar14,false);
      if (puVar12 == (undefined8 *)0x0) {
        _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        __dest = puVar12 + 2;
        *puVar12 = 1;
        puVar12[1] = uVar5;
        memcpy(__dest,local_68,sVar15);
        LOCK();
        *puVar10 = *puVar10 - 1;
        UNLOCK();
        local_68 = __dest;
        if (*puVar10 == 0) {
          Memory::free_static(puVar10,false);
        }
      }
    }
  }
  puVar10 = local_68;
  if (in_RSI[10] != 0) {
    lVar13 = 0;
    uVar8 = 0;
    uVar17 = 0;
    iVar16 = 0;
    do {
      while (iVar9 = *(int *)(*(long *)(in_RSI + 0xc) + lVar13 * 4), iVar9 == -1) {
        uVar2 = in_RSI[2];
        uVar7 = uVar17;
        if (uVar2 <= uVar17) {
LAB_001004bb:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar7,(ulong)uVar2,
                     "p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        plVar1 = (long *)(*(long *)(in_RSI + 4) + (ulong)uVar17 * 8);
        __src = (void *)*plVar1;
        if (__src == (void *)0x0) {
          sVar15 = 0;
        }
        else {
          sVar15 = 0;
          iVar9 = (int)*(undefined8 *)((long)__src + -8);
          if (iVar9 != 0) {
            sVar15 = (long)(iVar9 + -1) * 4;
          }
        }
        memcpy((undefined4 *)((long)local_68 + (long)iVar16 * 4),__src,sVar15);
        lVar4 = *plVar1;
        if ((lVar4 != 0) && (iVar9 = (int)*(undefined8 *)(lVar4 + -8), iVar9 != 0)) {
          iVar16 = iVar16 + -1 + iVar9;
        }
        uVar17 = uVar17 + 1;
        lVar13 = lVar13 + 1;
        if ((uint)in_RSI[10] <= (uint)lVar13) goto LAB_00100490;
      }
      uVar2 = in_RSI[6];
      uVar7 = uVar8;
      if (uVar2 <= uVar8) goto LAB_001004bb;
      lVar4 = *(long *)(*(long *)(in_RSI + 8) + (ulong)uVar8 * 8);
      if (0 < iVar9) {
        lVar11 = 0;
        do {
          *(int *)((long)local_68 + lVar11 * 4 + (long)iVar16 * 4) = (int)*(char *)(lVar4 + lVar11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != iVar9);
      }
      iVar16 = iVar16 + iVar9;
      uVar8 = uVar8 + 1;
      lVar13 = lVar13 + 1;
    } while ((uint)lVar13 < (uint)in_RSI[10]);
LAB_00100490:
    puVar10 = (ulong *)((long)local_68 + (long)iVar16 * 4);
  }
  *(undefined4 *)puVar10 = 0;
  *(ulong **)in_RDI = local_68;
LAB_001002e1:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)param_1;
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)param_1;
    }
    else {
      *(undefined8 *)this = 0;
      lVar2 = *(long *)param_1;
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<char32_t>::_realloc(long) */

undefined8 __thiscall CowData<char32_t>::_realloc(CowData<char32_t> *this,long param_1)

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


