
void add_pkcs_padding(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = param_2 - param_3;
  uVar2 = 0;
  uVar1 = 0;
  if (uVar3 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *(char *)(uVar1 + param_1 + param_3) = (char)uVar3;
      uVar1 = (ulong)(uVar2 & 0xff);
    } while (uVar1 < uVar3);
  }
  return;
}



int get_pkcs_padding(long param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_1 == 0) || (param_3 == (ulong *)0x0)) {
    return -0x6100;
  }
  bVar1 = *(byte *)(param_1 + -1 + param_2);
  uVar7 = (ulong)bVar1;
  if ((bVar1 != 0) && (uVar7 <= param_2)) {
    uVar4 = param_2 - uVar7;
    *param_3 = uVar4;
    uVar3 = 0;
    uVar7 = ~((long)(-uVar7 | uVar7) >> 0x3f) |
            (long)(param_2 - uVar7 & ~(param_2 ^ uVar7) | uVar7 & (param_2 ^ uVar7)) >> 0x3f;
    do {
      uVar2 = uVar3 ^ uVar4;
      uVar5 = uVar3 - uVar4;
      uVar6 = (ulong)(*(byte *)(param_1 + uVar3) ^ bVar1);
      uVar3 = uVar3 + 1;
      uVar7 = uVar7 | ~((long)(uVar5 & ~uVar2 | uVar4 & uVar2) >> 0x3f) &
                      (long)(-uVar6 | uVar6) >> 0x3f;
    } while (uVar3 < param_2);
    return -((uint)uVar7 & 0x6200);
  }
  return -0x6200;
}



void add_one_and_zeros_padding(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1 + param_3) = 0x80;
  if (1 < (ulong)(param_2 - param_3)) {
    uVar2 = 1;
    uVar1 = 1;
    do {
      uVar2 = uVar2 + 1;
      *(undefined1 *)(uVar1 + param_1 + param_3) = 0;
      uVar1 = (ulong)(uVar2 & 0xff);
    } while (uVar1 < (ulong)(param_2 - param_3));
  }
  return;
}



int get_one_and_zeros_padding(long param_1,long param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  ulong uVar5;
  
  if (param_1 != 0) {
    if (param_3 == (ulong *)0x0) {
      iVar1 = -0x6100;
    }
    else {
      uVar5 = 0xffffffffffffffff;
      uVar4 = 0xffffffff;
      uVar9 = 0xffffffffffffffff;
      *param_3 = 0;
      uVar8 = param_2 - 1;
      if (-1 < (long)uVar8) {
        uVar3 = 0;
        do {
          uVar2 = (long)(-(ulong)*(byte *)(param_1 + uVar8) | (ulong)*(byte *)(param_1 + uVar8)) >>
                  0x3f;
          uVar7 = uVar2 & uVar9;
          uVar3 = uVar3 & ~uVar7 | uVar8 & uVar7;
          *param_3 = uVar3;
          uVar6 = (ulong)*(byte *)(param_1 + uVar8) ^ 0x80;
          uVar5 = uVar5 & ~uVar7 | (long)(-uVar6 | uVar6) >> 0x3f & uVar7;
          uVar4 = (uint)uVar5;
          uVar9 = uVar9 & ~uVar2;
          bVar10 = uVar8 != 0;
          uVar8 = uVar8 - 1;
        } while (bVar10);
      }
      iVar1 = -(uVar4 & 0x6200);
    }
    return iVar1;
  }
  return -0x6100;
}



void add_zeros_and_len_padding(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = 1;
  uVar1 = 1;
  uVar3 = param_2 - param_3;
  if (1 < uVar3) {
    do {
      uVar2 = uVar2 + 1;
      *(undefined1 *)(uVar1 + param_1 + param_3 + -1) = 0;
      uVar1 = (ulong)(uVar2 & 0xff);
    } while (uVar1 < uVar3);
  }
  *(char *)(param_1 + -1 + param_2) = (char)uVar3;
  return;
}



