
void ossl_polyval_ghash_init(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_28;
  ulong local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ulong)param_2 & 7) == 0) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar3 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
            (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    uVar2 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
            (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
            (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  }
  else {
    uVar3 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)param_2[1],
                                                                           *(undefined1 *)
                                                                            ((long)param_2 + 9)),
                                                                  *(undefined1 *)
                                                                   ((long)param_2 + 10)),
                                                         *(undefined1 *)((long)param_2 + 0xb)),
                                                *(undefined1 *)((long)param_2 + 0xc)),
                                       *(undefined1 *)((long)param_2 + 0xd)),
                              *(undefined1 *)((long)param_2 + 0xe)),
                     *(undefined1 *)((long)param_2 + 0xf));
    uVar2 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)*param_2,
                                                                           *(undefined1 *)
                                                                            ((long)param_2 + 1)),
                                                                  *(undefined1 *)((long)param_2 + 2)
                                                                 ),
                                                         *(undefined1 *)((long)param_2 + 3)),
                                                *(undefined1 *)((long)param_2 + 4)),
                                       *(undefined1 *)((long)param_2 + 5)),
                              *(undefined1 *)((long)param_2 + 6)),*(undefined1 *)((long)param_2 + 7)
                    );
  }
  local_28 = (ulong)((uint)((long)(uVar2 << 7) >> 0x3f) & 0xe1) << 0x38 ^
             (uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18
              | (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18
              | (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38) >> 1;
  local_20 = (uVar3 >> 0x38) << 0x3f |
             (uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
              | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18
              | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) >> 1;
  ossl_gcm_init_4bit(param_1,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_polyval_ghash_hash(undefined8 param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  ulong uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ulong)param_2 & 7) == 0) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    local_68 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
               | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
               (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    uStack_60 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 |
                uVar1 << 0x38;
    if (param_4 != 0) {
LAB_001001ad:
      uVar2 = 0;
      do {
        if (((ulong)param_3 & 7) == 0) {
          uVar1 = param_3[1];
          local_58 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                     (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                     (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
                     (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
          uVar1 = *param_3;
          uStack_50 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                      (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                      (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
                      (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
        }
        else {
          local_58 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)param_3[1]
                                                                                    ,*(undefined1 *)
                                                                                      ((long)param_3
                                                                                      + 9)),
                                                                           *(undefined1 *)
                                                                            ((long)param_3 + 10)),
                                                                  *(undefined1 *)
                                                                   ((long)param_3 + 0xb)),
                                                         *(undefined1 *)((long)param_3 + 0xc)),
                                                *(undefined1 *)((long)param_3 + 0xd)),
                                       *(undefined1 *)((long)param_3 + 0xe)),
                              *(undefined1 *)((long)param_3 + 0xf));
          uStack_50 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)*param_3,
                                                                                     *(undefined1 *)
                                                                                      ((long)param_3
                                                                                      + 1)),
                                                                            *(undefined1 *)
                                                                             ((long)param_3 + 2)),
                                                                   *(undefined1 *)
                                                                    ((long)param_3 + 3)),
                                                          *(undefined1 *)((long)param_3 + 4)),
                                                 *(undefined1 *)((long)param_3 + 5)),
                                        *(undefined1 *)((long)param_3 + 6)),
                               *(undefined1 *)((long)param_3 + 7));
        }
        uVar2 = uVar2 + 0x10;
        param_3 = param_3 + 2;
        ossl_gcm_ghash_4bit(&local_68,param_1,&local_58,0x10);
      } while (uVar2 < param_4);
      if (((ulong)param_2 & 7) != 0) goto LAB_001003d9;
    }
    *param_2 = uStack_60 >> 0x38 | (uStack_60 & 0xff000000000000) >> 0x28 |
               (uStack_60 & 0xff0000000000) >> 0x18 | (uStack_60 & 0xff00000000) >> 8 |
               (uStack_60 & 0xff000000) << 8 | (uStack_60 & 0xff0000) << 0x18 |
               (uStack_60 & 0xff00) << 0x28 | uStack_60 << 0x38;
    param_2[1] = local_68 >> 0x38 | (local_68 & 0xff000000000000) >> 0x28 |
                 (local_68 & 0xff0000000000) >> 0x18 | (local_68 & 0xff00000000) >> 8 |
                 (local_68 & 0xff000000) << 8 | (local_68 & 0xff0000) << 0x18 |
                 (local_68 & 0xff00) << 0x28 | local_68 << 0x38;
  }
  else {
    local_68 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)param_2[1],
                                                                              *(undefined1 *)
                                                                               ((long)param_2 + 9)),
                                                                     *(undefined1 *)
                                                                      ((long)param_2 + 10)),
                                                            *(undefined1 *)((long)param_2 + 0xb)),
                                                   *(undefined1 *)((long)param_2 + 0xc)),
                                          *(undefined1 *)((long)param_2 + 0xd)),
                                 *(undefined1 *)((long)param_2 + 0xe)),
                        *(undefined1 *)((long)param_2 + 0xf));
    uStack_60 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)*param_2,
                                                                               *(undefined1 *)
                                                                                ((long)param_2 + 1))
                                                                      ,*(undefined1 *)
                                                                        ((long)param_2 + 2)),
                                                             *(undefined1 *)((long)param_2 + 3)),
                                                    *(undefined1 *)((long)param_2 + 4)),
                                           *(undefined1 *)((long)param_2 + 5)),
                                  *(undefined1 *)((long)param_2 + 6)),
                         *(undefined1 *)((long)param_2 + 7));
    if (param_4 != 0) goto LAB_001001ad;
LAB_001003d9:
    *param_2 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((undefined1)uStack_60,
                                                                              uStack_60._1_1_),
                                                                     uStack_60._2_1_),
                                                            uStack_60._3_1_),uStack_60._4_1_),
                                          uStack_60._5_1_),uStack_60._6_1_),uStack_60._7_1_);
    param_2[1] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((undefined1)local_68
                                                                                ,local_68._1_1_),
                                                                       local_68._2_1_),
                                                              local_68._3_1_),local_68._4_1_),
                                            local_68._5_1_),local_68._6_1_),local_68._7_1_);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


