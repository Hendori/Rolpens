
/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_create(unsigned long&, unsigned long) [clone .isra.0] */

void std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_create
               (ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_create");
  }
  if ((param_2 < uVar1) && (uVar2 = param_2 * 2, uVar1 < uVar2)) {
    if (-1 < (long)uVar2) {
      *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00100021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*JPH::Allocate)(uVar2 + 1);
      return;
    }
    *param_1 = 0x7fffffffffffffff;
                    /* WARNING: Could not recover jumptable at 0x00100057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*JPH::Allocate)(0x8000000000000000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Allocate)(uVar1 + 1);
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char> >::find(char
   const*, unsigned long, unsigned long) const [clone .isra.0] */

ulong std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::find
                (char *param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  void *__s1;
  ulong uVar3;
  ulong in_RCX;
  char *__n;
  char *__s;
  char *in_R8;
  
  if (in_R8 == (char *)0x0) {
    uVar3 = 0xffffffffffffffff;
    if (in_RCX <= param_2) {
      uVar3 = in_RCX;
    }
    return uVar3;
  }
  if (param_2 <= in_RCX) {
    return 0xffffffffffffffff;
  }
  __s = param_1 + in_RCX;
  if ((in_R8 <= (char *)(param_2 - in_RCX)) &&
     (__n = (char *)(param_2 - in_RCX) + (1 - (long)in_R8), __n != (char *)0x0)) {
    cVar1 = *(char *)param_3;
    while (__s1 = memchr(__s,(int)cVar1,(size_t)__n), __s1 != (void *)0x0) {
      iVar2 = memcmp(__s1,(void *)param_3,(size_t)in_R8);
      if (iVar2 == 0) {
        return (long)__s1 - (long)param_1;
      }
      __s = (char *)((long)__s1 + 1);
      if (param_1 + (param_2 - (long)__s) < in_R8) {
        return 0xffffffffffffffff;
      }
      __n = param_1 + (param_2 - (long)__s) + (1 - (long)in_R8);
      if (__n == (char *)0x0) {
        return 0xffffffffffffffff;
      }
    }
  }
  return 0xffffffffffffffff;
}



/* void std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag) [clone .isra.0]
    */

void std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
     _M_construct<char_const*>(long *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  
  __n = param_3 - (long)param_2;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
    if (__n == 0) {
      param_1[1] = 0;
      *__dest = 0;
      return;
    }
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    __dest = (undefined1 *)(*JPH::Allocate)(__n + 1);
    param_1[2] = __n;
    *param_1 = (long)__dest;
  }
  memcpy(__dest,param_2,__n);
  param_1[1] = __n;
  *(undefined1 *)(*param_1 + __n) = 0;
  return;
}



/* JPH::StringFormat[abi:cxx11](char const*, ...) */

char * JPH::StringFormat_abi_cxx11_(char *param_1,...)