int get_zeros_and_len_padding(long param_1,ulong param_2,ulong *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar7;
  ulong uVar6;
  
  if ((param_1 != 0) && (param_3 != (ulong *)0x0)) {
    uVar6 = (ulong)*(byte *)(param_1 + -1 + param_2);
    uVar7 = param_2 - uVar6;
    *param_3 = uVar7;
    uVar6 = ~((long)(-uVar6 | uVar6) >> 0x3f) |
            (long)(param_2 - uVar6 & ~(param_2 ^ uVar6) | uVar6 & (param_2 ^ uVar6)) >> 0x3f;
    uVar5 = (uint)uVar6;
    if (param_2 != 1) {
      uVar3 = 0;
      do {
        uVar2 = uVar3 ^ uVar7;
        uVar4 = uVar3 - uVar7;
        pbVar1 = (byte *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
        uVar6 = uVar6 | ~((long)(uVar4 & ~uVar2 | uVar7 & uVar2) >> 0x3f) &
                        (long)(-(ulong)*pbVar1 | (ulong)*pbVar1) >> 0x3f;
        uVar5 = (uint)uVar6;
      } while (param_2 - 1 != uVar3);
    }
    return -(uVar5 & 0x6200);
  }
  return -0x6100;
}



undefined8 get_zeros_padding(long param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  if ((param_1 != 0) && (param_3 != (ulong *)0x0)) {
    *param_3 = 0;
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        uVar3 = param_2 - 1;
        uVar1 = (long)(-(ulong)*(byte *)(param_1 + uVar3) | (ulong)*(byte *)(param_1 + uVar3)) >>
                0x3f;
        uVar4 = ~uVar5 & uVar1;
        uVar2 = uVar2 & ~uVar4 | param_2 & uVar4;
        *param_3 = uVar2;
        param_2 = uVar3;
        uVar5 = uVar5 | uVar1;
      } while (uVar3 != 0);
    }
    return 0;
  }
  return 0xffff9f00;
}



undefined8 get_no_padding(long param_1,undefined8 param_2,undefined8 *param_3)

{
  if ((param_1 != 0) && (param_3 != (undefined8 *)0x0)) {
    *param_3 = param_2;
    return 0;
  }
  return 0xffff9f00;
}



void add_zeros_padding(long param_1,long param_2,long param_3)

{
  memset((void *)(param_1 + param_3),0,param_2 - param_3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * mbedtls_cipher_list(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (supported_init == 0) {
    piVar3 = (int *)&mbedtls_cipher_supported;
    if (_mbedtls_cipher_definitions != 0) {
      piVar2 = (int *)&mbedtls_cipher_definitions;
      iVar1 = _mbedtls_cipher_definitions;
      do {
        piVar2 = piVar2 + 4;
        *piVar3 = iVar1;
        piVar3 = piVar3 + 1;
        iVar1 = *piVar2;
      } while (iVar1 != 0);
    }
    *piVar3 = 0;
    supported_init = 1;
  }
  return &mbedtls_cipher_supported;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long mbedtls_cipher_info_from_type(int param_1)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = _strcmp;
  if (_strcmp != 0) {
    piVar1 = (int *)&mbedtls_cipher_definitions;
    do {
      if (*piVar1 == param_1) {
        return lVar2;
      }
      lVar2 = *(long *)(piVar1 + 6);
      piVar1 = piVar1 + 4;
    } while (lVar2 != 0);
  }
  return lVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * mbedtls_cipher_info_from_string(char *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  if (param_1 == (char *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = _strcmp;
    if (_strcmp != (undefined8 *)0x0) {
      puVar3 = &mbedtls_cipher_definitions;
      do {
        iVar1 = strcmp((char *)*puVar2,param_1);
        if (iVar1 == 0) {
          return puVar2;
        }
        puVar2 = *(undefined8 **)(puVar3 + 0x18);
        puVar3 = puVar3 + 0x10;
      } while (puVar2 != (undefined8 *)0x0);
    }
  }
  return puVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long mbedtls_cipher_info_from_values(int param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = _strcmp;
  if (_strcmp != 0) {
    puVar2 = &mbedtls_cipher_definitions;
    do {
      if (((**(int **)(&mbedtls_cipher_base_lookup_table +
                      (ulong)(*(byte *)(lVar1 + 0xb) >> 2 & 0x1f) * 8) == param_1) &&
          ((ulong)param_2 == (ulong)(*(byte *)(lVar1 + 9) & 0xf) << 6)) &&
         (*(byte *)(lVar1 + 9) >> 4 == param_3)) {
        return lVar1;
      }
      lVar1 = *(long *)(puVar2 + 0x18);
      puVar2 = puVar2 + 0x10;
    } while (lVar1 != 0);
  }
  return lVar1;
}



void mbedtls_cipher_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0xb] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x60U >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void mbedtls_cipher_free(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (param_1[0xb] != 0) {
      mbedtls_zeroize_and_free(param_1[0xb],0x28);
    }
    if (param_1[10] != 0) {
      (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                            (ulong)(*(byte *)(*param_1 + 0xb) >> 2 & 0x1f) * 8) + 0x58))();
    }
    mbedtls_platform_zeroize(param_1,0x60);
    return;
  }
  return;
}



undefined8 mbedtls_cipher_setup(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0) {
    return 0xffff9f00;
  }
  *param_1 = 0;
  param_1[0xb] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x60U >> 3)
      ; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (*(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                          (ulong)(*(byte *)(param_2 + 0xb) >> 2 & 0x1f) * 8) + 0x50) != (code *)0x0)
  {
    lVar1 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                  (ulong)(*(byte *)(param_2 + 0xb) >> 2 & 0x1f) * 8) + 0x50))();
    param_1[10] = lVar1;
    if (lVar1 == 0) {
      return 0xffff9e80;
    }
  }
  *param_1 = param_2;
  return 0;
}



