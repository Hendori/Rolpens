
/* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::_lookup_pos(int const&, unsigned int&) const
   [clone .isra.0] */

undefined8 __thiscall
HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
::_lookup_pos(HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
              *this,int *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar10 = ((uint)((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
  uVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(uint *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == (uint)param_1)) {
        *param_2 = uVar11;
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar11) - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* GDScriptSyntaxHighlighter::_get_name() const */

GDScriptSyntaxHighlighter * __thiscall
GDScriptSyntaxHighlighter::_get_name(GDScriptSyntaxHighlighter *this)

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



/* GDScriptSyntaxHighlighter::_create() const */

GDScriptSyntaxHighlighter * __thiscall
GDScriptSyntaxHighlighter::_create(GDScriptSyntaxHighlighter *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (Object *)0x0;
  Ref<GDScriptSyntaxHighlighter>::instantiate<>((Ref<GDScriptSyntaxHighlighter> *)&local_28);
  pOVar1 = local_28;
  *(undefined8 *)this = 0;
  if (local_28 == (Object *)0x0) goto LAB_00100275;
  lVar3 = __dynamic_cast(local_28,&Object::typeinfo,&EditorSyntaxHighlighter::typeinfo,0);
  if (lVar3 == 0) {
LAB_00100269:
    cVar2 = RefCounted::unreference();
  }
  else {
    *(long *)this = lVar3;
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') goto LAB_00100269;
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
  }
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
LAB_00100275:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RefCounted";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)PTR__bind_methods_00116008 != RefCounted::_bind_methods) {
      RefCounted::_bind_methods();
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "Resource";
  local_70 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
    Resource::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GDScriptSyntaxHighlighter::_get_line_syntax_highlighting_impl(int) */

Dictionary * GDScriptSyntaxHighlighter::_get_line_syntax_highlighting_impl(int param_1)

{
  HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
  *this;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined4 uVar19;
  bool bVar20;
  char cVar21;
  bool bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  int iVar26;
  wchar32 wVar27;
  int iVar28;
  undefined4 *puVar29;
  long lVar30;
  Variant *pVVar31;
  int *piVar32;
  long lVar33;
  long lVar34;
  uint *puVar35;
  wchar32 *pwVar36;
  wchar32 *pwVar37;
  undefined1 (*pauVar38) [16];
  int in_EDX;
  ulong uVar39;
  bool bVar40;
  uint uVar41;
  bool bVar42;
  uint uVar43;
  bool bVar44;
  int iVar45;
  long in_RSI;
  long lVar46;
  int iVar47;
  undefined4 in_register_0000003c;
  Dictionary *this_00;
  int *piVar48;
  int iVar49;
  int iVar50;
  wchar32 wVar51;
  uint uVar52;
  byte bVar53;
  uint uVar54;
  ulong uVar55;
  uint uVar56;
  ulong uVar57;
  long in_FS_OFFSET;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  byte bVar61;
  bool bVar62;
  uint local_1c0;
  int local_1bc;
  ulong local_1b8;
  bool local_1b0;
  ulong local_198;
  byte local_17d;
  uint local_160;
  int local_15c;
  CowData<char32_t> *local_158;
  int local_150;
  float local_14c;
  byte local_148;
  bool local_140;
  byte local_13f;
  byte local_13d;
  int local_13c;
  float local_138;
  float local_134;
  float local_130;
  int local_12c;
  ulong local_128;
  undefined1 local_118 [16];
  uint local_d8;
  byte local_d0;
  byte local_cf;
  int local_cc;
  undefined8 local_c8;
  long local_c0;
  Dictionary local_b8 [8];
  ulong local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 local_58 [16];
  long local_40;
  
  this_00 = (Dictionary *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_cc = in_EDX;
  Dictionary::Dictionary(this_00);
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"");
  uStack_90._4_4_ = _LC29;
  uStack_90._0_4_ = (float)_UNK_00113be8;
  this = (HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
          *)(in_RSI + 0x2f8);
  local_98 = (undefined1  [8])__LC20;
  puVar29 = (undefined4 *)
            HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
            ::operator[](this,&local_cc);
  *puVar29 = 0xffffffff;
  if (local_cc == 0) {
    TextEdit::get_line_with_ime((int)&local_c0);
    if ((local_c0 == 0) || (local_1c0 = (uint)*(undefined8 *)(local_c0 + -8), local_1c0 == 0))
    goto LAB_00100b4f;
    bVar59 = false;
    iVar50 = -1;
LAB_0010064c:
    local_158 = (CowData<char32_t> *)&local_c0;
    uVar41 = local_1c0 - 1;
    if (!(bool)(uVar41 == 0 & bVar59)) {
      if (0 < (int)uVar41) {
        local_118._12_4_ = _LC29;
        local_118._8_4_ = _UNK_00113be8;
        uVar54 = 0;
        local_cf = 0;
        local_13f = 0;
        local_d0 = 0;
        local_13d = 0;
        bVar53 = 0;
        bVar25 = 0;
        bVar15 = false;
        local_140 = false;
        bVar13 = false;
        bVar61 = 0;
        bVar18 = false;
        bVar59 = false;
        bVar62 = false;
        bVar12 = false;
        bVar11 = false;
        bVar20 = false;
        local_17d = 0;
        local_148 = 0;
        bVar16 = false;
        bVar14 = false;
        bVar17 = false;
        local_134 = 1.0;
        local_138 = 0.0;
        local_130 = 0.0;
        local_14c = 0.0;
        local_150 = 0;
        local_13c = 0;
        local_15c = 0;
        local_12c = 0;
        local_118._0_8_ = __LC20;
        local_1bc = 0;
LAB_00100781:
        uVar55 = (ulong)(int)uVar54;
        Dictionary::Dictionary(local_b8);
        _local_98 = *(undefined1 (*) [16])(in_RSI + 0x3e0);
        if (local_c0 == 0) {
          local_1b8 = 0;
        }
        else {
          local_1b8 = *(ulong *)(local_c0 + -8);
        }
        local_128 = uVar55;
        if (uVar55 == local_1b8) {
          wVar51 = (wchar32)String::_null;
          if ((wchar32)String::_null != L'_') {
LAB_001007e4:
            if ((uint)(wVar51 + L'\xffffffdf') < 0x40) {
              bVar40 = true;
              bVar22 = (0xfc000000fe007fffU >> ((ulong)(uint)(wVar51 + L'\xffffffdf') & 0x3f) & 1)
                       == 0;
              if (bVar22) goto LAB_00100fbd;
            }
            else {
              bVar22 = false;
              bVar40 = true;
              if (3 < (uint)(wVar51 + L'\xffffff85')) {
LAB_00100fbd:
                bVar40 = wVar51 == L'\t' || wVar51 == L' ';
                bVar22 = wVar51 != L'\t' && wVar51 != L' ';
              }
            }
            if ((uVar55 != local_1b8) && (((int)uVar54 < 0 || ((long)local_1b8 <= (long)uVar55))))
            goto LAB_00100b0e;
            goto LAB_0010081f;
          }
          local_d8 = 0x2f;
          bVar42 = false;
          bVar40 = false;
          bVar22 = true;
        }
        else {
          if ((long)local_1b8 <= (long)uVar55 || (int)uVar54 < 0) goto LAB_00100b0e;
          wVar51 = *(wchar32 *)(local_c0 + uVar55 * 4);
          if (wVar51 != L'_') goto LAB_001007e4;
          bVar22 = true;
          bVar40 = false;
LAB_0010081f:
          local_d8 = wVar51 + L'\xffffffd0';
          bVar42 = local_d8 < 10;
        }
        wVar51 = (wchar32)local_158;
        lVar33 = local_c0;
        if (iVar50 == -1 && !bVar40) {
          bVar60 = false;
          if (0 < (int)uVar54) {
LAB_00100d75:
            if (lVar33 == 0) {
              local_1b8 = 0;
              local_128 = uVar55;
              goto LAB_00100b0e;
            }
            local_1b8 = *(ulong *)(lVar33 + -8);
            if (uVar55 == local_1b8) {
              if ((1 < (uint)((wchar32)String::_null + L'\xffffffdb')) &&
                 (wVar27 = (wchar32)String::_null, ((wchar32)String::_null & 0xffffffdfU) != 0x5e))
              {
LAB_00100db3:
                if (((wVar27 + L'\xffffffd5' & 0xfffffffdU) != 0) &&
                   (bVar60 = false, wVar27 != L'.')) goto LAB_00100dcd;
              }
            }
            else {
              local_128 = uVar55;
              if ((long)local_1b8 <= (long)uVar55) goto LAB_00100b0e;
              wVar27 = *(wchar32 *)(lVar33 + uVar55 * 4);
              if (1 < (uint)(wVar27 + L'\xffffffdb') && (wVar27 & 0xffffffdfU) != 0x5e)
              goto LAB_00100db3;
            }
            iVar50 = uVar54 - 1;
            if (iVar50 != 0) {
              local_128 = (ulong)iVar50;
              pwVar36 = (wchar32 *)(lVar33 + local_128 * 4);
              do {
                if (local_1b8 == local_128) {
                  pwVar37 = (wchar32 *)&String::_null;
                }
                else {
                  pwVar37 = pwVar36;
                  if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
                }
                cVar21 = is_whitespace(*pwVar37);
                if (cVar21 == '\0') {
                  local_128 = (ulong)iVar50;
                  pwVar36 = (wchar32 *)(lVar33 + local_128 * 4);
                  iVar49 = iVar50;
                  goto LAB_0010137a;
                }
                local_128 = local_128 - 1;
                pwVar36 = pwVar36 + -1;
                iVar50 = iVar50 + -1;
              } while (iVar50 != 0);
            }
            goto LAB_001020d1;
          }
          goto LAB_00100dde;
        }
        if (iVar50 == -1) {
          local_160 = uVar54;
          if ((int)uVar54 < (int)uVar41) {
            piVar32 = (int *)(local_c0 + uVar55 * 4);
            do {
              if (local_1b8 == local_128) {
                piVar48 = (int *)&String::_null;
              }
              else if (((int)local_160 < 0) ||
                      (piVar48 = piVar32, (long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
              if (*piVar48 != 0x5c) {
                if (uVar41 == local_160) goto LAB_00101be6;
                if (0 < (int)local_160) goto LAB_00101aed;
                local_1b0 = false;
                goto LAB_00101b0e;
              }
              local_160 = local_160 + 2;
              local_128 = local_128 + 2;
              piVar32 = piVar32 + 2;
            } while ((int)local_160 < (int)uVar41);
            if (local_160 != uVar41) goto LAB_00101aed;
          }
          else {
            if (uVar41 == uVar54) goto LAB_00100d75;
LAB_00101aed:
            local_128 = (ulong)(int)(local_160 - 1);
            if (local_1b8 == local_128) {
              piVar32 = (int *)&String::_null;
            }
            else {
              if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
              piVar32 = (int *)(local_c0 + local_128 * 4);
            }
            local_1b0 = *piVar32 == 0x72;
LAB_00101b0e:
            lVar30 = *(long *)(in_RSI + 0x2f0);
            if (lVar30 != 0) {
              uVar39 = (ulong)(int)local_160;
              uVar57 = 0;
              do {
                if (*(long *)(lVar30 + -8) <= (long)uVar57) break;
                lVar46 = uVar57 * 0x30;
                lVar34 = lVar30 + lVar46;
                if (*(long *)(lVar34 + 0x18) == 0) {
                  iVar50 = 0;
                }
                else {
                  iVar50 = (int)*(undefined8 *)(*(long *)(lVar34 + 0x18) + -8);
                  iVar50 = iVar50 + -1 + (uint)(iVar50 == 0);
                }
                if (*(long *)(lVar34 + 0x20) == 0) {
                  iVar49 = 0;
                }
                else {
                  iVar49 = (int)*(undefined8 *)(*(long *)(lVar34 + 0x20) + -8);
                  iVar49 = iVar49 + -1 + (uint)(iVar49 == 0);
                }
                if ((iVar50 <= (int)(uVar41 - local_160)) &&
                   ((*(char *)(lVar34 + 0x2a) == '\0' ||
                    ((bool)*(char *)(lVar34 + 0x29) == local_1b0)))) {
                  lVar33 = String::get_data();
                  if (iVar50 < 1) {
LAB_00101c9a:
                    lVar33 = *(long *)(in_RSI + 0x2f0);
                    local_160 = iVar50 + local_160;
                    iVar50 = (int)uVar57;
                    local_128 = uVar57;
                    if (iVar49 == 0) {
                      if (lVar33 != 0) {
                        local_1b8 = *(ulong *)(lVar33 + -8);
                        if ((long)uVar57 < (long)local_1b8) goto LAB_00102e70;
                        goto LAB_00100b0e;
                      }
                    }
                    else if (lVar33 != 0) {
                      local_1b8 = *(ulong *)(lVar33 + -8);
                      if ((long)local_1b8 <= (long)uVar57) goto LAB_00100b0e;
                      if ((*(char *)(lVar33 + 0x28 + lVar46) == '\0') &&
                         ((int)(local_160 + iVar49) <= (int)uVar41)) {
                        uVar55 = (ulong)iVar50;
                        goto LAB_0010086d;
                      }
LAB_00102e70:
                      if (*(char *)(lVar33 + 0x2b + lVar46) != '\0') {
LAB_00103076:
                        uVar55 = (ulong)iVar50;
                        goto LAB_00100864;
                      }
                      if ((int)uVar41 < (int)(local_160 + iVar49)) {
                        iVar49 = String::find_char(wVar51,0x5c);
                        if (-1 < iVar49) {
                          lVar33 = *(long *)(in_RSI + 0x2f0);
                          goto LAB_00103076;
                        }
                        lVar33 = *(long *)(in_RSI + 0x2f0);
                        if (lVar33 == 0) goto LAB_00103e02;
                        local_1b8 = *(ulong *)(lVar33 + -8);
                        if ((long)local_1b8 <= (long)uVar57) goto LAB_00100b0e;
                      }
                      lVar33 = lVar33 + lVar46;
                      local_14c = *(float *)(lVar33 + 4);
                      local_130 = *(float *)(lVar33 + 8);
                      local_138 = *(float *)(lVar33 + 0xc);
                      local_134 = *(float *)(lVar33 + 0x10);
                      Variant::Variant((Variant *)local_58,(Color *)(lVar33 + 4));
                      Variant::Variant((Variant *)local_78,"color");
                      pVVar31 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
                      Variant::operator=(pVVar31,(Variant *)local_58);
                      if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
                        Variant::_clear_internal();
                      }
                      Variant::Variant((Variant *)local_58,local_b8);
                      Variant::Variant((Variant *)local_78,uVar54);
                      pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
                      Variant::operator=(pVVar31,(Variant *)local_58);
                      if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
                        Variant::_clear_internal();
                      }
                      lVar33 = *(long *)(in_RSI + 0x2f0);
                      if (lVar33 != 0) {
                        local_1b8 = *(ulong *)(lVar33 + -8);
                        if ((long)local_1b8 <= (long)uVar57) goto LAB_00100b0e;
                        uVar55 = (ulong)iVar50;
                        if (*(char *)(lVar33 + 0x28 + lVar46) == '\0') {
                          piVar32 = (int *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                                           ::operator[](this,&local_cc);
                          lVar33 = *(long *)(in_RSI + 0x2f0);
                          *piVar32 = iVar50;
                          if (lVar33 == 0) goto LAB_001014d5;
                          local_1b8 = *(ulong *)(lVar33 + -8);
                        }
                        if ((long)local_1b8 <= (long)uVar55) goto LAB_00102326;
                        uVar54 = uVar41;
                        uVar56 = local_1c0;
                        if (*(char *)(lVar33 + 0x2b + lVar46) != '\0') goto LAB_0010086d;
                        goto LAB_00101dce;
                      }
                    }
LAB_00103e02:
                    local_1b8 = 0;
                    goto LAB_00100b0e;
                  }
                  piVar32 = (int *)(uVar39 * 4 + local_c0);
                  local_128 = uVar39;
                  while( true ) {
                    if (local_c0 == 0) {
                      local_1b8 = 0;
                    }
                    else {
                      local_1b8 = *(ulong *)(local_c0 + -8);
                    }
                    if (local_128 == local_1b8) {
                      piVar48 = (int *)&String::_null;
                    }
                    else if (((int)local_128 < 0) ||
                            (piVar48 = piVar32, (long)local_1b8 <= (long)local_128))
                    goto LAB_00100b0e;
                    if (*(int *)(lVar33 + uVar39 * -4 + local_128 * 4) != *piVar48) break;
                    local_128 = local_128 + 1;
                    piVar32 = piVar32 + 1;
                    if ((long)iVar50 + uVar39 == local_128) goto LAB_00101c9a;
                  }
                  lVar30 = *(long *)(in_RSI + 0x2f0);
                  lVar33 = local_c0;
                }
                uVar57 = uVar57 + 1;
              } while (lVar30 != 0);
            }
          }
LAB_00101be6:
          if (0 < (int)uVar54) goto LAB_00100d75;
          bVar60 = false;
          goto LAB_00100dcd;
        }
        uVar55 = (ulong)iVar50;
        lVar33 = *(long *)(in_RSI + 0x2f0);
        local_160 = uVar54;
        if ((long)uVar55 < 0) {
LAB_00102317:
          if (lVar33 != 0) {
LAB_00102326:
            local_1b8 = *(ulong *)(lVar33 + -8);
            local_128 = uVar55;
            goto LAB_00100b0e;
          }
LAB_001014d5:
          local_1b8 = 0;
          local_128 = uVar55;
          goto LAB_00100b0e;
        }
LAB_00100864:
        if (lVar33 == 0) goto LAB_001014d5;
LAB_0010086d:
        if (*(long *)(lVar33 + -8) <= (long)uVar55) goto LAB_00102317;
        lVar30 = uVar55 * 0x30;
        piVar32 = (int *)(lVar33 + lVar30);
        local_88 = *(undefined8 *)(piVar32 + 1);
        uStack_80 = *(undefined8 *)(piVar32 + 3);
        if (bVar11) {
          if (*piVar32 != 1) {
            if (bVar12) goto LAB_001008b3;
            goto LAB_001013e1;
          }
          local_88 = *(undefined8 *)(in_RSI + 0x470);
          uStack_80 = *(undefined8 *)(in_RSI + 0x478);
          if (bVar12) goto LAB_001025b5;
joined_r0x0010256e:
          if (!bVar62) goto LAB_001008b3;
LAB_001013f5:
          local_88 = *(undefined8 *)(in_RSI + 0x4a0);
          uStack_80 = *(undefined8 *)(in_RSI + 0x4a8);
        }
        else if (bVar12) {
          if (*piVar32 == 1) {
LAB_001025b5:
            local_88 = *(undefined8 *)(in_RSI + 0x480);
            uStack_80 = *(undefined8 *)(in_RSI + 0x488);
            goto joined_r0x0010256e;
          }
        }
        else {
LAB_001013e1:
          if ((bVar62) && (*piVar32 == 1)) goto LAB_001013f5;
        }
LAB_001008b3:
        local_14c = (float)local_88;
        local_130 = local_88._4_4_;
        local_138 = (float)uStack_80;
        local_134 = uStack_80._4_4_;
        Variant::Variant((Variant *)local_58,(Color *)&local_88);
        Variant::Variant((Variant *)local_78,"color");
        pVVar31 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
        Variant::operator=(pVVar31,(Variant *)local_58);
        if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,local_b8);
        Variant::Variant((Variant *)local_78,uVar54);
        pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
        Variant::operator=(pVVar31,(Variant *)local_58);
        if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        lVar33 = *(long *)(in_RSI + 0x2f0);
        if (lVar33 == 0) goto LAB_001014d5;
        local_1b8 = *(ulong *)(lVar33 + -8);
        local_128 = uVar55;
        if ((long)local_1b8 <= (long)uVar55) goto LAB_00100b0e;
        if (*(char *)(lVar33 + lVar30 + 0x2b) == '\0') {
          lVar33 = *(long *)(lVar33 + lVar30 + 0x20);
          if (lVar33 == 0) {
            iVar49 = 0;
          }
          else {
            iVar49 = (int)*(undefined8 *)(lVar33 + -8);
            iVar49 = iVar49 + -1 + (uint)(iVar49 == 0);
          }
          lVar33 = String::get_data();
          while (((int)local_160 < (int)uVar41 &&
                 ((iVar49 <= (int)(uVar41 - local_160) ||
                  (iVar26 = String::find_char(wVar51,0x5c), -1 < iVar26))))) {
            lVar34 = local_c0;
            local_128 = (ulong)(int)local_160;
            if (local_c0 == 0) {
              local_1b8 = 0;
            }
            else {
              local_1b8 = *(ulong *)(local_c0 + -8);
            }
            wVar27 = (wchar32)String::_null;
            if (local_128 != local_1b8) {
              if (((long)local_128 < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
              wVar27 = *(wchar32 *)(local_c0 + local_128 * 4);
            }
            cVar21 = is_symbol(wVar27);
            if (cVar21 == '\0') {
LAB_00102a90:
              local_160 = local_160 + 1;
            }
            else {
              if (wVar27 != L'\\') {
                if (0 < iVar49) {
                  piVar32 = (int *)(lVar34 + local_128 * 4);
                  lVar34 = local_128 * -4;
                  uVar39 = (long)iVar49 + local_128;
                  do {
                    if (local_1b8 == local_128) {
                      piVar48 = (int *)&String::_null;
                    }
                    else if (((long)local_1b8 <= (long)local_128) ||
                            (piVar48 = piVar32, (long)local_128 < 0)) goto LAB_00100b0e;
                    if (*(int *)(lVar33 + lVar34 + local_128 * 4) != *piVar48) goto LAB_00102a90;
                    local_128 = local_128 + 1;
                    piVar32 = piVar32 + 1;
                  } while (local_128 != uVar39);
                }
                if (local_160 == 0xffffffff) goto LAB_00102a90;
                uVar56 = local_160 + iVar49;
                goto LAB_00101da5;
              }
              lVar34 = *(long *)(in_RSI + 0x2f0);
              if (lVar34 == 0) {
LAB_00103bff:
                local_1b8 = 0;
                local_128 = uVar55;
                goto LAB_00100b0e;
              }
              local_1b8 = *(ulong *)(lVar34 + -8);
              local_128 = uVar55;
              if ((long)local_1b8 <= (long)uVar55) goto LAB_00100b0e;
              if (*(char *)(lVar34 + 0x29 + lVar30) == '\0') {
                Dictionary::Dictionary((Dictionary *)&local_a0);
                Variant::Variant((Variant *)local_58,(Color *)(in_RSI + 0x3f0));
                Variant::Variant((Variant *)local_78,"color");
                pVVar31 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
                Variant::operator=(pVVar31,(Variant *)local_58);
                if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
                  Variant::_clear_internal();
                }
                Variant::Variant((Variant *)local_58,(Dictionary *)&local_a0);
                Variant::Variant((Variant *)local_78,local_160);
                pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
                Variant::operator=(pVVar31,(Variant *)local_58);
                if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
                  Variant::_clear_internal();
                }
                Dictionary::~Dictionary((Dictionary *)&local_a0);
                lVar34 = *(long *)(in_RSI + 0x2f0);
                if (lVar34 == 0) goto LAB_00103bff;
                local_1b8 = *(ulong *)(lVar34 + -8);
                if ((long)local_1b8 <= (long)uVar55) goto LAB_00100b0e;
              }
              if (*(char *)(lVar34 + 0x29 + lVar30) == '\0') {
                iVar26 = local_160 + 1;
                local_128 = (ulong)iVar26;
                if (local_c0 == 0) {
                  local_1b8 = 0;
                }
                else {
                  local_1b8 = *(ulong *)(local_c0 + -8);
                }
                iVar45 = iVar26;
                if (local_128 == local_1b8) {
                  wVar27 = (wchar32)String::_null;
                  if ((wchar32)String::_null != L'u') goto LAB_00101f51;
LAB_0010380f:
                  iVar47 = 4;
LAB_00103814:
                  if (iVar26 < (int)(local_1c0 - 2)) {
                    do {
                      local_128 = local_128 + 1;
                      iVar28 = iVar45 + 1;
                      if (local_1b8 == local_128) {
                        piVar32 = (int *)&String::_null;
                      }
                      else {
                        if (((long)local_1b8 <= (long)local_128) || (iVar28 < 0)) goto LAB_00100b0e;
                        piVar32 = (int *)(local_c0 + local_128 * 4);
                      }
                    } while ((((*piVar32 - 0x30U < 0x37) &&
                              ((0x7e0000007e03ffU >> ((ulong)(*piVar32 - 0x30U) & 0x3f) & 1) != 0))
                             && (iVar45 = iVar28, iVar28 != iVar47 + iVar26)) &&
                            (iVar28 != local_1c0 - 2));
                  }
                }
                else {
                  if ((iVar26 < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
                  wVar27 = *(wchar32 *)(local_c0 + local_128 * 4);
                  if (wVar27 == L'u') goto LAB_0010380f;
LAB_00101f51:
                  iVar47 = 6;
                  if (wVar27 == L'U') goto LAB_00103814;
                }
                Dictionary::Dictionary((Dictionary *)&local_a0);
                Variant::Variant((Variant *)local_58,(Color *)&local_88);
                Variant::Variant((Variant *)local_78,"color");
                pVVar31 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
                Variant::operator=(pVVar31,(Variant *)local_58);
                if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
                  Variant::_clear_internal();
                }
                local_160 = iVar45 + 1;
                Variant::Variant((Variant *)local_58,(Dictionary *)&local_a0);
                Variant::Variant((Variant *)local_78,local_160);
                pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
                Variant::operator=(pVVar31,(Variant *)local_58);
                if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
                  Variant::_clear_internal();
                }
                Dictionary::~Dictionary((Dictionary *)&local_a0);
              }
              else {
                local_160 = local_160 + 2;
              }
            }
          }
          piVar32 = (int *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                           ::operator[](this,&local_cc);
          *piVar32 = iVar50;
          uVar56 = local_160 + iVar49;
        }
        else {
          uVar56 = uVar41;
          if ((int)local_160 <= (int)uVar41) {
            iVar50 = 0;
            local_198 = (ulong)(int)local_160;
            uVar54 = local_160;
            do {
              uVar43 = uVar54 + 1;
              if ((int)uVar54 < (int)uVar41) {
                if (local_c0 == 0) {
                  local_1b8 = 0;
                }
                else {
                  local_1b8 = *(ulong *)(local_c0 + -8);
                }
                if (local_198 == local_1b8) {
                  puVar35 = (uint *)&String::_null;
                }
                else {
                  local_128 = local_198;
                  if (((long)local_1b8 <= (long)local_198) || ((long)local_198 < 0))
                  goto LAB_00100b0e;
                  puVar35 = (uint *)(local_c0 + local_198 * 4);
                }
                uVar52 = 0xf900;
                iVar45 = 799;
                iVar49 = 0;
                iVar26 = 399;
                while( true ) {
                  if (*puVar35 < uVar52) {
                    iVar45 = iVar26 + -1;
                  }
                  else {
                    if (*puVar35 <= *(uint *)(xid_continue + (long)iVar26 * 8 + 4)) {
                      iVar50 = iVar50 + 1;
                      goto LAB_00101d7d;
                    }
                    iVar49 = iVar26 + 1;
                  }
                  iVar26 = (iVar49 + iVar45) / 2;
                  if (iVar45 < iVar49) break;
                  uVar52 = *(uint *)(xid_continue + (long)iVar26 * 8);
                }
              }
              if (0 < iVar50) {
                String::substr((int)(CowData<char32_t> *)&local_a0,wVar51);
                local_a8 = 0;
                cVar21 = HashMap<String,GDScriptSyntaxHighlighter::CommentMarkerLevel,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptSyntaxHighlighter::CommentMarkerLevel>>>
                         ::_lookup_pos((HashMap<String,GDScriptSyntaxHighlighter::CommentMarkerLevel,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptSyntaxHighlighter::CommentMarkerLevel>>>
                                        *)(in_RSI + 0x4f0),(String *)&local_a0,&local_a8);
                if (cVar21 == '\0') {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                }
                else {
                  uVar55 = *(ulong *)(*(long *)(in_RSI + 0x4f8) + (ulong)local_a8 * 8);
                  local_b0 = uVar55;
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                  if (uVar55 != 0) {
                    Dictionary::Dictionary((Dictionary *)&local_a8);
                    Variant::Variant((Variant *)local_58,
                                     (Color *)(((long)*(int *)(uVar55 + 0x18) + 0x4c) * 0x10 +
                                              in_RSI));
                    Variant::Variant((Variant *)local_78,"color");
                    pVVar31 = (Variant *)Dictionary::operator[]((Variant *)&local_a8);
                    Variant::operator=(pVVar31,(Variant *)local_58);
                    if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
                      Variant::_clear_internal();
                    }
                    Variant::Variant((Variant *)local_58,(Dictionary *)&local_a8);
                    Variant::Variant((Variant *)local_78,local_160);
                    pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
                    Variant::operator=(pVVar31,(Variant *)local_58);
                    if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
                      Variant::_clear_internal();
                    }
                    Dictionary::Dictionary((Dictionary *)&local_a0);
                    Variant::Variant((Variant *)local_58,(Color *)&local_88);
                    Variant::Variant((Variant *)local_78,"color");
                    pVVar31 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
                    Variant::operator=(pVVar31,(Variant *)local_58);
                    if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
                      Variant::_clear_internal();
                    }
                    Variant::Variant((Variant *)local_58,(Dictionary *)&local_a0);
                    Variant::Variant((Variant *)local_78,uVar54);
                    pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
                    Variant::operator=(pVVar31,(Variant *)local_58);
                    if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
                      Variant::_clear_internal();
                    }
                    Dictionary::~Dictionary((Dictionary *)&local_a0);
                    Dictionary::~Dictionary((Dictionary *)&local_a8);
                  }
                }
              }
              iVar50 = 0;
              local_160 = uVar43;
LAB_00101d7d:
              local_198 = local_198 + 1;
              uVar54 = uVar43;
            } while ((int)uVar43 <= (int)uVar41);
          }
        }
LAB_00101da5:
        iVar50 = -1;
        String::parse_latin1((String *)&local_c8,"");
        bVar16 = false;
        bVar14 = false;
        bVar17 = false;
LAB_00101dce:
        Dictionary::~Dictionary(local_b8);
        uVar54 = uVar56;
        goto LAB_00101a89;
      }
      goto LAB_00100b4f;
    }
  }
  else {
    uVar41 = local_cc - 1;
    if (0 < (int)uVar41) {
      uVar54 = uVar41;
      if (*(long *)(in_RSI + 0x300) == 0) {
        do {
          uVar54 = uVar54 - 1;
        } while (uVar54 != 0);
        uVar56 = 0;
      }
      else {
        do {
          if (*(int *)(in_RSI + 0x324) != 0) {
            uVar39 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(in_RSI + 800) * 4));
            uVar55 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 800) * 8);
            uVar56 = (uVar54 >> 0x10 ^ uVar54) * -0x7a143595;
            uVar56 = (uVar56 ^ uVar56 >> 0xd) * -0x3d4d51cb;
            uVar43 = uVar56 ^ uVar56 >> 0x10;
            if (uVar56 == uVar56 >> 0x10) {
              uVar43 = 1;
              uVar57 = uVar55;
            }
            else {
              uVar57 = uVar43 * uVar55;
            }
            uVar52 = 0;
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar39;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar57;
            lVar33 = SUB168(auVar1 * auVar5,8);
            uVar56 = *(uint *)(*(long *)(in_RSI + 0x308) + lVar33 * 4);
            iVar50 = SUB164(auVar1 * auVar5,8);
            if (uVar56 != 0) {
              do {
                if ((uVar43 == uVar56) &&
                   (uVar56 = *(uint *)(*(long *)(*(long *)(in_RSI + 0x300) + lVar33 * 8) + 0x10),
                   uVar54 == uVar56)) {
                  if ((int)uVar41 <= (int)uVar54) goto LAB_00100ccf;
                  goto LAB_00100c9e;
                }
                uVar52 = uVar52 + 1;
                auVar2._8_8_ = 0;
                auVar2._0_8_ = (iVar50 + 1) * uVar55;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar39;
                lVar33 = SUB168(auVar2 * auVar6,8);
                uVar56 = *(uint *)(*(long *)(in_RSI + 0x308) + lVar33 * 4);
                iVar50 = SUB164(auVar2 * auVar6,8);
              } while ((uVar56 != 0) &&
                      (auVar3._8_8_ = 0, auVar3._0_8_ = uVar56 * uVar55, auVar7._8_8_ = 0,
                      auVar7._0_8_ = uVar39, auVar4._8_8_ = 0,
                      auVar4._0_8_ = ((*(uint *)(hash_table_size_primes +
                                                (ulong)*(uint *)(in_RSI + 800) * 4) + iVar50) -
                                     SUB164(auVar3 * auVar7,8)) * uVar55, auVar8._8_8_ = 0,
                      auVar8._0_8_ = uVar39, uVar52 <= SUB164(auVar4 * auVar8,8)));
            }
          }
          uVar54 = uVar54 - 1;
        } while (uVar54 != 0);
        uVar56 = 0;
      }
LAB_00100c9e:
      do {
        uVar56 = uVar56 + 1;
        SyntaxHighlighter::get_line_syntax_highlighting((int)(Dictionary *)&local_a0);
        Dictionary::~Dictionary((Dictionary *)&local_a0);
      } while (uVar41 != uVar56);
    }
