
/* IPUnix::_create_unix() */

IP * IPUnix::_create_unix(void)

{
  IP *this;
  
  this = (IP *)operator_new(0x180,"");
  IP::IP(this);
  *(undefined ***)this = &PTR__initialize_classv_00102bc8;
  postinitialize_handler((Object *)this);
  return this;
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



/* IPUnix::_resolve_hostname(List<IPAddress, DefaultAllocator>&, String const&, IP::Type) const */

void __thiscall
IPUnix::_resolve_hostname(undefined8 param_1_00,long *param_1,undefined8 param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *__name;
  long lVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  addrinfo *paVar9;
  sockaddr *psVar10;
  long in_FS_OFFSET;
  addrinfo *local_98;
  long local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  int local_58 [2];
  undefined8 uStack_50;
  undefined2 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88._4_12_ = SUB1612((undefined1  [16])0x0,4);
  uVar4 = 2;
  local_98 = (addrinfo *)0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  if (param_4 != 1) {
    if (param_4 != 2) {
      local_88._0_4_ = 0x20;
      goto LAB_00100120;
    }
    uVar4 = 10;
  }
  local_88._8_8_ = 0;
  local_88._4_4_ = uVar4;
  local_88._0_4_ = 0;
LAB_00100120:
  String::utf8();
  __name = (char *)CharString::get_data();
  iVar5 = getaddrinfo(__name,(char *)0x0,(addrinfo *)local_88,&local_98);
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
  if (iVar5 == 0) {
    if (local_98 != (addrinfo *)0x0) {
      psVar10 = local_98->ai_addr;
      paVar9 = local_98;
      if (psVar10 != (sockaddr *)0x0) {
        do {
          IPAddress::clear();
          if (psVar10->sa_family == 2) {
            IPAddress::set_ipv4((uchar *)local_58);
          }
          else if (psVar10->sa_family == 10) {
            IPAddress::set_ipv6((uchar *)local_58);
          }
          if ((char)local_48 == '\0') goto LAB_0010020a;
          if ((long *)*param_1 == (long *)0x0) {
            pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *param_1 = (long)pauVar8;
            *(undefined4 *)pauVar8[1] = 0;
            *pauVar8 = (undefined1  [16])0x0;
          }
          else {
            for (lVar2 = *(long *)*param_1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x18)) {
              if (*(char *)(lVar2 + 0x10) != '\0') {
                lVar6 = 0;
                while (*(int *)(lVar2 + lVar6) == *(int *)((long)local_58 + lVar6)) {
                  lVar6 = lVar6 + 4;
                  if (lVar6 == 0x10) goto LAB_0010020a;
                }
              }
            }
          }
          puVar7 = (undefined8 *)operator_new(0x30,DefaultAllocator::alloc);
          IPAddress::clear();
          puVar7[5] = 0;
          *(undefined1 (*) [16])(puVar7 + 3) = (undefined1  [16])0x0;
          *puVar7 = CONCAT44(local_58[1],local_58[0]);
          puVar7[1] = uStack_50;
          *(undefined2 *)(puVar7 + 2) = local_48;
          lVar2 = *param_1;
          puVar7[4] = *(undefined8 *)(lVar2 + 8);
          puVar7[5] = lVar2;
          plVar1 = (long *)*param_1;
          if (plVar1[1] != 0) {
            *(undefined8 **)(plVar1[1] + 0x18) = puVar7;
          }
          plVar1[1] = (long)puVar7;
          if (*plVar1 == 0) {
            *plVar1 = (long)puVar7;
          }
          paVar9 = paVar9->ai_next;
          *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
          while( true ) {
            if (paVar9 == (addrinfo *)0x0) goto LAB_001002d5;
            psVar10 = paVar9->ai_addr;
            if (psVar10 != (sockaddr *)0x0) break;
LAB_0010020a:
            paVar9 = paVar9->ai_next;
          }
        } while( true );
      }
    }
    cVar3 = is_print_verbose_enabled();
    if (cVar3 != '\0') {
      Variant::Variant((Variant *)local_58,"Invalid response from getaddrinfo.");
      stringify_variants((Variant *)&local_90);
      __print_line((String *)&local_90);
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
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (local_98 != (addrinfo *)0x0) {
LAB_001002d5:
      freeaddrinfo(local_98);
    }
  }
  else {
    cVar3 = is_print_verbose_enabled();
    if (cVar3 != '\0') {
      Variant::Variant((Variant *)local_58,"getaddrinfo failed! Cannot resolve hostname.");
      stringify_variants((Variant *)&local_90);
      __print_line((String *)&local_90);
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
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IPUnix::make_default() */

void IPUnix::make_default(void)

{
  IP::_create = 0x100000;
  return;
}



/* IPUnix::IPUnix() */

void __thiscall IPUnix::IPUnix(IPUnix *this)

{
  IP::IP((IP *)this);
  *(undefined ***)this = &PTR__initialize_classv_00102bc8;
  return;
}



/* IPUnix::get_local_interfaces(HashMap<String, IP::Interface_Info, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   IP::Interface_Info> > >*) const */

void __thiscall IPUnix::get_local_interfaces(IPUnix *this,HashMap *param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  short *psVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uVar14;
  undefined1 auVar15 [16];
  char cVar16;
  uint uVar17;
  uint uVar18;
  size_t sVar19;
  undefined8 *puVar20;
  undefined1 (*pauVar21) [16];
  uint uVar22;
  uint uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  uint uVar27;
  char *pcVar28;
  long in_FS_OFFSET;
  long *local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (long *)0x0;
  getifaddrs(&local_98);
  if (local_98 != (long *)0x0) {
    plVar25 = local_98;
LAB_00100528:
    do {
      if (((ushort *)plVar25[3] != (ushort *)0x0) && ((*(ushort *)plVar25[3] & 0xfff7) == 2)) {
        pcVar2 = (char *)plVar25[1];
        sVar19 = 0;
        local_88 = (char *)0x0;
        if (pcVar2 != (char *)0x0) {
          sVar19 = strlen(pcVar2);
        }
        local_78._8_8_ = sVar19;
        local_78._0_8_ = pcVar2;
        String::parse_latin1((StrRange *)&local_88);
        if ((*(long *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
          uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x28) * 8);
          uVar17 = String::hash();
          uVar14 = CONCAT44(0,uVar18);
          lVar26 = *(long *)(param_1 + 0x10);
          uVar22 = 1;
          if (uVar17 != 0) {
            uVar22 = uVar17;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)uVar22 * lVar3;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar14;
          lVar24 = SUB168(auVar6 * auVar10,8);
          uVar17 = *(uint *)(lVar26 + lVar24 * 4);
          uVar23 = SUB164(auVar6 * auVar10,8);
          if (uVar17 != 0) {
            uVar27 = 0;
            do {
              if (uVar22 == uVar17) {
                cVar16 = String::operator==((String *)
                                            (*(long *)(*(long *)(param_1 + 8) + lVar24 * 8) + 0x10),
                                            (String *)&local_88);
                pcVar2 = local_88;
                if (cVar16 != '\0') {
                  pcVar28 = *(char **)(*(long *)(param_1 + 8) + (ulong)uVar23 * 8);
                  if (local_88 != (char *)0x0) {
                    LOCK();
                    plVar1 = (long *)(local_88 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_88 = (char *)0x0;
                      Memory::free_static(pcVar2 + -0x10,false);
                    }
                  }
                  if (pcVar28 == (char *)0x0) goto LAB_001006c7;
                  goto LAB_00100800;
                }
                lVar26 = *(long *)(param_1 + 0x10);
              }
              uVar27 = uVar27 + 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)(uVar23 + 1) * lVar3;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar14;
              lVar24 = SUB168(auVar7 * auVar11,8);
              uVar17 = *(uint *)(lVar26 + lVar24 * 4);
              uVar23 = SUB164(auVar7 * auVar11,8);
            } while ((uVar17 != 0) &&
                    (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar17 * lVar3, auVar12._8_8_ = 0,
                    auVar12._0_8_ = uVar14, auVar9._8_8_ = 0,
                    auVar9._0_8_ = (ulong)((uVar18 + uVar23) - SUB164(auVar8 * auVar12,8)) * lVar3,
                    auVar13._8_8_ = 0, auVar13._0_8_ = uVar14, uVar27 <= SUB164(auVar9 * auVar13,8))
                    );
          }
        }
        pcVar2 = local_88;
        if (local_88 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
LAB_001006c7:
        sVar19 = 0;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        pcVar2 = (char *)plVar25[1];
        if (pcVar2 != (char *)0x0) {
          sVar19 = strlen(pcVar2);
        }
        local_88 = pcVar2;
        local_80 = sVar19;
        String::parse_latin1((StrRange *)local_78);
        pcVar2 = (char *)plVar25[1];
        sVar19 = 0;
        if (pcVar2 != (char *)0x0) {
          sVar19 = strlen(pcVar2);
        }
        local_88 = pcVar2;
        local_80 = sVar19;
        String::parse_latin1((StrRange *)(local_78 + 8));
        uVar18 = if_nametoindex((char *)plVar25[1]);
        String::num_uint64((ulong)&local_88,uVar18,true);
        pcVar2 = local_88;
        uVar5 = local_68._0_8_;
        if ((char *)local_68._0_8_ == local_88) {
          if ((char *)local_68._0_8_ != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68._0_8_ + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
            }
          }
        }
        else {
          if ((char *)local_68._0_8_ != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68._0_8_ + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              auVar15._8_8_ = 0;
              auVar15._0_8_ = local_68._8_8_;
              local_68 = auVar15 << 0x40;
              Memory::free_static((char *)(uVar5 + -0x10),false);
            }
          }
          local_68._0_8_ = local_88;
        }
        local_90 = 0;
        pcVar2 = (char *)plVar25[1];
        sVar19 = 0;
        if (pcVar2 != (char *)0x0) {
          sVar19 = strlen(pcVar2);
        }
        local_88 = pcVar2;
        local_80 = sVar19;
        String::parse_latin1((StrRange *)&local_90);
        HashMap<String,IP::Interface_Info,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,IP::Interface_Info>>>
        ::insert((String *)&local_88,(Interface_Info *)param_1,SUB81((StrRange *)&local_90,0));
        pcVar28 = local_88;
        lVar3 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        if (pcVar28 == (char *)0x0) {
          _err_print_error("get_local_interfaces","drivers/unix/ip_unix.cpp",0x91,
                           "Condition \"!E\" is true. Continuing.",0,0);
          IP::Interface_Info::~Interface_Info((Interface_Info *)local_78);
          plVar25 = (long *)*plVar25;
          if (plVar25 == (long *)0x0) break;
          goto LAB_00100528;
        }
        IP::Interface_Info::~Interface_Info((Interface_Info *)local_78);
LAB_00100800:
        psVar4 = (short *)plVar25[3];
        IPAddress::clear();
        if (*psVar4 == 2) {
          IPAddress::set_ipv4((uchar *)&local_58);
          lVar3 = *(long *)(pcVar28 + 0x30);
        }
        else {
          if (*psVar4 == 10) {
            IPAddress::set_ipv6((uchar *)&local_58);
          }
          lVar3 = *(long *)(pcVar28 + 0x30);
        }
        if (lVar3 == 0) {
          pauVar21 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])(pcVar28 + 0x30) = pauVar21;
          *(undefined4 *)pauVar21[1] = 0;
          *pauVar21 = (undefined1  [16])0x0;
        }
        puVar20 = (undefined8 *)operator_new(0x30,DefaultAllocator::alloc);
        IPAddress::clear();
        puVar20[5] = 0;
        *(undefined1 (*) [16])(puVar20 + 3) = (undefined1  [16])0x0;
        *puVar20 = local_58;
        puVar20[1] = uStack_50;
        *(undefined2 *)(puVar20 + 2) = local_48;
        uVar5 = **(undefined8 **)(pcVar28 + 0x30);
        puVar20[5] = *(undefined8 **)(pcVar28 + 0x30);
        plVar1 = *(long **)(pcVar28 + 0x30);
        puVar20[3] = uVar5;
        if (*plVar1 != 0) {
          *(undefined8 **)(*plVar1 + 0x20) = puVar20;
        }
        *plVar1 = (long)puVar20;
        if (plVar1[1] == 0) {
          plVar1[1] = (long)puVar20;
        }
        *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      }
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
    if (local_98 != (long *)0x0) {
      freeifaddrs();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* IPUnix::is_class_ptr(void*) const */

uint __thiscall IPUnix::is_class_ptr(IPUnix *this,void *param_1)

{
  return (uint)CONCAT71(0x102d,(undefined4 *)param_1 == &IP::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x102d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x102d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* IPUnix::_getv(StringName const&, Variant&) const */

undefined8 IPUnix::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* IPUnix::_setv(StringName const&, Variant const&) */

undefined8 IPUnix::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* IPUnix::_validate_propertyv(PropertyInfo&) const */

void IPUnix::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* IPUnix::_property_can_revertv(StringName const&) const */

undefined8 IPUnix::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* IPUnix::_property_get_revertv(StringName const&, Variant&) const */

undefined8 IPUnix::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* IPUnix::_notificationv(int, bool) */

void IPUnix::_notificationv(int param_1,bool param_2)

{
  return;
}



/* IPUnix::~IPUnix() */

void __thiscall IPUnix::~IPUnix(IPUnix *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00102bc8;
  IP::~IP((IP *)this);
  return;
}



/* IPUnix::~IPUnix() */

void __thiscall IPUnix::~IPUnix(IPUnix *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00102bc8;
  IP::~IP((IP *)this);
  operator_delete(this,0x180);
  return;
}



/* IPUnix::_get_class_namev() const */

undefined8 * IPUnix::_get_class_namev(void)

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
LAB_00100c23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00100c23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"IPUnix");
      goto LAB_00100c8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"IPUnix");
LAB_00100c8e:
  return &_get_class_namev()::_class_name_static;
}



/* IPUnix::get_class() const */

void IPUnix::get_class(void)

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



/* IPUnix::_initialize_classv() */

void IPUnix::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00100f04;
  if (IP::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "IP";
    local_60 = 0;
    local_40 = 2;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
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
LAB_0010100e:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0010101e:
        IP::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010100e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010101e;
    }
    IP::initialize_class()::initialized = '\x01';
  }
  local_48 = "IP";
  local_58 = 0;
  local_40 = 2;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "IPUnix";
  local_60 = 0;
  local_40 = 6;
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
  initialize_class()::initialized = '\x01';
LAB_00100f04:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* IPUnix::is_class(String const&) const */

undefined8 __thiscall IPUnix::is_class(IPUnix *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001010ff;
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
LAB_001010ff:
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
    if (cVar6 != '\0') goto LAB_001011b3;
  }
  cVar6 = String::operator==(param_1,"IPUnix");
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
              if (lVar5 == 0) goto LAB_0010128b;
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
LAB_0010128b:
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
      if (cVar6 != '\0') goto LAB_001011b3;
    }
    cVar6 = String::operator==(param_1,"IP");
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
                if (lVar5 == 0) goto LAB_0010136b;
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
LAB_0010136b:
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
        if (cVar6 != '\0') goto LAB_001011b3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00101414;
    }
  }
