
undefined8 do_callout(undefined8 *param_1,long param_2,ulong *param_3)

{
  undefined8 uVar1;
  short sVar2;
  ushort uVar3;
  short *psVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  if (sVar2 == 0x76) {
    pcVar5 = *(code **)(param_2 + 0x108);
    *param_3 = (ulong)DAT_0010f076;
  }
  else {
    pcVar5 = *(code **)(param_2 + 0x108);
    *param_3 = (ulong)(ushort)psVar4[3];
  }
  if (pcVar5 != (code *)0x0) {
    lVar6 = *(long *)(param_2 + 0xf8);
    *(ulong *)(lVar6 + 8) =
         CONCAT44(*(undefined4 *)((long)param_1 + 0x74),(*(uint *)(param_1 + 0x10) >> 1) + 1);
    uVar1 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 **)(lVar6 + 0x10) = param_1 + 0xf;
    *(undefined8 *)(lVar6 + 0x18) = uVar1;
    *(long *)(lVar6 + 0x38) = param_1[10] - *(long *)(param_2 + 0x78) >> 1;
    *(ulong *)(lVar6 + 0x40) = (ulong)(ushort)psVar4[1];
    *(ulong *)(lVar6 + 0x48) = (ulong)(ushort)psVar4[2];
    if (sVar2 == 0x76) {
      uVar3 = psVar4[3];
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(undefined8 *)(lVar6 + 0x60) = 0;
      *(uint *)(lVar6 + 4) = (uint)uVar3;
      lVar9 = 0;
    }
    else {
      uVar3 = psVar4[4];
      *(undefined4 *)(lVar6 + 4) = 0;
      *(short **)(lVar6 + 0x60) = psVar4 + 6;
      *(ulong *)(lVar6 + 0x50) = (ulong)uVar3;
      lVar9 = *param_3 - 7;
    }
    *(long *)(lVar6 + 0x58) = lVar9;
    uVar1 = param_1[0xf];
    uVar7 = param_1[0x10];
    *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x7c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x84) = 0xffffffff;
    uVar8 = (*pcVar5)(lVar6,*(undefined8 *)(param_2 + 0x100));
    param_1[0xf] = uVar1;
    param_1[0x10] = uVar7;
    *(undefined4 *)(lVar6 + 0x68) = 0;
    return uVar8;
  }
  return 0;
}



undefined8 match_ref(ulong param_1,int param_2,long param_3,long param_4,ulong *param_5)

{
  long lVar1;
  ushort *__s2;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  ushort *puVar9;
  ulong uVar10;
  ushort *__s1;
  ushort *puVar11;
  ushort uVar12;
  ushort uVar13;
  
  if ((param_1 < *(ulong *)(param_3 + 0x80)) &&
     (lVar1 = *(long *)(param_3 + 0x88 + param_1 * 8), lVar1 != -1)) {
    __s2 = *(ushort **)(param_3 + 0x50);
    __s1 = (ushort *)(*(long *)(param_4 + 0x78) + lVar1 * 2);
    uVar8 = *(long *)(param_3 + 0x90 + param_1 * 8) - lVar1;
    if (param_2 == 0) {
      if (*(short *)(param_4 + 0x60) == 0) {
        if ((ulong)(*(long *)(param_4 + 0x88) - (long)__s2 >> 1) < uVar8) {
          return 1;
        }
        iVar3 = memcmp(__s1,__s2,uVar8 * 2);
        if (iVar3 != 0) {
          return 0xffffffff;
        }
        uVar8 = (long)(uVar8 * 2) >> 1;
        goto LAB_0010027b;
      }
      if (uVar8 == 0) goto LAB_0010027b;
      uVar10 = 0;
      puVar4 = __s2;
      do {
        if (*(ushort **)(param_4 + 0x88) <= puVar4) {
          return 1;
        }
        puVar5 = puVar4 + 1;
        if (__s1[uVar10] != *puVar4) {
          return 0xffffffff;
        }
        uVar10 = uVar10 + 1;
        puVar4 = puVar5;
      } while (uVar10 != uVar8);
    }
    else {
      if ((*(uint *)(param_4 + 0xd8) & 0xa0000) != 0) {
        puVar4 = __s1 + uVar8;
        if (__s1 < puVar4) {
          puVar5 = __s2;
          do {
            if (*(ushort **)(param_4 + 0x88) <= puVar5) {
              return 1;
            }
            uVar12 = *puVar5;
            uVar2 = (uint)uVar12;
            uVar13 = *__s1;
            uVar6 = (uint)uVar13;
            puVar9 = puVar5 + 1;
            puVar11 = __s1 + 1;
            if ((*(uint *)(param_4 + 0xd8) & 0x80000) == 0) {
LAB_00100218:
              __s1 = puVar11;
              if (uVar2 != uVar6) goto LAB_00100220;
            }
            else {
              if ((uVar12 & 0xfc00) != 0xd800) {
                if ((uVar13 & 0xfc00) == 0xd800) goto LAB_0010036f;
                goto LAB_00100218;
              }
              puVar9 = puVar5 + 2;
              uVar2 = ((uVar12 & 0x3ff) << 10 | puVar5[1] & 0x3ff) + 0x10000;
              if ((uVar13 & 0xfc00) == 0xd800) {
LAB_0010036f:
                puVar11 = __s1 + 2;
                uVar6 = ((uVar13 & 0x3ff) << 10 | __s1[1] & 0x3ff) + 0x10000;
                goto LAB_00100218;
              }
LAB_00100220:
              __s1 = puVar11;
              if (uVar6 + *(int *)(&DAT_0010f01c +
                                  (ulong)*(ushort *)
                                          (&_pcre2_ucd_stage2_16 +
                                          (long)(int)((uint)*(ushort *)
                                                             (&_pcre2_ucd_stage1_16 +
                                                             (long)((int)uVar6 >> 7) * 2) * 0x80 +
                                                     (uVar6 & 0x7f)) * 2) * 0xc) != uVar2) {
                puVar7 = (uint *)(&_pcre2_ucd_caseless_sets_16 +
                                 (ulong)(byte)(&DAT_0010f01b)
                                              [(ulong)*(ushort *)
                                                       (&_pcre2_ucd_stage2_16 +
                                                       (long)(int)((uint)*(ushort *)
                                                                          (&_pcre2_ucd_stage1_16 +
                                                                          (long)((int)uVar6 >> 7) *
                                                                          2) * 0x80 + (uVar6 & 0x7f)
                                                                  ) * 2) * 0xc] * 4);
                do {
                  uVar6 = *puVar7;
                  if (uVar2 < uVar6) {
                    return 0xffffffff;
                  }
                  puVar7 = puVar7 + 1;
                } while (uVar6 != uVar2);
              }
            }
            puVar5 = puVar9;
          } while (__s1 < puVar4);
          uVar8 = (long)puVar9 - (long)__s2 >> 1;
          goto LAB_0010027b;
        }
        goto LAB_00100279;
      }
      if (uVar8 == 0) goto LAB_0010027b;
      uVar10 = 0;
      puVar5 = __s2;
      do {
        if (*(ushort **)(param_4 + 0x88) <= puVar5) {
          return 1;
        }
        uVar12 = *puVar5;
        uVar13 = __s1[uVar10];
        if (uVar13 < 0x100) {
          if (0xff < uVar12) {
            return 0xffffffff;
          }
          uVar13 = (ushort)*(byte *)(*(long *)(param_4 + 0x38) + (ulong)uVar13);
          uVar12 = (ushort)*(byte *)(*(long *)(param_4 + 0x38) + (ulong)uVar12);
        }
        else if (uVar12 < 0x100) {
          return 0xffffffff;
        }
        if (uVar12 != uVar13) {
          return 0xffffffff;
        }
        uVar10 = uVar10 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar10 != uVar8);
    }
    uVar8 = (long)puVar5 - (long)__s2 >> 1;
  }
  else {
    if ((*(byte *)(param_4 + 0xd9) & 2) == 0) {
      return 0xffffffff;
    }
LAB_00100279:
    uVar8 = 0;
  }
LAB_0010027b:
  *param_5 = uVar8;
  return 0;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint match_constprop_0(ulong param_1,ushort *param_2,ushort param_3,ulong param_4,
                      undefined8 *param_5,long param_6)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  ushort *puVar10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  uint *puVar14;
  ushort *puVar15;
  uint *puVar16;
  ushort *puVar17;
  byte bVar18;
  ushort uVar19;
  void *pvVar20;
  ushort *puVar21;
  ulong *puVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ushort uVar27;
  uint uVar28;
  uint uVar29;
  long *plVar30;
  ulong uVar31;
  uint uVar32;
  ulong *puVar33;
  size_t sVar34;
  long in_FS_OFFSET;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  ulong local_e0;
  ulong *local_d8;
  uint local_c8;
  ushort *local_c0;
  ulong *local_b8;
  size_t sStack_a0;
  long lStack_50;
  ulong uStack_48;
  long local_40;
  
  puVar33 = (ulong *)param_5[6];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar26 = *(uint *)(param_6 + 0xd8);
  uVar25 = uVar26 & 0x80000;
  bVar36 = uVar25 != 0;
  uVar29 = 0;
  local_e0 = param_5[7] + (long)puVar33;
  *(undefined4 *)(puVar33 + 6) = 0;
  uVar11 = _LC0;
  puVar33[0xc] = 0;
  puVar33[0xe] = uVar11;
  puVar33[10] = param_1;
  puVar33[0xb] = param_1;
  uVar11 = _UNK_0010e618;
  local_c8 = 0;
  local_c0 = (ushort *)0x0;
  local_b8 = (ulong *)0x0;
  local_d8 = (ulong *)0x0;
  puVar33[0xf] = __LC1;
  puVar33[0x10] = uVar11;
code_r0x00100550:
  *(uint *)((long)puVar33 + 0x34) = uVar29;
  *puVar33 = (ulong)param_2;
  puVar33[4] = param_4;
  if ((uVar29 != 0) && (puVar33[0xf] = (long)puVar33 - param_5[6], (uVar29 & 0xffff0000) == 0x40000)
     ) {
    *(uint *)(puVar33 + 0xe) = uVar29 & 0xffff;
  }
  uVar29 = *(uint *)(param_6 + 0x24);
  *(uint *)(param_6 + 0x24) = uVar29 + 1;
  if (uVar29 < *(uint *)(param_6 + 0x1c)) {
    if ((uint)puVar33[6] < *(uint *)(param_6 + 0x20)) {
code_r0x001005ba:
      puVar17 = (ushort *)*puVar33;
      uVar19 = *puVar17;
      uVar11 = (ulong)uVar19;
      bVar18 = (byte)uVar19;
      *(byte *)((long)puVar33 + 0x49) = bVar18;
      puVar22 = puVar33;
      switch(bVar18) {
      case 0:
code_r0x00101e70:
        uVar11 = puVar33[10];
        uVar31 = puVar33[0xb];
        if ((uVar11 == uVar31) &&
           (((*(uint *)(param_6 + 0xd4) & 4) != 0 ||
            (((*(uint *)(param_6 + 0xd4) & 8) != 0 &&
             (uVar11 == *(long *)(param_6 + 0x78) + *(long *)(param_6 + 0x50) * 2)))))) break;
        if ((*(ulong *)(param_6 + 0x88) <= uVar11) ||
           (((*(uint *)(param_6 + 0xd4) | *(uint *)(param_6 + 0xd8)) & 0x20000000) == 0)) {
          uVar12 = puVar33[0x10];
          *(ulong *)(param_6 + 0x98) = uVar11;
          *(ulong *)(param_6 + 0x58) = uVar12;
          *(ulong *)(param_6 + 0xb0) = puVar33[0xc];
          if (*(ulong *)(param_6 + 0xa8) < uVar11) {
            *(ulong *)(param_6 + 0xa8) = uVar11;
          }
          lVar24 = *(long *)(param_6 + 0x78);
          param_5[0xe] = (long)(uVar11 - lVar24) >> 1;
          uVar19 = *(ushort *)((long)param_5 + 0x62);
          param_5[0xd] = (long)(uVar31 - lVar24) >> 1;
          if (param_3 < uVar19) {
            uVar26 = (uint)param_3 * 2 + 2;
          }
          else {
            uVar26 = (uint)uVar19 + (uint)uVar19;
          }
          memcpy(param_5 + 0xf,puVar33 + 0x11,(ulong)(uVar26 - 2) << 3);
          uVar11 = puVar33[0x10];
          while( true ) {
            uVar26 = uVar26 - 1;
            if ((ulong)uVar26 < uVar11 + 2) break;
            param_5[(ulong)uVar26 + 0xd] = 0xffffffffffffffff;
          }
          uVar29 = 1;
          goto LAB_00101d0c;
        }
        if (bVar18 != 0) {
          uVar29 = 0;
          goto LAB_00101d0c;
        }
        break;
      case 1:
        if (puVar33[10] == *(ulong *)(param_6 + 0x78)) goto code_r0x00101f21;
        break;
      case 2:
        if (puVar33[10] == *(long *)(param_6 + 0x78) + *(long *)(param_6 + 0x50) * 2)
        goto code_r0x00101f21;
        break;
      case 3:
        puVar33[0xb] = puVar33[10];
code_r0x00101f21:
        *puVar33 = (ulong)(puVar17 + 1);
        goto code_r0x001005ba;
      case 4:
      case 5:
      case 0xa9:
      case 0xaa:
        puVar15 = (ushort *)puVar33[10];
        if (puVar15 == *(ushort **)(param_6 + 0x80)) {
code_r0x001097bb:
          uVar29 = 0;
code_r0x001031cc:
          puVar10 = *(ushort **)(param_6 + 0x88);
          if (puVar10 <= puVar15) goto code_r0x001031dc;
          puVar21 = puVar15 + 1;
          if (uVar25 != 0) {
code_r0x001083b3:
            puVar21 = puVar15 + 1;
            if ((puVar21 < puVar10) && ((puVar15[1] & 0xfc00) == 0xdc00)) {
              puVar21 = puVar15 + 2;
            }
            uVar27 = *puVar15;
            if ((uVar27 & 0xfc00) != 0xd800) goto code_r0x00109756;
            uVar3 = puVar15[1];
            if (*(ushort **)(param_6 + 0xa8) < puVar21) {
              *(ushort **)(param_6 + 0xa8) = puVar21;
              if (1 < (byte)(bVar18 + 0x57)) goto code_r0x0010840d;
code_r0x0010a1d0:
              uVar32 = ((uVar27 & 0x3ff) << 10 | uVar3 & 0x3ff) + 0x10000;
              goto code_r0x0010a1ec;
            }
            uVar32 = 0;
            if ((byte)(bVar18 + 0x57) < 2) goto code_r0x0010a1d0;
            goto code_r0x00103208;
          }
          uVar27 = *puVar15;
code_r0x00109756:
          uVar32 = (uint)uVar27;
          if (*(ushort **)(param_6 + 0xa8) < puVar21) {
            *(ushort **)(param_6 + 0xa8) = puVar21;
          }
          if ((byte)(bVar18 + 0x57) < 2) {
code_r0x0010a1ec:
            bVar2 = *(byte *)((ulong)*(ushort *)
                                      (&_pcre2_ucd_stage2_16 +
                                      (long)(int)((uint)*(ushort *)
                                                         (&_pcre2_ucd_stage1_16 +
                                                         (long)((int)uVar32 >> 7) * 2) * 0x80 +
                                                 (uVar32 & 0x7f)) * 2) * 0xc + 0x10f019);
            uVar32 = 1;
            if ((*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)bVar2 * 4) & 0xfffffffd) != 1) {
              uVar32 = (uint)((bVar2 - 0xc & 0xfb) == 0);
            }
            goto code_r0x00103208;
          }
          if (0xff < uVar32) {
code_r0x0010840d:
            *puVar33 = (ulong)(puVar17 + 1);
code_r0x00108414:
            uVar32 = 0;
            uVar28 = 0;
            if (uVar19 != 5) goto code_r0x00103222;
            goto code_r0x00108420;
          }
          bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar32);
          *puVar33 = (ulong)(puVar17 + 1);
          if ((bVar18 & 0x10) == 0) goto code_r0x00108414;
          uVar32 = 1;
          uVar28 = uVar32;
          if (uVar19 == 5) goto code_r0x00108420;
        }
        else {
          puVar10 = puVar15 + -1;
          if (uVar25 == 0) {
            uVar27 = puVar15[-1];
code_r0x00103193:
            uVar29 = (uint)uVar27;
            if (puVar10 < *(ushort **)(param_6 + 0xa0)) {
              *(ushort **)(param_6 + 0xa0) = puVar10;
            }
            if ((byte)(bVar18 + 0x57) < 2) {
code_r0x00109d86:
              bVar2 = *(byte *)((ulong)*(ushort *)
                                        (&_pcre2_ucd_stage2_16 +
                                        (long)(int)((uint)*(ushort *)
                                                           (&_pcre2_ucd_stage1_16 +
                                                           (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                                   (uVar29 & 0x7f)) * 2) * 0xc + 0x10f019);
              uVar29 = 1;
              if ((*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)bVar2 * 4) & 0xfffffffd) != 1) {
                uVar29 = (uint)((bVar2 - 0xc & 0xfb) == 0);
              }
            }
            else {
              if (0xff < uVar29) goto code_r0x001097bb;
              uVar29 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar29) >> 4 & 1;
            }
            goto code_r0x001031cc;
          }
          if ((puVar15[-1] & 0xfc00) == 0xdc00) {
            puVar10 = puVar15 + -2;
          }
          uVar27 = *puVar10;
          if ((uVar27 & 0xfc00) != 0xd800) goto code_r0x00103193;
          uVar3 = puVar10[1];
          if (puVar10 < *(ushort **)(param_6 + 0xa0)) {
            *(ushort **)(param_6 + 0xa0) = puVar10;
            if (1 < (byte)(bVar18 + 0x57)) goto code_r0x0010a9a2;
code_r0x00109d6a:
            uVar29 = ((uVar27 & 0x3ff) << 10 | uVar3 & 0x3ff) + 0x10000;
            goto code_r0x00109d86;
          }
          if ((byte)(bVar18 + 0x57) < 2) goto code_r0x00109d6a;
code_r0x0010a9a2:
          puVar10 = *(ushort **)(param_6 + 0x88);
          if (puVar15 < puVar10) {
            uVar29 = 0;
            goto code_r0x001083b3;
          }
          uVar29 = 0;
code_r0x001031dc:
          if (*(short *)(param_6 + 0x60) == 0) {
code_r0x00103206:
            uVar32 = 0;
          }
          else if ((*(ushort **)(param_6 + 0xa0) < puVar15) ||
                  (uVar32 = *(uint *)(param_6 + 0x30), uVar32 != 0)) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            if (*(short *)(param_6 + 0x60) == 1) goto code_r0x00103206;
            goto code_r0x00102f0a;
          }
code_r0x00103208:
          *puVar33 = (ulong)(puVar17 + 1);
          uVar28 = uVar32;
          if ((uVar19 == 5) || (bVar18 == 0xaa)) {
code_r0x00108420:
            if (uVar29 == uVar28) break;
            goto code_r0x001005ba;
          }
        }
code_r0x00103222:
        if (uVar29 == uVar32) goto code_r0x001005ba;
        break;
      case 6:
        puVar15 = (ushort *)puVar33[10];
        if (puVar15 < *(ushort **)(param_6 + 0x88)) {
          puVar33[10] = (ulong)(puVar15 + 1);
          uVar19 = *puVar15;
          if ((uVar25 == 0) || ((uVar19 & 0xfc00) != 0xd800)) {
            if (uVar19 < 0x100) {
              bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 8;
joined_r0x00103f3b:
              if (bVar18 == 0) break;
            }
          }
          else {
code_r0x00109bec:
            puVar33[10] = (ulong)(puVar15 + 2);
          }
          goto code_r0x00103db9;
        }
code_r0x0010524e:
        sVar4 = *(short *)(param_6 + 0x60);
        if (sVar4 != 0) {
          if (*(ushort **)(param_6 + 0xa0) < puVar15) goto code_r0x00100609;
          goto code_r0x00100602;
        }
        break;
      case 7:
        puVar15 = (ushort *)puVar33[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar15) goto code_r0x0010524e;
        puVar33[10] = (ulong)(puVar15 + 1);
        uVar19 = *puVar15;
        if ((uVar25 == 0) || ((uVar19 & 0xfc00) != 0xd800)) {
          if ((uVar19 < 0x100) && ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 8) != 0))
          goto code_r0x00101f21;
        }
        else {
code_r0x0010aa30:
          puVar33[10] = (ulong)(puVar15 + 2);
        }
        break;
      case 8:
        puVar15 = (ushort *)puVar33[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar15) goto code_r0x0010524e;
        puVar33[10] = (ulong)(puVar15 + 1);
        uVar19 = *puVar15;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) goto code_r0x00109bec;
        if (uVar19 < 0x100) {
          bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 1;
          goto joined_r0x00103f3b;
        }
        goto code_r0x00103db9;
      case 9:
        puVar15 = (ushort *)puVar33[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar15) goto code_r0x0010524e;
        puVar33[10] = (ulong)(puVar15 + 1);
        uVar19 = *puVar15;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) goto code_r0x0010aa30;
        if (uVar19 < 0x100) {
          bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 1;
          goto joined_r0x00103f3b;
        }
        break;
      case 10:
        puVar15 = (ushort *)puVar33[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar15) goto code_r0x0010524e;
        puVar33[10] = (ulong)(puVar15 + 1);
        uVar19 = *puVar15;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) goto code_r0x00109bec;
        if (uVar19 < 0x100) {
          bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 0x10;
          goto joined_r0x00103f3b;
        }
        goto code_r0x00103db9;
      case 0xb:
        puVar15 = (ushort *)puVar33[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar15) goto code_r0x0010524e;
        puVar33[10] = (ulong)(puVar15 + 1);
        uVar19 = *puVar15;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) goto code_r0x0010aa30;
        if (uVar19 < 0x100) {
          bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 0x10;
          goto joined_r0x00103f3b;
        }
        break;
      case 0xc:
        psVar8 = (short *)puVar33[10];
        if (*(int *)(param_6 + 0xe4) == 0) {
          psVar9 = *(short **)(param_6 + 0x88);
          if (((psVar9 + -(ulong)*(uint *)(param_6 + 0xe8) < psVar8) ||
              (*psVar8 != *(short *)(param_6 + 0xec))) ||
             ((*(uint *)(param_6 + 0xe8) != 1 && (psVar8[1] != *(short *)(param_6 + 0xee))))) {
code_r0x0010814f:
            sVar4 = *(short *)(param_6 + 0x60);
            if (sVar4 != 0) goto code_r0x00103e9f;
            if (psVar8 < psVar9) goto code_r0x0010816b;
          }
        }
        else {
          psVar9 = *(short **)(param_6 + 0x88);
          if (psVar8 < psVar9) {
            iVar5 = _pcre2_is_newline_16
                              (psVar8,*(int *)(param_6 + 0xe4),psVar9,param_6 + 0xe8,bVar36);
            if (iVar5 == 0) {
              psVar8 = (short *)puVar33[10];
              psVar9 = *(short **)(param_6 + 0x88);
              goto code_r0x0010814f;
            }
          }
          else {
            sVar4 = *(short *)(param_6 + 0x60);
            if (sVar4 != 0) {
code_r0x00103e9f:
              if ((((psVar8 == psVar9 + -1) && (*(int *)(param_6 + 0xe4) == 0)) &&
                  (*(int *)(param_6 + 0xe8) == 2)) && (*psVar8 == *(short *)(param_6 + 0xec))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                if (sVar4 != 1) goto code_r0x00102f0a;
                if (psVar9 <= psVar8) break;
              }
              else if (psVar9 <= psVar8) goto code_r0x00103ebb;
code_r0x0010816b:
              puVar33[10] = (ulong)(psVar8 + 1);
              if (((psVar8 + 1 < psVar9) && (bVar36)) && ((psVar8[1] & 0xfc00U) == 0xdc00)) {
                puVar33[10] = (ulong)(psVar8 + 2);
              }
              goto code_r0x001038fa;
            }
          }
        }
        break;
      case 0xd:
        psVar8 = (short *)puVar33[10];
        psVar9 = *(short **)(param_6 + 0x88);
        if (psVar8 < psVar9) goto code_r0x0010816b;
        sVar4 = *(short *)(param_6 + 0x60);
        if (sVar4 != 0) {
code_r0x00103ebb:
          if ((*(short **)(param_6 + 0xa0) < psVar8) || (*(int *)(param_6 + 0x30) != 0)) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x001099c4;
          }
        }
        break;
      case 0xe:
        uVar11 = puVar33[10];
        if (*(ulong *)(param_6 + 0x88) <= uVar11) {
          sVar4 = *(short *)(param_6 + 0x60);
          if ((sVar4 == 0) ||
             ((uVar11 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) break;
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x001099c4;
        }
        puVar33[10] = uVar11 + 2;
        *puVar33 = (ulong)(puVar17 + 1);
        goto code_r0x001005ba;
      case 0xf:
      case 0x10:
        puVar15 = (ushort *)puVar33[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar15) {
          sVar4 = *(short *)(param_6 + 0x60);
          if (sVar4 == 0) break;
          if (*(ushort **)(param_6 + 0xa0) < puVar15) goto code_r0x00100609;
code_r0x00100602:
          if (*(int *)(param_6 + 0x30) != 0) {
code_r0x00100609:
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x001099c4;
          }
          break;
        }
        puVar33[10] = (ulong)(puVar15 + 1);
        uVar19 = *puVar15;
        uVar29 = (uint)uVar19;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar15[1];
          puVar33[10] = (ulong)(puVar15 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        lVar24 = (ulong)*(ushort *)
                         (&_pcre2_ucd_stage2_16 +
                         (long)(int)((uint)*(ushort *)
                                            (&_pcre2_ucd_stage1_16 + (long)((int)uVar29 >> 7) * 2) *
                                     0x80 + (uVar29 & 0x7f)) * 2) * 0xc;
        switch(puVar17[1]) {
        case 0:
          goto code_r0x001096a7;
        case 1:
          bVar37 = (byte)(*(char *)(lVar24 + 0x10f019) - 8U) < 2 ||
                   *(char *)(lVar24 + 0x10f019) == '\x05';
          break;
        case 2:
          bVar37 = *(uint *)(&_pcre2_ucp_gentype_16 + (ulong)*(byte *)(lVar24 + 0x10f019) * 4) ==
                   (uint)puVar17[2];
          break;
        case 3:
          bVar37 = puVar17[2] == (ushort)*(byte *)(lVar24 + 0x10f019);
          break;
        case 4:
          bVar37 = puVar17[2] == (ushort)(byte)(&_pcre2_ucd_records_16)[lVar24];
          break;
        case 5:
          uVar19 = puVar17[2];
          bVar37 = true;
          if (uVar19 != (byte)(&_pcre2_ucd_records_16)[lVar24]) {
            bVar37 = (1 << ((byte)uVar19 & 0x1f) &
                     *(uint *)(&_pcre2_ucd_script_sets_16 +
                              ((ulong)(*(ushort *)(&_pcre2_ucd_caseless_sets_16 + lVar24) & 0x3ff) +
                              (ulong)(uVar19 >> 5)) * 4)) != 0;
          }
          break;
        case 6:
          bVar37 = (*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)*(byte *)(lVar24 + 0x10f019) * 4) &
                   0xfffffffd) == 1;
          break;
        case 7:
        case 8:
          if (uVar29 != 0x180e) {
            if (uVar29 < 0x180f) {
              if (uVar29 != 0x85) {
                if (uVar29 < 0x86) {
                  if (uVar29 < 0xe) {
                    if (uVar29 < 9) goto code_r0x001095b6;
                  }
                  else if (uVar29 != 0x20) goto code_r0x001095b6;
                }
                else if ((uVar29 != 0xa0) && (uVar29 != 0x1680)) goto code_r0x001095b6;
              }
            }
            else if (uVar29 < 0x2060) {
              if (uVar29 < 0x2028) {
                if (10 < uVar29 - 0x2000) {
code_r0x001095b6:
                  bVar37 = *(int *)(&_pcre2_ucp_gentype_16 + (ulong)*(byte *)(lVar24 + 0x10f019) * 4
                                   ) == 6;
                  break;
                }
              }
              else if ((0x80000000000083U >> ((ulong)(uVar29 - 0x2028) & 0x3f) & 1) == 0)
              goto code_r0x001095b6;
            }
            else if (uVar29 != 0x3000) goto code_r0x001095b6;
          }
          goto code_r0x001096a7;
        case 9:
          bVar37 = (*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)*(byte *)(lVar24 + 0x10f019) * 4) &
                   0xfffffffd) == 1 || (*(byte *)(lVar24 + 0x10f019) - 0xc & 0xfb) == 0;
          break;
        case 10:
          puVar16 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)puVar17[2] * 4);
          do {
            uVar32 = *puVar16;
            if (uVar29 < uVar32) goto joined_r0x00109541;
            puVar16 = puVar16 + 1;
          } while (uVar29 != uVar32);
code_r0x001096a7:
joined_r0x00109541:
          if (bVar18 != 0xf) goto code_r0x00100620;
          goto code_r0x001094d5;
        case 0xb:
          if (((uVar29 & 0xffffffdf) == 0x40) || (uVar29 == 0x24)) {
            bVar37 = true;
          }
          else {
            bVar37 = uVar29 - 0xa0 < 0xd760 || 0xdfff < uVar29;
          }
          break;
        case 0xc:
          bVar37 = *(ushort *)(&_pcre2_ucd_caseless_sets_16 + lVar24) >> 0xb == puVar17[2];
          break;
        case 0xd:
          bVar37 = (1 << ((byte)puVar17[2] & 0x1f) &
                   *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                            ((ulong)(*(ushort *)(lVar24 + 0x10f022) & 0xfff) +
                            (ulong)(puVar17[2] >> 5)) * 4)) != 0;
          break;
        default:
          goto LAB_00102cc0;
        }
        if ((bVar18 == 0xf) == bVar37) break;
