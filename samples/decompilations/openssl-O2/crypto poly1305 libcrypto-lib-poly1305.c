
undefined8 Poly1305_ctx_size(void)

{
  return 0xf8;
}



void Poly1305_Init(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x1c);
  iVar2 = poly1305_init(param_1,param_2,param_1 + 0xe8);
  puVar1 = PTR_poly1305_emit_00102008;
  if (iVar2 == 0) {
    *(undefined **)(param_1 + 0xe8) = _GLOBAL_OFFSET_TABLE_;
    *(undefined **)(param_1 + 0xf0) = puVar1;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



void Poly1305_Update(long param_1,undefined8 *param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  pcVar1 = *(code **)(param_1 + 0xe8);
  puVar8 = param_2;
  if (lVar2 != 0) {
    uVar7 = 0x10 - lVar2;
    if (param_3 < uVar7) {
      uVar7 = lVar2 + param_3;
      memcpy((void *)(param_1 + 0xd0 + lVar2),param_2,param_3);
      goto LAB_001000fa;
    }
    param_3 = lVar2 + -0x10 + param_3;
    puVar8 = (undefined8 *)((long)param_2 + uVar7);
    memcpy((void *)(param_1 + 0xd0 + lVar2),param_2,uVar7);
    (*pcVar1)(param_1,param_1 + 0xd0,0x10,1);
  }
  uVar4 = param_3 & 0xfffffffffffffff0;
  uVar5 = (uint)param_3 & 0xf;
  uVar7 = (ulong)uVar5;
  if (0xf < uVar4) {
    (*pcVar1)(param_1,puVar8,uVar4,1);
    puVar8 = (undefined8 *)((long)puVar8 + uVar4);
  }
  if (uVar7 != 0) {
    if (uVar5 < 8) {
      if ((param_3 & 4) == 0) {
        if (((param_3 & 0xf) != 0) &&
           (*(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)puVar8, (param_3 & 2) != 0)) {
          *(undefined2 *)(param_1 + 0xce + uVar7) = *(undefined2 *)((long)puVar8 + (uVar7 - 2));
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)puVar8;
        *(undefined4 *)(param_1 + 0xcc + uVar7) = *(undefined4 *)((long)puVar8 + (uVar7 - 4));
      }
    }
    else {
      uVar4 = param_1 + 0xd8U & 0xfffffffffffffff8;
      *(undefined8 *)(param_1 + 0xd0) = *puVar8;
      *(undefined8 *)(param_1 + 200 + uVar7) = *(undefined8 *)((long)puVar8 + (uVar7 - 8));
      lVar2 = (param_1 + 0xd0) - uVar4;
      uVar5 = (int)lVar2 + uVar5 & 0xfffffff8;
      if (7 < uVar5) {
        uVar3 = 0;
        do {
          uVar6 = (ulong)uVar3;
          uVar3 = uVar3 + 8;
          *(undefined8 *)(uVar4 + uVar6) = *(undefined8 *)((long)puVar8 + (uVar6 - lVar2));
        } while (uVar3 < uVar5);
      }
    }
  }
LAB_001000fa:
  *(ulong *)(param_1 + 0xe0) = uVar7;
  return;
}



void Poly1305_Final(void *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar2 = *(long *)((long)param_1 + 0xe0);
  pcVar3 = *(code **)((long)param_1 + 0xf0);
  if (lVar2 != 0) {
    pcVar4 = *(code **)((long)param_1 + 0xe8);
    *(undefined1 *)((long)param_1 + lVar2 + 0xd0) = 1;
    if (lVar2 + 1U < 0x10) {
      uVar6 = 0xf - lVar2;
      puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0xd1);
      uVar5 = (uint)uVar6;
      if (uVar5 < 8) {
        if ((uVar6 & 4) == 0) {
          if ((uVar5 != 0) && (*(undefined1 *)puVar1 = 0, (uVar6 & 2) != 0)) {
            *(undefined2 *)((long)puVar1 + ((uVar6 & 0xffffffff) - 2)) = 0;
          }
        }
        else {
          *(undefined4 *)puVar1 = 0;
          *(undefined4 *)((long)puVar1 + ((uVar6 & 0xffffffff) - 4)) = 0;
        }
      }
      else {
        *puVar1 = 0;
        *(undefined8 *)((long)puVar1 + ((uVar6 & 0xffffffff) - 8)) = 0;
        uVar5 = uVar5 + ((int)puVar1 - (int)((ulong)(puVar1 + 1) & 0xfffffffffffffff8)) & 0xfffffff8
        ;
        if (7 < uVar5) {
          uVar7 = 0;
          do {
            uVar6 = (ulong)uVar7;
            uVar7 = uVar7 + 8;
            *(undefined8 *)(((ulong)(puVar1 + 1) & 0xfffffffffffffff8) + uVar6) = 0;
          } while (uVar7 < uVar5);
        }
      }
    }
    (*pcVar4)(param_1,(long)param_1 + 0xd0,0x10,0);
  }
  (*pcVar3)(param_1,param_2,(long)param_1 + 0xc0);
  OPENSSL_cleanse(param_1,0xf8);
  return;
}


