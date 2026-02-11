
/* Expression::has_execute_failed() const */

Expression __thiscall Expression::has_execute_failed(Expression *this)

{
  return this[0x1e0];
}



/* CowData<Expression::ENode*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Expression::ENode*>::_copy_on_write(CowData<Expression::ENode*> *this)

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
  __n = lVar2 * 8;
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



/* CowData<Expression::ExpressionNode>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Expression::ExpressionNode>::_copy_on_write(CowData<Expression::ExpressionNode> *this)

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
  __n = lVar2 * 0x10;
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



/* Expression::_set_error(String const&) [clone .part.0] */

void __thiscall Expression::_set_error(Expression *this,String *param_1)

{
  if (*(long *)(this + 0x1b0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)param_1);
  }
  this[0x1b8] = (Expression)0x1;
  return;
}



/* Expression::get_error_text() const */

void Expression::get_error_text(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x1b0) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x1b0));
  }
  return;
}



/* CowData<Variant const*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant_const*>::_copy_on_write(CowData<Variant_const*> *this)

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
  __n = lVar2 * 8;
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



/* WARNING: Removing unreachable block (ram,0x001010a9) */
/* WARNING: Removing unreachable block (ram,0x001013f2) */
/* WARNING: Removing unreachable block (ram,0x001013fa) */
/* WARNING: Removing unreachable block (ram,0x001010e0) */
/* WARNING: Removing unreachable block (ram,0x001013aa) */
/* WARNING: Removing unreachable block (ram,0x001013b2) */
/* WARNING: Removing unreachable block (ram,0x001010ec) */
/* WARNING: Removing unreachable block (ram,0x001010f7) */
/* WARNING: Removing unreachable block (ram,0x00101110) */
/* WARNING: Removing unreachable block (ram,0x00101116) */
/* WARNING: Removing unreachable block (ram,0x0010111f) */
/* WARNING: Removing unreachable block (ram,0x001011c2) */
/* Expression::_get_token(Expression::Token&) */

undefined8 __thiscall Expression::_get_token(Expression *this,Token *param_1)

