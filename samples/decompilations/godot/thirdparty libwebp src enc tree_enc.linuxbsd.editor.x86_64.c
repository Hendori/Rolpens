
void VP8DefaultProbas(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 0xe22) = 0xff;
  *(undefined2 *)(param_1 + 0xe20) = 0xffff;
  *(undefined8 *)(param_1 + 0xe24) = VP8CoeffsProba0;
  *(undefined8 *)(param_1 + 0x123c) = DAT_00101138;
  puVar4 = (undefined8 *)(param_1 + 0xe2cU & 0xfffffffffffffff8);
  lVar1 = (param_1 + 0xe24) - (long)puVar4;
  puVar3 = (undefined8 *)((long)&VP8CoeffsProba0 - lVar1);
  for (uVar2 = (ulong)((int)lVar1 + 0x420U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_1 + 0x5bc8) = 1;
  return;
}



void VP8CodeIntraModes(long param_1)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long in_FS_OFFSET;
  int local_f54;
  undefined1 local_f48 [48];
  byte *local_f18;
  byte *local_f08;
  long local_40;
  
  lVar1 = param_1 + 0x40;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  VP8IteratorInit();
  do {
    while( true ) {
      pbVar7 = local_f08;
      pbVar2 = local_f18;
      if (*(int *)(param_1 + 0x24) != 0) {
        bVar6 = *local_f18;
        iVar3 = VP8PutBit(lVar1,1 < (bVar6 >> 5 & 3),*(undefined1 *)(param_1 + 0xe20));
        VP8PutBit(lVar1,bVar6 >> 5 & 1,*(undefined1 *)((param_1 - (ulong)(iVar3 == 0)) + 0xe22));
      }
      if (*(int *)(param_1 + 0x5bcc) != 0) {
        VP8PutBit(lVar1,*pbVar2 >> 4 & 1,*(undefined1 *)(param_1 + 0xe23));
      }
      iVar3 = VP8PutBit(lVar1,(*pbVar2 & 3) != 0,0x91);
      if (iVar3 == 0) {
        local_f54 = 4;
        lVar4 = (long)*(int *)(param_1 + 0x38);
        lVar8 = (long)pbVar7 - lVar4;
        do {
          uVar9 = (uint)pbVar7[-1];
          lVar10 = 0;
          do {
            lVar5 = (long)(int)uVar9;
            uVar9 = (uint)pbVar7[lVar10];
            lVar5 = (ulong)*(byte *)(lVar8 + lVar10) * 0x5a + lVar5 * 9;
            iVar3 = VP8PutBit(lVar1,pbVar7[lVar10] != 0,kBModesProba[lVar5]);
            if (((iVar3 != 0) &&
                (iVar3 = VP8PutBit(lVar1,uVar9 != 1,kBModesProba[lVar5 + 1]), iVar3 != 0)) &&
               (iVar3 = VP8PutBit(lVar1,uVar9 != 2,kBModesProba[lVar5 + 2]), iVar3 != 0)) {
              iVar3 = VP8PutBit(lVar1,5 < uVar9,kBModesProba[lVar5 + 3]);
              if (iVar3 == 0) {
                iVar3 = VP8PutBit(lVar1,uVar9 != 3,kBModesProba[lVar5 + 4]);
                if (iVar3 != 0) {
                  VP8PutBit(lVar1,uVar9 != 4,kBModesProba[lVar5 + 5]);
                }
              }
              else {
                iVar3 = VP8PutBit(lVar1,uVar9 != 6,kBModesProba[lVar5 + 6]);
                if ((iVar3 != 0) &&
                   (iVar3 = VP8PutBit(lVar1,uVar9 != 7,kBModesProba[lVar5 + 7]), iVar3 != 0)) {
                  VP8PutBit(lVar1,uVar9 != 8,kBModesProba[lVar5 + 8]);
                }
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 != 4);
          pbVar7 = pbVar7 + lVar4;
          lVar8 = lVar8 + lVar4;
          local_f54 = local_f54 + -1;
        } while (local_f54 != 0);
      }
      else {
        bVar6 = *pbVar7;
        iVar3 = VP8PutBit(lVar1,(bVar6 & 0xfd) == 1,0x9c);
        if (iVar3 == 0) {
          VP8PutBit(lVar1,bVar6 == 2,0xa3);
        }
        else {
          VP8PutBit(lVar1,bVar6 == 1,0x80);
        }
      }
      bVar6 = *pbVar2 >> 2 & 3;
      iVar3 = VP8PutBit(lVar1,(*pbVar2 >> 2 & 3) != 0,0x8e);
      if ((iVar3 != 0) && (iVar3 = VP8PutBit(lVar1,bVar6 != 2,0x72), iVar3 != 0)) break;
      iVar3 = VP8IteratorNext(local_f48);
      if (iVar3 == 0) goto LAB_00100370;
    }
    VP8PutBit(lVar1,bVar6 != 3,0xb7);
    iVar3 = VP8IteratorNext(local_f48);
  } while (iVar3 != 0);
LAB_00100370:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void VP8WriteProbas(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long local_58;
  int local_4c;
  long local_40;
  
  local_40 = 0;
  do {
    local_58 = 0;
    do {
      local_4c = 3;
      lVar4 = local_40 + 0xb + local_58;
      do {
        lVar2 = lVar4 + -0xb;
        do {
          while( true ) {
            lVar5 = lVar2;
            cVar1 = *(char *)(param_2 + 4 + lVar5);
            iVar3 = VP8PutBit(param_1,*(char *)((long)&VP8CoeffsProba0 + lVar5) != cVar1,
                              VP8CoeffsUpdateProba[lVar5]);
            if (iVar3 == 0) break;
            VP8PutBits(param_1,cVar1,8);
            lVar2 = lVar5 + 1;
            if (lVar5 + 1 == lVar4) goto LAB_001004cb;
          }
          lVar2 = lVar5 + 1;
        } while (lVar5 + 1 != lVar4);
LAB_001004cb:
        local_4c = local_4c + -1;
        lVar4 = lVar5 + 0xc;
      } while (local_4c != 0);
      local_58 = local_58 + 0x21;
    } while (local_58 != 0x108);
    local_40 = local_40 + 0x108;
    if (local_40 == 0x420) {
      iVar3 = VP8PutBitUniform(param_1,*(undefined4 *)(param_2 + 0x4dac));
      if (iVar3 == 0) {
        return;
      }
      VP8PutBits(param_1,*(undefined1 *)(param_2 + 3),8);
      return;
    }
  } while( true );
}