code_r0x001094d5:
        puVar17 = puVar17 + 3;
        goto code_r0x00103dbd;
      case 0x11:
        puVar15 = (ushort *)puVar33[10];
        puVar10 = *(ushort **)(param_6 + 0x88);
        if (puVar10 <= puVar15) goto code_r0x0010524e;
        puVar21 = puVar15 + 1;
        uVar19 = *puVar15;
        puVar33[10] = (ulong)puVar21;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) goto code_r0x0010aa30;
        if (uVar19 == 0xd) {
          if (puVar21 < puVar10) {
            if (puVar15[1] == 10) goto code_r0x00109bec;
          }
          else if ((*(short *)(param_6 + 0x60) != 0) &&
                  (((*(ushort **)(param_6 + 0xa0) < puVar21 || (*(int *)(param_6 + 0x30) != 0)) &&
                   (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
          goto code_r0x00102f0a;
        }
        else {
          if (uVar19 < 0xe) {
            if (uVar19 == 10) goto code_r0x00103db9;
            uVar19 = uVar19 - 0xb;
joined_r0x0010a817:
            if (1 < uVar19) break;
          }
          else if (uVar19 != 0x85) {
            uVar19 = uVar19 + 0xdfd8;
            goto joined_r0x0010a817;
          }
          if (*(short *)(param_6 + 0x62) == 2) break;
        }
code_r0x00103db9:
        puVar17 = puVar17 + 1;
code_r0x00103dbd:
        *puVar33 = (ulong)puVar17;
        goto code_r0x001005ba;
      case 0x12:
        puVar15 = (ushort *)puVar33[10];
        if (puVar15 < *(ushort **)(param_6 + 0x88)) {
          puVar33[10] = (ulong)(puVar15 + 1);
          uVar19 = *puVar15;
          if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
            puVar33[10] = (ulong)(puVar15 + 2);
            goto code_r0x00103db9;
          }
          if (uVar19 != 0x180e) {
            if (uVar19 < 0x180f) {
              if (uVar19 != 0xa0) {
                if (uVar19 < 0xa1) {
                  if ((uVar19 != 9) && (uVar19 != 0x20)) goto code_r0x00103db9;
                }
                else if (uVar19 != 0x1680) goto code_r0x00103db9;
              }
            }
            else if (uVar19 != 0x205f) {
              if (uVar19 < 0x2060) {
                if (uVar19 < 0x200b) {
                  if (uVar19 < 0x2000) goto code_r0x00103db9;
                }
                else if (uVar19 != 0x202f) goto code_r0x00103db9;
              }
              else {
joined_r0x0010b8a8:
                if (uVar19 == 0x3000) goto code_r0x00103db9;
              }
            }
          }
        }
        else {
code_r0x00108096:
          sVar4 = *(short *)(param_6 + 0x60);
          if (sVar4 != 0) {
            if (puVar15 <= *(ushort **)(param_6 + 0xa0)) goto code_r0x00100602;
            goto code_r0x00100609;
          }
        }
        break;
      case 0x13:
        puVar15 = (ushort *)puVar33[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar15) goto code_r0x00108096;
        puVar33[10] = (ulong)(puVar15 + 1);
        uVar19 = *puVar15;
        if ((uVar25 == 0) || ((uVar19 & 0xfc00) != 0xd800)) {
          if (uVar19 != 0x180e) {
            if (uVar19 < 0x180f) {
              if (uVar19 != 0xa0) {
                if (uVar19 < 0xa1) {
                  if ((uVar19 == 9) || (uVar19 == 0x20)) goto code_r0x00103db9;
                }
                else if (uVar19 == 0x1680) goto code_r0x00103db9;
                break;
              }
            }
            else if (uVar19 != 0x205f) {
              if (0x205f < uVar19) goto joined_r0x0010b8a8;
              if (uVar19 < 0x200b) {
                if (0x1fff < uVar19) goto code_r0x00103db9;
              }
              else if (uVar19 == 0x202f) goto code_r0x00103db9;
              break;
            }
          }
          goto code_r0x00103db9;
        }
        puVar33[10] = (ulong)(puVar15 + 2);
        break;
      case 0x14:
        puVar15 = (ushort *)puVar33[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar15) goto code_r0x0010524e;
        puVar33[10] = (ulong)(puVar15 + 1);
        uVar19 = *puVar15;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) goto code_r0x00109bec;
        if (uVar19 != 0x85) {
          if (uVar19 < 0x86) {
            if (3 < (ushort)(uVar19 - 10)) goto code_r0x00103db9;
          }
          else if (1 < (ushort)(uVar19 + 0xdfd8)) goto code_r0x00103db9;
        }
        break;
      case 0x15:
        puVar15 = (ushort *)puVar33[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar15) goto code_r0x0010524e;
        puVar33[10] = (ulong)(puVar15 + 1);
        uVar19 = *puVar15;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) goto code_r0x0010aa30;
        if (uVar19 == 0x85) goto code_r0x00103db9;
        if (uVar19 < 0x86) {
          if ((ushort)(uVar19 - 10) < 4) goto code_r0x00103db9;
        }
        else if ((ushort)(uVar19 + 0xdfd8) < 2) goto code_r0x00103db9;
        break;
      case 0x16:
        puVar17 = (ushort *)puVar33[10];
        if (puVar17 < *(ushort **)(param_6 + 0x88)) {
          uVar19 = *puVar17;
          uVar29 = (uint)uVar19;
          puVar33[10] = (ulong)(puVar17 + 1);
          if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
            uVar27 = puVar17[1];
            puVar33[10] = (ulong)(puVar17 + 2);
            uVar29 = (uVar27 & 0x3ff | (uVar19 & 0x3ff) << 10) + 0x10000;
          }
          uVar31 = func_0x0010f068(uVar29,puVar33[10],*(undefined8 *)(param_6 + 0x78));
          uVar11 = *(ulong *)(param_6 + 0x88);
          puVar33[10] = uVar31;
          if ((((uVar31 < uVar11) || (*(short *)(param_6 + 0x60) == 0)) ||
              ((uVar31 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) ||
             (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1)) {
            puVar17 = (ushort *)*puVar33;
            goto code_r0x00103db9;
          }
          goto code_r0x00102f0a;
        }
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x001099c4;
        }
        break;
      case 0x17:
code_r0x00101f2d:
        psVar8 = (short *)puVar33[10];
        psVar9 = *(short **)(param_6 + 0x88);
        if (psVar9 <= psVar8) {
code_r0x001038e0:
          if ((*(short *)(param_6 + 0x60) != 0) &&
             (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
          goto code_r0x00102f0a;
code_r0x001038fa:
          *puVar33 = *puVar33 + 2;
          goto code_r0x001005ba;
        }
        if (*(int *)(param_6 + 0xe4) == 0) {
          if (((psVar8 <= psVar9 + -(ulong)*(uint *)(param_6 + 0xe8)) &&
              (*psVar8 == *(short *)(param_6 + 0xec))) &&
             ((*(uint *)(param_6 + 0xe8) == 1 || (psVar8[1] == *(short *)(param_6 + 0xee))))) {
code_r0x001038ca:
            if ((short *)puVar33[10] == psVar9 + -(ulong)*(uint *)(param_6 + 0xe8))
            goto code_r0x001038e0;
          }
        }
        else {
          iVar5 = _pcre2_is_newline_16(psVar8,*(int *)(param_6 + 0xe4),psVar9,param_6 + 0xe8,bVar36)
          ;
          if (iVar5 != 0) {
            psVar9 = *(short **)(param_6 + 0x88);
            goto code_r0x001038ca;
          }
        }
        sVar4 = *(short *)(param_6 + 0x60);
        if (((sVar4 != 0) &&
            (((*(short **)(param_6 + 0x88) <= (short *)puVar33[10] + 1 &&
              (*(int *)(param_6 + 0xe4) == 0)) && (*(int *)(param_6 + 0xe8) == 2)))) &&
           (*(short *)puVar33[10] == *(short *)(param_6 + 0xec))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x001099c4;
        }
        break;
      case 0x18:
code_r0x00101ef6:
        if (*(ulong *)(param_6 + 0x90) <= puVar33[10]) {
          if ((*(short *)(param_6 + 0x60) == 0) ||
             (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))
          goto code_r0x00101f21;
          goto code_r0x00102f0a;
        }
        break;
      case 0x19:
        if ((*(byte *)(param_6 + 0xd4) & 2) == 0) {
          if ((*(byte *)(param_6 + 0xd8) & 0x10) != 0) goto code_r0x00101ef6;
          goto code_r0x00101f2d;
        }
        break;
      case 0x1a:
        psVar8 = (short *)puVar33[10];
        psVar9 = *(short **)(param_6 + 0x88);
        if (psVar8 < psVar9) {
          if (*(int *)(param_6 + 0xe4) == 0) {
            if (((psVar9 + -(ulong)*(uint *)(param_6 + 0xe8) < psVar8) ||
                (*psVar8 != *(short *)(param_6 + 0xec))) ||
               ((*(uint *)(param_6 + 0xe8) != 1 && (psVar8[1] != *(short *)(param_6 + 0xee)))))
            goto code_r0x0010429c;
            goto code_r0x001038fa;
          }
          iVar5 = _pcre2_is_newline_16(psVar8,*(int *)(param_6 + 0xe4),psVar9,param_6 + 0xe8,bVar36)
          ;
          if (iVar5 != 0) goto code_r0x001038fa;
code_r0x0010429c:
          sVar4 = *(short *)(param_6 + 0x60);
          if ((((sVar4 == 0) || ((short *)puVar33[10] + 1 < *(short **)(param_6 + 0x88))) ||
              (*(int *)(param_6 + 0xe4) != 0)) ||
             ((*(int *)(param_6 + 0xe8) != 2 ||
              (*(short *)puVar33[10] != *(short *)(param_6 + 0xec))))) break;
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00107f3c;
        }
        if ((*(byte *)(param_6 + 0xd4) & 2) != 0) break;
        if (((*(short *)(param_6 + 0x60) == 0) ||
            ((psVar8 <= *(short **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) ||
           (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))
        goto code_r0x001038fa;
        goto code_r0x00102f0a;
      case 0x1b:
        if ((puVar33[10] == *(ulong *)(param_6 + 0x78)) && ((*(byte *)(param_6 + 0xd4) & 1) == 0))
        goto code_r0x00101f21;
        break;
      case 0x1c:
        uVar11 = puVar33[10];
        uVar31 = *(ulong *)(param_6 + 0x78);
        if ((*(byte *)(param_6 + 0xd4) & 1) == 0) {
          if (uVar11 == uVar31) goto code_r0x001038fa;
        }
        else if (uVar11 == uVar31) break;
        if ((uVar11 != *(ulong *)(param_6 + 0x88)) || ((*(byte *)(param_6 + 0xda) & 0x20) != 0)) {
          if (*(int *)(param_6 + 0xe4) == 0) {
            uVar12 = (ulong)*(uint *)(param_6 + 0xe8);
            if (((uVar11 < uVar31 + uVar12 * 2) ||
                (*(short *)(uVar11 + uVar12 * -2) != *(short *)(param_6 + 0xec))) ||
               ((*(uint *)(param_6 + 0xe8) != 1 &&
                (*(short *)(uVar11 + (1 - uVar12) * 2) != *(short *)(param_6 + 0xee))))) break;
          }
          else if ((uVar11 <= uVar31) ||
                  (iVar5 = _pcre2_was_newline_16
                                     (uVar11,*(int *)(param_6 + 0xe4),uVar31,param_6 + 0xe8),
                  iVar5 == 0)) break;
          goto code_r0x001038fa;
        }
        break;
      case 0x1d:
        if (uVar25 == 0) {
          puVar15 = (ushort *)puVar33[10];
          if (*(ushort **)(param_6 + 0x88) == puVar15 ||
              (long)*(ushort **)(param_6 + 0x88) - (long)puVar15 < 0) {
            sVar4 = *(short *)(param_6 + 0x60);
            if ((sVar4 != 0) &&
               ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x001099c4;
            }
          }
          else {
            uVar19 = puVar17[1];
            puVar33[10] = (ulong)(puVar15 + 1);
            if (uVar19 == *puVar15) goto code_r0x00103a9f;
          }
        }
        else {
          *puVar33 = (ulong)(puVar17 + 1);
          puVar15 = (ushort *)puVar33[10];
          uVar11 = (ulong)((puVar17[1] & 0xfc00) == 0xd800) + 1;
          puVar33[3] = uVar11;
          if (uVar11 <= (ulong)((long)*(ushort **)(param_6 + 0x88) - (long)puVar15 >> 1)) {
            puVar17 = puVar17 + 2;
            do {
              puVar10 = puVar17;
              puVar21 = puVar15 + 1;
              if (puVar10[-1] != *puVar15) {
                *puVar33 = (ulong)puVar10;
                puVar33[10] = (ulong)puVar21;
                goto code_r0x00100620;
              }
              uVar11 = uVar11 - 1;
              puVar33[3] = uVar11;
              puVar17 = puVar10 + 1;
              puVar15 = puVar21;
            } while (uVar11 != 0);
            *puVar33 = (ulong)puVar10;
            puVar33[10] = (ulong)puVar21;
            goto code_r0x001005ba;
          }
          if (((*(ushort **)(param_6 + 0x88) <= puVar15) &&
              (sVar4 = *(short *)(param_6 + 0x60), sVar4 != 0)) &&
             ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x001099c4;
          }
        }
        break;
      case 0x1e:
        puVar15 = (ushort *)puVar33[10];
        if (puVar15 < *(ushort **)(param_6 + 0x88)) {
          if (uVar25 == 0) {
            if ((uVar26 & 0x20000) == 0) {
              uVar19 = puVar17[1];
              if (uVar19 < 0x100) {
                uVar19 = (ushort)*(byte *)(*(long *)(param_6 + 0x38) + (ulong)uVar19);
                if (*puVar15 < 0x100) {
                  uVar27 = (ushort)*(byte *)(*(long *)(param_6 + 0x38) + (ulong)*puVar15);
code_r0x0010a9ed:
                  if (uVar27 == uVar19) goto code_r0x00109f9b;
                }
              }
              else {
                uVar27 = *puVar15;
                if (0xff < uVar27) goto code_r0x0010a9ed;
              }
            }
            else {
              uVar19 = puVar17[1];
              uVar27 = *puVar15;
              if (uVar19 < 0x80) {
                if ((uVar27 < 0x100) &&
                   (*(char *)(*(long *)(param_6 + 0x38) + (ulong)uVar19) ==
                    *(char *)(*(long *)(param_6 + 0x38) + (ulong)uVar27))) {
code_r0x00109f9b:
                  puVar33[10] = (ulong)(puVar15 + 1);
                  goto code_r0x00103a9f;
                }
              }
              else {
                uVar29 = (uint)uVar19;
                if ((uVar27 == uVar29) ||
                   (uVar29 + *(int *)(&DAT_0010f01c +
                                     (ulong)*(ushort *)
                                             (&_pcre2_ucd_stage2_16 +
                                             (long)(int)((uint)*(ushort *)
                                                                (&_pcre2_ucd_stage1_16 +
                                                                (long)((int)uVar29 >> 7) * 2) * 0x80
                                                        + (uVar19 & 0x7f)) * 2) * 0xc) ==
                    (uint)uVar27)) goto code_r0x00109f9b;
              }
            }
          }
          else {
            uVar19 = puVar17[1];
            uVar29 = (uint)uVar19;
            puVar33[3] = 1;
            *puVar33 = (ulong)(puVar17 + 1);
            if ((uVar19 & 0xfc00) == 0xd800) {
              uVar27 = puVar17[2];
              puVar33[3] = 2;
              uVar29 = (uVar27 & 0x3ff | (uVar19 & 0x3ff) << 10) + 0x10000;
            }
            else if (uVar19 < 0x80) {
              if ((0xff < *puVar15) ||
                 (*(char *)(*(long *)(param_6 + 0x38) + (ulong)uVar19) !=
                  *(char *)(*(long *)(param_6 + 0x38) + (ulong)*puVar15))) break;
              *puVar33 = (ulong)(puVar17 + 2);
              puVar33[10] = (ulong)(puVar15 + 1);
              goto code_r0x001005ba;
            }
            uVar19 = *puVar15;
            uVar32 = (uint)uVar19;
            puVar33[10] = (ulong)(puVar15 + 1);
            if ((uVar19 & 0xfc00) == 0xd800) {
              uVar27 = puVar15[1];
              puVar33[10] = (ulong)(puVar15 + 2);
              uVar32 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
            }
            *puVar33 = (ulong)(puVar17 + 1 + puVar33[3]);
            if ((uVar32 == uVar29) ||
               (uVar32 == uVar29 + *(int *)(&DAT_0010f01c +
                                           (ulong)*(ushort *)
                                                   (&_pcre2_ucd_stage2_16 +
                                                   (long)(int)((uint)*(ushort *)
                                                                      (&_pcre2_ucd_stage1_16 +
                                                                      (long)((int)uVar29 >> 7) * 2)
                                                               * 0x80 + (uVar29 & 0x7f)) * 2) * 0xc)
               )) goto code_r0x001005ba;
          }
        }
        else {
          sVar4 = *(short *)(param_6 + 0x60);
          if ((sVar4 != 0) &&
             ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x001099c4;
          }
        }
        break;
      case 0x1f:
      case 0x20:
        puVar15 = (ushort *)puVar33[10];
        if (puVar15 < *(ushort **)(param_6 + 0x88)) {
          if (uVar25 == 0) {
            if ((uVar26 & 0x20000) == 0) {
              uVar19 = puVar17[1];
              puVar33[10] = (ulong)(puVar15 + 1);
              if ((uVar19 != *puVar15) &&
                 (((0xff < uVar19 || (bVar18 != 0x20)) ||
                  (*puVar15 != (ushort)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar19)))))
              goto code_r0x00103a9f;
            }
            else {
              uVar19 = *puVar15;
              puVar33[10] = (ulong)(puVar15 + 1);
              uVar27 = puVar17[1];
              *puVar33 = (ulong)(puVar17 + 2);
              if ((uint)uVar19 != (uint)uVar27) {
                if (bVar18 != 0x20) goto code_r0x001005ba;
                if (uVar27 < 0x80) {
                  uVar29 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)(uint)uVar27);
                }
                else {
                  uVar29 = (uint)uVar27 +
                           *(int *)(&DAT_0010f01c +
                                   (ulong)*(ushort *)
                                           (&_pcre2_ucd_stage2_16 +
                                           (long)(int)((uint)*(ushort *)
                                                              (&_pcre2_ucd_stage1_16 +
                                                              (long)((int)(uint)uVar27 >> 7) * 2) *
                                                       0x80 + (uVar27 & 0x7f)) * 2) * 0xc);
                }
                if (uVar19 != uVar29) goto code_r0x001005ba;
              }
            }
          }
          else {
            uVar19 = puVar17[1];
            uVar29 = (uint)uVar19;
            *puVar33 = (ulong)(puVar17 + 2);
            if ((uVar19 & 0xfc00) == 0xd800) {
              uVar27 = puVar17[2];
              *puVar33 = (ulong)(puVar17 + 3);
              uVar3 = *puVar15;
              uVar32 = (uint)uVar3;
              uVar29 = (uVar27 & 0x3ff | (uVar19 & 0x3ff) << 10) + 0x10000;
              puVar33[10] = (ulong)(puVar15 + 1);
              if ((uVar3 & 0xfc00) == 0xd800) goto code_r0x0010abf0;
              if (bVar18 != 0x20) goto code_r0x001005ba;
code_r0x0010ac5a:
              uVar29 = uVar29 + *(int *)(&DAT_0010f01c +
                                        (ulong)*(ushort *)
                                                (&_pcre2_ucd_stage2_16 +
                                                (long)(int)((uint)*(ushort *)
                                                                   (&_pcre2_ucd_stage1_16 +
                                                                   (long)((int)uVar29 >> 7) * 2) *
                                                            0x80 + (uVar29 & 0x7f)) * 2) * 0xc);
            }
            else {
              uVar19 = *puVar15;
              uVar32 = (uint)uVar19;
              puVar33[10] = (ulong)(puVar15 + 1);
              if ((uVar19 & 0xfc00) == 0xd800) {
code_r0x0010abf0:
                puVar33[10] = (ulong)(puVar15 + 2);
                uVar32 = ((uVar32 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
              }
              if (uVar32 == uVar29) break;
              if (bVar18 != 0x20) goto code_r0x001005ba;
              if (0x7f < uVar29) goto code_r0x0010ac5a;
              uVar29 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar29);
            }
            if (uVar29 != uVar32) goto code_r0x001005ba;
          }
        }
        else {
          sVar4 = *(short *)(param_6 + 0x60);
          if ((sVar4 != 0) &&
             ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x001099c4;
          }
        }
        break;
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
        *puVar33 = (ulong)(puVar17 + 1);
        uVar11 = (ulong)((uint)uVar19 - ((-(uint)(bVar18 < 0x2e) & 0xfffffff3) + 0x2e));
        local_c8 = *(uint *)(rep_typ + uVar11 * 4);
        puVar33[7] = CONCAT44(*(undefined4 *)(rep_max + uVar11 * 4),
                              *(undefined4 *)(rep_min + uVar11 * 4));
        goto code_r0x00102e47;
      case 0x27:
      case 0x34:
        uVar19 = puVar17[1];
        *(undefined4 *)(puVar33 + 7) = 0;
        *puVar33 = (ulong)(puVar17 + 2);
        *(uint *)((long)puVar33 + 0x3c) = (uint)uVar19;
        local_c8 = 1;
        goto code_r0x00102e47;
      case 0x28:
      case 0x35:
        uVar19 = puVar17[1];
        *(undefined4 *)(puVar33 + 7) = 0;
        *puVar33 = (ulong)(puVar17 + 2);
        *(uint *)((long)puVar33 + 0x3c) = (uint)uVar19;
        local_c8 = 0;
        goto code_r0x00102e47;
      case 0x29:
      case 0x36:
        uVar19 = puVar17[1];
        *puVar33 = (ulong)(puVar17 + 2);
        puVar33[7] = (ulong)CONCAT24(uVar19,(uint)uVar19);
        goto code_r0x00102e47;
      case 0x2a:
      case 0x37:
        puVar17 = puVar17 + 1;
        puVar33[7] = __LC2;
        goto code_r0x0010351c;
      case 0x2b:
      case 0x38:
        puVar17 = puVar17 + 1;
        puVar33[7] = __LC3;
        goto code_r0x0010351c;
      case 0x2c:
      case 0x39:
        puVar17 = puVar17 + 1;
        puVar33[7] = __LC4;
        goto code_r0x0010351c;
      case 0x2d:
      case 0x3a:
        uVar19 = puVar17[1];
        *(undefined4 *)(puVar33 + 7) = 0;
        puVar17 = puVar17 + 2;
        *(uint *)((long)puVar33 + 0x3c) = (uint)uVar19;
code_r0x0010351c:
        *puVar33 = (ulong)puVar17;
        local_c8 = 2;
code_r0x00102e47:
        if (uVar25 == 0) {
          puVar17 = (ushort *)*puVar33;
          *puVar33 = (ulong)(puVar17 + 1);
          uVar19 = *puVar17;
          *(uint *)(puVar33 + 8) = (uint)uVar19;
joined_r0x00102e87:
          if (bVar18 < 0x2e) {
            uVar29 = (uint)puVar33[7];
            if (uVar29 == 0) {
              uVar32 = *(uint *)((long)puVar33 + 0x3c);
              if (uVar32 == 0) goto code_r0x001005ba;
              if (local_c8 != 0) {
                puVar17 = (ushort *)puVar33[10];
                puVar15 = *(ushort **)(param_6 + 0x88);
                puVar33[1] = (ulong)puVar17;
                goto code_r0x001078f9;
              }
            }
            else {
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar10 = (ushort *)puVar33[10];
                if (puVar15 <= puVar10) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar10 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar17 = puVar10 + 1;
                uVar27 = *puVar10;
                puVar33[10] = (ulong)puVar17;
                if (uVar27 != uVar19) goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = *(uint *)((long)puVar33 + 0x3c);
              if (uVar32 == uVar29) goto code_r0x001005ba;
              if (local_c8 != 0) {
                puVar33[1] = (ulong)puVar17;
                if (uVar32 <= uVar29) goto code_r0x0010a44d;
code_r0x001078f9:
                do {
                  if (puVar15 <= puVar17) {
                    if ((*(short *)(param_6 + 0x60) != 0) &&
                       (((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))
                        && (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
                    goto code_r0x00102f0a;
                    break;
                  }
                  if (*puVar17 != uVar19) break;
                  puVar17 = puVar17 + 1;
                  uVar29 = uVar29 + 1;
                  puVar33[10] = (ulong)puVar17;
                } while (uVar29 < uVar32);
                if (local_c8 == 2) goto code_r0x00106c34;
code_r0x00100ae1:
                if (puVar33[1] < puVar33[10]) {
                  *(undefined1 *)(puVar33 + 9) = 0x1c;
                  param_2 = (ushort *)*puVar33;
                  uVar29 = 0;
                  puVar22 = puVar33;
                  goto code_r0x00101cc8;
                }
                goto code_r0x001005ba;
              }
            }
            local_c8 = 0;
code_r0x00102b08:
            *(undefined1 *)(puVar33 + 9) = 0x1b;
            param_2 = (ushort *)*puVar33;
            uVar29 = 0;
            puVar22 = puVar33;
            goto code_r0x00101cc8;
          }
          uVar29 = (uint)uVar19;
          if ((uVar26 & 0xa0000) == 0) {
            uVar32 = uVar29;
            if (uVar29 < 0x100) goto code_r0x00106ebf;
          }
          else if (uVar29 < 0x80) {
code_r0x00106ebf:
            uVar32 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar29);
          }
          else {
            uVar32 = *(int *)(&DAT_0010f01c +
                             (ulong)*(ushort *)
                                     (&_pcre2_ucd_stage2_16 +
                                     (long)(int)((uint)*(ushort *)
                                                        (&_pcre2_ucd_stage1_16 +
                                                        (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                                (uVar29 & 0x7f)) * 2) * 0xc) + uVar29;
          }
          uVar28 = (uint)puVar33[7];
          *(uint *)((long)puVar33 + 0x44) = uVar32;
          if (uVar28 == 0) {
            uVar6 = *(uint *)((long)puVar33 + 0x3c);
            if (uVar6 == 0) goto code_r0x001005ba;
            if (local_c8 == 0) {
code_r0x0010bb57:
              local_c8 = 0;
code_r0x00102a89:
              *(undefined1 *)(puVar33 + 9) = 0x19;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            }
            puVar15 = (ushort *)puVar33[10];
            puVar17 = *(ushort **)(param_6 + 0x88);
            puVar33[1] = (ulong)puVar15;
          }
          else {
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar6 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((*puVar15 != uVar29) && (*puVar15 != uVar32)) goto code_r0x00100620;
              puVar15 = puVar15 + 1;
              uVar6 = uVar6 + 1;
              puVar33[10] = (ulong)puVar15;
            } while (uVar6 <= uVar28);
            uVar6 = *(uint *)((long)puVar33 + 0x3c);
            if (uVar6 == uVar28) goto code_r0x001005ba;
            if (local_c8 == 0) goto code_r0x0010bb57;
            puVar33[1] = (ulong)puVar15;
            if (uVar6 <= uVar28) goto code_r0x0010a44d;
          }
          do {
            if (puVar17 <= puVar15) {
              if ((*(short *)(param_6 + 0x60) != 0) &&
                 (((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)) &&
                  (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
              goto code_r0x00102f0a;
              break;
            }
            if ((*puVar15 != uVar29) && (*puVar15 != uVar32)) break;
            puVar15 = puVar15 + 1;
            uVar28 = uVar28 + 1;
            puVar33[10] = (ulong)puVar15;
          } while (uVar28 < uVar6);
          if (local_c8 != 2) {
code_r0x00100b81:
            if (puVar33[10] != puVar33[1]) {
              *(undefined1 *)(puVar33 + 9) = 0x1a;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            }
            goto code_r0x001005ba;
          }
        }
        else {
          puVar17 = (ushort *)*puVar33;
          puVar33[3] = 1;
          uVar19 = *puVar17;
          puVar33[2] = (ulong)puVar17;
          if ((uVar19 & 0xfc00) != 0xd800) {
            *(uint *)(puVar33 + 8) = (uint)uVar19;
            *puVar33 = (ulong)(puVar17 + 1);
            goto joined_r0x00102e87;
          }
          uVar27 = puVar17[1];
          uVar11 = 0;
          puVar33[3] = 2;
          *puVar33 = (ulong)(puVar17 + 2);
          if (0x2d < bVar18) {
            uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
            if (uVar29 != *(int *)(&DAT_0010f01c +
                                  (ulong)*(ushort *)
                                          (&_pcre2_ucd_stage2_16 +
                                          (long)(int)((uint)*(ushort *)
                                                             (&_pcre2_ucd_stage1_16 +
                                                             (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                                     (uVar29 & 0x7f)) * 2) * 0xc) + uVar29) {
              uVar29 = func_0x0010f088(*(int *)(&DAT_0010f01c +
                                               (ulong)*(ushort *)
                                                       (&_pcre2_ucd_stage2_16 +
                                                       (long)(int)((uint)*(ushort *)
                                                                          (&_pcre2_ucd_stage1_16 +
                                                                          (long)((int)uVar29 >> 7) *
                                                                          2) * 0x80 +
                                                                  (uVar29 & 0x7f)) * 2) * 0xc) +
                                       uVar29,(long)puVar33 + 0x4a);
              uVar11 = (ulong)uVar29;
            }
          }
          uVar29 = (uint)puVar33[7];
          puVar33[5] = uVar11;
          if (uVar29 == 0) {
            uVar32 = *(uint *)((long)puVar33 + 0x3c);
            if (uVar32 == 0) goto code_r0x001005ba;
            if (local_c8 == 0) {
code_r0x0010bb7b:
              local_c8 = 0;
code_r0x00101a7b:
              *(undefined1 *)(puVar33 + 9) = 0xca;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            }
            pvVar20 = (void *)puVar33[10];
            pvVar13 = *(void **)(param_6 + 0x88);
            uVar31 = puVar33[3];
            puVar33[1] = (ulong)pvVar20;
code_r0x001098d1:
            do {
              if ((((void *)((long)pvVar13 + uVar31 * -2) < pvVar20) ||
                  (iVar5 = memcmp(pvVar20,(void *)puVar33[2],uVar31 * 2), sVar34 = uVar31 * 2,
                  iVar5 != 0)) &&
                 ((uVar11 == 0 ||
                  (((void *)((long)pvVar13 + uVar11 * -2) < pvVar20 ||
                   (iVar5 = memcmp(pvVar20,(void *)((long)puVar33 + 0x4a),uVar11 * 2),
                   sVar34 = uVar11 * 2, iVar5 != 0)))))) {
                if ((pvVar13 <= pvVar20) &&
                   ((*(short *)(param_6 + 0x60) != 0 &&
                    (((*(void **)(param_6 + 0xa0) < pvVar20 || (*(int *)(param_6 + 0x30) != 0)) &&
                     (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))))
                goto code_r0x00102f0a;
                break;
              }
              pvVar20 = (void *)((long)pvVar20 + sVar34);
              uVar29 = uVar29 + 1;
              puVar33[10] = (ulong)pvVar20;
            } while (uVar29 < uVar32);
            if (local_c8 != 2) {
code_r0x0010199e:
              if (puVar33[1] < puVar33[10]) {
                *(undefined1 *)(puVar33 + 9) = 0xcb;
                param_2 = (ushort *)*puVar33;
                uVar29 = 0;
                puVar22 = puVar33;
                goto code_r0x00101cc8;
              }
              goto code_r0x001005ba;
            }
          }
          else {
            pvVar13 = *(void **)(param_6 + 0x88);
            uVar31 = puVar33[3];
            uVar32 = 1;
            do {
              pvVar20 = (void *)puVar33[10];
              if ((((void *)((long)pvVar13 + uVar31 * -2) < pvVar20) ||
                  (iVar5 = memcmp(pvVar20,(void *)puVar33[2],uVar31 * 2), sVar34 = uVar31 * 2,
                  iVar5 != 0)) &&
                 ((uVar11 == 0 ||
                  (((void *)((long)pvVar13 + uVar11 * -2) < pvVar20 ||
                   (iVar5 = memcmp(pvVar20,(void *)((long)puVar33 + 0x4a),uVar11 * 2),
                   sVar34 = uVar11 * 2, iVar5 != 0)))))) {
                if ((pvVar20 < pvVar13) ||
                   ((sVar4 = *(short *)(param_6 + 0x60), sVar4 == 0 ||
                    ((pvVar20 <= *(void **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              pvVar20 = (void *)((long)pvVar20 + sVar34);
              uVar32 = uVar32 + 1;
              puVar33[10] = (ulong)pvVar20;
            } while (uVar32 <= uVar29);
            uVar32 = *(uint *)((long)puVar33 + 0x3c);
            if (uVar32 == uVar29) goto code_r0x001005ba;
            if (local_c8 == 0) goto code_r0x0010bb7b;
            puVar33[1] = (ulong)pvVar20;
            if (uVar29 < uVar32) goto code_r0x001098d1;
code_r0x0010a44d:
            if (local_c8 != 2) goto code_r0x001005ba;
          }
        }
        goto code_r0x00106c34;
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
        *puVar33 = (ulong)(puVar17 + 1);
        uVar11 = (ulong)((uint)uVar19 - ((-(uint)(bVar18 < 0x48) & 0xfffffff3) + 0x48));
        local_c8 = *(uint *)(rep_typ + uVar11 * 4);
        puVar33[7] = CONCAT44(*(undefined4 *)(rep_max + uVar11 * 4),
                              *(undefined4 *)(rep_min + uVar11 * 4));
        goto code_r0x00102d17;
      case 0x41:
      case 0x4e:
        uVar19 = puVar17[1];
        *(undefined4 *)(puVar33 + 7) = 0;
        *puVar33 = (ulong)(puVar17 + 2);
        *(uint *)((long)puVar33 + 0x3c) = (uint)uVar19;
        local_c8 = 1;
        goto code_r0x00102d17;
      case 0x42:
      case 0x4f:
        uVar19 = puVar17[1];
        *(undefined4 *)(puVar33 + 7) = 0;
        *puVar33 = (ulong)(puVar17 + 2);
        *(uint *)((long)puVar33 + 0x3c) = (uint)uVar19;
        local_c8 = 0;
        goto code_r0x00102d17;
      case 0x43:
      case 0x50:
        uVar19 = puVar17[1];
        *puVar33 = (ulong)(puVar17 + 2);
        puVar33[7] = (ulong)CONCAT24(uVar19,(uint)uVar19);
        goto code_r0x00102d17;
      case 0x44:
      case 0x51:
        puVar17 = puVar17 + 1;
        puVar33[7] = __LC2;
        goto code_r0x001032e2;
      case 0x45:
      case 0x52:
        puVar17 = puVar17 + 1;
        puVar33[7] = __LC3;
        goto code_r0x001032e2;
      case 0x46:
      case 0x53:
        puVar17 = puVar17 + 1;
        puVar33[7] = __LC4;
        goto code_r0x001032e2;
      case 0x47:
      case 0x54:
        uVar19 = puVar17[1];
        *(undefined4 *)(puVar33 + 7) = 0;
        puVar17 = puVar17 + 2;
        *(uint *)((long)puVar33 + 0x3c) = (uint)uVar19;
code_r0x001032e2:
        *puVar33 = (ulong)puVar17;
        local_c8 = 2;
code_r0x00102d17:
        puVar17 = (ushort *)*puVar33;
        *puVar33 = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        *(uint *)(puVar33 + 8) = (uint)uVar19;
        if (uVar25 == 0) {
          if (bVar18 < 0x48) {
            uVar29 = (uint)puVar33[7];
            if (uVar29 != 0) {
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                uVar27 = *puVar15;
                puVar33[10] = (ulong)(puVar15 + 1);
                if ((uint)uVar19 == (uint)uVar27) goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
            }
            goto code_r0x001070c1;
          }
code_r0x001053f0:
          if ((uVar26 & 0xa0000) == 0) {
            uVar29 = (uint)puVar33[8];
            if (uVar29 < 0x100) {
              uVar29 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar29);
            }
            *(uint *)((long)puVar33 + 0x44) = uVar29;
code_r0x00106e1c:
            uVar32 = (uint)puVar33[7];
            if (uVar32 != 0) {
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if (((uint)puVar33[8] == (uint)*puVar15) || (*puVar15 == uVar29))
                goto code_r0x00100620;
                uVar28 = uVar28 + 1;
                puVar33[10] = (ulong)(puVar15 + 1);
              } while (uVar28 <= uVar32);
            }
          }
          else {
            if (uVar19 < 0x80) {
              uVar29 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar19);
            }
            else {
code_r0x00107084:
              uVar29 = uVar29 + *(int *)(&DAT_0010f01c +
                                        (ulong)*(ushort *)
                                                (&_pcre2_ucd_stage2_16 +
                                                (long)(int)((uint)*(ushort *)
                                                                   (&_pcre2_ucd_stage1_16 +
                                                                   (long)((int)uVar29 >> 7) * 2) *
                                                            0x80 + (uVar29 & 0x7f)) * 2) * 0xc);
            }
code_r0x0010540f:
            *(uint *)((long)puVar33 + 0x44) = uVar29;
            if (uVar25 == 0) goto code_r0x00106e1c;
            uVar32 = (uint)puVar33[7];
            if (uVar32 != 0) {
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if (sVar4 == 0) goto code_r0x00100620;
                  if (puVar15 <= *(ushort **)(param_6 + 0xa0)) goto code_r0x00102ddd;
                  goto code_r0x00102dea;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                uVar6 = (uint)uVar19;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar6 = ((uVar19 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                if (((uint)puVar33[8] == uVar6) || (uVar6 == uVar29)) goto code_r0x00100620;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar32);
            }
          }
          uVar28 = *(uint *)((long)puVar33 + 0x3c);
          if (uVar32 != uVar28) {
            if (local_c8 == 0) {
              if (uVar25 == 0) {
code_r0x0010294b:
                *(undefined1 *)(puVar33 + 9) = 0x1d;
                param_2 = (ushort *)*puVar33;
                uVar29 = 0;
                puVar22 = puVar33;
              }
              else {
code_r0x00102ad4:
                *(undefined1 *)(puVar33 + 9) = 0xcc;
                param_2 = (ushort *)*puVar33;
                uVar29 = 0;
                puVar22 = puVar33;
              }
              goto code_r0x00101cc8;
            }
            puVar17 = (ushort *)puVar33[10];
            puVar33[1] = (ulong)puVar17;
            if (uVar25 == 0) {
              if (uVar28 <= uVar32) goto code_r0x0010a44d;
              puVar15 = *(ushort **)(param_6 + 0x88);
              while (puVar17 < puVar15) {
                if (((uint)puVar33[8] == (uint)*puVar17) || (*puVar17 == uVar29))
                goto code_r0x0010788f;
                puVar17 = puVar17 + 1;
                uVar32 = uVar32 + 1;
                puVar33[10] = (ulong)puVar17;
                if (uVar28 <= uVar32) goto code_r0x0010788f;
              }
              if (((*(short *)(param_6 + 0x60) != 0) &&
                  ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto code_r0x00102f0a;
code_r0x0010788f:
              if (local_c8 == 2) goto code_r0x00106c34;
code_r0x001008b1:
              if (puVar33[10] != puVar33[1]) {
                *(undefined1 *)(puVar33 + 9) = 0x1e;
                param_2 = (ushort *)*puVar33;
                uVar29 = 0;
                puVar22 = puVar33;
                goto code_r0x00101cc8;
              }
            }
            else {
              if (uVar28 <= uVar32) goto code_r0x0010a44d;
              puVar15 = *(ushort **)(param_6 + 0x88);
              while (puVar17 < puVar15) {
                uVar19 = *puVar17;
                uVar6 = (uint)uVar19;
                lVar24 = 1;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  lVar24 = 2;
                  uVar6 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                if (((uint)puVar33[8] == uVar6) || (uVar6 == uVar29)) goto code_r0x00109857;
                puVar17 = puVar17 + lVar24;
                uVar32 = uVar32 + 1;
                puVar33[10] = (ulong)puVar17;
                if (uVar28 <= uVar32) goto code_r0x00109857;
              }
              if ((*(short *)(param_6 + 0x60) != 0) &&
                 (((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)) &&
                  (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
              goto code_r0x00102f0a;
code_r0x00109857:
              if (local_c8 == 2) goto code_r0x00106c34;
code_r0x001018de:
              if (puVar33[1] < puVar33[10]) {
                *(undefined1 *)(puVar33 + 9) = 0xcd;
                param_2 = (ushort *)*puVar33;
                uVar29 = 0;
                puVar22 = puVar33;
                goto code_r0x00101cc8;
              }
            }
          }
        }
        else {
          if ((uVar19 & 0xfc00) == 0xd800) {
            uVar27 = puVar17[1];
            *puVar33 = (ulong)(puVar17 + 2);
            uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
            *(uint *)(puVar33 + 8) = uVar29;
            if (0x47 < bVar18) {
              if ((uVar26 & 0xa0000) != 0) goto code_r0x00107084;
              goto code_r0x0010540f;
            }
          }
          else if (0x47 < bVar18) goto code_r0x001053f0;
          uVar29 = (uint)puVar33[7];
          if (uVar29 != 0) {
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if (sVar4 == 0) goto code_r0x00100620;
                if (puVar15 <= *(ushort **)(param_6 + 0xa0)) goto code_r0x00102ddd;
                goto code_r0x00102dea;
              }
              uVar19 = *puVar15;
              uVar28 = (uint)uVar19;
              puVar33[10] = (ulong)(puVar15 + 1);
              if ((uVar19 & 0xfc00) == 0xd800) {
                puVar33[10] = (ulong)(puVar15 + 2);
                uVar28 = ((uVar19 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
              }
              if ((uint)puVar33[8] == uVar28) goto code_r0x00100620;
              uVar32 = uVar32 + 1;
            } while (uVar32 <= uVar29);
          }
code_r0x001070c1:
          uVar32 = *(uint *)((long)puVar33 + 0x3c);
          if (uVar29 != uVar32) {
            if (local_c8 == 0) {
              if (uVar25 == 0) {
code_r0x001027a8:
                *(undefined1 *)(puVar33 + 9) = 0x1f;
                param_2 = (ushort *)*puVar33;
                uVar29 = 0;
                puVar22 = puVar33;
              }
              else {
code_r0x0010229a:
                *(undefined1 *)(puVar33 + 9) = 0xce;
                param_2 = (ushort *)*puVar33;
                uVar29 = 0;
                puVar22 = puVar33;
              }
              goto code_r0x00101cc8;
            }
            puVar17 = (ushort *)puVar33[10];
            puVar33[1] = (ulong)puVar17;
            if (uVar25 == 0) {
              if (uVar32 <= uVar29) goto code_r0x0010a44d;
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  if (((*(short *)(param_6 + 0x60) != 0) &&
                      ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                     && (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto code_r0x00102f0a;
                  break;
                }
                if ((uint)puVar33[8] == (uint)*puVar17) break;
                puVar17 = puVar17 + 1;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar32);
              if (local_c8 == 2) goto code_r0x00106c34;
code_r0x00100809:
              if (puVar33[10] != puVar33[1]) {
                *(undefined1 *)(puVar33 + 9) = 0x20;
                param_2 = (ushort *)*puVar33;
                uVar29 = 0;
                puVar22 = puVar33;
                goto code_r0x00101cc8;
              }
            }
            else {
              if (uVar32 <= uVar29) goto code_r0x0010a44d;
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  if ((*(short *)(param_6 + 0x60) != 0) &&
                     (((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))
                      && (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
                  goto code_r0x00102f0a;
                  break;
                }
                uVar19 = *puVar17;
                uVar28 = (uint)uVar19;
                lVar24 = 1;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  lVar24 = 2;
                  uVar28 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                if ((uint)puVar33[8] == uVar28) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar32);
              if (local_c8 == 2) goto code_r0x00106c34;
code_r0x0010181e:
              if (puVar33[1] < puVar33[10]) {
                *(undefined1 *)(puVar33 + 9) = 0xcf;
                param_2 = (ushort *)*puVar33;
                uVar29 = 0;
                puVar22 = puVar33;
                goto code_r0x00101cc8;
              }
            }
          }
        }
        goto code_r0x001005ba;
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
        *puVar33 = (ulong)(puVar17 + 1);
        uVar11 = (ulong)(uVar19 - 0x55);
        local_c8 = *(uint *)(rep_typ + uVar11 * 4);
        puVar33[7] = CONCAT44(*(undefined4 *)(rep_max + uVar11 * 4),
                              *(undefined4 *)(rep_min + uVar11 * 4));
        goto code_r0x00102f52;
      case 0x5b:
      case 0x5c:
        uVar27 = puVar17[1];
        *(undefined4 *)(puVar33 + 7) = 0;
        *(uint *)((long)puVar33 + 0x3c) = (uint)uVar27;
        local_c8 = (uint)(uVar19 != 0x5c);
        *puVar33 = (ulong)(puVar17 + 2);
        goto code_r0x00102f52;
      case 0x5d:
        uVar19 = puVar17[1];
        *puVar33 = (ulong)(puVar17 + 2);
        puVar33[7] = (ulong)CONCAT24(uVar19,(uint)uVar19);
        goto code_r0x00102f52;
      case 0x5e:
        puVar17 = puVar17 + 1;
        puVar33[7] = __LC2;
        goto code_r0x001041af;
      case 0x5f:
        puVar17 = puVar17 + 1;
        puVar33[7] = __LC3;
        goto code_r0x001041af;
      case 0x60:
        puVar17 = puVar17 + 1;
        puVar33[7] = __LC4;
        goto code_r0x001041af;
      case 0x61:
        uVar19 = puVar17[1];
        *(undefined4 *)(puVar33 + 7) = 0;
        puVar17 = puVar17 + 2;
        *(uint *)((long)puVar33 + 0x3c) = (uint)uVar19;
code_r0x001041af:
        *puVar33 = (ulong)puVar17;
        local_c8 = 2;
code_r0x00102f52:
        puVar17 = (ushort *)*puVar33;
        uVar19 = *puVar17;
        *puVar33 = (ulong)(puVar17 + 1);
        *(uint *)(puVar33 + 8) = (uint)uVar19;
        if (uVar19 - 0xf < 2) {
          uVar27 = puVar17[1];
          uVar32 = (uint)uVar27;
          uVar3 = puVar17[2];
          *puVar33 = (ulong)(puVar17 + 3);
          uVar29 = (uint)puVar33[7];
          *(uint *)((long)puVar33 + 0x44) = (uint)uVar3;
          if (uVar29 != 0) {
            bVar37 = uVar19 == 0xf;
            if (0xd < uVar27) goto LAB_00102cc0;
            switch(uVar32) {
            case 0:
              if (uVar19 == 0xf) goto code_r0x00100620;
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                if ((uVar25 != 0) && ((*puVar15 & 0xfc00) == 0xd800)) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 0;
              break;
            case 1:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                uVar28 = (uint)uVar19;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  uVar27 = puVar15[1];
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar28 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
                }
                cVar1 = *(char *)((ulong)*(ushort *)
                                          (&_pcre2_ucd_stage2_16 +
                                          (long)(int)((uint)*(ushort *)
                                                             (&_pcre2_ucd_stage1_16 +
                                                             (long)((int)uVar28 >> 7) * 2) * 0x80 +
                                                     (uVar28 & 0x7f)) * 2) * 0xc + 0x10f019);
                if (bVar37 == ((byte)(cVar1 - 8U) < 2 || cVar1 == '\x05')) goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 1;
              break;
            case 2:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                uVar28 = (uint)uVar19;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  uVar27 = puVar15[1];
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar28 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
                }
                if (bVar37 == (*(uint *)(&_pcre2_ucp_gentype_16 +
                                        (ulong)*(byte *)((ulong)*(ushort *)
                                                                 (&_pcre2_ucd_stage2_16 +
                                                                 (long)(int)((uVar28 & 0x7f) +
                                                                            (uint)*(ushort *)
                                                                                   (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar28 >> 7) * 2) * 0x80) * 2) * 0xc +
                                                  0x10f019) * 4) == (uint)uVar3))
                goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 2;
              break;
            case 3:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                uVar28 = (uint)uVar19;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  uVar27 = puVar15[1];
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar28 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
                }
                if (bVar37 == (*(byte *)((ulong)*(ushort *)
                                                 (&_pcre2_ucd_stage2_16 +
                                                 (long)(int)((uVar28 & 0x7f) +
                                                            (uint)*(ushort *)
                                                                   (&_pcre2_ucd_stage1_16 +
                                                                   (long)((int)uVar28 >> 7) * 2) *
                                                            0x80) * 2) * 0xc + 0x10f019) == uVar3))
                goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 3;
              break;
            case 4:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                uVar28 = (uint)uVar19;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  uVar27 = puVar15[1];
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar28 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
                }
                if (bVar37 == ((byte)(&_pcre2_ucd_records_16)
                                     [(ulong)*(ushort *)
                                              (&_pcre2_ucd_stage2_16 +
                                              (long)(int)((uVar28 & 0x7f) +
                                                         (uint)*(ushort *)
                                                                (&_pcre2_ucd_stage1_16 +
                                                                (long)((int)uVar28 >> 7) * 2) * 0x80
                                                         ) * 2) * 0xc] == uVar3))
                goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 4;
              break;
            case 5:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                uVar28 = (uint)uVar19;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  uVar27 = puVar15[1];
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar28 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
                }
                bVar35 = true;
                if ((uint)uVar3 !=
                    (uint)(byte)(&_pcre2_ucd_records_16)
                                [(ulong)*(ushort *)
                                         (&_pcre2_ucd_stage2_16 +
                                         (long)(int)((uVar28 & 0x7f) +
                                                    (uint)*(ushort *)
                                                           (&_pcre2_ucd_stage1_16 +
                                                           (long)((int)uVar28 >> 7) * 2) * 0x80) * 2
                                         ) * 0xc]) {
                  bVar35 = (1 << ((byte)uVar3 & 0x1f) &
                           *(uint *)(&_pcre2_ucd_script_sets_16 +
                                    ((ulong)(*(ushort *)
                                              (&_pcre2_ucd_caseless_sets_16 +
                                              (ulong)*(ushort *)
                                                      (&_pcre2_ucd_stage2_16 +
                                                      (long)(int)((uVar28 & 0x7f) +
                                                                 (uint)*(ushort *)
                                                                        (&_pcre2_ucd_stage1_16 +
                                                                        (long)((int)uVar28 >> 7) * 2
                                                                        ) * 0x80) * 2) * 0xc) &
                                            0x3ff) + (ulong)(uVar3 >> 5)) * 4)) != 0;
                }
                if (bVar37 == bVar35) goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 5;
              break;
            case 6:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                uVar28 = (uint)uVar19;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  uVar27 = puVar15[1];
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar28 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
                }
                if (bVar37 == ((*(uint *)(&_pcre2_ucp_gentype_16 +
                                         (ulong)*(byte *)((ulong)*(ushort *)
                                                                  (&_pcre2_ucd_stage2_16 +
                                                                  (long)(int)((uVar28 & 0x7f) +
                                                                             (uint)*(ushort *)
                                                                                    (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar28 >> 7) * 2) * 0x80) * 2) * 0xc +
                                                  0x10f019) * 4) & 0xfffffffd) == 1))
                goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 6;
              break;
            default:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                uVar27 = *puVar15;
                uVar6 = (uint)uVar27;
                puVar33[10] = (ulong)(puVar15 + 1);
                if ((uVar25 != 0) && ((uVar27 & 0xfc00) == 0xd800)) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar6 = ((uVar6 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                  goto code_r0x0010555b;
                }
                if (uVar27 == 0x180e) {
code_r0x0010560e:
                  if (uVar19 == 0xf) goto code_r0x00100620;
                }
                else {
                  if (uVar27 < 0x180f) {
                    if (uVar27 != 0x85) {
                      if (uVar27 < 0x86) {
                        if (uVar27 < 0xe) {
                          if (8 < uVar27) goto code_r0x0010560e;
                        }
                        else if (uVar27 == 0x20) goto code_r0x0010560e;
                        goto code_r0x0010555b;
                      }
                      if ((uVar27 != 0xa0) && (uVar27 != 0x1680)) goto code_r0x0010555b;
                    }
                    goto code_r0x0010560e;
                  }
                  if (uVar27 < 0x2060) {
                    if (uVar27 < 0x2028) {
                      if ((ushort)(uVar27 + 0xe000) < 0xb) goto code_r0x0010560e;
                    }
                    else if ((0x80000000000083U >> ((ulong)(ushort)(uVar27 + 0xdfd8) & 0x3f) & 1) !=
                             0) goto code_r0x0010560e;
                  }
                  else if (uVar27 == 0x3000) goto code_r0x0010560e;
code_r0x0010555b:
                  if (bVar37 == (*(int *)(&_pcre2_ucp_gentype_16 +
                                         (ulong)*(byte *)((ulong)*(ushort *)
                                                                  (&_pcre2_ucd_stage2_16 +
                                                                  (long)(int)((uint)*(ushort *)
                                                                                     (&
                                                  _pcre2_ucd_stage1_16 + (long)((int)uVar6 >> 7) * 2
                                                  ) * 0x80 + (uVar6 & 0x7f)) * 2) * 0xc + 0x10f019)
                                         * 4) == 6)) goto code_r0x00100620;
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar29);
              break;
            case 9:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                uVar28 = (uint)uVar19;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  uVar27 = puVar15[1];
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar28 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
                }
                bVar18 = *(byte *)((ulong)*(ushort *)
                                           (&_pcre2_ucd_stage2_16 +
                                           (long)(int)((uVar28 & 0x7f) +
                                                      (uint)*(ushort *)
                                                             (&_pcre2_ucd_stage1_16 +
                                                             (long)((int)uVar28 >> 7) * 2) * 0x80) *
                                           2) * 0xc + 0x10f019);
                if (bVar37 == ((*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)bVar18 * 4) & 0xfffffffd)
                               == 1 || (bVar18 - 0xc & 0xfb) == 0)) goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 9;
              break;
            case 10:
              puVar17 = *(ushort **)(param_6 + 0x88);
              puVar16 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)uVar3 * 4);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                uVar27 = *puVar15;
                uVar28 = (uint)uVar27;
                puVar33[10] = (ulong)(puVar15 + 1);
                puVar14 = puVar16;
                if ((uVar25 != 0) && ((uVar27 & 0xfc00) == 0xd800)) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar28 = ((uVar27 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                do {
                  uVar6 = *puVar14;
                  if (uVar28 < uVar6) break;
                  puVar14 = puVar14 + 1;
                } while (uVar6 != uVar28);
                if (uVar19 != 0xf) goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 10;
              break;
            case 0xb:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                uVar28 = (uint)uVar19;
                if ((uVar25 == 0) || ((uVar19 & 0xfc00) != 0xd800)) {
                  if (((uVar19 & 0xffdf) != 0x40) && (uVar19 != 0x24)) goto code_r0x00105ac9;
                  bVar35 = true;
                }
                else {
                  uVar27 = puVar15[1];
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar28 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
code_r0x00105ac9:
                  bVar35 = 0xdfff < uVar28 || uVar28 - 0xa0 < 0xd760;
                }
                if (bVar37 == bVar35) goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 0xb;
              break;
            case 0xc:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                uVar28 = (uint)uVar19;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  uVar27 = puVar15[1];
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar28 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
                }
                if (bVar37 == (*(ushort *)
                                (&_pcre2_ucd_caseless_sets_16 +
                                (ulong)*(ushort *)
                                        (&_pcre2_ucd_stage2_16 +
                                        (long)(int)((uVar28 & 0x7f) +
                                                   (uint)*(ushort *)
                                                          (&_pcre2_ucd_stage1_16 +
                                                          (long)((int)uVar28 >> 7) * 2) * 0x80) * 2)
                                * 0xc) >> 0xb == uVar3)) goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 0xc;
              break;
            case 0xd:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                uVar28 = (uint)uVar19;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  uVar27 = puVar15[1];
                  puVar33[10] = (ulong)(puVar15 + 2);
                  uVar28 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
                }
                if (bVar37 == ((1 << ((byte)uVar3 & 0x1f) &
                               *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                                        ((ulong)(*(ushort *)
                                                  ((ulong)*(ushort *)
                                                           (&_pcre2_ucd_stage2_16 +
                                                           (long)(int)((uVar28 & 0x7f) +
                                                                      (uint)*(ushort *)
                                                                             (&_pcre2_ucd_stage1_16
                                                                             + (long)((int)uVar28 >>
                                                                                     7) * 2) * 0x80)
                                                           * 2) * 0xc + 0x10f022) & 0xfff) +
                                        (ulong)(uVar3 >> 5)) * 4)) != 0)) goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              uVar32 = 0xd;
            }
          }
        }
        else {
          uVar29 = (uint)puVar33[7];
          if (uVar29 == 0) goto code_r0x00106dfd;
          if (uVar19 == 0x16) {
            uVar29 = 1;
            do {
              puVar17 = (ushort *)puVar33[10];
              if (*(ushort **)(param_6 + 0x88) <= puVar17) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar17 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar19 = *puVar17;
              uVar32 = (uint)uVar19;
              puVar33[10] = (ulong)(puVar17 + 1);
              if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                puVar33[10] = (ulong)(puVar17 + 2);
                uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
              }
              uVar11 = func_0x0010f068(uVar32,puVar33[10],*(undefined8 *)(param_6 + 0x78));
              puVar33[10] = uVar11;
              if ((((*(ulong *)(param_6 + 0x88) <= uVar11) && (*(short *)(param_6 + 0x60) != 0)) &&
                  ((*(ulong *)(param_6 + 0xa0) < uVar11 || (*(int *)(param_6 + 0x30) != 0)))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto code_r0x00102f0a;
              uVar29 = uVar29 + 1;
            } while (uVar29 <= (uint)puVar33[7]);
            uVar29 = (uint)puVar33[7];
            goto code_r0x00106dfd;
          }
          uVar32 = uVar19 - 6;
          if (uVar25 != 0) {
            switch(uVar32 & 0xffff) {
            case 0:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                }
                else if ((uVar19 < 0x80) &&
                        ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 8) != 0))
                goto code_r0x00100620;
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              break;
            case 1:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if ((0x7f < *puVar15) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 8) == 0))
                goto code_r0x00100620;
                uVar32 = uVar32 + 1;
                puVar33[10] = (ulong)(puVar15 + 1);
              } while (uVar32 <= uVar29);
              break;
            case 2:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if ((*puVar15 < 0x80) &&
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 1) != 0))
                goto code_r0x00100620;
                puVar33[10] = (ulong)(puVar15 + 1);
                if ((puVar15 + 1 < puVar17) && ((puVar15[1] & 0xfc00) == 0xdc00)) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              break;
            case 3:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if ((0x7f < *puVar15) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 1) == 0))
                goto code_r0x00100620;
                uVar32 = uVar32 + 1;
                puVar33[10] = (ulong)(puVar15 + 1);
              } while (uVar32 <= uVar29);
              break;
            case 4:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if ((*puVar15 < 0x80) &&
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 0x10) != 0))
                goto code_r0x00100620;
                puVar33[10] = (ulong)(puVar15 + 1);
                if ((puVar15 + 1 < puVar17) && ((puVar15[1] & 0xfc00) == 0xdc00)) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              break;
            case 5:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if ((0x7f < *puVar15) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 0x10) == 0))
                goto code_r0x00100620;
                uVar32 = uVar32 + 1;
                puVar33[10] = (ulong)(puVar15 + 1);
              } while (uVar32 <= uVar29);
              break;
            case 6:
              uVar29 = 1;
              do {
                psVar8 = (short *)puVar33[10];
                if (*(short **)(param_6 + 0x88) <= psVar8) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((psVar8 <= *(short **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  if (((psVar8 <= *(short **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8))
                      && (*psVar8 == *(short *)(param_6 + 0xec))) &&
                     ((*(uint *)(param_6 + 0xe8) == 1 || (psVar8[1] == *(short *)(param_6 + 0xee))))
                     ) goto code_r0x00100620;
                }
                else {
                  iVar5 = _pcre2_is_newline_16();
                  if (iVar5 != 0) goto code_r0x00100620;
                  psVar8 = (short *)puVar33[10];
                }
                if (*(short *)(param_6 + 0x60) == 0) {
                  puVar33[10] = (ulong)(psVar8 + 1);
                  if (psVar8 + 1 < *(short **)(param_6 + 0x88)) {
code_r0x00107cad:
                    if ((psVar8[1] & 0xfc00U) == 0xdc00) {
                      puVar33[10] = (ulong)(psVar8 + 2);
                    }
                  }
                }
                else {
                  psVar9 = psVar8 + 1;
                  if (psVar9 < *(short **)(param_6 + 0x88)) {
                    puVar33[10] = (ulong)psVar9;
                    goto code_r0x00107cad;
                  }
                  if ((((*(int *)(param_6 + 0xe4) == 0) && (*(int *)(param_6 + 0xe8) == 2)) &&
                      (*psVar8 == *(short *)(param_6 + 0xec))) &&
                     (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto code_r0x00102f0a;
                  puVar33[10] = (ulong)psVar9;
                }
                uVar29 = uVar29 + 1;
              } while (uVar29 <= (uint)puVar33[7]);
              uVar29 = (uint)puVar33[7];
              break;
            case 7:
              uVar11 = *(ulong *)(param_6 + 0x88);
              uVar32 = 1;
              do {
                uVar31 = puVar33[10];
                if (uVar11 <= uVar31) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((uVar31 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = uVar31 + 2;
                if ((uVar31 + 2 < uVar11) && ((*(ushort *)(uVar31 + 2) & 0xfc00) == 0xdc00)) {
                  puVar33[10] = uVar31 + 4;
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              break;
            case 8:
              uVar11 = puVar33[10];
              if (uVar11 <= *(long *)(param_6 + 0x88) + (ulong)uVar29 * -2) goto code_r0x00107b6c;
              goto code_r0x00100620;
            default:
              goto LAB_00102cc0;
            case 0xb:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                uVar19 = *puVar15;
                puVar33[10] = (ulong)(puVar15 + 1);
                if ((uVar19 & 0xfc00) == 0xd800) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                  goto code_r0x00100620;
                }
                if (uVar19 == 0xd) {
                  if ((puVar15 + 1 < puVar17) && (puVar15[1] == 10)) {
                    puVar33[10] = (ulong)(puVar15 + 2);
                  }
                }
                else {
                  if (uVar19 < 0xe) {
                    if (uVar19 == 10) goto code_r0x00107d1b;
                    uVar19 = uVar19 - 0xb;
joined_r0x0010b1c8:
                    if (1 < uVar19) goto code_r0x00100620;
                  }
                  else if (uVar19 != 0x85) {
                    uVar19 = uVar19 + 0xdfd8;
                    goto joined_r0x0010b1c8;
                  }
                  if (*(short *)(param_6 + 0x62) == 2) goto code_r0x00100620;
                }
code_r0x00107d1b:
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              break;
            case 0xc:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                }
                else {
                  if (uVar19 == 0x180e) goto code_r0x00100620;
                  if (uVar19 < 0x180f) {
                    if (uVar19 == 0xa0) goto code_r0x00100620;
                    if (uVar19 < 0xa1) {
                      if ((uVar19 == 9) || (uVar19 == 0x20)) goto code_r0x00100620;
                    }
                    else if (uVar19 == 0x1680) goto code_r0x00100620;
                  }
                  else {
                    if (uVar19 == 0x205f) goto code_r0x00100620;
                    if (uVar19 < 0x2060) {
                      if (uVar19 < 0x200b) {
                        if (0x1fff < uVar19) goto code_r0x00100620;
                      }
                      else if (uVar19 == 0x202f) goto code_r0x00100620;
                    }
                    else if (uVar19 == 0x3000) goto code_r0x00100620;
                  }
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              break;
            case 0xd:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                  goto code_r0x00100620;
                }
                if (uVar19 != 0x180e) {
                  if (uVar19 < 0x180f) {
                    if (uVar19 != 0xa0) {
                      if (uVar19 < 0xa1) {
                        if ((uVar19 != 9) && (uVar19 != 0x20)) goto code_r0x00100620;
                      }
                      else if (uVar19 != 0x1680) goto code_r0x00100620;
                    }
                  }
                  else if (uVar19 != 0x205f) {
                    if (uVar19 < 0x2060) {
                      if (uVar19 < 0x200b) {
                        if (uVar19 < 0x2000) goto code_r0x00100620;
                      }
                      else if (uVar19 != 0x202f) goto code_r0x00100620;
                    }
                    else if (uVar19 != 0x3000) goto code_r0x00100620;
                  }
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              break;
            case 0xe:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                }
                else {
                  if (uVar19 == 0x85) goto code_r0x00100620;
                  if (uVar19 < 0x86) {
                    if ((ushort)(uVar19 - 10) < 4) goto code_r0x00100620;
                  }
                  else if ((ushort)(uVar19 + 0xdfd8) < 2) goto code_r0x00100620;
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
              break;
            case 0xf:
              puVar17 = *(ushort **)(param_6 + 0x88);
              uVar32 = 1;
              do {
                puVar15 = (ushort *)puVar33[10];
                if (puVar17 <= puVar15) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 == 0) ||
                     ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto code_r0x00100620;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar33[10] = (ulong)(puVar15 + 1);
                uVar19 = *puVar15;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                  goto code_r0x00100620;
                }
                if (uVar19 != 0x85) {
                  if (uVar19 < 0x86) {
                    if (3 < (ushort)(uVar19 - 10)) goto code_r0x00100620;
                  }
                  else if (1 < (ushort)(uVar19 + 0xdfd8)) goto code_r0x00100620;
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 <= uVar29);
            }
            goto code_r0x00106dfd;
          }
          switch(uVar32 & 0xffff) {
          case 0:
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((*puVar15 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 8) != 0))
              goto code_r0x00100620;
              uVar32 = uVar32 + 1;
              puVar33[10] = (ulong)(puVar15 + 1);
            } while (uVar32 <= uVar29);
            break;
          case 1:
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((0xff < *puVar15) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 8) == 0))
              goto code_r0x00100620;
              uVar32 = uVar32 + 1;
              puVar33[10] = (ulong)(puVar15 + 1);
            } while (uVar32 <= uVar29);
            break;
          case 2:
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((*puVar15 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 1) != 0))
              goto code_r0x00100620;
              uVar32 = uVar32 + 1;
              puVar33[10] = (ulong)(puVar15 + 1);
            } while (uVar32 <= uVar29);
            break;
          case 3:
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((0xff < *puVar15) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 1) == 0))
              goto code_r0x00100620;
              uVar32 = uVar32 + 1;
              puVar33[10] = (ulong)(puVar15 + 1);
            } while (uVar32 <= uVar29);
            break;
          case 4:
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((*puVar15 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 0x10) != 0))
              goto code_r0x00100620;
              uVar32 = uVar32 + 1;
              puVar33[10] = (ulong)(puVar15 + 1);
            } while (uVar32 <= uVar29);
            break;
          case 5:
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((0xff < *puVar15) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 0x10) == 0))
              goto code_r0x00100620;
              uVar32 = uVar32 + 1;
              puVar33[10] = (ulong)(puVar15 + 1);
            } while (uVar32 <= uVar29);
            break;
          case 6:
            uVar29 = 1;
            do {
              psVar8 = (short *)puVar33[10];
              if (*(short **)(param_6 + 0x88) <= psVar8) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((psVar8 <= *(short **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                if (((psVar8 <= *(short **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8)) &&
                    (*psVar8 == *(short *)(param_6 + 0xec))) &&
                   ((*(uint *)(param_6 + 0xe8) == 1 || (psVar8[1] == *(short *)(param_6 + 0xee)))))
                goto code_r0x00100620;
              }
              else {
                iVar5 = _pcre2_is_newline_16();
                if (iVar5 != 0) {
                  uVar29 = 0;
                  goto code_r0x00100630;
                }
              }
              if (((((*(short *)(param_6 + 0x60) != 0) &&
                    (*(short **)(param_6 + 0x88) <= (short *)puVar33[10] + 1)) &&
                   (*(int *)(param_6 + 0xe4) == 0)) &&
                  ((*(int *)(param_6 + 0xe8) == 2 &&
                   (*(short *)puVar33[10] == *(short *)(param_6 + 0xec))))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto code_r0x00102f0a;
              puVar33[10] = puVar33[10] + 2;
              uVar29 = uVar29 + 1;
            } while (uVar29 <= (uint)puVar33[7]);
            uVar29 = (uint)puVar33[7];
            break;
          case 7:
            uVar11 = puVar33[10];
            if (*(long *)(param_6 + 0x88) + (ulong)uVar29 * -2 < uVar11) {
              sVar4 = *(short *)(param_6 + 0x60);
              if ((sVar4 != 0) &&
                 ((*(ulong *)(param_6 + 0xa0) < uVar11 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x00107f3c:
                if (sVar4 == 1) goto code_r0x00100620;
                goto code_r0x00102f0a;
              }
              goto code_r0x00100620;
            }
code_r0x00107b6c:
            puVar33[10] = uVar11 + (ulong)uVar29 * 2;
            break;
          default:
            goto LAB_00102cc0;
          case 0xb:
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar19 = *puVar15;
              puVar33[10] = (ulong)(puVar15 + 1);
              if (uVar19 == 0xd) {
                if ((puVar15 + 1 < puVar17) && (puVar15[1] == 10)) {
                  puVar33[10] = (ulong)(puVar15 + 2);
                }
              }
              else {
                if (uVar19 < 0xe) {
                  if (uVar19 == 10) goto code_r0x00108cde;
                  uVar19 = uVar19 - 0xb;
joined_r0x0010afae:
                  if (1 < uVar19) goto code_r0x00100620;
                }
                else if (uVar19 != 0x85) {
                  uVar19 = uVar19 + 0xdfd8;
                  goto joined_r0x0010afae;
                }
                if (*(short *)(param_6 + 0x62) == 2) goto code_r0x00100620;
              }
code_r0x00108cde:
              uVar32 = uVar32 + 1;
            } while (uVar32 <= uVar29);
            break;
          case 0xc:
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar19 = *puVar15;
              puVar33[10] = (ulong)(puVar15 + 1);
              if (uVar19 == 0x180e) goto code_r0x00100620;
              if (uVar19 < 0x180f) {
                if (uVar19 == 0xa0) goto code_r0x00100620;
                if (uVar19 < 0xa1) {
                  if ((uVar19 == 9) || (uVar19 == 0x20)) goto code_r0x00100620;
                }
                else if (uVar19 == 0x1680) goto code_r0x00100620;
              }
              else {
                if (uVar19 == 0x205f) goto code_r0x00100620;
                if (uVar19 < 0x2060) {
                  if (uVar19 < 0x200b) {
                    if (0x1fff < uVar19) goto code_r0x00100620;
                  }
                  else if (uVar19 == 0x202f) goto code_r0x00100620;
                }
                else if (uVar19 == 0x3000) goto code_r0x00100620;
              }
              uVar32 = uVar32 + 1;
            } while (uVar32 <= uVar29);
            break;
          case 0xd:
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar19 = *puVar15;
              puVar33[10] = (ulong)(puVar15 + 1);
              if (uVar19 != 0x180e) {
                if (uVar19 < 0x180f) {
                  if (uVar19 != 0xa0) {
                    if (uVar19 < 0xa1) {
                      if ((uVar19 != 9) && (uVar19 != 0x20)) goto code_r0x00100620;
                    }
                    else if (uVar19 != 0x1680) goto code_r0x00100620;
                  }
                }
                else if (uVar19 != 0x205f) {
                  if (uVar19 < 0x2060) {
                    if (uVar19 < 0x200b) {
                      if (uVar19 < 0x2000) goto code_r0x00100620;
                    }
                    else if (uVar19 != 0x202f) goto code_r0x00100620;
                  }
                  else if (uVar19 != 0x3000) goto code_r0x00100620;
                }
              }
              uVar32 = uVar32 + 1;
            } while (uVar32 <= uVar29);
            break;
          case 0xe:
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar19 = *puVar15;
              puVar33[10] = (ulong)(puVar15 + 1);
              if (uVar19 == 0x85) goto code_r0x00100620;
              if (uVar19 < 0x86) {
                if ((ushort)(uVar19 - 10) < 4) goto code_r0x00100620;
              }
              else if ((ushort)(uVar19 + 0xdfd8) < 2) goto code_r0x00100620;
              uVar32 = uVar32 + 1;
            } while (uVar32 <= uVar29);
            break;
          case 0xf:
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar15 = (ushort *)puVar33[10];
              if (puVar17 <= puVar15) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar19 = *puVar15;
              puVar33[10] = (ulong)(puVar15 + 1);
              if (uVar19 != 0x85) {
                if (uVar19 < 0x86) {
                  if (3 < (ushort)(uVar19 - 10)) goto code_r0x00100620;
                }
                else if (1 < (ushort)(uVar19 + 0xdfd8)) goto code_r0x00100620;
              }
              uVar32 = uVar32 + 1;
            } while (uVar32 <= uVar29);
          }
