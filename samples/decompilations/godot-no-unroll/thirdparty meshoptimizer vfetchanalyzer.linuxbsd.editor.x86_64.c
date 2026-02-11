
ulong meshopt_analyzeVertexFetch(uint *param_1,long param_2,size_t param_3,long param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *__s;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  undefined1 local_4028 [16384];
  
  puVar4 = &stack0xffffffffffffffd8;
  do {
    puVar11 = puVar4;
    *(undefined8 *)(puVar11 + -0x1000) = *(undefined8 *)(puVar11 + -0x1000);
    puVar4 = puVar11 + -0x1000;
  } while (puVar11 + -0x1000 != local_4028);
  *(undefined8 *)(puVar11 + 0x2ff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar14 = (undefined8 *)(puVar11 + -0x10d8);
  for (lVar8 = 0x17; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  *(undefined8 *)(puVar11 + -0x10e8) = 0x100064;
  __s = (byte *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(param_3);
  *(undefined8 *)(puVar11 + -0x1020) = 1;
  *(byte **)(puVar11 + -0x10e0) = __s;
  *(undefined8 *)(puVar11 + -0x10e8) = 0x100084;
  memset(__s,0,param_3);
  *(undefined8 *)(puVar11 + -0x10e8) = 0x100098;
  memset(puVar11 + -0x1010,0,0x4000);
  if (param_2 == 0) {
    uVar13 = 0;
  }
  else {
    puVar1 = param_1 + param_2;
    uVar13 = 0;
    do {
      uVar3 = *param_1;
      __s[uVar3] = 1;
      uVar12 = (ulong)uVar3 * param_4;
      uVar5 = uVar12 >> 6;
      uVar12 = uVar12 + param_4 + 0x3f >> 6;
      if (uVar5 < uVar12) {
        do {
          uVar6 = uVar5 + 1;
          uVar9 = (ulong)((uint)uVar5 & 0x7ff);
          uVar5 = *(ulong *)(puVar11 + uVar9 * 8 + -0x1010);
          *(ulong *)(puVar11 + uVar9 * 8 + -0x1010) = uVar6;
          uVar13 = uVar13 + (uint)(uVar5 != uVar6) * 0x40;
          uVar5 = uVar6;
        } while (uVar6 != uVar12);
      }
      param_1 = param_1 + 1;
    } while (puVar1 != param_1);
  }
  if (param_3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar10 = 0;
    pbVar7 = __s;
    do {
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      lVar10 = lVar10 + (ulong)bVar2;
    } while (pbVar7 != __s + param_3);
    lVar8 = 0;
    if (lVar10 != 0) {
      auVar15._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar15._0_4_ = (float)uVar13 / (float)(ulong)(param_4 * lVar10);
      lVar8 = auVar15._0_8_;
    }
  }
  *(undefined8 *)(puVar11 + -0x10e8) = 0x100170;
  (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(__s);
  if (*(long *)(puVar11 + 0x2ff8) == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar13 | lVar8 << 0x20;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar11 + -0x10e8) = 0x1001c5;
  __stack_chk_fail();
}


