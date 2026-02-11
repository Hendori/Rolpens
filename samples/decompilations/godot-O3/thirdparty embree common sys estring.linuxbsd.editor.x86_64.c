
/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.0] */

void std::__cxx11::string::_M_construct<char*>(ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00100044;
    }
    if (__n == 0) goto LAB_00100044;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100044:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */

void std::__cxx11::string::_M_construct<char_const*>
               (ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_001000f4;
    }
    if (__n == 0) goto LAB_001000f4;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_001000f4:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::to_lower(char) */

void embree::to_lower(char param_1)

{
  tolower((int)param_1);
  return;
}



/* embree::to_upper(char) */

void embree::to_upper(char param_1)

{
  toupper((int)param_1);
  return;
}



/* embree::toLowerCase(std::__cxx11::string const&) */

embree * __thiscall embree::toLowerCase(embree *this,string *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  *(embree **)this = this + 0x10;
  std::__cxx11::string::_M_construct<char*>
            (this,*(long *)param_1,*(long *)(param_1 + 8) + *(long *)param_1);
  pcVar2 = *(char **)this;
  pcVar3 = pcVar2 + *(long *)(this + 8);
  for (; pcVar3 != pcVar2; pcVar2 = pcVar2 + 1) {
    iVar1 = tolower((int)*pcVar2);
    *pcVar2 = (char)iVar1;
  }
  return this;
}



/* embree::toUpperCase(std::__cxx11::string const&) */

embree * __thiscall embree::toUpperCase(embree *this,string *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  *(embree **)this = this + 0x10;
  std::__cxx11::string::_M_construct<char*>
            (this,*(long *)param_1,*(long *)(param_1 + 8) + *(long *)param_1);
  pcVar2 = *(char **)this;
  pcVar3 = pcVar2 + *(long *)(this + 8);
  for (; pcVar3 != pcVar2; pcVar2 = pcVar2 + 1) {
    iVar1 = toupper((int)*pcVar2);
    *pcVar2 = (char)iVar1;
  }
  return this;
}



/* embree::string_to_Vec2f(std::__cxx11::string) */