code_r0x00106dfd:
          uVar32 = 0xffffffff;
        }
        uVar28 = *(uint *)((long)puVar33 + 0x3c);
        if (uVar29 == uVar28) goto code_r0x001005ba;
        if (local_c8 == 0) {
          if (uVar32 != 0xffffffff) {
            switch(uVar32) {
            case 0:
code_r0x001027f7:
              *(undefined1 *)(puVar33 + 9) = 0xd0;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 1:
code_r0x001023ff:
              *(undefined1 *)(puVar33 + 9) = 0xd1;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 2:
code_r0x00102258:
              *(undefined1 *)(puVar33 + 9) = 0xd2;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 3:
code_r0x00102bb4:
              *(undefined1 *)(puVar33 + 9) = 0xd3;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 4:
code_r0x00102345:
              *(undefined1 *)(puVar33 + 9) = 0xd4;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 5:
code_r0x001025c3:
              *(undefined1 *)(puVar33 + 9) = 0xe1;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 6:
code_r0x001021a2:
              *(undefined1 *)(puVar33 + 9) = 0xd5;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 7:
            case 8:
code_r0x00102739:
              *(undefined1 *)(puVar33 + 9) = 0xd6;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 9:
code_r0x001020ed:
              *(undefined1 *)(puVar33 + 9) = 0xd7;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 10:
code_r0x00108278:
              *(undefined1 *)(puVar33 + 9) = 0xd8;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 0xb:
code_r0x001024eb:
              *(undefined1 *)(puVar33 + 9) = 0xd9;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 0xc:
code_r0x0010267b:
              *(undefined1 *)(puVar33 + 9) = 0xe0;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            case 0xd:
code_r0x00102a4f:
              *(undefined1 *)(puVar33 + 9) = 0xdf;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            default:
LAB_00102cc0:
              uVar29 = 0xffffffd4;
            }
            goto LAB_00101d0c;
          }
          if ((int)puVar33[8] == 0x16) {
code_r0x0010b5b2:
            *(undefined1 *)(puVar33 + 9) = 0xda;
            param_2 = (ushort *)*puVar33;
            uVar29 = 0;
            puVar22 = puVar33;
          }
          else if (uVar25 == 0) {
code_r0x001049d2:
            *(undefined1 *)(puVar33 + 9) = 0x21;
            param_2 = (ushort *)*puVar33;
            uVar29 = 0;
            puVar22 = puVar33;
          }
          else {
code_r0x00104925:
            *(undefined1 *)(puVar33 + 9) = 0xdb;
            param_2 = (ushort *)*puVar33;
            uVar29 = 0;
            puVar22 = puVar33;
          }
          goto code_r0x00101cc8;
        }
        puVar17 = (ushort *)puVar33[10];
        puVar33[1] = (ulong)puVar17;
        if (uVar32 != 0xffffffff) {
          iVar5 = (int)puVar33[8];
          bVar37 = iVar5 == 0xf;
          if (0xd < uVar32) goto LAB_00102cc0;
          bVar35 = uVar29 < uVar28;
          switch(uVar32) {
          case 0:
            if (!bVar35) break;
            puVar15 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar15 <= puVar17) {
                if ((*(short *)(param_6 + 0x60) != 0) &&
                   (((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)) &&
                    (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
                goto code_r0x00102f0a;
                break;
              }
              iVar7 = 1;
              if (uVar25 != 0) {
                iVar7 = ((*puVar17 & 0xfc00) == 0xd800) + 1;
              }
              if (iVar5 == 0xf) break;
              uVar29 = uVar29 + 1;
              puVar17 = puVar17 + iVar7;
              puVar33[10] = (ulong)puVar17;
            } while (uVar29 < uVar28);
code_r0x00106c29:
            if (local_c8 == 2) goto code_r0x00106c34;
            goto code_r0x00101108;
          case 1:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
code_r0x0010658b:
              if (puVar17 < puVar15) {
                uVar19 = *puVar17;
                uVar6 = (uint)uVar19;
                lVar24 = (long)(int)uVar32;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  lVar24 = 2;
                  uVar6 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                cVar1 = *(char *)((ulong)*(ushort *)
                                          (&_pcre2_ucd_stage2_16 +
                                          (long)(int)((uint)*(ushort *)
                                                             (&_pcre2_ucd_stage1_16 +
                                                             (long)((int)uVar6 >> 7) * 2) * 0x80 +
                                                     (uVar6 & 0x7f)) * 2) * 0xc + 0x10f019);
                if (bVar37 != ((byte)(cVar1 - 8U) < 2 || cVar1 == '\x05')) goto code_r0x00106576;
              }
              else {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010676b:
                  if (sVar4 == 1) goto code_r0x00106c29;
                  goto code_r0x00102f0a;
                }
              }
              goto code_r0x00106c29;
            }
            break;
          case 2:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar19 = *puVar17;
                uVar6 = (uint)uVar19;
                lVar24 = 1;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  lVar24 = (long)(int)uVar32;
                  uVar6 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                if (bVar37 == (*(int *)(&_pcre2_ucp_gentype_16 +
                                       (ulong)*(byte *)((ulong)*(ushort *)
                                                                (&_pcre2_ucd_stage2_16 +
                                                                (long)(int)((uint)*(ushort *)
                                                                                   (&
                                                  _pcre2_ucd_stage1_16 + (long)((int)uVar6 >> 7) * 2
                                                  ) * 0x80 + (uVar6 & 0x7f)) * 2) * 0xc + 0x10f019)
                                       * 4) == *(int *)((long)puVar33 + 0x44))) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
              goto code_r0x00106c29;
            }
            break;
          case 3:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar19 = *puVar17;
                uVar32 = (uint)uVar19;
                lVar24 = 1;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  lVar24 = 2;
                  uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                if (bVar37 == ((uint)*(byte *)((ulong)*(ushort *)
                                                       (&_pcre2_ucd_stage2_16 +
                                                       (long)(int)((uint)*(ushort *)
                                                                          (&_pcre2_ucd_stage1_16 +
                                                                          (long)((int)uVar32 >> 7) *
                                                                          2) * 0x80 +
                                                                  (uVar32 & 0x7f)) * 2) * 0xc +
                                              0x10f019) == *(uint *)((long)puVar33 + 0x44))) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
              goto code_r0x00106c29;
            }
            break;
          case 4:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar19 = *puVar17;
                uVar32 = (uint)uVar19;
                lVar24 = 1;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  lVar24 = 2;
                  uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                if (bVar37 == ((uint)(byte)(&_pcre2_ucd_records_16)
                                           [(ulong)*(ushort *)
                                                    (&_pcre2_ucd_stage2_16 +
                                                    (long)(int)((uint)*(ushort *)
                                                                       (&_pcre2_ucd_stage1_16 +
                                                                       (long)((int)uVar32 >> 7) * 2)
                                                                * 0x80 + (uVar32 & 0x7f)) * 2) * 0xc
                                           ] == *(uint *)((long)puVar33 + 0x44))) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
              goto code_r0x00106c29;
            }
            break;
          case 5:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar19 = *puVar17;
                uVar32 = (uint)uVar19;
                lVar24 = 1;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  lVar24 = 2;
                  uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                uVar6 = *(uint *)((long)puVar33 + 0x44);
                bVar35 = true;
                if ((byte)(&_pcre2_ucd_records_16)
                          [(ulong)*(ushort *)
                                   (&_pcre2_ucd_stage2_16 +
                                   (long)(int)((uint)*(ushort *)
                                                      (&_pcre2_ucd_stage1_16 +
                                                      (long)((int)uVar32 >> 7) * 2) * 0x80 +
                                              (uVar32 & 0x7f)) * 2) * 0xc] != uVar6) {
                  bVar35 = (1 << ((byte)uVar6 & 0x1f) &
                           *(uint *)(&_pcre2_ucd_script_sets_16 +
                                    ((ulong)(*(ushort *)
                                              (&_pcre2_ucd_caseless_sets_16 +
                                              (ulong)*(ushort *)
                                                      (&_pcre2_ucd_stage2_16 +
                                                      (long)(int)((uint)*(ushort *)
                                                                         (&_pcre2_ucd_stage1_16 +
                                                                         (long)((int)uVar32 >> 7) *
                                                                         2) * 0x80 + (uVar32 & 0x7f)
                                                                 ) * 2) * 0xc) & 0x3ff) +
                                    (ulong)(uVar6 >> 5)) * 4)) != 0;
                }
                if (bVar37 == bVar35) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
              goto code_r0x00106c29;
            }
            break;
          case 6:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar19 = *puVar17;
                uVar32 = (uint)uVar19;
                lVar24 = 1;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  lVar24 = 2;
                  uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                if (bVar37 == ((*(uint *)(&_pcre2_ucp_gentype_16 +
                                         (ulong)*(byte *)((ulong)*(ushort *)
                                                                  (&_pcre2_ucd_stage2_16 +
                                                                  (long)(int)((uint)*(ushort *)
                                                                                     (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar32 >> 7) * 2) * 0x80 +
                                                  (uVar32 & 0x7f)) * 2) * 0xc + 0x10f019) * 4) &
                               0xfffffffd) == 1)) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
              goto code_r0x00106c29;
            }
            break;
          default:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar19 = *puVar17;
                uVar32 = (uint)uVar19;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  lVar24 = 2;
                  uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                  goto code_r0x00105ede;
                }
                if (uVar19 == 0x180e) {
code_r0x00105f9d:
                  if (iVar5 == 0xf) break;
                  lVar24 = 1;
                }
                else {
                  if (uVar19 < 0x180f) {
                    if (uVar19 != 0x85) {
                      if (uVar19 < 0x86) {
                        if (uVar19 < 0xe) {
                          if (uVar19 < 9) {
code_r0x00105ed9:
                            lVar24 = 1;
                            goto code_r0x00105ede;
                          }
                        }
                        else if (uVar19 != 0x20) goto code_r0x00105ed9;
                      }
                      else if ((uVar19 != 0xa0) && (uVar19 != 0x1680)) goto code_r0x00105ed9;
                    }
                    goto code_r0x00105f9d;
                  }
                  if (uVar19 < 0x2060) {
                    if (uVar19 < 0x2028) {
                      lVar24 = 1;
                      if (10 < (ushort)(uVar19 + 0xe000)) goto code_r0x00105ede;
                    }
                    else if ((0x80000000000083U >> ((ulong)(ushort)(uVar19 + 0xdfd8) & 0x3f) & 1) ==
                             0) goto code_r0x00105ed9;
                    goto code_r0x00105f9d;
                  }
                  lVar24 = 1;
                  if (uVar19 == 0x3000) goto code_r0x00105f9d;
code_r0x00105ede:
                  if (bVar37 == (*(int *)(&_pcre2_ucp_gentype_16 +
                                         (ulong)*(byte *)((ulong)*(ushort *)
                                                                  (&_pcre2_ucd_stage2_16 +
                                                                  (long)(int)((uint)*(ushort *)
                                                                                     (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar32 >> 7) * 2) * 0x80 +
                                                  (uVar32 & 0x7f)) * 2) * 0xc + 0x10f019) * 4) == 6)
                     ) break;
                }
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
              goto code_r0x00106c29;
            }
            break;
          case 9:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar19 = *puVar17;
                uVar32 = (uint)uVar19;
                lVar24 = 1;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  lVar24 = 2;
                  uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                bVar18 = *(byte *)((ulong)*(ushort *)
                                           (&_pcre2_ucd_stage2_16 +
                                           (long)(int)((uVar32 & 0x7f) +
                                                      (uint)*(ushort *)
                                                             (&_pcre2_ucd_stage1_16 +
                                                             (long)((int)uVar32 >> 7) * 2) * 0x80) *
                                           2) * 0xc + 0x10f019);
                if (bVar37 == ((*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)bVar18 * 4) & 0xfffffffd)
                               == 1 || (bVar18 - 0xc & 0xfb) == 0)) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
              goto code_r0x00106c29;
            }
            break;
          case 10:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar19 = *puVar17;
                uVar32 = (uint)uVar19;
                lVar24 = 1;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  lVar24 = 2;
                  uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                puVar16 = (uint *)(&_pcre2_ucd_caseless_sets_16 +
                                  (ulong)*(uint *)((long)puVar33 + 0x44) * 4);
                do {
                  uVar6 = *puVar16;
                  if (uVar32 < uVar6) break;
                  puVar16 = puVar16 + 1;
                } while (uVar6 != uVar32);
                if (iVar5 != 0xf) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
              goto code_r0x00106c29;
            }
            break;
          case 0xb:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar19 = *puVar17;
                uVar32 = (uint)uVar19;
                if ((uVar25 == 0) || ((uVar19 & 0xfc00) != 0xd800)) {
                  iVar5 = 1;
                  if (((uVar19 & 0xffdf) != 0x40) && (iVar7 = 1, uVar19 != 0x24))
                  goto code_r0x00106dd4;
                  bVar35 = true;
                }
                else {
                  uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                  iVar7 = 2;
code_r0x00106dd4:
                  iVar5 = iVar7;
                  bVar35 = uVar32 - 0xa0 < 0xd760 || 0xdfff < uVar32;
                }
                if (bVar37 == bVar35) break;
                uVar29 = uVar29 + 1;
                puVar17 = puVar17 + iVar5;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
              goto code_r0x00106c29;
            }
            break;
          case 0xc:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar19 = *puVar17;
                uVar32 = (uint)uVar19;
                lVar24 = 1;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  lVar24 = 2;
                  uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                if (bVar37 == ((uint)(*(ushort *)
                                       (&_pcre2_ucd_caseless_sets_16 +
                                       (ulong)*(ushort *)
                                               (&_pcre2_ucd_stage2_16 +
                                               (long)(int)((uint)*(ushort *)
                                                                  (&_pcre2_ucd_stage1_16 +
                                                                  (long)((int)uVar32 >> 7) * 2) *
                                                           0x80 + (uVar32 & 0x7f)) * 2) * 0xc) >>
                                     0xb) == *(uint *)((long)puVar33 + 0x44))) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
              goto code_r0x00106c29;
            }
            break;
          case 0xd:
            if (bVar35) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar19 = *puVar17;
                uVar32 = (uint)uVar19;
                lVar24 = 1;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  lVar24 = 2;
                  uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                if (bVar37 == ((1 << ((byte)*(uint *)((long)puVar33 + 0x44) & 0x1f) &
                               *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                                        ((ulong)(*(uint *)((long)puVar33 + 0x44) >> 5) +
                                        (ulong)(*(ushort *)
                                                 ((ulong)*(ushort *)
                                                          (&_pcre2_ucd_stage2_16 +
                                                          (long)(int)((uint)*(ushort *)
                                                                             (&_pcre2_ucd_stage1_16
                                                                             + (long)((int)uVar32 >>
                                                                                     7) * 2) * 0x80
                                                                     + (uVar32 & 0x7f)) * 2) * 0xc +
                                                 0x10f022) & 0xfff)) * 4)) != 0)) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
              goto code_r0x00106c29;
            }
          }
          goto code_r0x0010a44d;
        }
        iVar5 = (int)puVar33[8];
        if (iVar5 == 0x16) {
          if (uVar29 < uVar28) {
            while (puVar17 < *(ushort **)(param_6 + 0x88)) {
              uVar19 = *puVar17;
              uVar32 = (uint)uVar19;
              puVar33[10] = (ulong)(puVar17 + 1);
              if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                uVar27 = puVar17[1];
                puVar33[10] = (ulong)(puVar17 + 2);
                uVar32 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
              }
              uVar11 = func_0x0010f068(uVar32,puVar33[10],*(undefined8 *)(param_6 + 0x78));
              puVar33[10] = uVar11;
              if ((((*(ulong *)(param_6 + 0x88) <= uVar11) && (*(short *)(param_6 + 0x60) != 0)) &&
                  ((*(ulong *)(param_6 + 0xa0) < uVar11 || (*(int *)(param_6 + 0x30) != 0)))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto code_r0x00102f0a;
              uVar29 = uVar29 + 1;
              if (*(uint *)((long)puVar33 + 0x3c) <= uVar29) goto code_r0x0010a402;
              puVar17 = (ushort *)puVar33[10];
            }
            if ((*(short *)(param_6 + 0x60) != 0) &&
               (((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)) &&
                (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
            goto code_r0x00102f0a;
          }
code_r0x0010a402:
          if (local_c8 != 2) {
code_r0x0010a40d:
            if (puVar33[1] < puVar33[10]) {
              *(undefined1 *)(puVar33 + 9) = 0xdc;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            }
          }
          goto code_r0x001005ba;
        }
        if (uVar25 != 0) {
          switch(iVar5) {
          case 6:
            if (uVar29 < uVar28) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010bfb1;
                  }
                  break;
                }
                uVar19 = *puVar17;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  lVar24 = 2;
                }
                else {
                  if ((uVar19 < 0x100) &&
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 8) != 0)) break;
                  lVar24 = 1;
                }
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
            }
            break;
          case 7:
            if (uVar29 < uVar28) {
              puVar15 = *(ushort **)(param_6 + 0x88);
code_r0x0010772d:
              if (puVar17 < puVar15) {
                uVar19 = *puVar17;
                if ((((uVar19 & 0xfc00) != 0xd800) && (uVar19 < 0x100)) &&
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 8) != 0))
                goto code_r0x00107718;
              }
              else {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010bf33:
                  if (sVar4 == 1) break;
                  goto code_r0x00102f0a;
                }
              }
              break;
            }
            break;
          case 8:
            if (uVar29 < uVar28) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010bf33;
                  }
                  break;
                }
                uVar19 = *puVar17;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  lVar24 = 2;
                }
                else {
                  if ((uVar19 < 0x100) &&
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 1) != 0)) break;
                  lVar24 = 1;
                }
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
            }
            break;
          case 9:
            if (uVar29 < uVar28) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              while (puVar17 < puVar15) {
                uVar19 = *puVar17;
                if ((((uVar19 & 0xfc00) == 0xd800) || (0xff < uVar19)) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 1) == 0))
                goto code_r0x001073b1;
                puVar17 = puVar17 + 1;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
                if (uVar28 <= uVar29) goto code_r0x001073b1;
              }
              sVar4 = *(short *)(param_6 + 0x60);
              if ((sVar4 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bf33;
              }
            }
            break;
          case 10:
            if (uVar29 < uVar28) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010bf33;
                  }
                  break;
                }
                uVar19 = *puVar17;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  lVar24 = 2;
                }
                else {
                  if ((uVar19 < 0x100) &&
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 0x10) != 0)) break;
                  lVar24 = 1;
                }
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
            }
            break;
          case 0xb:
            if (uVar29 < uVar28) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              while (puVar17 < puVar15) {
                uVar19 = *puVar17;
                if ((((uVar19 & 0xfc00) == 0xd800) || (0xff < uVar19)) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar19) & 0x10) == 0))
                goto code_r0x001073b1;
                puVar17 = puVar17 + 1;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
                if (uVar28 <= uVar29) goto code_r0x001073b1;
              }
              sVar4 = *(short *)(param_6 + 0x60);
              if ((sVar4 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bfb1;
              }
            }
            break;
          case 0xc:
            if (uVar29 < uVar28) {
              while (puVar17 < *(ushort **)(param_6 + 0x88)) {
                if (*(int *)(param_6 + 0xe4) == 0) {
                  if (((puVar17 <= *(ushort **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8))
                      && (*puVar17 == *(ushort *)(param_6 + 0xec))) &&
                     ((*(uint *)(param_6 + 0xe8) == 1 || (puVar17[1] == *(ushort *)(param_6 + 0xee))
                      ))) goto code_r0x001073b1;
                }
                else {
                  iVar5 = _pcre2_is_newline_16();
                  if (iVar5 != 0) goto code_r0x001073b1;
                  puVar17 = (ushort *)puVar33[10];
                }
                if (*(short *)(param_6 + 0x60) == 0) {
                  puVar33[10] = (ulong)(puVar17 + 1);
                  if (puVar17 + 1 < *(ushort **)(param_6 + 0x88)) {
code_r0x001074b6:
                    if ((puVar17[1] & 0xfc00) == 0xdc00) {
                      puVar15 = puVar17 + 2;
                      goto code_r0x00107440;
                    }
                  }
                }
                else {
                  puVar15 = puVar17 + 1;
                  if (puVar15 < *(ushort **)(param_6 + 0x88)) {
                    puVar33[10] = (ulong)puVar15;
                    goto code_r0x001074b6;
                  }
                  if ((((*(int *)(param_6 + 0xe4) == 0) && (*(int *)(param_6 + 0xe8) == 2)) &&
                      (*puVar17 == *(ushort *)(param_6 + 0xec))) &&
                     (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto code_r0x00102f0a;
code_r0x00107440:
                  puVar33[10] = (ulong)puVar15;
                }
                uVar29 = uVar29 + 1;
                if (*(uint *)((long)puVar33 + 0x3c) <= uVar29) goto code_r0x001073b1;
                puVar17 = (ushort *)puVar33[10];
              }
              sVar4 = *(short *)(param_6 + 0x60);
              if ((sVar4 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bfb1;
              }
            }
            break;
          case 0xd:
            if (uVar28 == 0xffffffff) {
              uVar11 = *(ulong *)(param_6 + 0x88);
              sVar4 = *(short *)(param_6 + 0x60);
              puVar33[10] = uVar11;
              if ((sVar4 != 0) &&
                 ((*(ulong *)(param_6 + 0xa0) < uVar11 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010bfb1:
                if (sVar4 != 1) goto code_r0x00102f0a;
              }
            }
            else if (uVar29 < uVar28) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              while (puVar17 < puVar15) {
                puVar33[10] = (ulong)(puVar17 + 1);
                if ((puVar17 + 1 < puVar15) && ((puVar17[1] & 0xfc00) == 0xdc00)) {
                  puVar33[10] = (ulong)(puVar17 + 2);
                }
                uVar29 = uVar29 + 1;
                if (uVar28 == uVar29) goto code_r0x001073b1;
                puVar17 = (ushort *)puVar33[10];
              }
              sVar4 = *(short *)(param_6 + 0x60);
              if ((sVar4 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bfb1;
              }
            }
            break;
          case 0xe:
            uVar11 = *(ulong *)(param_6 + 0x88);
            if ((uint)((long)(uVar11 - (long)puVar17) >> 1) < uVar28 - uVar29) {
              sVar4 = *(short *)(param_6 + 0x60);
              puVar33[10] = uVar11;
              if ((sVar4 != 0) &&
                 ((*(ulong *)(param_6 + 0xa0) < uVar11 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bfb1;
              }
            }
            else {
              puVar33[10] = (ulong)(puVar17 + (uVar28 - uVar29));
            }
            break;
          default:
            goto LAB_00102cc0;
          case 0x11:
            if (uVar29 < uVar28) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              while (puVar17 < puVar15) {
                uVar19 = *puVar17;
                if ((uVar19 & 0xfc00) == 0xd800) goto code_r0x001073b1;
                uVar32 = (uint)uVar19;
                if (uVar19 == 0xd) {
                  puVar33[10] = (ulong)(puVar17 + 1);
                  if (puVar15 <= puVar17 + 1) goto code_r0x001073b1;
                  if (puVar17[1] == 10) {
                    puVar33[10] = (ulong)(puVar17 + 2);
                  }
                }
                else {
                  if ((uVar32 != 10) &&
                     ((*(short *)(param_6 + 0x62) == 2 ||
                      (((1 < uVar32 - 0xb && (uVar32 != 0x85)) && (1 < uVar32 - 0x2028))))))
                  goto code_r0x001073b1;
                  puVar33[10] = (ulong)(puVar17 + 1);
                }
                uVar29 = uVar29 + 1;
                if (uVar28 <= uVar29) goto code_r0x001073b1;
                puVar17 = (ushort *)puVar33[10];
              }
              sVar4 = *(short *)(param_6 + 0x60);
              if ((sVar4 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bfb1;
              }
            }
            break;
          case 0x12:
          case 0x13:
            if (uVar29 < uVar28) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010bf33;
                  }
                  break;
                }
                uVar19 = *puVar17;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  lVar24 = 2;
                  bVar37 = false;
                  goto code_r0x001075ac;
                }
                if (uVar19 == 0x180e) {
code_r0x0010ae34:
                  lVar24 = 1;
                  bVar37 = true;
                }
                else {
                  if (0x180e < uVar19) {
                    if (uVar19 != 0x205f) {
                      if (uVar19 < 0x2060) {
                        if (uVar19 < 0x200b) {
                          lVar24 = 1;
                          bVar37 = 0x1fff < uVar19;
                        }
                        else {
                          bVar37 = uVar19 == 0x202f;
                          lVar24 = 1;
                        }
                      }
                      else {
                        bVar37 = uVar19 == 0x3000;
                        lVar24 = 1;
                      }
                      goto code_r0x001075ac;
                    }
                    goto code_r0x0010ae34;
                  }
                  if (uVar19 == 0xa0) goto code_r0x0010ae34;
                  if (uVar19 < 0xa1) {
                    if (uVar19 == 9) goto code_r0x0010ae34;
                    bVar37 = uVar19 == 0x20;
                    lVar24 = 1;
                  }
                  else {
                    bVar37 = uVar19 == 0x1680;
                    lVar24 = 1;
                  }
                }
code_r0x001075ac:
                if ((iVar5 == 0x12) == bVar37) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
            }
            break;
          case 0x14:
          case 0x15:
            if (uVar29 < uVar28) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar15 <= puVar17) {
                  sVar4 = *(short *)(param_6 + 0x60);
                  if ((sVar4 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010bf33;
                  }
                  break;
                }
                uVar19 = *puVar17;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  lVar24 = 2;
                  bVar37 = false;
                }
                else if (uVar19 == 0x85) {
                  lVar24 = 1;
                  bVar37 = true;
                }
                else if (uVar19 < 0x86) {
                  lVar24 = 1;
                  bVar37 = (ushort)(uVar19 - 10) < 4;
                }
                else {
                  lVar24 = 1;
                  bVar37 = (ushort)(uVar19 + 0xdfd8) < 2;
                }
                if ((iVar5 == 0x14) == bVar37) break;
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar28);
            }
          }
