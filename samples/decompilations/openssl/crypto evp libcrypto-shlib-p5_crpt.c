
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void PKCS5_PBE_add(void)

{
  return;
}



undefined4
PKCS5_PBE_keyivgen_ex
          (EVP_CIPHER_CTX *param_1,char *param_2,int param_3,int *param_4,EVP_CIPHER *param_5,
          undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  PBEPARAM *a;
  long lVar8;
  size_t sVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined8 *puVar13;
  uchar *puVar14;
  long lVar15;
  undefined4 uVar16;
  long in_FS_OFFSET;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  uchar local_d8 [16];
  undefined8 local_c8 [8];
  uchar local_88 [72];
  long local_40;
  ulong uVar12;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = EVP_MD_get0_name(param_6);
  if (((param_4 == (int *)0x0) || (*param_4 != 0x10)) || (*(long *)(param_4 + 2) == 0)) {
    ERR_new();
    uVar6 = 0x2f;
  }
  else {
    uVar7 = PBEPARAM_it();
    a = (PBEPARAM *)ASN1_TYPE_unpack_sequence(uVar7,param_4);
    if (a != (PBEPARAM *)0x0) {
      uVar1 = EVP_CIPHER_get_iv_length(param_5);
      if (uVar1 < 0x11) {
        uVar2 = EVP_CIPHER_get_key_length(param_5);
        if (0x40 < uVar2) {
          ERR_new();
          ERR_set_debug("crypto/evp/p5_crpt.c",0x40,"PKCS5_PBE_keyivgen_ex");
          uVar6 = 0x82;
          goto LAB_0010032c;
        }
        local_1ac = 1;
        if (a->iter != (ASN1_INTEGER *)0x0) {
          lVar8 = ASN1_INTEGER_get(a->iter);
          local_1ac = (undefined4)lVar8;
        }
        puVar14 = a->salt->data;
        iVar4 = a->salt->length;
        if (param_2 == (char *)0x0) {
          param_3 = 0;
        }
        else if (param_3 == -1) {
          sVar9 = strlen(param_2);
          param_3 = (int)sVar9;
        }
        iVar3 = EVP_MD_get_size(param_6);
        if (iVar3 < 1) goto LAB_00100338;
        uVar7 = EVP_KDF_fetch(param_8,"PBKDF1",param_9);
        lVar8 = EVP_KDF_CTX_new(uVar7);
        EVP_KDF_free(uVar7);
        if (lVar8 == 0) goto LAB_00100338;
        OSSL_PARAM_construct_octet_string(&local_1e8,&_LC2,param_2,(long)param_3);
        local_1a8 = local_1e8;
        uStack_1a0 = uStack_1e0;
        local_198 = local_1d8;
        uStack_190 = uStack_1d0;
        local_188 = local_1c8;
        OSSL_PARAM_construct_octet_string(&local_1e8,&_LC3,puVar14,(long)iVar4);
        local_180 = local_1e8;
        uStack_178 = uStack_1e0;
        local_170 = local_1d8;
        uStack_168 = uStack_1d0;
        local_160 = local_1c8;
        OSSL_PARAM_construct_int(&local_1e8,&_LC4,&local_1ac);
        local_158 = local_1e8;
        uStack_150 = uStack_1e0;
        local_148 = local_1d8;
        uStack_140 = uStack_1d0;
        local_138 = local_1c8;
        OSSL_PARAM_construct_utf8_string(&local_1e8,"digest",uVar6,0);
        local_110 = local_1c8;
        local_130 = local_1e8;
        uStack_128 = uStack_1e0;
        local_120 = local_1d8;
        uStack_118 = uStack_1d0;
        OSSL_PARAM_construct_end(&local_1e8);
        local_108 = local_1e8;
        uStack_100 = uStack_1e0;
        local_e8 = local_1c8;
        local_f8 = local_1d8;
        uStack_f0 = uStack_1d0;
        iVar4 = EVP_KDF_derive(lVar8,local_c8,(long)iVar3,&local_1a8);
        if (iVar4 == 1) {
          puVar13 = local_c8;
          puVar14 = local_88;
          if (7 < uVar2) {
            uVar11 = 0;
            do {
              uVar5 = (int)uVar11 + 8;
              uVar12 = (ulong)uVar5;
              *(undefined8 *)(local_88 + uVar11) = *(undefined8 *)((long)local_c8 + uVar11);
              uVar11 = uVar12;
            } while (uVar5 < (uVar2 & 0xfffffff8));
            puVar14 = local_88 + uVar12;
            puVar13 = (undefined8 *)(uVar12 + (long)local_c8);
          }
          lVar15 = 0;
          if ((uVar2 & 4) != 0) {
            *(undefined4 *)puVar14 = *(undefined4 *)puVar13;
            lVar15 = 4;
          }
          if ((uVar2 & 2) != 0) {
            *(undefined2 *)(puVar14 + lVar15) = *(undefined2 *)((long)puVar13 + lVar15);
            lVar15 = lVar15 + 2;
          }
          if ((uVar2 & 1) != 0) {
            puVar14[lVar15] = *(uchar *)((long)puVar13 + lVar15);
          }
          puVar10 = (undefined4 *)((long)(int)(0x10 - uVar1) + (long)local_c8);
          puVar14 = local_d8;
          if (7 < uVar1) {
            uVar11 = 0;
            do {
              uVar2 = (int)uVar11 + 8;
              uVar12 = (ulong)uVar2;
              *(undefined8 *)(local_d8 + uVar11) = *(undefined8 *)((long)puVar10 + uVar11);
              uVar11 = uVar12;
            } while (uVar2 < (uVar1 & 0xfffffff8));
            puVar14 = local_d8 + uVar12;
            puVar10 = (undefined4 *)(uVar12 + (long)puVar10);
          }
          lVar15 = 0;
          if ((uVar1 & 4) != 0) {
            *(undefined4 *)puVar14 = *puVar10;
            lVar15 = 4;
          }
          if ((uVar1 & 2) != 0) {
            *(undefined2 *)(puVar14 + lVar15) = *(undefined2 *)((long)puVar10 + lVar15);
            lVar15 = lVar15 + 2;
          }
          if ((uVar1 & 1) != 0) {
            puVar14[lVar15] = *(uchar *)((long)puVar10 + lVar15);
          }
          iVar4 = EVP_CipherInit_ex(param_1,param_5,(ENGINE *)0x0,local_88,local_d8,param_7);
          if (iVar4 == 0) goto LAB_00100301;
          OPENSSL_cleanse(local_c8,0x40);
          OPENSSL_cleanse(local_88,0x40);
          OPENSSL_cleanse(local_d8,0x10);
          uVar16 = 1;
        }
        else {
LAB_00100301:
          uVar16 = 0;
        }
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/evp/p5_crpt.c",0x3b,"PKCS5_PBE_keyivgen_ex");
        uVar6 = 0xc2;
LAB_0010032c:
        ERR_set_error(6,uVar6,0);
LAB_00100338:
        lVar8 = 0;
        uVar16 = 0;
      }
      EVP_KDF_CTX_free(lVar8);
      PBEPARAM_free(a);
      goto LAB_001000aa;
    }
    ERR_new();
    uVar6 = 0x35;
  }
  uVar16 = 0;
  ERR_set_debug("crypto/evp/p5_crpt.c",uVar6,"PKCS5_PBE_keyivgen_ex");
  ERR_set_error(6,0x72,0);
LAB_001000aa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int PKCS5_PBE_keyivgen(EVP_CIPHER_CTX *ctx,char *pass,int passlen,ASN1_TYPE *param,
                      EVP_CIPHER *cipher,EVP_MD *md,int en_de)

{
  int iVar1;
  
  iVar1 = PKCS5_PBE_keyivgen_ex();
  return iVar1;
}


