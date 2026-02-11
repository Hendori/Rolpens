
void ossl_ml_dsa_matrix_mult_vector(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  ulong local_450;
  int local_448 [258];
  long local_40;
  
  lVar6 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((void *)*param_3 != (void *)0x0) {
    memset((void *)*param_3,0,param_3[1] << 10);
  }
  local_450 = 0;
  if (param_1[1] != 0) {
    do {
      uVar5 = 0;
      lVar2 = lVar6;
      if (param_1[2] != 0) {
        do {
          lVar6 = lVar2 + 0x400;
          ossl_ml_dsa_poly_ntt_mult(lVar2,uVar5 * 0x400 + *param_2,local_448);
          lVar2 = 0;
          lVar4 = local_450 * 0x400 + *param_3;
          do {
            uVar3 = *(int *)(lVar4 + lVar2) + *(int *)((long)local_448 + lVar2);
            uVar1 = (int)((uVar3 ^ 0x7fe001 | uVar3 - 0x7fe001 ^ 0x7fe001) ^ uVar3) >> 0x1f;
            *(uint *)(lVar4 + lVar2) = uVar3 & uVar1 | uVar3 - 0x7fe001 & ~uVar1;
            lVar2 = lVar2 + 4;
          } while (lVar2 != 0x400);
          uVar5 = uVar5 + 1;
          lVar2 = lVar6;
        } while (uVar5 < (ulong)param_1[2]);
      }
      local_450 = local_450 + 1;
    } while (local_450 < (ulong)param_1[1]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