LAB_00100ccf:
    cVar21 = HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
             ::_lookup_pos(this,(int *)(ulong)uVar41,&local_a0);
    if (cVar21 == '\0') {
      SyntaxHighlighter::get_line_syntax_highlighting((int)(Dictionary *)&local_a0);
      Dictionary::~Dictionary((Dictionary *)&local_a0);
    }
    local_a0 = uVar41;
    piVar32 = (int *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                     ::operator[](this,(int *)&local_a0);
    iVar50 = *piVar32;
    TextEdit::get_line_with_ime((int)&local_c0);
    if ((local_c0 != 0) && (local_1c0 = (uint)*(undefined8 *)(local_c0 + -8), local_1c0 != 0)) {
      bVar59 = iVar50 != -1;
      goto LAB_0010064c;
    }
    if (iVar50 == -1) goto LAB_00100b4f;
  }
  piVar32 = (int *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                   ::operator[](this,&local_cc);
  *piVar32 = iVar50;
LAB_00100b4f:
  local_158 = (CowData<char32_t> *)&local_c0;
  CowData<char32_t>::_unref(local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
  while( true ) {
    local_128 = local_128 - 1;
    pwVar36 = pwVar36 + -1;
    iVar49 = iVar49 + -1;
    if (iVar49 == 0) break;
LAB_0010137a:
    if (local_1b8 == local_128) {
      pwVar37 = (wchar32 *)&String::_null;
    }
    else {
      pwVar37 = pwVar36;
      if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
    }
    cVar21 = is_symbol(*pwVar37);
    if (cVar21 != '\0') break;
  }
LAB_001020d1:
  String::substr((int)(String *)&local_a8,wVar51);
  cVar21 = String::operator==((String *)&local_a8,"true");
  if (((((cVar21 == '\0') &&
        (cVar21 = String::operator==((String *)&local_a8,"false"), cVar21 == '\0')) &&
       (cVar21 = String::operator==((String *)&local_a8,"null"), cVar21 == '\0')) &&
      (((cVar21 = String::operator==((String *)&local_a8,"PI"), cVar21 == '\0' &&
        (cVar21 = String::operator==((String *)&local_a8,"TAU"), cVar21 == '\0')) &&
       ((cVar21 = String::operator==((String *)&local_a8,"INF"), cVar21 == '\0' &&
        ((cVar21 = String::operator==((String *)&local_a8,"NAN"), cVar21 == '\0' &&
         (cVar21 = String::operator==((String *)&local_a8,"self"), cVar21 == '\0')))))))) &&
     (cVar21 = String::operator==((String *)&local_a8,"super"), cVar21 == '\0')) {
    StringName::StringName((StringName *)&local_a0,(String *)&local_a8,false);
    local_b0 = local_b0 & 0xffffffff00000000;
    cVar21 = HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
             ::_lookup_pos((HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                            *)(in_RSI + 0x358),(StringName *)&local_a0,(uint *)&local_b0);
    if (cVar21 == '\0') {
      if ((StringName::configured != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
        StringName::unref();
      }
      goto LAB_0010210d;
    }
    bVar60 = false;
    if ((StringName::configured != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
      StringName::unref();
    }
LAB_0010216a:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    lVar33 = local_c0;
LAB_00100dcd:
    if (bVar40) {
      local_148 = 0;
    }
LAB_00100dde:
    if (bVar13 == false) {
LAB_00100de9:
      if (lVar33 == 0) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = *(ulong *)(lVar33 + -8);
      }
      if (uVar55 == local_1b8) {
        piVar32 = (int *)&String::_null;
      }
      else {
        local_128 = uVar55;
        if (((long)local_1b8 <= (long)uVar55) || ((int)uVar54 < 0)) goto LAB_00100b0e;
        piVar32 = (int *)(lVar33 + uVar55 * 4);
      }
      bVar58 = bVar42;
      bVar44 = bVar13;
      if (*piVar32 != 0x5f) {
        bVar44 = false;
      }
    }
    else {
      if (lVar33 == 0) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = *(ulong *)(lVar33 + -8);
      }
      if (uVar55 == local_1b8) {
        piVar32 = (int *)&String::_null;
      }
      else {
        local_128 = uVar55;
        if (((long)local_1b8 <= (long)uVar55) || ((int)uVar54 < 0)) goto LAB_00100b0e;
        piVar32 = (int *)(lVar33 + uVar55 * 4);
      }
      if (((0x36 < *piVar32 - 0x30U) ||
          (bVar58 = (0x7e0000007e03ffU >> ((ulong)(*piVar32 - 0x30U) & 0x3f) & 1) != 0,
          bVar44 = bVar58, !bVar58)) && (bVar58 = bVar13, bVar44 = bVar13, 9 < local_d8))
      goto LAB_00100de9;
    }
    bVar13 = bVar44;
    if (local_140 == false) {
LAB_00100e6e:
      if ((bVar20 == false) && (bVar42 = bVar58, local_17d == 0)) goto LAB_00100e8c;
      bVar10 = (bool)((bVar58 ^ 1U) & bVar20);
LAB_0010117e:
      bVar42 = bVar20;
      if (bVar10 == false) goto LAB_00100e8c;
      wVar27 = (wchar32)String::_null;
      bVar20 = local_140;
      bVar42 = bVar10;
      bVar13 = bVar10;
      if (lVar33 == 0) {
        uVar39 = 0;
        local_1b8 = 0;
        if (uVar54 != 0) goto LAB_0010119d;
        if (((wchar32)String::_null == L'b') || ((wchar32)String::_null == L'B')) {
          local_128 = 0xffffffffffffffff;
          goto LAB_00100b0e;
        }
        local_128 = 0xffffffffffffffff;
        if ((wchar32)String::_null == L'x') goto LAB_00100b0e;
        iVar50 = -1;
        local_1b8 = uVar39;
        if ((wchar32)String::_null != L'X') goto LAB_001011d7;
LAB_00102254:
        if ((iVar50 < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
        if (*(int *)(lVar33 + (long)iVar50 * 4) == 0x30) goto LAB_00101272;
        if (uVar55 != local_1b8) goto LAB_0010227b;
LAB_00101221:
        if (wVar27 != L'.') {
LAB_0010122a:
          if (wVar27 != L'-') {
LAB_00102c5a:
            if (uVar55 != local_1b8) goto LAB_001022da;
            goto LAB_001022ec;
          }
          goto LAB_00101233;
        }
        bVar20 = local_140;
        bVar42 = bVar14;
        bVar13 = bVar44;
        if (bVar14 == false) {
          if ((int)uVar54 < 1 || bVar16) {
            if (local_1b8 == uVar55) goto LAB_001022fe;
            local_128 = uVar55;
            if ((int)uVar54 < 0) goto LAB_00100b0e;
joined_r0x00103a92:
            local_128 = uVar55;
            if ((long)local_1b8 <= (long)uVar55) goto LAB_00100b0e;
            bVar42 = false;
          }
          else {
            local_128 = (ulong)(int)(uVar54 - 1);
            if (local_1b8 == local_128) {
              piVar32 = (int *)&String::_null;
            }
            else {
              if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
              piVar32 = (int *)(lVar33 + local_128 * 4);
            }
            iVar50 = *piVar32;
            bVar42 = bVar10;
            if (((iVar50 != 0x5f) && ((iVar50 - 0x2bU & 0xfffffffd) != 0)) && (iVar50 != 0x7e)) {
              if (local_1b8 != uVar55) goto joined_r0x00103a92;
              goto LAB_001022fe;
            }
          }
        }
        goto LAB_00101272;
      }
      local_1b8 = *(ulong *)(lVar33 + -8);
      uVar39 = local_1b8;
      if (uVar55 != local_1b8) {
LAB_0010119d:
        local_1b8 = uVar39;
        local_128 = uVar55;
        if (((long)local_1b8 <= (long)uVar55) || ((int)uVar54 < 0)) goto LAB_00100b0e;
        wVar27 = *(wchar32 *)(lVar33 + uVar55 * 4);
        if (wVar27 != L'b') goto LAB_001011bc;
LAB_0010140b:
        local_128 = (ulong)(int)(uVar54 - 1);
        if (local_1b8 != local_128) {
LAB_0010141e:
          if (((int)(uVar54 - 1) < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
          bVar20 = bVar10;
          bVar13 = bVar44;
          if (*(int *)(lVar33 + local_128 * 4) == 0x30) goto LAB_00101272;
          if (uVar55 == local_1b8) goto LAB_00103cc4;
joined_r0x00101445:
          local_128 = uVar55;
          if ((long)local_1b8 <= (long)uVar55) goto LAB_00100b0e;
          goto LAB_00101221;
        }
        bVar20 = bVar10;
        bVar13 = bVar44;
        if ((wchar32)String::_null == L'0') goto LAB_00101272;
joined_r0x001038ae:
        if (local_1b8 != uVar55) {
          local_128 = uVar55;
          if ((int)uVar54 < 0) goto LAB_00100b0e;
          goto joined_r0x00101445;
        }
        goto LAB_0010122a;
      }
      if ((wchar32)String::_null == L'b') {
        local_128 = (ulong)(int)(uVar54 - 1);
        if (uVar55 != local_128) goto LAB_0010141e;
        goto LAB_00102c5a;
      }
LAB_001011bc:
      if (wVar27 == L'B') goto LAB_0010140b;
      if ((wVar27 != L'x') && (wVar27 != L'X')) {
LAB_001011d7:
        if ((wVar27 == L'-') || (wVar27 == L'+')) {
          local_128 = (ulong)(int)(uVar54 - 1);
          if (local_128 == local_1b8) {
            if (((wchar32)String::_null & 0xffffffdfU) == 0x45) {
LAB_001037de:
              bVar13 = bVar44;
              if (bVar14 == false) goto LAB_00101272;
            }
            goto joined_r0x001038ae;
          }
          if (((long)local_1b8 <= (long)local_128) || ((int)(uVar54 - 1) < 0)) goto LAB_00100b0e;
          iVar50 = *(int *)(lVar33 + local_128 * 4);
          if (iVar50 == 0x65) goto LAB_001037de;
          if (iVar50 == 0x45) {
            bVar13 = bVar44;
            if (bVar14 == false) goto LAB_00101272;
            if ((uVar55 != local_1b8) && (local_128 = uVar55, (long)local_1b8 <= (long)uVar55))
            goto LAB_00100b0e;
          }
          else if (uVar55 != local_1b8) goto joined_r0x00101445;
          goto LAB_0010122a;
        }
        if (wVar27 != L'_') goto LAB_00102284;
        bVar42 = bVar14;
        bVar13 = bVar44;
        if (bVar14 == false) {
          local_128 = (ulong)(int)(uVar54 - 1);
          wVar27 = (wchar32)String::_null;
          if (local_128 != local_1b8) {
            if (((int)(uVar54 - 1) < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
            wVar27 = *(wchar32 *)(lVar33 + local_128 * 4);
          }
          bVar42 = bVar10;
          if (((((wVar27 & 0xffffffdfU) != 0x42) && (wVar27 != L'x')) && (wVar27 != L'X')) &&
             (wVar27 != L'.')) {
            if (uVar55 != local_1b8) {
              local_128 = uVar55;
              if (((int)uVar54 < 0) || ((long)local_1b8 <= (long)uVar55)) goto LAB_00100b0e;
              wVar27 = L'_';
              goto LAB_001022da;
            }
            goto LAB_001022fe;
          }
        }
        goto LAB_00101272;
      }
      iVar50 = uVar54 - 1;
      local_128 = (ulong)iVar50;
      if (local_128 != local_1b8) goto LAB_00102254;
      if ((wchar32)String::_null == L'0') goto LAB_00101272;
      if (uVar55 == local_1b8) goto LAB_0010122a;
      local_128 = uVar55;
      if ((int)uVar54 < 0) goto LAB_00100b0e;
LAB_0010227b:
      local_128 = uVar55;
      if ((long)local_1b8 <= (long)uVar55) goto LAB_00100b0e;
LAB_00102284:
      if (wVar27 != L'e') {
LAB_00103cc4:
        if (wVar27 != L'E') goto LAB_00101221;
      }
      bVar20 = local_140;
      bVar42 = bVar14;
      bVar13 = bVar44;
      if (bVar14 != false) goto LAB_00101272;
      local_128 = (ulong)(int)(uVar54 - 1);
      if (local_128 == local_1b8) {
        piVar32 = (int *)&String::_null;
      }
      else {
        if (((long)local_1b8 <= (long)local_128) || ((int)(uVar54 - 1) < 0)) goto LAB_00100b0e;
        piVar32 = (int *)(lVar33 + local_128 * 4);
      }
      bVar42 = bVar10;
      if (*piVar32 == 0x5f) goto LAB_00101272;
      if (uVar55 == local_1b8) goto LAB_001022fe;
      local_128 = uVar55;
      if (((int)uVar54 < 0) || ((long)local_1b8 <= (long)uVar55)) goto LAB_00100b0e;
LAB_001022da:
      local_128 = uVar55;
      if (((int)uVar54 < 0) || ((long)local_1b8 <= (long)uVar55)) goto LAB_00100b0e;
LAB_001022ec:
      if ((wVar27 == L'+') || (wVar27 == L'~')) {
LAB_00101233:
        if (bVar60 || bVar16) goto LAB_001022fe;
        local_128 = (ulong)(int)(uVar54 - 1);
        if (local_128 == local_1b8) {
          wVar27 = (wchar32)String::_null;
          if ((wchar32)String::_null == L'e') {
            bVar20 = local_140;
            bVar42 = false;
            bVar13 = bVar44;
          }
          else {
LAB_0010126b:
            bVar20 = local_140;
            bVar42 = wVar27 != L'E';
            bVar13 = bVar44;
          }
        }
        else {
          if ((long)local_1b8 <= (long)local_128 || (int)(uVar54 - 1) < 0) goto LAB_00100b0e;
          wVar27 = *(wchar32 *)(lVar33 + local_128 * 4);
          bVar20 = local_140;
          bVar42 = false;
          bVar13 = bVar44;
          if (wVar27 != L'e') goto LAB_0010126b;
        }
      }
      else {
LAB_001022fe:
        bVar20 = local_140;
        bVar42 = false;
        bVar13 = bVar44;
      }
    }
    else {
      if (lVar33 == 0) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = *(ulong *)(lVar33 + -8);
      }
      if (uVar55 == local_1b8) {
        piVar32 = (int *)&String::_null;
      }
      else {
        local_128 = uVar55;
        if (((int)uVar54 < 0) || ((long)local_1b8 <= (long)uVar55)) goto LAB_00100b0e;
        piVar32 = (int *)(lVar33 + uVar55 * 4);
      }
      if (*piVar32 - 0x30U < 2) goto LAB_00100e6e;
      if (bVar20 != false || local_17d != 0) {
        bVar58 = false;
        local_140 = false;
        bVar10 = bVar20;
        goto LAB_0010117e;
      }
      bVar58 = false;
      local_140 = false;
      bVar42 = false;
LAB_00100e8c:
      if (lVar33 == 0) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = *(ulong *)(lVar33 + -8);
      }
      wVar27 = (wchar32)String::_null;
      if (uVar55 != local_1b8) {
        local_128 = uVar55;
        if (((int)uVar54 < 0) || ((long)local_1b8 <= (long)uVar55)) goto LAB_00100b0e;
        wVar27 = *(wchar32 *)(lVar33 + uVar55 * 4);
      }
      bVar20 = local_140;
      if (wVar27 == L'.') {
        if (!bVar60) {
          local_128 = (ulong)(int)(uVar54 + 1);
          if (local_1b8 == local_128) {
            piVar32 = (int *)&String::_null;
          }
          else {
            if (((long)local_1b8 <= (long)local_128) || ((int)(uVar54 + 1) < 0)) goto LAB_00100b0e;
            piVar32 = (int *)(lVar33 + local_128 * 4);
          }
          if (*piVar32 - 0x30U < 10) {
            if (uVar54 == 0) {
LAB_001014c8:
              bVar42 = true;
            }
            else if ((int)uVar54 < 1) {
              local_128 = uVar55;
              if (uVar55 != local_1b8) goto LAB_00100b0e;
            }
            else {
              local_128 = (ulong)(int)(uVar54 - 1);
              if (local_1b8 == local_128) {
                piVar32 = (int *)&String::_null;
              }
              else {
                if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
                piVar32 = (int *)(lVar33 + local_128 * 4);
              }
              if (*piVar32 != 0x2e) goto LAB_001014c8;
              if (uVar55 != local_1b8) goto joined_r0x00103bb3;
            }
          }
          else if (uVar55 != local_1b8) {
            local_128 = uVar55;
            if ((int)uVar54 < 0) goto LAB_00100b0e;
joined_r0x00103bb3:
            local_128 = uVar55;
            if ((long)local_1b8 <= (long)uVar55) goto LAB_00100b0e;
          }
        }
      }
      else if ((((wVar27 + L'\xffffffd5' & 0xfffffffdU) == 0) || (wVar27 == L'~')) && (!bVar60)) {
        local_128 = (ulong)(int)(uVar54 + 1);
        while( true ) {
          iVar50 = (int)local_128;
          wVar27 = (wchar32)String::_null;
          if (local_1b8 != local_128) {
            if ((iVar50 < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
            wVar27 = *(wchar32 *)(lVar33 + local_128 * 4);
          }
          if (((wVar27 + L'\xffffffd5' & 0xfffffffdU) != 0) && (wVar27 != L'~')) break;
          local_128 = local_128 + 1;
        }
        if ((local_1b8 != local_128) &&
           (((long)local_128 < 0 || ((long)local_1b8 <= (long)local_128)))) goto LAB_00100b0e;
        if ((uint)(wVar27 + L'\xffffffd0') < 10) goto LAB_001014c8;
        if (iVar50 < (int)uVar41 && wVar27 == L'.') {
          local_128 = (ulong)(iVar50 + 1);
          if (local_1b8 == local_128) {
            piVar32 = (int *)&String::_null;
          }
          else {
            if ((iVar50 + 1 < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
            piVar32 = (int *)(lVar33 + local_128 * 4);
          }
          if (*piVar32 - 0x30U < 10) {
            bVar42 = iVar50 < (int)uVar41 && wVar27 == L'.';
          }
        }
      }
    }
LAB_00101272:
    local_140 = bVar20;
    if (local_17d == 0) {
      if (lVar33 == 0) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = *(ulong *)(lVar33 + -8);
      }
      if (uVar55 == local_1b8) {
        puVar35 = (uint *)&String::_null;
LAB_001012a6:
        uVar56 = 0xaaf2;
        iVar26 = 0x2ac;
        iVar50 = 0;
        iVar49 = 0x156;
        do {
          if (*puVar35 < uVar56) {
            iVar26 = iVar49 + -1;
          }
          else {
            if (*puVar35 <= *(uint *)(xid_start + (long)iVar49 * 8 + 4)) {
              local_17d = bVar42 == false;
              goto LAB_00101503;
            }
            iVar50 = iVar49 + 1;
          }
          iVar49 = (iVar50 + iVar26) / 2;
          if (iVar26 < iVar50) goto LAB_00101503;
          uVar56 = *(uint *)(xid_start + (long)iVar49 * 8);
        } while( true );
      }
      local_128 = uVar55;
      if (((long)uVar55 < (long)local_1b8) && (-1 < (int)uVar54)) {
        puVar35 = (uint *)(lVar33 + uVar55 * 4);
        goto LAB_001012a6;
      }
      goto LAB_00100b0e;
    }
LAB_00101503:
    bVar23 = bVar61;
    if (bVar40) {
      if (lVar33 == 0) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = *(ulong *)(lVar33 + -8);
      }
      if (uVar55 == local_1b8) {
        piVar32 = (int *)&String::_null;
      }
      else {
        local_128 = uVar55;
        if (((int)uVar54 < 0) || ((long)local_1b8 <= (long)uVar55)) goto LAB_00100b0e;
        piVar32 = (int *)(lVar33 + uVar55 * 4);
      }
      if (*piVar32 == 0x2e) {
LAB_001028a9:
        if ((bVar25 == 1) || (local_17d == 0)) {
          bVar23 = bVar25 | bVar61;
        }
        else {
          if (local_148 == 0) goto LAB_00102bce;
          bVar25 = 0;
          local_17d = local_148;
        }
      }
      else {
        local_17d = 0;
        bVar23 = bVar25 | bVar61;
      }
    }
    else {
      if (local_148 != 0) goto LAB_001028a9;
      if (!bVar17) {
        uVar56 = uVar54;
        if ((int)uVar54 < (int)uVar41) {
          local_128 = uVar55;
          do {
            if (lVar33 == 0) {
              local_1b8 = 0;
            }
            else {
              local_1b8 = *(ulong *)(lVar33 + -8);
            }
            if (local_128 == local_1b8) {
              pwVar36 = (wchar32 *)&String::_null;
            }
            else {
              if (((int)uVar56 < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
              pwVar36 = (wchar32 *)(lVar33 + local_128 * 4);
            }
            cVar21 = is_symbol(*pwVar36);
            if (cVar21 != '\0') break;
            uVar56 = uVar56 + 1;
            local_128 = local_128 + 1;
          } while (uVar56 != local_1c0 - 1);
        }
        String::substr((int)(String *)&local_b0,wVar51);
        fStack_70 = (float)_UNK_00113be8;
        local_78 = __LC20;
        fStack_6c = _LC29;
        StringName::StringName((StringName *)&local_a0,(String *)&local_b0,false);
        local_a8 = 0;
        cVar21 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                 _lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                              *)(in_RSI + 0x3b8),(StringName *)&local_a0,&local_a8);
        if ((StringName::configured != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
          StringName::unref();
        }
        if (cVar21 == '\0') {
          StringName::StringName((StringName *)&local_a0,(String *)&local_b0,false);
          local_a8 = 0;
          cVar21 = HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                   ::_lookup_pos((HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                                  *)(in_RSI + 0x328),(StringName *)&local_a0,&local_a8);
          if ((StringName::configured != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
            StringName::unref();
          }
          if (cVar21 != '\0') {
            StringName::StringName((StringName *)&local_a0,(String *)&local_b0,false);
            pauVar38 = (undefined1 (*) [16])
                       HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                       ::operator[]((HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                                     *)(in_RSI + 0x328),(StringName *)&local_a0);
            _local_78 = *pauVar38;
joined_r0x00104815:
            if ((StringName::configured != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
              StringName::unref();
            }
            goto LAB_001027d6;
          }
          StringName::StringName((StringName *)&local_a0,(String *)&local_b0,false);
          local_a8 = 0;
          cVar21 = HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                   ::_lookup_pos((HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                                  *)(in_RSI + 0x358),(StringName *)&local_a0,&local_a8);
          if ((StringName::configured != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
            StringName::unref();
          }
          if (cVar21 != '\0') {
            StringName::StringName((StringName *)&local_a0,(String *)&local_b0,false);
            pauVar38 = (undefined1 (*) [16])
                       HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                       ::operator[]((HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                                     *)(in_RSI + 0x358),(StringName *)&local_a0);
            _local_78 = *pauVar38;
            bVar59 = false;
            if ((StringName::configured != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
              StringName::unref();
            }
            goto LAB_001027d6;
          }
          StringName::StringName((StringName *)&local_a0,(String *)&local_b0,false);
          local_a8 = 0;
          cVar21 = HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                   ::_lookup_pos((HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                                  *)(in_RSI + 0x388),(StringName *)&local_a0,&local_a8);
          if ((StringName::configured != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
            StringName::unref();
          }
          if (cVar21 != '\0') {
            StringName::StringName((StringName *)&local_a0,(String *)&local_b0,false);
            pauVar38 = (undefined1 (*) [16])
                       HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                       ::operator[]((HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                                     *)(in_RSI + 0x388),(StringName *)&local_a0);
            _local_78 = *pauVar38;
            goto joined_r0x00104815;
          }
LAB_001045cf:
          if (((float)local_78._4_4_ != 0.0) || (fStack_70 != 0.0)) goto LAB_001027ea;
          local_148 = 0;
          if (_LC29 != fStack_6c) goto LAB_001027ea;
        }
        else {
          GDScriptTokenizer::get_token_name((String *)&local_a8,0x34);
          cVar21 = String::operator==((String *)&local_b0,(String *)&local_a8);
          if (cVar21 == '\0') {
            GDScriptTokenizer::get_token_name((StringName *)&local_a0,0x40);
            cVar21 = String::operator==((String *)&local_b0,(String *)&local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            lVar33 = local_c0;
            if (cVar21 == '\0') {
              local_128 = (ulong)(int)uVar56;
              if ((int)uVar56 < (int)uVar41) {
                do {
                  if (lVar33 == 0) {
                    local_1b8 = 0;
                  }
                  else {
                    local_1b8 = *(ulong *)(lVar33 + -8);
                  }
                  if (local_128 == local_1b8) {
                    pwVar36 = (wchar32 *)&String::_null;
                  }
                  else {
                    if (((long)local_1b8 <= (long)local_128) || ((int)uVar56 < 0))
                    goto LAB_00100b0e;
                    pwVar36 = (wchar32 *)(lVar33 + local_128 * 4);
                  }
                  cVar21 = is_whitespace(*pwVar36);
                  if (cVar21 == '\0') break;
                  uVar56 = uVar56 + 1;
                  local_128 = local_128 + 1;
                } while (uVar56 != local_1c0 - 1);
                local_128 = (ulong)(int)uVar56;
                if (lVar33 == 0) {
                  local_1b8 = 0;
                }
                else {
LAB_0010459a:
                  local_1b8 = *(ulong *)(lVar33 + -8);
                }
                if (local_1b8 != local_128) goto LAB_001045a7;
                piVar32 = (int *)&String::_null;
              }
              else {
                if (local_c0 != 0) goto LAB_0010459a;
                local_1b8 = 0;
LAB_001045a7:
                if (((int)uVar56 < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
                piVar32 = (int *)(lVar33 + local_128 * 4);
              }
              if (*piVar32 != 0x28) goto LAB_001045cf;
              _local_78 = *(undefined1 (*) [16])(in_RSI + 0x410);
              goto LAB_001027d6;
            }
          }
          else {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          _local_78 = *(undefined1 (*) [16])(in_RSI + 0x410);
LAB_001027d6:
          if ((float)local_78._0_4_ == 0.0) goto LAB_001045cf;
LAB_001027ea:
          if (-1 < (int)(uVar54 - 1)) {
            local_128 = (ulong)(int)(uVar54 - 1);
            while( true ) {
              if (local_c0 == 0) {
                if ((int)local_128 != 0) goto LAB_001039b2;
              }
              else {
                local_1b8 = *(ulong *)(local_c0 + -8);
                while (local_128 != local_1b8) {
                  if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
                  uVar56 = *(uint *)(local_c0 + local_128 * 4);
                  if (uVar56 == 0x2e) goto LAB_0010283e;
                  if ((0x20 < uVar56) || (local_128 = local_128 - 1, (int)local_128 < 0))
                  goto LAB_0010284d;
                }
              }
              if ((wchar32)String::_null == L'.') break;
              if ((0x20 < (uint)(wchar32)String::_null) ||
                 (local_128 = local_128 - 1, (int)local_128 < 0)) goto LAB_0010284d;
            }
LAB_0010283e:
            fStack_70 = (float)_UNK_00113be8;
            local_78 = __LC20;
            fStack_6c = _LC29;
          }
LAB_0010284d:
          local_58._8_4_ = _UNK_00113be8;
          local_58._0_8_ = __LC20;
          local_58._12_4_ = _LC29;
          local_148 = Color::operator!=((Color *)local_78,(Color *)local_58);
          if (local_148 != 0) {
            local_118 = _local_78;
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        goto LAB_001028a9;
      }
      if (((bVar25 ^ 1) & local_17d) == 0) {
        bVar23 = bVar61 | bVar25;
        local_148 = 0;
        goto LAB_0010154e;
      }
LAB_00102bce:
      GDScriptTokenizer::get_token_name((CowData<char32_t> *)&local_a0,0x42);
      bVar24 = String::operator==((String *)&local_c8,(String *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      lVar33 = local_c0;
      if (bVar24 == 0) {
        uVar56 = uVar54;
        if ((int)uVar54 < (int)uVar41) {
          uVar39 = (ulong)uVar54;
          local_128 = uVar55;
          if (local_c0 == 0) goto LAB_00103735;
LAB_001036d4:
          local_1b8 = *(ulong *)(lVar33 + -8);
          do {
            wVar27 = (wchar32)String::_null;
            uVar56 = (uint)uVar39;
            iVar50 = (int)local_128;
            if (local_128 == local_1b8) {
              cVar21 = is_symbol((wchar32)String::_null);
              if (cVar21 == '\0') goto LAB_0010370d;
              goto LAB_00103f51;
            }
            if (((long)local_1b8 <= (long)local_128) || (iVar50 < 0)) goto LAB_00100b0e;
            wVar27 = *(wchar32 *)(lVar33 + local_128 * 4);
            cVar21 = is_symbol(wVar27);
            if (cVar21 != '\0') {
              if ((int)uVar41 <= (int)uVar56) {
                local_128 = (ulong)(int)uVar56;
                goto LAB_00103ff6;
              }
LAB_00103f5b:
              local_128 = (ulong)(int)uVar39;
              pwVar36 = (wchar32 *)(lVar33 + local_128 * 4);
              goto LAB_00103f91;
            }
LAB_0010370d:
            cVar21 = is_whitespace(wVar27);
            if (cVar21 != '\0') {
LAB_00103f51:
              uVar56 = (uint)uVar39;
              if ((int)(uint)uVar39 < (int)uVar41) goto LAB_00103f5b;
              break;
            }
            local_128 = local_128 + 1;
            if ((int)uVar41 <= (int)local_128) {
              uVar39 = (ulong)(iVar50 + 1);
              goto LAB_00103f51;
            }
            uVar39 = local_128 & 0xffffffff;
            if (lVar33 != 0) goto LAB_001036d4;
LAB_00103735:
            local_1b8 = 0;
          } while( true );
        }
        local_128 = (ulong)(int)uVar56;
        if (lVar33 != 0) goto LAB_00103ff6;
        goto LAB_0010398e;
      }
      local_148 = 0;
      bVar25 = 0;
      local_13d = bVar24;
    }
    goto LAB_0010154e;
  }
LAB_0010210d:
  wVar27 = (wchar32)String::_null;
  local_128 = (ulong)iVar50;
  if (local_c0 != 0) {
    local_1b8 = *(ulong *)(local_c0 + -8);
    if (local_128 == local_1b8) goto LAB_001034de;
    if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
    wVar27 = *(wchar32 *)(local_c0 + local_128 * 4);
    bVar23 = is_symbol(wVar27);
    if ((uint)(wVar27 + L'\xffffffde') < 0x3c) {
      bVar23 = bVar23 & (0xf7ffffffffffff5eU >> ((ulong)(uint)(wVar27 + L'\xffffffde') & 0x3f) & 1)
                        != 0;
    }
    if (bVar23 != 0) goto LAB_0010351d;
LAB_00102165:
    bVar60 = true;
    goto LAB_0010216a;
  }
  if (iVar50 == 0) {
LAB_001034de:
    cVar21 = is_symbol((wchar32)String::_null);
    if ((cVar21 != '\0') &&
       (0x3b < (uint)(wVar27 + L'\xffffffde') ||
        (0xf7ffffffffffff5eU >> ((ulong)(uint)(wVar27 + L'\xffffffde') & 0x3f) & 1) != 0)) {
LAB_0010351d:
      bVar60 = wVar27 == L'}';
      goto LAB_0010216a;
    }
    goto LAB_00102165;
  }
LAB_0010398e:
  local_1b8 = 0;
  goto LAB_00100b0e;
  while( true ) {
    uVar56 = uVar56 + 1;
    uVar39 = (ulong)uVar56;
    local_128 = local_128 + 1;
    pwVar36 = pwVar36 + 1;
    if (uVar56 == local_1c0 - 1) break;
LAB_00103f91:
    uVar56 = (uint)uVar39;
    if (local_1b8 == local_128) {
      pwVar37 = (wchar32 *)&String::_null;
    }
    else if (((int)uVar56 < 0) || (pwVar37 = pwVar36, (long)local_1b8 <= (long)local_128))
    goto LAB_00100b0e;
    cVar21 = is_whitespace(*pwVar37);
    if (cVar21 == '\0') break;
  }
  local_128 = (ulong)(int)uVar56;
  if (lVar33 == 0) {
    local_1b8 = 0;
  }
  else {
LAB_00103ff6:
    local_1b8 = *(ulong *)(lVar33 + -8);
  }
  if (local_1b8 == local_128) {
    piVar32 = (int *)&String::_null;
  }
  else {
    if (((int)uVar56 < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
    piVar32 = (int *)(lVar33 + local_128 * 4);
  }
  if (*piVar32 == 0x28) {
    GDScriptTokenizer::get_token_name((CowData<char32_t> *)&local_a0,0x3c);
    bVar25 = String::operator==((String *)&local_c8,(String *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((bVar25 != 0) || (bVar25 = bVar53, bVar53 != 0)) goto LAB_001040cf;
    local_148 = 0;
    bVar25 = 1;
  }
  else {
    GDScriptTokenizer::get_token_name((CowData<char32_t> *)&local_b0,0x46);
    cVar21 = String::operator==((String *)&local_c8,(String *)&local_b0);
    if (cVar21 == '\0') {
      GDScriptTokenizer::get_token_name((String *)&local_a8,0x2b);
      cVar21 = String::operator==((String *)&local_c8,(String *)&local_a8);
      if (cVar21 == '\0') {
        GDScriptTokenizer::get_token_name((CowData<char32_t> *)&local_a0,0x39);
        cVar21 = String::operator==((String *)&local_c8,(String *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (cVar21 != '\0') goto LAB_00104054;
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
LAB_00104054:
      local_13f = 1;
    }
    if (bVar53 == 0) {
      local_148 = 0;
      bVar25 = 0;
      goto LAB_0010154e;
    }
    bVar25 = 0;
LAB_001040cf:
    lVar33 = local_c0;
    iVar50 = uVar54 - 1;
    local_128 = (long)iVar50;
    for (; 0 < iVar50; iVar50 = iVar50 + -1) {
      if (lVar33 == 0) goto LAB_0010398e;
      local_1b8 = *(ulong *)(lVar33 + -8);
      if (local_128 == local_1b8) {
        pwVar36 = (wchar32 *)&String::_null;
      }
      else {
        if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
        pwVar36 = (wchar32 *)(lVar33 + local_128 * 4);
      }
      cVar21 = is_whitespace(*pwVar36);
      if (cVar21 == '\0') goto LAB_0010425d;
      local_128 = local_128 - 1;
    }
    if (lVar33 == 0) {
      local_1b8 = 0;
    }
    else {
      local_1b8 = *(ulong *)(lVar33 + -8);
    }
LAB_0010425d:
    if (local_128 == local_1b8) {
      piVar32 = (int *)&String::_null;
    }
    else {
      if ((iVar50 < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
      piVar32 = (int *)(lVar33 + (long)iVar50 * 4);
    }
    bVar23 = bVar25 | bVar61;
    bVar53 = 1;
    if (*piVar32 == 0x3a) {
      bVar15 = true;
    }
    local_148 = 0;
LAB_0010154e:
    lVar33 = local_c0;
    if ((bVar23 == 0) &&
       (bVar23 = ((local_148 | bVar42) ^ 1) & local_17d, bVar61 = bVar23, bVar23 != 0)) {
      if ((int)uVar54 < 1) {
        local_1b8 = 0;
        local_128 = uVar55;
        uVar56 = uVar54;
        if (local_c0 != 0) {
          local_1b8 = *(ulong *)(local_c0 + -8);
        }
      }
      else {
        local_128 = uVar55;
        if (local_c0 == 0) {
LAB_001039b2:
          local_1b8 = 0;
          goto LAB_00100b0e;
        }
        local_1b8 = *(ulong *)(local_c0 + -8);
        uVar39 = (ulong)uVar54;
        uVar43 = uVar54;
        while( true ) {
          wVar27 = (wchar32)String::_null;
          uVar56 = (uint)uVar39;
          if (local_128 == local_1b8) {
            cVar21 = is_symbol((wchar32)String::_null);
            if (cVar21 != '\0') goto LAB_00104684;
          }
          else {
            if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
            wVar27 = *(wchar32 *)(lVar33 + local_128 * 4);
            cVar21 = is_symbol(wVar27);
            if (cVar21 != '\0') {
              local_128 = (long)(int)uVar56;
              goto LAB_00104380;
            }
          }
          cVar21 = is_whitespace(wVar27);
          if (cVar21 != '\0') goto LAB_00104684;
          local_128 = local_128 - 1;
          if ((int)(uint)local_128 < 1) break;
          uVar39 = local_128 & 0xffffffff;
          uVar43 = (uint)local_128;
        }
        uVar56 = uVar43 - 1;
LAB_00104684:
        local_128 = (long)(int)uVar56;
      }
LAB_00104380:
      if (local_128 == local_1b8) {
        piVar32 = (int *)&String::_null;
      }
      else {
        if (((int)uVar56 < 0) || ((long)local_1b8 <= (long)local_128)) goto LAB_00100b0e;
        piVar32 = (int *)(lVar33 + (long)(int)uVar56 * 4);
      }
      bVar61 = *piVar32 == 0x2e;
      local_148 = 0;
      local_17d = bVar23;
    }
  }
  if (bVar40) {
    bVar53 = bVar53 | local_13d;
    if (bVar53 == 0) {
      if (local_13f != 0) {
        local_cf = local_13f;
      }
      local_13f = local_cf;
      if (0 < local_15c) goto LAB_001015b7;
      if (local_d0 == 0) {
        GDScriptTokenizer::get_token_name((CowData<char32_t> *)&local_a0,0x3c);
        cVar21 = String::operator==((String *)&local_c8,(String *)&local_a0);
        local_d0 = bVar53;
        if (cVar21 != '\0') goto LAB_00102d72;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      }
      else {
        cVar21 = '\0';
LAB_00102d72:
        if (local_c0 == 0) {
          local_1b8 = 0;
        }
        else {
          local_1b8 = *(ulong *)(local_c0 + -8);
        }
        if (uVar55 == local_1b8) {
          piVar32 = (int *)&String::_null;
        }
        else {
          local_128 = uVar55;
          if (((long)local_1b8 <= (long)uVar55) || ((int)uVar54 < 0)) goto LAB_00100b0e;
          piVar32 = (int *)(local_c0 + uVar55 * 4);
        }
        bVar53 = local_d0;
        if (*piVar32 == 0x28) {
          if (cVar21 != '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          }
          local_13c = 0;
          local_15c = 1;
        }
        else if (cVar21 != '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        }
      }
    }
    else {
      local_d0 = local_13f;
      if (local_13f == 0) {
        local_d0 = bVar53;
        local_13f = local_cf;
      }
      if (local_15c < 1) {
        cVar21 = '\0';
        goto LAB_00102d72;
      }
LAB_001015b7:
      if (local_c0 == 0) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = *(ulong *)(local_c0 + -8);
      }
      if (uVar55 == local_1b8) {
        puVar35 = (uint *)&String::_null;
      }
      else {
        local_128 = uVar55;
        if (((int)uVar54 < 0) || ((long)local_1b8 <= (long)uVar55)) goto LAB_00100b0e;
        puVar35 = (uint *)(local_c0 + uVar55 * 4);
      }
      uVar56 = *puVar35;
      bVar53 = local_d0;
      if (uVar56 == 0x7b) {
        local_13c = local_13c + 1;
      }
      else if (uVar56 < 0x7c) {
        if (uVar56 == 0x28) {
          local_15c = local_15c + 1;
        }
        else {
          local_15c = local_15c - (uint)(uVar56 == 0x29);
        }
      }
      else {
        local_13c = local_13c - (uint)(uVar56 == 0x7d);
      }
    }
    lVar33 = local_c0;
    if (bVar59) {
      if (local_c0 == 0) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = *(ulong *)(local_c0 + -8);
      }
      if (uVar55 == local_1b8) {
        puVar35 = (uint *)&String::_null;
      }
      else {
        local_128 = uVar55;
        if (((long)local_1b8 <= (long)uVar55) || ((int)uVar54 < 0)) goto LAB_00100b0e;
        puVar35 = (uint *)(local_c0 + uVar55 * 4);
      }
      uVar56 = *puVar35;
      iVar50 = local_150;
      if (uVar56 != 0x2e) {
        if (uVar56 < 0x2f) {
          if (uVar56 == 0x2c) {
            bVar59 = 0 < local_150;
          }
          else {
            if (uVar56 == 0x2d) goto LAB_00103df8;
            if (uVar56 != 9) {
              bVar59 = uVar56 == 0x20;
            }
          }
        }
        else if (uVar56 == 0x5b) {
          iVar50 = local_150 + 1;
        }
        else if (uVar56 == 0x5d) {
          iVar50 = local_150 + -1;
        }
        else {
LAB_00103df8:
          bVar59 = false;
        }
      }
    }
    else {
      iVar50 = local_150;
      if (0 < (int)uVar54) {
        local_128 = (ulong)(int)(uVar54 - 1);
        if (local_c0 == 0) {
          if (uVar54 - 1 != 0) goto LAB_0010398e;
          if ((wchar32)String::_null == L'-') {
            local_128 = 1;
            local_1b8 = 0;
            goto LAB_00100b0e;
          }
        }
        else {
          local_1b8 = *(ulong *)(local_c0 + -8);
          if (local_128 == local_1b8) {
            piVar32 = (int *)&String::_null;
          }
          else {
            if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
            piVar32 = (int *)(local_c0 + local_128 * 4);
          }
          if (*piVar32 == 0x2d) {
            if (uVar55 == local_1b8) {
              piVar32 = (int *)&String::_null;
            }
            else {
              local_128 = uVar55;
              if ((long)local_1b8 <= (long)uVar55) goto LAB_00100b0e;
              piVar32 = (int *)(local_c0 + uVar55 * 4);
            }
            bVar59 = false;
            if (*piVar32 == 0x3e) {
              bVar59 = bVar40;
            }
            iVar50 = 0;
            if (*piVar32 != 0x3e) {
              iVar50 = local_150;
            }
          }
        }
      }
      local_150 = iVar50;
      iVar50 = local_150;
      if ((local_13f != 0) || ((local_15c == 1 && (local_13c == 0)))) {
        if (local_c0 == 0) {
          local_1b8 = 0;
        }
        else {
          local_1b8 = *(ulong *)(local_c0 + -8);
        }
        if (uVar55 == local_1b8) {
          piVar32 = (int *)&String::_null;
        }
        else {
          local_128 = uVar55;
          if (((long)local_1b8 <= (long)uVar55) || ((int)uVar54 < 0)) goto LAB_00100b0e;
          piVar32 = (int *)(local_c0 + uVar55 * 4);
        }
        if (*piVar32 == 0x3a) {
          bVar59 = bVar40;
        }
        iVar50 = 0;
        if (*piVar32 != 0x3a) {
          iVar50 = local_150;
        }
      }
    }
    local_150 = iVar50;
    if (local_c0 == 0) {
      local_1b8 = 0;
    }
    else {
      local_1b8 = *(ulong *)(local_c0 + -8);
    }
    if (uVar55 == local_1b8) {
      pwVar36 = (wchar32 *)&String::_null;
    }
    else {
      local_128 = uVar55;
      if (((long)local_1b8 <= (long)uVar55) || ((int)uVar54 < 0)) goto LAB_00100b0e;
      pwVar36 = (wchar32 *)(local_c0 + uVar55 * 4);
    }
    cVar21 = is_whitespace(*pwVar36);
    if (cVar21 == '\0') {
      local_cf = 0;
      local_d0 = 0;
    }
    else {
      local_cf = local_13f;
      local_d0 = bVar53;
    }
    local_13f = 0;
    local_13d = 0;
    bVar53 = 0;
    bVar25 = 0;
    bVar15 = false;
    bVar61 = 0;
    if (bVar62) {
LAB_001016f6:
      bVar62 = false;
      if (!bVar11) goto LAB_00102382;
    }
    else {
LAB_001023c7:
      if (lVar33 == 0) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = *(ulong *)(lVar33 + -8);
      }
      if (uVar55 == local_1b8) {
        piVar32 = (int *)&String::_null;
      }
      else {
        local_128 = uVar55;
        if (((int)uVar54 < 0) || ((long)local_1b8 <= (long)uVar55)) goto LAB_00100b0e;
        piVar32 = (int *)(lVar33 + uVar55 * 4);
      }
      if (*piVar32 != 0x26 || bVar60) {
        if (!bVar40) goto LAB_0010219f;
        goto LAB_001016f6;
      }
      bVar62 = false;
      if ((int)uVar54 < (int)(local_1c0 - 2)) {
        local_128 = (ulong)(int)(uVar54 + 1);
        wVar27 = (wchar32)String::_null;
        if (local_1b8 != local_128) {
          if (((long)local_1b8 <= (long)local_128) || ((int)(uVar54 + 1) < 0)) goto LAB_00100b0e;
          wVar27 = *(wchar32 *)(lVar33 + local_128 * 4);
        }
        if ((wVar27 == L'\'') || (bVar60 = true, wVar27 == L'\"')) {
          bVar60 = (bool)(1 < (int)uVar54 & bVar16);
          if (bVar60) {
            local_128 = (ulong)(int)(uVar54 - 1);
            if (local_1b8 == local_128) {
              piVar32 = (int *)&String::_null;
            }
            else {
              if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
              piVar32 = (int *)(lVar33 + local_128 * 4);
            }
            if (*piVar32 == 0x26) {
              local_128 = (ulong)(int)(uVar54 - 2);
              if (local_1b8 == local_128) {
                piVar32 = (int *)&String::_null;
              }
              else {
                if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
                piVar32 = (int *)(lVar33 + local_128 * 4);
              }
              bVar62 = *piVar32 == 0x26;
              if (bVar62) {
                bVar60 = false;
              }
              goto LAB_00102377;
            }
            bVar60 = false;
          }
          bVar62 = true;
        }
      }
      else {
        bVar60 = true;
      }
LAB_00102377:
      if (!bVar11) goto LAB_00102382;
LAB_001023ba:
      if (!bVar40) goto LAB_001021aa;
    }
    bVar11 = false;
    if (!bVar12) goto LAB_00102453;
LAB_00101716:
    if (lVar33 == 0) {
      local_1b8 = 0;
    }
    else {
      local_1b8 = *(ulong *)(lVar33 + -8);
    }
    if (uVar55 != local_1b8) {
      local_128 = uVar55;
      if (((long)local_1b8 <= (long)uVar55) || ((int)uVar54 < 0)) goto LAB_00100b0e;
      wVar27 = *(wchar32 *)(lVar33 + uVar55 * 4);
      if (wVar27 != L'/') goto LAB_00101748;
LAB_001021b5:
      if (((int)uVar54 < 1) || (bVar58 == false)) goto LAB_00102211;
      local_128 = (ulong)(int)(uVar54 - 1);
      if (lVar33 == 0) {
        if (uVar54 - 1 != 0) goto LAB_0010398e;
LAB_00103ef3:
        if (((wchar32)String::_null == L'$') ||
           (wVar27 = (wchar32)String::_null, (wchar32)String::_null == L'/')) {
          bVar12 = false;
        }
        else {
LAB_001021fc:
          if (wVar27 == L'%') {
            bVar12 = false;
          }
        }
        goto LAB_00102211;
      }
      local_1b8 = *(ulong *)(lVar33 + -8);
      if (local_128 == local_1b8) goto LAB_00103ef3;
      if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
      wVar27 = *(wchar32 *)(lVar33 + local_128 * 4);
      if ((wVar27 != L'/') && (wVar27 != L'$')) goto LAB_001021fc;
      if (bVar18) {
        bVar12 = false;
        goto LAB_0010179f;
      }
      bVar12 = false;
LAB_0010176a:
      local_1b8 = *(ulong *)(lVar33 + -8);
      goto LAB_0010176e;
    }
    wVar27 = (wchar32)String::_null;
    if ((wchar32)String::_null == L'/') goto LAB_001021b5;
LAB_00101748:
    if (wVar27 == L'%') goto LAB_001021b5;
    if (!bVar18) {
      bVar12 = false;
      goto LAB_00101761;
    }
    bVar12 = false;
    bVar18 = false;
    bVar16 = bVar60;
  }
  else {
    lVar33 = local_c0;
    if (!bVar62) goto LAB_001023c7;
LAB_0010219f:
    if (bVar11) {
LAB_001021aa:
      if (!bVar12) goto LAB_00102453;
      goto LAB_001021b5;
    }
LAB_00102382:
    if (lVar33 == 0) {
      local_1b8 = 0;
    }
    else {
      local_1b8 = *(ulong *)(lVar33 + -8);
    }
    if (uVar55 == local_1b8) {
      piVar32 = (int *)&String::_null;
    }
    else {
      local_128 = uVar55;
      if (((int)uVar54 < 0) || ((long)local_1b8 <= (long)uVar55)) goto LAB_00100b0e;
      piVar32 = (int *)(lVar33 + uVar55 * 4);
    }
    if (*piVar32 != 0x5e || bVar60) goto LAB_001023ba;
    if (uVar54 != 0) {
      if (0 < (int)uVar54) {
        local_128 = (ulong)(int)(uVar54 - 1);
        if (local_1b8 == local_128) {
          piVar32 = (int *)&String::_null;
        }
        else {
          if ((long)local_1b8 <= (long)local_128) goto LAB_00100b0e;
          piVar32 = (int *)(lVar33 + local_128 * 4);
        }
        if (*piVar32 != 0x5e) goto LAB_0010243e;
      }
      if (!bVar16) {
        bVar60 = false;
        goto LAB_001023ba;
      }
    }
LAB_0010243e:
    bVar60 = false;
    bVar11 = bVar12;
    if (bVar12) {
LAB_00102495:
      if (bVar40) goto LAB_00101716;
      goto LAB_001021b5;
    }
    bVar11 = true;
LAB_00102453:
    if (lVar33 == 0) {
      local_1b8 = 0;
    }
    else {
      local_1b8 = *(ulong *)(lVar33 + -8);
    }
    wVar27 = (wchar32)String::_null;
    if (uVar55 != local_1b8) {
      local_128 = uVar55;
      if (((long)local_1b8 <= (long)uVar55) || ((int)uVar54 < 0)) goto LAB_00100b0e;
      wVar27 = *(wchar32 *)(lVar33 + uVar55 * 4);
    }
    if (wVar27 != L'$') {
      if (wVar27 != L'%' || bVar60) goto LAB_00102495;
      bVar60 = false;
    }
    bVar12 = true;
LAB_00102211:
    if (!bVar18) {
LAB_00101761:
      if (lVar33 != 0) goto LAB_0010176a;
      local_1b8 = 0;
LAB_0010176e:
      if (uVar55 == local_1b8) {
        piVar32 = (int *)&String::_null;
      }
      else {
        local_128 = uVar55;
        if (((int)uVar54 < 0) || ((long)local_1b8 <= (long)uVar55)) goto LAB_00100b0e;
        piVar32 = (int *)(lVar33 + uVar55 * 4);
      }
      if (*piVar32 == 0x40) {
        bVar18 = true;
        bVar16 = bVar60;
        goto LAB_001017b0;
      }
    }
LAB_0010179f:
    bVar16 = bVar60;
    if (bVar40) {
      bVar18 = false;
    }
  }
LAB_001017b0:
  if (lVar33 == 0) {
    local_1b8 = 0;
  }
  else {
    local_1b8 = *(ulong *)(lVar33 + -8);
  }
  if (uVar55 == local_1b8) {
    piVar32 = (int *)&String::_null;
  }
  else {
    local_128 = uVar55;
    if (((long)local_1b8 <= (long)uVar55) || ((int)uVar54 < 0)) goto LAB_00100b0e;
    piVar32 = (int *)(lVar33 + uVar55 * 4);
  }
  uVar56 = uVar54 + 1;
  if ((*piVar32 == 0x72) && ((int)uVar56 < (int)uVar41)) {
    local_128 = (ulong)(int)uVar56;
    wVar27 = (wchar32)String::_null;
    if (local_1b8 != local_128) {
      if (((int)uVar56 < 0) || ((long)local_1b8 <= (long)local_128)) {
LAB_00100b0e:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,local_128,local_1b8,"p_index","size()",""
                   ,false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      wVar27 = *(wchar32 *)(lVar33 + local_128 * 4);
    }
    if ((wVar27 == L'\"') || (wVar27 == L'\'')) {
      _local_98 = *(undefined1 (*) [16])(in_RSI + 0x460);
      goto LAB_00101815;
    }
  }
  if (bVar12) {
    _local_98 = *(undefined1 (*) [16])(in_RSI + 0x480);
    local_1bc = 3;
  }
  else if (bVar18) {
    _local_98 = *(undefined1 (*) [16])(in_RSI + 0x490);
    local_1bc = 4;
  }
  else if (bVar62) {
    _local_98 = *(undefined1 (*) [16])(in_RSI + 0x4a0);
    local_1bc = 5;
  }
  else if (bVar11) {
    _local_98 = *(undefined1 (*) [16])(in_RSI + 0x470);
    local_1bc = 2;
  }
  else if (local_148 == 0) {
    if (local_13d == 0) {
      if (bVar25 == 0) {
        if (bVar42 == false) {
          if (bVar40) {
            _local_98 = *(undefined1 (*) [16])(in_RSI + 0x3f0);
            local_1bc = 6;
          }
          else if (bVar59) {
            _local_98 = *(undefined1 (*) [16])(in_RSI + 0x4b0);
            bVar12 = false;
            bVar11 = false;
            bVar18 = false;
            bVar62 = false;
            local_1bc = 0xd;
          }
          else if (bVar61 == 0) {
            bVar12 = false;
            bVar11 = false;
            bVar61 = 0;
            bVar18 = false;
            bVar62 = false;
            bVar59 = false;
            local_1bc = 0xc;
          }
          else {
            _local_98 = *(undefined1 (*) [16])(in_RSI + 0x450);
            bVar12 = false;
            bVar11 = false;
            bVar18 = false;
            bVar62 = false;
            bVar59 = false;
            local_1bc = 0xb;
          }
        }
        else {
          _local_98 = *(undefined1 (*) [16])(in_RSI + 0x440);
          local_1bc = 7;
        }
      }
      else {
        if ((bVar15) || (bVar53 == 0)) {
          _local_98 = *(undefined1 (*) [16])(in_RSI + 0x400);
        }
        else {
          _local_98 = *(undefined1 (*) [16])(in_RSI + 0x420);
        }
        bVar12 = false;
        bVar11 = false;
        bVar18 = false;
        bVar62 = false;
        local_1bc = 8;
      }
    }
    else {
      _local_98 = *(undefined1 (*) [16])(in_RSI + 0x450);
      local_1bc = 9;
    }
  }
  else {
    local_1bc = 10;
    _local_98 = local_118;
  }
LAB_00101815:
  if (local_1bc != local_12c) {
    if (local_12c == 0) {
      local_12c = local_1bc;
    }
    else if (local_12c == 1) {
      String::parse_latin1((String *)&local_c8,"");
      local_12c = local_1bc;
    }
    else {
      String::substr((int)(CowData<char32_t> *)&local_a0,wVar51);
      String::strip_edges(SUB81((CowData *)&local_a8,0),SUB81((CowData<char32_t> *)&local_a0,0));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((CONCAT44(uStack_a4,local_a8) != 0) && (1 < *(uint *)(CONCAT44(uStack_a4,local_a8) + -8)))
      {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_a8);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      local_12c = local_1bc;
    }
  }
  uVar19 = local_98._0_4_;
  if (((((float)local_98._0_4_ != local_14c) || (local_130 != (float)local_98._4_4_)) ||
      (local_138 != (float)uStack_90)) || (local_134 != uStack_90._4_4_)) {
    local_130 = (float)local_98._4_4_;
    local_138 = (float)uStack_90;
    local_134 = uStack_90._4_4_;
    Variant::Variant((Variant *)local_58,(Color *)local_98);
    Variant::Variant((Variant *)local_78,"color");
    pVVar31 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
    Variant::operator=(pVVar31,(Variant *)local_58);
    if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,local_b8);
    Variant::Variant((Variant *)local_78,uVar54);
    pVVar31 = (Variant *)Dictionary::operator[]((Variant *)this_00);
    Variant::operator=(pVVar31,(Variant *)local_58);
    if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    local_14c = (float)uVar19;
  }
  iVar50 = -1;
  Dictionary::~Dictionary(local_b8);
  uVar54 = uVar56;
  bVar20 = bVar42;
  bVar14 = bVar58;
  bVar17 = bVar22;
LAB_00101a89:
  if ((int)uVar41 <= (int)uVar54) goto LAB_00100b4f;
  goto LAB_00100781;
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



/* GDScriptSyntaxHighlighter::_get_supported_languages() const */

GDScriptSyntaxHighlighter * __thiscall
GDScriptSyntaxHighlighter::_get_supported_languages(GDScriptSyntaxHighlighter *this)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  local_48 = "GDScript";
  local_50 = 0;
  local_40 = 8;
  String::parse_latin1((StrRange *)&local_50);
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar2 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar4 * 8);
        if (*(long *)this_00 != local_50) {
          CowData<char32_t>::_ref(this_00,(CowData *)&local_50);
        }
        goto LAB_00104c87;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00104c87:
  lVar3 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<GDScriptSyntaxHighlighter::ColorRegion>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<GDScriptSyntaxHighlighter::ColorRegion>::_copy_on_write
          (CowData<GDScriptSyntaxHighlighter::ColorRegion> *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar10 = 0x10;
  if (lVar2 * 0x30 != 0) {
    uVar10 = lVar2 * 0x30 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = (uVar10 | uVar10 >> 0x20) + 0x11;
  }
  puVar7 = (undefined8 *)Memory::alloc_static(uVar10,false);
  if (puVar7 != (undefined8 *)0x0) {
    lVar11 = 0;
    *puVar7 = 1;
    puVar7[1] = lVar2;
    puVar8 = puVar7 + 2;
    if (lVar2 != 0) {
      do {
        puVar9 = (undefined4 *)((long)puVar8 + *(long *)this + (-0x10 - (long)puVar7));
        uVar1 = *puVar9;
        uVar5 = *(undefined8 *)(puVar9 + 1);
        uVar6 = *(undefined8 *)(puVar9 + 3);
        puVar8[3] = 0;
        lVar3 = *(long *)(puVar9 + 6);
        *(undefined4 *)puVar8 = uVar1;
        *(undefined8 *)((long)puVar8 + 4) = uVar5;
        *(undefined8 *)((long)puVar8 + 0xc) = uVar6;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 3),(CowData *)(puVar9 + 6));
        }
        puVar8[4] = 0;
        if (*(long *)(puVar9 + 8) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 4),(CowData *)(puVar9 + 8));
        }
        lVar11 = lVar11 + 1;
        *(undefined4 *)(puVar8 + 5) = puVar9[10];
        puVar8 = puVar8 + 6;
      } while (lVar2 != lVar11);
    }
    _unref(this);
    *(undefined8 **)this = puVar7 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* GDScriptSyntaxHighlighter::add_color_region(GDScriptSyntaxHighlighter::ColorRegion::Type, String
   const&, String const&, Color const&, bool, bool) */

void __thiscall
GDScriptSyntaxHighlighter::add_color_region
          (GDScriptSyntaxHighlighter *this,int param_2,String *param_3,CowData *param_4,
          undefined8 *param_5,undefined1 param_6,String param_7)

{
  long *plVar1;
  String *this_00;
  CowData<GDScriptSyntaxHighlighter::ColorRegion> *this_01;
  CowData<char32_t> *this_02;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  String *pSVar11;
  long lVar12;
  undefined1 uVar13;
  undefined4 *puVar14;
  int iVar15;
  long lVar16;
  char *pcVar17;
  undefined1 uVar18;
  int iVar19;
  String *pSVar20;
  long lVar21;
  long in_FS_OFFSET;
  bool bVar22;
  CowData *local_f0;
  CowData<char32_t> *local_d8;
  CowData<char32_t> local_c0 [8];
  undefined8 local_b8;
  String local_b0 [8];
  int local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined1 local_90 [16];
  undefined4 local_80;
  int local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  long local_60;
  long local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = *(int **)param_3;
  if ((piVar2 == (int *)0x0) || (lVar16 = *(long *)(piVar2 + -2), (uint)lVar16 < 2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar17 = "Color region start key cannot be empty.";
      pcVar6 = "Condition \"p_start_key.is_empty()\" is true.";
      uVar9 = 0x3b0;
      goto LAB_00105640;
    }
    goto LAB_0010577f;
  }
  if (lVar16 < 1) goto LAB_001056a8;
  iVar19 = *piVar2;
  if (iVar19 == 0x5f) {
LAB_001053c0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar17 = "Color region start key must start with a symbol.";
      pcVar6 = "Condition \"!is_symbol(p_start_key[0])\" is true.";
      uVar9 = 0x3b1;
      goto LAB_00105640;
    }
    goto LAB_0010577f;
  }
  if (iVar19 - 0x21U < 0x40) {
    if ((0xfc000000fe007fffU >> ((ulong)(iVar19 - 0x21U) & 0x3f) & 1) == 0) goto LAB_001053c0;
  }
  else if (((3 < iVar19 - 0x7bU) && (iVar19 != 9)) && (iVar19 != 0x20)) goto LAB_001053c0;
  piVar2 = *(int **)param_4;
  if ((piVar2 == (int *)0x0) || (lVar16 = *(long *)(piVar2 + -2), (uint)lVar16 < 2))
  goto LAB_00104fa6;
  if (lVar16 < 1) {
LAB_001056a8:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar16,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar19 = *piVar2;
  if (iVar19 == 0x5f) {
LAB_00105550:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar17 = "Color region end key must start with a symbol.";
      pcVar6 = "Condition \"!is_symbol(p_end_key[0])\" is true.";
      uVar9 = 0x3b4;
LAB_00105640:
      _err_print_error("add_color_region","modules/gdscript/editor/gdscript_highlighter.cpp",uVar9,
                       pcVar6,pcVar17,0);
      return;
    }
  }
  else {
    if (iVar19 - 0x21U < 0x40) {
      if ((0xfc000000fe007fffU >> ((ulong)(iVar19 - 0x21U) & 0x3f) & 1) == 0) goto LAB_00105550;
    }
    else if (((3 < iVar19 - 0x7bU) && (iVar19 != 9)) && (iVar19 != 0x20)) goto LAB_00105550;
LAB_00104fa6:
    this_01 = (CowData<GDScriptSyntaxHighlighter::ColorRegion> *)(this + 0x2f0);
    CowData<GDScriptSyntaxHighlighter::ColorRegion>::_copy_on_write(this_01);
    pSVar20 = *(String **)(this + 0x2f0);
    CowData<GDScriptSyntaxHighlighter::ColorRegion>::_copy_on_write(this_01);
    pSVar11 = *(String **)(this + 0x2f0);
    if (pSVar11 != (String *)0x0) {
      pSVar11 = pSVar11 + *(long *)(pSVar11 + -8) * 0x30;
    }
    if (pSVar11 == pSVar20) {
      lVar16 = *(long *)param_3;
      lVar12 = 0;
      iVar19 = 0;
LAB_001055d3:
      local_a4 = *param_5;
      uStack_9c = param_5[1];
      local_90 = (undefined1  [16])0x0;
      if (lVar16 != 0) {
LAB_00105069:
        local_90 = (undefined1  [16])0x0;
        plVar1 = (long *)(lVar16 + -0x10);
        do {
          lVar16 = *plVar1;
          if (lVar16 == 0) goto LAB_0010508e;
          LOCK();
          lVar21 = *plVar1;
          bVar22 = lVar16 == lVar21;
          if (bVar22) {
            *plVar1 = lVar16 + 1;
            lVar21 = lVar16;
          }
          UNLOCK();
        } while (!bVar22);
        if (lVar21 != -1) {
          local_90._8_8_ = 0;
          local_90._0_8_ = *(ulong *)param_3;
        }
LAB_0010508e:
        lVar16 = local_90._8_8_;
      }
LAB_00105096:
      local_80 = 0;
      this_02 = (CowData<char32_t> *)(local_90 + 8);
      local_a8 = param_2;
      if (*(long *)param_4 != lVar16) {
        CowData<char32_t>::_ref(this_02,param_4);
        lVar16 = local_90._8_8_;
      }
      local_60 = 0;
      uVar18 = param_2 - 1U < 2;
      uVar13 = param_2 - 3U < 2;
      local_80 = CONCAT13(uVar13,CONCAT12(uVar18,CONCAT11(param_7,param_6)));
      local_78 = local_a8;
      local_74 = local_a4;
      uStack_6c = uStack_9c;
      if (local_90._0_8_ != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_90);
      }
      local_d8 = (CowData<char32_t> *)local_90;
      local_f0 = (CowData *)&local_60;
      local_58 = 0;
      if (lVar16 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)this_02);
      }
      local_50 = CONCAT11(param_7,param_6);
      if (*(long *)(this + 0x2f0) == 0) {
        lVar16 = 1;
        lVar21 = 0;
      }
      else {
        lVar21 = *(long *)(*(long *)(this + 0x2f0) + -8);
        lVar16 = lVar21 + 1;
      }
      local_4e = uVar18;
      local_4d = uVar13;
      if (lVar12 < lVar16) {
        iVar5 = CowData<GDScriptSyntaxHighlighter::ColorRegion>::resize<false>(this_01,lVar16);
        if (iVar5 == 0) {
          CowData<GDScriptSyntaxHighlighter::ColorRegion>::_copy_on_write(this_01);
          lVar16 = *(long *)(this + 0x2f0);
          if (lVar12 < lVar21) {
            puVar14 = (undefined4 *)(lVar21 * 0x30 + lVar16);
            do {
              lVar7 = *(long *)(puVar14 + -6);
              *puVar14 = puVar14[-0xc];
              lVar8 = *(long *)(puVar14 + 6);
              *(undefined8 *)(puVar14 + 1) = *(undefined8 *)(puVar14 + -0xb);
              *(undefined8 *)(puVar14 + 3) = *(undefined8 *)(puVar14 + -9);
              if (lVar8 != lVar7) {
                if (lVar8 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar7 = *(long *)(puVar14 + 6);
                    *(undefined8 *)(puVar14 + 6) = 0;
                    Memory::free_static((void *)(lVar7 + -0x10),false);
                  }
                  lVar7 = *(long *)(puVar14 + -6);
                }
                *(long *)(puVar14 + 6) = lVar7;
                *(undefined8 *)(puVar14 + -6) = 0;
              }
              lVar7 = *(long *)(puVar14 + 8);
              lVar8 = *(long *)(puVar14 + -4);
              if (lVar7 != lVar8) {
                if (lVar7 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar7 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar7 = *(long *)(puVar14 + 8);
                    *(undefined8 *)(puVar14 + 8) = 0;
                    Memory::free_static((void *)(lVar7 + -0x10),false);
                  }
                  lVar8 = *(long *)(puVar14 + -4);
                }
                *(long *)(puVar14 + 8) = lVar8;
                *(undefined8 *)(puVar14 + -4) = 0;
              }
              lVar21 = lVar21 + -1;
              puVar14[10] = puVar14[-2];
              puVar14 = puVar14 + -0xc;
              uVar18 = local_4e;
              uVar13 = local_4d;
              uVar10 = local_50;
            } while (lVar12 != lVar21);
          }
          else {
            uVar10 = CONCAT11(param_7,param_6);
          }
          piVar2 = (int *)(lVar16 + (long)iVar19 * 0x30);
          *(undefined8 *)(piVar2 + 1) = local_74;
          *(undefined8 *)(piVar2 + 3) = uStack_6c;
          *piVar2 = local_78;
          if (*(long *)(piVar2 + 6) != local_60) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(piVar2 + 6),local_f0);
          }
          if (*(long *)(piVar2 + 8) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(piVar2 + 8),(CowData *)&local_58);
          }
          *(undefined2 *)(piVar2 + 10) = uVar10;
          *(undefined1 *)((long)piVar2 + 0x2a) = uVar18;
          *(undefined1 *)((long)piVar2 + 0x2b) = uVar13;
        }
        else {
          _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                           "Condition \"err\" is true. Returning: err",0,0);
        }
      }
      else {
        _err_print_index_error
                  ("insert","./core/templates/cowdata.h",0xf0,lVar12,lVar16,"p_pos","new_size","",
                   false,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      SyntaxHighlighter::clear_highlighting_cache();
      CowData<char32_t>::_unref(this_02);
      CowData<char32_t>::_unref(local_d8);
    }
    else {
      pSVar20 = pSVar20 + 0x18;
      iVar19 = 0;
      cVar4 = String::operator==(pSVar20,param_3);
      if (cVar4 != '\0') goto LAB_0010544c;
      do {
        do {
          lVar16 = *(long *)param_3;
          lVar12 = *(long *)pSVar20;
          if (lVar16 == 0) {
            if ((lVar12 == 0) || (iVar5 = (int)*(undefined8 *)(lVar12 + -8), iVar5 == 0)) {
              lVar12 = (long)iVar19;
              local_a4 = *param_5;
              uStack_9c = param_5[1];
              local_90 = (undefined1  [16])0x0;
              goto LAB_00105096;
            }
            iVar15 = 0;
LAB_00105416:
            iVar5 = iVar5 + -1;
          }
          else {
            iVar15 = (int)*(undefined8 *)(lVar16 + -8);
            if (iVar15 == 0) {
              if (lVar12 != 0) {
                iVar5 = (int)*(undefined8 *)(lVar12 + -8);
                iVar15 = 0;
                if (iVar5 != 0) goto LAB_00105416;
              }
              lVar12 = (long)iVar19;
              local_a4 = *param_5;
              uStack_9c = param_5[1];
              goto LAB_00105069;
            }
            iVar15 = iVar15 + -1;
            if (lVar12 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = (int)*(undefined8 *)(lVar12 + -8);
              if (iVar5 != 0) goto LAB_00105416;
            }
          }
          if (iVar5 <= iVar15) {
LAB_001055d0:
            lVar12 = (long)iVar19;
            goto LAB_001055d3;
          }
          this_00 = pSVar20 + 0x30;
          iVar19 = iVar19 + 1;
          if (pSVar11 == pSVar20 + 0x18) goto LAB_001055d0;
          cVar4 = String::operator==(this_00,param_3);
          pSVar20 = this_00;
        } while (cVar4 == '\0');
LAB_0010544c:
      } while (pSVar20[0x11] != param_7);
      local_b8 = 0;
      String::parse_latin1((String *)&local_b8,"\' already exists.");
      operator+((char *)local_c0,(String *)"Color region with start key \'");
      String::operator+(local_b0,(String *)local_c0);
      _err_print_error("add_color_region","modules/gdscript/editor/gdscript_highlighter.cpp",0x3b9,
                       "Condition \"region.start_key == p_start_key && region.r_prefix == p_r_prefix\" is true."
                       ,local_b0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
      CowData<char32_t>::_unref(local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0010577f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GDScriptSyntaxHighlighter::_update_cache() */

void GDScriptSyntaxHighlighter::_update_cache(void)

{
  HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
  *this;
  HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
  *this_00;
  GDScriptSyntaxHighlighter *pGVar1;
  HashMap<String,GDScriptSyntaxHighlighter::CommentMarkerLevel,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptSyntaxHighlighter::CommentMarkerLevel>>>
  *this_01;
  uint uVar2;
  void *pvVar3;
  Object *pOVar4;
  List *pLVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  Object *pOVar10;
  StringName *pSVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  GDScriptSyntaxHighlighter *in_RDI;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  String *pSVar20;
  long *plVar21;
  char *pcVar22;
  long in_FS_OFFSET;
  bool bVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 in_XMM1_Da;
  undefined4 uVar28;
  undefined4 in_XMM1_Db;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  ulong uVar44;
  Object *local_1d8;
  String *local_1d0;
  long *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  Object *local_f8;
  Variant local_f0 [8];
  undefined8 local_e8;
  long local_e0;
  long *local_d8;
  long local_d0;
  undefined8 *local_c8;
  long local_c0;
  char *local_b8;
  long local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined4 local_7c;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  this = (HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
          *)(in_RDI + 0x328);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_RDI + 0x330) != 0) && (*(int *)(in_RDI + 0x354) != 0)) {
    lVar14 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RDI + 0x350) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(in_RDI + 0x338) + lVar14) != 0) {
          *(int *)(*(long *)(in_RDI + 0x338) + lVar14) = 0;
          pvVar3 = *(void **)(*(long *)(in_RDI + 0x330) + lVar14 * 2);
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(in_RDI + 0x330) + lVar14 * 2) = 0;
        }
        lVar14 = lVar14 + 4;
      } while ((ulong)uVar2 << 2 != lVar14);
    }
    *(undefined4 *)(in_RDI + 0x354) = 0;
    *(undefined1 (*) [16])(in_RDI + 0x340) = (undefined1  [16])0x0;
  }
  this_00 = (HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
             *)(in_RDI + 0x358);
  if ((*(long *)(in_RDI + 0x360) != 0) && (*(int *)(in_RDI + 900) != 0)) {
    lVar14 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RDI + 0x380) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(in_RDI + 0x368) + lVar14) != 0) {
          *(int *)(*(long *)(in_RDI + 0x368) + lVar14) = 0;
          pvVar3 = *(void **)(*(long *)(in_RDI + 0x360) + lVar14 * 2);
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(in_RDI + 0x360) + lVar14 * 2) = 0;
        }
        lVar14 = lVar14 + 4;
      } while ((ulong)uVar2 << 2 != lVar14);
    }
    *(undefined4 *)(in_RDI + 900) = 0;
    *(undefined1 (*) [16])(in_RDI + 0x370) = (undefined1  [16])0x0;
  }
  if ((*(long *)(in_RDI + 0x390) != 0) && (*(int *)(in_RDI + 0x3b4) != 0)) {
    lVar14 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RDI + 0x3b0) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(in_RDI + 0x398) + lVar14) != 0) {
          *(int *)(*(long *)(in_RDI + 0x398) + lVar14) = 0;
          pvVar3 = *(void **)(*(long *)(in_RDI + 0x390) + lVar14 * 2);
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(in_RDI + 0x390) + lVar14 * 2) = 0;
        }
        lVar14 = lVar14 + 4;
      } while (lVar14 != (ulong)uVar2 << 2);
    }
    *(undefined4 *)(in_RDI + 0x3b4) = 0;
    *(undefined1 (*) [16])(in_RDI + 0x3a0) = (undefined1  [16])0x0;
  }
  lVar14 = *(long *)(in_RDI + 0x3b8);
  if ((lVar14 != 0) && (*(int *)(in_RDI + 0x3dc) != 0)) {
    if ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RDI + 0x3d8) * 4) == 0) ||
       (memset(*(void **)(in_RDI + 0x3d0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RDI + 0x3d8) * 4) * 4),
       *(int *)(in_RDI + 0x3dc) != 0)) {
      lVar15 = 0;
      while( true ) {
        if ((StringName::configured != '\0') && (*(long *)(lVar14 + lVar15 * 8) != 0)) {
          StringName::unref();
        }
        lVar15 = lVar15 + 1;
        if (*(uint *)(in_RDI + 0x3dc) <= (uint)lVar15) break;
        lVar14 = *(long *)(in_RDI + 0x3b8);
      }
    }
    *(undefined4 *)(in_RDI + 0x3dc) = 0;
  }
  if ((*(long *)(in_RDI + 0x2f0) != 0) && (*(long *)(*(long *)(in_RDI + 0x2f0) + -8) != 0)) {
    CowData<GDScriptSyntaxHighlighter::ColorRegion>::_unref
              ((CowData<GDScriptSyntaxHighlighter::ColorRegion> *)(in_RDI + 0x2f0));
  }
  if ((*(long *)(in_RDI + 0x300) != 0) && (*(int *)(in_RDI + 0x324) != 0)) {
    lVar14 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RDI + 800) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(in_RDI + 0x308) + lVar14) != 0) {
          *(int *)(*(long *)(in_RDI + 0x308) + lVar14) = 0;
          Memory::free_static(*(void **)(*(long *)(in_RDI + 0x300) + lVar14 * 2),false);
          *(undefined8 *)(*(long *)(in_RDI + 0x300) + lVar14 * 2) = 0;
        }
        lVar14 = lVar14 + 4;
      } while (lVar14 != (ulong)uVar2 << 2);
    }
    *(undefined4 *)(in_RDI + 0x324) = 0;
    *(undefined1 (*) [16])(in_RDI + 0x310) = (undefined1  [16])0x0;
  }
  local_b8 = (char *)0x0;
  uVar25 = Control::get_theme_color
                     (*(StringName **)(in_RDI + 0x260),
                      (StringName *)(SceneStringNames::singleton + 0xb0));
  bVar23 = StringName::configured != '\0';
  *(undefined8 *)(in_RDI + 0x3e0) = uVar25;
  *(ulong *)(in_RDI + 1000) = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if ((bVar23) && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"text_editor/theme/highlighting/symbol_color");
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x3f0) = uVar25;
  *(ulong *)(in_RDI + 0x3f8) = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"text_editor/theme/highlighting/function_color");
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x400) = uVar25;
  *(ulong *)(in_RDI + 0x408) = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"text_editor/theme/highlighting/number_color");
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x440) = uVar25;
  *(ulong *)(in_RDI + 0x448) = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"text_editor/theme/highlighting/member_variable_color");
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x450) = uVar25;
  *(ulong *)(in_RDI + 0x458) = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"text_editor/theme/highlighting/engine_type_color");
  _EDITOR_GET((String *)local_58);
  uVar26 = Variant::operator_cast_to_Color((Variant *)local_58);
  uVar25 = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_130 = (long *)0x0;
  ClassDB::get_class_list((List *)&local_130);
  if (local_130 != (long *)0x0) {
    for (pSVar11 = (StringName *)*local_130; pSVar11 != (StringName *)0x0;
        pSVar11 = *(StringName **)(pSVar11 + 8)) {
      while (cVar6 = ClassDB::is_class_exposed(pSVar11), cVar6 != '\0') {
        puVar9 = (undefined8 *)
                 HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                 ::operator[](this,pSVar11);
        pSVar11 = *(StringName **)(pSVar11 + 8);
        *puVar9 = uVar26;
        puVar9[1] = uVar25;
        if (pSVar11 == (StringName *)0x0) goto LAB_00105df8;
      }
    }
  }
