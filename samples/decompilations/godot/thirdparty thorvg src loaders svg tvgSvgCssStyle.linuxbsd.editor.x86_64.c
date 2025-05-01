
/* cssCopyStyleAttr(SvgNode*, SvgNode const*) */

void cssCopyStyleAttr(SvgNode *param_1,SvgNode *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  void *pvVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint uVar12;
  long lVar13;
  
  puVar3 = *(uint **)(param_1 + 0x28);
  if ((*(long *)(param_2 + 0x30) != 0) && (uVar12 = puVar3[0x30], (uVar12 & 0x800) == 0)) {
    puVar10 = (undefined8 *)malloc(0x24);
    *(undefined8 **)(param_1 + 0x30) = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_2 + 0x30);
      uVar5 = puVar4[1];
      *puVar10 = *puVar4;
      puVar10[1] = uVar5;
      uVar5 = puVar4[3];
      puVar10[2] = puVar4[2];
      puVar10[3] = uVar5;
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar4 + 4);
      puVar3[0x30] = uVar12 | 0x800;
    }
  }
  puVar11 = *(uint **)(param_2 + 0x28);
  if (puVar11 == (uint *)0x0) goto LAB_00100762;
  uVar12 = puVar11[0x31];
  if (((char)puVar11[0x32] == '\0') || ((puVar3[0x30] & 1) != 0)) {
    if (((puVar3[0x31] & 1) != 0) || ((uVar12 & 1) == 0)) goto LAB_00100099;
    *(short *)(puVar3 + 0x2d) = (short)puVar11[0x2d];
    uVar2 = *(undefined1 *)((long)puVar11 + 0xb6);
    puVar3[0x30] = puVar3[0x30] | 1;
    *(undefined1 *)((long)puVar3 + 0xb6) = uVar2;
    *(undefined1 *)(puVar3 + 0x32) = 1;
LAB_001003df:
    uVar7 = puVar11[0x30];
    puVar3[0x31] = puVar3[0x31] | 1;
    uVar12 = puVar11[0x31];
    if ((uVar7 & 0x10000) == 0) goto LAB_00100400;
LAB_001000aa:
    if ((puVar3[0x30] & 0x10000) != 0) goto LAB_00100400;
    uVar2 = *(undefined1 *)((long)puVar11 + 0xc9);
    puVar3[0x30] = puVar3[0x30] | 0x10000;
    *(undefined1 *)((long)puVar3 + 0xc9) = uVar2;
    if ((uVar12 & 0x10000) == 0) {
      uVar7 = puVar11[0x30];
      goto LAB_001000e7;
    }
LAB_00100430:
    puVar3[0x31] = puVar3[0x31] | 0x10000;
    uVar12 = puVar11[0x31];
    if ((puVar11[0x30] & 0x8000) == 0) goto LAB_00100450;
LAB_001000f0:
    if ((puVar3[0x30] & 0x8000) != 0) goto LAB_00100450;
    uVar2 = *(undefined1 *)((long)puVar11 + 0xca);
    puVar3[0x30] = puVar3[0x30] | 0x8000;
    *(undefined1 *)((long)puVar3 + 0xca) = uVar2;
    if ((uVar12 & 0x8000) == 0) goto LAB_0010011e;
LAB_0010047d:
    puVar3[0x31] = puVar3[0x31] | 0x8000;
    uVar12 = *puVar11;
    if ((uVar12 & 1) == 0) goto LAB_00100498;
LAB_00100129:
    if ((puVar3[0x30] & 2) != 0) goto LAB_00100498;
LAB_00100136:
    pcVar8 = *(char **)(puVar11 + 4);
    *(short *)(puVar3 + 6) = (short)puVar11[6];
    *(undefined1 *)((long)puVar3 + 0x1a) = *(undefined1 *)((long)puVar11 + 0x1a);
    *(undefined2 *)((long)puVar3 + 0x1b) = *(undefined2 *)((long)puVar11 + 0x1b);
    if (pcVar8 != (char *)0x0) {
      if (*(void **)(puVar3 + 4) != (void *)0x0) {
        free(*(void **)(puVar3 + 4));
        pcVar8 = *(char **)(puVar11 + 4);
      }
      pcVar8 = strdup(pcVar8);
      *(char **)(puVar3 + 4) = pcVar8;
    }
    uVar7 = puVar11[0x31];
    *puVar3 = *puVar3 | 1;
    puVar3[0x30] = puVar3[0x30] | 2;
    if ((uVar7 & 2) == 0) {
      uVar12 = *puVar11;
    }
    else {
      puVar3[0x31] = puVar3[0x31] | 2;
      uVar12 = *puVar11;
      uVar7 = puVar11[0x31];
    }
joined_r0x001008ad:
    if ((uVar12 & 2) == 0) goto LAB_001004c0;
LAB_001001a5:
    if ((puVar3[0x30] & 8) != 0) goto LAB_001004c0;
    uVar12 = puVar11[8];
    *puVar3 = *puVar3 | 2;
    puVar3[0x30] = puVar3[0x30] | 8;
    puVar3[8] = uVar12;
    if ((uVar7 & 8) == 0) {
      uVar12 = *puVar11;
      goto LAB_001001d2;
    }
LAB_001004e6:
    uVar12 = *puVar11;
    puVar3[0x31] = puVar3[0x31] | 8;
    uVar7 = puVar11[0x31];
    if ((uVar12 & 8) == 0) goto LAB_00100500;
LAB_001001da:
    if ((puVar3[0x30] & 4) != 0) goto LAB_00100500;
    uVar12 = puVar11[9];
    *puVar3 = *puVar3 | 8;
    puVar3[0x30] = puVar3[0x30] | 4;
    puVar3[9] = uVar12;
    if ((uVar7 & 4) == 0) goto LAB_00100203;
LAB_00100526:
    uVar12 = puVar11[10];
    puVar3[0x31] = puVar3[0x31] | 4;
    if ((uVar12 & 1) == 0) goto LAB_00100540;
LAB_0010020e:
    if ((puVar3[0x30] & 0x20) != 0) goto LAB_00100540;
LAB_0010021b:
    pcVar8 = *(char **)(puVar11 + 0xe);
    *(short *)(puVar3 + 0x10) = (short)puVar11[0x10];
    *(undefined1 *)((long)puVar3 + 0x42) = *(undefined1 *)((long)puVar11 + 0x42);
    *(undefined2 *)((long)puVar3 + 0x43) = *(undefined2 *)((long)puVar11 + 0x43);
    if (pcVar8 != (char *)0x0) {
      if (*(void **)(puVar3 + 0xe) != (void *)0x0) {
        free(*(void **)(puVar3 + 0xe));
        pcVar8 = *(char **)(puVar11 + 0xe);
      }
      pcVar8 = strdup(pcVar8);
      *(char **)(puVar3 + 0xe) = pcVar8;
    }
    uVar7 = puVar11[0x31];
    puVar3[10] = puVar3[10] | 1;
    puVar3[0x30] = puVar3[0x30] | 0x20;
    if ((uVar7 & 0x20) == 0) {
      uVar12 = puVar11[10];
    }
    else {
      puVar3[0x31] = puVar3[0x31] | 0x20;
      uVar12 = puVar11[10];
      uVar7 = puVar11[0x31];
    }
joined_r0x001008c5:
    if ((uVar12 & 2) == 0) goto LAB_00100568;
LAB_0010028b:
    if ((puVar3[0x30] & 0x200) != 0) goto LAB_00100568;
    uVar12 = puVar11[0x12];
    puVar3[10] = puVar3[10] | 2;
    puVar3[0x30] = puVar3[0x30] | 0x200;
    puVar3[0x12] = uVar12;
    if ((uVar7 & 0x200) == 0) {
      uVar12 = puVar11[10];
      goto LAB_001002b9;
    }
LAB_00100592:
    puVar3[0x31] = puVar3[0x31] | 0x200;
    uVar12 = puVar11[10];
    uVar7 = puVar11[0x31];
    if ((uVar12 & 0x10) == 0) goto LAB_001005b0;
LAB_001002c1:
    if ((puVar3[0x30] & 0x40) != 0) goto LAB_001005b0;
    uVar12 = puVar11[0x14];
    puVar3[10] = puVar3[10] | 0x10;
    puVar3[0x30] = puVar3[0x30] | 0x40;
    puVar3[0x14] = uVar12;
    if ((uVar7 & 0x40) != 0) goto LAB_001005db;
    uVar12 = puVar11[10];
  }
  else {
    *(short *)(puVar3 + 0x2d) = (short)puVar11[0x2d];
    uVar2 = *(undefined1 *)((long)puVar11 + 0xb6);
    *(undefined1 *)(puVar3 + 0x32) = 1;
    *(undefined1 *)((long)puVar3 + 0xb6) = uVar2;
    puVar3[0x30] = puVar3[0x30] | 1;
    if ((uVar12 & 1) != 0) goto LAB_001003df;
LAB_00100099:
    uVar7 = puVar11[0x30];
    if ((uVar7 & 0x10000) != 0) goto LAB_001000aa;
LAB_00100400:
    if (((*(byte *)((long)puVar3 + 0xc6) & 1) == 0) && ((uVar12 & 0x10000) != 0)) {
      uVar2 = *(undefined1 *)((long)puVar11 + 0xc9);
      puVar3[0x30] = puVar3[0x30] | 0x10000;
      *(undefined1 *)((long)puVar3 + 0xc9) = uVar2;
      goto LAB_00100430;
    }
LAB_001000e7:
    if ((uVar7 & 0x8000) != 0) goto LAB_001000f0;
LAB_00100450:
    if (((*(byte *)((long)puVar3 + 0xc5) & 0x80) == 0) && ((uVar12 & 0x8000) != 0)) {
      uVar2 = *(undefined1 *)((long)puVar11 + 0xca);
      puVar3[0x30] = puVar3[0x30] | 0x8000;
      *(undefined1 *)((long)puVar3 + 0xca) = uVar2;
      goto LAB_0010047d;
    }
LAB_0010011e:
    uVar12 = *puVar11;
    if ((uVar12 & 1) != 0) goto LAB_00100129;
LAB_00100498:
    uVar7 = puVar11[0x31];
    if ((puVar3[0x31] & 2) != 0) goto joined_r0x001008ad;
    if ((uVar7 & 2) != 0) goto LAB_00100136;
    if ((uVar12 & 2) != 0) goto LAB_001001a5;
LAB_001004c0:
    if (((puVar3[0x31] & 8) == 0) && ((uVar7 & 8) != 0)) {
      uVar12 = puVar11[8];
      *puVar3 = *puVar3 | 2;
      puVar3[0x30] = puVar3[0x30] | 8;
      puVar3[8] = uVar12;
      goto LAB_001004e6;
    }
LAB_001001d2:
    if ((uVar12 & 8) != 0) goto LAB_001001da;
LAB_00100500:
    if (((puVar3[0x31] & 4) == 0) && ((uVar7 & 4) != 0)) {
      uVar12 = puVar11[9];
      *puVar3 = *puVar3 | 8;
      puVar3[0x30] = puVar3[0x30] | 4;
      puVar3[9] = uVar12;
      goto LAB_00100526;
    }
LAB_00100203:
    uVar12 = puVar11[10];
    if ((uVar12 & 1) != 0) goto LAB_0010020e;
LAB_00100540:
    uVar7 = puVar11[0x31];
    if ((puVar3[0x31] & 0x20) != 0) goto joined_r0x001008c5;
    if ((uVar7 & 0x20) != 0) goto LAB_0010021b;
    if ((uVar12 & 2) != 0) goto LAB_0010028b;
LAB_00100568:
    if (((*(byte *)((long)puVar3 + 0xc5) & 2) == 0) && ((uVar7 & 0x200) != 0)) {
      uVar12 = puVar11[0x12];
      puVar3[10] = puVar3[10] | 2;
      puVar3[0x30] = puVar3[0x30] | 0x200;
      puVar3[0x12] = uVar12;
      goto LAB_00100592;
    }
LAB_001002b9:
    if ((uVar12 & 0x10) != 0) goto LAB_001002c1;
LAB_001005b0:
    if (((puVar3[0x31] & 0x40) == 0) && ((uVar7 & 0x40) != 0)) {
      uVar12 = puVar11[0x14];
      puVar3[10] = puVar3[10] | 0x10;
      puVar3[0x30] = puVar3[0x30] | 0x40;
      puVar3[0x14] = uVar12;
LAB_001005db:
      puVar3[0x31] = puVar3[0x31] | 0x40;
      uVar12 = puVar11[10];
    }
  }
  if ((((uVar12 & 0x80) == 0) || ((*(byte *)((long)puVar3 + 0xc1) & 4) != 0)) &&
     ((uVar7 = puVar11[0x31], (*(byte *)((long)puVar3 + 0xc5) & 4) != 0 || ((uVar7 & 0x400) == 0))))
  {
LAB_00100608:
    if ((uVar12 & 0x20) == 0) goto LAB_001006b8;
LAB_00100610:
    if ((puVar3[0x30] & 0x100) != 0) goto LAB_001006b8;
    uVar12 = puVar11[0x16];
    puVar3[10] = puVar3[10] | 0x20;
    puVar3[0x30] = puVar3[0x30] | 0x100;
    puVar3[0x16] = uVar12;
    if ((uVar7 & 0x100) == 0) {
      uVar12 = puVar11[10];
      goto LAB_0010063e;
    }
LAB_001006e2:
    puVar3[0x31] = puVar3[0x31] | 0x100;
    uVar7 = puVar11[0x31];
    if ((puVar11[10] & 0x40) == 0) goto LAB_00100700;
LAB_00100646:
    if ((puVar3[0x30] & 0x80) != 0) goto LAB_00100700;
    uVar12 = puVar11[0x17];
    puVar3[10] = puVar3[10] | 0x40;
    puVar3[0x30] = puVar3[0x30] | 0x80;
    puVar3[0x17] = uVar12;
    if ((uVar7 & 0x80) == 0) goto LAB_0010066f;
LAB_0010072a:
    puVar3[0x31] = puVar3[0x31] | 0x80;
    uVar12 = puVar11[0x2c];
    uVar7 = puVar11[0x31];
    if (0xfe < (int)uVar12) goto LAB_00100750;
LAB_00100680:
    if ((puVar3[0x30] & 0x10) != 0) goto LAB_00100750;
    puVar11 = *(uint **)(param_2 + 0x28);
    puVar3[0x2c] = uVar12;
    puVar3[0x30] = puVar3[0x30] | 0x10;
    if ((uVar7 & 0x10) == 0) goto LAB_00100762;
  }
  else {
    if (puVar11[0x1c] != 0) {
      puVar3[0x1c] = 0;
      uVar12 = puVar11[0x1c];
      if (puVar3[0x1d] < uVar12) {
        puVar3[0x1d] = uVar12;
        pvVar9 = realloc(*(void **)(puVar3 + 0x1a),(ulong)uVar12 * 4);
        *(void **)(puVar3 + 0x1a) = pvVar9;
        uVar12 = puVar11[0x1c];
      }
      if (uVar12 != 0) {
        uVar12 = puVar3[0x1c];
        pvVar9 = *(void **)(puVar3 + 0x1a);
        lVar13 = 0;
        do {
          uVar1 = *(undefined4 *)(*(long *)(puVar11 + 0x1a) + lVar13 * 4);
          uVar6 = uVar12 + 1;
          uVar7 = uVar12;
          if (puVar3[0x1d] < uVar12 + 1) {
            uVar12 = (uVar12 + 2 >> 1) + uVar12;
            puVar3[0x1d] = uVar12;
            pvVar9 = realloc(pvVar9,(ulong)uVar12 << 2);
            *(void **)(puVar3 + 0x1a) = pvVar9;
            uVar6 = puVar3[0x1c] + 1;
            uVar7 = puVar3[0x1c];
          }
          uVar12 = uVar6;
          puVar3[0x1c] = uVar12;
          lVar13 = lVar13 + 1;
          *(undefined4 *)((long)pvVar9 + (ulong)uVar7 * 4) = uVar1;
        } while ((uint)lVar13 < puVar11[0x1c]);
      }
      uVar7 = puVar11[0x31];
      puVar3[10] = puVar3[10] | 0x80;
      puVar3[0x30] = puVar3[0x30] | 0x400;
      if ((uVar7 & 0x400) == 0) {
        uVar12 = puVar11[10];
        goto LAB_00100608;
      }
      puVar3[0x31] = puVar3[0x31] | 0x400;
      uVar12 = puVar11[10];
    }
    uVar7 = puVar11[0x31];
    if ((uVar12 & 0x20) != 0) goto LAB_00100610;
LAB_001006b8:
    if (((*(byte *)((long)puVar3 + 0xc5) & 1) == 0) && ((uVar7 & 0x100) != 0)) {
      uVar12 = puVar11[0x16];
      puVar3[10] = puVar3[10] | 0x20;
      puVar3[0x30] = puVar3[0x30] | 0x100;
      puVar3[0x16] = uVar12;
      goto LAB_001006e2;
    }
LAB_0010063e:
    if ((uVar12 & 0x40) != 0) goto LAB_00100646;
LAB_00100700:
    if (((puVar3[0x31] & 0x80) == 0) && ((uVar7 & 0x80) != 0)) {
      uVar12 = puVar11[0x17];
      puVar3[10] = puVar3[10] | 0x40;
      puVar3[0x30] = puVar3[0x30] | 0x80;
      puVar3[0x17] = uVar12;
      goto LAB_0010072a;
    }
LAB_0010066f:
    uVar12 = puVar11[0x2c];
    if ((int)uVar12 < 0xff) goto LAB_00100680;
LAB_00100750:
    if (((puVar3[0x31] & 0x10) != 0) || ((uVar7 & 0x10) == 0)) {
      puVar11 = *(uint **)(param_2 + 0x28);
      goto LAB_00100762;
    }
    puVar3[0x30] = puVar3[0x30] | 0x10;
    puVar11 = *(uint **)(param_2 + 0x28);
    puVar3[0x2c] = uVar12;
  }
  puVar3[0x31] = puVar3[0x31] | 0x10;
