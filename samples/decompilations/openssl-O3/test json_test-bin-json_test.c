
undefined1 * get_script_null(void)

{
  return script_info_3;
}



undefined1 * get_script_obj_empty(void)

{
  return script_info_7;
}



undefined1 * get_script_array_empty(void)

{
  return script_info_11;
}



undefined1 * get_script_bool_false(void)

{
  return script_info_15;
}



undefined1 * get_script_bool_true(void)

{
  return script_info_19;
}



undefined1 * get_script_u64_0(void)

{
  return script_info_23;
}



undefined1 * get_script_u64_1(void)

{
  return script_info_27;
}



undefined1 * get_script_u64_10(void)

{
  return script_info_31;
}



undefined1 * get_script_u64_12345(void)

{
  return script_info_35;
}



undefined1 * get_script_u64_18446744073709551615(void)

{
  return script_info_39;
}



undefined1 * get_script_i64_0(void)

{
  return script_info_43;
}



undefined1 * get_script_i64_1(void)

{
  return script_info_47;
}



undefined1 * get_script_i64_2(void)

{
  return script_info_51;
}



undefined1 * get_script_i64_10(void)

{
  return script_info_55;
}



undefined1 * get_script_i64_12345(void)

{
  return script_info_59;
}



undefined1 * get_script_i64_9223372036854775807(void)

{
  return script_info_63;
}



undefined1 * get_script_i64_m1(void)

{
  return script_info_67;
}



undefined1 * get_script_i64_m2(void)

{
  return script_info_71;
}



undefined1 * get_script_i64_m10(void)

{
  return script_info_75;
}



undefined1 * get_script_i64_m12345(void)

{
  return script_info_79;
}



undefined1 * get_script_i64_m9223372036854775807(void)

{
  return script_info_83;
}



undefined1 * get_script_i64_m9223372036854775808(void)

{
  return script_info_87;
}



undefined1 * get_script_str_empty(void)

{
  return script_info_91;
}



undefined1 * get_script_str_a(void)

{
  return script_info_95;
}



undefined1 * get_script_str_abc(void)

{
  return script_info_99;
}



undefined1 * get_script_str_quote(void)

{
  return script_info_103;
}



undefined1 * get_script_str_quote2(void)

{
  return script_info_107;
}



undefined1 * get_script_str_escape(void)

{
  return script_info_111;
}



undefined1 * get_script_str_len(void)

{
  return script_info_115;
}



undefined1 * get_script_str_len0(void)

{
  return script_info_119;
}



undefined1 * get_script_str_len_nul(void)

{
  return script_info_123;
}



undefined1 * get_script_hex_data0(void)

{
  return script_info_127;
}



undefined1 * get_script_hex_data(void)

{
  return script_info_131;
}



undefined1 * get_script_array_nest1(void)

{
  return script_info_135;
}



undefined1 * get_script_array_nest2(void)

{
  return script_info_139;
}



undefined1 * get_script_array_nest3(void)

{
  return script_info_143;
}



undefined1 * get_script_array_nest4(void)

{
  return script_info_147;
}



undefined1 * get_script_obj_nontrivial1(void)

{
  return script_info_151;
}



undefined1 * get_script_obj_nontrivial2(void)

{
  return script_info_155;
}



undefined1 * get_script_obj_nest1(void)

{
  return script_info_159;
}



undefined1 * get_script_err_obj_no_key(void)

{
  return script_info_163;
}



undefined1 * get_script_err_obj_multi_key(void)

{
  return script_info_167;
}



undefined1 * get_script_err_obj_no_value(void)

{
  return script_info_171;
}



undefined1 * get_script_err_utf8(void)

{
  return script_info_175;
}



undefined1 * get_script_utf8_2(void)

{
  return script_info_179;
}



undefined1 * get_script_utf8_3(void)

{
  return script_info_183;
}



undefined1 * get_script_utf8_4(void)

{
  return script_info_187;
}



undefined1 * get_script_ijson_int(void)

{
  return script_info_191;
}



undefined1 * get_script_multi_item(void)

{
  return script_info_195;
}



undefined1 * get_script_seq(void)

{
  return script_info_199;
}



undefined4 test_json_enc(void)

