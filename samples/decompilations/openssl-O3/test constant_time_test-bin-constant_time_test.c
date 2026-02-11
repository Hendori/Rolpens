
undefined4 test_32values(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40;
  
  puVar2 = &test_values_32;
  local_40 = 1;
  do {
    while ((iVar1 = test_true("test/constant_time_test.c",0xb1,
                              "constant_time_select_32(CONSTTIME_TRUE_32, a, b) == a",1), iVar1 != 0
           && (iVar1 = test_true("test/constant_time_test.c",0xb3,
                                 "constant_time_select_32(CONSTTIME_FALSE_32, a, b) == b",1),
              iVar1 != 0))) {
      puVar2 = puVar2 + 1;
      if (puVar2 == (undefined4 *)&DAT_00101b84) {
        return local_40;
      }
    }
    puVar2 = puVar2 + 1;
    local_40 = 0;
  } while (puVar2 != (undefined4 *)&DAT_00101b84);
  return 0;
}



bool test_is_zero_32(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar2 = (&test_values_32)[param_1];
  if (uVar2 == 0) {
    uVar2 = 1;
    pcVar3 = "constant_time_is_zero_32(a) == CONSTTIME_TRUE_32";
    uVar4 = 0x8b;
  }
  else {
    pcVar3 = "constant_time_is_zero_32(a) == CONSTTIME_FALSE_32";
    uVar4 = 0x8d;
    uVar2 = (-uVar2 | uVar2) >> 0x1f;
  }
  iVar1 = test_true("test/constant_time_test.c",uVar4,pcVar3,uVar2);
  return iVar1 != 0;
}



undefined4 test_8values(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 local_40;
  
  puVar4 = &test_values_8;
  uVar1 = (&test_values_8)[param_1];
  local_40 = 1;
  do {
    while( true ) {
      uVar2 = *puVar4;
      iVar3 = test_uint_eq("test/constant_time_test.c",0xa8,
                           "constant_time_select_8(CONSTTIME_TRUE_8, a, b)",&_LC5,uVar1,uVar1);
      if ((iVar3 == 0) ||
         (iVar3 = test_uint_eq("test/constant_time_test.c",0xaa,
                               "constant_time_select_8(CONSTTIME_FALSE_8, a, b)",&_LC7,uVar2,uVar2),
         iVar3 == 0)) break;
      puVar4 = puVar4 + 1;
      if (puVar4 == &DAT_00101c41) {
        return local_40;
      }
    }
    puVar4 = puVar4 + 1;
    local_40 = 0;
  } while (puVar4 != &DAT_00101c41);
  return 0;
}



bool test_is_zero_8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((&test_values_8)[param_1] == '\0') {
    uVar5 = 0xff;
    uVar4 = 0xff;
    pcVar2 = "CONSTTIME_TRUE_8";
    uVar3 = 0x80;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    pcVar2 = "CONSTTIME_FALSE_8";
    uVar3 = 0x82;
  }
  iVar1 = test_uint_eq("test/constant_time_test.c",uVar3,"constant_time_is_zero_8(a)",pcVar2,uVar4,
                       uVar5);
  return iVar1 != 0;
}



bool test_is_zero(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(test_values + (long)param_1 * 4);
  if (uVar1 == 0) {
    uVar5 = 0xffffffff;
    iVar2 = -1;
    pcVar3 = "CONSTTIME_TRUE";
    uVar4 = 0x75;
  }
  else {
    uVar5 = 0;
    uVar4 = 0x77;
    pcVar3 = "CONSTTIME_FALSE";
    iVar2 = (int)(~uVar1 & uVar1 - 1) >> 0x1f;
  }
  iVar2 = test_uint_eq("test/constant_time_test.c",uVar4,"constant_time_is_zero(a)",pcVar3,iVar2,
                       uVar5);
  return iVar2 != 0;
}



bool test_sizeofs(void)

{
  int iVar1;
  
  iVar1 = test_uint_eq("test/constant_time_test.c",0xf8,"OSSL_NELEM(test_values)",
                       "OSSL_NELEM(test_values_s)",10,10);
  return iVar1 != 0;
}



