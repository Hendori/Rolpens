
/* NodePath::_update_hash_cache() const */

void __thiscall NodePath::_update_hash_cache(NodePath *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  
  lVar3 = *(long *)this;
  plVar4 = *(long **)(lVar3 + 0x10);
  uVar5 = (uint)*(byte *)(lVar3 + 0x38);
  if ((plVar4 != (long *)0x0) && (0 < (int)plVar4[-1])) {
    plVar1 = plVar4 + (ulong)((int)plVar4[-1] - 1) + 1;
    do {
      while (lVar3 = *plVar4, lVar3 == 0) {
        uVar2 = StringName::get_empty_hash();
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 ^ uVar2;
        if (plVar4 == plVar1) goto LAB_0010005e;
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 ^ *(uint *)(lVar3 + 0x20);
    } while (plVar4 != plVar1);
LAB_0010005e:
    lVar3 = *(long *)this;
  }
  plVar4 = *(long **)(lVar3 + 0x20);
  if ((plVar4 != (long *)0x0) && (0 < (int)plVar4[-1])) {
    plVar1 = plVar4 + (ulong)((int)plVar4[-1] - 1) + 1;
    do {
      while (lVar3 = *plVar4, lVar3 == 0) {
        uVar2 = StringName::get_empty_hash();
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 ^ uVar2;
        if (plVar4 == plVar1) goto LAB_001000a6;
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 ^ *(uint *)(lVar3 + 0x20);
    } while (plVar4 != plVar1);
LAB_001000a6:
    lVar3 = *(long *)this;
  }
  *(undefined1 *)(lVar3 + 0x39) = 1;
  *(uint *)(lVar3 + 0x3c) = uVar5;
  return;
}



/* NodePath::is_absolute() const */

undefined1 __thiscall NodePath::is_absolute(NodePath *this)

{
  if (*(long *)this != 0) {
    return *(undefined1 *)(*(long *)this + 0x38);
  }
  return 0;
}



/* NodePath::get_name_count() const */

undefined4 __thiscall NodePath::get_name_count(NodePath *this)

{
  long lVar1;
  
  if ((*(long *)this != 0) && (lVar1 = *(long *)(*(long *)this + 0x10), lVar1 != 0)) {
    return *(undefined4 *)(lVar1 + -8);
  }
  return 0;
}



/* NodePath::get_name(int) const */

StringName * NodePath::get_name(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long *in_RSI;
  undefined4 in_register_0000003c;
  StringName *this;
  long lVar3;
  
  this = (StringName *)CONCAT44(in_register_0000003c,param_1);
  if (*in_RSI == 0) {
    _err_print_error("get_name","core/string/node_path.cpp",0x4c,"Parameter \"data\" is null.",0,0);
    *(undefined8 *)this = 0;
    return this;
  }
  lVar1 = *(long *)(*in_RSI + 0x10);
  lVar2 = (long)in_EDX;
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_0010015d;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      StringName::StringName(this,(StringName *)(lVar1 + lVar2 * 8));
      return this;
    }
    goto LAB_0010015d;
  }
  lVar3 = 0;
LAB_0010015d:
  _err_print_index_error
            ("get_name","core/string/node_path.cpp",0x4d,lVar2,lVar3,"p_idx","data->path.size()","",
             false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* NodePath::get_subname_count() const */

undefined4 __thiscall NodePath::get_subname_count(NodePath *this)

{
  long lVar1;
  
  if ((*(long *)this != 0) && (lVar1 = *(long *)(*(long *)this + 0x20), lVar1 != 0)) {
    return *(undefined4 *)(lVar1 + -8);
  }
  return 0;
}



/* NodePath::get_subname(int) const */

StringName * NodePath::get_subname(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long *in_RSI;
  undefined4 in_register_0000003c;
  StringName *this;
  long lVar3;
  
  this = (StringName *)CONCAT44(in_register_0000003c,param_1);
  if (*in_RSI == 0) {
    _err_print_error("get_subname","core/string/node_path.cpp",0x5a,"Parameter \"data\" is null.",0,
                     0);
    *(undefined8 *)this = 0;
    return this;
  }
  lVar1 = *(long *)(*in_RSI + 0x20);
  lVar2 = (long)in_EDX;
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_0010025d;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      StringName::StringName(this,(StringName *)(lVar1 + lVar2 * 8));
      return this;
    }
    goto LAB_0010025d;
  }
  lVar3 = 0;
LAB_0010025d:
  _err_print_index_error
            ("get_subname","core/string/node_path.cpp",0x5b,lVar2,lVar3,"p_idx",
             "data->subpath.size()","",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* NodePath::get_total_name_count() const */

int __thiscall NodePath::get_total_name_count(NodePath *this)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(long *)(lVar1 + 0x10) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(long *)(lVar1 + 0x10) + -8);
    }
    if (*(long *)(lVar1 + 0x20) != 0) {
      return iVar2 + *(int *)(*(long *)(lVar1 + 0x20) + -8);
    }
  }
  return iVar2;
}



/* NodePath::TEMPNAMEPLACEHOLDERVALUE(NodePath const&) const */

ulong __thiscall NodePath::operator==(NodePath *this,NodePath *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)this;
  lVar4 = *(long *)param_1;
  if (lVar8 == lVar4) {
    return 1;
  }
  bVar5 = lVar8 == 0 || lVar4 == 0;
  if (bVar5) {
    return 0;
  }
  if (*(char *)(lVar8 + 0x38) != *(char *)(lVar4 + 0x38)) goto LAB_0010037b;
  lVar3 = *(long *)(lVar8 + 0x10);
  lVar1 = *(long *)(lVar4 + 0x10);
  if (lVar3 == 0) {
    iVar6 = 0;
    lVar7 = 0;
    iVar2 = 0;
    if (lVar1 != 0) goto LAB_00100372;
    lVar8 = *(long *)(lVar8 + 0x20);
    lVar4 = *(long *)(lVar4 + 0x20);
    iVar2 = 0;
    if (lVar8 != 0) goto LAB_00100395;
    if (lVar4 == 0) {
      return 1;
    }
    iVar2 = 0;
    lVar7 = 0;
LAB_001003a7:
    lVar9 = *(long *)(lVar4 + -8);
LAB_001003ab:
    if (lVar9 != lVar7) {
LAB_0010037b:
      return CONCAT71((int7)((ulong)param_1 >> 8),bVar5) & 0xffffffff;
    }
    if (iVar6 < 1) goto LAB_001003f8;
  }
  else {
    iVar6 = (int)*(undefined8 *)(lVar3 + -8);
    lVar7 = (long)iVar6;
    iVar2 = iVar6;
    if (lVar1 == 0) {
      lVar9 = 0;
    }
    else {
LAB_00100372:
      iVar6 = iVar2;
      lVar9 = *(long *)(lVar1 + -8);
    }
    if (lVar9 != lVar7) goto LAB_0010037b;
    lVar8 = *(long *)(lVar8 + 0x20);
    lVar4 = *(long *)(lVar4 + 0x20);
    iVar2 = iVar6;
    if (lVar8 != 0) {
LAB_00100395:
      iVar6 = iVar2;
      iVar2 = (int)*(undefined8 *)(lVar8 + -8);
      lVar7 = (long)iVar2;
      if (lVar4 != 0) goto LAB_001003a7;
      lVar9 = 0;
      goto LAB_001003ab;
    }
    if ((lVar4 != 0) && (*(long *)(lVar4 + -8) != 0)) goto LAB_0010037b;
    iVar2 = 0;
    if (iVar6 < 1) {
      return 1;
    }
  }
  lVar7 = 0;
  do {
    if (*(long *)(lVar3 + lVar7 * 8) != *(long *)(lVar1 + lVar7 * 8)) goto LAB_0010037b;
    lVar7 = lVar7 + 1;
  } while ((int)lVar7 < iVar6);
LAB_001003f8:
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(long *)(lVar8 + lVar3) != *(long *)(lVar4 + lVar3)) goto LAB_0010037b;
      lVar3 = lVar3 + 8;
    } while (lVar3 != (long)iVar2 * 8);
  }
  return 1;
}



/* NodePath::TEMPNAMEPLACEHOLDERVALUE(NodePath const&) const */

uint __thiscall NodePath::operator!=(NodePath *this,NodePath *param_1)

{
  uint uVar1;
  
  uVar1 = operator==(this,param_1);
  return uVar1 ^ 1;
}



/* NodePath::operator String() const */

NodePath * __thiscall NodePath::operator_cast_to_String(NodePath *this)

