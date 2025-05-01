
uint oc_parse_intel_flags_part_0(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (-(uint)((param_1 & 0x2000000) == 0) & 0xffffffe8) + 0x19;
  if ((param_1 & 0x4000000) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  uVar1 = (param_2 & 1) << 6 | uVar1;
  if ((param_2 & 0x100) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  if ((param_2 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  if ((param_2 & 0x100000) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00100235) */
/* WARNING: Removing unreachable block (ram,0x00100206) */
/* WARNING: Removing unreachable block (ram,0x00100198) */
/* WARNING: Removing unreachable block (ram,0x0010013a) */
/* WARNING: Removing unreachable block (ram,0x00100129) */
/* WARNING: Removing unreachable block (ram,0x001000b0) */
/* WARNING: Removing unreachable block (ram,0x00100067) */

uint oc_cpu_flags_get(void)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar1 = cpuid_basic_info(0);
  iVar3 = *(int *)(lVar1 + 4);
  iVar4 = *(int *)(lVar1 + 8);
  iVar5 = *(int *)(lVar1 + 0xc);
  if ((iVar5 == 0x6c65746e) && (iVar4 == 0x49656e69)) {
    if (iVar3 != 0x756e6547) {
      return 0;
    }
  }
  else {
    if ((iVar5 != 0x3638784d) || (iVar4 != 0x54656e69)) {
      if ((iVar5 == 0x444d4163) && (iVar4 == 0x69746e65)) {
        if (iVar3 == 0x68747541) {
LAB_00100124:
          puVar2 = (uint *)cpuid(0x80000000);
          uVar8 = 0;
          if (0x80000000 < *puVar2) {
            lVar1 = cpuid(0x80000001);
            uVar6 = *(uint *)(lVar1 + 8);
            uVar8 = uVar6 & 0x800000;
            if (uVar8 != 0) {
              uVar8 = (-(uint)((uVar6 & 0x400000) == 0) & 0xfffffff8) + 9;
              if ((int)uVar6 < 0) {
                uVar8 = uVar8 | 2;
              }
              if ((uVar6 & 0x40000000) != 0) {
                uVar8 = uVar8 | 4;
              }
              if ((*(uint *)(lVar1 + 0xc) & 0x40) != 0) {
                uVar8 = uVar8 | 0x400;
              }
              if ((*(uint *)(lVar1 + 0xc) & 0x800) != 0) {
                uVar8 = uVar8 | 0x800;
              }
            }
          }
          lVar1 = cpuid_Version_info(1);
          if ((*(uint *)(lVar1 + 8) & 0x800000) != 0) {
            uVar6 = oc_parse_intel_flags_part_0(*(uint *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0xc));
            return uVar8 | uVar6;
          }
          return uVar8;
        }
      }
      else {
        if ((iVar5 == 0x43534e20) && (iVar4 == 0x79622065)) {
          if (iVar3 != 0x646f6547) {
            return 0;
          }
          goto LAB_00100124;
        }
        if ((iVar5 == 0x736c7561 && iVar4 == 0x48727561) && (iVar3 == 0x746e6543)) {
          puVar2 = (uint *)cpuid_Version_info(1);
          uVar8 = *puVar2;
          uVar6 = puVar2[2] & 0x800000;
          if (uVar6 != 0) {
            uVar6 = oc_parse_intel_flags_part_0(puVar2[2],puVar2[3]);
          }
          if (uVar8 < 0x80000001) {
            return uVar6;
          }
          lVar1 = cpuid(0x80000001);
          uVar8 = *(uint *)(lVar1 + 8);
          if ((uVar8 & 0x800000) == 0) {
            return uVar6;
          }
          uVar7 = (-(uint)((uVar8 & 0x400000) == 0) & 0xfffffff8) + 9;
          if ((int)uVar8 < 0) {
            uVar7 = uVar7 | 2;
          }
          if ((uVar8 & 0x40000000) != 0) {
            uVar7 = uVar7 | 4;
          }
          if ((*(uint *)(lVar1 + 0xc) & 0x40) != 0) {
            uVar7 = uVar7 | 0x400;
          }
          if ((*(uint *)(lVar1 + 0xc) & 0x800) == 0) {
            return uVar7 | uVar6;
          }
          return uVar7 | uVar6 | 0x800;
        }
      }
      return 0;
    }
    if (iVar3 != 0x756e6547) {
      return 0;
    }
  }
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar9 = (ulong)*puVar2;
  uVar8 = puVar2[2] & 0x800000;
  if (uVar8 != 0) {
    uVar8 = oc_parse_intel_flags_part_0(puVar2[2],puVar2[3]);
  }
  if ((((uint)uVar9 & 0xf00) == 0x600) && ((0x6200UL >> ((uVar9 & 0xffffffff) >> 4 & 0xf) & 1) != 0)
     ) {
    uVar8 = uVar8 & 0xffffff9f;
  }
  return uVar8;
}