{
  long *plVar1;
  long lVar2;
  Expression EVar3;
  wchar32 wVar4;
  code *pcVar5;
  char cVar6;
  wchar32 wVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  StrRange *pSVar13;
  wchar32 wVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  iVar9 = *(int *)(this + 0x1a4);
  uVar15 = (ulong)iVar9;
  lVar18 = *(long *)(this + 0x198);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar18 == 0) {
    if (iVar9 < 0) {
      uVar12 = 0;
      *(int *)(this + 0x1a4) = iVar9 + 1;
      goto LAB_00100529;
    }
  }
  else {
    uVar12 = *(ulong *)(lVar18 + -8);
    uVar16 = uVar15;
    while( true ) {
      iVar8 = (int)uVar15;
      if ((int)uVar12 == 0) break;
      iVar20 = (int)uVar12 + -1;
      if (iVar20 <= (int)uVar16) goto switchD_001004f2_caseD_0;
      iVar19 = iVar9 + 1;
      *(int *)(this + 0x1a4) = iVar19;
      if (uVar12 == uVar16) goto switchD_001004f2_caseD_0;
      uVar15 = uVar16;
      if ((long)uVar12 <= (long)uVar16 || (long)uVar16 < 0) goto LAB_00100529;
      wVar4 = *(wchar32 *)(lVar18 + uVar16 * 4);
      switch(wVar4) {
      case L'\0':
        goto switchD_001004f2_caseD_0;
      case L'!':
        uVar15 = (ulong)iVar19;
        if (uVar12 != uVar15) {
          if ((long)uVar12 <= (long)uVar15) goto LAB_00100529;
          if (*(int *)(lVar18 + uVar15 * 4) == 0x3d) {
            *(undefined4 *)param_1 = 0x10;
            *(int *)(this + 0x1a4) = iVar8 + 2;
            goto LAB_00100557;
          }
        }
        *(undefined4 *)param_1 = 0x17;
        goto LAB_00100557;
      case L'\"':
      case L'\'':
        local_78 = 0;
        uVar12 = *(ulong *)(lVar18 + -8);
        wVar7 = L'\0';
        goto LAB_001005d4;
      case L'$':
        *(undefined4 *)param_1 = 0x24;
        uVar16 = (ulong)iVar19;
        uVar11 = (ulong)(iVar9 + 2);
        iVar9 = 0;
        goto LAB_001007e6;
      case L'%':
        *(undefined4 *)param_1 = 0x1c;
        goto LAB_00100557;
      case L'&':
        uVar15 = (ulong)iVar19;
        if (uVar12 != uVar15) {
          if ((long)uVar12 <= (long)uVar15) goto LAB_00100529;
          if (*(int *)(lVar18 + uVar15 * 4) == 0x26) {
            *(undefined4 *)param_1 = 0x15;
            *(int *)(this + 0x1a4) = iVar8 + 2;
            goto LAB_00100557;
          }
        }
        *(undefined4 *)param_1 = 0x20;
        goto LAB_00100557;
      case L'(':
        *(undefined4 *)param_1 = 4;
        goto LAB_00100557;
      case L')':
        *(undefined4 *)param_1 = 5;
        goto LAB_00100557;
      case L'*':
        uVar15 = (ulong)iVar19;
        if (uVar12 != uVar15) {
          if ((long)uVar12 <= (long)uVar15) goto LAB_00100529;
          if (*(int *)(lVar18 + uVar15 * 4) == 0x2a) {
            *(undefined4 *)param_1 = 0x1d;
            *(int *)(this + 0x1a4) = iVar8 + 2;
            goto LAB_00100557;
          }
        }
        *(undefined4 *)param_1 = 0x1a;
        goto LAB_00100557;
      case L'+':
        *(undefined4 *)param_1 = 0x18;
        goto LAB_00100557;
      case L',':
        *(undefined4 *)param_1 = 0xc;
        goto LAB_00100557;
      case L'-':
        *(undefined4 *)param_1 = 0x19;
        goto LAB_00100557;
      case L'/':
        *(undefined4 *)param_1 = 0x1b;
        goto LAB_00100557;
      case L':':
        *(undefined4 *)param_1 = 0xb;
        goto LAB_00100557;
      case L'<':
        uVar15 = (ulong)iVar19;
        if (uVar12 != uVar15) {
          if ((long)uVar12 <= (long)uVar15) goto LAB_00100529;
          iVar9 = *(int *)(lVar18 + uVar15 * 4);
          if (iVar9 == 0x3d) {
            *(undefined4 *)param_1 = 0x12;
            *(int *)(this + 0x1a4) = iVar8 + 2;
            goto LAB_00100557;
          }
          if (iVar9 == 0x3c) {
            *(undefined4 *)param_1 = 0x1e;
            *(int *)(this + 0x1a4) = iVar8 + 2;
            goto LAB_00100557;
          }
        }
        *(undefined4 *)param_1 = 0x11;
        goto LAB_00100557;
      case L'=':
        if (iVar19 < iVar20) {
          uVar15 = (ulong)iVar19;
          *(int *)(this + 0x1a4) = iVar8 + 2;
          if (uVar12 != uVar15) {
            if ((long)uVar12 <= (long)uVar15) goto LAB_00100529;
            if (*(int *)(lVar18 + uVar15 * 4) == 0x3d) {
              *(undefined4 *)param_1 = 0xf;
              goto LAB_00100557;
            }
          }
        }
        pSVar13 = (StrRange *)&local_70;
        local_70 = 0;
        local_68 = "Expected \'=\'";
        local_60 = 0xc;
        String::parse_latin1(pSVar13);
        if (this[0x1b8] == (Expression)0x0) {
          if (*(long *)(this + 0x1b0) != local_70) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)pSVar13);
          }
          this[0x1b8] = (Expression)0x1;
        }
        goto LAB_00100a66;
      case L'>':
        uVar15 = (ulong)iVar19;
        if (uVar12 != uVar15) {
          if ((long)uVar12 <= (long)uVar15) goto LAB_00100529;
          iVar9 = *(int *)(lVar18 + uVar15 * 4);
          if (iVar9 == 0x3d) {
            *(undefined4 *)param_1 = 0x14;
            *(int *)(this + 0x1a4) = iVar8 + 2;
            goto LAB_00100557;
          }
          if (iVar9 == 0x3e) {
            *(undefined4 *)param_1 = 0x1f;
            *(int *)(this + 0x1a4) = iVar8 + 2;
            goto LAB_00100557;
          }
        }
        *(undefined4 *)param_1 = 0x13;
        goto LAB_00100557;
      case L'[':
        *(undefined4 *)param_1 = 2;
        goto LAB_00100557;
      case L']':
        *(undefined4 *)param_1 = 3;
        goto LAB_00100557;
      case L'^':
        *(undefined4 *)param_1 = 0x22;
        goto LAB_00100557;
      case L'{':
        *(undefined4 *)param_1 = 0;
        goto LAB_00100557;
      case L'|':
        uVar15 = (ulong)iVar19;
        if (uVar12 != uVar15) {
          if ((long)uVar12 <= (long)uVar15) goto LAB_00100529;
          if (*(int *)(lVar18 + uVar15 * 4) == 0x7c) {
            *(undefined4 *)param_1 = 0x16;
            *(int *)(this + 0x1a4) = iVar8 + 2;
            goto LAB_00100557;
          }
        }
        *(undefined4 *)param_1 = 0x21;
        goto LAB_00100557;
      case L'}':
        *(undefined4 *)param_1 = 1;
        goto LAB_00100557;
      case L'~':
        *(undefined4 *)param_1 = 0x23;
        goto LAB_00100557;
      }
      uVar16 = uVar16 + 1;
      if (0x20 < (uint)wVar4) {
        if ((iVar19 < iVar20) && (uVar15 = (ulong)iVar19, uVar12 != uVar15)) {
          if ((long)uVar12 <= (long)uVar15) goto LAB_00100529;
          iVar9 = *(int *)(lVar18 + uVar15 * 4);
        }
        else {
          iVar9 = 0;
        }
        if (((uint)(wVar4 + L'\xffffffd0') < 10) || ((wVar4 == L'.' && (iVar9 - 0x30U < 10)))) {
          local_70 = 0;
                    /* WARNING: Could not recover jumptable at 0x00100f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar10 = (*(code *)((long)&switchD_00100f26::switchdataD_0010b560 +
                             (long)(int)UINT_0010b564))();
          return uVar10;
        }
        iVar20 = 0x2ac;
        iVar9 = 0;
        iVar8 = 0x156;
        goto LAB_00100ea4;
      }
      iVar9 = (int)uVar16;
      uVar15 = uVar16 & 0xffffffff;
    }
    if (iVar8 < 0) {
      *(int *)(this + 0x1a4) = iVar8 + 1;
      uVar15 = (long)iVar8;
LAB_00100529:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar15,uVar12,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
switchD_001004f2_caseD_0:
  *(undefined4 *)param_1 = 0x25;
  goto LAB_00100557;
  while( true ) {
    uVar15 = uVar11;
    if ((long)uVar12 <= (long)uVar11) goto LAB_00100529;
    lVar2 = uVar11 * 4;
    uVar16 = uVar16 + 1;
    uVar11 = uVar11 + 1;
    if (9 < *(int *)(lVar18 + lVar2) - 0x30U) break;
LAB_001007e6:
    if (uVar11 == uVar12 + 1) {
LAB_00100cd2:
      pSVar13 = (StrRange *)&local_70;
      local_70 = 0;
      local_68 = "Expected number after \'$\'";
      local_60 = 0x19;
      String::parse_latin1(pSVar13);
      EVar3 = this[0x1b8];
      goto joined_r0x00100d09;
    }
    uVar15 = uVar16;
    if (((long)uVar12 <= (long)uVar16) || ((long)uVar16 < 0)) goto LAB_00100529;
    uVar17 = *(int *)(lVar18 + uVar16 * 4) - 0x30;
    if (9 < uVar17) goto LAB_00100cd2;
    *(int *)(this + 0x1a4) = (int)uVar11;
    iVar9 = uVar17 + iVar9 * 10;
    if (uVar11 == uVar12) break;
  }
  Variant::Variant((Variant *)&local_58,iVar9);
  Variant::operator=((Variant *)(param_1 + 8),(Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  goto LAB_00100557;
LAB_001005d4:
  if ((int)uVar12 != 0) {
LAB_001005dc:
    iVar9 = (int)uVar12 + -1;
    if (iVar9 <= iVar19) goto LAB_00100958;
    iVar8 = iVar19 + 1;
    uVar16 = (ulong)iVar19;
    *(int *)(this + 0x1a4) = iVar8;
    if (uVar12 == uVar16) goto LAB_00100958;
    uVar15 = uVar16;
    if (((long)uVar16 < 0) || ((long)uVar12 <= (long)uVar16)) goto LAB_00100529;
    wVar14 = *(wchar32 *)(lVar18 + uVar16 * 4);
    if (wVar14 == L'\0') goto LAB_00100958;
    if (wVar4 == wVar14) {
      if (wVar7 != L'\0') goto LAB_00100d6c;
      *(undefined4 *)param_1 = 9;
      Variant::Variant((Variant *)&local_58,(String *)&local_78);
      Variant::operator=((Variant *)(param_1 + 8),(Variant *)&local_58);
      uVar10 = 0;
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
        uVar10 = 0;
      }
      goto LAB_001009c9;
    }
    if (wVar14 != L'\\') {
      if (wVar7 != L'\0') goto LAB_00100d6c;
      String::operator+=((String *)&local_78,wVar14);
      lVar18 = *(long *)(this + 0x198);
      goto LAB_00100649;
    }
    if (iVar9 <= iVar8) goto LAB_00100958;
    uVar15 = (ulong)iVar8;
    *(int *)(this + 0x1a4) = iVar19 + 2;
    if (uVar12 == uVar15) goto LAB_00100958;
    if ((long)uVar12 <= (long)uVar15) goto LAB_00100529;
    wVar14 = *(wchar32 *)(lVar18 + uVar15 * 4);
    if (wVar14 == L'\0') goto LAB_00100958;
    switch(wVar14) {
    case L'U':
    case L'u':
      bVar21 = wVar14 == L'U';
      uVar15 = (ulong)(iVar19 + 2);
      wVar14 = L'\0';
      do {
        if ((iVar9 <= (int)uVar15) || (*(int *)(this + 0x1a4) = (int)uVar15 + 1, uVar15 == uVar12))
        {
LAB_00100e1d:
          local_68 = (char *)0x0;
          String::parse_latin1((String *)&local_68,"Unterminated String");
          EVar3 = this[0x1b8];
joined_r0x00100e40:
          pSVar13 = (StrRange *)&local_68;
          goto joined_r0x00100e40;
        }
        if (((long)uVar15 < 0) || ((long)uVar12 <= (long)uVar15)) goto LAB_00100529;
        iVar8 = *(int *)(lVar18 + uVar15 * 4);
        if (iVar8 == 0) goto LAB_00100e1d;
        uVar17 = iVar8 - 0x30;
        if ((0x36 < uVar17) || ((0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) == 0)) {
          local_68 = (char *)0x0;
          String::parse_latin1((String *)&local_68,"Malformed hex constant in string");
          EVar3 = this[0x1b8];
          goto joined_r0x00100e40;
        }
        if ((9 < uVar17) && (uVar17 = iVar8 - 0x37, iVar8 - 0x61U < 6)) {
          uVar17 = iVar8 - 0x57;
        }
        uVar15 = uVar15 + 1;
        wVar14 = wVar14 << 4 | uVar17;
      } while (uVar15 != uVar16 + 2 + (long)(int)(bVar21 + 4 + (uint)bVar21));
    default:
      if ((wVar14 & 0xfffffc00U) != 0xd800) {
        if ((wVar14 & 0xfffffc00U) != 0xdc00) break;
        if (wVar7 != L'\0') {
          wVar14 = wVar14 + L'\xfca02400' + wVar7 * 0x400;
          goto LAB_00100c2a;
        }
        local_68 = (char *)0x0;
        String::parse_latin1
                  ((String *)&local_68,"Invalid UTF-16 sequence in string, unpaired trail surrogate"
                  );
        EVar3 = this[0x1b8];
        goto joined_r0x00100d90;
      }
      if (wVar7 == L'\0') goto code_r0x00100c0f;
      pSVar13 = (StrRange *)&local_70;
      local_70 = 0;
      local_68 = "Invalid UTF-16 sequence in string, unpaired lead surrogate";
      local_60 = 0x3a;
      String::parse_latin1(pSVar13);
      EVar3 = this[0x1b8];
joined_r0x00100e40:
      if (EVar3 == (Expression)0x0) {
LAB_00100d5c:
        _set_error(this,(String *)pSVar13);
      }
      goto LAB_001009b5;
    case L'b':
      wVar14 = L'\b';
      break;
    case L'f':
      wVar14 = L'\f';
      break;
    case L'n':
      wVar14 = L'\n';
      break;
    case L'r':
      wVar14 = L'\r';
      break;
    case L't':
      wVar14 = L'\t';
    }
    if (wVar7 != L'\0') {
LAB_00100d6c:
      local_68 = (char *)0x0;
      String::parse_latin1
                ((String *)&local_68,"Invalid UTF-16 sequence in string, unpaired lead surrogate");
      EVar3 = this[0x1b8];
joined_r0x00100d90:
      pSVar13 = (StrRange *)&local_68;
      if (EVar3 != (Expression)0x0) goto LAB_001009b5;
      goto LAB_00100d5c;
    }
LAB_00100c2a:
    String::operator+=((String *)&local_78,wVar14);
    lVar18 = *(long *)(this + 0x198);
LAB_00100649:
    iVar19 = *(int *)(this + 0x1a4);
    if (lVar18 == 0) {
      if (-1 < iVar19) goto LAB_00100958;
      uVar12 = 0;
      *(int *)(this + 0x1a4) = iVar19 + 1;
      uVar15 = (long)iVar19;
      goto LAB_00100529;
    }
    uVar12 = *(ulong *)(lVar18 + -8);
    wVar7 = L'\0';
    if ((int)uVar12 == 0) goto LAB_00100667;
    goto LAB_001005dc;
  }
  goto LAB_00100667;
code_r0x00100c0f:
  iVar19 = *(int *)(this + 0x1a4);
  wVar7 = wVar14;
  goto LAB_001005d4;
LAB_00100667:
  if (iVar19 < 0) {
    *(int *)(this + 0x1a4) = iVar19 + 1;
    uVar15 = (long)iVar19;
    goto LAB_00100529;
  }
LAB_00100958:
  pSVar13 = (StrRange *)&local_70;
  local_70 = 0;
  local_68 = "Unterminated String";
  local_60 = 0x13;
  String::parse_latin1(pSVar13);
  if (this[0x1b8] == (Expression)0x0) {
    if (*(long *)(this + 0x1b0) != local_70) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)pSVar13);
    }
    this[0x1b8] = (Expression)0x1;
  }
LAB_001009b5:
  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar13);
  *(undefined4 *)param_1 = 0x26;
  uVar10 = 0x2b;
LAB_001009c9:
  lVar18 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar18 + -0x10),false);
    }
  }
  goto LAB_00100559;
LAB_001017b0:
  iVar20 = 799;
  iVar9 = 0;
  iVar8 = 399;
  do {
    if (uVar17 < *(uint *)(xid_continue + (long)iVar8 * 8)) {
      iVar20 = iVar8 + -1;
    }
    else {
      if (uVar17 <= *(uint *)(xid_continue + (long)iVar8 * 8 + 4)) break;
      iVar9 = iVar8 + 1;
    }
    iVar8 = (iVar9 + iVar20) / 2;
    if (iVar20 < iVar9) {
      *(int *)(this + 0x1a4) = *(int *)(this + 0x1a4) + -1;
      cVar6 = String::operator==((String *)&local_70,"in");
      if (cVar6 != '\0') {
        *(undefined4 *)param_1 = 0xe;
        goto LAB_001012db;
      }
      cVar6 = String::operator==((String *)&local_70,"null");
      if (cVar6 == '\0') {
        cVar6 = String::operator==((String *)&local_70,"true");
        if (cVar6 != '\0') {
          *(undefined4 *)param_1 = 9;
          Variant::Variant((Variant *)&local_58,true);
          goto LAB_001012b9;
        }
        cVar6 = String::operator==((String *)&local_70,"false");
        if (cVar6 != '\0') {
          *(undefined4 *)param_1 = 9;
          Variant::Variant((Variant *)&local_58,false);
          goto LAB_001012b9;
        }
        cVar6 = String::operator==((String *)&local_70,"PI");
        if (cVar6 != '\0') {
          *(undefined4 *)param_1 = 9;
          Variant::Variant((Variant *)&local_58,_LC30);
          goto LAB_001012b9;
        }
        cVar6 = String::operator==((String *)&local_70,"TAU");
        if (cVar6 != '\0') {
          *(undefined4 *)param_1 = 9;
          Variant::Variant((Variant *)&local_58,_LC32);
          goto LAB_001012b9;
        }
        cVar6 = String::operator==((String *)&local_70,"INF");
        if (cVar6 != '\0') {
          *(undefined4 *)param_1 = 9;
          Variant::Variant((Variant *)&local_58,_LC34);
          goto LAB_001012b9;
        }
        cVar6 = String::operator==((String *)&local_70,"NAN");
        if (cVar6 != '\0') {
          *(undefined4 *)param_1 = 9;
          Variant::Variant((Variant *)&local_58,_LC36);
          goto LAB_001012b9;
        }
        cVar6 = String::operator==((String *)&local_70,"not");
        if (cVar6 == '\0') {
          cVar6 = String::operator==((String *)&local_70,"or");
          if (cVar6 == '\0') {
            cVar6 = String::operator==((String *)&local_70,"and");
            if (cVar6 == '\0') {
              cVar6 = String::operator==((String *)&local_70,"self");
              if (cVar6 == '\0') {
                iVar9 = Variant::get_type_by_name((String *)&local_70);
                if (iVar9 < 0x27) {
                  *(undefined4 *)param_1 = 10;
                  Variant::Variant((Variant *)&local_58,iVar9);
                }
                else {
                  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
                  cVar6 = Variant::has_utility_function((StringName *)&local_68);
                  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
                    StringName::unref();
                  }
                  if (cVar6 == '\0') {
                    *(undefined4 *)param_1 = 6;
                  }
                  else {
                    *(undefined4 *)param_1 = 7;
                  }
                  Variant::Variant((Variant *)&local_58,(String *)&local_70);
                }
                goto LAB_001012b9;
              }
              *(undefined4 *)param_1 = 8;
            }
            else {
              *(undefined4 *)param_1 = 0x15;
            }
          }
          else {
            *(undefined4 *)param_1 = 0x16;
          }
        }
        else {
          *(undefined4 *)param_1 = 0x17;
        }
      }
      else {
        *(undefined4 *)param_1 = 9;
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
LAB_001012b9:
        Variant::operator=((Variant *)(param_1 + 8),(Variant *)&local_58);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
      }
LAB_001012db:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      goto LAB_00100557;
    }
  } while( true );
  String::chr((wchar32)(CowData<char32_t> *)&local_68);
  String::operator+=((String *)&local_70,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  lVar18 = *(long *)(this + 0x198);
  iVar9 = *(int *)(this + 0x1a4);
  if (lVar18 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (int)*(undefined8 *)(lVar18 + -8);
    iVar8 = iVar8 + -1 + (uint)(iVar8 == 0);
  }
  uVar17 = 0;
  if (iVar9 < iVar8) {
    uVar15 = (ulong)iVar9;
    *(int *)(this + 0x1a4) = iVar9 + 1;
    if (lVar18 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(ulong *)(lVar18 + -8);
    }
    if (uVar15 == uVar12) {
      uVar17 = 0;
    }
    else {
      if ((iVar9 < 0) || ((long)uVar12 <= (long)uVar15)) goto LAB_00100529;
      uVar17 = *(uint *)(lVar18 + uVar15 * 4);
    }
  }
  goto LAB_001017b0;
  while (iVar8 = (iVar9 + iVar20) / 2, iVar9 <= iVar20) {
LAB_00100ea4:
    if ((uint)wVar4 < (uint)*(wchar32 *)(xid_start + (long)iVar8 * 8)) {
      iVar20 = iVar8 + -1;
    }
    else {
      if ((uint)wVar4 <= (uint)*(wchar32 *)(xid_start + (long)iVar8 * 8 + 4)) {
        String::chr((wchar32)(CowData<char32_t> *)&local_70);
        lVar18 = *(long *)(this + 0x198);
        iVar9 = *(int *)(this + 0x1a4);
        if (lVar18 == 0) {
          if (-1 < iVar9) goto LAB_00101dfd;
          uVar12 = 0;
          *(int *)(this + 0x1a4) = iVar9 + 1;
        }
        else {
          uVar12 = *(ulong *)(lVar18 + -8);
          if (((int)((int)uVar12 + -1 + (uint)((int)uVar12 == 0)) <= iVar9) ||
             (*(int *)(this + 0x1a4) = iVar9 + 1, uVar12 == (long)iVar9)) {
LAB_00101dfd:
            uVar17 = 0;
            goto LAB_001017b0;
          }
        }
        uVar15 = (ulong)iVar9;
        if (((long)uVar12 <= (long)uVar15) || ((long)uVar15 < 0)) goto LAB_00100529;
        uVar17 = *(uint *)(lVar18 + uVar15 * 4);
        goto LAB_001017b0;
      }
      iVar9 = iVar8 + 1;
    }
  }
  if (wVar4 != L'.') {
    pSVar13 = (StrRange *)&local_68;
    local_68 = (char *)0x0;
    String::parse_latin1((String *)pSVar13,"Unexpected character.");
    EVar3 = this[0x1b8];
joined_r0x00100d09:
    if (EVar3 == (Expression)0x0) {
      _set_error(this,(String *)pSVar13);
    }
LAB_00100a66:
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar13);
    *(undefined4 *)param_1 = 0x26;
    uVar10 = 0x2b;
    goto LAB_00100559;
  }
  *(undefined4 *)param_1 = 0xd;
LAB_00100557:
  uVar10 = 0;
LAB_00100559:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  Variant *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Variant *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (Variant *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pVVar5 = (Variant *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x18;
      Variant::Variant(this_00,pVVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* Expression::~Expression() */

void __thiscall Expression::~Expression(Expression *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = *(undefined8 **)(this + 0x1c8);
  *(undefined ***)this = &PTR__initialize_classv_001102a8;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
  }
  CowData<String>::_unref((CowData<String> *)(this + 0x1d8));
  if (*(long *)(this + 0x1b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x1b0);
      *(undefined8 *)(this + 0x1b0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x188);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar4 = *(long *)(lVar3 + -8);
      *(undefined8 *)(this + 0x188) = 0;
      if (lVar4 != 0) {
        lVar8 = 0;
        lVar7 = lVar3;
        do {
          if (*(long *)(lVar7 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar5 = *(long *)(lVar7 + 8);
              *(undefined8 *)(lVar7 + 8) = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x10;
        } while (lVar4 != lVar8);
      }
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010ffc8;
  Object::~Object((Object *)this);
  return;
}



/* Expression::~Expression() */

void __thiscall Expression::~Expression(Expression *this)

{
  ~Expression(this);
  operator_delete(this,0x1e8);
  return;
}



/* Expression::_bind_methods() */

void Expression::_bind_methods(void)

{
  Variant *pVVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  MethodBind *pMVar6;
  long *plVar7;
  uint uVar8;
  Variant *pVVar9;
  long lVar10;
  long in_FS_OFFSET;
  Array local_168 [8];
  undefined8 local_160;
  long local_158 [2];
  long *local_148;
  Variant *local_138;
  undefined1 auStack_130 [16];
  char *local_118;
  char *pcStack_110;
  char *local_108;
  char *pcStack_100;
  undefined8 local_f8;
  Variant *local_e8;
  Variant *pVStack_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  undefined1 local_c8 [16];
  int local_b8 [2];
  undefined1 local_b0 [16];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = 0;
  pVStack_e0 = (Variant *)auStack_130;
  local_138 = (Variant *)0x1079e3;
  auStack_130 = ZEXT816(0x1079ee);
  uVar8 = (uint)(Variant *)&local_e8;
  local_e8 = (Variant *)&local_138;
  D_METHODP((char *)local_158,(char ***)"parse",uVar8);
  Variant::Variant((Variant *)&local_e8,(Vector *)local_168);
  local_c8 = (undefined1  [16])0x0;
  pVStack_d0 = (Variant *)0x0;
  local_138 = (Variant *)&local_e8;
  pMVar6 = create_method_bind<Expression,Error,String_const&,Vector<String>const&>(parse);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_158,&local_138,1);
  if (Variant::needs_deinit[(int)pVStack_d0] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_e8];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_e8];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar7 = local_148 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_148[-1];
      local_148 = (long *)0x0;
      if (lVar3 != 0) {
        lVar10 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar3 != lVar10);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158[0] != 0)) {
    StringName::unref();
  }
  CowData<String>::_unref((CowData<String> *)&local_160);
  local_138 = (Variant *)0x0;
  auStack_130 = (undefined1  [16])0x0;
  Array::Array(local_168);
  local_118 = "inputs";
  pcStack_110 = "base_instance";
  local_108 = "show_error";
  pcStack_100 = "const_calls_only";
  local_f8 = 0;
  local_e8 = (Variant *)&local_118;
  pVStack_e0 = (Variant *)&pcStack_110;
  local_d8 = (Variant *)&local_108;
  pVStack_d0 = (Variant *)&pcStack_100;
  D_METHODP((char *)local_158,(char ***)"execute",uVar8);
  Variant::Variant((Variant *)local_b8,local_168);
  Variant::Variant(local_a0,(Variant *)&local_138);
  Variant::Variant(local_88,true);
  Variant::Variant(local_70,false);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_e8 = (Variant *)local_b8;
  pVStack_e0 = local_a0;
  local_d8 = local_88;
  pVStack_d0 = local_70;
  pMVar6 = create_method_bind<Expression,Variant,Array_const&,Object*,bool,bool>(execute);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_158,&local_e8,4);
  pVVar9 = (Variant *)local_40;
  do {
    pVVar1 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar5 = local_148;
  } while (pVVar9 != (Variant *)local_b8);
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar7 = local_148 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_148[-1];
      local_148 = (long *)0x0;
      if (lVar3 != 0) {
        lVar10 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar3 != lVar10);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158[0] != 0)) {
    StringName::unref();
  }
  Array::~Array(local_168);
  if (Variant::needs_deinit[(int)local_138] != '\0') {
    Variant::_clear_internal();
  }
  D_METHODP((char *)local_158,(char ***)"has_execute_failed",0);
  local_b0 = (undefined1  [16])0x0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  pMVar6 = create_method_bind<Expression,bool>(has_execute_failed);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar7 = local_148 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_148[-1];
      local_148 = (long *)0x0;
      if (lVar3 != 0) {
        lVar10 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar3 != lVar10);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_158,(char ***)"get_error_text",0);
  local_b0 = (undefined1  [16])0x0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  pMVar6 = create_method_bind<Expression,String>(get_error_text);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar7 = local_148 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_148[-1];
      local_148 = (long *)0x0;
      if (lVar3 != 0) {
        lVar10 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar3 != lVar10);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_158[0] != 0)) {
    StringName::unref();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Variant>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Variant>::resize<false>(CowData<Variant> *this,long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar4 = 0;
    lVar9 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar9 = lVar4 * 0x18;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 != 0) {
    uVar10 = param_1 * 0x18 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = uVar10 | uVar10 >> 0x20;
    lVar11 = uVar10 + 1;
    if (lVar11 != 0) {
      if (param_1 <= lVar4) {
        puVar5 = *(undefined8 **)this;
        uVar10 = param_1;
        while( true ) {
          if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((ulong)puVar5[-1] <= uVar10) break;
          if (Variant::needs_deinit[*(int *)(puVar5 + uVar10 * 3)] != '\0') {
            Variant::_clear_internal();
            puVar5 = *(undefined8 **)this;
          }
          uVar10 = uVar10 + 1;
        }
        if (lVar11 != lVar9) {
          iVar2 = _realloc(this,lVar11);
          if (iVar2 != 0) {
            return;
          }
          puVar5 = *(undefined8 **)this;
          if (puVar5 == (undefined8 *)0x0) {
            FUN_00107db2();
            return;
          }
        }
        goto LAB_00102a2f;
      }
      if (lVar11 == lVar9) {
LAB_00102adb:
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar4 = puVar5[-1];
        if (param_1 <= lVar4) goto LAB_00102a2f;
      }
      else {
        if (lVar4 != 0) {
          iVar2 = _realloc(this,lVar11);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00102adb;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_00102b62;
        }
        puVar5 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar5;
        lVar4 = 0;
      }
      lVar9 = lVar4 + 1;
      *(undefined4 *)(puVar5 + lVar4 * 3) = 0;
      *(undefined1 (*) [16])(puVar5 + lVar4 * 3 + 1) = (undefined1  [16])0x0;
      if (lVar9 < param_1) {
        lVar4 = lVar9 * 0x18;
        do {
          lVar9 = lVar9 + 1;
          puVar7 = (undefined4 *)(*(long *)this + lVar4);
          lVar4 = lVar4 + 0x18;
          *puVar7 = 0;
          *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
        } while (param_1 != lVar9);
      }
      puVar5 = *(undefined8 **)this;
      if (puVar5 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
LAB_00102a2f:
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00102b62:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar6,0,0);
  return;
}



/* Error CowData<Variant const*>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Variant_const*>::resize<false>(CowData<Variant_const*> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<Variant_const*> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<Variant_const*> *pCVar10;
  CowData<Variant_const*> *pCVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    pCVar4 = (CowData<Variant_const*> *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
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
    _copy_on_write(this);
    pCVar4 = (CowData<Variant_const*> *)(lVar12 * 8);
    if (pCVar4 != (CowData<Variant_const*> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<Variant_const*> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar5 = param_1 * 8 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<Variant_const*> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<Variant_const*> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00107dd4();
        return;
      }
      if (pCVar10 != pCVar4) {
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
          if (puVar6 != (undefined8 *)0x0) {
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)this = puVar8;
            goto LAB_00102cd1;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00102dc2;
        }
        pCVar11 = this;
        iVar3 = _realloc(this,(long)pCVar10);
        if (iVar3 != 0) {
          return;
        }
      }
      puVar8 = *(undefined8 **)this;
      if (puVar8 == (undefined8 *)0x0) {
        resize<false>((long)pCVar11);
        return;
      }
LAB_00102cd1:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00102dc2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* Expression::_execute(Array const&, Object*, Expression::ENode*, Variant&, bool, String&) */

undefined8 __thiscall
Expression::_execute
          (Expression *this,Array *param_1,Object *param_2,ENode *param_3,Variant *param_4,
          bool param_5,String *param_6)

{
  long *plVar1;
  Variant *pVVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  Variant *pVVar9;
  CallError *pCVar10;
  int iVar11;
  long lVar12;
  Variant **ppVVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  CowData<char32_t> *local_150;
  CowData<char32_t> *local_128;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long local_b8;
  long local_b0;
  char *local_a8;
  Variant **local_a0;
  ulong local_98;
  undefined1 local_90 [16];
  ulong local_78;
  undefined1 local_70 [16];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)(param_3 + 0x10)) {
  case 0:
    iVar11 = *(int *)(param_3 + 0x14);
    if ((-1 < iVar11) && (iVar6 = Array::size(), iVar11 < iVar6)) {
      pVVar9 = (Variant *)Array::operator[]((int)param_1);
      Variant::operator=(param_4,pVVar9);
      goto switchD_00102e6a_default;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    local_a0 = (Variant **)0x0;
    local_a8 = "";
    String::parse_latin1((StrRange *)&local_c8);
    local_a8 = "Invalid input %d (not passed) in expression";
    local_d8 = 0;
    uStack_d4 = 0;
    local_a0 = (Variant **)0x2b;
    String::parse_latin1((StrRange *)&local_d8);
    RTR((String *)&local_b8,(String *)&local_d8);
    vformat<int>((String *)&local_a8,(int)(String *)&local_b8);
    pcVar3 = *(char **)param_6;
    if (pcVar3 == local_a8) {
      if (pcVar3 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(pcVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_a8 + -0x10,false);
        }
      }
    }
    else {
      if (pcVar3 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(pcVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar7 = *(long *)param_6;
          *(undefined8 *)param_6 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      *(char **)param_6 = local_a8;
    }
    lVar7 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    if (CONCAT44(uStack_d4,local_d8) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_d4,local_d8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = CONCAT44(uStack_d4,local_d8);
        local_d8 = 0;
        uStack_d4 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    if (CONCAT44(uStack_c4,local_c8) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_c4,local_c8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = CONCAT44(uStack_c4,local_c8);
        local_c8 = 0;
        uStack_c4 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    break;
  case 1:
    Variant::operator=(param_4,(Variant *)(param_3 + 0x18));
  default:
switchD_00102e6a_default:
    uVar8 = 0;
    goto LAB_001030e2;
  case 2:
    if (param_2 != (Object *)0x0) {
      Variant::Variant((Variant *)&local_58,param_2);
      if (Variant::needs_deinit[*(int *)param_4] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_4 = (int)local_58;
      *(undefined8 *)(param_4 + 8) = local_50._0_8_;
      *(undefined8 *)(param_4 + 0x10) = local_50._8_8_;
      goto switchD_00102e6a_default;
    }
    local_b8 = 0;
    local_a0 = (Variant **)0x0;
    local_a8 = "";
    String::parse_latin1((StrRange *)&local_b8);
    local_a8 = "self can\'t be used because instance is null (not passed)";
    local_c8 = 0;
    uStack_c4 = 0;
    local_a0 = (Variant **)0x38;
    String::parse_latin1((StrRange *)&local_c8);
    RTR((String *)&local_a8,(String *)&local_c8);
    if (*(char **)param_6 != local_a8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)param_6);
      pcVar3 = local_a8;
      local_a8 = (char *)0x0;
      *(char **)param_6 = pcVar3;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    break;
  case 3:
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    cVar5 = _execute(this,param_1,param_2,*(ENode **)(param_3 + 0x18),(Variant *)&local_78,param_5,
                     param_6);
    if (cVar5 == '\0') {
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      if ((*(ENode **)(param_3 + 0x20) == (ENode *)0x0) ||
         (cVar5 = _execute(this,param_1,param_2,*(ENode **)(param_3 + 0x20),(Variant *)&local_58,
                           param_5,param_6), cVar5 == '\0')) {
        local_f8 = CONCAT71(local_f8._1_7_,1);
        Variant::evaluate((Operator *)(param_3 + 0x14),(Variant *)&local_78,(Variant *)&local_58,
                          param_4,(bool *)&local_f8);
        if (local_f8._0_1_ != (StrRange)0x0) {
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          cVar5 = Variant::needs_deinit[(int)local_78];
          goto joined_r0x001037fd;
        }
        Variant::get_type_name((CowData<char32_t> *)&local_b8,local_58 & 0xffffffff);
        Variant::get_type_name((CowData<char32_t> *)&local_c8,local_78 & 0xffffffff);
        Variant::get_operator_name((CowData<char32_t> *)&local_d8,*(undefined4 *)(param_3 + 0x14));
        local_e8 = 0;
        local_a8 = "";
        local_a0 = (Variant **)0x0;
        String::parse_latin1((StrRange *)&local_e8);
        local_a8 = "Invalid operands to operator %s, %s and %s.";
        local_f0 = 0;
        local_a0 = (Variant **)0x2b;
        String::parse_latin1((StrRange *)&local_f0);
        RTR((String *)&local_e0,(String *)&local_f0);
        vformat<String,String,String>
                  ((CowData<char32_t> *)&local_a8,(String *)&local_e0,(CowData<char32_t> *)&local_d8
                   ,(CowData<char32_t> *)&local_c8,(CowData<char32_t> *)&local_b8);
        pcVar3 = local_a8;
        if (*(char **)param_6 != local_a8) {
          CowData<char32_t>::_unref((CowData<char32_t> *)param_6);
          local_a8 = (char *)0x0;
          *(char **)param_6 = pcVar3;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
    }
    goto LAB_00103550;
  case 4:
    local_90 = (undefined1  [16])0x0;
    local_98 = 0;
    cVar5 = _execute(this,param_1,param_2,*(ENode **)(param_3 + 0x18),(Variant *)&local_98,param_5,
                     param_6);
    if (cVar5 == '\0') {
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      cVar5 = _execute(this,param_1,param_2,*(ENode **)(param_3 + 0x20),(Variant *)&local_78,param_5
                       ,param_6);
      if (cVar5 == '\0') {
        Variant::get((Variant *)&local_58,(bool *)&local_98,(VariantGetError *)&local_78);
        if (Variant::needs_deinit[*(int *)param_4] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)param_4 = (int)local_58;
        *(undefined8 *)(param_4 + 8) = local_50._0_8_;
        *(undefined8 *)(param_4 + 0x10) = local_50._8_8_;
        if (local_f0._0_1_ != (StrRange)0x0) {
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_98] != '\0') {
            Variant::_clear_internal();
          }
          goto switchD_00102e6a_default;
        }
        Variant::get_type_name((CowData<char32_t> *)&local_b8,local_98 & 0xffffffff);
        Variant::get_type_name((CowData<char32_t> *)&local_c8,local_78 & 0xffffffff);
        local_e0 = 0;
        local_a8 = "";
        local_a0 = (Variant **)0x0;
        String::parse_latin1((StrRange *)&local_e0);
        local_a8 = "Invalid index of type %s for base type %s";
        local_e8 = 0;
        local_a0 = (Variant **)0x29;
        String::parse_latin1((StrRange *)&local_e8);
        RTR((String *)&local_d8,(String *)&local_e8);
        vformat<String,String>
                  ((CowData<char32_t> *)&local_a8,(String *)&local_d8,(CowData<char32_t> *)&local_c8
                   ,(CowData<char32_t> *)&local_b8);
        pcVar3 = local_a8;
        if (*(char **)param_6 != local_a8) {
          CowData<char32_t>::_unref((CowData<char32_t> *)param_6);
          local_a8 = (char *)0x0;
          *(char **)param_6 = pcVar3;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
    break;
  case 5:
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    cVar5 = _execute(this,param_1,param_2,*(ENode **)(param_3 + 0x18),(Variant *)&local_78,param_5,
                     param_6);
    if (cVar5 == '\0') {
      Variant::get_named((StringName *)&local_58,(bool *)&local_78);
      if (Variant::needs_deinit[*(int *)param_4] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_4 = (int)local_58;
      *(undefined8 *)(param_4 + 8) = local_50._0_8_;
      *(undefined8 *)(param_4 + 0x10) = local_50._8_8_;
      if (local_f0._0_1_ != (StrRange)0x0) {
        cVar5 = Variant::needs_deinit[(int)local_78];
joined_r0x001037fd:
        if (cVar5 != '\0') {
          Variant::_clear_internal();
        }
        goto switchD_00102e6a_default;
      }
      Variant::get_type_name((CowData<char32_t> *)&local_b8);
      lVar7 = *(long *)(param_3 + 0x20);
      if (lVar7 == 0) {
LAB_00104c93:
        uStack_c4 = 0;
        local_c8 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar7 + 8);
        local_c8 = 0;
        uStack_c4 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00104c93;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar7 + 0x10));
        }
        else {
          local_a0 = (Variant **)strlen(pcVar3);
          local_a8 = pcVar3;
          String::parse_latin1((StrRange *)&local_c8);
        }
      }
      local_128 = (CowData<char32_t> *)&local_a8;
      local_a8 = "";
      local_e0 = 0;
      local_a0 = (Variant **)0x0;
      String::parse_latin1((StrRange *)&local_e0);
      local_a8 = "Invalid named index \'%s\' for base type %s";
      local_e8 = 0;
      local_a0 = (Variant **)0x29;
      String::parse_latin1((StrRange *)&local_e8);
      RTR((String *)&local_d8,(String *)&local_e8);
      vformat<String,String>
                (local_128,(String *)&local_d8,(CowData<char32_t> *)&local_c8,
                 (CowData<char32_t> *)&local_b8);
      pcVar3 = local_a8;
      if (*(char **)param_6 != local_a8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)param_6);
        *(char **)param_6 = pcVar3;
        local_a8 = (char *)0x0;
      }
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    }
    goto LAB_00103550;
  case 6:
    Array::Array((Array *)&local_a8);
    iVar11 = (int)(Array *)&local_a8;
    Array::resize(iVar11);
    lVar7 = *(long *)(param_3 + 0x20);
    if (lVar7 != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(lVar7 + -8) <= lVar14) break;
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        lVar12 = *(long *)(lVar7 + -8);
        if (lVar12 <= lVar14) goto LAB_001040b1;
        cVar5 = _execute(this,param_1,param_2,*(ENode **)(lVar7 + lVar14 * 8),(Variant *)&local_58,
                         param_5,param_6);
        if (cVar5 != '\0') {
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Array::~Array((Array *)&local_a8);
          goto LAB_00103563;
        }
        pVVar9 = (Variant *)Array::operator[](iVar11);
        Variant::operator=(pVVar9,(Variant *)&local_58);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        lVar7 = *(long *)(param_3 + 0x20);
        lVar14 = lVar14 + 1;
      } while (lVar7 != 0);
    }
    Variant::Variant((Variant *)&local_58,(Array *)&local_a8);
    if (Variant::needs_deinit[*(int *)param_4] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_4 = (int)local_58;
    *(undefined8 *)(param_4 + 8) = local_50._0_8_;
    *(undefined8 *)(param_4 + 0x10) = local_50._8_8_;
    Array::~Array((Array *)&local_a8);
    goto switchD_00102e6a_default;
  case 7:
    Dictionary::Dictionary((Dictionary *)&local_a8);
    lVar7 = *(long *)(param_3 + 0x20);
    if (lVar7 != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(lVar7 + -8) <= lVar15) break;
        local_78 = 0;
        local_70 = (undefined1  [16])0x0;
        lVar12 = *(long *)(lVar7 + -8);
        lVar14 = lVar15;
        if (lVar12 <= lVar15) goto LAB_001040b1;
        cVar5 = _execute(this,param_1,param_2,*(ENode **)(lVar7 + lVar15 * 8),(Variant *)&local_78,
                         param_5,param_6);
        if (cVar5 != '\0') {
LAB_001047bc:
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          Dictionary::~Dictionary((Dictionary *)&local_a8);
          goto LAB_00103563;
        }
        local_50 = (undefined1  [16])0x0;
        lVar14 = lVar15 + 1;
        local_58 = 0;
        lVar7 = *(long *)(param_3 + 0x20);
        if (lVar7 == 0) {
          lVar12 = 0;
          goto LAB_001040b1;
        }
        lVar12 = *(long *)(lVar7 + -8);
        if (lVar12 <= lVar14) goto LAB_001040b1;
        cVar5 = _execute(this,param_1,param_2,*(ENode **)(lVar7 + 8 + lVar15 * 8),
                         (Variant *)&local_58,param_5,param_6);
        if (cVar5 != '\0') {
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          goto LAB_001047bc;
        }
        pVVar9 = (Variant *)Dictionary::operator[]((Variant *)&local_a8);
        Variant::operator=(pVVar9,(Variant *)&local_58);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        lVar15 = lVar15 + 2;
        lVar7 = *(long *)(param_3 + 0x20);
      } while (lVar7 != 0);
    }
    Variant::Variant((Variant *)&local_58,(Dictionary *)&local_a8);
    if (Variant::needs_deinit[*(int *)param_4] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_4 = (int)local_58;
    *(undefined8 *)(param_4 + 8) = local_50._0_8_;
    *(undefined8 *)(param_4 + 0x10) = local_50._8_8_;
    Dictionary::~Dictionary((Dictionary *)&local_a8);
    goto switchD_00102e6a_default;
  case 8:
    local_c0 = 0;
    uStack_bc = 0;
    local_b0 = 0;
    if (*(long *)(param_3 + 0x20) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(param_3 + 0x20) + -8);
    }
    CowData<Variant>::resize<false>((CowData<Variant> *)&local_c0,lVar7);
    if (*(long *)(param_3 + 0x20) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(param_3 + 0x20) + -8);
    }
    CowData<Variant_const*>::resize<false>((CowData<Variant_const*> *)&local_b0,lVar7);
    lVar7 = *(long *)(param_3 + 0x20);
    lVar12 = local_b0;
    if (lVar7 != 0) {
      lVar14 = 0;
      do {
        lVar12 = local_b0;
        if (*(long *)(lVar7 + -8) <= lVar14) break;
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        lVar12 = *(long *)(lVar7 + -8);
        if (lVar12 <= lVar14) goto LAB_001040b1;
        cVar5 = _execute(this,param_1,param_2,*(ENode **)(lVar7 + lVar14 * 8),(Variant *)&local_58,
                         param_5,param_6);
        if (cVar5 != '\0') {
          lVar12 = local_b0;
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
            lVar12 = local_b0;
          }
          goto LAB_00103e63;
        }
        if (CONCAT44(uStack_bc,local_c0) == 0) {
LAB_001040e8:
          pVVar9 = (Variant *)0x0;
LAB_0010410c:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar14,(long)pVVar9,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        pVVar9 = *(Variant **)(CONCAT44(uStack_bc,local_c0) + -8);
        if ((long)pVVar9 <= lVar14) goto LAB_0010410c;
        CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_c0);
        lVar7 = CONCAT44(uStack_bc,local_c0);
        pVVar2 = (Variant *)(lVar7 + lVar14 * 0x18);
        Variant::operator=(pVVar2,(Variant *)&local_58);
        if (lVar7 == 0) goto LAB_00104298;
        lVar12 = *(long *)(lVar7 + -8);
        if (lVar12 <= lVar14) goto LAB_001040b1;
        if (local_b0 == 0) goto LAB_001040e8;
        pVVar9 = *(Variant **)(local_b0 + -8);
        if ((long)pVVar9 <= lVar14) goto LAB_0010410c;
        CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*> *)&local_b0);
        lVar12 = local_b0;
        cVar5 = Variant::needs_deinit[(int)local_58];
        *(Variant **)(local_b0 + lVar14 * 8) = pVVar2;
        if (cVar5 != '\0') {
          Variant::_clear_internal();
        }
        lVar14 = lVar14 + 1;
        lVar7 = *(long *)(param_3 + 0x20);
      } while (lVar7 != 0);
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    if (lVar12 == 0) {
      Variant::construct(*(undefined4 *)(param_3 + 0x14),param_4,0,0,&local_d8);
      if (local_d8 == 0) goto LAB_00104bc7;
    }
    else {
      Variant::construct(*(undefined4 *)(param_3 + 0x14),param_4,lVar12,*(undefined4 *)(lVar12 + -8)
                         ,&local_d8);
      if (local_d8 == 0) {
        LOCK();
        plVar1 = (long *)(lVar12 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_b0 + -0x10),false);
        }