{
  long *plVar1;
  char *pcVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *in_RSI;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *in_RSI;
  if (lVar5 == 0) {
    *(undefined8 *)this = 0;
  }
  else {
    local_68 = 0;
    if (*(char *)(lVar5 + 0x38) != '\0') {
      local_50 = 1;
      local_58 = "/";
      String::parse_latin1((StrRange *)&local_68);
      lVar5 = *in_RSI;
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        if (*(long *)(lVar7 + -8) <= lVar6) break;
        if (lVar6 == 0) {
          lVar5 = *(long *)(lVar5 + 0x10);
        }
        else {
          String::operator+=((String *)&local_68,"/");
          lVar5 = *(long *)(*in_RSI + 0x10);
        }
        if (lVar5 == 0) {
          lVar7 = 0;
LAB_001005d1:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar7 = *(long *)(lVar5 + -8);
        if (lVar7 <= lVar6) goto LAB_001005d1;
        lVar5 = *(long *)(lVar5 + lVar6 * 8);
        if (lVar5 == 0) {
LAB_00100621:
          local_60 = 0;
        }
        else {
          pcVar2 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar2 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
            if (*(long *)(lVar5 + 0x10) == 0) goto LAB_00100621;
            do {
              lVar7 = *plVar1;
              if (lVar7 == 0) goto LAB_00100621;
              LOCK();
              lVar4 = *plVar1;
              bVar8 = lVar7 == lVar4;
              if (bVar8) {
                *plVar1 = lVar7 + 1;
                lVar4 = lVar7;
              }
              UNLOCK();
            } while (!bVar8);
            if (lVar4 != -1) {
              local_60 = *(long *)(lVar5 + 0x10);
            }
          }
          else {
            local_50 = strlen(pcVar2);
            local_58 = pcVar2;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        String::operator+=((String *)&local_68,(String *)&local_60);
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
        lVar5 = *in_RSI;
        lVar6 = lVar6 + 1;
        lVar7 = *(long *)(lVar5 + 0x10);
      } while (lVar7 != 0);
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    for (lVar7 = 0; (lVar5 != 0 && (lVar7 < *(long *)(lVar5 + -8))); lVar7 = lVar7 + 1) {
      lVar5 = *(long *)(lVar5 + lVar7 * 8);
      if (lVar5 == 0) {
LAB_001007a1:
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
          if (*(long *)(lVar5 + 0x10) != 0) {
            do {
              lVar6 = *plVar1;
              if (lVar6 == 0) goto LAB_001007a1;
              LOCK();
              lVar4 = *plVar1;
              bVar8 = lVar6 == lVar4;
              if (bVar8) {
                *plVar1 = lVar6 + 1;
                lVar4 = lVar6;
              }
              UNLOCK();
            } while (!bVar8);
            if (lVar4 != -1) {
              local_60 = *(long *)(lVar5 + 0x10);
              goto LAB_001006fd;
            }
          }
          goto LAB_001007a1;
        }
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
LAB_001006fd:
      operator+((char *)&local_58,(String *)&_LC13);
      String::operator+=((String *)&local_68,(String *)&local_58);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
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
      lVar5 = *(long *)(*in_RSI + 0x20);
    }
    *(undefined8 *)this = local_68;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* NodePath::get_concatenated_names() const */

StringName * NodePath::get_concatenated_names(void)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *in_RSI;
  long lVar7;
  StringName *in_RDI;
  long in_FS_OFFSET;
  bool bVar8;
  StringName *local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar7 = *in_RSI;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 == 0) {
    _err_print_error("get_concatenated_names","core/string/node_path.cpp",0xd3,
                     "Parameter \"data\" is null.",0,0);
    *(undefined8 *)in_RDI = 0;
  }
  else {
    lVar2 = *(long *)(lVar7 + 0x28);
    if ((lVar2 == 0) ||
       ((*(long *)(lVar2 + 8) == 0 &&
        ((*(long *)(lVar2 + 0x10) == 0 || (*(uint *)(*(long *)(lVar2 + 0x10) + -8) < 2)))))) {
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 == 0) {
        local_68 = 0;
      }
      else {
        local_68 = 0;
        iVar4 = (int)*(undefined8 *)(lVar7 + -8);
        if (0 < iVar4) {
          uVar6 = 0;
          do {
            if (uVar6 != 0) {
              String::operator+=((String *)&local_68,"/");
            }
            lVar2 = *(long *)(lVar7 + uVar6 * 8);
            if (lVar2 == 0) {
              local_60 = 0;
            }
            else {
              __s = *(char **)(lVar2 + 8);
              local_60 = 0;
              if (__s == (char *)0x0) {
                plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
                if (*(long *)(lVar2 + 0x10) != 0) {
                  do {
                    lVar3 = *plVar1;
                    if (lVar3 == 0) goto LAB_0010093f;
                    LOCK();
                    lVar5 = *plVar1;
                    bVar8 = lVar3 == lVar5;
                    if (bVar8) {
                      *plVar1 = lVar3 + 1;
                      lVar5 = lVar3;
                    }
                    UNLOCK();
                  } while (!bVar8);
                  if (lVar5 != -1) {
                    local_60 = *(long *)(lVar2 + 0x10);
                  }
                }
              }
              else {
                local_50 = strlen(__s);
                local_58 = __s;
                String::parse_latin1((StrRange *)&local_60);
              }
            }
LAB_0010093f:
            String::operator+=((String *)&local_68,(StrRange *)&local_60);
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
            bVar8 = uVar6 != iVar4 - 1;
            uVar6 = uVar6 + 1;
          } while (bVar8);
        }
      }
      local_70 = (StringName *)&local_58;
      StringName::StringName(local_70,(String *)&local_68,false);
      lVar7 = *in_RSI;
      if (*(char **)(lVar7 + 0x28) == local_58) {
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(char **)(lVar7 + 0x28) = local_58;
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = *in_RSI;
    }
    StringName::StringName(in_RDI,(StringName *)(lVar7 + 0x28));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* NodePath::get_concatenated_subnames() const */

StringName * NodePath::get_concatenated_subnames(void)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *in_RSI;
  long lVar7;
  StringName *in_RDI;
  long in_FS_OFFSET;
  bool bVar8;
  StringName *local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar7 = *in_RSI;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 == 0) {
    _err_print_error("get_concatenated_subnames","core/string/node_path.cpp",0xe5,
                     "Parameter \"data\" is null.",0,0);
    *(undefined8 *)in_RDI = 0;
  }
  else {
    lVar2 = *(long *)(lVar7 + 0x30);
    if ((lVar2 == 0) ||
       ((*(long *)(lVar2 + 8) == 0 &&
        ((*(long *)(lVar2 + 0x10) == 0 || (*(uint *)(*(long *)(lVar2 + 0x10) + -8) < 2)))))) {
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) {
        local_68 = 0;
      }
      else {
        local_68 = 0;
        iVar4 = (int)*(undefined8 *)(lVar7 + -8);
        if (0 < iVar4) {
          uVar6 = 0;
          do {
            if (uVar6 != 0) {
              String::operator+=((String *)&local_68,":");
            }
            lVar2 = *(long *)(lVar7 + uVar6 * 8);
            if (lVar2 == 0) {
              local_60 = 0;
            }
            else {
              __s = *(char **)(lVar2 + 8);
              local_60 = 0;
              if (__s == (char *)0x0) {
                plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
                if (*(long *)(lVar2 + 0x10) != 0) {
                  do {
                    lVar3 = *plVar1;
                    if (lVar3 == 0) goto LAB_00100bff;
                    LOCK();
                    lVar5 = *plVar1;
                    bVar8 = lVar3 == lVar5;
                    if (bVar8) {
                      *plVar1 = lVar3 + 1;
                      lVar5 = lVar3;
                    }
                    UNLOCK();
                  } while (!bVar8);
                  if (lVar5 != -1) {
                    local_60 = *(long *)(lVar2 + 0x10);
                  }
                }
              }
              else {
                local_50 = strlen(__s);
                local_58 = __s;
                String::parse_latin1((StrRange *)&local_60);
              }
            }
LAB_00100bff:
            String::operator+=((String *)&local_68,(StrRange *)&local_60);
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
            bVar8 = uVar6 != iVar4 - 1;
            uVar6 = uVar6 + 1;
          } while (bVar8);
        }
      }
      local_70 = (StringName *)&local_58;
      StringName::StringName(local_70,(String *)&local_68,false);
      lVar7 = *in_RSI;
      if (*(char **)(lVar7 + 0x30) == local_58) {
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(char **)(lVar7 + 0x30) = local_58;
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = *in_RSI;
    }
    StringName::StringName(in_RDI,(StringName *)(lVar7 + 0x30));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* NodePath::is_empty() const */

bool __thiscall NodePath::is_empty(NodePath *this)

{
  return *(long *)this == 0;
}



/* NodePath::NodePath(NodePath const&) */

void __thiscall NodePath::NodePath(NodePath *this,NodePath *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  piVar2 = *(int **)param_1;
  *(undefined8 *)this = 0;
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        return;
      }
      LOCK();
      iVar3 = *piVar2;
      bVar4 = iVar1 == iVar3;
      if (bVar4) {
        *piVar2 = iVar1 + 1;
        iVar3 = iVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (iVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* NodePath::unref() */

void __thiscall NodePath::unref(NodePath *this)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      pvVar2 = *(void **)this;
      if (StringName::configured != '\0') {
        if (*(long *)((long)pvVar2 + 0x30) != 0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_00100e55;
        }
        if (*(long *)((long)pvVar2 + 0x28) != 0) {
          StringName::unref();
        }
      }
LAB_00100e55:
      CowData<StringName>::_unref((CowData<StringName> *)((long)pvVar2 + 0x20));
      CowData<StringName>::_unref((CowData<StringName> *)((long)pvVar2 + 0x10));
      Memory::free_static(pvVar2,false);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* NodePath::~NodePath() */

void __thiscall NodePath::~NodePath(NodePath *this)

{
  unref(this);
  return;
}



/* NodePath::TEMPNAMEPLACEHOLDERVALUE(NodePath const&) */

void __thiscall NodePath::operator=(NodePath *this,NodePath *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (this == param_1) {
    return;
  }
  unref(this);
  piVar2 = *(int **)param_1;
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        return;
      }
      LOCK();
      iVar3 = *piVar2;
      bVar4 = iVar1 == iVar3;
      if (bVar4) {
        *piVar2 = iVar1 + 1;
        iVar3 = iVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (iVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<StringName>::_ref(CowData<StringName> const&) [clone .part.0] */

void __thiscall CowData<StringName>::_ref(CowData<StringName> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* NodePath::get_subnames() const */

void NodePath::get_subnames(void)

{
  long lVar1;
  long *in_RSI;
  long in_RDI;
  
  lVar1 = *in_RSI;
  *(undefined8 *)(in_RDI + 8) = 0;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x20) != 0)) {
    CowData<StringName>::_ref((CowData<StringName> *)(in_RDI + 8),(CowData *)(lVar1 + 0x20));
  }
  return;
}



/* NodePath::NodePath(Vector<StringName> const&, bool) */

void __thiscall NodePath::NodePath(NodePath *this,Vector *param_1,bool param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 *)this = 0;
  if (((lVar3 == 0) || (*(long *)(lVar3 + -8) == 0)) && (!param_2)) {
    return;
  }
  puVar2 = (undefined4 *)operator_new(0x40,"");
  *puVar2 = 0;
  *(undefined1 (*) [16])(puVar2 + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 0xc) = 0;
  *(undefined4 **)this = puVar2;
  *puVar2 = 1;
  lVar3 = *(long *)this;
  lVar1 = *(long *)(param_1 + 8);
  *(bool *)(lVar3 + 0x38) = param_2;
  if (*(long *)(lVar3 + 0x10) != lVar1) {
    CowData<StringName>::_ref((CowData<StringName> *)(lVar3 + 0x10),(CowData *)(param_1 + 8));
    lVar3 = *(long *)this;
  }
  *(undefined1 *)(lVar3 + 0x39) = 0;
  return;
}



/* NodePath::NodePath(Vector<StringName> const&, Vector<StringName> const&, bool) */

void __thiscall NodePath::NodePath(NodePath *this,Vector *param_1,Vector *param_2,bool param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)this = 0;
  if ((((lVar1 != 0) && (*(long *)(lVar1 + -8) != 0)) ||
      ((*(long *)(param_2 + 8) != 0 && (*(long *)(*(long *)(param_2 + 8) + -8) != 0)))) || (param_3)
     ) {
    puVar2 = (undefined4 *)operator_new(0x40,"");
    *puVar2 = 0;
    *(undefined1 (*) [16])(puVar2 + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined4 **)this = puVar2;
    *puVar2 = 1;
    lVar3 = *(long *)this;
    lVar1 = *(long *)(param_1 + 8);
    *(bool *)(lVar3 + 0x38) = param_3;
    if (*(long *)(lVar3 + 0x10) != lVar1) {
      CowData<StringName>::_ref((CowData<StringName> *)(lVar3 + 0x10),(CowData *)(param_1 + 8));
      lVar3 = *(long *)this;
    }
    if (*(long *)(lVar3 + 0x20) != *(long *)(param_2 + 8)) {
      CowData<StringName>::_ref((CowData<StringName> *)(lVar3 + 0x20),(CowData *)(param_2 + 8));
      lVar3 = *(long *)this;
    }
    *(undefined1 *)(lVar3 + 0x39) = 0;
  }
  return;
}



/* NodePath::get_names() const */

void NodePath::get_names(void)

{
  long lVar1;
  long *in_RSI;
  long in_RDI;
  
  lVar1 = *in_RSI;
  *(undefined8 *)(in_RDI + 8) = 0;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    CowData<StringName>::_ref((CowData<StringName> *)(in_RDI + 8),(CowData *)(lVar1 + 0x10));
  }
  return;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* NodePath::rel_path_to(NodePath const&) const */

NodePath * NodePath::rel_path_to(NodePath *param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long *in_RDX;
  undefined8 uVar7;
  int iVar8;
  long *in_RSI;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  StringName *this;
  StringName *pSVar15;
  long in_FS_OFFSET;
  CowData<StringName> *local_d0;
  long local_90 [2];
  long local_80 [2];
  long local_70;
  Vector local_68 [8];
  StringName *local_60;
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = *in_RSI;
  if ((lVar11 == 0) || (*(char *)(lVar11 + 0x38) == '\0')) {
    uVar7 = 0x10c;
    pcVar6 = "Condition \"!is_absolute()\" is true. Returning: NodePath()";
  }
  else {
    lVar9 = *in_RDX;
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x38) != '\0')) {
      local_80[0] = 0;
      if (*(long *)(lVar11 + 0x10) == 0) {
LAB_00101300:
        local_70 = 0;
        if (*(long *)(lVar9 + 0x10) == 0) goto LAB_001012cb;
        CowData<StringName>::_ref((CowData<StringName> *)&local_70,(CowData *)(lVar9 + 0x10));
        if (local_80[0] != 0) goto LAB_00101339;
        iVar14 = 0;
        uVar10 = 0;
        uVar5 = 0;
LAB_001013ff:
        if (local_70 != 0) {
LAB_00101410:
          uVar10 = uVar10 + *(long *)(local_70 + -8);
        }
      }
      else {
        CowData<StringName>::_ref((CowData<StringName> *)local_80,(CowData *)(lVar11 + 0x10));
        lVar9 = *in_RDX;
        if (lVar9 != 0) goto LAB_00101300;
LAB_001012cb:
        local_70 = 0;
        if (local_80[0] != 0) {
LAB_00101339:
          uVar10 = *(ulong *)(local_80[0] + -8);
          if (uVar10 == 0) {
            uVar5 = 0;
            iVar14 = 0;
          }
          else {
            if (local_70 == 0) {
              iVar14 = 0;
              uVar5 = 0;
              goto LAB_00101414;
            }
            uVar1 = *(ulong *)(local_70 + -8);
            uVar13 = 0;
            uVar5 = 0;
            do {
              iVar14 = (int)uVar13;
              if (uVar1 == uVar5) goto LAB_00101410;
              uVar13 = uVar1;
              if (((long)uVar1 <= (long)uVar5) || (uVar13 = uVar10, (long)uVar10 <= (long)uVar5)) {
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,uVar5,uVar13,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar3 = uVar5 + 1;
              if (*(long *)(local_80[0] + uVar5 * 8) != *(long *)(local_70 + -8 + uVar3 * 8))
              goto LAB_00101410;
              uVar13 = uVar3 & 0xffffffff;
              iVar14 = (int)uVar3;
              uVar5 = uVar3;
            } while (uVar3 != uVar10);
          }
          goto LAB_001013ff;
        }
        iVar14 = 0;
        uVar5 = 0;
        uVar10 = 0;
      }
LAB_00101414:
      lVar9 = local_70;
      lVar11 = local_80[0];
      local_d0 = (CowData<StringName> *)&local_70;
      local_60 = (StringName *)0x0;
      CowData<StringName>::resize<false>((CowData<StringName> *)&local_60,uVar10 + 1);
      CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_60);
      pSVar15 = local_60;
      StringName::StringName((StringName *)local_90,"..",false);
      lVar4 = 0;
      this = pSVar15;
      while( true ) {
        if (lVar11 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(lVar11 + -8);
        }
        if (lVar12 <= (long)iVar14 + -1 + lVar4 + 1) break;
        StringName::operator=(this,(StringName *)local_90);
        lVar4 = lVar4 + 1;
        this = this + 8;
      }
      iVar8 = (int)lVar4;
      if ((lVar9 == 0) || (*(long *)(lVar9 + -8) <= (long)uVar5)) {
        if (iVar8 != 0) goto LAB_00101514;
        StringName::StringName((StringName *)&local_58,".",false);
        if (*(long *)pSVar15 == local_58) {
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          *(long *)pSVar15 = local_58;
        }
        lVar11 = 1;
      }
      else {
        lVar11 = (long)iVar14;
        pSVar15 = pSVar15 + (long)iVar8 * 8;
        do {
          lVar4 = lVar11;
          StringName::operator=(pSVar15,(StringName *)(lVar9 + lVar4 * 8));
          lVar11 = lVar4 + 1;
          pSVar15 = pSVar15 + 8;
        } while (lVar4 + 1 < *(long *)(lVar9 + -8));
        iVar8 = (iVar8 - iVar14) + 1 + (int)lVar4;
LAB_00101514:
        lVar11 = (long)iVar8;
      }
      CowData<StringName>::resize<false>((CowData<StringName> *)&local_60,lVar11);
      lVar11 = *in_RDX;
      local_50[0] = 0;
      if ((lVar11 != 0) && (*(long *)(lVar11 + 0x20) != 0)) {
        CowData<StringName>::_ref((CowData<StringName> *)local_50,(CowData *)(lVar11 + 0x20));
      }
      NodePath(param_1,local_68,(Vector *)&local_58,false);
      CowData<StringName>::_unref((CowData<StringName> *)local_50);
      if ((StringName::configured != '\0') && (local_90[0] != 0)) {
        StringName::unref();
      }
      CowData<StringName>::_unref((CowData<StringName> *)&local_60);
      CowData<StringName>::_unref(local_d0);
      CowData<StringName>::_unref((CowData<StringName> *)local_80);
      goto LAB_001015aa;
    }
    uVar7 = 0x10d;
    pcVar6 = "Condition \"!p_np.is_absolute()\" is true. Returning: NodePath()";
  }
  _err_print_error("rel_path_to","core/string/node_path.cpp",uVar7,pcVar6,0,0);
  *(undefined8 *)param_1 = 0;
LAB_001015aa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* NodePath::get_as_property_path() const */

void NodePath::get_as_property_path(void)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  StringName *pSVar10;
  long *in_RSI;
  NodePath *in_RDI;
  long lVar11;
  StringName *this;
  long in_FS_OFFSET;
  bool bVar12;
  long local_78;
  long local_70;
  Vector local_68 [8];
  StringName *local_60;
  char *local_58;
  size_t local_50 [2];
  long local_40;
  
  piVar8 = (int *)*in_RSI;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (piVar8 == (int *)0x0) {
    *(undefined8 *)in_RDI = 0;
    goto LAB_0010176a;
  }
  plVar5 = *(long **)(piVar8 + 4);
  if ((plVar5 == (long *)0x0) || (lVar11 = plVar5[-1], lVar11 == 0)) {
    *(undefined8 *)in_RDI = 0;
    do {
      iVar4 = *piVar8;
      if (iVar4 == 0) goto LAB_0010176a;
      LOCK();
      iVar3 = *piVar8;
      bVar12 = iVar4 == iVar3;
      if (bVar12) {
        *piVar8 = iVar4 + 1;
        iVar3 = iVar4;
      }
      UNLOCK();
    } while (!bVar12);
    if (iVar3 != -1) {
      *(long *)in_RDI = *in_RSI;
    }
    goto LAB_0010176a;
  }
  local_60 = (StringName *)0x0;
  if (*(long *)(piVar8 + 8) != 0) {
    CowData<StringName>::_ref((CowData<StringName> *)&local_60,(CowData *)(piVar8 + 8));
    piVar8 = (int *)*in_RSI;
    plVar5 = *(long **)(piVar8 + 4);
    if (plVar5 == (long *)0x0) {
      lVar11 = 0;
      goto LAB_00101ae3;
    }
    lVar11 = plVar5[-1];
  }
  if (lVar11 < 1) {
LAB_00101ae3:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar11,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar11 = *plVar5;
  if (lVar11 == 0) {
LAB_00101968:
    local_78 = 0;
  }
  else {
    pcVar1 = *(char **)(lVar11 + 8);
    local_78 = 0;
    if (pcVar1 == (char *)0x0) {
      plVar5 = (long *)(*(long *)(lVar11 + 0x10) + -0x10);
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00101968;
      do {
        lVar9 = *plVar5;
        if (lVar9 == 0) goto LAB_0010194e;
        LOCK();
        lVar6 = *plVar5;
        bVar12 = lVar9 == lVar6;
        if (bVar12) {
          *plVar5 = lVar9 + 1;
          lVar6 = lVar9;
        }
        UNLOCK();
      } while (!bVar12);
      if (lVar6 != -1) {
        local_78 = *(long *)(lVar11 + 0x10);
      }
LAB_0010194e:
      piVar8 = (int *)*in_RSI;
    }
    else {
      local_50[0] = strlen(pcVar1);
      local_58 = pcVar1;
      String::parse_latin1((StrRange *)&local_78);
      piVar8 = (int *)*in_RSI;
    }
  }
  lVar11 = *(long *)(piVar8 + 4);
  for (lVar9 = 1; (lVar11 != 0 && (lVar9 < *(long *)(lVar11 + -8))); lVar9 = lVar9 + 1) {
    lVar11 = *(long *)(lVar11 + lVar9 * 8);
    if (lVar11 == 0) {
LAB_00101910:
      local_70 = 0;
    }
    else {
      pcVar1 = *(char **)(lVar11 + 8);
      local_70 = 0;
      if (pcVar1 == (char *)0x0) {
        plVar5 = (long *)(*(long *)(lVar11 + 0x10) + -0x10);
        if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00101910;
        do {
          lVar6 = *plVar5;
          if (lVar6 == 0) goto LAB_00101910;
          LOCK();
          lVar7 = *plVar5;
          bVar12 = lVar6 == lVar7;
          if (bVar12) {
            *plVar5 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar7 != -1) {
          local_70 = *(long *)(lVar11 + 0x10);
        }
      }
      else {
        local_50[0] = strlen(pcVar1);
        local_58 = pcVar1;
        String::parse_latin1((StrRange *)&local_70);
      }
    }
    operator+((char *)&local_58,(String *)&_LC8);
    String::operator+=((String *)&local_78,(StringName *)&local_58);
    pcVar1 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar5 = (long *)(local_58 + -0x10);
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar1 + -0x10,false);
      }
    }
    lVar11 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar5 = (long *)(local_70 + -0x10);
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    lVar11 = *(long *)(*in_RSI + 0x10);
  }
  StringName::StringName((StringName *)&local_58,(String *)&local_78,false);
  if (local_60 == (StringName *)0x0) {
    iVar4 = CowData<StringName>::resize<false>((CowData<StringName> *)&local_60,1);
    if (iVar4 == 0) {
      CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_60);
      this = local_60;
      goto LAB_00101a4a;
    }
LAB_00101b6e:
    _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                     "Condition \"err\" is true. Returning: err",0,0);
  }
  else {
    lVar9 = *(long *)(local_60 + -8);
    lVar11 = lVar9 + 1;
    if (lVar11 < 1) {
      _err_print_index_error
                ("insert","./core/templates/cowdata.h",0xf0,0,lVar11,"p_pos","new_size","",false,
                 false);
    }
    else {
      iVar4 = CowData<StringName>::resize<false>((CowData<StringName> *)&local_60,lVar11);
      if (iVar4 != 0) goto LAB_00101b6e;
      CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_60);
      this = local_60;
      if (lVar9 != 0) {
        pSVar10 = local_60 + lVar9 * 8;
        do {
          if (*(long *)pSVar10 != *(long *)(pSVar10 + -8)) {
            StringName::unref();
            lVar11 = *(long *)(pSVar10 + -8);
            *(long *)(pSVar10 + -8) = 0;
            *(long *)pSVar10 = lVar11;
          }
          pSVar10 = pSVar10 + -8;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
LAB_00101a4a:
      StringName::operator=(this,(StringName *)&local_58);
    }
  }
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  local_50[0] = 0;
  NodePath(in_RDI,(Vector *)&local_58,local_68,false);
  CowData<StringName>::_unref((CowData<StringName> *)local_50);
  lVar11 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar5 = (long *)(local_78 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_60);
LAB_0010176a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<StringName>::push_back(StringName) [clone .isra.0] */

void __thiscall Vector<StringName>::push_back(Vector<StringName> *this,StringName *param_2)

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
  iVar1 = CowData<StringName>::resize<false>((CowData<StringName> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
        StringName::operator=((StringName *)(*(long *)(this + 8) + lVar3 * 8),param_2);
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



/* NodePath::NodePath(String const&) */

void __thiscall NodePath::NodePath(NodePath *this,String *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  wchar32 wVar12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool local_89;
  int *local_88;
  long local_80;
  long local_78;
  long local_70;
  Vector<StringName> local_68 [8];
  long local_60;
  int *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar18 = *(long *)param_1;
  *(undefined8 *)this = 0;
  if ((lVar18 == 0) || (*(uint *)(lVar18 + -8) < 2)) goto LAB_00101d07;
  local_88 = (int *)0x0;
  plVar1 = (long *)(lVar18 + -0x10);
  do {
    lVar18 = *plVar1;
    if (lVar18 == 0) goto LAB_00101d6c;
    LOCK();
    lVar7 = *plVar1;
    bVar19 = lVar18 == lVar7;
    if (bVar19) {
      *plVar1 = lVar18 + 1;
      lVar7 = lVar18;
    }
    UNLOCK();
  } while (!bVar19);
  if (lVar7 != -1) {
    local_88 = *(int **)param_1;
  }
LAB_00101d6c:
  local_60 = 0;
  if ((local_88 == (int *)0x0) || (uVar14 = *(ulong *)(local_88 + -2), uVar14 == 0)) {
    local_89 = false;
    iVar17 = 0;
  }
  else {
    if ((long)uVar14 < 1) {
      uVar6 = 0;
LAB_00102273:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar6,uVar14,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    iVar17 = *local_88;
    local_89 = iVar17 == 0x2f;
  }
  wVar12 = (wchar32)&local_88;
  iVar5 = String::find_char(wVar12,0x3a);
  if (iVar5 != -1) {
    iVar5 = iVar5 + 1;
    uVar6 = (ulong)iVar5;
LAB_00101dcc:
    if (local_88 == (int *)0x0) goto LAB_00102240;
LAB_00101dd5:
    uVar14 = *(ulong *)(local_88 + -2);
    iVar11 = (int)uVar14;
    if (iVar11 == 0) goto LAB_00101e18;
    while (iVar5 < iVar11) {
      while( true ) {
        if (uVar14 == uVar6) goto LAB_00101e80;
        if (((long)uVar6 < 0) || ((long)uVar14 <= (long)uVar6)) goto LAB_00102273;
        if ((local_88[uVar6] == 0x3a) || (local_88[uVar6] == 0)) goto LAB_00101e80;
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 1;
        if (iVar11 != 0) break;
LAB_00101e18:
        if (0 < iVar5) goto LAB_00101e1d;
      }
    }
LAB_00101e1d:
    String::substr((int)&local_58,wVar12);
    piVar4 = local_58;
    piVar9 = local_88;
    if (local_88 == local_58) {
      if (local_58 == (int *)0x0) goto LAB_001025c7;
      LOCK();
      plVar1 = (long *)(local_58 + -4);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (int *)0x0;
        Memory::free_static(piVar4 + -4,false);
      }
    }
    else {
      if (local_88 != (int *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -4);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (int *)0x0;
          Memory::free_static(piVar9 + -4,false);
        }
      }
      local_88 = local_58;
    }
  }
  if (local_88 == (int *)0x0) {
LAB_001025c7:
    bVar19 = true;
    iVar5 = 0;
  }
  else {
    uVar14 = *(ulong *)(local_88 + -2);
    bVar19 = true;
    iVar5 = (int)uVar14;
    if (iVar5 != 0) {
      iVar11 = iVar5 + -1;
      iVar5 = 0;
      for (uVar6 = (ulong)local_89; (int)uVar6 < iVar11; uVar6 = uVar6 + 1) {
        if (uVar6 == uVar14) {
LAB_00102430:
          if (bVar19) {
            iVar5 = iVar5 + 1;
            bVar19 = false;
          }
        }
        else {
          if ((long)uVar14 <= (long)uVar6) goto LAB_00102273;
          if (local_88[uVar6] != 0x2f) goto LAB_00102430;
          bVar19 = true;
        }
      }
      bVar19 = iVar5 == 0;
    }
  }
  if (((iVar17 == 0x2f) || (!bVar19)) || ((local_60 != 0 && (*(long *)(local_60 + -8) != 0)))) {
    puVar8 = (undefined4 *)operator_new(0x40,"");
    *puVar8 = 0;
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 0xc) = 0;
    *(undefined1 (*) [16])(puVar8 + 8) = (undefined1  [16])0x0;
    *(undefined4 **)this = puVar8;
    *puVar8 = 1;
    lVar18 = *(long *)this;
    *(bool *)(lVar18 + 0x38) = local_89;
    if (*(long *)(lVar18 + 0x20) != local_60) {
      CowData<StringName>::_ref((CowData<StringName> *)(lVar18 + 0x20),(CowData *)&local_60);
      lVar18 = *(long *)this;
    }
    *(undefined1 *)(lVar18 + 0x39) = 0;
    if (iVar5 != 0) {
      CowData<StringName>::resize<false>((CowData<StringName> *)(lVar18 + 0x10),(long)iVar5);
      piVar9 = local_88;
      if (local_88 == (int *)0x0) {
        uVar16 = 0;
        uVar10 = 0;
        if (iVar17 != 0x2f) goto LAB_00102389;
      }
      else {
        uVar14 = *(ulong *)(local_88 + -2);
        uVar16 = (uint)local_89;
        uVar10 = uVar14 & 0xffffffff;
        if ((int)uVar14 == 0) {
          if (iVar17 != 0x2f) {
            bVar19 = true;
            uVar6 = 0;
            goto LAB_001021e1;
          }
        }
        else {
          uVar10 = 0;
          bVar19 = true;
          while ((int)uVar16 < (int)uVar14) {
            uVar14 = *(ulong *)(piVar9 + -2);
            uVar6 = (ulong)(int)uVar16;
LAB_001021e1:
            if (uVar14 == uVar6) {
LAB_00102380:
              if (!bVar19) {
                lVar18 = (long)(int)uVar10;
                String::substr((int)(String *)&local_70,wVar12);
                if (*(long *)(*(long *)this + 0x10) == 0) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = *(long *)(*(long *)(*(long *)this + 0x10) + -8);
                }
                if (lVar7 <= lVar18) {
                  _err_print_index_error
                            ("NodePath","core/string/node_path.cpp",0x1d4,lVar18,lVar7,"slice",
                             "data->path.size()","",false,false);
                  lVar18 = local_70;
                  if (local_70 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_70 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_70 = 0;
                      Memory::free_static((void *)(lVar18 + -0x10),false);
                    }
                  }
                  break;
                }
                uVar10 = (ulong)((int)uVar10 + 1);
                StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
                lVar7 = *(long *)this;
                if (*(long *)(lVar7 + 0x10) == 0) {
                  lVar15 = 0;
LAB_001026c6:
                  _err_print_index_error
                            ("operator[]","./core/templates/vector.h",0x38,lVar18,lVar15,"p_index",
                             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                lVar15 = *(long *)(*(long *)(lVar7 + 0x10) + -8);
                if (lVar15 <= lVar18) goto LAB_001026c6;
                CowData<StringName>::_copy_on_write((CowData<StringName> *)(lVar7 + 0x10));
                puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x10) + lVar18 * 8);
                if ((int *)*puVar2 == local_58) {
                  if ((StringName::configured != '\0') && (local_58 != (int *)0x0)) {
                    StringName::unref();
                  }
                }
                else {
                  StringName::unref();
                  *puVar2 = local_58;
                }
                lVar18 = local_70;
                piVar9 = local_88;
                if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_70 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_70 = 0;
                    Memory::free_static((void *)(lVar18 + -0x10),false);
                    piVar9 = local_88;
                  }
                }
              }
LAB_00102389:
              bVar19 = true;
            }
            else {
              if ((long)uVar14 <= (long)uVar6) goto LAB_00102273;
              if ((piVar9[(int)uVar16] == 0x2f) || (piVar9[(int)uVar16] == 0)) goto LAB_00102380;
              bVar19 = false;
            }
            uVar16 = uVar16 + 1;
            if ((piVar9 == (int *)0x0) ||
               (uVar14 = *(ulong *)(piVar9 + -2) & 0xffffffff, (int)*(ulong *)(piVar9 + -2) == 0))
            break;
          }
        }
      }
    }
  }
  goto LAB_00102060;
