
/* graphite2::vm::Machine::Code::~Code() */

void __thiscall graphite2::vm::Machine::Code::~Code(Code *this)

{
  if (this[0x2b] == (Code)0x0) {
    return;
  }
  free(*(void **)this);
  return;
}



/* graphite2::vm::Machine::Code::decoder::fetch_opcode(unsigned char const*) */

byte __thiscall graphite2::vm::Machine::Code::decoder::fetch_opcode(decoder *this,uchar *param_1)

{
  decoder *pdVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uchar uVar5;
  short sVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  ulong *puVar15;
  uchar *puVar16;
  
  bVar2 = *param_1;
  if (0x42 < bVar2) {
    pauVar12 = *(undefined1 (**) [16])this;
    if (pauVar12[2][0xb] != '\0') {
      free(*(void **)*pauVar12);
    }
    pauVar12[2][0xb] = 0;
    *(undefined4 *)(pauVar12[2] + 4) = 2;
    *pauVar12 = (undefined1  [16])0x0;
    return 0x43;
  }
  lVar10 = graphite2::vm::Machine::getOpcodeTable();
  pauVar12 = *(undefined1 (**) [16])this;
  lVar10 = lVar10 + (ulong)bVar2 * 0x38;
  bVar7 = pauVar12[2][8];
  if (*(long *)(lVar10 + (ulong)bVar7 * 8) == 0) {
    if (pauVar12[2][0xb] != '\0') {
      free(*(void **)*pauVar12);
    }
    pauVar12[2][0xb] = 0;
    *(undefined4 *)(pauVar12[2] + 4) = 3;
    *pauVar12 = (undefined1  [16])0x0;
    return 0x43;
  }
  puVar15 = *(ulong **)(this + 0x20);
  bVar3 = *(byte *)(lVar10 + 0x10);
  uVar11 = (ulong)bVar3;
  puVar16 = (uchar *)*puVar15;
  if (bVar3 == 0xff) {
    if (puVar16 <= param_1 + 1) goto LAB_0010018b;
    uVar11 = (ulong)param_1[1] + 1;
  }
  if (puVar16 <= param_1 + uVar11) {
LAB_0010018b:
    if (pauVar12[2][0xb] != '\0') {
      free(*(void **)*pauVar12);
    }
    pauVar12[2][0xb] = 0;
    *(undefined4 *)(pauVar12[2] + 4) = 6;
    *pauVar12 = (undefined1  [16])0x0;
    return 0x43;
  }
  pauVar13 = pauVar12;
  switch((ulong)bVar2) {
  default:
    goto switchD_001000ad_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 0x2f:
  case 0x36:
  case 0x37:
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    goto switchD_001000ad_caseD_0;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x3e:
  case 0x3f:
    iVar9 = *(int *)(this + 0x2c) + -1;
    *(int *)(this + 0x2c) = iVar9;
    goto joined_r0x00100295;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x12:
  case 0x40:
  case 0x41:
    iVar9 = *(int *)(this + 0x2c);
    goto joined_r0x00100295;
  case 0xf:
    iVar9 = *(int *)(this + 0x2c) + -2;
    *(int *)(this + 0x2c) = iVar9;
joined_r0x00100295:
    if (iVar9 < 1) {
LAB_00100269:
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        pauVar13 = *(undefined1 (**) [16])this;
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 9;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = pauVar13;
    }
    goto switchD_001000ad_caseD_0;
  case 0x19:
  case 0x1b:
    iVar9 = *(int *)(this + 8) + 1;
    *(int *)(this + 8) = iVar9;
    if ((-2 < iVar9) &&
       ((iVar9 <= (int)(uint)*(ushort *)(this + 0xc) &&
        ((int)*(short *)(this + 0x32) <= (int)(uint)*(ushort *)((long)puVar15 + 10)))))
    goto switchD_001000ad_caseD_0;
    goto LAB_00100100;
  case 0x1c:
    if (*(ushort *)((long)puVar15 + 0xc) <= (ushort)param_1[1]) {
LAB_001000c8:
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = *(undefined1 (**) [16])this;
    }
    break;
  case 0x1d:
    uVar5 = param_1[1];
    if ((bVar7 == 0) || (this[0x30] != (decoder)0x0)) {
      if ((*(ushort *)((long)puVar15 + 10) == 0) ||
         ((uint)*(ushort *)((long)puVar15 + 10) <=
          (int)(char)uVar5 + (int)*(short *)(this + 0x32) + (uint)(byte)puVar15[1]))
      goto LAB_001008bd;
    }
    else if (('\0' < (char)uVar5) || ((int)(uint)(byte)puVar15[1] < -(int)(char)uVar5)) {
LAB_001008bd:
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        puVar15 = *(ulong **)(this + 0x20);
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = *(undefined1 (**) [16])this;
    }
    uVar8 = *(ushort *)((long)puVar15 + 0xc);
    if (uVar8 <= param_1[2]) {
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        uVar8 = *(ushort *)(*(long *)(this + 0x20) + 0xc);
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = *(undefined1 (**) [16])this;
    }
    if (uVar8 <= param_1[3]) goto LAB_001000c8;
    break;
  case 0x1e:
    uVar5 = param_1[1];
    if ((bVar7 == 0) || (this[0x30] != (decoder)0x0)) {
      if ((*(ushort *)((long)puVar15 + 10) == 0) ||
         ((uint)*(ushort *)((long)puVar15 + 10) <=
          (int)(char)uVar5 + (int)*(short *)(this + 0x32) + (uint)(byte)puVar15[1]))
      goto LAB_001000c8;
    }
    else if (('\0' < (char)uVar5) || ((int)(uint)(byte)puVar15[1] < -(int)(char)uVar5))
    goto LAB_001000c8;
    break;
  case 0x1f:
    if (2 < *(int *)(this + 0x28)) {
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        pauVar13 = *(undefined1 (**) [16])this;
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 2;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = pauVar13;
    }
    sVar6 = *(short *)(this + 0xc);
    iVar9 = *(int *)(this + 8);
    *(ushort *)(this + 0xc) = sVar6 + 1U;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 1;
      *(int *)(this + 8) = iVar9;
      if (-2 < iVar9) goto LAB_001001ed;
    }
    else {
LAB_001001ed:
      if (iVar9 < (int)(uint)(ushort)(sVar6 + 1U)) goto switchD_001000ad_caseD_0;
    }
    cVar4 = pauVar12[2][0xb];
    goto joined_r0x001001ff;
  case 0x20:
    if (2 < *(int *)(this + 0x28)) {
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        puVar15 = *(ulong **)(this + 0x20);
        pauVar13 = *(undefined1 (**) [16])this;
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 2;
      *pauVar12 = (undefined1  [16])0x0;
    }
    iVar9 = *(int *)(this + 8);
    pauVar12 = pauVar13;
    if (iVar9 < (int)(uint)(byte)puVar15[1]) {
      if (pauVar13[2][0xb] != '\0') {
        free(*(void **)*pauVar13);
        iVar9 = *(int *)(this + 8);
        pauVar12 = *(undefined1 (**) [16])this;
      }
      iVar9 = iVar9 + -1;
      pauVar13[2][0xb] = 0;
      *pauVar13 = (undefined1  [16])0x0;
      sVar6 = *(short *)(this + 0xc);
      *(undefined4 *)(pauVar13[2] + 4) = 4;
      uVar8 = sVar6 - 1;
      *(int *)(this + 8) = iVar9;
      *(ushort *)(this + 0xc) = uVar8;
      if (iVar9 < -1) goto LAB_00100100;
    }
    else {
      iVar9 = iVar9 + -1;
      *(int *)(this + 8) = iVar9;
      uVar8 = *(short *)(this + 0xc) - 1;
      *(ushort *)(this + 0xc) = uVar8;
    }
    if (iVar9 <= (int)(uint)uVar8) goto switchD_001000ad_caseD_0;
    goto LAB_00100100;
  case 0x21:
    bVar7 = param_1[1];
    if (bVar7 == 0) {
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
      *pauVar12 = (undefined1  [16])0x0;
      bVar7 = param_1[1];
      pauVar12 = *(undefined1 (**) [16])this;
      if (bVar7 == 0) break;
    }
    puVar16 = param_1 + bVar7;
    do {
      uVar5 = puVar16[1];
      if ((pauVar12[2][8] == '\0') || (this[0x30] != (decoder)0x0)) {
        uVar8 = *(ushort *)(*(long *)(this + 0x20) + 10);
        if ((uVar8 == 0) ||
           ((uint)uVar8 <=
            (int)(char)uVar5 +
            (int)*(short *)(this + 0x32) + (uint)*(byte *)(*(long *)(this + 0x20) + 8)))
        goto LAB_00100608;
      }
      else if (('\0' < (char)uVar5) ||
              ((int)(uint)*(byte *)(*(long *)(this + 0x20) + 8) < -(int)(char)uVar5)) {
LAB_00100608:
        if (pauVar12[2][0xb] != '\0') {
          free(*(void **)*pauVar12);
        }
        pauVar12[2][0xb] = 0;
        *(undefined4 *)(pauVar12[2] + 4) = 4;
        *pauVar12 = (undefined1  [16])0x0;
        pauVar12 = *(undefined1 (**) [16])this;
      }
      puVar16 = puVar16 + -1;
    } while (puVar16 != param_1 + (((ulong)bVar7 - 1) - (ulong)(bVar7 - 1 & 0xff)));
    break;
  case 0x22:
    if (*(ushort *)((long)puVar15 + 10) <=
        (ushort)((ushort)(byte)puVar15[1] + (short)(char)param_1[1])) {
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        puVar15 = *(ulong **)(this + 0x20);
        pauVar13 = *(undefined1 (**) [16])this;
      }
      pauVar12[2][0xb] = 0;
      *pauVar12 = (undefined1  [16])0x0;
      puVar16 = (uchar *)*puVar15;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
    }
    pauVar14 = pauVar13;
    if (puVar16 <= param_1 + (ulong)param_1[2] + 3) {
      if (pauVar13[2][0xb] != '\0') {
        free(*(void **)*pauVar13);
        pauVar14 = *(undefined1 (**) [16])this;
      }
      pauVar13[2][0xb] = 0;
      *(undefined4 *)(pauVar13[2] + 4) = 5;
      *pauVar13 = (undefined1  [16])0x0;
    }
    pauVar12 = pauVar14;
    if (this[0x30] != (decoder)0x0) {
      if (pauVar14[2][0xb] != '\0') {
        free(*(void **)*pauVar14);
        pauVar12 = *(undefined1 (**) [16])this;
      }
      pauVar14[2][0xb] = 0;
      *(undefined4 *)(pauVar14[2] + 4) = 8;
      *pauVar14 = (undefined1  [16])0x0;
    }
    goto switchD_001000ad_caseD_0;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
    pdVar1 = this + 0x2c;
    *(int *)pdVar1 = *(int *)pdVar1 + -1;
    if (*(int *)pdVar1 < 0) {
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 9;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar13 = *(undefined1 (**) [16])this;
    }
    bVar7 = param_1[1];
    pauVar12 = pauVar13;
    if (0x4d < bVar7) {
      if (pauVar13[2][0xb] != '\0') {
        free(*(void **)*pauVar13);
        pauVar12 = *(undefined1 (**) [16])this;
      }
      pauVar13[2][0xb] = 0;
      *(undefined4 *)(pauVar13[2] + 4) = 4;
      *pauVar13 = (undefined1  [16])0x0;
      bVar7 = param_1[1];
    }
    if (bVar7 == 0x37) goto LAB_001000c8;
    break;
  case 0x27:
  case 0x33:
  case 0x34:
  case 0x35:
    pdVar1 = this + 0x2c;
    *(int *)pdVar1 = *(int *)pdVar1 + -1;
    if (*(int *)pdVar1 < 0) {
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 9;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = *(undefined1 (**) [16])this;
    }
    if ((0x4d < param_1[1]) ||
       (*(byte *)(*(long *)(this + 0x20) + 0x12 + (ulong)param_1[1]) <= param_1[2]))
    goto LAB_001000c8;
    break;
  case 0x28:
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    if (0x4d < param_1[1]) {
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        pauVar13 = *(undefined1 (**) [16])this;
        bVar7 = pauVar13[2][8];
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = pauVar13;
    }
    uVar5 = param_1[2];
    if ((bVar7 == 0) || (this[0x30] != (decoder)0x0)) {
      uVar8 = *(ushort *)(*(long *)(this + 0x20) + 10);
      if ((uVar8 == 0) ||
         ((uint)uVar8 <=
          (int)(char)uVar5 +
          (int)*(short *)(this + 0x32) + (uint)*(byte *)(*(long *)(this + 0x20) + 8)))
      goto LAB_00100871;
    }
    else if (('\0' < (char)uVar5) ||
            ((int)(uint)*(byte *)(*(long *)(this + 0x20) + 8) < -(int)(char)uVar5)) {
LAB_00100871:
      pauVar13 = pauVar12;
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        pauVar13 = *(undefined1 (**) [16])this;
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = pauVar13;
    }
    if (param_1[1] != '7') goto switchD_001000ad_caseD_0;
    goto LAB_00100100;
  case 0x29:
  case 0x2c:
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    if (*(ushort *)((long)puVar15 + 0xe) <= (ushort)param_1[1]) {
LAB_001006af:
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        pauVar13 = *(undefined1 (**) [16])this;
        bVar7 = pauVar13[2][8];
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = pauVar13;
    }
    goto LAB_001003dc;
  case 0x2a:
  case 0x2d:
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    if (10 < param_1[1]) {
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        pauVar13 = *(undefined1 (**) [16])this;
        bVar7 = pauVar13[2][8];
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
      *pauVar12 = (undefined1  [16])0x0;
    }
    iVar9 = (int)(char)param_1[2];
    pauVar12 = pauVar13;
    if (bVar7 == 0) goto LAB_00100363;