LAB_001011b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00101414:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IP::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void IP::_get_property_listv(List *param_1,bool param_2)

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
  undefined *local_78;
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
  local_78 = &_LC3;
  local_70 = 2;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC3;
  local_98 = 0;
  local_70 = 2;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00101608:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00101608;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00101626;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00101626:
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
  StringName::StringName((StringName *)&local_78,"IP",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IPUnix::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall IPUnix::_get_property_listv(IPUnix *this,List *param_1,bool param_2)

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
    IP::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "IPUnix";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "IPUnix";
  local_98 = 0;
  local_70 = 6;
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
LAB_00101a08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00101a08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00101a25;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00101a25:
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
  StringName::StringName((StringName *)&local_78,"IPUnix",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      IP::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IP::Interface_Info::~Interface_Info() */

void __thiscall IP::Interface_Info::~Interface_Info(Interface_Info *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    do {
      pvVar2 = (void *)*puVar4;
      if (pvVar2 == (void *)0x0) {
        if (*(int *)(puVar4 + 2) != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00101ddf;
        }
        break;
      }
      if (*(undefined8 **)((long)pvVar2 + 0x28) == puVar4) {
        *puVar4 = *(undefined8 *)((long)pvVar2 + 0x18);
        if (pvVar2 == (void *)puVar4[1]) {
          puVar4[1] = *(undefined8 *)((long)pvVar2 + 0x20);
        }
        if (*(long *)((long)pvVar2 + 0x20) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar2 + 0x20) + 0x18) =
               *(undefined8 *)((long)pvVar2 + 0x18);
        }
        if (*(long *)((long)pvVar2 + 0x18) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar2 + 0x18) + 0x20) =
               *(undefined8 *)((long)pvVar2 + 0x20);
        }
        Memory::free_static(pvVar2,false);
        *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      puVar4 = *(undefined8 **)(this + 0x18);
    } while (*(int *)(puVar4 + 2) != 0);
    Memory::free_static(puVar4,false);
  }
