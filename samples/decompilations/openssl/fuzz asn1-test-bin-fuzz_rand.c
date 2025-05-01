
undefined8 fuzz_rand_instantiate(undefined4 *param_1)

{
  *param_1 = 1;
  return 1;
}



undefined8 fuzz_rand_uninstantiate(undefined4 *param_1)

{
  *param_1 = 0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fuzz_rand_generate(undefined8 param_1,undefined1 (*param_2) [16],ulong param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  ushort uVar20;
  ulong uVar21;
  undefined1 in_XMM0 [16];
  undefined1 auVar22 [16];
  
  cVar15 = UNK_0010058f;
  cVar14 = UNK_0010058e;
  cVar13 = UNK_0010058d;
  cVar12 = UNK_0010058c;
  cVar11 = UNK_0010058b;
  cVar10 = UNK_0010058a;
  cVar9 = UNK_00100589;
  cVar8 = UNK_00100588;
  cVar7 = UNK_00100587;
  cVar6 = UNK_00100586;
  cVar5 = UNK_00100585;
  cVar4 = UNK_00100584;
  cVar3 = UNK_00100583;
  cVar2 = UNK_00100582;
  cVar1 = UNK_00100581;
  cVar16 = _LC1;
  if (param_3 == 0) {
    return 1;
  }
  if (param_3 - 1 < 0xf) {
    uVar19 = 0;
    cVar16 = '\x01';
  }
  else {
    uVar19 = param_3 & 0xfffffffffffffff0;
    pauVar17 = param_2;
    auVar22 = __LC0;
    do {
      pauVar18 = pauVar17 + 1;
      in_XMM0[0] = auVar22[0] + cVar16;
      in_XMM0[1] = auVar22[1] + cVar1;
      in_XMM0[2] = auVar22[2] + cVar2;
      in_XMM0[3] = auVar22[3] + cVar3;
      in_XMM0[4] = auVar22[4] + cVar4;
      in_XMM0[5] = auVar22[5] + cVar5;
      in_XMM0[6] = auVar22[6] + cVar6;
      in_XMM0[7] = auVar22[7] + cVar7;
      in_XMM0[8] = auVar22[8] + cVar8;
      in_XMM0[9] = auVar22[9] + cVar9;
      in_XMM0[10] = auVar22[10] + cVar10;
      in_XMM0[0xb] = auVar22[0xb] + cVar11;
      in_XMM0[0xc] = auVar22[0xc] + cVar12;
      in_XMM0[0xd] = auVar22[0xd] + cVar13;
      in_XMM0[0xe] = auVar22[0xe] + cVar14;
      in_XMM0[0xf] = auVar22[0xf] + cVar15;
      *pauVar17 = auVar22;
      pauVar17 = pauVar18;
      auVar22 = in_XMM0;
    } while ((undefined1 (*) [16])(*param_2 + uVar19) != pauVar18);
    cVar16 = (char)uVar19 + '\x01';
    if (param_3 == uVar19) {
      return 1;
    }
  }
  uVar21 = param_3 - uVar19;
  if (6 < uVar21 - 1) {
    uVar20 = CONCAT11(cVar16,cVar16);
    cVar16 = cVar16 + (char)(uVar21 & 0xfffffffffffffff8);
    auVar22 = pshuflw(in_XMM0,ZEXT216(uVar20),0);
    *(ulong *)(*param_2 + uVar19) =
         CONCAT17(auVar22[7] + _LC2._7_1_,
                  CONCAT16(auVar22[6] + _LC2._6_1_,
                           CONCAT15(auVar22[5] + _LC2._5_1_,
                                    CONCAT14(auVar22[4] + _LC2._4_1_,
                                             CONCAT13(auVar22[3] + _LC2._3_1_,
                                                      CONCAT12(auVar22[2] + _LC2._2_1_,
                                                               CONCAT11(auVar22[1] + _LC2._1_1_,
                                                                        auVar22[0] + (char)_LC2)))))
                          ));
    uVar19 = uVar19 + (uVar21 & 0xfffffffffffffff8);
    if ((uVar21 & 7) == 0) {
      return 1;
    }
  }
  (*param_2)[uVar19] = cVar16;
  if (uVar19 + 1 < param_3) {
    (*param_2)[uVar19 + 1] = cVar16 + '\x01';
    if (uVar19 + 2 < param_3) {
      (*param_2)[uVar19 + 2] = cVar16 + '\x02';
      if (uVar19 + 3 < param_3) {
        (*param_2)[uVar19 + 3] = cVar16 + '\x03';
        if (uVar19 + 4 < param_3) {
          (*param_2)[uVar19 + 4] = cVar16 + '\x04';
          if (uVar19 + 5 < param_3) {
            (*param_2)[uVar19 + 5] = cVar16 + '\x05';
            if (uVar19 + 6 < param_3) {
              (*param_2)[uVar19 + 6] = cVar16 + '\x06';
            }
          }
        }
      }
    }
  }
  return 1;
}



undefined8 fuzz_rand_enable_locking(void)

{
  return 1;
}



undefined1 * fuzz_rand_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_0;
}



undefined1 * fuzz_rand_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  *param_3 = 0;
  puVar1 = fuzz_rand_rand;
  if (param_2 != 5) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined8
fuzz_rand_provider_init(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = OSSL_LIB_CTX_new();
  *param_4 = lVar1;
  if (lVar1 != 0) {
    *param_3 = fuzz_rand_method;
    return 1;
  }
  return 0;
}



bool fuzz_rand_get_ctx_params(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_PARAM_locate(param_2,"state");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,*param_1), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"strength");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,500), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"max_request");
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_size_t(lVar2,0x7fffffff);
  return iVar1 != 0;
}



void fuzz_rand_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void fuzz_rand_newctx(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_malloc(4,"fuzz/fuzz_rand.c",0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



void FuzzerSetRand(void)

{
  int iVar1;
  
  iVar1 = OSSL_PROVIDER_add_builtin(0,"fuzz-rand",fuzz_rand_provider_init);
  if (iVar1 != 0) {
    iVar1 = RAND_set_DRBG_type(0,&_LC8,0,0,0);
    if (iVar1 != 0) {
      r_prov = OSSL_PROVIDER_try_load(0,"fuzz-rand",1);
      if (r_prov != 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



void FuzzerClearRand(void)

{
  OSSL_PROVIDER_unload(r_prov);
  return;
}