{
  char in_AL;
  size_t sVar1;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined1 *local_4e8;
  undefined1 *local_4e0;
  char local_4d8 [1032];
  long local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  if (in_AL != '\0') {
    local_98 = in_XMM0_Qa;
    local_88 = in_XMM1_Qa;
    local_78 = in_XMM2_Qa;
    local_68 = in_XMM3_Qa;
    local_58 = in_XMM4_Qa;
    local_48 = in_XMM5_Qa;
    local_38 = in_XMM6_Qa;
    local_28 = in_XMM7_Qa;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  local_4e8 = &stack0x00000008;
  local_4e0 = local_c8;
  local_4f0 = 0x10;
  local_4ec = 0x30;
  local_b8 = in_RDX;
  local_b0 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  __vsnprintf_chk(local_4d8,0x400,2,0x400,in_RSI,&local_4f0);
  *(char **)param_1 = param_1 + 0x10;
  sVar1 = strlen(local_4d8);
  std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
  _M_construct<char_const*>(param_1,local_4d8,local_4d8 + sVar1);
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::NibbleToBinary(unsigned int) */

undefined8 JPH::NibbleToBinary(uint param_1)

{
  return *(undefined8 *)(NibbleToBinary(unsigned_int)::nibbles + (ulong)(param_1 & 0xf) * 8);
}



/* JPH::StringToVector(std::basic_string_view<char, std::char_traits<char> > const&,
   JPH::Array<std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char> >,
   JPH::STLAllocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   JPH::STLAllocator<char> > > >&, std::basic_string_view<char, std::char_traits<char> > const&,
   bool) */

basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *
JPH::StringToVector(basic_string_view *param_1,Array *param_2,basic_string_view *param_3,
                   bool param_4)

{
  long *plVar1;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar2;
  size_t __n;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar6;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *__dest;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long *unaff_RBX;
  long *plVar12;
  char *pcVar13;
  ulong *puVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  long *unaff_R14;
  char *pcVar18;
  long in_FS_OFFSET;
  ulong uStack_f0;
  long lStack_e8;
  long *plStack_d8;
  Array *pAStack_d0;
  char *pcStack_c8;
  basic_string_view *pbStack_c0;
  long *plStack_b8;
  char *local_88;
  ulong local_80;
  char local_78 [16];
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    unaff_R14 = *(long **)param_2;
    if (unaff_R14 != (long *)0x0) {
      unaff_RBX = *(long **)(param_2 + 0x10);
      unaff_R14 = unaff_RBX + (long)unaff_R14 * 4;
      for (; unaff_RBX < unaff_R14; unaff_RBX = unaff_RBX + 4) {
        if ((long *)*unaff_RBX != unaff_RBX + 2) {
          (*Free)();
        }
      }
    }
    *(undefined8 *)param_2 = 0;
  }
  if (*(long *)param_1 != 0) {
    puVar14 = *(ulong **)(param_1 + 8);
    local_88 = local_78;
    if (puVar14 == (ulong *)0x0) {
      pcVar15 = "basic_string: construction from null is not valid";
      std::__throw_logic_error("basic_string: construction from null is not valid");
      pbVar2 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)pcVar15 + 0x10;
      lStack_e8 = *(long *)(in_FS_OFFSET + 0x28);
      *(undefined8 *)
       ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)pcVar15 + 8) = 0;
      ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)pcVar15)[0x10] =
           (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
      uVar10 = *puVar14;
      *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pcVar15 = pbVar2;
      uStack_f0 = uVar10;
      plStack_d8 = unaff_RBX;
      pAStack_d0 = param_2;
      pcStack_c8 = local_78;
      pbStack_c0 = param_3;
      plStack_b8 = unaff_R14;
      if (0xf < uVar10) {
        __dest = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)
                 std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
                 _M_create(&uStack_f0,0xf);
        pbVar6 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pcVar15;
        __n = *(long *)((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)pcVar15
                       + 8) + 1;
        if (*(long *)((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)pcVar15 +
                     8) == 0) {
          *__dest = *pbVar6;
          pbVar6 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pcVar15;
        }
        else if (__n != 0) {
          memcpy(__dest,pbVar6,__n);
          pbVar6 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pcVar15;
        }
        if (pbVar2 != pbVar6) {
          (*Free)();
        }
        *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pcVar15 = __dest;
        *(ulong *)((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)pcVar15 +
                  0x10) = uStack_f0;
        uVar10 = *puVar14;
      }
      pcVar13 = (char *)puVar14[1];
      pcVar18 = pcVar13 + uVar10;
      for (; pcVar18 != pcVar13; pcVar13 = pcVar13 + 1) {
        iVar3 = tolower((int)*pcVar13);
        uVar10 = *(ulong *)((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)
                            pcVar15 + 8);
        pbVar6 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pcVar15;
        if (pbVar2 == pbVar6) {
          uVar4 = 0xf;
        }
        else {
          uVar4 = *(ulong *)((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)
                             pcVar15 + 0x10);
        }
        if (uVar4 < uVar10 + 1) {
          std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
                    ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)pcVar15,
                     uVar10,0,(char *)0x0,1);
          pbVar6 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pcVar15;
        }
        pbVar6[uVar10] = SUB41(iVar3,0);
        *(ulong *)((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)pcVar15 + 8)
             = uVar10 + 1;
        *(undefined1 *)(*(long *)pcVar15 + 1 + uVar10) = 0;
      }
      if (lStack_e8 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)pcVar15;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
    _M_construct<char_const*>(&local_88,puVar14,*(long *)param_1 + (long)puVar14);
    pcVar15 = local_88;
    uVar10 = local_80;