LAB_00105df8:
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"text_editor/theme/highlighting/user_type_color");
  _EDITOR_GET((String *)local_58);
  uVar26 = Variant::operator_cast_to_Color((Variant *)local_58);
  uVar25 = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_128 = (undefined8 *)0x0;
  ScriptServer::get_global_class_list((List *)&local_128);
  if (local_128 != (undefined8 *)0x0) {
    pSVar11 = (StringName *)*local_128;
    while (pSVar11 != (StringName *)0x0) {
      puVar9 = (undefined8 *)
               HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
               ::operator[](this,pSVar11);
      pSVar11 = *(StringName **)(pSVar11 + 8);
      *puVar9 = uVar26;
      puVar9[1] = uVar25;
    }
  }
  ProjectSettings::get_singleton();
  lVar14 = ProjectSettings::get_autoload_list();
  plVar21 = *(long **)(lVar14 + 0x18);
  pLVar5 = GDScriptLanguage::singleton;
  while (GDScriptLanguage::singleton = pLVar5, plVar21 != (long *)0x0) {
    while ((char)plVar21[5] == '\0') {
      plVar21 = (long *)*plVar21;
      if (plVar21 == (long *)0x0) goto LAB_00105ef2;
    }
    puVar9 = (undefined8 *)
             HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
             ::operator[](this,(StringName *)(plVar21 + 3));
    plVar21 = (long *)*plVar21;
    *puVar9 = uVar26;
    puVar9[1] = uVar25;
    pLVar5 = GDScriptLanguage::singleton;
  }