undefined8 mbedtls_cipher_setkey(long *param_1,undefined8 param_2,int param_3,uint param_4)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (((param_4 < 2) && (lVar2 = *param_1, lVar2 != 0)) &&
     ((bVar1 = *(byte *)(lVar2 + 0xb), 1 < (bVar1 & 3) ||
      ((*(byte *)(lVar2 + 9) & 0xf) << 6 == param_3)))) {
    *(int *)(param_1 + 1) = param_3;
    *(uint *)((long)param_1 + 0xc) = param_4;
    if ((param_4 != 1) &&
       ((uVar3 = (*(byte *)(lVar2 + 9) & 0xfffffff0) - 0x30, 0x20 < (byte)uVar3 ||
        ((0x100010001U >> ((ulong)uVar3 & 0x3f) & 1) == 0)))) {
                    /* WARNING: Could not emulate address calculation at 0x001006e9 */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                    (ulong)(bVar1 >> 2 & 0x1f) * 8) + 0x48))
                        (param_1[10],param_2,param_3);
      return uVar4;
    }
                    /* WARNING: Could not emulate address calculation at 0x001006e9 */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                  (ulong)(bVar1 >> 2 & 0x1f) * 8) + 0x40))
                      (param_1[10],param_2,param_3);
    return uVar4;
  }
  return 0xffff9f00;
}



undefined8 mbedtls_cipher_set_iv(long *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return 0xffff9f00;
  }
  if (0x10 < param_3) {
    return 0xffff9f80;
  }
  if ((*(byte *)(lVar8 + 0xb) & 1) == 0) {
    uVar9 = (ulong)(*(byte *)(lVar8 + 8) >> 5) << 2;
    if (param_3 < uVar9) {
      return 0xffff9f00;
    }
    cVar1 = *(char *)(lVar8 + 10);
  }
  else {
    cVar1 = *(char *)(lVar8 + 10);
    uVar9 = param_3;
  }
  if (cVar1 == 'L') {
    if (param_3 != 0xc) {
      return 0xffff9f00;
    }
    iVar3 = mbedtls_chacha20_starts(param_1[10],param_2,0);
    if (iVar3 != 0) {
      return 0xffff9f00;
    }
    bVar2 = *(byte *)(*param_1 + 9);
  }
  else {
    if ((cVar1 == 'M') && (param_3 != 0xc)) {
      return 0xffff9f00;
    }
    bVar2 = *(byte *)(lVar8 + 9);
  }
  if ((bVar2 & 0xf0) == 0x60) {
    uVar6 = mbedtls_gcm_starts(param_1[10],*(undefined4 *)((long)param_1 + 0xc),param_2,param_3);
    return uVar6;
  }
  if ((bVar2 & 0xf0) != 0x90) {
    if (uVar9 != 0) {
      uVar4 = (uint)uVar9;
      uVar5 = uVar9 & 0xffffffff;
      if (uVar4 < 8) {
        if ((uVar9 & 4) == 0) {
          if ((uVar4 != 0) && (*(char *)(param_1 + 7) = (char)*param_2, (uVar9 & 2) != 0)) {
            *(undefined2 *)((long)param_1 + uVar5 + 0x36) =
                 *(undefined2 *)((long)param_2 + (uVar5 - 2));
          }
        }
        else {
          *(int *)(param_1 + 7) = (int)*param_2;
          *(undefined4 *)((long)param_1 + uVar5 + 0x34) =
               *(undefined4 *)((long)param_2 + (uVar5 - 4));
        }
      }
      else {
        param_1[7] = *param_2;
        *(undefined8 *)((long)param_1 + (uVar9 & 0xffffffff) + 0x30) =
             *(undefined8 *)((long)param_2 + ((uVar9 & 0xffffffff) - 8));
        lVar8 = (long)param_1 + (0x38 - ((ulong)(param_1 + 8) & 0xfffffffffffffff8));
        uVar4 = uVar4 + (int)lVar8 & 0xfffffff8;
        if (7 < uVar4) {
          uVar5 = 0;
          do {
            uVar7 = (int)uVar5 + 8;
            *(undefined8 *)(((ulong)(param_1 + 8) & 0xfffffffffffffff8) + uVar5) =
                 *(undefined8 *)((long)param_2 + (uVar5 - lVar8));
            uVar5 = (ulong)uVar7;
          } while (uVar7 < uVar4);
        }
      }
      param_1[9] = uVar9;
    }
    return 0;
  }
  uVar6 = mbedtls_ccm_set_lengths(param_1[10],0,0,0);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  if (*(int *)((long)param_1 + 0xc) == 0) {
    uVar6 = 2;
  }
  else {
    if (*(int *)((long)param_1 + 0xc) != 1) {
      return 0xffff9f00;
    }
    uVar6 = 3;
  }
  uVar6 = mbedtls_ccm_starts(param_1[10],uVar6,param_2,param_3);
  return uVar6;
}