joined_r0x001003b2:
    do {
      local_88 = pcVar15;
      local_80 = uVar10;
      if ((uVar10 == 0) ||
         (uVar4 = std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
                  find(pcVar15,uVar10,*(ulong *)(param_3 + 8)), uVar4 == 0xffffffffffffffff))
      goto LAB_00100540;
      if (uVar4 <= uVar10) {
        uVar10 = uVar4;
      }
      local_68 = (undefined8 *)&local_58;
      std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
      _M_construct<char_const*>(&local_68,pcVar15,pcVar15 + uVar10);
      lVar8 = *(long *)param_2;
      uVar10 = lVar8 + 1;
      if (*(ulong *)(param_2 + 8) < uVar10) {
        uVar17 = *(ulong *)(param_2 + 8) * 2;
        if (uVar10 <= uVar17) {
          uVar10 = uVar17;
        }
        plVar5 = (long *)(*Allocate)(uVar10 << 5);
        plVar12 = *(long **)(param_2 + 0x10);
        if (plVar12 != (long *)0x0) {
          lVar8 = *(long *)param_2;
          if (plVar5 < plVar12) {
            if (plVar5 < plVar5 + lVar8 * 4) {
              plVar12 = plVar12 + 2;
              plVar11 = plVar5;
              do {
                plVar1 = plVar11 + 2;
                lVar16 = plVar12[-1];
                *plVar11 = (long)plVar1;
                if ((long *)plVar12[-2] == plVar12) {
                  uVar17 = lVar16 + 1;
                  uVar7 = (uint)uVar17;
                  if (uVar7 < 8) {
                    if ((uVar17 & 4) == 0) {
                      if (uVar7 != 0) {
                        *(char *)plVar1 = (char)*plVar12;
                        if ((uVar17 & 2) == 0) goto LAB_001004d7;
                        *(undefined2 *)((long)plVar11 + (uVar17 & 0xffffffff) + 0xe) =
                             *(undefined2 *)((long)plVar12 + ((uVar17 & 0xffffffff) - 2));
                        lVar16 = plVar12[-1];
                      }
                    }
                    else {
                      *(int *)plVar1 = (int)*plVar12;
                      *(undefined4 *)((long)plVar11 + (uVar17 & 0xffffffff) + 0xc) =
                           *(undefined4 *)((long)plVar12 + ((uVar17 & 0xffffffff) - 4));
                      lVar16 = plVar12[-1];
                    }
                  }
                  else {
                    *plVar1 = *plVar12;
                    *(undefined8 *)((long)plVar11 + (uVar17 & 0xffffffff) + 8) =
                         *(undefined8 *)((long)plVar12 + ((uVar17 & 0xffffffff) - 8));
                    lVar16 = (long)plVar1 - ((ulong)(plVar11 + 3) & 0xfffffffffffffff8);
                    uVar7 = uVar7 + (int)lVar16 & 0xfffffff8;
                    if (7 < uVar7) {
                      uVar9 = 0;
                      do {
                        uVar17 = (ulong)uVar9;
                        uVar9 = uVar9 + 8;
                        *(undefined8 *)(((ulong)(plVar11 + 3) & 0xfffffffffffffff8) + uVar17) =
                             *(undefined8 *)((long)plVar12 + (uVar17 - lVar16));
                      } while (uVar9 < uVar7);
                    }
LAB_001004d7:
                    lVar16 = plVar12[-1];
                  }
                }
                else {
                  *plVar11 = plVar12[-2];
                  plVar11[2] = *plVar12;
                }
                plVar11[1] = lVar16;
                plVar11 = plVar11 + 4;
                plVar12 = plVar12 + 4;
              } while (plVar11 < plVar5 + lVar8 * 4);
LAB_001005b0:
              plVar12 = *(long **)(param_2 + 0x10);
            }
          }
          else {
            plVar11 = plVar5 + lVar8 * 4 + -4;
            if (plVar5 <= plVar11) {
              plVar12 = plVar12 + lVar8 * 4 + -2;
              do {
                plVar1 = plVar11 + 2;
                lVar8 = plVar12[-1];
                *plVar11 = (long)plVar1;
                if ((long *)plVar12[-2] == plVar12) {
                  uVar17 = lVar8 + 1;
                  uVar7 = (uint)uVar17;
                  if (uVar7 < 8) {
                    if ((uVar17 & 4) == 0) {
                      if (uVar7 != 0) {
                        *(char *)plVar1 = (char)*plVar12;
                        if ((uVar17 & 2) == 0) goto LAB_001007b7;
                        *(undefined2 *)((long)plVar11 + (uVar17 & 0xffffffff) + 0xe) =
                             *(undefined2 *)((long)plVar12 + ((uVar17 & 0xffffffff) - 2));
                        lVar8 = plVar12[-1];
                      }
                    }
                    else {
                      *(int *)plVar1 = (int)*plVar12;
                      *(undefined4 *)((long)plVar11 + (uVar17 & 0xffffffff) + 0xc) =
                           *(undefined4 *)((long)plVar12 + ((uVar17 & 0xffffffff) - 4));
                      lVar8 = plVar12[-1];
                    }
                  }
                  else {
                    *plVar1 = *plVar12;
                    *(undefined8 *)((long)plVar11 + (uVar17 & 0xffffffff) + 8) =
                         *(undefined8 *)((long)plVar12 + ((uVar17 & 0xffffffff) - 8));
                    lVar8 = (long)plVar1 - ((ulong)(plVar11 + 3) & 0xfffffffffffffff8);
                    uVar7 = uVar7 + (int)lVar8 & 0xfffffff8;
                    if (7 < uVar7) {
                      uVar9 = 0;
                      do {
                        uVar17 = (ulong)uVar9;
                        uVar9 = uVar9 + 8;
                        *(undefined8 *)(((ulong)(plVar11 + 3) & 0xfffffffffffffff8) + uVar17) =
                             *(undefined8 *)((long)plVar12 + (uVar17 - lVar8));
                      } while (uVar9 < uVar7);
                    }
LAB_001007b7:
                    lVar8 = plVar12[-1];
                  }
                }
                else {
                  *plVar11 = plVar12[-2];
                  plVar11[2] = *plVar12;
                }
                plVar11[1] = lVar8;
                plVar11 = plVar11 + -4;
                plVar12 = plVar12 + -4;
              } while (plVar5 <= plVar11);
              goto LAB_001005b0;
            }
          }
          (*Free)(plVar12);
        }
        lVar8 = *(long *)param_2;
        *(long **)(param_2 + 0x10) = plVar5;
        *(ulong *)(param_2 + 8) = uVar10;
        *(long *)param_2 = lVar8 + 1;
        plVar5 = plVar5 + lVar8 * 4;
      }
      else {
        *(ulong *)param_2 = uVar10;
        plVar5 = (long *)(lVar8 * 0x20 + *(long *)(param_2 + 0x10));
      }
      plVar12 = plVar5 + 2;
      *plVar5 = (long)plVar12;
      if (local_68 == (undefined8 *)&local_58) {
        uVar10 = local_60 + 1;
        uVar7 = (uint)uVar10;
        if (uVar7 < 8) {
          if ((uVar10 & 4) == 0) {
            if (uVar7 != 0) {
              *(undefined1 *)plVar12 = (undefined1)local_58;
              if ((uVar10 & 2) != 0) {
                *(undefined2 *)((long)plVar5 + (uVar10 & 0xffffffff) + 0xe) =
                     *(undefined2 *)((long)&local_60 + (uVar10 & 0xffffffff) + 6);
              }
            }
          }
          else {
            *(undefined4 *)plVar12 = local_58;
            *(undefined4 *)((long)plVar5 + (uVar10 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)&local_60 + (uVar10 & 0xffffffff) + 4);
          }
        }
        else {
          *plVar12 = CONCAT44(uStack_54,local_58);
          *(undefined8 *)((long)plVar5 + (uVar10 & 0xffffffff) + 8) =
               *(undefined8 *)((long)&local_60 + (uVar10 & 0xffffffff));
          lVar8 = (long)plVar12 - ((ulong)(plVar5 + 3) & 0xfffffffffffffff8);
          uVar7 = (int)lVar8 + uVar7 & 0xfffffff8;
          if (7 < uVar7) {
            uVar9 = 0;
            do {
              uVar10 = (ulong)uVar9;
              uVar9 = uVar9 + 8;
              *(undefined8 *)(((ulong)(plVar5 + 3) & 0xfffffffffffffff8) + uVar10) =
                   *(undefined8 *)((long)&local_58 + (uVar10 - lVar8));
            } while (uVar9 < uVar7);
          }
        }
      }
      else {
        *plVar5 = (long)local_68;
        plVar5[2] = CONCAT44(uStack_54,local_58);
      }
      plVar5[1] = local_60;
      uVar4 = uVar4 + *(long *)param_3;
      pcVar15 = local_88;
      if (uVar4 != 0xffffffffffffffff) {
        uVar10 = local_80;
        if (uVar4 != 0) {
          if (local_80 < uVar4) {
            uVar4 = local_80;
          }
          uVar10 = local_80 - uVar4;
          if ((uVar10 != 0) && (uVar4 != 0)) {
            if (uVar10 == 1) {
              *local_88 = local_88[uVar4];
              local_88[local_80 - uVar4] = '\0';
              uVar10 = local_80 - uVar4;
              goto joined_r0x001003b2;
            }
            memmove(local_88,local_88 + uVar4,uVar10);
            uVar10 = local_80 - uVar4;
          }
          local_88[uVar10] = '\0';
          pcVar15 = local_88;
        }
        goto joined_r0x001003b2;
      }
      local_80 = 0;
      *local_88 = '\0';
      uVar10 = local_80;
    } while( true );
  }
  goto LAB_0010035c;
