
/* WARNING: Unknown calling convention */

void isaac_refill(isaac_state *s,isaac_word *result)

{
  isaac_word *piVar1;
  isaac_state *piVar2;
  isaac_state *piVar3;
  isaac_word iVar4;
  isaac_word *piVar5;
  ulong uVar6;
  isaac_word iVar7;
  
  uVar6 = s->a;
  iVar7 = s->c + 1;
  s->c = iVar7;
  iVar7 = iVar7 + s->b;
  piVar2 = s;
  piVar5 = result;
  do {
    iVar4 = piVar2->m[0];
    uVar6 = ~(uVar6 << 0x15 ^ uVar6) + piVar2->m[0x80];
    iVar7 = *(long *)((long)s->m + (ulong)((uint)iVar4 & 0x7f8)) + uVar6 + iVar7;
    piVar2->m[0] = iVar7;
    iVar4 = iVar4 + *(long *)((long)s->m + (ulong)((uint)(iVar7 >> 8) & 0x7f8));
    *piVar5 = iVar4;
    iVar7 = piVar2->m[1];
    uVar6 = (uVar6 >> 5 ^ uVar6) + piVar2->m[0x81];
    iVar4 = iVar4 + *(long *)((long)s->m + (ulong)((uint)iVar7 & 0x7f8)) + uVar6;
    piVar2->m[1] = iVar4;
    iVar7 = iVar7 + *(long *)((long)s->m + (ulong)((uint)(iVar4 >> 8) & 0x7f8));
    piVar5[1] = iVar7;
    iVar4 = piVar2->m[2];
    uVar6 = (uVar6 * 0x1000 ^ uVar6) + piVar2->m[0x82];
    iVar7 = *(long *)((long)s->m + (ulong)((uint)iVar4 & 0x7f8)) + uVar6 + iVar7;
    piVar2->m[2] = iVar7;
    iVar4 = iVar4 + *(long *)((long)s->m + (ulong)((uint)(iVar7 >> 8) & 0x7f8));
    piVar5[2] = iVar4;
    iVar7 = piVar2->m[3];
    uVar6 = (uVar6 >> 0x21 ^ uVar6) + piVar2->m[0x83];
    iVar4 = *(long *)((long)s->m + (ulong)((uint)iVar7 & 0x7f8)) + uVar6 + iVar4;
    piVar3 = (isaac_state *)(piVar2->m + 4);
    piVar2->m[3] = iVar4;
    iVar7 = iVar7 + *(long *)((long)s->m + (ulong)((uint)(iVar4 >> 8) & 0x7f8));
    piVar5[3] = iVar7;
    piVar2 = piVar3;
    piVar5 = piVar5 + 4;
  } while (piVar3 != (isaac_state *)(s->m + 0x80));
  piVar5 = result + 0x80;
  do {
    iVar4 = piVar3->m[0];
    uVar6 = ~(uVar6 << 0x15 ^ uVar6) + piVar3[-1].m[0x83];
    iVar7 = *(long *)((long)s->m + (ulong)((uint)iVar4 & 0x7f8)) + uVar6 + iVar7;
    piVar3->m[0] = iVar7;
    iVar4 = iVar4 + *(long *)((long)s->m + (ulong)((uint)(iVar7 >> 8) & 0x7f8));
    *piVar5 = iVar4;
    iVar7 = piVar3->m[1];
    uVar6 = (uVar6 >> 5 ^ uVar6) + piVar3[-1].m[0x84];
    iVar4 = iVar4 + *(long *)((long)s->m + (ulong)((uint)iVar7 & 0x7f8)) + uVar6;
    piVar3->m[1] = iVar4;
    iVar7 = iVar7 + *(long *)((long)s->m + (ulong)((uint)(iVar4 >> 8) & 0x7f8));
    piVar5[1] = iVar7;
    iVar4 = piVar3->m[2];
    uVar6 = (uVar6 * 0x1000 ^ uVar6) + piVar3[-1].m[0x85];
    iVar7 = *(long *)((long)s->m + (ulong)((uint)iVar4 & 0x7f8)) + uVar6 + iVar7;
    piVar3->m[2] = iVar7;
    iVar4 = iVar4 + *(long *)((long)s->m + (ulong)((uint)(iVar7 >> 8) & 0x7f8));
    piVar5[2] = iVar4;
    iVar7 = piVar3->m[3];
    uVar6 = (uVar6 >> 0x21 ^ uVar6) + piVar3[-1].m[0x86];
    iVar4 = *(long *)((long)s->m + (ulong)((uint)iVar7 & 0x7f8)) + uVar6 + iVar4;
    piVar1 = piVar3->m;
    piVar3->m[3] = iVar4;
    iVar7 = iVar7 + *(long *)((long)s->m + (ulong)((uint)(iVar4 >> 8) & 0x7f8));
    piVar5[3] = iVar7;
    piVar3 = (isaac_state *)(piVar1 + 4);
    piVar5 = piVar5 + 4;
  } while ((isaac_state *)(piVar1 + 4) != (isaac_state *)&s->a);
  s->a = uVar6;
  s->b = iVar7;
  return;
}



