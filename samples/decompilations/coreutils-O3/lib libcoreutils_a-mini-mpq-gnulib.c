
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mpq_canonical_sign_part_0(void)

{
  __fprintf_chk(_stderr,2,&_LC1,"mpq: Fraction with zero denominator.");
                    /* WARNING: Subroutine does not return */
  abort();
}



void mpq_helper_canonicalize(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_2 + 4) == 0) {
    mpz_set_ui(param_1,0);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      mpz_set_ui(param_1 + 0x10,1);
      return;
    }
  }
  else {
    mpz_init(auStack_48);
    mpz_gcd(auStack_48,param_2,param_3);
    mpz_tdiv_q(param_1,param_2,auStack_48);
    lVar1 = param_1 + 0x10;
    mpz_tdiv_q(lVar1,param_3,auStack_48);
    mpz_clear(auStack_48);
    if (*(int *)(param_1 + 0x14) < 1) {
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        mpq_canonical_sign_part_0();
      }
      mpz_neg(lVar1,lVar1);
      mpz_neg(param_1,param_1);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpq_init(long param_1)

{
  mpz_init();
  mpz_init_set_ui(param_1 + 0x10,1);
  return;
}



void mpq_clear(long param_1)

{
  mpz_clear();
  mpz_clear(param_1 + 0x10);
  return;
}



void mpq_canonicalize(long param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  lVar1 = param_1 + 0x10;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 4) == 0) {
    mpz_set_ui(param_1,0);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      mpz_set_ui(lVar1,1);
      return;
    }
  }
  else {
    mpz_init(auStack_38);
    mpz_gcd(auStack_38,param_1,lVar1);
    mpz_tdiv_q(param_1,param_1,auStack_38);
    mpz_tdiv_q(lVar1,lVar1,auStack_38);
    mpz_clear(auStack_38);
    if (*(int *)(param_1 + 0x14) < 1) {
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        mpq_canonical_sign_part_0();
      }
      mpz_neg(lVar1,lVar1);
      mpz_neg(param_1,param_1);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpq_swap(long param_1,long param_2)

{
  mpz_swap();
  mpz_swap(param_1 + 0x10,param_2 + 0x10);
  return;
}



void mpz_set_q(undefined8 param_1,long param_2)

{
  mpz_tdiv_q(param_1,param_2,param_2 + 0x10);
  return;
}



void mpq_set(long param_1,long param_2)

{
  mpz_set();
  mpz_set(param_1 + 0x10,param_2 + 0x10);
  return;
}



void mpq_set_ui(long param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_set_ui();
  mpz_set_ui(param_1 + 0x10,param_3);
  return;
}



void mpq_set_si(long param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_set_si();
  mpz_set_ui(param_1 + 0x10,param_3);
  return;
}



void mpq_set_z(long param_1,undefined8 param_2)

{
  mpz_set_ui(param_1 + 0x10,1);
  mpz_set(param_1,param_2);
  return;
}



void mpq_set_num(void)

{
  mpz_set();
  return;
}



void mpq_set_den(long param_1)

{
  mpz_set(param_1 + 0x10);
  return;
}



void mpq_get_num(void)

{
  mpz_set();
  return;
}



void mpq_get_den(undefined8 param_1,long param_2)

{
  mpz_set(param_1,param_2 + 0x10);
  return;
}



undefined4 mpq_cmp(long param_1,long param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_58 [16];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_init(auStack_58);
  mpz_init(local_48);
  mpz_mul(auStack_58,param_1,param_2 + 0x10);
  mpz_mul(local_48,param_2,param_1 + 0x10);
  uVar1 = mpz_cmp(auStack_58,local_48);
  mpz_clear(auStack_58);
  mpz_clear(local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 mpq_cmp_z(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_init(auStack_38);
  mpz_mul(auStack_38,param_2,param_1 + 0x10);
  uVar1 = mpz_cmp(param_1,auStack_38);
  mpz_clear(auStack_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool mpq_equal(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = mpz_cmp();
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = mpz_cmp(param_1 + 0x10,param_2 + 0x10);
  return iVar1 == 0;
}



undefined4 mpq_cmp_ui(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  uint local_54;
  undefined1 *local_50;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_50 = (undefined1 *)&local_88;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("d != 0","lib/mini-mpq.c",0x100,"mpq_cmp_ui");
  }
  local_54 = (uint)(param_2 != 0);
  local_40 = &local_80;
  local_58 = 0;
  local_48 = _LC4;
  local_88 = param_2;
  local_80 = param_3;
  mpz_init(local_78);
  mpz_init(local_68);
  mpz_mul(local_78,param_1,&local_48);
  mpz_mul(local_68,&local_58,param_1 + 0x10);
  uVar1 = mpz_cmp(local_78,local_68);
  mpz_clear(local_78);
  mpz_clear(local_68);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 mpq_cmp_si(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("d != 0","lib/mini-mpq.c",0x113,"mpq_cmp_si");
  }
  if (param_2 < 0) {
    local_88 = -param_2;
    local_58 = _LC5;
  }
  else {
    local_58 = (ulong)(param_2 != 0) << 0x20;
    local_88 = param_2;
  }
  local_50 = &local_88;
  local_40 = &local_80;
  local_48 = _LC4;
  local_80 = param_3;
  mpz_init(local_78);
  mpz_init(local_68);
  mpz_mul(local_78,param_1,&local_48);
  mpz_mul(local_68,&local_58,param_1 + 0x10);
  uVar1 = mpz_cmp(local_78,local_68);
  mpz_clear(local_78);
  mpz_clear(local_68);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpq_sgn(void)

{
  mpz_sgn();
  return;
}



void mpq_abs(long param_1,long param_2)

{
  mpz_abs();
  mpz_set(param_1 + 0x10,param_2 + 0x10);
  return;
}



void mpq_neg(long param_1,long param_2)

{
  mpz_neg();
  mpz_set(param_1 + 0x10,param_2 + 0x10);
  return;
}



void mpq_add(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  lVar1 = param_2 + 0x10;
  lVar2 = param_3 + 0x10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_init(local_78);
  mpz_gcd(local_78,lVar1,lVar2);
  iVar3 = mpz_cmp_ui(local_78,1);
  if (iVar3 == 0) {
    mpz_mul(local_78,param_2,lVar2);
    mpz_addmul(local_78,param_3,lVar1);
    mpz_mul(param_1 + 0x10,lVar1,lVar2);
    mpz_swap(param_1,local_78);
  }
  else {
    mpz_init(local_68);
    mpz_init(local_58);
    mpz_tdiv_q(local_68,lVar2,local_78);
    mpz_tdiv_q(local_58,lVar1,local_78);
    mpz_mul(local_68,param_2,local_68);
    mpz_addmul(local_68,param_3,local_58);
    mpz_gcd(local_78,local_68,local_78);
    mpz_tdiv_q(param_1,local_68,local_78);
    mpz_tdiv_q(local_68,lVar2,local_78);
    mpz_mul(param_1 + 0x10,local_68,local_58);
    mpz_clear(local_68);
    mpz_clear(local_58);
  }
  mpz_clear(local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpq_sub(undefined8 param_1,undefined8 param_2,long param_3)

{
  long in_FS_OFFSET;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  long local_10;
  
  local_24 = *(undefined4 *)(param_3 + 0x14);
  local_20 = *(undefined8 *)(param_3 + 0x18);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = *(undefined8 *)(param_3 + 8);
  local_38 = 0;
  local_28 = 0;
  local_34 = -*(int *)(param_3 + 4);
  mpq_add(param_1,param_2,&local_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpq_div(long param_1,long param_2,long param_3)

{
  long in_FS_OFFSET;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  long local_30;
  
  local_60 = *(undefined8 *)(param_3 + 8);
  local_74 = *(undefined4 *)(param_3 + 0x14);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = *(undefined4 *)(param_3 + 4);
  local_70 = *(undefined8 *)(param_3 + 0x18);
  local_78 = 0;
  local_68 = 0;
  mpz_init(local_58);
  mpz_init(local_48);
  mpq_helper_canonicalize(local_58,param_2,&local_68);
  mpq_helper_canonicalize(param_1,&local_78,param_2 + 0x10);
  mpz_mul(param_1,param_1,local_58);
  mpz_mul(param_1 + 0x10,param_1 + 0x10,local_48);
  mpz_clear(local_58);
  mpz_clear(local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpq_mul(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  undefined1 auStack_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_init(auStack_68);
  mpz_init(local_58);
  puVar1 = param_3;
  if (param_2 != param_3) {
    mpq_helper_canonicalize(auStack_68,param_2,param_3 + 0x10);
    mpq_helper_canonicalize(param_1,param_3,param_2 + 0x10);
    param_3 = param_1;
    puVar1 = auStack_68;
  }
  mpz_mul(param_1,param_3,puVar1);
  mpz_mul(param_1 + 0x10,param_3 + 0x10,puVar1 + 0x10);
  mpz_clear(auStack_68);
  mpz_clear(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpq_div_2exp(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = mpz_scan1(param_2,0);
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  mpz_mul_2exp(param_1 + 0x10,param_2 + 0x10,param_3 - uVar1);
  mpz_tdiv_q_2exp(param_1,param_2,uVar1);
  return;
}



void mpq_mul_2exp(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = mpz_scan1(param_2 + 0x10,0);
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  mpz_mul_2exp(param_1,param_2,param_3 - uVar1);
  mpz_tdiv_q_2exp(param_1 + 0x10,param_2 + 0x10,uVar1);
  return;
}



void mpq_inv(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  mpz_set();
  mpz_set(lVar1,param_2 + 0x10);
  mpz_swap(lVar1,param_1);
  if (0 < *(int *)(param_1 + 0x14)) {
    return;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    mpz_neg(lVar1,lVar1);
    mpz_neg(param_1,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  mpq_canonical_sign_part_0();
}



void mpq_set_d(double param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_2 + 0x10;
  mpz_set_ui(lVar1,1);
  if ((param_1 * _LC6 != param_1) && (!NAN(param_1))) {
    uVar3 = 0;
    if (param_1 != param_1 + _LC6) {
      do {
        param_1 = param_1 * _LC7;
        uVar3 = uVar3 + 0x40;
      } while (param_1 + _LC6 != param_1);
    }
    mpz_set_d(param_2);
    uVar2 = mpz_scan1(param_2,0);
    if (uVar3 < uVar2) {
      uVar2 = uVar3;
    }
    mpz_mul_2exp(lVar1,lVar1,uVar3 - uVar2);
    mpz_tdiv_q_2exp(param_2,param_2,uVar2);
    return;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}



void mpq_get_d(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  double dVar5;
  undefined1 local_48 [24];
  long local_30;
  
  lVar1 = param_1 + 0x10;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = mpz_sizeinbase(param_1,2);
  lVar3 = mpz_sizeinbase(lVar1,2);
  if ((lVar3 == 1) || (lVar3 + 0x40U < uVar2)) {
    mpz_init(local_48);
    mpz_mul_2exp(local_48,param_1,0);
    mpz_tdiv_q(local_48,local_48,lVar1);
    dVar5 = (double)mpz_get_d(local_48);
    mpz_clear(local_48);
  }
  else {
    uVar4 = (lVar3 + 0x40U) - uVar2 >> 6;
    mpz_init(local_48);
    uVar2 = uVar4 + 1;
    mpz_mul_2exp(local_48,param_1,uVar2 * 0x40);
    mpz_tdiv_q(local_48,local_48,lVar1);
    dVar5 = (double)mpz_get_d(local_48);
    mpz_clear(local_48);
    if ((uVar2 & 1) == 0) goto LAB_00100ec8;
    while (uVar2 = uVar4, dVar5 = dVar5 * _LC8, uVar2 != 0) {
LAB_00100ec8:
      dVar5 = dVar5 * _LC8 * _LC8;
      if (uVar2 == 2) break;
      dVar5 = dVar5 * _LC8;
      uVar4 = uVar2 - 4;
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(dVar5);
  }
  return;
}



char * mpq_get_str(long param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  long lVar3;
  char *__s_00;
  size_t sVar4;
  long in_FS_OFFSET;
  code *local_50;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (char *)mpz_get_str();
  if (__s != (char *)0x0) {
    param_3 = param_3 + 0x10;
    iVar1 = mpz_cmp_ui(param_3,1);
    if (iVar1 != 0) {
      sVar2 = strlen(__s);
      lVar3 = sVar2 + 1;
      if (param_1 == 0) {
        __s_00 = (char *)mpz_get_str(0,param_2,param_3);
        if (__s_00 == (char *)0x0) goto LAB_00101010;
        mp_get_memory_functions(0,&local_50,&local_48);
        sVar4 = strlen(__s_00);
        sVar4 = sVar4 + 1;
        __s = (char *)(*local_50)(__s,lVar3,lVar3 + sVar4);
        memcpy(__s + lVar3,__s_00,sVar4);
        (*local_48)(__s_00,sVar4);
      }
      else {
        lVar3 = mpz_get_str(param_1 + lVar3,param_2,param_3);
        if (lVar3 == 0) {
LAB_00101010:
                    /* WARNING: Subroutine does not return */
          __assert_fail("rden != NULL","lib/mini-mpq.c",0x1ec,"mpq_get_str");
        }
      }
      __s[sVar2] = '/';
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __s;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



size_t mpq_out_str(FILE *param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  char *__s_00;
  size_t sVar4;
  long in_FS_OFFSET;
  code *local_50;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (char *)mpz_get_str(0);
  if (__s == (char *)0x0) {
LAB_00101180:
    sVar3 = 0;
  }
  else {
    iVar2 = mpz_cmp_ui(param_3 + 0x10,1);
    if (iVar2 != 0) {
      sVar3 = strlen(__s);
      lVar1 = sVar3 + 1;
      __s_00 = (char *)mpz_get_str(0,param_2,param_3 + 0x10);
      if (__s_00 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("rden != NULL","lib/mini-mpq.c",0x1ec,"mpq_get_str");
      }
      mp_get_memory_functions(0,&local_50,&local_48);
      sVar4 = strlen(__s_00);
      sVar4 = sVar4 + 1;
      __s = (char *)(*local_50)(__s,lVar1,lVar1 + sVar4);
      memcpy(__s + lVar1,__s_00,sVar4);
      (*local_48)(__s_00,sVar4);
      __s[sVar3] = '/';
      if (__s == (char *)0x0) goto LAB_00101180;
    }
    sVar4 = strlen(__s);
    sVar3 = fwrite(__s,1,sVar4,param_1);
    mp_get_memory_functions(0,0,&local_48);
    (*local_48)(__s,sVar4 + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mpq_set_str(long param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  char *pcVar2;
  void *__dest;
  ulong uVar3;
  size_t __n;
  long in_FS_OFFSET;
  code *local_50;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = strchr(param_2,0x2f);
  if (pcVar2 == (char *)0x0) {
    mpz_set_ui(param_1 + 0x10,1);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = mpz_set_str(param_1,param_2,param_3);
      return uVar3;
    }
  }
  else {
    mp_get_memory_functions(&local_50,0,&local_48);
    __n = (long)pcVar2 - (long)param_2;
    __dest = (void *)(*local_50)(__n + 1);
    memcpy(__dest,param_2,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
    uVar1 = mpz_set_str(param_1,__dest,param_3);
    (*local_48)(__dest,__n + 1);
    if (uVar1 == 0) {
      uVar1 = mpz_set_str(param_1 + 0x10,pcVar2 + 1,param_3);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


