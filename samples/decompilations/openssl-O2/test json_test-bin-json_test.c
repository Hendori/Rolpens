
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



undefined4 helper_ensure(long param_1)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *pBVar2;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    type = BIO_s_mem();
    pBVar2 = BIO_new(type);
    *(BIO **)(param_1 + 0x60) = pBVar2;
    iVar1 = test_ptr("test/json_test.c",0x1c,"h->mem_bio = BIO_new(BIO_s_mem())",pBVar2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = ossl_json_init(param_1,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x5c));
    if (iVar1 == 0) {
      BIO_free_all(*(BIO **)(param_1 + 0x60));
      *(undefined8 *)(param_1 + 0x60) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 1;
  }
  return 1;
}



undefined4 test_json_enc(void)

{
  ulong uVar1;
  code *pcVar2;
  char *__s;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long in_FS_OFFSET;
  byte bVar12;
  undefined **local_d0;
  undefined4 local_c8;
  int local_c4;
  undefined8 *local_b0;
  undefined8 local_a8 [11];
  int local_50;
  undefined4 local_4c;
  BIO *local_48;
  long local_40;
  
  bVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = 1;
  local_d0 = &scripts;
  do {
    lVar11 = 0;
    puVar5 = (undefined8 *)(*(code *)*local_d0)();
    lVar6 = puVar5[2];
    puVar9 = local_a8;
    for (lVar8 = 0xd; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
    }
    local_b0 = (undefined8 *)0x0;
    test_info("test/json_test.c",0x229,"running script \'%s\' (%s)",*puVar5,puVar5[1]);
    local_c4 = -1;
LAB_00100450:
    do {
      lVar8 = lVar11 * 0x28;
      if (9 < *(ulong *)(lVar6 + 8 + lVar11 * 0x28)) {
switchD_00100475_caseD_1008e8:
        test_error("test/json_test.c",0x286,"unknown opcode");
        break;
      }
      switch((long)&switchD_00100475::switchdataD_00100e00 +
             (long)(int)(&switchD_00100475::switchdataD_00100e00)[*(long *)(lVar6 + 8 + lVar8)]) {
      case 0x100480:
        uVar10 = *(undefined8 *)(lVar6 + 0x30 + lVar8);
        lVar11 = lVar11 + 2;
        BIO_free_all(local_48);
        local_48 = (BIO *)0x0;
        if (local_50 != 0) {
          ossl_json_cleanup(local_a8);
          local_50 = 0;
        }
        local_4c = (undefined4)uVar10;
        goto LAB_00100450;
      case 0x100540:
        pcVar2 = *(code **)(lVar6 + 0x48 + lVar8);
        iVar4 = helper_ensure(local_a8);
        iVar4 = test_true("test/json_test.c",0x270,"helper_ensure(&h)",iVar4 != 0);
        if (iVar4 == 0) goto LAB_00100902;
        lVar11 = lVar11 + 4;
        (*pcVar2)(local_a8,*(undefined8 *)(lVar6 + 0x50 + lVar8),
                  *(undefined8 *)(lVar6 + 0x80 + lVar8));
        goto LAB_00100450;
      case 0x1005a0:
        pcVar2 = *(code **)(lVar6 + 0x48 + lVar8);
        iVar4 = helper_ensure(local_a8);
        iVar4 = test_true("test/json_test.c",0x264,"helper_ensure(&h)",iVar4 != 0);
        if (iVar4 == 0) goto LAB_00100902;
        lVar11 = lVar11 + 3;
        (*pcVar2)(local_a8,*(undefined8 *)(lVar6 + 0x50 + lVar8));
        goto LAB_00100450;
      case 0x1005f8:
        pcVar2 = *(code **)(lVar6 + 0x48 + lVar8);
        lVar11 = lVar11 + 2;
        iVar4 = helper_ensure(local_a8);
        iVar4 = test_true("test/json_test.c",0x23c,"helper_ensure(&h)",iVar4 != 0);
        if (iVar4 == 0) goto LAB_00100902;
        (*pcVar2)(local_a8);
        goto LAB_00100450;
      case 0x100640:
        iVar4 = helper_ensure(local_a8);
        iVar4 = test_true("test/json_test.c",0x28b,"helper_ensure(&h)",iVar4 != 0);
        if (iVar4 == 0) goto LAB_00100902;
        iVar4 = ossl_json_flush(local_a8);
        iVar4 = test_true("test/json_test.c",0x28e,"ossl_json_flush(&h.j)",iVar4 != 0);
        if (iVar4 == 0) goto LAB_00100902;
        if (local_c4 < 0) {
          iVar4 = ossl_json_in_error(local_a8);
          iVar4 = test_false("test/json_test.c",0x292,"ossl_json_in_error(&h.j)",iVar4 != 0);
          if (iVar4 == 0) goto LAB_00100902;
        }
        lVar6 = BIO_ctrl(local_48,0x73,0,&local_b0);
        iVar4 = test_true("test/json_test.c",0x295,"BIO_get_mem_ptr(h.mem_bio, &bufp)",lVar6 != 0);
        if (iVar4 != 0) {
          sVar7 = puVar5[5];
          __s = (char *)puVar5[4];
          if (sVar7 == 0xffffffffffffffff) {
            sVar7 = strlen(__s);
          }
          iVar4 = test_mem_eq("test/json_test.c",0x298,"bufp->data","info->expected_output",
                              local_b0[1],*local_b0,__s,sVar7);
          if (iVar4 != 0) {
            uVar10 = 1;
            goto LAB_00100748;
          }
        }
        goto LAB_00100902;
      case 0x1007e8:
        pcVar2 = *(code **)(lVar6 + 0x48 + lVar8);
        iVar4 = helper_ensure(local_a8);
        iVar4 = test_true("test/json_test.c",0x250,"helper_ensure(&h)",iVar4 != 0);
        if (iVar4 == 0) goto LAB_00100902;
        lVar11 = lVar11 + 3;
        (*pcVar2)(local_a8,*(undefined8 *)(lVar6 + 0x58 + lVar8));
        goto LAB_00100450;
      case 0x100840:
        pcVar2 = *(code **)(lVar6 + 0x48 + lVar8);
        iVar4 = helper_ensure(local_a8);
        iVar4 = test_true("test/json_test.c",0x246,"helper_ensure(&h)",iVar4 != 0);
        if (iVar4 == 0) goto LAB_00100902;
        lVar11 = lVar11 + 3;
        (*pcVar2)(local_a8,*(undefined4 *)(lVar6 + 0x60 + lVar8));
        goto LAB_00100450;
      case 0x100898:
        pcVar2 = *(code **)(lVar6 + 0x48 + lVar8);
        iVar4 = helper_ensure(local_a8);
        iVar4 = test_true("test/json_test.c",0x25a,"helper_ensure(&h)",iVar4 != 0);
        if (iVar4 == 0) goto LAB_00100902;
        lVar11 = lVar11 + 3;
        (*pcVar2)(local_a8,*(undefined8 *)(lVar6 + 0x60 + lVar8));
        goto LAB_00100450;
      case 0x1008e8:
        goto switchD_00100475_caseD_1008e8;
      }
      iVar4 = helper_ensure(local_a8);
      iVar4 = test_true("test/json_test.c",0x27a,"helper_ensure(&h)",iVar4 != 0);
      if (iVar4 == 0) break;
      uVar1 = *(ulong *)(lVar6 + 0x30 + lVar8);
      lVar11 = lVar11 + 2;
      local_c4 = (int)uVar1;
      uVar3 = ossl_json_in_error(local_a8);
      iVar4 = test_int_eq("test/json_test.c",0x27e,"ossl_json_in_error(&h.j)","asserted",uVar3,
                          uVar1 & 0xffffffff);
    } while (iVar4 != 0);
LAB_00100902:
    uVar10 = 0;
    test_error("test/json_test.c",0x2a2,"script \'%s\' failed",*puVar5);
LAB_00100748:
    BIO_free_all(local_48);
    local_48 = (BIO *)0x0;
    if (local_50 != 0) {
      ossl_json_cleanup(local_a8);
    }
    iVar4 = test_true("test/json_test.c",0x2ae,"run_script(scripts[i]())",uVar10);
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = local_c8;
    }
    local_d0 = local_d0 + 1;
    local_c8 = uVar3;
    if ((NoteGnuProperty_4 *)local_d0 == &NoteGnuProperty_4_00108270) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar3;
    }
  } while( true );
}



undefined8 setup_tests(void)

{
  add_test("test_json_enc",test_json_enc);
  return 1;
}


