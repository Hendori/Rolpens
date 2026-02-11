
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



/* WARNING: Type propagation algorithm not settling */
/* RDShaderFile::parse_versions_from_text(String const&, String, String (*)(String const&, void*),
   void*) */

undefined8 __thiscall
RDShaderFile::parse_versions_from_text
          (RDShaderFile *this,bool param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  long *plVar1;
  String *pSVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  code *pcVar8;
  int iVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  Resource *this_00;
  Resource *pRVar19;
  Resource *pRVar20;
  CowData<char32_t> *this_01;
  undefined8 *puVar21;
  size_t sVar22;
  StrRange *pSVar23;
  Resource *pRVar24;
  ulong uVar25;
  int *piVar26;
  String *pSVar27;
  long lVar28;
  undefined8 *puVar29;
  char *pcVar30;
  wchar32 wVar31;
  Object *this_02;
  undefined8 uVar32;
  Object *pOVar33;
  long in_FS_OFFSET;
  bool bVar34;
  bool bVar35;
  byte bVar36;
  long *local_180;
  String *local_150;
  char *local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  char *local_100;
  long local_f8;
  long local_f0;
  char local_e8 [8];
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  size_t local_b0;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined4 local_70;
  char local_6c;
  String local_68 [16];
  undefined1 local_58 [16];
  long local_48 [3];
  
  bVar36 = 0;
  local_48[1] = *(long *)(in_FS_OFFSET + 0x28);
  lVar17 = RenderingDevice::get_singleton();
  if (lVar17 == 0) {
    uVar32 = 2;
    _err_print_error("parse_versions_from_text","servers/rendering/rendering_device_binds.cpp",0x24,
                     "Parameter \"RenderingDevice::get_singleton()\" is null.",
                     "Cannot import custom .glsl shaders when running without a RenderingDevice. This can happen if you are using the headless more or the Compatibility renderer."
                     ,0,0);
    goto LAB_001012bc;
  }
  String::split(local_e8,param_2,0x108083);
  local_70 = 0;
  local_68[0] = (String)0x0;
  local_68[1] = (String)0x0;
  local_68[2] = (String)0x0;
  local_68[3] = (String)0x0;
  local_68[4] = (String)0x0;
  local_68[5] = (String)0x0;
  local_68[6] = (String)0x0;
  local_68[7] = (String)0x0;
  local_68[8] = (String)0x0;
  local_68[9] = (String)0x0;
  local_68[10] = (String)0x0;
  local_68[0xb] = (String)0x0;
  local_68[0xc] = (String)0x0;
  local_68[0xd] = (String)0x0;
  local_68[0xe] = (String)0x0;
  local_68[0xf] = (String)0x0;
  local_58 = (undefined1  [16])0x0;
  local_6c = '\0';
  local_48[0] = 0;
  local_80 = 2;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  if ((*(long *)(this + 0x248) != 0) && (*(int *)(this + 0x26c) != 0)) {
    lVar17 = 0;
    uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
    if (uVar6 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x250) + lVar17) != 0) {
          *(int *)(*(long *)(this + 0x250) + lVar17) = 0;
          pvVar7 = *(void **)(*(long *)(this + 0x248) + lVar17 * 2);
          if ((*(long *)((long)pvVar7 + 0x18) != 0) &&
             (cVar13 = RefCounted::unreference(), cVar13 != '\0')) {
            pOVar33 = *(Object **)((long)pvVar7 + 0x18);
            cVar13 = predelete_handler(pOVar33);
            if (cVar13 != '\0') {
              (**(code **)(*(long *)pOVar33 + 0x140))(pOVar33);
              Memory::free_static(pOVar33,false);
            }
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar7 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar7,false);
          *(undefined8 *)(*(long *)(this + 0x248) + lVar17 * 2) = 0;
        }
        lVar17 = lVar17 + 4;
      } while (lVar17 != (ulong)uVar6 << 2);
    }
    *(undefined4 *)(this + 0x26c) = 0;
    *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  }
  local_b0 = 0;
  pSVar23 = (StrRange *)(this + 0x270);
  local_b8 = "";
  String::parse_latin1(pSVar23);
  if (local_e0 == 0) {
    if ((*(long *)(this + 0x270) == 0) || (*(uint *)(*(long *)(this + 0x270) + -8) < 2)) {
LAB_00101999:
      StringName::StringName((StringName *)&local_c8,"",false);
      pSVar23 = (StrRange *)
                HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                ::operator[](local_a8,(StringName *)&local_c8);
      local_b0 = 0;
      local_b8 = "";
      String::parse_latin1(pSVar23);
      if ((StringName::configured != '\0') && (local_c8 != 0)) {
        StringName::unref();
      }
LAB_0010049b:
      if ((long *)local_90._0_8_ == (long *)0x0) {
      }
      else {
        bVar34 = false;
        local_180 = (long *)local_90._0_8_;
        do {
          this_00 = (Resource *)operator_new(0x2b8,"");
          pRVar20 = this_00;
          for (lVar17 = 0x57; lVar17 != 0; lVar17 = lVar17 + -1) {
            *(undefined8 *)pRVar20 = 0;
            pRVar20 = pRVar20 + (ulong)bVar36 * -0x10 + 8;
          }
          Resource::Resource(this_00);
          *(undefined8 *)(this_00 + 0x248) = 0;
          *(undefined ***)this_00 = &PTR__initialize_classv_0010bb70;
          pRVar20 = this_00 + 0x250;
          do {
            pRVar19 = pRVar20;
            *(undefined8 *)(pRVar19 + 8) = 0;
            pRVar20 = pRVar19 + 0x20;
            *(undefined8 *)(pRVar19 + 0x18) = 0;
          } while (pRVar20 != this_00 + 0x290);
          *(undefined8 *)(pRVar19 + 0x40) = 0;
          pRVar24 = (Resource *)0x0;
          *(undefined1 (*) [16])pRVar20 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pRVar19 + 0x30) = (undefined1  [16])0x0;
          postinitialize_handler((Object *)this_00);
          cVar13 = RefCounted::init_ref();
          if (cVar13 != '\0') {
            cVar13 = RefCounted::reference();
            pRVar24 = (Resource *)0x0;
            if (cVar13 != '\0') {
              pRVar24 = this_00;
            }
            cVar13 = RefCounted::unreference();
            if ((cVar13 != '\0') && (cVar13 = predelete_handler((Object *)this_00), cVar13 != '\0'))
            {
              (**(code **)(*(long *)this_00 + 0x140))(this_00);
              Memory::free_static(this_00,false);
            }
          }
          uVar25 = 0;
          pOVar33 = (Object *)pRVar24 + 0x290;
          this_02 = (Object *)pRVar24 + 0x248;
          do {
            local_120 = (char *)0x0;
            plVar1 = (long *)(*(long *)(local_68 + uVar25 * 8) + -0x10);
            if (*(long *)(local_68 + uVar25 * 8) != 0) {
              do {
                lVar17 = *plVar1;
                if (lVar17 == 0) goto LAB_001005b2;
                LOCK();
                lVar28 = *plVar1;
                bVar35 = lVar17 == lVar28;
                if (bVar35) {
                  *plVar1 = lVar17 + 1;
                  lVar28 = lVar17;
                }
                UNLOCK();
              } while (!bVar35);
              if (lVar28 != -1) {
                local_120 = *(char **)(local_68 + uVar25 * 8);
              }
LAB_001005b2:
              if (local_120 != (char *)0x0) {
                if (1 < *(uint *)(local_120 + -8)) {
                  local_c8 = 0;
                  local_b8 = "VERSION_DEFINES";
                  local_b0 = 0xf;
                  String::parse_latin1((StrRange *)&local_c8);
                  String::replace((String *)&local_b8,(String *)&local_120);
                  pcVar11 = local_b8;
                  pcVar30 = local_120;
                  if (local_120 == local_b8) {
                    if (local_120 != (char *)0x0) {
                      LOCK();
                      plVar1 = (long *)(local_120 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        local_b8 = (char *)0x0;
                        Memory::free_static(pcVar11 + -0x10,false);
                      }
                    }
                  }
                  else {
                    if (local_120 != (char *)0x0) {
                      LOCK();
                      plVar1 = (long *)(local_120 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        local_120 = (char *)0x0;
                        Memory::free_static(pcVar30 + -0x10,false);
                      }
                    }
                    local_120 = local_b8;
                  }
                  lVar17 = local_c8;
                  if (local_c8 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_c8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_c8 = 0;
                      Memory::free_static((void *)(lVar17 + -0x10),false);
                    }
                  }
                  local_118 = 0;
                  uVar32 = RenderingDevice::get_singleton();
                  RenderingDevice::shader_compile_spirv_from_source
                            (&local_d8,uVar32,uVar25 & 0xffffffff,(String *)&local_120,0,
                             (String *)&local_118,0);
                  if (*(long *)this_02 != local_d0) {
                    CowData<unsigned_char>::_ref
                              ((CowData<unsigned_char> *)this_02,(CowData *)&local_d0);
                  }
                  if ((local_118 != 0) && (1 < *(uint *)(local_118 + -8))) {
                    local_c8 = 0;
                    local_b8 = "\' source code: \n\n";
                    local_b0 = 0x11;
                    String::parse_latin1((StrRange *)&local_c8);
                    local_f8 = 0;
                    pcVar30 = (&parse_versions_from_text(String_const&,String,String(*)(String_const&,void*),void*)
                                ::stage_str)[uVar25];
                    sVar22 = 0;
                    if (pcVar30 != (char *)0x0) {
                      sVar22 = strlen(pcVar30);
                    }
                    local_b8 = pcVar30;
                    local_b0 = sVar22;
                    String::parse_latin1((StrRange *)&local_f8);
                    local_108 = (undefined *)0x0;
                    local_b8 = "\n\nStage \'";
                    local_b0 = 9;
                    String::parse_latin1((StrRange *)&local_108);
                    local_110 = 0;
                    String::operator+((String *)&local_100,(String *)&local_110);
                    String::operator+((String *)&local_f0,(String *)&local_100);
                    String::operator+((String *)&local_b8,(String *)&local_f0);
                    String::operator+=((String *)&local_118,(String *)&local_b8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                    lVar17 = 0;
                    String::split((char *)&local_c8,SUB81((String *)&local_120,0),0x108083);
                    while ((local_c0 != 0 && (lVar17 < *(long *)(local_c0 + -8)))) {
                      local_f0 = 0;
                      local_b8 = "\n";
                      local_b0 = 1;
                      String::parse_latin1((StrRange *)&local_f0);
                      if (local_c0 == 0) {
                        lVar28 = 0;
                        goto LAB_00101724;
                      }
                      lVar28 = *(long *)(local_c0 + -8);
                      if (lVar28 <= lVar17) goto LAB_00101724;
                      local_b8 = "\t\t";
                      lVar17 = lVar17 + 1;
                      local_108 = (undefined *)0x0;
                      local_b0 = 2;
                      String::parse_latin1((StrRange *)&local_108);
                      itos((long)&local_110);
                      String::operator+((String *)&local_100,(String *)&local_110);
                      String::operator+((String *)&local_f8,(String *)&local_100);
                      String::operator+((String *)&local_b8,(String *)&local_f8);
                      String::operator+=((String *)&local_118,(String *)&local_b8);
                      pcVar30 = local_b8;
                      if (local_b8 != (char *)0x0) {
                        LOCK();
                        plVar1 = (long *)(local_b8 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_b8 = (char *)0x0;
                          Memory::free_static(pcVar30 + -0x10,false);
                        }
                      }
                      lVar28 = local_f8;
                      if (local_f8 != 0) {
                        LOCK();
                        plVar1 = (long *)(local_f8 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_f8 = 0;
                          Memory::free_static((void *)(lVar28 + -0x10),false);
                        }
                      }
                      pcVar30 = local_100;
                      if (local_100 != (char *)0x0) {
                        LOCK();
                        plVar1 = (long *)(local_100 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_100 = (char *)0x0;
                          Memory::free_static(pcVar30 + -0x10,false);
                        }
                      }
                      lVar28 = local_110;
                      if (local_110 != 0) {
                        LOCK();
                        plVar1 = (long *)(local_110 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_110 = 0;
                          Memory::free_static((void *)(lVar28 + -0x10),false);
                        }
                      }
                      puVar10 = local_108;
                      if (local_108 != (undefined *)0x0) {
                        LOCK();
                        plVar1 = (long *)(local_108 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_108 = (undefined *)0x0;
                          Memory::free_static(puVar10 + -0x10,false);
                        }
                      }
                      lVar28 = local_f0;
                      if (local_f0 != 0) {
                        LOCK();
                        plVar1 = (long *)(local_f0 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_f0 = 0;
                          Memory::free_static((void *)(lVar28 + -0x10),false);
                        }
                      }
                    }
                    CowData<String>::_unref((CowData<String> *)&local_c0);
                    bVar34 = true;
                  }
                  if (local_118 != *(long *)pOVar33) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)pOVar33,(CowData *)&local_118);
                  }
                  lVar17 = local_d0;
                  if (local_d0 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_d0 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_d0 = 0;
                      Memory::free_static((void *)(lVar17 + -0x10),false);
                    }
                  }
                  lVar17 = local_118;
                  if (local_118 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_118 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_118 = 0;
                      Memory::free_static((void *)(lVar17 + -0x10),false);
                    }
                  }
                  if (local_120 == (char *)0x0) goto LAB_001005de;
                }
                pcVar30 = local_120;
                LOCK();
                plVar1 = (long *)(local_120 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_120 = (char *)0x0;
                  Memory::free_static(pcVar30 + -0x10,false);
                }
              }
            }
