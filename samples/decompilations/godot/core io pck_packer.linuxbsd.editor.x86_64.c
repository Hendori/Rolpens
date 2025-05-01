
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PCKPacker::flush(bool) */

undefined4 __thiscall PCKPacker::flush(PCKPacker *this,bool param_1)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  Object *pOVar9;
  long *plVar10;
  int iVar11;
  undefined4 uVar12;
  Object *pOVar13;
  ulong uVar14;
  ulong uVar15;
  Object *pOVar16;
  int iVar17;
  Object *pOVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long in_FS_OFFSET;
  bool bVar23;
  Object *local_c0;
  Object *local_98;
  Object *local_90;
  long local_88;
  long local_80;
  long local_78;
  Object *local_70;
  char *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 0x180) == (long *)0x0) {
    uVar12 = 0x1f;
    _err_print_error("flush","core/io/pck_packer.cpp",0xaf,
                     "Condition \"file.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",
                     "File must be opened before use.",0,0);
    goto LAB_00100762;
  }
  iVar11 = 0x10;
  uVar5 = (**(code **)(**(long **)(this + 0x180) + 0x1c8))();
  (**(code **)(**(long **)(this + 0x180) + 0x280))();
  do {
    (**(code **)(**(long **)(this + 0x180) + 0x278))();
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  (**(code **)(**(long **)(this + 0x180) + 0x278))();
  pOVar16 = *(Object **)(this + 0x180);
  local_98 = (Object *)0x0;
  if ((pOVar16 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    pOVar16 = (Object *)0x0;
  }
  pOVar18 = pOVar16;
  if (this[0x1a8] == (PCKPacker)0x0) {
LAB_001002e4:
    lVar22 = *(long *)(this + 0x1b8);
    if (lVar22 != 0) {
LAB_001002f4:
      lVar19 = 0;
      lVar20 = 0;
      do {
        pOVar13 = local_98;
        if (*(long *)(lVar22 + -8) <= lVar20) break;
        String::utf8();
        if ((local_68 == (char *)0x0) || ((int)*(undefined8 *)(local_68 + -8) == 0)) {
          iVar11 = 0;
          lVar22 = 0;
LAB_001004fd:
          (**(code **)(*(long *)pOVar18 + 0x278))(pOVar18,iVar11);
          pcVar2 = *(code **)(*(long *)pOVar18 + 0x2d0);
          uVar6 = CharString::get_data();
          (*pcVar2)(pOVar18,uVar6,lVar22);
        }
        else {
          iVar11 = (int)*(undefined8 *)(local_68 + -8) + -1;
          lVar22 = (long)iVar11;
          if (iVar11 % 4 < 1) goto LAB_001004fd;
          iVar17 = 4 - iVar11 % 4;
          (**(code **)(*(long *)pOVar18 + 0x278))(pOVar18,iVar11 + iVar17);
          pcVar2 = *(code **)(*(long *)pOVar18 + 0x2d0);
          uVar6 = CharString::get_data();
          iVar11 = 0;
          (*pcVar2)(pOVar18,uVar6,lVar22);
          do {
            iVar11 = iVar11 + 1;
            (**(code **)(*(long *)pOVar18 + 0x268))(pOVar18,0);
          } while (iVar11 != iVar17);
        }
        lVar22 = *(long *)(this + 0x1b8);
        if (lVar22 == 0) {
LAB_00100530:
          uVar15 = 0;
          goto LAB_00100551;
        }
        uVar15 = *(ulong *)(lVar22 + -8);
        if ((long)uVar15 <= lVar20) goto LAB_00100551;
        (**(code **)(*(long *)pOVar18 + 0x280))(pOVar18,*(undefined8 *)(lVar22 + 0x10 + lVar19));
        lVar22 = *(long *)(this + 0x1b8);
        if (lVar22 == 0) goto LAB_00100530;
        uVar15 = *(ulong *)(lVar22 + -8);
        if ((long)uVar15 <= lVar20) goto LAB_00100551;
        (**(code **)(*(long *)pOVar18 + 0x280))(pOVar18,*(undefined8 *)(lVar22 + 0x18 + lVar19));
        lVar22 = *(long *)(this + 0x1b8);
        if (lVar22 == 0) goto LAB_00100530;
        uVar15 = *(ulong *)(lVar22 + -8);
        if ((long)uVar15 <= lVar20) goto LAB_00100551;
        (**(code **)(*(long *)pOVar18 + 0x2d0))
                  (pOVar18,*(undefined8 *)(lVar22 + 0x30 + lVar19),0x10);
        if (*(long *)(this + 0x1b8) == 0) goto LAB_00100530;
        uVar15 = *(ulong *)(*(long *)(this + 0x1b8) + -8);
        if ((long)uVar15 <= lVar20) goto LAB_00100551;
        (**(code **)(*(long *)pOVar18 + 0x278))(pOVar18);
        pcVar3 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar10 = (long *)(local_68 + -0x10);
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (*plVar10 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar22 = *(long *)(this + 0x1b8);
        lVar20 = lVar20 + 1;
        lVar19 = lVar19 + 0x38;
        pOVar13 = local_98;
      } while (lVar22 != 0);
LAB_001004e2:
      pOVar16 = pOVar18;
      pOVar9 = pOVar18;
      if (pOVar13 != (Object *)0x0) {
LAB_001007a4:
        if (pOVar9 != (Object *)0x0) {
LAB_001007a9:
          cVar4 = RefCounted::unreference();
          if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
          }
        }
LAB_001007b9:
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar13), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
        }
        local_98 = (Object *)0x0;
        pOVar16 = (Object *)0x0;
      }
    }
    iVar11 = (**(code **)(**(long **)(this + 0x180) + 0x1c8))();
    iVar11 = iVar11 % *(int *)(this + 0x188);
    if ((0 < iVar11) && (iVar11 = *(int *)(this + 0x188) - iVar11, 0 < iVar11)) {
      iVar17 = 0;
      do {
        iVar17 = iVar17 + 1;
        (**(code **)(**(long **)(this + 0x180) + 0x268))(*(long **)(this + 0x180),0);
      } while (iVar17 != iVar11);
    }
    uVar6 = (**(code **)(**(long **)(this + 0x180) + 0x1c8))();
    (**(code **)(**(long **)(this + 0x180) + 0x1b8))(*(long **)(this + 0x180),uVar5);
    (**(code **)(**(long **)(this + 0x180) + 0x280))(*(long **)(this + 0x180),uVar6);
    (**(code **)(**(long **)(this + 0x180) + 0x1b8))(*(long **)(this + 0x180),uVar6);
    pvVar7 = (void *)Memory::alloc_static(0x10000,true);
    if (pvVar7 == (void *)0x0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
    }
    else {
      *(undefined8 *)((long)pvVar7 + -8) = 0x10000;
    }
    lVar22 = *(long *)(this + 0x1b8);
    iVar11 = 0;
    for (lVar20 = 0; (lVar22 != 0 && (lVar20 < *(long *)(lVar22 + -8))); lVar20 = lVar20 + 1) {
      lVar19 = lVar20 * 0x38;
      if (*(char *)(lVar22 + lVar19 + 0x21) == '\0') {
        FileAccess::open((String *)&local_90,(int)(lVar22 + lVar19) + 8,(Error *)0x1);
        lVar22 = *(long *)(this + 0x1b8);
        if (lVar22 == 0) {
LAB_00100fcf:
          uVar15 = 0;
LAB_00100551:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar20,uVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar15 = *(ulong *)(lVar22 + -8);
        if ((long)uVar15 <= lVar20) goto LAB_00100551;
        pOVar18 = *(Object **)(this + 0x180);
        uVar14 = *(ulong *)(lVar22 + 0x18 + lVar19);
        if (pOVar18 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            pOVar18 = (Object *)0x0;
          }
          lVar22 = *(long *)(this + 0x1b8);
          if (lVar22 == 0) goto LAB_00100fcf;
          uVar15 = *(ulong *)(lVar22 + -8);
          if ((long)uVar15 <= lVar20) goto LAB_00100551;
        }
        pOVar13 = local_98;
        local_c0 = pOVar18;
        if (*(char *)(lVar22 + 0x20 + lVar19) != '\0') {
          Ref<FileAccessEncrypted>::instantiate<>((Ref<FileAccessEncrypted> *)&local_98);
          pOVar13 = local_98;
          if (local_98 == (Object *)0x0) {
            _err_print_error("flush","core/io/pck_packer.cpp",0xff,
                             "Condition \"fae.is_null()\" is true. Returning: ERR_CANT_CREATE",0,0);
          }
          else {
            local_60 = 0;
            local_70 = (Object *)0x0;
            if ((*(Object **)(this + 0x180) != (Object *)0x0) &&
               (local_70 = *(Object **)(this + 0x180), cVar4 = RefCounted::reference(),
               cVar4 == '\0')) {
              local_70 = (Object *)0x0;
            }
            iVar17 = FileAccessEncrypted::open_and_parse(pOVar13,&local_70,this + 0x198,1);
            if (((local_70 != (Object *)0x0) &&
                (cVar4 = RefCounted::unreference(), pOVar13 = local_70, cVar4 != '\0')) &&
               (cVar4 = predelete_handler(local_70), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar13 + 0x140))();
              Memory::free_static(pOVar13,false);
            }
            lVar22 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar10 = (long *)(local_60 + -0x10);
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (*plVar10 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar22 + -0x10),false);
              }
            }
            pOVar13 = local_98;
            if (iVar17 == 0) {
              if (local_98 != (Object *)0x0) {
                pOVar9 = (Object *)
                         __dynamic_cast(local_98,&Object::typeinfo,&FileAccess::typeinfo,0);
                if (pOVar18 == pOVar9) {
                  if (uVar14 != 0) {
LAB_00100f18:
                    local_c0 = pOVar13;
                    pOVar13 = local_c0;
                    goto LAB_001009c0;
                  }
                  goto LAB_0010110f;
                }
                if ((pOVar9 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 != '\0')) {
                  local_c0 = pOVar9;
                  if (pOVar18 != (Object *)0x0) goto LAB_001010ec;
                  if (uVar14 != 0) goto LAB_00100f18;
                  goto LAB_00100f9e;
                }
                if (pOVar18 != (Object *)0x0) goto LAB_001010e3;
                if (uVar14 != 0) {
                  local_c0 = pOVar13;
                  pOVar9 = (Object *)0x0;
                  pOVar13 = local_c0;
                  goto LAB_001009c0;
                }
                goto LAB_00100fae;
              }
              if (pOVar18 != (Object *)0x0) {
LAB_001010e3:
                local_c0 = (Object *)0x0;
LAB_001010ec:
                cVar4 = RefCounted::unreference();
                if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar18), cVar4 != '\0')) {
                  (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
                  Memory::free_static(pOVar18,false);
                }
                goto LAB_001009a5;
              }
              pOVar9 = pOVar18;
              pOVar13 = local_98;
              if (uVar14 != 0) goto LAB_001009c0;
              goto LAB_00100fc7;
            }
            _err_print_error("flush","core/io/pck_packer.cpp",0x102,
                             "Condition \"err != OK\" is true. Returning: ERR_CANT_CREATE",0,0);
          }
          if (((pOVar18 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
             (cVar4 = predelete_handler(pOVar18), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
            Memory::free_static(pOVar18,false);
          }
          if (((local_90 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
             (cVar4 = predelete_handler(local_90), cVar4 != '\0')) {
            (**(code **)(*(long *)local_90 + 0x140))(local_90);
            Memory::free_static(local_90,false);
          }
          uVar12 = 0x14;
          goto LAB_00100d4f;
        }
LAB_001009a5:
        pOVar9 = local_c0;
        if (uVar14 == 0) {
          pOVar18 = local_c0;
          if (pOVar13 != (Object *)0x0) {
LAB_0010110f:
            pOVar9 = pOVar18;
            if (pOVar9 != (Object *)0x0) goto LAB_00100f9e;
            goto LAB_00100fae;
          }
        }
        else {
LAB_001009c0:
          do {
            local_c0 = pOVar13;
            uVar15 = 0x10000;
            if (uVar14 < 0x10001) {
              uVar15 = uVar14;
            }
            lVar22 = (**(code **)(*(long *)local_90 + 0x220))(local_90,pvVar7,uVar15);
            (**(code **)(*(long *)pOVar9 + 0x2d0))(pOVar9,pvVar7,lVar22);
            uVar14 = uVar14 - lVar22;
            pOVar13 = local_c0;
          } while (uVar14 != 0);
          bVar23 = local_c0 != (Object *)0x0;
          local_c0 = pOVar9;
          if (bVar23) {
LAB_00100f9e:
            cVar4 = RefCounted::unreference();
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
            }
LAB_00100fae:
            cVar4 = RefCounted::unreference();
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar13), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
              Memory::free_static(pOVar13,false);
            }
            local_98 = (Object *)0x0;
LAB_00100fc7:
            local_c0 = (Object *)0x0;
          }
        }
        iVar17 = (**(code **)(**(long **)(this + 0x180) + 0x1c8))();
        iVar17 = iVar17 % *(int *)(this + 0x188);
        if ((0 < iVar17) && (iVar17 = *(int *)(this + 0x188) - iVar17, 0 < iVar17)) {
          iVar21 = 0;
          do {
            iVar21 = iVar21 + 1;
            (**(code **)(**(long **)(this + 0x180) + 0x268))();
          } while (iVar21 != iVar17);
        }
        lVar22 = *(long *)(this + 0x1b8);
        iVar11 = iVar11 + 1;
        if (lVar22 != 0) {
          uVar15 = *(ulong *)(lVar22 + -8);
          uVar14 = uVar15 & 0xffffffff;
          if ((0 < (int)uVar15) && (param_1)) {
            if ((long)uVar15 <= lVar20) goto LAB_00100551;
            local_78 = 0;
            plVar10 = (long *)(lVar22 + lVar19);
            if (*plVar10 != 0) {
              plVar1 = (long *)(*plVar10 + -0x10);
              do {
                lVar22 = *plVar1;
                if (lVar22 == 0) goto LAB_00100ac2;
                LOCK();
                lVar8 = *plVar1;
                bVar23 = lVar22 == lVar8;
                if (bVar23) {
                  *plVar1 = lVar22 + 1;
                  lVar8 = lVar22;
                }
                UNLOCK();
              } while (!bVar23);
              if (lVar8 != -1) {
                local_78 = *plVar10;
              }
LAB_00100ac2:
              lVar22 = *(long *)(this + 0x1b8);
              if (lVar22 == 0) goto LAB_00100fcf;
              uVar15 = *(ulong *)(lVar22 + -8);
              if ((long)uVar15 <= lVar20) goto LAB_00100551;
              plVar10 = (long *)(lVar22 + lVar19);
            }
            local_80 = 0;
            plVar1 = (long *)(plVar10[1] + -0x10);
            if (plVar10[1] != 0) {
              do {
                lVar22 = *plVar1;
                if (lVar22 == 0) goto LAB_00100b20;
                LOCK();
                lVar19 = *plVar1;
                bVar23 = lVar22 == lVar19;
                if (bVar23) {
                  *plVar1 = lVar22 + 1;
                  lVar19 = lVar22;
                }
                UNLOCK();
              } while (!bVar23);
              if (lVar19 != -1) {
                local_80 = plVar10[1];
              }
            }
LAB_00100b20:
            local_88 = 0;
            local_60 = 0x28;
            local_68 = "[%d/%d - %d%%] PCKPacker flush: %s -> %s";
            String::parse_latin1((StrRange *)&local_88);
            vformat<int,int,float,String,String>
                      ((String *)&local_70,(StrRange *)&local_88,iVar11,uVar14);
            Variant::Variant((Variant *)local_58,(String *)&local_70);
            stringify_variants((Variant *)&local_68);
            __print_line((String *)&local_68);
            pcVar3 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar10 = (long *)(local_68 + -0x10);
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (*plVar10 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar3 + -0x10,false);
              }
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            pOVar18 = local_70;
            if (local_70 != (Object *)0x0) {
              LOCK();
              pOVar13 = local_70 + -0x10;
              *(long *)pOVar13 = *(long *)pOVar13 + -1;
              UNLOCK();
              if (*(long *)pOVar13 == 0) {
                local_70 = (Object *)0x0;
                Memory::free_static(pOVar18 + -0x10,false);
              }
            }
            lVar22 = local_88;
            if (local_88 != 0) {
              LOCK();
              plVar10 = (long *)(local_88 + -0x10);
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (*plVar10 == 0) {
                local_88 = 0;
                Memory::free_static((void *)(lVar22 + -0x10),false);
              }
            }
            lVar22 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar10 = (long *)(local_80 + -0x10);
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (*plVar10 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar22 + -0x10),false);
              }
            }
            lVar22 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar10 = (long *)(local_78 + -0x10);
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (*plVar10 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar22 + -0x10),false);
              }
            }
          }
        }
        if (((local_c0 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_c0), cVar4 != '\0')) {
          (**(code **)(*(long *)local_c0 + 0x140))(local_c0);
          Memory::free_static(local_c0,false);
        }
        if (((local_90 != (Object *)0x0) &&
            (cVar4 = RefCounted::unreference(), pOVar18 = local_90, cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_90), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
          Memory::free_static(pOVar18,false);
        }
        lVar22 = *(long *)(this + 0x1b8);
      }
    }
    if ((*(long *)(this + 0x180) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
      pOVar18 = *(Object **)(this + 0x180);
      cVar4 = predelete_handler(pOVar18);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
        Memory::free_static(pOVar18,false);
      }
    }
    *(undefined8 *)(this + 0x180) = 0;
    Memory::free_static(pvVar7,true);
    uVar12 = 0;