LAB_00101e80:
  String::substr((int)(String *)&local_80,wVar12);
  if (local_80 != 0) {
    iVar11 = (int)*(undefined8 *)(local_80 + -8);
    if ((iVar11 == 0) || (iVar11 == 1)) {
      if (local_88 == (int *)0x0) {
        if (uVar6 == 0) goto LAB_001022a9;
        uVar14 = 0;
      }
      else {
        uVar14 = *(ulong *)(local_88 + -2);
        if (uVar14 == uVar6) goto LAB_001022a9;
      }
      goto LAB_00101eef;
    }
    StringName::StringName((StringName *)&local_58,(String *)&local_80,false);
    Vector<StringName>::push_back(local_68);
    if ((StringName::configured != '\0') && (local_58 != (int *)0x0)) {
      StringName::unref();
    }
    lVar18 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
      }
    }
    goto LAB_001022be;
  }
  if (local_88 != (int *)0x0) goto code_r0x0010248e;
  uVar14 = 0;
  if (uVar6 != 0) goto LAB_00101eef;
  uVar6 = 1;
  iVar5 = iVar5 + 1;
LAB_00102240:
  if (0 < iVar5) goto LAB_00101e1d;
  if (uVar6 != 0) {
    uVar14 = 0;
    goto LAB_00102273;
  }
  goto LAB_00101e80;
