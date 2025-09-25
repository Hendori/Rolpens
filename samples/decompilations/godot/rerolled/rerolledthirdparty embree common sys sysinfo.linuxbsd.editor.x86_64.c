/* embree::getPlatformName[abi:cxx11]() */

embree * __thiscall embree::getPlatformName_abi_cxx11_(embree *this)

{
  this[0x1d] = (embree)0x0;
  *(undefined8 *)(this + 0x10) = 0x36282078756e694c;
  *(embree **)this = this + 0x10;
  *(undefined8 *)(this + 0x15) = 0x2974696234362820;
  *(undefined8 *)(this + 8) = 0xd;
  return this;
}



/* embree::getCompilerName[abi:cxx11]() */

embree * __thiscall embree::getCompilerName_abi_cxx11_(embree *this)

{
  *(undefined8 *)(this + 8) = 10;
  *(embree **)this = this + 0x10;
  *(undefined8 *)(this + 0x10) = 0x332e333120434347;
  *(undefined2 *)(this + 0x18) = 0x302e;
  this[0x1a] = (embree)0x0;
  return this;
}



/* WARNING: Removing unreachable block (ram,0x001000a1) */
/* embree::getCPUVendor[abi:cxx11]() */

embree * __thiscall embree::getCPUVendor_abi_cxx11_(embree *this)

{
  undefined4 uVar1;
  size_t sVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = cpuid_basic_info(0);
  uVar1 = *(undefined4 *)(lVar6 + 4);
  local_48._4_4_ = *(undefined4 *)(lVar6 + 8);
  local_40 = *(undefined4 *)(lVar6 + 0xc);
  *(embree **)this = this + 0x10;
  local_3c = 0;
  uStack_50 = (undefined *)0x1000c8;
  local_48._0_4_ = uVar1;
  sVar2 = strlen((char *)&local_48);
  if (sVar2 == 1) {
    this[0x10] = SUB41(uVar1,0);
  }
  else if (sVar2 != 0) {
    uVar5 = (uint)sVar2;
    if (uVar5 < 8) {
      if ((sVar2 & 4) == 0) {
        if (uVar5 != 0) {
          this[0x10] = local_48._0_1_;
          if ((sVar2 & 2) != 0) {
            *(undefined2 *)(this + (sVar2 & 0xffffffff) + 0xe) =
                 *(undefined2 *)((long)&uStack_50 + (sVar2 & 0xffffffff) + 6);
          }
        }
      }
      else {
        *(undefined4 *)(this + 0x10) = uVar1;
        *(undefined4 *)(this + (sVar2 & 0xffffffff) + 0xc) =
             *(undefined4 *)((long)&uStack_50 + (sVar2 & 0xffffffff) + 4);
      }
    }
    else {
      *(ulong *)(this + 0x10) = CONCAT44(local_48._4_4_,(undefined4)local_48);
      *(undefined8 *)(this + (sVar2 & 0xffffffff) + 8) =
           *(undefined8 *)((long)&uStack_50 + (sVar2 & 0xffffffff));
      lVar6 = (long)(this + 0x10) - ((ulong)(this + 0x18) & 0xfffffffffffffff8);
      uVar5 = (int)lVar6 + uVar5 & 0xfffffff8;
      if (7 < uVar5) {
        uVar4 = 0;
        do {
          uVar3 = (int)uVar4 + 8;
          *(undefined8 *)(((ulong)(this + 0x18) & 0xfffffffffffffff8) + uVar4) =
               *(undefined8 *)((long)&local_48 + (uVar4 - lVar6));
          uVar4 = (ulong)uVar3;
        } while (uVar3 < uVar5);
      }
    }
  }
  *(size_t *)(this + 8) = sVar2;
  this[sVar2 + 0x10] = (embree)0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  uStack_50 = &UNK_001001b9;
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001002e7) */
/* WARNING: Removing unreachable block (ram,0x001002d8) */
/* WARNING: Removing unreachable block (ram,0x001001dc) */
/* embree::getCPUModel() */

undefined8 embree::getCPUModel(void)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long *local_48;
  size_t local_40;
  long local_38 [4];
  ulong uVar7;
  
  puVar6 = &local_58;
  local_38[3] = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = cpuid_basic_info(0);
  uVar3 = *(undefined4 *)(lVar4 + 4);
  local_58._4_4_ = *(undefined4 *)(lVar4 + 8);
  local_50 = *(undefined4 *)(lVar4 + 0xc);
  local_4c = 0;
  local_58._0_4_ = uVar3;
  local_48 = local_38;
  local_40 = strlen((char *)&local_58);
  if (local_40 == 1) {
    local_38[0]._0_1_ = (undefined1)uVar3;
  }
  else if (local_40 != 0) {
    plVar9 = local_38;
    if (7 < (uint)local_40) {
      uVar8 = 0;
      do {
        uVar5 = (int)uVar8 + 8;
        uVar7 = (ulong)uVar5;
        *(undefined8 *)((long)local_38 + uVar8) = *(undefined8 *)((long)&local_58 + uVar8);
        uVar8 = uVar7;
      } while (uVar5 < ((uint)local_40 & 0xfffffff8));
      plVar9 = (long *)((long)local_38 + uVar7);
      puVar6 = (undefined8 *)((long)&local_58 + uVar7);
    }
    lVar4 = 0;
    if ((local_40 & 4) != 0) {
      *(undefined4 *)plVar9 = *(undefined4 *)puVar6;
      lVar4 = 4;
    }
    if ((local_40 & 2) != 0) {
      *(undefined2 *)((long)plVar9 + lVar4) = *(undefined2 *)((long)puVar6 + lVar4);
      lVar4 = lVar4 + 2;
    }
    if ((local_40 & 1) != 0) {
      *(undefined1 *)((long)plVar9 + lVar4) = *(undefined1 *)((long)puVar6 + lVar4);
    }
  }
  *(undefined1 *)((long)local_38 + local_40) = 0;
  if (((local_40 == 0xc) && (*local_48 == 0x49656e69756e6547)) && ((int)local_48[1] == 0x6c65746e))
  {
    uVar10 = 0;
    if (local_48 != local_38) {
      operator_delete(local_48,CONCAT71(local_38[0]._1_7_,(undefined1)local_38[0]) + 1);
    }
    piVar1 = (int *)cpuid_basic_info(0);
    if (0 < *piVar1) {
      puVar2 = (uint *)cpuid_Version_info(1);
      uVar5 = *puVar2;
      if (((uVar5 & 0xf00) == 0x600) &&
         (uVar5 = (uVar5 >> 0xc & 0xf0) + 0x600 + ((int)uVar5 >> 4 & 0xfU), uVar5 < 0x6a7)) {
        if (0x63b < uVar5) {
          switch(uVar5) {
          case 0x63c:
          case 0x645:
          case 0x646:
            uVar10 = 0xd;
            break;
          case 0x63d:
          case 0x647:
            uVar10 = 0xb;
            break;
          case 0x63e:
            uVar10 = 0xe;
            break;
          case 0x63f:
            uVar10 = 0xc;
            break;
          default:
            goto switchD_00100347_caseD_640;
          case 0x64e:
          case 0x65e:
            uVar10 = 7;
            break;
          case 0x64f:
          case 0x656:
            uVar10 = 10;
            break;
          case 0x655:
            uVar10 = 6;
            break;
          case 0x657:
            uVar10 = 9;
            break;
          case 0x666:
            uVar10 = 4;
            break;
          case 0x66a:
          case 0x66c:
            break;
          case 0x67d:
          case 0x67e:
            uVar10 = 1;
            break;
          case 0x685:
            uVar10 = 8;
            break;
          case 0x68c:
            uVar10 = 2;
            break;
          case 0x68e:
          case 0x69e:
            uVar10 = 5;
            break;
          case 0x6a5:
          case 0x6a6:
            uVar10 = 3;
          }
          goto switchD_00100347_caseD_66a;
        }
        if (uVar5 != 0x63b) {
          if (uVar5 < 0x61a) {
            uVar10 = 0x12;
            if ((uVar5 - 0x60f & 0xfffffff7) == 0) goto switchD_00100347_caseD_66a;
            if (uVar5 == 0x60e) {
              uVar10 = 0x13;
              goto switchD_00100347_caseD_66a;
            }
          }
          else {
            uVar10 = 0x11;
            uVar8 = 1L << ((char)uVar5 - 0x1aU & 0x3f);
            if ((((uVar8 & 0x140839) != 0) || (uVar10 = 0x10, (uVar8 & 0x290000) != 0)) ||
               (uVar10 = 0xf, uVar5 == 0x63a)) goto switchD_00100347_caseD_66a;
          }
        }
      }
    }
  }
  else if (local_48 != local_38) {
    operator_delete(local_48,CONCAT71(local_38[0]._1_7_,(undefined1)local_38[0]) + 1);
  }
switchD_00100347_caseD_640:
  uVar10 = 0x15;
