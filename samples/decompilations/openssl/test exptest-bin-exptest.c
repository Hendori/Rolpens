
int test_mod_exp_x2(int param_1)

{
  int iVar1;
  int iVar2;
  BN_CTX *ctx;
  BIGNUM *b;
  BIGNUM *b_00;
  BIGNUM *r;
  undefined8 uVar3;
  BIGNUM *local_78;
  BIGNUM *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  
  iVar2 = 0x400;
  if ((100 < param_1) && (iVar2 = 0x600, 200 < param_1)) {
    iVar2 = (uint)(param_1 < 0x12d) << 0xb;
  }
  ctx = BN_CTX_new();
  iVar1 = test_ptr("test/exptest.c",0x106,"ctx = BN_CTX_new()",ctx);
  if (iVar1 == 0) {
    local_60 = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    b_00 = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
    local_68 = (BIGNUM *)0x0;
    local_70 = (BIGNUM *)0x0;
    local_78 = (BIGNUM *)0x0;
    local_48 = (BIGNUM *)0x0;
    local_58 = (BIGNUM *)0x0;
    iVar1 = 0;
  }
  else {
    b = BN_new();
    iVar1 = test_ptr("test/exptest.c",0x109,"r_mont_const_x2_1 = BN_new()",b);
    if (iVar1 == 0) {
      local_60 = (BIGNUM *)0x0;
      r = (BIGNUM *)0x0;
      b_00 = (BIGNUM *)0x0;
      local_50 = (BIGNUM *)0x0;
      local_68 = (BIGNUM *)0x0;
      local_70 = (BIGNUM *)0x0;
      local_78 = (BIGNUM *)0x0;
      local_48 = (BIGNUM *)0x0;
      local_58 = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      b_00 = BN_new();
      iVar1 = test_ptr("test/exptest.c",0x10a,"r_mont_const_x2_2 = BN_new()",b_00);
      if (iVar1 == 0) {
        local_60 = (BIGNUM *)0x0;
        r = (BIGNUM *)0x0;
        local_50 = (BIGNUM *)0x0;
        local_68 = (BIGNUM *)0x0;
        local_70 = (BIGNUM *)0x0;
        local_78 = (BIGNUM *)0x0;
        local_48 = (BIGNUM *)0x0;
        local_58 = (BIGNUM *)0x0;
        iVar1 = 0;
      }
      else {
        r = BN_new();
        iVar1 = test_ptr("test/exptest.c",0x10b,"r_simple1 = BN_new()",r);
        if (iVar1 == 0) {
          local_60 = (BIGNUM *)0x0;
          local_50 = (BIGNUM *)0x0;
          local_68 = (BIGNUM *)0x0;
          local_70 = (BIGNUM *)0x0;
          local_78 = (BIGNUM *)0x0;
          local_48 = (BIGNUM *)0x0;
          local_58 = (BIGNUM *)0x0;
          iVar1 = 0;
        }
        else {
          local_58 = BN_new();
          iVar1 = test_ptr("test/exptest.c",0x10c,"r_simple2 = BN_new()",local_58);
          if (iVar1 == 0) {
            local_60 = (BIGNUM *)0x0;
            local_50 = (BIGNUM *)0x0;
            local_68 = (BIGNUM *)0x0;
            local_70 = (BIGNUM *)0x0;
            local_78 = (BIGNUM *)0x0;
            local_48 = (BIGNUM *)0x0;
            iVar1 = 0;
          }
          else {
            local_48 = BN_new();
            iVar1 = test_ptr("test/exptest.c",0x10d,"a1 = BN_new()",local_48);
            if (iVar1 == 0) {
              local_60 = (BIGNUM *)0x0;
              local_50 = (BIGNUM *)0x0;
              local_68 = (BIGNUM *)0x0;
              local_70 = (BIGNUM *)0x0;
              local_78 = (BIGNUM *)0x0;
              iVar1 = 0;
            }
            else {
              local_78 = BN_new();
              iVar1 = test_ptr("test/exptest.c",0x10e,"b1 = BN_new()",local_78);
              if (iVar1 == 0) {
                local_60 = (BIGNUM *)0x0;
                local_50 = (BIGNUM *)0x0;
                local_68 = (BIGNUM *)0x0;
                local_70 = (BIGNUM *)0x0;
                iVar1 = 0;
              }
              else {
                local_70 = BN_new();
                iVar1 = test_ptr("test/exptest.c",0x10f,"m1 = BN_new()",local_70);
                if (iVar1 == 0) {
                  local_60 = (BIGNUM *)0x0;
                  local_50 = (BIGNUM *)0x0;
                  local_68 = (BIGNUM *)0x0;
                  iVar1 = 0;
                }
                else {
                  local_68 = BN_new();
                  iVar1 = test_ptr("test/exptest.c",0x110,"a2 = BN_new()",local_68);
                  if (iVar1 == 0) {
                    local_60 = (BIGNUM *)0x0;
                    local_50 = (BIGNUM *)0x0;
                    iVar1 = 0;
                  }
                  else {
                    local_50 = BN_new();
                    iVar1 = test_ptr("test/exptest.c",0x111,"b2 = BN_new()",local_50);
                    local_60 = (BIGNUM *)0x0;
                    if (iVar1 != 0) {
                      local_60 = BN_new();
                      iVar1 = test_ptr("test/exptest.c",0x112,"m2 = BN_new()");
                      if (iVar1 != 0) {
                        BN_rand(local_48,iVar2,0,0);
                        BN_rand(local_78,iVar2,0,0);
                        BN_rand(local_70,iVar2,0,1);
                        BN_rand(local_68,iVar2,0,0);
                        BN_rand(local_50,iVar2,0,0);
                        BN_rand(local_60,iVar2,0,1);
                        iVar2 = BN_div((BIGNUM *)0x0,local_48,local_48,local_70,ctx);
                        iVar2 = test_true("test/exptest.c",0x11c,"BN_mod(a1, a1, m1, ctx)",
                                          iVar2 != 0);
                        if (iVar2 != 0) {
                          iVar2 = BN_div((BIGNUM *)0x0,local_78,local_78,local_70,ctx);
                          iVar2 = test_true("test/exptest.c",0x11d,"BN_mod(b1, b1, m1, ctx)",
                                            iVar2 != 0);
                          if (iVar2 != 0) {
                            iVar2 = BN_div((BIGNUM *)0x0,local_68,local_68,local_60,ctx);
                            iVar2 = test_true("test/exptest.c",0x11e,"BN_mod(a2, a2, m2, ctx)",
                                              iVar2 != 0);
                            if (iVar2 != 0) {
                              iVar2 = BN_div((BIGNUM *)0x0,local_50,local_50,local_60,ctx);
                              iVar2 = test_true("test/exptest.c",0x11f,"BN_mod(b2, b2, m2, ctx)",
                                                iVar2 != 0);
                              if (iVar2 != 0) {
                                iVar2 = BN_mod_exp_simple(r,local_48,local_78,local_70,ctx);
                                iVar2 = test_true("test/exptest.c",0x120,
                                                  "BN_mod_exp_simple(r_simple1, a1, b1, m1, ctx)",
                                                  iVar2 != 0);
                                if (iVar2 != 0) {
                                  iVar2 = BN_mod_exp_simple(local_58,local_68,local_50,local_60,ctx)
                                  ;
                                  uVar3 = test_true("test/exptest.c",0x121,
                                                    "BN_mod_exp_simple(r_simple2, a2, b2, m2, ctx)",
                                                    iVar2 != 0);
                                  if ((int)uVar3 != 0) {
                                    iVar2 = BN_mod_exp_mont_consttime_x2
                                                      (b,local_48,local_78,local_70,0,b_00,local_68,
                                                       local_50,local_60,0,ctx,uVar3);
                                    iVar2 = test_true("test/exptest.c",0x122,
                                                                                                            
                                                  "BN_mod_exp_mont_consttime_x2(r_mont_const_x2_1, a1, b1, m1, NULL, r_mont_const_x2_2, a2, b2, m2, NULL, ctx)"
                                                  ,iVar2 != 0);
                                    if (iVar2 != 0) {
                                      iVar2 = test_BN_eq("test/exptest.c",0x127,"r_simple1",
                                                         "r_mont_const_x2_1",r,b);
                                      if ((iVar2 == 0) ||
                                         (iVar2 = test_BN_eq("test/exptest.c",0x128,"r_simple2",
                                                             "r_mont_const_x2_2",local_58,b_00),
                                         iVar2 == 0)) {
                                        iVar2 = BN_cmp(r,b);
                                        if (iVar2 != 0) {
                                          test_info("test/exptest.c",0x12a,
                                                                                                        
                                                  "simple and mont const time x2 (#1) results differ"
                                                  );
                                        }
                                        iVar2 = BN_cmp(local_58,b_00);
                                        if (iVar2 != 0) {
                                          test_info("test/exptest.c",300,
                                                                                                        
                                                  "simple and mont const time x2 (#2) results differ"
                                                  );
                                        }
                                        test_output_bignum(&_LC25,local_48);
                                        test_output_bignum(&_LC26,local_78);
                                        test_output_bignum(&_LC27,local_70);
                                        test_output_bignum(&_LC28,local_68);
                                        test_output_bignum(&_LC29,local_50);
                                        test_output_bignum(&_LC30,local_60);
                                        test_output_bignum("r_simple1",r);
                                        test_output_bignum("r_simple2",local_58);
                                        test_output_bignum("r_mont_const_x2_1",b);
                                        test_output_bignum("r_mont_const_x2_2",b_00);
                                        iVar1 = 0;
                                      }
                                      else {
                                        iVar1 = 1;
                                      }
                                      goto LAB_001000a4;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        iVar1 = 0;
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
  }
LAB_001000a4:
  BN_free(b);
  BN_free(b_00);
  BN_free(r);
  BN_free(local_58);
  BN_free(local_48);
  BN_free(local_78);
  BN_free(local_70);
  BN_free(local_68);
  BN_free(local_50);
  BN_free(local_60);
  BN_CTX_free(ctx);
  return iVar1;
}



int test_mod_exp(void)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *rr;
  BIGNUM *r_00;
  BIGNUM *r_01;
  long in_FS_OFFSET;
  BIGNUM *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = BN_CTX_new();
  iVar1 = test_ptr("test/exptest.c",0xa4,"ctx = BN_CTX_new()",ctx);
  if (iVar1 == 0) {
    r_01 = (BIGNUM *)0x0;
    r_00 = (BIGNUM *)0x0;
    rr = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    local_70 = (BIGNUM *)0x0;
    local_60 = (BIGNUM *)0x0;
    local_68 = (BIGNUM *)0x0;
    iVar1 = 0;
  }
  else {
    r = BN_new();
    iVar1 = test_ptr("test/exptest.c",0xa7,"r_mont = BN_new()",r);
    if (iVar1 == 0) {
      local_70 = (BIGNUM *)0x0;
      r_01 = (BIGNUM *)0x0;
      r_00 = (BIGNUM *)0x0;
      rr = (BIGNUM *)0x0;
      local_60 = (BIGNUM *)0x0;
      local_68 = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      rr = BN_new();
      iVar1 = test_ptr("test/exptest.c",0xa8,"r_mont_const = BN_new()",rr);
      if (iVar1 == 0) {
        local_70 = (BIGNUM *)0x0;
        r_01 = (BIGNUM *)0x0;
        r_00 = (BIGNUM *)0x0;
        local_60 = (BIGNUM *)0x0;
        local_68 = (BIGNUM *)0x0;
        iVar1 = 0;
      }
      else {
        r_00 = BN_new();
        iVar1 = test_ptr("test/exptest.c",0xa9,"r_recp = BN_new()",r_00);
        if (iVar1 == 0) {
          local_70 = (BIGNUM *)0x0;
          r_01 = (BIGNUM *)0x0;
          local_60 = (BIGNUM *)0x0;
          local_68 = (BIGNUM *)0x0;
          iVar1 = 0;
        }
        else {
          r_01 = BN_new();
          iVar1 = test_ptr("test/exptest.c",0xaa,"r_simple = BN_new()",r_01);
          if (iVar1 == 0) {
            local_70 = (BIGNUM *)0x0;
            local_60 = (BIGNUM *)0x0;
            local_68 = (BIGNUM *)0x0;
            iVar1 = 0;
          }
          else {
            local_68 = BN_new();
            iVar1 = test_ptr("test/exptest.c",0xab,"a = BN_new()",local_68);
            if (iVar1 == 0) {
              local_70 = (BIGNUM *)0x0;
              local_60 = (BIGNUM *)0x0;
              iVar1 = 0;
            }
            else {
              local_60 = BN_new();
              iVar1 = test_ptr("test/exptest.c",0xac,"b = BN_new()",local_60);
              local_70 = (BIGNUM *)0x0;
              if (iVar1 != 0) {
                local_70 = BN_new();
                iVar1 = test_ptr("test/exptest.c",0xad,"m = BN_new()",local_70);
                if (iVar1 != 0) {
                  iVar1 = RAND_bytes(&local_41,1);
                  iVar1 = test_int_gt("test/exptest.c",0xb0,"RAND_bytes(&c, 1)",&_LC38,iVar1);
                  if (iVar1 != 0) {
                    local_41 = (local_41 & 0x7f) - 0x40;
                    iVar1 = BN_rand(local_68,local_41 + 0x100,0,0);
                    iVar1 = test_true("test/exptest.c",0xb3,
                                      "BN_rand(a, NUM_BITS + c, BN_RAND_TOP_ONE, BN_RAND_BOTTOM_ANY)"
                                      ,iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = RAND_bytes(&local_41,1);
                      iVar1 = test_int_gt("test/exptest.c",0xb7,"RAND_bytes(&c, 1)",&_LC38,iVar1);
                      if (iVar1 != 0) {
                        local_41 = (local_41 & 0x7f) - 0x40;
                        iVar1 = BN_rand(local_60,local_41 + 0x100,0,0);
                        iVar1 = test_true("test/exptest.c",0xba,
                                          "BN_rand(b, NUM_BITS + c, BN_RAND_TOP_ONE, BN_RAND_BOTTOM_ANY)"
                                          ,iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = RAND_bytes(&local_41,1);
                          iVar1 = test_int_gt("test/exptest.c",0xbe,"RAND_bytes(&c, 1)",&_LC38,iVar1
                                             );
                          if (iVar1 != 0) {
                            local_41 = (local_41 & 0x7f) - 0x40;
                            iVar1 = BN_rand(local_70,local_41 + 0x100,0,1);
                            iVar1 = test_true("test/exptest.c",0xc1,
                                              "BN_rand(m, NUM_BITS + c, BN_RAND_TOP_ONE, BN_RAND_BOTTOM_ODD)"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = BN_div((BIGNUM *)0x0,local_68,local_68,local_70,ctx);
                              iVar1 = test_true("test/exptest.c",0xc5,"BN_mod(a, a, m, ctx)",
                                                iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = BN_div((BIGNUM *)0x0,local_60,local_60,local_70,ctx);
                                iVar1 = test_true("test/exptest.c",0xc6,"BN_mod(b, b, m, ctx)",
                                                  iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = BN_mod_exp_mont(r,local_68,local_60,local_70,ctx,
                                                          (BN_MONT_CTX *)0x0);
                                  iVar1 = test_true("test/exptest.c",199,
                                                    "BN_mod_exp_mont(r_mont, a, b, m, ctx, NULL)",
                                                    iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = BN_mod_exp_recp(r_00,local_68,local_60,local_70,ctx);
                                    iVar1 = test_true("test/exptest.c",200,
                                                      "BN_mod_exp_recp(r_recp, a, b, m, ctx)",
                                                      iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = BN_mod_exp_simple(r_01,local_68,local_60,local_70,ctx)
                                      ;
                                      iVar1 = test_true("test/exptest.c",0xc9,
                                                        "BN_mod_exp_simple(r_simple, a, b, m, ctx)",
                                                        iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = BN_mod_exp_mont_consttime
                                                          (rr,local_68,local_60,local_70,ctx,
                                                           (BN_MONT_CTX *)0x0);
                                        iVar1 = test_true("test/exptest.c",0xca,
                                                                                                                    
                                                  "BN_mod_exp_mont_consttime(r_mont_const, a, b, m, ctx, NULL)"
                                                  ,iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = test_BN_eq("test/exptest.c",0xcd,"r_simple",
                                                             "r_mont",r_01,r);
                                          if (((iVar1 == 0) ||
                                              (iVar1 = test_BN_eq("test/exptest.c",0xce,"r_simple",
                                                                  "r_recp",r_01,r_00), iVar1 == 0))
                                             || (iVar1 = test_BN_eq("test/exptest.c",0xcf,"r_simple"
                                                                    ,"r_mont_const",r_01,rr),
                                                iVar1 == 0)) {
                                            iVar1 = BN_cmp(r_01,r);
                                            if (iVar1 != 0) {
                                              test_info("test/exptest.c",0xd1,
                                                        "simple and mont results differ");
                                            }
                                            iVar1 = BN_cmp(r_01,rr);
                                            if (iVar1 != 0) {
                                              test_info("test/exptest.c",0xd3,
                                                        "simple and mont const time results differ")
                                              ;
                                            }
                                            iVar1 = BN_cmp(r_01,r_00);
                                            if (iVar1 != 0) {
                                              test_info("test/exptest.c",0xd5,
                                                        "simple and recp results differ");
                                            }
                                            test_output_bignum(&_LC56,local_68);
                                            test_output_bignum(&_LC57,local_60);
                                            test_output_bignum(&_LC58,local_70);
                                            test_output_bignum("r_simple",r_01);
                                            test_output_bignum("r_recp",r_00);
                                            test_output_bignum("r_mont",r);
                                            test_output_bignum("r_mont_const",rr);
                                            iVar1 = 0;
                                          }
                                          else {
                                            iVar1 = 1;
                                          }
                                          goto LAB_001008a7;
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
                    }
                  }
                  iVar1 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001008a7:
  BN_free(r);
  BN_free(rr);
  BN_free(r_00);
  BN_free(r_01);
  BN_free(local_68);
  BN_free(local_60);
  BN_free(local_70);
  BN_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined8 a_is_zero_mod_one(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = BN_is_zero(param_2);
  if (iVar1 != 0) {
    return 1;
  }
  test_error("test/exptest.c",0x23,"%s failed: a ** 0 mod 1 = r (should be 0)",param_1);
  test_output_bignum(&_LC56,param_3);
  test_output_bignum(&_LC60,param_2);
  return 0;
}



uint test_mod_exp_zero(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *p;
  BIGNUM *r;
  BN_MONT_CTX *in_mont;
  uint uVar4;
  uint local_48;
  
  ctx = BN_CTX_new();
  a = BN_new();
  iVar1 = test_ptr("test/exptest.c",0x37,"m = BN_new()",a);
  if (iVar1 == 0) {
    in_mont = (BN_MONT_CTX *)0x0;
    r = (BIGNUM *)0x0;
    p = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    uVar2 = 0;
  }
  else {
    a_00 = BN_new();
    iVar1 = test_ptr("test/exptest.c",0x38,"a = BN_new()",a_00);
    if (iVar1 == 0) {
      in_mont = (BN_MONT_CTX *)0x0;
      r = (BIGNUM *)0x0;
      p = (BIGNUM *)0x0;
      uVar2 = 0;
    }
    else {
      p = BN_new();
      iVar1 = test_ptr("test/exptest.c",0x39,"p = BN_new()",p);
      if (iVar1 == 0) {
        in_mont = (BN_MONT_CTX *)0x0;
        r = (BIGNUM *)0x0;
        uVar2 = 0;
      }
      else {
        r = BN_new();
        iVar1 = test_ptr("test/exptest.c",0x3a,"r = BN_new()");
        if (iVar1 != 0) {
          BN_set_word(a,1);
          BN_set_word(a_00,1);
          BN_zero_ex(p);
          iVar1 = BN_rand(a_00,0x400,0,0);
          iVar1 = test_true("test/exptest.c",0x41,
                            "BN_rand(a, 1024, BN_RAND_TOP_ONE, BN_RAND_BOTTOM_ANY)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BN_mod_exp(r,a_00,p,a,ctx);
            in_mont = (BN_MONT_CTX *)0x0;
            uVar2 = test_true("test/exptest.c",0x44,"BN_mod_exp(r, a, p, m, ctx)",iVar1 != 0);
            if (uVar2 == 0) goto LAB_00101080;
            iVar1 = BN_is_zero(r);
            if (iVar1 == 0) {
              test_error("test/exptest.c",0x23,"%s failed: a ** 0 mod 1 = r (should be 0)",
                         "BN_mod_exp");
              test_output_bignum(&_LC56,a_00);
              test_output_bignum(&_LC60,r);
            }
            iVar1 = test_true("test/exptest.c",0x47,"a_is_zero_mod_one(\"BN_mod_exp\", r, a)",
                              iVar1 != 0);
            iVar3 = BN_mod_exp_recp(r,a_00,p,a,ctx);
            iVar3 = test_true("test/exptest.c",0x4a,"BN_mod_exp_recp(r, a, p, m, ctx)",iVar3 != 0);
            if (iVar3 != 0) {
              iVar3 = BN_is_zero(r);
              if (iVar3 == 0) {
                test_error("test/exptest.c",0x23,"%s failed: a ** 0 mod 1 = r (should be 0)",
                           "BN_mod_exp_recp");
                test_output_bignum(&_LC56,a_00);
                test_output_bignum(&_LC60,r);
              }
              iVar3 = test_true("test/exptest.c",0x4d,"a_is_zero_mod_one(\"BN_mod_exp_recp\", r, a)"
                                ,iVar3 != 0);
              local_48 = 1;
              if (iVar3 != 0) {
                local_48 = (uint)(iVar1 == 0);
              }
              iVar1 = BN_mod_exp_simple(r,a_00,p,a,ctx);
              iVar1 = test_true("test/exptest.c",0x50,"BN_mod_exp_simple(r, a, p, m, ctx)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = BN_is_zero(r);
                if (iVar1 == 0) {
                  test_error("test/exptest.c",0x23,"%s failed: a ** 0 mod 1 = r (should be 0)",
                             "BN_mod_exp_simple");
                  test_output_bignum(&_LC56,a_00);
                  test_output_bignum(&_LC60,r);
                }
                iVar1 = test_true("test/exptest.c",0x53,
                                  "a_is_zero_mod_one(\"BN_mod_exp_simple\", r, a)",iVar1 != 0);
                uVar2 = 1;
                if (iVar1 != 0) {
                  uVar2 = local_48;
                }
                iVar1 = BN_mod_exp_mont(r,a_00,p,a,ctx,(BN_MONT_CTX *)0x0);
                iVar1 = test_true("test/exptest.c",0x56,"BN_mod_exp_mont(r, a, p, m, ctx, NULL)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = BN_is_zero(r);
                  if (iVar1 == 0) {
                    test_error("test/exptest.c",0x23,"%s failed: a ** 0 mod 1 = r (should be 0)",
                               "BN_mod_exp_mont");
                    test_output_bignum(&_LC56,a_00);
                    test_output_bignum(&_LC60,r);
                  }
                  iVar1 = test_true("test/exptest.c",0x59,
                                    "a_is_zero_mod_one(\"BN_mod_exp_mont\", r, a)",iVar1 != 0);
                  uVar4 = 1;
                  if (iVar1 != 0) {
                    uVar4 = uVar2;
                  }
                  iVar1 = BN_mod_exp_mont_consttime(r,a_00,p,a,ctx,(BN_MONT_CTX *)0x0);
                  iVar1 = test_true("test/exptest.c",0x5c,
                                    "BN_mod_exp_mont_consttime(r, a, p, m, ctx, NULL)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = a_is_zero_mod_one("BN_mod_exp_mont_consttime",r,a_00);
                    iVar1 = test_true("test/exptest.c",0x5f,
                                      "a_is_zero_mod_one(\"BN_mod_exp_mont_consttime\", r, a)",
                                      iVar1 != 0);
                    uVar2 = 1;
                    if (iVar1 != 0) {
                      uVar2 = uVar4;
                    }
                    in_mont = BN_MONT_CTX_new();
                    iVar1 = test_ptr("test/exptest.c",0x62,"mont = BN_MONT_CTX_new()",in_mont);
                    if (iVar1 != 0) {
                      ERR_set_mark();
                      iVar1 = BN_mod_exp_mont_consttime(r,p,a_00,a,ctx,in_mont);
                      iVar1 = test_false("test/exptest.c",0x67,
                                         "BN_mod_exp_mont_consttime(r, p, a, m, ctx, mont)",
                                         iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = BN_mod_exp_mont(r,p,a_00,a,ctx,in_mont);
                        iVar1 = test_false("test/exptest.c",0x69,
                                           "BN_mod_exp_mont(r, p, a, m, ctx, mont)",iVar1 != 0);
                        if (iVar1 != 0) {
                          ERR_pop_to_mark();
                          iVar1 = BN_MONT_CTX_set(in_mont,a,ctx);
                          iVar1 = test_true("test/exptest.c",0x6d,"BN_MONT_CTX_set(mont, m, ctx)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = BN_mod_exp_mont_consttime(r,p,a_00,a,ctx,in_mont);
                            iVar1 = test_true("test/exptest.c",0x71,
                                              "BN_mod_exp_mont_consttime(r, p, a, m, ctx, mont)",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = a_is_zero_mod_one("BN_mod_exp_mont_consttime",r,a_00);
                              iVar1 = test_true("test/exptest.c",0x74,
                                                "a_is_zero_mod_one(\"BN_mod_exp_mont_consttime\", r, a)"
                                                ,iVar1 != 0);
                              uVar4 = 1;
                              if (iVar1 != 0) {
                                uVar4 = uVar2;
                              }
                              iVar1 = BN_mod_exp_mont(r,p,a_00,a,ctx,in_mont);
                              iVar1 = test_true("test/exptest.c",0x77,
                                                "BN_mod_exp_mont(r, p, a, m, ctx, mont)",iVar1 != 0)
                              ;
                              if (iVar1 != 0) {
                                iVar1 = a_is_zero_mod_one("BN_mod_exp_mont",r,a_00);
                                iVar1 = test_true("test/exptest.c",0x7a,
                                                  "a_is_zero_mod_one(\"BN_mod_exp_mont\", r, a)",
                                                  iVar1 != 0);
                                uVar2 = 1;
                                if (iVar1 != 0) {
                                  uVar2 = uVar4;
                                }
                                iVar1 = BN_mod_exp_mont_word(r,1,p,a,ctx,(BN_MONT_CTX *)0x0);
                                iVar1 = test_true("test/exptest.c",0x81,
                                                  "BN_mod_exp_mont_word(r, one_word, p, m, ctx, NULL)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = test_BN_eq_zero("test/exptest.c",0x84,&_LC60,r);
                                  uVar2 = uVar2 ^ 1;
                                  if (iVar1 == 0) {
                                    test_error("test/exptest.c",0x85,
                                               "BN_mod_exp_mont_word failed: 1 ** 0 mod 1 = r (should be 0)"
                                              );
                                    test_output_bignum(&_LC60,r);
                                    uVar2 = 0;
                                  }
                                  goto LAB_00101080;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    uVar2 = 0;
                    goto LAB_00101080;
                  }
                }
              }
            }
          }
        }
        in_mont = (BN_MONT_CTX *)0x0;
        uVar2 = 0;
      }
    }
  }
LAB_00101080:
  BN_free(r);
  BN_free(a_00);
  BN_free(p);
  BN_free(a);
  BN_MONT_CTX_free(in_mont);
  BN_CTX_free(ctx);
  return uVar2;
}



undefined8 setup_tests(void)

{
  add_test("test_mod_exp_zero",test_mod_exp_zero);
  add_all_tests("test_mod_exp",test_mod_exp,200,1);
  add_all_tests("test_mod_exp_x2",0x100000,300,1);
  return 1;
}