LAB_00100762:
  pcVar8 = *(char **)(puVar11 + 0x20);
  if (pcVar8 != (char *)0x0) {
    lVar13 = *(long *)(param_1 + 0x28);
    if (*(void **)(lVar13 + 0x80) != (void *)0x0) {
      free(*(void **)(lVar13 + 0x80));
      puVar11 = *(uint **)(param_2 + 0x28);
      lVar13 = *(long *)(param_1 + 0x28);
      pcVar8 = *(char **)(puVar11 + 0x20);
    }
    pcVar8 = strdup(pcVar8);
    *(char **)(lVar13 + 0x80) = pcVar8;
  }
  pcVar8 = *(char **)(puVar11 + 0x26);
  if (pcVar8 != (char *)0x0) {
    lVar13 = *(long *)(param_1 + 0x28);
    if (*(void **)(lVar13 + 0x98) != (void *)0x0) {
      free(*(void **)(lVar13 + 0x98));
      lVar13 = *(long *)(param_1 + 0x28);
      pcVar8 = *(char **)(*(long *)(param_2 + 0x28) + 0x98);
    }
    pcVar8 = strdup(pcVar8);
    *(char **)(lVar13 + 0x98) = pcVar8;
  }
  return;
}



/* cssFindStyleNode(SvgNode const*, char const*, SvgNodeType) */

