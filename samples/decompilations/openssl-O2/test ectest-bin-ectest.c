
bool are_ec_nids_compatible(uint param_1,uint param_2)

{
  switch(param_1) {
  case 0x2ac:
  case 0x2e2:
    return param_2 == 0x2ac || param_2 == 0x2e2;
  default:
    return param_1 == param_2;
  case 0x2c0:
  case 0x2e3:
    return param_2 == 0x2c0 || param_2 == 0x2e3;
  case 0x2c6:
  case 0x2e4:
    return param_2 == 0x2c6 || param_2 == 0x2e4;
  case 0x2c9:
  case 0x2e9:
    return (param_2 & 0xffffffdf) == 0x2c9;
  case 0x2cd:
  case 0x2e1:
    return param_2 == 0x2cd || param_2 == 0x2e1;
  case 0x2d1:
  case 0x2e0:
    return param_2 == 0x2d1 || param_2 == 0x2e0;
  case 0x2d6:
  case 0x2e7:
    return param_2 == 0x2d6 || param_2 == 0x2e7;
  case 0x2d7:
  case 0x2e8:
    return param_2 == 0x2d7 || param_2 == 0x2e8;
  }
}



uint ec_d2i_publickey_test(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  EVP_PKEY *a;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  uchar *local_490;
  uchar *local_488;
  EVP_PKEY *local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  uchar local_428 [1000];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_490 = local_428;
  local_480 = (EVP_PKEY *)0x0;
  local_488 = local_490;
  a = (EVP_PKEY *)EVP_PKEY_Q_keygen(0,0,&_LC1,"P-256");
  iVar1 = test_ptr("test/ectest.c",0xc13,"gen_key = EVP_EC_gen(\"P-256\")",a);
  if (iVar1 != 0) {
    iVar1 = i2d_PublicKey(a,&local_490);
    iVar2 = test_int_gt("test/ectest.c",0xc16,"pklen = i2d_PublicKey(gen_key, &pubkey_enc)",&_LC4,
                        iVar1,0);
    if (iVar2 != 0) {
      OSSL_PARAM_construct_utf8_string(&local_4c8,"group","P-256",0);
      local_458 = local_4a8;
      local_478 = local_4c8;
      uStack_470 = uStack_4c0;
      local_468 = local_4b8;
      uStack_460 = uStack_4b0;
      OSSL_PARAM_construct_end(&local_4c8);
      local_450 = local_4c8;
      uStack_448 = uStack_4c0;
      local_430 = local_4a8;
      local_440 = local_4b8;
      uStack_438 = uStack_4b0;
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC1,0);
      iVar2 = test_ptr("test/ectest.c",0xc1d,"pctx = EVP_PKEY_CTX_new_from_name(NULL, \"EC\", NULL)"
                       ,ctx);
      if (iVar2 != 0) {
        iVar2 = EVP_PKEY_fromdata_init(ctx);
        iVar2 = test_true("test/ectest.c",0xc1e,"EVP_PKEY_fromdata_init(pctx)",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = EVP_PKEY_fromdata(ctx,&local_480,4,&local_478);
          uVar3 = test_true("test/ectest.c",0xc1f,
                            "EVP_PKEY_fromdata(pctx, &decoded_key, OSSL_KEYMGMT_SELECT_DOMAIN_PARAMETERS, params)"
                            ,iVar2 != 0);
          if (uVar3 == 0) goto LAB_001001ad;
          iVar2 = test_ptr("test/ectest.c",0xc22,"decoded_key",local_480);
          if (iVar2 != 0) {
            local_480 = d2i_PublicKey(0x198,&local_480,&local_488,(long)iVar1);
            iVar1 = test_ptr("test/ectest.c",0xc23,
                             "decoded_key = d2i_PublicKey(EVP_PKEY_EC, &decoded_key, &pk_enc, pklen)"
                             ,local_480);
            if (iVar1 != 0) {
              iVar1 = EVP_PKEY_eq(a,local_480);
              iVar1 = test_true("test/ectest.c",0xc27,"EVP_PKEY_eq(gen_key, decoded_key)",iVar1 != 0
                               );
              uVar3 = (uint)(iVar1 != 0);
              goto LAB_001001ad;
            }
          }
        }
      }
      uVar3 = 0;
      goto LAB_001001ad;
    }
  }
  uVar3 = 0;
  ctx = (EVP_PKEY_CTX *)0x0;