LAB_00100540:
  Array<std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>,JPH::STLAllocator<std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>>>
  ::grow((Array<std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>,JPH::STLAllocator<std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>>>
          *)param_2,1);
  uVar10 = local_80;
  pcVar15 = local_88;
  plVar12 = (long *)(*(long *)param_2 * 0x20 + *(long *)(param_2 + 0x10));
  *(long *)param_2 = *(long *)param_2 + 1;
  plVar5 = plVar12 + 2;
  *plVar12 = (long)plVar5;
  if (local_80 < 0x10) {
    if (local_80 == 1) {
      *(char *)(plVar12 + 2) = *local_88;
    }
    else if (local_80 != 0) goto LAB_001007dd;
  }
  else {
    if ((long)local_80 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    plVar5 = (long *)(*Allocate)(local_80 + 1);
    plVar12[2] = uVar10;
    *plVar12 = (long)plVar5;
LAB_001007dd:
    memcpy(plVar5,pcVar15,uVar10);
    plVar5 = (long *)*plVar12;
  }
  plVar12[1] = uVar10;
  *(undefined1 *)((long)plVar5 + uVar10) = 0;
  if (local_88 != local_78) {
    (*Free)();
  }
LAB_0010035c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)0x0;
}



/* JPH::ToLower[abi:cxx11](std::basic_string_view<char, std::char_traits<char> > const&) */

JPH * __thiscall JPH::ToLower_abi_cxx11_(JPH *this,basic_string_view *param_1)