LAB_00100313:
    pauVar12 = pauVar13;
    if (this[0x30] != (decoder)0x0) goto LAB_00100363;
    goto LAB_00100319;
  case 0x2b:
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    if ((ushort)puVar15[2] <= (ushort)param_1[1]) goto LAB_001006af;
    goto LAB_001003dc;
  case 0x2e:
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    uVar11 = (ulong)param_1[1];
    if (param_1[1] < 0x4e) {
      uVar5 = param_1[2];
      if ((bVar7 == 0) || (this[0x30] != (decoder)0x0)) {
        if ((*(ushort *)((long)puVar15 + 10) == 0) ||
           ((uint)*(ushort *)((long)puVar15 + 10) <=
            (int)(char)uVar5 + (int)*(short *)(this + 0x32) + (uint)(byte)puVar15[1]))
        goto LAB_0010090a;
      }
      else if (('\0' < (char)uVar5) || ((int)(uint)(byte)puVar15[1] < -(int)(char)uVar5)) {
LAB_0010090a:
        if (pauVar12[2][0xb] != '\0') {
          free(*(void **)*pauVar12);
          puVar15 = *(ulong **)(this + 0x20);
        }
        pauVar12[2][0xb] = 0;
        *(undefined4 *)(pauVar12[2] + 4) = 4;
        *pauVar12 = (undefined1  [16])0x0;
        uVar11 = (ulong)param_1[1];
        pauVar12 = *(undefined1 (**) [16])this;
      }
      if (param_1[3] < *(byte *)((long)puVar15 + uVar11 + 0x12)) goto switchD_001000ad_caseD_0;
    }
    goto LAB_00100100;
  case 0x30:
    pdVar1 = this + 0x2c;
    *(int *)pdVar1 = *(int *)pdVar1 + -1;
    if (-1 < *(int *)pdVar1) goto switchD_001000ad_caseD_0;
    goto LAB_00100269;
  case 0x38:
    uVar5 = param_1[1];
    if ((bVar7 == 0) || (this[0x30] != (decoder)0x0)) {
      if ((*(ushort *)((long)puVar15 + 10) == 0) ||
         ((uint)*(ushort *)((long)puVar15 + 10) <=
          (int)(char)uVar5 + (int)*(short *)(this + 0x32) + (uint)(byte)puVar15[1]))
      goto LAB_001007f4;
    }
    else if (('\0' < (char)uVar5) || ((int)(uint)(byte)puVar15[1] < -(int)(char)uVar5)) {
LAB_001007f4:
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        puVar15 = *(ulong **)(this + 0x20);
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = *(undefined1 (**) [16])this;
    }
    uVar8 = *(ushort *)((long)puVar15 + 0xc);
    if (uVar8 <= (ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8)) {
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        uVar8 = *(ushort *)(*(long *)(this + 0x20) + 0xc);
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
      *pauVar12 = (undefined1  [16])0x0;
      pauVar12 = *(undefined1 (**) [16])this;
    }
    if (uVar8 <= (ushort)(*(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8))
    goto LAB_001000c8;
    break;
  case 0x3b:
    if (*(ushort *)((long)puVar15 + 0xc) <=
        (ushort)(*(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8)) goto LAB_001000c8;
    break;
  case 0x3c:
  case 0x3d:
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    if (*(ushort *)((long)puVar15 + 0xe) <=
        (ushort)(*(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8)) {
      if (pauVar12[2][0xb] != '\0') {
        free(*(void **)*pauVar12);
        pauVar13 = *(undefined1 (**) [16])this;
        bVar7 = pauVar13[2][8];
      }
      pauVar12[2][0xb] = 0;
      *(undefined4 *)(pauVar12[2] + 4) = 4;
      *pauVar12 = (undefined1  [16])0x0;
    }
    iVar9 = (int)(char)param_1[3];
    pauVar12 = pauVar13;
    if (bVar7 != 0) goto LAB_00100313;
LAB_00100363:
    lVar10 = *(long *)(this + 0x20);
    uVar8 = *(ushort *)(lVar10 + 10);
    if (uVar8 == 0) goto LAB_00100100;
    goto LAB_00100377;
  case 0x42:
    if ((ushort)puVar15[2] <= (ushort)param_1[1]) goto LAB_001006af;
LAB_001003dc:
    iVar9 = (int)(char)param_1[2];
    if ((bVar7 == 0) || (this[0x30] != (decoder)0x0)) {
      lVar10 = *(long *)(this + 0x20);
      uVar8 = *(ushort *)(lVar10 + 10);
      if (uVar8 != 0) {
LAB_00100377:
        if (iVar9 + (int)*(short *)(this + 0x32) + (uint)*(byte *)(lVar10 + 8) < (uint)uVar8)
        goto switchD_001000ad_caseD_0;
      }
    }
    else {
LAB_00100319:
      if (((char)iVar9 < '\x01') && (-iVar9 <= (int)(uint)*(byte *)(*(long *)(this + 0x20) + 8)))
      goto switchD_001000ad_caseD_0;
    }
    goto LAB_00100100;
  }
  if (((uint)*(ushort *)(this + 0xc) <= *(uint *)(this + 8)) || (0xfe < *(short *)(this + 0x32))) {
LAB_00100100:
    cVar4 = pauVar12[2][0xb];
joined_r0x001001ff:
    pauVar13 = pauVar12;
    if (cVar4 != '\0') {
      free(*(void **)*pauVar12);
      pauVar13 = *(undefined1 (**) [16])this;
    }
    pauVar12[2][0xb] = 0;
    *(undefined4 *)(pauVar12[2] + 4) = 4;
    *pauVar12 = (undefined1  [16])0x0;
    pauVar12 = pauVar13;
  }
switchD_001000ad_caseD_0:
  if ((*(long *)*pauVar12 != 0) && (*(int *)(pauVar12[2] + 4) == 0)) {
    return bVar2;
  }
  return 0x43;
}



/* graphite2::vm::Machine::Code::decoder::analyse_opcode(graphite2::vm::opcode, signed char const*)
    */

void __thiscall
graphite2::vm::Machine::Code::decoder::analyse_opcode
          (decoder *this,undefined4 param_2,char *param_3)

{
  short sVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  
  switch(param_2) {
  case 0x19:
  case 0x1b:
    sVar1 = *(short *)(this + 0x32) + 1;
    *(short *)(this + 0x32) = sVar1;
    uVar2 = *(undefined8 *)(*(long *)this + 0x18);
    this[(long)(sVar1 + 0x1a) * 2] = (decoder)((byte)this[(long)(sVar1 + 0x1a) * 2] & 0xfc);
    this[(long)sVar1 * 2 + 0x35] = (decoder)((char)uVar2 + '\x01');
    return;
  default:
    break;
  case 0x1c:
  case 0x3b:
    *(undefined1 *)(*(long *)this + 0x29) = 1;
  case 0x21:
    uVar4 = (uint)*(short *)(this + 0x32);
    if ((uVar4 < 0x100) &&
       (this[(long)(int)uVar4 * 2 + 0x34] = (decoder)((byte)this[(long)(int)uVar4 * 2 + 0x34] | 1),
       (int)(uint)(byte)this[0x234] < (int)uVar4)) {
LAB_00100d6b:
      this[0x234] = SUB41(uVar4,0);
      return;
    }
    break;
  case 0x1d:
  case 0x38:
    lVar7 = *(long *)this;
    sVar1 = *(short *)(this + 0x32);
    uVar3 = (uint)sVar1;
    *(undefined1 *)(lVar7 + 0x29) = 1;
    if (0xff < uVar3) {
      if (*param_3 == '\0') {
        return;
      }
LAB_00100de8:
      *(undefined1 *)(lVar7 + 0x29) = 1;
      cVar5 = *param_3;
      uVar4 = uVar3;
      goto LAB_00100df0;
    }
    lVar6 = (long)(int)uVar3;
    this[lVar6 * 2 + 0x34] = (decoder)((byte)this[lVar6 * 2 + 0x34] | 1);
    if ((int)(uint)(byte)this[0x234] < (int)uVar3) {
      this[0x234] = SUB21(sVar1,0);
    }
    cVar5 = *param_3;
    uVar4 = uVar3;
    if (cVar5 != '\0') {
LAB_00100dd4:
      this[lVar6 * 2 + 0x34] = (decoder)((byte)this[lVar6 * 2 + 0x34] | 1);
      if ((int)(uint)(byte)this[0x234] < (int)uVar3) {
        this[0x234] = SUB41(uVar3,0);
      }
      goto LAB_00100de8;
    }
    goto LAB_00100e05;
  case 0x1e:
    uVar3 = (uint)*(short *)(this + 0x32);
    cVar5 = *param_3;
    uVar4 = uVar3;
    if (cVar5 != '\0') {
      lVar7 = *(long *)this;
      if (uVar3 < 0x100) {
        lVar6 = (long)(int)uVar3;
        goto LAB_00100dd4;
      }
      goto LAB_00100de8;
    }
LAB_00100df0:
    uVar3 = uVar4 + (int)cVar5;
    if (0xff < uVar3) {
      return;
    }
    lVar6 = (long)(int)uVar3;
LAB_00100e05:
    this[lVar6 * 2 + 0x34] = (decoder)((byte)this[lVar6 * 2 + 0x34] | 2);
    if ((int)(uint)(byte)this[0x234] < (int)uVar3) {
      this[0x234] = (decoder)(cVar5 + (char)uVar4);
      return;
    }
    break;
  case 0x1f:
    if (-1 < *(short *)(this + 0x32)) {
      *(short *)(this + 0x32) = *(short *)(this + 0x32) + -1;
    }
    *(undefined1 *)(*(long *)this + 0x29) = 1;
    return;
  case 0x20:
    *(undefined1 *)(*(long *)this + 0x2a) = 1;
    return;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x33:
  case 0x34:
  case 0x35:
    uVar4 = (uint)*(short *)(this + 0x32);
    if (0xff < uVar4) {
      return;
    }
    if ((int)uVar4 <= (int)(uint)(byte)this[0x234]) {
      return;
    }
    goto LAB_00100d6b;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x42:
    cVar5 = param_3[1];
    goto LAB_00100d44;
  case 0x3c:
  case 0x3d:
    cVar5 = param_3[2];
LAB_00100d44:
    sVar1 = *(short *)(this + 0x32);
    uVar4 = (int)cVar5 + (int)sVar1;
    if ((uVar4 < 0x100) &&
       (this[(long)(int)uVar4 * 2 + 0x34] = (decoder)((byte)this[(long)(int)uVar4 * 2 + 0x34] | 2),
       (int)(uint)(byte)this[0x234] < (int)uVar4)) {
      uVar4 = (int)cVar5 + (int)sVar1;
      goto LAB_00100d6b;
    }
  }
  return;
}



/* graphite2::vm::Machine::Code::decoder::emit_opcode(graphite2::vm::opcode, unsigned char const*&)
    */

undefined4 __thiscall
graphite2::vm::Machine::Code::decoder::emit_opcode(decoder *this,int param_2,long *param_3)

{
  byte bVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  char *pcVar4;
  uchar *puVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  byte bVar16;
  
  bVar16 = 0;
  lVar10 = graphite2::vm::Machine::getOpcodeTable();
  pauVar2 = *(undefined1 (**) [16])this;
  lVar10 = lVar10 + (long)param_2 * 0x38;
  lVar3 = *(long *)(lVar10 + (ulong)(byte)pauVar2[2][8] * 8);
  if (lVar3 == 0) {
    if (pauVar2[2][0xb] != '\0') {
      free(*(void **)*pauVar2);
    }
    pauVar2[2][0xb] = 0;
    *(undefined4 *)(pauVar2[2] + 4) = 3;
    *pauVar2 = (undefined1  [16])0x0;
    return 0;
  }
  plVar13 = *(long **)(this + 0x10);
  bVar1 = *(byte *)(lVar10 + 0x10);
  uVar11 = (ulong)bVar1;
  if (bVar1 == 0xff) {
    bVar1 = *(byte *)*param_3;
    *(long **)(this + 0x10) = plVar13 + 1;
    *plVar13 = lVar3;
    plVar13 = *(long **)this;
    uVar11 = (ulong)bVar1 + 1;
    plVar13[3] = plVar13[3] + 1;
  }
  else {
    *(long **)(this + 0x10) = plVar13 + 1;
    *plVar13 = lVar3;
    plVar13 = *(long **)this;
    plVar13[3] = plVar13[3] + 1;
    if (uVar11 == 0) goto joined_r0x00100fcd;
  }
  puVar15 = *(undefined8 **)(this + 0x18);
  puVar14 = (undefined8 *)*param_3;
  uVar9 = (uint)uVar11;
  if (uVar9 < 8) {
    if ((uVar11 & 4) == 0) {
      if (uVar9 != 0) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
        if ((uVar11 & 2) == 0) goto LAB_00100fb8;
        *(undefined2 *)((long)puVar15 + (uVar11 - 2)) =
             *(undefined2 *)((long)puVar14 + (uVar11 - 2));
        plVar13 = *(long **)this;
      }
    }
    else {
      *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
      *(undefined4 *)((long)puVar15 + (uVar11 - 4)) = *(undefined4 *)((long)puVar14 + (uVar11 - 4));
      plVar13 = *(long **)this;
    }
  }
  else {
    *puVar15 = *puVar14;
    *(undefined8 *)((long)puVar15 + (uVar11 - 8)) = *(undefined8 *)((long)puVar14 + (uVar11 - 8));
    lVar10 = (long)puVar15 - (long)((ulong)(puVar15 + 1) & 0xfffffffffffffff8);
    puVar14 = (undefined8 *)((long)puVar14 - lVar10);
    puVar15 = (undefined8 *)((ulong)(puVar15 + 1) & 0xfffffffffffffff8);
    for (uVar12 = (ulong)(uVar9 + (int)lVar10 >> 3); uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + (ulong)bVar16 * -2 + 1;
      puVar15 = puVar15 + (ulong)bVar16 * -2 + 1;
    }
LAB_00100fb8:
    plVar13 = *(long **)this;
  }
  *param_3 = *param_3 + uVar11;
  *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + uVar11;
  plVar13[2] = plVar13[2] + uVar11;
joined_r0x00100fcd:
  if (param_2 == 0x22) {
    pcVar4 = *(char **)(this + 0x18);
    puVar15 = *(undefined8 **)(this + 0x20);
    this[0x30] = (decoder)0x1;
    lVar10 = plVar13[3];
    *(uint *)(this + 8) = (uint)*(byte *)(puVar15 + 1) + (int)pcVar4[-2];
    *(short *)(this + 0x32) = (short)pcVar4[-2];
    *(undefined2 *)(this + 0xc) = *(undefined2 *)((long)puVar15 + 10);
    *(char **)(this + 0x18) = pcVar4 + 1;
    puVar5 = (uchar *)*param_3;
    plVar13[2] = plVar13[2] + 1;
    uVar6 = *puVar15;
    cVar7 = load(this,puVar5,puVar5 + (byte)pcVar4[-1]);
    if (cVar7 == '\0') {
      *(undefined4 *)(this + 8) = 0;
      *(undefined2 *)(this + 0x32) = 0;
      return 0;
    }
    lVar3 = *(long *)this;
    *param_3 = *param_3 + (ulong)(byte)pcVar4[-1];
    *pcVar4 = (pcVar4[-1] - *(char *)(lVar3 + 0x18)) + (char)lVar10;
    pcVar4[-1] = (char)*(undefined8 *)(*(long *)this + 0x18) - (char)lVar10;
    **(undefined8 **)(this + 0x20) = uVar6;
    *(undefined2 *)(this + 0xc) = 1;
    plVar13 = *(long **)this;
    *(undefined4 *)(this + 8) = 0;
    lVar10 = *plVar13;
    *(undefined2 *)(this + 0x32) = 0;
    this[0x30] = (decoder)0x0;
  }
  else {
    lVar10 = *plVar13;
  }
  if (lVar10 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = CONCAT31((int3)((uint)*(int *)((long)plVar13 + 0x24) >> 8),
                     *(int *)((long)plVar13 + 0x24) == 0);
  }
  return uVar8;
}