LAB_001001ad:
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(a);
  EVP_PKEY_free(local_480);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong custom_params_test(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  BN_CTX *ctx;
  ulong uVar7;
  BIGNUM *pBVar8;
  BIGNUM *a;
  BIGNUM *b;
  BIGNUM *rnd;
  EC_POINT *pEVar9;
  size_t sVar10;
  BIGNUM *order;
  BIGNUM *cofactor;
  size_t sVar11;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY_CTX *ctx_01;
  undefined8 uVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  EC_GROUP *local_d8;
  undefined8 local_d0;
  EC_KEY *local_c8;
  EC_KEY *local_c0;
  uchar *local_b8;
  uchar *local_b0;
  EC_GROUP *local_a8;
  EC_POINT *local_a0;
  uchar *local_98;
  EC_POINT *local_90;
  uchar *local_88;
  EC_POINT *local_80;
  EVP_PKEY *local_60;
  EVP_PKEY *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)((long)param_1 * 0x10 + curves);
  local_60 = (EVP_PKEY *)0x0;
  local_58 = (EVP_PKEY *)0x0;
  pcVar6 = OBJ_nid2sn(iVar3);
  test_note("Curve %s",pcVar6);
  if (iVar3 == 0x494) {
    uVar7 = test_skip("test/ectest.c",0xb12,"custom params not supported with SM2");
    goto LAB_00100471;
  }
  ctx = BN_CTX_new();
  uVar7 = test_ptr("test/ectest.c",0xb14,"ctx = BN_CTX_new()",ctx);
  if ((int)uVar7 == 0) goto LAB_00100471;
  BN_CTX_start(ctx);
  pBVar8 = BN_CTX_get(ctx);
  iVar1 = test_ptr("test/ectest.c",0xb18,"p = BN_CTX_get(ctx)",pBVar8);
  if (iVar1 == 0) {
LAB_001004d2:
    local_d0 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar2 = 0;
    local_b8 = (uchar *)0x0;
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ctx_01 = (EVP_PKEY_CTX *)0x0;
    local_b0 = (uchar *)0x0;
    local_c8 = (EC_KEY *)0x0;
    local_c0 = (EC_KEY *)0x0;
    local_98 = (uchar *)0x0;
    local_88 = (uchar *)0x0;
    local_90 = (EC_POINT *)0x0;
    local_a0 = (EC_POINT *)0x0;
    local_80 = (EC_POINT *)0x0;
    local_a8 = (EC_GROUP *)0x0;
    local_d8 = (EC_GROUP *)0x0;
  }
  else {
    a = BN_CTX_get(ctx);
    iVar1 = test_ptr("test/ectest.c",0xb19,"a = BN_CTX_get(ctx)",a);
    if (iVar1 == 0) goto LAB_001004d2;
    b = BN_CTX_get(ctx);
    iVar1 = test_ptr("test/ectest.c",0xb1a,"b = BN_CTX_get(ctx)",b);
    if (iVar1 == 0) goto LAB_001004d2;
    rnd = BN_CTX_get(ctx);
    iVar1 = test_ptr("test/ectest.c",0xb1b,"k = BN_CTX_get(ctx)",rnd);
    if (iVar1 == 0) goto LAB_001004d2;
    local_d8 = EC_GROUP_new_by_curve_name(iVar3);
    uVar2 = test_ptr("test/ectest.c",0xb1e,"group = EC_GROUP_new_by_curve_name(nid)",local_d8);
    if (uVar2 == 0) {
LAB_001008c0:
      local_d0 = 0;
      uVar13 = 0;
      uVar12 = 0;
      ctx_00 = (EVP_PKEY_CTX *)0x0;
      local_b8 = (uchar *)0x0;
      ctx_01 = (EVP_PKEY_CTX *)0x0;
      local_b0 = (uchar *)0x0;
      local_c8 = (EC_KEY *)0x0;
      local_c0 = (EC_KEY *)0x0;
      local_98 = (uchar *)0x0;
      local_88 = (uchar *)0x0;
      local_90 = (EC_POINT *)0x0;
      local_a0 = (EC_POINT *)0x0;
      local_80 = (EC_POINT *)0x0;
      local_a8 = (EC_GROUP *)0x0;
    }
    else {
      iVar3 = EC_GROUP_get_field_type(local_d8);
      iVar1 = EC_GROUP_get_degree(local_d8);
      iVar4 = EC_GROUP_get_curve(local_d8,pBVar8,a,b);
      uVar2 = test_true("test/ectest.c",0xb2e,"EC_GROUP_get_curve(group, p, a, b, ctx)",iVar4 != 0);
      if (uVar2 == 0) goto LAB_001008c0;
      local_80 = EC_POINT_new(local_d8);
      uVar2 = test_ptr("test/ectest.c",0xb2f,"G2 = EC_POINT_new(group)",local_80);
      if (uVar2 == 0) {
LAB_00100934:
        local_d0 = 0;
        uVar13 = 0;
        uVar12 = 0;
        ctx_00 = (EVP_PKEY_CTX *)0x0;
        local_b8 = (uchar *)0x0;
        ctx_01 = (EVP_PKEY_CTX *)0x0;
        local_b0 = (uchar *)0x0;
        local_c8 = (EC_KEY *)0x0;
        local_c0 = (EC_KEY *)0x0;
        local_98 = (uchar *)0x0;
        local_88 = (uchar *)0x0;
        local_90 = (EC_POINT *)0x0;
        local_a0 = (EC_POINT *)0x0;
        local_a8 = (EC_GROUP *)0x0;
      }
      else {
        pEVar9 = EC_GROUP_get0_generator(local_d8);
        iVar4 = EC_POINT_dbl(local_d8,local_80,pEVar9,ctx);
        uVar2 = test_true("test/ectest.c",0xb31,
                          "EC_POINT_dbl(group, G2, EC_GROUP_get0_generator(group), ctx)",iVar4 != 0)
        ;
        if (uVar2 == 0) goto LAB_00100934;
        iVar4 = iVar1 + 0xe;
        if (-1 < iVar1 + 7) {
          iVar4 = iVar1 + 7;
        }
        iVar1 = (iVar4 >> 3) * 2 + 1;
        sVar10 = EC_POINT_point2oct(local_d8,local_80,POINT_CONVERSION_UNCOMPRESSED,(uchar *)0x0,0,
                                    ctx);
        uVar2 = test_int_eq("test/ectest.c",0xb34,
                            "EC_POINT_point2oct(group, G2, POINT_CONVERSION_UNCOMPRESSED, NULL, 0, ctx)"
                            ,"bsize",sVar10 & 0xffffffff,iVar1);
        if (uVar2 == 0) goto LAB_00100934;
        sVar10 = (size_t)iVar1;
        local_88 = (uchar *)CRYPTO_malloc(iVar1,"test/ectest.c",0xb37);
        iVar4 = test_ptr("test/ectest.c",0xb37,"buf1 = OPENSSL_malloc(bsize)",local_88);
        if (iVar4 == 0) {
LAB_00100871:
          uVar13 = 0;
          local_d0 = 0;
          uVar12 = 0;
          ctx_00 = (EVP_PKEY_CTX *)0x0;
          ctx_01 = (EVP_PKEY_CTX *)0x0;
          local_b8 = (uchar *)0x0;
          uVar2 = 0;
          local_b0 = (uchar *)0x0;
          local_c8 = (EC_KEY *)0x0;
          local_c0 = (EC_KEY *)0x0;
          local_98 = (uchar *)0x0;
          local_90 = (EC_POINT *)0x0;
          local_a0 = (EC_POINT *)0x0;
          local_a8 = (EC_GROUP *)0x0;
        }
        else {
          EC_POINT_point2oct(local_d8,local_80,POINT_CONVERSION_UNCOMPRESSED,local_88,sVar10,ctx);
          iVar4 = test_int_eq("test/ectest.c",0xb38,
                              "EC_POINT_point2oct(group, G2, POINT_CONVERSION_UNCOMPRESSED, buf1, bsize, ctx)"
                              ,"bsize");
          if (iVar4 == 0) goto LAB_00100871;
          order = (BIGNUM *)EC_GROUP_get0_order(local_d8);
          iVar4 = test_ptr("test/ectest.c",0xb3b,"z = EC_GROUP_get0_order(group)",order);
          if (iVar4 == 0) goto LAB_00100871;
          cofactor = (BIGNUM *)EC_GROUP_get0_cofactor(local_d8);
          iVar4 = test_ptr("test/ectest.c",0xb3c,"cof = EC_GROUP_get0_cofactor(group)",cofactor);
          if (iVar4 == 0) goto LAB_00100871;
          if (iVar3 == 0x196) {
            local_a8 = EC_GROUP_new_curve_GFp(pBVar8,a,b,ctx);
            uVar2 = test_ptr("test/ectest.c",0xb42,"altgroup = EC_GROUP_new_curve_GFp(p, a, b, ctx)"
                             ,local_a8);
            if (uVar2 != 0) goto LAB_00100a8d;
LAB_00100b2f:
            uVar13 = 0;
            local_d0 = 0;
            uVar12 = 0;
            ctx_00 = (EVP_PKEY_CTX *)0x0;
            ctx_01 = (EVP_PKEY_CTX *)0x0;
            local_b8 = (uchar *)0x0;
            local_b0 = (uchar *)0x0;
            local_c8 = (EC_KEY *)0x0;
            local_c0 = (EC_KEY *)0x0;
            local_98 = (uchar *)0x0;
            local_90 = (EC_POINT *)0x0;
            local_a0 = (EC_POINT *)0x0;
          }
          else {
            local_a8 = (EC_GROUP *)EC_GROUP_new_curve_GF2m();
            uVar2 = test_ptr("test/ectest.c",0xb47,
                             "altgroup = EC_GROUP_new_curve_GF2m(p, a, b, ctx)",local_a8);
            if (uVar2 == 0) goto LAB_00100b2f;
LAB_00100a8d:
            EC_POINT_free(local_80);
            local_80 = EC_POINT_new(local_a8);
            iVar3 = test_ptr("test/ectest.c",0xb4e,"G2 = EC_POINT_new(altgroup)");
            if (iVar3 == 0) goto LAB_00100ac5;
            iVar3 = EC_POINT_oct2point(local_a8,local_80,local_88,sVar10,ctx);
            uVar2 = test_true("test/ectest.c",0xb4f,
                              "EC_POINT_oct2point(altgroup, G2, buf1, bsize, ctx)",iVar3 != 0);
            if (uVar2 == 0) goto LAB_00100b2f;
            iVar3 = EC_POINT_is_on_curve(local_a8,local_80,ctx);
            iVar3 = test_int_eq("test/ectest.c",0xb50,"EC_POINT_is_on_curve(altgroup, G2, ctx)",
                                &_LC34,iVar3,1);
            if (iVar3 == 0) {
LAB_00100ac5:
              uVar13 = 0;
              local_d0 = 0;
              uVar12 = 0;
              ctx_00 = (EVP_PKEY_CTX *)0x0;
              ctx_01 = (EVP_PKEY_CTX *)0x0;
              local_b8 = (uchar *)0x0;
              uVar2 = 0;
              local_b0 = (uchar *)0x0;
              local_c8 = (EC_KEY *)0x0;
              local_c0 = (EC_KEY *)0x0;
              local_98 = (uchar *)0x0;
              local_90 = (EC_POINT *)0x0;
              local_a0 = (EC_POINT *)0x0;
            }
            else {
              EC_GROUP_set_generator(local_a8,local_80,order,cofactor);
              iVar3 = test_true("test/ectest.c",0xb51,"EC_GROUP_set_generator(altgroup, G2, z, cof)"
                               );
              if (iVar3 == 0) goto LAB_00100ac5;
              local_a0 = EC_POINT_new(local_d8);
              iVar3 = test_ptr("test/ectest.c",0xb57,"Q1 = EC_POINT_new(group)");
              if (iVar3 == 0) {
                uVar13 = 0;
                local_d0 = 0;
                uVar12 = 0;
                ctx_00 = (EVP_PKEY_CTX *)0x0;
                ctx_01 = (EVP_PKEY_CTX *)0x0;
                local_b8 = (uchar *)0x0;
                local_b0 = (uchar *)0x0;
                local_c8 = (EC_KEY *)0x0;
                local_c0 = (EC_KEY *)0x0;
                local_98 = (uchar *)0x0;
                local_90 = (EC_POINT *)0x0;
                uVar2 = 0;
              }
              else {
                local_90 = EC_POINT_new(local_a8);
                iVar3 = test_ptr("test/ectest.c",0xb58,"Q2 = EC_POINT_new(altgroup)");
                if (iVar3 != 0) {
                  iVar3 = EC_GROUP_order_bits(local_d8);
                  iVar3 = BN_rand(rnd,iVar3 + -1,0,0);
                  iVar3 = test_true("test/ectest.c",0xb5a,
                                    "BN_rand(k, EC_GROUP_order_bits(group) - 1, BN_RAND_TOP_ONE, BN_RAND_BOTTOM_ANY)"
                                    ,iVar3 != 0);
                  if (iVar3 == 0) {
                    uVar13 = 0;
                    local_d0 = 0;
                    uVar12 = 0;
                    ctx_00 = (EVP_PKEY_CTX *)0x0;
                    ctx_01 = (EVP_PKEY_CTX *)0x0;
                    local_b8 = (uchar *)0x0;
                    local_b0 = (uchar *)0x0;
                    local_c8 = (EC_KEY *)0x0;
                    local_c0 = (EC_KEY *)0x0;
                    local_98 = (uchar *)0x0;
                    uVar2 = 0;
                    goto LAB_0010054b;
                  }
                  BN_clear_bit(rnd,0);
                  iVar3 = test_true("test/ectest.c",0xb5d,"BN_clear_bit(k, 0)");
                  if (iVar3 != 0) {
                    EC_POINT_mul(local_d8,local_a0,rnd,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
                    iVar3 = test_true("test/ectest.c",0xb5f,
                                      "EC_POINT_mul(group, Q1, k, NULL, NULL, ctx)");
                    if (iVar3 != 0) {
                      sVar11 = EC_POINT_point2oct(local_d8,local_a0,POINT_CONVERSION_UNCOMPRESSED,
                                                  (uchar *)0x0,0,ctx);
                      iVar3 = test_int_eq("test/ectest.c",0xb61,
                                          "EC_POINT_point2oct(group, Q1, POINT_CONVERSION_UNCOMPRESSED, NULL, 0, ctx)"
                                          ,"bsize",sVar11 & 0xffffffff,iVar1);
                      if (iVar3 != 0) {
                        sVar11 = EC_POINT_point2oct(local_d8,local_a0,POINT_CONVERSION_UNCOMPRESSED,
                                                    local_88,sVar10,ctx);
                        iVar3 = test_int_eq("test/ectest.c",0xb64,
                                            "EC_POINT_point2oct(group, Q1, POINT_CONVERSION_UNCOMPRESSED, buf1, bsize, ctx)"
                                            ,"bsize",sVar11 & 0xffffffff,iVar1);
                        if (iVar3 != 0) {
                          BN_rshift1(rnd,rnd);
                          iVar3 = test_true("test/ectest.c",0xb68,"BN_rshift1(k, k)");
                          if (iVar3 != 0) {
                            EC_POINT_mul(local_a8,local_90,rnd,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
                            iVar3 = test_true("test/ectest.c",0xb6a,
                                              "EC_POINT_mul(altgroup, Q2, k, NULL, NULL, ctx)");
                            if (iVar3 != 0) {
                              sVar11 = EC_POINT_point2oct(local_a8,local_90,
                                                          POINT_CONVERSION_UNCOMPRESSED,(uchar *)0x0
                                                          ,0,ctx);
                              iVar3 = test_int_eq("test/ectest.c",0xb6c,
                                                  "EC_POINT_point2oct(altgroup, Q2, POINT_CONVERSION_UNCOMPRESSED, NULL, 0, ctx)"
                                                  ,"bsize",sVar11 & 0xffffffff,iVar1);
                              if (iVar3 != 0) {
                                local_98 = (uchar *)CRYPTO_malloc(iVar1,"test/ectest.c",0xb6f);
                                iVar3 = test_ptr("test/ectest.c",0xb6f,
                                                 "buf2 = OPENSSL_malloc(bsize)",local_98);
                                if (iVar3 != 0) {
                                  sVar11 = EC_POINT_point2oct(local_a8,local_90,
                                                              POINT_CONVERSION_UNCOMPRESSED,local_98
                                                              ,sVar10,ctx);
                                  iVar3 = test_int_eq("test/ectest.c",0xb70,
                                                                                                            
                                                  "EC_POINT_point2oct(altgroup, Q2, POINT_CONVERSION_UNCOMPRESSED, buf2, bsize, ctx)"
                                                  ,"bsize",sVar11 & 0xffffffff,iVar1);
                                  if (iVar3 != 0) {
                                    iVar3 = test_mem_eq("test/ectest.c",0xb74,&_LC50,&_LC49,local_88
                                                        ,sVar10,local_98,sVar10);
                                    if (iVar3 != 0) {
                                      local_c0 = EC_KEY_new();
                                      iVar3 = test_ptr("test/ectest.c",0xb78,"eckey1 = EC_KEY_new()"
                                                      );
                                      if (iVar3 != 0) {
                                        iVar3 = EC_KEY_set_group(local_c0,local_a8);
                                        iVar3 = test_true("test/ectest.c",0xb79,
                                                          "EC_KEY_set_group(eckey1, altgroup)",
                                                          iVar3 != 0);
                                        if (iVar3 == 0) {
                                          uVar13 = 0;
                                          local_d0 = 0;
                                          uVar12 = 0;
                                          ctx_00 = (EVP_PKEY_CTX *)0x0;
                                          ctx_01 = (EVP_PKEY_CTX *)0x0;
                                          local_b8 = (uchar *)0x0;
                                          local_b0 = (uchar *)0x0;
                                          local_c8 = (EC_KEY *)0x0;
                                          uVar2 = 0;
                                          goto LAB_0010054b;
                                        }
                                        EC_KEY_generate_key(local_c0);
                                        iVar3 = test_true("test/ectest.c",0xb7a,
                                                          "EC_KEY_generate_key(eckey1)");
                                        if (iVar3 != 0) {
                                          local_c8 = EC_KEY_new();
                                          iVar3 = test_ptr("test/ectest.c",0xb7b,
                                                           "eckey2 = EC_KEY_new()",local_c8);
                                          if (iVar3 != 0) {
                                            iVar3 = EC_KEY_set_group(local_c8,local_a8);
                                            iVar3 = test_true("test/ectest.c",0xb7c,
                                                              "EC_KEY_set_group(eckey2, altgroup)",
                                                              iVar3 != 0);
                                            if (iVar3 != 0) {
                                              iVar3 = EC_KEY_generate_key(local_c8);
                                              iVar3 = test_true("test/ectest.c",0xb7d,
                                                                "EC_KEY_generate_key(eckey2)",
                                                                iVar3 != 0);
                                              if (iVar3 != 0) {
                                                pBVar8 = EC_KEY_get0_private_key(local_c0);
                                                iVar3 = test_ptr("test/ectest.c",0xb81,
                                                                                                                                  
                                                  "priv1 = EC_KEY_get0_private_key(eckey1)");
                                                if (iVar3 != 0) {
                                                  EC_POINT_mul(local_d8,local_a0,pBVar8,
                                                               (EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
                                                  uVar2 = test_true("test/ectest.c",0xb8a,
                                                                                                                                        
                                                  "EC_POINT_mul(group, Q1, priv1, NULL, NULL, ctx)")
                                                  ;
                                                  if (uVar2 != 0) {
                                                    sVar11 = EC_POINT_point2oct(local_d8,local_a0,
                                                                                                                                                                
                                                  POINT_CONVERSION_UNCOMPRESSED,(uchar *)0x0,0,ctx);
                                                  uVar2 = test_int_eq("test/ectest.c",0xb8b,
                                                                                                                                            
                                                  "EC_POINT_point2oct(group, Q1, POINT_CONVERSION_UNCOMPRESSED, NULL, 0, ctx)"
                                                  ,"bsize",sVar11 & 0xffffffff,iVar1);
                                                  if (uVar2 != 0) {
                                                    local_b0 = (uchar *)CRYPTO_malloc(iVar1,
                                                  "test/ectest.c",0xb8e);
                                                  uVar2 = test_ptr("test/ectest.c",0xb8e,
                                                                   "pub1 = OPENSSL_malloc(bsize)",
                                                                   local_b0);
                                                  if (uVar2 != 0) {
                                                    sVar11 = EC_POINT_point2oct(local_d8,local_a0,
                                                                                                                                                                
                                                  POINT_CONVERSION_UNCOMPRESSED,local_b0,sVar10,ctx)
                                                  ;
                                                  uVar2 = test_int_eq("test/ectest.c",0xb8f,
                                                                                                                                            
                                                  "EC_POINT_point2oct(group, Q1, POINT_CONVERSION_UNCOMPRESSED, pub1, bsize, ctx)"
                                                  ,"bsize",sVar11 & 0xffffffff,iVar1);
                                                  if (uVar2 != 0) {
                                                    pEVar9 = EC_KEY_get0_public_key(local_c8);
                                                    uVar2 = test_ptr("test/ectest.c",0xb95,
                                                                                                                                          
                                                  "Q = EC_KEY_get0_public_key(eckey2)");
                                                  if (uVar2 != 0) {
                                                    sVar11 = EC_POINT_point2oct(local_a8,pEVar9,
                                                                                                                                                                
                                                  POINT_CONVERSION_UNCOMPRESSED,(uchar *)0x0,0,ctx);
                                                  uVar2 = test_int_eq("test/ectest.c",0xb96,
                                                                                                                                            
                                                  "EC_POINT_point2oct(altgroup, Q, POINT_CONVERSION_UNCOMPRESSED, NULL, 0, ctx)"
                                                  ,"bsize",sVar11 & 0xffffffff,iVar1);
                                                  if (uVar2 != 0) {
                                                    local_b8 = (uchar *)CRYPTO_malloc(iVar1,
                                                  "test/ectest.c",0xb99);
                                                  uVar2 = test_ptr("test/ectest.c",0xb99,
                                                                   "pub2 = OPENSSL_malloc(bsize)",
                                                                   local_b8);
                                                  if (uVar2 == 0) {
LAB_0010151a:
                                                    uVar13 = 0;
                                                    uVar12 = 0;
                                                    ctx_01 = (EVP_PKEY_CTX *)0x0;
                                                    local_d0 = 0;
                                                    ctx_00 = (EVP_PKEY_CTX *)0x0;
                                                  }
                                                  else {
                                                    sVar11 = EC_POINT_point2oct(local_a8,pEVar9,
                                                                                                                                                                
                                                  POINT_CONVERSION_UNCOMPRESSED,local_b8,sVar10,ctx)
                                                  ;
                                                  iVar3 = test_int_eq("test/ectest.c",0xb9a,
                                                                                                                                            
                                                  "EC_POINT_point2oct(altgroup, Q, POINT_CONVERSION_UNCOMPRESSED, pub2, bsize, ctx)"
                                                  ,"bsize",sVar11 & 0xffffffff,iVar1);
                                                  if (iVar3 != 0) {
                                                    local_60 = EVP_PKEY_new();
                                                    uVar2 = test_ptr("test/ectest.c",0xba0,
                                                                     "pkey1 = EVP_PKEY_new()",
                                                                     local_60);
                                                    if (uVar2 == 0) goto LAB_0010151a;
                                                    iVar3 = EVP_PKEY_assign(local_60,0x198,local_c0)
                                                    ;
                                                    iVar3 = test_int_eq("test/ectest.c",0xba1,
                                                                                                                                                
                                                  "EVP_PKEY_assign_EC_KEY(pkey1, eckey1)",&_LC34,
                                                  iVar3,1);
                                                  if (iVar3 != 0) {
                                                    local_58 = EVP_PKEY_new();
                                                    uVar2 = test_ptr("test/ectest.c",0xba4,
                                                                     "pkey2 = EVP_PKEY_new()",
                                                                     local_58);
                                                    if (uVar2 != 0) {
                                                      iVar3 = EVP_PKEY_assign(local_58,0x198,
                                                                              local_c8);
                                                      uVar2 = test_int_eq("test/ectest.c",0xba5,
                                                                                                                                                    
                                                  "EVP_PKEY_assign_EC_KEY(pkey2, eckey2)",&_LC34,
                                                  iVar3,1);
                                                  if (uVar2 != 0) {
                                                    ctx_01 = EVP_PKEY_CTX_new(local_60,(ENGINE *)0x0
                                                                             );
                                                    iVar3 = test_ptr("test/ectest.c",0xbaa,
                                                                                                                                          
                                                  "pctx1 = EVP_PKEY_CTX_new(pkey1, NULL)",ctx_01);
                                                  if (iVar3 != 0) {
                                                    EVP_PKEY_derive_init(ctx_01);
                                                    iVar3 = test_int_eq("test/ectest.c",0xbab,
                                                                                                                                                
                                                  "EVP_PKEY_derive_init(pctx1)",&_LC34);
                                                  if (iVar3 == 0) {
                                                    uVar13 = 0;
                                                    uVar12 = 0;
                                                    local_d0 = 0;
                                                    ctx_00 = (EVP_PKEY_CTX *)0x0;
                                                    local_c8 = (EC_KEY *)0x0;
                                                    local_c0 = (EC_KEY *)0x0;
                                                    uVar2 = 0;
                                                    goto LAB_0010054b;
                                                  }
                                                  iVar3 = EVP_PKEY_derive_set_peer(ctx_01,local_58);
                                                  iVar3 = test_int_eq("test/ectest.c",0xbac,
                                                                                                                                            
                                                  "EVP_PKEY_derive_set_peer(pctx1, pkey2)",&_LC34,
                                                  iVar3,1);
                                                  if (iVar3 != 0) {
                                                    iVar3 = EVP_PKEY_derive(ctx_01,(uchar *)0x0,
                                                                            (size_t *)&local_50);
                                                    iVar3 = test_int_eq("test/ectest.c",0xbad,
                                                                                                                                                
                                                  "EVP_PKEY_derive(pctx1, NULL, &sslen)",&_LC34,
                                                  iVar3,1);
                                                  if (iVar3 != 0) {
                                                    iVar3 = test_int_gt("test/ectest.c",0xbae,
                                                                        "bsize","sslen",iVar1,
                                                                        local_50);
                                                    if (iVar3 != 0) {
                                                      iVar3 = EVP_PKEY_derive(ctx_01,local_88,
                                                                              (size_t *)&local_50);
                                                      iVar3 = test_int_eq("test/ectest.c",0xbaf,
                                                                                                                                                    
                                                  "EVP_PKEY_derive(pctx1, buf1, &sslen)",&_LC34,
                                                  iVar3,1);
                                                  if (iVar3 != 0) {
                                                    ctx_00 = EVP_PKEY_CTX_new(local_58,(ENGINE *)0x0
                                                                             );
                                                    iVar3 = test_ptr("test/ectest.c",0xbb1,
                                                                                                                                          
                                                  "pctx2 = EVP_PKEY_CTX_new(pkey2, NULL)",ctx_00);
                                                  if (iVar3 != 0) {
                                                    iVar3 = EVP_PKEY_derive_init(ctx_00);
                                                    iVar3 = test_int_eq("test/ectest.c",0xbb2,
                                                                                                                                                
                                                  "EVP_PKEY_derive_init(pctx2)",&_LC34,iVar3,1);
                                                  if (iVar3 != 0) {
                                                    iVar3 = EVP_PKEY_derive_set_peer
                                                                      (ctx_00,local_60);
                                                    iVar3 = test_int_eq("test/ectest.c",0xbb3,
                                                                                                                                                
                                                  "EVP_PKEY_derive_set_peer(pctx2, pkey1)",&_LC34,
                                                  iVar3,1);
                                                  if (iVar3 != 0) {
                                                    iVar3 = EVP_PKEY_derive(ctx_00,(uchar *)0x0,
                                                                            (size_t *)&local_48);
                                                    iVar3 = test_int_eq("test/ectest.c",0xbb4,
                                                                                                                                                
                                                  "EVP_PKEY_derive(pctx2, NULL, &t)",&_LC34,iVar3,1)
                                                  ;
                                                  if (iVar3 != 0) {
                                                    iVar3 = test_int_gt("test/ectest.c",0xbb5,
                                                                        "bsize",&_LC79,iVar1,
                                                                        local_48);
                                                    if (iVar3 != 0) {
                                                      iVar3 = test_int_le("test/ectest.c",0xbb6,
                                                                          "sslen",&_LC79,local_50,
                                                                          local_48);
                                                      if (iVar3 != 0) {
                                                        iVar3 = EVP_PKEY_derive(ctx_00,local_98,
                                                                                (size_t *)&local_48)
                                                        ;
                                                        iVar3 = test_int_eq("test/ectest.c",2999,
                                                                                                                                                        
                                                  "EVP_PKEY_derive(pctx2, buf2, &t)",&_LC34,iVar3,1)
                                                  ;
                                                  if (iVar3 != 0) {
                                                    iVar3 = test_mem_eq("test/ectest.c",0xbbb,&_LC50
                                                                        ,&_LC49,local_88,
                                                                        CONCAT44(uStack_4c,local_50)
                                                                        ,local_98,
                                                                        CONCAT44(uStack_44,local_48)
                                                                       );
                                                    if (iVar3 == 0) {
                                                      uVar13 = 0;
                                                      uVar12 = 0;
                                                      local_d0 = 0;
                                                      local_c8 = (EC_KEY *)0x0;
                                                      local_c0 = (EC_KEY *)0x0;
                                                      uVar2 = 0;
                                                      goto LAB_0010054b;
                                                    }
                                                    uVar12 = OSSL_PARAM_BLD_new();
                                                    iVar3 = test_ptr("test/ectest.c",0xbbf,
                                                                                                                                          
                                                  "param_bld = OSSL_PARAM_BLD_new()",uVar12);
                                                  if (iVar3 != 0) {
                                                    iVar3 = OSSL_PARAM_BLD_push_utf8_string
                                                                      (uVar12,"group",pcVar6,0);
                                                    iVar3 = test_true("test/ectest.c",0xbc0,
                                                                                                                                            
                                                  "OSSL_PARAM_BLD_push_utf8_string(param_bld, OSSL_PKEY_PARAM_GROUP_NAME, curve_name, 0)"
                                                  ,iVar3 != 0);
                                                  if (iVar3 != 0) {
                                                    iVar3 = OSSL_PARAM_BLD_push_octet_string
                                                                      (uVar12,&_LC83,local_b0,sVar10
                                                                      );
                                                    iVar3 = test_true("test/ectest.c",0xbc3,
                                                                                                                                            
                                                  "OSSL_PARAM_BLD_push_octet_string(param_bld, OSSL_PKEY_PARAM_PUB_KEY, pub1, bsize)"
                                                  ,iVar3 != 0);
                                                  if (iVar3 != 0) {
                                                    iVar3 = OSSL_PARAM_BLD_push_BN
                                                                      (uVar12,&_LC85,pBVar8);
                                                    iVar3 = test_true("test/ectest.c",0xbc6,
                                                                                                                                            
                                                  "OSSL_PARAM_BLD_push_BN(param_bld, OSSL_PKEY_PARAM_PRIV_KEY, priv1)"
                                                  ,iVar3 != 0);
                                                  if (iVar3 != 0) {
                                                    local_d0 = OSSL_PARAM_BLD_to_param(uVar12);
                                                    iVar3 = test_ptr("test/ectest.c",0xbc9,
                                                                                                                                          
                                                  "params1 = OSSL_PARAM_BLD_to_param(param_bld)");
                                                  if (iVar3 == 0) {
                                                    uVar13 = 0;
                                                    local_c8 = (EC_KEY *)0x0;
                                                    local_c0 = (EC_KEY *)0x0;
                                                    uVar2 = 0;
                                                    goto LAB_0010054b;
                                                  }
                                                  OSSL_PARAM_BLD_free(uVar12);
                                                  uVar12 = OSSL_PARAM_BLD_new();
                                                  iVar3 = test_ptr("test/ectest.c",0xbcd,
                                                                                                                                      
                                                  "param_bld = OSSL_PARAM_BLD_new()",uVar12);
                                                  if (iVar3 != 0) {
                                                    iVar3 = OSSL_PARAM_BLD_push_utf8_string
                                                                      (uVar12,"group",pcVar6,0);
                                                    iVar3 = test_true("test/ectest.c",0xbce,
                                                                                                                                            
                                                  "OSSL_PARAM_BLD_push_utf8_string(param_bld, OSSL_PKEY_PARAM_GROUP_NAME, curve_name, 0)"
                                                  ,iVar3 != 0);
                                                  if (iVar3 != 0) {
                                                    iVar3 = OSSL_PARAM_BLD_push_octet_string
                                                                      (uVar12,&_LC83,local_b8,sVar10
                                                                      );
                                                    iVar3 = test_true("test/ectest.c",0xbd1,
                                                                                                                                            
                                                  "OSSL_PARAM_BLD_push_octet_string(param_bld, OSSL_PKEY_PARAM_PUB_KEY, pub2, bsize)"
                                                  ,iVar3 != 0);
                                                  if (iVar3 != 0) {
                                                    uVar13 = OSSL_PARAM_BLD_to_param(uVar12);
                                                    uVar2 = test_ptr("test/ectest.c",0xbd4,
                                                                                                                                          
                                                  "params2 = OSSL_PARAM_BLD_to_param(param_bld)",
                                                  uVar13);
                                                  if (uVar2 == 0) {
LAB_00101d1b:
                                                    local_c8 = (EC_KEY *)0x0;
                                                    local_c0 = (EC_KEY *)0x0;
                                                  }
                                                  else {
                                                    EVP_PKEY_CTX_free(ctx_00);
                                                    ctx_00 = (EVP_PKEY_CTX *)
                                                             EVP_PKEY_CTX_new_from_name(0,&_LC1,0);
                                                    iVar3 = test_ptr("test/ectest.c",0xbd9,
                                                                                                                                          
                                                  "pctx2 = EVP_PKEY_CTX_new_from_name(NULL, \"EC\", NULL)"
                                                  ,ctx_00);
                                                  if (iVar3 != 0) {
                                                    uVar5 = EVP_PKEY_fromdata_init(ctx_00);
                                                    uVar2 = test_int_eq("test/ectest.c",0xbda,
                                                                                                                                                
                                                  "EVP_PKEY_fromdata_init(pctx2)",&_LC34,uVar5,1);
                                                  if (uVar2 == 0) goto LAB_00101d1b;
                                                  uVar5 = EVP_PKEY_fromdata(ctx_00,&local_60,0x87,
                                                                            local_d0);
                                                  iVar3 = test_int_eq("test/ectest.c",0xbdb,
                                                                                                                                            
                                                  "EVP_PKEY_fromdata(pctx2, &pkey1, EVP_PKEY_KEYPAIR, params1)"
                                                  ,&_LC34,uVar5,1);
                                                  if (iVar3 != 0) {
                                                    uVar5 = EVP_PKEY_fromdata(ctx_00,&local_58,0x86,
                                                                              uVar13);
                                                    iVar3 = test_int_eq("test/ectest.c",0xbdd,
                                                                                                                                                
                                                  "EVP_PKEY_fromdata(pctx2, &pkey2, EVP_PKEY_PUBLIC_KEY, params2)"
                                                  ,&_LC34,uVar5,1);
                                                  if (iVar3 != 0) {
                                                    EVP_PKEY_CTX_free(ctx_01);
                                                    ctx_01 = EVP_PKEY_CTX_new(local_60,(ENGINE *)0x0
                                                                             );
                                                    iVar3 = test_ptr("test/ectest.c",0xbe3,
                                                                                                                                          
                                                  "pctx1 = EVP_PKEY_CTX_new(pkey1, NULL)",ctx_01);
                                                  if (iVar3 != 0) {
                                                    iVar3 = EVP_PKEY_derive_init(ctx_01);
                                                    iVar3 = test_int_eq("test/ectest.c",0xbe4,
                                                                                                                                                
                                                  "EVP_PKEY_derive_init(pctx1)",&_LC34,iVar3,1);
                                                  if (iVar3 != 0) {
                                                    iVar3 = EVP_PKEY_derive_set_peer
                                                                      (ctx_01,local_58);
                                                    iVar3 = test_int_eq("test/ectest.c",0xbe5,
                                                                                                                                                
                                                  "EVP_PKEY_derive_set_peer(pctx1, pkey2)",&_LC34,
                                                  iVar3,1);
                                                  if (iVar3 != 0) {
                                                    iVar3 = EVP_PKEY_derive(ctx_01,(uchar *)0x0,
                                                                            (size_t *)&local_48);
                                                    iVar3 = test_int_eq("test/ectest.c",0xbe6,
                                                                                                                                                
                                                  "EVP_PKEY_derive(pctx1, NULL, &t)",&_LC34,iVar3,1)
                                                  ;
                                                  if (iVar3 != 0) {
                                                    iVar3 = test_int_gt("test/ectest.c",0xbe7,
                                                                        "bsize",&_LC79,iVar1,
                                                                        local_48);
                                                    if (iVar3 != 0) {
                                                      iVar3 = test_int_le("test/ectest.c",0xbe8,
                                                                          "sslen",&_LC79,local_50,
                                                                          local_48);
                                                      if (iVar3 != 0) {
                                                        iVar3 = EVP_PKEY_derive(ctx_01,local_88,
                                                                                (size_t *)&local_48)
                                                        ;
                                                        iVar3 = test_int_eq("test/ectest.c",0xbe9,
                                                                                                                                                        
                                                  "EVP_PKEY_derive(pctx1, buf1, &t)",&_LC34,iVar3,1)
                                                  ;
                                                  if (iVar3 != 0) {
                                                    iVar3 = test_mem_eq("test/ectest.c",0xbeb,&_LC50
                                                                        ,&_LC49,local_88,
                                                                        CONCAT44(uStack_44,local_48)
                                                                        ,local_98,
                                                                        CONCAT44(uStack_4c,local_50)
                                                                       );
                                                    local_c8 = (EC_KEY *)0x0;
                                                    uVar2 = (uint)(iVar3 != 0);
                                                    local_c0 = (EC_KEY *)0x0;
                                                    goto LAB_0010054b;
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
                                                  local_c8 = (EC_KEY *)0x0;
                                                  local_c0 = (EC_KEY *)0x0;
                                                  }
                                                  goto LAB_0010054b;
                                                  }
                                                  }
                                                  }
                                                  uVar13 = 0;
                                                  uVar2 = 0;
                                                  local_c8 = (EC_KEY *)0x0;
                                                  local_c0 = (EC_KEY *)0x0;
                                                  goto LAB_0010054b;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  uVar13 = 0;
                                                  uVar2 = 0;
                                                  local_d0 = 0;
                                                  local_c8 = (EC_KEY *)0x0;
                                                  local_c0 = (EC_KEY *)0x0;
                                                  goto LAB_0010054b;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  uVar13 = 0;
                                                  uVar12 = 0;
                                                  local_c8 = (EC_KEY *)0x0;
                                                  local_c0 = (EC_KEY *)0x0;
                                                  uVar2 = 0;
                                                  local_d0 = 0;
                                                  goto LAB_0010054b;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  uVar13 = 0;
                                                  uVar12 = 0;
                                                  ctx_00 = (EVP_PKEY_CTX *)0x0;
                                                  local_d0 = 0;
                                                  local_c8 = (EC_KEY *)0x0;
                                                  local_c0 = (EC_KEY *)0x0;
                                                  uVar2 = 0;
                                                  goto LAB_0010054b;
                                                  }
                                                  }
                                                  uVar13 = 0;
                                                  uVar12 = 0;
                                                  local_d0 = 0;
                                                  ctx_00 = (EVP_PKEY_CTX *)0x0;
                                                  ctx_01 = (EVP_PKEY_CTX *)0x0;
                                                  local_c0 = (EC_KEY *)0x0;
                                                  goto LAB_0010054b;
                                                  }
                                                  }
                                                  uVar13 = 0;
                                                  uVar12 = 0;
                                                  ctx_00 = (EVP_PKEY_CTX *)0x0;
                                                  local_d0 = 0;
                                                  ctx_01 = (EVP_PKEY_CTX *)0x0;
                                                  uVar2 = 0;
                                                  }
                                                  goto LAB_0010054b;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  uVar13 = 0;
                                                  uVar12 = 0;
                                                  local_d0 = 0;
                                                  ctx_00 = (EVP_PKEY_CTX *)0x0;
                                                  ctx_01 = (EVP_PKEY_CTX *)0x0;
                                                  local_b8 = (uchar *)0x0;
                                                  goto LAB_0010054b;
                                                  }
                                                  }
                                                  uVar13 = 0;
                                                  uVar12 = 0;
                                                  local_d0 = 0;
                                                  ctx_00 = (EVP_PKEY_CTX *)0x0;
                                                  ctx_01 = (EVP_PKEY_CTX *)0x0;
                                                  local_b8 = (uchar *)0x0;
                                                  local_b0 = (uchar *)0x0;
                                                  goto LAB_0010054b;
                                                }
                                              }
                                            }
                                          }
                                          uVar13 = 0;
                                          uVar12 = 0;
                                          local_d0 = 0;
                                          ctx_00 = (EVP_PKEY_CTX *)0x0;
                                          ctx_01 = (EVP_PKEY_CTX *)0x0;
                                          uVar2 = 0;
                                          local_b8 = (uchar *)0x0;
                                          local_b0 = (uchar *)0x0;
                                          goto LAB_0010054b;
                                        }
                                      }
                                      uVar13 = 0;
                                      local_d0 = 0;
                                      uVar12 = 0;
                                      ctx_00 = (EVP_PKEY_CTX *)0x0;
                                      ctx_01 = (EVP_PKEY_CTX *)0x0;
                                      local_b8 = (uchar *)0x0;
                                      uVar2 = 0;
                                      local_b0 = (uchar *)0x0;
                                      local_c8 = (EC_KEY *)0x0;
                                      goto LAB_0010054b;
                                    }
                                  }
                                }
                                uVar13 = 0;
                                local_c8 = (EC_KEY *)0x0;
                                uVar12 = 0;
                                ctx_00 = (EVP_PKEY_CTX *)0x0;
                                ctx_01 = (EVP_PKEY_CTX *)0x0;
                                local_c0 = (EC_KEY *)0x0;
                                uVar2 = 0;
                                local_d0 = 0;
                                local_b8 = (uchar *)0x0;
                                local_b0 = (uchar *)0x0;
                                goto LAB_0010054b;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar13 = 0;
                uVar12 = 0;
                ctx_00 = (EVP_PKEY_CTX *)0x0;
                local_d0 = 0;
                ctx_01 = (EVP_PKEY_CTX *)0x0;
                local_b8 = (uchar *)0x0;
                local_b0 = (uchar *)0x0;
                local_c8 = (EC_KEY *)0x0;
                local_c0 = (EC_KEY *)0x0;
                local_98 = (uchar *)0x0;
                uVar2 = 0;
              }
            }
          }
        }
      }
    }
  }
LAB_0010054b:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  OSSL_PARAM_BLD_free(uVar12);
  OSSL_PARAM_free(local_d0);
  OSSL_PARAM_free(uVar13);
  EC_POINT_free(local_a0);
  EC_POINT_free(local_90);
  EC_POINT_free(local_80);
  EC_GROUP_free(local_d8);
  EC_GROUP_free(local_a8);
  CRYPTO_free(local_88);
  CRYPTO_free(local_98);
  CRYPTO_free(local_b0);
  CRYPTO_free(local_b8);
  EC_KEY_free(local_c0);
  EC_KEY_free(local_c8);
  EVP_PKEY_free(local_60);
  EVP_PKEY_free(local_58);
  EVP_PKEY_CTX_free(ctx_01);
  EVP_PKEY_CTX_free(ctx_00);
  uVar7 = (ulong)uVar2;
LAB_00100471:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint do_test_custom_explicit_fromdata
               (EC_GROUP *param_1,BN_CTX *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  undefined8 uVar7;
  uchar *puVar8;
  size_t sVar9;
  long lVar10;
  undefined8 uVar11;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  char *local_510;
  char *local_508;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  EVP_PKEY *local_4d8;
  BIGNUM *local_4d0;
  BIGNUM *local_4c8;
  BIGNUM *local_4c0;
  BIGNUM *local_4b8;
  BIGNUM *local_4b0;
  int local_4a8;
  undefined4 uStack_4a4;
  undefined1 local_4a0 [8];
  undefined1 local_498 [80];
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4e4 = 0;
  local_4d8 = (EVP_PKEY *)0x0;
  local_4d0 = (BIGNUM *)0x0;
  local_4c8 = (BIGNUM *)0x0;
  local_4c0 = (BIGNUM *)0x0;
  local_4b8 = (BIGNUM *)0x0;
  local_4b0 = (BIGNUM *)0x0;
  local_4e0 = 0;
  local_4dc = 0;
  pBVar4 = BN_CTX_get(param_2);
  pBVar5 = BN_CTX_get(param_2);
  pBVar6 = BN_CTX_get(param_2);
  iVar1 = test_ptr("test/ectest.c",0x9dd,&_LC100,pBVar6);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar11 = 0;
    uVar7 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
    goto LAB_00101e5e;
  }
  uVar7 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/ectest.c",0x9de,"bld = OSSL_PARAM_BLD_new()",uVar7);
  if (iVar1 == 0) goto LAB_00102010;
  iVar1 = EC_GROUP_get_field_type(param_1);
  if (iVar1 == 0x196) {
    local_508 = (char *)0x0;
    local_510 = "prime-field";
LAB_00101f8e:
    iVar1 = EC_GROUP_get_curve(param_1,pBVar4,pBVar5,pBVar6,param_2);
    iVar1 = test_true("test/ectest.c",0x9f1,"EC_GROUP_get_curve(group, p, a, b, ctx)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = OSSL_PARAM_BLD_push_utf8_string(uVar7,"field-type",local_510,0);
      iVar1 = test_true("test/ectest.c",0x9f2,
                        "OSSL_PARAM_BLD_push_utf8_string(bld, OSSL_PKEY_PARAM_EC_FIELD_TYPE, field_name, 0)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = OSSL_PARAM_BLD_push_BN(uVar7,&_LC106,pBVar4);
        iVar1 = test_true("test/ectest.c",0x9f4,
                          "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_P, p)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = OSSL_PARAM_BLD_push_BN(uVar7,&_LC108,pBVar5);
          iVar1 = test_true("test/ectest.c",0x9f5,
                            "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_A, a)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_BN(uVar7,&_LC100,pBVar6);
            iVar1 = test_true("test/ectest.c",0x9f6,
                              "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_B, b)",iVar1 != 0);
            if (iVar1 != 0) {
              puVar8 = EC_GROUP_get0_seed(param_1);
              if (puVar8 != (uchar *)0x0) {
                sVar9 = EC_GROUP_get_seed_len(param_1);
                puVar8 = EC_GROUP_get0_seed(param_1);
                iVar1 = OSSL_PARAM_BLD_push_octet_string(uVar7,&_LC111,puVar8,sVar9);
                iVar1 = test_true("test/ectest.c",0x9fa,
                                  "OSSL_PARAM_BLD_push_octet_string(bld, OSSL_PKEY_PARAM_EC_SEED, EC_GROUP_get0_seed(group), EC_GROUP_get_seed_len(group))"
                                  ,iVar1 != 0);
                if (iVar1 == 0) goto LAB_00102010;
              }
              lVar10 = EC_GROUP_get0_cofactor(param_1);
              if (lVar10 != 0) {
                uVar11 = EC_GROUP_get0_cofactor(param_1);
                iVar1 = OSSL_PARAM_BLD_push_BN(uVar7,"cofactor",uVar11);
                iVar1 = test_true("test/ectest.c",0xa00,
                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_COFACTOR, EC_GROUP_get0_cofactor(group))"
                                  ,iVar1 != 0);
                if (iVar1 == 0) goto LAB_00102010;
              }
              iVar1 = OSSL_PARAM_BLD_push_octet_string(uVar7,"generator",param_3,(long)param_4);
              iVar1 = test_true("test/ectest.c",0xa05,
                                "OSSL_PARAM_BLD_push_octet_string(bld, OSSL_PKEY_PARAM_EC_GENERATOR, gen, gen_size)"
                                ,iVar1 != 0);
              if (iVar1 != 0) {
                uVar11 = EC_GROUP_get0_order(param_1);
                iVar1 = OSSL_PARAM_BLD_push_BN(uVar7,"order",uVar11);
                iVar1 = test_true("test/ectest.c",0xa07,
                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_ORDER, EC_GROUP_get0_order(group))"
                                  ,iVar1 != 0);
                if (iVar1 != 0) {
                  ctx = (EVP_PKEY_CTX *)0x0;
                  uVar11 = OSSL_PARAM_BLD_to_param(uVar7);
                  uVar2 = test_ptr("test/ectest.c",0xa0b,"params = OSSL_PARAM_BLD_to_param(bld)",
                                   uVar11);
                  if (uVar2 == 0) goto LAB_00101e5e;
                  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC1,0);
                  iVar1 = test_ptr("test/ectest.c",0xa0c,
                                   "pctx = EVP_PKEY_CTX_new_from_name(NULL, \"EC\", NULL)",ctx);
                  if (iVar1 != 0) {
                    uVar3 = EVP_PKEY_fromdata_init(ctx);
                    iVar1 = test_int_gt("test/ectest.c",0xa0d,"EVP_PKEY_fromdata_init(pctx)",&_LC4,
                                        uVar3,0);
                    if (iVar1 != 0) {
                      uVar3 = EVP_PKEY_fromdata(ctx,&local_4d8,0x84,uVar11);
                      iVar1 = test_int_gt("test/ectest.c",0xa0e,
                                          "EVP_PKEY_fromdata(pctx, &pkeyparam, EVP_PKEY_KEY_PARAMETERS, params)"
                                          ,&_LC4,uVar3,0);
                      if (iVar1 != 0) {
                        iVar1 = EVP_PKEY_get_utf8_string_param
                                          (local_4d8,"group",local_498,0x50,local_4a0);
                        iVar1 = test_false("test/ectest.c",0xa15,
                                           "EVP_PKEY_get_utf8_string_param(pkeyparam, OSSL_PKEY_PARAM_GROUP_NAME, name, sizeof(name), &name_len)"
                                           ,iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = EVP_PKEY_get_utf8_string_param
                                            (local_4d8,"encoding",local_498,0x50,local_4a0);
                          iVar1 = test_true("test/ectest.c",0xa1b,
                                            "EVP_PKEY_get_utf8_string_param(pkeyparam, OSSL_PKEY_PARAM_EC_ENCODING, name, sizeof(name), &name_len)"
                                            ,iVar1 != 0);
                          if ((iVar1 != 0) &&
                             (iVar1 = test_str_eq("test/ectest.c",0xa1e,&_LC126,
                                                  "OSSL_PKEY_EC_ENCODING_EXPLICIT",local_498,
                                                  "explicit"), iVar1 != 0)) {
                            iVar1 = EVP_PKEY_get_utf8_string_param
                                              (local_4d8,"field-type",local_498,0x50,local_4a0);
                            iVar1 = test_true("test/ectest.c",0xa21,
                                              "EVP_PKEY_get_utf8_string_param(pkeyparam, OSSL_PKEY_PARAM_EC_FIELD_TYPE, name, sizeof(name), &name_len)"
                                              ,iVar1 != 0);
                            if ((iVar1 != 0) &&
                               (iVar1 = test_str_eq("test/ectest.c",0xa24,&_LC126,"field_name",
                                                    local_498,local_510), iVar1 != 0)) {
                              iVar1 = EVP_PKEY_get_octet_string_param
                                                (local_4d8,"generator",local_448,0x400,&local_4a8);
                              iVar1 = test_true("test/ectest.c",0xa27,
                                                "EVP_PKEY_get_octet_string_param(pkeyparam, OSSL_PKEY_PARAM_EC_GENERATOR, buf, sizeof(buf), &buf_len)"
                                                ,iVar1 != 0);
                              if ((iVar1 != 0) &&
                                 (iVar1 = test_mem_eq("test/ectest.c",0xa29,&_LC131,&_LC130,
                                                      local_448,(long)local_4a8,param_3,
                                                      (long)param_4), iVar1 != 0)) {
                                iVar1 = EVP_PKEY_get_bn_param(local_4d8,&_LC106,&local_4d0);
                                iVar1 = test_true("test/ectest.c",0xa2c,
                                                  "EVP_PKEY_get_bn_param(pkeyparam, OSSL_PKEY_PARAM_EC_P, &p_out)"
                                                  ,iVar1 != 0);
                                if ((iVar1 != 0) &&
                                   (iVar1 = test_BN_eq("test/ectest.c",0xa2d,"p_out",&_LC106,
                                                       local_4d0,pBVar4), iVar1 != 0)) {
                                  iVar1 = EVP_PKEY_get_bn_param(local_4d8,&_LC108,&local_4c8);
                                  iVar1 = test_true("test/ectest.c",0xa2e,
                                                                                                        
                                                  "EVP_PKEY_get_bn_param(pkeyparam, OSSL_PKEY_PARAM_EC_A, &a_out)"
                                                  ,iVar1 != 0);
                                  if ((iVar1 != 0) &&
                                     (iVar1 = test_BN_eq("test/ectest.c",0xa30,"a_out",&_LC108,
                                                         local_4c8,pBVar5), iVar1 != 0)) {
                                    iVar1 = EVP_PKEY_get_bn_param(local_4d8,&_LC100,&local_4c0);
                                    iVar1 = test_true("test/ectest.c",0xa31,
                                                                                                            
                                                  "EVP_PKEY_get_bn_param(pkeyparam, OSSL_PKEY_PARAM_EC_B, &b_out)"
                                                  ,iVar1 != 0);
                                    if ((iVar1 != 0) &&
                                       (iVar1 = test_BN_eq("test/ectest.c",0xa33,"b_out",&_LC100,
                                                           local_4c0,pBVar6), iVar1 != 0)) {
                                      iVar1 = EVP_PKEY_get_bn_param(local_4d8,"order",&local_4b8);
                                      iVar1 = test_true("test/ectest.c",0xa34,
                                                                                                                
                                                  "EVP_PKEY_get_bn_param(pkeyparam, OSSL_PKEY_PARAM_EC_ORDER, &order_out)"
                                                  ,iVar1 != 0);
                                      if (iVar1 != 0) {
                                        uVar12 = EC_GROUP_get0_order(param_1);
                                        iVar1 = test_BN_eq("test/ectest.c",0xa36,"order_out",
                                                           "EC_GROUP_get0_order(group)",local_4b8,
                                                           uVar12);
                                        if (iVar1 != 0) {
                                          lVar10 = EC_GROUP_get0_cofactor(param_1);
                                          if (lVar10 == 0) {
LAB_00102713:
                                            puVar8 = EC_GROUP_get0_seed(param_1);
                                            if (puVar8 == (uchar *)0x0) {
LAB_001027b0:
                                              iVar1 = EC_GROUP_get_field_type(param_1);
                                              if (iVar1 == 0x196) {
                                                iVar1 = EVP_PKEY_get_int_param
                                                                  (local_4d8,&_LC146,&local_4e8);
                                                iVar1 = test_false("test/ectest.c",0xa49,
                                                                                                                                      
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_M, &i_out)"
                                                  ,iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = EVP_PKEY_get_int_param
                                                                    (local_4d8,&_LC148,&local_4e8);
                                                  iVar1 = test_false("test/ectest.c",0xa4b,
                                                                                                                                          
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_TP_BASIS, &i_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EVP_PKEY_get_int_param
                                                                      (local_4d8,&_LC150,&local_4e8)
                                                    ;
                                                    iVar1 = test_false("test/ectest.c",0xa4d,
                                                                                                                                              
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_PP_K1, &i_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EVP_PKEY_get_int_param
                                                                      (local_4d8,&_LC152,&local_4e8)
                                                    ;
                                                    iVar1 = test_false("test/ectest.c",0xa4f,
                                                                                                                                              
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_PP_K2, &i_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EVP_PKEY_get_int_param
                                                                      (local_4d8,&_LC154,&local_4e8)
                                                    ;
                                                    iVar1 = test_false("test/ectest.c",0xa51,
                                                                                                                                              
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_PP_K3, &i_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EVP_PKEY_get_utf8_string_param
                                                                      (local_4d8,"basis-type",
                                                                       local_498,0x50,local_4a0);
                                                    iVar1 = test_false("test/ectest.c",0xa53,
                                                                                                                                              
                                                  "EVP_PKEY_get_utf8_string_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_TYPE, name, sizeof(name), &name_len)"
                                                  ,iVar1 != 0);
                                                  goto joined_r0x00102fd1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                              else {
                                                iVar1 = EVP_PKEY_get_int_param
                                                                  (local_4d8,&_LC146,&local_4e8);
                                                iVar1 = test_true("test/ectest.c",0xa59,
                                                                                                                                    
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_M, &i_out)"
                                                  ,iVar1 != 0);
                                                uVar3 = local_4e8;
                                                if (iVar1 != 0) {
                                                  iVar1 = EC_GROUP_get_degree(param_1);
                                                  iVar1 = test_int_eq("test/ectest.c",0xa5b,
                                                                      "EC_GROUP_get_degree(group)",
                                                                      "i_out",iVar1,uVar3);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EVP_PKEY_get_utf8_string_param
                                                                      (local_4d8,"basis-type",
                                                                       local_498,0x50,local_4a0);
                                                    iVar1 = test_true("test/ectest.c",0xa5c,
                                                                                                                                            
                                                  "EVP_PKEY_get_utf8_string_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_TYPE, name, sizeof(name), &name_len)"
                                                  ,iVar1 != 0);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = test_str_eq("test/ectest.c",0xa5f,
                                                                          &_LC126,"basis_name",
                                                                          local_498,local_508),
                                                     iVar1 != 0)) {
                                                    iVar1 = EC_GROUP_get_basis_type(param_1);
                                                    if (iVar1 == 0x2aa) {
                                                      iVar1 = EVP_PKEY_get_int_param
                                                                        (local_4d8,&_LC148,
                                                                         &local_4e8);
                                                      iVar1 = test_true("test/ectest.c",0xa63,
                                                                                                                                                
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_TP_BASIS, &i_out)"
                                                  ,iVar1 != 0);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = test_int_eq("test/ectest.c",0xa65,
                                                                          &_LC150,"i_out",local_4e4,
                                                                          local_4e8), iVar1 != 0)) {
                                                    iVar1 = EVP_PKEY_get_int_param
                                                                      (local_4d8,&_LC150,&local_4e8)
                                                    ;
                                                    iVar1 = test_false("test/ectest.c",0xa66,
                                                                                                                                              
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_PP_K1, &i_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EVP_PKEY_get_int_param
                                                                      (local_4d8,&_LC152,&local_4e8)
                                                    ;
                                                    iVar1 = test_false("test/ectest.c",0xa68,
                                                                                                                                              
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_PP_K2, &i_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EVP_PKEY_get_int_param
                                                                      (local_4d8,&_LC154,&local_4e8)
                                                    ;
                                                    iVar1 = test_false("test/ectest.c",0xa6a,
                                                                                                                                              
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_PP_K3, &i_out)"
                                                  ,iVar1 != 0);
joined_r0x00102fd1:
                                                  if (iVar1 != 0) {
                                                    uVar12 = EVP_PKEY_gettable_params(local_4d8);
                                                    iVar1 = test_ptr("test/ectest.c",0xa7d,
                                                                                                                                          
                                                  "gettable = EVP_PKEY_gettable_params(pkeyparam)",
                                                  uVar12);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const(uVar12,"group")
                                                    ;
                                                    iVar1 = test_ptr("test/ectest.c",0xa7e,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_GROUP_NAME)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const
                                                                       (uVar12,"encoding");
                                                    iVar1 = test_ptr("test/ectest.c",0xa7f,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_ENCODING)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const
                                                                       (uVar12,"field-type");
                                                    iVar1 = test_ptr("test/ectest.c",0xa80,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_FIELD_TYPE)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const(uVar12,&_LC106)
                                                    ;
                                                    iVar1 = test_ptr("test/ectest.c",0xa81,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_P)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const(uVar12,&_LC108)
                                                    ;
                                                    iVar1 = test_ptr("test/ectest.c",0xa82,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_A)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const(uVar12,&_LC100)
                                                    ;
                                                    iVar1 = test_ptr("test/ectest.c",0xa83,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_B)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const
                                                                       (uVar12,"generator");
                                                    iVar1 = test_ptr("test/ectest.c",0xa84,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_GENERATOR)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const(uVar12,"order")
                                                    ;
                                                    iVar1 = test_ptr("test/ectest.c",0xa85,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_ORDER)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const
                                                                       (uVar12,"cofactor");
                                                    iVar1 = test_ptr("test/ectest.c",0xa86,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_COFACTOR)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const(uVar12,&_LC111)
                                                    ;
                                                    iVar1 = test_ptr("test/ectest.c",0xa87,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_SEED)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const(uVar12,&_LC146)
                                                    ;
                                                    iVar1 = test_ptr("test/ectest.c",0xa89,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_CHAR2_M)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const
                                                                       (uVar12,"basis-type");
                                                    iVar1 = test_ptr("test/ectest.c",0xa8a,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_CHAR2_TYPE)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const(uVar12,&_LC148)
                                                    ;
                                                    iVar1 = test_ptr("test/ectest.c",0xa8b,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_CHAR2_TP_BASIS)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const(uVar12,&_LC150)
                                                    ;
                                                    iVar1 = test_ptr("test/ectest.c",0xa8c,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_CHAR2_PP_K1)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar13 = OSSL_PARAM_locate_const(uVar12,&_LC152)
                                                    ;
                                                    iVar1 = test_ptr("test/ectest.c",0xa8d,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_CHAR2_PP_K2)"
                                                  ,uVar13);
                                                  if (iVar1 != 0) {
                                                    uVar12 = OSSL_PARAM_locate_const(uVar12,&_LC154)
                                                    ;
                                                    iVar1 = test_ptr("test/ectest.c",0xa8e,
                                                                                                                                          
                                                  "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_EC_CHAR2_PP_K3)"
                                                  ,uVar12);
                                                  uVar2 = (uint)(iVar1 != 0);
                                                  goto LAB_00101e5e;
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
                                                  else {
                                                    iVar1 = EVP_PKEY_get_int_param
                                                                      (local_4d8,&_LC148,&local_4e8)
                                                    ;
                                                    iVar1 = test_false("test/ectest.c",0xa6e,
                                                                                                                                              
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_TP_BASIS, &i_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EVP_PKEY_get_int_param
                                                                      (local_4d8,&_LC150,&local_4e8)
                                                    ;
                                                    iVar1 = test_true("test/ectest.c",0xa70,
                                                                                                                                            
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_PP_K1, &i_out)"
                                                  ,iVar1 != 0);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = test_int_eq("test/ectest.c",0xa72,
                                                                          &_LC150,"i_out",local_4e4,
                                                                          local_4e8), iVar1 != 0)) {
                                                    iVar1 = EVP_PKEY_get_int_param
                                                                      (local_4d8,&_LC152,&local_4e8)
                                                    ;
                                                    iVar1 = test_true("test/ectest.c",0xa73,
                                                                                                                                            
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_PP_K2, &i_out)"
                                                  ,iVar1 != 0);
                                                  if ((iVar1 != 0) &&
                                                     (iVar1 = test_int_eq("test/ectest.c",0xa75,
                                                                          &_LC152,"i_out",local_4e0,
                                                                          local_4e8), iVar1 != 0)) {
                                                    iVar1 = EVP_PKEY_get_int_param
                                                                      (local_4d8,&_LC154,&local_4e8)
                                                    ;
                                                    iVar1 = test_true("test/ectest.c",0xa76,
                                                                                                                                            
                                                  "EVP_PKEY_get_int_param(pkeyparam, OSSL_PKEY_PARAM_EC_CHAR2_PP_K3, &i_out)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_int_eq("test/ectest.c",0xa78,
                                                                        &_LC154,"i_out",local_4dc,
                                                                        local_4e8);
                                                    goto joined_r0x00102fd1;
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
                                              iVar1 = EVP_PKEY_get_octet_string_param
                                                                (local_4d8,&_LC111,local_448,0x400,
                                                                 &local_4a8);
                                              iVar1 = test_true("test/ectest.c",0xa40,
                                                                                                                                
                                                  "EVP_PKEY_get_octet_string_param(pkeyparam, OSSL_PKEY_PARAM_EC_SEED, buf, sizeof(buf), &buf_len)"
                                                  ,iVar1 != 0);
                                              if (iVar1 != 0) {
                                                sVar9 = EC_GROUP_get_seed_len(param_1);
                                                puVar8 = EC_GROUP_get0_seed(param_1);
                                                iVar1 = test_mem_eq("test/ectest.c",0xa42,&_LC131,
                                                                    "EC_GROUP_get0_seed(group)",
                                                                    local_448,
                                                                    CONCAT44(uStack_4a4,local_4a8),
                                                                    puVar8,sVar9);
                                                if (iVar1 != 0) goto LAB_001027b0;
                                              }
                                            }
                                          }
                                          else {
                                            iVar1 = EVP_PKEY_get_bn_param
                                                              (local_4d8,"cofactor",&local_4b0);
                                            iVar1 = test_true("test/ectest.c",0xa3a,
                                                                                                                            
                                                  "EVP_PKEY_get_bn_param(pkeyparam, OSSL_PKEY_PARAM_EC_COFACTOR, &cofactor_out)"
                                                  ,iVar1 != 0);
                                            if (iVar1 != 0) {
                                              uVar12 = EC_GROUP_get0_cofactor(param_1);
                                              iVar1 = test_BN_eq("test/ectest.c",0xa3c,
                                                                 "cofactor_out",
                                                                 "EC_GROUP_get0_cofactor(group)",
                                                                 local_4b0,uVar12);
                                              if (iVar1 != 0) goto LAB_00102713;
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
                  goto LAB_00101e5e;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = EC_GROUP_get_basis_type(param_1);
    if (iVar1 == 0x2aa) {
      iVar1 = EC_GROUP_get_trinomial_basis(param_1,&local_4e4);
      iVar1 = test_true("test/ectest.c",0x9e8,"EC_GROUP_get_trinomial_basis(group, &k1)",iVar1 != 0)
      ;
      local_508 = "tpBasis";
      local_510 = "characteristic-two-field";
      if (iVar1 != 0) goto LAB_00101f8e;
    }
    else {
      iVar1 = EC_GROUP_get_pentanomial_basis(param_1,&local_4e4,&local_4e0,&local_4dc);
      iVar1 = test_true("test/ectest.c",0x9ec,"EC_GROUP_get_pentanomial_basis(group, &k1, &k2, &k3)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        local_508 = "ppBasis";
        local_510 = "characteristic-two-field";
        goto LAB_00101f8e;
      }
    }
  }
LAB_00102010:
  uVar11 = 0;
  ctx = (EVP_PKEY_CTX *)0x0;
  uVar2 = 0;
LAB_00101e5e:
  BN_free(local_4b8);
  BN_free(local_4b0);
  BN_free(local_4c8);
  BN_free(local_4c0);
  BN_free(local_4d0);
  OSSL_PARAM_free(uVar11);
  OSSL_PARAM_BLD_free(uVar7);
  EVP_PKEY_free(local_4d8);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong custom_generator_test(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  BN_CTX *ctx;
  ulong uVar5;
  EC_GROUP *group;
  BIGNUM *rnd;
  EC_POINT *r;
  EC_POINT *r_00;
  size_t sVar6;
  size_t sVar7;
  EC_POINT *pEVar8;
  BIGNUM *cofactor;
  BIGNUM *order;
  uchar *buf;
  uchar *local_60;
  
  iVar1 = *(int *)((long)param_1 * 0x10 + curves);
  pcVar4 = OBJ_nid2sn(iVar1);
  test_note("Curve %s",pcVar4);
  ctx = BN_CTX_new();
  uVar5 = test_ptr("test/ectest.c",0xaaf,"ctx = BN_CTX_new()",ctx);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  BN_CTX_start(ctx);
  group = EC_GROUP_new_by_curve_name(iVar1);
  iVar1 = test_ptr("test/ectest.c",0xab4,"group = EC_GROUP_new_by_curve_name(nid)",group);
  if (iVar1 != 0) {
    iVar1 = EC_GROUP_get_degree(group);
    rnd = BN_CTX_get(ctx);
    iVar2 = test_ptr("test/ectest.c",0xabb,"k = BN_CTX_get(ctx)");
    if (iVar2 != 0) {
      iVar2 = EC_GROUP_order_bits(group);
      iVar2 = BN_rand(rnd,iVar2 + -1,0,0);
      iVar2 = test_true("test/ectest.c",0xabd,
                        "BN_rand(k, EC_GROUP_order_bits(group) - 1, BN_RAND_TOP_ONE, BN_RAND_BOTTOM_ANY)"
                        ,iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = BN_clear_bit(rnd,0);
        iVar2 = test_true("test/ectest.c",0xac0,"BN_clear_bit(k, 0)",iVar2 != 0);
        if (iVar2 != 0) {
          r = EC_POINT_new(group);
          iVar2 = test_ptr("test/ectest.c",0xac1,"G2 = EC_POINT_new(group)",r);
          if (iVar2 == 0) {
            local_60 = (uchar *)0x0;
            buf = (uchar *)0x0;
            pEVar8 = (EC_POINT *)0x0;
            r_00 = (EC_POINT *)0x0;
            uVar3 = 0;
            goto LAB_001030d7;
          }
          r_00 = EC_POINT_new(group);
          iVar2 = test_ptr("test/ectest.c",0xac2,"Q1 = EC_POINT_new(group)");
          if (iVar2 != 0) {
            EC_POINT_mul(group,r_00,rnd,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
            iVar2 = test_true("test/ectest.c",0xac4,"EC_POINT_mul(group, Q1, k, NULL, NULL, ctx)");
            if (iVar2 == 0) {
              local_60 = (uchar *)0x0;
              buf = (uchar *)0x0;
              pEVar8 = (EC_POINT *)0x0;
              uVar3 = 0;
              goto LAB_001030d7;
            }
            iVar2 = iVar1 + 0xe;
            if (-1 < iVar1 + 7) {
              iVar2 = iVar1 + 7;
            }
            iVar1 = (iVar2 >> 3) * 2 + 1;
            sVar6 = EC_POINT_point2oct(group,r_00,POINT_CONVERSION_UNCOMPRESSED,(uchar *)0x0,0,ctx);
            iVar2 = test_int_eq("test/ectest.c",0xac6,
                                "EC_POINT_point2oct(group, Q1, POINT_CONVERSION_UNCOMPRESSED, NULL, 0, ctx)"
                                ,"bsize",sVar6 & 0xffffffff,iVar1);
            if (iVar2 != 0) {
              sVar6 = (size_t)iVar1;
              local_60 = (uchar *)CRYPTO_malloc(iVar1,"test/ectest.c",0xac9);
              iVar2 = test_ptr("test/ectest.c",0xac9,"b1 = OPENSSL_malloc(bsize)",local_60);
              if (iVar2 != 0) {
                sVar7 = EC_POINT_point2oct(group,r_00,POINT_CONVERSION_UNCOMPRESSED,local_60,sVar6,
                                           ctx);
                iVar2 = test_int_eq("test/ectest.c",0xaca,
                                    "EC_POINT_point2oct(group, Q1, POINT_CONVERSION_UNCOMPRESSED, b1, bsize, ctx)"
                                    ,"bsize",sVar7 & 0xffffffff,iVar1);
                if (iVar2 == 0) {
                  buf = (uchar *)0x0;
                  pEVar8 = (EC_POINT *)0x0;
                  uVar3 = 0;
                  goto LAB_001030d7;
                }
                pEVar8 = EC_GROUP_get0_generator(group);
                iVar2 = EC_POINT_dbl(group,r,pEVar8,ctx);
                iVar2 = test_true("test/ectest.c",0xace,
                                  "EC_POINT_dbl(group, G2, EC_GROUP_get0_generator(group), ctx)",
                                  iVar2 != 0);
                if (iVar2 != 0) {
                  cofactor = (BIGNUM *)EC_GROUP_get0_cofactor(group);
                  order = (BIGNUM *)EC_GROUP_get0_order(group);
                  iVar2 = EC_GROUP_set_generator(group,r,order,cofactor);
                  iVar2 = test_true("test/ectest.c",0xad0,
                                    "EC_GROUP_set_generator(group, G2, EC_GROUP_get0_order(group), EC_GROUP_get0_cofactor(group))"
                                    ,iVar2 != 0);
                  if (iVar2 != 0) {
                    pEVar8 = EC_POINT_new(group);
                    iVar2 = test_ptr("test/ectest.c",0xad3,"Q2 = EC_POINT_new(group)",pEVar8);
                    if (iVar2 != 0) {
                      BN_rshift1(rnd,rnd);
                      buf = (uchar *)0x0;
                      uVar3 = test_true("test/ectest.c",0xad4,"BN_rshift1(k, k)");
                      if (uVar3 == 0) goto LAB_001030d7;
                      EC_POINT_mul(group,pEVar8,rnd,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
                      iVar2 = test_true("test/ectest.c",0xad6,
                                        "EC_POINT_mul(group, Q2, k, NULL, NULL, ctx)");
                      if (iVar2 != 0) {
                        sVar7 = EC_POINT_point2oct(group,pEVar8,POINT_CONVERSION_UNCOMPRESSED,
                                                   (uchar *)0x0,0,ctx);
                        iVar2 = test_int_eq("test/ectest.c",0xad7,
                                            "EC_POINT_point2oct(group, Q2, POINT_CONVERSION_UNCOMPRESSED, NULL, 0, ctx)"
                                            ,"bsize",sVar7 & 0xffffffff,iVar1);
                        if (iVar2 != 0) {
                          buf = (uchar *)CRYPTO_malloc(iVar1,"test/ectest.c",0xada);
                          iVar2 = test_ptr("test/ectest.c",0xada,"b2 = OPENSSL_malloc(bsize)",buf);
                          if (iVar2 != 0) {
                            sVar7 = EC_POINT_point2oct(group,pEVar8,POINT_CONVERSION_UNCOMPRESSED,
                                                       buf,sVar6,ctx);
                            uVar3 = test_int_eq("test/ectest.c",0xadb,
                                                "EC_POINT_point2oct(group, Q2, POINT_CONVERSION_UNCOMPRESSED, b2, bsize, ctx)"
                                                ,"bsize",sVar7 & 0xffffffff,iVar1);
                            if (uVar3 == 0) goto LAB_001030d7;
                            iVar2 = test_mem_eq("test/ectest.c",0xadf,&_LC187,&_LC186,local_60,sVar6
                                                ,buf,sVar6);
                            if (iVar2 != 0) {
                              iVar1 = do_test_custom_explicit_fromdata(group,ctx,local_60,iVar1);
                              uVar3 = (uint)(iVar1 != 0);
                              goto LAB_001030d7;
                            }
                          }
                          uVar3 = 0;
                          goto LAB_001030d7;
                        }
                      }
                    }
                    buf = (uchar *)0x0;
                    uVar3 = 0;
                    goto LAB_001030d7;
                  }
                }
              }
              buf = (uchar *)0x0;
              pEVar8 = (EC_POINT *)0x0;
              uVar3 = 0;
              goto LAB_001030d7;
            }
          }
          local_60 = (uchar *)0x0;
          buf = (uchar *)0x0;
          pEVar8 = (EC_POINT *)0x0;
          uVar3 = 0;
          goto LAB_001030d7;
        }
      }
    }
  }
  buf = (uchar *)0x0;
  pEVar8 = (EC_POINT *)0x0;
  r_00 = (EC_POINT *)0x0;
  r = (EC_POINT *)0x0;
  local_60 = (uchar *)0x0;
  uVar3 = 0;
LAB_001030d7:
  EC_POINT_free(r_00);
  EC_POINT_free(pEVar8);
  EC_POINT_free(r);
  EC_GROUP_free(group);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  CRYPTO_free(local_60);
  CRYPTO_free(buf);
  return (ulong)uVar3;
}



uint ec_point_hex2point_test_helper
               (EC_GROUP *param_1,EC_POINT *param_2,point_conversion_form_t param_3,BN_CTX *param_4)

{
  uint uVar1;
  int iVar2;
  char *ptr;
  EC_POINT *a;
  EC_POINT *pEVar3;
  
  pEVar3 = (EC_POINT *)0x0;
  if (param_2 == (EC_POINT *)0x0) {
    param_2 = EC_POINT_new(param_1);
    uVar1 = test_ptr("test/ectest.c",0x974,"Pinf = EC_POINT_new(group)",param_2);
    pEVar3 = param_2;
    if (uVar1 != 0) {
      iVar2 = EC_POINT_set_to_infinity(param_1,param_2);
      iVar2 = test_true("test/ectest.c",0x975,"EC_POINT_set_to_infinity(group, Pinf)",iVar2 != 0);
      if (iVar2 != 0) goto LAB_0010363e;
      uVar1 = 0;
    }
    ptr = (char *)0x0;
    a = (EC_POINT *)0x0;
  }
  else {
LAB_0010363e:
    a = (EC_POINT *)0x0;
    ptr = EC_POINT_point2hex(param_1,param_2,param_3,param_4);
    uVar1 = test_ptr("test/ectest.c",0x97a,"hex = EC_POINT_point2hex(group, P, form, bnctx)",ptr);
    if (uVar1 != 0) {
      a = EC_POINT_hex2point(param_1,ptr,(EC_POINT *)0x0,param_4);
      uVar1 = test_ptr("test/ectest.c",0x97b,"Q = EC_POINT_hex2point(group, hex, NULL, bnctx)",a);
      if (uVar1 != 0) {
        iVar2 = EC_POINT_cmp(param_1,a,param_2,param_4);
        uVar1 = test_int_eq("test/ectest.c",0x97c,&_LC4,"EC_POINT_cmp(group, Q, P, bnctx)",0,iVar2);
        if ((uVar1 != 0) && (uVar1 = 1, pEVar3 != (EC_POINT *)0x0)) {
          iVar2 = EC_POINT_is_at_infinity(param_1,a);
          iVar2 = test_true("test/ectest.c",0x986,"EC_POINT_is_at_infinity(group, Q)",iVar2 != 0);
          uVar1 = (uint)(iVar2 != 0);
        }
      }
    }
  }
  EC_POINT_free(pEVar3);
  CRYPTO_free(ptr);
  EC_POINT_free(a);
  return uVar1;
}



uint ec_point_hex2point_test(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BN_CTX *c;
  EC_GROUP *group;
  EC_POINT *src;
  EC_POINT *point;
  
  iVar3 = *(int *)((long)param_1 * 0x10 + curves);
  c = BN_CTX_new();
  iVar1 = test_ptr("test/ectest.c",0x9a0,"bnctx = BN_CTX_new()",c);
  if (iVar1 == 0) {
    uVar2 = 0;
    point = (EC_POINT *)0x0;
    group = (EC_GROUP *)0x0;
  }
  else {
    point = (EC_POINT *)0x0;
    group = EC_GROUP_new_by_curve_name(iVar3);
    uVar2 = test_ptr("test/ectest.c",0x9a1,"group = EC_GROUP_new_by_curve_name(nid)",group);
    if (uVar2 != 0) {
      src = EC_GROUP_get0_generator(group);
      uVar2 = test_ptr("test/ectest.c",0x9a2,"G = EC_GROUP_get0_generator(group)",src);
      if (uVar2 != 0) {
        point = EC_POINT_dup(src,group);
        uVar2 = test_ptr("test/ectest.c",0x9a3,"P = EC_POINT_dup(G, group)",point);
        if (uVar2 != 0) {
          iVar3 = ec_point_hex2point_test_helper(group,point,2,c);
          iVar3 = test_true("test/ectest.c",0x9a6,
                            "ec_point_hex2point_test_helper(group, P, POINT_CONVERSION_COMPRESSED, bnctx)"
                            ,iVar3 != 0);
          if (iVar3 != 0) {
            iVar3 = ec_point_hex2point_test_helper(group,0,2,c);
            iVar3 = test_true("test/ectest.c",0x9a9,
                              "ec_point_hex2point_test_helper(group, NULL, POINT_CONVERSION_COMPRESSED, bnctx)"
                              ,iVar3 != 0);
            if (iVar3 != 0) {
              iVar3 = ec_point_hex2point_test_helper(group,point,4,c);
              iVar3 = test_true("test/ectest.c",0x9ac,
                                "ec_point_hex2point_test_helper(group, P, POINT_CONVERSION_UNCOMPRESSED, bnctx)"
                                ,iVar3 != 0);
              if (iVar3 != 0) {
                iVar3 = ec_point_hex2point_test_helper(group,0,4,c);
                iVar3 = test_true("test/ectest.c",0x9af,
                                  "ec_point_hex2point_test_helper(group, NULL, POINT_CONVERSION_UNCOMPRESSED, bnctx)"
                                  ,iVar3 != 0);
                if (iVar3 != 0) {
                  iVar3 = ec_point_hex2point_test_helper(group,point,6,c);
                  iVar3 = test_true("test/ectest.c",0x9b2,
                                    "ec_point_hex2point_test_helper(group, P, POINT_CONVERSION_HYBRID, bnctx)"
                                    ,iVar3 != 0);
                  if (iVar3 != 0) {
                    iVar3 = ec_point_hex2point_test_helper(group,0,6,c);
                    iVar3 = test_true("test/ectest.c",0x9b5,
                                      "ec_point_hex2point_test_helper(group, NULL, POINT_CONVERSION_HYBRID, bnctx)"
                                      ,iVar3 != 0);
                    uVar2 = (uint)(iVar3 != 0);
                    goto LAB_00103825;
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
LAB_00103825:
  EC_POINT_free(point);
  EC_GROUP_free(group);
  BN_CTX_free(c);
  return uVar2;
}



uint check_named_curve_from_ecparameters(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  BN_CTX *ctx;
  BIGNUM *cofactor;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *a;
  BIGNUM *a_00;
  EC_POINT *src;
  BIGNUM *b;
  EC_GROUP *group;
  EC_POINT *r;
  BIGNUM *pBVar8;
  EC_GROUP *pEVar9;
  size_t sVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  EC_GROUP *local_110;
  undefined8 local_108;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *(int *)((long)param_1 * 0x10 + curves);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  pcVar5 = OBJ_nid2sn(iVar4);
  test_note("Curve %s",pcVar5);
  ctx = BN_CTX_new();
  uVar1 = test_ptr("test/ectest.c",0x733,"bn_ctx = BN_CTX_new()",ctx);
  if (uVar1 == 0) goto LAB_00103ada;
  BN_CTX_start(ctx);
  cofactor = BN_CTX_get(ctx);
  iVar2 = test_ptr("test/ectest.c",0x738,"group_cofactor = BN_CTX_get(bn_ctx)",cofactor);
  if (iVar2 == 0) {
LAB_00103b6c:
    local_108 = 0;
    r = (EC_POINT *)0x0;
    group = (EC_GROUP *)0x0;
    uVar1 = 0;
    local_110 = (EC_GROUP *)0x0;
  }
  else {
    pBVar6 = BN_CTX_get(ctx);
    iVar2 = test_ptr("test/ectest.c",0x739,"other_gen_x = BN_CTX_get(bn_ctx)",pBVar6);
    if (iVar2 == 0) goto LAB_00103b6c;
    pBVar7 = BN_CTX_get(ctx);
    iVar2 = test_ptr("test/ectest.c",0x73a,"other_gen_y = BN_CTX_get(bn_ctx)",pBVar7);
    if (iVar2 == 0) goto LAB_00103b6c;
    a = BN_CTX_get(ctx);
    iVar2 = test_ptr("test/ectest.c",0x73b,"other_order = BN_CTX_get(bn_ctx)",a);
    if (iVar2 == 0) goto LAB_00103b6c;
    a_00 = BN_CTX_get(ctx);
    iVar2 = test_ptr("test/ectest.c",0x73c,"other_cofactor = BN_CTX_get(bn_ctx)",a_00);
    if (iVar2 == 0) goto LAB_00103b6c;
    local_110 = EC_GROUP_new_by_curve_name(iVar4);
    iVar2 = test_ptr("test/ectest.c",0x73e,"group = EC_GROUP_new_by_curve_name(nid)",local_110);
    if (iVar2 == 0) {
      local_108 = 0;
      r = (EC_POINT *)0x0;
      group = (EC_GROUP *)0x0;
      uVar1 = 0;
      goto LAB_00103b87;
    }
    local_108 = EC_GROUP_get_ecparameters(local_110,0);
    iVar2 = test_ptr("test/ectest.c",0x73f,"params = EC_GROUP_get_ecparameters(group, NULL)",
                     local_108);
    if (iVar2 == 0) {
LAB_00103ce4:
      r = (EC_POINT *)0x0;
      group = (EC_GROUP *)0x0;
      uVar1 = 0;
    }
    else {
      src = EC_GROUP_get0_generator(local_110);
      iVar2 = test_ptr("test/ectest.c",0x740,"group_gen = EC_GROUP_get0_generator(group)",src);
      if (iVar2 == 0) goto LAB_00103ce4;
      b = (BIGNUM *)EC_GROUP_get0_order(local_110);
      iVar2 = test_ptr("test/ectest.c",0x741,"group_order = EC_GROUP_get0_order(group)",b);
      if (iVar2 == 0) {
        r = (EC_POINT *)0x0;
        group = (EC_GROUP *)0x0;
        uVar1 = 0;
      }
      else {
        iVar2 = EC_GROUP_get_cofactor(local_110,cofactor,(BN_CTX *)0x0);
        iVar2 = test_true("test/ectest.c",0x742,"EC_GROUP_get_cofactor(group, group_cofactor, NULL)"
                          ,iVar2 != 0);
        if (iVar2 == 0) goto LAB_00103ce4;
        r = (EC_POINT *)0x0;
        group = EC_GROUP_dup(local_110);
        uVar1 = test_ptr("test/ectest.c",0x744,"tmpg = EC_GROUP_dup(group)",group);
        if (uVar1 != 0) {
          r = EC_POINT_dup(src,local_110);
          iVar2 = test_ptr("test/ectest.c",0x745,"other_gen = EC_POINT_dup(group_gen, group)",r);
          if (iVar2 != 0) {
            iVar2 = EC_POINT_add(local_110,r,src,src,(BN_CTX *)0x0);
            uVar1 = test_true("test/ectest.c",0x746,
                              "EC_POINT_add(group, other_gen, group_gen, group_gen, NULL)",
                              iVar2 != 0);
            if (uVar1 == 0) goto LAB_00103b87;
            iVar2 = EC_POINT_get_affine_coordinates(local_110,r,pBVar6,pBVar7,ctx);
            iVar2 = test_true("test/ectest.c",0x747,
                              "EC_POINT_get_affine_coordinates(group, other_gen, other_gen_x, other_gen_y, bn_ctx)"
                              ,iVar2 != 0);
            if (iVar2 != 0) {
              pBVar8 = BN_copy(a,b);
              iVar2 = test_true("test/ectest.c",0x749,"BN_copy(other_order, group_order)",
                                pBVar8 != (BIGNUM *)0x0);
              if (iVar2 != 0) {
                iVar2 = BN_add_word(a,1);
                iVar2 = test_true("test/ectest.c",0x74a,"BN_add_word(other_order, 1)",iVar2 != 0);
                if (iVar2 != 0) {
                  pBVar8 = BN_copy(a_00,cofactor);
                  iVar2 = test_true("test/ectest.c",0x74b,"BN_copy(other_cofactor, group_cofactor)",
                                    pBVar8 != (BIGNUM *)0x0);
                  if (iVar2 != 0) {
                    iVar2 = BN_add_word(a_00,1);
                    iVar2 = test_true("test/ectest.c",0x74c,"BN_add_word(other_cofactor, 1)",
                                      iVar2 != 0);
                    if (iVar2 != 0) {
                      EC_POINT_free(r);
                      r = EC_POINT_new(group);
                      iVar2 = test_ptr("test/ectest.c",0x752,"other_gen = EC_POINT_new(tmpg)",r);
                      if (iVar2 != 0) {
                        iVar2 = EC_POINT_set_affine_coordinates(group,r,pBVar6,pBVar7,ctx);
                        iVar2 = test_true("test/ectest.c",0x753,
                                          "EC_POINT_set_affine_coordinates(tmpg, other_gen, other_gen_x, other_gen_y, bn_ctx)"
                                          ,iVar2 != 0);
                        if (iVar2 != 0) {
                          pEVar9 = (EC_GROUP *)EC_GROUP_new_from_ecparameters(local_108);
                          local_c8._0_8_ = pEVar9;
                          iVar2 = test_ptr("test/ectest.c",0x762,
                                           "tgroup = *g_next++ = EC_GROUP_new_from_ecparameters(params)"
                                           ,pEVar9);
                          if (iVar2 != 0) {
                            iVar2 = EC_GROUP_get_curve_name(pEVar9);
                            iVar3 = test_int_ne("test/ectest.c",0x763,
                                                "(tnid = EC_GROUP_get_curve_name(tgroup))",
                                                "NID_undef",iVar2,0);
                            if (iVar3 != 0) {
                              iVar3 = are_ec_nids_compatible(iVar4,iVar2,extraout_RDX,0);
                              iVar3 = test_true("test/ectest.c",0x769,
                                                "are_ec_nids_compatible(nid, tnid)",iVar3 != 0);
                              if (iVar3 == 0) {
                                pcVar5 = OBJ_nid2sn(iVar2);
                                pcVar12 = OBJ_nid2sn(iVar4);
                                test_info("test/ectest.c",0x76a,"nid = %s, tnid = %s",pcVar12,pcVar5
                                         );
                              }
                              else {
                                iVar3 = EC_GROUP_get_asn1_flag(pEVar9);
                                iVar3 = test_int_eq("test/ectest.c",0x76e,
                                                    "EC_GROUP_get_asn1_flag(tgroup)",
                                                    "OPENSSL_EC_EXPLICIT_CURVE",iVar3,0);
                                if (iVar3 != 0) {
                                  sVar10 = EC_GROUP_set_seed(group,(uchar *)
                                                  "THIS IS NOT A VALID SEED",0x19);
                                  iVar3 = test_int_eq("test/ectest.c",0x775,
                                                                                                            
                                                  "EC_GROUP_set_seed(tmpg, invalid_seed, invalid_seed_len)"
                                                  ,"invalid_seed_len",sVar10 & 0xffffffff,0x19);
                                  if (iVar3 != 0) {
                                    uVar11 = EC_GROUP_get_ecparameters(group,0);
                                    local_88._0_8_ = uVar11;
                                    iVar3 = test_ptr("test/ectest.c",0x777,
                                                                                                          
                                                  "other_params = *p_next++ = EC_GROUP_get_ecparameters(tmpg, NULL)"
                                                  ,uVar11);
                                    if (iVar3 != 0) {
                                      pEVar9 = (EC_GROUP *)EC_GROUP_new_from_ecparameters(uVar11);
                                      local_c8._8_8_ = pEVar9;
                                      iVar3 = test_ptr("test/ectest.c",0x779,
                                                                                                              
                                                  "tgroup = *g_next++ = EC_GROUP_new_from_ecparameters(other_params)"
                                                  ,pEVar9);
                                      if (iVar3 != 0) {
                                        iVar2 = EC_GROUP_get_curve_name(pEVar9);
                                        iVar3 = test_int_ne("test/ectest.c",0x77b,
                                                                                                                        
                                                  "(tnid = EC_GROUP_get_curve_name(tgroup))",
                                                  "NID_undef",iVar2,0);
                                        if (iVar3 != 0) {
                                          iVar3 = are_ec_nids_compatible
                                                            (iVar4,iVar2,extraout_RDX_00,0);
                                          iVar3 = test_true("test/ectest.c",0x77c,
                                                            "are_ec_nids_compatible(nid, tnid)",
                                                            iVar3 != 0);
                                          if (iVar3 != 0) {
                                            iVar3 = EC_GROUP_get_asn1_flag(pEVar9);
                                            iVar3 = test_int_eq("test/ectest.c",0x77d,
                                                                "EC_GROUP_get_asn1_flag(tgroup)",
                                                                "OPENSSL_EC_EXPLICIT_CURVE",iVar3,0)
                                            ;
                                            if (iVar3 != 0) {
                                              sVar10 = EC_GROUP_set_seed(group,(uchar *)0x0,0);
                                              iVar3 = test_int_eq("test/ectest.c",0x787,
                                                                  "EC_GROUP_set_seed(tmpg, NULL, 0)"
                                                                  ,&_LC34,sVar10 & 0xffffffff,1);
                                              if (iVar3 != 0) {
                                                uVar11 = EC_GROUP_get_ecparameters(group,0);
                                                local_88._8_8_ = uVar11;
                                                iVar3 = test_ptr("test/ectest.c",0x788,
                                                                                                                                  
                                                  "other_params = *p_next++ = EC_GROUP_get_ecparameters(tmpg, NULL)"
                                                  ,uVar11);
                                                if (iVar3 != 0) {
                                                  pEVar9 = (EC_GROUP *)
                                                           EC_GROUP_new_from_ecparameters(uVar11);
                                                  local_b8._0_8_ = pEVar9;
                                                  iVar3 = test_ptr("test/ectest.c",0x78a,
                                                                                                                                      
                                                  "tgroup = *g_next++ = EC_GROUP_new_from_ecparameters(other_params)"
                                                  ,pEVar9);
                                                  if (iVar3 != 0) {
                                                    iVar2 = EC_GROUP_get_curve_name(pEVar9);
                                                    iVar3 = test_int_ne("test/ectest.c",0x78c,
                                                                                                                                                
                                                  "(tnid = EC_GROUP_get_curve_name(tgroup))",
                                                  "NID_undef",iVar2,0);
                                                  if (iVar3 != 0) {
                                                    iVar3 = are_ec_nids_compatible
                                                                      (iVar4,iVar2,extraout_RDX_01,0
                                                                      );
                                                    iVar3 = test_true("test/ectest.c",0x78d,
                                                                                                                                            
                                                  "are_ec_nids_compatible(nid, tnid)",iVar3 != 0);
                                                  if (iVar3 != 0) {
                                                    iVar3 = EC_GROUP_get_asn1_flag(pEVar9);
                                                    iVar3 = test_int_eq("test/ectest.c",0x78e,
                                                                                                                                                
                                                  "EC_GROUP_get_asn1_flag(tgroup)",
                                                  "OPENSSL_EC_EXPLICIT_CURVE",iVar3,0);
                                                  if (iVar3 != 0) {
                                                    iVar2 = EC_GROUP_set_generator
                                                                      (group,r,b,cofactor);
                                                    iVar2 = test_true("test/ectest.c",0x799,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(tmpg, other_gen, group_order, group_cofactor)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    uVar11 = EC_GROUP_get_ecparameters(group,0);
                                                    local_78._0_8_ = uVar11;
                                                    iVar2 = test_ptr("test/ectest.c",0x79b,
                                                                                                                                          
                                                  "other_params = *p_next++ = EC_GROUP_get_ecparameters(tmpg, NULL)"
                                                  ,uVar11);
                                                  if (iVar2 != 0) {
                                                    pEVar9 = (EC_GROUP *)
                                                             EC_GROUP_new_from_ecparameters(uVar11);
                                                    local_b8._8_8_ = pEVar9;
                                                    iVar2 = test_ptr("test/ectest.c",0x79d,
                                                                                                                                          
                                                  "tgroup = *g_next++ = EC_GROUP_new_from_ecparameters(other_params)"
                                                  ,pEVar9);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_get_curve_name(pEVar9);
                                                    iVar2 = test_int_eq("test/ectest.c",0x79f,
                                                                                                                                                
                                                  "(tnid = EC_GROUP_get_curve_name(tgroup))",
                                                  "NID_undef",iVar2,0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_set_generator
                                                                      (group,src,a,cofactor);
                                                    iVar2 = test_true("test/ectest.c",0x7a1,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(tmpg, group_gen, other_order, group_cofactor)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    uVar11 = EC_GROUP_get_ecparameters(group,0);
                                                    local_78._8_8_ = uVar11;
                                                    iVar2 = test_ptr("test/ectest.c",0x7a3,
                                                                                                                                          
                                                  "other_params = *p_next++ = EC_GROUP_get_ecparameters(tmpg, NULL)"
                                                  ,uVar11);
                                                  if (iVar2 != 0) {
                                                    pEVar9 = (EC_GROUP *)
                                                             EC_GROUP_new_from_ecparameters(uVar11);
                                                    local_a8._0_8_ = pEVar9;
                                                    iVar2 = test_ptr("test/ectest.c",0x7a5,
                                                                                                                                          
                                                  "tgroup = *g_next++ = EC_GROUP_new_from_ecparameters(other_params)"
                                                  ,pEVar9);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_get_curve_name(pEVar9);
                                                    iVar2 = test_int_eq("test/ectest.c",0x7a7,
                                                                                                                                                
                                                  "(tnid = EC_GROUP_get_curve_name(tgroup))",
                                                  "NID_undef",iVar2,0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_set_generator
                                                                      (group,src,(BIGNUM *)0x0,
                                                                       cofactor);
                                                    iVar2 = test_false("test/ectest.c",0x7a9,
                                                                                                                                              
                                                  "EC_GROUP_set_generator(tmpg, group_gen, NULL, group_cofactor)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_set_generator(group,src,b,a_00)
                                                    ;
                                                    iVar2 = test_true("test/ectest.c",0x7ac,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(tmpg, group_gen, group_order, other_cofactor)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    uVar11 = EC_GROUP_get_ecparameters(group,0);
                                                    local_68._0_8_ = uVar11;
                                                    iVar2 = test_ptr("test/ectest.c",0x7ae,
                                                                                                                                          
                                                  "other_params = *p_next++ = EC_GROUP_get_ecparameters(tmpg, NULL)"
                                                  ,uVar11);
                                                  if (iVar2 != 0) {
                                                    pEVar9 = (EC_GROUP *)
                                                             EC_GROUP_new_from_ecparameters(uVar11);
                                                    local_a8._8_8_ = pEVar9;
                                                    iVar2 = test_ptr("test/ectest.c",0x7b0,
                                                                                                                                          
                                                  "tgroup = *g_next++ = EC_GROUP_new_from_ecparameters(other_params)"
                                                  ,pEVar9);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_get_curve_name(pEVar9);
                                                    iVar3 = test_int_ne("test/ectest.c",0x7b2,
                                                                                                                                                
                                                  "(tnid = EC_GROUP_get_curve_name(tgroup))",
                                                  "NID_undef",iVar2,0);
                                                  if (iVar3 != 0) {
                                                    iVar2 = are_ec_nids_compatible
                                                                      (iVar4,iVar2,extraout_RDX_02,0
                                                                      );
                                                    iVar2 = test_true("test/ectest.c",0x7b3,
                                                                                                                                            
                                                  "are_ec_nids_compatible(nid, tnid)",iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_get_asn1_flag(pEVar9);
                                                    iVar2 = test_int_eq("test/ectest.c",0x7b4,
                                                                                                                                                
                                                  "EC_GROUP_get_asn1_flag(tgroup)",
                                                  "OPENSSL_EC_EXPLICIT_CURVE",iVar2,0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_set_generator
                                                                      (group,src,b,(BIGNUM *)0x0);
                                                    iVar2 = test_true("test/ectest.c",0x7b7,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(tmpg, group_gen, group_order, NULL)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    uVar11 = EC_GROUP_get_ecparameters(group,0);
                                                    local_68._8_8_ = uVar11;
                                                    iVar2 = test_ptr("test/ectest.c",0x7b9,
                                                                                                                                          
                                                  "other_params = *p_next++ = EC_GROUP_get_ecparameters(tmpg, NULL)"
                                                  ,uVar11);
                                                  if (iVar2 != 0) {
                                                    pEVar9 = (EC_GROUP *)
                                                             EC_GROUP_new_from_ecparameters(uVar11);
                                                    local_98._0_8_ = pEVar9;
                                                    iVar2 = test_ptr("test/ectest.c",0x7bb,
                                                                                                                                          
                                                  "tgroup = *g_next++ = EC_GROUP_new_from_ecparameters(other_params)"
                                                  ,pEVar9);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_get_curve_name(pEVar9);
                                                    iVar3 = test_int_ne("test/ectest.c",0x7bd,
                                                                                                                                                
                                                  "(tnid = EC_GROUP_get_curve_name(tgroup))",
                                                  "NID_undef",iVar2,0);
                                                  if (iVar3 != 0) {
                                                    iVar2 = are_ec_nids_compatible
                                                                      (iVar4,iVar2,extraout_RDX_03,0
                                                                      );
                                                    iVar2 = test_true("test/ectest.c",0x7be,
                                                                                                                                            
                                                  "are_ec_nids_compatible(nid, tnid)",iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_get_asn1_flag(pEVar9);
                                                    iVar2 = test_int_eq("test/ectest.c",0x7bf,
                                                                                                                                                
                                                  "EC_GROUP_get_asn1_flag(tgroup)",
                                                  "OPENSSL_EC_EXPLICIT_CURVE",iVar2,0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_set_generator
                                                                      (group,src,b,cofactor);
                                                    iVar2 = test_true("test/ectest.c",0x7c2,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(tmpg, group_gen, group_order, group_cofactor)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    uVar11 = EC_GROUP_get_ecparameters(group,0);
                                                    local_58._0_8_ = uVar11;
                                                    iVar2 = test_ptr("test/ectest.c",0x7c4,
                                                                                                                                          
                                                  "other_params = *p_next++ = EC_GROUP_get_ecparameters(tmpg, NULL)"
                                                  ,uVar11);
                                                  if (iVar2 != 0) {
                                                    pEVar9 = (EC_GROUP *)
                                                             EC_GROUP_new_from_ecparameters(uVar11);
                                                    local_98._8_8_ = pEVar9;
                                                    iVar2 = test_ptr("test/ectest.c",0x7c6,
                                                                                                                                          
                                                  "tgroup = *g_next++ = EC_GROUP_new_from_ecparameters(other_params)"
                                                  ,pEVar9);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_GROUP_get_curve_name(pEVar9);
                                                    iVar3 = test_int_ne("test/ectest.c",0x7c8,
                                                                                                                                                
                                                  "(tnid = EC_GROUP_get_curve_name(tgroup))",
                                                  "NID_undef",iVar2,0);
                                                  if (iVar3 != 0) {
                                                    iVar4 = are_ec_nids_compatible
                                                                      (iVar4,iVar2,extraout_RDX_04,0
                                                                      );
                                                    iVar4 = test_true("test/ectest.c",0x7c9,
                                                                                                                                            
                                                  "are_ec_nids_compatible(nid, tnid)",iVar4 != 0);
                                                  if (iVar4 != 0) {
                                                    iVar4 = EC_GROUP_get_asn1_flag(pEVar9);
                                                    iVar4 = test_int_eq("test/ectest.c",0x7ca,
                                                                                                                                                
                                                  "EC_GROUP_get_asn1_flag(tgroup)",
                                                  "OPENSSL_EC_EXPLICIT_CURVE",iVar4,0);
                                                  uVar1 = (uint)(iVar4 != 0);
                                                  goto LAB_00103b87;
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
                                                  goto LAB_00104314;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                              pcVar5 = OBJ_nid2sn(iVar2);
                                              pcVar12 = OBJ_nid2sn(iVar4);
                                              test_info("test/ectest.c",0x790,"nid = %s, tnid = %s",
                                                        pcVar12,pcVar5);
                                              goto LAB_00104314;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  pcVar5 = OBJ_nid2sn(iVar2);
                                  pcVar12 = OBJ_nid2sn(iVar4);
                                  test_info("test/ectest.c",0x77f,"nid = %s, tnid = %s",pcVar12,
                                            pcVar5);
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
LAB_00104314:
          uVar1 = 0;
        }
      }
    }
  }
LAB_00103b87:
  puVar13 = (undefined8 *)local_c8;
  do {
    pEVar9 = (EC_GROUP *)*puVar13;
    puVar13 = puVar13 + 1;
    EC_GROUP_free(pEVar9);
  } while (puVar13 != (undefined8 *)local_88);
  do {
    uVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    ECPARAMETERS_free(uVar11);
  } while (puVar13 != &local_48);
  ECPARAMETERS_free(local_108);
  EC_POINT_free(r);
  EC_GROUP_free(group);
  EC_GROUP_free(local_110);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
LAB_00103ada:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint check_ec_key_field_public_range_test(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  BIGNUM *r;
  BIGNUM *y;
  EC_KEY *key;
  EC_GROUP *pEVar4;
  BIGNUM *b;
  EC_POINT *pEVar5;
  
  r = BN_new();
  iVar1 = test_ptr("test/ectest.c",0x935,"x = BN_new()",r);
  if (iVar1 == 0) {
    uVar2 = 0;
    key = (EC_KEY *)0x0;
    y = (BIGNUM *)0x0;
    goto LAB_00104957;
  }
  y = BN_new();
  key = (EC_KEY *)0x0;
  uVar2 = test_ptr("test/ectest.c",0x936,"y = BN_new()",y);
  if (uVar2 == 0) goto LAB_00104957;
  key = EC_KEY_new_by_curve_name(*(int *)((long)param_1 * 0x10 + curves));
  iVar1 = test_ptr("test/ectest.c",0x937,"key = EC_KEY_new_by_curve_name(curves[id].nid)",key);
  if (iVar1 != 0) {
    pEVar4 = EC_KEY_get0_group(key);
    iVar1 = test_ptr("test/ectest.c",0x938,"group = EC_KEY_get0_group(key)",pEVar4);
    if (iVar1 != 0) {
      b = (BIGNUM *)EC_GROUP_get0_field(pEVar4);
      iVar1 = test_ptr("test/ectest.c",0x939,"field = EC_GROUP_get0_field(group)",b);
      if (iVar1 != 0) {
        iVar1 = EC_KEY_generate_key(key);
        iVar1 = test_int_gt("test/ectest.c",0x93a,"EC_KEY_generate_key(key)",&_LC4,iVar1,0);
        if (iVar1 != 0) {
          iVar1 = EC_KEY_check_key(key);
          iVar1 = test_int_gt("test/ectest.c",0x93b,"EC_KEY_check_key(key)",&_LC4,iVar1,0);
          if (iVar1 != 0) {
            pEVar5 = EC_KEY_get0_public_key(key);
            iVar1 = test_ptr("test/ectest.c",0x93c,"pub = EC_KEY_get0_public_key(key)",pEVar5);
            if (iVar1 != 0) {
              uVar3 = EC_POINT_get_affine_coordinates(pEVar4,pEVar5,r,y,0);
              iVar1 = test_int_gt("test/ectest.c",0x93d,
                                  "EC_POINT_get_affine_coordinates(group, pub, x, y, NULL)",&_LC4,
                                  uVar3,0);
              if (iVar1 != 0) {
                iVar1 = EC_GROUP_get_field_type(pEVar4);
                if (iVar1 == 0x197) {
                  iVar1 = BN_GF2m_add(r,r,b);
                  iVar1 = test_true("test/ectest.c",0x949,"BN_GF2m_add(x, x, field)",iVar1 != 0);
                }
                else {
                  if (iVar1 != 0x196) {
                    test_error("test/ectest.c",0x953,"Unsupported EC_METHOD field_type");
                    goto LAB_001049e2;
                  }
                  iVar1 = BN_add(r,r,b);
                  iVar1 = test_true("test/ectest.c",0x94f,"BN_add(x, x, field)",iVar1 != 0);
                }
                if (iVar1 != 0) {
                  iVar1 = EC_KEY_set_public_key_affine_coordinates(key,r,y);
                  iVar1 = test_int_le("test/ectest.c",0x956,
                                      "EC_KEY_set_public_key_affine_coordinates(key, x, y)",&_LC4,
                                      iVar1,0);
                  uVar2 = (uint)(iVar1 != 0);
                  goto LAB_00104957;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001049e2:
  uVar2 = 0;
LAB_00104957:
  BN_free(r);
  BN_free(y);
  EC_KEY_free(key);
  return uVar2;
}



uint check_named_curve_lookup_test(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BN_CTX *ctx;
  EC_GROUP *group;
  undefined8 uVar4;
  EC_GROUP *group_00;
  undefined8 local_40;
  
  iVar3 = *(int *)((long)param_1 * 0x10 + curves);
  ctx = BN_CTX_new();
  iVar1 = test_ptr("test/ectest.c",0x6a7,"ctx = BN_CTX_new()",ctx);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar4 = 0;
    group_00 = (EC_GROUP *)0x0;
    group = (EC_GROUP *)0x0;
    local_40 = 0;
  }
  else {
    group = EC_GROUP_new_by_curve_name(iVar3);
    iVar1 = test_ptr("test/ectest.c",0x6a8,"g = EC_GROUP_new_by_curve_name(nid)",group);
    if (iVar1 == 0) {
      local_40 = 0;
      uVar4 = 0;
      group_00 = (EC_GROUP *)0x0;
      uVar2 = 0;
    }
    else {
      uVar4 = EC_GROUP_get_ecparameters(group,0);
      uVar2 = test_ptr("test/ectest.c",0x6a9,"p = EC_GROUP_get_ecparameters(g, NULL)",uVar4);
      if (uVar2 != 0) {
        EC_GROUP_free(group);
        group = (EC_GROUP *)EC_GROUP_new_from_ecparameters(uVar4);
        uVar2 = test_ptr("test/ectest.c",0x6ae,"g = EC_GROUP_new_from_ecparameters(p)",group);
        if (uVar2 != 0) {
          iVar1 = EC_GROUP_check_named_curve(group,0,0);
          uVar2 = test_int_gt("test/ectest.c",0x6b1,"rv = EC_GROUP_check_named_curve(g, 0, NULL)",
                              &_LC4,iVar1,0);
          if (uVar2 != 0) {
            if (iVar3 == iVar1) {
              local_40 = 0;
              group_00 = (EC_GROUP *)0x0;
              uVar2 = 1;
            }
            else {
              group_00 = EC_GROUP_new_by_curve_name(iVar1);
              uVar2 = test_ptr("test/ectest.c",0x6bd,"ga = EC_GROUP_new_by_curve_name(rv)",group_00)
              ;
              local_40 = 0;
              if (uVar2 != 0) {
                local_40 = EC_GROUP_get_ecparameters(group_00,0);
                uVar2 = test_ptr("test/ectest.c",0x6be,"pa = EC_GROUP_get_ecparameters(ga, NULL)",
                                 local_40);
                if (uVar2 != 0) {
                  EC_GROUP_free(group_00);
                  group_00 = (EC_GROUP *)EC_GROUP_new_from_ecparameters(local_40);
                  uVar2 = test_ptr("test/ectest.c",0x6c3,"ga = EC_GROUP_new_from_ecparameters(pa)",
                                   group_00);
                  if (uVar2 != 0) {
                    iVar3 = EC_GROUP_cmp(group,group_00,ctx);
                    iVar3 = test_int_eq("test/ectest.c",0x6c4,"EC_GROUP_cmp(g, ga, ctx)",&_LC4,iVar3
                                        ,0);
                    uVar2 = (uint)(iVar3 != 0);
                  }
                }
              }
            }
            goto LAB_00104c52;
          }
        }
      }
      local_40 = 0;
      group_00 = (EC_GROUP *)0x0;
    }
  }
LAB_00104c52:
  EC_GROUP_free(group);
  EC_GROUP_free(group_00);
  ECPARAMETERS_free(uVar4);
  ECPARAMETERS_free(local_40);
  BN_CTX_free(ctx);
  return uVar2;
}



uint check_named_curve_test(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  BN_CTX *c;
  EC_GROUP *src;
  EC_GROUP *group;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  EC_POINT *src_00;
  BIGNUM *a_02;
  size_t sVar5;
  BIGNUM *pBVar6;
  long lVar7;
  size_t sVar8;
  undefined *puVar9;
  undefined8 uVar10;
  BIGNUM *local_a0;
  BIGNUM *local_98;
  BIGNUM *local_90;
  BIGNUM *local_88;
  BIGNUM *local_80;
  BIGNUM *local_78;
  EC_POINT *local_68;
  
  iVar4 = *(int *)((long)param_1 * 0x10 + curves);
  c = BN_CTX_new();
  iVar1 = test_ptr("test/ectest.c",0x5eb,"bn_ctx = BN_CTX_new()",c);
  if (iVar1 == 0) {
    local_78 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    src = (EC_GROUP *)0x0;
    local_98 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    group = (EC_GROUP *)0x0;
    local_88 = (BIGNUM *)0x0;
    local_90 = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
    local_a0 = (BIGNUM *)0x0;
    local_68 = (EC_POINT *)0x0;
    uVar2 = 0;
    goto LAB_00104f33;
  }
  src = EC_GROUP_new_by_curve_name(iVar4);
  iVar1 = test_ptr("test/ectest.c",0x5ec,"group = EC_GROUP_new_by_curve_name(nid)",src);
  if (iVar1 == 0) {
    local_78 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_98 = (BIGNUM *)0x0;
    group = (EC_GROUP *)0x0;
    local_88 = (BIGNUM *)0x0;
    local_90 = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
    local_a0 = (BIGNUM *)0x0;
    local_68 = (EC_POINT *)0x0;
    uVar2 = 0;
    goto LAB_00104f33;
  }
  group = EC_GROUP_dup(src);
  iVar1 = test_ptr("test/ectest.c",0x5ed,"gtest = EC_GROUP_dup(group)",group);
  if (iVar1 == 0) {
    local_78 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_98 = (BIGNUM *)0x0;
    local_88 = (BIGNUM *)0x0;
    local_90 = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
    local_a0 = (BIGNUM *)0x0;
    local_68 = (EC_POINT *)0x0;
    uVar2 = 0;
    goto LAB_00104f33;
  }
  a = BN_new();
  iVar1 = test_ptr("test/ectest.c",0x5ee,"group_p = BN_new()",a);
  if (iVar1 == 0) {
    local_78 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    local_98 = (BIGNUM *)0x0;
    local_88 = (BIGNUM *)0x0;
    local_90 = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
    local_a0 = (BIGNUM *)0x0;
    local_68 = (EC_POINT *)0x0;
    uVar2 = 0;
    goto LAB_00104f33;
  }
  a_00 = BN_new();
  iVar1 = test_ptr("test/ectest.c",0x5ef,"group_a = BN_new()",a_00);
  if (iVar1 == 0) {
    local_78 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    local_98 = (BIGNUM *)0x0;
    local_88 = (BIGNUM *)0x0;
    local_90 = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
    local_a0 = (BIGNUM *)0x0;
    local_68 = (EC_POINT *)0x0;
    uVar2 = 0;
    goto LAB_00104f33;
  }
  a_01 = BN_new();
  iVar1 = test_ptr("test/ectest.c",0x5f0,"group_b = BN_new()",a_01);
  if (iVar1 == 0) {
    local_78 = (BIGNUM *)0x0;
    local_98 = (BIGNUM *)0x0;
    local_88 = (BIGNUM *)0x0;
    local_90 = (BIGNUM *)0x0;
    local_80 = (BIGNUM *)0x0;
    local_a0 = (BIGNUM *)0x0;
    local_68 = (EC_POINT *)0x0;
    uVar2 = 0;
    goto LAB_00104f33;
  }
  local_88 = BN_new();
  iVar1 = test_ptr("test/ectest.c",0x5f1,"group_cofactor = BN_new()",local_88);
  if (iVar1 == 0) goto LAB_001051f6;
  src_00 = EC_GROUP_get0_generator(src);
  uVar2 = test_ptr("test/ectest.c",0x5f2,"group_gen = EC_GROUP_get0_generator(group)",src_00);
  if (uVar2 != 0) {
    a_02 = (BIGNUM *)EC_GROUP_get0_order(src);
    uVar2 = test_ptr("test/ectest.c",0x5f3,"group_order = EC_GROUP_get0_order(group)",a_02);
    if (uVar2 != 0) {
      iVar1 = EC_GROUP_get_cofactor(src,local_88,(BN_CTX *)0x0);
      iVar1 = test_true("test/ectest.c",0x5f4,"EC_GROUP_get_cofactor(group, group_cofactor, NULL)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = EC_GROUP_get_curve(src,a,a_00,a_01);
        iVar1 = test_true("test/ectest.c",0x5f5,
                          "EC_GROUP_get_curve(group, group_p, group_a, group_b, NULL)",iVar1 != 0);
        if (iVar1 != 0) {
          local_68 = EC_POINT_dup(src_00,src);
          uVar2 = test_ptr("test/ectest.c",0x5f6,"other_gen = EC_POINT_dup(group_gen, group)",
                           local_68);
          if (uVar2 != 0) {
            iVar1 = EC_POINT_add(src,local_68,src_00,src_00,(BN_CTX *)0x0);
            uVar2 = test_true("test/ectest.c",0x5f7,
                              "EC_POINT_add(group, other_gen, group_gen, group_gen, NULL)",
                              iVar1 != 0);
            if (uVar2 != 0) {
              local_78 = BN_dup(a_02);
              uVar2 = test_ptr("test/ectest.c",0x5f8,"other_order = BN_dup(group_order)",local_78);
              if (uVar2 != 0) {
                iVar1 = BN_add_word(local_78,1);
                uVar2 = test_true("test/ectest.c",0x5f9,"BN_add_word(other_order, 1)",iVar1 != 0);
                if (uVar2 != 0) {
                  local_80 = BN_dup(a_00);
                  uVar2 = test_ptr("test/ectest.c",0x5fa,"other_a = BN_dup(group_a)");
                  if (uVar2 != 0) {
                    BN_add_word(local_80,1);
                    uVar2 = test_true("test/ectest.c",0x5fb,"BN_add_word(other_a, 1)");
                    if (uVar2 != 0) {
                      local_90 = BN_dup(a_01);
                      uVar2 = test_ptr("test/ectest.c",0x5fc,"other_b = BN_dup(group_b)",local_90);
                      if (uVar2 != 0) {
                        iVar1 = BN_add_word(local_90,1);
                        uVar2 = test_true("test/ectest.c",0x5fd,"BN_add_word(other_b, 1)",iVar1 != 0
                                         );
                        if (uVar2 != 0) {
                          local_98 = BN_dup(local_88);
                          uVar2 = test_ptr("test/ectest.c",0x5fe,
                                           "other_cofactor = BN_dup(group_cofactor)",local_98);
                          local_a0 = (BIGNUM *)0x0;
                          if (uVar2 == 0) goto LAB_00104f33;
                          iVar1 = BN_add_word(local_98,1);
                          uVar2 = test_true("test/ectest.c",0x5ff,"BN_add_word(other_cofactor, 1)",
                                            iVar1 != 0);
                          local_a0 = (BIGNUM *)0x0;
                          if (uVar2 == 0) goto LAB_00104f33;
                          sVar5 = EC_GROUP_get_seed_len(src);
                          iVar1 = EC_GROUP_get_field_type(src);
                          if (iVar1 == 0x197) {
                            local_a0 = BN_dup(a);
                            uVar2 = test_ptr("test/ectest.c",0x606,"other_p = BN_dup(group_p)",
                                             local_a0);
                            if (uVar2 == 0) goto LAB_00104f33;
                            iVar1 = BN_lshift1(local_a0,local_a0);
                            iVar1 = test_true("test/ectest.c",0x607,"BN_lshift1(other_p, other_p)",
                                              iVar1 != 0);
                            if (iVar1 == 0) {
                              uVar2 = 0;
                              goto LAB_00104f33;
                            }
                          }
                          else {
                            local_a0 = BN_dup(a);
                            uVar2 = test_ptr("test/ectest.c",0x60a,"other_p = BN_dup(group_p)",
                                             local_a0);
                            if (uVar2 == 0) goto LAB_00104f33;
                            pBVar6 = BN_get0_nist_prime_192();
                            iVar1 = BN_ucmp(pBVar6,local_a0);
                            if (iVar1 == 0) {
                              pBVar6 = BN_get0_nist_prime_256();
                            }
                            else {
                              pBVar6 = BN_get0_nist_prime_192();
                            }
                            pBVar6 = BN_copy(local_a0,pBVar6);
                            uVar2 = test_ptr("test/ectest.c",0x611,
                                             "BN_copy(other_p, BN_ucmp(BN_get0_nist_prime_192(), other_p) == 0 ? BN_get0_nist_prime_256() : BN_get0_nist_prime_192())"
                                             ,pBVar6);
                            if (uVar2 == 0) goto LAB_00104f33;
                          }
                          uVar3 = EC_GROUP_check_named_curve(src,0,0);
                          iVar1 = test_int_eq("test/ectest.c",0x619,
                                              "EC_GROUP_check_named_curve(group, 0, NULL)",&_LC277,
                                              uVar3);
                          if (iVar1 != 0) {
                            lVar7 = EC_curve_nid2nist(iVar4);
                            iVar1 = 0;
                            if (lVar7 != 0) {
                              iVar1 = iVar4;
                            }
                            uVar3 = EC_GROUP_check_named_curve(src,1,0);
                            iVar1 = test_int_eq("test/ectest.c",0x61b,
                                                "EC_GROUP_check_named_curve(group, 1, NULL)",
                                                "EC_curve_nid2nist(nid) != NULL ? nid : NID_undef",
                                                uVar3,iVar1);
                            if (iVar1 != 0) {
                              EC_GROUP_set_curve_name(src,iVar4 + 1);
                              ERR_set_mark();
                              uVar3 = EC_GROUP_check_named_curve(src,0,0);
                              iVar1 = test_int_le("test/ectest.c",0x622,
                                                  "EC_GROUP_check_named_curve(group, 0, NULL)",&_LC4
                                                  ,uVar3,0);
                              if (iVar1 != 0) {
                                ERR_pop_to_mark();
                                EC_GROUP_set_curve_name(src,iVar4);
                                uVar3 = EC_GROUP_check_named_curve(src,0,0);
                                iVar1 = test_int_eq("test/ectest.c",0x628,
                                                    "EC_GROUP_check_named_curve(group, 0, NULL)",
                                                    &_LC277,uVar3,iVar4);
                                if (iVar1 != 0) {
                                  sVar8 = EC_GROUP_set_seed(src,(uchar *)"THIS IS NOT A VALID SEED",
                                                            0x19);
                                  iVar1 = test_int_eq("test/ectest.c",0x62b,
                                                                                                            
                                                  "EC_GROUP_set_seed(group, invalid_seed, invalid_seed_len)"
                                                  ,"invalid_seed_len",sVar8 & 0xffffffff,0x19);
                                  if (iVar1 != 0) {
                                    if (sVar5 == 0) {
                                      uVar3 = EC_GROUP_check_named_curve(src,0,0);
                                      uVar10 = 0x63b;
                                      puVar9 = &_LC277;
                                      iVar1 = iVar4;
                                    }
                                    else {
                                      uVar3 = EC_GROUP_check_named_curve(src,0,0);
                                      uVar10 = 0x634;
                                      puVar9 = &_LC4;
                                      iVar1 = 0;
                                    }
                                    iVar1 = test_int_eq("test/ectest.c",uVar10,
                                                        "EC_GROUP_check_named_curve(group, 0, NULL)"
                                                        ,puVar9,uVar3,iVar1);
                                    if (iVar1 != 0) {
                                      sVar5 = EC_GROUP_set_seed(src,(uchar *)0x0,0);
                                      iVar1 = test_int_eq("test/ectest.c",0x63f,
                                                          "EC_GROUP_set_seed(group, NULL, 0)",&_LC34
                                                          ,sVar5 & 0xffffffff,1);
                                      if (iVar1 != 0) {
                                        uVar3 = EC_GROUP_check_named_curve(src,0,0);
                                        iVar1 = test_int_eq("test/ectest.c",0x640,
                                                                                                                        
                                                  "EC_GROUP_check_named_curve(group, 0, NULL)",
                                                  &_LC277,uVar3,iVar4);
                                        if (iVar1 != 0) {
                                          uVar3 = EC_GROUP_check_named_curve(group,0,0);
                                          iVar1 = test_int_eq("test/ectest.c",0x644,
                                                                                                                            
                                                  "EC_GROUP_check_named_curve(gtest, 0, NULL)",
                                                  &_LC277,uVar3,iVar4);
                                          if (iVar1 != 0) {
                                            iVar1 = EC_GROUP_set_generator
                                                              (group,local_68,a_02,local_88);
                                            iVar1 = test_true("test/ectest.c",0x648,
                                                                                                                            
                                                  "EC_GROUP_set_generator(gtest, other_gen, group_order, group_cofactor)"
                                                  ,iVar1 != 0);
                                            if (iVar1 != 0) {
                                              uVar3 = EC_GROUP_check_named_curve(group,0,0);
                                              iVar1 = test_int_eq("test/ectest.c",0x64a,
                                                                                                                                    
                                                  "EC_GROUP_check_named_curve(gtest, 0, NULL)",&_LC4
                                                  ,uVar3,0);
                                              if (iVar1 != 0) {
                                                iVar1 = EC_GROUP_set_generator
                                                                  (group,src_00,local_78,local_88);
                                                iVar1 = test_true("test/ectest.c",0x64b,
                                                                                                                                    
                                                  "EC_GROUP_set_generator(gtest, group_gen, other_order, group_cofactor)"
                                                  ,iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  uVar3 = EC_GROUP_check_named_curve(group,0,0);
                                                  iVar1 = test_int_eq("test/ectest.c",0x64d,
                                                                                                                                            
                                                  "EC_GROUP_check_named_curve(gtest, 0, NULL)",&_LC4
                                                  ,uVar3,0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,src_00,(BIGNUM *)0x0,
                                                                       local_88);
                                                    iVar1 = test_false("test/ectest.c",0x64f,
                                                                                                                                              
                                                  "EC_GROUP_set_generator(gtest, group_gen, NULL, group_cofactor)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,src_00,a_02,local_98);
                                                    iVar1 = test_true("test/ectest.c",0x651,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(gtest, group_gen, group_order, other_cofactor)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EC_GROUP_check_named_curve(group,0,0);
                                                    iVar1 = test_int_eq("test/ectest.c",0x653,
                                                                                                                                                
                                                  "EC_GROUP_check_named_curve(gtest, 0, NULL)",&_LC4
                                                  ,uVar3,0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,src_00,a_02,
                                                                       (BIGNUM *)0x0);
                                                    iVar1 = test_true("test/ectest.c",0x655,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(gtest, group_gen, group_order, NULL)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EC_GROUP_check_named_curve(group,0,0);
                                                    iVar1 = test_int_eq("test/ectest.c",0x657,
                                                                                                                                                
                                                  "EC_GROUP_check_named_curve(gtest, 0, NULL)",
                                                  &_LC277,uVar3,iVar4);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,src_00,a_02,local_88);
                                                    iVar1 = test_true("test/ectest.c",0x659,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(gtest, group_gen, group_order, group_cofactor)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EC_GROUP_check_named_curve(group,0,0);
                                                    iVar1 = test_int_eq("test/ectest.c",0x65b,
                                                                                                                                                
                                                  "EC_GROUP_check_named_curve(gtest, 0, NULL)",
                                                  &_LC277,uVar3,iVar4);
                                                  if (iVar1 != 0) {
                                                    ERR_set_mark();
                                                    iVar1 = EC_GROUP_set_curve(group,local_a0,a_00,
                                                                               a_01,0);
                                                    if (iVar1 == 0) {
                                                      ERR_pop_to_mark();
                                                      ERR_set_mark();
                                                    }
                                                    else {
                                                      uVar3 = EC_GROUP_check_named_curve(group,0,0);
                                                      iVar1 = test_int_le("test/ectest.c",0x667,
                                                                                                                                                    
                                                  "EC_GROUP_check_named_curve(gtest, 0, NULL)",&_LC4
                                                  ,uVar3,0);
                                                  if (iVar1 == 0) goto LAB_00105685;
                                                  }
                                                  iVar1 = EC_GROUP_set_curve(group,a,local_80,a_01,0
                                                                            );
                                                  if (iVar1 == 0) {
                                                    ERR_pop_to_mark();
                                                    ERR_set_mark();
                                                  }
                                                  else {
                                                    uVar3 = EC_GROUP_check_named_curve(group,0,0);
                                                    iVar1 = test_int_le("test/ectest.c",0x66f,
                                                                                                                                                
                                                  "EC_GROUP_check_named_curve(gtest, 0, NULL)",&_LC4
                                                  ,uVar3,0);
                                                  if (iVar1 == 0) goto LAB_00105685;
                                                  }
                                                  iVar1 = EC_GROUP_set_curve(group,a,a_00,local_90,0
                                                                            );
                                                  if (iVar1 == 0) {
                                                    ERR_pop_to_mark();
                                                    ERR_set_mark();
                                                  }
                                                  else {
                                                    uVar3 = EC_GROUP_check_named_curve(group,0,0);
                                                    iVar1 = test_int_le("test/ectest.c",0x677,
                                                                                                                                                
                                                  "EC_GROUP_check_named_curve(gtest, 0, NULL)",&_LC4
                                                  ,uVar3,0);
                                                  if (iVar1 == 0) goto LAB_00105685;
                                                  }
                                                  ERR_pop_to_mark();
                                                  iVar1 = EC_GROUP_set_curve(group,a,a_00,a_01,0);
                                                  iVar1 = test_true("test/ectest.c",0x681,
                                                                                                                                        
                                                  "EC_GROUP_set_curve(gtest, group_p, group_a, group_b, NULL)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = EC_GROUP_check_named_curve(group,0,0);
                                                    iVar4 = test_int_eq("test/ectest.c",0x682,
                                                                                                                                                
                                                  "EC_GROUP_check_named_curve(gtest, 0, NULL)",
                                                  &_LC277,uVar3,iVar4);
                                                  uVar2 = (uint)(iVar4 != 0);
                                                  goto LAB_00104f33;
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
LAB_00105685:
                          uVar2 = 0;
                          goto LAB_00104f33;
                        }
                      }
                      local_98 = (BIGNUM *)0x0;
                      local_a0 = (BIGNUM *)0x0;
                      goto LAB_00104f33;
                    }
                  }
                  local_98 = (BIGNUM *)0x0;
                  local_90 = (BIGNUM *)0x0;
                  local_a0 = (BIGNUM *)0x0;
                  goto LAB_00104f33;
                }
              }
              local_98 = (BIGNUM *)0x0;
              local_90 = (BIGNUM *)0x0;
              local_80 = (BIGNUM *)0x0;
              local_a0 = (BIGNUM *)0x0;
              goto LAB_00104f33;
            }
          }
          local_78 = (BIGNUM *)0x0;
          local_98 = (BIGNUM *)0x0;
          local_90 = (BIGNUM *)0x0;
          local_80 = (BIGNUM *)0x0;
          local_a0 = (BIGNUM *)0x0;
          goto LAB_00104f33;
        }
      }
LAB_001051f6:
      local_78 = (BIGNUM *)0x0;
      uVar2 = 0;
      local_98 = (BIGNUM *)0x0;
      local_90 = (BIGNUM *)0x0;
      local_80 = (BIGNUM *)0x0;
      local_a0 = (BIGNUM *)0x0;
      local_68 = (EC_POINT *)0x0;
      goto LAB_00104f33;
    }
  }
  local_78 = (BIGNUM *)0x0;
  local_98 = (BIGNUM *)0x0;
  local_90 = (BIGNUM *)0x0;
  local_80 = (BIGNUM *)0x0;
  local_a0 = (BIGNUM *)0x0;
  local_68 = (EC_POINT *)0x0;
LAB_00104f33:
  BN_free(a);
  BN_free(local_a0);
  BN_free(a_00);
  BN_free(local_80);
  BN_free(a_01);
  BN_free(local_90);
  BN_free(local_88);
  BN_free(local_98);
  BN_free(local_78);
  EC_POINT_free(local_68);
  EC_GROUP_free(group);
  EC_GROUP_free(src);
  BN_CTX_free(c);
  return uVar2;
}



bool group_field_test(void)

{
  int iVar1;
  int iVar2;
  EC_GROUP *group;
  BIGNUM *pBVar3;
  EC_GROUP *group_00;
  long in_FS_OFFSET;
  BIGNUM *local_40;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (BIGNUM *)0x0;
  local_38 = (BIGNUM *)0x0;
  BN_hex2bn(&local_40,
            "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
           );
  BN_hex2bn(&local_38,"0800000000000000000000000000000000000000C9");
  group = EC_GROUP_new_by_curve_name(0x2cc);
  pBVar3 = (BIGNUM *)EC_GROUP_get0_field(group);
  iVar1 = BN_cmp(local_40,pBVar3);
  group_00 = EC_GROUP_new_by_curve_name(0x2d3);
  pBVar3 = (BIGNUM *)EC_GROUP_get0_field(group_00);
  iVar2 = BN_cmp(local_38,pBVar3);
  EC_GROUP_free(group);
  EC_GROUP_free(group_00);
  BN_free(local_40);
  BN_free(local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2 == 0 && iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 group_order_tests(EC_GROUP *param_1)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *r;
  BIGNUM *order;
  BN_CTX *ctx;
  EC_POINT *src;
  EC_POINT *dst;
  BIGNUM *b;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  EC_POINT *local_138;
  EC_POINT *local_130;
  EC_POINT *local_128;
  ulong local_b8;
  BIGNUM *local_a8;
  BIGNUM *pBStack_a0;
  BIGNUM *local_98;
  BIGNUM *pBStack_90;
  BIGNUM *local_88;
  BIGNUM *pBStack_80;
  EC_POINT *local_78;
  EC_POINT *pEStack_70;
  EC_POINT *local_68;
  EC_POINT *pEStack_60;
  EC_POINT *local_58;
  EC_POINT *pEStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a = BN_new();
  iVar1 = test_ptr("test/ectest.c",0x2f,"n1 = BN_new()",a);
  if (iVar1 == 0) {
    ctx = (BN_CTX *)0x0;
    dst = (EC_POINT *)0x0;
    order = (BIGNUM *)0x0;
    r = (BIGNUM *)0x0;
    local_130 = (EC_POINT *)0x0;
    local_128 = (EC_POINT *)0x0;
    local_138 = (EC_POINT *)0x0;
  }
  else {
    r = BN_new();
    iVar1 = test_ptr("test/ectest.c",0x30,"n2 = BN_new()",r);
    if (iVar1 == 0) {
      local_130 = (EC_POINT *)0x0;
      ctx = (BN_CTX *)0x0;
      dst = (EC_POINT *)0x0;
      order = (BIGNUM *)0x0;
      local_128 = (EC_POINT *)0x0;
      local_138 = (EC_POINT *)0x0;
    }
    else {
      order = BN_new();
      iVar1 = test_ptr("test/ectest.c",0x31,"order = BN_new()",order);
      if (iVar1 == 0) {
        local_130 = (EC_POINT *)0x0;
        ctx = (BN_CTX *)0x0;
        dst = (EC_POINT *)0x0;
        local_128 = (EC_POINT *)0x0;
        local_138 = (EC_POINT *)0x0;
      }
      else {
        ctx = BN_CTX_new();
        iVar1 = test_ptr("test/ectest.c",0x32,"ctx = BN_CTX_new()",ctx);
        if (iVar1 != 0) {
          src = EC_GROUP_get0_generator(param_1);
          iVar1 = test_ptr("test/ectest.c",0x33,"G = EC_GROUP_get0_generator(group)",src);
          if (iVar1 != 0) {
            dst = EC_POINT_new(param_1);
            iVar1 = test_ptr("test/ectest.c",0x34,"P = EC_POINT_new(group)",dst);
            if (iVar1 == 0) {
              local_130 = (EC_POINT *)0x0;
              local_128 = (EC_POINT *)0x0;
              local_138 = (EC_POINT *)0x0;
            }
            else {
              local_138 = EC_POINT_new(param_1);
              iVar1 = test_ptr("test/ectest.c",0x35,"Q = EC_POINT_new(group)",local_138);
              if (iVar1 == 0) {
                local_130 = (EC_POINT *)0x0;
                local_128 = (EC_POINT *)0x0;
              }
              else {
                local_128 = EC_POINT_new(param_1);
                iVar1 = test_ptr("test/ectest.c",0x36,"R = EC_POINT_new(group)",local_128);
                local_130 = (EC_POINT *)0x0;
                if (iVar1 != 0) {
                  local_130 = EC_POINT_new(param_1);
                  iVar1 = test_ptr("test/ectest.c",0x37,"S = EC_POINT_new(group)",local_130);
                  if (iVar1 != 0) {
                    EC_GROUP_get_order(param_1,order,ctx);
                    iVar1 = test_true("test/ectest.c",0x3a,"EC_GROUP_get_order(group, order, ctx)");
                    if (iVar1 != 0) {
                      iVar1 = EC_POINT_mul(param_1,local_138,order,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx
                                          );
                      iVar1 = test_true("test/ectest.c",0x3b,
                                        "EC_POINT_mul(group, Q, order, NULL, NULL, ctx)",iVar1 != 0)
                      ;
                      if (iVar1 != 0) {
                        iVar1 = EC_POINT_is_at_infinity(param_1,local_138);
                        iVar1 = test_true("test/ectest.c",0x3c,"EC_POINT_is_at_infinity(group, Q)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          EC_GROUP_precompute_mult(param_1,ctx);
                          iVar1 = test_true("test/ectest.c",0x3e,
                                            "EC_GROUP_precompute_mult(group, ctx)");
                          if (iVar1 != 0) {
                            iVar1 = EC_POINT_mul(param_1,local_138,order,(EC_POINT *)0x0,
                                                 (BIGNUM *)0x0,ctx);
                            iVar1 = test_true("test/ectest.c",0x40,
                                              "EC_POINT_mul(group, Q, order, NULL, NULL, ctx)",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = EC_POINT_is_at_infinity(param_1,local_138);
                              iVar1 = test_true("test/ectest.c",0x41,
                                                "EC_POINT_is_at_infinity(group, Q)",iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = EC_POINT_copy(dst,src);
                                iVar1 = test_true("test/ectest.c",0x42,"EC_POINT_copy(P, G)",
                                                  iVar1 != 0);
                                if (iVar1 != 0) {
                                  BN_set_word(a,1);
                                  iVar1 = test_true("test/ectest.c",0x43,"BN_one(n1)");
                                  if (iVar1 != 0) {
                                    iVar1 = EC_POINT_mul(param_1,local_138,a,(EC_POINT *)0x0,
                                                         (BIGNUM *)0x0,ctx);
                                    iVar1 = test_true("test/ectest.c",0x44,
                                                      "EC_POINT_mul(group, Q, n1, NULL, NULL, ctx)",
                                                      iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = EC_POINT_cmp(param_1,local_138,dst,ctx);
                                      iVar1 = test_int_eq("test/ectest.c",0x45,&_LC4,
                                                          "EC_POINT_cmp(group, Q, P, ctx)",0,iVar1);
                                      if (iVar1 != 0) {
                                        BN_sub(a,order,a);
                                        iVar1 = test_true("test/ectest.c",0x46,
                                                          "BN_sub(n1, order, n1)");
                                        if (iVar1 != 0) {
                                          iVar1 = EC_POINT_mul(param_1,local_138,a,(EC_POINT *)0x0,
                                                               (BIGNUM *)0x0,ctx);
                                          iVar1 = test_true("test/ectest.c",0x47,
                                                                                                                        
                                                  "EC_POINT_mul(group, Q, n1, NULL, NULL, ctx)",
                                                  iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = EC_POINT_invert(param_1,local_138,ctx);
                                            iVar1 = test_true("test/ectest.c",0x48,
                                                              "EC_POINT_invert(group, Q, ctx)",
                                                              iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = EC_POINT_cmp(param_1,local_138,dst,ctx);
                                              iVar1 = test_int_eq("test/ectest.c",0x49,&_LC4,
                                                                  "EC_POINT_cmp(group, Q, P, ctx)",0
                                                                  ,iVar1);
                                              if (iVar1 != 0) {
                                                local_b8 = 1;
                                                while( true ) {
                                                  BN_set_word(a,local_b8);
                                                  iVar1 = test_true("test/ectest.c",0x52,
                                                                    "BN_set_word(n1, i)");
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_mul(param_1,dst,a,(EC_POINT *)0x0
                                                                       ,(BIGNUM *)0x0,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x57,
                                                                                                                                        
                                                  "EC_POINT_mul(group, P, n1, NULL, NULL, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  if (local_b8 == 1) {
                                                    iVar1 = EC_POINT_cmp(param_1,dst,src,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x58,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(group, P, G, ctx)",0,iVar1);
                                                  if (iVar1 == 0) goto LAB_00106bdd;
                                                  }
                                                  iVar1 = BN_set_word(a,1);
                                                  iVar1 = test_true("test/ectest.c",0x59,
                                                                    "BN_one(n1)",iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = BN_sub(a,a,order);
                                                  iVar1 = test_true("test/ectest.c",0x5b,
                                                                    "BN_sub(n1, n1, order)",
                                                                    iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_mul(param_1,local_138,
                                                                       (BIGNUM *)0x0,dst,a,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x5c,
                                                                                                                                        
                                                  "EC_POINT_mul(group, Q, NULL, P, n1, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_cmp(param_1,local_138,dst,ctx);
                                                  iVar1 = test_int_eq("test/ectest.c",0x5d,&_LC4,
                                                                                                                                            
                                                  "EC_POINT_cmp(group, Q, P, ctx)",0,iVar1);
                                                  if (iVar1 == 0) break;
                                                  b = BN_value_one();
                                                  iVar1 = BN_add(r,order,b);
                                                  iVar1 = test_true("test/ectest.c",0x60,
                                                                                                                                        
                                                  "BN_add(n2, order, BN_value_one())",iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_mul(param_1,local_138,
                                                                       (BIGNUM *)0x0,dst,r,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x61,
                                                                                                                                        
                                                  "EC_POINT_mul(group, Q, NULL, P, n2, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_cmp(param_1,local_138,dst,ctx);
                                                  iVar1 = test_int_eq("test/ectest.c",0x62,&_LC4,
                                                                                                                                            
                                                  "EC_POINT_cmp(group, Q, P, ctx)",0,iVar1);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = BN_mul(r,a,r,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x65,
                                                                    "BN_mul(n2, n1, n2, ctx)",
                                                                    iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_mul(param_1,local_138,
                                                                       (BIGNUM *)0x0,dst,r,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x66,
                                                                                                                                        
                                                  "EC_POINT_mul(group, Q, NULL, P, n2, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_cmp(param_1,local_138,dst,ctx);
                                                  iVar1 = test_int_eq("test/ectest.c",0x67,&_LC4,
                                                                                                                                            
                                                  "EC_POINT_cmp(group, Q, P, ctx)",0,iVar1);
                                                  if (iVar1 == 0) break;
                                                  BN_set_negative(r,0);
                                                  iVar1 = EC_POINT_mul(param_1,local_138,
                                                                       (BIGNUM *)0x0,dst,r,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x6c,
                                                                                                                                        
                                                  "EC_POINT_mul(group, Q, NULL, P, n2, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_add(param_1,local_138,local_138,
                                                                       dst,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x6e,
                                                                                                                                        
                                                  "EC_POINT_add(group, Q, Q, P, ctx)",iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_is_at_infinity(param_1,local_138)
                                                  ;
                                                  iVar1 = test_true("test/ectest.c",0x6f,
                                                                                                                                        
                                                  "EC_POINT_is_at_infinity(group, Q)",iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_is_at_infinity(param_1,dst);
                                                  iVar1 = test_false("test/ectest.c",0x70,
                                                                                                                                          
                                                  "EC_POINT_is_at_infinity(group, P)",iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  local_a8 = BN_value_one();
                                                  pBStack_a0 = local_a8;
                                                  local_78 = dst;
                                                  pEStack_70 = dst;
                                                  iVar1 = EC_POINTs_mul(param_1,local_128,
                                                                        (BIGNUM *)0x0,2,&local_78,
                                                                        &local_a8,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x78,
                                                                                                                                        
                                                  "EC_POINTs_mul(group, R, NULL, 2, points, scalars, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_dbl(param_1,local_130,local_78,
                                                                       ctx);
                                                  iVar1 = test_true("test/ectest.c",0x79,
                                                                                                                                        
                                                  "EC_POINT_dbl(group, S, points[0], ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_cmp(param_1,local_128,local_130,
                                                                       ctx);
                                                  iVar1 = test_int_eq("test/ectest.c",0x7a,&_LC4,
                                                                                                                                            
                                                  "EC_POINT_cmp(group, R, S, ctx)",0,iVar1);
                                                  if (iVar1 == 0) break;
                                                  local_a8 = a;
                                                  pBStack_a0 = r;
                                                  local_98 = a;
                                                  pBStack_90 = r;
                                                  local_88 = a;
                                                  pBStack_80 = r;
                                                  local_78 = local_138;
                                                  pEStack_70 = dst;
                                                  local_68 = local_138;
                                                  pEStack_60 = local_138;
                                                  local_58 = dst;
                                                  pEStack_50 = local_138;
                                                  iVar1 = EC_POINTs_mul(param_1,dst,(BIGNUM *)0x0,6,
                                                                        &local_78,&local_a8,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x89,
                                                                                                                                        
                                                  "EC_POINTs_mul(group, P, NULL, 6, points, scalars, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  iVar1 = EC_POINT_is_at_infinity(param_1,dst);
                                                  iVar1 = test_true("test/ectest.c",0x8a,
                                                                                                                                        
                                                  "EC_POINT_is_at_infinity(group, P)",iVar1 != 0);
                                                  if (iVar1 == 0) break;
                                                  if (local_b8 != 1) {
                                                    uVar3 = 1;
                                                    goto LAB_0010602d;
                                                  }
                                                  local_b8 = 2;
                                                }
                                                pcVar2 = "without precomputation";
                                                if ((int)local_b8 == 1) {
LAB_00106bdd:
                                                  pcVar2 = "allowing precomputation";
                                                }
                                                test_info("test/ectest.c",0x92,pcVar2);
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
            goto LAB_0010602b;
          }
        }
        local_130 = (EC_POINT *)0x0;
        dst = (EC_POINT *)0x0;
        local_128 = (EC_POINT *)0x0;
        local_138 = (EC_POINT *)0x0;
      }
    }
  }
LAB_0010602b:
  uVar3 = 0;
LAB_0010602d:
  EC_POINT_free(dst);
  EC_POINT_free(local_138);
  EC_POINT_free(local_128);
  EC_POINT_free(local_130);
  BN_free(a);
  BN_free(r);
  BN_free(order);
  BN_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined4 internal_curve_test_method(int param_1)

{
  int nid;
  int iVar1;
  undefined4 uVar2;
  EC_GROUP *group;
  char *pcVar3;
  
  nid = *(int *)((long)param_1 * 0x10 + curves);
  group = EC_GROUP_new_by_curve_name(nid);
  iVar1 = test_ptr("test/ectest.c",0x489,"group = EC_GROUP_new_by_curve_name(nid)",group);
  if (iVar1 != 0) {
    uVar2 = group_order_tests(group);
    EC_GROUP_free(group);
    return uVar2;
  }
  pcVar3 = OBJ_nid2sn(nid);
  test_info("test/ectest.c",0x48a,"Curve %s failed\n",pcVar3);
  return 0;
}



undefined8 internal_curve_test(int param_1)

{
  int nid;
  int iVar1;
  EC_GROUP *group;
  char *pcVar2;
  
  nid = *(int *)((long)param_1 * 0x10 + curves);
  group = EC_GROUP_new_by_curve_name(nid);
  iVar1 = test_ptr("test/ectest.c",0x476,"group = EC_GROUP_new_by_curve_name(nid)",group);
  if (iVar1 == 0) {
    pcVar2 = OBJ_nid2sn(nid);
    test_info("test/ectest.c",0x477,"EC_GROUP_new_curve_name() failed with curve %s\n",pcVar2);
  }
  else {
    iVar1 = EC_GROUP_check(group,(BN_CTX *)0x0);
    iVar1 = test_true("test/ectest.c",0x47b,"EC_GROUP_check(group, NULL)",iVar1 != 0);
    if (iVar1 != 0) {
      EC_GROUP_free(group);
      return 1;
    }
    pcVar2 = OBJ_nid2sn(nid);
    test_info("test/ectest.c",0x47c,"EC_GROUP_check() failed with curve %s\n",pcVar2);
    EC_GROUP_free(group);
  }
  return 0;
}



uint nistp_single_test(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  BN_CTX *ctx;
  BIGNUM *r;
  EC_GROUP *group;
  EC_POINT *r_00;
  EC_POINT *b;
  BIGNUM *pBVar4;
  long lVar5;
  long in_FS_OFFSET;
  EC_POINT *local_a8;
  EC_POINT *local_a0;
  BIGNUM *local_98;
  BIGNUM *local_78;
  BIGNUM *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  lVar5 = (long)param_1 * 0x50;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (BIGNUM *)0x0;
  local_70 = (BIGNUM *)0x0;
  local_68 = (BIGNUM *)0x0;
  local_60 = (BIGNUM *)0x0;
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  test_note("NIST curve P-%d (optimised implementation):",
            *(undefined4 *)(nistp_tests_params + lVar5 + 4));
  ctx = BN_CTX_new();
  iVar1 = test_ptr("test/ectest.c",0x52c,"ctx = BN_CTX_new()",ctx);
  if (iVar1 != 0) {
    local_78 = BN_new();
    iVar1 = test_ptr("test/ectest.c",0x52d,"p = BN_new()",local_78);
    if (iVar1 != 0) {
      local_70 = BN_new();
      iVar1 = test_ptr("test/ectest.c",0x52e,"a = BN_new()",local_70);
      if (iVar1 != 0) {
        local_68 = BN_new();
        iVar1 = test_ptr("test/ectest.c",0x52f,"b = BN_new()",local_68);
        if (iVar1 != 0) {
          local_60 = BN_new();
          iVar1 = test_ptr("test/ectest.c",0x530,"x = BN_new()",local_60);
          if (iVar1 != 0) {
            local_58 = BN_new();
            iVar1 = test_ptr("test/ectest.c",0x531,"y = BN_new()",local_58);
            if (iVar1 != 0) {
              r = BN_new();
              uVar2 = test_ptr("test/ectest.c",0x532,"m = BN_new()",r);
              if (uVar2 != 0) {
                local_50 = BN_new();
                uVar2 = test_ptr("test/ectest.c",0x533,"n = BN_new()",local_50);
                if (uVar2 != 0) {
                  local_48 = BN_new();
                  uVar2 = test_ptr("test/ectest.c",0x534,"order = BN_new()",local_48);
                  if (uVar2 != 0) {
                    local_98 = BN_new();
                    iVar1 = test_ptr("test/ectest.c",0x535,"yplusone = BN_new()",local_98);
                    if (iVar1 == 0) {
                      b = (EC_POINT *)0x0;
                      r_00 = (EC_POINT *)0x0;
                      group = (EC_GROUP *)0x0;
                      local_a0 = (EC_POINT *)0x0;
                      local_a8 = (EC_POINT *)0x0;
                      uVar2 = 0;
                    }
                    else {
                      group = EC_GROUP_new_by_curve_name(*(int *)(nistp_tests_params + lVar5));
                      iVar1 = test_ptr("test/ectest.c",0x537,
                                       "NISTP = EC_GROUP_new_by_curve_name(test->nid)",group);
                      if (iVar1 != 0) {
                        BN_hex2bn(&local_78,*(char **)(nistp_tests_params + lVar5 + 8));
                        iVar1 = test_true("test/ectest.c",0x538,"BN_hex2bn(&p, test->p)");
                        if (iVar1 == 0) {
                          b = (EC_POINT *)0x0;
                          r_00 = (EC_POINT *)0x0;
                          local_a0 = (EC_POINT *)0x0;
                          local_a8 = (EC_POINT *)0x0;
                          uVar2 = 0;
                          goto LAB_00106e6d;
                        }
                        uVar3 = BN_check_prime(local_78,ctx,0);
                        iVar1 = test_int_eq("test/ectest.c",0x539,&_LC34,
                                            "BN_check_prime(p, ctx, NULL)",1,uVar3);
                        if (iVar1 != 0) {
                          iVar1 = BN_hex2bn(&local_70,*(char **)(nistp_tests_params + lVar5 + 0x10))
                          ;
                          iVar1 = test_true("test/ectest.c",0x53a,"BN_hex2bn(&a, test->a)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = BN_hex2bn(&local_68,
                                              *(char **)(nistp_tests_params + lVar5 + 0x18));
                            iVar1 = test_true("test/ectest.c",0x53b,"BN_hex2bn(&b, test->b)",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = EC_GROUP_set_curve(group,local_78,local_70,local_68,ctx);
                              iVar1 = test_true("test/ectest.c",0x53c,
                                                "EC_GROUP_set_curve(NISTP, p, a, b, ctx)",iVar1 != 0
                                               );
                              if (iVar1 != 0) {
                                local_a8 = EC_POINT_new(group);
                                iVar1 = test_ptr("test/ectest.c",0x53d,"G = EC_POINT_new(NISTP)",
                                                 local_a8);
                                if (iVar1 == 0) {
                                  b = (EC_POINT *)0x0;
                                  r_00 = (EC_POINT *)0x0;
                                  local_a0 = (EC_POINT *)0x0;
                                  uVar2 = 0;
                                }
                                else {
                                  local_a0 = EC_POINT_new(group);
                                  iVar1 = test_ptr("test/ectest.c",0x53e,"P = EC_POINT_new(NISTP)",
                                                   local_a0);
                                  if (iVar1 == 0) {
                                    b = (EC_POINT *)0x0;
                                    r_00 = (EC_POINT *)0x0;
                                    uVar2 = 0;
                                  }
                                  else {
                                    b = (EC_POINT *)0x0;
                                    r_00 = EC_POINT_new(group);
                                    uVar2 = test_ptr("test/ectest.c",0x53f,"Q = EC_POINT_new(NISTP)"
                                                     ,r_00);
                                    if (uVar2 != 0) {
                                      b = EC_POINT_new(group);
                                      iVar1 = test_ptr("test/ectest.c",0x540,
                                                       "Q_CHECK = EC_POINT_new(NISTP)",b);
                                      if (iVar1 != 0) {
                                        iVar1 = BN_hex2bn(&local_60,
                                                          *(char **)(nistp_tests_params +
                                                                    lVar5 + 0x20));
                                        uVar2 = test_true("test/ectest.c",0x541,
                                                          "BN_hex2bn(&x, test->Qx)",iVar1 != 0);
                                        if (uVar2 == 0) goto LAB_00106e6d;
                                        iVar1 = BN_hex2bn(&local_58,
                                                          *(char **)(nistp_tests_params +
                                                                    lVar5 + 0x28));
                                        iVar1 = test_true("test/ectest.c",0x542,
                                                          "BN_hex2bn(&y, test->Qy)",iVar1 != 0);
                                        if (iVar1 != 0) {
                                          pBVar4 = BN_value_one();
                                          iVar1 = BN_add(local_98,local_58,pBVar4);
                                          iVar1 = test_true("test/ectest.c",0x543,
                                                            "BN_add(yplusone, y, BN_value_one())",
                                                            iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = EC_POINT_set_affine_coordinates
                                                              (group,b,local_60,local_98,ctx);
                                            iVar1 = test_false("test/ectest.c",0x548,
                                                                                                                              
                                                  "EC_POINT_set_affine_coordinates(NISTP, Q_CHECK, x, yplusone, ctx)"
                                                  ,iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = EC_POINT_set_affine_coordinates
                                                                (group,b,local_60,local_58,ctx);
                                              iVar1 = test_true("test/ectest.c",0x54a,
                                                                                                                                
                                                  "EC_POINT_set_affine_coordinates(NISTP, Q_CHECK, x, y, ctx)"
                                                  ,iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = BN_hex2bn(&local_60,
                                                                  *(char **)(nistp_tests_params +
                                                                            lVar5 + 0x30));
                                                iVar1 = test_true("test/ectest.c",0x54c,
                                                                  "BN_hex2bn(&x, test->Gx)",
                                                                  iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = BN_hex2bn(&local_58,
                                                                    *(char **)(nistp_tests_params +
                                                                              lVar5 + 0x38));
                                                  iVar1 = test_true("test/ectest.c",0x54d,
                                                                    "BN_hex2bn(&y, test->Gy)",
                                                                    iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_affine_coordinates
                                                                      (group,local_a8,local_60,
                                                                       local_58,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x54e,
                                                                                                                                            
                                                  "EC_POINT_set_affine_coordinates(NISTP, G, x, y, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_48,
                                                                      *(char **)(nistp_tests_params
                                                                                + lVar5 + 0x40));
                                                    iVar1 = test_true("test/ectest.c",0x54f,
                                                                                                                                            
                                                  "BN_hex2bn(&order, test->order)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pBVar4 = BN_value_one();
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,local_a8,local_48,
                                                                       pBVar4);
                                                    iVar1 = test_true("test/ectest.c",0x550,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(NISTP, G, order, BN_value_one())"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = *(undefined4 *)
                                                             (nistp_tests_params + lVar5 + 4);
                                                    iVar1 = EC_GROUP_get_degree(group);
                                                    iVar1 = test_int_eq("test/ectest.c",0x551,
                                                                        "EC_GROUP_get_degree(NISTP)"
                                                                        ,"test->degree",iVar1,uVar3)
                                                    ;
                                                    if (iVar1 != 0) {
                                                      test_note("NIST test vectors ... ");
                                                      BN_hex2bn(&local_50,
                                                                *(char **)(nistp_tests_params +
                                                                          lVar5 + 0x48));
                                                      iVar1 = test_true("test/ectest.c",0x555,
                                                                        "BN_hex2bn(&n, test->d)");
                                                      if (iVar1 != 0) {
                                                        EC_POINT_mul(group,r_00,local_50,
                                                                     (EC_POINT *)0x0,(BIGNUM *)0x0,
                                                                     ctx);
                                                        iVar1 = EC_POINT_cmp(group,r_00,b,ctx);
                                                        uVar2 = test_int_eq("test/ectest.c",0x559,
                                                                            &_LC4,
                                                  "EC_POINT_cmp(NISTP, Q, Q_CHECK, ctx)",0,iVar1);
                                                  if (uVar2 == 0) goto LAB_00106e6d;
                                                  EC_POINT_mul(group,r_00,(BIGNUM *)0x0,local_a8,
                                                               local_50,ctx);
                                                  iVar1 = EC_POINT_cmp(group,r_00,b,ctx);
                                                  iVar1 = test_int_eq("test/ectest.c",0x55d,&_LC4,
                                                                                                                                            
                                                  "EC_POINT_cmp(NISTP, Q, Q_CHECK, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_dbl(group,local_a0,local_a8,ctx
                                                                        );
                                                    iVar1 = test_true("test/ectest.c",0x560,
                                                                                                                                            
                                                  "EC_POINT_dbl(NISTP, P, G, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pBVar4 = BN_value_one();
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,local_a0,local_48,
                                                                       pBVar4);
                                                    iVar1 = test_true("test/ectest.c",0x561,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(NISTP, P, order, BN_value_one())"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    BN_rshift(r,local_50,1);
                                                    iVar1 = test_true("test/ectest.c",0x563,
                                                                      "BN_rshift(m, n, 1)");
                                                    if (iVar1 != 0) {
                                                      EC_POINT_mul(group,r_00,r,(EC_POINT *)0x0,
                                                                   (BIGNUM *)0x0,ctx);
                                                      iVar1 = EC_POINT_cmp(group,r_00,b,ctx);
                                                      iVar1 = test_int_eq("test/ectest.c",0x569,
                                                                          &_LC4,
                                                  "EC_POINT_cmp(NISTP, Q, Q_CHECK, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    EC_POINT_mul(group,r_00,(BIGNUM *)0x0,local_a0,r
                                                                 ,ctx);
                                                    iVar1 = EC_POINT_cmp(group,r_00,b,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x56d,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(NISTP, Q, Q_CHECK, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_have_precompute_mult(group);
                                                    iVar1 = test_false("test/ectest.c",0x570,
                                                                                                                                              
                                                  "EC_GROUP_have_precompute_mult(NISTP)",iVar1 != 0)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    EC_GROUP_precompute_mult(group,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x572,
                                                                                                                                            
                                                  "EC_GROUP_precompute_mult(NISTP, ctx)");
                                                  if (iVar1 != 0) {
                                                    EC_POINT_mul(group,r_00,r,(EC_POINT *)0x0,
                                                                 (BIGNUM *)0x0,ctx);
                                                    iVar1 = EC_POINT_cmp(group,r_00,b,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x579,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(NISTP, Q, Q_CHECK, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    EC_POINT_mul(group,r_00,(BIGNUM *)0x0,local_a0,r
                                                                 ,ctx);
                                                    iVar1 = EC_POINT_cmp(group,r_00,b,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x57d,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(NISTP, Q, Q_CHECK, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    pBVar4 = BN_value_one();
                                                    EC_GROUP_set_generator
                                                              (group,local_a8,local_48,pBVar4);
                                                    iVar1 = test_true("test/ectest.c",0x580,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(NISTP, G, order, BN_value_one())"
                                                  );
                                                  if (iVar1 != 0) {
                                                    EC_POINT_mul(group,r_00,local_50,(EC_POINT *)0x0
                                                                 ,(BIGNUM *)0x0,ctx);
                                                    iVar1 = EC_POINT_cmp(group,r_00,b,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x584,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(NISTP, Q, Q_CHECK, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    EC_POINT_mul(group,r_00,(BIGNUM *)0x0,local_a8,
                                                                 local_50,ctx);
                                                    iVar1 = EC_POINT_cmp(group,r_00,b,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x588,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(NISTP, Q, Q_CHECK, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_set_word(r,0x20);
                                                    iVar1 = test_true("test/ectest.c",0x58c,
                                                                      "BN_set_word(m, 32)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_set_word(local_50,0x1f);
                                                      iVar1 = test_true("test/ectest.c",0x58d,
                                                                        "BN_set_word(n, 31)",
                                                                        iVar1 != 0);
                                                      if (iVar1 != 0) {
                                                        iVar1 = EC_POINT_copy(local_a0,local_a8);
                                                        iVar1 = test_true("test/ectest.c",0x58e,
                                                                          "EC_POINT_copy(P, G)",
                                                                          iVar1 != 0);
                                                        if (iVar1 != 0) {
                                                          iVar1 = EC_POINT_invert(group,local_a0,ctx
                                                                                 );
                                                          iVar1 = test_true("test/ectest.c",0x58f,
                                                                                                                                                        
                                                  "EC_POINT_invert(NISTP, P, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_mul(group,r_00,r,local_a0,
                                                                         local_50,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x590,
                                                                                                                                            
                                                  "EC_POINT_mul(NISTP, Q, m, P, n, ctx)",iVar1 != 0)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_cmp(group,r_00,local_a8,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x591,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(NISTP, Q, G, ctx)",0,iVar1);
                                                  uVar2 = (uint)(iVar1 != 0);
                                                  goto LAB_00106e6d;
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
                                  }
                                }
                                goto LAB_00106e6d;
                              }
                            }
                          }
                        }
                      }
                      uVar2 = 0;
                      b = (EC_POINT *)0x0;
                      r_00 = (EC_POINT *)0x0;
                      local_a0 = (EC_POINT *)0x0;
                      local_a8 = (EC_POINT *)0x0;
                    }
                    goto LAB_00106e6d;
                  }
                }
              }
              local_a0 = (EC_POINT *)0x0;
              b = (EC_POINT *)0x0;
              r_00 = (EC_POINT *)0x0;
              group = (EC_GROUP *)0x0;
              local_a8 = (EC_POINT *)0x0;
              local_98 = (BIGNUM *)0x0;
              goto LAB_00106e6d;
            }
          }
        }
      }
    }
  }
  local_a8 = (EC_POINT *)0x0;
  uVar2 = 0;
  b = (EC_POINT *)0x0;
  r_00 = (EC_POINT *)0x0;
  local_a0 = (EC_POINT *)0x0;
  group = (EC_GROUP *)0x0;
  r = (BIGNUM *)0x0;
  local_98 = (BIGNUM *)0x0;
LAB_00106e6d:
  EC_GROUP_free(group);
  EC_POINT_free(local_a8);
  EC_POINT_free(local_a0);
  EC_POINT_free(r_00);
  EC_POINT_free(b);
  BN_free(local_50);
  BN_free(r);
  BN_free(local_78);
  BN_free(local_70);
  BN_free(local_68);
  BN_free(local_60);
  BN_free(local_58);
  BN_free(local_48);
  BN_free(local_98);
  BN_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint char2_curve_test(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  BN_CTX *ctx;
  long lVar4;
  EC_GROUP *group;
  EC_POINT *point;
  EC_POINT *dst;
  EC_POINT *r;
  BIGNUM *pBVar5;
  long in_FS_OFFSET;
  BIGNUM *local_d0;
  BIGNUM *local_b0;
  BIGNUM *local_a8;
  BIGNUM *local_a0;
  BIGNUM *local_98;
  BIGNUM *local_90;
  BIGNUM *local_88;
  BIGNUM *local_80;
  EC_POINT *local_78;
  EC_POINT *pEStack_70;
  EC_POINT *local_68;
  BIGNUM *local_58;
  BIGNUM *pBStack_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (BIGNUM *)0x0;
  local_a8 = (BIGNUM *)0x0;
  local_a0 = (BIGNUM *)0x0;
  local_98 = (BIGNUM *)0x0;
  local_90 = (BIGNUM *)0x0;
  local_88 = (BIGNUM *)0x0;
  local_80 = (BIGNUM *)0x0;
  ctx = BN_CTX_new();
  iVar2 = test_ptr("test/ectest.c",0x319,"ctx = BN_CTX_new()",ctx);
  if (iVar2 != 0) {
    local_b0 = BN_new();
    iVar2 = test_ptr("test/ectest.c",0x31a,"p = BN_new()",local_b0);
    if (iVar2 != 0) {
      local_a8 = BN_new();
      iVar2 = test_ptr("test/ectest.c",0x31b,"a = BN_new()",local_a8);
      if (iVar2 != 0) {
        local_a0 = BN_new();
        iVar2 = test_ptr("test/ectest.c",0x31c,"b = BN_new()",local_a0);
        if (iVar2 != 0) {
          local_98 = BN_new();
          iVar2 = test_ptr("test/ectest.c",0x31d,"x = BN_new()",local_98);
          if (iVar2 != 0) {
            local_90 = BN_new();
            iVar2 = test_ptr("test/ectest.c",0x31e,"y = BN_new()",local_90);
            if (iVar2 != 0) {
              local_88 = BN_new();
              iVar2 = test_ptr("test/ectest.c",799,"z = BN_new()",local_88);
              if (iVar2 != 0) {
                local_d0 = BN_new();
                iVar2 = test_ptr("test/ectest.c",800,"yplusone = BN_new()",local_d0);
                if (iVar2 == 0) {
LAB_00107e2b:
                  r = (EC_POINT *)0x0;
                  dst = (EC_POINT *)0x0;
                  point = (EC_POINT *)0x0;
                  group = (EC_GROUP *)0x0;
                  uVar3 = 0;
                }
                else {
                  lVar4 = (long)param_1 * 0x50;
                  iVar2 = BN_hex2bn(&local_b0,*(char **)(char2_curve_tests + lVar4 + 8));
                  uVar3 = test_true("test/ectest.c",0x321,"BN_hex2bn(&p, test->p)",iVar2 != 0);
                  if (uVar3 != 0) {
                    iVar2 = BN_hex2bn(&local_a8,*(char **)(char2_curve_tests + lVar4 + 0x10));
                    uVar3 = test_true("test/ectest.c",0x322,"BN_hex2bn(&a, test->a)",iVar2 != 0);
                    if (uVar3 != 0) {
                      iVar2 = BN_hex2bn(&local_a0,*(char **)(char2_curve_tests + lVar4 + 0x18));
                      iVar2 = test_true("test/ectest.c",0x323,"BN_hex2bn(&b, test->b)",iVar2 != 0);
                      if (iVar2 != 0) {
                        group = (EC_GROUP *)EC_GROUP_new_curve_GF2m(local_b0,local_a8,local_a0,ctx);
                        iVar2 = test_true("test/ectest.c",0x324,
                                          "group = EC_GROUP_new_curve_GF2m(p, a, b, ctx)",
                                          group != (EC_GROUP *)0x0);
                        if (iVar2 == 0) {
                          r = (EC_POINT *)0x0;
                          dst = (EC_POINT *)0x0;
                          point = (EC_POINT *)0x0;
                          uVar3 = 0;
                        }
                        else {
                          point = EC_POINT_new(group);
                          iVar2 = test_ptr("test/ectest.c",0x325,"P = EC_POINT_new(group)",point);
                          if (iVar2 == 0) {
                            r = (EC_POINT *)0x0;
                            dst = (EC_POINT *)0x0;
                            uVar3 = 0;
                          }
                          else {
                            r = (EC_POINT *)0x0;
                            dst = EC_POINT_new(group);
                            uVar3 = test_ptr("test/ectest.c",0x326,"Q = EC_POINT_new(group)",dst);
                            if (uVar3 != 0) {
                              r = EC_POINT_new(group);
                              iVar2 = test_ptr("test/ectest.c",0x327,"R = EC_POINT_new(group)",r);
                              if (iVar2 != 0) {
                                iVar2 = BN_hex2bn(&local_98,
                                                  *(char **)(char2_curve_tests + lVar4 + 0x20));
                                uVar3 = test_true("test/ectest.c",0x328,"BN_hex2bn(&x, test->x)",
                                                  iVar2 != 0);
                                if (uVar3 == 0) goto LAB_00107c60;
                                iVar2 = BN_hex2bn(&local_90,
                                                  *(char **)(char2_curve_tests + lVar4 + 0x28));
                                iVar2 = test_true("test/ectest.c",0x329,"BN_hex2bn(&y, test->y)",
                                                  iVar2 != 0);
                                if (iVar2 != 0) {
                                  pBVar5 = BN_value_one();
                                  iVar2 = BN_add(local_d0,local_90,pBVar5);
                                  iVar2 = test_true("test/ectest.c",0x32a,
                                                    "BN_add(yplusone, y, BN_value_one())",iVar2 != 0
                                                   );
                                  if (iVar2 != 0) {
                                    iVar2 = EC_POINT_set_affine_coordinates
                                                      (group,point,local_98,local_d0,ctx);
                                    iVar2 = test_false("test/ectest.c",0x349,
                                                                                                              
                                                  "EC_POINT_set_affine_coordinates(group, P, x, yplusone, ctx)"
                                                  ,iVar2 != 0);
                                    if (iVar2 != 0) {
                                      iVar2 = EC_POINT_set_affine_coordinates
                                                        (group,point,local_98,local_90,ctx);
                                      iVar2 = test_true("test/ectest.c",0x34a,
                                                                                                                
                                                  "EC_POINT_set_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar2 != 0);
                                      if (iVar2 != 0) {
                                        iVar2 = EC_POINT_is_on_curve(group,point,ctx);
                                        iVar2 = test_int_gt("test/ectest.c",0x34b,
                                                            "EC_POINT_is_on_curve(group, P, ctx)",
                                                            &_LC4,iVar2,0);
                                        if (iVar2 != 0) {
                                          iVar2 = BN_hex2bn(&local_88,
                                                            *(char **)(char2_curve_tests +
                                                                      lVar4 + 0x38));
                                          iVar2 = test_true("test/ectest.c",0x34c,
                                                            "BN_hex2bn(&z, test->order)",iVar2 != 0)
                                          ;
                                          if (iVar2 != 0) {
                                            iVar2 = BN_hex2bn(&local_80,
                                                              *(char **)(char2_curve_tests +
                                                                        lVar4 + 0x40));
                                            iVar2 = test_true("test/ectest.c",0x34d,
                                                              "BN_hex2bn(&cof, test->cof)",
                                                              iVar2 != 0);
                                            if (iVar2 != 0) {
                                              iVar2 = EC_GROUP_set_generator
                                                                (group,point,local_88,local_80);
                                              iVar2 = test_true("test/ectest.c",0x34e,
                                                                                                                                
                                                  "EC_GROUP_set_generator(group, P, z, cof)",
                                                  iVar2 != 0);
                                              if (iVar2 != 0) {
                                                test_info("test/ectest.c",0x350,"%s -- Generator:",
                                                          *(undefined8 *)(char2_curve_tests + lVar4)
                                                         );
                                                test_output_bignum(&_LC382,local_98);
                                                test_output_bignum(&_LC383,local_90);
                                                uVar1 = *(undefined4 *)
                                                         (char2_curve_tests + lVar4 + 0x48);
                                                iVar2 = EC_GROUP_get_degree(group);
                                                iVar2 = test_int_eq("test/ectest.c",0x355,
                                                                    "EC_GROUP_get_degree(group)",
                                                                    "test->degree",iVar2,uVar1);
                                                if (iVar2 != 0) {
                                                  iVar2 = group_order_tests(group);
                                                  if (iVar2 != 0) {
                                                    uVar3 = 1;
                                                    if (param_1 != 9) goto LAB_00107c60;
                                                    iVar2 = EC_POINT_set_affine_coordinates
                                                                      (group,point,local_98,local_90
                                                                       ,ctx);
                                                    iVar2 = test_true("test/ectest.c",0x35b,
                                                                                                                                            
                                                  "EC_POINT_set_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINT_copy(dst,point);
                                                    iVar2 = test_true("test/ectest.c",0x35c,
                                                                      "EC_POINT_copy(Q, P)",
                                                                      iVar2 != 0);
                                                    if (iVar2 != 0) {
                                                      iVar2 = EC_POINT_is_at_infinity(group,dst);
                                                      iVar2 = test_false("test/ectest.c",0x35d,
                                                                                                                                                  
                                                  "EC_POINT_is_at_infinity(group, Q)",iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINT_dbl(group,point,point,ctx);
                                                    iVar2 = test_true("test/ectest.c",0x35e,
                                                                                                                                            
                                                  "EC_POINT_dbl(group, P, P, ctx)",iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINT_is_on_curve(group,point,ctx);
                                                    iVar2 = test_int_gt("test/ectest.c",0x35f,
                                                                                                                                                
                                                  "EC_POINT_is_on_curve(group, P, ctx)",&_LC4,iVar2,
                                                  0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINT_invert(group,dst,ctx);
                                                    iVar2 = test_true("test/ectest.c",0x360,
                                                                                                                                            
                                                  "EC_POINT_invert(group, Q, ctx)",iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINT_add(group,r,point,dst,ctx);
                                                    iVar2 = test_true("test/ectest.c",0x361,
                                                                                                                                            
                                                  "EC_POINT_add(group, R, P, Q, ctx)",iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINT_add(group,r,r,dst,ctx);
                                                    iVar2 = test_true("test/ectest.c",0x362,
                                                                                                                                            
                                                  "EC_POINT_add(group, R, R, Q, ctx)",iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINT_is_at_infinity(group,r);
                                                    iVar2 = test_true("test/ectest.c",0x363,
                                                                                                                                            
                                                  "EC_POINT_is_at_infinity(group, R)",iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINT_is_at_infinity(group,dst);
                                                    iVar2 = test_false("test/ectest.c",0x364,
                                                                                                                                              
                                                  "EC_POINT_is_at_infinity(group, Q)",iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    test_note("combined multiplication ...");
                                                    local_78 = dst;
                                                    pEStack_70 = dst;
                                                    local_68 = dst;
                                                    pBVar5 = BN_value_one();
                                                    iVar2 = BN_add(local_90,local_88,pBVar5);
                                                    iVar2 = test_true("test/ectest.c",0x36d,
                                                                      "BN_add(y, z, BN_value_one())"
                                                                      ,iVar2 != 0);
                                                    if (iVar2 != 0) {
                                                      iVar2 = test_BN_even("test/ectest.c",0x36e,
                                                                           &_LC383,local_90);
                                                      if (iVar2 != 0) {
                                                        iVar2 = BN_rshift1(local_90,local_90);
                                                        iVar2 = test_true("test/ectest.c",0x36f,
                                                                          "BN_rshift1(y, y)",
                                                                          iVar2 != 0);
                                                        if (iVar2 != 0) {
                                                          local_58 = local_90;
                                                          pBStack_50 = local_90;
                                                          iVar2 = EC_POINTs_mul(group,point,
                                                                                (BIGNUM *)0x0,2,
                                                                                &local_78,&local_58,
                                                                                ctx);
                                                          iVar2 = test_true("test/ectest.c",0x375,
                                                                                                                                                        
                                                  "EC_POINTs_mul(group, P, NULL, 2, points, scalars, ctx)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINTs_mul(group,r,local_88,2,
                                                                          &local_78,&local_58,ctx);
                                                    iVar2 = test_true("test/ectest.c",0x376,
                                                                                                                                            
                                                  "EC_POINTs_mul(group, R, z, 2, points, scalars, ctx)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINT_cmp(group,point,r,ctx);
                                                    iVar2 = test_int_eq("test/ectest.c",0x377,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(group, P, R, ctx)",0,iVar2);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINT_cmp(group,r,dst,ctx);
                                                    iVar2 = test_int_eq("test/ectest.c",0x378,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(group, R, Q, ctx)",0,iVar2);
                                                  if (iVar2 != 0) {
                                                    iVar2 = BN_num_bits(local_90);
                                                    iVar2 = BN_rand(local_90,iVar2,0,0);
                                                    iVar2 = test_true("test/ectest.c",0x37b,
                                                                                                                                            
                                                  "BN_rand(y, BN_num_bits(y), 0, 0)",iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = BN_add(local_88,local_88,local_90);
                                                    iVar2 = test_true("test/ectest.c",0x37c,
                                                                      "BN_add(z, z, y)",iVar2 != 0);
                                                    if (iVar2 != 0) {
                                                      BN_set_negative(local_88,1);
                                                      local_58 = local_90;
                                                      pBStack_50 = local_88;
                                                      iVar2 = EC_POINTs_mul(group,point,
                                                                            (BIGNUM *)0x0,2,
                                                                            &local_78,&local_58,ctx)
                                                      ;
                                                      iVar2 = test_true("test/ectest.c",0x382,
                                                                                                                                                
                                                  "EC_POINTs_mul(group, P, NULL, 2, points, scalars, ctx)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    EC_POINT_is_at_infinity(group,point);
                                                    iVar2 = test_true("test/ectest.c",899,
                                                                                                                                            
                                                  "EC_POINT_is_at_infinity(group, P)");
                                                  if (iVar2 != 0) {
                                                    iVar2 = BN_num_bits(local_90);
                                                    iVar2 = BN_rand(local_98,iVar2 + -1,0,0);
                                                    iVar2 = test_true("test/ectest.c",0x386,
                                                                                                                                            
                                                  "BN_rand(x, BN_num_bits(y) - 1, 0, 0)",iVar2 != 0)
                                                  ;
                                                  if (iVar2 != 0) {
                                                    iVar2 = BN_add(local_88,local_98,local_90);
                                                    iVar2 = test_true("test/ectest.c",0x387,
                                                                      "BN_add(z, x, y)",iVar2 != 0);
                                                    if (iVar2 != 0) {
                                                      BN_set_negative(local_88,1);
                                                      local_48 = local_88;
                                                      local_58 = local_98;
                                                      pBStack_50 = local_90;
                                                      iVar2 = EC_POINTs_mul(group,point,
                                                                            (BIGNUM *)0x0,3,
                                                                            &local_78,&local_58,ctx)
                                                      ;
                                                      iVar2 = test_true("test/ectest.c",0x38e,
                                                                                                                                                
                                                  "EC_POINTs_mul(group, P, NULL, 3, points, scalars, ctx)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = EC_POINT_is_at_infinity(group,point);
                                                    iVar2 = test_true("test/ectest.c",0x38f,
                                                                                                                                            
                                                  "EC_POINT_is_at_infinity(group, P)",iVar2 != 0);
                                                  uVar3 = (uint)(iVar2 != 0);
                                                  goto LAB_00107c60;
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
                              uVar3 = 0;
                            }
                          }
                        }
                        goto LAB_00107c60;
                      }
                      goto LAB_00107e2b;
                    }
                  }
                  r = (EC_POINT *)0x0;
                  dst = (EC_POINT *)0x0;
                  point = (EC_POINT *)0x0;
                  group = (EC_GROUP *)0x0;
                }
                goto LAB_00107c60;
              }
            }
          }
        }
      }
    }
  }
  r = (EC_POINT *)0x0;
  dst = (EC_POINT *)0x0;
  point = (EC_POINT *)0x0;
  group = (EC_GROUP *)0x0;
  local_d0 = (BIGNUM *)0x0;
  uVar3 = 0;
LAB_00107c60:
  BN_CTX_free(ctx);
  BN_free(local_b0);
  BN_free(local_a8);
  BN_free(local_a0);
  BN_free(local_98);
  BN_free(local_90);
  BN_free(local_88);
  BN_free(local_d0);
  BN_free(local_80);
  EC_POINT_free(point);
  EC_POINT_free(dst);
  EC_POINT_free(r);
  EC_GROUP_free(group);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int char2_field_tests(void)

{
  int iVar1;
  int iVar2;
  BN_CTX *ctx;
  EC_GROUP *group;
  EC_POINT *point;
  EC_POINT *p;
  BIGNUM *a;
  size_t len;
  long in_FS_OFFSET;
  BIGNUM *local_100;
  EC_POINT *local_f8;
  BIGNUM *local_f0;
  BIGNUM *local_d0;
  BIGNUM *local_c8;
  BIGNUM *local_c0;
  BIGNUM *local_b8;
  BIGNUM *local_b0;
  uchar local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = (BIGNUM *)0x0;
  local_c8 = (BIGNUM *)0x0;
  local_c0 = (BIGNUM *)0x0;
  local_b8 = (BIGNUM *)0x0;
  local_b0 = (BIGNUM *)0x0;
  ctx = BN_CTX_new();
  iVar1 = test_ptr("test/ectest.c",0x3b1,"ctx = BN_CTX_new()",ctx);
  if (iVar1 != 0) {
    local_d0 = BN_new();
    iVar1 = test_ptr("test/ectest.c",0x3b2,"p = BN_new()",local_d0);
    if (iVar1 != 0) {
      local_c8 = BN_new();
      iVar1 = test_ptr("test/ectest.c",0x3b3,"a = BN_new()",local_c8);
      if (iVar1 != 0) {
        local_c0 = BN_new();
        iVar1 = test_ptr("test/ectest.c",0x3b4,"b = BN_new()",local_c0);
        if (iVar1 != 0) {
          iVar1 = BN_hex2bn(&local_d0,"13");
          iVar1 = test_true("test/ectest.c",0x3b5,"BN_hex2bn(&p, \"13\")",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BN_hex2bn(&local_c8,"3");
            iVar1 = test_true("test/ectest.c",0x3b6,"BN_hex2bn(&a, \"3\")",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = BN_hex2bn(&local_c0,"1");
              iVar1 = test_true("test/ectest.c",0x3b7,"BN_hex2bn(&b, \"1\")",iVar1 != 0);
              if (iVar1 != 0) {
                group = (EC_GROUP *)EC_GROUP_new_curve_GF2m(local_d0,local_c8,local_c0,ctx);
                iVar1 = test_ptr("test/ectest.c",0x3ba,
                                 "group = EC_GROUP_new_curve_GF2m(p, a, b, ctx)",group);
                if (iVar1 != 0) {
                  iVar1 = EC_GROUP_get_curve(group,local_d0,local_c8,local_c0);
                  iVar1 = test_true("test/ectest.c",0x3bb,"EC_GROUP_get_curve(group, p, a, b, ctx)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    test_info("test/ectest.c",0x3be,"Curve defined by Weierstrass equation");
                    test_note("     y^2 + x*y = x^3 + a*x^2 + b (mod p)");
                    test_output_bignum(&_LC108,local_c8);
                    test_output_bignum(&_LC100,local_c0);
                    test_output_bignum(&_LC106,local_d0);
                    point = EC_POINT_new(group);
                    iVar1 = test_ptr("test/ectest.c",0x3c4,"P = EC_POINT_new(group)",point);
                    if (iVar1 == 0) {
                      a = (BIGNUM *)0x0;
                      p = (EC_POINT *)0x0;
                      local_100 = (BIGNUM *)0x0;
                      local_f0 = (BIGNUM *)0x0;
                      local_f8 = (EC_POINT *)0x0;
                      iVar1 = 0;
                    }
                    else {
                      p = EC_POINT_new(group);
                      iVar1 = test_ptr("test/ectest.c",0x3c5,"Q = EC_POINT_new(group)",p);
                      if (iVar1 == 0) {
                        a = (BIGNUM *)0x0;
                        local_100 = (BIGNUM *)0x0;
                        local_f0 = (BIGNUM *)0x0;
                        local_f8 = (EC_POINT *)0x0;
                        iVar1 = 0;
                      }
                      else {
                        local_f8 = EC_POINT_new(group);
                        iVar1 = test_ptr("test/ectest.c",0x3c6,"R = EC_POINT_new(group)",local_f8);
                        if (iVar1 != 0) {
                          iVar1 = EC_POINT_set_to_infinity(group,point);
                          iVar1 = test_true("test/ectest.c",0x3c7,
                                            "EC_POINT_set_to_infinity(group, P)",iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = EC_POINT_is_at_infinity(group,point);
                            iVar1 = test_true("test/ectest.c",0x3c8,
                                              "EC_POINT_is_at_infinity(group, P)",iVar1 != 0);
                            if (iVar1 != 0) {
                              local_a8[0] = '\0';
                              iVar1 = EC_POINT_oct2point(group,p,local_a8,1,ctx);
                              iVar1 = test_true("test/ectest.c",0x3cc,
                                                "EC_POINT_oct2point(group, Q, buf, 1, ctx)",
                                                iVar1 != 0);
                              if (iVar1 != 0) {
                                EC_POINT_add(group,point,point,p,ctx);
                                iVar1 = test_true("test/ectest.c",0x3cd,
                                                  "EC_POINT_add(group, P, P, Q, ctx)");
                                if (iVar1 == 0) {
                                  a = (BIGNUM *)0x0;
                                  local_100 = (BIGNUM *)0x0;
                                  local_f0 = (BIGNUM *)0x0;
                                  iVar1 = 0;
                                  goto LAB_0010891c;
                                }
                                iVar1 = EC_POINT_is_at_infinity(group,point);
                                iVar1 = test_true("test/ectest.c",0x3ce,
                                                  "EC_POINT_is_at_infinity(group, P)",iVar1 != 0);
                                if (iVar1 != 0) {
                                  local_b8 = BN_new();
                                  iVar1 = test_ptr("test/ectest.c",0x3cf,"x = BN_new()",local_b8);
                                  if (iVar1 != 0) {
                                    local_b0 = BN_new();
                                    iVar1 = test_ptr("test/ectest.c",0x3d0,"y = BN_new()",local_b0);
                                    if (iVar1 != 0) {
                                      local_f0 = BN_new();
                                      iVar1 = test_ptr("test/ectest.c",0x3d1,"z = BN_new()",local_f0
                                                      );
                                      if (iVar1 == 0) {
                                        a = (BIGNUM *)0x0;
                                        local_100 = (BIGNUM *)0x0;
                                        iVar1 = 0;
                                      }
                                      else {
                                        local_100 = BN_new();
                                        a = (BIGNUM *)0x0;
                                        iVar1 = test_ptr("test/ectest.c",0x3d2,"cof = BN_new()",
                                                         local_100);
                                        if (iVar1 != 0) {
                                          a = BN_new();
                                          iVar1 = test_ptr("test/ectest.c",0x3d3,
                                                           "yplusone = BN_new()",a);
                                          if (iVar1 != 0) {
                                            iVar1 = BN_hex2bn(&local_b8,"6");
                                            iVar1 = test_true("test/ectest.c",0x3d4,
                                                              "BN_hex2bn(&x, \"6\")",iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = BN_hex2bn(&local_b0,"8");
                                              iVar1 = test_true("test/ectest.c",0x3d9,
                                                                "BN_hex2bn(&y, \"8\")",iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = EC_POINT_set_affine_coordinates
                                                                  (group,p,local_b8,local_b0,ctx);
                                                iVar1 = test_true("test/ectest.c",0x3da,
                                                                                                                                    
                                                  "EC_POINT_set_affine_coordinates(group, Q, x, y, ctx)"
                                                  ,iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  iVar1 = EC_POINT_is_on_curve(group,p,ctx);
                                                  iVar1 = test_int_gt("test/ectest.c",0x3de,
                                                                                                                                            
                                                  "EC_POINT_is_on_curve(group, Q, ctx)",&_LC4,iVar1,
                                                  0);
                                                  if (iVar1 == 0) {
                                                    test_info("test/ectest.c",0x3e4,
                                                              "Point is not on curve");
                                                    test_output_bignum(&_LC382,local_b8);
                                                    test_output_bignum(&_LC383,local_b0);
                                                  }
                                                  else {
                                                    test_note("A cyclic subgroup:");
                                                    iVar1 = 100;
                                                    do {
                                                      iVar2 = test_int_ne("test/ectest.c",0x3ed,
                                                                          &_LC420,&_LC4,iVar1,0);
                                                      if (iVar2 == 0) goto LAB_001092a9;
                                                      iVar2 = EC_POINT_is_at_infinity(group,point);
                                                      if (iVar2 == 0) {
                                                        iVar2 = EC_POINT_get_affine_coordinates
                                                                          (group,point,local_b8,
                                                                           local_b0,ctx);
                                                        iVar2 = test_true("test/ectest.c",0x3f3,
                                                                                                                                                    
                                                  "EC_POINT_get_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 == 0) goto LAB_001092a9;
                                                  test_output_bignum(&_LC382,local_b8);
                                                  test_output_bignum(&_LC383,local_b0);
                                                  }
                                                  else {
                                                    test_note("     point at infinity");
                                                  }
                                                  iVar2 = EC_POINT_copy(local_f8,point);
                                                  iVar2 = test_true("test/ectest.c",0x3fb,
                                                                    "EC_POINT_copy(R, P)",iVar2 != 0
                                                                   );
                                                  if (iVar2 == 0) goto LAB_001092a9;
                                                  iVar2 = EC_POINT_add(group,point,point,p,ctx);
                                                  iVar2 = test_true("test/ectest.c",0x3fc,
                                                                                                                                        
                                                  "EC_POINT_add(group, P, P, Q, ctx)",iVar2 != 0);
                                                  if (iVar2 == 0) goto LAB_001092a9;
                                                  iVar2 = EC_POINT_is_at_infinity(group,point);
                                                  iVar1 = iVar1 + -1;
                                                  } while (iVar2 == 0);
                                                  iVar1 = EC_POINT_add(group,point,p,local_f8,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x401,
                                                                                                                                        
                                                  "EC_POINT_add(group, P, Q, R, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_is_at_infinity(group,point);
                                                    iVar1 = test_true("test/ectest.c",0x402,
                                                                                                                                            
                                                  "EC_POINT_is_at_infinity(group, P)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    len = EC_POINT_point2oct(group,p,
                                                  POINT_CONVERSION_UNCOMPRESSED,local_a8,100,ctx);
                                                  iVar1 = test_size_t_ne("test/ectest.c",0x413,
                                                                         &_LC425,&_LC4,len,0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_oct2point(group,point,local_a8,
                                                                               len,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x414,
                                                                                                                                            
                                                  "EC_POINT_oct2point(group, P, buf, len, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_cmp(group,point,p,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x415,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(group, P, Q, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    test_output_memory(
                                                  "Generator as octet string, uncompressed form:",
                                                  local_a8,len);
                                                  iVar1 = EC_POINT_invert(group,point,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x427,
                                                                    "EC_POINT_invert(group, P, ctx)"
                                                                    ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_cmp(group,point,local_f8,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x428,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(group, P, R, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    test_note(&_LC430);
                                                    iVar1 = 1;
                                                    goto LAB_0010891c;
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
LAB_001092a9:
                                          iVar1 = 0;
                                        }
                                      }
                                      goto LAB_0010891c;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        iVar1 = 0;
                        a = (BIGNUM *)0x0;
                        local_100 = (BIGNUM *)0x0;
                        local_f0 = (BIGNUM *)0x0;
                      }
                    }
                    goto LAB_0010891c;
                  }
                }
                local_100 = (BIGNUM *)0x0;
                a = (BIGNUM *)0x0;
                p = (EC_POINT *)0x0;
                point = (EC_POINT *)0x0;
                local_f0 = (BIGNUM *)0x0;
                local_f8 = (EC_POINT *)0x0;
                goto LAB_0010891c;
              }
            }
          }
        }
      }
    }
  }
  iVar1 = 0;
  a = (BIGNUM *)0x0;
  p = (EC_POINT *)0x0;
  point = (EC_POINT *)0x0;
  local_100 = (BIGNUM *)0x0;
  group = (EC_GROUP *)0x0;
  local_f0 = (BIGNUM *)0x0;
  local_f8 = (EC_POINT *)0x0;
LAB_0010891c:
  BN_CTX_free(ctx);
  BN_free(local_d0);
  BN_free(local_c8);
  BN_free(local_c0);
  EC_GROUP_free(group);
  EC_POINT_free(point);
  EC_POINT_free(p);
  EC_POINT_free(local_f8);
  BN_free(local_b8);
  BN_free(local_b0);
  BN_free(local_f0);
  BN_free(local_100);
  BN_free(a);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint hybrid_point_encoding_test(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  EC_GROUP *group;
  EC_POINT *p;
  size_t len;
  byte *buf;
  size_t sVar4;
  long in_FS_OFFSET;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  iVar1 = BN_dec2bn(&local_50,"0");
  iVar1 = test_true("test/ectest.c",0x448,"BN_dec2bn(&x, \"0\")",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = BN_dec2bn(&local_48,"1");
    iVar1 = test_true("test/ectest.c",0x449,"BN_dec2bn(&y, \"1\")",iVar1 != 0);
    if (iVar1 != 0) {
      group = EC_GROUP_new_by_curve_name(0x2dd);
      iVar1 = test_ptr("test/ectest.c",0x44a,"group = EC_GROUP_new_by_curve_name(NID_sect571k1)",
                       group);
      if (iVar1 == 0) {
        buf = (byte *)0x0;
        p = (EC_POINT *)0x0;
        uVar2 = 0;
        goto LAB_00109339;
      }
      p = EC_POINT_new(group);
      iVar1 = test_ptr("test/ectest.c",1099,"point = EC_POINT_new(group)",p);
      if (iVar1 != 0) {
        EC_POINT_set_affine_coordinates(group,p,local_50,local_48);
        buf = (byte *)0x0;
        uVar2 = test_true("test/ectest.c",0x44c,
                          "EC_POINT_set_affine_coordinates(group, point, x, y, NULL)");
        if (uVar2 == 0) goto LAB_00109339;
        len = EC_POINT_point2oct(group,p,POINT_CONVERSION_HYBRID,(uchar *)0x0,0,(BN_CTX *)0x0);
        iVar1 = test_size_t_ne("test/ectest.c",0x44d,&_LC4,
                               "(len = EC_POINT_point2oct(group, point, POINT_CONVERSION_HYBRID, NULL, 0, NULL))"
                               ,0);
        if (iVar1 != 0) {
          buf = (byte *)CRYPTO_malloc((int)len,"test/ectest.c",0x453);
          uVar2 = test_ptr("test/ectest.c",0x453,"buf = OPENSSL_malloc(len)",buf);
          if (uVar2 != 0) {
            sVar4 = EC_POINT_point2oct(group,p,POINT_CONVERSION_HYBRID,buf,len,(BN_CTX *)0x0);
            uVar2 = test_size_t_eq("test/ectest.c",0x454,&_LC425,
                                   "EC_POINT_point2oct(group, point, POINT_CONVERSION_HYBRID, buf, len, NULL)"
                                   ,len,sVar4);
            if (uVar2 != 0) {
              iVar1 = EC_POINT_oct2point(group,p,buf,len,(BN_CTX *)0x0);
              iVar1 = test_true("test/ectest.c",0x45f,
                                "EC_POINT_oct2point(group, point, buf, len, NULL)",iVar1 != 0);
              *buf = *buf ^ 1;
              iVar3 = EC_POINT_oct2point(group,p,buf,len,(BN_CTX *)0x0);
              uVar2 = test_false("test/ectest.c",0x464,
                                 "EC_POINT_oct2point(group, point, buf, len, NULL)",iVar3 != 0);
              if (uVar2 != 0) {
                uVar2 = (uint)(iVar1 != 0);
              }
            }
          }
          goto LAB_00109339;
        }
      }
      uVar2 = 0;
      buf = (byte *)0x0;
      goto LAB_00109339;
    }
  }
  uVar2 = 0;
  buf = (byte *)0x0;
  p = (EC_POINT *)0x0;
  group = (EC_GROUP *)0x0;
LAB_00109339:
  BN_free(local_50);
  BN_free(local_48);
  EC_GROUP_free(group);
  EC_POINT_free(p);
  CRYPTO_free(buf);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int prime_field_tests(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  BN_CTX *ctx;
  EC_GROUP *group;
  EC_POINT *point;
  EC_POINT *p;
  size_t sVar4;
  BIGNUM *pBVar5;
  long in_FS_OFFSET;
  BIGNUM *local_158;
  EC_POINT *local_150;
  BIGNUM *local_118;
  BIGNUM *local_110;
  BIGNUM *local_108;
  BIGNUM *local_100;
  BIGNUM *local_f8;
  BIGNUM *local_f0;
  EC_POINT *local_e8;
  EC_POINT *pEStack_e0;
  EC_POINT *local_d8;
  EC_POINT *pEStack_d0;
  BIGNUM *local_c8;
  BIGNUM *pBStack_c0;
  BIGNUM *local_b8;
  BIGNUM *local_b0;
  uchar local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = (BIGNUM *)0x0;
  local_110 = (BIGNUM *)0x0;
  local_108 = (BIGNUM *)0x0;
  local_100 = (BIGNUM *)0x0;
  local_f8 = (BIGNUM *)0x0;
  local_f0 = (BIGNUM *)0x0;
  ctx = BN_CTX_new();
  iVar1 = test_ptr("test/ectest.c",0xae,"ctx = BN_CTX_new()",ctx);
  if (iVar1 != 0) {
    local_118 = BN_new();
    iVar1 = test_ptr("test/ectest.c",0xaf,"p = BN_new()",local_118);
    if (iVar1 != 0) {
      local_110 = BN_new();
      iVar1 = test_ptr("test/ectest.c",0xb0,"a = BN_new()",local_110);
      if (iVar1 != 0) {
        local_108 = BN_new();
        iVar1 = test_ptr("test/ectest.c",0xb1,"b = BN_new()",local_108);
        if (iVar1 != 0) {
          iVar1 = BN_hex2bn(&local_118,"17");
          iVar1 = test_true("test/ectest.c",0xb2,"BN_hex2bn(&p, \"17\")",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BN_hex2bn(&local_110,"1");
            iVar1 = test_true("test/ectest.c",0xb3,"BN_hex2bn(&a, \"1\")",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = BN_hex2bn(&local_108,"1");
              iVar1 = test_true("test/ectest.c",0xb4,"BN_hex2bn(&b, \"1\")",iVar1 != 0);
              if (iVar1 != 0) {
                group = EC_GROUP_new_curve_GFp(local_118,local_110,local_108,ctx);
                iVar1 = test_ptr("test/ectest.c",0xb5,"group = EC_GROUP_new_curve_GFp(p, a, b, ctx)"
                                 ,group);
                if (iVar1 != 0) {
                  iVar1 = EC_GROUP_get_curve(group,local_118,local_110,local_108,ctx);
                  iVar1 = test_true("test/ectest.c",0xb6,"EC_GROUP_get_curve(group, p, a, b, ctx)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    test_info("test/ectest.c",0xb9,"Curve defined by Weierstrass equation");
                    test_note("     y^2 = x^3 + a*x + b (mod p)");
                    test_output_bignum(&_LC108,local_110);
                    test_output_bignum(&_LC100,local_108);
                    test_output_bignum(&_LC106,local_118);
                    local_a8[0] = '\0';
                    point = EC_POINT_new(group);
                    iVar1 = test_ptr("test/ectest.c",0xc0,"P = EC_POINT_new(group)",point);
                    if (iVar1 == 0) {
                      p = (EC_POINT *)0x0;
                      pBVar5 = (BIGNUM *)0x0;
                      local_158 = (BIGNUM *)0x0;
                      local_150 = (EC_POINT *)0x0;
                      iVar1 = 0;
                    }
                    else {
                      p = EC_POINT_new(group);
                      iVar1 = test_ptr("test/ectest.c",0xc1,"Q = EC_POINT_new(group)");
                      if (iVar1 == 0) {
                        pBVar5 = (BIGNUM *)0x0;
                        local_158 = (BIGNUM *)0x0;
                        local_150 = (EC_POINT *)0x0;
                        iVar1 = 0;
                      }
                      else {
                        local_150 = EC_POINT_new(group);
                        iVar1 = test_ptr("test/ectest.c",0xc2,"R = EC_POINT_new(group)",local_150);
                        if (iVar1 != 0) {
                          iVar1 = EC_POINT_set_to_infinity(group,point);
                          iVar1 = test_true("test/ectest.c",0xc3,
                                            "EC_POINT_set_to_infinity(group, P)",iVar1 != 0);
                          if (iVar1 == 0) {
                            pBVar5 = (BIGNUM *)0x0;
                            local_158 = (BIGNUM *)0x0;
                            iVar1 = 0;
                            goto LAB_0010967b;
                          }
                          iVar1 = EC_POINT_is_at_infinity(group,point);
                          iVar1 = test_true("test/ectest.c",0xc4,"EC_POINT_is_at_infinity(group, P)"
                                            ,iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = EC_POINT_oct2point(group,p,local_a8,1,ctx);
                            iVar1 = test_true("test/ectest.c",0xc5,
                                              "EC_POINT_oct2point(group, Q, buf, 1, ctx)",iVar1 != 0
                                             );
                            if (iVar1 != 0) {
                              iVar1 = EC_POINT_add(group,point,point,p,ctx);
                              iVar1 = test_true("test/ectest.c",0xc6,
                                                "EC_POINT_add(group, P, P, Q, ctx)",iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = EC_POINT_is_at_infinity(group,point);
                                iVar1 = test_true("test/ectest.c",199,
                                                  "EC_POINT_is_at_infinity(group, P)",iVar1 != 0);
                                if (iVar1 != 0) {
                                  local_100 = BN_new();
                                  iVar1 = test_ptr("test/ectest.c",200,"x = BN_new()",local_100);
                                  if (iVar1 != 0) {
                                    local_f8 = BN_new();
                                    iVar1 = test_ptr("test/ectest.c",0xc9,"y = BN_new()",local_f8);
                                    if (iVar1 != 0) {
                                      local_f0 = BN_new();
                                      iVar1 = test_ptr("test/ectest.c",0xca,"z = BN_new()",local_f0)
                                      ;
                                      if (iVar1 != 0) {
                                        local_158 = BN_new();
                                        iVar1 = test_ptr("test/ectest.c",0xcb,"yplusone = BN_new()",
                                                         local_158);
                                        if (iVar1 != 0) {
                                          iVar1 = BN_hex2bn(&local_100,"D");
                                          pBVar5 = (BIGNUM *)0x0;
                                          iVar1 = test_true("test/ectest.c",0xcc,
                                                            "BN_hex2bn(&x, \"D\")",iVar1 != 0);
                                          if (iVar1 == 0) goto LAB_0010967b;
                                          iVar1 = EC_POINT_set_compressed_coordinates
                                                            (group,p,local_100,1,ctx);
                                          iVar1 = test_true("test/ectest.c",0xcd,
                                                                                                                        
                                                  "EC_POINT_set_compressed_coordinates(group, Q, x, 1, ctx)"
                                                  ,iVar1 != 0);
                                          if (iVar1 != 0) {
                                            iVar1 = EC_POINT_is_on_curve(group,p,ctx);
                                            iVar1 = test_int_gt("test/ectest.c",0xd0,
                                                                                                                                
                                                  "EC_POINT_is_on_curve(group, Q, ctx)",&_LC4,iVar1,
                                                  0);
                                            if (iVar1 == 0) {
                                              iVar1 = EC_POINT_get_affine_coordinates
                                                                (group,p,local_100,local_f8,ctx);
                                              iVar1 = test_true("test/ectest.c",0xd1,
                                                                                                                                
                                                  "EC_POINT_get_affine_coordinates(group, Q, x, y, ctx)"
                                                  ,iVar1 != 0);
                                              if (iVar1 != 0) {
                                                test_info("test/ectest.c",0xd3,
                                                          "Point is not on curve");
                                                test_output_bignum(&_LC382,local_100);
                                                test_output_bignum(&_LC383,local_f8);
                                              }
                                            }
                                            else {
                                              test_note("A cyclic subgroup:");
                                              iVar1 = 100;
                                              do {
                                                iVar2 = test_int_ne("test/ectest.c",0xdc,&_LC420,
                                                                    &_LC4,iVar1,0);
                                                if (iVar2 == 0) goto LAB_00109bab;
                                                iVar2 = EC_POINT_is_at_infinity(group,point);
                                                if (iVar2 == 0) {
                                                  iVar2 = EC_POINT_get_affine_coordinates
                                                                    (group,point,local_100,local_f8,
                                                                     ctx);
                                                  iVar2 = test_true("test/ectest.c",0xe2,
                                                                                                                                        
                                                  "EC_POINT_get_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 == 0) goto LAB_00109bab;
                                                  test_output_bignum(&_LC382,local_100);
                                                  test_output_bignum(&_LC383,local_f8);
                                                }
                                                else {
                                                  test_note("     point at infinity");
                                                }
                                                iVar2 = EC_POINT_copy(local_150,point);
                                                iVar2 = test_true("test/ectest.c",0xea,
                                                                  "EC_POINT_copy(R, P)",iVar2 != 0);
                                                if (iVar2 == 0) goto LAB_00109bab;
                                                iVar2 = EC_POINT_add(group,point,point,p,ctx);
                                                iVar2 = test_true("test/ectest.c",0xeb,
                                                                                                                                    
                                                  "EC_POINT_add(group, P, P, Q, ctx)",iVar2 != 0);
                                                if (iVar2 == 0) goto LAB_00109bab;
                                                iVar2 = EC_POINT_is_at_infinity(group,point);
                                                iVar1 = iVar1 + -1;
                                              } while (iVar2 == 0);
                                              iVar1 = EC_POINT_add(group,point,p,local_150,ctx);
                                              iVar1 = test_true("test/ectest.c",0xf0,
                                                                "EC_POINT_add(group, P, Q, R, ctx)",
                                                                iVar1 != 0);
                                              if (iVar1 != 0) {
                                                iVar1 = EC_POINT_is_at_infinity(group,point);
                                                iVar1 = test_true("test/ectest.c",0xf1,
                                                                                                                                    
                                                  "EC_POINT_is_at_infinity(group, P)",iVar1 != 0);
                                                if (iVar1 != 0) {
                                                  sVar4 = EC_POINT_point2oct(group,p,
                                                  POINT_CONVERSION_COMPRESSED,local_a8,100,ctx);
                                                  iVar1 = test_size_t_ne("test/ectest.c",0xf7,
                                                                         &_LC425,&_LC4,sVar4,0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_oct2point(group,point,local_a8,
                                                                               sVar4,ctx);
                                                    iVar1 = test_true("test/ectest.c",0xf8,
                                                                                                                                            
                                                  "EC_POINT_oct2point(group, P, buf, len, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_cmp(group,point,p,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0xf9,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(group, P, Q, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    test_output_memory(
                                                  "Generator as octet string, compressed form:",
                                                  local_a8,sVar4);
                                                  sVar4 = EC_POINT_point2oct(group,p,
                                                  POINT_CONVERSION_UNCOMPRESSED,local_a8,100,ctx);
                                                  iVar1 = test_size_t_ne("test/ectest.c",0x100,
                                                                         &_LC425,&_LC4,sVar4,0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_oct2point(group,point,local_a8,
                                                                               sVar4,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x101,
                                                                                                                                            
                                                  "EC_POINT_oct2point(group, P, buf, len, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_cmp(group,point,p,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x102,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(group, P, Q, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    test_output_memory(
                                                  "Generator as octet string, uncompressed form:",
                                                  local_a8,sVar4);
                                                  sVar4 = EC_POINT_point2oct(group,p,
                                                  POINT_CONVERSION_HYBRID,local_a8,100,ctx);
                                                  iVar1 = test_size_t_ne("test/ectest.c",0x109,
                                                                         &_LC425,&_LC4,sVar4,0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_oct2point(group,point,local_a8,
                                                                               sVar4,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x10a,
                                                                                                                                            
                                                  "EC_POINT_oct2point(group, P, buf, len, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_cmp(group,point,p,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x10b,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(group, P, Q, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    test_output_memory(
                                                  "Generator as octet string, hybrid form:",local_a8
                                                  ,sVar4);
                                                  iVar1 = EC_POINT_invert(group,point,ctx);
                                                  iVar1 = test_true("test/ectest.c",0x110,
                                                                    "EC_POINT_invert(group, P, ctx)"
                                                                    ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_cmp(group,point,local_150,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x111,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(group, P, R, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_118,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF7FFFFFFF");
                                                  iVar1 = test_true("test/ectest.c",0x118,
                                                                                                                                        
                                                  "BN_hex2bn(&p, \"FFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFF7FFFFFFF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = BN_check_prime(local_118,ctx,0);
                                                    iVar1 = test_int_eq("test/ectest.c",0x11a,&_LC34
                                                                        ,
                                                  "BN_check_prime(p, ctx, NULL)",1,uVar3);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_110,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF7FFFFFFC");
                                                  iVar1 = test_true("test/ectest.c",0x11b,
                                                                                                                                        
                                                  "BN_hex2bn(&a, \"FFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFF7FFFFFFC\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_108,
                                                                                                                                            
                                                  "1C97BEFC54BD7A8B65ACF89F81D4D4ADC565FA45");
                                                  iVar1 = test_true("test/ectest.c",0x11d,
                                                                                                                                        
                                                  "BN_hex2bn(&b, \"1C97BEFC\" \"54BD7A8B65ACF89F81D4D4ADC565FA45\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_set_curve(group,local_118,
                                                                               local_110,local_108,
                                                                               ctx);
                                                    iVar1 = test_true("test/ectest.c",0x11f,
                                                                                                                                            
                                                  "EC_GROUP_set_curve(group, p, a, b, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_100,
                                                                                                                                            
                                                  "4A96B5688EF573284664698968C38BB913CBFC82");
                                                  iVar1 = test_true("test/ectest.c",0x120,
                                                                                                                                        
                                                  "BN_hex2bn(&x, \"4A96B568\" \"8EF573284664698968C38BB913CBFC82\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_f8,
                                                                                                                                            
                                                  "23a628553168947d59dcc912042351377ac5fb32");
                                                  iVar1 = test_true("test/ectest.c",0x122,
                                                                                                                                        
                                                  "BN_hex2bn(&y, \"23a62855\" \"3168947d59dcc912042351377ac5fb32\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pBVar5 = BN_value_one();
                                                    iVar1 = BN_add(local_158,local_f8,pBVar5);
                                                    iVar1 = test_true("test/ectest.c",0x124,
                                                                                                                                            
                                                  "BN_add(yplusone, y, BN_value_one())",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_158,ctx);
                                                    iVar1 = test_false("test/ectest.c",0x129,
                                                                                                                                              
                                                  "EC_POINT_set_affine_coordinates(group, P, x, yplusone, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_f8,ctx);
                                                    iVar1 = test_true("test/ectest.c",299,
                                                                                                                                            
                                                  "EC_POINT_set_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_is_on_curve(group,point,ctx);
                                                    iVar1 = test_int_gt("test/ectest.c",300,
                                                                                                                                                
                                                  "EC_POINT_is_on_curve(group, P, ctx)",&_LC4,iVar1,
                                                  0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "0100000000000000000001F4C8F927AED3CA752257");
                                                  iVar1 = test_true("test/ectest.c",0x12d,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"0100000000\" \"000000000001F4C8F927AED3CA752257\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pBVar5 = BN_value_one();
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,point,local_f0,pBVar5);
                                                    iVar1 = test_true("test/ectest.c",0x12f,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(group, P, z, BN_value_one())"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_get_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_f8,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x130,
                                                                                                                                            
                                                  "EC_POINT_get_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    test_info("test/ectest.c",0x132,
                                                              "SEC2 curve secp160r1 -- Generator");
                                                    test_output_bignum(&_LC382,local_100);
                                                    test_output_bignum(&_LC383,local_f8);
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "23a628553168947d59dcc912042351377ac5fb32");
                                                  iVar1 = test_true("test/ectest.c",0x136,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"23a62855\" \"3168947d59dcc912042351377ac5fb32\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/ectest.c",0x138,&_LC383
                                                                       ,&_LC467,local_f8,local_f0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = EC_GROUP_get_degree(group);
                                                      iVar1 = test_int_eq("test/ectest.c",0x139,
                                                                                                                                                    
                                                  "EC_GROUP_get_degree(group)",&_LC468,iVar1,0xa0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = group_order_tests(group);
                                                    if (iVar1 != 0) {
                                                      iVar1 = BN_hex2bn(&local_118,
                                                                                                                                                
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFF"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x13e,
                                                                                                                                        
                                                  "BN_hex2bn(&p, \"FFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = BN_check_prime(local_118,ctx,0);
                                                    iVar1 = test_int_eq("test/ectest.c",0x140,&_LC34
                                                                        ,
                                                  "BN_check_prime(p, ctx, NULL)",1,uVar3);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_110,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFC"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x141,
                                                                                                                                        
                                                  "BN_hex2bn(&a, \"FFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFC\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_108,
                                                                                                                                            
                                                  "64210519E59C80E70FA7E9AB72243049FEB8DEECC146B9B1"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x143,
                                                                                                                                        
                                                  "BN_hex2bn(&b, \"64210519E59C80E7\" \"0FA7E9AB72243049FEB8DEECC146B9B1\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_set_curve(group,local_118,
                                                                               local_110,local_108,
                                                                               ctx);
                                                    iVar1 = test_true("test/ectest.c",0x145,
                                                                                                                                            
                                                  "EC_GROUP_set_curve(group, p, a, b, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_100,
                                                                                                                                            
                                                  "188DA80EB03090F67CBF20EB43A18800F4FF0AFD82FF1012"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x146,
                                                                                                                                        
                                                  "BN_hex2bn(&x, \"188DA80EB03090F6\" \"7CBF20EB43A18800F4FF0AFD82FF1012\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_compressed_coordinates
                                                                      (group,point,local_100,1,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x148,
                                                                                                                                            
                                                  "EC_POINT_set_compressed_coordinates(group, P, x, 1, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_is_on_curve(group,point,ctx);
                                                    iVar1 = test_int_gt("test/ectest.c",0x149,
                                                                                                                                                
                                                  "EC_POINT_is_on_curve(group, P, ctx)",&_LC4,iVar1,
                                                  0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFF99DEF836146BC9B1B4D22831"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x14a,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"FFFFFFFFFFFFFFFF\" \"FFFFFFFF99DEF836146BC9B1B4D22831\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pBVar5 = BN_value_one();
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,point,local_f0,pBVar5);
                                                    iVar1 = test_true("test/ectest.c",0x14c,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(group, P, z, BN_value_one())"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_get_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_f8,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x14d,
                                                                                                                                            
                                                  "EC_POINT_get_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    test_info("test/ectest.c",0x150,
                                                              "NIST curve P-192 -- Generator");
                                                    test_output_bignum(&_LC382,local_100);
                                                    test_output_bignum(&_LC383,local_f8);
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "07192B95FFC8DA78631011ED6B24CDD573F977A11E794811"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x154,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"07192B95FFC8DA78\" \"631011ED6B24CDD573F977A11E794811\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/ectest.c",0x156,&_LC383
                                                                       ,&_LC467,local_f8,local_f0);
                                                    if (iVar1 != 0) {
                                                      pBVar5 = BN_value_one();
                                                      iVar1 = BN_add(local_158,local_f8,pBVar5);
                                                      iVar1 = test_true("test/ectest.c",0x157,
                                                                                                                                                
                                                  "BN_add(yplusone, y, BN_value_one())",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_158,ctx);
                                                    iVar1 = test_false("test/ectest.c",0x15c,
                                                                                                                                              
                                                  "EC_POINT_set_affine_coordinates(group, P, x, yplusone, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_get_degree(group);
                                                    iVar1 = test_int_eq("test/ectest.c",0x15e,
                                                                        "EC_GROUP_get_degree(group)"
                                                                        ,&_LC483,iVar1,0xc0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = group_order_tests(group);
                                                      if (iVar1 != 0) {
                                                        iVar1 = BN_hex2bn(&local_118,
                                                                                                                                                    
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000000000000000000001"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x163,
                                                                                                                                        
                                                  "BN_hex2bn(&p, \"FFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFF000000000000000000000001\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = BN_check_prime(local_118,ctx,0);
                                                    iVar1 = test_int_eq("test/ectest.c",0x165,&_LC34
                                                                        ,
                                                  "BN_check_prime(p, ctx, NULL)",1,uVar3);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_110,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFFFFFFFFFE"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x166,
                                                                                                                                        
                                                  "BN_hex2bn(&a, \"FFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFEFFFFFFFFFFFFFFFFFFFFFFFE\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_108,
                                                                                                                                            
                                                  "B4050A850C04B3ABF54132565044B0B7D7BFD8BA270B39432355FFB4"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x168,
                                                                                                                                        
                                                  "BN_hex2bn(&b, \"B4050A850C04B3ABF5413256\" \"5044B0B7D7BFD8BA270B39432355FFB4\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_set_curve(group,local_118,
                                                                               local_110,local_108,
                                                                               ctx);
                                                    iVar1 = test_true("test/ectest.c",0x16a,
                                                                                                                                            
                                                  "EC_GROUP_set_curve(group, p, a, b, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_100,
                                                                                                                                            
                                                  "B70E0CBD6BB4BF7F321390B94A03C1D356C21122343280D6115C1D21"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x16b,
                                                                                                                                        
                                                  "BN_hex2bn(&x, \"B70E0CBD6BB4BF7F321390B9\" \"4A03C1D356C21122343280D6115C1D21\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_compressed_coordinates
                                                                      (group,point,local_100,0,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x16d,
                                                                                                                                            
                                                  "EC_POINT_set_compressed_coordinates(group, P, x, 0, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_is_on_curve(group,point,ctx);
                                                    iVar1 = test_int_gt("test/ectest.c",0x16e,
                                                                                                                                                
                                                  "EC_POINT_is_on_curve(group, P, ctx)",&_LC4,iVar1,
                                                  0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFF16A2E0B8F03E13DD29455C5C2A3D"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x16f,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"FFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFF16A2E0B8F03E13DD29455C5C2A3D\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pBVar5 = BN_value_one();
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,point,local_f0,pBVar5);
                                                    iVar1 = test_true("test/ectest.c",0x171,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(group, P, z, BN_value_one())"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_get_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_f8,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x172,
                                                                                                                                            
                                                  "EC_POINT_get_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    test_info("test/ectest.c",0x175,
                                                              "NIST curve P-224 -- Generator");
                                                    test_output_bignum(&_LC382,local_100);
                                                    test_output_bignum(&_LC383,local_f8);
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "BD376388B5F723FB4C22DFE6CD4375A05A07476444D5819985007E34"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x179,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"BD376388B5F723FB4C22DFE6\" \"CD4375A05A07476444D5819985007E34\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/ectest.c",0x17b,&_LC383
                                                                       ,&_LC467,local_f8,local_f0);
                                                    if (iVar1 != 0) {
                                                      pBVar5 = BN_value_one();
                                                      iVar1 = BN_add(local_158,local_f8,pBVar5);
                                                      iVar1 = test_true("test/ectest.c",0x17c,
                                                                                                                                                
                                                  "BN_add(yplusone, y, BN_value_one())",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_158,ctx);
                                                    iVar1 = test_false("test/ectest.c",0x181,
                                                                                                                                              
                                                  "EC_POINT_set_affine_coordinates(group, P, x, yplusone, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_get_degree(group);
                                                    iVar1 = test_int_eq("test/ectest.c",0x183,
                                                                        "EC_GROUP_get_degree(group)"
                                                                        ,&_LC498,iVar1,0xe0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = group_order_tests(group);
                                                      if (iVar1 != 0) {
                                                        iVar1 = BN_hex2bn(&local_118,
                                                                                                                                                    
                                                  "FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x188,
                                                                                                                                        
                                                  "BN_hex2bn(&p, \"FFFFFFFF000000010000000000000000\" \"00000000FFFFFFFFFFFFFFFFFFFFFFFF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = BN_check_prime(local_118,ctx,0);
                                                    iVar1 = test_int_eq("test/ectest.c",0x18a,&_LC34
                                                                        ,
                                                  "BN_check_prime(p, ctx, NULL)",1,uVar3);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_110,
                                                                                                                                            
                                                  "FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFC"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x18b,
                                                                                                                                        
                                                  "BN_hex2bn(&a, \"FFFFFFFF000000010000000000000000\" \"00000000FFFFFFFFFFFFFFFFFFFFFFFC\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_108,
                                                                                                                                            
                                                  "5AC635D8AA3A93E7B3EBBD55769886BC651D06B0CC53B0F63BCE3C3E27D2604B"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x18d,
                                                                                                                                        
                                                  "BN_hex2bn(&b, \"5AC635D8AA3A93E7B3EBBD55769886BC\" \"651D06B0CC53B0F63BCE3C3E27D2604B\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_set_curve(group,local_118,
                                                                               local_110,local_108,
                                                                               ctx);
                                                    iVar1 = test_true("test/ectest.c",399,
                                                                                                                                            
                                                  "EC_GROUP_set_curve(group, p, a, b, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_100,
                                                                                                                                            
                                                  "6B17D1F2E12C4247F8BCE6E563A440F277037D812DEB33A0F4A13945D898C296"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x191,
                                                                                                                                        
                                                  "BN_hex2bn(&x, \"6B17D1F2E12C4247F8BCE6E563A440F2\" \"77037D812DEB33A0F4A13945D898C296\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_compressed_coordinates
                                                                      (group,point,local_100,1,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x193,
                                                                                                                                            
                                                  "EC_POINT_set_compressed_coordinates(group, P, x, 1, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_is_on_curve(group,point,ctx);
                                                    iVar1 = test_int_gt("test/ectest.c",0x194,
                                                                                                                                                
                                                  "EC_POINT_is_on_curve(group, P, ctx)",&_LC4,iVar1,
                                                  0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC632551"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x195,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"FFFFFFFF00000000FFFFFFFFFFFFFFFF\" \"BCE6FAADA7179E84F3B9CAC2FC632551\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pBVar5 = BN_value_one();
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,point,local_f0,pBVar5);
                                                    iVar1 = test_true("test/ectest.c",0x197,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(group, P, z, BN_value_one())"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_get_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_f8,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x198,
                                                                                                                                            
                                                  "EC_POINT_get_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    test_info("test/ectest.c",0x19b,
                                                              "NIST curve P-256 -- Generator");
                                                    test_output_bignum(&_LC382,local_100);
                                                    test_output_bignum(&_LC383,local_f8);
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "4FE342E2FE1A7F9B8EE7EB4A7C0F9E162BCE33576B315ECECBB6406837BF51F5"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x19f,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"4FE342E2FE1A7F9B8EE7EB4A7C0F9E16\" \"2BCE33576B315ECECBB6406837BF51F5\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/ectest.c",0x1a1,&_LC383
                                                                       ,&_LC467,local_f8,local_f0);
                                                    if (iVar1 != 0) {
                                                      pBVar5 = BN_value_one();
                                                      iVar1 = BN_add(local_158,local_f8,pBVar5);
                                                      iVar1 = test_true("test/ectest.c",0x1a2,
                                                                                                                                                
                                                  "BN_add(yplusone, y, BN_value_one())",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_158,ctx);
                                                    iVar1 = test_false("test/ectest.c",0x1a7,
                                                                                                                                              
                                                  "EC_POINT_set_affine_coordinates(group, P, x, yplusone, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_get_degree(group);
                                                    iVar1 = test_int_eq("test/ectest.c",0x1a9,
                                                                        "EC_GROUP_get_degree(group)"
                                                                        ,&_LC512,iVar1,0x100);
                                                    if (iVar1 != 0) {
                                                      iVar1 = group_order_tests(group);
                                                      if (iVar1 != 0) {
                                                        iVar1 = BN_hex2bn(&local_118,
                                                                                                                                                    
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFF0000000000000000FFFFFFFF"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1ae,
                                                                                                                                        
                                                  "BN_hex2bn(&p, \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE\" \"FFFFFFFF0000000000000000FFFFFFFF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = BN_check_prime(local_118,ctx,0);
                                                    iVar1 = test_int_eq("test/ectest.c",0x1b1,&_LC34
                                                                        ,
                                                  "BN_check_prime(p, ctx, NULL)",1,uVar3);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_110,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFF0000000000000000FFFFFFFC"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1b2,
                                                                                                                                        
                                                  "BN_hex2bn(&a, \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE\" \"FFFFFFFF0000000000000000FFFFFFFC\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_108,
                                                                                                                                            
                                                  "B3312FA7E23EE7E4988E056BE3F82D19181D9C6EFE8141120314088F5013875AC656398D8A2ED19D2A85C8EDD3EC2AEF"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1b5,
                                                                                                                                        
                                                  "BN_hex2bn(&b, \"B3312FA7E23EE7E4988E056BE3F82D19\" \"181D9C6EFE8141120314088F5013875A\" \"C656398D8A2ED19D2A85C8EDD3EC2AEF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_set_curve(group,local_118,
                                                                               local_110,local_108,
                                                                               ctx);
                                                    iVar1 = test_true("test/ectest.c",0x1b8,
                                                                                                                                            
                                                  "EC_GROUP_set_curve(group, p, a, b, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_100,
                                                                                                                                            
                                                  "AA87CA22BE8B05378EB1C71EF320AD746E1D3B628BA79B9859F741E082542A385502F25DBF55296C3A545E3872760AB7"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1ba,
                                                                                                                                        
                                                  "BN_hex2bn(&x, \"AA87CA22BE8B05378EB1C71EF320AD74\" \"6E1D3B628BA79B9859F741E082542A38\" \"5502F25DBF55296C3A545E3872760AB7\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_compressed_coordinates
                                                                      (group,point,local_100,1,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x1bd,
                                                                                                                                            
                                                  "EC_POINT_set_compressed_coordinates(group, P, x, 1, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_is_on_curve(group,point,ctx);
                                                    iVar1 = test_int_gt("test/ectest.c",0x1be,
                                                                                                                                                
                                                  "EC_POINT_is_on_curve(group, P, ctx)",&_LC4,iVar1,
                                                  0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC7634D81F4372DDF581A0DB248B0A77AECEC196ACCC52973"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1bf,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFC7634D81F4372DDF\" \"581A0DB248B0A77AECEC196ACCC52973\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pBVar5 = BN_value_one();
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,point,local_f0,pBVar5);
                                                    iVar1 = test_true("test/ectest.c",0x1c2,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(group, P, z, BN_value_one())"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_get_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_f8,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x1c3,
                                                                                                                                            
                                                  "EC_POINT_get_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    test_info("test/ectest.c",0x1c6,
                                                              "NIST curve P-384 -- Generator");
                                                    test_output_bignum(&_LC382,local_100);
                                                    test_output_bignum(&_LC383,local_f8);
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "3617DE4A96262C6F5D9E98BF9292DC29F8F41DBD289A147CE9DA3113B5F0B8C00A60B1CE1D7E819D7A431D7C90EA0E5F"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1ca,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"3617DE4A96262C6F5D9E98BF9292DC29\" \"F8F41DBD289A147CE9DA3113B5F0B8C0\" \"0A60B1CE1D7E819D7A431D7C90EA0E5F\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/ectest.c",0x1cd,&_LC383
                                                                       ,&_LC467,local_f8,local_f0);
                                                    if (iVar1 != 0) {
                                                      pBVar5 = BN_value_one();
                                                      iVar1 = BN_add(local_158,local_f8,pBVar5);
                                                      iVar1 = test_true("test/ectest.c",0x1ce,
                                                                                                                                                
                                                  "BN_add(yplusone, y, BN_value_one())",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_158,ctx);
                                                    iVar1 = test_false("test/ectest.c",0x1d3,
                                                                                                                                              
                                                  "EC_POINT_set_affine_coordinates(group, P, x, yplusone, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_get_degree(group);
                                                    iVar1 = test_int_eq("test/ectest.c",0x1d5,
                                                                        "EC_GROUP_get_degree(group)"
                                                                        ,&_LC526,iVar1,0x180);
                                                    if (iVar1 != 0) {
                                                      iVar1 = group_order_tests(group);
                                                      if (iVar1 != 0) {
                                                        iVar1 = BN_hex2bn(&local_118,
                                                                                                                                                    
                                                  "1FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1d9,
                                                                                                                                        
                                                  "BN_hex2bn(&p, \"1FF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    uVar3 = BN_check_prime(local_118,ctx,0);
                                                    iVar1 = test_int_eq("test/ectest.c",0x1de,&_LC34
                                                                        ,
                                                  "BN_check_prime(p, ctx, NULL)",1,uVar3);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_110,
                                                                                                                                            
                                                  "1FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1df,
                                                                                                                                        
                                                  "BN_hex2bn(&a, \"1FF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_108,
                                                                                                                                            
                                                  "051953EB9618E1C9A1F929A21A0B68540EEA2DA725B99B315F3B8B489918EF109E156193951EC7E937B1652C0BD3BB1BF073573DF883D2C34F1EF451FD46B503F00"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1e4,
                                                                                                                                        
                                                  "BN_hex2bn(&b, \"051\" \"953EB9618E1C9A1F929A21A0B68540EE\" \"A2DA725B99B315F3B8B489918EF109E1\" \"56193951EC7E937B1652C0BD3BB1BF07\" \"3573DF883D2C34F1EF451FD46B503F00\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_set_curve(group,local_118,
                                                                               local_110,local_108,
                                                                               ctx);
                                                    iVar1 = test_true("test/ectest.c",0x1e9,
                                                                                                                                            
                                                  "EC_GROUP_set_curve(group, p, a, b, ctx)",
                                                  iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_100,
                                                                                                                                            
                                                  "C6858E06B70404E9CD9E3ECB662395B4429C648139053FB521F828AF606B4D3DBAA14B5E77EFE75928FE1DC127A2FFA8DE3348B3C1856A429BF97E7E31C2E5BD66"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1ea,
                                                                                                                                        
                                                  "BN_hex2bn(&x, \"C6\" \"858E06B70404E9CD9E3ECB662395B442\" \"9C648139053FB521F828AF606B4D3DBA\" \"A14B5E77EFE75928FE1DC127A2FFA8DE\" \"3348B3C1856A429BF97E7E31C2E5BD66\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_compressed_coordinates
                                                                      (group,point,local_100,0,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x1ef,
                                                                                                                                            
                                                  "EC_POINT_set_compressed_coordinates(group, P, x, 0, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_is_on_curve(group,point,ctx);
                                                    iVar1 = test_int_gt("test/ectest.c",0x1f0,
                                                                                                                                                
                                                  "EC_POINT_is_on_curve(group, P, ctx)",&_LC4,iVar1,
                                                  0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "1FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFA51868783BF2F966B7FCC0148F709A5D03BB5C9B8899C47AEBB6FB71E91386409"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1f1,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"1FF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\" \"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFA\" \"51868783BF2F966B7FCC0148F709A5D0\" \"3BB5C9B8899C47AEBB6FB71E91386409\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pBVar5 = BN_value_one();
                                                    iVar1 = EC_GROUP_set_generator
                                                                      (group,point,local_f0,pBVar5);
                                                    iVar1 = test_true("test/ectest.c",0x1f6,
                                                                                                                                            
                                                  "EC_GROUP_set_generator(group, P, z, BN_value_one())"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_get_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_f8,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x1f7,
                                                                                                                                            
                                                  "EC_POINT_get_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    test_info("test/ectest.c",0x1fa,
                                                              "NIST curve P-521 -- Generator");
                                                    test_output_bignum(&_LC382,local_100);
                                                    test_output_bignum(&_LC383,local_f8);
                                                    iVar1 = BN_hex2bn(&local_f0,
                                                                                                                                            
                                                  "11839296A789A3BC0045C8A5FB42C7D1BD998F54449579B446817AFBD17273E662C97EE72995EF42640C550B9013FAD0761353C7086A272C24088BE94769FD16650"
                                                  );
                                                  iVar1 = test_true("test/ectest.c",0x1fe,
                                                                                                                                        
                                                  "BN_hex2bn(&z, \"118\" \"39296A789A3BC0045C8A5FB42C7D1BD9\" \"98F54449579B446817AFBD17273E662C\" \"97EE72995EF42640C550B9013FAD0761\" \"353C7086A272C24088BE94769FD16650\")"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = test_BN_eq("test/ectest.c",0x203,&_LC383
                                                                       ,&_LC467,local_f8,local_f0);
                                                    if (iVar1 != 0) {
                                                      pBVar5 = BN_value_one();
                                                      iVar1 = BN_add(local_158,local_f8,pBVar5);
                                                      iVar1 = test_true("test/ectest.c",0x204,
                                                                                                                                                
                                                  "BN_add(yplusone, y, BN_value_one())",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_set_affine_coordinates
                                                                      (group,point,local_100,
                                                                       local_158,ctx);
                                                    iVar1 = test_false("test/ectest.c",0x209,
                                                                                                                                              
                                                  "EC_POINT_set_affine_coordinates(group, P, x, yplusone, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_GROUP_get_degree(group);
                                                    iVar1 = test_int_eq("test/ectest.c",0x20b,
                                                                        "EC_GROUP_get_degree(group)"
                                                                        ,&_LC540,iVar1,0x209);
                                                    if (iVar1 != 0) {
                                                      iVar1 = group_order_tests(group);
                                                      if (iVar1 != 0) {
                                                        iVar1 = EC_POINT_set_affine_coordinates
                                                                          (group,point,local_100,
                                                                           local_f8,ctx);
                                                        iVar1 = test_true("test/ectest.c",0x211,
                                                                                                                                                    
                                                  "EC_POINT_set_affine_coordinates(group, P, x, y, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_copy(p,point);
                                                    iVar1 = test_true("test/ectest.c",0x212,
                                                                      "EC_POINT_copy(Q, P)",
                                                                      iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = EC_POINT_is_at_infinity(group,p);
                                                      iVar1 = test_false("test/ectest.c",0x213,
                                                                                                                                                  
                                                  "EC_POINT_is_at_infinity(group, Q)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_dbl(group,point,point,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x214,
                                                                                                                                            
                                                  "EC_POINT_dbl(group, P, P, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_is_on_curve(group,point,ctx);
                                                    iVar1 = test_int_gt("test/ectest.c",0x215,
                                                                                                                                                
                                                  "EC_POINT_is_on_curve(group, P, ctx)",&_LC4,iVar1,
                                                  0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_invert(group,p,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x216,
                                                                                                                                            
                                                  "EC_POINT_invert(group, Q, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_add(group,local_150,point,p,ctx
                                                                        );
                                                    iVar1 = test_true("test/ectest.c",0x217,
                                                                                                                                            
                                                  "EC_POINT_add(group, R, P, Q, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_add(group,local_150,local_150,p
                                                                         ,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x218,
                                                                                                                                            
                                                  "EC_POINT_add(group, R, R, Q, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_is_at_infinity(group,local_150)
                                                    ;
                                                    iVar1 = test_true("test/ectest.c",0x219,
                                                                                                                                            
                                                  "EC_POINT_is_at_infinity(group, R)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_is_at_infinity(group,p);
                                                    iVar1 = test_false("test/ectest.c",0x21a,
                                                                                                                                              
                                                  "EC_POINT_is_at_infinity(group, Q)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    test_note("combined multiplication ...");
                                                    local_e8 = p;
                                                    pEStack_e0 = p;
                                                    local_d8 = p;
                                                    pEStack_d0 = p;
                                                    iVar1 = EC_GROUP_get_order(group,local_f0,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x224,
                                                                                                                                            
                                                  "EC_GROUP_get_order(group, z, ctx)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    pBVar5 = BN_value_one();
                                                    iVar1 = BN_add(local_f8,local_f0,pBVar5);
                                                    iVar1 = test_true("test/ectest.c",0x225,
                                                                      "BN_add(y, z, BN_value_one())"
                                                                      ,iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      iVar1 = test_BN_even("test/ectest.c",0x226,
                                                                           &_LC383,local_f8);
                                                      if (iVar1 != 0) {
                                                        iVar1 = BN_rshift1(local_f8,local_f8);
                                                        iVar1 = test_true("test/ectest.c",0x227,
                                                                          "BN_rshift1(y, y)",
                                                                          iVar1 != 0);
                                                        if (iVar1 != 0) {
                                                          local_c8 = local_f8;
                                                          pBStack_c0 = local_f8;
                                                          iVar1 = EC_POINTs_mul(group,point,
                                                                                (BIGNUM *)0x0,2,
                                                                                &local_e8,&local_c8,
                                                                                ctx);
                                                          iVar1 = test_true("test/ectest.c",0x22e,
                                                                                                                                                        
                                                  "EC_POINTs_mul(group, P, NULL, 2, points, scalars, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINTs_mul(group,local_150,local_f0,2
                                                                          ,&local_e8,&local_c8,ctx);
                                                    iVar1 = test_true("test/ectest.c",0x22f,
                                                                                                                                            
                                                  "EC_POINTs_mul(group, R, z, 2, points, scalars, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_cmp(group,point,local_150,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x230,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(group, P, R, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_cmp(group,local_150,p,ctx);
                                                    iVar1 = test_int_eq("test/ectest.c",0x231,&_LC4,
                                                                                                                                                
                                                  "EC_POINT_cmp(group, R, Q, ctx)",0,iVar1);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_num_bits(local_f8);
                                                    iVar1 = BN_rand(local_f8,iVar1,0,0);
                                                    iVar1 = test_true("test/ectest.c",0x232,
                                                                                                                                            
                                                  "BN_rand(y, BN_num_bits(y), 0, 0)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_add(local_f0,local_f0,local_f8);
                                                    iVar1 = test_true("test/ectest.c",0x233,
                                                                      "BN_add(z, z, y)",iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      BN_set_negative(local_f0,1);
                                                      local_c8 = local_f8;
                                                      pBStack_c0 = local_f0;
                                                      iVar1 = EC_POINTs_mul(group,point,
                                                                            (BIGNUM *)0x0,2,
                                                                            &local_e8,&local_c8,ctx)
                                                      ;
                                                      iVar1 = test_true("test/ectest.c",0x239,
                                                                                                                                                
                                                  "EC_POINTs_mul(group, P, NULL, 2, points, scalars, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    EC_POINT_is_at_infinity(group,point);
                                                    iVar1 = test_true("test/ectest.c",0x23a,
                                                                                                                                            
                                                  "EC_POINT_is_at_infinity(group, P)");
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_num_bits(local_f8);
                                                    iVar1 = BN_rand(local_100,iVar1 + -1,0,0);
                                                    iVar1 = test_true("test/ectest.c",0x23b,
                                                                                                                                            
                                                  "BN_rand(x, BN_num_bits(y) - 1, 0, 0)",iVar1 != 0)
                                                  ;
                                                  if (iVar1 != 0) {
                                                    iVar1 = BN_add(local_f0,local_100,local_f8);
                                                    iVar1 = test_true("test/ectest.c",0x23c,
                                                                      "BN_add(z, x, y)",iVar1 != 0);
                                                    if (iVar1 != 0) {
                                                      BN_set_negative(local_f0,1);
                                                      local_b8 = local_f0;
                                                      local_c8 = local_100;
                                                      pBStack_c0 = local_f8;
                                                      pBVar5 = BN_new();
                                                      iVar1 = test_ptr("test/ectest.c",0x243,
                                                                       "scalar3 = BN_new()",pBVar5);
                                                      if (iVar1 != 0) {
                                                        BN_zero_ex();
                                                        local_b0 = pBVar5;
                                                        iVar1 = EC_POINTs_mul(group,point,
                                                                              (BIGNUM *)0x0,4,
                                                                              &local_e8,&local_c8,
                                                                              ctx);
                                                        iVar1 = test_true("test/ectest.c",0x248,
                                                                                                                                                    
                                                  "EC_POINTs_mul(group, P, NULL, 4, points, scalars, ctx)"
                                                  ,iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    iVar1 = EC_POINT_is_at_infinity(group,point);
                                                    iVar1 = test_true("test/ectest.c",0x249,
                                                                                                                                            
                                                  "EC_POINT_is_at_infinity(group, P)",iVar1 != 0);
                                                  if (iVar1 != 0) {
                                                    test_note(&_LC544);
                                                    iVar1 = 1;
                                                    goto LAB_0010967b;
                                                  }
                                                  }
                                                  }
                                                  iVar1 = 0;
                                                  goto LAB_0010967b;
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
LAB_00109bab:
                                        iVar1 = 0;
                                        pBVar5 = (BIGNUM *)0x0;
                                        goto LAB_0010967b;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        iVar1 = 0;
                        pBVar5 = (BIGNUM *)0x0;
                        local_158 = (BIGNUM *)0x0;
                      }
                    }
                    goto LAB_0010967b;
                  }
                }
                local_158 = (BIGNUM *)0x0;
                p = (EC_POINT *)0x0;
                point = (EC_POINT *)0x0;
                pBVar5 = (BIGNUM *)0x0;
                local_150 = (EC_POINT *)0x0;
                goto LAB_0010967b;
              }
            }
          }
        }
      }
    }
  }
  local_158 = (BIGNUM *)0x0;
  iVar1 = 0;
  p = (EC_POINT *)0x0;
  point = (EC_POINT *)0x0;
  local_150 = (EC_POINT *)0x0;
  group = (EC_GROUP *)0x0;
  pBVar5 = (BIGNUM *)0x0;
LAB_0010967b:
  BN_CTX_free(ctx);
  BN_free(local_118);
  BN_free(local_110);
  BN_free(local_108);
  EC_GROUP_free(group);
  EC_POINT_free(point);
  EC_POINT_free(p);
  EC_POINT_free(local_150);
  BN_free(local_100);
  BN_free(local_f8);
  BN_free(local_f0);
  BN_free(local_158);
  BN_free(pBVar5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint cardinality_test(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  BN_CTX *ctx;
  EC_GROUP *group;
  BIGNUM *p;
  BIGNUM *pBVar5;
  BIGNUM *b;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *a;
  BIGNUM *cofactor;
  BIGNUM *cofactor_00;
  EC_POINT *pEVar8;
  BIGNUM *pBVar9;
  EC_GROUP *group_00;
  
  iVar2 = *(int *)((long)param_1 * 0x10 + curves);
  pcVar4 = OBJ_nid2sn(iVar2);
  test_info("test/ectest.c",0x8e3,"Curve %s cardinality test",pcVar4);
  ctx = BN_CTX_new();
  iVar1 = test_ptr("test/ectest.c",0x8e5,"ctx = BN_CTX_new()",ctx);
  if (iVar1 == 0) {
LAB_0010bed4:
    BN_CTX_free(ctx);
    return 0;
  }
  group = EC_GROUP_new_by_curve_name(iVar2);
  iVar2 = test_ptr("test/ectest.c",0x8e6,"g1 = EC_GROUP_new_by_curve_name(nid)",group);
  if (iVar2 == 0) goto LAB_0010bed4;
  iVar2 = EC_GROUP_get_field_type(group);
  BN_CTX_start(ctx);
  p = BN_CTX_get(ctx);
  pBVar5 = BN_CTX_get(ctx);
  b = BN_CTX_get(ctx);
  pBVar6 = BN_CTX_get(ctx);
  pBVar7 = BN_CTX_get(ctx);
  a = BN_CTX_get(ctx);
  cofactor = BN_CTX_get(ctx);
  cofactor_00 = BN_CTX_get(ctx);
  iVar1 = test_ptr("test/ectest.c",0x8f6,"g2_cf = BN_CTX_get(ctx)",cofactor_00);
  if (iVar1 != 0) {
    iVar1 = EC_GROUP_get_curve(group,p,pBVar5,b,ctx);
    iVar1 = test_true("test/ectest.c",0x8f8,"EC_GROUP_get_curve(g1, g1_p, g1_a, g1_b, ctx)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      pEVar8 = EC_GROUP_get0_generator(group);
      iVar1 = EC_POINT_get_affine_coordinates(group,pEVar8,pBVar6,pBVar7,ctx);
      iVar1 = test_true("test/ectest.c",0x8f9,
                        "EC_POINT_get_affine_coordinates(g1, EC_GROUP_get0_generator(g1), g1_x, g1_y, ctx)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        pBVar9 = (BIGNUM *)EC_GROUP_get0_order(group);
        pBVar9 = BN_copy(a,pBVar9);
        iVar1 = test_true("test/ectest.c",0x8fb,"BN_copy(g1_order, EC_GROUP_get0_order(g1))",
                          pBVar9 != (BIGNUM *)0x0);
        if (iVar1 != 0) {
          iVar1 = EC_GROUP_get_cofactor(group,cofactor,ctx);
          iVar1 = test_true("test/ectest.c",0x8fc,"EC_GROUP_get_cofactor(g1, g1_cf, ctx)",iVar1 != 0
                           );
          if (iVar1 != 0) {
            if (iVar2 == 0x197) {
              group_00 = (EC_GROUP *)EC_GROUP_new_curve_GF2m();
            }
            else {
              group_00 = EC_GROUP_new_curve_GFp(p,pBVar5,b,ctx);
            }
            uVar3 = test_ptr("test/ectest.c",0x8ff,
                             "g2 = (is_binary) ? EC_GROUP_new_curve_GF2m(g1_p, g1_a, g1_b, ctx) : EC_GROUP_new_curve_GFp(g1_p, g1_a, g1_b, ctx)"
                             ,group_00);
            pEVar8 = (EC_POINT *)0x0;
            if (uVar3 != 0) {
              pEVar8 = EC_POINT_new(group_00);
              iVar2 = test_ptr("test/ectest.c",0x906,"g2_gen = EC_POINT_new(g2)",pEVar8);
              if (iVar2 != 0) {
                EC_POINT_set_affine_coordinates(group_00,pEVar8,pBVar6,pBVar7,ctx);
                iVar2 = test_true("test/ectest.c",0x907,
                                  "EC_POINT_set_affine_coordinates(g2, g2_gen, g1_x, g1_y, ctx)");
                if (iVar2 != 0) {
                  iVar2 = EC_GROUP_set_generator(group_00,pEVar8,a,(BIGNUM *)0x0);
                  iVar2 = test_true("test/ectest.c",0x909,
                                    "EC_GROUP_set_generator(g2, g2_gen, g1_order, NULL)",iVar2 != 0)
                  ;
                  if (iVar2 != 0) {
                    iVar2 = EC_GROUP_get_cofactor(group_00,cofactor_00,ctx);
                    iVar2 = test_true("test/ectest.c",0x90a,"EC_GROUP_get_cofactor(g2, g2_cf, ctx)",
                                      iVar2 != 0);
                    if ((iVar2 != 0) &&
                       (iVar2 = test_BN_eq("test/ectest.c",0x90b,"g1_cf","g2_cf",cofactor,
                                           cofactor_00), iVar2 != 0)) {
                      iVar2 = BN_set_word(cofactor_00,0);
                      iVar2 = test_true("test/ectest.c",0x90d,"BN_set_word(g2_cf, 0)",iVar2 != 0);
                      if (iVar2 != 0) {
                        iVar2 = EC_GROUP_set_generator(group_00,pEVar8,a,cofactor_00);
                        iVar2 = test_true("test/ectest.c",0x90e,
                                          "EC_GROUP_set_generator(g2, g2_gen, g1_order, g2_cf)",
                                          iVar2 != 0);
                        if (iVar2 != 0) {
                          iVar2 = EC_GROUP_get_cofactor(group_00,cofactor_00,ctx);
                          iVar2 = test_true("test/ectest.c",0x90f,
                                            "EC_GROUP_get_cofactor(g2, g2_cf, ctx)",iVar2 != 0);
                          if ((iVar2 != 0) &&
                             (iVar2 = test_BN_eq("test/ectest.c",0x910,"g1_cf","g2_cf",cofactor,
                                                 cofactor_00), iVar2 != 0)) {
                            iVar2 = BN_set_word(cofactor_00,0);
                            iVar2 = test_true("test/ectest.c",0x912,"BN_set_word(g2_cf, 0)",
                                              iVar2 != 0);
                            if (iVar2 != 0) {
                              pBVar5 = BN_value_one();
                              iVar2 = BN_sub(cofactor_00,cofactor_00,pBVar5);
                              iVar2 = test_true("test/ectest.c",0x913,
                                                "BN_sub(g2_cf, g2_cf, BN_value_one())",iVar2 != 0);
                              if (iVar2 != 0) {
                                EC_GROUP_set_generator(group_00,pEVar8,a,cofactor_00);
                                iVar2 = test_false("test/ectest.c",0x914,
                                                                                                      
                                                  "EC_GROUP_set_generator(g2, g2_gen, g1_order, g2_cf)"
                                                  );
                                if (iVar2 != 0) {
                                  iVar2 = EC_GROUP_set_generator
                                                    (group_00,pEVar8,(BIGNUM *)0x0,(BIGNUM *)0x0);
                                  iVar2 = test_false("test/ectest.c",0x916,
                                                                                                          
                                                  "EC_GROUP_set_generator(g2, g2_gen, NULL, NULL)",
                                                  iVar2 != 0);
                                  if (iVar2 != 0) {
                                    BN_set_word(a,0);
                                    iVar2 = test_true("test/ectest.c",0x918,
                                                      "BN_set_word(g1_order, 0)");
                                    if (iVar2 != 0) {
                                      iVar2 = EC_GROUP_set_generator
                                                        (group_00,pEVar8,a,(BIGNUM *)0x0);
                                      iVar2 = test_false("test/ectest.c",0x919,
                                                                                                                  
                                                  "EC_GROUP_set_generator(g2, g2_gen, g1_order, NULL)"
                                                  ,iVar2 != 0);
                                      if (iVar2 != 0) {
                                        iVar2 = BN_set_word(cofactor_00,0);
                                        iVar2 = test_true("test/ectest.c",0x91b,
                                                          "BN_set_word(g2_cf, 0)",iVar2 != 0);
                                        if (iVar2 != 0) {
                                          pBVar5 = BN_value_one();
                                          BN_sub(cofactor_00,cofactor_00,pBVar5);
                                          iVar2 = test_true("test/ectest.c",0x91c,
                                                            "BN_sub(g2_cf, g2_cf, BN_value_one())");
                                          if (iVar2 != 0) {
                                            iVar2 = EC_GROUP_set_generator
                                                              (group_00,pEVar8,a,(BIGNUM *)0x0);
                                            iVar2 = test_false("test/ectest.c",0x91d,
                                                                                                                              
                                                  "EC_GROUP_set_generator(g2, g2_gen, g1_order, NULL)"
                                                  ,iVar2 != 0);
                                            if (iVar2 != 0) {
                                              BN_lshift(a,p,2);
                                              iVar2 = test_true("test/ectest.c",0x91f,
                                                                "BN_lshift(g1_order, g1_p, 2)");
                                              if (iVar2 != 0) {
                                                iVar2 = EC_GROUP_set_generator
                                                                  (group_00,pEVar8,a,(BIGNUM *)0x0);
                                                iVar2 = test_false("test/ectest.c",0x920,
                                                                                                                                      
                                                  "EC_GROUP_set_generator(g2, g2_gen, g1_order, NULL)"
                                                  ,iVar2 != 0);
                                                uVar3 = (uint)(iVar2 != 0);
                                                goto LAB_0010bf91;
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
              uVar3 = 0;
            }
            goto LAB_0010bf91;
          }
        }
      }
    }
  }
  pEVar8 = (EC_POINT *)0x0;
  group_00 = (EC_GROUP *)0x0;
  uVar3 = 0;
LAB_0010bf91:
  EC_POINT_free(pEVar8);
  EC_GROUP_free(group);
  EC_GROUP_free(group_00);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return uVar3;
}



bool cofactor_range_test(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  EC_GROUP *local_40;
  BIGNUM *local_38;
  uchar *local_30;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (EC_GROUP *)0x0;
  local_30 = params_cf_fail;
  local_38 = (BIGNUM *)0x0;
  local_28 = params_cf_pass;
  local_40 = d2i_ECPKParameters((EC_GROUP **)0x0,&local_30,0xd0);
  iVar1 = test_ptr("test/ectest.c",0x8c5,
                   "group = d2i_ECPKParameters(NULL, &b1, sizeof(params_cf_fail))",local_40);
  if (iVar1 != 0) {
    uVar2 = EC_GROUP_get0_cofactor(local_40);
    iVar1 = test_BN_eq_zero("test/ectest.c",0x8c6,"EC_GROUP_get0_cofactor(group)",uVar2);
    if (iVar1 != 0) {
      local_40 = d2i_ECPKParameters(&local_40,&local_28,0xd0);
      iVar1 = test_ptr("test/ectest.c",0x8c7,
                       "group = d2i_ECPKParameters(&group, &b2, sizeof(params_cf_pass))",local_40);
      if (iVar1 != 0) {
        iVar1 = BN_hex2bn(&local_38,"12bc94785251297abfafddf1565100da");
        iVar1 = test_int_gt("test/ectest.c",0x8c9,
                            "BN_hex2bn(&cf, \"12bc94785251297abfafddf1565100da\")",&_LC4,iVar1,0);
        if (iVar1 != 0) {
          uVar2 = EC_GROUP_get0_cofactor(local_40);
          iVar1 = test_BN_eq("test/ectest.c",0x8ca,&_LC569,"EC_GROUP_get0_cofactor(group)",local_38,
                             uVar2);
          bVar3 = iVar1 != 0;
          goto LAB_0010c5ce;
        }
      }
    }
  }
  bVar3 = false;
LAB_0010c5ce:
  BN_free(local_38);
  EC_GROUP_free(local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ossl_parameter_test(void)

{
  int iVar1;
  uint uVar2;
  BN_CTX *ctx;
  EC_GROUP *a;
  undefined8 uVar3;
  EC_GROUP *b;
  undefined8 uVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  uchar *puVar8;
  size_t sVar9;
  long lVar10;
  EC_POINT *pEVar11;
  size_t sVar12;
  undefined8 local_78;
  EC_GROUP *local_70;
  EC_GROUP *local_68;
  EC_GROUP *local_60;
  undefined8 local_58;
  undefined8 local_50;
  uchar *local_48;
  
  ctx = BN_CTX_new();
  iVar1 = test_ptr("test/ectest.c",0x81b,"bn_ctx = BN_CTX_new()",ctx);
  if (iVar1 == 0) {
    local_78 = 0;
    uVar3 = 0;
    b = (EC_GROUP *)0x0;
    local_48 = (uchar *)0x0;
    a = (EC_GROUP *)0x0;
    local_58 = 0;
    local_50 = 0;
    local_70 = (EC_GROUP *)0x0;
    local_60 = (EC_GROUP *)0x0;
    local_68 = (EC_GROUP *)0x0;
    uVar2 = 0;
    goto LAB_0010c76a;
  }
  a = EC_GROUP_new_by_curve_name(0x2cb);
  iVar1 = test_ptr("test/ectest.c",0x81f,"group_nmd = EC_GROUP_new_by_curve_name(NID_secp384r1)",a);
  if (iVar1 == 0) {
    local_78 = 0;
    uVar3 = 0;
    b = (EC_GROUP *)0x0;
    local_48 = (uchar *)0x0;
    local_58 = 0;
    local_50 = 0;
    local_70 = (EC_GROUP *)0x0;
    local_60 = (EC_GROUP *)0x0;
    local_68 = (EC_GROUP *)0x0;
    uVar2 = 0;
    goto LAB_0010c76a;
  }
  uVar3 = EC_GROUP_to_params(a,0,0,0);
  iVar1 = test_ptr("test/ectest.c",0x821,
                   "params_nmd = EC_GROUP_to_params( group_nmd, NULL, NULL, NULL)",uVar3);
  if (iVar1 == 0) {
    local_78 = 0;
    b = (EC_GROUP *)0x0;
    local_48 = (uchar *)0x0;
    local_58 = 0;
    local_50 = 0;
    local_70 = (EC_GROUP *)0x0;
    local_60 = (EC_GROUP *)0x0;
    local_68 = (EC_GROUP *)0x0;
    uVar2 = 0;
    goto LAB_0010c76a;
  }
  b = (EC_GROUP *)EC_GROUP_new_from_params(uVar3,0,0);
  uVar2 = test_ptr("test/ectest.c",0x823,
                   "group_nmd2 = EC_GROUP_new_from_params( params_nmd, NULL, NULL)",b);
  if (uVar2 != 0) {
    iVar1 = EC_GROUP_cmp(a,b,(BN_CTX *)0x0);
    uVar2 = test_int_eq("test/ectest.c",0x825,"EC_GROUP_cmp(group_nmd, group_nmd2, NULL)",&_LC4,
                        iVar1,0);
    if (uVar2 != 0) {
      uVar4 = EC_GROUP_to_params(a,0,0,ctx);
      iVar1 = test_ptr("test/ectest.c",0x827,
                       "params_nmd2 = EC_GROUP_to_params( group_nmd, NULL, NULL, bn_ctx)",uVar4);
      if (iVar1 == 0) {
        local_78 = 0;
        local_48 = (uchar *)0x0;
        local_58 = 0;
        local_50 = 0;
        local_70 = (EC_GROUP *)0x0;
        local_60 = (EC_GROUP *)0x0;
        local_68 = (EC_GROUP *)0x0;
        uVar2 = 0;
        goto LAB_0010c76a;
      }
      local_68 = (EC_GROUP *)EC_GROUP_new_from_params(uVar4,0,0);
      uVar2 = test_ptr("test/ectest.c",0x829,
                       "group_nmd3 = EC_GROUP_new_from_params( params_nmd2, NULL, NULL)",local_68);
      if (uVar2 == 0) {
LAB_0010cda8:
        local_78 = 0;
      }
      else {
        iVar1 = EC_GROUP_cmp(a,local_68,(BN_CTX *)0x0);
        uVar2 = test_int_eq("test/ectest.c",0x82b,"EC_GROUP_cmp(group_nmd, group_nmd3, NULL)",&_LC4,
                            iVar1,0);
        if (uVar2 == 0) goto LAB_0010cda8;
        local_78 = OSSL_PARAM_BLD_new();
        iVar1 = test_ptr("test/ectest.c",0x82f,"bld = OSSL_PARAM_BLD_new()",local_78);
        if (iVar1 == 0) {
LAB_0010ca6d:
          uVar2 = 0;
        }
        else {
          BN_CTX_start(ctx);
          pBVar5 = BN_CTX_get(ctx);
          pBVar6 = BN_CTX_get(ctx);
          pBVar7 = BN_CTX_get(ctx);
          iVar1 = EC_GROUP_get_curve(a,pBVar5,pBVar6,pBVar7);
          iVar1 = test_true("test/ectest.c",0x837,"EC_GROUP_get_curve(group_nmd, p, a, b, bn_ctx)",
                            iVar1 != 0);
          if (iVar1 == 0) goto LAB_0010ca6d;
          iVar1 = OSSL_PARAM_BLD_push_utf8_string(local_78,"field-type","prime-field",0);
          uVar2 = test_true("test/ectest.c",0x838,
                            "OSSL_PARAM_BLD_push_utf8_string( bld, OSSL_PKEY_PARAM_EC_FIELD_TYPE, SN_X9_62_prime_field, 0)"
                            ,iVar1 != 0);
          if (uVar2 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC106,pBVar5);
            iVar1 = test_true("test/ectest.c",0x83a,
                              "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_P, p)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC108,pBVar6);
              iVar1 = test_true("test/ectest.c",0x83b,
                                "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_A, a)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = OSSL_PARAM_BLD_push_BN(local_78,&_LC100,pBVar7);
                iVar1 = test_true("test/ectest.c",0x83c,
                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_EC_B, b)",iVar1 != 0)
                ;
                if (iVar1 != 0) {
                  puVar8 = EC_GROUP_get0_seed(a);
                  if (puVar8 != (uchar *)0x0) {
                    sVar9 = EC_GROUP_get_seed_len(a);
                    puVar8 = EC_GROUP_get0_seed(a);
                    iVar1 = OSSL_PARAM_BLD_push_octet_string(local_78,&_LC111,puVar8,sVar9);
                    iVar1 = test_true("test/ectest.c",0x840,
                                      "OSSL_PARAM_BLD_push_octet_string( bld, OSSL_PKEY_PARAM_EC_SEED, EC_GROUP_get0_seed(group_nmd), EC_GROUP_get_seed_len(group_nmd))"
                                      ,iVar1 != 0);
                    if (iVar1 == 0) goto LAB_0010ca6d;
                  }
                  lVar10 = EC_GROUP_get0_cofactor(a);
                  if (lVar10 != 0) {
                    uVar4 = EC_GROUP_get0_cofactor(a);
                    iVar1 = OSSL_PARAM_BLD_push_BN(local_78,"cofactor",uVar4);
                    iVar1 = test_true("test/ectest.c",0x846,
                                      "OSSL_PARAM_BLD_push_BN( bld, OSSL_PKEY_PARAM_EC_COFACTOR, EC_GROUP_get0_cofactor(group_nmd))"
                                      ,iVar1 != 0);
                    if (iVar1 == 0) goto LAB_0010ca6d;
                  }
                  EC_GROUP_get0_generator(a);
                  iVar1 = test_ptr("test/ectest.c",0x84c,
                                   "group_gen = EC_GROUP_get0_generator(group_nmd)");
                  if (iVar1 != 0) {
                    pEVar11 = EC_GROUP_get0_generator(a);
                    sVar9 = EC_POINT_point2oct(a,pEVar11,POINT_CONVERSION_UNCOMPRESSED,(uchar *)0x0,
                                               0,ctx);
                    uVar2 = test_size_t_gt("test/ectest.c",0x84d,
                                           "bsize = EC_POINT_point2oct( group_nmd, EC_GROUP_get0_generator(group_nmd), POINT_CONVERSION_UNCOMPRESSED, NULL, 0, bn_ctx)"
                                           ,&_LC4,sVar9,0);
                    if (uVar2 != 0) {
                      local_48 = (uchar *)CRYPTO_malloc((int)sVar9,"test/ectest.c",0x850);
                      iVar1 = test_ptr("test/ectest.c",0x850,"buf2 = OPENSSL_malloc(bsize)",local_48
                                      );
                      if (iVar1 != 0) {
                        pEVar11 = EC_GROUP_get0_generator(a);
                        sVar12 = EC_POINT_point2oct(a,pEVar11,POINT_CONVERSION_UNCOMPRESSED,local_48
                                                    ,sVar9,ctx);
                        iVar1 = test_size_t_eq("test/ectest.c",0x851,
                                               "EC_POINT_point2oct( group_nmd, EC_GROUP_get0_generator(group_nmd), POINT_CONVERSION_UNCOMPRESSED, buf2, bsize, bn_ctx)"
                                               ,"bsize",sVar12,sVar9);
                        if (iVar1 == 0) {
                          local_58 = 0;
                          local_50 = 0;
                          local_70 = (EC_GROUP *)0x0;
                          local_60 = (EC_GROUP *)0x0;
                          uVar2 = 0;
                          goto LAB_0010c76a;
                        }
                        iVar1 = OSSL_PARAM_BLD_push_octet_string
                                          (local_78,"generator",local_48,sVar9);
                        iVar1 = test_true("test/ectest.c",0x854,
                                          "OSSL_PARAM_BLD_push_octet_string( bld, OSSL_PKEY_PARAM_EC_GENERATOR, buf2, bsize)"
                                          ,iVar1 != 0);
                        if (iVar1 != 0) {
                          uVar4 = EC_GROUP_get0_order(a);
                          iVar1 = OSSL_PARAM_BLD_push_BN(local_78,"order",uVar4);
                          iVar1 = test_true("test/ectest.c",0x856,
                                            "OSSL_PARAM_BLD_push_BN( bld, OSSL_PKEY_PARAM_EC_ORDER, EC_GROUP_get0_order(group_nmd))"
                                            ,iVar1 != 0);
                          if (iVar1 != 0) {
                            local_50 = OSSL_PARAM_BLD_to_param(local_78);
                            iVar1 = test_ptr("test/ectest.c",0x85a,
                                             "params_exp = OSSL_PARAM_BLD_to_param(bld)");
                            if (iVar1 == 0) {
                              local_58 = 0;
                              local_70 = (EC_GROUP *)0x0;
                              local_60 = (EC_GROUP *)0x0;
                              uVar2 = 0;
                            }
                            else {
                              local_60 = (EC_GROUP *)EC_GROUP_new_from_params(local_50,0,0);
                              iVar1 = test_ptr("test/ectest.c",0x85b,
                                               "group_exp = EC_GROUP_new_from_params(params_exp, NULL, NULL)"
                                               ,local_60);
                              if (iVar1 == 0) {
                                local_58 = 0;
                                local_70 = (EC_GROUP *)0x0;
                                uVar2 = 0;
                              }
                              else {
                                local_58 = EC_GROUP_to_params(local_60,0,0,0);
                                uVar2 = test_ptr("test/ectest.c",0x85d,
                                                 "params_exp2 = EC_GROUP_to_params(group_exp, NULL, NULL, NULL)"
                                                 ,local_58);
                                local_70 = (EC_GROUP *)0x0;
                                if (uVar2 != 0) {
                                  local_70 = (EC_GROUP *)EC_GROUP_new_from_params(local_58,0,0);
                                  uVar2 = test_ptr("test/ectest.c",0x85f,
                                                                                                      
                                                  "group_exp2 = EC_GROUP_new_from_params(params_exp2, NULL, NULL)"
                                                  ,local_70);
                                  if (uVar2 != 0) {
                                    iVar1 = EC_GROUP_cmp(local_60,local_70,(BN_CTX *)0x0);
                                    iVar1 = test_int_eq("test/ectest.c",0x861,
                                                        "EC_GROUP_cmp(group_exp, group_exp2, NULL)",
                                                        &_LC4,iVar1,0);
                                    uVar2 = (uint)(iVar1 != 0);
                                  }
                                }
                              }
                            }
                            goto LAB_0010c76a;
                          }
                        }
                      }
                      uVar2 = 0;
                      local_58 = 0;
                      local_50 = 0;
                      local_70 = (EC_GROUP *)0x0;
                      local_60 = (EC_GROUP *)0x0;
                      goto LAB_0010c76a;
                    }
                    goto LAB_0010ca70;
                  }
                }
              }
            }
            goto LAB_0010ca6d;
          }
        }
      }
LAB_0010ca70:
      local_48 = (uchar *)0x0;
      local_58 = 0;
      local_50 = 0;
      local_70 = (EC_GROUP *)0x0;
      local_60 = (EC_GROUP *)0x0;
      goto LAB_0010c76a;
    }
  }
  local_78 = 0;
  local_48 = (uchar *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_70 = (EC_GROUP *)0x0;
  local_60 = (EC_GROUP *)0x0;
  local_68 = (EC_GROUP *)0x0;
LAB_0010c76a:
  EC_GROUP_free(a);
  EC_GROUP_free(b);
  EC_GROUP_free(local_68);
  OSSL_PARAM_free(uVar3);
  OSSL_PARAM_free();
  CRYPTO_free((void *)0x0);
  EC_GROUP_free(local_60);
  EC_GROUP_free(local_70);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  CRYPTO_free(local_48);
  OSSL_PARAM_BLD_free(local_78);
  OSSL_PARAM_free(local_50);
  OSSL_PARAM_free(local_58);
  return uVar2;
}



uint parameter_test(void)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *a;
  undefined8 uVar3;
  EC_GROUP *b;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  a = EC_GROUP_new_by_curve_name(0x2cb);
  iVar1 = test_ptr("test/ectest.c",0x7e5,"group = EC_GROUP_new_by_curve_name(NID_secp384r1)",a);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    b = (EC_GROUP *)0x0;
  }
  else {
    b = (EC_GROUP *)0x0;
    uVar3 = EC_GROUP_get_ecparameters(a,0);
    uVar2 = test_ptr("test/ectest.c",0x7e6,"ecparameters = EC_GROUP_get_ecparameters(group, NULL)",
                     uVar3);
    if (uVar2 != 0) {
      b = (EC_GROUP *)EC_GROUP_new_from_ecparameters(uVar3);
      uVar2 = test_ptr("test/ectest.c",0x7e7,"group2 = EC_GROUP_new_from_ecparameters(ecparameters)"
                       ,b);
      if (uVar2 != 0) {
        iVar1 = EC_GROUP_cmp(a,b,(BN_CTX *)0x0);
        uVar2 = test_int_eq("test/ectest.c",0x7e8,"EC_GROUP_cmp(group, group2, NULL)",&_LC4,iVar1,0)
        ;
        if (uVar2 != 0) {
          EC_GROUP_free(a);
          a = EC_GROUP_new_by_curve_name(0x2cc);
          iVar1 = test_ptr("test/ectest.c",0x7ef,"group = EC_GROUP_new_by_curve_name(NID_secp521r1)"
                           ,a);
          if (iVar1 != 0) {
            uVar2 = i2d_ECPKParameters(a,&local_48);
            iVar1 = test_true("test/ectest.c",0x7f0,"(len = i2d_ECPKParameters(group, &buf)) >= 0",
                              ~uVar2 >> 0x1f);
            if (iVar1 != 0) {
              iVar1 = test_mem_eq("test/ectest.c",0x7f1,&_LC131,"p521_named",local_48,
                                  (long)(int)uVar2,&p521_named,7);
              if (iVar1 != 0) {
                CRYPTO_free(local_48);
                local_48 = (uchar *)0x0;
                EC_GROUP_set_asn1_flag(a,0);
                uVar2 = i2d_ECPKParameters(a,&local_48);
                iVar1 = test_true("test/ectest.c",0x7fc,
                                  "(len = i2d_ECPKParameters(group, &buf)) >= 0",~uVar2 >> 0x1f);
                if (iVar1 != 0) {
                  iVar1 = test_mem_eq("test/ectest.c",0x7fd,&_LC131,"p521_explicit",local_48,
                                      (long)(int)uVar2,p521_explicit,0x1c7);
                  uVar2 = (uint)(iVar1 != 0);
                  goto LAB_0010d032;
                }
              }
            }
          }
          uVar2 = 0;
        }
      }
    }
  }
LAB_0010d032:
  EC_GROUP_free(a);
  EC_GROUP_free(b);
  ECPARAMETERS_free(uVar3);
  CRYPTO_free(local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setup_tests(void)

{
  int iVar1;
  size_t sVar2;
  
  _crv_len = EC_get_builtin_curves((EC_builtin_curve *)0x0,0);
  curves = (EC_builtin_curve *)CRYPTO_malloc((int)(_crv_len << 4),"test/ectest.c",0xc35);
  iVar1 = test_ptr("test/ectest.c",0xc35,"curves = OPENSSL_malloc(sizeof(*curves) * crv_len)",curves
                  );
  if (iVar1 != 0) {
    sVar2 = EC_get_builtin_curves(curves,_crv_len);
    iVar1 = test_true("test/ectest.c",0xc36,"EC_get_builtin_curves(curves, crv_len)",sVar2 != 0);
    if (iVar1 != 0) {
      add_test("parameter_test",parameter_test);
      add_test("ossl_parameter_test",ossl_parameter_test);
      add_test("cofactor_range_test",cofactor_range_test);
      add_all_tests("cardinality_test",cardinality_test,_crv_len & 0xffffffff,1);
      add_test("prime_field_tests",prime_field_tests);
      add_test("hybrid_point_encoding_test",hybrid_point_encoding_test);
      add_test("char2_field_tests",char2_field_tests);
      add_all_tests("char2_curve_test",char2_curve_test,10,1);
      add_all_tests("nistp_single_test",nistp_single_test,3,1);
      add_all_tests("internal_curve_test",internal_curve_test,_crv_len & 0xffffffff,1);
      add_all_tests("internal_curve_test_method",internal_curve_test_method,_crv_len & 0xffffffff,1)
      ;
      add_test("group_field_test",group_field_test);
      add_all_tests("check_named_curve_test",check_named_curve_test,_crv_len & 0xffffffff,1);
      add_all_tests("check_named_curve_lookup_test",check_named_curve_lookup_test,
                    _crv_len & 0xffffffff,1);
      add_all_tests("check_ec_key_field_public_range_test",check_ec_key_field_public_range_test,
                    _crv_len & 0xffffffff,1);
      add_all_tests("check_named_curve_from_ecparameters",check_named_curve_from_ecparameters,
                    _crv_len & 0xffffffff,1);
      add_all_tests("ec_point_hex2point_test",ec_point_hex2point_test,_crv_len & 0xffffffff,1);
      add_all_tests("custom_generator_test",custom_generator_test,_crv_len & 0xffffffff,1);
      add_all_tests("custom_params_test",custom_params_test,_crv_len & 0xffffffff,1);
      add_test("ec_d2i_publickey_test",ec_d2i_publickey_test);
      return 1;
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  CRYPTO_free(curves);
  return;
}