undefined8 mbedtls_cipher_reset(long *param_1)

{
  if (*param_1 != 0) {
    param_1[6] = 0;
    return 0;
  }
  return 0xffff9f00;
}



undefined8 mbedtls_cipher_update_ad(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar2 = 0xffff9f00;
  }
  else {
    if ((*(byte *)(lVar1 + 9) & 0xf0) == 0x60) {
      uVar2 = mbedtls_gcm_update_ad(param_1[10],param_2,param_3);
      return uVar2;
    }
    if (*(char *)(lVar1 + 10) == 'M') {
      uVar2 = mbedtls_chachapoly_starts(param_1[10],param_1 + 7,*(int *)((long)param_1 + 0xc) != 1);
      if ((int)uVar2 == 0) {
        uVar2 = mbedtls_chachapoly_update_aad(param_1[10],param_2,param_3);
        return uVar2;
      }
    }
    else {
      uVar2 = 0xffff9f80;
    }
  }
  return uVar2;
}



undefined8
mbedtls_cipher_update(long *param_1,void *param_2,ulong param_3,void *param_4,ulong *param_5)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  ulong uVar10;
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
    return 0xffff9f00;
  }
  bVar9 = *(byte *)(lVar7 + 8);
  *param_5 = 0;
  uVar10 = (ulong)(bVar9 & 0x1f);
  if ((bVar9 & 0x1f) == 0) {
    return 0xffff9c80;
  }
  bVar9 = *(byte *)(lVar7 + 9) & 0xf0;
  if (bVar9 == 0x10) {
    if (uVar10 == param_3) {
      bVar9 = *(byte *)(lVar7 + 0xb);
      uVar2 = *(undefined4 *)((long)param_1 + 0xc);
      *param_5 = uVar10;
                    /* WARNING: Could not emulate address calculation at 0x00100b27 */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                    (ulong)(bVar9 >> 2 & 0x1f) * 8) + 8))(param_1[10],uVar2,param_2)
      ;
      return uVar5;
    }
    return 0xffff9d80;
  }
  if (bVar9 == 0x60) {
    uVar5 = mbedtls_gcm_update(param_1[10],param_2,param_3,param_4,param_3,param_5);
    return uVar5;
  }
  if (bVar9 == 0x90) {
    uVar5 = mbedtls_ccm_update(param_1[10],param_2,param_3,param_4,param_3,param_5);
    return uVar5;
  }
  if (*(char *)(lVar7 + 10) == 'M') {
    *param_5 = param_3;
    uVar5 = mbedtls_chachapoly_update(param_1[10],param_3,param_2);
    return uVar5;
  }
  if (param_2 == param_4) {
    if (param_1[6] != 0) {
      return 0xffff9f00;
    }
    if (param_3 % uVar10 != 0) {
      return 0xffff9f00;
    }
  }
  if (bVar9 != 0x20) {
    if (bVar9 == 0x30) {
      uVar5 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                    (ulong)(*(byte *)(lVar7 + 0xb) >> 2 & 0x1f) * 8) + 0x18))
                        (param_1[10],*(undefined4 *)((long)param_1 + 0xc),param_3,param_1 + 6,
                         param_1 + 7,param_2,param_4);
      iVar3 = (int)uVar5;
    }
    else if (bVar9 == 0x40) {
      uVar5 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                    (ulong)(*(byte *)(lVar7 + 0xb) >> 2 & 0x1f) * 8) + 0x20))
                        (param_1[10],param_3,param_1 + 6,param_1 + 7,param_2,param_4);
      iVar3 = (int)uVar5;
    }
    else if (bVar9 == 0x50) {
      uVar5 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                    (ulong)(*(byte *)(lVar7 + 0xb) >> 2 & 0x1f) * 8) + 0x28))
                        (param_1[10],param_3,param_1 + 6,param_1 + 7,param_1 + 4,param_2,param_4);
      iVar3 = (int)uVar5;
    }
    else if (bVar9 == 0xa0) {
      if (param_1[6] != 0) {
        return 0xffff9f80;
      }
      uVar5 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                    (ulong)(*(byte *)(lVar7 + 0xb) >> 2 & 0x1f) * 8) + 0x30))
                        (param_1[10],*(undefined4 *)((long)param_1 + 0xc),param_3,param_1 + 7,
                         param_2,param_4);
      iVar3 = (int)uVar5;
    }
    else {
      if (bVar9 != 0x70) {
        return 0xffff9f80;
      }
      uVar5 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                    (ulong)(*(byte *)(lVar7 + 0xb) >> 2 & 0x1f) * 8) + 0x38))
                        (param_1[10],param_3,param_2,param_4);
      iVar3 = (int)uVar5;
    }
    if (iVar3 == 0) {
      *param_5 = param_3;
      return uVar5;
    }
    return uVar5;
  }
  lVar7 = param_1[6];
  if (*(int *)((long)param_1 + 0xc) == 0) {
    uVar6 = uVar10 - lVar7;
    if (param_1[2] == 0) goto LAB_00100be2;
    if (param_3 <= uVar6) goto LAB_00100d90;
    if (lVar7 != 0) goto LAB_00100e00;
    uVar6 = param_3 % uVar10;
    if (param_3 % uVar10 == 0) goto LAB_00100cb8;
  }
  else {
    if (*(int *)((long)param_1 + 0xc) == 1) {
      uVar6 = uVar10 - lVar7;
LAB_00100be2:
      if (param_3 < uVar6) {
LAB_00100d90:
        memcpy((void *)((long)param_1 + lVar7 + 0x20),param_2,param_3);
        param_1[6] = param_1[6] + param_3;
        return 0;
      }
    }
    if (lVar7 != 0) {
LAB_00100e00:
      memcpy((void *)((long)param_1 + lVar7 + 0x20),param_2,uVar10 - lVar7);
      uVar5 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                    (ulong)(*(byte *)(*param_1 + 0xb) >> 2 & 0x1f) * 8) + 0x10))
                        (param_1[10],*(undefined4 *)((long)param_1 + 0xc),uVar10,param_1 + 7,
                         param_1 + 4,param_4);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      param_4 = (void *)((long)param_4 + uVar10);
      *param_5 = *param_5 + uVar10;
      param_1[6] = 0;
      param_2 = (void *)((long)param_2 + (uVar10 - lVar7));
      param_3 = (lVar7 + param_3) - uVar10;
    }
    if (param_3 == 0) {
      return 0;
    }
    uVar6 = param_3 % uVar10;
    if (param_3 % uVar10 == 0) {
      iVar3 = *(int *)((long)param_1 + 0xc);
      if (iVar3 != 0) goto LAB_00100c19;
LAB_00100cb8:
      uVar6 = uVar10;
      if (param_1[2] == 0) {
        iVar3 = 0;
        goto LAB_00100c19;
      }
    }
  }
  param_3 = param_3 - uVar6;
  uVar4 = (uint)uVar6;
  plVar1 = (long *)((long)param_2 + param_3);
  if (uVar4 < 8) {
    if ((uVar6 & 4) == 0) {
      if ((uVar4 != 0) && (*(char *)(param_1 + 4) = (char)*plVar1, (uVar6 & 2) != 0)) {
        *(undefined2 *)((long)param_1 + uVar6 + 0x1e) = *(undefined2 *)((long)plVar1 + (uVar6 - 2));
      }
    }
    else {
      *(int *)(param_1 + 4) = (int)*plVar1;
      *(undefined4 *)((long)param_1 + uVar6 + 0x1c) = *(undefined4 *)((long)plVar1 + (uVar6 - 4));
    }
  }
  else {
    param_1[4] = *plVar1;
    *(undefined8 *)((long)param_1 + uVar6 + 0x18) = *(undefined8 *)((uVar6 - 8) + (long)plVar1);
    lVar7 = (long)param_1 + (0x20 - ((ulong)(param_1 + 5) & 0xfffffffffffffff8));
    uVar4 = (int)lVar7 + uVar4 & 0xfffffff8;
    if (7 < uVar4) {
      uVar8 = 0;
      do {
        uVar10 = (ulong)uVar8;
        uVar8 = uVar8 + 8;
        *(undefined8 *)(((ulong)(param_1 + 5) & 0xfffffffffffffff8) + uVar10) =
             *(undefined8 *)((long)plVar1 + (uVar10 - lVar7));
      } while (uVar8 < uVar4);
    }
  }
  param_1[6] = param_1[6] + uVar6;
  if (param_3 == 0) {
    return 0;
  }
  iVar3 = *(int *)((long)param_1 + 0xc);
