
/* CodeSignEntitlementsText::get_size() const */

undefined4 __thiscall CodeSignEntitlementsText::get_size(CodeSignEntitlementsText *this)

{
  if (*(long *)(this + 0x188) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x188) + -8);
  }
  return 0;
}



/* CodeSignRequirements::write_to_file(Ref<FileAccess>) const */

void __thiscall CodeSignRequirements::write_to_file(CodeSignRequirements *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)(this + 0x188);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + -8);
    }
                    /* WARNING: Could not recover jumptable at 0x00100049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2d0))(param_2,lVar1,uVar2,*(code **)(*param_2 + 0x2d0));
    return;
  }
  _err_print_error("write_to_file","editor/export/codesign.cpp",0x329,
                   "Condition \"p_file.is_null()\" is true.",
                   "CodeSign/Requirements: Invalid file handle.",0,0);
  return;
}



/* CodeSignEntitlementsText::write_to_file(Ref<FileAccess>) const */

void __thiscall
CodeSignEntitlementsText::write_to_file(CodeSignEntitlementsText *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)(this + 0x188);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + -8);
    }
                    /* WARNING: Could not recover jumptable at 0x001000b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2d0))(param_2,lVar1,uVar2,*(code **)(*param_2 + 0x2d0));
    return;
  }
  _err_print_error("write_to_file","editor/export/codesign.cpp",0x35f,
                   "Condition \"p_file.is_null()\" is true.",
                   "CodeSign/EntitlementsText: Invalid file handle.",0,0);
  return;
}



/* CodeSignEntitlementsBinary::write_to_file(Ref<FileAccess>) const */

void __thiscall
CodeSignEntitlementsBinary::write_to_file(CodeSignEntitlementsBinary *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)(this + 0x188);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + -8);
    }
                    /* WARNING: Could not recover jumptable at 0x00100129. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2d0))(param_2,lVar1,uVar2,*(code **)(*param_2 + 0x2d0));
    return;
  }
  _err_print_error("write_to_file","editor/export/codesign.cpp",0x396,
                   "Condition \"p_file.is_null()\" is true.",
                   "CodeSign/EntitlementsBinary: Invalid file handle.",0,0);
  return;
}



/* CodeSignCodeDirectory::write_to_file(Ref<FileAccess>) const */

void __thiscall CodeSignCodeDirectory::write_to_file(CodeSignCodeDirectory *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)(this + 0x188);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + -8);
    }
                    /* WARNING: Could not recover jumptable at 0x00100199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2d0))(param_2,lVar1,uVar2,*(code **)(*param_2 + 0x2d0));
    return;
  }
  _err_print_error("write_to_file","editor/export/codesign.cpp",0x410,
                   "Condition \"p_file.is_null()\" is true.",
                   "CodeSign/CodeDirectory: Invalid file handle.",0,0);
  return;
}



/* CodeSignSignature::write_to_file(Ref<FileAccess>) const */

void __thiscall CodeSignSignature::write_to_file(CodeSignSignature *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)(this + 0x188);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + -8);
    }
                    /* WARNING: Could not recover jumptable at 0x00100209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2d0))(param_2,lVar1,uVar2,*(code **)(*param_2 + 0x2d0));
    return;
  }
  _err_print_error("write_to_file","editor/export/codesign.cpp",0x43e,
                   "Condition \"p_file.is_null()\" is true.",
                   "CodeSign/Signature: Invalid file handle.",0,0);
  return;
}



/* CowData<char32_t>::TEMPNAMEPLACEHOLDERVALUE(CowData<char32_t>&&) [clone .part.0] */

void __thiscall CowData<char32_t>::operator=(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  
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
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  return;
}



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

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



/* CodeSignRequirements::CodeSignRequirements(Vector<unsigned char> const&) */

void __thiscall
CodeSignRequirements::CodeSignRequirements(CodeSignRequirements *this,Vector *param_1)

{
  long lVar1;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x188) = 0;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined ***)this = &PTR__initialize_classv_0011d5a0;
  if (lVar1 != 0) {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(this + 0x188),(CowData *)(param_1 + 8));
    return;
  }
  return;
}



/* CodeSignCodeDirectory::get_page_count() */

undefined4 __thiscall CodeSignCodeDirectory::get_page_count(CodeSignCodeDirectory *this)

{
  return *(undefined4 *)(this + 400);
}



/* CodeSignCodeDirectory::get_page_remainder() */

undefined4 __thiscall CodeSignCodeDirectory::get_page_remainder(CodeSignCodeDirectory *this)

{
  return *(undefined4 *)(this + 0x194);
}



/* CodeSignSuperBlob::get_size() const */

int __thiscall CodeSignSuperBlob::get_size(CodeSignSuperBlob *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  lVar3 = *(long *)(this + 8);
  if (lVar3 == 0) {
    iVar6 = 0xc;
  }
  else {
    lVar4 = *(long *)(lVar3 + -8);
    lVar5 = 0;
    iVar6 = (int)lVar4 * 8 + 0xc;
    while (lVar5 < lVar4) {
      plVar1 = *(long **)(lVar3 + lVar5 * 8);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      lVar5 = lVar5 + 1;
      iVar2 = (**(code **)(*plVar1 + 0x160))();
      iVar6 = iVar6 + iVar2;
      lVar3 = *(long *)(this + 8);
      if (lVar3 == 0) {
        return iVar6;
      }
      lVar4 = *(long *)(lVar3 + -8);
    }
  }
  return iVar6;
}



/* CodeSignSuperBlob::write_to_file(Ref<FileAccess>) const */

void __thiscall CodeSignSuperBlob::write_to_file(CodeSignSuperBlob *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  Object *pOVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long in_FS_OFFSET;
  Object *local_48;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("write_to_file","editor/export/codesign.cpp",0x45b,
                     "Condition \"p_file.is_null()\" is true.",
                     "CodeSign/SuperBlob: Invalid file handle.",0,0);
  }
  else {
    uVar8 = get_size(this);
    if (*(long *)(this + 8) == 0) {
      uVar13 = 0xc;
    }
    else {
      uVar13 = (int)*(undefined8 *)(*(long *)(this + 8) + -8) * 8 + 0xc;
    }
    (**(code **)(*(long *)*param_2 + 0x278))((long *)*param_2,0xc00cdefa);
    (**(code **)(*(long *)*param_2 + 0x278))
              ((long *)*param_2,
               uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18);
    if (*(long *)(this + 8) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)*(undefined8 *)(*(long *)(this + 8) + -8);
      uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    }
    (**(code **)(*(long *)*param_2 + 0x278))((long *)*param_2,uVar8);
    lVar11 = 0;
    lVar10 = *(long *)(this + 8);
    while (lVar10 != 0) {
      if (*(long *)(lVar10 + -8) <= lVar11) {
        if (lVar10 != 0) {
          lVar11 = 0;
          goto LAB_001008ae;
        }
        break;
      }
      plVar2 = *(long **)(lVar10 + lVar11 * 8);
      lVar10 = lVar11 * 8;
      if (plVar2 == (long *)0x0) break;
      plVar3 = (long *)*param_2;
      pcVar4 = *(code **)(*plVar3 + 0x278);
      uVar8 = (**(code **)(*plVar2 + 0x168))();
      (*pcVar4)(plVar3,uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                       uVar8 << 0x18);
      (**(code **)(*(long *)*param_2 + 0x278))
                ((long *)*param_2,
                 uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18
                );
      lVar5 = *(long *)(this + 8);
      if (lVar5 == 0) {
        lVar12 = 0;
LAB_001007ec:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar12,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar12 = *(long *)(lVar5 + -8);
      if (lVar12 <= lVar11) goto LAB_001007ec;
      lVar11 = lVar11 + 1;
      iVar9 = (**(code **)(**(long **)(lVar5 + lVar10) + 0x160))();
      uVar13 = uVar13 + iVar9;
      lVar10 = *(long *)(this + 8);
    }
  }
  goto LAB_00100868;
  while( true ) {
    plVar2 = *(long **)(lVar10 + lVar11 * 8);
    pOVar6 = (Object *)*param_2;
    local_48 = (Object *)0x0;
    pcVar4 = *(code **)(*plVar2 + 0x170);
    if ((pOVar6 != (Object *)0x0) &&
       (cVar7 = RefCounted::reference(), local_48 = pOVar6, cVar7 == '\0')) {
      local_48 = (Object *)0x0;
    }
    (*pcVar4)(plVar2);
    if (((local_48 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_48), cVar7 != '\0')) {
      (**(code **)(*(long *)local_48 + 0x140))(local_48);
      Memory::free_static(local_48,false);
    }
    lVar10 = *(long *)(this + 8);
    lVar11 = lVar11 + 1;
    if (lVar10 == 0) break;
LAB_001008ae:
    if (*(long *)(lVar10 + -8) <= lVar11) break;
  }
LAB_00100868:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignCodeResources::hash_sha1_base64(String const&) */

String * CodeSignCodeResources::hash_sha1_base64(String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long *in_RDX;
  long in_FS_OFFSET;
  bool bVar7;
  Object *local_1080;
  long local_1078;
  long local_1070;
  char *local_1068;
  undefined8 local_1060;
  undefined1 local_1058 [32];
  undefined1 local_1038 [4104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_1080,(int)in_RDX,(Error *)0x1);
  if (local_1080 == (Object *)0x0) {
    local_1070 = 0;
    plVar1 = (long *)(*in_RDX + -0x10);
    if (*in_RDX != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00100ac6;
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
        local_1070 = *in_RDX;
      }
    }
LAB_00100ac6:
    local_1078 = 0;
    local_1060 = 0x2e;
    local_1068 = "CodeSign/CodeResources: Can\'t open file: \"%s\".";
    String::parse_latin1((StrRange *)&local_1078);
    vformat<String>(&local_1068,(StrRange *)&local_1078,&local_1070);
    _err_print_error("hash_sha1_base64","editor/export/codesign.cpp",0x32,
                     "Condition \"fa.is_null()\" is true. Returning: String()",&local_1068,0,0);
    pcVar3 = local_1068;
    if (local_1068 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_1068 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1068 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_1078;
    if (local_1078 != 0) {
      LOCK();
      plVar1 = (long *)(local_1078 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1078 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_1070;
    if (local_1070 != 0) {
      LOCK();
      plVar1 = (long *)(local_1070 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1070 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)param_1 = 0;
  }
  else {
    CryptoCore::SHA1Context::SHA1Context((SHA1Context *)&local_1068);
    CryptoCore::SHA1Context::start();
    do {
      uVar5 = (**(code **)(*(long *)local_1080 + 0x220))(local_1080,local_1038,0x1000);
      if (uVar5 == 0) break;
      CryptoCore::SHA1Context::update((uchar *)&local_1068,(ulong)local_1038);
    } while (0xfff < uVar5);
    CryptoCore::SHA1Context::finish((uchar *)&local_1068);
    CryptoCore::b64_encode_str((uchar *)param_1,(int)local_1058);
    CryptoCore::SHA1Context::~SHA1Context((SHA1Context *)&local_1068);
  }
  if (((local_1080 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_1080), cVar4 != '\0')) {
    (**(code **)(*(long *)local_1080 + 0x140))(local_1080);
    Memory::free_static(local_1080,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CodeSignCodeResources::hash_sha256_base64(String const&) */

String * CodeSignCodeResources::hash_sha256_base64(String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long *in_RDX;
  long in_FS_OFFSET;
  bool bVar7;
  Object *local_1080;
  long local_1078;
  long local_1070;
  char *local_1068;
  undefined8 local_1060;
  undefined1 local_1058 [32];
  undefined1 local_1038 [4104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_1080,(int)in_RDX,(Error *)0x1);
  if (local_1080 == (Object *)0x0) {
    local_1070 = 0;
    plVar1 = (long *)(*in_RDX + -0x10);
    if (*in_RDX != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00100d56;
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
        local_1070 = *in_RDX;
      }
    }
LAB_00100d56:
    local_1078 = 0;
    local_1060 = 0x2e;
    local_1068 = "CodeSign/CodeResources: Can\'t open file: \"%s\".";
    String::parse_latin1((StrRange *)&local_1078);
    vformat<String>(&local_1068,(StrRange *)&local_1078,&local_1070);
    _err_print_error("hash_sha256_base64","editor/export/codesign.cpp",0x4a,
                     "Condition \"fa.is_null()\" is true. Returning: String()",&local_1068,0,0);
    pcVar3 = local_1068;
    if (local_1068 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_1068 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1068 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_1078;
    if (local_1078 != 0) {
      LOCK();
      plVar1 = (long *)(local_1078 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1078 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_1070;
    if (local_1070 != 0) {
      LOCK();
      plVar1 = (long *)(local_1070 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1070 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)param_1 = 0;
  }
  else {
    CryptoCore::SHA256Context::SHA256Context((SHA256Context *)&local_1068);
    CryptoCore::SHA256Context::start();
    do {
      uVar5 = (**(code **)(*(long *)local_1080 + 0x220))(local_1080,local_1038,0x1000);
      if (uVar5 == 0) break;
      CryptoCore::SHA256Context::update((uchar *)&local_1068,(ulong)local_1038);
    } while (0xfff < uVar5);
    CryptoCore::SHA256Context::finish((uchar *)&local_1068);
    CryptoCore::b64_encode_str((uchar *)param_1,(int)local_1058);
    CryptoCore::SHA256Context::~SHA256Context((SHA256Context *)&local_1068);
  }
  if (((local_1080 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_1080), cVar4 != '\0')) {
    (**(code **)(*(long *)local_1080 + 0x140))(local_1080);
    Memory::free_static(local_1080,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CodeSignCodeDirectory::set_hash_in_slot(Vector<unsigned char> const&, int) */

undefined8 __thiscall
CodeSignCodeDirectory::set_hash_in_slot(CodeSignCodeDirectory *this,Vector *param_1,int param_2)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 < -*(int *)(this + 0x19c)) || (*(int *)(this + 0x198) <= param_2)) {
    local_60 = 0;
    local_50 = 0x34;
    local_58 = "CodeSign/CodeDirectory: Invalid hash slot index: %d.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<int>((String *)&local_58,(int)(StrRange *)&local_60);
    _err_print_error("set_hash_in_slot","editor/export/codesign.cpp",0x3e3,
                     "Condition \"(p_slot < -special_slots) || (p_slot >= code_slots)\" is true. Returning: false"
                     ,(String *)&local_58,0,0);
    pcVar6 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
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
    uVar7 = 0;
  }
  else {
    lVar9 = 0;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x188));
    lVar4 = *(long *)(this + 0x188);
    uVar8 = (uint)*(byte *)(lVar4 + 0x24);
    if (*(byte *)(lVar4 + 0x24) != 0) {
      do {
        lVar11 = *(long *)(param_1 + 8);
        if (lVar11 == 0) {
          lVar10 = 0;
LAB_00100f73:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar10,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar10 = *(long *)(lVar11 + -8);
        if (lVar10 <= lVar9) goto LAB_00100f73;
        uVar2 = *(undefined1 *)(lVar11 + lVar9);
        uVar3 = *(uint *)(lVar4 + 0x10);
        uVar12 = (ulong)((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                         uVar3 << 0x18) + (int)lVar9 + uVar8 * param_2);
        if (*(long *)(this + 0x188) == 0) {
          lVar11 = 0;
LAB_00100fbb:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,uVar12,lVar11,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar11 = *(long *)(*(long *)(this + 0x188) + -8);
        if (lVar11 <= (long)uVar12) goto LAB_00100fbb;
        lVar9 = lVar9 + 1;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x188));
        *(undefined1 *)(*(long *)(this + 0x188) + uVar12) = uVar2;
        uVar8 = (uint)*(byte *)(lVar4 + 0x24);
      } while ((int)lVar9 < (int)uVar8);
    }
    uVar7 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<char>::resize<false>(CowData<char> *this,long param_1)

{
  CowData<char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00101286:
    lVar10 = 0;
    pCVar6 = (CowData<char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00101286;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00117aea();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_001011dc;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_001011dc:
  puVar8[-1] = param_1;
  return;
}



/* CodeSignCodeResources::save_to_file(String const&) */

undefined8 CodeSignCodeResources::save_to_file(String *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  Ref *pRVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 extraout_RDX;
  undefined8 uVar8;
  CowData *in_RSI;
  bool bVar9;
  Object *pOVar10;
  long in_R8;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  Ref *local_258;
  Ref *local_250;
  Ref *local_248;
  Ref *local_240;
  long local_238;
  Object *local_230;
  Object *local_228;
  Ref *local_220;
  Object *local_218;
  undefined8 local_210;
  int local_208 [8];
  PList local_1e8 [424];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PList::PList(local_1e8);
  cVar5 = is_print_verbose_enabled();
  if (cVar5 != '\0') {
    local_228 = (Object *)0x0;
    if (*(long *)in_RSI != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_228,in_RSI);
    }
    local_230 = (Object *)0x0;
    local_218 = (Object *)0x1159e8;
    local_210 = 0x2b;
    String::parse_latin1((StrRange *)&local_230);
    vformat<String>((CowData<char32_t> *)&local_220,(StrRange *)&local_230,
                    (CowData<char32_t> *)&local_228);
    Variant::Variant((Variant *)local_208,(String *)&local_220);
    stringify_variants((Variant *)&local_218);
    __print_line((String *)&local_218);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
    if (Variant::needs_deinit[local_208[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  }
  PListNode::new_dict();
  PList::get_root();
  pOVar10 = local_228;
  local_220 = (Ref *)0x0;
  local_218 = (Object *)0x116d64;
  local_210 = 5;
  String::parse_latin1((StrRange *)&local_220);
  PListNode::push_subnode(pOVar10,(String *)&local_258);
  pRVar4 = local_220;
  if (local_220 != (Ref *)0x0) {
    LOCK();
    plVar1 = (long *)(local_220 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_220 = (Ref *)0x0;
      Memory::free_static(pRVar4 + -0x10,false);
    }
  }
  if (((local_228 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar10 = local_228, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_228), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
    Memory::free_static(pOVar10,false);
  }
  lVar7 = *(long *)(param_1 + 0x28);
  lVar11 = 0;
  bVar9 = SUB81((String *)&local_218,0);
joined_r0x001013dd:
  if (lVar7 != 0) {
    do {
      pRVar4 = local_258;
      if (*(long *)(lVar7 + -8) <= lVar11) break;
      if (*(char *)(lVar7 + lVar11 * 0x28 + 0x18) == '\0') {
        PListNode::new_data((String *)&local_218);
        PListNode::push_subnode(pRVar4,(String *)&local_218);
        if ((local_218 != (Object *)0x0) &&
           (cVar5 = RefCounted::unreference(), pOVar10 = local_218, cVar5 != '\0')) {
          cVar5 = predelete_handler(local_218);
          goto joined_r0x0010160a;
        }
      }
      else {
        PListNode::new_dict();
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_00101c28;
        in_R8 = *(long *)(*(long *)(param_1 + 0x28) + -8);
        if (in_R8 <= lVar11) goto LAB_00101c49;
        PListNode::push_subnode(local_258,(String *)&local_228);
        pOVar10 = local_228;
        local_220 = (Ref *)0x0;
        local_218 = (Object *)&_LC48;
        local_210 = 4;
        String::parse_latin1((StrRange *)&local_220);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_00101c28;
        in_R8 = *(long *)(*(long *)(param_1 + 0x28) + -8);
        if (in_R8 <= lVar11) goto LAB_00101c49;
        PListNode::new_data((String *)&local_218);
        PListNode::push_subnode(pOVar10,(String *)&local_218);
        if (((local_218 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar10 = local_218, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_218), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
        pRVar4 = local_220;
        if (local_220 != (Ref *)0x0) {
          LOCK();
          plVar1 = (long *)(local_220 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_220 = (Ref *)0x0;
            Memory::free_static(pRVar4 + -0x10,false);
          }
        }
        pOVar10 = local_228;
        local_218 = (Object *)0x116d76;
        local_220 = (Ref *)0x0;
        local_210 = 8;
        String::parse_latin1((StrRange *)&local_220);
        PListNode::new_bool(bVar9);
        PListNode::push_subnode(pOVar10,(String *)&local_218);
        if (((local_218 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar10 = local_218, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_218), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
        pRVar4 = local_220;
        if (local_220 != (Ref *)0x0) {
          LOCK();
          plVar1 = (long *)(local_220 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_220 = (Ref *)0x0;
            Memory::free_static(pRVar4 + -0x10,false);
          }
        }
        if ((local_228 != (Object *)0x0) &&
           (cVar5 = RefCounted::unreference(), pOVar10 = local_228, cVar5 != '\0')) {
          cVar5 = predelete_handler(local_228);
joined_r0x0010160a:
          if (cVar5 != '\0') goto LAB_00101610;
        }
      }
      lVar7 = *(long *)(param_1 + 0x28);
      lVar11 = lVar11 + 1;
      if (lVar7 == 0) break;
    } while( true );
  }
  PListNode::new_dict();
  PList::get_root();
  pOVar10 = local_228;
  local_220 = (Ref *)0x0;
  local_218 = (Object *)0x116d6a;
  local_210 = 6;
  String::parse_latin1((StrRange *)&local_220);
  PListNode::push_subnode(pOVar10,(String *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  Ref<PListNode>::unref((Ref<PListNode> *)&local_228);
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 != 0) {
    lVar11 = 0;
    while (lVar11 < *(long *)(lVar7 + -8)) {
      PListNode::new_dict();
      if (*(long *)(param_1 + 0x38) == 0) {
LAB_00101f60:
        in_R8 = 0;
        goto LAB_00101c49;
      }
      in_R8 = *(long *)(*(long *)(param_1 + 0x38) + -8);
      if (in_R8 <= lVar11) goto LAB_00101c49;
      PListNode::push_subnode(local_250,(String *)&local_228);
      pOVar10 = local_228;
      lVar7 = *(long *)(param_1 + 0x38);
      if (lVar7 == 0) goto LAB_00101f60;
      in_R8 = *(long *)(lVar7 + -8);
      if (in_R8 <= lVar11) goto LAB_00101c49;
      local_220 = (Ref *)0x0;
      if (*(char *)(lVar7 + 0x19 + lVar11 * 0x28) == '\0') {
        local_210 = 4;
        local_218 = (Object *)&_LC48;
        String::parse_latin1((StrRange *)&local_220);
        if (*(long *)(param_1 + 0x38) != 0) {
          in_R8 = *(long *)(*(long *)(param_1 + 0x38) + -8);
          if (in_R8 <= lVar11) goto LAB_00101c49;
          PListNode::new_data((String *)&local_218);
          PListNode::push_subnode(pOVar10,(String *)&local_218);
          Ref<PListNode>::unref((Ref<PListNode> *)&local_218);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
          pOVar10 = local_228;
          local_220 = (Ref *)0x0;
          local_218 = (Object *)0x116d98;
          local_210 = 5;
          String::parse_latin1((StrRange *)&local_220);
          if (*(long *)(param_1 + 0x38) != 0) {
            in_R8 = *(long *)(*(long *)(param_1 + 0x38) + -8);
            if (in_R8 <= lVar11) goto LAB_00101c49;
            PListNode::new_data((String *)&local_218);
            PListNode::push_subnode(pOVar10,(String *)&local_218);
            Ref<PListNode>::unref((Ref<PListNode> *)&local_218);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
            pOVar10 = local_228;
            lVar7 = *(long *)(param_1 + 0x38);
            if (lVar7 != 0) {
              in_R8 = *(long *)(lVar7 + -8);
              if (in_R8 <= lVar11) goto LAB_00101c49;
              if (*(char *)(lVar7 + 0x18 + lVar11 * 0x28) != '\0') {
                local_218 = (Object *)0x116d76;
                local_220 = (Ref *)0x0;
                local_210 = 8;
                String::parse_latin1((StrRange *)&local_220);
                PListNode::new_bool(bVar9);
                goto LAB_0010181b;
              }
              goto LAB_00101830;
            }
          }
        }
        goto LAB_00101f60;
      }
      local_210 = 6;
      local_218 = (Object *)0x116d85;
      String::parse_latin1((StrRange *)&local_220);
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_00101f60;
      in_R8 = *(long *)(*(long *)(param_1 + 0x38) + -8);
      if (in_R8 <= lVar11) goto LAB_00101c49;
      PListNode::new_data((String *)&local_218);
      PListNode::push_subnode(pOVar10,(String *)&local_218);
      Ref<PListNode>::unref((Ref<PListNode> *)&local_218);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
      pOVar10 = local_228;
      local_220 = (Ref *)0x0;
      local_218 = (Object *)0x116d8c;
      local_210 = 0xb;
      String::parse_latin1((StrRange *)&local_220);
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_00101f60;
      in_R8 = *(long *)(*(long *)(param_1 + 0x38) + -8);
      if (in_R8 <= lVar11) goto LAB_00101c49;
      PListNode::new_string((String *)&local_218);
LAB_0010181b:
      PListNode::push_subnode(pOVar10,(String *)&local_218);
      Ref<PListNode>::unref((Ref<PListNode> *)&local_218);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
LAB_00101830:
      if (((local_228 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar10 = local_228, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_228), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      lVar7 = *(long *)(param_1 + 0x38);
      lVar11 = lVar11 + 1;
      if (lVar7 == 0) break;
    }
  }
  PListNode::new_dict();
  PList::get_root();
  pRVar4 = local_220;
  local_218 = (Object *)0x0;
  String::parse_latin1((String *)&local_218,"rules");
  PListNode::push_subnode(pRVar4,(String *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  Ref<PListNode>::unref((Ref<PListNode> *)&local_220);
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    lVar11 = 0;
    while (pRVar4 = local_248, lVar11 < *(long *)(lVar7 + -8)) {
      lVar12 = lVar11 * 0x18;
      lVar2 = lVar7 + lVar12;
      if (*(char *)(lVar2 + 0x14) != '\0') {
        if (((*(long *)(lVar2 + 8) != 0) && (1 < *(uint *)(*(long *)(lVar2 + 8) + -8))) ||
           (0 < *(int *)(lVar2 + 0x10))) {
          PListNode::new_dict();
          if (*(long *)(param_1 + 8) != 0) {
            in_R8 = *(long *)(*(long *)(param_1 + 8) + -8);
            if (in_R8 <= lVar11) goto LAB_00101c49;
            PListNode::push_subnode(local_248,(String *)&local_228);
            pOVar10 = local_228;
            lVar7 = *(long *)(param_1 + 8);
            if (lVar7 != 0) {
              in_R8 = *(long *)(lVar7 + -8);
              if (in_R8 <= lVar11) goto LAB_00101c49;
              lVar2 = *(long *)(lVar7 + lVar12 + 8);
              if ((lVar2 != 0) && (1 < *(uint *)(lVar2 + -8))) {
                PListNode::new_bool(bVar9);
                PListNode::push_subnode(pOVar10,(String *)&local_218);
                Ref<PListNode>::unref((Ref<PListNode> *)&local_218);
                lVar7 = *(long *)(param_1 + 8);
                if (lVar7 == 0) goto LAB_00101c28;
                in_R8 = *(long *)(lVar7 + -8);
                if (in_R8 <= lVar11) goto LAB_00101c49;
              }
              pOVar10 = local_228;
              if (*(int *)(lVar7 + 0x10 + lVar12) != 1) {
                local_218 = (Object *)0x0;
                String::parse_latin1((String *)&local_218,"weight");
                lVar7 = *(long *)(param_1 + 8);
                if (lVar7 == 0) goto LAB_00101c28;
                in_R8 = *(long *)(lVar7 + -8);
                if (in_R8 <= lVar11) goto LAB_00101c49;
                PListNode::new_real((double)*(int *)(lVar7 + 0x10 + lVar12));
                PListNode::push_subnode(pOVar10,(String *)&local_220);
                Ref<PListNode>::unref((Ref<PListNode> *)&local_220);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
              }
              Ref<PListNode>::unref((Ref<PListNode> *)&local_228);
              lVar7 = *(long *)(param_1 + 8);
              goto LAB_001019f5;
            }
          }
LAB_00101c28:
          in_R8 = 0;
          goto LAB_00101c49;
        }
        PListNode::new_bool(bVar9);
        PListNode::push_subnode(pRVar4,(String *)&local_218);
        Ref<PListNode>::unref((Ref<PListNode> *)&local_218);
        lVar7 = *(long *)(param_1 + 8);
      }
LAB_001019f5:
      lVar11 = lVar11 + 1;
      if (lVar7 == 0) break;
    }
  }
  PListNode::new_dict();
  PList::get_root();
  pRVar4 = local_220;
  local_218 = (Object *)0x0;
  String::parse_latin1((String *)&local_218,"rules2");
  PListNode::push_subnode(pRVar4,(String *)&local_240);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  Ref<PListNode>::unref((Ref<PListNode> *)&local_220);
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) goto LAB_00102099;
  lVar11 = 0;
  do {
    pRVar4 = local_240;
    if (*(long *)(lVar7 + -8) <= lVar11) goto LAB_00102099;
    lVar12 = lVar11 * 0x18;
    lVar2 = lVar7 + lVar12;
    if (*(char *)(lVar2 + 0x14) != '\0') {
      if (((*(long *)(lVar2 + 8) != 0) && (1 < *(uint *)(*(long *)(lVar2 + 8) + -8))) ||
         (0 < *(int *)(lVar2 + 0x10))) {
        PListNode::new_dict();
        if (*(long *)(param_1 + 0x18) != 0) {
          in_R8 = *(long *)(*(long *)(param_1 + 0x18) + -8);
          if (in_R8 <= lVar11) goto LAB_00101c49;
          PListNode::push_subnode(local_240,(String *)&local_228);
          pOVar10 = local_228;
          lVar7 = *(long *)(param_1 + 0x18);
          if (lVar7 != 0) {
            in_R8 = *(long *)(lVar7 + -8);
            if (in_R8 <= lVar11) goto LAB_00101c49;
            lVar2 = *(long *)(lVar7 + lVar12 + 8);
            if ((lVar2 != 0) && (1 < *(uint *)(lVar2 + -8))) {
              PListNode::new_bool(bVar9);
              PListNode::push_subnode(pOVar10,(String *)&local_218);
              Ref<PListNode>::unref((Ref<PListNode> *)&local_218);
              lVar7 = *(long *)(param_1 + 0x18);
              if (lVar7 == 0) goto LAB_00102156;
              in_R8 = *(long *)(lVar7 + -8);
              if (in_R8 <= lVar11) goto LAB_00101c49;
            }
            pOVar10 = local_228;
            if (*(int *)(lVar7 + 0x10 + lVar12) != 1) {
              local_218 = (Object *)0x0;
              String::parse_latin1((String *)&local_218,"weight");
              lVar7 = *(long *)(param_1 + 0x18);
              if (lVar7 == 0) goto LAB_00102156;
              in_R8 = *(long *)(lVar7 + -8);
              if (in_R8 <= lVar11) goto LAB_00101c49;
              PListNode::new_real((double)*(int *)(lVar7 + 0x10 + lVar12));
              PListNode::push_subnode(pOVar10,(String *)&local_220);
              Ref<PListNode>::unref((Ref<PListNode> *)&local_220);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
            }
            Ref<PListNode>::unref((Ref<PListNode> *)&local_228);
            lVar7 = *(long *)(param_1 + 0x18);
            goto LAB_00101b00;
          }
        }
LAB_00102156:
        in_R8 = 0;
LAB_00101c49:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,in_R8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      PListNode::new_bool(bVar9);
      PListNode::push_subnode(pRVar4,(String *)&local_218);
      Ref<PListNode>::unref((Ref<PListNode> *)&local_218);
      lVar7 = *(long *)(param_1 + 0x18);
    }
LAB_00101b00:
    lVar11 = lVar11 + 1;
    if (lVar7 == 0) {
LAB_00102099:
      PList::save_text();
      if ((local_238 == 0) || (*(uint *)(local_238 + -8) < 2)) {
        uVar8 = 0;
        _err_print_error("save_to_file","editor/export/codesign.cpp",0x1ad,
                         "Condition \"text.is_empty()\" is true. Returning: false",
                         "CodeSign/CodeResources: Generating resources PList failed.",0,0,in_R8);
      }
      else {
        FileAccess::open((String *)&local_230,(int)in_RSI,(Error *)0x2);
        if (local_230 == (Object *)0x0) {
          local_220 = (Ref *)0x0;
          if (*(long *)in_RSI != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_220,in_RSI);
          }
          local_228 = (Object *)0x0;
          String::parse_latin1
                    ((String *)&local_228,"CodeSign/CodeResources: Can\'t open file: \"%s\".");
          vformat<String>((String *)&local_218,(Ref<PListNode> *)&local_228,(StrRange *)&local_220);
          _err_print_error("save_to_file","editor/export/codesign.cpp",0x1b0,
                           "Condition \"fa.is_null()\" is true. Returning: false",
                           (String *)&local_218,0,0,extraout_RDX);
          uVar8 = 0;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
        }
        else {
          String::utf8();
          if (local_218 == (Object *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)*(undefined8 *)(local_218 + -8) + -1 +
                    (uint)((int)*(undefined8 *)(local_218 + -8) == 0);
          }
          (**(code **)(*(long *)local_230 + 0x2d0))(local_230,local_218,(long)iVar6);
          uVar8 = 1;
          CowData<char>::_unref((CowData<char> *)&local_218);
        }
        if (((local_230 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar10 = local_230, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_230), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
      Ref<PListNode>::unref((Ref<PListNode> *)&local_240);
      Ref<PListNode>::unref((Ref<PListNode> *)&local_248);
      Ref<PListNode>::unref((Ref<PListNode> *)&local_250);
      Ref<PListNode>::unref((Ref<PListNode> *)&local_258);
      PList::~PList(local_1e8);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar8;
    }
  } while( true );
LAB_00101610:
  lVar11 = lVar11 + 1;
  (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
  Memory::free_static(pOVar10,false);
  lVar7 = *(long *)(param_1 + 0x28);
  goto joined_r0x001013dd;
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



/* CodeSignRequirements::CodeSignRequirements() */

void __thiscall CodeSignRequirements::CodeSignRequirements(CodeSignRequirements *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Vector<unsigned_char> *pVVar6;
  long in_FS_OFFSET;
  long local_40;
  undefined4 local_34;
  long local_30;
  
  pVVar6 = (Vector<unsigned_char> *)(this + 0x180);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0011d5a0;
  *(undefined8 *)(this + 0x188) = 0;
  local_34 = 0x10cdefa;
  local_40 = 0;
  iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_40,4);
  lVar4 = local_40;
  if (iVar2 == 0) {
    lVar3 = 0;
    do {
      if (lVar4 == 0) {
        lVar5 = 0;
LAB_0010274b:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar3) goto LAB_0010274b;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_40);
        *(undefined1 *)(local_40 + lVar3) = *(undefined1 *)((long)&local_34 + lVar3);
        lVar4 = local_40;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  Vector<unsigned_char>::append_array(pVVar6);
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_40 + -0x10),false);
    }
  }
  local_34 = 0xc000000;
  local_40 = 0;
  iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_40,4);
  lVar4 = local_40;
  if (iVar2 == 0) {
    lVar3 = 0;
    do {
      if (lVar4 == 0) {
        lVar5 = 0;
LAB_00102793:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar3) goto LAB_00102793;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_40);
        *(undefined1 *)(local_40 + lVar3) = *(undefined1 *)((long)&local_34 + lVar3);
        lVar4 = local_40;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  Vector<unsigned_char>::append_array(pVVar6);
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_40 + -0x10),false);
    }
  }
  local_34 = 0;
  local_40 = 0;
  iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_40,4);
  lVar4 = local_40;
  if (iVar2 == 0) {
    lVar3 = 0;
    do {
      if (lVar4 == 0) {
        lVar5 = 0;
LAB_00102703:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar3) goto LAB_00102703;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_40);
        *(undefined1 *)(local_40 + lVar3) = *(undefined1 *)((long)&local_34 + lVar3);
        lVar4 = local_40;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  Vector<unsigned_char>::append_array(pVVar6);
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_40 + -0x10),false);
        return;
      }
      goto LAB_00102835;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102835:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignEntitlementsText::CodeSignEntitlementsText() */

void __thiscall CodeSignEntitlementsText::CodeSignEntitlementsText(CodeSignEntitlementsText *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_40;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0011d728;
  *(undefined8 *)(this + 0x188) = 0;
  local_34 = 0x7171defa;
  local_40 = 0;
  iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_40,4);
  lVar4 = local_40;
  if (iVar2 == 0) {
    lVar3 = 0;
    do {
      if (lVar4 == 0) {
        lVar5 = 0;
LAB_001029bb:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar3) goto LAB_001029bb;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_40);
        *(undefined1 *)(local_40 + lVar3) = *(undefined1 *)((long)&local_34 + lVar3);
        lVar4 = local_40;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  Vector<unsigned_char>::append_array((Vector<unsigned_char> *)(this + 0x180));
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_40 + -0x10),false);
    }
  }
  local_34 = 0x8000000;
  local_40 = 0;
  iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_40,4);
  lVar4 = local_40;
  if (iVar2 == 0) {
    lVar3 = 0;
    do {
      if (lVar4 == 0) {
        lVar5 = 0;
LAB_00102a03:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar3) goto LAB_00102a03;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_40);
        *(undefined1 *)(local_40 + lVar3) = *(undefined1 *)((long)&local_34 + lVar3);
        lVar4 = local_40;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  Vector<unsigned_char>::append_array((Vector<unsigned_char> *)(this + 0x180));
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_40 + -0x10),false);
        return;
      }
      goto LAB_00102a8d;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102a8d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignEntitlementsBinary::CodeSignEntitlementsBinary() */

void __thiscall
CodeSignEntitlementsBinary::CodeSignEntitlementsBinary(CodeSignEntitlementsBinary *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_40;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0011d8b0;
  *(undefined8 *)(this + 0x188) = 0;
  local_34 = 0x7271defa;
  local_40 = 0;
  iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_40,4);
  lVar4 = local_40;
  if (iVar2 == 0) {
    lVar3 = 0;
    do {
      if (lVar4 == 0) {
        lVar5 = 0;
LAB_00102c1b:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar3) goto LAB_00102c1b;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_40);
        *(undefined1 *)(local_40 + lVar3) = *(undefined1 *)((long)&local_34 + lVar3);
        lVar4 = local_40;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  Vector<unsigned_char>::append_array((Vector<unsigned_char> *)(this + 0x180));
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_40 + -0x10),false);
    }
  }
  local_34 = 0x8000000;
  local_40 = 0;
  iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_40,4);
  lVar4 = local_40;
  if (iVar2 == 0) {
    lVar3 = 0;
    do {
      if (lVar4 == 0) {
        lVar5 = 0;
LAB_00102c63:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar3) goto LAB_00102c63;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_40);
        *(undefined1 *)(local_40 + lVar3) = *(undefined1 *)((long)&local_34 + lVar3);
        lVar4 = local_40;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  Vector<unsigned_char>::append_array((Vector<unsigned_char> *)(this + 0x180));
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_40 + -0x10),false);
        return;
      }
      goto LAB_00102ced;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102ced:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignCodeDirectory::CodeSignCodeDirectory() */

void __thiscall CodeSignCodeDirectory::CodeSignCodeDirectory(CodeSignCodeDirectory *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_40;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0011da38;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  local_34 = 0x20cdefa;
  local_40 = 0;
  iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_40,4);
  lVar4 = local_40;
  if (iVar2 == 0) {
    lVar3 = 0;
    do {
      if (lVar4 == 0) {
        lVar5 = 0;
LAB_00102e7b:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar3) goto LAB_00102e7b;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_40);
        *(undefined1 *)(local_40 + lVar3) = *(undefined1 *)((long)&local_34 + lVar3);
        lVar4 = local_40;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  Vector<unsigned_char>::append_array((Vector<unsigned_char> *)(this + 0x180));
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_40 + -0x10),false);
    }
  }
  local_34 = 0;
  local_40 = 0;
  iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_40,4);
  lVar4 = local_40;
  if (iVar2 == 0) {
    lVar3 = 0;
    do {
      if (lVar4 == 0) {
        lVar5 = 0;
LAB_00102ec3:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar3) goto LAB_00102ec3;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_40);
        *(undefined1 *)(local_40 + lVar3) = *(undefined1 *)((long)&local_34 + lVar3);
        lVar4 = local_40;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  Vector<unsigned_char>::append_array((Vector<unsigned_char> *)(this + 0x180));
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_40 + -0x10),false);
        return;
      }
      goto LAB_00102f4d;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102f4d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignRequirements::get_hash_sha1() const */