/* graphite2::vm::Machine::Code::decoder::load(unsigned char const*, unsigned char const*) */

undefined4 __thiscall
graphite2::vm::Machine::Code::decoder::load(decoder *this,uchar *param_1,uchar *param_2)

{
  uchar *puVar1;
  int iVar2;
  uchar *puVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  uchar *local_30 [2];
  
  **(undefined8 **)(this + 0x20) = param_2;
  local_30[0] = param_1;
  while( true ) {
    puVar3 = local_30[0];
    if (param_2 <= local_30[0]) {
      if (**(long **)this == 0) {
        return 0;
      }
      iVar2 = *(int *)((long)*(long **)this + 0x24);
      return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 0);
    }
    puVar1 = local_30[0] + 1;
    local_30[0] = puVar1;
    uVar5 = fetch_opcode(this,puVar3);
    uVar6 = uVar5 & 0xffffffff;
    if ((int)uVar5 == 0x43) break;
    analyse_opcode(this,uVar5 & 0xffffffff,puVar1);
    cVar4 = emit_opcode(this,uVar6 & 0xffffffff,local_30);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  return 0;
}



/* graphite2::vm::Machine::Code::decoder::apply_analysis(void**, void**) */

void __thiscall
graphite2::vm::Machine::Code::decoder::apply_analysis(decoder *this,void **param_1,void **param_2)