LAB_00100d4f:
    if (pOVar16 != (Object *)0x0) goto LAB_00100d54;
  }
  else {
    Ref<FileAccessEncrypted>::instantiate<>((Ref<FileAccessEncrypted> *)&local_98);
    pOVar13 = local_98;
    if (local_98 != (Object *)0x0) {
      local_60 = 0;
      local_70 = (Object *)0x0;
      if ((*(Object **)(this + 0x180) != (Object *)0x0) &&
         (local_70 = *(Object **)(this + 0x180), cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_70 = (Object *)0x0;
      }
      iVar11 = FileAccessEncrypted::open_and_parse(pOVar13,&local_70,this + 0x198,1,0,&local_68);
      if (((local_70 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar13 = local_70, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_70), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
        Memory::free_static(pOVar13,false);
      }
      lVar22 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar10 = (long *)(local_60 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      pOVar13 = local_98;
      if (iVar11 == 0) {
        if (local_98 == (Object *)0x0) {
          if (pOVar16 == (Object *)0x0) goto LAB_001002e4;
LAB_001006dd:
          pOVar18 = (Object *)0x0;
LAB_001006e0:
          cVar4 = RefCounted::unreference();
          if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar16), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
            Memory::free_static(pOVar16,false);
          }
          lVar22 = *(long *)(this + 0x1b8);
          if (lVar22 != 0) goto LAB_001002f4;
          goto LAB_001004e2;
        }
        pOVar9 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&FileAccess::typeinfo);
        if (pOVar16 == pOVar9) {
          lVar22 = *(long *)(this + 0x1b8);
          if (lVar22 != 0) goto LAB_001002f4;
          goto LAB_001007a4;
        }
        if ((pOVar9 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 != '\0')) {
          pOVar18 = pOVar9;
          if (pOVar16 != (Object *)0x0) goto LAB_001006e0;
          lVar22 = *(long *)(this + 0x1b8);
          if (lVar22 != 0) goto LAB_001002f4;
          goto LAB_001007a9;
        }
        if (pOVar16 != (Object *)0x0) goto LAB_001006dd;
        lVar22 = *(long *)(this + 0x1b8);
        if (lVar22 != 0) goto LAB_001002f4;
        goto LAB_001007b9;
      }
      uVar12 = 0x14;
      _err_print_error("flush","core/io/pck_packer.cpp",0xc3,
                       "Condition \"err != OK\" is true. Returning: ERR_CANT_CREATE",0,0);
      goto LAB_00100d4f;
    }
    uVar12 = 0x14;
    _err_print_error("flush","core/io/pck_packer.cpp",0xc0,
                     "Condition \"fae.is_null()\" is true. Returning: ERR_CANT_CREATE",0,0);
    if (pOVar16 == (Object *)0x0) goto LAB_00100762;
LAB_00100d54:
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar16), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
      Memory::free_static(pOVar16,false);
    }
  }
  pOVar16 = local_98;
  if (((local_98 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(pOVar16), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
    Memory::free_static(pOVar16,false);
  }
LAB_00100762:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PCKPacker::_bind_methods() */

void PCKPacker::_bind_methods(void)

{
  Variant *pVVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  MethodBind *pMVar7;
  uint uVar8;
  long *plVar9;
  Variant *pVVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_148 [2];
  long *local_138;
  undefined *local_128;
  char *pcStack_120;
  char *local_118;
  undefined8 local_110;
  char *local_108;
  char *pcStack_100;
  undefined *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant *local_c8;
  char **ppcStack_c0;
  Variant **local_a8;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  puVar5 = PTR__LC30_00108630;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = 0;
  local_108 = "pck_path";
  pcStack_100 = "alignment";
  local_d8 = (Variant *)&local_108;
  local_f8 = &_LC34;
  pcStack_f0 = "encrypt_directory";
  pVStack_d0 = (Variant *)&pcStack_100;
  local_c8 = (Variant *)&local_f8;
  ppcStack_c0 = &pcStack_f0;
  pVVar10 = local_48;
  D_METHODP((char *)local_148,(char ***)"pck_start",(uint)&local_d8);
  Variant::Variant((Variant *)&local_a8,0x20);
  Variant::Variant((Variant *)&local_90,
                   "0000000000000000000000000000000000000000000000000000000000000000");
  Variant::Variant(local_78,false);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_d8 = (Variant *)&local_a8;
  pVStack_d0 = (Variant *)&local_90;
  local_c8 = local_78;
  pMVar7 = create_method_bind<PCKPacker,Error,String_const&,int,String_const&,bool>(pck_start);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_148,&local_d8,3);
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar6 = local_138;
  } while (pVVar10 != (Variant *)&local_a8);
  if (local_138 != (long *)0x0) {
    LOCK();
    plVar9 = local_138 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_138 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_138[-1];
      local_138 = (long *)0x0;
      if (lVar3 != 0) {
        lVar11 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar11 = lVar11 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar11);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  local_110 = 0;
  local_118 = "encrypt";
  local_128 = puVar5;
  pcStack_120 = "source_path";
  auStack_a0._8_8_ = &local_118;
  auStack_a0._0_8_ = &pcStack_120;
  uVar8 = (uint)(Variant *)&local_a8;
  local_a8 = (Variant **)&local_128;
  D_METHODP((char *)local_148,(char ***)"add_file",uVar8);
  Variant::Variant((Variant *)&local_a8,false);
  local_88 = (undefined1  [16])0x0;
  local_90 = 0;
  local_d8 = (Variant *)&local_a8;
  pMVar7 = create_method_bind<PCKPacker,Error,String_const&,String_const&,bool>(add_file);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_148,&local_d8,1);
  if (Variant::needs_deinit[(int)local_90] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_a8];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_a8];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_138;
  if (local_138 != (long *)0x0) {
    LOCK();
    plVar9 = local_138 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_138 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_138[-1];
      local_138 = (long *)0x0;
      if (lVar3 != 0) {
        lVar11 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar11 = lVar11 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar11);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  local_d8 = (Variant *)0x103159;
  pVStack_d0 = (Variant *)0x0;
  local_a8 = &local_d8;
  D_METHODP((char *)local_148,(char ***)"add_file_removal",uVar8);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant **)0x0;
  pMVar7 = create_method_bind<PCKPacker,Error,String_const&>(add_file_removal);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_148,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_138;
  if (local_138 != (long *)0x0) {
    LOCK();
    plVar9 = local_138 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_138 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_138[-1];
      local_138 = (long *)0x0;
      if (lVar3 != 0) {
        lVar11 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar11 = lVar11 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar11);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  local_d8 = (Variant *)0x1031c6;
  pVStack_d0 = (Variant *)0x0;
  local_a8 = &local_d8;
  D_METHODP((char *)local_148,(char ***)"flush",uVar8);
  Variant::Variant((Variant *)&local_a8,false);
  local_88 = (undefined1  [16])0x0;
  local_90 = 0;
  local_d8 = (Variant *)&local_a8;
  pMVar7 = create_method_bind<PCKPacker,Error,bool>(flush);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_148,&local_d8,1);
  if (Variant::needs_deinit[(int)local_90] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_a8];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_a8];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_138;
  if (local_138 != (long *)0x0) {
    LOCK();
    plVar9 = local_138 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_138 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_138[-1];
      local_138 = (long *)0x0;
      if (lVar3 != 0) {
        lVar11 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar11 = lVar11 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar3 != lVar11);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<PCKPacker::File>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<PCKPacker::File>::_copy_on_write(CowData<PCKPacker::File> *this)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  CowData *pCVar8;
  long lVar9;
  ulong uVar10;
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
  uVar10 = 0x10;
  if (lVar2 * 0x38 != 0) {
    uVar10 = lVar2 * 0x38 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = (uVar10 | uVar10 >> 0x20) + 0x11;
  }
  puVar7 = (undefined8 *)Memory::alloc_static(uVar10,false);
  if (puVar7 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar9 = 0;
  *puVar7 = 1;
  puVar7[1] = lVar2;
  this_00 = (CowData<char32_t> *)(puVar7 + 2);
  if (lVar2 != 0) {
    do {
      pCVar8 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar7));
      *(undefined8 *)this_00 = 0;
      if (*(long *)pCVar8 != 0) {
        CowData<char32_t>::_ref(this_00,pCVar8);
      }
      *(undefined8 *)(this_00 + 8) = 0;
      if (*(long *)(pCVar8 + 8) != 0) {
        CowData<char32_t>::_ref(this_00 + 8,pCVar8 + 8);
      }
      uVar5 = *(undefined8 *)(pCVar8 + 0x10);
      uVar6 = *(undefined8 *)(pCVar8 + 0x18);
      uVar1 = *(undefined2 *)(pCVar8 + 0x20);
      *(undefined8 *)(this_00 + 0x30) = 0;
      lVar3 = *(long *)(pCVar8 + 0x30);
      *(undefined2 *)(this_00 + 0x20) = uVar1;
      *(undefined8 *)(this_00 + 0x10) = uVar5;
      *(undefined8 *)(this_00 + 0x18) = uVar6;
      if (lVar3 != 0) {
        CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(this_00 + 0x30),pCVar8 + 0x30);
      }
      lVar9 = lVar9 + 1;
      this_00 = this_00 + 0x38;
    } while (lVar2 != lVar9);
  }
  _unref(this);
  *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar7 + 2);
  return;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
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
LAB_00101e86:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
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
    if (lVar10 == 0) goto LAB_00101e86;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00103258();
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
      goto LAB_00101ddc;
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
LAB_00101ddc:
  puVar8[-1] = param_1;
  return;
}