LAB_00104bc7:
        CowData<Variant>::_unref((CowData<Variant> *)&local_c0);
        goto switchD_00102e6a_default;
      }
    }
    Variant::get_type_name((CowData<char32_t> *)&local_e0,*(undefined4 *)(param_3 + 0x14));
    local_f0 = 0;
    local_a8 = "";
    local_a0 = (Variant **)0x0;
    String::parse_latin1((StrRange *)&local_f0);
    local_a8 = "Invalid arguments to construct \'%s\'";
    local_f8 = 0;
    local_a0 = (Variant **)0x23;
    String::parse_latin1((StrRange *)&local_f8);
    RTR((String *)&local_e8,(String *)&local_f8);
    vformat<String>((CowData<char32_t> *)&local_a8,(String *)&local_e8,
                    (CowData<char32_t> *)&local_e0);
    pcVar3 = local_a8;
    if (*(char **)param_6 != local_a8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)param_6);
      *(char **)param_6 = pcVar3;
      local_a8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
LAB_00103e63:
    if (lVar12 != 0) {
      LOCK();
      plVar1 = (long *)(lVar12 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_b0 + -0x10),false);
      }
    }
    CowData<Variant>::_unref((CowData<Variant> *)&local_c0);
    break;
  case 9:
    local_b0 = 0;
    local_a0 = (Variant **)0x0;
    if (*(long *)(param_3 + 0x28) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(param_3 + 0x28) + -8);
    }
    CowData<Variant>::resize<false>((CowData<Variant> *)&local_b0,lVar7);
    if (*(long *)(param_3 + 0x28) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(param_3 + 0x28) + -8);
    }
    CowData<Variant_const*>::resize<false>((CowData<Variant_const*> *)&local_a0,lVar7);
    lVar7 = *(long *)(param_3 + 0x28);
    ppVVar13 = local_a0;
    if (lVar7 != 0) {
      lVar14 = 0;
      do {
        ppVVar13 = local_a0;
        if (*(long *)(lVar7 + -8) <= lVar14) break;
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        lVar12 = *(long *)(lVar7 + -8);
        if (lVar12 <= lVar14) goto LAB_001040b1;
        cVar5 = _execute(this,param_1,param_2,*(ENode **)(lVar7 + lVar14 * 8),(Variant *)&local_58,
                         param_5,param_6);
        if (cVar5 != '\0') {
          ppVVar13 = local_a0;
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
            ppVVar13 = local_a0;
          }
          goto LAB_00104a6b;
        }
        if (local_b0 == 0) goto LAB_001040e8;
        pVVar9 = *(Variant **)(local_b0 + -8);
        if ((long)pVVar9 <= lVar14) goto LAB_0010410c;
        CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_b0);
        lVar7 = local_b0;
        pVVar2 = (Variant *)(local_b0 + lVar14 * 0x18);
        Variant::operator=(pVVar2,(Variant *)&local_58);
        if (lVar7 == 0) goto LAB_00104298;
        lVar12 = *(long *)(lVar7 + -8);
        if (lVar12 <= lVar14) goto LAB_001040b1;
        if (local_a0 == (Variant **)0x0) goto LAB_001040e8;
        pVVar9 = local_a0[-1];
        if ((long)pVVar9 <= lVar14) goto LAB_0010410c;
        CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*> *)&local_a0);
        ppVVar13 = local_a0;
        local_a0[lVar14] = pVVar2;
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        lVar14 = lVar14 + 1;
        lVar7 = *(long *)(param_3 + 0x28);
      } while (lVar7 != 0);
    }
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_4] != '\0') {
      Variant::_clear_internal();
    }
    local_c8 = 0;
    uStack_c4 = 0;
    local_c0 = 0;
    *(undefined4 *)param_4 = 0;
    *(undefined8 *)(param_4 + 8) = local_50._0_8_;
    *(undefined8 *)(param_4 + 0x10) = local_50._8_8_;
    if (ppVVar13 == (Variant **)0x0) {
      Variant::call_utility_function
                ((StringName *)(param_3 + 0x18),param_4,(Variant **)0x0,0,(CallError *)&local_c8);
      pCVar10 = (CallError *)0x0;
      if (local_c8 != 0) goto LAB_00104afe;
    }
    else {
      Variant::call_utility_function
                ((StringName *)(param_3 + 0x18),param_4,ppVVar13,*(int *)(ppVVar13 + -1),
                 (CallError *)&local_c8);
      if (local_c8 != 0) {
        pCVar10 = (CallError *)ppVVar13[-1];
LAB_00104afe:
        Variant::get_call_error_text
                  ((StringName *)&local_e0,(Variant **)(param_3 + 0x18),(int)ppVVar13,pCVar10);
        operator+((char *)&local_d8,(String *)"Builtin call failed: ");
        if (*(long *)param_6 != CONCAT44(uStack_d4,local_d8)) {
          CowData<char32_t>::_unref((CowData<char32_t> *)param_6);
          uVar8 = CONCAT44(uStack_d4,local_d8);
          local_d8 = 0;
          uStack_d4 = 0;
          *(undefined8 *)param_6 = uVar8;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
LAB_00104a6b:
        if (ppVVar13 != (Variant **)0x0) {
          LOCK();
          ppVVar13 = ppVVar13 + -2;
          *ppVVar13 = *ppVVar13 + -1;
          UNLOCK();
          if (*ppVVar13 == (Variant *)0x0) {
            Memory::free_static(local_a0 + -2,false);
          }
        }
        CowData<Variant>::_unref((CowData<Variant> *)&local_b0);
        break;
      }
      LOCK();
      ppVVar13 = ppVVar13 + -2;
      *ppVVar13 = *ppVVar13 + -1;
      UNLOCK();
      if (*ppVVar13 == (Variant *)0x0) {
        Memory::free_static(local_a0 + -2,false);
      }
    }
    CowData<Variant>::_unref((CowData<Variant> *)&local_b0);
    goto switchD_00102e6a_default;
  case 10:
    local_78 = 0;
    local_70 = (undefined1  [16])0x0;
    cVar5 = _execute(this,param_1,param_2,*(ENode **)(param_3 + 0x18),(Variant *)&local_78,param_5,
                     param_6);
    if (cVar5 == '\0') {
      local_c0 = 0;
      uStack_bc = 0;
      local_b0 = 0;
      if (*(long *)(param_3 + 0x30) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(*(long *)(param_3 + 0x30) + -8);
      }
      CowData<Variant>::resize<false>((CowData<Variant> *)&local_c0,lVar7);
      if (*(long *)(param_3 + 0x30) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(*(long *)(param_3 + 0x30) + -8);
      }
      CowData<Variant_const*>::resize<false>((CowData<Variant_const*> *)&local_b0,lVar7);
      lVar7 = *(long *)(param_3 + 0x30);
      lVar12 = local_b0;
      if (lVar7 != 0) {
        lVar14 = 0;
        do {
          lVar12 = local_b0;
          if (*(long *)(lVar7 + -8) <= lVar14) break;
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
          lVar12 = *(long *)(lVar7 + -8);
          if (lVar12 <= lVar14) goto LAB_001040b1;
          cVar5 = _execute(this,param_1,param_2,*(ENode **)(lVar7 + lVar14 * 8),(Variant *)&local_58
                           ,param_5,param_6);
          if (cVar5 != '\0') {
            lVar12 = local_b0;
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
              lVar12 = local_b0;
            }
            goto LAB_00103511;
          }
          if (CONCAT44(uStack_bc,local_c0) == 0) {
LAB_00104630:
            pVVar9 = (Variant *)0x0;
            goto LAB_0010410c;
          }
          pVVar9 = *(Variant **)(CONCAT44(uStack_bc,local_c0) + -8);
          if ((long)pVVar9 <= lVar14) goto LAB_0010410c;
          CowData<Variant>::_copy_on_write((CowData<Variant> *)&local_c0);
          lVar7 = CONCAT44(uStack_bc,local_c0);
          pVVar2 = (Variant *)(lVar7 + lVar14 * 0x18);
          Variant::operator=(pVVar2,(Variant *)&local_58);
          if (lVar7 == 0) {
            lVar12 = 0;
            goto LAB_001040b1;
          }
          lVar12 = *(long *)(lVar7 + -8);
          if (lVar12 <= lVar14) goto LAB_001040b1;
          if (local_b0 == 0) goto LAB_00104630;
          pVVar9 = *(Variant **)(local_b0 + -8);
          if ((long)pVVar9 <= lVar14) goto LAB_0010410c;
          CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*> *)&local_b0);
          lVar12 = local_b0;
          *(Variant **)(local_b0 + lVar14 * 8) = pVVar2;
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          lVar14 = lVar14 + 1;
          lVar7 = *(long *)(param_3 + 0x30);
        } while (lVar7 != 0);
      }
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      if (param_5) {
        if (lVar12 == 0) {
          pVVar9 = (Variant *)0x0;
        }
        else {
          pVVar9 = *(Variant **)(lVar12 + -8);
        }
        Variant::call_const((StringName *)&local_78,(Variant **)(param_3 + 0x20),(int)lVar12,pVVar9,
                            (CallError *)param_4);
      }
      else {
        if (lVar12 == 0) {
          pVVar9 = (Variant *)0x0;
        }
        else {
          pVVar9 = *(Variant **)(lVar12 + -8);
        }
        Variant::callp((StringName *)&local_78,(Variant **)(param_3 + 0x20),(int)lVar12,pVVar9,
                       (CallError *)param_4);
      }
      if (local_d8 == 0) {
        if (lVar12 != 0) {
          LOCK();
          plVar1 = (long *)(lVar12 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_b0 + -0x10),false);
          }
        }
        CowData<Variant>::_unref((CowData<Variant> *)&local_c0);
        cVar5 = Variant::needs_deinit[(int)local_78];
        goto joined_r0x001037fd;
      }
      lVar7 = *(long *)(param_3 + 0x20);
      if (lVar7 == 0) {
LAB_00104da4:
        local_e0 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar7 + 8);
        if (pcVar3 == (char *)0x0) {
          local_e0 = 0;
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00104da4;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)(lVar7 + 0x10));
        }
        else {
          local_e0 = 0;
          local_a0 = (Variant **)strlen(pcVar3);
          local_a8 = pcVar3;
          String::parse_latin1((StrRange *)&local_e0);
        }
      }
      local_128 = (CowData<char32_t> *)&local_a8;
      local_150 = (CowData<char32_t> *)&local_e0;
      local_a8 = "";
      local_f0 = 0;
      local_a0 = (Variant **)0x0;
      String::parse_latin1((StrRange *)&local_f0);
      local_a8 = "On call to \'%s\':";
      local_f8 = 0;
      local_a0 = (Variant **)0x10;
      String::parse_latin1((StrRange *)&local_f8);
      RTR((String *)&local_e8,(String *)&local_f8);
      vformat<String>(local_128,(String *)&local_e8,local_150);
      pcVar3 = local_a8;
      if (*(char **)param_6 != local_a8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)param_6);
        *(char **)param_6 = pcVar3;
        local_a8 = (char *)0x0;
      }
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref(local_150);
LAB_00103511:
      if (lVar12 != 0) {
        LOCK();
        plVar1 = (long *)(lVar12 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_b0 + -0x10),false);
        }
      }
      CowData<Variant>::_unref((CowData<Variant> *)&local_c0);
    }
