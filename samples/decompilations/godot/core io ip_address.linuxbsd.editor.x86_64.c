
/* IPAddress::operator String() const */

IPAddress * __thiscall IPAddress::operator_cast_to_String(IPAddress *this)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  int *in_RSI;
  long lVar5;
  long in_FS_OFFSET;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)((long)in_RSI + 0x11) == '\0') {
    if ((char)in_RSI[4] == '\0') {
      *(undefined8 *)this = 0;
      local_58 = &_LC1;
      local_50 = 0;
      String::parse_latin1((StrRange *)this);
    }
    else if (((*in_RSI == 0) && (in_RSI[1] == 0)) && (in_RSI[2] == -0x10000)) {
      itos((long)&local_60);
      local_58 = &_LC2;
      local_68 = (undefined *)0x0;
      local_50 = 1;
      String::parse_latin1((StrRange *)&local_68);
      itos((long)&local_78);
      local_58 = &_LC2;
      local_88 = 0;
      local_50 = 1;
      String::parse_latin1((StrRange *)&local_88);
      itos((long)&local_98);
      local_58 = &_LC2;
      local_a8 = 0;
      local_50 = 1;
      String::parse_latin1((StrRange *)&local_a8);
      itos((long)&local_b0);
      String::operator+((String *)&local_a0,(String *)&local_b0);
      String::operator+((String *)&local_90,(String *)&local_a0);
      String::operator+((String *)&local_80,(String *)&local_90);
      String::operator+((String *)&local_70,(String *)&local_80);
      String::operator+((String *)&local_58,(String *)&local_70);
      String::operator+((String *)this,(String *)&local_58);
      puVar2 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar2 + -0x10,false);
        }
      }
      lVar5 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      puVar2 = local_68;
      if (local_68 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (undefined *)0x0;
          Memory::free_static(puVar2 + -0x10,false);
        }
      }
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
    }
    else {
      local_68 = (undefined *)0x0;
      lVar5 = 0;
      do {
        if (lVar5 != 0) {
          local_60 = 0;
          local_58 = &_LC3;
          local_50 = 1;
          String::parse_latin1((StrRange *)&local_60);
          String::operator+((String *)&local_58,(String *)&local_68);
          puVar4 = local_58;
          puVar2 = local_68;
          if (local_68 == local_58) {
            if (local_68 != (undefined *)0x0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_58 = (undefined *)0x0;
                Memory::free_static(puVar4 + -0x10,false);
              }
            }
          }
          else {
            if (local_68 != (undefined *)0x0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = (undefined *)0x0;
                Memory::free_static(puVar2 + -0x10,false);
              }
            }
            local_68 = local_58;
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
        String::num_int64((long)&local_60,
                          (uint)*(byte *)((long)in_RSI + lVar5 * 2) * 0x100 +
                          (uint)*(byte *)((long)in_RSI + lVar5 * 2 + 1) & 0xffff,true);
        String::operator+((String *)&local_58,(String *)&local_68);
        puVar4 = local_58;
        puVar2 = local_68;
        if (local_68 == local_58) {
          if (local_68 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (undefined *)0x0;
              Memory::free_static(puVar4 + -0x10,false);
            }
          }
        }
        else {
          if (local_68 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (undefined *)0x0;
              Memory::free_static(puVar2 + -0x10,false);
            }
          }
          local_68 = local_58;
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
        lVar5 = lVar5 + 1;
      } while (lVar5 != 8);
      *(undefined **)this = local_68;
    }
  }
  else {
    *(undefined8 *)this = 0;
    local_58 = &_LC0;
    local_50 = 1;
    String::parse_latin1((StrRange *)this);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* IPAddress::_parse_ipv4(String const&, int, unsigned char*) */

void __thiscall IPAddress::_parse_ipv4(IPAddress *this,String *param_1,int param_2,uchar *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  uchar uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined *local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (undefined *)0x0;
  if (param_2 == 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar7 = *plVar1;
        if (lVar7 == 0) goto LAB_001007c0;
        LOCK();
        lVar6 = *plVar1;
        bVar8 = lVar7 == lVar6;
        if (bVar8) {
          *plVar1 = lVar7 + 1;
          lVar6 = lVar7;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar6 != -1) {
        local_60 = *(undefined **)param_1;
      }
    }
  }
  else {
    String::substr((int)&local_48,(int)param_1);
    puVar3 = local_48;
    puVar2 = local_60;
    if (local_60 == local_48) {
      if (local_60 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (undefined *)0x0;
          Memory::free_static(puVar3 + -0x10,false);
        }
      }
    }
    else {
      if (local_60 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = (undefined *)0x0;
          Memory::free_static(puVar2 + -0x10,false);
        }
      }
      local_60 = local_48;
    }
  }
