
/* cmpRuleEntry(void const*, void const*) */

ulong cmpRuleEntry(void *param_1,void *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_1;
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_2;
  uVar3 = 0xffffffff;
  if (((*(ushort *)(uVar1 + 0x10) <= *(ushort *)(uVar2 + 0x10)) &&
      (uVar3 = 1, *(ushort *)(uVar1 + 0x10) == *(ushort *)(uVar2 + 0x10))) &&
     (uVar3 = 0xffffffff, uVar2 <= uVar1)) {
    return (ulong)(uVar2 < uVar1);
  }
  return uVar3;
}



/* graphite2::Pass::Pass() */

void __thiscall graphite2::Pass::Pass(Pass *this)

{
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined2 *)(this + 0x48) = 0;
  this[0x4a] = (Pass)0x0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined2 *)(this + 0x5c) = 0;
  this[0x80] = (Pass)0x0;
  *(undefined8 *)(this + 0x84) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  return;
}



/* graphite2::Pass::~Pass() */

void __thiscall graphite2::Pass::~Pass(Pass *this)

{
  Code *pCVar1;
  Code *this_00;
  
  free(*(void **)(this + 8));
  free(*(void **)(this + 0x20));
  free(*(void **)(this + 0x28));
  free(*(void **)(this + 0x30));
  free(*(void **)(this + 0x18));
  if (*(long *)(this + 0x10) != 0) {
    free((void *)(*(long *)(this + 0x10) + -8));
  }
  pCVar1 = *(Code **)(this + 0x38);
  if (pCVar1 != (Code *)0x0) {
    this_00 = pCVar1 + *(long *)(pCVar1 + -8) * 0x30;
    if (pCVar1 != this_00) {
      do {
        this_00 = this_00 + -0x30;
        graphite2::vm::Machine::Code::~Code(this_00);
      } while (*(Code **)(this + 0x38) != this_00);
    }
    free(this_00 + -8);
  }
  free(*(void **)(this + 0x40));
  graphite2::vm::Machine::Code::~Code((Code *)(this + 0x60));
  return;
}



/* graphite2::Pass::readRules(unsigned char const*, unsigned long, unsigned char const*, unsigned
   short const*, unsigned short const*, unsigned char const*, unsigned short const*, unsigned char
   const*, graphite2::Face&, graphite2::passtype, graphite2::Error&) */

undefined8 __thiscall
graphite2::Pass::readRules
          (Pass *this,long param_1,ulong param_2,long param_3,long param_4,long param_5,long param_6
          ,long param_7,long param_8,long param_9,undefined4 param_11,int *param_12)

