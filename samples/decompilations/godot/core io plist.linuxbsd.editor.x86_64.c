
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



/* PListNode::get_type() const */

undefined4 __thiscall PListNode::get_type(PListNode *this)

{
  return *(undefined4 *)(this + 0x17c);
}



/* PListNode::get_asn1_size(unsigned char) const */

long __thiscall PListNode::get_asn1_size(PListNode *this,uchar param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_48;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)(this + 0x17c)) {
  case 1:
    if (*(long *)(this + 0x180) != 0) {
      iVar4 = (int)*(undefined8 *)(*(long *)(this + 0x180) + -8);
      lVar6 = (long)(iVar4 + -1);
      if (iVar4 == 0) {
        lVar6 = 0;
      }
      goto LAB_00100345;
    }
    break;
  case 2:
    lVar7 = *(long *)(this + 400);
    if (lVar7 != 0) {
      iVar4 = param_1 + 1;
      if (param_1 < 2) {
        iVar4 = 1;
      }
      lVar9 = 0;
      lVar6 = 0;
      do {
        if (*(long *)(lVar7 + -8) <= lVar9) break;
        lVar2 = lVar9 * 8;
        lVar9 = lVar9 + 1;
        lVar7 = get_asn1_size(*(PListNode **)(lVar7 + lVar2),param_1);
        lVar6 = lVar6 + (ulong)(iVar4 + 1) + lVar7;
        lVar7 = *(long *)(this + 400);
      } while (lVar7 != 0);
      goto LAB_00100345;
    }
    break;
  case 3:
    plVar8 = *(long **)(this + 0x1b0);
    if (plVar8 != (long *)0x0) {
      iVar4 = param_1 + 1;
      if (param_1 < 2) {
        iVar4 = 1;
      }
      lVar6 = 0;
      lVar7 = (long)(iVar4 + 1);
      do {
        lVar2 = local_48;
        lVar9 = lVar7 + lVar6 + lVar7;
        String::utf8();
        if (local_48 != 0) {
          iVar5 = (int)*(undefined8 *)(local_48 + -8);
          lVar9 = lVar7;
          if (iVar5 != 0) {
            lVar9 = (long)(iVar4 + iVar5);
          }
          lVar9 = lVar9 + lVar6 + lVar7;
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar6 = get_asn1_size((PListNode *)plVar8[3],param_1);
        plVar8 = (long *)*plVar8;
        lVar6 = lVar6 + lVar9 + lVar7;
      } while (plVar8 != (long *)0x0);
      goto LAB_00100345;
    }
    break;
  case 4:
    lVar6 = 1;
    goto LAB_00100345;
  case 5:
  case 6:
    lVar6 = 4;
    goto LAB_00100345;
  case 7:
  case 8:
    _err_print_error("get_asn1_size","core/io/plist.cpp",0xeb,"Method/function failed. Returning: 0"
                     ,"PList: DATE and DATA nodes are not supported by ASN.1 serialization.",0,0);
  }
  lVar6 = 0;
LAB_00100345:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PListNode::_asn1_size_len(unsigned char) */

int PListNode::_asn1_size_len(uchar param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 1;
  if (param_1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}



/* PListNode::store_text(String&, unsigned char) const */

void __thiscall PListNode::store_text(PListNode *this,String *param_1,uchar param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  String *pSVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)(this + 0x17c)) {
  default:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    break;
  case 1:
    local_60 = 0;
    local_50 = 1;
    local_58 = &_LC11;
    String::parse_latin1((StrRange *)&local_60);
    String::repeat((int)(String *)&local_58);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    String::operator+=(param_1,"<string>");
    iVar5 = CharString::get_data();
    String::utf8((char *)&local_58,iVar5);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar6 = "</string>\n";
LAB_00100ede:
      String::operator+=(param_1,pcVar6);
      return;
    }
    break;
  case 2:
    local_60 = 0;
    local_58 = &_LC11;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    iVar5 = (int)(String *)&local_58;
    String::repeat(iVar5);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    String::operator+=(param_1,"<array>\n");
    lVar2 = *(long *)(this + 400);
    for (lVar8 = 0; (lVar2 != 0 && (lVar8 < *(long *)(lVar2 + -8))); lVar8 = lVar8 + 1) {
      store_text(*(PListNode **)(lVar2 + lVar8 * 8),param_1,param_2 + '\x01');
      lVar2 = *(long *)(this + 400);
    }
    local_58 = &_LC11;
    local_60 = 0;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    String::repeat(iVar5);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar6 = "</array>\n";
      goto LAB_00100ede;
    }
    break;
  case 3:
    local_60 = 0;
    local_50 = 1;
    local_58 = &_LC11;
    String::parse_latin1((StrRange *)&local_60);
    iVar5 = (int)(String *)&local_58;
    String::repeat(iVar5);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    String::operator+=(param_1,"<dict>\n");
    for (puVar3 = *(undefined8 **)(this + 0x1b0); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      local_58 = &_LC11;
      local_60 = 0;
      local_50 = 1;
      String::parse_latin1((StrRange *)&local_60);
      String::repeat(iVar5);
      String::operator+=(param_1,(String *)&local_58);
      puVar4 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar4 + -0x10,false);
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
      String::operator+=(param_1,"<key>");
      String::operator+=(param_1,(String *)(puVar3 + 2));
      String::operator+=(param_1,"</key>\n");
      store_text((PListNode *)puVar3[3],param_1,param_2 + '\x01');
    }
    local_58 = &_LC11;
    local_60 = 0;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    String::repeat(iVar5);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar6 = "</dict>\n";
      goto LAB_00100ede;
    }
    break;
  case 4:
    local_60 = 0;
    local_50 = 1;
    local_58 = &_LC11;
    String::parse_latin1((StrRange *)&local_60);
    String::repeat((int)(String *)&local_58);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    if (this[0x1c8] == (PListNode)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar6 = "<false/>\n";
        goto LAB_00100ede;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar6 = "<true/>\n";
      goto LAB_00100ede;
    }
    break;
  case 5:
    local_60 = 0;
    local_50 = 1;
    local_58 = &_LC11;
    String::parse_latin1((StrRange *)&local_60);
    String::repeat((int)(String *)&local_58);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    String::operator+=(param_1,"<integer>");
    itos((long)&local_58);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar6 = "</integer>\n";
      goto LAB_00100ede;
    }
    break;
  case 6:
    local_60 = 0;
    local_50 = 1;
    local_58 = &_LC11;
    String::parse_latin1((StrRange *)&local_60);
    String::repeat((int)(String *)&local_58);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    String::operator+=(param_1,"<real>");
    rtos(*(double *)(this + 0x1c8));
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar6 = "</real>\n";
      goto LAB_00100ede;
    }
    break;
  case 7:
    local_60 = 0;
    local_50 = 1;
    local_58 = &_LC11;
    String::parse_latin1((StrRange *)&local_60);
    iVar5 = (int)(String *)&local_58;
    String::repeat(iVar5);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    String::operator+=(param_1,"<data>\n");
    local_58 = &_LC11;
    local_60 = 0;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    String::repeat(iVar5);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    local_60 = 0;
    local_58 = &_LC13;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    pSVar7 = (String *)CharString::get_data();
    operator+((char *)&local_58,pSVar7);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    local_58 = &_LC11;
    local_60 = 0;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    String::repeat(iVar5);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar6 = "</data>\n";
      goto LAB_00100ede;
    }
    break;
  case 8:
    local_60 = 0;
    local_50 = 1;
    local_58 = &_LC11;
    String::parse_latin1((StrRange *)&local_60);
    String::repeat((int)(String *)&local_58);
    String::operator+=(param_1,(String *)&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
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
    String::operator+=(param_1,"<date>");
    pcVar6 = (char *)CharString::get_data();
    String::operator+=(param_1,pcVar6);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar6 = "</date>\n";
      goto LAB_00100ede;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PList::read_bplist_var_size_int(Ref<FileAccess>, unsigned char) */

ulong __thiscall
PList::read_bplist_var_size_int(undefined8 param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = (**(code **)(*(long *)*param_2 + 0x1c8))();
  switch((ulong)param_3) {
  default:
    uVar5 = 0;
    break;
  case 1:
    bVar1 = (**(code **)(*(long *)*param_2 + 0x1e0))();
    uVar5 = (ulong)bVar1;
    break;
  case 2:
    uVar2 = (**(code **)(*(long *)*param_2 + 0x1e8))();
    uVar5 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
    break;
  case 3:
    uVar3 = (**(code **)(*(long *)*param_2 + 0x1f0))();
    uVar5 = (ulong)((uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
    break;
  case 4:
    uVar3 = (**(code **)(*(long *)*param_2 + 0x1f0))();
    uVar5 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
    ;
    break;
  case 5:
    uVar5 = (**(code **)(*(long *)*param_2 + 0x1f8))();
    uVar5 = (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
    break;
  case 6:
    uVar5 = (**(code **)(*(long *)*param_2 + 0x1f8))();
    uVar5 = (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
            (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 |
            uVar5 << 0x38;
    break;
  case 7:
    uVar5 = (**(code **)(*(long *)*param_2 + 0x1f8))();
    uVar5 = (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
            (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
    break;
  case 8:
    uVar5 = (**(code **)(*(long *)*param_2 + 0x1f8))();
    uVar5 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
            (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  }
  (**(code **)(*(long *)*param_2 + 0x1b8))((long *)*param_2,(ulong)param_3 + lVar4);
  return uVar5;
}



/* PList::save_text() const */

void PList::save_text(void)

{
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x1a0) == 0) {
    _err_print_error("save_text","core/io/plist.cpp",0x357,
                     "Method/function failed. Returning: String()",
                     "PList: Invalid PList, no root node.",0,0);
    *in_RDI = 0;
  }
  else {
    local_28 = 0;
    String::operator+=((String *)&local_28,"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
    String::operator+=((String *)&local_28,
                       "<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
                      );
    String::operator+=((String *)&local_28,"<plist version=\"1.0\">\n");
    PListNode::store_text(*(PListNode **)(in_RSI + 0x1a0),(String *)&local_28,'\0');
    String::operator+=((String *)&local_28,"</plist>\n\n");
    *in_RDI = local_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PListNode::get_value() const */

void PListNode::get_value(void)

{
  long *plVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  char *pcVar4;
  size_t sVar5;
  int iVar6;
  uchar *puVar7;
  Variant *pVVar8;
  int iVar9;
  undefined8 *puVar10;
  long in_RSI;
  long lVar11;
  Variant *in_RDI;
  long in_FS_OFFSET;
  ulong local_a0;
  long local_98;
  uchar *local_90;
  char *local_88;
  size_t local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)(in_RSI + 0x17c)) {
  default:
    *(undefined4 *)in_RDI = 0;
    *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
    break;
  case 1:
    iVar6 = CharString::get_data();
    String::utf8((char *)&local_88,iVar6);
    Variant::Variant(in_RDI,(String *)&local_88);
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
    break;
  case 2:
    Array::Array((Array *)&local_88);
    puVar10 = *(undefined8 **)(in_RSI + 400);
    if ((puVar10 != (undefined8 *)0x0) && (puVar2 = puVar10 + puVar10[-1], puVar2 != puVar10)) {
      do {
        Variant::Variant((Variant *)local_58,(Object *)*puVar10);
        Array::push_back((Variant *)&local_88);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
    }
    Variant::Variant(in_RDI,(Array *)&local_88);
    Array::~Array((Array *)&local_88);
    break;
  case 3:
    Dictionary::Dictionary((Dictionary *)&local_88);
    for (puVar10 = *(undefined8 **)(in_RSI + 0x1b0); puVar10 != (undefined8 *)0x0;
        puVar10 = (undefined8 *)*puVar10) {
      Variant::Variant((Variant *)local_58,(Object *)puVar10[3]);
      Variant::Variant((Variant *)local_78,(String *)(puVar10 + 2));
      pVVar8 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
      if (pVVar8 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar8 = 0;
        *(int *)pVVar8 = local_58[0];
        *(undefined8 *)(pVVar8 + 8) = local_50;
        *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    Variant::Variant(in_RDI,(Dictionary *)&local_88);
    Dictionary::~Dictionary((Dictionary *)&local_88);
    break;
  case 4:
    Variant::Variant(in_RDI,*(bool *)(in_RSI + 0x1c8));
    break;
  case 5:
    Variant::Variant(in_RDI,*(long *)(in_RSI + 0x1c8));
    break;
  case 6:
    Variant::Variant(in_RDI,*(double *)(in_RSI + 0x1c8));
    break;
  case 7:
    if (*(long *)(in_RSI + 0x180) == 0) {
      lVar11 = 1;
      iVar6 = 0;
    }
    else {
      lVar11 = 1;
      iVar6 = (int)*(undefined8 *)(*(long *)(in_RSI + 0x180) + -8);
      if (iVar6 != 0) {
        iVar9 = iVar6 + 2;
        iVar6 = iVar6 + -1;
        if (-1 < iVar6) {
          iVar9 = iVar6;
        }
        lVar11 = (long)((iVar9 >> 2) * 3 + 1);
      }
    }
    local_a0 = 0;
    local_90 = (uchar *)0x0;
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_90,lVar11);
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_90);
    puVar3 = local_90;
    puVar7 = (uchar *)CharString::get_data();
    if (local_90 == (uchar *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(local_90 + -8);
    }
    iVar6 = CryptoCore::b64_decode(puVar3,iVar9,&local_a0,puVar7,iVar6);
    if (iVar6 == 0) {
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_90,local_a0);
      Variant::Variant(in_RDI,(Vector *)&local_98);
    }
    else {
      _err_print_error("get_value","core/io/plist.cpp",0x50,
                       "Condition \"CryptoCore::b64_decode(&w[0], buf.size(), &arr_len, (unsigned char *)data_string.get_data(), strlen) != OK\" is true. Returning: Vector<uint8_t>()"
                       ,0,0);
      local_80 = 0;
      Variant::Variant(in_RDI,(Vector *)&local_88);
      sVar5 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(sVar5 - 0x10),false);
        }
      }
    }
    puVar3 = local_90;
    if (local_90 != (uchar *)0x0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = (uchar *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
    }
    break;
  case 8:
    local_88 = (char *)CharString::get_data();
    local_98 = 0;
    local_80 = 0;
    if (local_88 != (char *)0x0) {
      local_80 = strlen(local_88);
    }
    String::parse_latin1((StrRange *)&local_98);
    Variant::Variant(in_RDI,(String *)&local_98);
    lVar11 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* PListNode::store_asn1_size(Vector<unsigned char>&, unsigned char) const */

void __thiscall PListNode::store_asn1_size(PListNode *this,Vector *param_1,uchar param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = get_asn1_size(this,param_2);
  if (param_2 < 2) {
    if (param_2 == '\0') {
      return;
    }
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 - 1;
    Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,param_2 + 0x80);
  }
  do {
    Vector<unsigned_char>::push_back
              ((Vector<unsigned_char> *)param_1,(uchar)(uVar1 >> ((char)iVar2 * '\b' & 0x1fU)));
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  return;
}



/* PListNode::store_asn1(Vector<unsigned char>&, unsigned char) const */

undefined4 __thiscall PListNode::store_asn1(PListNode *this,Vector *param_1,uchar param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uchar *puVar8;
  long lVar9;
  long lVar10;
  uchar uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  long *local_60;
  long local_48;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)(this + 0x17c)) {
  case 1:
    Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'\f');
    store_asn1_size(this,param_1,param_2);
    lVar9 = *(long *)(this + 0x180);
    for (lVar10 = 0; (lVar9 != 0 && (lVar12 = *(long *)(lVar9 + -8), (int)lVar10 < (int)lVar12));
        lVar10 = lVar10 + 1) {
      if (lVar10 == lVar12) {
        puVar8 = (uchar *)&CharString::_null;
      }
      else {
        if (lVar12 <= lVar10) {
LAB_0010208b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        puVar8 = (uchar *)(lVar9 + lVar10);
      }
      Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,*puVar8);
      lVar9 = *(long *)(this + 0x180);
    }
    break;
  case 2:
    Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'0');
    store_asn1_size(this,param_1,param_2);
    lVar9 = *(long *)(this + 400);
    if (lVar9 != 0) {
      lVar10 = 0;
      uVar7 = 1;
      do {
        if (*(long *)(lVar9 + -8) <= lVar10) break;
        if ((char)uVar7 != '\0') {
          uVar7 = store_asn1(*(PListNode **)(lVar9 + lVar10 * 8),param_1,param_2);
          lVar9 = *(long *)(this + 400);
        }
        lVar10 = lVar10 + 1;
      } while (lVar9 != 0);
      goto LAB_00101c7c;
    }
    break;
  case 3:
    Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'1');
    uVar16 = (uint)param_2;
    store_asn1_size(this,param_1,param_2);
    local_60 = *(long **)(this + 0x1b0);
    if (local_60 != (long *)0x0) {
      uVar7 = 1;
      iVar5 = uVar16 - 1;
      do {
        lVar9 = local_48;
        String::utf8();
        if (local_48 == 0) {
          uVar15 = 0;
        }
        else {
          iVar13 = (int)*(undefined8 *)(local_48 + -8);
          uVar15 = (ulong)(iVar13 - 1);
          if (iVar13 == 0) {
            uVar15 = 0;
          }
        }
        Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'0');
        uVar14 = (uint)uVar15;
        iVar13 = iVar5;
        if (param_2 < 2) {
          cVar4 = get_asn1_size((PListNode *)local_60[3],param_2);
          if (uVar16 != 0) {
            Vector<unsigned_char>::push_back
                      ((Vector<unsigned_char> *)param_1,(char)uVar15 + '\x04' + cVar4);
            Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'\f');
            goto LAB_00101ea0;
          }
          Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'\f');
        }
        else {
          iVar6 = get_asn1_size((PListNode *)local_60[3],param_2);
          Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,param_2 + 0x80);
          iVar17 = iVar5;
          do {
            Vector<unsigned_char>::push_back
                      ((Vector<unsigned_char> *)param_1,
                       (uchar)(iVar6 + uVar14 + 4 + uVar16 * 2 >> ((char)iVar17 * '\b' & 0x1fU)));
            bVar19 = iVar17 != 0;
            iVar17 = iVar17 + -1;
          } while (bVar19);
          Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'\f');
          Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,param_2 + 0x80);
LAB_00101ea0:
          do {
            Vector<unsigned_char>::push_back
                      ((Vector<unsigned_char> *)param_1,
                       (uchar)(uVar14 >> ((char)iVar13 * '\b' & 0x1fU)));
            bVar19 = iVar13 != 0;
            iVar13 = iVar13 + -1;
          } while (bVar19);
        }
        uVar18 = 0;
        if (uVar14 != 0) {
          do {
            lVar10 = (long)(int)uVar18;
            if (local_48 == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = *(long *)(local_48 + -8);
            }
            if (lVar10 == lVar12) {
              uVar11 = '\0';
            }
            else {
              if ((lVar12 <= lVar10) || (lVar10 < 0)) goto LAB_0010208b;
              uVar11 = *(uchar *)(local_48 + uVar18);
            }
            uVar18 = uVar18 + 1;
            Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,uVar11);
          } while (uVar18 != uVar15);
        }
        if ((char)uVar7 != '\0') {
          uVar7 = store_asn1((PListNode *)local_60[3],param_1,param_2);
        }
        if (local_48 != 0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        local_60 = (long *)*local_60;
      } while (local_60 != (long *)0x0);
      goto LAB_00101c7c;
    }
    break;
  case 4:
    Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'\x01');
    store_asn1_size(this,param_1,param_2);
    if (this[0x1c8] == (PListNode)0x0) {
      Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'\0');
    }
    else {
      Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'\x01');
    }
    break;
  case 5:
    Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'\x02');
    store_asn1_size(this,param_1,param_2);
    iVar5 = 0x20;
    do {
      iVar13 = iVar5 + -8;
      Vector<unsigned_char>::push_back
                ((Vector<unsigned_char> *)param_1,
                 (uchar)(*(long *)(this + 0x1c8) >> ((byte)iVar5 & 0x3f)));
      iVar5 = iVar13;
    } while (iVar13 != -8);
    break;
  case 6:
    Vector<unsigned_char>::push_back((Vector<unsigned_char> *)param_1,'\x03');
    store_asn1_size(this,param_1,param_2);
    iVar5 = 0x20;
    do {
      iVar13 = iVar5 + -8;
      Vector<unsigned_char>::push_back
                ((Vector<unsigned_char> *)param_1,
                 (uchar)(*(long *)(this + 0x1c8) >> ((byte)iVar5 & 0x3f)));
      iVar5 = iVar13;
    } while (iVar13 != -8);
    break;
  case 7:
  case 8:
    uVar7 = 0;
    _err_print_error("store_asn1","core/io/plist.cpp",0x12a,
                     "Method/function failed. Returning: false",
                     "PList: DATE and DATA nodes are not supported by ASN.1 serialization.",0,0);
    goto LAB_00101c7c;
  }
  uVar7 = 1;