embree * __thiscall embree::string_to_Vec2f(embree *this,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  ulong local_70;
  long *local_68;
  undefined8 local_60;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  fVar7 = __gnu_cxx::__stoa<float,float,char>
                    ((_func_float_char_ptr_char_ptr_ptr *)&strtof,"stof",(char *)*param_2,&local_70)
  ;
  uVar3 = param_2[1];
  uVar2 = local_70 + 1;
  if (uVar3 < uVar2) {
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",uVar2
               ,uVar3);
    goto LAB_001004f0;
  }
  local_68 = local_58;
  std::__cxx11::string::_M_construct<char_const*>(&local_68,*param_2 + uVar2,uVar3 + *param_2);
  plVar4 = (long *)*param_2;
  if (plVar4 == param_2 + 2) {
    if (local_68 == local_58) goto LAB_001003e0;
    *param_2 = (long)local_68;
    param_2[1] = local_60;
    param_2[2] = local_58[0];
    local_68 = local_58;
  }
  else if (local_68 == local_58) {
LAB_001003e0:
    if (local_60 != 0) {
      if (local_60 == 1) {
        *(undefined1 *)plVar4 = (undefined1)local_58[0];
        plVar4 = (long *)*param_2;
      }
      else {
        uVar1 = (uint)local_60;
        uVar3 = local_60 & 0xffffffff;
        if (uVar1 < 8) {
          if ((local_60 & 4) == 0) {
            if (uVar1 != 0) {
              *(undefined1 *)plVar4 = (undefined1)local_58[0];
              if ((local_60 & 2) == 0) goto LAB_0010041a;
              *(undefined2 *)((long)plVar4 + (uVar3 - 2)) =
                   *(undefined2 *)((long)local_58 + (uVar3 - 2));
              plVar4 = (long *)*param_2;
            }
          }
          else {
            *(undefined4 *)plVar4 = (undefined4)local_58[0];
            *(undefined4 *)((long)plVar4 + (uVar3 - 4)) =
                 *(undefined4 *)((long)local_58 + (uVar3 - 4));
            plVar4 = (long *)*param_2;
          }
        }
        else {
          *plVar4 = local_58[0];
          *(undefined8 *)((long)plVar4 + ((local_60 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)local_58 + ((local_60 & 0xffffffff) - 8));
          lVar5 = (long)plVar4 - ((ulong)(plVar4 + 1) & 0xfffffffffffffff8);
          uVar1 = (int)lVar5 + uVar1 & 0xfffffff8;
          if (7 < uVar1) {
            uVar3 = 0;
            do {
              uVar6 = (int)uVar3 + 8;
              *(undefined8 *)(((ulong)(plVar4 + 1) & 0xfffffffffffffff8) + uVar3) =
                   *(undefined8 *)((long)local_58 + (uVar3 - lVar5));
              uVar3 = (ulong)uVar6;
            } while (uVar6 < uVar1);
          }
LAB_0010041a:
          plVar4 = (long *)*param_2;
        }
      }
    }
    param_2[1] = local_60;
    *(undefined1 *)((long)plVar4 + local_60) = 0;
  }
  else {
    *param_2 = (long)local_68;
    lVar5 = param_2[2];
    param_2[1] = local_60;
    param_2[2] = local_58[0];
    local_68 = local_58;
    if (plVar4 != (long *)0x0) {
      local_68 = plVar4;
      local_58[0] = lVar5;
    }
  }
  local_60 = 0;
  *(undefined1 *)local_68 = 0;
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
  fVar8 = __gnu_cxx::__stoa<float,float,char>
                    ((_func_float_char_ptr_char_ptr_ptr *)&strtof,"stof",(char *)*param_2,&local_70)
  ;
  *(float *)(this + 4) = fVar8;
  *(float *)this = fVar7;
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
LAB_001004f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::string_to_Vec3f(std::__cxx11::string) */

embree * __thiscall embree::string_to_Vec3f(embree *this,long *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong local_70;
  long *local_68;
  undefined8 local_60;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  fVar7 = __gnu_cxx::__stoa<float,float,char>
                    ((_func_float_char_ptr_char_ptr_ptr *)&strtof,"stof",(char *)*param_2,&local_70)
  ;
  uVar6 = param_2[1];
  uVar4 = local_70 + 1;
  if (uVar4 <= uVar6) {
    local_68 = local_58;
    std::__cxx11::string::_M_construct<char_const*>(&local_68,*param_2 + uVar4,uVar6 + *param_2);
    plVar5 = (long *)*param_2;
    if (plVar5 == param_2 + 2) {
      if (local_68 == local_58) goto LAB_00100780;
      *param_2 = (long)local_68;
      param_2[1] = local_60;
      param_2[2] = local_58[0];
      local_68 = local_58;
    }
    else if (local_68 == local_58) {
LAB_00100780:
      if (local_60 != 0) {
        if (local_60 == 1) {
          *(undefined1 *)plVar5 = (undefined1)local_58[0];
          plVar5 = (long *)*param_2;
        }
        else {
          uVar3 = (uint)local_60;
          uVar4 = local_60 & 0xffffffff;
          if (uVar3 < 8) {
            if ((local_60 & 4) == 0) {
              if (uVar3 != 0) {
                *(undefined1 *)plVar5 = (undefined1)local_58[0];
                if ((local_60 & 2) == 0) goto LAB_001007c1;
                *(undefined2 *)((long)plVar5 + (uVar4 - 2)) =
                     *(undefined2 *)((long)local_58 + (uVar4 - 2));
                plVar5 = (long *)*param_2;
              }
            }
            else {
              *(undefined4 *)plVar5 = (undefined4)local_58[0];
              *(undefined4 *)((long)plVar5 + (uVar4 - 4)) =
                   *(undefined4 *)((long)local_58 + (uVar4 - 4));
              plVar5 = (long *)*param_2;
            }
          }
          else {
            *plVar5 = local_58[0];
            *(undefined8 *)((long)plVar5 + ((local_60 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)local_58 + ((local_60 & 0xffffffff) - 8));
            lVar2 = (long)plVar5 - ((ulong)(plVar5 + 1) & 0xfffffffffffffff8);
            uVar3 = (int)lVar2 + uVar3 & 0xfffffff8;
            if (7 < uVar3) {
              uVar1 = 0;
              do {
                uVar4 = (ulong)uVar1;
                uVar1 = uVar1 + 8;
                *(undefined8 *)(((ulong)(plVar5 + 1) & 0xfffffffffffffff8) + uVar4) =
                     *(undefined8 *)((long)local_58 + (uVar4 - lVar2));
              } while (uVar1 < uVar3);
            }
LAB_001007c1:
            plVar5 = (long *)*param_2;
          }
        }
      }
      param_2[1] = local_60;
      *(undefined1 *)((long)plVar5 + local_60) = 0;
    }
    else {
      lVar2 = param_2[2];
      *param_2 = (long)local_68;
      param_2[1] = local_60;
      param_2[2] = local_58[0];
      local_68 = local_58;
      if (plVar5 != (long *)0x0) {
        local_68 = plVar5;
        local_58[0] = lVar2;
      }
    }
    local_60 = 0;
    *(undefined1 *)local_68 = 0;
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
    fVar8 = __gnu_cxx::__stoa<float,float,char>
                      ((_func_float_char_ptr_char_ptr_ptr *)&strtof,"stof",(char *)*param_2,
                       &local_70);
    uVar6 = param_2[1];
    uVar4 = local_70 + 1;
    if (uVar4 <= uVar6) {
      local_68 = local_58;
      std::__cxx11::string::_M_construct<char_const*>(&local_68,*param_2 + uVar4,uVar6 + *param_2);
      plVar5 = (long *)*param_2;
      if (plVar5 == param_2 + 2) {
        if (local_68 == local_58) goto LAB_001007e8;
        *param_2 = (long)local_68;
        param_2[1] = local_60;
        param_2[2] = local_58[0];
        local_68 = local_58;
      }
      else if (local_68 == local_58) {
LAB_001007e8:
        if (local_60 != 0) {
          if (local_60 == 1) {
            *(undefined1 *)plVar5 = (undefined1)local_58[0];
            plVar5 = (long *)*param_2;
          }
          else {
            uVar3 = (uint)local_60;
            uVar4 = local_60 & 0xffffffff;
            if (uVar3 < 8) {
              if ((local_60 & 4) == 0) {
                if (uVar3 != 0) {
                  *(undefined1 *)plVar5 = (undefined1)local_58[0];
                  if ((local_60 & 2) == 0) goto LAB_00100829;
                  *(undefined2 *)((long)plVar5 + (uVar4 - 2)) =
                       *(undefined2 *)((long)local_58 + (uVar4 - 2));
                  plVar5 = (long *)*param_2;
                }
              }
              else {
                *(undefined4 *)plVar5 = (undefined4)local_58[0];
                *(undefined4 *)((long)plVar5 + (uVar4 - 4)) =
                     *(undefined4 *)((long)local_58 + (uVar4 - 4));
                plVar5 = (long *)*param_2;
              }
            }
            else {
              *plVar5 = local_58[0];
              *(undefined8 *)((long)plVar5 + ((local_60 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)local_58 + ((local_60 & 0xffffffff) - 8));
              lVar2 = (long)plVar5 - ((ulong)(plVar5 + 1) & 0xfffffffffffffff8);
              uVar3 = (int)lVar2 + uVar3 & 0xfffffff8;
              if (7 < uVar3) {
                uVar1 = 0;
                do {
                  uVar4 = (ulong)uVar1;
                  uVar1 = uVar1 + 8;
                  *(undefined8 *)(((ulong)(plVar5 + 1) & 0xfffffffffffffff8) + uVar4) =
                       *(undefined8 *)((long)local_58 + (uVar4 - lVar2));
                } while (uVar1 < uVar3);
              }
LAB_00100829:
              plVar5 = (long *)*param_2;
            }
          }
        }
        param_2[1] = local_60;
        *(undefined1 *)((long)plVar5 + local_60) = 0;
      }
      else {
        lVar2 = param_2[2];
        *param_2 = (long)local_68;
        param_2[1] = local_60;
        param_2[2] = local_58[0];
        local_68 = local_58;
        if (plVar5 != (long *)0x0) {
          local_68 = plVar5;
          local_58[0] = lVar2;
        }
      }
      local_60 = 0;
      *(undefined1 *)local_68 = 0;
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      fVar9 = __gnu_cxx::__stoa<float,float,char>
                        ((_func_float_char_ptr_char_ptr_ptr *)&strtof,"stof",(char *)*param_2,
                         &local_70);
      *(float *)(this + 8) = fVar9;
      *(float *)this = fVar7;
      *(float *)(this + 4) = fVar8;
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        return this;
      }
      goto LAB_001009b4;
    }
  }
  std::__throw_out_of_range_fmt
            ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",uVar4,
             uVar6);
LAB_001009b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::string_to_Vec4f(std::__cxx11::string) */

embree * __thiscall embree::string_to_Vec4f(embree *this,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  ulong extraout_RDX;
  long *unaff_RBX;
  long *plVar7;
  long *unaff_R14;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long **local_90;
  ulong local_70;
  long *local_68;
  undefined8 local_60;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  fVar8 = __gnu_cxx::__stoa<float,float,char>
                    ((_func_float_char_ptr_char_ptr_ptr *)&strtof,"stof",(char *)*param_2,&local_70)
  ;
  plVar4 = (long *)param_2[1];
  plVar6 = (long *)(local_70 + 1);
  if (plVar4 < plVar6) goto LAB_0010100c;
  local_90 = &local_68;
  unaff_RBX = local_58;
  unaff_R14 = param_2 + 2;
  local_68 = unaff_RBX;
  std::__cxx11::string::_M_construct<char_const*>
            (local_90,*param_2 + (long)plVar6,(long)plVar4 + *param_2);
  plVar4 = (long *)*param_2;
  if (plVar4 == unaff_R14) {
    if (local_68 == unaff_RBX) goto LAB_00100d30;
    *param_2 = (long)local_68;
    param_2[1] = local_60;
    param_2[2] = local_58[0];
  }
  else {
    if (local_68 == unaff_RBX) {
LAB_00100d30:
      if (local_60 == 0) goto LAB_00100d7f;
      if (local_60 == 1) {
        *(undefined1 *)plVar4 = (undefined1)local_58[0];
        plVar4 = (long *)*param_2;
        goto LAB_00100d7f;
      }
      uVar5 = (uint)local_60;
      uVar3 = local_60 & 0xffffffff;
      if (uVar5 < 8) {
        if ((local_60 & 4) != 0) {
          *(undefined4 *)plVar4 = (undefined4)local_58[0];
          *(undefined4 *)((long)plVar4 + (uVar3 - 4)) =
               *(undefined4 *)((long)local_58 + (uVar3 - 4));
          plVar4 = (long *)*param_2;
          goto LAB_00100d7f;
        }
        if (uVar5 == 0) goto LAB_00100d7f;
        *(undefined1 *)plVar4 = (undefined1)local_58[0];
        if ((local_60 & 2) != 0) goto LAB_00101027;
      }
      else {
        *plVar4 = local_58[0];
        *(undefined8 *)((long)plVar4 + ((local_60 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)local_58 + ((local_60 & 0xffffffff) - 8));
        lVar2 = (long)plVar4 - ((ulong)(plVar4 + 1) & 0xfffffffffffffff8);
        uVar5 = (int)lVar2 + uVar5 & 0xfffffff8;
        if (7 < uVar5) {
          uVar3 = 0;
          do {
            uVar1 = (int)uVar3 + 8;
            *(undefined8 *)(((ulong)(plVar4 + 1) & 0xfffffffffffffff8) + uVar3) =
                 *(undefined8 *)((long)unaff_RBX + (uVar3 - lVar2));
            uVar3 = (ulong)uVar1;
          } while (uVar1 < uVar5);
        }
      }
      plVar4 = (long *)*param_2;
      goto LAB_00100d7f;
    }
    lVar2 = param_2[2];
    *param_2 = (long)local_68;
    param_2[1] = local_60;
    param_2[2] = local_58[0];
    plVar7 = unaff_RBX;
    local_68 = plVar4;
    if (plVar4 != (long *)0x0) goto LAB_00100aa0;
  }
  plVar7 = local_58;
  local_68 = unaff_RBX;
  lVar2 = local_58[0];
LAB_00100aa0:
  do {
    local_58[0] = lVar2;
    local_60 = 0;
    *(undefined1 *)local_68 = 0;
    if (local_68 != plVar7) {
      operator_delete(local_68,local_58[0] + 1);
    }
    fVar9 = __gnu_cxx::__stoa<float,float,char>
                      ((_func_float_char_ptr_char_ptr_ptr *)&strtof,"stof",(char *)*param_2,
                       &local_70);
    plVar4 = (long *)param_2[1];
    plVar6 = (long *)(local_70 + 1);
    unaff_RBX = plVar7;
    if (plVar6 <= plVar4) {
      local_68 = plVar7;
      std::__cxx11::string::_M_construct<char_const*>
                (local_90,*param_2 + (long)plVar6,(long)plVar4 + *param_2);
      plVar6 = (long *)*param_2;
      if (plVar6 == unaff_R14) {
        if (local_68 == plVar7) goto LAB_00100d98;
        *param_2 = (long)local_68;
        param_2[1] = local_60;
        param_2[2] = local_58[0];
LAB_00100cee:
        plVar6 = local_58;
        unaff_RBX = local_58;
        local_68 = plVar7;
        lVar2 = local_58[0];
      }
      else if (local_68 == plVar7) {
LAB_00100d98:
        if (local_60 != 0) {
          if (local_60 == 1) {
            *(undefined1 *)plVar6 = (undefined1)local_58[0];
            plVar6 = (long *)*param_2;
          }
          else {
            uVar5 = (uint)local_60;
            uVar3 = local_60 & 0xffffffff;
            if (uVar5 < 8) {
              if ((local_60 & 4) == 0) {
                if (uVar5 != 0) {
                  *(undefined1 *)plVar6 = (undefined1)local_58[0];
                  if ((local_60 & 2) == 0) goto LAB_00100dd9;
                  *(undefined2 *)((long)plVar6 + (uVar3 - 2)) =
                       *(undefined2 *)((long)plVar7 + (uVar3 - 2));
                  plVar6 = (long *)*param_2;
                }
              }
              else {
                *(undefined4 *)plVar6 = (undefined4)local_58[0];
                *(undefined4 *)((long)plVar6 + (uVar3 - 4)) =
                     *(undefined4 *)((long)plVar7 + (uVar3 - 4));
                plVar6 = (long *)*param_2;
              }
            }
            else {
              *plVar6 = local_58[0];
              *(undefined8 *)((long)plVar6 + ((local_60 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)plVar7 + ((local_60 & 0xffffffff) - 8));
              lVar2 = (long)plVar6 - ((ulong)(plVar6 + 1) & 0xfffffffffffffff8);
              uVar5 = (int)lVar2 + uVar5 & 0xfffffff8;
              if (7 < uVar5) {
                uVar3 = 0;
                do {
                  uVar1 = (int)uVar3 + 8;
                  *(undefined8 *)(((ulong)(plVar6 + 1) & 0xfffffffffffffff8) + uVar3) =
                       *(undefined8 *)((long)plVar7 + (uVar3 - lVar2));
                  uVar3 = (ulong)uVar1;
                } while (uVar1 < uVar5);
              }
LAB_00100dd9:
              plVar6 = (long *)*param_2;
            }
          }
        }
        param_2[1] = local_60;
        *(undefined1 *)((long)plVar6 + local_60) = 0;
        plVar6 = local_68;
        lVar2 = local_58[0];
      }
      else {
        lVar2 = param_2[2];
        *param_2 = (long)local_68;
        param_2[1] = local_60;
        param_2[2] = local_58[0];
        local_68 = plVar6;
        if (plVar6 == (long *)0x0) goto LAB_00100cee;
      }
      local_58[0] = lVar2;
      local_60 = 0;
      *(undefined1 *)plVar6 = 0;
      if (local_68 != unaff_RBX) {
        operator_delete(local_68,local_58[0] + 1);
      }
      fVar10 = __gnu_cxx::__stoa<float,float,char>
                         ((_func_float_char_ptr_char_ptr_ptr *)&strtof,"stof",(char *)*param_2,
                          &local_70);
      plVar4 = (long *)param_2[1];
      plVar6 = (long *)(local_70 + 1);
      if (plVar6 <= plVar4) break;
    }
LAB_0010100c:
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
               plVar6);
    uVar3 = extraout_RDX;
LAB_00101027:
    *(undefined2 *)((long)plVar4 + (uVar3 - 2)) = *(undefined2 *)((long)unaff_RBX + (uVar3 - 2));
    plVar4 = (long *)*param_2;
LAB_00100d7f:
    param_2[1] = local_60;
    *(undefined1 *)((long)plVar4 + local_60) = 0;
    plVar7 = unaff_RBX;
    lVar2 = local_58[0];
  } while( true );
  local_68 = unaff_RBX;
  std::__cxx11::string::_M_construct<char_const*>
            (local_90,*param_2 + (long)plVar6,(long)plVar4 + *param_2);
  plVar6 = (long *)*param_2;
  plVar4 = unaff_RBX;
  if (plVar6 == unaff_R14) {
    if (local_68 == unaff_RBX) goto LAB_00100e00;
    *param_2 = (long)local_68;
    param_2[1] = local_60;
    param_2[2] = local_58[0];
  }
  else {
    if (local_68 == unaff_RBX) {
LAB_00100e00:
      if (local_60 != 0) {
        if (local_60 == 1) {
          *(undefined1 *)plVar6 = (undefined1)local_58[0];
          plVar6 = (long *)*param_2;
        }
        else {
          uVar5 = (uint)local_60;
          uVar3 = local_60 & 0xffffffff;
          if (uVar5 < 8) {
            if ((local_60 & 4) == 0) {
              if (uVar5 != 0) {
                *(undefined1 *)plVar6 = (undefined1)local_58[0];
                if ((local_60 & 2) == 0) goto LAB_00100e3d;
                *(undefined2 *)((long)plVar6 + (uVar3 - 2)) =
                     *(undefined2 *)((long)unaff_RBX + (uVar3 - 2));
                plVar6 = (long *)*param_2;
              }
            }
            else {
              *(undefined4 *)plVar6 = (undefined4)local_58[0];
              *(undefined4 *)((long)plVar6 + (uVar3 - 4)) =
                   *(undefined4 *)((long)unaff_RBX + (uVar3 - 4));
              plVar6 = (long *)*param_2;
            }
          }
          else {
            *plVar6 = local_58[0];
            *(undefined8 *)((long)plVar6 + ((local_60 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)unaff_RBX + ((local_60 & 0xffffffff) - 8));
            lVar2 = (long)plVar6 - ((ulong)(plVar6 + 1) & 0xfffffffffffffff8);
            uVar5 = (int)lVar2 + uVar5 & 0xfffffff8;
            if (7 < uVar5) {
              uVar3 = 0;
              do {
                uVar1 = (int)uVar3 + 8;
                *(undefined8 *)(((ulong)(plVar6 + 1) & 0xfffffffffffffff8) + uVar3) =
                     *(undefined8 *)((long)unaff_RBX + (uVar3 - lVar2));
                uVar3 = (ulong)uVar1;
              } while (uVar1 < uVar5);
            }
LAB_00100e3d:
            plVar6 = (long *)*param_2;
          }
        }
      }
      param_2[1] = local_60;
      *(undefined1 *)((long)plVar6 + local_60) = 0;
      plVar6 = local_68;
      lVar2 = local_58[0];
      goto LAB_00100c0c;
    }
    lVar2 = param_2[2];
    *param_2 = (long)local_68;
    param_2[1] = local_60;
    param_2[2] = local_58[0];
    local_68 = plVar6;
    if (plVar6 != (long *)0x0) goto LAB_00100c0c;
  }
  plVar6 = local_58;
  plVar4 = local_58;
  local_68 = unaff_RBX;
  lVar2 = local_58[0];
LAB_00100c0c:
  local_58[0] = lVar2;
  local_60 = 0;
  *(undefined1 *)plVar6 = 0;
  if (local_68 != plVar4) {
    operator_delete(local_68,local_58[0] + 1);
  }
  fVar11 = __gnu_cxx::__stoa<float,float,char>
                     ((_func_float_char_ptr_char_ptr_ptr *)&strtof,"stof",(char *)*param_2,&local_70
                     );
  *(float *)(this + 0xc) = fVar11;
  *(float *)this = fVar8;
  *(float *)(this + 4) = fVar9;
  *(float *)(this + 8) = fVar10;
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