{
  undefined1 (*pauVar1) [16];
  ushort *puVar2;
  size_t __size;
  Pass PVar3;
  void *pvVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  void *pvVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  ushort uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  Code *pCVar23;
  ulong uVar24;
  ulong uVar25;
  ushort uVar26;
  ulong uVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  uVar26 = *(ushort *)(this + 0x4e);
  uVar28 = (ulong)uVar26;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = *(ushort *)(param_7 + uVar28 * 2);
  uVar25 = (ulong)(ushort)(uVar17 << 8 | uVar17 >> 8);
  lVar20 = param_4 + uVar28 * 2;
  uVar6 = uVar25 + param_8;
  uVar17 = *(ushort *)(param_5 + uVar28 * 2);
  uVar7 = (ulong)(ushort)(uVar17 << 8 | uVar17 >> 8) + param_6;
  puVar8 = (ulong *)malloc(uVar28 * 0x18 + 8);
  *puVar8 = uVar28;
  pauVar1 = (undefined1 (*) [16])(puVar8 + 1);
  uVar24 = (ulong)((uint)uVar26 * 2);
  if (uVar28 == 0) {
    *(undefined1 (**) [16])(this + 0x10) = pauVar1;
    puVar13 = (undefined8 *)malloc(8);
    lVar20 = 0;
    *puVar13 = 0;
    *(undefined8 **)(this + 0x38) = puVar13 + 1;
  }
  else {
    pauVar10 = pauVar1;
    do {
      pauVar10[1][2] = 0;
      pauVar11 = pauVar10 + 1;
      *pauVar10 = (undefined1  [16])0x0;
      *(undefined2 *)pauVar10[1] = 0;
      pauVar10 = (undefined1 (*) [16])(*pauVar11 + 8);
    } while ((undefined1 (*) [16])(*pauVar11 + 8) != (undefined1 (*) [16])(puVar8 + uVar28 * 3 + 1))
    ;
    *(undefined1 (**) [16])(this + 0x10) = pauVar1;
    puVar9 = (ulong *)malloc(uVar24 * 0x30 + 8);
    *puVar9 = uVar24;
    pauVar10 = (undefined1 (*) [16])(puVar9 + 1);
    do {
      pauVar10[2][0] = 0;
      pauVar11 = pauVar10 + 3;
      *pauVar10 = (undefined1  [16])0x0;
      pauVar10[1] = (undefined1  [16])0x0;
      *(undefined4 *)(pauVar10[2] + 4) = 0;
      *(undefined4 *)(pauVar10[2] + 8) = 0;
      pauVar10 = pauVar11;
    } while (pauVar11 != (undefined1 (*) [16])(puVar9 + uVar28 * 0xc + 1));
    *(undefined1 (**) [16])(this + 0x38) = (undefined1 (*) [16])(puVar9 + 1);
    iVar22 = 0;
    lVar19 = lVar20 + uVar28 * -2;
    do {
      puVar2 = (ushort *)(lVar20 + -2);
      lVar20 = lVar20 + -2;
      iVar22 = iVar22 + (uint)(ushort)(*puVar2 << 8 | *puVar2 >> 8);
    } while (lVar20 != lVar19);
    lVar20 = (long)iVar22;
  }
  __size = uVar24 * 8 + ((uVar25 + uVar7) - param_6) * 9 + lVar20 * 8;
  pvVar12 = malloc(__size);
  *(void **)(this + 0x40) = pvVar12;
  local_48 = pvVar12;
  if (pvVar12 == (void *)0x0) {
LAB_00100673:
    *param_12 = 1;
    *(undefined4 *)(param_9 + 0x98) = 1;
  }
  else {
    *param_12 = 0;
    pauVar10 = (undefined1 (*) [16])(puVar8 + uVar28 * 3 + -2);
    if (pauVar10 < pauVar1) {
LAB_00100723:
      *param_12 = 1;
    }
    else {
      lVar20 = uVar28 * 0x60 + -0x30;
      uVar25 = uVar6;
      uVar24 = uVar7;
      do {
        uVar28 = uVar28 - 1;
        *(uint *)(param_9 + 0x9c) =
             (*(uint *)(param_9 + 0x98) & 0xffff00) + 6 + (int)uVar28 * 0x1000000;
        PVar3 = *(Pass *)(param_3 + uVar28);
        *(Pass *)(pauVar10[1] + 2) = PVar3;
        uVar26 = *(ushort *)(param_4 + uVar28 * 2);
        uVar26 = uVar26 << 8 | uVar26 >> 8;
        *(ushort *)pauVar10[1] = uVar26;
        if ((((0x3f < uVar26) || (uVar26 <= (byte)PVar3)) || ((byte)this[0x5b] < (byte)PVar3)) ||
           ((byte)PVar3 < (byte)this[0x5a])) goto LAB_00100620;
        uVar17 = *(ushort *)(param_7 + uVar28 * 2);
        uVar27 = (ulong)(ushort)(uVar17 << 8 | uVar17 >> 8) + param_8;
        uVar17 = *(ushort *)(param_5 + uVar28 * 2);
        uVar18 = (ulong)(ushort)(uVar17 << 8 | uVar17 >> 8);
        uVar21 = param_6 + uVar18;
        if (uVar18 == 0) {
          uVar21 = uVar24;
        }
        if (((((uVar25 < uVar27) || (uVar6 < uVar27)) ||
             ((uVar6 < uVar25 || ((uVar24 < uVar21 || (uVar7 < uVar21)))))) || (uVar7 < uVar24)) ||
           ((long)pvVar12 + (__size - (long)local_48) <
            (((uVar25 - uVar27) + uVar24) - uVar21) * 9 + 0x10 + (ulong)uVar26 * 8))
        goto LAB_00100620;
        lVar19 = *(long *)(this + 0x38);
        pCVar23 = (Code *)(lVar19 + -0x30 + lVar20);
        if (pCVar23 != (Code *)0x0) {
          graphite2::vm::Machine::Code::Code(pCVar23,0,uVar27);
          lVar19 = *(long *)(this + 0x38);
        }
        *(Code **)(*pauVar10 + 8) = pCVar23;
        pCVar23 = (Code *)(lVar19 + lVar20);
        if (pCVar23 == (Code *)0x0) {
          *(undefined8 *)*pauVar10 = 0;
LAB_0010065a:
          iVar22 = 1;
          *param_12 = 1;
LAB_00100612:
          *(int *)(param_9 + 0x98) = iVar22;
          goto LAB_00100620;
        }
        graphite2::vm::Machine::Code::Code
                  (pCVar23,1,uVar21,uVar24,pauVar10[1][2],*(undefined2 *)pauVar10[1],
                   *(undefined8 *)this,param_9,param_11,&local_48);
        lVar19 = *(long *)(*pauVar10 + 8);
        *(Code **)*pauVar10 = pCVar23;
        if (lVar19 == 0) goto LAB_0010065a;
        iVar22 = *(int *)(lVar19 + 0x24);
        if (iVar22 != 0) {
          iVar22 = iVar22 + 0x3c;
          *param_12 = iVar22;
          if (iVar22 == 0) goto LAB_001005b2;
          goto LAB_00100612;
        }
LAB_001005b2:
        if (*(int *)(pCVar23 + 0x24) != 0) {
          iVar22 = *(int *)(pCVar23 + 0x24) + 0x3c;
          *param_12 = iVar22;
          if (iVar22 != 0) goto LAB_00100612;
        }
        if ((pCVar23[0x2a] != (Code)0x0) || (pCVar23[0x29] != (Code)0x0)) {
          iVar22 = 0x30;
          *param_12 = 0x30;
          goto LAB_00100612;
        }
        pauVar10 = (undefined1 (*) [16])(pauVar10[-2] + 8);
        lVar20 = lVar20 + -0x60;
        *param_12 = 0;
        uVar25 = uVar27;
        uVar24 = uVar21;
      } while (*(undefined1 (**) [16])(this + 0x10) <= pauVar10);
      pvVar12 = *(void **)(this + 0x40);
      if (local_48 <= pvVar12) goto LAB_00100723;
      pvVar12 = realloc(pvVar12,(long)local_48 - (long)pvVar12);
      if (pvVar12 != (void *)0x0) {
        pvVar4 = *(void **)(this + 0x40);
        *param_12 = 0;
        if (pvVar4 != pvVar12) {
          plVar14 = *(long **)(this + 0x38);
          plVar16 = plVar14 + (long)(int)((uint)*(ushort *)(this + 0x4e) * 2) * 6;
          if (plVar14 != plVar16) {
            uVar25 = (long)pvVar12 - (long)pvVar4;
            uVar28 = uVar25 + 7;
            if (-1 < (long)uVar25) {
              uVar28 = uVar25;
            }
            do {
              if ((*plVar14 != 0) && (*(char *)((long)plVar14 + 0x2b) == '\0')) {
                plVar14[1] = plVar14[1] + uVar25;
                *plVar14 = *plVar14 + (uVar28 & 0xfffffffffffffff8);
              }
              plVar14 = plVar14 + 6;
            } while (plVar16 != plVar14);
          }
          *(void **)(this + 0x40) = pvVar12;
        }
        *(uint *)(param_9 + 0x9c) = (*(uint *)(param_9 + 0x98) & 0xffff00) + 4;
        bVar5 = param_2 >> 0x3d != 0;
        uVar28 = (ulong)bVar5;
        if (bVar5) {
          *(undefined8 *)(this + 0x18) = 0;
        }
        else {
          pvVar12 = malloc(param_2 * 8);
          *(void **)(this + 0x18) = pvVar12;
          if (pvVar12 != (void *)0x0) {
            *param_12 = 0;
            if (param_2 != 0) {
              uVar26 = *(ushort *)(this + 0x4e);
              do {
                uVar17 = *(ushort *)(param_1 + uVar28 * 2);
                uVar17 = uVar17 << 8 | uVar17 >> 8;
                if (uVar26 <= uVar17) {
                  *param_12 = 0x34;
                  *(undefined4 *)(param_9 + 0x98) = 0x34;
                  goto LAB_00100620;
                }
                *(ulong *)((long)pvVar12 + uVar28 * 8) =
                     *(long *)(this + 0x10) + (ulong)uVar17 * 0x18;
                uVar28 = uVar28 + 1;
              } while (param_2 != uVar28);
            }
            uVar15 = 1;
            goto LAB_00100622;
          }
        }
        goto LAB_00100673;
      }
      *param_12 = 1;
      pvVar12 = *(void **)(this + 0x40);
    }
    free(pvVar12);
    *(undefined8 *)(this + 0x40) = 0;
    *(int *)(param_9 + 0x98) = *param_12;
  }
LAB_00100620:
  uVar15 = 0;
LAB_00100622:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* graphite2::Pass::readStates(unsigned char const*, unsigned char const*, unsigned char const*,
   graphite2::Face&, graphite2::Error&) */

undefined8 __thiscall
graphite2::Pass::readStates
          (Pass *this,uchar *param_1,uchar *param_2,uchar *param_3,Face *param_4,Error *param_5)

{
  void *__base;
  Pass PVar1;
  Pass PVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  long lVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  void *pvVar12;
  ushort *puVar13;
  ulong uVar14;
  void *pvVar15;
  ushort uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  
  PVar1 = this[0x5b];
  PVar2 = this[0x5a];
  lVar8 = (long)(int)(((uint)(byte)PVar1 - (uint)(byte)PVar2) + 1);
  if (lVar8 < 0) {
    *(undefined8 *)(this + 0x20) = 0;
    pvVar12 = malloc((ulong)*(ushort *)(this + 0x50) << 4);
    *(void **)(this + 0x30) = pvVar12;
    pvVar12 = malloc((long)(int)((uint)*(ushort *)(this + 0x52) * (uint)*(ushort *)(this + 0x58)) *
                     2);
    *(void **)(this + 0x28) = pvVar12;
  }
  else {
    puVar9 = (ushort *)malloc(lVar8 * 2);
    uVar3 = *(ushort *)(this + 0x50);
    uVar17 = (ulong)uVar3;
    *(ushort **)(this + 0x20) = puVar9;
    puVar10 = (undefined8 *)malloc(uVar17 << 4);
    *(undefined8 **)(this + 0x30) = puVar10;
    uVar4 = *(ushort *)(this + 0x58);
    lVar8 = (long)(int)((uint)*(ushort *)(this + 0x52) * (uint)uVar4);
    puVar11 = (ushort *)malloc(lVar8 * 2);
    *(ushort **)(this + 0x28) = puVar11;
    if ((puVar9 != (ushort *)0x0 && puVar10 != (undefined8 *)0x0) && (puVar11 != (ushort *)0x0)) {
      *(undefined4 *)param_5 = 0;
      for (puVar13 = puVar9; puVar9 + ((ulong)(byte)PVar1 - (ulong)(byte)PVar2) + 1 != puVar13;
          puVar13 = puVar13 + 1) {
        uVar16 = *(ushort *)param_1;
        param_1 = (uchar *)((long)param_1 + 2);
        uVar16 = uVar16 << 8 | uVar16 >> 8;
        *puVar13 = uVar16;
        if (uVar3 <= uVar16) {
          uVar5 = *(uint *)(param_4 + 0x98);
          *(undefined4 *)param_5 = 0x31;
          *(uint *)(param_4 + 0x9c) =
               (int)((long)puVar13 - (long)puVar9 >> 1) * 0x1000000 + 7 + (uVar5 & 0xffff00);
          goto LAB_001009b1;
        }
      }
      puVar9 = puVar11;
      if (puVar11 + lVar8 == puVar11) {
        uVar14 = (ulong)*(ushort *)(this + 0x54);
        if (uVar17 == 0) {
          return 1;
        }
        pvVar12 = (void *)(*(long *)(this + 0x18) +
                          (ulong)(ushort)(*(ushort *)(param_3 + uVar14 * 2) << 8 |
                                         *(ushort *)(param_3 + uVar14 * 2) >> 8) * 8);
      }
      else {
        do {
          uVar16 = *(ushort *)param_2;
          param_2 = (uchar *)((long)param_2 + 2);
          uVar16 = uVar16 << 8 | uVar16 >> 8;
          *puVar9 = uVar16;
          if (uVar3 <= uVar16) {
            *(undefined4 *)param_5 = 0x31;
            auVar6._8_8_ = (long)puVar9 - (long)puVar11 >> 0x3f;
            auVar6._0_8_ = (long)puVar9 - (long)puVar11 >> 1;
            *(uint *)(param_4 + 0x9c) =
                 SUB164(auVar6 / SEXT816((long)(ulong)uVar4),0) * 0x100 + 8 +
                 (*(uint *)(param_4 + 0x98) & 0xffff00);
LAB_001009b1:
            uVar7 = 0x31;
            goto LAB_00100a00;
          }
          puVar9 = puVar9 + 1;
        } while (puVar11 + lVar8 != puVar9);
        uVar14 = (ulong)*(ushort *)(this + 0x54);
        pvVar12 = (void *)(*(long *)(this + 0x18) +
                          (ulong)(ushort)(*(ushort *)(param_3 + uVar14 * 2) << 8 |
                                         *(ushort *)(param_3 + uVar14 * 2) >> 8) * 8);
      }
      puVar18 = puVar10 + (uVar17 - uVar14) * 2;
      do {
        if (puVar10 < puVar18) {
          if (pvVar12 == (void *)0x0) goto LAB_00100b50;
          *(undefined4 *)param_5 = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
        }
        else {
          uVar3 = *(ushort *)param_3;
          puVar9 = (ushort *)((long)param_3 + 2);
          param_3 = (uchar *)((long)param_3 + 2);
          uVar14 = (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8);
          lVar8 = (ulong)(ushort)(*puVar9 << 8 | *puVar9 >> 8) * 8;
          __base = (void *)(*(long *)(this + 0x18) + uVar14 * 8);
          pvVar15 = (void *)(*(long *)(this + 0x18) + lVar8);
          if (((pvVar12 <= __base) || (pvVar12 < pvVar15)) || (pvVar15 < __base)) {
LAB_00100b50:
            *(undefined4 *)param_5 = 0x32;
            *(uint *)(param_4 + 0x9c) =
                 (*(uint *)(param_4 + 0x98) & 0xffff00) + 9 + (int)uVar17 * 0x1000000;
            uVar7 = 0x32;
            goto LAB_00100a00;
          }
          lVar8 = lVar8 + uVar14 * -8;
          if (0x400 < lVar8) {
            pvVar15 = (void *)((long)__base + 0x400);
          }
          *(undefined4 *)param_5 = 0;
          *puVar10 = __base;
          puVar10[1] = pvVar15;
          if (__base != (void *)0x0) {
            qsort(__base,lVar8 >> 3,8,cmpRuleEntry);
          }
        }
        puVar10 = puVar10 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          return 1;
        }
      } while( true );
    }
  }
  *(undefined4 *)param_5 = 1;
  uVar7 = 1;
LAB_00100a00:
  *(undefined4 *)(param_4 + 0x98) = uVar7;
  return 0;
}



/* graphite2::Pass::readRanges(unsigned char const*, unsigned long, graphite2::Error&) */