LAB_00103550:
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
LAB_00103563:
  uVar8 = 1;
LAB_001030e2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104298:
  lVar12 = 0;
LAB_001040b1:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar12,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* Expression::execute(Array const&, Object*, bool, bool) */

Array * Expression::execute(Array *param_1,Object *param_2,bool param_3,bool param_4)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  undefined7 in_register_00000009;
  undefined7 in_register_00000011;
  char in_R8B;
  bool in_R9B;
  long in_FS_OFFSET;
  bool bVar7;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2[0x1b8] != (Object)0x0) {
    local_70 = 0;
    plVar1 = (long *)(*(long *)(param_2 + 0x1b0) + -0x10);
    if (*(long *)(param_2 + 0x1b0) != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00105066;
        LOCK();
        lVar6 = *plVar1;
        bVar7 = lVar2 == lVar6;
        if (bVar7) {
          *plVar1 = lVar2 + 1;
          lVar6 = lVar2;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar6 != -1) {
        local_70 = *(long *)(param_2 + 0x1b0);
      }
    }
LAB_00105066:
    local_60 = 0x27;
    local_68 = "There was previously a parse error: %s.";
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_78);
    vformat<String>(&local_68,&local_78,&local_70);
    _err_print_error("execute","core/math/expression.cpp",0x5d7,
                     "Condition \"error_set\" is true. Returning: Variant()",&local_68,0,0);
    pcVar3 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
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
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    goto LAB_00104fdd;
  }
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_68 = (char *)0x0;
  param_2[0x1e0] = (Object)0x0;
  cVar5 = _execute((Expression *)param_2,(Array *)CONCAT71(in_register_00000011,param_3),
                   (Object *)CONCAT71(in_register_00000009,param_4),*(ENode **)(param_2 + 0x1c0),
                   (Variant *)&local_58,in_R9B,(String *)&local_68);
  if (cVar5 == '\0') {
LAB_00104f9c:
    uVar4 = (int)local_58;
    local_58 = local_58 & 0xffffffff00000000;
    *(undefined4 *)param_1 = uVar4;
    *(undefined8 *)(param_1 + 8) = local_50._0_8_;
    *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
  }
  else {
    param_2[0x1e0] = (Object)0x1;
    if (*(char **)(param_2 + 0x1b0) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(param_2 + 0x1b0),(CowData *)&local_68);
    }
    if (in_R8B == '\0') goto LAB_00104f9c;
    _err_print_error("execute","core/math/expression.cpp",0x5e0,
                     "Condition \"p_show_error\" is true. Returning: Variant()",
                     (CowData<char32_t> *)(param_2 + 0x1b0),0,0);
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  pcVar3 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
LAB_00104fdd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Vector<Expression::ENode*>::push_back(Expression::ENode*) [clone .isra.0] */