{
  decoder *pdVar1;
  void **__src;
  void *pvVar2;
  long lVar3;
  decoder *pdVar4;
  void **ppvVar5;
  int iVar6;
  
  if (*(char *)(*(long *)this + 0x28) != '\0') {
    return;
  }
  pdVar4 = this + 0x34;
  lVar3 = graphite2::vm::Machine::getOpcodeTable();
  pvVar2 = *(void **)(lVar3 + 0xea8);
  pdVar1 = pdVar4 + (long)*(short *)(this + 0x32) * 2;
  if (pdVar4 < pdVar1) {
    iVar6 = 0;
    ppvVar5 = param_2;
    do {
      param_2 = ppvVar5;
      if ((~(byte)*pdVar4 & 3) == 0) {
        lVar3 = (long)iVar6;
        iVar6 = iVar6 + 1;
        param_2 = ppvVar5 + 1;
        __src = param_1 + (ulong)(byte)pdVar4[1] + lVar3;
        memmove(__src + 1,__src,(long)ppvVar5 - (long)__src);
        *__src = pvVar2;
        *(undefined1 *)(*(long *)this + 0x2a) = 1;
      }
      pdVar4 = pdVar4 + 2;
      ppvVar5 = param_2;
    } while (pdVar4 < pdVar1);
  }
  *(long *)(*(long *)this + 0x18) = (long)param_2 - (long)param_1 >> 3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* graphite2::vm::Machine::Code::Code(bool, unsigned char const*, unsigned char const*, unsigned
   char, unsigned short, graphite2::Silf const&, graphite2::Face const&, graphite2::passtype,
   unsigned char**) */

void __thiscall
graphite2::vm::Machine::Code::Code
          (Code *this,Code param_1,uchar *param_2,uchar *param_3,byte param_4,ushort param_5,
          long param_6,long param_7,undefined4 param_9,long *param_10)

{
  undefined1 auVar1 [15];
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  char cVar10;
  ushort uVar11;
  long lVar12;
  Code *pCVar13;
  Code *pCVar14;
  long lVar15;
  void *pvVar16;
  void *pvVar17;
  long lVar18;
  size_t __size;
  undefined8 *puVar19;
  long in_FS_OFFSET;
  byte bVar20;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ushort uVar30;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  undefined1 auVar31 [16];
  uchar *local_2d8;
  byte local_2d0;
  undefined1 local_2cf;
  undefined1 auStack_2ce [7];
  undefined1 uStack_2c7;
  undefined8 local_2c6;
  undefined8 uStack_2be;
  undefined8 local_2b6;
  undefined8 local_2ae;
  undefined1 local_28f;
  undefined8 local_280;
  Code *local_278;
  uint local_270;
  ushort local_26c;
  void *local_268;
  void *local_260;
  uchar **local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined1 local_248;
  undefined2 local_246;
  Code local_244 [2];
  undefined2 auStack_242 [255];
  Code local_44 [4];
  long local_40;
  
  bVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x20] = (Code)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = param_1;
  *(undefined2 *)(this + 0x29) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  this[0x2b] = (Code)(param_10 == (long *)0x0);
  if (param_2 == param_3) goto LAB_00101560;
  lVar12 = graphite2::vm::Machine::getOpcodeTable();
  lVar18 = (long)param_3 - (long)param_2;
  if (param_10 == (long *)0x0) {
    uVar11 = 0;
    if (param_1 == (Code)0x0) {
      uVar11 = param_5;
    }
    pvVar16 = malloc(lVar18 * 9 + 8 + (ulong)uVar11 * 8);
    pvVar17 = (void *)((long)pvVar16 + lVar18 * 8);
    *(void **)this = pvVar16;
    *(void **)(this + 8) = pvVar17;
  }
  else {
    pvVar16 = (void *)*param_10;
    pvVar17 = (void *)((long)pvVar16 + lVar18 * 8);
    *(void **)this = pvVar16;
    *(void **)(this + 8) = pvVar17;
  }
  if (pvVar16 == (void *)0x0) {
LAB_001015e1:
    this[0x2b] = (Code)0x0;
    *(undefined4 *)(this + 0x24) = 1;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  }
  else {
    local_2cf = 0;
    local_280 = 0;
    puVar19 = (undefined8 *)(auStack_2ce + 6);
    for (lVar18 = 10; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar19 = 0;
      puVar19 = puVar19 + (ulong)bVar20 * -2 + 1;
    }
    local_2ae = 0x10101010101;
    auStack_2ce = SUB87(CONCAT62(CONCAT42(CONCAT22(*(undefined2 *)(param_7 + 8),
                                                   *(undefined2 *)(*(long *)(param_7 + 0x78) + 0x2a)
                                                  ),*(undefined2 *)(param_6 + 0x3c)),param_5),0);
    uStack_2c7 = (undefined1)((ushort)*(undefined2 *)(param_7 + 8) >> 8);
    local_28f = *(undefined1 *)(param_6 + 0x32);
    if (this[0x28] == (Code)0x0) {
      local_270 = (uint)param_4;
      local_26c = param_5;
    }
    else {
      local_270 = 0;
      local_26c = 1;
    }
    local_258 = &local_2d8;
    local_24c = 0;
    local_248 = 0;
    local_250 = param_9;
    local_246 = 0;
    pCVar13 = local_244;
    do {
      pCVar14 = pCVar13 + 0x20;
      uVar30 = *(ushort *)&pCVar13[0x10].field_0x0 & __LC2;
      uVar32 = *(ushort *)(pCVar13 + 0x12) & _UNK_00101a42;
      uVar33 = *(ushort *)(pCVar13 + 0x14) & _UNK_00101a44;
      uVar34 = *(ushort *)(pCVar13 + 0x16) & _UNK_00101a46;
      uVar35 = *(ushort *)(pCVar13 + 0x18) & _UNK_00101a48;
      uVar36 = *(ushort *)(pCVar13 + 0x1a) & _UNK_00101a4a;
      uVar37 = *(ushort *)(pCVar13 + 0x1c) & _UNK_00101a4c;
      uVar38 = *(ushort *)(pCVar13 + 0x1e) & _UNK_00101a4e;
      uVar11 = *(ushort *)&pCVar13->field_0x0 & __LC2;
      uVar23 = *(ushort *)(pCVar13 + 2) & _UNK_00101a42;
      uVar24 = *(ushort *)(pCVar13 + 4) & _UNK_00101a44;
      uVar25 = *(ushort *)(pCVar13 + 6) & _UNK_00101a46;
      uVar26 = *(ushort *)(pCVar13 + 8) & _UNK_00101a48;
      uVar27 = *(ushort *)(pCVar13 + 10) & _UNK_00101a4a;
      uVar28 = *(ushort *)(pCVar13 + 0xc) & _UNK_00101a4c;
      uVar29 = *(ushort *)(pCVar13 + 0xe) & _UNK_00101a4e;
      auVar21[1] = (0 < (short)uVar23) * ((short)uVar23 < 0x100) * (char)uVar23 -
                   (0xff < (short)uVar23);
      auVar21[0] = (0 < (short)uVar11) * ((short)uVar11 < 0x100) * (char)uVar11 -
                   (0xff < (short)uVar11);
      auVar21[2] = (0 < (short)uVar24) * ((short)uVar24 < 0x100) * (char)uVar24 -
                   (0xff < (short)uVar24);
      auVar21[3] = (0 < (short)uVar25) * ((short)uVar25 < 0x100) * (char)uVar25 -
                   (0xff < (short)uVar25);
      auVar21[4] = (0 < (short)uVar26) * ((short)uVar26 < 0x100) * (char)uVar26 -
                   (0xff < (short)uVar26);
      auVar21[5] = (0 < (short)uVar27) * ((short)uVar27 < 0x100) * (char)uVar27 -
                   (0xff < (short)uVar27);
      auVar21[6] = (0 < (short)uVar28) * ((short)uVar28 < 0x100) * (char)uVar28 -
                   (0xff < (short)uVar28);
      auVar21[7] = (0 < (short)uVar29) * ((short)uVar29 < 0x100) * (char)uVar29 -
                   (0xff < (short)uVar29);
      auVar21[8] = (0 < (short)uVar30) * ((short)uVar30 < 0x100) * (char)uVar30 -
                   (0xff < (short)uVar30);
      auVar21[9] = (0 < (short)uVar32) * ((short)uVar32 < 0x100) * (char)uVar32 -
                   (0xff < (short)uVar32);
      auVar21[10] = (0 < (short)uVar33) * ((short)uVar33 < 0x100) * (char)uVar33 -
                    (0xff < (short)uVar33);
      auVar21[0xb] = (0 < (short)uVar34) * ((short)uVar34 < 0x100) * (char)uVar34 -
                     (0xff < (short)uVar34);
      auVar21[0xc] = (0 < (short)uVar35) * ((short)uVar35 < 0x100) * (char)uVar35 -
                     (0xff < (short)uVar35);
      auVar21[0xd] = (0 < (short)uVar36) * ((short)uVar36 < 0x100) * (char)uVar36 -
                     (0xff < (short)uVar36);
      auVar21[0xe] = (0 < (short)uVar37) * ((short)uVar37 < 0x100) * (char)uVar37 -
                     (0xff < (short)uVar37);
      auVar21[0xf] = (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 -
                     (0xff < (short)uVar38);
      auVar21 = auVar21 & __LC3;
      auVar22[1] = 0;
      auVar22[0] = auVar21[8];
      auVar22[2] = auVar21[9];
      auVar22[3] = 0;
      auVar22[4] = auVar21[10];
      auVar22[5] = 0;
      auVar22[6] = auVar21[0xb];
      auVar22[7] = 0;
      auVar22[8] = auVar21[0xc];
      auVar22[9] = 0;
      auVar22[10] = auVar21[0xd];
      auVar22[0xb] = 0;
      auVar22[0xc] = auVar21[0xe];
      auVar22[0xd] = 0;
      auVar22[0xe] = auVar21[0xf];
      auVar22[0xf] = 0;
      auVar1[0xd] = 0;
      auVar1._0_13_ = auVar21._0_13_;
      auVar1[0xe] = auVar21[7];
      auVar2[0xc] = auVar21[6];
      auVar2._0_12_ = auVar21._0_12_;
      auVar2._13_2_ = auVar1._13_2_;
      auVar3[0xb] = 0;
      auVar3._0_11_ = auVar21._0_11_;
      auVar3._12_3_ = auVar2._12_3_;
      auVar4[10] = auVar21[5];
      auVar4._0_10_ = auVar21._0_10_;
      auVar4._11_4_ = auVar3._11_4_;
      auVar5[9] = 0;
      auVar5._0_9_ = auVar21._0_9_;
      auVar5._10_5_ = auVar4._10_5_;
      auVar6[8] = auVar21[4];
      auVar6._0_8_ = auVar21._0_8_;
      auVar6._9_6_ = auVar5._9_6_;
      auVar7._7_8_ = 0;
      auVar7._0_7_ = auVar6._8_7_;
      auVar8._1_8_ = SUB158(auVar7 << 0x40,7);
      auVar8[0] = auVar21[3];
      auVar8._9_6_ = 0;
      auVar9._1_10_ = SUB1510(auVar8 << 0x30,5);
      auVar9[0] = auVar21[2];
      auVar9._11_4_ = 0;
      auVar31._3_12_ = SUB1512(auVar9 << 0x20,3);
      auVar31[2] = auVar21[1];
      auVar31[0] = auVar21[0];
      auVar31[1] = 0;
      auVar31[0xf] = 0;
      *(undefined1 (*) [16])(pCVar13 + 0x10) = auVar22;
      *(undefined1 (*) [16])pCVar13 = auVar31;
      pCVar13 = pCVar14;
    } while (pCVar14 != local_44);
    local_44[0] = (Code)0x0;
    local_2d8 = param_3;
    local_2d0 = param_4;
    local_2c6 = _LC1;
    uStack_2be = _UNK_00101a38;
    local_2b6 = _LC1;
    local_278 = this;
    local_268 = pvVar16;
    local_260 = pvVar17;
    cVar10 = decoder::load((decoder *)&local_278,param_2,param_3);
    if (cVar10 == '\0') goto LAB_00101560;
    if (*(long *)(this + 0x18) == 0) {
      if (this[0x2b] != (Code)0x0) {
        free(*(void **)this);
      }
      this[0x20] = (Code)0x0;
      *(undefined8 *)(this + 0x24) = 0;
      *(undefined1 (*) [16])this = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
      goto LAB_00101560;
    }
    lVar18 = *(long *)(*(long *)this + -8 + *(long *)(this + 0x18) * 8);
    lVar15 = graphite2::vm::Machine::getOpcodeTable();
    if ((*(long *)(lVar15 + 0xa80) != lVar18 && *(long *)(lVar15 + 0xab8) != lVar18) &&
       (*(long *)(lVar15 + 0xaf0) != lVar18)) {
      if (this[0x2b] != (Code)0x0) {
        free(*(void **)this);
      }
      this[0x2b] = (Code)0x0;
      *(undefined4 *)(this + 0x24) = 7;
      *(undefined1 (*) [16])this = (undefined1  [16])0x0;
      goto LAB_00101560;
    }
    decoder::apply_analysis
              ((decoder *)&local_278,*(void ***)this,*(void ***)this + *(long *)(this + 0x18));
    this[0x20] = local_44[0];
    memmove((void *)(*(long *)this + 8 + *(long *)(this + 0x18) * 8),*(void **)(this + 8),
            *(size_t *)(this + 0x10));
    lVar15 = *(long *)(this + 0x18);
    lVar18 = lVar15 + 1;
    __size = ((*(long *)(this + 0x10) + 7U >> 3) + lVar18) * 8;
    if (param_10 == (long *)0x0) {
      pvVar16 = *(void **)this;
      pvVar17 = realloc(pvVar16,__size);
      *(void **)this = pvVar17;
      if (pvVar17 == (void *)0x0) {
        free(pvVar16);
        lVar15 = *(long *)(this + 0x18);
        lVar18 = lVar15 + 1;
        goto LAB_00101663;
      }
      lVar15 = *(long *)(this + 0x18);
      *(long *)(this + 8) = (long)pvVar17 + lVar15 * 8 + 8;
    }
    else {
      *param_10 = *param_10 + __size;
LAB_00101663:
      pvVar17 = *(void **)this;
      *(void **)(this + 8) = (void *)((long)pvVar17 + lVar18 * 8);
      if (pvVar17 == (void *)0x0) goto LAB_001015e1;
    }
    *(undefined8 *)((long)pvVar17 + lVar15 * 8) =
         *(undefined8 *)(lVar12 + 0xab8 + (ulong)(byte)this[0x28] * 8);
  }
LAB_00101560:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* graphite2::vm::Machine::Code::decoder::valid_upto(unsigned short, unsigned short) const */

bool __thiscall
graphite2::vm::Machine::Code::decoder::valid_upto(decoder *this,ushort param_1,ushort param_2)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  
  bVar2 = param_2 < param_1;
  if (bVar2) {
    return bVar2;
  }
  pauVar1 = *(undefined1 (**) [16])this;
  if (pauVar1[2][0xb] != '\0') {
    free(*(void **)*pauVar1);
  }
  pauVar1[2][0xb] = 0;
  *(undefined4 *)(pauVar1[2] + 4) = 4;
  *pauVar1 = (undefined1  [16])0x0;
  return bVar2;
}



/* graphite2::vm::Machine::Code::decoder::test_context() const */

undefined8 __thiscall graphite2::vm::Machine::Code::decoder::test_context(decoder *this)

{
  undefined1 (*pauVar1) [16];
  
  if ((*(uint *)(this + 8) < (uint)*(ushort *)(this + 0xc)) && (*(short *)(this + 0x32) < 0xff)) {
    return 1;
  }
  pauVar1 = *(undefined1 (**) [16])this;
  if (pauVar1[2][0xb] != '\0') {
    free(*(void **)*pauVar1);
  }
  pauVar1[2][0xb] = 0;
  *(undefined4 *)(pauVar1[2] + 4) = 4;
  *pauVar1 = (undefined1  [16])0x0;
  return 0;
}



/* graphite2::vm::Machine::Code::decoder::test_attr(gr_attrCode) const */

undefined8 graphite2::vm::Machine::Code::decoder::test_attr(void)

{
  return 1;
}



/* graphite2::vm::Machine::Code::release_buffers() */

void __thiscall graphite2::vm::Machine::Code::release_buffers(Code *this)

{
  if (this[0x2b] == (Code)0x0) {
    this[0x2b] = (Code)0x0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    return;
  }
  free(*(void **)this);
  this[0x2b] = (Code)0x0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* graphite2::vm::Machine::Code::run(graphite2::vm::Machine&, graphite2::Slot**&) const */

undefined8 graphite2::vm::Machine::Code::run(Machine *param_1,Slot ***param_2)

{
  Slot **ppSVar1;
  uint uVar2;
  undefined8 uVar3;
  
  ppSVar1 = *param_2;
  uVar2 = (uint)(byte)param_1[0x20] + (uint)*(ushort *)((long)ppSVar1 + 0x212);
  if ((uVar2 < *(ushort *)(ppSVar1 + 0x42)) && (ppSVar1[(long)(int)(uVar2 + 1) + 1] != (Slot *)0x0))
  {
    uVar3 = graphite2::vm::Machine::run(param_2,*(uchar **)param_1,*(Slot ****)(param_1 + 8));
    return uVar3;
  }
  *(undefined4 *)(param_2 + 0x203) = 4;
  return 1;
}