undefined8 __thiscall
graphite2::Pass::readRanges(Pass *this,uchar *param_1,ulong param_2,Error *param_3)

{
  ushort *puVar1;
  size_t __size;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort uVar7;
  
  __size = (ulong)*(ushort *)(this + 0x4c) * 2;
  pvVar3 = malloc(__size);
  *(void **)(this + 8) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    uVar2 = 1;
LAB_00100cd5:
    *(undefined4 *)param_3 = uVar2;
    return 0;
  }
  *(undefined4 *)param_3 = 0;
  lVar4 = __memset_chk(pvVar3,0xff,__size,__size);
  if (param_2 != 0) {
    do {
      puVar5 = (ushort *)
               (lVar4 + (ulong)(ushort)(*(ushort *)param_1 << 8 | *(ushort *)param_1 >> 8) * 2);
      puVar1 = (ushort *)
               (lVar4 + 2 +
               (ulong)(ushort)(*(ushort *)((long)param_1 + 2) << 8 |
                              *(ushort *)((long)param_1 + 2) >> 8) * 2);
      if (((puVar1 <= puVar5) || ((ushort *)(lVar4 + (ulong)*(ushort *)(this + 0x4c) * 2) < puVar1))
         || (uVar7 = *(ushort *)((long)param_1 + 4) << 8 | *(ushort *)((long)param_1 + 4) >> 8,
            *(ushort *)(this + 0x58) <= uVar7)) {
LAB_00100cd0:
        uVar2 = 0x33;
        goto LAB_00100cd5;
      }
      do {
        if (*puVar5 != 0xffff) {
          if (puVar1 != puVar5) goto LAB_00100cd0;
          break;
        }
        puVar6 = puVar5 + 1;
        *puVar5 = uVar7;
        puVar5 = puVar6;
      } while (puVar1 != puVar6);
      *(undefined4 *)param_3 = 0;
      param_2 = param_2 - 1;
      param_1 = (uchar *)((long)param_1 + 6);
    } while (param_2 != 0);
  }
  return 1;
}



/* graphite2::Pass::readPass(unsigned char const*, unsigned long, unsigned long, graphite2::Face&,
   graphite2::passtype, unsigned int, graphite2::Error&) */

undefined8 __thiscall
graphite2::Pass::readPass
          (Pass *this,byte *param_1,ulong param_2,long param_3,Face *param_4,int param_6,
          undefined8 param_7,Error *param_8)

{
  Pass *pPVar1;
  Pass *pPVar2;
  Pass *pPVar3;
  Pass *pPVar4;
  Pass *pPVar5;
  Pass *pPVar6;
  Pass *pPVar7;
  Pass *pPVar8;
  byte bVar9;
  Pass PVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  char cVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  int iVar19;
  ulong uVar20;
  Pass *pPVar21;
  Pass *pPVar22;
  Pass *pPVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  Pass PVar27;
  ushort uVar28;
  Pass *pPVar29;
  ushort uVar30;
  byte *pbVar31;
  ushort uVar32;
  ushort uVar33;
  ulong uVar34;
  ushort uVar35;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined7 local_54;
  undefined1 uStack_4d;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0x28) goto LAB_00100df8;
  *(undefined4 *)param_8 = 0;
  bVar9 = *param_1;
  if (((bVar9 & 0x1f) == 0) ||
     ((((2 < param_6 && (*(char *)(*(long *)this + 0x37) != '\0')) &&
       (*(long *)(*(long *)(param_4 + 0x78) + 0x20) != 0)) &&
      ((*(byte *)(*(long *)this + 0x2e) & 0x20) != 0)))) {
    this[0x48] = (Pass)(bVar9 & 7);
    this[0x5d] = (Pass)(bVar9 >> 5);
    this[0x5d] = (Pass)((byte)this[0x5d] & 1);
    this[0x49] = (Pass)(bVar9 >> 3 & 3);
    PVar27 = *(Pass *)(param_1 + 1);
    if (*(Pass *)(param_1 + 1) == (Pass)0x0) {
      PVar27 = (Pass)0x1;
    }
    this[0x4a] = PVar27;
    uVar28 = *(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8;
    *(ushort *)(this + 0x4e) = uVar28;
    if ((*(ulong *)(this + 0x48) & 0xffff0000000000ff) == 0) {
      *(undefined4 *)param_8 = 0x36;
      *(undefined4 *)(param_4 + 0x98) = 0x36;
      goto LAB_00100dca;
    }
    *(undefined4 *)param_8 = 0;
    uVar11 = *(uint *)(param_1 + 8);
    uVar12 = *(uint *)(param_1 + 0x10);
    uVar13 = *(uint *)(param_1 + 0xc);
    uVar30 = *(ushort *)(param_1 + 0x18) << 8 | *(ushort *)(param_1 + 0x18) >> 8;
    *(ushort *)(this + 0x50) = uVar30;
    uVar35 = *(ushort *)(param_1 + 0x1a) << 8 | *(ushort *)(param_1 + 0x1a) >> 8;
    *(ushort *)(this + 0x52) = uVar35;
    uVar32 = *(ushort *)(param_1 + 0x1c) << 8 | *(ushort *)(param_1 + 0x1c) >> 8;
    *(ushort *)(this + 0x54) = uVar32;
    uVar33 = *(ushort *)(param_1 + 0x1e) << 8 | *(ushort *)(param_1 + 0x1e) >> 8;
    *(ushort *)(this + 0x58) = uVar33;
    if (uVar30 < uVar35) {
      uVar18 = 0x25;
      uVar16 = 0x25;
LAB_00100f1a:
      *(undefined4 *)param_8 = uVar18;
      *(undefined4 *)(param_4 + 0x98) = uVar16;
      goto LAB_00100dca;
    }
    if (uVar30 < uVar32) {
      uVar18 = 0x26;
      uVar16 = 0x26;
      goto LAB_00100f1a;
    }
    if ((uint)uVar35 + (uint)uVar32 < (uint)uVar30) {
      uVar18 = 0x27;
      uVar16 = 0x27;
      goto LAB_00100f1a;
    }
    uVar26 = (ulong)uVar28;
    uVar34 = (ulong)(ushort)(*(ushort *)(param_1 + 0x20) << 8 | *(ushort *)(param_1 + 0x20) >> 8);
    if ((uVar26 != 0) && (uVar34 == 0)) {
      uVar18 = 0x28;
      uVar16 = 0x28;
      goto LAB_00100f1a;
    }
    if ((short)uVar33 < 0) {
      uVar18 = 0x39;
      uVar16 = 0x39;
      goto LAB_00100f1a;
    }
    pPVar2 = (Pass *)(param_1 + param_2);
    *(ushort *)(this + 0x56) = uVar30 - uVar32;
    lVar14 = uVar34 * 6;
    if (pPVar2 < (Pass *)(param_1 + lVar14 + 0x26)) {
LAB_00100df8:
      *(undefined4 *)param_8 = 0x24;
      *(undefined4 *)(param_4 + 0x98) = 0x24;
      goto LAB_00100dca;
    }
    *(undefined4 *)param_8 = 0;
    pbVar31 = param_1 + lVar14 + 0x28;
    *(ushort *)(this + 0x4c) =
         (*(ushort *)(param_1 + lVar14 + 0x24) << 8 | *(ushort *)(param_1 + lVar14 + 0x24) >> 8) + 1
    ;
    pPVar3 = (Pass *)(pbVar31 + (long)(int)(uVar32 + 1) * 2);
    if ((pPVar2 < (Pass *)(pbVar31 + (ulong)uVar32 * 2)) || (pPVar2 < pPVar3)) {
      *(undefined4 *)param_8 = 0x29;
      *(undefined4 *)(param_4 + 0x98) = 0x29;
      goto LAB_00100dca;
    }
    *(undefined4 *)param_8 = 0;
    uVar30 = *(ushort *)(pbVar31 + (ulong)uVar32 * 2);
    uVar20 = (ulong)(ushort)(uVar30 << 8 | uVar30 >> 8);
    pPVar21 = pPVar3 + uVar20 * 2;
    pPVar1 = pPVar21 + 2;
    if (pPVar2 < pPVar1) goto LAB_00100df8;
    PVar27 = *pPVar21;
    this[0x5a] = PVar27;
    PVar10 = pPVar21[1];
    this[0x5b] = PVar10;
    if ((byte)PVar10 < (byte)PVar27) {
      *(undefined4 *)param_8 = 0x2a;
      *(undefined4 *)(param_4 + 0x98) = 0x2a;
      goto LAB_00100dca;
    }
    *(undefined4 *)param_8 = 0;
    lVar14 = uVar26 * 2;
    pPVar22 = pPVar1 + (long)(int)(((uint)(byte)PVar10 - (uint)(byte)PVar27) + 1) * 2;
    pPVar23 = pPVar22 + lVar14;
    pPVar4 = pPVar23 + uVar26;
    pPVar21 = pPVar4 + 3;
    if (pPVar2 < pPVar21) {
      *(undefined4 *)param_8 = 0x2b;
      *(undefined4 *)(param_4 + 0x98) = 0x2b;
      goto LAB_00100dca;
    }
    PVar27 = *pPVar4;
    if (PVar27 == (Pass)0x0) {
      PVar27 = (Pass)0xa;
    }
    this[0x5c] = PVar27;
    uVar30 = *(ushort *)(pPVar4 + 1);
    lVar24 = ((ulong)uVar28 + 1) * 2;
    pPVar29 = pPVar21 + lVar24;
    pPVar5 = pPVar29 + lVar24;
    iVar19 = (uint)uVar35 * (uint)uVar33;
    if (((uint)((int)pPVar2 - (int)pPVar5) <= (uint)(iVar19 * 2)) ||
       (*(undefined4 *)param_8 = 0, pPVar2 <= pPVar5)) goto LAB_00100df8;
    lVar24 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                    uVar11 << 0x18) - param_3;
    pPVar6 = (Pass *)(param_1 + lVar24);
    if (pPVar6 != pPVar5 + (long)iVar19 * 2 + 1) {
      *(undefined4 *)param_8 = 0x2c;
      *(undefined4 *)(param_4 + 0x98) = 0x2c;
      goto LAB_00100dca;
    }
    lVar25 = (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                    uVar13 << 0x18) - param_3;
    pPVar7 = (Pass *)(param_1 + lVar25);
    uVar26 = (ulong)(ushort)(uVar30 << 8 | uVar30 >> 8);
    if (pPVar7 != pPVar6 + uVar26) {
      uVar16 = 0x2d;
LAB_0010118b:
      *(undefined4 *)param_8 = uVar16;
      *(undefined4 *)(param_4 + 0x98) = uVar16;
      goto LAB_00100dca;
    }
    if (lVar25 - lVar24 != uVar26) {
      uVar16 = 0x2e;
      goto LAB_0010118b;
    }
    pPVar8 = (Pass *)(param_1 +
                     ((ulong)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                             uVar12 << 0x18) - param_3));
    if (pPVar8 != pPVar7 + (ushort)(*(ushort *)(pPVar4 + lVar14 + 3) << 8 |
                                   *(ushort *)(pPVar4 + lVar14 + 3) >> 8)) {
      *(undefined4 *)param_8 = 0x2f;
      *(undefined4 *)(param_4 + 0x98) = 0x2f;
      goto LAB_00100dca;
    }
    if (pPVar2 < pPVar8 + (ushort)(*(ushort *)(pPVar29 + lVar14) << 8 |
                                  *(ushort *)(pPVar29 + lVar14) >> 8)) goto LAB_00100df8;
    if (lVar25 != lVar24) {
      *(int *)(param_4 + 0x9c) = *(int *)(param_4 + 0x98) + 1;
      graphite2::vm::Machine::Code::Code
                ((Code *)&local_78,1,pPVar6,pPVar7,*pPVar23,
                 *(ushort *)pPVar22 << 8 | *(ushort *)pPVar22 >> 8,*(undefined8 *)this,param_4,0,0);
      if (*(long *)(this + 0x78) != 0) {
        graphite2::vm::Machine::Code::release_buffers();
      }
      uVar17 = CONCAT17(uStack_4d,local_54);
      uStack_4d = 0;
      *(undefined8 *)(this + 0x84) = uVar17;
      *(undefined8 *)(this + 0x60) = local_78;
      *(undefined8 *)(this + 0x68) = uStack_70;
      *(undefined8 *)(this + 0x70) = local_68;
      *(undefined8 *)(this + 0x78) = uStack_60;
      graphite2::vm::Machine::Code::~Code((Code *)&local_78);
      if ((*(long *)(this + 0x60) == 0) || (*(int *)(this + 0x84) != 0)) {
        *(undefined4 *)param_8 = 1;
        *(undefined4 *)(param_4 + 0x98) = 1;
        goto LAB_00100dca;
      }
      *(undefined4 *)param_8 = 0;
      *(int *)(param_4 + 0x9c) = *(int *)(param_4 + 0x98) + -1;
    }
    if (*(short *)(this + 0x4e) != 0) {
      cVar15 = readRanges(this,param_1 + 0x28,uVar34,param_8);
      if (cVar15 == '\0') {
        *(undefined4 *)(param_4 + 0x98) = *(undefined4 *)param_8;
      }
      else {
        cVar15 = readRules(this,pPVar3,uVar20,pPVar23,pPVar22,pPVar21,pPVar7,pPVar29,pPVar8,param_4,
                           param_6,param_8);
        if (cVar15 != '\0') {
          if (*(short *)(this + 0x4e) != 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar17 = readStates(this,(uchar *)pPVar1,(uchar *)pPVar5,pbVar31,param_4,param_8);
              return uVar17;
            }
            goto LAB_001010b4;
          }
          goto LAB_00101232;
        }
      }
      goto LAB_00100dca;
    }