void __thiscall
Vector<Expression::ENode*>::push_back(Vector<Expression::ENode*> *this,ENode *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Expression::ENode*>::resize<false>
                    ((CowData<Expression::ENode*> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Expression::ENode*>::_copy_on_write((CowData<Expression::ENode*> *)(this + 8));
        *(ENode **)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* Vector<Expression::ExpressionNode>::push_back(Expression::ExpressionNode) [clone .isra.0] */

void Vector<Expression::ExpressionNode>::push_back
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar1 = CowData<Expression::ExpressionNode>::resize<false>
                    ((CowData<Expression::ExpressionNode> *)(param_1 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<Expression::ExpressionNode>::_copy_on_write
                  ((CowData<Expression::ExpressionNode> *)(param_1 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_1 + 8));
        *puVar2 = param_2;
        puVar2[1] = param_3;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Expression::_parse_expression() */

undefined8 __thiscall Expression::_parse_expression(Expression *this)

{
  long *plVar1;
  StringName *this_00;
  Expression EVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ENode *pEVar9;
  char *pcVar10;
  char cVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  ulong local_120;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 local_f8;
  long local_c8;
  undefined8 local_c0;
  String local_b8 [8];
  undefined8 local_b0;
  String local_a8 [8];
  CowData<char32_t> local_a0 [8];
  long local_98;
  long local_90;
  Vector<Expression::ExpressionNode> local_88 [8];
  char *local_80;
  char *local_78;
  size_t local_70;
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (char *)0x0;
  while( true ) {
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    _get_token(this,(Token *)local_68);
    if (this[0x1b8] != (Expression)0x0) break;
    switch(local_68[0]) {
    case 0:
      puVar7 = (undefined8 *)operator_new(0x28,"");
      puVar7[1] = 0;
      *puVar7 = &PTR__DictionaryNode_00110268;
      uVar14 = *(undefined8 *)(this + 0x1c8);
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 2) = 7;
      puVar7[1] = uVar14;
      *(undefined8 **)(this + 0x1c8) = puVar7;
      while( true ) {
        uVar3 = *(undefined4 *)(this + 0x1a4);
        _get_token(this,(Token *)local_68);
        if (local_68[0] == 1) break;
        *(undefined4 *)(this + 0x1a4) = uVar3;
        pEVar9 = (ENode *)_parse_expression(this);
        if (pEVar9 == (ENode *)0x0) goto LAB_00105538;
        Vector<Expression::ENode*>::push_back((Vector<Expression::ENode*> *)(puVar7 + 3),pEVar9);
        _get_token(this,(Token *)local_68);
        if (local_68[0] != 0xb) {
          local_78 = "Expected \':\'";
          local_70 = 0xc;
          goto LAB_001054b7;
        }
        pEVar9 = (ENode *)_parse_expression(this);
        if (pEVar9 == (ENode *)0x0) goto LAB_00105538;
        Vector<Expression::ENode*>::push_back((Vector<Expression::ENode*> *)(puVar7 + 3),pEVar9);
        uVar3 = *(undefined4 *)(this + 0x1a4);
        _get_token(this,(Token *)local_68);
        if (local_68[0] != 0xc) {
          if (local_68[0] == 1) {
            *(undefined4 *)(this + 0x1a4) = uVar3;
          }
          else {
            local_90 = 0;
            local_78 = "Expected \',\' or \'}\'";
            local_70 = 0x13;
            String::parse_latin1((StrRange *)&local_90);
            if (this[0x1b8] == (Expression)0x0) {
              if (*(long *)(this + 0x1b0) != local_90) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)&local_90);
              }
              this[0x1b8] = (Expression)0x1;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          }
        }
      }
      break;
    default:
      local_78 = "Expected expression.";
      local_70 = 0x14;
LAB_001054b7:
      local_90 = 0;
      String::parse_latin1((StrRange *)&local_90);
      if (this[0x1b8] == (Expression)0x0) {
        if (*(long *)(this + 0x1b0) != local_90) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)&local_90);
        }
        this[0x1b8] = (Expression)0x1;
      }
      lVar21 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar21 + -0x10),false);
        }
      }
      goto LAB_00105538;
    case 2:
      puVar7 = (undefined8 *)operator_new(0x28,"");
      puVar7[1] = 0;
      *puVar7 = &PTR__ArrayNode_00110248;
      uVar14 = *(undefined8 *)(this + 0x1c8);
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 2) = 6;
      puVar7[1] = uVar14;
      *(undefined8 **)(this + 0x1c8) = puVar7;
      while( true ) {
        uVar3 = *(undefined4 *)(this + 0x1a4);
        _get_token(this,(Token *)local_68);
        if (local_68[0] == 3) break;
        *(undefined4 *)(this + 0x1a4) = uVar3;
        pEVar9 = (ENode *)_parse_expression(this);
        if (pEVar9 == (ENode *)0x0) goto LAB_00105538;
        Vector<Expression::ENode*>::push_back((Vector<Expression::ENode*> *)(puVar7 + 3),pEVar9);
        uVar3 = *(undefined4 *)(this + 0x1a4);
        _get_token(this,(Token *)local_68);
        if (local_68[0] != 0xc) {
          if (local_68[0] == 3) {
            *(undefined4 *)(this + 0x1a4) = uVar3;
          }
          else {
            local_90 = 0;
            local_78 = "Expected \',\' or \']\'";
            local_70 = 0x13;
            String::parse_latin1((StrRange *)&local_90);
            if (this[0x1b8] == (Expression)0x0) {
              if (*(long *)(this + 0x1b0) != local_90) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)&local_90);
              }
              this[0x1b8] = (Expression)0x1;
            }
            lVar21 = local_90;
            if (local_90 != 0) {
              LOCK();
              plVar1 = (long *)(local_90 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_90 = 0;
                Memory::free_static((void *)(lVar21 + -0x10),false);
              }
            }
          }
        }
      }
      break;
    case 4:
      puVar7 = (undefined8 *)_parse_expression(this);
      if (this[0x1b8] != (Expression)0x0) goto LAB_00105538;
      _get_token(this,(Token *)local_68);
      if (local_68[0] != 5) {
        local_78 = "Expected \')\'";
LAB_00106cbd:
        local_90 = 0;
        local_70 = 0xc;
        String::parse_latin1((StrRange *)&local_90);
        if (this[0x1b8] == (Expression)0x0) {
          if (*(long *)(this + 0x1b0) != local_90) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)&local_90);
          }
          this[0x1b8] = (Expression)0x1;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        goto LAB_00105538;
      }
      break;
    case 6:
      Variant::operator_cast_to_String((Variant *)&local_98);
      uVar3 = *(undefined4 *)(this + 0x1a4);
      _get_token(this,(Token *)local_68);
      if (local_68[0] == 4) {
        puVar7 = (undefined8 *)operator_new(0x38,"");
        puVar7[1] = 0;
        *puVar7 = &PTR__CallNode_00110228;
        *(undefined1 (*) [16])(puVar7 + 3) = (undefined1  [16])0x0;
        uVar14 = *(undefined8 *)(this + 0x1c8);
        puVar7[6] = 0;
        puVar7[1] = uVar14;
        *(undefined4 *)(puVar7 + 2) = 10;
        *(undefined8 **)(this + 0x1c8) = puVar7;
        StringName::StringName((StringName *)&local_78,(String *)&local_98,false);
        if ((char *)puVar7[4] == local_78) {
          if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          puVar7[4] = local_78;
        }
        puVar8 = (undefined8 *)operator_new(0x18,"");
        puVar8[1] = 0;
        uVar14 = *(undefined8 *)(this + 0x1c8);
        *puVar8 = &PTR__SelfNode_001101a8;
        *(undefined4 *)(puVar8 + 2) = 2;
        puVar8[1] = uVar14;
        *(undefined8 **)(this + 0x1c8) = puVar8;
        puVar7[3] = puVar8;
        while( true ) {
          uVar3 = *(undefined4 *)(this + 0x1a4);
          _get_token(this,(Token *)local_68);
          if (local_68[0] == 5) break;
          *(undefined4 *)(this + 0x1a4) = uVar3;
          pEVar9 = (ENode *)_parse_expression(this);
          if (pEVar9 == (ENode *)0x0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            goto LAB_00105538;
          }
          Vector<Expression::ENode*>::push_back((Vector<Expression::ENode*> *)(puVar7 + 5),pEVar9);
          uVar3 = *(undefined4 *)(this + 0x1a4);
          _get_token(this,(Token *)local_68);
          if (local_68[0] != 0xc) {
            if (local_68[0] == 5) {
              *(undefined4 *)(this + 0x1a4) = uVar3;
            }
            else {
              local_90 = 0;
              local_78 = "Expected \',\' or \')\'";
              local_70 = 0x13;
              String::parse_latin1((StrRange *)&local_90);
              if (this[0x1b8] == (Expression)0x0) {
                if (*(long *)(this + 0x1b0) != local_90) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)&local_90);
                }
                this[0x1b8] = (Expression)0x1;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            }
          }
        }
      }
      else {
        lVar21 = *(long *)(this + 0x1d8);
        *(undefined4 *)(this + 0x1a4) = uVar3;
        if (lVar21 != 0) {
          lVar20 = 0;
          do {
            if (*(long *)(lVar21 + -8) <= lVar20) break;
            cVar5 = String::operator==((String *)(lVar21 + lVar20 * 8),(String *)&local_98);
            if (cVar5 != '\0') {
              puVar7 = (undefined8 *)operator_new(0x18,"");
              puVar7[1] = 0;
              *puVar7 = &PTR__InputNode_00110148;
              uVar14 = *(undefined8 *)(this + 0x1c8);
              *(undefined4 *)(puVar7 + 2) = 0;
              puVar7[1] = uVar14;
              *(undefined8 **)(this + 0x1c8) = puVar7;
              *(int *)((long)puVar7 + 0x14) = (int)lVar20;
              goto LAB_0010601c;
            }
            lVar21 = *(long *)(this + 0x1d8);
            lVar20 = lVar20 + 1;
          } while (lVar21 != 0);
        }
        puVar7 = (undefined8 *)operator_new(0x28,"");
        puVar7[1] = 0;
        *(undefined1 (*) [16])(puVar7 + 3) = (undefined1  [16])0x0;
        *puVar7 = &PTR__NamedIndexNode_001101e8;
        uVar14 = *(undefined8 *)(this + 0x1c8);
        *(undefined4 *)(puVar7 + 2) = 5;
        puVar7[1] = uVar14;
        *(undefined8 **)(this + 0x1c8) = puVar7;
        puVar8 = (undefined8 *)operator_new(0x18,"");
        puVar8[1] = 0;
        uVar14 = *(undefined8 *)(this + 0x1c8);
        *puVar8 = &PTR__SelfNode_001101a8;
        puVar8[1] = uVar14;
        *(undefined4 *)(puVar8 + 2) = 2;
        *(undefined8 **)(this + 0x1c8) = puVar8;
        puVar7[3] = puVar8;
        StringName::StringName((StringName *)&local_78,(String *)&local_98,false);
        if ((char *)puVar7[4] == local_78) {
          if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          puVar7[4] = local_78;
        }
      }
LAB_0010601c:
      lVar21 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar21 + -0x10),false);
        }
      }
      break;
    case 7:
      Variant::operator_cast_to_StringName((Variant *)&local_c8);
      _get_token(this,(Token *)local_68);
      if (local_68[0] != 4) {
        local_90 = 0;
        local_78 = "Expected \'(\'";
        local_70 = 0xc;
        String::parse_latin1((StrRange *)&local_90);
        if (this[0x1b8] == (Expression)0x0) {
          if (*(long *)(this + 0x1b0) != local_90) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)&local_90);
          }
          this[0x1b8] = (Expression)0x1;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_0010610c:
        if ((StringName::configured != '\0') && (local_c8 != 0)) {
          StringName::unref();
        }
        goto LAB_00105538;
      }
      puVar7 = (undefined8 *)operator_new(0x30,"");
      puVar7[1] = 0;
      *puVar7 = &PTR__BuiltinFuncNode_00110288;
      uVar14 = *(undefined8 *)(this + 0x1c8);
      puVar7[3] = 0;
      puVar7[1] = uVar14;
      this_00 = (StringName *)(puVar7 + 3);
      puVar7[5] = 0;
      *(undefined4 *)(puVar7 + 2) = 9;
      *(undefined8 **)(this + 0x1c8) = puVar7;
      StringName::operator=(this_00,(StringName *)&local_c8);
      while( true ) {
        uVar3 = *(undefined4 *)(this + 0x1a4);
        _get_token(this,(Token *)local_68);
        if (local_68[0] == 5) break;
        *(undefined4 *)(this + 0x1a4) = uVar3;
        pEVar9 = (ENode *)_parse_expression(this);
        if (pEVar9 == (ENode *)0x0) goto LAB_0010610c;
        Vector<Expression::ENode*>::push_back((Vector<Expression::ENode*> *)(puVar7 + 4),pEVar9);
        uVar3 = *(undefined4 *)(this + 0x1a4);
        _get_token(this,(Token *)local_68);
        if (local_68[0] != 0xc) {
          if (local_68[0] == 5) {
            *(undefined4 *)(this + 0x1a4) = uVar3;
          }
          else {
            local_90 = 0;
            local_78 = "Expected \',\' or \')\'";
            local_70 = 0x13;
            String::parse_latin1((StrRange *)&local_90);
            if (this[0x1b8] == (Expression)0x0) {
              if (*(long *)(this + 0x1b0) != local_90) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)&local_90);
              }
              this[0x1b8] = (Expression)0x1;
            }
            lVar21 = local_90;
            if (local_90 != 0) {
              LOCK();
              plVar1 = (long *)(local_90 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_90 = 0;
                Memory::free_static((void *)(lVar21 + -0x10),false);
              }
            }
          }
        }
      }
      cVar5 = Variant::is_utility_function_vararg(this_00);
      if (cVar5 == '\0') {
        iVar6 = Variant::get_utility_function_argument_count(this_00);
        if (puVar7[5] == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = *(long *)(puVar7[5] + -8);
        }
        if (iVar6 != lVar21) {
          local_90 = 0;
          local_78 = " arguments.";
          local_70 = 0xb;
          String::parse_latin1((StrRange *)&local_90);
          itos((long)local_a0);
          local_78 = "\' expects ";
          local_b0 = 0;
          local_70 = 10;
          String::parse_latin1((StrRange *)&local_b0);
          lVar21 = puVar7[3];
          if (lVar21 == 0) {
            local_c0 = 0;
          }
          else {
            pcVar13 = *(char **)(lVar21 + 8);
            local_c0 = 0;
            if (pcVar13 == (char *)0x0) {
              if (*(long *)(lVar21 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(lVar21 + 0x10));
              }
            }
            else {
              local_70 = strlen(pcVar13);
              local_78 = pcVar13;
              String::parse_latin1((StrRange *)&local_c0);
            }
          }
          operator+((char *)local_b8,(String *)"Builtin func \'");
          String::operator+(local_a8,local_b8);
          String::operator+((String *)&local_98,local_a8);
          String::operator+((String *)&local_78,(String *)&local_98);
          if (this[0x1b8] == (Expression)0x0) {
            if (*(char **)(this + 0x1b0) != local_78) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)&local_78);
            }
            this[0x1b8] = (Expression)0x1;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref(local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        }
      }
      if ((StringName::configured != '\0') && (local_c8 != 0)) {
        StringName::unref();
      }
      break;
    case 8:
      puVar7 = (undefined8 *)operator_new(0x18,"");
      puVar7[1] = 0;
      *puVar7 = &PTR__SelfNode_001101a8;
      uVar14 = *(undefined8 *)(this + 0x1c8);
      *(undefined4 *)(puVar7 + 2) = 2;
      puVar7[1] = uVar14;
      *(undefined8 **)(this + 0x1c8) = puVar7;
      break;
    case 9:
      puVar7 = (undefined8 *)operator_new(0x30,"");
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      *puVar7 = &PTR__ConstantNode_00110168;
      Variant::Variant((Variant *)(puVar7 + 3),0);
      uVar14 = *(undefined8 *)(this + 0x1c8);
      *(undefined4 *)(puVar7 + 2) = 1;
      puVar7[1] = uVar14;
      *(undefined8 **)(this + 0x1c8) = puVar7;
      Variant::operator=((Variant *)(puVar7 + 3),(Variant *)&local_60);
      break;
    case 10:
      iVar6 = Variant::operator_cast_to_int((Variant *)&local_60);
      _get_token(this,(Token *)local_68);
      if (local_68[0] != 4) {
        local_78 = "Expected \'(\'";
        goto LAB_00106cbd;
      }
      puVar7 = (undefined8 *)operator_new(0x28,"");
      puVar7[1] = 0;
      *puVar7 = &PTR__ConstructorNode_00110208;
      uVar14 = *(undefined8 *)(this + 0x1c8);
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 2) = 8;
      puVar7[1] = uVar14;
      *(undefined8 **)(this + 0x1c8) = puVar7;
      *(int *)((long)puVar7 + 0x14) = iVar6;
      while( true ) {
        uVar3 = *(undefined4 *)(this + 0x1a4);
        _get_token(this,(Token *)local_68);
        if (local_68[0] == 5) break;
        *(undefined4 *)(this + 0x1a4) = uVar3;
        pEVar9 = (ENode *)_parse_expression(this);
        if (pEVar9 == (ENode *)0x0) goto LAB_00105538;
        Vector<Expression::ENode*>::push_back((Vector<Expression::ENode*> *)(puVar7 + 3),pEVar9);
        uVar3 = *(undefined4 *)(this + 0x1a4);
        _get_token(this,(Token *)local_68);
        if (local_68[0] != 0xc) {
          if (local_68[0] == 5) {
            *(undefined4 *)(this + 0x1a4) = uVar3;
          }
          else {
            local_90 = 0;
            local_78 = "Expected \',\' or \')\'";
            local_70 = 0x13;
            String::parse_latin1((StrRange *)&local_90);
            if (this[0x1b8] == (Expression)0x0) {
              if (*(long *)(this + 0x1b0) != local_90) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)&local_90);
              }
              this[0x1b8] = (Expression)0x1;
            }
            lVar21 = local_90;
            if (local_90 != 0) {
              LOCK();
              plVar1 = (long *)(local_90 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_90 = 0;
                Memory::free_static((void *)(lVar21 + -0x10),false);
              }
            }
          }
        }
      }
      break;
    case 0x17:
      Vector<Expression::ExpressionNode>::push_back
                (local_88,CONCAT71((int7)((ulong)local_f8 >> 8),1) & 0xffffffff,0x17);
      goto LAB_00105850;
    case 0x19:
      Vector<Expression::ExpressionNode>::push_back
                (local_88,CONCAT71((int7)((ulong)local_100 >> 8),1) & 0xffffffff,10);
      goto LAB_00105850;
    case 0x24:
      puVar7 = (undefined8 *)operator_new(0x18,"");
      puVar7[1] = 0;
      *puVar7 = &PTR__InputNode_00110148;
      puVar7[2] = 0;
      puVar7[1] = *(undefined8 *)(this + 0x1c8);
      *(undefined8 **)(this + 0x1c8) = puVar7;
      iVar6 = Variant::operator_cast_to_int((Variant *)&local_60);
      *(int *)((long)puVar7 + 0x14) = iVar6;
    }
LAB_001057b0:
    while( true ) {
      uVar3 = *(undefined4 *)(this + 0x1a4);
      _get_token(this,(Token *)local_68);
      if (this[0x1b8] != (Expression)0x0) goto LAB_00105538;
      if (local_68[0] == 2) {
        puVar8 = (undefined8 *)operator_new(0x28,"");
        puVar8[1] = 0;
        *(undefined1 (*) [16])(puVar8 + 3) = (undefined1  [16])0x0;
        *puVar8 = &PTR__IndexNode_001101c8;
        uVar14 = *(undefined8 *)(this + 0x1c8);
        *(undefined4 *)(puVar8 + 2) = 4;
        puVar8[1] = uVar14;
        *(undefined8 **)(this + 0x1c8) = puVar8;
        puVar8[3] = puVar7;
        lVar21 = _parse_expression(this);
        if (lVar21 != 0) goto code_r0x00105e3f;
        goto LAB_00105538;
      }
      if (local_68[0] != 0xd) break;
      _get_token(this,(Token *)local_68);
      if (1 < local_68[0] - 6U) {
        local_78 = "Expected identifier after \'.\'";
        goto LAB_00105e6f;
      }
      Variant::operator_cast_to_StringName((Variant *)&local_98);
      uVar3 = *(undefined4 *)(this + 0x1a4);
      _get_token(this,(Token *)local_68);
      if (local_68[0] == 4) {
        puVar8 = (undefined8 *)operator_new(0x38,"");
        puVar8[1] = 0;
        *puVar8 = &PTR__CallNode_00110228;
        *(undefined1 (*) [16])(puVar8 + 3) = (undefined1  [16])0x0;
        uVar14 = *(undefined8 *)(this + 0x1c8);
        puVar8[6] = 0;
        *(undefined4 *)(puVar8 + 2) = 10;
        puVar8[1] = uVar14;
        *(undefined8 **)(this + 0x1c8) = puVar8;
        StringName::operator=((StringName *)(puVar8 + 4),(StringName *)&local_98);
        puVar8[3] = puVar7;
        while( true ) {
          uVar3 = *(undefined4 *)(this + 0x1a4);
          _get_token(this,(Token *)local_68);
          if (local_68[0] == 5) break;
          *(undefined4 *)(this + 0x1a4) = uVar3;
          pEVar9 = (ENode *)_parse_expression(this);
          if (pEVar9 == (ENode *)0x0) {
            if ((StringName::configured != '\0') && (local_98 != 0)) {
              StringName::unref();
            }
            goto LAB_00105538;
          }
          Vector<Expression::ENode*>::push_back((Vector<Expression::ENode*> *)(puVar8 + 5),pEVar9);
          uVar3 = *(undefined4 *)(this + 0x1a4);
          _get_token(this,(Token *)local_68);
          if (local_68[0] != 0xc) {
            if (local_68[0] == 5) {
              *(undefined4 *)(this + 0x1a4) = uVar3;
            }
            else {
              local_90 = 0;
              local_78 = "Expected \',\' or \')\'";
              local_70 = 0x13;
              String::parse_latin1((StrRange *)&local_90);
              if (this[0x1b8] == (Expression)0x0) {
                if (*(long *)(this + 0x1b0) != local_90) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)&local_90);
                }
                this[0x1b8] = (Expression)0x1;
              }
              lVar21 = local_90;
              if (local_90 != 0) {
                LOCK();
                plVar1 = (long *)(local_90 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void *)(lVar21 + -0x10),false);
                }
              }
            }
          }
        }
      }
      else {
        *(undefined4 *)(this + 0x1a4) = uVar3;
        puVar8 = (undefined8 *)operator_new(0x28,"");
        puVar8[1] = 0;
        *puVar8 = &PTR__NamedIndexNode_001101e8;
        *(undefined4 *)(puVar8 + 2) = 5;
        *(undefined1 (*) [16])(puVar8 + 3) = (undefined1  [16])0x0;
        puVar8[1] = *(undefined8 *)(this + 0x1c8);
        *(undefined8 **)(this + 0x1c8) = puVar8;
        puVar8[3] = puVar7;
        StringName::operator=((StringName *)(puVar8 + 4),(StringName *)&local_98);
      }
      puVar7 = puVar8;
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
    }
    *(undefined4 *)(this + 0x1a4) = uVar3;
    Vector<Expression::ExpressionNode>::push_back(local_88,(local_120 >> 8 & 0xffffff) << 8,puVar7);
    uVar3 = *(undefined4 *)(this + 0x1a4);
    _get_token(this,(Token *)local_68);
    if (this[0x1b8] != (Expression)0x0) break;
    if (0x15 < local_68[0] - 0xeU) {
      *(undefined4 *)(this + 0x1a4) = uVar3;
      pcVar13 = local_80;
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
        pcVar13 = local_80;
      }
      goto joined_r0x001068de;
    }
    Vector<Expression::ExpressionNode>::push_back
              (local_88,CONCAT71((int7)((ulong)local_110 >> 8),1) & 0xffffffff,
               *(undefined4 *)(CSWTCH_1056 + (ulong)(local_68[0] - 0xeU) * 4));