LAB_00101c7c:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PList::save_asn1() const */

void PList::save_asn1(void)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  uchar uVar5;
  undefined8 uVar6;
  long in_RSI;
  long in_RDI;
  char *pcVar7;
  long in_FS_OFFSET;
  Vector aVStack_38 [8];
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(PListNode **)(in_RSI + 0x1a0) == (PListNode *)0x0) {
    pcVar7 = "PList: Invalid PList, no root node.";
    uVar6 = 0x335;
LAB_001022bc:
    _err_print_error("save_asn1","core/io/plist.cpp",uVar6,
                     "Method/function failed. Returning: PackedByteArray()",pcVar7,0,0);
    *(undefined8 *)(in_RDI + 8) = 0;
  }
  else {
    uVar4 = PListNode::get_asn1_size(*(PListNode **)(in_RSI + 0x1a0),'\x01');
    if (uVar4 < 0x80) {
      uVar5 = '\x01';
    }
    else {
      uVar4 = PListNode::get_asn1_size(*(PListNode **)(in_RSI + 0x1a0),'\x02');
      uVar5 = '\x02';
      if (0xfffe < uVar4) {
        uVar4 = PListNode::get_asn1_size(*(PListNode **)(in_RSI + 0x1a0),'\x03');
        uVar5 = '\x03';
        if (0xfffffe < uVar4) {
          uVar4 = PListNode::get_asn1_size(*(PListNode **)(in_RSI + 0x1a0),'\x04');
          uVar5 = '\x04';
          if (0xfffffffe < uVar4) {
            pcVar7 = "PList: Data is too big for ASN.1 serializer, should be < 4 GiB.";
            uVar6 = 0x348;
            goto LAB_001022bc;
          }
        }
      }
    }
    local_30 = 0;
    cVar3 = PListNode::store_asn1(*(PListNode **)(in_RSI + 0x1a0),aVStack_38,uVar5);
    if (cVar3 == '\0') {
      _err_print_error("save_asn1","core/io/plist.cpp",0x350,
                       "Method/function failed. Returning: PackedByteArray()",
                       "PList: ASN.1 serializer error.",0);
      lVar2 = local_30;
      *(undefined8 *)(in_RDI + 8) = 0;
      if (local_30 != 0) {
        LOCK();
        plVar1 = (long *)(local_30 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_30 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      *(long *)(in_RDI + 8) = local_30;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PList::get_root() */

void PList::get_root(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x1a0) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x1a0);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* Ref<PListNode>::TEMPNAMEPLACEHOLDERVALUE(Ref<PListNode> const&) [clone .isra.0] */

void __thiscall Ref<PListNode>::operator=(Ref<PListNode> *this,Ref *param_1)

{
  PListNode *pPVar1;
  char cVar2;
  
  pPVar1 = *(PListNode **)this;
  if (pPVar1 != (PListNode *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pPVar1 != (PListNode *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        memdelete<PListNode>(pPVar1);
        return;
      }
    }
  }
  return;
}



/* CowData<Ref<PListNode> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<PListNode>>::_copy_on_write(CowData<Ref<PListNode>> *this)

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



/* PListNode::new_array() */

PListNode * __thiscall PListNode::new_array(PListNode *this)

{
  char cVar1;
  RefCounted *this_00;
  
  this_00 = (RefCounted *)operator_new(0x1d0,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010ae98;
  *(undefined4 *)(this_00 + 0x17c) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined8 *)(this_00 + 0x1c0) = 2;
  *(undefined1 (*) [16])(this_00 + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1b0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    _err_print_error("new_array","core/io/plist.cpp",0x97,
                     "Condition \"node.is_null()\" is true. Returning: Ref<PListNode>()",0,0);
    *(undefined8 *)this = 0;
  }
  else {
    *(undefined4 *)(this_00 + 0x17c) = 2;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<PListNode>((PListNode *)this_00);
      return this;
    }
  }
  return this;
}



/* PListNode::new_dict() */

PListNode * __thiscall PListNode::new_dict(PListNode *this)

{
  char cVar1;
  RefCounted *this_00;
  
  this_00 = (RefCounted *)operator_new(0x1d0,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010ae98;
  *(undefined4 *)(this_00 + 0x17c) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined8 *)(this_00 + 0x1c0) = 2;
  *(undefined1 (*) [16])(this_00 + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1b0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    _err_print_error("new_dict","core/io/plist.cpp",0x9e,
                     "Condition \"node.is_null()\" is true. Returning: Ref<PListNode>()",0,0);
    *(undefined8 *)this = 0;
  }
  else {
    *(undefined4 *)(this_00 + 0x17c) = 3;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<PListNode>((PListNode *)this_00);
      return this;
    }
  }
  return this;
}



/* PList::PList() */

void __thiscall PList::PList(PList *this)

{
  PListNode *pPVar1;
  char cVar2;
  long in_FS_OFFSET;
  PListNode *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010ad38;
  PListNode::new_dict((PListNode *)&local_28);
  pPVar1 = *(PListNode **)(this + 0x1a0);
  if (local_28 == pPVar1) {
    if (local_28 != (PListNode *)0x0) {
      cVar2 = RefCounted::unreference();
      goto joined_r0x0010282f;
    }
  }
  else {
    *(PListNode **)(this + 0x1a0) = local_28;
    if (local_28 == (PListNode *)0x0) {
      if ((pPVar1 != (PListNode *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          memdelete<PListNode>(pPVar1);
          return;
        }
        goto LAB_00102851;
      }
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x1a0) = 0;
      }
      if ((pPVar1 != (PListNode *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        memdelete<PListNode>(pPVar1);
      }
      cVar2 = RefCounted::unreference();
joined_r0x0010282f:
      if (cVar2 != '\0') {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          memdelete<PListNode>(local_28);
          return;
        }
        goto LAB_00102851;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102851:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PListNode::new_real(double) */

PListNode * __thiscall PListNode::new_real(PListNode *this,double param_1)

{
  char cVar1;
  RefCounted *this_00;
  
  this_00 = (RefCounted *)operator_new(0x1d0,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010ae98;
  *(undefined4 *)(this_00 + 0x17c) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined8 *)(this_00 + 0x1c0) = 2;
  *(undefined1 (*) [16])(this_00 + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1b0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    _err_print_error("new_real","core/io/plist.cpp",0xce,
                     "Condition \"node.is_null()\" is true. Returning: Ref<PListNode>()",0,0);
    *(undefined8 *)this = 0;
  }
  else {
    *(undefined4 *)(this_00 + 0x17c) = 6;
    *(double *)(this_00 + 0x1c8) = param_1;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<PListNode>((PListNode *)this_00);
      return this;
    }
  }
  return this;
}



/* PListNode::new_int(long) */

PListNode * __thiscall PListNode::new_int(PListNode *this,long param_1)

{
  char cVar1;
  RefCounted *this_00;
  
  this_00 = (RefCounted *)operator_new(0x1d0,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010ae98;
  *(undefined4 *)(this_00 + 0x17c) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined8 *)(this_00 + 0x1c0) = 2;
  *(undefined1 (*) [16])(this_00 + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1b0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    _err_print_error("new_int","core/io/plist.cpp",0xc6,
                     "Condition \"node.is_null()\" is true. Returning: Ref<PListNode>()",0,0);
    *(undefined8 *)this = 0;
  }
  else {
    *(undefined4 *)(this_00 + 0x17c) = 5;
    *(long *)(this_00 + 0x1c8) = param_1;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<PListNode>((PListNode *)this_00);
      return this;
    }
  }
  return this;
}



/* PListNode::new_bool(bool) */

PListNode * __thiscall PListNode::new_bool(PListNode *this,bool param_1)

{
  char cVar1;
  RefCounted *this_00;
  
  this_00 = (RefCounted *)operator_new(0x1d0,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010ae98;
  *(undefined4 *)(this_00 + 0x17c) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined8 *)(this_00 + 0x1c0) = 2;
  *(undefined1 (*) [16])(this_00 + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1b0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    _err_print_error("new_bool","core/io/plist.cpp",0xbe,
                     "Condition \"node.is_null()\" is true. Returning: Ref<PListNode>()",0,0);
    *(undefined8 *)this = 0;
  }
  else {
    *(undefined4 *)(this_00 + 0x17c) = 4;
    this_00[0x1c8] = (RefCounted)param_1;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<PListNode>((PListNode *)this_00);
      return this;
    }
  }
  return this;
}



/* PListNode::new_string(String const&) */

String * PListNode::new_string(String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  RefCounted *this;
  long in_FS_OFFSET;
  long local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  this = (RefCounted *)operator_new(0x1d0,"");
  RefCounted::RefCounted(this);
  *(undefined ***)this = &PTR__initialize_classv_0010ae98;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1c0) = 2;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this);
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    _err_print_error("new_string","core/io/plist.cpp",0xa5,
                     "Condition \"node.is_null()\" is true. Returning: Ref<PListNode>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    *(undefined4 *)(this + 0x17c) = 1;
    String::utf8();
    lVar3 = *(long *)(this + 0x180);
    if (lVar3 == local_28) {
      if (lVar3 != 0) {
        LOCK();
        plVar1 = (long *)(lVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_28 + -0x10),false);
        }
      }
    }
    else {
      if (lVar3 != 0) {
        LOCK();
        plVar1 = (long *)(lVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)(this + 0x180);
          *(undefined8 *)(this + 0x180) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      *(long *)(this + 0x180) = local_28;
    }
    *(RefCounted **)param_1 = this;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *(undefined8 *)param_1 = 0;
    }
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<PListNode>((PListNode *)this);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* PListNode::new_data(String const&) */

String * PListNode::new_data(String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  RefCounted *this;
  long in_FS_OFFSET;
  long local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  this = (RefCounted *)operator_new(0x1d0,"");
  RefCounted::RefCounted(this);
  *(undefined ***)this = &PTR__initialize_classv_0010ae98;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1c0) = 2;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this);
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    _err_print_error("new_data","core/io/plist.cpp",0xad,
                     "Condition \"node.is_null()\" is true. Returning: Ref<PListNode>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    *(undefined4 *)(this + 0x17c) = 7;
    String::utf8();
    lVar3 = *(long *)(this + 0x180);
    if (lVar3 == local_28) {
      if (lVar3 != 0) {
        LOCK();
        plVar1 = (long *)(lVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_28 + -0x10),false);
        }
      }
    }
    else {
      if (lVar3 != 0) {
        LOCK();
        plVar1 = (long *)(lVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)(this + 0x180);
          *(undefined8 *)(this + 0x180) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      *(long *)(this + 0x180) = local_28;
    }
    *(RefCounted **)param_1 = this;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *(undefined8 *)param_1 = 0;
    }
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<PListNode>((PListNode *)this);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* PListNode::new_date(String const&) */