LAB_00101232:
    uVar17 = 1;
  }
  else {
    *(undefined4 *)param_8 = 0x38;
    *(undefined4 *)(param_4 + 0x98) = 0x38;
LAB_00100dca:
    uVar17 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
LAB_001010b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* graphite2::Pass::runFSM(graphite2::FiniteStateMachine&, graphite2::Slot*) const */

undefined8 __thiscall graphite2::Pass::runFSM(Pass *this,FiniteStateMachine *param_1,Slot *param_2)

{
  FiniteStateMachine *pFVar1;
  FiniteStateMachine *pFVar2;
  Pass PVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  ulong *puVar7;
  FiniteStateMachine *pFVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  Slot *pSVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  ushort uVar17;
  ulong *puVar18;
  FiniteStateMachine *pFVar19;
  FiniteStateMachine *pFVar20;
  FiniteStateMachine *pFVar21;
  char cVar22;
  bool bVar23;
  bool bVar24;
  FiniteStateMachine *local_58;
  
  local_58 = *(FiniteStateMachine **)param_1;
  PVar3 = this[0x5b];
  *(FiniteStateMachine **)(param_1 + 8) = local_58;
  uVar14 = *(undefined8 *)(param_2 + 8);
  if (PVar3 == (Pass)0x0) {
    uVar17 = 0;
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    pSVar13 = param_2;
    do {
      param_2 = *(Slot **)(pSVar13 + 8);
      if (param_2 == (Slot *)0x0) {
        uVar17 = (ushort)uVar11;
        uVar14 = 0;
        param_2 = pSVar13;
        goto LAB_00101431;
      }
      uVar11 = uVar11 + 1;
      pSVar13 = param_2;
    } while ((byte)PVar3 != uVar11);
    uVar17 = (ushort)(byte)PVar3;
    uVar14 = *(undefined8 *)(param_2 + 8);
  }
LAB_00101431:
  lVar6 = *(long *)(param_1 + 0x810);
  *(undefined8 *)(lVar6 + 8) = uVar14;
  *(undefined2 *)(lVar6 + 0x210) = 0;
  *(ushort *)(lVar6 + 0x212) = uVar17;
  if (uVar17 < (byte)this[0x5a]) {
    return 0;
  }
  lVar16 = 1;
  cVar22 = '@';
  uVar4 = *(ushort *)
           (*(long *)(this + 0x20) + (long)(int)((uint)(byte)PVar3 - (uVar11 & 0xffff)) * 2);
  uVar17 = *(ushort *)(this + 0x4c);
LAB_001014b9:
  *(short *)(lVar6 + 0x210) = (short)lVar16;
  uVar5 = *(ushort *)(param_2 + 0x10);
  iVar15 = (int)lVar16;
  *(Slot **)(lVar6 + 8 + lVar16 * 8) = param_2;
  if (uVar17 <= uVar5) {
    return 1;
  }
  uVar5 = *(ushort *)(*(long *)(this + 8) + (ulong)uVar5 * 2);
  if (uVar5 == 0xffff) {
    return 1;
  }
  cVar22 = cVar22 + -1;
  if (cVar22 == '\0') {
    return 0;
  }
  if (*(ushort *)(this + 0x52) <= uVar4) {
    return 1;
  }
  uVar4 = *(ushort *)
           (*(long *)(this + 0x28) +
           ((long)(int)((uint)*(ushort *)(this + 0x58) * (uint)uVar4) + (ulong)uVar5) * 2);
  if (*(ushort *)(this + 0x56) <= uVar4) {
    puVar12 = (undefined8 *)((ulong)uVar4 * 0x10 + *(long *)(this + 0x30));
    puVar18 = (ulong *)*puVar12;
    puVar7 = (ulong *)puVar12[1];
    if (puVar18 == puVar7) goto LAB_001014a0;
    pFVar19 = param_1 + 0x10 + (ulong)(local_58 == param_1 + 0x10) * 0x400;
    pFVar2 = pFVar19 + 0x400;
    *(FiniteStateMachine **)param_1 = pFVar19;
    pFVar8 = *(FiniteStateMachine **)(param_1 + 8);
    pFVar21 = pFVar19;
    do {
      while( true ) {
        bVar23 = pFVar2 != pFVar21;
        bVar24 = local_58 != pFVar8 && bVar23;
        if (local_58 == pFVar8 || !bVar23) {
          pFVar20 = pFVar21;
          if ((puVar7 == puVar18) || (!bVar23)) goto LAB_0010160c;
          goto LAB_001016a8;
        }
        uVar9 = *(ulong *)local_58;
        uVar10 = *puVar18;
        pFVar20 = pFVar21 + 8;
        if (*(ushort *)(uVar9 + 0x10) <= *(ushort *)(uVar10 + 0x10)) break;
LAB_001015c7:
        pFVar1 = local_58 + 8;
        bVar24 = pFVar1 != pFVar8;
        *(ulong *)pFVar21 = *(ulong *)local_58;
        local_58 = pFVar1;
        pFVar21 = pFVar20;
        if (puVar7 == puVar18) goto LAB_001015e0;
      }
      if (*(ushort *)(uVar9 + 0x10) == *(ushort *)(uVar10 + 0x10)) {
        if (uVar9 < uVar10) goto LAB_001015c7;
        if (uVar10 < uVar9) goto LAB_0010158a;
        local_58 = local_58 + 8;
        *(ulong *)pFVar21 = uVar9;
        bVar24 = local_58 != pFVar8;
      }
      else {
LAB_0010158a:
        *(ulong *)pFVar21 = *puVar18;
      }
      puVar18 = puVar18 + 1;
      pFVar21 = pFVar20;
    } while (puVar7 != puVar18);
LAB_001015e0:
    if ((pFVar2 != pFVar20) && (bVar24)) {
      do {
        pFVar1 = pFVar20 + 8;
        pFVar21 = local_58 + 8;
        *(ulong *)pFVar20 = *(ulong *)local_58;
        pFVar20 = pFVar1;
        if (pFVar2 == pFVar1) break;
        local_58 = pFVar21;
      } while (pFVar21 != pFVar8);
    }
LAB_0010160c:
    *(FiniteStateMachine **)(param_1 + 8) = pFVar20;
    goto LAB_00101615;
  }
LAB_001014a0:
  param_2 = *(Slot **)param_2;
  if (uVar4 != 0) goto LAB_001014ac;
  goto LAB_00101628;
  while (puVar18 = puVar18 + 1, pFVar21 = pFVar20, pFVar2 != pFVar20) {
LAB_001016a8:
    pFVar20 = pFVar21 + 8;
    *(ulong *)pFVar21 = *puVar18;
    if (puVar7 == puVar18 + 1) goto LAB_0010160c;
  }
  *(FiniteStateMachine **)(param_1 + 8) = pFVar20;
LAB_00101615:
  param_2 = *(Slot **)param_2;
  local_58 = pFVar19;
  if (uVar4 == 0) goto LAB_00101628;
LAB_001014ac:
  lVar16 = lVar16 + 1;
  if (param_2 == (Slot *)0x0) {
LAB_00101628:
    uVar11 = iVar15 + 1;
    *(short *)(lVar6 + 0x210) = (short)uVar11;
    *(Slot **)(lVar6 + 8 + (ulong)(uVar11 & 0xffff) * 8) = param_2;
    return 1;
  }
  goto LAB_001014b9;
}



/* graphite2::Pass::testConstraint(graphite2::Rule const&, graphite2::vm::Machine&) const */

undefined8 __thiscall graphite2::Pass::testConstraint(Pass *this,Rule *param_1,Machine *param_2)

{
  Rule RVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  
  lVar4 = *(long *)param_2;
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar10 = (ulong)uVar2;
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  RVar1 = param_1[0x12];
  uVar3 = *(ushort *)(lVar4 + 0x212);
  if ((((uint)*(ushort *)(lVar4 + 0x210) < ((uint)uVar2 + (uint)uVar3) - (uint)(byte)RVar1) ||
      (uVar3 < (byte)RVar1)) ||
     (plVar7 = (long *)(lVar4 + 0x10 + ((ulong)uVar3 - (ulong)(byte)RVar1) * 8),
     plVar7[uVar10 - 1] == 0)) {
LAB_001017c0:
    uVar8 = 0;
  }
  else {
    if (((**(long **)param_1 != 0) && (*(int *)((long)*(long **)param_1 + 0x24) == 0)) &&
       (uVar2 != 0)) {
      do {
        if ((*plVar7 != 0) &&
           ((iVar6 = graphite2::vm::Machine::Code::run(*(Machine **)param_1,(Slot ***)param_2),
            iVar6 == 0 || (*(int *)(param_2 + 0x1018) != 0)))) goto LAB_001017c0;
        plVar7 = plVar7 + 1;
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulong)uVar9;
      } while (uVar9 != 0);
    }
    uVar8 = 1;
  }
  if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* graphite2::SlotMap::collectGarbage(graphite2::Slot*&) */

void __thiscall graphite2::SlotMap::collectGarbage(SlotMap *this,Slot **param_1)

{
  ushort uVar1;
  Slot *pSVar2;
  Slot *pSVar3;
  SlotMap *pSVar4;
  
  uVar1 = *(ushort *)(this + 0x210);
  if ((ulong)uVar1 != 1) {
    pSVar4 = this + 0x10;
    do {
      pSVar2 = *(Slot **)pSVar4;
      if ((pSVar2 != (Slot *)0x0) &&
         ((((byte)pSVar2[0x6c] & 1) != 0 || (((byte)pSVar2[0x6c] & 4) != 0)))) {
        if (pSVar2 == *param_1) {
          pSVar3 = *(Slot **)(pSVar2 + 8);
          if (pSVar3 == (Slot *)0x0) {
            pSVar3 = *(Slot **)pSVar2;
          }
          *param_1 = pSVar3;
        }
        graphite2::Segment::freeSlot(*(Slot **)this);
      }
      pSVar4 = pSVar4 + 8;
    } while (this + (ulong)uVar1 * 8 + 8 != pSVar4);
  }
  return;
}



/* graphite2::Pass::doAction(graphite2::vm::Machine::Code const*, graphite2::Slot*&,
   graphite2::vm::Machine&) const */

undefined8 __thiscall
graphite2::Pass::doAction(Pass *this,Code *param_1,Slot **param_2,Machine *param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 != 0) && (*(int *)(param_1 + 0x24) == 0)) {
    lVar3 = *(long *)param_3;
    uVar1 = *(ushort *)(lVar3 + 0x212);
    *(undefined1 *)(lVar3 + 0x225) = 0;
    uVar4 = graphite2::vm::Machine::Code::run((Machine *)param_1,(Slot ***)param_3);
    if (*(int *)(param_3 + 0x1018) == 0) {
      *param_2 = *(Slot **)(lVar3 + 0x10 + (ulong)uVar1 * 8);
      goto LAB_001018f8;
    }
    *param_2 = (Slot *)0x0;
    *(undefined8 *)(lVar3 + 0x218) = 0;
    *(undefined1 *)(lVar3 + 0x225) = 0;
  }
  uVar4 = 0;
