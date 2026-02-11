
undefined8 ktxTexture_construct(undefined8 *param_1,long param_2,uint *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  
  *param_1 = 0;
  param_1[0xe] = 0;
  puVar12 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)(((int)param_1 -
                        (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x78U >> 3
                       ); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  pvVar8 = calloc(0xa8,1);
  param_1[3] = pvVar8;
  if (pvVar8 == (void *)0x0) {
    return 0xd;
  }
  uVar5 = *(undefined8 *)(param_3 + 2);
  uVar6 = *(undefined8 *)(param_3 + 4);
  uVar7 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)pvVar8 + 0x18) = *(undefined8 *)param_3;
  *(undefined8 *)((long)pvVar8 + 0x20) = uVar5;
  *(undefined8 *)((long)pvVar8 + 0x28) = uVar6;
  *(undefined8 *)((long)pvVar8 + 0x30) = uVar7;
  uVar11 = *param_3;
  *(undefined4 *)(param_1 + 9) = 0x6f;
  *(byte *)((long)param_1 + 0x22) = (byte)(uVar11 >> 1) & 1;
  param_1[8] = _LC0;
  iVar2 = *(int *)(param_2 + 0x1c);
  if (2 < iVar2 - 1U) {
    return 0xb;
  }
  uVar11 = *(uint *)(param_2 + 0x10);
  if (uVar11 == 0) {
    return 0xb;
  }
  uVar3 = *(uint *)(param_2 + 0x14);
  if (uVar3 == 0) {
    return 0xb;
  }
  uVar4 = *(uint *)(param_2 + 0x18);
  if (uVar4 == 0) {
    return 0xb;
  }
  if (iVar2 == 2) {
LAB_00100125:
    if (uVar4 != 1) {
      return 10;
    }
    *(ulong *)((long)param_1 + 0x24) = CONCAT44(uVar3,uVar11);
    *(ulong *)((long)param_1 + 0x2c) = CONCAT44(iVar2,uVar4);
    if (*(int *)(param_2 + 0x24) == 0) {
      return 0xb;
    }
    *(int *)(param_1 + 7) = *(int *)(param_2 + 0x24);
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x2c);
    iVar9 = *(int *)(param_2 + 0x28);
    if (iVar9 == 6) {
      if (iVar2 != 2) {
        return 10;
      }
      if (uVar11 != uVar3) {
        return 10;
      }
      *(undefined1 *)((long)param_1 + 0x21) = 1;
      goto LAB_0010014c;
    }
  }
  else {
    if (iVar2 != 3) {
      if (uVar3 != 1) {
        return 10;
      }
      goto LAB_00100125;
    }
    if ((*(ulong *)(param_2 + 0x28) & 0xffffffffff) != 1) {
      return 10;
    }
    if (*(int *)(param_2 + 0x24) != 1) {
      return 10;
    }
    uVar1 = *(undefined1 *)(param_2 + 0x2c);
    *(ulong *)((long)param_1 + 0x24) = CONCAT44(uVar3,uVar11);
    *(ulong *)((long)param_1 + 0x2c) = CONCAT44(iVar2,uVar4);
    iVar9 = *(int *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 7) = 1;
    *(undefined1 *)(param_1 + 4) = uVar1;
    if (iVar9 == 6) {
      return 10;
    }
  }
  if (iVar9 != 1) {
    return 0xb;
  }
LAB_0010014c:
  *(int *)((long)param_1 + 0x3c) = iVar9;
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 == 0) {
    return 0xb;
  }
  uVar1 = *(undefined1 *)(param_2 + 0x2d);
  *(int *)((long)param_1 + 0x34) = iVar2;
  *(undefined1 *)((long)param_1 + 0x23) = uVar1;
  if (iVar2 != 1) {
    if (uVar11 < uVar3) {
      uVar11 = uVar3;
    }
    if (uVar11 < uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 < (uint)(1 << ((char)iVar2 - 1U & 0x1f))) {
      return 10;
    }
  }
  ktxHashList_Construct(param_1 + 10);
  return 0;
}