{
  code *pcVar1;
  char *__s;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  size_t sVar6;
  BIO_METHOD *pBVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  byte bVar12;
  undefined **local_e0;
  undefined4 local_d4;
  int local_c0;
  undefined8 *local_b0;
  undefined8 local_a8 [11];
  int local_50;
  undefined4 local_4c;
  BIO *local_48;
  long local_40;
  
  bVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d4 = 1;
  local_e0 = &scripts;
  do {
    lVar9 = 0;
    puVar4 = (undefined8 *)(*(code *)*local_e0)();
    lVar5 = puVar4[2];
    puVar10 = local_a8;
    for (lVar8 = 0xd; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
    }
    local_b0 = (undefined8 *)0x0;
    test_info("test/json_test.c",0x229,"running script \'%s\' (%s)",*puVar4,puVar4[1]);
    local_c0 = -1;
LAB_001003bf:
    do {
      lVar8 = lVar9 * 0x28;
      if (9 < *(ulong *)(lVar5 + 8 + lVar9 * 0x28)) {
switchD_001003e3_caseD_100890:
        test_error("test/json_test.c",0x286,"unknown opcode");
        break;
      }
      switch((long)&switchD_001003e3::switchdataD_00101220 +
             (long)(int)(&switchD_001003e3::switchdataD_00101220)[*(long *)(lVar5 + 8 + lVar8)]) {
      case 0x1003f0:
        uVar11 = *(undefined8 *)(lVar5 + 0x30 + lVar8);
        lVar9 = lVar9 + 2;
        BIO_free_all(local_48);
        local_48 = (BIO *)0x0;
        if (local_50 != 0) {
          ossl_json_cleanup(local_a8);
          local_50 = 0;
        }
        local_4c = (undefined4)uVar11;
        goto LAB_001003bf;
      case 0x1004c0:
        pcVar1 = *(code **)(lVar5 + 0x48 + lVar8);
        if (local_50 == 0) {
          pBVar7 = BIO_s_mem();
          local_48 = BIO_new(pBVar7);
          iVar3 = test_ptr("test/json_test.c",0x1c,"h->mem_bio = BIO_new(BIO_s_mem())",local_48);
          uVar2 = 0;
          if (iVar3 != 0) {
            iVar3 = ossl_json_init(local_a8,local_48,local_4c);
            if (iVar3 != 0) {
              local_50 = 1;
              goto LAB_001004e0;
            }
            BIO_free_all(local_48);
            local_48 = (BIO *)0x0;
          }
        }
        else {
LAB_001004e0:
          uVar2 = 1;
        }
        iVar3 = test_true("test/json_test.c",0x270,"helper_ensure(&h)",uVar2);
        if (iVar3 == 0) goto LAB_001008ab;
        lVar9 = lVar9 + 4;
        (*pcVar1)(local_a8,*(undefined8 *)(lVar5 + 0x50 + lVar8),
                  *(undefined8 *)(lVar5 + 0x80 + lVar8));
        goto LAB_001003bf;
      case 0x100528:
        pcVar1 = *(code **)(lVar5 + 0x48 + lVar8);
        if (local_50 == 0) {
          pBVar7 = BIO_s_mem();
          local_48 = BIO_new(pBVar7);
          iVar3 = test_ptr("test/json_test.c",0x1c,"h->mem_bio = BIO_new(BIO_s_mem())",local_48);
          uVar2 = 0;
          if (iVar3 != 0) {
            iVar3 = ossl_json_init(local_a8,local_48,local_4c);
            if (iVar3 != 0) {
              local_50 = 1;
              goto LAB_00100548;
            }
            BIO_free_all(local_48);
            local_48 = (BIO *)0x0;
          }
        }
        else {
LAB_00100548:
          uVar2 = 1;
        }
        iVar3 = test_true("test/json_test.c",0x25a,"helper_ensure(&h)",uVar2);
        if (iVar3 == 0) goto LAB_001008ab;
        lVar9 = lVar9 + 3;
        (*pcVar1)(local_a8,*(undefined8 *)(lVar5 + 0x60 + lVar8));
        goto LAB_001003bf;
      case 0x100588:
        pcVar1 = *(code **)(lVar5 + 0x48 + lVar8);
        if (local_50 == 0) {
          pBVar7 = BIO_s_mem();
          local_48 = BIO_new(pBVar7);
          iVar3 = test_ptr("test/json_test.c",0x1c,"h->mem_bio = BIO_new(BIO_s_mem())",local_48);
          uVar2 = 0;
          if (iVar3 != 0) {
            iVar3 = ossl_json_init(local_a8,local_48,local_4c);
            if (iVar3 != 0) {
              local_50 = 1;
              goto LAB_001005a8;
            }
            BIO_free_all(local_48);
            local_48 = (BIO *)0x0;
          }
        }
        else {
LAB_001005a8:
          uVar2 = 1;
        }
        iVar3 = test_true("test/json_test.c",0x264,"helper_ensure(&h)",uVar2);
        if (iVar3 == 0) goto LAB_001008ab;
        lVar9 = lVar9 + 3;
        (*pcVar1)(local_a8,*(undefined8 *)(lVar5 + 0x50 + lVar8));
        goto LAB_001003bf;
      case 0x1005e8:
        pcVar1 = *(code **)(lVar5 + 0x48 + lVar8);
        if (local_50 == 0) {
          pBVar7 = BIO_s_mem();
          local_48 = BIO_new(pBVar7);
          iVar3 = test_ptr("test/json_test.c",0x1c,"h->mem_bio = BIO_new(BIO_s_mem())",local_48);
          uVar2 = 0;
          if (iVar3 != 0) {
            iVar3 = ossl_json_init(local_a8,local_48,local_4c);
            if (iVar3 != 0) {
              local_50 = 1;
              goto LAB_00100608;
            }
            BIO_free_all(local_48);
            local_48 = (BIO *)0x0;
          }
        }
        else {
LAB_00100608:
          uVar2 = 1;
        }
        iVar3 = test_true("test/json_test.c",0x250,"helper_ensure(&h)",uVar2);
        if (iVar3 == 0) goto LAB_001008ab;
        lVar9 = lVar9 + 3;
        (*pcVar1)(local_a8,*(undefined8 *)(lVar5 + 0x58 + lVar8));
        goto LAB_001003bf;
      case 0x100648:
        if (local_50 == 0) {
          pBVar7 = BIO_s_mem();
          local_48 = BIO_new(pBVar7);
          iVar3 = test_ptr("test/json_test.c",0x1c,"h->mem_bio = BIO_new(BIO_s_mem())",local_48);
          uVar2 = 0;
          if (iVar3 != 0) {
            iVar3 = ossl_json_init(local_a8,local_48,local_4c);
            if (iVar3 != 0) {
              local_50 = 1;
              goto LAB_0010065c;
            }
            BIO_free_all(local_48);
            local_48 = (BIO *)0x0;
          }
        }
        else {
LAB_0010065c:
          uVar2 = 1;
        }
        iVar3 = test_true("test/json_test.c",0x28b,"helper_ensure(&h)",uVar2);
        if (iVar3 == 0) goto LAB_001008ab;
        iVar3 = ossl_json_flush(local_a8);
        iVar3 = test_true("test/json_test.c",0x28e,"ossl_json_flush(&h.j)",iVar3 != 0);
        if (iVar3 == 0) goto LAB_001008ab;
        if (local_c0 < 0) {
          iVar3 = ossl_json_in_error(local_a8);
          iVar3 = test_false("test/json_test.c",0x292,"ossl_json_in_error(&h.j)",iVar3 != 0);
          if (iVar3 == 0) goto LAB_001008ab;
        }
        lVar5 = BIO_ctrl(local_48,0x73,0,&local_b0);
        iVar3 = test_true("test/json_test.c",0x295,"BIO_get_mem_ptr(h.mem_bio, &bufp)",lVar5 != 0);
        if (iVar3 != 0) {
          sVar6 = puVar4[5];
          __s = (char *)puVar4[4];
          if (sVar6 == 0xffffffffffffffff) {
            sVar6 = strlen(__s);
          }
          uVar11 = 1;
          iVar3 = test_mem_eq("test/json_test.c",0x298,"bufp->data","info->expected_output",
                              local_b0[1],*local_b0,__s,sVar6);
          if (iVar3 != 0) goto LAB_00100748;
        }
        goto LAB_001008ab;
      case 0x1007e0:
        pcVar1 = *(code **)(lVar5 + 0x48 + lVar8);
        if (local_50 == 0) {
          pBVar7 = BIO_s_mem();
          local_48 = BIO_new(pBVar7);
          iVar3 = test_ptr("test/json_test.c",0x1c,"h->mem_bio = BIO_new(BIO_s_mem())",local_48);
          uVar2 = 0;
          if (iVar3 != 0) {
            iVar3 = ossl_json_init(local_a8,local_48,local_4c);
            if (iVar3 != 0) {
              local_50 = 1;
              goto LAB_00100800;
            }
            BIO_free_all(local_48);
            local_48 = (BIO *)0x0;
          }
        }
        else {
LAB_00100800:
          uVar2 = 1;
        }
        iVar3 = test_true("test/json_test.c",0x246,"helper_ensure(&h)",uVar2);
        if (iVar3 == 0) goto LAB_001008ab;
        lVar9 = lVar9 + 3;
        (*pcVar1)(local_a8,*(undefined4 *)(lVar5 + 0x60 + lVar8));
        goto LAB_001003bf;
      case 0x100840:
        lVar9 = lVar9 + 2;
        pcVar1 = *(code **)(lVar5 + 0x48 + lVar8);
        if (local_50 == 0) {
          pBVar7 = BIO_s_mem();
          local_48 = BIO_new(pBVar7);
          iVar3 = test_ptr("test/json_test.c",0x1c,"h->mem_bio = BIO_new(BIO_s_mem())",local_48);
          uVar11 = 0;
          if (iVar3 != 0) {
            iVar3 = ossl_json_init(local_a8,local_48,local_4c);
            if (iVar3 != 0) {
              local_50 = 1;
              goto LAB_0010085f;
            }
            BIO_free_all(local_48);
            uVar11 = 0;
            local_48 = (BIO *)0x0;
          }
        }
        else {
LAB_0010085f:
          uVar11 = 1;
        }
        iVar3 = test_true("test/json_test.c",0x23c,"helper_ensure(&h)",uVar11);
        if (iVar3 == 0) goto LAB_001008ab;
        (*pcVar1)(local_a8);
        goto LAB_001003bf;
      case 0x100890:
        goto switchD_001003e3_caseD_100890;
      }
      if (local_50 == 0) {
        pBVar7 = BIO_s_mem();
        local_48 = BIO_new(pBVar7);
        iVar3 = test_ptr("test/json_test.c",0x1c,"h->mem_bio = BIO_new(BIO_s_mem())",local_48);
        uVar2 = 0;
        if (iVar3 != 0) {
          iVar3 = ossl_json_init(local_a8,local_48,local_4c);
          if (iVar3 != 0) {
            local_50 = 1;
            goto LAB_00100446;
          }
          BIO_free_all(local_48);
          local_48 = (BIO *)0x0;
        }
      }
      else {
LAB_00100446:
        uVar2 = 1;
      }
      iVar3 = test_true("test/json_test.c",0x27a,"helper_ensure(&h)",uVar2);
      if (iVar3 == 0) break;
      uVar11 = *(undefined8 *)(lVar5 + 0x30 + lVar8);
      lVar9 = lVar9 + 2;
      local_c0 = (int)uVar11;
      uVar2 = ossl_json_in_error(local_a8);
      iVar3 = test_int_eq("test/json_test.c",0x27e,"ossl_json_in_error(&h.j)","asserted",uVar2,
                          uVar11);
    } while (iVar3 != 0);
LAB_001008ab:
    uVar11 = 0;
    test_error("test/json_test.c",0x2a2,"script \'%s\' failed",*puVar4);
LAB_00100748:
    BIO_free_all(local_48);
    local_48 = (BIO *)0x0;
    if (local_50 != 0) {
      ossl_json_cleanup(local_a8);
    }
    iVar3 = test_true("test/json_test.c",0x2ae,"run_script(scripts[i]())",uVar11);
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar2 = local_d4;
    }
    local_e0 = local_e0 + 1;
    local_d4 = uVar2;
    if ((NoteGnuProperty_4 *)local_e0 == &NoteGnuProperty_4_00108690) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar2;
    }
  } while( true );
}



undefined8 setup_tests(void)

{
  add_test("test_json_enc",test_json_enc);
  return 1;
}