void CodeSignRequirements::get_hash_sha1(void)

{
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  SHA1Context aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(in_RDI + 8),0x14);
  CryptoCore::SHA1Context::SHA1Context(aSStack_38);
  CryptoCore::SHA1Context::start();
  CryptoCore::SHA1Context::update((uchar *)aSStack_38,*(ulong *)(in_RSI + 0x188));
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(in_RDI + 8));
  CryptoCore::SHA1Context::finish((uchar *)aSStack_38);
  CryptoCore::SHA1Context::~SHA1Context(aSStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignRequirements::get_hash_sha256() const */

void CodeSignRequirements::get_hash_sha256(void)

{
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  SHA256Context aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(in_RDI + 8),0x20);
  CryptoCore::SHA256Context::SHA256Context(aSStack_38);
  CryptoCore::SHA256Context::start();
  CryptoCore::SHA256Context::update((uchar *)aSStack_38,*(ulong *)(in_RSI + 0x188));
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(in_RDI + 8));
  CryptoCore::SHA256Context::finish((uchar *)aSStack_38);
  CryptoCore::SHA256Context::~SHA256Context(aSStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignEntitlementsText::get_hash_sha1() const */

void CodeSignEntitlementsText::get_hash_sha1(void)

{
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  SHA1Context aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(in_RDI + 8),0x14);
  CryptoCore::SHA1Context::SHA1Context(aSStack_38);
  CryptoCore::SHA1Context::start();
  CryptoCore::SHA1Context::update((uchar *)aSStack_38,*(ulong *)(in_RSI + 0x188));
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(in_RDI + 8));
  CryptoCore::SHA1Context::finish((uchar *)aSStack_38);
  CryptoCore::SHA1Context::~SHA1Context(aSStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignEntitlementsText::get_hash_sha256() const */

void CodeSignEntitlementsText::get_hash_sha256(void)

{
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  SHA256Context aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(in_RDI + 8),0x20);
  CryptoCore::SHA256Context::SHA256Context(aSStack_38);
  CryptoCore::SHA256Context::start();
  CryptoCore::SHA256Context::update((uchar *)aSStack_38,*(ulong *)(in_RSI + 0x188));
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(in_RDI + 8));
  CryptoCore::SHA256Context::finish((uchar *)aSStack_38);
  CryptoCore::SHA256Context::~SHA256Context(aSStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignEntitlementsBinary::get_hash_sha1() const */

void CodeSignEntitlementsBinary::get_hash_sha1(void)

{
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  SHA1Context aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(in_RDI + 8),0x14);
  CryptoCore::SHA1Context::SHA1Context(aSStack_38);
  CryptoCore::SHA1Context::start();
  CryptoCore::SHA1Context::update((uchar *)aSStack_38,*(ulong *)(in_RSI + 0x188));
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(in_RDI + 8));
  CryptoCore::SHA1Context::finish((uchar *)aSStack_38);
  CryptoCore::SHA1Context::~SHA1Context(aSStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignEntitlementsBinary::get_hash_sha256() const */

void CodeSignEntitlementsBinary::get_hash_sha256(void)

{
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  SHA256Context aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(in_RDI + 8),0x20);
  CryptoCore::SHA256Context::SHA256Context(aSStack_38);
  CryptoCore::SHA256Context::start();
  CryptoCore::SHA256Context::update((uchar *)aSStack_38,*(ulong *)(in_RSI + 0x188));
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(in_RDI + 8));
  CryptoCore::SHA256Context::finish((uchar *)aSStack_38);
  CryptoCore::SHA256Context::~SHA256Context(aSStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignCodeDirectory::get_hash_sha1() const */

void CodeSignCodeDirectory::get_hash_sha1(void)

{
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  SHA1Context aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(in_RDI + 8),0x14);
  CryptoCore::SHA1Context::SHA1Context(aSStack_38);
  CryptoCore::SHA1Context::start();
  CryptoCore::SHA1Context::update((uchar *)aSStack_38,*(ulong *)(in_RSI + 0x188));
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(in_RDI + 8));
  CryptoCore::SHA1Context::finish((uchar *)aSStack_38);
  CryptoCore::SHA1Context::~SHA1Context(aSStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignCodeDirectory::get_hash_sha256() const */

void CodeSignCodeDirectory::get_hash_sha256(void)

{
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  SHA256Context aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(in_RDI + 8),0x20);
  CryptoCore::SHA256Context::SHA256Context(aSStack_38);
  CryptoCore::SHA256Context::start();
  CryptoCore::SHA256Context::update((uchar *)aSStack_38,*(ulong *)(in_RSI + 0x188));
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(in_RDI + 8));
  CryptoCore::SHA256Context::finish((uchar *)aSStack_38);
  CryptoCore::SHA256Context::~SHA256Context(aSStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignSignature::get_hash_sha1() const */

void CodeSignSignature::get_hash_sha1(void)

{
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  SHA1Context aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(in_RDI + 8),0x14);
  CryptoCore::SHA1Context::SHA1Context(aSStack_38);
  CryptoCore::SHA1Context::start();
  CryptoCore::SHA1Context::update((uchar *)aSStack_38,*(ulong *)(in_RSI + 0x188));
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(in_RDI + 8));
  CryptoCore::SHA1Context::finish((uchar *)aSStack_38);
  CryptoCore::SHA1Context::~SHA1Context(aSStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignSignature::get_hash_sha256() const */

void CodeSignSignature::get_hash_sha256(void)

{
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  SHA256Context aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(in_RDI + 8),0x20);
  CryptoCore::SHA256Context::SHA256Context(aSStack_38);
  CryptoCore::SHA256Context::start();
  CryptoCore::SHA256Context::update((uchar *)aSStack_38,*(ulong *)(in_RSI + 0x188));
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(in_RDI + 8));
  CryptoCore::SHA256Context::finish((uchar *)aSStack_38);
  CryptoCore::SHA256Context::~SHA256Context(aSStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSign::file_hash_sha1(String const&) */

CodeSign * __thiscall CodeSign::file_hash_sha1(CodeSign *this,String *param_1)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  Object *local_1070;
  long local_1068;
  long local_1060 [2];
  long local_1050;
  char *local_1048;
  undefined8 local_1040;
  undefined1 local_1038 [4104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_1050 = 0;
  FileAccess::open((String *)&local_1070,(int)param_1,(Error *)0x1);
  if (local_1070 == (Object *)0x0) {
    local_1060[0] = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_00103896;
        LOCK();
        lVar5 = *plVar1;
        bVar7 = lVar6 == lVar5;
        if (bVar7) {
          *plVar1 = lVar6 + 1;
          lVar5 = lVar6;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar5 != -1) {
        local_1060[0] = *(long *)param_1;
      }
    }
LAB_00103896:
    local_1068 = 0;
    local_1040 = 0x20;
    local_1048 = "CodeSign: Can\'t open file: \"%s\".";
    String::parse_latin1((StrRange *)&local_1068);
    vformat<String>(&local_1048,(StrRange *)&local_1068,local_1060);
    _err_print_error("file_hash_sha1","editor/export/codesign.cpp",0x47b,
                     "Condition \"f.is_null()\" is true. Returning: PackedByteArray()",&local_1048,0
                     ,0);
    pcVar2 = local_1048;
    if (local_1048 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_1048 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1048 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar6 = local_1068;
    if (local_1068 != 0) {
      LOCK();
      plVar1 = (long *)(local_1068 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1068 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1060[0];
    if (local_1060[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_1060[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1060[0] = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1050;
    *(undefined8 *)(this + 8) = 0;
    if ((local_1070 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
    goto LAB_00103812;
  }
  else {
    CryptoCore::SHA1Context::SHA1Context((SHA1Context *)&local_1048);
    CryptoCore::SHA1Context::start();
    do {
      uVar4 = (**(code **)(*(long *)local_1070 + 0x220))(local_1070,local_1038,0x1000);
      if (uVar4 == 0) break;
      CryptoCore::SHA1Context::update((uchar *)&local_1048,(ulong)local_1038);
    } while (0xfff < uVar4);
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_1050,0x14);
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_1050);
    lVar6 = local_1050;
    CryptoCore::SHA1Context::finish((uchar *)&local_1048);
    *(long *)(this + 8) = lVar6;
    local_1050 = 0;
    CryptoCore::SHA1Context::~SHA1Context((SHA1Context *)&local_1048);
    if ((local_1070 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0'))
    goto LAB_001037c8;
    lVar6 = 0;
LAB_00103812:
    cVar3 = predelete_handler(local_1070);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)local_1070 + 0x140))(local_1070);
      Memory::free_static(local_1070,false);
    }
  }
  if (lVar6 != 0) {
    LOCK();
    plVar1 = (long *)(lVar6 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_1050 + -0x10),false);
    }
  }
LAB_001037c8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* CodeSign::file_hash_sha256(String const&) */

CodeSign * __thiscall CodeSign::file_hash_sha256(CodeSign *this,String *param_1)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  Object *local_1070;
  long local_1068;
  long local_1060 [2];
  long local_1050;
  char *local_1048;
  undefined8 local_1040;
  undefined1 local_1038 [4104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_1050 = 0;
  FileAccess::open((String *)&local_1070,(int)param_1,(Error *)0x1);
  if (local_1070 == (Object *)0x0) {
    local_1060[0] = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_00103b86;
        LOCK();
        lVar5 = *plVar1;
        bVar7 = lVar6 == lVar5;
        if (bVar7) {
          *plVar1 = lVar6 + 1;
          lVar5 = lVar6;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar5 != -1) {
        local_1060[0] = *(long *)param_1;
      }
    }
LAB_00103b86:
    local_1068 = 0;
    local_1040 = 0x20;
    local_1048 = "CodeSign: Can\'t open file: \"%s\".";
    String::parse_latin1((StrRange *)&local_1068);
    vformat<String>(&local_1048,(StrRange *)&local_1068,local_1060);
    _err_print_error("file_hash_sha256","editor/export/codesign.cpp",0x493,
                     "Condition \"f.is_null()\" is true. Returning: PackedByteArray()",&local_1048,0
                     ,0);
    pcVar2 = local_1048;
    if (local_1048 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_1048 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1048 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar6 = local_1068;
    if (local_1068 != 0) {
      LOCK();
      plVar1 = (long *)(local_1068 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1068 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1060[0];
    if (local_1060[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_1060[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1060[0] = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_1050;
    *(undefined8 *)(this + 8) = 0;
    if ((local_1070 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
    goto LAB_00103b02;
  }
  else {
    CryptoCore::SHA256Context::SHA256Context((SHA256Context *)&local_1048);
    CryptoCore::SHA256Context::start();
    do {
      uVar4 = (**(code **)(*(long *)local_1070 + 0x220))(local_1070,local_1038,0x1000);
      if (uVar4 == 0) break;
      CryptoCore::SHA256Context::update((uchar *)&local_1048,(ulong)local_1038);
    } while (0xfff < uVar4);
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_1050,0x20);
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_1050);
    lVar6 = local_1050;
    CryptoCore::SHA256Context::finish((uchar *)&local_1048);
    *(long *)(this + 8) = lVar6;
    local_1050 = 0;
    CryptoCore::SHA256Context::~SHA256Context((SHA256Context *)&local_1048);
    if ((local_1070 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0'))
    goto LAB_00103ab8;
    lVar6 = 0;
LAB_00103b02:
    cVar3 = predelete_handler(local_1070);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)local_1070 + 0x140))(local_1070);
      Memory::free_static(local_1070,false);
    }
  }
  if (lVar6 != 0) {
    LOCK();
    plVar1 = (long *)(lVar6 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_1050 + -0x10),false);
    }
  }
LAB_00103ab8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* Vector<unsigned char>::push_back(unsigned char) [clone .isra.0] */

void __thiscall Vector<unsigned_char>::push_back(Vector<unsigned_char> *this,uchar param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 8));
        *(uchar *)(*(long *)(this + 8) + -1 + lVar3) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* CodeSignCodeDirectory::CodeSignCodeDirectory(unsigned char, unsigned char, bool, CharString
   const&, CharString const&, unsigned int, unsigned long, unsigned long) */

void __thiscall
CodeSignCodeDirectory::CodeSignCodeDirectory
          (CodeSignCodeDirectory *this,uchar param_1,uchar param_2,bool param_3,CharString *param_4,
          CharString *param_5,uint param_6,ulong param_7,ulong param_8)

{
  long *plVar1;
  CowData<unsigned_char> *this_00;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  size_t __n;
  long in_FS_OFFSET;
  long local_50;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0011da38;
  *(undefined8 *)(this + 0x188) = 0;
  uVar2 = ~(uint)(-1L << ((byte)param_6 & 0x3f)) & (uint)param_8;
  iVar5 = (int)(param_8 >> ((byte)param_6 & 0x3f));
  *(int *)(this + 400) = iVar5;
  *(uint *)(this + 0x194) = uVar2;
  *(undefined4 *)(this + 0x19c) = 7;
  iVar5 = (uint)(0 < (int)uVar2) + iVar5;
  *(int *)(this + 0x198) = iVar5;
  iVar5 = (iVar5 + 7) * (uint)param_1;
  if (*(long *)param_4 != 0) {
    iVar5 = iVar5 + *(int *)(*(long *)param_4 + -8);
  }
  if (*(long *)param_5 != 0) {
    iVar5 = iVar5 + *(int *)(*(long *)param_5 + -8);
  }
  local_44 = 0x20cdefa;
  local_50 = 0;
  iVar3 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_50,4);
  lVar7 = local_50;
  if (iVar3 == 0) {
    lVar8 = 0;
    do {
      if (lVar7 == 0) {
        lVar6 = 0;
LAB_001040e3:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar6,"p_index","size()","",false,
                   false);
      }
      else {
        lVar6 = *(long *)(lVar7 + -8);
        if (lVar6 <= lVar8) goto LAB_001040e3;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_50);
        *(undefined1 *)(local_50 + lVar8) = *(undefined1 *)((long)&local_44 + lVar8);
        lVar7 = local_50;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 4);
  }
  Vector<unsigned_char>::append_array((Vector<unsigned_char> *)(this + 0x180));
  if (lVar7 != 0) {
    LOCK();
    plVar1 = (long *)(lVar7 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_50 + -0x10),false);
    }
  }
  iVar3 = 0x18;
  do {
    iVar9 = iVar3 + -8;
    Vector<unsigned_char>::push_back
              ((Vector<unsigned_char> *)(this + 0x180),(uchar)(iVar5 + 0x60 >> ((byte)iVar3 & 0x1f))
              );
    iVar3 = iVar9;
  } while (iVar9 != -8);
  this_00 = (CowData<unsigned_char> *)(this + 0x188);
  CowData<unsigned_char>::resize<false>(this_00,(long)(iVar5 + 0x60));
  CowData<unsigned_char>::_copy_on_write(this_00);
  memset((void *)(*(long *)(this + 0x188) + 8),0,(long)(iVar5 + 0x58));
  CowData<unsigned_char>::_copy_on_write(this_00);
  lVar7 = *(long *)(this + 0x188);
  *(undefined8 *)(lVar7 + 8) = _LC82;
  uVar2 = *(uint *)(this + 0x19c);
  *(uint *)(lVar7 + 0x18) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = *(uint *)(this + 0x198);
  *(uint *)(lVar7 + 0x1c) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (param_8 < 0xffffffff) {
    *(uint *)(lVar7 + 0x20) =
         (uint)param_8 >> 0x18 | ((uint)param_8 & 0xff0000) >> 8 | ((uint)param_8 & 0xff00) << 8 |
         (uint)param_8 << 0x18;
  }
  else {
    *(ulong *)(lVar7 + 0x38) =
         param_8 >> 0x38 | (param_8 & 0xff000000000000) >> 0x28 | (param_8 & 0xff0000000000) >> 0x18
         | (param_8 & 0xff00000000) >> 8 | (param_8 & 0xff000000) << 8 |
         (param_8 & 0xff0000) << 0x18 | (param_8 & 0xff00) << 0x28 | param_8 << 0x38;
  }
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined4 *)(lVar7 + 0x58) = 0x30b00;
  *(uchar *)(lVar7 + 0x24) = param_1;
  *(undefined4 *)(lVar7 + 0x14) = 0x60000000;
  *(uchar *)(lVar7 + 0x25) = param_2;
  *(byte *)(lVar7 + 0x27) = (byte)param_6;
  *(ulong *)(lVar7 + 0x48) =
       param_7 >> 0x38 | (param_7 & 0xff000000000000) >> 0x28 | (param_7 & 0xff0000000000) >> 0x18 |
       (param_7 & 0xff00000000) >> 8 | (param_7 & 0xff000000) << 8 | (param_7 & 0xff0000) << 0x18 |
       (param_7 & 0xff00) << 0x28 | param_7 << 0x38;
  *(ulong *)(lVar7 + 0x50) = (ulong)param_3 << 0x38;
  if (*(long *)param_4 == 0) {
    __n = 0;
  }
  else {
    __n = (size_t)*(int *)(*(long *)param_4 + -8);
  }
  pvVar4 = (void *)CharString::get_data();
  CowData<unsigned_char>::_copy_on_write(this_00);
  memcpy((void *)(*(long *)(this + 0x188) + 0x60),pvVar4,__n);
  if (*(long *)param_4 == 0) {
    uVar2 = 0x60;
  }
  else {
    uVar2 = (int)*(undefined8 *)(*(long *)param_4 + -8) + 0x60;
  }
  if ((*(long *)param_5 == 0) || (iVar5 = (int)*(undefined8 *)(*(long *)param_5 + -8), iVar5 < 2)) {
    *(undefined4 *)(lVar7 + 0x30) = 0;
  }
  else {
    *(uint *)(lVar7 + 0x30) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    pvVar4 = (void *)CharString::get_data();
    CowData<unsigned_char>::_copy_on_write(this_00);
    memcpy((void *)((long)(int)uVar2 + *(long *)(this + 0x188)),pvVar4,(long)iVar5);
    if (*(long *)param_5 != 0) {
      uVar2 = uVar2 + *(int *)(*(long *)param_5 + -8);
    }
  }
  *(undefined4 *)(lVar7 + 0x2c) = 0;
  uVar2 = (uint)*(byte *)(lVar7 + 0x24) * *(int *)(this + 0x19c) + uVar2;
  *(uint *)(lVar7 + 0x10) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 * 0x1000000;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignSignature::CodeSignSignature() */

void __thiscall CodeSignSignature::CodeSignSignature(CodeSignSignature *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Vector<unsigned_char> *this_00;
  long in_FS_OFFSET;
  long local_40;
  undefined4 local_34;
  long local_30;
  
  this_00 = (Vector<unsigned_char> *)(this + 0x180);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011dbc0;
  local_34 = 0x10bdefa;
  local_40 = 0;
  iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_40,4);
  lVar4 = local_40;
  if (iVar2 == 0) {
    lVar3 = 0;
    do {
      if (lVar4 == 0) {
        lVar5 = 0;
LAB_001042e3:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar3) goto LAB_001042e3;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_40);
        *(undefined1 *)(local_40 + lVar3) = *(undefined1 *)((long)&local_34 + lVar3);
        lVar4 = local_40;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  Vector<unsigned_char>::append_array(this_00);
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_40 + -0x10),false);
    }
  }
  Vector<unsigned_char>::push_back(this_00,'\0');
  Vector<unsigned_char>::push_back(this_00,'\0');
  Vector<unsigned_char>::push_back(this_00,'\0');
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<unsigned_char>::push_back(this_00,'\b');
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignEntitlementsBinary::CodeSignEntitlementsBinary(String const&) */

void __thiscall
CodeSignEntitlementsBinary::CodeSignEntitlementsBinary
          (CodeSignEntitlementsBinary *this,String *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  Vector<unsigned_char> *this_00;
  long in_FS_OFFSET;
  bool bVar9;
  long local_200;
  long local_1f0;
  undefined **local_1e8 [52];
  Object *local_48;
  undefined4 local_34;
  long local_30;
  
  this_00 = (Vector<unsigned_char> *)(this + 0x180);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0011d8b0;
  *(undefined8 *)(this + 0x188) = 0;
  PList::PList((PList *)local_1e8,param_1);
  PList::save_asn1();
  local_34 = 0x7271defa;
  local_1f0 = 0;
  iVar3 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_1f0,4);
  lVar7 = local_1f0;
  if (iVar3 == 0) {
    lVar5 = 0;
    do {
      if (lVar7 == 0) {
        lVar8 = 0;
LAB_00104583:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar8,"p_index","size()","",false,
                   false);
      }
      else {
        lVar8 = *(long *)(lVar7 + -8);
        if (lVar8 <= lVar5) goto LAB_00104583;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_1f0);
        *(undefined1 *)(local_1f0 + lVar5) = *(undefined1 *)((long)&local_34 + lVar5);
        lVar7 = local_1f0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 4);
  }
  Vector<unsigned_char>::append_array(this_00);
  if (lVar7 != 0) {
    LOCK();
    plVar1 = (long *)(lVar7 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_1f0 + -0x10),false);
    }
  }
  if (local_200 == 0) {
    uVar6 = 8;
  }
  else {
    uVar6 = (int)*(undefined8 *)(local_200 + -8) + 8;
  }
  iVar3 = 0x18;
  do {
    iVar4 = iVar3 + -8;
    Vector<unsigned_char>::push_back(this_00,(uchar)(uVar6 >> ((byte)iVar3 & 0x1f)));
    iVar3 = iVar4;
  } while (iVar4 != -8);
  local_1f0 = 0;
  plVar1 = (long *)(local_200 + -0x10);
  if (local_200 == 0) {
    Vector<unsigned_char>::append_array(this_00);
  }
  else {
    do {
      lVar7 = *plVar1;
      if (lVar7 == 0) goto LAB_001044c4;
      LOCK();
      lVar5 = *plVar1;
      bVar9 = lVar7 == lVar5;
      if (bVar9) {
        *plVar1 = lVar7 + 1;
        lVar5 = lVar7;
      }
      UNLOCK();
    } while (!bVar9);
    if (lVar5 != -1) {
      local_1f0 = local_200;
    }
LAB_001044c4:
    lVar7 = local_1f0;
    Vector<unsigned_char>::append_array(this_00);
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_1f0 + -0x10),false);
      }
    }
  }
  if (local_200 != 0) {
    LOCK();
    plVar1 = (long *)(local_200 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_200 + -0x10),false);
    }
  }
  local_1e8[0] = &PTR__initialize_classv_0011d2e0;
  if (((local_48 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
    (**(code **)(*(long *)local_48 + 0x140))(local_48);
    Memory::free_static(local_48,false);
  }
  local_1e8[0] = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)local_1e8);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CodeSignEntitlementsText::CodeSignEntitlementsText(String const&) */

void __thiscall
CodeSignEntitlementsText::CodeSignEntitlementsText(CodeSignEntitlementsText *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  Vector<unsigned_char> *this_00;
  uchar uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  long local_50;
  long local_40;
  undefined4 local_34;
  long local_30;
  
  this_00 = (Vector<unsigned_char> *)(this + 0x180);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0011d728;
  *(undefined8 *)(this + 0x188) = 0;
  String::utf8();
  local_34 = 0x7171defa;
  local_40 = 0;
  iVar3 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_40,4);
  lVar5 = local_40;
  if (iVar3 == 0) {
    lVar4 = 0;
    do {
      if (lVar5 == 0) {
        lVar8 = 0;
LAB_0010483b:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar8,"p_index","size()","",false,
                   false);
      }
      else {
        lVar8 = *(long *)(lVar5 + -8);
        if (lVar8 <= lVar4) goto LAB_0010483b;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_40);
        *(undefined1 *)(local_40 + lVar4) = *(undefined1 *)((long)&local_34 + lVar4);
        lVar5 = local_40;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
  }
  Vector<unsigned_char>::append_array(this_00);
  if (lVar5 != 0) {
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_40 + -0x10),false);
    }
  }
  iVar3 = 0x18;
  do {
    if (local_50 == 0) {
      iVar7 = 8;
    }
    else {
      iVar9 = (int)*(undefined8 *)(local_50 + -8);
      iVar7 = iVar9 + 7;
      if (iVar9 == 0) {
        iVar7 = 8;
      }
    }
    iVar9 = iVar3 + -8;
    Vector<unsigned_char>::push_back(this_00,(uchar)(iVar7 >> ((byte)iVar3 & 0x1f)));
    iVar3 = iVar9;
  } while (iVar9 != -8);
  lVar5 = 0;
  do {
    if (local_50 == 0) {
LAB_00104798:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar4 = *(long *)(local_50 + -8);
    if (((int)lVar4 == 0) || ((int)lVar4 + -1 <= (int)lVar5)) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_50 + -0x10),false);
      }
      goto LAB_00104798;
    }
    if (lVar4 == lVar5) {
      uVar6 = '\0';
    }
    else {
      if (lVar4 <= lVar5) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar4,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar6 = *(uchar *)(local_50 + lVar5);
    }
    lVar5 = lVar5 + 1;
    Vector<unsigned_char>::push_back(this_00,uVar6);
  } while( true );
}



/* WARNING: Type propagation algorithm not settling */
/* CodeSignRequirements::parse_requirements() const */

Vector<String> * CodeSignRequirements::parse_requirements(void)