LAB_00105ef2:
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"text_editor/theme/highlighting/base_type_color");
  _EDITOR_GET((String *)local_58);
  uVar26 = Variant::operator_cast_to_Color((Variant *)local_58);
  uVar25 = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_120 = (undefined8 *)0x0;
  ScriptLanguage::get_core_type_words(pLVar5);
  if (local_120 != (undefined8 *)0x0) {
    for (pSVar20 = (String *)*local_120; pSVar20 != (String *)0x0;
        pSVar20 = *(String **)(pSVar20 + 8)) {
      StringName::StringName((StringName *)&local_b8,pSVar20,false);
      puVar9 = (undefined8 *)
               HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
               ::operator[](this,(StringName *)&local_b8);
      bVar23 = StringName::configured != '\0';
      *puVar9 = uVar26;
      puVar9[1] = uVar25;
      if ((bVar23) && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
    }
  }
  if ((_update_cache()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_cache()::{lambda()#1}::operator()()::sname), iVar8 != 0))
  {
    _scs_create((char *)&_update_cache()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_cache()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_cache()::{lambda()#1}::operator()()::sname);
  }
  puVar9 = (undefined8 *)
           HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
           ::operator[](this,(StringName *)&_update_cache()::{lambda()#1}::operator()()::sname);
  *puVar9 = uVar26;
  puVar9[1] = uVar25;
  if ((_update_cache()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_cache()::{lambda()#2}::operator()()::sname), iVar8 != 0))
  {
    _scs_create((char *)&_update_cache()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_cache()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_cache()::{lambda()#2}::operator()()::sname);
  }
  puVar9 = (undefined8 *)
           HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
           ::operator[](this,(StringName *)&_update_cache()::{lambda()#2}::operator()()::sname);
  *puVar9 = uVar26;
  puVar9[1] = uVar25;
  if ((_update_cache()::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_cache()::{lambda()#3}::operator()()::sname), iVar8 != 0))
  {
    _scs_create((char *)&_update_cache()::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_cache()::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_cache()::{lambda()#3}::operator()()::sname);
  }
  puVar9 = (undefined8 *)
           HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
           ::operator[](this,(StringName *)&_update_cache()::{lambda()#3}::operator()()::sname);
  *puVar9 = uVar26;
  puVar9[1] = uVar25;
  if ((_update_cache()::{lambda()#4}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_cache()::{lambda()#4}::operator()()::sname), iVar8 != 0))
  {
    _scs_create((char *)&_update_cache()::{lambda()#4}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_cache()::{lambda()#4}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_cache()::{lambda()#4}::operator()()::sname);
  }
  puVar9 = (undefined8 *)
           HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
           ::operator[](this,(StringName *)&_update_cache()::{lambda()#4}::operator()()::sname);
  *puVar9 = uVar26;
  puVar9[1] = uVar25;
  if ((_update_cache()::{lambda()#5}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_cache()::{lambda()#5}::operator()()::sname), iVar8 != 0))
  {
    _scs_create((char *)&_update_cache()::{lambda()#5}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_cache()::{lambda()#5}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_cache()::{lambda()#5}::operator()()::sname);
  }
  puVar9 = (undefined8 *)
           HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
           ::operator[](this,(StringName *)&_update_cache()::{lambda()#5}::operator()()::sname);
  *puVar9 = uVar26;
  puVar9[1] = uVar25;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"text_editor/theme/highlighting/keyword_color");
  _EDITOR_GET((String *)local_58);
  uVar26 = Variant::operator_cast_to_Color((Variant *)local_58);
  uVar25 = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_b8,"text_editor/theme/highlighting/control_flow_keyword_color");
  _EDITOR_GET((String *)local_58);
  uVar27 = Variant::operator_cast_to_Color((Variant *)local_58);
  uVar17 = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_118 = (long *)0x0;
  (**(code **)(*(long *)pLVar5 + 0x178))(pLVar5,(List<String,DefaultAllocator> *)&local_118);
  if (local_118 != (long *)0x0) {
    pSVar20 = (String *)*local_118;
joined_r0x001061c8:
    if (pSVar20 != (String *)0x0) {
      do {
        cVar6 = (**(code **)(*(long *)pLVar5 + 0x180))(pLVar5,pSVar20);
        if (cVar6 == '\0') {
          StringName::StringName((StringName *)&local_b8,pSVar20,false);
          puVar9 = (undefined8 *)
                   HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                   ::operator[](this_00,(StringName *)&local_b8);
          bVar23 = StringName::configured == '\0';
          *puVar9 = uVar26;
          puVar9[1] = uVar25;
          if (bVar23) goto code_r0x00106262;
LAB_00106200:
          if (local_b8 != (char *)0x0) {
            StringName::unref();
          }
        }
        else {
          StringName::StringName((StringName *)&local_b8,pSVar20,false);
          puVar9 = (undefined8 *)
                   HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                   ::operator[](this_00,(StringName *)&local_b8);
          bVar23 = StringName::configured != '\0';
          *puVar9 = uVar27;
          puVar9[1] = uVar17;
          if (bVar23) goto LAB_00106200;
        }
        pSVar20 = *(String **)(pSVar20 + 8);
        if (pSVar20 == (String *)0x0) break;
      } while( true );
    }
  }
  if ((_update_cache()::{lambda()#6}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_cache()::{lambda()#6}::operator()()::sname), iVar8 != 0))
  {
    _scs_create((char *)&_update_cache()::{lambda()#6}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_cache()::{lambda()#6}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_cache()::{lambda()#6}::operator()()::sname);
  }
  puVar9 = (undefined8 *)
           HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
           ::operator[](this_00,(StringName *)&_update_cache()::{lambda()#6}::operator()()::sname);
  uVar25 = *(undefined8 *)(in_RDI + 0x408);
  *puVar9 = *(undefined8 *)(in_RDI + 0x400);
  puVar9[1] = uVar25;
  if ((_update_cache()::{lambda()#7}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_cache()::{lambda()#7}::operator()()::sname), iVar8 != 0))
  {
    _scs_create((char *)&_update_cache()::{lambda()#7}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_cache()::{lambda()#7}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_cache()::{lambda()#7}::operator()()::sname);
  }
  puVar9 = (undefined8 *)
           HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
           ::operator[](this_00,(StringName *)&_update_cache()::{lambda()#7}::operator()()::sname);
  uVar25 = *(undefined8 *)(in_RDI + 0x408);
  local_110 = (long *)0x0;
  *puVar9 = *(undefined8 *)(in_RDI + 0x400);
  puVar9[1] = uVar25;
  GDScriptUtilityFunctions::get_function_list((List *)&local_110);
  Variant::get_utility_function_list((List *)&local_110);
  if ((_update_cache()::{lambda()#8}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_cache()::{lambda()#8}::operator()()::sname), iVar8 != 0))
  {
    _scs_create((char *)&_update_cache()::{lambda()#8}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_cache()::{lambda()#8}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_cache()::{lambda()#8}::operator()()::sname);
  }
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_b8);
  if ((_update_cache()::{lambda()#9}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_cache()::{lambda()#9}::operator()()::sname), iVar8 != 0))
  {
    _scs_create((char *)&_update_cache()::{lambda()#9}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_cache()::{lambda()#9}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_cache()::{lambda()#9}::operator()()::sname);
  }
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_b8);
  if (local_110 != (long *)0x0) {
    for (lVar14 = *local_110; lVar14 != 0; lVar14 = *(long *)(lVar14 + 8)) {
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                ((StringName *)&local_b8);
    }
  }
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"text_editor/theme/highlighting/comment_color");
  _EDITOR_GET((String *)local_58);
  local_a8[0] = Variant::operator_cast_to_Color((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = (long *)0x0;
  (**(code **)(*(long *)pLVar5 + 0x188))(pLVar5,(List<String,DefaultAllocator> *)&local_108);
  if ((local_108 != (long *)0x0) && (pcVar22 = (char *)*local_108, pcVar22 != (char *)0x0)) {
    do {
      String::get_slice((char *)&local_c8,(int)pcVar22);
      iVar8 = String::get_slice_count(pcVar22);
      if (iVar8 < 2) {
        local_b8 = (char *)0x0;
LAB_0010645c:
        bVar23 = true;
      }
      else {
        String::get_slice((char *)&local_b8,(int)pcVar22);
        if ((local_b8 == (char *)0x0) ||
           (iVar8 = (int)*(undefined8 *)((long)local_b8 + -8), iVar8 == 0)) goto LAB_0010645c;
        bVar23 = iVar8 == 1;
      }
      add_color_region(in_RDI,3,(CowData<char32_t> *)&local_c8,(String *)&local_b8,local_a8,bVar23,0
                      );
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      pcVar22 = *(char **)(pcVar22 + 8);
    } while (pcVar22 != (char *)0x0);
  }
  local_c8 = (undefined8 *)0x0;
  local_b8 = "text_editor/theme/highlighting/doc_comment_color";
  local_b0 = 0x30;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)local_58);
  local_98[0] = Variant::operator_cast_to_Color((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_100 = (long *)0x0;
  (**(code **)(*(long *)pLVar5 + 400))(pLVar5,(List<String,DefaultAllocator> *)&local_100);
  if ((local_100 != (long *)0x0) && (pcVar22 = (char *)*local_100, pcVar22 != (char *)0x0)) {
    do {
      String::get_slice((char *)&local_c8,(int)pcVar22);
      iVar8 = String::get_slice_count(pcVar22);
      if (iVar8 < 2) {
        local_b8 = (char *)0x0;
LAB_001065e4:
        bVar23 = true;
      }
      else {
        String::get_slice((char *)&local_b8,(int)pcVar22);
        if ((local_b8 == (char *)0x0) || ((int)*(undefined8 *)(local_b8 + -8) == 0))
        goto LAB_001065e4;
        bVar23 = (int)*(undefined8 *)(local_b8 + -8) == 1;
      }
      add_color_region(in_RDI,3,(StrRange *)&local_c8,(String *)&local_b8,local_98,bVar23,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      pcVar22 = *(char **)(pcVar22 + 8);
    } while (pcVar22 != (char *)0x0);
  }
  local_b8 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_b8,"text_editor/theme/highlighting/folded_code_region_color");
  _EDITOR_GET((String *)local_58);
  local_88 = Variant::operator_cast_to_Color((Variant *)local_58);
  local_7c = 0x3f800000;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_c8 = (undefined8 *)0x0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"#region");
  uVar44 = 0;
  add_color_region(in_RDI,4,(String *)&local_b8,(StrRange *)&local_c8,&local_88,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = "";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_b8 = "#endregion";
  local_d8 = (long *)0x0;
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_d8);
  add_color_region(in_RDI,4,(StrRange *)&local_d8,(StrRange *)&local_c8,&local_88,1,
                   uVar44 & 0xffffffff00000000);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = "text_editor/theme/highlighting/string_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x2b;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x460) = uVar25;
  *(ulong *)(in_RDI + 0x468) = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pGVar1 = in_RDI + 0x460;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_c8 = (undefined8 *)0x0;
  String::parse_latin1((String *)&local_c8,"\"");
  local_d8 = (long *)0x0;
  local_b8 = "\"";
  local_b0 = 1;
  String::parse_latin1((StrRange *)&local_d8);
  uVar44 = 0;
  add_color_region(in_RDI,1,(StrRange *)&local_d8,(StrRange *)&local_c8,pGVar1,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_c8 = (undefined8 *)0x0;
  String::parse_latin1((String *)&local_c8,"\'");
  local_b8 = "\'";
  local_d8 = (long *)0x0;
  local_b0 = 1;
  String::parse_latin1((StrRange *)&local_d8);
  uVar44 = uVar44 & 0xffffffff00000000;
  add_color_region(in_RDI,1,(StrRange *)&local_d8,(StrRange *)&local_c8,pGVar1,0,uVar44);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_c8 = (undefined8 *)0x0;
  String::parse_latin1((String *)&local_c8,"\"\"\"");
  local_b8 = "\"\"\"";
  local_d8 = (long *)0x0;
  local_b0 = 3;
  String::parse_latin1((StrRange *)&local_d8);
  uVar44 = uVar44 & 0xffffffff00000000;
  add_color_region(in_RDI,2,(StrRange *)&local_d8,(StrRange *)&local_c8,pGVar1,0,uVar44);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = "\'\'\'";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 3;
  String::parse_latin1((StrRange *)&local_c8);
  local_b8 = "\'\'\'";
  local_d8 = (long *)0x0;
  local_b0 = 3;
  String::parse_latin1((StrRange *)&local_d8);
  uVar44 = uVar44 & 0xffffffff00000000;
  add_color_region(in_RDI,2,(StrRange *)&local_d8,(StrRange *)&local_c8,pGVar1,0,uVar44);
  uVar28 = (undefined4)(uVar44 >> 0x20);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_c8 = (undefined8 *)0x0;
  local_b8 = "\"";
  local_b0 = 1;
  String::parse_latin1((StrRange *)&local_c8);
  local_d8 = (long *)0x0;
  local_b8 = "\"";
  local_b0 = 1;
  String::parse_latin1((StrRange *)&local_d8);
  uVar25 = CONCAT44(uVar28,1);
  add_color_region(in_RDI,1,(StrRange *)&local_d8,(StrRange *)&local_c8,pGVar1,0,uVar25);
  uVar28 = (undefined4)((ulong)uVar25 >> 0x20);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"\'");
  local_c8 = (undefined8 *)0x0;
  String::parse_latin1((String *)&local_c8,"\'");
  uVar25 = CONCAT44(uVar28,1);
  add_color_region(in_RDI,1,(StrRange *)&local_c8,(String *)&local_b8,pGVar1,0,uVar25);
  uVar28 = (undefined4)((ulong)uVar25 >> 0x20);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"\"\"\"");
  local_c8 = (undefined8 *)0x0;
  String::parse_latin1((String *)&local_c8,"\"\"\"");
  uVar25 = CONCAT44(uVar28,1);
  add_color_region(in_RDI,2,(StrRange *)&local_c8,(String *)&local_b8,pGVar1,0,uVar25);
  uVar28 = (undefined4)((ulong)uVar25 >> 0x20);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"\'\'\'");
  local_c8 = (undefined8 *)0x0;
  String::parse_latin1((String *)&local_c8,"\'\'\'");
  add_color_region(in_RDI,2,(StrRange *)&local_c8,(String *)&local_b8,pGVar1,0,CONCAT44(uVar28,1));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  pOVar4 = *(Object **)(in_RDI + 0x2b0);
  if (pOVar4 == (Object *)0x0) {
    local_f8 = (Object *)0x0;
    local_1d8 = (Object *)0x0;
  }
  else {
    cVar6 = RefCounted::reference();
    local_f8 = (Object *)0x0;
    if (cVar6 != '\0') {
      pOVar10 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Script::typeinfo);
      if ((pOVar10 != (Object *)0x0) &&
         (cVar6 = RefCounted::reference(), local_f8 = pOVar10, cVar6 == '\0')) {
        local_f8 = (Object *)0x0;
      }
      cVar6 = RefCounted::unreference();
      if (cVar6 == '\0') {
        local_1d8 = local_f8;
      }
      else {
        cVar6 = predelete_handler(pOVar4);
        local_1d8 = local_f8;
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      if (local_1d8 != (Object *)0x0) {
        local_b8 = (char *)0x0;
        String::parse_latin1
                  ((String *)&local_b8,"text_editor/theme/highlighting/member_variable_color");
        _EDITOR_GET((String *)local_58);
        uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        (**(code **)(*(long *)local_1d8 + 0x1f0))((StringName *)&local_e0);
        if (local_e0 != 0) {
          local_d8 = (long *)0x0;
          ClassDB::get_property_list((StringName *)&local_e0,(List *)&local_d8,false,(Object *)0x0);
          if (local_d8 != (long *)0x0) {
            for (lVar14 = *local_d8; lVar14 != 0; lVar14 = *(long *)(lVar14 + 0x30)) {
              local_c8 = (undefined8 *)0x0;
              if (*(long *)(lVar14 + 8) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(lVar14 + 8));
              }
              if (((*(uint *)(lVar14 + 0x28) & 0x1c0) == 0) &&
                 (iVar8 = String::find_char((wchar32)(StrRange *)&local_c8,0x2f), iVar8 == -1)) {
                StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
                puVar9 = (undefined8 *)
                         HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                         ::operator[]((HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                                       *)(in_RDI + 0x388),(StringName *)&local_b8);
                bVar23 = StringName::configured != '\0';
                *puVar9 = uVar25;
                puVar9[1] = CONCAT44(in_XMM1_Db,in_XMM1_Da);
                if ((bVar23) && (local_b8 != (char *)0x0)) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            }
          }
          local_c8 = (undefined8 *)0x0;
          ClassDB::get_integer_constant_list((StringName *)&local_e0,(List *)&local_c8,false);
          if (local_c8 != (undefined8 *)0x0) {
            for (pSVar20 = (String *)*local_c8; pSVar20 != (String *)0x0;
                pSVar20 = *(String **)(pSVar20 + 8)) {
              StringName::StringName((StringName *)&local_b8,pSVar20,false);
              puVar9 = (undefined8 *)
                       HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                       ::operator[]((HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
                                     *)(in_RDI + 0x388),(StringName *)&local_b8);
              bVar23 = StringName::configured != '\0';
              *puVar9 = uVar25;
              puVar9[1] = CONCAT44(in_XMM1_Db,in_XMM1_Da);
              if ((bVar23) && (local_b8 != (char *)0x0)) {
                StringName::unref();
              }
            }
          }
          List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_c8);
          List<PropertyInfo,DefaultAllocator>::~List
                    ((List<PropertyInfo,DefaultAllocator> *)&local_d8);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
            StringName::unref();
          }
        }
        goto LAB_00106f2c;
      }
    }
    local_1d8 = (Object *)0x0;
  }
LAB_00106f2c:
  local_1d0 = (String *)&local_e0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"text_editor/theme/color_theme");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String(local_f0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  cVar6 = String::operator==((String *)local_f0,"Godot 2");
  if ((cVar6 == '\0') && (cVar7 = EditorThemeManager::is_dark_theme(), cVar7 == '\0')) {
    uVar43 = 0;
    uVar13 = 0;
    uVar25 = CONCAT44(_LC98,_LC97);
    uVar19 = 0;
    uVar28 = 0;
    uVar26 = _LC92;
    uVar17 = _LC93;
    uVar30 = _LC95;
    uVar31 = _LC94;
    uVar34 = _LC100;
    uVar35 = _LC99;
    uVar36 = _LC79;
    uVar37 = _LC13;
    uVar38 = _LC98;
    uVar39 = _LC83;
    uVar40 = _LC88;
    uVar41 = uVar28;
    uVar42 = _LC96;
    uVar16 = _LC85;
    uVar18 = _LC94;
    uVar24 = _LC97;
    uVar33 = _LC101;
    uVar32 = _LC102;
  }
  else {
    uVar25 = CONCAT44(_LC72._4_4_,(undefined4)_LC72);
    uVar26 = CONCAT44(_UNK_00113c04,_LC85);
    uVar17 = _LC74;
    uVar28 = _LC72._4_4_;
    uVar30 = _LC80;
    uVar31 = _LC76;
    uVar34 = _LC88;
    uVar35 = _LC87;
    uVar36 = _LC86;
    uVar37 = _LC85;
    uVar38 = _LC72._4_4_;
    uVar39 = _LC84;
    uVar40 = _LC80;
    uVar41 = _LC83;
    uVar42 = _LC82;
    uVar16 = _LC77;
    uVar13 = _LC78;
    uVar19 = _LC75;
    uVar18 = 0x3f800000;
    uVar24 = _LC29;
    uVar33 = _LC89;
    uVar32 = _LC90;
    uVar43 = _LC79;
  }
  uVar29 = 0;
  *(undefined4 *)(in_RDI + 0x418) = uVar16;
  *(undefined8 *)(in_RDI + 0x470) = uVar26;
  *(undefined4 *)(in_RDI + 0x420) = uVar19;
  *(undefined4 *)(in_RDI + 0x428) = uVar18;
  *(undefined4 *)(in_RDI + 0x478) = uVar13;
  *(undefined4 *)(in_RDI + 0x424) = uVar31;
  *(undefined4 *)(in_RDI + 0x480) = uVar43;
  *(undefined4 *)(in_RDI + 0x484) = uVar30;
  *(undefined4 *)(in_RDI + 0x488) = uVar28;
  *(undefined4 *)(in_RDI + 0x490) = uVar24;
  *(undefined4 *)(in_RDI + 0x494) = uVar42;
  *(undefined4 *)(in_RDI + 0x498) = uVar41;
  *(undefined4 *)(in_RDI + 0x4a0) = uVar24;
  *(undefined4 *)(in_RDI + 0x4a4) = uVar40;
  *(undefined4 *)(in_RDI + 0x4a8) = uVar39;
  *(undefined4 *)(in_RDI + 0x4c8) = uVar38;
  *(undefined4 *)(in_RDI + 0x4d0) = uVar37;
  *(undefined4 *)(in_RDI + 0x4d4) = uVar36;
  *(undefined4 *)(in_RDI + 0x4d8) = uVar35;
  *(undefined8 *)(in_RDI + 0x410) = uVar17;
  *(undefined8 *)(in_RDI + 0x4c0) = uVar25;
  *(undefined4 *)(in_RDI + 0x42c) = 0x3f800000;
  *(undefined4 *)(in_RDI + 0x41c) = 0x3f800000;
  *(undefined4 *)(in_RDI + 0x47c) = 0x3f800000;
  *(undefined4 *)(in_RDI + 0x48c) = 0x3f800000;
  *(undefined4 *)(in_RDI + 0x49c) = 0x3f800000;
  *(undefined4 *)(in_RDI + 0x4ac) = 0x3f800000;
  *(undefined4 *)(in_RDI + 0x4cc) = 0x3f800000;
  *(undefined4 *)(in_RDI + 0x4dc) = 0x3f800000;
  *(undefined4 *)(in_RDI + 0x4e0) = uVar34;
  *(undefined4 *)(in_RDI + 0x4ec) = 0x3f800000;
  *(undefined4 *)(in_RDI + 0x4e4) = uVar33;
  *(undefined4 *)(in_RDI + 0x4e8) = uVar32;
  Variant::Variant((Variant *)local_78,(Color *)(in_RDI + 0x420));
  local_c8 = (undefined8 *)0x0;
  local_b8 = "text_editor/theme/highlighting/gdscript/function_definition_color";
  local_b0 = 0x41;
  String::parse_latin1((StrRange *)&local_c8);
  bVar23 = SUB81((Variant *)local_78,0);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_c8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Color *)(in_RDI + 0x410));
  local_b8 = "text_editor/theme/highlighting/gdscript/global_function_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x3d;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_c8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Color *)(in_RDI + 0x470));
  local_b8 = "text_editor/theme/highlighting/gdscript/node_path_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x37;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_c8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Color *)(in_RDI + 0x480));
  local_b8 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_b8,"text_editor/theme/highlighting/gdscript/node_reference_color");
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Color *)(in_RDI + 0x490));
  local_b8 = "text_editor/theme/highlighting/gdscript/annotation_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x38;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_c8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Color *)(in_RDI + 0x4a0));
  local_b8 = "text_editor/theme/highlighting/gdscript/string_name_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x39;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_c8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Color *)(in_RDI + 0x4c0));
  local_b8 = "text_editor/theme/highlighting/comment_markers/critical_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x3d;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_c8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Color *)(in_RDI + 0x4d0));
  local_b8 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_b8,"text_editor/theme/highlighting/comment_markers/warning_color");
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(Color *)(in_RDI + 0x4e0));
  local_b8 = "text_editor/theme/highlighting/comment_markers/notice_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x3b;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_c8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"ALERT,ATTENTION,CAUTION,CRITICAL,DANGER,SECURITY");
  local_b8 = "text_editor/theme/highlighting/comment_markers/critical_list";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x3c;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_c8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"BUG,DEPRECATED,FIXME,HACK,TASK,TBD,TODO,WARNING");
  local_b8 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_b8,"text_editor/theme/highlighting/comment_markers/warning_list");
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"INFO,NOTE,NOTICE,TEST,TESTING");
  local_b8 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_b8,"text_editor/theme/highlighting/comment_markers/notice_list");
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b8,bVar23,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar7 = String::operator==((String *)local_f0,"Default");
  if ((cVar7 != '\0') || (cVar6 != '\0')) {
    pSVar11 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(Color *)(in_RDI + 0x420));
    StringName::StringName
              ((StringName *)&local_b8,
               "text_editor/theme/highlighting/gdscript/function_definition_color",false);
    bVar23 = SUB81((String *)local_58,0);
    EditorSettings::set_initial_value(pSVar11,(Variant *)&local_b8,bVar23);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pSVar11 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(Color *)(in_RDI + 0x410));
    StringName::StringName
              ((StringName *)&local_b8,
               "text_editor/theme/highlighting/gdscript/global_function_color",false);
    EditorSettings::set_initial_value(pSVar11,(Variant *)&local_b8,bVar23);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pSVar11 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(Color *)(in_RDI + 0x470));
    StringName::StringName
              ((StringName *)&local_b8,"text_editor/theme/highlighting/gdscript/node_path_color",
               false);
    EditorSettings::set_initial_value(pSVar11,(Variant *)&local_b8,bVar23);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pSVar11 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(Color *)(in_RDI + 0x480));
    StringName::StringName
              ((StringName *)&local_b8,
               "text_editor/theme/highlighting/gdscript/node_reference_color",false);
    EditorSettings::set_initial_value(pSVar11,(Variant *)&local_b8,bVar23);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pSVar11 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(Color *)(in_RDI + 0x490));
    StringName::StringName
              ((StringName *)&local_b8,"text_editor/theme/highlighting/gdscript/annotation_color",
               false);
    EditorSettings::set_initial_value(pSVar11,(Variant *)&local_b8,bVar23);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pSVar11 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(Color *)(in_RDI + 0x4a0));
    StringName::StringName
              ((StringName *)&local_b8,"text_editor/theme/highlighting/gdscript/string_name_color",
               false);
    EditorSettings::set_initial_value(pSVar11,(Variant *)&local_b8,bVar23);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pSVar11 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(Color *)(in_RDI + 0x4c0));
    StringName::StringName
              ((StringName *)&local_b8,
               "text_editor/theme/highlighting/comment_markers/critical_color",false);
    EditorSettings::set_initial_value(pSVar11,(Variant *)&local_b8,bVar23);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pSVar11 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(Color *)(in_RDI + 0x4d0));
    StringName::StringName
              ((StringName *)&local_b8,
               "text_editor/theme/highlighting/comment_markers/warning_color",false);
    EditorSettings::set_initial_value(pSVar11,(Variant *)&local_b8,bVar23);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pSVar11 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(Color *)(in_RDI + 0x4e0));
    StringName::StringName
              ((StringName *)&local_b8,"text_editor/theme/highlighting/comment_markers/notice_color"
               ,false);
    EditorSettings::set_initial_value(pSVar11,(Variant *)&local_b8,bVar23);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  local_b8 = "text_editor/theme/highlighting/gdscript/function_definition_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x41;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x420) = uVar25;
  *(ulong *)(in_RDI + 0x428) = CONCAT44(uVar29,uVar28);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = "text_editor/theme/highlighting/gdscript/global_function_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x3d;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x410) = uVar25;
  *(ulong *)(in_RDI + 0x418) = CONCAT44(uVar29,uVar28);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = "text_editor/theme/highlighting/gdscript/node_path_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x37;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x470) = uVar25;
  *(ulong *)(in_RDI + 0x478) = CONCAT44(uVar29,uVar28);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_b8,"text_editor/theme/highlighting/gdscript/node_reference_color");
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x480) = uVar25;
  *(ulong *)(in_RDI + 0x488) = CONCAT44(uVar29,uVar28);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = "text_editor/theme/highlighting/gdscript/annotation_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x38;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x490) = uVar25;
  *(ulong *)(in_RDI + 0x498) = CONCAT44(uVar29,uVar28);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = "text_editor/theme/highlighting/gdscript/string_name_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x39;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x4a0) = uVar25;
  *(ulong *)(in_RDI + 0x4a8) = CONCAT44(uVar29,uVar28);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"text_editor/theme/highlighting/base_type_color");
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x4b0) = uVar25;
  *(ulong *)(in_RDI + 0x4b8) = CONCAT44(uVar29,uVar28);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = "text_editor/theme/highlighting/comment_markers/critical_color";
  local_c8 = (undefined8 *)0x0;
  local_b0 = 0x3d;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x4c0) = uVar25;
  *(ulong *)(in_RDI + 0x4c8) = CONCAT44(uVar29,uVar28);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_b8,"text_editor/theme/highlighting/comment_markers/warning_color");
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x4d0) = uVar25;
  *(ulong *)(in_RDI + 0x4d8) = CONCAT44(uVar29,uVar28);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = (char *)0x0;
  String::parse_latin1
            ((String *)&local_b8,"text_editor/theme/highlighting/comment_markers/notice_color");
  _EDITOR_GET((String *)local_58);
  uVar25 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0x4e0) = uVar25;
  *(ulong *)(in_RDI + 0x4e8) = CONCAT44(uVar29,uVar28);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  this_01 = (HashMap<String,GDScriptSyntaxHighlighter::CommentMarkerLevel,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptSyntaxHighlighter::CommentMarkerLevel>>>
             *)(in_RDI + 0x4f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((*(long *)(in_RDI + 0x4f8) != 0) && (*(int *)(in_RDI + 0x51c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RDI + 0x518) * 4);
    lVar14 = 0;
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(in_RDI + 0x500) + lVar14) != 0) {
          *(int *)(*(long *)(in_RDI + 0x500) + lVar14) = 0;
          pvVar3 = *(void **)(*(long *)(in_RDI + 0x4f8) + lVar14 * 2);
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(in_RDI + 0x4f8) + lVar14 * 2) = 0;
        }
        lVar14 = lVar14 + 4;
      } while ((ulong)uVar2 * 4 - lVar14 != 0);
    }
    *(undefined4 *)(in_RDI + 0x51c) = 0;
    *(undefined1 (*) [16])(in_RDI + 0x508) = (undefined1  [16])0x0;
  }
  local_c8 = (undefined8 *)0x0;
  String::parse_latin1
            ((String *)&local_c8,"text_editor/theme/highlighting/comment_markers/critical_list");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_b8);
  bVar23 = SUB81((String *)&local_b8,0);
  String::split((char *)&local_d8,bVar23,0x109e6e);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  for (lVar14 = 0; (local_d0 != 0 && (lVar14 < *(long *)(local_d0 + -8))); lVar14 = lVar14 + 1) {
    puVar12 = (undefined4 *)
              HashMap<String,GDScriptSyntaxHighlighter::CommentMarkerLevel,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptSyntaxHighlighter::CommentMarkerLevel>>>
              ::operator[](this_01,(String *)(local_d0 + lVar14 * 8));
    *puVar12 = 0;
  }
  local_e0 = 0;
  String::parse_latin1(local_1d0,"text_editor/theme/highlighting/comment_markers/warning_list");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_b8);
  String::split((char *)&local_c8,bVar23,0x109e6e);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d0);
  for (lVar14 = 0; (local_c0 != 0 && (lVar14 < *(long *)(local_c0 + -8))); lVar14 = lVar14 + 1) {
    puVar12 = (undefined4 *)
              HashMap<String,GDScriptSyntaxHighlighter::CommentMarkerLevel,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptSyntaxHighlighter::CommentMarkerLevel>>>
              ::operator[](this_01,(String *)(local_c0 + lVar14 * 8));
    *puVar12 = 1;
  }
  local_e8 = 0;
  local_b8 = "text_editor/theme/highlighting/comment_markers/notice_list";
  local_b0 = 0x3a;
  String::parse_latin1((StrRange *)&local_e8);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)local_1d0);
  String::split((char *)&local_b8,SUB81(local_1d0,0),0x109e6e);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  for (lVar14 = 0; (local_b0 != 0 && (lVar14 < *(long *)(local_b0 + -8))); lVar14 = lVar14 + 1) {
    puVar12 = (undefined4 *)
              HashMap<String,GDScriptSyntaxHighlighter::CommentMarkerLevel,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptSyntaxHighlighter::CommentMarkerLevel>>>
              ::operator[](this_01,(String *)(local_b0 + lVar14 * 8));
    *puVar12 = 2;
  }
  CowData<String>::_unref((CowData<String> *)&local_b0);
  CowData<String>::_unref((CowData<String> *)&local_c0);
  CowData<String>::_unref((CowData<String> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  if (((local_1d8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1d8), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1d8 + 0x140))(local_1d8);
    Memory::free_static(local_1d8,false);
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_100);
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_108);
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_110);
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_118);
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_120);
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_128);
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_130);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00106262:
  pSVar20 = *(String **)(pSVar20 + 8);
  goto joined_r0x001061c8;
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



/* SyntaxHighlighter::is_class_ptr(void*) const */

uint __thiscall SyntaxHighlighter::is_class_ptr(SyntaxHighlighter *this,void *param_1)

{
  return (uint)CONCAT71(0x110b,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110b,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SyntaxHighlighter::_getv(StringName const&, Variant&) const */

undefined8 SyntaxHighlighter::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SyntaxHighlighter::_setv(StringName const&, Variant const&) */

undefined8 SyntaxHighlighter::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SyntaxHighlighter::_validate_propertyv(PropertyInfo&) const */

void SyntaxHighlighter::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SyntaxHighlighter::_property_can_revertv(StringName const&) const */

undefined8 SyntaxHighlighter::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SyntaxHighlighter::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SyntaxHighlighter::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SyntaxHighlighter::_notificationv(int, bool) */

void SyntaxHighlighter::_notificationv(int param_1,bool param_2)

{
  return;
}



/* SyntaxHighlighter::_clear_highlighting_cache() */

void SyntaxHighlighter::_clear_highlighting_cache(void)

{
  return;
}



/* SyntaxHighlighter::_update_cache() */

void SyntaxHighlighter::_update_cache(void)

{
  return;
}



/* GDScriptSyntaxHighlighter::is_class_ptr(void*) const */

uint GDScriptSyntaxHighlighter::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x110b,in_RSI == &EditorSyntaxHighlighter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110b,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110b,in_RSI == &SyntaxHighlighter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110b,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110b,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GDScriptSyntaxHighlighter::_getv(StringName const&, Variant&) const */

undefined8 GDScriptSyntaxHighlighter::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptSyntaxHighlighter::_setv(StringName const&, Variant const&) */

undefined8 GDScriptSyntaxHighlighter::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptSyntaxHighlighter::_validate_propertyv(PropertyInfo&) const */

void GDScriptSyntaxHighlighter::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GDScriptSyntaxHighlighter::_property_can_revertv(StringName const&) const */

undefined8 GDScriptSyntaxHighlighter::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GDScriptSyntaxHighlighter::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GDScriptSyntaxHighlighter::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptSyntaxHighlighter::_notificationv(int, bool) */

void GDScriptSyntaxHighlighter::_notificationv(int param_1,bool param_2)

{
  return;
}



/* SyntaxHighlighter::_get_line_syntax_highlighting_impl(int) */

undefined8 SyntaxHighlighter::_get_line_syntax_highlighting_impl(int param_1)

{
  undefined4 in_register_0000003c;
  
  Dictionary::Dictionary((Dictionary *)CONCAT44(in_register_0000003c,param_1));
  return CONCAT44(in_register_0000003c,param_1);
}



/* RBMap<int, Dictionary, Comparator<int>, DefaultAllocator>::_cleanup_tree(RBMap<int, Dictionary,
   Comparator<int>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
          (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
      Memory::free_static(pEVar2,false);
    }
    Dictionary::~Dictionary((Dictionary *)(pEVar1 + 0x38));
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
      Memory::free_static(pEVar2,false);
    }
    Dictionary::~Dictionary((Dictionary *)(pEVar1 + 0x38));
    Memory::free_static(pEVar1,false);
  }
  Dictionary::~Dictionary((Dictionary *)(param_1 + 0x38));
  Memory::free_static(param_1,false);
  return;
}



/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

{
  RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this_00;
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  void *pvVar4;
  Element *pEVar5;
  Element *pEVar6;
  bool bVar7;
  
  bVar7 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001106c8;
  if (bVar7) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010987c;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010987c;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
    }
  }
LAB_0010987c:
  pvVar4 = *(void **)(this + 0x240);
  if (pvVar4 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar4 + 0x10);
    pEVar2 = *(Element **)(this + 0x248);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      this_00 = (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(this + 0x240);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar5 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar5) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar5);
            pEVar5 = *(Element **)(this + 0x248);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 0x248);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar6) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar5 != pEVar6) {
            if (*(Element **)(pEVar5 + 0x10) != pEVar6) {
              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                        (this_00,*(Element **)(pEVar5 + 0x10));
              pEVar6 = *(Element **)(this + 0x248);
            }
            if (pEVar6 != *(Element **)(pEVar5 + 8)) {
              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                        (this_00,*(Element **)(pEVar5 + 8));
            }
            Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
            Memory::free_static(pEVar5,false);
            pEVar6 = *(Element **)(this + 0x248);
          }
          if (pEVar6 != *(Element **)(pEVar2 + 8)) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar2 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 0x248);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar3 != pEVar6) {
          pEVar5 = *(Element **)(pEVar6 + 0x10);
          if (pEVar3 != pEVar5) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar5);
            pEVar5 = *(Element **)(this + 0x248);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 0x248);
        }
        pEVar3 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar3) {
          pEVar5 = *(Element **)(pEVar3 + 0x10);
          if (pEVar6 != pEVar5) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar5);
            pEVar5 = *(Element **)(this + 0x248);
          }
          if (pEVar5 != *(Element **)(pEVar3 + 8)) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar3 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
          Memory::free_static(pEVar3,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar1 + 0x38));
      Memory::free_static(pEVar1,false);
      pvVar4 = *(void **)(this + 0x240);
      pEVar2 = *(Element **)(this + 0x248);
    }
    *(Element **)((long)pvVar4 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x250) = 0;
    Dictionary::~Dictionary((Dictionary *)((long)pvVar4 + 0x38));
    Memory::free_static(pvVar4,false);
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

{
  ~SyntaxHighlighter(this);
  operator_delete(this,0x2b0);
  return;
}



/* SyntaxHighlighter::_get_class_namev() const */

undefined8 * SyntaxHighlighter::_get_class_namev(void)

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
LAB_00109b33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109b33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SyntaxHighlighter");
      goto LAB_00109b9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SyntaxHighlighter");
LAB_00109b9e:
  return &_get_class_namev()::_class_name_static;
}



/* GDScriptSyntaxHighlighter::_get_class_namev() const */

undefined8 * GDScriptSyntaxHighlighter::_get_class_namev(void)

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
LAB_00109c23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109c23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GDScriptSyntaxHighlighter");
      goto LAB_00109c8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GDScriptSyntaxHighlighter");
LAB_00109c8e:
  return &_get_class_namev()::_class_name_static;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

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



/* SyntaxHighlighter::get_class() const */

void SyntaxHighlighter::get_class(void)

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



/* GDScriptSyntaxHighlighter::get_class() const */

void GDScriptSyntaxHighlighter::get_class(void)

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



/* is_symbol(char32_t) */

uint is_symbol(wchar32 param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (param_1 != L'_') {
    uVar2 = (ulong)(uint)(param_1 + L'\xffffffdf');
    if ((uint)(param_1 + L'\xffffffdf') < 0x40) {
      uVar1 = 1;
      if ((0xfc000000fe007fffU >> (uVar2 & 0x3f) & 1) == 0) {
LAB_0010a0bd:
        return (uint)(param_1 == L'\t') | (uint)CONCAT71((int7)(uVar2 >> 8),param_1 == L' ');
      }
    }
    else {
      uVar2 = (ulong)(uint)(param_1 + L'\xffffff85');
      uVar1 = 1;
      if (3 < (uint)(param_1 + L'\xffffff85')) goto LAB_0010a0bd;
    }
  }
  return uVar1;
}



/* is_whitespace(char32_t) */

bool is_whitespace(wchar32 param_1)

{
  if (0x200b < (uint)param_1) {
    if ((uint)param_1 < 0x2060) {
      return 0x2027 < (uint)param_1 &&
             (0x80000000000083U >> ((ulong)(uint)(param_1 + L'\xffffdfd8') & 0x3f) & 1) != 0;
    }
    return param_1 == L'\x3000';
  }
  if (((uint)param_1 < 0x2000) && (param_1 != L'\x85')) {
    if ((uint)param_1 < 0x86) {
      if ((uint)param_1 < 0xe) {
        return 8 < (uint)param_1;
      }
      return param_1 == L' ';
    }
    if (param_1 != L'\xa0') {
      return param_1 == L'\x1680';
    }
  }
  return true;
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



/* Color::TEMPNAMEPLACEHOLDERVALUE(Color const&) const */

ulong __thiscall Color::operator!=(Color *this,Color *param_1)

{
  undefined8 in_RAX;
  ulong uVar1;
  
  if (((*(float *)this == *(float *)param_1) && (*(float *)(this + 4) == *(float *)(param_1 + 4)))
     && (*(float *)(this + 8) == *(float *)(param_1 + 8))) {
    uVar1 = CONCAT71((int7)((ulong)in_RAX >> 8),
                     NAN(*(float *)(this + 0xc)) || NAN(*(float *)(param_1 + 0xc))) & 0xffffffff;
    if (*(float *)(this + 0xc) != *(float *)(param_1 + 0xc)) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 1;
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
            if (lVar5 == 0) goto LAB_0010a31f;
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
LAB_0010a31f:
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
    if (cVar6 != '\0') goto LAB_0010a3d3;
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
              if (lVar5 == 0) goto LAB_0010a483;
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
LAB_0010a483:
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
      if (cVar6 != '\0') goto LAB_0010a3d3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010a3d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010a5af;
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
LAB_0010a5af:
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
    if (cVar5 != '\0') goto LAB_0010a663;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010a663:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SyntaxHighlighter::is_class(String const&) const */

undefined8 __thiscall SyntaxHighlighter::is_class(SyntaxHighlighter *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010a72f;
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
LAB_0010a72f:
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
    if (cVar5 != '\0') goto LAB_0010a7e3;
  }
  cVar5 = String::operator==(param_1,"SyntaxHighlighter");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010a7e3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* GDScriptSyntaxHighlighter::is_class(String const&) const */

undefined8 __thiscall
GDScriptSyntaxHighlighter::is_class(GDScriptSyntaxHighlighter *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010a8ef;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010a8ef:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010a9a3;
  }
  cVar6 = String::operator==(param_1,"GDScriptSyntaxHighlighter");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_0010a9a3;
    }
    cVar6 = String::operator==(param_1,"EditorSyntaxHighlighter");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        lVar5 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (cVar6 != '\0') goto LAB_0010a9a3;
      }
      cVar6 = String::operator==(param_1,"SyntaxHighlighter");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Resource::is_class((Resource *)this,param_1);
          return uVar8;
        }
        goto LAB_0010abc8;
      }
    }
  }
LAB_0010a9a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010abc8:
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



/* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::operator[](int const&) */

undefined1  [16] __thiscall
HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
::operator[](HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x10b40b;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0010af73;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar48)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x10b454;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_0010b2f3;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar53 = 1;
        uVar45 = uVar48;
      }
      else {
        uVar45 = uVar53 * uVar48;
      }
      lVar52 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar52 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar50 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar53 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar56._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x14;
            auVar56._8_8_ = lVar47;
            return auVar56;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar54 + 1) * uVar48;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar52 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar48, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar54 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar48,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_0010b2f3:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar48;
      }
      else {
        uVar43 = uVar37 * uVar48;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar53 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar53 * 8);
            *(undefined4 *)(pauVar42[1] + 4) = 0;
            lStack_90 = lVar47;
            goto LAB_0010b2d4;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar53 + 1) * uVar48;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar53 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar48, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar53) -
                     SUB164(auVar18 * auVar34,8)) * uVar48, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_0010af73:
  if ((float)uVar51 * _LC13 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010b2d4;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar51 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar52 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar53 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            uVar50 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar50 < uVar54) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar50;
            }
            uVar54 = uVar54 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar52 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  iVar44 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x18,"");
  *(int *)pauVar42[1] = iVar44;
  *(undefined4 *)(pauVar42[1] + 4) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar53 = 0;
  lVar52 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lStack_90 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar51;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010b2d4:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 4;
  return auVar57;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Color, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Color> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
::operator[](HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_0010bbc8:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_0010ba78;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0010ba7c:
      if (iVar46 != 0) {
LAB_0010ba84:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        uVar41 = _UNK_00113be8;
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              puVar42[3] = __LC20;
              puVar42[4] = uVar41;
              goto LAB_0010b67c;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_0010b6b3;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010b6b3;
    if (iVar46 != 0) goto LAB_0010ba84;
LAB_0010b6d9:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010b67c;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_0010b67c;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_0010bbc8;
LAB_0010ba78:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0010ba7c;
    }
LAB_0010b6b3:
    if ((float)uVar40 * _LC13 < (float)(iVar46 + 1)) goto LAB_0010b6d9;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = __LC20;
  uStack_48 = _UNK_00113be8;
  puVar42 = (undefined8 *)operator_new(0x28,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  puVar42[3] = local_50;
  puVar42[4] = uStack_48;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0010bb8d;
LAB_0010b96b:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0010b96b;
LAB_0010bb8d:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010b67c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
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
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  StringName *in_RDX;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint local_88;
  long local_68;
  
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar29 = (ulong)uVar27 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    iVar44 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010bd8c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_0010bd8c:
    if (iVar44 != 0) {
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      uVar29 = CONCAT44(0,uVar40);
      lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      if (*(long *)in_RDX == 0) {
        uVar28 = StringName::get_empty_hash();
        iVar44 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        uVar28 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar30;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar34 = SUB168(auVar3 * auVar15,8);
      iVar33 = SUB164(auVar3 * auVar15,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
      if (uVar42 != 0) {
        do {
          if (uVar28 == uVar42) {
            lVar36 = *in_RSI;
            uVar42 = *(uint *)(in_RSI[1] + lVar34 * 4);
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_0010c1d8;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar30;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
        } while ((uVar42 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar42 * lVar30, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar30,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)(iVar44 + 1) <= (float)uVar27 * _LC13) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_0010c0b5;
LAB_0010c216:
    uVar27 = StringName::get_empty_hash();
  }
  else {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar42 = 0xffffffff;
      iVar44 = *(int *)((long)in_RSI + 0x24);
      lVar36 = *in_RSI;
      goto LAB_0010c1d8;
    }
    uVar27 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar27;
    if (uVar27 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar1 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar27 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar34 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar29 & 0xffffffff;
        uVar39 = (undefined4)uVar29;
        uVar42 = 0;
        uVar27 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar27;
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar31;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        lVar32 = SUB168(auVar7 * auVar19,8) * 4;
        iVar44 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar34 + lVar32);
        uVar28 = *puVar43;
        if (uVar28 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar28 * lVar31;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar40 + iVar44) - SUB164(auVar8 * auVar20,8)) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_88 = SUB164(auVar9 * auVar21,8);
            if (local_88 < uVar42) {
              *(int *)(lVar36 + uVar41 * 4) = iVar44;
              uVar27 = *puVar43;
              *puVar43 = (uint)uVar35;
              uVar28 = *(uint *)(lVar32 + lVar30);
              uVar35 = (ulong)uVar27;
              *(uint *)(lVar32 + lVar30) = (uint)uVar41;
              uVar41 = (ulong)uVar28;
              uVar42 = local_88;
            }
            uVar39 = (undefined4)uVar41;
            uVar27 = (uint)uVar35;
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar44 + 1) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar32 = SUB168(auVar10 * auVar22,8) * 4;
            iVar44 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar34 + lVar32);
            uVar28 = *puVar43;
          } while (uVar28 != 0);
          lVar31 = uVar41 << 2;
        }
        *puVar43 = uVar27;
        uVar29 = uVar29 + 1;
        *(int *)(lVar36 + lVar31) = iVar44;
        *(undefined4 *)(lVar30 + lVar32) = uVar39;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    lVar30 = *(long *)in_RDX;
    if (lVar30 == 0) goto LAB_0010c216;
LAB_0010c0b5:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar29 = (ulong)uVar27;
  StringName::StringName((StringName *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8),in_RDX)
  ;
  uVar40 = *(uint *)((long)in_RSI + 0x24);
  lVar34 = in_RSI[3];
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar35 = CONCAT44(0,uVar28);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar35;
  lVar30 = SUB168(auVar11 * auVar23,8) * 4;
  iVar44 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar34 + lVar30);
  uVar42 = *puVar43;
  if (uVar42 == 0) {
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar44) - SUB164(auVar12 * auVar24,8)) * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar35;
      local_88 = SUB164(auVar13 * auVar25,8);
      if (local_88 < uVar37) {
        *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
        uVar27 = *puVar43;
        *puVar43 = (uint)uVar29;
        uVar42 = *(uint *)(lVar30 + lVar32);
        uVar29 = (ulong)uVar27;
        *(uint *)(lVar30 + lVar32) = uVar40;
        uVar40 = uVar42;
        uVar37 = local_88;
      }
      uVar27 = (uint)uVar29;
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar35;
      lVar30 = SUB168(auVar14 * auVar26,8) * 4;
      iVar44 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar34 + lVar30);
      uVar42 = *puVar43;
    } while (uVar42 != 0);
  }
  *puVar43 = uVar27;
  *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
  *(uint *)(lVar32 + lVar30) = uVar40;
  uVar42 = *(uint *)((long)in_RSI + 0x24);
  lVar36 = *in_RSI;
  iVar44 = uVar42 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar44;
