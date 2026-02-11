
void save_token(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = param_1[6];
  lVar2 = param_1[5];
  if (lVar1 == lVar2) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
  }
  lVar3 = lVar1 + (-lVar1 & param_1[9]);
  if ((ulong)(param_1[7] - param_1[4]) < (ulong)(lVar3 - param_1[4])) {
    lVar3 = param_1[7];
  }
  plVar4 = (long *)param_1[0x11];
  param_1[5] = lVar3;
  param_1[6] = lVar3;
  if ((ulong)(param_1[0x12] - (long)plVar4) < 8) {
    rpl_obstack_newchunk(param_1 + 0xe,8);
    plVar4 = (long *)param_1[0x11];
  }
  *plVar4 = lVar2;
  plVar4 = (long *)param_1[0x1c];
  param_1[0x11] = param_1[0x11] + 8;
  if ((ulong)(param_1[0x1d] - (long)plVar4) < 8) {
    rpl_obstack_newchunk(param_1 + 0x19,8);
    plVar4 = (long *)param_1[0x1c];
  }
  *plVar4 = (lVar1 - lVar2) + -1;
  param_1[0x1c] = param_1[0x1c] + 8;
  *param_1 = *param_1 + 1;
  return;
}



void readtokens0_init(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  rpl_obstack_begin(param_1 + 3,0,0,&malloc,&free);
  rpl_obstack_begin(param_1 + 0xe,0,0,&malloc,&free);
  rpl_obstack_begin(param_1 + 0x19,0,0,&malloc,&free);
  return;
}



void readtokens0_free(long param_1)

{
  rpl_obstack_free(param_1 + 0x18,0);
  rpl_obstack_free(param_1 + 0x70,0);
  rpl_obstack_free(param_1 + 200,0);
  return;
}



undefined8 readtokens0(FILE *param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 extraout_var;
  undefined8 *puVar5;
  
LAB_001001be:
  do {
    iVar1 = fgetc(param_1);
    puVar2 = *(undefined1 **)(param_2 + 0x30);
    if (iVar1 == -1) {
      if (puVar2 != *(undefined1 **)(param_2 + 0x28)) {
        if (puVar2 == *(undefined1 **)(param_2 + 0x38)) {
          rpl_obstack_newchunk(param_2 + 0x18,1);
          puVar2 = *(undefined1 **)(param_2 + 0x30);
        }
        *(undefined1 **)(param_2 + 0x30) = puVar2 + 1;
        *puVar2 = 0;
        save_token(param_2);
      }
      puVar5 = *(undefined8 **)(param_2 + 0x88);
      if ((ulong)(*(long *)(param_2 + 0x90) - (long)puVar5) < 8) {
        rpl_obstack_newchunk(param_2 + 0x70,8);
        puVar5 = *(undefined8 **)(param_2 + 0x88);
      }
      *puVar5 = 0;
      lVar3 = *(long *)(param_2 + 0x88) + 8;
      if (lVar3 == *(long *)(param_2 + 0x80)) {
        *(byte *)(param_2 + 0xc0) = *(byte *)(param_2 + 0xc0) | 2;
      }
      *(long *)(param_2 + 8) = *(long *)(param_2 + 0x80);
      lVar3 = lVar3 + (-lVar3 & *(ulong *)(param_2 + 0xa0));
      if ((ulong)(*(long *)(param_2 + 0x90) - *(long *)(param_2 + 0x78)) <
          (ulong)(lVar3 - *(long *)(param_2 + 0x78))) {
        lVar3 = *(long *)(param_2 + 0x90);
      }
      lVar4 = *(long *)(param_2 + 0xe0);
      *(long *)(param_2 + 0x80) = lVar3;
      *(long *)(param_2 + 0x88) = lVar3;
      if (lVar4 == *(long *)(param_2 + 0xd8)) {
        *(byte *)(param_2 + 0x118) = *(byte *)(param_2 + 0x118) | 2;
      }
      *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0xd8);
      lVar4 = lVar4 + (-lVar4 & *(ulong *)(param_2 + 0xf8));
      if ((ulong)(*(long *)(param_2 + 0xe8) - *(long *)(param_2 + 0xd0)) <
          (ulong)(lVar4 - *(long *)(param_2 + 0xd0))) {
        lVar4 = *(long *)(param_2 + 0xe8);
      }
      *(long *)(param_2 + 0xd8) = lVar4;
      *(long *)(param_2 + 0xe0) = lVar4;
      iVar1 = ferror(param_1);
      return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
    }
    if (*(undefined1 **)(param_2 + 0x38) != puVar2) goto LAB_001001b0;
    rpl_obstack_newchunk(param_2 + 0x18,1);
    puVar2 = *(undefined1 **)(param_2 + 0x30);
    *(undefined1 **)(param_2 + 0x30) = puVar2 + 1;
    *puVar2 = (char)iVar1;
  } while (iVar1 != 0);
  goto LAB_00100200;
LAB_001001b0:
  *(undefined1 **)(param_2 + 0x30) = puVar2 + 1;
  *puVar2 = (char)iVar1;
  if (iVar1 == 0) {
LAB_00100200:
    save_token(param_2);
  }
  goto LAB_001001be;
}