LAB_00101ddf:
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, IP::Interface_Info, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, IP::Interface_Info> > >::insert(String const&,
   IP::Interface_Info const&, bool) */

String * HashMap<String,IP::Interface_Info,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,IP::Interface_Info>>>
         ::insert(String *param_1,Interface_Info *param_2,bool param_3)

{
  uint *puVar1;
  void *pvVar2;
  void *__s;
  long *plVar3;
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
  char cVar28;
  uint uVar29;
  ulong uVar30;
  undefined8 uVar31;
  void *__s_00;
  undefined1 (*pauVar32) [16];
  undefined8 *puVar33;
  long *plVar34;
  undefined8 *puVar35;
  void *pvVar36;
  CowData *in_RCX;
  int iVar37;
  uint uVar38;
  undefined7 in_register_00000011;
  String *pSVar39;
  long lVar40;
  long lVar41;
  uint uVar42;
  ulong uVar43;
  undefined8 uVar44;
  char in_R8B;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  uint uVar50;
  long *plVar51;
  long in_FS_OFFSET;
  uint local_d8;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined1 (*local_48) [16];
  long local_40;
  
  pSVar39 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar43 = (ulong)uVar42;
    uVar30 = uVar43 * 4;
    uVar47 = uVar43 * 8;
    uVar31 = Memory::alloc_static(uVar30,false);
    *(undefined8 *)(param_2 + 0x10) = uVar31;
    pvVar36 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(param_2 + 8) = pvVar36;
    if (uVar42 != 0) {
      pvVar2 = *(void **)(param_2 + 0x10);
      if ((pvVar2 < (void *)((long)pvVar36 + uVar47)) && (pvVar36 < (void *)((long)pvVar2 + uVar30))
         ) {
        uVar30 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar30 * 4) = 0;
          *(undefined8 *)((long)pvVar36 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar43 != uVar30);
      }
      else {
        memset(pvVar2,0,uVar30);
        memset(pvVar36,0,uVar47);
      }
      goto LAB_00102008;
    }
    iVar37 = *(int *)(param_2 + 0x2c);
    if (pvVar36 == (void *)0x0) goto LAB_0010201b;
    uVar42 = 0;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_001026e0;
