
void ossl_quic_srt_gen_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    EVP_MAC_CTX_free(param_1[1]);
    EVP_MAC_free(*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long * ossl_quic_srt_gen_new(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)CRYPTO_zalloc(0x10,"ssl/quic/quic_srt_gen.c",0x1c);
  if (plVar2 != (long *)0x0) {
    lVar3 = EVP_MAC_fetch(param_1,&_LC1,param_2);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      lVar3 = EVP_MAC_CTX_new(lVar3);
      plVar2[1] = lVar3;
      if (lVar3 != 0) {
        puVar4 = &local_90;
        OSSL_PARAM_construct_utf8_string(&local_e8,"digest","SHA256",7);
        local_b8 = local_e8;
        uStack_b0 = uStack_e0;
        local_98 = local_c8;
        local_a8 = local_d8;
        uStack_a0 = uStack_d0;
        if (param_2 != 0) {
          OSSL_PARAM_construct_utf8_string(&local_e8,"properties",param_2,0);
          puVar4 = local_68;
          local_70 = local_c8;
          local_90 = local_e8;
          uStack_88 = uStack_e0;
          local_80 = local_d8;
          uStack_78 = uStack_d0;
        }
        OSSL_PARAM_construct_end(&local_e8);
        lVar3 = plVar2[1];
        *puVar4 = local_e8;
        puVar4[1] = uStack_e0;
        puVar4[2] = local_d8;
        puVar4[3] = uStack_d0;
        puVar4[4] = local_c8;
        iVar1 = EVP_MAC_init(lVar3,param_3,param_4,&local_b8);
        if (iVar1 != 0) goto LAB_00100188;
      }
    }
    ossl_quic_srt_gen_free(plVar2);
  }
  plVar2 = (long *)0x0;
LAB_00100188:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_srt_gen_calculate_token(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  iVar1 = EVP_MAC_init(*(undefined8 *)(param_1 + 8),0,0,0);
  if (iVar1 != 0) {
    iVar1 = EVP_MAC_update(*(undefined8 *)(param_1 + 8),param_2 + 1,*param_2);
    if (iVar1 != 0) {
      iVar1 = EVP_MAC_final(*(undefined8 *)(param_1 + 8),&local_48,&local_50,0x20);
      if ((iVar1 != 0) && (local_50 == 0x20)) {
        uVar2 = 1;
        *param_3 = local_48;
        param_3[1] = uStack_40;
        goto LAB_00100213;
      }
    }
  }
  uVar2 = 0;
LAB_00100213:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