LAB_00100c19:
  uVar5 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                (ulong)(*(byte *)(*param_1 + 0xb) >> 2 & 0x1f) * 8) + 0x10))
                    (param_1[10],iVar3,param_3,param_1 + 7,param_2,param_4);
  if ((int)uVar5 == 0) {
    *param_5 = *param_5 + param_3;
    return uVar5;
  }
  return uVar5;
}



undefined8 mbedtls_cipher_finish(long *param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
LAB_00101138:
    uVar5 = 0xffff9f00;
  }
  else {
    bVar2 = *(byte *)(lVar6 + 9);
    *param_3 = 0;
    uVar3 = bVar2 & 0xfffffff0;
    bVar2 = (byte)uVar3;
    if (bVar2 == 0x20) {
      if (param_1[3] == 0) goto LAB_00101138;
      if (1 < (byte)(*(char *)(lVar6 + 10) + 0xb4U)) {
        iVar1 = *(int *)((long)param_1 + 0xc);
        uVar4 = param_1[6];
        if (iVar1 == 1) {
          if ((code *)param_1[2] == (code *)0x0) goto joined_r0x0010111b;
          lVar7 = param_1[9];
          if (lVar7 == 0) {
            lVar7 = (ulong)(*(byte *)(lVar6 + 8) >> 5) << 2;
          }
          (*(code *)param_1[2])(param_1 + 4,(long)(int)lVar7,uVar4);
          lVar6 = *param_1;
          iVar1 = *(int *)((long)param_1 + 0xc);
          uVar4 = (ulong)(*(byte *)(lVar6 + 8) & 0x1f);
        }
        else if ((*(byte *)(lVar6 + 8) & 0x1f) != uVar4) {
          if (uVar4 != 0 || param_1[2] != 0) {
            return 0xffff9d80;
          }
          goto LAB_00100fab;
        }
        uVar5 = (**(code **)(*(long *)(&mbedtls_cipher_base_lookup_table +
                                      (ulong)(*(byte *)(lVar6 + 0xb) >> 2 & 0x1f) * 8) + 0x10))
                          (param_1[10],iVar1,uVar4,param_1 + 7,param_1 + 4,param_2);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        lVar6 = *param_1;
        if (*(int *)((long)param_1 + 0xc) == 0) {
          if (lVar6 == 0) {
            bVar2 = 0;
          }
          else {
            bVar2 = *(byte *)(lVar6 + 8) & 0x1f;
          }
                    /* WARNING: Could not recover jumptable at 0x001010f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)param_1[3])(param_2,bVar2,param_3,(code *)param_1[3]);
          return uVar5;
        }
        if (lVar6 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (ulong)(*(byte *)(lVar6 + 8) & 0x1f);
        }
        *param_3 = uVar4;
      }
    }
    else if (bVar2 < 0x61) {
      if ((bVar2 < 0x30) && (1 < (byte)(*(char *)(lVar6 + 10) + 0xb4U))) {
        if (bVar2 != 0x10) {
          return 0xffff9f80;
        }
        uVar4 = param_1[6];
joined_r0x0010111b:
        if (uVar4 != 0) {
          return 0xffff9d80;
        }
      }
    }
    else {
      uVar3 = uVar3 - 0x70;
      if (((0x30 < (byte)uVar3) || ((0x1000100000001U >> ((ulong)uVar3 & 0x3f) & 1) == 0)) &&
         (1 < (byte)(*(char *)(lVar6 + 10) + 0xb4U))) {
        return 0xffff9f80;
      }
    }
LAB_00100fab:
    uVar5 = 0;
  }
  return uVar5;
}



undefined8 mbedtls_cipher_set_padding_mode(long *param_1,undefined4 param_2)

{
  if (*param_1 == 0) {
    return 0xffff9f00;
  }
  if ((*(byte *)(*param_1 + 9) & 0xf0) != 0x20) {
    return 0xffff9f00;
  }
  switch(param_2) {
  case 0:
    param_1[2] = 0x100000;
    param_1[3] = (long)get_pkcs_padding;
    break;
  case 1:
    param_1[2] = (long)add_one_and_zeros_padding;
    param_1[3] = (long)get_one_and_zeros_padding;
    break;
  case 2:
    param_1[2] = (long)add_zeros_and_len_padding;
    param_1[3] = (long)get_zeros_and_len_padding;
    break;
  case 3:
    param_1[2] = (long)add_zeros_padding;
    param_1[3] = (long)get_zeros_padding;
    break;
  case 4:
    param_1[2] = 0;
    param_1[3] = (long)get_no_padding;
    return 0;
  default:
    return 0xffff9f80;
  }
  return 0;
}



undefined8 mbedtls_cipher_write_tag(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  lVar1 = *param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar1 == 0) || (*(int *)((long)param_1 + 0xc) != 1)) {
LAB_001012f0:
    uVar2 = 0xffff9f00;
  }
  else if ((*(byte *)(lVar1 + 9) & 0xf0) == 0x60) {
    uVar2 = mbedtls_gcm_finish(param_1[10],0,0,auStack_18,param_2,param_3);
  }
  else {
    if (*(char *)(lVar1 + 10) == 'M') {
      if (param_3 == 0x10) {
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = mbedtls_chachapoly_finish(param_1[10]);
          return uVar2;
        }
        goto LAB_00101307;
      }
      goto LAB_001012f0;
    }
    uVar2 = 0xffff9f80;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00101307:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_cipher_check_tag(long *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  long local_30;
  
  lVar2 = *param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 == 0) || (*(int *)((long)param_1 + 0xc) != 0)) {
LAB_00101430:
    iVar1 = -0x6100;
  }
  else {
    iVar1 = -0x6080;
    if ((*(byte *)(lVar2 + 9) & 0xf0) == 0x60) {
      iVar1 = -0x6100;
      if (0x10 < param_3) goto LAB_0010137a;
      iVar1 = mbedtls_gcm_finish(param_1[10],0,0,local_50,local_48,param_3);
      if (iVar1 != 0) goto LAB_0010137a;
      iVar1 = mbedtls_ct_memcmp(param_2,local_48,param_3);
      if (iVar1 == 0) {
        lVar2 = *param_1;
        iVar1 = 0;
        goto LAB_00101364;
      }
LAB_001013d2:
      iVar1 = -0x6300;
    }
    else {
LAB_00101364:
      if (*(char *)(lVar2 + 10) == 'M') {
        if (param_3 != 0x10) goto LAB_00101430;
        iVar1 = mbedtls_chachapoly_finish(param_1[10],local_48);
        if (iVar1 != 0) goto LAB_0010137a;
        iVar1 = mbedtls_ct_memcmp(param_2,local_48,0x10);
        if (iVar1 != 0) goto LAB_001013d2;
      }
    }
    mbedtls_platform_zeroize(local_48,param_3);
  }
LAB_0010137a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_cipher_crypt
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,long param_6,long *param_7)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = mbedtls_cipher_set_iv();
  if ((int)uVar1 == 0) {
    if (*param_1 == 0) {
      uVar1 = 0xffff9f00;
    }
    else {
      param_1[6] = 0;
      uVar1 = mbedtls_cipher_update(param_1,param_4,param_5,param_6,param_7);
      if ((int)uVar1 == 0) {
        uVar1 = mbedtls_cipher_finish(param_1,param_6 + *param_7,&local_38);
        if ((int)uVar1 == 0) {
          *param_7 = *param_7 + local_38;
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_cipher_auth_encrypt_ext
          (long *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
          undefined8 param_6,long param_7,long param_8,ulong param_9,long *param_10,long param_11)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  
  lVar2 = *param_1;
  bVar4 = *(byte *)(lVar2 + 9) & 0xf0;
  if ((*(byte *)(lVar2 + 9) & 0xe0) == 0xc0) {
    if ((param_5 == 0 && param_3 == 0) && param_11 == 0) {
      uVar3 = mbedtls_nist_kw_wrap(param_1[10],bVar4 != 0xc0,param_6,param_7,param_8,param_10);
      return uVar3;
    }
  }
  else if ((ulong)(param_7 + param_11) <= param_9) {
    lVar1 = param_8 + param_7;
    if (bVar4 == 0x60) {
      *param_10 = param_7;
      uVar3 = mbedtls_gcm_crypt_and_tag
                        (param_1[10],1,param_7,param_2,param_3,param_4,param_5,param_6,param_8,
                         param_11,lVar1);
    }
    else if (bVar4 == 0x80) {
      *param_10 = param_7;
      uVar3 = mbedtls_ccm_encrypt_and_tag
                        (param_1[10],param_7,param_2,param_3,param_4,param_5,param_6,param_8,lVar1,
                         param_11);
    }
    else if (*(char *)(lVar2 + 10) == 'M') {
      if (((ulong)(*(byte *)(lVar2 + 8) >> 5) << 2 == param_3) && (param_11 == 0x10)) {
        *param_10 = param_7;
        uVar3 = mbedtls_chachapoly_encrypt_and_tag
                          (param_1[10],param_7,param_2,param_4,param_5,param_6,param_8,lVar1);
      }
      else {
        uVar3 = 0xffff9f00;
      }
    }
    else {
      uVar3 = 0xffff9f80;
    }
    *param_10 = *param_10 + param_11;
    return uVar3;
  }
  return 0xffff9f00;
}



undefined8
mbedtls_cipher_auth_decrypt_ext
          (long *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
          long param_6,ulong param_7,undefined8 param_8,ulong param_9,ulong *param_10,ulong param_11
          )

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  
  lVar2 = *param_1;
  bVar4 = *(byte *)(lVar2 + 9) & 0xf0;
  if ((*(byte *)(lVar2 + 9) & 0xe0) == 0xc0) {
    if ((param_5 == 0 && param_3 == 0) && param_11 == 0) {
      uVar3 = mbedtls_nist_kw_unwrap(param_1[10],bVar4 != 0xc0,param_6);
      return uVar3;
    }
  }
  else if ((param_11 <= param_7) && (param_7 = param_7 - param_11, param_7 <= param_9)) {
    lVar1 = param_6 + param_7;
    if (bVar4 == 0x60) {
      *param_10 = param_7;
      uVar3 = mbedtls_gcm_auth_decrypt
                        (param_1[10],param_7,param_2,param_3,param_4,param_5,lVar1,param_11,param_6,
                         param_8);
      if ((int)uVar3 != -0x12) {
        return uVar3;
      }
      return 0xffff9d00;
    }
    if (bVar4 == 0x80) {
      *param_10 = param_7;
      uVar3 = mbedtls_ccm_auth_decrypt
                        (param_1[10],param_7,param_2,param_3,param_4,param_5,param_6,param_8,lVar1,
                         param_11);
      if ((int)uVar3 != -0xf) {
        return uVar3;
      }
      return 0xffff9d00;
    }
    if (*(char *)(lVar2 + 10) != 'M') {
      return 0xffff9f80;
    }
    if (((ulong)(*(byte *)(lVar2 + 8) >> 5) << 2 == param_3) && (param_11 == 0x10)) {
      *param_10 = param_7;
      uVar3 = mbedtls_chachapoly_auth_decrypt
                        (param_1[10],param_7,param_2,param_4,param_5,lVar1,param_6,param_8);
      if ((int)uVar3 != -0x56) {
        return uVar3;
      }
      return 0xffff9d00;
    }
  }
  return 0xffff9f00;
}



undefined8 mbedtls_cipher_set_padding_mode_cold(void)

{
  return 0xffff9f80;
}