{
  uint uVar1;
  CowData<char32_t> *this;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  CowData<char32_t> *pCVar14;
  long lVar15;
  uint *puVar16;
  char *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  uint uVar22;
  uint uVar23;
  CowData<char32_t> *this_00;
  uint uVar24;
  long *plVar25;
  long in_RSI;
  Vector<String> *in_RDI;
  String *pSVar26;
  undefined8 in_R11;
  uint uVar27;
  undefined1 (*pauVar28) [16];
  char *pcVar29;
  long in_FS_OFFSET;
  bool bVar30;
  char *pcVar31;
  undefined8 local_c8;
  undefined1 (*local_c0) [16];
  long local_b8;
  ulong local_b0;
  long local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  void *local_80;
  tm local_78;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar12 = *(int **)(in_RSI + 0x188);
  *(undefined8 *)(in_RDI + 8) = 0;
  if ((piVar12 == (int *)0x0) || (*(long *)(piVar12 + -2) < 0xc)) {
    _err_print_error("parse_requirements","editor/export/codesign.cpp",0x278,
                     "Condition \"blob.size() < 12\" is true. Returning: list",
                     "CodeSign/Requirements: Blob is too small.",0,0);
  }
  else if (*piVar12 == 0x10cdefa) {
    uVar1 = piVar12[1];
    if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
        (uint)*(long *)(piVar12 + -2)) {
      uVar1 = piVar12[2];
      if (uVar1 != 0) {
        uVar24 = 0;
LAB_0010495c:
        local_c8 = 0;
        uVar22 = *(uint *)((long)piVar12 + (ulong)(uVar24 * 8) + 0xc);
        uVar23 = *(uint *)((long)piVar12 + (ulong)(uVar24 * 8) + 0x10);
        uVar21 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18
        ;
        uVar23 = uVar21 + 0xc;
        uVar13 = (ulong)uVar23;
        if ((piVar12 != (int *)0x0) && (uVar23 < (uint)piVar12[-2])) {
          switch(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18
                ) {
          default:
            _err_print_error("parse_requirements","editor/export/codesign.cpp",0x297,
                             "Method/function failed. Returning: list",
                             "CodeSign/Requirements: Invalid requirement type.",0,0);
            goto LAB_001049fa;
          case 1:
            String::operator+=((String *)&local_c8,"host => ");
            break;
          case 2:
            String::operator+=((String *)&local_c8,"guest => ");
            break;
          case 3:
            String::operator+=((String *)&local_c8,"designated => ");
            break;
          case 4:
            String::operator+=((String *)&local_c8,"library => ");
            break;
          case 5:
            String::operator+=((String *)&local_c8,"plugin => ");
          }
          uVar18 = (ulong)uVar21;
          lVar15 = *(long *)(in_RSI + 0x188);
          uVar22 = *(uint *)(lVar15 + 4 + uVar18);
          if (*(int *)(lVar15 + uVar18) == 0xcdefa) {
            if (*(int *)(lVar15 + 8 + uVar18) == 0x1000000) {
              local_c0 = (undefined1 (*) [16])0x0;
              uVar21 = (uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                       uVar22 << 0x18) + uVar21;
              if (uVar23 < uVar21) {
                do {
                  iVar11 = (int)uVar13;
                  uVar22 = iVar11 + 4;
                  uVar18 = (ulong)uVar22;
                  uVar23 = *(uint *)(lVar15 + uVar13);
                  local_b8 = 0;
                  puVar16 = &switchD_00104ad7::switchdataD_0011c0a8;
                  uVar13 = uVar18;
                  switch(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                         uVar23 << 0x18) {
                  case 0:
                    local_78.tm_hour = 5;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = "false";
                    String::parse_latin1((StrRange *)&local_b8);
                    break;
                  case 1:
                    local_78.tm_hour = 4;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = &_LC105;
                    String::parse_latin1((StrRange *)&local_b8);
                    break;
                  case 2:
                    local_78.tm_hour = 0xb;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = "identifier ";
                    String::parse_latin1((StrRange *)&local_b8);
                    if (uVar22 < uVar21) {
                      uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar18);
                      uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                              uVar23 << 0x18;
                      if (uVar22 + uVar8 <= uVar21) {
                        local_a0 = (void *)0x0;
                        CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                        lVar15 = *(long *)(in_RSI + 0x188);
                        CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                        iVar11 = uVar8 + 4;
                        memcpy(local_a0,(void *)(lVar15 + 4 + uVar18),(ulong)uVar8);
                        uVar23 = uVar23 >> 0x18 & 3;
                        if (uVar23 != 0) {
                          iVar11 = (iVar11 - uVar23) + 4;
                        }
                        local_88 = (char *)0x0;
                        local_78.tm_hour = 1;
                        local_78.tm_mday = 0;
                        local_78._0_8_ = &_LC111;
                        String::parse_latin1((StrRange *)&local_88);
                        iVar10 = CharString::get_data();
                        String::utf8((char *)&local_98,iVar10);
                        operator+((char *)&local_90,(String *)&_LC111);
                        String::operator+((String *)&local_78,(String *)&local_90);
                        String::operator+=((String *)&local_b8,(String *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char>::_unref((CowData<char> *)&local_a0);
                        uVar13 = (ulong)(iVar11 + uVar22);
                        break;
                      }
                      uVar19 = 0x212;
                      pcVar31 = "Condition \"r_pos + key_size > p_rq_size\" is true.";
                    }
                    else {
                      uVar19 = 0x210;
                      pcVar31 = "Condition \"r_pos >= p_rq_size\" is true.";
                    }
                    in_R11 = 0;
                    _err_print_error("_parse_value","editor/export/codesign.cpp",uVar19,pcVar31);
                    break;
                  case 3:
                    local_78.tm_hour = 0xc;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = "anchor apple";
                    String::parse_latin1((StrRange *)&local_b8);
                    break;
                  case 4:
                    if (uVar22 < uVar21) {
                      String::operator+=((String *)&local_b8,"certificate ");
                      iVar10 = *(int *)(*(long *)(in_RSI + 0x188) + uVar18);
                      if (iVar10 == 0) {
                        String::operator+=((String *)&local_b8,"leaf");
                      }
                      else if (iVar10 == -1) {
                        String::operator+=((String *)&local_b8,"root");
                      }
                      else {
                        itos((long)&local_78);
                        String::operator+=((String *)&local_b8,(String *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                      }
                      uVar23 = iVar11 + 8;
                      uVar18 = (ulong)uVar23;
                      String::operator+=((String *)&local_b8," ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + (ulong)uVar23);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar8 + uVar23) {
                          _err_print_error("_parse_hash_string","editor/export/codesign.cpp",0x205,
                                           "Condition \"r_pos + tag_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0);
                          uVar13 = uVar18;
                        }
                        else {
                          local_80 = (void *)0x0;
                          CowData<unsigned_char>::resize<false>
                                    ((CowData<unsigned_char> *)&local_80,(ulong)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<unsigned_char>::_copy_on_write
                                    ((CowData<unsigned_char> *)&local_80);
                          pvVar6 = local_80;
                          memcpy(local_80,(void *)(lVar15 + 4 + (ulong)uVar23),(ulong)uVar8);
                          local_78._0_8_ = &_LC111;
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          String::parse_latin1((StrRange *)&local_90);
                          String::hex_encode_buffer((uchar *)&local_a0,(int)pvVar6);
                          operator+((char *)&local_98,(String *)&_LC120);
                          String::operator+((String *)&local_78,(String *)&local_98);
                          String::operator+=((String *)&local_b8,(String *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_80);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                        break;
                      }
                    }
                    else {
                      _err_print_error("_parse_certificate_slot","editor/export/codesign.cpp",0x1c7,
                                       "Condition \"r_pos >= p_rq_size\" is true.",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
                      String::operator+=((String *)&local_b8," ");
                    }
                    _err_print_error("_parse_hash_string","editor/export/codesign.cpp",0x203,
                                     "Condition \"r_pos >= p_rq_size\" is true.",
                                     "CodeSign/Requirements: Out of bounds.",0,0);
                    uVar13 = uVar18;
                    break;
                  case 5:
                    local_78.tm_hour = 4;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = &_LC121;
                    String::parse_latin1((StrRange *)&local_b8);
                    if (uVar22 < uVar21) {
                      uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar18);
                      uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                              uVar23 << 0x18;
                      if (uVar21 < uVar22 + uVar8) {
                        _err_print_error("_parse_key","editor/export/codesign.cpp",0x1d9,
                                         "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                        String::operator+=((String *)&local_b8," = ");
                      }
                      else {
                        local_a0 = (void *)0x0;
                        CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                        lVar15 = *(long *)(in_RSI + 0x188);
                        CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                        iVar11 = uVar8 + 4;
                        memcpy(local_a0,(void *)(lVar15 + 4 + uVar18),(ulong)uVar8);
                        uVar23 = uVar23 >> 0x18 & 3;
                        if (uVar23 != 0) {
                          iVar11 = (iVar11 - uVar23) + 4;
                        }
                        uVar18 = (ulong)(iVar11 + uVar22);
                        local_88 = (char *)0x0;
                        local_78.tm_hour = 1;
                        local_78.tm_mday = 0;
                        local_78._0_8_ = &_LC124;
                        String::parse_latin1((StrRange *)&local_88);
                        iVar10 = CharString::get_data();
                        String::utf8((char *)&local_98,iVar10);
                        operator+((char *)&local_90,(String *)&_LC125);
                        String::operator+((String *)&local_78,(String *)&local_90);
                        String::operator+=((String *)&local_b8,(String *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char>::_unref((CowData<char> *)&local_a0);
                        String::operator+=((String *)&local_b8," = ");
                        if (uVar21 <= iVar11 + uVar22) goto LAB_00109ad2;
                      }
                      uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar18);
                      uVar22 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                               uVar23 << 0x18;
                      if (uVar21 < uVar22 + (int)uVar18) {
                        in_R11 = 0;
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                         "Condition \"r_pos + key_size > p_rq_size\" is true.");
                        uVar13 = uVar18;
                      }
                      else {
                        local_a0 = (void *)0x0;
                        CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar22);
                        lVar15 = *(long *)(in_RSI + 0x188);
                        CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                        memcpy(local_a0,(void *)(lVar15 + 4 + uVar18),(ulong)uVar22);
                        iVar11 = uVar22 + 4;
                        uVar23 = uVar23 >> 0x18 & 3;
                        if (uVar23 != 0) {
                          iVar11 = (iVar11 - uVar23) + 4;
                        }
                        local_78._0_8_ = &_LC111;
                        local_88 = (char *)0x0;
                        local_78.tm_hour = 1;
                        local_78.tm_mday = 0;
                        String::parse_latin1((StrRange *)&local_88);
                        iVar10 = CharString::get_data();
                        String::utf8((char *)&local_98,iVar10);
                        operator+((char *)&local_90,(String *)&_LC111);
                        String::operator+((String *)&local_78,(String *)&local_90);
                        String::operator+=((String *)&local_b8,(String *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char>::_unref((CowData<char> *)&local_a0);
                        uVar13 = (ulong)(uint)((int)uVar18 + iVar11);
                      }
                    }
                    else {
                      _err_print_error("_parse_key","editor/export/codesign.cpp",0x1d7,
                                       "Condition \"r_pos >= p_rq_size\" is true.",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
                      String::operator+=((String *)&local_b8," = ");
LAB_00109ad2:
                      _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                       "Condition \"r_pos >= p_rq_size\" is true.",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
                      uVar13 = uVar18;
                    }
                    break;
                  case 6:
                    local_78.tm_hour = 3;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = &_LC126;
                    String::parse_latin1((StrRange *)&local_b8);
                    break;
                  case 7:
                    local_78.tm_hour = 2;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = &_LC127;
                    String::parse_latin1((StrRange *)&local_b8);
                    break;
                  case 8:
                    local_78.tm_hour = 7;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = "cdhash ";
                    String::parse_latin1((StrRange *)&local_b8);
                    if (uVar22 < uVar21) {
                      uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar18);
                      uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                              uVar23 << 0x18;
                      if (uVar22 + uVar8 <= uVar21) {
                        local_80 = (void *)0x0;
                        CowData<unsigned_char>::resize<false>
                                  ((CowData<unsigned_char> *)&local_80,(ulong)uVar8);
                        lVar15 = *(long *)(in_RSI + 0x188);
                        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
                        pvVar6 = local_80;
                        memcpy(local_80,(void *)(lVar15 + 4 + uVar18),(ulong)uVar8);
                        local_78._0_8_ = &_LC111;
                        local_90 = 0;
                        local_78.tm_hour = 1;
                        local_78.tm_mday = 0;
                        String::parse_latin1((StrRange *)&local_90);
                        String::hex_encode_buffer((uchar *)&local_a0,(int)pvVar6);
                        operator+((char *)&local_98,(String *)&_LC120);
                        String::operator+((String *)&local_78,(String *)&local_98);
                        String::operator+=((String *)&local_b8,(String *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        iVar11 = uVar8 + 4;
                        uVar23 = uVar23 >> 0x18 & 3;
                        if (uVar23 != 0) {
                          iVar11 = (iVar11 - uVar23) + 4;
                        }
                        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_80);
                        uVar13 = (ulong)(iVar11 + uVar22);
                        break;
                      }
                      uVar19 = 0x205;
                      pcVar31 = "Condition \"r_pos + tag_size > p_rq_size\" is true.";
                    }
                    else {
                      uVar19 = 0x203;
                      pcVar31 = "Condition \"r_pos >= p_rq_size\" is true.";
                    }
                    _err_print_error("_parse_hash_string","editor/export/codesign.cpp",uVar19,
                                     pcVar31,"CodeSign/Requirements: Out of bounds.",0,0);
                    break;
                  case 9:
                    local_78.tm_hour = 1;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = &_LC129;
                    String::parse_latin1((StrRange *)&local_b8);
                    break;
                  case 10:
                    local_78.tm_hour = 4;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = &_LC121;
                    String::parse_latin1((StrRange *)&local_b8);
                    if (uVar21 <= uVar22) {
                      _err_print_error("_parse_key","editor/export/codesign.cpp",0x1d7,
                                       "Condition \"r_pos >= p_rq_size\" is true.",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
                      String::operator+=((String *)&local_b8," ");
LAB_00109b8f:
                      _err_print_error("_parse_match","editor/export/codesign.cpp",0x22c,
                                       "Condition \"r_pos >= p_rq_size\" is true. Returning: false",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
switchD_001052f9_default:
                      _err_print_error("parse_requirements","editor/export/codesign.cpp",0x2d1,
                                       "Condition \"!_parse_match(pos, token, rq_offset + rq_size)\" is true. Returning: list"
                                       ,"CodeSign/Requirements: Unsupported match suffix.",0,0);
                      goto LAB_001049e7;
                    }
                    uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar18);
                    uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                            uVar23 << 0x18;
                    if (uVar21 < uVar22 + uVar8) {
                      _err_print_error("_parse_key","editor/export/codesign.cpp",0x1d9,
                                       "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
                      String::operator+=((String *)&local_b8," ");
                    }
                    else {
                      local_a0 = (void *)0x0;
                      CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                      lVar15 = *(long *)(in_RSI + 0x188);
                      CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                      memcpy(local_a0,(void *)(lVar15 + 4 + uVar18),(ulong)uVar8);
                      iVar11 = uVar8 + 4;
                      uVar23 = uVar23 >> 0x18 & 3;
                      if (uVar23 != 0) {
                        iVar11 = (iVar11 - uVar23) + 4;
                      }
                      uVar22 = uVar22 + iVar11;
                      local_88 = (char *)0x0;
                      local_78.tm_hour = 1;
                      local_78.tm_mday = 0;
                      local_78._0_8_ = &_LC124;
                      String::parse_latin1((StrRange *)&local_88);
                      iVar11 = CharString::get_data();
                      String::utf8((char *)&local_98,iVar11);
                      operator+((char *)&local_90,(String *)&_LC125);
                      String::operator+((String *)&local_78,(String *)&local_90);
                      String::operator+=((String *)&local_b8,(String *)&local_78);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      CowData<char>::_unref((CowData<char> *)&local_a0);
                      String::operator+=((String *)&local_b8," ");
                      if (uVar21 <= uVar22) goto LAB_00109b8f;
                      uVar18 = (ulong)uVar22;
                    }
                    uVar22 = uVar22 + 4;
                    uVar13 = (ulong)uVar22;
                    uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar18);
                    switch(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                           uVar23 << 0x18) {
                    case 0:
                      String::operator+=((String *)&local_b8,"exists");
                      break;
                    case 1:
                      String::operator+=((String *)&local_b8,"= ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                                uVar23 << 0x18;
                        if (uVar21 < uVar22 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,uVar8);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar23 = uVar23 >> 0x18 & 3;
                          if (uVar23 != 0) {
                            iVar11 = (iVar11 - uVar23) + 4;
                          }
                          local_78._0_8_ = &_LC111;
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar22 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 2:
                      uVar19 = 0x106b5d;
                      pSVar26 = (String *)&local_b8;
                      String::operator+=((String *)&local_b8,"~ ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                                uVar23 << 0x18;
                        if (uVar21 < uVar22 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,pSVar26);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar23 = uVar23 >> 0x18 & 3;
                          if (uVar23 != 0) {
                            iVar11 = (iVar11 - uVar23) + 4;
                          }
                          local_78._0_8_ = &_LC111;
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar22 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                        in_R11 = uVar19;
                      }
                      break;
                    case 3:
                      String::operator+=((String *)&local_b8,"= *");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                                uVar23 << 0x18;
                        if (uVar21 < uVar22 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,uVar13);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar23 = uVar23 >> 0x18 & 3;
                          if (uVar23 != 0) {
                            iVar11 = (iVar11 - uVar23) + 4;
                          }
                          local_78._0_8_ = &_LC111;
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar22 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 4:
                      String::operator+=((String *)&local_b8,"= ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                                uVar23 << 0x18;
                        if (uVar21 < uVar22 + uVar8) {
                          pcVar31 = "Condition \"r_pos + key_size > p_rq_size\" is true.";
                          uVar19 = 0x212;
                          goto LAB_0010a4a3;
                        }
                        local_a0 = (void *)0x0;
                        CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                        lVar15 = *(long *)(in_RSI + 0x188);
                        CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                        memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                        iVar11 = uVar8 + 4;
                        uVar23 = uVar23 >> 0x18 & 3;
                        if (uVar23 != 0) {
                          iVar11 = (iVar11 - uVar23) + 4;
                        }
                        uVar13 = (ulong)(uVar22 + iVar11);
                        local_78._0_8_ = &_LC111;
                        local_90 = 0;
                        local_78.tm_hour = 1;
                        local_78.tm_mday = 0;
                        String::parse_latin1((StrRange *)&local_90);
                        iVar11 = CharString::get_data();
                        String::utf8((char *)&local_78,iVar11);
                        operator+((char *)&local_88,(String *)&_LC111);
                        String::operator+((String *)&local_98,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char>::_unref((CowData<char> *)&local_a0);
                      }
                      else {
                        pcVar31 = "Condition \"r_pos >= p_rq_size\" is true.";
                        uVar19 = 0x210;
LAB_0010a4a3:
                        _err_print_error("_parse_value","editor/export/codesign.cpp",uVar19,pcVar31,
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      String::operator+=((String *)&local_b8,"*");
                      break;
                    case 5:
                      uVar19 = 0x10674b;
                      pSVar26 = (String *)&local_b8;
                      String::operator+=((String *)&local_b8,"< ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                                uVar23 << 0x18;
                        if (uVar21 < uVar22 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,pSVar26);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar23 = uVar23 >> 0x18 & 3;
                          if (uVar23 != 0) {
                            iVar11 = (iVar11 - uVar23) + 4;
                          }
                          local_78._0_8_ = &_LC111;
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar22 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                        in_R11 = uVar19;
                      }
                      break;
                    case 6:
                      String::operator+=((String *)&local_b8,"> ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                                uVar23 << 0x18;
                        if (uVar21 < uVar22 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,
                                           uVar22 + uVar8);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar23 = uVar23 >> 0x18 & 3;
                          if (uVar23 != 0) {
                            iVar11 = (iVar11 - uVar23) + 4;
                          }
                          local_78._0_8_ = &_LC111;
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar22 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 7:
                      String::operator+=((String *)&local_b8,"<= ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                                uVar23 << 0x18;
                        if (uVar21 < uVar22 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,uVar8);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar23 = uVar23 >> 0x18 & 3;
                          if (uVar23 != 0) {
                            iVar11 = (iVar11 - uVar23) + 4;
                          }
                          local_78._0_8_ = &_LC111;
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar22 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 8:
                      uVar19 = 0x107bd7;
                      pSVar26 = (String *)&local_b8;
                      String::operator+=((String *)&local_b8,">= ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                                uVar23 << 0x18;
                        if (uVar21 < uVar22 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,pSVar26);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar23 = uVar23 >> 0x18 & 3;
                          if (uVar23 != 0) {
                            iVar11 = (iVar11 - uVar23) + 4;
                          }
                          local_78._0_8_ = &_LC111;
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar22 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                        in_R11 = uVar19;
                      }
                      break;
                    case 9:
                      String::operator+=((String *)&local_b8,"= ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar10 = local_78.tm_hour;
                        local_88 = "%02d:%02d:%02d +0000>";
                        iVar11 = local_78.tm_min;
                        local_98 = 0;
                        local_80 = (void *)0x15;
                        String::parse_latin1((StrRange *)&local_98);
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(StrRange *)&local_98,iVar10,iVar11);
                        local_90 = 0;
                        local_80 = (void *)0x10;
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        local_88 = "<%04d-%02d-%02d ";
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<int,int,int>
                                  ((String *)&local_88,(int)(StrRange *)&local_90,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 10:
                      String::operator+=((String *)&local_b8,"< ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar10 = local_78.tm_hour;
                        local_88 = "%02d:%02d:%02d +0000>";
                        iVar11 = local_78.tm_min;
                        local_98 = 0;
                        local_80 = (void *)0x15;
                        String::parse_latin1((StrRange *)&local_98);
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(StrRange *)&local_98,iVar10,iVar11);
                        local_90 = 0;
                        local_80 = (void *)0x10;
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        local_88 = "<%04d-%02d-%02d ";
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<int,int,int>
                                  ((String *)&local_88,(int)(StrRange *)&local_90,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 0xb:
                      String::operator+=((String *)&local_b8,"> ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar10 = local_78.tm_hour;
                        local_88 = "%02d:%02d:%02d +0000>";
                        iVar11 = local_78.tm_min;
                        local_98 = 0;
                        local_80 = (void *)0x15;
                        String::parse_latin1((StrRange *)&local_98);
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(StrRange *)&local_98,iVar10,iVar11);
                        local_90 = 0;
                        local_80 = (void *)0x10;
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        local_88 = "<%04d-%02d-%02d ";
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<int,int,int>
                                  ((String *)&local_88,(int)(StrRange *)&local_90,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 0xc:
                      String::operator+=((String *)&local_b8,"<= ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar10 = local_78.tm_hour;
                        local_88 = "%02d:%02d:%02d +0000>";
                        iVar11 = local_78.tm_min;
                        local_98 = 0;
                        local_80 = (void *)0x15;
                        String::parse_latin1((StrRange *)&local_98);
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(StrRange *)&local_98,iVar10,iVar11);
                        local_90 = 0;
                        local_80 = (void *)0x10;
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        local_88 = "<%04d-%02d-%02d ";
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<int,int,int>
                                  ((String *)&local_88,(int)(StrRange *)&local_90,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 0xd:
                      String::operator+=((String *)&local_b8,">= ");
                      if (uVar22 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + (ulong)uVar22);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar10 = local_78.tm_hour;
                        local_88 = "%02d:%02d:%02d +0000>";
                        iVar11 = local_78.tm_min;
                        local_98 = 0;
                        local_80 = (void *)0x15;
                        String::parse_latin1((StrRange *)&local_98);
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(StrRange *)&local_98,iVar10,iVar11);
                        local_90 = 0;
                        local_80 = (void *)0x10;
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        local_88 = "<%04d-%02d-%02d ";
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<int,int,int>
                                  ((String *)&local_88,(int)(StrRange *)&local_90,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        in_R11 = 0;
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.");
                      }
                      break;
                    case 0xe:
                      String::operator+=((String *)&local_b8,"absent");
                      break;
                    default:
                      goto switchD_001052f9_default;
                    }
                    break;
                  case 0xb:
                    if (uVar21 <= uVar22) {
                      _err_print_error("_parse_certificate_slot","editor/export/codesign.cpp",0x1c7,
                                       "Condition \"r_pos >= p_rq_size\" is true.",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
LAB_00109d4e:
                      pcVar17 = "editor/export/codesign.cpp";
                      pcVar31 = (char *)0x0;
                      _err_print_error("_parse_key","editor/export/codesign.cpp",0x1d7,
                                       "Condition \"r_pos >= p_rq_size\" is true.",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
LAB_001050ef:
                      String::operator+=((String *)&local_b8," ");
                      uVar23 = (uint)uVar18;
                      if (uVar23 < uVar21) goto LAB_0010510e;
                      _err_print_error("_parse_match","editor/export/codesign.cpp",0x22c,
                                       "Condition \"r_pos >= p_rq_size\" is true. Returning: false",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
switchD_00105138_default:
                      _err_print_error("parse_requirements","editor/export/codesign.cpp",0x2d7,
                                       "Condition \"!_parse_match(pos, token, rq_offset + rq_size)\" is true. Returning: list"
                                       ,"CodeSign/Requirements: Unsupported match suffix.",0,0);
                      goto LAB_001049e7;
                    }
                    String::operator+=((String *)&local_b8,"certificate ");
                    iVar10 = *(int *)(*(long *)(in_RSI + 0x188) + uVar18);
                    if (iVar10 == 0) {
                      String::operator+=((String *)&local_b8,"leaf");
                      pcVar31 = (char *)puVar16;
                    }
                    else if (iVar10 == -1) {
                      String::operator+=((String *)&local_b8,"root");
                      pcVar31 = (char *)puVar16;
                    }
                    else {
                      itos((long)&local_78);
                      String::operator+=((String *)&local_b8,(String *)&local_78);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                      pcVar31 = (char *)puVar16;
                    }
                    uVar23 = iVar11 + 8;
                    uVar18 = (ulong)uVar23;
                    if (uVar21 <= uVar23) goto LAB_00109d4e;
                    uVar18 = (ulong)uVar23;
                    uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar18);
                    uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18;
                    if (uVar8 + uVar23 <= uVar21) {
                      local_a0 = (void *)0x0;
                      CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                      lVar15 = *(long *)(in_RSI + 0x188);
                      CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                      memcpy(local_a0,(void *)(lVar15 + 4 + uVar18),(ulong)uVar8);
                      iVar11 = uVar8 + 4;
                      uVar22 = uVar22 >> 0x18 & 3;
                      if (uVar22 != 0) {
                        iVar11 = (iVar11 - uVar22) + 4;
                      }
                      uVar18 = (ulong)(uVar23 + iVar11);
                      local_88 = (char *)0x0;
                      local_78.tm_hour = 1;
                      local_78.tm_mday = 0;
                      local_78._0_8_ = &_LC124;
                      pcVar17 = (char *)&local_98;
                      String::parse_latin1((StrRange *)&local_88);
                      iVar11 = CharString::get_data();
                      String::utf8(pcVar17,iVar11);
                      operator+((char *)&local_90,(String *)&_LC125);
                      String::operator+((String *)&local_78,(String *)&local_90);
                      String::operator+=((String *)&local_b8,(String *)&local_78);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                      CowData<char32_t>::_unref((CowData<char32_t> *)pcVar17);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      CowData<char>::_unref((CowData<char> *)&local_a0);
                      goto LAB_001050ef;
                    }
                    pcVar17 = "editor/export/codesign.cpp";
                    pcVar31 = "Condition \"r_pos + key_size > p_rq_size\" is true.";
                    _err_print_error("_parse_key","editor/export/codesign.cpp",0x1d9);
                    String::operator+=((String *)&local_b8," ");
LAB_0010510e:
                    uVar23 = uVar23 + 4;
                    uVar13 = (ulong)uVar23;
                    uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar18);
                    switch(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                           uVar22 << 0x18) {
                    case 0:
                      String::operator+=((String *)&local_b8,"exists");
                      break;
                    case 1:
                      uVar19 = 0x10829b;
                      pSVar26 = (String *)&local_b8;
                      String::operator+=((String *)&local_b8,"= ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,pSVar26);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          local_78._0_8_ = &_LC111;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                        in_R11 = uVar19;
                      }
                      break;
                    case 2:
                      String::operator+=((String *)&local_b8,"~ ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,pcVar17);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          local_78._0_8_ = &_LC111;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 3:
                      String::operator+=((String *)&local_b8,"= *");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          in_R11 = 0;
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.");
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          local_78._0_8_ = &_LC111;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 4:
                      String::operator+=((String *)&local_b8,"= ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          uVar19 = 0x212;
                          pcVar31 = "Condition \"r_pos + key_size > p_rq_size\" is true.";
                          goto LAB_0010ab62;
                        }
                        local_a0 = (void *)0x0;
                        CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                        lVar15 = *(long *)(in_RSI + 0x188);
                        CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                        memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                        iVar11 = uVar8 + 4;
                        uVar22 = uVar22 >> 0x18 & 3;
                        if (uVar22 != 0) {
                          iVar11 = (iVar11 - uVar22) + 4;
                        }
                        uVar13 = (ulong)(uVar23 + iVar11);
                        local_90 = 0;
                        local_78.tm_hour = 1;
                        local_78.tm_mday = 0;
                        local_78._0_8_ = &_LC111;
                        String::parse_latin1((StrRange *)&local_90);
                        iVar11 = CharString::get_data();
                        String::utf8((char *)&local_78,iVar11);
                        operator+((char *)&local_88,(String *)&_LC111);
                        String::operator+((String *)&local_98,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char>::_unref((CowData<char> *)&local_a0);
                      }
                      else {
                        pcVar31 = "Condition \"r_pos >= p_rq_size\" is true.";
                        uVar19 = 0x210;
LAB_0010ab62:
                        _err_print_error("_parse_value","editor/export/codesign.cpp",uVar19,pcVar31,
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      String::operator+=((String *)&local_b8,"*");
                      break;
                    case 5:
                      String::operator+=((String *)&local_b8,"< ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,pcVar17);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          local_78._0_8_ = &_LC111;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 6:
                      String::operator+=((String *)&local_b8,"> ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          in_R11 = 0;
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.");
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          local_78._0_8_ = &_LC111;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 7:
                      String::operator+=((String *)&local_b8,"<= ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,pcVar31);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          local_78._0_8_ = &_LC111;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 8:
                      String::operator+=((String *)&local_b8,">= ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + (ulong)uVar23);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,uVar22);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + (ulong)uVar23),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          local_90 = 0;
                          local_78.tm_hour = 1;
                          local_78.tm_mday = 0;
                          local_78._0_8_ = &_LC111;
                          String::parse_latin1((StrRange *)&local_90);
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 9:
                      String::operator+=((String *)&local_b8,"= ");
                      if (uVar23 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar10 = local_78.tm_hour;
                        local_88 = "%02d:%02d:%02d +0000>";
                        iVar11 = local_78.tm_min;
                        local_98 = 0;
                        local_80 = (void *)0x15;
                        String::parse_latin1((StrRange *)&local_98);
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(StrRange *)&local_98,iVar10,iVar11);
                        local_90 = 0;
                        local_80 = (void *)0x10;
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        local_88 = "<%04d-%02d-%02d ";
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<int,int,int>
                                  ((String *)&local_88,(int)(StrRange *)&local_90,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        in_R11 = 0;
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.");
                      }
                      break;
                    case 10:
                      String::operator+=((String *)&local_b8,"< ");
                      if (uVar23 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar10 = local_78.tm_hour;
                        local_88 = "%02d:%02d:%02d +0000>";
                        iVar11 = local_78.tm_min;
                        local_98 = 0;
                        local_80 = (void *)0x15;
                        String::parse_latin1((StrRange *)&local_98);
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(StrRange *)&local_98,iVar10,iVar11);
                        local_90 = 0;
                        local_80 = (void *)0x10;
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        local_88 = "<%04d-%02d-%02d ";
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<int,int,int>
                                  ((String *)&local_88,(int)(StrRange *)&local_90,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 0xb:
                      String::operator+=((String *)&local_b8,"> ");
                      if (uVar23 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar10 = local_78.tm_hour;
                        local_88 = "%02d:%02d:%02d +0000>";
                        iVar11 = local_78.tm_min;
                        local_98 = 0;
                        local_80 = (void *)0x15;
                        String::parse_latin1((StrRange *)&local_98);
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(StrRange *)&local_98,iVar10,iVar11);
                        local_90 = 0;
                        local_80 = (void *)0x10;
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        local_88 = "<%04d-%02d-%02d ";
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<int,int,int>
                                  ((String *)&local_88,(int)(StrRange *)&local_90,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 0xc:
                      String::operator+=((String *)&local_b8,"<= ");
                      if (uVar23 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar10 = local_78.tm_hour;
                        local_88 = "%02d:%02d:%02d +0000>";
                        iVar11 = local_78.tm_min;
                        local_98 = 0;
                        local_80 = (void *)0x15;
                        String::parse_latin1((StrRange *)&local_98);
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(StrRange *)&local_98,iVar10,iVar11);
                        local_90 = 0;
                        local_80 = (void *)0x10;
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        local_88 = "<%04d-%02d-%02d ";
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<int,int,int>
                                  ((String *)&local_88,(int)(StrRange *)&local_90,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 0xd:
                      String::operator+=((String *)&local_b8,">= ");
                      if (uVar23 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar10 = local_78.tm_hour;
                        local_88 = "%02d:%02d:%02d +0000>";
                        iVar11 = local_78.tm_min;
                        local_98 = 0;
                        local_80 = (void *)0x15;
                        String::parse_latin1((StrRange *)&local_98);
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(StrRange *)&local_98,iVar10,iVar11);
                        local_90 = 0;
                        local_80 = (void *)0x10;
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        local_88 = "<%04d-%02d-%02d ";
                        String::parse_latin1((StrRange *)&local_90);
                        vformat<int,int,int>
                                  ((String *)&local_88,(int)(StrRange *)&local_90,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0);
                      }
                      break;
                    case 0xe:
                      String::operator+=((String *)&local_b8,"absent");
                      break;
                    default:
                      goto switchD_00105138_default;
                    }
                    break;
                  case 0xc:
                    if (uVar22 < uVar21) {
                      String::operator+=((String *)&local_b8,"certificate ");
                      iVar10 = *(int *)(*(long *)(in_RSI + 0x188) + uVar18);
                      if (iVar10 == 0) {
                        String::operator+=((String *)&local_b8,"leaf");
                      }
                      else if (iVar10 == -1) {
                        String::operator+=((String *)&local_b8,"root");
                      }
                      else {
                        itos((long)&local_78);
                        String::operator+=((String *)&local_b8,(String *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                      }
                      uVar18 = (ulong)(iVar11 + 8);
                    }
                    else {
                      _err_print_error("_parse_certificate_slot","editor/export/codesign.cpp",0x1c7,
                                       "Condition \"r_pos >= p_rq_size\" is true.",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
                    }
                    String::operator+=((String *)&local_b8," trusted");
                    uVar13 = uVar18;
                    break;
                  case 0xd:
                    local_78.tm_hour = 0xe;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = "anchor trusted";
                    String::parse_latin1((StrRange *)&local_b8);
                    break;
                  case 0xe:
                    if (uVar21 <= uVar22) {
                      in_R11 = 0;
                      _err_print_error("_parse_certificate_slot","editor/export/codesign.cpp",0x1c7,
                                       "Condition \"r_pos >= p_rq_size\" is true.",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
LAB_00109ca5:
                      pcVar29 = "editor/export/codesign.cpp";
                      pcVar17 = "Condition \"r_pos >= p_rq_size\" is true.";
                      pcVar31 = "CodeSign/Requirements: Out of bounds.";
                      _err_print_error("_parse_oid_key","editor/export/codesign.cpp",0x1e4,
                                       "Condition \"r_pos >= p_rq_size\" is true.",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
LAB_00104d53:
                      String::operator+=((String *)&local_b8," ");
                      uVar23 = (uint)uVar18;
                      if (uVar23 < uVar21) goto LAB_00104d72;
                      _err_print_error("_parse_match","editor/export/codesign.cpp",0x22c,
                                       "Condition \"r_pos >= p_rq_size\" is true. Returning: false",
                                       "CodeSign/Requirements: Out of bounds.",0,0);
switchD_00104d9c_default:
                      _err_print_error("parse_requirements","editor/export/codesign.cpp",0x2e4,
                                       "Condition \"!_parse_match(pos, token, rq_offset + rq_size)\" is true. Returning: list"
                                       ,"CodeSign/Requirements: Unsupported match suffix.",0,0);
                      goto LAB_001049e7;
                    }
                    String::operator+=((String *)&local_b8,"certificate ");
                    iVar10 = *(int *)(*(long *)(in_RSI + 0x188) + uVar18);
                    if (iVar10 == 0) {
                      pcVar31 = (char *)0x106298;
                      String::operator+=((String *)&local_b8,"leaf");
                    }
                    else if (iVar10 == -1) {
                      pcVar31 = (char *)0x109a18;
                      String::operator+=((String *)&local_b8,"root");
                    }
                    else {
                      itos((long)&local_78);
                      String::operator+=((String *)&local_b8,(String *)&local_78);
                      pcVar31 = (char *)0x104b40;
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                    }
                    uVar23 = iVar11 + 8;
                    uVar18 = (ulong)uVar23;
                    if (uVar21 <= uVar23) goto LAB_00109ca5;
                    uVar18 = (ulong)uVar23;
                    uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar18);
                    uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                            uVar22 << 0x18;
                    uVar9 = uVar8 + uVar23;
                    if (uVar9 <= uVar21) {
                      pcVar29 = ".";
                      String::operator+=((String *)&local_b8,"[field.");
                      local_88 = (char *)0x0;
                      local_78._0_8_ = &_LC20;
                      local_78.tm_hour = 1;
                      local_78.tm_mday = 0;
                      String::parse_latin1((StrRange *)&local_88);
                      uVar13 = (ulong)(iVar11 + 0xc);
                      if (*(long *)(in_RSI + 0x188) == 0) {
LAB_00109a61:
                        pcVar31 = (char *)0x0;
LAB_00105d0c:
                        _err_print_index_error
                                  ("get","./core/templates/cowdata.h",0xdb,uVar13,(long)pcVar31,
                                   "p_index","size()","",false,true);
                        _err_flush_stdout();
                    /* WARNING: Does not return */
                        pcVar4 = (code *)invalidInstructionException();
                        (*pcVar4)();
                      }
                      pcVar31 = *(char **)(*(long *)(in_RSI + 0x188) + -8);
                      if ((long)pcVar31 <= (long)uVar13) goto LAB_00105d0c;
                      itos((long)&local_90);
                      String::operator+((String *)&local_78,(String *)&local_90);
                      String::operator+=((String *)&local_b8,(String *)&local_78);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      pcVar17 = (char *)0xffffffcd;
                      if (*(long *)(in_RSI + 0x188) == 0) goto LAB_00109a61;
                      pcVar31 = *(char **)(*(long *)(in_RSI + 0x188) + -8);
                      if ((long)pcVar31 <= (long)uVar13) goto LAB_00105d0c;
                      uVar27 = iVar11 + 0xd;
                      itos((long)&local_78);
                      String::operator+=((String *)&local_b8,(String *)&local_78);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                      while (uVar27 < uVar9 + 4) {
                        String::operator+=((String *)&local_b8,".");
                        pcVar17 = *(char **)(in_RSI + 0x188);
                        uVar13 = (ulong)uVar27;
                        if (pcVar17 == (char *)0x0) {
                          pcVar31 = (char *)0x0;
                          goto LAB_00105d0c;
                        }
                        pcVar31 = *(char **)(pcVar17 + -8);
                        if ((long)pcVar31 <= (long)uVar13) goto LAB_00105d0c;
                        cVar7 = pcVar17[uVar13];
                        while (uVar27 = uVar27 + 1, cVar7 < '\0') {
                          uVar13 = (ulong)uVar27;
                          if ((long)pcVar31 <= (long)uVar13) goto LAB_00105d0c;
                          cVar7 = pcVar17[uVar13];
                        }
                        itos((long)&local_78);
                        String::operator+=((String *)&local_b8,(String *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                      }
                      String::operator+=((String *)&local_b8,"]");
                      iVar11 = uVar8 + 4;
                      uVar22 = uVar22 >> 0x18 & 3;
                      if (uVar22 != 0) {
                        iVar11 = (iVar11 - uVar22) + 4;
                      }
                      uVar18 = (ulong)(uVar23 + iVar11);
                      goto LAB_00104d53;
                    }
                    pcVar29 = "editor/export/codesign.cpp";
                    pcVar17 = "Condition \"r_pos + key_size > p_rq_size\" is true.";
                    _err_print_error("_parse_oid_key","editor/export/codesign.cpp",0x1e6,
                                     "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                     "CodeSign/Requirements: Out of bounds.",0,0);
                    String::operator+=((String *)&local_b8," ");
LAB_00104d72:
                    uVar23 = uVar23 + 4;
                    uVar13 = (ulong)uVar23;
                    uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar18);
                    switch(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                           uVar22 << 0x18) {
                    case 0:
                      String::operator+=((String *)&local_b8,"exists");
                      break;
                    case 1:
                      String::operator+=((String *)&local_b8,"= ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,uVar13);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          String::String((String *)&local_90,"\"");
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,uVar21);
                      }
                      break;
                    case 2:
                      String::operator+=((String *)&local_b8,"~ ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,pcVar31);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          String::String((String *)&local_90,"\"");
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,in_R11);
                      }
                      break;
                    case 3:
                      String::operator+=((String *)&local_b8,"= *");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,pcVar29);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          String::String((String *)&local_90,"\"");
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,pcVar17);
                      }
                      break;
                    case 4:
                      String::operator+=((String *)&local_b8,"= ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          uVar19 = 0x212;
                          pcVar31 = "Condition \"r_pos + key_size > p_rq_size\" is true.";
                          goto LAB_0010af54;
                        }
                        local_a0 = (void *)0x0;
                        CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                        lVar15 = *(long *)(in_RSI + 0x188);
                        CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                        memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                        iVar11 = uVar8 + 4;
                        uVar22 = uVar22 >> 0x18 & 3;
                        if (uVar22 != 0) {
                          iVar11 = (iVar11 - uVar22) + 4;
                        }
                        uVar13 = (ulong)(uVar23 + iVar11);
                        String::String((String *)&local_90,"\"");
                        iVar11 = CharString::get_data();
                        String::utf8((char *)&local_78,iVar11);
                        operator+((char *)&local_88,(String *)&_LC111);
                        String::operator+((String *)&local_98,(String *)&local_88);
                        String::operator+=((String *)&local_b8,(String *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char>::_unref((CowData<char> *)&local_a0);
                      }
                      else {
                        pcVar31 = "Condition \"r_pos >= p_rq_size\" is true.";
                        uVar19 = 0x210;
LAB_0010af54:
                        in_R11 = 0;
                        _err_print_error("_parse_value","editor/export/codesign.cpp",uVar19,pcVar31)
                        ;
                      }
                      String::operator+=((String *)&local_b8,"*");
                      break;
                    case 5:
                      String::operator+=((String *)&local_b8,"< ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,pcVar17);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          String::String((String *)&local_90,"\"");
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,pcVar31);
                      }
                      break;
                    case 6:
                      String::operator+=((String *)&local_b8,"> ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,uVar13);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          String::String((String *)&local_90,"\"");
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,uVar21);
                      }
                      break;
                    case 7:
                      String::operator+=((String *)&local_b8,"<= ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,pcVar31);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          String::String((String *)&local_90,"\"");
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,in_R11);
                      }
                      break;
                    case 8:
                      String::operator+=((String *)&local_b8,">= ");
                      if (uVar23 < uVar21) {
                        uVar22 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        uVar8 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                                uVar22 << 0x18;
                        if (uVar21 < uVar23 + uVar8) {
                          _err_print_error("_parse_value","editor/export/codesign.cpp",0x212,
                                           "Condition \"r_pos + key_size > p_rq_size\" is true.",
                                           "CodeSign/Requirements: Out of bounds.",0,0,
                                           uVar23 + uVar8);
                        }
                        else {
                          local_a0 = (void *)0x0;
                          CowData<char>::resize<false>((CowData<char> *)&local_a0,(long)(int)uVar8);
                          lVar15 = *(long *)(in_RSI + 0x188);
                          CowData<char>::_copy_on_write((CowData<char> *)&local_a0);
                          memcpy(local_a0,(void *)(lVar15 + 4 + uVar13),(ulong)uVar8);
                          iVar11 = uVar8 + 4;
                          uVar22 = uVar22 >> 0x18 & 3;
                          if (uVar22 != 0) {
                            iVar11 = (iVar11 - uVar22) + 4;
                          }
                          String::String((String *)&local_90,"\"");
                          iVar10 = CharString::get_data();
                          String::utf8((char *)&local_78,iVar10);
                          operator+((char *)&local_88,(String *)&_LC111);
                          String::operator+((String *)&local_98,(String *)&local_88);
                          String::operator+=((String *)&local_b8,(String *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                          CowData<char>::_unref((CowData<char> *)&local_a0);
                          uVar13 = (ulong)(uVar23 + iVar11);
                        }
                      }
                      else {
                        _err_print_error("_parse_value","editor/export/codesign.cpp",0x210,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,pcVar17);
                      }
                      break;
                    case 9:
                      String::operator+=((String *)&local_b8,"= ");
                      if (uVar23 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar11 = local_78.tm_min;
                        iVar10 = local_78.tm_hour;
                        String::String((String *)&local_98,"%02d:%02d:%02d +0000>");
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(String *)&local_98,iVar10,iVar11);
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        String::String((String *)&local_88,"<%04d-%02d-%02d ");
                        vformat<int,int,int>
                                  ((String *)&local_90,(int)(String *)&local_88,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_90);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,uVar18);
                      }
                      break;
                    case 10:
                      String::operator+=((String *)&local_b8,"< ");
                      if (uVar23 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar11 = local_78.tm_min;
                        iVar10 = local_78.tm_hour;
                        String::String((String *)&local_98,"%02d:%02d:%02d +0000>");
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(String *)&local_98,iVar10,iVar11);
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        String::String((String *)&local_88,"<%04d-%02d-%02d ");
                        vformat<int,int,int>
                                  ((String *)&local_90,(int)(String *)&local_88,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_90);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,in_R11);
                      }
                      break;
                    case 0xb:
                      String::operator+=((String *)&local_b8,"> ");
                      if (uVar23 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar11 = local_78.tm_min;
                        iVar10 = local_78.tm_hour;
                        String::String((String *)&local_98,"%02d:%02d:%02d +0000>");
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(String *)&local_98,iVar10,iVar11);
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        String::String((String *)&local_88,"<%04d-%02d-%02d ");
                        vformat<int,int,int>
                                  ((String *)&local_90,(int)(String *)&local_88,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_90);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,pcVar31);
                      }
                      break;
                    case 0xc:
                      String::operator+=((String *)&local_b8,"<= ");
                      if (uVar23 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + uVar13);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar11 = local_78.tm_min;
                        iVar10 = local_78.tm_hour;
                        String::String((String *)&local_98,"%02d:%02d:%02d +0000>");
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(String *)&local_98,iVar10,iVar11);
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        String::String((String *)&local_88,"<%04d-%02d-%02d ");
                        vformat<int,int,int>
                                  ((String *)&local_90,(int)(String *)&local_88,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_90);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,pcVar17);
                      }
                      break;
                    case 0xd:
                      String::operator+=((String *)&local_b8,">= ");
                      if (uVar23 < uVar21) {
                        uVar23 = *(uint *)(*(long *)(in_RSI + 0x188) + (ulong)uVar23);
                        local_b0 = (ulong)((uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18) + 0x3a4fc880);
                        gmtime_r((time_t *)&local_b0,&local_78);
                        iVar11 = local_78.tm_min;
                        iVar10 = local_78.tm_hour;
                        String::String((String *)&local_98,"%02d:%02d:%02d +0000>");
                        vformat<int,int,int>
                                  ((String *)&local_a0,(int)(String *)&local_98,iVar10,iVar11);
                        iVar11 = local_78.tm_mon + 1;
                        iVar10 = local_78.tm_year + 0x76c;
                        String::String((String *)&local_88,"<%04d-%02d-%02d ");
                        vformat<int,int,int>
                                  ((String *)&local_90,(int)(String *)&local_88,iVar10,iVar11);
                        String::operator+((String *)&local_a8,(String *)&local_90);
                        String::operator+=((String *)&local_b8,(String *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      }
                      else {
                        _err_print_error("_parse_date","editor/export/codesign.cpp",0x21d,
                                         "Condition \"r_pos >= p_rq_size\" is true.",
                                         "CodeSign/Requirements: Out of bounds.",0,0,uVar21);
                      }
                      break;
                    case 0xe:
                      String::operator+=((String *)&local_b8,"absent");
                      break;
                    default:
                      goto switchD_00104d9c_default;
                    }
                    break;
                  case 0xf:
                    local_78.tm_hour = 0x14;
                    local_78.tm_mday = 0;
                    local_78._0_8_ = "anchor apple generic";
                    String::parse_latin1((StrRange *)&local_b8);
                    break;
                  default:
                    _err_print_error("parse_requirements","editor/export/codesign.cpp",0x2ea,
                                     "Method/function failed. Returning: list",
                                     "CodeSign/Requirements: Invalid requirement token.",0,0);
LAB_001049e7:
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    goto LAB_001049f0;
                  }
                  if (local_c0 == (undefined1 (*) [16])0x0) {
                    local_c0 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                    *(undefined4 *)local_c0[1] = 0;
                    *local_c0 = (undefined1  [16])0x0;
                  }
                  pauVar20 = local_c0;
                  pCVar14 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
                  *(undefined1 (*) [16])pCVar14 = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(pCVar14 + 0x10) = (undefined1  [16])0x0;
                  if (local_b8 != 0) {
                    CowData<char32_t>::_ref(pCVar14,(CowData *)&local_b8);
                  }
                  lVar3 = local_b8;
                  lVar15 = *(long *)(*pauVar20 + 8);
                  *(undefined8 *)(pCVar14 + 8) = 0;
                  *(undefined1 (**) [16])(pCVar14 + 0x18) = pauVar20;
                  *(long *)(pCVar14 + 0x10) = lVar15;
                  if (lVar15 != 0) {
                    *(CowData<char32_t> **)(lVar15 + 8) = pCVar14;
                  }
                  lVar15 = *(long *)*pauVar20;
                  *(CowData<char32_t> **)(*pauVar20 + 8) = pCVar14;
                  if (lVar15 == 0) {
                    *(CowData<char32_t> **)*pauVar20 = pCVar14;
                  }
                  *(int *)pauVar20[1] = *(int *)pauVar20[1] + 1;
                  if (local_b8 != 0) {
                    LOCK();
                    plVar25 = (long *)(local_b8 + -0x10);
                    *plVar25 = *plVar25 + -1;
                    UNLOCK();
                    if (*plVar25 == 0) {
                      local_b8 = 0;
                      Memory::free_static((void *)(lVar3 + -0x10),false);
                    }
                  }
                  if (uVar21 <= (uint)uVar13) goto LAB_00105e70;
                  lVar15 = *(long *)(in_RSI + 0x188);
                } while( true );
              }
              goto LAB_0010a0e8;
            }
            _err_print_error("parse_requirements","editor/export/codesign.cpp",0x29f,
                             "Condition \"rq_ver != 0x00000001\" is true. Returning: list",
                             "CodeSign/Requirements: Invalid requirement version.",0,0);
          }
          else {
            _err_print_error("parse_requirements","editor/export/codesign.cpp",0x29e,
                             "Condition \"rq_magic != 0xfade0c00\" is true. Returning: list",
                             "CodeSign/Requirements: Invalid requirement magic.",0,0);
          }
          goto LAB_001049fa;
        }
        _err_print_error("parse_requirements","editor/export/codesign.cpp",0x285,
                         "Condition \"rq_offset + 12 >= (uint32_t)blob.size()\" is true. Returning: list"
                         ,"CodeSign/Requirements: Invalid requirement offset.",0,0);
LAB_001049fa:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      }
    }
    else {
      _err_print_error("parse_requirements","editor/export/codesign.cpp",0x27c,
                       "Condition \"size != (uint32_t)blob.size()\" is true. Returning: list",
                       "CodeSign/Requirements: Invalid set size.",0,0);
    }
  }
  else {
    _err_print_error("parse_requirements","editor/export/codesign.cpp",0x27a,
                     "Condition \"magic != 0xfade0c01\" is true. Returning: list",
                     "CodeSign/Requirements: Invalid set magic.",0,0);
  }
LAB_00104a02:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
LAB_00105e70:
  if (local_c0 != (undefined1 (*) [16])0x0) {
    pCVar14 = *(CowData<char32_t> **)(*local_c0 + 8);
    if (pCVar14 != (CowData<char32_t> *)0x0) {
      do {
        cVar7 = String::operator==((String *)pCVar14,"and");
        if (cVar7 == '\0') {
          cVar7 = String::operator==((String *)pCVar14,"or");
          if (cVar7 != '\0') {
            if ((*(long *)(pCVar14 + 8) != 0) && (*(long *)(*(long *)(pCVar14 + 8) + 8) != 0)) {
              local_88 = (char *)0x0;
              local_78._0_8_ = &_LC155;
              local_78.tm_hour = 1;
              local_78.tm_mday = 0;
              String::parse_latin1((StrRange *)&local_88);
              local_78._0_8_ = &_LC158;
              local_98 = 0;
              local_78.tm_hour = 4;
              local_78.tm_mday = 0;
              String::parse_latin1((StrRange *)&local_98);
              operator+((char *)&local_a0,(String *)&_LC157);
              String::operator+((String *)&local_90,(String *)&local_a0);
              String::operator+((String *)&local_78,(String *)&local_90);
              String::operator+((String *)&local_a8,(String *)&local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              pauVar20 = local_c0;
              plVar25 = *(long **)(pCVar14 + 8);
              plVar2 = (long *)plVar25[1];
              bVar30 = plVar2 != (long *)0x0 && local_c0 != (undefined1 (*) [16])0x0;
              bVar5 = local_c0 != (undefined1 (*) [16])0x0;
              if (bVar30) {
                if (local_c0 == (undefined1 (*) [16])plVar2[3]) {
                  lVar15 = plVar2[1];
                  if (plVar2 == *(long **)*local_c0) {
                    *(long *)*local_c0 = lVar15;
                  }
                  lVar3 = plVar2[2];
                  if (plVar2 == *(long **)(*local_c0 + 8)) {
                    *(long *)(*local_c0 + 8) = lVar3;
                  }
                  if (lVar3 != 0) {
                    *(long *)(lVar3 + 8) = lVar15;
                    lVar15 = plVar2[1];
                  }
                  if (lVar15 != 0) {
                    *(long *)(lVar15 + 0x10) = lVar3;
                  }
                  if (*plVar2 != 0) {
                    LOCK();
                    plVar25 = (long *)(*plVar2 + -0x10);
                    *plVar25 = *plVar25 + -1;
                    UNLOCK();
                    if (*plVar25 == 0) {
                      lVar15 = *plVar2;
                      *plVar2 = 0;
                      Memory::free_static((void *)(lVar15 + -0x10),false);
                    }
                  }
                  pauVar28 = local_c0;
                  Memory::free_static(plVar2,false);
                  *(int *)pauVar20[1] = *(int *)pauVar20[1] + -1;
                  pauVar20 = pauVar28;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false");
                }
                if (*(int *)pauVar20[1] != 0) {
                  plVar25 = *(long **)(pCVar14 + 8);
                  bVar5 = bVar30;
                  goto LAB_00106189;
                }
                Memory::free_static(pauVar20,false);
                local_c0 = (undefined1 (*) [16])0x0;
              }
              else {
LAB_00106189:
                if ((plVar25 != (long *)0x0) && (bVar5)) {
                  if ((undefined1 (*) [16])plVar25[3] == pauVar20) {
                    lVar15 = plVar25[1];
                    if (*(long **)*pauVar20 == plVar25) {
                      *(long *)*pauVar20 = lVar15;
                    }
                    lVar3 = plVar25[2];
                    if (*(long **)(*pauVar20 + 8) == plVar25) {
                      *(long *)(*pauVar20 + 8) = lVar3;
                    }
                    if (lVar3 != 0) {
                      *(long *)(lVar3 + 8) = lVar15;
                      lVar15 = plVar25[1];
                    }
                    if (lVar15 != 0) {
                      *(long *)(lVar15 + 0x10) = lVar3;
                    }
                    pauVar28 = pauVar20;
                    if (*plVar25 != 0) {
                      LOCK();
                      plVar2 = (long *)(*plVar25 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      pauVar28 = local_c0;
                      if (*plVar2 == 0) {
                        lVar15 = *plVar25;
                        *plVar25 = 0;
                        Memory::free_static((void *)(lVar15 + -0x10),false);
                        pauVar28 = local_c0;
                      }
                    }
                    Memory::free_static(plVar25,false);
                    *(int *)pauVar20[1] = *(int *)pauVar20[1] + -1;
                    pauVar20 = pauVar28;
                  }
                  else {
                    _err_print_error("erase","./core/templates/list.h",0xe7,
                                     "Condition \"p_I->data != this\" is true. Returning: false");
                  }
                  if (*(int *)pauVar20[1] == 0) {
                    Memory::free_static(pauVar20,false);
                    local_c0 = (undefined1 (*) [16])0x0;
                  }
                }
              }
              goto LAB_00105ff9;
            }
            _err_print_error("parse_requirements","editor/export/codesign.cpp",0x2f9,
                             "Condition \"!E->next() || !E->next()->next()\" is true. Returning: list"
                             ,"CodeSign/Requirements: Invalid token sequence.",0,0);
            goto LAB_001049f0;
          }
        }
        else {
          if ((*(long *)(pCVar14 + 8) == 0) || (*(long *)(*(long *)(pCVar14 + 8) + 8) == 0)) {
            _err_print_error("parse_requirements","editor/export/codesign.cpp",0x2f3,
                             "Condition \"!E->next() || !E->next()->next()\" is true. Returning: list"
                             ,"CodeSign/Requirements: Invalid token sequence.",0,0);
            goto LAB_001049f0;
          }
          local_88 = (char *)0x0;
          local_78.tm_hour = 1;
          local_78.tm_mday = 0;
          local_78._0_8_ = &_LC155;
          String::parse_latin1((StrRange *)&local_88);
          local_98 = 0;
          local_78._0_8_ = " and ";
          local_78.tm_hour = 5;
          local_78.tm_mday = 0;
          String::parse_latin1((StrRange *)&local_98);
          operator+((char *)&local_a0,(String *)&_LC157);
          String::operator+((String *)&local_90,(String *)&local_a0);
          String::operator+((String *)&local_78,(String *)&local_90);
          String::operator+((String *)&local_a8,(String *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          pauVar20 = local_c0;
          this_00 = *(CowData<char32_t> **)(pCVar14 + 8);
          this = *(CowData<char32_t> **)(this_00 + 8);
          bVar30 = local_c0 != (undefined1 (*) [16])0x0;
          if ((this == (CowData<char32_t> *)0x0) || (!bVar30)) {
LAB_00105feb:
            if ((this_00 != (CowData<char32_t> *)0x0) && (bVar30)) {
              if (pauVar20 == *(undefined1 (**) [16])(this_00 + 0x18)) {
                lVar15 = *(long *)(this_00 + 8);
                if (*(CowData<char32_t> **)*pauVar20 == this_00) {
                  *(long *)*pauVar20 = lVar15;
                }
                lVar3 = *(long *)(this_00 + 0x10);
                if (*(CowData<char32_t> **)(*pauVar20 + 8) == this_00) {
                  *(long *)(*pauVar20 + 8) = lVar3;
                }
                if (lVar3 != 0) {
                  *(long *)(lVar3 + 8) = lVar15;
                  lVar15 = *(long *)(this_00 + 8);
                }
                if (lVar15 != 0) {
                  *(long *)(lVar15 + 0x10) = lVar3;
                }
                CowData<char32_t>::_unref(this_00);
                Memory::free_static(this_00,false);
                iVar11 = *(int *)pauVar20[1] + -1;
                *(int *)pauVar20[1] = iVar11;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false");
                iVar11 = *(int *)pauVar20[1];
              }
              if (iVar11 == 0) goto LAB_001099cf;
            }
          }
          else {
            if (local_c0 == *(undefined1 (**) [16])(this + 0x18)) {
              lVar15 = *(long *)(this + 8);
              if (this == *(CowData<char32_t> **)*local_c0) {
                *(long *)*local_c0 = lVar15;
              }
              lVar3 = *(long *)(this + 0x10);
              if (this == *(CowData<char32_t> **)(*local_c0 + 8)) {
                *(long *)(*local_c0 + 8) = lVar3;
              }
              if (lVar3 != 0) {
                *(long *)(lVar3 + 8) = lVar15;
                lVar15 = *(long *)(this + 8);
              }
              if (lVar15 != 0) {
                *(long *)(lVar15 + 0x10) = lVar3;
              }
              CowData<char32_t>::_unref(this);
              Memory::free_static(this,false);
              iVar11 = *(int *)pauVar20[1] + -1;
              *(int *)pauVar20[1] = iVar11;
            }
            else {
              _err_print_error("erase","./core/templates/list.h",0xe7,
                               "Condition \"p_I->data != this\" is true. Returning: false");
              iVar11 = *(int *)pauVar20[1];
            }
            if (iVar11 != 0) {
              this_00 = *(CowData<char32_t> **)(pCVar14 + 8);
              goto LAB_00105feb;
            }
LAB_001099cf:
            Memory::free_static(pauVar20,false);
            local_c0 = (undefined1 (*) [16])0x0;
          }
LAB_00105ff9:
          if (*(long *)pCVar14 != local_a8) {
            CowData<char32_t>::_ref(pCVar14,(CowData *)&local_a8);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        }
        pCVar14 = *(CowData<char32_t> **)(pCVar14 + 0x10);
      } while (pCVar14 != (CowData<char32_t> *)0x0);
      if (local_c0 == (undefined1 (*) [16])0x0) goto LAB_0010a0e8;
    }
    if (*(int *)local_c0[1] == 1) {
      uVar24 = uVar24 + 1;
      String::operator+((String *)&local_78,(String *)&local_c8);
      Vector<String>::push_back(in_RDI,(String *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) <=
          uVar24) goto LAB_00104a02;
      piVar12 = *(int **)(in_RSI + 0x188);
      goto LAB_0010495c;
    }
  }
LAB_0010a0e8:
  _err_print_error("parse_requirements","editor/export/codesign.cpp",0x304,
                   "Method/function failed. Returning: list",
                   "CodeSign/Requirements: Invalid token sequence.",0,0);
LAB_001049f0:
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_c0);
  goto LAB_001049fa;
}



/* CowData<CodeSignCodeResources::CRRule>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<CodeSignCodeResources::CRRule>::_copy_on_write(CowData<CodeSignCodeResources::CRRule> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData<char32_t> *this_00;
  ulong uVar4;
  CowData *pCVar5;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar4 = lVar1 * 0x18 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pCVar5 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar3));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar5 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar5);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar5 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar5 + 8);
        }
        lVar6 = lVar6 + 1;
        *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(pCVar5 + 0x10);
        this_00[0x14] = *(CowData<char32_t> *)(pCVar5 + 0x14);
        this_00 = this_00 + 0x18;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<CodeSignCodeResources::CRFile>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<CodeSignCodeResources::CRFile>::_copy_on_write(CowData<CodeSignCodeResources::CRFile> *this)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  CowData *pCVar6;
  ulong uVar7;
  long lVar8;
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
  if (lVar2 * 0x28 != 0) {
    uVar7 = lVar2 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        pCVar6 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar5));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar6 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar6);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar6 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar6 + 8);
        }
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(pCVar6 + 0x10) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x10,pCVar6 + 0x10);
        }
        uVar1 = *(undefined2 *)(pCVar6 + 0x18);
        *(undefined8 *)(this_00 + 0x20) = 0;
        lVar3 = *(long *)(pCVar6 + 0x20);
        *(undefined2 *)(this_00 + 0x18) = uVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x20,pCVar6 + 0x20);
        }
        lVar8 = lVar8 + 1;
        this_00 = this_00 + 0x28;
      } while (lVar2 != lVar8);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<Ref<CodeSignBlob> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<CodeSignBlob>>::_copy_on_write(CowData<Ref<CodeSignBlob>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
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
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* Vector<CodeSignCodeResources::CRRule>::push_back(CodeSignCodeResources::CRRule) [clone .isra.0]
    */

void __thiscall
Vector<CodeSignCodeResources::CRRule>::push_back
          (Vector<CodeSignCodeResources::CRRule> *this,CowData *param_2)

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
  iVar1 = CowData<CodeSignCodeResources::CRRule>::resize<false>
                    ((CowData<CodeSignCodeResources::CRRule> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<CodeSignCodeResources::CRRule>::_copy_on_write
                  ((CowData<CodeSignCodeResources::CRRule> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 0x18);
        if (*(long *)this_00 != *(long *)param_2) {
          CowData<char32_t>::_ref(this_00,param_2);
        }
        if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
          CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
        }
        *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(param_2 + 0x10);
        this_00[0x14] = *(CowData<char32_t> *)(param_2 + 0x14);
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



/* CodeSignCodeResources::add_rule2(String const&, String const&, int, bool) */

void __thiscall
CodeSignCodeResources::add_rule2
          (CodeSignCodeResources *this,String *param_1,String *param_2,int param_3,bool param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_48;
  long lStack_40;
  int local_38;
  undefined1 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  lStack_40 = 0;
  local_38 = param_3;
  local_34 = param_4;
  if (*(long *)param_1 == 0) {
    if (*(long *)param_2 != 0) goto LAB_0010b7c3;
    Vector<CodeSignCodeResources::CRRule>::push_back
              ((Vector<CodeSignCodeResources::CRRule> *)(this + 0x10),&local_48,0);
  }
  else {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_0010b7b9;
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
      local_48 = *(long *)param_1;
    }
LAB_0010b7b9:
    lStack_40 = 0;
    if (*(long *)param_2 != 0) {
LAB_0010b7c3:
      lStack_40 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_40,(CowData *)param_2);
    }
    lVar2 = lStack_40;
    Vector<CodeSignCodeResources::CRRule>::push_back
              ((Vector<CodeSignCodeResources::CRRule> *)(this + 0x10));
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_40 + -0x10),false);
      }
    }
  }
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_48 + -0x10),false);
        return;
      }
      goto LAB_0010b88c;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b88c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignCodeResources::add_rule1(String const&, String const&, int, bool) */

void __thiscall
CodeSignCodeResources::add_rule1
          (CodeSignCodeResources *this,String *param_1,String *param_2,int param_3,bool param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_48;
  long lStack_40;
  int local_38;
  undefined1 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  lStack_40 = 0;
  local_38 = param_3;
  local_34 = param_4;
  if (*(long *)param_1 == 0) {
    if (*(long *)param_2 != 0) goto LAB_0010b90f;
    Vector<CodeSignCodeResources::CRRule>::push_back((Vector<CodeSignCodeResources::CRRule> *)this);
  }
  else {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_0010b905;
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
      local_48 = *(long *)param_1;
    }
LAB_0010b905:
    lStack_40 = 0;
    if (*(long *)param_2 != 0) {
LAB_0010b90f:
      lStack_40 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_40,(CowData *)param_2);
    }
    lVar2 = lStack_40;
    Vector<CodeSignCodeResources::CRRule>::push_back((Vector<CodeSignCodeResources::CRRule> *)this);
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(lStack_40 + -0x10),false);
      }
    }
  }
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_48 + -0x10),false);
        return;
      }
      goto LAB_0010b9dc;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b9dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<CodeSignCodeResources::CRFile>::push_back(CodeSignCodeResources::CRFile) [clone .isra.0]
    */

void __thiscall
Vector<CodeSignCodeResources::CRFile>::push_back
          (Vector<CodeSignCodeResources::CRFile> *this,CowData *param_2)

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
  iVar1 = CowData<CodeSignCodeResources::CRFile>::resize<false>
                    ((CowData<CodeSignCodeResources::CRFile> *)(this + 8),lVar2);
  if (iVar1 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar3 = -1;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8);
    lVar3 = lVar2 + -1;
    if (-1 < lVar3) {
      CowData<CodeSignCodeResources::CRFile>::_copy_on_write
                ((CowData<CodeSignCodeResources::CRFile> *)(this + 8));
      this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 0x28);
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,param_2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
      }
      if (*(long *)(this_00 + 0x10) != *(long *)(param_2 + 0x10)) {
        CowData<char32_t>::_ref(this_00 + 0x10,param_2 + 0x10);
      }
      *(undefined2 *)(this_00 + 0x18) = *(undefined2 *)(param_2 + 0x18);
      if (*(long *)(this_00 + 0x20) == *(long *)(param_2 + 0x20)) {
        return;
      }
      CowData<char32_t>::_ref(this_00 + 0x20,param_2 + 0x20);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false);
  return;
}



/* CodeSignCodeResources::add_nested_file(String const&, String const&, String const&) */

undefined8 __thiscall
CodeSignCodeResources::add_nested_file
          (CodeSignCodeResources *this,String *param_1,String *param_2,String *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  Object *pOVar9;
  char *pcVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  CowData<char32_t> *local_488;
  CowData<char32_t> *local_478;
  CowData<char32_t> *local_470;
  Object *local_460;
  char *local_458;
  long local_450;
  long local_448;
  long local_440;
  char *local_438;
  char *local_430;
  Vector<String> local_428 [8];
  long local_420;
  long local_418;
  long local_410;
  long local_408;
  long local_400;
  undefined1 local_3f8 [16];
  long local_3e8;
  undefined2 local_3e0;
  long local_3d8 [2];
  char *local_3c8;
  long local_3c0;
  undefined8 local_3b8;
  undefined2 local_3b0;
  undefined8 local_3a8 [2];
  undefined **local_398 [49];
  undefined8 local_210;
  undefined **local_208 [48];
  Object *local_88;
  undefined1 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::create(&local_460,2);
  if (local_460 == (Object *)0x0) {
    uVar20 = 0;
    _err_print_error(_LC163,"editor/export/codesign.cpp",0xd2,
                     "Condition \"da.is_null()\" is true. Returning: false",0,0);
    goto LAB_0010c9a6;
  }
  local_420 = 0;
  cVar12 = LipO::is_lipo(param_3);
  if (cVar12 == '\0') {
    cVar12 = MachO::is_macho(param_3);
    if (cVar12 != '\0') {
      local_3c8 = (char *)0x0;
      if (*(long *)param_3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_3c8,(CowData *)param_3);
      }
      Vector<String>::push_back(local_428,(CowData<char32_t> *)&local_3c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c8);
    }
LAB_0010bef7:
    local_3e8 = 0;
    local_3d8[0] = 0;
    local_3f8 = (undefined1  [16])0x0;
    plVar1 = (long *)(*(long *)param_2 + -0x10);
    if (*(long *)param_2 != 0) {
      do {
        lVar16 = *plVar1;
        if (lVar16 == 0) goto LAB_0010bf4d;
        LOCK();
        lVar17 = *plVar1;
        bVar21 = lVar16 == lVar17;
        if (bVar21) {
          *plVar1 = lVar16 + 1;
          lVar17 = lVar16;
        }
        UNLOCK();
      } while (!bVar21);
      if (lVar17 != -1) {
        local_3f8._8_8_ = 0;
        local_3f8._0_8_ = *(ulong *)param_2;
      }
    }
LAB_0010bf4d:
    lVar16 = 0;
    local_3e0 = 0x100;
    lVar17 = local_420;
    while (local_420 = lVar17, lVar17 != 0) {
      if (*(long *)(lVar17 + -8) <= lVar16) goto LAB_0010c618;
      RefCounted::RefCounted((RefCounted *)local_208);
      local_68 = 0xffffffffffffffff;
      local_78 = (undefined1  [16])0x0;
      local_50 = (undefined1  [16])0x0;
      lVar15 = *(long *)(lVar17 + -8);
      local_208[0] = &PTR__initialize_classv_0011d440;
      local_88 = (Object *)0x0;
      local_80 = 0;
      local_60 = 0;
      local_58 = 0;
      lVar19 = lVar16;
      if (lVar15 <= lVar16) {
LAB_0010cc5d:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar19,lVar15,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      cVar12 = MachO::open_file((String *)local_208);
      if (cVar12 == '\0') {
        lVar16 = 0;
        if (1 < *(long *)(lVar17 + -8)) {
          do {
            pOVar9 = local_460;
            pcVar3 = *(code **)(*(long *)local_460 + 0x208);
            local_3c8 = (char *)0x0;
            if (*(long *)(lVar17 + lVar16 * 8) != 0) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)&local_3c8,(CowData *)(lVar17 + lVar16 * 8));
            }
            lVar16 = lVar16 + 1;
            (*pcVar3)(pOVar9,(CowData<char32_t> *)&local_3c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c8);
          } while (lVar16 < *(long *)(lVar17 + -8));
        }
        _err_print_error(_LC163,"editor/export/codesign.cpp",0xef,
                         "Method/function failed. Returning: false",
                         "CodeSign/CodeResources: Invalid executable file.",0,0);
LAB_0010c914:
        local_208[0] = &PTR__initialize_classv_0011d440;
        if (((local_88 != (Object *)0x0) &&
            (cVar12 = RefCounted::unreference(), pOVar9 = local_88, cVar12 != '\0')) &&
           (cVar12 = predelete_handler(local_88), cVar12 != '\0')) {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
        uVar20 = 0;
        local_208[0] = &PTR__initialize_classv_0011d180;
        Object::~Object((Object *)local_208);
        goto LAB_0010c97b;
      }
      MachO::get_cdhash_sha256();
      if ((local_410 == 0) || (*(long *)(local_410 + -8) != 0x20)) {
        MachO::get_cdhash_sha1();
        lVar19 = local_3c0;
        lVar15 = local_410;
        if (local_410 == local_3c0) {
          if (local_3c0 != 0) {
            LOCK();
            plVar1 = (long *)(local_3c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            lVar11 = local_410;
            if (*plVar1 == 0) {
              local_3c0 = 0;
              Memory::free_static((void *)(lVar19 + -0x10),false);
              lVar11 = local_410;
            }
            goto joined_r0x0010c824;
          }
        }
        else {
          lVar11 = local_3c0;
          if (local_410 != 0) {
            LOCK();
            plVar1 = (long *)(local_410 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            lVar11 = local_3c0;
            if (*plVar1 == 0) {
              local_410 = 0;
              Memory::free_static((void *)(lVar15 + -0x10),false);
              lVar11 = local_3c0;
            }
          }
joined_r0x0010c824:
          local_410 = lVar11;
          if ((local_410 != 0) && (*(long *)(local_410 + -8) == 0x14)) goto LAB_0010c091;
        }
        lVar16 = 0;
        if (1 < *(long *)(lVar17 + -8)) {
          do {
            pcVar3 = *(code **)(*(long *)local_460 + 0x208);
            local_3c8 = (char *)0x0;
            lVar15 = *(long *)(lVar17 + lVar16 * 8);
            plVar1 = (long *)(lVar15 + -0x10);
            if (lVar15 != 0) {
              do {
                lVar15 = *plVar1;
                if (lVar15 == 0) goto LAB_0010c88f;
                LOCK();
                lVar19 = *plVar1;
                bVar21 = lVar15 == lVar19;
                if (bVar21) {
                  *plVar1 = lVar15 + 1;
                  lVar19 = lVar15;
                }
                UNLOCK();
              } while (!bVar21);
              if (lVar19 != -1) {
                local_3c8 = *(char **)(lVar17 + lVar16 * 8);
              }
            }
LAB_0010c88f:
            (*pcVar3)();
            pcVar2 = local_3c8;
            if (local_3c8 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_3c8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_3c8 = (char *)0x0;
                Memory::free_static(pcVar2 + -0x10,false);
              }
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(long *)(lVar17 + -8));
        }
        _err_print_error(_LC163,"editor/export/codesign.cpp",0xf6,
                         "Method/function failed. Returning: false",
                         "CodeSign/CodeResources: Unsigned nested executable file.",0,0);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_410);
        goto LAB_0010c914;
      }
LAB_0010c091:
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_410,0x14);
      CryptoCore::b64_encode_str((uchar *)&local_3c8,(int)local_410);
      pcVar2 = local_3c8;
      uVar20 = local_3f8._8_8_;
      if ((char *)local_3f8._8_8_ == local_3c8) {
        if ((char *)local_3f8._8_8_ != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_3f8._8_8_ + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_3c8 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
      }
      else {
        if ((char *)local_3f8._8_8_ != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_3f8._8_8_ + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_3f8._8_8_ = 0;
            Memory::free_static((char *)(uVar20 + -0x10),false);
          }
        }
        local_3f8._8_8_ = local_3c8;
      }
      MachO::get_requirements();
      local_458 = (char *)0x0;
      if ((local_400 == 0) || (*(long *)(local_400 + -8) < 9)) {
LAB_0010c146:
        local_430 = (char *)0x0;
        local_3c8 = "\"";
        local_3c0 = 1;
        String::parse_latin1((StrRange *)&local_430);
        String::hex_encode_buffer((uchar *)&local_440,(int)local_410);
        operator+((char *)&local_438,(String *)"cdhash H\"");
        String::operator+((String *)&local_3c8,(String *)&local_438);
        pcVar10 = local_3c8;
        pcVar2 = local_458;
        if (local_458 == local_3c8) {
          if (local_458 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_458 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_3c8 = (char *)0x0;
              Memory::free_static(pcVar10 + -0x10,false);
            }
          }
        }
        else {
          if (local_458 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_458 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_458 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
            }
          }
          local_458 = local_3c8;
        }
        pcVar2 = local_438;
        if (local_438 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_438 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_438 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
        lVar17 = local_440;
        if (local_440 != 0) {
          LOCK();
          plVar1 = (long *)(local_440 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_440 = 0;
            Memory::free_static((void *)(lVar17 + -0x10),false);
          }
        }
        pcVar2 = local_430;
        if (local_430 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_430 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_430 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
      }
      else {
        RefCounted::RefCounted((RefCounted *)local_398);
        local_210 = 0;
        local_398[0] = &PTR__initialize_classv_0011d5a0;
        if (local_400 != 0) {
          CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&local_210,(CowData *)&local_400);
        }
        CodeSignRequirements::parse_requirements();
        lVar17 = local_3c0;
        for (lVar19 = 0; (local_3c0 = lVar17, lVar17 != 0 && (lVar19 < *(long *)(lVar17 + -8)));
            lVar19 = lVar19 + 1) {
          pcVar2 = (char *)(lVar17 + lVar19 * 8);
          cVar12 = String::begins_with(pcVar2);
          if (cVar12 != '\0') {
            lVar15 = *(long *)(lVar17 + -8);
            if (lVar15 <= lVar19) goto LAB_0010cc5d;
            String::replace((char *)&local_430,pcVar2);
            pcVar10 = local_430;
            pcVar2 = local_458;
            if (local_458 == local_430) {
              if (local_458 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_458 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_430 = (char *)0x0;
                  Memory::free_static(pcVar10 + -0x10,false);
                }
              }
            }
            else {
              if (local_458 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_458 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_458 = (char *)0x0;
                  Memory::free_static(pcVar2 + -0x10,false);
                }
              }
              local_458 = local_430;
            }
          }
          lVar17 = local_3c0;
        }
        CowData<String>::_unref((CowData<String> *)&local_3c0);
        local_398[0] = &PTR__initialize_classv_0011d5a0;
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_210);
        local_398[0] = &PTR__initialize_classv_0011d180;
        Object::~Object((Object *)local_398);
        if ((local_458 == (char *)0x0) || (*(uint *)(local_458 + -8) < 2)) goto LAB_0010c146;
      }
      cVar12 = is_print_verbose_enabled();
      if (cVar12 != '\0') {
        local_438 = (char *)0x0;
        plVar1 = (long *)(local_458 + -0x10);
        if (local_458 != (char *)0x0) {
          do {
            lVar17 = *plVar1;
            if (lVar17 == 0) goto LAB_0010c2d3;
            LOCK();
            lVar15 = *plVar1;
            bVar21 = lVar17 == lVar15;
            if (bVar21) {
              *plVar1 = lVar17 + 1;
              lVar15 = lVar17;
            }
            UNLOCK();
          } while (!bVar21);
          if (lVar15 != -1) {
            local_438 = local_458;
          }
        }
LAB_0010c2d3:
        local_440 = 0;
        plVar1 = (long *)(local_3f8._8_8_ + -0x10);
        if (local_3f8._8_8_ != 0) {
          do {
            lVar17 = *plVar1;
            if (lVar17 == 0) goto LAB_0010c313;
            LOCK();
            lVar15 = *plVar1;
            bVar21 = lVar17 == lVar15;
            if (bVar21) {
              *plVar1 = lVar17 + 1;
              lVar15 = lVar17;
            }
            UNLOCK();
          } while (!bVar21);
          if (lVar15 != -1) {
            local_440 = local_3f8._8_8_;
          }
        }
LAB_0010c313:
        uVar14 = MachO::get_cputype();
        local_448 = 0;
        plVar1 = (long *)(local_3f8._0_8_ + -0x10);
        if (local_3f8._0_8_ != 0) {
          do {
            lVar17 = *plVar1;
            if (lVar17 == 0) goto LAB_0010c35d;
            LOCK();
            lVar15 = *plVar1;
            bVar21 = lVar17 == lVar15;
            if (bVar21) {
              *plVar1 = lVar17 + 1;
              lVar15 = lVar17;
            }
            UNLOCK();
          } while (!bVar21);
          if (lVar15 != -1) {
            local_448 = local_3f8._0_8_;
          }
        }
LAB_0010c35d:
        local_450 = 0;
        local_3c8 = 
        "CodeSign/CodeResources: Nested object %s (cputype: %d) cdhash:%s designated rq:%s";
        local_3c0 = 0x51;
        String::parse_latin1((StrRange *)&local_450);
        vformat<String,unsigned_int,String,String>
                  ((String *)&local_430,(StrRange *)&local_450,&local_448,uVar14,&local_440);
        Variant::Variant((Variant *)local_398,(String *)&local_430);
        stringify_variants((Variant *)&local_3c8);
        __print_line((String *)&local_3c8);
        pcVar2 = local_3c8;
        if (local_3c8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_3c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_3c8 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[(int)local_398[0]] != '\0') {
          Variant::_clear_internal();
        }
        pcVar2 = local_430;
        if (local_430 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_430 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_430 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
        lVar17 = local_450;
        if (local_450 != 0) {
          LOCK();
          plVar1 = (long *)(local_450 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_450 = 0;
            Memory::free_static((void *)(lVar17 + -0x10),false);
          }
        }
        lVar17 = local_448;
        if (local_448 != 0) {
          LOCK();
          plVar1 = (long *)(local_448 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_448 = 0;
            Memory::free_static((void *)(lVar17 + -0x10),false);
          }
        }
        lVar17 = local_440;
        if (local_440 != 0) {
          LOCK();
          plVar1 = (long *)(local_440 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_440 = 0;
            Memory::free_static((void *)(lVar17 + -0x10),false);
          }
        }
        pcVar2 = local_438;
        if (local_438 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_438 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_438 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
      }
      cVar12 = String::operator!=((String *)local_3d8,(String *)&local_458);
      if (cVar12 != '\0') {
        if (lVar16 != 0) {
          String::operator+=((String *)local_3d8," or ");
        }
        String::operator+=((String *)local_3d8,(String *)&local_458);
      }
      pcVar2 = local_458;
      if (local_458 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_458 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_458 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar17 = local_400;
      if (local_400 != 0) {
        LOCK();
        plVar1 = (long *)(local_400 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_400 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      lVar17 = local_410;
      if (local_410 != 0) {
        LOCK();
        plVar1 = (long *)(local_410 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_410 = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      local_208[0] = &PTR__initialize_classv_0011d440;
      if (((local_88 != (Object *)0x0) &&
          (cVar12 = RefCounted::unreference(), pOVar9 = local_88, cVar12 != '\0')) &&
         (cVar12 = predelete_handler(local_88), cVar12 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      local_208[0] = &PTR__initialize_classv_0011d180;
      lVar16 = lVar16 + 1;
      Object::~Object((Object *)local_208);
      lVar17 = local_420;
    }
    lVar17 = 0;
LAB_0010c618:
    local_3c8 = (char *)0x0;
    if (local_3f8._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_3c8,(CowData *)local_3f8);
    }
    local_3c0 = 0;
    if (local_3f8._8_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_3c0,(CowData *)(local_3f8 + 8));
    }
    local_478 = (CowData<char32_t> *)&local_3c0;
    local_3b8 = 0;
    if (local_3e8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_3b8,(CowData *)&local_3e8);
    }
    local_470 = (CowData<char32_t> *)&local_3b8;
    local_3a8[0] = 0;
    local_3b0 = local_3e0;
    if (local_3d8[0] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_3a8,(CowData *)local_3d8);
    }
    Vector<CodeSignCodeResources::CRFile>::push_back
              ((Vector<CodeSignCodeResources::CRFile> *)(this + 0x30));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_3a8);
    CowData<char32_t>::_unref(local_470);
    CowData<char32_t>::_unref(local_478);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c8);
    if ((lVar17 != 0) && (1 < *(long *)(lVar17 + -8))) {
      lVar16 = 0;
      do {
        pOVar9 = local_460;
        pcVar3 = *(code **)(*(long *)local_460 + 0x208);
        local_3c8 = (char *)0x0;
        if (*(long *)(lVar17 + lVar16 * 8) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_3c8,(CowData *)(lVar17 + lVar16 * 8));
        }
        lVar16 = lVar16 + 1;
        (*pcVar3)(pOVar9);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c8);
      } while (lVar16 < *(long *)(lVar17 + -8));
    }
    uVar20 = 1;
LAB_0010c97b:
    local_488 = (CowData<char32_t> *)&local_3e8;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_3d8);
    CowData<char32_t>::_unref(local_488);
    CowData<char32_t>::_unref((CowData<char32_t> *)(local_3f8 + 8));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_3f8);
  }
  else {
    EditorPaths::get_temp_dir();
    local_3c8 = "_lipo";
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_3f8._8_8_;
    local_3f8 = auVar7 << 0x40;
    local_3c0 = 5;
    String::parse_latin1((StrRange *)local_3f8);
    String::path_join((String *)&local_418);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_3f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_408);
    iVar13 = (**(code **)(*(long *)local_460 + 0x1c0))(local_460,(String *)&local_418);
    if (iVar13 == 0) {
      RefCounted::RefCounted((RefCounted *)local_208);
      local_208[0] = (undefined **)LipO::extract_arch;
      uVar18 = 0;
      local_88 = (Object *)0x0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_78._8_8_;
      local_78 = auVar8 << 0x40;
      cVar12 = LipO::open_file((String *)local_208);
      if (cVar12 != '\0') {
LAB_0010be7b:
        iVar13 = LipO::get_arch_count();
        if ((int)uVar18 < iVar13) {
          itos((long)&local_408);
          operator+((char *)local_3f8,(String *)"_rqexe_");
          String::path_join((String *)&local_3c8);
          cVar12 = LipO::extract_arch((int)(RefCounted *)local_208,(String *)(ulong)uVar18);
          pcVar2 = local_3c8;
          if (local_3c8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_3c8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_3c8 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
            }
          }
          uVar20 = local_3f8._0_8_;
          if (local_3f8._0_8_ != 0) {
            LOCK();
            plVar1 = (long *)(local_3f8._0_8_ + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              auVar4._8_8_ = 0;
              auVar4._0_8_ = local_3f8._8_8_;
              local_3f8 = auVar4 << 0x40;
              Memory::free_static((void *)(uVar20 + -0x10),false);
            }
          }
          lVar16 = local_408;
          if (local_408 != 0) {
            LOCK();
            plVar1 = (long *)(local_408 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_408 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          lVar16 = local_420;
          if (cVar12 != '\0') goto code_r0x0010bda2;
          if ((local_420 != 0) && (1 < *(long *)(local_420 + -8))) {
            lVar17 = 0;
            do {
              pOVar9 = local_460;
              pcVar3 = *(code **)(*(long *)local_460 + 0x208);
              local_3c8 = (char *)0x0;
              if (*(long *)(lVar16 + lVar17 * 8) != 0) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)&local_3c8,(CowData *)(lVar16 + lVar17 * 8));
              }
              (*pcVar3)(pOVar9);
              pcVar2 = local_3c8;
              if (local_3c8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_3c8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_3c8 = (char *)0x0;
                  Memory::free_static(pcVar2 + -0x10,false);
                }
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 < *(long *)(lVar16 + -8));
          }
          _err_print_error(_LC163,"editor/export/codesign.cpp",0xde,
                           "Method/function failed. Returning: false",
                           "CodeSign/CodeResources: Failed to extract thin binary.",0,0);
          LipO::~LipO((LipO *)local_208);
          goto LAB_0010cd83;
        }
      }
      LipO::~LipO((LipO *)local_208);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_418);
      goto LAB_0010bef7;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_3f8._8_8_;
    local_3f8 = auVar6 << 0x40;
    if (local_418 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_3f8,(CowData *)&local_418);
    }
    local_408 = 0;
    local_3c8 = "CodeSign/CodeResources: Failed to create \"%s\" subfolder.";
    local_3c0 = 0x38;
    String::parse_latin1((StrRange *)&local_408);
    vformat<String>((String *)&local_3c8,(CowData<char32_t> *)&local_408,(StrRange *)local_3f8);
    _err_print_error(_LC163,"editor/export/codesign.cpp",0xd8,
                     "Condition \"err != OK\" is true. Returning: false",(String *)&local_3c8,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_408);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_3f8);