code_r0x001073b1:
          if (local_c8 == 2) goto code_r0x00106c34;
code_r0x00101169:
          if (puVar33[1] < puVar33[10]) {
code_r0x00101177:
            *(undefined1 *)(puVar33 + 9) = 0xdd;
            param_2 = (ushort *)*puVar33;
            uVar29 = 0;
            puVar22 = puVar33;
            goto code_r0x00101cc8;
          }
          goto code_r0x001005ba;
        }
        switch(iVar5) {
        case 6:
          if (uVar29 < uVar28) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar15 <= puVar17) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c206;
                }
                break;
              }
              if ((*puVar17 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar17) & 8) != 0)) break;
              puVar17 = puVar17 + 1;
              uVar29 = uVar29 + 1;
              puVar33[10] = (ulong)puVar17;
            } while (uVar29 < uVar28);
          }
          break;
        case 7:
          if (uVar29 < uVar28) {
            puVar15 = *(ushort **)(param_6 + 0x88);
code_r0x00108883:
            if (puVar17 < puVar15) {
              if ((*puVar17 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar17) & 8) != 0))
              goto code_r0x0010886e;
            }
            else {
              sVar4 = *(short *)(param_6 + 0x60);
              if ((sVar4 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010c1c1:
                if (sVar4 == 1) break;
                goto code_r0x00102f0a;
              }
            }
            break;
          }
          break;
        case 8:
          if (uVar29 < uVar28) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar15 <= puVar17) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              if ((*puVar17 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar17) & 1) != 0)) break;
              puVar17 = puVar17 + 1;
              uVar29 = uVar29 + 1;
              puVar33[10] = (ulong)puVar17;
            } while (uVar29 < uVar28);
          }
          break;
        case 9:
          if (uVar29 < uVar28) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            while (puVar17 < puVar15) {
              if ((0xff < *puVar17) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar17) & 1) == 0))
              goto code_r0x001084a6;
              puVar17 = puVar17 + 1;
              uVar29 = uVar29 + 1;
              puVar33[10] = (ulong)puVar17;
              if (uVar28 <= uVar29) goto code_r0x001084a6;
            }
            sVar4 = *(short *)(param_6 + 0x60);
            if ((sVar4 != 0) &&
               ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x0010c1c1;
            }
          }
          break;
        case 10:
          if (uVar29 < uVar28) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar15 <= puVar17) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              if ((*puVar17 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar17) & 0x10) != 0)) break;
              puVar17 = puVar17 + 1;
              uVar29 = uVar29 + 1;
              puVar33[10] = (ulong)puVar17;
            } while (uVar29 < uVar28);
          }
          break;
        case 0xb:
          if (uVar29 < uVar28) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            while (puVar17 < puVar15) {
              if ((0xff < *puVar17) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar17) & 0x10) == 0))
              goto code_r0x001084a6;
              puVar17 = puVar17 + 1;
              uVar29 = uVar29 + 1;
              puVar33[10] = (ulong)puVar17;
              if (uVar28 <= uVar29) goto code_r0x001084a6;
            }
            sVar4 = *(short *)(param_6 + 0x60);
            if ((sVar4 != 0) &&
               ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x0010c206;
            }
          }
          break;
        case 0xc:
          if (uVar29 < uVar28) {
            while (puVar17 < *(ushort **)(param_6 + 0x88)) {
              if (*(int *)(param_6 + 0xe4) == 0) {
                if (((puVar17 <= *(ushort **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8))
                    && (*puVar17 == *(ushort *)(param_6 + 0xec))) &&
                   ((*(uint *)(param_6 + 0xe8) == 1 || (puVar17[1] == *(ushort *)(param_6 + 0xee))))
                   ) goto code_r0x001084a6;
              }
              else {
                iVar5 = _pcre2_is_newline_16();
                if (iVar5 != 0) goto code_r0x001084a6;
              }
              if (((((*(short *)(param_6 + 0x60) != 0) &&
                    (*(short **)(param_6 + 0x88) <= (short *)puVar33[10] + 1)) &&
                   (*(int *)(param_6 + 0xe4) == 0)) &&
                  ((*(int *)(param_6 + 0xe8) == 2 &&
                   (*(short *)puVar33[10] == *(short *)(param_6 + 0xec))))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto code_r0x00102f0a;
              puVar33[10] = puVar33[10] + 2;
              uVar29 = uVar29 + 1;
              if (*(uint *)((long)puVar33 + 0x3c) <= uVar29) goto code_r0x001084a6;
              puVar17 = (ushort *)puVar33[10];
            }
            sVar4 = *(short *)(param_6 + 0x60);
            if ((sVar4 != 0) &&
               ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010c206:
              if (sVar4 != 1) goto code_r0x00102f0a;
            }
          }
          break;
        case 0xd:
        case 0xe:
          uVar11 = *(ulong *)(param_6 + 0x88);
          if ((uint)((long)(uVar11 - (long)puVar17) >> 1) < uVar28 - uVar29) {
            sVar4 = *(short *)(param_6 + 0x60);
            puVar33[10] = uVar11;
            if ((sVar4 != 0) &&
               ((*(ulong *)(param_6 + 0xa0) < uVar11 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x0010c206;
            }
          }
          else {
            puVar33[10] = (ulong)(puVar17 + (uVar28 - uVar29));
          }
          break;
        default:
          goto LAB_00102cc0;
        case 0x11:
          if (uVar29 < uVar28) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            while (puVar17 < puVar15) {
              uVar32 = (uint)*puVar17;
              if (uVar32 == 0xd) {
                puVar33[10] = (ulong)(puVar17 + 1);
                if (puVar15 <= puVar17 + 1) goto code_r0x001084a6;
                if (puVar17[1] == 10) {
                  puVar33[10] = (ulong)(puVar17 + 2);
                }
              }
              else {
                if ((uVar32 != 10) &&
                   ((*(short *)(param_6 + 0x62) == 2 ||
                    (((1 < uVar32 - 0xb && (uVar32 != 0x85)) && (1 < uVar32 - 0x2028))))))
                goto code_r0x001084a6;
                puVar33[10] = (ulong)(puVar17 + 1);
              }
              uVar29 = uVar29 + 1;
              if (uVar28 <= uVar29) goto code_r0x001084a6;
              puVar17 = (ushort *)puVar33[10];
            }
            sVar4 = *(short *)(param_6 + 0x60);
            if ((sVar4 != 0) &&
               ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x0010c206;
            }
          }
          break;
        case 0x12:
          if (uVar29 < uVar28) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar15 <= puVar17) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              uVar19 = *puVar17;
              if (uVar19 == 0x180e) break;
              if (uVar19 < 0x180f) {
                if (uVar19 == 0xa0) break;
                if (uVar19 < 0xa1) {
                  if ((uVar19 == 9) || (uVar19 == 0x20)) break;
                }
                else if (uVar19 == 0x1680) break;
              }
              else {
                if (uVar19 == 0x205f) break;
                if (uVar19 < 0x2060) {
                  if (uVar19 < 0x200b) {
                    if (0x1fff < uVar19) break;
                  }
                  else if (uVar19 == 0x202f) break;
                }
                else if (uVar19 == 0x3000) break;
              }
              puVar17 = puVar17 + 1;
              uVar29 = uVar29 + 1;
              puVar33[10] = (ulong)puVar17;
            } while (uVar29 < uVar28);
          }
          break;
        case 0x13:
          if (uVar29 < uVar28) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar15 <= puVar17) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              uVar19 = *puVar17;
              if (uVar19 != 0x180e) {
                if (uVar19 < 0x180f) {
                  if (uVar19 != 0xa0) {
                    if (uVar19 < 0xa1) {
                      if ((uVar19 != 9) && (uVar19 != 0x20)) break;
                    }
                    else if (uVar19 != 0x1680) break;
                  }
                }
                else if (uVar19 != 0x205f) {
                  if (uVar19 < 0x2060) {
                    if (uVar19 < 0x200b) {
                      if (uVar19 < 0x2000) break;
                    }
                    else if (uVar19 != 0x202f) break;
                  }
                  else if (uVar19 != 0x3000) break;
                }
              }
              puVar17 = puVar17 + 1;
              uVar29 = uVar29 + 1;
              puVar33[10] = (ulong)puVar17;
            } while (uVar29 < uVar28);
          }
          break;
        case 0x14:
          if (uVar29 < uVar28) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar15 <= puVar17) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              uVar19 = *puVar17;
              if (uVar19 == 0x85) break;
              if (uVar19 < 0x86) {
                if ((ushort)(uVar19 - 10) < 4) break;
              }
              else if ((ushort)(uVar19 + 0xdfd8) < 2) break;
              puVar17 = puVar17 + 1;
              uVar29 = uVar29 + 1;
              puVar33[10] = (ulong)puVar17;
            } while (uVar29 < uVar28);
          }
          break;
        case 0x15:
          if (uVar29 < uVar28) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar15 <= puVar17) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              uVar19 = *puVar17;
              if (uVar19 != 0x85) {
                if (uVar19 < 0x86) {
                  if (3 < (ushort)(uVar19 - 10)) break;
                }
                else if (1 < (ushort)(uVar19 + 0xdfd8)) break;
              }
              puVar17 = puVar17 + 1;
              uVar29 = uVar29 + 1;
              puVar33[10] = (ulong)puVar17;
            } while (uVar29 < uVar28);
          }
        }
code_r0x001084a6:
        if (local_c8 != 2) {
code_r0x001008fb:
          if (puVar33[10] != puVar33[1]) {
code_r0x00100909:
            *(undefined1 *)(puVar33 + 9) = 0x22;
            param_2 = (ushort *)*puVar33;
            uVar29 = 0;
            puVar22 = puVar33;
            goto code_r0x00101cc8;
          }
          goto code_r0x001005ba;
        }