LAB_001005de:
            uVar25 = uVar25 + 1;
            pOVar33 = (Object *)((CowData<char32_t> *)pOVar33 + 8);
            this_02 = (Object *)((CowData<unsigned_char> *)this_02 + 0x10);
          } while (uVar25 != 5);
          if (pRVar24 == (Resource *)0x0) {
            _err_print_error("set_bytecode","servers/rendering/rendering_device_binds.h",0x162,
                             "Condition \"p_bytecode.is_null()\" is true.",0,0);
          }
          else {
            puVar21 = (undefined8 *)
                      HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
                      ::operator[]((HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
                                    *)(this + 0x240),(StringName *)(local_180 + 2));
            pOVar33 = (Object *)*puVar21;
            if (pRVar24 != (Resource *)pOVar33) {
              *puVar21 = pRVar24;
              cVar13 = RefCounted::reference();
              if (cVar13 == '\0') {
                *puVar21 = 0;
              }
              if (((pOVar33 != (Object *)0x0) &&
                  (cVar13 = RefCounted::unreference(), cVar13 != '\0')) &&
                 (cVar13 = predelete_handler(pOVar33), cVar13 != '\0')) {
                (**(code **)(*(long *)pOVar33 + 0x140))(pOVar33);
                Memory::free_static(pOVar33,false);
              }
            }
            Resource::emit_changed();
            cVar13 = RefCounted::unreference();
            if ((cVar13 != '\0') && (cVar13 = predelete_handler((Object *)pRVar24), cVar13 != '\0'))
            {
              (**(code **)(*(long *)pRVar24 + 0x140))(pRVar24);
              Memory::free_static(pRVar24,false);
            }
          }
          local_180 = (long *)*local_180;
        } while (local_180 != (long *)0x0);
        if (bVar34) {
          uVar32 = 0x2b;
          puVar21 = (undefined8 *)local_a0._0_8_;
          goto LAB_001011bf;
        }
      }
      uVar32 = 0;
      puVar21 = (undefined8 *)local_a0._0_8_;
      goto LAB_001011bf;
    }
    uVar32 = 0x2b;
  }
  else {
    iVar5 = 0;
    lVar17 = 0;
    iVar9 = 5;
    cVar13 = '\0';
    do {
      if (*(long *)(local_e0 + -8) <= lVar17) break;
      local_120 = (char *)0x0;
      plVar3 = (long *)(local_e0 + lVar17 * 8);
      lVar28 = *plVar3;
      plVar1 = (long *)(lVar28 + -0x10);
      if (lVar28 != 0) {
        do {
          lVar28 = *plVar1;
          if (lVar28 == 0) goto LAB_0010033c;
          LOCK();
          lVar18 = *plVar1;
          bVar34 = lVar28 == lVar18;
          if (bVar34) {
            *plVar1 = lVar28 + 1;
            lVar18 = lVar28;
          }
          UNLOCK();
        } while (!bVar34);
        if (lVar18 != -1) {
          local_120 = (char *)*plVar3;
        }
      }
LAB_0010033c:
      bVar34 = SUB81((CowData<char32_t> *)&local_120,0);
      String::strip_edges(SUB81((CowData<char32_t> *)&local_d8,0),bVar34);
      cVar14 = String::begins_with((char *)&local_d8);
      bVar35 = SUB81((CowData<char32_t> *)&local_b8,0);
      if ((cVar14 != '\0') && (cVar14 = String::ends_with((char *)&local_d8), cVar14 != '\0')) {
        String::substr((int)(CowData<char32_t> *)&local_b8,(int)(CowData<char32_t> *)&local_d8);
        String::strip_edges(SUB81((String *)&local_c8,0),bVar35);
        pcVar30 = local_b8;
        if (local_b8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = (char *)0x0;
            Memory::free_static(pcVar30 + -0x10,false);
          }
        }
        cVar14 = String::operator==((String *)&local_c8,"versions");
        if (cVar14 == '\0') {
          lVar28 = 0;
          do {
            cVar15 = String::operator==((String *)&local_c8,
                                        (&parse_versions_from_text(String_const&,String,String(*)(String_const&,void*),void*)
                                          ::stage_str)[lVar28]);
            cVar14 = cVar13;
            if (cVar15 != '\0') {
              iVar16 = (int)lVar28;
              if (*(char *)((long)&local_70 + (long)iVar16) == '\0') {
                iVar5 = iVar5 + 1;
                *(undefined1 *)((long)&local_70 + (long)iVar16) = 1;
                cVar14 = '\0';
                iVar9 = iVar16;
              }
              else {
                operator+((char *)&local_b8,(String *)"Invalid shader file, stage appears twice: ");
                if (*(char **)(this + 0x270) != local_b8) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
                  pcVar30 = local_b8;
                  local_b8 = (char *)0x0;
                  *(char **)(this + 0x270) = pcVar30;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              }
              break;
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 != 5);
          if ((*(long *)(this + 0x270) == 0) || (*(uint *)(*(long *)(this + 0x270) + -8) < 2)) {
LAB_00100630:
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            cVar13 = cVar14;
            goto LAB_00100648;
          }
        }
        else {
          if (iVar5 == 0) goto LAB_00100630;
          local_b0 = 0x41;
          local_b8 = "Invalid shader file, #[versions] must be the first section found.";
          String::parse_latin1(pSVar23);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
LAB_00100459:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
        break;
      }
      lVar28 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar28 + -0x10),false);
        }
      }
      if (iVar9 == 5) {
        String::strip_edges(bVar35,bVar34);
        if (local_b8 == (char *)0x0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        }
        else {
          uVar32 = *(undefined8 *)(local_b8 + -8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          if (1 < (uint)uVar32) {
            String::strip_edges(bVar35,bVar34);
            pcVar30 = local_b8;
            if (local_120 == local_b8) {
              if (local_b8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_b8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_b8 = (char *)0x0;
                  Memory::free_static(pcVar30 + -0x10,false);
                }
              }
            }
            else {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
              local_120 = local_b8;
            }
            cVar14 = String::begins_with((char *)&local_120);
            if ((cVar14 != '\0') ||
               (cVar14 = String::begins_with((char *)&local_120), cVar14 != '\0'))
            goto LAB_00100648;
          }
        }
        if (cVar13 != '\0') goto LAB_00100960;
        String::strip_edges(bVar35,bVar34);
        if (local_b8 == (char *)0x0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        }
        else {
          uVar32 = *(undefined8 *)(local_b8 + -8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          if (1 < (uint)uVar32) {
            operator+((char *)&local_b8,
                      (String *)"Text was found that does not belong to a valid section: ");
            if (*(char **)(this + 0x270) != local_b8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
              pcVar30 = local_b8;
              local_b8 = (char *)0x0;
              *(char **)(this + 0x270) = pcVar30;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            goto LAB_00100459;
          }
        }
      }
      else {
        if (cVar13 == '\0') {
          String::strip_edges(bVar35,bVar34);
          cVar14 = String::begins_with((char *)&local_b8);
          pcVar30 = local_b8;
          if (local_b8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_b8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b8 = (char *)0x0;
              Memory::free_static(pcVar30 + -0x10,false);
            }
          }
          if (cVar14 == '\0') {
            local_c8 = 0;
            local_b8 = "\n";
            local_b0 = 1;
            String::parse_latin1((StrRange *)&local_c8);
            String::operator+((String *)&local_b8,(String *)&local_120);
            String::operator+=(local_68 + (long)iVar9 * 8,(String *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          }
          else if (param_4 == (code *)0x0) {
            local_b0 = 0x30;
            local_b8 = "#include used, but no include function provided.";
            String::parse_latin1(pSVar23);
          }
          else {
            String::replace((char *)&local_b8,(char *)&local_120);
            String::strip_edges(false,bVar35);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            cVar14 = String::begins_with((char *)&local_100);
            if ((cVar14 == '\0') || (cVar14 = String::ends_with((char *)&local_100), cVar14 == '\0')
               ) {
              operator+((char *)&local_b8,
                        (String *)
                        "Malformed #include syntax, expected #include \"<path>\", found instead: ");
              if (*(char **)(this + 0x270) != local_b8) {
                CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
                pcVar30 = local_b8;
                local_b8 = (char *)0x0;
                *(char **)(this + 0x270) = pcVar30;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
              goto LAB_00100459;
            }
            String::substr((int)(CowData<char32_t> *)&local_c8,(int)(CowData<char32_t> *)&local_100)
            ;
            String::strip_edges(bVar35,SUB81((CowData<char32_t> *)&local_c8,0));
            if (local_100 != local_b8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
              local_100 = local_b8;
              local_b8 = (char *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            ShaderIncludeDB::get_built_in_include_file((String *)&local_f8);
            if ((local_f8 == 0) || (*(uint *)(local_f8 + -8) < 2)) {
              (*param_4)((CowData<char32_t> *)&local_f0,(CowData<char32_t> *)&local_100,param_5);
              if ((local_f0 == 0) || (*(uint *)(local_f0 + -8) < 2)) {
                local_c8 = 0;
                local_b8 = "\'.";
                local_b0 = 2;
                String::parse_latin1((StrRange *)&local_c8);
                operator+((char *)&local_d8,(String *)"#include failed for file \'");
                String::operator+((String *)&local_b8,(String *)&local_d8);
                if (*(char **)(this + 0x270) != local_b8) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
                  pcVar30 = local_b8;
                  local_b8 = (char *)0x0;
                  *(char **)(this + 0x270) = pcVar30;
                }
              }
              else {
                local_c8 = 0;
                local_b8 = "\n";
                local_b0 = 1;
                String::parse_latin1((StrRange *)&local_c8);
                operator+((char *)&local_d8,(String *)&_LC41);
                String::operator+((String *)&local_b8,(String *)&local_d8);
                String::operator+=(local_68 + (long)iVar9 * 8,(String *)&local_b8);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
            }
            else {
              local_c8 = 0;
              local_b8 = "\n";
              local_b0 = 1;
              String::parse_latin1((StrRange *)&local_c8);
              operator+((char *)&local_d8,(String *)&_LC41);
              String::operator+((String *)&local_b8,(String *)&local_d8);
              String::operator+=(local_68 + (long)iVar9 * 8,(String *)&local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          }
          goto LAB_00100648;
        }
LAB_00100960:
        String::strip_edges(SUB81((CowData<char32_t> *)&local_118,0),bVar34);
        if ((local_118 != 0) && (1 < *(uint *)(local_118 + -8))) {
          wVar31 = (wchar32)(CowData<char32_t> *)&local_118;
          iVar16 = String::find_char(wVar31,0x3d);
          if (iVar16 == -1) {
            local_c8 = 0;
            local_b8 = "\'. Version syntax is `version = \"<defines with C escaping>\";`.";
            local_b0 = 0x3e;
            String::parse_latin1((StrRange *)&local_c8);
            pcVar30 = "Missing `=` in \'";
LAB_00101e1e:
            operator+((char *)&local_d8,(String *)pcVar30);
            String::operator+((String *)&local_b8,(String *)&local_d8);
            if (*(char **)(this + 0x270) != local_b8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
              pcVar30 = local_b8;
              local_b8 = (char *)0x0;
              *(char **)(this + 0x270) = pcVar30;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          }
          else {
            iVar16 = String::find_char(wVar31,0x3b);
            if (iVar16 == -1) {
              local_c8 = 0;
              local_b8 = "\'. Version syntax is `version = \"<defines with C escaping>\";`.";
              local_b0 = 0x3e;
              String::parse_latin1((StrRange *)&local_c8);
              pcVar30 = "Missing `;` in \'";
              goto LAB_00101e1e;
            }
            String::get_slice((char *)&local_b8,wVar31);
            String::split((char *)&local_c8,bVar35,0x1080bd);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            if (local_c0 == 0) {
              lVar28 = 0;
LAB_00101c1b:
              lVar17 = 0;
LAB_00101724:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar17,lVar28,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            lVar28 = *(long *)(local_c0 + -8);
            if (lVar28 < 1) goto LAB_00101c1b;
            String::strip_edges(SUB81((String *)&local_110,0),SUB81(local_c0,0));
            cVar14 = String::is_valid_ascii_identifier();
            if (cVar14 != '\0') {
              if (local_c0 == 0) {
                lVar28 = 0;
              }
              else {
                lVar28 = *(long *)(local_c0 + -8);
                if (1 < lVar28) {
                  String::strip_edges(SUB81((CowData<char32_t> *)&local_108,0),
                                      (bool)((char)local_c0 + '\b'));
                  cVar14 = String::begins_with((char *)&local_108);
                  if ((cVar14 != '\0') &&
                     (cVar14 = String::ends_with((char *)&local_108), cVar14 != '\0')) {
                    local_d8 = 0;
                    local_b8 = "\n";
                    local_b0 = 1;
                    String::parse_latin1((StrRange *)&local_d8);
                    String::substr((int)(CowData<char32_t> *)&local_100,
                                   (int)(CowData<char32_t> *)&local_108);
                    String::c_unescape();
                    operator+((char *)&local_f0,(String *)&_LC41);
                    String::operator+((String *)&local_b8,(String *)&local_f0);
                    if (local_108 != local_b8) {
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                      local_108 = local_b8;
                      local_b8 = (undefined *)0x0;
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                    local_b8 = "\n";
                    local_f0 = 0;
                    local_b0 = 1;
                    String::parse_latin1((StrRange *)&local_f0);
                    String::operator+((String *)&local_d8,(String *)&local_108);
                    String::operator+((String *)&local_b8,(String *)&local_d8);
                    StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
                    this_01 = (CowData<char32_t> *)
                              HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                              ::operator[](local_a8,(StringName *)&local_f8);
                    if (*(char **)this_01 != local_b8) {
                      CowData<char32_t>::_unref(this_01);
                      *(char **)this_01 = local_b8;
                      local_b8 = (char *)0x0;
                    }
                    if ((StringName::configured != '\0') && (local_f8 != 0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                    CowData<String>::_unref((CowData<String> *)&local_c0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                    goto LAB_00100648;
                  }
                  local_d8 = 0;
                  local_b8 = "\'.";
                  local_b0 = 2;
                  String::parse_latin1((StrRange *)&local_d8);
                  operator+((char *)&local_f0,
                            (String *)"Version text must be quoted using \"\", instead found \'");
                  String::operator+((String *)&local_b8,(String *)&local_f0);
                  if (*(char **)(this + 0x270) != local_b8) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
                    pcVar30 = local_b8;
                    local_b8 = (char *)0x0;
                    *(char **)(this + 0x270) = pcVar30;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                  goto LAB_00101da9;
                }
              }
              lVar17 = 1;
              goto LAB_00101724;
            }
            local_d8 = 0;
            local_b8 = "\' instead.";
            local_b0 = 10;
            String::parse_latin1((StrRange *)&local_d8);
            operator+((char *)&local_f0,
                      (String *)"Version names must be valid identifiers, found \'");
            String::operator+((String *)&local_b8,(String *)&local_f0);
            if (*(char **)(this + 0x270) != local_b8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar23);
              pcVar30 = local_b8;
              local_b8 = (char *)0x0;
              *(char **)(this + 0x270) = pcVar30;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
LAB_00101da9:
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
            CowData<String>::_unref((CowData<String> *)&local_c0);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
          goto LAB_00100459;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      }
LAB_00100648:
      pcVar30 = local_120;
      if (local_120 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_120 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_120 = (char *)0x0;
          Memory::free_static(pcVar30 + -0x10,false);
        }
      }
      lVar17 = lVar17 + 1;
    } while (local_e0 != 0);
    if ((*(long *)(this + 0x270) == 0) || (*(uint *)(*(long *)(this + 0x270) + -8) < 2)) {
      if ((local_6c == '\0') || (iVar5 < 2)) {
        if (local_80._4_4_ == 0) goto LAB_00101999;
        goto LAB_0010049b;
      }
      uVar32 = 0x2b;
      _err_print_error("parse_versions_from_text","servers/rendering/rendering_device_binds.cpp",
                       0xad,"Method/function failed. Returning: ERR_PARSE_ERROR",
                       "When writing compute shaders, [compute] mustbe the only stage present.",0,0)
      ;
      puVar21 = (undefined8 *)local_a0._0_8_;
    }
    else {
      uVar32 = 0x2b;
      puVar21 = (undefined8 *)local_a0._0_8_;
    }
LAB_001011bf:
    if (puVar21 != (undefined8 *)0x0) {
      uVar12 = local_a0._8_8_;
      if ((local_80._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) != 0)) {
        piVar4 = (int *)(local_a0._8_8_ +
                        (ulong)*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) * 4);
        piVar26 = (int *)local_a0._8_8_;
        puVar29 = puVar21;
        do {
          if (*piVar26 != 0) {
            pvVar7 = (void *)*puVar29;
            *piVar26 = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar7 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar7,false);
            *puVar29 = 0;
          }
          piVar26 = piVar26 + 1;
          puVar29 = puVar29 + 1;
        } while (piVar4 != piVar26);
      }
      Memory::free_static(puVar21,false);
      Memory::free_static((void *)uVar12,false);
    }
  }
  local_150 = local_68;
  pSVar27 = (String *)(local_48 + 1);
  do {
    pSVar2 = pSVar27 + -8;
    pSVar27 = pSVar27 + -8;
    if (*(long *)pSVar2 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)pSVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar17 = *(long *)pSVar27;
        *(long *)pSVar27 = 0;
        Memory::free_static((void *)(lVar17 + -0x10),false);
      }
    }
  } while (pSVar27 != local_150);
  CowData<String>::_unref((CowData<String> *)&local_e0);
LAB_001012bc:
  if (local_48[1] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar32;
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



/* RDShaderSPIRV::is_class_ptr(void*) const */

uint __thiscall RDShaderSPIRV::is_class_ptr(RDShaderSPIRV *this,void *param_1)

{
  return (uint)CONCAT71(0x10bf,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10be,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bf,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bf,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RDShaderSPIRV::_getv(StringName const&, Variant&) const */

undefined8 RDShaderSPIRV::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RDShaderSPIRV::_setv(StringName const&, Variant const&) */

undefined8 RDShaderSPIRV::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RDShaderSPIRV::_validate_propertyv(PropertyInfo&) const */

void RDShaderSPIRV::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RDShaderSPIRV::_property_can_revertv(StringName const&) const */

undefined8 RDShaderSPIRV::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RDShaderSPIRV::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RDShaderSPIRV::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RDShaderSPIRV::_notificationv(int, bool) */

void RDShaderSPIRV::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<Vector<unsigned char>,
   RenderingDeviceCommons::ShaderStage>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage>::_gen_argument_type
          (MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage> *this,
          int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe5) + 0x1d;
}



/* MethodBindTRC<Vector<unsigned char>, RenderingDeviceCommons::ShaderStage>::get_argument_meta(int)
   const */

undefined8
MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage>::get_argument_meta
          (int param_1)

{
  return 0;
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, Vector<unsigned char>
   const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>::_gen_argument_type
          (MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&> *this,
          int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffe5) + 0x1d;
  }
  return iVar1;
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, Vector<unsigned char>
   const&>::get_argument_meta(int) const */

undefined8
MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>::get_argument_meta
          (int param_1)

{
  return 0;
}



/* MethodBindTRC<String, RenderingDeviceCommons::ShaderStage>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<String,RenderingDeviceCommons::ShaderStage>::_gen_argument_type
          (MethodBindTRC<String,RenderingDeviceCommons::ShaderStage> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffe) + 4;
}



/* MethodBindTRC<String, RenderingDeviceCommons::ShaderStage>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String,RenderingDeviceCommons::ShaderStage>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, String const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&>::_gen_argument_type
          (MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffffe) + 4;
  }
  return iVar1;
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, String const&>::get_argument_meta(int) const */

undefined8
MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, Vector<unsigned char> const&>::~MethodBindT() */

void __thiscall
MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>::~MethodBindT
          (MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010be08;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, Vector<unsigned char> const&>::~MethodBindT() */

void __thiscall
MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>::~MethodBindT
          (MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010be08;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<unsigned char>, RenderingDeviceCommons::ShaderStage>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage>::~MethodBindTRC
          (MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010be68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<unsigned char>, RenderingDeviceCommons::ShaderStage>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage>::~MethodBindTRC
          (MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010be68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&>::~MethodBindT
          (MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010bd48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&>::~MethodBindT
          (MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010bd48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String, RenderingDeviceCommons::ShaderStage>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,RenderingDeviceCommons::ShaderStage>::~MethodBindTRC
          (MethodBindTRC<String,RenderingDeviceCommons::ShaderStage> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010bda8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String, RenderingDeviceCommons::ShaderStage>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,RenderingDeviceCommons::ShaderStage>::~MethodBindTRC
          (MethodBindTRC<String,RenderingDeviceCommons::ShaderStage> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010bda8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RDShaderSPIRV::_get_class_namev() const */

undefined8 * RDShaderSPIRV::_get_class_namev(void)

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
LAB_00102323:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102323;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RDShaderSPIRV");
      goto LAB_0010238e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RDShaderSPIRV");
LAB_0010238e:
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



/* RDShaderSPIRV::get_stage_bytecode(RenderingDeviceCommons::ShaderStage) const */

long RDShaderSPIRV::get_stage_bytecode(long param_1,long param_2,uint param_3)

{
  if (param_3 < 5) {
    *(undefined8 *)(param_1 + 8) = 0;
    if (*(long *)((long)(int)param_3 * 0x10 + 0x248 + param_2) != 0) {
      CowData<unsigned_char>::_ref
                ((CowData<unsigned_char> *)(param_1 + 8),
                 (CowData *)(param_2 + 0x248 + (ulong)param_3 * 0x10));
    }
    return param_1;
  }
  _err_print_index_error
            ("get_stage_bytecode","servers/rendering/rendering_device_binds.h",0x128,(ulong)param_3,
             5,"p_stage","RD::SHADER_STAGE_MAX","",false,false);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* RDShaderSPIRV::set_stage_bytecode(RenderingDeviceCommons::ShaderStage, Vector<unsigned char>
   const&) */

void __thiscall RDShaderSPIRV::set_stage_bytecode(RDShaderSPIRV *this,uint param_2,long param_3)

{
  long lVar1;
  
  if (4 < param_2) {
    _err_print_index_error
              ("set_stage_bytecode","servers/rendering/rendering_device_binds.h",0x123,
               (ulong)param_2,5,"p_stage","RD::SHADER_STAGE_MAX","",false,false);
    return;
  }
  lVar1 = ((ulong)param_2 + 0x24) * 0x10;
  if (*(long *)(this + lVar1 + 8) != *(long *)(param_3 + 8)) {
    CowData<unsigned_char>::_ref
              ((CowData<unsigned_char> *)(this + lVar1 + 8),(CowData *)(param_3 + 8));
    return;
  }
  return;
}



/* RDShaderSPIRV::~RDShaderSPIRV() */

void __thiscall RDShaderSPIRV::~RDShaderSPIRV(RDShaderSPIRV *this)

{
  long *plVar1;
  long lVar2;
  RDShaderSPIRV *pRVar3;
  
  pRVar3 = this + 0x2b0;
  *(undefined ***)this = &PTR__initialize_classv_0010bb70;
  do {
    if (*(long *)pRVar3 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)pRVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)pRVar3;
        *(long *)pRVar3 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pRVar3 = pRVar3 + -8;
  } while (pRVar3 != this + 0x288);
  pRVar3 = this + 0x280;
  do {
    if (*(long *)(pRVar3 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(pRVar3 + 8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(pRVar3 + 8);
        *(undefined8 *)(pRVar3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pRVar3 = pRVar3 + -0x10;
  } while (pRVar3 != this + 0x230);
  Resource::~Resource((Resource *)this);
  return;
}



/* RDShaderSPIRV::~RDShaderSPIRV() */

void __thiscall RDShaderSPIRV::~RDShaderSPIRV(RDShaderSPIRV *this)

{
  long *plVar1;
  long lVar2;
  RDShaderSPIRV *pRVar3;
  RDShaderSPIRV *pRVar4;
  
  pRVar4 = this + 0x2b0;
  *(undefined ***)this = &PTR__initialize_classv_0010bb70;
  do {
    if (*(long *)pRVar4 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)pRVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)pRVar4;
        *(long *)pRVar4 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pRVar4 = pRVar4 + -8;
  } while (pRVar4 != this + 0x288);
  pRVar4 = this + 0x290;
  do {
    pRVar3 = pRVar4 + -0x10;
    if (*(long *)(pRVar4 + -8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(pRVar4 + -8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(pRVar4 + -8);
        *(undefined8 *)(pRVar4 + -8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pRVar4 = pRVar3;
  } while (this + 0x240 != pRVar3);
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2b8);
  return;
}



/* RDShaderSPIRV::set_stage_compile_error(RenderingDeviceCommons::ShaderStage, String const&) */

void __thiscall
RDShaderSPIRV::set_stage_compile_error(RDShaderSPIRV *this,uint param_2,CowData *param_3)

{
  if (4 < param_2) {
    _err_print_index_error
              ("set_stage_compile_error","servers/rendering/rendering_device_binds.h",0x13a,
               (ulong)param_2,5,"p_stage","RD::SHADER_STAGE_MAX","",false,false);
    return;
  }
  if (*(long *)(this + (long)(int)param_2 * 8 + 0x290) != *(long *)param_3) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + (ulong)param_2 * 8 + 0x290),param_3);
    return;
  }
  return;
}



/* RDShaderSPIRV::get_stage_compile_error(RenderingDeviceCommons::ShaderStage) const */

CowData<char32_t> *
RDShaderSPIRV::get_stage_compile_error(CowData<char32_t> *param_1,long param_2,uint param_3)

{
  if (param_3 < 5) {
    *(undefined8 *)param_1 = 0;
    if (*(long *)(param_2 + 0x290 + (long)(int)param_3 * 8) != 0) {
      CowData<char32_t>::_ref(param_1,(CowData *)(param_2 + 0x290 + (ulong)param_3 * 8));
    }
    return param_1;
  }
  _err_print_index_error
            ("get_stage_compile_error","servers/rendering/rendering_device_binds.h",0x13f,
             (ulong)param_3,5,"p_stage","RD::SHADER_STAGE_MAX","",false,false);
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* RDShaderSPIRV::get_class() const */

void RDShaderSPIRV::get_class(void)

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
LAB_00102ac8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102ac8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102ae6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102ae6:
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
LAB_00102ec8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102ec8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102ee5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102ee5:
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



/* RDShaderSPIRV::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall RDShaderSPIRV::_get_property_listv(RDShaderSPIRV *this,List *param_1,bool param_2)

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
  local_78 = "RDShaderSPIRV";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RDShaderSPIRV";
  local_98 = 0;
  local_70 = 0xd;
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
LAB_00103318:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103318;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103335;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103335:
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
  StringName::StringName((StringName *)&local_78,"RDShaderSPIRV",false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Ref<RDShaderSPIRV>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Ref<RDShaderSPIRV> > > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
::operator[](HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
  Object *pOVar5;
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
  undefined1 auVar37 [16];
  char cVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined8 *puVar44;
  long lVar45;
  void *pvVar46;
  ulong uVar47;
  int iVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  undefined8 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined8 *puVar57;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  long local_40;
  
  lVar45 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar40);
  if (lVar45 == 0) {
LAB_00103d90:
    uVar47 = uVar42 * 4;
    uVar52 = uVar42 * 8;
    uVar43 = Memory::alloc_static(uVar47,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    pvVar46 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar46;
    if ((int)uVar42 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar46 + uVar52)) && (pvVar46 < (void *)((long)pvVar3 + uVar47))
         ) {
        uVar47 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar47 * 4) = 0;
          *(undefined8 *)((long)pvVar46 + uVar47 * 8) = 0;
          uVar47 = uVar47 + 1;
        } while (uVar42 != uVar47);
        goto LAB_00103bd8;
      }
      memset(pvVar3,0,uVar47);
      memset(pvVar46,0,uVar52);
      iVar48 = *(int *)(this + 0x2c);
LAB_00103bdc:
      if (iVar48 != 0) {
LAB_00103be4:
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar47 = CONCAT44(0,uVar40);
        lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar41 = StringName::get_empty_hash();
        }
        else {
          uVar41 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar41 == 0) {
          uVar41 = 1;
        }
        uVar56 = 0;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = (ulong)uVar41 * lVar45;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar47;
        lVar51 = SUB168(auVar18 * auVar34,8);
        uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
        uVar55 = SUB164(auVar18 * auVar34,8);
        if (uVar54 != 0) {
          do {
            if ((uVar54 == uVar41) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar51 * 8) + 0x10) == *(long *)param_1))
            {
              puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              pOVar5 = (Object *)puVar44[3];
              if (pOVar5 != (Object *)0x0) {
                puVar44[3] = 0;
                cVar38 = RefCounted::unreference();
                if ((cVar38 != '\0') && (cVar38 = predelete_handler(pOVar5), cVar38 != '\0')) {
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                }
                puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              }
              goto LAB_001037ac;
            }
            uVar56 = uVar56 + 1;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = (ulong)(uVar55 + 1) * lVar45;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar47;
            lVar51 = SUB168(auVar19 * auVar35,8);
            uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
            uVar55 = SUB164(auVar19 * auVar35,8);
          } while ((uVar54 != 0) &&
                  (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar54 * lVar45, auVar36._8_8_ = 0,
                  auVar36._0_8_ = uVar47, auVar21._8_8_ = 0,
                  auVar21._0_8_ = (ulong)((uVar40 + uVar55) - SUB164(auVar20 * auVar36,8)) * lVar45,
                  auVar37._8_8_ = 0, auVar37._0_8_ = uVar47, uVar56 <= SUB164(auVar21 * auVar37,8)))
          ;
        }
        iVar48 = *(int *)(this + 0x2c);
      }
      goto LAB_001037df;
    }
    iVar48 = *(int *)(this + 0x2c);
    if (pvVar46 == (void *)0x0) goto LAB_001037df;
    if (iVar48 != 0) goto LAB_00103be4;
LAB_00103805:
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      puVar44 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001037ac;
    }
    uVar42 = (ulong)(uVar40 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar42 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    uVar52 = (ulong)uVar40;
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar46 = *(void **)(this + 8);
    uVar42 = uVar52 * 4;
    uVar47 = uVar52 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar47)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar52);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar47);
      }
    }
    if (uVar41 != 0) {
      uVar42 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar3 + uVar42 * 4);
        if (uVar40 != 0) {
          lVar45 = *(long *)(this + 0x10);
          uVar56 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar47 = CONCAT44(0,uVar54);
          lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar40 * lVar51;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar47;
          lVar49 = SUB168(auVar10 * auVar26,8);
          puVar1 = (uint *)(lVar45 + lVar49 * 4);
          iVar48 = SUB164(auVar10 * auVar26,8);
          uVar55 = *puVar1;
          uVar43 = *(undefined8 *)((long)pvVar46 + uVar42 * 8);
          while (uVar55 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar55 * lVar51;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar47;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar54 + iVar48) - SUB164(auVar11 * auVar27,8)) * lVar51;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar47;
            uVar39 = SUB164(auVar12 * auVar28,8);
            uVar53 = uVar43;
            if (uVar39 < uVar56) {
              *puVar1 = uVar40;
              puVar44 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar53 = *puVar44;
              *puVar44 = uVar43;
              uVar40 = uVar55;
              uVar56 = uVar39;
            }
            uVar56 = uVar56 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar48 + 1) * lVar51;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar47;
            lVar49 = SUB168(auVar13 * auVar29,8);
            puVar1 = (uint *)(lVar45 + lVar49 * 4);
            iVar48 = SUB164(auVar13 * auVar29,8);
            uVar43 = uVar53;
            uVar55 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar43;
          *puVar1 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar41 != uVar42);
      Memory::free_static(pvVar46,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar48 = *(int *)(this + 0x2c);
    if (iVar48 != 0) {
      lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar41 = StringName::get_empty_hash();
        lVar45 = *(long *)(this + 8);
      }
      else {
        uVar41 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar41 == 0) {
        uVar41 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar41 * lVar51;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar42;
      lVar49 = SUB168(auVar6 * auVar22,8);
      uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
      uVar55 = SUB164(auVar6 * auVar22,8);
      if (uVar54 != 0) {
        uVar56 = 0;
        do {
          if ((uVar41 == uVar54) &&
             (*(long *)(*(long *)(lVar45 + lVar49 * 8) + 0x10) == *(long *)param_1)) {
            puVar44 = *(undefined8 **)(lVar45 + (ulong)uVar55 * 8);
            goto LAB_001037ac;
          }
          uVar56 = uVar56 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar55 + 1) * lVar51;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar42;
          lVar49 = SUB168(auVar7 * auVar23,8);
          uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
          uVar55 = SUB164(auVar7 * auVar23,8);
        } while ((uVar54 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar54 * lVar51, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar42, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar55 + uVar40) - SUB164(auVar8 * auVar24,8)) * lVar51,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar42, uVar56 <= SUB164(auVar9 * auVar25,8)));
      }
      uVar42 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar45 == 0) goto LAB_00103d90;
LAB_00103bd8:
      iVar48 = *(int *)(this + 0x2c);
      goto LAB_00103bdc;
    }
LAB_001037df:
    if ((float)uVar42 * __LC12 < (float)(iVar48 + 1)) goto LAB_00103805;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = (Object *)0x0;
  puVar44 = (undefined8 *)operator_new(0x20,"");
  *puVar44 = 0;
  puVar44[1] = 0;
  StringName::StringName((StringName *)(puVar44 + 2),(StringName *)&local_58);
  puVar44[3] = 0;
  if (local_50 != (Object *)0x0) {
    puVar44[3] = local_50;
    cVar38 = RefCounted::reference();
    if (cVar38 == '\0') {
      puVar44[3] = 0;
    }
    if (((local_50 != (Object *)0x0) &&
        (cVar38 = RefCounted::unreference(), pOVar5 = local_50, cVar38 != '\0')) &&
       (cVar38 = predelete_handler(local_50), cVar38 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar45 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar44;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar45 == 0) goto LAB_00103d55;
LAB_00103ac8:
    uVar40 = *(uint *)(lVar45 + 0x20);
  }
  else {
    *puVar4 = puVar44;
    puVar44[1] = puVar4;
    lVar45 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar45 != 0) goto LAB_00103ac8;
LAB_00103d55:
    uVar40 = StringName::get_empty_hash();
  }
  lVar45 = *(long *)(this + 0x10);
  if (uVar40 == 0) {
    uVar40 = 1;
  }
  uVar42 = (ulong)uVar40;
  uVar55 = 0;
  uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar47 = CONCAT44(0,uVar41);
  lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar42 * lVar51;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar47;
  lVar50 = SUB168(auVar14 * auVar30,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar45 + lVar50 * 4);
  iVar48 = SUB164(auVar14 * auVar30,8);
  uVar54 = *puVar1;
  puVar4 = puVar44;
  while (uVar54 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar54 * lVar51;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar47;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((iVar48 + uVar41) - SUB164(auVar15 * auVar31,8)) * lVar51;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar47;
    uVar40 = SUB164(auVar16 * auVar32,8);
    puVar57 = puVar4;
    if (uVar40 < uVar55) {
      *puVar1 = (uint)uVar42;
      uVar42 = (ulong)uVar54;
      puVar2 = (undefined8 *)(lVar49 + lVar50 * 8);
      puVar57 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar55 = uVar40;
    }
    uVar40 = (uint)uVar42;
    uVar55 = uVar55 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar48 + 1) * lVar51;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar47;
    lVar50 = SUB168(auVar17 * auVar33,8);
    puVar1 = (uint *)(lVar45 + lVar50 * 4);
    iVar48 = SUB164(auVar17 * auVar33,8);
    puVar4 = puVar57;
    uVar54 = *puVar1;
  }
  *(undefined8 **)(lVar49 + lVar50 * 8) = puVar4;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001037ac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar44 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::operator[](StringName const&) */

CowData<char32_t> * __thiscall
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::operator[](HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
             *this,StringName *param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
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
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined8 *puVar43;
  void *pvVar44;
  ulong uVar45;
  long lVar46;
  int iVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  undefined8 *puVar52;
  undefined8 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  long in_FS_OFFSET;
  CowData<char32_t> *local_a8;
  long local_70;
  undefined1 local_68 [16];
  long local_58;
  long local_50 [2];
  long local_40;
  
  lVar46 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar39);
  if (lVar46 == 0) {
LAB_00104610:
    local_70 = 0;
    uVar45 = uVar41 * 4;
    uVar51 = uVar41 * 8;
    uVar42 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar44 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar41 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar44 + uVar51)) && (pvVar44 < (void *)((long)pvVar4 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar41 != uVar45);
      }
      else {
        memset(pvVar4,0,uVar45);
        memset(pvVar44,0,uVar51);
      }
LAB_00104041:
      iVar47 = *(int *)(this + 0x2c);
      if (iVar47 != 0) {
LAB_0010404d:
        uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar39);
        lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar40 = StringName::get_empty_hash();
        }
        else {
          uVar40 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar40 == 0) {
          uVar40 = 1;
        }
        uVar56 = 0;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar40 * lVar46;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar45;
        lVar49 = SUB168(auVar10 * auVar26,8);
        uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar55 = SUB164(auVar10 * auVar26,8);
        if (uVar54 != 0) {
          do {
            if ((uVar40 == uVar54) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              lVar46 = *(long *)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              if (*(long *)(lVar46 + 0x18) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar46 + 0x18),(CowData *)&local_70);
                lVar46 = *(long *)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              }
              goto LAB_00103fe8;
            }
            uVar56 = uVar56 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(uVar55 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            lVar49 = SUB168(auVar11 * auVar27,8);
            uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar55 = SUB164(auVar11 * auVar27,8);
          } while ((uVar54 != 0) &&
                  (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar54 * lVar46, auVar28._8_8_ = 0,
                  auVar28._0_8_ = uVar45, auVar13._8_8_ = 0,
                  auVar13._0_8_ = (ulong)((uVar39 + uVar55) - SUB164(auVar12 * auVar28,8)) * lVar46,
                  auVar29._8_8_ = 0, auVar29._0_8_ = uVar45, uVar56 <= SUB164(auVar13 * auVar29,8)))
          ;
        }
        iVar47 = *(int *)(this + 0x2c);
      }
      goto LAB_0010414c;
    }
    iVar47 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010414c;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010404d;
LAB_00104172:
    uVar39 = *(uint *)(this + 0x28);
    if (uVar39 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      lVar46 = 0;
LAB_00103fe8:
      local_a8 = (CowData<char32_t> *)(lVar46 + 0x18);
      goto LAB_00103ff1;
    }
    uVar41 = (ulong)(uVar39 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
    if (uVar39 + 1 < 2) {
      uVar41 = 2;
    }
    uVar39 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar51 = (ulong)uVar39;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar44 = *(void **)(this + 8);
    uVar41 = uVar51 * 4;
    uVar45 = uVar51 * 8;
    pvVar4 = *(void **)(this + 0x10);
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar39 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar51);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar40 != 0) {
      uVar41 = 0;
      do {
        uVar39 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar39 != 0) {
          lVar46 = *(long *)(this + 0x10);
          uVar56 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar54);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)uVar39 * lVar49;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar45;
          lVar48 = SUB168(auVar14 * auVar30,8);
          puVar2 = (uint *)(lVar46 + lVar48 * 4);
          iVar47 = SUB164(auVar14 * auVar30,8);
          uVar55 = *puVar2;
          uVar42 = *(undefined8 *)((long)pvVar44 + uVar41 * 8);
          while (uVar55 != 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar55 * lVar49;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar45;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)((uVar54 + iVar47) - SUB164(auVar15 * auVar31,8)) * lVar49;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar45;
            uVar38 = SUB164(auVar16 * auVar32,8);
            uVar53 = uVar42;
            if (uVar38 < uVar56) {
              *puVar2 = uVar39;
              puVar43 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar53 = *puVar43;
              *puVar43 = uVar42;
              uVar39 = uVar55;
              uVar56 = uVar38;
            }
            uVar56 = uVar56 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(iVar47 + 1) * lVar49;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar45;
            lVar48 = SUB168(auVar17 * auVar33,8);
            puVar2 = (uint *)(lVar46 + lVar48 * 4);
            iVar47 = SUB164(auVar17 * auVar33,8);
            uVar42 = uVar53;
            uVar55 = *puVar2;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar42;
          *puVar2 = uVar39;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar40 != uVar41);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar40 = StringName::get_empty_hash();
        lVar46 = *(long *)(this + 8);
      }
      else {
        uVar40 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar40 == 0) {
        uVar40 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar40 * lVar49;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar41;
      lVar48 = SUB168(auVar6 * auVar22,8);
      uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
      uVar55 = SUB164(auVar6 * auVar22,8);
      if (uVar54 != 0) {
        uVar56 = 0;
        do {
          if ((uVar54 == uVar40) &&
             (*(long *)(*(long *)(lVar46 + lVar48 * 8) + 0x10) == *(long *)param_1)) {
            lVar46 = *(long *)(lVar46 + (ulong)uVar55 * 8);
            goto LAB_00103fe8;
          }
          uVar56 = uVar56 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar55 + 1) * lVar49;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar41;
          lVar48 = SUB168(auVar7 * auVar23,8);
          uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
          uVar55 = SUB164(auVar7 * auVar23,8);
        } while ((uVar54 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar54 * lVar49, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar41, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar55 + uVar39) - SUB164(auVar8 * auVar24,8)) * lVar49,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar41, uVar56 <= SUB164(auVar9 * auVar25,8)));
      }
      local_70 = 0;
      uVar41 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar46 == 0) goto LAB_00104610;
      goto LAB_00104041;
    }
    local_70 = 0;
    iVar47 = 0;
LAB_0010414c:
    if ((float)uVar41 * __LC12 < (float)(iVar47 + 1)) goto LAB_00104172;
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50[0] = 0;
  puVar43 = (undefined8 *)operator_new(0x20,"");
  *puVar43 = local_68._0_8_;
  puVar43[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar43 + 2),(StringName *)&local_58);
  puVar43[3] = 0;
  local_a8 = (CowData<char32_t> *)(puVar43 + 3);
  if ((local_50[0] == 0) ||
     (CowData<char32_t>::_ref(local_a8,(CowData *)local_50), lVar46 = local_50[0], local_50[0] == 0)
     ) {
    lVar49 = 0;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_50[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    lVar49 = local_70;
    if (*plVar1 == 0) {
      local_50[0] = 0;
      Memory::free_static((void *)(lVar46 + -0x10),false);
      lVar49 = local_70;
    }
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar52 = *(undefined8 **)(this + 0x20);
  if (puVar52 == (undefined8 *)0x0) {
    lVar46 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar43;
    *(undefined8 **)(this + 0x20) = puVar43;
    if (lVar46 == 0) goto LAB_001045c5;
LAB_00104451:
    uVar39 = *(uint *)(lVar46 + 0x20);
  }
  else {
    *puVar52 = puVar43;
    puVar43[1] = puVar52;
    lVar46 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar43;
    if (lVar46 != 0) goto LAB_00104451;
LAB_001045c5:
    uVar39 = StringName::get_empty_hash();
  }
  lVar46 = *(long *)(this + 0x10);
  if (uVar39 == 0) {
    uVar39 = 1;
  }
  uVar41 = (ulong)uVar39;
  uVar55 = 0;
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar40);
  lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar41 * lVar48;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar45;
  lVar50 = SUB168(auVar18 * auVar34,8);
  lVar5 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar46 + lVar50 * 4);
  iVar47 = SUB164(auVar18 * auVar34,8);
  uVar54 = *puVar2;
  while (uVar54 != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)uVar54 * lVar48;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar45;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)((uVar40 + iVar47) - SUB164(auVar19 * auVar35,8)) * lVar48;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar45;
    uVar39 = SUB164(auVar20 * auVar36,8);
    puVar52 = puVar43;
    if (uVar39 < uVar55) {
      *puVar2 = (uint)uVar41;
      uVar41 = (ulong)uVar54;
      puVar3 = (undefined8 *)(lVar5 + lVar50 * 8);
      puVar52 = (undefined8 *)*puVar3;
      *puVar3 = puVar43;
      uVar55 = uVar39;
    }
    uVar39 = (uint)uVar41;
    uVar55 = uVar55 + 1;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)(iVar47 + 1) * lVar48;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar45;
    lVar50 = SUB168(auVar21 * auVar37,8);
    puVar2 = (uint *)(lVar46 + lVar50 * 4);
    iVar47 = SUB164(auVar21 * auVar37,8);
    puVar43 = puVar52;
    uVar54 = *puVar2;
  }
  *(undefined8 **)(lVar5 + lVar50 * 8) = puVar43;
  *puVar2 = uVar39;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (lVar49 != 0) {
    LOCK();
    plVar1 = (long *)(lVar49 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
    }
  }
LAB_00103ff1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* RDShaderSPIRV::is_class(String const&) const */

undefined8 __thiscall RDShaderSPIRV::is_class(RDShaderSPIRV *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001047ef;
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
LAB_001047ef:
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
    if (cVar6 != '\0') goto LAB_001048a3;
  }
  cVar6 = String::operator==(param_1,"RDShaderSPIRV");
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
              if (lVar5 == 0) goto LAB_001049eb;
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
LAB_001049eb:
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
      if (cVar6 != '\0') goto LAB_001048a3;
    }
    cVar6 = String::operator==(param_1,"Resource");
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
                if (lVar5 == 0) goto LAB_00104acb;
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
LAB_00104acb:
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
        if (cVar6 != '\0') goto LAB_001048a3;
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
              if (*(long *)(lVar4 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
              }
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_60);
            }
          }
          cVar6 = String::operator==(param_1,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (cVar6 != '\0') goto LAB_001048a3;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_00104bbd;
      }
    }
  }
LAB_001048a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104bbd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RDShaderSPIRV, RenderingDeviceCommons::ShaderStage,
   Vector<unsigned char> const&>(void (RDShaderSPIRV::*)(RenderingDeviceCommons::ShaderStage,
   Vector<unsigned char> const&)) */

MethodBind *
create_method_bind<RDShaderSPIRV,RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>
          (_func_void_ShaderStage_Vector_ptr *param_1)

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
  *(_func_void_ShaderStage_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010be08;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "RDShaderSPIRV";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<RDShaderSPIRV, Vector<unsigned char>,
   RenderingDeviceCommons::ShaderStage>(Vector<unsigned char>
   (RDShaderSPIRV::*)(RenderingDeviceCommons::ShaderStage) const) */

MethodBind *
create_method_bind<RDShaderSPIRV,Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage>
          (_func_Vector_ShaderStage *param_1)

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
  *(_func_Vector_ShaderStage **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010be68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RDShaderSPIRV";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<RDShaderSPIRV, RenderingDeviceCommons::ShaderStage, String
   const&>(void (RDShaderSPIRV::*)(RenderingDeviceCommons::ShaderStage, String const&)) */

MethodBind *
create_method_bind<RDShaderSPIRV,RenderingDeviceCommons::ShaderStage,String_const&>
          (_func_void_ShaderStage_String_ptr *param_1)

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
  *(_func_void_ShaderStage_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010bd48;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "RDShaderSPIRV";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<RDShaderSPIRV, String, RenderingDeviceCommons::ShaderStage>(String
   (RDShaderSPIRV::*)(RenderingDeviceCommons::ShaderStage) const) */

MethodBind *
create_method_bind<RDShaderSPIRV,String,RenderingDeviceCommons::ShaderStage>
          (_func_String_ShaderStage *param_1)

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
  *(_func_String_ShaderStage **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010bda8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RDShaderSPIRV";
  local_30 = 0xd;
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



/* RDShaderSPIRV::_bind_methods() */

void RDShaderSPIRV::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  MethodBind *pMVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long in_FS_OFFSET;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
  long local_c0;
  long *local_b8;
  int local_b0;
  long local_a8;
  undefined4 local_a0;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar4 = PTR__LC19_0010bee8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_78 = PTR__LC19_0010bee8;
  pcStack_70 = "bytecode";
  auStack_50._8_8_ = auStack_50._0_8_;
  auStack_50._0_8_ = &pcStack_70;
  uVar6 = (uint)&local_58;
  local_58 = &local_78;
  D_METHODP((char *)&local_c8,(char ***)"set_stage_bytecode",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<RDShaderSPIRV,RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>
                     (set_stage_bytecode);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar8 = local_b8 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_b8 == (long *)0x0) goto LAB_001077c2;
      lVar2 = local_b8[-1];
      lVar7 = 0;
      local_b8 = (long *)0x0;
      plVar8 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "stage";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_c8,(char ***)"get_stage_bytecode",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<RDShaderSPIRV,Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage>
                     (get_stage_bytecode);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar8 = local_b8 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_b8 == (long *)0x0) goto LAB_001077c2;
      lVar2 = local_b8[-1];
      lVar7 = 0;
      local_b8 = (long *)0x0;
      plVar8 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = 0;
  auStack_50._0_8_ = &pcStack_90;
  local_98 = puVar4;
  pcStack_90 = "compile_error";
  local_58 = &local_98;
  D_METHODP((char *)&local_c8,(char ***)"set_stage_compile_error",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<RDShaderSPIRV,RenderingDeviceCommons::ShaderStage,String_const&>
                     (set_stage_compile_error);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar8 = local_b8 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_b8 == (long *)0x0) goto LAB_001077c2;
      lVar2 = local_b8[-1];
      lVar7 = 0;
      local_b8 = (long *)0x0;
      plVar8 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "stage";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_c8,(char ***)"get_stage_compile_error",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<RDShaderSPIRV,String,RenderingDeviceCommons::ShaderStage>
                     (get_stage_compile_error);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar8 = local_b8 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_b8 == (long *)0x0) {
LAB_001077c2:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_b8[-1];
      lVar7 = 0;
      local_b8 = (long *)0x0;
      plVar8 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  local_d8 = (char *)0x0;
  local_c8 = "bytecode_";
  local_c0 = 9;
  String::parse_latin1((StrRange *)&local_d8);
  local_c8 = "Bytecode";
  local_e0 = 0;
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_e0);
  local_c8 = "RDShaderSPIRV";
  local_e8 = 0;
  local_c0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_e8,false);
  ClassDB::add_property_group((StringName *)&local_c8,(String *)&local_e0,(String *)&local_d8,0);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "bytecode_vertex";
  local_c0 = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,0x1d);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 == 0) {
LAB_00105973:
    local_a0 = 6;
    StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 6;
    if (local_b0 != 0x11) goto LAB_00105973;
    StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
    if (local_b8 == (long *)local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_b8 = (long *)local_d8;
    }
  }
  local_108 = 0;
  local_d8 = "RDShaderSPIRV";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,0);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
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
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((((StringName::configured != '\0') &&
       ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_e0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "bytecode_fragment";
  local_c0 = 0x11;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,0x1d);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 == 0) {
LAB_00105bfb:
    local_a0 = 6;
    StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 6;
    if (local_b0 != 0x11) goto LAB_00105bfb;
    StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
    if (local_b8 == (long *)local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_b8 = (long *)local_d8;
    }
  }
  local_108 = 0;
  local_d8 = "RDShaderSPIRV";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,1);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (((StringName::configured != '\0') &&
      ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_e0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "bytecode_tesselation_control";
  local_c0 = 0x1c;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,0x1d);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 == 0) {
LAB_00105e73:
    local_a0 = 6;
    StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 6;
    if (local_b0 != 0x11) goto LAB_00105e73;
    StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
    if (local_b8 == (long *)local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_b8 = (long *)local_d8;
    }
  }
  local_108 = 0;
  local_d8 = "RDShaderSPIRV";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,2);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((((StringName::configured != '\0') &&
       ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_e0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "bytecode_tesselation_evaluation";
  local_c0 = 0x1f;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,0x1d);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 == 0) {
LAB_001060fb:
    local_a0 = 6;
    StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 6;
    if (local_b0 != 0x11) goto LAB_001060fb;
    StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
    if (local_b8 == (long *)local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_b8 = (long *)local_d8;
    }
  }
  local_108 = 0;
  local_d8 = "RDShaderSPIRV";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,3);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
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
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_f8;
  if (local_f8 != 0) {
    LOCK();
    plVar1 = (long *)(local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_e0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "bytecode_compute";
  local_c0 = 0x10;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,0x1d);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 == 0) {
LAB_0010638b:
    local_a0 = 6;
    StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 6;
    if (local_b0 != 0x11) goto LAB_0010638b;
    StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
    if (local_b8 == (long *)local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_b8 = (long *)local_d8;
    }
  }
  local_108 = 0;
  local_d8 = "RDShaderSPIRV";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,4);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((((StringName::configured != '\0') &&
       ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_e0 != 0)
     ) {
    StringName::unref();
  }
  local_d8 = (char *)0x0;
  local_c8 = "compile_error_";
  local_c0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  local_c8 = "Compile Error";
  local_e0 = 0;
  local_c0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  local_c8 = "RDShaderSPIRV";
  local_e8 = 0;
  local_c0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_e8,false);
  ClassDB::add_property_group((StringName *)&local_c8,(String *)&local_e0,(String *)&local_d8,0);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "compile_error_vertex";
  local_c0 = 0x14;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,4);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 == 0) {
LAB_001066cb:
    local_a0 = 6;
    StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 6;
    if (local_b0 != 0x11) goto LAB_001066cb;
    StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
    if (local_b8 == (long *)local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_b8 = (long *)local_d8;
    }
  }
  local_108 = 0;
  local_d8 = "RDShaderSPIRV";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,0);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  lVar2 = local_f8;
  if (local_f8 != 0) {
    LOCK();
    plVar1 = (long *)(local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_e0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "compile_error_fragment";
  local_c0 = 0x16;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,4);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 == 0) {
LAB_0010694b:
    local_a0 = 6;
    StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 6;
    if (local_b0 != 0x11) goto LAB_0010694b;
    StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
    if (local_b8 == (long *)local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_b8 = (long *)local_d8;
    }
  }
  local_108 = 0;
  local_d8 = "RDShaderSPIRV";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,1);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((((StringName::configured != '\0') &&
       ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_e0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "compile_error_tesselation_control";
  local_c0 = 0x21;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,4);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 == 0) {
LAB_00106bc3:
    local_a0 = 6;
    StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 6;
    if (local_b0 != 0x11) goto LAB_00106bc3;
    StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
    if (local_b8 == (long *)local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_b8 = (long *)local_d8;
    }
  }
  local_108 = 0;
  local_d8 = "RDShaderSPIRV";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,2);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
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
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (((StringName::configured != '\0') &&
      ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_e0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "compile_error_tesselation_evaluation";
  local_c0 = 0x24;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,4);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 == 0) {
LAB_00106e4b:
    local_a0 = 6;
    StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 6;
    if (local_b0 != 0x11) goto LAB_00106e4b;
    StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
    if (local_b8 == (long *)local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_b8 = (long *)local_d8;
    }
  }
  local_108 = 0;
  local_d8 = "RDShaderSPIRV";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,3);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((((StringName::configured != '\0') &&
       ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_e0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "compile_error_compute";
  local_c0 = 0x15;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,4);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 6;
    if (local_b0 == 0x11) {
      StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
      if (local_b8 == (long *)local_d8) {
        if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_b8 = (long *)local_d8;
      }
      goto LAB_001070d5;
    }
  }
  local_a0 = 6;
  StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
LAB_001070d5:
  local_108 = 0;
  local_d8 = "RDShaderSPIRV";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,4);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
    StringName::unref();
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((((StringName::configured != '\0') &&
       ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_e0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RDShaderSPIRV::_initialize_classv() */

void RDShaderSPIRV::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
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
        if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
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
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RDShaderSPIRV";
    local_70 = 0;
    local_50 = 0xd;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* WARNING: Removing unreachable block (ram,0x00108338) */
/* WARNING: Removing unreachable block (ram,0x00108472) */
/* WARNING: Removing unreachable block (ram,0x00108600) */
/* WARNING: Removing unreachable block (ram,0x0010847e) */
/* WARNING: Removing unreachable block (ram,0x00108488) */
/* WARNING: Removing unreachable block (ram,0x001085e0) */
/* WARNING: Removing unreachable block (ram,0x00108494) */
/* WARNING: Removing unreachable block (ram,0x0010849e) */
/* WARNING: Removing unreachable block (ram,0x001085c0) */
/* WARNING: Removing unreachable block (ram,0x001084aa) */
/* WARNING: Removing unreachable block (ram,0x001084b4) */
/* WARNING: Removing unreachable block (ram,0x001085a0) */
/* WARNING: Removing unreachable block (ram,0x001084c0) */
/* WARNING: Removing unreachable block (ram,0x001084ca) */
/* WARNING: Removing unreachable block (ram,0x00108580) */
/* WARNING: Removing unreachable block (ram,0x001084d6) */
/* WARNING: Removing unreachable block (ram,0x001084e0) */
/* WARNING: Removing unreachable block (ram,0x00108560) */
/* WARNING: Removing unreachable block (ram,0x001084e8) */
/* WARNING: Removing unreachable block (ram,0x00108506) */
/* WARNING: Removing unreachable block (ram,0x00108512) */
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



/* MethodBindTRC<Vector<unsigned char>,
   RenderingDeviceCommons::ShaderStage>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage>::validated_call
          (MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001087b1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<unsigned_char>::_ref
              ((CowData<unsigned_char> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar4 = (long *)(local_40[0] + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_001087b1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<unsigned char>, RenderingDeviceCommons::ShaderStage>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage>::ptrcall
          (MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage> *this,
          Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108a1c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar4 = (long *)(local_40[0] + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00108a1c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, Vector<unsigned char>
   const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108df5;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(*(long *)(param_3 + 8) + 8) + 0x10);
    return;
  }
LAB_00108df5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, Vector<unsigned char> const&>::ptrcall(Object*,
   void const**, void*) const */

void MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109015;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00108e5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00109015:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, RenderingDeviceCommons::ShaderStage>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<String,RenderingDeviceCommons::ShaderStage>::validated_call
          (MethodBindTRC<String,RenderingDeviceCommons::ShaderStage> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001090bb;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  pcVar2 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar4 = (long *)(local_48 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
LAB_001090bb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, RenderingDeviceCommons::ShaderStage>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<String,RenderingDeviceCommons::ShaderStage>::ptrcall
          (MethodBindTRC<String,RenderingDeviceCommons::ShaderStage> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109329;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  pcVar2 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar4 = (long *)(local_48 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
LAB_00109329:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, String const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109705;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_00109705:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, String const&>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109925;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010976e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00109925:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<unsigned char>, RenderingDeviceCommons::ShaderStage>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_58 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar11 = (long *)(local_60 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109b20;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00109b60;
LAB_00109b50:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00109b60:
        uVar7 = 4;
        goto LAB_00109b15;
      }
      if (in_R8D == 1) goto LAB_00109b50;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC91;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(pVVar12);
    (*(code *)pVVar13)((Vector *)&local_58,(Variant *)((long)plVar11 + (long)pVVar1),
                       uVar8 & 0xffffffff);
    Variant::Variant((Variant *)local_48,(Vector *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar2 = local_50;
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
  }
  else {
    uVar7 = 3;
LAB_00109b15:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00109b20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, RenderingDeviceCommons::ShaderStage>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<String,RenderingDeviceCommons::ShaderStage>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
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
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x267,
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
      goto LAB_00109ef0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00109f40;
LAB_00109f30:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00109f40:
        uVar7 = 4;
        goto LAB_00109ee5;
      }
      if (in_R8D == 1) goto LAB_00109f30;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC91;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(pVVar12);
    (*(code *)pVVar13)((CowData<char32_t> *)&local_68,(Variant *)((long)plVar11 + (long)pVVar1),
                       uVar8 & 0xffffffff);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00109ee5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00109ef0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, RenderingDeviceCommons::ShaderStage,
   Vector<unsigned char> const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(RenderingDeviceCommons::ShaderStage, Vector<unsigned char> const&),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>
               (__UnexistingClass *param_1,_func_void_ShaderStage_Vector_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_58 [8];
  long local_50;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_0010a2e8;
      this = (Variant *)*plVar9;
LAB_0010a33d:
      puVar13 = (undefined4 *)plVar9[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0010a2e8:
        uVar7 = 4;
        goto LAB_0010a2ed;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar2 <= lVar10) goto LAB_0010a358;
        this = (Variant *)(lVar1 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0010a33d;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar10) {
LAB_0010a358:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined4 *)(lVar1 + lVar10 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_ShaderStage_Vector_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar13,0x1d);
    uVar4 = _LC93;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Vector(aVStack_58);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC91;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(this);
    (*param_2)((char)(param_1 + (long)param_3),(Vector *)(uVar8 & 0xffffffff));
    lVar1 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar9 = (long *)(local_50 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_0010a2ed:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, Vector<unsigned char> const&>::call(Object*,
   Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010a496;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>
            (p_Var4,(_func_void_ShaderStage_Vector_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010a496:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, RenderingDeviceCommons::ShaderStage, String
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(RenderingDeviceCommons::ShaderStage,
   String const&), Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,RenderingDeviceCommons::ShaderStage,String_const&>
               (__UnexistingClass *param_1,_func_void_ShaderStage_String_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long in_stack_00000008;
  long local_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_0010a808;
      this = (Variant *)*plVar9;
LAB_0010a85d:
      puVar13 = (undefined4 *)plVar9[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0010a808:
        uVar7 = 4;
        goto LAB_0010a80d;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar2 <= lVar10) goto LAB_0010a878;
        this = (Variant *)(lVar1 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0010a85d;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar10) {
LAB_0010a878:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined4 *)(lVar1 + lVar10 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_ShaderStage_String_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar13,4);
    uVar4 = _LC95;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC91;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(this);
    (*param_2)((char)(param_1 + (long)param_3),(String *)(uVar8 & 0xffffffff));
    lVar1 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar9 = (long *)(local_48 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_0010a80d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, String const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010a916;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,RenderingDeviceCommons::ShaderStage,String_const&>
            (p_Var4,(_func_void_ShaderStage_String_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010a916:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<RenderingDeviceCommons::ShaderStage>(int, int&,
   PropertyInfo&) */

void call_get_argument_type_info_helper<RenderingDeviceCommons::ShaderStage>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *param_2;
  if (iVar6 == param_1) {
    local_a0 = 0;
    local_78 = "RenderingDevice::ShaderStage";
    local_70._0_8_ = 0x1c;
    String::parse_latin1((StrRange *)&local_a0);
    String::split((char *)&local_88,SUB81((StrRange *)&local_a0,0),0x10ab44);
    if ((local_80 == 0) || (*(long *)(local_80 + -8) < 3)) {
      local_90 = 0;
      local_78 = ".";
      local_70._0_8_ = 1;
      String::parse_latin1((StrRange *)&local_90);
      String::join((Vector *)&local_98);
      lVar8 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    else {
      local_90 = 0;
      local_78 = ".";
      local_70._0_8_ = 1;
      String::parse_latin1((StrRange *)&local_90);
      if (local_80 == 0) {
        lVar7 = -2;
        lVar8 = 0;
LAB_0010af08:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar8 = *(long *)(local_80 + -8);
      lVar7 = lVar8 + -2;
      if (lVar7 < 0) goto LAB_0010af08;
      String::operator+((String *)&local_78,(String *)(local_80 + lVar7 * 8));
      String::operator+((String *)&local_98,(String *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    }
    CowData<String>::_unref((CowData<String> *)&local_80);
    StringName::StringName((StringName *)&local_88,(String *)&local_98,false);
    local_78 = (char *)0x2;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0x10006;
    local_70 = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    lVar8 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    lVar8 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      uVar5 = local_70._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_70._8_8_;
      local_70 = auVar3 << 0x40;
      *(undefined8 *)(param_3 + 8) = uVar5;
    }
    if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
      StringName::unref();
      uVar5 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8 *)(param_3 + 0x10) = uVar5;
    }
    lVar8 = local_58;
    *(undefined4 *)(param_3 + 0x18) = (undefined4)local_60;
    if (*(long *)(param_3 + 0x20) == local_58) {
      *(undefined4 *)(param_3 + 0x28) = local_50;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      *(long *)(param_3 + 0x20) = local_58;
      *(undefined4 *)(param_3 + 0x28) = local_50;
    }
    if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
      StringName::unref();
    }
    uVar5 = local_70._0_8_;
    if (local_70._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_70._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_70._8_8_;
        local_70 = auVar4 << 0x40;
        Memory::free_static((void *)(uVar5 + -0x10),false);
      }
    }
    iVar6 = *param_2;
  }
  *param_2 = iVar6 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<unsigned char>,
   RenderingDeviceCommons::ShaderStage>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage>::_gen_argument_type_info
          (int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<RenderingDeviceCommons::ShaderStage>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010afe5;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x1d;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010b0f7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010b0f7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010afe5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, RenderingDeviceCommons::ShaderStage>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<String,RenderingDeviceCommons::ShaderStage>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<RenderingDeviceCommons::ShaderStage>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010b1e5;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 4;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010b2f7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010b2f7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010b1e5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, String const&>::_gen_argument_type_info(int)
   const */

PropertyInfo *
MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar8;
  long in_FS_OFFSET;
  int local_74;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar8 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar8 = 0;
  *(undefined4 *)(pPVar8 + 0x18) = 0;
  *(undefined8 *)(pPVar8 + 0x20) = 0;
  *(undefined4 *)(pPVar8 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar8 + 8) = (undefined1  [16])0x0;
  local_74 = 0;
  call_get_argument_type_info_helper<RenderingDeviceCommons::ShaderStage>(in_EDX,&local_74,pPVar8);
  if (in_EDX != local_74) goto LAB_0010b3b2;
  local_68 = 0;
  local_58 = &_LC5;
  local_70 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_50._8_8_;
  local_50 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,4);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_0010b4a0:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_0010b4a0;
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
  *(undefined4 *)pPVar8 = local_58._0_4_;
  lVar2 = *(long *)(pPVar8 + 8);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(pPVar8 + 8);
        *(undefined8 *)(pPVar8 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(pPVar8 + 8) = local_50._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
  }
  if (*(long *)(pPVar8 + 0x10) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(pPVar8 + 0x10) = uVar6;
  }
  lVar7 = local_38;
  *(int *)(pPVar8 + 0x18) = local_40;
  lVar2 = *(long *)(pPVar8 + 0x20);
  if (lVar2 == local_38) {
    *(undefined4 *)(pPVar8 + 0x28) = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
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
        lVar2 = *(long *)(pPVar8 + 0x20);
        *(undefined8 *)(pPVar8 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(pPVar8 + 0x20) = local_38;
    *(undefined4 *)(pPVar8 + 0x28) = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_0010b3b2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar8;
}



/* MethodBindT<RenderingDeviceCommons::ShaderStage, Vector<unsigned char>
   const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>::
_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar8;
  long in_FS_OFFSET;
  int local_74;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar8 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar8 = 0;
  *(undefined4 *)(pPVar8 + 0x18) = 0;
  *(undefined8 *)(pPVar8 + 0x20) = 0;
  *(undefined4 *)(pPVar8 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar8 + 8) = (undefined1  [16])0x0;
  local_74 = 0;
  call_get_argument_type_info_helper<RenderingDeviceCommons::ShaderStage>(in_EDX,&local_74,pPVar8);
  if (in_EDX != local_74) goto LAB_0010b6e2;
  local_68 = 0;
  local_58 = &_LC5;
  local_70 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_50._8_8_;
  local_50 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x1d);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_0010b7d0:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_0010b7d0;
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
  *(undefined4 *)pPVar8 = local_58._0_4_;
  lVar2 = *(long *)(pPVar8 + 8);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(pPVar8 + 8);
        *(undefined8 *)(pPVar8 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(pPVar8 + 8) = local_50._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
  }
  if (*(long *)(pPVar8 + 0x10) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(pPVar8 + 0x10) = uVar6;
  }
  lVar7 = local_38;
  *(int *)(pPVar8 + 0x18) = local_40;
  lVar2 = *(long *)(pPVar8 + 0x20);
  if (lVar2 == local_38) {
    *(undefined4 *)(pPVar8 + 0x28) = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
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
        lVar2 = *(long *)(pPVar8 + 0x20);
        *(undefined8 *)(pPVar8 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(pPVar8 + 0x20) = local_38;
    *(undefined4 *)(pPVar8 + 0x28) = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_0010b6e2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar8;
}



/* WARNING: Control flow encountered bad instruction data */
/* RDShaderSPIRV::~RDShaderSPIRV() */

void __thiscall RDShaderSPIRV::~RDShaderSPIRV(RDShaderSPIRV *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String, RenderingDeviceCommons::ShaderStage>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,RenderingDeviceCommons::ShaderStage>::~MethodBindTRC
          (MethodBindTRC<String,RenderingDeviceCommons::ShaderStage> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<RenderingDeviceCommons::ShaderStage, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&>::~MethodBindT
          (MethodBindT<RenderingDeviceCommons::ShaderStage,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<unsigned char>, RenderingDeviceCommons::ShaderStage>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage>::~MethodBindTRC
          (MethodBindTRC<Vector<unsigned_char>,RenderingDeviceCommons::ShaderStage> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<RenderingDeviceCommons::ShaderStage, Vector<unsigned char> const&>::~MethodBindT() */

void __thiscall
MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&>::~MethodBindT
          (MethodBindT<RenderingDeviceCommons::ShaderStage,Vector<unsigned_char>const&> *this)

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