/* PCKPacker::pck_start(String const&, int, String const&, bool) */

undefined4 __thiscall
PCKPacker::pck_start(PCKPacker *this,String *param_1,int param_2,String *param_3,bool param_4)

{
  int iVar1;
  Object *pOVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  long lVar8;
  Object *pOVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  long local_70;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(long *)param_3 == 0) || (*(uint *)(*(long *)param_3 + -8) < 2)) ||
      (cVar5 = String::is_valid_hex_number(SUB81(param_3,0)), cVar5 == '\0')) ||
     ((*(long *)param_3 == 0 || (*(int *)(*(long *)param_3 + -8) != 0x41)))) {
    _err_print_error("pck_start","core/io/pck_packer.cpp",0x39,
                     "Condition \"(p_key.is_empty() || !p_key.is_valid_hex_number(false) || p_key.length() != 64)\" is true. Returning: ERR_CANT_CREATE"
                     ,"Invalid Encryption Key (must be 64 characters long).",0,0);
  }
  else {
    if (0 < param_2) {
      lVar12 = 0;
      lVar14 = 0;
      lVar13 = 1;
      String::to_lower();
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1a0),0x20);
      do {
        if (local_70 == 0) {
LAB_001021e8:
          lVar10 = *(long *)(this + 0x1a0);
          bVar6 = 0;
        }
        else {
          lVar10 = *(long *)(local_70 + -8);
          if ((int)lVar10 == 0) goto LAB_001021e8;
          iVar11 = (int)lVar10 + -1;
          if ((int)lVar12 < iVar11) {
            if (lVar10 == lVar12) {
              bVar6 = 0;
            }
            else {
              lVar8 = lVar12;
              if (lVar10 <= lVar12) goto LAB_001022c6;
              iVar1 = *(int *)(local_70 + lVar14 * 8);
              if (iVar1 - 0x30U < 10) {
                bVar6 = (char)(iVar1 - 0x30U) * '\x10';
              }
              else {
                if (iVar1 - 0x61U < 6) {
                  iVar1 = iVar1 + -0x57;
                }
                bVar6 = (byte)(iVar1 << 4);
              }
            }
          }
          else {
            bVar6 = 0;
          }
          if (((int)lVar13 < iVar11) && (lVar10 != lVar13)) {
            lVar8 = lVar13;
            if (lVar10 <= lVar13) {
LAB_001022c6:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar10,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            iVar11 = *(int *)(local_70 + lVar13 * 4);
            if (iVar11 - 0x30U < 10) {
              bVar6 = bVar6 | (byte)(iVar11 - 0x30U);
            }
            else {
              if (iVar11 - 0x61U < 6) {
                iVar11 = iVar11 + -0x57;
              }
              bVar6 = bVar6 | (byte)iVar11;
            }
          }
          lVar10 = *(long *)(this + 0x1a0);
        }
        if (lVar10 == 0) {
          lVar10 = 0;
LAB_001021fd:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar14,lVar10,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar10 = *(long *)(lVar10 + -8);
        if (lVar10 <= lVar14) goto LAB_001021fd;
        lVar13 = lVar13 + 2;
        lVar12 = lVar12 + 2;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x1a0));
        *(byte *)(*(long *)(this + 0x1a0) + lVar14) = bVar6;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x20);
      this[0x1a8] = (PCKPacker)param_4;
      FileAccess::open((String *)&local_58,(int)param_1,(Error *)0x2);
      pOVar2 = *(Object **)(this + 0x180);
      pOVar9 = pOVar2;
      if (local_58 == pOVar2) {
LAB_00102094:
        if (((pOVar9 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar2 = local_58, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
        plVar3 = *(long **)(this + 0x180);
        if (plVar3 == (long *)0x0) goto LAB_00102359;
        *(int *)(this + 0x188) = param_2;
        (**(code **)(*plVar3 + 0x278))(plVar3,0x43504447);
        (**(code **)(**(long **)(this + 0x180) + 0x278))(*(long **)(this + 0x180),2);
        (**(code **)(**(long **)(this + 0x180) + 0x278))(*(long **)(this + 0x180),4);
        (**(code **)(**(long **)(this + 0x180) + 0x278))(*(long **)(this + 0x180),4);
        (**(code **)(**(long **)(this + 0x180) + 0x278))(*(long **)(this + 0x180),1);
        (**(code **)(**(long **)(this + 0x180) + 0x278))();
        if ((*(long *)(this + 0x1b8) != 0) && (*(long *)(*(long *)(this + 0x1b8) + -8) != 0)) {
          CowData<PCKPacker::File>::_unref((CowData<PCKPacker::File> *)(this + 0x1b8));
        }
        *(undefined8 *)(this + 400) = 0;
        uVar7 = 0;
      }
      else {
        *(Object **)(this + 0x180) = local_58;
        if (local_58 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            *(undefined8 *)(this + 0x180) = 0;
          }
          pOVar9 = local_58;
          if (pOVar2 != (Object *)0x0) goto LAB_0010207f;
          goto LAB_00102094;
        }
        if (pOVar2 != (Object *)0x0) {
LAB_0010207f:
          cVar5 = RefCounted::unreference();
          pOVar9 = local_58;
          if ((cVar5 != '\0') &&
             (cVar5 = predelete_handler(pOVar2), pOVar9 = local_58, cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
            pOVar9 = local_58;
          }
          goto LAB_00102094;
        }
LAB_00102359:
        local_68 = 0;
        plVar3 = (long *)(*(long *)param_1 + -0x10);
        if (*(long *)param_1 != 0) {
          do {
            lVar12 = *plVar3;
            if (lVar12 == 0) goto LAB_00102397;
            LOCK();
            lVar13 = *plVar3;
            bVar15 = lVar12 == lVar13;
            if (bVar15) {
              *plVar3 = lVar12 + 1;
              lVar13 = lVar12;
            }
            UNLOCK();
          } while (!bVar15);
          if (lVar13 != -1) {
            local_68 = *(long *)param_1;
          }
        }
LAB_00102397:
        local_60 = 0;
        local_58 = (Object *)0x104410;
        local_50 = 0x1f;
        String::parse_latin1((StrRange *)&local_60);
        vformat<String>((String *)&local_58,(StrRange *)&local_60,&local_68);
        _err_print_error("pck_start","core/io/pck_packer.cpp",0x58,
                         "Condition \"file.is_null()\" is true. Returning: ERR_CANT_CREATE",
                         (String *)&local_58,0,0);
        pOVar2 = local_58;
        if (local_58 != (Object *)0x0) {
          LOCK();
          pOVar9 = local_58 + -0x10;
          *(long *)pOVar9 = *(long *)pOVar9 + -1;
          UNLOCK();
          if (*(long *)pOVar9 == 0) {
            local_58 = (Object *)0x0;
            Memory::free_static(pOVar2 + -0x10,false);
          }
        }
        lVar12 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar3 = (long *)(local_60 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar3 = (long *)(local_68 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        uVar7 = 0x14;
      }
      if (local_70 != 0) {
        LOCK();
        plVar3 = (long *)(local_70 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          Memory::free_static((void *)(local_70 + -0x10),false);
        }
      }
      goto LAB_00102180;
    }
    _err_print_error("pck_start","core/io/pck_packer.cpp",0x3a,
                     "Condition \"p_alignment <= 0\" is true. Returning: ERR_CANT_CREATE",
                     "Invalid alignment, must be greater then 0.",0,0);
  }
  uVar7 = 0x14;
LAB_00102180:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<PCKPacker::File>::push_back(PCKPacker::File) [clone .isra.0] */

void __thiscall Vector<PCKPacker::File>::push_back(Vector<PCKPacker::File> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(this + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar3 = CowData<PCKPacker::File>::resize<false>((CowData<PCKPacker::File> *)(this + 8),lVar4);
  if (iVar3 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar5 = -1;
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(this + 8) + -8);
    lVar5 = lVar4 + -1;
    if (-1 < lVar5) {
      CowData<PCKPacker::File>::_copy_on_write((CowData<PCKPacker::File> *)(this + 8));
      this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar5 * 0x38);
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,param_2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
      }
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      uVar1 = *(undefined2 *)(param_2 + 0x20);
      *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(this_00 + 0x18) = uVar2;
      *(undefined2 *)(this_00 + 0x20) = uVar1;
      if (*(long *)(this_00 + 0x30) == *(long *)(param_2 + 0x30)) {
        return;
      }
      CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(this_00 + 0x30),param_2 + 0x30);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar4,"p_index","size()","",false,false);
  return;
}



/* PCKPacker::add_file(String const&, String const&, bool) */

undefined8 __thiscall
PCKPacker::add_file(PCKPacker *this,String *param_1,String *param_2,bool param_3)

{
  long *plVar1;
  uchar uVar2;
  code *pcVar3;
  uchar *puVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  Object *local_f0;
  long local_e8;
  uchar *local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined2 local_b8;
  long local_a8 [2];
  long local_98;
  long local_90;
  undefined8 local_88;
  ulong uStack_80;
  undefined2 local_78;
  long local_68 [2];
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x180) == 0) {
    _err_print_error("add_file","core/io/pck_packer.cpp",0x82,
                     "Condition \"file.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",
                     "File must be opened before use.",0,0);
    uVar6 = 0x1f;
  }
  else {
    FileAccess::open((String *)&local_f0,(int)param_2,(Error *)0x1);
    if (local_f0 == (Object *)0x0) {
      uVar6 = 0xc;
    }
    else {
      local_b8 = 0;
      local_d8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      local_a8[0] = 0;
      String::simplify_path();
      String::trim_prefix((char *)&local_98);
      lVar10 = local_e8;
      if (local_98 != 0) {
        local_d8._0_8_ = local_98;
      }
      if (local_e8 != 0) {
        LOCK();
        plVar1 = (long *)(local_e8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_e8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
        lVar10 = local_d8._8_8_;
      }
      if (*(long *)param_2 != lVar10) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(local_d8 + 8),(CowData *)param_2);
      }
      local_c8._0_8_ = *(undefined8 *)(this + 400);
      uVar6 = (**(code **)(*(long *)local_f0 + 0x1d0))();
      local_c8._8_8_ = uVar6;
      FileAccess::get_file_as_bytes((String *)&local_e8,param_2);
      if (local_e0 == (uchar *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(local_e0 + -8);
      }
      lVar10 = 0;
      CryptoCore::md5(local_e0,iVar7,local_58);
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_a8,0x10);
      do {
        uVar2 = local_58[lVar10];
        if (local_a8[0] == 0) {
          lVar9 = 0;
LAB_0010282e:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar10,lVar9,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar9 = *(long *)(local_a8[0] + -8);
        if (lVar9 <= lVar10) goto LAB_0010282e;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_a8);
        lVar9 = local_a8[0];
        *(uchar *)(local_a8[0] + lVar10) = uVar2;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x10);
      uVar6 = local_c8._8_8_;
      local_b8 = CONCAT11(local_b8._1_1_,param_3);
      uVar8 = local_c8._8_8_;
      if (param_3) {
        uVar8 = (local_c8._8_8_ & 0xfffffffffffffff0) + 0x10;
        if ((local_c8 & (undefined1  [16])0xf) == (undefined1  [16])0x0) {
          uVar8 = local_c8._8_8_;
        }
        uVar8 = uVar8 + 0x28;
      }
      local_98 = 0;
      iVar7 = ((int)*(long *)(this + 400) + (int)uVar8) % *(int *)(this + 0x188);
      lVar10 = (long)(*(int *)(this + 0x188) - iVar7);
      if (iVar7 < 1) {
        lVar10 = 0;
      }
      *(ulong *)(this + 400) = *(long *)(this + 400) + uVar8 + lVar10;
      if (local_d8._0_8_ != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)local_d8);
      }
      local_90 = 0;
      if (local_d8._8_8_ != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(local_d8 + 8));
      }
      local_68[0] = 0;
      local_78 = CONCAT11(local_b8._1_1_,param_3);
      local_88 = local_c8._0_8_;
      uStack_80 = uVar6;
      if (lVar9 == 0) {
        Vector<PCKPacker::File>::push_back((Vector<PCKPacker::File> *)(this + 0x1b0));
      }
      else {
        CowData<unsigned_char>::_ref((CowData<unsigned_char> *)local_68,(CowData *)local_a8);
        lVar10 = local_68[0];
        Vector<PCKPacker::File>::push_back((Vector<PCKPacker::File> *)(this + 0x1b0));
        if (lVar10 != 0) {
          LOCK();
          plVar1 = (long *)(lVar10 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_68[0] + -0x10),false);
          }
        }
      }
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_90 + -0x10),false);
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
      puVar4 = local_e0;
      if (local_e0 != (uchar *)0x0) {
        LOCK();
        plVar1 = (long *)(local_e0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_e0 = (uchar *)0x0;
          Memory::free_static(puVar4 + -0x10,false);
        }
      }
      if (local_a8[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_a8[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_a8[0] + -0x10),false);
        }
      }
      if (local_d8._8_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_d8._8_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_d8._8_8_ + -0x10),false);
        }
      }
      if (local_d8._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_d8._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_d8._0_8_ + -0x10),false);
        }
      }
      if (local_f0 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_f0);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
            Memory::free_static(local_f0,false);
            uVar6 = 0;
            goto LAB_00102875;
          }
        }
      }
      uVar6 = 0;
    }
  }