LAB_0010c1d8:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void Ref<GDScriptSyntaxHighlighter>::instantiate<>() */

void __thiscall Ref<GDScriptSyntaxHighlighter>::instantiate<>(Ref<GDScriptSyntaxHighlighter> *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  Resource *this_00;
  long lVar5;
  Resource *pRVar6;
  Object *pOVar7;
  Object *pOVar8;
  byte bVar9;
  
  bVar9 = 0;
  this_00 = (Resource *)operator_new(0x520,"");
  pRVar6 = this_00;
  for (lVar5 = 0xa4; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pRVar6 = 0;
    pRVar6 = pRVar6 + (ulong)bVar9 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined8 *)(this_00 + 0x240) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_001106c8;
  *(undefined8 **)(this_00 + 0x248) = &_GlobalNilClass::_nil;
  *(undefined4 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  *(undefined8 *)(this_00 + 0x260) = 0;
  StringName::StringName((StringName *)(this_00 + 0x268),"_get_line_syntax_highlighting",false);
  this_00[0x270] = (Resource)0x0;
  *(undefined8 *)(this_00 + 0x278) = 0;
  StringName::StringName((StringName *)(this_00 + 0x280),"_clear_highlighting_cache",false);
  this_00[0x288] = (Resource)0x0;
  *(undefined8 *)(this_00 + 0x290) = 0;
  StringName::StringName((StringName *)(this_00 + 0x298),"_update_cache",false);
  this_00[0x2a0] = (Resource)0x0;
  *(code **)this_00 = RefCounted::init_ref;
  *(undefined1 (*) [16])(this_00 + 0x2a8) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this_00 + 0x2b8),"_get_name",false);
  this_00[0x2c0] = (Resource)0x0;
  *(undefined8 *)(this_00 + 0x2c8) = 0;
  StringName::StringName((StringName *)(this_00 + 0x2d0),"_get_supported_languages",false);
  uVar2 = _UNK_00113be8;
  uVar1 = __LC20;
  *(undefined ***)this_00 = &PTR__initialize_classv_001108b8;
  uVar3 = _LC28;
  *(undefined1 (*) [16])(this_00 + 0x300) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 800) = uVar3;
  *(undefined8 *)(this_00 + 0x350) = uVar3;
  *(undefined8 *)(this_00 + 0x380) = uVar3;
  *(undefined8 *)(this_00 + 0x3b0) = uVar3;
  *(undefined8 *)(this_00 + 0x3d8) = uVar3;
  *(undefined1 (*) [16])(this_00 + 0x310) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x330) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x340) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x360) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x370) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x390) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x3a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x3b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x3c8) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x3e0) = uVar1;
  *(undefined8 *)(this_00 + 1000) = uVar2;
  *(undefined8 *)(this_00 + 0x3f0) = uVar1;
  *(undefined8 *)(this_00 + 0x3f8) = uVar2;
  *(undefined8 *)(this_00 + 0x400) = uVar1;
  *(undefined8 *)(this_00 + 0x408) = uVar2;
  *(undefined8 *)(this_00 + 0x410) = uVar1;
  *(undefined8 *)(this_00 + 0x418) = uVar2;
  *(undefined8 *)(this_00 + 0x420) = uVar1;
  *(undefined8 *)(this_00 + 0x428) = uVar2;
  *(undefined8 *)(this_00 + 0x430) = uVar1;
  *(undefined8 *)(this_00 + 0x438) = uVar2;
  *(undefined8 *)(this_00 + 0x440) = uVar1;
  *(undefined8 *)(this_00 + 0x448) = uVar2;
  *(undefined8 *)(this_00 + 0x450) = uVar1;
  *(undefined8 *)(this_00 + 0x458) = uVar2;
  *(undefined8 *)(this_00 + 0x460) = uVar1;
  *(undefined8 *)(this_00 + 0x468) = uVar2;
  *(undefined8 *)(this_00 + 0x470) = uVar1;
  *(undefined8 *)(this_00 + 0x478) = uVar2;
  *(undefined8 *)(this_00 + 0x480) = uVar1;
  *(undefined8 *)(this_00 + 0x488) = uVar2;
  this_00[0x2d8] = (Resource)0x0;
  *(undefined8 *)(this_00 + 0x2e0) = 0;
  *(undefined8 *)(this_00 + 0x2f0) = 0;
  *(undefined8 *)(this_00 + 0x490) = uVar1;
  *(undefined8 *)(this_00 + 0x498) = uVar2;
  *(undefined8 *)(this_00 + 0x518) = uVar3;
  *(undefined8 *)(this_00 + 0x4a0) = uVar1;
  *(undefined8 *)(this_00 + 0x4a8) = uVar2;
  *(undefined8 *)(this_00 + 0x4b0) = uVar1;
  *(undefined8 *)(this_00 + 0x4b8) = uVar2;
  *(undefined8 *)(this_00 + 0x4c0) = uVar1;
  *(undefined8 *)(this_00 + 0x4c8) = uVar2;
  *(undefined8 *)(this_00 + 0x4d0) = uVar1;
  *(undefined8 *)(this_00 + 0x4d8) = uVar2;
  *(undefined8 *)(this_00 + 0x4e0) = uVar1;
  *(undefined8 *)(this_00 + 0x4e8) = uVar2;
  *(undefined1 (*) [16])(this_00 + 0x4f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x508) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    pOVar8 = *(Object **)this;
    if (pOVar8 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar4 = RefCounted::unreference();
    if (cVar4 == '\0') {
      return;
    }
    this_00 = (Resource *)0x0;
    cVar4 = predelete_handler(pOVar8);
    if (cVar4 == '\0') {
      return;
    }
  }
  else {
    pOVar8 = *(Object **)this;
    pOVar7 = pOVar8;
    if (this_00 == (Resource *)pOVar8) goto LAB_0010c695;
    *(Resource **)this = this_00;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar7 = (Object *)this_00;
    if (((pOVar8 == (Object *)0x0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0')) ||
       (cVar4 = predelete_handler(pOVar8), cVar4 == '\0')) goto LAB_0010c695;
  }
  (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
  Memory::free_static(pOVar8,false);
  pOVar7 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_0010c695:
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
    return;
  }
  return;
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
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



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010c9d4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010c9d4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* HashMap<String, GDScriptSyntaxHighlighter::CommentMarkerLevel, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   GDScriptSyntaxHighlighter::CommentMarkerLevel> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,GDScriptSyntaxHighlighter::CommentMarkerLevel,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptSyntaxHighlighter::CommentMarkerLevel>>>
::operator[](HashMap<String,GDScriptSyntaxHighlighter::CommentMarkerLevel,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptSyntaxHighlighter::CommentMarkerLevel>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  uint *puVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0010d0d8:
    uVar39 = (ulong)uVar54;
    uVar43 = uVar39 * 4;
    uVar47 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = pvVar42;
    if (uVar54 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar42 + uVar47)) && (pvVar42 < (void *)((long)pvVar2 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
        goto LAB_0010cf5a;
      }
      memset(pvVar2,0,uVar43);
      memset(pvVar42,0,uVar47);
      iVar44 = *(int *)(this + 0x2c);
LAB_0010cf5e:
      if (iVar44 != 0) {
LAB_0010cf66:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar52 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar51 != 0) {
          uVar38 = uVar51;
        }
        uVar53 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar45 = SUB168(auVar16 * auVar32,8);
        uVar51 = *(uint *)(lVar52 + lVar45 * 4);
        uVar50 = SUB164(auVar16 * auVar32,8);
        if (uVar51 != 0) {
          do {
            if (uVar38 == uVar51) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                *(undefined4 *)(pauVar41[1] + 8) = 0;
                goto LAB_0010ce3b;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar53 = uVar53 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar50 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar45 = SUB168(auVar17 * auVar33,8);
            uVar51 = *(uint *)(lVar52 + lVar45 * 4);
            uVar50 = SUB164(auVar17 * auVar33,8);
          } while ((uVar51 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar51 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar50) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar53 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar54;
      goto LAB_0010ca84;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_0010ca84;
    if (iVar44 != 0) goto LAB_0010cf66;
LAB_0010caaa:
    uVar54 = *(uint *)(this + 0x28);
    if (uVar54 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010ce3b;
    }
    uVar39 = (ulong)(uVar54 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar54 * 4);
    if (uVar54 + 1 < 2) {
      uVar39 = 2;
    }
    uVar54 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar47 = (ulong)uVar54;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar54 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar47);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar54 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar54 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar38);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar54 * lVar52;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar45 = SUB168(auVar4 * auVar20,8);
          puVar49 = (uint *)(lVar3 + lVar45 * 4);
          iVar44 = SUB164(auVar4 * auVar20,8);
          uVar51 = *puVar49;
          uVar40 = *(undefined8 *)((long)pvVar42 + uVar39 * 8);
          while (uVar51 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar51 * lVar52;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar5 * auVar21,8)) * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            uVar53 = SUB164(auVar6 * auVar22,8);
            uVar48 = uVar40;
            if (uVar53 < uVar50) {
              *puVar49 = uVar54;
              puVar1 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar1;
              *puVar1 = uVar40;
              uVar54 = uVar51;
              uVar50 = uVar53;
            }
            uVar50 = uVar50 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar44 + 1) * lVar52;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            lVar45 = SUB168(auVar7 * auVar23,8);
            puVar49 = (uint *)(lVar3 + lVar45 * 4);
            iVar44 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar48;
            uVar51 = *puVar49;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar49 = uVar54;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar54);
    if (iVar44 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar52 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar50 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar45 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar52 + lVar45 * 4);
      uVar51 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_0010ce3b;
            }
            lVar52 = *(long *)(this + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar51 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar45 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar52 + lVar45 * 4);
          uVar51 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar51 + uVar54) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar50 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_0010d0d8;
