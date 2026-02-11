
ulong ZSTD_noCompressLiterals(int *param_1,ulong param_2,void *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_4 < 0x20) {
    uVar3 = param_4 + 1;
    if (param_2 < uVar3) {
      return 0xffffffffffffffba;
    }
    *(char *)param_1 = (char)param_4 * '\b';
    lVar2 = 1;
  }
  else {
    iVar1 = (0xfff < param_4) + 2;
    uVar3 = (long)iVar1 + param_4;
    if (param_2 < uVar3) {
      return 0xffffffffffffffba;
    }
    if (iVar1 == 3) {
      *param_1 = (int)param_4 * 0x10 + 0xc;
      lVar2 = 3;
    }
    else {
      *(short *)param_1 = (short)((int)param_4 << 4) + 4;
      lVar2 = 2;
    }
  }
  memcpy((char *)((long)param_1 + lVar2),param_3,param_4);
  return uVar3;
}



undefined8
ZSTD_compressRleLiteralsBlock(int *param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  if (param_4 < 0x20) {
    *(char *)param_1 = (char)param_4 * '\b' + '\x01';
    *(char *)((long)param_1 + 1) = *param_3;
    return 2;
  }
  if (0xfff < param_4) {
    *param_1 = (int)param_4 * 0x10 + 0xd;
    *(char *)((long)param_1 + 3) = *param_3;
    return 4;
  }
  *(short *)param_1 = (short)((int)param_4 << 4) + 5;
  *(char *)((long)param_1 + 2) = *param_3;
  return 3;
}



long ZSTD_compressLiterals
               (int *param_1,ulong param_2,char *param_3,ulong param_4,undefined8 param_5,
               undefined8 param_6,undefined8 *param_7,undefined8 *param_8,uint param_9,int param_10,
               int param_11,int param_12)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  byte bVar14;
  uint local_4c;
  int local_44;
  long local_40;
  
  bVar14 = 0;
  puVar13 = param_8 + 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_8 = *param_7;
  param_8[0x101] = param_7[0x101];
  lVar6 = (long)param_8 - (long)((ulong)puVar13 & 0xfffffffffffffff8);
  puVar11 = (undefined8 *)((long)param_7 - lVar6);
  puVar12 = (undefined8 *)((ulong)puVar13 & 0xfffffffffffffff8);
  for (uVar7 = (ulong)((int)lVar6 + 0x810U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  if (param_10 == 0) {
    iVar9 = *(int *)(param_7 + 0x101);
    bVar5 = (byte)(9 - param_9);
    if (3 < (int)(9 - param_9)) {
      bVar5 = 3;
    }
    uVar7 = 8L << (bVar5 & 0x3f);
    if (iVar9 == 2) {
      uVar7 = 6;
    }
    if (uVar7 <= param_4) {
      iVar1 = (0x3ff < param_4) + 3 + (uint)(0x3fff < param_4);
      lVar6 = (long)iVar1;
      if (param_2 < lVar6 + 1U) {
        lVar6 = -0x46;
      }
      else {
        if ((param_9 < 4) && (param_4 < 0x401)) {
          uVar2 = param_12 != 0 | 4;
        }
        else {
          uVar2 = (uint)(param_12 != 0) | (uint)(7 < param_9) * 2;
        }
        if ((iVar9 == 2 && lVar6 == 3) || (param_4 < 0x100)) {
          local_4c = 1;
          pcVar4 = HUF_compress1X_repeat;
        }
        else {
          local_4c = 0;
          pcVar4 = HUF_compress4X_repeat;
        }
        local_44 = iVar9;
        uVar7 = (*pcVar4)((long)param_1 + lVar6,param_2 - lVar6,param_3,param_4,0xff,0xb,param_5,
                          param_6,param_8,&local_44,(uint)(param_11 != 0) << 3 | uVar2);
        iVar9 = 3 - (uint)(local_44 == 0);
        uVar2 = 7;
        if (6 < param_9) {
          uVar2 = param_9;
        }
        if ((0xffffffffffffff87 < uVar7 - 1) ||
           ((param_4 - 2) - (param_4 >> ((char)uVar2 - 1U & 0x3f)) <= uVar7)) {
          *param_8 = *param_7;
          param_8[0x101] = param_7[0x101];
          lVar6 = (long)param_8 - (long)((ulong)puVar13 & 0xfffffffffffffff8);
          puVar11 = (undefined8 *)((long)param_7 - lVar6);
          puVar13 = (undefined8 *)((ulong)puVar13 & 0xfffffffffffffff8);
          for (uVar7 = (ulong)((int)lVar6 + 0x810U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
            puVar13 = puVar13 + (ulong)bVar14 * -2 + 1;
          }
          goto LAB_00100338;
        }
        if (uVar7 == 1) {
          if (param_4 < 8) {
            pcVar8 = param_3 + 1;
            do {
              if (*param_3 != *pcVar8) goto LAB_001003d6;
              pcVar8 = pcVar8 + 1;
            } while (param_3 + param_4 != pcVar8);
          }
          *param_8 = *param_7;
          param_8[0x101] = param_7[0x101];
          lVar6 = (long)param_8 - (long)((ulong)puVar13 & 0xfffffffffffffff8);
          puVar11 = (undefined8 *)((long)param_7 - lVar6);
          puVar13 = (undefined8 *)((ulong)puVar13 & 0xfffffffffffffff8);
          for (uVar7 = (ulong)((int)lVar6 + 0x810U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
            puVar13 = puVar13 + (ulong)bVar14 * -2 + 1;
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            lVar6 = ZSTD_compressRleLiteralsBlock(param_1,param_2,param_3,param_4);
            return lVar6;
          }
          goto LAB_001004fe;
        }
LAB_001003d6:
        if (iVar9 == 2) {
          *(undefined4 *)(param_8 + 0x101) = 1;
        }
        iVar10 = (int)param_4 * 0x10;
        iVar3 = (int)uVar7;
        if (iVar1 == 4) {
          *param_1 = iVar9 + iVar10 + 8 + iVar3 * 0x40000;
        }
        else if (iVar1 == 5) {
          *param_1 = iVar9 + iVar10 + 0xc + iVar3 * 0x400000;
          *(char *)(param_1 + 1) = (char)(uVar7 >> 10);
        }
        else {
          iVar9 = iVar9 + iVar3 * 0x4000 + iVar10 + (local_4c ^ 1) * 4;
          *(short *)param_1 = (short)iVar9;
          *(char *)((long)param_1 + 2) = (char)((uint)iVar9 >> 0x10);
        }
        lVar6 = uVar7 + lVar6;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return lVar6;
      }
      goto LAB_001004fe;
    }
  }
LAB_00100338:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    lVar6 = ZSTD_noCompressLiterals(param_1,param_2,param_3,param_4);
    return lVar6;
  }
LAB_001004fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


