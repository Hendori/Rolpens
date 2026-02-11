
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint cksum_avx2(FILE *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  size_t sVar4;
  byte *pbVar5;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined1 auStack_10040 [65536];
  undefined1 auStack_40 [16];
  byte *pbVar6;
  
  puVar2 = auStack_40;
  do {
    puVar10 = puVar2;
    *(undefined8 *)(puVar10 + -0x1000) = *(undefined8 *)(puVar10 + -0x1000);
    puVar2 = puVar10 + -0x1000;
  } while (puVar10 + -0x1000 != auStack_10040);
  *(long *)(puVar10 + -0x1030) = param_3;
  *(undefined8 *)(puVar10 + 0xeff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (ulong *)0x0 || param_3 == 0) || (param_1 == (FILE *)0x0)) {
LAB_00100330:
    uVar3 = 0;
  }
  else {
    uVar9 = 0;
    uVar8 = 0;
    do {
      *(ulong *)(puVar10 + -0x1028) = uVar8;
      *(undefined8 *)(puVar10 + -0x1048) = 0x10009d;
      sVar4 = fread_unlocked(puVar10 + -0x1020,1,0x10000,param_1);
      uVar8 = *(ulong *)(puVar10 + -0x1028);
      if (sVar4 == 0) {
        uVar3 = param_1->_flags;
        break;
      }
      bVar11 = CARRY8(uVar9,sVar4);
      uVar9 = uVar9 + sVar4;
      if (bVar11) {
        *(undefined8 *)(puVar10 + -0x1048) = 0x10032a;
        piVar7 = __errno_location();
        *piVar7 = 0x4b;
        goto LAB_00100330;
      }
      if (0xff < sVar4) {
        vpinsrd_avx((undefined1  [16])0x0,(int)uVar8,3);
        vpshufb_avx2(*(undefined1 (*) [32])(puVar10 + -0x1020),__LC0);
        vpshufb_avx2(*(undefined1 (*) [32])(puVar10 + -0x1000),__LC0);
        vpshufb_avx2(*(undefined1 (*) [32])(puVar10 + -0xfe0),__LC0);
        vpshufb_avx2(*(undefined1 (*) [32])(puVar10 + -0xfc0),__LC0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x3f < sVar4) {
        vpinsrd_avx((undefined1  [16])0x0,(int)uVar8,3);
        vpshufb_avx2(*(undefined1 (*) [32])(puVar10 + -0x1020),__LC0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar6 = puVar10 + -0x1020;
      do {
        pbVar5 = pbVar6 + 1;
        uVar8 = uVar8 << 8 ^
                *(ulong *)(&crctab + (ulong)(byte)((byte)(uVar8 >> 0x18) ^ *pbVar6) * 8);
        pbVar6 = pbVar5;
      } while (pbVar5 != puVar10 + (sVar4 - 0x1020));
      uVar3 = param_1->_flags;
    } while ((uVar3 & 0x10) == 0);
    puVar1 = *(ulong **)(puVar10 + -0x1030);
    *param_2 = uVar8;
    *puVar1 = uVar9;
    uVar3 = (uVar3 >> 5 ^ 1) & 1;
  }
  if (*(long *)(puVar10 + 0xeff8) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar10 + -0x1048) = 0x10033c;
  __stack_chk_fail();
}


