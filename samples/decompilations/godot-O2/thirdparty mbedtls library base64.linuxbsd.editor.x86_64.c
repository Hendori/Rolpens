
uint mbedtls_ct_base64_enc_char(uint param_1)

{
  return ~(uint)(byte)((byte)(0x3f - (param_1 & 0xff) >> 8) | (byte)((param_1 & 0xff) - 0x3f >> 8))
         & 0x2f | ~(uint)(byte)((byte)(0x3e - (param_1 & 0xff) >> 8) |
                               (byte)((param_1 & 0xff) - 0x3e >> 8)) & 0x2b |
                  ~(uint)(byte)((byte)(0x3d - (param_1 & 0xff) >> 8) |
                               (byte)((param_1 & 0xff) - 0x34 >> 8)) & param_1 - 4 & 0xff |
                  ~(uint)(byte)((byte)(0x33 - (param_1 & 0xff) >> 8) |
                               (byte)((param_1 & 0xff) - 0x1a >> 8)) & param_1 + 0x47 & 0xff |
                  ~(0x19 - (param_1 & 0xff) >> 8) & param_1 + 0x41 & 0xff;
}



int mbedtls_ct_base64_dec_value(byte param_1)

{
  return (~(uint)CONCAT21((short)(0x2f - (uint)param_1 >> 0x10),
                          (byte)(0x2f - (uint)param_1 >> 8) | (byte)(param_1 - 0x2f >> 8)) &
          (uint)(byte)(param_1 + 0x11) |
         ~(uint)CONCAT21((short)(0x2b - (uint)param_1 >> 0x10),
                         (byte)(0x2b - (uint)param_1 >> 8) | (byte)(param_1 - 0x2b >> 8)) &
         (uint)(byte)(param_1 + 0x14) |
         ~(uint)CONCAT21((short)(0x39 - (uint)param_1 >> 0x10),
                         (byte)(0x39 - (uint)param_1 >> 8) | (byte)(param_1 - 0x30 >> 8)) &
         (uint)(byte)(param_1 + 5) |
         ~(uint)CONCAT21((short)(0x7a - (uint)param_1 >> 0x10),
                         (byte)(0x7a - (uint)param_1 >> 8) | (byte)(param_1 - 0x61 >> 8)) &
         (uint)(byte)(param_1 + 0xba) |
         ~(uint)CONCAT21((short)(0x5a - (uint)param_1 >> 0x10),
                         (byte)(0x5a - (uint)param_1 >> 8) | (byte)(param_1 - 0x41 >> 8)) &
         (uint)(byte)(param_1 - 0x40)) - 1;
}