LAB_0010cd83:
    uVar20 = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_418);
  }
  CowData<String>::_unref((CowData<String> *)&local_420);
LAB_0010c9a6:
  if (((local_460 != (Object *)0x0) && (cVar12 = RefCounted::unreference(), cVar12 != '\0')) &&
     (cVar12 = predelete_handler(local_460), cVar12 != '\0')) {
    (**(code **)(*(long *)local_460 + 0x140))(local_460);
    Memory::free_static(local_460,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010bda2:
  itos((long)&local_408);
  operator+((char *)local_3f8,(String *)"_rqexe_");
  String::path_join((String *)&local_3c8);
  Vector<String>::push_back(local_428);
  pcVar2 = local_3c8;
  if (local_3c8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_3c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_3c8 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  uVar20 = local_3f8._0_8_;
  if (local_3f8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_3f8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_3f8._8_8_;
      local_3f8 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar20 + -0x10),false);
    }
  }
  lVar16 = local_408;
  if (local_408 != 0) {
    LOCK();
    plVar1 = (long *)(local_408 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_408 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  uVar18 = uVar18 + 1;
  goto LAB_0010be7b;
}



/* CodeSignSuperBlob::add_blob(Ref<CodeSignBlob> const&) [clone .part.0] */

undefined8 __thiscall CodeSignSuperBlob::add_blob(CodeSignSuperBlob *this,Ref *param_1)

{
  undefined8 *puVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long lVar6;
  long lVar7;
  
  pOVar5 = *(Object **)param_1;
  if ((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    pOVar5 = (Object *)0x0;
  }
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar4 = CowData<Ref<CodeSignBlob>>::resize<false>((CowData<Ref<CodeSignBlob>> *)(this + 8),lVar6);
  if (iVar4 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar7 = -1;
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 8) + -8);
      lVar7 = lVar6 + -1;
      if (-1 < lVar7) {
        CowData<Ref<CodeSignBlob>>::_copy_on_write((CowData<Ref<CodeSignBlob>> *)(this + 8));
        puVar1 = (undefined8 *)(*(long *)(this + 8) + lVar7 * 8);
        pOVar2 = (Object *)*puVar1;
        if (pOVar2 != pOVar5) {
          *puVar1 = pOVar5;
          if (pOVar5 == (Object *)0x0) {
            if (pOVar2 == (Object *)0x0) {
              return 1;
            }
            cVar3 = RefCounted::unreference();
            if (cVar3 == '\0') {
              return 1;
            }
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 == '\0') {
              return 1;
            }
          }
          else {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              *puVar1 = 0;
            }
            if (((pOVar2 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
               (cVar3 = predelete_handler(pOVar2), cVar3 == '\0')) goto LAB_0010d0dd;
          }
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
        goto LAB_0010d0d8;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010d0d8:
  if (pOVar5 == (Object *)0x0) {
    return 1;
  }
LAB_0010d0dd:
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
    return 1;
  }
  return 1;
}



/* CodeSignSuperBlob::add_blob(Ref<CodeSignBlob> const&) */

undefined8 __thiscall CodeSignSuperBlob::add_blob(CodeSignSuperBlob *this,Ref *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)param_1 != 0) {
    uVar1 = add_blob(this,param_1);
    return uVar1;
  }
  return 0;
}



