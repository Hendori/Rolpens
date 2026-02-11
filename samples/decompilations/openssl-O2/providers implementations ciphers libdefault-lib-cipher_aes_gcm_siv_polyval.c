
void ossl_polyval_ghash_init(undefined8 param_1,ulong *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  ulong local_28;
  ulong local_20;
  undefined1 local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ulong)param_2 & 7) == 0) {
    uVar2 = param_2[1];
    uVar3 = *param_2;
    local_28 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
               | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
               (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    local_20 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18
               | (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 |
               (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  }
  else {
    puVar6 = (undefined1 *)((long)param_2 + 0xf);
    puVar4 = &local_28;
    do {
      uVar1 = *puVar6;
      puVar5 = (undefined1 *)((long)puVar4 + 1);
      puVar6 = puVar6 + -1;
      *(undefined1 *)puVar4 = uVar1;
      puVar4 = (ulong *)puVar5;
    } while (puVar5 != local_18);
  }
  uVar2 = local_28 >> 0x38;
  local_28 = (ulong)((uint)((long)(local_20 << 7) >> 0x3f) & 0xe1) << 0x38 ^
             (uVar2 | (local_28 & 0xff000000000000) >> 0x28 | (local_28 & 0xff0000000000) >> 0x18 |
              (local_28 & 0xff00000000) >> 8 | (local_28 & 0xff000000) << 8 |
              (local_28 & 0xff0000) << 0x18 | (local_28 & 0xff00) << 0x28 | local_28 << 0x38) >> 1;
  local_20 = uVar2 << 0x3f |
             (local_20 >> 0x38 | (local_20 & 0xff000000000000) >> 0x28 |
              (local_20 & 0xff0000000000) >> 0x18 | (local_20 & 0xff00000000) >> 8 |
              (local_20 & 0xff000000) << 8 | (local_20 & 0xff0000) << 0x18 |
              (local_20 & 0xff00) << 0x28 | local_20 << 0x38) >> 1;
  ossl_gcm_init_4bit(param_1,&local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ossl_polyval_ghash_hash(undefined8 param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  ulong local_68;
  undefined1 local_60 [8];
  ulong local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ulong)param_2 & 7) == 0) {
    uVar6 = param_2[1];
    uVar2 = *param_2;
    local_68 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18
               | (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 |
               (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
    local_60 = (undefined1  [8])
               (uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
               uVar2 << 0x38);
    if (param_4 != 0) {
LAB_00100132:
      uVar6 = 0;
      do {
        if (((ulong)param_3 & 7) == 0) {
          uVar2 = param_3[1];
          local_58 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                     (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                     (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                     (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
          uVar2 = *param_3;
          local_50 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                     (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                     (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                     (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
        }
        else {
          puVar5 = (undefined1 *)((long)param_3 + 0xf);
          puVar3 = &local_58;
          do {
            uVar1 = *puVar5;
            puVar4 = (ulong *)((long)puVar3 + 1);
            puVar5 = puVar5 + -1;
            *(undefined1 *)puVar3 = uVar1;
            puVar3 = puVar4;
          } while (&local_48 != puVar4);
        }
        uVar6 = uVar6 + 0x10;
        param_3 = param_3 + 2;
        ossl_gcm_ghash_4bit(&local_68,param_1,&local_58,0x10);
      } while (uVar6 < param_4);
      if (((ulong)param_2 & 7) != 0) goto LAB_0010021e;
    }
    *param_2 = (ulong)local_60 >> 0x38 | ((ulong)local_60 & 0xff000000000000) >> 0x28 |
               ((ulong)local_60 & 0xff0000000000) >> 0x18 | ((ulong)local_60 & 0xff00000000) >> 8 |
               ((ulong)local_60 & 0xff000000) << 8 | ((ulong)local_60 & 0xff0000) << 0x18 |
               ((ulong)local_60 & 0xff00) << 0x28 | (long)local_60 << 0x38;
    param_2[1] = local_68 >> 0x38 | (local_68 & 0xff000000000000) >> 0x28 |
                 (local_68 & 0xff0000000000) >> 0x18 | (local_68 & 0xff00000000) >> 8 |
                 (local_68 & 0xff000000) << 8 | (local_68 & 0xff0000) << 0x18 |
                 (local_68 & 0xff00) << 0x28 | local_68 << 0x38;
  }
  else {
    puVar5 = (undefined1 *)((long)param_2 + 0xf);
    puVar3 = &local_68;
    do {
      uVar1 = *puVar5;
      puVar4 = (ulong *)((long)puVar3 + 1);
      puVar5 = puVar5 + -1;
      *(undefined1 *)puVar3 = uVar1;
      puVar3 = puVar4;
    } while (puVar4 != &local_58);
    if (param_4 != 0) goto LAB_00100132;
LAB_0010021e:
    puVar3 = (ulong *)(local_60 + 7);
    do {
      *(char *)param_2 = (char)*puVar3;
      bVar7 = puVar3 != &local_68;
      puVar3 = (ulong *)((long)puVar3 + -1);
      param_2 = (ulong *)((long)param_2 + 1);
    } while (bVar7);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