{
  JPH *pJVar1;
  size_t __n;
  int iVar2;
  JPH *pJVar3;
  JPH *__dest;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  pJVar1 = this + 0x10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (JPH)0x0;
  uVar6 = *(ulong *)param_1;
  *(JPH **)this = pJVar1;
  local_48 = uVar6;
  if (0xf < uVar6) {
    __dest = (JPH *)std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>
                    ::_M_create(&local_48,0xf);
    pJVar3 = *(JPH **)this;
    __n = *(long *)(this + 8) + 1;
    if (*(long *)(this + 8) == 0) {
      *__dest = *pJVar3;
      pJVar3 = *(JPH **)this;
    }
    else if (__n != 0) {
      memcpy(__dest,pJVar3,__n);
      pJVar3 = *(JPH **)this;
    }
    if (pJVar1 != pJVar3) {
      (*Free)();
    }
    *(JPH **)this = __dest;
    *(ulong *)(this + 0x10) = local_48;
    uVar6 = *(ulong *)param_1;
  }
  pcVar5 = *(char **)(param_1 + 8);
  pcVar7 = pcVar5 + uVar6;
  for (; pcVar7 != pcVar5; pcVar5 = pcVar5 + 1) {
    iVar2 = tolower((int)*pcVar5);
    uVar6 = *(ulong *)(this + 8);
    pJVar3 = *(JPH **)this;
    if (pJVar1 == pJVar3) {
      uVar4 = 0xf;
    }
    else {
      uVar4 = *(ulong *)(this + 0x10);
    }
    if (uVar4 < uVar6 + 1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
                ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)this,uVar6,0,
                 (char *)0x0,1);
      pJVar3 = *(JPH **)this;
    }
    pJVar3[uVar6] = SUB41(iVar2,0);
    *(ulong *)(this + 8) = uVar6 + 1;
    *(undefined1 *)(*(long *)this + 1 + uVar6) = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::VectorToString(JPH::Array<std::__cxx11::basic_string<char, std::char_traits<char>,
   JPH::STLAllocator<char> >, JPH::STLAllocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, JPH::STLAllocator<char> > > > const&, std::__cxx11::basic_string<char,
   std::char_traits<char>, JPH::STLAllocator<char> >&, std::basic_string_view<char,
   std::char_traits<char> > const&) */

void JPH::VectorToString(Array *param_1,basic_string *param_2,basic_string_view *param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string *pbVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  basic_string *pbVar7;
  undefined8 *puVar8;
  
  *(undefined8 *)(param_2 + 8) = 0;
  **(undefined1 **)param_2 = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  puVar8 = puVar5 + *(long *)param_1 * 4;
  while( true ) {
    if (puVar8 == puVar5) {
      return;
    }
    uVar6 = *(ulong *)(param_2 + 8);
    if (uVar6 != 0) {
      uVar2 = *(ulong *)param_3;
      pbVar3 = *(basic_string **)(param_3 + 8);
      if (0x7fffffffffffffff - uVar6 < uVar2) break;
      pbVar7 = *(basic_string **)param_2;
      uVar1 = uVar6 + uVar2;
      if (pbVar7 == param_2 + 0x10) {
        uVar4 = 0xf;
      }
      else {
        uVar4 = *(ulong *)(param_2 + 0x10);
      }
      if (uVar4 < uVar1) {
        std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
                  ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)param_2,
                   uVar6,0,(char *)pbVar3,uVar2);
        pbVar7 = *(basic_string **)param_2;
      }
      else if (uVar2 != 0) {
        if (uVar2 == 1) {
          pbVar7[uVar6] = *pbVar3;
          pbVar7 = *(basic_string **)param_2;
        }
        else {
          memcpy(pbVar7 + uVar6,pbVar3,uVar2);
          pbVar7 = *(basic_string **)param_2;
        }
      }
      *(ulong *)(param_2 + 8) = uVar1;
      pbVar7[uVar1] = (basic_string)0x0;
      uVar6 = *(ulong *)(param_2 + 8);
    }
    uVar2 = puVar5[1];
    pbVar3 = (basic_string *)*puVar5;
    if (0x7fffffffffffffff - uVar6 < uVar2) break;
    pbVar7 = *(basic_string **)param_2;
    uVar1 = uVar2 + uVar6;
    if (pbVar7 == param_2 + 0x10) {
      uVar4 = 0xf;
    }
    else {
      uVar4 = *(ulong *)(param_2 + 0x10);
    }
    if (uVar4 < uVar1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
                ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)param_2,uVar6,
                 0,(char *)pbVar3,uVar2);
      pbVar7 = *(basic_string **)param_2;
    }
    else if (uVar2 != 0) {
      if (uVar2 == 1) {
        pbVar7[uVar6] = *pbVar3;
        pbVar7 = *(basic_string **)param_2;
      }
      else {
        memcpy(pbVar7 + uVar6,pbVar3,uVar2);
        pbVar7 = *(basic_string **)param_2;
      }
    }
    puVar5 = puVar5 + 4;
    *(ulong *)(param_2 + 8) = uVar1;
    pbVar7[uVar1] = (basic_string)0x0;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::append");
}



/* JPH::StringReplace(std::__cxx11::basic_string<char, std::char_traits<char>,
   JPH::STLAllocator<char> >&, std::basic_string_view<char, std::char_traits<char> > const&,
   std::basic_string_view<char, std::char_traits<char> > const&) */