/* CodeSignCodeResources::match_rules1(String const&) const */

undefined4 __thiscall
CodeSignCodeResources::match_rules1(CodeSignCodeResources *this,String *param_1)

{
  int iVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  undefined4 local_1f4;
  Object *local_1e0;
  RegEx local_1d8 [408];
  long local_40;
  
  lVar7 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 == 0) {
LAB_0010d4c8:
    local_1f4 = 0;
  }
  else {
    local_1f4 = 0;
    lVar5 = 0;
    iVar9 = 0;
    do {
      if (*(long *)(lVar7 + -8) <= lVar5) break;
      lVar6 = lVar5 * 0x18;
      RegEx::RegEx(local_1d8,(String *)(lVar7 + lVar6));
      RegEx::search((String *)&local_1e0,(int)local_1d8,(int)param_1);
      if (local_1e0 == (Object *)0x0) goto LAB_0010d350;
      cVar4 = RefCounted::unreference();
      pOVar3 = local_1e0;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_1e0);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))();
          Memory::free_static(pOVar3,false);
        }
      }
      lVar7 = *(long *)(this + 8);
      if (lVar7 == 0) goto LAB_0010d408;
      lVar8 = *(long *)(lVar7 + -8);
      if (lVar8 <= lVar5) goto LAB_0010d40b;
      cVar4 = String::operator==((String *)(lVar7 + 8 + lVar6),"omit");
      if (cVar4 != '\0') {
        RegEx::~RegEx(local_1d8);
        goto LAB_0010d4c8;
      }
      lVar7 = *(long *)(this + 8);
      if (lVar7 == 0) goto LAB_0010d408;
      lVar8 = *(long *)(lVar7 + -8);
      if (lVar8 <= lVar5) goto LAB_0010d40b;
      cVar4 = String::operator==((String *)(lVar7 + 8 + lVar6),"nested");
      lVar7 = *(long *)(this + 8);
      if (cVar4 != '\0') {
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + -8);
          if (lVar8 <= lVar5) goto LAB_0010d40b;
          iVar1 = *(int *)(lVar7 + 0x10 + lVar6);
          if (iVar9 <= iVar1) {
            local_1f4 = 2;
            iVar9 = iVar1;
          }
          goto LAB_0010d350;
        }
LAB_0010d408:
        lVar8 = 0;
LAB_0010d40b:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (lVar7 == 0) goto LAB_0010d408;
      lVar8 = *(long *)(lVar7 + -8);
      if (lVar8 <= lVar5) goto LAB_0010d40b;
      cVar4 = String::operator==((String *)(lVar7 + 8 + lVar6),"optional");
      lVar7 = *(long *)(this + 8);
      if (cVar4 == '\0') {
        if (lVar7 == 0) goto LAB_0010d408;
        lVar8 = *(long *)(lVar7 + -8);
        if (lVar8 <= lVar5) goto LAB_0010d40b;
        iVar1 = *(int *)(lVar7 + 0x10 + lVar6);
        if (iVar9 <= iVar1) {
          local_1f4 = 1;
          iVar9 = iVar1;
        }
      }
      else {
        if (lVar7 == 0) goto LAB_0010d408;
        lVar8 = *(long *)(lVar7 + -8);
        if (lVar8 <= lVar5) goto LAB_0010d40b;
        iVar1 = *(int *)(lVar7 + 0x10 + lVar6);
        if (iVar9 <= iVar1) {
          local_1f4 = 3;
          iVar9 = iVar1;
        }
      }
LAB_0010d350:
      lVar5 = lVar5 + 1;
      RegEx::~RegEx(local_1d8);
      lVar7 = *(long *)(this + 8);
    } while (lVar7 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1f4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignCodeResources::add_file1(String const&, String const&) */

undefined8 __thiscall
CodeSignCodeResources::add_file1(CodeSignCodeResources *this,String *param_1,String *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 local_a8 [16];
  long local_98;
  ushort local_90;
  long local_88 [2];
  char *local_78;
  long local_70;
  long local_68;
  ushort local_60;
  long local_58 [2];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = match_rules1(this,param_2);
  if ((uVar6 & 0xfffffffd) != 1) goto LAB_0010d964;
  local_98 = 0;
  local_88[0] = 0;
  local_a8 = (undefined1  [16])0x0;
  if (*(long *)param_2 == 0) {
    local_90 = (ushort)(uVar6 == 3);
    String::path_join((String *)&local_b0);
    hash_sha1_base64((String *)&local_78);
    if (local_78 != (char *)0x0) goto LAB_0010d615;
  }
  else {
    plVar1 = (long *)(*(long *)param_2 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_0010d573;
      LOCK();
      lVar7 = *plVar1;
      bVar8 = lVar2 == lVar7;
      if (bVar8) {
        *plVar1 = lVar2 + 1;
        lVar7 = lVar2;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar7 != -1) {
      local_a8._8_8_ = 0;
      local_a8._0_8_ = *(ulong *)param_2;
    }
LAB_0010d573:
    uVar3 = local_a8._8_8_;
    local_90 = (ushort)(uVar6 == 3);
    String::path_join((String *)&local_b0);
    hash_sha1_base64((String *)&local_78);
    pcVar4 = local_78;
    if (local_78 == (char *)uVar3) {
      if (uVar3 != 0) {
        LOCK();
        plVar1 = (long *)(uVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = (char *)0x0;
          Memory::free_static((void *)((long)pcVar4 + -0x10),false);
        }
      }
    }
    else {
      if (uVar3 != 0) {
        LOCK();
        plVar1 = (long *)(uVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_a8._8_8_ + -0x10),false);
        }
      }
LAB_0010d615:
      local_a8._8_8_ = local_78;
    }
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  cVar5 = is_print_verbose_enabled();
  if (cVar5 != '\0') {
    local_b8 = 0;
    plVar1 = (long *)(local_a8._8_8_ + -0x10);
    if (local_a8._8_8_ != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d68c;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        local_b8 = local_a8._8_8_;
      }
    }
LAB_0010d68c:
    local_c0 = 0;
    plVar1 = (long *)(local_a8._0_8_ + -0x10);
    if (local_a8._0_8_ != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d6c6;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        local_c0 = local_a8._0_8_;
      }
    }
LAB_0010d6c6:
    local_c8 = 0;
    local_78 = "CodeSign/CodeResources: File(V1) %s hash1:%s";
    local_70 = 0x2c;
    String::parse_latin1((StrRange *)&local_c8);
    vformat<String,String>((String *)&local_b0,&local_c8,&local_c0,&local_b8);
    Variant::Variant((Variant *)local_48,(String *)&local_b0);
    stringify_variants((Variant *)&local_78);
    __print_line((String *)&local_78);
    pcVar4 = local_78;
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar2 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  local_78 = (char *)0x0;
  if (local_a8._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)local_a8);
  }
  local_70 = 0;
  if (local_a8._8_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(local_a8 + 8));
  }
  local_68 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_98);
  }
  local_58[0] = 0;
  local_60 = local_90;
  if (local_88[0] == 0) {
    Vector<CodeSignCodeResources::CRFile>::push_back
              ((Vector<CodeSignCodeResources::CRFile> *)(this + 0x20));
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)local_88);
    lVar2 = local_58[0];
    Vector<CodeSignCodeResources::CRFile>::push_back
              ((Vector<CodeSignCodeResources::CRFile> *)(this + 0x20));
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_58[0] + -0x10),false);
      }
    }
  }
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_68 + -0x10),false);
    }
  }
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
    }
  }
  if (local_78 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)((long)local_78 + -0x10),false);
    }
  }
  if (local_88[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_88[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_88[0] + -0x10),false);
    }
  }
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_98 + -0x10),false);
    }
  }
  if (local_a8._8_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_a8._8_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_a8._8_8_ + -0x10),false);
    }
  }
  if (local_a8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_a8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_a8._0_8_ + -0x10),false);
    }
  }
LAB_0010d964:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* CodeSignCodeResources::match_rules2(String const&) const */

undefined4 __thiscall
CodeSignCodeResources::match_rules2(CodeSignCodeResources *this,String *param_1)

{
  int iVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  undefined4 local_1f4;
  Object *local_1e0;
  RegEx local_1d8 [408];
  long local_40;
  
  lVar7 = *(long *)(this + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 == 0) {
LAB_0010dd68:
    local_1f4 = 0;
  }
  else {
    local_1f4 = 0;
    lVar5 = 0;
    iVar9 = 0;
    do {
      if (*(long *)(lVar7 + -8) <= lVar5) break;
      lVar6 = lVar5 * 0x18;
      RegEx::RegEx(local_1d8,(String *)(lVar7 + lVar6));
      RegEx::search((String *)&local_1e0,(int)local_1d8,(int)param_1);
      if (local_1e0 == (Object *)0x0) goto LAB_0010dbf0;
      cVar4 = RefCounted::unreference();
      pOVar3 = local_1e0;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_1e0);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))();
          Memory::free_static(pOVar3,false);
        }
      }
      lVar7 = *(long *)(this + 0x18);
      if (lVar7 == 0) goto LAB_0010dca8;
      lVar8 = *(long *)(lVar7 + -8);
      if (lVar8 <= lVar5) goto LAB_0010dcab;
      cVar4 = String::operator==((String *)(lVar7 + 8 + lVar6),"omit");
      if (cVar4 != '\0') {
        RegEx::~RegEx(local_1d8);
        goto LAB_0010dd68;
      }
      lVar7 = *(long *)(this + 0x18);
      if (lVar7 == 0) goto LAB_0010dca8;
      lVar8 = *(long *)(lVar7 + -8);
      if (lVar8 <= lVar5) goto LAB_0010dcab;
      cVar4 = String::operator==((String *)(lVar7 + 8 + lVar6),"nested");
      lVar7 = *(long *)(this + 0x18);
      if (cVar4 != '\0') {
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + -8);
          if (lVar8 <= lVar5) goto LAB_0010dcab;
          iVar1 = *(int *)(lVar7 + 0x10 + lVar6);
          if (iVar9 <= iVar1) {
            local_1f4 = 2;
            iVar9 = iVar1;
          }
          goto LAB_0010dbf0;
        }
LAB_0010dca8:
        lVar8 = 0;
LAB_0010dcab:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (lVar7 == 0) goto LAB_0010dca8;
      lVar8 = *(long *)(lVar7 + -8);
      if (lVar8 <= lVar5) goto LAB_0010dcab;
      cVar4 = String::operator==((String *)(lVar7 + 8 + lVar6),"optional");
      lVar7 = *(long *)(this + 0x18);
      if (cVar4 == '\0') {
        if (lVar7 == 0) goto LAB_0010dca8;
        lVar8 = *(long *)(lVar7 + -8);
        if (lVar8 <= lVar5) goto LAB_0010dcab;
        iVar1 = *(int *)(lVar7 + 0x10 + lVar6);
        if (iVar9 <= iVar1) {
          local_1f4 = 1;
          iVar9 = iVar1;
        }
      }
      else {
        if (lVar7 == 0) goto LAB_0010dca8;
        lVar8 = *(long *)(lVar7 + -8);
        if (lVar8 <= lVar5) goto LAB_0010dcab;
        iVar1 = *(int *)(lVar7 + 0x10 + lVar6);
        if (iVar9 <= iVar1) {
          local_1f4 = 3;
          iVar9 = iVar1;
        }
      }
LAB_0010dbf0:
      lVar5 = lVar5 + 1;
      RegEx::~RegEx(local_1d8);
      lVar7 = *(long *)(this + 0x18);
    } while (lVar7 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1f4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeSignCodeResources::add_file2(String const&, String const&) */

ulong __thiscall
CodeSignCodeResources::add_file2(CodeSignCodeResources *this,String *param_1,String *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  long local_a8;
  ushort local_a0;
  long local_98 [2];
  char *local_88;
  long local_80;
  long local_78;
  ushort local_70;
  long local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = match_rules2(this,param_2);
  if (uVar6 == 2) {
    String::path_join((String *)&local_88);
    uVar8 = add_nested_file(this,param_1,param_2,(String *)&local_88);
    pcVar4 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static((void *)((long)pcVar4 + -0x10),false);
        uVar8 = uVar8 & 0xff;
      }
    }
    goto LAB_0010e25d;
  }
  if ((uVar6 & 0xfffffffd) == 1) {
    local_a8 = 0;
    local_98[0] = 0;
    local_b8 = (undefined1  [16])0x0;
    if (*(long *)param_2 == 0) {
      local_a0 = (ushort)(uVar6 == 3);
      String::path_join((String *)&local_c0);
      hash_sha1_base64((String *)&local_88);
      if (local_88 != (char *)0x0) goto LAB_0010de7a;
    }
    else {
      plVar1 = (long *)(*(long *)param_2 + -0x10);
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010de1e;
        LOCK();
        lVar7 = *plVar1;
        bVar9 = lVar2 == lVar7;
        if (bVar9) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar7 != -1) {
        local_b8._8_8_ = 0;
        local_b8._0_8_ = *(ulong *)param_2;
      }
LAB_0010de1e:
      uVar3 = local_b8._8_8_;
      local_a0 = (ushort)(uVar6 == 3);
      String::path_join((String *)&local_c0);
      hash_sha1_base64((String *)&local_88);
      pcVar4 = local_88;
      if (local_88 == (char *)uVar3) {
        if (uVar3 != 0) {
          LOCK();
          plVar1 = (long *)(uVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (char *)0x0;
            Memory::free_static((void *)((long)pcVar4 + -0x10),false);
          }
        }
      }
      else {
        if (uVar3 != 0) {
          LOCK();
          plVar1 = (long *)(uVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_b8._8_8_ + -0x10),false);
          }
        }
LAB_0010de7a:
        local_b8._8_8_ = local_88;
      }
    }
    lVar2 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    String::path_join((String *)&local_c0);
    hash_sha256_base64((String *)&local_88);
    pcVar4 = local_88;
    if ((char *)local_a8 == local_88) {
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static((void *)((long)pcVar4 + -0x10),false);
        }
      }
    }
    else {
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_a8 + -0x10),false);
        }
      }
      local_a8 = (long)local_88;
    }
    lVar2 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    cVar5 = is_print_verbose_enabled();
    if (cVar5 != '\0') {
      local_c8 = 0;
      if (local_a8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_a8);
      }
      local_d0 = 0;
      if (local_b8._8_8_ != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)(local_b8 + 8));
      }
      local_d8 = 0;
      if (local_b8._0_8_ != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_b8);
      }
      local_e0 = 0;
      local_88 = "CodeSign/CodeResources: File(V2) %s hash1:%s hash2:%s";
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_e0);
      vformat<String,String,String>
                ((String *)&local_c0,(StrRange *)&local_e0,(CowData<char32_t> *)&local_d8,
                 (CowData<char32_t> *)&local_d0,(CowData<char32_t> *)&local_c8);
      Variant::Variant((Variant *)local_58,(String *)&local_c0);
      stringify_variants((Variant *)&local_88);
      __print_line((String *)&local_88);
      pcVar4 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar2 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar1 = (long *)(local_e0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar2 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar2 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar1 = (long *)(local_d0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar2 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    local_88 = (char *)0x0;
    if (local_b8._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b8);
    }
    local_80 = 0;
    if (local_b8._8_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(local_b8 + 8));
    }
    local_78 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_a8);
    }
    local_68[0] = 0;
    local_70 = local_a0;
    if (local_98[0] == 0) {
      Vector<CodeSignCodeResources::CRFile>::push_back
                ((Vector<CodeSignCodeResources::CRFile> *)(this + 0x30));
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_68,(CowData *)local_98);
      lVar2 = local_68[0];
      Vector<CodeSignCodeResources::CRFile>::push_back
                ((Vector<CodeSignCodeResources::CRFile> *)(this + 0x30));
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
        }
      }
    }
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_78 + -0x10),false);
      }
    }
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_80 + -0x10),false);
      }
    }
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_88 + -0x10),false);
      }
    }
    if (local_98[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_98[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_98[0] + -0x10),false);
      }
    }
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_a8 + -0x10),false);
      }
    }
    if (local_b8._8_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_b8._8_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_b8._8_8_ + -0x10),false);
      }
    }
    if (local_b8._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_b8._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_b8._0_8_ + -0x10),false);
      }
    }
  }
  uVar8 = 1;
LAB_0010e25d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* CodeSignCodeResources::add_folder_recursive(String const&, String const&, String const&) */

char __thiscall
CodeSignCodeResources::add_folder_recursive
          (CodeSignCodeResources *this,String *param_1,String *param_2,String *param_3)

