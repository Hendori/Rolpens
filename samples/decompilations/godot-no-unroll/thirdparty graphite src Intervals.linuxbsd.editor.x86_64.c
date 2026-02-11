
/* graphite2::Zones::insert(graphite2::Zones::Exclusion) */

void graphite2::Zones::insert(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  byte bVar12;
  void *pvVar13;
  float *pfVar14;
  void *pvVar15;
  float *pfVar16;
  byte bVar17;
  long lVar18;
  float *__src;
  long lVar19;
  ulong uVar20;
  long lVar21;
  float fVar22;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  
  if (fStack0000000000000008 <= *(float *)(param_1 + 4)) {
    fStack0000000000000008 = *(float *)(param_1 + 4);
  }
  if (*(float *)((long)param_1 + 0x24) <= fStack000000000000000c) {
    fStack000000000000000c = *(float *)((long)param_1 + 0x24);
  }
  if (fStack0000000000000008 < fStack000000000000000c) {
    pfVar14 = (float *)param_1[1];
    __src = (float *)*param_1;
    if ((float *)*param_1 != pfVar14) {
      do {
        while( true ) {
          if (fStack000000000000000c <= fStack0000000000000008) {
            return;
          }
          fVar1 = *__src;
          fVar22 = __src[1];
          bVar17 = (0.0 <= fVar1 - fStack000000000000000c) * '\x02' |
                   0.0 < fStack0000000000000008 - fVar1;
          bVar12 = (0.0 <= fVar22 - fStack000000000000000c) * '\x02' |
                   0.0 < fStack0000000000000008 - fVar22;
          if ((bVar12 & bVar17) == 0) break;
LAB_001000d2:
          __src = __src + 6;
          if (pfVar14 == __src) {
            return;
          }
        }
        bVar12 = bVar12 ^ bVar17;
        if (bVar12 == 2) {
          if (fVar1 == fStack000000000000000c) {
            return;
          }
          uVar5 = *(undefined8 *)(__src + 2);
          fVar4 = __src[3];
          fVar2 = __src[2];
          fVar3 = __src[4];
          if (fVar22 != fStack000000000000000c) {
            pfVar14 = (float *)param_1[1];
            pvVar13 = (void *)*param_1;
            *__src = fStack000000000000000c;
            uVar6 = *(undefined1 *)(__src + 5);
            uVar20 = ((long)pfVar14 - (long)pvVar13 >> 3) * -0x5555555555555555 + 8U &
                     0xfffffffffffffff8;
            if ((ulong)((param_1[2] - (long)pvVar13 >> 3) * -0x5555555555555555) < uVar20) {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar20;
              if (SUB168(ZEXT816(0x18) * auVar9,8) != 0) {
graphite2_Zones_insert:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              pvVar15 = realloc(pvVar13,SUB168(ZEXT816(0x18) * auVar9,0));
              *param_1 = pvVar15;
              if (pvVar15 == (void *)0x0) goto graphite2_Zones_insert;
              pfVar14 = (float *)((long)pvVar15 + ((long)pfVar14 - (long)pvVar13));
              param_1[1] = pfVar14;
              __src = (float *)(((long)__src - (long)pvVar13) + (long)pvVar15);
              param_1[2] = (void *)((long)pvVar15 + uVar20 * 0x18);
            }
            if (__src != pfVar14) {
              memmove(__src + 6,__src,(long)pfVar14 - (long)__src);
              pfVar14 = (float *)param_1[1];
            }
            param_1[1] = pfVar14 + 6;
            *(undefined1 *)(__src + 5) = uVar6;
            *__src = fVar1;
            __src[1] = fStack000000000000000c;
            __src[2] = fVar2;
            __src[3] = fVar4;
            __src[4] = fVar3;
          }
          *(undefined1 *)(__src + 5) = 0;
          *(ulong *)(__src + 2) =
               CONCAT44((float)((ulong)uVar5 >> 0x20) + fStack0000000000000014,
                        (float)uVar5 + fStack0000000000000010);
          __src[4] = fVar3 + in_stack_00000018;
          return;
        }
        if (bVar12 == 3) {
          uVar11 = *(undefined8 *)(__src + 2);
          uVar5 = *(undefined8 *)(__src + 2);
          pvVar13 = (void *)*param_1;
          pfVar14 = (float *)param_1[1];
          lVar18 = param_1[2];
          uVar6 = *(undefined1 *)(__src + 5);
          lVar19 = (long)__src - (long)pvVar13;
          fVar4 = __src[4];
          if (fVar22 != fStack000000000000000c) {
            *__src = fStack000000000000000c;
            lVar21 = (long)pfVar14 - (long)pvVar13;
            uVar20 = (lVar21 >> 3) * -0x5555555555555555 + 8U & 0xfffffffffffffff8;
            if ((ulong)((lVar18 - (long)pvVar13 >> 3) * -0x5555555555555555) < uVar20) {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar20;
              if (SUB168(ZEXT816(0x18) * auVar8,8) != 0) goto graphite2_Zones_insert;
              pvVar13 = realloc(pvVar13,SUB168(ZEXT816(0x18) * auVar8,0));
              *param_1 = pvVar13;
              if (pvVar13 == (void *)0x0) goto graphite2_Zones_insert;
              pfVar14 = (float *)((long)pvVar13 + lVar21);
              param_1[1] = pfVar14;
              __src = (float *)((long)pvVar13 + lVar19);
              param_1[2] = (void *)((long)pvVar13 + uVar20 * 0x18);
            }
            if (__src != pfVar14) {
              memmove(__src + 6,__src,(long)pfVar14 - (long)__src);
              pvVar13 = (void *)*param_1;
              pfVar14 = (float *)param_1[1];
              lVar19 = (long)__src - (long)pvVar13;
            }
            pfVar14 = pfVar14 + 6;
            lVar18 = param_1[2];
            param_1[1] = pfVar14;
            *__src = fVar1;
            __src[1] = fStack000000000000000c;
            __src[2] = (float)uVar5;
            __src[3] = (float)((ulong)uVar5 >> 0x20);
            *(undefined1 *)(__src + 5) = uVar6;
            __src[4] = fVar4;
          }
          *__src = fStack0000000000000008;
          uVar20 = ((long)pfVar14 - (long)pvVar13 >> 3) * -0x5555555555555555 + 8U &
                   0xfffffffffffffff8;
          if (uVar20 <= (ulong)((lVar18 - (long)pvVar13 >> 3) * -0x5555555555555555)) {
LAB_00100205:
            if (__src != pfVar14) {
              memmove(__src + 6,__src,(long)pfVar14 - (long)__src);
              pfVar14 = (float *)param_1[1];
            }
            uVar5 = *(undefined8 *)(__src + 8);
            fVar22 = __src[10];
            param_1[1] = pfVar14 + 6;
            *(ulong *)__src = CONCAT44(fStack0000000000000008,fVar1);
            *(undefined8 *)(__src + 2) = uVar11;
            *(undefined1 *)(__src + 5) = uVar6;
            *(undefined1 *)(__src + 0xb) = 0;
            __src[4] = fVar4;
            *(ulong *)(__src + 8) =
                 CONCAT44((float)((ulong)uVar5 >> 0x20) + fStack0000000000000014,
                          (float)uVar5 + fStack0000000000000010);
            __src[10] = in_stack_00000018 + fVar22;
            return;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar20;
          if (SUB168(ZEXT816(0x18) * auVar7,8) == 0) {
            pvVar15 = realloc(pvVar13,SUB168(ZEXT816(0x18) * auVar7,0));
            *param_1 = pvVar15;
            if (pvVar15 != (void *)0x0) {
              pfVar14 = (float *)((long)pvVar15 + ((long)pfVar14 - (long)pvVar13));
              param_1[1] = pfVar14;
              __src = (float *)((long)pvVar15 + lVar19);
              param_1[2] = (void *)((long)pvVar15 + uVar20 * 0x18);
              goto LAB_00100205;
            }
          }
          goto graphite2_Zones_insert;
        }
        if (bVar12 == 1) {
          pfVar14 = (float *)param_1[1];
          if (fVar22 == fStack0000000000000008) goto LAB_001000d2;
          pfVar16 = __src;
          if (fVar1 != fStack0000000000000008) {
            pvVar13 = (void *)*param_1;
            lVar18 = param_1[2];
            uVar5 = *(undefined8 *)(__src + 2);
            *__src = fStack0000000000000008;
            uVar6 = *(undefined1 *)(__src + 5);
            fVar4 = __src[4];
            uVar20 = ((long)pfVar14 - (long)pvVar13 >> 3) * -0x5555555555555555 + 8U &
                     0xfffffffffffffff8;
            if ((ulong)((lVar18 - (long)pvVar13 >> 3) * -0x5555555555555555) < uVar20) {
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar20;
              if (SUB168(ZEXT816(0x18) * auVar10,8) != 0) goto graphite2_Zones_insert;
              pvVar15 = realloc(pvVar13,SUB168(ZEXT816(0x18) * auVar10,0));
              *param_1 = pvVar15;
              if (pvVar15 == (void *)0x0) goto graphite2_Zones_insert;
              pfVar14 = (float *)((long)pvVar15 + ((long)pfVar14 - (long)pvVar13));
              param_1[1] = pfVar14;
              __src = (float *)(((long)__src - (long)pvVar13) + (long)pvVar15);
              param_1[2] = (void *)((long)pvVar15 + uVar20 * 0x18);
            }
            pfVar16 = __src + 6;
            if (__src != pfVar14) {
              pfVar16 = (float *)memmove(pfVar16,__src,(long)pfVar14 - (long)__src);
              pfVar14 = (float *)param_1[1];
            }
            pfVar14 = pfVar14 + 6;
            fVar22 = __src[7];
            param_1[1] = pfVar14;
            *(ulong *)__src = CONCAT44(fStack0000000000000008,fVar1);
            *(undefined8 *)(__src + 2) = uVar5;
            *(undefined1 *)(__src + 5) = uVar6;
            __src[4] = fVar4;
          }
          *(undefined1 *)(pfVar16 + 5) = 0;
          *(ulong *)(pfVar16 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) +
                        fStack0000000000000014,
                        (float)*(undefined8 *)(pfVar16 + 2) + fStack0000000000000010);
          pfVar16[4] = pfVar16[4] + in_stack_00000018;
          __src = pfVar16 + 6;
          fStack0000000000000008 = fVar22;
          if (pfVar14 == pfVar16 + 6) {
            return;
          }
        }
        else {
          pfVar14 = (float *)param_1[1];
          *(undefined1 *)(__src + 5) = 0;
          pfVar16 = __src + 6;
          *(ulong *)(__src + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(__src + 2) >> 0x20) + fStack0000000000000014,
                        (float)*(undefined8 *)(__src + 2) + fStack0000000000000010);
          __src[4] = __src[4] + in_stack_00000018;
          __src = pfVar16;
          fStack0000000000000008 = fVar22;
          if (pfVar14 == pfVar16) {
            return;
          }
        }
      } while( true );
    }
  }
  return;
}



