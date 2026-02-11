
BIGNUM * getBN(undefined8 *param_1,undefined8 param_2)

{
  char *str;
  int iVar1;
  int iVar2;
  size_t sVar3;
  BIGNUM *pBVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)((long)param_1 + 0x24);
  local_38 = (BIGNUM *)0x0;
  if (0 < iVar2) {
    puVar5 = param_1 + 5;
    do {
      iVar1 = OPENSSL_strcasecmp(*puVar5,param_2);
      if (iVar1 == 0) {
        str = (char *)puVar5[1];
        if (str != (char *)0x0) {
          local_38 = (BIGNUM *)0x0;
          iVar2 = BN_hex2bn(&local_38,str);
          sVar3 = strlen(str);
          pBVar4 = local_38;
          if (iVar2 != (int)sVar3) {
            test_error("test/bntest.c",0x6b,"Could not decode \'%s\'",str);
            pBVar4 = (BIGNUM *)0x0;
          }
          goto LAB_00100095;
        }
        break;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != param_1 + (ulong)(iVar2 - 1) * 2 + 7);
  }
  test_error("test/bntest.c",0x66,"%s:%d: Can\'t find %s",*param_1,
             *(undefined4 *)((long)param_1 + 0x14),param_2);
  pBVar4 = (BIGNUM *)0x0;
LAB_00100095:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pBVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_rand_range(void)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *ptr;
  BIGNUM *a;
  BIGNUM *rnd;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  ulong w;
  uint *puVar8;
  double dVar9;
  double dVar10;
  long local_70;
  int local_3c;
  
  puVar8 = &rand_range_cases;
  local_70 = 0;
  local_3c = 0;
  do {
    uVar2 = *puVar8;
    w = (ulong)uVar2;
    uVar3 = puVar8[1];
    dVar1 = *(double *)(puVar8 + 2);
    ptr = (ulong *)CRYPTO_zalloc(w * 8,"test/bntest.c",0x936);
    iVar4 = test_ptr("test/bntest.c",0x936,"counts = OPENSSL_zalloc(sizeof(*counts) * range)",ptr);
    local_70 = local_70 + 1;
    if (iVar4 == 0) {
      rnd = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
    }
    else {
      a = BN_new();
      rnd = (BIGNUM *)0x0;
      iVar4 = test_ptr("test/bntest.c",0x937,"rng = BN_new()",a);
      if (iVar4 != 0) {
        rnd = BN_new();
        iVar4 = test_ptr("test/bntest.c",0x938,"val = BN_new()",rnd);
        if (iVar4 != 0) {
          iVar4 = BN_set_word(a,w);
          iVar4 = test_true("test/bntest.c",0x939,"BN_set_word(rng, range)",iVar4 != 0);
          if (iVar4 != 0) {
            if (uVar3 != 0) {
              uVar7 = 0;
              do {
                iVar4 = BN_rand_range(rnd,a);
                iVar4 = test_true("test/bntest.c",0x93c,"BN_rand_range(val, rng)",iVar4 != 0);
                if (iVar4 == 0) goto LAB_001002c0;
                uVar5 = BN_get_word(rnd);
                iVar4 = test_uint_lt("test/bntest.c",0x93d,"v = (unsigned int)BN_get_word(val)",
                                     "range",uVar5 & 0xffffffff,uVar2);
                if (iVar4 == 0) goto LAB_001002c0;
                uVar7 = uVar7 + 1;
                ptr[uVar5 & 0xffffffff] = ptr[uVar5 & 0xffffffff] + 1;
              } while (uVar3 != uVar7);
            }
            dVar10 = 0.0;
            puVar6 = ptr;
            if (uVar2 != 0) {
              do {
                dVar9 = (double)*puVar6 - (double)uVar3 / (double)w;
                puVar6 = puVar6 + 1;
                dVar10 = dVar10 + dVar9 * dVar9;
              } while (ptr + w != puVar6);
            }
            dVar10 = dVar10 / ((double)uVar3 / (double)w);
            if (dVar1 < dVar10) {
              test_info(dVar10,dVar1,"test/bntest.c",0x949,"Chi^2 test negative %.4f > %4.f");
              test_note("test case %zu  range %u  iterations %u",local_70,uVar2,uVar3);
            }
            else {
              local_3c = local_3c + 1;
            }
          }
        }
      }
    }
LAB_001002c0:
    puVar8 = puVar8 + 4;
    BN_free(a);
    BN_free(rnd);
    CRYPTO_free(ptr);
    if (local_70 == 0x25) {
      iVar4 = test_int_ge("test/bntest.c",0x95e,"n_success","binomial_critical",local_3c,0x1d);
      if (iVar4 == 0) {
        test_note("This test is expected to fail by chance 0.01%% of the time.");
      }
      return iVar4 != 0;
    }
  } while( true );
}



