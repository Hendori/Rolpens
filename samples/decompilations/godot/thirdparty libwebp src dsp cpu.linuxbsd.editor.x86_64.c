
/* WARNING: Removing unreachable block (ram,0x00100144) */
/* WARNING: Removing unreachable block (ram,0x00100027) */
/* WARNING: Removing unreachable block (ram,0x0010000e) */

uint x86CPUInfo(int param_1)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  iVar4 = *piVar1;
  if (0 < iVar4) {
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar5 = *puVar2;
    uVar6 = puVar2[3];
    switch(param_1) {
    case 0:
      return puVar2[2] >> 0x1a & 1;
    case 1:
      return uVar6 & 1;
    case 2:
      if ((((piVar1[3] == 0x6c65746e && piVar1[1] == 0x756e6547) && (piVar1[2] == 0x49656e69)) &&
          (((uVar6 & 0x200) != 0 &&
           (((uVar5 & 0xf00) == 0x600 &&
            (uVar5 = ((int)uVar5 >> 0xc & 0xf0U | (int)uVar5 >> 4 & 0xfU) - 0x1c, uVar5 < 0x32))))))
         && ((0xfffdbffff7fff3feU >> ((ulong)uVar5 & 0x3f) & 1) == 0)) {
        return 1;
      }
      break;
    case 3:
      return uVar6 >> 0x13 & 1;
    case 4:
      if ((~uVar6 & 0x18000000) == 0) {
        return (uint)((~in_XCR0 & 6) == 0);
      }
      break;
    default:
      if (((param_1 == 5) && (iVar7 = x86CPUInfo(4), 6 < iVar4)) && (iVar7 != 0)) {
        lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
        return *(uint *)(lVar3 + 4) >> 5 & 1;
      }
    }
  }
  return 0;
}