/* WARNING: Unknown calling convention */

void isaac_seed(isaac_state *s)

{
  isaac_word *piVar1;
  isaac_state *piVar2;
  isaac_word iVar3;
  isaac_state *piVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  isaac_word iVar11;
  ulong uVar12;
  isaac_word iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  iVar3 = 0x98f5704f6c44c0ab;
  iVar11 = 0x48fe4a0fa5a09315;
  uVar5 = 0x82f053db8355e0ce;
  uVar10 = 0xb29b2e824a595524;
  uVar9 = 0x8c0ea5053d4712a0;
  uVar8 = 0xb9f8b322c73ac862;
  iVar13 = 0xae985bf2cbfc89ed;
  uVar7 = 0x647c4677a2884b7c;
  piVar2 = s;
  do {
    lVar6 = uVar5 + piVar2->m[4];
    uVar5 = iVar3 + piVar2->m[7];
    lVar15 = (piVar2->m[0] - lVar6) + uVar7;
    uVar12 = iVar11 + piVar2->m[5] ^ uVar5 >> 9;
    uVar14 = iVar13 + piVar2->m[6] ^ lVar15 * 0x200;
    uVar8 = (piVar2->m[1] - uVar12) + uVar8;
    uVar5 = uVar8 >> 0x17 ^ uVar5 + lVar15;
    lVar16 = (piVar2->m[2] - uVar14) + uVar9;
    uVar10 = (piVar2->m[3] - uVar5) + uVar10;
    uVar7 = lVar16 * 0x8000 ^ lVar15 + uVar8;
    lVar6 = lVar6 - uVar7;
    piVar2->m[0] = uVar7;
    uVar8 = uVar10 >> 0xe ^ uVar8 + lVar16;
    uVar12 = uVar12 - uVar8;
    piVar2->m[1] = uVar8;
    uVar9 = lVar6 * 0x100000 ^ lVar16 + uVar10;
    lVar15 = uVar14 - uVar9;
    piVar2->m[2] = uVar9;
    uVar10 = uVar12 >> 0x11 ^ uVar10 + lVar6;
    iVar11 = uVar12 + lVar15;
    iVar3 = uVar5 - uVar10;
    piVar2->m[3] = uVar10;
    piVar1 = piVar2->m;
    uVar5 = lVar15 * 0x4000 ^ lVar6 + uVar12;
    iVar13 = lVar15 + iVar3;
    piVar2->m[5] = iVar11;
    piVar2->m[4] = uVar5;
    piVar2->m[6] = iVar13;
    piVar2->m[7] = iVar3;
    piVar2 = (isaac_state *)(piVar1 + 8);
    piVar4 = s;
  } while ((isaac_state *)&s->a != (isaac_state *)(piVar1 + 8));
  do {
    lVar15 = uVar5 + piVar4->m[4];
    uVar5 = iVar3 + piVar4->m[7];
    lVar6 = (piVar4->m[0] - lVar15) + uVar7;
    uVar12 = iVar11 + piVar4->m[5] ^ uVar5 >> 9;
    uVar14 = iVar13 + piVar4->m[6] ^ lVar6 * 0x200;
    uVar8 = (piVar4->m[1] - uVar12) + uVar8;
    lVar16 = (piVar4->m[2] - uVar14) + uVar9;
    uVar5 = uVar8 >> 0x17 ^ uVar5 + lVar6;
    uVar10 = (piVar4->m[3] - uVar5) + uVar10;
    uVar7 = lVar16 * 0x8000 ^ lVar6 + uVar8;
    lVar15 = lVar15 - uVar7;
    piVar4->m[0] = uVar7;
    uVar8 = uVar10 >> 0xe ^ uVar8 + lVar16;
    uVar12 = uVar12 - uVar8;
    piVar4->m[1] = uVar8;
    uVar9 = lVar15 * 0x100000 ^ lVar16 + uVar10;
    lVar6 = uVar14 - uVar9;
    piVar4->m[2] = uVar9;
    uVar10 = uVar12 >> 0x11 ^ uVar10 + lVar15;
    iVar11 = uVar12 + lVar6;
    iVar3 = uVar5 - uVar10;
    piVar4->m[3] = uVar10;
    piVar1 = piVar4->m;
    uVar5 = lVar6 * 0x4000 ^ lVar15 + uVar12;
    iVar13 = lVar6 + iVar3;
    piVar4->m[5] = iVar11;
    piVar4->m[4] = uVar5;
    piVar4->m[6] = iVar13;
    piVar4->m[7] = iVar3;
    piVar4 = (isaac_state *)(piVar1 + 8);
  } while ((isaac_state *)&s->a != (isaac_state *)(piVar1 + 8));
  s->c = 0;
  s->b = 0;
  s->a = 0;
  return;
}


