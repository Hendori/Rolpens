
/* Math::rand_from_seed(unsigned long*) */

void Math::rand_from_seed(ulong *param_1)

{
  long in_FS_OFFSET;
  RandomPCG aRStack_48 [16];
  ulong local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  RandomPCG::RandomPCG(aRStack_48,*param_1,0x14057b7ef767814f);
  pcg32_random_r((pcg32_random_t *)aRStack_48);
  *param_1 = local_38;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Math::seed(unsigned long) */

void Math::seed(ulong param_1)

{
  default_rand._16_8_ = param_1;
  pcg32_srandom_r((pcg32_random_t *)default_rand,param_1,default_rand._24_8_);
  return;
}



/* Math::randomize() */

void Math::randomize(void)

{
  RandomPCG::randomize();
  return;
}



/* Math::rand() */

void Math::rand(void)

{
  pcg32_random_r((pcg32_random_t *)default_rand);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Math::randfn(double, double) */

double Math::randfn(double param_1,double param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double local_38;
  double dStack_30;
  
  uVar2 = pcg32_random_r((pcg32_random_t *)default_rand);
  if (uVar2 == 0) {
    local_38 = _LC0;
  }
  else {
    uVar3 = pcg32_random_r((pcg32_random_t *)default_rand);
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar4 = pcg32_random_r((pcg32_random_t *)default_rand);
    local_38 = ldexp((double)(CONCAT44(uVar3,uVar4) | 0x8000000000000001),iVar1 + -0x5f);
    if (local_38 < _LC0) {
      local_38 = _LC0 + local_38;
      uVar2 = pcg32_random_r((pcg32_random_t *)default_rand);
      goto joined_r0x00100226;
    }
  }
  uVar2 = pcg32_random_r((pcg32_random_t *)default_rand);
joined_r0x00100226:
  dStack_30 = _LC1;
  if (uVar2 != 0) {
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar3 = pcg32_random_r((pcg32_random_t *)default_rand);
    uVar4 = pcg32_random_r((pcg32_random_t *)default_rand);
    dVar5 = ldexp((double)(CONCAT44(uVar3,uVar4) | 0x8000000000000001),iVar1 + -0x5f);
    dStack_30 = cos(dVar5 * __LC2);
  }
  dVar5 = log(local_38);
  dVar5 = dVar5 * __LC3;
  if (dVar5 < 0.0) {
    dVar5 = sqrt(dVar5);
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  return dVar5 * dStack_30 * param_2 + param_1;
}



/* Math::step_decimals(double) */

long Math::step_decimals(double param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((double)(&step_decimals(double)::sd)[lVar1] <= ABS(param_1) - (double)(int)ABS(param_1)) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 10);
  return 0;
}



/* Math::range_step_decimals(double) */

long Math::range_step_decimals(double param_1)

{
  long lVar1;
  
  lVar1 = 0x10;
  if (_LC5 <= param_1) {
    lVar1 = 0;
    do {
      if ((double)(&step_decimals(double)::sd)[lVar1] <= ABS(param_1) - (double)(int)ABS(param_1)) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 10);
    lVar1 = 0;
  }
  return lVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Math::ease(double, double) */

double Math::ease(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = _LC6;
  dVar1 = _LC1;
  if (param_1 < 0.0) {
    if (param_2 <= 0.0) {
      if (0.0 <= param_2) {
        return 0.0;
      }
      dVar1 = 0.0;
LAB_001003e6:
      dVar1 = pow(dVar1,(double)((ulong)param_2 ^ __LC7));
      return dVar1 * dVar2;
    }
    param_1 = 0.0;
  }
  else if (param_1 <= _LC1) {
    if (param_2 <= 0.0) {
      if (0.0 <= param_2) {
        return 0.0;
      }
      if (param_1 < _LC6) {
        dVar1 = param_1 + param_1;
        goto LAB_001003e6;
      }
      dVar3 = _LC1 - ((param_1 - _LC6) + (param_1 - _LC6));
      goto LAB_00100422;
    }
  }
  else {
    param_1 = _LC1;
    if (param_2 <= 0.0) {
      if (0.0 <= param_2) {
        return 0.0;
      }
      dVar3 = 0.0;
LAB_00100422:
      dVar3 = pow(dVar3,(double)((ulong)param_2 ^ __LC7));
      return (dVar1 - dVar3) * dVar2 + dVar2;
    }
  }
  if (param_2 < _LC1) {
    dVar2 = pow(_LC1 - param_1,_LC1 / param_2);
    return dVar1 - dVar2;
  }
  dVar1 = pow(param_1,param_2);
  return dVar1;
}



/* Math::snapped(double, double) */

double Math::snapped(double param_1,double param_2)

{
  double dVar1;
  
  if (param_2 == 0.0) {
    return param_1;
  }
  dVar1 = param_1 / param_2 + _LC6;
  if ((double)((ulong)dVar1 & _LC10) < _LC8) {
    return (double)((ulong)((double)(long)dVar1 -
                           (double)(-(ulong)(dVar1 < (double)(long)dVar1) & _LC1)) |
                   ~_LC10 & (ulong)dVar1) * param_2;
  }
  return dVar1 * param_2;
}



/* Math::larger_prime(unsigned int) */

uint Math::larger_prime(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(larger_prime(unsigned_int)::primes + 4);
  uVar2 = 5;
  do {
    if (param_1 < uVar2) {
      return uVar2;
    }
    uVar2 = *puVar1;
    puVar1 = puVar1 + 1;
  } while (uVar2 != 0);
  _err_print_error("larger_prime","core/math/math_funcs.cpp",0xa3,
                   "Condition \"primes[idx] == 0\" is true. Returning: 0",0,0);
  return 0;
}



/* Math::random(double, double) */

void Math::random(double param_1,double param_2)

{
  RandomPCG::random(param_1,param_2);
  return;
}



/* Math::random(float, float) */

void Math::random(float param_1,float param_2)

{
  RandomPCG::random(param_1,param_2);
  return;
}



/* Math::random(int, int) */

void Math::random(int param_1,int param_2)

{
  RandomPCG::random(0x1005c0,param_1);
  return;
}



/* Math::default_rand */

void Math::_GLOBAL__sub_I_default_rand(void)

{
  RandomPCG::RandomPCG((RandomPCG *)default_rand,0xa7323897838d73db,0x14057b7ef767814f);
  return;
}