LAB_00102875:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PCKPacker::add_file_removal(String const&) */

undefined8 PCKPacker::add_file_removal(String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined2 local_88;
  long local_78 [2];
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x180) == 0) {
    _err_print_error("add_file_removal","core/io/pck_packer.cpp",0x6f,
                     "Condition \"file.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",
                     "File must be opened before use.",0,0);
    uVar4 = 0x1f;
  }
  else {
    local_88 = 0;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_78[0] = 0;
    String::simplify_path();
    String::trim_prefix((char *)&local_68);
    if (local_68 != 0) {
      local_a8._0_8_ = local_68;
    }
    if (local_b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_b0 + -0x10),false);
      }
    }
    local_88 = CONCAT11(1,(undefined1)local_88);
    local_98._8_8_ = 0;
    local_98._0_8_ = *(ulong *)(param_1 + 400);
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_78,0x10);
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_78);
    lVar2 = local_78[0];
    if ((local_78[0] != 0) && (lVar3 = 0, 0 < *(long *)(local_78[0] + -8))) {
      do {
        *(undefined1 *)(local_78[0] + lVar3) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(long *)(local_78[0] + -8));
    }
    local_68 = 0;
    if (local_a8._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_a8);
    }
    local_60 = 0;
    if (local_a8._8_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(local_a8 + 8));
    }
    local_38 = 0;
    local_48 = local_88;
    local_58 = local_98._0_8_;
    uStack_50 = local_98._8_8_;
    if (lVar2 == 0) {
      Vector<PCKPacker::File>::push_back((Vector<PCKPacker::File> *)(param_1 + 0x1b0));
    }
    else {
      CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&local_38,(CowData *)local_78);
      lVar2 = local_38;
      Vector<PCKPacker::File>::push_back((Vector<PCKPacker::File> *)(param_1 + 0x1b0));
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_38 + -0x10),false);
        }
      }
    }
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_60 + -0x10),false);
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
    if (local_78[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_78[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_78[0] + -0x10),false);
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
    uVar4 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
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



/* MethodBindTR<Error, bool>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Error,bool>::_gen_argument_type(MethodBindTR<Error,bool> *this,int param_1)

{
  return 2 - (uint)(param_1 == 0);
}



/* MethodBindTR<Error, bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&>::_gen_argument_type
          (MethodBindTR<Error,String_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 2;
}



/* MethodBindTR<Error, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&, String const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&,String_const&,bool>::_gen_argument_type
          (MethodBindTR<Error,String_const&,String_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x02';
  if ((uint)param_1 < 3) {
    cVar1 = (param_1 != 2) * '\x03' + '\x01';
  }
  return cVar1;
}



/* MethodBindTR<Error, String const&, String const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,String_const&,String_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&, int, String const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&,int,String_const&,bool>::_gen_argument_type
          (MethodBindTR<Error,String_const&,int,String_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x02';
  if ((((uint)param_1 < 4) && (cVar1 = '\x04', param_1 != 0)) && (cVar1 = '\x02', param_1 != 1)) {
    cVar1 = (param_1 == 2) * '\x03' + '\x01';
  }
  return cVar1;
}



/* MethodBindTR<Error, String const&, int, String const&, bool>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<Error,String_const&,int,String_const&,bool>::get_argument_meta
          (MethodBindTR<Error,String_const&,int,String_const&,bool> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
}



/* MethodBindTR<Error, String const&, int, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int,String_const&,bool>::~MethodBindTR
          (MethodBindTR<Error,String_const&,int,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108488;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, int, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int,String_const&,bool>::~MethodBindTR
          (MethodBindTR<Error,String_const&,int,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108488;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, String const&, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,String_const&,bool>::~MethodBindTR
          (MethodBindTR<Error,String_const&,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001084e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,String_const&,bool>::~MethodBindTR
          (MethodBindTR<Error,String_const&,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001084e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108548;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108548;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, bool>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,bool>::~MethodBindTR(MethodBindTR<Error,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001085a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, bool>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,bool>::~MethodBindTR(MethodBindTR<Error,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001085a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PCKPacker::_bind_methods() [clone .cold] */

void PCKPacker::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<PCKPacker::File>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<PCKPacker::File>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00103258(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x103264);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC5;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar8 = 0;
      lVar7 = -2;
    }
    else {
      lVar8 = local_50[-1];
      lVar7 = lVar8 + -2;
      if (-1 < lVar7) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar7));
        String::operator+((String *)this,(String *)&local_48);
        puVar5 = local_48;
        lVar8 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(puVar5 + -0x10,false);
            lVar8 = local_60;
          }
        }
        goto joined_r0x0010331a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC5;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar8 = local_60;