/* graphite2::Zones::remove(float, float) */

void __thiscall graphite2::Zones::remove(Zones *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  void *__ptr;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  byte bVar6;
  void *pvVar7;
  float *pfVar8;
  byte bVar9;
  float *__dest;
  ulong uVar10;
  float *pfVar11;
  
  if (param_1 <= *(float *)(this + 0x20)) {
    param_1 = *(float *)(this + 0x20);
  }
  if (*(float *)(this + 0x24) <= param_2) {
    param_2 = *(float *)(this + 0x24);
  }
  if (param_2 <= param_1) {
    return;
  }
  __dest = *(float **)this;
  pfVar8 = *(float **)(this + 8);
  if (__dest != pfVar8) {
    do {
      fVar1 = *__dest;
      bVar9 = (0.0 <= param_1 - __dest[1]) * '\x02' | 0.0 < fVar1 - param_1;
      bVar6 = (0.0 <= param_2 - __dest[1]) * '\x02' | 0.0 < fVar1 - param_2;
      if ((bVar6 & bVar9) == 0) {
        bVar6 = bVar6 ^ bVar9;
        if (bVar6 == 2) {
          pfVar8 = *(float **)(this + 8);
          __dest[1] = param_1;
          if (param_1 != fVar1) goto LAB_0010081b;
        }
        else {
          if (bVar6 != 3) {
            if ((bVar6 != 1) && (param_1 != fVar1)) {
              pfVar8 = *(float **)(this + 8);
              __ptr = *(void **)this;
              *__dest = param_1;
              uVar5 = *(undefined8 *)(__dest + 2);
              fVar2 = __dest[4];
              uVar3 = *(undefined1 *)(__dest + 5);
              uVar10 = ((long)pfVar8 - (long)__ptr >> 3) * -0x5555555555555555 + 8U &
                       0xfffffffffffffff8;
              pfVar11 = __dest;
              if ((ulong)((*(long *)(this + 0x10) - (long)__ptr >> 3) * -0x5555555555555555) <
                  uVar10) {
                auVar4._8_8_ = 0;
                auVar4._0_8_ = uVar10;
                if (SUB168(ZEXT816(0x18) * auVar4,8) != 0) {
graphite2_Zones_remove:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                pvVar7 = realloc(__ptr,SUB168(ZEXT816(0x18) * auVar4,0));
                *(void **)this = pvVar7;
                if (pvVar7 == (void *)0x0) goto graphite2_Zones_remove;
                pfVar8 = (float *)((long)pvVar7 + ((long)pfVar8 - (long)__ptr));
                *(float **)(this + 8) = pfVar8;
                *(void **)(this + 0x10) = (void *)((long)pvVar7 + uVar10 * 0x18);
                pfVar11 = (float *)((long)pvVar7 + ((long)__dest - (long)__ptr));
              }
              __dest = pfVar11 + 6;
              if (pfVar11 != pfVar8) {
                memmove(__dest,pfVar11,(long)pfVar8 - (long)pfVar11);
                pfVar8 = *(float **)(this + 8);
              }
              *(float **)(this + 8) = pfVar8 + 6;
              *(ulong *)pfVar11 = CONCAT44(param_1,fVar1);
              *(undefined8 *)(pfVar11 + 2) = uVar5;
              *(undefined1 *)(pfVar11 + 5) = uVar3;
              pfVar11[4] = fVar2;
            }
            *__dest = param_2;
            return;
          }
          pfVar8 = *(float **)(this + 8);
        }
        pfVar11 = __dest + 6;
        if (pfVar11 != pfVar8) {
          memmove(__dest,pfVar11,(long)pfVar8 - (long)pfVar11);
          pfVar8 = *(float **)(this + 8);
        }
        pfVar8 = pfVar8 + -6;
        *(float **)(this + 8) = pfVar8;
      }
      else {
LAB_0010081b:
        __dest = __dest + 6;
      }
    } while (pfVar8 != __dest);
  }
  return;
}



/* graphite2::Zones::exclude_with_margins(float, float, int) */

void __thiscall
graphite2::Zones::exclude_with_margins(Zones *this,float param_1,float param_2,int param_3)

{
  remove(this,param_1,param_2);
  if (1 < param_3) {
    insert(this);
    insert(this);
    return;
  }
  insert(this);
  insert(this);
  return;
}



/* graphite2::Zones::find_exclusion_under(float) const */

float * __thiscall graphite2::Zones::find_exclusion_under(Zones *this,float param_1)

{
  float *pfVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = *(long *)this;
  uVar3 = 0;
  uVar4 = (*(long *)(this + 8) - lVar2 >> 3) * -0x5555555555555555;
  do {
    while( true ) {
      if (uVar4 <= uVar3) {
        return (float *)(lVar2 + uVar3 * 0x18);
      }
      uVar5 = uVar3 + uVar4 >> 1;
      pfVar1 = (float *)(lVar2 + ((uVar3 + uVar4 & 0xfffffffffffffffe) + uVar5) * 8);
      if (param_1 - pfVar1[1] < 0.0) break;
      uVar3 = uVar5 + 1;
    }
    uVar4 = uVar5;
  } while (0.0 < *pfVar1 - param_1);
  return pfVar1;
}



/* graphite2::Zones::Exclusion::test_position(float) const */

float __thiscall graphite2::Zones::Exclusion::test_position(Exclusion *this,float param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = *(float *)(this + 0xc);
  fVar6 = *(float *)this;
  fVar5 = *(float *)(this + 0x10);
  if (0.0 <= fVar4) {
    fVar4 = fVar5 / fVar4 + param_1;
    if ((fVar6 <= fVar4) && (fVar6 = *(float *)(this + 4), fVar4 <= *(float *)(this + 4))) {
      fVar6 = fVar4;
    }
    return fVar6;
  }
  fVar5 = fVar5 + fVar5;
  fVar1 = *(float *)(this + 8);
  fVar2 = *(float *)(this + 4);
  fVar7 = (fVar4 * fVar6 - fVar5) * fVar6 + fVar1;
  if (((fVar6 < param_1) && (param_1 < fVar2)) &&
     (fVar8 = (fVar4 * param_1 - fVar5) * param_1 + fVar1, fVar8 < fVar7)) {
    fVar7 = fVar8;
    fVar6 = param_1;
  }
  uVar3 = -(uint)(fVar7 <= (fVar4 * fVar2 - fVar5) * fVar2 + fVar1);
  return (float)((uint)fVar6 & uVar3 | ~uVar3 & (uint)fVar2);
}



/* graphite2::Zones::Exclusion::track_cost(float&, float&, float) const */

char graphite2::Zones::Exclusion::track_cost(float *param_1,float *param_2,float param_3)

{
  float *extraout_RDX;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)test_position((Exclusion *)param_1,param_3);
  fVar2 = (param_1[3] * (fVar1 - param_3) - (param_1[4] + param_1[4])) * (fVar1 - param_3) +
          param_1[2];
  if ((*(char *)(param_1 + 5) != '\0') && (*param_2 < fVar2)) {
    return *(char *)(param_1 + 5);
  }
  if (fVar2 < *param_2) {
    *param_2 = fVar2;
    *extraout_RDX = fVar1;
  }
  return '\0';
}



