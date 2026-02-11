
void ossl_ml_dsa_matrix_mult_vector(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  ulong local_450;
  int local_448 [258];
  long local_40;
  
  lVar7 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((void *)*param_3 != (void *)0x0) {
    memset((void *)*param_3,0,param_3[1] << 10);
  }
  if (param_1[1] != 0) {
    local_450 = 0;
    uVar2 = param_1[2];
    do {
      if (uVar2 == 0) break;
      uVar6 = 0;
      lVar3 = lVar7;
      do {
        lVar7 = lVar3 + 0x400;
        ossl_ml_dsa_poly_ntt_mult(lVar3,uVar6 * 0x400 + *param_2,local_448);
        lVar3 = 0;
        lVar5 = local_450 * 0x400 + *param_3;
        do {
          uVar4 = *(int *)(lVar5 + lVar3) + *(int *)((long)local_448 + lVar3);
          uVar1 = (int)((uVar4 ^ 0x7fe001 | uVar4 - 0x7fe001 ^ 0x7fe001) ^ uVar4) >> 0x1f;
          *(uint *)(lVar5 + lVar3) = uVar4 & uVar1 | uVar4 - 0x7fe001 & ~uVar1;
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0x400);
        uVar2 = param_1[2];
        uVar6 = uVar6 + 1;
        lVar3 = lVar7;
      } while (uVar6 < uVar2);
      local_450 = local_450 + 1;
    } while (local_450 < (ulong)param_1[1]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