code_r0x0010248e:
  uVar14 = *(ulong *)(local_88 + -2);
  if (uVar14 != uVar6) goto LAB_00101eef;
  iVar5 = iVar5 + 1;
  uVar6 = uVar6 + 1;
  goto LAB_00101dd5;
LAB_00101eef:
  if (((long)uVar6 < 0) || ((long)uVar14 <= (long)uVar6)) goto LAB_00102273;
  if (local_88[uVar6] != 0) goto code_r0x00101f0c;
  if (local_80 != 0) {
LAB_001022a9:
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pvVar13 = (void *)(local_80 + -0x10);
      local_80 = 0;
      Memory::free_static(pvVar13,false);
    }
  }
LAB_001022be:
  iVar5 = iVar5 + 1;
  uVar6 = uVar6 + 1;
  goto LAB_00101dcc;
code_r0x00101f0c:
  local_70 = 0;
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar18 = *plVar1;
      if (lVar18 == 0) goto LAB_00101f42;
      LOCK();
      lVar7 = *plVar1;
      bVar19 = lVar18 == lVar7;
      if (bVar19) {
        *plVar1 = lVar18 + 1;
        lVar7 = lVar18;
      }
      UNLOCK();
    } while (!bVar19);
    if (lVar7 != -1) {
      local_70 = *(long *)param_1;
    }
  }