LAB_00105850:
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
  }
LAB_00105538:
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
LAB_00105551:
  uVar14 = 0;
  pcVar13 = local_80;
LAB_0010555b:
  if (pcVar13 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(pcVar13 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_80 + -0x10,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
code_r0x00105e3f:
  puVar8[4] = lVar21;
  _get_token(this,(Token *)local_68);
  puVar7 = puVar8;
  if (local_68[0] != 3) {
    local_78 = "Expected \']\' at end of index.";
LAB_00105e6f:
    local_70 = 0x1d;
    goto LAB_001054b7;
  }
  goto LAB_001057b0;
joined_r0x001068de:
  if (pcVar13 == (char *)0x0) {
    uVar18 = 0;
LAB_00106b55:
    uVar17 = 0;
LAB_00106b72:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,uVar17,uVar18,"p_index","size()","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar18 = *(ulong *)(pcVar13 + -8);
  if ((long)uVar18 < 2) {
    if ((long)uVar18 < 1) goto LAB_00106b55;
    uVar14 = *(undefined8 *)(pcVar13 + 8);
    goto LAB_0010555b;
  }
  cVar5 = '\0';
  uVar17 = 0;
  uVar19 = 0xfffff;
  uVar22 = 0xffffffff;
  pcVar10 = pcVar13;
  do {
    cVar11 = *pcVar10;
    if (cVar11 != '\0') {
      switch(*(undefined4 *)(pcVar10 + 8)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        cVar11 = '\0';
        uVar16 = 9;
        break;
      case 6:
      case 7:
        cVar11 = '\0';
        uVar16 = 4;
        break;
      case 8:
      case 9:
      case 0xc:
        cVar11 = '\0';
        uVar16 = 3;
        break;
      case 10:
        uVar16 = 2;
        break;
      default:
        itos((long)&local_90);
        operator+((char *)&local_78,(String *)"Parser bug, invalid operator in expression: ");
        if (this[0x1b8] == (Expression)0x0) {
          if (*(char **)(this + 0x1b0) != local_78) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b0),(CowData *)&local_78);
          }
          this[0x1b8] = (Expression)0x1;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        goto LAB_00105551;
      case 0xd:
        cVar11 = '\0';
        uVar16 = 0;
        break;
      case 0xe:
      case 0xf:
        cVar11 = '\0';
        uVar16 = 5;
        break;
      case 0x10:
        cVar11 = '\0';
        uVar16 = 6;
        break;
      case 0x11:
        cVar11 = '\0';
        uVar16 = 8;
        break;
      case 0x12:
        cVar11 = '\0';
        uVar16 = 7;
        break;
      case 0x13:
        uVar16 = 1;
        break;
      case 0x14:
        cVar11 = '\0';
        uVar16 = 0xd;
        break;
      case 0x15:
        cVar11 = '\0';
        uVar16 = 0xe;
        break;
      case 0x17:
        uVar16 = 0xc;
        break;
      case 0x18:
        cVar11 = '\0';
        uVar16 = 0xb;
      }
      if (uVar16 < uVar19) {
        uVar22 = uVar17 & 0xffffffff;
        uVar19 = uVar16;
        cVar5 = cVar11;
      }
    }
    uVar17 = uVar17 + 1;
    pcVar10 = pcVar10 + 0x10;
  } while (uVar18 != uVar17);
  iVar6 = (int)uVar22;
  if (iVar6 == -1) {
    local_78 = (char *)0x0;
    String::parse_latin1((String *)&local_78,"Yet another parser bug....");
    if (this[0x1b8] == (Expression)0x0) {
      _set_error(this,(String *)&local_78);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    _err_print_error("_parse_expression","core/math/expression.cpp",0x47a,
                     "Method/function failed. Returning: nullptr",0,0);
    goto LAB_00105551;
  }
  if (cVar5 == '\0') {
    if ((iVar6 < 1) || (uVar22 = (ulong)iVar6, (long)(uVar18 - 1) <= (long)uVar22)) {
      local_78 = (char *)0x0;
      String::parse_latin1((String *)&local_78,"Parser bug...");
      if (this[0x1b8] == (Expression)0x0) {
        _set_error(this,(String *)&local_78);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      _err_print_error("_parse_expression","core/math/expression.cpp",0x497,
                       "Method/function failed. Returning: nullptr",0,0);
      goto LAB_00105551;
    }
    puVar7 = (undefined8 *)operator_new(0x28,"");
    *puVar7 = &PTR__OperatorNode_00110188;
    uVar14 = _LC98;
    puVar7[1] = 0;
    puVar7[2] = uVar14;
    uVar18 = *(ulong *)(pcVar13 + -8);
    *(undefined1 (*) [16])(puVar7 + 3) = (undefined1  [16])0x0;
    puVar7[1] = *(undefined8 *)(this + 0x1c8);
    *(undefined8 **)(this + 0x1c8) = puVar7;
    uVar17 = uVar22;
    if ((long)uVar18 <= (long)uVar22) goto LAB_00106b72;
    lVar21 = uVar22 * 0x10;
    *(undefined4 *)((long)puVar7 + 0x14) = *(undefined4 *)(pcVar13 + lVar21 + 8);
    uVar17 = (ulong)(iVar6 + -1);
    if ((long)uVar18 <= (long)uVar17) goto LAB_00106b72;
    if (pcVar13[lVar21 + -0x10] != '\0') {
      local_78 = (char *)0x0;
      String::parse_latin1((String *)&local_78,"Parser bug...");
      if (this[0x1b8] == (Expression)0x0) {
        _set_error(this,(String *)&local_78);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      _err_print_error("_parse_expression","core/math/expression.cpp",0x49f,
                       "Method/function failed. Returning: nullptr",0,0);
      goto LAB_00105551;
    }
    uVar17 = (ulong)(iVar6 + 1);
    if ((long)uVar18 <= (long)uVar17) goto LAB_00106b72;
    lVar20 = lVar21 + 0x10;
    if (pcVar13[lVar20] != '\0') {
      local_78 = (char *)0x0;
      String::parse_latin1((String *)&local_78,"Unexpected two consecutive operators.");
      EVar2 = this[0x1b8];
joined_r0x00106dfe:
      if (EVar2 == (Expression)0x0) {
        _set_error(this,(String *)&local_78);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      goto LAB_00105551;
    }
    uVar14 = *(undefined8 *)(pcVar13 + lVar20 + 8);
    puVar7[3] = *(undefined8 *)(pcVar13 + lVar21 + -0x10 + 8);
    puVar7[4] = uVar14;
    CowData<Expression::ExpressionNode>::_copy_on_write
              ((CowData<Expression::ExpressionNode> *)&local_80);
    *(undefined8 **)(local_80 + lVar21 + -8) = puVar7;
    if (local_80 == (char *)0x0) {
      lVar12 = 0;
LAB_00107129:
      _err_print_index_error
                ("remove_at","./core/templates/cowdata.h",0xe4,uVar22,lVar12,"p_index","size()","",
                 false,false);
    }
    else {
      lVar12 = *(long *)(local_80 + -8);
      if (lVar12 <= (long)uVar22) goto LAB_00107129;
      CowData<Expression::ExpressionNode>::_copy_on_write
                ((CowData<Expression::ExpressionNode> *)&local_80);
      if (local_80 == (char *)0x0) {
        lVar12 = -1;
      }
      else {
        lVar12 = *(long *)(local_80 + -8) + -1;
        if ((long)uVar22 < lVar12) {
          memmove(local_80 + lVar21,local_80 + lVar20,(lVar12 - uVar22) * 0x10);
        }
      }
      CowData<Expression::ExpressionNode>::resize<false>
                ((CowData<Expression::ExpressionNode> *)&local_80,lVar12);
    }
    if (local_80 == (char *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(local_80 + -8);
      if ((long)uVar22 < lVar12) {
        CowData<Expression::ExpressionNode>::_copy_on_write
                  ((CowData<Expression::ExpressionNode> *)&local_80);
        if (local_80 == (char *)0x0) {
          lVar12 = -1;
        }
        else {
          lVar12 = *(long *)(local_80 + -8) + -1;
          if ((long)uVar22 < lVar12) {
            memmove(local_80 + lVar21,local_80 + lVar20,(lVar12 - uVar22) * 0x10);
          }
        }
        CowData<Expression::ExpressionNode>::resize<false>
                  ((CowData<Expression::ExpressionNode> *)&local_80,lVar12);
        pcVar13 = local_80;
        goto joined_r0x001068de;
      }
    }
    _err_print_index_error
              ("remove_at","./core/templates/cowdata.h",0xe4,uVar22,lVar12,"p_index","size()","",
               false,false);
    pcVar13 = local_80;
    goto joined_r0x001068de;
  }
  uVar17 = (ulong)iVar6;
  while( true ) {
    if (((long)uVar18 <= (long)uVar17) || ((long)uVar17 < 0)) goto LAB_00106b72;
    if (pcVar13[uVar17 * 0x10] == '\0') break;
    uVar17 = uVar17 + 1;
    if (uVar18 == uVar17) {
      local_78 = (char *)0x0;
      String::parse_latin1((String *)&local_78,"Unexpected end of expression...");
      EVar2 = this[0x1b8];
      goto joined_r0x00106dfe;
    }
  }
  iVar15 = (int)uVar17 + -1;
  uVar22 = (ulong)iVar15;
  for (; iVar6 <= iVar15; iVar15 = iVar15 + -1) {
    puVar7 = (undefined8 *)operator_new(0x28,"");
    puVar7[1] = 0;
    *puVar7 = &PTR__OperatorNode_00110188;
    uVar14 = _LC98;
    *(undefined1 (*) [16])(puVar7 + 3) = (undefined1  [16])0x0;
    puVar7[2] = uVar14;
    puVar7[1] = *(undefined8 *)(this + 0x1c8);
    *(undefined8 **)(this + 0x1c8) = puVar7;
    uVar17 = uVar22;
    if (uVar22 == 0xffffffffffffffff) {
      if (pcVar13 == (char *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(ulong *)(pcVar13 + -8);
      }
      goto LAB_00106b72;
    }
    if (pcVar13 == (char *)0x0) {
      uVar18 = 0;
      goto LAB_00106b72;
    }
    uVar18 = *(ulong *)(pcVar13 + -8);
    if ((long)uVar18 <= (long)uVar22) goto LAB_00106b72;
    uVar17 = uVar22 + 1;
    lVar21 = uVar22 * 0x10;
    *(undefined4 *)((long)puVar7 + 0x14) = *(undefined4 *)(pcVar13 + lVar21 + 8);
    if ((long)uVar18 <= (long)uVar17) goto LAB_00106b72;
    uVar14 = *(undefined8 *)(pcVar13 + lVar21 + 0x18);
    puVar7[4] = 0;
    puVar7[3] = uVar14;
    CowData<Expression::ExpressionNode>::_copy_on_write
              ((CowData<Expression::ExpressionNode> *)&local_80);
    local_80[lVar21] = '\0';
    if (local_80 == (char *)0x0) {
      lVar20 = 0;
LAB_001071a3:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,uVar22,lVar20,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar20 = *(long *)(local_80 + -8);
    if (lVar20 <= (long)uVar22) goto LAB_001071a3;
    uVar22 = uVar22 - 1;
    CowData<Expression::ExpressionNode>::_copy_on_write
              ((CowData<Expression::ExpressionNode> *)&local_80);
    *(undefined8 **)(local_80 + lVar21 + 8) = puVar7;
    Vector<Expression::ExpressionNode>::remove_at(local_88,uVar17);
    pcVar13 = local_80;
  }
  goto joined_r0x001068de;
}



/* Expression::_compile_expression() */

Expression __thiscall Expression::_compile_expression(Expression *this)

{
  long *plVar1;
  Expression EVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (this[0x1a8] == (Expression)0x0) {
    return this[0x1b8];
  }
  puVar3 = *(undefined8 **)(this + 0x1c8);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    Memory::free_static(puVar3,false);
    *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  }
  if (*(long *)(this + 0x1b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x1b0);
      *(undefined8 *)(this + 0x1b0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      *(undefined8 *)(this + 0x1b0) = 0;
    }
    else {
      *(undefined8 *)(this + 0x1b0) = 0;
    }
  }
  this[0x1b8] = (Expression)0x0;
  *(undefined4 *)(this + 0x1a4) = 0;
  uVar5 = _parse_expression(this);
  *(undefined8 *)(this + 0x1c0) = uVar5;
  EVar2 = this[0x1b8];
  if (EVar2 == (Expression)0x0) {
    this[0x1a8] = (Expression)0x0;
    return EVar2;
  }
  puVar3 = *(undefined8 **)(this + 0x1c8);
  *(undefined8 *)(this + 0x1c0) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    Memory::free_static(puVar3,false);
  }
  *(undefined8 *)(this + 0x1c8) = 0;
  return EVar2;
}



/* Expression::parse(String const&, Vector<String> const&) */

undefined8 __thiscall Expression::parse(Expression *this,String *param_1,Vector *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  
  puVar2 = *(undefined8 **)(this + 0x1c8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
    *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  }
  if (*(long *)(this + 0x1b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x1b0);
      *(undefined8 *)(this + 0x1b0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
    *(undefined8 *)(this + 0x1b0) = 0;
  }
  this[0x1b8] = (Expression)0x0;
  lVar3 = *(long *)(param_2 + 8);
  *(undefined4 *)(this + 0x1a4) = 0;
  if (*(long *)(this + 0x1d8) != lVar3) {
    CowData<String>::_unref((CowData<String> *)(this + 0x1d8));
    if (*(long *)(param_2 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 8) + -0x10);
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_0010742f;
        LOCK();
        lVar4 = *plVar1;
        bVar6 = lVar3 == lVar4;
        if (bVar6) {
          *plVar1 = lVar3 + 1;
          lVar4 = lVar3;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar4 != -1) {
        *(undefined8 *)(this + 0x1d8) = *(undefined8 *)(param_2 + 8);
      }
    }
  }
LAB_0010742f:
  if (*(long *)(this + 0x198) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x198),(CowData *)param_1);
  }
  uVar5 = _parse_expression(this);
  *(undefined8 *)(this + 0x1c0) = uVar5;
  if (this[0x1b8] != (Expression)0x0) {
    puVar2 = *(undefined8 **)(this + 0x1c8);
    *(undefined8 *)(this + 0x1c0) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      Memory::free_static(puVar2,false);
    }
    *(undefined8 *)(this + 0x1c8) = 0;
    return 0x1f;
  }
  return 0;
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



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1106,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1106,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Expression::is_class_ptr(void*) const */

uint __thiscall Expression::is_class_ptr(Expression *this,void *param_1)

{
  return (uint)CONCAT71(0x1106,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1106,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1106,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Expression::_getv(StringName const&, Variant&) const */

undefined8 Expression::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Expression::_setv(StringName const&, Variant const&) */

undefined8 Expression::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Expression::_validate_propertyv(PropertyInfo&) const */

void Expression::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Expression::_property_can_revertv(StringName const&) const */

undefined8 Expression::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Expression::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Expression::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Expression::_notificationv(int, bool) */

void Expression::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Variant, Array const&, Object*, bool, bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<Variant,Array_const&,Object*,bool,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&, Vector<String> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Error,String_const&,Vector<String>const&>::_gen_argument_type
          (MethodBindTR<Error,String_const&,Vector<String>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffe2) + 0x22;
  }
  return iVar1;
}



/* MethodBindTR<Error, String const&, Vector<String> const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,String_const&,Vector<String>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&, Vector<String> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,Vector<String>const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,Vector<String>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110408;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, Vector<String> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,Vector<String>const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,Vector<String>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110408;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Variant, Array const&, Object*, bool, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,Array_const&,Object*,bool,bool>::~MethodBindTR
          (MethodBindTR<Variant,Array_const&,Object*,bool,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110468;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Variant, Array const&, Object*, bool, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,Array_const&,Object*,bool,bool>::~MethodBindTR
          (MethodBindTR<Variant,Array_const&,Object*,bool,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110468;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001104c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001104c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110528;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110528;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ffc8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ffc8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindTR<Variant, Array const&, Object*, bool, bool>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTR<Variant,Array_const&,Object*,bool,bool>::_gen_argument_type
          (MethodBindTR<Variant,Array_const&,Object*,bool,bool> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 4) && (uVar1 = 0x1c, param_1 != 0)) && (uVar1 = 1, param_1 == 1)) {
    uVar1 = 0x18;
  }
  return uVar1;
}



/* CowData<Expression::ENode*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Expression::ENode*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Expression::ExpressionNode>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Expression::ExpressionNode>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant const*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant_const*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Expression::~Expression() [clone .cold] */

void __thiscall Expression::~Expression(Expression *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Expression::_bind_methods() [clone .cold] */

void Expression::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Variant>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Variant>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00107db2(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Variant const*>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Variant_const*>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00107dd4(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

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
LAB_00107e23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107e23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00107e8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00107e8e:
  return &_get_class_namev()::_class_name_static;
}



/* Expression::_get_class_namev() const */

undefined8 * Expression::_get_class_namev(void)

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
LAB_00107f03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107f03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Expression");
      goto LAB_00107f6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Expression");
LAB_00107f6e:
  return &_get_class_namev()::_class_name_static;
}



/* Expression::ENode::~ENode() */

void __thiscall Expression::ENode::~ENode(ENode *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
    return;
  }
  return;
}



/* Expression::IndexNode::~IndexNode() */

void __thiscall Expression::IndexNode::~IndexNode(IndexNode *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
    return;
  }
  return;
}



/* Expression::SelfNode::~SelfNode() */

void __thiscall Expression::SelfNode::~SelfNode(SelfNode *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
    return;
  }
  return;
}



/* Expression::OperatorNode::~OperatorNode() */

void __thiscall Expression::OperatorNode::~OperatorNode(OperatorNode *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
    return;
  }
  return;
}