LAB_00102041:
    uVar42 = *(uint *)(param_2 + 0x28);
    if (uVar42 == 0x1c) {
      plVar34 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010268f;
    }
    uVar30 = (ulong)(uVar42 + 1);
    uVar29 = *(uint *)(hash_table_size_primes + (ulong)uVar42 * 4);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    if (uVar42 + 1 < 2) {
      uVar30 = 2;
    }
    uVar42 = *(uint *)(hash_table_size_primes + uVar30 * 4);
    uVar43 = (ulong)uVar42;
    *(int *)(param_2 + 0x28) = (int)uVar30;
    pvVar36 = *(void **)(param_2 + 8);
    uVar30 = uVar43 * 4;
    pvVar2 = *(void **)(param_2 + 0x10);
    uVar31 = Memory::alloc_static(uVar30,false);
    *(undefined8 *)(param_2 + 0x10) = uVar31;
    uVar47 = uVar43 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar42 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar47)) && (__s_00 < (void *)((long)__s + uVar30))) {
        uVar30 = 0;
        do {
          *(undefined4 *)((long)__s + uVar30 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar30 != uVar43);
      }
      else {
        memset(__s,0,uVar30);
        memset(__s_00,0,uVar47);
      }
    }
    if (uVar29 != 0) {
      uVar30 = 0;
      do {
        uVar42 = *(uint *)((long)pvVar2 + uVar30 * 4);
        if (uVar42 != 0) {
          uVar45 = 0;
          lVar49 = *(long *)(param_2 + 0x10);
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar47 = CONCAT44(0,uVar38);
          lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar42 * lVar48;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar47;
          lVar40 = SUB168(auVar4 * auVar16,8);
          puVar1 = (uint *)(lVar49 + lVar40 * 4);
          iVar37 = SUB164(auVar4 * auVar16,8);
          uVar46 = *puVar1;
          uVar31 = *(undefined8 *)((long)pvVar36 + uVar30 * 8);
          while (uVar46 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar46 * lVar48;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar47;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar37) - SUB164(auVar5 * auVar17,8)) * lVar48;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar47;
            local_d8 = SUB164(auVar6 * auVar18,8);
            uVar44 = uVar31;
            if (local_d8 < uVar45) {
              *puVar1 = uVar42;
              puVar35 = (undefined8 *)((long)__s_00 + lVar40 * 8);
              uVar44 = *puVar35;
              *puVar35 = uVar31;
              uVar42 = uVar46;
              uVar45 = local_d8;
            }
            uVar45 = uVar45 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar37 + 1) * lVar48;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar47;
            lVar40 = SUB168(auVar7 * auVar19,8);
            puVar1 = (uint *)(lVar49 + lVar40 * 4);
            iVar37 = SUB164(auVar7 * auVar19,8);
            uVar31 = uVar44;
            uVar46 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar40 * 8) = uVar31;
          *puVar1 = uVar42;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar30 = uVar30 + 1;
      } while (uVar29 != uVar30);
      Memory::free_static(pvVar36,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
LAB_00102008:
    uVar43 = (ulong)uVar42;
    iVar37 = *(int *)(param_2 + 0x2c);
    if (iVar37 != 0) {
LAB_001026e0:
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar46 = String::hash();
      uVar30 = CONCAT44(0,uVar29);
      lVar48 = *(long *)(param_2 + 0x10);
      uVar38 = 1;
      if (uVar46 != 0) {
        uVar38 = uVar46;
      }
      uVar50 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar38 * lVar49;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar30;
      lVar40 = SUB168(auVar12 * auVar24,8);
      uVar46 = *(uint *)(lVar48 + lVar40 * 4);
      uVar45 = SUB164(auVar12 * auVar24,8);
      if (uVar46 != 0) {
        do {
          if (uVar46 == uVar38) {
            cVar28 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar40 * 8) + 0x10),
                                        pSVar39);
            if (cVar28 != '\0') {
              lVar49 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar45 * 8);
              if (*(long *)(lVar49 + 0x18) != *(long *)in_RCX) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar49 + 0x18),in_RCX);
              }
              if (*(long *)(lVar49 + 0x20) != *(long *)(in_RCX + 8)) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar49 + 0x20),in_RCX + 8);
              }
              if (*(long *)(lVar49 + 0x28) != *(long *)(in_RCX + 0x10)) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar49 + 0x28),in_RCX + 0x10);
              }
              puVar35 = *(undefined8 **)(lVar49 + 0x30);
              if (puVar35 != (undefined8 *)0x0) goto LAB_001028b9;
              goto LAB_0010292d;
            }
            lVar48 = *(long *)(param_2 + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar45 + 1) * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar30;
          lVar40 = SUB168(auVar13 * auVar25,8);
          uVar46 = *(uint *)(lVar48 + lVar40 * 4);
          uVar45 = SUB164(auVar13 * auVar25,8);
        } while ((uVar46 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar46 * lVar49, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar30, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar29 + uVar45) - SUB164(auVar14 * auVar26,8)) * lVar49,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar30, uVar50 <= SUB164(auVar15 * auVar27,8)));
      }
      uVar43 = (ulong)uVar42;
      iVar37 = *(int *)(param_2 + 0x2c);
    }
