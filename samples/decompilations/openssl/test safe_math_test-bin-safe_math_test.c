
/* WARNING: Removing unreachable block (ram,0x0010053a) */
/* WARNING: Removing unreachable block (ram,0x00100558) */

undefined1  [16] test_size_t_ops(int param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  ulong uStack_60;
  ulong uVar13;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar14;
  ulong local_40;
  
  uVar14 = (undefined4)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar11 = (long)param_1;
  lVar1 = lVar11 * 0x28;
  uVar2 = *(ulong *)(test_size_ts + lVar1);
  uVar3 = *(ulong *)(test_size_ts + lVar1 + 8);
  local_40 = uVar2 + uVar3;
  if (!CARRY8(uVar2,uVar3)) {
    uStack_60 = 0x100354;
    uVar9 = local_40;
    iVar6 = test_int_eq("test/safe_math_test.c",0xea,&_LC1,"test_size_ts[n].sum_err",0,
                        *(undefined4 *)(test_size_ts + lVar1 + 0x10));
    if (iVar6 != 0) {
      uStack_60 = 0x10037b;
      iVar6 = test_size_t_eq("test/safe_math_test.c",0xeb,&_LC5,"a + b");
      if (iVar6 != 0) goto LAB_00100074;
    }
    goto LAB_00100383;
  }
  uStack_60 = 0x10006c;
  iVar6 = test_int_eq("test/safe_math_test.c",0xea,&_LC1,"test_size_ts[n].sum_err",1,
                      *(undefined4 *)(test_size_ts + lVar1 + 0x10));
  uVar9 = local_40;
  if (iVar6 == 0) {
    uVar10 = 1;
  }
  else {
LAB_00100074:
    local_40 = uVar2 - uVar3;
    uVar10 = CONCAT44(uVar14,(uint)(uVar2 < uVar3));
    uStack_60 = 0x1000ad;
    iVar6 = test_int_eq("test/safe_math_test.c",0xf0,&_LC1,"test_size_ts[n].sub_err",uVar2 < uVar3,
                        *(undefined4 *)(test_size_ts + lVar11 * 0x28 + 0x14),local_40,uVar9,uVar10);
    uVar10 = uVar10 & 0xffffffff;
    if (iVar6 != 0) {
      uVar13 = local_40;
      if (uVar3 <= uVar2) {
        uStack_60 = 0x10040a;
        uVar7 = test_size_t_eq("test/safe_math_test.c",0xf1,&_LC5,"a - b",local_40);
        uVar10 = (ulong)uVar7;
        uVar13 = local_40;
        if (uVar7 == 0) goto LAB_001002d0;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar2;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar3;
      local_40 = SUB168(auVar4 * auVar5,0);
      if (SUB168(auVar4 * auVar5,8) == 0) {
        uStack_60 = 0x10043a;
        iVar6 = test_int_eq("test/safe_math_test.c",0xf6,&_LC1,"test_size_ts[n].mul_err",0,
                            *(undefined4 *)(test_size_ts + lVar11 * 0x28 + 0x18));
        if (iVar6 != 0) {
          uStack_60 = 0x100461;
          iVar6 = test_size_t_eq("test/safe_math_test.c",0xf7,&_LC5,"a * b");
          if (iVar6 != 0) goto LAB_00100102;
        }
LAB_00100383:
        uVar10 = 0;
      }
      else {
        uStack_60 = 0x1000fa;
        iVar6 = test_int_eq("test/safe_math_test.c",0xf6,&_LC1,"test_size_ts[n].mul_err",1,
                            *(undefined4 *)(test_size_ts + lVar11 * 0x28 + 0x18));
        if (iVar6 == 0) {
          uVar10 = 1;
        }
        else {
LAB_00100102:
          if (uVar3 != 0) {
            local_40 = uVar2 / uVar3;
            uStack_60 = 0x1003bc;
            iVar6 = test_int_eq("test/safe_math_test.c",0xfc,&_LC1,"test_size_ts[n].div_err",0,
                                *(undefined4 *)(test_size_ts + lVar11 * 0x28 + 0x1c));
            if (iVar6 != 0) {
              uStack_60 = 0x1004f3;
              iVar6 = test_size_t_eq("test/safe_math_test.c",0xfd,&_LC5,"a / b");
              uVar7 = 0;
              uVar10 = uVar2 % uVar3;
              if (iVar6 != 0) goto LAB_00100148;
            }
            goto LAB_00100383;
          }
          uStack_60 = 0x100131;
          iVar6 = test_int_eq("test/safe_math_test.c",0xfc,&_LC1,"test_size_ts[n].div_err",1,
                              *(undefined4 *)(test_size_ts + lVar11 * 0x28 + 0x1c));
          if (iVar6 == 0) {
            local_40 = 0xffffffffffffffff;
            uVar10 = 1;
          }
          else {
            local_40 = 0;
            uVar7 = 1;
            uVar10 = local_40;
LAB_00100148:
            local_40 = uVar10;
            uStack_60 = 0x10016d;
            iVar6 = test_int_eq("test/safe_math_test.c",0x102,&_LC1,"test_size_ts[n].mod_err",uVar7,
                                *(undefined4 *)(test_size_ts + lVar11 * 0x28 + 0x20));
            if (iVar6 == 0) {
LAB_00100470:
              uVar10 = (ulong)uVar7;
            }
            else {
              if (uVar7 == 0) {
                uStack_60 = 0x1001aa;
                uVar7 = test_size_t_eq("test/safe_math_test.c",0x103,&_LC5,"a % b",local_40,
                                       uVar2 % uVar3);
                if (uVar7 == 0) goto LAB_00100470;
              }
              if (uVar3 != 0) {
                if (uVar2 == 0) {
                  if (uVar3 == 0) goto LAB_00100480;
                  local_40 = 0;
                }
                else if (uVar2 < ~uVar3) {
                  local_40 = (uVar9 - 1) / uVar3;
                }
                else {
                  local_40 = (uVar2 / uVar3 + 1) - (ulong)(uVar2 % uVar3 == 0);
                }
                uStack_60 = 0x10020b;
                iVar6 = test_int_eq("test/safe_math_test.c",0x108,&_LC1,
                                    "test_size_ts[n].div_round_up_err",0,
                                    *(undefined4 *)(test_size_ts + lVar11 * 0x28 + 0x24));
                if (iVar6 != 0) {
                  uStack_60 = 0x100245;
                  iVar6 = test_size_t_eq("test/safe_math_test.c",0x109,&_LC5,"a / b + (a % b != 0)",
                                         local_40,(uVar2 / uVar3 + 1) - (ulong)(uVar2 % uVar3 == 0))
                  ;
                  if (iVar6 != 0) goto LAB_0010024d;
                }
                goto LAB_00100383;
              }
LAB_00100480:
              uStack_60 = 0x1004a6;
              iVar6 = test_int_eq("test/safe_math_test.c",0x108,&_LC1,
                                  "test_size_ts[n].div_round_up_err",1,
                                  *(undefined4 *)(test_size_ts + lVar11 * 0x28 + 0x24));
              if (iVar6 == 0) {
                uVar10 = 1;
                local_40 = -(ulong)(uVar13 != 0);
              }
              else {
LAB_0010024d:
                if (uVar2 == 0) {
                  uStack_60 = 0x1005cd;
                  iVar6 = test_int_eq("test/safe_math_test.c",0x10e,&_LC1,"a != 0",0,0);
                  if (iVar6 != 0) {
                    uStack_60 = 0x1005f5;
                    iVar6 = test_size_t_eq("test/safe_math_test.c",0x10e,&_LC5,&_LC16,0,0);
                    if (iVar6 != 0) goto LAB_00100281;
                  }
LAB_001005fd:
                  local_40 = 0;
                  uVar10 = 0;
                }
                else {
                  uStack_60 = 0x100279;
                  iVar6 = test_int_eq("test/safe_math_test.c",0x10e,&_LC1,"a != 0",1,1);
                  if (iVar6 == 0) {
                    local_40 = -uVar2;
                    uVar10 = 1;
                  }
                  else {
LAB_00100281:
                    if (uVar3 == 0) {
                      uStack_60 = 0x10062a;
                      iVar6 = test_int_eq("test/safe_math_test.c",0x113,&_LC1,"b != 0",0,0);
                      if (iVar6 != 0) {
                        uStack_60 = 0x100652;
                        iVar6 = test_size_t_eq("test/safe_math_test.c",0x113,&_LC5,&_LC16,0,0);
                        if (iVar6 != 0) goto LAB_00100656;
                      }
                      goto LAB_001005fd;
                    }
                    uStack_60 = 0x1002b4;
                    iVar6 = test_int_eq("test/safe_math_test.c",0x113,&_LC1,"b != 0",1,1);
                    if (iVar6 == 0) {
                      uVar10 = 1;
                      local_40 = -uVar3;
                    }
                    else {
LAB_00100656:
                      uStack_60 = 0x10066f;
                      iVar6 = test_int_eq("test/safe_math_test.c",0x118,&_LC1,&_LC16,0,0);
                      if (iVar6 != 0) {
                        uStack_60 = 0x1006bf;
                        iVar6 = test_size_t_eq("test/safe_math_test.c",0x118,&_LC5,&_LC18,uVar2,
                                               uVar2);
                        if (iVar6 != 0) {
                          uStack_60 = 0x1006dc;
                          iVar6 = test_int_eq("test/safe_math_test.c",0x11d,&_LC1,&_LC16,0,0);
                          if (iVar6 != 0) {
                            uStack_60 = 0x100709;
                            uVar7 = test_size_t_eq("test/safe_math_test.c",0x11d,&_LC5,&_LC19,uVar3,
                                                   uVar3);
                            uVar9 = (ulong)uVar7;
                            uVar8 = 1;
                            if (uVar7 != 0) goto LAB_001002fb;
                          }
                          uVar10 = 0;
                          local_40 = uVar3;
                          goto LAB_001002d0;
                        }
                      }
                      uVar10 = 0;
                      local_40 = uVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001002d0:
  test_info("test/safe_math_test.c",0x121,"a = %zu  b = %zu  r = %zu  err = %d",uVar2,uVar3,local_40
            ,uVar10);
  uVar8 = 0;
  uVar9 = uStack_60;
LAB_001002fb:
  auVar12._8_8_ = uVar9;
  auVar12._0_8_ = uVar8;
  return auVar12;
}



undefined8 test_uint_muldiv(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  lVar8 = (long)param_1 * 0x10;
  uVar1 = *(uint *)(test_muldiv_uints + lVar8 + 8);
  uVar2 = *(uint *)(test_muldiv_uints + lVar8);
  uVar3 = *(uint *)(test_muldiv_uints + lVar8 + 4);
  uVar4 = *(undefined4 *)(test_muldiv_uints + lVar8 + 0xc);
  if (uVar1 == 0) {
    iVar7 = test_int_eq("test/safe_math_test.c",0x164,&_LC1,"test_muldiv_uints[n].err",1,uVar4);
    if (iVar7 != 0) {
      return 1;
    }
    uVar5 = 1;
    uVar10 = (ulong)((uVar2 == 0 || uVar3 == 0) - 1);
    goto LAB_00100835;
  }
  if ((int)((ulong)uVar2 * (ulong)uVar3 >> 0x20) == 0) {
    uVar10 = ((ulong)uVar2 * (ulong)uVar3 & 0xffffffff) / (ulong)uVar1;
    uVar5 = test_int_eq("test/safe_math_test.c",0x164,&_LC1,"test_muldiv_uints[n].err",0,uVar4);
    if (uVar5 == 0) goto LAB_00100835;
  }
  else {
    uVar6 = uVar2;
    uVar9 = uVar3;
    if (uVar3 <= uVar2) {
      uVar6 = uVar3;
      uVar9 = uVar2;
    }
    uVar10 = ((ulong)uVar9 % (ulong)uVar1) * (ulong)uVar6;
    uVar5 = (uint)((int)(uVar10 >> 0x20) != 0);
    lVar8 = (ulong)uVar6 * ((ulong)uVar9 / (ulong)uVar1);
    uVar6 = (uint)lVar8;
    if ((int)((ulong)lVar8 >> 0x20) != 0) {
      uVar5 = 1;
    }
    uVar9 = (uint)((uVar10 & 0xffffffff) / (ulong)uVar1);
    uVar10 = (ulong)(uVar9 + uVar6);
    if (CARRY4(uVar9,uVar6)) {
      uVar5 = 1;
      iVar7 = test_int_eq("test/safe_math_test.c",0x164,&_LC1,"test_muldiv_uints[n].err",1,uVar4);
      if (iVar7 != 0) {
        return 1;
      }
      goto LAB_00100835;
    }
    iVar7 = test_int_eq("test/safe_math_test.c",0x164,&_LC1,"test_muldiv_uints[n].err",uVar5,uVar4);
    if (iVar7 == 0) goto LAB_00100835;
    if (uVar5 != 0) {
      return 1;
    }
  }
  uVar5 = test_uint_eq("test/safe_math_test.c",0x165,&_LC5,&_LC22,uVar10,
                       ((ulong)uVar2 * (ulong)uVar3) / (ulong)uVar1 & 0xffffffff);
  if (uVar5 != 0) {
    return 1;
  }
LAB_00100835:
  test_info("test/safe_math_test.c",0x166,"%u * %u / %u  r = %u  err = %d",uVar2,uVar3,uVar1,uVar10,
            uVar5);
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00100e58) */
/* WARNING: Removing unreachable block (ram,0x00100e71) */

undefined1  [16] test_uint_ops(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  ulong uStack_50;
  uint local_3c;
  
  lVar11 = (long)param_1;
  lVar8 = lVar11 * 0x20;
  uVar1 = *(uint *)(test_uints + lVar8);
  uVar2 = *(uint *)(test_uints + lVar8 + 4);
  uVar3 = uVar1 + uVar2;
  if (!CARRY4(uVar1,uVar2)) {
    uStack_50 = 0x100c7b;
    uVar6 = uVar3;
    iVar4 = test_int_eq("test/safe_math_test.c",0x97,&_LC1,"test_uints[n].sum_err",0,
                        *(undefined4 *)(test_uints + lVar8 + 8));
    if (iVar4 != 0) {
      uStack_50 = 0x100ca2;
      iVar4 = test_uint_eq("test/safe_math_test.c",0x98,&_LC5,"a + b");
      if (iVar4 != 0) goto LAB_001009b0;
    }
    goto LAB_00100caa;
  }
  uStack_50 = 0x1009a8;
  iVar4 = test_int_eq("test/safe_math_test.c",0x97,&_LC1,"test_uints[n].sum_err",1,
                      *(undefined4 *)(test_uints + lVar8 + 8));
  if (iVar4 == 0) {
    uVar7 = 1;
    local_3c = uVar3;
  }
  else {
LAB_001009b0:
    uVar5 = uVar1 - uVar2;
    uVar7 = (uint)(uVar1 < uVar2);
    uStack_50 = 0x1009e8;
    iVar4 = test_int_eq("test/safe_math_test.c",0x9d,&_LC1,"test_uints[n].sub_err",uVar1 < uVar2,
                        *(undefined4 *)(test_uints + lVar11 * 0x20 + 0xc),uVar5,uVar7);
    local_3c = uVar5;
    if (iVar4 != 0) {
      if (uVar2 <= uVar1) {
        uStack_50 = 0x100d32;
        iVar4 = test_uint_eq("test/safe_math_test.c",0x9e,&_LC5,"a - b",uVar5);
        if (iVar4 == 0) {
          uVar7 = 0;
          local_3c = uVar5;
          goto LAB_00100c00;
        }
      }
      uVar6 = (uint)((ulong)uVar1 * (ulong)uVar2);
      if ((int)((ulong)uVar1 * (ulong)uVar2 >> 0x20) == 0) {
        uStack_50 = 0x100d62;
        iVar4 = test_int_eq("test/safe_math_test.c",0xa3,&_LC1,"test_uints[n].mul_err",0,
                            *(undefined4 *)(test_uints + lVar11 * 0x20 + 0x10));
        if (iVar4 != 0) {
          uStack_50 = 0x100d89;
          iVar4 = test_uint_eq("test/safe_math_test.c",0xa4,&_LC5,"a * b");
          if (iVar4 != 0) goto LAB_00100a44;
        }
LAB_00100caa:
        uVar7 = 0;
        local_3c = uVar6;
      }
      else {
        uStack_50 = 0x100a3c;
        iVar4 = test_int_eq("test/safe_math_test.c",0xa3,&_LC1,"test_uints[n].mul_err",1,
                            *(undefined4 *)(test_uints + lVar11 * 0x20 + 0x10));
        if (iVar4 == 0) {
          uVar7 = 1;
          local_3c = uVar6;
        }
        else {
LAB_00100a44:
          if (uVar2 != 0) {
            uVar6 = uVar1 / uVar2;
            local_3c = uVar1 % uVar2;
            uStack_50 = 0x100ce0;
            iVar4 = test_int_eq("test/safe_math_test.c",0xa9,&_LC1,"test_uints[n].div_err",0,
                                *(undefined4 *)(test_uints + lVar11 * 0x20 + 0x14));
            if (iVar4 != 0) {
              uStack_50 = 0x100e1b;
              iVar4 = test_uint_eq("test/safe_math_test.c",0xaa,&_LC5,"a / b");
              uVar7 = 0;
              if (iVar4 != 0) goto LAB_00100a8b;
            }
            goto LAB_00100caa;
          }
          uStack_50 = 0x100a75;
          iVar4 = test_int_eq("test/safe_math_test.c",0xa9,&_LC1,"test_uints[n].div_err",1,
                              *(undefined4 *)(test_uints + lVar11 * 0x20 + 0x14));
          if (iVar4 == 0) {
            uVar7 = 1;
            local_3c = 0xffffffff;
          }
          else {
            local_3c = 0;
            uVar7 = 1;
LAB_00100a8b:
            uStack_50 = 0x100ab3;
            iVar4 = test_int_eq("test/safe_math_test.c",0xaf,&_LC1,"test_uints[n].mod_err",uVar7,
                                *(undefined4 *)(test_uints + lVar11 * 0x20 + 0x18));
            if (iVar4 != 0) {
              if (uVar7 == 0) {
                uStack_50 = 0x100aee;
                uVar7 = test_uint_eq("test/safe_math_test.c",0xb0,&_LC5,"a % b",local_3c,
                                     (ulong)uVar1 % (ulong)uVar2);
                if (uVar7 == 0) goto LAB_00100c00;
              }
              if (uVar2 != 0) {
                if (uVar1 == 0) {
                  if (uVar2 == 0) goto LAB_00100db0;
                  uVar6 = 0;
                }
                else if (uVar1 < ~uVar2) {
                  uVar6 = (uVar3 - 1) / uVar2;
                }
                else {
                  uVar6 = (uVar1 / uVar2 + 1) - (uint)(uVar1 % uVar2 == 0);
                }
                uStack_50 = 0x100b46;
                iVar4 = test_int_eq("test/safe_math_test.c",0xb5,&_LC1,
                                    "test_uints[n].div_round_up_err",0,
                                    *(undefined4 *)(test_uints + lVar11 * 0x20 + 0x1c));
                if (iVar4 != 0) {
                  uStack_50 = 0x100b7c;
                  iVar4 = test_uint_eq("test/safe_math_test.c",0xb6,&_LC5,"a / b + (a % b != 0)",
                                       uVar6,(uVar1 / uVar2 + 1) - (uint)(uVar1 % uVar2 == 0));
                  if (iVar4 != 0) goto LAB_00100b84;
                }
                goto LAB_00100caa;
              }
LAB_00100db0:
              uStack_50 = 0x100dd6;
              iVar4 = test_int_eq("test/safe_math_test.c",0xb5,&_LC1,
                                  "test_uints[n].div_round_up_err",1,
                                  *(undefined4 *)(test_uints + lVar11 * 0x20 + 0x1c));
              if (iVar4 == 0) {
                uVar7 = 1;
                local_3c = -(uint)(uVar5 != 0);
              }
              else {
LAB_00100b84:
                if (uVar1 == 0) {
                  uStack_50 = 0x100ee5;
                  iVar4 = test_int_eq("test/safe_math_test.c",0xbb,&_LC1,"a != 0",0,0);
                  if (iVar4 != 0) {
                    uStack_50 = 0x100f0d;
                    iVar4 = test_uint_eq("test/safe_math_test.c",0xbb,&_LC5,&_LC16,0,0);
                    if (iVar4 != 0) goto LAB_00100bb7;
                  }
LAB_00100f15:
                  uVar7 = 0;
                  local_3c = 0;
                }
                else {
                  uStack_50 = 0x100baf;
                  iVar4 = test_int_eq("test/safe_math_test.c",0xbb,&_LC1,"a != 0",1,1);
                  if (iVar4 == 0) {
                    uVar7 = 1;
                    local_3c = -uVar1;
                  }
                  else {
LAB_00100bb7:
                    if (uVar2 == 0) {
                      uStack_50 = 0x100f41;
                      iVar4 = test_int_eq("test/safe_math_test.c",0xc0,&_LC1,"b != 0",0,0);
                      if (iVar4 != 0) {
                        uStack_50 = 0x100f69;
                        iVar4 = test_uint_eq("test/safe_math_test.c",0xc0,&_LC5,&_LC16,0,0);
                        if (iVar4 != 0) goto LAB_00100f6d;
                      }
                      goto LAB_00100f15;
                    }
                    uStack_50 = 0x100be9;
                    iVar4 = test_int_eq("test/safe_math_test.c",0xc0,&_LC1,"b != 0",1,1);
                    if (iVar4 == 0) {
                      uVar7 = 1;
                      local_3c = -uVar2;
                    }
                    else {
LAB_00100f6d:
                      uStack_50 = 0x100f86;
                      iVar4 = test_int_eq("test/safe_math_test.c",0xc5,&_LC1,&_LC16,0,0);
                      if (iVar4 != 0) {
                        uStack_50 = 0x100fd1;
                        iVar4 = test_uint_eq("test/safe_math_test.c",0xc5,&_LC5,&_LC18,uVar1,uVar1);
                        if (iVar4 != 0) {
                          uStack_50 = 0x100fee;
                          iVar4 = test_int_eq("test/safe_math_test.c",0xca,&_LC1,&_LC16,0,0);
                          if (iVar4 != 0) {
                            uStack_50 = 0x10101a;
                            uVar3 = test_uint_eq("test/safe_math_test.c",0xca,&_LC5,&_LC19,uVar2,
                                                 uVar2);
                            uVar10 = (ulong)uVar3;
                            uVar9 = 1;
                            if (uVar3 != 0) goto LAB_00100c2a;
                          }
                          uVar7 = 0;
                          local_3c = uVar2;
                          goto LAB_00100c00;
                        }
                      }
                      uVar7 = 0;
                      local_3c = uVar1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00100c00:
  test_info("test/safe_math_test.c",0xce,"a = %u  b = %u  r = %u  err = %d",uVar1,uVar2,local_3c,
            uVar7);
  uVar9 = 0;
  uVar10 = uStack_50;
LAB_00100c2a:
  auVar12._8_8_ = uVar10;
  auVar12._0_8_ = uVar9;
  return auVar12;
}



undefined8 test_int_muldiv(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  bool bVar18;
  uint local_3c;
  
  lVar11 = (long)param_1;
  lVar10 = lVar11 * 0x10;
  iVar1 = *(int *)(test_muldiv_ints + lVar10 + 8);
  uVar2 = *(uint *)(test_muldiv_ints + lVar10);
  uVar3 = *(uint *)(test_muldiv_ints + lVar10 + 4);
  if (iVar1 == 0) {
    if ((uVar2 == 0) || (uVar17 = 0x7fffffff, uVar3 == 0)) {
      uVar17 = 0;
    }
LAB_00101107:
    iVar6 = test_int_eq("test/safe_math_test.c",0x144,&_LC1,"test_muldiv_ints[n].err",1,
                        *(undefined4 *)(test_muldiv_ints + lVar11 * 0x10 + 0xc));
    if (iVar6 == 0) {
      uVar9 = 1;
      goto LAB_00101246;
    }
  }
  else {
    uVar4 = (long)(int)uVar2 * (long)(int)uVar3;
    iVar6 = (int)uVar4;
    bVar18 = iVar1 == -1;
    local_3c = (uint)((long)iVar6 != uVar4);
    if (local_3c == 0) {
      if ((iVar6 == -0x80000000) && (uVar17 = 0x7fffffff, bVar18)) goto LAB_00101107;
      uVar17 = (long)((ulong)(uint)(iVar6 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) / (long)iVar1 &
               0xffffffff;
      uVar9 = test_int_eq("test/safe_math_test.c",0x144,&_LC1,"test_muldiv_ints[n].err",0,
                          *(undefined4 *)(test_muldiv_ints + lVar11 * 0x10 + 0xc));
      if (uVar9 == 0) goto LAB_00101246;
    }
    else {
      uVar8 = uVar2;
      uVar12 = uVar3;
      if (((int)uVar2 < (int)uVar3) ||
         (bVar5 = uVar2 == 0x80000000 && bVar18, uVar8 = uVar3, uVar12 = uVar2,
         uVar2 != 0x80000000 || !bVar18)) {
        uVar14 = (int)uVar12 / iVar1;
        local_3c = 0;
        uVar12 = (int)uVar12 % iVar1;
        bVar5 = bVar18;
      }
      else {
        uVar14 = 0x7fffffff;
        uVar12 = 0x7fffffff;
      }
      lVar10 = (long)(int)uVar8 * (long)(int)uVar12;
      iVar7 = (int)lVar10;
      uVar15 = (uint)(iVar7 != lVar10);
      iVar13 = (int)((long)(int)uVar8 * (long)(int)uVar14);
      bVar18 = (long)iVar13 != (long)(int)uVar8 * (long)(int)uVar14;
      uVar9 = (uint)bVar18;
      uVar16 = (uint)(iVar7 != lVar10);
      if (uVar16 == 0) {
        bVar5 = (bool)(bVar5 & iVar7 == -0x80000000);
LAB_001012a3:
        uVar15 = local_3c;
        if (bVar18) {
          iVar13 = 0x7fffffff - ((int)(uVar8 ^ uVar14) >> 0x1f);
          uVar15 = uVar9;
        }
        if (bVar5) {
          iVar7 = 0x7fffffff;
          uVar9 = (uint)((long)iVar6 != uVar4);
        }
        else {
LAB_001010ee:
          iVar7 = iVar7 / iVar1;
          uVar9 = uVar15;
        }
        uVar17 = (ulong)(0x7fffffff - (iVar13 >> 0x1f));
        uVar8 = iVar7 + iVar13;
        if (SCARRY4(iVar7,iVar13)) goto LAB_00101107;
      }
      else {
        if ((int)(uVar12 ^ uVar8) < 0) {
          iVar7 = -0x80000000;
          local_3c = uVar16;
          goto LAB_001012a3;
        }
        if (!bVar18) {
          iVar7 = 0x7fffffff;
          goto LAB_001010ee;
        }
        if (-1 < (int)(uVar8 ^ uVar14)) {
          iVar13 = 0x7fffffff;
          iVar7 = 0x7fffffff;
          uVar15 = uVar9;
          goto LAB_001010ee;
        }
        uVar17 = 0x80000000;
        iVar6 = (int)(0x7fffffff / (long)iVar1);
        uVar8 = iVar6 + 0x80000000;
        if (SCARRY4(iVar6,-0x80000000)) goto LAB_00101107;
      }
      uVar17 = (ulong)uVar8;
      iVar6 = test_int_eq("test/safe_math_test.c",0x144,&_LC1,"test_muldiv_ints[n].err",uVar9,
                          *(undefined4 *)(test_muldiv_ints + lVar11 * 0x10 + 0xc));
      if (iVar6 == 0) goto LAB_00101246;
      if (uVar9 != 0) {
        return 1;
      }
    }
    iVar6 = test_int_eq("test/safe_math_test.c",0x145,&_LC5,&_LC22,uVar17,
                        ((long)(int)uVar2 * (long)(int)uVar3) / (long)iVar1 & 0xffffffff);
    if (iVar6 == 0) {
      uVar9 = 0;
LAB_00101246:
      test_info("test/safe_math_test.c",0x146,"%d * %d / %d  r = %d  err = %d",uVar2,uVar3,iVar1,
                uVar17,uVar9);
      return 0;
    }
  }
  return 1;
}



undefined8 test_int_ops(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  
  lVar12 = (long)param_1;
  lVar8 = lVar12 * 0x30;
  uVar1 = *(uint *)(test_ints + lVar8);
  uVar2 = *(uint *)(test_ints + lVar8 + 4);
  bVar13 = SCARRY4(uVar1,uVar2);
  uVar9 = uVar1 + uVar2;
  if (bVar13) {
    uVar11 = 0x7fffffff - ((int)uVar1 >> 0x1f);
    iVar6 = test_int_eq("test/safe_math_test.c",0x3e,&_LC1,"test_ints[n].sum_err",1,
                        *(undefined4 *)(test_ints + lVar8 + 8));
  }
  else {
    iVar6 = test_int_eq("test/safe_math_test.c",0x3e,&_LC1,"test_ints[n].sum_err",0,
                        *(undefined4 *)(test_ints + lVar8 + 8));
    uVar11 = uVar9;
    if (iVar6 == 0) goto LAB_00101530;
    iVar6 = test_int_eq("test/safe_math_test.c",0x3f,&_LC5,"a + b",uVar9,uVar9);
  }
  if (iVar6 == 0) goto LAB_00101530;
  bVar13 = SBORROW4(uVar1,uVar2);
  uVar11 = uVar1 - uVar2;
  if (bVar13) {
    uVar11 = 0x7fffffff - ((int)uVar1 >> 0x1f);
    iVar6 = test_int_eq("test/safe_math_test.c",0x44,&_LC1,"test_ints[n].sub_err",1,
                        *(undefined4 *)(test_ints + lVar12 * 0x30 + 0xc));
  }
  else {
    iVar6 = test_int_eq("test/safe_math_test.c",0x44,&_LC1,"test_ints[n].sub_err",0,
                        *(undefined4 *)(test_ints + lVar12 * 0x30 + 0xc));
    if (iVar6 == 0) goto LAB_00101530;
    iVar6 = test_int_eq("test/safe_math_test.c",0x45,&_LC5,"a - b",uVar11,uVar11);
  }
  if (iVar6 == 0) goto LAB_00101530;
  uVar4 = (long)(int)uVar1 * (long)(int)uVar2;
  uVar11 = (uint)uVar4;
  bVar13 = (long)(int)uVar11 != uVar4;
  if (bVar13) {
    uVar11 = 0x7fffffff - ((int)(uVar1 ^ uVar2) >> 0x1f);
    iVar6 = test_int_eq("test/safe_math_test.c",0x4a,&_LC1,"test_ints[n].mul_err",1,
                        *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x10));
  }
  else {
    iVar6 = test_int_eq("test/safe_math_test.c",0x4a,&_LC1,"test_ints[n].mul_err",0,
                        *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x10));
    if (iVar6 == 0) goto LAB_00101530;
    iVar6 = test_int_eq("test/safe_math_test.c",0x4b,&_LC5,"a * b",uVar4 & 0xffffffff,
                        uVar4 & 0xffffffff);
  }
  if (iVar6 == 0) goto LAB_00101530;
  lVar8 = lVar12 * 0x30;
  uVar10 = *(undefined4 *)(test_ints + lVar8 + 0x14);
  if (uVar2 == 0) {
    if (-1 < (int)uVar1) {
      iVar6 = test_int_eq("test/safe_math_test.c",0x50,&_LC1,"test_ints[n].div_err",1,uVar10);
      if (iVar6 != 0) goto LAB_001016b7;
      goto LAB_00101b87;
    }
    iVar6 = test_int_eq("test/safe_math_test.c",0x50,&_LC1,"test_ints[n].div_err",1,uVar10);
    if (iVar6 != 0) {
LAB_001016b7:
      uVar10 = *(undefined4 *)(test_ints + lVar8 + 0x18);
      uVar11 = 0;
      goto LAB_001016bf;
    }
LAB_001019a7:
    uVar11 = 0x80000000;
    bVar13 = true;
    goto LAB_00101530;
  }
  if ((uVar2 != 0xffffffff) || (uVar1 != 0x80000000)) {
    uVar4 = (long)(int)uVar1 / (long)(int)uVar2;
    uVar3 = (long)(int)uVar1 % (long)(int)uVar2;
    uVar7 = (uint)uVar4;
    iVar6 = test_int_eq("test/safe_math_test.c",0x50,&_LC1,"test_ints[n].div_err",0,uVar10);
    uVar11 = uVar7;
    if ((iVar6 != 0) &&
       (iVar6 = test_int_eq("test/safe_math_test.c",0x51,&_LC5,"a / b",uVar4 & 0xffffffff,
                            uVar4 & 0xffffffff), iVar6 != 0)) {
      uVar10 = *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x18);
      if ((uVar2 == 0xffffffff) && (uVar1 == 0x80000000)) {
        uVar11 = 0x7fffffff;
        goto LAB_001016bf;
      }
      uVar11 = (uint)uVar3;
      iVar6 = test_int_eq("test/safe_math_test.c",0x56,&_LC1,"test_ints[n].mod_err",0,uVar10);
      if ((iVar6 == 0) ||
         (iVar6 = test_int_eq("test/safe_math_test.c",0x57,&_LC5,"a % b",uVar3 & 0xffffffff,
                              uVar3 & 0xffffffff), iVar6 == 0)) goto LAB_00101524;
      if (((int)uVar2 < 1) || ((int)uVar1 < 1)) goto LAB_001016ee;
      if ((int)uVar1 < (int)(0x7fffffff - uVar2)) {
        bVar13 = false;
        uVar11 = (int)(uVar9 - 1) / (int)uVar2;
      }
      else {
        bVar13 = false;
        uVar11 = (uVar7 + 1) - (uint)(uVar11 == 0);
      }
      goto LAB_00101730;
    }
    goto LAB_00101524;
  }
  iVar6 = test_int_eq("test/safe_math_test.c",0x50,&_LC1,"test_ints[n].div_err",1,uVar10);
  if (iVar6 == 0) goto LAB_00101b87;
  uVar10 = *(undefined4 *)(test_ints + lVar8 + 0x18);
  uVar11 = 0x7fffffff;
LAB_001016bf:
  iVar6 = test_int_eq("test/safe_math_test.c",0x56,&_LC1,"test_ints[n].mod_err",1,uVar10);
  if (iVar6 == 0) {
LAB_00101a90:
    bVar13 = true;
    goto LAB_00101530;
  }
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      iVar6 = test_int_eq("test/safe_math_test.c",0x5c,&_LC1,"test_ints[n].div_round_up_err",1,
                          *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x1c));
      if (iVar6 == 0) {
LAB_00101b87:
        uVar11 = 0x7fffffff;
        bVar13 = true;
        goto LAB_00101530;
      }
      goto LAB_00101789;
    }
    uVar11 = test_int_eq("test/safe_math_test.c",0x5c,&_LC1,"test_ints[n].div_round_up_err",1,
                         *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x1c));
    if (uVar11 == 0) goto LAB_00101a90;
    uVar10 = *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x20);
LAB_001017aa:
    uVar11 = -uVar1;
    iVar6 = test_int_eq("test/safe_math_test.c",0x65,&_LC1,"test_ints[n].neg_a_err",0,uVar10);
    if (iVar6 != 0) {
      bVar13 = false;
      iVar6 = test_int_eq("test/safe_math_test.c",0x66,&_LC5,&_LC37,uVar11,uVar11);
      if (iVar6 != 0) goto LAB_00101800;
    }
    goto LAB_00101524;
  }
LAB_001016ee:
  if (uVar1 == 0) {
    bVar13 = false;
    uVar11 = 0;
LAB_00101730:
    iVar6 = test_int_eq("test/safe_math_test.c",0x5c,&_LC1,"test_ints[n].div_round_up_err",bVar13,
                        *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x1c));
    if (iVar6 == 0) goto LAB_00101530;
    uVar9 = (uint)((int)uVar1 % (int)uVar2 != 0);
    if ((!SCARRY4(uVar9,(int)uVar1 / (int)uVar2) && bVar13 == false) &&
       (iVar6 = test_int_eq("test/safe_math_test.c",0x60,&_LC5,&_LC36,uVar11,
                            uVar9 + (int)uVar1 / (int)uVar2), iVar6 == 0)) {
      bVar13 = false;
      goto LAB_00101530;
    }
LAB_00101789:
    uVar10 = *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x20);
    if (uVar1 != 0x80000000) goto LAB_001017aa;
    iVar6 = test_int_eq("test/safe_math_test.c",0x65,&_LC1,"test_ints[n].neg_a_err",1,
                        *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x20));
    if (iVar6 == 0) goto LAB_001019a7;
    bVar13 = true;
LAB_00101800:
    uVar10 = *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x24);
    if (uVar2 != 0x80000000) goto LAB_00101821;
    iVar6 = test_int_eq("test/safe_math_test.c",0x6b,&_LC1,"test_ints[n].neg_b_err",1,uVar10);
    bVar5 = true;
    if (iVar6 == 0) goto LAB_001019a7;
LAB_0010187c:
    if (uVar1 == 0x80000000) {
      uVar11 = 0x80000000;
    }
    else {
      uVar11 = -uVar1;
      if (0 < (int)uVar1) {
        uVar11 = uVar1;
      }
    }
    iVar6 = test_int_eq("test/safe_math_test.c",0x71,&_LC1,"test_ints[n].abs_a_err",bVar13,
                        *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x28));
    if (iVar6 != 0) {
      if (bVar13 == false) {
        uVar9 = -uVar1;
        if (0 < (int)uVar1) {
          uVar9 = uVar1;
        }
        iVar6 = test_int_eq("test/safe_math_test.c",0x72,&_LC5,"a < 0 ? -a : a",uVar11,uVar9);
        if (iVar6 == 0) {
          bVar13 = false;
          goto LAB_00101530;
        }
      }
      if (uVar2 == 0x80000000) {
        uVar11 = 0x80000000;
      }
      else {
        uVar11 = -uVar2;
        if (0 < (int)uVar2) {
          uVar11 = uVar2;
        }
      }
      iVar6 = test_int_eq("test/safe_math_test.c",0x77,&_LC1,"test_ints[n].abs_b_err",bVar5,
                          *(undefined4 *)(test_ints + lVar12 * 0x30 + 0x2c));
      bVar13 = bVar5;
      if (iVar6 != 0) {
        if (bVar5 == false) {
          uVar9 = -uVar2;
          if (0 < (int)uVar2) {
            uVar9 = uVar2;
          }
          iVar6 = test_int_eq("test/safe_math_test.c",0x78,&_LC5,"b < 0 ? -b : b",uVar11,uVar9);
          if (iVar6 == 0) {
            bVar13 = false;
            goto LAB_00101530;
          }
        }
        return 1;
      }
    }
  }
  else {
    if ((uVar2 != 0xffffffff) || (uVar1 != 0x80000000)) {
      iVar6 = (int)((long)(int)uVar1 / (long)(int)uVar2);
      uVar9 = (uint)((int)uVar1 % (int)uVar2 != 0);
      bVar13 = SCARRY4(uVar9,iVar6);
      uVar11 = ((uint)((ulong)((long)(int)uVar1 / (long)(int)uVar2) >> 0x1f) & 1) + 0x7fffffff;
      if (!bVar13) {
        uVar11 = uVar9 + iVar6;
      }
      goto LAB_00101730;
    }
    lVar8 = lVar12 * 0x30;
    iVar6 = test_int_eq("test/safe_math_test.c",0x5c,&_LC1,"test_ints[n].div_round_up_err",1,
                        *(undefined4 *)(test_ints + lVar8 + 0x1c));
    if (iVar6 == 0) goto LAB_00101b87;
    iVar6 = test_int_eq("test/safe_math_test.c",0x65,&_LC1,"test_ints[n].neg_a_err",1,
                        *(undefined4 *)(test_ints + lVar8 + 0x20));
    if (iVar6 == 0) goto LAB_001019a7;
    uVar10 = *(undefined4 *)(test_ints + lVar8 + 0x24);
    bVar13 = true;
LAB_00101821:
    uVar11 = -uVar2;
    iVar6 = test_int_eq("test/safe_math_test.c",0x6b,&_LC1,"test_ints[n].neg_b_err",0,uVar10);
    if (iVar6 != 0) {
      iVar6 = test_int_eq("test/safe_math_test.c",0x6c,&_LC5,&_LC39,uVar11,uVar11);
      bVar5 = false;
      if (iVar6 != 0) goto LAB_0010187c;
    }
LAB_00101524:
    bVar13 = false;
  }
LAB_00101530:
  test_info("test/safe_math_test.c",0x7c,"a = %d  b = %d  r = %d  err = %d",uVar1,uVar2,uVar11,
            bVar13);
  return 0;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_int_ops",test_int_ops,0x14,1);
  add_all_tests("test_uint_ops",test_uint_ops,9,1);
  add_all_tests("test_size_t_ops",0x100000,10,1);
  add_all_tests("test_int_muldiv",test_int_muldiv,0xe,1);
  add_all_tests("test_uint_muldiv",test_uint_muldiv,7,1);
  return 1;
}


