
void oc_set_chroma_mvs00(ushort *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(char)*param_2 + (int)(char)param_2[1] + (int)(char)param_2[2] +
          (int)(char)param_2[3];
  iVar1 = (int)(*param_2 >> 8) + (int)(param_2[1] >> 8) + (int)(param_2[2] >> 8) +
          (int)(param_2[3] >> 8);
  *param_1 = (ushort)(iVar2 + (iVar2 >> 0x1f) + 2 >> 2) & 0xff |
             (ushort)((iVar1 + (iVar1 >> 0x1f) + 2 >> 2) << 8);
  return;
}



void oc_set_chroma_mvs01(ushort *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(char)*param_2 + (int)(char)param_2[2];
  iVar1 = (int)(*param_2 >> 8) + (int)(param_2[2] >> 8);
  *param_1 = (ushort)(iVar2 + (iVar2 >> 0x1f) + 1 >> 1) & 0xff |
             (ushort)((iVar1 + (iVar1 >> 0x1f) + 1 >> 1) << 8);
  iVar2 = (int)(char)param_2[1] + (int)(char)param_2[3];
  iVar1 = (int)(param_2[1] >> 8) + (int)(param_2[3] >> 8);
  param_1[1] = (ushort)(iVar2 + (iVar2 >> 0x1f) + 1 >> 1) & 0xff |
               (ushort)((iVar1 + (iVar1 >> 0x1f) + 1 >> 1) << 8);
  return;
}



void oc_set_chroma_mvs10(ushort *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(char)*param_2 + (int)(char)param_2[1];
  iVar1 = (int)(*param_2 >> 8) + (int)(param_2[1] >> 8);
  *param_1 = (ushort)(iVar2 + (iVar2 >> 0x1f) + 1 >> 1) & 0xff |
             (ushort)((iVar1 + (iVar1 >> 0x1f) + 1 >> 1) << 8);
  iVar2 = (int)(char)param_2[2] + (int)(char)param_2[3];
  iVar1 = (int)(param_2[2] >> 8) + (int)(param_2[3] >> 8);
  param_1[2] = (ushort)(iVar2 + (iVar2 >> 0x1f) + 1 >> 1) & 0xff |
               (ushort)((iVar1 + (iVar1 >> 0x1f) + 1 >> 1) << 8);
  return;
}



void oc_set_chroma_mvs11(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}



void oc_mb_fill_cmapping00(long param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = (long)(param_4 >> 1) * (long)*(int *)(param_2 + 0x28) + (long)(param_3 >> 1);
  *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x30) + lVar1;
  *(long *)(param_1 + 0x40) = lVar1 + *(long *)(param_2 + 0x58);
  return;
}



void oc_mb_fill_cmapping01(long param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = (long)(param_4 >> 1) * (long)*(int *)(param_2 + 0x28) + (long)param_3;
  *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x30) + lVar1;
  *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x58) + lVar1;
  *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x30) + lVar1 + 1;
  *(long *)(param_1 + 0x48) = lVar1 + 1 + *(long *)(param_2 + 0x58);
  return;
}



void oc_mb_fill_cmapping10(long param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_4 * (long)*(int *)(param_2 + 0x28) + (long)(param_3 >> 1);
  lVar1 = *(int *)(param_2 + 0x28) + lVar2;
  *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x30) + lVar2;
  *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x58) + lVar2;
  *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30) + lVar1;
  *(long *)(param_1 + 0x50) = lVar1 + *(long *)(param_2 + 0x58);
  return;
}



void oc_mb_fill_cmapping11(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1;
  do {
    plVar2 = plVar1 + 1;
    plVar1[4] = *(long *)(param_2 + 0x30) + *plVar1;
    plVar1[8] = *plVar1 + *(long *)(param_2 + 0x58);
    plVar1 = plVar2;
  } while (plVar2 != param_1 + 4);
  return;
}



void loop_filter_h(long param_1,int param_2,long param_3)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  pbVar2 = (byte *)(param_1 + -2);
  iVar6 = 8;
  do {
    bVar4 = pbVar2[2];
    bVar3 = pbVar2[1];
    cVar1 = *(char *)(param_3 +
                     ((int)(((uint)*pbVar2 - (uint)pbVar2[3]) + 4 + ((uint)bVar4 - (uint)bVar3) * 3)
                     >> 3));
    iVar5 = (uint)bVar3 + (int)cVar1;
    bVar3 = -(0xff < iVar5) | bVar3 + cVar1;
    if (iVar5 < 0) {
      bVar3 = 0;
    }
    iVar5 = (uint)bVar4 - (int)cVar1;
    pbVar2[1] = bVar3;
    bVar4 = -(0xff < iVar5) | bVar4 - cVar1;
    if (iVar5 < 0) {
      bVar4 = 0;
    }
    pbVar2[2] = bVar4;
    pbVar2 = pbVar2 + param_2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void loop_filter_v(long param_1,int param_2,long param_3)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  
  lVar4 = (long)param_2;
  pbVar3 = (byte *)(param_1 - param_2 * 2);
  pbVar1 = pbVar3 + 8;
  do {
    bVar5 = pbVar3[lVar4];
    cVar2 = *(char *)(param_3 +
                     ((int)(((uint)*pbVar3 - (uint)pbVar3[lVar4 * 3]) + 4 +
                           ((uint)pbVar3[lVar4 * 2] - (uint)bVar5) * 3) >> 3));
    iVar6 = (uint)bVar5 + (int)cVar2;
    bVar5 = -(0xff < iVar6) | bVar5 + cVar2;
    if (iVar6 < 0) {
      bVar5 = 0;
    }
    pbVar3[lVar4] = bVar5;
    iVar6 = (uint)pbVar3[lVar4 * 2] - (int)cVar2;
    bVar5 = -(0xff < iVar6) | pbVar3[lVar4 * 2] - cVar2;
    if (iVar6 < 0) {
      bVar5 = 0;
    }
    pbVar3[lVar4 * 2] = bVar5;
    pbVar3 = pbVar3 + 1;
  } while (pbVar1 != pbVar3);
  return;
}