LAB_0010201b:
    if ((float)uVar43 * __LC11 < (float)(iVar37 + 1)) goto LAB_00102041;
  }
  local_68 = 0;
  if (*(long *)pSVar39 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)pSVar39);
  }
  local_60 = 0;
  if (*(long *)in_RCX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,in_RCX);
  }
  local_58 = 0;
  if (*(long *)(in_RCX + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,in_RCX + 8);
  }
  local_50 = 0;
  lVar49 = *(long *)(in_RCX + 0x10);
  if (*(long *)(in_RCX + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,in_RCX + 0x10);
    lVar49 = local_50;
  }
  local_48 = (undefined1 (*) [16])0x0;
  pauVar32 = *(undefined1 (**) [16])(in_RCX + 0x18);
  if (pauVar32 != (undefined1 (*) [16])0x0) {
    puVar35 = *(undefined8 **)*pauVar32;
    if (puVar35 == (undefined8 *)0x0) {
      pauVar32 = (undefined1 (*) [16])0x0;
    }
    else {
      pauVar32 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar32[1] = 0;
      *pauVar32 = (undefined1  [16])0x0;
      local_48 = pauVar32;
      do {
        while( true ) {
          puVar33 = (undefined8 *)operator_new(0x30,DefaultAllocator::alloc);
          IPAddress::clear();
          puVar33[5] = 0;
          *(undefined1 (*) [16])(puVar33 + 3) = (undefined1  [16])0x0;
          uVar31 = puVar35[1];
          *puVar33 = *puVar35;
          puVar33[1] = uVar31;
          *(undefined2 *)(puVar33 + 2) = *(undefined2 *)(puVar35 + 2);
          lVar48 = *(long *)(*pauVar32 + 8);
          puVar33[4] = lVar48;
          puVar33[5] = pauVar32;
          if (lVar48 != 0) {
            *(undefined8 **)(lVar48 + 0x18) = puVar33;
          }
          lVar48 = *(long *)*pauVar32;
          *(undefined8 **)(*pauVar32 + 8) = puVar33;
          if (lVar48 != 0) break;
          *(undefined8 **)*pauVar32 = puVar33;
          puVar35 = (undefined8 *)puVar35[3];
          *(int *)pauVar32[1] = *(int *)pauVar32[1] + 1;
          if (puVar35 == (undefined8 *)0x0) goto LAB_001023c9;
        }
        puVar35 = (undefined8 *)puVar35[3];
        *(int *)pauVar32[1] = *(int *)pauVar32[1] + 1;
      } while (puVar35 != (undefined8 *)0x0);
    }
  }