String * PListNode::new_date(String *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  RefCounted *this;
  String *pSVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  this = (RefCounted *)operator_new(0x1d0,"");
  RefCounted::RefCounted(this);
  *(undefined ***)this = &PTR__initialize_classv_0010ae98;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1c0) = 2;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    _err_print_error("new_date","core/io/plist.cpp",0xb5,
                     "Condition \"node.is_null()\" is true. Returning: Ref<PListNode>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    *(undefined4 *)(this + 0x17c) = 8;
    String::utf8();
    lVar5 = *(long *)(this + 0x180);
    if (lVar5 == local_28) {
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_28 + -0x10),false);
        }
      }
    }
    else {
      if (lVar5 != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar5 = *(long *)(this + 0x180);
          *(undefined8 *)(this + 0x180) = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      *(long *)(this + 0x180) = local_28;
    }
    pSVar4 = (String *)Time::get_singleton();
    lVar5 = Time::get_unix_time_from_datetime_string(pSVar4);
    *(double *)(this + 0x1c8) = (double)lVar5 - _LC75;
    *(RefCounted **)param_1 = this;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)param_1 = 0;
    }
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<PListNode>((PListNode *)this);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Vector<Ref<PListNode> >::push_back(Ref<PListNode>) [clone .isra.0] */

void __thiscall Vector<Ref<PListNode>>::push_back(Vector<Ref<PListNode>> *this,long *param_2)

