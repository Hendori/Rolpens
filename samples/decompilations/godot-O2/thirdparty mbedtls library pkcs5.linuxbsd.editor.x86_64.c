
int mbedtls_pkcs5_pbkdf2_hmac_ext
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,uint param_6,uint param_7,undefined8 *param_8)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  byte bVar15;
  uint local_128;
  undefined8 *local_110;
  ulong local_f0;
  undefined8 local_e8 [3];
  char local_cc [4];
  ulong local_c8 [7];
  undefined8 uStack_90;
  undefined8 local_88;
  long local_40;
  
  bVar15 = 0;
  local_110 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = mbedtls_md_info_from_type();
  if (lVar5 == 0) {
    iVar3 = -0x2e80;
  }
  else {
    mbedtls_md_init(local_e8);
    iVar3 = mbedtls_md_setup(local_e8,lVar5,1);
    if (iVar3 == 0) {
      bVar2 = mbedtls_md_get_size(local_e8[0]);
      local_cc[0] = '\0';
      local_cc[1] = '\0';
      local_cc[2] = 0;
      local_cc[3] = 1;
      iVar3 = mbedtls_md_hmac_starts(local_e8,param_2,param_3);
      if (iVar3 == 0) {
        iVar4 = iVar3;
        if (param_7 != 0) {
          uVar10 = (ulong)bVar2;
          do {
            iVar4 = mbedtls_md_hmac_update(local_e8,param_4,param_5);
            if ((((iVar4 != 0) || (iVar4 = mbedtls_md_hmac_update(local_e8,local_cc,4), iVar4 != 0))
                || (iVar4 = mbedtls_md_hmac_finish(local_e8,&local_88), iVar4 != 0)) ||
               (iVar4 = mbedtls_md_hmac_reset(local_e8), iVar4 != 0)) break;
            __memcpy_chk(local_c8,&local_88,uVar10,0x40);
            if (1 < param_6) {
              local_128 = 1;
              do {
                iVar4 = mbedtls_md_hmac_update(local_e8,local_c8,uVar10);
                if (((iVar4 != 0) || (iVar4 = mbedtls_md_hmac_finish(local_e8,local_c8), iVar4 != 0)
                    ) || (iVar4 = mbedtls_md_hmac_reset(local_e8), iVar4 != 0)) goto LAB_00100310;
                uVar14 = 0;
                uVar9 = uVar14;
                if (7 < uVar10) {
                  do {
                    uVar14 = uVar9 + 8;
                    local_f0 = *(ulong *)((long)&local_88 + uVar9) ^
                               *(ulong *)((long)local_c8 + uVar9);
                    uVar8 = 0x40;
                    if (0x3f < uVar9) {
                      uVar8 = uVar9;
                    }
                    __memcpy_chk((long)&local_88 + uVar9,&local_f0,8,uVar8 - uVar9);
                    uVar8 = uVar9 + 0x10;
                    uVar9 = uVar14;
                  } while (uVar8 <= uVar10);
                }
                if (uVar14 < uVar10) {
                  pbVar6 = (byte *)((long)&local_88 + uVar14);
                  pbVar13 = (byte *)((long)local_c8 + uVar14);
                  do {
                    *pbVar6 = *pbVar6 ^ *pbVar13;
                    pbVar6 = pbVar6 + 1;
                    pbVar13 = pbVar13 + 1;
                  } while ((byte *)((long)&local_88 + uVar10) != pbVar6);
                }
                local_128 = local_128 + 1;
              } while (param_6 != local_128);
            }
            uVar7 = (uint)bVar2;
            if (param_7 < bVar2) {
              uVar7 = param_7;
            }
            uVar9 = (ulong)uVar7;
            if (uVar7 < 8) {
              if ((uVar7 & 4) == 0) {
                if (uVar7 != 0) {
                  *(undefined1 *)local_110 = (undefined1)local_88;
                  if ((uVar7 & 2) != 0) {
                    *(undefined2 *)((long)local_110 + (uVar9 - 2)) =
                         *(undefined2 *)((long)&uStack_90 + uVar9 + 6);
                  }
                }
              }
              else {
                *(undefined4 *)local_110 = (undefined4)local_88;
                *(undefined4 *)((long)local_110 + (uVar9 - 4)) =
                     *(undefined4 *)((long)&uStack_90 + uVar9 + 4);
              }
            }
            else {
              *local_110 = CONCAT44(local_88._4_4_,(undefined4)local_88);
              *(undefined8 *)((long)local_110 + (uVar9 - 8)) =
                   *(undefined8 *)((long)&uStack_90 + uVar9);
              lVar5 = (long)local_110 - (long)((ulong)(local_110 + 1) & 0xfffffffffffffff8);
              puVar11 = (undefined8 *)((long)&local_88 - lVar5);
              puVar12 = (undefined8 *)((ulong)(local_110 + 1) & 0xfffffffffffffff8);
              for (uVar14 = (ulong)((int)lVar5 + uVar7 >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar12 = *puVar11;
                puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
                puVar12 = puVar12 + (ulong)bVar15 * -2 + 1;
              }
            }
            param_7 = param_7 - uVar7;
            local_110 = (undefined8 *)((long)local_110 + uVar9);
            uVar9 = 4;
            do {
              uVar7 = (int)uVar9 - 1;
              uVar9 = (ulong)uVar7;
              pcVar1 = local_cc + uVar9;
              *pcVar1 = *pcVar1 + '\x01';
              if (*pcVar1 != '\0') break;
            } while (uVar7 != 0);
            iVar4 = iVar3;
          } while (param_7 != 0);
        }
LAB_00100310:
        iVar3 = iVar4;
        mbedtls_platform_zeroize(&local_88,0x40);
        mbedtls_platform_zeroize(local_c8,0x40);
      }
    }
    mbedtls_md_free(local_e8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



uint mbedtls_pkcs5_pbes2_ext
               (int *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               ulong param_6,undefined8 param_7,ulong param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 local_194;
  long local_190;
  undefined1 local_188 [8];
  long local_180;
  long *local_178;
  long local_168 [4];
  int local_148 [2];
  long local_140;
  long local_138;
  long local_120;
  long local_118;
  int local_108 [2];
  long local_100;
  undefined8 local_f8;
  undefined1 local_e8 [96];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_190 = *(long *)(param_1 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = local_190 + *(long *)(param_1 + 2);
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 5;
  if (*param_1 != 0x30) {
LAB_001007a8:
    uVar3 = 0xffffd09e;
    goto LAB_00100695;
  }
  iVar2 = mbedtls_asn1_get_alg(&local_190,lVar4,local_188,local_148);
  if (iVar2 == 0) {
    if (((local_180 == 9) && (*local_178 == 0x5010df78648862a)) && ((char)local_178[1] == '\f')) {
      local_168[0] = local_138;
      lVar5 = local_138 + local_140;
      if (local_148[0] != 0x30) goto LAB_001007a8;
      iVar2 = mbedtls_asn1_get_tag(local_168,lVar5,&local_120,4);
      if (iVar2 == 0) {
        local_118 = local_168[0];
        local_168[0] = local_168[0] + local_120;
        iVar2 = mbedtls_asn1_get_int(local_168,lVar5,&local_1a0);
        if (iVar2 != 0) goto LAB_00100550;
        if (lVar5 != local_168[0]) {
          iVar2 = mbedtls_asn1_get_int(local_168,lVar5,&local_19c);
          if ((iVar2 != -0x62) && (iVar2 != 0)) goto LAB_00100550;
          if (lVar5 != local_168[0]) {
            iVar2 = mbedtls_asn1_get_alg_null(local_168,lVar5,local_108);
            if (iVar2 != 0) goto LAB_00100550;
            iVar2 = mbedtls_oid_get_md_hmac(local_108,&local_198);
            if (iVar2 != 0) goto LAB_00100478;
            uVar3 = 0xffffd09a;
            if (lVar5 != local_168[0]) goto LAB_00100695;
          }
        }
      }
      else {
LAB_00100550:
        uVar3 = iVar2 - 0x2f00;
        if (uVar3 != 0) goto LAB_00100695;
      }
      iVar2 = mbedtls_asn1_get_alg(&local_190,lVar4,local_168,local_108);
      if (iVar2 != 0) goto LAB_00100690;
      iVar2 = mbedtls_oid_get_cipher_alg(local_168,&local_194);
      if ((iVar2 == 0) && (lVar4 = mbedtls_cipher_info_from_type(local_194), lVar4 != 0)) {
        local_19c = (*(byte *)(lVar4 + 9) & 0xf) << 3;
        if (local_108[0] == 4) {
          bVar1 = *(byte *)(lVar4 + 8);
          if (local_100 == (ulong)(bVar1 >> 5) << 2) {
            if (param_2 == 0) {
              if (param_8 < param_6) {
LAB_001006f0:
                uVar3 = 0xffffff94;
                goto LAB_00100695;
              }
            }
            else if ((param_2 == 1) &&
                    (param_8 < ((bVar1 & 0x1f) - (int)(param_6 % (ulong)(bVar1 & 0x1f))) + param_6))
            goto LAB_001006f0;
            mbedtls_cipher_init(local_e8);
            __memcpy_chk(local_68,local_f8,local_100,0x20);
            uVar3 = mbedtls_pkcs5_pbkdf2_hmac_ext
                              (local_198,param_3,param_4,local_118,local_120,local_1a0,local_19c,
                               local_88);
            if ((((uVar3 == 0) && (uVar3 = mbedtls_cipher_setup(local_e8,lVar4), uVar3 == 0)) &&
                (uVar3 = mbedtls_cipher_setkey(local_e8,local_88,local_19c * 8,param_2), uVar3 == 0)
                ) && (uVar3 = mbedtls_cipher_set_padding_mode(local_e8,0), uVar3 == 0)) {
              iVar2 = mbedtls_cipher_crypt(local_e8,local_68,local_100,param_5,param_6,param_7);
              uVar3 = -(uint)(iVar2 != 0) & 0xffffd200;
            }
            mbedtls_cipher_free(local_e8);
            goto LAB_00100695;
          }
        }
        uVar3 = 0xffffd100;
        goto LAB_00100695;
      }
    }
LAB_00100478:
    uVar3 = 0xffffd180;
  }
  else {
LAB_00100690:
    uVar3 = iVar2 - 0x2f00;
  }
LAB_00100695:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined4 mbedtls_pkcs5_self_test(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined1 local_88 [72];
  long local_40;
  
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar4 = 0;
    goto LAB_00100924;
  }
  while( true ) {
    uVar1 = (&key_len_test_data)[uVar5];
    iVar2 = mbedtls_pkcs5_pbkdf2_hmac_ext
                      (5,"password" + uVar5 * 0x20,(&plen_test_data)[uVar5],
                       &salt_test_data + uVar5 * 0x28,(&slen_test_data)[uVar5],
                       (&it_cnt_test_data)[uVar5],(ulong)uVar1,local_88);
    if ((iVar2 != 0) ||
       (iVar2 = memcmp(result_key_test_data + uVar5 * 0x20,local_88,(ulong)uVar1), iVar2 != 0))
    break;
    uVar3 = 0;
    if (param_1 == 0) {
      uVar5 = uVar5 + 1;
      if (uVar5 == 6) {
LAB_001008d7:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return uVar3;
      }
    }
    else {
      uVar5 = uVar5 + 1;
      puts("passed");
      if (uVar5 == 6) {
        putchar(10);
        goto LAB_001008d7;
      }
      uVar4 = uVar5 & 0xffffffff;
LAB_00100924:
      __printf_chk(2,"  PBKDF2 (SHA1) #%d: ",uVar4);
    }
  }
  if (param_1 != 0) {
    puts("failed");
  }
  uVar3 = 1;
  goto LAB_001008d7;
}