void JPH::StringReplace(basic_string *param_1,basic_string_view *param_2,basic_string_view *param_3)

{
  basic_string *__dest;
  ulong uVar1;
  basic_string *pbVar2;
  ulong __n;
  basic_string *__src;
  size_t __n_00;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  while( true ) {
    uVar5 = *(ulong *)param_2;
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)param_1;
    uVar3 = std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::find
                      ((char *)pbVar2,uVar1,*(ulong *)(param_2 + 8));
    if (uVar3 == 0xffffffffffffffff) {
      return;
    }
    __n = *(ulong *)param_3;
    __src = *(basic_string **)(param_3 + 8);
    uVar4 = uVar1 - uVar3;
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    if (uVar1 < uVar3) break;
    if ((0x7fffffffffffffff - uVar1) + uVar5 < __n) goto LAB_00100e46;
    uVar7 = (__n + uVar1) - uVar5;
    if (pbVar2 == param_1 + 0x10) {
      uVar6 = 0xf;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x10);
    }
    if (uVar6 < uVar7) {
      std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
                ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)param_1,uVar3,
                 uVar5,(char *)__src,__n);
    }
    else {
      __dest = pbVar2 + uVar3;
      __n_00 = uVar4 - uVar5;
      if ((__src < pbVar2) || (pbVar2 + uVar1 < __src)) {
        if ((__n_00 != 0) && (__n != uVar5)) {
          if (__n_00 == 1) {
            __dest[__n] = __dest[uVar5];
          }
          else {
            memmove(__dest + __n,__dest + uVar5,__n_00);
          }
        }
        if (__n != 0) {
          if (__n == 1) {
            *__dest = *__src;
          }
          else {
            memcpy(__dest,__src,__n);
          }
        }
      }
      else {
        std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
        _M_replace_cold((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)param_1
                        ,(char *)__dest,uVar5,(char *)__src,__n,__n_00);
      }
    }
    *(ulong *)(param_1 + 8) = uVar7;
    *(undefined1 *)(*(long *)param_1 + uVar7) = 0;
  }
  std::__throw_out_of_range_fmt
            ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",uVar3,
             uVar1);
LAB_00100e46:
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::_M_replace");
}



/* JPH::Array<std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char> >,
   JPH::STLAllocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   JPH::STLAllocator<char> > > >::grow(unsigned long) */

