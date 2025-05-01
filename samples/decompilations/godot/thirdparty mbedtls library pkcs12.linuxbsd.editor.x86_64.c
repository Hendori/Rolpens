
/* WARNING: Removing unreachable block (ram,0x00100163) */
/* WARNING: Removing unreachable block (ram,0x00100165) */
/* WARNING: Type propagation algorithm not settling */

undefined8
mbedtls_pkcs12_derivation
          (undefined8 *param_1,ulong param_2,long param_3,ulong param_4,long param_5,ulong param_6,
          undefined4 param_7,uint param_8,int param_9)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  undefined8 *puVar14;
  long *plVar15;
  byte *pbVar16;
  char *pcVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  byte bVar21;
  ulong local_2e8;
  byte *local_2c0;
  undefined1 local_2a8 [24];
  undefined8 uStack_290;
  undefined8 local_288;
  long local_248 [15];
  byte abStack_1c9 [128];
  byte abStack_149 [128];
  byte bStack_c9;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  char acStack_48 [8];
  long local_40;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if ((((0x40 < param_4 || 0x40 < param_6) || (0x80 < param_2)) ||
      ((param_3 == 0 && (param_4 != 0)))) || ((param_5 == 0 && (param_6 != 0)))) {
    uVar6 = 0xffffe080;
  }
  else {
    bVar13 = param_3 != 0 && param_4 != 0;
    bVar2 = param_5 != 0 && param_6 != 0;
    uVar6 = mbedtls_md_info_from_type(param_7);
    bVar3 = mbedtls_md_get_size(uVar6);
    uVar12 = (ulong)bVar3;
    uVar10 = (-(ulong)(uVar12 < 0x21) & 0xffffffffffffffc0) + 0x80;
    plVar15 = local_248;
    for (uVar9 = uVar10 >> 3 & 0x1fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
      *plVar15 = (ulong)(param_8 & 0xff) * 0x101010101010101;
      plVar15 = plVar15 + (ulong)bVar21 * -2 + 1;
    }
    if (bVar2) {
      pbVar16 = abStack_1c9 + 1;
      uVar19 = 0x80;
      uVar9 = uVar10;
      do {
        uVar20 = uVar9;
        if (param_6 <= uVar9) {
          uVar20 = param_6;
        }
        lVar7 = __memcpy_chk(pbVar16,param_5,uVar20,uVar19);
        uVar8 = 0x80;
        if (0x7f < uVar19) {
          uVar8 = uVar19;
        }
        uVar11 = (uVar20 + uVar8) - uVar19;
        if (uVar11 < uVar8) {
          uVar11 = uVar8;
        }
        pbVar16 = (byte *)(lVar7 + uVar20);
        uVar19 = (uVar19 - (uVar20 + uVar8)) + uVar11;
        uVar9 = uVar9 - uVar20;
      } while (uVar9 != 0);
    }
    if (bVar13) {
      pbVar16 = abStack_149 + 1;
      uVar19 = 0x80;
      uVar9 = uVar10;
      do {
        uVar20 = uVar9;
        if (param_4 <= uVar9) {
          uVar20 = param_4;
        }
        lVar7 = __memcpy_chk(pbVar16,param_3,uVar20,uVar19);
        uVar8 = 0x80;
        if (0x7f < uVar19) {
          uVar8 = uVar19;
        }
        uVar11 = (uVar8 + uVar20) - uVar19;
        if (uVar11 < uVar8) {
          uVar11 = uVar8;
        }
        pbVar16 = (byte *)(lVar7 + uVar20);
        uVar19 = (uVar19 - (uVar8 + uVar20)) + uVar11;
        uVar9 = uVar9 - uVar20;
      } while (uVar9 != 0);
    }
    local_2c0 = abStack_1c9 + 1;
    pbVar16 = abStack_149 + 1;
    local_2e8 = param_2;
    if (param_2 == 0) {
LAB_00100486:
      uVar6 = 0;
    }
    else {
      while (lVar7 = mbedtls_md_info_from_type(param_7), lVar7 != 0) {
        mbedtls_md_init(local_2a8);
        iVar4 = mbedtls_md_setup(local_2a8,lVar7,0);
        if (iVar4 != 0) break;
        iVar4 = mbedtls_md_starts(local_2a8);
        if ((((iVar4 != 0) || (iVar4 = mbedtls_md_update(local_2a8,local_248,uVar10), iVar4 != 0))
            || ((bVar2 && (iVar4 = mbedtls_md_update(local_2a8,local_2c0,uVar10), iVar4 != 0)))) ||
           (((bVar13 && (iVar4 = mbedtls_md_update(local_2a8,pbVar16,uVar10), iVar4 != 0)) ||
            (iVar4 = mbedtls_md_finish(local_2a8,&local_288), iVar4 != 0)))) {
LAB_001002c8:
          mbedtls_md_free(local_2a8);
          break;
        }
        if (1 < (ulong)(long)param_9) {
          uVar9 = 1;
          do {
            iVar4 = mbedtls_md(lVar7,&local_288,uVar12);
            if (iVar4 != 0) goto LAB_001002c8;
            uVar9 = uVar9 + 1;
          } while ((long)param_9 != uVar9);
        }
        mbedtls_md_free(local_2a8);
        uVar9 = local_2e8;
        if (uVar12 <= local_2e8) {
          uVar9 = uVar12;
        }
        uVar5 = (uint)uVar9;
        if (uVar5 < 8) {
          if ((uVar9 & 4) == 0) {
            if (uVar5 != 0) {
              *(undefined1 *)param_1 = (undefined1)local_288;
              if ((uVar9 & 2) != 0) {
                *(undefined2 *)((long)param_1 + ((uVar9 & 0xffffffff) - 2)) =
                     *(undefined2 *)((long)&uStack_290 + (uVar9 & 0xffffffff) + 6);
              }
            }
          }
          else {
            *(undefined4 *)param_1 = (undefined4)local_288;
            *(undefined4 *)((long)param_1 + ((uVar9 & 0xffffffff) - 4)) =
                 *(undefined4 *)((long)&uStack_290 + (uVar9 & 0xffffffff) + 4);
          }
        }
        else {
          *param_1 = CONCAT44(local_288._4_4_,(undefined4)local_288);
          *(undefined8 *)((long)param_1 + ((uVar9 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)&uStack_290 + (uVar9 & 0xffffffff));
          lVar7 = (long)param_1 - (long)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
          puVar14 = (undefined8 *)((long)&local_288 - lVar7);
          puVar18 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
          for (uVar19 = (ulong)(uVar5 + (int)lVar7 >> 3); uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar18 = *puVar14;
            puVar14 = puVar14 + (ulong)bVar21 * -2 + 1;
            puVar18 = puVar18 + (ulong)bVar21 * -2 + 1;
          }
        }
        param_1 = (undefined8 *)((long)param_1 + uVar9);
        local_2e8 = local_2e8 - uVar9;
        if (local_2e8 == 0) goto LAB_00100486;
        if (uVar12 != 0) {
          uVar19 = 0x80;
          pcVar17 = local_c8;
          uVar9 = uVar10;
          do {
            uVar20 = uVar9;
            if (uVar12 <= uVar9) {
              uVar20 = uVar12;
            }
            lVar7 = __memcpy_chk(pcVar17,&local_288,uVar20,uVar19);
            uVar8 = 0x80;
            if (0x7f < uVar19) {
              uVar8 = uVar19;
            }
            uVar11 = (uVar20 + uVar8) - uVar19;
            if (uVar11 < uVar8) {
              uVar11 = uVar8;
            }
            pcVar17 = (char *)(lVar7 + uVar20);
            uVar19 = (uVar19 - (uVar20 + uVar8)) + uVar11;
            uVar9 = uVar9 - uVar20;
          } while (uVar9 != 0);
        }
        pcVar17 = local_c8 + uVar10;
        do {
          if (local_c8 == pcVar17) break;
          cVar1 = pcVar17[-1];
          pcVar17 = pcVar17 + -1;
          *pcVar17 = cVar1 + '\x01';
        } while ((char)(cVar1 + '\x01') == '\0');
        if (bVar2) {
          uVar5 = 0;
          uVar9 = uVar10;
          do {
            uVar9 = uVar9 - 1;
            uVar5 = (uint)local_2c0[uVar9] + (uint)(byte)local_c8[uVar9] + uVar5;
            local_2c0[uVar9] = (byte)uVar5;
            uVar5 = uVar5 >> 8;
          } while (uVar9 != 0);
        }
        if (bVar13) {
          uVar5 = 0;
          uVar9 = uVar10;
          do {
            uVar9 = uVar9 - 1;
            uVar5 = (uint)pbVar16[uVar9] + (uint)(byte)local_c8[uVar9] + uVar5;
            pbVar16[uVar9] = (byte)uVar5;
            uVar5 = uVar5 >> 8;
          } while (uVar9 != 0);
        }
      }
      uVar6 = 0xffffff92;
    }
    mbedtls_platform_zeroize(local_2c0,0x80);
    mbedtls_platform_zeroize(pbVar16,0x80);
    mbedtls_platform_zeroize(local_c8,0x80);
    mbedtls_platform_zeroize(&local_288,0x40);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_pkcs12_pbe_ext
                (int *param_1,int param_2,undefined4 param_3,undefined4 param_4,long param_5,
                ulong param_6,undefined8 param_7,ulong param_8,undefined8 param_9,ulong param_10,
                long *param_11)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  byte bVar8;
  long lVar9;
  long in_FS_OFFSET;
  byte bVar10;
  undefined1 *local_230;
  undefined4 local_204;
  long local_200;
  undefined1 local_1f8 [16];
  long local_1e8;
  undefined1 local_1d8 [96];
  undefined1 local_178 [16];
  undefined1 local_168 [32];
  undefined8 local_148;
  long local_40;
  
  bVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_200 = 0;
  if ((param_5 != 0) || (param_6 == 0)) {
    lVar4 = mbedtls_cipher_info_from_type(param_3);
    if (lVar4 == 0) {
      uVar5 = 0xffffe100;
      goto LAB_001008e1;
    }
    bVar1 = *(byte *)(lVar4 + 9) & 0xf;
    if (param_2 == 0) {
      if (param_10 < param_8) goto LAB_00100a03;
      bVar8 = *(byte *)(lVar4 + 8);
    }
    else {
      bVar8 = *(byte *)(lVar4 + 8);
      if ((param_2 == 1) &&
         (param_10 < ((bVar8 & 0x1f) - (int)(param_8 % (ulong)(bVar8 & 0x1f))) + param_8)) {
LAB_00100a03:
        uVar5 = 0xffffff94;
        goto LAB_001008e1;
      }
    }
    local_204 = 0;
    if (param_6 < 0x81) {
      local_1f8 = (undefined1  [16])0x0;
      puVar7 = &local_148;
      for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
      }
      lVar6 = *(long *)(param_1 + 2) + *(long *)(param_1 + 4);
      local_1e8 = 0;
      iVar2 = *param_1;
      *(undefined2 *)puVar7 = 0;
      if (iVar2 != 0x30) {
        uVar5 = 0xffffe11e;
        goto LAB_001008e1;
      }
      iVar2 = mbedtls_asn1_get_tag(param_1 + 4,lVar6,local_1f8 + 8,4);
      if (iVar2 == 0) {
        local_1e8 = *(long *)(param_1 + 4);
        *(long *)(param_1 + 4) = local_1e8 + local_1f8._8_8_;
        iVar2 = mbedtls_asn1_get_int(param_1 + 4,lVar6,&local_204);
        if (iVar2 != 0) goto LAB_00100930;
        if (lVar6 != *(long *)(param_1 + 4)) {
          uVar5 = 0xffffe11a;
          goto LAB_001008e1;
        }
      }
      else {
LAB_00100930:
        uVar5 = (ulong)(iVar2 - 0x1e80U);
        if (iVar2 - 0x1e80U != 0) goto LAB_001008e1;
      }
      uVar5 = 0;
      if (param_6 != 0) {
        do {
          *(undefined1 *)((long)&local_148 + uVar5 * 2 + 1) = *(undefined1 *)(param_5 + uVar5);
          uVar5 = uVar5 + 1;
        } while (param_6 != uVar5);
      }
      lVar6 = param_6 * 2 + 2;
      uVar5 = mbedtls_pkcs12_derivation
                        (local_168,(uint)bVar1 << 3,&local_148,lVar6,local_1e8,local_1f8._8_8_,
                         param_4,1,local_204);
      if ((int)uVar5 == 0) {
        lVar9 = (ulong)(bVar8 >> 5) << 2;
        if ((ulong)(bVar8 >> 5) != 0) {
          uVar5 = mbedtls_pkcs12_derivation
                            (local_178,lVar9,&local_148,lVar6,local_1e8,local_1f8._8_8_,param_4,2,
                             local_204);
          if ((int)uVar5 != 0) goto LAB_001008e1;
        }
        local_230 = local_178;
        mbedtls_cipher_init(local_1d8);
        uVar3 = mbedtls_cipher_setup(local_1d8,lVar4);
        if (((uVar3 == 0) &&
            (uVar3 = mbedtls_cipher_setkey(local_1d8,local_168,(ulong)bVar1 << 6,param_2),
            uVar3 == 0)) && (uVar3 = mbedtls_cipher_set_padding_mode(local_1d8,0), uVar3 == 0)) {
          uVar3 = mbedtls_cipher_crypt(local_1d8,local_230,lVar9,param_7,param_8,param_9,&local_200)
          ;
          if (uVar3 == 0xffff9e00) {
            uVar3 = 0xffffe200;
          }
          *param_11 = *param_11 + local_200;
        }
        mbedtls_platform_zeroize(local_168,0x20);
        mbedtls_platform_zeroize(local_230,0x10);
        mbedtls_cipher_free(local_1d8);
        uVar5 = (ulong)uVar3;
      }
      goto LAB_001008e1;
    }
  }
  uVar5 = 0xffffe080;
LAB_001008e1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