code_r0x00106c34:
        local_c8 = 2;
        goto code_r0x001005ba;
      default:
        goto LAB_00102cc0;
      case 0x6e:
      case 0x6f:
        puVar15 = puVar17 + 1;
        *puVar33 = (ulong)(puVar17 + 0x11);
        uVar19 = puVar17[0x11];
        puVar33[2] = (ulong)puVar15;
        if (uVar19 < 0x6d) {
          if (uVar19 < 0x6a) {
            if (0x67 < uVar19) goto code_r0x00109c19;
            if (uVar19 < 0x62) goto code_r0x00109c09;
          }
          *puVar33 = (ulong)(puVar17 + 0x12);
          uVar11 = (ulong)(uVar19 - 0x62);
          local_c8 = *(uint *)(rep_typ + uVar11 * 4);
          puVar33[7] = CONCAT44(*(undefined4 *)(rep_max + uVar11 * 4),
                                *(undefined4 *)(rep_min + uVar11 * 4));
        }
        else if (uVar19 == 0x6d) {
code_r0x00109c19:
          *(uint *)(puVar33 + 7) = (uint)puVar17[0x12];
          uVar29 = (uint)puVar17[0x13];
          if (puVar17[0x13] == 0) {
            uVar29 = 0xffffffff;
          }
          *puVar33 = (ulong)(puVar17 + 0x14);
          *(uint *)((long)puVar33 + 0x3c) = uVar29;
          local_c8 = *(uint *)(rep_typ + (long)(int)(uVar19 - 0x62) * 4);
        }
        else {
code_r0x00109c09:
          puVar33[7] = __LC5;
        }
        uVar29 = (uint)puVar33[7];
        if (uVar25 == 0) {
          if (uVar29 != 0) {
            puVar17 = *(ushort **)(param_6 + 0x88);
            uVar32 = 1;
            do {
              puVar10 = (ushort *)puVar33[10];
              if (puVar17 <= puVar10) goto code_r0x00109996;
              puVar33[10] = (ulong)(puVar10 + 1);
              uVar19 = *puVar10;
              if (uVar19 < 0x100) {
                if ((*(byte *)((long)puVar15 + (ulong)(uVar19 >> 3)) >> (uVar19 & 7) & 1) == 0)
                goto code_r0x00100620;
              }
              else if (bVar18 == 0x6e) goto code_r0x00100620;
              uVar32 = uVar32 + 1;
            } while (uVar32 <= uVar29);
          }
        }
        else if (uVar29 != 0) {
          puVar17 = *(ushort **)(param_6 + 0x88);
          uVar32 = 1;
          do {
            puVar10 = (ushort *)puVar33[10];
            if (puVar17 <= puVar10) goto code_r0x00109996;
            puVar33[10] = (ulong)(puVar10 + 1);
            uVar19 = *puVar10;
            if ((uVar19 & 0xfc00) == 0xd800) {
              puVar33[10] = (ulong)(puVar10 + 2);
code_r0x00109402:
              if (bVar18 == 0x6e) goto code_r0x00100620;
            }
            else {
              if (0xff < uVar19) goto code_r0x00109402;
              if ((*(byte *)((long)puVar15 + (ulong)(uVar19 >> 3)) >> (uVar19 & 7) & 1) == 0)
              goto code_r0x00100620;
            }
            uVar32 = uVar32 + 1;
          } while (uVar32 <= uVar29);
        }
        uVar32 = *(uint *)((long)puVar33 + 0x3c);
        if (uVar29 != uVar32) {
          if (local_c8 == 0) {
            if (uVar25 == 0) {
code_r0x0010244a:
              *(undefined1 *)(puVar33 + 9) = 0x17;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
            }
            else {
code_r0x001028c5:
              *(undefined1 *)(puVar33 + 9) = 200;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
            }
            goto code_r0x00101cc8;
          }
          puVar17 = (ushort *)puVar33[10];
          puVar33[1] = (ulong)puVar17;
          if (uVar25 == 0) {
            if (uVar32 <= uVar29) {
              if (local_c8 == 2) goto code_r0x00106c34;
code_r0x00100c32:
              *(undefined1 *)(puVar33 + 9) = 0x18;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            }
            puVar10 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar10 <= puVar17) {
                if ((*(short *)(param_6 + 0x60) != 0) &&
                   (((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)) &&
                    (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
                goto code_r0x00102f0a;
                break;
              }
              uVar19 = *puVar17;
              if (uVar19 < 0x100) {
                if ((*(byte *)((long)puVar15 + (ulong)(uVar19 >> 3)) >> (uVar19 & 7) & 1) == 0)
                break;
              }
              else if (bVar18 == 0x6e) break;
              puVar17 = puVar17 + 1;
              uVar29 = uVar29 + 1;
              puVar33[10] = (ulong)puVar17;
            } while (uVar29 < uVar32);
            if (local_c8 != 2) goto code_r0x00100c21;
          }
          else {
            if (uVar29 < uVar32) {
              puVar10 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar10 <= puVar17) {
                  if (((*(short *)(param_6 + 0x60) != 0) &&
                      ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0))))
                     && (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto code_r0x00102f0a;
                  break;
                }
                uVar19 = *puVar17;
                if ((uVar19 & 0xfc00) == 0xd800) {
                  lVar24 = 2;
code_r0x0010a722:
                  if (bVar18 == 0x6e) break;
                }
                else {
                  if (0xff < uVar19) {
                    lVar24 = 1;
                    goto code_r0x0010a722;
                  }
                  if ((*(byte *)((long)puVar15 + (ulong)(uVar19 >> 3)) >> (uVar19 & 7) & 1) == 0)
                  break;
                  lVar24 = 1;
                }
                puVar17 = puVar17 + lVar24;
                uVar29 = uVar29 + 1;
                puVar33[10] = (ulong)puVar17;
              } while (uVar29 < uVar32);
            }
            if (local_c8 != 2) {
code_r0x00101aca:
              *(undefined1 *)(puVar33 + 9) = 0xc9;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            }
          }
        }
        goto code_r0x001005ba;
      case 0x70:
        puVar33[2] = (ulong)(puVar17 + 2);
        puVar17 = puVar17 + puVar17[1];
        uVar19 = *puVar17;
        *puVar33 = (ulong)puVar17;
        if (uVar19 < 0x6d) {
          if (uVar19 < 0x6a) {
            if (0x67 < uVar19) goto code_r0x00109ab4;
            if (uVar19 < 0x62) goto code_r0x00109aa4;
          }
          uVar11 = (ulong)(uVar19 - 0x62);
          *puVar33 = (ulong)(puVar17 + 1);
          local_c8 = *(uint *)(rep_typ + uVar11 * 4);
          puVar33[7] = CONCAT44(*(undefined4 *)(rep_max + uVar11 * 4),
                                *(undefined4 *)(rep_min + uVar11 * 4));
code_r0x001043fe:
          uVar29 = (uint)puVar33[7];
          if (uVar29 != 0) {
code_r0x0010440b:
            uVar32 = 1;
            do {
              puVar17 = (ushort *)puVar33[10];
              if (*(ushort **)(param_6 + 0x88) <= puVar17) {
                sVar4 = *(short *)(param_6 + 0x60);
                if ((sVar4 == 0) ||
                   ((puVar17 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto code_r0x00100620;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar19 = *puVar17;
              uVar29 = (uint)uVar19;
              puVar33[10] = (ulong)(puVar17 + 1);
              if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                uVar27 = puVar17[1];
                puVar33[10] = (ulong)(puVar17 + 2);
                uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
              }
              iVar5 = func_0x0010f050(uVar29,puVar33[2],bVar36);
              if (iVar5 == 0) {
                uVar29 = 0;
                goto code_r0x00100630;
              }
              uVar29 = (uint)puVar33[7];
              uVar32 = uVar32 + 1;
            } while (uVar32 <= uVar29);
          }
          if (*(uint *)((long)puVar33 + 0x3c) == uVar29) goto code_r0x001005ba;
          if (local_c8 != 0) {
            puVar17 = (ushort *)puVar33[10];
            puVar33[1] = (ulong)puVar17;
            if (uVar29 < *(uint *)((long)puVar33 + 0x3c)) {
code_r0x00109b8a:
              while (puVar17 < *(ushort **)(param_6 + 0x88)) {
                uVar19 = *puVar17;
                uVar32 = (uint)uVar19;
                iVar5 = 1;
                if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
                  iVar5 = 2;
                  uVar32 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
                }
                iVar7 = func_0x0010f050(uVar32,puVar33[2],bVar36);
                if (iVar7 == 0) goto code_r0x00109bce;
                uVar29 = uVar29 + 1;
                puVar33[10] = puVar33[10] + (long)iVar5 * 2;
                if (*(uint *)((long)puVar33 + 0x3c) <= uVar29) goto code_r0x00109bce;
                puVar17 = (ushort *)puVar33[10];
              }
              if ((*(short *)(param_6 + 0x60) != 0) &&
                 (((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)) &&
                  (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
              goto code_r0x00102f0a;
            }
code_r0x00109bce:
            if (local_c8 != 2) {
code_r0x00101b94:
              *(undefined1 *)(puVar33 + 9) = 0x65;
              param_2 = (ushort *)*puVar33;
              uVar29 = 0;
              puVar22 = puVar33;
              goto code_r0x00101cc8;
            }
            goto code_r0x001005ba;
          }
        }
        else {
          if (uVar19 != 0x6d) {
code_r0x00109aa4:
            puVar33[7] = __LC5;
            goto code_r0x001043fe;
          }
code_r0x00109ab4:
          uVar27 = puVar17[2];
          uVar32 = (uint)uVar27;
          uVar3 = puVar17[1];
          uVar29 = (uint)uVar3;
          *(uint *)(puVar33 + 7) = (uint)uVar3;
          if (uVar27 == 0) {
            uVar32 = 0xffffffff;
          }
          *puVar33 = (ulong)(puVar17 + 3);
          *(uint *)((long)puVar33 + 0x3c) = uVar32;
          local_c8 = *(uint *)(rep_typ + (long)(int)(uVar19 - 0x62) * 4);
          if (uVar3 != 0) goto code_r0x0010440b;
          if (local_c8 != 0) {
            puVar17 = (ushort *)puVar33[10];
            puVar33[1] = (ulong)puVar17;
            goto code_r0x00109b8a;
          }
        }
        local_c8 = 0;
code_r0x0010286d:
        *(undefined1 *)(puVar33 + 9) = 100;
        param_2 = (ushort *)*puVar33;
        uVar29 = 0;
        puVar22 = puVar33;
        goto code_r0x00101cc8;
      case 0x71:
      case 0x72:
        *(uint *)(puVar33 + 8) = (uint)(bVar18 == 0x72);
        uVar19 = puVar17[1];
        *puVar33 = (ulong)(puVar17 + 2);
        puVar33[5] = (long)(int)((uVar19 - 2) + (uint)uVar19);
        goto code_r0x001033d2;
      case 0x73:
      case 0x74:
        uVar19 = *(ushort *)(param_6 + 0x66);
        uVar27 = puVar17[1];
        lVar24 = *(long *)(param_6 + 0x68);
        *(uint *)(puVar33 + 8) = (uint)(bVar18 == 0x74);
        uVar3 = puVar17[2];
        uVar29 = (uint)uVar3;
        *puVar33 = (ulong)(puVar17 + 3);
        puVar17 = (ushort *)(lVar24 + (long)(int)((uint)uVar27 * (uint)uVar19) * 2);
        if (uVar3 != 0) {
          do {
            uVar11 = (ulong)(int)((*puVar17 - 2) + (uint)*puVar17);
            if ((uVar11 < puVar33[0x10]) && (puVar33[uVar11 + 0x11] != 0xffffffffffffffff)) break;
            puVar17 = puVar17 + uVar19;
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
          puVar33[5] = uVar11;
        }
code_r0x001033d2:
        puVar17 = (ushort *)*puVar33;
        uVar19 = *puVar17;
        if (uVar19 < 0x68) {
          if (0x61 < uVar19) {
            uVar11 = (ulong)(uVar19 - 0x62);
            *puVar33 = (ulong)(puVar17 + 1);
            local_c8 = *(uint *)(rep_typ + uVar11 * 4);
            puVar33[7] = CONCAT44(*(undefined4 *)(rep_max + uVar11 * 4),
                                  *(undefined4 *)(rep_min + uVar11 * 4));
            goto code_r0x00103426;
          }
code_r0x00108290:
          iVar5 = match_ref(puVar33[5],(int)puVar33[8],puVar33,param_6,&lStack_50);
          if (iVar5 != 0) {
            if (iVar5 < 1) {
              uVar11 = puVar33[10];
              if (uVar11 < *(ulong *)(param_6 + 0x88)) break;
            }
            else {
              uVar11 = *(ulong *)(param_6 + 0x88);
              puVar33[10] = uVar11;
            }
            sVar4 = *(short *)(param_6 + 0x60);
            if ((sVar4 == 0) ||
               ((uVar11 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) break;
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x00107f3c;
          }
          puVar33[10] = puVar33[10] + lStack_50 * 2;
          goto code_r0x001005ba;
        }
        if (1 < (ushort)(uVar19 - 0x68)) goto code_r0x00108290;
        local_c8 = *(uint *)(rep_typ + (long)(int)(uVar19 - 0x62) * 4);
        *(uint *)(puVar33 + 7) = (uint)puVar17[1];
        uVar29 = (uint)puVar17[2];
        if (puVar17[2] == 0) {
          uVar29 = 0xffffffff;
        }
        *puVar33 = (ulong)(puVar17 + 3);
        *(uint *)((long)puVar33 + 0x3c) = uVar29;
code_r0x00103426:
        uVar11 = puVar33[5];
        if ((uVar11 < puVar33[0x10]) && (puVar33[uVar11 + 0x11] != 0xffffffffffffffff)) {
          if (puVar33[uVar11 + 0x11] != puVar33[uVar11 + 0x12]) {
            uVar29 = (uint)puVar33[7];
            if (uVar29 != 0) goto code_r0x00103464;
            goto code_r0x00109e54;
          }
          goto code_r0x001005ba;
        }
        if (((int)puVar33[7] == 0) || ((*(byte *)(param_6 + 0xd9) & 2) != 0)) goto code_r0x001005ba;
        uVar29 = (uint)puVar33[7];
code_r0x00103464:
        uVar32 = 1;
        do {
          iVar5 = match_ref(uVar11,(int)puVar33[8],puVar33,param_6,&uStack_48);
          if (iVar5 != 0) {
            if (iVar5 < 1) {
              uVar11 = puVar33[10];
              if (uVar11 < *(ulong *)(param_6 + 0x88)) goto code_r0x00100620;
            }
            else {
              uVar11 = *(ulong *)(param_6 + 0x88);
              puVar33[10] = uVar11;
            }
            sVar4 = *(short *)(param_6 + 0x60);
            if ((sVar4 == 0) ||
               ((uVar11 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
            goto code_r0x00100620;
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x00107f3c;
          }
          uVar32 = uVar32 + 1;
          puVar33[10] = puVar33[10] + uStack_48 * 2;
        } while (uVar32 <= uVar29);
code_r0x00109e54:
        uVar32 = *(uint *)((long)puVar33 + 0x3c);
        if (uVar32 == uVar29) goto code_r0x001005ba;
        if (local_c8 == 0) {
code_r0x0010b27a:
          *(undefined1 *)(puVar33 + 9) = 0x14;
          param_2 = (ushort *)*puVar33;
          uVar29 = 0;
          puVar22 = puVar33;
        }
        else {
          uVar31 = puVar33[uVar11 + 0x12] - puVar33[uVar11 + 0x11];
          puVar33[1] = puVar33[10];
          puVar33[3] = uVar31;
          if (uVar29 < uVar32) {
            bVar37 = true;
            do {
              while( true ) {
                iVar5 = match_ref(uVar11,(int)puVar33[8],puVar33,param_6,&uStack_48);
                if (iVar5 != 0) {
                  if ((((0 < iVar5) && (*(short *)(param_6 + 0x60) != 0)) &&
                      (*(ulong *)(param_6 + 0xa0) < *(ulong *)(param_6 + 0x88))) &&
                     (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto code_r0x00102f0a;
                  goto code_r0x00109f25;
                }
                if (uVar31 == uStack_48) break;
                uVar29 = uVar29 + 1;
                puVar33[10] = puVar33[10] + uStack_48 * 2;
                if (uVar32 <= uVar29) goto code_r0x00109f34;
                bVar37 = false;
              }
              uVar29 = uVar29 + 1;
              puVar33[10] = puVar33[10] + uVar31 * 2;
            } while (uVar29 < uVar32);
code_r0x00109f25:
            if (bVar37) goto code_r0x001009a7;
code_r0x00109f34:
            *(uint *)((long)puVar33 + 0x3c) = uVar29;
code_r0x00109f38:
            *(undefined1 *)(puVar33 + 9) = 0x16;
            param_2 = (ushort *)*puVar33;
            uVar29 = 0;
            puVar22 = puVar33;
          }
          else {
code_r0x001009b8:
            *(undefined1 *)(puVar33 + 9) = 0x15;
            param_2 = (ushort *)*puVar33;
            uVar29 = 0;
            puVar22 = puVar33;
          }
        }
        goto code_r0x00101cc8;
      case 0x75:
        uVar29 = 0;
        uVar11 = *(ulong *)(param_6 + 0x70) + (ulong)puVar17[1] * 2;
        if (*(ulong *)(param_6 + 0x70) != uVar11) {
          uVar29 = (uint)*(ushort *)(uVar11 + 4);
        }
        if (((int)puVar33[0xe] == -1) || (uVar31 = puVar33[0xf], uVar31 == 0xffffffffffffffff))
        goto code_r0x001045a0;
        goto code_r0x00104584;
      case 0x76:
      case 0x77:
        uVar29 = do_callout(puVar33,param_6,&lStack_50);
        if (0 < (int)uVar29) break;
        if (uVar29 != 0) goto code_r0x00100630;
        *puVar33 = *puVar33 + lStack_50 * 2;
        goto code_r0x001005ba;
      case 0x78:
        puVar15 = puVar17;
        do {
          puVar15 = puVar15 + puVar15[1];
        } while (*puVar15 == 0x78);
        *puVar33 = (ulong)puVar15;
        local_c0 = puVar17;
        goto code_r0x001005ba;
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
        param_2 = puVar17 + -(ulong)puVar17[1];
        puVar15 = param_2;
        if (local_c0 == (ushort *)0x0) {
          local_c0 = puVar17;
        }
        do {
          puVar10 = puVar15;
          puVar15 = puVar10 + puVar10[1];
        } while (puVar10 + puVar10[1] != local_c0);
        uVar27 = *param_2;
        if ((uVar27 - 0x87 & 0xfffb) == 0) {
          plVar30 = (long *)0x0;
        }
        else {
          local_d8 = (ulong *)(puVar33[0xf] + param_5[6]);
          plVar30 = (long *)((long)local_d8 - param_4);
          puVar33[0xf] = plVar30[0xf];
          if (*(uint *)((long)local_d8 + 0x34) >> 0x10 == 3) {
            uVar29 = 1;
            memcpy(plVar30 + 0x11,puVar33 + 0x11,puVar33[0x10] * 8);
            local_c0 = (ushort *)0x0;
            plVar30[0x10] = puVar33[0x10];
            plVar30[0xc] = puVar33[0xc];
            puVar33[4] = (long)puVar33 - (long)plVar30;
            goto code_r0x00100630;
          }
        }
        switch(uVar27) {
        case 0x7f:
          uVar31 = puVar33[10];
          break;
        case 0x80:
          goto code_r0x00104f18;
        case 0x81:
          uVar31 = puVar33[10];
          if (puVar10[2] == 0x7e) {
            local_c0 = (ushort *)0x0;
            uVar29 = 0;
            if (uVar31 != plVar30[10]) goto code_r0x00100630;
          }
          break;
        case 0x82:
          if (puVar10[2] == 0x7e) {
            uVar29 = (uint)(puVar33[10] == plVar30[10]);
code_r0x00104f0a:
            local_c0 = (ushort *)0x0;
            goto code_r0x00100630;
          }
          goto code_r0x00104f18;
        case 0x83:
          uVar31 = puVar33[10];
          goto code_r0x00104db6;
        case 0x84:
          uVar31 = puVar33[10];
          if ((puVar10[2] == 0x7e) && (uVar31 != plVar30[10])) {
            uVar29 = 0;
            local_c0 = (ushort *)0x0;
            goto code_r0x00100630;
          }
code_r0x00104db6:
          if (*(ulong *)(param_6 + 0xa8) < uVar31) {
            *(ulong *)(param_6 + 0xa8) = uVar31;
          }
          uVar31 = plVar30[10];
          puVar33[10] = uVar31;
joined_r0x00104993:
          if (uVar19 == 0x7c) goto code_r0x00104dd8;
          if (bVar18 != 0x79) goto code_r0x0010499e;
          goto code_r0x001049a8;
        case 0x85:
          goto code_r0x00104c52;
        case 0x86:
          uVar29 = func_0x0010f080(plVar30[10],puVar33[10],bVar36);
          if (uVar29 == 0) goto code_r0x00104f0a;
          puVar17 = (ushort *)*puVar33;
          if (*puVar17 == 0x7c) goto code_r0x00104dd8;
          bVar18 = *(byte *)((long)puVar33 + 0x49);
          uVar11 = (ulong)bVar18;
          goto joined_r0x00104ee8;
        case 0x87:
          if (((int)puVar33[0xe] == 0) && (puVar17[2] == 0)) {
            if (puVar33[0xf] != 0xffffffffffffffff) {
              local_d8 = (ulong *)(puVar33[0xf] + param_5[6]);
              plVar30 = (long *)((long)local_d8 - param_4);
              puVar33[0xf] = plVar30[0xf];
              goto code_r0x00104e4e;
            }
            goto LAB_00102cc0;
          }
        default:
          if (uVar19 == 0x7c) goto code_r0x00104dd8;
          if (bVar18 != 0x79) {
            if (plVar30 != (long *)0x0) goto code_r0x001049fa;
            goto code_r0x0010bab8;
          }
          goto code_r0x001049a8;
        case 0x89:
        case 0x8a:
        case 0x8e:
        case 0x8f:
          uVar27 = param_2[2];
          if ((uint)uVar27 != (uint)puVar33[0xe]) {
            lVar24 = *(long *)(param_6 + 0x78);
            uVar12 = (ulong)((uVar27 - 2) + (uint)uVar27);
            uVar31 = puVar33[10];
            *(uint *)((long)puVar33 + 0x74) = (uint)uVar27;
            puVar33[uVar12 + 0x11] = plVar30[10] - lVar24 >> 1;
            puVar33[uVar12 + 0x12] = (long)(uVar31 - lVar24) >> 1;
            if (puVar33[0x10] <= uVar12) {
              puVar33[0x10] = uVar12 + 2;
            }
            goto joined_r0x00104993;
          }
          plVar30 = (long *)((long)local_d8 - param_4);
code_r0x00104e4e:
          memcpy(puVar33 + 0x11,plVar30 + 0x11,puVar33[0x10] * 8);
          puVar33[0x10] = plVar30[0x10];
          puVar33[0xe] = plVar30[0xe];
          local_c0 = (ushort *)0x0;
          *puVar33 = *plVar30 + 4;
          goto code_r0x001005ba;
        }
        if (*(ulong *)(param_6 + 0xa8) < uVar31) {
          *(ulong *)(param_6 + 0xa8) = uVar31;
        }
        puVar33[10] = plVar30[10];
code_r0x00104c52:
        puVar33[4] = (long)puVar33 - (long)plVar30;
        psVar8 = (short *)(*plVar30 + (ulong)*(ushort *)(*plVar30 + 2) * 2);
        if (*psVar8 == 0x78) {
          do {
            psVar9 = psVar8;
            psVar8 = psVar9 + (ushort)psVar9[1];
          } while (psVar9[(ushort)psVar9[1]] == 0x78);
          *plVar30 = (long)psVar9;
          puVar17 = (ushort *)*puVar33;
          uVar19 = *puVar17;
        }
        if (uVar19 == 0x7c) {
code_r0x00104dd8:
          uVar29 = 0xfffffc1a;
          memcpy(plVar30 + 10,puVar33 + 10,param_4 - 0x50);
          local_c0 = (ushort *)0x0;
          goto code_r0x00100630;
        }
joined_r0x00104ee8:
        if (bVar18 != 0x79) {
code_r0x001049fa:
          uVar31 = puVar33[10];
code_r0x0010499e:
          if (uVar31 != plVar30[10]) {
code_r0x0010bab8:
            if ((char)uVar11 == '{') {
              *(undefined1 *)(puVar33 + 9) = 6;
              param_2 = puVar17 + 2;
              local_c0 = (ushort *)0x0;
              uVar29 = 0;
            }
            else {
              *(undefined1 *)(puVar33 + 9) = 7;
              uVar29 = 0;
              local_c0 = (ushort *)0x0;
            }
            goto code_r0x00101cc8;
          }
        }
code_r0x001049a8:
        local_c0 = (ushort *)0x0;
code_r0x00101029:
        *puVar33 = *puVar33 + 4;
        goto code_r0x001005ba;
      case 0x7d:
        uVar11 = (ulong)puVar17[1];
        if (uVar25 == 0) {
          if ((long)(puVar33[10] - *(long *)(param_6 + 0x78)) >> 1 < (long)uVar11) break;
          puVar33[10] = puVar33[10] + uVar11 * -2;
        }
        else if (puVar17[1] != 0) {
          uVar31 = *(ulong *)(param_6 + 0x80);
          do {
            uVar12 = puVar33[10];
            if (uVar12 <= uVar31) goto code_r0x00100620;
            uVar23 = uVar12 - 4;
            if ((*(ushort *)(uVar12 - 2) & 0xfc00) != 0xdc00) {
              uVar23 = uVar12 - 2;
            }
            puVar33[10] = uVar23;
            uVar29 = (int)uVar11 - 1;
            uVar11 = (ulong)uVar29;
          } while (uVar29 != 0);
        }
        if (puVar33[10] < *(ulong *)(param_6 + 0xa0)) {
          *(ulong *)(param_6 + 0xa0) = puVar33[10];
        }
        goto code_r0x00103a9f;
      case 0x7e:
        uVar19 = puVar17[1];
        uVar27 = puVar17[2];
        uVar11 = puVar33[10];
        *(uint *)(puVar33 + 7) = (uint)uVar19;
        *(uint *)((long)puVar33 + 0x3c) = (uint)uVar27;
        puVar33[1] = uVar11;
        if (uVar25 == 0) {
          lVar24 = uVar11 - *(long *)(param_6 + 0x78);
          if (lVar24 < 0x1ffff) {
            lVar24 = lVar24 >> 1;
            if (lVar24 < 0) {
              lVar24 = 0;
            }
            uVar29 = (uint)lVar24;
            if (uVar29 < uVar19) break;
            if (uVar29 < uVar27) {
              *(uint *)((long)puVar33 + 0x3c) = uVar29;
            }
          }
          puVar33[10] = uVar11 + (ulong)*(uint *)((long)puVar33 + 0x3c) * -2;
        }
        else if (uVar27 != 0) {
          uVar31 = *(ulong *)(param_6 + 0x78);
          uVar29 = 0;
          while (uVar11 != uVar31) {
            puVar17 = (ushort *)(uVar11 - 2);
            uVar12 = uVar11 - 2;
            uVar11 = uVar11 - 4;
            if ((*puVar17 & 0xfc00) != 0xdc00) {
              uVar11 = uVar12;
            }
            uVar29 = uVar29 + 1;
            puVar33[10] = uVar11;
            if (uVar27 == uVar29) goto code_r0x001047ba;
          }
          if (uVar29 < uVar19) break;
          *(uint *)((long)puVar33 + 0x3c) = uVar29;
        }
code_r0x001047ba:
        *(undefined1 *)(puVar33 + 9) = 0x25;
        uVar29 = 0;
        param_2 = (ushort *)(*puVar33 + 6);
        puVar22 = puVar33;
        goto code_r0x00101cc8;
      case 0x7f:
      case 0x81:
      case 0x83:
      case 0x84:
        *(uint *)(puVar33 + 7) = bVar18 | 0x20000;
code_r0x00101ca3:
        uVar29 = (uint)puVar33[7];
        uVar19 = *(ushort *)*puVar33;
        *(undefined1 *)(puVar33 + 9) = 3;
        param_2 = (ushort *)*puVar33 + (byte)(&_pcre2_OP_lengths_16)[uVar19];
        puVar22 = puVar33;
        goto code_r0x00101cc8;
      case 0x80:
      case 0x82:
        *(uint *)(puVar33 + 7) = bVar18 | 0x20000;
code_r0x0010353f:
        uVar29 = (uint)puVar33[7];
        uVar19 = *(ushort *)*puVar33;
        *(undefined1 *)(puVar33 + 9) = 4;
        param_2 = (ushort *)*puVar33 + (byte)(&_pcre2_OP_lengths_16)[uVar19];
        puVar22 = puVar33;
        goto code_r0x00101cc8;
      case 0x85:
      case 0x86:
      case 0x8c:
        *(uint *)(puVar33 + 7) = bVar18 | 0x20000;
        goto code_r0x00103240;
      case 0x87:
        if ((*(int *)(param_6 + 0x2c) != 0) || ((int)puVar33[6] == 0)) {
          *(undefined4 *)(puVar33 + 7) = 0;
          goto code_r0x00103240;
        }
code_r0x00104065:
        puVar17 = (ushort *)*puVar33;
        uVar19 = puVar17[puVar17[1]];
        puVar33[1] = (ulong)(puVar17 + puVar17[1]);
        if (uVar19 != 0x78) {
          uVar11 = (ulong)*puVar17;
          goto code_r0x0010401b;
        }
        uVar19 = *puVar17;
        *(undefined1 *)(puVar33 + 9) = 1;
        uVar29 = 0;
        param_2 = puVar17 + (byte)(&_pcre2_OP_lengths_16)[uVar19];
        puVar22 = puVar33;
        goto code_r0x00101cc8;
      case 0x88:
      case 0x8d:
        *(undefined4 *)(puVar33 + 8) = 0;
        goto code_r0x001032b7;
      case 0x89:
      case 0x8e:
        *(uint *)(puVar33 + 7) = puVar17[2] | 0x10000;
code_r0x00103240:
        uVar29 = (uint)puVar33[7];
        uVar19 = *(ushort *)*puVar33;
        *(undefined1 *)(puVar33 + 9) = 2;
        param_2 = (ushort *)*puVar33 + (byte)(&_pcre2_OP_lengths_16)[uVar19];
        puVar22 = puVar33;
        goto code_r0x00101cc8;
      case 0x8a:
      case 0x8f:
        *(undefined4 *)(puVar33 + 8) = 0;
        puVar15 = puVar17;
code_r0x0010328d:
        uVar29 = puVar15[2] | 0x10000;
        puVar17 = puVar15;
        goto code_r0x00103297;
      case 0x8b:
      case 0x90:
        uVar11 = (ulong)puVar17[1];
        uVar19 = puVar17[uVar11];
        puVar33[3] = uVar11;
        if (uVar19 != 0x78) {
          puVar33[3] = uVar11 - 2;
        }
        uVar19 = puVar17[2];
        *puVar33 = (ulong)(puVar17 + 2);
        if ((ushort)(uVar19 - 0x76) < 2) {
          uVar29 = do_callout(puVar33,param_6,&lStack_50);
          if (0 < (int)uVar29) break;
          if (uVar29 != 0) goto code_r0x00100630;
          puVar33[3] = puVar33[3] - lStack_50;
          *puVar33 = *puVar33 + lStack_50 * 2;
        }
        param_2 = (ushort *)*puVar33;
        uVar19 = *param_2;
        switch(uVar19) {
        case 0x91:
          uVar11 = (ulong)(int)((param_2[1] - 2) + (uint)param_2[1]);
          if ((uVar11 < puVar33[0x10]) && (puVar33[uVar11 + 0x11] != 0xffffffffffffffff))
          goto code_r0x00101da4;
          break;
        case 0x92:
          uVar29 = (uint)param_2[2];
          puVar17 = (ushort *)
                    (*(long *)(param_6 + 0x68) +
                    (long)(int)((uint)param_2[1] * (uint)*(ushort *)(param_6 + 0x66)) * 2);
          if (param_2[2] != 0) {
            do {
              uVar11 = (ulong)(int)((*puVar17 - 2) + (uint)*puVar17);
              if ((uVar11 < puVar33[0x10]) && (puVar33[uVar11 + 0x11] != 0xffffffffffffffff))
              goto code_r0x00101da4;
              puVar17 = puVar17 + *(ushort *)(param_6 + 0x66);
              uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
          }
          break;
        case 0x93:
          if (((uint)puVar33[0xe] != 0xffffffff) &&
             (((uint)puVar33[0xe] == (uint)param_2[1] || (param_2[1] == 0xffff))))
          goto code_r0x00101da4;
          break;
        case 0x94:
          if ((uint)puVar33[0xe] != 0xffffffff) {
            uVar29 = (uint)param_2[2];
            puVar17 = (ushort *)
                      (*(long *)(param_6 + 0x68) +
                      (long)(int)((uint)param_2[1] * (uint)*(ushort *)(param_6 + 0x66)) * 2);
            if (param_2[2] != 0) {
              do {
                if ((uint)puVar33[0xe] == (uint)*puVar17) goto code_r0x00101da1;
                puVar17 = puVar17 + (uint)*(ushort *)(param_6 + 0x66);
                uVar29 = uVar29 - 1;
              } while (uVar29 != 0);
            }
          }
          break;
        case 0x95:
        case 0xa3:
          break;
        case 0x96:
code_r0x00101da4:
          uVar11 = (ulong)(byte)(&_pcre2_OP_lengths_16)[*param_2];
          goto code_r0x00100fa0;
        default:
          puVar33[1] = (ulong)param_2;
          *(uint *)(puVar33 + 7) = (uint)((uVar19 - 0x7f & 0xfffd) == 0);
code_r0x001048d8:
          uVar19 = *(ushort *)puVar33[1];
          uVar29 = *(ushort *)*puVar33 | 0x30000;
          *(undefined1 *)(puVar33 + 9) = 5;
          param_2 = (ushort *)puVar33[1] + (byte)(&_pcre2_OP_lengths_16)[uVar19];
          puVar22 = puVar33;
          goto code_r0x00101cc8;
        }
code_r0x00100f99:
        uVar11 = puVar33[3];
code_r0x00100fa0:
        param_2 = param_2 + uVar11;
        *puVar33 = (ulong)param_2;
        if (*(char *)((long)puVar33 + 0x49) == -0x70) {
          *(undefined1 *)(puVar33 + 9) = 0x23;
          uVar29 = 0x20090;
          puVar22 = puVar33;
          goto code_r0x00101cc8;
        }
        goto code_r0x001005ba;
      case 0x97:
        param_2 = puVar17 + 1;
        *(undefined1 *)(puVar33 + 9) = 9;
        puVar33[1] = (ulong)param_2;
        uVar29 = 0;
        goto code_r0x00101cc8;
      case 0x98:
        puVar17 = puVar17 + 1;
        do {
          puVar17 = puVar17 + puVar17[1];
        } while (*puVar17 == 0x78);
        puVar33[1] = (ulong)puVar17;
        param_2 = puVar17 + 2;
        uVar29 = 0;
        *(undefined1 *)(puVar33 + 9) = 10;
        goto code_r0x00101cc8;
      case 0x99:
        puVar15 = puVar17 + 1;
        uVar19 = puVar17[1];
        *(undefined4 *)(puVar33 + 8) = 1;
        *puVar33 = (ulong)puVar15;
        if ((uVar19 == 0x8a) || (puVar17 = puVar15, uVar19 == 0x8f)) goto code_r0x0010328d;
code_r0x001032b7:
        uVar29 = 0x20000;
code_r0x00103297:
        *(uint *)(puVar33 + 7) = uVar29;
        *(undefined4 *)((long)puVar33 + 0x3c) = 0;
        puVar33[2] = (ulong)puVar17;
code_r0x00101e04:
        uVar29 = (uint)puVar33[7];
        puVar33[1] = puVar33[10];
        uVar19 = *(ushort *)*puVar33;
        *(undefined1 *)(puVar33 + 9) = 8;
        param_2 = (ushort *)*puVar33 + (byte)(&_pcre2_OP_lengths_16)[uVar19];
        puVar22 = puVar33;
        goto code_r0x00101cc8;
      case 0x9a:
        uVar29 = 0;
        *(ushort **)(param_6 + 0xb8) = puVar17 + 2;
        puVar33[0xc] = (ulong)(puVar17 + 2);
        bVar18 = (&_pcre2_OP_lengths_16)[uVar11];
        uVar19 = puVar17[1];
        *(undefined1 *)(puVar33 + 9) = 0xc;
        param_2 = puVar17 + (ulong)bVar18 + (ulong)uVar19;
        goto code_r0x00101cc8;
      case 0x9b:
        uVar29 = 0;
        bVar18 = (&_pcre2_OP_lengths_16)[uVar11];
        *(undefined1 *)(puVar33 + 9) = 0xe;
        param_2 = puVar17 + bVar18;
        goto code_r0x00101cc8;
      case 0x9c:
        uVar29 = 0;
        *(ushort **)(param_6 + 0xb8) = puVar17 + 2;
        puVar33[0xc] = (ulong)(puVar17 + 2);
        bVar18 = (&_pcre2_OP_lengths_16)[uVar11];
        uVar19 = puVar17[1];
        *(undefined1 *)(puVar33 + 9) = 0xf;
        param_2 = puVar17 + (ulong)bVar18 + (ulong)uVar19;
        goto code_r0x00101cc8;
      case 0x9d:
        uVar29 = 0;
        bVar18 = (&_pcre2_OP_lengths_16)[uVar11];
        *(undefined1 *)(puVar33 + 9) = 0x10;
        param_2 = puVar17 + bVar18;
        goto code_r0x00101cc8;
      case 0x9e:
        uVar29 = *(int *)(param_6 + 0xdc) + 1;
        *(uint *)(param_6 + 0xdc) = uVar29;
        if (uVar29 <= *(uint *)(param_6 + 0xe0)) {
          puVar17 = puVar17 + (int)((uint)(byte)(&_pcre2_OP_lengths_16)[uVar11] + (uint)puVar17[1]);
          goto code_r0x00103dbd;
        }
        uVar29 = 0;
        bVar18 = (&_pcre2_OP_lengths_16)[uVar11];
        uVar19 = puVar17[1];
        *(undefined1 *)(puVar33 + 9) = 0x11;
        param_2 = puVar17 + (ulong)bVar18 + (ulong)uVar19;
        goto code_r0x00101cc8;
      case 0x9f:
        uVar29 = 0;
        bVar18 = (&_pcre2_OP_lengths_16)[uVar11];
        *(undefined1 *)(puVar33 + 9) = 0x12;
        param_2 = puVar17 + bVar18;
        goto code_r0x00101cc8;
      case 0xa0:
        uVar29 = 0;
        *(ushort **)(param_6 + 0xb8) = puVar17 + 2;
        puVar33[0xc] = (ulong)(puVar17 + 2);
        bVar18 = (&_pcre2_OP_lengths_16)[uVar11];
        uVar19 = puVar17[1];
        *(undefined1 *)(puVar33 + 9) = 0x13;
        param_2 = puVar17 + (ulong)bVar18 + (ulong)uVar19;
        goto code_r0x00101cc8;
      case 0xa1:
        uVar29 = 0;
        bVar18 = (&_pcre2_OP_lengths_16)[uVar11];
        *(undefined1 *)(puVar33 + 9) = 0xd;
        param_2 = puVar17 + bVar18;
        goto code_r0x00101cc8;
      case 0xa2:
        uVar29 = 0;
        *(ushort **)(param_6 + 0xb8) = puVar17 + 2;
        puVar33[0xc] = (ulong)(puVar17 + 2);
        bVar18 = (&_pcre2_OP_lengths_16)[uVar11];
        uVar19 = puVar17[1];
        *(undefined1 *)(puVar33 + 9) = 0x24;
        param_2 = puVar17 + (ulong)bVar18 + (ulong)uVar19;
        goto code_r0x00101cc8;
      case 0xa3:
        break;
      case 0xa4:
        if ((int)puVar33[0xe] == -1) goto code_r0x00101e70;
        uVar11 = puVar33[0xf];
        if (uVar11 == 0xffffffffffffffff) goto LAB_00102cc0;
        while( true ) {
          local_d8 = (ulong *)(uVar11 + param_5[6]);
          puVar22 = (ulong *)((long)local_d8 - param_4);
          if (*(uint *)((long)local_d8 + 0x34) >> 0x10 == 4) break;
          uVar11 = puVar22[0xf];
          if (uVar11 == 0xffffffffffffffff) goto LAB_00102cc0;
        }
        uVar31 = puVar33[10];
        uVar12 = puVar33[0xb];
        uVar11 = puVar33[0xc];
        *puVar22 = *puVar22 + 4;
        puVar22[10] = uVar31;
        puVar22[0xb] = uVar12;
        puVar22[0xc] = uVar11;
        puVar33 = puVar22;
        goto code_r0x001005ba;
      case 0xa5:
        if (*(ulong *)(param_6 + 0xa8) < puVar33[10]) {
          *(ulong *)(param_6 + 0xa8) = puVar33[10];
        }
        uVar29 = 0xfffffc19;
        local_b8 = puVar33;
        goto code_r0x00100630;
      case 0xa6:
        if ((int)puVar33[0xe] == -1) {
          uVar31 = puVar33[0xf];
          uVar19 = puVar17[1];
          if (uVar31 == 0xffffffffffffffff) goto LAB_00102cc0;
          while (local_d8 = (ulong *)(uVar31 + param_5[6]),
                *(uint *)((long)local_d8 + 0x34) != (uVar19 | 0x10000)) {
            uVar31 = *(ulong *)((long)local_d8 + (0x78 - param_4));
            if (uVar31 == 0xffffffffffffffff) goto LAB_00102cc0;
          }
          *(uint *)((long)puVar33 + 0x74) = (uint)uVar19;
          uVar31 = (ulong)((uVar19 - 2) + (uint)uVar19);
          lVar24 = *(long *)(param_6 + 0x78);
          puVar33[uVar31 + 0x11] = *(long *)((long)local_d8 + (0x50 - param_4)) - lVar24 >> 1;
          puVar33[uVar31 + 0x12] = (long)(puVar33[10] - lVar24) >> 1;
          if (puVar33[0x10] <= uVar31) {
            puVar33[0x10] = uVar31 + 2;
          }
        }
code_r0x0010401b:
        *puVar33 = (ulong)(puVar17 + (byte)(&_pcre2_OP_lengths_16)[uVar11]);
        goto code_r0x001005ba;
      case 0xa7:
        puVar17 = puVar17 + 1;
        do {
          puVar17 = puVar17 + puVar17[1];
        } while (*puVar17 == 0x78);
code_r0x00103a9f:
        *puVar33 = (ulong)(puVar17 + 2);
        goto code_r0x001005ba;
      }
      goto code_r0x00100620;
    }
    uVar29 = 0xffffffcb;
  }
  else {
    uVar29 = 0xffffffd1;
  }
  goto LAB_00101d0c;
code_r0x00104f18:
  local_c0 = (ushort *)0x0;
  uVar29 = 1;
  goto code_r0x00100630;
  while (uVar31 = *(ulong *)(lVar24 + 0x78), uVar31 != 0xffffffffffffffff) {
code_r0x00104584:
    lVar24 = (uVar31 + param_5[6]) - param_4;
    if (*(uint *)(uVar31 + param_5[6] + 0x34) == (uVar29 | 0x40000)) {
      if (puVar33[10] == *(ulong *)(lVar24 + 0x50)) {
        uVar31 = *(ulong *)(param_6 + 0xa8);
        if ((uVar31 != *(ulong *)(lVar24 + 0x68)) || ((*(byte *)(param_6 + 0xd6) & 4) != 0))
        goto code_r0x001045ab;
        uVar29 = 0xffffffcc;
        goto LAB_00101d0c;
      }
      break;
    }
  }
code_r0x001045a0:
  uVar31 = *(ulong *)(param_6 + 0xa8);
code_r0x001045ab:
  puVar33[0xd] = uVar31;
  puVar33[1] = uVar11;
  *(uint *)(puVar33 + 7) = uVar29 | 0x40000;
code_r0x00100e40:
  uVar29 = (uint)puVar33[7];
  uVar19 = *(ushort *)puVar33[1];
  *(undefined1 *)(puVar33 + 9) = 0xb;
  param_2 = (ushort *)puVar33[1] + (byte)(&_pcre2_OP_lengths_16)[uVar19];
  puVar22 = puVar33;
code_r0x00101cc8:
  puVar33 = (ulong *)((long)puVar22 + param_4);
  if (param_4 + (long)puVar33 < local_e0) {
code_r0x00105227:
    memcpy(puVar33 + 10,puVar22 + 10,param_4 - 0x50);
    *(int *)(puVar33 + 6) = (int)puVar22[6] + 1;
    local_d8 = puVar33;
    goto code_r0x00100550;
  }
  uVar11 = param_5[7];
  sVar34 = (long)puVar33 - param_5[6];
  if (uVar11 < 0x7fffffffffffffff) {
    uVar31 = uVar11 * 2;
    uVar12 = (ulong)*(uint *)(param_6 + 0x18);
    if (uVar12 <= uVar31 >> 10) {
      if (uVar12 <= uVar11 >> 10) goto code_r0x00101d06;
      lVar24 = (uVar12 - (uVar11 >> 10)) * 0x400;
      if ((uVar11 & 0x3ff) != 0) {
        lVar24 = lVar24 - (int)(0x400 - ((uint)uVar11 & 0x3ff));
      }
      uVar31 = uVar11 + lVar24;
    }
    if (param_4 <= uVar31 - sVar34) {
      pvVar13 = (void *)(*(code *)*param_5)(uVar31,param_5[2]);
      if (pvVar13 == (void *)0x0) goto code_r0x001097b0;
      pvVar13 = memcpy(pvVar13,(void *)param_5[6],sVar34);
      puVar33 = (ulong *)(sVar34 + (long)pvVar13);
      puVar22 = (ulong *)((long)puVar33 - param_4);
      (*(code *)param_5[1])(param_5[6],param_5[2]);
      local_e0 = (long)pvVar13 + uVar31;
      param_5[6] = pvVar13;
      param_5[7] = uVar31;
      goto code_r0x00105227;
    }
  }
  else if (uVar11 == 0xfffffffffffffffe) {
code_r0x001097b0:
    uVar29 = 0xffffffd0;
LAB_00101d0c:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar29;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
code_r0x00101d06:
  uVar29 = 0xffffffc1;
  goto LAB_00101d0c;
code_r0x00109996:
  sVar4 = *(short *)(param_6 + 0x60);
  if ((sVar4 != 0) && ((*(ushort **)(param_6 + 0xa0) < puVar10 || (*(int *)(param_6 + 0x30) != 0))))
  {
    *(undefined4 *)(param_6 + 0x28) = 1;
    goto joined_r0x001099c4;
  }
code_r0x00100620:
  uVar29 = 0;
code_r0x00100630:
  if (*(ulong *)(param_6 + 0xa8) < puVar33[10]) {
    *(ulong *)(param_6 + 0xa8) = puVar33[10];
  }
  if ((int)puVar33[6] == 0) goto LAB_00101d0c;
  puVar33 = (ulong *)((long)puVar33 - puVar33[4]);
  puVar16 = (uint *)(*(long *)(param_6 + 0xf8) + 0x68);
  *puVar16 = *puVar16 | 2;
  switch((char)puVar33[9]) {
  default:
    goto LAB_00102cc0;
  case '\x01':
    if (uVar29 == 0) {
      *puVar33 = puVar33[1];
      goto code_r0x00104065;
    }
    goto code_r0x00100630;
  case '\x02':
    if (uVar29 == 0xfffffc1f) {
      psVar9 = (short *)*puVar33;
      psVar8 = psVar9 + (ushort)psVar9[1];
      if (*(short **)(param_6 + 0xc0) < psVar8) {
        if (*psVar9 == 0x78) goto code_r0x00101091;
        if (*psVar8 != 0x78) goto code_r0x001006aa;
        *puVar33 = (ulong)psVar8;
        goto code_r0x00103240;
      }
      goto code_r0x001006aa;
    }
    if (uVar29 != 0) goto code_r0x00100630;
    psVar9 = (short *)*puVar33;
code_r0x00101091:
    sVar4 = psVar9[(ushort)psVar9[1]];
    *puVar33 = (ulong)(psVar9 + (ushort)psVar9[1]);
    if (sVar4 == 0x78) goto code_r0x00103240;
    break;
  case '\x03':
    if (uVar29 == 0xfffffc19) {
      memcpy(puVar33 + 0x11,local_b8 + 0x11,local_b8[0x10] * 8);
      puVar33[0x10] = local_b8[0x10];
      puVar33[0xc] = local_b8[0xc];
      puVar17 = (ushort *)*puVar33;
      do {
        puVar17 = puVar17 + puVar17[1];
      } while (*puVar17 == 0x78);
      goto code_r0x00103a9f;
    }
    if ((uVar29 == 0) || (uVar29 == 0xfffffc1f)) {
      psVar8 = (short *)(*puVar33 + (ulong)*(ushort *)(*puVar33 + 2) * 2);
      sVar4 = *psVar8;
      *puVar33 = (ulong)psVar8;
      if (sVar4 != 0x78) break;
      goto code_r0x00101ca3;
    }
    goto code_r0x00100630;
  case '\x04':
    if (uVar29 == 0xfffffc1f) {
code_r0x00102017:
      psVar8 = (short *)(*puVar33 + (ulong)*(ushort *)(*puVar33 + 2) * 2);
      sVar4 = *psVar8;
      *puVar33 = (ulong)psVar8;
      if (sVar4 != 0x78) goto code_r0x00101029;
      goto code_r0x0010353f;
    }
    if ((int)uVar29 < -0x3e0) {
      if (uVar29 != 0xfffffc19) {
        if ((-1000 < (int)uVar29) && (uVar29 + 0x3e5 < 3)) {
          psVar8 = (short *)*puVar33;
          do {
            psVar8 = psVar8 + (ushort)psVar8[1];
          } while (*psVar8 == 0x78);
          goto code_r0x00101026;
        }
        goto code_r0x00100630;
      }
    }
    else {
      if (uVar29 == 0) goto code_r0x00102017;
      if (uVar29 != 1) goto code_r0x00100630;
    }
    break;
  case '\x05':
    if (uVar29 == 0xfffffc1f) {
code_r0x00102bd0:
      psVar8 = (short *)(puVar33[1] + (ulong)*(ushort *)(puVar33[1] + 2) * 2);
      sVar4 = *psVar8;
      puVar33[1] = (ulong)psVar8;
      if (sVar4 == 0x78) goto code_r0x001048d8;
code_r0x00100f89:
      iVar5 = (int)puVar33[7];
    }
    else {
      if ((int)uVar29 < -0x3e0) {
        if (uVar29 != 0xfffffc19) {
          if ((-1000 < (int)uVar29) && (uVar29 + 0x3e5 < 3)) goto code_r0x00100f89;
          goto code_r0x00100630;
        }
        memcpy(puVar33 + 0x11,local_b8 + 0x11,local_b8[0x10] * 8);
        puVar33[0x10] = local_b8[0x10];
      }
      else {
        if (uVar29 == 0) goto code_r0x00102bd0;
        if (uVar29 != 1) goto code_r0x00100630;
      }
      iVar5 = (int)puVar33[7];
    }
    if (iVar5 == 0) {
      psVar8 = (short *)*puVar33;
      do {
        psVar8 = psVar8 + (ushort)psVar8[1];
      } while (*psVar8 == 0x78);
      *puVar33 = (ulong)psVar8;
code_r0x00101da1:
      param_2 = (ushort *)*puVar33;
      goto code_r0x00101da4;
    }
    param_2 = (ushort *)*puVar33;
    goto code_r0x00100f99;
  case '\x06':
    if (uVar29 == 0) {
      *puVar33 = *puVar33 + (ulong)*(ushort *)(*puVar33 + 2) * -2;
      goto code_r0x001005ba;
    }
    goto code_r0x00100630;
  case '\a':
    if (uVar29 == 0) goto code_r0x00101029;
    goto code_r0x00100630;
  case '\b':
    if (uVar29 == 0xfffffc1a) {
      *(undefined4 *)((long)puVar33 + 0x3c) = 1;
      if (puVar33[10] == puVar33[1]) {
        psVar8 = (short *)*puVar33;
        do {
          psVar8 = psVar8 + (ushort)psVar8[1];
        } while (*psVar8 == 0x78);
code_r0x00101026:
        *puVar33 = (ulong)psVar8;
        goto code_r0x00101029;
      }
      *puVar33 = puVar33[2];
      goto code_r0x00101e04;
    }
    if (uVar29 != 0xfffffc1f) {
      if (uVar29 == 0) {
        psVar8 = (short *)*puVar33;
code_r0x00100ed6:
        sVar4 = psVar8[(ushort)psVar8[1]];
        *puVar33 = (ulong)(psVar8 + (ushort)psVar8[1]);
        if (sVar4 != 0x78) {
          if ((*(int *)((long)puVar33 + 0x3c) == 0) && ((int)puVar33[8] == 0)) break;
          goto code_r0x00101029;
        }
        goto code_r0x00101e04;
      }
      goto code_r0x00100630;
    }
    psVar8 = (short *)*puVar33;
    psVar9 = psVar8 + (ushort)psVar8[1];
    if (*(short **)(param_6 + 0xc0) < psVar9) {
      if (*psVar8 == 0x78) goto code_r0x00100ed6;
      if (*psVar9 != 0x78) goto code_r0x001006aa;
      *puVar33 = (ulong)psVar9;
      goto code_r0x00101e04;
    }
    goto code_r0x001006aa;
  case '\t':
    if (uVar29 != 0) goto code_r0x00100630;
    psVar8 = (short *)puVar33[1];
    do {
      psVar8 = psVar8 + (ushort)psVar8[1];
    } while (*psVar8 == 0x78);
    puVar33[1] = (ulong)psVar8;
    *puVar33 = (ulong)(psVar8 + 2);
    goto code_r0x001005ba;
  case '\n':
    if (uVar29 == 0) goto code_r0x001038fa;
    goto code_r0x00100630;
  case '\v':
    psVar9 = (short *)puVar33[1];
    psVar8 = psVar9 + (ushort)psVar9[1];
    if (uVar29 + 0x3e5 < 5) {
      if (*(uint *)(param_6 + 0xd0) != ((uint)puVar33[7] ^ 0x40000)) goto code_r0x00100630;
      if ((uVar29 == 0xfffffc1f) && (*(short **)(param_6 + 0xc0) < psVar8)) {
        if (*psVar9 == 0x78) goto code_r0x00101d41;
        if (*psVar8 == 0x78) {
          puVar33[1] = (ulong)psVar8;
          goto code_r0x00100e40;
        }
      }
    }
    else {
      if (uVar29 != 0) goto code_r0x00100630;
code_r0x00101d41:
      sVar4 = *psVar8;
      puVar33[1] = (ulong)psVar8;
      if (sVar4 == 0x78) goto code_r0x00100e40;
    }
    break;
  case '\f':
    if (uVar29 == 0xfffffc1e) {
      iVar5 = func_0x0010f030(*puVar33 + 4,*(undefined8 *)(param_6 + 200));
      if (iVar5 != 0) goto code_r0x00100759;
      *(ulong *)(param_6 + 200) = puVar33[10];
      goto code_r0x00100782;
    }
    goto code_r0x00100630;
  case '\r':
  case '$':
    if (uVar29 == 0) {
      uVar29 = 0xfffffc1b;
      *(int *)(param_6 + 0xd0) = (int)puVar33[0xe];
    }
    goto code_r0x00100630;
  case '\x0e':
  case '\x0f':
    if (uVar29 == 0) {
      uVar29 = 0xfffffc1c;
      *(int *)(param_6 + 0xd0) = (int)puVar33[0xe];
    }
    goto code_r0x00100630;
  case '\x10':
    if (uVar29 == 0) {
      *(ulong *)(param_6 + 200) = puVar33[10];
      *(int *)(param_6 + 0xd0) = (int)puVar33[0xe];
code_r0x00100782:
      uVar29 = 0xfffffc1d;
    }
    goto code_r0x00100630;
  case '\x11':
    if (uVar29 == 0) {
      *(ulong *)(param_6 + 200) = *puVar33 + 4;
      *(int *)(param_6 + 0xd0) = (int)puVar33[0xe];
code_r0x00100759:
      uVar29 = 0xfffffc1e;
    }
    goto code_r0x00100630;
  case '\x12':
  case '\x13':
    if (uVar29 != 0) goto code_r0x00100630;
    *(ulong *)(param_6 + 0xc0) = *puVar33;
    *(int *)(param_6 + 0xd0) = (int)puVar33[0xe];
code_r0x001006aa:
    uVar29 = 0xfffffc1f;
    goto code_r0x00100630;
  case '\x14':
    if ((uVar29 == 0) &&
       (uVar11 = puVar33[7], *(uint *)(puVar33 + 7) = (uint)uVar11 + 1,
       (uint)uVar11 < *(uint *)((long)puVar33 + 0x3c))) {
      iVar5 = match_ref(puVar33[5],(int)puVar33[8],puVar33,param_6);
      if (iVar5 == 0) {
        puVar33[10] = puVar33[10] + uStack_48 * 2;
        goto code_r0x0010b27a;
      }
      if (iVar5 < 1) {
        uVar11 = puVar33[10];
        if (uVar11 < *(ulong *)(param_6 + 0x88)) goto code_r0x00100630;
      }
      else {
        uVar11 = *(ulong *)(param_6 + 0x88);
        puVar33[10] = uVar11;
      }
      if ((*(short *)(param_6 + 0x60) != 0) &&
         (((*(ulong *)(param_6 + 0xa0) < uVar11 || (*(int *)(param_6 + 0x30) != 0)) &&
          (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
      goto code_r0x00102f0a;
    }
    goto code_r0x00100630;
  case '\x15':
    if (uVar29 == 0) {
      puVar33[10] = puVar33[10] + puVar33[3] * -2;
code_r0x001009a7:
      uVar29 = 0;
      if (puVar33[1] <= puVar33[10]) goto code_r0x001009b8;
    }
    goto code_r0x00100630;
  case '\x16':
    if (uVar29 != 0) goto code_r0x00100630;
    if (puVar33[10] != puVar33[1]) {
      puVar33[10] = puVar33[1];
      uVar32 = (uint)puVar33[7];
      uVar29 = *(int *)((long)puVar33 + 0x3c) - 1;
      *(uint *)((long)puVar33 + 0x3c) = uVar29;
      if (uVar32 < uVar29) {
        do {
          uVar32 = uVar32 + 1;
          match_ref(puVar33[5],(int)puVar33[8],puVar33,param_6);
          puVar33[10] = puVar33[10] + uStack_48 * 2;
        } while (uVar29 != uVar32);
      }
      goto code_r0x00109f38;
    }
    break;
  case '\x17':
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        if (uVar19 < 0x100) {
          if ((*(byte *)(puVar33[2] + (ulong)(uVar19 >> 3)) >> (uVar19 & 7) & 1) != 0)
          goto code_r0x0010244a;
        }
        else if (*(char *)((long)puVar33 + 0x49) != 'n') goto code_r0x0010244a;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x00100d95:
          if (sVar4 != 1) goto code_r0x00102f0a;
        }
      }
    }
    break;
  case '\x18':
    if (uVar29 == 0) {
      puVar33[10] = puVar33[10] - 2;
code_r0x00100c21:
      uVar29 = 0;
      if (puVar33[1] <= puVar33[10]) goto code_r0x00100c32;
    }
    goto code_r0x00100630;
  case '\x19':
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        if (((uint)*puVar17 == (uint)puVar33[8]) ||
           ((uint)*puVar17 == *(uint *)((long)puVar33 + 0x44))) {
          puVar33[10] = (ulong)(puVar17 + 1);
          goto code_r0x00102a89;
        }
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case '\x1a':
    puVar33[10] = puVar33[10] - 2;
    if (uVar29 == 0) goto code_r0x00100b81;
    goto code_r0x00100630;
  case '\x1b':
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        uVar19 = *puVar17;
        puVar33[10] = (ulong)(puVar17 + 1);
        if ((uint)puVar33[8] == (uint)uVar19) goto code_r0x00102b08;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case '\x1c':
    puVar33[10] = puVar33[10] - 2;
    if (uVar29 == 0) goto code_r0x00100ae1;
    goto code_r0x00100630;
  case '\x1d':
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        if (((uint)puVar33[8] != (uint)*puVar17) &&
           ((uint)*puVar17 != *(uint *)((long)puVar33 + 0x44))) {
          puVar33[10] = (ulong)(puVar17 + 1);
          goto code_r0x0010294b;
        }
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case '\x1e':
    if (uVar29 == 0) {
      puVar33[10] = puVar33[10] - 2;
      goto code_r0x001008b1;
    }
    goto code_r0x00100630;
  case '\x1f':
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        uVar19 = *puVar17;
        puVar33[10] = (ulong)(puVar17 + 1);
        if ((uint)puVar33[8] != (uint)uVar19) goto code_r0x001027a8;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case ' ':
    if (uVar29 == 0) {
      puVar33[10] = puVar33[10] - 2;
      goto code_r0x00100809;
    }
    goto code_r0x00100630;
  case '!':
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if (*(uint *)((long)puVar33 + 0x3c) <= (uint)uVar11) break;
    puVar17 = (ushort *)puVar33[10];
    puVar15 = *(ushort **)(param_6 + 0x88);
    if (puVar17 < puVar15) {
      if ((int)puVar33[8] == 0xc) {
        if (*(int *)(param_6 + 0xe4) == 0) {
          if (((puVar15 + -(ulong)*(uint *)(param_6 + 0xe8) < puVar17) ||
              (*puVar17 != *(ushort *)(param_6 + 0xec))) ||
             ((*(uint *)(param_6 + 0xe8) != 1 && (puVar17[1] != *(ushort *)(param_6 + 0xee)))))
          goto code_r0x0010296b;
        }
        else {
          iVar5 = _pcre2_is_newline_16
                            (puVar17,*(int *)(param_6 + 0xe4),puVar15,param_6 + 0xe8,bVar36);
          if (iVar5 == 0) {
            puVar17 = (ushort *)puVar33[10];
            goto code_r0x0010296b;
          }
        }
        break;
      }
code_r0x0010296b:
      uVar19 = *puVar17;
      uVar11 = (ulong)uVar19;
      puVar15 = puVar17 + 1;
      puVar33[10] = (ulong)puVar15;
      switch((int)puVar33[8]) {
      case 6:
        if (uVar19 < 0x100) {
          bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 8;
joined_r0x001049c6:
          if (bVar18 != 0) break;
        }
        goto code_r0x001049cc;
      case 7:
        if (uVar19 < 0x100) {
          bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 8;
          goto joined_r0x001049c6;
        }
        break;
      case 8:
        if (uVar19 < 0x100) {
          bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 1;
          goto joined_r0x001049c6;
        }
        goto code_r0x001049cc;
      case 9:
        if (uVar19 < 0x100) {
          bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 1;
          goto joined_r0x001049c6;
        }
        break;
      case 10:
        if (uVar19 < 0x100) {
          bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 0x10;
          goto joined_r0x001049c6;
        }
        goto code_r0x001049cc;
      case 0xb:
        if (uVar19 < 0x100) {
          bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 0x10;
          goto joined_r0x001049c6;
        }
        break;
      case 0xc:
        if (((((*(short *)(param_6 + 0x60) == 0) || (puVar15 < *(ushort **)(param_6 + 0x88))) ||
             (*(int *)(param_6 + 0xe4) != 0)) ||
            ((*(int *)(param_6 + 0xe8) != 2 || (uVar19 != *(ushort *)(param_6 + 0xec))))) ||
           (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))
        goto code_r0x001049d2;
        goto code_r0x00102f0a;
      case 0xd:
      case 0xe:
        goto code_r0x001049cc;
      default:
        goto LAB_00102cc0;
      case 0x11:
        if (uVar19 == 0xd) {
          if ((puVar15 < *(ushort **)(param_6 + 0x88)) && (puVar17[1] == 10)) {
            puVar33[10] = (ulong)(puVar17 + 2);
          }
          goto code_r0x001049d2;
        }
        if (uVar19 < 0xe) {
          if (uVar19 == 10) goto code_r0x001049cc;
          uVar19 = uVar19 - 0xb;
joined_r0x0010b01e:
          if (1 < uVar19) break;
        }
        else if (uVar19 != 0x85) {
          uVar19 = uVar19 + 0xdfd8;
          goto joined_r0x0010b01e;
        }
        if (*(short *)(param_6 + 0x62) != 2) goto code_r0x001049cc;
        break;
      case 0x12:
        if (uVar19 != 0x180e) {
          if (uVar19 < 0x180f) {
            if (uVar19 != 0xa0) {
              if (uVar19 < 0xa1) {
                if ((uVar19 != 9) && (uVar19 != 0x20)) goto code_r0x001049cc;
              }
              else if (uVar19 != 0x1680) goto code_r0x001049cc;
            }
          }
          else if (uVar19 != 0x205f) {
            if (uVar19 < 0x2060) {
              if (uVar19 < 0x200b) {
                if (uVar19 < 0x2000) goto code_r0x001049cc;
              }
              else if (uVar19 != 0x202f) goto code_r0x001049cc;
            }
            else {
joined_r0x0010b4a1:
              if (uVar19 == 0x3000) goto code_r0x001049cc;
            }
          }
        }
        break;
      case 0x13:
        if (uVar19 != 0x180e) {
          if (uVar19 < 0x180f) {
            if (uVar19 != 0xa0) {
              if (uVar19 < 0xa1) {
                if ((uVar19 == 9) || (uVar19 == 0x20)) goto code_r0x001049cc;
              }
              else if (uVar19 == 0x1680) goto code_r0x001049cc;
              break;
            }
          }
          else if (uVar19 != 0x205f) {
            if (0x205f < uVar19) goto joined_r0x0010b4a1;
            if (uVar19 < 0x200b) {
              if (0x1fff < uVar19) goto code_r0x001049cc;
            }
            else if (uVar19 == 0x202f) goto code_r0x001049cc;
            break;
          }
        }
code_r0x001049cc:
        goto code_r0x001049d2;
      case 0x14:
        if (uVar19 != 0x85) {
          if (uVar19 < 0x86) {
            if (3 < (ushort)(uVar19 - 10)) goto code_r0x001049cc;
          }
          else if (1 < (ushort)(uVar19 + 0xdfd8)) goto code_r0x001049cc;
        }
        break;
      case 0x15:
        if (uVar19 == 0x85) goto code_r0x001049cc;
        if (uVar19 < 0x86) {
          if ((ushort)(uVar19 - 10) < 4) goto code_r0x001049cc;
        }
        else if ((ushort)(uVar19 + 0xdfd8) < 2) goto code_r0x001049cc;
      }
    }
    else {
      sVar4 = *(short *)(param_6 + 0x60);
      if ((sVar4 != 0) &&
         ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
        *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x00101330:
        if (sVar4 == 1) break;
        goto code_r0x00102f0a;
      }
    }
    break;
  case '\"':
    if (uVar29 == 0) {
      uVar11 = puVar33[10];
      puVar33[10] = uVar11 - 2;
      if (((int)puVar33[8] != 0x11) || (uVar11 - 2 <= puVar33[1])) goto code_r0x001008fb;
      if ((*(short *)(uVar11 - 2) != 10) || (*(short *)(uVar11 - 4) != 0xd)) goto code_r0x00100909;
      puVar33[10] = uVar11 - 4;
      goto code_r0x001008fb;
    }
  case '#':
    goto code_r0x00100630;
  case '%':
    if (uVar29 != 0) goto code_r0x00100630;
    uVar29 = *(uint *)((long)puVar33 + 0x3c);
    *(uint *)((long)puVar33 + 0x3c) = uVar29 - 1;
    if ((uint)puVar33[7] < uVar29) {
      uVar11 = puVar33[10];
      puVar33[10] = uVar11 + 2;
      if (((uVar25 != 0) && (uVar11 + 2 < *(ulong *)(param_6 + 0x88))) &&
         ((*(ushort *)(uVar11 + 2) & 0xfc00) == 0xdc00)) {
        puVar33[10] = uVar11 + 4;
      }
      goto code_r0x001047ba;
    }
    break;
  case 'd':
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        puVar33[10] = (ulong)(puVar17 + 1);
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        iVar5 = func_0x0010f050(uVar29,puVar33[2],bVar36);
        if (iVar5 != 0) goto code_r0x0010286d;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case 'e':
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[10];
    puVar33[10] = uVar11 - 2;
    if (puVar33[1] < uVar11) {
      if ((uVar25 != 0) && ((*(ushort *)(uVar11 - 2) & 0xfc00) == 0xdc00)) {
        puVar33[10] = uVar11 - 4;
      }
      goto code_r0x00101b94;
    }
    break;
  case -0x38:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        if ((uVar19 & 0xfc00) == 0xd800) {
          puVar33[10] = (ulong)(puVar17 + 2);
        }
        else if (uVar19 < 0x100) {
          if ((*(byte *)(puVar33[2] + (ulong)(uVar19 >> 3)) >> (uVar19 & 7) & 1) == 0) break;
          goto code_r0x001028c5;
        }
        if (*(char *)((long)puVar33 + 0x49) != 'n') goto code_r0x001028c5;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x37:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[10];
    puVar33[10] = uVar11 - 2;
    if (puVar33[1] < uVar11) {
      if ((*(ushort *)(uVar11 - 2) & 0xfc00) == 0xdc00) {
        puVar33[10] = uVar11 - 4;
      }
      goto code_r0x00101aca;
    }
    break;
  case -0x36:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      pvVar13 = *(void **)(param_6 + 0x88);
      pvVar20 = (void *)puVar33[10];
      sStack_a0 = puVar33[3] * 2;
      if (((pvVar20 <= (void *)((long)pvVar13 + puVar33[3] * -2)) &&
          (iVar5 = memcmp(pvVar20,(void *)puVar33[2],sStack_a0), iVar5 == 0)) ||
         ((uVar11 = puVar33[5], uVar11 != 0 &&
          ((sStack_a0 = uVar11 * 2, pvVar20 <= (void *)((long)pvVar13 + uVar11 * -2) &&
           (iVar5 = memcmp(pvVar20,(void *)((long)puVar33 + 0x4a),sStack_a0), iVar5 == 0)))))) {
        puVar33[10] = (long)pvVar20 + sStack_a0;
        goto code_r0x00101a7b;
      }
      if (((pvVar13 <= pvVar20) && (sVar4 = *(short *)(param_6 + 0x60), sVar4 != 0)) &&
         ((*(void **)(param_6 + 0xa0) < pvVar20 || (*(int *)(param_6 + 0x30) != 0)))) {
        *(undefined4 *)(param_6 + 0x28) = 1;
        goto joined_r0x00100d95;
      }
    }
    break;
  case -0x35:
    if (uVar29 == 0) {
      uVar11 = puVar33[10];
      uVar31 = uVar11 - 4;
      if ((*(ushort *)(uVar11 - 2) & 0xfc00) != 0xdc00) {
        uVar31 = uVar11 - 2;
      }
      puVar33[10] = uVar31;
      goto code_r0x0010199e;
    }
    goto code_r0x00100630;
  case -0x34:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar19 & 0xfc00) == 0xd800) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        if (((uint)puVar33[8] != uVar29) && (uVar29 != *(uint *)((long)puVar33 + 0x44)))
        goto code_r0x00102ad4;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x33:
    if (uVar29 == 0) {
      uVar11 = puVar33[10];
      uVar31 = uVar11 - 4;
      if ((*(ushort *)(uVar11 - 2) & 0xfc00) != 0xdc00) {
        uVar31 = uVar11 - 2;
      }
      puVar33[10] = uVar31;
      goto code_r0x001018de;
    }
    goto code_r0x00100630;
  case -0x32:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        puVar33[10] = (ulong)(puVar17 + 1);
        if ((uVar19 & 0xfc00) == 0xd800) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        if ((uint)puVar33[8] != uVar29) goto code_r0x0010229a;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x31:
    if (uVar29 == 0) {
      uVar11 = puVar33[10];
      uVar31 = uVar11 - 4;
      if ((*(ushort *)(uVar11 - 2) & 0xfc00) != 0xdc00) {
        uVar31 = uVar11 - 2;
      }
      puVar33[10] = uVar31;
      goto code_r0x0010181e;
    }
    goto code_r0x00100630;
  case -0x30:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        if ((uVar25 != 0) && ((*puVar17 & 0xfc00) == 0xd800)) {
          puVar33[10] = (ulong)(puVar17 + 2);
        }
        if ((int)puVar33[8] != 0xf) goto code_r0x001027f7;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x2f:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        cVar1 = *(char *)((ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_16 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_16 +
                                                     (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                             (uVar29 & 0x7f)) * 2) * 0xc + 0x10f019);
        if (((byte)(cVar1 - 8U) < 2 || cVar1 == '\x05') != ((int)puVar33[8] == 0xf))
        goto code_r0x001023ff;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x2e:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        if ((*(int *)(&_pcre2_ucp_gentype_16 +
                     (ulong)*(byte *)((ulong)*(ushort *)
                                              (&_pcre2_ucd_stage2_16 +
                                              (long)(int)((uint)*(ushort *)
                                                                 (&_pcre2_ucd_stage1_16 +
                                                                 (long)((int)uVar29 >> 7) * 2) *
                                                          0x80 + (uVar29 & 0x7f)) * 2) * 0xc +
                                     0x10f019) * 4) != *(int *)((long)puVar33 + 0x44)) ==
            ((int)puVar33[8] == 0xf)) goto code_r0x00102258;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x2d:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        if (((uint)*(byte *)((ulong)*(ushort *)
                                     (&_pcre2_ucd_stage2_16 +
                                     (long)(int)((uint)*(ushort *)
                                                        (&_pcre2_ucd_stage1_16 +
                                                        (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                                (uVar29 & 0x7f)) * 2) * 0xc + 0x10f019) !=
            *(uint *)((long)puVar33 + 0x44)) == ((int)puVar33[8] == 0xf)) goto code_r0x00102bb4;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x2c:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        if (((uint)(byte)(&_pcre2_ucd_records_16)
                         [(ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_16 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_16 +
                                                     (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                             (uVar29 & 0x7f)) * 2) * 0xc] !=
            *(uint *)((long)puVar33 + 0x44)) == ((int)puVar33[8] == 0xf)) goto code_r0x00102345;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x2b:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        if (((int)puVar33[8] == 0xf) !=
            ((*(uint *)(&_pcre2_ucp_gentype_16 +
                       (ulong)*(byte *)((ulong)*(ushort *)
                                                (&_pcre2_ucd_stage2_16 +
                                                (long)(int)((uint)*(ushort *)
                                                                   (&_pcre2_ucd_stage1_16 +
                                                                   (long)((int)uVar29 >> 7) * 2) *
                                                            0x80 + (uVar29 & 0x7f)) * 2) * 0xc +
                                       0x10f019) * 4) & 0xfffffffd) == 1)) goto code_r0x001021a2;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x2a:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        puVar33[10] = (ulong)(puVar17 + 1);
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar19 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar29 & 0x3ff) << 10 | uVar19 & 0x3ff) + 0x10000;
          goto code_r0x001026df;
        }
        if (uVar19 != 0x180e) {
          if (uVar19 < 0x180f) {
            if (uVar19 != 0x85) {
              if (uVar19 < 0x86) {
                if (uVar19 < 0xe) {
                  if (uVar19 < 9) goto code_r0x001026df;
                }
                else if (uVar19 != 0x20) goto code_r0x001026df;
              }
              else if ((uVar19 != 0xa0) && (uVar19 != 0x1680)) goto code_r0x001026df;
            }
          }
          else if (uVar19 < 0x2060) {
            if (uVar19 < 0x2028) {
              if (10 < (ushort)(uVar19 + 0xe000)) {
code_r0x001026df:
                if ((*(int *)(&_pcre2_ucp_gentype_16 +
                             (ulong)*(byte *)((ulong)*(ushort *)
                                                      (&_pcre2_ucd_stage2_16 +
                                                      (long)(int)((uVar29 & 0x7f) +
                                                                 (uint)*(ushort *)
                                                                        (&_pcre2_ucd_stage1_16 +
                                                                        (long)((int)uVar29 >> 7) * 2
                                                                        ) * 0x80) * 2) * 0xc +
                                             0x10f019) * 4) != 6) != ((int)puVar33[8] == 0xf))
                break;
                goto code_r0x00102739;
              }
            }
            else if ((0x80000000000083U >> ((ulong)(ushort)(uVar19 + 0xdfd8) & 0x3f) & 1) == 0)
            goto code_r0x001026df;
          }
          else if (uVar19 != 0x3000) goto code_r0x001026df;
        }
        if ((int)puVar33[8] != 0xf) goto code_r0x00102739;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x29:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        bVar18 = *(byte *)((ulong)*(ushort *)
                                   (&_pcre2_ucd_stage2_16 +
                                   (long)(int)((uint)*(ushort *)
                                                      (&_pcre2_ucd_stage1_16 +
                                                      (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                              (uVar29 & 0x7f)) * 2) * 0xc + 0x10f019);
        if (((int)puVar33[8] == 0xf) !=
            ((*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)bVar18 * 4) & 0xfffffffd) == 1 ||
            (bVar18 - 0xc & 0xfb) == 0)) goto code_r0x001020ed;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x28:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        puVar33[10] = (ulong)(puVar17 + 1);
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        puVar16 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)*(uint *)((long)puVar33 + 0x44) * 4
                          );
        do {
          uVar32 = *puVar16;
          if (uVar29 < uVar32) {
            iVar5 = (int)puVar33[8];
            goto joined_r0x0010826f;
          }
          puVar16 = puVar16 + 1;
        } while (uVar32 != uVar29);
        iVar5 = (int)puVar33[8];
joined_r0x0010826f:
        if (iVar5 == 0xf) goto code_r0x00108278;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x27:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar25 == 0) || ((uVar19 & 0xfc00) != 0xd800)) {
          if (((uVar19 & 0xffdf) != 0x40) && (uVar19 != 0x24)) goto code_r0x001024a7;
          bVar37 = true;
        }
        else {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
code_r0x001024a7:
          bVar37 = uVar29 - 0xa0 < 0xd760 || 0xdfff < uVar29;
        }
        if (((int)puVar33[8] == 0xf) != bVar37) goto code_r0x001024eb;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x26:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        uVar11 = func_0x0010f068(uVar29,puVar33[10],*(undefined8 *)(param_6 + 0x78));
        puVar33[10] = uVar11;
        if (((uVar11 < *(ulong *)(param_6 + 0x88)) || (*(short *)(param_6 + 0x60) == 0)) ||
           (((uVar11 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)) ||
            (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))))
        goto code_r0x0010b5b2;
        goto code_r0x00102f0a;
      }
      sVar4 = *(short *)(param_6 + 0x60);
      if ((sVar4 != 0) &&
         ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
        *(undefined4 *)(param_6 + 0x28) = 1;
        goto joined_r0x00100d95;
      }
    }
    break;
  case -0x25:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if (*(uint *)((long)puVar33 + 0x3c) <= (uint)uVar11) break;
    puVar17 = (ushort *)puVar33[10];
    puVar15 = *(ushort **)(param_6 + 0x88);
    if (puVar15 <= puVar17) {
      sVar4 = *(short *)(param_6 + 0x60);
      if ((sVar4 != 0) &&
         ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
        *(undefined4 *)(param_6 + 0x28) = 1;
        goto joined_r0x00101330;
      }
      break;
    }
    if ((int)puVar33[8] == 0xc) {
      if (*(int *)(param_6 + 0xe4) == 0) {
        if (((puVar15 + -(ulong)*(uint *)(param_6 + 0xe8) < puVar17) ||
            (*puVar17 != *(ushort *)(param_6 + 0xec))) ||
           ((*(uint *)(param_6 + 0xe8) != 1 && (puVar17[1] != *(ushort *)(param_6 + 0xee)))))
        goto code_r0x001028eb;
      }
      else {
        iVar5 = _pcre2_is_newline_16(puVar17,*(int *)(param_6 + 0xe4),puVar15,param_6 + 0xe8,bVar36)
        ;
        if (iVar5 == 0) {
          puVar17 = (ushort *)puVar33[10];
          goto code_r0x001028eb;
        }
      }
      break;
    }
code_r0x001028eb:
    uVar19 = *puVar17;
    uVar11 = (ulong)uVar19;
    uVar29 = (uint)uVar19;
    puVar33[10] = (ulong)(puVar17 + 1);
    if ((uVar19 & 0xfc00) == 0xd800) {
      puVar33[10] = (ulong)(puVar17 + 2);
      switch((int)puVar33[8]) {
      case 6:
      case 8:
      case 10:
      case 0xd:
      case 0xe:
      case 0x12:
      case 0x14:
        goto code_r0x0010491f;
      case 7:
      case 9:
      case 0xb:
      case 0x11:
      case 0x13:
      case 0x15:
        goto code_r0x00100730;
      case 0xc:
        uVar29 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
        goto code_r0x00105125;
      }
      goto LAB_00102cc0;
    }
    if (0xf < (int)puVar33[8] - 6U) goto LAB_00102cc0;
    uVar32 = (uint)uVar19;
    uVar6 = (uint)uVar19;
    uVar28 = (uint)uVar19;
    switch((int)puVar33[8]) {
    case 6:
      if (uVar32 < 0x100) {
        bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 8;
joined_r0x00104919:
        if (bVar18 != 0) break;
      }
      goto code_r0x0010491f;
    case 7:
      if (uVar6 < 0x100) {
        bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 8;
        goto joined_r0x00104919;
      }
      break;
    case 8:
      if (uVar6 < 0x100) {
        bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 1;
        goto joined_r0x00104919;
      }
      goto code_r0x0010491f;
    case 9:
      if (uVar6 < 0x100) {
        bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 1;
        goto joined_r0x00104919;
      }
      break;
    case 10:
      if (uVar6 < 0x100) {
        bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 0x10;
        goto joined_r0x00104919;
      }
      goto code_r0x0010491f;
    case 0xb:
      if (uVar6 < 0x100) {
        bVar18 = *(byte *)(*(long *)(param_6 + 0x48) + uVar11) & 0x10;
        goto joined_r0x00104919;
      }
      break;
    case 0xc:
code_r0x00105125:
      if ((((*(short *)(param_6 + 0x60) == 0) || (puVar33[10] < *(ulong *)(param_6 + 0x88))) ||
          (*(int *)(param_6 + 0xe4) != 0)) ||
         (((*(int *)(param_6 + 0xe8) != 2 || (*(ushort *)(param_6 + 0xec) != uVar29)) ||
          (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))))
      goto code_r0x00104925;
      goto code_r0x00102f0a;
    default:
      goto code_r0x0010491f;
    case 0xf:
    case 0x10:
      goto LAB_00102cc0;
    case 0x11:
      if (uVar28 == 0xd) {
        if ((puVar17 + 1 < *(ushort **)(param_6 + 0x88)) && (puVar17[1] == 10)) {
          puVar33[10] = (ulong)(puVar17 + 2);
        }
        goto code_r0x00104925;
      }
      if (uVar28 < 0xe) {
        if (uVar28 == 10) goto code_r0x0010491f;
        uVar6 = uVar6 - 0xb;
joined_r0x0010bd31:
        if (1 < uVar6) break;
      }
      else if (uVar28 != 0x85) {
        uVar6 = uVar28 - 0x2028;
        goto joined_r0x0010bd31;
      }
      if (*(short *)(param_6 + 0x62) != 2) goto code_r0x0010491f;
      break;
    case 0x12:
      if (uVar28 != 0x180e) {
        if (uVar28 < 0x180f) {
          if (uVar28 != 0xa0) {
            if (uVar28 < 0xa1) {
              if ((uVar28 != 9) && (uVar19 != 0x20)) goto code_r0x0010491f;
            }
            else if (uVar28 != 0x1680) goto code_r0x0010491f;
          }
        }
        else if (uVar19 != 0x205f) {
          if (uVar19 < 0x2060) {
            if (uVar19 < 0x200b) {
              if (uVar28 < 0x2000) goto code_r0x0010491f;
            }
            else if (uVar28 != 0x202f) goto code_r0x0010491f;
          }
          else {
joined_r0x0010bdf5:
            if (uVar19 == 0x3000) goto code_r0x0010491f;
          }
        }
      }
      break;
    case 0x13:
      if (uVar28 != 0x180e) {
        if (uVar28 < 0x180f) {
          if (uVar28 != 0xa0) {
            if (uVar28 < 0xa1) {
              if ((uVar19 == 9) || (uVar19 == 0x20)) goto code_r0x0010491f;
            }
            else if (uVar19 == 0x1680) goto code_r0x0010491f;
            break;
          }
        }
        else if (uVar19 != 0x205f) {
          if (0x205f < uVar19) goto joined_r0x0010bdf5;
          if (uVar19 < 0x200b) {
            if (0x1fff < uVar28) goto code_r0x0010491f;
          }
          else if (uVar28 == 0x202f) goto code_r0x0010491f;
          break;
        }
      }
code_r0x0010491f:
      goto code_r0x00104925;
    case 0x14:
      if (uVar32 != 0x85) {
        if (uVar32 < 0x86) {
          if (3 < uVar32 - 10) goto code_r0x0010491f;
        }
        else if (1 < uVar32 - 0x2028) goto code_r0x0010491f;
      }
      break;
    case 0x15:
      if (uVar28 == 0x85) goto code_r0x0010491f;
      if (uVar28 < 0x86) {
        if (uVar28 - 10 < 4) goto code_r0x0010491f;
      }
      else if (uVar32 - 0x2028 < 2) goto code_r0x0010491f;
    }
    break;
  case -0x24:
    if (uVar29 == 0) {
      uVar11 = puVar33[10];
      puVar17 = (ushort *)(uVar11 - 2);
      puVar33[10] = (ulong)puVar17;
      if (uVar25 == 0) {
        uVar29 = (uint)*(ushort *)(uVar11 - 2);
      }
      else {
        if ((*(ushort *)(uVar11 - 2) & 0xfc00) == 0xdc00) {
          puVar33[10] = uVar11 - 4;
        }
        puVar17 = (ushort *)puVar33[10];
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar19 & 0xfc00) == 0xd800) {
          uVar29 = ((uVar19 & 0x3ff) << 10 | puVar17[1] & 0x3ff) + 0x10000;
        }
      }
      uVar11 = (ulong)*(byte *)((ulong)*(ushort *)
                                        (&_pcre2_ucd_stage2_16 +
                                        (long)(int)((uint)*(ushort *)
                                                           (&_pcre2_ucd_stage1_16 +
                                                           (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                                   (uVar29 & 0x7f)) * 2) * 0xc + 0x10f01a);
      goto joined_r0x001011fc;
    }
    goto code_r0x00100630;
  case -0x23:
    if (uVar29 == 0) {
      uVar11 = puVar33[10];
      psVar8 = (short *)(uVar11 - 4);
      if ((*(ushort *)(uVar11 - 2) & 0xfc00) != 0xdc00) {
        psVar8 = (short *)(uVar11 - 2);
      }
      puVar33[10] = (ulong)psVar8;
      if ((int)puVar33[8] != 0x11) goto code_r0x00101169;
      if (psVar8 <= (short *)puVar33[1]) goto code_r0x001005ba;
      if ((*psVar8 != 10) || (psVar8[-1] != 0xd)) goto code_r0x00101177;
      puVar33[10] = (ulong)(psVar8 + -1);
      goto code_r0x00101169;
    }
    goto code_r0x00100630;
  case -0x22:
    goto code_r0x001010d0;
  case -0x21:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        if (((1 << ((byte)*(uint *)((long)puVar33 + 0x44) & 0x1f) &
             *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                      ((ulong)(*(ushort *)
                                ((ulong)*(ushort *)
                                         (&_pcre2_ucd_stage2_16 +
                                         (long)(int)((uint)*(ushort *)
                                                            (&_pcre2_ucd_stage1_16 +
                                                            (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                                    (uVar29 & 0x7f)) * 2) * 0xc + 0x10f022) & 0xfff)
                      + (ulong)(*(uint *)((long)puVar33 + 0x44) >> 5)) * 4)) != 0) !=
            ((int)puVar33[8] == 0xf)) goto code_r0x00102a4f;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x20:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        if (((uint)(*(ushort *)
                     (&_pcre2_ucd_caseless_sets_16 +
                     (ulong)*(ushort *)
                             (&_pcre2_ucd_stage2_16 +
                             (long)(int)((uint)*(ushort *)
                                                (&_pcre2_ucd_stage1_16 +
                                                (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                        (uVar29 & 0x7f)) * 2) * 0xc) >> 0xb) !=
            *(uint *)((long)puVar33 + 0x44)) == ((int)puVar33[8] == 0xf)) goto code_r0x0010267b;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
  case -0x1f:
    if (uVar29 != 0) goto code_r0x00100630;
    uVar11 = puVar33[7];
    *(uint *)(puVar33 + 7) = (uint)uVar11 + 1;
    if ((uint)uVar11 < *(uint *)((long)puVar33 + 0x3c)) {
      puVar17 = (ushort *)puVar33[10];
      if (puVar17 < *(ushort **)(param_6 + 0x88)) {
        puVar33[10] = (ulong)(puVar17 + 1);
        uVar19 = *puVar17;
        uVar29 = (uint)uVar19;
        if ((uVar25 != 0) && ((uVar19 & 0xfc00) == 0xd800)) {
          uVar27 = puVar17[1];
          puVar33[10] = (ulong)(puVar17 + 2);
          uVar29 = ((uVar19 & 0x3ff) << 10 | uVar27 & 0x3ff) + 0x10000;
        }
        uVar32 = *(uint *)((long)puVar33 + 0x44);
        bVar37 = true;
        if ((byte)(&_pcre2_ucd_records_16)
                  [(ulong)*(ushort *)
                           (&_pcre2_ucd_stage2_16 +
                           (long)(int)((uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_16 + (long)((int)uVar29 >> 7) * 2)
                                       * 0x80 + (uVar29 & 0x7f)) * 2) * 0xc] != uVar32) {
          bVar37 = (1 << ((byte)uVar32 & 0x1f) &
                   *(uint *)(&_pcre2_ucd_script_sets_16 +
                            ((ulong)(*(ushort *)
                                      (&_pcre2_ucd_caseless_sets_16 +
                                      (ulong)*(ushort *)
                                              (&_pcre2_ucd_stage2_16 +
                                              (long)(int)((uint)*(ushort *)
                                                                 (&_pcre2_ucd_stage1_16 +
                                                                 (long)((int)uVar29 >> 7) * 2) *
                                                          0x80 + (uVar29 & 0x7f)) * 2) * 0xc) &
                                    0x3ff) + (ulong)(uVar32 >> 5)) * 4)) != 0;
        }
        if (((int)puVar33[8] == 0xf) != bVar37) goto code_r0x001025c3;
      }
      else {
        sVar4 = *(short *)(param_6 + 0x60);
        if ((sVar4 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar17 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
  }
code_r0x00100730:
  uVar29 = 0;
  goto code_r0x00100630;
code_r0x0010886e:
  puVar17 = puVar17 + 1;
  uVar29 = uVar29 + 1;
  puVar33[10] = (ulong)puVar17;
  if (uVar28 <= uVar29) goto code_r0x001084a6;
  goto code_r0x00108883;
code_r0x00107718:
  puVar17 = puVar17 + 1;
  uVar29 = uVar29 + 1;
  puVar33[10] = (ulong)puVar17;
  if (uVar28 <= uVar29) goto code_r0x001073b1;
  goto code_r0x0010772d;
code_r0x00106576:
  puVar17 = puVar17 + lVar24;
  uVar29 = uVar29 + 1;
  puVar33[10] = (ulong)puVar17;
  if (uVar28 <= uVar29) goto code_r0x00106c29;
  goto code_r0x0010658b;
code_r0x00102ddd:
  if (*(int *)(param_6 + 0x30) != 0) {
code_r0x00102dea:
    *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x001099c4:
    if (sVar4 != 1) goto code_r0x00102f0a;
  }
  goto code_r0x00100620;
code_r0x001010d0:
  if (uVar29 == 0) goto code_r0x001010d9;
  goto code_r0x00100630;
code_r0x001010d9:
  uVar11 = puVar33[10];
  puVar33[10] = uVar11 - 2;
  if ((uVar25 != 0) && ((*(ushort *)(uVar11 - 2) & 0xfc00) == 0xdc00)) {
    puVar33[10] = uVar11 - 4;
  }
code_r0x00101108:
  if (puVar33[1] < puVar33[10]) {
    *(undefined1 *)(puVar33 + 9) = 0xde;
    param_2 = (ushort *)*puVar33;
    uVar29 = 0;
    puVar22 = puVar33;
    goto code_r0x00101cc8;
  }
  goto code_r0x001005ba;
joined_r0x001011fc:
  if (puVar17 <= (ushort *)puVar33[1]) goto code_r0x001005ba;
  puVar15 = (ushort *)((long)puVar17 + 0xfffffffffffffffe);
  if (uVar25 == 0) {
    uVar29 = (uint)*(ushort *)((long)puVar17 + 0xfffffffffffffffe);
  }
  else {
    puVar10 = (ushort *)((long)puVar17 + 0xfffffffffffffffc);
    if ((*(ushort *)((long)puVar17 + 0xfffffffffffffffe) & 0xfc00) != 0xdc00) {
      puVar10 = puVar15;
    }
    uVar19 = *puVar10;
    uVar29 = (uint)uVar19;
    puVar15 = puVar10;
    if ((uVar19 & 0xfc00) == 0xd800) {
      uVar29 = ((uVar19 & 0x3ff) << 10 | puVar10[1] & 0x3ff) + 0x10000;
    }
  }
  bVar18 = (byte)uVar11;
  uVar11 = (ulong)*(byte *)((ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_16 +
                                    (long)(int)((uVar29 & 0x7f) +
                                               (uint)*(ushort *)
                                                      (&_pcre2_ucd_stage1_16 +
                                                      (long)((int)uVar29 >> 7) * 2) * 0x80) * 2) *
                            0xc + 0x10f01a);
  if ((1 << (bVar18 & 0x1f) & *(uint *)(&_pcre2_ucp_gbtable_16 + uVar11 * 4)) == 0)
  goto code_r0x0010a40d;
  puVar33[10] = (ulong)puVar15;
  puVar17 = puVar15;
  goto joined_r0x001011fc;
code_r0x00102f0a:
  uVar29 = 0xfffffffe;
  goto LAB_00101d0c;
}



/* WARNING: Type propagation algorithm not settling */

int pcre2_match_16(undefined8 *param_1,ushort *param_2,ulong param_3,ulong param_4,uint param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  ushort *puVar1;
  size_t sVar2;
  ulong uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  void *pvVar15;
  ulong uVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ushort *puVar24;
  ushort *puVar25;
  ulong uVar26;
  ushort *puVar27;
  long in_FS_OFFSET;
  bool bVar28;
  bool bVar29;
  ulong local_278;
  uint local_268;
  uint local_254;
  ushort *local_220;
  int local_218;
  undefined8 *local_208;
  ushort *local_200;
  uint local_1e8;
  ushort local_1e4;
  ushort local_1e2;
  ushort *local_1e0;
  ushort local_1d0;
  ushort local_1ce;
  undefined4 local_1c8 [8];
  ushort *local_1a8;
  long local_1a0;
  long local_198;
  uint local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  uint local_140;
  uint local_13c;
  uint local_138;
  undefined4 local_134;
  int local_130;
  uint local_12c;
  uint local_128;
  long local_120;
  long lStack_118;
  long local_110;
  ulong local_108;
  ulong local_100;
  ushort local_f8;
  undefined2 local_f6;
  ushort local_f4;
  ushort local_f2;
  undefined8 *local_f0;
  long local_e8;
  ushort *local_e0;
  ushort *local_d8;
  ushort *local_d0;
  ushort *local_c8;
  ushort *local_c0;
  ushort *local_b8;
  ushort *puStack_b0;
  undefined1 local_a8 [16];
  ushort *local_90;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0 && param_2 == (ushort *)0x0) {
    param_2 = (ushort *)&_LC6;
  }
  local_254 = param_5 & 0x1ffb9fc0;
  if ((param_5 & 0x1ffb9fc0) != 0) {
LAB_0010da81:
    iVar11 = -0x22;
    goto LAB_0010c740;
  }
  bVar8 = (param_1 == (undefined8 *)0x0 || param_6 == (undefined8 *)0x0) || param_2 == (ushort *)0x0
  ;
  if (bVar8) {
    iVar11 = -0x33;
    goto LAB_0010c740;
  }
  puVar14 = param_2 + param_4;
  local_278 = param_3;
  if (param_3 == 0xffffffffffffffff) {
    local_278 = _pcre2_strlen_16(param_2);
  }
  local_1e8 = (uint)(param_3 == 0xffffffffffffffff);
  puVar1 = param_2 + local_278;
  if (local_278 < param_4) {
    iVar11 = -0x21;
    goto LAB_0010c740;
  }
  if (*(int *)(param_1 + 10) != 0x50435245) {
    iVar11 = -0x1f;
    goto LAB_0010c740;
  }
  if ((*(uint *)(param_1 + 0xc) & 7) != 2) {
    iVar11 = -0x20;
    goto LAB_0010c740;
  }
  uVar10 = *(uint *)(param_1 + 0xc) >> 0xe & 0xc | param_5;
  lVar23 = param_1[4];
  uVar13 = *(uint *)(param_1 + 0xb);
  uVar21 = uVar13 & 0x80000;
  local_268 = uVar13 & 0x4000000;
  if ((param_5 & 0x20) == 0) {
    local_f8 = (ushort)(param_5 >> 4) & 1;
    if ((param_5 & 0x10) != 0) goto LAB_0010c35b;
  }
  else {
    local_f8 = 2;
LAB_0010c35b:
    if (((uVar13 | uVar10) & 0x20000000) != 0) goto LAB_0010da81;
  }
  if (((param_7 != (undefined8 *)0x0) && (param_7[9] != -1)) && ((uVar13 & 0x800000) == 0)) {
    iVar11 = -0x38;
    goto LAB_0010c740;
  }
  if ((*(byte *)((long)param_6 + 0x61) & 1) != 0) {
    (*(code *)param_6[1])(param_6[4],param_6[2]);
    *(byte *)((long)param_6 + 0x61) = *(byte *)((long)param_6 + 0x61) & 0xfe;
  }
  param_6[4] = 0;
  param_6[0xb] = 0;
  puVar19 = puVar14;
  puVar18 = puVar1;
  if (lVar23 != 0 && (param_5 & 0xbfffbfc0) == 0) {
    if (uVar21 == 0) {
LAB_0010c478:
      iVar11 = pcre2_jit_match_16(param_1,param_2,local_278,param_4,uVar10,param_6,param_7);
      puVar20 = param_2;
      if (iVar11 == -0x2d) goto LAB_0010c4c4;
    }
    else {
      if (local_268 == 0 && (param_5 & 0x40000000) == 0) {
        if ((puVar14 < puVar1) && ((*puVar14 & 0xfc00) == 0xdc00)) {
LAB_0010d98e:
          iVar11 = (-(uint)(param_4 == 0) & 10) - 0x24;
          goto LAB_0010c740;
        }
        uVar17 = (uint)*(ushort *)((long)param_1 + 0x7c);
        if ((*(ushort *)((long)param_1 + 0x7c) != 0) && (param_2 < puVar14)) {
          while (puVar19 = puVar19 + -1, param_2 < puVar19) {
            if (((*puVar19 & 0xfc00) != 0xdc00) &&
               ((uVar17 = uVar17 - 1, uVar17 == 0 || (puVar19 <= param_2)))) break;
          }
        }
        lVar23 = (long)puVar19 - (long)param_2 >> 1;
        iVar11 = _pcre2_valid_utf_16(puVar19,local_278 - lVar23,param_6 + 0xb);
        *(int *)((long)param_6 + 100) = iVar11;
        if (iVar11 != 0) {
          param_6[0xb] = param_6[0xb] + lVar23;
          goto LAB_0010c740;
        }
        goto LAB_0010c478;
      }
      iVar11 = pcre2_jit_match_16(param_1,param_2,local_278,param_4,uVar10,param_6,param_7);
      if (iVar11 == -0x2d) goto LAB_0010c794;
    }
    param_6[8] = local_278;
    if ((iVar11 < 0) || ((param_5 & 0x4000) == 0)) goto LAB_0010c740;
    sVar2 = ((long)(int)local_1e8 + local_278) * 2;
    pvVar15 = (void *)(*(code *)*param_6)(sVar2,param_6[2]);
    param_6[4] = pvVar15;
    if (pvVar15 != (void *)0x0) {
      memcpy(pvVar15,param_2,sVar2);
      *(byte *)((long)param_6 + 0x61) = *(byte *)((long)param_6 + 0x61) | 1;
      goto LAB_0010c740;
    }
LAB_0010db02:
    iVar11 = -0x30;
LAB_0010c740:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar11;
  }
  puVar20 = param_2;
  if (uVar21 != 0) {
LAB_0010c794:
    if ((param_5 & 0x40000000) == 0) {
      if (local_268 != 0) goto LAB_0010c7a4;
      if ((puVar14 < puVar1) && (local_d8 = param_2, (*puVar14 & 0xfc00) == 0xdc00))
      goto LAB_0010d98e;
LAB_0010c908:
      uVar17 = (uint)*(ushort *)((long)param_1 + 0x7c);
      puVar18 = puVar19;
      local_d8 = puVar19;
      if (*(ushort *)((long)param_1 + 0x7c) != 0) {
        do {
          if (puVar18 <= param_2) {
            if (!bVar8) goto LAB_0010c7f3;
            break;
          }
          do {
            puVar18 = puVar18 + -1;
            if (puVar18 <= param_2) break;
          } while ((*puVar18 & 0xfc00) == 0xdc00);
          bVar8 = true;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
        local_d8 = puVar18;
      }
    }
    else {
      puVar20 = param_2;
      if (local_268 == 0) goto LAB_0010c4c4;
LAB_0010c7a4:
      if (puVar1 <= puVar14) goto LAB_0010c908;
      bVar28 = false;
      do {
        if ((*puVar19 & 0xfc00) != 0xdc00) {
          local_d8 = puVar19;
          if (!bVar28) goto LAB_0010c908;
          break;
        }
        puVar19 = puVar19 + 1;
        bVar28 = true;
        local_d8 = puVar19;
      } while (puVar19 < puVar1);
    }
LAB_0010c7f3:
LAB_0010c810:
    puVar24 = local_d8;
    iVar11 = _pcre2_valid_utf_16(local_d8,local_278 - ((long)local_d8 - (long)param_2 >> 1),
                                 param_6 + 0xb);
    *(int *)((long)param_6 + 100) = iVar11;
    puVar18 = puVar1;
    puVar20 = local_d8;
    if (iVar11 != 0) {
      lVar23 = ((long)local_d8 - (long)param_2 >> 1) + param_6[0xb];
      param_6[0xb] = lVar23;
      bVar8 = local_268 == 0 || 0 < iVar11;
      if (bVar8) goto LAB_0010c740;
      puVar18 = param_2 + lVar23;
      if (puVar19 <= puVar18) {
        local_254 = 2;
        goto LAB_0010c4c4;
      }
      puVar18 = puVar18 + 1;
      local_d8 = puVar18;
      if (puVar18 < puVar19) {
        do {
          if ((*local_d8 & 0xfc00) != 0xdc00) {
            local_d8 = puVar24;
            if (!bVar8) goto LAB_0010d268;
            break;
          }
          local_d8 = local_d8 + 1;
          bVar8 = true;
          puVar24 = local_d8;
        } while (local_d8 < puVar19);
      }
      else {
LAB_0010d268:
        local_d8 = puVar18;
      }
      goto LAB_0010c810;
    }
  }
LAB_0010c4c4:
  local_d8 = puVar20;
  if (param_7 == (undefined8 *)0x0) {
    local_158 = *param_1;
    uStack_150 = param_1[1];
    local_148 = param_1[2];
    param_7 = (undefined8 *)&_pcre2_default_match_context_16;
  }
  else {
    local_148 = param_7[2];
    local_158 = *param_7;
    uStack_150 = param_7[1];
  }
  local_80 = *(uint *)(param_1 + 0xb);
  local_1c8[0] = 2;
  uVar22 = uVar10 | local_80;
  local_160 = 0;
  uVar17 = 0;
  if (-1 < (int)uVar22) {
    uVar17 = local_80 >> 8 & 1;
  }
  uVar5 = *(uint *)(param_1 + 0xc);
  local_60 = local_1c8;
  puVar20 = param_2 + param_7[9];
  if (param_7[9] == -1) {
    puVar20 = puVar1;
  }
  local_1a0 = (long)puVar18 - (long)param_2 >> 1;
  local_50 = param_7[5];
  local_58 = param_7[6];
  local_12c = uVar5 >> 0xc & 1;
  local_128 = 1;
  if (*(short *)((long)param_1 + 0x7c) == 0) {
    local_128 = uVar5 >> 0xd & 1;
  }
  local_f4 = *(ushort *)((long)param_1 + 0x86);
  local_f2 = *(ushort *)((long)param_1 + 0x84);
  local_f0 = param_1 + 0x11;
  local_78 = 0;
  local_a8 = (undefined1  [16])0x0;
  local_e8 = (long)local_f0 + (long)(int)((uint)local_f4 * (uint)local_f2) * 2;
  local_f6 = *(undefined2 *)(param_1 + 0xf);
  local_1a8 = param_2;
  local_108 = param_4;
  local_e0 = param_2;
  local_d0 = puVar18;
  local_c8 = puVar1;
  switch(*(undefined2 *)((long)param_1 + 0x7a)) {
  default:
    iVar11 = -0x2c;
    goto LAB_0010c740;
  case 1:
    local_70 = CONCAT26(local_70._6_2_,0xd00000001);
    break;
  case 2:
    local_70 = CONCAT26(local_70._6_2_,0xa00000001);
    break;
  case 3:
    local_70 = 0xa000d00000002;
    break;
  case 4:
    local_78 = 0x100000000;
    break;
  case 5:
    local_78 = 0x200000000;
    break;
  case 6:
    local_70 = CONCAT26(local_70._6_2_,1);
  }
  sVar2 = (long)(int)((uint)*(ushort *)(param_1 + 0x10) * 2) * 8;
  uVar3 = sVar2 + 0x88;
  local_140 = *(uint *)((long)param_1 + 100);
  if (*(uint *)(param_7 + 10) < *(uint *)((long)param_1 + 100)) {
    local_140 = *(uint *)(param_7 + 10);
  }
  local_13c = *(uint *)(param_1 + 0xd);
  if (*(uint *)((long)param_7 + 0x54) < *(uint *)(param_1 + 0xd)) {
    local_13c = *(uint *)((long)param_7 + 0x54);
  }
  local_138 = *(uint *)((long)param_1 + 0x6c);
  if (*(uint *)(param_7 + 0xb) < *(uint *)((long)param_1 + 0x6c)) {
    local_138 = *(uint *)(param_7 + 0xb);
  }
  uVar26 = uVar3 * 10;
  if (uVar26 < 0x5000) {
    uVar26 = 0x5000;
  }
  if (((ulong)local_140 < uVar26 >> 10) && (uVar26 = (ulong)(local_140 << 10), uVar26 < uVar3)) {
    iVar11 = -0x3f;
    goto LAB_0010c740;
  }
  lVar23 = param_6[6];
  if ((ulong)param_6[7] < uVar26) {
    (*(code *)param_6[1])(lVar23,param_6[2]);
    lVar23 = (*(code *)*param_6)(uVar26,param_6[2]);
    param_6[6] = lVar23;
    if (lVar23 == 0) {
      param_6[7] = 0;
      goto LAB_0010db02;
    }
    param_6[7] = uVar26;
  }
  memset((void *)(lVar23 + 0x88),0xff,sVar2);
  local_120 = param_1[3];
  lStack_118 = local_120 + 0x100;
  local_110 = local_120 + 0x340;
  uVar6 = *(uint *)(param_1 + 0xc);
  if ((uVar6 & 0x10) == 0) {
    if (((uVar5 & 0x200) == 0) && ((uVar6 & 0x40) != 0)) {
      local_208 = param_1 + 5;
      local_218 = 0;
      local_1e4 = 0;
      local_1e2 = 0;
    }
    else {
      local_218 = 0;
      local_1e4 = 0;
      local_1e2 = 0;
      local_208 = (undefined8 *)0x0;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xe);
    local_1e2 = (ushort)uVar7;
    local_1e4 = local_1e2;
    if ((uVar6 & 0x20) == 0) {
      local_218 = 1;
      local_208 = (undefined8 *)0x0;
    }
    else if (((local_1e2 < 0x100) &&
             (local_1e4 = (ushort)*(byte *)(local_120 + 0x100 + (ulong)(uVar7 & 0xffff)),
             local_1e2 < 0x80)) || ((uVar13 & 0xa0000) == 0)) {
      local_218 = 1;
      local_208 = (undefined8 *)0x0;
    }
    else {
      local_218 = 1;
      local_208 = (undefined8 *)0x0;
      local_1e4 = local_1e2 +
                  *(short *)(&DAT_0010f01c +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_16 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_16 +
                                                       (ulong)(local_1e2 >> 7) * 2) * 0x80 +
                                               (uVar7 & 0x7f)) * 2) * 0xc);
    }
  }
  if ((uVar6 & 0x80) == 0) {
    bVar8 = false;
    local_1d0 = 0;
    local_1ce = 0;
  }
  else {
    uVar7 = *(uint *)((long)param_1 + 0x74);
    local_1ce = (ushort)uVar7;
    local_1d0 = local_1ce;
    if ((uVar6 & 0x100) == 0) {
      bVar8 = true;
    }
    else {
      if (local_1ce < 0x100) {
        bVar8 = true;
        local_1d0 = (ushort)*(byte *)(local_120 + 0x100 + (ulong)(uVar7 & 0xffff));
        if (local_1ce < 0x80) goto LAB_0010cb4a;
      }
      bVar8 = true;
      if ((uVar13 & 0xa0000) != 0) {
        local_1d0 = *(short *)(&DAT_0010f01c +
                              (ulong)*(ushort *)
                                      (&_pcre2_ucd_stage2_16 +
                                      (long)(int)((uint)*(ushort *)
                                                         (&_pcre2_ucd_stage1_16 +
                                                         (ulong)(uVar7 >> 7 & 0x1ff) * 2) * 0x80 +
                                                 (uVar7 & 0x7f)) * 2) * 0xc) + local_1ce;
      }
    }
  }
LAB_0010cb4a:
  local_1e0 = puVar14 + -1;
  bVar28 = uVar21 != 0;
LAB_0010cb93:
  local_130 = 0;
  local_200 = (ushort *)0x0;
  local_220 = (ushort *)0x0;
LAB_0010cbbd:
  puVar24 = local_1e0;
  if ((*(byte *)((long)param_1 + 0x5a) & 1) != 0) goto LAB_0010d070;
  puVar27 = puVar18;
  if (uVar17 != 0) {
    puVar27 = puVar19;
    if (uVar21 == 0) {
      if (puVar19 < puVar18) {
        do {
          if (local_78._4_4_ == 0) {
            if (((puVar27 <= local_d0 + -(local_70 & 0xffffffff)) && (*puVar27 == local_70._4_2_))
               && (((int)local_70 == 1 || (puVar27[1] == local_70._6_2_)))) break;
          }
          else if ((puVar27 < local_d0) && (iVar11 = _pcre2_is_newline_16(), iVar11 != 0)) break;
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar18);
        goto LAB_0010cc60;
      }
    }
    else if (puVar19 < puVar18) {
      do {
        puVar25 = puVar27;
        puVar27 = puVar25;
        if (local_78._4_4_ == 0) {
          if (((puVar25 <= local_d0 + -(local_70 & 0xffffffff)) && (*puVar25 == local_70._4_2_)) &&
             (((int)local_70 == 1 || (puVar25[1] == local_70._6_2_)))) goto LAB_0010cc60;
        }
        else if ((puVar25 < local_d0) && (iVar11 = _pcre2_is_newline_16(), iVar11 != 0))
        goto LAB_0010cc60;
        puVar27 = puVar25 + 1;
        if ((puVar18 <= puVar27) ||
           (((puVar25[1] & 0xfc00) == 0xdc00 && (puVar27 = puVar25 + 2, puVar18 <= puVar27))))
        goto LAB_0010cc60;
      } while( true );
    }
    if (-1 < (int)uVar22) {
      if (local_218 == 0) goto LAB_0010d3ca;
      goto LAB_0010ccc0;
    }
    puVar18 = puVar19;
    if ((local_208 == (undefined8 *)0x0) && (local_218 == 0)) goto LAB_0010d050;
    goto LAB_0010cd99;
  }
LAB_0010cc60:
  if (-1 < (int)uVar22) {
    if (local_218 == 0) {
LAB_0010d3ca:
      if ((uVar5 & 0x200) == 0) {
        if (local_208 != (undefined8 *)0x0) {
          for (; puVar19 < puVar27; puVar19 = puVar19 + 1) {
            uVar13 = (uint)*puVar19;
            if (0xff < uVar13) {
              uVar13 = 0xff;
            }
            if ((*(byte *)((long)local_208 + (ulong)(uVar13 >> 3)) >> (uVar13 & 7) & 1) != 0) break;
          }
          goto LAB_0010ccc0;
        }
      }
      else if (local_e0 + param_4 < puVar19) {
        puVar18 = puVar19;
        uVar26 = local_70;
        if (uVar21 == 0) {
          for (; puVar19 = puVar18, local_70 = uVar26, puVar18 < puVar27; puVar18 = puVar18 + 1) {
            local_78._4_4_ = (uint)((ulong)local_78 >> 0x20);
            if (local_78._4_4_ == 0) {
              local_70._0_4_ = (int)uVar26;
              uVar16 = uVar26 & 0xffffffff;
              if (((local_e0 + uVar16 <= puVar18) &&
                  (local_70._4_2_ = (ushort)(uVar26 >> 0x20), puVar18[-uVar16] == local_70._4_2_))
                 && ((bVar29 = (int)local_70 == 1, bVar29 ||
                     (local_70._6_2_ = (ushort)(uVar26 >> 0x30),
                     bVar29 = puVar18[1 - uVar16] == local_70._6_2_, bVar29)))) break;
            }
            else if ((local_e0 < puVar18) &&
                    (iVar11 = _pcre2_was_newline_16(), uVar26 = local_70, iVar11 != 0))
            goto LAB_0010d9e9;
            local_70 = uVar26;
            uVar26 = local_70;
          }
        }
        else if (puVar19 < puVar27) {
          do {
            puVar18 = puVar19;
            if (local_78._4_4_ == 0) {
              uVar26 = local_70 & 0xffffffff;
              if (((local_e0 + uVar26 <= puVar18) && (puVar18[-uVar26] == local_70._4_2_)) &&
                 ((puVar19 = puVar18, (int)local_70 == 1 || (puVar18[1 - uVar26] == local_70._6_2_))
                 )) break;
            }
            else if ((local_e0 < puVar18) && (iVar11 = _pcre2_was_newline_16(), iVar11 != 0))
            goto LAB_0010d9e9;
            puVar19 = puVar18 + 1;
            if ((puVar27 <= puVar19) ||
               (((puVar18[1] & 0xfc00) == 0xdc00 && (puVar19 = puVar18 + 2, puVar27 <= puVar19))))
            break;
          } while( true );
        }
      }
      goto LAB_0010d050;
    }
    if (local_1e2 == local_1e4) {
      for (; (puVar19 < puVar27 && (*puVar19 != local_1e2)); puVar19 = puVar19 + 1) {
      }
    }
    else {
      for (; ((puVar19 < puVar27 && (local_1e4 != *puVar19)) && (local_1e2 != *puVar19));
          puVar19 = puVar19 + 1) {
      }
    }
LAB_0010ccc0:
    puVar18 = local_d0;
    if (local_f8 != 0) goto LAB_0010d070;
    puVar18 = puVar27;
    if (puVar19 < local_d0) goto LAB_0010cce0;
    goto LAB_0010cd99;
  }
  if ((local_208 == (undefined8 *)0x0) && (local_218 == 0)) goto LAB_0010d050;
  puVar18 = puVar27;
  if (puVar27 <= puVar19) goto LAB_0010cd99;
  uVar4 = *puVar19;
  if ((local_218 == 0) || ((local_1e2 != uVar4 && (local_1e4 != uVar4)))) {
    if (local_208 == (undefined8 *)0x0) goto LAB_0010cd99;
    uVar13 = (uint)uVar4;
    if (0xff < uVar4) {
      uVar13 = 0xff;
    }
    if ((*(byte *)((long)local_208 + (ulong)(ushort)((ushort)uVar13 >> 3)) >> (uVar13 & 7) & 1) == 0
       ) goto LAB_0010cd99;
  }
  goto LAB_0010d050;
LAB_0010d9e9:
  puVar19 = puVar18;
  if ((puVar18[-1] == 0xd) &&
     (((uVar13 = local_78._4_4_ - 1, uVar13 < 2 && (puVar18 < puVar27)) && (*puVar18 == 10)))) {
    puVar19 = puVar18 + 1;
  }
LAB_0010d050:
  puVar18 = local_d0;
  if (local_f8 == 0) {
LAB_0010cce0:
    uVar26 = (long)local_d0 - (long)puVar19;
    puVar18 = local_d0;
    if ((long)uVar26 >> 1 < (long)(ulong)*(ushort *)((long)param_1 + 0x7e)) goto LAB_0010cd99;
    puVar27 = puVar19 + local_218;
    if (((local_1e0 < puVar27) && (bVar8)) &&
       ((uVar26 < 3999 || ((-1 < (int)uVar22 && (uVar26 < 3999999)))))) {
      if (local_1ce == local_1d0) {
        do {
          puVar24 = puVar27;
          if (local_d0 <= puVar24) goto LAB_0010cd99;
          puVar27 = puVar24 + 1;
        } while (*puVar24 != local_1ce);
      }
      else {
        do {
          puVar24 = puVar27;
          if (local_d0 <= puVar24) goto LAB_0010cd99;
        } while ((*puVar24 != local_1d0) && (puVar27 = puVar24 + 1, *puVar24 != local_1ce));
      }
    }
  }
LAB_0010d070:
  local_1e0 = puVar24;
  if (puVar20 < puVar19) goto LAB_0010cd99;
  local_134 = 0;
  local_100 = 0;
  local_198 = (long)puVar19 - (long)param_2 >> 1;
  local_7c = 0;
  local_160 = local_160 | 1;
  local_84 = local_254 | uVar10;
  local_b8 = puVar19;
  puStack_b0 = puVar19;
  iVar11 = match_constprop_0(puVar19,local_e8,*(undefined2 *)(param_1 + 0x10),uVar3,param_6,
                             &local_158);
  if ((local_130 != 0) && (local_220 == (ushort *)0x0)) {
    local_220 = local_b8;
    local_200 = puVar19;
  }
  if (iVar11 < -0x3e0) {
    if (iVar11 < -0x3e5) {
LAB_0010d29a:
      if (((puVar18 == puVar1) || (!bVar28)) || ((iVar11 + 2U & 0xfffffffd) != 0))
      goto LAB_0010d2c7;
      goto LAB_0010cdad;
    }
    switch(iVar11) {
    case -0x3e4:
    case -0x3e1:
      break;
    case -0x3e3:
      puVar24 = local_90;
      if (puVar19 < local_90) goto LAB_0010d190;
      break;
    case -0x3e2:
      local_78 = CONCAT44(local_78._4_4_,local_7c);
      puVar24 = puVar19;
      goto LAB_0010d190;
    default:
      iVar11 = 0;
      goto LAB_0010d29a;
    }
  }
  else if (iVar11 != 0) goto LAB_0010d29a;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  puVar24 = puVar19 + 1;
  if (((puVar24 < puVar18) && (bVar28)) && ((puVar19[1] & 0xfc00) == 0xdc00)) {
    puVar24 = puVar19 + 2;
  }
LAB_0010d190:
  if (uVar17 != 0) {
    if (local_78._4_4_ == 0) {
      if (((puVar19 <= local_d0 + -(local_70 & 0xffffffff)) && (*puVar19 == local_70._4_2_)) &&
         (((int)local_70 == 1 || (puVar19[1] == local_70._6_2_)))) goto LAB_0010cd99;
    }
    else if ((puVar19 < local_d0) && (iVar11 = _pcre2_is_newline_16(), iVar11 != 0))
    goto LAB_0010cd99;
  }
  puVar19 = puVar24;
  if ((puVar18 < puVar24) || ((int)uVar22 < 0)) goto LAB_0010cd99;
  if (((((puVar14 < puVar24) && (puVar24[-1] == 0xd)) && (puVar24 < puVar18)) &&
      ((*puVar24 == 10 && ((*(byte *)((long)param_1 + 0x61) & 8) == 0)))) &&
     ((local_78._4_4_ - 1 < 2 || ((int)local_70 == 2)))) {
    puVar19 = puVar24 + 1;
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_a8._8_8_;
  local_a8 = auVar9 << 0x40;
  goto LAB_0010cbbd;
LAB_0010cd99:
  if ((puVar1 == puVar18) || (!bVar28)) {
    iVar11 = 0;
LAB_0010d2c7:
    param_6[3] = param_1;
    *(undefined1 *)(param_6 + 0xc) = 0;
    param_6[5] = local_a8._0_8_;
    if (iVar11 != 1) goto LAB_0010cfcf;
    iVar11 = 0;
    iVar12 = (int)local_100;
    if (SBORROW4(iVar12,(uint)*(ushort *)((long)param_6 + 0x62) * 2) !=
        (int)(iVar12 + (uint)*(ushort *)((long)param_6 + 0x62) * -2) < 0) {
      iVar11 = ((int)(((uint)(local_100 >> 0x1f) & 1) + iVar12) >> 1) + 1;
    }
    *(int *)((long)param_6 + 100) = iVar11;
    param_6[8] = local_278;
    param_6[0xb] = (long)puVar19 - (long)param_2 >> 1;
    param_6[9] = (long)local_b8 - (long)param_2 >> 1;
    if (local_c0 < puStack_b0) {
      local_c0 = puStack_b0;
    }
    param_6[10] = (long)local_c0 - (long)param_2 >> 1;
    if ((param_5 & 0x4000) == 0) {
      param_6[4] = param_2;
    }
    else {
      sVar2 = ((long)(int)local_1e8 + local_278) * 2;
      pvVar15 = (void *)(*(code *)*param_6)(sVar2,param_6[2]);
      param_6[4] = pvVar15;
      if (pvVar15 == (void *)0x0) goto LAB_0010db02;
      memcpy(pvVar15,param_2,sVar2);
      *(byte *)((long)param_6 + 0x61) = *(byte *)((long)param_6 + 0x61) | 1;
      iVar11 = *(int *)((long)param_6 + 100);
    }
    goto LAB_0010c740;
  }
LAB_0010cdad:
  puVar24 = puVar18;
  do {
    do {
      puVar19 = puVar24 + 1;
      if (puVar1 <= puVar19) {
        local_200 = (ushort *)0x0;
        iVar11 = 0;
        param_6[3] = param_1;
        *(undefined1 *)(param_6 + 0xc) = 0;
        goto LAB_0010cfcf;
      }
      puVar24 = puVar19;
    } while ((*puVar19 & 0xfc00) == 0xdc00);
    local_d8 = puVar19;
    iVar11 = _pcre2_valid_utf_16(puVar19,local_278 - ((long)puVar19 - (long)param_2 >> 1),
                                 param_6 + 0xb);
    if (iVar11 == 0) {
      local_254 = 1;
      puVar18 = puVar1;
      local_d0 = puVar1;
      goto LAB_0010cb93;
    }
    puVar24 = puVar18;
  } while ((-1 < iVar11) ||
          (puVar18 = puVar19 + param_6[0xb], puVar24 = puVar18, local_d0 = puVar18,
          puVar18 <= puVar19));
  local_254 = 3;
  goto LAB_0010cb93;
LAB_0010cfcf:
  param_6[5] = local_a8._8_8_;
  if (((iVar11 + 2U & 0xfffffffd) == 0) && (iVar11 = -1, local_200 != (ushort *)0x0)) {
    param_6[4] = param_2;
    iVar11 = -2;
    lVar23 = (long)local_200 - (long)param_2 >> 1;
    param_6[8] = local_278;
    param_6[0xd] = lVar23;
    param_6[0xb] = lVar23;
    lVar23 = (long)puVar18 - (long)param_2 >> 1;
    param_6[0xe] = lVar23;
    param_6[10] = lVar23;
    param_6[9] = (long)local_220 - (long)param_2 >> 1;
  }
  *(int *)((long)param_6 + 100) = iVar11;
  goto LAB_0010c740;
}



/* WARNING: Removing unreachable block (ram,0x0010d10b) */
/* WARNING: Removing unreachable block (ram,0x0010d4a8) */
/* WARNING: Type propagation algorithm not settling */

int pcre2_match_16_cold(void)

{
  ushort uVar1;
  size_t __n;
  long lVar2;
  int iVar3;
  uint uVar4;
  void *__dest;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *unaff_RBX;
  void *unaff_R12;
  ushort *puVar10;
  ushort *puVar11;
  ushort *unaff_R13;
  ushort *puVar12;
  long in_FS_OFFSET;
  long unaff_retaddr;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  uint in_stack_00000018;
  ushort *in_stack_00000028;
  ushort *in_stack_00000030;
  undefined8 in_stack_00000038;
  int iStack0000000000000040;
  int iStack0000000000000044;
  ushort *in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  int iStack0000000000000060;
  char cStack0000000000000068;
  char cStack000000000000006f;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000088;
  int iStack0000000000000090;
  ushort uStack0000000000000094;
  ushort uStack0000000000000096;
  ushort *in_stack_00000098;
  int iStack00000000000000a0;
  int iStack00000000000000a4;
  ushort uStack00000000000000a8;
  ushort uStack00000000000000aa;
  ulong in_stack_00000178;
  short in_stack_00000180;
  undefined8 in_stack_00000190;
  ushort *in_stack_00000198;
  ushort *in_stack_000001b8;
  ushort *in_stack_000001c0;
  ushort *in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  ushort *in_stack_000001e8;
  int in_stack_00000204;
  uint in_stack_00000208;
  ushort in_stack_0000020c;
  ushort in_stack_0000020e;
  long in_stack_00000238;
  
code_r0x0010e5cd:
  iVar5 = 0;
  puVar9 = unaff_R13;
LAB_0010d29a:
  if (((unaff_RBX == in_stack_00000030) || (cStack000000000000006f == '\0')) ||
     (puVar8 = unaff_RBX, (iVar5 + 2U & 0xfffffffd) != 0)) {
LAB_0010d2c7:
    in_stack_00000008[3] = in_stack_00000010;
    *(undefined1 *)(in_stack_00000008 + 0xc) = 0;
    in_stack_00000008[5] = in_stack_000001d0;
    puVar10 = unaff_RBX;
    if (iVar5 == 1) {
      iVar5 = 0;
      iVar3 = (int)in_stack_00000178;
      if (SBORROW4(iVar3,(uint)*(ushort *)((long)in_stack_00000008 + 0x62) * 2) !=
          (int)(iVar3 + (uint)*(ushort *)((long)in_stack_00000008 + 0x62) * -2) < 0) {
        iVar5 = ((int)(((uint)(in_stack_00000178 >> 0x1f) & 1) + iVar3) >> 1) + 1;
      }
      *(int *)((long)in_stack_00000008 + 100) = iVar5;
      in_stack_00000008[8] = unaff_retaddr;
      in_stack_00000008[0xb] = (long)puVar9 - (long)unaff_R12 >> 1;
      in_stack_00000008[9] = (long)in_stack_000001c0 - (long)unaff_R12 >> 1;
      if (in_stack_000001b8 < in_stack_000001c8) {
        in_stack_000001b8 = in_stack_000001c8;
      }
      in_stack_00000008[10] = (long)in_stack_000001b8 - (long)unaff_R12 >> 1;
      if ((in_stack_00000018 & 0x4000) == 0) {
        in_stack_00000008[4] = unaff_R12;
      }
      else {
        __n = (iStack0000000000000090 + unaff_retaddr) * 2;
        __dest = (void *)(*(code *)*in_stack_00000008)(__n,in_stack_00000008[2]);
        in_stack_00000008[4] = __dest;
        if (__dest == (void *)0x0) {
          iVar5 = -0x30;
        }
        else {
          memcpy(__dest,unaff_R12,__n);
          *(byte *)((long)in_stack_00000008 + 0x61) = *(byte *)((long)in_stack_00000008 + 0x61) | 1;
          iVar5 = *(int *)((long)in_stack_00000008 + 100);
        }
      }
    }
    else {
LAB_0010cfcf:
      in_stack_00000008[5] = in_stack_000001d8;
      if (((iVar5 + 2U & 0xfffffffd) == 0) && (iVar5 = -1, in_stack_00000078 != 0)) {
        in_stack_00000008[4] = unaff_R12;
        iVar5 = -2;
        lVar7 = in_stack_00000078 - (long)unaff_R12 >> 1;
        in_stack_00000008[8] = unaff_retaddr;
        in_stack_00000008[0xd] = lVar7;
        in_stack_00000008[0xb] = lVar7;
        lVar7 = (long)puVar10 - (long)unaff_R12 >> 1;
        in_stack_00000008[0xe] = lVar7;
        in_stack_00000008[10] = lVar7;
        in_stack_00000008[9] = in_stack_00000058 - (long)unaff_R12 >> 1;
      }
      *(int *)((long)in_stack_00000008 + 100) = iVar5;
    }
    if (in_stack_00000238 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar5;
  }
LAB_0010cdad:
  puVar10 = puVar8;
  do {
    do {
      puVar11 = puVar8 + 1;
      if (in_stack_00000030 <= puVar11) {
        in_stack_00000078 = 0;
        iVar5 = 0;
        in_stack_00000008[3] = in_stack_00000010;
        *(undefined1 *)(in_stack_00000008 + 0xc) = 0;
        goto LAB_0010cfcf;
      }
      puVar8 = puVar11;
    } while ((*puVar11 & 0xfc00) == 0xdc00);
    iVar5 = _pcre2_valid_utf_16(puVar11,unaff_retaddr - ((long)puVar11 - (long)unaff_R12 >> 1),
                                in_stack_00000008 + 0xb);
    unaff_RBX = in_stack_00000030;
  } while ((iVar5 != 0) &&
          ((puVar8 = puVar10, -1 < iVar5 ||
           (unaff_RBX = puVar11 + in_stack_00000008[0xb], puVar8 = unaff_RBX, puVar10 = unaff_RBX,
           unaff_RBX <= puVar11))));
  in_stack_00000078 = 0;
  lVar2 = in_stack_00000078;
  in_stack_00000058 = 0;
  lVar7 = in_stack_00000058;
LAB_0010cbbd:
  unaff_R13 = puVar11;
  puVar10 = in_stack_00000098;
  if ((*(byte *)(in_stack_00000010 + 0x5a) & 1) != 0) goto LAB_0010d070;
  puVar8 = unaff_RBX;
  puVar9 = puVar11;
  if (iStack0000000000000044 != 0) {
    puVar8 = puVar11;
    if (iStack0000000000000040 == 0) {
      if (puVar11 < unaff_RBX) {
        do {
          if (in_stack_00000204 == 0) {
            if (((puVar8 <= unaff_RBX + -(ulong)in_stack_00000208) && (*puVar8 == in_stack_0000020c)
                ) && ((in_stack_00000208 == 1 || (puVar8[1] == in_stack_0000020e)))) break;
          }
          else if ((puVar8 < unaff_RBX) && (iVar5 = _pcre2_is_newline_16(), iVar5 != 0)) break;
          puVar8 = puVar8 + 1;
        } while (puVar8 < unaff_RBX);
        goto LAB_0010cc60;
      }
    }
    else if (puVar11 < unaff_RBX) {
      do {
        puVar12 = puVar8;
        puVar8 = puVar12;
        if (in_stack_00000204 == 0) {
          if (((puVar12 <= unaff_RBX + -(ulong)in_stack_00000208) && (*puVar12 == in_stack_0000020c)
              ) && ((in_stack_00000208 == 1 || (puVar12[1] == in_stack_0000020e))))
          goto LAB_0010cc60;
        }
        else if ((puVar12 < unaff_RBX) && (iVar5 = _pcre2_is_newline_16(), iVar5 != 0))
        goto LAB_0010cc60;
        puVar8 = puVar12 + 1;
        if ((unaff_RBX <= puVar8) ||
           (((puVar12[1] & 0xfc00) == 0xdc00 && (puVar8 = puVar12 + 2, unaff_RBX <= puVar8))))
        goto LAB_0010cc60;
      } while( true );
    }
    if (-1 < _iStack0000000000000060) {
      if (iStack0000000000000060 == 0) goto LAB_0010d3ca;
      goto LAB_0010ccc0;
    }
    if ((in_stack_00000070 == 0) && (iStack0000000000000060 == 0)) goto LAB_0010d050;
    goto LAB_0010cd99;
  }
LAB_0010cc60:
  if (-1 < _iStack0000000000000060) {
    if (iStack0000000000000060 == 0) {
LAB_0010d3ca:
      if (iStack00000000000000a0 == 0) {
        if (in_stack_00000070 != 0) {
          for (; puVar11 < puVar8; puVar11 = puVar11 + 1) {
            uVar4 = (uint)*puVar11;
            if (0xff < uVar4) {
              uVar4 = 0xff;
            }
            if ((*(byte *)(in_stack_00000070 + (ulong)(uVar4 >> 3)) >> (uVar4 & 7) & 1) != 0) break;
          }
          goto LAB_0010ccc0;
        }
      }
      else if ((ushort *)(in_stack_00000088 + (long)in_stack_00000198) < puVar11) {
        if (iStack0000000000000040 == 0) {
          for (; puVar11 = puVar9, puVar9 < puVar8; puVar9 = puVar9 + 1) {
            if (in_stack_00000204 == 0) {
              uVar6 = (ulong)in_stack_00000208;
              if (((in_stack_00000198 + uVar6 <= puVar9) && (puVar9[-uVar6] == in_stack_0000020c))
                 && ((in_stack_00000208 == 1 || (puVar9[1 - uVar6] == in_stack_0000020e)))) break;
            }
            else if ((in_stack_00000198 < puVar9) && (iVar5 = _pcre2_was_newline_16(), iVar5 != 0))
            goto LAB_0010d9e9;
          }
        }
        else if (puVar11 < puVar8) {
          do {
            puVar9 = puVar11;
            if (in_stack_00000204 == 0) {
              uVar6 = (ulong)in_stack_00000208;
              if (((in_stack_00000198 + uVar6 <= puVar9) && (puVar9[-uVar6] == in_stack_0000020c))
                 && ((puVar11 = puVar9, in_stack_00000208 == 1 ||
                     (puVar9[1 - uVar6] == in_stack_0000020e)))) break;
            }
            else if ((in_stack_00000198 < puVar9) && (iVar5 = _pcre2_was_newline_16(), iVar5 != 0))
            goto LAB_0010d9e9;
            puVar11 = puVar9 + 1;
            if ((puVar8 <= puVar11) ||
               (((puVar9[1] & 0xfc00) == 0xdc00 && (puVar11 = puVar9 + 2, puVar8 <= puVar11))))
            break;
          } while( true );
        }
      }
      goto LAB_0010d050;
    }
    if (uStack0000000000000096 == uStack0000000000000094) {
      for (; (puVar11 < puVar8 && (*puVar11 != uStack0000000000000096)); puVar11 = puVar11 + 1) {
      }
    }
    else {
      for (; ((puVar11 < puVar8 && (uStack0000000000000094 != *puVar11)) &&
             (uStack0000000000000096 != *puVar11)); puVar11 = puVar11 + 1) {
      }
    }
LAB_0010ccc0:
    unaff_R13 = puVar11;
    if (in_stack_00000180 != 0) goto LAB_0010d070;
    puVar9 = puVar11;
    if (puVar11 < unaff_RBX) goto LAB_0010cce0;
    goto LAB_0010cd99;
  }
  if ((in_stack_00000070 == 0) && (iStack0000000000000060 == 0)) goto LAB_0010d050;
  if (puVar8 <= puVar11) goto LAB_0010cd99;
  uVar1 = *puVar11;
  if ((iStack0000000000000060 == 0) ||
     ((uStack0000000000000096 != uVar1 && (uStack0000000000000094 != uVar1)))) {
    if (in_stack_00000070 == 0) goto LAB_0010cd99;
    uVar4 = (uint)uVar1;
    if (0xff < uVar1) {
      uVar4 = 0xff;
    }
    if ((*(byte *)(in_stack_00000070 + (ulong)(ushort)((ushort)uVar4 >> 3)) >> (uVar4 & 7) & 1) == 0
       ) goto LAB_0010cd99;
  }
  goto LAB_0010d050;
LAB_0010d9e9:
  puVar11 = puVar9;
  if ((puVar9[-1] == 0xd) &&
     (((in_stack_00000204 - 1U < 2 && (puVar9 < puVar8)) && (*puVar9 == 10)))) {
    puVar11 = puVar9 + 1;
  }
LAB_0010d050:
  unaff_R13 = puVar11;
  if (in_stack_00000180 == 0) {
LAB_0010cce0:
    uVar6 = (long)unaff_RBX - (long)puVar11;
    puVar8 = unaff_RBX;
    puVar9 = puVar11;
    if ((long)uVar6 >> 1 < (long)(ulong)*(ushort *)(in_stack_00000010 + 0x7e)) goto LAB_0010cd99;
    puVar8 = puVar11 + iStack0000000000000060;
    unaff_R13 = puVar11;
    if (((in_stack_00000098 < puVar8) && (iStack00000000000000a4 != 0)) &&
       ((uVar6 < 3999 || ((-1 < _iStack0000000000000060 && (uVar6 < 3999999)))))) {
      if (uStack00000000000000aa == uStack00000000000000a8) {
        do {
          puVar10 = puVar8;
          puVar8 = unaff_RBX;
          if (unaff_RBX <= puVar10) goto LAB_0010cd99;
          puVar8 = puVar10 + 1;
        } while (*puVar10 != uStack00000000000000aa);
      }
      else {
        do {
          puVar10 = puVar8;
          puVar8 = unaff_RBX;
          if (unaff_RBX <= puVar10) goto LAB_0010cd99;
        } while ((*puVar10 != uStack00000000000000a8) &&
                (puVar8 = puVar10 + 1, *puVar10 != uStack00000000000000aa));
      }
    }
  }
LAB_0010d070:
  in_stack_00000098 = puVar10;
  puVar8 = unaff_RBX;
  puVar9 = unaff_R13;
  if (in_stack_00000048 < unaff_R13) goto LAB_0010cd99;
  in_stack_00000178 = 0;
  iVar5 = match_constprop_0(unaff_R13,in_stack_00000190,*(undefined2 *)(in_stack_00000010 + 0x80),
                            in_stack_00000038,in_stack_00000008,in_stack_00000050);
  in_stack_00000078 = 0;
  in_stack_00000058 = 0;
  in_stack_000001c0 = unaff_R13;
  in_stack_000001c8 = unaff_R13;
  if (iVar5 < -0x3e0) {
    in_stack_00000058 = lVar7;
    in_stack_00000078 = lVar2;
    if (iVar5 < -0x3e5) goto LAB_0010d29a;
    switch(iVar5) {
    case -0x3e4:
    case -0x3e1:
      break;
    case -0x3e3:
      puVar11 = in_stack_000001e8;
      if (unaff_R13 < in_stack_000001e8) goto LAB_0010d190;
      break;
    case -0x3e2:
      puVar11 = unaff_R13;
      goto LAB_0010d190;
    default:
      goto code_r0x0010e5cd;
    }
  }
  else if (iVar5 != 0) goto LAB_0010d29a;
  puVar11 = unaff_R13 + 1;
  if (((puVar11 < unaff_RBX) && (cStack000000000000006f != '\0')) &&
     ((unaff_R13[1] & 0xfc00) == 0xdc00)) {
    puVar11 = unaff_R13 + 2;
  }
LAB_0010d190:
  if (iStack0000000000000044 != 0) {
    if (in_stack_00000204 == 0) {
      if (((unaff_R13 <= unaff_RBX + -(ulong)in_stack_00000208) && (*unaff_R13 == in_stack_0000020c)
          ) && ((in_stack_00000208 == 1 || (unaff_R13[1] == in_stack_0000020e)))) goto LAB_0010cd99;
    }
    else if ((unaff_R13 < unaff_RBX) && (iVar5 = _pcre2_is_newline_16(), iVar5 != 0))
    goto LAB_0010cd99;
  }
  puVar9 = puVar11;
  if ((unaff_RBX < puVar11) || (cStack0000000000000068 != '\0')) goto LAB_0010cd99;
  if (((((in_stack_00000028 < puVar11) && (puVar11[-1] == 0xd)) && (puVar11 < unaff_RBX)) &&
      ((*puVar11 == 10 && ((*(byte *)(in_stack_00000010 + 0x61) & 8) == 0)))) &&
     ((in_stack_00000204 - 1U < 2 || (in_stack_00000208 == 2)))) {
    puVar11 = puVar11 + 1;
  }
  in_stack_000001d0 = 0;
  goto LAB_0010cbbd;
LAB_0010cd99:
  in_stack_00000078 = 0;
  in_stack_00000058 = 0;
  if ((in_stack_00000030 == puVar8) || (cStack000000000000006f == '\0')) {
    iVar5 = 0;
    unaff_RBX = puVar8;
    goto LAB_0010d2c7;
  }
  goto LAB_0010cdad;
}