uint test_mod_exp2_mont(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *m;
  BIGNUM *local_48;
  
  r = BN_new();
  iVar1 = test_ptr("test/bntest.c",0xc46,"exp_result = BN_new()",r);
  if (iVar1 == 0) {
    local_48 = (BIGNUM *)0x0;
    m = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    uVar2 = 0;
  }
  else {
    a = BN_new();
    iVar1 = test_ptr("test/bntest.c",0xc47,"exp_a1 = BN_new()",a);
    if (iVar1 == 0) {
      local_48 = (BIGNUM *)0x0;
      m = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      uVar2 = 0;
    }
    else {
      a_00 = BN_new();
      iVar1 = test_ptr("test/bntest.c",0xc48,"exp_p1 = BN_new()",a_00);
      if (iVar1 == 0) {
        local_48 = (BIGNUM *)0x0;
        m = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        uVar2 = 0;
      }
      else {
        a_01 = BN_new();
        iVar1 = test_ptr("test/bntest.c",0xc49,"exp_a2 = BN_new()",a_01);
        if (iVar1 == 0) {
          local_48 = (BIGNUM *)0x0;
          m = (BIGNUM *)0x0;
          uVar2 = 0;
        }
        else {
          local_48 = BN_new();
          m = (BIGNUM *)0x0;
          uVar2 = test_ptr("test/bntest.c",0xc4a,"exp_p2 = BN_new()",local_48);
          if (uVar2 != 0) {
            m = BN_new();
            uVar2 = test_ptr("test/bntest.c",0xc4b,"exp_m = BN_new()",m);
            if (uVar2 != 0) {
              iVar1 = BN_set_word(a,1);
              iVar1 = test_true("test/bntest.c",0xc4e,"BN_one(exp_a1)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = BN_set_word(a_00,1);
                iVar1 = test_true("test/bntest.c",0xc4f,"BN_one(exp_p1)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = BN_set_word(a_01,1);
                  iVar1 = test_true("test/bntest.c",0xc50,"BN_one(exp_a2)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = BN_set_word(local_48,1);
                    iVar1 = test_true("test/bntest.c",0xc51,"BN_one(exp_p2)",iVar1 != 0);
                    if (iVar1 != 0) {
                      BN_zero_ex(m);
                      iVar1 = BN_mod_exp2_mont(r,a,a_00,a_01,local_48,m,ctx,(BN_MONT_CTX *)0x0);
                      iVar1 = test_int_eq("test/bntest.c",0xc57,
                                          "BN_mod_exp2_mont(exp_result, exp_a1, exp_p1, exp_a2, exp_p2, exp_m, ctx, NULL)"
                                          ,&_LC26,iVar1,0);
                      uVar2 = (uint)(iVar1 != 0);
                      goto LAB_0010049f;
                    }
                  }
                }
              }
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
LAB_0010049f:
  BN_free(r);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(local_48);
  BN_free(m);
  return uVar2;
}



uint test_mod_exp_consttime(int param_1)

{
  char *__s;
  int iVar1;
  uint uVar2;
  BIGNUM *r;
  long lVar3;
  char *__s_00;
  size_t sVar4;
  size_t sVar5;
  long in_FS_OFFSET;
  BIGNUM *local_48;
  BIGNUM *local_40;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  local_40 = (BIGNUM *)0x0;
  local_38 = (BIGNUM *)0x0;
  r = BN_new();
  iVar1 = test_ptr("test/bntest.c",0xc1d,"result = BN_new()",r);
  if (iVar1 != 0) {
    lVar3 = (long)param_1 * 0x20;
    iVar1 = BN_dec2bn(&local_48,*(char **)(ModExpTests + lVar3));
    iVar1 = test_true("test/bntest.c",0xc1e,"BN_dec2bn(&base, test->base)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_dec2bn(&local_40,*(char **)(ModExpTests + lVar3 + 8));
      iVar1 = test_true("test/bntest.c",0xc1f,"BN_dec2bn(&exponent, test->exp)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BN_dec2bn(&local_38,*(char **)(ModExpTests + lVar3 + 0x10));
        iVar1 = test_true("test/bntest.c",0xc20,"BN_dec2bn(&modulo, test->mod)",iVar1 != 0);
        if (iVar1 != 0) {
          BN_set_flags(local_48,4);
          BN_set_flags(local_40,4);
          BN_set_flags(local_38,4);
          iVar1 = BN_mod_exp(r,local_48,local_40,local_38,ctx);
          iVar1 = test_int_eq("test/bntest.c",0xc27,
                              "BN_mod_exp(result, base, exponent, modulo, ctx)",&_LC32,iVar1,1);
          if (iVar1 != 0) {
            __s_00 = BN_bn2dec(r);
            uVar2 = test_ptr("test/bntest.c",0xc2a,"s = BN_bn2dec(result)",__s_00);
            if (uVar2 != 0) {
              __s = *(char **)(ModExpTests + lVar3 + 0x18);
              sVar4 = strlen(__s);
              sVar5 = strlen(__s_00);
              iVar1 = test_mem_eq("test/bntest.c",0xc2d,&_LC36,"test->res",__s_00,sVar5,__s,sVar4);
              uVar2 = (uint)(iVar1 != 0);
            }
            goto LAB_0010078d;
          }
        }
      }
    }
  }
  __s_00 = (char *)0x0;
  uVar2 = 0;
LAB_0010078d:
  CRYPTO_free(__s_00);
  BN_free(r);
  BN_free(local_48);
  BN_free(local_40);
  BN_free(local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_mod_exp(int param_1)

{
  char *__s;
  int iVar1;
  uint uVar2;
  BIGNUM *r;
  long lVar3;
  char *__s_00;
  size_t sVar4;
  size_t sVar5;
  long in_FS_OFFSET;
  BIGNUM *local_48;
  BIGNUM *local_40;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  local_40 = (BIGNUM *)0x0;
  local_38 = (BIGNUM *)0x0;
  r = BN_new();
  iVar1 = test_ptr("test/bntest.c",0xbfb,"result = BN_new()",r);
  if (iVar1 != 0) {
    lVar3 = (long)param_1 * 0x20;
    iVar1 = BN_dec2bn(&local_48,*(char **)(ModExpTests + lVar3));
    iVar1 = test_true("test/bntest.c",0xbfc,"BN_dec2bn(&base, test->base)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_dec2bn(&local_40,*(char **)(ModExpTests + lVar3 + 8));
      iVar1 = test_true("test/bntest.c",0xbfd,"BN_dec2bn(&exponent, test->exp)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BN_dec2bn(&local_38,*(char **)(ModExpTests + lVar3 + 0x10));
        iVar1 = test_true("test/bntest.c",0xbfe,"BN_dec2bn(&modulo, test->mod)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = BN_mod_exp(r,local_48,local_40,local_38,ctx);
          iVar1 = test_int_eq("test/bntest.c",0xc01,
                              "BN_mod_exp(result, base, exponent, modulo, ctx)",&_LC32,iVar1,1);
          if (iVar1 != 0) {
            __s_00 = BN_bn2dec(r);
            uVar2 = test_ptr("test/bntest.c",0xc04,"s = BN_bn2dec(result)",__s_00);
            if (uVar2 != 0) {
              __s = *(char **)(ModExpTests + lVar3 + 0x18);
              sVar4 = strlen(__s);
              sVar5 = strlen(__s_00);
              iVar1 = test_mem_eq("test/bntest.c",0xc07,&_LC36,"test->res",__s_00,sVar5,__s,sVar4);
              uVar2 = (uint)(iVar1 != 0);
            }
            goto LAB_001009fd;
          }
        }
      }
    }
  }
  __s_00 = (char *)0x0;
  uVar2 = 0;
LAB_001009fd:
  CRYPTO_free(__s_00);
  BN_free(r);
  BN_free(local_48);
  BN_free(local_40);
  BN_free(local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_coprime(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  
  a_00 = (BIGNUM *)0x0;
  a = BN_new();
  uVar1 = test_ptr("test/bntest.c",0xaf7,"a = BN_new()",a);
  if (uVar1 != 0) {
    a_00 = BN_new();
    iVar2 = test_ptr("test/bntest.c",0xaf8,"b = BN_new()",a_00);
    if (iVar2 != 0) {
      iVar2 = BN_set_word(a,0x42);
      iVar2 = test_true("test/bntest.c",0xaf9,"BN_set_word(a, 66)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = BN_set_word(a_00,99);
        iVar2 = test_true("test/bntest.c",0xafa,"BN_set_word(b, 99)",iVar2 != 0);
        if (iVar2 != 0) {
          uVar3 = BN_are_coprime(a,a_00,ctx);
          iVar2 = test_int_eq("test/bntest.c",0xafb,"BN_are_coprime(a, b, ctx)",&_LC26,uVar3,0);
          if (iVar2 != 0) {
            uVar3 = BN_are_coprime(a_00,a,ctx);
            iVar2 = test_int_eq("test/bntest.c",0xafc,"BN_are_coprime(b, a, ctx)",&_LC26,uVar3,0);
            if (iVar2 != 0) {
              iVar2 = BN_set_word(a,0x43);
              iVar2 = test_true("test/bntest.c",0xafd,"BN_set_word(a, 67)",iVar2 != 0);
              if (iVar2 != 0) {
                uVar3 = BN_are_coprime(a,a_00,ctx);
                iVar2 = test_int_eq("test/bntest.c",0xafe,"BN_are_coprime(a, b, ctx)",&_LC32,uVar3,1
                                   );
                if (iVar2 != 0) {
                  uVar3 = BN_are_coprime(a_00,a,ctx);
                  iVar2 = test_int_eq("test/bntest.c",0xaff,"BN_are_coprime(b, a, ctx)",&_LC32,uVar3
                                      ,1);
                  uVar1 = (uint)(iVar2 != 0);
                  goto LAB_00100c11;
                }
              }
            }
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_00100c11:
  BN_free(a);
  BN_free(a_00);
  return uVar1;
}



int test_gcd_prime(void)

{
  int iVar1;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *r;
  int iVar2;
  
  ret = BN_new();
  iVar1 = test_ptr("test/bntest.c",0xb0a,"a = BN_new()",ret);
  if (iVar1 == 0) {
    iVar1 = 0;
    r = (BIGNUM *)0x0;
    ret_00 = (BIGNUM *)0x0;
  }
  else {
    ret_00 = BN_new();
    r = (BIGNUM *)0x0;
    iVar1 = test_ptr("test/bntest.c",0xb0b,"b = BN_new()",ret_00);
    if (iVar1 != 0) {
      r = BN_new();
      iVar1 = test_ptr("test/bntest.c",0xb0c,"gcd = BN_new()");
      if (iVar1 != 0) {
        iVar2 = 0x14;
        BN_generate_prime_ex(ret,0x400,0,(BIGNUM *)0x0,(BIGNUM *)0x0,(BN_GENCB *)0x0);
        iVar1 = test_true("test/bntest.c",0xb0f,"BN_generate_prime_ex(a, 1024, 0, NULL, NULL, NULL)"
                         );
        if (iVar1 != 0) {
          do {
            iVar1 = BN_generate_prime_ex(ret_00,0x400,0,(BIGNUM *)0x0,(BIGNUM *)0x0,(BN_GENCB *)0x0)
            ;
            iVar1 = test_true("test/bntest.c",0xb12,
                              "BN_generate_prime_ex(b, 1024, 0, NULL, NULL, NULL)",iVar1 != 0);
            if (iVar1 == 0) goto LAB_00100e9c;
            iVar1 = BN_gcd(r,ret,ret_00,ctx);
            iVar1 = test_true("test/bntest.c",0xb14,"BN_gcd(gcd, a, b, ctx)",iVar1 != 0);
            if (iVar1 == 0) goto LAB_00100e24;
            iVar1 = BN_is_one(r);
            iVar1 = test_true("test/bntest.c",0xb15,"BN_is_one(gcd)",iVar1 != 0);
            if (iVar1 == 0) goto LAB_00100e9c;
            BN_are_coprime(ret,ret_00,ctx);
            iVar1 = test_true("test/bntest.c",0xb16,"BN_are_coprime(a, b, ctx)");
            if (iVar1 == 0) goto LAB_00100e9c;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          iVar1 = 1;
          goto LAB_00100e24;
        }
      }
LAB_00100e9c:
      iVar1 = 0;
    }
  }
LAB_00100e24:
  BN_free(ret);
  BN_free(ret_00);
  BN_free(r);
  return iVar1;
}



undefined8 test_not_prime(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  BIGNUM *a;
  undefined8 uVar4;
  int iVar5;
  
  a = BN_new();
  iVar1 = test_ptr("test/bntest.c",0xa8d,"r = BN_new()",a);
  if (iVar1 != 0) {
    iVar5 = 2;
    iVar1 = *(int *)(not_primes + (long)param_1 * 4);
    while( true ) {
      iVar2 = BN_set_word(a,(long)iVar1);
      iVar2 = test_true("test/bntest.c",0xa91,"BN_set_word(r, not_primes[i])",iVar2 != 0);
      if (iVar2 == 0) break;
      uVar3 = BN_check_prime(a,ctx,0);
      iVar2 = test_int_eq("test/bntest.c",0xa92,"BN_check_prime(r, ctx, NULL)",&_LC26,uVar3,0);
      if (iVar2 == 0) break;
      if (iVar5 == 1) {
        uVar4 = 1;
        goto LAB_001010b2;
      }
      iVar5 = 1;
    }
  }
  uVar4 = 0;
LAB_001010b2:
  BN_free(a);
  return uVar4;
}



undefined8 test_is_prime(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  BIGNUM *a;
  undefined8 uVar4;
  int iVar5;
  
  a = BN_new();
  iVar1 = test_ptr("test/bntest.c",0xa75,"r = BN_new()",a);
  if (iVar1 != 0) {
    iVar5 = 2;
    iVar1 = *(int *)(primes + (long)param_1 * 4);
    while( true ) {
      iVar2 = BN_set_word(a,(long)iVar1);
      iVar2 = test_true("test/bntest.c",0xa79,"BN_set_word(r, primes[i])",iVar2 != 0);
      if (iVar2 == 0) break;
      uVar3 = BN_check_prime(a,ctx,0);
      iVar2 = test_int_eq("test/bntest.c",0xa7a,"BN_check_prime(r, ctx, NULL)",&_LC32,uVar3,1);
      if (iVar2 == 0) break;
      if (iVar5 == 1) {
        uVar4 = 1;
        goto LAB_001011b2;
      }
      iVar5 = 1;
    }
  }
  uVar4 = 0;
LAB_001011b2:
  BN_free(a);
  return uVar4;
}



int test_gf2m_modsolvequad(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  BIGNUM *rnd;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  BIGNUM *local_80;
  BIGNUM *local_78;
  int local_6c;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  rnd = BN_new();
  iVar2 = test_ptr("test/bntest.c",0x441,"a = BN_new()",rnd);
  if (iVar2 == 0) {
    iVar2 = 0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    local_78 = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
  }
  else {
    a = BN_new();
    local_58._0_8_ = a;
    iVar2 = test_ptr("test/bntest.c",0x442,"b[0] = BN_new()",a);
    if (iVar2 == 0) {
      local_78 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      local_80 = (BIGNUM *)0x0;
      iVar2 = 0;
    }
    else {
      a_00 = BN_new();
      local_58._8_8_ = a_00;
      iVar2 = test_ptr("test/bntest.c",0x443,"b[1] = BN_new()",a_00);
      if (iVar2 == 0) {
        local_78 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        local_80 = (BIGNUM *)0x0;
        iVar2 = 0;
      }
      else {
        a_01 = BN_new();
        iVar2 = test_ptr("test/bntest.c",0x444,"c = BN_new()",a_01);
        if (iVar2 == 0) {
          local_78 = (BIGNUM *)0x0;
          local_80 = (BIGNUM *)0x0;
          iVar2 = 0;
        }
        else {
          local_80 = BN_new();
          iVar2 = test_ptr("test/bntest.c",0x445,"d = BN_new()",local_80);
          local_78 = (BIGNUM *)0x0;
          if (iVar2 != 0) {
            local_78 = BN_new();
            iVar2 = test_ptr("test/bntest.c",0x446,"e = BN_new()",local_78);
            if (iVar2 != 0) {
              iVar2 = BN_GF2m_arr2poly(p0,a);
              iVar2 = test_true("test/bntest.c",0x449,"BN_GF2m_arr2poly(p0, b[0])",iVar2 != 0);
              if (iVar2 != 0) {
                BN_GF2m_arr2poly(p1,a_00);
                iVar2 = test_true("test/bntest.c",0x44a,"BN_GF2m_arr2poly(p1, b[1])");
                if (iVar2 != 0) {
                  local_6c = 0;
                  iVar2 = 100;
                  do {
                    iVar3 = BN_bntest_rand(rnd,0x200,0,0);
                    iVar3 = test_true("test/bntest.c",0x44e,"BN_bntest_rand(a, 512, 0, 0)",
                                      iVar3 != 0);
                    if (iVar3 == 0) goto LAB_00101520;
                    puVar4 = (undefined8 *)local_58;
                    do {
                      uVar1 = *puVar4;
                      iVar3 = BN_GF2m_mod_solve_quad(a_01,rnd,uVar1);
                      if (iVar3 != 0) {
                        local_6c = local_6c + 1;
                        iVar3 = BN_GF2m_mod_sqr(local_80,a_01,uVar1,ctx);
                        iVar3 = test_true("test/bntest.c",0x454,"BN_GF2m_mod_sqr(d, c, b[j], ctx)",
                                          iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00101520;
                        iVar3 = BN_GF2m_add(local_80,a_01);
                        iVar3 = test_true("test/bntest.c",0x455,"BN_GF2m_add(d, c, d)",iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00101520;
                        iVar3 = BN_GF2m_mod(local_78,rnd,uVar1);
                        iVar3 = test_true("test/bntest.c",0x456,"BN_GF2m_mod(e, a, b[j])",iVar3 != 0
                                         );
                        if (iVar3 == 0) goto LAB_00101520;
                        iVar3 = BN_GF2m_add(local_78,local_78,local_80);
                        iVar3 = test_true("test/bntest.c",0x457,"BN_GF2m_add(e, e, d)",iVar3 != 0);
                        if ((iVar3 == 0) ||
                           (iVar3 = test_BN_eq_zero("test/bntest.c",0x45c,&_LC65), iVar3 == 0))
                        goto LAB_00101520;
                      }
                      puVar4 = puVar4 + 1;
                    } while (&local_48 != puVar4);
                    iVar2 = iVar2 + -1;
                  } while (iVar2 != 0);
                  iVar3 = test_int_ge("test/bntest.c",0x461,&_LC36,&_LC26,local_6c,0);
                  iVar2 = 1;
                  if (iVar3 != 0) goto LAB_00101252;
                  test_info("test/bntest.c",0x462,"%d tests found no roots; probably an error",100);
                }
              }
            }
LAB_00101520:
            iVar2 = 0;
          }
        }
      }
    }
  }
LAB_00101252:
  BN_free(rnd);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(local_80);
  BN_free(local_78);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int test_gf2m_mod(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  BIGNUM *rnd;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  BIGNUM *local_88;
  BIGNUM *local_80;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  rnd = BN_new();
  iVar2 = test_ptr("test/bntest.c",0x306,"a = BN_new()",rnd);
  if (iVar2 == 0) {
    local_88 = (BIGNUM *)0x0;
    iVar2 = 0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
  }
  else {
    a = BN_new();
    local_58._0_8_ = a;
    iVar2 = test_ptr("test/bntest.c",0x307,"b[0] = BN_new()",a);
    if (iVar2 == 0) {
      local_88 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      local_80 = (BIGNUM *)0x0;
      iVar2 = 0;
    }
    else {
      a_00 = BN_new();
      local_58._8_8_ = a_00;
      iVar2 = test_ptr("test/bntest.c",0x308,"b[1] = BN_new()",a_00);
      if (iVar2 == 0) {
        local_88 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        local_80 = (BIGNUM *)0x0;
        iVar2 = 0;
      }
      else {
        a_01 = BN_new();
        iVar2 = test_ptr("test/bntest.c",0x309,"c = BN_new()",a_01);
        if (iVar2 == 0) {
          local_88 = (BIGNUM *)0x0;
          local_80 = (BIGNUM *)0x0;
          iVar2 = 0;
        }
        else {
          local_80 = BN_new();
          iVar2 = test_ptr("test/bntest.c",0x30a,"d = BN_new()",local_80);
          local_88 = (BIGNUM *)0x0;
          if (iVar2 != 0) {
            local_88 = BN_new();
            iVar2 = test_ptr("test/bntest.c",0x30b,"e = BN_new()",local_88);
            if (iVar2 != 0) {
              iVar2 = BN_GF2m_arr2poly(p0,a);
              iVar2 = test_true("test/bntest.c",0x30e,"BN_GF2m_arr2poly(p0, b[0])",iVar2 != 0);
              if (iVar2 != 0) {
                BN_GF2m_arr2poly(p1,a_00);
                iVar2 = test_true("test/bntest.c",0x30f,"BN_GF2m_arr2poly(p1, b[1])");
                if (iVar2 != 0) {
                  iVar2 = 100;
                  do {
                    iVar3 = BN_bntest_rand(rnd,0x400,0,0);
                    iVar3 = test_true("test/bntest.c",0x313,"BN_bntest_rand(a, 1024, 0, 0)",
                                      iVar3 != 0);
                    if (iVar3 == 0) goto LAB_00101a20;
                    puVar4 = (undefined8 *)local_58;
                    do {
                      uVar1 = *puVar4;
                      iVar3 = BN_GF2m_mod(a_01,rnd,uVar1);
                      iVar3 = test_true("test/bntest.c",0x316,"BN_GF2m_mod(c, a, b[j])",iVar3 != 0);
                      if (iVar3 == 0) goto LAB_00101a20;
                      iVar3 = BN_GF2m_add(local_80,rnd,a_01);
                      iVar3 = test_true("test/bntest.c",0x317,"BN_GF2m_add(d, a, c)",iVar3 != 0);
                      if (iVar3 == 0) goto LAB_00101a20;
                      iVar3 = BN_GF2m_mod(local_88,local_80,uVar1);
                      iVar3 = test_true("test/bntest.c",0x318,"BN_GF2m_mod(e, d, b[j])",iVar3 != 0);
                      if ((iVar3 == 0) ||
                         (iVar3 = test_BN_eq_zero("test/bntest.c",0x31a,&_LC65), iVar3 == 0))
                      goto LAB_00101a20;
                      puVar4 = puVar4 + 1;
                    } while (&local_48 != puVar4);
                    iVar2 = iVar2 + -1;
                  } while (iVar2 != 0);
                  iVar2 = 1;
                  goto LAB_001016d1;
                }
              }
            }
LAB_00101a20:
            iVar2 = 0;
          }
        }
      }
    }
  }
LAB_001016d1:
  BN_free(rnd);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(local_80);
  BN_free(local_88);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int test_gf2m_modsqrt(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  BIGNUM *rnd;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  BIGNUM *local_90;
  BIGNUM *local_88;
  BIGNUM *local_80;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  rnd = BN_new();
  iVar2 = test_ptr("test/bntest.c",0x414,"a = BN_new()",rnd);
  if (iVar2 == 0) {
    local_90 = (BIGNUM *)0x0;
    iVar2 = 0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_88 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
  }
  else {
    a = BN_new();
    local_58._0_8_ = a;
    iVar2 = test_ptr("test/bntest.c",0x415,"b[0] = BN_new()",a);
    if (iVar2 == 0) {
      local_90 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      local_88 = (BIGNUM *)0x0;
      local_80 = (BIGNUM *)0x0;
      iVar2 = 0;
    }
    else {
      a_00 = BN_new();
      local_58._8_8_ = a_00;
      iVar2 = test_ptr("test/bntest.c",0x416,"b[1] = BN_new()",a_00);
      if (iVar2 == 0) {
        local_90 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        local_88 = (BIGNUM *)0x0;
        local_80 = (BIGNUM *)0x0;
        iVar2 = 0;
      }
      else {
        a_01 = BN_new();
        iVar2 = test_ptr("test/bntest.c",0x417,"c = BN_new()",a_01);
        if (iVar2 == 0) {
          local_90 = (BIGNUM *)0x0;
          local_88 = (BIGNUM *)0x0;
          local_80 = (BIGNUM *)0x0;
          iVar2 = 0;
        }
        else {
          local_80 = BN_new();
          iVar2 = test_ptr("test/bntest.c",0x418,"d = BN_new()",local_80);
          if (iVar2 == 0) {
            local_90 = (BIGNUM *)0x0;
            local_88 = (BIGNUM *)0x0;
            iVar2 = 0;
          }
          else {
            local_88 = BN_new();
            iVar2 = test_ptr("test/bntest.c",0x419,"e = BN_new()",local_88);
            local_90 = (BIGNUM *)0x0;
            if (iVar2 != 0) {
              local_90 = BN_new();
              iVar2 = test_ptr("test/bntest.c",0x41a,"f = BN_new()",local_90);
              if (iVar2 != 0) {
                iVar2 = BN_GF2m_arr2poly(p0,a);
                iVar2 = test_true("test/bntest.c",0x41d,"BN_GF2m_arr2poly(p0, b[0])",iVar2 != 0);
                if (iVar2 != 0) {
                  BN_GF2m_arr2poly(p1,a_00);
                  iVar2 = test_true("test/bntest.c",0x41e,"BN_GF2m_arr2poly(p1, b[1])");
                  if (iVar2 != 0) {
                    iVar2 = 100;
                    do {
                      iVar3 = BN_bntest_rand(rnd,0x200,0,0);
                      iVar3 = test_true("test/bntest.c",0x422,"BN_bntest_rand(a, 512, 0, 0)",
                                        iVar3 != 0);
                      if (iVar3 == 0) goto LAB_00101eb0;
                      puVar4 = (undefined8 *)local_58;
                      do {
                        uVar1 = *puVar4;
                        iVar3 = BN_GF2m_mod(a_01,rnd,uVar1);
                        iVar3 = test_true("test/bntest.c",0x426,"BN_GF2m_mod(c, a, b[j])",iVar3 != 0
                                         );
                        if (iVar3 == 0) goto LAB_00101eb0;
                        iVar3 = BN_GF2m_mod_sqrt(local_80,rnd,uVar1,ctx);
                        iVar3 = test_true("test/bntest.c",0x427,"BN_GF2m_mod_sqrt(d, a, b[j], ctx)",
                                          iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00101eb0;
                        iVar3 = BN_GF2m_mod_sqr(local_88,local_80,uVar1,ctx);
                        iVar3 = test_true("test/bntest.c",0x428,"BN_GF2m_mod_sqr(e, d, b[j], ctx)",
                                          iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00101eb0;
                        iVar3 = BN_GF2m_add(local_90,a_01,local_88);
                        iVar3 = test_true("test/bntest.c",0x429,"BN_GF2m_add(f, c, e)",iVar3 != 0);
                        if ((iVar3 == 0) ||
                           (iVar3 = test_BN_eq_zero("test/bntest.c",0x42b,&_LC75), iVar3 == 0))
                        goto LAB_00101eb0;
                        puVar4 = puVar4 + 1;
                      } while (&local_48 != puVar4);
                      iVar2 = iVar2 + -1;
                    } while (iVar2 != 0);
                    iVar2 = 1;
                    goto LAB_00101aae;
                  }
                }
              }
LAB_00101eb0:
              iVar2 = 0;
            }
          }
        }
      }
    }
  }
LAB_00101aae:
  BN_free(rnd);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(local_80);
  BN_free(local_88);
  BN_free(local_90);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int test_gf2m_modexp(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  BIGNUM *rnd;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *r;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  BIGNUM *local_90;
  BIGNUM *local_88;
  BIGNUM *local_80;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  rnd = BN_new();
  iVar2 = test_ptr("test/bntest.c",0x3e4,"a = BN_new()",rnd);
  if (iVar2 == 0) {
    local_80 = (BIGNUM *)0x0;
    iVar2 = 0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_88 = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    local_90 = (BIGNUM *)0x0;
  }
  else {
    a = BN_new();
    local_58._0_8_ = a;
    iVar2 = test_ptr("test/bntest.c",0x3e5,"b[0] = BN_new()",a);
    if (iVar2 == 0) {
      local_80 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      r = (BIGNUM *)0x0;
      local_88 = (BIGNUM *)0x0;
      local_90 = (BIGNUM *)0x0;
      iVar2 = 0;
    }
    else {
      a_00 = BN_new();
      local_58._8_8_ = a_00;
      iVar2 = test_ptr("test/bntest.c",0x3e6,"b[1] = BN_new()",a_00);
      if (iVar2 == 0) {
        local_80 = (BIGNUM *)0x0;
        r = (BIGNUM *)0x0;
        local_88 = (BIGNUM *)0x0;
        local_90 = (BIGNUM *)0x0;
        iVar2 = 0;
      }
      else {
        local_90 = BN_new();
        iVar2 = test_ptr("test/bntest.c",999,"c = BN_new()",local_90);
        if (iVar2 == 0) {
          local_80 = (BIGNUM *)0x0;
          r = (BIGNUM *)0x0;
          local_88 = (BIGNUM *)0x0;
          iVar2 = 0;
        }
        else {
          local_88 = BN_new();
          iVar2 = test_ptr("test/bntest.c",1000,"d = BN_new()",local_88);
          if (iVar2 == 0) {
            local_80 = (BIGNUM *)0x0;
            r = (BIGNUM *)0x0;
            iVar2 = 0;
          }
          else {
            local_80 = BN_new();
            r = (BIGNUM *)0x0;
            iVar2 = test_ptr("test/bntest.c",0x3e9,"e = BN_new()",local_80);
            if (iVar2 != 0) {
              r = BN_new();
              iVar2 = test_ptr("test/bntest.c",0x3ea,"f = BN_new()",r);
              if (iVar2 != 0) {
                iVar2 = BN_GF2m_arr2poly(p0,a);
                iVar2 = test_true("test/bntest.c",0x3ed,"BN_GF2m_arr2poly(p0, b[0])",iVar2 != 0);
                if (iVar2 != 0) {
                  BN_GF2m_arr2poly(p1,a_00);
                  iVar2 = test_true("test/bntest.c",0x3ee,"BN_GF2m_arr2poly(p1, b[1])");
                  if (iVar2 != 0) {
                    iVar2 = 100;
                    do {
                      BN_bntest_rand(rnd,0x200,0,0);
                      iVar3 = test_true("test/bntest.c",0x3f2,"BN_bntest_rand(a, 512, 0, 0)");
                      if (iVar3 == 0) goto LAB_00102410;
                      BN_bntest_rand(local_90,0x200,0,0);
                      iVar3 = test_true("test/bntest.c",0x3f3,"BN_bntest_rand(c, 512, 0, 0)");
                      if (iVar3 == 0) goto LAB_00102410;
                      iVar3 = BN_bntest_rand(local_88,0x200,0,0);
                      iVar3 = test_true("test/bntest.c",0x3f4,"BN_bntest_rand(d, 512, 0, 0)",
                                        iVar3 != 0);
                      if (iVar3 == 0) goto LAB_00102410;
                      puVar4 = (undefined8 *)local_58;
                      do {
                        uVar1 = *puVar4;
                        iVar3 = BN_GF2m_mod_exp(local_80,rnd,local_90,uVar1,ctx);
                        iVar3 = test_true("test/bntest.c",0x3f7,
                                          "BN_GF2m_mod_exp(e, a, c, b[j], ctx)",iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00102410;
                        iVar3 = BN_GF2m_mod_exp(r,rnd,local_88,uVar1,ctx);
                        iVar3 = test_true("test/bntest.c",0x3f8,
                                          "BN_GF2m_mod_exp(f, a, d, b[j], ctx)",iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00102410;
                        iVar3 = BN_GF2m_mod_mul(local_80,local_80,r,uVar1,ctx);
                        iVar3 = test_true("test/bntest.c",0x3f9,
                                          "BN_GF2m_mod_mul(e, e, f, b[j], ctx)",iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00102410;
                        iVar3 = BN_add(r,local_90,local_88);
                        iVar3 = test_true("test/bntest.c",0x3fa,"BN_add(f, c, d)",iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00102410;
                        iVar3 = BN_GF2m_mod_exp(r,rnd,r,uVar1,ctx);
                        iVar3 = test_true("test/bntest.c",0x3fb,
                                          "BN_GF2m_mod_exp(f, a, f, b[j], ctx)",iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00102410;
                        iVar3 = BN_GF2m_add(r,local_80,r);
                        iVar3 = test_true("test/bntest.c",0x3fc,"BN_GF2m_add(f, e, f)",iVar3 != 0);
                        if ((iVar3 == 0) ||
                           (iVar3 = test_BN_eq_zero("test/bntest.c",0x3fe,&_LC75), iVar3 == 0))
                        goto LAB_00102410;
                        puVar4 = puVar4 + 1;
                      } while (&local_48 != puVar4);
                      iVar2 = iVar2 + -1;
                    } while (iVar2 != 0);
                    iVar2 = 1;
                    goto LAB_00101f3e;
                  }
                }
              }
LAB_00102410:
              iVar2 = 0;
            }
          }
        }
      }
    }
  }
LAB_00101f3e:
  BN_free(rnd);
  BN_free(a);
  BN_free(a_00);
  BN_free(local_90);
  BN_free(local_88);
  BN_free(local_80);
  BN_free(r);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int test_gf2m_sqr(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  BIGNUM *rnd;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *pBVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  BIGNUM *local_80;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  rnd = BN_new();
  iVar2 = test_ptr("test/bntest.c",0x363,"a = BN_new()",rnd);
  if (iVar2 == 0) {
    iVar2 = 0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
  }
  else {
    a = BN_new();
    local_58._0_8_ = a;
    iVar2 = test_ptr("test/bntest.c",0x364,"b[0] = BN_new()",a);
    if (iVar2 == 0) {
      local_80 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      iVar2 = 0;
    }
    else {
      a_00 = BN_new();
      local_58._8_8_ = a_00;
      iVar2 = test_ptr("test/bntest.c",0x365,"b[1] = BN_new()",a_00);
      if (iVar2 == 0) {
        local_80 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        iVar2 = 0;
      }
      else {
        local_80 = BN_new();
        a_01 = (BIGNUM *)0x0;
        iVar2 = test_ptr("test/bntest.c",0x366,"c = BN_new()",local_80);
        if (iVar2 != 0) {
          a_01 = BN_new();
          iVar2 = test_ptr("test/bntest.c",0x367,"d = BN_new()",a_01);
          if (iVar2 != 0) {
            iVar2 = BN_GF2m_arr2poly(p0,a);
            iVar2 = test_true("test/bntest.c",0x36a,"BN_GF2m_arr2poly(p0, b[0])",iVar2 != 0);
            if (iVar2 != 0) {
              BN_GF2m_arr2poly(p1,a_00);
              iVar2 = test_true("test/bntest.c",0x36b,"BN_GF2m_arr2poly(p1, b[1])");
              if (iVar2 != 0) {
                iVar2 = 100;
                do {
                  iVar3 = BN_bntest_rand(rnd,0x400,0,0);
                  iVar3 = test_true("test/bntest.c",0x36f,"BN_bntest_rand(a, 1024, 0, 0)",iVar3 != 0
                                   );
                  if (iVar3 == 0) goto LAB_001025ba;
                  puVar5 = (undefined8 *)local_58;
                  do {
                    uVar1 = *puVar5;
                    iVar3 = BN_GF2m_mod_sqr(local_80,rnd,uVar1,ctx);
                    iVar3 = test_true("test/bntest.c",0x372,"BN_GF2m_mod_sqr(c, a, b[j], ctx)",
                                      iVar3 != 0);
                    if (iVar3 == 0) goto LAB_001025ba;
                    pBVar4 = BN_copy(a_01,rnd);
                    iVar3 = test_true("test/bntest.c",0x373,"BN_copy(d, a)",pBVar4 != (BIGNUM *)0x0)
                    ;
                    if (iVar3 == 0) goto LAB_001025ba;
                    iVar3 = BN_GF2m_mod_mul(a_01,rnd,a_01,uVar1,ctx);
                    iVar3 = test_true("test/bntest.c",0x374,"BN_GF2m_mod_mul(d, a, d, b[j], ctx)",
                                      iVar3 != 0);
                    if (iVar3 == 0) goto LAB_001025ba;
                    iVar3 = BN_GF2m_add(a_01,local_80,a_01);
                    iVar3 = test_true("test/bntest.c",0x375,"BN_GF2m_add(d, c, d)",iVar3 != 0);
                    if ((iVar3 == 0) ||
                       (iVar3 = test_BN_eq_zero("test/bntest.c",0x377,&_LC87), iVar3 == 0))
                    goto LAB_001025ba;
                    puVar5 = puVar5 + 1;
                  } while (&local_48 != puVar5);
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
                iVar2 = 1;
                goto LAB_00102489;
              }
            }
          }
LAB_001025ba:
          iVar2 = 0;
        }
      }
    }
  }
LAB_00102489:
  BN_free(rnd);
  BN_free(a);
  BN_free(a_00);
  BN_free(local_80);
  BN_free(a_01);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int test_gf2m_mul(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  BIGNUM *rnd;
  BIGNUM *a;
  BIGNUM *rnd_00;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  BIGNUM *local_a0;
  BIGNUM *local_98;
  BIGNUM *local_90;
  BIGNUM *local_88;
  BIGNUM *local_80;
  BIGNUM *local_78;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  rnd = BN_new();
  iVar2 = test_ptr("test/bntest.c",0x32f,"a = BN_new()",rnd);
  if (iVar2 == 0) {
    local_80 = (BIGNUM *)0x0;
    iVar2 = 0;
    a = (BIGNUM *)0x0;
  }
  else {
    a = BN_new();
    local_58._0_8_ = a;
    iVar2 = test_ptr("test/bntest.c",0x330,"b[0] = BN_new()",a);
    if (iVar2 == 0) {
      local_80 = (BIGNUM *)0x0;
      iVar2 = 0;
    }
    else {
      local_80 = BN_new();
      local_58._8_8_ = local_80;
      iVar2 = test_ptr("test/bntest.c",0x331,"b[1] = BN_new()",local_80);
      if (iVar2 != 0) {
        rnd_00 = BN_new();
        iVar2 = test_ptr("test/bntest.c",0x332,"c = BN_new()",rnd_00);
        if (iVar2 == 0) {
          local_98 = (BIGNUM *)0x0;
          local_88 = (BIGNUM *)0x0;
          local_78 = (BIGNUM *)0x0;
          local_90 = (BIGNUM *)0x0;
          local_a0 = (BIGNUM *)0x0;
          iVar2 = 0;
        }
        else {
          local_a0 = BN_new();
          iVar2 = test_ptr("test/bntest.c",0x333,"d = BN_new()",local_a0);
          if (iVar2 == 0) {
            local_98 = (BIGNUM *)0x0;
            local_88 = (BIGNUM *)0x0;
            local_78 = (BIGNUM *)0x0;
            local_90 = (BIGNUM *)0x0;
            iVar2 = 0;
          }
          else {
            local_90 = BN_new();
            iVar2 = test_ptr("test/bntest.c",0x334,"e = BN_new()",local_90);
            if (iVar2 == 0) {
              local_98 = (BIGNUM *)0x0;
              local_88 = (BIGNUM *)0x0;
              local_78 = (BIGNUM *)0x0;
              iVar2 = 0;
            }
            else {
              local_78 = BN_new();
              iVar2 = test_ptr("test/bntest.c",0x335,"f = BN_new()",local_78);
              if (iVar2 == 0) {
                local_98 = (BIGNUM *)0x0;
                local_88 = (BIGNUM *)0x0;
                iVar2 = 0;
              }
              else {
                local_88 = BN_new();
                iVar2 = test_ptr("test/bntest.c",0x336,"g = BN_new()",local_88);
                local_98 = (BIGNUM *)0x0;
                if (iVar2 != 0) {
                  local_98 = BN_new();
                  iVar2 = test_ptr("test/bntest.c",0x337,"h = BN_new()",local_98);
                  if (iVar2 != 0) {
                    iVar2 = BN_GF2m_arr2poly(p0,a);
                    iVar2 = test_true("test/bntest.c",0x33a,"BN_GF2m_arr2poly(p0, b[0])",iVar2 != 0)
                    ;
                    if (iVar2 != 0) {
                      BN_GF2m_arr2poly(p1,local_80);
                      iVar2 = test_true("test/bntest.c",0x33b,"BN_GF2m_arr2poly(p1, b[1])");
                      if (iVar2 != 0) {
                        iVar2 = 100;
                        do {
                          BN_bntest_rand(rnd,0x400,0,0);
                          iVar3 = test_true("test/bntest.c",0x33f,"BN_bntest_rand(a, 1024, 0, 0)");
                          if (iVar3 == 0) goto LAB_00102dbc;
                          BN_bntest_rand(rnd_00,0x400,0,0);
                          iVar3 = test_true("test/bntest.c",0x340,"BN_bntest_rand(c, 1024, 0, 0)");
                          if (iVar3 == 0) goto LAB_00102dbc;
                          iVar3 = BN_bntest_rand(local_a0,0x400,0,0);
                          iVar3 = test_true("test/bntest.c",0x341,"BN_bntest_rand(d, 1024, 0, 0)",
                                            iVar3 != 0);
                          if (iVar3 == 0) goto LAB_00102dbc;
                          puVar4 = (undefined8 *)local_58;
                          do {
                            uVar1 = *puVar4;
                            iVar3 = BN_GF2m_mod_mul(local_90,rnd,rnd_00,uVar1,ctx);
                            iVar3 = test_true("test/bntest.c",0x344,
                                              "BN_GF2m_mod_mul(e, a, c, b[j], ctx)",iVar3 != 0);
                            if (iVar3 == 0) goto LAB_00102dbc;
                            iVar3 = BN_GF2m_add(local_78,rnd,local_a0);
                            iVar3 = test_true("test/bntest.c",0x345,"BN_GF2m_add(f, a, d)",
                                              iVar3 != 0);
                            if (iVar3 == 0) goto LAB_00102dbc;
                            iVar3 = BN_GF2m_mod_mul(local_88,local_78,rnd_00,uVar1,ctx);
                            iVar3 = test_true("test/bntest.c",0x346,
                                              "BN_GF2m_mod_mul(g, f, c, b[j], ctx)",iVar3 != 0);
                            if (iVar3 == 0) goto LAB_00102dbc;
                            iVar3 = BN_GF2m_mod_mul(local_98,local_a0,rnd_00,uVar1,ctx);
                            iVar3 = test_true("test/bntest.c",0x347,
                                              "BN_GF2m_mod_mul(h, d, c, b[j], ctx)",iVar3 != 0);
                            if (iVar3 == 0) goto LAB_00102dbc;
                            iVar3 = BN_GF2m_add(local_78,local_90,local_88);
                            iVar3 = test_true("test/bntest.c",0x348,"BN_GF2m_add(f, e, g)",
                                              iVar3 != 0);
                            if (iVar3 == 0) goto LAB_00102dbc;
                            iVar3 = BN_GF2m_add(local_78,local_78,local_98);
                            iVar3 = test_true("test/bntest.c",0x349,"BN_GF2m_add(f, f, h)",
                                              iVar3 != 0);
                            if ((iVar3 == 0) ||
                               (iVar3 = test_BN_eq_zero("test/bntest.c",0x34b,&_LC75), iVar3 == 0))
                            goto LAB_00102dbc;
                            puVar4 = puVar4 + 1;
                          } while (&local_48 != puVar4);
                          iVar2 = iVar2 + -1;
                        } while (iVar2 != 0);
                        iVar2 = 1;
                        goto LAB_00102857;
                      }
                    }
                  }
LAB_00102dbc:
                  iVar2 = 0;
                }
              }
            }
          }
        }
        goto LAB_00102857;
      }
    }
  }
  local_98 = (BIGNUM *)0x0;
  rnd_00 = (BIGNUM *)0x0;
  local_88 = (BIGNUM *)0x0;
  local_78 = (BIGNUM *)0x0;
  local_90 = (BIGNUM *)0x0;
  local_a0 = (BIGNUM *)0x0;
LAB_00102857:
  BN_free(rnd);
  BN_free(a);
  BN_free(local_80);
  BN_free(rnd_00);
  BN_free(local_a0);
  BN_free(local_90);
  BN_free(local_78);
  BN_free(local_88);
  BN_free(local_98);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int test_gf2m_moddiv(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  BIGNUM *rnd;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *rnd_00;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  BIGNUM *local_90;
  BIGNUM *local_88;
  BIGNUM *local_80;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  rnd = BN_new();
  iVar2 = test_ptr("test/bntest.c",0x3b8,"a = BN_new()",rnd);
  if (iVar2 == 0) {
    local_88 = (BIGNUM *)0x0;
    iVar2 = 0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_90 = (BIGNUM *)0x0;
    rnd_00 = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
  }
  else {
    a = BN_new();
    local_58._0_8_ = a;
    iVar2 = test_ptr("test/bntest.c",0x3b9,"b[0] = BN_new()",a);
    if (iVar2 == 0) {
      local_88 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      rnd_00 = (BIGNUM *)0x0;
      local_90 = (BIGNUM *)0x0;
      local_80 = (BIGNUM *)0x0;
      iVar2 = 0;
    }
    else {
      a_00 = BN_new();
      local_58._8_8_ = a_00;
      iVar2 = test_ptr("test/bntest.c",0x3ba,"b[1] = BN_new()",a_00);
      if (iVar2 == 0) {
        local_88 = (BIGNUM *)0x0;
        rnd_00 = (BIGNUM *)0x0;
        local_90 = (BIGNUM *)0x0;
        local_80 = (BIGNUM *)0x0;
        iVar2 = 0;
      }
      else {
        rnd_00 = BN_new();
        iVar2 = test_ptr("test/bntest.c",0x3bb,"c = BN_new()",rnd_00);
        if (iVar2 == 0) {
          local_88 = (BIGNUM *)0x0;
          local_90 = (BIGNUM *)0x0;
          local_80 = (BIGNUM *)0x0;
          iVar2 = 0;
        }
        else {
          local_80 = BN_new();
          iVar2 = test_ptr("test/bntest.c",0x3bc,"d = BN_new()",local_80);
          if (iVar2 == 0) {
            local_88 = (BIGNUM *)0x0;
            local_90 = (BIGNUM *)0x0;
            iVar2 = 0;
          }
          else {
            local_90 = BN_new();
            iVar2 = test_ptr("test/bntest.c",0x3bd,"e = BN_new()",local_90);
            local_88 = (BIGNUM *)0x0;
            if (iVar2 != 0) {
              local_88 = BN_new();
              iVar2 = test_ptr("test/bntest.c",0x3be,"f = BN_new()",local_88);
              if (iVar2 != 0) {
                iVar2 = BN_GF2m_arr2poly(p0,a);
                iVar2 = test_true("test/bntest.c",0x3c1,"BN_GF2m_arr2poly(p0, b[0])",iVar2 != 0);
                if (iVar2 != 0) {
                  BN_GF2m_arr2poly(p1,a_00);
                  iVar2 = test_true("test/bntest.c",0x3c2,"BN_GF2m_arr2poly(p1, b[1])");
                  if (iVar2 != 0) {
                    iVar2 = 100;
                    do {
                      BN_bntest_rand(rnd,0x200,0,0);
                      iVar3 = test_true("test/bntest.c",0x3c6,"BN_bntest_rand(a, 512, 0, 0)");
                      if (iVar3 == 0) goto LAB_00103260;
                      iVar3 = BN_bntest_rand(rnd_00,0x200,0,0);
                      iVar3 = test_true("test/bntest.c",0x3c7,"BN_bntest_rand(c, 512, 0, 0)",
                                        iVar3 != 0);
                      if (iVar3 == 0) goto LAB_00103260;
                      puVar4 = (undefined8 *)local_58;
                      do {
                        uVar1 = *puVar4;
                        iVar3 = BN_GF2m_mod_div(local_80,rnd,rnd_00,uVar1,ctx);
                        iVar3 = test_true("test/bntest.c",0x3ca,
                                          "BN_GF2m_mod_div(d, a, c, b[j], ctx)",iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00103260;
                        iVar3 = BN_GF2m_mod_mul(local_90,local_80,rnd_00,uVar1,ctx);
                        iVar3 = test_true("test/bntest.c",0x3cb,
                                          "BN_GF2m_mod_mul(e, d, c, b[j], ctx)",iVar3 != 0);
                        if (iVar3 == 0) goto LAB_00103260;
                        iVar3 = BN_GF2m_mod_div(local_88,rnd,local_90,uVar1,ctx);
                        iVar3 = test_true("test/bntest.c",0x3cc,
                                          "BN_GF2m_mod_div(f, a, e, b[j], ctx)",iVar3 != 0);
                        if ((iVar3 == 0) ||
                           (iVar3 = test_BN_eq_one("test/bntest.c",0x3ce,&_LC75), iVar3 == 0))
                        goto LAB_00103260;
                        puVar4 = puVar4 + 1;
                      } while (&local_48 != puVar4);
                      iVar2 = iVar2 + -1;
                    } while (iVar2 != 0);
                    iVar2 = 1;
                    goto LAB_00102e4e;
                  }
                }
              }
LAB_00103260:
              iVar2 = 0;
            }
          }
        }
      }
    }
  }
LAB_00102e4e:
  BN_free(rnd);
  BN_free(a);
  BN_free(a_00);
  BN_free(rnd_00);
  BN_free(local_80);
  BN_free(local_90);
  BN_free(local_88);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int test_gf2m_modinv(void)

{
  undefined8 uVar1;
  int iVar2;
  BIGNUM *rnd;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  int local_6c;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  rnd = BN_new();
  iVar2 = test_ptr("test/bntest.c",0x38a,"a = BN_new()",rnd);
  if (iVar2 == 0) {
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    iVar2 = 0;
  }
  else {
    a = BN_new();
    local_58._0_8_ = a;
    iVar2 = test_ptr("test/bntest.c",0x38b,"b[0] = BN_new()",a);
    if (iVar2 == 0) {
      a_00 = (BIGNUM *)0x0;
      a_02 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      iVar2 = 0;
    }
    else {
      a_00 = BN_new();
      local_58._8_8_ = a_00;
      iVar2 = test_ptr("test/bntest.c",0x38c,"b[1] = BN_new()",a_00);
      if (iVar2 == 0) {
        a_02 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        iVar2 = 0;
      }
      else {
        a_01 = BN_new();
        a_02 = (BIGNUM *)0x0;
        iVar2 = test_ptr("test/bntest.c",0x38d,"c = BN_new()",a_01);
        if (iVar2 != 0) {
          a_02 = BN_new();
          iVar2 = test_ptr("test/bntest.c",0x38e,"d = BN_new()",a_02);
          if (iVar2 != 0) {
            BN_set_word(a,1);
            iVar2 = test_true("test/bntest.c",0x392,"BN_one(b[0])");
            if (iVar2 != 0) {
              iVar2 = BN_bntest_rand(rnd,0x200,0,0);
              iVar2 = test_true("test/bntest.c",0x394,"BN_bntest_rand(a, 512, 0, 0)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = BN_GF2m_mod_inv(a_01,rnd,a,ctx);
                iVar2 = test_false("test/bntest.c",0x396,"BN_GF2m_mod_inv(c, a, b[0], ctx)",
                                   iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = BN_GF2m_arr2poly(p0,a);
                  iVar2 = test_true("test/bntest.c",0x399,"BN_GF2m_arr2poly(p0, b[0])",iVar2 != 0);
                  if (iVar2 != 0) {
                    BN_GF2m_arr2poly(p1,a_00);
                    iVar2 = test_true("test/bntest.c",0x39a,"BN_GF2m_arr2poly(p1, b[1])");
                    if (iVar2 != 0) {
                      local_6c = 100;
                      do {
                        iVar2 = BN_bntest_rand(rnd,0x200,0,0);
                        iVar2 = test_true("test/bntest.c",0x39e,"BN_bntest_rand(a, 512, 0, 0)",
                                          iVar2 != 0);
                        if (iVar2 == 0) {
LAB_001035fb:
                          iVar2 = 0;
                          goto LAB_001032d0;
                        }
                        puVar3 = (undefined8 *)local_58;
                        do {
                          uVar1 = *puVar3;
                          iVar2 = BN_GF2m_mod_inv(a_01,rnd,uVar1,ctx);
                          iVar2 = test_true("test/bntest.c",0x3a1,"BN_GF2m_mod_inv(c, a, b[j], ctx)"
                                            ,iVar2 != 0);
                          if (iVar2 == 0) goto LAB_001035fb;
                          iVar2 = BN_GF2m_mod_mul(a_02,rnd,a_01,uVar1,ctx);
                          iVar2 = test_true("test/bntest.c",0x3a2,
                                            "BN_GF2m_mod_mul(d, a, c, b[j], ctx)",iVar2 != 0);
                          if (iVar2 == 0) goto LAB_001035fb;
                          iVar2 = test_BN_eq_one("test/bntest.c",0x3a4,&_LC87);
                          if (iVar2 == 0) goto LAB_001035fb;
                          puVar3 = puVar3 + 1;
                        } while (&local_48 != puVar3);
                        local_6c = local_6c + -1;
                      } while (local_6c != 0);
                      iVar2 = 1;
                      goto LAB_001032d0;
                    }
                  }
                }
              }
            }
          }
          iVar2 = 0;
        }
      }
    }
  }
LAB_001032d0:
  BN_free(rnd);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(a_02);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_gf2m_add(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *rnd;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar3;
  int iVar4;
  bool bVar5;
  
  rnd = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x2e4,"a = BN_new()",rnd);
  if (iVar1 == 0) {
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    iVar1 = 0;
  }
  else {
    a = BN_new();
    a_00 = (BIGNUM *)0x0;
    iVar1 = test_ptr("test/bntest.c",0x2e5,"b = BN_new()",a);
    if (iVar1 != 0) {
      a_00 = BN_new();
      iVar1 = test_ptr("test/bntest.c",0x2e6,"c = BN_new()");
      if (iVar1 == 0) {
LAB_00103888:
        iVar1 = 0;
      }
      else {
        iVar4 = 100;
        do {
          iVar1 = BN_rand(rnd,0x200,0,0);
          iVar1 = test_true("test/bntest.c",0x2ea,"BN_rand(a, 512, 0, 0)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_00103888;
          pBVar3 = BN_value_one();
          pBVar3 = BN_copy(a,pBVar3);
          iVar1 = test_ptr("test/bntest.c",0x2eb,"BN_copy(b, BN_value_one())",pBVar3);
          if (iVar1 == 0) goto LAB_00103888;
          uVar2 = neg_6 & 7;
          neg_6 = neg_6 + 1;
          BN_set_negative(rnd,*(int *)(sign_5 + (ulong)uVar2 * 4));
          uVar2 = neg_6 & 7;
          neg_6 = neg_6 + 1;
          BN_set_negative(a,*(int *)(sign_5 + (ulong)uVar2 * 4));
          iVar1 = BN_GF2m_add(a_00,rnd,a);
          iVar1 = test_true("test/bntest.c",0x2ef,"BN_GF2m_add(c, a, b)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_00103888;
          iVar1 = BN_is_odd(rnd);
          if (iVar1 == 0) {
LAB_0010385b:
            iVar1 = BN_is_odd(rnd);
            bVar5 = false;
            if (iVar1 == 0) {
              iVar1 = BN_is_odd(a_00);
              bVar5 = iVar1 == 0;
            }
          }
          else {
            iVar1 = BN_is_odd(a_00);
            bVar5 = true;
            if (iVar1 == 0) goto LAB_0010385b;
          }
          iVar1 = test_false("test/bntest.c",0x2f1,
                             "(BN_is_odd(a) && BN_is_odd(c)) || (!BN_is_odd(a) && !BN_is_odd(c))",
                             bVar5);
          if (iVar1 == 0) goto LAB_00103662;
          iVar1 = BN_GF2m_add(a_00,a_00,a_00);
          iVar1 = test_true("test/bntest.c",0x2f4,"BN_GF2m_add(c, c, c)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_00103888;
          iVar1 = test_BN_eq_zero("test/bntest.c",0x2f6,&_LC110);
          if (iVar1 == 0) goto LAB_00103888;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar1 = 1;
      }
    }
  }
LAB_00103662:
  BN_free(rnd);
  BN_free(a);
  BN_free(a_00);
  return iVar1;
}



int test_mod(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BIGNUM *rnd;
  BIGNUM *rnd_00;
  BIGNUM *rem;
  BIGNUM *dv;
  BIGNUM *rem_00;
  
  rnd = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x18c,"a = BN_new()",rnd);
  if (iVar1 == 0) {
    rem_00 = (BIGNUM *)0x0;
    dv = (BIGNUM *)0x0;
    rem = (BIGNUM *)0x0;
    rnd_00 = (BIGNUM *)0x0;
    iVar1 = 0;
  }
  else {
    rnd_00 = BN_new();
    iVar1 = test_ptr("test/bntest.c",0x18d,"b = BN_new()",rnd_00);
    if (iVar1 == 0) {
      rem_00 = (BIGNUM *)0x0;
      dv = (BIGNUM *)0x0;
      rem = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      rem = BN_new();
      iVar1 = test_ptr("test/bntest.c",0x18e,"c = BN_new()",rem);
      if (iVar1 == 0) {
        rem_00 = (BIGNUM *)0x0;
        dv = (BIGNUM *)0x0;
        iVar1 = 0;
      }
      else {
        dv = BN_new();
        rem_00 = (BIGNUM *)0x0;
        iVar1 = test_ptr("test/bntest.c",399,"d = BN_new()",dv);
        if (iVar1 != 0) {
          rem_00 = BN_new();
          iVar1 = test_ptr("test/bntest.c",400,"e = BN_new()");
          if (iVar1 != 0) {
            BN_bntest_rand(rnd,0x400,0,0);
            iVar1 = test_true("test/bntest.c",0x193,"BN_bntest_rand(a, 1024, 0, 0)");
            if (iVar1 != 0) {
              iVar1 = 0x1c2;
              do {
                iVar3 = BN_bntest_rand(rnd_00,iVar1,0,0);
                iVar3 = test_true("test/bntest.c",0x196,"BN_bntest_rand(b, 450 + i * 10, 0, 0)",
                                  iVar3 != 0);
                if (iVar3 == 0) {
                  iVar1 = 0;
                  goto LAB_001038e7;
                }
                uVar2 = neg_6 & 7;
                neg_6 = neg_6 + 1;
                BN_set_negative(rnd,*(int *)(sign_5 + (ulong)uVar2 * 4));
                uVar2 = neg_6 & 7;
                neg_6 = neg_6 + 1;
                BN_set_negative(rnd_00,*(int *)(sign_5 + (ulong)uVar2 * 4));
                iVar3 = BN_div((BIGNUM *)0x0,rem,rnd,rnd_00,ctx);
                iVar3 = test_true("test/bntest.c",0x19a,"BN_mod(c, a, b, ctx)",iVar3 != 0);
                if (iVar3 == 0) {
LAB_00103c00:
                  iVar1 = 0;
                  goto LAB_001038e7;
                }
                iVar3 = BN_div(dv,rem_00,rnd,rnd_00,ctx);
                iVar3 = test_true("test/bntest.c",0x19b,"BN_div(d, e, a, b, ctx)",iVar3 != 0);
                if (iVar3 == 0) goto LAB_00103c00;
                iVar3 = test_BN_eq("test/bntest.c",0x19c,&_LC65,&_LC110,rem_00,rem);
                if (iVar3 == 0) goto LAB_00103c00;
                iVar3 = BN_mul(rem,dv,rnd_00,ctx);
                iVar3 = test_true("test/bntest.c",0x19d,"BN_mul(c, d, b, ctx)",iVar3 != 0);
                if (iVar3 == 0) goto LAB_00103c00;
                iVar3 = BN_add(dv,rem,rem_00);
                iVar3 = test_true("test/bntest.c",0x19e,"BN_add(d, c, e)",iVar3 != 0);
                if (iVar3 == 0) goto LAB_00103c00;
                iVar3 = test_BN_eq("test/bntest.c",0x19f,&_LC87,&_LC116,dv,rnd);
                if (iVar3 == 0) goto LAB_00103c00;
                iVar1 = iVar1 + 10;
              } while (iVar1 != 0x5aa);
              iVar1 = 1;
              goto LAB_001038e7;
            }
          }
          iVar1 = 0;
        }
      }
    }
  }
LAB_001038e7:
  BN_free(rnd);
  BN_free(rnd_00);
  BN_free(rem);
  BN_free(dv);
  BN_free(rem_00);
  return iVar1;
}



int test_ctx_consttime_flag(void)

{
  bool bVar1;
  int iVar2;
  BN_CTX *c;
  BIGNUM *pBVar3;
  long lVar4;
  undefined8 uVar5;
  BN_CTX *ctx;
  ulong uVar6;
  BN_CTX *local_58;
  
  c = BN_CTX_new();
  iVar2 = test_ptr("test/bntest.c",0xae0,"nctx = BN_CTX_new()",c);
  local_58 = (BN_CTX *)0x0;
  if (iVar2 != 0) {
    local_58 = (BN_CTX *)BN_CTX_secure_new();
    iVar2 = test_ptr("test/bntest.c",0xae1,"sctx = BN_CTX_secure_new()",local_58);
    if (iVar2 != 0) {
      bVar1 = false;
      ctx = c;
      do {
        uVar6 = 0;
        BN_CTX_start(ctx);
        do {
          while( true ) {
            pBVar3 = BN_CTX_get(ctx);
            iVar2 = test_ptr("test/bntest.c",0xaa4,"b[i] = BN_CTX_get(c)",pBVar3);
            if (iVar2 == 0) goto LAB_00103d36;
            if ((uVar6 & 1) == 0) break;
            uVar6 = uVar6 + 1;
            BN_set_flags(pBVar3,4);
            if (uVar6 == 0xf) goto LAB_00103d31;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0xf);
LAB_00103d31:
        iVar2 = 1;
LAB_00103d36:
        BN_CTX_end(ctx);
        iVar2 = test_true("test/bntest.c",0xae6,"test_ctx_set_ct_flag(c)",iVar2);
        if (iVar2 == 0) goto LAB_00103c68;
        lVar4 = 0x1e;
        BN_CTX_start(ctx);
        do {
          pBVar3 = BN_CTX_get(ctx);
          iVar2 = test_ptr("test/bntest.c",0xab8,"b[i] = BN_CTX_get(c)",pBVar3);
          if (iVar2 == 0) {
LAB_00103dcc:
            uVar5 = 0;
            goto LAB_00103dce;
          }
          iVar2 = BN_get_flags(pBVar3,4);
          iVar2 = test_false("test/bntest.c",0xaba,"BN_get_flags(b[i], BN_FLG_CONSTTIME)",iVar2 != 0
                            );
          if (iVar2 == 0) goto LAB_00103dcc;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        uVar5 = 1;
LAB_00103dce:
        BN_CTX_end(ctx);
        iVar2 = test_true("test/bntest.c",0xae7,"test_ctx_check_ct_flag(c)",uVar5);
        if (iVar2 == 0) break;
        if (bVar1) goto LAB_00103e10;
        bVar1 = true;
        ctx = local_58;
      } while( true );
    }
    iVar2 = 0;
  }
LAB_00103c68:
  BN_CTX_free(c);
  BN_CTX_free(local_58);
  return iVar2;
LAB_00103e10:
  iVar2 = 1;
  goto LAB_00103c68;
}



bool test_smallsafeprime(int param_1)

{
  int iVar1;
  BIGNUM *ret;
  
  ret = BN_new();
  iVar1 = test_ptr("test/bntest.c",0xa59,"r = BN_new()");
  if (iVar1 != 0) {
    if ((param_1 < 6) && (param_1 != 3)) {
      iVar1 = BN_generate_prime_ex(ret,param_1,1,(BIGNUM *)0x0,(BIGNUM *)0x0,(BN_GENCB *)0x0);
      iVar1 = test_false("test/bntest.c",0xa5d,"BN_generate_prime_ex(r, kBits, 1, NULL, NULL, NULL)"
                         ,iVar1 != 0);
      BN_free(ret);
      return iVar1 != 0;
    }
    iVar1 = BN_generate_prime_ex(ret,param_1,1,(BIGNUM *)0x0,(BIGNUM *)0x0,(BN_GENCB *)0x0);
    iVar1 = test_true("test/bntest.c",0xa61,"BN_generate_prime_ex(r, kBits, 1, NULL, NULL, NULL)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_num_bits(ret);
      iVar1 = test_int_eq("test/bntest.c",0xa63,"BN_num_bits(r)","kBits",iVar1,param_1);
      BN_free(ret);
      return iVar1 != 0;
    }
  }
  BN_free(ret);
  return false;
}



bool test_smallprime(int param_1)

{
  int iVar1;
  BIGNUM *ret;
  
  ret = BN_new();
  iVar1 = test_ptr("test/bntest.c",0xa40,"r = BN_new()");
  if (iVar1 != 0) {
    if (param_1 < 2) {
      iVar1 = BN_generate_prime_ex(ret,param_1,0,(BIGNUM *)0x0,(BIGNUM *)0x0,(BN_GENCB *)0x0);
      iVar1 = test_false("test/bntest.c",0xa44,"BN_generate_prime_ex(r, kBits, 0, NULL, NULL, NULL)"
                         ,iVar1 != 0);
      BN_free(ret);
      return iVar1 != 0;
    }
    iVar1 = BN_generate_prime_ex(ret,param_1,0,(BIGNUM *)0x0,(BIGNUM *)0x0,(BN_GENCB *)0x0);
    iVar1 = test_true("test/bntest.c",0xa48,"BN_generate_prime_ex(r, kBits, 0, NULL, NULL, NULL)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_num_bits(ret);
      iVar1 = test_int_eq("test/bntest.c",0xa4a,"BN_num_bits(r)","kBits",iVar1,param_1);
      BN_free(ret);
      return iVar1 != 0;
    }
  }
  BN_free(ret);
  return false;
}



uint test_expmodzero(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *p;
  BIGNUM *a;
  BIGNUM *r;
  BIGNUM *pBVar3;
  
  p = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x9f0,"zero = BN_new()",p);
  if (iVar1 == 0) {
    uVar2 = 0;
    r = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
  }
  else {
    a = BN_new();
    r = (BIGNUM *)0x0;
    uVar2 = test_ptr("test/bntest.c",0x9f1,"a = BN_new()",a);
    if (uVar2 != 0) {
      r = BN_new();
      iVar1 = test_ptr("test/bntest.c",0x9f2,"r = BN_new()",r);
      if (iVar1 != 0) {
        BN_zero_ex(p);
        pBVar3 = BN_value_one();
        iVar1 = BN_mod_exp(r,a,p,pBVar3,(BN_CTX *)0x0);
        iVar1 = test_true("test/bntest.c",0x9f6,"BN_mod_exp(r, a, zero, BN_value_one(), NULL)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          uVar2 = test_BN_eq_zero("test/bntest.c",0x9f7,&_LC129,r);
          if (uVar2 == 0) goto LAB_00104094;
          pBVar3 = BN_value_one();
          iVar1 = BN_mod_exp_mont(r,a,p,pBVar3,(BN_CTX *)0x0,(BN_MONT_CTX *)0x0);
          iVar1 = test_true("test/bntest.c",0x9f8,
                            "BN_mod_exp_mont(r, a, zero, BN_value_one(), NULL, NULL)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_BN_eq_zero("test/bntest.c",0x9fa,&_LC129,r);
            if (iVar1 != 0) {
              pBVar3 = BN_value_one();
              iVar1 = BN_mod_exp_mont_consttime(r,a,p,pBVar3,(BN_CTX *)0x0,(BN_MONT_CTX *)0x0);
              iVar1 = test_true("test/bntest.c",0x9fb,
                                "BN_mod_exp_mont_consttime(r, a, zero, BN_value_one(), NULL, NULL)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = test_BN_eq_zero("test/bntest.c",0x9fe,&_LC129,r);
                if (iVar1 != 0) {
                  pBVar3 = BN_value_one();
                  iVar1 = BN_mod_exp_mont_word(r,0x2a,p,pBVar3,(BN_CTX *)0x0,(BN_MONT_CTX *)0x0);
                  iVar1 = test_true("test/bntest.c",0x9ff,
                                    "BN_mod_exp_mont_word(r, 42, zero, BN_value_one(), NULL, NULL)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = test_BN_eq_zero("test/bntest.c",0xa01,&_LC129,r);
                    uVar2 = (uint)(iVar1 != 0);
                    goto LAB_00104094;
                  }
                }
              }
            }
          }
        }
      }
      uVar2 = 0;
    }
  }
LAB_00104094:
  BN_free(p);
  BN_free(a);
  BN_free(r);
  return uVar2;
}



int test_expmodone(void)

{
  int iVar1;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  int local_3c;
  
  r = BN_new();
  a = BN_new();
  a_00 = BN_new();
  a_01 = BN_new();
  iVar1 = test_ptr("test/bntest.c",0xa14,&_LC129,r);
  if ((((iVar1 != 0) && (iVar1 = test_ptr("test/bntest.c",0xa15,&_LC116,a), iVar1 != 0)) &&
      (iVar1 = test_ptr("test/bntest.c",0xa16,&_LC133,a_00), iVar1 != 0)) &&
     ((iVar1 = test_ptr("test/bntest.c",0xa17,&_LC133,a_00), iVar1 != 0 &&
      (iVar1 = test_ptr("test/bntest.c",0xa18,&_LC134,a_01), iVar1 != 0)))) {
    iVar1 = BN_set_word(a,1);
    iVar1 = test_true("test/bntest.c",0xa19,"BN_set_word(a, 1)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_set_word(a_00,0);
      iVar1 = test_true("test/bntest.c",0xa1a,"BN_set_word(p, 0)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BN_set_word(a_01,1);
        iVar1 = test_true("test/bntest.c",0xa1b,"BN_set_word(m, 1)",iVar1 != 0);
        if (iVar1 != 0) {
          local_3c = 0;
          while( true ) {
            iVar1 = BN_mod_exp(r,a,a_00,a_01,(BN_CTX *)0x0);
            iVar1 = test_true("test/bntest.c",0xa20,"BN_mod_exp(r, a, p, m, NULL)",iVar1 != 0);
            if ((iVar1 == 0) ||
               (iVar1 = test_BN_eq_zero("test/bntest.c",0xa21,&_LC129,r), iVar1 == 0)) break;
            iVar1 = BN_mod_exp_mont(r,a,a_00,a_01,(BN_CTX *)0x0,(BN_MONT_CTX *)0x0);
            iVar1 = test_true("test/bntest.c",0xa22,"BN_mod_exp_mont(r, a, p, m, NULL, NULL)",
                              iVar1 != 0);
            if ((iVar1 == 0) ||
               (iVar1 = test_BN_eq_zero("test/bntest.c",0xa23,&_LC129,r), iVar1 == 0)) break;
            iVar1 = BN_mod_exp_mont_consttime(r,a,a_00,a_01,(BN_CTX *)0x0,(BN_MONT_CTX *)0x0);
            iVar1 = test_true("test/bntest.c",0xa24,
                              "BN_mod_exp_mont_consttime(r, a, p, m, NULL, NULL)",iVar1 != 0);
            if ((iVar1 == 0) ||
               (iVar1 = test_BN_eq_zero("test/bntest.c",0xa25,&_LC129,r), iVar1 == 0)) break;
            iVar1 = BN_mod_exp_mont_word(r,1,a_00,a_01,(BN_CTX *)0x0,(BN_MONT_CTX *)0x0);
            iVar1 = test_true("test/bntest.c",0xa26,"BN_mod_exp_mont_word(r, 1, p, m, NULL, NULL)",
                              iVar1 != 0);
            if ((iVar1 == 0) ||
               (iVar1 = test_BN_eq_zero("test/bntest.c",0xa27,&_LC129,r), iVar1 == 0)) break;
            iVar1 = BN_mod_exp_simple(r,a,a_00,a_01,(BN_CTX *)0x0);
            iVar1 = test_true("test/bntest.c",0xa28,"BN_mod_exp_simple(r, a, p, m, NULL)",iVar1 != 0
                             );
            if ((iVar1 == 0) ||
               (iVar1 = test_BN_eq_zero("test/bntest.c",0xa29,&_LC129,r), iVar1 == 0)) break;
            iVar1 = BN_mod_exp_recp(r,a,a_00,a_01,(BN_CTX *)0x0);
            iVar1 = test_true("test/bntest.c",0xa2a,"BN_mod_exp_recp(r, a, p, m, NULL)",iVar1 != 0);
            if ((iVar1 == 0) ||
               (iVar1 = test_BN_eq_zero("test/bntest.c",0xa2b,&_LC129,r), iVar1 == 0)) break;
            if (local_3c != 0) goto LAB_001042e9;
            BN_set_negative(a_01,1);
            local_3c = 1;
          }
        }
      }
    }
  }
  local_3c = 0;
LAB_001042e9:
  BN_free(r);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  return local_3c;
}



int test_badmod(void)

{
  BN_CTX *pBVar1;
  int iVar2;
  BIGNUM *dv;
  BIGNUM *rem;
  BIGNUM *d;
  BN_MONT_CTX *mont;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  
  dv = BN_new();
  iVar2 = test_ptr("test/bntest.c",0x9af,"a = BN_new()",dv);
  if (iVar2 == 0) {
    iVar2 = 0;
    mont = (BN_MONT_CTX *)0x0;
    d = (BIGNUM *)0x0;
    rem = (BIGNUM *)0x0;
  }
  else {
    rem = BN_new();
    iVar2 = test_ptr("test/bntest.c",0x9b0,"b = BN_new()",rem);
    if (iVar2 == 0) {
      mont = (BN_MONT_CTX *)0x0;
      d = (BIGNUM *)0x0;
      iVar2 = 0;
    }
    else {
      d = BN_new();
      mont = (BN_MONT_CTX *)0x0;
      iVar2 = test_ptr("test/bntest.c",0x9b1,"zero = BN_new()",d);
      if (iVar2 != 0) {
        mont = BN_MONT_CTX_new();
        iVar2 = test_ptr("test/bntest.c",0x9b2,"mont = BN_MONT_CTX_new()",mont);
        if (iVar2 != 0) {
          BN_zero_ex(d);
          pBVar1 = ctx;
          pBVar3 = BN_value_one();
          iVar2 = BN_div(dv,rem,pBVar3,d,pBVar1);
          iVar2 = test_false("test/bntest.c",0x9b6,"BN_div(a, b, BN_value_one(), zero, ctx)",
                             iVar2 != 0);
          if (iVar2 != 0) {
            ERR_clear_error();
            pBVar1 = ctx;
            pBVar3 = BN_value_one();
            pBVar4 = BN_value_one();
            iVar2 = BN_mod_mul(dv,pBVar4,pBVar3,d,pBVar1);
            iVar2 = test_false("test/bntest.c",0x9ba,
                               "BN_mod_mul(a, BN_value_one(), BN_value_one(), zero, ctx)",iVar2 != 0
                              );
            if (iVar2 == 0) goto LAB_00104697;
            ERR_clear_error();
            pBVar1 = ctx;
            pBVar3 = BN_value_one();
            pBVar4 = BN_value_one();
            iVar2 = BN_mod_exp(dv,pBVar4,pBVar3,d,pBVar1);
            iVar2 = test_false("test/bntest.c",0x9be,
                               "BN_mod_exp(a, BN_value_one(), BN_value_one(), zero, ctx)",iVar2 != 0
                              );
            if (iVar2 != 0) {
              ERR_clear_error();
              pBVar1 = ctx;
              pBVar3 = BN_value_one();
              pBVar4 = BN_value_one();
              iVar2 = BN_mod_exp_mont(dv,pBVar4,pBVar3,d,pBVar1,(BN_MONT_CTX *)0x0);
              iVar2 = test_false("test/bntest.c",0x9c2,
                                 "BN_mod_exp_mont(a, BN_value_one(), BN_value_one(), zero, ctx, NULL)"
                                 ,iVar2 != 0);
              if (iVar2 != 0) {
                ERR_clear_error();
                pBVar1 = ctx;
                pBVar3 = BN_value_one();
                pBVar4 = BN_value_one();
                iVar2 = BN_mod_exp_mont_consttime(dv,pBVar4,pBVar3,d,pBVar1,(BN_MONT_CTX *)0x0);
                iVar2 = test_false("test/bntest.c",0x9c7,
                                   "BN_mod_exp_mont_consttime(a, BN_value_one(), BN_value_one(), zero, ctx, NULL)"
                                   ,iVar2 != 0);
                if (iVar2 != 0) {
                  ERR_clear_error();
                  iVar2 = BN_MONT_CTX_set(mont,d,ctx);
                  iVar2 = test_false("test/bntest.c",0x9cc,"BN_MONT_CTX_set(mont, zero, ctx)",
                                     iVar2 != 0);
                  if (iVar2 != 0) {
                    ERR_clear_error();
                    iVar2 = BN_set_word(rem,0x10);
                    iVar2 = test_true("test/bntest.c",0x9d1,"BN_set_word(b, 16)",iVar2 != 0);
                    if (iVar2 != 0) {
                      iVar2 = BN_MONT_CTX_set(mont,rem,ctx);
                      iVar2 = test_false("test/bntest.c",0x9d4,"BN_MONT_CTX_set(mont, b, ctx)",
                                         iVar2 != 0);
                      if (iVar2 != 0) {
                        ERR_clear_error();
                        pBVar1 = ctx;
                        pBVar3 = BN_value_one();
                        pBVar4 = BN_value_one();
                        iVar2 = BN_mod_exp_mont(dv,pBVar4,pBVar3,rem,pBVar1,(BN_MONT_CTX *)0x0);
                        iVar2 = test_false("test/bntest.c",0x9d8,
                                           "BN_mod_exp_mont(a, BN_value_one(), BN_value_one(), b, ctx, NULL)"
                                           ,iVar2 != 0);
                        if (iVar2 != 0) {
                          ERR_clear_error();
                          pBVar1 = ctx;
                          pBVar3 = BN_value_one();
                          pBVar4 = BN_value_one();
                          iVar2 = BN_mod_exp_mont_consttime
                                            (dv,pBVar4,pBVar3,rem,pBVar1,(BN_MONT_CTX *)0x0);
                          iVar2 = test_false("test/bntest.c",0x9dd,
                                             "BN_mod_exp_mont_consttime(a, BN_value_one(), BN_value_one(), b, ctx, NULL)"
                                             ,iVar2 != 0);
                          if (iVar2 != 0) {
                            ERR_clear_error();
                            iVar2 = 1;
                            goto LAB_00104697;
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
        iVar2 = 0;
      }
    }
  }
LAB_00104697:
  BN_free(dv);
  BN_free(rem);
  BN_free(d);
  BN_MONT_CTX_free(mont);
  return iVar2;
}



bool test_negzero(void)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *b;
  BIGNUM *r;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  bool bVar2;
  
  a = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x96a,"a = BN_new()",a);
  if (iVar1 == 0) {
    a_02 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
    bVar2 = false;
  }
  else {
    b = BN_new();
    iVar1 = test_ptr("test/bntest.c",0x96b,"b = BN_new()",b);
    if (iVar1 == 0) {
      a_02 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      r = (BIGNUM *)0x0;
      bVar2 = false;
    }
    else {
      r = BN_new();
      iVar1 = test_ptr("test/bntest.c",0x96c,"c = BN_new()",r);
      if (iVar1 == 0) {
        a_02 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        bVar2 = false;
      }
      else {
        a_00 = BN_new();
        iVar1 = test_ptr("test/bntest.c",0x96d,"d = BN_new()",a_00);
        if (iVar1 != 0) {
          iVar1 = BN_set_word(a,1);
          iVar1 = test_true("test/bntest.c",0x971,"BN_set_word(a, 1)",iVar1 != 0);
          if (iVar1 != 0) {
            BN_set_negative(a,1);
            BN_zero_ex(b);
            iVar1 = BN_mul(r,a,b,ctx);
            iVar1 = test_true("test/bntest.c",0x975,"BN_mul(c, a, b, ctx)",iVar1 != 0);
            if (iVar1 == 0) {
              a_02 = (BIGNUM *)0x0;
              a_01 = (BIGNUM *)0x0;
              bVar2 = false;
              goto LAB_00104aca;
            }
            iVar1 = test_BN_eq_zero("test/bntest.c",0x977,&_LC110,r);
            if (iVar1 != 0) {
              iVar1 = test_BN_ge_zero("test/bntest.c",0x978,&_LC110,r);
              if (iVar1 != 0) {
                bVar2 = false;
                while( true ) {
                  a_01 = BN_new();
                  iVar1 = test_ptr("test/bntest.c",0x97c,"numerator = BN_new()",a_01);
                  if (iVar1 == 0) break;
                  a_02 = BN_new();
                  iVar1 = test_ptr("test/bntest.c",0x97d,"denominator = BN_new()",a_02);
                  if (iVar1 == 0) {
LAB_00104ed4:
                    bVar2 = false;
                    goto LAB_00104aca;
                  }
                  if (bVar2) {
                    BN_set_flags(a_01,4);
                    BN_set_flags(a_02,4);
                  }
                  iVar1 = BN_set_word(a_01,1);
                  iVar1 = test_true("test/bntest.c",0x984,"BN_set_word(numerator, 1)",iVar1 != 0);
                  if (iVar1 == 0) goto LAB_00104ed4;
                  iVar1 = BN_set_word(a_02,2);
                  iVar1 = test_true("test/bntest.c",0x985,"BN_set_word(denominator, 2)",iVar1 != 0);
                  if (iVar1 == 0) goto LAB_00104ed4;
                  BN_set_negative(a_01,1);
                  iVar1 = BN_div(a,b,a_01,a_02,ctx);
                  iVar1 = test_true("test/bntest.c",0x988,
                                    "BN_div(a, b, numerator, denominator, ctx)",iVar1 != 0);
                  if (iVar1 == 0) goto LAB_00104ed4;
                  iVar1 = test_BN_eq_zero("test/bntest.c",0x989,&_LC116,a);
                  if (iVar1 == 0) goto LAB_00104ed4;
                  iVar1 = test_BN_ge_zero("test/bntest.c",0x98a,&_LC116,a);
                  if (iVar1 == 0) goto LAB_00104ed4;
                  iVar1 = BN_set_word(a_02,1);
                  iVar1 = test_true("test/bntest.c",0x98e,"BN_set_word(denominator, 1)",iVar1 != 0);
                  if (iVar1 == 0) goto LAB_00104ed4;
                  iVar1 = BN_div(a,b,a_01,a_02,ctx);
                  iVar1 = test_true("test/bntest.c",0x98f,
                                    "BN_div(a, b, numerator, denominator, ctx)",iVar1 != 0);
                  if (iVar1 == 0) goto LAB_00104ed4;
                  iVar1 = test_BN_eq_zero("test/bntest.c",0x990,&_LC162,b);
                  if (iVar1 == 0) goto LAB_00104ed4;
                  iVar1 = test_BN_ge_zero("test/bntest.c",0x991,&_LC162,b);
                  if (iVar1 == 0) goto LAB_00104ed4;
                  BN_free(a_01);
                  BN_free(a_02);
                  if (bVar2) {
                    BN_zero_ex(a);
                    BN_set_negative(a,1);
                    iVar1 = BN_is_negative(a);
                    bVar2 = iVar1 == 0;
                    a_02 = (BIGNUM *)0x0;
                    a_01 = (BIGNUM *)0x0;
                    goto LAB_00104aca;
                  }
                  bVar2 = true;
                }
                a_02 = (BIGNUM *)0x0;
                bVar2 = false;
                goto LAB_00104aca;
              }
            }
          }
        }
        bVar2 = false;
        a_02 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
      }
    }
  }
LAB_00104aca:
  BN_free(a);
  BN_free(b);
  BN_free(r);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(a_02);
  return bVar2;
}



uint test_bn2signed(int param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  BIGNUM *a;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  undefined8 uVar11;
  BIGNUM *local_60;
  undefined1 local_54 [10];
  undefined1 local_4a [9];
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (BIGNUM *)0x0;
  local_60 = BN_new();
  iVar4 = test_ptr("test/bntest.c",0x78f,"bn = BN_new()",local_60);
  if (iVar4 != 0) {
    lVar1 = (long)param_1 * 0x18;
    iVar4 = BN_asc2bn(&local_60,*(char **)(kSignedTests_BE + lVar1));
    iVar4 = test_true("test/bntest.c",0x790,"BN_asc2bn(&bn, test->base10)",iVar4 != 0);
    if (iVar4 != 0) {
      uVar11 = *(undefined8 *)(kSignedTests_BE + lVar1 + 0x10);
      uVar5 = BN_signed_bn2bin(local_60,local_54,10);
      iVar4 = test_int_eq("test/bntest.c",0x799,"BN_signed_bn2bin(bn, scratch, sizeof(scratch))",
                          "sizeof(scratch)",uVar5,10);
      if (iVar4 != 0) {
        puVar9 = &local_41;
        puVar8 = local_54;
        puVar10 = puVar9;
        do {
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar10 = uVar2;
          puVar10 = puVar10 + -1;
        } while (puVar8 != local_4a);
        iVar4 = test_true("test/bntest.c",0x79b,"copy_reversed(reversed, scratch, sizeof(scratch))",
                          1);
        if (iVar4 != 0) {
          iVar4 = 10 - (int)uVar11;
          uVar3 = *(undefined8 *)(kSignedTests_BE + (long)param_1 * 0x18 + 8);
          iVar6 = test_mem_eq("test/bntest.c",0x79c,"test->mpi","scratch + i",uVar3,uVar11,
                              local_54 + iVar4,uVar11);
          if (iVar6 != 0) {
            a = (BIGNUM *)BN_signed_bin2bn(local_54,10,0);
            iVar6 = test_ptr("test/bntest.c",0x79f,
                             "bn2 = BN_signed_bin2bn(scratch, sizeof(scratch), NULL)",a);
            if ((iVar6 != 0) &&
               (iVar6 = test_BN_eq("test/bntest.c",0x7a0,&_LC172,&_LC171,local_60,a), iVar6 != 0)) {
              BN_free(a);
              a = (BIGNUM *)BN_signed_lebin2bn(local_4a,10,0);
              iVar6 = test_ptr("test/bntest.c",0x7a7,
                               "bn2 = BN_signed_lebin2bn(reversed, sizeof(reversed), NULL)",a);
              if ((iVar6 != 0) &&
                 (iVar6 = test_BN_eq("test/bntest.c",0x7a8,&_LC172,&_LC171,local_60,a), iVar6 != 0))
              {
                BN_free(a);
                uVar5 = BN_signed_bn2lebin(local_60,local_54,10);
                iVar6 = test_int_eq("test/bntest.c",0x7b4,
                                    "BN_signed_bn2lebin(bn, scratch, sizeof(scratch))",
                                    "sizeof(scratch)",uVar5,10);
                puVar8 = local_54;
                if (iVar6 != 0) {
                  do {
                    puVar10 = puVar8 + 1;
                    *puVar9 = *puVar8;
                    puVar9 = puVar9 + -1;
                    puVar8 = puVar10;
                  } while (puVar10 != local_4a);
                  iVar6 = test_true("test/bntest.c",0x7b6,
                                    "copy_reversed(reversed, scratch, sizeof(scratch))",1);
                  if ((iVar6 != 0) &&
                     (iVar4 = test_mem_eq("test/bntest.c",0x7b7,"test->mpi","reversed + i",uVar3,
                                          uVar11,puVar10 + iVar4), iVar4 != 0)) {
                    a = (BIGNUM *)BN_signed_lebin2bn(local_54,10,0,uVar11);
                    iVar4 = test_ptr("test/bntest.c",0x7ba,
                                     "bn2 = BN_signed_lebin2bn(scratch, sizeof(scratch), NULL)",a);
                    if ((iVar4 != 0) &&
                       (iVar4 = test_BN_eq("test/bntest.c",0x7bb,&_LC172,&_LC171,local_60,a),
                       iVar4 != 0)) {
                      BN_free(a);
                      a = (BIGNUM *)BN_signed_bin2bn(puVar10,10,0);
                      uVar7 = test_ptr("test/bntest.c",0x7c2,
                                       "bn2 = BN_signed_bin2bn(reversed, sizeof(reversed), NULL)",a)
                      ;
                      if (uVar7 != 0) {
                        iVar4 = test_BN_eq("test/bntest.c",0x7c3,&_LC172,&_LC171,local_60,a);
                        uVar7 = (uint)(iVar4 != 0);
                      }
                      goto LAB_00104f5f;
                    }
                    goto LAB_00105308;
                  }
                }
                goto LAB_00104f5a;
              }
            }
LAB_00105308:
            uVar7 = 0;
            goto LAB_00104f5f;
          }
        }
      }
    }
  }
LAB_00104f5a:
  uVar7 = 0;
  a = (BIGNUM *)0x0;
LAB_00104f5f:
  BN_free(a);
  BN_free(local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8 test_mpi(int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  BIGNUM *a;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  BIGNUM *local_50;
  uchar local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (BIGNUM *)0x0;
  local_50 = BN_new();
  iVar2 = test_ptr("test/bntest.c",0x89c,"bn = BN_new()",local_50);
  if (iVar2 != 0) {
    lVar1 = (long)param_1 * 0x18;
    iVar2 = BN_asc2bn(&local_50,*(char **)(kMPITests + lVar1));
    iVar2 = test_true("test/bntest.c",0x89d,"BN_asc2bn(&bn, test->base10)",iVar2 != 0);
    if (iVar2 != 0) {
      iVar2 = BN_bn2mpi(local_50,(uchar *)0x0);
      lVar5 = (long)iVar2;
      iVar3 = test_size_t_le("test/bntest.c",0x8a0,"mpi_len","sizeof(scratch)",lVar5,8);
      if (iVar3 != 0) {
        iVar3 = BN_bn2mpi(local_50,local_48);
        iVar3 = test_size_t_eq("test/bntest.c",0x8a3,"mpi_len2 = BN_bn2mpi(bn, scratch)","mpi_len",
                               (long)iVar3,lVar5);
        if (iVar3 != 0) {
          iVar3 = test_mem_eq("test/bntest.c",0x8a4,"test->mpi","scratch",
                              *(undefined8 *)(kMPITests + lVar1 + 8),
                              *(undefined8 *)(kMPITests + lVar1 + 0x10),local_48,lVar5);
          if (iVar3 != 0) {
            a = BN_mpi2bn(local_48,iVar2,(BIGNUM *)0x0);
            iVar2 = test_ptr("test/bntest.c",0x8a7,"bn2 = BN_mpi2bn(scratch, mpi_len, NULL)",a);
            if (iVar2 != 0) {
              iVar2 = test_BN_eq("test/bntest.c",0x8aa,&_LC172,&_LC171,local_50,a);
              if (iVar2 != 0) {
                BN_free(a);
                uVar4 = 1;
                goto LAB_0010537b;
              }
              BN_free(a);
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_0010537b:
  BN_free(local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_bin2bn_lengths(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *ret;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *pBVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar local_42 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_42[0] = '\x01';
  local_42[1] = '\x02';
  ret = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x8db,"bn_be = BN_new()",ret);
  if (iVar1 == 0) {
    uVar2 = 0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
  }
  else {
    a = BN_new();
    uVar2 = test_ptr("test/bntest.c",0x8dc,"bn_expected_be = BN_new()",a);
    if (uVar2 != 0) {
      iVar1 = BN_set_word(a,0x102);
      uVar2 = test_true("test/bntest.c",0x8dd,"BN_set_word(bn_expected_be, 0x102)",iVar1 != 0);
      if (uVar2 != 0) {
        a_00 = BN_new();
        a_01 = (BIGNUM *)0x0;
        uVar2 = test_ptr("test/bntest.c",0x8de,"bn_le = BN_new()",a_00);
        if (uVar2 != 0) {
          a_01 = BN_new();
          iVar1 = test_ptr("test/bntest.c",0x8df,"bn_expected_le = BN_new()",a_01);
          if (iVar1 != 0) {
            iVar1 = BN_set_word(a_01,0x201);
            iVar1 = test_true("test/bntest.c",0x8e0,"BN_set_word(bn_expected_le, 0x201)",iVar1 != 0)
            ;
            if (iVar1 != 0) {
              pBVar3 = BN_bin2bn(local_42,-1,ret);
              iVar1 = test_ptr_null("test/bntest.c",0x8eb,"BN_bin2bn(input, -1, bn_be)",pBVar3);
              if (iVar1 != 0) {
                pBVar3 = BN_bin2bn(local_42,0,ret);
                iVar1 = test_ptr("test/bntest.c",0x8eb,"BN_bin2bn(input, 0, bn_be)",pBVar3);
                if (iVar1 != 0) {
                  iVar1 = BN_is_zero(ret);
                  iVar1 = test_true("test/bntest.c",0x8eb,"BN_is_zero(bn_be)",iVar1 != 0);
                  if (iVar1 != 0) {
                    pBVar3 = BN_bin2bn(local_42,2,ret);
                    iVar1 = test_ptr("test/bntest.c",0x8eb,"BN_bin2bn(input, 2, bn_be)",pBVar3);
                    if (iVar1 != 0) {
                      iVar1 = BN_cmp(ret,a);
                      iVar1 = test_int_eq("test/bntest.c",0x8eb,"BN_cmp(bn_be, bn_expected_be)",
                                          &_LC26,iVar1,0);
                      if (iVar1 != 0) {
                        uVar4 = BN_signed_bin2bn(local_42,0xffffffff,ret);
                        iVar1 = test_ptr_null("test/bntest.c",0x8ec,
                                              "BN_signed_bin2bn(input, -1, bn_be)",uVar4);
                        if (iVar1 != 0) {
                          uVar4 = BN_signed_bin2bn(local_42,0,ret);
                          uVar2 = test_ptr("test/bntest.c",0x8ec,"BN_signed_bin2bn(input, 0, bn_be)"
                                           ,uVar4);
                          if (uVar2 == 0) goto LAB_00105571;
                          iVar1 = BN_is_zero(ret);
                          iVar1 = test_true("test/bntest.c",0x8ec,"BN_is_zero(bn_be)",iVar1 != 0);
                          if (iVar1 != 0) {
                            uVar4 = BN_signed_bin2bn(local_42,2,ret);
                            iVar1 = test_ptr("test/bntest.c",0x8ec,
                                             "BN_signed_bin2bn(input, 2, bn_be)",uVar4);
                            if (iVar1 != 0) {
                              iVar1 = BN_cmp(ret,a);
                              iVar1 = test_int_eq("test/bntest.c",0x8ec,
                                                  "BN_cmp(bn_be, bn_expected_be)",&_LC26,iVar1,0);
                              if (iVar1 != 0) {
                                uVar4 = BN_lebin2bn(local_42,0xffffffff,a_00);
                                iVar1 = test_ptr_null("test/bntest.c",0x8ed,
                                                      "BN_lebin2bn(input, -1, bn_le)",uVar4);
                                if (iVar1 != 0) {
                                  uVar4 = BN_lebin2bn(local_42,0,a_00);
                                  iVar1 = test_ptr("test/bntest.c",0x8ed,
                                                   "BN_lebin2bn(input, 0, bn_le)",uVar4);
                                  if (iVar1 != 0) {
                                    iVar1 = BN_is_zero(a_00);
                                    iVar1 = test_true("test/bntest.c",0x8ed,"BN_is_zero(bn_le)",
                                                      iVar1 != 0);
                                    if (iVar1 != 0) {
                                      uVar4 = BN_lebin2bn(local_42,2,a_00);
                                      iVar1 = test_ptr("test/bntest.c",0x8ed,
                                                       "BN_lebin2bn(input, 2, bn_le)",uVar4);
                                      if (iVar1 != 0) {
                                        iVar1 = BN_cmp(a_00,a_01);
                                        iVar1 = test_int_eq("test/bntest.c",0x8ed,
                                                            "BN_cmp(bn_le, bn_expected_le)",&_LC26,
                                                            iVar1,0);
                                        if (iVar1 != 0) {
                                          uVar4 = BN_signed_lebin2bn(local_42,0xffffffff,a_00);
                                          iVar1 = test_ptr_null("test/bntest.c",0x8ee,
                                                                                                                                
                                                  "BN_signed_lebin2bn(input, -1, bn_le)",uVar4);
                                          if (iVar1 != 0) {
                                            uVar4 = BN_signed_lebin2bn(local_42,0,a_00);
                                            iVar1 = test_ptr("test/bntest.c",0x8ee,
                                                             "BN_signed_lebin2bn(input, 0, bn_le)",
                                                             uVar4);
                                            if (iVar1 != 0) {
                                              iVar1 = BN_is_zero(a_00);
                                              iVar1 = test_true("test/bntest.c",0x8ee,
                                                                "BN_is_zero(bn_le)",iVar1 != 0);
                                              if (iVar1 != 0) {
                                                uVar4 = BN_signed_lebin2bn(local_42,2,a_00);
                                                iVar1 = test_ptr("test/bntest.c",0x8ee,
                                                                                                                                  
                                                  "BN_signed_lebin2bn(input, 2, bn_le)",uVar4);
                                                if (iVar1 != 0) {
                                                  iVar1 = BN_cmp(a_00,a_01);
                                                  iVar1 = test_int_eq("test/bntest.c",0x8ee,
                                                                                                                                            
                                                  "BN_cmp(bn_le, bn_expected_le)",&_LC26,iVar1,0);
                                                  uVar2 = (uint)(iVar1 != 0);
                                                  goto LAB_00105571;
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
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar2 = 0;
        }
        goto LAB_00105571;
      }
    }
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
  }
LAB_00105571:
  BN_free(ret);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_bin2zero(void)

{
  int iVar1;
  BIGNUM *ret;
  BIGNUM *pBVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  uchar local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_31 = '\0';
  ret = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x8bc,"zbn = BN_new()",ret);
  if (iVar1 != 0) {
    pBVar2 = BN_bin2bn(&local_31,1,ret);
    iVar1 = test_ptr("test/bntest.c",0x8c8,"BN_bin2bn(input, 1, zbn)",pBVar2);
    if (iVar1 != 0) {
      iVar1 = BN_is_zero(ret);
      iVar1 = test_true("test/bntest.c",0x8c8,"BN_is_zero(zbn)",iVar1 != 0);
      if (iVar1 != 0) {
        pBVar2 = BN_bin2bn(&local_31,0,ret);
        iVar1 = test_ptr("test/bntest.c",0x8c8,"BN_bin2bn(input, 0, zbn)",pBVar2);
        if (iVar1 != 0) {
          iVar1 = BN_is_zero(ret);
          iVar1 = test_true("test/bntest.c",0x8c8,"BN_is_zero(zbn)",iVar1 != 0);
          if (iVar1 != 0) {
            pBVar2 = BN_bin2bn((uchar *)0x0,0,ret);
            iVar1 = test_ptr("test/bntest.c",0x8c8,"BN_bin2bn(NULL, 0, zbn)",pBVar2);
            if (iVar1 != 0) {
              iVar1 = BN_is_zero(ret);
              iVar1 = test_true("test/bntest.c",0x8c8,"BN_is_zero(zbn)",iVar1 != 0);
              if (iVar1 != 0) {
                uVar3 = BN_signed_bin2bn(&local_31,1,ret);
                iVar1 = test_ptr("test/bntest.c",0x8c9,"BN_signed_bin2bn(input, 1, zbn)",uVar3);
                if (iVar1 != 0) {
                  iVar1 = BN_is_zero(ret);
                  iVar1 = test_true("test/bntest.c",0x8c9,"BN_is_zero(zbn)",iVar1 != 0);
                  if (iVar1 != 0) {
                    uVar3 = BN_signed_bin2bn(&local_31,0,ret);
                    iVar1 = test_ptr("test/bntest.c",0x8c9,"BN_signed_bin2bn(input, 0, zbn)",uVar3);
                    if (iVar1 != 0) {
                      iVar1 = BN_is_zero(ret);
                      iVar1 = test_true("test/bntest.c",0x8c9,"BN_is_zero(zbn)",iVar1 != 0);
                      if (iVar1 != 0) {
                        uVar3 = BN_signed_bin2bn(0,0,ret);
                        iVar1 = test_ptr("test/bntest.c",0x8c9,"BN_signed_bin2bn(NULL, 0, zbn)",
                                         uVar3);
                        if (iVar1 != 0) {
                          iVar1 = BN_is_zero(ret);
                          iVar1 = test_true("test/bntest.c",0x8c9,"BN_is_zero(zbn)",iVar1 != 0);
                          if (iVar1 != 0) {
                            uVar3 = BN_lebin2bn(&local_31,1,ret);
                            iVar1 = test_ptr("test/bntest.c",0x8ca,"BN_lebin2bn(input, 1, zbn)",
                                             uVar3);
                            if (iVar1 != 0) {
                              iVar1 = BN_is_zero(ret);
                              iVar1 = test_true("test/bntest.c",0x8ca,"BN_is_zero(zbn)",iVar1 != 0);
                              if (iVar1 != 0) {
                                uVar3 = BN_lebin2bn(&local_31,0,ret);
                                iVar1 = test_ptr("test/bntest.c",0x8ca,"BN_lebin2bn(input, 0, zbn)",
                                                 uVar3);
                                if (iVar1 != 0) {
                                  iVar1 = BN_is_zero(ret);
                                  iVar1 = test_true("test/bntest.c",0x8ca,"BN_is_zero(zbn)",
                                                    iVar1 != 0);
                                  if (iVar1 != 0) {
                                    uVar3 = BN_lebin2bn(0,0,ret);
                                    iVar1 = test_ptr("test/bntest.c",0x8ca,
                                                     "BN_lebin2bn(NULL, 0, zbn)",uVar3);
                                    if (iVar1 != 0) {
                                      iVar1 = BN_is_zero(ret);
                                      iVar1 = test_true("test/bntest.c",0x8ca,"BN_is_zero(zbn)",
                                                        iVar1 != 0);
                                      if (iVar1 != 0) {
                                        uVar3 = BN_signed_lebin2bn(&local_31,1,ret);
                                        iVar1 = test_ptr("test/bntest.c",0x8cb,
                                                         "BN_signed_lebin2bn(input, 1, zbn)",uVar3);
                                        if (iVar1 != 0) {
                                          iVar1 = BN_is_zero(ret);
                                          iVar1 = test_true("test/bntest.c",0x8cb,"BN_is_zero(zbn)",
                                                            iVar1 != 0);
                                          if (iVar1 != 0) {
                                            uVar3 = BN_signed_lebin2bn(&local_31,0,ret);
                                            iVar1 = test_ptr("test/bntest.c",0x8cb,
                                                             "BN_signed_lebin2bn(input, 0, zbn)",
                                                             uVar3);
                                            if (iVar1 != 0) {
                                              iVar1 = BN_is_zero(ret);
                                              iVar1 = test_true("test/bntest.c",0x8cb,
                                                                "BN_is_zero(zbn)",iVar1 != 0);
                                              if (iVar1 != 0) {
                                                uVar3 = BN_signed_lebin2bn(0,0,ret);
                                                iVar1 = test_ptr("test/bntest.c",0x8cb,
                                                                 "BN_signed_lebin2bn(NULL, 0, zbn)",
                                                                 uVar3);
                                                if (iVar1 != 0) {
                                                  iVar1 = BN_is_zero(ret);
                                                  iVar1 = test_true("test/bntest.c",0x8cb,
                                                                    "BN_is_zero(zbn)",iVar1 != 0);
                                                  bVar4 = iVar1 != 0;
                                                  goto LAB_00105acf;
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
  bVar4 = false;
LAB_00105acf:
  BN_free(ret);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_rand(void)

{
  int iVar1;
  BIGNUM *rnd;
  bool bVar2;
  
  rnd = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x8ff,"bn = BN_new()");
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = BN_rand(rnd,0,0,0);
  iVar1 = test_false("test/bntest.c",0x903,"BN_rand(bn, 0, 0 , 0 )",iVar1 != 0);
  if (iVar1 != 0) {
    BN_rand(rnd,0,1,1);
    iVar1 = test_false("test/bntest.c",0x904,"BN_rand(bn, 0, 1 , 1 )");
    if (iVar1 != 0) {
      iVar1 = BN_rand(rnd,1,0,0);
      iVar1 = test_true("test/bntest.c",0x905,"BN_rand(bn, 1, 0 , 0 )",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = test_BN_eq_one("test/bntest.c",0x906,&_LC172);
        if (iVar1 != 0) {
          iVar1 = BN_rand(rnd,1,1,0);
          iVar1 = test_false("test/bntest.c",0x907,"BN_rand(bn, 1, 1 , 0 )",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BN_rand(rnd,1,-1,1);
            iVar1 = test_true("test/bntest.c",0x908,"BN_rand(bn, 1, -1 , 1 )",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = test_BN_eq_one("test/bntest.c",0x909,&_LC172);
              if (iVar1 != 0) {
                iVar1 = BN_rand(rnd,2,1,0);
                iVar1 = test_true("test/bntest.c",0x90a,"BN_rand(bn, 2, 1 , 0 )",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = test_BN_eq_word("test/bntest.c",0x90b,&_LC172,&_LC224,rnd,3);
                  bVar2 = iVar1 != 0;
                  goto LAB_00105fa2;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00105fa2:
  BN_free(rnd);
  return bVar2;
}



bool test_asc2bn(void)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (BIGNUM *)0x0;
  local_38 = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x859,"bn = BN_new()",local_38);
  if (iVar1 != 0) {
    iVar1 = BN_asc2bn(&local_38,"0");
    iVar1 = test_true("test/bntest.c",0x85c,"BN_asc2bn(&bn, \"0\")",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = test_BN_eq_zero("test/bntest.c",0x85d,&_LC172,local_38);
      if (iVar1 != 0) {
        iVar1 = test_BN_ge_zero("test/bntest.c",0x85e,&_LC172,local_38);
        if (iVar1 != 0) {
          iVar1 = BN_asc2bn(&local_38,"256");
          iVar1 = test_true("test/bntest.c",0x861,"BN_asc2bn(&bn, \"256\")",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_BN_eq_word("test/bntest.c",0x862,&_LC172,&_LC226,local_38,0x100);
            if (iVar1 != 0) {
              iVar1 = test_BN_ge_zero("test/bntest.c",0x863,&_LC172,local_38);
              if (iVar1 != 0) {
                iVar1 = BN_asc2bn(&local_38,"-42");
                iVar1 = test_true("test/bntest.c",0x866,"BN_asc2bn(&bn, \"-42\")",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = test_BN_abs_eq_word("test/bntest.c",0x867,&_LC172,&_LC230,local_38,0x2a);
                  if (iVar1 != 0) {
                    iVar1 = test_BN_lt_zero("test/bntest.c",0x868,&_LC172,local_38);
                    if (iVar1 != 0) {
                      iVar1 = BN_asc2bn(&local_38,"0x1234");
                      iVar1 = test_true("test/bntest.c",0x86b,"BN_asc2bn(&bn, \"0x1234\")",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = test_BN_eq_word("test/bntest.c",0x86c,&_LC172,"0x1234",local_38,
                                                0x1234);
                        if (iVar1 != 0) {
                          iVar1 = test_BN_ge_zero("test/bntest.c",0x86d,&_LC172,local_38);
                          if (iVar1 != 0) {
                            iVar1 = BN_asc2bn(&local_38,"0X1234");
                            iVar1 = test_true("test/bntest.c",0x870,"BN_asc2bn(&bn, \"0X1234\")",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = test_BN_eq_word("test/bntest.c",0x871,&_LC172,"0x1234",
                                                      local_38,0x1234);
                              if (iVar1 != 0) {
                                iVar1 = test_BN_ge_zero("test/bntest.c",0x872,&_LC172,local_38);
                                if (iVar1 != 0) {
                                  iVar1 = BN_asc2bn(&local_38,"-0xabcd");
                                  iVar1 = test_true("test/bntest.c",0x875,
                                                    "BN_asc2bn(&bn, \"-0xabcd\")",iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = test_BN_abs_eq_word("test/bntest.c",0x876,&_LC172,
                                                                "0xabcd",local_38,0xabcd);
                                    if (iVar1 != 0) {
                                      iVar1 = test_BN_lt_zero("test/bntest.c",0x877,&_LC172,local_38
                                                             );
                                      if (iVar1 != 0) {
                                        iVar1 = BN_asc2bn(&local_38,"-0");
                                        iVar1 = test_true("test/bntest.c",0x87a,
                                                          "BN_asc2bn(&bn, \"-0\")",iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = test_BN_eq_zero("test/bntest.c",0x87b,&_LC172,
                                                                  local_38);
                                          if (iVar1 != 0) {
                                            iVar1 = test_BN_ge_zero("test/bntest.c",0x87c,&_LC172,
                                                                    local_38);
                                            if (iVar1 != 0) {
                                              iVar1 = BN_asc2bn(&local_38,
                                                                "123trailing garbage is ignored");
                                              iVar1 = test_true("test/bntest.c",0x87f,
                                                                                                                                
                                                  "BN_asc2bn(&bn, \"123trailing garbage is ignored\")"
                                                  ,iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = test_BN_eq_word("test/bntest.c",0x880,
                                                                        &_LC172,&_LC242,local_38,
                                                                        0x7b);
                                                if (iVar1 != 0) {
                                                  iVar1 = test_BN_ge_zero("test/bntest.c",0x881,
                                                                          &_LC172,local_38);
                                                  bVar2 = iVar1 != 0;
                                                  goto LAB_00106153;
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
  bVar2 = false;
LAB_00106153:
  BN_free(local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_hex2bn(void)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (BIGNUM *)0x0;
  iVar1 = BN_hex2bn(&local_38,"0");
  iVar1 = test_int_eq("test/bntest.c",0x817,"parseBN(&bn, \"0\")",&_LC32,iVar1,1);
  if (iVar1 != 0) {
    iVar1 = test_BN_eq_zero("test/bntest.c",0x818,&_LC172,local_38);
    if (iVar1 != 0) {
      iVar1 = test_BN_ge_zero("test/bntest.c",0x819,&_LC172,local_38);
      if (iVar1 != 0) {
        iVar1 = test_BN_even("test/bntest.c",0x81a,&_LC172,local_38);
        if (iVar1 != 0) {
          BN_free(local_38);
          local_38 = (BIGNUM *)0x0;
          iVar1 = BN_hex2bn(&local_38,"256");
          iVar1 = test_int_eq("test/bntest.c",0x81f,"parseBN(&bn, \"256\")",&_LC224,iVar1,3);
          if (iVar1 != 0) {
            iVar1 = test_BN_eq_word("test/bntest.c",0x820,&_LC172,"0x256",local_38,0x256);
            if (iVar1 != 0) {
              iVar1 = test_BN_ge_zero("test/bntest.c",0x821,&_LC172,local_38);
              if (iVar1 != 0) {
                iVar1 = test_BN_gt_zero("test/bntest.c",0x822,&_LC172,local_38);
                if (iVar1 != 0) {
                  iVar1 = test_BN_ne_zero("test/bntest.c",0x823,&_LC172,local_38);
                  if (iVar1 != 0) {
                    iVar1 = test_BN_even("test/bntest.c",0x824,&_LC172,local_38);
                    if (iVar1 != 0) {
                      BN_free(local_38);
                      local_38 = (BIGNUM *)0x0;
                      iVar1 = BN_hex2bn(&local_38,"-42");
                      iVar1 = test_int_eq("test/bntest.c",0x829,"parseBN(&bn, \"-42\")",&_LC224,
                                          iVar1,3);
                      if (iVar1 != 0) {
                        iVar1 = test_BN_abs_eq_word("test/bntest.c",0x82a,&_LC172,&_LC247,local_38,
                                                    0x42);
                        if (iVar1 != 0) {
                          iVar1 = test_BN_lt_zero("test/bntest.c",0x82b,&_LC172,local_38);
                          if (iVar1 != 0) {
                            iVar1 = test_BN_le_zero("test/bntest.c",0x82c,&_LC172,local_38);
                            if (iVar1 != 0) {
                              iVar1 = test_BN_ne_zero("test/bntest.c",0x82d,&_LC172,local_38);
                              if (iVar1 != 0) {
                                iVar1 = test_BN_even("test/bntest.c",0x82e,&_LC172);
                                if (iVar1 != 0) {
                                  BN_free(local_38);
                                  local_38 = (BIGNUM *)0x0;
                                  iVar1 = BN_hex2bn(&local_38,"cb");
                                  iVar1 = test_int_eq("test/bntest.c",0x833,"parseBN(&bn, \"cb\")",
                                                      &_LC249,iVar1,2);
                                  if (iVar1 != 0) {
                                    iVar1 = test_BN_eq_word("test/bntest.c",0x834,&_LC172,&_LC251,
                                                            local_38,0xcb);
                                    if (iVar1 != 0) {
                                      iVar1 = test_BN_ge_zero("test/bntest.c",0x835,&_LC172,local_38
                                                             );
                                      if (iVar1 != 0) {
                                        iVar1 = test_BN_gt_zero("test/bntest.c",0x836,&_LC172,
                                                                local_38);
                                        if (iVar1 != 0) {
                                          iVar1 = test_BN_ne_zero("test/bntest.c",0x837,&_LC172,
                                                                  local_38);
                                          if (iVar1 != 0) {
                                            iVar1 = test_BN_odd("test/bntest.c",0x838,&_LC172,
                                                                local_38);
                                            if (iVar1 != 0) {
                                              BN_free(local_38);
                                              local_38 = (BIGNUM *)0x0;
                                              iVar1 = BN_hex2bn(&local_38,"-0");
                                              iVar1 = test_int_eq("test/bntest.c",0x83d,
                                                                  "parseBN(&bn, \"-0\")",&_LC249,
                                                                  iVar1,2);
                                              if (iVar1 != 0) {
                                                iVar1 = test_BN_eq_zero("test/bntest.c",0x83e,
                                                                        &_LC172,local_38);
                                                if (iVar1 != 0) {
                                                  iVar1 = test_BN_ge_zero("test/bntest.c",0x83f,
                                                                          &_LC172,local_38);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_le_zero("test/bntest.c",0x840,
                                                                            &_LC172,local_38);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_BN_even("test/bntest.c",0x841,
                                                                           &_LC172,local_38);
                                                      if (iVar1 != 0) {
                                                        BN_free(local_38);
                                                        local_38 = (BIGNUM *)0x0;
                                                        iVar1 = BN_hex2bn(&local_38,
                                                                                                                                                    
                                                  "abctrailing garbage is ignored");
                                                  iVar1 = test_int_eq("test/bntest.c",0x846,
                                                                                                                                            
                                                  "parseBN(&bn, \"abctrailing garbage is ignored\")"
                                                  ,&_LC224,iVar1,3);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq_word("test/bntest.c",0x847,
                                                                            &_LC172,"0xabc",local_38
                                                                            ,0xabc);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_BN_ge_zero("test/bntest.c",0x848,
                                                                              &_LC172,local_38);
                                                      if (iVar1 != 0) {
                                                        iVar1 = test_BN_gt_zero("test/bntest.c",
                                                                                0x849,&_LC172,
                                                                                local_38);
                                                        if (iVar1 != 0) {
                                                          iVar1 = test_BN_ne_zero("test/bntest.c",
                                                                                  0x84a,&_LC172,
                                                                                  local_38);
                                                          if (iVar1 != 0) {
                                                            iVar1 = test_BN_even("test/bntest.c",
                                                                                 0x84b,&_LC172,
                                                                                 local_38);
                                                            bVar2 = iVar1 != 0;
                                                            goto LAB_0010659b;
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
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_0010659b:
  BN_free(local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_dec2bn(void)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  iVar1 = BN_dec2bn(&local_48,"0");
  iVar1 = test_int_eq("test/bntest.c",0x7d2,"parsedecBN(&bn, \"0\")",&_LC32,iVar1,1);
  if (iVar1 != 0) {
    iVar1 = test_BN_eq_word("test/bntest.c",0x7d3,&_LC172,&_LC26,local_48,0);
    if (iVar1 != 0) {
      iVar1 = test_BN_eq_zero("test/bntest.c",0x7d4,&_LC172,local_48);
      if (iVar1 != 0) {
        iVar1 = test_BN_le_zero("test/bntest.c",0x7d5,&_LC172,local_48);
        if (iVar1 != 0) {
          iVar1 = test_BN_ge_zero("test/bntest.c",0x7d6,&_LC172,local_48);
          if (iVar1 != 0) {
            iVar1 = test_BN_even("test/bntest.c",0x7d7,&_LC172,local_48);
            if (iVar1 != 0) {
              BN_free(local_48);
              local_48 = (BIGNUM *)0x0;
              iVar1 = BN_dec2bn(&local_48,"256");
              iVar1 = test_int_eq("test/bntest.c",0x7dc,"parsedecBN(&bn, \"256\")",&_LC224,iVar1,3);
              if (iVar1 != 0) {
                iVar1 = test_BN_eq_word("test/bntest.c",0x7dd,&_LC172,&_LC226,local_48,0x100);
                if (iVar1 != 0) {
                  iVar1 = test_BN_ge_zero("test/bntest.c",0x7de,&_LC172,local_48);
                  if (iVar1 != 0) {
                    iVar1 = test_BN_gt_zero("test/bntest.c",0x7df,&_LC172,local_48);
                    if (iVar1 != 0) {
                      iVar1 = test_BN_ne_zero("test/bntest.c",0x7e0,&_LC172,local_48);
                      if (iVar1 != 0) {
                        iVar1 = test_BN_even("test/bntest.c",0x7e1,&_LC172,local_48);
                        if (iVar1 != 0) {
                          BN_free(local_48);
                          local_48 = (BIGNUM *)0x0;
                          iVar1 = BN_dec2bn(&local_48,"-42");
                          iVar1 = test_int_eq("test/bntest.c",0x7e6,"parsedecBN(&bn, \"-42\")",
                                              &_LC224,iVar1,3);
                          if (iVar1 != 0) {
                            iVar1 = test_BN_abs_eq_word("test/bntest.c",0x7e7,&_LC172,&_LC230,
                                                        local_48,0x2a);
                            if (iVar1 != 0) {
                              iVar1 = test_BN_lt_zero("test/bntest.c",0x7e8,&_LC172,local_48);
                              if (iVar1 != 0) {
                                iVar1 = test_BN_le_zero("test/bntest.c",0x7e9,&_LC172,local_48);
                                if (iVar1 != 0) {
                                  iVar1 = test_BN_ne_zero("test/bntest.c",0x7ea,&_LC172,local_48);
                                  if (iVar1 != 0) {
                                    iVar1 = test_BN_even("test/bntest.c",0x7eb,&_LC172);
                                    if (iVar1 != 0) {
                                      BN_free(local_48);
                                      local_48 = (BIGNUM *)0x0;
                                      iVar1 = BN_dec2bn(&local_48,"1");
                                      iVar1 = test_int_eq("test/bntest.c",0x7f0,
                                                          "parsedecBN(&bn, \"1\")",&_LC32,iVar1,1);
                                      if (iVar1 != 0) {
                                        iVar1 = test_BN_eq_word("test/bntest.c",0x7f1,&_LC172,&_LC32
                                                                ,local_48,1);
                                        if (iVar1 != 0) {
                                          iVar1 = test_BN_ne_zero("test/bntest.c",0x7f2,&_LC172,
                                                                  local_48);
                                          if (iVar1 != 0) {
                                            iVar1 = test_BN_gt_zero("test/bntest.c",0x7f3,&_LC172,
                                                                    local_48);
                                            if (iVar1 != 0) {
                                              iVar1 = test_BN_ge_zero("test/bntest.c",0x7f4,&_LC172,
                                                                      local_48);
                                              if (iVar1 != 0) {
                                                iVar1 = test_BN_eq_one("test/bntest.c",0x7f5,&_LC172
                                                                       ,local_48);
                                                if (iVar1 != 0) {
                                                  iVar1 = test_BN_odd("test/bntest.c",0x7f6,&_LC172,
                                                                      local_48);
                                                  if (iVar1 != 0) {
                                                    BN_free(local_48);
                                                    local_48 = (BIGNUM *)0x0;
                                                    iVar1 = BN_dec2bn(&local_48,"-0");
                                                    iVar1 = test_int_eq("test/bntest.c",0x7fb,
                                                                        "parsedecBN(&bn, \"-0\")",
                                                                        &_LC249,iVar1,2);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_BN_eq_zero("test/bntest.c",0x7fc,
                                                                              &_LC172,local_48);
                                                      if (iVar1 != 0) {
                                                        iVar1 = test_BN_ge_zero("test/bntest.c",
                                                                                0x7fd,&_LC172,
                                                                                local_48);
                                                        if (iVar1 != 0) {
                                                          iVar1 = test_BN_le_zero("test/bntest.c",
                                                                                  0x7fe,&_LC172,
                                                                                  local_48);
                                                          if (iVar1 != 0) {
                                                            iVar1 = test_BN_even("test/bntest.c",
                                                                                 0x7ff,&_LC172,
                                                                                 local_48);
                                                            if (iVar1 != 0) {
                                                              BN_free(local_48);
                                                              local_48 = (BIGNUM *)0x0;
                                                              iVar1 = BN_dec2bn(&local_48,
                                                                                                                                                                
                                                  "42trailing garbage is ignored");
                                                  iVar1 = test_int_eq("test/bntest.c",0x804,
                                                                                                                                            
                                                  "parsedecBN(&bn, \"42trailing garbage is ignored\")"
                                                  ,&_LC249,iVar1,2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_abs_eq_word("test/bntest.c",
                                                                                0x805,&_LC172,
                                                                                &_LC230,local_48,
                                                                                0x2a);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_BN_ge_zero("test/bntest.c",0x806,
                                                                              &_LC172,local_48);
                                                      if (iVar1 != 0) {
                                                        iVar1 = test_BN_gt_zero("test/bntest.c",
                                                                                0x807,&_LC172,
                                                                                local_48);
                                                        if (iVar1 != 0) {
                                                          iVar1 = test_BN_ne_zero("test/bntest.c",
                                                                                  0x808,&_LC172,
                                                                                  local_48);
                                                          if (iVar1 != 0) {
                                                            iVar1 = test_BN_even("test/bntest.c",
                                                                                 0x809,&_LC172,
                                                                                 local_48);
                                                            bVar2 = iVar1 != 0;
                                                            goto LAB_00106ae3;
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
  bVar2 = false;
LAB_00106ae3:
  BN_free(local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_kronecker(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BIGNUM *rnd;
  BIGNUM *ret;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *pBVar4;
  undefined4 uVar5;
  int local_3c;
  
  rnd = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x476,"a = BN_new()",rnd);
  if (iVar1 == 0) {
    iVar1 = 0;
    a = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    ret = (BIGNUM *)0x0;
  }
  else {
    ret = BN_new();
    iVar1 = test_ptr("test/bntest.c",0x477,"b = BN_new()",ret);
    if (iVar1 == 0) {
      a = (BIGNUM *)0x0;
      r = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      r = BN_new();
      a = (BIGNUM *)0x0;
      iVar1 = test_ptr("test/bntest.c",0x478,"r = BN_new()",r);
      if (iVar1 != 0) {
        a = BN_new();
        iVar1 = test_ptr("test/bntest.c",0x479,"t = BN_new()");
        if (iVar1 != 0) {
          BN_generate_prime_ex(ret,0x200,0,(BIGNUM *)0x0,(BIGNUM *)0x0,(BN_GENCB *)0x0);
          iVar1 = test_true("test/bntest.c",0x486,
                            "BN_generate_prime_ex(b, 512, 0, NULL, NULL, NULL)");
          if (iVar1 != 0) {
            uVar2 = neg_6 & 7;
            neg_6 = neg_6 + 1;
            BN_set_negative(ret,*(int *)(sign_5 + (ulong)uVar2 * 4));
            local_3c = 100;
            do {
              iVar1 = BN_bntest_rand(rnd,0x200,0,0);
              iVar1 = test_true("test/bntest.c",0x48b,"BN_bntest_rand(a, 512, 0, 0)",iVar1 != 0);
              if (iVar1 == 0) {
                iVar1 = 0;
                goto LAB_00107057;
              }
              uVar2 = neg_6 & 7;
              neg_6 = neg_6 + 1;
              BN_set_negative(rnd,*(int *)(sign_5 + (ulong)uVar2 * 4));
              pBVar4 = BN_copy(a,ret);
              iVar1 = test_true("test/bntest.c",0x490,"BN_copy(t, b)",pBVar4 != (BIGNUM *)0x0);
              if (iVar1 == 0) goto LAB_00107106;
              BN_set_negative(a,0);
              iVar1 = BN_sub_word(a,1);
              iVar1 = test_true("test/bntest.c",0x493,"BN_sub_word(t, 1)",iVar1 != 0);
              if (iVar1 == 0) goto LAB_00107106;
              iVar1 = BN_rshift1(a,a);
              iVar1 = test_true("test/bntest.c",0x495,"BN_rshift1(t, t)",iVar1 != 0);
              if (iVar1 == 0) goto LAB_00107106;
              BN_set_negative(ret,0);
              iVar1 = BN_mod_exp_recp(r,rnd,a,ret,ctx);
              iVar1 = test_true("test/bntest.c",0x49a,"BN_mod_exp_recp(r, a, t, b, ctx)",iVar1 != 0)
              ;
              if (iVar1 == 0) goto LAB_00107106;
              BN_set_negative(ret,1);
              iVar1 = BN_is_word(r,1);
              if (iVar1 == 0) {
                iVar1 = BN_is_zero(r);
                uVar5 = 0;
                if (iVar1 == 0) {
                  iVar1 = BN_add_word(r,1);
                  iVar1 = test_true("test/bntest.c",0x4a3,"BN_add_word(r, 1)",iVar1 != 0);
                  if (iVar1 == 0) goto LAB_00107106;
                  iVar1 = BN_ucmp(r,ret);
                  iVar1 = test_int_eq("test/bntest.c",0x4a5,"BN_ucmp(r, b)",&_LC26,iVar1,0);
                  if (iVar1 == 0) {
                    test_info("test/bntest.c",0x4a6,"Legendre symbol computation failed");
                    goto LAB_00107106;
                  }
                  uVar5 = 0xffffffff;
                }
              }
              else {
                uVar5 = 1;
              }
              iVar1 = BN_kronecker(rnd,ret,ctx);
              iVar3 = test_int_ge("test/bntest.c",0x4ac,"kronecker = BN_kronecker(a, b, ctx)",
                                  &_LC272,iVar1,0xffffffff);
              if (iVar3 == 0) goto LAB_00107106;
              iVar3 = BN_is_negative(rnd);
              if (iVar3 != 0) {
                iVar3 = BN_is_negative(ret);
                if (iVar3 != 0) {
                  iVar1 = -iVar1;
                }
              }
              iVar1 = test_int_eq("test/bntest.c",0x4b2,"legendre","kronecker",uVar5,iVar1);
              if (iVar1 == 0) goto LAB_00107106;
              local_3c = local_3c + -1;
            } while (local_3c != 0);
            iVar1 = 1;
            goto LAB_00107057;
          }
        }
LAB_00107106:
        iVar1 = 0;
      }
    }
  }
LAB_00107057:
  BN_free(rnd);
  BN_free(ret);
  BN_free(r);
  BN_free(a);
  return iVar1;
}



int parse_bigBN(BIGNUM **param_1,undefined8 param_2)

{
  int iVar1;
  char *str;
  
  str = (char *)glue_strings(param_2,0);
  iVar1 = BN_hex2bn(param_1,str);
  CRYPTO_free(str);
  return iVar1;
}



uint test_modexp_mont5(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *rr;
  BIGNUM *r;
  BN_MONT_CTX *mont;
  long in_FS_OFFSET;
  BIGNUM *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (BIGNUM *)0x0;
  local_68 = (BIGNUM *)0x0;
  local_60 = (BIGNUM *)0x0;
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  local_70 = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x1df,"a = BN_new()",local_70);
  if (iVar1 != 0) {
    local_68 = BN_new();
    iVar1 = test_ptr("test/bntest.c",0x1e0,"p = BN_new()",local_68);
    if (iVar1 != 0) {
      local_60 = BN_new();
      iVar1 = test_ptr("test/bntest.c",0x1e1,"m = BN_new()",local_60);
      if (iVar1 != 0) {
        rr = BN_new();
        iVar1 = test_ptr("test/bntest.c",0x1e2,"d = BN_new()",rr);
        if (iVar1 == 0) {
LAB_00107635:
          uVar2 = 0;
          mont = (BN_MONT_CTX *)0x0;
          r = (BIGNUM *)0x0;
        }
        else {
          local_58 = BN_new();
          uVar2 = test_ptr("test/bntest.c",0x1e3,"e = BN_new()",local_58);
          if (uVar2 != 0) {
            local_50 = BN_new();
            uVar2 = test_ptr("test/bntest.c",0x1e4,"b = BN_new()",local_50);
            if (uVar2 != 0) {
              local_48 = BN_new();
              iVar1 = test_ptr("test/bntest.c",0x1e5,"n = BN_new()",local_48);
              if (iVar1 != 0) {
                r = BN_new();
                mont = (BN_MONT_CTX *)0x0;
                uVar2 = test_ptr("test/bntest.c",0x1e6,"c = BN_new()",r);
                if (uVar2 != 0) {
                  mont = BN_MONT_CTX_new();
                  iVar1 = test_ptr("test/bntest.c",0x1e7,"mont = BN_MONT_CTX_new()",mont);
                  if (iVar1 != 0) {
                    BN_bntest_rand(local_60,0x400,0,1);
                    iVar1 = test_true("test/bntest.c",0x1eb,"BN_bntest_rand(m, 1024, 0, 1)");
                    if (iVar1 != 0) {
                      iVar1 = BN_bntest_rand(local_70,0x400,0,0);
                      iVar1 = test_true("test/bntest.c",0x1ed,"BN_bntest_rand(a, 1024, 0, 0)",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        BN_zero_ex(local_68);
                        iVar1 = BN_mod_exp_mont_consttime
                                          (rr,local_70,local_68,local_60,ctx,(BN_MONT_CTX *)0x0);
                        iVar1 = test_true("test/bntest.c",0x1f1,
                                          "BN_mod_exp_mont_consttime(d, a, p, m, ctx, NULL)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = test_BN_eq_one("test/bntest.c",499,&_LC87,rr);
                          if (iVar1 != 0) {
                            iVar1 = BN_hex2bn(&local_70,
                                              "7878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878787878"
                                             );
                            iVar1 = test_true("test/bntest.c",0x1f7,
                                              "BN_hex2bn(&a, \"7878787878787878787878787878787878787878787878787878787878787878\" \"7878787878787878787878787878787878787878787878787878787878787878\" \"7878787878787878787878787878787878787878787878787878787878787878\" \"7878787878787878787878787878787878787878787878787878787878787878\")"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = BN_hex2bn(&local_50,
                                                "095D72C08C097BA488C5E439C655A192EAFB6380073D8C2664668EDDB4060744E16E57FB4EDB9AE10A0CEFCDC28A894F689A128379DB279D48A2E20849D685939B7803BCF46CEBF5C533FB0DD35B080593DE5472E3FE5DB951B8BFF9B4CB8F039CC638A5EE8CDD703719F8000E6A9F63BEED5F2FCD52FF293EA05A251BB4AB81"
                                               );
                              iVar1 = test_true("test/bntest.c",0x1fc,
                                                "BN_hex2bn(&b, \"095D72C08C097BA488C5E439C655A192EAFB6380073D8C2664668EDDB4060744\" \"E16E57FB4EDB9AE10A0CEFCDC28A894F689A128379DB279D48A2E20849D68593\" \"9B7803BCF46CEBF5C533FB0DD35B080593DE5472E3FE5DB951B8BFF9B4CB8F03\" \"9CC638A5EE8CDD703719F8000E6A9F63BEED5F2FCD52FF293EA05A251BB4AB81\")"
                                                ,iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = BN_hex2bn(&local_48,
                                                  "D78AF684E71DB0C39CFF4E64FB9DB567132CB9C50CC98009FEB820B26F2DED9B91B9B5E2B83AE0AE4EB4E0523CA726BFBE969B89FD754F674CE99118C3F2D1C5D81FDC7C54E02B60262B241D53C040E99E45826ECA37A804668E690E1AFC1CA42C9A15D84D4954425F0B7642FC0BD9D7B24E2618D2DCC9B729D944BADACFDDAF"
                                                 );
                                iVar1 = test_true("test/bntest.c",0x201,
                                                  "BN_hex2bn(&n, \"D78AF684E71DB0C39CFF4E64FB9DB567132CB9C50CC98009FEB820B26F2DED9B\" \"91B9B5E2B83AE0AE4EB4E0523CA726BFBE969B89FD754F674CE99118C3F2D1C5\" \"D81FDC7C54E02B60262B241D53C040E99E45826ECA37A804668E690E1AFC1CA4\" \"2C9A15D84D4954425F0B7642FC0BD9D7B24E2618D2DCC9B729D944BADACFDDAF\")"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = BN_MONT_CTX_set(mont,local_48,ctx);
                                  iVar1 = test_true("test/bntest.c",0x208,
                                                    "BN_MONT_CTX_set(mont, n, ctx)",iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = BN_mod_mul_montgomery(r,local_70,local_50,mont,ctx);
                                    iVar1 = test_true("test/bntest.c",0x209,
                                                      "BN_mod_mul_montgomery(c, a, b, mont, ctx)",
                                                      iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = BN_mod_mul_montgomery(rr,local_50,local_70,mont,ctx);
                                      iVar1 = test_true("test/bntest.c",0x20a,
                                                        "BN_mod_mul_montgomery(d, b, a, mont, ctx)",
                                                        iVar1 != 0);
                                      if (iVar1 != 0) {
                                        iVar1 = test_BN_eq("test/bntest.c",0x20b,&_LC110,&_LC87,r,rr
                                                          );
                                        if (iVar1 != 0) {
                                          iVar1 = parse_bigBN(&local_48,bn1strings);
                                          iVar1 = test_true("test/bntest.c",0x20f,
                                                            "parse_bigBN(&n, bn1strings)",iVar1 != 0
                                                           );
                                          if (iVar1 != 0) {
                                            iVar1 = parse_bigBN(&local_70,bn2strings);
                                            iVar1 = test_true("test/bntest.c",0x210,
                                                              "parse_bigBN(&a, bn2strings)",
                                                              iVar1 != 0);
                                            if (iVar1 != 0) {
                                              BN_free(local_50);
                                              local_50 = BN_dup(local_70);
                                              iVar1 = test_ptr("test/bntest.c",0x213,"b = BN_dup(a)"
                                                               ,local_50);
                                              if (iVar1 != 0) {
                                                iVar1 = BN_MONT_CTX_set(mont,local_48,ctx);
                                                iVar1 = test_true("test/bntest.c",0x214,
                                                                  "BN_MONT_CTX_set(mont, n, ctx)",
                                                                  iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = BN_mod_mul_montgomery
                                                                    (r,local_70,local_70,mont,ctx);
                                                  iVar1 = test_true("test/bntest.c",0x215,
                                                                                                                                        
                                                  "BN_mod_mul_montgomery(c, a, a, mont, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_mul_montgomery
                                                                      (rr,local_70,local_50,mont,ctx
                                                                      );
                                                    iVar1 = test_true("test/bntest.c",0x216,
                                                                                                                                            
                                                  "BN_mod_mul_montgomery(d, a, b, mont, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/bntest.c",0x217,&_LC110
                                                                       ,&_LC87,r,rr);
                                                    if (iVar1 != 0) {
                                                      iVar1 = parse_bigBN(&local_70,ahex_4);
                                                      iVar1 = test_true("test/bntest.c",0x23b,
                                                                        "parse_bigBN(&a, ahex)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = parse_bigBN(&local_48,nhex_3);
                                                        iVar1 = test_true("test/bntest.c",0x23c,
                                                                          "parse_bigBN(&n, nhex)",
                                                                          iVar1 != 0);
                                                        if (iVar1 != 0) {
                                                          BN_free(local_50);
                                                          local_50 = BN_dup(local_70);
                                                          iVar1 = test_ptr("test/bntest.c",0x240,
                                                                           "b = BN_dup(a)",local_50)
                                                          ;
                                                          if (iVar1 != 0) {
                                                            iVar1 = BN_MONT_CTX_set(mont,local_48,
                                                                                    ctx);
                                                            iVar1 = test_true("test/bntest.c",0x241,
                                                                                                                                                            
                                                  "BN_MONT_CTX_set(mont, n, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_mul_montgomery
                                                                      (r,local_70,local_70,mont,ctx)
                                                    ;
                                                    iVar1 = test_true("test/bntest.c",0x244,
                                                                                                                                            
                                                  "BN_mod_mul_montgomery(c, a, a, mont, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_mul_montgomery
                                                                      (rr,local_70,local_50,mont,ctx
                                                                      );
                                                    iVar1 = test_true("test/bntest.c",0x245,
                                                                                                                                            
                                                  "BN_mod_mul_montgomery(d, a, b, mont, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/bntest.c",0x246,&_LC110
                                                                       ,&_LC87,r,rr);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_hex2bn(&local_70,
                                                                                                                                                
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                                                  );
                                                  iVar1 = test_true("test/bntest.c",0x24a,
                                                                                                                                        
                                                  "BN_hex2bn(&a, \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_48,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                                                  );
                                                  iVar1 = test_true("test/bntest.c",0x24e,
                                                                                                                                        
                                                  "BN_hex2bn(&n, \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_MONT_CTX_set(mont,local_48,ctx);
                                                    iVar1 = test_true("test/bntest.c",0x251,
                                                                                                                                            
                                                  "BN_MONT_CTX_set(mont, n, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_mul_montgomery
                                                                      (rr,local_70,local_70,mont,ctx
                                                                      );
                                                    iVar1 = test_false("test/bntest.c",0x252,
                                                                                                                                              
                                                  "BN_mod_mul_montgomery(d, a, a, mont, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_70,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF2020202020DF"
                                                  );
                                                  iVar1 = test_true("test/bntest.c",0x256,
                                                                                                                                        
                                                  "BN_hex2bn(&a, \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF2020202020DF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_50,
                                                                                                                                            
                                                  "2020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020FF2020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020202020"
                                                  );
                                                  iVar1 = test_true("test/bntest.c",0x25b,
                                                                                                                                        
                                                  "BN_hex2bn(&b, \"2020202020202020202020202020202020202020202020202020202020202020\" \"2020202020202020202020202020202020202020202020202020202020202020\" \"20202020202020FF202020202020202020202020202020202020202020202020\" \"2020202020202020202020202020202020202020202020202020202020202020\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_48,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF2020202020FF"
                                                  );
                                                  iVar1 = test_true("test/bntest.c",0x260,
                                                                                                                                        
                                                  "BN_hex2bn(&n, \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF2020202020FF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_MONT_CTX_set(mont,local_48,ctx);
                                                    iVar1 = test_true("test/bntest.c",0x265,
                                                                                                                                            
                                                  "BN_MONT_CTX_set(mont, n, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_exp_mont_consttime
                                                                      (r,local_70,local_50,local_48,
                                                                       ctx,mont);
                                                    iVar1 = test_true("test/bntest.c",0x266,
                                                                                                                                            
                                                  "BN_mod_exp_mont_consttime(c, a, b, n, ctx, mont)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_exp_mont(rr,local_70,local_50,
                                                                            local_48,ctx,mont);
                                                    iVar1 = test_true("test/bntest.c",0x267,
                                                                                                                                            
                                                  "BN_mod_exp_mont(d, a, b, n, ctx, mont)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/bntest.c",0x268,&_LC110
                                                                       ,&_LC87,r,rr);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_hex2bn(&local_70,
                                                                                                                                                
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF2020202020DF"
                                                  );
                                                  iVar1 = test_true("test/bntest.c",0x26f,
                                                                                                                                        
                                                  "BN_hex2bn(&a, \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF2020202020DF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_50,
                                                                                                                                            
                                                  "1FA53F26F8811C58BE0357897AA5E165693230BC9DF5F01DFA6A2D59229EC69D9DE6A89C36E3B6957B22D6FAAD5A3C73AE587B710DBE92E83D3A9A3339A085CBB58F508CA4F837924BB52CC1698B7FDC2FD74362456A595A5B58E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E"
                                                  );
                                                  iVar1 = test_true("test/bntest.c",0x274,
                                                                                                                                        
                                                  "BN_hex2bn(&b, \"1FA53F26F8811C58BE0357897AA5E165693230BC9DF5F01DFA6A2D59229EC69D\" \"9DE6A89C36E3B6957B22D6FAAD5A3C73AE587B710DBE92E83D3A9A3339A085CB\" \"B58F508CA4F837924BB52CC1698B7FDC2FD74362456A595A5B58E38E38E38E38\" \"E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E38E\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_48,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF2020202020DF"
                                                  );
                                                  iVar1 = test_true("test/bntest.c",0x279,
                                                                                                                                        
                                                  "BN_hex2bn(&n, \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF2020202020DF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_MONT_CTX_set(mont,local_48,ctx);
                                                    iVar1 = test_true("test/bntest.c",0x27e,
                                                                                                                                            
                                                  "BN_MONT_CTX_set(mont, n, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_exp_mont_consttime
                                                                      (r,local_70,local_50,local_48,
                                                                       ctx,mont);
                                                    iVar1 = test_true("test/bntest.c",0x27f,
                                                                                                                                            
                                                  "BN_mod_exp_mont_consttime(c, a, b, n, ctx, mont)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    BN_zero_ex(rr);
                                                    iVar1 = test_BN_eq("test/bntest.c",0x282,&_LC110
                                                                       ,&_LC87,r);
                                                    if (iVar1 != 0) {
                                                      iVar1 = parse_bigBN(&local_58,ehex_2);
                                                      iVar1 = test_true("test/bntest.c",0x2a9,
                                                                        "parse_bigBN(&e, ehex)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = parse_bigBN(&local_68,phex_1);
                                                        iVar1 = test_true("test/bntest.c",0x2aa,
                                                                          "parse_bigBN(&p, phex)",
                                                                          iVar1 != 0);
                                                        if (iVar1 != 0) {
                                                          iVar1 = parse_bigBN(&local_60,mhex_0);
                                                          iVar1 = test_true("test/bntest.c",0x2ab,
                                                                            "parse_bigBN(&m, mhex)",
                                                                            iVar1 != 0);
                                                          if (iVar1 != 0) {
                                                            iVar1 = BN_mod_exp_mont_consttime
                                                                              (rr,local_58,local_68,
                                                                               local_60,ctx,
                                                                               (BN_MONT_CTX *)0x0);
                                                            iVar1 = test_true("test/bntest.c",0x2ac,
                                                                                                                                                            
                                                  "BN_mod_exp_mont_consttime(d, e, p, m, ctx, NULL)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_exp_simple(local_70,local_58,
                                                                              local_68,local_60,ctx)
                                                    ;
                                                    iVar1 = test_true("test/bntest.c",0x2ad,
                                                                                                                                            
                                                  "BN_mod_exp_simple(a, e, p, m, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/bntest.c",0x2ae,&_LC116
                                                                       ,&_LC87,local_70);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_bntest_rand(local_68,0x400,0,0);
                                                      iVar1 = test_true("test/bntest.c",0x2b3,
                                                                                                                                                
                                                  "BN_bntest_rand(p, 1024, 0, 0)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    BN_zero_ex(local_70);
                                                    iVar1 = BN_mod_exp_mont_consttime
                                                                      (rr,local_70,local_68,local_60
                                                                       ,ctx,(BN_MONT_CTX *)0x0);
                                                    iVar1 = test_true("test/bntest.c",0x2b6,
                                                                                                                                            
                                                  "BN_mod_exp_mont_consttime(d, a, p, m, ctx, NULL)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq_zero("test/bntest.c",0x2b7,
                                                                            &_LC87,rr);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_set_word(local_70,1);
                                                      iVar1 = test_true("test/bntest.c",0x2bf,
                                                                        "BN_one(a)",iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = BN_MONT_CTX_set(mont,local_60,ctx);
                                                        iVar1 = test_true("test/bntest.c",0x2c0,
                                                                                                                                                    
                                                  "BN_MONT_CTX_set(mont, m, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_from_montgomery(local_58,local_70,
                                                                               mont,ctx);
                                                    iVar1 = test_true("test/bntest.c",0x2c2,
                                                                                                                                            
                                                  "BN_from_montgomery(e, a, mont, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_exp_mont_consttime
                                                                      (rr,local_58,local_68,local_60
                                                                       ,ctx,(BN_MONT_CTX *)0x0);
                                                    iVar1 = test_true("test/bntest.c",0x2c3,
                                                                                                                                            
                                                  "BN_mod_exp_mont_consttime(d, e, p, m, ctx, NULL)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_exp_simple(local_70,local_58,
                                                                              local_68,local_60,ctx)
                                                    ;
                                                    iVar1 = test_true("test/bntest.c",0x2c4,
                                                                                                                                            
                                                  "BN_mod_exp_simple(a, e, p, m, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/bntest.c",0x2c5,&_LC116
                                                                       ,&_LC87,local_70);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_bntest_rand(local_58,0x400,0,0);
                                                      iVar1 = test_true("test/bntest.c",0x2c9,
                                                                                                                                                
                                                  "BN_bntest_rand(e, 1024, 0, 0)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_exp_mont_consttime
                                                                      (rr,local_58,local_68,local_60
                                                                       ,ctx,(BN_MONT_CTX *)0x0);
                                                    iVar1 = test_true("test/bntest.c",0x2ca,
                                                                                                                                            
                                                  "BN_mod_exp_mont_consttime(d, e, p, m, ctx, NULL)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_mod_exp_simple(local_70,local_58,
                                                                              local_68,local_60,ctx)
                                                    ;
                                                    iVar1 = test_true("test/bntest.c",0x2cb,
                                                                                                                                            
                                                  "BN_mod_exp_simple(a, e, p, m, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/bntest.c",0x2cc,&_LC116
                                                                       ,&_LC87,local_70,rr);
                                                    uVar2 = (uint)(iVar1 != 0);
                                                    goto LAB_00107543;
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
                  }
                  uVar2 = 0;
                }
                goto LAB_00107543;
              }
              goto LAB_00107635;
            }
          }
          mont = (BN_MONT_CTX *)0x0;
          r = (BIGNUM *)0x0;
        }
        goto LAB_00107543;
      }
    }
  }
  uVar2 = 0;
  mont = (BN_MONT_CTX *)0x0;
  r = (BIGNUM *)0x0;
  rr = (BIGNUM *)0x0;
LAB_00107543:
  BN_MONT_CTX_free(mont);
  BN_free(local_70);
  BN_free(local_68);
  BN_free(local_60);
  BN_free(rr);
  BN_free(local_58);
  BN_free(local_50);
  BN_free(local_48);
  BN_free(r);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_mod_exp_alias(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  BIGNUM *a;
  char *ptr;
  char *ptr_00;
  code *pcVar4;
  long in_FS_OFFSET;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  iVar1 = BN_dec2bn(&local_58,"15");
  iVar1 = test_true("test/bntest.c",0xc93,"BN_dec2bn(&a, \"15\")",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = BN_dec2bn(&local_50,"10");
    iVar1 = test_true("test/bntest.c",0xc95,"BN_dec2bn(&b, \"10\")",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_dec2bn(&local_48,"39");
      iVar1 = test_true("test/bntest.c",0xc97,"BN_dec2bn(&c, \"39\")",iVar1 != 0);
      if (iVar1 != 0) {
        a = BN_new();
        iVar1 = test_ptr("test/bntest.c",0xc99,"r = BN_new()",a);
        if (iVar1 != 0) {
          if (param_1 == 0) {
            pcVar4 = BN_mod_exp_simple;
          }
          else {
            pcVar4 = BN_mod_exp_recp;
          }
          uVar2 = (*pcVar4)(a,local_58,local_50,local_48,ctx);
          iVar1 = test_int_eq("test/bntest.c",0xc9c,
                              "(idx == 0 ? BN_mod_exp_simple : BN_mod_exp_recp)(r, a, b, c, ctx)",
                              &_LC32,uVar2,1);
          if (iVar1 != 0) {
            ptr = BN_bn2dec(a);
            iVar1 = test_ptr_ne("test/bntest.c",0xc9f,"str = BN_bn2dec(r)",&_LC330,ptr,0);
            if (iVar1 != 0) {
              iVar1 = test_str_eq("test/bntest.c",0xca1,&_LC334,&_LC333,ptr,&_LC332);
              if (iVar1 != 0) {
                ptr_00 = (char *)0x0;
                CRYPTO_free(ptr);
                BN_copy(a,local_50);
                uVar2 = (*pcVar4)(a,local_58,a,local_48,ctx);
                uVar3 = test_int_eq("test/bntest.c",0xcaa,
                                    "(idx == 0 ? BN_mod_exp_simple : BN_mod_exp_recp)(r, a, r, c, ctx)"
                                    ,&_LC32,uVar2,1);
                if (uVar3 == 0) goto LAB_001084cc;
                ptr_00 = BN_bn2dec(a);
                uVar3 = test_ptr_ne("test/bntest.c",0xcad,"str = BN_bn2dec(r)",&_LC330,ptr_00,0);
                if (uVar3 == 0) goto LAB_001084cc;
                uVar3 = test_str_eq("test/bntest.c",0xcaf,&_LC334,&_LC333,ptr_00,&_LC332);
                if (uVar3 == 0) goto LAB_001084cc;
                CRYPTO_free(ptr_00);
                if (param_1 == 0) {
                  iVar1 = BN_mod_exp_simple(local_48,local_58,local_50,local_48,ctx);
                  iVar1 = test_int_eq("test/bntest.c",0xcb7,"BN_mod_exp_simple(c, a, b, c, ctx)",
                                      &_LC26,iVar1,0);
                  uVar3 = (uint)(iVar1 != 0);
                  ptr_00 = (char *)0x0;
                  goto LAB_001084cc;
                }
                iVar1 = BN_mod_exp_recp(local_48,local_58,local_50,local_48,ctx);
                iVar1 = test_int_eq("test/bntest.c",0xcba,"BN_mod_exp_recp(c, a, b, c, ctx)",&_LC32,
                                    iVar1,1);
                if (iVar1 != 0) {
                  ptr_00 = BN_bn2dec(local_48);
                  uVar3 = test_ptr_ne("test/bntest.c",0xcbc,"str = BN_bn2dec(c)",&_LC330,ptr_00,0);
                  if (uVar3 != 0) {
                    iVar1 = test_str_eq("test/bntest.c",0xcbe,&_LC334,&_LC333,ptr_00,&_LC332);
                    uVar3 = (uint)(iVar1 != 0);
                  }
                  goto LAB_001084cc;
                }
                goto LAB_00108660;
              }
            }
            uVar3 = 0;
            ptr_00 = ptr;
            goto LAB_001084cc;
          }
        }
LAB_00108660:
        ptr_00 = (char *)0x0;
        uVar3 = 0;
        goto LAB_001084cc;
      }
    }
  }
  a = (BIGNUM *)0x0;
  uVar3 = 0;
  ptr_00 = (char *)0x0;
LAB_001084cc:
  BN_free(local_58);
  BN_free(local_50);
  BN_free(local_48);
  BN_free(a);
  CRYPTO_free(ptr_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_mod_inverse(void)

{
  int iVar1;
  BIGNUM *ret;
  BIGNUM *pBVar2;
  char *__s1;
  long in_FS_OFFSET;
  bool bVar3;
  BIGNUM *local_40;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (BIGNUM *)0x0;
  local_38 = (BIGNUM *)0x0;
  iVar1 = BN_dec2bn(&local_40,"5193817943");
  iVar1 = test_true("test/bntest.c",0xc6f,"BN_dec2bn(&a, \"5193817943\")",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = BN_dec2bn(&local_38,"3259122431");
    iVar1 = test_true("test/bntest.c",0xc71,"BN_dec2bn(&b, \"3259122431\")",iVar1 != 0);
    if (iVar1 != 0) {
      ret = BN_new();
      iVar1 = test_ptr("test/bntest.c",0xc73,"r = BN_new()",ret);
      if (iVar1 != 0) {
        pBVar2 = BN_mod_inverse(ret,local_40,local_38,ctx);
        iVar1 = test_ptr_eq("test/bntest.c",0xc75,"BN_mod_inverse(r, a, b, ctx)",&_LC129,pBVar2,ret)
        ;
        if (iVar1 != 0) {
          __s1 = BN_bn2dec(ret);
          iVar1 = test_ptr_ne("test/bntest.c",0xc77,"str = BN_bn2dec(r)",&_LC330,__s1,0);
          if (iVar1 != 0) {
            iVar1 = strcmp(__s1,"2609653924");
            iVar1 = test_int_eq("test/bntest.c",0xc79,"strcmp(str, \"2609653924\")",&_LC26,iVar1,0);
            if (iVar1 != 0) {
              pBVar2 = BN_mod_inverse(local_38,local_40,local_38,ctx);
              iVar1 = test_ptr_null("test/bntest.c",0xc7d,"BN_mod_inverse(b, a, b, ctx)",pBVar2);
              bVar3 = iVar1 != 0;
              goto LAB_001088df;
            }
          }
          bVar3 = false;
          goto LAB_001088df;
        }
      }
      __s1 = (char *)0x0;
      bVar3 = false;
      goto LAB_001088df;
    }
  }
  ret = (BIGNUM *)0x0;
  __s1 = (char *)0x0;
  bVar3 = false;
LAB_001088df:
  BN_free(local_40);
  BN_free(local_38);
  BN_free(ret);
  CRYPTO_free(__s1);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_div_recip(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *rnd;
  BIGNUM *rnd_00;
  BIGNUM *rem;
  BIGNUM *dv;
  BN_RECP_CTX *recp;
  BIGNUM *pBVar3;
  ulong w;
  BIGNUM *local_50;
  
  rnd = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x11a,"a = BN_new()",rnd);
  if (iVar1 == 0) {
    recp = (BN_RECP_CTX *)0x0;
    dv = (BIGNUM *)0x0;
    rem = (BIGNUM *)0x0;
    rnd_00 = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
    iVar1 = 0;
  }
  else {
    rnd_00 = BN_new();
    iVar1 = test_ptr("test/bntest.c",0x11b,"b = BN_new()",rnd_00);
    if (iVar1 == 0) {
      local_50 = (BIGNUM *)0x0;
      recp = (BN_RECP_CTX *)0x0;
      dv = (BIGNUM *)0x0;
      rem = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      rem = BN_new();
      iVar1 = test_ptr("test/bntest.c",0x11c,"c = BN_new()",rem);
      if (iVar1 == 0) {
        local_50 = (BIGNUM *)0x0;
        recp = (BN_RECP_CTX *)0x0;
        dv = (BIGNUM *)0x0;
        iVar1 = 0;
      }
      else {
        dv = BN_new();
        iVar1 = test_ptr("test/bntest.c",0x11d,"d = BN_new()",dv);
        if (iVar1 == 0) {
          local_50 = (BIGNUM *)0x0;
          recp = (BN_RECP_CTX *)0x0;
          iVar1 = 0;
        }
        else {
          local_50 = BN_new();
          recp = (BN_RECP_CTX *)0x0;
          iVar1 = test_ptr("test/bntest.c",0x11e,"e = BN_new()",local_50);
          if (iVar1 != 0) {
            recp = BN_RECP_CTX_new();
            iVar1 = test_ptr("test/bntest.c",0x11f,"recp = BN_RECP_CTX_new()");
            if (iVar1 == 0) {
LAB_00108eca:
              iVar1 = 0;
            }
            else {
              w = 0;
              do {
                if (w < 0x32) {
                  iVar1 = BN_bntest_rand(rnd,400,0,0);
                  iVar1 = test_true("test/bntest.c",0x124,"BN_bntest_rand(a, 400, 0, 0)",iVar1 != 0)
                  ;
                  if (iVar1 == 0) goto LAB_00108eca;
                  pBVar3 = BN_copy(rnd_00,rnd);
                  iVar1 = test_ptr("test/bntest.c",0x125,"BN_copy(b, a)",pBVar3);
                  if (iVar1 == 0) goto LAB_00108eca;
                  iVar1 = BN_lshift(rnd,rnd,(int)w);
                  iVar1 = test_true("test/bntest.c",0x126,"BN_lshift(a, a, i)",iVar1 != 0);
                  if (iVar1 == 0) goto LAB_00108eca;
                  iVar1 = BN_add_word(rnd,w);
                  iVar1 = test_true("test/bntest.c",0x127,"BN_add_word(a, i)",iVar1 != 0);
                  if (iVar1 == 0) goto LAB_00108eca;
                }
                else {
                  iVar1 = BN_bntest_rand(rnd_00,(int)w * 3 + -100,0,0);
                  iVar1 = test_true("test/bntest.c",0x12a,
                                    "BN_bntest_rand(b, 50 + 3 * (i - NUM1), 0, 0)",iVar1 != 0);
                  if (iVar1 == 0) {
                    iVar1 = 0;
                    goto LAB_00108ae0;
                  }
                }
                uVar2 = neg_6 & 7;
                neg_6 = neg_6 + 1;
                BN_set_negative(rnd,*(int *)(sign_5 + (ulong)uVar2 * 4));
                uVar2 = neg_6 & 7;
                neg_6 = neg_6 + 1;
                BN_set_negative(rnd_00,*(int *)(sign_5 + (ulong)uVar2 * 4));
                iVar1 = BN_RECP_CTX_set(recp,rnd_00,ctx);
                iVar1 = test_true("test/bntest.c",0x12f,"BN_RECP_CTX_set(recp, b, ctx)",iVar1 != 0);
                if (iVar1 == 0) goto LAB_00108eca;
                iVar1 = BN_div_recp(dv,rem,rnd,recp,ctx);
                iVar1 = test_true("test/bntest.c",0x130,"BN_div_recp(d, c, a, recp, ctx)",iVar1 != 0
                                 );
                if (iVar1 == 0) goto LAB_00108eca;
                iVar1 = BN_mul(local_50,dv,rnd_00,ctx);
                iVar1 = test_true("test/bntest.c",0x131,"BN_mul(e, d, b, ctx)",iVar1 != 0);
                if (iVar1 == 0) goto LAB_00108eca;
                iVar1 = BN_add(dv,local_50,rem);
                iVar1 = test_true("test/bntest.c",0x132,"BN_add(d, e, c)",iVar1 != 0);
                if (iVar1 == 0) goto LAB_00108eca;
                iVar1 = BN_sub(dv,dv,rnd);
                iVar1 = test_true("test/bntest.c",0x133,"BN_sub(d, d, a)",iVar1 != 0);
                if ((iVar1 == 0) ||
                   (iVar1 = test_BN_eq_zero("test/bntest.c",0x134,&_LC87), iVar1 == 0))
                goto LAB_00108eca;
                w = w + 1;
              } while (w != 0x96);
              iVar1 = 1;
            }
          }
        }
      }
    }
  }
LAB_00108ae0:
  BN_free(rnd);
  BN_free(rnd_00);
  BN_free(rem);
  BN_free(dv);
  BN_free(local_50);
  BN_RECP_CTX_free(recp);
  return iVar1;
}



int test_sub(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *b;
  BIGNUM *rnd;
  BIGNUM *r;
  BIGNUM *pBVar3;
  ulong w;
  
  b = BN_new();
  iVar1 = test_ptr("test/bntest.c",0xf4,"a = BN_new()",b);
  if (iVar1 == 0) {
    r = (BIGNUM *)0x0;
    rnd = (BIGNUM *)0x0;
    iVar1 = 0;
  }
  else {
    rnd = BN_new();
    r = (BIGNUM *)0x0;
    iVar1 = test_ptr("test/bntest.c",0xf5,"b = BN_new()",rnd);
    if (iVar1 != 0) {
      r = BN_new();
      iVar1 = test_ptr("test/bntest.c",0xf6,"c = BN_new()");
      if (iVar1 == 0) {
LAB_001091df:
        iVar1 = 0;
      }
      else {
        w = 0;
        do {
          if (w < 0x32) {
            iVar1 = BN_bntest_rand(b,0x200,0,0);
            iVar1 = test_true("test/bntest.c",0xfb,"BN_bntest_rand(a, 512, 0, 0)",iVar1 != 0);
            if (iVar1 == 0) {
              pBVar3 = BN_copy(rnd,b);
              iVar1 = test_ptr("test/bntest.c",0xfc,"BN_copy(b, a)",pBVar3);
              if (iVar1 != 0) {
                iVar1 = BN_set_bit(b,(int)w);
                iVar1 = test_int_ne("test/bntest.c",0xfd,"BN_set_bit(a, i)",&_LC26,iVar1,0);
                if (iVar1 != 0) {
                  iVar1 = BN_add_word(rnd,w);
                  iVar1 = test_true("test/bntest.c",0xfe,"BN_add_word(b, i)",iVar1 != 0);
                  if (iVar1 != 0) goto LAB_001091df;
                }
              }
            }
          }
          else {
            iVar1 = BN_bntest_rand(rnd,(int)w + 0x15e,0,0);
            iVar1 = test_true("test/bntest.c",0x101,"BN_bntest_rand(b, 400 + i - NUM1, 0, 0)",
                              iVar1 != 0);
            if (iVar1 == 0) goto LAB_00108f51;
            uVar2 = neg_6 & 7;
            neg_6 = neg_6 + 1;
            BN_set_negative(b,*(int *)(sign_5 + (ulong)uVar2 * 4));
            uVar2 = neg_6 & 7;
            neg_6 = neg_6 + 1;
            BN_set_negative(rnd,*(int *)(sign_5 + (ulong)uVar2 * 4));
          }
          iVar1 = BN_sub(r,b,rnd);
          iVar1 = test_true("test/bntest.c",0x106,"BN_sub(c, a, b)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_001091df;
          iVar1 = BN_add(r,r,rnd);
          iVar1 = test_true("test/bntest.c",0x107,"BN_add(c, c, b)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_001091df;
          iVar1 = BN_sub(r,r,b);
          iVar1 = test_true("test/bntest.c",0x108,"BN_sub(c, c, a)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_001091df;
          iVar1 = test_BN_eq_zero("test/bntest.c",0x109,&_LC110);
          if (iVar1 == 0) goto LAB_001091df;
          w = w + 1;
        } while (w != 0x96);
        iVar1 = 1;
      }
    }
  }
LAB_00108f51:
  BN_free(b);
  BN_free(rnd);
  BN_free(r);
  return iVar1;
}



bool equalBN(undefined8 param_1,BIGNUM *param_2,BIGNUM *param_3)

{
  int iVar1;
  
  iVar1 = BN_cmp(param_2,param_3);
  if (iVar1 != 0) {
    test_error("test/bntest.c",0x87,"unexpected %s value",param_1);
    test_BN_eq("test/bntest.c",0x88,"expected","actual",param_2,param_3);
  }
  return iVar1 == 0;
}



undefined8 test_bn2padded(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  BIGNUM *rnd;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  byte bVar9;
  ulong uVar10;
  uchar local_2c8 [128];
  undefined8 local_248 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  long local_40;
  
  bVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  rnd = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x718,"(n = BN_new())",rnd);
  if (iVar1 != 0) {
    uVar2 = BN_bn2binpad(rnd,0,0);
    iVar1 = test_int_eq("test/bntest.c",0x71a,"BN_bn2binpad(n, NULL, 0)",&_LC26,uVar2,0);
    if (iVar1 != 0) {
      local_148 = 0xffffffff;
      uStack_144 = 0xffffffff;
      uStack_140 = 0xffffffff;
      uStack_13c = 0xffffffff;
      local_138 = 0xffffffff;
      uStack_134 = 0xffffffff;
      uStack_130 = 0xffffffff;
      uStack_12c = 0xffffffff;
      local_128 = 0xffffffff;
      uStack_124 = 0xffffffff;
      uStack_120 = 0xffffffff;
      uStack_11c = 0xffffffff;
      local_118 = 0xffffffff;
      uStack_114 = 0xffffffff;
      uStack_110 = 0xffffffff;
      uStack_10c = 0xffffffff;
      local_108 = 0xffffffff;
      uStack_104 = 0xffffffff;
      uStack_100 = 0xffffffff;
      uStack_fc = 0xffffffff;
      local_f8 = 0xffffffff;
      uStack_f4 = 0xffffffff;
      uStack_f0 = 0xffffffff;
      uStack_ec = 0xffffffff;
      local_e8 = 0xffffffff;
      uStack_e4 = 0xffffffff;
      uStack_e0 = 0xffffffff;
      uStack_dc = 0xffffffff;
      local_d8 = 0xffffffff;
      uStack_d4 = 0xffffffff;
      uStack_d0 = 0xffffffff;
      uStack_cc = 0xffffffff;
      local_c8 = 0xffffffff;
      uStack_c4 = 0xffffffff;
      uStack_c0 = 0xffffffff;
      uStack_bc = 0xffffffff;
      local_b8 = 0xffffffff;
      uStack_b4 = 0xffffffff;
      uStack_b0 = 0xffffffff;
      uStack_ac = 0xffffffff;
      local_a8 = 0xffffffff;
      uStack_a4 = 0xffffffff;
      uStack_a0 = 0xffffffff;
      uStack_9c = 0xffffffff;
      local_98 = 0xffffffff;
      uStack_94 = 0xffffffff;
      uStack_90 = 0xffffffff;
      uStack_8c = 0xffffffff;
      local_88 = 0xffffffff;
      uStack_84 = 0xffffffff;
      uStack_80 = 0xffffffff;
      uStack_7c = 0xffffffff;
      local_78 = 0xffffffff;
      uStack_74 = 0xffffffff;
      uStack_70 = 0xffffffff;
      uStack_6c = 0xffffffff;
      local_68 = 0xffffffff;
      uStack_64 = 0xffffffff;
      uStack_60 = 0xffffffff;
      uStack_5c = 0xffffffff;
      local_58 = 0xffffffff;
      uStack_54 = 0xffffffff;
      uStack_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      uVar2 = BN_bn2binpad(rnd,&local_148,0x100);
      iVar1 = test_int_eq("test/bntest.c",0x71d,"BN_bn2binpad(n, out, sizeof(out))","sizeof(out)",
                          uVar2,0x100);
      if (iVar1 != 0) {
        puVar7 = local_248;
        for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
        }
        iVar1 = test_mem_eq("test/bntest.c",0x720,"zeros",&_LC371,local_248,0x100,&local_148,0x100);
        if (iVar1 != 0) {
          uVar8 = 0x79;
          do {
            iVar1 = (int)uVar8;
            iVar3 = BN_rand(rnd,iVar1 * 8,0,0);
            iVar3 = test_true("test/bntest.c",0x727,
                              "BN_rand(n, bytes * 8, TOP_BIT_ON, BOTTOM_BIT_NOTOUCH)",iVar3 != 0);
            if (iVar3 == 0) goto LAB_001092c2;
            iVar4 = BN_num_bits(rnd);
            iVar3 = iVar4 + 0xe;
            if (-1 < iVar4 + 7) {
              iVar3 = iVar4 + 7;
            }
            iVar3 = test_int_eq("test/bntest.c",0x729,"BN_num_bytes(n)","bytes",iVar3 >> 3,
                                uVar8 & 0xffffffff);
            if (iVar3 == 0) goto LAB_001092c2;
            iVar3 = BN_bn2bin(rnd,local_2c8);
            iVar3 = test_int_eq("test/bntest.c",0x72a,"BN_bn2bin(n, reference)","bytes",iVar3,
                                uVar8 & 0xffffffff);
            if (iVar3 == 0) goto LAB_001092c2;
            uVar2 = BN_bn2binpad(rnd,0,0);
            iVar3 = test_int_eq("test/bntest.c",0x72d,"BN_bn2binpad(n, NULL, 0)",&_LC272,uVar2,
                                0xffffffff);
            if (iVar3 == 0) goto LAB_001092c2;
            uVar2 = BN_bn2binpad(rnd,&local_148,iVar1 + -1);
            iVar3 = test_int_eq("test/bntest.c",0x730,"BN_bn2binpad(n, out, bytes - 1)",&_LC272,
                                uVar2,0xffffffff);
            if (iVar3 == 0) goto LAB_001092c2;
            uVar2 = BN_bn2binpad(rnd,&local_148,uVar8 & 0xffffffff);
            iVar3 = test_int_eq("test/bntest.c",0x733,"BN_bn2binpad(n, out, bytes)","bytes",uVar2,
                                uVar8 & 0xffffffff);
            if (iVar3 == 0) goto LAB_001092c2;
            uVar10 = uVar8;
            iVar3 = test_mem_eq("test/bntest.c",0x734,&_LC371,"reference",&local_148,uVar8,local_2c8
                               );
            if (iVar3 == 0) goto LAB_001092c2;
            uVar2 = BN_bn2binpad(rnd,&local_148,iVar1 + 1,uVar10);
            iVar1 = test_int_eq("test/bntest.c",0x737,"BN_bn2binpad(n, out, bytes + 1)","bytes + 1",
                                uVar2,iVar1 + 1);
            if (iVar1 == 0) goto LAB_001092c2;
            iVar1 = test_mem_eq("test/bntest.c",0x738,"out + 1","reference",(long)&local_148 + 1,
                                uVar8,local_2c8,uVar8);
            if (iVar1 == 0) goto LAB_001092c2;
            iVar1 = test_mem_eq("test/bntest.c",0x739,&_LC371,"zeros",&local_148,1);
            if (iVar1 == 0) goto LAB_001092c2;
            uVar2 = BN_bn2binpad(rnd,&local_148,0x100);
            iVar1 = test_int_eq("test/bntest.c",0x73c,"BN_bn2binpad(n, out, sizeof(out))",
                                "sizeof(out)",uVar2,0x100);
            if (iVar1 == 0) goto LAB_001092c2;
            iVar1 = test_mem_eq("test/bntest.c",0x73d,"out + sizeof(out) - bytes","reference",
                                local_48 + -uVar8,uVar8,local_2c8,uVar8);
            if (iVar1 == 0) goto LAB_001092c2;
            iVar1 = test_mem_eq("test/bntest.c",0x73f,&_LC371,"zeros",&local_148,0x100 - uVar8,
                                local_248,0x100 - uVar8);
            if (iVar1 == 0) goto LAB_001092c2;
            uVar8 = uVar8 + 1;
          } while (uVar8 != 0x81);
          uVar6 = 1;
          goto LAB_001092c4;
        }
      }
    }
  }
LAB_001092c2:
  uVar6 = 0;
LAB_001092c4:
  BN_free(rnd);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 getint_constprop_0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  BIGNUM *a;
  ulong uVar2;
  undefined8 uVar3;
  
  a = (BIGNUM *)getBN(param_1,&_LC384);
  iVar1 = test_ptr("test/bntest.c",0x77,"ret = getBN(s, attribute)",a);
  if (iVar1 != 0) {
    uVar2 = BN_get_word(a);
    iVar1 = test_ulong_le("test/bntest.c",0x78,"word = BN_get_word(ret)","INT_MAX",uVar2,0x7fffffff)
    ;
    if (iVar1 != 0) {
      *param_2 = (int)uVar2;
      uVar3 = 1;
      goto LAB_001097a0;
    }
  }
  uVar3 = 0;
LAB_001097a0:
  BN_free(a);
  return uVar3;
}



bool run_file_tests(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *ptr;
  long lVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  
  uVar4 = test_get_argument((long)param_1);
  ptr = (undefined8 *)CRYPTO_zalloc(0x990,"test/bntest.c",0xcf4);
  iVar2 = test_ptr("test/bntest.c",0xcf4,"s = OPENSSL_zalloc(sizeof(*s))",ptr);
  if (iVar2 != 0) {
    iVar2 = test_start_file(ptr,uVar4);
    if (iVar2 != 0) {
LAB_00109888:
      do {
        lVar5 = BIO_ctrl((BIO *)ptr[1],2,0,(void *)0x0);
        if (((int)lVar5 != 0) || (iVar2 = test_readstanza(ptr), iVar2 == 0)) {
          test_end_file(ptr);
          iVar2 = *(int *)(ptr + 3);
          CRYPTO_free(ptr);
          return iVar2 == 0;
        }
        iVar2 = *(int *)((long)ptr + 0x24);
      } while (iVar2 == 0);
      ppuVar6 = &filetests_7;
      do {
        puVar1 = *ppuVar6;
        if (0 < iVar2) {
          puVar7 = ptr + 5;
          do {
            iVar3 = OPENSSL_strcasecmp(*puVar7,puVar1);
            if (iVar3 == 0) {
              if (puVar7[1] != 0) {
                iVar2 = (*(code *)ppuVar6[1])(ptr);
                if (iVar2 != 0) goto LAB_0010993d;
                test_info("test/bntest.c",0xce3,"%s:%d: Failed %s test",*ptr,
                          *(undefined4 *)((long)ptr + 0x14),*ppuVar6);
                goto LAB_00109938;
              }
              break;
            }
            puVar7 = puVar7 + 2;
          } while (puVar7 != ptr + (ulong)(iVar2 - 1) * 2 + 7);
        }
        ppuVar6 = ppuVar6 + 2;
        if (ppuVar6 == (undefined **)ModExpTests) goto LAB_00109916;
        iVar2 = *(int *)((long)ptr + 0x24);
      } while( true );
    }
    CRYPTO_free(ptr);
  }
  return false;
LAB_00109916:
  test_info("test/bntest.c",0xcea,"%s:%d: Unknown test",*ptr,*(undefined4 *)((long)ptr + 0x14));
LAB_00109938:
  *(int *)(ptr + 3) = *(int *)(ptr + 3) + 1;
LAB_0010993d:
  *(int *)((long)ptr + 0x1c) = *(int *)((long)ptr + 0x1c) + 1;
  test_clearstanza(ptr);
  goto LAB_00109888;
}



uint test_signed_mod_replace_ab(int param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  long lVar3;
  uint uVar4;
  BIGNUM *local_48;
  
  lVar3 = (long)param_1;
  uVar2 = *(uint *)(signed_mod_tests + lVar3 * 0x10);
  a = BN_new();
  if (a == (BIGNUM *)0x0) {
LAB_00109c88:
    a = (BIGNUM *)0x0;
  }
  else {
    uVar4 = -uVar2;
    if (0 < (int)uVar2) {
      uVar4 = uVar2;
    }
    iVar1 = BN_set_word(a,(long)(int)uVar4);
    if (iVar1 == 0) {
      BN_free(a);
      goto LAB_00109c88;
    }
    BN_set_negative(a,uVar2 >> 0x1f);
  }
  iVar1 = test_ptr("test/bntest.c",0x15e,"a = set_signed_bn(signed_mod_tests[n].n)",a);
  if (iVar1 == 0) {
    local_48 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_00109a62;
  }
  uVar2 = *(uint *)(signed_mod_tests + lVar3 * 0x10 + 4);
  a_00 = BN_new();
  if (a_00 == (BIGNUM *)0x0) {
LAB_00109c98:
    a_00 = (BIGNUM *)0x0;
  }
  else {
    uVar4 = -uVar2;
    if (0 < (int)uVar2) {
      uVar4 = uVar2;
    }
    iVar1 = BN_set_word(a_00,(long)(int)uVar4);
    if (iVar1 == 0) {
      BN_free(a_00);
      goto LAB_00109c98;
    }
    BN_set_negative(a_00,uVar2 >> 0x1f);
  }
  iVar1 = test_ptr("test/bntest.c",0x15f,"b = set_signed_bn(signed_mod_tests[n].divisor)",a_00);
  if (iVar1 == 0) {
    local_48 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_00109a62;
  }
  uVar2 = *(uint *)(signed_mod_tests + lVar3 * 0x10 + 8);
  a_01 = BN_new();
  if (a_01 == (BIGNUM *)0x0) {
LAB_00109ca8:
    a_01 = (BIGNUM *)0x0;
  }
  else {
    uVar4 = -uVar2;
    if (0 < (int)uVar2) {
      uVar4 = uVar2;
    }
    iVar1 = BN_set_word(a_01,(long)(int)uVar4);
    if (iVar1 == 0) {
      BN_free(a_01);
      goto LAB_00109ca8;
    }
    BN_set_negative(a_01,uVar2 >> 0x1f);
  }
  uVar2 = test_ptr("test/bntest.c",0x160,"c = set_signed_bn(signed_mod_tests[n].result)",a_01);
  local_48 = (BIGNUM *)0x0;
  if (uVar2 == 0) goto LAB_00109a62;
  uVar2 = *(uint *)(signed_mod_tests + lVar3 * 0x10 + 0xc);
  local_48 = BN_new();
  if (local_48 == (BIGNUM *)0x0) {
LAB_00109cb9:
    local_48 = (BIGNUM *)0x0;
  }
  else {
    uVar4 = -uVar2;
    if (0 < (int)uVar2) {
      uVar4 = uVar2;
    }
    iVar1 = BN_set_word(local_48,(long)(int)uVar4);
    if (iVar1 == 0) {
      BN_free(local_48);
      goto LAB_00109cb9;
    }
    BN_set_negative(local_48,uVar2 >> 0x1f);
  }
  uVar2 = test_ptr("test/bntest.c",0x161,"d = set_signed_bn(signed_mod_tests[n].remainder)",local_48
                  );
  if (uVar2 != 0) {
    iVar1 = BN_div(a,a_00,a,a_00,ctx);
    uVar2 = test_true("test/bntest.c",0x164,"BN_div(a, b, a, b, ctx)",iVar1 != 0);
    if (uVar2 != 0) {
      uVar2 = test_BN_eq("test/bntest.c",0x165,&_LC116,&_LC110,a,a_01);
      if (uVar2 != 0) {
        iVar1 = test_BN_eq("test/bntest.c",0x166,&_LC162,&_LC87,a_00,local_48);
        uVar2 = (uint)(iVar1 != 0);
      }
    }
  }
LAB_00109a62:
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(local_48);
  return uVar2;
}



uint test_signed_mod_replace_ba(int param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  long lVar3;
  uint uVar4;
  BIGNUM *local_48;
  
  lVar3 = (long)param_1;
  uVar2 = *(uint *)(signed_mod_tests + lVar3 * 0x10);
  a = BN_new();
  if (a == (BIGNUM *)0x0) {
LAB_00109f88:
    a = (BIGNUM *)0x0;
  }
  else {
    uVar4 = -uVar2;
    if (0 < (int)uVar2) {
      uVar4 = uVar2;
    }
    iVar1 = BN_set_word(a,(long)(int)uVar4);
    if (iVar1 == 0) {
      BN_free(a);
      goto LAB_00109f88;
    }
    BN_set_negative(a,uVar2 >> 0x1f);
  }
  iVar1 = test_ptr("test/bntest.c",0x175,"a = set_signed_bn(signed_mod_tests[n].n)",a);
  if (iVar1 == 0) {
    local_48 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_00109d62;
  }
  uVar2 = *(uint *)(signed_mod_tests + lVar3 * 0x10 + 4);
  a_00 = BN_new();
  if (a_00 == (BIGNUM *)0x0) {
LAB_00109f98:
    a_00 = (BIGNUM *)0x0;
  }
  else {
    uVar4 = -uVar2;
    if (0 < (int)uVar2) {
      uVar4 = uVar2;
    }
    iVar1 = BN_set_word(a_00,(long)(int)uVar4);
    if (iVar1 == 0) {
      BN_free(a_00);
      goto LAB_00109f98;
    }
    BN_set_negative(a_00,uVar2 >> 0x1f);
  }
  iVar1 = test_ptr("test/bntest.c",0x176,"b = set_signed_bn(signed_mod_tests[n].divisor)",a_00);
  if (iVar1 == 0) {
    local_48 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_00109d62;
  }
  uVar2 = *(uint *)(signed_mod_tests + lVar3 * 0x10 + 8);
  a_01 = BN_new();
  if (a_01 == (BIGNUM *)0x0) {
LAB_00109fa8:
    a_01 = (BIGNUM *)0x0;
  }
  else {
    uVar4 = -uVar2;
    if (0 < (int)uVar2) {
      uVar4 = uVar2;
    }
    iVar1 = BN_set_word(a_01,(long)(int)uVar4);
    if (iVar1 == 0) {
      BN_free(a_01);
      goto LAB_00109fa8;
    }
    BN_set_negative(a_01,uVar2 >> 0x1f);
  }
  uVar2 = test_ptr("test/bntest.c",0x177,"c = set_signed_bn(signed_mod_tests[n].result)",a_01);
  local_48 = (BIGNUM *)0x0;
  if (uVar2 == 0) goto LAB_00109d62;
  uVar2 = *(uint *)(signed_mod_tests + lVar3 * 0x10 + 0xc);
  local_48 = BN_new();
  if (local_48 == (BIGNUM *)0x0) {
LAB_00109fb9:
    local_48 = (BIGNUM *)0x0;
  }
  else {
    uVar4 = -uVar2;
    if (0 < (int)uVar2) {
      uVar4 = uVar2;
    }
    iVar1 = BN_set_word(local_48,(long)(int)uVar4);
    if (iVar1 == 0) {
      BN_free(local_48);
      goto LAB_00109fb9;
    }
    BN_set_negative(local_48,uVar2 >> 0x1f);
  }
  uVar2 = test_ptr("test/bntest.c",0x178,"d = set_signed_bn(signed_mod_tests[n].remainder)",local_48
                  );
  if (uVar2 != 0) {
    iVar1 = BN_div(a_00,a,a,a_00,ctx);
    uVar2 = test_true("test/bntest.c",0x17b,"BN_div(b, a, a, b, ctx)",iVar1 != 0);
    if (uVar2 != 0) {
      uVar2 = test_BN_eq("test/bntest.c",0x17c,&_LC162,&_LC110,a_00,a_01);
      if (uVar2 != 0) {
        iVar1 = test_BN_eq("test/bntest.c",0x17d,&_LC116,&_LC87,a,local_48);
        uVar2 = (uint)(iVar1 != 0);
      }
    }
  }
LAB_00109d62:
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(local_48);
  return uVar2;
}



int file_gcd(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *b;
  BIGNUM *a_00;
  BIGNUM *r;
  
  a = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x6fd,"a = getBN(s, \"A\")",a);
  if (iVar1 == 0) {
    iVar1 = 0;
    r = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
  }
  else {
    b = (BIGNUM *)getBN(param_1,&_LC399);
    iVar1 = test_ptr("test/bntest.c",0x6fe,"b = getBN(s, \"B\")",b);
    if (iVar1 == 0) {
      r = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      r = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)getBN(param_1,&_LC401);
      iVar1 = test_ptr("test/bntest.c",0x6ff,"gcd = getBN(s, \"GCD\")",a_00);
      if (iVar1 != 0) {
        r = BN_new();
        iVar1 = test_ptr("test/bntest.c",0x700,"ret = BN_new()",r);
        if (iVar1 != 0) {
          iVar1 = BN_gcd(r,a,b,ctx);
          iVar1 = test_true("test/bntest.c",0x703,"BN_gcd(ret, a, b, ctx)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = 1;
            iVar2 = BN_cmp(a_00,r);
            if (iVar2 != 0) {
              iVar1 = 0;
              test_error("test/bntest.c",0x87,"unexpected %s value","gcd(A,B)");
              test_BN_eq("test/bntest.c",0x88,"expected","actual",a_00,r);
            }
            goto LAB_0010a021;
          }
        }
        iVar1 = 0;
      }
    }
  }
LAB_0010a021:
  BN_free(a);
  BN_free(b);
  BN_free(a_00);
  BN_free(r);
  return iVar1;
}



int file_exp(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *p;
  BIGNUM *a_00;
  BIGNUM *r;
  
  a = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x6bc,"a = getBN(s, \"A\")",a);
  if (iVar1 == 0) {
    iVar1 = 0;
    r = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    p = (BIGNUM *)0x0;
  }
  else {
    p = (BIGNUM *)getBN(param_1,&_LC406);
    iVar1 = test_ptr("test/bntest.c",0x6bd,"e = getBN(s, \"E\")",p);
    if (iVar1 == 0) {
      r = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      r = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)getBN(param_1,&_LC408);
      iVar1 = test_ptr("test/bntest.c",0x6be,"exp = getBN(s, \"Exp\")",a_00);
      if (iVar1 != 0) {
        r = BN_new();
        iVar1 = test_ptr("test/bntest.c",0x6bf,"ret = BN_new()",r);
        if (iVar1 != 0) {
          iVar1 = BN_exp(r,a,p,ctx);
          iVar1 = test_true("test/bntest.c",0x6c2,"BN_exp(ret, a, e, ctx)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = 1;
            iVar2 = BN_cmp(a_00,r);
            if (iVar2 != 0) {
              iVar1 = 0;
              test_error("test/bntest.c",0x87,"unexpected %s value","A ^ E");
              test_BN_eq("test/bntest.c",0x88,"expected","actual",a_00,r);
            }
            goto LAB_0010a1f1;
          }
        }
        iVar1 = 0;
      }
    }
  }
LAB_0010a1f1:
  BN_free(a);
  BN_free(p);
  BN_free(a_00);
  BN_free(r);
  return iVar1;
}



int file_lshift(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *r;
  BIGNUM *pBVar3;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  a = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x565,"a = getBN(s, \"A\")",a);
  if (iVar1 == 0) {
    iVar1 = 0;
    r = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    goto LAB_0010a3d6;
  }
  r = (BIGNUM *)0x0;
  a_00 = (BIGNUM *)getBN(param_1,"LShift");
  iVar1 = test_ptr("test/bntest.c",0x566,"lshift = getBN(s, \"LShift\")",a_00);
  if (iVar1 == 0) goto LAB_0010a3d6;
  r = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x567,"ret = BN_new()",r);
  if (iVar1 != 0) {
    iVar2 = getint_constprop_0(param_1,&local_44);
    iVar1 = local_44;
    if (iVar2 != 0) {
      iVar2 = BN_lshift(r,a,local_44);
      iVar2 = test_true("test/bntest.c",0x56b,"BN_lshift(ret, a, n)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = BN_cmp(a_00,r);
        if (iVar2 == 0) {
          iVar1 = BN_rshift(r,a_00,iVar1);
          iVar1 = test_true("test/bntest.c",0x56d,"BN_rshift(ret, lshift, n)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_0010a46d;
          iVar1 = 1;
          iVar2 = BN_cmp(a,r);
          if (iVar2 == 0) goto LAB_0010a3d6;
          test_error("test/bntest.c",0x87,"unexpected %s value","A >> N");
          pBVar3 = a;
        }
        else {
          test_error("test/bntest.c",0x87,"unexpected %s value","A << N");
          pBVar3 = a_00;
        }
        iVar1 = 0;
        test_BN_eq("test/bntest.c",0x88,"expected","actual",pBVar3,r);
        goto LAB_0010a3d6;
      }
    }
  }
LAB_0010a46d:
  iVar1 = 0;
LAB_0010a3d6:
  BN_free(a);
  BN_free(a_00);
  BN_free(r);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int file_modmul(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *b;
  BIGNUM *m;
  BIGNUM *r;
  BN_MONT_CTX *mont;
  BIGNUM *a_00;
  BIGNUM *r_00;
  BIGNUM *local_58;
  
  a = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x651,"a = getBN(s, \"A\")",a);
  if (iVar1 == 0) {
    local_58 = (BIGNUM *)0x0;
    iVar1 = 0;
    r = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
    m = (BIGNUM *)0x0;
    goto LAB_0010a5f9;
  }
  b = (BIGNUM *)getBN(param_1,&_LC399);
  iVar1 = test_ptr("test/bntest.c",0x652,"b = getBN(s, \"B\")",b);
  if (iVar1 == 0) {
    local_58 = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    m = (BIGNUM *)0x0;
    iVar1 = 0;
    goto LAB_0010a5f9;
  }
  m = (BIGNUM *)getBN(param_1,&_LC418);
  iVar1 = test_ptr("test/bntest.c",0x653,"m = getBN(s, \"M\")",m);
  if (iVar1 == 0) {
    local_58 = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    iVar1 = 0;
    goto LAB_0010a5f9;
  }
  r = (BIGNUM *)0x0;
  local_58 = (BIGNUM *)getBN(param_1,"ModMul");
  iVar1 = test_ptr("test/bntest.c",0x654,"mod_mul = getBN(s, \"ModMul\")",local_58);
  if (iVar1 == 0) goto LAB_0010a5f9;
  r = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x655,"ret = BN_new()",r);
  if (iVar1 != 0) {
    iVar1 = BN_mod_mul(r,a,b,m,ctx);
    iVar1 = test_true("test/bntest.c",0x658,"BN_mod_mul(ret, a, b, m, ctx)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_cmp(local_58,r);
      if (iVar1 == 0) {
        iVar1 = BN_is_odd(m);
        if (iVar1 == 0) {
LAB_0010a786:
          iVar1 = 1;
        }
        else {
          mont = BN_MONT_CTX_new();
          a_00 = BN_new();
          r_00 = BN_new();
          iVar1 = 0;
          if ((mont != (BN_MONT_CTX *)0x0) && (a_00 != (BIGNUM *)0x0)) {
            if (r_00 == (BIGNUM *)0x0) {
              BN_MONT_CTX_free(mont);
              BN_free(a_00);
              BN_free((BIGNUM *)0x0);
              goto LAB_0010a5f9;
            }
            iVar2 = BN_MONT_CTX_set(mont,m,ctx);
            iVar2 = test_true("test/bntest.c",0x663,"BN_MONT_CTX_set(mont, m, ctx)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = BN_nnmod(a_00,a,m,ctx);
              iVar2 = test_true("test/bntest.c",0x664,"BN_nnmod(a_tmp, a, m, ctx)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = BN_nnmod(r_00,b,m,ctx);
                iVar2 = test_true("test/bntest.c",0x665,"BN_nnmod(b_tmp, b, m, ctx)",iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = BN_to_montgomery(a_00,a_00,mont,ctx);
                  iVar2 = test_true("test/bntest.c",0x666,
                                    "BN_to_montgomery(a_tmp, a_tmp, mont, ctx)",iVar2 != 0);
                  if (iVar2 != 0) {
                    iVar2 = BN_to_montgomery(r_00,r_00,mont,ctx);
                    iVar2 = test_true("test/bntest.c",0x667,
                                      "BN_to_montgomery(b_tmp, b_tmp, mont, ctx)",iVar2 != 0);
                    if (iVar2 != 0) {
                      iVar2 = BN_mod_mul_montgomery(r,a_00,r_00,mont,ctx);
                      iVar2 = test_true("test/bntest.c",0x668,
                                        "BN_mod_mul_montgomery(ret, a_tmp, b_tmp, mont, ctx)",
                                        iVar2 != 0);
                      if (iVar2 != 0) {
                        iVar2 = BN_from_montgomery(r,r,mont,ctx);
                        iVar2 = test_true("test/bntest.c",0x66a,
                                          "BN_from_montgomery(ret, ret, mont, ctx)",iVar2 != 0);
                        if ((iVar2 != 0) &&
                           (iVar1 = equalBN("A * B (mod M) (mont)",local_58,r), iVar1 != 0)) {
                          BN_MONT_CTX_free(mont);
                          BN_free(a_00);
                          BN_free(r_00);
                          goto LAB_0010a786;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          BN_MONT_CTX_free(mont);
          BN_free(a_00);
          BN_free(r_00);
        }
        goto LAB_0010a5f9;
      }
      test_error("test/bntest.c",0x87,"unexpected %s value","A * B (mod M)");
      test_BN_eq("test/bntest.c",0x88,"expected","actual",local_58,r);
    }
  }
  iVar1 = 0;
LAB_0010a5f9:
  BN_free(a);
  BN_free(b);
  BN_free(m);
  BN_free(local_58);
  BN_free(r);
  return iVar1;
}



uint file_modexp(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *p;
  BIGNUM *m;
  BIGNUM *a;
  BIGNUM *r;
  BIGNUM *r_00;
  long in_FS_OFFSET;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  local_58 = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x686,"a = getBN(s, \"A\")",local_58);
  if (iVar1 == 0) {
    r_00 = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    m = (BIGNUM *)0x0;
    p = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_0010aab5;
  }
  p = (BIGNUM *)getBN(param_1,&_LC406);
  iVar1 = test_ptr("test/bntest.c",0x687,"e = getBN(s, \"E\")",p);
  if (iVar1 == 0) {
    r_00 = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    m = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_0010aab5;
  }
  m = (BIGNUM *)getBN(param_1,&_LC418);
  iVar1 = test_ptr("test/bntest.c",0x688,"m = getBN(s, \"M\")",m);
  if (iVar1 == 0) {
    r_00 = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_0010aab5;
  }
  a = (BIGNUM *)getBN(param_1,"ModExp");
  iVar1 = test_ptr("test/bntest.c",0x689,"mod_exp = getBN(s, \"ModExp\")",a);
  if (iVar1 == 0) {
    r_00 = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_0010aab5;
  }
  r = BN_new();
  r_00 = (BIGNUM *)0x0;
  uVar2 = test_ptr("test/bntest.c",0x68a,"ret = BN_new()",r);
  if (uVar2 == 0) goto LAB_0010aab5;
  r_00 = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x68b,"d = BN_new()",r_00);
  if (iVar1 != 0) {
    iVar1 = BN_mod_exp(r,local_58,p,m,ctx);
    iVar1 = test_true("test/bntest.c",0x68e,"BN_mod_exp(ret, a, e, m, ctx)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_cmp(a,r);
      if (iVar1 != 0) {
        test_error("test/bntest.c",0x87,"unexpected %s value","A ^ E (mod M)");
        test_BN_eq("test/bntest.c",0x88,"expected","actual",a,r);
        uVar2 = 0;
        goto LAB_0010aab5;
      }
      iVar1 = BN_is_odd(m);
      if (iVar1 == 0) {
LAB_0010ad60:
        BN_hex2bn(&local_58,"050505050505");
        BN_hex2bn(&local_50,"02");
        BN_hex2bn(&local_48,
                  "414141414141414141414127414141414141414141414141414141414141414141414141414141414141414141414141414141414141414141414141414141414141414141414141414141800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"
                 );
        iVar1 = BN_mod_exp(r_00,local_58,local_50,local_48,ctx);
        iVar1 = test_true("test/bntest.c",0x6a5,"BN_mod_exp(d, a, b, c, ctx)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = BN_mul(p,local_58,local_58,ctx);
          iVar1 = test_true("test/bntest.c",0x6a6,"BN_mul(e, a, a, ctx)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = test_BN_eq("test/bntest.c",0x6a7,&_LC87,&_LC65,r_00,p);
            uVar2 = (uint)(iVar1 != 0);
            goto LAB_0010aab5;
          }
        }
      }
      else {
        iVar1 = BN_mod_exp_mont(r,local_58,p,m,ctx,(BN_MONT_CTX *)0x0);
        iVar1 = test_true("test/bntest.c",0x693,"BN_mod_exp_mont(ret, a, e, m, ctx, NULL)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          uVar2 = equalBN("A ^ E (mod M) (mont)",a,r);
          if (uVar2 == 0) goto LAB_0010aab5;
          iVar1 = BN_mod_exp_mont_consttime(r,local_58,p,m,ctx,(BN_MONT_CTX *)0x0);
          iVar1 = test_true("test/bntest.c",0x695,
                            "BN_mod_exp_mont_consttime(ret, a, e, m, ctx, NULL)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = equalBN("A ^ E (mod M) (mont const",a,r);
            if (iVar1 != 0) goto LAB_0010ad60;
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_0010aab5:
  BN_free(local_58);
  BN_free(local_50);
  BN_free(local_48);
  BN_free(r_00);
  BN_free(p);
  BN_free(m);
  BN_free(a);
  BN_free(r);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint file_square(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *r;
  BIGNUM *rem;
  
  a = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x59d,"a = getBN(s, \"A\")",a);
  if (iVar1 == 0) {
    rem = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    uVar2 = 0;
  }
  else {
    a_00 = (BIGNUM *)getBN(param_1,"Square");
    iVar1 = test_ptr("test/bntest.c",0x59e,"square = getBN(s, \"Square\")",a_00);
    if (iVar1 == 0) {
      rem = (BIGNUM *)0x0;
      r = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      uVar2 = 0;
    }
    else {
      a_01 = BN_new();
      iVar1 = test_ptr("test/bntest.c",0x59f,"zero = BN_new()",a_01);
      if (iVar1 == 0) {
        rem = (BIGNUM *)0x0;
        r = (BIGNUM *)0x0;
        uVar2 = 0;
      }
      else {
        r = BN_new();
        rem = (BIGNUM *)0x0;
        uVar2 = test_ptr("test/bntest.c",0x5a0,"ret = BN_new()",r);
        if (uVar2 != 0) {
          rem = BN_new();
          iVar1 = test_ptr("test/bntest.c",0x5a1,"remainder = BN_new()",rem);
          if (iVar1 != 0) {
            BN_zero_ex(a_01);
            iVar1 = BN_sqr(r,a,ctx);
            uVar2 = test_true("test/bntest.c",0x5a5,"BN_sqr(ret, a, ctx)",iVar1 != 0);
            if (uVar2 == 0) goto LAB_0010aee1;
            iVar1 = BN_cmp(a_00,r);
            if (iVar1 != 0) {
              test_error("test/bntest.c",0x87,"unexpected %s value",&_LC449);
              test_BN_eq("test/bntest.c",0x88,"expected","actual",a_00,r);
              uVar2 = 0;
              goto LAB_0010aee1;
            }
            iVar1 = BN_mul(r,a,a,ctx);
            iVar1 = test_true("test/bntest.c",0x5a7,"BN_mul(ret, a, a, ctx)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = BN_cmp(a_00,r);
              if (iVar1 != 0) {
                test_error("test/bntest.c",0x87,"unexpected %s value","A * A");
                test_BN_eq("test/bntest.c",0x88,"expected","actual",a_00,r);
                uVar2 = 0;
                goto LAB_0010aee1;
              }
              iVar1 = BN_div(r,rem,a_00,a,ctx);
              iVar1 = test_true("test/bntest.c",0x5a9,"BN_div(ret, remainder, square, a, ctx)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = equalBN("Square / A",a,r);
                if (iVar1 != 0) {
                  iVar1 = equalBN("Square % A",a_01,rem);
                  uVar2 = (uint)(iVar1 != 0);
                  goto LAB_0010aee1;
                }
              }
            }
          }
          uVar2 = 0;
        }
      }
    }
  }
LAB_0010aee1:
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(r);
  BN_free(rem);
  BN_free((BIGNUM *)0x0);
  return uVar2;
}



int file_rshift(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *r;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  a = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x57e,"a = getBN(s, \"A\")",a);
  if (iVar1 == 0) {
    iVar1 = 0;
    r = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    goto LAB_0010b206;
  }
  r = (BIGNUM *)0x0;
  a_00 = (BIGNUM *)getBN(param_1,"RShift");
  iVar1 = test_ptr("test/bntest.c",0x57f,"rshift = getBN(s, \"RShift\")",a_00);
  if (iVar1 == 0) goto LAB_0010b206;
  r = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x580,"ret = BN_new()",r);
  if (iVar1 != 0) {
    iVar2 = getint_constprop_0(param_1,&local_44);
    iVar1 = local_44;
    if (iVar2 != 0) {
      iVar2 = BN_rshift(r,a,local_44);
      iVar2 = test_true("test/bntest.c",0x584,"BN_rshift(ret, a, n)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = BN_cmp(a_00,r);
        if (iVar2 != 0) {
          iVar1 = 0;
          test_error("test/bntest.c",0x87,"unexpected %s value","A >> N");
          test_BN_eq("test/bntest.c",0x88,"expected","actual",a_00,r);
          goto LAB_0010b206;
        }
        if (iVar1 == 1) {
          iVar1 = BN_rshift1(r,a);
          iVar1 = test_true("test/bntest.c",0x58a,"BN_rshift1(ret, a)",iVar1 != 0);
          if (iVar1 == 0) goto LAB_0010b29d;
          iVar1 = BN_cmp(a_00,r);
          if (iVar1 != 0) {
            test_error("test/bntest.c",0x87,"unexpected %s value","A >> 1 (rshift1)");
            test_BN_eq("test/bntest.c",0x88,"expected","actual",a_00,r);
            iVar1 = 0;
            goto LAB_0010b206;
          }
        }
        iVar1 = 1;
        goto LAB_0010b206;
      }
    }
  }
LAB_0010b29d:
  iVar1 = 0;
LAB_0010b206:
  BN_free(a);
  BN_free(a_00);
  BN_free(r);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint file_lshift1(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *r;
  BIGNUM *a_02;
  BIGNUM *local_48;
  
  a = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x532,"a = getBN(s, \"A\")",a);
  if (iVar1 == 0) {
    local_48 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    uVar2 = 0;
  }
  else {
    a_00 = (BIGNUM *)getBN(param_1,"LShift1");
    iVar1 = test_ptr("test/bntest.c",0x533,"lshift1 = getBN(s, \"LShift1\")",a_00);
    if (iVar1 == 0) {
      local_48 = (BIGNUM *)0x0;
      a_02 = (BIGNUM *)0x0;
      r = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      uVar2 = 0;
    }
    else {
      a_01 = BN_new();
      iVar1 = test_ptr("test/bntest.c",0x534,"zero = BN_new()",a_01);
      if (iVar1 == 0) {
        local_48 = (BIGNUM *)0x0;
        a_02 = (BIGNUM *)0x0;
        r = (BIGNUM *)0x0;
        uVar2 = 0;
      }
      else {
        r = BN_new();
        iVar1 = test_ptr("test/bntest.c",0x535,"ret = BN_new()",r);
        if (iVar1 == 0) {
          local_48 = (BIGNUM *)0x0;
          a_02 = (BIGNUM *)0x0;
          uVar2 = 0;
        }
        else {
          a_02 = BN_new();
          uVar2 = test_ptr("test/bntest.c",0x536,"two = BN_new()",a_02);
          local_48 = (BIGNUM *)0x0;
          if (uVar2 != 0) {
            local_48 = BN_new();
            iVar1 = test_ptr("test/bntest.c",0x537,"remainder = BN_new()",local_48);
            if (iVar1 != 0) {
              BN_zero_ex(a_01);
              iVar1 = BN_set_word(a_02,2);
              iVar1 = test_true("test/bntest.c",0x53c,"BN_set_word(two, 2)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = BN_add(r,a,a);
                iVar1 = test_true("test/bntest.c",0x53d,"BN_add(ret, a, a)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = BN_cmp(a_00,r);
                  if (iVar1 != 0) {
                    test_error("test/bntest.c",0x87,"unexpected %s value","A + A");
                    test_BN_eq("test/bntest.c",0x88,"expected","actual",a_00,r);
                    uVar2 = 0;
                    goto LAB_0010b439;
                  }
                  iVar1 = BN_mul(r,a,a_02,ctx);
                  iVar1 = test_true("test/bntest.c",0x53f,"BN_mul(ret, a, two, ctx)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = equalBN("A * 2",a_00,r);
                    if (iVar1 != 0) {
                      iVar1 = BN_div(r,local_48,a_00,a_02,ctx);
                      iVar1 = test_true("test/bntest.c",0x541,
                                        "BN_div(ret, remainder, lshift1, two, ctx)",iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = equalBN("LShift1 / 2",a,r);
                        if (iVar1 != 0) {
                          iVar1 = equalBN("LShift1 % 2",a_01,local_48);
                          if (iVar1 != 0) {
                            iVar1 = BN_lshift1(r,a);
                            iVar1 = test_true("test/bntest.c",0x544,"BN_lshift1(ret, a)",iVar1 != 0)
                            ;
                            if (iVar1 != 0) {
                              iVar1 = equalBN("A << 1",a_00,r);
                              if (iVar1 != 0) {
                                iVar1 = BN_rshift1(r,a_00);
                                iVar1 = test_true("test/bntest.c",0x546,"BN_rshift1(ret, lshift1)",
                                                  iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = equalBN("LShift >> 1",a,r);
                                  if (iVar1 != 0) {
                                    iVar1 = BN_rshift1(r,a_00);
                                    iVar1 = test_true("test/bntest.c",0x548,
                                                      "BN_rshift1(ret, lshift1)",iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = equalBN("LShift >> 1",a,r);
                                      if (iVar1 != 0) {
                                        iVar1 = BN_set_bit(a_00,0);
                                        iVar1 = test_true("test/bntest.c",0x54d,
                                                          "BN_set_bit(lshift1, 0)",iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = BN_div(r,(BIGNUM *)0x0,a_00,a_02,ctx);
                                          uVar2 = test_true("test/bntest.c",0x54e,
                                                            "BN_div(ret, NULL , lshift1, two, ctx)",
                                                            iVar1 != 0);
                                          if (uVar2 == 0) goto LAB_0010b439;
                                          iVar1 = equalBN("(LShift1 | 1) / 2",a,r);
                                          if (iVar1 != 0) {
                                            iVar1 = BN_rshift1(r,a_00);
                                            iVar1 = test_true("test/bntest.c",0x550,
                                                              "BN_rshift1(ret, lshift1)",iVar1 != 0)
                                            ;
                                            if (iVar1 != 0) {
                                              iVar1 = equalBN("(LShift | 1) >> 1",a,r);
                                              uVar2 = (uint)(iVar1 != 0);
                                              goto LAB_0010b439;
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
                    }
                  }
                }
              }
            }
            uVar2 = 0;
          }
        }
      }
    }
  }
LAB_0010b439:
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(r);
  BN_free(a_02);
  BN_free(local_48);
  return uVar2;
}



uint file_product(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  BIGNUM *b;
  BIGNUM *a_00;
  BIGNUM *r;
  BIGNUM *a_01;
  BIGNUM *local_48;
  
  a = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x5d9,"a = getBN(s, \"A\")",a);
  if (iVar1 == 0) {
    local_48 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    uVar2 = 0;
  }
  else {
    b = (BIGNUM *)getBN(param_1,&_LC399);
    iVar1 = test_ptr("test/bntest.c",0x5da,"b = getBN(s, \"B\")",b);
    if (iVar1 == 0) {
      local_48 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      r = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      uVar2 = 0;
    }
    else {
      a_00 = (BIGNUM *)getBN(param_1,"Product");
      iVar1 = test_ptr("test/bntest.c",0x5db,"product = getBN(s, \"Product\")",a_00);
      if (iVar1 == 0) {
        local_48 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        r = (BIGNUM *)0x0;
        uVar2 = 0;
      }
      else {
        r = BN_new();
        iVar1 = test_ptr("test/bntest.c",0x5dc,"ret = BN_new()",r);
        if (iVar1 == 0) {
          local_48 = (BIGNUM *)0x0;
          a_01 = (BIGNUM *)0x0;
          uVar2 = 0;
        }
        else {
          local_48 = BN_new();
          a_01 = (BIGNUM *)0x0;
          uVar2 = test_ptr("test/bntest.c",0x5dd,"remainder = BN_new()",local_48);
          if (uVar2 != 0) {
            a_01 = BN_new();
            iVar1 = test_ptr("test/bntest.c",0x5de,"zero = BN_new()",a_01);
            if (iVar1 != 0) {
              BN_zero_ex(a_01);
              iVar1 = BN_mul(r,a,b,ctx);
              uVar2 = test_true("test/bntest.c",0x5e3,"BN_mul(ret, a, b, ctx)",iVar1 != 0);
              if (uVar2 == 0) goto LAB_0010b929;
              iVar1 = BN_cmp(a_00,r);
              if (iVar1 != 0) {
                test_error("test/bntest.c",0x87,"unexpected %s value","A * B");
                test_BN_eq("test/bntest.c",0x88,"expected","actual",a_00,r);
                uVar2 = 0;
                goto LAB_0010b929;
              }
              iVar1 = BN_div(r,local_48,a_00,a,ctx);
              iVar1 = test_true("test/bntest.c",0x5e5,"BN_div(ret, remainder, product, a, ctx)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = BN_cmp(b,r);
                if (iVar1 != 0) {
                  test_error("test/bntest.c",0x87,"unexpected %s value","Product / A");
                  test_BN_eq("test/bntest.c",0x88,"expected","actual",b,r);
                  uVar2 = 0;
                  goto LAB_0010b929;
                }
                iVar1 = equalBN("Product % A",a_01,local_48);
                if (iVar1 != 0) {
                  iVar1 = BN_div(r,local_48,a_00,b,ctx);
                  iVar1 = test_true("test/bntest.c",0x5e8,"BN_div(ret, remainder, product, b, ctx)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = equalBN("Product / B",a,r);
                    if (iVar1 != 0) {
                      iVar1 = equalBN("Product % B",a_01,local_48);
                      uVar2 = (uint)(iVar1 != 0);
                      goto LAB_0010b929;
                    }
                  }
                }
              }
            }
            uVar2 = 0;
          }
        }
      }
    }
  }
LAB_0010b929:
  BN_free(a);
  BN_free(b);
  BN_free(a_00);
  BN_free(r);
  BN_free(local_48);
  BN_free(a_01);
  return uVar2;
}



uint file_modsqrt(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  BIGNUM *n;
  BIGNUM *b;
  BIGNUM *ret;
  BIGNUM *pBVar3;
  BIGNUM *local_40;
  
  a = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x6d4,"a = getBN(s, \"A\")",a);
  if (iVar1 == 0) {
    uVar2 = 0;
    ret = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
    n = (BIGNUM *)0x0;
    local_40 = (BIGNUM *)0x0;
  }
  else {
    n = (BIGNUM *)getBN(param_1,&_LC488);
    iVar1 = test_ptr("test/bntest.c",0x6d5,"p = getBN(s, \"P\")",n);
    if (iVar1 == 0) {
      local_40 = (BIGNUM *)0x0;
      ret = (BIGNUM *)0x0;
      b = (BIGNUM *)0x0;
      uVar2 = 0;
    }
    else {
      b = (BIGNUM *)getBN(param_1,"ModSqrt");
      iVar1 = test_ptr("test/bntest.c",0x6d6,"mod_sqrt = getBN(s, \"ModSqrt\")",b);
      if (iVar1 == 0) {
        local_40 = (BIGNUM *)0x0;
        ret = (BIGNUM *)0x0;
        uVar2 = 0;
      }
      else {
        ret = BN_new();
        uVar2 = test_ptr("test/bntest.c",0x6d7,"ret = BN_new()",ret);
        local_40 = (BIGNUM *)0x0;
        if (uVar2 != 0) {
          local_40 = BN_new();
          iVar1 = test_ptr("test/bntest.c",0x6d8,"ret2 = BN_new()",local_40);
          if (iVar1 != 0) {
            iVar1 = BN_is_negative(b);
            if (iVar1 != 0) {
              pBVar3 = BN_mod_sqrt(ret,a,n,ctx);
              iVar1 = test_ptr_null("test/bntest.c",0x6dd,"BN_mod_sqrt(ret, a, p, ctx)",pBVar3);
              uVar2 = (uint)(iVar1 != 0);
              goto LAB_0010bcaa;
            }
            pBVar3 = BN_mod_sqrt(ret,a,n,ctx);
            iVar1 = test_ptr("test/bntest.c",0x6e5,"BN_mod_sqrt(ret, a, p, ctx)",pBVar3);
            if (iVar1 != 0) {
              iVar1 = BN_sub(local_40,n,ret);
              iVar1 = test_true("test/bntest.c",0x6e6,"BN_sub(ret2, p, ret)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = BN_cmp(local_40,b);
                if (iVar1 != 0) {
                  iVar1 = BN_cmp(b,ret);
                  if (iVar1 != 0) {
                    test_error("test/bntest.c",0x87,"unexpected %s value","sqrt(A) (mod P)");
                    test_BN_eq("test/bntest.c",0x88,"expected","actual",b,ret);
                    uVar2 = 0;
                    goto LAB_0010bcaa;
                  }
                }
                uVar2 = 1;
                goto LAB_0010bcaa;
              }
            }
          }
          uVar2 = 0;
        }
      }
    }
  }
LAB_0010bcaa:
  BN_free(a);
  BN_free(n);
  BN_free(b);
  BN_free(ret);
  BN_free(local_40);
  return uVar2;
}



uint file_quotient(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *m;
  BIGNUM *d;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *dv;
  ulong uVar3;
  ulong uVar4;
  BIGNUM *pBVar5;
  ulong uVar6;
  BIGNUM *pBVar7;
  BIGNUM *local_58;
  BIGNUM *local_50;
  
  m = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x5ff,"a = getBN(s, \"A\")",m);
  if (iVar1 == 0) {
    local_58 = (BIGNUM *)0x0;
    dv = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    d = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_0010bf62;
  }
  d = (BIGNUM *)getBN(param_1,&_LC399);
  iVar1 = test_ptr("test/bntest.c",0x600,"b = getBN(s, \"B\")",d);
  if (iVar1 == 0) {
    local_58 = (BIGNUM *)0x0;
    dv = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_0010bf62;
  }
  a = (BIGNUM *)getBN(param_1,"Quotient");
  iVar1 = test_ptr("test/bntest.c",0x601,"quotient = getBN(s, \"Quotient\")",a);
  if (iVar1 == 0) {
    local_58 = (BIGNUM *)0x0;
    dv = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_0010bf62;
  }
  a_00 = (BIGNUM *)getBN(param_1,"Remainder");
  iVar1 = test_ptr("test/bntest.c",0x602,"remainder = getBN(s, \"Remainder\")",a_00);
  if (iVar1 == 0) {
    local_58 = (BIGNUM *)0x0;
    dv = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_0010bf62;
  }
  dv = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x603,"ret = BN_new()",dv);
  if (iVar1 == 0) {
    local_58 = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_0010bf62;
  }
  local_50 = BN_new();
  uVar2 = test_ptr("test/bntest.c",0x604,"ret2 = BN_new()",local_50);
  local_58 = (BIGNUM *)0x0;
  if (uVar2 == 0) goto LAB_0010bf62;
  local_58 = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x605,"nnmod = BN_new()",local_58);
  if (iVar1 != 0) {
    iVar1 = BN_div(dv,local_50,m,d,ctx);
    iVar1 = test_true("test/bntest.c",0x608,"BN_div(ret, ret2, a, b, ctx)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_cmp(a,dv);
      if (iVar1 == 0) {
        iVar1 = BN_cmp(a_00,local_50);
        if (iVar1 == 0) {
          iVar1 = BN_mul(dv,a,d,ctx);
          iVar1 = test_true("test/bntest.c",0x60b,"BN_mul(ret, quotient, b, ctx)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BN_add(dv,dv,a_00);
            iVar1 = test_true("test/bntest.c",0x60c,"BN_add(ret, ret, remainder)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = equalBN("Quotient * B + Remainder",m,dv);
              if (iVar1 != 0) {
                uVar3 = BN_get_word(d);
                iVar1 = BN_is_negative(d);
                if ((iVar1 == 0) && (uVar3 != 0xffffffffffffffff)) {
                  uVar4 = BN_get_word(a_00);
                  pBVar5 = BN_copy(dv,m);
                  uVar2 = test_ptr("test/bntest.c",0x619,"BN_copy(ret, a)",pBVar5);
                  if (uVar2 == 0) goto LAB_0010bf62;
                  uVar6 = BN_div_word(dv,uVar3);
                  if (uVar4 != uVar6) {
                    test_error("test/bntest.c",0x622,"Got A %% B (word) mismatch");
                    uVar2 = 0;
                    goto LAB_0010bf62;
                  }
                  iVar1 = equalBN("A / B (word)",a,dv);
                  if (iVar1 == 0) goto LAB_0010c135;
                  uVar3 = BN_mod_word(m,uVar3);
                  if (uVar4 != uVar3) {
                    test_error("test/bntest.c",0x630,"Got A %% B (word) mismatch");
                    uVar2 = 0;
                    goto LAB_0010bf62;
                  }
                }
                iVar1 = BN_is_negative(d);
                uVar2 = 1;
                if (iVar1 != 0) goto LAB_0010bf62;
                pBVar5 = BN_copy(local_58,a_00);
                iVar1 = test_true("test/bntest.c",0x638,"BN_copy(nnmod, remainder)",
                                  pBVar5 != (BIGNUM *)0x0);
                if (iVar1 != 0) {
                  iVar1 = BN_is_negative(local_58);
                  if (iVar1 != 0) {
                    iVar1 = BN_add(local_58,local_58,d);
                    iVar1 = test_true("test/bntest.c",0x63a,"BN_add(nnmod, nnmod, b)",iVar1 != 0);
                    if (iVar1 == 0) goto LAB_0010c135;
                  }
                  iVar1 = BN_nnmod(dv,m,d,ctx);
                  iVar1 = test_true("test/bntest.c",0x63b,"BN_nnmod(ret, a, b, ctx)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = equalBN("A % B (non-negative)",local_58,dv);
                    uVar2 = (uint)(iVar1 != 0);
                    goto LAB_0010bf62;
                  }
                }
              }
            }
          }
          goto LAB_0010c135;
        }
        test_error("test/bntest.c",0x87,"unexpected %s value","A % B");
        pBVar5 = a_00;
        pBVar7 = local_50;
      }
      else {
        test_error("test/bntest.c",0x87,"unexpected %s value","A / B");
        pBVar5 = a;
        pBVar7 = dv;
      }
      test_BN_eq("test/bntest.c",0x88,"expected","actual",pBVar5,pBVar7);
      uVar2 = 0;
      goto LAB_0010bf62;
    }
  }
LAB_0010c135:
  uVar2 = 0;
LAB_0010bf62:
  BN_free(m);
  BN_free(d);
  BN_free(a);
  BN_free(a_00);
  BN_free(dv);
  BN_free(local_50);
  BN_free(local_58);
  return uVar2;
}



uint test_swap(void)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  BIGNUM *rnd;
  BIGNUM *rnd_00;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar5;
  
  rnd = BN_new();
  iVar2 = test_ptr("test/bntest.c",0x9c,"a = BN_new()",rnd);
  if (iVar2 == 0) {
    uVar3 = 0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    rnd_00 = (BIGNUM *)0x0;
  }
  else {
    rnd_00 = BN_new();
    iVar2 = test_ptr("test/bntest.c",0x9d,"b = BN_new()",rnd_00);
    if (iVar2 == 0) {
      a_00 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
      uVar3 = 0;
    }
    else {
      a = BN_new();
      a_00 = (BIGNUM *)0x0;
      uVar3 = test_ptr("test/bntest.c",0x9e,"c = BN_new()",a);
      if (uVar3 != 0) {
        a_00 = BN_new();
        iVar2 = test_ptr("test/bntest.c",0x9f,"d = BN_new()");
        if (iVar2 != 0) {
          BN_bntest_rand(rnd,0x400,1,0);
          iVar2 = test_true("test/bntest.c",0xa2,"BN_bntest_rand(a, 1024, 1, 0)");
          if (iVar2 != 0) {
            iVar2 = BN_bntest_rand(rnd_00,0x400,1,0);
            iVar2 = test_true("test/bntest.c",0xa3,"BN_bntest_rand(b, 1024, 1, 0)",iVar2 != 0);
            if (iVar2 != 0) {
              pBVar5 = BN_copy(a,rnd);
              iVar2 = test_ptr("test/bntest.c",0xa4,"BN_copy(c, a)",pBVar5);
              if (iVar2 != 0) {
                pBVar5 = BN_copy(a_00,rnd_00);
                iVar2 = test_ptr("test/bntest.c",0xa5,"BN_copy(d, b)",pBVar5);
                if (iVar2 != 0) {
                  iVar2 = BN_num_bits(rnd);
                  BN_swap(rnd,rnd_00);
                  iVar4 = BN_cmp(rnd,a_00);
                  if (iVar4 == 0) {
                    iVar4 = BN_cmp(rnd_00,a);
                    if (iVar4 != 0) {
                      test_error("test/bntest.c",0x87,"unexpected %s value",&_LC518);
                      test_BN_eq("test/bntest.c",0x88,"expected","actual",rnd_00,a);
                      uVar3 = 0;
                      goto LAB_0010c4a7;
                    }
                    BN_swap(rnd,rnd);
                    iVar4 = equalBN("swap with same pointer",rnd,a_00);
                    if (iVar4 != 0) {
                      uVar1 = (long)iVar2 / 0x40;
                      BN_consttime_swap(1,rnd,rnd_00,uVar1 & 0xffffffff);
                      iVar2 = equalBN("cswap true",rnd,a);
                      if (iVar2 != 0) {
                        iVar2 = equalBN("cswap true",rnd_00,a_00);
                        if (iVar2 != 0) {
                          BN_consttime_swap(1,rnd,rnd,uVar1 & 0xffffffff);
                          iVar2 = equalBN("cswap true",rnd,a);
                          if (iVar2 != 0) {
                            BN_consttime_swap(0,rnd,rnd_00,uVar1 & 0xffffffff);
                            iVar2 = equalBN("cswap false",rnd,a);
                            if (iVar2 != 0) {
                              iVar2 = equalBN("cswap false",rnd_00,a_00);
                              if (iVar2 != 0) {
                                BN_consttime_swap(0,rnd,rnd,uVar1 & 0xffffffff);
                                iVar2 = equalBN("cswap false",rnd,a);
                                if (iVar2 != 0) {
                                  BN_set_flags(rnd,4);
                                  BN_swap(rnd,rnd_00);
                                  iVar2 = equalBN("swap, flags",rnd,a_00);
                                  if (iVar2 != 0) {
                                    iVar2 = equalBN("swap, flags",rnd_00,a);
                                    if (iVar2 != 0) {
                                      iVar2 = BN_get_flags(rnd_00,4);
                                      iVar2 = test_true("test/bntest.c",0xd2,
                                                        "BN_get_flags(b, BN_FLG_CONSTTIME)",
                                                        iVar2 != 0);
                                      if (iVar2 != 0) {
                                        iVar2 = BN_get_flags(rnd,4);
                                        iVar2 = test_false("test/bntest.c",0xd3,
                                                           "BN_get_flags(a, BN_FLG_CONSTTIME)",
                                                           iVar2 != 0);
                                        if (iVar2 != 0) {
                                          BN_consttime_swap(1,rnd,rnd_00,uVar1 & 0xffffffff);
                                          iVar2 = equalBN("cswap true, flags",rnd,a);
                                          if (iVar2 != 0) {
                                            iVar2 = equalBN("cswap true, flags",rnd_00,a_00);
                                            if (iVar2 != 0) {
                                              iVar2 = BN_get_flags(rnd,4);
                                              iVar2 = test_true("test/bntest.c",0xda,
                                                                "BN_get_flags(a, BN_FLG_CONSTTIME)",
                                                                iVar2 != 0);
                                              if (iVar2 != 0) {
                                                iVar2 = BN_get_flags(rnd_00,4);
                                                iVar2 = test_false("test/bntest.c",0xdb,
                                                                                                                                      
                                                  "BN_get_flags(b, BN_FLG_CONSTTIME)",iVar2 != 0);
                                                if (iVar2 != 0) {
                                                  BN_consttime_swap(0,rnd,rnd_00,uVar1 & 0xffffffff)
                                                  ;
                                                  iVar2 = equalBN("cswap false, flags",rnd,a);
                                                  if (iVar2 != 0) {
                                                    iVar2 = equalBN("cswap false, flags",rnd_00,a_00
                                                                   );
                                                    if (iVar2 != 0) {
                                                      iVar2 = BN_get_flags(rnd,4);
                                                      iVar2 = test_true("test/bntest.c",0xe2,
                                                                                                                                                
                                                  "BN_get_flags(a, BN_FLG_CONSTTIME)",iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = BN_get_flags(rnd_00,4);
                                                    iVar2 = test_false("test/bntest.c",0xe3,
                                                                                                                                              
                                                  "BN_get_flags(b, BN_FLG_CONSTTIME)",iVar2 != 0);
                                                  uVar3 = (uint)(iVar2 != 0);
                                                  goto LAB_0010c4a7;
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
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    test_error("test/bntest.c",0x87,"unexpected %s value",&_LC518);
                    test_BN_eq("test/bntest.c",0x88,"expected","actual",rnd,a_00);
                  }
                }
              }
            }
          }
        }
        uVar3 = 0;
      }
    }
  }
LAB_0010c4a7:
  BN_free(rnd);
  BN_free(rnd_00);
  BN_free(a);
  BN_free(a_00);
  return uVar3;
}



uint file_sum(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  BIGNUM *b;
  BIGNUM *a_00;
  BIGNUM *r;
  BIGNUM *pBVar3;
  ulong w;
  
  a = (BIGNUM *)getBN(param_1,&_LC397);
  iVar1 = test_ptr("test/bntest.c",0x4c5,"a = getBN(s, \"A\")",a);
  if (iVar1 == 0) {
    uVar2 = 0;
    r = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
    goto LAB_0010ca61;
  }
  b = (BIGNUM *)getBN(param_1,&_LC399);
  iVar1 = test_ptr("test/bntest.c",0x4c6,"b = getBN(s, \"B\")",b);
  if (iVar1 == 0) {
    r = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    uVar2 = 0;
    goto LAB_0010ca61;
  }
  r = (BIGNUM *)0x0;
  a_00 = (BIGNUM *)getBN(param_1,&_LC527);
  uVar2 = test_ptr("test/bntest.c",0x4c7,"sum = getBN(s, \"Sum\")",a_00);
  if (uVar2 == 0) goto LAB_0010ca61;
  r = BN_new();
  iVar1 = test_ptr("test/bntest.c",0x4c8,"ret = BN_new()",r);
  if (iVar1 != 0) {
    iVar1 = BN_add(r,a,b);
    iVar1 = test_true("test/bntest.c",0x4cb,"BN_add(ret, a, b)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_cmp(a_00,r);
      if (iVar1 == 0) {
        iVar1 = BN_sub(r,a_00,a);
        iVar1 = test_true("test/bntest.c",0x4cd,"BN_sub(ret, sum, a)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = BN_cmp(b,r);
          if (iVar1 != 0) {
            test_error("test/bntest.c",0x87,"unexpected %s value","Sum - A");
            pBVar3 = b;
            goto LAB_0010cbe8;
          }
          iVar1 = BN_sub(r,a_00,b);
          iVar1 = test_true("test/bntest.c",0x4cf,"BN_sub(ret, sum, b)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BN_cmp(a,r);
            if (iVar1 != 0) {
              test_error("test/bntest.c",0x87,"unexpected %s value","Sum - B");
              pBVar3 = a;
              goto LAB_0010cbe8;
            }
            pBVar3 = BN_copy(r,a);
            iVar1 = test_true("test/bntest.c",0x4d8,"BN_copy(ret, a)",pBVar3 != (BIGNUM *)0x0);
            if (iVar1 != 0) {
              iVar1 = BN_add(r,r,b);
              uVar2 = test_true("test/bntest.c",0x4d9,"BN_add(ret, ret, b)",iVar1 != 0);
              if (uVar2 == 0) goto LAB_0010ca61;
              iVar1 = equalBN("A + B (r is a)",a_00,r);
              if (iVar1 != 0) {
                pBVar3 = BN_copy(r,b);
                iVar1 = test_true("test/bntest.c",0x4db,"BN_copy(ret, b)",pBVar3 != (BIGNUM *)0x0);
                if (iVar1 != 0) {
                  iVar1 = BN_add(r,a,r);
                  iVar1 = test_true("test/bntest.c",0x4dc,"BN_add(ret, a, ret)",iVar1 != 0);
                  if ((iVar1 != 0) && (iVar1 = equalBN("A + B (r is b)",a_00,r), iVar1 != 0)) {
                    pBVar3 = BN_copy(r,a_00);
                    iVar1 = test_true("test/bntest.c",0x4de,"BN_copy(ret, sum)",
                                      pBVar3 != (BIGNUM *)0x0);
                    if (iVar1 != 0) {
                      iVar1 = BN_sub(r,r,a);
                      iVar1 = test_true("test/bntest.c",0x4df,"BN_sub(ret, ret, a)",iVar1 != 0);
                      if ((iVar1 != 0) && (iVar1 = equalBN("Sum - A (r is a)",b,r), iVar1 != 0)) {
                        pBVar3 = BN_copy(r,a);
                        iVar1 = test_true("test/bntest.c",0x4e1,"BN_copy(ret, a)",
                                          pBVar3 != (BIGNUM *)0x0);
                        if (iVar1 != 0) {
                          iVar1 = BN_sub(r,a_00,r);
                          iVar1 = test_true("test/bntest.c",0x4e2,"BN_sub(ret, sum, ret)",iVar1 != 0
                                           );
                          if ((iVar1 != 0) && (iVar1 = equalBN("Sum - A (r is b)",b,r), iVar1 != 0))
                          {
                            pBVar3 = BN_copy(r,a_00);
                            iVar1 = test_true("test/bntest.c",0x4e4,"BN_copy(ret, sum)",
                                              pBVar3 != (BIGNUM *)0x0);
                            if (iVar1 != 0) {
                              iVar1 = BN_sub(r,r,b);
                              iVar1 = test_true("test/bntest.c",0x4e5,"BN_sub(ret, ret, b)",
                                                iVar1 != 0);
                              if ((iVar1 != 0) &&
                                 (iVar1 = equalBN("Sum - B (r is a)",a,r), iVar1 != 0)) {
                                pBVar3 = BN_copy(r,b);
                                iVar1 = test_true("test/bntest.c",0x4e7,"BN_copy(ret, b)",
                                                  pBVar3 != (BIGNUM *)0x0);
                                if (iVar1 != 0) {
                                  iVar1 = BN_sub(r,a_00,r);
                                  iVar1 = test_true("test/bntest.c",0x4e8,"BN_sub(ret, sum, ret)",
                                                    iVar1 != 0);
                                  if ((iVar1 != 0) &&
                                     (iVar1 = equalBN("Sum - B (r is b)",a,r), iVar1 != 0)) {
                                    iVar1 = BN_is_negative(a);
                                    if ((iVar1 == 0) &&
                                       ((iVar1 = BN_is_negative(b), iVar1 == 0 &&
                                        (iVar1 = BN_cmp(a,b), -1 < iVar1)))) {
                                      iVar1 = BN_uadd(r,a,b);
                                      iVar1 = test_true("test/bntest.c",0x4f3,"BN_uadd(ret, a, b)",
                                                        iVar1 != 0);
                                      if ((iVar1 != 0) &&
                                         (iVar1 = equalBN("A +u B",a_00,r), iVar1 != 0)) {
                                        iVar1 = BN_usub(r,a_00,a);
                                        iVar1 = test_true("test/bntest.c",0x4f5,
                                                          "BN_usub(ret, sum, a)",iVar1 != 0);
                                        if ((iVar1 != 0) &&
                                           (iVar1 = equalBN("Sum -u A",b,r), iVar1 != 0)) {
                                          iVar1 = BN_usub(r,a_00,b);
                                          iVar1 = test_true("test/bntest.c",0x4f7,
                                                            "BN_usub(ret, sum, b)",iVar1 != 0);
                                          if ((iVar1 != 0) &&
                                             (iVar1 = equalBN("Sum -u B",a,r), iVar1 != 0)) {
                                            pBVar3 = BN_copy(r,a);
                                            iVar1 = test_true("test/bntest.c",0x500,
                                                              "BN_copy(ret, a)",
                                                              pBVar3 != (BIGNUM *)0x0);
                                            if (iVar1 != 0) {
                                              iVar1 = BN_uadd(r,r,b);
                                              iVar1 = test_true("test/bntest.c",0x501,
                                                                "BN_uadd(ret, ret, b)",iVar1 != 0);
                                              if ((iVar1 != 0) &&
                                                 (iVar1 = equalBN("A +u B (r is a)",a_00,r),
                                                 iVar1 != 0)) {
                                                pBVar3 = BN_copy(r,b);
                                                iVar1 = test_true("test/bntest.c",0x503,
                                                                  "BN_copy(ret, b)",
                                                                  pBVar3 != (BIGNUM *)0x0);
                                                if (iVar1 != 0) {
                                                  iVar1 = BN_uadd(r,a,r);
                                                  iVar1 = test_true("test/bntest.c",0x504,
                                                                    "BN_uadd(ret, a, ret)",
                                                                    iVar1 != 0);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = equalBN("A +u B (r is b)",a_00,r),
                                                     iVar1 != 0)) {
                                                    pBVar3 = BN_copy(r,a_00);
                                                    iVar1 = test_true("test/bntest.c",0x506,
                                                                      "BN_copy(ret, sum)",
                                                                      pBVar3 != (BIGNUM *)0x0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_usub(r,r,a);
                                                      iVar1 = test_true("test/bntest.c",0x507,
                                                                        "BN_usub(ret, ret, a)",
                                                                        iVar1 != 0);
                                                      if ((iVar1 != 0) &&
                                                         (iVar1 = equalBN("Sum -u A (r is a)",b,r),
                                                         iVar1 != 0)) {
                                                        pBVar3 = BN_copy(r,a);
                                                        iVar1 = test_true("test/bntest.c",0x509,
                                                                          "BN_copy(ret, a)",
                                                                          pBVar3 != (BIGNUM *)0x0);
                                                        if (iVar1 != 0) {
                                                          iVar1 = BN_usub(r,a_00,r);
                                                          iVar1 = test_true("test/bntest.c",0x50a,
                                                                            "BN_usub(ret, sum, ret)"
                                                                            ,iVar1 != 0);
                                                          if ((iVar1 != 0) &&
                                                             (iVar1 = equalBN("Sum -u A (r is b)",b,
                                                                              r), iVar1 != 0)) {
                                                            pBVar3 = BN_copy(r,a_00);
                                                            iVar1 = test_true("test/bntest.c",0x50c,
                                                                              "BN_copy(ret, sum)",
                                                                              pBVar3 != (BIGNUM *)
                                                                                        0x0);
                                                            if (iVar1 != 0) {
                                                              iVar1 = BN_usub(r,r,b);
                                                              iVar1 = test_true("test/bntest.c",
                                                                                0x50d,
                                                  "BN_usub(ret, ret, b)",iVar1 != 0);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = equalBN("Sum -u B (r is a)",a,r),
                                                     iVar1 != 0)) {
                                                    pBVar3 = BN_copy(r,b);
                                                    iVar1 = test_true("test/bntest.c",0x50f,
                                                                      "BN_copy(ret, b)",
                                                                      pBVar3 != (BIGNUM *)0x0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_usub(r,a_00,r);
                                                      iVar1 = test_true("test/bntest.c",0x510,
                                                                        "BN_usub(ret, sum, ret)",
                                                                        iVar1 != 0);
                                                      if ((iVar1 != 0) &&
                                                         (iVar1 = equalBN("Sum -u B (r is b)",a,r),
                                                         iVar1 != 0)) goto LAB_0010cf93;
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
                                        }
                                      }
                                    }
                                    else {
LAB_0010cf93:
                                      w = BN_get_word(b);
                                      iVar1 = BN_is_negative(b);
                                      if ((w == 0xffffffffffffffff) || (iVar1 != 0)) {
                                        uVar2 = 1;
                                        goto LAB_0010ca61;
                                      }
                                      pBVar3 = BN_copy(r,a);
                                      iVar1 = test_true("test/bntest.c",0x51a,"BN_copy(ret, a)",
                                                        pBVar3 != (BIGNUM *)0x0);
                                      if (iVar1 != 0) {
                                        iVar1 = BN_add_word(r,w);
                                        iVar1 = test_true("test/bntest.c",0x51b,
                                                          "BN_add_word(ret, b_word)",iVar1 != 0);
                                        if ((iVar1 != 0) &&
                                           (iVar1 = equalBN("A + B (word)",a_00,r), iVar1 != 0)) {
                                          pBVar3 = BN_copy(r,a_00);
                                          iVar1 = test_true("test/bntest.c",0x51d,
                                                            "BN_copy(ret, sum)",
                                                            pBVar3 != (BIGNUM *)0x0);
                                          if (iVar1 != 0) {
                                            iVar1 = BN_sub_word(r,w);
                                            iVar1 = test_true("test/bntest.c",0x51e,
                                                              "BN_sub_word(ret, b_word)",iVar1 != 0)
                                            ;
                                            if (iVar1 != 0) {
                                              iVar1 = equalBN("Sum - B (word)",a,r);
                                              uVar2 = (uint)(iVar1 != 0);
                                              goto LAB_0010ca61;
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
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        test_error("test/bntest.c",0x87,"unexpected %s value","A + B");
        pBVar3 = a_00;
LAB_0010cbe8:
        test_BN_eq("test/bntest.c",0x88,"expected","actual",pBVar3,r);
      }
    }
  }
  uVar2 = 0;
LAB_0010ca61:
  BN_free(a);
  BN_free(b);
  BN_free(a_00);
  BN_free(r);
  return uVar2;
}



undefined1 * test_get_options(void)

{
  return test_options_8;
}



undefined8 setup_tests(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  do {
    iVar2 = opt_next();
    while( true ) {
      if (iVar2 == 0) {
        iVar2 = test_get_argument_count();
        ctx = BN_CTX_new();
        iVar3 = test_ptr("test/bntest.c",0xd31,"ctx = BN_CTX_new()",ctx);
        if (iVar3 == 0) {
          return 0;
        }
        if (iVar2 == 0) {
          add_test("test_sub",test_sub);
          add_test("test_div_recip",test_div_recip);
          add_all_tests("test_signed_mod_replace_ab",test_signed_mod_replace_ab,4,1);
          add_all_tests("test_signed_mod_replace_ba",test_signed_mod_replace_ba,4,1);
          add_test("test_mod",test_mod);
          add_test("test_mod_inverse",test_mod_inverse);
          add_all_tests("test_mod_exp_alias",test_mod_exp_alias,2,1);
          add_test("test_modexp_mont5",test_modexp_mont5);
          add_test("test_kronecker",test_kronecker);
          add_test("test_rand",test_rand);
          add_test("test_bn2padded",test_bn2padded);
          add_test("test_dec2bn",test_dec2bn);
          add_test("test_hex2bn",test_hex2bn);
          add_test("test_asc2bn",test_asc2bn);
          add_test("test_bin2zero",test_bin2zero);
          add_test("test_bin2bn_lengths",test_bin2bn_lengths);
          add_all_tests("test_mpi",test_mpi,6,1);
          add_all_tests("test_bn2signed",test_bn2signed,0x2b,1);
          add_test("test_negzero",test_negzero);
          add_test("test_badmod",test_badmod);
          add_test("test_expmodzero",test_expmodzero);
          add_test("test_expmodone",test_expmodone);
          add_all_tests("test_smallprime",test_smallprime,0x10,1);
          add_all_tests("test_smallsafeprime",test_smallsafeprime,0x10,1);
          add_test("test_swap",test_swap);
          add_test("test_ctx_consttime_flag",test_ctx_consttime_flag);
          add_test("test_gf2m_add",test_gf2m_add);
          add_test("test_gf2m_mod",test_gf2m_mod);
          add_test("test_gf2m_mul",test_gf2m_mul);
          add_test("test_gf2m_sqr",test_gf2m_sqr);
          add_test("test_gf2m_modinv",test_gf2m_modinv);
          add_test("test_gf2m_moddiv",test_gf2m_moddiv);
          add_test("test_gf2m_modexp",test_gf2m_modexp);
          add_test("test_gf2m_modsqrt",test_gf2m_modsqrt);
          add_test("test_gf2m_modsolvequad",test_gf2m_modsolvequad);
          add_all_tests("test_is_prime",test_is_prime,5,1);
          add_all_tests("test_not_prime",test_not_prime,4,1);
          add_test("test_gcd_prime",test_gcd_prime);
          add_test("test_coprime",test_coprime);
          add_all_tests("test_mod_exp",test_mod_exp,0x10,1);
          add_all_tests("test_mod_exp_consttime",test_mod_exp_consttime,0x10,1);
          add_test("test_mod_exp2_mont",test_mod_exp2_mont);
          if (bVar1) {
            add_test("test_rand_range",test_rand_range);
          }
        }
        else {
          add_all_tests("run_file_tests",run_file_tests,iVar2,1);
        }
        return 1;
      }
      if (iVar2 != 1) break;
      bVar1 = true;
      iVar2 = opt_next();
    }
  } while (iVar2 - 500U < 6);
  return 0;
}



void cleanup_tests(void)

{
  BN_CTX_free(ctx);
  return;
}