void oc_state_loop_filter_frag_rows_c
               (long param_1,long param_2,int param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  param_2 = param_2 + 0x7f;
  piVar2 = (int *)(param_1 + 0xa0 + (long)param_4 * 0x28);
  lVar11 = (long)*piVar2;
  lVar4 = *(long *)(piVar2 + 4);
  lVar5 = *(long *)(piVar2 + 2);
  iVar3 = *(int *)(param_1 + 0x398 + (long)param_4 * 4);
  lVar6 = *(long *)(param_1 + 0x118);
  lVar7 = *(long *)(param_1 + 0x120);
  lVar8 = *(long *)(param_1 + 0x360 + (long)param_3 * 8);
  lVar10 = param_5 * lVar11 + lVar5;
  lVar9 = lVar10;
  if (param_5 * lVar11 < param_6 * lVar11) {
    do {
      lVar12 = lVar9 + lVar11;
      lVar13 = lVar11 + lVar10;
      if (lVar10 < lVar12) {
        do {
          lVar1 = lVar9 + 1;
          if ((*(byte *)(lVar6 + lVar9 * 4) & 1) == 0) {
joined_r0x001005ab:
            if (lVar12 == lVar1) break;
          }
          else {
            lVar14 = lVar8 + *(long *)(lVar7 + -8 + lVar1 * 8);
            if (lVar10 < lVar9) {
              loop_filter_h(lVar14,iVar3,param_2);
            }
            if (lVar5 < lVar10) {
              loop_filter_v(lVar14,iVar3,param_2);
            }
            if (lVar12 <= lVar1) {
              if (lVar13 < lVar4 + lVar5) {
LAB_00100587:
                if ((*(byte *)(lVar6 + lVar13 * 4) & 1) == 0) {
                  loop_filter_v(iVar3 * 8 + lVar14,iVar3,param_2);
                }
                goto joined_r0x001005ab;
              }
              break;
            }
            if ((*(byte *)(lVar6 + 4 + lVar9 * 4) & 1) == 0) {
              loop_filter_h(lVar14 + 8,iVar3,param_2);
            }
            if (lVar13 < lVar4 + lVar5) goto LAB_00100587;
          }
          lVar13 = lVar13 + 1;
          lVar9 = lVar1;
        } while( true );
      }
      lVar10 = lVar10 + lVar11;
      lVar9 = lVar12;
    } while (lVar12 < param_6 * lVar11 + lVar5);
  }
  return;
}



void oc_loop_filter_init_c(undefined8 *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  *param_1 = 0;
  lVar2 = 0;
  param_1[0x1f] = 0;
  puVar6 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x100U >> 3
                      ); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (0 < param_2) {
    lVar5 = (long)param_2;
    lVar4 = 0;
    iVar1 = param_2 + 0x7f;
    iVar7 = 0x7f - param_2;
    do {
      if (-1 < iVar7 + (int)lVar2) {
        *(char *)((long)param_1 + lVar2 + (0x7f - lVar5)) = -(char)param_2;
      }
      *(char *)((long)param_1 + lVar2 + 0x7f) = (char)lVar2;
      *(char *)((long)param_1 + lVar4 + 0x7f) = (char)lVar4;
      if (iVar1 - (int)lVar2 < 0x100) {
        *(char *)((long)param_1 + lVar4 + lVar5 + 0x7f) = (char)param_2;
      }
      lVar2 = lVar2 + -1;
      lVar4 = lVar4 + 1;
      param_2 = param_2 + -1;
    } while (lVar2 != -lVar5);
    return;
  }
  return;
}



void oc_state_frarray_clear(long param_1)

{
  free(*(void **)(param_1 + 0x170));
  free(*(void **)(param_1 + 0x158));
  free(*(void **)(param_1 + 0x150));
  free(*(void **)(param_1 + 0x140));
  free(*(void **)(param_1 + 0x138));
  free(*(void **)(param_1 + 0x128));
  free(*(void **)(param_1 + 0x118));
  return;
}