undefined8 ktxTexture_constructFromStream(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  
  pvVar13 = malloc(0xa8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(void **)(param_1 + 0x18) = pvVar13;
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  *(undefined8 *)((long)pvVar13 + 0x40) = uVar1;
  *(undefined8 *)((long)pvVar13 + 0x48) = uVar2;
  uVar1 = param_2[0xc];
  *(undefined8 *)((long)pvVar13 + 0x50) = uVar3;
  *(undefined8 *)((long)pvVar13 + 0x58) = uVar4;
  *(undefined8 *)((long)pvVar13 + 0x60) = uVar5;
  *(undefined8 *)((long)pvVar13 + 0x68) = uVar6;
  *(undefined8 *)((long)pvVar13 + 0xa0) = uVar1;
  *(undefined8 *)((long)pvVar13 + 0x70) = uVar7;
  *(undefined8 *)((long)pvVar13 + 0x78) = uVar8;
  *(undefined8 *)((long)pvVar13 + 0x80) = uVar9;
  *(undefined8 *)((long)pvVar13 + 0x88) = uVar10;
  *(undefined8 *)((long)pvVar13 + 0x90) = uVar11;
  *(undefined8 *)((long)pvVar13 + 0x98) = uVar12;
  uVar1 = _LC0;
  *(undefined4 *)(param_1 + 0x48) = 0x6f;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return 0;
}



void ktxTexture_destruct(long param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  code *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_1 + 0x18);
  local_78 = *(undefined8 *)(lVar1 + 0x40);
  uStack_70 = *(undefined8 *)(lVar1 + 0x48);
  local_68 = *(undefined8 *)(lVar1 + 0x50);
  uStack_60 = *(undefined8 *)(lVar1 + 0x58);
  local_58 = *(undefined8 *)(lVar1 + 0x60);
  uStack_50 = *(undefined8 *)(lVar1 + 0x68);
  local_48 = *(code **)(lVar1 + 0x70);
  uStack_40 = *(undefined8 *)(lVar1 + 0x78);
  local_38 = *(undefined8 *)(lVar1 + 0x80);
  uStack_30 = *(undefined8 *)(lVar1 + 0x88);
  local_28 = *(undefined8 *)(lVar1 + 0x90);
  uStack_20 = *(undefined8 *)(lVar1 + 0x98);
  local_18 = *(undefined8 *)(lVar1 + 0xa0);
  if (*(long *)(lVar1 + 0x80) != 0) {
    (*local_48)(&local_78);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    ktxHashList_Destruct(param_1 + 0x50);
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    free(*(void **)(param_1 + 0x60));
  }
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    free(*(void **)(param_1 + 0x70));
  }
  free(*(void **)(param_1 + 0x18));
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ktxTexture_CreateFromStream(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  void *__ptr;
  long in_FS_OFFSET;
  long local_98;
  int local_90;
  undefined1 local_8c [68];
  long local_48;
  int local_40;
  long local_3c;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0xa1a0a0d;
  local_34 = 0xa1a0a0d;
  local_48 = -0x44cecedfa7abb455;
  local_3c = -0x44cfcddfa7abb455;
  uVar1 = (*(code *)*param_1)(param_1,&local_98,0xc);
  if ((int)uVar1 != 0) goto LAB_00100398;
  if ((local_98 == local_48) && (local_90 == local_40)) {
    uVar1 = (*(code *)*param_1)(param_1,local_8c,0x34);
    if ((int)uVar1 != 0) goto LAB_00100398;
    __ptr = calloc(0x90,1);
    if (__ptr == (void *)0x0) {
LAB_0010048c:
      uVar1 = 0xd;
      goto LAB_00100398;
    }
    uVar1 = ktxTexture1_constructFromStreamAndHeader(__ptr,param_1,&local_98,param_2);
  }
  else {
    if ((local_98 != local_3c) || (local_90 != local_34)) {
      uVar1 = 0xf;
      goto LAB_00100398;
    }
    uVar1 = (*(code *)*param_1)(param_1,local_8c,0x44);
    if ((int)uVar1 != 0) goto LAB_00100398;
    __ptr = calloc(0xa8,1);
    if (__ptr == (void *)0x0) goto LAB_0010048c;
    uVar1 = ktxTexture2_constructFromStreamAndHeader(__ptr,param_1,&local_98,param_2);
  }
  if ((int)uVar1 == 0) {
    *param_3 = __ptr;
  }
  else {
    free(__ptr);
    *param_3 = 0;
    uVar1 = uVar1 & 0xffffffff;
  }
LAB_00100398:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ktxTexture_CreateFromStdioStream(long param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (param_3 == 0)) {
    uVar1 = 0xb;
  }
  else {
    uVar1 = ktxFileStream_construct(auStack_88,param_1,0);
    if ((int)uVar1 == 0) {
      uVar1 = ktxTexture_CreateFromStream(auStack_88,param_2,param_3);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ktxTexture_CreateFromNamedFile(char *param_1,undefined4 param_2,long param_3)

{
  FILE *pFVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (char *)0x0) || (param_3 == 0)) {
    uVar2 = 0xb;
  }
  else {
    pFVar1 = fopen64(param_1,"rb");
    if (pFVar1 == (FILE *)0x0) {
      uVar2 = 3;
    }
    else {
      uVar2 = ktxFileStream_construct(auStack_88,pFVar1,1);
      if ((int)uVar2 == 0) {
        uVar2 = ktxTexture_CreateFromStream(auStack_88,param_2,param_3);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ktxTexture_CreateFromMemory(long param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0 || param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0xb;
  }
  else {
    uVar1 = ktxMemStream_construct_ro(auStack_88,param_1,param_2);
    if ((int)uVar1 == 0) {
      uVar1 = ktxTexture_CreateFromStream(auStack_88,param_3,param_4);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ktxTexture_GetData(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



undefined8 ktxTexture_GetDataSize(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



uint ktxTexture_GetElementSize(long param_1)

{
  return *(uint *)(*(long *)(param_1 + 0x18) + 0x20) >> 3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ktxTexture_calcImageSize(long param_1,byte param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(long *)(param_1 + 0x18);
  fVar6 = (float)(*(uint *)(param_1 + 0x24) >> (param_2 & 0x1f)) / (float)*(uint *)(lVar1 + 0x24);
  if ((float)((uint)fVar6 & _LC7) < _LC2) {
    fVar6 = (float)((uint)((float)(int)fVar6 + (float)(-(uint)((float)(int)fVar6 < fVar6) & _LC4)) |
                   ~_LC7 & (uint)fVar6);
  }
  fVar5 = (float)(*(uint *)(param_1 + 0x28) >> (param_2 & 0x1f)) / (float)*(uint *)(lVar1 + 0x28);
  if ((float)((uint)fVar5 & _LC7) < _LC2) {
    fVar5 = (float)((uint)((float)(int)fVar5 + (float)(-(uint)((float)(int)fVar5 < fVar5) & _LC4)) |
                   ~_LC7 & (uint)fVar5);
  }
  uVar4 = *(uint *)(lVar1 + 0x30);
  if (*(uint *)(lVar1 + 0x30) <= (uint)(long)fVar6) {
    uVar4 = (uint)(long)fVar6;
  }
  uVar2 = (uint)(long)fVar5;
  if ((uint)(long)fVar5 < *(uint *)(lVar1 + 0x34)) {
    uVar2 = *(uint *)(lVar1 + 0x34);
  }
  uVar3 = *(uint *)(lVar1 + 0x20) >> 3;
  if ((*(byte *)(lVar1 + 0x18) & 2) != 0) {
    return uVar2 * uVar4 * uVar3;
  }
  uVar4 = uVar4 * uVar3;
  if (param_3 != 1) {
    return uVar2 * uVar4;
  }
  fVar6 = _LC5 * (float)uVar4;
  if ((float)((uint)fVar6 & _LC7) < _LC2) {
    fVar6 = (float)((uint)((float)(int)fVar6 + (float)(-(uint)((float)(int)fVar6 < fVar6) & _LC4)) |
                   ~_LC7 & (uint)fVar6);
  }
  return uVar2 * (uVar4 + (int)(long)(fVar6 * __LC6 - (float)uVar4));
}



int ktxTexture_IterateLevelFaces(long param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (param_2 == (code *)0x0)) {
    iVar7 = 0xb;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x34);
    if (iVar7 != 0) {
      iVar7 = 0;
      uVar9 = 0;
      do {
        bVar5 = (byte)uVar9;
        uVar1 = *(uint *)(param_1 + 0x24) >> (bVar5 & 0x1f);
        if (*(uint *)(param_1 + 0x24) >> (bVar5 & 0x1f) == 0) {
          uVar1 = 1;
        }
        uVar2 = *(uint *)(param_1 + 0x28) >> (bVar5 & 0x1f);
        if (*(uint *)(param_1 + 0x28) >> (bVar5 & 0x1f) == 0) {
          uVar2 = 1;
        }
        uVar3 = *(uint *)(param_1 + 0x2c) >> (bVar5 & 0x1f);
        if (*(uint *)(param_1 + 0x2c) >> (bVar5 & 0x1f) == 0) {
          uVar3 = 1;
        }
        uVar4 = (**(code **)(*(long *)(param_1 + 0x18) + 8))(param_1,uVar9);
        if ((*(char *)(param_1 + 0x21) == '\0') || (*(char *)(param_1 + 0x20) != '\0')) {
          iVar8 = 1;
LAB_001008c8:
          iVar6 = 0;
          do {
            (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,uVar9,0,iVar6,&local_48);
            iVar7 = (*param_2)(uVar9,iVar6,uVar1,uVar2,uVar3,uVar4,
                               local_48 + *(long *)(param_1 + 0x70),param_3);
            if (iVar7 != 0) break;
            iVar6 = iVar6 + 1;
          } while (iVar8 != iVar6);
        }
        else {
          iVar8 = *(int *)(param_1 + 0x3c);
          if (iVar8 != 0) goto LAB_001008c8;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x34));
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



long ktxTexture_layerSize(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = 1;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x2c);
  uVar3 = (uVar1 - 1) + (*(uint *)(param_1 + 0x2c) >> ((byte)param_2 & 0x1f));
  if (uVar1 <= uVar3) {
    uVar4 = (ulong)uVar3 / (ulong)uVar1;
  }
  lVar2 = ktxTexture_calcImageSize(param_1,param_2,param_3);
  return lVar2 * uVar4 * (ulong)*(uint *)(param_1 + 0x3c);
}



long ktxTexture_calcLevelSize(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = 1;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x2c);
  uVar3 = (uVar1 - 1) + (*(uint *)(param_1 + 0x2c) >> ((byte)param_2 & 0x1f));
  if (uVar1 <= uVar3) {
    uVar4 = (ulong)uVar3 / (ulong)uVar1;
  }
  lVar2 = ktxTexture_calcImageSize(param_1,param_2,param_3);
  return (ulong)*(uint *)(param_1 + 0x38) * (ulong)*(uint *)(param_1 + 0x3c) * uVar4 * lVar2;
}



long ktxTexture_doCalcFaceLodSize(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  
  cVar5 = *(char *)(param_1 + 0x21);
  lVar3 = ktxTexture_calcImageSize();
  if ((cVar5 != '\0') && (*(char *)(param_1 + 0x20) == '\0')) {
    return lVar3;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + 0x2c);
  uVar1 = (uVar2 - 1) + (*(uint *)(param_1 + 0x2c) >> (param_2 & 0x1f));
  uVar4 = 1;
  if (uVar2 <= uVar1) {
    uVar4 = (ulong)uVar1 / (ulong)uVar2;
  }
  return (ulong)*(uint *)(param_1 + 0x38) * (ulong)*(uint *)(param_1 + 0x3c) * lVar3 * uVar4;
}



void ktxTexture_calcDataSizeTexture(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100abb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))(param_1,*(undefined4 *)(param_1 + 0x34));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ktxTexture_rowInfo(long param_1,byte param_2,uint *param_3,int *param_4,int *param_5)

{
  long lVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = _LC7;
  fVar8 = _LC5;
  fVar2 = _LC2;
  lVar1 = *(long *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x24) / *(uint *)(lVar1 + 0x24);
  uVar7 = uVar4 >> (param_2 & 0x1f);
  if (uVar4 >> (param_2 & 0x1f) == 0) {
    uVar7 = 1;
  }
  uVar4 = *(uint *)(param_1 + 0x28) / *(uint *)(lVar1 + 0x28);
  uVar5 = uVar4 >> (param_2 & 0x1f);
  if (uVar4 >> (param_2 & 0x1f) == 0) {
    uVar5 = 1;
  }
  *param_3 = uVar5;
  uVar7 = uVar7 * *(int *)(lVar1 + 0x20) >> 3;
  fVar9 = (float)uVar7;
  fVar8 = fVar8 * fVar9;
  if ((float)((uint)fVar8 & uVar3) < fVar2) {
    fVar8 = (float)((uint)((float)(int)fVar8 + (float)(-(uint)((float)(int)fVar8 < fVar8) & _LC4)) |
                   ~uVar3 & (uint)fVar8);
  }
  iVar6 = (int)(long)(fVar8 * __LC6 - fVar9);
  *param_4 = uVar7 + iVar6;
  *param_5 = iVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ktxTexture_GetRowPitch(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(uint *)(param_1 + 0x24) / *(uint *)(*(long *)(param_1 + 0x18) + 0x24);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  if (uVar1 >> (param_2 & 0x1f) == 0) {
    uVar2 = 1;
  }
  uVar1 = uVar2 * *(int *)(*(long *)(param_1 + 0x18) + 0x20) >> 3;
  fVar4 = (float)uVar1;
  fVar3 = _LC5 * fVar4;
  if ((float)((uint)fVar3 & _LC7) < _LC2) {
    fVar3 = (float)((uint)((float)(int)fVar3 + (float)(-(uint)((float)(int)fVar3 < fVar3) & _LC4)) |
                   ~_LC7 & (uint)fVar3);
  }
  return uVar1 + (int)(long)(fVar3 * __LC6 - fVar4);
}



undefined8 ktxTexture_isActiveStream(long param_1)

{
  return CONCAT71((int7)((ulong)*(long *)(param_1 + 0x18) >> 8),
                  *(long *)(*(long *)(param_1 + 0x18) + 0x80) != 0);
}