LAB_001018f8:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* graphite2::Pass::adjustSlot(int, graphite2::Slot*&, graphite2::SlotMap&) const */

void __thiscall graphite2::Pass::adjustSlot(Pass *this,int param_1,Slot **param_2,SlotMap *param_3)

{
  SlotMap SVar1;
  Slot *pSVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_2 == (Slot *)0x0) {
    if ((param_3[0x225] == (SlotMap)0x0) && (*(long *)(param_3 + 0x218) != 0)) {
      param_1 = param_1 + -1;
      *param_2 = *(Slot **)(*(long *)param_3 + 0x98);
    }
    else {
      pSVar2 = *(Slot **)(*(long *)param_3 + 0xa0);
      *param_2 = pSVar2;
      if ((pSVar2 == *(Slot **)(param_3 + 0x218)) || (*(Slot **)(param_3 + 0x218) == (Slot *)0x0)) {
        param_3[0x225] = (SlotMap)0x0;
      }
      param_1 = param_1 + 1;
    }
  }
  if (param_1 < 0) {
    pSVar2 = *param_2;
    iVar3 = param_1 + 1;
    do {
      if (pSVar2 == (Slot *)0x0) {
        return;
      }
      pSVar2 = *(Slot **)(pSVar2 + 8);
      SVar1 = param_3[0x225];
      *param_2 = pSVar2;
      if ((SVar1 != (SlotMap)0x0) && (*(Slot **)(param_3 + 0x218) == pSVar2)) {
        param_3[0x225] = (SlotMap)0x0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 1);
  }
  else if (param_1 != 0) {
    pSVar2 = *param_2;
    iVar3 = param_1 + -1;
    do {
      while( true ) {
        if (pSVar2 == (Slot *)0x0) {
          return;
        }
        if (pSVar2 != *(Slot **)(param_3 + 0x218)) break;
        pSVar2 = *(Slot **)pSVar2;
        param_3[0x225] = (SlotMap)0x1;
        *param_2 = pSVar2;
        bVar4 = iVar3 == 0;
        iVar3 = iVar3 + -1;
        if (bVar4) {
          return;
        }
      }
      pSVar2 = *(Slot **)pSVar2;
      *param_2 = pSVar2;
      bVar4 = iVar3 != 0;
      iVar3 = iVar3 + -1;
    } while (bVar4);
  }
  return;
}



/* graphite2::Pass::findNDoRule(graphite2::Slot*&, graphite2::vm::Machine&,
   graphite2::FiniteStateMachine&) const */

void __thiscall
graphite2::Pass::findNDoRule(Pass *this,Slot **param_1,Machine *param_2,FiniteStateMachine *param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  
  cVar2 = runFSM(this,param_3,*param_1);
  if (cVar2 == '\0') {
LAB_00101aa5:
    *param_1 = *(Slot **)*param_1;
  }
  else {
    plVar4 = *(long **)param_3;
    plVar1 = *(long **)(param_3 + 8);
    do {
      if (plVar4 == plVar1) goto LAB_00101aa5;
      cVar2 = testConstraint(this,(Rule *)*plVar4,param_2);
      if (cVar2 != '\0') {
        iVar3 = doAction(this,*(Code **)(*plVar4 + 8),param_1,param_2);
        if (*(int *)(param_2 + 0x1018) != 0) {
          return;
        }
        if (*(char *)(*(long *)(*plVar4 + 8) + 0x2a) != '\0') {
          SlotMap::collectGarbage(*(SlotMap **)(param_3 + 0x810),param_1);
        }
        adjustSlot(this,iVar3,param_1,*(SlotMap **)(param_3 + 0x810));
        return;
      }
      plVar4 = plVar4 + 1;
    } while (*(int *)(param_2 + 0x1018) == 0);
  }
  return;
}



/* graphite2::Pass::collisionFinish(graphite2::Segment*, graphite2::json*) const */

undefined8 graphite2::Pass::collisionFinish(Segment *param_1,json *param_2)