void __thiscall
JPH::
Array<std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>,JPH::STLAllocator<std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>>>
::grow(Array<std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>,JPH::STLAllocator<std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>>>
       *this,ulong param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar8 = param_1 + *(long *)this;
  if (uVar8 <= *(ulong *)(this + 8)) {
    return;
  }
  uVar10 = *(ulong *)(this + 8) * 2;
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  plVar2 = (long *)(*Allocate)(uVar8 << 5);
  plVar7 = *(long **)(this + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_00100fe2;
  lVar9 = *(long *)this;
  if (plVar2 < plVar7) {
    if (plVar2 < plVar2 + lVar9 * 4) {
      plVar7 = plVar7 + 2;
      plVar3 = plVar2;
      do {
        plVar1 = plVar3 + 2;
        lVar5 = plVar7[-1];
        *plVar3 = (long)plVar1;
        if (plVar7 == (long *)plVar7[-2]) {
          uVar10 = lVar5 + 1;
          uVar6 = (uint)uVar10;
          if (uVar6 < 8) {
            if ((uVar10 & 4) == 0) {
              if (uVar6 != 0) {
                *(char *)plVar1 = (char)*plVar7;
                if ((uVar10 & 2) == 0) goto LAB_00100fc1;
                *(undefined2 *)((long)plVar3 + (uVar10 & 0xffffffff) + 0xe) =
                     *(undefined2 *)((long)plVar7 + ((uVar10 & 0xffffffff) - 2));
                lVar5 = plVar7[-1];
              }
            }
            else {
              *(int *)plVar1 = (int)*plVar7;
              *(undefined4 *)((long)plVar3 + (uVar10 & 0xffffffff) + 0xc) =
                   *(undefined4 *)((long)plVar7 + ((uVar10 & 0xffffffff) - 4));
              lVar5 = plVar7[-1];
            }
          }
          else {
            *plVar1 = *plVar7;
            *(undefined8 *)((long)plVar3 + (uVar10 & 0xffffffff) + 8) =
                 *(undefined8 *)((long)plVar7 + ((uVar10 & 0xffffffff) - 8));
            lVar5 = (long)plVar1 - ((ulong)(plVar3 + 3) & 0xfffffffffffffff8);
            uVar6 = uVar6 + (int)lVar5 & 0xfffffff8;
            if (7 < uVar6) {
              uVar4 = 0;
              do {
                uVar10 = (ulong)uVar4;
                uVar4 = uVar4 + 8;
                *(undefined8 *)(((ulong)(plVar3 + 3) & 0xfffffffffffffff8) + uVar10) =
                     *(undefined8 *)((long)plVar7 + (uVar10 - lVar5));
              } while (uVar4 < uVar6);
            }
LAB_00100fc1:
            lVar5 = plVar7[-1];
          }
        }
        else {
          *plVar3 = plVar7[-2];
          plVar3[2] = *plVar7;
        }
        plVar3[1] = lVar5;
        plVar3 = plVar3 + 4;
        plVar7 = plVar7 + 4;
      } while (plVar3 < plVar2 + lVar9 * 4);
LAB_00100fd8:
      plVar7 = *(long **)(this + 0x10);
    }
  }
  else {
    plVar3 = plVar2 + lVar9 * 4 + -4;
    if (plVar2 <= plVar3) {
      plVar7 = plVar7 + lVar9 * 4 + -2;
      do {
        plVar1 = plVar3 + 2;
        lVar9 = plVar7[-1];
        *plVar3 = (long)plVar1;
        if (plVar7 == (long *)plVar7[-2]) {
          uVar10 = lVar9 + 1;
          uVar6 = (uint)uVar10;
          if (uVar6 < 8) {
            if ((uVar10 & 4) == 0) {
              if (uVar6 != 0) {
                *(char *)plVar1 = (char)*plVar7;
                if ((uVar10 & 2) == 0) goto LAB_00101060;
                *(undefined2 *)((long)plVar3 + (uVar10 & 0xffffffff) + 0xe) =
                     *(undefined2 *)((long)plVar7 + ((uVar10 & 0xffffffff) - 2));
                lVar9 = plVar7[-1];
              }
            }
            else {
              *(int *)plVar1 = (int)*plVar7;
              *(undefined4 *)((long)plVar3 + (uVar10 & 0xffffffff) + 0xc) =
                   *(undefined4 *)((long)plVar7 + ((uVar10 & 0xffffffff) - 4));
              lVar9 = plVar7[-1];
            }
          }
          else {
            *plVar1 = *plVar7;
            *(undefined8 *)((long)plVar3 + (uVar10 & 0xffffffff) + 8) =
                 *(undefined8 *)((long)plVar7 + ((uVar10 & 0xffffffff) - 8));
            lVar9 = (long)plVar1 - ((ulong)(plVar3 + 3) & 0xfffffffffffffff8);
            uVar6 = uVar6 + (int)lVar9 & 0xfffffff8;
            if (7 < uVar6) {
              uVar10 = 0;
              do {
                uVar4 = (int)uVar10 + 8;
                *(undefined8 *)(((ulong)(plVar3 + 3) & 0xfffffffffffffff8) + uVar10) =
                     *(undefined8 *)((long)plVar7 + (uVar10 - lVar9));
                uVar10 = (ulong)uVar4;
              } while (uVar4 < uVar6);
            }
LAB_00101060:
            lVar9 = plVar7[-1];
          }
        }
        else {
          *plVar3 = plVar7[-2];
          plVar3[2] = *plVar7;
        }
        plVar3[1] = lVar9;
        plVar3 = plVar3 + -4;
        plVar7 = plVar7 + -4;
      } while (plVar2 <= plVar3);
      goto LAB_00100fd8;
    }
  }
  (*Free)(plVar7);
LAB_00100fe2:
  *(long **)(this + 0x10) = plVar2;
  *(ulong *)(this + 8) = uVar8;
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
          (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,ulong param_1,
          ulong param_2,char *param_3,ulong param_4)

{
  size_t __n;
  undefined1 *__dest;
  ulong uVar1;
  undefined1 *__src;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __n = *(long *)(this + 8) - (param_1 + param_2);
  local_48 = (param_4 - param_2) + *(long *)(this + 8);
  if (this + 0x10 == *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x10);
  }
  __dest = (undefined1 *)_M_create(&local_48,uVar1);
  if (param_1 != 0) {
    if (param_1 == 1) {
      *__dest = **(undefined1 **)this;
    }
    else {
      memcpy(__dest,*(undefined1 **)this,param_1);
    }
  }
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    if (param_4 == 1) {
      __dest[param_1] = *param_3;
    }
    else {
      memcpy(__dest + param_1,param_3,param_4);
    }
  }
  if (__n != 0) {
    __src = (undefined1 *)(param_1 + param_2 + *(long *)this);
    if (__n == 1) {
      __dest[param_1 + param_4] = *__src;
    }
    else {
      memcpy(__dest + param_1 + param_4,__src,__n);
    }
  }
  if (this + 0x10 != *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this) {
    (*JPH::Free)();
  }
  *(undefined1 **)this = __dest;
  *(ulong *)(this + 0x10) = local_48;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_replace_cold(char*, unsigned long, char const*, unsigned long, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_replace_cold
          (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,char *param_1,
          ulong param_2,char *param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  char *pcVar2;
  size_t __n;
  byte bVar3;
  
  bVar3 = 0;
  if (param_4 - 1 < param_2) {
    if (param_4 == 1) {
      *param_1 = *param_3;
    }
    else {
      memmove(param_1,param_3,param_4);
    }
  }
  if ((param_5 != 0) && (param_4 != param_2)) {
    if (param_5 == 1) {
      param_1[param_4] = param_1[param_2];
    }
    else {
      memmove(param_1 + param_4,param_1 + param_2,param_5);
    }
  }
  if (param_2 < param_4) {
    pcVar2 = param_1 + param_2;
    if (pcVar2 < param_3 + param_4) {
      if (param_3 < pcVar2) {
        __n = (long)pcVar2 - (long)param_3;
        if (__n == 1) {
          *param_1 = *param_3;
        }
        else {
          memmove(param_1,param_3,__n);
        }
        pcVar2 = param_1 + param_4;
        param_1 = param_1 + __n;
        lVar1 = param_4 - __n;
        if (lVar1 != 1) {
          if (lVar1 == 0) {
            return;
          }
          for (; lVar1 != 0; lVar1 = lVar1 + -1) {
            *param_1 = *pcVar2;
            pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
            param_1 = param_1 + (ulong)bVar3 * -2 + 1;
          }
          return;
        }
      }
      else {
        pcVar2 = param_3 + (param_4 - param_2);
        if (param_4 != 1) {
          for (; param_4 != 0; param_4 = param_4 - 1) {
            *param_1 = *pcVar2;
            pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
            param_1 = param_1 + (ulong)bVar3 * -2 + 1;
          }
          return;
        }
      }
      *param_1 = *pcVar2;
    }
    else {
      if (param_4 != 1) {
        memmove(param_1,param_3,param_4);
        return;
      }
      *param_1 = *param_3;
    }
  }
  return;
}



/* JPH::StringReplace(std::__cxx11::basic_string<char, std::char_traits<char>,
   JPH::STLAllocator<char> >&, std::basic_string_view<char, std::char_traits<char> > const&,
   std::basic_string_view<char, std::char_traits<char> > const&) [clone .cold] */

void __thiscall
JPH::StringReplace(JPH *this,basic_string *param_1,basic_string_view *param_2,
                  basic_string_view *param_3)

{
  ulong uVar1;
  basic_string_view *pbVar2;
  ulong uVar3;
  basic_string_view *pbVar4;
  ulong in_RAX;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *unaff_RBP;
  basic_string_view *pbVar5;
  basic_string_view *in_R10;
  basic_string_view *in_R11;
  ulong *unaff_R12;
  ulong *unaff_R13;
  basic_string_view *unaff_R15;
  
  do {
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_replace_cold
              (unaff_RBP,(char *)in_R10,(ulong)param_2,(char *)param_3,(ulong)in_R11,in_RAX);
LAB_00100d45:
    *(basic_string_view **)(unaff_RBP + 8) = unaff_R15;
    unaff_R15[*(long *)unaff_RBP] = (basic_string_view)0x0;
    param_2 = (basic_string_view *)*unaff_R13;
    uVar1 = *(ulong *)(unaff_RBP + 8);
    pbVar2 = *(basic_string_view **)unaff_RBP;
    uVar3 = std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::find
                      ((char *)pbVar2,uVar1,unaff_R13[1]);
    if (uVar3 == 0xffffffffffffffff) {
      return;
    }
    in_R11 = (basic_string_view *)*unaff_R12;
    param_3 = (basic_string_view *)unaff_R12[1];
    pbVar4 = (basic_string_view *)(uVar1 - uVar3);
    if (pbVar4 < param_2) {
      param_2 = pbVar4;
    }
    if (uVar1 < uVar3) {
      std::__throw_out_of_range_fmt
                ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
                 uVar3,uVar1);
LAB_00100e46:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_replace");
    }
    if (param_2 + (0x7fffffffffffffff - uVar1) < in_R11) goto LAB_00100e46;
    unaff_R15 = in_R11 + (uVar1 - (long)param_2);
    if (pbVar2 == (basic_string_view *)(unaff_RBP + 0x10)) {
      pbVar5 = (basic_string_view *)0xf;
    }
    else {
      pbVar5 = *(basic_string_view **)(unaff_RBP + 0x10);
    }
    if (pbVar5 < unaff_R15) {
      std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
                (unaff_RBP,uVar3,(ulong)param_2,(char *)param_3,(ulong)in_R11);
      goto LAB_00100d45;
    }
    in_R10 = pbVar2 + uVar3;
    in_RAX = (long)pbVar4 - (long)param_2;
  } while ((pbVar2 <= param_3) && (param_3 <= pbVar2 + uVar1));
  if ((in_RAX != 0) && (in_R11 != param_2)) {
    if (in_RAX == 1) {
      in_R10[(long)in_R11] = in_R10[(long)param_2];
    }
    else {
      memmove(in_R10 + (long)in_R11,in_R10 + (long)param_2,in_RAX);
    }
  }
  if (in_R11 != (basic_string_view *)0x0) {
    if (in_R11 == (basic_string_view *)0x1) {
      *in_R10 = *param_3;
    }
    else {
      memcpy(in_R10,param_3,(size_t)in_R11);
    }
  }
  goto LAB_00100d45;
}



/* JPH::StringFormat[abi:cxx11](char const*, ...) */

void JPH::_GLOBAL__sub_I_StringFormat_abi_cxx11_(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC7;
  }
  return;
}


