
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<basisu::job_pool::job_pool(unsigned
   int)::{lambda()#1}> > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<basisu::job_pool::job_pool(unsigned_int)::{lambda()#1}>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<basisu::job_pool::job_pool(unsigned_int)::_lambda()_1_>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_0010e6f0;
  std::thread::_State::~_State((_State *)this);
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<basisu::job_pool::job_pool(unsigned
   int)::{lambda()#1}> > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<basisu::job_pool::job_pool(unsigned_int)::{lambda()#1}>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<basisu::job_pool::job_pool(unsigned_int)::_lambda()_1_>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_0010e6f0;
  std::thread::_State::~_State((_State *)this);
  operator_delete(this,0x18);
  return;
}



/* basisu::canonical_huffman_calculate_minimum_redundancy(basisu::sym_freq*, int) [clone .part.0] */

void basisu::canonical_huffman_calculate_minimum_redundancy(sym_freq *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  sym_freq *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  
  uVar12 = param_2 - 1;
  uVar10 = *(int *)(param_1 + 8) + *(int *)param_1;
  *(uint *)param_1 = uVar10;
  if (1 < (int)uVar12) {
    lVar2 = 1;
    iVar4 = 0;
    iVar7 = 2;
    lVar11 = 0;
    do {
      uVar1 = (uint)lVar2;
      if (iVar7 < param_2) {
        uVar9 = *(uint *)(param_1 + (long)iVar7 * 8);
        if (uVar10 < uVar9) {
          *(uint *)(param_1 + lVar2 * 8) = uVar10;
          iVar4 = iVar4 + 1;
          *(uint *)(param_1 + lVar11 * 8) = uVar1;
          uVar9 = *(uint *)(param_1 + lVar2 * 8);
        }
        else {
          *(uint *)(param_1 + lVar2 * 8) = uVar9;
          iVar7 = iVar7 + 1;
        }
        if (param_2 <= iVar7) goto LAB_0010009e;
        lVar11 = (long)iVar7;
        if (iVar4 < (int)uVar1) {
          psVar3 = param_1 + (long)iVar4 * 8;
          uVar10 = *(uint *)psVar3;
          if (*(uint *)(param_1 + lVar11 * 8) <= uVar10) goto LAB_00100109;
          goto LAB_001000a8;
        }
LAB_00100109:
        iVar7 = iVar7 + 1;
        *(uint *)(param_1 + lVar2 * 8) = uVar9 + *(uint *)(param_1 + lVar11 * 8);
      }
      else {
        *(uint *)(param_1 + lVar2 * 8) = uVar10;
        iVar4 = iVar4 + 1;
        *(uint *)(param_1 + lVar11 * 8) = uVar1;
        uVar9 = *(uint *)(param_1 + lVar2 * 8);
LAB_0010009e:
        psVar3 = param_1 + (long)iVar4 * 8;
        uVar10 = *(uint *)psVar3;
LAB_001000a8:
        iVar4 = iVar4 + 1;
        *(uint *)(param_1 + lVar2 * 8) = uVar10 + uVar9;
        *(uint *)psVar3 = uVar1;
      }
      if (lVar2 + 1U == (ulong)uVar12) goto LAB_0010011c;
      lVar2 = lVar2 + 1;
      lVar11 = (long)iVar4;
      uVar10 = *(uint *)(param_1 + lVar11 * 8);
    } while( true );
  }
  *(undefined4 *)(param_1 + (long)param_2 * 8 + -0x10) = 0;
LAB_00100147:
  iVar4 = param_2 + -2;
  iVar7 = 1;
  iVar8 = 0;
  do {
    iVar6 = 0;
    iVar5 = 0;
    if (iVar4 < 0) {
LAB_00100193:
      psVar3 = param_1 + (long)(int)uVar12 * 8;
      do {
        *(int *)psVar3 = iVar8;
        psVar3 = psVar3 + -8;
      } while (psVar3 != param_1 + (ulong)(uint)((iVar7 + -1) - iVar5) * -8 +
                                   (long)(int)uVar12 * 8 + -8);
      uVar12 = uVar12 + (iVar5 - iVar7);
      if (iVar5 == 0) {
        return;
      }
    }
    else {
      iVar5 = 0;
      psVar3 = param_1 + (long)iVar4 * 8;
      do {
        if (*(int *)psVar3 != iVar8) break;
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + 1;
        psVar3 = psVar3 + -8;
      } while (iVar4 != -1);
      iVar6 = iVar5 * 2;
      if (iVar5 < iVar7) goto LAB_00100193;
    }
    iVar7 = iVar6;
    iVar8 = iVar8 + 1;
  } while( true );
LAB_0010011c:
  *(undefined4 *)(param_1 + (long)param_2 * 8 + -0x10) = 0;
  lVar2 = (long)(param_2 + -3);
  do {
    *(int *)(param_1 + lVar2 * 8) =
         *(int *)(param_1 + (ulong)*(uint *)(param_1 + lVar2 * 8) * 8) + 1;
    lVar2 = lVar2 + -1;
  } while (-1 < (int)lVar2);
  goto LAB_00100147;
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
      goto LAB_00100244;
    }
    if (__n == 0) goto LAB_00100244;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100244:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::image::crop(unsigned int, unsigned int, unsigned int, basisu::color_rgba const&, bool)
   [clone .isra.0] */

void __thiscall
basisu::image::crop(image *this,uint param_1,uint param_2,uint param_3,color_rgba *param_4,
                   bool param_5)

{
  undefined4 *puVar1;
  void *__ptr;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 0xffffffff) {
    param_3 = param_1;
  }
  if (((*(uint *)this != param_1) || (*(uint *)(this + 4) != param_2)) ||
     (*(uint *)(this + 8) != param_3)) {
    if ((param_1 == 0 || param_2 == 0) || (param_3 == 0)) {
      uVar5 = *(uint *)(this + 0x18);
      *(undefined8 *)this = 0;
      *(undefined4 *)(this + 8) = 0;
      if ((ulong)uVar5 != 0) {
        memmove(*(void **)(this + 0x10),(void *)((long)*(void **)(this + 0x10) + (ulong)uVar5 * 4),0
               );
        *(uint *)(this + 0x18) = *(int *)(this + 0x18) - uVar5;
      }
    }
    else {
      __ptr = *(void **)(this + 0x10);
      *(undefined8 *)(this + 0x18) = 0;
      iVar4 = param_2 * param_3;
      *(undefined8 *)(this + 0x10) = 0;
      if (iVar4 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x10,SUB41(iVar4,0),(uint)(iVar4 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        *(int *)(this + 0x18) = iVar4;
      }
      if (param_5) {
        puVar3 = *(undefined4 **)(this + 0x10);
        if (*(long *)this == 0) {
          puVar1 = puVar3 + *(uint *)(this + 0x18);
          for (; puVar1 != puVar3; puVar3 = puVar3 + 1) {
            *puVar3 = *(undefined4 *)param_4;
          }
        }
        else {
          iVar4 = 0;
          uVar5 = 0;
          while( true ) {
            uVar2 = 0;
            while( true ) {
              if ((uVar2 < *(uint *)this) && (uVar5 < *(uint *)(this + 4))) {
                puVar3[iVar4 + uVar2] =
                     *(undefined4 *)((long)__ptr + (ulong)(*(int *)(this + 8) * uVar5 + uVar2) * 4);
              }
              else {
                puVar3[iVar4 + uVar2] = *(undefined4 *)param_4;
              }
              if (param_1 <= uVar2 + 1) break;
              uVar2 = uVar2 + 1;
              puVar3 = *(undefined4 **)(this + 0x10);
            }
            uVar5 = uVar5 + 1;
            iVar4 = iVar4 + param_3;
            if (param_2 <= uVar5) break;
            puVar3 = *(undefined4 **)(this + 0x10);
          }
        }
      }
      *(uint *)this = param_1;
      *(uint *)(this + 4) = param_2;
      *(uint *)(this + 8) = param_3;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100600) */
/* WARNING: Removing unreachable block (ram,0x00100605) */
/* WARNING: Removing unreachable block (ram,0x0010060b) */
/* basisu::imagef::crop(unsigned int, unsigned int, unsigned int, basisu::vec<4u, float> const&)
   [clone .isra.0] */

void __thiscall
basisu::imagef::crop(imagef *this,uint param_1,uint param_2,uint param_3,vec *param_4)

{
  void *__ptr;
  undefined8 uVar1;
  vec *pvVar2;
  vec *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  uVar7 = *(uint *)this;
  if (param_3 == 0xffffffff) {
    param_3 = param_1;
  }
  if (((uVar7 != param_1) || (*(uint *)(this + 4) != param_2)) || (*(uint *)(this + 8) != param_3))
  {
    if ((param_1 == 0 || param_2 == 0) || (param_3 == 0)) {
      *(undefined8 *)this = 0;
      *(undefined4 *)(this + 8) = 0;
      if (*(int *)(this + 0x18) != 0) {
        *(undefined4 *)(this + 0x18) = 0;
      }
    }
    else {
      __ptr = *(void **)(this + 0x10);
      lVar8 = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      iVar5 = param_2 * param_3;
      if (iVar5 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x10,SUB41(iVar5,0),(uint)(iVar5 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x10,false);
        uVar7 = *(uint *)this;
        lVar8 = *(long *)(this + 0x10);
        *(int *)(this + 0x18) = iVar5;
      }
      iVar5 = 0;
      uVar6 = 0;
      do {
        uVar4 = 0;
LAB_00100564:
        do {
          pvVar2 = (vec *)((ulong)(uVar4 + iVar5) * 0x10 + lVar8);
          if ((uVar4 < uVar7) && (uVar6 < *(uint *)(this + 4))) {
            pvVar3 = (vec *)((ulong)(*(int *)(this + 8) * uVar6 + uVar4) * 0x10 + (long)__ptr);
            if (pvVar3 != pvVar2) {
              uVar1 = *(undefined8 *)(pvVar3 + 8);
              *(undefined8 *)pvVar2 = *(undefined8 *)pvVar3;
              *(undefined8 *)(pvVar2 + 8) = uVar1;
            }
          }
          else if (param_4 != pvVar2) {
            uVar1 = *(undefined8 *)(param_4 + 8);
            uVar4 = uVar4 + 1;
            *(undefined8 *)pvVar2 = *(undefined8 *)param_4;
            *(undefined8 *)(pvVar2 + 8) = uVar1;
            if (param_1 <= uVar4) break;
            goto LAB_00100564;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_1);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + param_3;
      } while (uVar6 < param_2);
      *(uint *)this = param_1;
      *(uint *)(this + 4) = param_2;
      *(uint *)(this + 8) = param_3;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::convert_ldr_to_hdr_image(basisu::imagef&, basisu::image const&, bool) */

void basisu::convert_ldr_to_hdr_image(imagef *param_1,image *param_2,bool param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_8c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  uStack_50 = CONCAT44(_LC1,_UNK_0010e718);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = __LC2;
  imagef::crop(param_1,*(uint *)param_2,*(uint *)(param_2 + 4),0xffffffff,(vec *)&local_58);
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != 0) {
    iVar3 = *(int *)param_2;
    local_8c = 0;
    fVar12 = _LC3;
    fVar13 = _LC4;
    if (iVar3 == 0) {
      do {
        local_8c = local_8c + 1;
      } while (local_8c != iVar2);
    }
    else {
      do {
        lVar5 = *(long *)(param_2 + 0x10);
        lVar6 = *(long *)(param_1 + 0x10);
        uVar8 = *(int *)(param_2 + 8) * local_8c;
        iVar4 = *(int *)(param_1 + 8);
        uVar9 = uVar8;
        do {
          pbVar1 = (byte *)(lVar5 + (ulong)uVar9 * 4);
          pfVar7 = (float *)((ulong)((local_8c * iVar4 - uVar8) + uVar9) * 0x10 + lVar6);
          fVar10 = (float)*pbVar1 * fVar12;
          if (param_3) {
            if (fVar13 <= fVar10) {
              fVar10 = powf((fVar10 + __LC6) * __LC7,_LC8);
              fVar12 = _LC3;
              fVar13 = _LC4;
              if (fVar10 < 0.0) goto LAB_001007b0;
              fVar11 = _LC1;
              if (fVar10 <= _LC1) {
                fVar11 = fVar10;
              }
            }
            else {
              fVar11 = fVar10 * __LC5;
              if (fVar10 * __LC5 < 0.0) {
LAB_001007b0:
                fVar11 = 0.0;
              }
            }
            *pfVar7 = fVar11;
            fVar10 = (float)pbVar1[1] * fVar12;
            if (fVar13 <= fVar10) {
              fVar10 = powf((fVar10 + __LC6) * __LC7,_LC8);
              fVar12 = _LC3;
              fVar13 = _LC4;
              if (fVar10 < 0.0) goto LAB_001007e4;
              fVar11 = _LC1;
              if (fVar10 <= _LC1) {
                fVar11 = fVar10;
              }
            }
            else {
              fVar11 = fVar10 * __LC5;
              if (fVar10 * __LC5 < 0.0) {
LAB_001007e4:
                fVar11 = 0.0;
              }
            }
            pfVar7[1] = fVar11;
            fVar11 = (float)pbVar1[2] * fVar12;
            if (fVar13 <= fVar11) {
              fVar11 = powf((fVar11 + __LC6) * __LC7,_LC8);
              fVar12 = _LC3;
              fVar13 = _LC4;
              if (fVar11 < 0.0) goto LAB_0010081d;
              fVar10 = _LC1;
              if (fVar11 <= _LC1) {
                fVar10 = fVar11;
              }
            }
            else {
              fVar10 = fVar11 * __LC5;
              if (fVar11 * __LC5 < 0.0) {
LAB_0010081d:
                fVar10 = 0.0;
              }
            }
          }
          else {
            *pfVar7 = fVar10;
            pfVar7[1] = (float)pbVar1[1] * fVar12;
            fVar10 = (float)pbVar1[2] * fVar12;
          }
          pfVar7[2] = fVar10;
          uVar9 = uVar9 + 1;
          pfVar7[3] = (float)pbVar1[3] * fVar12;
        } while (iVar3 + uVar8 != uVar9);
        local_8c = local_8c + 1;
      } while (local_8c != iVar2);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::read_rgbe(basisu::vector<unsigned char> const&, basisu::imagef&,
   basisu::rgbe_header_info&) [clone .part.0] [clone .constprop.0] */

bool basisu::read_rgbe(vector *param_1,imagef *param_2,rgbe_header_info *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *__ptr;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  byte bVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  byte bVar24;
  uint *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int iVar25;
  int iVar26;
  byte *pbVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long in_FS_OFFSET;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  byte *local_118;
  ulong local_100;
  uint local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte *local_68;
  ulong local_60;
  byte local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_58;
  if (*(int *)(param_1 + 8) != 0) {
    bVar10 = false;
    uVar13 = 0;
    do {
      uVar34 = local_60;
      pbVar27 = local_68;
      lVar31 = *(long *)param_1;
      uVar32 = uVar13 + 1;
      bVar15 = *(byte *)(lVar31 + uVar13);
      if (bVar15 == 10) {
        if (local_60 == 0) {
          if (bVar10 == false) goto LAB_00100d15;
          if (uVar32 < *(uint *)(param_1 + 8)) {
            uVar13 = 0;
            goto LAB_00100ddb;
          }
          goto LAB_00100d10;
        }
        if (*local_68 == 0x23) {
          if (local_60 != 1) {
            iVar11 = strncasecmp("#?",(char *)local_68,2);
            if ((iVar11 != 0) && (*(long *)(param_3 + 8) == 0)) goto LAB_00100be5;
            goto LAB_00100a73;
          }
          if (*(long *)(param_3 + 8) == 0) {
LAB_00100be5:
            std::__cxx11::string::_M_erase((ulong)&local_68,0);
            while ((local_60 != 0 && (*local_68 == 0x20))) {
              std::__cxx11::string::_M_erase((ulong)&local_68,0);
            }
            std::__cxx11::string::_M_assign((string *)param_3);
          }
        }
        else {
LAB_00100a73:
          if (uVar34 < 9) {
            if (((5 < uVar34) && (iVar11 = strncasecmp("GAMMA=",(char *)pbVar27,6), iVar11 == 0)) &&
               (uVar34 != 6)) {
LAB_00100bb0:
              dVar39 = strtod((char *)(pbVar27 + 6),(char **)0x0);
              param_3[0x28] = (rgbe_header_info)0x1;
              *(double *)(param_3 + 0x30) = dVar39;
            }
          }
          else {
            iVar11 = strncasecmp("EXPOSURE=",(char *)pbVar27,9);
            if ((uVar34 == 9) || (iVar11 != 0)) {
              iVar11 = strncasecmp("GAMMA=",(char *)pbVar27,6);
              if (iVar11 == 0) goto LAB_00100bb0;
              if (((uVar34 == 0x16) &&
                  (*(long *)pbVar27 == 0x333d54414d524f46 &&
                   *(long *)(pbVar27 + 8) == 0x6c725f7469622d32)) &&
                 (*(long *)(pbVar27 + 0xe) == 0x656267725f656c72)) {
                bVar10 = true;
              }
            }
            else {
              dVar39 = strtod((char *)(pbVar27 + 9),(char **)0x0);
              param_3[0x38] = (rgbe_header_info)0x1;
              *(double *)(param_3 + 0x30) = dVar39;
            }
          }
        }
        std::__cxx11::string::resize((ulong)&local_68,'\0');
      }
      else {
        uVar13 = local_60 + 1;
        if (local_68 == &local_58) {
          uVar20 = 0xf;
        }
        else {
          uVar20 = CONCAT71(uStack_57,local_58);
        }
        if (uVar20 < uVar13) {
          std::__cxx11::string::_M_mutate((ulong)&local_68,local_60,(char *)0x0,0);
        }
        local_68[uVar34] = bVar15;
        local_68[uVar13] = 0;
        local_60 = uVar13;
      }
      if ((*(uint *)(param_1 + 8) <= uVar32) || (uVar13 = uVar32, uVar32 == 0x1000))
      goto LAB_00100d10;
    } while( true );
  }
  bVar10 = false;
  goto LAB_00100d2e;
LAB_00100ddb:
  bVar15 = *(byte *)(lVar31 + uVar32);
  uVar32 = uVar32 + 1;
  if (bVar15 == 10) goto LAB_00100e37;
  uVar34 = uVar13 + 1;
  if (local_68 == &local_58) {
    uVar20 = 0xf;
  }
  else {
    uVar20 = CONCAT71(uStack_57,local_58);
  }
  if (uVar20 < uVar34) {
    std::__cxx11::string::_M_mutate((ulong)&local_68,uVar13,(char *)0x0,0);
  }
  local_68[uVar13] = bVar15;
  local_68[uVar34] = 0;
  local_60 = uVar34;
  if (*(uint *)(param_1 + 8) <= uVar32) {
    bVar10 = false;
    goto LAB_00100d15;
  }
  lVar31 = *(long *)param_1;
  uVar13 = uVar34;
  goto LAB_00100ddb;
LAB_00100e37:
  local_88 = 1;
  local_b0 = 0;
  local_ac = 0;
  local_80 = _LC13;
  lVar31 = 0;
  do {
    bVar15 = *local_68;
    iVar11 = bVar15 - 0x2d;
    if ((iVar11 == 0) && (iVar11 = local_68[1] - 0x58, iVar11 == 0)) {
      iVar11 = local_68[2] - 0x20;
    }
    bVar36 = iVar11 == 0;
    iVar11 = bVar15 - 0x2b;
    if ((iVar11 == 0) && (iVar11 = local_68[1] - 0x58, iVar11 == 0)) {
      iVar11 = local_68[2] - 0x20;
    }
    bVar37 = iVar11 == 0;
    iVar11 = bVar15 - 0x2d;
    if ((iVar11 == 0) && (iVar11 = local_68[1] - 0x59, iVar11 == 0)) {
      iVar11 = local_68[2] - 0x20;
    }
    bVar38 = iVar11 == 0;
    iVar11 = bVar15 - 0x2b;
    if ((iVar11 == 0) && (iVar11 = local_68[1] - 0x59, iVar11 == 0)) {
      iVar11 = local_68[2] - 0x20;
    }
    if (uVar13 < 3) break;
    bVar10 = (iVar11 == 0 || bVar38) || (bVar37 || bVar36);
    if ((iVar11 != 0 && !bVar38) && (!bVar37 && !bVar36)) goto LAB_00100d15;
    *(uint *)((long)&local_88 + lVar31 * 4) = (uint)(!bVar37 && !bVar36);
    if ((bVar36) || (uVar12 = 1, bVar38)) {
      uVar12 = 0xffffffff;
    }
    *(undefined4 *)((long)&local_80 + lVar31 * 4) = uVar12;
    puVar21 = &local_b0;
    if (lVar31 != 0) {
      puVar21 = &local_ac;
    }
    do {
      std::__cxx11::string::_M_erase((ulong)&local_68,0);
      if (local_60 == 0) {
        uVar13 = 0;
        break;
      }
      uVar13 = local_60;
    } while (*local_68 == 0x20);
    bVar36 = false;
    while (uVar13 != 0) {
      bVar15 = *local_68;
      std::__cxx11::string::_M_erase((ulong)&local_68,0);
      if (bVar15 == 0x20) break;
      if ((9 < (byte)(bVar15 - 0x30)) ||
         (uVar5 = *puVar21, uVar4 = (char)bVar15 + -0x30 + uVar5 * 10, *puVar21 = uVar4,
         uVar13 = local_60, bVar36 = bVar10, uVar4 < uVar5)) goto LAB_00101251;
    }
    uVar5 = local_ac;
    uVar4 = local_b0;
    if ((bVar36 == false) || (0xffff < *puVar21 - 1)) {
LAB_00101251:
      bVar10 = false;
      goto LAB_00100d15;
    }
    if (lVar31 != 0) goto LAB_00101062;
    lVar31 = 1;
    uVar13 = local_60;
  } while( true );
LAB_00100d10:
  bVar10 = false;
  goto LAB_00100d15;
LAB_00101062:
  uStack_70 = CONCAT44(_LC1,_UNK_0010e718);
  local_78 = __LC2;
  imagef::crop(param_2,local_ac,local_b0,0xffffffff,(vec *)&local_78);
  uVar13 = (ulong)uVar5;
  if (uVar13 == 0) {
    local_100 = 0;
    local_118 = (byte *)0x0;
  }
  else {
    local_100 = uVar13 * 4;
    local_118 = (byte *)operator_new(local_100);
  }
  if (uVar4 == 0) {
LAB_001015ca:
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    if ((int)local_88 == 0) {
      uStack_70 = CONCAT44(_LC1,_UNK_0010e718);
      local_78 = __LC2;
      imagef::crop((imagef *)&local_a8,uVar4,uVar5,0xffffffff,(vec *)&local_78);
    }
    else {
      uStack_70 = CONCAT44(_LC1,_UNK_0010e718);
      local_78 = __LC2;
      imagef::crop((imagef *)&local_a8,uVar5,uVar4,0xffffffff,(vec *)&local_78);
    }
    if (uVar4 != 0) {
      iVar11 = uVar4 - 1;
      if (uVar5 == 0) {
        do {
          bVar10 = iVar11 != 0;
          iVar11 = iVar11 + -1;
        } while (bVar10);
      }
      else {
        iVar25 = 0;
        lVar31 = *(long *)(param_2 + 0x10);
        while( true ) {
          iVar6 = *(int *)(param_2 + 8);
          uVar19 = 1;
          do {
            puVar14 = (undefined8 *)((ulong)(iVar6 * iVar25 + -1 + uVar19) * 0x10 + lVar31);
            if (local_88._4_4_ == 0) {
              iVar26 = uVar19 - 1;
              if (local_80 < 0) {
                iVar26 = uVar5 - uVar19;
              }
              iVar16 = iVar11;
              if ((int)local_80 < 0) {
                iVar16 = iVar25;
              }
            }
            else {
              iVar16 = uVar5 - uVar19;
              if (local_80 < 0) {
                iVar16 = uVar19 - 1;
              }
              iVar26 = iVar11;
              if (-1 < (int)local_80) {
                iVar26 = iVar25;
              }
            }
            puVar17 = (undefined8 *)
                      ((ulong)(uint)(iVar16 * (int)local_a0 + iVar26) * 0x10 + local_98);
            if (puVar14 != puVar17) {
              uVar7 = puVar14[1];
              *puVar17 = *puVar14;
              puVar17[1] = uVar7;
            }
            bVar10 = uVar5 != uVar19;
            uVar19 = uVar19 + 1;
          } while (bVar10);
          if (iVar11 == 0) break;
          iVar25 = uVar4 - iVar11;
          iVar11 = iVar11 + -1;
        }
      }
    }
    *(undefined8 *)param_2 = local_a8;
    __ptr = *(void **)(param_2 + 0x10);
    *(int *)(param_2 + 8) = (int)local_a0;
    *(long *)(param_2 + 0x10) = local_98;
    *(undefined8 *)(param_2 + 0x18) = local_90;
    bVar10 = bVar36;
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
  }
  else {
    uVar34 = (ulong)*(uint *)(param_1 + 8);
    uVar19 = *(uint *)(param_2 + 8);
    puVar14 = *(undefined8 **)(param_2 + 0x10);
    if (3 < uVar34 - uVar32) {
      uVar33 = 0;
      puVar17 = puVar14;
      uVar35 = uVar19;
      do {
        if (uVar5 - 8 < 0x7ff8) {
          lVar31 = *(long *)param_1;
          if ((((char)*(uint *)(lVar31 + uVar32) == '\x02') &&
              (uVar28 = *(uint *)(lVar31 + uVar32), (char)(uVar28 >> 8) == '\x02')) &&
             (-1 < (char)(uVar28 >> 0x10))) {
            if (uVar5 != (uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8)) break;
            uVar32 = uVar32 + 4;
            lVar29 = 0;
            do {
              if (uVar34 <= uVar32) goto LAB_00101228;
              uVar20 = 0;
              uVar28 = uVar5;
              while( true ) {
                bVar15 = *(byte *)(lVar31 + uVar32);
                uVar1 = uVar32 + 1;
                uVar30 = (uint)bVar15;
                if (bVar15 < 0x81) {
                  if (((bVar15 == 0) || (uVar28 < uVar30)) || (uVar34 <= uVar1)) goto LAB_00101228;
                  lVar3 = uVar32 + 2;
                  lVar2 = uVar32 * -4;
                  uVar32 = uVar1;
                  while( true ) {
                    uVar32 = uVar32 + 1;
                    local_118[uVar32 * 4 + lVar29 + lVar2 + uVar20 * 4 + -8] =
                         *(byte *)(lVar31 + -1 + uVar32);
                    if (uVar32 == lVar3 + (ulong)(bVar15 - 1)) break;
                    if (uVar32 == uVar34) goto LAB_00101228;
                  }
                }
                else {
                  uVar30 = uVar30 - 0x80 & 0xff;
                  if ((uVar28 < uVar30) || (uVar34 <= uVar1)) goto LAB_00101228;
                  bVar15 = *(byte *)(lVar31 + uVar1);
                  uVar32 = uVar32 + 2;
                  pbVar27 = local_118 + lVar29 + uVar20 * 4;
                  do {
                    *pbVar27 = bVar15;
                    pbVar27 = pbVar27 + 4;
                  } while (local_118 + ((uVar30 - 1) + uVar20) * 4 + lVar29 + 4 != pbVar27);
                }
                fVar9 = _LC1;
                uVar28 = (int)uVar20 + uVar30;
                uVar20 = (ulong)uVar28;
                if (uVar5 <= uVar28) break;
                uVar28 = uVar5 - uVar28;
                if (uVar34 <= uVar32) goto LAB_00101228;
              }
              lVar29 = lVar29 + 1;
            } while (lVar29 != 4);
            puVar23 = puVar17;
            pbVar27 = local_118;
            do {
              fVar41 = 0.0;
              fVar42 = 0.0;
              fVar40 = 0.0;
              if (pbVar27[3] != 0) {
                fVar42 = ldexpf(fVar9,pbVar27[3] - 0x88);
                fVar40 = (float)pbVar27[2] * fVar42;
                fVar41 = fVar42 * (float)*pbVar27;
                fVar42 = fVar42 * (float)pbVar27[1];
              }
              *puVar23 = CONCAT44(fVar42,fVar41);
              puVar22 = puVar23 + 2;
              pbVar27 = pbVar27 + 4;
              *(float *)(puVar23 + 1) = fVar40;
              *(float *)((long)puVar23 + 0xc) = fVar9;
              puVar23 = puVar22;
            } while (puVar22 != puVar17 + uVar13 * 2);
          }
          else {
LAB_00101159:
            if (uVar34 - uVar32 < 4) break;
            lVar31 = *(long *)param_1;
            bVar15 = 0;
            uVar28 = 0;
            while( true ) {
              fVar9 = _LC1;
              uVar30 = *(uint *)(lVar31 + uVar32);
              uVar32 = uVar32 + 4;
              bVar24 = (byte)(uVar30 >> 8);
              if ((((char)uVar30 == '\x01') && (bVar24 == 1)) && ((char)(uVar30 >> 0x10) == '\x01'))
              {
                if (uVar28 == 0 && uVar33 == 0) goto LAB_00101228;
                uVar7 = puVar17[-2];
                uVar8 = puVar17[-1];
                uVar18 = (uVar30 >> 0x18) << (bVar15 & 0x1f);
                uVar28 = uVar28 + uVar18;
                if (uVar5 < uVar28) goto LAB_00101228;
                if ((uVar30 >> 0x18) << (bVar15 & 0x1f) != 0) {
                  puVar23 = puVar17;
                  do {
                    *puVar23 = uVar7;
                    puVar23[1] = uVar8;
                    puVar23 = puVar23 + 2;
                  } while (puVar23 != puVar17 + (ulong)(uVar18 - 1) * 2 + 2);
                  puVar17 = puVar17 + (ulong)uVar18 * 2;
                }
                bVar15 = bVar15 + 8;
              }
              else {
                if (uVar30 >> 0x18 == 0) {
                  fVar41 = 0.0;
                  fVar42 = 0.0;
                  fVar40 = 0.0;
                }
                else {
                  fVar42 = ldexpf(_LC1,(uVar30 >> 0x18) - 0x88);
                  fVar40 = (float)(uVar30 >> 0x10 & 0xff) * fVar42;
                  fVar41 = fVar42 * (float)(uVar30 & 0xff);
                  fVar42 = fVar42 * (float)bVar24;
                }
                *puVar17 = CONCAT44(fVar42,fVar41);
                uVar28 = uVar28 + 1;
                bVar15 = 0;
                *(float *)(puVar17 + 1) = fVar40;
                *(float *)((long)puVar17 + 0xc) = fVar9;
                puVar17 = puVar17 + 2;
              }
              if (uVar5 <= uVar28) break;
              if (uVar34 - uVar32 < 4) goto LAB_00101228;
            }
          }
        }
        else if (uVar5 != 0) goto LAB_00101159;
        uVar33 = uVar33 + 1;
        if (uVar4 == uVar33) goto LAB_001015ca;
        puVar17 = puVar14 + (ulong)uVar35 * 2;
        uVar35 = uVar35 + uVar19;
      } while (3 < uVar34 - uVar32);
    }
LAB_00101228:
    bVar10 = false;
  }
  if (local_118 != (byte *)0x0) {
    operator_delete(local_118,local_100);
  }
LAB_00100d15:
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
LAB_00100d2e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::append_string(basisu::vector<unsigned char>&, char const*) [clone .isra.0] */

void basisu::append_string(vector *param_1,char *param_2)

{
  ulong uVar1;
  uint uVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  __n = strlen(param_2);
  if (__n == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = (ulong)uVar2;
  uVar1 = __n + uVar3;
  if (uVar1 >> 0x20 == 0) {
    uVar5 = (uint)uVar1;
    if (uVar2 != uVar5) {
      if (uVar2 <= uVar5) {
        uVar4 = uVar3;
        if (*(uint *)(param_1 + 0xc) < uVar5) {
          basisu::elemental_vector::increase_capacity
                    ((uint)param_1,SUB81(uVar1,0),(uint)(uVar2 + 1 == uVar5),
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar2 = *(uint *)(param_1 + 8);
          uVar4 = (ulong)uVar2;
        }
        memset((void *)(uVar4 + *(long *)param_1),0,(ulong)(uVar5 - uVar2));
      }
      *(uint *)(param_1 + 8) = uVar5;
    }
  }
  memcpy((void *)(*(long *)param_1 + uVar3),param_2,__n);
  return;
}



/* basisu::basisu_encoder_init(bool, bool) */

undefined8 __thiscall basisu::basisu_encoder_init(basisu *this,bool param_1,bool param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  timeval local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)g_encoder_init_mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  if (g_library_initialized == '\0') {
    basisu::detect_sse41();
    basist::basisu_transcoder_init();
    basisu::pack_etc1_solid_color_init();
    basisu::bc7enc_compress_block_init();
    if ((char)this != '\0') {
      basisu::opencl_init(param_1);
    }
    if (interval_timer::g_timer_freq == 0.0) {
      interval_timer::g_freq = 1000000;
      interval_timer::g_timer_freq = _LC17;
      gettimeofday(&local_38,(__timezone_ptr_t)0x0);
      interval_timer::g_init_ticks = local_38.tv_sec * 1000000 + local_38.tv_usec;
    }
    basisu::astc_hdr_enc_init();
    basist::bc6h_enc_init();
    g_library_initialized = '\x01';
  }
  pthread_mutex_unlock((pthread_mutex_t *)g_encoder_init_mutex);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* basisu::basisu_encoder_deinit() */

void __thiscall basisu::basisu_encoder_deinit(basisu *this)

{
  basisu::opencl_deinit();
  g_library_initialized = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::error_vprintf(char const*, __va_list_tag*) */

void basisu::error_vprintf(char *param_1,__va_list_tag *param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_2018 [8200];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __vsnprintf_chk(auStack_2018,0x2000,2,0x2000,param_1,param_2);
  __fprintf_chk(_stderr,2,"ERROR: %s",auStack_2018);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::error_printf(char const*, ...) */

void basisu::error_printf(char *param_1,...)

{
  char in_AL;
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
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_d8 = 8;
  local_c8 = local_b8;
  local_d4 = 0x30;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  error_vprintf(param_1,(__va_list_tag *)&local_d8);
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::interval_timer::interval_timer() */

void __thiscall basisu::interval_timer::interval_timer(interval_timer *this)

{
  bool bVar1;
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  bVar1 = g_timer_freq == 0.0;
  *(undefined2 *)(this + 0x10) = 0;
  if (bVar1) {
    g_freq = 1000000;
    g_timer_freq = _LC17;
    gettimeofday(&local_28,(__timezone_ptr_t)0x0);
    g_init_ticks = local_28.tv_sec * 1000000 + local_28.tv_usec;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::interval_timer::start() */

void __thiscall basisu::interval_timer::start(interval_timer *this)

{
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  *(__time_t *)this = local_28.tv_sec * 1000000 + local_28.tv_usec;
  *(undefined2 *)(this + 0x10) = 1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::interval_timer::stop() */

void __thiscall basisu::interval_timer::stop(interval_timer *this)

{
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  this[0x11] = (interval_timer)0x1;
  *(__time_t *)(this + 8) = local_28.tv_sec * 1000000 + local_28.tv_usec;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::interval_timer::get_elapsed_secs() const */

double __thiscall basisu::interval_timer::get_elapsed_secs(interval_timer *this)

{
  ulong uVar1;
  long in_FS_OFFSET;
  double dVar2;
  timeval local_28;
  long local_10;
  
  dVar2 = 0.0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x10] == (interval_timer)0x0) goto LAB_00101c86;
  if (this[0x11] == (interval_timer)0x0) {
    gettimeofday(&local_28,(__timezone_ptr_t)0x0);
    uVar1 = (local_28.tv_sec * 1000000 + local_28.tv_usec) - *(long *)this;
    if (-1 < (long)uVar1) goto LAB_00101c75;
LAB_00101ca0:
    dVar2 = (double)uVar1;
  }
  else {
    uVar1 = *(long *)(this + 8) - *(long *)this;
    if ((long)uVar1 < 0) goto LAB_00101ca0;
LAB_00101c75:
    dVar2 = (double)(long)uVar1;
  }
  dVar2 = dVar2 * g_timer_freq;
LAB_00101c86:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dVar2;
}



/* basisu::interval_timer::init() */

void basisu::interval_timer::init(void)

{
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (g_timer_freq == 0.0) {
    g_freq = 1000000;
    g_timer_freq = _LC17;
    gettimeofday(&local_28,(__timezone_ptr_t)0x0);
    g_init_ticks = local_28.tv_sec * 1000000 + local_28.tv_usec;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::interval_timer::get_ticks() */

long basisu::interval_timer::get_ticks(void)

{
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (g_timer_freq == 0.0) {
    g_freq = 1000000;
    g_timer_freq = _LC17;
    gettimeofday(&local_28,(__timezone_ptr_t)0x0);
    g_init_ticks = local_28.tv_sec * 1000000 + local_28.tv_usec;
  }
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (local_28.tv_sec * 1000000 + local_28.tv_usec) - g_init_ticks;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::interval_timer::ticks_to_secs(unsigned long) */

double basisu::interval_timer::ticks_to_secs(ulong param_1)

{
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (g_timer_freq == 0.0) {
    g_freq = 1000000;
    g_timer_freq = _LC17;
    gettimeofday(&local_28,(__timezone_ptr_t)0x0);
    g_init_ticks = local_28.tv_sec * 1000000 + local_28.tv_usec;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (double)param_1 * g_timer_freq;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::linear_to_srgb(float) */

ulong basisu::linear_to_srgb(float param_1)

{
  float fVar1;
  float fVar2;
  undefined1 in_register_00001204 [12];
  undefined1 auVar3 [16];
  
  if (_LC21 <= param_1) {
    fVar2 = powf(param_1,_LC23);
    fVar2 = fVar2 * __LC24 - __LC6;
    if (0.0 <= fVar2) {
      fVar1 = _LC1;
      if (fVar2 <= _LC1) {
        fVar1 = fVar2;
      }
      return (ulong)(uint)fVar1;
    }
    return 0;
  }
  auVar3._0_4_ = param_1 * __LC22;
  auVar3._4_12_ = in_register_00001204;
  if (auVar3._0_4_ < 0.0) {
    return 0;
  }
  return auVar3._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::srgb_to_linear(float) */

ulong basisu::srgb_to_linear(float param_1)

{
  float fVar1;
  float fVar2;
  undefined1 in_register_00001204 [12];
  undefined1 auVar3 [16];
  
  if (_LC4 <= param_1) {
    fVar2 = powf((param_1 + __LC6) * __LC7,_LC8);
    if (0.0 <= fVar2) {
      fVar1 = _LC1;
      if (fVar2 <= _LC1) {
        fVar1 = fVar2;
      }
      return (ulong)(uint)fVar1;
    }
    return 0;
  }
  auVar3._0_4_ = param_1 * __LC5;
  auVar3._4_12_ = in_register_00001204;
  if (auVar3._0_4_ < 0.0) {
    return 0;
  }
  return auVar3._0_8_;
}



/* basisu::load_qoi(char const*, basisu::image&) */

undefined8 basisu::load_qoi(char *param_1,image *param_2)

{
  return 0;
}



/* basisu::load_png(unsigned char const*, unsigned long, basisu::image&, char const*) */

undefined8 basisu::load_png(uchar *param_1,ulong param_2,image *param_3,char *param_4)

{
  uint uVar1;
  void *__ptr;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  uint local_60;
  uint local_5c;
  timeval local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (interval_timer::g_timer_freq == 0.0) {
    interval_timer::g_freq = 1000000;
    interval_timer::g_timer_freq = _LC17;
    gettimeofday(&local_58,(__timezone_ptr_t)0x0);
    interval_timer::g_init_ticks =
         CONCAT44(local_58.tv_sec._4_4_,(undefined4)local_58.tv_sec) * 1000000 + local_58.tv_usec;
  }
  gettimeofday(&local_58,(__timezone_ptr_t)0x0);
  if (param_2 == 0) {
    uVar4 = 0;
    goto LAB_00102106;
  }
  local_60 = 0;
  local_5c = 0;
  local_58.tv_sec._0_4_ = 0;
  pvVar3 = (void *)pv_png::load_png(param_1,param_2,4,&local_60,&local_5c,(uint *)&local_58);
  uVar5 = local_5c;
  uVar2 = local_60;
  if (param_1 == (uchar *)0x0) {
    error_printf("pv_png::load_png failed while loading image \"%s\"\n",param_4);
    uVar4 = 0;
    goto LAB_00102106;
  }
  uVar1 = *(uint *)(param_3 + 0x18);
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  uVar4 = CONCAT44(local_5c,local_60);
  if ((ulong)uVar1 != 0) {
    memmove(*(void **)(param_3 + 0x10),(void *)((ulong)uVar1 * 4 + (long)*(void **)(param_3 + 0x10))
            ,0);
    *(uint *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) - uVar1;
  }
  if ((uVar5 != 0) && (uVar2 != 0)) {
    __ptr = *(void **)(param_3 + 0x10);
    uVar5 = uVar5 * uVar2;
    if (((void *)((long)pvVar3 + (ulong)uVar5 * 4) <= __ptr) ||
       ((void *)((long)__ptr + (ulong)*(uint *)(param_3 + 0x1c) * 4) <= pvVar3)) {
      if (pvVar3 == (void *)0x0) {
        if (uVar5 == 0) goto LAB_001021a7;
      }
      else if (uVar5 != 0) {
LAB_001021a7:
        if (__ptr != (void *)0x0) {
          free(__ptr);
        }
        *(void **)(param_3 + 0x10) = pvVar3;
        *(ulong *)(param_3 + 0x18) = CONCAT44(uVar5,uVar5);
      }
    }
    *(uint *)(param_3 + 8) = uVar2;
    *(undefined8 *)param_3 = uVar4;
  }
  uVar4 = 1;
LAB_00102106:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* basisu::load_jpg(char const*, basisu::image&) */

undefined8 basisu::load_jpg(char *param_1,image *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  void *__ptr;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long in_FS_OFFSET;
  uint local_3c;
  uint local_38 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  __ptr = (void *)jpgd::decompress_jpeg_image_from_file
                            (param_1,(int *)&local_3c,(int *)local_38,(int *)(local_38 + 1),4,1);
  uVar3 = local_38[0];
  uVar2 = local_3c;
  uVar6 = 0;
  if (__ptr != (void *)0x0) {
    image::crop(param_2,local_3c,local_38[0],0xffffffff,(color_rgba *)&g_black_color,true);
    if (uVar3 != 0) {
      iVar11 = 0;
      uVar10 = 0;
      if (uVar2 != 0) {
        do {
          uVar8 = iVar11 * 4;
          uVar7 = 0;
          do {
            uVar4 = (ulong)uVar8;
            uVar8 = uVar8 + 4;
            puVar5 = (undefined1 *)(uVar4 + (long)__ptr);
            uVar9 = *(int *)(param_2 + 8) * uVar10 + uVar7;
            uVar7 = uVar7 + 1;
            puVar1 = (undefined1 *)(*(long *)(param_2 + 0x10) + (ulong)uVar9 * 4);
            *puVar1 = *puVar5;
            puVar1[1] = puVar5[1];
            puVar1[2] = puVar5[2];
            puVar1[3] = puVar5[3];
          } while (uVar2 != uVar7);
          uVar10 = uVar10 + 1;
          iVar11 = iVar11 + uVar2;
        } while (uVar3 != uVar10);
      }
    }
    free(__ptr);
    uVar6 = 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::read_file_to_vec(char const*, basisu::vector<unsigned char>&) */

undefined8 basisu::read_file_to_vec(char *param_1,vector *param_2)

{
  uint uVar1;
  char cVar2;
  FILE *__stream;
  ulong __n;
  size_t sVar3;
  uint uVar4;
  
  __stream = fopen64(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  fseek(__stream,0,2);
  __n = ftello64(__stream);
  if ((-1 < (long)__n) && (fseek(__stream,0,0), __n >> 0x20 == 0)) {
    uVar1 = *(uint *)(param_2 + 8);
    uVar4 = (uint)__n;
    if (uVar4 != uVar1) {
      if (uVar1 <= uVar4) {
        if (*(uint *)(param_2 + 0xc) < uVar4) {
          cVar2 = basisu::elemental_vector::increase_capacity
                            ((uint)param_2,SUB81(__n,0),(uint)(uVar1 + 1 == uVar4),
                             (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          if (cVar2 == '\0') goto LAB_00102450;
          uVar1 = *(uint *)(param_2 + 8);
        }
        memset((void *)((ulong)uVar1 + *(long *)param_2),0,(ulong)(uVar4 - uVar1));
      }
      *(uint *)(param_2 + 8) = uVar4;
    }
    if ((__n == 0) || (sVar3 = fread(*(void **)param_2,1,__n,__stream), __n == sVar3)) {
      fclose(__stream);
      return 1;
    }
  }
LAB_00102450:
  fclose(__stream);
  return 0;
}



/* basisu::load_png(char const*, basisu::image&) */

undefined4 basisu::load_png(char *param_1,image *param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  uchar *local_38;
  ulong local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  local_30 = 0;
  uVar1 = read_file_to_vec(param_1,(vector *)&local_38);
  if ((char)uVar1 == '\0') {
    error_printf("load_png: Failed reading file \"%s\"!\n",param_1);
  }
  else {
    uVar1 = load_png(local_38,local_30 & 0xffffffff,param_2,param_1);
  }
  if (local_38 != (uchar *)0x0) {
    free(local_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::read_file_to_data(char const*, void*, unsigned long) */

undefined8 basisu::read_file_to_data(char *param_1,void *param_2,ulong param_3)

{
  FILE *__stream;
  ulong uVar1;
  size_t sVar2;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  if (param_3 != 0) {
    __stream = fopen64(param_1,"rb");
    if (__stream != (FILE *)0x0) {
      fseek(__stream,0,2);
      uVar1 = ftello64(__stream);
      if ((-1 < (long)uVar1) && (param_3 <= uVar1)) {
        fseek(__stream,0,0);
        sVar2 = fread(param_2,1,param_3,__stream);
        if (param_3 == sVar2) {
          fclose(__stream);
          return 1;
        }
      }
      fclose(__stream);
    }
  }
  return 0;
}



/* basisu::write_data_to_file(char const*, void const*, unsigned long) */

undefined8 basisu::write_data_to_file(char *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  FILE *__s;
  undefined4 extraout_var;
  size_t sVar2;
  
  __s = fopen64(param_1,"wb");
  if (__s == (FILE *)0x0) {
    return 0;
  }
  if ((param_3 != 0) && (sVar2 = fwrite(param_2,1,param_3,__s), sVar2 != param_3)) {
    fclose(__s);
    return 0;
  }
  iVar1 = fclose(__s);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 != -1);
}



/* basisu::save_png(char const*, basisu::image const&, unsigned int, unsigned int) */

undefined4 basisu::save_png(char *param_1,image *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *__ptr;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  long in_FS_OFFSET;
  ulong local_50;
  undefined1 *local_48;
  ulong local_40;
  long local_30;
  
  iVar6 = *(int *)(param_2 + 4);
  iVar1 = *(int *)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar11 = iVar6 * iVar1;
  if (iVar11 != 0) {
    local_50 = 0;
    if ((param_3 & 1) == 0) {
      if (((param_3 & 2) == 0) && (iVar6 != 0)) {
        iVar7 = 0;
        if (iVar1 == 0) {
          do {
            iVar7 = iVar7 + 1;
          } while (iVar6 != iVar7);
        }
        else {
          iVar7 = 0;
          do {
            uVar2 = *(int *)(param_2 + 8) * iVar7;
            uVar3 = iVar1 + uVar2;
            do {
              if (*(char *)((long)*(void **)(param_2 + 0x10) + (ulong)uVar2 * 4 + 3) != -1) {
                __ptr = (void *)buminiz::tdefl_write_image_to_png_file_in_memory_ex
                                          (*(void **)(param_2 + 0x10),iVar1,iVar6,4,&local_50,1,0);
                goto LAB_001028ce;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 != uVar3);
            iVar7 = iVar7 + 1;
          } while (iVar6 != iVar7);
        }
      }
      iVar6 = iVar11 * 3;
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_48,SUB41(iVar6,0),(uint)(iVar11 == -0x55555555),
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      memset(local_48 + (local_40 & 0xffffffff),0,(ulong)(uint)(iVar6 - (int)local_40));
      uVar3 = *(uint *)param_2;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)(param_2 + 4) == 0) {
        uVar2 = 0;
      }
      else {
        uVar10 = 0;
        puVar9 = local_48;
        do {
          if (uVar3 != 0) {
            uVar2 = 0;
            puVar5 = (undefined1 *)
                     (*(long *)(param_2 + 0x10) + (ulong)(uVar10 * *(int *)(param_2 + 8)) * 4);
            puVar8 = puVar9;
            do {
              uVar2 = uVar2 + 1;
              puVar9 = puVar8 + 3;
              *puVar8 = *puVar5;
              puVar8[1] = puVar5[1];
              puVar8[2] = puVar5[2];
              uVar3 = *(uint *)param_2;
              puVar5 = puVar5 + 4;
              puVar8 = puVar9;
            } while (uVar2 < uVar3);
          }
          uVar2 = *(uint *)(param_2 + 4);
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar2);
      }
      iVar6 = 3;
    }
    else {
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_48,SUB41(iVar11,0),(uint)(iVar11 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      memset(local_48 + (local_40 & 0xffffffff),0,(ulong)(uint)(iVar11 - (int)local_40));
      uVar3 = *(uint *)param_2;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(param_2 + 4) == 0) {
        uVar2 = 0;
      }
      else {
        uVar10 = 0;
        puVar9 = local_48;
        do {
          uVar2 = 0;
          puVar5 = puVar9;
          if (uVar3 != 0) {
            do {
              puVar9 = puVar5 + 1;
              uVar3 = *(int *)(param_2 + 8) * uVar10 + uVar2;
              uVar2 = uVar2 + 1;
              *puVar5 = *(undefined1 *)
                         (*(long *)(param_2 + 0x10) + (ulong)uVar3 * 4 + (ulong)param_4);
              uVar3 = *(uint *)param_2;
              puVar5 = puVar9;
            } while (uVar2 < uVar3);
          }
          uVar2 = *(uint *)(param_2 + 4);
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar2);
      }
      iVar6 = 1;
    }
    __ptr = (void *)buminiz::tdefl_write_image_to_png_file_in_memory_ex
                              (local_48,uVar3,uVar2,iVar6,&local_50,1,0);
    if (local_48 != (undefined1 *)0x0) {
      free(local_48);
    }
LAB_001028ce:
    if (__ptr != (void *)0x0) {
      uVar4 = write_data_to_file(param_1,__ptr,local_50);
      if ((char)uVar4 == '\0') {
        error_printf("save_png: Failed writing to filename \"%s\"!\n",param_1);
      }
      free(__ptr);
      goto LAB_001026e3;
    }
  }
  uVar4 = 0;
LAB_001026e3:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* basisu::canonical_huffman_calculate_minimum_redundancy(basisu::sym_freq*, int) */

void basisu::canonical_huffman_calculate_minimum_redundancy(sym_freq *param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  if (param_2 != 1) {
    canonical_huffman_calculate_minimum_redundancy(param_1,param_2);
    return;
  }
  *(undefined4 *)param_1 = 1;
  return;
}



/* basisu::canonical_huffman_enforce_max_code_size(int*, int, int) */

void basisu::canonical_huffman_enforce_max_code_size(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  
  if (param_2 < 2) {
    return;
  }
  lVar6 = (long)param_3;
  piVar1 = param_1 + lVar6;
  iVar3 = *piVar1;
  if (param_3 + 1 < 0x20) {
    lVar5 = (long)(param_3 + 1);
    do {
      iVar3 = iVar3 + param_1[lVar5];
      lVar5 = lVar5 + 1;
      *piVar1 = iVar3;
    } while ((int)lVar5 < 0x20);
    if (param_3 < 1) {
      uVar8 = 1;
      uVar4 = 0;
      goto LAB_001029d1;
    }
  }
  uVar4 = 0;
  do {
    piVar7 = param_1 + lVar6;
    cVar2 = (char)lVar6;
    lVar6 = lVar6 + -1;
    uVar4 = (ulong)(uint)((int)uVar4 + (*piVar7 << ((byte)param_3 - cVar2 & 0x1f)));
  } while (0 < (int)lVar6);
  uVar8 = 1L << ((byte)param_3 & 0x3f);
  if (uVar4 == uVar8) {
    return;
  }
LAB_001029d1:
  do {
    *piVar1 = iVar3 + -1;
    lVar6 = (long)(param_3 + -1);
    piVar7 = param_1 + (param_3 + -1);
    if (1 < param_3) {
      do {
        if (*piVar7 != 0) {
          *piVar7 = *piVar7 + -1;
          param_1[lVar6 + 1] = param_1[lVar6 + 1] + 2;
          break;
        }
        lVar6 = lVar6 + -1;
        piVar7 = piVar7 + -1;
      } while ((int)lVar6 != 0);
    }
    uVar4 = (ulong)((int)uVar4 - 1);
    if (uVar4 == uVar8) {
      return;
    }
    iVar3 = *piVar1;
  } while( true );
}



/* basisu::canonical_huffman_radix_sort_syms(unsigned int, basisu::sym_freq*, basisu::sym_freq*) */

sym_freq *
basisu::canonical_huffman_radix_sort_syms(uint param_1,sym_freq *param_2,sym_freq *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  sym_freq *psVar7;
  sym_freq *psVar8;
  sym_freq *psVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  long in_FS_OFFSET;
  uint local_c38 [256];
  int local_838 [256];
  uint local_438 [258];
  long local_30;
  
  uVar11 = (ulong)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar12 = local_838;
  piVar13 = piVar12;
  for (lVar5 = 0x100; lVar5 != 0; lVar5 = lVar5 + -1) {
    piVar13[0] = 0;
    piVar13[1] = 0;
    piVar13 = piVar13 + 2;
  }
  uVar10 = 0;
  if (param_1 != 0) {
    psVar7 = param_2;
    do {
      uVar1 = *(uint *)psVar7;
      psVar7 = psVar7 + 8;
      local_438[(ulong)(uVar1 & 0xff) - 0x100] = local_438[(ulong)(uVar1 & 0xff) - 0x100] + 1;
      local_438[uVar1 >> 8 & 0xff] = local_438[uVar1 >> 8 & 0xff] + 1;
    } while (param_2 + uVar11 * 8 != psVar7);
    uVar10 = uVar11;
    if (param_1 != local_438[0]) {
      iVar2 = 2;
      goto LAB_00102acc;
    }
  }
  iVar2 = 1;
  uVar11 = uVar10;
LAB_00102acc:
  iVar4 = 0;
  do {
    psVar7 = param_3;
    param_3 = param_2;
    lVar5 = 0;
    iVar6 = 0;
    do {
      *(int *)((long)local_c38 + lVar5) = iVar6;
      iVar6 = iVar6 + *(int *)((long)piVar12 + lVar5);
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x400);
    psVar8 = param_3;
    if (param_1 != 0) {
      do {
        psVar9 = psVar8 + 8;
        uVar3 = *(uint *)psVar8 >> ((byte)iVar4 & 0x1f) & 0xff;
        uVar1 = local_c38[uVar3];
        local_c38[uVar3] = uVar1 + 1;
        *(undefined8 *)(psVar7 + (ulong)uVar1 * 8) = *(undefined8 *)psVar8;
        psVar8 = psVar9;
      } while (param_3 + uVar11 * 8 != psVar9);
    }
    iVar4 = iVar4 + 8;
    piVar12 = piVar12 + 0x100;
    param_2 = psVar7;
  } while (iVar4 != (uint)(iVar2 != 1) * 8 + 8);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return psVar7;
}



/* basisu::huffman_encoding_table::init(unsigned int, unsigned short const*, unsigned int) [clone
   .part.0] */

undefined8 __thiscall
basisu::huffman_encoding_table::init
          (huffman_encoding_table *this,uint param_1,ushort *param_2,uint param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  sym_freq *psVar5;
  sym_freq *psVar6;
  sym_freq *psVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  sym_freq *psVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  long in_FS_OFFSET;
  byte bVar19;
  int iStack_14c;
  undefined8 local_148 [16];
  uint local_c8 [34];
  long local_40;
  
  bVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar18 = 0;
    goto LAB_00102d42;
  }
  uVar11 = 0;
  puVar4 = param_2;
  do {
    uVar14 = ((int)uVar11 + 1) - (uint)(*puVar4 == 0);
    uVar11 = (ulong)uVar14;
    puVar4 = puVar4 + 1;
  } while (param_2 + param_1 != puVar4);
  uVar18 = 0;
  if (uVar14 == 0) goto LAB_00102d42;
  uVar1 = (ulong)uVar14 * 8;
  psVar5 = (sym_freq *)operator_new(uVar1);
  *(undefined4 *)psVar5 = 0;
  *(undefined2 *)(psVar5 + 4) = 0;
  if ((ulong)uVar14 == 1) {
    psVar6 = (sym_freq *)operator_new(8);
    *(undefined4 *)psVar6 = 0;
    *(undefined2 *)(psVar6 + 4) = 0;
  }
  else {
    psVar6 = psVar5;
    while (psVar6 = psVar6 + 8, psVar6 != psVar5 + uVar1) {
      *(undefined8 *)psVar6 = *(undefined8 *)psVar5;
    }
    psVar6 = (sym_freq *)operator_new(uVar1);
    *(undefined4 *)psVar6 = 0;
    *(undefined2 *)(psVar6 + 4) = 0;
    psVar7 = psVar6;
    while (psVar7 = psVar7 + 8, psVar6 + uVar1 != psVar7) {
      *(undefined8 *)psVar7 = *(undefined8 *)psVar6;
    }
  }
  uVar8 = 0;
  uVar13 = 0;
  do {
    uVar17 = uVar13;
    if (param_2[uVar17] != 0) {
      uVar13 = (ulong)uVar8;
      uVar8 = uVar8 + 1;
      *(uint *)(psVar5 + uVar13 * 8) = (uint)param_2[uVar17];
      *(short *)(psVar5 + uVar13 * 8 + 4) = (short)uVar17;
    }
    uVar13 = uVar17 + 1;
  } while ((ulong)param_1 != uVar17 + 1);
  psVar7 = (sym_freq *)canonical_huffman_radix_sort_syms(uVar14,psVar5,psVar6);
  if (uVar14 == 1) {
    *(undefined4 *)psVar7 = 1;
    puVar15 = local_148;
    for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
    }
  }
  else {
    canonical_huffman_calculate_minimum_redundancy(psVar7,uVar14);
    puVar15 = local_148;
    for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
    }
  }
  psVar12 = psVar7;
  do {
    uVar8 = *(uint *)psVar12;
    if (0x1f < uVar8) goto LAB_00102d25;
    psVar12 = psVar12 + 8;
    piVar2 = (int *)((long)local_148 + (ulong)uVar8 * 4);
    *piVar2 = *piVar2 + 1;
  } while (psVar12 != psVar7 + uVar1);
  canonical_huffman_enforce_max_code_size((int *)local_148,uVar14,param_3);
  if (*(int *)(this + 0x18) != 0) {
    *(undefined4 *)(this + 0x18) = 0;
  }
  uVar14 = 0;
  if (*(uint *)(this + 0x1c) < param_1) {
    basisu::elemental_vector::increase_capacity
              ((uint)this + 0x10,SUB41(param_1,0),(uint)(param_1 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar14 = *(uint *)(this + 0x18);
  }
  memset((void *)((ulong)uVar14 + *(long *)(this + 0x10)),0,(ulong)(param_1 - uVar14));
  *(uint *)(this + 0x18) = param_1;
  if (*(int *)(this + 8) != 0) {
    *(undefined4 *)(this + 8) = 0;
  }
  uVar14 = 0;
  if (*(uint *)(this + 0xc) < param_1) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,SUB41(param_1,0),(uint)(param_1 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x2,false);
    uVar14 = *(uint *)(this + 8);
  }
  memset((void *)(*(long *)this + (ulong)uVar14 * 2),0,(ulong)(param_1 - uVar14) * 2);
  *(uint *)(this + 8) = param_1;
  if (param_3 == 0) {
    local_c8[1] = 0;
  }
  else {
    uVar13 = 1;
    do {
      iVar3 = *(int *)((long)local_148 + uVar13 * 4);
      if (iVar3 != 0) {
        iVar16 = (int)uVar11;
        do {
          uVar14 = (int)uVar11 - 1;
          uVar11 = (ulong)uVar14;
          *(char *)(*(long *)(this + 0x10) + (ulong)*(ushort *)(psVar7 + uVar11 * 8 + 4)) =
               (char)uVar13;
        } while (uVar14 != iVar16 - iVar3);
      }
      uVar13 = uVar13 + 1;
    } while (param_3 + 1 != uVar13);
    local_c8[1] = 0;
    if (param_3 != 1) {
      uVar11 = 2;
      uVar14 = 0;
      do {
        uVar14 = (uVar14 + (&iStack_14c)[uVar11]) * 2;
        local_c8[uVar11] = uVar14;
        uVar11 = uVar11 + 1;
      } while (param_3 + 1 != uVar11);
    }
  }
  local_c8[1] = 0;
  lVar10 = *(long *)(this + 0x10);
  uVar11 = 0;
  while( true ) {
    bVar19 = *(byte *)(lVar10 + uVar11);
    uVar14 = (uint)bVar19;
    if (bVar19 != 0) {
      uVar8 = (uint)bVar19;
      if (0x1f < uVar8) goto LAB_00102d25;
      uVar9 = local_c8[uVar8];
      local_c8[uVar8] = uVar9 + 1;
      uVar8 = 0;
      do {
        uVar8 = uVar8 * 2 | uVar9 & 1;
        uVar14 = uVar14 - 1;
        uVar9 = uVar9 >> 1;
      } while (uVar14 != 0);
      *(short *)(*(long *)this + uVar11 * 2) = (short)uVar8;
    }
    if (uVar17 == uVar11) break;
    uVar11 = uVar11 + 1;
  }
  uVar18 = 1;
  goto LAB_00102d28;
LAB_00102d25:
  uVar18 = 0;
LAB_00102d28:
  operator_delete(psVar6,uVar1);
  operator_delete(psVar5,uVar1);
LAB_00102d42:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::huffman_encoding_table::init(unsigned int, unsigned int const*, unsigned int) [clone
   .part.0] */

undefined4 __thiscall
basisu::huffman_encoding_table::init
          (huffman_encoding_table *this,uint param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  ushort *local_48;
  ulong local_40;
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ushort *)0x0;
  local_40 = 0;
  if (param_1 == 0) goto LAB_00103135;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_48,SUB41(param_1,0),(uint)(param_1 == 1),
             (_func_void_void_ptr_void_ptr_uint *)0x2,false);
  memset(local_48 + (local_40 & 0xffffffff),0,(ulong)(param_1 - (int)local_40) * 2);
  local_40 = CONCAT44(local_40._4_4_,param_1);
  uVar8 = (ulong)param_1;
  uVar6 = 0;
  puVar4 = param_2;
  do {
    if (uVar6 < *puVar4) {
      uVar6 = *puVar4;
    }
    puVar4 = puVar4 + 1;
  } while (puVar4 != param_2 + uVar8);
  uVar5 = 0;
  if (uVar6 < 0xffff) {
    uVar5 = 0;
    do {
      local_48[uVar5] = (ushort)param_2[uVar5];
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar8);
    if (param_3 < 0x11) goto LAB_00103114;
    uVar3 = 0;
  }
  else {
    do {
      if (param_2[uVar5] != 0) {
        uVar1 = (ulong)(uVar6 >> 1) + (ulong)param_2[uVar5] * 0xfffe;
        uVar7 = 1;
        if (uVar6 <= uVar1) {
          uVar2 = (uint)(uVar1 / uVar6);
          uVar7 = 0xfffe;
          if (uVar2 < 0xffff) {
            uVar7 = uVar2;
          }
        }
        local_48[uVar5] = (ushort)uVar7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar8 != uVar5);
    uVar3 = 0;
    if (param_3 < 0x11) {
LAB_00103114:
      uVar3 = init(this,param_1,local_48,param_3);
    }
    if (local_48 == (ushort *)0x0) goto LAB_00103135;
  }
  free(local_48);
LAB_00103135:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* basisu::huffman_encoding_table::init(unsigned int, unsigned short const*, unsigned int) */

undefined8 __thiscall
basisu::huffman_encoding_table::init
          (huffman_encoding_table *this,uint param_1,ushort *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((param_3 < 0x11) && (param_1 - 1 < 0x4000)) {
    uVar1 = init(this,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}



/* basisu::huffman_encoding_table::init(unsigned int, unsigned int const*, unsigned int) */

undefined8 __thiscall
basisu::huffman_encoding_table::init
          (huffman_encoding_table *this,uint param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (0x3fff < param_1 - 1) {
    return 0;
  }
  uVar1 = init(this,param_1,param_2,param_3);
  return uVar1;
}



/* basisu::bitwise_coder::end_nonzero_run(basisu::vector<unsigned short>&, unsigned int&, unsigned
   int) */

void basisu::bitwise_coder::end_nonzero_run(vector *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar1 = *param_2;
  if (uVar1 != 0) {
    if (uVar1 < 3) {
      *param_2 = uVar1 - 1;
      do {
        uVar1 = *(uint *)(param_1 + 8);
        if (*(uint *)(param_1 + 0xc) <= uVar1) {
          basisu::elemental_vector::increase_capacity
                    ((uint)param_1,(bool)((char)uVar1 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x2,false);
          uVar1 = *(uint *)(param_1 + 8);
        }
        *(short *)(*(long *)param_1 + (ulong)uVar1 * 2) = (short)param_3;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        uVar1 = *param_2;
        *param_2 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    else {
      uVar2 = *(uint *)(param_1 + 8);
      if (uVar1 < 7) {
        uVar3 = ((short)uVar1 + -3) * 0x40 | 0x13;
      }
      else {
        uVar3 = ((short)uVar1 + -7) * 0x40 | 0x14;
      }
      if (*(uint *)(param_1 + 0xc) <= uVar2) {
        basisu::elemental_vector::increase_capacity
                  ((uint)param_1,(bool)((char)uVar2 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x2,false);
        uVar2 = *(uint *)(param_1 + 8);
      }
      *(ushort *)(*(long *)param_1 + (ulong)uVar2 * 2) = uVar3;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  *param_2 = 0;
  return;
}



/* basisu::bitwise_coder::end_zero_run(basisu::vector<unsigned short>&, unsigned int&) */

void basisu::bitwise_coder::end_zero_run(vector *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar1 = *param_2;
  if (uVar1 != 0) {
    if (uVar1 < 3) {
      *param_2 = uVar1 - 1;
      do {
        uVar1 = *(uint *)(param_1 + 8);
        if (*(uint *)(param_1 + 0xc) <= uVar1) {
          basisu::elemental_vector::increase_capacity
                    ((uint)param_1,(bool)((char)uVar1 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x2,false);
          uVar1 = *(uint *)(param_1 + 8);
        }
        *(undefined2 *)(*(long *)param_1 + (ulong)uVar1 * 2) = 0;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        uVar1 = *param_2;
        *param_2 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    else {
      uVar2 = *(uint *)(param_1 + 8);
      if (uVar1 < 0xb) {
        uVar3 = ((short)uVar1 + -3) * 0x40 | 0x11;
      }
      else {
        uVar3 = ((short)uVar1 + -0xb) * 0x40 | 0x12;
      }
      if (*(uint *)(param_1 + 0xc) <= uVar2) {
        basisu::elemental_vector::increase_capacity
                  ((uint)param_1,(bool)((char)uVar2 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x2,false);
        uVar2 = *(uint *)(param_1 + 8);
      }
      *(ushort *)(*(long *)param_1 + (ulong)uVar2 * 2) = uVar3;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  *param_2 = 0;
  return;
}



/* basisu::palette_index_reorderer::prepare_hist(unsigned int, unsigned int, unsigned int const*) */

void __thiscall
basisu::palette_index_reorderer::prepare_hist
          (palette_index_reorderer *this,uint param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (*(int *)(this + 8) != 0) {
    *(undefined4 *)(this + 8) = 0;
  }
  uVar6 = param_1 * param_1;
  if (uVar6 != 0) {
    uVar5 = 0;
    if (*(uint *)(this + 0xc) < uVar6) {
      basisu::elemental_vector::increase_capacity
                ((uint)this,SUB41(uVar6,0),(uint)(uVar6 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      uVar5 = (ulong)*(uint *)(this + 8);
    }
    memset((void *)(*(long *)this + uVar5 * 4),0,(ulong)(uVar6 - (int)uVar5) << 2);
    *(uint *)(this + 8) = uVar6;
  }
  uVar5 = 0;
  if (param_2 != 0) {
LAB_001033d0:
    do {
      uVar6 = param_3[uVar5];
      uVar4 = (uint)uVar5;
      bVar7 = uVar6 != 0xffffffff;
      bVar3 = bVar7;
      if (uVar4 < param_2 - 1) {
        do {
          uVar4 = (uint)uVar5;
          uVar2 = param_3[uVar5 + 1];
          bVar7 = (bool)((int)uVar6 < (int)uVar2 & bVar3);
          if (!bVar7) {
            bVar7 = bVar3;
            if (uVar4 == 0) {
              uVar5 = uVar5 + 1;
              goto LAB_001033d0;
            }
            break;
          }
          if (uVar2 != 0xffffffff) {
            piVar1 = (int *)(*(long *)this + (long)(int)(param_1 * uVar6 + uVar2) * 4);
            *piVar1 = *piVar1 + 1;
          }
          if (uVar4 != 0) break;
          uVar5 = uVar5 + 1;
          uVar6 = param_3[uVar5];
          uVar4 = (uint)uVar5;
          bVar7 = uVar6 != 0xffffffff;
          bVar3 = bVar7;
        } while (uVar4 < param_2 - 1);
LAB_00103424:
        uVar4 = param_3[uVar4 - 1];
        if (((int)uVar6 < (int)uVar4 && uVar4 != 0xffffffff) && (bVar7)) {
          piVar1 = (int *)(*(long *)this + (long)(int)(uVar6 * param_1 + uVar4) * 4);
          *piVar1 = *piVar1 + 1;
        }
      }
      else if (uVar4 != 0) goto LAB_00103424;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
  }
  return;
}



/* basisu::palette_index_reorderer::find_initial(unsigned int) */

void __thiscall
basisu::palette_index_reorderer::find_initial(palette_index_reorderer *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined4 uVar15;
  
  if (param_1 * param_1 == 0) {
    uVar15 = 0;
    uVar8 = 0;
  }
  else {
    uVar12 = 0;
    uVar9 = 0;
    uVar10 = 0;
    do {
      uVar13 = *(uint *)(*(long *)this + uVar12 * 4);
      if (uVar10 < uVar13) {
        uVar9 = uVar12 & 0xffffffff;
        uVar10 = uVar13;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_1 * param_1);
    uVar15 = (undefined4)(uVar9 % (ulong)param_1);
    uVar8 = (undefined4)(uVar9 / param_1);
  }
  uVar10 = *(uint *)(this + 0x28);
  uVar13 = (int)this + 0x20;
  uVar9 = (ulong)uVar10;
  if (*(uint *)(this + 0x2c) <= uVar10) {
    basisu::elemental_vector::increase_capacity
              (uVar13,(bool)((char)uVar10 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x4,false
              );
    uVar9 = (ulong)*(uint *)(this + 0x28);
  }
  *(undefined4 *)(*(long *)(this + 0x20) + uVar9 * 4) = uVar8;
  iVar3 = *(int *)(this + 0x28);
  uVar1 = iVar3 + 1;
  *(uint *)(this + 0x28) = uVar1;
  if (uVar1 < *(uint *)(this + 0x2c)) {
    *(undefined4 *)(*(long *)(this + 0x20) + (ulong)uVar1 * 4) = uVar15;
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  }
  else {
    basisu::elemental_vector::increase_capacity
              (uVar13,(bool)((char)iVar3 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x4,false)
    ;
    *(undefined4 *)(*(long *)(this + 0x20) + (ulong)*(uint *)(this + 0x28) * 4) = uVar15;
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  }
  if (param_1 == 0) {
    uVar9 = (ulong)*(uint *)(this + 0x38);
  }
  else {
    uVar9 = (ulong)*(uint *)(this + 0x38);
    uVar13 = 0;
    do {
      if ((*(uint *)(*(long *)(this + 0x20) + (ulong)(uVar10 + 1) * 4) != uVar13) &&
         (*(uint *)(*(long *)(this + 0x20) + (ulong)uVar10 * 4) != uVar13)) {
        if (*(uint *)(this + 0x3c) <= (uint)uVar9) {
          basisu::elemental_vector::increase_capacity
                    ((int)this + 0x30,(bool)((char)uVar9 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar9 = (ulong)*(uint *)(this + 0x38);
        }
        *(uint *)(*(long *)(this + 0x30) + uVar9 * 4) = uVar13;
        uVar9 = (ulong)(*(int *)(this + 0x38) + 1U);
        *(uint *)(this + 0x38) = *(int *)(this + 0x38) + 1U;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_1);
  }
  lVar14 = 0;
  if ((int)uVar9 != 0) {
    do {
      if (*(int *)(this + 0x28) != 0) {
        lVar4 = *(long *)(this + 0x30);
        lVar5 = *(long *)(this + 0x20);
        lVar11 = 0;
        lVar6 = *(long *)(this + 0x10);
        lVar7 = *(long *)this;
        do {
          while( true ) {
            iVar3 = *(int *)(lVar5 + lVar11 * 4);
            uVar10 = *(uint *)(lVar4 + lVar14 * 4);
            if (iVar3 < (int)uVar10) break;
            lVar11 = lVar11 + 1;
            piVar2 = (int *)(lVar6 + (ulong)uVar10 * 4);
            *piVar2 = *piVar2 + *(int *)(lVar7 + (long)(int)(iVar3 + uVar10 * param_1) * 4);
            if (*(uint *)(this + 0x28) <= (uint)lVar11) goto LAB_0010363e;
          }
          lVar11 = lVar11 + 1;
          piVar2 = (int *)(lVar6 + (ulong)uVar10 * 4);
          *piVar2 = *piVar2 + *(int *)(lVar7 + (long)(int)(iVar3 * param_1 + uVar10) * 4);
        } while ((uint)lVar11 < *(uint *)(this + 0x28));
      }
LAB_0010363e:
      lVar14 = lVar14 + 1;
    } while ((uint)lVar14 < *(uint *)(this + 0x38));
  }
  return;
}



/* basisu::palette_index_reorderer::find_next_entry(unsigned int&, double&, float (*)(unsigned int,
   unsigned int, void*), void*, float) */

void __thiscall
basisu::palette_index_reorderer::find_next_entry
          (palette_index_reorderer *this,uint *param_1,double *param_2,
          _func_float_uint_uint_void_ptr *param_3,void *param_4,float param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  *param_1 = 0;
  iVar1 = *(int *)(this + 0x38);
  *param_2 = 0.0;
  if (iVar1 != 0) {
    lVar3 = 0;
    do {
      uVar2 = *(uint *)(*(long *)(this + 0x30) + lVar3 * 4);
      dVar6 = (double)*(uint *)(*(long *)(this + 0x10) + (ulong)uVar2 * 4);
      if (param_3 != (_func_float_uint_uint_void_ptr *)0x0) {
        fVar4 = (*param_3)(uVar2,*(uint *)(*(long *)(this + 0x20) +
                                          (ulong)(*(int *)(this + 0x28) - 1) * 4),param_4);
        fVar5 = (*param_3)(uVar2,**(uint **)(this + 0x20),param_4);
        if (fVar5 <= fVar4) {
          fVar5 = fVar4;
        }
        dVar6 = (dVar6 + _LC30) *
                (double)(((_LC1 + param_5) - (_LC1 - param_5)) * fVar5 + (_LC1 - param_5));
      }
      if (*param_2 < dVar6) {
        *param_1 = (uint)lVar3;
        *param_2 = dVar6;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(this + 0x38));
  }
  return;
}



/* basisu::palette_index_reorderer::pick_side(unsigned int, unsigned int, float (*)(unsigned int,
   unsigned int, void*), void*, float) */

undefined8 __thiscall
basisu::palette_index_reorderer::pick_side
          (palette_index_reorderer *this,uint param_1,uint param_2,
          _func_float_uint_uint_void_ptr *param_3,void *param_4,float param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined8 uVar10;
  
  uVar2 = *(uint *)(this + 0x28);
  if (uVar2 == 0) {
    iVar7 = 0;
    iVar6 = 0;
    uVar10 = 0;
  }
  else {
    piVar5 = *(int **)(this + 0x20);
    iVar4 = uVar2 - 1;
    iVar7 = 0;
    iVar6 = 0;
    piVar1 = piVar5 + uVar2;
    auVar11 = (undefined1  [16])0x0;
    do {
      while( true ) {
        iVar3 = *piVar5;
        if ((int)param_2 <= iVar3) break;
        iVar3 = *(int *)(*(long *)this + (long)(int)(iVar3 * param_1 + param_2) * 4) * iVar4;
        auVar11._0_4_ = auVar11._0_4_ + (float)iVar3;
        if (-1 < iVar4) goto LAB_0010387e;
LAB_001038ae:
        uVar10 = auVar11._0_8_;
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 - iVar3;
        iVar4 = iVar4 + -2;
        if (piVar5 == piVar1) goto LAB_001038bd;
      }
      iVar3 = *(int *)(*(long *)this + (long)(int)(iVar3 + param_2 * param_1) * 4) * iVar4;
      auVar11._0_4_ = auVar11._0_4_ + (float)iVar3;
      if (iVar4 < 0) goto LAB_001038ae;
LAB_0010387e:
      uVar10 = auVar11._0_8_;
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + iVar3;
      iVar4 = iVar4 + -2;
    } while (piVar5 != piVar1);
  }
LAB_001038bd:
  if (param_3 != (_func_float_uint_uint_void_ptr *)0x0) {
    fVar8 = (*param_3)(param_2,**(uint **)(this + 0x20),param_4);
    fVar14 = _LC1 - param_5;
    fVar13 = (param_5 + _LC1) - fVar14;
    fVar9 = (*param_3)(param_2,*(uint *)(*(long *)(this + 0x20) +
                                        (ulong)(*(int *)(this + 0x28) - 1) * 4),param_4);
    auVar12._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar12._0_4_ =
         (float)iVar6 * (fVar8 * fVar13 + fVar14) - (fVar9 * fVar13 + fVar14) * (float)iVar7;
    uVar10 = auVar12._0_8_;
  }
  return uVar10;
}



/* basisu::palette_index_reorderer::init(unsigned int, unsigned int const*, unsigned int, float
   (*)(unsigned int, unsigned int, void*), void*, float) */

void __thiscall
basisu::palette_index_reorderer::init
          (palette_index_reorderer *this,uint param_1,uint *param_2,uint param_3,
          _func_float_uint_uint_void_ptr *param_4,void *param_5,float param_6)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  void *__ptr;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  size_t __n;
  long lVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  float fVar14;
  uint local_5c;
  void *local_58;
  undefined8 local_50;
  long local_40;
  
  uVar12 = *(uint *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)uVar12 != 0) {
    memmove(*(void **)this,(void *)((ulong)uVar12 * 4 + (long)*(void **)this),0);
    *(uint *)(this + 8) = *(int *)(this + 8) - uVar12;
  }
  uVar12 = *(uint *)(this + 0x18);
  if ((ulong)uVar12 != 0) {
    memmove(*(void **)(this + 0x10),(void *)((ulong)uVar12 * 4 + (long)*(void **)(this + 0x10)),0);
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) - uVar12;
  }
  uVar12 = *(uint *)(this + 0x28);
  if ((ulong)uVar12 != 0) {
    memmove(*(void **)(this + 0x20),(void *)((ulong)uVar12 * 4 + (long)*(void **)(this + 0x20)),0);
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) - uVar12;
  }
  uVar12 = *(uint *)(this + 0x38);
  if ((ulong)uVar12 != 0) {
    memmove(*(void **)(this + 0x30),(void *)((ulong)uVar12 * 4 + (long)*(void **)(this + 0x30)),0);
    *(uint *)(this + 0x38) = *(int *)(this + 0x38) - uVar12;
  }
  uVar12 = *(uint *)(this + 0x48);
  uVar8 = (ulong)uVar12;
  if (uVar8 != 0) {
    memmove(*(void **)(this + 0x40),(void *)(uVar8 * 4 + (long)*(void **)(this + 0x40)),0);
    uVar12 = *(int *)(this + 0x48) - uVar12;
    uVar8 = (ulong)uVar12;
    *(uint *)(this + 0x48) = uVar12;
  }
  uVar12 = (uint)uVar8;
  bVar11 = SUB41(param_3,0);
  iVar7 = (int)this;
  if (param_3 != uVar12) {
    if (param_3 < uVar12) {
      *(uint *)(this + 0x48) = param_3;
    }
    else {
      if (*(uint *)(this + 0x4c) < param_3) {
        basisu::elemental_vector::increase_capacity
                  (iVar7 + 0x40,bVar11,(uint)(uVar12 + 1 == param_3),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar8 = (ulong)*(uint *)(this + 0x48);
      }
      memset((void *)(*(long *)(this + 0x40) + uVar8 * 4),0,(ulong)(param_3 - (int)uVar8) << 2);
      *(uint *)(this + 0x48) = param_3;
    }
  }
  uVar12 = iVar7 + 0x20;
  if (*(uint *)(this + 0x2c) < param_3) {
    basisu::elemental_vector::increase_capacity
              (uVar12,bVar11,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  }
  else if (param_3 < *(uint *)(this + 0x2c)) {
    local_58 = (void *)0x0;
    local_50 = 0;
    uVar9 = *(uint *)(this + 0x28);
    if (*(uint *)(this + 0x28) <= param_3) {
      uVar9 = param_3;
    }
    basisu::elemental_vector::increase_capacity
              ((uint)&local_58,SUB41(uVar9,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    uVar9 = *(uint *)(this + 0x28);
    if (local_50._4_4_ < uVar9) {
      if (local_58 != (void *)0x0) {
        free(local_58);
        uVar9 = *(uint *)(this + 0x28);
        local_58 = (void *)0x0;
        local_50 = 0;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)&local_58,SUB41(uVar9,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    }
    else if ((int)local_50 != 0) {
      local_50 = (ulong)local_50._4_4_ << 0x20;
    }
    if (local_58 != (void *)0x0) {
      if (*(void **)(this + 0x20) == (void *)0x0) {
        *(void **)(this + 0x20) = local_58;
        *(uint *)(this + 0x2c) = local_50._4_4_;
        goto LAB_00103a6a;
      }
      memcpy(local_58,*(void **)(this + 0x20),(ulong)*(uint *)(this + 0x28) << 2);
    }
    __ptr = *(void **)(this + 0x20);
    *(void **)(this + 0x20) = local_58;
    *(uint *)(this + 0x2c) = local_50._4_4_;
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
  }
LAB_00103a6a:
  uVar9 = *(uint *)(this + 0x18);
  if (param_3 != uVar9) {
    if (param_3 < uVar9) {
      *(uint *)(this + 0x18) = param_3;
    }
    else {
      if (*(uint *)(this + 0x1c) < param_3) {
        basisu::elemental_vector::increase_capacity
                  (iVar7 + 0x10,bVar11,(uint)(uVar9 + 1 == param_3),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar9 = *(uint *)(this + 0x18);
      }
      memset((void *)(*(long *)(this + 0x10) + (ulong)uVar9 * 4),0,(ulong)(param_3 - uVar9) << 2);
      *(uint *)(this + 0x18) = param_3;
    }
  }
  if (1 < param_1) {
    prepare_hist(this,param_3,param_1,param_2);
    find_initial(this,param_3);
    uVar9 = *(uint *)(this + 0x38);
joined_r0x00103ab9:
    if (uVar9 != 0) {
      find_next_entry(this,&local_5c,(double *)&local_58,param_4,param_5,param_6);
      uVar3 = *(uint *)(*(long *)(this + 0x30) + (ulong)local_5c * 4);
      lVar2 = (ulong)local_5c * 4;
      fVar14 = (float)pick_side(this,param_3,uVar3,param_4,param_5,param_6);
      if (fVar14 <= 0.0) {
        uVar9 = *(uint *)(this + 0x28);
        if (*(uint *)(this + 0x2c) <= uVar9) {
          basisu::elemental_vector::increase_capacity
                    (uVar12,(bool)((char)uVar9 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x4,
                     false);
          uVar9 = *(uint *)(this + 0x28);
        }
        *(uint *)(*(long *)(this + 0x20) + (ulong)uVar9 * 4) = uVar3;
        *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      }
      else {
        uVar9 = *(uint *)(this + 0x28);
        uVar13 = uVar9 + 1;
        if (uVar9 != 0xffffffff) {
          __n = 4;
          uVar4 = uVar9;
          if (*(uint *)(this + 0x2c) < uVar13) {
            basisu::elemental_vector::increase_capacity
                      (uVar12,SUB41(uVar13,0),1,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar4 = *(uint *)(this + 0x28);
            __n = (ulong)(uVar13 - uVar4) << 2;
          }
          memset((void *)(*(long *)(this + 0x20) + (ulong)uVar4 * 4),0,__n);
        }
        *(uint *)(this + 0x28) = uVar13;
        memmove((void *)((long)*(void **)(this + 0x20) + 4),*(void **)(this + 0x20),
                (ulong)uVar9 << 2);
        **(uint **)(this + 0x20) = uVar3;
      }
      uVar9 = *(uint *)(this + 0x38);
      uVar13 = (int)(lVar2 >> 2) + 1;
      if (uVar13 <= uVar9) {
        memmove((void *)(*(long *)(this + 0x30) + lVar2),
                (void *)(*(long *)(this + 0x30) + 4 + lVar2),(ulong)(uVar9 - uVar13) << 2);
        uVar9 = *(int *)(this + 0x38) - 1;
        *(uint *)(this + 0x38) = uVar9;
      }
      if (uVar9 == 0) goto LAB_00103c48;
      lVar2 = *(long *)(this + 0x30);
      lVar5 = *(long *)(this + 0x10);
      lVar10 = 0;
      lVar6 = *(long *)this;
      do {
        while( true ) {
          uVar9 = *(uint *)(lVar2 + lVar10 * 4);
          if ((int)uVar3 < (int)uVar9) break;
          lVar10 = lVar10 + 1;
          piVar1 = (int *)(lVar5 + (ulong)uVar9 * 4);
          *piVar1 = *piVar1 + *(int *)(lVar6 + (long)(int)(param_3 * uVar9 + uVar3) * 4);
          uVar9 = *(uint *)(this + 0x38);
          if (uVar9 <= (uint)lVar10) goto joined_r0x00103ab9;
        }
        lVar10 = lVar10 + 1;
        piVar1 = (int *)(lVar5 + (ulong)uVar9 * 4);
        *piVar1 = *piVar1 + *(int *)(lVar6 + (long)(int)(uVar9 + uVar3 * param_3) * 4);
        uVar9 = *(uint *)(this + 0x38);
      } while ((uint)lVar10 < uVar9);
      goto joined_r0x00103ab9;
    }
LAB_00103c48:
    if (param_3 != 0) {
      lVar2 = *(long *)(this + 0x20);
      lVar5 = *(long *)(this + 0x40);
      uVar8 = 0;
      do {
        *(int *)(lVar5 + (ulong)*(uint *)(lVar2 + uVar8 * 4) * 4) = (int)uVar8;
        uVar8 = uVar8 + 1;
      } while (uVar8 != param_3);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::image_metrics::calc(basisu::imagef const&, basisu::imagef const&, unsigned int, unsigned
   int, bool, bool) */

void __thiscall
basisu::image_metrics::calc
          (image_metrics *this,imagef *param_1,imagef *param_2,uint param_3,uint param_4,
          bool param_5,bool param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  uint uVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double local_b0;
  double local_a8;
  
  local_a8 = _LC31;
  auVar20 = (undefined1  [16])0x0;
  uVar10 = *(uint *)param_1;
  if (*(uint *)param_2 <= *(uint *)param_1) {
    uVar10 = *(uint *)param_2;
  }
  uVar23 = *(uint *)(param_1 + 4);
  uVar3 = *(uint *)(param_2 + 4);
  this[0x32] = (image_metrics)0x0;
  if (uVar23 <= uVar3) {
    uVar3 = uVar23;
  }
  *(undefined2 *)(this + 0x30) = 0;
  if (uVar3 != 0) {
    uVar11 = 0;
    auVar20 = (undefined1  [16])0x0;
    local_a8 = _LC31;
    uVar23 = _LC33;
    do {
      local_b0 = auVar20._8_8_;
      if (uVar10 != 0) {
        lVar5 = *(long *)(param_2 + 0x10);
        iVar4 = *(int *)(param_2 + 8);
        uVar9 = *(int *)(param_1 + 8) * uVar11;
        lVar6 = *(long *)(param_1 + 0x10);
        uVar14 = uVar9;
        do {
          pfVar1 = (float *)(lVar6 + (ulong)uVar14 * 0x10);
          pfVar2 = (float *)(lVar5 + (ulong)((iVar4 * uVar11 - uVar9) + uVar14) * 0x10);
          if (param_4 == 0) {
            lVar12 = 0;
            do {
              fVar21 = *(float *)((long)pfVar1 + lVar12);
              fVar17 = *(float *)((long)pfVar2 + lVar12);
              fVar16 = (float)((uint)fVar21 & uVar23);
              if (__LC34 < fVar16) {
                this[0x31] = (image_metrics)0x1;
                fVar15 = __LC35;
                if (0.0 <= fVar21) {
                  if (fVar17 < 0.0) {
                    this[0x30] = (image_metrics)0x1;
                    if ((fVar16 <= fVar15) && ((float)((uint)fVar17 & uVar23) <= __LC35))
                    goto LAB_00104476;
                  }
                  else if ((fVar16 <= __LC35) &&
                          (fVar21 = fVar17, (float)((uint)fVar17 & uVar23) <= __LC35))
                  goto joined_r0x0010460b;
                }
                else {
                  this[0x30] = (image_metrics)0x1;
                  if ((fVar16 <= fVar15) &&
                     (fVar21 = fVar17, (float)((uint)fVar17 & uVar23) <= __LC35)) {
joined_r0x0010460b:
                    if (!NAN(fVar21)) goto LAB_00104476;
                  }
                }
LAB_00104470:
                this[0x32] = (image_metrics)0x1;
              }
              else {
                fVar16 = (float)((uint)fVar17 & uVar23);
                if (__LC34 < fVar16) {
                  this[0x31] = (image_metrics)0x1;
                  fVar15 = __LC35;
                  if (0.0 <= fVar21) {
                    if (fVar17 < 0.0) {
                      this[0x30] = (image_metrics)0x1;
                    }
                    if (fVar16 <= fVar15) goto joined_r0x0010460b;
                  }
                  else {
                    this[0x30] = (image_metrics)0x1;
                    if (fVar16 <= fVar15) goto LAB_00104476;
                  }
                  goto LAB_00104470;
                }
                if (fVar21 < 0.0) {
                  this[0x30] = (image_metrics)0x1;
                  fVar21 = fVar17;
                }
                else {
                  if (0.0 <= fVar17) {
                    bVar7 = NAN(fVar21);
                    fVar21 = fVar17;
                    if (!bVar7) goto joined_r0x0010460b;
                    goto LAB_00104470;
                  }
                  this[0x30] = (image_metrics)0x1;
                }
                if (NAN(fVar21)) goto LAB_00104470;
              }
LAB_00104476:
              dVar18 = _LC30;
              lVar12 = lVar12 + 4;
            } while (lVar12 != 0xc);
            fVar17 = _LC37 * *pfVar1 + pfVar1[1] * _LC38 + pfVar1[2] * _LC39;
            dVar19 = (double)fVar17;
            fVar21 = _LC37 * *pfVar2 + _LC38 * pfVar2[1] + _LC39 * pfVar2[2];
            dVar27 = (double)fVar21;
            dVar25 = dVar19 - dVar27;
            dVar26 = (double)((ulong)dVar25 & __LC36);
            if (local_a8 <= dVar26) {
              local_a8 = dVar26;
            }
            if (param_6) {
              dVar25 = _LC30;
              if (0.0 <= fVar17) {
                dVar25 = dVar19 + _LC30;
              }
              dVar19 = log2(dVar25);
              if (0.0 <= fVar21) {
                dVar18 = dVar18 + dVar27;
              }
              dVar18 = log2(dVar18);
              dVar19 = dVar19 - dVar18;
              local_b0 = dVar19 * dVar19 + local_b0;
              auVar20._0_8_ = auVar20._0_8_ + (double)((ulong)dVar19 & __LC36);
              auVar20._8_8_ = 0;
              uVar23 = _LC33;
            }
            else {
              auVar20._0_8_ = auVar20._0_8_ + dVar26;
              local_b0 = dVar25 * dVar25 + local_b0;
            }
          }
          else {
            uVar13 = param_3;
            do {
              fVar17 = pfVar1[uVar13];
              fVar21 = pfVar2[uVar13];
              fVar15 = (float)((uint)fVar17 & uVar23);
              fVar16 = fVar21;
              if (__LC34 < fVar15) {
                this[0x31] = (image_metrics)0x1;
                fVar8 = __LC35;
                if (fVar17 < 0.0) {
                  this[0x30] = (image_metrics)0x1;
                }
                else if (fVar21 < 0.0) {
                  this[0x30] = (image_metrics)0x1;
                  if ((fVar15 <= fVar8) && ((float)((uint)fVar21 & uVar23) <= __LC35))
                  goto joined_r0x001047cc;
                  goto LAB_00104108;
                }
                if ((fVar8 < fVar15) || (__LC35 < (float)((uint)fVar21 & uVar23)))
                goto LAB_00104108;
joined_r0x001043ab:
                if (NAN(fVar16)) {
LAB_00104108:
                  this[0x32] = (image_metrics)0x1;
                }
                dVar18 = (double)(float)((uint)(fVar17 - fVar21) & uVar23);
                if (local_a8 <= dVar18) {
                  local_a8 = dVar18;
                }
                if (!param_6) goto LAB_00104348;
                fVar16 = _LC1;
                if (0.0 <= fVar17) {
LAB_00104142:
                  fVar16 = fVar17 + _LC1;
                }
LAB_00104151:
                fVar17 = _LC1;
                fVar16 = log2f(fVar16);
                if (0.0 <= fVar21) {
                  fVar17 = fVar17 + fVar21;
                }
                fVar17 = log2f(fVar17);
                dVar19 = (double)(fVar16 - fVar17);
                dVar18 = dVar19 * dVar19;
                auVar20._0_8_ = auVar20._0_8_ + (double)((ulong)dVar19 & __LC36);
                auVar20._8_8_ = 0;
                uVar23 = _LC33;
              }
              else {
                fVar15 = (float)((uint)fVar21 & uVar23);
                if (fVar15 <= __LC34) {
                  if (0.0 <= fVar17) {
                    if (fVar21 < 0.0) {
                      this[0x30] = (image_metrics)0x1;
                      if (!NAN(fVar17)) goto joined_r0x001047cc;
                    }
                    else if (!NAN(fVar17)) goto joined_r0x001043ab;
                    goto LAB_00104108;
                  }
                  this[0x30] = (image_metrics)0x1;
                  goto joined_r0x001043ab;
                }
                this[0x31] = (image_metrics)0x1;
                fVar16 = __LC35;
                if (0.0 <= fVar17) {
                  if (0.0 <= fVar21) {
                    fVar16 = fVar17;
                    if (fVar15 <= __LC35) goto joined_r0x001043ab;
                    goto LAB_00104108;
                  }
                  this[0x30] = (image_metrics)0x1;
                  if ((fVar16 < fVar15) || (NAN(fVar17))) goto LAB_00104108;
joined_r0x001047cc:
                  dVar18 = (double)(fVar17 - fVar21);
                  if (local_a8 <= dVar18) {
                    local_a8 = dVar18;
                  }
                  if (!param_6) goto LAB_00104348;
                  goto LAB_00104142;
                }
                this[0x30] = (image_metrics)0x1;
                if (fVar16 < fVar15) goto LAB_00104108;
                dVar18 = (double)(float)((uint)(fVar17 - fVar21) & uVar23);
                if (local_a8 <= dVar18) {
                  local_a8 = dVar18;
                }
                fVar16 = _LC1;
                if (param_6) goto LAB_00104151;
LAB_00104348:
                auVar20._0_8_ = auVar20._0_8_ + dVar18;
                dVar18 = dVar18 * dVar18;
              }
              local_b0 = dVar18 + local_b0;
              uVar13 = uVar13 + 1;
            } while (param_4 + param_3 != uVar13);
          }
          uVar14 = uVar14 + 1;
        } while (uVar10 + uVar9 != uVar14);
        uVar24 = auVar20._0_8_;
        auVar20._8_8_ = local_b0;
        auVar20._0_8_ = (double)uVar24;
      }
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
  }
  *(double *)this = local_a8;
  dVar18 = (double)uVar10 * (double)uVar3;
  if (param_5) {
    uVar10 = 4;
    if (param_4 < 5) {
      uVar10 = param_4;
    }
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    dVar18 = dVar18 * (double)(int)uVar10;
  }
  auVar22._8_8_ = dVar18;
  auVar22._0_8_ = dVar18;
  auVar20 = divpd(auVar20,auVar22);
  dVar18 = auVar20._8_8_;
  *(double *)(this + 8) = (double)(float)auVar20._0_8_;
  *(double *)(this + 0x10) = (double)(float)dVar18;
  if (dVar18 < 0.0) {
    dVar18 = sqrt(dVar18);
  }
  else {
    dVar18 = SQRT(dVar18);
  }
  dVar25 = (double)(float)dVar18;
  *(double *)(this + 0x18) = dVar25;
  dVar19 = _LC32;
  if ((float)dVar18 != 0.0) {
    dVar18 = log10(_LC30 / dVar25);
    dVar18 = dVar18 * _LC40;
    dVar19 = 0.0;
    if ((0.0 <= dVar18) && (dVar19 = _LC32, dVar18 <= _LC32)) {
      dVar19 = (double)(float)dVar18;
    }
  }
  *(double *)(this + 0x20) = dVar19;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::image_metrics::calc_half(basisu::imagef const&, basisu::imagef const&, unsigned int,
   unsigned int, bool) */

void __thiscall
basisu::image_metrics::calc_half
          (image_metrics *this,imagef *param_1,imagef *param_2,uint param_3,uint param_4,
          bool param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  void *__ptr;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  uint uVar19;
  void *local_78;
  ulong local_70;
  uint local_68 [4];
  uint local_58 [6];
  long local_40;
  
  uVar4 = *(uint *)(param_2 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (void *)0x0;
  local_70 = 0;
  uVar7 = *(uint *)param_1;
  if (*(uint *)param_2 <= *(uint *)param_1) {
    uVar7 = *(uint *)param_2;
  }
  uVar19 = *(uint *)(param_1 + 4);
  this[0x32] = (image_metrics)0x0;
  if (uVar19 < uVar4) {
    uVar4 = uVar19;
  }
  *(undefined2 *)(this + 0x30) = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_78,false,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  memset((void *)((long)local_78 + (local_70 & 0xffffffff) * 4),0,
         (ulong)(0x10000 - (int)local_70) << 2);
  local_70 = CONCAT44(local_70._4_4_,0x10000);
  if ((uVar4 != 0) && (uVar7 != 0)) {
    uVar13 = 0;
    uVar19 = _LC33;
    do {
      uVar14 = 0;
      do {
        pfVar9 = (float *)((ulong)(*(int *)(param_1 + 8) * uVar13 + uVar14) * 0x10 +
                          *(long *)(param_1 + 0x10));
        lVar8 = 0;
        pfVar11 = (float *)(*(long *)(param_2 + 0x10) +
                           (ulong)(*(int *)(param_2 + 8) * uVar13 + uVar14) * 0x10);
        do {
          fVar2 = *(float *)((long)pfVar9 + lVar8);
          fVar3 = *(float *)((long)pfVar11 + lVar8);
          if (fVar2 < 0.0) {
            this[0x30] = (image_metrics)0x1;
            if (__LC34 < (float)((uint)fVar2 & uVar19)) goto LAB_00104cc0;
            if (__LC34 < (float)((uint)fVar3 & uVar19)) {
              this[0x31] = (image_metrics)0x1;
              goto LAB_00104ce8;
            }
LAB_00104d30:
            if (NAN(fVar3)) goto LAB_00104a20;
          }
          else {
            if (fVar3 < 0.0) {
              this[0x30] = (image_metrics)0x1;
            }
            if (__LC34 < (float)((uint)fVar2 & uVar19)) {
LAB_00104cc0:
              this[0x31] = (image_metrics)0x1;
              if ((!NAN(fVar3)) && ((float)((uint)fVar2 & uVar19) <= __LC35)) {
LAB_00104ce8:
                if ((float)((uint)fVar3 & uVar19) <= __LC35) goto LAB_00104a25;
              }
            }
            else if (__LC34 < (float)((uint)fVar3 & uVar19)) {
              this[0x31] = (image_metrics)0x1;
              if (!NAN(fVar2)) goto LAB_00104ce8;
            }
            else if (!NAN(fVar2)) goto LAB_00104d30;
LAB_00104a20:
            this[0x32] = (image_metrics)0x1;
          }
LAB_00104a25:
          lVar8 = lVar8 + 4;
        } while (lVar8 != 0x10);
        uVar6 = basist::float_to_half(*pfVar9);
        local_68[0] = (uint)uVar6;
        uVar6 = basist::float_to_half(pfVar9[1]);
        local_68[1] = (uint)uVar6;
        uVar6 = basist::float_to_half(pfVar9[2]);
        local_68[2] = (uint)uVar6;
        uVar6 = basist::float_to_half(pfVar9[3]);
        local_68[3] = (uint)uVar6;
        uVar6 = basist::float_to_half(*pfVar11);
        local_58[0] = (uint)uVar6;
        uVar6 = basist::float_to_half(pfVar11[1]);
        local_58[1] = (uint)uVar6;
        uVar6 = basist::float_to_half(pfVar11[2]);
        local_58[2] = (uint)uVar6;
        uVar6 = basist::float_to_half(pfVar11[3]);
        uVar19 = _LC33;
        local_58[3] = (uint)uVar6;
        if (param_4 != 0) {
          uVar10 = param_3;
          do {
            iVar12 = local_68[uVar10] - local_58[uVar10];
            iVar5 = -iVar12;
            if (0 < iVar12) {
              iVar5 = iVar12;
            }
            uVar10 = uVar10 + 1;
            piVar1 = (int *)((long)local_78 + (ulong)(ushort)iVar5 * 4);
            *piVar1 = *piVar1 + 1;
          } while (param_4 + param_3 != uVar10);
        }
        uVar14 = uVar14 + 1;
      } while (uVar7 != uVar14);
      uVar13 = uVar13 + 1;
    } while (uVar4 != uVar13);
  }
  __ptr = local_78;
  *(undefined8 *)this = 0;
  dVar17 = 0.0;
  lVar8 = 0;
  dVar18 = 0.0;
  do {
    uVar19 = *(uint *)((long)local_78 + lVar8 * 4);
    if (uVar19 != 0) {
      dVar15 = (double)(int)lVar8;
      dVar16 = *(double *)this;
      if (*(double *)this <= dVar15) {
        dVar16 = dVar15;
      }
      *(double *)this = dVar16;
      dVar16 = (double)uVar19 * dVar15;
      dVar18 = dVar18 + dVar16;
      dVar17 = dVar17 + dVar15 * dVar16;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x10000);
  dVar16 = (double)uVar7 * (double)uVar4;
  if (param_5) {
    if (4 < param_4) {
      param_4 = 4;
    }
    if (param_4 == 0) {
      param_4 = 1;
    }
    dVar16 = dVar16 * (double)(int)param_4;
  }
  dVar18 = dVar18 / dVar16;
  dVar15 = 0.0;
  if ((0.0 <= dVar18) && (dVar15 = _LC41, dVar18 <= _LC41)) {
    dVar15 = (double)(float)dVar18;
  }
  dVar17 = dVar17 / dVar16;
  *(double *)(this + 8) = dVar15;
  dVar18 = _LC41;
  if (dVar17 < 0.0) {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    dVar17 = _LC32;
    goto LAB_00104c8a;
  }
  if (_LC42 < dVar17) {
    *(double *)(this + 0x10) = _LC42;
    dVar16 = 0.0;
    *(double *)(this + 0x18) = dVar18;
  }
  else {
    dVar18 = (double)(float)dVar17;
    *(double *)(this + 0x10) = dVar18;
    if (dVar18 < 0.0) {
      dVar18 = sqrt(dVar18);
    }
    else {
      dVar18 = SQRT(dVar18);
    }
    dVar16 = (double)(float)dVar18;
    *(double *)(this + 0x18) = dVar16;
    dVar17 = _LC32;
    if ((float)dVar18 == 0.0) goto LAB_00104c8a;
    dVar16 = log10(_LC41 / dVar16);
    dVar16 = _LC40 * dVar16;
    dVar17 = 0.0;
    if ((dVar16 < 0.0) || (dVar17 = _LC32, _LC32 < dVar16)) goto LAB_00104c8a;
  }
  dVar17 = (double)(float)dVar16;
LAB_00104c8a:
  *(double *)(this + 0x20) = dVar17;
  free(__ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::image_metrics::calc_half2(basisu::imagef const&, basisu::imagef const&, unsigned int,
   unsigned int, bool) */

void __thiscall
basisu::image_metrics::calc_half2
          (image_metrics *this,imagef *param_1,imagef *param_2,uint param_3,uint param_4,
          bool param_5)

{
  float fVar1;
  double dVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  double dVar14;
  float fVar15;
  double dVar16;
  uint uVar17;
  double dVar18;
  uint local_68 [4];
  uint local_58 [6];
  long local_40;
  
  uVar17 = _LC33;
  dVar16 = 0.0;
  dVar18 = 0.0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *(uint *)(param_2 + 4);
  uVar4 = *(uint *)param_1;
  if (*(uint *)param_2 <= *(uint *)param_1) {
    uVar4 = *(uint *)param_2;
  }
  uVar13 = *(uint *)(param_1 + 4);
  this[0x32] = (image_metrics)0x0;
  *(undefined8 *)this = 0;
  if (uVar13 < uVar6) {
    uVar6 = uVar13;
  }
  *(undefined2 *)(this + 0x30) = 0;
  if (uVar6 == 0) {
    dVar14 = (double)uVar4 * 0.0;
    if (param_5) goto LAB_00105138;
    fVar15 = (float)(0.0 / dVar14);
    *(double *)(this + 8) = (double)fVar15;
LAB_00105217:
    dVar16 = (double)fVar15;
    *(double *)(this + 0x10) = dVar16;
    if (dVar16 < 0.0) {
      dVar16 = sqrt(dVar16);
    }
    else {
      dVar16 = SQRT(dVar16);
    }
    dVar14 = (double)(float)dVar16;
    *(double *)(this + 0x18) = dVar14;
    dVar18 = _LC32;
    if ((float)dVar16 == 0.0) goto LAB_001050f6;
    dVar16 = log10(_LC41 / dVar14);
    dVar16 = _LC40 * dVar16;
    dVar18 = 0.0;
    if ((dVar16 < 0.0) || (dVar18 = _LC32, _LC32 < dVar16)) goto LAB_001050f6;
  }
  else {
    uVar13 = 0;
    do {
      uVar12 = 0;
      if (uVar4 != 0) {
        do {
          pfVar9 = (float *)((ulong)(*(int *)(param_1 + 8) * uVar13 + uVar12) * 0x10 +
                            *(long *)(param_1 + 0x10));
          lVar7 = 0;
          pfVar11 = (float *)((ulong)(*(int *)(param_2 + 8) * uVar13 + uVar12) * 0x10 +
                             *(long *)(param_2 + 0x10));
          do {
            fVar15 = *(float *)((long)pfVar9 + lVar7);
            fVar1 = *(float *)((long)pfVar11 + lVar7);
            if (fVar15 < 0.0) {
              this[0x30] = (image_metrics)0x1;
              if (__LC34 < (float)((uint)fVar15 & uVar17)) goto LAB_00105160;
              if (__LC34 < (float)((uint)fVar1 & uVar17)) {
                this[0x31] = (image_metrics)0x1;
                goto LAB_00105188;
              }
LAB_001051d0:
              if (NAN(fVar1)) goto LAB_00104f28;
            }
            else {
              if (fVar1 < 0.0) {
                this[0x30] = (image_metrics)0x1;
              }
              if (__LC34 < (float)((uint)fVar15 & uVar17)) {
LAB_00105160:
                this[0x31] = (image_metrics)0x1;
                if ((!NAN(fVar1)) && ((float)((uint)fVar15 & uVar17) <= __LC35)) {
LAB_00105188:
                  if ((float)((uint)fVar1 & uVar17) <= __LC35) goto LAB_00104f2d;
                }
              }
              else if (__LC34 < (float)((uint)fVar1 & uVar17)) {
                this[0x31] = (image_metrics)0x1;
                if (!NAN(fVar15)) goto LAB_00105188;
              }
              else if (!NAN(fVar15)) goto LAB_001051d0;
LAB_00104f28:
              this[0x32] = (image_metrics)0x1;
            }
LAB_00104f2d:
            lVar7 = lVar7 + 4;
          } while (lVar7 != 0x10);
          uVar3 = basist::float_to_half(*pfVar9);
          local_68[0] = (uint)uVar3;
          uVar3 = basist::float_to_half(pfVar9[1]);
          local_68[1] = (uint)uVar3;
          uVar3 = basist::float_to_half(pfVar9[2]);
          local_68[2] = (uint)uVar3;
          uVar3 = basist::float_to_half(pfVar9[3]);
          local_68[3] = (uint)uVar3;
          uVar3 = basist::float_to_half(*pfVar11);
          local_58[0] = (uint)uVar3;
          uVar3 = basist::float_to_half(pfVar11[1]);
          local_58[1] = (uint)uVar3;
          uVar3 = basist::float_to_half(pfVar11[2]);
          local_58[2] = (uint)uVar3;
          uVar3 = basist::float_to_half(pfVar11[3]);
          uVar17 = _LC33;
          local_58[3] = (uint)uVar3;
          if (param_4 != 0) {
            uVar10 = param_3;
            do {
              iVar5 = local_68[uVar10] - local_58[uVar10];
              iVar8 = -iVar5;
              if (0 < iVar5) {
                iVar8 = iVar5;
              }
              dVar14 = (double)iVar8;
              if (local_68[uVar10] != local_58[uVar10]) {
                dVar2 = dVar14;
                if (dVar14 <= *(double *)this) {
                  dVar2 = *(double *)this;
                }
                *(double *)this = dVar2;
              }
              dVar18 = dVar18 + dVar14;
              uVar10 = uVar10 + 1;
              dVar16 = dVar16 + (double)(iVar5 * iVar5);
            } while (param_4 + param_3 != uVar10);
          }
          uVar12 = uVar12 + 1;
        } while (uVar4 != uVar12);
      }
      uVar13 = uVar13 + 1;
    } while (uVar6 != uVar13);
    dVar14 = (double)uVar4 * (double)uVar6;
    if (param_5) {
LAB_00105138:
      uVar6 = 4;
      if (param_4 < 5) {
        uVar6 = param_4;
      }
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      dVar14 = dVar14 * (double)(int)uVar6;
    }
    dVar18 = dVar18 / dVar14;
    dVar16 = dVar16 / dVar14;
    dVar14 = 0.0;
    if ((0.0 <= dVar18) && (dVar14 = _LC41, dVar18 <= _LC41)) {
      dVar14 = (double)(float)dVar18;
    }
    *(double *)(this + 8) = dVar14;
    dVar18 = _LC41;
    if (dVar16 < 0.0) {
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      dVar18 = _LC32;
      goto LAB_001050f6;
    }
    if (dVar16 <= _LC42) {
      fVar15 = (float)dVar16;
      goto LAB_00105217;
    }
    *(double *)(this + 0x10) = _LC42;
    dVar16 = 0.0;
    *(double *)(this + 0x18) = dVar18;
  }
  dVar18 = (double)(float)dVar16;
LAB_001050f6:
  *(double *)(this + 0x20) = dVar18;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::image_metrics::calc(basisu::image const&, basisu::image const&, unsigned int, unsigned
   int, bool, bool) */

void __thiscall
basisu::image_metrics::calc
          (image_metrics *this,image *param_1,image *param_2,uint param_3,uint param_4,bool param_5,
          bool param_6)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  double *pdVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double local_848 [257];
  long local_40;
  
  lVar9 = 0x100;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *(uint *)param_2;
  if (*(uint *)param_1 <= *(uint *)param_2) {
    uVar6 = *(uint *)param_1;
  }
  uVar16 = *(uint *)(param_2 + 4);
  uVar4 = *(uint *)(param_1 + 4);
  this[0x32] = (image_metrics)0x0;
  if (uVar16 <= uVar4) {
    uVar4 = uVar16;
  }
  pdVar13 = local_848;
  for (; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar13 = 0.0;
    pdVar13 = pdVar13 + 1;
  }
  *(undefined2 *)(this + 0x30) = 0;
  if (uVar4 != 0) {
    uVar16 = 0;
    if (uVar6 == 0) {
      do {
        uVar16 = uVar16 + 1;
      } while (uVar4 != uVar16);
    }
    else {
      lVar9 = *(long *)(param_2 + 0x10);
      lVar5 = *(long *)(param_1 + 0x10);
      do {
        uVar7 = *(int *)(param_1 + 8) * uVar16;
        uVar1 = uVar6 + uVar7;
        iVar11 = *(int *)(param_2 + 8) * uVar16 - uVar7;
        do {
          while( true ) {
            pbVar2 = (byte *)(lVar5 + (ulong)uVar7 * 4);
            pbVar3 = (byte *)(lVar9 + (ulong)(iVar11 + uVar7) * 4);
            uVar15 = param_3;
            if (param_4 != 0) break;
            if (param_6) {
              iVar8 = (uint)pbVar3[2] * 0x1d2f;
              uVar15 = (uint)*pbVar2 * 0x4c8b + 0x8000 + (uint)pbVar2[1] * 0x9646 +
                       (uint)pbVar2[2] * 0x1d2f;
              iVar10 = (uint)*pbVar3 * 0x4c8b + 0x8000 + (uint)pbVar3[1] * 0x9646;
            }
            else {
              uVar15 = (uint)*pbVar2 * 0x3672 + 0x8000 + (uint)pbVar2[1] * 0xb715 +
                       (uint)pbVar2[2] * 0x1279;
              iVar8 = (uint)pbVar3[2] * 0x1279;
              iVar10 = (uint)*pbVar3 * 0x3672 + 0x8000 + (uint)pbVar3[1] * 0xb715;
            }
            uVar14 = (uVar15 >> 0x10) - ((uint)(iVar10 + iVar8) >> 0x10);
            uVar15 = -uVar14;
            if (0 < (int)uVar14) {
              uVar15 = uVar14;
            }
            uVar7 = uVar7 + 1;
            local_848[uVar15] = local_848[uVar15] + _LC30;
            if (uVar7 == uVar1) goto LAB_00105520;
          }
          do {
            uVar12 = (uint)pbVar2[uVar15] - (uint)pbVar3[uVar15];
            uVar14 = -uVar12;
            if (0 < (int)uVar12) {
              uVar14 = uVar12;
            }
            uVar15 = uVar15 + 1;
            local_848[uVar14] = local_848[uVar14] + _LC30;
          } while (uVar15 != param_4 + param_3);
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar1);
LAB_00105520:
        uVar16 = uVar16 + 1;
      } while (uVar4 != uVar16);
    }
  }
  *(undefined8 *)this = 0;
  dVar20 = 0.0;
  lVar9 = 0;
  dVar21 = 0.0;
  do {
    dVar18 = local_848[lVar9];
    if (dVar18 != 0.0) {
      dVar17 = (double)(int)lVar9;
      dVar18 = dVar18 * dVar17;
      dVar19 = *(double *)this;
      if (*(double *)this <= dVar17) {
        dVar19 = dVar17;
      }
      *(double *)this = dVar19;
      dVar21 = dVar21 + dVar18;
      dVar20 = dVar20 + dVar17 * dVar18;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x100);
  dVar18 = (double)uVar6 * (double)uVar4;
  if (param_5) {
    if (4 < param_4) {
      param_4 = 4;
    }
    if (param_4 == 0) {
      param_4 = 1;
    }
    dVar18 = dVar18 * (double)(int)param_4;
  }
  dVar21 = dVar21 / dVar18;
  dVar19 = 0.0;
  if ((0.0 <= dVar21) && (dVar19 = _LC43, dVar21 <= _LC43)) {
    dVar19 = (double)(float)dVar21;
  }
  dVar20 = dVar20 / dVar18;
  *(double *)(this + 8) = dVar19;
  dVar21 = _LC43;
  if (dVar20 < 0.0) {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    dVar21 = _LC44;
    goto LAB_0010568f;
  }
  if (_LC45 < dVar20) {
    *(double *)(this + 0x10) = _LC45;
    dVar20 = 0.0;
    *(double *)(this + 0x18) = dVar21;
  }
  else {
    dVar20 = (double)(float)dVar20;
    *(double *)(this + 0x10) = dVar20;
    if (dVar20 < 0.0) {
      dVar20 = sqrt(dVar20);
    }
    else {
      dVar20 = SQRT(dVar20);
    }
    dVar18 = (double)(float)dVar20;
    *(double *)(this + 0x18) = dVar18;
    dVar21 = _LC44;
    if ((float)dVar20 == 0.0) goto LAB_0010568f;
    dVar20 = log10(_LC43 / dVar18);
    dVar20 = dVar20 * _LC40;
    dVar21 = 0.0;
    if ((dVar20 < 0.0) || (dVar21 = _LC44, _LC44 < dVar20)) goto LAB_0010568f;
  }
  dVar21 = (double)(float)dVar20;
LAB_0010568f:
  *(double *)(this + 0x20) = dVar21;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::hash_hsieh(unsigned char const*, unsigned long) */

int basisu::hash_hsieh(uchar *param_1,ulong param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulong uVar5;
  uint uVar6;
  
  if ((param_1 != (uchar *)0x0) && (param_2 != 0)) {
    uVar2 = (uint)param_2;
    uVar5 = param_2 & 0xffffffff;
    uVar6 = uVar2 & 3;
    if (param_2 >> 2 != 0) {
      puVar1 = (ushort *)(param_1 + (param_2 >> 2) * 4);
      puVar3 = (ushort *)param_1;
      do {
        puVar4 = puVar3 + 2;
        uVar2 = (uint)*puVar3 + (int)uVar5;
        uVar2 = uVar2 * 0x10000 ^ (uint)puVar3[1] << 0xb ^ uVar2;
        uVar2 = (uVar2 >> 0xb) + uVar2;
        uVar5 = (ulong)uVar2;
        puVar3 = puVar4;
        param_1 = (uchar *)puVar1;
      } while (puVar4 != puVar1);
    }
    if (uVar6 == 2) {
      uVar2 = (uVar2 + *(ushort *)param_1) * 0x800 ^ uVar2 + *(ushort *)param_1;
      uVar2 = (uVar2 >> 0x11) + uVar2;
    }
    else if (uVar6 == 3) {
      uVar2 = (int)(char)*(ushort *)((long)param_1 + 2) << 0x12 ^
              (uVar2 + *(ushort *)param_1) * 0x10000 ^ uVar2 + *(ushort *)param_1;
      uVar2 = (uVar2 >> 0xb) + uVar2;
    }
    else if (uVar6 == 1) {
      uVar2 = uVar2 + (int)(char)*(ushort *)param_1;
      uVar2 = uVar2 * 0x400 ^ uVar2;
      uVar2 = (uVar2 >> 1) + uVar2;
    }
    uVar2 = uVar2 ^ uVar2 * 8;
    uVar2 = (uVar2 >> 5) + uVar2;
    uVar2 = uVar2 * 0x10 ^ uVar2;
    uVar2 = (uVar2 >> 0x11) + uVar2;
    uVar2 = uVar2 * 0x2000000 ^ uVar2;
    return (uVar2 >> 6) + uVar2;
  }
  return 0;
}



/* basisu::job_pool::~job_pool() */

void __thiscall basisu::job_pool::~job_pool(job_pool *this)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  
  basisu::debug_printf("job_pool::~job_pool\n");
  LOCK();
  this[0xbc] = (job_pool)0x1;
  UNLOCK();
  uVar4 = 0;
  std::condition_variable::notify_all();
  if (*(long *)(this + 8) != *(long *)this) {
    do {
      std::thread::join();
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(*(long *)(this + 8) - *(long *)this >> 3));
  }
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x88));
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x58));
  pvVar1 = *(void **)(this + 0x20);
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar1 != pvVar5) {
    do {
      if (*(code **)((long)pvVar5 + 0x10) != (code *)0x0) {
        (**(code **)((long)pvVar5 + 0x10))(pvVar5,pvVar5,3);
      }
      pvVar5 = (void *)((long)pvVar5 + 0x20);
    } while (pvVar1 != pvVar5);
    pvVar5 = *(void **)(this + 0x18);
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5,*(long *)(this + 0x28) - (long)pvVar5);
  }
  plVar2 = *(long **)this;
  for (plVar3 = plVar2; *(long **)(this + 8) != plVar3; plVar3 = plVar3 + 1) {
    if (*plVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
  }
  if (plVar2 != (long *)0x0) {
    operator_delete(plVar2,*(long *)(this + 0x10) - (long)plVar2);
    return;
  }
  return;
}



/* basisu::job_pool::wait_for_all() */

void __thiscall basisu::job_pool::wait_for_all(job_pool *this)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  pthread_mutex_t *__mutex;
  long in_FS_OFFSET;
  bool local_50;
  undefined1 local_48 [16];
  code *local_38;
  code *pcStack_30;
  long local_20;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 != 0) {
LAB_00105b39:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  lVar3 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x18) == lVar3) {
    iVar2 = *(int *)(this + 0xb8);
  }
  else {
    do {
      local_38 = (code *)0x0;
      pcStack_30 = (code *)0x0;
      local_48 = (undefined1  [16])0x0;
      if (*(code **)(lVar3 + -0x10) != (code *)0x0) {
        (**(code **)(lVar3 + -0x10))(local_48,lVar3 + -0x20,2);
        local_38 = *(code **)(lVar3 + -0x10);
        pcStack_30 = *(code **)(lVar3 + -8);
      }
      lVar3 = *(long *)(this + 0x20) + -0x20;
      pcVar1 = *(code **)(*(long *)(this + 0x20) + -0x10);
      *(long *)(this + 0x20) = lVar3;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(lVar3,lVar3,3);
      }
      if (__mutex != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(__mutex);
      }
      local_50 = __mutex == (pthread_mutex_t *)0x0;
      if (local_38 == (code *)0x0) {
        iVar2 = std::__throw_bad_function_call();
        goto LAB_00105b39;
      }
      (*pcStack_30)(local_48);
      if (__mutex == (pthread_mutex_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(1);
      }
      if (local_50) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(0x23);
      }
      iVar2 = pthread_mutex_lock(__mutex);
      if (iVar2 != 0) goto LAB_00105b39;
      if (local_38 != (code *)0x0) {
        (*local_38)(local_48,local_48,3);
      }
      lVar3 = *(long *)(this + 0x20);
    } while (lVar3 != *(long *)(this + 0x18));
    iVar2 = *(int *)(this + 0xb8);
  }
  if (iVar2 != 0) {
    do {
      std::condition_variable::wait((unique_lock *)(this + 0x88));
    } while (*(int *)(this + 0xb8) != 0);
  }
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(__mutex);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::job_pool::job_thread(unsigned int) */

void basisu::job_pool::job_thread(uint param_1)

{
  pthread_mutex_t *__mutex;
  code *pcVar1;
  int iVar2;
  undefined4 in_register_0000003c;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool local_60;
  undefined1 local_58 [16];
  code *local_48;
  code *pcStack_40;
  long local_30;
  
  lVar3 = CONCAT44(in_register_0000003c,param_1);
  __mutex = (pthread_mutex_t *)(lVar3 + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  while (iVar2 = pthread_mutex_lock(__mutex), iVar2 == 0) {
    while ((*(char *)(lVar3 + 0xbc) == '\0' && (*(long *)(lVar3 + 0x20) == *(long *)(lVar3 + 0x18)))
          ) {
      std::condition_variable::wait((unique_lock *)(lVar3 + 0x58));
    }
    if (*(char *)(lVar3 + 0xbc) != '\0') {
      if (__mutex != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(__mutex);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_00105d9a:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar4 = *(long *)(lVar3 + 0x20);
    local_48 = (code *)0x0;
    pcStack_40 = (code *)0x0;
    local_58 = (undefined1  [16])0x0;
    if (*(code **)(lVar4 + -0x10) == (code *)0x0) {
      *(long *)(lVar3 + 0x20) = lVar4 + -0x20;
    }
    else {
      (**(code **)(lVar4 + -0x10))(local_58,lVar4 + -0x20,2);
      local_48 = *(code **)(lVar4 + -0x10);
      pcStack_40 = *(code **)(lVar4 + -8);
      pcVar1 = *(code **)(*(long *)(lVar3 + 0x20) + -0x10);
      lVar4 = *(long *)(lVar3 + 0x20) + -0x20;
      *(long *)(lVar3 + 0x20) = lVar4;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(lVar4,lVar4,3);
      }
    }
    *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
    if (__mutex != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(__mutex);
    }
    local_60 = __mutex == (pthread_mutex_t *)0x0;
    if (local_48 == (code *)0x0) {
      std::__throw_bad_function_call();
      goto LAB_00105d9a;
    }
    (*pcStack_40)(local_58);
    if (__mutex == (pthread_mutex_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(1);
    }
    if (local_60) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
    iVar2 = pthread_mutex_lock(__mutex);
    if (iVar2 != 0) break;
    local_60 = true;
    iVar2 = *(int *)(lVar3 + 0xb8) + -1;
    *(int *)(lVar3 + 0xb8) = iVar2;
    if ((*(long *)(lVar3 + 0x20) == *(long *)(lVar3 + 0x18)) && (iVar2 == 0)) {
      if (__mutex != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(__mutex);
      }
      local_60 = __mutex == (pthread_mutex_t *)0x0;
      std::condition_variable::notify_all();
    }
    else if (__mutex != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(__mutex);
      local_60 = false;
    }
    if (local_48 != (code *)0x0) {
      (*local_48)(local_58,local_58,3);
    }
    if ((local_60) && (__mutex != (pthread_mutex_t *)0x0)) {
      pthread_mutex_unlock(__mutex);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<basisu::job_pool::job_pool(unsigned
   int)::{lambda()#1}> > >::_M_run() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<basisu::job_pool::job_pool(unsigned_int)::{lambda()#1}>>>
::_M_run(_State_impl<std::thread::_Invoker<std::tuple<basisu::job_pool::job_pool(unsigned_int)::_lambda()_1_>>>
         *this)

{
  basisu::job_pool::job_thread((uint)*(undefined8 *)(this + 8));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::read_tga(unsigned char const*, unsigned int, int&, int&, int&) */

void * basisu::read_tga(uchar *param_1,uint param_2,int *param_3,int *param_4,int *param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  void *__ptr;
  ulong uVar10;
  void *pvVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  int iVar20;
  undefined4 *puVar21;
  ulong uVar22;
  ushort *__src;
  ushort *puVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  long in_FS_OFFSET;
  bool bVar27;
  bool local_4a9;
  byte local_498;
  byte local_490;
  uint local_488;
  ushort *local_478;
  ulong local_450;
  undefined8 local_448;
  undefined8 auStack_440 [127];
  byte local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  if ((0x12 < param_2) && (*(ushort *)(param_1 + 0xc) != 0)) {
    bVar4 = 0x3fff < (ushort)(*(short *)(param_1 + 0xe) - 1U);
    bVar27 = 0x4000 < *(ushort *)(param_1 + 0xc);
    if (((!bVar4 && !bVar27) &&
        ((local_490 = param_1[0x11], local_490 >> 6 == 0 && (bVar12 = param_1[1], bVar12 < 2)))) &&
       ((bVar12 == 0 || (((byte)(param_1[7] - 1) < 0x20 && (*(short *)(param_1 + 3) == 0)))))) {
      local_488 = (uint)param_1[2];
      bVar5 = 8 < local_488;
      if (bVar5) {
        local_488 = param_1[2] - 8;
      }
      local_4a9 = bVar5 || (bVar4 || bVar27);
      if (local_488 == 2) {
        bVar12 = param_1[0x10];
        if (bVar12 != 8) {
          iVar8 = 3;
          uVar14 = 3;
          if (bVar12 == 0x18) goto LAB_00105ef4;
          if (bVar12 < 0x19) {
            if ((byte)(bVar12 - 0xf) < 2) goto LAB_001061ab;
          }
          else {
            iVar8 = 4;
            uVar14 = 4;
            if (bVar12 == 0x20) goto LAB_00105ef4;
          }
        }
      }
      else if (local_488 == 3) {
        if (((bVar12 == 0) && (*(short *)(param_1 + 5) == 0)) && ((param_1[0x10] - 8 & 0xf7) == 0))
        {
          if (param_1[0x10] != '\b') {
            bVar12 = 0x10;
LAB_001061ab:
            uVar14 = 2;
            iVar8 = (local_488 == 3 && bVar12 == 0x10) + 3;
            goto LAB_00105ef4;
          }
          iVar8 = 3;
          goto LAB_0010616c;
        }
      }
      else if (((local_488 == 1) && (param_1[0x10] == '\b')) &&
              (((bVar12 & 1) != 0 && (*(short *)(param_1 + 5) != 0)))) {
        iVar8 = (param_1[7] == ' ') + 3;
LAB_0010616c:
        uVar14 = 1;
LAB_00105ef4:
        *param_5 = iVar8;
        bVar12 = *param_1;
        __src = (ushort *)(param_1 + 0x12);
        uVar15 = param_2 - 0x12;
        if (bVar12 != 0) {
          if (uVar15 < bVar12) goto LAB_00105ea8;
          __src = (ushort *)((long)__src + (ulong)bVar12);
          uVar15 = uVar15 + bVar12;
        }
        puVar9 = &local_448;
        do {
          *puVar9 = __LC47;
          puVar9[1] = _UNK_0010e748;
          puVar9 = puVar9 + 2;
        } while (puVar9 != (undefined8 *)&stack0xffffffffffffffb8);
        if (param_1[1] != '\0') {
          uVar2 = *(ushort *)(param_1 + 5);
          uVar22 = (ulong)uVar2;
          if (uVar2 != 0) {
            bVar12 = param_1[7];
            if (local_488 == 1) {
              if ((bVar12 - 0x18 & 0xf7) == 0) {
                if (uVar2 < 0x101) {
                  if (bVar12 == 0x20) {
                    if ((uint)uVar2 * 4 <= uVar15) {
                      puVar23 = __src;
                      puVar9 = &local_448;
                      do {
                        puVar19 = puVar23 + 2;
                        *(uint *)puVar9 =
                             CONCAT31(CONCAT21(CONCAT11(*(byte *)((long)puVar23 + 3),(byte)*puVar23)
                                               ,*(byte *)((long)puVar23 + 1)),(byte)puVar23[1]);
                        puVar23 = puVar19;
                        puVar9 = (undefined8 *)((long)puVar9 + 4);
                      } while (puVar19 != __src + uVar22 * 2);
                      uVar15 = uVar15 + (uint)uVar2 * -4;
                      __src = __src + (ulong)uVar2 * 2;
                      goto LAB_00105f79;
                    }
                  }
                  else {
                    uVar7 = (uint)uVar2 + (uint)uVar2 * 2;
                    if (uVar7 <= uVar15) {
                      puVar23 = __src;
                      puVar9 = &local_448;
                      do {
                        puVar19 = (ushort *)((long)puVar23 + 3);
                        *(ushort *)puVar9 = CONCAT11(*(byte *)((long)puVar23 + 1),(byte)puVar23[1]);
                        uVar2 = *puVar23;
                        *(undefined1 *)((long)puVar9 + 3) = 0xff;
                        *(byte *)((long)puVar9 + 2) = (byte)uVar2;
                        puVar23 = puVar19;
                        puVar9 = (undefined8 *)((long)puVar9 + 4);
                      } while (puVar19 != (ushort *)(uVar22 * 3 + (long)__src));
                      uVar15 = uVar15 - uVar7;
                      __src = (ushort *)((long)__src + (ulong)uVar7);
                      goto LAB_00105f79;
                    }
                  }
                }
              }
              else if (((bVar12 == 0xf) || (bVar12 == 0x10)) &&
                      ((uVar2 < 0x101 && (uVar7 = (uint)uVar2 + (uint)uVar2, uVar7 <= uVar15)))) {
                puVar23 = __src;
                puVar9 = &local_448;
                do {
                  bVar12 = *(byte *)((long)puVar23 + 1);
                  uVar2 = *puVar23;
                  puVar23 = puVar23 + 1;
                  *(undefined1 *)((long)puVar9 + 3) = 0xff;
                  *(char *)puVar9 = (char)(((((uint)bVar12 << 8) >> 10 & 0x1f) * 0xff + 0xf) / 0x1f)
                  ;
                  *(char *)((long)puVar9 + 1) = (char)(((uVar2 >> 5 & 0x1f) * 0xff + 0xf) / 0x1f);
                  *(char *)((long)puVar9 + 2) = (char)(((uVar2 & 0x1f) * 0xff + 0xf) / 0x1f);
                  puVar9 = (undefined8 *)((long)puVar9 + 4);
                } while (puVar23 != __src + uVar22);
                uVar15 = uVar15 - uVar7;
                __src = (ushort *)((long)__src + (ulong)uVar7);
                goto LAB_00105f79;
              }
            }
            else {
              uVar7 = (uint)uVar2 * (uint)(bVar12 >> 3);
              if (uVar7 <= uVar15) {
                uVar15 = uVar15 + uVar7;
                __src = (ushort *)((long)__src + (ulong)uVar7);
                goto LAB_00105f79;
              }
            }
            goto LAB_00105ea8;
          }
        }
LAB_00105f79:
        *param_3 = (uint)*(ushort *)(param_1 + 0xc);
        uVar2 = *(ushort *)(param_1 + 0xe);
        *param_4 = (uint)uVar2;
        iVar8 = *param_3 * *param_5;
        uVar7 = *param_3 * uVar14;
        __ptr = malloc((ulong)((uint)uVar2 * iVar8));
        if (__ptr != (void *)0x0) {
          if ((bVar5 || (bVar4 || bVar27)) && (local_450 = (ulong)uVar7, uVar7 != 0)) {
            local_478 = (ushort *)operator_new(local_450);
            *(byte *)local_478 = 0;
            if (local_450 != 1) {
              memset((byte *)((long)local_478 + 1),0,local_450 - 1);
            }
            iVar3 = *param_4;
            local_44[0] = 0;
            local_44[1] = 0;
            local_44[2] = 0;
            local_44[3] = 0;
            if (0 < iVar3) goto LAB_00105ffc;
          }
          else {
            local_44[0] = 0;
            local_44[1] = 0;
            local_44[2] = 0;
            local_44[3] = 0;
            iVar3 = *param_4;
            local_450 = 0;
            local_478 = (ushort *)0x0;
            if (iVar3 < 1) goto LAB_00105eab;
LAB_00105ffc:
            local_44[0] = 0;
            local_44[1] = 0;
            local_44[2] = 0;
            local_44[3] = 0;
            uVar25 = 0;
            bVar4 = false;
            local_498 = local_490 & 0x10;
            local_490 = local_490 & 0x20;
            iVar26 = 1;
            do {
              if (local_4a9) {
                uVar16 = *param_3;
                puVar23 = local_478;
                do {
                  if (uVar25 == 0) {
                    if (uVar15 != 0) {
                      uVar2 = *__src;
                      __src = (ushort *)((long)__src + 1);
                      uVar15 = uVar15 - 1;
                      uVar25 = ((byte)uVar2 & 0x7f) + 1;
                      uVar17 = uVar25;
                      if (-1 < (char)(byte)uVar2) {
                        if (uVar16 <= uVar25) {
                          uVar17 = uVar16;
                        }
                        uVar16 = uVar16 - uVar17;
                        uVar25 = uVar25 - uVar17;
                        goto LAB_0010630f;
                      }
                      if (uVar14 <= uVar15) {
                        if (uVar14 != 0) {
                          uVar13 = 0;
                          do {
                            uVar22 = (ulong)uVar13;
                            uVar13 = uVar13 + 1;
                            local_44[uVar22] = *(byte *)((long)__src + uVar22);
                          } while (uVar13 < uVar14);
                        }
                        uVar15 = uVar15 - uVar14;
                        __src = (ushort *)((long)__src + (ulong)uVar14);
                        if (uVar16 <= uVar25) {
                          uVar17 = uVar16;
                        }
                        uVar16 = uVar16 - uVar17;
                        uVar25 = uVar25 - uVar17;
                        goto LAB_00106276;
                      }
                    }
LAB_0010647b:
                    free(__ptr);
                    goto LAB_00106485;
                  }
                  uVar17 = uVar16;
                  if (uVar25 <= uVar16) {
                    uVar17 = uVar25;
                  }
                  uVar16 = uVar16 - uVar17;
                  uVar25 = uVar25 - uVar17;
                  if (bVar4) {
LAB_00106276:
                    if (uVar17 != 0) {
                      uVar22 = 0;
                      puVar19 = puVar23;
                      do {
                        if (uVar14 != 0) {
                          uVar10 = 0;
                          do {
                            uVar13 = (int)uVar10 + 1;
                            *(byte *)((long)puVar19 + uVar10) = local_44[uVar10];
                            uVar10 = (ulong)uVar13;
                          } while (uVar13 < uVar14);
                        }
                        uVar13 = (int)uVar22 + 1;
                        uVar22 = (ulong)uVar13;
                        puVar19 = (ushort *)((long)puVar19 + (ulong)uVar14);
                      } while (uVar13 != uVar17);
                      puVar23 = (ushort *)((long)puVar23 + uVar22 * uVar14);
                    }
                    bVar4 = true;
                  }
                  else {
LAB_0010630f:
                    uVar17 = uVar17 * uVar14;
                    if (uVar15 < uVar17) goto LAB_0010647b;
                    uVar22 = (ulong)uVar17;
                    uVar15 = uVar15 - uVar17;
                    pvVar11 = memcpy(puVar23,__src,uVar22);
                    bVar4 = false;
                    puVar23 = (ushort *)((long)pvVar11 + uVar22);
                    __src = (ushort *)((long)__src + uVar22);
                  }
                  puVar19 = local_478;
                } while (uVar16 != 0);
              }
              else {
                if (uVar15 < uVar7) {
                  free(__ptr);
LAB_00106485:
                  __ptr = (void *)0x0;
                  break;
                }
                uVar15 = uVar15 - uVar7;
                puVar19 = __src;
                __src = (ushort *)((long)__src + (ulong)uVar7);
              }
              iVar24 = iVar26 + -1;
              if (local_490 == 0) {
                iVar24 = iVar3 - iVar26;
              }
              uVar22 = (ulong)(uint)(iVar24 * iVar8);
              iVar24 = *param_5;
              if (local_498 != 0) {
                iVar20 = (*param_3 + -1) * iVar24;
                iVar24 = -iVar24;
                uVar22 = (long)iVar20 + uVar22;
              }
              puVar21 = (undefined4 *)((long)__ptr + uVar22);
              bVar12 = param_1[0x10];
              if (bVar12 == 0x18) {
                iVar20 = *param_3;
                if (0 < iVar20) {
                  puVar23 = puVar19;
                  do {
                    puVar18 = (ushort *)((long)puVar23 + 3);
                    *(ushort *)puVar21 = CONCAT11(*(byte *)((long)puVar23 + 1),(byte)puVar23[1]);
                    *(byte *)((long)puVar21 + 2) = (byte)*puVar23;
                    puVar21 = (undefined4 *)((long)puVar21 + (long)iVar24);
                    puVar23 = puVar18;
                  } while (puVar18 != (ushort *)((long)iVar20 * 3 + (long)puVar19));
                }
              }
              else if (bVar12 < 0x19) {
                if (bVar12 == 8) {
                  iVar20 = *param_3;
                  if (local_488 == 1) {
                    if (param_1[7] == ' ') {
                      if (0 < iVar20) {
                        puVar23 = (ushort *)((long)iVar20 + (long)puVar19);
                        do {
                          uVar2 = *puVar19;
                          puVar19 = (ushort *)((long)puVar19 + 1);
                          *puVar21 = *(undefined4 *)((long)&local_448 + (ulong)(byte)uVar2 * 4);
                          puVar21 = (undefined4 *)((long)puVar21 + (long)iVar24);
                        } while (puVar19 != puVar23);
                      }
                    }
                    else {
                      puVar23 = (ushort *)((long)iVar20 + (long)puVar19);
                      if (0 < iVar20) {
                        do {
                          uVar2 = *puVar19;
                          puVar19 = (ushort *)((long)puVar19 + 1);
                          uVar1 = *(undefined1 *)((long)auStack_440 + (ulong)(byte)uVar2 * 4 + -6);
                          *(undefined2 *)puVar21 =
                               *(undefined2 *)((long)&local_448 + (ulong)(byte)uVar2 * 4);
                          *(undefined1 *)((long)puVar21 + 2) = uVar1;
                          puVar21 = (undefined4 *)((long)puVar21 + (long)iVar24);
                        } while (puVar19 != puVar23);
                      }
                    }
                  }
                  else {
                    puVar23 = (ushort *)((long)iVar20 + (long)puVar19);
                    if (0 < iVar20) {
                      do {
                        bVar12 = (byte)*puVar19;
                        puVar19 = (ushort *)((long)puVar19 + 1);
                        *(byte *)((long)puVar21 + 2) = bVar12;
                        *(ushort *)puVar21 = CONCAT11(bVar12,bVar12);
                        puVar21 = (undefined4 *)((long)puVar21 + (long)iVar24);
                      } while (puVar19 != puVar23);
                    }
                  }
                }
                else if ((byte)(bVar12 - 0xf) < 2) {
                  iVar20 = *param_3;
                  if (local_488 == 2) {
                    if (0 < iVar20) {
                      puVar23 = puVar19 + iVar20;
                      do {
                        uVar2 = *puVar19;
                        puVar19 = puVar19 + 1;
                        *(char *)puVar21 = (char)(((uVar2 >> 10 & 0x1f) * 0xff + 0xf) / 0x1f);
                        *(char *)((long)puVar21 + 1) =
                             (char)(((uVar2 >> 5 & 0x1f) * 0xff + 0xf) / 0x1f);
                        *(char *)((long)puVar21 + 2) = (char)(((uVar2 & 0x1f) * 0xff + 0xf) / 0x1f);
                        puVar21 = (undefined4 *)((long)puVar21 + (long)iVar24);
                      } while (puVar19 != puVar23);
                    }
                  }
                  else if (0 < iVar20) {
                    puVar23 = puVar19 + iVar20;
                    do {
                      uVar6 = *puVar19;
                      uVar2 = *puVar19;
                      puVar19 = puVar19 + 1;
                      *puVar21 = CONCAT31(CONCAT21(uVar2,(byte)uVar6),(byte)uVar6);
                      puVar21 = (undefined4 *)((long)puVar21 + (long)iVar24);
                    } while (puVar19 != puVar23);
                  }
                }
              }
              else if ((bVar12 == 0x20) && (iVar20 = *param_3, 0 < iVar20)) {
                puVar23 = puVar19;
                do {
                  puVar18 = puVar23 + 2;
                  *puVar21 = CONCAT31(CONCAT21(CONCAT11(*(byte *)((long)puVar23 + 3),(byte)*puVar23)
                                               ,*(byte *)((long)puVar23 + 1)),(byte)puVar23[1]);
                  puVar21 = (undefined4 *)((long)puVar21 + (long)iVar24);
                  puVar23 = puVar18;
                } while (puVar18 != puVar19 + (long)iVar20 * 2);
              }
              bVar27 = iVar26 != iVar3;
              iVar26 = iVar26 + 1;
            } while (bVar27);
            if (local_478 == (ushort *)0x0) goto LAB_00105eab;
          }
          operator_delete(local_478,local_450);
          goto LAB_00105eab;
        }
      }
    }
  }
LAB_00105ea8:
  __ptr = (void *)0x0;
LAB_00105eab:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __ptr;
}



/* basisu::read_tga(char const*, int&, int&, int&) */

undefined8 basisu::read_tga(char *param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uchar *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  local_48 = (uchar *)0x0;
  local_40 = 0;
  cVar1 = read_file_to_vec(param_1,(vector *)&local_48);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((uint)local_40 != 0) {
      uVar2 = read_tga(local_48,(uint)local_40,param_2,param_3,param_4);
    }
  }
  if (local_48 != (uchar *)0x0) {
    free(local_48);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::load_tga(char const*, basisu::image&) */

undefined8 basisu::load_tga(char *param_1,image *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *__ptr;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  uint local_4c;
  uint local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  __ptr = (undefined1 *)read_tga(param_1,(int *)&local_4c,(int *)&local_48,&local_44);
  iVar4 = local_44;
  uVar3 = local_48;
  uVar2 = local_4c;
  if (__ptr == (undefined1 *)0x0) {
    error_printf("Failed loading .TGA image \"%s\"!\n",param_1);
  }
  else {
    if (((local_4c != 0) && (local_48 != 0)) && (local_44 - 3U < 2)) {
      image::crop(param_2,local_4c,local_48,0xffffffff,(color_rgba *)&g_black_color,true);
      if (0 < (int)uVar3) {
        uVar9 = 0;
        puVar10 = __ptr;
        do {
          puVar5 = (undefined1 *)
                   (*(long *)(param_2 + 0x10) + (ulong)(uVar9 * *(int *)(param_2 + 8)) * 4);
          if (0 < (int)uVar2) {
            puVar1 = puVar5 + (long)(int)uVar2 * 4;
            puVar8 = puVar10;
            do {
              *puVar5 = *puVar8;
              puVar5[1] = puVar8[1];
              puVar5[2] = puVar8[2];
              uVar7 = 0xff;
              if (iVar4 != 3) {
                uVar7 = puVar8[3];
              }
              puVar5[3] = uVar7;
              puVar5 = puVar5 + 4;
              puVar8 = puVar8 + iVar4;
            } while (puVar5 != puVar1);
            puVar10 = puVar10 + (ulong)uVar2 * (long)iVar4;
          }
          uVar9 = uVar9 + 1;
        } while (uVar3 != uVar9);
      }
      free(__ptr);
      uVar6 = 1;
      goto LAB_001069eb;
    }
    error_printf("Failed loading .TGA image \"%s\"!\n",param_1);
    free(__ptr);
  }
  uVar6 = 0;
LAB_001069eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::load_image(char const*, basisu::image&) */

undefined4 basisu::load_image(char *param_1,image *param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  long *__s1;
  long in_FS_OFFSET;
  long *local_78;
  long local_70;
  long local_68 [2];
  long *local_58 [2];
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = local_48;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  else {
    sVar3 = strlen(param_1);
    std::__cxx11::string::_M_construct<char_const*>((string *)local_58,param_1,param_1 + sVar3);
    string_get_extension((basisu *)&local_78,(string *)local_58);
    if (local_58[0] != local_48) {
      operator_delete(local_58[0],local_48[0] + 1);
    }
    __s1 = local_78;
    uVar2 = 0;
    if (local_70 != 0) {
      iVar1 = strcasecmp((char *)local_78,"png");
      if (iVar1 == 0) {
        uVar2 = load_png(param_1,param_2);
        __s1 = local_78;
      }
      else {
        iVar1 = strcasecmp((char *)__s1,"tga");
        if (iVar1 == 0) {
          uVar2 = load_tga(param_1,param_2);
          __s1 = local_78;
        }
        else {
          iVar1 = strcasecmp((char *)__s1,"qoi");
          if ((iVar1 != 0) &&
             (((iVar1 = strcasecmp((char *)__s1,"jpg"), iVar1 == 0 ||
               (iVar1 = strcasecmp((char *)__s1,"jfif"), iVar1 == 0)) ||
              (iVar1 = strcasecmp((char *)__s1,"jpeg"), uVar2 = 0, iVar1 == 0)))) {
            uVar2 = load_jpg(param_1,param_2);
            __s1 = local_78;
          }
        }
      }
    }
    if (__s1 != local_68) {
      operator_delete(__s1,local_68[0] + 1);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::string_begins_with(std::__cxx11::string const&, char const*) */

undefined8 basisu::string_begins_with(string *param_1,char *param_2)

{
  int iVar1;
  size_t __n;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  __n = strlen(param_2);
  uVar2 = 0;
  if (__n <= *(ulong *)(param_1 + 8)) {
    iVar1 = strncasecmp(param_2,*(char **)param_1,__n);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  return uVar2;
}



/* basisu::read_rgbe(basisu::vector<unsigned char> const&, basisu::imagef&,
   basisu::rgbe_header_info&) */

undefined8 basisu::read_rgbe(vector *param_1,imagef *param_2,rgbe_header_info *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _LC30;
  *(undefined8 *)(param_3 + 8) = 0;
  **(undefined1 **)param_3 = 0;
  uVar1 = *(uint *)(param_1 + 8);
  param_3[0x28] = (rgbe_header_info)0x0;
  param_3[0x38] = (rgbe_header_info)0x0;
  *(undefined8 *)(param_3 + 0x20) = uVar2;
  *(undefined8 *)(param_3 + 0x30) = uVar2;
  if (((3 < uVar1) && (**(char **)param_1 == '#')) && ((*(char **)param_1)[1] == '?')) {
    uVar2 = read_rgbe(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



/* basisu::read_rgbe(char const*, basisu::imagef&, basisu::rgbe_header_info&) */

undefined4 basisu::read_rgbe(char *param_1,imagef *param_2,rgbe_header_info *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (char *)0x0;
  local_30 = 0;
  cVar2 = read_file_to_vec(param_1,(vector *)&local_38);
  uVar1 = _LC30;
  if (cVar2 == '\0') {
LAB_00106d52:
    uVar3 = 0;
LAB_00106d54:
    if (local_38 == (char *)0x0) goto LAB_00106d5d;
  }
  else {
    *(undefined8 *)(param_3 + 8) = 0;
    **(undefined1 **)param_3 = 0;
    param_3[0x28] = (rgbe_header_info)0x0;
    param_3[0x38] = (rgbe_header_info)0x0;
    *(undefined8 *)(param_3 + 0x20) = uVar1;
    *(undefined8 *)(param_3 + 0x30) = uVar1;
    if ((uint)local_30 < 4) goto LAB_00106d52;
    if ((*local_38 == '#') && (local_38[1] == '?')) {
      uVar3 = read_rgbe((vector *)&local_38,param_2,param_3);
      goto LAB_00106d54;
    }
    uVar3 = 0;
  }
  free(local_38);
LAB_00106d5d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::read_exr(char const*, basisu::imagef&, int&) */

undefined8 basisu::read_exr(char *param_1,imagef *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long in_FS_OFFSET;
  uint local_60;
  uint local_5c;
  undefined4 *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = (undefined4 *)0x0;
  local_50 = (undefined *)0x0;
  iVar3 = LoadEXRWithLayer(&local_58,&local_60,&local_5c,param_1,0,&local_50);
  *param_3 = 4;
  if (iVar3 == 0) {
    if (0 < (int)local_60) {
      if ((local_5c - 1 < 0x10000) && ((int)local_60 < 0x10001)) {
        uStack_40 = CONCAT44(_LC1,_UNK_0010e718);
        local_48 = __LC2;
        imagef::crop(param_2,local_60,local_5c,0xffffffff,(vec *)&local_48);
        uVar2 = _LC1;
        if (*param_3 == 1) {
          puVar11 = *(undefined4 **)(param_2 + 0x10);
          if (0 < (int)local_5c) {
            lVar12 = (ulong)(local_60 - 1) + 1;
            uVar9 = 0;
            puVar10 = local_58;
            do {
              puVar4 = puVar10;
              puVar8 = puVar11;
              if (0 < (int)local_60) {
                do {
                  puVar5 = puVar4 + 4;
                  *puVar8 = *puVar4;
                  puVar8[1] = puVar4[1];
                  uVar1 = puVar4[2];
                  puVar8[3] = uVar2;
                  puVar8[2] = uVar1;
                  puVar4 = puVar5;
                  puVar8 = puVar8 + 4;
                } while (puVar5 != puVar10 + (long)(int)local_60 * 4);
                puVar10 = puVar10 + lVar12 * 4;
                puVar11 = puVar11 + lVar12 * 4;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 != local_5c);
          }
        }
        else {
          memcpy(*(void **)(param_2 + 0x10),local_58,
                 (ulong)(uint)(*(int *)param_2 * *(int *)(param_2 + 4)) << 4);
        }
        free(local_58);
        uVar6 = 1;
        goto LAB_00106ea6;
      }
    }
    error_printf("Invalid dimensions of .EXR image \"%s\"!\n",param_1);
    free(local_58);
  }
  else {
    puVar7 = local_50;
    if (local_50 == (undefined *)0x0) {
      puVar7 = &_LC56;
    }
    error_printf("Failed loading .EXR image \"%s\"! (TinyEXR error: %s)\n",param_1,puVar7);
    FreeEXRErrorMessage(local_50);
    free(local_58);
  }
  uVar6 = 0;
LAB_00106ea6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::load_image_hdr(char const*, basisu::imagef&, bool) */

undefined4 basisu::load_image_hdr(char *param_1,imagef *param_2,bool param_3)

{
  long *__s1;
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  imagef *this;
  undefined *puVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  uint uStack_108;
  uint uStack_104;
  void *pvStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  ulong local_c8 [2];
  void *local_b8;
  undefined8 local_b0;
  long *local_a8;
  long local_a0;
  long local_98 [2];
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = &local_78;
  if (param_1 == (char *)0x0) {
    pcVar5 = "basic_string: construction from null is not valid";
    std::__throw_logic_error("basic_string: construction from null is not valid");
    lStack_d8 = *(long *)(in_FS_OFFSET + 0x28);
    pvStack_100 = (void *)0x0;
    uStack_108 = 0;
    uStack_104 = 0;
    puStack_f8 = (undefined *)0x0;
    iVar1 = LoadEXRFromMemory(&pvStack_100,&uStack_108,&uStack_104,pcVar5,param_2,&puStack_f8);
    if (iVar1 < 0) {
      puVar4 = puStack_f8;
      if (puStack_f8 == (undefined *)0x0) {
        puVar4 = &_LC56;
      }
      error_printf("Failed loading .EXR image from memory! (TinyEXR error: %s)\n",puVar4);
      FreeEXRErrorMessage(puStack_f8);
      free(pvStack_100);
      uVar2 = 0;
    }
    else {
      uStack_f0 = __LC2;
      uStack_e8 = _UNK_0010e718;
      imagef::crop(this,uStack_108,uStack_104,0xffffffff,(vec *)&uStack_f0);
      memcpy(*(void **)(this + 0x10),pvStack_100,(long)(int)(uStack_108 * uStack_104) << 4);
      free(pvStack_100);
      uVar2 = 1;
    }
    if (lStack_d8 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  sVar3 = strlen(param_1);
  std::__cxx11::string::_M_construct<char_const*>((string *)&local_88,param_1,param_1 + sVar3);
  string_get_extension((basisu *)&local_a8,(string *)&local_88);
  if (local_88 != &local_78) {
    operator_delete(local_88,CONCAT71(uStack_77,local_78) + 1);
  }
  __s1 = local_a8;
  if (local_a0 != 0) {
    iVar1 = strcasecmp((char *)local_a8,"hdr");
    if (iVar1 == 0) {
      local_80 = 0;
      local_78 = 0;
      local_88 = &local_78;
      uVar2 = read_rgbe(param_1,param_2,(rgbe_header_info *)&local_88);
      if (local_88 != &local_78) {
        operator_delete(local_88,CONCAT71(uStack_77,local_78) + 1);
      }
      goto LAB_001070d4;
    }
    iVar1 = strcasecmp((char *)__s1,"exr");
    if (iVar1 == 0) {
      local_c8[0] = local_c8[0] & 0xffffffff00000000;
      uVar2 = read_exr(param_1,param_2,(int *)local_c8);
      goto LAB_001070d4;
    }
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    uVar2 = load_image(param_1,(image *)local_c8);
    if ((char)uVar2 != '\0') {
      convert_ldr_to_hdr_image(param_2,(image *)local_c8,param_3);
      if (local_b8 != (void *)0x0) {
        free(local_b8);
      }
      goto LAB_001070d4;
    }
    if (local_b8 != (void *)0x0) {
      free(local_b8);
    }
  }
  uVar2 = 0;
LAB_001070d4:
  if (local_a8 != local_98) {
    operator_delete(local_a8,local_98[0] + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::read_exr(void const*, unsigned long, basisu::imagef&) */

undefined8 basisu::read_exr(void *param_1,ulong param_2,imagef *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  uint local_40;
  uint local_3c;
  void *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (void *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_30 = (undefined *)0x0;
  iVar1 = LoadEXRFromMemory(&local_38,&local_40,&local_3c,param_1,param_2,&local_30);
  if (iVar1 < 0) {
    puVar3 = local_30;
    if (local_30 == (undefined *)0x0) {
      puVar3 = &_LC56;
    }
    error_printf("Failed loading .EXR image from memory! (TinyEXR error: %s)\n",puVar3);
    FreeEXRErrorMessage(local_30);
    free(local_38);
    uVar2 = 0;
  }
  else {
    local_28 = __LC2;
    uStack_20 = _UNK_0010e718;
    imagef::crop(param_3,local_40,local_3c,0xffffffff,(vec *)&local_28);
    memcpy(*(void **)(param_3 + 0x10),local_38,(long)(int)(local_40 * local_3c) << 4);
    free(local_38);
    uVar2 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::load_image_hdr(void const*, unsigned long, basisu::imagef&, unsigned int, unsigned int,
   basisu::hdr_image_type, bool) */

undefined8
basisu::load_image_hdr
          (uchar *param_1,ulong param_2,imagef *param_3,uint param_4,uint param_5,undefined4 param_6
          ,bool param_7)

{
  ushort *puVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  ushort uVar16;
  long in_FS_OFFSET;
  char *local_a8;
  ulong local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (uchar *)0x0) || (param_2 == 0)) goto switchD_00107378_default;
  switch(param_6) {
  case 0:
    if ((((ulong)(param_4 * param_5) << 3 != param_2) || (param_4 == 0)) || (param_5 == 0))
    goto switchD_00107378_default;
    local_88 = __LC2;
    uStack_80 = _UNK_0010e718;
    imagef::crop(param_3,param_4,param_5,0xffffffff,(vec *)&local_88);
    iVar10 = *(int *)(param_3 + 8);
    lVar3 = *(long *)(param_3 + 0x10);
    iVar14 = 0;
    uVar12 = 0;
    do {
      uVar11 = 0;
      do {
        puVar1 = (ushort *)(param_1 + (ulong)(uVar11 * 4) * 2);
        uVar2 = *puVar1;
        puVar8 = (uint *)((ulong)(uVar11 + iVar14) * 0x10 + lVar3);
        uVar6 = uVar2 & 0x3ff;
        uVar15 = (uint)(uVar2 >> 0xf) << 0x1f;
        uVar16 = uVar2 >> 10 & 0x1f;
        if (uVar16 == 0) {
          uVar4 = 0;
          if ((uVar2 & 0x3ff) != 0) {
            do {
              uVar9 = uVar4;
              uVar6 = uVar6 * 2;
              uVar4 = uVar9 - 1;
            } while ((uVar6 & 0x400) == 0);
            uVar6 = uVar6 & 0xfffffbff;
LAB_00107599:
            uVar15 = (uVar9 + 0x70) * 0x800000 | uVar6 << 0xd | uVar15;
          }
        }
        else {
          uVar9 = (uint)uVar16;
          if ((uVar2 >> 10 & 0x1f) != 0x1f) goto LAB_00107599;
          if ((uVar2 & 0x3ff) == 0) {
            uVar15 = uVar15 | 0x7f800000;
          }
          else {
            uVar15 = uVar6 << 0xd | uVar15 | 0x7f800000;
          }
        }
        uVar2 = puVar1[1];
        *puVar8 = uVar15;
        uVar6 = uVar2 & 0x3ff;
        uVar15 = (uint)(uVar2 >> 0xf) << 0x1f;
        uVar16 = uVar2 >> 10 & 0x1f;
        if (uVar16 == 0) {
          uVar4 = 0;
          if ((uVar2 & 0x3ff) != 0) {
            do {
              uVar9 = uVar4;
              uVar6 = uVar6 * 2;
              uVar4 = uVar9 - 1;
            } while ((uVar6 & 0x400) == 0);
            uVar6 = uVar6 & 0xfffffbff;
LAB_00107601:
            uVar15 = (uVar9 + 0x70) * 0x800000 | uVar6 << 0xd | uVar15;
          }
        }
        else {
          uVar9 = (uint)uVar16;
          if ((uVar2 >> 10 & 0x1f) != 0x1f) goto LAB_00107601;
          if ((uVar2 & 0x3ff) == 0) {
            uVar15 = uVar15 | 0x7f800000;
          }
          else {
            uVar15 = uVar6 << 0xd | uVar15 | 0x7f800000;
          }
        }
        uVar2 = puVar1[2];
        puVar8[1] = uVar15;
        uVar6 = uVar2 & 0x3ff;
        uVar15 = (uint)(uVar2 >> 0xf) << 0x1f;
        uVar16 = uVar2 >> 10 & 0x1f;
        if (uVar16 == 0) {
          uVar4 = 0;
          if ((uVar2 & 0x3ff) != 0) {
            do {
              uVar9 = uVar4;
              uVar6 = uVar6 * 2;
              uVar4 = uVar9 - 1;
            } while ((uVar6 & 0x400) == 0);
            uVar6 = uVar6 & 0xfffffbff;
LAB_00107669:
            uVar15 = uVar6 << 0xd | uVar15 | (uVar9 + 0x70) * 0x800000;
          }
        }
        else {
          uVar9 = (uint)uVar16;
          if ((uVar2 >> 10 & 0x1f) != 0x1f) goto LAB_00107669;
          if ((uVar2 & 0x3ff) == 0) {
            uVar15 = uVar15 | 0x7f800000;
          }
          else {
            uVar15 = uVar6 << 0xd | uVar15 | 0x7f800000;
          }
        }
        uVar2 = puVar1[3];
        puVar8[2] = uVar15;
        uVar6 = uVar2 & 0x3ff;
        uVar15 = (uint)(uVar2 >> 0xf) << 0x1f;
        uVar16 = uVar2 >> 10 & 0x1f;
        if (uVar16 == 0) {
          uVar4 = 0;
          if ((uVar2 & 0x3ff) != 0) {
            do {
              uVar9 = uVar4;
              uVar6 = uVar6 * 2;
              uVar4 = uVar9 - 1;
            } while ((uVar6 & 0x400) == 0);
            uVar6 = uVar6 & 0xfffffbff;
LAB_001076d1:
            uVar15 = uVar6 << 0xd | uVar15 | (uVar9 + 0x70) * 0x800000;
          }
        }
        else {
          uVar9 = (uint)uVar16;
          if ((uVar2 >> 10 & 0x1f) != 0x1f) goto LAB_001076d1;
          if ((uVar2 & 0x3ff) == 0) {
            uVar15 = uVar15 | 0x7f800000;
          }
          else {
            uVar15 = uVar6 << 0xd | uVar15 | 0x7f800000;
          }
        }
        uVar11 = uVar11 + 1;
        puVar8[3] = uVar15;
      } while (uVar11 < param_4);
      param_1 = param_1 + (ulong)(param_4 * 4) * 2;
      iVar14 = iVar14 + iVar10;
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_5);
    break;
  case 1:
    if ((((ulong)(param_4 * param_5) << 4 != param_2) || (param_4 == 0)) || (param_5 == 0))
    goto switchD_00107378_default;
    local_88 = __LC2;
    uStack_80 = _UNK_0010e718;
    imagef::crop(param_3,param_4,param_5,0xffffffff,(vec *)&local_88);
    memcpy(*(void **)(param_3 + 0x10),param_1,param_2);
    break;
  case 2:
    local_a8 = (char *)0x0;
    local_a0 = 0;
    local_98 = (char *)0x0;
    local_90 = 0;
    cVar5 = load_png(param_1,param_2,(image *)&local_a8,(char *)0x0);
    pcVar13 = local_98;
    if (cVar5 == '\0') goto LAB_001077ac;
    convert_ldr_to_hdr_image(param_3,(image *)&local_a8,param_7);
    pcVar13 = local_98;
joined_r0x001074a7:
    if (pcVar13 != (char *)0x0) {
      free(pcVar13);
    }
    break;
  case 3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = read_exr(param_1,param_2,param_3);
      return uVar7;
    }
    goto LAB_00107955;
  case 4:
    local_a8 = (char *)0x0;
    local_a0 = 0;
    if (param_2 >> 0x20 == 0) {
      iVar10 = (int)param_2;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_a8,SUB81(param_2,0),(uint)(iVar10 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      memset(local_a8 + (local_a0 & 0xffffffff),0,(ulong)(iVar10 - (uint)local_a0));
      local_a0 = CONCAT44(local_a0._4_4_,iVar10);
    }
    memcpy(local_a8,param_1,param_2);
    local_78 = 0;
    uStack_80 = 0;
    local_60 = 0;
    local_50 = 0;
    local_68 = _LC30;
    local_58 = _LC30;
    pcVar13 = local_a8;
    local_88 = &local_78;
    if ((uint)local_a0 < 4) {
LAB_001077ac:
      if (pcVar13 == (char *)0x0) goto switchD_00107378_default;
    }
    else if ((*local_a8 == '#') && (local_a8[1] == '?')) {
      cVar5 = read_rgbe((vector *)&local_a8,param_3,(rgbe_header_info *)&local_88);
      if (cVar5 != '\0') {
        pcVar13 = local_a8;
        if (local_88 != &local_78) {
          operator_delete(local_88,CONCAT71(uStack_77,local_78) + 1);
          pcVar13 = local_a8;
        }
        goto joined_r0x001074a7;
      }
      pcVar13 = local_a8;
      if (local_88 != &local_78) {
        operator_delete(local_88,CONCAT71(uStack_77,local_78) + 1);
        pcVar13 = local_a8;
      }
      goto LAB_001077ac;
    }
    free(pcVar13);
  default:
switchD_00107378_default:
    uVar7 = 0;
    goto LAB_001077c2;
  }
  uVar7 = 1;
LAB_001077c2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_00107955:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::write_exr(char const*, basisu::imagef&, unsigned int, unsigned int) */

bool basisu::write_exr(char *param_1,imagef *param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  size_t __nmemb;
  uint uVar18;
  ulong __nmemb_00;
  long in_FS_OFFSET;
  uint uVar19;
  byte local_2a4;
  undefined8 local_270;
  undefined1 local_268 [24];
  long *local_250;
  undefined8 local_248;
  uint local_240;
  ulong local_238;
  ulong uStack_230;
  long local_228 [4];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [104];
  undefined1 *local_160;
  void *local_158;
  uint local_150;
  undefined4 local_14c;
  void *local_148;
  long local_40;
  
  __nmemb_00 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar7 = *(int *)param_2 == 0 || *(int *)(param_2 + 4) == 0;
  if (bVar7) {
    bVar7 = false;
    goto LAB_00107b0d;
  }
  uVar2 = *(undefined8 *)param_2;
  local_208 = (undefined1  [16])0x0;
  local_1f8 = (undefined1  [16])0x0;
  local_1e8 = (undefined1  [16])0x0;
  local_1d8 = (undefined1  [16])0x0;
  if (param_3 != 0) {
    uVar16 = (uint)uVar2;
    uVar19 = (uint)((ulong)uVar2 >> 0x20);
    uVar15 = uVar16 * uVar19;
    plVar10 = (long *)((long)local_208 + __nmemb_00 * 2 * 8);
    plVar4 = local_228;
    plVar17 = (long *)local_208;
    do {
      uVar18 = *(uint *)(plVar17 + 1);
      if (uVar15 != uVar18) {
        if (uVar18 <= uVar15) {
          if (*(uint *)((long)plVar17 + 0xc) < uVar15) {
            basisu::elemental_vector::increase_capacity
                      ((uint)plVar17,SUB41(uVar15,0),(uint)(uVar18 + 1 == uVar15),
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar18 = *(uint *)(plVar17 + 1);
          }
          memset((void *)(*plVar17 + (ulong)uVar18 * 4),0,(ulong)(uVar15 - uVar18) << 2);
        }
        *(uint *)(plVar17 + 1) = uVar15;
      }
      lVar9 = *plVar17;
      plVar17 = plVar17 + 2;
      *plVar4 = lVar9;
      plVar4 = plVar4 + 1;
    } while (plVar17 != plVar10);
    local_238 = __LC62;
    uStack_230 = _UNK_0010e758;
    if (param_3 == 1) {
      local_238 = __LC62 & 0xffffffff00000000;
    }
    else if (param_3 == 3) {
      uStack_230 = _UNK_0010e758 & 0xffffffff00000000;
      local_238 = _LC63;
    }
    else if (param_3 != 4) goto LAB_00107af0;
    iVar3 = *(int *)(param_2 + 8);
    lVar9 = *(long *)(param_2 + 0x10);
    iVar14 = 0;
    iVar13 = 0;
    uVar15 = 0;
    do {
      uVar18 = 0;
      do {
        plVar4 = (long *)local_208;
        puVar8 = &local_238;
        do {
          uVar6 = *puVar8;
          plVar17 = plVar4 + 2;
          puVar8 = (ulong *)((long)puVar8 + 4);
          *(undefined4 *)(*plVar4 + (ulong)(iVar14 + uVar18) * 4) =
               *(undefined4 *)((ulong)(iVar13 + uVar18) * 0x10 + lVar9 + (ulong)(uint)uVar6 * 4);
          plVar4 = plVar17;
        } while (plVar17 != plVar10);
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar16);
      iVar14 = iVar14 + uVar16;
      uVar15 = uVar15 + 1;
      iVar13 = iVar13 + iVar3;
    } while (uVar15 < uVar19);
    InitEXRHeader(local_1c8);
    InitEXRImage(local_268);
    local_250 = local_228;
    local_248 = uVar2;
    local_240 = param_3;
    local_150 = param_3;
    local_160 = (undefined1 *)calloc(__nmemb_00,0x110);
    uVar15 = local_150;
    local_2a4 = (byte)param_4;
    if (param_3 == 3) {
      uVar6 = 0;
      lVar9 = 0;
      goto LAB_00107d94;
    }
    if (param_3 == 4) {
      uVar6 = 0;
      lVar9 = 0;
      do {
        uVar12 = (&_LC65)[uVar6];
        while( true ) {
          local_160[lVar9] = uVar12;
          uVar6 = uVar6 + 1;
          local_160[lVar9 + 1] = 0;
          local_160[lVar9 + 0x10c] = local_2a4 & 1;
          lVar9 = lVar9 + 0x110;
          if (__nmemb_00 == uVar6) goto LAB_00107c78;
          if (param_3 != 3) break;
LAB_00107d94:
          uVar12 = (&_LC64)[uVar6];
        }
      } while( true );
    }
    *local_160 = 0x59;
    local_160[1] = 0;
    local_160[0x10c] = local_2a4 & 1;
LAB_00107c78:
    __nmemb = (size_t)(int)local_150;
    pvVar5 = calloc(__nmemb,4);
    local_158 = pvVar5;
    local_148 = calloc(__nmemb,4);
    if ((param_4 & 4) == 0) {
      local_14c = 3;
    }
    if (0 < (int)uVar15) {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)pvVar5 + lVar9) = 2;
        *(uint *)((long)local_148 + lVar9) = 2 - (uint)((param_4 & 2) == 0);
        lVar9 = lVar9 + 4;
      } while (__nmemb * 4 != lVar9);
    }
    local_270 = 0;
    iVar3 = SaveEXRImageToFile(local_268,local_1c8,param_1,&local_270);
    if (iVar3 != 0) {
      error_printf("Save EXR err: %s\n",local_270);
      FreeEXRErrorMessage(local_270);
    }
    free(local_160);
    free(local_158);
    free(local_148);
    bVar7 = iVar3 == 0;
  }
LAB_00107af0:
  puVar11 = local_1c8;
  do {
    puVar1 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    if ((void *)*puVar1 != (void *)0x0) {
      free((void *)*puVar1);
    }
  } while (puVar11 != local_208);
LAB_00107b0d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



/* basisu::image::debug_text(unsigned int, unsigned int, unsigned int, unsigned int,
   basisu::color_rgba const&, basisu::color_rgba const*, bool, char const*, ...) */

void basisu::image::debug_text
               (uint param_1,uint param_2,uint param_3,uint param_4,color_rgba *param_5,
               color_rgba *param_6,bool param_7,char *param_8,...)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  color_rgba *pcVar4;
  char in_AL;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined8 in_stack_00000018;
  uint local_930;
  undefined4 local_910;
  undefined4 local_90c;
  undefined1 *local_908;
  undefined1 *local_900;
  char local_8f8 [2056];
  long local_f0;
  undefined1 local_e8 [48];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  
  if (in_AL != '\0') {
    local_b8 = in_XMM0_Qa;
    local_a8 = in_XMM1_Qa;
    local_98 = in_XMM2_Qa;
    local_88 = in_XMM3_Qa;
    local_78 = in_XMM4_Qa;
    local_68 = in_XMM5_Qa;
    local_58 = in_XMM6_Qa;
    local_48 = in_XMM7_Qa;
  }
  local_f0 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar11 = local_8f8;
  local_908 = &stack0x00000020;
  local_900 = local_e8;
  local_910 = 0x30;
  local_90c = 0x30;
  __vsnprintf_chk(pcVar11,0x800,2,0x800,in_stack_00000018,&local_910);
  if (local_8f8[0] != '\0') {
    uVar9 = *_param_1;
    iVar2 = (int)param_5;
    uVar13 = param_2;
    local_930 = param_3;
    do {
      pcVar11 = pcVar11 + 1;
      lVar8 = 0x70;
      if ((byte)(local_8f8[0] - 0x20U) < 0x60) {
        lVar8 = (long)(local_8f8[0] + -0x20) << 3;
      }
      pbVar6 = g_debug_font8x8_basic + lVar8;
      uVar15 = local_930;
      do {
        uVar15 = iVar2 + uVar15;
        bVar1 = *pbVar6;
        iVar7 = 0;
        uVar10 = uVar15 - iVar2;
        uVar12 = param_4 + uVar13;
LAB_00107f80:
        do {
          pcVar4 = param_6;
          if (((1 << ((byte)iVar7 & 0x1f) & (uint)bVar1) != 0) ||
             (pcVar4 = _param_7, _param_7 != (color_rgba *)0x0)) {
            uVar3 = uVar12 - param_4;
            if ((char)param_8 == '\0') {
              if (iVar2 != 0) {
                uVar14 = uVar10;
                uVar5 = uVar3;
                if (param_4 != 0) {
                  do {
                    if ((uVar5 < uVar9) && (uVar14 < _param_1[1])) {
                      *(undefined4 *)
                       (*(long *)(_param_1 + 4) + (ulong)(_param_1[2] * uVar14 + uVar5) * 4) =
                           *(undefined4 *)pcVar4;
                      uVar9 = *_param_1;
                    }
                    uVar5 = uVar5 + 1;
                  } while ((uVar5 != uVar12) ||
                          (uVar14 = uVar14 + 1, uVar5 = uVar3, uVar14 != uVar15));
                  iVar7 = iVar7 + 1;
                  uVar12 = uVar12 + param_4;
                  if (iVar7 == 8) break;
                  goto LAB_00107f80;
                }
                do {
                  if (uVar14 + 1 == uVar15) break;
                  uVar14 = uVar14 + 2;
                } while (uVar14 != uVar15);
              }
            }
            else if (iVar2 != 0) {
              uVar14 = uVar10;
              uVar5 = uVar3;
              if (param_4 == 0) {
                do {
                  if (uVar14 + 1 == uVar15) break;
                  uVar14 = uVar14 + 2;
                } while (uVar14 != uVar15);
              }
              else {
                do {
                  if ((uVar5 < uVar9) && (uVar14 < _param_1[1])) {
                    *(color_rgba *)
                     (*(long *)(_param_1 + 4) + 3 + (ulong)(_param_1[2] * uVar14 + uVar5) * 4) =
                         pcVar4[3];
                    uVar9 = *_param_1;
                  }
                  uVar5 = uVar5 + 1;
                } while ((uVar5 != uVar12) || (uVar14 = uVar14 + 1, uVar5 = uVar3, uVar14 != uVar15)
                        );
              }
            }
          }
          iVar7 = iVar7 + 1;
          uVar12 = uVar12 + param_4;
        } while (iVar7 != 8);
        pbVar6 = pbVar6 + 1;
      } while (pbVar6 != g_debug_font8x8_basic + lVar8 + 8);
      uVar13 = uVar13 + param_4 * 8;
      if (uVar9 < param_4 * 8 + uVar13) {
        local_930 = local_930 + iVar2 * 8;
        uVar13 = param_2;
      }
      local_8f8[0] = *pcVar11;
    } while (local_8f8[0] != '\0');
  }
  if (local_f0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::tonemap_image_reinhard(basisu::image&, basisu::imagef const&, float) */

void basisu::tonemap_image_reinhard(image *param_1,imagef *param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_b8;
  float local_a8;
  float local_58;
  float fStack_54;
  float fStack_50;
  float afStack_4c [3];
  long local_40;
  
  uVar1 = *(uint *)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_2 + 4);
  image::crop(param_1,uVar1,uVar2,0xffffffff,(color_rgba *)&g_black_color,true);
  if ((uVar2 != 0) && (uVar1 != 0)) {
    uVar9 = 0;
    do {
      uVar7 = 0;
      do {
        puVar5 = (undefined8 *)
                 ((ulong)(*(int *)(param_2 + 8) * uVar9 + uVar7) * 0x10 + *(long *)(param_2 + 0x10))
        ;
        uVar3 = *puVar5;
        uVar4 = puVar5[1];
        pfVar6 = &local_58;
        do {
          fVar10 = 0.0;
          if (0.0 < *pfVar6) {
            fVar10 = *pfVar6 * param_3;
            fVar10 = fVar10 / (_LC1 + fVar10);
          }
          *pfVar6 = fVar10;
          pfVar6 = pfVar6 + 1;
        } while (afStack_4c != pfVar6);
        local_58 = (float)uVar3;
        fStack_54 = (float)((ulong)uVar3 >> 0x20);
        fStack_50 = (float)uVar4;
        afStack_4c[0] = (float)((ulong)uVar4 >> 0x20);
        uVar8 = ~-(uint)(local_58 < 0.0) & -(uint)(_LC1 < local_58);
        uVar11 = ~-(uint)(fStack_54 < 0.0) & -(uint)(_LC1 < fStack_54);
        uVar12 = ~-(uint)(fStack_50 < 0.0) & -(uint)(_LC1 < fStack_50);
        uVar13 = ~-(uint)(afStack_4c[0] < 0.0) & -(uint)(_LC1 < afStack_4c[0]);
        fVar10 = (float)(~-(uint)(local_58 < 0.0) & (~uVar8 & (uint)local_58 | __LC68 & uVar8));
        fVar14 = (float)(~-(uint)(fStack_54 < 0.0) &
                        (~uVar11 & (uint)fStack_54 | _UNK_0010e764 & uVar11));
        fVar15 = (float)(~-(uint)(fStack_50 < 0.0) &
                        (~uVar12 & (uint)fStack_50 | _UNK_0010e768 & uVar12));
        fVar16 = (float)(~-(uint)(afStack_4c[0] < 0.0) &
                        (~uVar13 & (uint)afStack_4c[0] | _UNK_0010e76c & uVar13));
        _local_58 = CONCAT44(fVar14,fVar10);
        _fStack_50 = CONCAT44(fVar16,fVar15);
        if (_LC21 <= fVar10) {
          fVar10 = powf(fVar10,_LC23);
          fVar10 = fVar10 * __LC24 - __LC6;
          if (fVar10 < 0.0) goto LAB_00108410;
          local_b8 = 255.0;
          if (fVar10 <= _LC1) goto LAB_0010829c;
        }
        else {
          fVar10 = fVar10 * __LC22;
          if (fVar10 < 0.0) {
LAB_00108410:
            local_b8 = 0.0;
          }
          else {
LAB_0010829c:
            local_b8 = fVar10 * _LC67;
          }
        }
        if (_LC21 <= fVar14) {
          fVar10 = powf(fVar14,_LC23);
          fVar14 = fVar10 * __LC24 - __LC6;
          if (fVar14 < 0.0) goto LAB_00108400;
          local_a8 = 255.0;
          if (fVar14 <= _LC1) goto LAB_001082d2;
        }
        else {
          fVar14 = fVar14 * __LC22;
          if (fVar14 < 0.0) {
LAB_00108400:
            local_a8 = 0.0;
          }
          else {
LAB_001082d2:
            local_a8 = fVar14 * _LC67;
          }
        }
        if (_LC21 <= fVar15) {
          fVar10 = powf(fVar15,_LC23);
          fVar10 = fVar10 * __LC24 - __LC6;
          if (fVar10 < 0.0) goto LAB_001083f0;
          uVar8 = 0xffffffff;
          if (fVar10 <= _LC1) {
            fVar10 = roundf(fVar10 * _LC67);
            uVar8 = (uint)fVar10;
          }
        }
        else if (fVar15 * __LC22 < 0.0) {
LAB_001083f0:
          uVar8 = 0;
        }
        else {
          fVar10 = roundf(fVar15 * __LC22 * _LC67);
          uVar8 = (uint)fVar10;
        }
        fVar10 = roundf(local_b8);
        fVar14 = roundf(local_a8);
        fVar15 = roundf(_LC67 * fVar16);
        uVar11 = *(int *)(param_1 + 8) * uVar9 + uVar7;
        uVar7 = uVar7 + 1;
        *(uint *)(*(long *)(param_1 + 0x10) + (ulong)uVar11 * 4) =
             ((((int)fVar15 & 0xffU) << 8 | uVar8 & 0xff) << 8 | (int)fVar14 & 0xffU) << 8 |
             (int)fVar10 & 0xffU;
      } while (uVar1 != uVar7);
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::tonemap_image_compressive(basisu::image&, basisu::imagef const&) */

undefined8 basisu::tonemap_image_compressive(image *param_1,imagef *param_2)

{
  ushort *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint *puVar24;
  int iVar25;
  long in_FS_OFFSET;
  byte bVar26;
  void *local_968;
  ulong local_960;
  void *local_958;
  ulong local_950;
  undefined8 local_948 [32];
  int local_848 [256];
  uint local_448 [256];
  uint local_48 [2];
  long local_40;
  
  bVar26 = 0;
  uVar3 = *(uint *)(param_2 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(uint *)param_2;
  local_968 = (void *)0x0;
  local_960 = 0;
  iVar8 = uVar4 * uVar3;
  if (iVar8 == 0) {
    local_958 = (void *)0x0;
    local_950 = 0;
  }
  else {
    iVar10 = iVar8 * 3;
    basisu::elemental_vector::increase_capacity
              ((uint)&local_968,SUB41(iVar10,0),(uint)(iVar8 == -0x55555555),
               (_func_void_void_ptr_void_ptr_uint *)0x2,false);
    memset((void *)((long)local_968 + (local_960 & 0xffffffff) * 2),0,
           (ulong)(uint)(iVar10 - (int)local_960) * 2);
    local_960 = CONCAT44(local_960._4_4_,iVar10);
    local_958 = (void *)0x0;
    local_950 = 0;
    basisu::elemental_vector::increase_capacity
              ((uint)&local_958,SUB41(iVar10,0),(uint)(iVar8 == -0x55555555),
               (_func_void_void_ptr_void_ptr_uint *)0x2,false);
    memset((void *)((long)local_958 + (local_950 & 0xffffffff) * 2),0,
           (ulong)(uint)(iVar10 - (int)local_950) * 2);
    local_950 = CONCAT44(local_950._4_4_,iVar10);
  }
  if (uVar3 == 0) {
    piVar20 = local_848;
    for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
      piVar20[0] = 0;
      piVar20[1] = 0;
      piVar20 = piVar20 + ((ulong)bVar26 * -2 + 1) * 2;
    }
  }
  else {
    iVar10 = 0;
    iVar8 = 0x20;
    uVar15 = 0;
    do {
      iVar25 = iVar10 * 3;
      uVar18 = 0;
      if (uVar4 != 0) {
        do {
          iVar5 = *(int *)(param_2 + 8);
          lVar16 = 0;
          lVar14 = *(long *)(param_2 + 0x10);
          do {
            fVar2 = *(float *)((ulong)(uVar15 * iVar5 + uVar18) * 0x10 + lVar14 + lVar16 * 4);
            if ((fVar2 < 0.0) || (__LC34 < fVar2)) {
              uVar17 = 0;
              goto LAB_001088d2;
            }
            uVar7 = basist::float_to_half(fVar2);
            uVar13 = (ulong)(uint)(iVar25 + (int)lVar16);
            *(ushort *)((long)local_968 + uVar13 * 2) = uVar7;
            *(ushort *)((long)local_958 + uVar13 * 2) = uVar7 * 2;
            iVar9 = (uint)uVar7 * 2;
            if (uVar7 != 0) {
              iVar6 = 0;
              do {
                iVar12 = iVar6;
                iVar9 = iVar9 * 2;
                iVar6 = iVar12 + 1;
              } while (-1 < iVar9);
              iVar12 = iVar12 + -0xf;
              if (iVar12 < iVar8) {
                iVar8 = iVar12;
              }
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 != 3);
          uVar18 = uVar18 + 1;
          iVar25 = iVar25 + 3;
        } while (uVar4 != uVar18);
      }
      uVar15 = uVar15 + 1;
      iVar10 = iVar10 + uVar4;
    } while (uVar3 != uVar15);
    uVar15 = 0;
    piVar20 = local_848;
    for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
      piVar20[0] = 0;
      piVar20[1] = 0;
      piVar20 = piVar20 + ((ulong)bVar26 * -2 + 1) * 2;
    }
    uVar18 = uVar4 * 3 + 3;
    do {
      if (uVar4 != 0) {
        uVar23 = uVar18 + uVar4 * -3;
        do {
          uVar19 = uVar23 - 3;
          do {
            uVar13 = (ulong)uVar19;
            uVar19 = uVar19 + 1;
            puVar1 = (ushort *)((long)local_958 + uVar13 * 2);
            uVar11 = (uint)*puVar1 << ((byte)iVar8 & 0x1f);
            *puVar1 = (ushort)uVar11;
            local_848[uVar11 >> 8 & 0xff] = local_848[uVar11 >> 8 & 0xff] + 1;
          } while (uVar23 != uVar19);
          uVar23 = uVar23 + 3;
        } while (uVar18 != uVar23);
      }
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + uVar4 * 3;
    } while (uVar3 != uVar15);
  }
  puVar24 = local_448;
  uVar15 = 0;
  puVar21 = puVar24;
  for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
    puVar21[0] = 0xffffffff;
    puVar21[1] = 0xffffffff;
    puVar21 = puVar21 + (ulong)bVar26 * -4 + 2;
  }
  lVar14 = 0;
  do {
    if (*(int *)((long)local_848 + lVar14) != 0) {
      *(uint *)(lVar14 + (long)puVar24) = uVar15;
      uVar15 = uVar15 + 1;
    }
    lVar14 = lVar14 + 4;
  } while (lVar14 != 0x400);
  puVar22 = local_948;
  for (lVar14 = 0x20; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + (ulong)bVar26 * -2 + 1;
  }
  do {
    uVar18 = *puVar24;
    if (-1 < (int)uVar18) {
      if (1 < uVar15) {
        uVar18 = (uVar18 * 0xff + (uVar15 - 1 >> 1)) / (uVar15 - 1);
      }
      *puVar24 = uVar18;
      *(undefined1 *)((long)local_948 + (long)(int)uVar18) = 1;
    }
    puVar24 = puVar24 + 1;
  } while (local_48 != puVar24);
  image::crop(param_1,uVar4,uVar3,0xffffffff,(color_rgba *)&g_black_color,true);
  if ((uVar3 != 0) && (uVar4 != 0)) {
    uVar15 = 0;
    iVar8 = 0;
    do {
      iVar10 = iVar8 * 3;
      uVar18 = 0;
      do {
        uVar13 = 0;
        do {
          uVar23 = (int)uVar13 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)(*(int *)(param_1 + 8) * uVar15 + uVar18) * 4
                   + uVar13) =
               (char)local_448[*(byte *)((long)local_958 +
                                        (ulong)(uint)((int)uVar13 + iVar10) * 2 + 1)];
          uVar13 = (ulong)uVar23;
        } while (uVar23 != 3);
        uVar18 = uVar18 + 1;
        iVar10 = iVar10 + 3;
      } while (uVar18 != uVar4);
      uVar15 = uVar15 + 1;
      iVar8 = iVar8 + uVar4;
    } while (uVar3 != uVar15);
  }
  uVar17 = 1;
LAB_001088d2:
  if (local_958 != (void *)0x0) {
    free(local_958);
  }
  if (local_968 != (void *)0x0) {
    free(local_968);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::write_rgbe(basisu::vector<unsigned char>&, basisu::imagef&, basisu::rgbe_header_info&) */

undefined8 basisu::write_rgbe(vector *param_1,imagef *param_2,rgbe_header_info *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  float *pfVar13;
  long *plVar14;
  long *plVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  undefined4 *puVar19;
  size_t sVar20;
  uint uVar21;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  long in_FS_OFFSET;
  float fVar29;
  float fVar30;
  char local_90 [4];
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(ushort *)param_2;
  uVar6 = *(uint *)param_2;
  uVar17 = 0;
  if ((uVar6 != 0) && (uVar7 = *(uint *)(param_2 + 4), uVar7 != 0)) {
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    vector<unsigned_char>::reserve
              ((vector<unsigned_char> *)param_1,(ulong)(uVar7 * uVar6 * 4 + 0x400));
    append_string(param_1,"#?RADIANCE\n");
    if (param_3[0x38] != (rgbe_header_info)0x0) {
      string_format_abi_cxx11_(local_88,*(undefined8 *)(param_3 + 0x30),"EXPOSURE=%g\n");
      if (local_88._8_8_ != 0) {
        append_string(param_1,(char *)local_88._0_8_);
      }
      if ((undefined1 *)local_88._0_8_ != local_78) {
        operator_delete((void *)local_88._0_8_,local_78._0_8_ + 1);
      }
    }
    if (param_3[0x28] != (rgbe_header_info)0x0) {
      string_format_abi_cxx11_(local_88,*(undefined8 *)(param_3 + 0x20),"GAMMA=%g\n");
      if (local_88._8_8_ != 0) {
        append_string(param_1,(char *)local_88._0_8_);
      }
      if ((undefined1 *)local_88._0_8_ != local_78) {
        operator_delete((void *)local_88._0_8_,local_78._0_8_ + 1);
      }
    }
    append_string(param_1,"FORMAT=32-bit_rle_rgbe\n\n");
    string_format_abi_cxx11_(local_88,"-Y %u +X %u\n",(ulong)uVar7,(ulong)uVar6);
    if (local_88._8_8_ != 0) {
      append_string(param_1,(char *)local_88._0_8_);
    }
    if ((undefined1 *)local_88._0_8_ != local_78) {
      operator_delete((void *)local_88._0_8_,local_78._0_8_ + 1);
    }
    fVar9 = _LC74;
    uVar24 = (uint)param_1;
    if (uVar6 - 8 < 0x7ff8) {
      plVar22 = &local_48;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      plVar14 = (long *)local_88;
      do {
        uVar21 = *(uint *)(plVar14 + 1);
        if (uVar6 != uVar21) {
          if (uVar21 <= uVar6) {
            if (*(uint *)((long)plVar14 + 0xc) < uVar6) {
              basisu::elemental_vector::increase_capacity
                        ((uint)plVar14,SUB41(uVar6,0),(uint)(uVar21 + 1 == uVar6),
                         (_func_void_void_ptr_void_ptr_uint *)0x1,false);
              uVar21 = *(uint *)(plVar14 + 1);
            }
            memset((void *)((ulong)uVar21 + *plVar14),0,(ulong)(uVar6 - uVar21));
          }
          *(uint *)(plVar14 + 1) = uVar6;
        }
        fVar9 = _LC74;
        plVar14 = plVar14 + 2;
      } while (plVar14 != plVar22);
      uVar21 = 0;
      do {
        uVar25 = (ulong)*(uint *)(param_1 + 8);
        local_8c = CONCAT22(uVar5 << 8 | uVar5 >> 8,0x202);
        if (uVar25 + 4 < 0x100000000) {
          uVar28 = *(uint *)(param_1 + 8) + 4;
          if (*(uint *)(param_1 + 0xc) < uVar28) {
            basisu::elemental_vector::increase_capacity
                      (uVar24,SUB41(uVar28,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
            sVar20 = (size_t)(uVar28 - *(uint *)(param_1 + 8));
            uVar27 = (ulong)*(uint *)(param_1 + 8);
          }
          else {
            sVar20 = 4;
            uVar27 = uVar25;
          }
          memset((void *)(uVar27 + *(long *)param_1),0,sVar20);
          *(uint *)(param_1 + 8) = uVar28;
        }
        uVar27 = 0;
        *(uint *)(*(long *)param_1 + uVar25) = local_8c;
        do {
          pfVar13 = (float *)((ulong)(*(int *)(param_2 + 8) * uVar21 + (int)uVar27) * 0x10 +
                             *(long *)(param_2 + 0x10));
          fVar1 = *pfVar13;
          fVar2 = pfVar13[1];
          fVar3 = pfVar13[2];
          fVar30 = fVar1;
          if (fVar1 <= fVar2) {
            fVar30 = fVar2;
          }
          if (fVar30 <= fVar3) {
            fVar30 = fVar3;
          }
          puVar19 = &local_8c;
          if (fVar9 <= fVar30) {
            fVar29 = frexpf(fVar30,(int *)local_90);
            fVar30 = (fVar29 * __LC75) / fVar30;
            uVar28 = (int)(fVar1 * fVar30);
            if (0xff < (int)(fVar1 * fVar30)) {
              uVar28 = 0xff;
            }
            if ((int)uVar28 < 0) {
              uVar28 = 0;
            }
            uVar23 = (int)(fVar2 * fVar30);
            if (0xff < (int)(fVar2 * fVar30)) {
              uVar23 = 0xff;
            }
            if ((int)uVar23 < 0) {
              uVar23 = 0;
            }
            uVar26 = (int)(fVar30 * fVar3);
            if (0xff < (int)(fVar30 * fVar3)) {
              uVar26 = 0xff;
            }
            if ((int)uVar26 < 0) {
              uVar26 = 0;
            }
            local_8c = (((uint)(byte)(local_90[0] + 0x80) << 8 | uVar26 & 0xff) << 8 | uVar23 & 0xff
                       ) << 8 | uVar28 & 0xff;
            plVar14 = (long *)local_88;
          }
          else {
            local_8c = 0;
            plVar14 = (long *)local_88;
          }
          do {
            plVar15 = plVar14 + 2;
            *(undefined1 *)(*plVar14 + uVar27) = *(undefined1 *)puVar19;
            plVar14 = plVar15;
            puVar19 = (undefined4 *)((long)puVar19 + 1);
          } while (plVar22 != plVar15);
          uVar27 = uVar27 + 1;
          plVar14 = (long *)local_88;
        } while (uVar27 != uVar6);
        do {
          uVar28 = 0xffffffff;
          uVar25 = 0;
          do {
            iVar12 = (int)uVar25;
            uVar26 = uVar6 - iVar12;
            cVar4 = *(char *)(*plVar14 + uVar25);
            uVar23 = 0x7f;
            if (uVar26 < 0x80) {
              uVar23 = uVar26;
            }
            if (uVar26 == 1) {
LAB_00108f78:
              uVar26 = iVar12 + 1;
              if ((int)uVar28 < 0) {
                uVar28 = *(uint *)(param_1 + 8);
                uVar23 = uVar28;
                if (*(uint *)(param_1 + 0xc) <= uVar28) {
                  basisu::elemental_vector::increase_capacity
                            (uVar24,(bool)((char)uVar28 + '\x01'),1,
                             (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                  uVar23 = *(uint *)(param_1 + 8);
                }
                *(undefined1 *)(*(long *)param_1 + (ulong)uVar23) = 0;
                *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
              }
              cVar11 = *(char *)((long)(int)uVar28 + *(long *)param_1) + '\x01';
              *(char *)((long)(int)uVar28 + *(long *)param_1) = cVar11;
              uVar23 = *(uint *)(param_1 + 8);
              if (cVar11 == -0x80) {
                uVar28 = 0xffffffff;
              }
              if (*(uint *)(param_1 + 0xc) <= uVar23) {
                basisu::elemental_vector::increase_capacity
                          (uVar24,(bool)((char)uVar23 + '\x01'),1,
                           (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                uVar23 = *(uint *)(param_1 + 8);
              }
              *(char *)(*(long *)param_1 + (ulong)uVar23) = cVar4;
              iVar12 = *(int *)(param_1 + 8);
            }
            else {
              uVar26 = 1;
              pcVar16 = (char *)(*plVar14 + (ulong)(iVar12 + 1));
              do {
                if (cVar4 != *pcVar16) break;
                uVar26 = uVar26 + 1;
                pcVar16 = pcVar16 + 1;
              } while (uVar26 < uVar23);
              if (((uVar28 == 0xffffffff) + uVar26 < 4) || (uVar26 < 3)) goto LAB_00108f78;
              uVar28 = *(uint *)(param_1 + 8);
              if (*(uint *)(param_1 + 0xc) <= uVar28) {
                basisu::elemental_vector::increase_capacity
                          (uVar24,(bool)((char)uVar28 + '\x01'),1,
                           (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                uVar28 = *(uint *)(param_1 + 8);
              }
              *(char *)(*(long *)param_1 + (ulong)uVar28) = (char)uVar26 + -0x80;
              iVar8 = *(int *)(param_1 + 8);
              uVar23 = iVar8 + 1;
              *(uint *)(param_1 + 8) = uVar23;
              if (*(uint *)(param_1 + 0xc) <= uVar23) {
                basisu::elemental_vector::increase_capacity
                          (uVar24,(bool)((char)iVar8 + '\x02'),1,
                           (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                uVar23 = *(uint *)(param_1 + 8);
              }
              uVar26 = iVar12 + uVar26;
              uVar28 = 0xffffffff;
              *(char *)(*(long *)param_1 + (ulong)uVar23) = cVar4;
              iVar12 = *(int *)(param_1 + 8);
            }
            uVar25 = (ulong)uVar26;
            *(int *)(param_1 + 8) = iVar12 + 1;
          } while (uVar26 < uVar6);
          plVar14 = plVar14 + 2;
        } while (plVar22 != plVar14);
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar7);
      do {
        plVar14 = plVar22 + -2;
        plVar22 = plVar22 + -2;
        if ((void *)*plVar14 != (void *)0x0) {
          free((void *)*plVar14);
        }
      } while (plVar22 != (long *)local_88);
      uVar17 = 1;
    }
    else {
      uVar21 = 0;
      do {
        uVar28 = 0;
        do {
          uVar23 = 0;
          pfVar13 = (float *)((ulong)(*(int *)(param_2 + 8) * uVar21 + uVar28) * 0x10 +
                             *(long *)(param_2 + 0x10));
          fVar1 = *pfVar13;
          fVar2 = pfVar13[1];
          fVar3 = pfVar13[2];
          fVar30 = fVar1;
          if (fVar1 <= fVar2) {
            fVar30 = fVar2;
          }
          if (fVar30 <= fVar3) {
            fVar30 = fVar3;
          }
          if (fVar9 <= fVar30) {
            fVar29 = frexpf(fVar30,(int *)local_90);
            fVar30 = (fVar29 * __LC75) / fVar30;
            iVar12 = (int)(fVar1 * fVar30);
            if (0xff < iVar12) {
              iVar12 = 0xff;
            }
            bVar10 = (byte)iVar12;
            if (iVar12 < 0) {
              bVar10 = 0;
            }
            uVar23 = (int)(fVar2 * fVar30);
            if (0xff < (int)(fVar2 * fVar30)) {
              uVar23 = 0xff;
            }
            if ((int)uVar23 < 0) {
              uVar23 = 0;
            }
            iVar12 = (int)(fVar30 * fVar3);
            if (0xff < iVar12) {
              iVar12 = 0xff;
            }
            uVar18 = (char)iVar12;
            if (iVar12 < 0) {
              uVar18 = 0;
            }
            uVar23 = ((uint)CONCAT11(local_90[0] + -0x80,uVar18) << 8 | uVar23 & 0xff) << 8 |
                     (uint)bVar10;
          }
          uVar25 = (ulong)*(uint *)(param_1 + 8);
          if (uVar25 + 4 < 0x100000000) {
            uVar26 = *(uint *)(param_1 + 8) + 4;
            if (*(uint *)(param_1 + 0xc) < uVar26) {
              basisu::elemental_vector::increase_capacity
                        (uVar24,SUB41(uVar26,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
              sVar20 = (size_t)(uVar26 - *(uint *)(param_1 + 8));
              uVar27 = (ulong)*(uint *)(param_1 + 8);
            }
            else {
              sVar20 = 4;
              uVar27 = uVar25;
            }
            memset((void *)(uVar27 + *(long *)param_1),0,sVar20);
            *(uint *)(param_1 + 8) = uVar26;
          }
          uVar28 = uVar28 + 1;
          *(uint *)(*(long *)param_1 + uVar25) = uVar23;
        } while (uVar6 != uVar28);
        uVar21 = uVar21 + 1;
      } while (uVar7 != uVar21);
      uVar17 = 1;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}



/* basisu::write_rgbe(char const*, basisu::imagef&, basisu::rgbe_header_info&) */

ulong basisu::write_rgbe(char *param_1,imagef *param_2,rgbe_header_info *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  FILE *__stream;
  ulong uVar4;
  long in_FS_OFFSET;
  void *local_28;
  ulong local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (void *)0x0;
  local_20 = 0;
  cVar1 = write_rgbe((vector *)&local_28,param_2,param_3);
  if (cVar1 != '\0') {
    if ((int)local_20 != 0) {
      uVar2 = write_data_to_file(param_1,local_28,local_20 & 0xffffffff);
      uVar4 = (ulong)uVar2;
      goto LAB_001092bb;
    }
    __stream = fopen64(param_1,"wb");
    if (__stream != (FILE *)0x0) {
      iVar3 = fclose(__stream);
      uVar4 = CONCAT71((int7)((ulong)param_1 >> 8),iVar3 != -1);
      goto LAB_001092bb;
    }
  }
  uVar4 = 0;
LAB_001092bb:
  if (local_28 != (void *)0x0) {
    free(local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::bitwise_coder::emit_huffman_table(basisu::huffman_encoding_table const&) */

int __thiscall
basisu::bitwise_coder::emit_huffman_table(bitwise_coder *this,huffman_encoding_table *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined1 uVar5;
  ushort uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  long lVar11;
  ulong uVar12;
  ushort uVar13;
  uint uVar14;
  void *__ptr;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  long lVar20;
  long in_FS_OFFSET;
  int local_b0;
  uint local_90;
  uint local_8c;
  void *local_88;
  undefined8 local_80;
  uint *local_78;
  ulong local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  long local_40;
  
  lVar4 = *(long *)(this + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < *(int *)(param_1 + 0x18) + -1) {
    lVar11 = (long)(*(int *)(param_1 + 0x18) + -1);
    do {
      if (*(char *)(*(long *)(param_1 + 0x10) + lVar11) != '\0') {
        local_b0 = (int)lVar11 + 1;
        lVar11 = (long)local_b0;
        goto LAB_001093aa;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < (int)lVar11);
  }
  local_b0 = 0;
  lVar11 = 0;
LAB_001093aa:
  iVar3 = *(int *)(this + 0x14);
  uVar8 = iVar3 + 0xe;
  *(long *)(this + 0x18) = lVar4 + 0xe;
  *(uint *)(this + 0x14) = uVar8;
  uVar18 = lVar11 << ((byte)iVar3 & 0x3f) | (ulong)*(uint *)(this + 0x10);
  uVar14 = (uint)this;
  while (7 < uVar8) {
    uVar8 = *(uint *)(this + 8);
    uVar16 = (ulong)uVar8;
    uVar5 = (undefined1)uVar18;
    uVar15 = uVar8 + 1;
    if (uVar8 != 0xffffffff) {
      sVar10 = 1;
      if (*(uint *)(this + 0xc) < uVar15) {
        basisu::elemental_vector::increase_capacity
                  (uVar14,SUB41(uVar15,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar8 = *(uint *)(this + 8);
        sVar10 = (size_t)(uVar15 - uVar8);
      }
      memset((void *)((ulong)uVar8 + *(long *)this),0,sVar10);
    }
    *(uint *)(this + 8) = uVar15;
    uVar18 = uVar18 >> 8;
    *(undefined1 *)(*(long *)this + uVar16) = uVar5;
    uVar8 = *(int *)(this + 0x14) - 8;
    *(uint *)(this + 0x14) = uVar8;
  }
  *(uint *)(this + 0x10) = (uint)uVar18 & 0xff;
  if (local_b0 != 0) {
    local_88 = (void *)0x0;
    uVar18 = 0;
    local_80 = 0;
    vector<unsigned_short>::reserve((vector<unsigned_short> *)&local_88,(ulong)(local_b0 + 0x10));
    local_90 = 0;
    local_8c = 0;
    uVar8 = 0xffffffff;
LAB_00109525:
    do {
      if (local_b0 == (int)uVar18) {
        end_zero_run((vector *)&local_88,&local_90);
        uVar9 = 0xff;
        if (uVar8 == 0xff) {
LAB_00109555:
          local_8c = local_8c + 1;
          if (local_8c == 0x86) {
            end_nonzero_run((vector *)&local_88,&local_8c,uVar8);
          }
          uVar18 = uVar18 + 1;
          uVar8 = uVar9;
          if (uVar18 == local_b0 + 1) break;
          goto LAB_00109525;
        }
        end_nonzero_run((vector *)&local_88,&local_8c,uVar8);
LAB_00109705:
        uVar8 = 0xff;
      }
      else {
        bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + uVar18);
        uVar15 = (uint)bVar1;
        if (uVar15 == 0) {
          end_nonzero_run((vector *)&local_88,&local_8c,uVar8);
          local_90 = local_90 + 1;
          if (local_90 == 0x8a) {
            uVar8 = 0;
            end_zero_run((vector *)&local_88,&local_90);
          }
          else {
            uVar8 = 0;
          }
        }
        else {
          end_zero_run((vector *)&local_88,&local_90);
          uVar9 = uVar8;
          if (uVar15 == uVar8) goto LAB_00109555;
          end_nonzero_run((vector *)&local_88,&local_8c,uVar8);
          if (uVar15 == 0xff) goto LAB_00109705;
          if (local_80._4_4_ <= (uint)local_80) {
            basisu::elemental_vector::increase_capacity
                      ((uint)(vector<unsigned_short> *)&local_88,(bool)((char)local_80 + '\x01'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x2,false);
          }
          *(ushort *)((long)local_88 + (ulong)(uint)local_80 * 2) = (ushort)bVar1;
          local_80 = CONCAT44(local_80._4_4_,(uint)local_80 + 1);
          uVar8 = uVar15;
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != local_b0 + 1);
    local_78 = (uint *)0x0;
    local_70 = 0;
    basisu::elemental_vector::increase_capacity
              ((uint)&local_78,true,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    memset(local_78 + (local_70 & 0xffffffff),0,(ulong)(0x15 - (int)local_70) << 2);
    local_70 = CONCAT44(local_70._4_4_,0x15);
    if ((uint)local_80 != 0) {
      lVar11 = 0;
      do {
        lVar20 = lVar11 * 2;
        lVar11 = lVar11 + 1;
        local_78[*(ushort *)((long)local_88 + lVar20) & 0x3f] =
             local_78[*(ushort *)((long)local_88 + lVar20) & 0x3f] + 1;
      } while ((uint)lVar11 < (uint)local_80);
    }
    local_50 = 0;
    local_58 = (void *)0x0;
    local_60 = 0;
    local_68 = (void *)0x0;
    cVar7 = huffman_encoding_table::init((huffman_encoding_table *)&local_68,0x15,local_78,7);
    if (cVar7 == '\0') {
      local_b0 = 0;
      __ptr = local_58;
    }
    else {
      uVar18 = 0x15;
      do {
        uVar8 = (int)uVar18 - 1;
        uVar17 = (ulong)uVar8;
        uVar16 = uVar18;
        if (*(char *)((long)local_58 + (ulong)(byte)(&g_huffman_sorted_codelength_codes)[uVar17]) !=
            '\0') goto LAB_00109790;
        uVar18 = uVar17;
      } while (uVar8 != 0);
      uVar16 = 0;
LAB_00109790:
      lVar11 = *(long *)(this + 0x18) + 5;
      uVar16 = uVar16 << ((byte)*(int *)(this + 0x14) & 0x3f) | (ulong)*(uint *)(this + 0x10);
      uVar8 = *(int *)(this + 0x14) + 5;
      *(long *)(this + 0x18) = lVar11;
      *(uint *)(this + 0x14) = uVar8;
      uVar17 = uVar16;
      if (7 < uVar8) {
        do {
          uVar8 = *(uint *)(this + 8);
          uVar12 = (ulong)uVar8;
          uVar15 = uVar8 + 1;
          if (uVar8 != 0xffffffff) {
            if (*(uint *)(this + 0xc) < uVar15) {
              basisu::elemental_vector::increase_capacity
                        (uVar14,SUB41(uVar15,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
              uVar8 = *(uint *)(this + 8);
              sVar10 = (size_t)(uVar15 - uVar8);
            }
            else {
              sVar10 = 1;
            }
            memset((void *)((ulong)uVar8 + *(long *)this),0,sVar10);
          }
          *(uint *)(this + 8) = uVar15;
          uVar17 = uVar16 >> 8;
          *(char *)(*(long *)this + uVar12) = (char)uVar16;
          iVar3 = *(int *)(this + 0x14);
          *(uint *)(this + 0x14) = iVar3 - 8U;
          uVar16 = uVar17;
        } while (7 < iVar3 - 8U);
        lVar11 = *(long *)(this + 0x18);
      }
      uVar17 = uVar17 & 0xff;
      *(int *)(this + 0x10) = (int)uVar17;
      __ptr = local_58;
      if ((int)uVar18 != 0) {
        pbVar19 = &g_huffman_sorted_codelength_codes;
        do {
          iVar3 = *(int *)(this + 0x14);
          lVar11 = lVar11 + 3;
          bVar1 = *(byte *)((long)__ptr + (ulong)*pbVar19);
          *(long *)(this + 0x18) = lVar11;
          uVar8 = iVar3 + 3;
          *(uint *)(this + 0x14) = uVar8;
          uVar17 = uVar17 | (ulong)bVar1 << ((byte)iVar3 & 0x3f);
          if (7 < uVar8) {
            do {
              uVar8 = *(uint *)(this + 8);
              uVar16 = (ulong)uVar8;
              uVar5 = (undefined1)uVar17;
              uVar15 = uVar8 + 1;
              if (uVar8 != 0xffffffff) {
                sVar10 = 1;
                if (*(uint *)(this + 0xc) < uVar15) {
                  basisu::elemental_vector::increase_capacity
                            (uVar14,SUB41(uVar15,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false
                            );
                  uVar8 = *(uint *)(this + 8);
                  sVar10 = (size_t)(uVar15 - uVar8);
                }
                memset((void *)((ulong)uVar8 + *(long *)this),0,sVar10);
              }
              *(uint *)(this + 8) = uVar15;
              uVar17 = uVar17 >> 8;
              *(undefined1 *)(*(long *)this + uVar16) = uVar5;
              iVar3 = *(int *)(this + 0x14);
              *(uint *)(this + 0x14) = iVar3 - 8U;
            } while (7 < iVar3 - 8U);
            lVar11 = *(long *)(this + 0x18);
            __ptr = local_58;
          }
          uVar17 = uVar17 & 0xff;
          pbVar19 = pbVar19 + 1;
          *(int *)(this + 0x10) = (int)uVar17;
        } while (pbVar19 != &g_huffman_sorted_codelength_codes + uVar18);
      }
      if ((uint)local_80 != 0) {
        lVar20 = 0;
        do {
          uVar2 = *(ushort *)((long)local_88 + lVar20 * 2);
          uVar6 = uVar2 & 0x3f;
          bVar1 = *(byte *)((long)__ptr + (ulong)(uVar2 & 0x3f));
          uVar13 = uVar2 >> 6;
          if (bVar1 != 0) {
            iVar3 = *(int *)(this + 0x14);
            lVar11 = lVar11 + (ulong)bVar1;
            uVar2 = *(ushort *)((long)local_68 + (ulong)(uVar2 & 0x3f) * 2);
            uVar8 = (uint)bVar1 + iVar3;
            *(long *)(this + 0x18) = lVar11;
            *(uint *)(this + 0x14) = uVar8;
            uVar18 = (ulong)uVar2 << ((byte)iVar3 & 0x3f) | (ulong)*(uint *)(this + 0x10);
            if (7 < uVar8) {
              do {
                uVar8 = *(uint *)(this + 8);
                uVar16 = (ulong)uVar8;
                uVar5 = (undefined1)uVar18;
                uVar15 = uVar8 + 1;
                if (uVar8 != 0xffffffff) {
                  sVar10 = 1;
                  if (*(uint *)(this + 0xc) < uVar15) {
                    basisu::elemental_vector::increase_capacity
                              (uVar14,SUB41(uVar15,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,
                               false);
                    uVar8 = *(uint *)(this + 8);
                    sVar10 = (size_t)(uVar15 - uVar8);
                  }
                  memset((void *)((ulong)uVar8 + *(long *)this),0,sVar10);
                }
                *(uint *)(this + 8) = uVar15;
                uVar18 = uVar18 >> 8;
                *(undefined1 *)(*(long *)this + uVar16) = uVar5;
                iVar3 = *(int *)(this + 0x14);
                *(uint *)(this + 0x14) = iVar3 - 8U;
              } while (7 < iVar3 - 8U);
              lVar11 = *(long *)(this + 0x18);
            }
            *(uint *)(this + 0x10) = (uint)uVar18 & 0xff;
          }
          if (uVar6 == 0x11) {
            iVar3 = *(int *)(this + 0x14);
            lVar11 = lVar11 + 3;
            *(long *)(this + 0x18) = lVar11;
            uVar8 = iVar3 + 3;
            *(uint *)(this + 0x14) = uVar8;
            uVar16 = (ulong)uVar13 << ((byte)iVar3 & 0x3f) | (ulong)*(uint *)(this + 0x10);
            uVar18 = uVar16;
            if (7 < uVar8) {
              do {
                uVar8 = *(uint *)(this + 8);
                uVar17 = (ulong)uVar8;
                uVar15 = uVar8 + 1;
                if (uVar8 != 0xffffffff) {
                  if (*(uint *)(this + 0xc) < uVar15) {
                    basisu::elemental_vector::increase_capacity
                              (uVar14,SUB41(uVar15,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,
                               false);
                    uVar8 = *(uint *)(this + 8);
                    sVar10 = (size_t)(uVar15 - uVar8);
                  }
                  else {
                    sVar10 = 1;
                  }
                  memset((void *)((ulong)uVar8 + *(long *)this),0,sVar10);
                }
                *(uint *)(this + 8) = uVar15;
                uVar16 = uVar18 >> 8;
                *(char *)(*(long *)this + uVar17) = (char)uVar18;
                iVar3 = *(int *)(this + 0x14);
                *(uint *)(this + 0x14) = iVar3 - 8U;
                uVar18 = uVar16;
              } while (7 < iVar3 - 8U);
LAB_00109b30:
              lVar11 = *(long *)(this + 0x18);
            }
LAB_00109b34:
            *(uint *)(this + 0x10) = (uint)uVar16 & 0xff;
          }
          else {
            if (uVar6 == 0x12) {
              iVar3 = *(int *)(this + 0x14);
              lVar11 = lVar11 + 7;
              *(long *)(this + 0x18) = lVar11;
              uVar8 = iVar3 + 7;
              *(uint *)(this + 0x14) = uVar8;
              uVar16 = (ulong)uVar13 << ((byte)iVar3 & 0x3f) | (ulong)*(uint *)(this + 0x10);
              uVar18 = uVar16;
              if (7 < uVar8) {
                do {
                  uVar8 = *(uint *)(this + 8);
                  uVar17 = (ulong)uVar8;
                  uVar15 = uVar8 + 1;
                  if (uVar8 != 0xffffffff) {
                    if (*(uint *)(this + 0xc) < uVar15) {
                      basisu::elemental_vector::increase_capacity
                                (uVar14,SUB41(uVar15,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,
                                 false);
                      uVar8 = *(uint *)(this + 8);
                      sVar10 = (size_t)(uVar15 - uVar8);
                    }
                    else {
                      sVar10 = 1;
                    }
                    memset((void *)((ulong)uVar8 + *(long *)this),0,sVar10);
                  }
                  *(uint *)(this + 8) = uVar15;
                  uVar16 = uVar18 >> 8;
                  *(char *)(*(long *)this + uVar17) = (char)uVar18;
                  iVar3 = *(int *)(this + 0x14);
                  *(uint *)(this + 0x14) = iVar3 - 8U;
                  uVar18 = uVar16;
                } while (7 < iVar3 - 8U);
                goto LAB_00109b30;
              }
              goto LAB_00109b34;
            }
            if (uVar6 == 0x13) {
              lVar11 = lVar11 + 2;
              *(long *)(this + 0x18) = lVar11;
              uVar16 = (ulong)uVar13 << ((byte)*(int *)(this + 0x14) & 0x3f) |
                       (ulong)*(uint *)(this + 0x10);
              uVar8 = *(int *)(this + 0x14) + 2;
              *(uint *)(this + 0x14) = uVar8;
              uVar18 = uVar16;
              if (7 < uVar8) {
                do {
                  uVar8 = *(uint *)(this + 8);
                  uVar17 = (ulong)uVar8;
                  uVar15 = uVar8 + 1;
                  if (uVar8 != 0xffffffff) {
                    if (*(uint *)(this + 0xc) < uVar15) {
                      basisu::elemental_vector::increase_capacity
                                (uVar14,SUB41(uVar15,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,
                                 false);
                      uVar8 = *(uint *)(this + 8);
                      sVar10 = (size_t)(uVar15 - uVar8);
                    }
                    else {
                      sVar10 = 1;
                    }
                    memset((void *)((ulong)uVar8 + *(long *)this),0,sVar10);
                  }
                  *(uint *)(this + 8) = uVar15;
                  uVar16 = uVar18 >> 8;
                  *(char *)(*(long *)this + uVar17) = (char)uVar18;
                  iVar3 = *(int *)(this + 0x14);
                  *(uint *)(this + 0x14) = iVar3 - 8U;
                  uVar18 = uVar16;
                } while (7 < iVar3 - 8U);
                lVar11 = *(long *)(this + 0x18);
              }
              *(uint *)(this + 0x10) = (uint)uVar16 & 0xff;
            }
            else if (uVar6 == 0x14) {
              lVar11 = lVar11 + 7;
              *(long *)(this + 0x18) = lVar11;
              uVar16 = (ulong)uVar13 << ((byte)*(int *)(this + 0x14) & 0x3f) |
                       (ulong)*(uint *)(this + 0x10);
              uVar8 = *(int *)(this + 0x14) + 7;
              *(uint *)(this + 0x14) = uVar8;
              uVar18 = uVar16;
              if (7 < uVar8) {
                do {
                  uVar8 = *(uint *)(this + 8);
                  uVar17 = (ulong)uVar8;
                  uVar15 = uVar8 + 1;
                  if (uVar8 != 0xffffffff) {
                    if (*(uint *)(this + 0xc) < uVar15) {
                      basisu::elemental_vector::increase_capacity
                                (uVar14,SUB41(uVar15,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,
                                 false);
                      uVar8 = *(uint *)(this + 8);
                      sVar10 = (size_t)(uVar15 - uVar8);
                    }
                    else {
                      sVar10 = 1;
                    }
                    memset((void *)((ulong)uVar8 + *(long *)this),0,sVar10);
                  }
                  *(uint *)(this + 8) = uVar15;
                  uVar16 = uVar18 >> 8;
                  *(char *)(*(long *)this + uVar17) = (char)uVar18;
                  iVar3 = *(int *)(this + 0x14);
                  *(uint *)(this + 0x14) = iVar3 - 8U;
                  uVar18 = uVar16;
                } while (7 < iVar3 - 8U);
                goto LAB_00109b30;
              }
              goto LAB_00109b34;
            }
          }
          lVar20 = lVar20 + 1;
          __ptr = local_58;
        } while ((uint)lVar20 < (uint)local_80);
      }
      local_b0 = (int)lVar4;
      local_b0 = (int)lVar11 - local_b0;
    }
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    if (local_68 != (void *)0x0) {
      free(local_68);
    }
    if (local_78 != (uint *)0x0) {
      free(local_78);
    }
    if (local_88 != (void *)0x0) {
      free(local_88);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::image_resample(basisu::image const&, basisu::image&, bool, char const*, float, bool,
   unsigned int, unsigned int) */

uint basisu::image_resample
               (image *param_1,image *param_2,bool param_3,char *param_4,float param_5,bool param_6,
               uint param_7,uint param_8)

{
  Resampler **ppRVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  Resampler *pRVar5;
  ulong uVar6;
  Resampler *pRVar7;
  ulong uVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  Resampler **ppRVar12;
  uint uVar13;
  long lVar14;
  void *pvVar15;
  uint uVar16;
  long lVar17;
  vector<float,std::allocator<float>> *pvVar18;
  ulong uVar19;
  int iVar20;
  vector<float,std::allocator<float>> *pvVar21;
  long in_FS_OFFSET;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  uint local_250c;
  Resampler *local_24c8 [4];
  vector<float,std::allocator<float>> local_24a8 [16];
  undefined1 local_2498 [16];
  undefined1 local_2488 [16];
  undefined1 local_2478 [16];
  undefined1 local_2468 [16];
  undefined1 local_2458 [16];
  vector<float,std::allocator<float>> local_2448 [1024];
  undefined1 local_2048 [8200];
  long local_40;
  
  uVar2 = *(ulong *)param_1;
  uVar13 = *(uint *)param_2;
  uVar3 = *(uint *)(param_2 + 4);
  uVar26 = *(uint *)(param_1 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = *(uint *)param_1;
  uVar4 = uVar16;
  if (uVar16 <= uVar26) {
    uVar4 = uVar26;
  }
  if (uVar4 < 0x4001) {
    if ((((uVar16 != 0) && (uVar26 != 0)) && (uVar13 != 0)) && ((uVar3 != 0 && (param_8 - 1 < 4))))
    {
      uVar4 = uVar3;
      if (uVar3 <= uVar13) {
        uVar4 = uVar13;
      }
      if (uVar4 < 0x4001) {
        uVar4 = CONCAT31((int3)(uVar4 >> 8),uVar13 == uVar16 && uVar3 == uVar26);
        if (uVar13 != uVar16 || uVar3 != uVar26) {
          if (param_3) {
            lVar17 = 0;
            fVar23 = _LC4;
            fVar27 = _LC3;
            do {
              fVar25 = (float)(int)lVar17 * fVar27;
              if (fVar25 < fVar23) {
                fVar24 = fVar25 * __LC5;
                if (fVar25 * __LC5 < 0.0) goto LAB_0010a481;
              }
              else {
                fVar25 = powf((fVar25 + __LC6) * __LC7,_LC8);
                fVar23 = _LC4;
                fVar27 = _LC3;
                if (fVar25 < 0.0) {
LAB_0010a481:
                  fVar24 = 0.0;
                }
                else {
                  fVar24 = _LC1;
                  if (fVar25 <= _LC1) {
                    fVar24 = fVar25;
                  }
                }
              }
              *(float *)(local_2448 + lVar17 * 4) = fVar24;
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0x100);
            lVar17 = 0;
            fVar23 = _LC21;
            fVar27 = _LC78;
            do {
              fVar25 = (float)(int)lVar17 * fVar27;
              if (fVar23 <= fVar25) {
                fVar23 = powf(fVar25,_LC23);
                fVar25 = fVar23 * __LC24 - __LC6;
                fVar23 = _LC21;
                fVar27 = _LC78;
                if (fVar25 < 0.0) goto LAB_0010a58c;
                uVar9 = 0xff;
                if (fVar25 <= _LC1) goto LAB_0010a530;
              }
              else {
                fVar25 = fVar25 * __LC22;
                if (0.0 <= fVar25) {
LAB_0010a530:
                  iVar20 = (int)(fVar25 * _LC67 + _LC79);
                  if (0xff < iVar20) {
                    iVar20 = 0xff;
                  }
                  uVar9 = (char)iVar20;
                  if (iVar20 < 0) {
                    uVar9 = 0;
                  }
                }
                else {
LAB_0010a58c:
                  uVar9 = 0;
                }
              }
              local_2048[lVar17] = uVar9;
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0x2000);
          }
          pvVar21 = local_2448;
          uVar26 = (uint)(uVar2 >> 0x20);
          local_24a8[0] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[1] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[2] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[3] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[4] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[5] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[6] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[7] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[8] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[9] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[10] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[0xb] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[0xc] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[0xd] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[0xe] = (vector<float,std::allocator<float>>)0x0;
          local_24a8[0xf] = (vector<float,std::allocator<float>>)0x0;
          local_2498 = (undefined1  [16])0x0;
          local_2488 = (undefined1  [16])0x0;
          local_2478 = (undefined1  [16])0x0;
          local_2468 = (undefined1  [16])0x0;
          local_2458 = (undefined1  [16])0x0;
          pRVar5 = (Resampler *)operator_new(0x78);
          iVar20 = (param_6 ^ 1) * 2;
          basisu::Resampler::Resampler
                    (pRVar5,uVar2 & 0xffffffff,uVar26,uVar13,uVar3,iVar20,param_4,0,0);
          uVar6 = uVar2 & 0xffffffff;
          local_24c8[0] = pRVar5;
          std::vector<float,std::allocator<float>>::_M_default_append(local_24a8,uVar6);
          if (param_8 != 1) {
            pvVar18 = (vector<float,std::allocator<float>> *)(local_2498 + 8);
            ppRVar12 = local_24c8;
            do {
              pRVar7 = (Resampler *)operator_new(0x78);
              basisu::Resampler::Resampler
                        (pRVar7,uVar2 & 0xffffffff,uVar26,uVar13,uVar3,iVar20,param_4,
                         *(undefined8 *)(pRVar5 + 0x30),*(undefined8 *)(pRVar5 + 0x38));
              lVar17 = *(long *)(pvVar18 + 8);
              lVar11 = *(long *)pvVar18;
              ppRVar12[1] = pRVar7;
              uVar8 = lVar17 - lVar11 >> 2;
              if (uVar8 < uVar6) {
                std::vector<float,std::allocator<float>>::_M_default_append(pvVar18,uVar6 - uVar8);
              }
              else if ((uVar6 < uVar8) && (lVar11 = lVar11 + uVar6 * 4, lVar17 != lVar11)) {
                *(long *)(pvVar18 + 8) = lVar11;
              }
              ppRVar12 = ppRVar12 + 1;
              pvVar18 = pvVar18 + 0x18;
            } while (ppRVar12 != local_24c8 + (ulong)(param_8 - 2) + 1);
          }
          ppRVar12 = local_24c8;
          iVar20 = 0;
          local_250c = 0;
LAB_0010a0bb:
          lVar11 = 0;
          lVar17 = *(long *)(param_1 + 0x10) + (ulong)(local_250c * *(int *)(param_1 + 8)) * 4;
          do {
            pvVar18 = local_24a8;
            uVar3 = param_7;
            do {
              if ((uVar3 == 3) || (!param_3)) {
                fVar23 = (float)*(byte *)(lVar17 + (ulong)uVar3) * _LC3;
              }
              else {
                fVar23 = *(float *)(local_2448 + (ulong)*(byte *)(lVar17 + (ulong)uVar3) * 4);
              }
              uVar3 = uVar3 + 1;
              *(float *)(*(long *)pvVar18 + lVar11 * 4) = fVar23;
              pvVar18 = pvVar18 + 0x18;
            } while (param_8 + param_7 != uVar3);
            lVar17 = lVar17 + 4;
            lVar11 = lVar11 + 1;
          } while ((uint)lVar11 < (uint)uVar2);
          uVar6 = 0;
LAB_0010a178:
          uVar8 = uVar6;
          uVar4 = basisu::Resampler::put_line((float *)ppRVar12[uVar8]);
          if ((char)uVar4 != '\0') goto LAB_0010a168;
          ppRVar1 = ppRVar12 + param_8;
          do {
            pRVar5 = *ppRVar12;
            if (pRVar5 != (Resampler *)0x0) {
              basisu::Resampler::~Resampler(pRVar5);
              operator_delete(pRVar5,0x78);
            }
            ppRVar12 = ppRVar12 + 1;
          } while (ppRVar1 != ppRVar12);
          goto LAB_0010a1cf;
        }
        if (param_1 != param_2) {
          *(ulong *)param_2 = uVar2;
          *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
          if (param_2 + 0x10 != param_1 + 0x10) {
            uVar13 = *(uint *)(param_1 + 0x18);
            pvVar15 = *(void **)(param_2 + 0x10);
            if (*(uint *)(param_2 + 0x1c) < uVar13) {
              if (pvVar15 != (void *)0x0) {
                free(pvVar15);
                *(undefined8 *)(param_2 + 0x10) = 0;
                *(undefined8 *)(param_2 + 0x18) = 0;
                uVar13 = *(uint *)(param_1 + 0x18);
              }
              basisu::elemental_vector::increase_capacity
                        ((uint)(param_2 + 0x10),SUB41(uVar13,0),0,
                         (_func_void_void_ptr_void_ptr_uint *)0x4,false);
              pvVar15 = *(void **)(param_2 + 0x10);
              uVar13 = *(uint *)(param_1 + 0x18);
            }
            else if (*(int *)(param_2 + 0x18) != 0) {
              *(undefined4 *)(param_2 + 0x18) = 0;
              uVar13 = *(uint *)(param_1 + 0x18);
            }
            if ((pvVar15 != (void *)0x0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
              memcpy(pvVar15,*(void **)(param_1 + 0x10),(ulong)uVar13 << 2);
              uVar13 = *(uint *)(param_1 + 0x18);
            }
            *(uint *)(param_2 + 0x18) = uVar13;
          }
        }
        goto LAB_0010a1fe;
      }
      goto LAB_0010a1ef;
    }
  }
  else {
LAB_0010a1ef:
    puts("Image is too large!");
  }
  uVar4 = 0;
LAB_0010a1fe:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010a168:
  uVar6 = uVar8 + 1;
  if (param_8 == uVar6) goto LAB_0010a290;
  goto LAB_0010a178;
LAB_0010a290:
  uVar19 = 0;
  uVar3 = param_7;
  do {
    uVar16 = (uint)uVar19;
    lVar17 = basisu::Resampler::get_line();
    fVar25 = _LC80;
    fVar27 = _LC79;
    fVar23 = _LC67;
    if (lVar17 == 0) goto joined_r0x0010a38f;
    lVar11 = 0;
    lVar14 = (ulong)uVar3 + (ulong)(uint)(iVar20 * *(int *)(param_2 + 8)) * 4 +
             *(long *)(param_2 + 0x10);
    do {
      while (fVar24 = *(float *)(lVar17 + lVar11 * 4), uVar3 != 3 && param_3) {
        iVar10 = (int)(fVar24 * fVar25 + fVar27);
        if (0x1fff < iVar10) {
          iVar10 = 0x1fff;
        }
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        *(undefined1 *)(lVar14 + lVar11 * 4) = local_2048[iVar10];
        lVar11 = lVar11 + 1;
        if (uVar13 <= (uint)lVar11) goto LAB_0010a365;
      }
      iVar10 = (int)(fVar24 * fVar23 + fVar27);
      if (0xff < iVar10) {
        iVar10 = 0xff;
      }
      uVar9 = (undefined1)iVar10;
      if (iVar10 < 0) {
        uVar9 = 0;
      }
      *(undefined1 *)(lVar14 + lVar11 * 4) = uVar9;
      lVar11 = lVar11 + 1;
    } while ((uint)lVar11 < uVar13);
LAB_0010a365:
    uVar3 = uVar3 + 1;
    bVar22 = uVar8 != uVar19;
    uVar19 = uVar19 + 1;
  } while (bVar22);
  uVar16 = uVar16 + 1;
joined_r0x0010a38f:
  if (uVar16 < param_8) goto LAB_0010a3b2;
  iVar20 = iVar20 + 1;
  goto LAB_0010a290;
LAB_0010a3b2:
  local_250c = local_250c + 1;
  if (uVar26 <= local_250c) goto code_r0x0010a3ee;
  goto LAB_0010a0bb;
code_r0x0010a3ee:
  uVar4 = uVar4 & 0xff;
  ppRVar1 = ppRVar12 + uVar6;
  do {
    pRVar5 = *ppRVar12;
    if (pRVar5 != (Resampler *)0x0) {
      basisu::Resampler::~Resampler(pRVar5);
      operator_delete(pRVar5,0x78);
    }
    ppRVar12 = ppRVar12 + 1;
  } while (ppRVar12 != ppRVar1);
LAB_0010a1cf:
  do {
    pvVar15 = *(void **)(pvVar21 + -0x18);
    pvVar18 = pvVar21 + -0x18;
    if (pvVar15 != (void *)0x0) {
      operator_delete(pvVar15,*(long *)(pvVar21 + -8) - (long)pvVar15);
    }
    pvVar21 = pvVar18;
  } while (pvVar18 != local_24a8);
  goto LAB_0010a1fe;
}



/* basisu::image_resample(basisu::imagef const&, basisu::imagef&, char const*, float, bool, unsigned
   int, unsigned int) */

ulong basisu::image_resample
                (imagef *param_1,imagef *param_2,char *param_3,float param_4,bool param_5,
                uint param_6,uint param_7)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  Resampler *pRVar5;
  Resampler *pRVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  vector<float,std::allocator<float>> *pvVar11;
  vector<float,std::allocator<float>> *pvVar12;
  Resampler **ppRVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  void *pvVar17;
  uint uVar18;
  int iVar19;
  undefined8 unaff_R15;
  Resampler **ppRVar20;
  long in_FS_OFFSET;
  uint uVar21;
  Resampler *local_c8 [4];
  vector<float,std::allocator<float>> local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  vector<float,std::allocator<float>> local_48 [8];
  long local_40;
  
  uVar21 = *(uint *)(param_1 + 4);
  uVar3 = *(uint *)param_2;
  uVar18 = *(uint *)(param_2 + 4);
  uVar2 = *(ulong *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = *(uint *)param_1;
  uVar15 = uVar8;
  if (uVar8 <= uVar21) {
    uVar15 = uVar21;
  }
  if (uVar15 < 0x4001) {
    if ((((uVar8 != 0) && (uVar21 != 0)) && (uVar3 != 0)) && ((uVar18 != 0 && (param_7 - 1 < 4)))) {
      uVar15 = uVar18;
      if (uVar18 <= uVar3) {
        uVar15 = uVar3;
      }
      if (uVar15 < 0x4001) {
        uVar14 = CONCAT71((int7)((ulong)unaff_R15 >> 8),uVar3 == uVar8 && uVar21 == uVar18);
        if (uVar3 != uVar8 || uVar21 != uVar18) {
          uVar21 = (uint)(uVar2 >> 0x20);
          local_a8[0] = (vector<float,std::allocator<float>>)0x0;
          local_a8[1] = (vector<float,std::allocator<float>>)0x0;
          local_a8[2] = (vector<float,std::allocator<float>>)0x0;
          local_a8[3] = (vector<float,std::allocator<float>>)0x0;
          local_a8[4] = (vector<float,std::allocator<float>>)0x0;
          local_a8[5] = (vector<float,std::allocator<float>>)0x0;
          local_a8[6] = (vector<float,std::allocator<float>>)0x0;
          local_a8[7] = (vector<float,std::allocator<float>>)0x0;
          local_a8[8] = (vector<float,std::allocator<float>>)0x0;
          local_a8[9] = (vector<float,std::allocator<float>>)0x0;
          local_a8[10] = (vector<float,std::allocator<float>>)0x0;
          local_a8[0xb] = (vector<float,std::allocator<float>>)0x0;
          local_a8[0xc] = (vector<float,std::allocator<float>>)0x0;
          local_a8[0xd] = (vector<float,std::allocator<float>>)0x0;
          local_a8[0xe] = (vector<float,std::allocator<float>>)0x0;
          local_a8[0xf] = (vector<float,std::allocator<float>>)0x0;
          local_98 = (undefined1  [16])0x0;
          local_88 = (undefined1  [16])0x0;
          local_78 = (undefined1  [16])0x0;
          local_68 = (undefined1  [16])0x0;
          local_58 = (undefined1  [16])0x0;
          pRVar5 = (Resampler *)operator_new(0x78);
          uVar14 = uVar2 & 0xffffffff;
          iVar19 = (param_5 ^ 1) * 2;
          basisu::Resampler::Resampler
                    (pRVar5,uVar2 & 0xffffffff,uVar21,uVar3,uVar18,iVar19,param_3,0,0);
          ppRVar13 = local_c8;
          local_c8[0] = pRVar5;
          std::vector<float,std::allocator<float>>::_M_default_append(local_a8,uVar14);
          if (param_7 != 1) {
            pvVar11 = (vector<float,std::allocator<float>> *)(local_98 + 8);
            ppRVar20 = ppRVar13;
            do {
              pRVar6 = (Resampler *)operator_new(0x78);
              basisu::Resampler::Resampler
                        (pRVar6,(uint)uVar2,uVar21,uVar3,uVar18,iVar19,param_3,
                         *(undefined8 *)(pRVar5 + 0x30),*(undefined8 *)(pRVar5 + 0x38));
              lVar16 = *(long *)(pvVar11 + 8);
              lVar9 = *(long *)pvVar11;
              ppRVar20[1] = pRVar6;
              uVar7 = lVar16 - lVar9 >> 2;
              if (uVar7 < uVar14) {
                std::vector<float,std::allocator<float>>::_M_default_append(pvVar11,uVar14 - uVar7);
              }
              else if ((uVar14 < uVar7) && (lVar9 = lVar9 + uVar14 * 4, lVar16 != lVar9)) {
                *(long *)(pvVar11 + 8) = lVar9;
              }
              ppRVar20 = ppRVar20 + 1;
              pvVar11 = pvVar11 + 0x18;
            } while (ppRVar20 != local_c8 + (ulong)(param_7 - 2) + 1);
          }
          uVar7 = (ulong)param_7;
          iVar19 = 0;
          uVar18 = 0;
LAB_0010a9e7:
          lVar9 = 0;
          lVar16 = (ulong)(uVar18 * *(int *)(param_1 + 8)) * 0x10 + *(long *)(param_1 + 0x10);
          do {
            pvVar11 = local_a8;
            uVar8 = param_6;
            do {
              uVar14 = (ulong)uVar8;
              uVar8 = uVar8 + 1;
              *(undefined4 *)(*(long *)pvVar11 + lVar9 * 4) = *(undefined4 *)(lVar16 + uVar14 * 4);
              pvVar11 = pvVar11 + 0x18;
            } while (uVar8 != param_6 + param_7);
            lVar9 = lVar9 + 1;
            lVar16 = lVar16 + 0x10;
          } while ((uint)lVar9 < (uint)uVar2);
          uVar14 = 0;
LAB_0010aa7d:
          uVar8 = basisu::Resampler::put_line((float *)ppRVar13[uVar14]);
          if ((byte)uVar8 != 0) goto LAB_0010aa70;
          uVar14 = (ulong)uVar8;
          ppRVar20 = ppRVar13 + uVar7;
          do {
            pRVar5 = *ppRVar13;
            if (pRVar5 != (Resampler *)0x0) {
              basisu::Resampler::~Resampler(pRVar5);
              operator_delete(pRVar5,0x78);
            }
            ppRVar13 = ppRVar13 + 1;
          } while (ppRVar13 != ppRVar20);
          goto LAB_0010aaca;
        }
        if (param_1 != param_2) {
          *(ulong *)param_2 = uVar2;
          *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
          if (param_2 + 0x10 != param_1 + 0x10) {
            uVar21 = *(uint *)(param_1 + 0x18);
            pvVar17 = *(void **)(param_2 + 0x10);
            if (*(uint *)(param_2 + 0x1c) < uVar21) {
              if (pvVar17 != (void *)0x0) {
                free(pvVar17);
                *(undefined8 *)(param_2 + 0x10) = 0;
                *(undefined8 *)(param_2 + 0x18) = 0;
                uVar21 = *(uint *)(param_1 + 0x18);
              }
              basisu::elemental_vector::increase_capacity
                        ((uint)(param_2 + 0x10),SUB41(uVar21,0),0,
                         (_func_void_void_ptr_void_ptr_uint *)0x10,false);
              uVar21 = *(uint *)(param_1 + 0x18);
              pvVar17 = *(void **)(param_2 + 0x10);
            }
            else if (*(int *)(param_2 + 0x18) != 0) {
              *(undefined4 *)(param_2 + 0x18) = 0;
              uVar21 = *(uint *)(param_1 + 0x18);
            }
            lVar16 = *(long *)(param_1 + 0x10);
            lVar9 = 0;
            if (uVar21 != 0) {
              do {
                uVar4 = ((undefined8 *)(lVar16 + lVar9))[1];
                *(undefined8 *)((long)pvVar17 + lVar9) = *(undefined8 *)(lVar16 + lVar9);
                ((undefined8 *)((long)pvVar17 + lVar9))[1] = uVar4;
                lVar9 = lVar9 + 0x10;
              } while (lVar9 != (ulong)uVar21 << 4);
            }
            *(uint *)(param_2 + 0x18) = uVar21;
          }
        }
        goto LAB_0010ab04;
      }
      goto LAB_0010aaf5;
    }
  }
  else {
LAB_0010aaf5:
    puts("Image is too large!");
  }
  uVar14 = 0;
LAB_0010ab04:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010aa70:
  uVar14 = uVar14 + 1;
  if (uVar14 == uVar7) goto LAB_0010ab60;
  goto LAB_0010aa7d;
LAB_0010ab60:
  uVar14 = 0;
  do {
    uVar15 = (uint)uVar14;
    lVar16 = basisu::Resampler::get_line();
    if (lVar16 == 0) goto joined_r0x0010abf5;
    lVar9 = 0;
    puVar10 = (undefined4 *)
              ((ulong)(uint)(iVar19 * *(int *)(param_2 + 8)) * 0x10 + (ulong)(param_6 + uVar15) * 4
              + *(long *)(param_2 + 0x10));
    do {
      lVar1 = lVar9 * 4;
      lVar9 = lVar9 + 1;
      *puVar10 = *(undefined4 *)(lVar16 + lVar1);
      puVar10 = puVar10 + 4;
    } while ((uint)lVar9 < uVar3);
    uVar14 = uVar14 + 1;
  } while (uVar7 != uVar14);
  uVar15 = uVar15 + 1;
joined_r0x0010abf5:
  if (uVar15 < param_7) goto LAB_0010abf7;
  iVar19 = iVar19 + 1;
  goto LAB_0010ab60;
LAB_0010abf7:
  uVar18 = uVar18 + 1;
  if (uVar21 <= uVar18) goto code_r0x0010ac26;
  goto LAB_0010a9e7;
code_r0x0010ac26:
  uVar14 = (ulong)(byte)uVar8;
  ppRVar20 = ppRVar13 + uVar7;
  do {
    pRVar5 = *ppRVar13;
    if (pRVar5 != (Resampler *)0x0) {
      basisu::Resampler::~Resampler(pRVar5);
      operator_delete(pRVar5,0x78);
    }
    ppRVar13 = ppRVar13 + 1;
  } while (ppRVar13 != ppRVar20);
LAB_0010aaca:
  pvVar11 = local_48;
  do {
    pvVar17 = *(void **)(pvVar11 + -0x18);
    pvVar12 = pvVar11 + -0x18;
    if (pvVar17 != (void *)0x0) {
      operator_delete(pvVar17,*(long *)(pvVar11 + -8) - (long)pvVar17);
    }
    pvVar11 = pvVar12;
  } while (pvVar12 != local_a8);
  goto LAB_0010ab04;
}



/* basisu::job_pool::job_pool(unsigned int) */

void __thiscall basisu::job_pool::job_pool(job_pool *this,uint param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_50;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0x58));
  std::condition_variable::condition_variable((condition_variable *)(this + 0x88));
  this[0xbc] = (job_pool)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  basisu::debug_printf("job_pool::job_pool: %u total threads\n",param_1);
  if (1 < param_1) {
    plVar2 = *(long **)(this + 8);
    uVar5 = (ulong)(param_1 - 1);
    uVar3 = (long)plVar2 - *(long *)this >> 3;
    if (uVar3 < uVar5) {
      std::vector<std::thread,std::allocator<std::thread>>::_M_default_append
                ((vector<std::thread,std::allocator<std::thread>> *)this,uVar5 - uVar3);
    }
    else if ((uVar5 < uVar3) &&
            (plVar1 = (long *)(*(long *)this + uVar5 * 8), plVar4 = plVar1, plVar2 != plVar1)) {
      do {
        if (*plVar4 != 0) goto LAB_0010ae8f;
        plVar4 = plVar4 + 1;
      } while (plVar2 != plVar4);
      *(long **)(this + 8) = plVar1;
    }
    if (1 < (int)param_1) {
      uVar3 = 0;
      do {
        local_50 = 0;
        local_48 = (long *)operator_new(0x18);
        *local_48 = (long)&PTR___State_impl_0010e6f0;
        local_48[1] = (long)this;
        *(int *)(local_48 + 2) = (int)uVar3;
        std::thread::_M_start_thread(&local_50,&local_48,std::thread::_M_thread_deps_never_run);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 8))();
        }
        plVar2 = (long *)(*(long *)this + uVar3 * 8);
        if (*plVar2 != 0) {
LAB_0010ae8f:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        uVar3 = uVar3 + 1;
        *plVar2 = local_50;
      } while (uVar3 != uVar5);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::job_pool::add_job(std::function<void ()> const&) */

void __thiscall basisu::job_pool::add_job(job_pool *this,function *param_1)

{
  undefined1 (*pauVar1) [16];
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x30));
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  pauVar1 = *(undefined1 (**) [16])(this + 0x20);
  if (pauVar1 == *(undefined1 (**) [16])(this + 0x28)) {
    std::vector<std::function<void()>,std::allocator<std::function<void()>>>::
    _M_realloc_insert<std::function<void()>const&>
              ((vector<std::function<void()>,std::allocator<std::function<void()>>> *)(this + 0x18),
               pauVar1,param_1);
    lVar6 = *(long *)(this + 0x20);
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x10);
    *(undefined8 *)pauVar1[1] = 0;
    *(undefined8 *)(pauVar1[1] + 8) = 0;
    *pauVar1 = (undefined1  [16])0x0;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(pauVar1,param_1,2);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)pauVar1[1] = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(pauVar1[1] + 8) = uVar4;
    }
    lVar6 = *(long *)(this + 0x20) + 0x20;
    *(long *)(this + 0x20) = lVar6;
  }
  lVar3 = *(long *)(this + 0x18);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x30));
  if ((ulong)(lVar6 - lVar3) < 0x21) {
    return;
  }
  std::condition_variable::notify_one();
  return;
}



/* basisu::job_pool::add_job(std::function<void ()>&&) */

void __thiscall basisu::job_pool::add_job(job_pool *this,function *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x30));
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  pauVar1 = *(undefined1 (**) [16])(this + 0x20);
  if (pauVar1 == *(undefined1 (**) [16])(this + 0x28)) {
    std::vector<std::function<void()>,std::allocator<std::function<void()>>>::
    _M_realloc_insert<std::function<void()>>
              ((vector<std::function<void()>,std::allocator<std::function<void()>>> *)(this + 0x18),
               pauVar1,param_1);
    lVar6 = *(long *)(this + 0x20);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)pauVar1[1] = 0;
    *pauVar1 = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar1[1] + 8) = uVar2;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)(param_1 + 8);
      *(long *)pauVar1[1] = *(long *)(param_1 + 0x10);
      *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
      *(undefined8 *)*pauVar1 = uVar2;
      *(undefined8 *)(*pauVar1 + 8) = uVar4;
    }
    lVar6 = *(long *)(this + 0x20) + 0x20;
    *(long *)(this + 0x20) = lVar6;
  }
  lVar3 = *(long *)(this + 0x18);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x30));
  if ((ulong)(lVar6 - lVar3) < 0x21) {
    return;
  }
  std::condition_variable::notify_one();
  return;
}



/* int 
   std::uniform_int_distribution<int>::TEMPNAMEPLACEHOLDERVALUE(std::mersenne_twister_engine<unsigned
   long, 32ul, 624ul, 397ul, 31ul, 2567483615ul, 11ul, 4294967295ul, 7ul, 2636928640ul, 15ul,
   4022730752ul, 18ul, 1812433253ul>&, std::uniform_int_distribution<int>::param_type const&) [clone
   .isra.0] */

int __thiscall
std::uniform_int_distribution<int>::operator()
          (uniform_int_distribution<int> *this,mersenne_twister_engine *param_1,param_type *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  iVar6 = (int)param_1;
  uVar7 = (long)(int)param_2 - (long)iVar6;
  if (uVar7 < 0xffffffff) {
    lVar5 = mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
            ::operator()((mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                          *)this);
    uVar7 = uVar7 + 1;
    lVar5 = lVar5 * uVar7;
    uVar1 = (uint)lVar5;
    if (uVar1 < (uint)uVar7) {
      while (uVar1 < (uint)((ulong)-(uint)uVar7 % (uVar7 & 0xffffffff))) {
        lVar5 = mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                ::operator()((mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                              *)this);
        lVar5 = lVar5 * uVar7;
        uVar1 = (uint)lVar5;
      }
    }
    return (int)((ulong)lVar5 >> 0x20) + iVar6;
  }
  if (uVar7 == 0xffffffff) {
    iVar2 = mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
            ::operator()((mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                          *)this);
    return iVar2 + iVar6;
  }
  do {
    do {
      uVar1 = operator()(this,(mersenne_twister_engine *)0x0,(param_type *)0xffffffff);
      uVar3 = mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
              ::operator()((mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                            *)this);
      uVar4 = ((ulong)uVar1 << 0x20) + uVar3;
    } while (uVar7 < uVar4);
  } while (CARRY8((ulong)uVar1 << 0x20,uVar3));
  return (int)uVar4 + iVar6;
}



/* basisu::fill_buffer_with_random_bytes(void*, unsigned long, unsigned int) */

void basisu::fill_buffer_with_random_bytes(void *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  long in_FS_OFFSET;
  ulong local_13b8 [624];
  undefined8 local_38;
  long local_30;
  
  lVar2 = 1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0x1571;
  do {
    uVar3 = (ulong)((int)lVar2 + ((uint)(uVar3 >> 0x1e) ^ (uint)uVar3) * 0x6c078965);
    local_13b8[lVar2] = uVar3;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x270);
  local_38 = 0x270;
  local_13b8[0] = (ulong)param_3;
  lVar2 = 1;
  uVar3 = local_13b8[0];
  do {
    uVar3 = (ulong)(((uint)(uVar3 >> 0x1e) ^ (uint)uVar3) * 0x6c078965 + (int)lVar2);
    local_13b8[lVar2] = uVar3;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x270);
  if (3 < param_2) {
    piVar4 = (int *)((long)param_1 + (param_2 - 4 & 0xfffffffffffffffc) + 4);
    do {
      piVar5 = (int *)((long)param_1 + 4);
      iVar1 = std::uniform_int_distribution<int>::operator()
                        ((uniform_int_distribution<int> *)local_13b8,
                         (mersenne_twister_engine *)0x80000000,(param_type *)0x7fffffff);
      *(int *)param_1 = iVar1;
      param_1 = piVar5;
    } while (piVar5 != piVar4);
    param_2 = (ulong)((uint)param_2 & 3);
    param_1 = piVar4;
  }
  if (param_2 != 0) {
    piVar4 = (int *)param_1;
    do {
      piVar5 = (int *)((long)piVar4 + 1);
      iVar1 = std::uniform_int_distribution<int>::operator()
                        ((uniform_int_distribution<int> *)local_13b8,
                         (mersenne_twister_engine *)0x80000000,(param_type *)0x7fffffff);
      *(char *)piVar4 = (char)iVar1;
      piVar4 = piVar5;
    } while (piVar5 != (int *)(param_2 + (long)param_1));
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::huffman_test(int) */

undefined4 basisu::huffman_test(int param_1)

{
  short sVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  byte bVar9;
  byte bVar10;
  size_t sVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  int iVar15;
  char cVar16;
  ulong uVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int local_14c8;
  uint *local_14b8;
  ulong local_14b0;
  uint *local_14a8;
  ulong local_14a0;
  uint *local_1498;
  ulong local_1490;
  void *local_1488;
  undefined8 local_1480;
  void *local_1478;
  undefined8 local_1470;
  void *local_1468;
  undefined8 local_1460;
  void *local_1458;
  undefined8 local_1450;
  uint *local_1448;
  undefined1 local_1440 [16];
  long local_1430;
  ulong local_1428;
  uint *local_1420;
  uint *puStack_1418;
  uint *local_1410;
  undefined8 local_1408;
  void *local_13f8;
  undefined8 local_13f0;
  void *local_13e8;
  undefined8 local_13e0;
  void *local_13d8;
  undefined8 local_13d0;
  ulong local_13c8;
  undefined8 local_13c0 [623];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_14b8 = (uint *)0x0;
  local_14b0 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_14b8,true,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  memset(local_14b8 + (local_14b0 & 0xffffffff),0,(ulong)(0x13 - (int)local_14b0) << 2);
  local_14b0 = CONCAT44(local_14b0._4_4_,0x13);
  uVar28 = local_14b8[9] + _UNK_0010e7c4;
  uVar29 = local_14b8[10] + _UNK_0010e7c8;
  uVar30 = local_14b8[0xb] + _UNK_0010e7cc;
  uVar20 = local_14b8[0xc] + __LC90;
  uVar24 = local_14b8[0xd] + _UNK_0010e7d4;
  uVar25 = local_14b8[0xe] + _UNK_0010e7d8;
  uVar26 = local_14b8[0xf] + _UNK_0010e7dc;
  uVar31 = *local_14b8 + __LC91;
  uVar32 = local_14b8[1] + _UNK_0010e7e4;
  uVar33 = local_14b8[2] + _UNK_0010e7e8;
  uVar34 = local_14b8[3] + _UNK_0010e7ec;
  local_14b8[8] = local_14b8[8] + __LC89;
  local_14b8[9] = uVar28;
  local_14b8[10] = uVar29;
  local_14b8[0xb] = uVar30;
  iVar15 = _LC92._4_4_;
  iVar6 = (int)_LC92;
  local_14b8[0xc] = uVar20;
  local_14b8[0xd] = uVar24;
  local_14b8[0xe] = uVar25;
  local_14b8[0xf] = uVar26;
  uVar20 = local_14b8[4] + __LC88;
  uVar24 = local_14b8[5] + _UNK_0010e7b4;
  uVar25 = local_14b8[6] + _UNK_0010e7b8;
  uVar26 = local_14b8[7] + _UNK_0010e7bc;
  *local_14b8 = uVar31;
  local_14b8[1] = uVar32;
  local_14b8[2] = uVar33;
  local_14b8[3] = uVar34;
  local_14b8[4] = uVar20;
  local_14b8[5] = uVar24;
  local_14b8[6] = uVar25;
  local_14b8[7] = uVar26;
  local_14b8[0x12] = local_14b8[0x12] + 0x1055;
  local_1488 = (void *)0x0;
  local_1480 = 0;
  local_1478 = (void *)0x0;
  local_1470 = 0;
  *(ulong *)(local_14b8 + 0x10) =
       CONCAT44((int)((ulong)*(undefined8 *)(local_14b8 + 0x10) >> 0x20) + iVar15,
                (int)*(undefined8 *)(local_14b8 + 0x10) + iVar6);
  huffman_encoding_table::init((huffman_encoding_table *)&local_1488,0x13,local_14b8,0x10);
  local_1448 = (uint *)0x0;
  local_1440 = (undefined1  [16])0x0;
  local_1430 = 0;
  vector<unsigned_char>::reserve((vector<unsigned_char> *)&local_1448,0x400);
  uVar2 = local_1440._0_8_;
  bVar19 = local_1440._0_4_ != 0;
  local_1440._0_8_ = uVar2;
  if (bVar19) {
    local_1440._0_8_ = local_1440._4_8_ << 0x20;
  }
  local_1440._8_8_ = 0;
  lVar18 = 0;
  local_1430 = 0;
  bitwise_coder::emit_huffman_table
            ((bitwise_coder *)&local_1448,(huffman_encoding_table *)&local_1488);
  uVar20 = local_1440._12_4_;
  do {
    bVar10 = *(byte *)((long)local_1478 + lVar18);
    uVar24 = (uint)(vector<unsigned_char> *)&local_1448;
    if (bVar10 != 0) {
      uVar17 = (ulong)(uint)local_1440._8_4_;
      local_1430 = local_1430 + (ulong)bVar10;
      bVar9 = (byte)uVar20;
      uVar20 = uVar20 + bVar10;
      local_1440._12_4_ = uVar20;
      uVar17 = (ulong)*(ushort *)((long)local_1488 + lVar18 * 2) << (bVar9 & 0x3f) | uVar17;
      while (7 < uVar20) {
        uVar14 = (ulong)(uint)local_1440._0_4_;
        bVar10 = (byte)uVar17;
        uVar20 = local_1440._0_4_ + 1;
        if (local_1440._0_4_ != 0xffffffff) {
          sVar11 = 1;
          if ((uint)local_1440._4_4_ < uVar20) {
            basisu::elemental_vector::increase_capacity
                      (uVar24,SUB41(uVar20,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
            sVar11 = (size_t)(uVar20 - local_1440._0_4_);
          }
          memset((byte *)((ulong)(uint)local_1440._0_4_ + (long)local_1448),0,sVar11);
        }
        auVar3 = local_1440;
        local_1440._0_4_ = uVar20;
        auVar4 = local_1440;
        uVar17 = uVar17 >> 8;
        *(byte *)((long)local_1448 + uVar14) = bVar10;
        local_1440._12_4_ = auVar3._12_4_;
        uVar20 = local_1440._12_4_ - 8;
        local_1440._0_12_ = auVar4._0_12_;
        local_1440._12_4_ = uVar20;
      }
      local_1440._8_4_ = (uint)uVar17 & 0xff;
    }
    auVar3 = local_1440;
    lVar18 = lVar18 + 1;
  } while (lVar18 != 0x13);
  if (uVar20 != 0) {
    uVar17 = (ulong)(uint)local_1440._0_4_;
    local_1430 = local_1430 + (ulong)(8 - (uVar20 & 7));
    uVar20 = local_1440._0_4_ + 1;
    if (local_1440._0_4_ != 0xffffffff) {
      sVar11 = 1;
      if ((uint)local_1440._4_4_ < uVar20) {
        basisu::elemental_vector::increase_capacity
                  (uVar24,SUB41(uVar20,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
        sVar11 = (size_t)(uVar20 - local_1440._0_4_);
      }
      memset((byte *)((ulong)(uint)local_1440._0_4_ + (long)local_1448),0,sVar11);
    }
    local_1440._0_4_ = uVar20;
    *(byte *)((long)local_1448 + uVar17) = auVar3[8];
    local_1440._8_8_ = 0;
  }
  local_1428 = 0;
  puStack_1418 = (uint *)0x0;
  local_1410 = (uint *)0x0;
  local_1408 = 0;
  if ((local_1448 != (uint *)0x0) || (local_1440._0_4_ == 0)) {
    local_1410 = (uint *)((long)local_1448 + (ulong)(uint)local_1440._0_4_);
    local_1428 = (ulong)(uint)local_1440._0_4_;
    puStack_1418 = local_1448;
  }
  local_13f8 = (void *)0x0;
  local_13f0 = 0;
  local_13e8 = (void *)0x0;
  local_13e0 = 0;
  local_13d8 = (void *)0x0;
  local_13d0 = 0;
  local_1420 = puStack_1418;
  cVar5 = basist::bitwise_decoder::read_huffman_table
                    ((bitwise_decoder *)&local_1428,(huffman_decoding_table *)&local_13f8);
  if (cVar5 == '\0') {
LAB_0010bc3d:
    puts("Failure 5");
    if (local_13d8 != (void *)0x0) {
      free(local_13d8);
    }
    if (local_13e8 != (void *)0x0) {
      free(local_13e8);
    }
    if (local_13f8 != (void *)0x0) {
      free(local_13f8);
    }
    puVar12 = local_1448;
    if (local_1448 != (uint *)0x0) {
LAB_0010bb76:
      free(puVar12);
    }
LAB_0010bb7b:
    uVar7 = 0;
  }
  else {
    cVar16 = '\0';
    uVar26 = 0;
    puVar12 = local_1420;
    uVar25 = (uint)local_1408;
    uVar20 = local_1408._4_4_;
    do {
      uVar28 = uVar20;
      if (uVar20 < 0x10) {
        do {
          if (puVar12 < local_1410) {
            uVar29 = *puVar12;
            puVar12 = (uint *)((long)puVar12 + 1);
            uVar25 = uVar25 | (uint)(byte)uVar29 << ((byte)uVar28 & 0x1f);
            cVar16 = cVar5;
          }
          uVar28 = uVar28 + 8;
        } while (uVar28 < 0x10);
        uVar20 = uVar20 + 8 + (0xf - uVar20 & 0xfffffff8);
      }
      uVar28 = *(uint *)((long)local_13e8 + (ulong)(uVar25 & 0x3ff) * 4);
      if ((int)uVar28 < 0) {
        iVar6 = 10;
        do {
          iVar15 = iVar6 + 1;
          sVar1 = *(short *)((long)local_13d8 +
                            (ulong)(((uVar25 >> ((byte)iVar6 & 0x1f) & 1) - 1) - uVar28) * 2);
          uVar28 = (uint)sVar1;
          iVar6 = iVar15;
        } while (sVar1 < 0);
        bVar10 = (byte)iVar15;
        uVar29 = uVar28;
      }
      else {
        uVar29 = uVar28 & 0xffff;
        iVar15 = (int)uVar28 >> 0x10;
        bVar10 = (byte)(uVar28 >> 0x10);
      }
      if (uVar26 != uVar29) goto LAB_0010bc3d;
      uVar20 = uVar20 - iVar15;
      uVar25 = uVar25 >> (bVar10 & 0x1f);
      uVar26 = uVar26 + 1;
    } while (uVar26 != 0x13);
    local_1408 = CONCAT44(uVar20,uVar25);
    if (cVar16 != '\0') {
      local_1420 = puVar12;
    }
    if (local_13d8 != (void *)0x0) {
      free(local_13d8);
    }
    if (local_13e8 != (void *)0x0) {
      free(local_13e8);
    }
    if (local_13f8 != (void *)0x0) {
      free(local_13f8);
    }
    if (local_1448 != (uint *)0x0) {
      free(local_1448);
    }
    lVar18 = 1;
    uVar17 = 0x1571;
    do {
      uVar17 = (ulong)(((uint)(uVar17 >> 0x1e) ^ (uint)uVar17) * 0x6c078965 + (int)lVar18);
      *(ulong *)((uniform_int_distribution<int> *)&local_13c8 + lVar18 * 8) = uVar17;
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0x270);
    local_13c8 = (ulong)(uint)param_1;
    lVar18 = 1;
    local_48 = 0x270;
    uVar17 = local_13c8;
    do {
      uVar17 = (ulong)(((uint)(uVar17 >> 0x1e) ^ (uint)uVar17) * 0x6c078965 + (int)lVar18);
      *(ulong *)((uniform_int_distribution<int> *)&local_13c8 + lVar18 * 8) = uVar17;
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0x270);
    local_14c8 = 0;
    do {
      __printf_chk(2,&_LC94,local_14c8);
      uVar20 = std::uniform_int_distribution<int>::operator()
                         ((uniform_int_distribution<int> *)&local_13c8,
                          (mersenne_twister_engine *)0x0,(param_type *)0x2001);
      uVar25 = std::uniform_int_distribution<int>::operator()
                         ((uniform_int_distribution<int> *)&local_13c8,
                          (mersenne_twister_engine *)0x1,(param_type *)0x2710);
      local_14a8 = (uint *)0x0;
      local_14a0 = 0;
      if (uVar25 == 0) {
        local_1498 = (uint *)0x0;
        local_1490 = 0;
        if (uVar20 != 0xffffffff) goto LAB_0010ba75;
      }
      else {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_14a8,SUB41(uVar25,0),(uint)(uVar25 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        memset(local_14a8 + (local_14a0 & 0xffffffff),0,(ulong)(uVar25 - (int)local_14a0) << 2);
        local_14a0 = CONCAT44(local_14a0._4_4_,uVar25);
        uVar26 = uVar20 >> 1;
        if (uVar20 >> 1 == 0) {
          uVar26 = 1;
        }
        lVar18 = 0;
        do {
          while( true ) {
            iVar6 = std::uniform_int_distribution<int>::operator()
                              ((uniform_int_distribution<int> *)&local_13c8,
                               (mersenne_twister_engine *)0x0,(param_type *)0x1);
            puVar12 = (uint *)((long)local_14a8 + lVar18);
            if (iVar6 == 1) break;
            fVar21 = (float)uVar20 * _LC79;
            do {
              while( true ) {
                uVar17 = std::
                         mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                         ::operator()((mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                                       *)&local_13c8);
                fVar22 = ((float)uVar17 + 0.0) * __LC95;
                if (fVar22 < _LC1) break;
                uVar17 = std::
                         mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                         ::operator()((mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                                       *)&local_13c8);
                fVar27 = ((float)uVar17 + 0.0) * __LC95;
                fVar22 = _LC87;
                if (fVar27 < _LC1) {
LAB_0010b98e:
                  fVar27 = (fVar27 + fVar27) - _LC1;
                  fVar22 = fVar27 * fVar27 + fVar22 * fVar22;
                  if ((fVar22 <= _LC1) && (fVar22 != 0.0)) goto LAB_0010b9d0;
                }
              }
              fVar22 = (fVar22 + fVar22) - _LC1;
              uVar17 = std::
                       mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                       ::operator()((mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                                     *)&local_13c8);
              fVar27 = ((float)uVar17 + 0.0) * __LC95;
              if (fVar27 < _LC1) goto LAB_0010b98e;
              fVar22 = _LC100 + fVar22 * fVar22;
              fVar27 = _LC87;
            } while (_LC1 < fVar22);
LAB_0010b9d0:
            fVar23 = logf(fVar22);
            fVar22 = (fVar23 * __LC96) / fVar22;
            if (fVar22 < 0.0) {
              fVar22 = sqrtf(fVar22);
            }
            else {
              fVar22 = SQRT(fVar22);
            }
            uVar29 = (uint)(fVar22 * fVar27 * (float)uVar26 + fVar21 + _LC79);
            uVar28 = uVar20;
            if ((int)uVar29 <= (int)uVar20) {
              uVar28 = uVar29;
            }
            if ((int)uVar29 < 0) {
              uVar28 = 0;
            }
            lVar18 = lVar18 + 4;
            *puVar12 = uVar28;
            if ((ulong)uVar25 << 2 == lVar18) goto LAB_0010ba4d;
          }
          lVar18 = lVar18 + 4;
          uVar28 = std::uniform_int_distribution<int>::operator()
                             ((uniform_int_distribution<int> *)&local_13c8,
                              (mersenne_twister_engine *)0x0,(param_type *)(ulong)uVar20);
          *puVar12 = uVar28;
        } while ((ulong)uVar25 << 2 != lVar18);
LAB_0010ba4d:
        local_1498 = (uint *)0x0;
        local_1490 = 0;
        if (uVar20 != 0xffffffff) {
LAB_0010ba75:
          local_1490 = 0;
          local_1498 = (uint *)0x0;
          iVar6 = uVar20 + 1;
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_1498,SUB41(iVar6,0),(uint)(uVar20 == 0),
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          memset(local_1498 + (local_1490 & 0xffffffff),0,(ulong)(iVar6 - (uint)local_1490) << 2);
          local_1490 = CONCAT44(local_1490._4_4_,iVar6);
          if (uVar25 == 0) goto LAB_0010baea;
        }
        puVar12 = local_14a8 + 1;
        puVar13 = local_14a8;
        while (puVar8 = puVar12, local_1498[*puVar13] = local_1498[*puVar13] + 1,
              puVar8 != local_14a8 + 1 + (uVar25 - 1)) {
          puVar13 = puVar8;
          puVar12 = puVar8 + 1;
        }
      }
LAB_0010baea:
      local_1468 = (void *)0x0;
      local_1460 = 0;
      local_1458 = (void *)0x0;
      local_1450 = 0;
      if (0x3fff < (uint)local_1490 - 1) {
LAB_0010bb2d:
        puts("Failed 0");
LAB_0010bb39:
        if (local_1458 != (void *)0x0) {
          free(local_1458);
        }
        if (local_1468 != (void *)0x0) {
          free(local_1468);
        }
        if (local_1498 != (uint *)0x0) {
          free(local_1498);
        }
        puVar12 = local_14a8;
        if (local_14a8 == (uint *)0x0) goto LAB_0010bb7b;
        goto LAB_0010bb76;
      }
      cVar5 = huffman_encoding_table::init
                        ((huffman_encoding_table *)&local_1468,(uint)local_1490,local_1498,0x10);
      if (cVar5 == '\0') goto LAB_0010bb2d;
      local_1448 = (uint *)0x0;
      local_1430 = 0;
      local_1440 = (undefined1  [16])0x0;
      vector<unsigned_char>::reserve((vector<unsigned_char> *)&local_1448,0x400);
      uVar2 = local_1440._0_8_;
      bVar19 = local_1440._0_4_ != 0;
      local_1440._0_8_ = uVar2;
      if (bVar19) {
        local_1440._0_8_ = local_1440._4_8_ << 0x20;
      }
      local_1440._8_8_ = 0;
      local_1430 = 0;
      bitwise_coder::emit_huffman_table
                ((bitwise_coder *)&local_1448,(huffman_encoding_table *)&local_1468);
      uVar20 = local_1440._12_4_;
      if (uVar25 != 0) {
        lVar18 = 0;
        do {
          bVar10 = *(byte *)((long)local_1458 + (ulong)*(uint *)((long)local_14a8 + lVar18));
          if (bVar10 != 0) {
            uVar17 = (ulong)(uint)local_1440._8_4_;
            local_1430 = local_1430 + (ulong)bVar10;
            bVar9 = (byte)uVar20;
            uVar20 = uVar20 + bVar10;
            local_1440._12_4_ = uVar20;
            uVar17 = (ulong)*(ushort *)
                             ((long)local_1468 + (ulong)*(uint *)((long)local_14a8 + lVar18) * 2) <<
                     (bVar9 & 0x3f) | uVar17;
            while (7 < uVar20) {
              uVar14 = (ulong)(uint)local_1440._0_4_;
              uVar20 = local_1440._0_4_ + 1;
              if (local_1440._0_4_ != 0xffffffff) {
                if ((uint)local_1440._4_4_ < uVar20) {
                  basisu::elemental_vector::increase_capacity
                            (uVar24,SUB41(uVar20,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false
                            );
                  sVar11 = (size_t)(uVar20 - local_1440._0_4_);
                }
                else {
                  sVar11 = 1;
                }
                memset((byte *)((ulong)(uint)local_1440._0_4_ + (long)local_1448),0,sVar11);
              }
              auVar3 = local_1440;
              local_1440._0_4_ = uVar20;
              auVar4 = local_1440;
              *(byte *)((long)local_1448 + uVar14) = (byte)uVar17;
              local_1440._12_4_ = auVar3._12_4_;
              uVar20 = local_1440._12_4_ - 8;
              local_1440._0_12_ = auVar4._0_12_;
              local_1440._12_4_ = uVar20;
              uVar17 = uVar17 >> 8;
            }
            local_1440._8_4_ = (uint)uVar17 & 0xff;
          }
          lVar18 = lVar18 + 4;
        } while (lVar18 != (ulong)uVar25 << 2);
      }
      auVar3 = local_1440;
      if (uVar20 != 0) {
        uVar17 = (ulong)(uint)local_1440._0_4_;
        local_1430 = local_1430 + (ulong)(8 - (uVar20 & 7));
        uVar20 = local_1440._0_4_ + 1;
        if (local_1440._0_4_ != 0xffffffff) {
          sVar11 = 1;
          if ((uint)local_1440._4_4_ < uVar20) {
            basisu::elemental_vector::increase_capacity
                      (uVar24,SUB41(uVar20,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
            sVar11 = (size_t)(uVar20 - local_1440._0_4_);
          }
          memset((byte *)((ulong)(uint)local_1440._0_4_ + (long)local_1448),0,sVar11);
        }
        local_1440._0_4_ = uVar20;
        *(byte *)((long)local_1448 + uVar17) = auVar3[8];
        local_1440._8_8_ = 0;
      }
      local_1428 = 0;
      puStack_1418 = (uint *)0x0;
      local_1410 = (uint *)0x0;
      local_1408 = 0;
      if ((local_1448 != (uint *)0x0) || (local_1440._0_4_ == 0)) {
        local_1410 = (uint *)((long)local_1448 + (ulong)(uint)local_1440._0_4_);
        local_1428 = (ulong)(uint)local_1440._0_4_;
        puStack_1418 = local_1448;
      }
      local_13f8 = (void *)0x0;
      local_13f0 = 0;
      local_13e8 = (void *)0x0;
      local_13e0 = 0;
      local_13d8 = (void *)0x0;
      local_13d0 = 0;
      local_1420 = puStack_1418;
      uVar7 = basist::bitwise_decoder::read_huffman_table
                        ((bitwise_decoder *)&local_1428,(huffman_decoding_table *)&local_13f8);
      if ((char)uVar7 == '\0') {
        puts("Failed 2");
LAB_0010c10e:
        if (local_13d8 != (void *)0x0) {
          free(local_13d8);
        }
        if (local_13e8 != (void *)0x0) {
          free(local_13e8);
        }
        if (local_13f8 != (void *)0x0) {
          free(local_13f8);
        }
        if (local_1448 != (uint *)0x0) {
          free(local_1448);
        }
        goto LAB_0010bb39;
      }
      if (uVar25 != 0) {
        puVar12 = local_1420;
        puVar13 = local_14a8;
        uVar26 = (uint)local_1408;
        uVar20 = local_1408._4_4_;
        do {
          if (uVar20 < 0x10) {
            uVar28 = uVar20;
            if (local_1410 <= puVar12) goto LAB_0010c0a3;
            do {
              uVar29 = *puVar12;
              puVar12 = (uint *)((long)puVar12 + 1);
              uVar26 = uVar26 | (uint)(byte)uVar29 << ((byte)uVar28 & 0x1f);
LAB_0010c0a3:
            } while ((uVar28 + 8 < 0x10) && (uVar28 = uVar28 + 8, puVar12 < local_1410));
            uVar20 = uVar20 + 8 + (0xf - uVar20 & 0xfffffff8);
          }
          uVar28 = *(uint *)((long)local_13e8 + (ulong)(uVar26 & 0x3ff) * 4);
          if ((int)uVar28 < 0) {
            iVar15 = 10;
            do {
              iVar6 = iVar15 + 1;
              sVar1 = *(short *)((long)local_13d8 +
                                (ulong)(((uVar26 >> ((byte)iVar15 & 0x1f) & 1) - 1) - uVar28) * 2);
              uVar28 = (uint)sVar1;
              iVar15 = iVar6;
            } while (sVar1 < 0);
            bVar10 = (byte)iVar6;
            if (*puVar13 != uVar28) {
LAB_0010c102:
              puts("Failed 4");
              goto LAB_0010c10e;
            }
          }
          else {
            iVar6 = (int)uVar28 >> 0x10;
            bVar10 = (byte)(uVar28 >> 0x10);
            if (*puVar13 != (uVar28 & 0xffff)) goto LAB_0010c102;
          }
          uVar20 = uVar20 - iVar6;
          uVar26 = uVar26 >> (bVar10 & 0x1f);
          puVar13 = puVar13 + 1;
        } while (puVar13 != local_14a8 + (ulong)(uVar25 - 1) + 1);
      }
      if (local_13d8 != (void *)0x0) {
        free(local_13d8);
      }
      if (local_13e8 != (void *)0x0) {
        free(local_13e8);
      }
      if (local_13f8 != (void *)0x0) {
        free(local_13f8);
      }
      if (local_1448 != (uint *)0x0) {
        free(local_1448);
      }
      if (local_1458 != (void *)0x0) {
        free(local_1458);
      }
      if (local_1468 != (void *)0x0) {
        free(local_1468);
      }
      if (local_1498 != (uint *)0x0) {
        free(local_1498);
      }
      if (local_14a8 != (uint *)0x0) {
        free(local_14a8);
      }
      local_14c8 = local_14c8 + 1;
    } while (local_14c8 != 500000);
  }
  if (local_1478 != (void *)0x0) {
    free(local_1478);
  }
  if (local_1488 != (void *)0x0) {
    free(local_1488);
  }
  if (local_14b8 != (uint *)0x0) {
    free(local_14b8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* std::thread::_M_thread_deps_never_run() */

void std::thread::_M_thread_deps_never_run(void)

{
  return;
}



/* basisu::vector<basisu::vec<4u, float> >::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::vec<4u,float>>::object_mover(void *param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  pvVar2 = (void *)((ulong)param_3 * 0x10 + (long)param_2);
  if (param_2 != pvVar2) {
    uVar4 = 0;
    lVar3 = 0;
    do {
      uVar1 = ((undefined8 *)((long)param_2 + lVar3))[1];
      uVar4 = uVar4 + 1;
      *(undefined8 *)((long)param_1 + lVar3) = *(undefined8 *)((long)param_2 + lVar3);
      ((undefined8 *)((long)param_1 + lVar3))[1] = uVar1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
  }
  return;
}



/* basist::huffman_decoding_table::clear() */

void __thiscall basist::huffman_decoding_table::clear(huffman_decoding_table *this)

{
  uint uVar1;
  
  if (*(int *)(this + 8) != 0) {
    *(undefined4 *)(this + 8) = 0;
  }
  uVar1 = *(uint *)(this + 0x18);
  if ((ulong)uVar1 != 0) {
    memmove(*(void **)(this + 0x10),(void *)((ulong)uVar1 * 4 + (long)*(void **)(this + 0x10)),0);
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) - uVar1;
  }
  uVar1 = *(uint *)(this + 0x28);
  if ((ulong)uVar1 == 0) {
    return;
  }
  memmove(*(void **)(this + 0x20),(void *)((ulong)uVar1 * 2 + (long)*(void **)(this + 0x20)),0);
  *(uint *)(this + 0x28) = *(int *)(this + 0x28) - uVar1;
  return;
}



/* basist::huffman_decoding_table::init(unsigned int, unsigned char const*, unsigned int) */

undefined8 __thiscall
basist::huffman_decoding_table::init
          (huffman_decoding_table *this,uint param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  short *psVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  long in_FS_OFFSET;
  byte bVar20;
  byte local_17c;
  int local_148 [32];
  uint local_c8 [34];
  long local_40;
  
  bVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    clear(this);
  }
  else {
    uVar5 = *(uint *)(this + 8);
    uVar15 = (uint)this;
    if (param_1 != uVar5) {
      if (uVar5 <= param_1) {
        if (*(uint *)(this + 0xc) < param_1) {
          basisu::elemental_vector::increase_capacity
                    (uVar15,SUB41(param_1,0),(uint)(uVar5 + 1 == param_1),
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar5 = *(uint *)(this + 8);
        }
        memset((void *)((ulong)uVar5 + *(long *)this),0,(ulong)(param_1 - uVar5));
      }
      *(uint *)(this + 8) = param_1;
    }
    memcpy(*(void **)this,param_2,(ulong)param_1);
    local_17c = (byte)param_3;
    uVar5 = 1 << (local_17c & 0x1f);
    if (*(int *)(this + 0x18) != 0) {
      *(undefined4 *)(this + 0x18) = 0;
    }
    if (uVar5 != 0) {
      uVar11 = 0;
      if (*(uint *)(this + 0x1c) < uVar5) {
        basisu::elemental_vector::increase_capacity
                  (uVar15 + 0x10,SUB41(uVar5,0),(uint)(uVar5 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar11 = *(uint *)(this + 0x18);
      }
      memset((void *)(*(long *)(this + 0x10) + (ulong)uVar11 * 4),0,(ulong)(uVar5 - uVar11) << 2);
      *(uint *)(this + 0x18) = uVar5;
    }
    uVar15 = uVar15 + 0x20;
    if (*(int *)(this + 0x28) != 0) {
      *(undefined4 *)(this + 0x28) = 0;
    }
    uVar11 = param_1 * 2;
    if (uVar11 != 0) {
      uVar17 = 0;
      if (*(uint *)(this + 0x2c) < uVar11) {
        basisu::elemental_vector::increase_capacity
                  (uVar15,SUB41(uVar11,0),0,(_func_void_void_ptr_void_ptr_uint *)0x2,false);
        uVar17 = (ulong)*(uint *)(this + 0x28);
      }
      memset((void *)(*(long *)(this + 0x20) + uVar17 * 2),0,(ulong)(uVar11 - (int)uVar17) * 2);
      *(uint *)(this + 0x28) = uVar11;
    }
    piVar16 = local_148;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      piVar16[0] = 0;
      piVar16[1] = 0;
      piVar16 = piVar16 + ((ulong)bVar20 * -2 + 1) * 2;
    }
    pbVar12 = param_2;
    do {
      bVar20 = *pbVar12;
      if (0x1f < bVar20) goto LAB_0010c815;
      pbVar12 = pbVar12 + 1;
      local_148[bVar20] = local_148[bVar20] + 1;
    } while (pbVar12 != param_2 + param_1);
    lVar9 = 0;
    iVar6 = 0;
    iVar14 = 0;
    local_c8[0] = 0;
    local_c8[1] = 0;
    do {
      iVar19 = *(int *)((long)local_148 + lVar9 + 4);
      iVar14 = iVar14 + iVar19;
      iVar6 = (iVar6 + iVar19) * 2;
      *(int *)((long)local_c8 + lVar9 + 8) = iVar6;
      lVar9 = lVar9 + 4;
    } while (lVar9 != 0x78);
    if ((iVar6 != -0x80000000) && (iVar14 != 1)) {
LAB_0010c815:
      uVar8 = 0;
      goto LAB_0010c817;
    }
    if (0 < (int)param_1) {
      uVar17 = 0;
      iVar6 = -1;
      do {
        bVar20 = param_2[uVar17];
        uVar11 = (uint)bVar20;
        if (bVar20 != 0) {
          uVar18 = local_c8[uVar11];
          local_c8[uVar11] = uVar18 + 1;
          uVar7 = 0;
          uVar10 = uVar11;
          do {
            uVar7 = uVar7 * 2 | uVar18 & 1;
            uVar10 = uVar10 - 1;
            uVar18 = uVar18 >> 1;
          } while (uVar10 != 0);
          uVar18 = (uint)bVar20;
          if (param_3 < uVar11) {
            piVar16 = (int *)(*(long *)(this + 0x10) + (ulong)(uVar5 - 1 & uVar7) * 4);
            iVar14 = *piVar16;
            iVar19 = iVar6;
            if (iVar14 == 0) {
              *piVar16 = iVar6;
              iVar19 = iVar6 + -2;
              iVar14 = iVar6;
            }
            if (-1 < iVar14) goto LAB_0010c815;
            iVar1 = param_3 + 1;
            uVar7 = uVar7 >> (local_17c - 1 & 0x1f);
            uVar10 = uVar7 >> 1;
            uVar11 = iVar14 - (uVar10 & 1);
            iVar6 = iVar19;
            if (iVar1 < (int)uVar18) {
              if ((int)uVar11 < 0) {
                do {
                  uVar7 = *(uint *)(this + 0x28);
                  if (((int)uVar7 <= (int)~uVar11) && (uVar13 = -uVar11, uVar7 != uVar13)) {
                    if (uVar7 <= uVar13) {
                      if (*(uint *)(this + 0x2c) < uVar13) {
                        basisu::elemental_vector::increase_capacity
                                  (uVar15,SUB41(uVar13,0),(uint)(uVar7 + 1 == uVar13),
                                   (_func_void_void_ptr_void_ptr_uint *)0x2,false);
                        uVar7 = *(uint *)(this + 0x28);
                      }
                      memset((void *)(*(long *)(this + 0x20) + (ulong)uVar7 * 2),0,
                             (ulong)(uVar13 - uVar7) * 2);
                    }
                    *(uint *)(this + 0x28) = uVar13;
                  }
                  psVar3 = (short *)(*(long *)(this + 0x20) + (long)(int)~uVar11 * 2);
                  sVar4 = *psVar3;
                  iVar14 = (int)sVar4;
                  uVar7 = uVar10;
                  if (sVar4 == 0) {
                    *psVar3 = (short)iVar19;
                    uVar11 = iVar19 - (uVar10 >> 1 & 1);
                    iVar6 = iVar19 + -2;
                    iVar14 = iVar19;
                    if (iVar1 == uVar18 - 1) goto LAB_0010ca3d;
                    iVar19 = iVar19 + -2;
                    if (-1 < (int)uVar11) break;
                  }
                  else {
                    if (-1 < sVar4) break;
                    uVar11 = iVar14 - (uVar10 >> 1 & 1);
                    iVar6 = iVar19;
                    if (iVar1 == uVar18 - 1) goto LAB_0010ca3d;
                  }
                  uVar10 = uVar10 >> 1;
                  uVar18 = uVar18 - 1;
                } while( true );
              }
              goto LAB_0010c815;
            }
LAB_0010ca3d:
            uVar11 = iVar14 - (uVar7 >> 1 & 1);
            uVar18 = uVar11 ^ 0xffffffff;
            if ((int)uVar18 < 0) goto LAB_0010c815;
            uVar10 = *(uint *)(this + 0x28);
            if (((int)uVar10 <= (int)uVar18) && (uVar11 = -uVar11, uVar10 != uVar11)) {
              if (uVar10 <= uVar11) {
                if (*(uint *)(this + 0x2c) < uVar11) {
                  basisu::elemental_vector::increase_capacity
                            (uVar15,SUB41(uVar11,0),(uint)(uVar10 + 1 == uVar11),
                             (_func_void_void_ptr_void_ptr_uint *)0x2,false);
                  uVar10 = *(uint *)(this + 0x28);
                }
                memset((void *)(*(long *)(this + 0x20) + (ulong)uVar10 * 2),0,
                       (ulong)(uVar11 - uVar10) * 2);
              }
              *(uint *)(this + 0x28) = uVar11;
            }
            psVar3 = (short *)(*(long *)(this + 0x20) + (long)(int)uVar18 * 2);
            if (*psVar3 != 0) goto LAB_0010c815;
            *psVar3 = (short)uVar17;
          }
          else if (uVar7 < uVar5) {
            lVar9 = *(long *)(this + 0x10);
            do {
              puVar2 = (uint *)(lVar9 + (ulong)uVar7 * 4);
              if (*puVar2 != 0) goto LAB_0010c815;
              uVar7 = uVar7 + (1 << (bVar20 & 0x1f));
              *puVar2 = (uint)bVar20 << 0x10 | (uint)uVar17;
            } while (uVar7 < uVar5);
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != param_1);
    }
  }
  uVar8 = 1;
LAB_0010c817:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* basist::bitwise_decoder::read_huffman_table(basist::huffman_decoding_table&) */

undefined4 __thiscall
basist::bitwise_decoder::read_huffman_table(bitwise_decoder *this,huffman_decoding_table *param_1)

{
  long lVar1;
  uchar uVar2;
  short sVar3;
  undefined4 uVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  uchar *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  undefined1 local_48 [13];
  undefined3 uStack_3b;
  undefined5 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  huffman_decoding_table::clear(param_1);
  uVar12 = *(uint *)(this + 0x24);
  if (uVar12 < 0xe) {
    uVar17 = *(uint *)(this + 0x20);
    uVar7 = uVar12;
    do {
      pbVar9 = *(byte **)(this + 8);
      if (pbVar9 < *(byte **)(this + 0x18)) {
        *(byte **)(this + 8) = pbVar9 + 1;
        uVar17 = uVar17 | (uint)*pbVar9 << ((byte)uVar7 & 0x1f);
      }
      uVar7 = uVar7 + 8;
      *(uint *)(this + 0x20) = uVar17;
      *(uint *)(this + 0x24) = uVar7;
    } while (uVar7 < 0xe);
    uVar12 = uVar12 + 8 + (0xd - uVar12 & 0xfffffff8);
  }
  else {
    uVar17 = *(uint *)(this + 0x20);
  }
  uVar7 = uVar12 - 0xe;
  uVar4 = 1;
  uVar11 = uVar17 >> 0xe;
  *(uint *)(this + 0x24) = uVar7;
  *(uint *)(this + 0x20) = uVar11;
  uVar18 = uVar17 & 0x3fff;
  if (uVar18 != 0) {
    local_48 = SUB1613((undefined1  [16])0x0,0);
    uStack_3b = 0;
    uStack_38 = 0;
    if (uVar7 < 5) {
      pbVar9 = *(byte **)(this + 8);
      if (pbVar9 < *(byte **)(this + 0x18)) {
        *(byte **)(this + 8) = pbVar9 + 1;
        uVar11 = uVar11 | (uint)*pbVar9 << ((byte)uVar7 & 0x1f);
      }
      uVar7 = uVar12 - 6;
    }
    uVar7 = uVar7 - 5;
    uVar12 = uVar11 >> 5;
    pbVar9 = &basisu::g_huffman_sorted_codelength_codes;
    *(uint *)(this + 0x20) = uVar12;
    uVar4 = 0;
    *(uint *)(this + 0x24) = uVar7;
    if ((uVar11 & 0x1f) - 1 < 0x15) {
      do {
        uVar13 = uVar12;
        if (uVar7 < 3) {
          pbVar10 = *(byte **)(this + 8);
          if (pbVar10 < *(byte **)(this + 0x18)) {
            *(byte **)(this + 8) = pbVar10 + 1;
            uVar13 = uVar12 | (uint)*pbVar10 << ((byte)uVar7 & 0x1f);
          }
          uVar7 = uVar7 + 8;
        }
        uVar7 = uVar7 - 3;
        uVar12 = uVar13 >> 3;
        pbVar10 = pbVar9 + 1;
        *(uint *)(this + 0x20) = uVar12;
        *(uint *)(this + 0x24) = uVar7;
        local_48[*pbVar9] = (byte)uVar13 & 7;
        pbVar9 = pbVar10;
      } while (pbVar10 != &basisu::g_huffman_sorted_codelength_codes + (uVar11 & 0x1f));
      local_78 = (void *)0x0;
      local_70 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      uVar4 = huffman_decoding_table::init((huffman_decoding_table *)&local_78,0x15,local_48,10);
      if ((char)uVar4 != '\0') {
        uVar4 = 0;
        if ((int)local_70 != 0) {
          local_88 = (uchar *)0x0;
          local_80 = 0;
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_88,SUB41(uVar18,0),(uint)(uVar18 == 1),
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          memset(local_88 + (local_80 & 0xffffffff),0,(ulong)(uVar18 - (int)local_80));
          local_80 = CONCAT44(local_80._4_4_,uVar17) & 0xffffffff00003fff;
          uVar5 = 0;
          do {
            uVar12 = *(uint *)(this + 0x24);
            uVar17 = *(uint *)(this + 0x20);
            if (uVar12 < 0x10) {
              uVar7 = uVar12;
              do {
                pbVar9 = *(byte **)(this + 8);
                if (pbVar9 < *(byte **)(this + 0x18)) {
                  *(byte **)(this + 8) = pbVar9 + 1;
                  uVar17 = uVar17 | (uint)*pbVar9 << ((byte)uVar7 & 0x1f);
                }
                uVar7 = uVar7 + 8;
                *(uint *)(this + 0x20) = uVar17;
                *(uint *)(this + 0x24) = uVar7;
              } while (uVar7 < 0x10);
              uVar12 = uVar12 + 8 + (0xf - uVar12 & 0xfffffff8);
            }
            uVar7 = *(uint *)((long)local_68 + (ulong)(uVar17 & 0x3ff) * 4);
            if ((int)uVar7 < 0) {
              iVar16 = 10;
              do {
                iVar15 = iVar16 + 1;
                sVar3 = *(short *)((long)local_58 +
                                  (ulong)(((uVar17 >> ((byte)iVar16 & 0x1f) & 1) - 1) - uVar7) * 2);
                uVar7 = (uint)sVar3;
                iVar16 = iVar15;
              } while (sVar3 < 0);
            }
            else {
              iVar15 = (int)uVar7 >> 0x10;
              uVar7 = uVar7 & 0xffff;
            }
            uVar12 = uVar12 - iVar15;
            uVar17 = uVar17 >> ((byte)iVar15 & 0x1f);
            *(uint *)(this + 0x24) = uVar12;
            *(uint *)(this + 0x20) = uVar17;
            iVar16 = (int)uVar5;
            if ((int)uVar7 < 0x11) {
              uVar14 = (ulong)(iVar16 + 1);
              local_88[uVar5] = (uchar)uVar7;
            }
            else {
              bVar6 = (byte)uVar12;
              if (uVar7 == 0x11) {
                if (uVar12 < 3) {
                  pbVar9 = *(byte **)(this + 8);
                  if (pbVar9 < *(byte **)(this + 0x18)) {
                    *(byte **)(this + 8) = pbVar9 + 1;
                    uVar17 = uVar17 | (uint)*pbVar9 << (bVar6 & 0x1f);
                  }
                  uVar12 = uVar12 + 8;
                }
                *(uint *)(this + 0x24) = uVar12 - 3;
                uVar14 = (ulong)(iVar16 + 3 + (uVar17 & 7));
                *(uint *)(this + 0x20) = uVar17 >> 3;
              }
              else if (uVar7 == 0x12) {
                if (uVar12 < 7) {
                  pbVar9 = *(byte **)(this + 8);
                  if (pbVar9 < *(byte **)(this + 0x18)) {
                    *(byte **)(this + 8) = pbVar9 + 1;
                    uVar17 = uVar17 | (uint)*pbVar9 << (bVar6 & 0x1f);
                  }
                  uVar12 = uVar12 + 8;
                }
                *(uint *)(this + 0x24) = uVar12 - 7;
                uVar14 = (ulong)(iVar16 + 0xb + (uVar17 & 0x7f));
                *(uint *)(this + 0x20) = uVar17 >> 7;
              }
              else {
                if (iVar16 == 0) {
                  uVar4 = 0;
                  goto LAB_0010cf39;
                }
                if (uVar7 == 0x13) {
                  if (uVar12 < 2) {
                    pbVar9 = *(byte **)(this + 8);
                    if (pbVar9 < *(byte **)(this + 0x18)) {
                      *(byte **)(this + 8) = pbVar9 + 1;
                      uVar17 = uVar17 | (uint)*pbVar9 << (bVar6 & 0x1f);
                    }
                    uVar12 = uVar12 + 8;
                  }
                  iVar15 = uVar12 - 2;
                  uVar12 = uVar17 >> 2;
                  iVar8 = (uVar17 & 3) + 3;
                }
                else {
                  if (uVar12 < 7) {
                    pbVar9 = *(byte **)(this + 8);
                    if (pbVar9 < *(byte **)(this + 0x18)) {
                      *(byte **)(this + 8) = pbVar9 + 1;
                      uVar17 = uVar17 | (uint)*pbVar9 << (bVar6 & 0x1f);
                    }
                    uVar12 = uVar12 + 8;
                  }
                  iVar15 = uVar12 - 7;
                  uVar12 = uVar17 >> 7;
                  iVar8 = (uVar17 & 0x7f) + 7;
                }
                *(uint *)(this + 0x20) = uVar12;
                *(int *)(this + 0x24) = iVar15;
                uVar2 = local_88[iVar16 - 1];
                if (uVar2 == '\0') {
LAB_0010cfe4:
                  uVar4 = 0;
                  goto LAB_0010cf39;
                }
                lVar1 = uVar5 + 1;
                do {
                  uVar12 = (uint)uVar5;
                  if (uVar18 <= uVar12) goto LAB_0010cfe4;
                  local_88[uVar5] = uVar2;
                  uVar5 = uVar5 + 1;
                } while (lVar1 + (ulong)(iVar8 - 1) != uVar5);
                uVar14 = (ulong)(uVar12 + 1);
              }
            }
            uVar5 = uVar14;
          } while ((uint)uVar14 < uVar18);
          uVar4 = 0;
          if (uVar18 == (uint)uVar14) {
            uVar4 = huffman_decoding_table::init(param_1,uVar18,local_88,10);
          }
LAB_0010cf39:
          if (local_88 != (uchar *)0x0) {
            free(local_88);
          }
        }
      }
      if (local_58 != (void *)0x0) {
        free(local_58);
      }
      if (local_68 != (void *)0x0) {
        free(local_68);
      }
      if (local_78 != (void *)0x0) {
        free(local_78);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* basisu::string_get_extension(std::__cxx11::string const&) */

basisu * __thiscall basisu::string_get_extension(basisu *this,string *param_1)

{
  undefined1 *__src;
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  long in_FS_OFFSET;
  ulong local_70;
  ulong *local_68;
  undefined8 local_60;
  ulong local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  cVar6 = (char)param_1;
  lVar2 = std::__cxx11::string::rfind(cVar6,0x2f);
  if (lVar2 == -1) {
    lVar2 = std::__cxx11::string::rfind(cVar6,0x2e);
    if (lVar2 != -1) {
      iVar7 = -1;
      goto LAB_0010d177;
    }
  }
  else {
    iVar7 = (int)lVar2;
    lVar2 = std::__cxx11::string::rfind(cVar6,0x2e);
    if (lVar2 == -1) {
      iVar4 = -1;
    }
    else {
LAB_0010d177:
      iVar4 = (int)lVar2;
    }
    if (iVar7 < iVar4) {
      __src = *(undefined1 **)param_1;
      uVar5 = *(ulong *)(param_1 + 8);
      local_68 = local_58;
      local_70 = uVar5;
      if (uVar5 < 0x10) {
        if (uVar5 == 1) {
          local_58[0] = CONCAT71(local_58[0]._1_7_,*__src);
        }
        else if (uVar5 != 0) goto LAB_0010d2a9;
      }
      else {
        local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
        local_58[0] = local_70;
LAB_0010d2a9:
        memcpy(local_68,__src,uVar5);
      }
      local_60 = local_70;
      *(undefined1 *)((long)local_68 + local_70) = 0;
      if (iVar4 == -2) {
        local_60 = 0;
        *(undefined1 *)local_68 = 0;
      }
      else if (iVar4 != -1) {
        std::__cxx11::string::_M_erase((ulong)&local_68,0);
      }
      *(basisu **)this = this + 0x10;
      if (local_68 == local_58) {
        uVar5 = local_60 + 1;
        uVar1 = (uint)uVar5;
        if (uVar1 < 8) {
          if ((uVar5 & 4) == 0) {
            if (uVar1 != 0) {
              this[0x10] = local_58[0]._0_1_;
              if ((uVar5 & 2) != 0) {
                *(undefined2 *)(this + (uVar5 & 0xffffffff) + 0xe) =
                     *(undefined2 *)((long)local_58 + ((uVar5 & 0xffffffff) - 2));
              }
            }
          }
          else {
            *(undefined4 *)(this + 0x10) = (undefined4)local_58[0];
            *(undefined4 *)(this + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)local_58 + ((uVar5 & 0xffffffff) - 4));
          }
        }
        else {
          *(ulong *)(this + 0x10) = local_58[0];
          *(undefined8 *)(this + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)local_58 + ((uVar5 & 0xffffffff) - 8));
          lVar2 = (long)(this + 0x10) - ((ulong)(this + 0x18) & 0xfffffffffffffff8);
          uVar1 = uVar1 + (int)lVar2 & 0xfffffff8;
          if (7 < uVar1) {
            uVar3 = 0;
            do {
              uVar5 = (ulong)uVar3;
              uVar3 = uVar3 + 8;
              *(undefined8 *)(((ulong)(this + 0x18) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)local_58 + (uVar5 - lVar2));
            } while (uVar3 < uVar1);
          }
        }
      }
      else {
        *(ulong **)this = local_68;
        *(ulong *)(this + 0x10) = local_58[0];
      }
      *(ulong *)(this + 8) = local_60;
      goto LAB_0010d22a;
    }
  }
  *(basisu **)this = this + 0x10;
  std::__cxx11::string::_M_construct<char_const*>(this,&_LC15,&_LC15);
LAB_0010d22a:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::string_format[abi:cxx11](char const*, ...) */

char * basisu::string_format_abi_cxx11_(char *param_1,...)

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
  undefined4 local_8f0;
  undefined4 local_8ec;
  undefined1 *local_8e8;
  undefined1 *local_8e0;
  char local_8d8 [2056];
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
  local_8e8 = &stack0x00000008;
  local_8e0 = local_c8;
  local_8f0 = 0x10;
  local_8ec = 0x30;
  local_b8 = in_RDX;
  local_b0 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  __vsnprintf_chk(local_8d8,0x800,2,0x800,in_RSI,&local_8f0);
  *(char **)param_1 = param_1 + 0x10;
  sVar1 = strlen(local_8d8);
  std::__cxx11::string::_M_construct<char_const*>(param_1,local_8d8,local_8d8 + sVar1);
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::vector<unsigned char>::reserve(unsigned long) */

void __thiscall basisu::vector<unsigned_char>::reserve(vector<unsigned_char> *this,ulong param_1)

{
  void *__ptr;
  uint uVar1;
  uint uVar2;
  long in_FS_OFFSET;
  void *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x20 == 0) {
    uVar2 = (uint)param_1;
    if (*(uint *)(this + 0xc) < uVar2) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB81(param_1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
        return;
      }
      goto LAB_0010dbcc;
    }
    if (uVar2 < *(uint *)(this + 0xc)) {
      local_38 = (void *)0x0;
      local_30 = 0;
      uVar1 = *(uint *)(this + 8);
      if (*(uint *)(this + 8) <= uVar2) {
        uVar1 = uVar2;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)&local_38,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar2 = *(uint *)(this + 8);
      if (local_30._4_4_ < uVar2) {
        if (local_38 != (void *)0x0) {
          free(local_38);
          local_38 = (void *)0x0;
          uVar2 = *(uint *)(this + 8);
          local_30 = 0;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_38,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      }
      else if ((int)local_30 != 0) {
        local_30 = (ulong)local_30._4_4_ << 0x20;
      }
      if (local_38 != (void *)0x0) {
        if (*(void **)this == (void *)0x0) {
          *(void **)this = local_38;
          *(uint *)(this + 0xc) = local_30._4_4_;
          goto LAB_0010db50;
        }
        memcpy(local_38,*(void **)this,(ulong)*(uint *)(this + 8));
      }
      __ptr = *(void **)this;
      *(void **)this = local_38;
      *(uint *)(this + 0xc) = local_30._4_4_;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
    }
  }
LAB_0010db50:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010dbcc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::vector<unsigned short>::reserve(unsigned long) */

void __thiscall basisu::vector<unsigned_short>::reserve(vector<unsigned_short> *this,ulong param_1)

{
  void *__ptr;
  uint uVar1;
  uint uVar2;
  long in_FS_OFFSET;
  void *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x20 == 0) {
    uVar2 = (uint)param_1;
    if (*(uint *)(this + 0xc) < uVar2) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB81(param_1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x2,false);
        return;
      }
      goto LAB_0010dd4c;
    }
    if (uVar2 < *(uint *)(this + 0xc)) {
      local_38 = (void *)0x0;
      local_30 = 0;
      uVar1 = *(uint *)(this + 8);
      if (*(uint *)(this + 8) <= uVar2) {
        uVar1 = uVar2;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)&local_38,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x2,false);
      uVar2 = *(uint *)(this + 8);
      if (local_30._4_4_ < uVar2) {
        if (local_38 != (void *)0x0) {
          free(local_38);
          local_38 = (void *)0x0;
          uVar2 = *(uint *)(this + 8);
          local_30 = 0;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_38,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x2,false);
      }
      else if ((int)local_30 != 0) {
        local_30 = (ulong)local_30._4_4_ << 0x20;
      }
      if (local_38 != (void *)0x0) {
        if (*(void **)this == (void *)0x0) {
          *(void **)this = local_38;
          *(uint *)(this + 0xc) = local_30._4_4_;
          goto LAB_0010dcd0;
        }
        memcpy(local_38,*(void **)this,(ulong)*(uint *)(this + 8) * 2);
      }
      __ptr = *(void **)this;
      *(void **)this = local_38;
      *(uint *)(this + 0xc) = local_30._4_4_;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
    }
  }
LAB_0010dcd0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010dd4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::vector<float, std::allocator<float> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<float,std::allocator<float>>::_M_default_append
          (vector<float,std::allocator<float>> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  undefined4 *__s;
  size_t sVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  if (param_1 == 0) {
    return;
  }
  puVar6 = *(undefined4 **)(this + 8);
  pvVar3 = *(void **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar6 >> 2)) {
    *puVar6 = 0;
    __s = puVar6 + 1;
    if (param_1 - 1 != 0) {
      sVar4 = (long)__s + ((param_1 - 1) * 4 - (long)puVar6) + -4;
      pvVar3 = memset(__s,0,sVar4);
      __s = (undefined4 *)((long)pvVar3 + sVar4);
    }
    *(undefined4 **)(this + 8) = __s;
    return;
  }
  sVar4 = (long)puVar6 - (long)pvVar3;
  uVar2 = (long)sVar4 >> 2;
  if (0x1fffffffffffffff - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_default_append");
  }
  uVar1 = param_1 + uVar2;
  if (uVar2 < param_1) {
    uVar2 = 0x1fffffffffffffff;
    if (uVar1 < 0x2000000000000000) {
      uVar2 = uVar1;
    }
    uVar2 = uVar2 * 4;
    __dest = operator_new(uVar2);
    puVar6 = (undefined4 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 - 1 != 0) goto LAB_0010de24;
LAB_0010de38:
    if (sVar4 != 0) goto LAB_0010df08;
    if (pvVar3 == (void *)0x0) goto LAB_0010de4a;
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  else {
    uVar2 = uVar2 * 2;
    if (0x1fffffffffffffff < uVar2) {
      uVar2 = 0x1fffffffffffffff;
    }
    uVar2 = uVar2 * 4;
    __dest = operator_new(uVar2);
    puVar6 = (undefined4 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 != 1) {
LAB_0010de24:
      memset(puVar6 + 1,0,(param_1 - 1) * 4);
      goto LAB_0010de38;
    }
LAB_0010df08:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_0010de4a:
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 4);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* std::vector<std::thread, std::allocator<std::thread> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<std::thread,std::allocator<std::thread>>::_M_default_append
          (vector<std::thread,std::allocator<std::thread>> *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *__s;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  if (param_1 == 0) {
    return;
  }
  __s = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)__s >> 3)) {
    memset(__s,0,param_1 * 8);
    *(undefined8 **)(this + 8) = __s + param_1;
    return;
  }
  uVar4 = (long)__s - (long)puVar2 >> 3;
  if (param_1 <= 0xfffffffffffffff - uVar4) {
    uVar1 = param_1 + uVar4;
    uVar9 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar9 = uVar1;
    }
    if ((param_1 <= uVar4) && (uVar9 = uVar4 * 2, 0xfffffffffffffff < uVar9)) {
      uVar9 = 0xfffffffffffffff;
    }
    puVar5 = (undefined8 *)operator_new(uVar9 * 8);
    memset((void *)((long)puVar5 + ((long)__s - (long)puVar2)),0,param_1 * 8);
    if (puVar2 != __s) {
      puVar6 = puVar5;
      puVar8 = puVar2;
      do {
        uVar3 = *puVar8;
        puVar7 = puVar6 + 1;
        puVar8 = puVar8 + 1;
        *puVar6 = uVar3;
        puVar6 = puVar7;
      } while (puVar7 != (undefined8 *)(((long)__s - (long)puVar2) + (long)puVar5));
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
    }
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar5 + uVar1;
    *(undefined8 **)(this + 0x10) = puVar5 + uVar9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("vector::_M_default_append");
}



/* void std::vector<std::function<void ()>, std::allocator<std::function<void ()> >
   >::_M_realloc_insert<std::function<void ()>
   const&>(__gnu_cxx::__normal_iterator<std::function<void ()>*, std::vector<std::function<void ()>,
   std::allocator<std::function<void ()> > > >, std::function<void ()> const&) */

void __thiscall
std::vector<std::function<void()>,std::allocator<std::function<void()>>>::
_M_realloc_insert<std::function<void()>const&>
          (vector<std::function<void()>,std::allocator<std::function<void()>>> *this,
          undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  undefined1 *local_58;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar6 = (long)puVar1 - (long)puVar2 >> 5;
  if (uVar6 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar6) goto LAB_0010e280;
    uVar9 = 0x3ffffffffffffff;
    if (uVar6 + 1 < 0x400000000000000) {
      uVar9 = uVar6 + 1;
    }
    uVar9 = uVar9 << 5;
  }
  else {
    uVar9 = uVar6 * 2;
    if (uVar9 < uVar6) {
LAB_0010e280:
      uVar9 = 0x7fffffffffffffe0;
    }
    else {
      if (uVar9 == 0) {
        local_58 = (undefined1 *)0x0;
        pauVar11 = (undefined1 (*) [16])0x20;
        pauVar8 = (undefined1 (*) [16])0x0;
        goto LAB_0010e157;
      }
      if (0x3ffffffffffffff < uVar9) {
        uVar9 = 0x3ffffffffffffff;
      }
      uVar9 = uVar9 << 5;
    }
  }
  pauVar8 = (undefined1 (*) [16])operator_new(uVar9);
  local_58 = *pauVar8 + uVar9;
  pauVar11 = pauVar8 + 2;
LAB_0010e157:
  pcVar3 = *(code **)(param_3 + 0x10);
  pauVar7 = (undefined1 (*) [16])((long)pauVar8 + ((long)param_2 - (long)puVar2));
  *(undefined8 *)pauVar7[1] = 0;
  *(undefined8 *)(pauVar7[1] + 8) = 0;
  *pauVar7 = (undefined1  [16])0x0;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(pauVar7,param_3,2);
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)pauVar7[1] = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(pauVar7[1] + 8) = uVar4;
  }
  if (param_2 != puVar2) {
    pauVar11 = pauVar8;
    puVar10 = puVar2;
    do {
      uVar4 = puVar10[3];
      *(undefined8 *)pauVar11[1] = 0;
      *pauVar11 = (undefined1  [16])0x0;
      *(undefined8 *)(pauVar11[1] + 8) = uVar4;
      if (puVar10[2] != 0) {
        uVar4 = *puVar10;
        uVar5 = puVar10[1];
        *(undefined8 *)pauVar11[1] = puVar10[2];
        *(undefined8 *)*pauVar11 = uVar4;
        *(undefined8 *)(*pauVar11 + 8) = uVar5;
      }
      puVar10 = puVar10 + 4;
      pauVar11 = pauVar11 + 2;
    } while (puVar10 != param_2);
    pauVar11 = (undefined1 (*) [16])((long)pauVar8 + (long)param_2 + (0x20 - (long)puVar2));
  }
  if (param_2 != puVar1) {
    lVar12 = (long)puVar1 - (long)param_2;
    pauVar7 = pauVar11;
    do {
      uVar4 = param_2[3];
      *(undefined8 *)pauVar7[1] = 0;
      *pauVar7 = (undefined1  [16])0x0;
      *(undefined8 *)(pauVar7[1] + 8) = uVar4;
      if (param_2[2] != 0) {
        uVar4 = *param_2;
        uVar5 = param_2[1];
        *(undefined8 *)pauVar7[1] = param_2[2];
        *(undefined8 *)*pauVar7 = uVar4;
        *(undefined8 *)(*pauVar7 + 8) = uVar5;
      }
      param_2 = param_2 + 4;
      pauVar7 = pauVar7 + 2;
    } while (param_2 != puVar1);
    pauVar11 = (undefined1 (*) [16])((long)pauVar11 + lVar12);
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined1 (**) [16])this = pauVar8;
  *(undefined1 (**) [16])(this + 8) = pauVar11;
  *(undefined1 **)(this + 0x10) = local_58;
  return;
}



/* void std::vector<std::function<void ()>, std::allocator<std::function<void ()> >
   >::_M_realloc_insert<std::function<void ()> >(__gnu_cxx::__normal_iterator<std::function<void
   ()>*, std::vector<std::function<void ()>, std::allocator<std::function<void ()> > > >,
   std::function<void ()>&&) */

void __thiscall
std::vector<std::function<void()>,std::allocator<std::function<void()>>>::
_M_realloc_insert<std::function<void()>>
          (vector<std::function<void()>,std::allocator<std::function<void()>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  undefined1 *puVar12;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 5;
  if (uVar5 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0010e4a0;
    uVar10 = 0x3ffffffffffffff;
    if (uVar5 + 1 < 0x400000000000000) {
      uVar10 = uVar5 + 1;
    }
    uVar10 = uVar10 << 5;
  }
  else {
    uVar10 = uVar5 * 2;
    if (uVar10 < uVar5) {
LAB_0010e4a0:
      uVar10 = 0x7fffffffffffffe0;
    }
    else {
      if (uVar10 == 0) {
        pauVar11 = (undefined1 (*) [16])0x20;
        puVar12 = (undefined1 *)0x0;
        pauVar6 = (undefined1 (*) [16])0x0;
        goto LAB_0010e380;
      }
      if (0x3ffffffffffffff < uVar10) {
        uVar10 = 0x3ffffffffffffff;
      }
      uVar10 = uVar10 << 5;
    }
  }
  pauVar6 = (undefined1 (*) [16])operator_new(uVar10);
  puVar12 = *pauVar6 + uVar10;
  pauVar11 = pauVar6 + 2;
LAB_0010e380:
  uVar3 = param_3[3];
  pauVar7 = (undefined1 (*) [16])(((long)param_2 - (long)puVar2) + (long)pauVar6);
  *(undefined8 *)pauVar7[1] = 0;
  *(undefined8 *)(pauVar7[1] + 8) = uVar3;
  lVar8 = param_3[2];
  *pauVar7 = (undefined1  [16])0x0;
  if (lVar8 != 0) {
    uVar3 = *param_3;
    uVar4 = param_3[1];
    *(long *)pauVar7[1] = lVar8;
    *(undefined1 (*) [16])(param_3 + 2) = (undefined1  [16])0x0;
    *(undefined8 *)*pauVar7 = uVar3;
    *(undefined8 *)(*pauVar7 + 8) = uVar4;
  }
  if (param_2 != puVar2) {
    pauVar11 = pauVar6;
    puVar9 = puVar2;
    do {
      uVar3 = puVar9[3];
      *(undefined8 *)pauVar11[1] = 0;
      *pauVar11 = (undefined1  [16])0x0;
      *(undefined8 *)(pauVar11[1] + 8) = uVar3;
      if (puVar9[2] != 0) {
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        *(undefined8 *)pauVar11[1] = puVar9[2];
        *(undefined8 *)*pauVar11 = uVar3;
        *(undefined8 *)(*pauVar11 + 8) = uVar4;
      }
      puVar9 = puVar9 + 4;
      pauVar11 = pauVar11 + 2;
    } while (puVar9 != param_2);
    pauVar11 = (undefined1 (*) [16])((long)pauVar6 + (long)param_2 + (0x20 - (long)puVar2));
  }
  if (param_2 != puVar1) {
    lVar8 = (long)puVar1 - (long)param_2;
    pauVar7 = pauVar11;
    do {
      uVar3 = param_2[3];
      *(undefined8 *)pauVar7[1] = 0;
      *pauVar7 = (undefined1  [16])0x0;
      *(undefined8 *)(pauVar7[1] + 8) = uVar3;
      if (param_2[2] != 0) {
        uVar3 = *param_2;
        uVar4 = param_2[1];
        *(undefined8 *)pauVar7[1] = param_2[2];
        *(undefined8 *)*pauVar7 = uVar3;
        *(undefined8 *)(*pauVar7 + 8) = uVar4;
      }
      param_2 = param_2 + 4;
      pauVar7 = pauVar7 + 2;
    } while (param_2 != puVar1);
    pauVar11 = (undefined1 (*) [16])((long)pauVar11 + lVar8);
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined1 (**) [16])this = pauVar6;
  *(undefined1 (**) [16])(this + 8) = pauVar11;
  *(undefined1 **)(this + 0x10) = puVar12;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::mersenne_twister_engine<unsigned long, 32ul, 624ul, 397ul, 31ul, 2567483615ul, 11ul,
   4294967295ul, 7ul, 2636928640ul, 15ul, 4022730752ul, 18ul, 1812433253ul>::_M_gen_rand() */

void __thiscall
std::
mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
::_M_gen_rand(mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
              *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
  *pmVar9;
  mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
  *pmVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar8 = *(ulong *)this;
  pmVar10 = this;
  do {
    uVar11 = uVar8 & 0xffffffff80000000;
    pmVar9 = pmVar10 + 8;
    uVar8 = *(ulong *)pmVar9;
    *(ulong *)pmVar10 =
         (ulong)(-((uint)uVar8 & 1) & 0x9908b0df) ^
         (uVar11 | (uint)uVar8 & 0x7fffffff) >> 1 ^ *(ulong *)(pmVar10 + 0xc68);
    uVar7 = _UNK_0010e7a8;
    uVar6 = __LC86;
    uVar5 = _UNK_0010e798;
    uVar4 = __LC85;
    uVar3 = _UNK_0010e788;
    uVar2 = __LC84;
    uVar1 = _UNK_0010e778;
    uVar11 = __LC83;
    pmVar10 = pmVar9;
  } while (pmVar9 != this + 0x718);
  do {
    pmVar10 = pmVar9 + 0x10;
    uVar8 = *(ulong *)pmVar9 & uVar11 | *(ulong *)(pmVar9 + 8) & uVar2;
    uVar12 = *(ulong *)(pmVar9 + 8) & uVar1 | *(ulong *)(pmVar9 + 0x10) & uVar3;
    *(ulong *)pmVar9 = -(uVar8 & uVar4) & uVar6 ^ uVar8 >> 1 ^ *(ulong *)(pmVar9 + -0x718);
    *(ulong *)(pmVar9 + 8) = -(uVar12 & uVar5) & uVar7 ^ uVar12 >> 1 ^ *(ulong *)(pmVar9 + -0x710);
    pmVar9 = pmVar10;
  } while (pmVar10 != this + 0x1378);
  *(undefined8 *)(this + 0x1380) = 0;
  uVar8 = *(ulong *)(this + 0x1378) & 0xffffffff80000000 |
          (ulong)((uint)*(undefined8 *)this & 0x7fffffff);
  *(ulong *)(this + 0x1378) =
       (ulong)(-((uint)uVar8 & 1) & 0x9908b0df) ^ uVar8 >> 1 ^ *(ulong *)(this + 0xc60);
  return;
}



/* std::mersenne_twister_engine<unsigned long, 32ul, 624ul, 397ul, 31ul, 2567483615ul, 11ul,
   4294967295ul, 7ul, 2636928640ul, 15ul, 4022730752ul, 18ul,
   1812433253ul>::TEMPNAMEPLACEHOLDERVALUE() */

ulong __thiscall
std::
mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
::operator()(mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
             *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x1380);
  if (0x26f < uVar1) {
    _M_gen_rand(this);
    uVar1 = *(ulong *)(this + 0x1380);
  }
  uVar2 = *(ulong *)(this + uVar1 * 8);
  *(ulong *)(this + 0x1380) = uVar1 + 1;
  uVar2 = uVar2 >> 0xb & 0xffffffff ^ uVar2;
  uVar2 = (uint)(uVar2 << 7) & 0x9d2c5680 ^ uVar2;
  uVar2 = (uint)(uVar2 << 0xf) & 0xefc60000 ^ uVar2;
  return uVar2 >> 0x12 ^ uVar2;
}



/* basisu::interval_timer::g_init_ticks */

void basisu::interval_timer::_GLOBAL__sub_I_g_init_ticks(void)

{
  g_black_color = 0xff000000;
  return;
}