{
  long lVar1;
  float fVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x98);
  if (plVar5 != (long *)0x0) {
    lVar3 = *(long *)(param_2 + 0x80);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    do {
      lVar1 = lVar3 + (ulong)*(uint *)(plVar5 + 4) * 0x44;
      fVar2 = *(float *)(lVar1 + 0x10);
      if ((fVar2 != 0.0) || (*(float *)(lVar1 + 0x14) != 0.0)) {
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(ulong *)(lVar1 + 0x18) =
             CONCAT44(*(float *)(lVar1 + 0x14) +
                      (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20),
                      fVar2 + (float)*(undefined8 *)(lVar1 + 0x18));
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return 1;
}



/* graphite2::Pass::resolveCollisions(graphite2::Segment*, graphite2::Slot*, graphite2::Slot*,
   graphite2::ShiftCollider&, bool, int, bool&, bool&, graphite2::json*) const */

ulong graphite2::Pass::resolveCollisions
                (Segment *param_1,Slot *param_2,Slot *param_3,ShiftCollider *param_4,bool param_5,
                int param_6,bool *param_7,bool *param_8,json *param_9)

{
  Position *pPVar1;
  byte bVar2;
  long lVar3;
  Slot *pSVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  ulong uVar10;
  json jVar11;
  Slot *pSVar12;
  undefined7 in_register_00000081;
  Segment *pSVar13;
  Position *pPVar14;
  Slot *pSVar15;
  long in_FS_OFFSET;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  byte local_7a;
  char local_66;
  json local_65;
  float local_64;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pSVar13 = (Segment *)CONCAT71(in_register_00000081,param_5);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 0x80) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  pPVar1 = (Position *)(*(long *)(param_2 + 0x80) + (ulong)*(uint *)(param_3 + 0x20) * 0x44);
  uVar10 = graphite2::ShiftCollider::initSlot
                     (pSVar13,param_2,(Rect *)param_3,(float)*(ushort *)(pPVar1 + 0x28),
                      (float)*(ushort *)(pPVar1 + 0x2a),pPVar1,pPVar1 + 0x10,(int)pPVar1 + 0x18,
                      (json *)((ulong)param_7 & 0xffffffff));
  if ((char)uVar10 == '\0') {
LAB_00101e90:
    uVar10 = 0;
    goto LAB_00101f07;
  }
  local_66 = '\0';
  bVar6 = (byte)param_6;
  local_7a = bVar6 ^ 1;
  pSVar15 = param_3;
  do {
    pSVar12 = pSVar15;
    pSVar15 = *(Slot **)(pSVar12 + 0x28);
  } while (pSVar15 != (Slot *)0x0);
  pSVar15 = (Slot *)param_4;
  if (param_4 == (ShiftCollider *)0x0) {
LAB_00101dbd:
    local_65 = (json)0x0;
    if ((*(float *)(pPVar1 + 0x10) != 0.0) || (*(float *)(pPVar1 + 0x14) != 0.0)) goto LAB_00101e98;
    uVar9 = *(ushort *)(pPVar1 + 0x2c);
LAB_00101de8:
    uVar9 = uVar9 & 0xff9f | 0x40;
    jVar11 = (json)0x0;
  }
  else {
    do {
      pPVar14 = *(Position **)(param_2 + 0x80);
      if (pPVar14 != (Position *)0x0) {
        pPVar14 = pPVar14 + (ulong)*(uint *)(pSVar15 + 0x20) * 0x44;
      }
      bVar7 = graphite2::Slot::isChildOf(pSVar15);
      if (param_3 == pSVar15) {
        local_7a = local_7a ^ 1;
        if (param_4 != (ShiftCollider *)pSVar15) goto LAB_00101d83;
LAB_00101e08:
        if (bVar6 == 0) goto LAB_00101d95;
LAB_00101e40:
        pSVar15 = *(Slot **)(pSVar15 + 8);
      }
      else {
        cVar8 = graphite2::SlotCollision::ignore();
        if (cVar8 == '\0') {
          if ((pSVar12 != pSVar15) && (bVar7 == 0)) {
            lVar3 = *(long *)(param_2 + 0x80);
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            bVar2 = *(byte *)(lVar3 + 0x2c + (ulong)*(uint *)(pSVar15 + 0x20) * 0x44);
            pSVar4 = pSVar15;
            while ((bVar2 & 0x10) == 0) {
              pSVar4 = *(Slot **)(pSVar4 + 0x28);
              if (pSVar4 == (Slot *)0x0) goto LAB_00101e10;
              bVar2 = *(byte *)(lVar3 + 0x2c + (ulong)*(uint *)(pSVar4 + 0x20) * 0x44);
            }
            goto LAB_00101d78;
          }
LAB_00101e10:
          if ((((bVar6 == 0) || (uVar9 = *(ushort *)(pPVar14 + 0x2c), (uVar9 & 1) == 0)) ||
              (((uVar9 & 0x10) != 0 && (bVar7 == 0)))) || ((uVar9 & 0x20) != 0)) {
            cVar8 = graphite2::ShiftCollider::mergeSlot
                              (pSVar13,param_2,(SlotCollision *)pSVar15,pPVar14,
                               (bool)((char)pPVar14 + '\x10'),(bool)(local_7a ^ 1),
                               (bool *)(ulong)bVar7,SUB81(&local_66,0),(json *)0x0);
            if (cVar8 != '\0') goto LAB_00101d78;
            goto LAB_00101e90;
          }
          if (param_4 == (ShiftCollider *)pSVar15) goto LAB_00101e40;
LAB_00101e38:
          if ((uVar9 & 4) == 0) goto LAB_00101e40;
          break;
        }
LAB_00101d78:
        if (param_4 == (ShiftCollider *)pSVar15) goto LAB_00101e08;
LAB_00101d83:
        uVar9 = *(ushort *)(pPVar14 + 0x2c);
        if (bVar6 != 0) goto LAB_00101e38;
        if ((uVar9 & 8) != 0) break;
LAB_00101d95:
        pSVar15 = *(Slot **)pSVar15;
      }
    } while (pSVar15 != (Slot *)0x0);
    uVar10 = uVar10 & 0xff;
    if (local_66 == '\0') goto LAB_00101dbd;
LAB_00101e98:
    local_65 = (json)0x0;
    uVar17 = graphite2::ShiftCollider::resolve(pSVar13,(bool *)param_2,&local_65);
    fVar16 = (float)uVar17;
    if (((float)((uint)fVar16 & _LC2) < _LC3) &&
       (fVar18 = (float)((ulong)uVar17 >> 0x20), (float)(_LC2 & (uint)fVar18) < _LC3)) {
      if ((float)((uint)(byte)param_1[0x5c] * (uint)(byte)param_1[0x5c]) <=
          (fVar18 - *(float *)(pPVar1 + 0x14)) * (fVar18 - *(float *)(pPVar1 + 0x14)) +
          (fVar16 - *(float *)(pPVar1 + 0x10)) * (fVar16 - *(float *)(pPVar1 + 0x10))) {
        *param_8 = true;
      }
      pSVar13 = *(Segment **)(param_3 + 0x30);
      *(undefined8 *)(pPVar1 + 0x10) = uVar17;
      if (pSVar13 != (Segment *)0x0) {
        local_58 = (undefined1  [16])0x0;
        local_64 = fVar16 + (float)*(undefined8 *)(param_3 + 0x40);
        local_60 = CONCAT44(fVar18 + (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20),
                            local_64);
        graphite2::Slot::finalise
                  (pSVar13,(Font *)param_2,(Position *)0x0,(Rect *)&local_60,(uchar)local_58,
                   (float *)0x0,SUB81(&local_64,0),(bool)((byte)param_7 & 1),0);
      }
    }
    uVar10 = uVar10 & 0xff;
    uVar9 = *(ushort *)(pPVar1 + 0x2c);
    if (local_65 == (json)0x0) goto LAB_00101de8;
    uVar9 = uVar9 | 0x60;
    jVar11 = local_65;
  }
  *(ushort *)(pPVar1 + 0x2c) = uVar9;
  *param_9 = (json)((byte)*param_9 | (byte)jVar11);
LAB_00101f07:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* graphite2::Pass::collisionShift(graphite2::Segment*, int, graphite2::json*) const */

undefined8 graphite2::Pass::collisionShift(Segment *param_1,int param_2,json *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  Slot *pSVar3;
  code *pcVar4;
  char cVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  Slot *pSVar11;
  Slot *pSVar12;
  undefined8 uVar13;
  undefined4 in_register_00000034;
  Slot *pSVar14;
  int iVar15;
  bool bVar16;
  ShiftCollider *pSVar17;
  ShiftCollider *pSVar18;
  long in_FS_OFFSET;
  json local_13a;
  bool local_139;
  undefined8 local_138 [20];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined4 local_50;
  undefined2 local_4c;
  long local_40;
  
  pSVar14 = (Slot *)CONCAT44(in_register_00000034,param_2);
  puVar8 = &local_98;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar9 = local_138;
  do {
    *(undefined1 (*) [16])(puVar9 + 1) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar9 + 3) = (undefined1  [16])0x0;
    pvVar6 = malloc(0xc0);
    *puVar9 = pvVar6;
    if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar9[1] = pvVar6;
    puVar10 = puVar9 + 5;
    puVar9[2] = (long)pvVar6 + 0xc0;
    puVar9 = puVar10;
  } while (puVar8 != puVar10);
  pSVar18 = *(ShiftCollider **)(pSVar14 + 0x98);
  local_98 = 0;
  local_50 = 0;
  local_4c = 0;
  local_13a = (json)0x0;
  local_139 = false;
  local_90 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  if (pSVar18 != (ShiftCollider *)0x0) {
    lVar7 = *(long *)(pSVar14 + 0x80);
    while( true ) {
      local_13a = (json)0x0;
      pSVar12 = (Slot *)pSVar18;
      while( true ) {
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar7 = lVar7 + (ulong)*(uint *)(pSVar12 + 0x20) * 0x44;
        bVar16 = SUB81(local_138,0);
        if (((*(ushort *)(lVar7 + 0x2c) & 0x11) == 1) &&
           (cVar5 = resolveCollisions(param_1,pSVar14,pSVar12,pSVar18,bVar16,0,
                                      (bool *)((ulong)param_3 & 0xffffffff),&local_139,&local_13a),
           cVar5 == '\0')) goto LAB_00102180;
        if ((pSVar12 != (Slot *)pSVar18) && ((*(byte *)(lVar7 + 0x2c) & 8) != 0)) {
          pSVar12 = *(Slot **)pSVar12;
          if (1 < (byte)param_1[0x48]) goto LAB_001021df;
          goto LAB_00102301;
        }
        pSVar12 = *(Slot **)pSVar12;
        if (pSVar12 == (Slot *)0x0) break;
        lVar7 = *(long *)(pSVar14 + 0x80);
      }
      pSVar12 = (Slot *)0x0;
      if ((byte)param_1[0x48] < 2) break;
LAB_001021df:
      iVar15 = 0;
      do {
        if (local_13a != (json)0x0) {
          local_13a = (json)0x0;
          if (pSVar12 == (Slot *)0x0) {
            pSVar17 = *(ShiftCollider **)(pSVar14 + 0xa0);
          }
          else {
            pSVar17 = *(ShiftCollider **)(pSVar12 + 8);
          }
          pSVar3 = *(Slot **)(pSVar18 + 8);
          for (pSVar11 = (Slot *)pSVar17; pSVar11 != pSVar3; pSVar11 = *(Slot **)(pSVar11 + 8)) {
            while( true ) {
              if (*(long *)(pSVar14 + 0x80) == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              lVar7 = *(long *)(pSVar14 + 0x80) + (ulong)*(uint *)(pSVar11 + 0x20) * 0x44;
              if ((*(ushort *)(lVar7 + 0x2c) & 0x31) != 0x21) break;
              cVar5 = resolveCollisions(param_1,pSVar14,pSVar11,pSVar17,bVar16,1,
                                        (bool *)((ulong)param_3 & 0xffffffff),&local_139,&local_13a)
              ;
              if (cVar5 == '\0') goto LAB_00102180;
              pSVar11 = *(Slot **)(pSVar11 + 8);
              puVar1 = (ushort *)(lVar7 + 0x2c);
              *puVar1 = *puVar1 | 0x100;
              if (pSVar3 == pSVar11) goto LAB_001022d9;
            }
          }
        }
LAB_001022d9:
        if (local_139 != false) {
          local_139 = false;
          for (pSVar3 = (Slot *)pSVar18; pSVar12 != pSVar3; pSVar3 = *(Slot **)pSVar3) {
            if (*(long *)(pSVar14 + 0x80) == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            lVar7 = *(long *)(pSVar14 + 0x80) + (ulong)*(uint *)(pSVar3 + 0x20) * 0x44;
            uVar2 = *(ushort *)(lVar7 + 0x2c);
            if ((uVar2 & 0x111) == 1) {
              cVar5 = resolveCollisions(param_1,pSVar14,pSVar3,pSVar18,bVar16,0,
                                        (bool *)((ulong)param_3 & 0xffffffff),&local_139,&local_13a)
              ;
              if (cVar5 == '\0') goto LAB_00102180;
              uVar2 = *(ushort *)(lVar7 + 0x2c);
            }
            if ((uVar2 & 0x100) != 0) {
              *(ushort *)(lVar7 + 0x2c) = uVar2 & 0xfeff;
            }
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)((byte)param_1[0x48] - 1));
LAB_00102301:
      if ((pSVar12 == (Slot *)0x0) ||
         (pSVar18 = *(ShiftCollider **)(pSVar12 + 8), pSVar18 == (ShiftCollider *)0x0)) break;
      lVar7 = *(long *)(pSVar14 + 0x80);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      while ((*(byte *)(lVar7 + 0x2c + (ulong)*(uint *)(pSVar18 + 0x20) * 0x44) & 4) == 0) {
        pSVar18 = *(ShiftCollider **)pSVar18;
        if (pSVar18 == (ShiftCollider *)0x0) goto LAB_00102346;
      }
    }
  }
LAB_00102346:
  uVar13 = 1;
LAB_0010218c:
  do {
    puVar9 = puVar8 + -5;
    puVar8 = puVar8 + -5;
    free((void *)*puVar9);
  } while (puVar8 != local_138);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102180:
  uVar13 = 0;
  goto LAB_0010218c;
}



/* graphite2::Pass::resolveKern(graphite2::Segment*, graphite2::Slot*, graphite2::Slot*, int,
   float&, float&, graphite2::json*) const */

void graphite2::Pass::resolveKern
               (Segment *param_1,Slot *param_2,Slot *param_3,int param_4,float *param_5,
               float *param_6,json *param_7)

{
  Position *pPVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  ushort uVar9;
  Slot *pSVar10;
  long lVar11;
  Slot *pSVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_e0;
  byte local_da;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar12 = param_3;
  do {
    pSVar10 = pSVar12;
    pSVar12 = *(Slot **)(pSVar10 + 0x28);
  } while (*(Slot **)(pSVar10 + 0x28) != (Slot *)0x0);
  lVar4 = *(long *)(*(long *)(param_2 + 0x88) + 0x78);
  if (*(long *)(param_2 + 0x80) == 0) {
    graphite2::GlyphCache::glyph((ushort)lVar4);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  pPVar1 = (Position *)(*(long *)(param_2 + 0x80) + (ulong)*(uint *)(pSVar10 + 0x20) * 0x44);
  lVar11 = graphite2::GlyphCache::glyph((ushort)lVar4);
  fVar13 = *(float *)(param_3 + 0x44);
  fVar14 = *(float *)(pPVar1 + 0x14);
  if (pSVar10 == param_3) {
    pSVar12 = *(Slot **)param_3;
    local_a0 = (undefined1  [16])0x0;
    local_90 = (undefined1  [16])0x0;
    local_78 = 0x7e967699;
    local_58 = 0;
    local_80 = _LC7;
    local_70 = (undefined1  [16])0x0;
    bVar8 = (byte)(*(ushort *)(pPVar1 + 0x2c) >> 3) & 1;
    fVar15 = *(float *)(lVar11 + 0xc) + fVar14 + fVar13;
    if (fVar15 <= *(float *)param_7) {
      fVar15 = *(float *)param_7;
    }
    local_a8 = 0;
    local_60 = 0;
    local_50 = 0;
    *(float *)param_7 = fVar15;
    fVar13 = fVar14 + fVar13 + *(float *)(lVar11 + 4);
    local_4c = 0;
    if (*param_6 <= fVar13) {
      fVar13 = *param_6;
    }
    *param_6 = fVar13;
    if (pSVar12 == (Slot *)0x0) {
      local_70._0_8_ = (void *)0x0;
    }
    else {
      bVar6 = false;
      uVar3 = 0;
      local_da = 0;
      local_e0 = 0.0;
      do {
        if ((*(long *)(lVar4 + 0x20) == 0) ||
           (*(ushort *)(lVar4 + 0x28) <= *(ushort *)(pSVar12 + 0x10))) goto LAB_00102778;
        lVar11 = graphite2::GlyphCache::glyph
                           ((ushort)*(undefined8 *)(*(long *)(param_2 + 0x88) + 0x78));
        if (*(long *)(param_2 + 0x80) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        fVar13 = *(float *)(pSVar12 + 0x44);
        lVar2 = *(long *)(param_2 + 0x80) + (ulong)*(uint *)(pSVar12 + 0x20) * 0x44;
        fVar14 = *(float *)(lVar2 + 0x14);
        cVar7 = graphite2::Slot::isChildOf(pSVar12);
        if (cVar7 == '\0') {
          if (((*(float *)(lVar11 + 4) == 0.0) && (*(float *)(lVar11 + 0xc) == 0.0)) ||
             (uVar9 = *(ushort *)(lVar2 + 0x2c), (uVar9 & 0x80) != 0)) {
            if (param_1[0x49] == (Segment)0x2) break;
            uVar3 = uVar3 + 1;
            local_e0 = local_e0 + *(float *)(pSVar12 + 0x50);
            uVar9 = *(ushort *)(lVar2 + 0x2c);
          }
          else {
            if (param_3 != pSVar12) {
              cVar7 = graphite2::SlotCollision::ignore();
              if (cVar7 == '\0') {
                if (!bVar6) {
                  cVar7 = graphite2::KernCollider::initSlot
                                    ((Segment *)&local_a8,param_2,(Rect *)param_3,
                                     (float)*(ushort *)(pPVar1 + 0x28),pPVar1,pPVar1 + 0x10,
                                     (int)pPVar1 + 0x18,*param_6,*(float *)param_7,
                                     (json *)((ulong)param_5 & 0xffffffff));
                  if (cVar7 == '\0') goto LAB_00102778;
                }
                bVar8 = graphite2::KernCollider::mergeSlot
                                  ((Segment *)&local_a8,param_2,(Position *)pSVar12,local_e0,
                                   (int)lVar2 + 0x10,(json *)((ulong)param_5 & 0xffffffff));
                local_da = local_da | bVar8;
                if ((*(byte *)(lVar2 + 0x2c) & 8) == 0) {
                  bVar6 = true;
                  bVar8 = 1;
                  uVar3 = 0;
                  goto LAB_001026ed;
                }
                break;
              }
              uVar9 = *(ushort *)(lVar2 + 0x2c);
            }
            uVar3 = 0;
          }
          if ((uVar9 & 8) != 0) {
            if ((uVar3 < 2) && (bVar8 != 0)) break;
            bVar8 = 1;
          }
        }
        else {
          fVar14 = fVar14 + fVar13;
          fVar13 = *(float *)(lVar11 + 0xc) + fVar14;
          if (fVar13 <= *(float *)param_7) {
            fVar13 = *(float *)param_7;
          }
          *(float *)param_7 = fVar13;
          fVar14 = fVar14 + *(float *)(lVar11 + 4);
          if (*param_6 <= fVar14) {
            fVar14 = *param_6;
          }
          *param_6 = fVar14;
        }
LAB_001026ed:
        pSVar12 = *(Slot **)pSVar12;
      } while (pSVar12 != (Slot *)0x0);
      if (local_da == 0) {
LAB_00102778:
      }
      else {
        local_b0 = graphite2::KernCollider::resolve
                             ((Segment *)&local_a8,param_2,(int)param_3,
                              (json *)((ulong)param_5 & 0xffffffff));
        graphite2::KernCollider::shift((Position *)&local_a8,(int)&local_b0);
        *(ulong *)(param_3 + 0x50) =
             CONCAT44(((float)((ulong)local_b0 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20)) -
                      (float)((ulong)*(undefined8 *)(pPVar1 + 0x10) >> 0x20),
                      ((float)local_b0 + (float)*(undefined8 *)(param_3 + 0x50)) -
                      (float)*(undefined8 *)(pPVar1 + 0x10));
        *(undefined8 *)(pPVar1 + 0x10) = local_b0;
      }
    }
    free((void *)local_70._0_8_);
  }
  else {
    *(ushort *)(pPVar1 + 0x2c) = *(ushort *)(pPVar1 + 0x2c) | 0x11;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* graphite2::Pass::collisionKern(graphite2::Segment*, int, graphite2::json*) const */

undefined8 graphite2::Pass::collisionKern(Segment *param_1,int param_2,json *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  Slot *pSVar6;
  undefined4 in_register_00000034;
  Slot *pSVar7;
  ushort uVar8;
  Slot *pSVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float local_48;
  float local_44;
  long local_40;
  
  pSVar7 = (Slot *)CONCAT44(in_register_00000034,param_2);
  pSVar6 = *(Slot **)(pSVar7 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 1e+38;
  local_44 = -1e+38;
  lVar2 = *(long *)(*(long *)(pSVar7 + 0x88) + 0x78);
  if (pSVar6 != (Slot *)0x0) {
    pSVar9 = pSVar6;
    do {
      if ((*(long *)(lVar2 + 0x20) == 0) ||
         (*(ushort *)(lVar2 + 0x28) <= *(ushort *)(pSVar9 + 0x10))) {
        uVar5 = 0;
        goto LAB_00102a12;
      }
      uVar8 = (ushort)*(undefined8 *)(*(long *)(pSVar7 + 0x88) + 0x78);
      if (*(long *)(pSVar7 + 0x80) == 0) {
        graphite2::GlyphCache::glyph(uVar8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar1 = *(long *)(pSVar7 + 0x80) + (ulong)*(uint *)(pSVar9 + 0x20) * 0x44;
      lVar4 = graphite2::GlyphCache::glyph(uVar8);
      uVar8 = *(ushort *)(lVar1 + 0x2c);
      fVar10 = local_48;
      if ((uVar8 & 0x80) == 0) {
        fVar10 = *(float *)(lVar1 + 0x14) + *(float *)(pSVar9 + 0x44);
        fVar11 = *(float *)(lVar4 + 0xc) + fVar10;
        fVar10 = fVar10 + *(float *)(lVar4 + 4);
        if (fVar11 <= local_44) {
          fVar11 = local_44;
        }
        local_44 = fVar11;
        if (local_48 <= fVar10) {
          fVar10 = local_48;
        }
      }
      local_48 = fVar10;
      if ((pSVar6 != (Slot *)0x0) && ((~uVar8 & 0x11) == 0)) {
        resolveKern(param_1,pSVar7,pSVar9,(int)pSVar6,(float *)((ulong)param_3 & 0xffffffff),
                    &local_48,(json *)&local_44);
        uVar8 = *(ushort *)(lVar1 + 0x2c);
      }
      if ((uVar8 & 8) != 0) {
        pSVar6 = (Slot *)0x0;
      }
      if ((uVar8 & 4) != 0) {
        pSVar6 = pSVar9;
      }
      pSVar9 = *(Slot **)pSVar9;
    } while (pSVar9 != (Slot *)0x0);
  }
  uVar5 = 1;
LAB_00102a12:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* graphite2::Pass::runGraphite(graphite2::vm::Machine&, graphite2::FiniteStateMachine&, bool) const
    */

undefined8 __thiscall
graphite2::Pass::runGraphite(Pass *this,Machine *param_1,FiniteStateMachine *param_2,bool param_3)

{
  long lVar1;
  Pass PVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Slot *pSVar8;
  json *pjVar9;
  uint uVar10;
  long in_FS_OFFSET;
  Slot *local_40;
  long *local_38;
  long local_30;
  
  plVar3 = *(long **)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = *(Slot **)(*plVar3 + 0x98);
  if (local_40 == (Slot *)0x0) {
LAB_00102b10:
    uVar6 = 1;
  }
  else {
    if ((*(long *)(this + 0x60) != 0) && (*(int *)(this + 0x84) == 0)) {
      lVar1 = *(long *)(local_40 + 8);
      local_38 = plVar3 + 2;
      *(undefined4 *)(plVar3 + 0x42) = 1;
      plVar3[1] = lVar1;
      plVar3[2] = (long)local_40;
      iVar5 = graphite2::vm::Machine::Code::run((Machine *)(this + 0x60),(Slot ***)param_1);
      if ((iVar5 == 0) || (*(int *)(param_1 + 0x1018) != 0)) goto LAB_00102b10;
    }
    if (param_3) {
      graphite2::Segment::reverseSlots();
      local_40 = *(Slot **)(**(long **)param_1 + 0x98);
    }
    if (*(short *)(this + 0x4e) != 0) {
      lVar1 = *(long *)param_1;
      uVar6 = *(undefined8 *)local_40;
      *(undefined1 *)(lVar1 + 0x225) = 0;
      *(undefined8 *)(lVar1 + 0x218) = uVar6;
      uVar10 = (uint)(byte)this[0x4a];
LAB_00102b90:
      findNDoRule(this,&local_40,param_1,param_2);
      if (*(int *)(param_1 + 0x1018) == 0) {
        if (local_40 != (Slot *)0x0) {
          lVar1 = *(long *)param_1;
          pSVar8 = *(Slot **)(lVar1 + 0x218);
          if (local_40 != pSVar8) {
            if (*(char *)(lVar1 + 0x225) == '\0') goto code_r0x00102bd9;
            if (uVar10 != 0) goto LAB_00102cc9;
            goto LAB_00102bdf;
          }
          if (uVar10 == 0) {
            PVar2 = this[0x4a];
          }
          else {
LAB_00102cc9:
            PVar2 = this[0x4a];
            pSVar8 = local_40;
          }
          goto LAB_00102cce;
        }
        goto LAB_00102bf2;
      }
      goto LAB_00102d28;
    }
LAB_00102bf2:
    if (*(short *)(this + 0x48) == 0) goto LAB_00102b10;
    puVar7 = *(undefined8 **)param_1;
    pjVar9 = (json *)*puVar7;
    if ((((byte)((Font *)pjVar9)[0xc5] & 2) == 0) || (*(long *)((Font *)pjVar9 + 0x80) == 0))
    goto LAB_00102b10;
    if (this[0x48] == (Pass)0x0) {
LAB_00102c58:
      if (this[0x49] != (Pass)0x0) {
        cVar4 = collisionKern((Segment *)this,(int)pjVar9,
                              (json *)(ulong)*(byte *)((long)puVar7 + 0x224));
        if (cVar4 == '\0') goto LAB_00102d28;
        pjVar9 = (json *)**(undefined8 **)param_1;
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = collisionFinish((Segment *)this,pjVar9);
        return uVar6;
      }
      goto LAB_00102d5a;
    }
    if (((byte)((Font *)pjVar9)[0xc5] & 1) == 0) {
      graphite2::Segment::positionSlots
                ((Font *)pjVar9,(Slot *)0x0,(Slot *)0x0,false,
                 *(char *)((long)puVar7 + 0x224) != '\0');
      puVar7 = *(undefined8 **)param_1;
      pjVar9 = (json *)*puVar7;
    }
    cVar4 = collisionShift((Segment *)this,(int)pjVar9,
                           (json *)(ulong)*(byte *)((long)puVar7 + 0x224));
    if (cVar4 != '\0') {
      puVar7 = *(undefined8 **)param_1;
      pjVar9 = (json *)*puVar7;
      goto LAB_00102c58;
    }
LAB_00102d28:
    uVar6 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00102d5a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00102bd9:
  uVar10 = uVar10 - 1;
  if (uVar10 == 0) {
LAB_00102bdf:
    PVar2 = this[0x4a];
    local_40 = pSVar8;
    if (pSVar8 == (Slot *)0x0) goto LAB_00102bf2;
LAB_00102cce:
    uVar10 = (uint)(byte)PVar2;
    uVar6 = *(undefined8 *)pSVar8;
    *(undefined1 *)(lVar1 + 0x225) = 0;
    *(undefined8 *)(lVar1 + 0x218) = uVar6;
  }
  goto LAB_00102b90;
}



/* graphite2::Pass::collisionFinish(graphite2::Segment*, graphite2::json*) const [clone .cold] */

void graphite2::Pass::collisionFinish(Segment *param_1,json *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* graphite2::Pass::resolveCollisions(graphite2::Segment*, graphite2::Slot*, graphite2::Slot*,
   graphite2::ShiftCollider&, bool, int, bool&, bool&, graphite2::json*) const [clone .cold] */

void graphite2::Pass::resolveCollisions
               (Segment *param_1,Slot *param_2,Slot *param_3,ShiftCollider *param_4,bool param_5,
               int param_6,bool *param_7,bool *param_8,json *param_9)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* graphite2::Pass::collisionShift(graphite2::Segment*, int, graphite2::json*) const [clone .cold]
    */

void graphite2::Pass::collisionShift(Segment *param_1,int param_2,json *param_3)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* graphite2::Pass::resolveKern(graphite2::Segment*, graphite2::Slot*, graphite2::Slot*, int,
   float&, float&, graphite2::json*) const [clone .cold] */

void graphite2::Pass::resolveKern
               (Segment *param_1,Slot *param_2,Slot *param_3,int param_4,float *param_5,
               float *param_6,json *param_7)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* graphite2::Pass::collisionKern(graphite2::Segment*, int, graphite2::json*) const [clone .cold] */

void graphite2::Pass::collisionKern(Segment *param_1,int param_2,json *param_3)

{
  code *pcVar1;
  
  graphite2::GlyphCache::glyph((ushort)param_1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