int * cssFindStyleNode(long param_1,char *param_2,int param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  char *__s1;
  int iVar3;
  undefined8 *puVar4;
  
  if (param_1 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x18) != 0) {
      puVar1 = puVar4 + *(uint *)(param_1 + 0x18);
      do {
        while (piVar2 = (int *)*puVar4, *piVar2 != param_3) {
LAB_00100930:
          puVar4 = puVar4 + 1;
          if (puVar1 == puVar4) {
            return (int *)0x0;
          }
        }
        __s1 = *(char **)(piVar2 + 8);
        if (param_2 != (char *)0x0) {
          if ((__s1 != (char *)0x0) && (iVar3 = strcmp(__s1,param_2), iVar3 == 0)) {
            return piVar2;
          }
          goto LAB_00100930;
        }
        if (__s1 == (char *)0x0) {
          return piVar2;
        }
        puVar4 = puVar4 + 1;
        if (puVar1 == puVar4) {
          return (int *)0x0;
        }
      } while( true );
    }
  }
  return (int *)0x0;
}



/* cssFindStyleNode(SvgNode const*, char const*) */

int * cssFindStyleNode(SvgNode *param_1,char *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if ((param_1 != (SvgNode *)0x0) && (param_2 != (char *)0x0)) {
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x18) != 0) {
      puVar1 = puVar4 + *(uint *)(param_1 + 0x18);
      do {
        piVar2 = (int *)*puVar4;
        if ((*piVar2 == 0x14) && (*(char **)(piVar2 + 8) != (char *)0x0)) {
          iVar3 = strcmp(*(char **)(piVar2 + 8),param_2);
          if (iVar3 == 0) {
            return piVar2;
          }
        }
        puVar4 = puVar4 + 1;
      } while (puVar1 != puVar4);
    }
  }
  return (int *)0x0;
}