{
  long *plVar1;
  code *pcVar2;
  Object *pOVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
  *pHVar9;
  long in_FS_OFFSET;
  char local_291;
  CowData<char32_t> *local_260;
  Object *local_240;
  char *local_238;
  char *local_230;
  long local_228;
  char *local_220;
  char *local_218;
  long local_210;
  long local_208;
  undefined8 local_200;
  char *local_1f8;
  undefined8 local_1f0;
  undefined **local_1e8 [52];
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::create(&local_240,2);
  pOVar3 = local_240;
  if (local_240 == (Object *)0x0) {
    _err_print_error("add_folder_recursive","editor/export/codesign.cpp",0x11c,
                     "Condition \"da.is_null()\" is true. Returning: false",0,0);
  }
  else {
    pcVar2 = *(code **)(*(long *)local_240 + 0x1a8);
    String::path_join((String *)&local_1f8);
    iVar8 = (*pcVar2)(pOVar3);
    pcVar6 = local_1f8;
    if (local_1f8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_1f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1f8 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
    if (iVar8 == 0) {
      (**(code **)(*(long *)local_240 + 0x160))();
      (**(code **)(*(long *)local_240 + 0x168))((String *)&local_238);
      local_291 = '\x01';
      pcVar6 = local_238;
      while( true ) {
        local_238 = pcVar6;
        local_1f8 = (char *)0x0;
        cVar7 = String::operator!=((String *)&local_238,(String *)&local_1f8);
        pcVar6 = local_1f8;
        if (local_1f8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_1f8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_1f8 = (char *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
        if (cVar7 == '\0') break;
        cVar7 = String::operator!=((String *)&local_238,".");
        if ((cVar7 == '\0') ||
           (cVar7 = String::operator!=((String *)&local_238,".."), cVar7 == '\0')) {
LAB_0010e679:
          (**(code **)(*(long *)local_240 + 0x168))((String *)&local_1f8);
          pcVar5 = local_1f8;
          pcVar4 = local_238;
          if (local_238 == local_1f8) {
            pcVar6 = local_238;
            if (local_238 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_238 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_1f8 = (char *)0x0;
                Memory::free_static(pcVar5 + -0x10,false);
                pcVar6 = local_238;
              }
            }
          }
          else {
            pcVar6 = local_1f8;
            if (local_238 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_238 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              pcVar6 = local_1f8;
              if (*plVar1 == 0) {
                local_238 = (char *)0x0;
                Memory::free_static(pcVar4 + -0x10,false);
                pcVar6 = local_1f8;
              }
            }
          }
        }
        else {
          String::path_join((String *)&local_1f8);
          String::path_join((String *)&local_230);
          pcVar6 = local_1f8;
          if (local_1f8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_1f8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_1f8 = (char *)0x0;
              Memory::free_static(pcVar6 + -0x10,false);
            }
          }
          cVar7 = String::operator==((String *)&local_230,param_3);
          if (cVar7 == '\0') {
            cVar7 = (**(code **)(*(long *)local_240 + 0x170))();
            if (cVar7 == '\0') {
              if (local_291 != '\0') {
                String::path_join((String *)&local_1f8);
                cVar7 = add_file1(this,param_1,(String *)&local_1f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                if (cVar7 != '\0') {
                  String::path_join((String *)&local_1f8);
                  local_291 = add_file2(this,param_1,(String *)&local_1f8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                  goto LAB_0010e7a8;
                }
              }
              local_291 = '\0';
            }
            else {
              String::path_join((String *)&local_1f8);
              iVar8 = match_rules2(this,(String *)&local_1f8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
              local_228 = 0;
              local_1f8 = "Current";
              local_1f0 = 7;
              String::parse_latin1((StrRange *)&local_228);
              pOVar3 = local_240;
              local_220 = (char *)0x0;
              local_218 = (char *)0x0;
              pcVar2 = *(code **)(*(long *)local_240 + 0x1d0);
              local_1f8 = "Contents/Info.plist";
              local_200 = 0;
              local_1f0 = 0x13;
              String::parse_latin1((StrRange *)&local_200);
              String::path_join((String *)&local_1f8);
              cVar7 = (*pcVar2)(pOVar3,(String *)&local_1f8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
              pOVar3 = local_240;
              if (cVar7 == '\0') {
                pcVar2 = *(code **)(*(long *)local_240 + 0x1d0);
                local_208 = 0;
                if (local_228 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_208,(CowData *)&local_228);
                }
                local_210 = 0;
                local_1f8 = "Versions/%s/Resources/Info.plist";
                local_1f0 = 0x20;
                String::parse_latin1((StrRange *)&local_210);
                vformat<String>((StrRange *)&local_200,(StrRange *)&local_210,
                                (CowData<char32_t> *)&local_208);
                String::path_join((String *)&local_1f8);
                cVar7 = (*pcVar2)(pOVar3,(String *)&local_1f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
                pOVar3 = local_240;
                if (cVar7 != '\0') {
                  local_208 = 0;
                  if (local_228 != 0) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_208,(CowData *)&local_228);
                  }
                  local_210 = 0;
                  local_1f8 = "Versions/%s/Resources/Info.plist";
                  local_1f0 = 0x20;
                  String::parse_latin1((StrRange *)&local_210);
                  vformat<String>((StrRange *)&local_200,(StrRange *)&local_210,
                                  (CowData<char32_t> *)&local_208);
                  String::path_join((String *)&local_1f8);
                  if (local_220 != local_1f8) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
                    local_220 = local_1f8;
                    local_1f8 = (char *)0x0;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
                  local_208 = 0;
                  if (local_228 != 0) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_208,(CowData *)&local_228);
                  }
                  local_210 = 0;
                  local_1f8 = "Versions/%s";
                  local_1f0 = 0xb;
                  String::parse_latin1((StrRange *)&local_210);
                  vformat<String>((StrRange *)&local_200,(StrRange *)&local_210,
                                  (CowData<char32_t> *)&local_208);
                  String::path_join((String *)&local_1f8);
                  if (local_218 != local_1f8) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
                    local_218 = local_1f8;
                    local_1f8 = (char *)0x0;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
                  goto LAB_0010ec88;
                }
                pcVar2 = *(code **)(*(long *)local_240 + 0x1d0);
                local_1f8 = "Resources/Info.plist";
                local_200 = 0;
                local_1f0 = 0x14;
                String::parse_latin1((StrRange *)&local_200);
                String::path_join((String *)&local_1f8);
                cVar7 = (*pcVar2)(pOVar3,(String *)&local_1f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
                pOVar3 = local_240;
                if (cVar7 != '\0') {
                  local_200 = 0;
                  local_1f8 = "Resources/Info.plist";
                  local_1f0 = 0x14;
                  String::parse_latin1((StrRange *)&local_200);
                  String::path_join((String *)&local_1f8);
                  if (local_220 != local_1f8) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
                    local_220 = local_1f8;
                    local_1f8 = (char *)0x0;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
                  if (local_218 != local_230) {
LAB_0010f108:
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_218,(CowData *)&local_230);
                  }
                  goto LAB_0010ec88;
                }
                pcVar2 = *(code **)(*(long *)local_240 + 0x1d0);
                local_1f8 = "Info.plist";
                local_200 = 0;
                local_1f0 = 10;
                String::parse_latin1((StrRange *)&local_200);
                String::path_join((String *)&local_1f8);
                cVar7 = (*pcVar2)(pOVar3);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
                if (cVar7 != '\0') {
                  local_200 = 0;
                  String::parse_latin1((String *)&local_200,"Info.plist");
                  String::path_join((String *)&local_1f8);
                  if (local_220 != local_1f8) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
                    local_220 = local_1f8;
                    local_1f8 = (char *)0x0;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
                  if (local_218 != local_230) goto LAB_0010f108;
                  goto LAB_0010ec88;
                }
LAB_0010eca6:
                if (local_291 != '\0') {
                  String::path_join((String *)&local_1f8);
                  local_291 = add_folder_recursive(this,param_1,(String *)&local_1f8,param_3);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                }
              }
              else {
                local_1f8 = "Contents/Info.plist";
                local_200 = 0;
                local_1f0 = 0x13;
                String::parse_latin1((StrRange *)&local_200);
                String::path_join((String *)&local_1f8);
                if (local_220 != local_1f8) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
                  local_220 = local_1f8;
                  local_1f8 = (char *)0x0;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
                local_1f8 = "Contents/MacOS";
                local_200 = 0;
                local_1f0 = 0xe;
                String::parse_latin1((StrRange *)&local_200);
                String::path_join((String *)&local_1f8);
                if (local_218 != local_1f8) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
                  local_218 = local_1f8;
                  local_1f8 = (char *)0x0;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
LAB_0010ec88:
                local_260 = (CowData<char32_t> *)&local_220;
                if (((iVar8 != 2) || (local_220 == (char *)0x0)) || (*(uint *)(local_220 + -8) < 2))
                goto LAB_0010eca6;
                PList::PList((PList *)local_1e8);
                cVar7 = PList::load_file((String *)local_1e8);
                if (cVar7 == '\0') {
                  _err_print_error("add_folder_recursive","editor/export/codesign.cpp",0x14b,
                                   "Method/function failed. Returning: false",
                                   "CodeSign/CodeResources: Invalid Info.plist, can\'t load.",0,0);
LAB_0010f443:
                  local_1e8[0] = &PTR__initialize_classv_0011d2e0;
                  if (((local_48 != (Object *)0x0) &&
                      (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
                     (cVar7 = predelete_handler(local_48), cVar7 != '\0')) {
                    (**(code **)(*(long *)local_48 + 0x140))(local_48);
                    Memory::free_static(local_48,false);
                  }
                  local_1e8[0] = &PTR__initialize_classv_0011d180;
                  Object::~Object((Object *)local_1e8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
                  CowData<char32_t>::_unref(local_260);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
                  local_291 = '\0';
                  goto LAB_0010e7ee;
                }
                PList::get_root();
                if (*(int *)(local_210 + 0x17c) != 3) {
                  Ref<PListNode>::unref((Ref<PListNode> *)&local_210);
LAB_0010f412:
                  _err_print_error("add_folder_recursive","editor/export/codesign.cpp",0x148,
                                   "Method/function failed. Returning: false",
                                   "CodeSign/CodeResources: Invalid Info.plist, no exe name.",0,0);
                  goto LAB_0010f443;
                }
                PList::get_root();
                local_200 = 0;
                pHVar9 = (HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                          *)(local_208 + 0x198);
                local_1f0 = 0x12;
                local_1f8 = "CFBundleExecutable";
                String::parse_latin1((StrRange *)&local_200);
                local_1f8 = (char *)((ulong)local_1f8 & 0xffffffff00000000);
                cVar7 = HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                        ::_lookup_pos(pHVar9,(String *)&local_200,(uint *)&local_1f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
                Ref<PListNode>::unref((Ref<PListNode> *)&local_208);
                Ref<PListNode>::unref((Ref<PListNode> *)&local_210);
                if (cVar7 == '\0') goto LAB_0010f412;
                PList::get_root();
                local_208 = 0;
                pHVar9 = (HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                          *)(local_210 + 0x198);
                local_1f8 = "CFBundleExecutable";
                local_1f0 = 0x12;
                String::parse_latin1((StrRange *)&local_208);
                HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                ::operator[](pHVar9,(String *)&local_208);
                iVar8 = CharString::get_data();
                String::utf8((char *)&local_200,iVar8);
                String::path_join((String *)&local_1f8);
                if (local_218 != local_1f8) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
                  local_218 = local_1f8;
                  local_1f8 = (char *)0x0;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
                Ref<PListNode>::unref((Ref<PListNode> *)&local_210);
                if (local_291 != '\0') {
                  String::path_join((String *)&local_1f8);
                  local_291 = add_nested_file(this,param_1,(String *)&local_1f8,(String *)&local_218
                                             );
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
                }
                local_1e8[0] = &PTR__initialize_classv_0011d2e0;
                Ref<PListNode>::unref((Ref<PListNode> *)&local_48);
                local_1e8[0] = &PTR__initialize_classv_0011d180;
                Object::~Object((Object *)local_1e8);
              }
              local_260 = (CowData<char32_t> *)&local_220;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
              CowData<char32_t>::_unref(local_260);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
            }
LAB_0010e7a8:
            pcVar6 = local_230;
            if (local_230 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_230 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_230 = (char *)0x0;
                Memory::free_static(pcVar6 + -0x10,false);
              }
            }
            goto LAB_0010e679;
          }
          (**(code **)(*(long *)local_240 + 0x168))((String *)&local_1f8);
          pcVar6 = local_1f8;
          if (local_238 == local_1f8) {
            if (local_1f8 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_1f8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_1f8 = (char *)0x0;
                Memory::free_static(pcVar6 + -0x10,false);
              }
            }
          }
          else {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
            local_238 = local_1f8;
          }
          pcVar4 = local_230;
          pcVar6 = local_238;
          if (local_230 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_230 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_230 = (char *)0x0;
              Memory::free_static(pcVar4 + -0x10,false);
              pcVar6 = local_238;
            }
          }
        }
      }
      (**(code **)(*(long *)local_240 + 0x180))();
LAB_0010e7ee:
      pcVar6 = local_238;
      if (local_238 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_238 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_238 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      goto LAB_0010e804;
    }
    _err_print_error("add_folder_recursive","editor/export/codesign.cpp",0x11e,
                     "Condition \"err != OK\" is true. Returning: false",0,0);
  }
  local_291 = '\0';
LAB_0010e804:
  if (((local_240 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_240), cVar7 != '\0')) {
    (**(code **)(*(long *)local_240 + 0x140))(local_240);
    Memory::free_static(local_240,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_291;
}



/* CodeSign::_codesign_file(bool, bool, String const&, String const&, String const&, String const&,
   bool, String&) */

int CodeSign::_codesign_file
              (bool param_1,bool param_2,String *param_3,String *param_4,String *param_5,
              String *param_6,bool param_7,String *param_8)

{
  Object *pOVar1;
  long *plVar2;
  HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
  *pHVar3;
  CowData *pCVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  Object *pOVar8;
  char cVar9;
  int iVar10;
  CodeSignCodeDirectory *pCVar11;
  ulong uVar12;
  ulong uVar13;
  CodeSignCodeDirectory *this;
  Object *pOVar14;
  Object *pOVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  String *pSVar20;
  uint uVar21;
  long in_FS_OFFSET;
  String *local_3f0;
  String *local_3e8;
  Object *local_3c0;
  CowData<char32_t> *local_3a0;
  long local_398;
  Object *local_358;
  Object *local_350;
  Object *local_348;
  CharString local_340 [8];
  Object *local_338;
  Object *local_330;
  Object *local_328;
  undefined8 local_320;
  Object *local_318;
  Object *local_310;
  Vector local_308 [8];
  long local_300;
  Vector local_2f8 [8];
  long local_2f0;
  Vector local_2e8 [8];
  long local_2e0;
  undefined8 local_2d8;
  long local_2d0;
  undefined8 local_2c8;
  long local_2c0;
  ulong local_2b8;
  ulong local_2b0;
  long local_2a8;
  undefined8 local_2a0;
  long local_298;
  long local_290;
  Object *local_288;
  long local_280 [2];
  undefined8 local_270 [2];
  undefined8 local_260 [2];
  undefined8 local_250;
  int local_248 [8];
  undefined **local_228 [48];
  Object *local_a8;
  undefined1 local_a0;
  undefined1 local_98 [16];
  Object *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar9 = is_print_verbose_enabled();
  if (cVar9 != '\0') {
    local_2a8 = 0;
    if (*(long *)param_6 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_2a8,(CowData *)param_6);
    }
    local_2b8 = 0;
    if (*(long *)param_5 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_2b8,(CowData *)param_5);
    }
    local_2c8 = 0;
    if (*(long *)param_4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_2c8,(CowData *)param_4);
    }
    local_2d8 = 0;
    local_288 = (Object *)0x1163b0;
    local_280[0] = 0x41;
    String::parse_latin1((StrRange *)&local_2d8);
    vformat<String,String,String>
              ((String *)&local_298,(StrRange *)&local_2d8,(CowData<char32_t> *)&local_2c8);
    Variant::Variant((Variant *)local_228,(String *)&local_298);
    stringify_variants((Variant *)&local_288);
    __print_line((String *)&local_288);
    pOVar14 = local_288;
    if (local_288 != (Object *)0x0) {
      LOCK();
      pOVar15 = local_288 + -0x10;
      *(long *)pOVar15 = *(long *)pOVar15 + -1;
      UNLOCK();
      if (*(long *)pOVar15 == 0) {
        local_288 = (Object *)0x0;
        Memory::free_static(pOVar14 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
  }
  local_300 = 0;
  local_2f0 = 0;
  local_2e0 = 0;
  local_2d0 = 0;
  local_358 = (Object *)0x0;
  local_350 = (Object *)0x0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_350,(CowData *)param_4);
  }
  DirAccess::create(&local_348,2);
  if (local_348 == (Object *)0x0) {
    local_298 = 0;
    String::parse_latin1((String *)&local_298,"");
    local_2a8 = 0;
    String::parse_latin1((String *)&local_2a8,"Can\'t get filesystem access.");
    TTR((String *)&local_288,(String *)&local_2a8);
    if (*(Object **)param_8 != local_288) {
      CowData<char32_t>::_unref((CowData<char32_t> *)param_8);
      pOVar14 = local_288;
      local_288 = (Object *)0x0;
      *(Object **)param_8 = pOVar14;
    }
    iVar10 = 0x14;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
    _err_print_error("_codesign_file","editor/export/codesign.cpp",0x4ba,
                     "Method/function failed. Returning: ERR_CANT_CREATE",
                     "CodeSign: Can\'t get filesystem access.",0,0);
    goto LAB_0010fb2a;
  }
  if ((*(long *)param_3 != 0) && (1 < *(uint *)(*(long *)param_3 + -8))) {
    cVar9 = is_print_verbose_enabled();
    if (cVar9 != '\0') {
      Variant::Variant((Variant *)local_228,"CodeSign: Reading bundle info...");
      stringify_variants((Variant *)&local_288);
      __print_line((String *)&local_288);
      pOVar14 = local_288;
      if (local_288 != (Object *)0x0) {
        LOCK();
        pOVar15 = local_288 + -0x10;
        *(long *)pOVar15 = *(long *)pOVar15 + -1;
        UNLOCK();
        if (*(long *)pOVar15 == 0) {
          local_288 = (Object *)0x0;
          Memory::free_static(pOVar14 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    PList::PList((PList *)local_228);
    cVar9 = PList::load_file((String *)local_228);
    if (cVar9 == '\0') {
      local_298 = 0;
      local_288 = (Object *)&_LC18;
      local_280[0] = 0;
      String::parse_latin1((StrRange *)&local_298);
      local_288 = (Object *)0x1165b0;
      local_2a8 = 0;
      local_280[0] = 0x1f;
      String::parse_latin1((StrRange *)&local_2a8);
      TTR((String *)&local_288,(String *)&local_2a8);
      if (*(Object **)param_8 != local_288) {
        CowData<char32_t>::_unref((CowData<char32_t> *)param_8);
        pOVar14 = local_288;
        local_288 = (Object *)0x0;
        *(Object **)param_8 = pOVar14;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      _err_print_error("_codesign_file","editor/export/codesign.cpp",0x4d8,
                       "Method/function failed. Returning: FAILED",
                       "CodeSign: Invalid Info.plist, can\'t load.",0,0);
    }
    else {
      file_hash_sha1((CodeSign *)&local_288,param_3);
      lVar18 = local_280[0];
      if (local_300 != local_280[0]) {
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_300);
        local_300 = lVar18;
        local_280[0] = 0;
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_280);
      file_hash_sha256((CodeSign *)&local_288,param_3);
      lVar17 = local_280[0];
      if (local_2f0 != local_280[0]) {
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_2f0);
        local_2f0 = lVar17;
        local_280[0] = 0;
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_280);
      if ((lVar18 == 0) || (local_2f0 == 0)) {
        local_298 = 0;
        local_288 = (Object *)&_LC18;
        local_280[0] = 0;
        String::parse_latin1((StrRange *)&local_298);
        local_288 = (Object *)0x116480;
        local_2a8 = 0;
        local_280[0] = 0x1e;
        String::parse_latin1((StrRange *)&local_2a8);
        TTR((String *)&local_288,(String *)&local_2a8);
        if (*(Object **)param_8 != local_288) {
          CowData<char32_t>::_unref((CowData<char32_t> *)param_8);
          pOVar14 = local_288;
          local_288 = (Object *)0x0;
          *(Object **)param_8 = pOVar14;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
        _err_print_error("_codesign_file","editor/export/codesign.cpp",0x4c6,
                         "Method/function failed. Returning: FAILED",
                         "CodeSign: Failed to get Info.plist hash.",0,0);
      }
      else {
        PList::get_root();
        if (*(int *)(local_2a8 + 0x17c) == 3) {
          PList::get_root();
          local_288 = (Object *)0x0;
          pHVar3 = (HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                    *)(local_298 + 0x198);
          String::parse_latin1((String *)&local_288,"CFBundleExecutable");
          local_2b8 = local_2b8 & 0xffffffff00000000;
          cVar9 = HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                  ::_lookup_pos(pHVar3,(String *)&local_288,(uint *)&local_2b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
          Ref<PListNode>::unref((Ref<PListNode> *)&local_298);
          Ref<PListNode>::unref((Ref<PListNode> *)&local_2a8);
          if (cVar9 != '\0') {
            PList::get_root();
            local_288 = (Object *)0x117034;
            pHVar3 = (HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                      *)(local_2b8 + 0x198);
            local_2a8 = 0;
            local_280[0] = 0x12;
            String::parse_latin1((StrRange *)&local_2a8);
            HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
            ::operator[](pHVar3,(String *)&local_2a8);
            iVar10 = CharString::get_data();
            String::utf8((char *)&local_298,iVar10);
            String::path_join((String *)&local_288);
            if (local_350 != local_288) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_350);
              local_350 = local_288;
              local_288 = (Object *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
            Ref<PListNode>::unref((Ref<PListNode> *)&local_2b8);
            PList::get_root();
            if (*(int *)(local_2a8 + 0x17c) == 3) {
              PList::get_root();
              local_288 = (Object *)0x0;
              String::parse_latin1((String *)&local_288,"CFBundleIdentifier");
              local_2b8 = local_2b8 & 0xffffffff00000000;
              cVar9 = HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                      ::_lookup_pos((HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                                     *)(local_298 + 0x198),(String *)&local_288,(uint *)&local_2b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
              Ref<PListNode>::unref((Ref<PListNode> *)&local_298);
              Ref<PListNode>::unref((Ref<PListNode> *)&local_2a8);
              if (cVar9 != '\0') {
                PList::get_root();
                local_298 = 0;
                pHVar3 = (HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                          *)(local_2a8 + 0x198);
                local_288 = (Object *)0x117073;
                local_280[0] = 0x12;
                String::parse_latin1((StrRange *)&local_298);
                HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                ::operator[](pHVar3,(String *)&local_298);
                pcVar16 = (char *)CharString::get_data();
                String::parse_latin1((String *)&local_358,pcVar16);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
                Ref<PListNode>::unref((Ref<PListNode> *)&local_2a8);
                local_228[0] = &PTR__initialize_classv_0011d2e0;
                if (((local_88 != (Object *)0x0) &&
                    (cVar9 = RefCounted::unreference(), pOVar14 = local_88, cVar9 != '\0')) &&
                   (cVar9 = predelete_handler(local_88), cVar9 != '\0')) {
                  (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
                  Memory::free_static(pOVar14,false);
                }
                local_228[0] = &PTR__initialize_classv_0011d180;
                Object::~Object((Object *)local_228);
                goto LAB_0010f873;
              }
            }
            else {
              Ref<PListNode>::unref((Ref<PListNode> *)&local_2a8);
            }
            local_298 = 0;
            String::parse_latin1((String *)&local_298,"");
            local_2a8 = 0;
            String::parse_latin1((String *)&local_2a8,"Invalid Info.plist, no bundle id.");
            TTR((String *)&local_288,(String *)&local_2a8);
            if (*(Object **)param_8 != local_288) {
              CowData<char32_t>::_unref((CowData<char32_t> *)param_8);
              pOVar14 = local_288;
              local_288 = (Object *)0x0;
              *(Object **)param_8 = pOVar14;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
            _err_print_error("_codesign_file","editor/export/codesign.cpp",0x4d4,
                             "Method/function failed. Returning: FAILED",
                             "CodeSign: Invalid Info.plist, no bundle id.",0,0);
            goto LAB_001103b1;
          }
        }
        else {
          Ref<PListNode>::unref((Ref<PListNode> *)&local_2a8);
        }
        local_3f0 = (String *)&local_298;
        local_298 = 0;
        String::parse_latin1(local_3f0,"");
        local_2a8 = 0;
        String::parse_latin1((String *)&local_2a8,"Invalid Info.plist, no exe name.");
        TTR((String *)&local_288,(String *)&local_2a8);
        if (*(Object **)param_8 != local_288) {
          CowData<char32_t>::_unref((CowData<char32_t> *)param_8);
          pOVar14 = local_288;
          local_288 = (Object *)0x0;
          *(Object **)param_8 = pOVar14;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_3f0);
        _err_print_error("_codesign_file","editor/export/codesign.cpp",0x4cd,
                         "Method/function failed. Returning: FAILED",
                         "CodeSign: Invalid Info.plist, no exe name.",0,0);
      }
    }
LAB_001103b1:
    iVar10 = 1;
    local_228[0] = &PTR__initialize_classv_0011d2e0;
    Ref<PListNode>::unref((Ref<PListNode> *)&local_88);
    local_228[0] = &PTR__initialize_classv_0011d180;
    Object::~Object((Object *)local_228);
    goto LAB_0010fb2a;
  }
LAB_0010f873:
  local_2c0 = 0;
  cVar9 = LipO::is_lipo((String *)&local_350);
  if (cVar9 == '\0') {
    cVar9 = MachO::is_macho((String *)&local_350);
    if (cVar9 == '\0') {
      local_298 = 0;
      local_288 = (Object *)&_LC18;
      local_280[0] = 0;
      String::parse_latin1((StrRange *)&local_298);
      local_288 = (Object *)0x11708c;
      local_2a8 = 0;
      local_280[0] = 0x16;
      String::parse_latin1((StrRange *)&local_2a8);
      TTR((String *)&local_288,(String *)&local_2a8);
      if (*(Object **)param_8 != local_288) {
        CowData<char32_t>::_unref((CowData<char32_t> *)param_8);
        pOVar14 = local_288;
        local_288 = (Object *)0x0;
        *(Object **)param_8 = pOVar14;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      _err_print_error("_codesign_file","editor/export/codesign.cpp",0x4f6,
                       "Method/function failed. Returning: FAILED",
                       "CodeSign: Invalid binary format.",0,0);
      goto LAB_0010fb0b;
    }
    cVar9 = is_print_verbose_enabled();
    if (cVar9 != '\0') {
      Variant::Variant((Variant *)local_228,"CodeSign: Executable is thin...");
      stringify_variants((Variant *)&local_288);
      __print_line((String *)&local_288);
      pOVar14 = local_288;
      if (local_288 != (Object *)0x0) {
        LOCK();
        pOVar15 = local_288 + -0x10;
        *(long *)pOVar15 = *(long *)pOVar15 + -1;
        UNLOCK();
        if (*(long *)pOVar15 == 0) {
          local_288 = (Object *)0x0;
          Memory::free_static(pOVar14 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    local_288 = (Object *)0x0;
    if (local_350 != (Object *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_288,(CowData *)&local_350);
    }
    Vector<String>::push_back((Vector<String> *)&local_2c8,(CowData<char32_t> *)&local_288);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  }
  else {
    cVar9 = is_print_verbose_enabled();
    if (cVar9 != '\0') {
      local_2a8 = 0;
      local_288 = (Object *)0x116600;
      local_280[0] = 0x2a;
      String::parse_latin1((StrRange *)&local_2a8);
      vformat<>((String *)&local_298);
      Variant::Variant((Variant *)local_228,(String *)&local_298);
      stringify_variants((Variant *)&local_288);
      __print_line((String *)&local_288);
      pOVar14 = local_288;
      if (local_288 != (Object *)0x0) {
        LOCK();
        pOVar15 = local_288 + -0x10;
        *(long *)pOVar15 = *(long *)pOVar15 + -1;
        UNLOCK();
        if (*(long *)pOVar15 == 0) {
          local_288 = (Object *)0x0;
          Memory::free_static(pOVar14 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
    }
    EditorPaths::get_temp_dir();
    local_288 = (Object *)0x116fa1;
    local_298 = 0;
    local_280[0] = 5;
    String::parse_latin1((StrRange *)&local_298);
    String::path_join((String *)&local_318);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
    iVar10 = (**(code **)(*(long *)local_348 + 0x1c0))(local_348,(String *)&local_318);
    if (iVar10 != 0) {
      local_298 = 0;
      if (local_318 != (Object *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_298,(CowData *)&local_318);
      }
      local_2b8 = 0;
      local_288 = (Object *)&_LC18;
      local_280[0] = 0;
      String::parse_latin1((StrRange *)&local_2b8);
      local_288 = (Object *)0x116630;
      local_310 = (Object *)0x0;
      local_280[0] = 0x20;
      String::parse_latin1((StrRange *)&local_310);
      TTR((String *)&local_2a8,(String *)&local_310);
      vformat<String>((CowData<char32_t> *)&local_288,(CowData<char32_t> *)&local_2a8,
                      (String *)&local_298);
      pOVar14 = local_288;
      if ((Object *)*(char **)param_8 != local_288) {
        CowData<char32_t>::_unref((CowData<char32_t> *)param_8);
        *(Object **)param_8 = pOVar14;
        local_288 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_310);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      if (local_318 != (Object *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_298,(CowData *)&local_318);
      }
      local_2a8 = 0;
      local_288 = (Object *)0x116658;
      local_280[0] = 0x2a;
      String::parse_latin1((StrRange *)&local_2a8);
      vformat<String>((CowData<char32_t> *)&local_288,(CowData<char32_t> *)&local_2a8,
                      (String *)&local_298);
      _err_print_error("_codesign_file","editor/export/codesign.cpp",0x4e4,
                       "Method/function failed. Returning: FAILED",(CowData<char32_t> *)&local_288,0
                       ,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      goto LAB_0010fb01;
    }
    uVar21 = 0;
    RefCounted::RefCounted((RefCounted *)local_228);
    local_228[0] = (undefined **)LipO::extract_arch;
    local_a8 = (Object *)0x0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_98._8_8_;
    local_98 = auVar7 << 0x40;
    cVar9 = LipO::open_file((String *)local_228);
    if (cVar9 != '\0') {
      while( true ) {
        pSVar20 = (String *)(ulong)uVar21;
        iVar10 = LipO::get_arch_count();
        if (iVar10 <= (int)uVar21) break;
        uVar21 = uVar21 + 1;
        itos((long)&local_2a8);
        operator+((char *)&local_298,(String *)"_exe_");
        String::path_join((String *)&local_288);
        cVar9 = LipO::extract_arch((int)(RefCounted *)local_228,pSVar20);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
        if (cVar9 == '\0') {
          if (local_2c0 == 0) goto LAB_001135f2;
          lVar18 = *(long *)(local_2c0 + -8);
          lVar17 = 0;
          if (1 < lVar18) goto LAB_0011359c;
          goto LAB_001135f2;
        }
        itos((long)&local_2a8);
        operator+((char *)&local_298,(String *)"_exe_");
        String::path_join((String *)&local_288);
        Vector<String>::push_back((Vector<String> *)&local_2c8,(CowData<char32_t> *)&local_288);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      }
    }
    LipO::~LipO((LipO *)local_228);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  }
  if ((!param_2) && (local_2c0 != 0)) {
    local_398 = 0;
    do {
      if (*(long *)(local_2c0 + -8) <= local_398) break;
      RefCounted::RefCounted((RefCounted *)local_228);
      local_228[0] = &PTR__initialize_classv_0011d440;
      local_a8 = (Object *)0x0;
      local_a0 = 0;
      local_88 = (Object *)0xffffffffffffffff;
      local_80 = 0;
      local_78 = 0;
      local_98 = (undefined1  [16])0x0;
      local_70 = (undefined1  [16])0x0;
      if (local_2c0 == 0) {
        lVar18 = 0;
        goto LAB_00111da1;
      }
      lVar18 = *(long *)(local_2c0 + -8);
      if (lVar18 <= local_398) goto LAB_00111da1;
      MachO::open_file((String *)local_228);
      cVar9 = MachO::is_signed();
      if (cVar9 != '\0') {
        if (local_2c0 == 0) goto LAB_00113a44;
        lVar18 = *(long *)(local_2c0 + -8);
        lVar17 = 0;
        if (1 < lVar18) goto LAB_001139ec;
        goto LAB_00113a44;
      }
      local_228[0] = &PTR__initialize_classv_0011d440;
      if (((local_a8 != (Object *)0x0) &&
          (cVar9 = RefCounted::unreference(), pOVar14 = local_a8, cVar9 != '\0')) &&
         (cVar9 = predelete_handler(local_a8), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
      local_228[0] = &PTR__initialize_classv_0011d180;
      local_398 = local_398 + 1;
      Object::~Object((Object *)local_228);
    } while (local_2c0 != 0);
  }
  if ((*(long *)param_5 != 0) && (1 < *(uint *)(*(long *)param_5 + -8))) {
    cVar9 = is_print_verbose_enabled();
    if (cVar9 != '\0') {
      Variant::Variant((Variant *)local_228,"CodeSign: Generating bundle CodeResources...");
      print_line((Variant *)local_228);
      if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    local_280[0] = 0;
    local_270[0] = 0;
    local_260[0] = 0;
    local_250 = 0;
    local_298 = 0;
    if (param_7) {
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^.*");
      CodeSignCodeResources::add_rule1
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"optional");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^.*\\.lproj/");
      CodeSignCodeResources::add_rule1
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,100,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"omit");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^.*\\.lproj/locversion.plist$");
      CodeSignCodeResources::add_rule1
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x44c
                 ,true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Base\\.lproj/");
      CodeSignCodeResources::add_rule1
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x3f2
                 ,true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^version.plist$");
      CodeSignCodeResources::add_rule1
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,".*\\.dSYM($|/)");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0xb,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"omit");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^(.*/)?\\.DS_Store$");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,2000,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^.*");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"optional");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^.*\\.lproj/");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,1000,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"omit");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^.*\\.lproj/locversion.plist$");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x44c
                 ,true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Base\\.lproj/");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x3f2
                 ,true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"omit");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Info\\.plist$");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x14,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"omit");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^PkgInfo$");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x14,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^embedded\\.provisionprofile$");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,10,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
    }
    else {
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Resources($|/)");
      CodeSignCodeResources::add_rule1
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"optional");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Resources/.*\\.lproj/");
      CodeSignCodeResources::add_rule1
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,1000,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"omit");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Resources/.*\\.lproj/locversion.plist$");
      CodeSignCodeResources::add_rule1
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x44c
                 ,true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Resources/Base\\.lproj/");
      CodeSignCodeResources::add_rule1
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x3f2
                 ,true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^version.plist$");
      CodeSignCodeResources::add_rule1
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,".*\\.dSYM($|/)");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0xb,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"omit");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^(.*/)?\\.DS_Store$");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,2000,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"nested");
      local_2a8 = 0;
      String::parse_latin1
                ((String *)&local_2a8,
                 "^(Frameworks|SharedFrameworks|PlugIns|Plug-ins|XPCServices|Helpers|MacOS|Library/(Automator|Spotlight|LoginItems))/"
                );
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,10,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^.*");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"omit");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Info\\.plist$");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x14,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"omit");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^PkgInfo$");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x14,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Resources($|/)");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x14,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"optional");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Resources/.*\\.lproj/");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,1000,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"omit");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Resources/.*\\.lproj/locversion.plist$");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x44c
                 ,true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^Resources/Base\\.lproj/");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x3f2
                 ,true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"nested");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^[^/]+$");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,10,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      local_298 = 0;
      String::parse_latin1((String *)&local_298,"");
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"^embedded\\.provisionprofile$");
      CodeSignCodeResources::add_rule2
                ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,10,
                 true);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
    }
    local_298 = 0;
    String::parse_latin1((String *)&local_298,"");
    local_2a8 = 0;
    String::parse_latin1((String *)&local_2a8,"^version\\.plist$");
    CodeSignCodeResources::add_rule2
              ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,0x14,
               true);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
    local_298 = 0;
    String::parse_latin1((String *)&local_298,"omit");
    local_2a8 = 0;
    String::parse_latin1((String *)&local_2a8,"^_MASReceipt");
    CodeSignCodeResources::add_rule2
              ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,2000,
               false);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
    local_298 = 0;
    String::parse_latin1((String *)&local_298,"omit");
    local_2a8 = 0;
    String::parse_latin1((String *)&local_2a8,"^_CodeSignature");
    CodeSignCodeResources::add_rule2
              ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,2000,
               false);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
    local_298 = 0;
    String::parse_latin1((String *)&local_298,"omit");
    local_2a8 = 0;
    String::parse_latin1((String *)&local_2a8,"^CodeResources");
    CodeSignCodeResources::add_rule2
              ((CodeSignCodeResources *)&local_288,(String *)&local_2a8,(String *)&local_298,2000,
               false);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
    local_298 = 0;
    String::parse_latin1((String *)&local_298,"");
    cVar9 = CodeSignCodeResources::add_folder_recursive
                      ((CodeSignCodeResources *)&local_288,param_5,(String *)&local_298,
                       (String *)&local_350);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
    pOVar14 = local_348;
    if (cVar9 == '\0') {
      if (local_2c0 != 0) {
        lVar18 = *(long *)(local_2c0 + -8);
        lVar17 = 0;
        if (1 < lVar18) {
          while (pOVar14 = local_348, lVar17 < lVar18) {
            pCVar4 = (CowData *)(local_2c0 + lVar17 * 8);
            pcVar5 = *(code **)(*(long *)local_348 + 0x208);
            local_298 = 0;
            if (*(long *)pCVar4 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_298,pCVar4);
            }
            lVar17 = lVar17 + 1;
            (*pcVar5)(pOVar14,(String *)&local_298);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
            if (local_2c0 == 0) break;
            lVar18 = *(long *)(local_2c0 + -8);
          }
        }
      }
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"");
      local_2b8 = 0;
      String::parse_latin1((String *)&local_2b8,"Failed to process nested resources.");
      TTR((String *)&local_298,(String *)&local_2b8);
      lVar18 = *(long *)param_8;
      if (lVar18 != local_298) {
        lVar17 = local_298;
        if (lVar18 != 0) {
          LOCK();
          plVar2 = (long *)(lVar18 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar18 = *(long *)param_8;
            *(undefined8 *)param_8 = 0;
            Memory::free_static((void *)(lVar18 + -0x10),false);
            lVar17 = local_298;
          }
        }
        local_298 = 0;
        *(long *)param_8 = lVar17;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      _err_print_error("_codesign_file","editor/export/codesign.cpp",0x53c,
                       "Method/function failed. Returning: FAILED",
                       "CodeSign: Failed to process nested resources.",0,0);
    }
    else {
      pcVar5 = *(code **)(*(long *)local_348 + 0x1c0);
      local_2a8 = 0;
      String::parse_latin1((String *)&local_2a8,"_CodeSignature");
      String::path_join((String *)&local_298);
      iVar10 = (*pcVar5)(pOVar14,(String *)&local_298);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      if (iVar10 == 0) {
        local_310 = (Object *)0x0;
        String::parse_latin1((String *)&local_310,"_CodeSignature");
        String::path_join((String *)&local_2b8);
        local_2a8 = 0;
        String::parse_latin1((String *)&local_2a8,"CodeResources");
        String::path_join((String *)&local_298);
        CodeSignCodeResources::save_to_file((String *)&local_288);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_310);
        local_318 = (Object *)0x0;
        String::parse_latin1((String *)&local_318,"_CodeSignature");
        String::path_join((String *)&local_310);
        local_2b8 = 0;
        String::parse_latin1((String *)&local_2b8,"CodeResources");
        String::path_join((String *)&local_2a8);
        file_hash_sha1((CodeSign *)&local_298,(String *)&local_2a8);
        lVar18 = local_290;
        if (local_2e0 != local_290) {
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_2e0);
          local_2e0 = local_290;
          local_290 = 0;
        }
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_290);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_310);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
        local_318 = (Object *)0x0;
        String::parse_latin1((String *)&local_318,"_CodeSignature");
        String::path_join((String *)&local_310);
        local_2b8 = 0;
        String::parse_latin1((String *)&local_2b8,"CodeResources");
        String::path_join((String *)&local_2a8);
        file_hash_sha256((CodeSign *)&local_298,(String *)&local_2a8);
        lVar17 = local_290;
        if (local_2d0 != local_290) {
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_2d0);
          local_2d0 = lVar17;
          local_290 = 0;
        }
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_290);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_310);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
        if ((lVar18 != 0) && (local_2d0 != 0)) {
          CowData<CodeSignCodeResources::CRFile>::_unref
                    ((CowData<CodeSignCodeResources::CRFile> *)&local_250);
          CowData<CodeSignCodeResources::CRFile>::_unref
                    ((CowData<CodeSignCodeResources::CRFile> *)local_260);
          CowData<CodeSignCodeResources::CRRule>::_unref
                    ((CowData<CodeSignCodeResources::CRRule> *)local_270);
          CowData<CodeSignCodeResources::CRRule>::_unref
                    ((CowData<CodeSignCodeResources::CRRule> *)local_280);
          goto LAB_00110427;
        }
        if (local_2c0 != 0) {
          lVar18 = *(long *)(local_2c0 + -8);
          lVar17 = 0;
          if (1 < lVar18) {
            while (pOVar14 = local_348, lVar17 < lVar18) {
              pCVar4 = (CowData *)(local_2c0 + lVar17 * 8);
              pcVar5 = *(code **)(*(long *)local_348 + 0x208);
              local_298 = 0;
              if (*(long *)pCVar4 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_298,pCVar4);
              }
              lVar17 = lVar17 + 1;
              (*pcVar5)(pOVar14,(String *)&local_298);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
              if (local_2c0 == 0) break;
              lVar18 = *(long *)(local_2c0 + -8);
            }
          }
        }
        local_3e8 = (String *)&local_2b8;
        local_2a8 = 0;
        String::parse_latin1((String *)&local_2a8,"");
        local_2b8 = 0;
        String::parse_latin1(local_3e8,"Failed to get CodeResources hash.");
        TTR((String *)&local_298,local_3e8);
        if (*(long *)param_8 != local_298) {
          CowData<char32_t>::operator=((CowData<char32_t> *)param_8,(CowData *)&local_298);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_3e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
        _err_print_error("_codesign_file","editor/export/codesign.cpp",0x54a,
                         "Method/function failed. Returning: FAILED",
                         "CodeSign: Failed to get CodeResources hash.",0,0);
      }
      else {
        if (local_2c0 != 0) {
          lVar18 = *(long *)(local_2c0 + -8);
          lVar17 = 0;
          if (1 < lVar18) {
            while (pOVar14 = local_348, lVar17 < lVar18) {
              pCVar4 = (CowData *)(local_2c0 + lVar17 * 8);
              pcVar5 = *(code **)(*(long *)local_348 + 0x208);
              local_298 = 0;
              if (*(long *)pCVar4 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_298,pCVar4);
              }
              lVar17 = lVar17 + 1;
              (*pcVar5)(pOVar14,(String *)&local_298);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
              if (local_2c0 == 0) break;
              lVar18 = *(long *)(local_2c0 + -8);
            }
          }
        }
        local_2a8 = 0;
        String::parse_latin1((String *)&local_2a8,"");
        local_2b8 = 0;
        String::parse_latin1((String *)&local_2b8,"Failed to create _CodeSignature subfolder.");
        TTR((String *)&local_298,(String *)&local_2b8);
        lVar18 = *(long *)param_8;
        if (lVar18 != local_298) {
          lVar17 = local_298;
          if (lVar18 != 0) {
            LOCK();
            plVar2 = (long *)(lVar18 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar18 = *(long *)param_8;
              *(undefined8 *)param_8 = 0;
              Memory::free_static((void *)(lVar18 + -0x10),false);
              lVar17 = local_298;
            }
          }
          local_298 = 0;
          *(long *)param_8 = lVar17;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
        _err_print_error("_codesign_file","editor/export/codesign.cpp",0x542,
                         "Method/function failed. Returning: FAILED",
                         "CodeSign: Failed to create _CodeSignature subfolder.",0,0);
      }
    }
    CowData<CodeSignCodeResources::CRFile>::_unref
              ((CowData<CodeSignCodeResources::CRFile> *)&local_250);
    CowData<CodeSignCodeResources::CRFile>::_unref
              ((CowData<CodeSignCodeResources::CRFile> *)local_260);
    CowData<CodeSignCodeResources::CRRule>::_unref
              ((CowData<CodeSignCodeResources::CRRule> *)local_270);
    CowData<CodeSignCodeResources::CRRule>::_unref
              ((CowData<CodeSignCodeResources::CRRule> *)local_280);
    goto LAB_0010fb0b;
  }
