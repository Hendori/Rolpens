
void chacha20_block(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  int iVar12;
  int iVar13;
  int iVar14;
  uint local_c8;
  long local_a0;
  int local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (uint)*(undefined8 *)param_1;
  uVar10 = local_c8;
  local_c8 = (uint)*(undefined8 *)(param_1 + 4);
  uVar2 = local_c8;
  local_c8 = (uint)*(undefined8 *)(param_1 + 8);
  uVar8 = local_c8;
  local_c8 = (uint)*(undefined8 *)(param_1 + 0xc);
  uVar1 = local_c8;
  local_78._4_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uStack_60._4_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  uStack_84 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  local_68._4_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uStack_80 = (uint)*(undefined8 *)(param_1 + 2);
  uStack_70._0_4_ = (uint)*(undefined8 *)(param_1 + 6);
  local_58._4_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  local_c8 = uStack_60._4_4_;
  local_a0 = 10;
  uStack_50._0_4_ = (uint)*(undefined8 *)(param_1 + 0xe);
  uStack_60._0_4_ = (uint)*(undefined8 *)(param_1 + 10);
  uStack_7c = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uStack_70._4_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uStack_50._4_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  do {
    uVar1 = uVar1 ^ uVar10 + uVar2;
    local_58._4_4_ = local_58._4_4_ ^ uStack_84 + local_78._4_4_;
    uStack_50._0_4_ = (uint)uStack_50 ^ uStack_80 + (uint)uStack_70;
    uVar1 = uVar1 << 0x10 | uVar1 >> 0x10;
    uVar3 = local_58._4_4_ << 0x10 | local_58._4_4_ >> 0x10;
    uVar8 = uVar8 + uVar1;
    local_68._4_4_ = local_68._4_4_ + uVar3;
    uVar4 = (uint)uStack_50 << 0x10 | (uint)uStack_50 >> 0x10;
    uVar6 = uVar2 ^ uVar8;
    uVar5 = local_78._4_4_ ^ local_68._4_4_;
    uStack_60._0_4_ = (uint)uStack_60 + uVar4;
    uVar6 = uVar6 << 0xc | uVar6 >> 0x14;
    uVar5 = uVar5 << 0xc | uVar5 >> 0x14;
    uVar7 = (uint)uStack_70 ^ (uint)uStack_60;
    uVar10 = uVar10 + uVar2 + uVar6;
    uStack_84 = uStack_84 + local_78._4_4_ + uVar5;
    uVar7 = uVar7 << 0xc | uVar7 >> 0x14;
    uVar1 = uVar1 ^ uVar10;
    uVar3 = uVar3 ^ uStack_84;
    uStack_80 = uStack_80 + (uint)uStack_70 + uVar7;
    uVar2 = uVar1 << 8 | uVar1 >> 0x18;
    uVar1 = uVar3 << 8 | uVar3 >> 0x18;
    uVar4 = uVar4 ^ uStack_80;
    uVar8 = uVar8 + uVar2;
    local_68._4_4_ = local_68._4_4_ + uVar1;
    uVar6 = uVar6 ^ uVar8;
    uVar5 = uVar5 ^ local_68._4_4_;
    uVar6 = uVar6 << 7 | uVar6 >> 0x19;
    uVar3 = uVar5 << 7 | uVar5 >> 0x19;
    uVar4 = uVar4 << 8 | uVar4 >> 0x18;
    uVar10 = uVar10 + uVar3;
    uStack_50._4_4_ = uStack_50._4_4_ ^ uStack_7c + uStack_70._4_4_;
    uStack_60._0_4_ = (uint)uStack_60 + uVar4;
    uVar7 = uVar7 ^ (uint)uStack_60;
    uVar9 = uStack_50._4_4_ << 0x10 | uStack_50._4_4_ >> 0x10;
    uVar5 = uVar7 << 7 | uVar7 >> 0x19;
    local_c8 = local_c8 + uVar9;
    uStack_84 = uStack_84 + uVar5;
    uVar7 = uStack_70._4_4_ ^ local_c8;
    uVar2 = uVar2 ^ uStack_84;
    uVar11 = uVar7 << 0xc | uVar7 >> 0x14;
    uVar2 = uVar2 << 0x10 | uVar2 >> 0x10;
    uStack_7c = uStack_7c + uStack_70._4_4_ + uVar11;
    uVar9 = uVar9 ^ uStack_7c;
    uVar7 = uVar9 << 8 | uVar9 >> 0x18;
    local_c8 = local_c8 + uVar7;
    uVar7 = uVar7 ^ uVar10;
    uVar7 = uVar7 << 0x10 | uVar7 >> 0x10;
    uVar11 = uVar11 ^ local_c8;
    local_c8 = local_c8 + uVar2;
    uStack_60._0_4_ = (uint)uStack_60 + uVar7;
    uVar9 = uVar11 << 7 | uVar11 >> 0x19;
    uVar3 = uVar3 ^ (uint)uStack_60;
    uVar3 = uVar3 << 0xc | uVar3 >> 0x14;
    uVar10 = uVar10 + uVar3;
    uVar7 = uVar7 ^ uVar10;
    uStack_50._4_4_ = uVar7 << 8 | uVar7 >> 0x18;
    uStack_60._0_4_ = (uint)uStack_60 + uStack_50._4_4_;
    uVar3 = uVar3 ^ (uint)uStack_60;
    local_78._4_4_ = uVar3 << 7 | uVar3 >> 0x19;
    uVar5 = uVar5 ^ local_c8;
    uStack_80 = uStack_80 + uVar9;
    uStack_7c = uStack_7c + uVar6;
    uVar5 = uVar5 << 0xc | uVar5 >> 0x14;
    uVar1 = uVar1 ^ uStack_80;
    uVar4 = uVar4 ^ uStack_7c;
    uVar3 = uVar1 << 0x10 | uVar1 >> 0x10;
    uStack_84 = uStack_84 + uVar5;
    uVar4 = uVar4 << 0x10 | uVar4 >> 0x10;
    uVar2 = uVar2 ^ uStack_84;
    uVar1 = uVar2 << 8 | uVar2 >> 0x18;
    local_c8 = local_c8 + uVar1;
    uVar5 = uVar5 ^ local_c8;
    local_68._4_4_ = local_68._4_4_ + uVar4;
    uStack_70._0_4_ = uVar5 << 7 | uVar5 >> 0x19;
    uVar8 = uVar8 + uVar3;
    uVar6 = uVar6 ^ local_68._4_4_;
    uVar9 = uVar9 ^ uVar8;
    uVar2 = uVar6 << 0xc | uVar6 >> 0x14;
    uVar5 = uVar9 << 0xc | uVar9 >> 0x14;
    uStack_7c = uStack_7c + uVar2;
    uStack_80 = uStack_80 + uVar5;
    uVar4 = uVar4 ^ uStack_7c;
    uVar3 = uVar3 ^ uStack_80;
    uStack_50._0_4_ = uVar4 << 8 | uVar4 >> 0x18;
    local_58._4_4_ = uVar3 << 8 | uVar3 >> 0x18;
    local_68._4_4_ = local_68._4_4_ + (uint)uStack_50;
    uVar8 = uVar8 + local_58._4_4_;
    uVar2 = uVar2 ^ local_68._4_4_;
    uVar5 = uVar5 ^ uVar8;
    uVar2 = uVar2 << 7 | uVar2 >> 0x19;
    uStack_70._4_4_ = uVar5 << 7 | uVar5 >> 0x19;
    local_a0 = local_a0 + -1;
  } while (local_a0 != 0);
  iVar12 = uStack_84 + param_1[1];
  iVar13 = uStack_80 + param_1[2];
  iVar14 = uStack_7c + param_1[3];
  uStack_70 = CONCAT44(uStack_70._4_4_ + param_1[7],(uint)uStack_70 + param_1[6]);
  local_68 = CONCAT44(local_68._4_4_ + param_1[9],uVar8 + param_1[8]);
  local_78 = CONCAT44(local_78._4_4_ + param_1[5],uVar2 + param_1[4]);
  uStack_60 = CONCAT44(local_c8 + param_1[0xb],(uint)uStack_60 + param_1[10]);
  local_58 = CONCAT44(local_58._4_4_ + param_1[0xd],uVar1 + param_1[0xc]);
  uStack_50 = CONCAT44(uStack_50._4_4_ + param_1[0xf],(uint)uStack_50 + param_1[0xe]);
  _local_88 = CONCAT44(iVar12,uVar10 + *param_1);
  _uStack_80 = CONCAT44(iVar14,iVar13);
  *param_2 = uVar10 + *param_1;
  param_2[1] = iVar12;
  param_2[2] = iVar13;
  param_2[3] = iVar14;
  *(undefined8 *)(param_2 + 4) = local_78;
  *(undefined8 *)(param_2 + 6) = uStack_70;
  *(undefined8 *)(param_2 + 8) = local_68;
  *(undefined8 *)(param_2 + 10) = uStack_60;
  *(undefined8 *)(param_2 + 0xc) = local_58;
  *(undefined8 *)(param_2 + 0xe) = uStack_50;
  mbedtls_platform_zeroize(&local_88,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_chacha20_init(long param_1)

{
  mbedtls_platform_zeroize(param_1,0x40);
  mbedtls_platform_zeroize(param_1 + 0x40,0x40);
  *(undefined8 *)(param_1 + 0x80) = 0x40;
  return;
}



void mbedtls_chacha20_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_platform_zeroize(param_1,0x88);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 mbedtls_chacha20_setkey(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_001010c8;
  *param_1 = __LC0;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 3) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x1c) = param_2[3];
  *(undefined4 *)(param_1 + 4) = param_2[4];
  *(undefined4 *)((long)param_1 + 0x24) = param_2[5];
  *(undefined4 *)(param_1 + 5) = param_2[6];
  *(undefined4 *)((long)param_1 + 0x2c) = param_2[7];
  return 0;
}