joined_r0x0010331a:
  local_60 = lVar8;
  if (lVar8 != 0) {
    LOCK();
    plVar1 = (long *)(lVar8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar6 = local_50 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar8 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar8 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar8 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Error";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001037d8) */
/* WARNING: Removing unreachable block (ram,0x00103908) */
/* WARNING: Removing unreachable block (ram,0x00103ad0) */
/* WARNING: Removing unreachable block (ram,0x00103914) */
/* WARNING: Removing unreachable block (ram,0x0010391e) */
/* WARNING: Removing unreachable block (ram,0x00103ab0) */
/* WARNING: Removing unreachable block (ram,0x0010392a) */
/* WARNING: Removing unreachable block (ram,0x00103934) */
/* WARNING: Removing unreachable block (ram,0x00103a90) */
/* WARNING: Removing unreachable block (ram,0x00103940) */
/* WARNING: Removing unreachable block (ram,0x0010394a) */
/* WARNING: Removing unreachable block (ram,0x00103a70) */
/* WARNING: Removing unreachable block (ram,0x00103956) */
/* WARNING: Removing unreachable block (ram,0x00103960) */
/* WARNING: Removing unreachable block (ram,0x00103a50) */
/* WARNING: Removing unreachable block (ram,0x0010396c) */
/* WARNING: Removing unreachable block (ram,0x00103976) */
/* WARNING: Removing unreachable block (ram,0x00103a30) */
/* WARNING: Removing unreachable block (ram,0x00103982) */
/* WARNING: Removing unreachable block (ram,0x0010398c) */
/* WARNING: Removing unreachable block (ram,0x00103a10) */
/* WARNING: Removing unreachable block (ram,0x00103994) */
/* WARNING: Removing unreachable block (ram,0x001039aa) */
/* WARNING: Removing unreachable block (ram,0x001039b6) */
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



/* void Ref<FileAccessEncrypted>::instantiate<>() */

void __thiscall Ref<FileAccessEncrypted>::instantiate<>(Ref<FileAccessEncrypted> *this)

{
  char cVar1;
  RefCounted *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (RefCounted *)operator_new(0x1f0,"");
  RefCounted::RefCounted(this_00);
  *(undefined2 *)(this_00 + 0x17c) = 0;
  *(undefined4 *)(this_00 + 0x180) = 2;
  *(undefined2 *)(this_00 + 0x184) = 0;
  *(undefined8 *)(this_00 + 0x188) = 0;
  *(code **)this_00 = RefCounted::init_ref;
  *(undefined8 *)(this_00 + 0x198) = 0;
  *(undefined8 *)(this_00 + 0x1a8) = 0;
  this_00[0x1b0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1b8) = 0;
  *(undefined8 *)(this_00 + 0x1d8) = 0;
  *(undefined8 *)(this_00 + 0x1e0) = 0;
  *(undefined2 *)(this_00 + 0x1e8) = 0x100;
  *(undefined1 (*) [16])(this_00 + 0x1c0) = (undefined1  [16])0x0;
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
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (RefCounted *)pOVar3) goto LAB_00103c25;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00103c25;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_00103c25:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00103e40) */
/* WARNING: Removing unreachable block (ram,0x00103f70) */
/* WARNING: Removing unreachable block (ram,0x001040e8) */
/* WARNING: Removing unreachable block (ram,0x00103f7c) */
/* WARNING: Removing unreachable block (ram,0x00103f86) */
/* WARNING: Removing unreachable block (ram,0x001040ca) */
/* WARNING: Removing unreachable block (ram,0x00103f92) */
/* WARNING: Removing unreachable block (ram,0x00103f9c) */
/* WARNING: Removing unreachable block (ram,0x001040ac) */
/* WARNING: Removing unreachable block (ram,0x00103fa8) */
/* WARNING: Removing unreachable block (ram,0x00103fb2) */
/* WARNING: Removing unreachable block (ram,0x0010408e) */
/* WARNING: Removing unreachable block (ram,0x00103fbe) */
/* WARNING: Removing unreachable block (ram,0x00103fc8) */
/* WARNING: Removing unreachable block (ram,0x00104070) */
/* WARNING: Removing unreachable block (ram,0x00103fd4) */
/* WARNING: Removing unreachable block (ram,0x00103fde) */
/* WARNING: Removing unreachable block (ram,0x00104052) */
/* WARNING: Removing unreachable block (ram,0x00103fe6) */
/* WARNING: Removing unreachable block (ram,0x00103ff0) */
/* WARNING: Removing unreachable block (ram,0x00104037) */
/* WARNING: Removing unreachable block (ram,0x00103ff8) */
/* WARNING: Removing unreachable block (ram,0x0010400d) */
/* WARNING: Removing unreachable block (ram,0x00104019) */
/* String vformat<int, int, float, String, String>(String const&, int const, int const, float const,
   String const, String const) */

undefined8 *
vformat<int,int,float,String,String>
          (float param_4,undefined8 *param_1,bool *param_3_00,int param_3,int param_5,
          String *param_6,String *param_7)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_128 [8];
  undefined8 local_120 [9];
  Variant local_d8 [24];
  Variant local_c0 [24];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_d8,param_3);
  Variant::Variant(local_c0,param_5);
  Variant::Variant(local_a8,param_4);
  Variant::Variant(local_90,param_6);
  iVar2 = 0;
  Variant::Variant(local_78,param_7);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_128);
  iVar4 = (int)local_128;
  Array::resize(iVar4);
  pVVar3 = local_d8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 5);
  String::sprintf((Array *)local_120,param_3_00);
  *param_1 = local_120[0];
  pVVar3 = local_48;
  Array::~Array(local_128);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBind* create_method_bind<PCKPacker, Error, String const&, int, String const&, bool>(Error
   (PCKPacker::*)(String const&, int, String const&, bool)) */