void oc_state_accel_init_c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = _GLOBAL_OFFSET_TABLE_;
  *(undefined4 *)(param_1 + 0x98) = 0;
  puVar2 = PTR_oc_frag_copy_list_c_00104008;
  *(undefined **)(param_1 + 0x40) = puVar1;
  *(undefined **)(param_1 + 0x48) = puVar2;
  puVar1 = PTR_oc_frag_recon_inter_c_00104018;
  *(undefined **)(param_1 + 0x50) = PTR_oc_frag_recon_intra_c_00104010;
  *(undefined **)(param_1 + 0x58) = puVar1;
  puVar1 = PTR_oc_idct8x8_c_00104028;
  *(undefined **)(param_1 + 0x60) = PTR_oc_frag_recon_inter2_c_00104020;
  *(undefined **)(param_1 + 0x68) = puVar1;
  *(code **)(param_1 + 0x70) = oc_state_frag_recon_c;
  *(code **)(param_1 + 0x78) = oc_loop_filter_init_c;
  puVar1 = PTR_oc_restore_fpu_c_00104030;
  *(undefined **)(param_1 + 0x90) = &OC_FZIG_ZAG;
  *(code **)(param_1 + 0x80) = oc_state_loop_filter_frag_rows_c;
  *(undefined **)(param_1 + 0x88) = puVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 oc_state_init(undefined8 *param_1,byte *param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  size_t __nmemb;
  size_t __nmemb_00;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  uint uVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  int *piVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  uint uVar26;
  int iVar27;
  undefined4 *puVar28;
  ulong uVar29;
  int *piVar30;
  int iVar31;
  int iVar32;
  byte *pbVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined *puVar36;
  ulong uVar37;
  byte *pbVar38;
  undefined8 uVar39;
  int iVar40;
  int iVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long *plVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  ulong *puVar51;
  uint uVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  long lVar56;
  int iVar57;
  int iVar58;
  byte *pbVar59;
  int iVar60;
  int *piVar61;
  int *piVar62;
  uint uVar63;
  bool bVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint local_c0;
  int local_b8;
  void *local_b0;
  long local_a8;
  ulong local_98;
  
  if (param_2 == (byte *)0x0) {
    uVar39 = 0xffffffff;
  }
  else {
    uVar11 = *(uint *)(param_2 + 4);
    if ((((((uVar11 & 0xf) == 0) &&
          (uVar26 = *(uint *)(param_2 + 8), (uVar26 & 0xf) == 0 && uVar11 - 1 < 0xfffff)) &&
         (uVar26 - 1 < 0xfffff)) &&
        ((*(int *)(param_2 + 0xc) + *(uint *)(param_2 + 0x14) <= uVar11 &&
         ((uint)(*(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x18)) <= uVar26)))) &&
       (((((uVar26 - (*(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x18)) |
           *(uint *)(param_2 + 0x14)) < 0x100 &&
          ((*(uint *)(param_2 + 0x2c) < 3 && (*(uint *)(param_2 + 0x30) < 4)))) &&
         (*(int *)(param_2 + 0x1c) != 0)) && (*(int *)(param_2 + 0x20) != 0)))) {
      memset(param_1,0,0xd110);
      uVar39 = *(undefined8 *)(param_2 + 8);
      *param_1 = *(undefined8 *)param_2;
      param_1[1] = uVar39;
      uVar39 = *(undefined8 *)(param_2 + 0x18);
      param_1[2] = *(undefined8 *)(param_2 + 0x10);
      param_1[3] = uVar39;
      uVar39 = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = uVar39;
      uVar39 = *(undefined8 *)(param_2 + 0x38);
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
      param_1[7] = uVar39;
      iVar31 = *(int *)(param_2 + 8);
      iVar47 = *(int *)(param_2 + 0x18);
      iVar48 = *(int *)(param_2 + 0x10);
      *(undefined1 *)(param_1 + 0x98) = 0xff;
      *(int *)(param_1 + 3) = iVar31 - (iVar47 + iVar48);
      oc_state_accel_init_x86(param_1);
      uVar67 = (uint)*(undefined8 *)((long)param_1 + 4) >> 3;
      uVar68 = (uint)((ulong)*(undefined8 *)((long)param_1 + 4) >> 0x23);
      uVar26 = ~*(uint *)(param_1 + 6) & 1;
      uVar11 = (*(uint *)(param_1 + 6) >> 1 ^ 1) & 1;
      iVar48 = (int)(uVar67 + uVar26) >> (sbyte)uVar26;
      lVar42 = (ulong)uVar67 * (ulong)uVar68;
      iVar47 = (int)(uVar68 + uVar11) >> (sbyte)uVar11;
      iVar31 = iVar48 + 3 >> 2;
      uVar65 = (int)((int)_LC0 + uVar67) >> 2;
      uVar66 = (int)(_LC0._4_4_ + uVar68) >> 2;
      iVar57 = iVar47 + 3 >> 2;
      lVar44 = (long)iVar48 * (long)iVar47;
      uVar39 = CONCAT44(iVar57,iVar31);
      uVar26 = ((int)((*(uint *)((long)param_1 + 4) >> 3) + 3) >> 2) *
               ((int)((*(uint *)(param_1 + 1) >> 3) + 3) >> 2);
      uVar52 = iVar31 * iVar57;
      __nmemb = lVar42 + lVar44 * 2;
      uVar11 = uVar52 * 2;
      uVar63 = uVar26 + uVar11;
      __nmemb_00 = (ulong)uVar26 * 4;
      if (((lVar44 != 0 && SBORROW8(lVar44,lVar44 * 2) == 0 < lVar44) ||
          (uVar11 < uVar52 || uVar26 / uVar65 != uVar66)) || (CARRY4(uVar26,uVar11))) {
LAB_001015f0:
        uVar39 = 0xffffffe9;
      }
      else {
        piVar30 = (int *)(param_1 + 0x14);
        *(uint *)((long)param_1 + 0xc4) = uVar26;
        *(int *)((long)param_1 + 0xf4) = iVar47;
        param_1[0x1f] = __nmemb - lVar44;
        *(int *)((long)param_1 + 0xcc) = iVar47;
        param_1[0x17] = CONCAT44(uVar66,uVar65);
        *(int *)(param_1 + 0x1e) = iVar48;
        *(int *)(param_1 + 0x19) = iVar48;
        param_1[0x16] = lVar42;
        param_1[0x1a] = lVar42;
        param_1[0x20] = lVar44;
        param_1[0x1b] = lVar44;
        param_1[0x15] = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[0x26] = __nmemb;
        param_1[0x14] = CONCAT44(uVar68,uVar67);
        param_1[0x21] = uVar39;
        param_1[0x22] = CONCAT44(uVar52,uVar63 - uVar52);
        param_1[0x1c] = uVar39;
        param_1[0x1d] = CONCAT44(uVar52,uVar26);
        pvVar12 = calloc(__nmemb,4);
        param_1[0x23] = pvVar12;
        pvVar13 = malloc(__nmemb * 2);
        *(uint *)(param_1 + 0x29) = uVar63;
        param_1[0x25] = pvVar13;
        local_b0 = malloc((ulong)uVar63 << 7);
        param_1[0x27] = local_b0;
        pvVar14 = calloc((ulong)uVar63,1);
        param_1[0x2d] = __nmemb_00;
        param_1[0x28] = pvVar14;
        param_1[0x2c] = CONCAT44(uVar66 << 1,uVar65 << 1);
        pvVar15 = calloc(__nmemb_00,0x60);
        param_1[0x2a] = pvVar15;
        pvVar16 = calloc(__nmemb_00,1);
        param_1[0x2b] = pvVar16;
        pvVar17 = malloc(__nmemb * 8);
        param_1[0x2e] = pvVar17;
        if ((((((pvVar12 != (void *)0x0 && pvVar13 != (void *)0x0) && local_b0 != (void *)0x0) &&
              pvVar14 != (void *)0x0) && pvVar15 != (void *)0x0) && pvVar16 != (void *)0x0) &&
           (pvVar17 != (void *)0x0)) {
          piVar18 = piVar30;
LAB_00100bad:
          iVar31 = *piVar18;
          uVar11 = piVar18[8];
          local_98 = 0;
          iVar47 = piVar18[1];
          lVar42 = *(long *)(piVar18 + 2);
          if (iVar47 < 5) goto LAB_00100d4e;
          do {
            lVar44 = 4;
            while( true ) {
              lVar19 = lVar42;
              iVar48 = iVar31;
              if (4 < iVar31) goto LAB_00100d30;
              while (local_a8 = (long)iVar48, 0 < iVar48) {
                while( true ) {
                  local_a8 = local_a8 + lVar19;
                  piVar61 = &SB_MAP_2;
                  puVar28 = (undefined4 *)((local_98 + uVar11) * 0x80 + (long)local_b0);
                  *puVar28 = 0xffffffff;
                  puVar28[1] = 0xffffffff;
                  puVar28[2] = 0xffffffff;
                  puVar28[3] = 0xffffffff;
                  puVar28[4] = 0xffffffff;
                  puVar28[5] = 0xffffffff;
                  puVar28[6] = 0xffffffff;
                  puVar28[7] = 0xffffffff;
                  puVar28[8] = 0xffffffff;
                  puVar28[9] = 0xffffffff;
                  puVar28[10] = 0xffffffff;
                  puVar28[0xb] = 0xffffffff;
                  puVar28[0xc] = 0xffffffff;
                  puVar28[0xd] = 0xffffffff;
                  puVar28[0xe] = 0xffffffff;
                  puVar28[0xf] = 0xffffffff;
                  puVar28[0x10] = 0xffffffff;
                  puVar28[0x11] = 0xffffffff;
                  puVar28[0x12] = 0xffffffff;
                  puVar28[0x13] = 0xffffffff;
                  puVar28[0x14] = 0xffffffff;
                  puVar28[0x15] = 0xffffffff;
                  puVar28[0x16] = 0xffffffff;
                  puVar28[0x17] = 0xffffffff;
                  puVar28[0x18] = 0xffffffff;
                  puVar28[0x19] = 0xffffffff;
                  puVar28[0x1a] = 0xffffffff;
                  puVar28[0x1b] = 0xffffffff;
                  puVar28[0x1c] = 0xffffffff;
                  puVar28[0x1d] = 0xffffffff;
                  puVar28[0x1e] = 0xffffffff;
                  puVar28[0x1f] = 0xffffffff;
                  lVar56 = lVar19;
                  piVar62 = piVar61;
                  lVar43 = lVar19;
                  do {
                    do {
                      iVar57 = *piVar61;
                      piVar1 = piVar61 + 1;
                      piVar61 = piVar61 + 2;
                      *(long *)(puVar28 + ((long)*piVar1 + (long)iVar57 * 4) * 2) = lVar56;
                      lVar45 = lVar56 + 1;
                      lVar56 = lVar45;
                    } while (lVar45 != local_a8);
                    lVar56 = lVar43 + iVar31;
                    local_a8 = iVar31 + lVar45;
                    piVar61 = piVar62 + 8;
                    piVar62 = piVar61;
                    lVar43 = lVar56;
                  } while (piVar61 != &SB_MAP_2 + lVar44 * 8);
                  pbVar59 = (byte *)((long)pvVar14 + local_98 + uVar11);
                  uVar26 = 0;
                  uVar52 = *pbVar59 >> 2 & 0xf;
                  do {
                    puVar34 = (undefined8 *)(puVar28 + (long)(int)(uVar26 * 2 & uVar26) * 2);
                    puVar28 = puVar28 + 8;
                    bVar23 = (byte)uVar26;
                    uVar26 = uVar26 + 1;
                    uVar52 = uVar52 | (~(uint)((ulong)*puVar34 >> 0x20) >> 0x1f) << (bVar23 & 0x1f)
                                      & 0xf;
                  } while (uVar26 != 4);
                  iVar48 = iVar48 + -4;
                  local_98 = (ulong)((int)local_98 + 1);
                  lVar19 = lVar19 + 4;
                  *pbVar59 = (byte)(uVar52 << 2) | *pbVar59 & 0xc3;
                  if (iVar48 < 5) break;
LAB_00100d30:
                  local_a8 = 4;
                }
              }
              iVar47 = iVar47 + -4;
              lVar42 = lVar42 + iVar31 * 4;
              if (4 < iVar47) break;
LAB_00100d4e:
              lVar44 = (long)iVar47;
              if (iVar47 < 1) {
                piVar18 = piVar18 + 10;
                if (piVar18 == (int *)(param_1 + 0x23)) {
                  lVar42 = param_1[0x2b];
                  lVar44 = param_1[0x2a];
                  pcVar5 = *(code **)(OC_MB_FILL_CMAPPING_TABLE + (long)*(int *)(param_1 + 6) * 8);
                  if (0 < *(int *)((long)param_1 + 0xa4)) {
                    uVar11 = 0;
                    iVar31 = 0;
                    do {
                      uVar26 = 0;
                      if (0 < *(int *)(param_1 + 0x14)) {
                        do {
                          puVar36 = &OC_MB_MAP;
                          do {
                            lVar19 = 0;
                            uVar52 = (int)puVar36 - 0x103068U | uVar11;
                            while( true ) {
                              uVar63 = (int)lVar19 * 2 | uVar26;
                              uVar37 = (ulong)((uint)(byte)puVar36[lVar19] | iVar31 * 4);
                              plVar46 = (long *)(uVar37 * 0x60 + lVar44);
                              *(undefined4 *)plVar46 = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 4) = 0xffffffff;
                              *(undefined4 *)(plVar46 + 1) = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 0xc) = 0xffffffff;
                              *(undefined4 *)(plVar46 + 2) = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 0x14) = 0xffffffff;
                              *(undefined4 *)(plVar46 + 3) = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 0x1c) = 0xffffffff;
                              *(undefined4 *)(plVar46 + 4) = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 0x24) = 0xffffffff;
                              *(undefined4 *)(plVar46 + 5) = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 0x2c) = 0xffffffff;
                              *(undefined4 *)(plVar46 + 6) = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 0x34) = 0xffffffff;
                              *(undefined4 *)(plVar46 + 7) = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 0x3c) = 0xffffffff;
                              *(undefined4 *)(plVar46 + 8) = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 0x44) = 0xffffffff;
                              *(undefined4 *)(plVar46 + 9) = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 0x4c) = 0xffffffff;
                              *(undefined4 *)(plVar46 + 10) = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 0x54) = 0xffffffff;
                              *(undefined4 *)(plVar46 + 0xb) = 0xffffffff;
                              *(undefined4 *)((long)plVar46 + 0x5c) = 0xffffffff;
                              iVar47 = *(int *)(param_1 + 0x14);
                              if (((int)uVar63 < iVar47) &&
                                 ((int)uVar52 < *(int *)((long)param_1 + 0xa4))) {
                                lVar43 = (long)(int)uVar52 * (long)iVar47;
                                lVar56 = lVar43 + (int)uVar63;
                                lVar43 = iVar47 + lVar43 + (long)(int)uVar63;
                                *plVar46 = lVar56;
                                plVar46[2] = lVar43;
                                plVar46[3] = lVar43 + 1;
                                plVar46[1] = lVar56 + 1;
                                (*pcVar5)(plVar46,piVar30);
                              }
                              else {
                                *(undefined1 *)(lVar42 + uVar37) = 0xff;
                              }
                              if (lVar19 != 0) break;
                              lVar19 = 1;
                            }
                            puVar36 = puVar36 + 2;
                          } while (puVar36 != &DAT_0010306c);
                          uVar26 = uVar26 + 4;
                          iVar31 = iVar31 + 1;
                        } while ((int)uVar26 < *(int *)(param_1 + 0x14));
                      }
                      uVar11 = uVar11 + 4;
                    } while ((int)uVar11 < *(int *)((long)param_1 + 0xa4));
                  }
                  iVar31 = *(int *)(param_1 + 3);
                  *(undefined4 *)((long)param_1 + 0x3a4) = 0;
                  iVar47 = *(int *)((long)param_1 + 0x14);
                  local_b8 = 0;
                  iVar27 = *(int *)(param_1 + 2) + iVar31;
                  pbVar38 = (byte *)param_1[0x23];
                  iVar53 = *(int *)((long)param_1 + 0xc) + iVar47;
                  piVar18 = piVar30;
                  pbVar59 = pbVar38;
                  iVar48 = iVar31;
                  iVar57 = iVar47;
                  iVar49 = iVar53;
                  local_c0 = iVar27;
                  do {
                    pbVar59 = pbVar59 + *(long *)(piVar18 + 4) * 4;
                    if (pbVar38 < pbVar59) {
                      iVar4 = *piVar18;
                      iVar55 = 7;
                      iVar60 = 0;
                      do {
                        if (pbVar38 < pbVar38 + (long)iVar4 * 4) {
                          iVar58 = 0;
                          iVar41 = 7;
                          pbVar33 = pbVar38;
                          do {
                            if ((((iVar58 < iVar49) && (iVar57 <= iVar41)) && (iVar48 <= iVar55)) &&
                               ((iVar57 < iVar49 && iVar60 < (int)local_c0 &&
                                (iVar48 < (int)local_c0)))) {
                              if ((iVar58 < iVar57 || (iVar60 < iVar48 || (int)local_c0 <= iVar55))
                                 || (iVar49 <= iVar41)) {
                                iVar3 = 0;
                                iVar40 = 0;
                                uVar37 = 0;
                                iVar50 = iVar60;
                                do {
                                  iVar32 = 0;
                                  iVar54 = iVar58;
                                  do {
                                    while ((((iVar54 < iVar57 || (iVar49 <= iVar54)) ||
                                            (iVar50 < iVar48)) || ((int)local_c0 <= iVar50))) {
                                      iVar32 = iVar32 + 1;
                                      iVar54 = iVar54 + 1;
                                      if (iVar32 == 8) goto LAB_001010b2;
                                    }
                                    iVar3 = iVar3 + 1;
                                    iVar54 = iVar54 + 1;
                                    bVar23 = (byte)iVar32;
                                    iVar32 = iVar32 + 1;
                                    uVar37 = uVar37 | 1L << (((byte)iVar40 | bVar23) & 0x3f);
                                  } while (iVar32 != 8);
LAB_001010b2:
                                  iVar40 = iVar40 + 8;
                                  iVar50 = iVar50 + 1;
                                } while (iVar40 != 0x40);
                                iVar50 = *(int *)((long)param_1 + 0x3a4);
                                puVar51 = param_1 + 0x75;
                                iVar54 = 0;
                                iVar40 = 0;
                                if (iVar50 < 1) {
                                  uVar11 = 0;
                                }
                                else {
                                  do {
                                    if (*puVar51 == uVar37) {
                                      uVar11 = (uint)(byte)((char)((char)iVar54 * '\b') >> 3);
                                      goto LAB_001011d7;
                                    }
                                    iVar54 = iVar54 + 1;
                                    puVar51 = puVar51 + 2;
                                  } while (iVar54 != iVar50);
                                  uVar11 = (uint)(byte)((char)((char)iVar54 * '\b') >> 3);
                                  iVar40 = iVar54;
                                }
                                *(int *)((long)param_1 + 0x3a4) = iVar50 + 1;
                                param_1[(long)iVar40 * 2 + 0x75] = uVar37;
                                *(int *)(param_1 + (long)iVar40 * 2 + 0x76) = iVar3;
LAB_001011d7:
                                pbVar33[1] = pbVar33[1] & 7 | (byte)(uVar11 << 3);
                              }
                              else {
                                pbVar33[1] = pbVar33[1] | 0xf8;
                              }
                            }
                            else {
                              *pbVar33 = *pbVar33 | 2;
                            }
                            pbVar33 = pbVar33 + 4;
                            iVar58 = iVar58 + 8;
                            iVar41 = iVar41 + 8;
                          } while (pbVar33 < pbVar38 + (long)iVar4 * 4);
                          pbVar38 = pbVar38 + (long)iVar4 * 4;
                        }
                        iVar60 = iVar60 + 8;
                        iVar55 = iVar55 + 8;
                      } while (pbVar38 < pbVar59);
                    }
                    local_b8 = local_b8 + 1;
                    if (local_b8 == 3) {
                      if (param_3 - 3U < 4) {
                        bVar10 = (byte)(*(uint *)(param_1 + 6) >> 1);
                        bVar23 = ~(byte)*(uint *)(param_1 + 6);
                        bVar24 = (bVar10 ^ 1) & 1;
                        bVar25 = bVar23 & 1;
                        iVar31 = *(int *)((long)param_1 + 4) + 0x20;
                        local_c0 = (iVar31 >> bVar25) + 0xf;
                        uVar11 = local_c0 & 0xfffffff0;
                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = (long)(*(int *)(param_1 + 1) + 0x20);
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = (long)iVar31;
                        uVar20 = SUB168(auVar6 * auVar8,0);
                        uVar29 = (long)(*(int *)(param_1 + 1) + 0x20 >> bVar24) * (long)(int)uVar11;
                        uVar37 = uVar29 * 2 + 0x10 + uVar20;
                        lVar42 = (long)(0x10 >> bVar24) * (long)(int)uVar11 + (long)(0x10 >> bVar25)
                        ;
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = uVar37;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = (long)param_3;
                        if (((SUB168(auVar6 * auVar8,8) != 0) ||
                            (uVar2 = uVar29 * 2 + 0x10, uVar37 < uVar20)) ||
                           ((uVar2 < uVar29 || (SUB168(auVar7 * auVar9,8) != 0))))
                        goto LAB_001015f0;
                        lVar44 = oc_aligned_malloc(SUB168(auVar7 * auVar9,0),0x10);
                        pvVar14 = malloc(param_1[0x26] * 8);
                        param_1[0x24] = pvVar14;
                        if ((lVar44 != 0) && (pvVar14 != (void *)0x0)) {
                          uVar39 = *(undefined8 *)((long)param_1 + 4);
                          *(int *)(param_1 + 0x34) = iVar31;
                          *(uint *)(param_1 + 0x3a) = uVar11;
                          *(uint *)(param_1 + 0x37) = uVar11;
                          param_1[0x33] = uVar39;
                          uVar39 = CONCAT44((uint)((ulong)uVar39 >> 0x20) >> ((bVar10 ^ 1) & 1),
                                            (uint)uVar39 >> (bVar23 & 1));
                          param_1[0x39] = uVar39;
                          param_1[0x36] = uVar39;
                          puVar34 = param_1 + 0x3c;
                          do {
                            uVar39 = param_1[0x34];
                            puVar35 = puVar34 + 9;
                            *puVar34 = param_1[0x33];
                            puVar34[1] = uVar39;
                            uVar39 = param_1[0x36];
                            puVar34[2] = param_1[0x35];
                            puVar34[3] = uVar39;
                            uVar39 = param_1[0x38];
                            puVar34[4] = param_1[0x37];
                            puVar34[5] = uVar39;
                            uVar39 = param_1[0x3a];
                            puVar34[6] = param_1[0x39];
                            puVar34[7] = uVar39;
                            puVar34[8] = param_1[0x3b];
                            puVar34 = puVar35;
                          } while (param_1 + (ulong)(param_3 - 2) * 9 + 0x45 != puVar35);
                          param_1[0x72] = lVar44;
                          local_c0 = local_c0 & 0xfffffff0;
                          lVar19 = uVar20 + (-(int)lVar42 & 0xf);
                          lVar44 = lVar19 + lVar42 + lVar44;
                          puVar34 = param_1 + 0x33;
                          do {
                            puVar34[5] = lVar44;
                            puVar34[2] = (((long)iVar31 * 0x10 - lVar42) - lVar19) + 0x10 + lVar44;
                            puVar35 = puVar34 + 9;
                            lVar56 = uVar29 + lVar44;
                            lVar44 = lVar44 + uVar2 + uVar20;
                            puVar34[8] = lVar56;
                            oc_ycbcr_buffer_flip(puVar34,puVar34);
                            puVar34 = puVar35;
                          } while (param_1 + (long)param_3 * 9 + 0x33 != puVar35);
                          lVar44 = 0;
                          *(int *)(param_1 + 0x73) = -iVar31;
                          lVar42 = param_1[0x35];
                          piVar18 = (int *)(param_1 + 0x34);
                          *(uint *)(param_1 + 0x74) = -local_c0;
                          *(uint *)((long)param_1 + 0x39c) = -local_c0;
                          do {
                            lVar19 = *(long *)(piVar30 + 4);
                            lVar56 = *(long *)(piVar30 + 2);
                            lVar43 = *(long *)(piVar18 + 2);
                            iVar31 = *piVar30;
                            iVar47 = *piVar18;
                            if (lVar44 < lVar19 + lVar56) {
                              do {
                                lVar45 = lVar44 + iVar31;
                                if (lVar44 < lVar45) {
                                  lVar21 = lVar43;
                                  plVar46 = (long *)((long)pvVar14 + lVar44 * 8);
                                  do {
                                    lVar22 = lVar21 + 8;
                                    *plVar46 = lVar21 - lVar42;
                                    lVar44 = lVar45;
                                    lVar21 = lVar22;
                                    plVar46 = plVar46 + 1;
                                  } while (lVar22 != lVar43 + (long)iVar31 * 8);
                                }
                                lVar43 = lVar43 + (long)iVar47 * 8;
                              } while (lVar44 < lVar19 + lVar56);
                            }
                            piVar30 = piVar30 + 10;
                            piVar18 = piVar18 + 6;
                          } while (piVar30 != (int *)(param_1 + 0x23));
                          param_1[0x6b] = 0xffffffffffffffff;
                          *(undefined4 *)(param_1 + 0x69) = 0xffffffff;
                          *(undefined4 *)((long)param_1 + 0x34c) = 0xffffffff;
                          *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
                          *(undefined4 *)((long)param_1 + 0x354) = 0xffffffff;
                          uVar11 = *(uint *)(param_2 + 0x3c);
                          *(undefined1 (*) [16])(param_1 + 0x6c) = (undefined1  [16])0x0;
                          *(undefined1 (*) [16])(param_1 + 0x6e) = (undefined1  [16])0x0;
                          *(undefined1 (*) [16])(param_1 + 0x70) = (undefined1  [16])0x0;
                          if (0x1f < uVar11) {
                            *(undefined4 *)((long)param_1 + 0x3c) = 0x1f;
                          }
                          uVar39 = _UNK_00101e38;
                          bVar64 = true;
                          param_1[0x95] = __LC2;
                          param_1[0x96] = uVar39;
                          if ((*param_2 < 4) && (bVar64 = false, *param_2 == 3)) {
                            bVar64 = true;
                            if ((param_2[1] < 3) && (bVar64 = false, param_2[1] == 2)) {
                              bVar64 = param_2[2] != 0;
                            }
                          }
                          *(bool *)((long)param_1 + 0x4c1) = bVar64;
                          return 0;
                        }
                        free(pvVar14);
                        oc_aligned_free(lVar44);
                        goto LAB_00101639;
                      }
                      uVar39 = 0xfffffff6;
                      goto LAB_001015f5;
                    }
                    iVar57 = iVar47;
                    iVar49 = iVar53;
                    if ((*(uint *)(param_1 + 6) & 1) == 0) {
                      iVar57 = iVar47 >> 1;
                      iVar49 = iVar53 + 1 >> 1;
                    }
                    iVar48 = iVar31;
                    local_c0 = iVar27;
                    if ((*(uint *)(param_1 + 6) & 2) == 0) {
                      iVar48 = iVar31 >> 1;
                      local_c0 = iVar27 + 1 >> 1;
                    }
                    piVar18 = piVar18 + 10;
                  } while( true );
                }
                local_b0 = (void *)param_1[0x27];
                pvVar14 = (void *)param_1[0x28];
                goto LAB_00100bad;
              }
            }
          } while( true );
        }