undefined4 test_signed(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 local_40;
  
  uVar4 = 0;
  puVar3 = (uint *)(signed_test_values + 4);
  uVar1 = *(uint *)(signed_test_values + (long)param_1 * 4);
  local_40 = 1;
  do {
    iVar2 = test_int_eq("test/constant_time_test.c",0xd4,
                        "constant_time_select_int(CONSTTIME_TRUE, a, b)",&_LC5,uVar1,uVar1);
    if ((iVar2 == 0) ||
       (iVar2 = test_int_eq("test/constant_time_test.c",0xd6,
                            "constant_time_select_int(CONSTTIME_FALSE, a, b)",&_LC7,uVar4,uVar4),
       iVar2 == 0)) {
LAB_00100500:
      local_40 = 0;
    }
    else {
      if (uVar4 == uVar1) {
        iVar2 = test_uint_eq("test/constant_time_test.c",0xef,"constant_time_eq_int(a, b)",
                             "CONSTTIME_TRUE",0xffffffff,0xffffffff);
        if (iVar2 != 0) {
          iVar2 = test_int_eq("test/constant_time_test.c",0xdd,"constant_time_eq_int_8(a, b)",
                              "CONSTTIME_TRUE_8",0xff,0xff);
          goto joined_r0x001004fc;
        }
        goto LAB_00100500;
      }
      uVar4 = (int)((uVar4 ^ uVar1) - 1 & ~(uVar4 ^ uVar1)) >> 0x1f;
      iVar2 = test_uint_eq("test/constant_time_test.c",0xf1,"constant_time_eq_int(a, b)",
                           "CONSTTIME_FALSE",uVar4,0);
      if (iVar2 == 0) goto LAB_00100500;
      iVar2 = test_int_eq("test/constant_time_test.c",0xdf,"constant_time_eq_int_8(a, b)",
                          "CONSTTIME_FALSE_8",uVar4 & 0xff,0);
joined_r0x001004fc:
      if (iVar2 == 0) goto LAB_00100500;
    }
    if (puVar3 == (uint *)&DAT_00101c34) {
      return local_40;
    }
    uVar4 = *puVar3;
    puVar3 = puVar3 + 1;
  } while( true );
}



bool test_is_zero_s(int param_1)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = *(ulong *)(test_values_s + (long)param_1 * 8);
  if (uVar1 == 0) {
    iVar2 = test_size_t_eq("test/constant_time_test.c",0x96,"constant_time_is_zero_s(a)",
                           "CONSTTIME_TRUE_S",0xffffffffffffffff,0xffffffffffffffff);
    return iVar2 != 0;
  }
  iVar2 = test_uint_eq("test/constant_time_test.c",0x98,"constant_time_is_zero_s(a)",
                       "CONSTTIME_FALSE_S",(long)(~uVar1 & uVar1 - 1) >> 0x3f,0);
  return iVar2 != 0;
}



