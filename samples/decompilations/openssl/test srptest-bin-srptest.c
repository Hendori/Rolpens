
int check_bn(undefined8 param_1,BIGNUM *param_2,char *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (BIGNUM *)0x0;
  iVar1 = BN_hex2bn(&local_38,param_3);
  iVar1 = test_true("test/srptest.c",0x7d,"BN_hex2bn(&tmp, hexbn)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = BN_cmp(param_2,local_38);
    if (iVar1 != 0) {
      test_error("test/srptest.c",0x81,"unexpected %s value",param_1);
    }
    iVar1 = test_BN_eq("test/srptest.c",0x82,&_LC4,&_LC3,param_2,local_38);
    BN_free(local_38);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int run_srp_kat(void)

{
  int iVar1;
  long lVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *a_03;
  long in_FS_OFFSET;
  BIGNUM *local_70;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (BIGNUM *)0x0;
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  lVar2 = SRP_get_default_gN(&_LC5);
  iVar1 = test_ptr("test/srptest.c",0x98,"GN = SRP_get_default_gN(\"1024\")",lVar2);
  if (iVar1 != 0) {
    BN_hex2bn(&local_60,"BEB25379D1A8581EB5A727673A2441EE");
    iVar1 = SRP_create_verifier_BN
                      ("alice","password123",&local_60,&local_58,*(undefined8 *)(lVar2 + 0x10));
    iVar1 = test_true("test/srptest.c",0x9c,
                      "SRP_create_verifier_BN(\"alice\", \"password123\", &s, &v, GN->N, GN->g)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      test_info("test/srptest.c",0xa0,"checking v");
      iVar1 = check_bn(&_LC13,local_58,
                       "7E273DE8696FFC4F4E337D05B4B375BEB0DDE1569E8FA00A9886D8129BADA1F1822223CA1A605B530E379BA4729FDC59F105B4787E5186F5C671085A1447B52A48CF1970B4FB6F8400BBF4CEBFBB168152E08AB5EA53D15C1AFF87B2B9DA6E04E058AD51CC72BFC9033B564E26480D78E955A5E29E7AB245DB2BE315E2099AFB"
                      );
      iVar1 = test_true("test/srptest.c",0xa1,
                        "check_bn(\"v\", v, \"7E273DE8696FFC4F4E337D05B4B375BEB0DDE1569E8FA00A9886D812\" \"9BADA1F1822223CA1A605B530E379BA4729FDC59F105B4787E5186F5\" \"C671085A1447B52A48CF1970B4FB6F8400BBF4CEBFBB168152E08AB5\" \"EA53D15C1AFF87B2B9DA6E04E058AD51CC72BFC9033B564E26480D78\" \"E955A5E29E7AB245DB2BE315E2099AFB\")"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        test_note("    okay");
        BN_hex2bn(&local_48,"E487CB59D31AC550471E81F00F6928E01DDA08E974A004F49E61F5D105284D20");
        a = (BIGNUM *)
            SRP_Calc_B(local_48,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 8),local_58);
        iVar1 = SRP_Verify_B_mod_N(a,*(undefined8 *)(lVar2 + 0x10));
        iVar1 = test_true("test/srptest.c",0xb0,"SRP_Verify_B_mod_N(Bpub, GN->N)",iVar1 != 0);
        if (iVar1 != 0) {
          test_info("test/srptest.c",0xb3,"checking B");
          iVar1 = check_bn(&_LC20,a,
                           "BD0C61512C692C0CB6D041FA01BB152D4916A1E77AF46AE105393011BAF38964DC46A0670DD125B95A981652236F99D9B681CBF87837EC996C6DA04453728610D0C6DDB58B318885D7D82C7F8DEB75CE7BD4FBAA37089E6F9C6059F388838E7A00030B331EB76840910440B1B27AAEAEEB4012B7D7665238A8E3FB004B117B58"
                          );
          iVar1 = test_true("test/srptest.c",0xb4,
                            "check_bn(\"B\", Bpub, \"BD0C61512C692C0CB6D041FA01BB152D4916A1E77AF46AE105393011\" \"BAF38964DC46A0670DD125B95A981652236F99D9B681CBF87837EC99\" \"6C6DA04453728610D0C6DDB58B318885D7D82C7F8DEB75CE7BD4FBAA\" \"37089E6F9C6059F388838E7A00030B331EB76840910440B1B27AAEAE\" \"EB4012B7D7665238A8E3FB004B117B58\")"
                            ,iVar1 != 0);
          if (iVar1 != 0) {
            test_note("    okay");
            BN_hex2bn(&local_50,"60975527035CF2AD1989806F0407210BC81EDC04E2762A56AFD529DDDA2D4393");
            a_00 = (BIGNUM *)
                   SRP_Calc_A(local_50,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 8));
            iVar1 = SRP_Verify_A_mod_N(a_00,*(undefined8 *)(lVar2 + 0x10));
            iVar1 = test_true("test/srptest.c",0xc3,"SRP_Verify_A_mod_N(Apub, GN->N)",iVar1 != 0);
            if (iVar1 != 0) {
              test_info("test/srptest.c",0xc6,"checking A");
              iVar1 = check_bn(&_LC26,a_00,
                               "61D5E490F6F1B79547B0704C436F523DD0E560F0C64115BB72557EC44352E8903211C04692272D8B2D1A5358A2CF1B6E0BFCF99F921530EC8E39356179EAE45E42BA92AEACED825171E1E8B9AF6D9C03E1327F44BE087EF06530E69F66615261EEF54073CA11CF5858F0EDFDFE15EFEAB349EF5D76988A3672FAC47B0769447B"
                              );
              iVar1 = test_true("test/srptest.c",199,
                                "check_bn(\"A\", Apub, \"61D5E490F6F1B79547B0704C436F523DD0E560F0C64115BB72557EC4\" \"4352E8903211C04692272D8B2D1A5358A2CF1B6E0BFCF99F921530EC\" \"8E39356179EAE45E42BA92AEACED825171E1E8B9AF6D9C03E1327F44\" \"BE087EF06530E69F66615261EEF54073CA11CF5858F0EDFDFE15EFEA\" \"B349EF5D76988A3672FAC47B0769447B\")"
                                ,iVar1 != 0);
              if (iVar1 != 0) {
                test_note("    okay");
                a_01 = (BIGNUM *)SRP_Calc_u(a_00,a,*(undefined8 *)(lVar2 + 0x10));
                iVar1 = check_bn(&_LC29,a_01,"CE38B9593487DA98554ED47D70A7AE5F462EF019");
                iVar1 = test_true("test/srptest.c",0xd3,
                                  "check_bn(\"u\", u, \"CE38B9593487DA98554ED47D70A7AE5F462EF019\")"
                                  ,iVar1 != 0);
                if (iVar1 == 0) {
                  local_70 = (BIGNUM *)0x0;
                  a_03 = (BIGNUM *)0x0;
                  a_02 = (BIGNUM *)0x0;
                  iVar1 = 0;
                }
                else {
                  a_02 = (BIGNUM *)SRP_Calc_x(local_60,"alice","password123");
                  a_03 = (BIGNUM *)
                         SRP_Calc_client_key(*(undefined8 *)(lVar2 + 0x10),a,
                                             *(undefined8 *)(lVar2 + 8),a_02,local_50,a_01);
                  test_info("test/srptest.c",0xda,"checking client\'s key");
                  iVar1 = check_bn("Client\'s key",a_03,
                                   "B0DC82BABCF30674AE450C0287745E7990A3381F63B387AAF271A10D233861E359B48220F7C4693C9AE12B0A6F67809F0876E2D013800D6C41BB59B6D5979B5C00A172B4A2A5903A0BDCAF8A709585EB2AFAFA8F3499B200210DCC1F10EB33943CD67FC88A2F39A4BE5BEC4EC0A3212DC346D7E474B29EDE8A469FFECA686E5A"
                                  );
                  iVar1 = test_true("test/srptest.c",0xdb,
                                    "check_bn(\"Client\'s key\", Kclient, \"B0DC82BABCF30674AE450C0287745E7990A3381F63B387AAF271A10D\" \"233861E359B48220F7C4693C9AE12B0A6F67809F0876E2D013800D6C\" \"41BB59B6D5979B5C00A172B4A2A5903A0BDCAF8A709585EB2AFAFA8F\" \"3499B200210DCC1F10EB33943CD67FC88A2F39A4BE5BEC4EC0A3212D\" \"C346D7E474B29EDE8A469FFECA686E5A\")"
                                    ,iVar1 != 0);
                  local_70 = (BIGNUM *)0x0;
                  if (iVar1 != 0) {
                    test_note("    okay");
                    local_70 = (BIGNUM *)
                               SRP_Calc_server_key(a_00,local_58,a_01,local_48,
                                                   *(undefined8 *)(lVar2 + 0x10));
                    test_info("test/srptest.c",0xe6,"checking server\'s key");
                    iVar1 = check_bn("Server\'s key",local_70,
                                     "B0DC82BABCF30674AE450C0287745E7990A3381F63B387AAF271A10D233861E359B48220F7C4693C9AE12B0A6F67809F0876E2D013800D6C41BB59B6D5979B5C00A172B4A2A5903A0BDCAF8A709585EB2AFAFA8F3499B200210DCC1F10EB33943CD67FC88A2F39A4BE5BEC4EC0A3212DC346D7E474B29EDE8A469FFECA686E5A"
                                    );
                    iVar1 = test_true("test/srptest.c",0xe7,
                                      "check_bn(\"Server\'s key\", Kserver, \"B0DC82BABCF30674AE450C0287745E7990A3381F63B387AAF271A10D\" \"233861E359B48220F7C4693C9AE12B0A6F67809F0876E2D013800D6C\" \"41BB59B6D5979B5C00A172B4A2A5903A0BDCAF8A709585EB2AFAFA8F\" \"3499B200210DCC1F10EB33943CD67FC88A2F39A4BE5BEC4EC0A3212D\" \"C346D7E474B29EDE8A469FFECA686E5A\")"
                                      ,iVar1 != 0);
                    if (iVar1 != 0) {
                      test_note("    okay");
                      iVar1 = 1;
                    }
                  }
                }
                goto LAB_00100175;
              }
            }
            local_70 = (BIGNUM *)0x0;
            a_03 = (BIGNUM *)0x0;
            a_02 = (BIGNUM *)0x0;
            a_01 = (BIGNUM *)0x0;
            goto LAB_00100175;
          }
        }
        a_03 = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        a_02 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        local_70 = (BIGNUM *)0x0;
        goto LAB_00100175;
      }
    }
  }
  a_03 = (BIGNUM *)0x0;
  a = (BIGNUM *)0x0;
  a_00 = (BIGNUM *)0x0;
  a_02 = (BIGNUM *)0x0;
  local_70 = (BIGNUM *)0x0;
  a_01 = (BIGNUM *)0x0;
  iVar1 = 0;
LAB_00100175:
  BN_clear_free(a_03);
  BN_clear_free(local_70);
  BN_clear_free(a_02);
  BN_free(a_01);
  BN_free(a_00);
  BN_clear_free(local_50);
  BN_free(a);
  BN_clear_free(local_48);
  BN_free(local_60);
  BN_clear_free(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong run_srp_constprop_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *a_03;
  BIGNUM *a_04;
  long in_FS_OFFSET;
  BIGNUM *local_90;
  BIGNUM *local_88;
  BIGNUM *local_78;
  BIGNUM *local_70;
  uchar local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (BIGNUM *)0x0;
  local_70 = (BIGNUM *)0x0;
  lVar3 = SRP_get_default_gN(&_LC5);
  uVar4 = test_ptr("test/srptest.c",0x2f,"GN = SRP_get_default_gN(\"1024\")",lVar3);
  if ((int)uVar4 != 0) {
    iVar1 = SRP_create_verifier_BN
                      ("alice",param_2,&local_78,&local_70,*(undefined8 *)(lVar3 + 0x10),
                       *(undefined8 *)(lVar3 + 8));
    iVar1 = test_true("test/srptest.c",0x33,
                      "SRP_create_verifier_BN(username, server_pass, &s, &v, GN->N, GN->g)",
                      iVar1 != 0);
    if (iVar1 == 0) {
      local_90 = (BIGNUM *)0x0;
      a_04 = (BIGNUM *)0x0;
      a_03 = (BIGNUM *)0x0;
      a_02 = (BIGNUM *)0x0;
      local_88 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      uVar2 = 0;
    }
    else {
      test_output_bignum(&_LC39,*(undefined8 *)(lVar3 + 0x10));
      test_output_bignum(&_LC40,*(undefined8 *)(lVar3 + 8));
      test_output_bignum(&_LC41,local_78);
      test_output_bignum("Verifier",local_70);
      RAND_bytes(local_68,0x20);
      a = BN_bin2bn(local_68,0x20,(BIGNUM *)0x0);
      iVar1 = test_BN_ne_zero("test/srptest.c",0x3f,&_LC43,a);
      if (iVar1 == 0) {
        local_90 = (BIGNUM *)0x0;
        a_04 = (BIGNUM *)0x0;
        a_03 = (BIGNUM *)0x0;
        a_02 = (BIGNUM *)0x0;
        local_88 = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        uVar2 = 0;
      }
      else {
        test_output_bignum(&_LC43,a);
        a_00 = (BIGNUM *)
               SRP_Calc_B(a,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 8),local_70);
        test_output_bignum(&_LC20,a_00);
        iVar1 = SRP_Verify_B_mod_N(a_00,*(undefined8 *)(lVar3 + 0x10));
        iVar1 = test_true("test/srptest.c",0x47,"SRP_Verify_B_mod_N(Bpub, GN->N)",iVar1 != 0);
        if (iVar1 == 0) {
          local_90 = (BIGNUM *)0x0;
          a_04 = (BIGNUM *)0x0;
          a_03 = (BIGNUM *)0x0;
          a_02 = (BIGNUM *)0x0;
          local_88 = (BIGNUM *)0x0;
          a_01 = (BIGNUM *)0x0;
          uVar2 = 0;
        }
        else {
          RAND_bytes(local_68,0x20);
          a_01 = BN_bin2bn(local_68,0x20,(BIGNUM *)0x0);
          iVar1 = test_BN_ne_zero("test/srptest.c",0x4d,&_LC44,a_01);
          if (iVar1 == 0) {
            local_90 = (BIGNUM *)0x0;
            a_04 = (BIGNUM *)0x0;
            a_03 = (BIGNUM *)0x0;
            a_02 = (BIGNUM *)0x0;
            local_88 = (BIGNUM *)0x0;
            uVar2 = 0;
          }
          else {
            test_output_bignum(&_LC44,a_01);
            local_90 = (BIGNUM *)
                       SRP_Calc_A(a_01,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 8));
            test_output_bignum(&_LC26,local_90);
            iVar1 = SRP_Verify_A_mod_N(local_90,*(undefined8 *)(lVar3 + 0x10));
            iVar1 = test_true("test/srptest.c",0x55,"SRP_Verify_A_mod_N(Apub, GN->N)",iVar1 != 0);
            if (iVar1 == 0) {
              local_88 = (BIGNUM *)0x0;
              a_04 = (BIGNUM *)0x0;
              a_03 = (BIGNUM *)0x0;
              a_02 = (BIGNUM *)0x0;
              uVar2 = 0;
            }
            else {
              local_88 = (BIGNUM *)SRP_Calc_u(local_90,a_00,*(undefined8 *)(lVar3 + 0x10));
              a_02 = (BIGNUM *)SRP_Calc_x(local_78,"alice",param_1);
              a_03 = (BIGNUM *)
                     SRP_Calc_client_key(*(undefined8 *)(lVar3 + 0x10),a_00,
                                         *(undefined8 *)(lVar3 + 8),a_02,a_01,local_88);
              test_output_bignum("Client\'s key",a_03);
              a_04 = (BIGNUM *)
                     SRP_Calc_server_key(local_90,local_70,local_88,a,*(undefined8 *)(lVar3 + 0x10))
              ;
              test_output_bignum("Server\'s key",a_04);
              iVar1 = test_BN_eq("test/srptest.c",100,"Kclient","Kserver",a_03,a_04);
              uVar2 = (uint)(iVar1 != 0);
            }
          }
        }
      }
    }
    BN_clear_free(a_03);
    BN_clear_free(a_04);
    BN_clear_free(a_02);
    BN_free(local_88);
    BN_free(local_90);
    BN_clear_free(a_01);
    BN_free(a_00);
    BN_clear_free(a);
    BN_free(local_78);
    BN_clear_free(local_70);
    uVar4 = (ulong)uVar2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong run_srp_tests(void)

{
  int iVar1;
  ulong uVar2;
  
  test_info("test/srptest.c",0x104,"run_srp: expecting a mismatch");
  iVar1 = run_srp_constprop_0("password1","password2");
  uVar2 = test_false("test/srptest.c",0x105,"run_srp(\"alice\", \"password1\", \"password2\")",
                     iVar1 != 0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  test_info("test/srptest.c",0x109,"run_srp: expecting a match");
  iVar1 = run_srp_constprop_0("password","password");
  iVar1 = test_true("test/srptest.c",0x10a,"run_srp(\"alice\", \"password\", \"password\")",
                    iVar1 != 0);
  return (ulong)(iVar1 != 0);
}



undefined8 setup_tests(void)

{
  add_test("run_srp_tests",run_srp_tests);
  add_test("run_srp_kat",run_srp_kat);
  return 1;
}