undefined8 mbedtls_chacha20_starts(long param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = *param_2;
  *(undefined4 *)(param_1 + 0x38) = param_2[1];
  *(undefined4 *)(param_1 + 0x3c) = param_2[2];
  mbedtls_platform_zeroize(param_1 + 0x40,0x40);
  *(undefined8 *)(param_1 + 0x80) = 0x40;
  return 0;
}



undefined8 mbedtls_chacha20_update(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_48;
  
  if (param_2 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x80);
    lVar5 = 0;
    do {
      if (0x3f < uVar4) {
        uVar4 = param_2 - lVar5;
        if (0x3f < uVar4) {
          uVar3 = uVar4 - 0x40;
          lVar7 = param_3 + lVar5;
          lVar6 = param_4 + lVar5;
          do {
            chacha20_block(param_1,param_1 + 0x40);
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
            lVar2 = 0;
            do {
              *(ulong *)(lVar6 + lVar2) =
                   *(ulong *)(lVar7 + lVar2) ^ *(ulong *)(param_1 + 0x40 + lVar2);
              lVar2 = lVar2 + 8;
            } while (lVar2 != 0x40);
            lVar6 = lVar6 + 0x40;
            lVar7 = lVar7 + 0x40;
          } while (lVar6 != param_4 + 0x40 + lVar5 + (uVar3 & 0xffffffffffffffc0));
          uVar1 = uVar4 & 0x3f;
          uVar4 = (ulong)((uint)uVar4 & 0x3f);
          if (uVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + 0x40 + (uVar3 & 0xffffffffffffffc0);
        }
        local_48 = param_1 + 0x40;
        chacha20_block(param_1,local_48);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        if (uVar4 < 8) {
          uVar3 = 0;
        }
        else {
          uVar1 = 8;
          do {
            uVar3 = uVar1;
            *(ulong *)(param_4 + lVar5 + -8 + uVar3) =
                 *(ulong *)(param_3 + lVar5 + -8 + uVar3) ^ *(ulong *)(param_1 + 0x38 + uVar3);
            uVar1 = uVar3 + 8;
          } while (uVar3 + 8 <= uVar4);
          if (uVar4 <= uVar3) goto LAB_00100577;
        }
        do {
          *(byte *)(param_4 + lVar5 + uVar3) =
               *(byte *)(param_3 + lVar5 + uVar3) ^ *(byte *)(param_1 + 0x40 + uVar3);
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar4);
LAB_00100577:
        *(ulong *)(param_1 + 0x80) = uVar4;
        return 0;
      }
      *(byte *)(param_4 + lVar5) = *(byte *)(param_3 + lVar5) ^ *(byte *)(param_1 + 0x40 + uVar4);
      lVar5 = lVar5 + 1;
      uVar4 = *(long *)(param_1 + 0x80) + 1;
      *(ulong *)(param_1 + 0x80) = uVar4;
    } while (param_2 != lVar5);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
mbedtls_chacha20_crypt
          (undefined8 *param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [64];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_platform_zeroize(&local_c8,0x40,0);
  mbedtls_platform_zeroize(local_88,0x40);
  local_a8 = param_1[2];
  local_48 = 0x40;
  local_c8 = __LC0;
  uStack_c0 = _UNK_001010c8;
  uStack_a0 = param_1[3];
  uStack_90 = *(undefined8 *)(param_2 + 1);
  local_98 = CONCAT44(*param_2,param_3);
  uStack_b0 = param_1[1];
  local_b8 = *param_1;
  mbedtls_platform_zeroize(local_88,0x40);
  local_48 = 0x40;
  uVar1 = mbedtls_chacha20_update(&local_c8,param_4,param_5,param_6);
  mbedtls_platform_zeroize(&local_c8,0x88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_chacha20_self_test(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    iVar1 = mbedtls_chacha20_crypt(test_keys,test_nonces,0,0x40,&test_input,&local_1a8);
    if (((iVar1 == 0) && (local_1a8 == -0x6fc20e5f521f478a && local_1a0 == 0x28bd8653e56a5d40)) &&
       ((local_198 == 0x1aed8da0b819d2bd && local_190 == -0x38f288743310c958 &&
        ((local_188 == -0x72b7a8ae83a6be26 && local_180 == 0x374ad8b83fe02477 &&
         (local_178 == 0x1ca11815f4b8436a && local_170 == -0x799a114d9649783d)))))) {
      iVar1 = mbedtls_chacha20_crypt
                        (0x1010a0,0x10105c,1,0x177,
                         "Any submission to the IETF intended by the Contributor for publication as all or part of an IETF Internet-Draft or RFC and any statement made within the context of an IETF activity is considered an \"IETF Contribution\". Such statements include oral statements in IETF sessions, as well as written and electronic communications made at any time or place, which are addressed to"
                         ,&local_1a8);
      if (iVar1 == 0) {
        iVar1 = memcmp(&local_1a8,test_output + 0x177,0x177);
        if (iVar1 == 0) {
          uVar2 = 0;
          goto LAB_00100851;
        }
      }
    }
  }
  else {
    __printf_chk(2,"  ChaCha20 test %u ",0);
    iVar1 = mbedtls_chacha20_crypt(test_keys,test_nonces,0,0x40,&test_input,&local_1a8);
    if (iVar1 == 0) {
      if ((((local_1a8 == -0x6fc20e5f521f478a && local_1a0 == 0x28bd8653e56a5d40) &&
           (local_198 == 0x1aed8da0b819d2bd && local_190 == -0x38f288743310c958)) &&
          (local_188 == -0x72b7a8ae83a6be26 && local_180 == 0x374ad8b83fe02477)) &&
         (local_178 == 0x1ca11815f4b8436a && local_170 == -0x799a114d9649783d)) {
        puts("passed");
        __printf_chk(2,"  ChaCha20 test %u ",1);
        iVar1 = mbedtls_chacha20_crypt
                          (0x1010a0,0x10105c,1,0x177,
                           "Any submission to the IETF intended by the Contributor for publication as all or part of an IETF Internet-Draft or RFC and any statement made within the context of an IETF activity is considered an \"IETF Contribution\". Such statements include oral statements in IETF sessions, as well as written and electronic communications made at any time or place, which are addressed to"
                           ,&local_1a8);
        if (iVar1 != 0) goto LAB_001009f0;
        iVar1 = memcmp(&local_1a8,test_output + 0x177,0x177);
        if (iVar1 == 0) {
          puts("passed");
          putchar(10);
          uVar2 = 0;
          goto LAB_00100851;
        }
      }
      puts("failed (output)");
    }
    else {
LAB_001009f0:
      __printf_chk(2,"error code: %i\n",iVar1);
    }
  }
  uVar2 = 0xffffffff;
LAB_00100851:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