/* WARNING: Removing unreachable block (ram,0x00100720) */
/* WARNING: Removing unreachable block (ram,0x00100790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_64values(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(ulong *)(test_values_64 + (long)param_1 * 8);
  if (param_1 + 1 < 0xb) {
    uVar7 = (ulong)(param_1 + 1);
    uVar4 = 1;
    do {
      while( true ) {
        uVar2 = *(ulong *)(test_values_64 + uVar7 * 8);
        uVar6 = uVar7 & 0xffffffff;
        uVar3 = (uVar1 - uVar2 ^ uVar2 | uVar1 ^ uVar2) ^ uVar1;
        if (uVar2 <= uVar1) break;
        if ((long)uVar3 < 0) goto code_r0x00100665;
        pcVar5 = "TRUE %s op failed";
        uVar4 = 0x66;
LAB_001006b1:
        test_error("test/constant_time_test.c",uVar4,pcVar5,"constant_time_lt_64");
        BIO_printf(_bio_err,"a=%jx b=%jx\n",uVar1,uVar2);
        uVar7 = uVar7 + 1;
        test_info("test/constant_time_test.c",0x188,"test_64values failed i=%d j=%d",param_1,uVar6);
        uVar4 = 0;
        if (10 < (int)uVar7) {
          return 0;
        }
      }
      if ((long)uVar3 < 0) {
        pcVar5 = "FALSE %s op failed";
        uVar4 = 0x6a;
        goto LAB_001006b1;
      }
code_r0x00100665:
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0xb);
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



undefined4 test_binops_8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 local_3c;
  
  pbVar9 = &DAT_00101c39;
  bVar4 = 0;
  bVar1 = (&test_values_8)[param_1];
  uVar6 = (uint)bVar1;
  local_3c = 1;
  do {
    uVar10 = (uint)bVar4;
    uVar8 = (uint)bVar1;
    uVar7 = (uint)(bVar4 ^ bVar1);
    uVar3 = (int)((uVar6 - uVar10 ^ uVar10 | uVar7) ^ uVar8) >> 0x1f;
    uVar5 = (uint)(bVar4 ^ bVar1);
    if (uVar8 < uVar10) {
      iVar2 = test_uint_eq("test/constant_time_test.c",0x4d,"op(a, b)","CONSTTIME_TRUE_8",
                           uVar3 & 0xff,0xff);
      if (iVar2 == 0) goto LAB_0010087a;
      uVar7 = (int)((uVar10 - uVar8 ^ uVar6 | uVar7) ^ uVar10) >> 0x1f;
      iVar2 = test_uint_eq("test/constant_time_test.c",0x4f,"op(a, b)","CONSTTIME_FALSE_8",
                           uVar7 & 0xff,0);
      if (((iVar2 == 0) ||
          (iVar2 = test_uint_eq("test/constant_time_test.c",0x4f,"op(a, b)","CONSTTIME_FALSE_8",
                                ~uVar3 & 0xff,0), iVar2 == 0)) ||
         (iVar2 = test_uint_eq("test/constant_time_test.c",0x4d,"op(a, b)","CONSTTIME_TRUE_8",
                               ~uVar7 & 0xff,0xff), iVar2 == 0)) goto LAB_0010087a;
LAB_0010099c:
      uVar3 = (int)(~uVar5 & uVar5 - 1) >> 0x1f & 0xff;
      iVar2 = test_uint_eq("test/constant_time_test.c",0x4f,"op(a, b)","CONSTTIME_FALSE_8",uVar3,0);
      if ((iVar2 == 0) ||
         (iVar2 = test_uint_eq("test/constant_time_test.c",0x4f,"op(a, b)","CONSTTIME_FALSE_8",uVar3
                               ,0), iVar2 == 0)) goto LAB_0010087a;
    }
    else {
      iVar2 = test_uint_eq("test/constant_time_test.c",0x4f,"op(a, b)","CONSTTIME_FALSE_8",
                           uVar3 & 0xff,0);
      if (iVar2 != 0) {
        uVar8 = (int)((uVar10 - uVar6 ^ uVar6 | uVar7) ^ uVar10) >> 0x1f;
        if (uVar10 < uVar6) {
          iVar2 = test_uint_eq("test/constant_time_test.c",0x4d,"op(a, b)","CONSTTIME_TRUE_8",
                               uVar8 & 0xff,0xff);
          if ((iVar2 != 0) &&
             ((iVar2 = test_uint_eq("test/constant_time_test.c",0x4d,"op(a, b)","CONSTTIME_TRUE_8",
                                    ~uVar3 & 0xff,0xff), iVar2 != 0 &&
              (iVar2 = test_uint_eq("test/constant_time_test.c",0x4f,"op(a, b)","CONSTTIME_FALSE_8",
                                    ~uVar8 & 0xff,0), iVar2 != 0)))) goto LAB_0010099c;
        }
        else {
          iVar2 = test_uint_eq("test/constant_time_test.c",0x4f,"op(a, b)","CONSTTIME_FALSE_8",0,0);
          if (((iVar2 != 0) &&
              (iVar2 = test_uint_eq("test/constant_time_test.c",0x4d,"op(a, b)","CONSTTIME_TRUE_8",
                                    ~uVar3 & 0xff,0xff), iVar2 != 0)) &&
             (iVar2 = test_uint_eq("test/constant_time_test.c",0x4d,"op(a, b)","CONSTTIME_TRUE_8",
                                   0xff,0xff), iVar2 != 0)) {
            uVar3 = (int)(uVar5 - 1 & ~uVar7) >> 0x1f & 0xff;
            iVar2 = test_uint_eq("test/constant_time_test.c",0x4d,"op(a, b)","CONSTTIME_TRUE_8",
                                 uVar3,0xff);
            if ((iVar2 != 0) &&
               (iVar2 = test_uint_eq("test/constant_time_test.c",0x4d,"op(a, b)","CONSTTIME_TRUE_8",
                                     uVar3,0xff), iVar2 != 0)) goto LAB_00100882;
          }
        }
      }
LAB_0010087a:
      local_3c = 0;
    }
LAB_00100882:
    if (pbVar9 == &DAT_00101c41) {
      return local_3c;
    }
    bVar4 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



undefined4 test_binops(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  dword dVar5;
  int iVar6;
  uint uVar7;
  NoteGnuProperty_4 *pNVar8;
  undefined4 local_54;
  
  pNVar8 = (NoteGnuProperty_4 *)(test_values + 4);
  dVar5 = 0;
  uVar1 = *(uint *)(test_values + (long)param_1 * 4);
  local_54 = 1;
  do {
    iVar2 = test_uint_eq("test/constant_time_test.c",0x9f,
                         "constant_time_select(CONSTTIME_TRUE, a, b)",&_LC5,uVar1,uVar1);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/constant_time_test.c",0xa1,
                             "constant_time_select(CONSTTIME_FALSE, a, b)",&_LC7,dVar5,dVar5),
       iVar2 == 0)) {
LAB_00100c58:
      local_54 = 0;
    }
    else {
      uVar3 = uVar1 ^ dVar5;
      uVar7 = (int)((uVar1 - dVar5 ^ dVar5 | uVar3) ^ uVar1) >> 0x1f;
      if (dVar5 <= uVar1) {
        iVar2 = test_uint_eq("test/constant_time_test.c",0x43,"op(a, b)","CONSTTIME_FALSE",uVar7,0);
        if (iVar2 != 0) {
          uVar4 = (int)((dVar5 - uVar1 ^ uVar1 | uVar3) ^ dVar5) >> 0x1f;
          if (dVar5 < uVar1) {
            iVar2 = test_uint_eq("test/constant_time_test.c",0x41,"op(a, b)","CONSTTIME_TRUE",uVar4,
                                 0xffffffff);
            if ((iVar2 != 0) &&
               ((iVar2 = test_uint_eq("test/constant_time_test.c",0x41,"op(a, b)","CONSTTIME_TRUE",
                                      ~uVar7,0xffffffff), iVar2 != 0 &&
                (iVar2 = test_uint_eq("test/constant_time_test.c",0x43,"op(a, b)","CONSTTIME_FALSE",
                                      ~uVar4,0), iVar2 != 0)))) goto LAB_00100de7;
          }
          else {
            uVar3 = (int)(~dVar5 & uVar1) >> 0x1f;
            iVar2 = test_uint_eq("test/constant_time_test.c",0x43,"op(a, b)","CONSTTIME_FALSE",uVar3
                                 ,0);
            if ((((iVar2 != 0) &&
                 (iVar2 = test_uint_eq("test/constant_time_test.c",0x41,"op(a, b)","CONSTTIME_TRUE",
                                       ~uVar7,0xffffffff), iVar2 != 0)) &&
                (iVar2 = test_uint_eq("test/constant_time_test.c",0x41,"op(a, b)","CONSTTIME_TRUE",
                                      ~uVar3,0xffffffff), iVar2 != 0)) &&
               ((iVar2 = test_uint_eq("test/constant_time_test.c",0x41,"op(a, b)","CONSTTIME_TRUE",
                                      0xffffffff,0xffffffff), iVar2 != 0 &&
                (iVar2 = test_uint_eq("test/constant_time_test.c",0x41,"op(a, b)","CONSTTIME_TRUE",
                                      0xffffffff,0xffffffff), iVar2 != 0)))) goto LAB_00100c60;
          }
        }
        goto LAB_00100c58;
      }
      iVar2 = test_uint_eq("test/constant_time_test.c",0x41,"op(a, b)","CONSTTIME_TRUE",uVar7,
                           0xffffffff);
      if (iVar2 == 0) goto LAB_00100c58;
      uVar4 = (int)((dVar5 - uVar1 ^ uVar1 | uVar3) ^ dVar5) >> 0x1f;
      iVar2 = test_uint_eq("test/constant_time_test.c",0x43,"op(a, b)","CONSTTIME_FALSE",uVar4,0);
      if (((iVar2 == 0) ||
          (iVar2 = test_uint_eq("test/constant_time_test.c",0x43,"op(a, b)","CONSTTIME_FALSE",~uVar7
                                ,0), iVar2 == 0)) ||
         (iVar2 = test_uint_eq("test/constant_time_test.c",0x41,"op(a, b)","CONSTTIME_TRUE",~uVar4,
                               0xffffffff), iVar2 == 0)) goto LAB_00100c58;
LAB_00100de7:
      iVar6 = (int)(uVar3 - 1 & ~uVar3) >> 0x1f;
      iVar2 = test_uint_eq("test/constant_time_test.c",0x43,"op(a, b)","CONSTTIME_FALSE",iVar6,0);
      if ((iVar2 == 0) ||
         (iVar2 = test_uint_eq("test/constant_time_test.c",0x43,"op(a, b)","CONSTTIME_FALSE",iVar6,0
                              ), iVar2 == 0)) goto LAB_00100c58;
    }
LAB_00100c60:
    if (pNVar8 == &NoteGnuProperty_4_00101c88) {
      return local_54;
    }
    dVar5 = pNVar8->namesz;
    pNVar8 = (NoteGnuProperty_4 *)&pNVar8->descsz;
  } while( true );
}



undefined4 test_binops_s(int param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined4 local_6c;
  uint local_60;
  uint local_40;
  
  uVar4 = 0;
  puVar6 = (ulong *)(test_values_s + 8);
  uVar1 = *(ulong *)(test_values_s + (long)param_1 * 8);
  local_6c = 1;
  do {
    iVar2 = test_uint_eq("test/constant_time_test.c",0xba,
                         "constant_time_select_s(CONSTTIME_TRUE_S, a, b)",&_LC5,uVar1 & 0xffffffff,
                         (int)uVar1);
    if ((iVar2 == 0) ||
       (iVar2 = test_uint_eq("test/constant_time_test.c",0xbc,
                             "constant_time_select_s(CONSTTIME_FALSE_S, a, b)",&_LC7,(int)uVar4,
                             uVar4 & 0xffffffff), iVar2 == 0)) {
LAB_00101220:
      local_6c = 0;
    }
    else {
      if (uVar1 != uVar4) {
        uVar7 = uVar1 ^ uVar4;
        iVar2 = test_int_eq("test/constant_time_test.c",0xe8,"constant_time_eq_s(a, b)",
                            "CONSTTIME_FALSE_S",(long)(~uVar7 & uVar7 - 1) >> 0x3f,0);
        if (iVar2 != 0) {
          uVar3 = (uVar1 - uVar4 ^ uVar4 | uVar7) ^ uVar1;
          uVar5 = (long)uVar3 >> 0x3f;
          local_60 = (uint)((long)uVar3 >> 0x3f);
          if (uVar1 < uVar4) {
            iVar2 = test_size_t_eq("test/constant_time_test.c",0x58,"op(a, b)","CONSTTIME_TRUE_S",
                                   uVar5,0xffffffffffffffff);
            if (iVar2 != 0) {
              uVar4 = (uVar4 - uVar1 ^ uVar1 | uVar7) ^ uVar4;
              iVar2 = test_uint_eq("test/constant_time_test.c",0x5a,"op(a, b)","CONSTTIME_FALSE_S",
                                   (int)((long)uVar4 >> 0x3f),0);
              if ((iVar2 != 0) &&
                 (iVar2 = test_uint_eq("test/constant_time_test.c",0x5a,"op(a, b)",
                                       "CONSTTIME_FALSE_S",~local_60,0), iVar2 != 0)) {
                iVar2 = test_size_t_eq("test/constant_time_test.c",0x58,"op(a, b)",
                                       "CONSTTIME_TRUE_S",~((long)uVar4 >> 0x3f),0xffffffffffffffff)
                ;
joined_r0x0010145e:
                if (iVar2 != 0) {
                  uVar4 = ~uVar7 & uVar7 - 1;
                  iVar2 = test_uint_eq("test/constant_time_test.c",0x5a,"op(a, b)",
                                       "CONSTTIME_FALSE_S",(long)uVar4 >> 0x3f & 0xffffffff,0);
                  if ((iVar2 != 0) &&
                     (iVar2 = test_uint_eq("test/constant_time_test.c",0x5a,"op(a, b)",
                                           "CONSTTIME_FALSE_S",(int)((long)uVar4 >> 0x3f),0),
                     iVar2 != 0)) goto LAB_00101228;
                }
              }
            }
          }
          else {
            iVar2 = test_uint_eq("test/constant_time_test.c",0x5a,"op(a, b)","CONSTTIME_FALSE_S",
                                 uVar5 & 0xffffffff,0);
            if (iVar2 != 0) {
              uVar4 = (uVar4 - uVar1 ^ uVar1 | uVar7) ^ uVar4;
              iVar2 = test_size_t_eq("test/constant_time_test.c",0x58,"op(a, b)","CONSTTIME_TRUE_S",
                                     (long)uVar4 >> 0x3f,0xffffffffffffffff);
              if ((iVar2 != 0) &&
                 (iVar2 = test_size_t_eq("test/constant_time_test.c",0x58,"op(a, b)",
                                         "CONSTTIME_TRUE_S",~uVar5,0xffffffffffffffff), iVar2 != 0))
              {
                local_40 = (uint)((long)uVar4 >> 0x3f);
                iVar2 = test_uint_eq("test/constant_time_test.c",0x5a,"op(a, b)","CONSTTIME_FALSE_S"
                                     ,~local_40,0);
                goto joined_r0x0010145e;
              }
            }
          }
        }
        goto LAB_00101220;
      }
      iVar2 = test_size_t_eq("test/constant_time_test.c",0xe6,"constant_time_eq_s(a, b)",
                             "CONSTTIME_TRUE_S",0xffffffffffffffff,0xffffffffffffffff);
      if (((iVar2 == 0) ||
          (((iVar2 = test_uint_eq("test/constant_time_test.c",0x5a,"op(a, b)","CONSTTIME_FALSE_S",0,
                                  0), iVar2 == 0 ||
            (iVar2 = test_uint_eq("test/constant_time_test.c",0x5a,"op(a, b)","CONSTTIME_FALSE_S",0,
                                  0), iVar2 == 0)) ||
           (iVar2 = test_size_t_eq("test/constant_time_test.c",0x58,"op(a, b)","CONSTTIME_TRUE_S",
                                   0xffffffffffffffff,0xffffffffffffffff), iVar2 == 0)))) ||
         (((iVar2 = test_size_t_eq("test/constant_time_test.c",0x58,"op(a, b)","CONSTTIME_TRUE_S",
                                   0xffffffffffffffff,0xffffffffffffffff), iVar2 == 0 ||
           (iVar2 = test_size_t_eq("test/constant_time_test.c",0x58,"op(a, b)","CONSTTIME_TRUE_S",
                                   0xffffffffffffffff,0xffffffffffffffff), iVar2 == 0)) ||
          (iVar2 = test_size_t_eq("test/constant_time_test.c",0x58,"op(a, b)","CONSTTIME_TRUE_S",
                                  0xffffffffffffffff,0xffffffffffffffff), iVar2 == 0))))
      goto LAB_00101220;
    }
LAB_00101228:
    if (puVar6 == (ulong *)&DAT_00101bf0) {
      return local_6c;
    }
    uVar4 = *puVar6;
    puVar6 = puVar6 + 1;
  } while( true );
}



undefined8 setup_tests(void)

{
  add_test("test_sizeofs",test_sizeofs);
  add_all_tests("test_is_zero",test_is_zero,10,1);
  add_all_tests("test_is_zero_8",test_is_zero_8,9,1);
  add_all_tests("test_is_zero_32",test_is_zero_32,9,1);
  add_all_tests("test_is_zero_s",test_is_zero_s,10,1);
  add_all_tests("test_binops",test_binops,10,1);
  add_all_tests("test_binops_8",test_binops_8,9,1);
  add_all_tests("test_binops_s",test_binops_s,10,1);
  add_all_tests("test_signed",test_signed,0xd,1);
  add_all_tests("test_8values",test_8values,9,1);
  add_all_tests("test_32values",0x100000,9,1);
  add_all_tests("test_64values",test_64values,0xb,1);
  return 1;
}