LAB_00101f42:
  local_78 = 0;
  local_50 = 0x16;
  local_58 = (int *)0x1038f0;
  String::parse_latin1((StrRange *)&local_78);
  vformat<String>(&local_58,(StrRange *)&local_78,&local_70);
  _err_print_error("NodePath","core/string/node_path.cpp",0x1a7,"Method/function failed.",&local_58,
                   0,0);
  piVar9 = local_58;
  if (local_58 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (int *)0x0;
      Memory::free_static(piVar9 + -4,false);
    }
  }
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
  lVar18 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar18 + -0x10),false);
    }
  }
  lVar18 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar18 + -0x10),false);
    }
  }
LAB_00102060:
  CowData<StringName>::_unref((CowData<StringName> *)&local_60);
  piVar9 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = (int *)0x0;
      Memory::free_static(piVar9 + -4,false);
    }
  }
LAB_00101d07:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NodePath::slice(int, int) const */

NodePath * NodePath::slice(int param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int in_ECX;
  int in_EDX;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  StringName *pSVar9;
  undefined4 in_register_00000034;
  long *plVar10;
  undefined4 in_register_0000003c;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  StringName *pSVar15;
  long in_FS_OFFSET;
  CowData<StringName> *local_98;
  CowData<StringName> *local_90;
  long local_88;
  CowData<StringName> *local_80;
  Vector local_78 [8];
  StringName *local_70;
  Vector local_68 [8];
  StringName *local_60 [2];
  long local_50 [2];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000034,param_2);
  lVar13 = *plVar10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar13 == 0) {
    iVar12 = 0;
    local_90 = (CowData<StringName> *)0x0;
    local_88 = 0;
LAB_00102ab6:
    local_50[0] = 0;
LAB_00102ac9:
    local_70 = (StringName *)0x0;
    CowData<StringName>::resize<false>((CowData<StringName> *)&local_70,0);
    CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_70);
  }
  else {
    if (*(long *)(lVar13 + 0x10) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)*(undefined8 *)(*(long *)(lVar13 + 0x10) + -8);
    }
    iVar2 = iVar6;
    if (*(long *)(lVar13 + 0x20) != 0) {
      iVar2 = iVar6 + *(int *)(*(long *)(lVar13 + 0x20) + -8);
    }
    iVar8 = -iVar2;
    iVar12 = iVar2;
    if (in_EDX <= iVar2) {
      iVar12 = in_EDX;
    }
    if (in_EDX < iVar8) {
      iVar12 = iVar8;
    }
    if (iVar12 < 0) {
      iVar12 = iVar12 + iVar2;
    }
    iVar5 = iVar2;
    if (in_ECX <= iVar2) {
      iVar5 = in_ECX;
    }
    lVar14 = (long)iVar12;
    if (iVar8 <= in_ECX) {
      iVar8 = iVar5;
    }
    if (iVar8 < 0) {
      iVar8 = iVar8 + iVar2;
    }
    lVar3 = (long)iVar8;
    iVar8 = iVar8 - iVar6;
    local_50[0] = 0;
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    iVar6 = iVar12 - iVar6;
    local_88 = (long)iVar8;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    local_90 = (CowData<StringName> *)(long)iVar6;
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00102ab6;
    CowData<StringName>::_ref((CowData<StringName> *)local_50,(CowData *)(lVar13 + 0x10));
    lVar13 = local_50[0];
    local_70 = (StringName *)0x0;
    if (local_50[0] == 0) goto LAB_00102ac9;
    lVar1 = *(long *)(local_50[0] + -8);
    lVar7 = -lVar1;
    lVar11 = lVar14;
    if (lVar1 <= lVar14) {
      lVar11 = lVar1;
    }
    if (-lVar14 != lVar1 && lVar14 <= lVar7) {
      lVar11 = lVar7;
    }
    if (lVar11 < 0) {
      lVar11 = lVar11 + lVar1;
    }
    lVar14 = lVar3;
    if (lVar1 <= lVar3) {
      lVar14 = lVar1;
    }
    if (-lVar3 == lVar1 || lVar7 < lVar3) {
      lVar7 = lVar14;
    }
    if (lVar7 < 0) {
      lVar7 = lVar1 + lVar7;
    }
    if (lVar7 < lVar11) {
      _err_print_error("slice","./core/templates/vector.h",0xb8,
                       "Condition \"begin > end\" is true. Returning: result",0,0);
    }
    else {
      lVar7 = lVar7 - lVar11;
      CowData<StringName>::resize<false>((CowData<StringName> *)&local_70,lVar7);
      CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_70);
      if (lVar7 != 0) {
        pSVar15 = (StringName *)(lVar13 + lVar11 * 8);
        lVar13 = 0;
        pSVar9 = local_70;
        do {
          lVar13 = lVar13 + 1;
          StringName::operator=(pSVar9,pSVar15);
          pSVar15 = pSVar15 + 8;
          pSVar9 = pSVar9 + 8;
        } while (lVar13 != lVar7);
      }
    }
  }
  local_80 = (CowData<StringName> *)&local_70;
  local_98 = (CowData<StringName> *)local_50;
  CowData<StringName>::_unref(local_98);
  lVar13 = *plVar10;
  local_50[0] = 0;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x20) != 0)) {
    CowData<StringName>::_ref(local_98,(CowData *)(lVar13 + 0x20));
    lVar13 = local_50[0];
    local_60[0] = (StringName *)0x0;
    if (local_50[0] != 0) {
      lVar14 = *(long *)(local_50[0] + -8);
      lVar3 = -lVar14;
      if (SBORROW8((long)local_90,lVar3) == (long)local_90 + lVar14 < 0) {
        if (lVar14 < (long)local_90) {
          local_90 = (CowData<StringName> *)lVar14;
        }
        if ((long)local_90 < 0) {
          local_90 = (CowData<StringName> *)((long)local_90 + lVar14);
        }
        if (SBORROW8(local_88,lVar3) == local_88 + lVar14 < 0) {
          lVar3 = local_88;
          if (lVar14 < local_88) {
            lVar3 = lVar14;
          }
          if (lVar3 < 0) {
            lVar3 = lVar3 + lVar14;
          }
        }
        if (lVar3 < (long)local_90) {
LAB_00102a2e:
          _err_print_error("slice","./core/templates/vector.h",0xb8,
                           "Condition \"begin > end\" is true. Returning: result",0,0);
          goto LAB_001029a4;
        }
      }
      else {
        local_90 = (CowData<StringName> *)lVar3;
        if (SBORROW8(local_88,lVar3) == local_88 + lVar14 < 0) goto LAB_00102a2e;
      }
      lVar3 = lVar3 - (long)local_90;
      CowData<StringName>::resize<false>((CowData<StringName> *)local_60,lVar3);
      CowData<StringName>::_copy_on_write((CowData<StringName> *)local_60);
      if (lVar3 != 0) {
        pSVar15 = (StringName *)(lVar13 + (long)local_90 * 8);
        lVar13 = 0;
        pSVar9 = local_60[0];
        do {
          lVar13 = lVar13 + 1;
          StringName::operator=(pSVar9,pSVar15);
          pSVar15 = pSVar15 + 8;
          pSVar9 = pSVar9 + 8;
        } while (lVar3 != lVar13);
      }
      goto LAB_001029a4;
    }
  }
  local_60[0] = (StringName *)0x0;
  CowData<StringName>::resize<false>((CowData<StringName> *)local_60,0);
  CowData<StringName>::_copy_on_write((CowData<StringName> *)local_60);