LAB_00101639:
        uVar39 = 0xffffffff;
      }
LAB_001015f5:
      oc_state_frarray_clear(param_1);
    }
    else {
      uVar39 = 0xfffffff6;
    }
  }
  return uVar39;
}



void oc_state_clear(long param_1)

{
  free(*(void **)(param_1 + 0x120));
  oc_aligned_free(*(undefined8 *)(param_1 + 0x390));
  oc_state_frarray_clear(param_1);
  return;
}



void oc_state_borders_fill_rows(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  
  uVar8 = 0x10;
  if (param_3 != 0) {
    uVar8 = 0x10 >> (~(byte)*(undefined4 *)(param_1 + 0x30) & 1);
  }
  piVar4 = (int *)((long)param_3 * 0x18 + 0x198 + (long)param_2 * 0x48 + param_1);
  lVar9 = (long)piVar4[2];
  pbVar3 = (byte *)(*(long *)(piVar4 + 4) + param_4 * lVar9);
  pbVar10 = (byte *)(*(long *)(piVar4 + 4) + param_5 * lVar9);
  pbVar7 = pbVar3 + *piVar4;
  if (pbVar3 == pbVar10) {
    return;
  }
  do {
    pbVar2 = pbVar3 + -(long)(int)uVar8;
    lVar5 = (ulong)*pbVar3 * 0x101010101010101;
    *(long *)pbVar2 = lVar5;
    *(long *)(pbVar2 + ((ulong)uVar8 - 8)) = lVar5;
    uVar1 = ((int)pbVar2 - (int)((ulong)(pbVar2 + 8) & 0xfffffffffffffff8)) + uVar8 & 0xfffffff8;
    if (7 < uVar1) {
      uVar6 = 0;
      do {
        uVar11 = (ulong)uVar6;
        uVar6 = uVar6 + 8;
        *(long *)(((ulong)(pbVar2 + 8) & 0xfffffffffffffff8) + uVar11) = lVar5;
      } while (uVar6 < uVar1);
    }
    lVar5 = (ulong)pbVar7[-1] * 0x101010101010101;
    uVar1 = ((int)pbVar7 - (int)((ulong)(pbVar7 + 8) & 0xfffffffffffffff8)) + uVar8 & 0xfffffff8;
    *(long *)pbVar7 = lVar5;
    *(long *)(pbVar7 + ((ulong)uVar8 - 8)) = lVar5;
    if (7 < uVar1) {
      uVar6 = 0;
      do {
        uVar11 = (ulong)uVar6;
        uVar6 = uVar6 + 8;
        *(long *)(((ulong)(pbVar7 + 8) & 0xfffffffffffffff8) + uVar11) = lVar5;
      } while (uVar6 < uVar1);
    }
    pbVar3 = pbVar3 + lVar9;
    pbVar7 = pbVar7 + lVar9;
  } while (pbVar10 != pbVar3);
  return;
}