LAB_0010cf5a:
      iVar44 = *(int *)(this + 0x2c);
      goto LAB_0010cf5e;
    }
LAB_0010ca84:
    if ((float)uVar39 * _LC13 < (float)(iVar44 + 1)) goto LAB_0010caaa;
  }
  local_58 = 0;
  if (*(long *)param_1 == 0) {
    local_50 = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar3 = local_58;
    local_50 = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)&local_58);
    }
  }
  *(undefined4 *)(pauVar41[1] + 8) = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    *puVar1 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar1;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar54 = 1;
  if (uVar37 != 0) {
    uVar54 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar54 * lVar52;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar46 = SUB168(auVar8 * auVar24,8);
  lVar45 = *(long *)(this + 8);
  puVar49 = (uint *)(lVar3 + lVar46 * 4);
  iVar44 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar49;
  pauVar56 = pauVar41;
  if (uVar38 != 0) {
    uVar51 = 0;
    pauVar55 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar52;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar52;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar50 = SUB164(auVar10 * auVar26,8);
      pauVar56 = pauVar55;
      if (uVar50 < uVar51) {
        *puVar49 = uVar54;
        puVar1 = (undefined8 *)(lVar45 + lVar46 * 8);
        pauVar56 = (undefined1 (*) [16])*puVar1;
        *puVar1 = pauVar55;
        uVar51 = uVar50;
        uVar54 = uVar38;
      }
      uVar51 = uVar51 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar52;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27,8);
      puVar49 = (uint *)(lVar3 + lVar46 * 4);
      iVar44 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar49;
      pauVar55 = pauVar56;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar45 + lVar46 * 8) = pauVar56;
  *puVar49 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010ce3b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* GDScriptSyntaxHighlighter::_initialize_classv() */

