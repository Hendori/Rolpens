
void * ocb_lookup_l(long param_1,ulong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  void *addr;
  byte bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  
  uVar5 = *(ulong *)(param_1 + 0x28);
  addr = *(void **)(param_1 + 0x58);
  if (param_2 <= uVar5) {
    return (void *)((long)addr + param_2 * 0x10);
  }
  uVar6 = *(ulong *)(param_1 + 0x30);
  if (uVar6 <= param_2) {
    lVar9 = ((param_2 + 4) - uVar6 & 0xfffffffffffffffc) + uVar6;
    *(long *)(param_1 + 0x30) = lVar9;
    addr = CRYPTO_realloc(addr,(int)lVar9 * 0x10,"crypto/modes/ocb128.c",0x71);
    if (addr == (void *)0x0) {
      return (void *)0x0;
    }
    *(void **)(param_1 + 0x58) = addr;
  }
  lVar10 = (param_2 + 1) * 0x10;
  lVar9 = (uVar5 + 1) * 0x10;
  do {
    pcVar2 = (char *)((long)addr + lVar9 + -0x10);
    lVar8 = 0xf;
    cVar3 = *pcVar2;
    bVar7 = 0;
    do {
      bVar4 = pcVar2[lVar8];
      *(byte *)((long)addr + lVar8 + lVar9) = bVar4 * '\x02' | bVar7;
      bVar11 = lVar8 != 0;
      lVar8 = lVar8 + -1;
      bVar7 = bVar4 >> 7;
    } while (bVar11);
    lVar8 = lVar9 + 0x10;
    pbVar1 = (byte *)((long)addr + lVar9 + 0xf);
    *pbVar1 = *pbVar1 ^ cVar3 >> 7 & 0x87U;
    addr = *(void **)(param_1 + 0x58);
    lVar9 = lVar8;
  } while (lVar10 != lVar8);
  *(ulong *)(param_1 + 0x28) = param_2;
  return (void *)((long)addr + lVar10 + -0x10);
}



undefined8
CRYPTO_ocb128_init(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  void *pvVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  bool bVar13;
  
  *param_1 = 0;
  param_1[0x15] = 0;
  puVar12 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar8 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xb0U >> 3)
      ; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  param_1[6] = 5;
  pvVar5 = CRYPTO_malloc(0x50,"crypto/modes/ocb128.c",0x9e);
  param_1[0xb] = pvVar5;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[4] = param_6;
    param_1[2] = param_2;
    param_1[3] = param_3;
    (*param_4)(param_1 + 7,param_1 + 7,param_2);
    cVar1 = *(char *)(param_1 + 7);
    bVar7 = 0;
    pbVar11 = (byte *)((long)param_1 + 0x47);
    do {
      pbVar9 = pbVar11 + -1;
      bVar4 = *pbVar11 * '\x02' | bVar7;
      bVar7 = *pbVar11 >> 7;
      pbVar11[0x10] = bVar4;
      pbVar11 = pbVar9;
    } while ((byte *)((long)param_1 + 0x37) != pbVar9);
    *(byte *)((long)param_1 + 0x57) = *(byte *)((long)param_1 + 0x57) ^ cVar1 >> 7 & 0x87U;
    cVar1 = *(char *)(param_1 + 9);
    lVar10 = 0xf;
    lVar3 = param_1[0xb];
    bVar7 = 0;
    do {
      bVar4 = *(byte *)((long)param_1 + lVar10 + 0x48);
      *(byte *)(lVar3 + lVar10) = bVar4 * '\x02' | bVar7;
      bVar13 = lVar10 != 0;
      lVar10 = lVar10 + -1;
      bVar7 = bVar4 >> 7;
    } while (bVar13);
    pbVar11 = (byte *)(lVar3 + 0xf);
    *pbVar11 = *pbVar11 ^ cVar1 >> 7 & 0x87U;
    pbVar11 = (byte *)param_1[0xb];
    bVar7 = *pbVar11;
    pbVar9 = pbVar11 + 0xf;
    bVar4 = 0;
    do {
      bVar2 = *pbVar9;
      pbVar9[0x10] = bVar2 * '\x02' | bVar4;
      bVar13 = pbVar11 != pbVar9;
      pbVar9 = pbVar9 + -1;
      bVar4 = bVar2 >> 7;
    } while (bVar13);
    pbVar11[0x1f] = pbVar11[0x1f] ^ (char)bVar7 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    bVar7 = 0;
    cVar1 = *(char *)(lVar3 + 0x10);
    pbVar11 = (byte *)(lVar3 + 0x1f);
    do {
      pbVar9 = pbVar11 + -1;
      bVar4 = *pbVar11 * '\x02' | bVar7;
      bVar7 = *pbVar11 >> 7;
      pbVar11[0x10] = bVar4;
      pbVar11 = pbVar9;
    } while ((byte *)(lVar3 + 0xf) != pbVar9);
    *(byte *)(lVar3 + 0x2f) = *(byte *)(lVar3 + 0x2f) ^ cVar1 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    bVar7 = 0;
    cVar1 = *(char *)(lVar3 + 0x20);
    pbVar11 = (byte *)(lVar3 + 0x2f);
    do {
      pbVar9 = pbVar11 + -1;
      bVar4 = *pbVar11 * '\x02' | bVar7;
      bVar7 = *pbVar11 >> 7;
      pbVar11[0x10] = bVar4;
      pbVar11 = pbVar9;
    } while ((byte *)(lVar3 + 0x1f) != pbVar9);
    *(byte *)(lVar3 + 0x3f) = *(byte *)(lVar3 + 0x3f) ^ cVar1 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    bVar7 = 0;
    cVar1 = *(char *)(lVar3 + 0x30);
    pbVar11 = (byte *)(lVar3 + 0x3f);
    do {
      pbVar9 = pbVar11 + -1;
      bVar4 = *pbVar11 * '\x02' | bVar7;
      bVar7 = *pbVar11 >> 7;
      pbVar11[0x10] = bVar4;
      pbVar11 = pbVar9;
    } while ((byte *)(lVar3 + 0x2f) != pbVar9);
    *(byte *)(lVar3 + 0x4f) = *(byte *)(lVar3 + 0x4f) ^ cVar1 >> 7 & 0x87U;
    uVar6 = 1;
    param_1[5] = 4;
  }
  return uVar6;
}