void oc_state_borders_fill_caps(long param_1,int param_2,int param_3)

{
  int iVar1;
  void *__src;
  void *__src_00;
  int *piVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  if (param_3 == 0) {
    lVar3 = 0x10;
    lVar5 = -0x10;
    lVar7 = 0x10;
    iVar8 = 0x20;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x30) & 1;
    lVar5 = (ulong)(-(uint)(uVar4 == 0) & 8) - 0x10;
    lVar7 = (-(ulong)(uVar4 == 0) & 0xfffffffffffffff8) + 0x10;
    iVar8 = (-(uint)(uVar4 == 0) & 0xfffffff0) + 0x20;
    lVar3 = (long)(0x10 >> (((byte)(*(uint *)(param_1 + 0x30) >> 1) ^ 1) & 1));
  }
  piVar2 = (int *)((long)param_3 * 0x18 + 0x198 + (long)param_2 * 0x48 + param_1);
  lVar9 = (long)piVar2[2];
  iVar1 = *piVar2;
  pvVar6 = (void *)(lVar5 + *(long *)(piVar2 + 4));
  __src = pvVar6;
  __src_00 = (void *)(*(long *)(piVar2 + 4) + ((piVar2[1] + -1) * lVar9 - lVar7));
  while (__src != (void *)((long)pvVar6 - lVar3 * lVar9)) {
    memcpy((void *)((long)__src - lVar9),__src,(long)(iVar8 + iVar1));
    memcpy((void *)((long)__src_00 + lVar9),__src_00,(long)(iVar8 + iVar1));
    __src = (void *)((long)__src - lVar9);
    __src_00 = (void *)((long)__src_00 + lVar9);
  }
  return;
}