void GDScriptSyntaxHighlighter::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorSyntaxHighlighter::initialize_class()::initialized == '\0') {
      if (SyntaxHighlighter::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_68 = 0;
        local_50 = 8;
        local_58 = "Resource";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "SyntaxHighlighter";
        local_70 = 0;
        local_50 = 0x11;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)_GLOBAL_OFFSET_TABLE_ != SyntaxHighlighter::_bind_methods) {
          SyntaxHighlighter::_bind_methods();
        }
        SyntaxHighlighter::initialize_class()::initialized = '\x01';
      }
      local_58 = "SyntaxHighlighter";
      local_68 = 0;
      local_50 = 0x11;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorSyntaxHighlighter";
      local_70 = 0;
      local_50 = 0x17;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00116010 != SyntaxHighlighter::_bind_methods) {
        EditorSyntaxHighlighter::_bind_methods();
      }
      EditorSyntaxHighlighter::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorSyntaxHighlighter";
    local_68 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GDScriptSyntaxHighlighter";
    local_70 = 0;
    local_50 = 0x19;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SyntaxHighlighter::_initialize_classv() */

void SyntaxHighlighter::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_48 = 0;
    local_38 = "Resource";
    local_30 = 8;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "SyntaxHighlighter";
    local_50 = 0;
    local_30 = 0x11;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
    if ((code *)PTR__bind_methods_00116018 != Resource::_bind_methods) {
      SyntaxHighlighter::_bind_methods();
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
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
LAB_0010d91d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010d91d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010d93f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010d93f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
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
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
LAB_0010dc9d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010dc9d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010dcbf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010dcbf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* SyntaxHighlighter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SyntaxHighlighter::_get_property_listv(SyntaxHighlighter *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  local_78 = "SyntaxHighlighter";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SyntaxHighlighter";
  local_98 = 0;
  local_70 = 0x11;
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
LAB_0010e07d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e07d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010e09f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010e09f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SyntaxHighlighter",false);
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



/* EditorSyntaxHighlighter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorSyntaxHighlighter::_get_property_listv
          (EditorSyntaxHighlighter *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    SyntaxHighlighter::_get_property_listv((SyntaxHighlighter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorSyntaxHighlighter";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorSyntaxHighlighter";
  local_98 = 0;
  local_70 = 0x17;
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
LAB_0010e45d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e45d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010e47f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010e47f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorSyntaxHighlighter",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SyntaxHighlighter::_get_property_listv((SyntaxHighlighter *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptSyntaxHighlighter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
GDScriptSyntaxHighlighter::_get_property_listv
          (GDScriptSyntaxHighlighter *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    EditorSyntaxHighlighter::_get_property_listv((EditorSyntaxHighlighter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GDScriptSyntaxHighlighter";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GDScriptSyntaxHighlighter";
  local_98 = 0;
  local_70 = 0x19;
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
LAB_0010e83d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e83d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010e85f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010e85f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GDScriptSyntaxHighlighter",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorSyntaxHighlighter::_get_property_listv((EditorSyntaxHighlighter *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos(StringName const&, unsigned int&) const */

undefined8 __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  
  if (*(long *)this == 0) {
    return 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar14 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(*(long *)(this + 0x18) + lVar13 * 4);
    iVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar16) &&
           (uVar16 = *(uint *)(*(long *)(this + 8) + lVar13 * 4),
           *(long *)(*(long *)this + (ulong)uVar16 * 8) == *(long *)param_1)) {
          *param_2 = uVar16;
          return 1;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(*(long *)(this + 0x18) + lVar13 * 4);
        iVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar14, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar14, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* HashMap<String, GDScriptSyntaxHighlighter::CommentMarkerLevel, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   GDScriptSyntaxHighlighter::CommentMarkerLevel> > >::_lookup_pos(String const&, unsigned int&)
   const */

undefined8 __thiscall
HashMap<String,GDScriptSyntaxHighlighter::CommentMarkerLevel,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptSyntaxHighlighter::CommentMarkerLevel>>>
::_lookup_pos(HashMap<String,GDScriptSyntaxHighlighter::CommentMarkerLevel,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptSyntaxHighlighter::CommentMarkerLevel>>>
              *this,String *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* HashMap<StringName, Color, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Color> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
::_lookup_pos(HashMap<StringName,Color,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Color>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<GDScriptSyntaxHighlighter::ColorRegion>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<GDScriptSyntaxHighlighter::ColorRegion>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
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
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010f280:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_0010f280;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010f159:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010f159;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_0010f2d6;
  }
  if (lVar10 == lVar7) {
LAB_0010f1ff:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010f2d6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010f1ea;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010f1ff;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0010f1ea:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<GDScriptSyntaxHighlighter::ColorRegion>::_unref() */

void __thiscall
CowData<GDScriptSyntaxHighlighter::ColorRegion>::_unref
          (CowData<GDScriptSyntaxHighlighter::ColorRegion> *this)

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
          if (*(long *)(lVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x18);
              *(undefined8 *)(lVar6 + 0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x30;
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



/* GDScriptSyntaxHighlighter::~GDScriptSyntaxHighlighter() */

void __thiscall
GDScriptSyntaxHighlighter::~GDScriptSyntaxHighlighter(GDScriptSyntaxHighlighter *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_001108b8;
  pvVar5 = *(void **)(this + 0x4f8);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x51c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x518) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x51c) = 0;
        *(undefined1 (*) [16])(this + 0x508) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x500) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x500) + lVar4) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x4f8);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x51c) = 0;
        *(undefined1 (*) [16])(this + 0x508) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010fca3;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x500),false);
  }
