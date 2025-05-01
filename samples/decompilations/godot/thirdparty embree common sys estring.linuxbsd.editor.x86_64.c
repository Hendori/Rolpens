
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
  ulong __n;
  embree *__src;
  int iVar1;
  char *pcVar2;
  embree *__dest;
  char *pcVar3;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __dest = this + 0x10;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(embree **)this = __dest;
  __n = *(ulong *)(param_1 + 8);
  __src = *(embree **)param_1;
  local_28 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = *__src;
      goto LAB_00100086;
    }
    if (__n == 0) goto LAB_00100086;
  }
  else {
    __dest = (embree *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_28);
    *(embree **)this = __dest;
    *(ulong *)(this + 0x10) = local_28;
  }
  memcpy(__dest,__src,__n);
  __dest = *(embree **)this;
LAB_00100086:
  *(ulong *)(this + 8) = local_28;
  __dest[local_28] = (embree)0x0;
  pcVar2 = *(char **)this;
  pcVar3 = pcVar2 + *(long *)(this + 8);
  for (; pcVar3 != pcVar2; pcVar2 = pcVar2 + 1) {
    iVar1 = tolower((int)*pcVar2);
    *pcVar2 = (char)iVar1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::toUpperCase(std::__cxx11::string const&) */

embree * __thiscall embree::toUpperCase(embree *this,string *param_1)

{
  ulong __n;
  embree *__src;
  int iVar1;
  char *pcVar2;
  embree *__dest;
  char *pcVar3;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __dest = this + 0x10;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(embree **)this = __dest;
  __n = *(ulong *)(param_1 + 8);
  __src = *(embree **)param_1;
  local_28 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = *__src;
      goto LAB_00100166;
    }
    if (__n == 0) goto LAB_00100166;
  }
  else {
    __dest = (embree *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_28);
    *(embree **)this = __dest;
    *(ulong *)(this + 0x10) = local_28;
  }
  memcpy(__dest,__src,__n);
  __dest = *(embree **)this;