/* Expression::InputNode::~InputNode() */

void __thiscall Expression::InputNode::~InputNode(InputNode *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
    return;
  }
  return;
}



/* Expression::ENode::~ENode() */

void __thiscall Expression::ENode::~ENode(ENode *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
  }
  operator_delete(this,0x18);
  return;
}



/* Expression::IndexNode::~IndexNode() */

void __thiscall Expression::IndexNode::~IndexNode(IndexNode *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
  }
  operator_delete(this,0x28);
  return;
}



/* Expression::SelfNode::~SelfNode() */

void __thiscall Expression::SelfNode::~SelfNode(SelfNode *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
  }
  operator_delete(this,0x18);
  return;
}



/* Expression::OperatorNode::~OperatorNode() */

void __thiscall Expression::OperatorNode::~OperatorNode(OperatorNode *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
  }
  operator_delete(this,0x28);
  return;
}



/* Expression::InputNode::~InputNode() */

void __thiscall Expression::InputNode::~InputNode(InputNode *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
  }
  operator_delete(this,0x18);
  return;
}



/* Expression::ConstantNode::~ConstantNode() */

void __thiscall Expression::ConstantNode::~ConstantNode(ConstantNode *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &PTR__ConstantNode_00110168;
  if (Variant::needs_deinit[*(int *)(this + 0x18)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__ENode_00110128;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
    return;
  }
  return;
}



/* Expression::NamedIndexNode::~NamedIndexNode() */

void __thiscall Expression::NamedIndexNode::~NamedIndexNode(NamedIndexNode *this)

{
  undefined8 *puVar1;
  bool bVar2;
  
  bVar2 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__NamedIndexNode_001101e8;
  if ((bVar2) && (*(long *)(this + 0x20) != 0)) {
    StringName::unref();
  }
  *(undefined ***)this = &PTR__ENode_00110128;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
    return;
  }
  return;
}



/* Expression::ConstantNode::~ConstantNode() */

void __thiscall Expression::ConstantNode::~ConstantNode(ConstantNode *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &PTR__ConstantNode_00110168;
  if (Variant::needs_deinit[*(int *)(this + 0x18)] != '\0') {
    Variant::_clear_internal();
  }
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
  }
  operator_delete(this,0x30);
  return;
}



/* Expression::NamedIndexNode::~NamedIndexNode() */

void __thiscall Expression::NamedIndexNode::~NamedIndexNode(NamedIndexNode *this)

{
  undefined8 *puVar1;
  bool bVar2;
  
  bVar2 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__NamedIndexNode_001101e8;
  if ((bVar2) && (*(long *)(this + 0x20) != 0)) {
    StringName::unref();
  }
  puVar1 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    Memory::free_static(puVar1,false);
  }
  operator_delete(this,0x28);
  return;
}



/* Expression::ArrayNode::~ArrayNode() */

void __thiscall Expression::ArrayNode::~ArrayNode(ArrayNode *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__ArrayNode_00110248;
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__ENode_00110128;
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
    return;
  }
  return;
}



/* Expression::DictionaryNode::~DictionaryNode() */

void __thiscall Expression::DictionaryNode::~DictionaryNode(DictionaryNode *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__DictionaryNode_00110268;
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__ENode_00110128;
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
    return;
  }
  return;
}



/* Expression::ConstructorNode::~ConstructorNode() */

void __thiscall Expression::ConstructorNode::~ConstructorNode(ConstructorNode *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__ConstructorNode_00110208;
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__ENode_00110128;
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
    return;
  }
  return;
}



/* Expression::ConstructorNode::~ConstructorNode() */

void __thiscall Expression::ConstructorNode::~ConstructorNode(ConstructorNode *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__ConstructorNode_00110208;
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  puVar2 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
  }
  operator_delete(this,0x28);
  return;
}



/* Expression::ArrayNode::~ArrayNode() */

void __thiscall Expression::ArrayNode::~ArrayNode(ArrayNode *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__ArrayNode_00110248;
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  puVar2 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
  }
  operator_delete(this,0x28);
  return;
}



/* Expression::DictionaryNode::~DictionaryNode() */

void __thiscall Expression::DictionaryNode::~DictionaryNode(DictionaryNode *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__DictionaryNode_00110268;
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  puVar2 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
  }
  operator_delete(this,0x28);
  return;
}



/* Expression::BuiltinFuncNode::~BuiltinFuncNode() */

void __thiscall Expression::BuiltinFuncNode::~BuiltinFuncNode(BuiltinFuncNode *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__BuiltinFuncNode_00110288;
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  *(undefined ***)this = &PTR__ENode_00110128;
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
    return;
  }
  return;
}



/* Expression::CallNode::~CallNode() */

void __thiscall Expression::CallNode::~CallNode(CallNode *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__CallNode_00110228;
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x20) != 0)) {
    StringName::unref();
  }
  *(undefined ***)this = &PTR__ENode_00110128;
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
    return;
  }
  return;
}



/* Expression::BuiltinFuncNode::~BuiltinFuncNode() */

void __thiscall Expression::BuiltinFuncNode::~BuiltinFuncNode(BuiltinFuncNode *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__BuiltinFuncNode_00110288;
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  puVar2 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
  }
  operator_delete(this,0x30);
  return;
}



/* Expression::CallNode::~CallNode() */

void __thiscall Expression::CallNode::~CallNode(CallNode *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__CallNode_00110228;
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x20) != 0)) {
    StringName::unref();
  }
  puVar2 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ENode_00110128;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    Memory::free_static(puVar2,false);
  }
  operator_delete(this,0x38);
  return;
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

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



/* Expression::get_class() const */

void Expression::get_class(void)

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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC7;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00108cac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00108cac:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC7;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00108e2c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00108e2c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
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
            if (lVar5 == 0) goto LAB_00108eef;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
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
LAB_00108eef:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00108fa3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_00109053;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
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
LAB_00109053:
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00108fa3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00108fa3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Expression::is_class(String const&) const */

undefined8 __thiscall Expression::is_class(Expression *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010917f;
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
LAB_0010917f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00109233;
  }
  cVar5 = String::operator==(param_1,"Expression");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00109233:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00109598:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109598;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001095b6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001095b6:
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



/* Expression::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Expression::_get_property_listv(Expression *this,List *param_1,bool param_2)

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
  local_78 = "Expression";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Expression";
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
LAB_00109998:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109998;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001099b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001099b5:
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
  StringName::StringName((StringName *)&local_78,"Expression",false);
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



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00109ec8) */
/* WARNING: Removing unreachable block (ram,0x00109ff8) */
/* WARNING: Removing unreachable block (ram,0x0010a1c0) */
/* WARNING: Removing unreachable block (ram,0x0010a004) */
/* WARNING: Removing unreachable block (ram,0x0010a00e) */
/* WARNING: Removing unreachable block (ram,0x0010a1a0) */
/* WARNING: Removing unreachable block (ram,0x0010a01a) */
/* WARNING: Removing unreachable block (ram,0x0010a024) */
/* WARNING: Removing unreachable block (ram,0x0010a180) */
/* WARNING: Removing unreachable block (ram,0x0010a030) */
/* WARNING: Removing unreachable block (ram,0x0010a03a) */
/* WARNING: Removing unreachable block (ram,0x0010a160) */
/* WARNING: Removing unreachable block (ram,0x0010a046) */
/* WARNING: Removing unreachable block (ram,0x0010a050) */
/* WARNING: Removing unreachable block (ram,0x0010a140) */
/* WARNING: Removing unreachable block (ram,0x0010a05c) */
/* WARNING: Removing unreachable block (ram,0x0010a066) */
/* WARNING: Removing unreachable block (ram,0x0010a120) */
/* WARNING: Removing unreachable block (ram,0x0010a072) */
/* WARNING: Removing unreachable block (ram,0x0010a07c) */
/* WARNING: Removing unreachable block (ram,0x0010a100) */
/* WARNING: Removing unreachable block (ram,0x0010a084) */
/* WARNING: Removing unreachable block (ram,0x0010a09a) */
/* WARNING: Removing unreachable block (ram,0x0010a0a6) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
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



/* WARNING: Removing unreachable block (ram,0x0010a348) */
/* WARNING: Removing unreachable block (ram,0x0010a478) */
/* WARNING: Removing unreachable block (ram,0x0010a5f0) */
/* WARNING: Removing unreachable block (ram,0x0010a484) */
/* WARNING: Removing unreachable block (ram,0x0010a48e) */
/* WARNING: Removing unreachable block (ram,0x0010a5d2) */
/* WARNING: Removing unreachable block (ram,0x0010a49a) */
/* WARNING: Removing unreachable block (ram,0x0010a4a4) */
/* WARNING: Removing unreachable block (ram,0x0010a5b4) */
/* WARNING: Removing unreachable block (ram,0x0010a4b0) */
/* WARNING: Removing unreachable block (ram,0x0010a4ba) */
/* WARNING: Removing unreachable block (ram,0x0010a596) */
/* WARNING: Removing unreachable block (ram,0x0010a4c6) */
/* WARNING: Removing unreachable block (ram,0x0010a4d0) */
/* WARNING: Removing unreachable block (ram,0x0010a578) */
/* WARNING: Removing unreachable block (ram,0x0010a4dc) */
/* WARNING: Removing unreachable block (ram,0x0010a4e6) */
/* WARNING: Removing unreachable block (ram,0x0010a55a) */
/* WARNING: Removing unreachable block (ram,0x0010a4ee) */
/* WARNING: Removing unreachable block (ram,0x0010a4f8) */
/* WARNING: Removing unreachable block (ram,0x0010a53f) */
/* WARNING: Removing unreachable block (ram,0x0010a500) */
/* WARNING: Removing unreachable block (ram,0x0010a515) */
/* WARNING: Removing unreachable block (ram,0x0010a521) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010a770) */
/* WARNING: Removing unreachable block (ram,0x0010a8a0) */
/* WARNING: Removing unreachable block (ram,0x0010aa19) */
/* WARNING: Removing unreachable block (ram,0x0010a8ac) */
/* WARNING: Removing unreachable block (ram,0x0010a8b6) */
/* WARNING: Removing unreachable block (ram,0x0010a9fb) */
/* WARNING: Removing unreachable block (ram,0x0010a8c2) */
/* WARNING: Removing unreachable block (ram,0x0010a8cc) */
/* WARNING: Removing unreachable block (ram,0x0010a9dd) */
/* WARNING: Removing unreachable block (ram,0x0010a8d8) */
/* WARNING: Removing unreachable block (ram,0x0010a8e2) */
/* WARNING: Removing unreachable block (ram,0x0010a9bf) */
/* WARNING: Removing unreachable block (ram,0x0010a8ee) */
/* WARNING: Removing unreachable block (ram,0x0010a8f8) */
/* WARNING: Removing unreachable block (ram,0x0010a9a1) */
/* WARNING: Removing unreachable block (ram,0x0010a904) */
/* WARNING: Removing unreachable block (ram,0x0010a90e) */
/* WARNING: Removing unreachable block (ram,0x0010a983) */
/* WARNING: Removing unreachable block (ram,0x0010a916) */
/* WARNING: Removing unreachable block (ram,0x0010a920) */
/* WARNING: Removing unreachable block (ram,0x0010a968) */
/* WARNING: Removing unreachable block (ram,0x0010a928) */
/* WARNING: Removing unreachable block (ram,0x0010a93e) */
/* WARNING: Removing unreachable block (ram,0x0010a94a) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010ab58) */
/* WARNING: Removing unreachable block (ram,0x0010ac88) */
/* WARNING: Removing unreachable block (ram,0x0010ae50) */
/* WARNING: Removing unreachable block (ram,0x0010ac94) */
/* WARNING: Removing unreachable block (ram,0x0010ac9e) */
/* WARNING: Removing unreachable block (ram,0x0010ae30) */
/* WARNING: Removing unreachable block (ram,0x0010acaa) */
/* WARNING: Removing unreachable block (ram,0x0010acb4) */
/* WARNING: Removing unreachable block (ram,0x0010ae10) */
/* WARNING: Removing unreachable block (ram,0x0010acc0) */
/* WARNING: Removing unreachable block (ram,0x0010acca) */
/* WARNING: Removing unreachable block (ram,0x0010adf0) */
/* WARNING: Removing unreachable block (ram,0x0010acd6) */
/* WARNING: Removing unreachable block (ram,0x0010ace0) */
/* WARNING: Removing unreachable block (ram,0x0010add0) */
/* WARNING: Removing unreachable block (ram,0x0010acec) */
/* WARNING: Removing unreachable block (ram,0x0010acf6) */
/* WARNING: Removing unreachable block (ram,0x0010adb0) */
/* WARNING: Removing unreachable block (ram,0x0010ad02) */
/* WARNING: Removing unreachable block (ram,0x0010ad0c) */
/* WARNING: Removing unreachable block (ram,0x0010ad90) */
/* WARNING: Removing unreachable block (ram,0x0010ad14) */
/* WARNING: Removing unreachable block (ram,0x0010ad2a) */
/* WARNING: Removing unreachable block (ram,0x0010ad36) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

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



/* MethodBind* create_method_bind<Expression, Error, String const&, Vector<String> const&>(Error
   (Expression::*)(String const&, Vector<String> const&)) */