LAB_0010fca3:
  pvVar5 = *(void **)(this + 0x3b8);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3dc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x3d8) * 4) != 0) {
        memset(*(void **)(this + 0x3d0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x3d8) * 4) << 2);
        if (*(int *)(this + 0x3dc) == 0) goto LAB_00110140;
      }
      lVar4 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + lVar4 * 8) != 0)) {
          StringName::unref();
          pvVar5 = *(void **)(this + 0x3b8);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x3dc));
      *(undefined4 *)(this + 0x3dc) = 0;
      if (pvVar5 == (void *)0x0) goto LAB_0010fd3e;
    }
LAB_00110140:
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x3c8),false);
    Memory::free_static(*(void **)(this + 0x3c0),false);
    Memory::free_static(*(void **)(this + 0x3d0),false);
  }
LAB_0010fd3e:
  pvVar5 = *(void **)(this + 0x390);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3b4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x3b0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3b4) = 0;
        *(undefined1 (*) [16])(this + 0x3a0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x398) + lVar4) != 0) {
            bVar6 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x398) + lVar4) = 0;
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            if ((bVar6) && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x390);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x3b4) = 0;
        *(undefined1 (*) [16])(this + 0x3a0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010fdfc;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x398),false);
  }
LAB_0010fdfc:
  pvVar5 = *(void **)(this + 0x360);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 900) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x380) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 900) = 0;
        *(undefined1 (*) [16])(this + 0x370) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x368) + lVar4) != 0) {
            bVar6 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x368) + lVar4) = 0;
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            if ((bVar6) && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x360);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 900) = 0;
        *(undefined1 (*) [16])(this + 0x370) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010febc;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x368),false);
  }
LAB_0010febc:
  pvVar5 = *(void **)(this + 0x330);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x354) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x350) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x354) = 0;
        *(undefined1 (*) [16])(this + 0x340) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x338) + lVar4) != 0) {
            bVar6 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x338) + lVar4) = 0;
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            if ((bVar6) && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x330);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x354) = 0;
        *(undefined1 (*) [16])(this + 0x340) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010ff7a;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x338),false);
  }
LAB_0010ff7a:
  pvVar5 = *(void **)(this + 0x300);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x324) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 800) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x324) = 0;
        *(undefined1 (*) [16])(this + 0x310) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x308) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x308) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar5 + lVar4 * 2),false);
            pvVar5 = *(void **)(this + 0x300);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x324) = 0;
        *(undefined1 (*) [16])(this + 0x310) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00110017;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x308),false);
  }
LAB_00110017:
  CowData<GDScriptSyntaxHighlighter::ColorRegion>::_unref
            ((CowData<GDScriptSyntaxHighlighter::ColorRegion> *)(this + 0x2f0));
  bVar6 = StringName::configured != '\0';
  *(code **)this = RefCounted::init_ref;
  if (bVar6) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011006b;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
    }
  }
LAB_0011006b:
  if (*(long *)(this + 0x2b0) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x2b0);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
        SyntaxHighlighter::~SyntaxHighlighter((SyntaxHighlighter *)this);
        return;
      }
    }
  }
  SyntaxHighlighter::~SyntaxHighlighter((SyntaxHighlighter *)this);
  return;
}



/* GDScriptSyntaxHighlighter::~GDScriptSyntaxHighlighter() */

void __thiscall
GDScriptSyntaxHighlighter::~GDScriptSyntaxHighlighter(GDScriptSyntaxHighlighter *this)

{
  ~GDScriptSyntaxHighlighter(this);
  operator_delete(this,0x520);
  return;
}



/* CowData<GDScriptSyntaxHighlighter::ColorRegion>::_realloc(long) */

undefined8 __thiscall
CowData<GDScriptSyntaxHighlighter::ColorRegion>::_realloc
          (CowData<GDScriptSyntaxHighlighter::ColorRegion> *this,long param_1)

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
/* Error CowData<GDScriptSyntaxHighlighter::ColorRegion>::resize<false>(long) */

undefined8 __thiscall
CowData<GDScriptSyntaxHighlighter::ColorRegion>::resize<false>
          (CowData<GDScriptSyntaxHighlighter::ColorRegion> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
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
    lVar11 = 0;
    lVar9 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar11 * 0x30;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x30 == 0) {
LAB_00110580:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x30 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar12 = uVar10 + 1;
  if (lVar12 == 0) goto LAB_00110580;
  uVar13 = param_1;
  if (param_1 <= lVar11) {
    while (lVar11 = *(long *)this, lVar11 != 0) {
      if (*(ulong *)(lVar11 + -8) <= uVar13) {
        if (lVar12 != lVar9) {
          uVar7 = _realloc(this,lVar12);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          lVar11 = *(long *)this;
          if (lVar11 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar11 + -8) = param_1;
        return 0;
      }
      lVar11 = lVar11 + uVar13 * 0x30;
      if (*(long *)(lVar11 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar11 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar11 + 0x20);
          *(undefined8 *)(lVar11 + 0x20) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar11 + 0x18));
      uVar13 = uVar13 + 1;
    }
    goto LAB_001105d6;
  }
  if (lVar12 == lVar9) {
LAB_001104f3:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_001105d6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar11 = puVar8[-1];
    if (param_1 <= lVar11) goto LAB_0011042e;
  }
  else {
    if (lVar11 != 0) {
      uVar7 = _realloc(this,lVar12);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_001104f3;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar11 = 0;
  }
  uVar4 = _UNK_00113be8;
  uVar7 = __LC20;
  puVar5 = puVar8 + lVar11 * 6;
  do {
    *(undefined4 *)puVar5 = 0;
    puVar6 = puVar5 + 6;
    *(undefined8 *)((long)puVar5 + 4) = uVar7;
    *(undefined8 *)((long)puVar5 + 0xc) = uVar4;
    *(undefined1 (*) [16])(puVar5 + 3) = (undefined1  [16])0x0;
    *(undefined4 *)(puVar5 + 5) = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar8 + param_1 * 6);
LAB_0011042e:
  puVar8[-1] = param_1;
  return 0;
}



/* GDScriptSyntaxHighlighter::_get_line_syntax_highlighting_impl(int) */

void GDScriptSyntaxHighlighter::_GLOBAL__sub_I__get_line_syntax_highlighting_impl(void)

{
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptSyntaxHighlighter::~GDScriptSyntaxHighlighter() */

void __thiscall
GDScriptSyntaxHighlighter::~GDScriptSyntaxHighlighter(GDScriptSyntaxHighlighter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

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