LAB_00110427:
  if ((local_358 != (Object *)0x0) && (1 < *(uint *)(local_358 + -8))) {
LAB_00110556:
    local_3a0 = (CowData<char32_t> *)&local_358;
    String::utf8();
    cVar9 = is_print_verbose_enabled();
    if (cVar9 != '\0') {
      local_2a8 = 0;
      if (local_358 != (Object *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_2a8,(CowData *)local_3a0);
      }
      local_2b8 = 0;
      String::parse_latin1((String *)&local_2b8,"CodeSign: Used bundle ID: %s");
      vformat<String>((String *)&local_298,(String *)&local_2b8,(CowData<char32_t> *)&local_2a8);
      Variant::Variant((Variant *)local_228,(String *)&local_298);
      stringify_variants((Variant *)&local_288);
      __print_line((String *)&local_288);
      pOVar14 = local_288;
      if (local_288 != (Object *)0x0) {
        LOCK();
        pOVar15 = local_288 + -0x10;
        *(long *)pOVar15 = *(long *)pOVar15 + -1;
        UNLOCK();
        if (*(long *)pOVar15 == 0) {
          local_288 = (Object *)0x0;
          Memory::free_static(pOVar14 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
    }
    cVar9 = is_print_verbose_enabled();
    if (cVar9 != '\0') {
      Variant::Variant((Variant *)local_228,"CodeSign: Processing entitlements...");
      print_line((Variant *)local_228);
      if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    local_338 = (Object *)0x0;
    local_330 = (Object *)0x0;
    if ((*(long *)param_6 == 0) || (*(uint *)(*(long *)param_6 + -8) < 2)) {
LAB_001106be:
      cVar9 = is_print_verbose_enabled();
      if (cVar9 != '\0') {
        Variant::Variant((Variant *)local_228,"CodeSign: Generating requirements...");
        print_line((Variant *)local_228);
        if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      local_328 = (Object *)0x0;
      local_320 = 0;
      String::parse_latin1((String *)&local_320,"");
      Ref<CodeSignRequirements>::instantiate<>((Ref<CodeSignRequirements> *)&local_328);
      if (local_2c0 == 0) {
        local_3c0 = local_328;
      }
      else {
        local_398 = 0;
        do {
          if (*(long *)(local_2c0 + -8) <= local_398) {
            local_3c0 = local_328;
            if (1 < *(long *)(local_2c0 + -8)) {
              cVar9 = is_print_verbose_enabled();
              if (cVar9 != '\0') {
                Variant::Variant((Variant *)local_228,"CodeSign: Rebuilding fat executable...");
                print_line((Variant *)local_228);
                if (Variant::needs_deinit[(int)local_228[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              RefCounted::RefCounted((RefCounted *)local_228);
              local_228[0] = (undefined **)LipO::extract_arch;
              local_a8 = (Object *)0x0;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = local_98._8_8_;
              local_98 = auVar6 << 0x40;
              cVar9 = LipO::create_file((String *)local_228,(Vector *)&local_350);
              if (cVar9 == '\0') {
                if ((local_2c0 == 0) || (lVar18 = 0, *(long *)(local_2c0 + -8) < 2))
                goto LAB_001146ec;
                goto LAB_00114693;
              }
              if (local_2c0 == 0) goto LAB_0011401c;
              lVar18 = *(long *)(local_2c0 + -8);
              lVar17 = 0;
              if (1 < lVar18) goto LAB_00113fc4;
              goto LAB_0011401c;
            }
            break;
          }
          RefCounted::RefCounted((RefCounted *)local_228);
          local_a8 = (Object *)0x0;
          local_228[0] = &PTR__initialize_classv_0011d440;
          local_a0 = 0;
          local_88 = (Object *)0xffffffffffffffff;
          local_80 = 0;
          local_78 = 0;
          local_98 = (undefined1  [16])0x0;
          local_70 = (undefined1  [16])0x0;
          if (local_2c0 == 0) {
            lVar18 = 0;
LAB_00111da1:
            local_70 = (undefined1  [16])0x0;
            local_78 = 0;
            local_80 = 0;
            local_88 = (Object *)0xffffffffffffffff;
            local_98 = (undefined1  [16])0x0;
            local_a0 = 0;
            local_a8 = (Object *)0x0;
            local_228[0] = &PTR__initialize_classv_0011d440;
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,local_398,lVar18,"p_index","size()",
                       "",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar18 = *(long *)(local_2c0 + -8);
          if (lVar18 <= local_398) goto LAB_00111da1;
          cVar9 = MachO::open_file((String *)local_228);
          if (cVar9 == '\0') {
            if (local_2c0 == 0) goto LAB_0011410c;
            lVar18 = *(long *)(local_2c0 + -8);
            lVar17 = 0;
            if (1 < lVar18) goto LAB_001140b4;
            goto LAB_0011410c;
          }
          cVar9 = is_print_verbose_enabled();
          if (cVar9 == '\0') {
            cVar9 = is_print_verbose_enabled();
          }
          else {
            MachO::get_cputype();
            local_2a8 = 0;
            local_288 = (Object *)0x116a38;
            local_280[0] = 0x30;
            String::parse_latin1((StrRange *)&local_2a8);
            vformat<unsigned_int>((String *)&local_298,(uint)(StrRange *)&local_2a8);
            Variant::Variant((Variant *)local_248,(String *)&local_298);
            stringify_variants((Variant *)&local_288);
            __print_line((String *)&local_288);
            pOVar14 = local_288;
            if (local_288 != (Object *)0x0) {
              LOCK();
              pOVar15 = local_288 + -0x10;
              *(long *)pOVar15 = *(long *)pOVar15 + -1;
              UNLOCK();
              if (*(long *)pOVar15 == 0) {
                local_288 = (Object *)0x0;
                Memory::free_static(pOVar14 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_248[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
            cVar9 = is_print_verbose_enabled();
          }
          if (cVar9 != '\0') {
            Variant::Variant((Variant *)local_248,"CodeSign: Generating CodeDirectory...");
            stringify_variants((Variant *)&local_288);
            __print_line((String *)&local_288);
            pOVar14 = local_288;
            if (local_288 != (Object *)0x0) {
              LOCK();
              pOVar15 = local_288 + -0x10;
              *(long *)pOVar15 = *(long *)pOVar15 + -1;
              UNLOCK();
              if (*(long *)pOVar15 == 0) {
                local_288 = (Object *)0x0;
                Memory::free_static(pOVar14 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_248[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          pCVar11 = (CodeSignCodeDirectory *)operator_new(0x1a0,"");
          uVar12 = MachO::get_code_limit();
          uVar13 = MachO::get_exe_limit();
          String::utf8();
          CodeSignCodeDirectory::CodeSignCodeDirectory
                    (pCVar11,'\x14','\x01',true,local_340,(CharString *)&local_288,0xc,uVar13,uVar12
                    );
          postinitialize_handler((Object *)pCVar11);
          cVar9 = RefCounted::init_ref();
          pOVar14 = local_288;
          this = (CodeSignCodeDirectory *)0x0;
          if (cVar9 != '\0') {
            this = pCVar11;
          }
          if (local_288 != (Object *)0x0) {
            LOCK();
            pOVar15 = local_288 + -0x10;
            *(long *)pOVar15 = *(long *)pOVar15 + -1;
            UNLOCK();
            if (*(long *)pOVar15 == 0) {
              local_288 = (Object *)0x0;
              Memory::free_static(pOVar14 + -0x10,false);
            }
          }
          pCVar11 = (CodeSignCodeDirectory *)operator_new(0x1a0,"");
          uVar12 = MachO::get_code_limit();
          uVar13 = MachO::get_exe_limit();
          String::utf8();
          CodeSignCodeDirectory::CodeSignCodeDirectory
                    (pCVar11,' ','\x02',true,local_340,(CharString *)&local_288,0xc,uVar13,uVar12);
          postinitialize_handler((Object *)pCVar11);
          cVar9 = RefCounted::init_ref();
          pOVar14 = local_288;
          if (cVar9 == '\0') {
            pCVar11 = (CodeSignCodeDirectory *)0x0;
          }
          if (local_288 != (Object *)0x0) {
            LOCK();
            pOVar15 = local_288 + -0x10;
            *(long *)pOVar15 = *(long *)pOVar15 + -1;
            UNLOCK();
            if (*(long *)pOVar15 == 0) {
              local_288 = (Object *)0x0;
              Memory::free_static(pOVar14 + -0x10,false);
            }
          }
          cVar9 = is_print_verbose_enabled();
          if (cVar9 != '\0') {
            Variant::Variant((Variant *)local_248,"CodeSign: Calculating special slot hashes...");
            stringify_variants((Variant *)&local_288);
            __print_line((String *)&local_288);
            pOVar14 = local_288;
            if (local_288 != (Object *)0x0) {
              LOCK();
              pOVar15 = local_288 + -0x10;
              *(long *)pOVar15 = *(long *)pOVar15 + -1;
              UNLOCK();
              if (*(long *)pOVar15 == 0) {
                local_288 = (Object *)0x0;
                Memory::free_static(pOVar14 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_248[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          if ((local_2f0 != 0) && (*(long *)(local_2f0 + -8) == 0x20)) {
            CodeSignCodeDirectory::set_hash_in_slot(pCVar11,local_2f8,-1);
          }
          if ((local_300 != 0) && (*(long *)(local_300 + -8) == 0x14)) {
            CodeSignCodeDirectory::set_hash_in_slot(this,local_308,-1);
          }
          pOVar14 = local_328;
          (**(code **)(*(long *)local_328 + 0x150))((CowData<char32_t> *)&local_288,local_328);
          CodeSignCodeDirectory::set_hash_in_slot(this,(Vector *)&local_288,-2);
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_280);
          (**(code **)(*(long *)pOVar14 + 0x158))((CowData<char32_t> *)&local_288,pOVar14);
          CodeSignCodeDirectory::set_hash_in_slot(pCVar11,(Vector *)&local_288,-2);
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_280);
          if ((local_2d0 != 0) && (*(long *)(local_2d0 + -8) == 0x20)) {
            CodeSignCodeDirectory::set_hash_in_slot(pCVar11,(Vector *)&local_2d8,-3);
          }
          if ((local_2e0 != 0) && (*(long *)(local_2e0 + -8) == 0x14)) {
            CodeSignCodeDirectory::set_hash_in_slot(this,local_2e8,-3);
          }
          pOVar15 = local_338;
          if (local_338 != (Object *)0x0) {
            (**(code **)(*(long *)local_338 + 0x150))((CowData<char32_t> *)&local_288,local_338);
            CodeSignCodeDirectory::set_hash_in_slot(this,(Vector *)&local_288,-5);
            CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_280);
            (**(code **)(*(long *)pOVar15 + 0x158))((CowData<char32_t> *)&local_288,pOVar15);
            CodeSignCodeDirectory::set_hash_in_slot(pCVar11,(Vector *)&local_288,-5);
            CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_280);
          }
          pOVar8 = local_330;
          if (local_330 != (Object *)0x0) {
            (**(code **)(*(long *)local_330 + 0x150))((CowData<char32_t> *)&local_288,local_330);
            CodeSignCodeDirectory::set_hash_in_slot(this,(Vector *)&local_288,-7);
            CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_280);
            (**(code **)(*(long *)pOVar8 + 0x158))((CowData<char32_t> *)&local_288,pOVar8);
            CodeSignCodeDirectory::set_hash_in_slot(pCVar11,(Vector *)&local_288,-7);
            CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_280);
          }
          if (*(code **)(*(long *)this + 0x160) != CodeSignEntitlementsText::get_size) {
            (**(code **)(*(long *)this + 0x160))(this);
          }
          if (*(code **)(*(long *)pCVar11 + 0x160) != CodeSignEntitlementsText::get_size) {
            (**(code **)(*(long *)pCVar11 + 0x160))(pCVar11);
          }
          if (*(code **)(*(long *)pOVar14 + 0x160) != CodeSignEntitlementsText::get_size) {
            (**(code **)(*(long *)pOVar14 + 0x160))(pOVar14);
          }
          if ((pOVar15 != (Object *)0x0) &&
             (*(code **)(*(long *)pOVar15 + 0x160) != CodeSignEntitlementsText::get_size)) {
            (**(code **)(*(long *)pOVar15 + 0x160))(pOVar15);
          }
          if ((pOVar8 != (Object *)0x0) &&
             (*(code **)(*(long *)pOVar8 + 0x160) != CodeSignEntitlementsText::get_size)) {
            (**(code **)(*(long *)pOVar8 + 0x160))(pOVar8);
          }
          cVar9 = is_print_verbose_enabled();
          if (cVar9 != '\0') {
            local_2a8 = 0;
            local_288 = (Object *)0x116ac8;
            local_280[0] = 0x40;
            String::parse_latin1((StrRange *)&local_2a8);
            vformat<int>((String *)&local_298,(int)(StrRange *)&local_2a8);
            Variant::Variant((Variant *)local_248,(String *)&local_298);
            stringify_variants((Variant *)&local_288);
            __print_line((String *)&local_288);
            pOVar14 = local_288;
            if (local_288 != (Object *)0x0) {
              LOCK();
              pOVar1 = local_288 + -0x10;
              *(long *)pOVar1 = *(long *)pOVar1 + -1;
              UNLOCK();
              if (*(long *)pOVar1 == 0) {
                local_288 = (Object *)0x0;
                Memory::free_static(pOVar14 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_248[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
          }
          cVar9 = MachO::set_signature_size((ulong)local_228);
          if (cVar9 == '\0') {
            if (local_2c0 == 0) goto LAB_001142ec;
            lVar18 = *(long *)(local_2c0 + -8);
            lVar17 = 0;
            if (1 < lVar18) goto LAB_00114294;
            goto LAB_001142ec;
          }
          cVar9 = is_print_verbose_enabled();
          if (cVar9 != '\0') {
            Variant::Variant((Variant *)local_248,"CodeSign: Calculating executable code hashes...")
            ;
            stringify_variants((Variant *)&local_288);
            __print_line((String *)&local_288);
            pOVar14 = local_288;
            if (local_288 != (Object *)0x0) {
              LOCK();
              pOVar1 = local_288 + -0x10;
              *(long *)pOVar1 = *(long *)pOVar1 + -1;
              UNLOCK();
              if (*(long *)pOVar1 == 0) {
                local_288 = (Object *)0x0;
                Memory::free_static(pOVar14 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_248[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          local_2b0 = 0;
          local_2a0 = 0;
          local_290 = 0;
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_2a0,0x14);
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_290,0x20);
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_2b0,0x1000);
          MachO::get_file();
          (**(code **)(*(long *)local_288 + 0x1b8))();
          if (((local_288 != (Object *)0x0) &&
              (cVar9 = RefCounted::unreference(), pOVar14 = local_288, cVar9 != '\0')) &&
             (cVar9 = predelete_handler(local_288), cVar9 != '\0')) {
            (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
            Memory::free_static(pOVar14,false);
          }
          if (0 < *(int *)(pCVar11 + 400)) {
            iVar10 = 0;
            do {
              MachO::get_file();
              pOVar14 = local_288;
              pcVar5 = *(code **)(*(long *)local_288 + 0x220);
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_2b0);
              uVar12 = local_2b0;
              (*pcVar5)(pOVar14,local_2b0,0x1000);
              if (((local_288 != (Object *)0x0) &&
                  (cVar9 = RefCounted::unreference(), pOVar14 = local_288, cVar9 != '\0')) &&
                 (cVar9 = predelete_handler(local_288), cVar9 != '\0')) {
                (**(code **)(*(long *)pOVar14 + 0x140))();
                Memory::free_static(pOVar14,false);
              }
              CryptoCore::SHA256Context::SHA256Context((SHA256Context *)&local_310);
              CryptoCore::SHA256Context::start();
              CryptoCore::SHA256Context::update((uchar *)&local_310,uVar12);
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_290);
              CryptoCore::SHA256Context::finish((uchar *)&local_310);
              CodeSignCodeDirectory::set_hash_in_slot(pCVar11,(Vector *)&local_298,iVar10);
              CryptoCore::SHA1Context::SHA1Context((SHA1Context *)&local_288);
              CryptoCore::SHA1Context::start();
              CryptoCore::SHA1Context::update((uchar *)&local_288,uVar12);
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_2a0);
              CryptoCore::SHA1Context::finish((uchar *)&local_288);
              iVar19 = iVar10 + 1;
              CodeSignCodeDirectory::set_hash_in_slot(this,(Vector *)&local_2a8,iVar10);
              CryptoCore::SHA1Context::~SHA1Context((SHA1Context *)&local_288);
              CryptoCore::SHA256Context::~SHA256Context((SHA256Context *)&local_310);
              iVar10 = iVar19;
            } while (iVar19 < *(int *)(pCVar11 + 400));
          }
          if (0 < *(int *)(pCVar11 + 0x194)) {
            MachO::get_file();
            pOVar14 = local_288;
            pcVar5 = *(code **)(*(long *)local_288 + 0x220);
            iVar10 = *(int *)(pCVar11 + 0x194);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_2b0);
            uVar12 = local_2b0;
            (*pcVar5)(pOVar14,local_2b0,(long)iVar10);
            if (((local_288 != (Object *)0x0) &&
                (cVar9 = RefCounted::unreference(), pOVar14 = local_288, cVar9 != '\0')) &&
               (cVar9 = predelete_handler(local_288), cVar9 != '\0')) {
              (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
              Memory::free_static(pOVar14,false);
            }
            CryptoCore::SHA256Context::SHA256Context((SHA256Context *)&local_310);
            CryptoCore::SHA256Context::start();
            CryptoCore::SHA256Context::update((uchar *)&local_310,uVar12);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_290);
            CryptoCore::SHA256Context::finish((uchar *)&local_310);
            CodeSignCodeDirectory::set_hash_in_slot
                      (pCVar11,(Vector *)&local_298,*(int *)(pCVar11 + 400));
            CryptoCore::SHA1Context::SHA1Context((SHA1Context *)&local_288);
            CryptoCore::SHA1Context::start();
            CryptoCore::SHA1Context::update((uchar *)&local_288,uVar12);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_2a0);
            CryptoCore::SHA1Context::finish((uchar *)&local_288);
            CodeSignCodeDirectory::set_hash_in_slot(this,(Vector *)&local_2a8,*(int *)(this + 400));
            CryptoCore::SHA1Context::~SHA1Context((SHA1Context *)&local_288);
            CryptoCore::SHA256Context::~SHA256Context((SHA256Context *)&local_310);
          }
          cVar9 = is_print_verbose_enabled();
          if (cVar9 != '\0') {
            Variant::Variant((Variant *)local_248,"CodeSign: Generating signature...");
            stringify_variants((Variant *)&local_288);
            __print_line((String *)&local_288);
            pOVar14 = local_288;
            if (local_288 != (Object *)0x0) {
              LOCK();
              pOVar1 = local_288 + -0x10;
              *(long *)pOVar1 = *(long *)pOVar1 + -1;
              UNLOCK();
              if (*(long *)pOVar1 == 0) {
                local_288 = (Object *)0x0;
                Memory::free_static(pOVar14 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_248[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          local_318 = (Object *)0x0;
          Ref<CodeSignSignature>::instantiate<>((Ref<CodeSignSignature> *)&local_318);
          cVar9 = is_print_verbose_enabled();
          if (cVar9 != '\0') {
            Variant::Variant((Variant *)local_248,"CodeSign: Writing signature superblob...");
            stringify_variants((Variant *)&local_288);
            __print_line((String *)&local_288);
            pOVar14 = local_288;
            if (local_288 != (Object *)0x0) {
              LOCK();
              pOVar1 = local_288 + -0x10;
              *(long *)pOVar1 = *(long *)pOVar1 + -1;
              UNLOCK();
              if (*(long *)pOVar1 == 0) {
                local_288 = (Object *)0x0;
                Memory::free_static(pOVar14 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_248[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          local_280[0] = 0;
          pOVar14 = (Object *)__dynamic_cast(pCVar11,&Object::typeinfo,&CodeSignBlob::typeinfo,0);
          if ((pOVar14 != (Object *)0x0) &&
             (local_310 = pOVar14, cVar9 = RefCounted::reference(), cVar9 != '\0')) {
            CodeSignSuperBlob::add_blob((CodeSignSuperBlob *)&local_288,(SHA256Context *)&local_310)
            ;
            cVar9 = RefCounted::unreference();
            if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar14), cVar9 != '\0')) {
              (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
              Memory::free_static(pOVar14,false);
            }
          }
          pOVar14 = (Object *)__dynamic_cast(this,&Object::typeinfo,&CodeSignBlob::typeinfo,0);
          if ((pOVar14 != (Object *)0x0) &&
             (local_310 = pOVar14, cVar9 = RefCounted::reference(), cVar9 != '\0')) {
            CodeSignSuperBlob::add_blob((CodeSignSuperBlob *)&local_288,(SHA256Context *)&local_310)
            ;
            cVar9 = RefCounted::unreference();
            if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar14), cVar9 != '\0')) {
              (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
              Memory::free_static(pOVar14,false);
            }
          }
          local_3c0 = local_328;
          if (((local_328 != (Object *)0x0) &&
              (pOVar14 = (Object *)
                         __dynamic_cast(local_328,&Object::typeinfo,&CodeSignBlob::typeinfo,0),
              pOVar14 != (Object *)0x0)) &&
             (local_310 = pOVar14, cVar9 = RefCounted::reference(), cVar9 != '\0')) {
            CodeSignSuperBlob::add_blob((CodeSignSuperBlob *)&local_288,(SHA256Context *)&local_310)
            ;
            cVar9 = RefCounted::unreference();
            if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar14), cVar9 != '\0')) {
              (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
              Memory::free_static(pOVar14,false);
            }
          }
          if (((pOVar15 != (Object *)0x0) && (local_338 != (Object *)0x0)) &&
             ((pOVar14 = (Object *)
                         __dynamic_cast(local_338,&Object::typeinfo,&CodeSignBlob::typeinfo,0),
              pOVar14 != (Object *)0x0 &&
              (local_310 = pOVar14, cVar9 = RefCounted::reference(), cVar9 != '\0')))) {
            CodeSignSuperBlob::add_blob((CodeSignSuperBlob *)&local_288,(SHA256Context *)&local_310)
            ;
            cVar9 = RefCounted::unreference();
            if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar14), cVar9 != '\0')) {
              (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
              Memory::free_static(pOVar14,false);
            }
          }
          if ((((pOVar8 != (Object *)0x0) && (local_330 != (Object *)0x0)) &&
              (pOVar14 = (Object *)
                         __dynamic_cast(local_330,&Object::typeinfo,&CodeSignBlob::typeinfo,0),
              pOVar14 != (Object *)0x0)) &&
             (local_310 = pOVar14, cVar9 = RefCounted::reference(), cVar9 != '\0')) {
            CodeSignSuperBlob::add_blob((CodeSignSuperBlob *)&local_288,(SHA256Context *)&local_310)
            ;
            cVar9 = RefCounted::unreference();
            if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar14), cVar9 != '\0')) {
              (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
              Memory::free_static(pOVar14,false);
            }
          }
          pOVar14 = local_318;
          if (((local_318 != (Object *)0x0) &&
              (pOVar15 = (Object *)
                         __dynamic_cast(local_318,&Object::typeinfo,&CodeSignBlob::typeinfo,0),
              pOVar15 != (Object *)0x0)) &&
             (local_310 = pOVar15, cVar9 = RefCounted::reference(), cVar9 != '\0')) {
            CodeSignSuperBlob::add_blob((CodeSignSuperBlob *)&local_288,(SHA256Context *)&local_310)
            ;
            cVar9 = RefCounted::unreference();
            if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar15), cVar9 != '\0')) {
              (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
              Memory::free_static(pOVar15,false);
            }
          }
          MachO::get_file();
          pOVar15 = local_310;
          pcVar5 = *(code **)(*(long *)local_310 + 0x1b8);
          MachO::get_signature_offset();
          (*pcVar5)(pOVar15);
          if (((local_310 != (Object *)0x0) &&
              (cVar9 = RefCounted::unreference(), pOVar15 = local_310, cVar9 != '\0')) &&
             (cVar9 = predelete_handler(local_310), cVar9 != '\0')) {
            (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
            Memory::free_static(pOVar15,false);
          }
          MachO::get_file();
          CodeSignSuperBlob::write_to_file((CodeSignSuperBlob *)&local_288);
          if (((local_310 != (Object *)0x0) &&
              (cVar9 = RefCounted::unreference(), pOVar15 = local_310, cVar9 != '\0')) &&
             (cVar9 = predelete_handler(local_310), cVar9 != '\0')) {
            (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
            Memory::free_static(pOVar15,false);
          }
          CowData<Ref<CodeSignBlob>>::_unref((CowData<Ref<CodeSignBlob>> *)local_280);
          if (((pOVar14 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
             (cVar9 = predelete_handler(pOVar14), cVar9 != '\0')) {
            (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
            Memory::free_static(pOVar14,false);
          }
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_290);
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_2a0);
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_2b0);
          cVar9 = RefCounted::unreference();
          if ((cVar9 != '\0') && (cVar9 = predelete_handler((Object *)pCVar11), cVar9 != '\0')) {
            (**(code **)(*(long *)pCVar11 + 0x140))(pCVar11);
            Memory::free_static(pCVar11,false);
          }
          cVar9 = RefCounted::unreference();
          if ((cVar9 != '\0') && (cVar9 = predelete_handler((Object *)this), cVar9 != '\0')) {
            (**(code **)(*(long *)this + 0x140))(this);
            Memory::free_static(this,false);
          }
          local_228[0] = &PTR__initialize_classv_0011d440;
          if (((local_a8 != (Object *)0x0) &&
              (cVar9 = RefCounted::unreference(), pOVar14 = local_a8, cVar9 != '\0')) &&
             (cVar9 = predelete_handler(local_a8), cVar9 != '\0')) {
            (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
            Memory::free_static(pOVar14,false);
          }
          local_228[0] = &PTR__initialize_classv_0011d180;
          Object::~Object((Object *)local_228);
          local_398 = local_398 + 1;
        } while (local_2c0 != 0);
      }
      goto LAB_00111247;
    }
    FileAccess::get_file_as_string((String *)&local_2b8,param_6);
    if ((local_2b8 != 0) && (1 < *(uint *)(local_2b8 - 8))) {
      local_288 = (Object *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_288,(CowData *)&local_2b8);
      Ref<CodeSignEntitlementsText>::instantiate<String>
                ((Ref<CodeSignEntitlementsText> *)&local_338,(CowData<char32_t> *)&local_288);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
      local_288 = (Object *)0x0;
      if (local_2b8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_288,(CowData *)&local_2b8);
      }
      Ref<CodeSignEntitlementsBinary>::instantiate<String>
                ((Ref<CodeSignEntitlementsBinary> *)&local_330,(CowData<char32_t> *)&local_288);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
      goto LAB_001106be;
    }
    if (local_2c0 != 0) {
      lVar18 = *(long *)(local_2c0 + -8);
      lVar17 = 0;
      if (1 < lVar18) {
        while (pOVar14 = local_348, lVar17 < lVar18) {
          pCVar4 = (CowData *)(local_2c0 + lVar17 * 8);
          pcVar5 = *(code **)(*(long *)local_348 + 0x208);
          local_288 = (Object *)0x0;
          if (*(long *)pCVar4 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_288,pCVar4);
          }
          lVar17 = lVar17 + 1;
          (*pcVar5)(pOVar14,(CowData<char32_t> *)&local_288);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
          if (local_2c0 == 0) break;
          lVar18 = *(long *)(local_2c0 + -8);
        }
      }
    }
    local_298 = 0;
    String::parse_latin1((String *)&local_298,"");
    local_2a8 = 0;
    String::parse_latin1((String *)&local_2a8,"Invalid entitlements file.");
    TTR((String *)&local_288,(String *)&local_2a8);
    if (*(Object **)param_8 != local_288) {
      CowData<char32_t>::_unref((CowData<char32_t> *)param_8);
      pOVar14 = local_288;
      local_288 = (Object *)0x0;
      *(Object **)param_8 = pOVar14;
    }
    iVar10 = 1;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
    _err_print_error("_codesign_file","editor/export/codesign.cpp",0x563,
                     "Method/function failed. Returning: FAILED",
                     "CodeSign: Invalid entitlements file.",0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
    goto LAB_001112b9;
  }
  CryptoCore::RandomGenerator::RandomGenerator((RandomGenerator *)&local_298);
  iVar10 = CryptoCore::RandomGenerator::init();
  if (iVar10 == 0) {
    iVar10 = CryptoCore::RandomGenerator::get_random_bytes((uchar *)&local_298,(ulong)local_58);
    if (iVar10 == 0) {
      String::hex_encode_buffer((uchar *)&local_2a8,(int)local_58);
      local_2b8 = 0;
      local_288 = (Object *)0x117227;
      local_280[0] = 10;
      String::parse_latin1((StrRange *)&local_2b8);
      String::operator+((String *)&local_288,(String *)&local_2b8);
      if (local_358 != local_288) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_358);
        local_358 = local_288;
        local_288 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
      CryptoCore::RandomGenerator::~RandomGenerator((RandomGenerator *)&local_298);
      goto LAB_00110556;
    }
    _err_print_error("_codesign_file","editor/export/codesign.cpp",0x554,
                     "Condition \"err\" is true. Returning: err","Failed to generate UUID.",0,0);
  }
  else {
    iVar10 = 1;
    _err_print_error("_codesign_file","editor/export/codesign.cpp",0x551,
                     "Condition \"rng.init()\" is true. Returning: FAILED",
                     "Failed to initialize random number generator.",0,0);
  }
  CryptoCore::RandomGenerator::~RandomGenerator((RandomGenerator *)&local_298);
  goto LAB_0010fb1d;
LAB_0011359c:
  pOVar14 = local_348;
  if (lVar18 <= lVar17) goto LAB_001135f2;
  pCVar4 = (CowData *)(local_2c0 + lVar17 * 8);
  pcVar5 = *(code **)(*(long *)local_348 + 0x208);
  local_288 = (Object *)0x0;
  if (*(long *)pCVar4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_288,pCVar4);
  }
  lVar17 = lVar17 + 1;
  (*pcVar5)(pOVar14,(CowData<char32_t> *)&local_288);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if (local_2c0 == 0) goto LAB_001135f2;
  lVar18 = *(long *)(local_2c0 + -8);
  goto LAB_0011359c;
LAB_001135f2:
  local_298 = 0;
  String::parse_latin1((String *)&local_298,"");
  local_2a8 = 0;
  String::parse_latin1((String *)&local_2a8,"Failed to extract thin binary.");
  TTR((String *)&local_288,(String *)&local_2a8);
  if (*(Object **)param_8 != local_288) {
    CowData<char32_t>::_unref((CowData<char32_t> *)param_8);
    pOVar14 = local_288;
    local_288 = (Object *)0x0;
    *(Object **)param_8 = pOVar14;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
  _err_print_error("_codesign_file","editor/export/codesign.cpp",0x4ec,
                   "Method/function failed. Returning: FAILED",
                   "CodeSign: Failed to extract thin binary.",0,0);
  LipO::~LipO((LipO *)local_228);
LAB_0010fb01:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  goto LAB_0010fb0b;
LAB_001139ec:
  pOVar14 = local_348;
  if (lVar18 <= lVar17) goto LAB_00113a44;
  pCVar4 = (CowData *)(local_2c0 + lVar17 * 8);
  pcVar5 = *(code **)(*(long *)local_348 + 0x208);
  local_288 = (Object *)0x0;
  if (*(long *)pCVar4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_288,pCVar4);
  }
  lVar17 = lVar17 + 1;
  (*pcVar5)(pOVar14,(CowData<char32_t> *)&local_288);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if (local_2c0 == 0) goto LAB_00113a44;
  lVar18 = *(long *)(local_2c0 + -8);
  goto LAB_001139ec;
LAB_00113a44:
  local_298 = 0;
  String::parse_latin1((String *)&local_298,"");
  local_2a8 = 0;
  String::parse_latin1((String *)&local_2a8,"Already signed!");
  TTR((String *)&local_288,(String *)&local_2a8);
  pOVar14 = *(Object **)param_8;
  if (pOVar14 != local_288) {
    pOVar15 = local_288;
    if (pOVar14 != (Object *)0x0) {
      LOCK();
      pOVar14 = pOVar14 + -0x10;
      *(long *)pOVar14 = *(long *)pOVar14 + -1;
      UNLOCK();
      if (*(long *)pOVar14 == 0) {
        lVar18 = *(long *)param_8;
        *(undefined8 *)param_8 = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
        pOVar15 = local_288;
      }
    }
    local_288 = (Object *)0x0;
    *(Object **)param_8 = pOVar15;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
  _err_print_error("_codesign_file","editor/export/codesign.cpp",0x501,
                   "Method/function failed. Returning: FAILED","CodeSign: Already signed!",0,0);
  local_228[0] = &PTR__initialize_classv_0011d440;
  if (((local_a8 != (Object *)0x0) &&
      (cVar9 = RefCounted::unreference(), pOVar14 = local_a8, cVar9 != '\0')) &&
     (cVar9 = predelete_handler(local_a8), cVar9 != '\0')) {
    (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
    Memory::free_static(pOVar14,false);
  }
  local_228[0] = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)local_228);
LAB_0010fb0b:
  iVar10 = 1;
  goto LAB_0010fb1d;
LAB_00113fc4:
  pOVar14 = local_348;
  if (lVar18 <= lVar17) goto LAB_0011401c;
  pCVar4 = (CowData *)(local_2c0 + lVar17 * 8);
  pcVar5 = *(code **)(*(long *)local_348 + 0x208);
  local_288 = (Object *)0x0;
  if (*(long *)pCVar4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_288,pCVar4);
  }
  lVar17 = lVar17 + 1;
  (*pcVar5)(pOVar14,(CowData<char32_t> *)&local_288);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if (local_2c0 == 0) goto LAB_0011401c;
  lVar18 = *(long *)(local_2c0 + -8);
  goto LAB_00113fc4;
LAB_0011401c:
  LipO::~LipO((LipO *)local_228);
LAB_00111247:
  iVar10 = 0;
  FileAccess::set_unix_permissions((CowData<char32_t> *)&local_350);
  goto LAB_00111258;
LAB_001140b4:
  pOVar14 = local_348;
  if (lVar18 <= lVar17) goto LAB_0011410c;
  pCVar4 = (CowData *)(local_2c0 + lVar17 * 8);
  pcVar5 = *(code **)(*(long *)local_348 + 0x208);
  local_288 = (Object *)0x0;
  if (*(long *)pCVar4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_288,pCVar4);
  }
  lVar17 = lVar17 + 1;
  (*pcVar5)(pOVar14,(CowData<char32_t> *)&local_288);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if (local_2c0 == 0) goto LAB_0011410c;
  lVar18 = *(long *)(local_2c0 + -8);
  goto LAB_001140b4;
LAB_0011410c:
  local_298 = 0;
  String::parse_latin1((String *)&local_298,"");
  local_2a8 = 0;
  String::parse_latin1((String *)&local_2a8,"Invalid executable file.");
  TTR((String *)&local_288,(String *)&local_2a8);
  pOVar14 = *(Object **)param_8;
  if (pOVar14 != local_288) {
    pOVar15 = local_288;
    if (pOVar14 != (Object *)0x0) {
      LOCK();
      pOVar14 = pOVar14 + -0x10;
      *(long *)pOVar14 = *(long *)pOVar14 + -1;
      UNLOCK();
      if (*(long *)pOVar14 == 0) {
        lVar18 = *(long *)param_8;
        *(undefined8 *)param_8 = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
        pOVar15 = local_288;
      }
    }
    local_288 = (Object *)0x0;
    *(Object **)param_8 = pOVar15;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
  _err_print_error("_codesign_file","editor/export/codesign.cpp",0x574,
                   "Method/function failed. Returning: FAILED","CodeSign: Invalid executable file.",
                   0,0);
  goto LAB_0011420b;
LAB_00114294:
  pOVar14 = local_348;
  if (lVar18 <= lVar17) goto LAB_001142ec;
  pCVar4 = (CowData *)(local_2c0 + lVar17 * 8);
  pcVar5 = *(code **)(*(long *)local_348 + 0x208);
  local_288 = (Object *)0x0;
  if (*(long *)pCVar4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_288,pCVar4);
  }
  lVar17 = lVar17 + 1;
  (*pcVar5)(pOVar14,(CowData<char32_t> *)&local_288);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if (local_2c0 == 0) goto LAB_001142ec;
  lVar18 = *(long *)(local_2c0 + -8);
  goto LAB_00114294;
LAB_001142ec:
  local_298 = 0;
  String::parse_latin1((String *)&local_298,"");
  local_2a8 = 0;
  String::parse_latin1((String *)&local_2a8,"Can\'t resize signature load command.");
  TTR((String *)&local_288,(String *)&local_2a8);
  pOVar14 = *(Object **)param_8;
  if (pOVar14 != local_288) {
    pOVar15 = local_288;
    if (pOVar14 != (Object *)0x0) {
      LOCK();
      pOVar14 = pOVar14 + -0x10;
      *(long *)pOVar14 = *(long *)pOVar14 + -1;
      UNLOCK();
      if (*(long *)pOVar14 == 0) {
        lVar18 = *(long *)param_8;
        *(undefined8 *)param_8 = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
        pOVar15 = local_288;
      }
    }
    local_288 = (Object *)0x0;
    *(Object **)param_8 = pOVar15;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
  _err_print_error("_codesign_file","editor/export/codesign.cpp",0x5a5,
                   "Method/function failed. Returning: FAILED",
                   "CodeSign: Can\'t resize signature load command.",0,0);
  cVar9 = RefCounted::unreference();
  if ((cVar9 != '\0') && (cVar9 = predelete_handler((Object *)pCVar11), cVar9 != '\0')) {
    (**(code **)(*(long *)pCVar11 + 0x140))(pCVar11);
    Memory::free_static(pCVar11,false);
  }
  cVar9 = RefCounted::unreference();
  if ((cVar9 != '\0') && (cVar9 = predelete_handler((Object *)this), cVar9 != '\0')) {
    (**(code **)(*(long *)this + 0x140))(this);
    Memory::free_static(this,false);
  }
LAB_0011420b:
  local_228[0] = &PTR__initialize_classv_0011d440;
  if (((local_a8 != (Object *)0x0) &&
      (cVar9 = RefCounted::unreference(), pOVar14 = local_a8, cVar9 != '\0')) &&
     (cVar9 = predelete_handler(local_a8), cVar9 != '\0')) {
    (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
    Memory::free_static(pOVar14,false);
  }
  iVar10 = 1;
  local_228[0] = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)local_228);
  local_3c0 = local_328;
  goto LAB_00111258;
  while( true ) {
    pCVar4 = (CowData *)(local_2c0 + lVar18 * 8);
    pcVar5 = *(code **)(*(long *)local_348 + 0x208);
    local_288 = (Object *)0x0;
    if (*(long *)pCVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_288,pCVar4);
    }
    lVar18 = lVar18 + 1;
    (*pcVar5)(pOVar14,(CowData<char32_t> *)&local_288);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
    if (local_2c0 == 0) break;
LAB_00114693:
    pOVar14 = local_348;
    if (*(long *)(local_2c0 + -8) <= lVar18) break;
  }
LAB_001146ec:
  local_298 = 0;
  String::parse_latin1((String *)&local_298,"");
  local_2a8 = 0;
  String::parse_latin1((String *)&local_2a8,"Failed to create fat binary.");
  TTR((String *)&local_288,(String *)&local_2a8);
  if (*(Object **)param_8 != local_288) {
    CowData<char32_t>::operator=((CowData<char32_t> *)param_8,(CowData *)&local_288);
  }
  iVar10 = 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_298);
  _err_print_error("_codesign_file","editor/export/codesign.cpp",0x5e7,
                   "Method/function failed. Returning: FAILED",
                   "CodeSign: Failed to create fat binary.",0,0);
  LipO::~LipO((LipO *)local_228);
LAB_00111258:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_320);
  if (((local_3c0 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
     (cVar9 = predelete_handler(local_3c0), cVar9 != '\0')) {
    (**(code **)(*(long *)local_3c0 + 0x140))(local_3c0);
    Memory::free_static(local_3c0,false);
  }
  pOVar15 = local_330;
  pOVar14 = local_338;
  if (((local_330 != (Object *)0x0) &&
      (cVar9 = RefCounted::unreference(), pOVar14 = local_338, cVar9 != '\0')) &&
     (cVar9 = predelete_handler(pOVar15), pOVar14 = local_338, cVar9 != '\0')) {
    (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
    Memory::free_static(pOVar15,false);
  }
  if (((pOVar14 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
     (cVar9 = predelete_handler(pOVar14), cVar9 != '\0')) {
    (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
    Memory::free_static(pOVar14,false);
  }
LAB_001112b9:
  CowData<char>::_unref((CowData<char> *)local_340);
LAB_0010fb1d:
  CowData<String>::_unref((CowData<String> *)&local_2c0);
LAB_0010fb2a:
  local_3a0 = (CowData<char32_t> *)&local_358;
  if (((local_348 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
     (cVar9 = predelete_handler(local_348), cVar9 != '\0')) {
    (**(code **)(*(long *)local_348 + 0x140))(local_348);
    Memory::free_static(local_348,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_350);
  CowData<char32_t>::_unref(local_3a0);
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_2d0);
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_2e0);
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_2f0);
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_300);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}



/* CodeSign::codesign(bool, bool, String const&, String const&, String&) */

undefined4
CodeSign::codesign(bool param_1,bool param_2,String *param_3,String *param_4,String *param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  String *local_a0;
  Object *local_98;
  long local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::create(&local_98,2);
  if (local_98 == (Object *)0x0) {
    local_60 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Can\'t get filesystem access.";
    local_68 = 0;
    local_50 = 0x1c;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    if (*(char **)param_5 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)param_5);
      pcVar8 = local_58;
      local_58 = (char *)0x0;
      *(char **)param_5 = pcVar8;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    _err_print_error("codesign","editor/export/codesign.cpp",0x5f4,
                     "Method/function failed. Returning: ERR_CANT_CREATE",
                     "CodeSign: Can\'t get filesystem access.",0,0);
    uVar6 = 0x14;
    goto LAB_00114a08;
  }
  pcVar2 = *(code **)(*(long *)local_98 + 0x1d8);
  local_58 = (char *)0x0;
  plVar1 = (long *)(*(long *)param_3 + -0x10);
  if (*(long *)param_3 != 0) {
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_001148ab;
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
      local_58 = *(char **)param_3;
    }
  }
LAB_001148ab:
  cVar5 = (*pcVar2)();
  pcVar8 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar8 + -0x10),false);
    }
  }
  if (cVar5 == '\0') {
    pcVar2 = *(code **)(*(long *)local_98 + 0x1d0);
    local_58 = (char *)0x0;
    plVar1 = (long *)(*(long *)param_3 + -0x10);
    if (*(long *)param_3 != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_0011491e;
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
        local_58 = *(char **)param_3;
      }
    }
LAB_0011491e:
    cVar5 = (*pcVar2)();
    pcVar8 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static((void *)((long)pcVar8 + -0x10),false);
      }
    }
    local_60 = 0;
    if (cVar5 == '\0') {
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "Unknown object type.";
      local_68 = 0;
      local_50 = 0x14;
      String::parse_latin1((StrRange *)&local_68);
      TTR((String *)&local_58,(String *)&local_68);
      if (*(char **)param_5 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)param_5);
        pcVar8 = local_58;
        local_58 = (char *)0x0;
        *(char **)param_5 = pcVar8;
      }
      uVar6 = 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      _err_print_error("codesign","editor/export/codesign.cpp",0x61e,
                       "Method/function failed. Returning: FAILED","CodeSign: Unknown object type.",
                       0,0);
    }
    else {
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "";
      local_68 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_68);
      uVar6 = _codesign_file(param_1,param_2,(String *)&local_68,param_3,(String *)&local_60,param_4
                             ,false,param_5);
      lVar3 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
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
    }
    goto LAB_00114a08;
  }
  local_90 = 0;
  local_58 = "Current";
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_90);
  pOVar4 = local_98;
  local_88 = (char *)0x0;
  local_80 = (char *)0x0;
  local_78 = (char *)0x0;
  pcVar2 = *(code **)(*(long *)local_98 + 0x1d0);
  local_58 = "Contents/Info.plist";
  local_60 = 0;
  local_50 = 0x13;
  String::parse_latin1((StrRange *)&local_60);
  String::path_join((String *)&local_58);
  cVar5 = (*pcVar2)(pOVar4);
  pcVar8 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar8 + -0x10,false);
    }
  }
  lVar3 = local_60;
  if (local_60 == 0) {
LAB_00114b43:
    if (cVar5 == '\0') goto LAB_00114b4c;
LAB_00114fc2:
    local_58 = "Contents/Info.plist";
    local_60 = 0;
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_60);
    String::path_join((String *)&local_58);
    if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_58;
      local_58 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = "Contents/MacOS";
    local_60 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_60);
    String::path_join((String *)&local_58);
    if (local_80 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_80 = local_58;
      local_58 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = "Contents";
    local_60 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_60);
    String::path_join((String *)&local_58);
    if (local_78 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_58;
      local_58 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00114e25:
    bVar9 = false;
LAB_00114e27:
    local_a0 = (String *)&local_80;
    uVar6 = _codesign_file(param_1,param_2,(String *)&local_88,local_a0,(String *)&local_78,param_4,
                           bVar9,param_5);
  }
  else {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00114b43;
    local_60 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    if (cVar5 != '\0') goto LAB_00114fc2;
LAB_00114b4c:
    pOVar4 = local_98;
    pcVar2 = *(code **)(*(long *)local_98 + 0x1d0);
    local_68 = 0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_90);
    }
    local_70 = 0;
    local_58 = "Versions/%s/Resources/Info.plist";
    local_50 = 0x20;
    String::parse_latin1((StrRange *)&local_70);
    vformat<String>((StrRange *)&local_60,(StrRange *)&local_70,(CowData<char32_t> *)&local_68);
    String::path_join((String *)&local_58);
    cVar5 = (*pcVar2)(pOVar4,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    pOVar4 = local_98;
    if (cVar5 != '\0') {
      local_68 = 0;
      if (local_90 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_90);
      }
      local_70 = 0;
      local_58 = "Versions/%s/Resources/Info.plist";
      local_50 = 0x20;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String>((StrRange *)&local_60,(StrRange *)&local_70,(CowData<char32_t> *)&local_68);
      String::path_join((String *)&local_58);
      if (local_88 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = local_58;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_68 = 0;
      if (local_90 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_90);
      }
      local_70 = 0;
      local_58 = "Versions/%s";
      local_50 = 0xb;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String>((StrRange *)&local_60,(StrRange *)&local_70,(CowData<char32_t> *)&local_68);
      String::path_join((String *)&local_58);
      if (local_80 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        local_80 = local_58;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_68 = 0;
      if (local_90 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_90);
      }
      local_58 = "Versions/%s";
      local_70 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String>((StrRange *)&local_60,(StrRange *)&local_70,(CowData<char32_t> *)&local_68);
      String::path_join((String *)&local_58);
      if (local_78 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_78 = local_58;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      goto LAB_00114e25;
    }
    pcVar2 = *(code **)(*(long *)local_98 + 0x1d0);
    local_58 = "Resources/Info.plist";
    local_60 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_60);
    String::path_join((String *)&local_58);
    cVar5 = (*pcVar2)(pOVar4,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    pOVar4 = local_98;
    if (cVar5 != '\0') {
      local_60 = 0;
      local_58 = "Resources/Info.plist";
      local_50 = 0x14;
      String::parse_latin1((StrRange *)&local_60);
      String::path_join((String *)&local_58);
      if (local_88 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = local_58;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      pcVar8 = *(char **)param_3;
      if (local_80 != pcVar8) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)param_3);
        pcVar8 = *(char **)param_3;
      }
      if (local_78 != pcVar8) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)param_3);
      }
      goto LAB_00114e25;
    }
    pcVar2 = *(code **)(*(long *)local_98 + 0x1d0);
    local_58 = "Info.plist";
    local_60 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_60);
    String::path_join((String *)&local_58);
    cVar5 = (*pcVar2)(pOVar4,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_60 = 0;
    if (cVar5 != '\0') {
      local_50 = 10;
      local_58 = "Info.plist";
      String::parse_latin1((StrRange *)&local_60);
      String::path_join((String *)&local_58);
      if (local_88 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = local_58;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      pcVar8 = *(char **)param_3;
      if (local_80 != pcVar8) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)param_3);
        pcVar8 = *(char **)param_3;
      }
      if (local_78 != pcVar8) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)param_3);
      }
      bVar9 = true;
      goto LAB_00114e27;
    }
    String::parse_latin1((String *)&local_60,"");
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Unknown bundle type.");
    TTR((String *)&local_58,(String *)&local_68);
    if (*(char **)param_5 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)param_5);
      pcVar8 = local_58;
      local_58 = (char *)0x0;
      *(char **)param_5 = pcVar8;
    }
    uVar6 = 1;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    _err_print_error("codesign","editor/export/codesign.cpp",0x618,
                     "Method/function failed. Returning: FAILED","CodeSign: Unknown bundle type.",0,
                     0);
  }
  local_a0 = (String *)&local_80;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_00114a08:
  if (((local_98 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_98), cVar5 != '\0')) {
    (**(code **)(*(long *)local_98 + 0x140))(local_98);
    Memory::free_static(local_98,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x11dd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11dd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* CodeSignRequirements::get_index_type() const */

undefined8 CodeSignRequirements::get_index_type(void)

{
  return 2;
}



/* CodeSignEntitlementsText::get_index_type() const */

undefined8 CodeSignEntitlementsText::get_index_type(void)

{
  return 5;
}



/* CodeSignEntitlementsBinary::get_index_type() const */

undefined8 CodeSignEntitlementsBinary::get_index_type(void)

{
  return 7;
}



/* CodeSignCodeDirectory::get_index_type() const */

undefined8 CodeSignCodeDirectory::get_index_type(void)

{
  return 0;
}



/* CodeSignSignature::get_index_type() const */

undefined8 CodeSignSignature::get_index_type(void)

{
  return 0x10000;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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
LAB_00117323:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117323;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0011738e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0011738e:
  return &_get_class_namev()::_class_name_static;
}



/* MachO::~MachO() */

void __thiscall MachO::~MachO(MachO *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011d440;
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  return;
}



/* MachO::~MachO() */

void __thiscall MachO::~MachO(MachO *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011d440;
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* PList::~PList() */

void __thiscall PList::~PList(PList *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011d2e0;
  if (*(long *)(this + 0x1a0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1a0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  return;
}



/* PList::~PList() */

void __thiscall PList::~PList(PList *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011d2e0;
  if (*(long *)(this + 0x1a0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1a0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  operator_delete(this,0x1a8);
  return;
}



/* CodeSignCodeDirectory::~CodeSignCodeDirectory() */

void __thiscall CodeSignCodeDirectory::~CodeSignCodeDirectory(CodeSignCodeDirectory *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011da38;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  return;
}



/* CodeSignSignature::~CodeSignSignature() */

void __thiscall CodeSignSignature::~CodeSignSignature(CodeSignSignature *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011dbc0;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  return;
}



/* CodeSignEntitlementsBinary::~CodeSignEntitlementsBinary() */

void __thiscall
CodeSignEntitlementsBinary::~CodeSignEntitlementsBinary(CodeSignEntitlementsBinary *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011d8b0;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  return;
}



/* CodeSignRequirements::~CodeSignRequirements() */

void __thiscall CodeSignRequirements::~CodeSignRequirements(CodeSignRequirements *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011d5a0;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  return;
}



/* CodeSignEntitlementsText::~CodeSignEntitlementsText() */

void __thiscall CodeSignEntitlementsText::~CodeSignEntitlementsText(CodeSignEntitlementsText *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011d728;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  return;
}



/* CodeSignRequirements::~CodeSignRequirements() */

void __thiscall CodeSignRequirements::~CodeSignRequirements(CodeSignRequirements *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011d5a0;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  operator_delete(this,400);
  return;
}



/* CodeSignCodeDirectory::~CodeSignCodeDirectory() */

void __thiscall CodeSignCodeDirectory::~CodeSignCodeDirectory(CodeSignCodeDirectory *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011da38;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  operator_delete(this,0x1a0);
  return;
}



/* CodeSignEntitlementsText::~CodeSignEntitlementsText() */

void __thiscall CodeSignEntitlementsText::~CodeSignEntitlementsText(CodeSignEntitlementsText *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011d728;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  operator_delete(this,400);
  return;
}



/* CodeSignEntitlementsBinary::~CodeSignEntitlementsBinary() */

void __thiscall
CodeSignEntitlementsBinary::~CodeSignEntitlementsBinary(CodeSignEntitlementsBinary *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011d8b0;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  operator_delete(this,400);
  return;
}



/* CodeSignSignature::~CodeSignSignature() */

void __thiscall CodeSignSignature::~CodeSignSignature(CodeSignSignature *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011dbc0;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011d180;
  Object::~Object((Object *)this);
  operator_delete(this,400);
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



/* CowData<char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

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

void FUN_00117aea(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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



/* CowData<CodeSignCodeResources::CRRule>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<CodeSignCodeResources::CRRule>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<CodeSignCodeResources::CRFile>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<CodeSignCodeResources::CRFile>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<CodeSignBlob> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<CodeSignBlob>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_00117e38:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00117e38;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00117e56;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00117e56:
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
            if (lVar5 == 0) goto LAB_0011812f;
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
LAB_0011812f:
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
    if (cVar6 != '\0') goto LAB_001181e3;
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
              if (lVar5 == 0) goto LAB_00118293;
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
LAB_00118293:
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
      if (cVar6 != '\0') goto LAB_001181e3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001181e3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
  ::String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String::String(char const*) */

void __thiscall String::String(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  ::String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* print_line(Variant const&) */

void print_line(Variant *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  stringify_variants((Variant *)&local_18);
  __print_line((String *)&local_18);
  lVar2 = local_18;
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_18 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00118638) */
/* WARNING: Removing unreachable block (ram,0x00118768) */
/* WARNING: Removing unreachable block (ram,0x00118930) */
/* WARNING: Removing unreachable block (ram,0x00118774) */
/* WARNING: Removing unreachable block (ram,0x0011877e) */
/* WARNING: Removing unreachable block (ram,0x00118910) */
/* WARNING: Removing unreachable block (ram,0x0011878a) */
/* WARNING: Removing unreachable block (ram,0x00118794) */
/* WARNING: Removing unreachable block (ram,0x001188f0) */
/* WARNING: Removing unreachable block (ram,0x001187a0) */
/* WARNING: Removing unreachable block (ram,0x001187aa) */
/* WARNING: Removing unreachable block (ram,0x001188d0) */
/* WARNING: Removing unreachable block (ram,0x001187b6) */
/* WARNING: Removing unreachable block (ram,0x001187c0) */
/* WARNING: Removing unreachable block (ram,0x001188b0) */
/* WARNING: Removing unreachable block (ram,0x001187cc) */
/* WARNING: Removing unreachable block (ram,0x001187d6) */
/* WARNING: Removing unreachable block (ram,0x00118890) */
/* WARNING: Removing unreachable block (ram,0x001187e2) */
/* WARNING: Removing unreachable block (ram,0x001187ec) */
/* WARNING: Removing unreachable block (ram,0x00118870) */
/* WARNING: Removing unreachable block (ram,0x001187f4) */
/* WARNING: Removing unreachable block (ram,0x0011880a) */
/* WARNING: Removing unreachable block (ram,0x00118816) */
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



/* WARNING: Removing unreachable block (ram,0x00118ab0) */
/* WARNING: Removing unreachable block (ram,0x00118be0) */
/* WARNING: Removing unreachable block (ram,0x00118d59) */
/* WARNING: Removing unreachable block (ram,0x00118bec) */
/* WARNING: Removing unreachable block (ram,0x00118bf6) */
/* WARNING: Removing unreachable block (ram,0x00118d3b) */
/* WARNING: Removing unreachable block (ram,0x00118c02) */
/* WARNING: Removing unreachable block (ram,0x00118c0c) */
/* WARNING: Removing unreachable block (ram,0x00118d1d) */
/* WARNING: Removing unreachable block (ram,0x00118c18) */
/* WARNING: Removing unreachable block (ram,0x00118c22) */
/* WARNING: Removing unreachable block (ram,0x00118cff) */
/* WARNING: Removing unreachable block (ram,0x00118c2e) */
/* WARNING: Removing unreachable block (ram,0x00118c38) */
/* WARNING: Removing unreachable block (ram,0x00118ce1) */
/* WARNING: Removing unreachable block (ram,0x00118c44) */
/* WARNING: Removing unreachable block (ram,0x00118c4e) */
/* WARNING: Removing unreachable block (ram,0x00118cc3) */
/* WARNING: Removing unreachable block (ram,0x00118c56) */
/* WARNING: Removing unreachable block (ram,0x00118c60) */
/* WARNING: Removing unreachable block (ram,0x00118ca8) */
/* WARNING: Removing unreachable block (ram,0x00118c68) */
/* WARNING: Removing unreachable block (ram,0x00118c7e) */
/* WARNING: Removing unreachable block (ram,0x00118c8a) */
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



/* WARNING: Removing unreachable block (ram,0x00118ed8) */
/* WARNING: Removing unreachable block (ram,0x00119008) */
/* WARNING: Removing unreachable block (ram,0x00119180) */
/* WARNING: Removing unreachable block (ram,0x00119014) */
/* WARNING: Removing unreachable block (ram,0x0011901e) */
/* WARNING: Removing unreachable block (ram,0x00119162) */
/* WARNING: Removing unreachable block (ram,0x0011902a) */
/* WARNING: Removing unreachable block (ram,0x00119034) */
/* WARNING: Removing unreachable block (ram,0x00119144) */
/* WARNING: Removing unreachable block (ram,0x00119040) */
/* WARNING: Removing unreachable block (ram,0x0011904a) */
/* WARNING: Removing unreachable block (ram,0x00119126) */
/* WARNING: Removing unreachable block (ram,0x00119056) */
/* WARNING: Removing unreachable block (ram,0x00119060) */
/* WARNING: Removing unreachable block (ram,0x00119108) */
/* WARNING: Removing unreachable block (ram,0x0011906c) */
/* WARNING: Removing unreachable block (ram,0x00119076) */
/* WARNING: Removing unreachable block (ram,0x001190ea) */
/* WARNING: Removing unreachable block (ram,0x0011907e) */
/* WARNING: Removing unreachable block (ram,0x00119088) */
/* WARNING: Removing unreachable block (ram,0x001190cf) */
/* WARNING: Removing unreachable block (ram,0x00119090) */
/* WARNING: Removing unreachable block (ram,0x001190a5) */
/* WARNING: Removing unreachable block (ram,0x001190b1) */
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



/* WARNING: Removing unreachable block (ram,0x00119320) */
/* WARNING: Removing unreachable block (ram,0x00119450) */
/* WARNING: Removing unreachable block (ram,0x001195c8) */
/* WARNING: Removing unreachable block (ram,0x0011945c) */
/* WARNING: Removing unreachable block (ram,0x00119466) */
/* WARNING: Removing unreachable block (ram,0x001195aa) */
/* WARNING: Removing unreachable block (ram,0x00119472) */
/* WARNING: Removing unreachable block (ram,0x0011947c) */
/* WARNING: Removing unreachable block (ram,0x0011958c) */
/* WARNING: Removing unreachable block (ram,0x00119488) */
/* WARNING: Removing unreachable block (ram,0x00119492) */
/* WARNING: Removing unreachable block (ram,0x0011956e) */
/* WARNING: Removing unreachable block (ram,0x0011949e) */
/* WARNING: Removing unreachable block (ram,0x001194a8) */
/* WARNING: Removing unreachable block (ram,0x00119550) */
/* WARNING: Removing unreachable block (ram,0x001194b4) */
/* WARNING: Removing unreachable block (ram,0x001194be) */
/* WARNING: Removing unreachable block (ram,0x00119532) */
/* WARNING: Removing unreachable block (ram,0x001194c6) */
/* WARNING: Removing unreachable block (ram,0x001194d0) */
/* WARNING: Removing unreachable block (ram,0x00119517) */
/* WARNING: Removing unreachable block (ram,0x001194d8) */
/* WARNING: Removing unreachable block (ram,0x001194ed) */
/* WARNING: Removing unreachable block (ram,0x001194f9) */
/* String vformat<String, unsigned int, String, String>(String const&, String const, unsigned int
   const, String const, String const) */

undefined8 *
vformat<String,unsigned_int,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,uint param_4,String *param_5,
          String *param_6)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  Variant::Variant(local_88,param_5);
  iVar2 = 0;
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar4 = (int)local_108;
  Array::resize(iVar4);
  pVVar3 = local_b8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar3 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00119740) */
/* WARNING: Removing unreachable block (ram,0x00119870) */
/* WARNING: Removing unreachable block (ram,0x001199e8) */
/* WARNING: Removing unreachable block (ram,0x0011987c) */
/* WARNING: Removing unreachable block (ram,0x00119886) */
/* WARNING: Removing unreachable block (ram,0x001199ca) */
/* WARNING: Removing unreachable block (ram,0x00119892) */
/* WARNING: Removing unreachable block (ram,0x0011989c) */
/* WARNING: Removing unreachable block (ram,0x001199ac) */
/* WARNING: Removing unreachable block (ram,0x001198a8) */
/* WARNING: Removing unreachable block (ram,0x001198b2) */
/* WARNING: Removing unreachable block (ram,0x0011998e) */
/* WARNING: Removing unreachable block (ram,0x001198be) */
/* WARNING: Removing unreachable block (ram,0x001198c8) */
/* WARNING: Removing unreachable block (ram,0x00119970) */
/* WARNING: Removing unreachable block (ram,0x001198d4) */
/* WARNING: Removing unreachable block (ram,0x001198de) */
/* WARNING: Removing unreachable block (ram,0x00119952) */
/* WARNING: Removing unreachable block (ram,0x001198e6) */
/* WARNING: Removing unreachable block (ram,0x001198f0) */
/* WARNING: Removing unreachable block (ram,0x00119937) */
/* WARNING: Removing unreachable block (ram,0x001198f8) */
/* WARNING: Removing unreachable block (ram,0x0011990d) */
/* WARNING: Removing unreachable block (ram,0x00119919) */
/* String vformat<int, int, int>(String const&, int const, int const, int const) */

String * vformat<int,int,int>(String *param_1,int param_2,int param_3,int param_4)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  undefined4 in_register_00000034;
  int iVar4;
  int in_R8D;
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
  Variant::Variant(local_78,in_R8D);
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
  String::sprintf((Array *)local_f0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_f0[0];
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



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[3] == plVar5) {
      lVar4 = plVar2[1];
      lVar3 = plVar2[2];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar4;
        lVar4 = plVar2[1];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00119cd8) */
/* WARNING: Removing unreachable block (ram,0x00119e08) */
/* WARNING: Removing unreachable block (ram,0x00119fd0) */
/* WARNING: Removing unreachable block (ram,0x00119e14) */
/* WARNING: Removing unreachable block (ram,0x00119e1e) */
/* WARNING: Removing unreachable block (ram,0x00119fb0) */
/* WARNING: Removing unreachable block (ram,0x00119e2a) */
/* WARNING: Removing unreachable block (ram,0x00119e34) */
/* WARNING: Removing unreachable block (ram,0x00119f90) */
/* WARNING: Removing unreachable block (ram,0x00119e40) */
/* WARNING: Removing unreachable block (ram,0x00119e4a) */
/* WARNING: Removing unreachable block (ram,0x00119f70) */
/* WARNING: Removing unreachable block (ram,0x00119e56) */
/* WARNING: Removing unreachable block (ram,0x00119e60) */
/* WARNING: Removing unreachable block (ram,0x00119f50) */
/* WARNING: Removing unreachable block (ram,0x00119e6c) */
/* WARNING: Removing unreachable block (ram,0x00119e76) */
/* WARNING: Removing unreachable block (ram,0x00119f30) */
/* WARNING: Removing unreachable block (ram,0x00119e82) */
/* WARNING: Removing unreachable block (ram,0x00119e8c) */
/* WARNING: Removing unreachable block (ram,0x00119f10) */
/* WARNING: Removing unreachable block (ram,0x00119e94) */
/* WARNING: Removing unreachable block (ram,0x00119eaa) */
/* WARNING: Removing unreachable block (ram,0x00119eb6) */
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



/* WARNING: Removing unreachable block (ram,0x0011a0d0) */
/* WARNING: Removing unreachable block (ram,0x0011a1f3) */
/* WARNING: Removing unreachable block (ram,0x0011a390) */
/* WARNING: Removing unreachable block (ram,0x0011a1ff) */
/* WARNING: Removing unreachable block (ram,0x0011a209) */
/* WARNING: Removing unreachable block (ram,0x0011a370) */
/* WARNING: Removing unreachable block (ram,0x0011a215) */
/* WARNING: Removing unreachable block (ram,0x0011a21f) */
/* WARNING: Removing unreachable block (ram,0x0011a350) */
/* WARNING: Removing unreachable block (ram,0x0011a22b) */
/* WARNING: Removing unreachable block (ram,0x0011a235) */
/* WARNING: Removing unreachable block (ram,0x0011a330) */
/* WARNING: Removing unreachable block (ram,0x0011a241) */
/* WARNING: Removing unreachable block (ram,0x0011a24b) */
/* WARNING: Removing unreachable block (ram,0x0011a310) */
/* WARNING: Removing unreachable block (ram,0x0011a257) */
/* WARNING: Removing unreachable block (ram,0x0011a261) */
/* WARNING: Removing unreachable block (ram,0x0011a2f0) */
/* WARNING: Removing unreachable block (ram,0x0011a26d) */
/* WARNING: Removing unreachable block (ram,0x0011a277) */
/* WARNING: Removing unreachable block (ram,0x0011a2d0) */
/* WARNING: Removing unreachable block (ram,0x0011a27f) */
/* WARNING: Removing unreachable block (ram,0x0011a294) */
/* WARNING: Removing unreachable block (ram,0x0011a2a0) */
/* String vformat<>(String const&) */

String * vformat<>(String *param_1)

{
  bool *in_RSI;
  long in_FS_OFFSET;
  Array local_a8 [8];
  undefined8 local_a0 [9];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  Array::Array(local_a8);
  Array::resize((int)local_a8);
  String::sprintf((Array *)local_a0,in_RSI);
  *(undefined8 *)param_1 = local_a0[0];
  Array::~Array(local_a8);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0011a4d8) */
/* WARNING: Removing unreachable block (ram,0x0011a608) */
/* WARNING: Removing unreachable block (ram,0x0011a7d0) */
/* WARNING: Removing unreachable block (ram,0x0011a614) */
/* WARNING: Removing unreachable block (ram,0x0011a61e) */
/* WARNING: Removing unreachable block (ram,0x0011a7b0) */
/* WARNING: Removing unreachable block (ram,0x0011a62a) */
/* WARNING: Removing unreachable block (ram,0x0011a634) */
/* WARNING: Removing unreachable block (ram,0x0011a790) */
/* WARNING: Removing unreachable block (ram,0x0011a640) */
/* WARNING: Removing unreachable block (ram,0x0011a64a) */
/* WARNING: Removing unreachable block (ram,0x0011a770) */
/* WARNING: Removing unreachable block (ram,0x0011a656) */
/* WARNING: Removing unreachable block (ram,0x0011a660) */
/* WARNING: Removing unreachable block (ram,0x0011a750) */
/* WARNING: Removing unreachable block (ram,0x0011a66c) */
/* WARNING: Removing unreachable block (ram,0x0011a676) */
/* WARNING: Removing unreachable block (ram,0x0011a730) */
/* WARNING: Removing unreachable block (ram,0x0011a682) */
/* WARNING: Removing unreachable block (ram,0x0011a68c) */
/* WARNING: Removing unreachable block (ram,0x0011a710) */
/* WARNING: Removing unreachable block (ram,0x0011a694) */
/* WARNING: Removing unreachable block (ram,0x0011a6aa) */
/* WARNING: Removing unreachable block (ram,0x0011a6b6) */
/* String vformat<unsigned int>(String const&, unsigned int const) */

String * vformat<unsigned_int>(String *param_1,uint param_2)

{
  char cVar1;
  Variant *this;
  uint in_EDX;
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



/* CowData<char>::_unref() */

void __thiscall CowData<char>::_unref(CowData<char> *this)

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



/* CowData<char>::_realloc(long) */

undefined8 __thiscall CowData<char>::_realloc(CowData<char> *this,long param_1)

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



/* Ref<PListNode>::unref() */

void __thiscall Ref<PListNode>::unref(Ref<PListNode> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Ref<PListNode>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<PListNode> > > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
::operator[](HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
             *this,String *param_1)

{
  long *plVar1;
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
  undefined8 *puVar42;
  void *pvVar43;
  ulong uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint *puVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0011b130:
    uVar39 = (ulong)uVar55;
    uVar44 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar43 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar43 + uVar48)) && (pvVar43 < (void *)((long)pvVar2 + uVar44))
         ) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar44 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar39 != uVar44);
        goto LAB_0011afb2;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_0011afb6:
      if (iVar45 != 0) {
LAB_0011afbe:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar52 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar52 != 0) {
          uVar38 = uVar52;
        }
        uVar54 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar46 = SUB168(auVar16 * auVar32,8);
        uVar52 = *(uint *)(lVar53 + lVar46 * 4);
        uVar51 = SUB164(auVar16 * auVar32,8);
        if (uVar52 != 0) {
          do {
            if (uVar52 == uVar38) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                lVar3 = *(long *)(pauVar41[1] + 8);
                if (lVar3 != 0) {
                  *(undefined8 *)(pauVar41[1] + 8) = 0;
                  local_68._0_8_ = lVar3;
                  Ref<PListNode>::unref((Ref<PListNode> *)local_68);
                  pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                }
                goto LAB_0011ae3b;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar51 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar46 = SUB168(auVar17 * auVar33,8);
            uVar52 = *(uint *)(lVar53 + lVar46 * 4);
            uVar51 = SUB164(auVar17 * auVar33,8);
          } while ((uVar52 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar52 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar54 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar55;
      goto LAB_0011aa74;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_0011aa74;
    if (iVar45 != 0) goto LAB_0011afbe;
LAB_0011aa9a:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011ae3b;
    }
    uVar39 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar39 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar43 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar44 = uVar48 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar55 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar38);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar55 * lVar53;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar44;
          lVar46 = SUB168(auVar4 * auVar20,8);
          puVar50 = (uint *)(lVar3 + lVar46 * 4);
          iVar45 = SUB164(auVar4 * auVar20,8);
          uVar52 = *puVar50;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar52 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar52 * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar44;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar5 * auVar21,8)) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            uVar54 = SUB164(auVar6 * auVar22,8);
            uVar49 = uVar40;
            if (uVar54 < uVar51) {
              *puVar50 = uVar55;
              puVar42 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar40;
              uVar55 = uVar52;
              uVar51 = uVar54;
            }
            uVar51 = uVar51 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar44;
            lVar46 = SUB168(auVar7 * auVar23,8);
            puVar50 = (uint *)(lVar3 + lVar46 * 4);
            iVar45 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar49;
            uVar52 = *puVar50;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar50 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar55);
    if (iVar45 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar46 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar53 + lVar46 * 4);
      uVar52 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
              goto LAB_0011ae3b;
            }
            lVar53 = *(long *)(this + 0x10);
          }
          uVar51 = uVar51 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar52 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar46 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar53 + lVar46 * 4);
          uVar52 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar52 + uVar55) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar51 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_0011b130;