LAB_001029a4:
  local_90 = (CowData<StringName> *)local_60;
  CowData<StringName>::_unref(local_98);
  if (*plVar10 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = (bool)(iVar12 == 0 & *(byte *)(*plVar10 + 0x38));
  }
  NodePath((NodePath *)CONCAT44(in_register_0000003c,param_1),local_78,local_68,bVar4);
  CowData<StringName>::_unref(local_90);
  CowData<StringName>::_unref(local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (NodePath *)CONCAT44(in_register_0000003c,param_1);
}



/* NodePath::prepend_period() */

void __thiscall NodePath::prepend_period(NodePath *this)

{
  CowData<StringName> *this_00;
  long lVar1;
  long *plVar2;
  long lVar3;
  char *__s;
  code *pcVar4;
  char cVar5;
  int iVar6;
  StringName *pSVar7;
  long lVar8;
  StringName *this_01;
  long in_FS_OFFSET;
  bool bVar9;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = *(long **)(*(long *)this + 0x10);
  if ((plVar2 == (long *)0x0) || (lVar3 = plVar2[-1], lVar3 == 0)) goto LAB_00102ce6;
  if (lVar3 < 1) {
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar3,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar3 = *plVar2;
  if (lVar3 == 0) {
LAB_00102d39:
    local_50 = 0;
  }
  else {
    __s = *(char **)(lVar3 + 8);
    local_50 = 0;
    if (__s == (char *)0x0) {
      plVar2 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
      if (*(long *)(lVar3 + 0x10) == 0) goto LAB_00102d39;
      do {
        lVar1 = *plVar2;
        if (lVar1 == 0) goto LAB_00102d39;
        LOCK();
        lVar8 = *plVar2;
        bVar9 = lVar1 == lVar8;
        if (bVar9) {
          *plVar2 = lVar1 + 1;
          lVar8 = lVar1;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar8 != -1) {
        local_50 = *(long *)(lVar3 + 0x10);
      }
    }
    else {
      local_40 = strlen(__s);
      local_48 = __s;
      String::parse_latin1((StrRange *)&local_50);
    }
  }
  cVar5 = String::operator!=((String *)&local_50,".");
  lVar3 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar2 = (long *)(local_50 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (cVar5 == '\0') goto LAB_00102ce6;
  lVar3 = *(long *)this;
  StringName::StringName((StringName *)&local_48,".",false);
  this_00 = (CowData<StringName> *)(lVar3 + 0x10);
  if (*(long *)(lVar3 + 0x10) == 0) {
    iVar6 = CowData<StringName>::resize<false>(this_00,1);
    if (iVar6 == 0) {
      CowData<StringName>::_copy_on_write(this_00);
      this_01 = *(StringName **)(lVar3 + 0x10);
      goto LAB_00102cba;
    }
LAB_00102e18:
    _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                     "Condition \"err\" is true. Returning: err",0,0);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar3 + 0x10) + -8);
    lVar1 = lVar8 + 1;
    if (lVar1 < 1) {
      _err_print_index_error
                ("insert","./core/templates/cowdata.h",0xf0,0,lVar1,"p_pos","new_size","",false,
                 false);
    }
    else {
      iVar6 = CowData<StringName>::resize<false>(this_00,lVar1);
      if (iVar6 != 0) goto LAB_00102e18;
      CowData<StringName>::_copy_on_write(this_00);
      this_01 = *(StringName **)(lVar3 + 0x10);
      if (lVar8 != 0) {
        pSVar7 = this_01 + lVar8 * 8;
        do {
          if (*(long *)pSVar7 != *(long *)(pSVar7 + -8)) {
            StringName::unref();
            lVar3 = *(long *)(pSVar7 + -8);
            *(long *)(pSVar7 + -8) = 0;
            *(long *)pSVar7 = lVar3;
          }
          pSVar7 = pSVar7 + -8;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
LAB_00102cba:
      StringName::operator=(this_01,(StringName *)&local_48);
    }
  }
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  *(undefined1 *)(*(long *)this + 0x39) = 0;
LAB_00102ce6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NodePath::simplify() [clone .part.0] */

void __thiscall NodePath::simplify(NodePath *this)

{
  char *pcVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<StringName> *local_a0;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  iVar10 = 0;
  lVar5 = 0;
  lVar6 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
LAB_00102eb0:
  lVar7 = *(long *)(lVar6 + 0x10);
  if (((lVar7 == 0) || (*(long *)(lVar7 + -8) <= lVar5)) || (*(long *)(lVar7 + -8) == 1))
  goto LAB_00103330;
  lVar6 = *(long *)(lVar7 + lVar5 * 8);
  lVar7 = lVar5 * 8;
  if (lVar6 == 0) {
    local_60 = 0;
  }
  else {
    pcVar1 = *(char **)(lVar6 + 8);
    local_60 = 0;
    if (pcVar1 == (char *)0x0) {
      plVar11 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
      if (*(long *)(lVar6 + 0x10) != 0) {
        do {
          lVar9 = *plVar11;
          if (lVar9 == 0) goto LAB_00102f26;
          LOCK();
          lVar8 = *plVar11;
          bVar12 = lVar9 == lVar8;
          if (bVar12) {
            *plVar11 = lVar9 + 1;
            lVar8 = lVar9;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar8 != -1) {
          local_60 = *(long *)(lVar6 + 0x10);
        }
      }
    }
    else {
      local_50 = strlen(pcVar1);
      local_58 = pcVar1;
      String::parse_latin1((StrRange *)&local_60);
    }
  }
LAB_00102f26:
  cVar4 = String::operator==((String *)&local_60,".");
  lVar6 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar11 = (long *)(local_60 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  lVar6 = *(long *)this;
  if (cVar4 == '\0') goto code_r0x00102f75;
  if (*(long *)(lVar6 + 0x10) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar6 + 0x10) + -8);
    if (lVar5 < lVar9) {
      CowData<StringName>::_copy_on_write((CowData<StringName> *)(lVar6 + 0x10));
      lVar9 = *(long *)(lVar6 + 0x10);
      if (lVar9 == 0) {
        lVar8 = -1;
      }
      else {
        lVar8 = *(long *)(lVar9 + -8) + -1;
        if (lVar5 < lVar8) {
          plVar11 = (long *)(lVar7 + lVar9);
          lVar7 = lVar5;
          do {
            if (*plVar11 != plVar11[1]) {
              StringName::unref();
              lVar9 = plVar11[1];
              plVar11[1] = 0;
              *plVar11 = lVar9;
            }
            lVar7 = lVar7 + 1;
            plVar11 = plVar11 + 1;
          } while (lVar7 != lVar8);
        }
      }
      CowData<StringName>::resize<false>((CowData<StringName> *)(lVar6 + 0x10),lVar8);
      lVar6 = *(long *)this;
      goto LAB_00102eb0;
    }
  }
  _err_print_index_error
            (_LC48,"./core/templates/cowdata.h",0xe4,lVar5,lVar9,"p_index","size()","",false,false);
  lVar6 = *(long *)this;
  goto LAB_00102eb0;
code_r0x00102f75:
  lVar9 = *(long *)(lVar6 + 0x10);
  if (iVar10 == 0) {
    iVar10 = 1;
    lVar5 = 1;
  }
  else {
    if (lVar9 == 0) {
      lVar6 = 0;
      goto LAB_001035e9;
    }
    lVar6 = *(long *)(lVar9 + -8);
    if (lVar6 <= lVar5) goto LAB_001035e9;
    lVar6 = *(long *)(lVar9 + lVar7);
    if (lVar6 == 0) {
      local_60 = 0;
    }
    else {
      pcVar1 = *(char **)(lVar6 + 8);
      local_60 = 0;
      if (pcVar1 == (char *)0x0) {
        plVar11 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
        if (*(long *)(lVar6 + 0x10) != 0) {
          do {
            lVar5 = *plVar11;
            if (lVar5 == 0) goto LAB_00102fda;
            LOCK();
            lVar9 = *plVar11;
            bVar12 = lVar5 == lVar9;
            if (bVar12) {
              *plVar11 = lVar5 + 1;
              lVar9 = lVar5;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar9 != -1) {
            local_60 = *(long *)(lVar6 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar1);
        local_58 = pcVar1;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00102fda:
    cVar4 = String::operator==((String *)&local_60,"..");
    if (cVar4 == '\0') {
      if (local_60 != 0) {
        LOCK();
        plVar11 = (long *)(local_60 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        cVar4 = *plVar11 != 0;
        if (*plVar11 == 0) goto LAB_00103160;
      }
      iVar10 = iVar10 + 1;
      lVar6 = *(long *)this;
      lVar5 = (long)iVar10;
    }
    else {
      lVar5 = (long)(iVar10 + -1);
      lVar9 = *(long *)(*(long *)this + 0x10);
      if (lVar9 == 0) {
LAB_001036e5:
        lVar6 = 0;
LAB_001035e9:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar6 = *(long *)(lVar9 + -8);
      if (lVar6 <= lVar5) goto LAB_001035e9;
      lVar6 = *(long *)(lVar9 + -8 + lVar7);
      if (lVar6 == 0) {
LAB_00103569:
        local_68 = 0;
      }
      else {
        pcVar1 = *(char **)(lVar6 + 8);
        local_68 = 0;
        if (pcVar1 == (char *)0x0) {
          plVar11 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00103569;
          do {
            lVar9 = *plVar11;
            if (lVar9 == 0) goto LAB_00103569;
            LOCK();
            lVar8 = *plVar11;
            bVar12 = lVar9 == lVar8;
            if (bVar12) {
              *plVar11 = lVar9 + 1;
              lVar8 = lVar9;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar8 != -1) {
            local_68 = *(long *)(lVar6 + 0x10);
          }
        }
        else {
          local_50 = strlen(pcVar1);
          local_58 = pcVar1;
          String::parse_latin1((StrRange *)&local_68);
        }
      }
      cVar4 = String::operator!=((String *)&local_68,".");
      if (cVar4 != '\0') {
        lVar9 = *(long *)(*(long *)this + 0x10);
        if (lVar9 == 0) goto LAB_001036e5;
        lVar6 = *(long *)(lVar9 + -8);
        if (lVar6 <= lVar5) goto LAB_001035e9;
        lVar6 = *(long *)(lVar9 + -8 + lVar7);
        if (lVar6 == 0) {
LAB_001035b9:
          local_70 = 0;
        }
        else {
          pcVar1 = *(char **)(lVar6 + 8);
          local_70 = 0;
          if (pcVar1 == (char *)0x0) {
            plVar11 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
            if (*(long *)(lVar6 + 0x10) == 0) goto LAB_001035b9;
            do {
              lVar5 = *plVar11;
              if (lVar5 == 0) goto LAB_001035b9;
              LOCK();
              lVar9 = *plVar11;
              bVar12 = lVar5 == lVar9;
              if (bVar12) {
                *plVar11 = lVar5 + 1;
                lVar9 = lVar5;
              }
              UNLOCK();
            } while (!bVar12);
            if (lVar9 != -1) {
              local_70 = *(long *)(lVar6 + 0x10);
            }
          }
          else {
            local_50 = strlen(pcVar1);
            local_58 = pcVar1;
            String::parse_latin1((StrRange *)&local_70);
          }
        }
        cVar4 = String::operator!=((String *)&local_70,"..");
        lVar6 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar11 = (long *)(local_70 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
      }
      lVar6 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar11 = (long *)(local_68 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      if (local_60 != 0) {
        LOCK();
        plVar11 = (long *)(local_60 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
LAB_00103160:
          lVar6 = local_60;
          local_60 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = *(long *)this;
      if (cVar4 == '\0') {
        iVar10 = iVar10 + 1;
        lVar5 = (long)iVar10;
      }
      else {
        iVar10 = iVar10 + -1;
        lVar5 = (long)iVar10;
        if (*(long *)(lVar6 + 0x10) == 0) {
          lVar9 = 0;
LAB_00103651:
          _err_print_index_error
                    (_LC48,"./core/templates/cowdata.h",0xe4,lVar5,lVar9,"p_index","size()","",false
                     ,false);
          lVar6 = *(long *)this;
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar6 + 0x10) + -8);
          if (lVar9 <= lVar5) goto LAB_00103651;
          CowData<StringName>::_copy_on_write((CowData<StringName> *)(lVar6 + 0x10));
          lVar9 = *(long *)(lVar6 + 0x10);
          if (lVar9 == 0) {
            lVar8 = -1;
          }
          else {
            lVar8 = *(long *)(lVar9 + -8) + -1;
            if (lVar5 < lVar8) {
              plVar11 = (long *)(lVar9 + -8 + lVar7);
              lVar9 = lVar5;
              do {
                if (*plVar11 != plVar11[1]) {
                  StringName::unref();
                  lVar2 = plVar11[1];
                  plVar11[1] = 0;
                  *plVar11 = lVar2;
                }
                lVar9 = lVar9 + 1;
                plVar11 = plVar11 + 1;
              } while (lVar9 != lVar8);
            }
          }
          CowData<StringName>::resize<false>((CowData<StringName> *)(lVar6 + 0x10),lVar8);
          lVar6 = *(long *)this;
        }
        local_a0 = (CowData<StringName> *)(lVar6 + 0x10);
        if (*(long *)(lVar6 + 0x10) == 0) {
          lVar9 = 0;
LAB_0010360f:
          _err_print_index_error
                    (_LC48,"./core/templates/cowdata.h",0xe4,lVar5,lVar9,"p_index","size()","",false
                     ,false);
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar6 + 0x10) + -8);
          if (lVar9 <= lVar5) goto LAB_0010360f;
          CowData<StringName>::_copy_on_write(local_a0);
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 == 0) {
            lVar9 = -1;
          }
          else {
            lVar9 = *(long *)(lVar6 + -8) + -1;
            if (lVar5 < lVar9) {
              plVar11 = (long *)(lVar6 + -8 + lVar7);
              lVar6 = lVar5;
              do {
                if (*plVar11 != plVar11[1]) {
                  StringName::unref();
                  lVar7 = plVar11[1];
                  plVar11[1] = 0;
                  *plVar11 = lVar7;
                }
                lVar6 = lVar6 + 1;
                plVar11 = plVar11 + 1;
              } while (lVar6 != lVar9);
            }
          }
          CowData<StringName>::resize<false>(local_a0,lVar9);
        }
        lVar6 = *(long *)this;
        if ((*(long *)(lVar6 + 0x10) == 0) || (*(long *)(*(long *)(lVar6 + 0x10) + -8) == 0)) {
          StringName::StringName((StringName *)&local_58,".",false);
          Vector<StringName>::push_back((Vector<StringName> *)(lVar6 + 8),(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          lVar6 = *(long *)this;
LAB_00103330:
          *(undefined1 *)(lVar6 + 0x39) = 0;
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
  }
  goto LAB_00102eb0;
}



/* NodePath::simplify() */

void __thiscall NodePath::simplify(NodePath *this)

{
  if (*(long *)this != 0) {
    simplify(this);
    return;
  }
  return;
}



/* NodePath::simplified() const */

void NodePath::simplified(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long *in_RSI;
  NodePath *in_RDI;
  bool bVar5;
  
  piVar2 = (int *)*in_RSI;
  *(undefined8 *)in_RDI = 0;
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      if (iVar1 == 0) goto LAB_00103798;
      LOCK();
      iVar3 = *piVar2;
      bVar5 = iVar1 == iVar3;
      if (bVar5) {
        *piVar2 = iVar1 + 1;
        iVar3 = iVar1;
      }
      UNLOCK();
    } while (!bVar5);
    if (iVar3 == -1) {
LAB_00103798:
      lVar4 = *(long *)in_RDI;
    }
    else {
      lVar4 = *in_RSI;
      *(long *)in_RDI = lVar4;
    }
    if (lVar4 != 0) {
      simplify(in_RDI);
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00103ad8) */
/* WARNING: Removing unreachable block (ram,0x00103c08) */
/* WARNING: Removing unreachable block (ram,0x00103dd0) */
/* WARNING: Removing unreachable block (ram,0x00103c14) */
/* WARNING: Removing unreachable block (ram,0x00103c1e) */
/* WARNING: Removing unreachable block (ram,0x00103db0) */
/* WARNING: Removing unreachable block (ram,0x00103c2a) */
/* WARNING: Removing unreachable block (ram,0x00103c34) */
/* WARNING: Removing unreachable block (ram,0x00103d90) */
/* WARNING: Removing unreachable block (ram,0x00103c40) */
/* WARNING: Removing unreachable block (ram,0x00103c4a) */
/* WARNING: Removing unreachable block (ram,0x00103d70) */
/* WARNING: Removing unreachable block (ram,0x00103c56) */
/* WARNING: Removing unreachable block (ram,0x00103c60) */
/* WARNING: Removing unreachable block (ram,0x00103d50) */
/* WARNING: Removing unreachable block (ram,0x00103c6c) */
/* WARNING: Removing unreachable block (ram,0x00103c76) */
/* WARNING: Removing unreachable block (ram,0x00103d30) */
/* WARNING: Removing unreachable block (ram,0x00103c82) */
/* WARNING: Removing unreachable block (ram,0x00103c8c) */
/* WARNING: Removing unreachable block (ram,0x00103d10) */
/* WARNING: Removing unreachable block (ram,0x00103c94) */
/* WARNING: Removing unreachable block (ram,0x00103caa) */
/* WARNING: Removing unreachable block (ram,0x00103cb6) */
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



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
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
LAB_00104250:
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
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_00104250;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0010412a:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0010412a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_001040f7;
  }
  if (lVar8 == lVar5) {
LAB_001041cb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_001040f7:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_001041ab;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_001041cb;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_001041ab:
  puVar7[-1] = param_1;
  return 0;
}


