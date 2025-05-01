
void oc_frag_copy_c(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = 0;
  iVar2 = 8;
  do {
    *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
    lVar1 = lVar1 + param_3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void oc_frag_copy_list_c(long param_1,long param_2,int param_3,long *param_4,long param_5,
                        long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (0 < param_5) {
    plVar1 = param_4 + param_5;
    do {
      iVar4 = 8;
      lVar2 = *(long *)(param_6 + *param_4 * 8);
      lVar3 = 0;
      do {
        *(undefined8 *)(lVar2 + param_1 + lVar3) = *(undefined8 *)(param_2 + lVar2 + lVar3);
        lVar3 = lVar3 + param_3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      param_4 = param_4 + 1;
    } while (plVar1 != param_4);
    return;
  }
  return;
}



void oc_frag_recon_intra_c(long param_1,int param_2,long param_3)

{
  long lVar1;
  short sVar2;
  byte bVar3;
  long lVar4;
  
  lVar1 = param_3 + 0x80;
  do {
    lVar4 = 0;
    do {
      sVar2 = *(short *)(param_3 + lVar4 * 2);
      bVar3 = -(0x7f < sVar2) | (char)sVar2 + 0x80U;
      if (sVar2 < -0x80) {
        bVar3 = 0;
      }
      *(byte *)(param_1 + lVar4) = bVar3;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 8);
    param_3 = param_3 + 0x10;
    param_1 = param_1 + param_2;
  } while (lVar1 != param_3);
  return;
}



void oc_frag_recon_inter_c(long param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  
  lVar1 = param_4 + 0x80;
  do {
    lVar5 = 0;
    do {
      sVar2 = *(short *)(param_4 + lVar5 * 2);
      iVar4 = (int)sVar2 + (uint)*(byte *)(param_2 + lVar5);
      bVar3 = -(0xff < iVar4) | *(byte *)(param_2 + lVar5) + (char)sVar2;
      if (iVar4 < 0) {
        bVar3 = 0;
      }
      *(byte *)(param_1 + lVar5) = bVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 8);
    param_4 = param_4 + 0x10;
    param_1 = param_1 + param_3;
    param_2 = param_2 + param_3;
  } while (lVar1 != param_4);
  return;
}



void oc_frag_recon_inter2_c(long param_1,long param_2,long param_3,int param_4,long param_5)

{
  long lVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  lVar1 = param_5 + 0x80;
  lVar6 = (long)param_4;
  do {
    lVar5 = 0;
    do {
      sVar2 = *(short *)(param_5 + lVar5 * 2);
      iVar4 = (int)((uint)*(byte *)(param_2 + lVar5) + (uint)*(byte *)(param_3 + lVar5)) >> 1;
      iVar7 = sVar2 + iVar4;
      bVar3 = -(0xff < iVar7) | (char)sVar2 + (char)iVar4;
      if (iVar7 < 0) {
        bVar3 = 0;
      }
      *(byte *)(param_1 + lVar5) = bVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 8);
    param_5 = param_5 + 0x10;
    param_1 = param_1 + lVar6;
    param_2 = param_2 + lVar6;
    param_3 = param_3 + lVar6;
  } while (lVar1 != param_5);
  return;
}



void oc_restore_fpu_c(void)

{
  return;
}