void * CRYPTO_ocb128_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5)

{
  int iVar1;
  void *ptr;
  
  ptr = CRYPTO_malloc(0xb0,"crypto/modes/ocb128.c",0x89);
  if (ptr != (void *)0x0) {
    iVar1 = CRYPTO_ocb128_init(ptr,param_1,param_2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



undefined8 CRYPTO_ocb128_copy_ctx(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  void *__dest;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  if (param_3 != 0) {
    param_1[2] = param_3;
  }
  if (param_4 != 0) {
    param_1[3] = param_4;
  }
  if (param_2[0xb] != 0) {
    __dest = CRYPTO_malloc((int)(param_2[6] << 4),"crypto/modes/ocb128.c",0xcb);
    param_1[0xb] = __dest;
    if (__dest == (void *)0x0) {
      return 0;
    }
    memcpy(__dest,(void *)param_2[0xb],(param_2[5] + 1) * 0x10);
  }
  return 1;
}



undefined8 CRYPTO_ocb128_setiv(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 local_58;
  ulong local_50;
  byte local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined6 uStack_3f;
  byte local_39 [17];
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0xffffffff;
  if ((param_3 - 1U < 0xf) && (param_4 - 1U < 0x10)) {
    *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x14) = (undefined1  [16])0x0;
    local_48 = (byte)((int)param_4 << 4);
    uStack_47 = 0;
    uStack_40 = 0;
    uStack_3f = 0;
    local_39[0] = 0;
    __memcpy_chk(local_39 + (1 - param_3),param_2,param_3,param_3);
    local_39[-param_3] = local_39[-param_3] | 1;
    local_58 = CONCAT71(uStack_47,local_48);
    local_50 = CONCAT17(local_39[0],CONCAT61(uStack_3f,uStack_40)) & 0xc0ffffffffffffff;
    (*(code *)*param_1)(&local_58,&local_68,param_1[2]);
    lVar3 = 0xf;
    bVar5 = 8 - (local_39[0] & 7);
    uVar6 = (ulong)((local_39[0] & 0x3f) >> 3);
    local_28 = CONCAT17(uStack_60,uStack_67) ^ CONCAT71(uStack_67,local_68);
    iVar4 = 0;
    do {
      bVar1 = local_39[lVar3 + uVar6 + 1];
      *(byte *)((long)param_1 + lVar3 + 0x90) = (byte)iVar4 | bVar1 << (local_39[0] & 7);
      bVar7 = lVar3 != 0;
      lVar3 = lVar3 + -1;
      iVar4 = (int)(uint)bVar1 >> (bVar5 & 0x1f);
    } while (bVar7);
    *(byte *)((long)param_1 + 0x9f) =
         *(byte *)((long)param_1 + 0x9f) |
         (byte)((int)(uint)((byte)(0xff << (bVar5 & 0x1f)) & *(byte *)((long)&local_28 + uVar6)) >>
               (bVar5 & 0x1f));
    uVar2 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 CRYPTO_ocb128_aad(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  long local_30;
  ulong uVar9;
  
  puVar10 = (undefined4 *)local_48;
  uVar1 = param_1[0xc];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (param_3 >> 4) + uVar1;
  do {
    uVar1 = uVar1 + 1;
    if (uVar12 < uVar1) {
      uVar14 = (uint)param_3 & 0xf;
      if ((param_3 & 0xf) != 0) {
        uVar2 = param_1[0xe];
        uVar3 = param_1[0xf];
        uVar1 = param_1[7];
        uVar5 = param_1[8];
        local_48 = (undefined1  [16])0x0;
        param_1[0xe] = uVar2 ^ uVar1;
        param_1[0xf] = uVar3 ^ uVar5;
        if (7 < uVar14) {
          uVar8 = 0;
          do {
            uVar4 = (int)uVar8 + 8;
            uVar9 = (ulong)uVar4;
            *(undefined8 *)(local_48 + uVar8) = *(undefined8 *)((long)param_2 + uVar8);
            uVar8 = uVar9;
          } while (uVar4 < ((uint)param_3 & 8));
          puVar10 = (undefined4 *)(local_48 + uVar9);
          param_2 = (ulong *)(uVar9 + (long)param_2);
        }
        lVar11 = 0;
        if ((param_3 & 4) != 0) {
          *puVar10 = (int)*param_2;
          lVar11 = 4;
        }
        if ((param_3 & 2) != 0) {
          *(undefined2 *)((long)puVar10 + lVar11) = *(undefined2 *)((long)param_2 + lVar11);
          lVar11 = lVar11 + 2;
        }
        if ((param_3 & 1) != 0) {
          *(undefined1 *)((long)puVar10 + lVar11) = *(undefined1 *)((long)param_2 + lVar11);
        }
        local_48[uVar14] = 0x80;
        local_48._8_8_ = uVar3 ^ uVar5 ^ local_48._8_8_;
        local_48._0_8_ = uVar2 ^ uVar1 ^ local_48._0_8_;
        (*(code *)*param_1)(local_48,local_48,param_1[2]);
        param_1[0x10] = param_1[0x10] ^ local_48._0_8_;
        param_1[0x11] = param_1[0x11] ^ local_48._8_8_;
      }
      param_1[0xc] = uVar12;
      uVar7 = 1;
LAB_001006fb:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar7;
    }
    iVar13 = 0;
    uVar5 = uVar1;
    if ((uVar1 & 1) == 0) {
      do {
        uVar5 = uVar5 >> 1;
        iVar13 = iVar13 + 1;
      } while ((uVar5 & 1) == 0);
      puVar6 = (ulong *)ocb_lookup_l(param_1,iVar13);
    }
    else {
      puVar6 = (ulong *)ocb_lookup_l(param_1,0);
    }
    if (puVar6 == (ulong *)0x0) {
      uVar7 = 0;
      goto LAB_001006fb;
    }
    uVar3 = *puVar6;
    uVar8 = puVar6[1];
    uVar5 = param_1[0xe];
    uVar2 = param_1[0xf];
    param_1[0xe] = uVar3 ^ uVar5;
    param_1[0xf] = uVar8 ^ uVar2;
    local_48._8_8_ = uVar8 ^ uVar2 ^ param_2[1];
    local_48._0_8_ = uVar3 ^ uVar5 ^ *param_2;
    (*(code *)*param_1)(local_48,local_48,param_1[2]);
    param_1[0x10] = param_1[0x10] ^ local_48._0_8_;
    param_1[0x11] = param_1[0x11] ^ local_48._8_8_;
    param_2 = param_2 + 2;
  } while( true );
}



undefined8 CRYPTO_ocb128_encrypt(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined4 *puVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  uVar13 = param_1[0xd];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = uVar13 + (param_4 >> 4);
  if ((param_4 < 0x10) || (param_1[4] == 0)) {
    while (uVar13 = uVar13 + 1, uVar13 <= uVar1) {
      iVar12 = 0;
      uVar9 = uVar13;
      if ((uVar13 & 1) == 0) {
        do {
          uVar9 = uVar9 >> 1;
          iVar12 = iVar12 + 1;
        } while ((uVar9 & 1) == 0);
        puVar10 = (ulong *)ocb_lookup_l(param_1,iVar12);
      }
      else {
        puVar10 = (ulong *)ocb_lookup_l(param_1,0);
      }
      if (puVar10 == (ulong *)0x0) goto LAB_0010099b;
      uVar4 = *puVar10;
      uVar5 = puVar10[1];
      uVar9 = param_1[0x12];
      uVar2 = param_1[0x13];
      param_1[0x12] = uVar4 ^ uVar9;
      param_1[0x13] = uVar5 ^ uVar2;
      uVar3 = param_2[1];
      local_58._8_8_ = uVar3 ^ uVar5 ^ uVar2;
      local_58._0_8_ = *param_2 ^ uVar4 ^ uVar9;
      param_1[0x14] = param_1[0x14] ^ *param_2;
      param_1[0x15] = param_1[0x15] ^ uVar3;
      (*(code *)*param_1)(local_58,local_58,param_1[2]);
      uVar9 = param_1[0x13];
      *param_3 = param_1[0x12] ^ local_58._0_8_;
      param_3[1] = uVar9 ^ local_58._8_8_;
      param_2 = param_2 + 2;
      param_3 = param_3 + 2;
    }
  }
  else {
    uVar13 = uVar1 >> 1;
    if (uVar13 != 0) {
      lVar7 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar13 = (ulong)((int)lVar7 + 1);
    }
    lVar7 = ocb_lookup_l(param_1,uVar13);
    if (lVar7 == 0) {
LAB_0010099b:
      uVar8 = 0;
      goto LAB_001008bd;
    }
    (*(code *)param_1[4])
              (param_2,param_3,param_4 >> 4,param_1[2],param_1[0xd] + 1,param_1 + 0x12,param_1[0xb],
               param_1 + 0x14);
  }
  uVar14 = (uint)param_4 & 0xf;
  if ((param_4 & 0xf) != 0) {
    puVar11 = (undefined4 *)local_58;
    param_1[0x12] = param_1[0x12] ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(param_1 + 0x12,puVar11,param_1[2]);
    uVar13 = 0;
    do {
      *(byte *)((long)param_3 + uVar13) =
           *(byte *)((long)param_2 + uVar13) ^ *(byte *)((long)puVar11 + uVar13);
      uVar13 = uVar13 + 1;
    } while (uVar14 != uVar13);
    local_58 = (undefined1  [16])0x0;
    if (7 < uVar14) {
      uVar13 = 0;
      do {
        uVar6 = (int)uVar13 + 8;
        uVar9 = (ulong)uVar6;
        *(undefined8 *)((long)puVar11 + uVar13) = *(undefined8 *)((long)param_2 + uVar13);
        uVar13 = uVar9;
      } while (uVar6 < ((uint)param_4 & 8));
      puVar11 = (undefined4 *)((long)puVar11 + uVar9);
      param_2 = (ulong *)(uVar9 + (long)param_2);
    }
    lVar7 = 0;
    if ((param_4 & 4) != 0) {
      *puVar11 = (int)*param_2;
      lVar7 = 4;
    }
    if ((param_4 & 2) != 0) {
      *(undefined2 *)((long)puVar11 + lVar7) = *(undefined2 *)((long)param_2 + lVar7);
      lVar7 = lVar7 + 2;
    }
    if ((param_4 & 1) != 0) {
      *(undefined1 *)((long)puVar11 + lVar7) = *(undefined1 *)((long)param_2 + lVar7);
    }
    uVar13 = param_1[0x14];
    uVar9 = param_1[0x15];
    local_58[uVar14] = 0x80;
    param_1[0x14] = uVar13 ^ local_58._0_8_;
    param_1[0x15] = uVar9 ^ local_58._8_8_;
  }
  param_1[0xd] = uVar1;
  uVar8 = 1;
LAB_001008bd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



undefined8 CRYPTO_ocb128_decrypt(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  uVar13 = param_1[0xd];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = uVar13 + (param_4 >> 4);
  if ((param_4 < 0x10) || (param_1[4] == 0)) {
    while (uVar13 = uVar13 + 1, uVar13 <= uVar1) {
      iVar12 = 0;
      uVar8 = uVar13;
      if ((uVar13 & 1) == 0) {
        do {
          uVar8 = uVar8 >> 1;
          iVar12 = iVar12 + 1;
        } while ((uVar8 & 1) == 0);
        puVar9 = (ulong *)ocb_lookup_l(param_1,iVar12);
      }
      else {
        puVar9 = (ulong *)ocb_lookup_l(param_1,0);
      }
      if (puVar9 == (ulong *)0x0) goto LAB_00100c33;
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      uVar8 = param_1[0x12];
      uVar2 = param_1[0x13];
      param_1[0x12] = uVar3 ^ uVar8;
      param_1[0x13] = uVar4 ^ uVar2;
      local_58._0_8_ = uVar3 ^ uVar8 ^ *param_2;
      local_58._8_8_ = uVar4 ^ uVar2 ^ param_2[1];
      (*(code *)param_1[1])(local_58,local_58,param_1[3]);
      local_58._0_8_ = param_1[0x12] ^ local_58._0_8_;
      local_58._8_8_ = param_1[0x13] ^ local_58._8_8_;
      param_1[0x14] = param_1[0x14] ^ local_58._0_8_;
      param_1[0x15] = param_1[0x15] ^ local_58._8_8_;
      *param_3 = local_58._0_8_;
      param_3[1] = local_58._8_8_;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
  }
  else {
    uVar13 = uVar1 >> 1;
    if (uVar13 != 0) {
      lVar6 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar13 = (ulong)((int)lVar6 + 1);
    }
    lVar6 = ocb_lookup_l(param_1,uVar13);
    if (lVar6 == 0) {
LAB_00100c33:
      uVar7 = 0;
      goto LAB_00100b4c;
    }
    (*(code *)param_1[4])
              (param_2,param_3,param_4 >> 4,param_1[3],param_1[0xd] + 1,param_1 + 0x12,param_1[0xb],
               param_1 + 0x14);
  }
  uVar11 = (uint)param_4 & 0xf;
  if ((param_4 & 0xf) != 0) {
    puVar10 = (undefined4 *)local_58;
    param_1[0x12] = param_1[0x12] ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(param_1 + 0x12,puVar10,param_1[2]);
    uVar13 = 0;
    do {
      *(byte *)((long)param_3 + uVar13) =
           *(byte *)((long)param_2 + uVar13) ^ *(byte *)((long)puVar10 + uVar13);
      uVar13 = uVar13 + 1;
    } while (uVar11 != uVar13);
    local_58 = (undefined1  [16])0x0;
    if (7 < uVar11) {
      uVar13 = 0;
      do {
        uVar5 = (int)uVar13 + 8;
        uVar8 = (ulong)uVar5;
        *(undefined8 *)((long)puVar10 + uVar13) = *(undefined8 *)((long)param_3 + uVar13);
        uVar13 = uVar8;
      } while (uVar5 < ((uint)param_4 & 8));
      puVar10 = (undefined4 *)((long)puVar10 + uVar8);
      param_3 = (ulong *)(uVar8 + (long)param_3);
    }
    lVar6 = 0;
    if ((param_4 & 4) != 0) {
      *puVar10 = (int)*param_3;
      lVar6 = 4;
    }
    if ((param_4 & 2) != 0) {
      *(undefined2 *)((long)puVar10 + lVar6) = *(undefined2 *)((long)param_3 + lVar6);
      lVar6 = lVar6 + 2;
    }
    if ((param_4 & 1) != 0) {
      *(undefined1 *)((long)puVar10 + lVar6) = *(undefined1 *)((long)param_3 + lVar6);
    }
    uVar13 = param_1[0x14];
    uVar8 = param_1[0x15];
    local_58[uVar11] = 0x80;
    param_1[0x14] = uVar13 ^ local_58._0_8_;
    param_1[0x15] = uVar8 ^ local_58._8_8_;
  }
  param_1[0xd] = uVar1;
  uVar7 = 1;
LAB_00100b4c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



int CRYPTO_ocb128_finish(undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 - 1 < 0x10) {
    local_48 = param_1[0x14] ^ param_1[0x12] ^ param_1[9];
    uStack_40 = param_1[0x15] ^ param_1[0x13] ^ param_1[10];
    (*(code *)*param_1)(&local_48,&local_48,param_1[2]);
    local_48 = param_1[0x10] ^ local_48;
    uStack_40 = param_1[0x11] ^ uStack_40;
    iVar1 = CRYPTO_memcmp(&local_48,param_2,param_3);
  }
  else {
    iVar1 = -1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 CRYPTO_ocb128_tag(undefined8 *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 - 1 < 0x10) {
    local_48 = param_1[0x12] ^ param_1[0x14] ^ param_1[9];
    uStack_40 = param_1[0x13] ^ param_1[0x15] ^ param_1[10];
    (*(code *)*param_1)(&local_48,&local_48,param_1[2]);
    local_48 = param_1[0x10] ^ local_48;
    uStack_40 = param_1[0x11] ^ uStack_40;
    memcpy(param_2,&local_48,param_3);
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void CRYPTO_ocb128_cleanup(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x58),*(long *)((long)param_1 + 0x30) << 4,
                      "crypto/modes/ocb128.c",0x229);
    OPENSSL_cleanse(param_1,0xb0);
    return;
  }
  return;
}