void oc_state_borders_fill(long param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = param_1 + (long)param_2 * 0x48;
  iVar2 = 0;
  do {
    puVar1 = (undefined4 *)(lVar3 + 0x19c);
    lVar3 = lVar3 + 0x18;
    oc_state_borders_fill_rows(param_1,param_2,iVar2,0,*puVar1);
    oc_state_borders_fill_caps(param_1,param_2,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  return;
}



undefined8 oc_state_get_mv_offsets(long param_1,int *param_2,int param_3,short param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = (ulong)param_3;
  iVar4 = *(int *)(param_1 + 0x398 + uVar6 * 4);
  lVar7 = (long)(short)((param_4 >> 8) + 0x1f);
  if (param_3 == 0) {
    cVar2 = OC_MVMAP2_0[lVar7];
    cVar1 = OC_MVMAP_1[lVar7];
  }
  else {
    if ((*(uint *)(param_1 + 0x30) & 2) == 0) {
      cVar1 = OC_MVMAP_1[lVar7 + 0x40];
      cVar2 = OC_MVMAP2_0[lVar7 + 0x40];
    }
    else {
      cVar1 = OC_MVMAP_1[lVar7];
      cVar2 = OC_MVMAP2_0[lVar7];
    }
    uVar6 = (ulong)(~*(uint *)(param_1 + 0x30) & 1);
  }
  lVar7 = (long)((char)param_4 + 0x1f);
  cVar3 = OC_MVMAP2_0[lVar7 + uVar6 * 0x40];
  iVar5 = (int)(char)OC_MVMAP_1[lVar7 + uVar6 * 0x40] + cVar1 * iVar4;
  if (cVar2 == '\0' && cVar3 == '\0') {
    *param_2 = iVar5;
    return 1;
  }
  *param_2 = iVar5;
  param_2[1] = iVar4 * cVar2 + iVar5 + (int)cVar3;
  return 2;
}



void oc_state_frag_recon_c
               (long param_1,long param_2,int param_3,short *param_4,int param_5,ushort param_6)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined2 uVar8;
  int local_48;
  int local_44;
  long local_40;
  undefined4 uVar9;
  
  psVar1 = param_4 + 0x40;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 2) {
    uVar8 = (undefined2)((int)((int)*param_4 * (uint)param_6 + 0xf) >> 5);
    uVar9 = CONCAT22(uVar8,uVar8);
    psVar4 = psVar1;
    do {
      *(undefined4 *)psVar4 = uVar9;
      *(undefined4 *)(psVar4 + 2) = uVar9;
      *(undefined4 *)(psVar4 + 4) = uVar9;
      *(undefined4 *)(psVar4 + 6) = uVar9;
      psVar5 = psVar4 + 0x10;
      *(undefined4 *)(psVar4 + 8) = uVar9;
      *(undefined4 *)(psVar4 + 10) = uVar9;
      *(undefined4 *)(psVar4 + 0xc) = uVar9;
      *(undefined4 *)(psVar4 + 0xe) = uVar9;
      psVar4 = psVar5;
    } while (param_4 + 0x80 != psVar5);
  }
  else {
    *param_4 = *param_4 * param_6;
    (**(code **)(param_1 + 0x68))(psVar1,param_4,param_5);
  }
  uVar9 = *(undefined4 *)(param_1 + 0x398 + (long)param_3 * 4);
  lVar6 = *(long *)(*(long *)(param_1 + 0x120) + param_2 * 8);
  bVar2 = *(byte *)(*(long *)(param_1 + 0x118) + param_2 * 4) >> 6;
  lVar7 = *(long *)(param_1 + 0x370) + lVar6;
  if (bVar2 == 2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x50))(lVar7,uVar9,psVar1);
      return;
    }
  }
  else {
    lVar6 = lVar6 + *(long *)(param_1 + 0x360 + (ulong)bVar2 * 8);
    iVar3 = oc_state_get_mv_offsets
                      (param_1,&local_48,param_3,
                       (int)*(short *)(*(long *)(param_1 + 0x128) + param_2 * 2));
    if (iVar3 < 2) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101b8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x58))(lVar7,lVar6 + local_48,uVar9,psVar1);
        return;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x60))(lVar7,local_48 + lVar6,local_44 + lVar6,uVar9,psVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long th_granule_frame(byte *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 < 0) {
    return -1;
  }
  lVar1 = param_2 >> ((byte)*(undefined4 *)(param_1 + 0x3c) & 0x3f);
  lVar1 = lVar1 + (param_2 - (lVar1 << ((byte)*(undefined4 *)(param_1 + 0x3c) & 0x3f)));
  if (3 < *param_1) {
LAB_00101bc3:
    return lVar1 + -1;
  }
  if (*param_1 == 3) {
    if (2 < param_1[1]) goto LAB_00101bc3;
    if (param_1[1] == 2) {
      return lVar1 + -1 + (ulong)(param_1[2] == 0);
    }
  }
  return lVar1;
}



double th_granule_time(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 < 0) {
    return _LC5;
  }
  lVar1 = th_granule_frame();
  return ((double)*(uint *)(param_1 + 0x20) / (double)*(uint *)(param_1 + 0x1c)) *
         (double)(lVar1 + 1);
}