LAB_001023c9:
  plVar34 = (long *)operator_new(0x38,"");
  plVar34[2] = 0;
  *plVar34 = 0;
  plVar34[1] = 0;
  if (local_68 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar34 + 2),(CowData *)&local_68);
  }
  plVar34[3] = 0;
  if (local_60 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar34 + 3),(CowData *)&local_60);
  }
  plVar34[4] = 0;
  if (local_58 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar34 + 4),(CowData *)&local_58);
  }
  plVar34[5] = 0;
  if (lVar49 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar34 + 5),(CowData *)&local_50);
  }
  plVar34[6] = 0;
  if ((pauVar32 != (undefined1 (*) [16])0x0) &&
     (puVar35 = *(undefined8 **)*pauVar32, puVar35 != (undefined8 *)0x0)) {
    pauVar32 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    plVar34[6] = (long)pauVar32;
    *(undefined4 *)pauVar32[1] = 0;
    *pauVar32 = (undefined1  [16])0x0;
    do {
      while( true ) {
        puVar33 = (undefined8 *)operator_new(0x30,DefaultAllocator::alloc);
        IPAddress::clear();
        puVar33[5] = 0;
        *(undefined1 (*) [16])(puVar33 + 3) = (undefined1  [16])0x0;
        uVar31 = puVar35[1];
        *puVar33 = *puVar35;
        puVar33[1] = uVar31;
        *(undefined2 *)(puVar33 + 2) = *(undefined2 *)(puVar35 + 2);
        lVar49 = plVar34[6];
        puVar33[4] = *(undefined8 *)(lVar49 + 8);
        puVar33[5] = lVar49;
        plVar3 = (long *)plVar34[6];
        if (plVar3[1] != 0) {
          *(undefined8 **)(plVar3[1] + 0x18) = puVar33;
        }
        plVar3[1] = (long)puVar33;
        if (*plVar3 != 0) break;
        *plVar3 = (long)puVar33;
        puVar35 = (undefined8 *)puVar35[3];
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        if (puVar35 == (undefined8 *)0x0) goto LAB_0010254c;
      }
      puVar35 = (undefined8 *)puVar35[3];
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    } while (puVar35 != (undefined8 *)0x0);
  }