MethodBind *
create_method_bind<Expression,Error,String_const&,Vector<String>const&>
          (_func_Error_String_ptr_Vector_ptr *param_1)

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
  *(_func_Error_String_ptr_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110408;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "Expression";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Expression, Variant, Array const&, Object*, bool, bool>(Variant
   (Expression::*)(Array const&, Object*, bool, bool)) */

MethodBind *
create_method_bind<Expression,Variant,Array_const&,Object*,bool,bool>
          (_func_Variant_Array_ptr_Object_ptr_bool_bool *param_1)

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
  *(_func_Variant_Array_ptr_Object_ptr_bool_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110468;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "Expression";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Expression, bool>(bool (Expression::*)() const) */

MethodBind * create_method_bind<Expression,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001104c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Expression";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<Expression, String>(String (Expression::*)() const) */

MethodBind * create_method_bind<Expression,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110528;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Expression";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
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



/* Expression::_initialize_classv() */

void Expression::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_0010be69;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_0010bf7a:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0010bf8a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010bf7a;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010bf8a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_48 = "RefCounted";
  local_58 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "Expression";
  local_60 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  _bind_methods();
  initialize_class()::initialized = '\x01';
LAB_0010be69:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Variant>::_realloc(long) */

undefined8 __thiscall CowData<Variant>::_realloc(CowData<Variant> *this,long param_1)

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



/* CowData<Variant const*>::_realloc(long) */

undefined8 __thiscall CowData<Variant_const*>::_realloc(CowData<Variant_const*> *this,long param_1)

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



/* CowData<Expression::ENode*>::_realloc(long) */

undefined8 __thiscall
CowData<Expression::ENode*>::_realloc(CowData<Expression::ENode*> *this,long param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Expression::ENode*>::resize<false>(long) */

undefined8 __thiscall
CowData<Expression::ENode*>::resize<false>(CowData<Expression::ENode*> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010c360:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_0010c360;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_0010c271;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0010c271:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<Expression::ExpressionNode>::_realloc(long) */

undefined8 __thiscall
CowData<Expression::ExpressionNode>::_realloc
          (CowData<Expression::ExpressionNode> *this,long param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Expression::ExpressionNode>::resize<false>(long) */

undefined8 __thiscall
CowData<Expression::ExpressionNode>::resize<false>
          (CowData<Expression::ExpressionNode> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 0x10;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0010c680:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x10 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar10 = uVar4 + 1;
  if (lVar10 == 0) goto LAB_0010c680;
  if (param_1 <= lVar9) {
    if ((lVar10 != lVar3) && (uVar7 = _realloc(this,lVar10), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar10 == lVar3) {
LAB_0010c5ec:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_0010c584;
  }
  else {
    if (lVar9 != 0) {
      uVar7 = _realloc(this,lVar10);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0010c5ec;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  puVar5 = puVar8 + lVar3 * 2;
  do {
    *(undefined1 *)puVar5 = 0;
    puVar6 = puVar5 + 2;
    puVar5[1] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar8 + param_1 * 2);
LAB_0010c584:
  puVar8[-1] = param_1;
  return 0;
}



/* Vector<Expression::ExpressionNode>::remove_at(long) */

void __thiscall
Vector<Expression::ExpressionNode>::remove_at(Vector<Expression::ExpressionNode> *this,long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_0010c789;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (param_1 < lVar1) {
      CowData<Expression::ExpressionNode>::_copy_on_write
                ((CowData<Expression::ExpressionNode> *)(this + 8));
      lVar1 = *(long *)(this + 8);
      if (lVar1 == 0) {
        lVar2 = -1;
      }
      else {
        lVar2 = *(long *)(lVar1 + -8) + -1;
        if (param_1 < lVar2) {
          memmove((void *)(lVar1 + param_1 * 0x10),(void *)(lVar1 + 0x10 + param_1 * 0x10),
                  ((*(long *)(lVar1 + -8) - param_1) + -1) * 0x10);
        }
      }
      CowData<Expression::ExpressionNode>::resize<false>
                ((CowData<Expression::ExpressionNode> *)(this + 8),lVar2);
      return;
    }
    goto LAB_0010c789;
  }
  lVar1 = 0;
LAB_0010c789:
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,param_1,lVar1,"p_index","size()","",false
             ,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010c8f8) */
/* WARNING: Removing unreachable block (ram,0x0010ca28) */
/* WARNING: Removing unreachable block (ram,0x0010cbf0) */
/* WARNING: Removing unreachable block (ram,0x0010ca34) */
/* WARNING: Removing unreachable block (ram,0x0010ca3e) */
/* WARNING: Removing unreachable block (ram,0x0010cbd0) */
/* WARNING: Removing unreachable block (ram,0x0010ca4a) */
/* WARNING: Removing unreachable block (ram,0x0010ca54) */
/* WARNING: Removing unreachable block (ram,0x0010cbb0) */
/* WARNING: Removing unreachable block (ram,0x0010ca60) */
/* WARNING: Removing unreachable block (ram,0x0010ca6a) */
/* WARNING: Removing unreachable block (ram,0x0010cb90) */
/* WARNING: Removing unreachable block (ram,0x0010ca76) */
/* WARNING: Removing unreachable block (ram,0x0010ca80) */
/* WARNING: Removing unreachable block (ram,0x0010cb70) */
/* WARNING: Removing unreachable block (ram,0x0010ca8c) */
/* WARNING: Removing unreachable block (ram,0x0010ca96) */
/* WARNING: Removing unreachable block (ram,0x0010cb50) */
/* WARNING: Removing unreachable block (ram,0x0010caa2) */
/* WARNING: Removing unreachable block (ram,0x0010caac) */
/* WARNING: Removing unreachable block (ram,0x0010cb30) */
/* WARNING: Removing unreachable block (ram,0x0010cab4) */
/* WARNING: Removing unreachable block (ram,0x0010caca) */
/* WARNING: Removing unreachable block (ram,0x0010cad6) */
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



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC105,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ce00;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((String *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar3 = local_58;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010ce00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10cc18;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
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
      goto LAB_0010d141;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar3 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar3 + -2,false);
    }
  }
LAB_0010d141:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10cc18;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
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
      goto LAB_0010d37e;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar3 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar3 + -2,false);
    }
  }
LAB_0010d37e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC105,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d5e0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010d5e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  Variant VVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d842;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar3;
LAB_0010d842:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010da41;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar3;
LAB_0010da41:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, Array const&, Object*, bool, bool>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Variant,Array_const&,Object*,bool,bool>::validated_call
          (MethodBindTR<Variant,Array_const&,Object*,bool,bool> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_58 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar4 = (long *)(local_60 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dc7b;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,
            *(undefined8 *)(param_2[1] + 0x10),param_2[2][8],param_2[3][8]);
  Variant::operator=(param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010dc7b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, Vector<String> const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&,Vector<String>const&>::validated_call
          (MethodBindTR<Error,String_const&,Vector<String>const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010decd;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2 + 8,*(long *)(param_2[1] + 8) + 0x10);
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_0010decd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, Vector<String> const&>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Error,String_const&,Vector<String>const&>::ptrcall
          (MethodBindTR<Error,String_const&,Vector<String>const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e0cd;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  *(ulong *)param_3 = (ulong)uVar3;
LAB_0010e0cd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, Array const&, Object*, bool, bool>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Variant,Array_const&,Object*,bool,bool>::ptrcall
          (MethodBindTR<Variant,Array_const&,Object*,bool,bool> *this,Object *param_1,void **param_2
          ,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_58 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar4 = (long *)(local_60 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e335;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  plVar4 = (long *)param_2[1];
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)*plVar4;
  }
  (*pcVar3)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2,plVar4,*param_2[2] != '\0'
            ,*param_2[3] != '\0');
  Variant::operator=((Variant *)param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010e335:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, Array const&, Object*, bool, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Variant,Array_const&,Object*,bool,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  Object *pOVar11;
  long *plVar12;
  Object *pOVar13;
  uint uVar14;
  int iVar15;
  undefined4 in_register_00000014;
  long *plVar16;
  Variant *pVVar17;
  long lVar18;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  Variant *local_c0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar16 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar16 != (long *)0x0) && (plVar16[1] != 0)) && (*(char *)(plVar16[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar16[1] == 0) {
      plVar12 = (long *)plVar16[0x23];
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(**(code **)(*plVar16 + 0x40))(plVar16);
      }
    }
    else {
      plVar12 = (long *)(plVar16[1] + 0x20);
    }
    if (local_98 == (char *)*plVar12) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC105,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0);
      pcVar5 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar16 = (long *)(local_98 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar18 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar16 = (long *)(local_a0 + -0x10);
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (*plVar16 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar18 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e761;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_c0 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar15 = 0;
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(pVVar2 + -8);
      iVar15 = (int)lVar18;
    }
    if ((int)(4 - in_R8D) <= iVar15) {
      lVar10 = 0;
      do {
        if ((int)lVar10 < (int)in_R8D) {
          pVVar17 = *(Variant **)(param_4 + lVar10 * 8);
        }
        else {
          uVar14 = iVar15 + -4 + (int)lVar10;
          if (lVar18 <= (int)uVar14) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar14,lVar18,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar17 = pVVar2 + (ulong)uVar14 * 0x18;
        }
        local_68[lVar10] = pVVar17;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 4);
      *in_R9 = 0;
      if (((ulong)local_c0 & 1) != 0) {
        local_c0 = *(Variant **)(local_c0 + *(long *)((long)plVar16 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],1);
      uVar4 = _LC109;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar7 = Variant::operator_cast_to_bool(local_68[3]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2],1);
      uVar4 = _LC110;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar8 = Variant::operator_cast_to_bool(local_68[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1],0x18);
      if (cVar6 == '\0') {
LAB_0010e68a:
        uVar4 = _LC111;
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      else {
        pOVar11 = Variant::operator_cast_to_Object_(local_68[1]);
        pOVar13 = Variant::operator_cast_to_Object_(local_68[1]);
        if ((pOVar11 != (Object *)0x0) && (pOVar13 == (Object *)0x0)) goto LAB_0010e68a;
      }
      pOVar11 = Variant::operator_cast_to_Object_(local_68[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],0x1c);
      uVar4 = _LC112;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Array((Variant *)&local_98);
      (*(code *)local_c0)(local_88,(Variant *)((long)plVar16 + (long)pVVar1),(Variant *)&local_98,
                          pOVar11,bVar8,bVar7);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      Array::~Array((Array *)&local_98);
      goto LAB_0010e761;
    }
    uVar9 = 4;
  }
  else {
    uVar9 = 3;
  }
  *in_R9 = uVar9;
  in_R9[2] = 4;
LAB_0010e761:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, String const&, Vector<String> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,Vector<String>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  Variant *pVVar13;
  uint in_R8D;
  undefined4 *in_R9;
  int iVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC105,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_68 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar11 = (long *)(local_70 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010eba9;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar12 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar12 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_0010ebe8;
      pVVar13 = *(Variant **)param_4;
LAB_0010ebfd:
      pVVar12 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      iVar14 = (int)lVar2;
      if (iVar14 < iVar7) {
LAB_0010ebe8:
        uVar8 = 4;
        goto LAB_0010ebd5;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar14 + -2);
        if (lVar2 <= lVar10) goto LAB_0010ecc0;
        pVVar13 = pVVar12 + lVar10 * 0x18;
      }
      else {
        pVVar13 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010ebfd;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar7));
      if (lVar2 <= lVar10) {
LAB_0010ecc0:
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
    if (((ulong)pVVar15 & 1) != 0) {
      pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x22);
    uVar4 = _LC113;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,4);
    uVar4 = _LC114;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_70);
    iVar7 = (*(code *)pVVar15)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_70,
                               (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,iVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar2 = local_70;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (local_70 != 0) {
      LOCK();
      plVar11 = (long *)(local_70 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_60);
  }
  else {
    uVar8 = 3;
LAB_0010ebd5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_0010eba9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Array const&, Object*, bool, bool>(int, PropertyInfo&) */

void call_get_argument_type_info<Array_const&,Object*,bool,bool>(int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  long lVar10;
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_68 = 0;
    local_58 = "";
    local_70 = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = (char *)CONCAT44(local_58._4_4_,0x1c);
LAB_0010eedf:
    local_40 = 0;
    local_38 = 0;
    local_50 = (undefined1  [16])0x0;
    if (local_70 == 0) {
LAB_0010ef68:
      local_30 = 6;
      StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
      local_30 = 6;
      if (local_40 != 0x11) goto LAB_0010ef68;
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
    *(undefined4 *)param_2 = local_58._0_4_;
    lVar2 = *(long *)(param_2 + 8);
    if (lVar2 != local_50._0_8_) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(param_2 + 8);
          *(undefined8 *)(param_2 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(undefined8 *)(param_2 + 8) = local_50._0_8_;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_50._8_8_;
      local_50 = auVar6 << 0x40;
    }
    if (*(long *)(param_2 + 0x10) != local_50._8_8_) {
      StringName::unref();
      uVar9 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar9;
    }
    lVar10 = local_38;
    *(int *)(param_2 + 0x18) = local_40;
    lVar2 = *(long *)(param_2 + 0x20);
    if (lVar2 == local_38) {
      *(undefined4 *)(param_2 + 0x28) = local_30;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
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
          lVar2 = *(long *)(param_2 + 0x20);
          *(undefined8 *)(param_2 + 0x20) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(long *)(param_2 + 0x20) = local_38;
      *(undefined4 *)(param_2 + 0x28) = local_30;
    }
    if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
      StringName::unref();
    }
  }
  else {
    if (param_1 != 1) {
      if ((param_1 != 2) && (param_1 != 3)) goto LAB_0010f09a;
      local_68 = 0;
      local_58 = "";
      local_70 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_50._8_8_;
      local_50 = auVar3 << 0x40;
      String::parse_latin1((StrRange *)&local_70);
      local_58 = (char *)CONCAT44(local_58._4_4_,1);
      goto LAB_0010eedf;
    }
    local_68 = 0;
    local_58 = "Object";
    local_50._0_8_ = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = (char *)CONCAT44(local_58._4_4_,0x18);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_50._8_8_;
    local_50 = auVar7 << 0x40;
    StringName::StringName((StringName *)(local_50 + 8),(StringName *)&local_60);
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
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
    *(undefined4 *)param_2 = local_58._0_4_;
    lVar2 = *(long *)(param_2 + 8);
    if (lVar2 != local_50._0_8_) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(param_2 + 8);
          *(undefined8 *)(param_2 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(undefined8 *)(param_2 + 8) = local_50._0_8_;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_50._8_8_;
      local_50 = auVar8 << 0x40;
    }
    if (*(long *)(param_2 + 0x10) != local_50._8_8_) {
      StringName::unref();
      uVar9 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar9;
    }
    lVar10 = local_38;
    *(int *)(param_2 + 0x18) = local_40;
    lVar2 = *(long *)(param_2 + 0x20);
    if (lVar2 == local_38) {
      *(undefined4 *)(param_2 + 0x28) = local_30;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
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
          lVar2 = *(long *)(param_2 + 0x20);
          *(undefined8 *)(param_2 + 0x20) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(long *)(param_2 + 0x20) = local_38;
      *(undefined4 *)(param_2 + 0x28) = local_30;
    }
    if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
      StringName::unref();
    }
  }
  uVar9 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
LAB_0010f09a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Variant, Array const&, Object*, bool, bool>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Variant,Array_const&,Object*,bool,bool>::_gen_argument_type_info(int param_1)

{
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  if (in_EDX < 4) {
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info<Array_const&,Object*,bool,bool>(in_EDX,(PropertyInfo *)&local_58);
    *puVar1 = (undefined4)local_58;
    *(undefined8 *)(puVar1 + 2) = local_50._0_8_;
    *(undefined8 *)(puVar1 + 4) = local_50._8_8_;
    puVar1[6] = (undefined4)local_40;
    *(undefined8 *)(puVar1 + 8) = local_38;
    puVar1[10] = local_30;
  }
  else {
    *puVar1 = 0;
    puVar1[6] = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[10] = 0x20006;
    *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_58);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, Vector<String> const&>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,Vector<String>const&>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_68 = 0;
    local_58 = &_LC7;
    local_70 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_50._8_8_;
    local_50 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,4);
  }
  else {
    if (param_1 != 1) goto LAB_0010f4ec;
    local_68 = 0;
    local_58 = &_LC7;
    local_70 = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,0x22);
  }
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_0010f5d8:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_0010f5d8;
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
  *(undefined4 *)param_2 = local_58._0_4_;
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_2 + 8);
        *(undefined8 *)(param_2 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_2 + 8) = local_50._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_50._8_8_;
    local_50 = auVar6 << 0x40;
  }
  if (*(long *)(param_2 + 0x10) != local_50._8_8_) {
    StringName::unref();
    uVar7 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar7;
  }
  lVar8 = local_38;
  *(int *)(param_2 + 0x18) = local_40;
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 == local_38) {
    *(undefined4 *)(param_2 + 0x28) = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
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
        lVar2 = *(long *)(param_2 + 0x20);
        *(undefined8 *)(param_2 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_2 + 0x20) = local_38;
    *(undefined4 *)(param_2 + 0x28) = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar7 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
LAB_0010f4ec:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, String const&, Vector<String> const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Error,String_const&,Vector<String>const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  long lVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_90;
  long local_88;
  long local_80;
  char local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  local_60._8_8_ = local_60._0_8_;
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,Vector<String>const&>
              (in_EDX,(PropertyInfo *)&local_68);
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar5 + 4) = local_60._8_8_;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
  }
  else {
    local_90 = 0;
    local_68 = "Error";
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_90);
    String::split(local_78,SUB81((StrRange *)&local_90,0),0x10f80e);
    if ((local_70 == 0) || (*(long *)(local_70 + -8) < 3)) {
      local_80 = 0;
      local_68 = ".";
      local_60._0_8_ = 1;
      String::parse_latin1((StrRange *)&local_80);
      String::join((Vector *)&local_88);
      lVar6 = local_80;
    }
    else {
      local_80 = 0;
      local_60._0_8_ = 1;
      local_68 = ".";
      String::parse_latin1((StrRange *)&local_80);
      if (local_70 == 0) {
        lVar4 = -2;
        lVar6 = 0;
LAB_0010fb22:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar6 = *(long *)(local_70 + -8);
      lVar4 = lVar6 + -2;
      if (lVar4 < 0) goto LAB_0010fb22;
      String::operator+((String *)&local_68,(String *)(local_70 + lVar4 * 8));
      String::operator+((String *)&local_88,(String *)&local_68);
      pcVar3 = local_68;
      lVar6 = local_80;
      if (local_68 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (undefined *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
          lVar6 = local_80;
        }
      }
    }
    local_80 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_70);
    StringName::StringName((StringName *)&local_68,(String *)&local_88,false);
    *puVar5 = 2;
    puVar5[6] = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    puVar5[10] = 0x10006;
    *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
      StringName::unref();
    }
    lVar6 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::CallNode::~CallNode() */

void __thiscall Expression::CallNode::~CallNode(CallNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::BuiltinFuncNode::~BuiltinFuncNode() */

void __thiscall Expression::BuiltinFuncNode::~BuiltinFuncNode(BuiltinFuncNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::ConstructorNode::~ConstructorNode() */

void __thiscall Expression::ConstructorNode::~ConstructorNode(ConstructorNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::DictionaryNode::~DictionaryNode() */

void __thiscall Expression::DictionaryNode::~DictionaryNode(DictionaryNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::ArrayNode::~ArrayNode() */

void __thiscall Expression::ArrayNode::~ArrayNode(ArrayNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::NamedIndexNode::~NamedIndexNode() */

void __thiscall Expression::NamedIndexNode::~NamedIndexNode(NamedIndexNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::ConstantNode::~ConstantNode() */

void __thiscall Expression::ConstantNode::~ConstantNode(ConstantNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::InputNode::~InputNode() */

void __thiscall Expression::InputNode::~InputNode(InputNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::OperatorNode::~OperatorNode() */

void __thiscall Expression::OperatorNode::~OperatorNode(OperatorNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::SelfNode::~SelfNode() */

void __thiscall Expression::SelfNode::~SelfNode(SelfNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::IndexNode::~IndexNode() */

void __thiscall Expression::IndexNode::~IndexNode(IndexNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Expression::ENode::~ENode() */

void __thiscall Expression::ENode::~ENode(ENode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Variant, Array const&, Object*, bool, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,Array_const&,Object*,bool,bool>::~MethodBindTR
          (MethodBindTR<Variant,Array_const&,Object*,bool,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&, Vector<String> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,Vector<String>const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,Vector<String>const&> *this)

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