LAB_001007c0:
  lVar7 = 0;
  iVar5 = String::get_slice_count((char *)&local_60);
  if (iVar5 == 4) {
    do {
      String::get_slicec((wchar32)(String *)&local_48,(int)&local_60);
      uVar4 = String::to_int();
      puVar2 = local_48;
      param_3[lVar7] = uVar4;
      if (local_48 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (undefined *)0x0;
          Memory::free_static(puVar2 + -0x10,false);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 4);
  }
  else {
    local_50 = 0;
    local_48 = &_LC2;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_50);
    operator+((char *)&local_58,"Invalid IP address string: ");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error("_parse_ipv4","core/io/ip_address.cpp",0x9d,
                     "Condition \"slices != 4\" is true.",(String *)&local_48,0);
    puVar2 = local_48;
    if (local_48 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (undefined *)0x0;
        Memory::free_static(puVar2 + -0x10,false);
      }
    }
    lVar7 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  puVar2 = local_60;
  if (local_60 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = (undefined *)0x0;
      Memory::free_static(puVar2 + -0x10,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* IPAddress::_parse_ipv6(String const&) */

void __thiscall IPAddress::_parse_ipv6(IPAddress *this,String *param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  String *pSVar15;
  ulong uVar16;
  ushort uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  long in_FS_OFFSET;
  bool bVar23;
  uint local_9c;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  lVar21 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (lVar21 == 0) goto LAB_00100c48;
  uVar16 = *(ulong *)(lVar21 + -8);
  iVar20 = 0;
  bVar5 = false;
  if ((int)uVar16 == 0) {
LAB_00100a68:
    local_9c = 0;
  }
  else {
    uVar13 = 0;
    iVar22 = 0;
    uVar9 = 0;
    bVar7 = false;
    bVar6 = false;
    while ((int)uVar9 < (int)uVar16 + -1) {
      if (uVar16 == uVar9) {
        iVar12 = (int)String::_null;
        if ((int)String::_null != 0x3a) goto LAB_00100d18;
LAB_00100d73:
        if (bVar6) {
          bVar6 = false;
        }
        else {
          lVar10 = (long)iVar20;
          bVar7 = true;
          iVar20 = iVar20 + 1;
          *(undefined4 *)(local_68 + lVar10 * 4) = 0xffffffff;
        }
      }
      else {
        if ((long)uVar16 <= (long)uVar9) goto LAB_00100b1c;
        iVar12 = *(int *)(lVar21 + uVar9 * 4);
        if (iVar12 == 0x3a) {
          if (uVar9 != 0) goto LAB_00100d73;
        }
        else {
LAB_00100d18:
          if (iVar12 == 0x2e) {
            bVar5 = true;
          }
          else {
            if ((0x36 < iVar12 - 0x30U) ||
               (bVar23 = (0x7e0000007e03ffU >> ((ulong)(iVar12 - 0x30U) & 0x3f) & 1) != 0, !bVar23))
            {
              local_80 = 0;
              local_78 = &_LC2;
              local_70 = 1;
              String::parse_latin1((StrRange *)&local_80);
              operator+((char *)&local_88,"Invalid character in IPv6 address: ");
              String::operator+((String *)&local_78,(String *)&local_88);
              _err_print_error("_parse_ipv6","core/io/ip_address.cpp",0x7a,"Method/function failed."
                               ,(String *)&local_78,0,0);
              puVar8 = local_78;
              if (local_78 != (undefined *)0x0) {
                LOCK();
                plVar2 = (long *)(local_78 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_78 = (undefined *)0x0;
                  Memory::free_static(puVar8 + -0x10,false);
                }
              }
              lVar21 = local_88;
              if (local_88 != 0) {
                LOCK();
                plVar2 = (long *)(local_88 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_88 = 0;
                  Memory::free_static((void *)(lVar21 + -0x10),false);
                }
              }
              lVar21 = local_80;
              if (local_80 != 0) {
                LOCK();
                plVar2 = (long *)(local_80 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_80 = 0;
                  Memory::free_static((void *)(lVar21 + -0x10),false);
                }
              }
              goto LAB_00100c48;
            }
            if (!bVar6) {
              lVar10 = (long)iVar20;
              iVar22 = iVar22 + 1;
              iVar20 = iVar20 + 1;
              *(int *)(local_68 + lVar10 * 4) = (int)uVar13;
              bVar6 = bVar23;
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
      uVar13 = uVar9 & 0xffffffff;
    }
    if (!bVar7) goto LAB_00100a68;
    local_9c = 8 - iVar22;
  }
  if (0 < iVar20) {
    lVar21 = 0;
    iVar22 = 0;
    do {
      iVar12 = *(int *)(local_68 + lVar21 * 4);
      if (iVar12 == -1) {
        if (0 < (int)local_9c) {
          memset(this + (long)iVar22 * 2,0,(ulong)local_9c * 2);
          iVar22 = iVar22 + local_9c;
        }
      }
      else if ((bVar5) && (iVar20 + -1 == (int)lVar21)) {
        _parse_ipv4(this,param_1,iVar12,(uchar *)(this + (long)iVar22 * 2));
      }
      else {
        lVar10 = *(long *)param_1;
        if (lVar10 == 0) {
          if (iVar12 < 0) {
            uVar9 = (ulong)iVar12;
            uVar16 = 0;
LAB_00100b1c:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar9,uVar16,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar17 = 0;
        }
        else {
          uVar16 = *(ulong *)(lVar10 + -8);
          uVar9 = (ulong)iVar12;
          iVar1 = iVar12 + 3;
          iVar18 = 0;
          piVar19 = (int *)(lVar10 + uVar9 * 4);
          while (uVar17 = (ushort)iVar18, (int)uVar16 != 0) {
            if ((int)uVar16 + -1 <= iVar12) goto LAB_00100cca;
            if (uVar16 == uVar9) {
              piVar11 = (int *)&String::_null;
            }
            else if (((long)uVar16 <= (long)uVar9) || (piVar11 = piVar19, (long)uVar9 < 0))
            goto LAB_00100b1c;
            iVar3 = *piVar11;
            uVar14 = iVar3 - 0x30;
            if (9 < uVar14) {
              if (iVar3 - 0x61U < 6) {
                uVar14 = iVar3 - 0x57;
              }
              else {
                if (5 < iVar3 - 0x41U) {
                  if (iVar3 != 0x3a) {
                    local_70 = 1;
                    local_78 = &_LC2;
                    local_80 = 0;
                    String::parse_latin1((StrRange *)&local_80);
                    operator+((char *)&local_88,"Invalid character in IPv6 address: ");
                    pSVar15 = (String *)&local_78;
                    String::operator+((String *)&local_78,(String *)&local_88);
                    _err_print_error("_parse_hex","core/io/ip_address.cpp",0x52,
                                     "Method/function failed.",(String *)&local_78,0,0,pSVar15);
                    puVar8 = local_78;
                    if (local_78 != (undefined *)0x0) {
                      LOCK();
                      plVar2 = (long *)(local_78 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_78 = (undefined *)0x0;
                        Memory::free_static(puVar8 + -0x10,false);
                      }
                    }
                    lVar10 = local_88;
                    if (local_88 != 0) {
                      LOCK();
                      plVar2 = (long *)(local_88 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_88 = 0;
                        Memory::free_static((void *)(lVar10 + -0x10),false);
                      }
                    }
                    lVar10 = local_80;
                    if (local_80 != 0) {
                      LOCK();
                      plVar2 = (long *)(local_80 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_80 = 0;
                        Memory::free_static((void *)(lVar10 + -0x10),false);
                      }
                    }
                    goto LAB_00100cd8;
                  }
                  goto LAB_00100cca;
                }
                uVar14 = iVar3 - 0x37;
              }
            }
            iVar12 = iVar12 + 1;
            piVar19 = piVar19 + 1;
            uVar9 = uVar9 + 1;
            iVar18 = iVar18 * 0x10 + uVar14;
            uVar17 = (ushort)iVar18;
            if (iVar1 < iVar12) goto LAB_00100cca;
          }
          if (iVar12 < 0) goto LAB_00100b1c;
        }
LAB_00100cca:
        *(ushort *)(this + (long)iVar22 * 2) = uVar17 << 8 | uVar17 >> 8;
LAB_00100cd8:
        iVar22 = iVar22 + 1;
      }
      lVar21 = lVar21 + 1;
    } while (iVar20 != lVar21);
  }
LAB_00100c48:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* IPAddress::clear() */

void __thiscall IPAddress::clear(IPAddress *this)

{
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* IPAddress::is_ipv4() const */

bool __thiscall IPAddress::is_ipv4(IPAddress *this)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(int *)this == 0) && (*(int *)(this + 4) == 0)) {
    bVar1 = *(int *)(this + 8) == -0x10000;
  }
  return bVar1;
}



/* IPAddress::get_ipv4() const */

int * IPAddress::get_ipv4(void)

{
  int *in_RDI;
  
  if (((*in_RDI != 0) || (in_RDI[1] != 0)) || (in_RDI[2] != -0x10000)) {
    _err_print_error("get_ipv4","core/io/ip_address.cpp",0xae,
                     "Condition \"!is_ipv4()\" is true. Returning: &(field8[12])",
                     "IPv4 requested, but current IP is IPv6.",0,0);
  }
  return in_RDI + 3;
}



/* IPAddress::set_ipv4(unsigned char const*) */

void __thiscall IPAddress::set_ipv4(IPAddress *this,uchar *param_1)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined2 *)(this + 0x10) = 1;
  *(undefined2 *)(this + 10) = 0xffff;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)param_1;
  return;
}



/* IPAddress::get_ipv6() const */

IPAddress * __thiscall IPAddress::get_ipv6(IPAddress *this)

{
  return this;
}



/* IPAddress::set_ipv6(unsigned char const*) */

void __thiscall IPAddress::set_ipv6(IPAddress *this,uchar *param_1)

{
  long lVar1;
  
  *(undefined2 *)(this + 0x10) = 1;
  lVar1 = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  do {
    this[lVar1] = *(IPAddress *)(param_1 + lVar1);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return;
}



/* IPAddress::IPAddress(String const&) */

void __thiscall IPAddress::IPAddress(IPAddress *this,String *param_1)

{
  char cVar1;
  int iVar2;
  
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  cVar1 = String::operator==((String *)param_1,"*");
  if (cVar1 == '\0') {
    iVar2 = String::find_char((wchar32)param_1,0x3a);
    if (iVar2 != -1) {
      _parse_ipv6(this,param_1);
      this[0x10] = (IPAddress)0x1;
      return;
    }
    iVar2 = String::get_slice_count(param_1);
    if (iVar2 != 4) {
      _err_print_error("IPAddress","core/io/ip_address.cpp",0xd8,"Invalid IP address.",0,0);
      return;
    }
    *(undefined2 *)(this + 10) = 0xffff;
    _parse_ipv4(this,param_1,0,(uchar *)(this + 0xc));
    this[0x10] = (IPAddress)0x1;
  }
  else {
    this[0x11] = (IPAddress)0x1;
  }
  return;
}



/* IPAddress::IPAddress(unsigned int, unsigned int, unsigned int, unsigned int, bool) */

void __thiscall
IPAddress::IPAddress
          (IPAddress *this,uint param_1,uint param_2,uint param_3,uint param_4,bool param_5)

{
  *(undefined2 *)(this + 0x10) = 1;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (!param_5) {
    *(undefined2 *)(this + 10) = 0xffff;
    *(uint *)(this + 0xc) =
         (((param_4 & 0xff) << 8 | param_3 & 0xff) << 8 | param_2 & 0xff) << 8 | param_1 & 0xff;
    return;
  }
  *(ulong *)this =
       ((((((ulong)CONCAT11((char)param_2,(char)(param_2 >> 8)) << 8 |
           (ulong)(param_2 >> 0x10 & 0xff)) << 8 | (ulong)(param_2 >> 0x18)) << 8 |
         (ulong)param_1 & 0xff) << 8 | (ulong)(byte)(param_1 >> 8)) << 8 |
       (ulong)(param_1 >> 0x10 & 0xff)) << 8 | (ulong)(byte)(param_1 >> 0x18);
  *(ulong *)(this + 8) =
       ((((((((ulong)param_4 & 0xff) << 8 | (ulong)(param_4 >> 8 & 0xff)) << 8 |
           (ulong)(param_4 >> 0x10 & 0xff)) << 8 | (ulong)(param_4 >> 0x18)) << 8 |
         (ulong)(param_3 & 0xff)) << 8 | (ulong)(param_3 >> 8 & 0xff)) << 8 |
       (ulong)(param_3 >> 0x10 & 0xff)) << 8 | (ulong)(param_3 >> 0x18);
  return;
}


