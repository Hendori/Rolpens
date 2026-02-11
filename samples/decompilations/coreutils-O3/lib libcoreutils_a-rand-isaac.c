
void isaac_refill(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = param_1[0x102];
  uVar5 = param_1[0x100];
  param_1[0x102] = lVar6 + 1;
  lVar6 = lVar6 + 1 + param_1[0x101];
  plVar1 = param_1;
  plVar4 = param_2;
  do {
    lVar3 = *plVar1;
    uVar5 = ~(uVar5 << 0x15 ^ uVar5) + plVar1[0x80];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar3 & 0x7f8)) + uVar5 + lVar6;
    *plVar1 = lVar6;
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    *plVar4 = lVar3;
    lVar6 = plVar1[1];
    uVar5 = (uVar5 >> 5 ^ uVar5) + plVar1[0x81];
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar5;
    plVar1[1] = lVar3;
    lVar6 = lVar6 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar3 >> 8) & 0x7f8));
    plVar4[1] = lVar6;
    lVar3 = plVar1[2];
    uVar5 = (uVar5 * 0x1000 ^ uVar5) + plVar1[0x82];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar3 & 0x7f8)) + uVar5 + lVar6;
    plVar1[2] = lVar6;
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    plVar4[2] = lVar3;
    lVar6 = plVar1[3];
    uVar5 = (uVar5 >> 0x21 ^ uVar5) + plVar1[0x83];
    lVar3 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar5 + lVar3;
    plVar2 = plVar1 + 4;
    plVar1[3] = lVar3;
    lVar6 = lVar6 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar3 >> 8) & 0x7f8));
    plVar4[3] = lVar6;
    plVar1 = plVar2;
    plVar4 = plVar4 + 4;
  } while (plVar2 != param_1 + 0x80);
  plVar1 = param_2 + 0x80;
  do {
    lVar3 = *plVar2;
    uVar5 = ~(uVar5 << 0x15 ^ uVar5) + plVar2[-0x80];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar3 & 0x7f8)) + uVar5 + lVar6;
    *plVar2 = lVar6;
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    *plVar1 = lVar3;
    lVar6 = plVar2[1];
    uVar5 = (uVar5 >> 5 ^ uVar5) + plVar2[-0x7f];
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar5;
    plVar2[1] = lVar3;
    lVar6 = lVar6 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar3 >> 8) & 0x7f8));
    plVar1[1] = lVar6;
    lVar3 = plVar2[2];
    uVar5 = (uVar5 * 0x1000 ^ uVar5) + plVar2[-0x7e];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar3 & 0x7f8)) + uVar5 + lVar6;
    plVar2[2] = lVar6;
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    plVar1[2] = lVar3;
    lVar6 = plVar2[3];
    uVar5 = (uVar5 >> 0x21 ^ uVar5) + plVar2[-0x7d];
    lVar3 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar5 + lVar3;
    plVar4 = plVar2 + 4;
    plVar2[3] = lVar3;
    lVar6 = lVar6 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar3 >> 8) & 0x7f8));
    plVar1[3] = lVar6;
    plVar2 = plVar4;
    plVar1 = plVar1 + 4;
  } while (plVar4 != param_1 + 0x100);
  param_1[0x100] = uVar5;
  param_1[0x101] = lVar6;
  return;
}



void isaac_seed(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  uVar3 = 0x98f5704f6c44c0ab;
  uVar10 = 0x48fe4a0fa5a09315;
  uVar5 = 0x82f053db8355e0ce;
  uVar9 = 0xb29b2e824a595524;
  uVar8 = 0x8c0ea5053d4712a0;
  uVar7 = 0xb9f8b322c73ac862;
  uVar12 = 0xae985bf2cbfc89ed;
  uVar6 = 0x647c4677a2884b7c;
  puVar1 = param_1;
  do {
    lVar13 = (*puVar1 - (uVar5 + puVar1[4])) + uVar6;
    uVar11 = uVar10 + puVar1[5] ^ uVar3 + puVar1[7] >> 9;
    uVar10 = uVar12 + puVar1[6] ^ lVar13 * 0x200;
    uVar7 = (puVar1[1] - uVar11) + uVar7;
    uVar3 = uVar7 >> 0x17 ^ uVar3 + puVar1[7] + lVar13;
    lVar14 = (puVar1[2] - uVar10) + uVar8;
    uVar9 = (puVar1[3] - uVar3) + uVar9;
    uVar6 = lVar14 * 0x8000 ^ lVar13 + uVar7;
    lVar13 = (uVar5 + puVar1[4]) - uVar6;
    *puVar1 = uVar6;
    uVar7 = uVar9 >> 0xe ^ uVar7 + lVar14;
    uVar11 = uVar11 - uVar7;
    puVar1[1] = uVar7;
    uVar8 = lVar13 * 0x100000 ^ lVar14 + uVar9;
    lVar14 = uVar10 - uVar8;
    puVar1[2] = uVar8;
    uVar9 = uVar11 >> 0x11 ^ uVar9 + lVar13;
    uVar10 = uVar11 + lVar14;
    uVar3 = uVar3 - uVar9;
    puVar1[3] = uVar9;
    puVar2 = puVar1 + 8;
    uVar5 = lVar14 * 0x4000 ^ lVar13 + uVar11;
    uVar12 = lVar14 + uVar3;
    puVar1[5] = uVar10;
    puVar1[4] = uVar5;
    puVar1[6] = uVar12;
    puVar1[7] = uVar3;
    puVar1 = puVar2;
    puVar4 = param_1;
  } while (param_1 + 0x100 != puVar2);
  do {
    lVar13 = (*puVar4 - (uVar5 + puVar4[4])) + uVar6;
    uVar11 = uVar10 + puVar4[5] ^ uVar3 + puVar4[7] >> 9;
    uVar10 = uVar12 + puVar4[6] ^ lVar13 * 0x200;
    uVar7 = (puVar4[1] - uVar11) + uVar7;
    lVar14 = (puVar4[2] - uVar10) + uVar8;
    uVar3 = uVar7 >> 0x17 ^ uVar3 + puVar4[7] + lVar13;
    uVar9 = (puVar4[3] - uVar3) + uVar9;
    uVar6 = lVar14 * 0x8000 ^ lVar13 + uVar7;
    lVar13 = (uVar5 + puVar4[4]) - uVar6;
    *puVar4 = uVar6;
    uVar7 = uVar9 >> 0xe ^ uVar7 + lVar14;
    uVar11 = uVar11 - uVar7;
    puVar4[1] = uVar7;
    uVar8 = lVar13 * 0x100000 ^ lVar14 + uVar9;
    lVar14 = uVar10 - uVar8;
    puVar4[2] = uVar8;
    uVar9 = uVar11 >> 0x11 ^ uVar9 + lVar13;
    uVar10 = uVar11 + lVar14;
    uVar3 = uVar3 - uVar9;
    puVar4[3] = uVar9;
    puVar1 = puVar4 + 8;
    uVar5 = lVar14 * 0x4000 ^ lVar13 + uVar11;
    uVar12 = lVar14 + uVar3;
    puVar4[5] = uVar10;
    puVar4[4] = uVar5;
    puVar4[6] = uVar12;
    puVar4[7] = uVar3;
    puVar4 = puVar1;
  } while (param_1 + 0x100 != puVar1);
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  param_1[0x100] = 0;
  return;
}


