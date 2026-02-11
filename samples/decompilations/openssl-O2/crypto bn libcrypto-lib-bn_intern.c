
undefined1 * bn_compute_wNAF(BIGNUM *param_1,int param_2,ulong *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  byte local_48;
  
  iVar3 = BN_is_zero();
  if (iVar3 == 0) {
    if (param_2 - 1U < 7) {
      iVar3 = BN_is_negative(param_1);
      local_48 = -(iVar3 != 0) | 1;
      if ((param_1->d != (ulong *)0x0) && (param_1->top != 0)) {
        iVar3 = BN_num_bits(param_1);
        uVar6 = (ulong)iVar3;
        puVar7 = (undefined1 *)CRYPTO_malloc((int)(uVar6 + 1),"crypto/bn/bn_intern.c",0x3a);
        if (puVar7 != (undefined1 *)0x0) {
          uVar10 = 1 << ((byte)param_2 & 0x1f);
          uVar1 = uVar10 * 2;
          lVar8 = 1;
          uVar11 = (uint)*param_1->d & uVar1 - 1;
          do {
            if (uVar11 == 0) {
              if (uVar6 <= (ulong)(param_2 + lVar8)) {
                if (lVar8 - 1U <= uVar6 + 1) {
                  *param_3 = lVar8 - 1U;
                  return puVar7;
                }
                ERR_new();
                uVar9 = 0x7e;
                goto LAB_0010027e;
              }
              cVar2 = '\0';
              iVar3 = 0;
            }
            else {
              if ((uVar11 & 1) != 0) {
                uVar5 = uVar11;
                if ((uVar11 & uVar10) == 0) {
LAB_00100153:
                  if ((int)-uVar10 < (int)uVar5) goto LAB_00100160;
                }
                else {
                  if ((ulong)(param_2 + lVar8) < uVar6) {
                    uVar5 = uVar11 + uVar10 * -2;
                    goto LAB_00100153;
                  }
                  uVar5 = (int)(uVar1 - 1) >> 1 & uVar11;
LAB_00100160:
                  if (((int)uVar5 < (int)uVar10) && ((uVar5 & 1) != 0)) {
                    uVar11 = uVar11 - uVar5;
                    if ((uVar11 == 0 || uVar1 == uVar11) || (uVar10 == uVar11)) {
                      iVar3 = (int)uVar11 >> 1;
                      cVar2 = (char)uVar5 * local_48;
                      goto LAB_00100100;
                    }
                    ERR_new();
                    uVar9 = 0x6d;
                    goto LAB_0010027e;
                  }
                }
                ERR_new();
                uVar9 = 0x61;
                goto LAB_0010027e;
              }
              iVar3 = (int)uVar11 >> 1;
              cVar2 = '\0';
            }
LAB_00100100:
            puVar7[lVar8 + -1] = cVar2;
            iVar4 = (int)lVar8;
            lVar8 = lVar8 + 1;
            iVar4 = BN_is_bit_set(param_1,param_2 + iVar4);
            uVar11 = iVar3 + (iVar4 << ((byte)param_2 & 0x1f));
          } while ((int)uVar11 <= (int)uVar1);
          ERR_new();
          uVar9 = 0x78;
LAB_0010027e:
          ERR_set_debug("crypto/bn/bn_intern.c",uVar9,"bn_compute_wNAF");
          ERR_set_error(3,0xc0103,0);
          goto LAB_0010024b;
        }
        goto LAB_00100248;
      }
      ERR_new();
      uVar9 = 0x35;
    }
    else {
      ERR_new();
      uVar9 = 0x29;
    }
    ERR_set_debug("crypto/bn/bn_intern.c",uVar9,"bn_compute_wNAF");
    ERR_set_error(3,0xc0103,0);
  }
  else {
    puVar7 = (undefined1 *)CRYPTO_malloc(1,"crypto/bn/bn_intern.c",0x1f);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 0;
      *param_3 = 1;
      return puVar7;
    }
  }
LAB_00100248:
  puVar7 = (undefined1 *)0x0;
LAB_0010024b:
  CRYPTO_free(puVar7);
  return (undefined1 *)0x0;
}



undefined4 bn_get_top(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



undefined4 bn_get_dmax(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



void bn_set_all_zero(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < *(int *)((long)param_1 + 0xc)) {
    memset((void *)(*param_1 + (long)iVar1 * 8),0,
           (ulong)(uint)((*(int *)((long)param_1 + 0xc) + -1) - iVar1) * 8 + 8);
    return;
  }
  return;
}



undefined8 bn_copy_words(void *param_1,undefined8 *param_2,int param_3)

{
  void *__dest;
  
  if (param_3 < *(int *)(param_2 + 1)) {
    return 0;
  }
  __dest = memset(param_1,0,(long)param_3 << 3);
  if ((void *)*param_2 != (void *)0x0) {
    memcpy(__dest,(void *)*param_2,(long)*(int *)(param_2 + 1) << 3);
  }
  return 1;
}



undefined8 bn_get_words(undefined8 *param_1)

{
  return *param_1;
}



void bn_set_static_words(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 2;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = CONCAT44(param_3,param_3);
  bn_correct_top();
  return;
}



undefined8 bn_set_words(undefined8 *param_1,void *param_2,int param_3)

{
  long lVar1;
  
  lVar1 = bn_wexpand(param_1,param_3);
  if (lVar1 != 0) {
    memcpy((void *)*param_1,param_2,(long)param_3 << 3);
    *(int *)(param_1 + 1) = param_3;
    bn_correct_top(param_1);
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/bn/bn_intern.c",0xbb,"bn_set_words");
  ERR_set_error(3,0x80003,0);
  return 0;
}