MethodBind *
create_method_bind<PCKPacker,Error,String_const&,int,String_const&,bool>
          (_func_Error_String_ptr_int_String_ptr_bool *param_1)

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
  *(_func_Error_String_ptr_int_String_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00108488;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "PCKPacker";
  local_30 = 9;
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



/* MethodBind* create_method_bind<PCKPacker, Error, String const&, String const&, bool>(Error
   (PCKPacker::*)(String const&, String const&, bool)) */

MethodBind *
create_method_bind<PCKPacker,Error,String_const&,String_const&,bool>
          (_func_Error_String_ptr_String_ptr_bool *param_1)

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
  *(_func_Error_String_ptr_String_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001084e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "PCKPacker";
  local_30 = 9;
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



/* MethodBind* create_method_bind<PCKPacker, Error, String const&>(Error (PCKPacker::*)(String
   const&)) */

MethodBind * create_method_bind<PCKPacker,Error,String_const&>(_func_Error_String_ptr *param_1)

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
  *(_func_Error_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00108548;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PCKPacker";
  local_30 = 9;
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



/* MethodBind* create_method_bind<PCKPacker, Error, bool>(Error (PCKPacker::*)(bool)) */

MethodBind * create_method_bind<PCKPacker,Error,bool>(_func_Error_bool *param_1)

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
  *(_func_Error_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001085a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PCKPacker";
  local_30 = 9;
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



/* CowData<PCKPacker::File>::_unref() */

void __thiscall CowData<PCKPacker::File>::_unref(CowData<PCKPacker::File> *this)

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
          if (plVar6[6] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[6] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[6];
              plVar6[6] = 0;
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
          plVar6 = plVar6 + 7;
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



/* CowData<PCKPacker::File>::_realloc(long) */

undefined8 __thiscall
CowData<PCKPacker::File>::_realloc(CowData<PCKPacker::File> *this,long param_1)

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
/* Error CowData<PCKPacker::File>::resize<false>(long) */

undefined8 __thiscall
CowData<PCKPacker::File>::resize<false>(CowData<PCKPacker::File> *this,long param_1)

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
    lVar10 = lVar8 * 0x38;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x38 == 0) {
LAB_00104ef0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x38 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar13 = uVar11 + 1;
  if (lVar13 == 0) goto LAB_00104ef0;
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
      plVar2 = (long *)(lVar8 + uVar12 * 0x38);
      if (plVar2[6] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[6] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[6];
          plVar2[6] = 0;
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
    goto LAB_00104f46;
  }
  if (lVar13 == lVar10) {
LAB_00104e63:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00104f46:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_00104d4f;
  }
  else {
    if (lVar8 != 0) {
      uVar7 = _realloc(this,lVar13);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00104e63;
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
  pauVar6 = (undefined1 (*) [16])(puVar9 + lVar8 * 7);
  do {
    *(undefined8 *)pauVar6[3] = 0;
    pauVar4 = pauVar6 + 3;
    *pauVar6 = (undefined1  [16])0x0;
    pauVar6[1] = (undefined1  [16])0x0;
    *(undefined2 *)pauVar6[2] = 0;
    pauVar6 = (undefined1 (*) [16])(*pauVar4 + 8);
  } while ((undefined1 (*) [16])(*pauVar4 + 8) != (undefined1 (*) [16])(puVar9 + param_1 * 7));
LAB_00104d4f:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00105068) */
/* WARNING: Removing unreachable block (ram,0x00105198) */
/* WARNING: Removing unreachable block (ram,0x00105360) */
/* WARNING: Removing unreachable block (ram,0x001051a4) */
/* WARNING: Removing unreachable block (ram,0x001051ae) */
/* WARNING: Removing unreachable block (ram,0x00105340) */
/* WARNING: Removing unreachable block (ram,0x001051ba) */
/* WARNING: Removing unreachable block (ram,0x001051c4) */
/* WARNING: Removing unreachable block (ram,0x00105320) */
/* WARNING: Removing unreachable block (ram,0x001051d0) */
/* WARNING: Removing unreachable block (ram,0x001051da) */
/* WARNING: Removing unreachable block (ram,0x00105300) */
/* WARNING: Removing unreachable block (ram,0x001051e6) */
/* WARNING: Removing unreachable block (ram,0x001051f0) */
/* WARNING: Removing unreachable block (ram,0x001052e0) */
/* WARNING: Removing unreachable block (ram,0x001051fc) */
/* WARNING: Removing unreachable block (ram,0x00105206) */
/* WARNING: Removing unreachable block (ram,0x001052c0) */
/* WARNING: Removing unreachable block (ram,0x00105212) */
/* WARNING: Removing unreachable block (ram,0x0010521c) */
/* WARNING: Removing unreachable block (ram,0x001052a0) */
/* WARNING: Removing unreachable block (ram,0x00105224) */
/* WARNING: Removing unreachable block (ram,0x0010523a) */
/* WARNING: Removing unreachable block (ram,0x00105246) */
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



/* MethodBindTR<Error, bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,bool>::validated_call
          (MethodBindTR<Error,bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
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
      goto LAB_001054bc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),(*param_2)[8]);
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_001054bc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,bool>::ptrcall
          (MethodBindTR<Error,bool> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001056f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),**param_2 != '\0');
  *(ulong *)param_3 = (ulong)uVar3;
LAB_001056f1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&>::validated_call
          (MethodBindTR<Error,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
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
      goto LAB_0010590c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_0010590c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,String_const&>::ptrcall
          (MethodBindTR<Error,String_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00105b28;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2);
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00105b28:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, String const&, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&,String_const&,bool>::validated_call
          (MethodBindTR<Error,String_const&,String_const&,bool> *this,Object *param_1,
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
      goto LAB_00105d62;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8,param_2[2][8]);
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00105d62:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, String const&, bool>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Error,String_const&,String_const&,bool>::ptrcall
          (MethodBindTR<Error,String_const&,String_const&,bool> *this,Object *param_1,void **param_2
          ,void *param_3)

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
      goto LAB_00105f7a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2,param_2[1],*param_2[2] != '\0');
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00105f7a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int, String const&, bool>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&,int,String_const&,bool>::validated_call
          (MethodBindTR<Error,String_const&,int,String_const&,bool> *this,Object *param_1,
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
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
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
      goto LAB_001061b4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2 + 8,*(undefined4 *)(param_2[1] + 8),
                    param_2[2] + 8,param_2[3][8]);
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_001061b4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int, String const&, bool>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTR<Error,String_const&,int,String_const&,bool>::ptrcall
          (MethodBindTR<Error,String_const&,int,String_const&,bool> *this,Object *param_1,
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
      goto LAB_001063f0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2,*param_2[1],param_2[2],
                    *param_2[3] != '\0');
  *(ulong *)param_3 = (ulong)uVar3;
LAB_001063f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_58 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar12 = (long *)(local_60 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00106780;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar13 = param_2[5];
    if (pVVar13 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001067c0;
LAB_001067b0:
      pVVar13 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar13 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001067c0:
        uVar9 = 4;
        goto LAB_00106775;
      }
      if (in_R8D == 1) goto LAB_001067b0;
      lVar11 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar11) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar13 = pVVar13 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,1);
    uVar4 = _LC70;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar7 = Variant::operator_cast_to_bool(pVVar13);
    iVar8 = (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),bVar7);
    Variant::Variant((Variant *)local_48,iVar8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar9 = 3;
LAB_00106775:
    *in_R9 = uVar9;
    in_R9[2] = 1;
  }
LAB_00106780:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, String const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,String_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_88 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0);
      pcVar5 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_88 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar15 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar13 = (long *)(local_90 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00106c2a;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar8 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar9 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar9 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar9) {
      lVar10 = 0;
      do {
        if ((int)lVar10 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar10 * 8);
        }
        else {
          uVar12 = iVar9 + -3 + (int)lVar10;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_78[lVar10] = pVVar14;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[2],1);
      uVar4 = _LC72;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar7 = Variant::operator_cast_to_bool(local_78[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[1],4);
      uVar4 = _LC73;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_90);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[0],4);
      uVar4 = _LC74;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_88);
      iVar9 = (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),(Variant *)&local_88,
                                 (Variant *)&local_90,bVar7);
      Variant::Variant((Variant *)local_58,iVar9);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar5 = local_88;
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_88 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar15 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar13 = (long *)(local_90 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      goto LAB_00106c2a;
    }
    uVar8 = 4;
  }
  *in_R9 = uVar8;
  in_R9[2] = 3;
LAB_00106c2a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Error,String_const&>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
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
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x207,
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
      goto LAB_00106ff0;
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
      if (in_R8D != 1) goto LAB_00107030;
LAB_00107020:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00107030:
        uVar8 = 4;
        goto LAB_00106fe5;
      }
      if (in_R8D == 1) goto LAB_00107020;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC74;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_58);
    iVar7 = (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_58);
    Variant::Variant((Variant *)local_48,iVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    pcVar5 = local_58;
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
  }
  else {
    uVar8 = 3;
LAB_00106fe5:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00106ff0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int, String const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,int,String_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_98 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC69,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0);
      pcVar5 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_98 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar15 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar13 = (long *)(local_a0 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_001074f0;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar15;
    }
    if ((int)(4 - in_R8D) <= iVar8) {
      lVar10 = 0;
      do {
        if ((int)lVar10 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar10 * 8);
        }
        else {
          uVar12 = iVar8 + -4 + (int)lVar10;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_68[lVar10] = pVVar14;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],1);
      uVar4 = _LC75;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar7 = Variant::operator_cast_to_bool(local_68[3]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2],4);
      uVar4 = _LC76;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_a0);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1],2);
      uVar4 = _LC77;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_68[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],4);
      uVar4 = _LC74;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_98);
      iVar8 = (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),(Variant *)&local_98,
                                 iVar8,(Variant *)&local_a0,bVar7);
      Variant::Variant((Variant *)local_88,iVar8);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar5 = local_98;
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_98 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar15 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar13 = (long *)(local_a0 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      goto LAB_001074f0;
    }
    uVar9 = 4;
  }
  else {
    uVar9 = 3;
  }
  *in_R9 = uVar9;
  in_R9[2] = 4;
LAB_001074f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<bool>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<bool>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *param_2;
  if (iVar8 != param_1) goto LAB_00107775;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00107868:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00107868;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_3 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
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
        lVar2 = *(long *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar8 = *param_2;
LAB_00107775:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, bool>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> * MethodBindTR<Error,bool>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_4c = 0;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<bool>(0,&local_4c,(PropertyInfo *)&local_48);
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = local_40._0_8_;
    *(undefined8 *)(this + 0x10) = local_40._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *param_2;
  if (iVar8 != param_1) goto LAB_00107b25;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00107c18:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00107c18;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_3 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
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
        lVar2 = *(long *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar8 = *param_2;
LAB_00107b25:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, String const&, String const&, bool>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,String_const&,String_const&,bool>::_gen_argument_type_info(int param_1)

{
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_6c = 0;
    call_get_argument_type_info_helper<String_const&>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<String_const&>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<bool>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    *(undefined4 *)this = (undefined4)local_68;
    *(undefined8 *)(this + 8) = local_60._0_8_;
    *(undefined8 *)(this + 0x10) = local_60._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_50;
    *(undefined8 *)(this + 0x20) = local_48;
    *(undefined4 *)(this + 0x28) = local_40;
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> * MethodBindTR<Error,String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_4c = 0;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,&local_4c,(PropertyInfo *)&local_48);
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = local_40._0_8_;
    *(undefined8 *)(this + 0x10) = local_40._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, int, String const&, bool>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,int,String_const&,bool>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  int local_84;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 0;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_84,param_2);
  if (param_1 != local_84) goto LAB_00107fe7;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001080f8:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001080f8;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_68._0_4_;
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 != local_60._0_8_) {
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
    *(undefined8 *)(param_2 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_2 + 0x18) = local_50;
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_2 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
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
        lVar2 = *(long *)(param_2 + 0x20);
        *(undefined8 *)(param_2 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_2 + 0x20) = local_48;
    *(undefined4 *)(param_2 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_00107fe7:
  local_84 = local_84 + 1;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_84,param_2);
  call_get_argument_type_info_helper<bool>(param_1,&local_84,param_2);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, String const&, int, String const&, bool>::_gen_argument_type_info(int) const
    */

GetTypeInfo<Error,void> *
MethodBindTR<Error,String_const&,int,String_const&,bool>::_gen_argument_type_info(int param_1)

{
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 4) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,int,String_const&,bool>
              (in_EDX,(PropertyInfo *)&local_48);
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = local_40._0_8_;
    *(undefined8 *)(this + 0x10) = local_40._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, bool>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,bool>::~MethodBindTR(MethodBindTR<Error,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,String_const&,bool>::~MethodBindTR
          (MethodBindTR<Error,String_const&,String_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&, int, String const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int,String_const&,bool>::~MethodBindTR
          (MethodBindTR<Error,String_const&,int,String_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