switchD_00100347_caseD_66a:
  if (local_38[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::stringOfCPUModel[abi:cxx11](embree::CPU) */

embree * __thiscall embree::stringOfCPUModel_abi_cxx11_(embree *this,undefined4 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 0:
    uVar3 = 0x656349206e6f6558;
    *(embree **)this = this + 0x10;
    goto LAB_00100911;
  case 1:
    uVar3 = 0x6563492065726f43;
    *(embree **)this = this + 0x10;
LAB_00100911:
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined8 *)(this + 0x15) = 0x656b614c20656349;
    *(undefined8 *)(this + 8) = 0xd;
    this[0x1d] = (embree)0x0;
    break;
  case 2:
    *(undefined8 *)(this + 8) = 0xf;
    *(undefined8 *)(this + 0x10) = 0x6769542065726f43;
    *(embree **)this = this + 0x10;
    *(undefined8 *)(this + 0x17) = 0x656b614c20726567;
    this[0x1f] = (embree)0x0;
    break;
  case 3:
    *(undefined8 *)(this + 8) = 0xf;
    *(undefined8 *)(this + 0x10) = 0x6d6f432065726f43;
    *(embree **)this = this + 0x10;
    *(undefined8 *)(this + 0x17) = 0x656b614c2074656d;
    this[0x1f] = (embree)0x0;
    break;
  case 4:
    local_18 = 0x10;
    *(embree **)this = this + 0x10;
    pcVar2 = (char *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_18);
    uVar1 = _LC1._8_8_;
    uVar3 = _LC1._0_8_;
    *(char **)this = pcVar2;
    *(long *)(this + 0x10) = local_18;
    *(undefined8 *)pcVar2 = uVar3;
    *(undefined8 *)(pcVar2 + 8) = uVar1;
    *(long *)(this + 8) = local_18;
    *(undefined1 *)(*(long *)this + local_18) = 0;
    break;
  case 5:
    *(undefined8 *)(this + 8) = 0xe;
    *(undefined8 *)(this + 0x10) = 0x62614b2065726f43;
    *(embree **)this = this + 0x10;
    *(undefined8 *)(this + 0x16) = 0x656b614c20796261;
    this[0x1e] = (embree)0x0;
    break;
  case 6:
    uVar3 = 0x796b53206e6f6558;
    *(embree **)this = this + 0x10;
    goto LAB_001007d1;
  case 7:
    uVar3 = 0x796b532065726f43;
    *(embree **)this = this + 0x10;
LAB_001007d1:
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined8 *)(this + 0x15) = 0x656b614c20796b53;
    *(undefined8 *)(this + 8) = 0xd;
    this[0x1d] = (embree)0x0;
    break;
  case 8:
    local_18 = 0x15;
    *(embree **)this = this + 0x10;
    pcVar2 = (char *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_18);
    uVar1 = _LC1._24_8_;
    uVar3 = _LC1._16_8_;
    *(char **)this = pcVar2;
    *(long *)(this + 0x10) = local_18;
    *(undefined8 *)pcVar2 = uVar3;
    *(undefined8 *)(pcVar2 + 8) = uVar1;
    pcVar2[0xd] = 'h';
    pcVar2[0xe] = 't';
    pcVar2[0xf] = 's';
    pcVar2[0x10] = ' ';
    pcVar2[0x11] = 'M';
    pcVar2[0x12] = 'i';
    pcVar2[0x13] = 'l';
    pcVar2[0x14] = 'l';
    *(long *)(this + 8) = local_18;
    *(undefined1 *)(*(long *)this + local_18) = 0;
    break;
  case 9:
    local_18 = 0x18;
    *(embree **)this = this + 0x10;
    pcVar2 = (char *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_18);
    uVar1 = _LC1._24_8_;
    uVar3 = _LC1._16_8_;
    *(char **)this = pcVar2;
    *(long *)(this + 0x10) = local_18;
    pcVar2[0x10] = ' ';
    pcVar2[0x11] = 'L';
    pcVar2[0x12] = 'a';
    pcVar2[0x13] = 'n';
    pcVar2[0x14] = 'd';
    pcVar2[0x15] = 'i';
    pcVar2[0x16] = 'n';
    pcVar2[0x17] = 'g';
    *(undefined8 *)pcVar2 = uVar3;
    *(undefined8 *)(pcVar2 + 8) = uVar1;
    *(long *)(this + 8) = local_18;
    *(undefined1 *)(*(long *)this + local_18) = 0;
    break;
  case 10:
    uVar3 = 0x6f7242206e6f6558;
    *(embree **)this = this + 0x10;
    goto LAB_001006d1;
  case 0xb:
    uVar3 = 0x6f72422065726f43;
    *(embree **)this = this + 0x10;
LAB_001006d1:
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined8 *)(this + 0x16) = 0x6c6c657764616f72;
    *(undefined8 *)(this + 8) = 0xe;
    this[0x1e] = (embree)0x0;
    break;
  case 0xc:
    *(undefined4 *)(this + 0x18) = 0x6c6c6577;
    *(embree **)this = this + 0x10;
    *(undefined8 *)(this + 0x10) = 0x736148206e6f6558;
    *(undefined8 *)(this + 8) = 0xc;
    this[0x1c] = (embree)0x0;
    break;
  case 0xd:
    *(undefined4 *)(this + 0x18) = 0x6c6c6577;
    *(embree **)this = this + 0x10;
    *(undefined8 *)(this + 0x10) = 0x7361482065726f43;
    *(undefined8 *)(this + 8) = 0xc;
    this[0x1c] = (embree)0x0;
    break;
  case 0xe:
    uVar3 = 0x797649206e6f6558;
    *(embree **)this = this + 0x10;
    goto LAB_00100621;
  case 0xf:
    uVar3 = 0x7976492065726f43;
    *(embree **)this = this + 0x10;
LAB_00100621:
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined8 *)(this + 0x17) = 0x6567646972422079;
    *(undefined8 *)(this + 8) = 0xf;
    this[0x1f] = (embree)0x0;
    break;
  case 0x10:
    *(undefined4 *)(this + 0x18) = 0x65676469;
    *(embree **)this = this + 0x10;
    *(undefined8 *)(this + 0x10) = 0x72422079646e6153;
    *(undefined8 *)(this + 8) = 0xc;
    this[0x1c] = (embree)0x0;
    break;
  case 0x11:
    *(undefined4 *)(this + 0x10) = 0x6168654e;
    *(embree **)this = this + 0x10;
    *(undefined4 *)(this + 0x13) = 0x6d656c61;
    *(undefined8 *)(this + 8) = 7;
    this[0x17] = (embree)0x0;
    break;
  case 0x12:
    *(undefined4 *)(this + 0x10) = 0x65726f43;
    *(embree **)this = this + 0x10;
    this[0x14] = (embree)0x32;
    *(undefined8 *)(this + 8) = 5;
    this[0x15] = (embree)0x0;
    break;
  case 0x13:
    *(undefined4 *)(this + 0x10) = 0x65726f43;
    *(embree **)this = this + 0x10;
    *(undefined8 *)(this + 8) = 4;
    this[0x14] = (embree)0x0;
    break;
  case 0x14:
    this[0x12] = (embree)0x4d;
    *(embree **)this = this + 0x10;
    *(undefined2 *)(this + 0x10) = 0x5241;
    *(undefined8 *)(this + 8) = 3;
    this[0x13] = (embree)0x0;
    break;
  case 0x15:
    *(undefined8 *)(this + 8) = 0xb;
    *(undefined8 *)(this + 0x10) = 0x206e776f6e6b6e55;
    *(embree **)this = this + 0x10;
    *(undefined4 *)(this + 0x17) = 0x55504320;
    this[0x1b] = (embree)0x0;
    break;
  default:
    local_18 = 0x13;
    *(embree **)this = this + 0x10;
    pcVar2 = (char *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_18);
    uVar1 = _LC1._40_8_;
    uVar3 = _LC1._32_8_;
    *(char **)this = pcVar2;
    *(long *)(this + 0x10) = local_18;
    *(undefined8 *)pcVar2 = uVar3;
    *(undefined8 *)(pcVar2 + 8) = uVar1;
    pcVar2[0xf] = 'r';
    pcVar2[0x10] = 'o';
    pcVar2[0x11] = 'r';
    pcVar2[0x12] = ')';
    *(long *)(this + 8) = local_18;
    *(undefined1 *)(*(long *)this + local_18) = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* embree::get_xcr0() */

undefined1  [12] embree::get_xcr0(void)

{
  int in_XCR0;
  undefined4 in_register_00000604;
  undefined1 auVar1 [12];
  
  auVar1._0_8_ = (long)in_XCR0;
  auVar1._8_4_ = in_register_00000604;
  return auVar1;
}



/* WARNING: Removing unreachable block (ram,0x00100af2) */
/* WARNING: Removing unreachable block (ram,0x00100db0) */
/* WARNING: Removing unreachable block (ram,0x00100a21) */
/* WARNING: Removing unreachable block (ram,0x00100a0f) */
/* WARNING: Removing unreachable block (ram,0x00100a05) */
/* embree::getCPUFeatures() */

