
/* RandomPCG::RandomPCG(unsigned long, unsigned long) */

void __thiscall RandomPCG::RandomPCG(RandomPCG *this,ulong param_1,ulong param_2)

{
  *(ulong *)(this + 0x18) = param_2;
  *(ulong *)(this + 0x10) = param_1;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  pcg32_srandom_r((pcg32_random_t *)this,param_1,param_2);
  return;
}



/* RandomPCG::randomize() */

void __thiscall RandomPCG::randomize(RandomPCG *this)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  
  plVar1 = (long *)OS::get_singleton();
  dVar4 = (double)(**(code **)(*plVar1 + 0x1f0))(plVar1);
  plVar1 = (long *)OS::get_singleton();
  lVar2 = (**(code **)(*plVar1 + 0x208))(plVar1);
  if (_LC0 <= dVar4) {
    uVar3 = (long)(dVar4 - _LC0) ^ 0x8000000000000000;
  }
  else {
    uVar3 = (ulong)dVar4;
  }
  uVar3 = (uVar3 + lVar2) * *(long *)this + 0x14057b7ef767814f;
  *(ulong *)(this + 0x10) = uVar3;
  pcg32_srandom_r((pcg32_random_t *)this,uVar3,*(ulong *)(this + 0x18));
  return;
}



/* RandomPCG::rand_weighted(Vector<float> const&) */

long __thiscall RandomPCG::rand_weighted(RandomPCG *this,Vector *param_1)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  pfVar1 = *(float **)(param_1 + 8);
  if (pfVar1 == (float *)0x0) {
    _err_print_error("rand_weighted","core/math/random_pcg.cpp",0x2f,
                     "Condition \"p_weights.is_empty()\" is true. Returning: -1",
                     "Weights array is empty.",0,0);
    return -1;
  }
  lVar2 = *(long *)(pfVar1 + -2);
  if (lVar2 < 1) {
    uVar4 = pcg32_random_r((pcg32_random_t *)this);
    if (uVar4 == 0) {
      return -1;
    }
    fVar8 = 0.0;
  }
  else {
    fVar8 = 0.0;
    pfVar5 = pfVar1;
    do {
      fVar8 = fVar8 + *pfVar5;
      pfVar5 = pfVar5 + 1;
    } while (pfVar1 + lVar2 != pfVar5);
    uVar4 = pcg32_random_r((pcg32_random_t *)this);
    if (uVar4 == 0) {
      fVar7 = fVar8 * 0.0;
      goto LAB_0010015d;
    }
  }
  uVar3 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  uVar4 = pcg32_random_r((pcg32_random_t *)this);
  fVar7 = ldexpf((float)(uVar4 | 0x80000001),-0x20 - (uVar3 ^ 0x1f));
  fVar7 = fVar7 * fVar8;
  if (lVar2 < 1) {
    return -1;
  }
LAB_0010015d:
  lVar6 = 0;
  do {
    fVar7 = fVar7 - pfVar1[lVar6];
    if (fVar7 < 0.0) {
      return lVar6;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != lVar2);
  do {
    lVar6 = lVar6 + -1;
    if (0.0 < pfVar1[lVar6]) {
      return lVar6;
    }
  } while (lVar6 != 0);
  return -1;
}



/* RandomPCG::random(double, double) */

double __thiscall RandomPCG::random(RandomPCG *this,double param_1,double param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  uVar2 = pcg32_random_r((pcg32_random_t *)this);
  if (uVar2 == 0) {
    dVar5 = 0.0;
  }
  else {
    uVar3 = pcg32_random_r((pcg32_random_t *)this);
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar4 = pcg32_random_r((pcg32_random_t *)this);
    dVar5 = ldexp((double)(CONCAT44(uVar3,uVar4) | 0x8000000000000001),iVar1 + -0x5f);
  }
  return (param_2 - param_1) * dVar5 + param_1;
}



/* RandomPCG::random(float, float) */

float __thiscall RandomPCG::random(RandomPCG *this,float param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = pcg32_random_r((pcg32_random_t *)this);
  if (uVar2 == 0) {
    fVar3 = 0.0;
  }
  else {
    uVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar2 = pcg32_random_r((pcg32_random_t *)this);
    fVar3 = ldexpf((float)(uVar2 | 0x80000001),-0x20 - (uVar1 ^ 0x1f));
  }
  return (param_2 - param_1) * fVar3 + param_1;
}



/* RandomPCG::random(int, int) */

int __thiscall RandomPCG::random(RandomPCG *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - param_2;
    iVar2 = -iVar1;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    iVar2 = pcg32_boundedrand_r((pcg32_random_t *)this,iVar2 + 1);
    if (param_2 < param_1) {
      param_1 = param_2;
    }
    param_1 = param_1 + iVar2;
  }
  return param_1;
}