undefined8
mbedtls_base64_encode(undefined1 *param_1,ulong param_2,ulong *param_3,byte *param_4,ulong param_5)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  
  if (param_5 == 0) {
    *param_3 = 0;
LAB_001002a6:
    uVar7 = 0;
  }
  else {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_5;
    uVar1 = (SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + param_5 / 3;
    uVar6 = (ulong)(param_5 != uVar1) + param_5 / 3;
    if (uVar6 >> 0x3e == 0) {
      uVar6 = uVar6 * 4 + 1;
      if ((param_1 != (undefined1 *)0x0) && (uVar6 <= param_2)) {
        if (param_5 < 3) {
          uVar6 = 1;
          puVar9 = param_1;
LAB_001002ca:
          iVar11 = (int)(uint)*param_4 >> 2;
          cVar8 = (*param_4 & 3) * '\x10';
          if (uVar6 < param_5) {
            bVar2 = param_4[1];
            uVar5 = mbedtls_ct_base64_enc_char(iVar11);
            *puVar9 = uVar5;
            uVar5 = mbedtls_ct_base64_enc_char((bVar2 >> 4) + cVar8);
            puVar9[1] = uVar5;
            uVar5 = mbedtls_ct_base64_enc_char(bVar2 * '\x04' & 0x3c);
          }
          else {
            uVar5 = mbedtls_ct_base64_enc_char(iVar11);
            *puVar9 = uVar5;
            uVar5 = mbedtls_ct_base64_enc_char(cVar8);
            puVar9[1] = uVar5;
            uVar5 = 0x3d;
          }
          puVar9[2] = uVar5;
          puVar10 = puVar9 + 4;
          puVar9[3] = 0x3d;
        }
        else {
          puVar9 = param_1;
          uVar12 = 0;
          pbVar13 = param_4;
          do {
            uVar6 = uVar12;
            bVar2 = *pbVar13;
            uVar12 = (ulong)pbVar13[1];
            puVar10 = puVar9 + 4;
            param_4 = pbVar13 + 3;
            bVar3 = pbVar13[2];
            uVar5 = mbedtls_ct_base64_enc_char((int)(uint)bVar2 >> 2);
            *puVar9 = uVar5;
            iVar11 = ((uint)uVar12 & 0xf) << 2;
            uVar5 = mbedtls_ct_base64_enc_char
                              (((uint)((uVar12 & 0xffffffff) >> 4) & 0xf) + (bVar2 & 3) * 0x10);
            puVar9[1] = uVar5;
            uVar5 = mbedtls_ct_base64_enc_char((uint)(bVar3 >> 6) + iVar11 & 0xff);
            puVar9[2] = uVar5;
            uVar5 = mbedtls_ct_base64_enc_char(bVar3 & 0x3f);
            puVar9[3] = uVar5;
            uVar12 = uVar6 + 3;
            puVar9 = puVar10;
            pbVar13 = param_4;
          } while (uVar12 < uVar1);
          uVar6 = uVar6 + 4;
          if (uVar12 < param_5) goto LAB_001002ca;
        }
        *param_3 = (long)puVar10 - (long)param_1;
        *puVar10 = 0;
        goto LAB_001002a6;
      }
    }
    else {
      uVar6 = 0xffffffffffffffff;
    }
    *param_3 = uVar6;
    uVar7 = 0xffffffd6;
  }
  return uVar7;
}