/* cssUpdateStyle(SvgNode*, SvgNode*) */

void cssUpdateStyle(SvgNode *param_1,SvgNode *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  SvgNode *pSVar3;
  undefined8 *puVar4;
  SvgNode *pSVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  lVar6 = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  do {
    pSVar5 = *(SvgNode **)(lVar2 + lVar6 * 8);
    if (param_2 != (SvgNode *)0x0) {
      puVar4 = *(undefined8 **)(param_2 + 0x10);
      if (*(uint *)(param_2 + 0x18) != 0) {
        puVar1 = puVar4 + *(uint *)(param_2 + 0x18);
        do {
          pSVar3 = (SvgNode *)*puVar4;
          if ((*(int *)pSVar5 == *(int *)pSVar3) && (*(long *)(pSVar3 + 0x20) == 0)) {
            cssCopyStyleAttr(pSVar5,pSVar3);
            pSVar5 = *(SvgNode **)(lVar2 + lVar6 * 8);
            break;
          }
          puVar4 = puVar4 + 1;
        } while (puVar1 != puVar4);
      }
    }
    lVar6 = lVar6 + 1;
    cssUpdateStyle(pSVar5,param_2);
    if (*(uint *)(param_1 + 0x18) <= (uint)lVar6) {
      return;
    }
  } while( true );
}



/* cssApplyStyleToPostponeds(tvg::Array<SvgNodeIdPair>&, SvgNode*) */

void cssApplyStyleToPostponeds(Array *param_1,SvgNode *param_2)

{
  SvgNode *pSVar1;
  char *pcVar2;
  undefined8 *puVar3;
  SvgNode *pSVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 8) != 0) {
    lVar5 = 0;
    do {
      puVar3 = (undefined8 *)(lVar5 * 0x10 + *(long *)param_1);
      pSVar1 = (SvgNode *)*puVar3;
      pcVar2 = (char *)puVar3[1];
      pSVar4 = (SvgNode *)cssFindStyleNode(param_2,pcVar2,*(undefined4 *)pSVar1);
      if (pSVar4 != (SvgNode *)0x0) {
        cssCopyStyleAttr(pSVar1,pSVar4);
      }
      pSVar4 = (SvgNode *)cssFindStyleNode(param_2,pcVar2);
      if (pSVar4 != (SvgNode *)0x0) {
        cssCopyStyleAttr(pSVar1,pSVar4);
      }
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < *(uint *)(param_1 + 8));
    return;
  }
  return;
}