LAB_0011afb2:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_0011afb6;
    }
LAB_0011aa74:
    if ((float)uVar39 * __LC60 < (float)(iVar45 + 1)) goto LAB_0011aa9a;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_0011b0db:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
LAB_0011ad23:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_0011ad30;
LAB_0011af6d:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    uVar40 = local_68._0_8_;
    uVar49 = local_68._8_8_;
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = uVar40;
    *(undefined8 *)(*pauVar41 + 8) = uVar49;
    if (lVar3 == 0) goto LAB_0011b0db;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0011ad23;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_0011af6d;
LAB_0011ad30:
    *puVar42 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar42;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar37 != 0) {
    uVar55 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar55 * lVar53;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar47 = SUB168(auVar8 * auVar24,8);
  lVar46 = *(long *)(this + 8);
  puVar50 = (uint *)(lVar3 + lVar47 * 4);
  iVar45 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar50;
  pauVar57 = pauVar41;
  if (uVar38 != 0) {
    uVar52 = 0;
    pauVar56 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar45) - SUB164(auVar9 * auVar25,8)) * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar51 = SUB164(auVar10 * auVar26,8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
        *puVar50 = uVar55;
        puVar42 = (undefined8 *)(lVar46 + lVar47 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar42;
        *puVar42 = pauVar56;
        uVar52 = uVar51;
        uVar55 = uVar38;
      }
      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar45 + 1) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar47 = SUB168(auVar11 * auVar27,8);
      puVar50 = (uint *)(lVar3 + lVar47 * 4);
      iVar45 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar50;
      pauVar56 = pauVar57;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar57;
  *puVar50 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011ae3b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<String, Ref<PListNode>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<PListNode> > > >::_lookup_pos(String const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
::_lookup_pos(HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
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



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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
LAB_0011b7b0:
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
  if (lVar10 == 0) goto LAB_0011b7b0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0011b689:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0011b689;
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
    goto LAB_0011b806;
  }
  if (lVar10 == lVar7) {
LAB_0011b72f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0011b806:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0011b71a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011b72f;
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
LAB_0011b71a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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
/* Error CowData<unsigned char>::resize<false>(long) */

undefined8 __thiscall
CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar5 = *(long *)this;
  if (lVar5 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
LAB_0011ba4e:
    lVar9 = 0;
    lVar5 = 0;
  }
  else {
    lVar9 = *(long *)(lVar5 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar5 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar5 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    if (lVar9 == 0) goto LAB_0011ba4e;
    uVar4 = lVar9 - 1U | lVar9 - 1U >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    lVar5 = (uVar4 | uVar4 >> 0x20) + 1;
  }
  uVar4 = param_1 - 1U | param_1 - 1U >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar1 = uVar4 + 1;
  if (lVar9 < param_1) {
    if (lVar1 != lVar5) {
      if (lVar9 == 0) {
        puVar6 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar6 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar8 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar8;
        goto LAB_0011b98c;
      }
      uVar7 = _realloc(this,lVar1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    puVar8 = *(undefined8 **)this;
    if (puVar8 != (undefined8 *)0x0) {
LAB_0011b98c:
      puVar8[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar1 != lVar5) && (uVar7 = _realloc(this,lVar1), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* Vector<unsigned char>::append_array(Vector<unsigned char>) */

void __thiscall Vector<unsigned_char>::append_array(Vector<unsigned_char> *this,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar2 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar7 = 0;
      lVar5 = lVar2;
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar2 + lVar7;
    }
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 8),lVar5);
    if (0 < lVar2) {
      lVar5 = 0;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar6 = 0;
LAB_0011bb59:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar6 = *(long *)(lVar3 + -8);
        if (lVar6 <= lVar5) goto LAB_0011bb59;
        uVar1 = *(undefined1 *)(lVar3 + lVar5);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 8));
        *(undefined1 *)(*(long *)(this + 8) + lVar7 + lVar5) = uVar1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar2);
    }
  }
  return;
}



/* void Ref<CodeSignRequirements>::instantiate<>() */

void __thiscall Ref<CodeSignRequirements>::instantiate<>(Ref<CodeSignRequirements> *this)

{
  char cVar1;
  CodeSignRequirements *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (CodeSignRequirements *)operator_new(400,"");
  CodeSignRequirements::CodeSignRequirements(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (CodeSignRequirements *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (CodeSignRequirements *)pOVar3) goto LAB_0011bc75;
    *(CodeSignRequirements **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0011bc75;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (CodeSignRequirements *)0x0) {
    return;
  }
LAB_0011bc75:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<CodeSignSignature>::instantiate<>() */

void __thiscall Ref<CodeSignSignature>::instantiate<>(Ref<CodeSignSignature> *this)

{
  char cVar1;
  CodeSignSignature *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (CodeSignSignature *)operator_new(400,"");
  CodeSignSignature::CodeSignSignature(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (CodeSignSignature *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (CodeSignSignature *)pOVar3) goto LAB_0011bda5;
    *(CodeSignSignature **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0011bda5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (CodeSignSignature *)0x0) {
    return;
  }
LAB_0011bda5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<CodeSignEntitlementsBinary>::instantiate<String>(String) */

void __thiscall
Ref<CodeSignEntitlementsBinary>::instantiate<String>
          (Ref<CodeSignEntitlementsBinary> *this,String *param_2)

{
  char cVar1;
  CodeSignEntitlementsBinary *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (CodeSignEntitlementsBinary *)operator_new(400,"");
  CodeSignEntitlementsBinary::CodeSignEntitlementsBinary(this_00,param_2);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (CodeSignEntitlementsBinary *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (CodeSignEntitlementsBinary *)pOVar3) goto LAB_0011bed5;
    *(CodeSignEntitlementsBinary **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0011bed5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (CodeSignEntitlementsBinary *)0x0) {
    return;
  }
LAB_0011bed5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<CodeSignEntitlementsText>::instantiate<String>(String) */

void __thiscall
Ref<CodeSignEntitlementsText>::instantiate<String>
          (Ref<CodeSignEntitlementsText> *this,String *param_2)

{
  char cVar1;
  CodeSignEntitlementsText *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (CodeSignEntitlementsText *)operator_new(400,"");
  CodeSignEntitlementsText::CodeSignEntitlementsText(this_00,param_2);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (CodeSignEntitlementsText *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (CodeSignEntitlementsText *)pOVar3) goto LAB_0011c005;
    *(CodeSignEntitlementsText **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0011c005;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (CodeSignEntitlementsText *)0x0) {
    return;
  }
LAB_0011c005:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* CowData<CodeSignCodeResources::CRRule>::_unref() */

void __thiscall
CowData<CodeSignCodeResources::CRRule>::_unref(CowData<CodeSignCodeResources::CRRule> *this)

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
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 3;
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



/* CowData<CodeSignCodeResources::CRFile>::_unref() */

void __thiscall
CowData<CodeSignCodeResources::CRFile>::_unref(CowData<CodeSignCodeResources::CRFile> *this)

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
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 5;
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



/* CowData<Ref<CodeSignBlob> >::_unref() */

void __thiscall CowData<Ref<CodeSignBlob>>::_unref(CowData<Ref<CodeSignBlob>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0011c41d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0011c41d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<CodeSignCodeResources::CRRule>::_realloc(long) */

undefined8 __thiscall
CowData<CodeSignCodeResources::CRRule>::_realloc
          (CowData<CodeSignCodeResources::CRRule> *this,long param_1)

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
/* Error CowData<CodeSignCodeResources::CRRule>::resize<false>(long) */

undefined8 __thiscall
CowData<CodeSignCodeResources::CRRule>::resize<false>
          (CowData<CodeSignCodeResources::CRRule> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
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
    lVar8 = 0;
    lVar10 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar10 = lVar8 * 0x18;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_0011c7e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x18 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar13 = uVar11 + 1;
  if (lVar13 == 0) goto LAB_0011c7e0;
  uVar12 = param_1;
  if (param_1 <= lVar8) {
    while (lVar8 = *(long *)this, lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar12) {
        if (lVar13 != lVar10) {
          uVar7 = _realloc(this,lVar13);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      plVar2 = (long *)(lVar8 + uVar12 * 0x18);
      if (plVar2[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[1];
          plVar2[1] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_0011c836;
  }
  if (lVar13 == lVar10) {
LAB_0011c74b:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0011c836:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_0011c670;
  }
  else {
    if (lVar8 != 0) {
      uVar7 = _realloc(this,lVar13);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0011c74b;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar8 = 0;
  }
  pauVar6 = (undefined1 (*) [16])(puVar9 + lVar8 * 3);
  do {
    *(undefined4 *)pauVar6[1] = 1;
    pauVar4 = pauVar6 + 1;
    *pauVar6 = (undefined1  [16])0x0;
    pauVar6[1][4] = 1;
    pauVar6 = (undefined1 (*) [16])(*pauVar4 + 8);
  } while ((undefined1 (*) [16])(*pauVar4 + 8) != (undefined1 (*) [16])(puVar9 + param_1 * 3));
LAB_0011c670:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<CodeSignCodeResources::CRFile>::_realloc(long) */

undefined8 __thiscall
CowData<CodeSignCodeResources::CRFile>::_realloc
          (CowData<CodeSignCodeResources::CRFile> *this,long param_1)

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
/* Error CowData<CodeSignCodeResources::CRFile>::resize<false>(long) */

undefined8 __thiscall
CowData<CodeSignCodeResources::CRFile>::resize<false>
          (CowData<CodeSignCodeResources::CRFile> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
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
    lVar8 = 0;
    lVar10 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar10 = lVar8 * 0x28;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_0011cbe0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x28 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar13 = uVar11 + 1;
  if (lVar13 == 0) goto LAB_0011cbe0;
  uVar12 = param_1;
  if (param_1 <= lVar8) {
    while (lVar8 = *(long *)this, lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar12) {
        if (lVar13 != lVar10) {
          uVar7 = _realloc(this,lVar13);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      plVar2 = (long *)(lVar8 + uVar12 * 0x28);
      if (plVar2[4] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[4] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[4];
          plVar2[4] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[2] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[2] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[2];
          plVar2[2] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[1];
          plVar2[1] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_0011cc36;
  }
  if (lVar13 == lVar10) {
LAB_0011cb53:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0011cc36:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_0011ca15;
  }
  else {
    if (lVar8 != 0) {
      uVar7 = _realloc(this,lVar13);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0011cb53;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar8 = 0;
  }
  pauVar6 = (undefined1 (*) [16])(puVar9 + lVar8 * 5);
  do {
    *(undefined8 *)pauVar6[1] = 0;
    pauVar4 = pauVar6 + 2;
    *pauVar6 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar6[2] = 0;
    pauVar6 = (undefined1 (*) [16])(*pauVar4 + 8);
  } while ((undefined1 (*) [16])(*pauVar4 + 8) != (undefined1 (*) [16])(puVar9 + param_1 * 5));
LAB_0011ca15:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Ref<CodeSignBlob> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<CodeSignBlob>>::_realloc(CowData<Ref<CodeSignBlob>> *this,long param_1)

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
/* Error CowData<Ref<CodeSignBlob> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<CodeSignBlob>>::resize<false>(CowData<Ref<CodeSignBlob>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011cf70:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0011cf70;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0011ce1a:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0011ce1a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0011cde0;
  }
  if (lVar11 == lVar8) {
LAB_0011ceeb:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0011cde0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0011cecb;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0011ceeb;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0011cecb:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

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
/* String::String(char const*) */

void __thiscall String::String(String *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CodeSignEntitlementsText::~CodeSignEntitlementsText() */

void __thiscall CodeSignEntitlementsText::~CodeSignEntitlementsText(CodeSignEntitlementsText *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CodeSignRequirements::~CodeSignRequirements() */

void __thiscall CodeSignRequirements::~CodeSignRequirements(CodeSignRequirements *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CodeSignEntitlementsBinary::~CodeSignEntitlementsBinary() */

void __thiscall
CodeSignEntitlementsBinary::~CodeSignEntitlementsBinary(CodeSignEntitlementsBinary *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CodeSignSignature::~CodeSignSignature() */

void __thiscall CodeSignSignature::~CodeSignSignature(CodeSignSignature *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CodeSignCodeDirectory::~CodeSignCodeDirectory() */

void __thiscall CodeSignCodeDirectory::~CodeSignCodeDirectory(CodeSignCodeDirectory *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PList::~PList() */

void __thiscall PList::~PList(PList *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MachO::~MachO() */

void __thiscall MachO::~MachO(MachO *this)

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