ulong embree::getCPUFeatures(void)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (getCPUFeatures()::cpu_features != 0) {
    return (ulong)getCPUFeatures()::cpu_features;
  }
  puVar1 = (uint *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid(0x80000000);
  if (*puVar1 == 0) {
    local_40 = 0;
    uVar18 = 0;
    uVar17 = 0;
    uVar7 = 0;
    local_44 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    local_48 = 0;
    local_4c = 0;
    if (0x80000000 < *puVar2) {
      local_50 = 0;
      uVar9 = 0;
      uVar12 = 0;
      uVar11 = 0;
      local_54 = 0;
      uVar10 = 0;
      local_58 = 0;
      local_5c = 0;
      local_60 = 0;
      local_64 = 0;
      local_68 = 0;
      local_6c = 0;
      local_70 = 0;
      local_3c = 0;
      goto LAB_00100aed;
    }
    local_50 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar12 = 0;
    local_54 = 0;
    uVar11 = 0;
    uVar10 = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
  }
  else {
    lVar3 = cpuid_Version_info(1);
    local_50 = *(uint *)(lVar3 + 0xc);
    if (*puVar1 < 7) {
      local_40 = 0;
      uVar18 = 0;
      uVar17 = 0;
      uVar7 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar12 = 0;
      local_44 = 0;
      uVar10 = 0;
      local_48 = 0;
      local_4c = 0;
    }
    else {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar10 = *(uint *)(lVar4 + 4);
      local_4c = uVar10 & 0x10000000;
      local_40 = *(uint *)(lVar4 + 0xc) & 2;
      local_48 = uVar10 & 0x40000000;
      uVar12 = uVar10 & 0x20;
      uVar14 = uVar10 & 8;
      uVar7 = uVar10 & 0x100;
      local_44 = uVar10 & 0x200000;
      uVar15 = uVar10 & 0x10000;
      uVar16 = uVar10 & 0x20000;
      uVar17 = uVar10 & 0x4000000;
      uVar18 = uVar10 & 0x8000000;
    }
    uVar6 = 0;
    local_3c = local_50 & 0x8000000;
    uVar11 = *(uint *)(lVar3 + 8) & 0x4000000;
    local_70 = *(uint *)(lVar3 + 8) & 0x2000000;
    local_6c = local_50 & 1;
    local_68 = local_50 & 0x200;
    local_64 = local_50 & 0x80000;
    local_60 = local_50 & 0x100000;
    local_5c = local_50 & 0x800000;
    local_58 = local_50 & 0x10000000;
    local_54 = local_50 & 0x20000000;
    uVar9 = local_50 & 0x1000;
    local_50 = local_50 & 0x40000000;
    uVar13 = uVar14;
    if (0x80000000 < *puVar2) {
LAB_00100aed:
      lVar3 = cpuid(0x80000001);
      uVar6 = *(uint *)(lVar3 + 0xc) & 0x20;
      uVar13 = uVar14;
    }
    uVar8 = 0;
    if (local_3c != 0) {
      uVar5 = get_xcr0();
      if ((uVar5 & 2) == 0) goto LAB_00100be0;
      if ((uVar5 & 4) != 0) {
        if ((~uVar5 & 0xe0) == 0) {
          getCPUFeatures()::cpu_features = 0xe000000;
          uVar8 = 0xe000000;
        }
        else {
          getCPUFeatures()::cpu_features = 0x6000000;
          uVar8 = 0x6000000;
        }
        goto LAB_00100be0;
      }
    }
  }
  getCPUFeatures()::cpu_features = 0x2000000;
  uVar8 = 0x2000000;
LAB_00100be0:
  if (local_70 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 1;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (uVar11 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 2;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (local_6c != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 4;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (local_68 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 8;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (local_64 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x10;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (local_60 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x20;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (local_5c != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x40;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (local_58 != 0) {
    uVar8 = uVar8 | 0x80;
    getCPUFeatures()::cpu_features = (uint)uVar8;
  }
  if (local_54 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x100;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (local_50 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x200;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (uVar12 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x400;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (uVar9 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x800;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (uVar6 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x1000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (uVar13 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x2000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (uVar7 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x4000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (uVar15 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x10000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (uVar16 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x20000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (uVar17 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x40000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (uVar18 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x80000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (local_4c != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x100000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (local_48 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x200000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (local_44 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x800000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if ((int)uVar10 < 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x400000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  if (local_40 != 0) {
    getCPUFeatures()::cpu_features = (uint)uVar8 | 0x1000000;
    uVar8 = (ulong)getCPUFeatures()::cpu_features;
  }
  return uVar8 & 0xffffffff;
}



/* WARNING: Type propagation algorithm not settling */
/* embree::stringOfCPUFeatures[abi:cxx11](int) */

embree * __thiscall embree::stringOfCPUFeatures_abi_cxx11_(embree *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  
  *(embree **)this = this + 0x10;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (embree)0x0;
  if ((param_1 & 0x2000000U) == 0) {
    iVar1 = 0;
    if ((param_1 & 0x4000000U) != 0) {
LAB_00101032:
      iVar1 = 0x10296b;
      std::__cxx11::string::_M_append((char *)this,0x10296b);
    }
  }
  else {
    iVar1 = 0x102951;
    std::__cxx11::string::_M_append((char *)this,0x102951);
    if ((param_1 & 0x4000000U) != 0) {
      if (0x3fffffffffffffffU - *(long *)(this + 8) < 4) goto LAB_00101601;
      goto LAB_00101032;
    }
  }
  if ((param_1 & 0x8000000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 4) goto LAB_00101601;
    iVar1 = 0x102970;
    std::__cxx11::string::_M_append((char *)this,0x102970);
  }
  if ((param_1 & 1U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 4) goto LAB_00101601;
    iVar1 = 0x102975;
    std::__cxx11::string::_M_append((char *)this,0x102975);
  }
  if ((param_1 & 2U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 5) goto LAB_00101601;
    iVar1 = 0x10297a;
    std::__cxx11::string::_M_append((char *)this,0x10297a);
  }
  if ((param_1 & 4U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 5) goto LAB_00101601;
    iVar1 = 0x102980;
    std::__cxx11::string::_M_append((char *)this,0x102980);
  }
  if ((param_1 & 8U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 6) goto LAB_00101601;
    iVar1 = 0x102986;
    std::__cxx11::string::_M_append((char *)this,0x102986);
  }
  if ((param_1 & 0x10U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 7) goto LAB_00101601;
    iVar1 = 0x10298d;
    std::__cxx11::string::_M_append((char *)this,0x10298d);
  }
  if ((param_1 & 0x20U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 7) goto LAB_00101601;
    iVar1 = 0x102995;
    std::__cxx11::string::_M_append((char *)this,0x102995);
  }
  if ((param_1 & 0x40U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 7) goto LAB_00101601;
    iVar1 = 0x10299d;
    std::__cxx11::string::_M_append((char *)this,0x10299d);
  }
  if ((param_1 & 0x80U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 4) goto LAB_00101601;
    iVar1 = 0x1029a5;
    std::__cxx11::string::_M_append((char *)this,0x1029a5);
  }
  if ((param_1 & 0x100U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 5) goto LAB_00101601;
    iVar1 = 0x1029aa;
    std::__cxx11::string::_M_append((char *)this,0x1029aa);
  }
  if ((param_1 & 0x200U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 7) goto LAB_00101601;
    iVar1 = 0x1029b0;
    std::__cxx11::string::_M_append((char *)this,0x1029b0);
  }
  if ((param_1 & 0x400U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 5) goto LAB_00101601;
    iVar1 = 0x1029b8;
    std::__cxx11::string::_M_append((char *)this,0x1029b8);
  }
  if ((param_1 & 0x800U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 5) goto LAB_00101601;
    iVar1 = 0x1029be;
    std::__cxx11::string::_M_append((char *)this,0x1029be);
  }
  if ((param_1 & 0x1000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 6) goto LAB_00101601;
    iVar1 = 0x1029c4;
    std::__cxx11::string::_M_append((char *)this,0x1029c4);
  }
  if ((param_1 & 0x2000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 5) goto LAB_00101601;
    iVar1 = 0x1029cb;
    std::__cxx11::string::_M_append((char *)this,0x1029cb);
  }
  if ((param_1 & 0x4000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 5) goto LAB_00101601;
    iVar1 = 0x1029d1;
    std::__cxx11::string::_M_append((char *)this,0x1029d1);
  }
  if ((param_1 & 0x10000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 8) goto LAB_00101601;
    iVar1 = 0x1029d7;
    std::__cxx11::string::_M_append((char *)this,0x1029d7);
  }
  if ((param_1 & 0x20000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 9) goto LAB_00101601;
    iVar1 = 0x1029e0;
    std::__cxx11::string::_M_append((char *)this,0x1029e0);
  }
  if ((param_1 & 0x40000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 9) goto LAB_00101601;
    iVar1 = 0x1029ea;
    std::__cxx11::string::_M_append((char *)this,0x1029ea);
  }
  if ((param_1 & 0x80000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 9) goto LAB_00101601;
    iVar1 = 0x1029f4;
    std::__cxx11::string::_M_append((char *)this,0x1029f4);
  }
  if ((param_1 & 0x100000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 9) goto LAB_00101601;
    iVar1 = 0x1029fe;
    std::__cxx11::string::_M_append((char *)this,0x1029fe);
  }
  if ((param_1 & 0x200000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 9) goto LAB_00101601;
    iVar1 = 0x102a08;
    std::__cxx11::string::_M_append((char *)this,0x102a08);
  }
  if ((param_1 & 0x400000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 9) goto LAB_00101601;
    iVar1 = 0x102a12;
    std::__cxx11::string::_M_append((char *)this,0x102a12);
  }
  if ((param_1 & 0x800000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 0xb) goto LAB_00101601;
    iVar1 = 0x102a1c;
    std::__cxx11::string::_M_append((char *)this,0x102a1c);
  }
  if ((param_1 & 0x1000000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 0xb) goto LAB_00101601;
    iVar1 = 0x102a28;
    std::__cxx11::string::_M_append((char *)this,0x102a28);
  }
  if ((param_1 & 0x10000000U) != 0) {
    if (0x3fffffffffffffffU - *(long *)(this + 8) < 5) goto LAB_00101601;
    iVar1 = 0x102a34;
    std::__cxx11::string::_M_append((char *)this,0x102a34);
  }
  if ((param_1 & 0x20000000U) == 0) {
    return this;
  }
  if (6 < 0x3fffffffffffffffU - *(long *)(this + 8)) {
    std::__cxx11::string::_M_append((char *)this,0x102a3a);
    return this;
  }
LAB_00101601:
  pcVar2 = "basic_string::append";
  std::__throw_length_error("basic_string::append");
  if (iVar1 == 0x200007f) {
    *(undefined4 *)((embree *)pcVar2 + 0x10) = 0x34455353;
    *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
    *(undefined2 *)((embree *)pcVar2 + 0x14) = 0x322e;
    *(long *)((embree *)pcVar2 + 8) = 6;
    ((embree *)pcVar2)[0x16] = (embree)0x0;
    return (embree *)pcVar2;
  }
  if (iVar1 < 0x2000080) {
    switch(iVar1) {
    case 0x2000001:
      ((embree *)pcVar2)[0x12] = (embree)0x45;
      *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
      *(undefined2 *)((embree *)pcVar2 + 0x10) = 0x5353;
      *(long *)((embree *)pcVar2 + 8) = 3;
      ((embree *)pcVar2)[0x13] = (embree)0x0;
      return (embree *)pcVar2;
    case 0x2000003:
      *(undefined4 *)((embree *)pcVar2 + 0x10) = 0x32455353;
      *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
      *(long *)((embree *)pcVar2 + 8) = 4;
      ((embree *)pcVar2)[0x14] = (embree)0x0;
      return (embree *)pcVar2;
    case 0x2000007:
      *(undefined4 *)((embree *)pcVar2 + 0x10) = 0x33455353;
      *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
      *(long *)((embree *)pcVar2 + 8) = 4;
      ((embree *)pcVar2)[0x14] = (embree)0x0;
      return (embree *)pcVar2;
    case 0x200000f:
      *(undefined4 *)((embree *)pcVar2 + 0x10) = 0x45535353;
      *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
      ((embree *)pcVar2)[0x14] = (embree)0x33;
      *(long *)((embree *)pcVar2 + 8) = 5;
      ((embree *)pcVar2)[0x15] = (embree)0x0;
      return (embree *)pcVar2;
    case 0x200001f:
      ((embree *)pcVar2)[0x16] = (embree)0x0;
      *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
      *(undefined4 *)((embree *)pcVar2 + 0x10) = 0x34455353;
      *(undefined2 *)((embree *)pcVar2 + 0x14) = 0x312e;
      *(long *)((embree *)pcVar2 + 8) = 6;
      return (embree *)pcVar2;
    }
  }
  else {
    if (iVar1 == 0xe737fff) {
      ((embree *)pcVar2)[0x16] = (embree)0x0;
      *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
      *(undefined4 *)((embree *)pcVar2 + 0x10) = 0x35585641;
      *(undefined2 *)((embree *)pcVar2 + 0x14) = 0x3231;
      *(long *)((embree *)pcVar2 + 8) = 6;
      return (embree *)pcVar2;
    }
    if (iVar1 < 0xe738000) {
      if (iVar1 == 0x60000ff) {
        ((embree *)pcVar2)[0x12] = (embree)0x58;
        *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
        *(undefined2 *)((embree *)pcVar2 + 0x10) = 0x5641;
        *(long *)((embree *)pcVar2 + 8) = 3;
        ((embree *)pcVar2)[0x13] = (embree)0x0;
        return (embree *)pcVar2;
      }
      if (iVar1 == 0x6007fff) {
        *(undefined4 *)((embree *)pcVar2 + 0x10) = 0x32585641;
        *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
        *(long *)((embree *)pcVar2 + 8) = 4;
        ((embree *)pcVar2)[0x14] = (embree)0x0;
        return (embree *)pcVar2;
      }
    }
    else {
      if (iVar1 == 0x10000003) {
        *(undefined4 *)((embree *)pcVar2 + 0x10) = 0x4e4f454e;
        *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
        *(long *)((embree *)pcVar2 + 8) = 4;
        ((embree *)pcVar2)[0x14] = (embree)0x0;
        return (embree *)pcVar2;
      }
      if (iVar1 == 0x26007fff) {
        *(undefined4 *)((embree *)pcVar2 + 0x10) = 0x454e7832;
        *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
        *(undefined2 *)((embree *)pcVar2 + 0x14) = 0x4e4f;
        *(long *)((embree *)pcVar2 + 8) = 6;
        ((embree *)pcVar2)[0x16] = (embree)0x0;
        return (embree *)pcVar2;
      }
    }
  }
  *(undefined4 *)((embree *)pcVar2 + 0x10) = 0x4e4b4e55;
  *(embree **)pcVar2 = (embree *)pcVar2 + 0x10;
  *(undefined4 *)((embree *)pcVar2 + 0x13) = 0x4e574f4e;
  *(long *)((embree *)pcVar2 + 8) = 7;
  ((embree *)pcVar2)[0x17] = (embree)0x0;
  return (embree *)pcVar2;
}



/* embree::stringOfISA[abi:cxx11](int) */

void __thiscall embree::stringOfISA_abi_cxx11_(embree *this,int param_1)

{
  if (param_1 == 0x200007f) {
    *(undefined4 *)(this + 0x10) = 0x34455353;
    *(embree **)this = this + 0x10;
    *(undefined2 *)(this + 0x14) = 0x322e;
    *(undefined8 *)(this + 8) = 6;
    this[0x16] = (embree)0x0;
    return;
  }
  if (param_1 < 0x2000080) {
    switch(param_1) {
    case 0x2000001:
      this[0x12] = (embree)0x45;
      *(embree **)this = this + 0x10;
      *(undefined2 *)(this + 0x10) = 0x5353;
      *(undefined8 *)(this + 8) = 3;
      this[0x13] = (embree)0x0;
      return;
    case 0x2000003:
      *(undefined4 *)(this + 0x10) = 0x32455353;
      *(embree **)this = this + 0x10;
      *(undefined8 *)(this + 8) = 4;
      this[0x14] = (embree)0x0;
      return;
    case 0x2000007:
      *(undefined4 *)(this + 0x10) = 0x33455353;
      *(embree **)this = this + 0x10;
      *(undefined8 *)(this + 8) = 4;
      this[0x14] = (embree)0x0;
      return;
    case 0x200000f:
      *(undefined4 *)(this + 0x10) = 0x45535353;
      *(embree **)this = this + 0x10;
      this[0x14] = (embree)0x33;
      *(undefined8 *)(this + 8) = 5;
      this[0x15] = (embree)0x0;
      return;
    case 0x200001f:
      this[0x16] = (embree)0x0;
      *(embree **)this = this + 0x10;
      *(undefined4 *)(this + 0x10) = 0x34455353;
      *(undefined2 *)(this + 0x14) = 0x312e;
      *(undefined8 *)(this + 8) = 6;
      return;
    }
  }
  else {
    if (param_1 == 0xe737fff) {
      this[0x16] = (embree)0x0;
      *(embree **)this = this + 0x10;
      *(undefined4 *)(this + 0x10) = 0x35585641;
      *(undefined2 *)(this + 0x14) = 0x3231;
      *(undefined8 *)(this + 8) = 6;
      return;
    }
    if (param_1 < 0xe738000) {
      if (param_1 == 0x60000ff) {
        this[0x12] = (embree)0x58;
        *(embree **)this = this + 0x10;
        *(undefined2 *)(this + 0x10) = 0x5641;
        *(undefined8 *)(this + 8) = 3;
        this[0x13] = (embree)0x0;
        return;
      }
      if (param_1 == 0x6007fff) {
        *(undefined4 *)(this + 0x10) = 0x32585641;
        *(embree **)this = this + 0x10;
        *(undefined8 *)(this + 8) = 4;
        this[0x14] = (embree)0x0;
        return;
      }
    }
    else {
      if (param_1 == 0x10000003) {
        *(undefined4 *)(this + 0x10) = 0x4e4f454e;
        *(embree **)this = this + 0x10;
        *(undefined8 *)(this + 8) = 4;
        this[0x14] = (embree)0x0;
        return;
      }
      if (param_1 == 0x26007fff) {
        *(undefined4 *)(this + 0x10) = 0x454e7832;
        *(embree **)this = this + 0x10;
        *(undefined2 *)(this + 0x14) = 0x4e4f;
        *(undefined8 *)(this + 8) = 6;
        this[0x16] = (embree)0x0;
        return;
      }
    }
  }
  *(undefined4 *)(this + 0x10) = 0x4e4b4e55;
  *(embree **)this = this + 0x10;
  *(undefined4 *)(this + 0x13) = 0x4e574f4e;
  *(undefined8 *)(this + 8) = 7;
  this[0x17] = (embree)0x0;
  return;
}



/* embree::hasISA(int, int) */

bool embree::hasISA(int param_1,int param_2)

{
  return (~param_1 & param_2) == 0;
}



/* embree::supportedTargetList[abi:cxx11](int) */

embree * __thiscall embree::supportedTargetList_abi_cxx11_(embree *this,int param_1)

{
  *(embree **)this = this + 0x10;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (embree)0x0;
  if ((~param_1 & 0x2000001U) == 0) {
    std::__cxx11::string::_M_append((char *)this,0x102975);
    if ((param_1 & 0x2000003U) == 0x2000003) {
      if (4 < 0x3fffffffffffffffU - *(long *)(this + 8)) goto LAB_00101bc0;
      goto LAB_00101bb2;
    }
  }
  else if ((param_1 & 0x2000003U) == 0x2000003) goto LAB_00101bc0;
  do {
    if ((~param_1 & 0x2000007U) == 0) {
      if (4 < 0x3fffffffffffffffU - *(long *)(this + 8)) {
        std::__cxx11::string::_M_append((char *)this,0x102980);
        goto joined_r0x00101966;
      }
    }
    else {
joined_r0x00101966:
      if ((~param_1 & 0x200000fU) == 0) {
        if (0x3fffffffffffffffU - *(long *)(this + 8) < 6) goto LAB_00101bb2;
        std::__cxx11::string::_M_append((char *)this,0x102986);
      }
      if ((~param_1 & 0x200001fU) == 0) {
        if (0x3fffffffffffffffU - *(long *)(this + 8) < 7) goto LAB_00101bb2;
        std::__cxx11::string::_M_append((char *)this,0x10298d);
      }
      if ((~param_1 & 0x200007fU) == 0) {
        if (0x3fffffffffffffffU - *(long *)(this + 8) < 7) goto LAB_00101bb2;
        std::__cxx11::string::_M_append((char *)this,0x102995);
      }
      if ((~param_1 & 0x60000ffU) == 0) {
        if (0x3fffffffffffffffU - *(long *)(this + 8) < 4) goto LAB_00101bb2;
        std::__cxx11::string::_M_append((char *)this,0x1029a5);
      }
      if ((~param_1 & 0x60003ffU) == 0) {
        if (0x3fffffffffffffffU - *(long *)(this + 8) < 5) goto LAB_00101bb2;
        std::__cxx11::string::_M_append((char *)this,0x102a42);
      }
      if ((~param_1 & 0x6007fffU) == 0) {
        if (0x3fffffffffffffffU - *(long *)(this + 8) < 5) goto LAB_00101bb2;
        std::__cxx11::string::_M_append((char *)this,0x1029b8);
      }
      if ((~param_1 & 0xe737fffU) == 0) {
        if (0x3fffffffffffffffU - *(long *)(this + 8) < 7) goto LAB_00101bb2;
        std::__cxx11::string::_M_append((char *)this,0x102a48);
      }
      if ((~param_1 & 0x10000003U) == 0) {
        if (0x3fffffffffffffffU - *(long *)(this + 8) < 5) goto LAB_00101bb2;
        std::__cxx11::string::_M_append((char *)this,0x102a34);
      }
      if ((~param_1 & 0x26007fffU) != 0) {
        return this;
      }
      param_1 = 0;
      if (6 < 0x3fffffffffffffffU - *(long *)(this + 8)) {
        std::__cxx11::string::_M_append((char *)this,0x102a3a);
        return this;
      }
    }
LAB_00101bb2:
    std::__throw_length_error("basic_string::append");
LAB_00101bc0:
    std::__cxx11::string::_M_append((char *)this,0x10297a);
  } while( true );
}



/* embree::getExecutableFileName[abi:cxx11]() */

embree * __thiscall embree::getExecutableFileName_abi_cxx11_(embree *this)

{
  uint uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  __pid_t _Var4;
  long *plVar5;
  ssize_t sVar6;
  size_t sVar7;
  embree *peVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  char cVar18;
  uint uVar19;
  long in_FS_OFFSET;
  byte bVar20;
  size_t local_10b0;
  long *local_10a8;
  long local_10a0;
  long local_1098 [2];
  long *local_1088 [2];
  long local_1078 [2];
  long *local_1068;
  long local_1060;
  long local_1058;
  undefined4 uStack_104c;
  undefined4 local_1048;
  char cStack_1044;
  char cStack_1043;
  char cStack_1042;
  char cStack_1041;
  char acStack_1040 [8];
  char local_1038 [8];
  char acStack_1030 [8];
  char local_1028 [8];
  char acStack_1020 [8];
  char local_1018 [8];
  char acStack_1010 [8];
  char local_1008 [8];
  char acStack_1000 [8];
  char local_ff8 [8];
  char acStack_ff0 [8];
  char local_fe8 [8];
  char acStack_fe0 [8];
  char local_fd8 [8];
  char acStack_fd0 [8];
  char local_fc8 [8];
  char acStack_fc0 [8];
  char local_fb8 [8];
  char acStack_fb0 [8];
  char local_fa8 [8];
  char acStack_fa0 [8];
  char local_f98 [8];
  char cStack_f90;
  undefined7 uStack_f8f;
  char cStack_f88;
  char acStack_f87 [3911];
  long local_40;
  
  bVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _Var4 = getpid();
  uVar12 = (ulong)(-(_Var4 >> 0x1f) & 0xff);
  uVar15 = (long)_Var4;
  if (_Var4 < 0) {
    uVar15 = -(long)_Var4;
  }
  cVar18 = (char)-(_Var4 >> 0x1f);
  if (uVar15 < 10) {
    local_1088[0] = local_1078;
    std::__cxx11::string::_M_construct((ulong)local_1088,cVar18 + '\x01');
    pcVar9 = (char *)((long)local_1088[0] + uVar12);
LAB_00101e25:
    cVar18 = (char)uVar15 + '0';
  }
  else {
    if (uVar15 < 100) {
      local_1088[0] = local_1078;
      std::__cxx11::string::_M_construct((ulong)local_1088,cVar18 + '\x02');
      local_1048._0_1_ = (embree)_LC1[0x30];
      local_1048._1_1_ = _LC1[0x31];
      local_1048._2_1_ = _LC1[0x32];
      local_1048._3_1_ = _LC1[0x33];
      cStack_1044 = _LC1[0x34];
      cStack_1043 = _LC1[0x35];
      cStack_1042 = _LC1[0x36];
      cStack_1041 = _LC1[0x37];
      acStack_1040[0] = _LC1[0x38];
      acStack_1040[1] = _LC1[0x39];
      acStack_1040[2] = _LC1[0x3a];
      acStack_1040[3] = _LC1[0x3b];
      acStack_1040[4] = _LC1[0x3c];
      acStack_1040[5] = _LC1[0x3d];
      acStack_1040[6] = _LC1[0x3e];
      acStack_1040[7] = _LC1[0x3f];
      pcVar9 = (char *)((long)local_1088[0] + uVar12);
      local_1038[0] = _LC1[0x40];
      local_1038[1] = _LC1[0x41];
      local_1038[2] = _LC1[0x42];
      local_1038[3] = _LC1[0x43];
      local_1038[4] = _LC1[0x44];
      local_1038[5] = _LC1[0x45];
      local_1038[6] = _LC1[0x46];
      local_1038[7] = _LC1[0x47];
      acStack_1030[0] = _LC1[0x48];
      acStack_1030[1] = _LC1[0x49];
      acStack_1030[2] = _LC1[0x4a];
      acStack_1030[3] = _LC1[0x4b];
      acStack_1030[4] = _LC1[0x4c];
      acStack_1030[5] = _LC1[0x4d];
      acStack_1030[6] = _LC1[0x4e];
      acStack_1030[7] = _LC1[0x4f];
      local_1028[0] = _LC1[0x50];
      local_1028[1] = _LC1[0x51];
      local_1028[2] = _LC1[0x52];
      local_1028[3] = _LC1[0x53];
      local_1028[4] = _LC1[0x54];
      local_1028[5] = _LC1[0x55];
      local_1028[6] = _LC1[0x56];
      local_1028[7] = _LC1[0x57];
      acStack_1020[0] = _LC1[0x58];
      acStack_1020[1] = _LC1[0x59];
      acStack_1020[2] = _LC1[0x5a];
      acStack_1020[3] = _LC1[0x5b];
      acStack_1020[4] = _LC1[0x5c];
      acStack_1020[5] = _LC1[0x5d];
      acStack_1020[6] = _LC1[0x5e];
      acStack_1020[7] = _LC1[0x5f];
      local_1018[0] = _LC1[0x60];
      local_1018[1] = _LC1[0x61];
      local_1018[2] = _LC1[0x62];
      local_1018[3] = _LC1[99];
      local_1018[4] = _LC1[100];
      local_1018[5] = _LC1[0x65];
      local_1018[6] = _LC1[0x66];
      local_1018[7] = _LC1[0x67];
      acStack_1010[0] = _LC1[0x68];
      acStack_1010[1] = _LC1[0x69];
      acStack_1010[2] = _LC1[0x6a];
      acStack_1010[3] = _LC1[0x6b];
      acStack_1010[4] = _LC1[0x6c];
      acStack_1010[5] = _LC1[0x6d];
      acStack_1010[6] = _LC1[0x6e];
      acStack_1010[7] = _LC1[0x6f];
      local_1008[0] = _LC1[0x70];
      local_1008[1] = _LC1[0x71];
      local_1008[2] = _LC1[0x72];
      local_1008[3] = _LC1[0x73];
      local_1008[4] = _LC1[0x74];
      local_1008[5] = _LC1[0x75];
      local_1008[6] = _LC1[0x76];
      local_1008[7] = _LC1[0x77];
      acStack_1000[0] = _LC1[0x78];
      acStack_1000[1] = _LC1[0x79];
      acStack_1000[2] = _LC1[0x7a];
      acStack_1000[3] = _LC1[0x7b];
      acStack_1000[4] = _LC1[0x7c];
      acStack_1000[5] = _LC1[0x7d];
      acStack_1000[6] = _LC1[0x7e];
      acStack_1000[7] = _LC1[0x7f];
      local_ff8[0] = _LC1[0x80];
      local_ff8[1] = _LC1[0x81];
      local_ff8[2] = _LC1[0x82];
      local_ff8[3] = _LC1[0x83];
      local_ff8[4] = _LC1[0x84];
      local_ff8[5] = _LC1[0x85];
      local_ff8[6] = _LC1[0x86];
      local_ff8[7] = _LC1[0x87];
      acStack_ff0[0] = _LC1[0x88];
      acStack_ff0[1] = _LC1[0x89];
      acStack_ff0[2] = _LC1[0x8a];
      acStack_ff0[3] = _LC1[0x8b];
      acStack_ff0[4] = _LC1[0x8c];
      acStack_ff0[5] = _LC1[0x8d];
      acStack_ff0[6] = _LC1[0x8e];
      acStack_ff0[7] = _LC1[0x8f];
      local_fe8[0] = _LC1[0x90];
      local_fe8[1] = _LC1[0x91];
      local_fe8[2] = _LC1[0x92];
      local_fe8[3] = _LC1[0x93];
      local_fe8[4] = _LC1[0x94];
      local_fe8[5] = _LC1[0x95];
      local_fe8[6] = _LC1[0x96];
      local_fe8[7] = _LC1[0x97];
      acStack_fe0[0] = _LC1[0x98];
      acStack_fe0[1] = _LC1[0x99];
      acStack_fe0[2] = _LC1[0x9a];
      acStack_fe0[3] = _LC1[0x9b];
      acStack_fe0[4] = _LC1[0x9c];
      acStack_fe0[5] = _LC1[0x9d];
      acStack_fe0[6] = _LC1[0x9e];
      acStack_fe0[7] = _LC1[0x9f];
      local_fd8[0] = _LC1[0xa0];
      local_fd8[1] = _LC1[0xa1];
      local_fd8[2] = _LC1[0xa2];
      local_fd8[3] = _LC1[0xa3];
      local_fd8[4] = _LC1[0xa4];
      local_fd8[5] = _LC1[0xa5];
      local_fd8[6] = _LC1[0xa6];
      local_fd8[7] = _LC1[0xa7];
      acStack_fd0[0] = _LC1[0xa8];
      acStack_fd0[1] = _LC1[0xa9];
      acStack_fd0[2] = _LC1[0xaa];
      acStack_fd0[3] = _LC1[0xab];
      acStack_fd0[4] = _LC1[0xac];
      acStack_fd0[5] = _LC1[0xad];
      acStack_fd0[6] = _LC1[0xae];
      acStack_fd0[7] = _LC1[0xaf];
      local_fc8[0] = _LC1[0xb0];
      local_fc8[1] = _LC1[0xb1];
      local_fc8[2] = _LC1[0xb2];
      local_fc8[3] = _LC1[0xb3];
      local_fc8[4] = _LC1[0xb4];
      local_fc8[5] = _LC1[0xb5];
      local_fc8[6] = _LC1[0xb6];
      local_fc8[7] = _LC1[0xb7];
      acStack_fc0[0] = _LC1[0xb8];
      acStack_fc0[1] = _LC1[0xb9];
      acStack_fc0[2] = _LC1[0xba];
      acStack_fc0[3] = _LC1[0xbb];
      acStack_fc0[4] = _LC1[0xbc];
      acStack_fc0[5] = _LC1[0xbd];
      acStack_fc0[6] = _LC1[0xbe];
      acStack_fc0[7] = _LC1[0xbf];
      local_fb8[0] = _LC1[0xc0];
      local_fb8[1] = _LC1[0xc1];
      local_fb8[2] = _LC1[0xc2];
      local_fb8[3] = _LC1[0xc3];
      local_fb8[4] = _LC1[0xc4];
      local_fb8[5] = _LC1[0xc5];
      local_fb8[6] = _LC1[0xc6];
      local_fb8[7] = _LC1[199];
      acStack_fb0[0] = _LC1[200];
      acStack_fb0[1] = _LC1[0xc9];
      acStack_fb0[2] = _LC1[0xca];
      acStack_fb0[3] = _LC1[0xcb];
      acStack_fb0[4] = _LC1[0xcc];
      acStack_fb0[5] = _LC1[0xcd];
      acStack_fb0[6] = _LC1[0xce];
      acStack_fb0[7] = _LC1[0xcf];
      local_fa8[0] = _LC1[0xd0];
      local_fa8[1] = _LC1[0xd1];
      local_fa8[2] = _LC1[0xd2];
      local_fa8[3] = _LC1[0xd3];
      local_fa8[4] = _LC1[0xd4];
      local_fa8[5] = _LC1[0xd5];
      local_fa8[6] = _LC1[0xd6];
      local_fa8[7] = _LC1[0xd7];
      acStack_fa0[0] = _LC1[0xd8];
      acStack_fa0[1] = _LC1[0xd9];
      acStack_fa0[2] = _LC1[0xda];
      acStack_fa0[3] = _LC1[0xdb];
      acStack_fa0[4] = _LC1[0xdc];
      acStack_fa0[5] = _LC1[0xdd];
      acStack_fa0[6] = _LC1[0xde];
      acStack_fa0[7] = _LC1[0xdf];
      local_f98[0] = _LC1[0xe0];
      local_f98[1] = _LC1[0xe1];
      local_f98[2] = _LC1[0xe2];
      local_f98[3] = _LC1[0xe3];
      local_f98[4] = _LC1[0xe4];
      local_f98[5] = _LC1[0xe5];
      local_f98[6] = _LC1[0xe6];
      local_f98[7] = _LC1[0xe7];
      cStack_f90 = (char)_LC1._232_8_;
      uStack_f8f = (undefined7)_LC1._240_8_;
      cStack_f88 = SUB81(_LC1._240_8_,7);
      acStack_f87[0] = _LC1[0xf8];
      acStack_f87[1] = _LC1[0xf9];
      acStack_f87[2] = _LC1[0xfa];
      acStack_f87[3] = _LC1[0xfb];
      acStack_f87[4] = _LC1[0xfc];
      acStack_f87[5] = _LC1[0xfd];
      acStack_f87[6] = _LC1[0xfe];
      acStack_f87[7] = _LC1[0xff];
    }
    else {
      cVar18 = (char)(_Var4 >> 0x1f);
      if (uVar15 < 1000) {
        uVar19 = 2;
        iVar14 = 3;
LAB_001020c9:
        cVar18 = (char)iVar14 - cVar18;
      }
      else {
        if (uVar15 < 10000) {
          uVar19 = 3;
          iVar14 = 4;
          goto LAB_001020c9;
        }
        iVar14 = 5;
        if (uVar15 < 100000) {
LAB_001020c5:
          uVar19 = iVar14 - 1;
          goto LAB_001020c9;
        }
        if (999999 < uVar15) {
          uVar19 = 6;
          iVar14 = 7;
          if (9999999 < uVar15) {
            if (99999999 < uVar15) {
              if (uVar15 < 1000000000) {
                iVar14 = 9;
                goto LAB_001020c5;
              }
              uVar19 = 9;
              goto LAB_00101cbb;
            }
            uVar19 = 7;
            iVar14 = 8;
          }
          goto LAB_001020c9;
        }
        uVar19 = 5;
LAB_00101cbb:
        cVar18 = ((char)uVar19 + '\x01') - cVar18;
      }
      local_1088[0] = local_1078;
      std::__cxx11::string::_M_construct((ulong)local_1088,cVar18);
      local_1048._0_1_ = (embree)_LC1[0x30];
      local_1048._1_1_ = _LC1[0x31];
      local_1048._2_1_ = _LC1[0x32];
      local_1048._3_1_ = _LC1[0x33];
      cStack_1044 = _LC1[0x34];
      cStack_1043 = _LC1[0x35];
      cStack_1042 = _LC1[0x36];
      cStack_1041 = _LC1[0x37];
      acStack_1040[0] = _LC1[0x38];
      acStack_1040[1] = _LC1[0x39];
      acStack_1040[2] = _LC1[0x3a];
      acStack_1040[3] = _LC1[0x3b];
      acStack_1040[4] = _LC1[0x3c];
      acStack_1040[5] = _LC1[0x3d];
      acStack_1040[6] = _LC1[0x3e];
      acStack_1040[7] = _LC1[0x3f];
      pcVar9 = (char *)((long)local_1088[0] + uVar12);
      local_1038[0] = _LC1[0x40];
      local_1038[1] = _LC1[0x41];
      local_1038[2] = _LC1[0x42];
      local_1038[3] = _LC1[0x43];
      local_1038[4] = _LC1[0x44];
      local_1038[5] = _LC1[0x45];
      local_1038[6] = _LC1[0x46];
      local_1038[7] = _LC1[0x47];
      acStack_1030[0] = _LC1[0x48];
      acStack_1030[1] = _LC1[0x49];
      acStack_1030[2] = _LC1[0x4a];
      acStack_1030[3] = _LC1[0x4b];
      acStack_1030[4] = _LC1[0x4c];
      acStack_1030[5] = _LC1[0x4d];
      acStack_1030[6] = _LC1[0x4e];
      acStack_1030[7] = _LC1[0x4f];
      local_1028[0] = _LC1[0x50];
      local_1028[1] = _LC1[0x51];
      local_1028[2] = _LC1[0x52];
      local_1028[3] = _LC1[0x53];
      local_1028[4] = _LC1[0x54];
      local_1028[5] = _LC1[0x55];
      local_1028[6] = _LC1[0x56];
      local_1028[7] = _LC1[0x57];
      acStack_1020[0] = _LC1[0x58];
      acStack_1020[1] = _LC1[0x59];
      acStack_1020[2] = _LC1[0x5a];
      acStack_1020[3] = _LC1[0x5b];
      acStack_1020[4] = _LC1[0x5c];
      acStack_1020[5] = _LC1[0x5d];
      acStack_1020[6] = _LC1[0x5e];
      acStack_1020[7] = _LC1[0x5f];
      local_1018[0] = _LC1[0x60];
      local_1018[1] = _LC1[0x61];
      local_1018[2] = _LC1[0x62];
      local_1018[3] = _LC1[99];
      local_1018[4] = _LC1[100];
      local_1018[5] = _LC1[0x65];
      local_1018[6] = _LC1[0x66];
      local_1018[7] = _LC1[0x67];
      acStack_1010[0] = _LC1[0x68];
      acStack_1010[1] = _LC1[0x69];
      acStack_1010[2] = _LC1[0x6a];
      acStack_1010[3] = _LC1[0x6b];
      acStack_1010[4] = _LC1[0x6c];
      acStack_1010[5] = _LC1[0x6d];
      acStack_1010[6] = _LC1[0x6e];
      acStack_1010[7] = _LC1[0x6f];
      local_1008[0] = _LC1[0x70];
      local_1008[1] = _LC1[0x71];
      local_1008[2] = _LC1[0x72];
      local_1008[3] = _LC1[0x73];
      local_1008[4] = _LC1[0x74];
      local_1008[5] = _LC1[0x75];
      local_1008[6] = _LC1[0x76];
      local_1008[7] = _LC1[0x77];
      acStack_1000[0] = _LC1[0x78];
      acStack_1000[1] = _LC1[0x79];
      acStack_1000[2] = _LC1[0x7a];
      acStack_1000[3] = _LC1[0x7b];
      acStack_1000[4] = _LC1[0x7c];
      acStack_1000[5] = _LC1[0x7d];
      acStack_1000[6] = _LC1[0x7e];
      acStack_1000[7] = _LC1[0x7f];
      local_ff8[0] = _LC1[0x80];
      local_ff8[1] = _LC1[0x81];
      local_ff8[2] = _LC1[0x82];
      local_ff8[3] = _LC1[0x83];
      local_ff8[4] = _LC1[0x84];
      local_ff8[5] = _LC1[0x85];
      local_ff8[6] = _LC1[0x86];
      local_ff8[7] = _LC1[0x87];
      acStack_ff0[0] = _LC1[0x88];
      acStack_ff0[1] = _LC1[0x89];
      acStack_ff0[2] = _LC1[0x8a];
      acStack_ff0[3] = _LC1[0x8b];
      acStack_ff0[4] = _LC1[0x8c];
      acStack_ff0[5] = _LC1[0x8d];
      acStack_ff0[6] = _LC1[0x8e];
      acStack_ff0[7] = _LC1[0x8f];
      local_fe8[0] = _LC1[0x90];
      local_fe8[1] = _LC1[0x91];
      local_fe8[2] = _LC1[0x92];
      local_fe8[3] = _LC1[0x93];
      local_fe8[4] = _LC1[0x94];
      local_fe8[5] = _LC1[0x95];
      local_fe8[6] = _LC1[0x96];
      local_fe8[7] = _LC1[0x97];
      acStack_fe0[0] = _LC1[0x98];
      acStack_fe0[1] = _LC1[0x99];
      acStack_fe0[2] = _LC1[0x9a];
      acStack_fe0[3] = _LC1[0x9b];
      acStack_fe0[4] = _LC1[0x9c];
      acStack_fe0[5] = _LC1[0x9d];
      acStack_fe0[6] = _LC1[0x9e];
      acStack_fe0[7] = _LC1[0x9f];
      local_fd8[0] = _LC1[0xa0];
      local_fd8[1] = _LC1[0xa1];
      local_fd8[2] = _LC1[0xa2];
      local_fd8[3] = _LC1[0xa3];
      local_fd8[4] = _LC1[0xa4];
      local_fd8[5] = _LC1[0xa5];
      local_fd8[6] = _LC1[0xa6];
      local_fd8[7] = _LC1[0xa7];
      acStack_fd0[0] = _LC1[0xa8];
      acStack_fd0[1] = _LC1[0xa9];
      acStack_fd0[2] = _LC1[0xaa];
      acStack_fd0[3] = _LC1[0xab];
      acStack_fd0[4] = _LC1[0xac];
      acStack_fd0[5] = _LC1[0xad];
      acStack_fd0[6] = _LC1[0xae];
      acStack_fd0[7] = _LC1[0xaf];
      local_fc8[0] = _LC1[0xb0];
      local_fc8[1] = _LC1[0xb1];
      local_fc8[2] = _LC1[0xb2];
      local_fc8[3] = _LC1[0xb3];
      local_fc8[4] = _LC1[0xb4];
      local_fc8[5] = _LC1[0xb5];
      local_fc8[6] = _LC1[0xb6];
      local_fc8[7] = _LC1[0xb7];
      acStack_fc0[0] = _LC1[0xb8];
      acStack_fc0[1] = _LC1[0xb9];
      acStack_fc0[2] = _LC1[0xba];
      acStack_fc0[3] = _LC1[0xbb];
      acStack_fc0[4] = _LC1[0xbc];
      acStack_fc0[5] = _LC1[0xbd];
      acStack_fc0[6] = _LC1[0xbe];
      acStack_fc0[7] = _LC1[0xbf];
      local_fb8[0] = _LC1[0xc0];
      local_fb8[1] = _LC1[0xc1];
      local_fb8[2] = _LC1[0xc2];
      local_fb8[3] = _LC1[0xc3];
      local_fb8[4] = _LC1[0xc4];
      local_fb8[5] = _LC1[0xc5];
      local_fb8[6] = _LC1[0xc6];
      local_fb8[7] = _LC1[199];
      acStack_fb0[0] = _LC1[200];
      acStack_fb0[1] = _LC1[0xc9];
      acStack_fb0[2] = _LC1[0xca];
      acStack_fb0[3] = _LC1[0xcb];
      acStack_fb0[4] = _LC1[0xcc];
      acStack_fb0[5] = _LC1[0xcd];
      acStack_fb0[6] = _LC1[0xce];
      acStack_fb0[7] = _LC1[0xcf];
      local_fa8[0] = _LC1[0xd0];
      local_fa8[1] = _LC1[0xd1];
      local_fa8[2] = _LC1[0xd2];
      local_fa8[3] = _LC1[0xd3];
      local_fa8[4] = _LC1[0xd4];
      local_fa8[5] = _LC1[0xd5];
      local_fa8[6] = _LC1[0xd6];
      local_fa8[7] = _LC1[0xd7];
      acStack_fa0[0] = _LC1[0xd8];
      acStack_fa0[1] = _LC1[0xd9];
      acStack_fa0[2] = _LC1[0xda];
      acStack_fa0[3] = _LC1[0xdb];
      acStack_fa0[4] = _LC1[0xdc];
      acStack_fa0[5] = _LC1[0xdd];
      acStack_fa0[6] = _LC1[0xde];
      acStack_fa0[7] = _LC1[0xdf];
      local_f98[0] = _LC1[0xe0];
      local_f98[1] = _LC1[0xe1];
      local_f98[2] = _LC1[0xe2];
      local_f98[3] = _LC1[0xe3];
      local_f98[4] = _LC1[0xe4];
      local_f98[5] = _LC1[0xe5];
      local_f98[6] = _LC1[0xe6];
      local_f98[7] = _LC1[0xe7];
      cStack_f90 = (char)_LC1._232_8_;
      uStack_f8f = (undefined7)_LC1._240_8_;
      cStack_f88 = SUB81(_LC1._240_8_,7);
      acStack_f87[0] = _LC1[0xf8];
      acStack_f87[1] = _LC1[0xf9];
      acStack_f87[2] = _LC1[0xfa];
      acStack_f87[3] = _LC1[0xfb];
      acStack_f87[4] = _LC1[0xfc];
      acStack_f87[5] = _LC1[0xfd];
      acStack_f87[6] = _LC1[0xfe];
      acStack_f87[7] = _LC1[0xff];
      do {
        uVar12 = uVar15;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar12 >> 2;
        uVar15 = (uVar12 >> 2) / 0x19;
        lVar10 = (uVar12 + ((SUB168(auVar3 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffffffffffffffc) +
                           uVar15) * -0x14) * 2;
        pcVar9[uVar19] = *(char *)((long)&local_1048 + lVar10 + 1);
        uVar1 = uVar19 - 1;
        uVar19 = uVar19 - 2;
        pcVar9[uVar1] = *(char *)((long)&local_1048 + lVar10);
      } while (9999 < uVar12);
      if (uVar12 < 1000) goto LAB_00101e25;
    }
    pcVar9[1] = *(char *)((long)&local_1048 + uVar15 * 2 + 1);
    cVar18 = *(char *)((long)&local_1048 + uVar15 * 2);
  }
  *pcVar9 = cVar18;
  plVar5 = (long *)std::__cxx11::string::_M_replace((ulong)local_1088,0,(char *)0x0,0x102a50);
  plVar2 = plVar5 + 2;
  if ((long *)*plVar5 == plVar2) {
    uVar15 = plVar5[1] + 1;
    plVar13 = plVar2;
    plVar16 = &local_1058;
    if (7 < (uint)uVar15) {
      uVar12 = 0;
      do {
        uVar19 = (int)uVar12 + 8;
        uVar11 = (ulong)uVar19;
        *(undefined8 *)((long)&local_1058 + uVar12) = *(undefined8 *)((long)plVar2 + uVar12);
        uVar12 = uVar11;
      } while (uVar19 < ((uint)uVar15 & 0xfffffff8));
      plVar16 = (long *)((long)&local_1058 + uVar11);
      plVar13 = (long *)(uVar11 + (long)plVar2);
    }
    lVar10 = 0;
    if ((uVar15 & 4) != 0) {
      *(int *)plVar16 = (int)*plVar13;
      lVar10 = 4;
    }
    if ((uVar15 & 2) != 0) {
      *(undefined2 *)((long)plVar16 + lVar10) = *(undefined2 *)((long)plVar13 + lVar10);
      lVar10 = lVar10 + 2;
    }
    local_1068 = &local_1058;
    if ((uVar15 & 1) != 0) {
      *(undefined1 *)((long)plVar16 + lVar10) = *(undefined1 *)((long)plVar13 + lVar10);
    }
  }
  else {
    local_1058 = plVar5[2];
    local_1068 = (long *)*plVar5;
  }
  local_1060 = plVar5[1];
  *plVar5 = (long)plVar2;
  plVar5[1] = 0;
  *(undefined1 *)(plVar5 + 2) = 0;
  if (0x3fffffffffffffffU - local_1060 < 4) {
    std::__throw_length_error("basic_string::append");
    goto LAB_00102367;
  }
  plVar5 = (long *)std::__cxx11::string::_M_append((char *)&local_1068,0x102a57);
  plVar2 = plVar5 + 2;
  if ((long *)*plVar5 == plVar2) {
    uVar15 = plVar5[1] + 1;
    plVar13 = plVar2;
    plVar16 = local_1098;
    if (7 < (uint)uVar15) {
      uVar12 = 0;
      do {
        uVar19 = (int)uVar12 + 8;
        uVar11 = (ulong)uVar19;
        *(undefined8 *)((long)local_1098 + uVar12) = *(undefined8 *)((long)plVar2 + uVar12);
        uVar12 = uVar11;
      } while (uVar19 < ((uint)uVar15 & 0xfffffff8));
      plVar16 = (long *)((long)local_1098 + uVar11);
      plVar13 = (long *)(uVar11 + (long)plVar2);
    }
    lVar10 = 0;
    if ((uVar15 & 4) != 0) {
      *(int *)plVar16 = (int)*plVar13;
      lVar10 = 4;
    }
    if ((uVar15 & 2) != 0) {
      *(undefined2 *)((long)plVar16 + lVar10) = *(undefined2 *)((long)plVar13 + lVar10);
      lVar10 = lVar10 + 2;
    }
    local_10a8 = local_1098;
    if ((uVar15 & 1) != 0) {
      *(undefined1 *)((long)plVar16 + lVar10) = *(undefined1 *)((long)plVar13 + lVar10);
    }
  }
  else {
    local_1098[0] = plVar5[2];
    local_10a8 = (long *)*plVar5;
  }
  local_10a0 = plVar5[1];
  *plVar5 = (long)plVar2;
  plVar5[1] = 0;
  *(undefined1 *)(plVar5 + 2) = 0;
  if (local_1068 != &local_1058) {
    operator_delete(local_1068,local_1058 + 1);
  }
  if (local_1088[0] != local_1078) {
    operator_delete(local_1088[0],local_1078[0] + 1);
  }
  pcVar9 = (char *)&local_1048;
  for (lVar10 = 0x200; lVar10 != 0; lVar10 = lVar10 + -1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9[4] = '\0';
    pcVar9[5] = '\0';
    pcVar9[6] = '\0';
    pcVar9[7] = '\0';
    pcVar9 = pcVar9 + (ulong)bVar20 * -0x10 + 8;
  }
  sVar6 = readlink((char *)local_10a8,(char *)&local_1048,0xfff);
  if (sVar6 == -1) {
    *(undefined8 *)(this + 8) = 0;
    *(embree **)this = this + 0x10;
    this[0x10] = (embree)0x0;
  }
  else {
    peVar8 = this + 0x10;
    *(embree **)this = peVar8;
    sVar7 = strlen((char *)&local_1048);
    local_10b0 = sVar7;
    if (sVar7 < 0x10) {
      if (sVar7 == 1) {
        *(undefined8 *)(this + 8) = 1;
        this[0x10] = local_1048._0_1_;
        this[0x11] = (embree)0x0;
      }
      else {
        if (sVar7 != 0) goto LAB_0010221e;
        *(undefined8 *)(this + 8) = 0;
        *peVar8 = (embree)0x0;
      }
    }
    else {
      peVar8 = (embree *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_10b0);
      *(embree **)this = peVar8;
      *(size_t *)(this + 0x10) = local_10b0;
LAB_0010221e:
      uVar19 = (uint)sVar7;
      if (uVar19 < 8) {
        if ((sVar7 & 4) == 0) {
          if (uVar19 != 0) {
            *peVar8 = local_1048._0_1_;
            if ((sVar7 & 2) != 0) {
              *(undefined2 *)(peVar8 + ((sVar7 & 0xffffffff) - 2)) =
                   *(undefined2 *)((long)&uStack_104c + (sVar7 & 0xffffffff) + 2);
            }
          }
        }
        else {
          *(undefined4 *)peVar8 = local_1048;
          *(undefined4 *)(peVar8 + ((sVar7 & 0xffffffff) - 4)) =
               *(undefined4 *)((long)&uStack_104c + (sVar7 & 0xffffffff));
        }
      }
      else {
        *(undefined8 *)peVar8 = _local_1048;
        *(undefined8 *)(peVar8 + ((sVar7 & 0xffffffff) - 8)) =
             *(undefined8 *)(&stack0xffffffffffffefb0 + (sVar7 & 0xffffffff));
        lVar10 = (long)peVar8 - (long)((ulong)(peVar8 + 8) & 0xfffffffffffffff8);
        pcVar9 = (char *)((long)&local_1048 + -lVar10);
        puVar17 = (undefined8 *)((ulong)(peVar8 + 8) & 0xfffffffffffffff8);
        for (uVar15 = (ulong)(uVar19 + (int)lVar10 >> 3); uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar17 = *(undefined8 *)pcVar9;
          pcVar9 = pcVar9 + ((ulong)bVar20 * -2 + 1) * 8;
          puVar17 = puVar17 + (ulong)bVar20 * -2 + 1;
        }
      }
      *(size_t *)(this + 8) = local_10b0;
      *(undefined1 *)(*(long *)this + local_10b0) = 0;
    }
  }
  if (local_10a8 != local_1098) {
    operator_delete(local_10a8,local_1098[0] + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
LAB_00102367:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::getVirtualMemoryBytes() */

long embree::getVirtualMemoryBytes(void)

{
  undefined *puVar1;
  long lVar2;
  istream *piVar3;
  long in_FS_OFFSET;
  long local_260;
  undefined *local_248 [2];
  code *local_238 [2];
  uint auStack_228 [10];
  locale local_200 [48];
  __basic_file<char> local_1d0 [136];
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  puVar1 = _init;
  local_148[0] = (code *)&std::ifstream::VTT;
  local_248[0] = _init;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)((long)local_248 + *(long *)(_init + -0x18)) = _filebuf;
  local_248[1] = (undefined *)0x0;
  std::ios::init((streambuf *)(*(long *)(local_248[0] + -0x18) + (long)local_248));
  local_248[0] = &std::ifstream::VTT;
  local_148[0] = std::istream::_M_extract<unsigned_long>;
  std::filebuf::filebuf((filebuf *)local_238);
  std::ios::init((streambuf *)local_148);
  lVar2 = std::filebuf::open((filebuf *)local_238,"/proc/self/statm",8);
  if (lVar2 == 0) {
    std::ios::clear((long)local_248 + *(long *)(local_248[0] + -0x18),
                    *(uint *)((long)auStack_228 + *(long *)(local_248[0] + -0x18)) | 4);
  }
  else {
    std::ios::clear((long)local_248 + *(long *)(local_248[0] + -0x18),0);
  }
  piVar3 = std::istream::_M_extract<unsigned_long>((ulong *)local_248);
  piVar3 = std::istream::_M_extract<unsigned_long>((ulong *)piVar3);
  std::istream::_M_extract<unsigned_long>((ulong *)piVar3);
  lVar2 = sysconf(0x1e);
  local_248[0] = &std::ifstream::VTT;
  local_148[0] = std::istream::_M_extract<unsigned_long>;
  local_238[0] = std::__basic_file<char>::~__basic_file;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file(local_1d0);
  local_238[0] = std::ios_base::~ios_base;
  std::locale::~locale(local_200);
  local_248[0] = puVar1;
  *(undefined8 *)((long)local_248 + *(long *)(puVar1 + -0x18)) = _filebuf;
  local_248[1] = (undefined *)0x0;
  local_148[0] = (code *)&std::ifstream::VTT;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2 * local_260;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::getResidentMemoryBytes() */

long embree::getResidentMemoryBytes(void)

{
  undefined *puVar1;
  long lVar2;
  istream *piVar3;
  long in_FS_OFFSET;
  long local_258;
  undefined *local_248 [2];
  code *local_238 [2];
  uint auStack_228 [10];
  locale local_200 [48];
  __basic_file<char> local_1d0 [136];
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  puVar1 = _init;
  local_148[0] = (code *)&std::ifstream::VTT;
  local_248[0] = _init;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)((long)local_248 + *(long *)(_init + -0x18)) = _filebuf;
  local_248[1] = (undefined *)0x0;
  std::ios::init((streambuf *)(*(long *)(local_248[0] + -0x18) + (long)local_248));
  local_248[0] = &std::ifstream::VTT;
  local_148[0] = std::istream::_M_extract<unsigned_long>;
  std::filebuf::filebuf((filebuf *)local_238);
  std::ios::init((streambuf *)local_148);
  lVar2 = std::filebuf::open((filebuf *)local_238,"/proc/self/statm",8);
  if (lVar2 == 0) {
    std::ios::clear((long)local_248 + *(long *)(local_248[0] + -0x18),
                    *(uint *)((long)auStack_228 + *(long *)(local_248[0] + -0x18)) | 4);
  }
  else {
    std::ios::clear((long)local_248 + *(long *)(local_248[0] + -0x18),0);
  }
  piVar3 = std::istream::_M_extract<unsigned_long>((ulong *)local_248);
  piVar3 = std::istream::_M_extract<unsigned_long>((ulong *)piVar3);
  std::istream::_M_extract<unsigned_long>((ulong *)piVar3);
  lVar2 = sysconf(0x1e);
  local_248[0] = &std::ifstream::VTT;
  local_148[0] = std::istream::_M_extract<unsigned_long>;
  local_238[0] = std::__basic_file<char>::~__basic_file;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file(local_1d0);
  local_238[0] = std::ios_base::~ios_base;
  std::locale::~locale(local_200);
  local_248[0] = puVar1;
  *(undefined8 *)((long)local_248 + *(long *)(puVar1 + -0x18)) = _filebuf;
  local_248[1] = (undefined *)0x0;
  local_148[0] = (code *)&std::ifstream::VTT;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2 * local_258;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::getNumberOfLogicalThreads() */

int embree::getNumberOfLogicalThreads(void)

{
  int iVar1;
  pthread_t __th;
  long in_FS_OFFSET;
  cpu_set_t cStack_98;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (getNumberOfLogicalThreads()::nThreads == -1) {
    __th = pthread_self();
    iVar1 = pthread_getaffinity_np(__th,0x80,&cStack_98);
    if (iVar1 == 0) {
      getNumberOfLogicalThreads()::nThreads = __sched_cpucount(0x80,&cStack_98);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return getNumberOfLogicalThreads()::nThreads;
}



/* embree::getTerminalWidth() */

undefined2 embree::getTerminalWidth(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ioctl(1,0x5413,auStack_18);
  if (iVar1 < 0) {
    local_16 = 0x50;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_16;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::getSeconds() */

double embree::getSeconds(void)

{
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (double)local_28.tv_usec / __LC52 + (double)local_28.tv_sec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sleepSeconds(double) */

void embree::sleepSeconds(double param_1)

{
  usleep((__useconds_t)(long)(param_1 * __LC52));
  return;
}