LAB_0010254c:
  IP::Interface_Info::~Interface_Info((Interface_Info *)&local_60);
  if (local_68 == 0) {
LAB_0010256a:
    puVar35 = *(undefined8 **)(param_2 + 0x20);
    if (puVar35 != (undefined8 *)0x0) goto LAB_0010257c;
LAB_00102822:
    *(long **)(param_2 + 0x18) = plVar34;
    *(long **)(param_2 + 0x20) = plVar34;
  }
  else {
    LOCK();
    plVar3 = (long *)(local_68 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 != 0) goto LAB_0010256a;
    Memory::free_static((void *)(local_68 + -0x10),false);
    puVar35 = *(undefined8 **)(param_2 + 0x20);
    if (puVar35 == (undefined8 *)0x0) goto LAB_00102822;
LAB_0010257c:
    if (in_R8B == '\0') {
      *puVar35 = plVar34;
      plVar34[1] = (long)puVar35;
      *(long **)(param_2 + 0x20) = plVar34;
    }
    else {
      lVar49 = *(long *)(param_2 + 0x18);
      *(long **)(lVar49 + 8) = plVar34;
      *plVar34 = lVar49;
      *(long **)(param_2 + 0x18) = plVar34;
    }
  }
  uVar29 = String::hash();
  uVar42 = 1;
  if (uVar29 != 0) {
    uVar42 = uVar29;
  }
  lVar49 = *(long *)(param_2 + 0x10);
  uVar46 = 0;
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar30 = CONCAT44(0,uVar29);
  lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar42 * lVar48;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar30;
  lVar41 = SUB168(auVar8 * auVar20,8);
  lVar40 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar49 + lVar41 * 4);
  iVar37 = SUB164(auVar8 * auVar20,8);
  uVar38 = *puVar1;
  plVar3 = plVar34;
  while (uVar38 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar38 * lVar48;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar30;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((iVar37 + uVar29) - SUB164(auVar9 * auVar21,8)) * lVar48;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar30;
    local_d8 = SUB164(auVar10 * auVar22,8);
    plVar51 = plVar3;
    if (local_d8 < uVar46) {
      *puVar1 = uVar42;
      puVar35 = (undefined8 *)(lVar40 + lVar41 * 8);
      plVar51 = (long *)*puVar35;
      *puVar35 = plVar3;
      uVar46 = local_d8;
      uVar42 = uVar38;
    }
    uVar46 = uVar46 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar37 + 1) * lVar48;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar30;
    lVar41 = SUB168(auVar11 * auVar23,8);
    puVar1 = (uint *)(lVar49 + lVar41 * 4);
    iVar37 = SUB164(auVar11 * auVar23,8);
    plVar3 = plVar51;
    uVar38 = *puVar1;
  }
  *(long **)(lVar40 + lVar41 * 8) = plVar3;
  *puVar1 = uVar42;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010268f:
  *(long **)param_1 = plVar34;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    if (puVar35 == *(undefined8 **)((long)pvVar36 + 0x28)) {
      *puVar35 = *(undefined8 *)((long)pvVar36 + 0x18);
      if (pvVar36 == (void *)puVar35[1]) {
        puVar35[1] = *(undefined8 *)((long)pvVar36 + 0x20);
      }
      if (*(long *)((long)pvVar36 + 0x20) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar36 + 0x20) + 0x18) =
             *(undefined8 *)((long)pvVar36 + 0x18);
      }
      if (*(long *)((long)pvVar36 + 0x18) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar36 + 0x18) + 0x20) =
             *(undefined8 *)((long)pvVar36 + 0x20);
      }
      Memory::free_static(pvVar36,false);
      *(int *)(puVar35 + 2) = *(int *)(puVar35 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar35 = *(undefined8 **)(lVar49 + 0x30);
    if (*(int *)(puVar35 + 2) == 0) break;
LAB_001028b9:
    pvVar36 = (void *)*puVar35;
    if (pvVar36 == (void *)0x0) goto LAB_00102930;
  }
  Memory::free_static(puVar35,false);
  *(undefined8 *)(lVar49 + 0x30) = 0;