LAB_00100166:
  *(ulong *)(this + 8) = local_28;
  __dest[local_28] = (embree)0x0;
  pcVar2 = *(char **)this;
  pcVar3 = pcVar2 + *(long *)(this + 8);
  for (; pcVar3 != pcVar2; pcVar2 = pcVar2 + 1) {
    iVar1 = toupper((int)*pcVar2);
    *pcVar2 = (char)iVar1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::string_to_Vec2f(std::__cxx11::string) */

embree * __thiscall embree::string_to_Vec2f(embree *this,long *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  char **ppcVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  char *extraout_RDX;
  char *pcVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  char *local_78;
  char *local_70;
  char **local_68;
  undefined8 local_60;
  char *local_58 [3];
  long local_40;
  
  pcVar10 = (char *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  *piVar3 = 0;
  fVar11 = strtof(pcVar10,&local_70);
  if (pcVar10 == local_70) {
LAB_00100551:
    std::__throw_invalid_argument("stof");
    pcVar8 = extraout_RDX;
  }
  else {
    if (*piVar3 == 0x22) {
LAB_00100545:
      std::__throw_out_of_range("stof");
      goto LAB_00100551;
    }
    if (*piVar3 == 0) {
      *piVar3 = iVar1;
    }
    pcVar9 = (char *)param_2[1];
    pcVar8 = local_70 + (1 - (long)pcVar10);
    pcVar10 = pcVar9;
    if (pcVar8 <= pcVar9) {
      lVar6 = *param_2;
      pcVar9 = pcVar9 + -(long)pcVar8;
      local_68 = local_58;
      local_70 = pcVar9;
      if (pcVar9 < (char *)0x10) {
        if (pcVar9 == (char *)0x1) {
          local_58[0] = (char *)CONCAT71(local_58[0]._1_7_,pcVar8[lVar6]);
        }
        else if (pcVar9 != (char *)0x0) goto LAB_001003fe;
      }
      else {
        local_68 = (char **)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
        local_58[0] = local_70;
LAB_001003fe:
        memcpy(local_68,pcVar8 + lVar6,(size_t)pcVar9);
      }
      local_60 = local_70;
      *(char *)((long)local_68 + (long)local_70) = '\0';
      ppcVar5 = (char **)*param_2;
      if (ppcVar5 == (char **)(param_2 + 2)) {
        if (local_68 == local_58) goto LAB_00100450;
        *param_2 = (long)local_68;
        param_2[1] = (long)local_70;
        param_2[2] = (long)local_58[0];
        local_68 = local_58;
      }
      else if (local_68 == local_58) {
LAB_00100450:
        if (local_70 != (char *)0x0) {
          if (local_70 == (char *)0x1) {
            *(undefined1 *)ppcVar5 = local_58[0]._0_1_;
            ppcVar5 = (char **)*param_2;
          }
          else {
            uVar2 = (uint)local_70;
            uVar4 = (ulong)local_70 & 0xffffffff;
            if (uVar2 < 8) {
              if (((ulong)local_70 & 4) == 0) {
                if (uVar2 != 0) {
                  *(undefined1 *)ppcVar5 = local_58[0]._0_1_;
                  if (((ulong)local_70 & 2) == 0) goto LAB_0010048a;
                  *(undefined2 *)((long)ppcVar5 + (uVar4 - 2)) =
                       *(undefined2 *)((long)local_58 + (uVar4 - 2));
                  ppcVar5 = (char **)*param_2;
                }
              }
              else {
                *(undefined4 *)ppcVar5 = local_58[0]._0_4_;
                *(undefined4 *)((long)ppcVar5 + (uVar4 - 4)) =
                     *(undefined4 *)((long)local_58 + (uVar4 - 4));
                ppcVar5 = (char **)*param_2;
              }
            }
            else {
              *ppcVar5 = local_58[0];
              *(undefined8 *)((long)ppcVar5 + (((ulong)local_70 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)local_58 + (((ulong)local_70 & 0xffffffff) - 8));
              lVar6 = (long)ppcVar5 - ((ulong)(ppcVar5 + 1) & 0xfffffffffffffff8);
              uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
              if (7 < uVar2) {
                uVar4 = 0;
                do {
                  uVar7 = (int)uVar4 + 8;
                  *(undefined8 *)(((ulong)(ppcVar5 + 1) & 0xfffffffffffffff8) + uVar4) =
                       *(undefined8 *)((long)local_58 + (uVar4 - lVar6));
                  uVar4 = (ulong)uVar7;
                } while (uVar7 < uVar2);
              }
LAB_0010048a:
              ppcVar5 = (char **)*param_2;
            }
          }
        }
        param_2[1] = (long)local_70;
        *(char *)((long)ppcVar5 + (long)local_70) = '\0';
      }
      else {
        *param_2 = (long)local_68;
        pcVar10 = (char *)param_2[2];
        param_2[1] = (long)local_70;
        param_2[2] = (long)local_58[0];
        local_68 = local_58;
        if (ppcVar5 != (char **)0x0) {
          local_68 = ppcVar5;
          local_58[0] = pcVar10;
        }
      }
      local_60 = (char *)0x0;
      *(undefined1 *)local_68 = 0;
      if (local_68 != local_58) {
        operator_delete(local_68,(ulong)(local_58[0] + 1));
      }
      pcVar10 = (char *)*param_2;
      iVar1 = *piVar3;
      *piVar3 = 0;
      fVar12 = strtof(pcVar10,&local_78);
      if (pcVar10 == local_78) goto LAB_00100551;
      if (*piVar3 != 0x22) {
        if (*piVar3 == 0) {
          *piVar3 = iVar1;
        }
        *(float *)(this + 4) = fVar12;
        *(float *)this = fVar11;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return this;
        }
        goto LAB_00100575;
      }
      goto LAB_00100545;
    }
  }
  std::__throw_out_of_range_fmt
            ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",pcVar8,
             pcVar10);
LAB_00100575:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::string_to_Vec3f(std::__cxx11::string) */

embree * __thiscall embree::string_to_Vec3f(embree *this,long *param_2)

{
  long ****pppplVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long ****pppplVar5;
  long lVar6;
  uint uVar7;
  long ****pppplVar8;
  char *pcVar9;
  long ****extraout_RDX;
  long ****pppplVar10;
  long ****pppplVar11;
  char *unaff_R15;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  long ***local_98;
  char *local_80;
  char *local_78;
  long ***local_70;
  long ***local_68;
  long ***local_60;
  long ***local_58 [3];
  long local_40;
  
  pppplVar8 = (long ****)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (uint *)__errno_location();
  uVar2 = *puVar3;
  pppplVar11 = (long ****)(ulong)uVar2;
  *puVar3 = 0;
  fVar12 = strtof((char *)pppplVar8,(char **)&local_70);
  if (pppplVar8 != (long ****)local_70) {
    if (*puVar3 != 0x22) {
      if (*puVar3 == 0) {
        *puVar3 = uVar2;
      }
      pppplVar10 = (long ****)param_2[1];
      pppplVar8 = (long ****)((long)local_70 + (1 - (long)pppplVar8));
      if (pppplVar10 < pppplVar8) goto LAB_00100be6;
      local_98 = (long ***)&local_68;
      pppplVar11 = local_58;
      pppplVar10 = (long ****)((long)pppplVar10 - (long)pppplVar8);
      unaff_R15 = (char *)(*param_2 + (long)pppplVar8);
      local_68 = (long ***)pppplVar11;
      local_70 = (long ***)pppplVar10;
      if ((long ****)0xf < pppplVar10) {
        pppplVar8 = (long ****)std::__cxx11::string::_M_create((ulong *)local_98,(ulong)&local_70);
        local_58[0] = local_70;
        local_68 = (long ***)pppplVar8;
        goto LAB_001008c1;
      }
      pppplVar8 = pppplVar11;
      if (pppplVar10 == (long ****)0x1) {
        local_58[0] = (long ***)CONCAT71(local_58[0]._1_7_,*unaff_R15);
      }
      else if (pppplVar10 != (long ****)0x0) goto LAB_001008c1;
      do {
        local_60 = local_70;
        *(char *)((long)local_68 + (long)local_70) = '\0';
        pppplVar5 = (long ****)*param_2;
        pppplVar10 = (long ****)(param_2 + 2);
        pppplVar11 = pppplVar8;
        if (pppplVar5 == pppplVar10) {
          if ((long ****)local_68 == pppplVar8) goto LAB_00100998;
          *param_2 = (long)local_68;
          param_2[1] = (long)local_70;
          param_2[2] = (long)local_58[0];
LAB_0010094b:
          pppplVar5 = local_58;
          pppplVar11 = local_58;
          local_68 = (long ***)pppplVar8;
          pppplVar1 = (long ****)local_58[0];
        }
        else if ((long ****)local_68 == pppplVar8) {
LAB_00100998:
          if ((long ****)local_70 != (long ****)0x0) {
            if ((long ****)local_70 == (long ****)0x1) {
              *(char *)pppplVar5 = (char)local_58[0];
              pppplVar5 = (long ****)*param_2;
            }
            else {
              uVar2 = (uint)local_70;
              uVar4 = (ulong)local_70 & 0xffffffff;
              if (uVar2 < 8) {
                if (((ulong)local_70 & 4) == 0) {
                  if (uVar2 != 0) {
                    *(char *)pppplVar5 = (char)local_58[0];
                    if (((ulong)local_70 & 2) == 0) goto LAB_001009d8;
                    *(undefined2 *)((long)pppplVar5 + (uVar4 - 2)) =
                         *(undefined2 *)((long)pppplVar8 + (uVar4 - 2));
                    pppplVar5 = (long ****)*param_2;
                  }
                }
                else {
                  *(undefined4 *)pppplVar5 = local_58[0]._0_4_;
                  *(undefined4 *)((long)pppplVar5 + (uVar4 - 4)) =
                       *(undefined4 *)((long)pppplVar8 + (uVar4 - 4));
                  pppplVar5 = (long ****)*param_2;
                }
              }
              else {
                *pppplVar5 = local_58[0];
                *(undefined8 *)((long)pppplVar5 + (((ulong)local_70 & 0xffffffff) - 8)) =
                     *(undefined8 *)((long)pppplVar8 + (((ulong)local_70 & 0xffffffff) - 8));
                lVar6 = (long)pppplVar5 - ((ulong)(pppplVar5 + 1) & 0xfffffffffffffff8);
                uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
                if (7 < uVar2) {
                  uVar7 = 0;
                  do {
                    uVar4 = (ulong)uVar7;
                    uVar7 = uVar7 + 8;
                    *(undefined8 *)(((ulong)(pppplVar5 + 1) & 0xfffffffffffffff8) + uVar4) =
                         *(undefined8 *)((long)pppplVar8 + (uVar4 - lVar6));
                  } while (uVar7 < uVar2);
                }
LAB_001009d8:
                pppplVar5 = (long ****)*param_2;
              }
            }
          }
          param_2[1] = (long)local_70;
          *(char *)((long)pppplVar5 + (long)local_70) = '\0';
          pppplVar5 = (long ****)local_68;
          pppplVar1 = (long ****)local_58[0];
        }
        else {
          pppplVar1 = (long ****)param_2[2];
          *param_2 = (long)local_68;
          param_2[1] = (long)local_70;
          param_2[2] = (long)local_58[0];
          local_68 = (long ***)pppplVar5;
          if (pppplVar5 == (long ****)0x0) goto LAB_0010094b;
        }
        local_58[0] = (long ***)pppplVar1;
        local_60 = (long ***)0x0;
        *(char *)pppplVar5 = '\0';
        if ((long ****)local_68 != pppplVar11) {
          operator_delete(local_68,(ulong)((long)local_58[0] + 1));
        }
        pcVar9 = (char *)*param_2;
        uVar2 = *puVar3;
        *puVar3 = 0;
        fVar13 = strtof(pcVar9,&local_78);
        if (pcVar9 == local_78) goto LAB_00100bbd;
        if (*puVar3 == 0x22) break;
        if (*puVar3 == 0) {
          *puVar3 = uVar2;
        }
        unaff_R15 = (char *)param_2[1];
        pcVar9 = local_78 + (1 - (long)pcVar9);
        if (pcVar9 <= unaff_R15) goto code_r0x00100734;
        std::__throw_out_of_range_fmt
                  ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
                   pcVar9,unaff_R15);
        pppplVar8 = extraout_RDX;
LAB_00100be6:
        std::__throw_out_of_range_fmt
                  ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
                   pppplVar8,pppplVar10);
        pppplVar8 = pppplVar11;
LAB_001008c1:
        memcpy(pppplVar8,unaff_R15,(size_t)pppplVar10);
        pppplVar8 = pppplVar11;
      } while( true );
    }
    goto LAB_00100bb1;
  }
  goto LAB_00100bbd;
code_r0x00100734:
  lVar6 = *param_2;
  pppplVar8 = (long ****)(unaff_R15 + -(long)pcVar9);
  local_68 = (long ***)pppplVar11;
  local_70 = (long ***)pppplVar8;
  if (pppplVar8 < (long ****)0x10) {
    if (pppplVar8 == (long ****)0x1) {
      local_58[0] = (long ***)CONCAT71(local_58[0]._1_7_,pcVar9[lVar6]);
    }
    else if (pppplVar8 != (long ****)0x0) goto LAB_0010090d;
  }
  else {
    local_68 = (long ***)std::__cxx11::string::_M_create((ulong *)local_98,(ulong)&local_70);
    local_58[0] = local_70;
LAB_0010090d:
    memcpy(local_68,pcVar9 + lVar6,(size_t)pppplVar8);
  }
  local_60 = local_70;
  *(char *)((long)local_68 + (long)local_70) = '\0';
  pppplVar8 = (long ****)*param_2;
  pppplVar5 = pppplVar11;
  if (pppplVar8 == pppplVar10) {
    if ((long ****)local_68 == pppplVar11) goto LAB_00100a00;
    *param_2 = (long)local_68;
    param_2[1] = (long)local_70;
    param_2[2] = (long)local_58[0];
LAB_0010097f:
    pppplVar8 = local_58;
    pppplVar5 = local_58;
    local_68 = (long ***)pppplVar11;
    pppplVar10 = (long ****)local_58[0];
  }
  else if ((long ****)local_68 == pppplVar11) {
LAB_00100a00:
    if ((long ****)local_70 != (long ****)0x0) {
      if ((long ****)local_70 == (long ****)0x1) {
        *(char *)pppplVar8 = (char)local_58[0];
        pppplVar8 = (long ****)*param_2;
      }
      else {
        uVar2 = (uint)local_70;
        uVar4 = (ulong)local_70 & 0xffffffff;
        if (uVar2 < 8) {
          if (((ulong)local_70 & 4) == 0) {
            if (uVar2 != 0) {
              *(char *)pppplVar8 = (char)local_58[0];
              if (((ulong)local_70 & 2) == 0) goto LAB_00100a3c;
              *(undefined2 *)((long)pppplVar8 + (uVar4 - 2)) =
                   *(undefined2 *)((long)pppplVar11 + (uVar4 - 2));
              pppplVar8 = (long ****)*param_2;
            }
          }
          else {
            *(undefined4 *)pppplVar8 = local_58[0]._0_4_;
            *(undefined4 *)((long)pppplVar8 + (uVar4 - 4)) =
                 *(undefined4 *)((long)pppplVar11 + (uVar4 - 4));
            pppplVar8 = (long ****)*param_2;
          }
        }
        else {
          *pppplVar8 = local_58[0];
          *(undefined8 *)((long)pppplVar8 + (((ulong)local_70 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)pppplVar11 + (((ulong)local_70 & 0xffffffff) - 8));
          lVar6 = (long)pppplVar8 - ((ulong)(pppplVar8 + 1) & 0xfffffffffffffff8);
          uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
          if (7 < uVar2) {
            uVar7 = 0;
            do {
              uVar4 = (ulong)uVar7;
              uVar7 = uVar7 + 8;
              *(undefined8 *)(((ulong)(pppplVar8 + 1) & 0xfffffffffffffff8) + uVar4) =
                   *(undefined8 *)((long)pppplVar11 + (uVar4 - lVar6));
            } while (uVar7 < uVar2);
          }
LAB_00100a3c:
          pppplVar8 = (long ****)*param_2;
        }
      }
    }
    param_2[1] = (long)local_70;
    *(char *)((long)pppplVar8 + (long)local_70) = '\0';
    pppplVar8 = (long ****)local_68;
    pppplVar10 = (long ****)local_58[0];
  }
  else {
    pppplVar10 = (long ****)param_2[2];
    *param_2 = (long)local_68;
    param_2[1] = (long)local_70;
    param_2[2] = (long)local_58[0];
    local_68 = (long ***)pppplVar8;
    if (pppplVar8 == (long ****)0x0) goto LAB_0010097f;
  }
  local_58[0] = (long ***)pppplVar10;
  local_60 = (long ***)0x0;
  *(char *)pppplVar8 = '\0';
  if ((long ****)local_68 != pppplVar5) {
    operator_delete(local_68,(ulong)((long)local_58[0] + 1));
  }
  pcVar9 = (char *)*param_2;
  uVar2 = *puVar3;
  *puVar3 = 0;
  fVar14 = strtof(pcVar9,&local_80);
  if (pcVar9 != local_80) {
    if (*puVar3 != 0x22) {
      if (*puVar3 == 0) {
        *puVar3 = uVar2;
      }
      *(float *)(this + 8) = fVar14;
      *(float *)this = fVar12;
      *(float *)(this + 4) = fVar13;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return this;
      }
      goto LAB_00100bc9;
    }
LAB_00100bb1:
    std::__throw_out_of_range("stof");
  }
LAB_00100bbd:
  std::__throw_invalid_argument("stof");
LAB_00100bc9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::string_to_Vec4f(std::__cxx11::string) */

embree * __thiscall embree::string_to_Vec4f(embree *this,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  long ****pppplVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long ****pppplVar7;
  char *pcVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  char *unaff_R15;
  char *pcVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float local_ac;
  long ***local_98;
  long *local_88;
  char *local_80;
  char *local_78;
  long ***local_70;
  long ***local_68;
  long ***local_60;
  long ***local_58 [3];
  long local_40;
  
  pppplVar7 = (long ****)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (uint *)__errno_location();
  uVar1 = *puVar2;
  pppplVar3 = (long ****)(ulong)uVar1;
  *puVar2 = 0;
  fVar13 = strtof((char *)pppplVar7,(char **)&local_70);
  if (pppplVar7 == (long ****)local_70) goto LAB_001014c4;
  if (*puVar2 == 0x22) goto LAB_001014d0;
  if (*puVar2 == 0) {
    *puVar2 = uVar1;
  }
  pppplVar10 = (long ****)param_2[1];
  pppplVar7 = (long ****)((long)local_70 + (1 - (long)pppplVar7));
  if (pppplVar10 < pppplVar7) {
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
               pppplVar7,pppplVar10);
    pppplVar9 = pppplVar3;
LAB_00101061:
    memcpy(pppplVar3,unaff_R15,(size_t)pppplVar10);
  }
  else {
    local_98 = (long ***)&local_68;
    pppplVar9 = local_58;
    pppplVar10 = (long ****)((long)pppplVar10 - (long)pppplVar7);
    unaff_R15 = (char *)(*param_2 + (long)pppplVar7);
    local_68 = (long ***)pppplVar9;
    local_70 = (long ***)pppplVar10;
    if ((long ****)0xf < pppplVar10) {
      pppplVar3 = (long ****)std::__cxx11::string::_M_create((ulong *)local_98,(ulong)&local_70);
      local_58[0] = local_70;
      local_68 = (long ***)pppplVar3;
      goto LAB_00101061;
    }
    if (pppplVar10 == (long ****)0x1) {
      local_58[0] = (long ***)CONCAT71(local_58[0]._1_7_,*unaff_R15);
    }
    else {
      pppplVar3 = pppplVar9;
      if (pppplVar10 != (long ****)0x0) goto LAB_00101061;
    }
  }
  local_60 = local_70;
  *(char *)((long)local_68 + (long)local_70) = '\0';
  pppplVar10 = (long ****)*param_2;
  pppplVar7 = (long ****)(param_2 + 2);
  pppplVar3 = pppplVar9;
  if (pppplVar10 == pppplVar7) {
    if ((long ****)local_68 == pppplVar9) goto LAB_001011c8;
    *param_2 = (long)local_68;
    param_2[1] = (long)local_70;
    param_2[2] = (long)local_58[0];
LAB_0010113f:
    pppplVar10 = local_58;
    pppplVar3 = local_58;
    local_68 = (long ***)pppplVar9;
    pppplVar11 = (long ****)local_58[0];
  }
  else if ((long ****)local_68 == pppplVar9) {
LAB_001011c8:
    if ((long ****)local_70 != (long ****)0x0) {
      if ((long ****)local_70 == (long ****)0x1) {
        *(char *)pppplVar10 = (char)local_58[0];
        pppplVar10 = (long ****)*param_2;
      }
      else {
        uVar1 = (uint)local_70;
        uVar4 = (ulong)local_70 & 0xffffffff;
        if (uVar1 < 8) {
          if (((ulong)local_70 & 4) == 0) {
            if (uVar1 != 0) {
              *(char *)pppplVar10 = (char)local_58[0];
              if (((ulong)local_70 & 2) == 0) goto LAB_00101208;
              *(undefined2 *)((long)pppplVar10 + (uVar4 - 2)) =
                   *(undefined2 *)((long)pppplVar9 + (uVar4 - 2));
              pppplVar10 = (long ****)*param_2;
            }
          }
          else {
            *(undefined4 *)pppplVar10 = local_58[0]._0_4_;
            *(undefined4 *)((long)pppplVar10 + (uVar4 - 4)) =
                 *(undefined4 *)((long)pppplVar9 + (uVar4 - 4));
            pppplVar10 = (long ****)*param_2;
          }
        }
        else {
          *pppplVar10 = local_58[0];
          *(undefined8 *)((long)pppplVar10 + (((ulong)local_70 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)pppplVar9 + (((ulong)local_70 & 0xffffffff) - 8));
          lVar5 = (long)pppplVar10 - ((ulong)(pppplVar10 + 1) & 0xfffffffffffffff8);
          uVar1 = (int)lVar5 + uVar1 & 0xfffffff8;
          if (7 < uVar1) {
            uVar6 = 0;
            do {
              uVar4 = (ulong)uVar6;
              uVar6 = uVar6 + 8;
              *(undefined8 *)(((ulong)(pppplVar10 + 1) & 0xfffffffffffffff8) + uVar4) =
                   *(undefined8 *)((long)pppplVar9 + (uVar4 - lVar5));
            } while (uVar6 < uVar1);
          }
LAB_00101208:
          pppplVar10 = (long ****)*param_2;
        }
      }
    }
    param_2[1] = (long)local_70;
    *(char *)((long)pppplVar10 + (long)local_70) = '\0';
    pppplVar10 = (long ****)local_68;
    pppplVar11 = (long ****)local_58[0];
  }
  else {
    pppplVar11 = (long ****)param_2[2];
    *param_2 = (long)local_68;
    param_2[1] = (long)local_70;
    param_2[2] = (long)local_58[0];
    local_68 = (long ***)pppplVar10;
    if (pppplVar10 == (long ****)0x0) goto LAB_0010113f;
  }
  local_58[0] = (long ***)pppplVar11;
  local_60 = (long ***)0x0;
  *(char *)pppplVar10 = '\0';
  if ((long ****)local_68 != pppplVar3) {
    operator_delete(local_68,(ulong)((long)local_58[0] + 1));
  }
  pcVar8 = (char *)*param_2;
  uVar1 = *puVar2;
  *puVar2 = 0;
  local_ac = strtof(pcVar8,&local_78);
  if (pcVar8 == local_78) goto LAB_001014c4;
  if (*puVar2 == 0x22) goto LAB_001014d0;
  if (*puVar2 == 0) {
    *puVar2 = uVar1;
  }
  pcVar12 = (char *)param_2[1];
  pcVar8 = local_78 + (1 - (long)pcVar8);
  if (pcVar12 < pcVar8) {
LAB_00101527:
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
               pcVar8,pcVar12);
LAB_0010153f:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar5 = *param_2;
  pppplVar10 = (long ****)(pcVar12 + -(long)pcVar8);
  local_68 = (long ***)pppplVar3;
  local_70 = (long ***)pppplVar10;
  if (pppplVar10 < (long ****)0x10) {
    if (pppplVar10 == (long ****)0x1) {
      local_58[0] = (long ***)CONCAT71(local_58[0]._1_7_,pcVar8[lVar5]);
    }
    else if (pppplVar10 != (long ****)0x0) goto LAB_001010ad;
  }
  else {
    local_68 = (long ***)std::__cxx11::string::_M_create((ulong *)local_98,(ulong)&local_70);
    local_58[0] = local_70;
LAB_001010ad:
    memcpy(local_68,pcVar8 + lVar5,(size_t)pppplVar10);
  }
  local_60 = local_70;
  *(char *)((long)local_68 + (long)local_70) = '\0';
  pppplVar10 = (long ****)*param_2;
  if (pppplVar10 == pppplVar7) {
    if ((long ****)local_68 == pppplVar3) goto LAB_00101230;
    *param_2 = (long)local_68;
    param_2[1] = (long)local_70;
    param_2[2] = (long)local_58[0];
  }
  else {
    if ((long ****)local_68 == pppplVar3) {
LAB_00101230:
      pppplVar9 = (long ****)local_70;
      if ((long ****)local_70 == (long ****)0x0) goto LAB_0010127f;
      if ((long ****)local_70 == (long ****)0x1) {
        *(char *)pppplVar10 = (char)local_58[0];
        pppplVar10 = (long ****)*param_2;
        goto LAB_0010127f;
      }
      uVar1 = (uint)local_70;
      uVar4 = (ulong)local_70 & 0xffffffff;
      auVar16._8_8_ = pppplVar10;
      auVar16._0_8_ = uVar4;
      if (uVar1 < 8) {
        if (((ulong)local_70 & 4) != 0) {
          *(undefined4 *)pppplVar10 = local_58[0]._0_4_;
          *(undefined4 *)((long)pppplVar10 + (uVar4 - 4)) =
               *(undefined4 *)((long)pppplVar3 + (uVar4 - 4));
          pppplVar10 = (long ****)*param_2;
          goto LAB_0010127f;
        }
        if (uVar1 == 0) goto LAB_0010127f;
        *(char *)pppplVar10 = (char)local_58[0];
        if (((ulong)local_70 & 2) != 0) goto LAB_001014dc;
      }
      else {
        *pppplVar10 = local_58[0];
        *(undefined8 *)((long)pppplVar10 + (((ulong)local_70 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)pppplVar3 + (((ulong)local_70 & 0xffffffff) - 8));
        lVar5 = (long)pppplVar10 - ((ulong)(pppplVar10 + 1) & 0xfffffffffffffff8);
        uVar1 = (int)lVar5 + uVar1 & 0xfffffff8;
        if (7 < uVar1) {
          uVar6 = 0;
          do {
            uVar4 = (ulong)uVar6;
            uVar6 = uVar6 + 8;
            *(undefined8 *)(((ulong)(pppplVar10 + 1) & 0xfffffffffffffff8) + uVar4) =
                 *(undefined8 *)((long)pppplVar3 + (uVar4 - lVar5));
          } while (uVar6 < uVar1);
        }
      }
      pppplVar10 = (long ****)*param_2;
      goto LAB_0010127f;
    }
    pppplVar9 = (long ****)param_2[2];
    *param_2 = (long)local_68;
    param_2[1] = (long)local_70;
    param_2[2] = (long)local_58[0];
    pppplVar11 = pppplVar3;
    local_68 = (long ***)pppplVar10;
    if (pppplVar10 != (long ****)0x0) goto LAB_00100e41;
  }
  pppplVar10 = local_58;
  pppplVar11 = pppplVar10;
  local_68 = (long ***)pppplVar3;
  pppplVar9 = (long ****)local_58[0];
LAB_00100e41:
  do {
    local_58[0] = (long ***)pppplVar9;
    local_60 = (long ***)0x0;
    *(char *)pppplVar10 = '\0';
    if ((long ****)local_68 != pppplVar11) {
      operator_delete(local_68,(ulong)((long)local_58[0] + 1));
    }
    pcVar8 = (char *)*param_2;
    uVar1 = *puVar2;
    *puVar2 = 0;
    fVar14 = strtof(pcVar8,&local_80);
    pppplVar3 = pppplVar11;
    if (pcVar8 == local_80) {
LAB_001014c4:
      std::__throw_invalid_argument("stof");
    }
    else if (*puVar2 != 0x22) {
      if (*puVar2 == 0) {
        *puVar2 = uVar1;
      }
      pcVar12 = (char *)param_2[1];
      pcVar8 = local_80 + (1 - (long)pcVar8);
      if (pcVar12 < pcVar8) goto LAB_00101527;
      lVar5 = *param_2;
      pppplVar10 = (long ****)(pcVar12 + -(long)pcVar8);
      local_68 = (long ***)pppplVar11;
      local_70 = (long ***)pppplVar10;
      if (pppplVar10 < (long ****)0x10) {
        if (pppplVar10 == (long ****)0x1) {
          local_58[0] = (long ***)CONCAT71(local_58[0]._1_7_,pcVar8[lVar5]);
        }
        else if (pppplVar10 != (long ****)0x0) goto LAB_001010fd;
      }
      else {
        local_68 = (long ***)std::__cxx11::string::_M_create((ulong *)local_98,(ulong)&local_70);
        local_58[0] = local_70;
LAB_001010fd:
        memcpy(local_68,pcVar8 + lVar5,(size_t)pppplVar10);
      }
      local_60 = local_70;
      *(char *)((long)local_68 + (long)local_70) = '\0';
      pppplVar10 = (long ****)*param_2;
      if (pppplVar10 == pppplVar7) {
        if ((long ****)local_68 == pppplVar11) goto LAB_00101298;
        *param_2 = (long)local_68;
        param_2[1] = (long)local_70;
        param_2[2] = (long)local_58[0];
LAB_001011af:
        pppplVar10 = local_58;
        pppplVar3 = local_58;
        local_68 = (long ***)pppplVar11;
        pppplVar7 = (long ****)local_58[0];
      }
      else if ((long ****)local_68 == pppplVar11) {
LAB_00101298:
        if ((long ****)local_70 != (long ****)0x0) {
          if ((long ****)local_70 == (long ****)0x1) {
            *(char *)pppplVar10 = (char)local_58[0];
            pppplVar10 = (long ****)*param_2;
          }
          else {
            uVar1 = (uint)local_70;
            uVar4 = (ulong)local_70 & 0xffffffff;
            if (uVar1 < 8) {
              if (((ulong)local_70 & 4) == 0) {
                if (uVar1 != 0) {
                  *(char *)pppplVar10 = (char)local_58[0];
                  if (((ulong)local_70 & 2) == 0) goto LAB_001012d8;
                  *(undefined2 *)((long)pppplVar10 + (uVar4 - 2)) =
                       *(undefined2 *)((long)pppplVar11 + (uVar4 - 2));
                  pppplVar10 = (long ****)*param_2;
                }
              }
              else {
                *(undefined4 *)pppplVar10 = local_58[0]._0_4_;
                *(undefined4 *)((long)pppplVar10 + (uVar4 - 4)) =
                     *(undefined4 *)((long)pppplVar11 + (uVar4 - 4));
                pppplVar10 = (long ****)*param_2;
              }
            }
            else {
              *pppplVar10 = local_58[0];
              *(undefined8 *)((long)pppplVar10 + (((ulong)local_70 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)pppplVar11 + (((ulong)local_70 & 0xffffffff) - 8));
              lVar5 = (long)pppplVar10 - ((ulong)(pppplVar10 + 1) & 0xfffffffffffffff8);
              uVar1 = (int)lVar5 + uVar1 & 0xfffffff8;
              if (7 < uVar1) {
                uVar6 = 0;
                do {
                  uVar4 = (ulong)uVar6;
                  uVar6 = uVar6 + 8;
                  *(undefined8 *)(((ulong)(pppplVar10 + 1) & 0xfffffffffffffff8) + uVar4) =
                       *(undefined8 *)((long)pppplVar11 + (uVar4 - lVar5));
                } while (uVar6 < uVar1);
              }
LAB_001012d8:
              pppplVar10 = (long ****)*param_2;
            }
          }
        }
        param_2[1] = (long)local_70;
        *(char *)((long)pppplVar10 + (long)local_70) = '\0';
        pppplVar10 = (long ****)local_68;
        pppplVar7 = (long ****)local_58[0];
      }
      else {
        pppplVar7 = (long ****)param_2[2];
        *param_2 = (long)local_68;
        param_2[1] = (long)local_70;
        param_2[2] = (long)local_58[0];
        local_68 = (long ***)pppplVar10;
        if (pppplVar10 == (long ****)0x0) goto LAB_001011af;
      }
      local_58[0] = (long ***)pppplVar7;
      local_60 = (long ***)0x0;
      *(char *)pppplVar10 = '\0';
      if ((long ****)local_68 != pppplVar3) {
        operator_delete(local_68,(ulong)((long)local_58[0] + 1));
      }
      param_2 = (long *)*param_2;
      uVar1 = *puVar2;
      pppplVar7 = (long ****)(ulong)uVar1;
      *puVar2 = 0;
      fVar15 = strtof((char *)param_2,(char **)&local_88);
      if (param_2 == local_88) goto LAB_001014c4;
      if (*puVar2 != 0x22) break;
    }
LAB_001014d0:
    auVar16 = std::__throw_out_of_range("stof");
LAB_001014dc:
    *(undefined2 *)(auVar16._8_8_ + auVar16._0_8_ + -2) =
         *(undefined2 *)((long)pppplVar3 + auVar16._0_8_ + -2);
    pppplVar10 = (long ****)*param_2;
    pppplVar9 = (long ****)local_60;
LAB_0010127f:
    param_2[1] = (long)pppplVar9;
    *(char *)((long)pppplVar10 + (long)pppplVar9) = '\0';
    pppplVar10 = (long ****)local_68;
    pppplVar11 = pppplVar3;
    pppplVar9 = (long ****)local_58[0];
  } while( true );
  if (*puVar2 == 0) {
    *puVar2 = uVar1;
  }
  *(float *)(this + 0xc) = fVar15;
  *(float *)this = fVar13;
  *(float *)(this + 4) = local_ac;
  *(float *)(this + 8) = fVar14;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
  goto LAB_0010153f;
}