undefined8
mbedtls_base64_decode(undefined1 *param_1,ulong param_2,ulong *param_3,byte *param_4,ulong param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  
  if (param_5 != 0) {
    uVar5 = 0;
    uVar10 = 0;
    uVar6 = 0;
    do {
      bVar2 = false;
      bVar3 = false;
      uVar7 = param_5;
      if (uVar6 < param_5) {
        while (bVar2 = bVar3, param_4[uVar6] == 0x20) {
          uVar6 = uVar6 + 1;
          bVar3 = true;
          if (param_5 == uVar6) goto LAB_00100440;
        }
      }
      if (param_5 == uVar6) break;
      bVar1 = param_4[uVar6];
      if ((param_5 - uVar6 == 1) || (bVar1 != 0xd)) {
        if (bVar1 != 10) {
          if (bVar2) {
            return 0xffffffd4;
          }
          if ((char)bVar1 < '\0') {
            return 0xffffffd4;
          }
          if (bVar1 != 0x3d) goto LAB_0010040e;
          uVar13 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar13;
          if (2 < uVar13) {
            return 0xffffffd4;
          }
          goto LAB_00100424;
        }
      }
      else if (param_4[uVar6 + 1] != 10) {
        if (bVar2) {
          return 0xffffffd4;
        }
LAB_0010040e:
        if (((int)uVar5 != 0) || (cVar4 = mbedtls_ct_base64_dec_value(), cVar4 < '\0')) {
          return 0xffffffd4;
        }
LAB_00100424:
        uVar10 = uVar10 + 1;
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar6;
    } while (uVar6 < param_5);
LAB_00100440:
    if (uVar10 != 0) {
      uVar5 = (((ulong)((uint)uVar10 & 7) * 6 + 7 >> 3) + (uVar10 >> 3) * 6) - uVar5;
      if ((param_1 == (undefined1 *)0x0) || (param_2 < uVar5)) {
        *param_3 = uVar5;
        return 0xffffffd6;
      }
      pbVar8 = param_4 + uVar7;
      uVar12 = 0;
      iVar9 = 0;
      uVar13 = 0;
      puVar11 = param_1;
      do {
        while( true ) {
          bVar1 = *param_4;
          if (0x20 < bVar1) break;
          if ((0x100002400U >> ((ulong)bVar1 & 0x3f) & 1) == 0) {
LAB_001004aa:
            uVar13 = uVar13 << 6;
            cVar4 = mbedtls_ct_base64_dec_value((ulong)bVar1);
            uVar13 = uVar13 | (int)cVar4;
            goto joined_r0x001004c0;
          }
LAB_001004c2:
          param_4 = param_4 + 1;
          if (param_4 == pbVar8) goto LAB_0010050b;
        }
        if (bVar1 != 0x3d) goto LAB_001004aa;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 << 6;
joined_r0x001004c0:
        iVar9 = iVar9 + 1;
        if (iVar9 != 4) goto LAB_001004c2;
        *puVar11 = (char)(uVar13 >> 0x10);
        if (uVar12 < 2) {
          puVar11[1] = (char)(uVar13 >> 8);
          if (uVar12 == 0) {
            puVar11[2] = (char)uVar13;
            iVar9 = 0;
            puVar11 = puVar11 + 3;
          }
          else {
            puVar11 = puVar11 + 2;
            uVar12 = 1;
            iVar9 = 0;
          }
          goto LAB_001004c2;
        }
        param_4 = param_4 + 1;
        puVar11 = puVar11 + 1;
        iVar9 = 0;
      } while (param_4 != pbVar8);
LAB_0010050b:
      uVar5 = (long)puVar11 - (long)param_1;
      goto LAB_0010050e;
    }
  }
  uVar5 = 0;
LAB_0010050e:
  *param_3 = uVar5;
  return 0;
}



undefined8 mbedtls_base64_self_test(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_b0 [8];
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    iVar1 = mbedtls_base64_encode(&local_a8,0x80,local_b0,base64_test_dec,0x40);
    if (((((iVar1 == 0) && (iVar1 = memcmp(base64_test_enc,&local_a8,0x58), iVar1 == 0)) &&
         ((iVar1 = mbedtls_base64_decode(&local_a8,0x80,local_b0,base64_test_enc,0x58), iVar1 == 0
          && ((local_a8 == -0x42a59d78a991b7dc && local_a0 == 0x11a17c4a2d917bf &&
              (local_98 == 0x9d7b3111e8fed94 && local_90 == 0x13ee226f10e9b60c)))))) &&
        (local_88 == 0x31fac9760507b3ca && local_80 == 0x386cc28dff34086c)) &&
       (local_78 == 0x4b50af9754e94300 && local_70 == -0x68f4a5ce6a45be2f)) {
      uVar2 = 0;
      goto LAB_001006b5;
    }
  }
  else {
    __printf_chk(2,"  Base64 encoding test: ");
    iVar1 = mbedtls_base64_encode(&local_a8,0x80,local_b0,base64_test_dec,0x40);
    if ((iVar1 == 0) && (iVar1 = memcmp(base64_test_enc,&local_a8,0x58), iVar1 == 0)) {
      __printf_chk(2,"passed\n  Base64 decoding test: ");
      iVar1 = mbedtls_base64_decode(&local_a8,0x80,local_b0,base64_test_enc,0x58);
      if ((iVar1 == 0) &&
         ((((local_a8 == -0x42a59d78a991b7dc && local_a0 == 0x11a17c4a2d917bf &&
            (local_98 == 0x9d7b3111e8fed94 && local_90 == 0x13ee226f10e9b60c)) &&
           (local_88 == 0x31fac9760507b3ca && local_80 == 0x386cc28dff34086c)) &&
          (local_78 == 0x4b50af9754e94300 && local_70 == -0x68f4a5ce6a45be2f)))) {
        puts("passed\n");
        uVar2 = 0;
        goto LAB_001006b5;
      }
    }
    puts("failed");
  }
  uVar2 = 1;
LAB_001006b5:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