LAB_0010292d:
  puVar35 = (undefined8 *)0x0;
LAB_00102930:
  if ((*(long **)(in_RCX + 0x18) != (long *)0x0) &&
     (puVar33 = (undefined8 *)**(long **)(in_RCX + 0x18), puVar33 != (undefined8 *)0x0)) {
    if (puVar35 == (undefined8 *)0x0) {
      pauVar32 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(lVar49 + 0x30) = pauVar32;
      *(undefined4 *)pauVar32[1] = 0;
      *pauVar32 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        puVar35 = (undefined8 *)operator_new(0x30,DefaultAllocator::alloc);
        IPAddress::clear();
        puVar35[5] = 0;
        *(undefined1 (*) [16])(puVar35 + 3) = (undefined1  [16])0x0;
        uVar31 = puVar33[1];
        *puVar35 = *puVar33;
        puVar35[1] = uVar31;
        *(undefined2 *)(puVar35 + 2) = *(undefined2 *)(puVar33 + 2);
        lVar48 = *(long *)(lVar49 + 0x30);
        puVar35[4] = *(undefined8 *)(lVar48 + 8);
        puVar35[5] = lVar48;
        plVar34 = *(long **)(lVar49 + 0x30);
        if (plVar34[1] != 0) {
          *(undefined8 **)(plVar34[1] + 0x18) = puVar35;
        }
        plVar34[1] = (long)puVar35;
        if (*plVar34 != 0) break;
        *plVar34 = (long)puVar35;
        puVar33 = (undefined8 *)puVar33[3];
        *(int *)(plVar34 + 2) = (int)plVar34[2] + 1;
        if (puVar33 == (undefined8 *)0x0) goto LAB_00102a1d;
      }
      puVar33 = (undefined8 *)puVar33[3];
      *(int *)(plVar34 + 2) = (int)plVar34[2] + 1;
    } while (puVar33 != (undefined8 *)0x0);
  }
LAB_00102a1d:
  plVar34 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar45 * 8);
  goto LAB_0010268f;
}



/* WARNING: Control flow encountered bad instruction data */
/* IP::Interface_Info::~Interface_Info() */

void __thiscall IP::Interface_Info::~Interface_Info(Interface_Info *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* IPUnix::~IPUnix() */

void __thiscall IPUnix::~IPUnix(IPUnix *this)

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