{
  long *plVar1;
  PListNode *pPVar2;
  PListNode *pPVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<PListNode>>::resize<false>((CowData<Ref<PListNode>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<PListNode>>::_copy_on_write((CowData<Ref<PListNode>> *)(this + 8));
      pPVar2 = (PListNode *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pPVar3 = (PListNode *)*plVar1;
      if (pPVar2 == pPVar3) {
        return;
      }
      *plVar1 = (long)pPVar2;
      if ((pPVar2 != (PListNode *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pPVar3 == (PListNode *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      memdelete<PListNode>(pPVar3);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* PList::read_bplist_obj(Ref<FileAccess>, unsigned long) */

undefined8 *
PList::read_bplist_obj(undefined8 *param_1,PList *param_2,undefined8 *param_3,long param_4)

{
  Object *pOVar1;
  PList PVar2;
  Object *pOVar3;
  long *plVar4;
  code *pcVar5;
  PListNode *pPVar6;
  size_t __n;
  char cVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  RefCounted *this;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  byte bVar19;
  char *pcVar20;
  uint uVar21;
  PListNode *pPVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  PListNode *pPVar26;
  long in_FS_OFFSET;
  double dVar27;
  PListNode *local_a8;
  String *local_98;
  ulong local_90;
  PListNode *local_68;
  PListNode *local_60;
  Object *local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this = (RefCounted *)operator_new(0x1d0,"");
  RefCounted::RefCounted(this);
  *(undefined ***)this = &PTR__initialize_classv_0010ae98;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1c0) = 2;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this);
  cVar7 = RefCounted::init_ref();
  local_a8 = (PListNode *)0x0;
  if (cVar7 != '\0') {
    cVar7 = RefCounted::reference();
    local_a8 = (PListNode *)(RefCounted *)0x0;
    if (cVar7 != '\0') {
      local_a8 = (PListNode *)this;
    }
    cVar7 = RefCounted::unreference();
    if (cVar7 != '\0') {
      memdelete<PListNode>((PListNode *)this);
    }
  }
  (**(code **)(*(long *)*param_3 + 0x1b8))
            ((long *)*param_3,(ulong)(byte)param_2[0x180] * param_4 + *(long *)(param_2 + 0x198));
  pOVar3 = (Object *)*param_3;
  PVar2 = param_2[0x180];
  if ((pOVar3 == (Object *)0x0) ||
     (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
    local_58 = (Object *)0x0;
    lVar12 = read_bplist_var_size_int(param_2,&local_58,PVar2);
    if (lVar12 == 0) goto LAB_00103540;
LAB_00103391:
    local_98 = (String *)&local_58;
    (**(code **)(*(long *)*param_3 + 0x1b8))();
    uVar10 = (**(code **)(*(long *)*param_3 + 0x1e0))();
    local_90 = (ulong)(uVar10 & 0xf);
    bVar19 = (byte)uVar10 & 0xf0;
    uVar21 = uVar10 & 0xf;
    cVar7 = (char)uVar21;
    if (bVar19 == 0x50) {
      if (cVar7 == '\x0f') {
        uVar21 = (**(code **)(*(long *)*param_3 + 0x1e0))();
        dVar27 = pow(_LC90,(double)(uVar21 & 0xf));
        pOVar3 = (Object *)*param_3;
        if ((pOVar3 == (Object *)0x0) ||
           (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
          local_58 = (Object *)0x0;
          local_90 = read_bplist_var_size_int(param_2,local_98,(int)dVar27 & 0xffU);
        }
        else {
          local_90 = read_bplist_var_size_int(param_2,local_98,(int)dVar27 & 0xffU);
          cVar7 = RefCounted::unreference();
          if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
        *(undefined4 *)(local_a8 + 0x17c) = 1;
        uVar16 = (ulong)((int)local_90 + 1);
        if ((long)uVar16 < 0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x157,
                           "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
          ;
        }
        else {
          lVar12 = *(long *)(local_a8 + 0x180);
          if (lVar12 == 0) {
            if (uVar16 != 0) goto LAB_001043e6;
          }
          else {
            uVar24 = *(ulong *)(lVar12 + -8);
            if (uVar16 != uVar24) {
              if (uVar16 != 0) goto LAB_00103fe0;
              LOCK();
              plVar4 = (long *)(lVar12 + -0x10);
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                lVar12 = *(long *)(local_a8 + 0x180);
                *(undefined8 *)(local_a8 + 0x180) = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
              else {
                *(undefined8 *)(local_a8 + 0x180) = 0;
              }
            }
          }
        }
      }
      else {
        uVar16 = (ulong)(uVar21 + 1);
        *(undefined4 *)(local_a8 + 0x17c) = 1;
        if (*(long *)(local_a8 + 0x180) == 0) {
LAB_001043e6:
          uVar24 = 0;
          lVar12 = 0;
          CowData<char>::_copy_on_write((CowData<char> *)(local_a8 + 0x180));
        }
        else {
          uVar24 = *(ulong *)(*(long *)(local_a8 + 0x180) + -8);
          if (uVar21 + 1 == uVar24) goto LAB_001040be;
LAB_00103fe0:
          CowData<char>::_copy_on_write((CowData<char> *)(local_a8 + 0x180));
          if (uVar24 == 0) {
            uVar24 = 0;
            lVar12 = 0;
          }
          else {
            uVar23 = uVar24 - 1 | uVar24 - 1 >> 1;
            uVar23 = uVar23 | uVar23 >> 2;
            uVar23 = uVar23 | uVar23 >> 4;
            uVar23 = uVar23 | uVar23 >> 8;
            uVar23 = uVar23 | uVar23 >> 0x10;
            lVar12 = (uVar23 | uVar23 >> 0x20) + 1;
          }
        }
        uVar23 = uVar16 - 1 | uVar16 - 1 >> 1;
        uVar23 = uVar23 | uVar23 >> 2;
        uVar23 = uVar23 | uVar23 >> 4;
        uVar23 = uVar23 | uVar23 >> 8;
        uVar23 = uVar23 | uVar23 >> 0x10;
        lVar25 = uVar23 + 1;
        if ((long)uVar24 < (long)uVar16) {
          if (lVar25 == lVar12) {
LAB_00104c27:
            puVar15 = *(undefined8 **)(local_a8 + 0x180);
            if (puVar15 == (undefined8 *)0x0) {
              puVar15 = (undefined8 *)read_bplist_obj();
              return puVar15;
            }
LAB_001040ba:
            puVar15[-1] = uVar16;
          }
          else if (uVar24 == 0) {
            puVar17 = (undefined8 *)Memory::alloc_static(uVar23 + 0x11,false);
            if (puVar17 != (undefined8 *)0x0) {
              puVar15 = puVar17 + 2;
              *puVar17 = 1;
              puVar17[1] = 0;
              *(undefined8 **)(local_a8 + 0x180) = puVar15;
              goto LAB_001040ba;
            }
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            iVar11 = CowData<char>::_realloc((CowData<char> *)(local_a8 + 0x180),lVar25);
            if (iVar11 == 0) goto LAB_00104c27;
          }
        }
        else if ((lVar25 == lVar12) ||
                (iVar11 = CowData<char>::_realloc((CowData<char> *)(local_a8 + 0x180),lVar25),
                iVar11 == 0)) {
          if (*(long *)(local_a8 + 0x180) == 0) {
            puVar15 = (undefined8 *)FUN_00107b04();
            return puVar15;
          }
          *(ulong *)(*(long *)(local_a8 + 0x180) + -8) = uVar16;
        }
      }
LAB_001040be:
      plVar4 = (long *)*param_3;
      pcVar5 = *(code **)(*plVar4 + 0x220);
      CowData<char>::_copy_on_write((CowData<char> *)(local_a8 + 0x180));
      (*pcVar5)(plVar4,*(undefined8 *)(local_a8 + 0x180),local_90);
    }
    else if (bVar19 < 0x51) {
      if (bVar19 == 0x20) {
        *(undefined4 *)(local_a8 + 0x17c) = 6;
LAB_00103616:
        dVar27 = pow(_LC90,(double)uVar21);
        pOVar3 = (Object *)*param_3;
        uVar21 = (int)dVar27 & 0xff;
        if ((pOVar3 == (Object *)0x0) ||
           (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) goto LAB_00103669;
        uVar13 = read_bplist_var_size_int(param_2,local_98,uVar21);
        *(undefined8 *)(local_a8 + 0x1c8) = uVar13;
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
      else if (bVar19 < 0x21) {
        if ((uVar10 & 0xf0) != 0) {
          *(undefined4 *)(local_a8 + 0x17c) = 5;
          goto LAB_00103616;
        }
        if (cVar7 == '\0') {
          *(undefined4 *)(local_a8 + 0x17c) = 0;
        }
        else if (cVar7 == '\b') {
          *(undefined4 *)(local_a8 + 0x17c) = 4;
          local_a8[0x1c8] = (PListNode)0x0;
        }
        else {
          if (cVar7 != '\t') {
            _err_print_error("read_bplist_obj","core/io/plist.cpp",0x209,
                             "Method/function failed. Returning: Ref<PListNode>()",
                             "Invalid nil/bool marker value.",0,0);
            goto LAB_00103573;
          }
          *(undefined4 *)(local_a8 + 0x17c) = 4;
          local_a8[0x1c8] = (PListNode)0x1;
        }
      }
      else if (bVar19 == 0x30) {
        plVar4 = (long *)*param_3;
        *(undefined4 *)(local_a8 + 0x17c) = 8;
        uVar16 = (**(code **)(*plVar4 + 0x1f8))();
        *(ulong *)(local_a8 + 0x1c8) =
             uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
             (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
             (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28 |
             uVar16 << 0x38;
        bVar8 = (bool)Time::get_singleton();
        Time::get_datetime_string_from_unix_time((long)&local_60,bVar8);
        String::utf8();
        pOVar1 = local_58;
        pOVar3 = *(Object **)(local_a8 + 0x180);
        if (pOVar3 == local_58) {
          if (pOVar3 != (Object *)0x0) {
            LOCK();
            pOVar3 = pOVar3 + -0x10;
            *(long *)pOVar3 = *(long *)pOVar3 + -1;
            UNLOCK();
            if (*(long *)pOVar3 == 0) {
              local_58 = (Object *)0x0;
              Memory::free_static(pOVar1 + -0x10,false);
            }
          }
        }
        else {
          if (pOVar3 != (Object *)0x0) {
            LOCK();
            pOVar3 = pOVar3 + -0x10;
            *(long *)pOVar3 = *(long *)pOVar3 + -1;
            UNLOCK();
            if (*(long *)pOVar3 == 0) {
              lVar12 = *(long *)(local_a8 + 0x180);
              *(undefined8 *)(local_a8 + 0x180) = 0;
              Memory::free_static((void *)(lVar12 + -0x10),false);
            }
          }
          *(Object **)(local_a8 + 0x180) = local_58;
        }
        pPVar22 = local_60;
        if (local_60 != (PListNode *)0x0) {
          LOCK();
          pPVar26 = local_60 + -0x10;
          *(long *)pPVar26 = *(long *)pPVar26 + -1;
          UNLOCK();
          if (*(long *)pPVar26 == 0) {
            local_60 = (PListNode *)0x0;
            Memory::free_static(pPVar22 + -0x10,false);
          }
        }
      }
      else {
        if (bVar19 != 0x40) goto LAB_001040f0;
        if (cVar7 == '\x0f') {
          uVar21 = (**(code **)(*(long *)*param_3 + 0x1e0))();
          dVar27 = pow(_LC90,(double)(uVar21 & 0xf));
          pOVar3 = (Object *)*param_3;
          if ((pOVar3 == (Object *)0x0) ||
             (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            local_58 = (Object *)0x0;
            local_90 = read_bplist_var_size_int(param_2,local_98,(int)dVar27 & 0xffU);
          }
          else {
            local_90 = read_bplist_var_size_int(param_2,local_98,(int)dVar27 & 0xffU);
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
        }
        *(undefined4 *)(local_a8 + 0x17c) = 7;
        local_50[0] = 0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,local_90 + 1);
        plVar4 = (long *)*param_3;
        pcVar5 = *(code **)(*plVar4 + 0x220);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
        lVar12 = local_50[0];
        (*pcVar5)(plVar4,local_50[0],local_90);
        CryptoCore::b64_encode_str((uchar *)&local_68,(int)lVar12);
        String::utf8();
        pPVar26 = local_60;
        pPVar22 = *(PListNode **)(local_a8 + 0x180);
        if (pPVar22 == local_60) {
          if (pPVar22 != (PListNode *)0x0) {
            LOCK();
            pPVar22 = pPVar22 + -0x10;
            *(long *)pPVar22 = *(long *)pPVar22 + -1;
            UNLOCK();
            if (*(long *)pPVar22 == 0) {
              local_60 = (PListNode *)0x0;
              Memory::free_static(pPVar26 + -0x10,false);
            }
          }
        }
        else {
          if (pPVar22 != (PListNode *)0x0) {
            LOCK();
            pPVar22 = pPVar22 + -0x10;
            *(long *)pPVar22 = *(long *)pPVar22 + -1;
            UNLOCK();
            if (*(long *)pPVar22 == 0) {
              lVar12 = *(long *)(local_a8 + 0x180);
              *(undefined8 *)(local_a8 + 0x180) = 0;
              Memory::free_static((void *)(lVar12 + -0x10),false);
            }
          }
          *(PListNode **)(local_a8 + 0x180) = local_60;
        }
        pPVar22 = local_68;
        if (local_68 != (PListNode *)0x0) {
          LOCK();
          pPVar26 = local_68 + -0x10;
          *(long *)pPVar26 = *(long *)pPVar26 + -1;
          UNLOCK();
          if (*(long *)pPVar26 == 0) {
            local_68 = (PListNode *)0x0;
            Memory::free_static(pPVar22 + -0x10,false);
          }
        }
        if (local_50[0] != 0) {
          LOCK();
          plVar4 = (long *)(local_50[0] + -0x10);
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            Memory::free_static((void *)(local_50[0] + -0x10),false);
          }
        }
      }
    }
    else {
      if (bVar19 != 0xa0) {
        if (bVar19 < 0xa1) {
          if (bVar19 == 0x60) {
            if (cVar7 == '\x0f') {
              uVar21 = (**(code **)(*(long *)*param_3 + 0x1e0))();
              dVar27 = pow(_LC90,(double)(uVar21 & 0xf));
              pOVar3 = (Object *)*param_3;
              if ((pOVar3 == (Object *)0x0) ||
                 (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
                local_58 = (Object *)0x0;
                local_90 = read_bplist_var_size_int(param_2,local_98,(int)dVar27 & 0xffU);
              }
              else {
                local_90 = read_bplist_var_size_int(param_2,local_98,(int)dVar27 & 0xffU);
                cVar7 = RefCounted::unreference();
                if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
              uVar16 = (ulong)((int)local_90 + 1);
              if ((long)uVar16 < 0) {
                puVar15 = (undefined8 *)0x0;
                _err_print_error("resize","./core/templates/cowdata.h",0x157,
                                 "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                                 ,0,0);
              }
              else {
                if (uVar16 != 0) goto LAB_00104146;
                puVar15 = (undefined8 *)0x0;
              }
LAB_001041ab:
              uVar16 = 0;
              do {
                uVar9 = (**(code **)(*(long *)*param_3 + 0x1e8))();
                lVar12 = (long)(int)uVar16;
                if (lVar12 < 0) {
                  if (puVar15 == (undefined8 *)0x0) goto LAB_00104448;
                  lVar25 = puVar15[-1];
LAB_0010444b:
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar25,"p_index",
                             "size()","",false,false);
                }
                else {
                  if (puVar15 == (undefined8 *)0x0) {
LAB_00104448:
                    lVar25 = 0;
                    goto LAB_0010444b;
                  }
                  lVar25 = puVar15[-1];
                  if (lVar25 <= lVar12) goto LAB_0010444b;
                  plVar4 = puVar15 + -2;
                  puVar17 = puVar15;
                  if (1 < (ulong)puVar15[-2]) {
                    lVar12 = puVar15[-1];
                    uVar24 = 0x10;
                    __n = lVar12 * 2;
                    if (__n != 0) {
                      uVar24 = __n - 1 | __n - 1 >> 1;
                      uVar24 = uVar24 | uVar24 >> 2;
                      uVar24 = uVar24 | uVar24 >> 4;
                      uVar24 = uVar24 | uVar24 >> 8;
                      uVar24 = uVar24 | uVar24 >> 0x10;
                      uVar24 = (uVar24 | uVar24 >> 0x20) + 0x11;
                    }
                    puVar18 = (undefined8 *)Memory::alloc_static(uVar24,false);
                    if (puVar18 == (undefined8 *)0x0) {
                      _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                       "Parameter \"mem_new\" is null.",0,0);
                    }
                    else {
                      puVar17 = puVar18 + 2;
                      *puVar18 = 1;
                      puVar18[1] = lVar12;
                      memcpy(puVar17,puVar15,__n);
                      LOCK();
                      *plVar4 = *plVar4 + -1;
                      UNLOCK();
                      if (*plVar4 == 0) {
                        Memory::free_static(plVar4,false);
                      }
                    }
                  }
                  *(ushort *)((long)puVar17 + (long)(int)uVar16 * 2) = uVar9 << 8 | uVar9 >> 8;
                  puVar15 = puVar17;
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 != local_90);
              *(undefined4 *)(local_a8 + 0x17c) = 1;
              if (puVar15 == (undefined8 *)0x0) {
LAB_00104439:
                puVar15 = (undefined8 *)0x0;
              }
            }
            else {
              uVar16 = (ulong)(uVar21 + 1);
LAB_00104146:
              uVar24 = uVar16 * 2 - 1;
              uVar24 = uVar24 | uVar24 >> 1;
              uVar24 = uVar24 | uVar24 >> 2;
              uVar24 = uVar24 | uVar24 >> 4;
              uVar24 = uVar24 | uVar24 >> 8;
              puVar17 = (undefined8 *)Memory::alloc_static((uVar24 | uVar24 >> 0x10) + 0x11,false);
              if (puVar17 == (undefined8 *)0x0) {
                puVar15 = (undefined8 *)0x0;
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0,0);
                if (local_90 != 0) goto LAB_001041ab;
                *(undefined4 *)(local_a8 + 0x17c) = 1;
                goto LAB_00104439;
              }
              puVar15 = puVar17 + 2;
              *puVar17 = 1;
              puVar17[1] = uVar16;
              if (local_90 != 0) goto LAB_001041ab;
              *(undefined4 *)(local_a8 + 0x17c) = 1;
            }
            String::utf16((wchar16 *)&local_60,(int)puVar15);
            String::utf8();
            pOVar1 = local_58;
            pOVar3 = *(Object **)(local_a8 + 0x180);
            if (pOVar3 == local_58) {
              if (pOVar3 != (Object *)0x0) {
                LOCK();
                pOVar3 = pOVar3 + -0x10;
                *(long *)pOVar3 = *(long *)pOVar3 + -1;
                UNLOCK();
                if (*(long *)pOVar3 == 0) {
                  local_58 = (Object *)0x0;
                  Memory::free_static(pOVar1 + -0x10,false);
                }
              }
            }
            else {
              if (pOVar3 != (Object *)0x0) {
                LOCK();
                pOVar3 = pOVar3 + -0x10;
                *(long *)pOVar3 = *(long *)pOVar3 + -1;
                UNLOCK();
                if (*(long *)pOVar3 == 0) {
                  lVar12 = *(long *)(local_a8 + 0x180);
                  *(undefined8 *)(local_a8 + 0x180) = 0;
                  Memory::free_static((void *)(lVar12 + -0x10),false);
                }
              }
              *(Object **)(local_a8 + 0x180) = local_58;
            }
            pPVar22 = local_60;
            if (local_60 != (PListNode *)0x0) {
              LOCK();
              pPVar26 = local_60 + -0x10;
              *(long *)pPVar26 = *(long *)pPVar26 + -1;
              UNLOCK();
              if (*(long *)pPVar26 == 0) {
                local_60 = (PListNode *)0x0;
                Memory::free_static(pPVar22 + -0x10,false);
              }
            }
            if (puVar15 != (undefined8 *)0x0) {
              plVar4 = puVar15 + -2;
              LOCK();
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                Memory::free_static(plVar4,false);
              }
            }
            goto LAB_00103688;
          }
          if (bVar19 != 0x80) goto LAB_001040f0;
          pOVar3 = (Object *)*param_3;
          uVar21 = uVar21 + 1;
          *(undefined4 *)(local_a8 + 0x17c) = 5;
          if ((pOVar3 != (Object *)0x0) &&
             (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 != '\0')) {
            uVar13 = read_bplist_var_size_int(param_2,local_98,uVar21);
            *(undefined8 *)(local_a8 + 0x1c8) = uVar13;
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
            goto LAB_00103688;
          }
LAB_00103669:
          local_58 = (Object *)0x0;
          uVar13 = read_bplist_var_size_int(param_2,local_98,uVar21);
          *(undefined8 *)(local_a8 + 0x1c8) = uVar13;
          goto LAB_00103688;
        }
        if (bVar19 != 0xc0) {
          if (bVar19 == 0xd0) {
            if (cVar7 == '\x0f') {
              uVar21 = (**(code **)(*(long *)*param_3 + 0x1e0))();
              dVar27 = pow(_LC90,(double)(uVar21 & 0xf));
              pOVar3 = (Object *)*param_3;
              if ((pOVar3 == (Object *)0x0) ||
                 (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
                local_58 = (Object *)0x0;
                local_90 = read_bplist_var_size_int(param_2,local_98,(int)dVar27 & 0xffU);
              }
              else {
                local_90 = read_bplist_var_size_int(param_2,local_98,(int)dVar27 & 0xffU);
                cVar7 = RefCounted::unreference();
                if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            lVar12 = (**(code **)(*(long *)*param_3 + 0x1c8))();
            *(undefined4 *)(local_a8 + 0x17c) = 3;
            if (local_90 != 0) {
              uVar16 = 0;
              do {
                (**(code **)(*(long *)*param_3 + 0x1b8))
                          ((long *)*param_3,(byte)param_2[0x181] * uVar16 + lVar12);
                pOVar3 = (Object *)*param_3;
                PVar2 = param_2[0x181];
                if ((pOVar3 == (Object *)0x0) ||
                   (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
                  local_58 = (Object *)0x0;
                  uVar13 = read_bplist_var_size_int(param_2,local_98,PVar2);
                }
                else {
                  uVar13 = read_bplist_var_size_int(param_2,local_98,PVar2);
                  cVar7 = RefCounted::unreference();
                  if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
                    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                    Memory::free_static(pOVar3,false);
                  }
                }
                (**(code **)(*(long *)*param_3 + 0x1b8))
                          ((long *)*param_3,
                           (ulong)(byte)param_2[0x181] * (local_90 + uVar16) + lVar12);
                pOVar3 = (Object *)*param_3;
                PVar2 = param_2[0x181];
                if ((pOVar3 == (Object *)0x0) ||
                   (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
                  local_58 = (Object *)0x0;
                  uVar14 = read_bplist_var_size_int(param_2,local_98,PVar2);
                }
                else {
                  uVar14 = read_bplist_var_size_int(param_2,local_98,PVar2);
                  cVar7 = RefCounted::unreference();
                  if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
                    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                    Memory::free_static(pOVar3,false);
                  }
                }
                pOVar3 = (Object *)*param_3;
                if ((pOVar3 == (Object *)0x0) ||
                   (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
                  local_58 = (Object *)0x0;
                  read_bplist_obj(&local_68,param_2,local_98,uVar13);
                }
                else {
                  read_bplist_obj(&local_68,param_2,local_98,uVar13);
                  cVar7 = RefCounted::unreference();
                  if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
                    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                    Memory::free_static(pOVar3,false);
                  }
                }
                pPVar22 = local_68;
                if (local_68 == (PListNode *)0x0) {
                  uVar13 = 0x260;
                  pcVar20 = 
                  "Condition \"element_key.is_null() || element_key->data_type != PL_NODE_TYPE_STRING\" is true. Returning: Ref<PListNode>()"
                  ;
LAB_001045ca:
                  _err_print_error("read_bplist_obj","core/io/plist.cpp",uVar13,pcVar20,0,0);
                  *param_1 = 0;
                  goto LAB_001036a7;
                }
                if (*(int *)(local_68 + 0x17c) != 1) {
                  uVar13 = 0x260;
                  pcVar20 = 
                  "Condition \"element_key.is_null() || element_key->data_type != PL_NODE_TYPE_STRING\" is true. Returning: Ref<PListNode>()"
                  ;
LAB_00104b42:
                  _err_print_error("read_bplist_obj","core/io/plist.cpp",uVar13,pcVar20,0,0);
                  *param_1 = 0;
                  cVar7 = RefCounted::unreference();
                  if (cVar7 != '\0') {
                    memdelete<PListNode>(pPVar22);
                  }
                  goto LAB_001036a7;
                }
                pOVar3 = (Object *)*param_3;
                if ((pOVar3 == (Object *)0x0) ||
                   (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
                  local_58 = (Object *)0x0;
                  read_bplist_obj(&local_60,param_2,local_98,uVar14);
                }
                else {
                  read_bplist_obj(&local_60,param_2,local_98,uVar14);
                  cVar7 = RefCounted::unreference();
                  if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
                    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                    Memory::free_static(pOVar3,false);
                  }
                }
                pPVar26 = local_60;
                if (local_60 == (PListNode *)0x0) {
                  uVar13 = 0x262;
                  pcVar20 = "Condition \"element.is_null()\" is true. Returning: Ref<PListNode>()";
                  goto LAB_00104b42;
                }
                String::utf8((char *)local_98,(int)*(undefined8 *)(pPVar22 + 0x180));
                puVar15 = (undefined8 *)
                          HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                          ::operator[]((HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                                        *)(local_a8 + 0x198),local_98);
                pPVar6 = (PListNode *)*puVar15;
                if (pPVar26 != pPVar6) {
                  *puVar15 = pPVar26;
                  cVar7 = RefCounted::reference();
                  if (cVar7 == '\0') {
                    *puVar15 = 0;
                  }
                  if ((pPVar6 != (PListNode *)0x0) &&
                     (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
                    memdelete<PListNode>(pPVar6);
                  }
                }
                pOVar3 = local_58;
                if (local_58 == (Object *)0x0) {
                  cVar7 = RefCounted::unreference();
                  if (cVar7 != '\0') goto LAB_001043d0;
LAB_00103c00:
                  cVar7 = RefCounted::unreference();
                  if (cVar7 != '\0') {
                    memdelete<PListNode>(pPVar22);
                  }
                }
                else {
                  LOCK();
                  pOVar1 = local_58 + -0x10;
                  *(long *)pOVar1 = *(long *)pOVar1 + -1;
                  UNLOCK();
                  if (*(long *)pOVar1 == 0) {
                    local_58 = (Object *)0x0;
                    Memory::free_static(pOVar3 + -0x10,false);
                  }
                  pPVar26 = local_60;
                  pPVar22 = local_68;
                  if ((local_60 != (PListNode *)0x0) &&
                     (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
LAB_001043d0:
                    memdelete<PListNode>(pPVar26);
                  }
                  if (pPVar22 != (PListNode *)0x0) goto LAB_00103c00;
                }
                uVar16 = uVar16 + 1;
              } while (local_90 != uVar16);
            }
            goto LAB_00103688;
          }
LAB_001040f0:
          _err_print_error("read_bplist_obj","core/io/plist.cpp",0x267,
                           "Method/function failed. Returning: Ref<PListNode>()",
                           "Invalid marker type.",0,0);
          goto LAB_00103573;
        }
      }
      if (cVar7 == '\x0f') {
        uVar21 = (**(code **)(*(long *)*param_3 + 0x1e0))();
        dVar27 = pow(_LC90,(double)(uVar21 & 0xf));
        pOVar3 = (Object *)*param_3;
        if ((pOVar3 == (Object *)0x0) ||
           (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
          local_58 = (Object *)0x0;
          local_90 = read_bplist_var_size_int(param_2,local_98,(int)dVar27 & 0xffU);
        }
        else {
          local_90 = read_bplist_var_size_int(param_2,local_98,(int)dVar27 & 0xffU);
          cVar7 = RefCounted::unreference();
          if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      lVar12 = (**(code **)(*(long *)*param_3 + 0x1c8))();
      *(undefined4 *)(local_a8 + 0x17c) = 2;
      if (local_90 != 0) {
        uVar16 = 0;
        do {
          (**(code **)(*(long *)*param_3 + 0x1b8))
                    ((long *)*param_3,(byte)param_2[0x181] * uVar16 + lVar12);
          pOVar3 = (Object *)*param_3;
          PVar2 = param_2[0x181];
          if ((pOVar3 == (Object *)0x0) ||
             (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            local_58 = (Object *)0x0;
            uVar13 = read_bplist_var_size_int(param_2,local_98,PVar2);
          }
          else {
            uVar13 = read_bplist_var_size_int(param_2,local_98,PVar2);
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
          pOVar3 = (Object *)*param_3;
          if ((pOVar3 == (Object *)0x0) ||
             (local_58 = pOVar3, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            local_58 = (Object *)0x0;
            read_bplist_obj(&local_60,param_2,local_98,uVar13);
          }
          else {
            read_bplist_obj(&local_60,param_2,local_98,uVar13);
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
          pPVar22 = local_60;
          if (local_60 == (PListNode *)0x0) {
            uVar13 = 0x24c;
            pcVar20 = "Condition \"element.is_null()\" is true. Returning: Ref<PListNode>()";
            goto LAB_001045ca;
          }
          local_58 = (Object *)local_60;
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            local_58 = (Object *)0x0;
            Vector<Ref<PListNode>>::push_back((Vector<Ref<PListNode>> *)(local_a8 + 0x188),local_98)
            ;
          }
          else {
            Vector<Ref<PListNode>>::push_back((Vector<Ref<PListNode>> *)(local_a8 + 0x188),local_98)
            ;
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
              memdelete<PListNode>(pPVar22);
            }
          }
          cVar7 = RefCounted::unreference();
          if (cVar7 != '\0') {
            memdelete<PListNode>(pPVar22);
          }
          uVar16 = uVar16 + 1;
        } while (local_90 != uVar16);
      }
    }
LAB_00103688:
    *param_1 = local_a8;
    cVar7 = RefCounted::reference();
    if (cVar7 == '\0') {
      *param_1 = 0;
    }
  }
  else {
    lVar12 = read_bplist_var_size_int(param_2,&local_58,PVar2);
    cVar7 = RefCounted::unreference();
    if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    if (lVar12 != 0) goto LAB_00103391;
LAB_00103540:
    _err_print_error("read_bplist_obj","core/io/plist.cpp",0x1f7,
                     "Condition \"marker_off == 0\" is true. Returning: Ref<PListNode>()",
                     "Invalid marker size.",0,0);
LAB_00103573:
    *param_1 = 0;
    if (local_a8 == (PListNode *)0x0) goto LAB_001036b8;
  }
LAB_001036a7:
  cVar7 = RefCounted::unreference();
  if (cVar7 != '\0') {
    memdelete<PListNode>(local_a8);
  }
LAB_001036b8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* PListNode::push_subnode(Ref<PListNode> const&, String const&) */

undefined8 __thiscall PListNode::push_subnode(PListNode *this,Ref *param_1,String *param_2)

{
  uint uVar1;
  PListNode *pPVar2;
  PListNode *pPVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  char cVar14;
  uint uVar15;
  undefined8 uVar16;
  long *plVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long in_FS_OFFSET;
  PListNode *local_48;
  long local_40;
  
  pPVar2 = *(PListNode **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pPVar2 == (PListNode *)0x0) {
    _err_print_error("push_subnode","core/io/plist.cpp",0xd5,
                     "Condition \"p_node.is_null()\" is true. Returning: false",0,0);
    uVar16 = 0;
  }
  else {
    if (*(int *)(this + 0x17c) == 3) {
      if ((*(long *)param_2 == 0) || (*(uint *)(*(long *)param_2 + -8) < 2)) {
        _err_print_error("push_subnode","core/io/plist.cpp",0xd7,
                         "Condition \"p_key.is_empty()\" is true. Returning: false",0,0);
        uVar16 = 0;
        goto LAB_00104e35;
      }
      if ((*(long *)(this + 0x1a0) != 0) && (*(int *)(this + 0x1c4) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c0) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1c0) * 8);
        uVar15 = String::hash();
        uVar13 = CONCAT44(0,uVar1);
        lVar21 = *(long *)(this + 0x1a8);
        uVar18 = 1;
        if (uVar15 != 0) {
          uVar18 = uVar15;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)uVar18 * lVar4;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar13;
        lVar20 = SUB168(auVar5 * auVar9,8);
        uVar15 = *(uint *)(lVar21 + lVar20 * 4);
        iVar19 = SUB164(auVar5 * auVar9,8);
        if (uVar15 != 0) {
          uVar22 = 0;
          do {
            if (uVar18 == uVar15) {
              cVar14 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 0x1a0) + lVar20 * 8) + 0x10),
                                          param_2);
              if (cVar14 != '\0') {
                _err_print_error("push_subnode","core/io/plist.cpp",0xd8,
                                 "Condition \"data_dict.has(p_key)\" is true. Returning: false",0,0)
                ;
                uVar16 = 0;
                goto LAB_00104e35;
              }
              lVar21 = *(long *)(this + 0x1a8);
            }
            uVar22 = uVar22 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar19 + 1) * lVar4;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar13;
            lVar20 = SUB168(auVar6 * auVar10,8);
            uVar15 = *(uint *)(lVar21 + lVar20 * 4);
            iVar19 = SUB164(auVar6 * auVar10,8);
          } while ((uVar15 != 0) &&
                  (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar15 * lVar4, auVar11._8_8_ = 0,
                  auVar11._0_8_ = uVar13, auVar8._8_8_ = 0,
                  auVar8._0_8_ = (ulong)((uVar1 + iVar19) - SUB164(auVar7 * auVar11,8)) * lVar4,
                  auVar12._8_8_ = 0, auVar12._0_8_ = uVar13, uVar22 <= SUB164(auVar8 * auVar12,8)));
        }
      }
      plVar17 = (long *)HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                        ::operator[]((HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                                      *)(this + 0x198),param_2);
      pPVar2 = *(PListNode **)param_1;
      pPVar3 = (PListNode *)*plVar17;
      if (pPVar2 != pPVar3) {
        *plVar17 = (long)pPVar2;
        if ((pPVar2 != (PListNode *)0x0) && (cVar14 = RefCounted::reference(), cVar14 == '\0')) {
          *plVar17 = 0;
        }
        if ((pPVar3 != (PListNode *)0x0) && (cVar14 = RefCounted::unreference(), cVar14 != '\0')) {
          memdelete<PListNode>(pPVar3);
        }
      }
    }
    else {
      if (*(int *)(this + 0x17c) != 2) {
        _err_print_error("push_subnode","core/io/plist.cpp",0xdf,
                         "Method/function failed. Returning: false",
                         "PList: Invalid parent node type, should be DICT or ARRAY.",0,0);
        uVar16 = 0;
        goto LAB_00104e35;
      }
      local_48 = pPVar2;
      cVar14 = RefCounted::reference();
      if (cVar14 == '\0') {
        local_48 = (PListNode *)0x0;
        Vector<Ref<PListNode>>::push_back((Vector<Ref<PListNode>> *)(this + 0x188),&local_48);
      }
      else {
        Vector<Ref<PListNode>>::push_back((Vector<Ref<PListNode>> *)(this + 0x188),&local_48);
        cVar14 = RefCounted::unreference();
        if (cVar14 != '\0') {
          memdelete<PListNode>(pPVar2);
        }
      }
    }
    uVar16 = 1;
  }
LAB_00104e35:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}



/* PList::load_string(String const&, String&) */

undefined4 __thiscall PList::load_string(PList *this,String *param_1,String *param_2)

{
  PListNode *pPVar1;
  long *plVar2;
  Ref<PListNode> *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  wchar32 wVar14;
  int iVar15;
  PListNode *pPVar16;
  long in_FS_OFFSET;
  double dVar17;
  PListNode *local_b0;
  Ref<PListNode> *local_a8;
  undefined1 (*local_98) [16];
  PListNode *local_90;
  PListNode *local_88;
  PListNode *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  PListNode *local_60;
  PListNode *local_58;
  undefined8 local_50;
  long local_40;
  
  pPVar16 = *(PListNode **)(this + 0x1a0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pPVar16 != (PListNode *)0x0) {
    *(undefined8 *)(this + 0x1a0) = 0;
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      memdelete<PListNode>(pPVar16);
    }
  }
  local_98 = (undefined1 (*) [16])0x0;
  local_90 = (PListNode *)0x0;
  bVar4 = false;
LAB_00105142:
  do {
    wVar14 = (wchar32)param_1;
    iVar6 = String::find_char(wVar14,0x3c);
    if (iVar6 == -1) {
      local_50 = 0x26;
      local_58 = (PListNode *)0x108680;
      String::parse_latin1((StrRange *)param_2);
      goto LAB_00105335;
    }
    iVar6 = String::find_char(wVar14,0x3e);
    iVar15 = (int)(String *)&local_88;
    String::substr(iVar15,wVar14);
    if ((local_88 == (PListNode *)0x0) || (lVar12 = *(long *)(local_88 + -8), (uint)lVar12 < 2)) {
      local_50 = 0x13;
      local_58 = (PListNode *)0x107974;
      String::parse_latin1((StrRange *)param_2);
LAB_0010530a:
      pPVar16 = local_88;
      if (local_88 != (PListNode *)0x0) {
        LOCK();
        pPVar1 = local_88 + -0x10;
        *(long *)pPVar1 = *(long *)pPVar1 + -1;
        UNLOCK();
        if (*(long *)pPVar1 == 0) {
          local_88 = (PListNode *)0x0;
          Memory::free_static(pPVar16 + -0x10,false);
        }
      }
      goto LAB_00105335;
    }
    local_80 = (PListNode *)0x0;
    if (lVar12 < 1) {
      lVar13 = 0;
      goto LAB_00105585;
    }
    if ((*(int *)local_88 == 0x21) || (*(int *)local_88 == 0x3f)) {
      iVar6 = String::find_char(wVar14,0x3e);
    }
    else {
      iVar7 = String::find((char *)&local_88,0x107988);
      if (iVar7 == 0) goto LAB_001055d8;
      uVar8 = String::operator==((String *)&local_88,"/plist");
      pPVar16 = local_80;
      if ((char)uVar8 != '\0') {
        if (local_80 != (PListNode *)0x0) {
          LOCK();
          pPVar1 = local_80 + -0x10;
          *(long *)pPVar1 = *(long *)pPVar1 + -1;
          UNLOCK();
          if (*(long *)pPVar1 == 0) {
            local_80 = (PListNode *)0x0;
            Memory::free_static(pPVar16 + -0x10,false);
          }
        }
        pPVar16 = local_88;
        if (local_88 != (PListNode *)0x0) {
          LOCK();
          pPVar1 = local_88 + -0x10;
          *(long *)pPVar1 = *(long *)pPVar1 + -1;
          UNLOCK();
          if (*(long *)pPVar1 == 0) {
            local_88 = (PListNode *)0x0;
            Memory::free_static(pPVar16 + -0x10,false);
          }
        }
        if ((local_98 == (undefined1 (*) [16])0x0) || (*(int *)local_98[1] == 0)) goto LAB_00105338;
        break;
      }
      if (!bVar4) {
        local_50 = 0x1c;
        local_58 = (PListNode *)0x107995;
        String::parse_latin1((StrRange *)param_2);
        goto LAB_001052b8;
      }
      cVar5 = String::operator==((String *)&local_88,"dict");
      pauVar9 = local_98;
      if (cVar5 != '\0') {
        if (local_98 == (undefined1 (*) [16])0x0) {
          if (*(long *)(this + 0x1a0) == 0) {
            PListNode::new_dict((PListNode *)&local_58);
            pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)pauVar9[1] = 0;
            *pauVar9 = (undefined1  [16])0x0;
            local_98 = pauVar9;
LAB_001056c3:
            pauVar10 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
            pPVar1 = local_58;
            *pauVar10 = (undefined1  [16])0x0;
            pauVar10[1] = (undefined1  [16])0x0;
            if (local_58 != (PListNode *)0x0) {
              *(PListNode **)*pauVar10 = local_58;
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                *(undefined8 *)*pauVar10 = 0;
              }
            }
            lVar12 = *(long *)(*pauVar9 + 8);
            *(undefined8 *)(*pauVar10 + 8) = 0;
            *(undefined1 (**) [16])(pauVar10[1] + 8) = pauVar9;
            *(long *)pauVar10[1] = lVar12;
            if (lVar12 != 0) {
              *(undefined1 (**) [16])(lVar12 + 8) = pauVar10;
            }
            lVar12 = *(long *)*pauVar9;
            *(undefined1 (**) [16])(*pauVar9 + 8) = pauVar10;
            if (lVar12 == 0) {
              *(undefined1 (**) [16])*pauVar9 = pauVar10;
            }
            pPVar16 = *(PListNode **)(this + 0x1a0);
            *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
            if (pPVar16 == pPVar1) {
              if (pPVar1 == (PListNode *)0x0) goto LAB_001055d8;
            }
            else {
              *(PListNode **)(this + 0x1a0) = pPVar1;
              if (pPVar1 == (PListNode *)0x0) {
LAB_001055c9:
                if (pPVar16 != (PListNode *)0x0) goto LAB_001059c6;
                goto LAB_001055d8;
              }
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                *(undefined8 *)(this + 0x1a0) = 0;
              }
              if ((pPVar16 != (PListNode *)0x0) &&
                 (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
                memdelete<PListNode>(pPVar16);
              }
            }
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              memdelete<PListNode>(pPVar1);
            }
            goto LAB_001055d8;
          }
        }
        else {
          if (*(int *)local_98[1] != 0) {
            PListNode::new_dict((PListNode *)&local_60);
            pPVar16 = local_60;
            *(undefined4 *)(local_60 + 0x17c) = 3;
            cVar5 = PListNode::push_subnode
                              ((PListNode *)**(undefined8 **)(*pauVar9 + 8),(PListNode *)&local_60,
                               (String *)&local_90);
            if (cVar5 != '\0') {
              puVar11 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
              puVar11[1] = 0;
              puVar11[2] = 0;
              puVar11[3] = 0;
              *puVar11 = pPVar16;
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                *puVar11 = 0;
              }
              lVar12 = *(long *)(*pauVar9 + 8);
              puVar11[1] = 0;
              puVar11[3] = pauVar9;
              puVar11[2] = lVar12;
              if (lVar12 != 0) {
                *(undefined8 **)(lVar12 + 8) = puVar11;
              }
              lVar12 = *(long *)*pauVar9;
              iVar15 = *(int *)pauVar9[1];
              *(undefined8 **)(*pauVar9 + 8) = puVar11;
              if (lVar12 == 0) {
                *(undefined8 **)*pauVar9 = puVar11;
              }
              *(int *)pauVar9[1] = iVar15 + 1;
              cVar5 = RefCounted::unreference();
              if (cVar5 != '\0') {
                memdelete<PListNode>(pPVar16);
              }
              goto LAB_001055d8;
            }
            local_50 = 0x28;
            local_58 = (PListNode *)0x1086e0;
            String::parse_latin1((StrRange *)param_2);
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              memdelete<PListNode>(pPVar16);
            }
            goto LAB_001052b8;
          }
          if (*(long *)(this + 0x1a0) == 0) {
            PListNode::new_dict((PListNode *)&local_58);
            goto LAB_001056c3;
          }
        }
LAB_001055f0:
        local_50 = 0x16;
        local_58 = (PListNode *)0x1079b7;
        String::parse_latin1((StrRange *)param_2);
LAB_001052b8:
        pPVar16 = local_80;
        if (local_80 != (PListNode *)0x0) {
          LOCK();
          pPVar1 = local_80 + -0x10;
          *(long *)pPVar1 = *(long *)pPVar1 + -1;
          UNLOCK();
          if (*(long *)pPVar1 == 0) {
            local_80 = (PListNode *)0x0;
            Memory::free_static(pPVar16 + -0x10,false);
          }
        }
        goto LAB_0010530a;
      }
      cVar5 = String::operator==((String *)&local_88,"/dict");
      pauVar9 = local_98;
      if (cVar5 == '\0') {
        cVar5 = String::operator==((String *)&local_88,"array");
        pauVar9 = local_98;
        if (cVar5 == '\0') {
          cVar5 = String::operator==((String *)&local_88,"/array");
          if (cVar5 != '\0') {
            if (((local_98 == (undefined1 (*) [16])0x0) || (*(int *)local_98[1] == 0)) ||
               (*(int *)(**(long **)(*local_98 + 8) + 0x17c) != 2)) {
              local_50 = 0x18;
              local_58 = (PListNode *)0x1079f9;
              String::parse_latin1((StrRange *)param_2);
              goto LAB_001052b8;
            }
            List<Ref<PListNode>,DefaultAllocator>::pop_back
                      ((List<Ref<PListNode>,DefaultAllocator> *)&local_98);
            goto LAB_001055d8;
          }
          if (local_88 == (PListNode *)0x0) {
            lVar13 = -1;
            lVar12 = 0;
LAB_00105585:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar13,lVar12,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar12 = *(long *)(local_88 + -8);
          if ((int)lVar12 == 0) {
            lVar13 = -1;
            goto LAB_00105585;
          }
          lVar13 = (long)((int)lVar12 + -2);
          if (lVar12 == lVar13) {
LAB_00105c3b:
            iVar6 = String::find((char *)param_1,0x107a12);
            if (iVar6 == -1) {
              local_60 = (PListNode *)0x0;
              if (local_88 != (PListNode *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_88);
              }
              local_68 = 0;
              String::parse_latin1((String *)&local_68,"Mismatched <%s> tag.");
              vformat<String>((CowData *)&local_58,(String *)&local_68,
                              (CowData<char32_t> *)&local_60);
              if (*(PListNode **)param_2 != local_58) {
                CowData<char32_t>::operator=((CowData<char32_t> *)param_2,(CowData *)&local_58);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            }
            else {
              iVar6 = String::find_char(wVar14,0x3e);
              String::substr((int)(String *)&local_78,wVar14);
              cVar5 = String::operator!=((String *)&local_78,(String *)&local_88);
              if (cVar5 == '\0') {
                String::substr((int)(CowData *)&local_58,wVar14);
                if (local_80 != local_58) {
                  CowData<char32_t>::operator=((CowData<char32_t> *)&local_80,(CowData *)&local_58);
                }
                pPVar16 = local_58;
                if (local_58 != (PListNode *)0x0) {
                  LOCK();
                  pPVar1 = local_58 + -0x10;
                  *(long *)pPVar1 = *(long *)pPVar1 + -1;
                  UNLOCK();
                  if (*(long *)pPVar1 == 0) {
                    local_58 = (PListNode *)0x0;
                    Memory::free_static(pPVar16 + -0x10,false);
                  }
                }
                lVar12 = local_78;
                if (local_78 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_78 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_78 = 0;
                    Memory::free_static((void *)(lVar12 + -0x10),false);
                  }
                }
                goto LAB_00105d3e;
              }
              local_60 = (PListNode *)0x0;
              if (local_78 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_78);
              }
              local_68 = 0;
              if (local_88 != (PListNode *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_88);
              }
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Mismatched <%s> and <%s> token pair.");
              vformat<String,String>
                        ((CowData *)&local_58,(String *)&local_70,(CowData<char32_t> *)&local_68,
                         (CowData<char32_t> *)&local_60);
              if (*(PListNode **)param_2 != local_58) {
                CowData<char32_t>::operator=((CowData<char32_t> *)param_2,(CowData *)&local_58);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            }
          }
          else {
            if ((lVar13 < 0) || (lVar12 <= lVar13)) goto LAB_00105585;
            if (*(int *)(local_88 + lVar13 * 4) != 0x2f) goto LAB_00105c3b;
            String::substr((int)(CowData *)&local_58,iVar15);
            if (local_88 != local_58) {
              CowData<char32_t>::operator=((CowData<char32_t> *)&local_88,(CowData *)&local_58);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_00105d3e:
            local_b0 = (PListNode *)&local_58;
            cVar5 = String::operator==((String *)&local_88,"key");
            if (cVar5 != '\0') {
              if (local_90 != local_80) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_80);
              }
              goto LAB_00105422;
            }
            local_70 = 0;
            cVar5 = String::operator==((String *)&local_88,"true");
            if (cVar5 == '\0') {
              cVar5 = String::operator==((String *)&local_88,"false");
              if (cVar5 != '\0') {
                PListNode::new_bool(local_b0,false);
                goto LAB_00105ed7;
              }
              cVar5 = String::operator==((String *)&local_88,"integer");
              if (cVar5 != '\0') {
                lVar12 = String::to_int();
                PListNode::new_int(local_b0,lVar12);
                goto LAB_00105ed7;
              }
              cVar5 = String::operator==((String *)&local_88,"real");
              if (cVar5 != '\0') {
                dVar17 = (double)String::to_float();
                PListNode::new_real(local_b0,dVar17);
                goto LAB_00105ed7;
              }
              cVar5 = String::operator==((String *)&local_88,"string");
              if (cVar5 != '\0') {
                PListNode::new_string((String *)local_b0);
                goto LAB_00105ed7;
              }
              cVar5 = String::operator==((String *)&local_88,"data");
              if (cVar5 != '\0') {
                PListNode::new_data((String *)local_b0);
                goto LAB_00105ed7;
              }
              cVar5 = String::operator==((String *)&local_88,"date");
              if (cVar5 != '\0') {
                PListNode::new_date((String *)local_b0);
                goto LAB_00105ed7;
              }
              local_60 = (PListNode *)0x0;
              if (local_88 != (PListNode *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_88);
              }
              local_68 = 0;
              String::parse_latin1((String *)&local_68,"Invalid value type: %s.");
              vformat<String>(local_b0,(String *)&local_68,(CowData<char32_t> *)&local_60);
              if (*(PListNode **)param_2 != local_58) {
                CowData<char32_t>::operator=((CowData<char32_t> *)param_2,(CowData *)local_b0);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            }
            else {
              PListNode::new_bool(local_b0,true);
LAB_00105ed7:
              Ref<PListNode>::operator=((Ref<PListNode> *)&local_70,local_58);
              Ref<PListNode>::unref((Ref<PListNode> *)local_b0);
              if (((local_98 != (undefined1 (*) [16])0x0) && (*(int *)local_98[1] != 0)) &&
                 (cVar5 = PListNode::push_subnode
                                    ((PListNode *)**(undefined8 **)(*local_98 + 8),
                                     (Ref<PListNode> *)&local_70,(String *)&local_90), cVar5 != '\0'
                 )) {
                Ref<PListNode>::unref((Ref<PListNode> *)&local_70);
                goto LAB_00105422;
              }
              String::parse_latin1(param_2,"Can\'t push subnode, invalid parent type.");
            }
            local_a8 = (Ref<PListNode> *)&local_70;
            Ref<PListNode>::unref(local_a8);
          }
          goto LAB_001052b8;
        }
        if (local_98 == (undefined1 (*) [16])0x0) {
          if (*(long *)(this + 0x1a0) != 0) goto LAB_001055f0;
          PListNode::new_array((PListNode *)&local_58);
          pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *pauVar9 = (undefined1  [16])0x0;
          *(undefined4 *)pauVar9[1] = 0;
          local_98 = pauVar9;
LAB_001058ea:
          pauVar10 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
          pPVar16 = local_58;
          *pauVar10 = (undefined1  [16])0x0;
          pauVar10[1] = (undefined1  [16])0x0;
          if (local_58 != (PListNode *)0x0) {
            *(PListNode **)*pauVar10 = local_58;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              *(undefined8 *)*pauVar10 = 0;
            }
          }
          lVar12 = *(long *)(*pauVar9 + 8);
          *(undefined8 *)(*pauVar10 + 8) = 0;
          *(undefined1 (**) [16])(pauVar10[1] + 8) = pauVar9;
          *(long *)pauVar10[1] = lVar12;
          if (lVar12 != 0) {
            *(undefined1 (**) [16])(lVar12 + 8) = pauVar10;
          }
          lVar12 = *(long *)*pauVar9;
          *(undefined1 (**) [16])(*pauVar9 + 8) = pauVar10;
          if (lVar12 == 0) {
            *(undefined1 (**) [16])*pauVar9 = pauVar10;
          }
          pPVar1 = *(PListNode **)(this + 0x1a0);
          *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
          if (pPVar1 == pPVar16) goto LAB_001055c9;
          *(PListNode **)(this + 0x1a0) = pPVar16;
          if (pPVar16 == (PListNode *)0x0) {
            if ((pPVar1 == (PListNode *)0x0) || (cVar5 = RefCounted::unreference(), cVar5 == '\0'))
            goto LAB_001055d8;
LAB_001055c1:
            memdelete<PListNode>(pPVar1);
            goto LAB_001055c9;
          }
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            *(undefined8 *)(this + 0x1a0) = 0;
          }
          if ((pPVar1 != (PListNode *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0'))
          goto LAB_001055c1;
LAB_001059c6:
          cVar5 = RefCounted::unreference();
        }
        else {
          if (*(int *)local_98[1] == 0) {
            if (*(long *)(this + 0x1a0) == 0) {
              PListNode::new_array((PListNode *)&local_58);
              goto LAB_001058ea;
            }
            goto LAB_001055f0;
          }
          PListNode::new_array((PListNode *)&local_60);
          cVar5 = PListNode::push_subnode
                            ((PListNode *)**(undefined8 **)(*pauVar9 + 8),(PListNode *)&local_60,
                             (String *)&local_90);
          if (cVar5 == '\0') {
            local_50 = 0x28;
            local_58 = (PListNode *)0x1086e0;
            String::parse_latin1((StrRange *)param_2);
            pPVar16 = local_60;
            if ((local_60 != (PListNode *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')
               ) {
              memdelete<PListNode>(pPVar16);
            }
            goto LAB_001052b8;
          }
          pauVar10 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
          pPVar16 = local_60;
          *pauVar10 = (undefined1  [16])0x0;
          pauVar10[1] = (undefined1  [16])0x0;
          if (local_60 != (PListNode *)0x0) {
            *(PListNode **)*pauVar10 = local_60;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              *(undefined8 *)*pauVar10 = 0;
            }
          }
          lVar12 = *(long *)(*pauVar9 + 8);
          *(undefined8 *)(*pauVar10 + 8) = 0;
          *(undefined1 (**) [16])(pauVar10[1] + 8) = pauVar9;
          *(long *)pauVar10[1] = lVar12;
          if (lVar12 != 0) {
            *(undefined1 (**) [16])(lVar12 + 8) = pauVar10;
          }
          lVar12 = *(long *)*pauVar9;
          *(undefined1 (**) [16])(*pauVar9 + 8) = pauVar10;
          if (lVar12 == 0) {
            *(undefined1 (**) [16])*pauVar9 = pauVar10;
          }
          *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
          if (pPVar16 == (PListNode *)0x0) goto LAB_001055d8;
          cVar5 = RefCounted::unreference();
        }
        if (cVar5 != '\0') {
          memdelete<PListNode>(pPVar16);
        }
      }
      else {
        if (((local_98 == (undefined1 (*) [16])0x0) || (*(int *)local_98[1] == 0)) ||
           (this_00 = *(Ref<PListNode> **)(*local_98 + 8), *(int *)(*(long *)this_00 + 0x17c) != 3))
        {
          local_50 = 0x17;
          local_58 = (PListNode *)0x1079d4;
          String::parse_latin1((StrRange *)param_2);
          goto LAB_001052b8;
        }
        if (local_98 == *(undefined1 (**) [16])(this_00 + 0x18)) {
          lVar12 = *(long *)(this_00 + 8);
          if (this_00 == *(Ref<PListNode> **)*local_98) {
            *(long *)*local_98 = lVar12;
          }
          lVar13 = *(long *)(this_00 + 0x10);
          *(long *)(*local_98 + 8) = lVar13;
          if (lVar13 != 0) {
            *(long *)(lVar13 + 8) = lVar12;
            lVar12 = *(long *)(this_00 + 8);
          }
          if (lVar12 != 0) {
            *(long *)(lVar12 + 0x10) = lVar13;
          }
          Ref<PListNode>::unref(this_00);
          Memory::free_static(this_00,false);
          *(int *)pauVar9[1] = *(int *)pauVar9[1] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0);
        }
        if (*(int *)pauVar9[1] == 0) {
          Memory::free_static(pauVar9,false);
          local_98 = (undefined1 (*) [16])0x0;
        }
      }
LAB_001055d8:
      bVar4 = true;
    }
LAB_00105422:
    pPVar16 = local_80;
    if (local_80 != (PListNode *)0x0) {
      LOCK();
      pPVar1 = local_80 + -0x10;
      *(long *)pPVar1 = *(long *)pPVar1 + -1;
      UNLOCK();
      if (*(long *)pPVar1 == 0) {
        local_80 = (PListNode *)0x0;
        Memory::free_static(pPVar16 + -0x10,false);
      }
    }
    pPVar16 = local_88;
    if (local_88 == (PListNode *)0x0) {
LAB_0010544a:
      if (iVar6 < 0) break;
      goto LAB_00105142;
    }
    LOCK();
    pPVar1 = local_88 + -0x10;
    *(long *)pPVar1 = *(long *)pPVar1 + -1;
    UNLOCK();
    if (*(long *)pPVar1 != 0) goto LAB_0010544a;
    local_88 = (PListNode *)0x0;
    Memory::free_static(pPVar16 + -0x10,false);
  } while (-1 < iVar6);
  local_50 = 0x30;
  local_58 = (PListNode *)0x1086a8;
  String::parse_latin1((StrRange *)param_2);
LAB_00105335:
  uVar8 = 0;
LAB_00105338:
  pPVar16 = local_90;
  if (local_90 != (PListNode *)0x0) {
    LOCK();
    pPVar1 = local_90 + -0x10;
    *(long *)pPVar1 = *(long *)pPVar1 + -1;
    UNLOCK();
    if (*(long *)pPVar1 == 0) {
      local_90 = (PListNode *)0x0;
      Memory::free_static(pPVar16 + -0x10,false);
    }
  }
  pauVar9 = local_98;
  if (local_98 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        plVar2 = *(long **)*pauVar9;
        if (plVar2 == (long *)0x0) {
          if (*(int *)pauVar9[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_001053df;
          }
          goto LAB_001053d5;
        }
        if (pauVar9 != (undefined1 (*) [16])plVar2[3]) break;
        lVar12 = plVar2[1];
        lVar13 = plVar2[2];
        *(long *)*pauVar9 = lVar12;
        if (plVar2 == *(long **)(*pauVar9 + 8)) {
          *(long *)(*pauVar9 + 8) = lVar13;
        }
        if (lVar13 != 0) {
          *(long *)(lVar13 + 8) = lVar12;
          lVar12 = plVar2[1];
        }
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x10) = lVar13;
        }
        if ((*plVar2 != 0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
          memdelete<PListNode>((PListNode *)*plVar2);
        }
        Memory::free_static(plVar2,false);
        pauVar10 = pauVar9 + 1;
        *(int *)*pauVar10 = *(int *)*pauVar10 + -1;
        if (*(int *)*pauVar10 == 0) goto LAB_001053d5;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar9[1] != 0);
LAB_001053d5:
    Memory::free_static(pauVar9,false);
  }
LAB_001053df:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PList::PList(String const&) */

void __thiscall PList::PList(PList *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  local_50 = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010ad38;
  *(undefined8 *)(this + 0x1a0) = 0;
  cVar4 = load_string(this,param_1,(String *)&local_50);
  if (cVar4 == '\0') {
    local_40 = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_001063d2;
        LOCK();
        lVar5 = *plVar1;
        bVar6 = lVar2 == lVar5;
        if (bVar6) {
          *plVar1 = lVar2 + 1;
          lVar5 = lVar2;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar5 != -1) {
        local_40 = local_50;
      }
    }
LAB_001063d2:
    local_48 = 0;
    local_30 = 10;
    local_38 = "PList: %s.";
    String::parse_latin1((StrRange *)&local_48);
    vformat<String>(&local_38,(StrRange *)&local_48,&local_40);
    _err_print_error("PList","core/io/plist.cpp",0x1c8,"Condition \"!ok\" is true.",&local_38,0);
    pcVar3 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
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
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PList::load_file(String const&) */

ulong __thiscall PList::load_file(PList *this,String *param_1)

{
  Object *pOVar1;
  long *plVar2;
  PListNode *pPVar3;
  undefined8 uVar4;
  long lVar5;
  Object *pOVar6;
  PListNode *pPVar7;
  char cVar8;
  PList PVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 uVar12;
  long in_FS_OFFSET;
  int local_6c;
  Object *local_68;
  long local_60;
  long local_58;
  Object *local_50;
  PListNode *local_48;
  long local_40;
  PListNode local_38 [8];
  long local_30;
  
  pPVar3 = *(PListNode **)(this + 0x1a0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pPVar3 != (PListNode *)0x0) {
    *(undefined8 *)(this + 0x1a0) = 0;
    cVar8 = RefCounted::unreference();
    if (cVar8 != '\0') {
      memdelete<PListNode>(pPVar3);
    }
  }
  FileAccess::open((String *)&local_68,(int)param_1,(Error *)0x1);
  if (local_68 == (Object *)0x0) {
    uVar11 = 0;
    goto LAB_0010674f;
  }
  (**(code **)(*(long *)local_68 + 0x220))(local_68,local_38,8);
  local_40 = 0;
  local_50 = (Object *)0x0;
  do {
    if (local_38[local_40] == (PListNode)0x0) {
      local_40 = (long)(int)local_40;
      break;
    }
    local_40 = local_40 + 1;
  } while (local_40 != 8);
  local_48 = local_38;
  String::parse_latin1((StrRange *)&local_50);
  uVar10 = String::operator==((String *)&local_50,"bplist00");
  pOVar6 = local_50;
  uVar11 = (ulong)uVar10;
  if (local_50 == (Object *)0x0) {
LAB_001065e1:
    if ((char)uVar10 != '\0') goto LAB_001065ea;
LAB_0010679a:
    FileAccess::get_file_as_bytes((String *)&local_48,param_1);
    if (local_6c == 0) {
      local_60 = 0;
      if (local_40 == 0) {
        uVar12 = false;
      }
      else {
        uVar12 = (undefined1)*(undefined4 *)(local_40 + -8);
      }
      String::parse_utf8((char *)&local_60,(int)local_40,(bool)uVar12);
      local_58 = 0;
      uVar10 = load_string(this,(String *)&local_60,(String *)&local_58);
      uVar11 = (ulong)uVar10;
      if ((char)uVar10 == '\0') {
        operator+((char *)&local_50,(String *)"PList: ");
        _err_print_error("load_file","core/io/plist.cpp",0x28c,
                         "Condition \"!ok\" is true. Returning: false",(StrRange *)&local_50,0,0);
        pOVar6 = local_50;
        if (local_50 != (Object *)0x0) {
          LOCK();
          pOVar1 = local_50 + -0x10;
          *(long *)pOVar1 = *(long *)pOVar1 + -1;
          UNLOCK();
          if (*(long *)pOVar1 == 0) {
            local_50 = (Object *)0x0;
            Memory::free_static(pOVar6 + -0x10,false);
          }
        }
      }
      lVar5 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar2 = (long *)(local_58 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar2 = (long *)(local_60 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      _err_print_error("load_file","core/io/plist.cpp",0x286,
                       "Condition \"err != OK\" is true. Returning: false",0,0);
    }
    lVar5 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar2 = (long *)(local_40 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  else {
    LOCK();
    pOVar1 = local_50 + -0x10;
    *(long *)pOVar1 = *(long *)pOVar1 + -1;
    UNLOCK();
    if (*(long *)pOVar1 != 0) goto LAB_001065e1;
    local_50 = (Object *)0x0;
    Memory::free_static(pOVar6 + -0x10,false);
    if ((char)uVar10 == '\0') goto LAB_0010679a;
LAB_001065ea:
    (**(code **)(*(long *)local_68 + 0x1c0))(local_68,0xffffffffffffffe6);
    PVar9 = (PList)(**(code **)(*(long *)local_68 + 0x1e0))();
    this[0x180] = PVar9;
    PVar9 = (PList)(**(code **)(*(long *)local_68 + 0x1e0))();
    this[0x181] = PVar9;
    uVar11 = (**(code **)(*(long *)local_68 + 0x1f8))();
    *(ulong *)(this + 0x188) =
         uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18 |
         (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
         (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
    uVar11 = (**(code **)(*(long *)local_68 + 0x1f8))();
    *(ulong *)(this + 400) =
         uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18 |
         (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
         (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
    uVar11 = (**(code **)(*(long *)local_68 + 0x1f8))();
    local_50 = (Object *)0x0;
    uVar4 = *(undefined8 *)(this + 400);
    *(ulong *)(this + 0x198) =
         uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18 |
         (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
         (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
    if (local_68 != (Object *)0x0) {
      local_50 = local_68;
      cVar8 = RefCounted::reference();
      if (cVar8 == '\0') {
        local_50 = (Object *)0x0;
      }
    }
    read_bplist_obj((String *)&local_48,this,(StrRange *)&local_50,uVar4);
    pPVar7 = local_48;
    pPVar3 = *(PListNode **)(this + 0x1a0);
    if (local_48 == pPVar3) {
      if (local_48 != (PListNode *)0x0) goto LAB_00106702;
    }
    else {
      *(PListNode **)(this + 0x1a0) = local_48;
      if (local_48 == (PListNode *)0x0) {
        if ((pPVar3 != (PListNode *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
          memdelete<PListNode>(pPVar3);
        }
      }
      else {
        cVar8 = RefCounted::reference();
        if (cVar8 == '\0') {
          *(undefined8 *)(this + 0x1a0) = 0;
        }
        if ((pPVar3 != (PListNode *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
          memdelete<PListNode>(pPVar3);
        }
LAB_00106702:
        cVar8 = RefCounted::unreference();
        if (cVar8 != '\0') {
          memdelete<PListNode>(pPVar7);
        }
      }
    }
    pOVar6 = local_50;
    if (((local_50 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
       (cVar8 = predelete_handler(pOVar6), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
    uVar11 = CONCAT71((int7)((ulong)pOVar6 >> 8),*(long *)(this + 0x1a0) != 0);
  }
  if (((local_68 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_68), cVar8 != '\0')) {
    (**(code **)(*(long *)local_68 + 0x140))(local_68);
    Memory::free_static(local_68,false);
  }
LAB_0010674f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11 & 0xffffffff;
}



/* PListNode::new_node(Variant const&) */

PListNode * __thiscall PListNode::new_node(PListNode *this,Variant *param_1)

{
  long *plVar1;
  PListNode *pPVar2;
  PListNode *pPVar3;
  long lVar4;
  char cVar5;
  PListNode PVar6;
  int iVar7;
  RefCounted *this_00;
  long lVar8;
  PListNode *pPVar9;
  undefined8 *puVar10;
  RefCounted *pRVar11;
  int iVar12;
  long in_FS_OFFSET;
  double dVar13;
  long local_68;
  long local_60;
  PListNode *local_58;
  long local_50;
  long local_40;
  
  pRVar11 = (RefCounted *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (RefCounted *)operator_new(0x1d0,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010ae98;
  *(undefined4 *)(this_00 + 0x17c) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined8 *)(this_00 + 0x1c0) = 2;
  *(undefined1 (*) [16])(this_00 + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1b0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar5 = RefCounted::init_ref();
  if (cVar5 != '\0') {
    cVar5 = RefCounted::reference();
    if (cVar5 != '\0') {
      pRVar11 = this_00;
    }
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      memdelete<PListNode>((PListNode *)this_00);
    }
  }
  switch(*(undefined4 *)param_1) {
  case 0:
    *(undefined4 *)((PListNode *)pRVar11 + 0x17c) = 0;
    break;
  case 1:
    *(undefined4 *)((PListNode *)pRVar11 + 0x17c) = 4;
    PVar6 = (PListNode)Variant::operator_cast_to_bool(param_1);
    ((PListNode *)pRVar11)[0x1c8] = PVar6;
    break;
  case 2:
    *(undefined4 *)((PListNode *)pRVar11 + 0x17c) = 5;
    lVar8 = Variant::operator_cast_to_long(param_1);
    *(long *)((PListNode *)pRVar11 + 0x1c8) = lVar8;
    break;
  case 3:
    *(undefined4 *)((PListNode *)pRVar11 + 0x17c) = 6;
    dVar13 = Variant::operator_cast_to_double(param_1);
    *(double *)((PListNode *)pRVar11 + 0x1c8) = dVar13;
    break;
  case 4:
  case 0x15:
    *(undefined4 *)((PListNode *)pRVar11 + 0x17c) = 1;
    Variant::operator_cast_to_String((Variant *)&local_60);
    String::utf8();
    pPVar3 = local_58;
    pPVar9 = *(PListNode **)((PListNode *)pRVar11 + 0x180);
    if (pPVar9 == local_58) {
      if (pPVar9 != (PListNode *)0x0) {
        LOCK();
        pPVar9 = pPVar9 + -0x10;
        *(long *)pPVar9 = *(long *)pPVar9 + -1;
        UNLOCK();
        if (*(long *)pPVar9 == 0) {
          local_58 = (PListNode *)0x0;
          Memory::free_static(pPVar3 + -0x10,false);
        }
      }
    }
    else {
      if (pPVar9 != (PListNode *)0x0) {
        LOCK();
        pPVar9 = pPVar9 + -0x10;
        *(long *)pPVar9 = *(long *)pPVar9 + -1;
        UNLOCK();
        if (*(long *)pPVar9 == 0) {
          lVar8 = *(long *)((PListNode *)pRVar11 + 0x180);
          *(undefined8 *)((PListNode *)pRVar11 + 0x180) = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      *(PListNode **)((PListNode *)pRVar11 + 0x180) = local_58;
    }
    lVar8 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    break;
  default:
    _err_print_error("new_node","core/io/plist.cpp",0x8f,
                     "Method/function failed. Returning: Ref<PListNode>()","Unsupported data type.",
                     0,0);
    *(undefined8 *)this = 0;
    if (pRVar11 == (RefCounted *)0x0) goto LAB_00106b4a;
    goto LAB_00106c3a;
  case 0x1b:
    *(undefined4 *)((PListNode *)pRVar11 + 0x17c) = 3;
    Variant::operator_cast_to_Dictionary((Variant *)&local_60);
    lVar8 = Dictionary::next((Variant *)&local_60);
    while (lVar8 != 0) {
      Dictionary::operator[]((Variant *)&local_60);
      lVar8 = Variant::get_validated_object();
      if (((lVar8 == 0) ||
          (pPVar9 = (PListNode *)__dynamic_cast(lVar8,&Object::typeinfo,&typeinfo,0),
          pPVar9 == (PListNode *)0x0)) || (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
        _err_print_error("new_node","core/io/plist.cpp",0x7b,
                         "Condition \"sub_node.is_null()\" is true. Returning: Ref<PListNode>()",
                         "Invalid dictionary element, should be PListNode.",0,0);
        *(undefined8 *)this = 0;
        Dictionary::~Dictionary((Dictionary *)&local_60);
        cVar5 = RefCounted::unreference();
        if (cVar5 == '\0') goto LAB_00106b4a;
        goto LAB_00106c50;
      }
      Variant::operator_cast_to_String((Variant *)&local_58);
      puVar10 = (undefined8 *)
                HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                ::operator[]((HashMap<String,Ref<PListNode>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PListNode>>>>
                              *)((PListNode *)pRVar11 + 0x198),(String *)&local_58);
      pPVar3 = (PListNode *)*puVar10;
      if (pPVar9 != pPVar3) {
        *puVar10 = pPVar9;
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          *puVar10 = 0;
        }
        if ((pPVar3 != (PListNode *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
          memdelete<PListNode>(pPVar3);
        }
      }
      pPVar3 = local_58;
      if (local_58 != (PListNode *)0x0) {
        LOCK();
        pPVar2 = local_58 + -0x10;
        *(long *)pPVar2 = *(long *)pPVar2 + -1;
        UNLOCK();
        if (*(long *)pPVar2 == 0) {
          local_58 = (PListNode *)0x0;
          Memory::free_static(pPVar3 + -0x10,false);
        }
      }
      lVar8 = Dictionary::next((Variant *)&local_60);
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        memdelete<PListNode>(pPVar9);
      }
    }
    Dictionary::~Dictionary((Dictionary *)&local_60);
    break;
  case 0x1c:
    *(undefined4 *)((PListNode *)pRVar11 + 0x17c) = 2;
    Variant::operator_cast_to_Array((Variant *)&local_60);
    for (iVar12 = 0; iVar7 = Array::size(), iVar12 < iVar7; iVar12 = iVar12 + 1) {
      Array::operator[]((int)(Variant *)&local_60);
      lVar8 = Variant::get_validated_object();
      if (((lVar8 == 0) ||
          (pPVar9 = (PListNode *)__dynamic_cast(lVar8,&Object::typeinfo,&typeinfo,0),
          pPVar9 == (PListNode *)0x0)) || (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
        _err_print_error("new_node","core/io/plist.cpp",0x85,
                         "Condition \"sub_node.is_null()\" is true. Returning: Ref<PListNode>()",
                         "Invalid array element, should be PListNode.",0,0);
        *(undefined8 *)this = 0;
        Array::~Array((Array *)&local_60);
        goto LAB_00106c3a;
      }
      local_58 = pPVar9;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        local_58 = (PListNode *)0x0;
        Vector<Ref<PListNode>>::push_back
                  ((Vector<Ref<PListNode>> *)((PListNode *)pRVar11 + 0x188),&local_58);
LAB_00107027:
        cVar5 = RefCounted::unreference();
      }
      else {
        Vector<Ref<PListNode>>::push_back
                  ((Vector<Ref<PListNode>> *)((PListNode *)pRVar11 + 0x188),&local_58);
        cVar5 = RefCounted::unreference();
        if (cVar5 == '\0') goto LAB_00107027;
        memdelete<PListNode>(pPVar9);
        cVar5 = RefCounted::unreference();
      }
      if (cVar5 != '\0') {
        memdelete<PListNode>(pPVar9);
      }
    }
    Array::~Array((Array *)&local_60);
    break;
  case 0x1d:
    *(undefined4 *)((PListNode *)pRVar11 + 0x17c) = 7;
    Variant::operator_cast_to_Vector((Variant *)&local_58);
    CryptoCore::b64_encode_str((uchar *)&local_68,(int)local_50);
    String::utf8();
    lVar4 = local_60;
    lVar8 = *(long *)((PListNode *)pRVar11 + 0x180);
    if (lVar8 == local_60) {
      if (lVar8 != 0) {
        LOCK();
        plVar1 = (long *)(lVar8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      if (lVar8 != 0) {
        LOCK();
        plVar1 = (long *)(lVar8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *(long *)((PListNode *)pRVar11 + 0x180);
          *(undefined8 *)((PListNode *)pRVar11 + 0x180) = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      *(long *)((PListNode *)pRVar11 + 0x180) = local_60;
    }
    lVar8 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    lVar8 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
  *(RefCounted **)this = pRVar11;
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    *(undefined8 *)this = 0;
    cVar5 = RefCounted::unreference();
  }
  else {
LAB_00106c3a:
    cVar5 = RefCounted::unreference();
  }
  if (cVar5 != '\0') {
LAB_00106c50:
    memdelete<PListNode>((PListNode *)pRVar11);
  }
LAB_00106b4a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
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
  return (uint)CONCAT71(0x10b0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10af,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010abd8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010abd8;
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
LAB_00107343:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107343;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001073ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001073ae:
  return &_get_class_namev()::_class_name_static;
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
            if (lVar5 == 0) goto LAB_0010753f;
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
LAB_0010753f:
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
    if (cVar6 != '\0') goto LAB_001075f3;
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
              if (lVar5 == 0) goto LAB_001076a3;
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
LAB_001076a3:
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
      if (cVar6 != '\0') goto LAB_001075f3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001075f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
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



/* CowData<Ref<PListNode> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<PListNode>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PList::read_bplist_obj(Ref<FileAccess>, unsigned long) [clone .cold] */

void PList::read_bplist_obj(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00107b04(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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
LAB_00107e18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107e18;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00107e36;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00107e36:
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



/* WARNING: Removing unreachable block (ram,0x00108b28) */
/* WARNING: Removing unreachable block (ram,0x00108c58) */
/* WARNING: Removing unreachable block (ram,0x00108e20) */
/* WARNING: Removing unreachable block (ram,0x00108c64) */
/* WARNING: Removing unreachable block (ram,0x00108c6e) */
/* WARNING: Removing unreachable block (ram,0x00108e00) */
/* WARNING: Removing unreachable block (ram,0x00108c7a) */
/* WARNING: Removing unreachable block (ram,0x00108c84) */
/* WARNING: Removing unreachable block (ram,0x00108de0) */
/* WARNING: Removing unreachable block (ram,0x00108c90) */
/* WARNING: Removing unreachable block (ram,0x00108c9a) */
/* WARNING: Removing unreachable block (ram,0x00108dc0) */
/* WARNING: Removing unreachable block (ram,0x00108ca6) */
/* WARNING: Removing unreachable block (ram,0x00108cb0) */
/* WARNING: Removing unreachable block (ram,0x00108da0) */
/* WARNING: Removing unreachable block (ram,0x00108cbc) */
/* WARNING: Removing unreachable block (ram,0x00108cc6) */
/* WARNING: Removing unreachable block (ram,0x00108d80) */
/* WARNING: Removing unreachable block (ram,0x00108cd2) */
/* WARNING: Removing unreachable block (ram,0x00108cdc) */
/* WARNING: Removing unreachable block (ram,0x00108d60) */
/* WARNING: Removing unreachable block (ram,0x00108ce4) */
/* WARNING: Removing unreachable block (ram,0x00108cfa) */
/* WARNING: Removing unreachable block (ram,0x00108d06) */
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



/* WARNING: Removing unreachable block (ram,0x00108fa0) */
/* WARNING: Removing unreachable block (ram,0x001090d0) */
/* WARNING: Removing unreachable block (ram,0x00109249) */
/* WARNING: Removing unreachable block (ram,0x001090dc) */
/* WARNING: Removing unreachable block (ram,0x001090e6) */
/* WARNING: Removing unreachable block (ram,0x0010922b) */
/* WARNING: Removing unreachable block (ram,0x001090f2) */
/* WARNING: Removing unreachable block (ram,0x001090fc) */
/* WARNING: Removing unreachable block (ram,0x0010920d) */
/* WARNING: Removing unreachable block (ram,0x00109108) */
/* WARNING: Removing unreachable block (ram,0x00109112) */
/* WARNING: Removing unreachable block (ram,0x001091ef) */
/* WARNING: Removing unreachable block (ram,0x0010911e) */
/* WARNING: Removing unreachable block (ram,0x00109128) */
/* WARNING: Removing unreachable block (ram,0x001091d1) */
/* WARNING: Removing unreachable block (ram,0x00109134) */
/* WARNING: Removing unreachable block (ram,0x0010913e) */
/* WARNING: Removing unreachable block (ram,0x001091b3) */
/* WARNING: Removing unreachable block (ram,0x00109146) */
/* WARNING: Removing unreachable block (ram,0x00109150) */
/* WARNING: Removing unreachable block (ram,0x00109198) */
/* WARNING: Removing unreachable block (ram,0x00109158) */
/* WARNING: Removing unreachable block (ram,0x0010916e) */
/* WARNING: Removing unreachable block (ram,0x0010917a) */
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



/* CowData<char16_t>::_realloc(long) */

undefined8 __thiscall CowData<char16_t>::_realloc(CowData<char16_t> *this,long param_1)

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
LAB_0010961e:
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
    if (lVar9 == 0) goto LAB_0010961e;
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
        goto LAB_0010955c;
      }
      uVar7 = _realloc(this,lVar1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    puVar8 = *(undefined8 **)this;
    if (puVar8 != (undefined8 *)0x0) {
LAB_0010955c:
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



/* void memdelete<PListNode>(PListNode*) */

void memdelete<PListNode>(PListNode *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  
  cVar4 = predelete_handler((Object *)param_1);
  if (cVar4 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) != PListNode::~PListNode) {
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
    goto LAB_001097d3;
  }
  pvVar6 = *(void **)(param_1 + 0x1a0);
  *(undefined ***)param_1 = &PTR__initialize_classv_0010ae98;
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(param_1 + 0x1c4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x1c0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x1c4) = 0;
        *(undefined1 (*) [16])(param_1 + 0x1b0) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x1a8) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(param_1 + 0x1a8) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                memdelete<PListNode>(*(PListNode **)((long)pvVar6 + 0x18));
              }
            }
            if (*(long *)((long)pvVar6 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar6 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar6 + 0x10);
                *(undefined8 *)((long)pvVar6 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(param_1 + 0x1a0);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x1c4) = 0;
        *(undefined1 (*) [16])(param_1 + 0x1b0) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001097a1;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(param_1 + 0x1a8),false);
  }
LAB_001097a1:
  CowData<Ref<PListNode>>::_unref((CowData<Ref<PListNode>> *)(param_1 + 400));
  if (*(long *)(param_1 + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(param_1 + 0x180);
      *(undefined8 *)(param_1 + 0x180) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  *(undefined ***)param_1 = &PTR__initialize_classv_0010abd8;
  Object::~Object((Object *)param_1);
LAB_001097d3:
  Memory::free_static(param_1,false);
  return;
}



/* Ref<PListNode>::unref() */

void __thiscall Ref<PListNode>::unref(Ref<PListNode> *this)

{
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<PListNode>(*(PListNode **)this);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* PList::~PList() */

void __thiscall PList::~PList(PList *this)

{
  char cVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ad38;
  if (*(long *)(this + 0x1a0) != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<PListNode>(*(PListNode **)(this + 0x1a0));
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010abd8;
  Object::~Object((Object *)this);
  return;
}



/* PList::~PList() */

void __thiscall PList::~PList(PList *this)

{
  char cVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ad38;
  if (*(long *)(this + 0x1a0) != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<PListNode>(*(PListNode **)(this + 0x1a0));
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010abd8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1a8);
  return;
}



/* CowData<Ref<PListNode> >::_unref() */

void __thiscall CowData<Ref<PListNode>>::_unref(CowData<Ref<PListNode>> *this)

{
  long *plVar1;
  long lVar2;
  PListNode *pPVar3;
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
LAB_001099c5:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pPVar3 = (PListNode *)*plVar6;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
          memdelete<PListNode>(pPVar3);
          if (lVar2 == lVar7) break;
          goto LAB_001099c5;
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* PListNode::~PListNode() */

void __thiscall PListNode::~PListNode(PListNode *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ae98;
  pvVar6 = *(void **)(this + 0x1a0);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1c4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1c4) = 0;
        *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1a8) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x1a8) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                memdelete<PListNode>(*(PListNode **)((long)pvVar6 + 0x18));
              }
            }
            if (*(long *)((long)pvVar6 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar6 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar6 + 0x10);
                *(undefined8 *)((long)pvVar6 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x1a0);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1c4) = 0;
        *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00109b20;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1a8),false);
  }
LAB_00109b20:
  CowData<Ref<PListNode>>::_unref((CowData<Ref<PListNode>> *)(this + 400));
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010abd8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1d0);
  return;
}



/* PListNode::~PListNode() */

void __thiscall PListNode::~PListNode(PListNode *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ae98;
  pvVar6 = *(void **)(this + 0x1a0);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1c4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1c0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1c4) = 0;
        *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1a8) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x1a8) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                memdelete<PListNode>(*(PListNode **)((long)pvVar6 + 0x18));
              }
            }
            if (*(long *)((long)pvVar6 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar6 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar6 + 0x10);
                *(undefined8 *)((long)pvVar6 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x1a0);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1c4) = 0;
        *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00109cd0;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1a8),false);
  }
LAB_00109cd0:
  CowData<Ref<PListNode>>::_unref((CowData<Ref<PListNode>> *)(this + 400));
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010abd8;
  Object::~Object((Object *)this);
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
  PListNode *pPVar4;
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
  char cVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  undefined8 *puVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint *puVar51;
  uint uVar52;
  uint uVar53;
  long lVar54;
  uint uVar55;
  uint uVar56;
  undefined1 (*pauVar57) [16];
  undefined1 (*pauVar58) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0010a540:
    uVar40 = (ulong)uVar56;
    uVar45 = uVar40 * 4;
    uVar49 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar56 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar44 + uVar49)) && (pvVar44 < (void *)((long)pvVar2 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_0010a3c2;
      }
      memset(pvVar2,0,uVar45);
      memset(pvVar44,0,uVar49);
      iVar46 = *(int *)(this + 0x2c);
LAB_0010a3c6:
      if (iVar46 != 0) {
LAB_0010a3ce:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar53 = String::hash();
        uVar40 = CONCAT44(0,uVar38);
        lVar54 = *(long *)(this + 0x10);
        uVar39 = 1;
        if (uVar53 != 0) {
          uVar39 = uVar53;
        }
        uVar55 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar3;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar40;
        lVar47 = SUB168(auVar17 * auVar33,8);
        uVar53 = *(uint *)(lVar54 + lVar47 * 4);
        uVar52 = SUB164(auVar17 * auVar33,8);
        if (uVar53 != 0) {
          do {
            if (uVar39 == uVar53) {
              cVar37 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10),
                                          param_1);
              if (cVar37 != '\0') {
                pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
                pPVar4 = *(PListNode **)(pauVar42[1] + 8);
                if (pPVar4 != (PListNode *)0x0) {
                  *(undefined8 *)(pauVar42[1] + 8) = 0;
                  cVar37 = RefCounted::unreference();
                  if (cVar37 != '\0') {
                    memdelete<PListNode>(pPVar4);
                  }
                  pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
                }
                goto LAB_0010a24b;
              }
              lVar54 = *(long *)(this + 0x10);
            }
            uVar55 = uVar55 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar52 + 1) * lVar3;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar40;
            lVar47 = SUB168(auVar18 * auVar34,8);
            uVar53 = *(uint *)(lVar54 + lVar47 * 4);
            uVar52 = SUB164(auVar18 * auVar34,8);
          } while ((uVar53 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar53 * lVar3, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar40, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar52) - SUB164(auVar19 * auVar35,8)) * lVar3,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar40, uVar55 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      uVar40 = (ulong)uVar56;
      goto LAB_00109e84;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00109e84;
    if (iVar46 != 0) goto LAB_0010a3ce;
LAB_00109eaa:
    uVar56 = *(uint *)(this + 0x28);
    if (uVar56 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010a24b;
    }
    uVar40 = (ulong)(uVar56 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar56 * 4);
    if (uVar56 + 1 < 2) {
      uVar40 = 2;
    }
    uVar56 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar49 = (ulong)uVar56;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar49 * 4;
    uVar45 = uVar49 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar56 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar49);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar38 != 0) {
      uVar40 = 0;
      do {
        uVar56 = *(uint *)((long)pvVar2 + uVar40 * 4);
        if (uVar56 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar52 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar39);
          lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar56 * lVar54;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar45;
          lVar47 = SUB168(auVar5 * auVar21,8);
          puVar51 = (uint *)(lVar3 + lVar47 * 4);
          iVar46 = SUB164(auVar5 * auVar21,8);
          uVar53 = *puVar51;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar53 * lVar54;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar45;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((iVar46 + uVar39) - SUB164(auVar6 * auVar22,8)) * lVar54;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            uVar55 = SUB164(auVar7 * auVar23,8);
            uVar50 = uVar41;
            if (uVar55 < uVar52) {
              *puVar51 = uVar56;
              puVar43 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar50 = *puVar43;
              *puVar43 = uVar41;
              uVar56 = uVar53;
              uVar52 = uVar55;
            }
            uVar52 = uVar52 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar46 + 1) * lVar54;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar45;
            lVar47 = SUB168(auVar8 * auVar24,8);
            puVar51 = (uint *)(lVar3 + lVar47 * 4);
            iVar46 = SUB164(auVar8 * auVar24,8);
            uVar41 = uVar50;
            uVar53 = *puVar51;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar51 = uVar56;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar38 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    uVar40 = CONCAT44(0,uVar56);
    if (iVar46 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = String::hash();
      lVar54 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar39 != 0) {
        uVar38 = uVar39;
      }
      uVar52 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar3;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar47 = SUB168(auVar13 * auVar29,8);
      uVar39 = *(uint *)(lVar54 + lVar47 * 4);
      uVar53 = SUB164(auVar13 * auVar29,8);
      if (uVar39 != 0) {
        do {
          if (uVar39 == uVar38) {
            cVar37 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10),param_1
                                       );
            if (cVar37 != '\0') {
              pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar53 * 8);
              goto LAB_0010a24b;
            }
            lVar54 = *(long *)(this + 0x10);
          }
          uVar52 = uVar52 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar40;
          lVar47 = SUB168(auVar14 * auVar30,8);
          uVar39 = *(uint *)(lVar54 + lVar47 * 4);
          uVar53 = SUB164(auVar14 * auVar30,8);
        } while ((uVar39 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar39 * lVar3, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar40, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar53 + uVar56) - SUB164(auVar15 * auVar31,8)) * lVar3,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar40, uVar52 <= SUB164(auVar16 * auVar32,8)));
      }
      uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_0010a540;
LAB_0010a3c2:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0010a3c6;
    }
LAB_00109e84:
    if ((float)uVar40 * __LC76 < (float)(iVar46 + 1)) goto LAB_00109eaa;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar42[1] = 0;
    *pauVar42 = (undefined1  [16])0x0;
LAB_0010a4eb:
    *(undefined8 *)(pauVar42[1] + 8) = 0;
LAB_0010a133:
    puVar43 = *(undefined8 **)(this + 0x20);
    if (puVar43 != (undefined8 *)0x0) goto LAB_0010a140;
LAB_0010a37d:
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar42[1] = 0;
    *(undefined8 *)*pauVar42 = 0;
    *(undefined8 *)(*pauVar42 + 8) = 0;
    if (lVar3 == 0) goto LAB_0010a4eb;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar42 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar42[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010a133;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar43 = *(undefined8 **)(this + 0x20);
    if (puVar43 == (undefined8 *)0x0) goto LAB_0010a37d;
LAB_0010a140:
    *puVar43 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar43;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar56 = 1;
  if (uVar38 != 0) {
    uVar56 = uVar38;
  }
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar56 * lVar54;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar48 = SUB168(auVar9 * auVar25,8);
  lVar47 = *(long *)(this + 8);
  puVar51 = (uint *)(lVar3 + lVar48 * 4);
  iVar46 = SUB164(auVar9 * auVar25,8);
  uVar39 = *puVar51;
  pauVar58 = pauVar42;
  if (uVar39 != 0) {
    uVar53 = 0;
    pauVar57 = pauVar42;
    do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar39 * lVar54;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)((uVar38 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar54;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      uVar52 = SUB164(auVar11 * auVar27,8);
      pauVar58 = pauVar57;
      if (uVar52 < uVar53) {
        *puVar51 = uVar56;
        puVar43 = (undefined8 *)(lVar47 + lVar48 * 8);
        pauVar58 = (undefined1 (*) [16])*puVar43;
        *puVar43 = pauVar57;
        uVar53 = uVar52;
        uVar56 = uVar39;
      }
      uVar53 = uVar53 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar54;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      lVar48 = SUB168(auVar12 * auVar28,8);
      puVar51 = (uint *)(lVar3 + lVar48 * 4);
      iVar46 = SUB164(auVar12 * auVar28,8);
      uVar39 = *puVar51;
      pauVar57 = pauVar58;
    } while (uVar39 != 0);
  }
  *(undefined1 (**) [16])(lVar47 + lVar48 * 8) = pauVar58;
  *puVar51 = uVar56;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a24b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar42[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<Ref<PListNode>, DefaultAllocator>::pop_back() */

void __thiscall
List<Ref<PListNode>,DefaultAllocator>::pop_back(List<Ref<PListNode>,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  
  plVar1 = *(long **)this;
  if ((plVar1 != (long *)0x0) && (plVar2 = (long *)plVar1[1], plVar2 != (long *)0x0)) {
    if (plVar1 == (long *)plVar2[3]) {
      lVar5 = plVar2[1];
      if (plVar2 == (long *)*plVar1) {
        *plVar1 = lVar5;
      }
      lVar3 = plVar2[2];
      plVar1[1] = lVar3;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar5;
        lVar5 = plVar2[1];
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar3;
      }
      if (*plVar2 != 0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          memdelete<PListNode>((PListNode *)*plVar2);
        }
      }
      Memory::free_static(plVar2,false);
      *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)this + 0x10) == 0) {
      Memory::free_static(*(void **)this,false);
      *(undefined8 *)this = 0;
    }
  }
  return;
}



/* CowData<Ref<PListNode> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<PListNode>>::_realloc(CowData<Ref<PListNode>> *this,long param_1)

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
/* Error CowData<Ref<PListNode> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<PListNode>>::resize<false>(CowData<Ref<PListNode>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
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
LAB_0010ab00:
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
  if (lVar10 == 0) goto LAB_0010ab00;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010a9ca:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar6 + uVar8 * 8), *plVar1 == 0) {
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010a9ca;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        memdelete<PListNode>((PListNode *)*plVar1);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_0010a990;
  }
  if (lVar10 == lVar7) {
LAB_0010aa7b:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010a990:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010aa5b;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010aa7b;
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
LAB_0010aa5b:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* PListNode::~PListNode() */

void __thiscall PListNode::~PListNode(PListNode *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

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