/* graphite2::Zones::closest(float, float&) const */

undefined8 __thiscall graphite2::Zones::closest(Zones *this,float param_1,float *param_2)

{
  Exclusion *pEVar1;
  long lVar2;
  Exclusion *pEVar3;
  long extraout_RDX;
  Exclusion *extraout_RDX_00;
  Zones *pZVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  pZVar4 = this;
  pEVar1 = (Exclusion *)find_exclusion_under(this,param_1);
  pEVar3 = *(Exclusion **)(this + 8);
  if (pEVar1 == pEVar3) {
    pEVar1 = pEVar1 + -0x18;
    auVar11 = (undefined1  [16])0x0;
    uVar10 = 0;
    fVar6 = _LC5;
    fVar9 = _LC4;
    if (pEVar1 == (Exclusion *)(*(long *)this + -0x18)) goto LAB_00100e83;
LAB_00100e00:
    do {
      lVar2 = Exclusion::test_position(pEVar1,param_1);
      uVar10 = auVar11._0_8_;
      fVar5 = (*(float *)(lVar2 + 0xc) * (extraout_XMM0_Da_00 - param_1) -
              (*(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 0x10))) *
              (extraout_XMM0_Da_00 - param_1) + *(float *)(lVar2 + 8);
      if ((*(char *)(lVar2 + 0x14) != '\0') && (fVar6 = fVar9, fVar9 < fVar5)) break;
      fVar6 = fVar5;
      if (fVar9 <= fVar5) {
        fVar6 = fVar9;
      }
      pEVar1 = (Exclusion *)(lVar2 + -0x18);
      auVar8._0_4_ = ~-(uint)(fVar5 < fVar9) & auVar11._0_4_;
      auVar8._4_4_ = auVar11._4_4_;
      auVar8._8_4_ = auVar11._8_4_;
      auVar8._12_4_ = auVar11._12_4_;
      auVar11 = auVar8 | ZEXT416((uint)extraout_XMM0_Da_00 & -(uint)(fVar5 < fVar9));
      uVar10 = auVar11._0_8_;
      fVar9 = fVar6;
    } while (extraout_RDX_00 != pEVar1);
  }
  else {
    auVar11 = (undefined1  [16])0x0;
    fVar9 = _LC4;
    do {
      lVar2 = Exclusion::test_position(pEVar1,param_1);
      fVar5 = (*(float *)(extraout_RDX + 0xc) * (extraout_XMM0_Da - param_1) -
              (*(float *)(extraout_RDX + 0x10) + *(float *)(extraout_RDX + 0x10))) *
              (extraout_XMM0_Da - param_1) + *(float *)(extraout_RDX + 8);
      if ((*(char *)(extraout_RDX + 0x14) != '\0') && (fVar6 = fVar9, fVar9 < fVar5)) break;
      fVar6 = fVar5;
      if (fVar9 <= fVar5) {
        fVar6 = fVar9;
      }
      pEVar1 = (Exclusion *)(extraout_RDX + 0x18);
      auVar7._0_4_ = ~-(uint)(fVar5 < fVar9) & auVar11._0_4_;
      auVar7._4_4_ = auVar11._4_4_;
      auVar7._8_4_ = auVar11._8_4_;
      auVar7._12_4_ = auVar11._12_4_;
      auVar11 = auVar7 | ZEXT416((uint)extraout_XMM0_Da & -(uint)(fVar5 < fVar9));
      fVar9 = fVar6;
    } while (pEVar1 != pEVar3);
    uVar10 = auVar11._0_8_;
    pEVar1 = (Exclusion *)(lVar2 + -0x18);
    fVar9 = fVar6;
    if (pEVar1 != (Exclusion *)(*(long *)pZVar4 + -0x18)) goto LAB_00100e00;
  }
  if (fVar6 == _LC4) {
    fVar6 = _LC5;
  }
LAB_00100e83:
  *param_2 = fVar6;
  return uVar10;
}



/* graphite2::Zones::insert(graphite2::Zones::Exclusion) [clone .cold] */

void graphite2::Zones::insert(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* graphite2::Zones::remove(float, float) [clone .cold] */

void graphite2::Zones::remove(float param_1,float param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


