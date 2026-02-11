
int compare_ranges(ulong *param_1,ulong *param_2)

{
  return (uint)(*param_2 < *param_1) - (uint)(*param_1 < *param_2);
}



void set_fields(byte *param_1,uint param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort **ppuVar9;
  undefined8 uVar10;
  ulong uVar11;
  void *__ptr;
  undefined8 uVar12;
  bool bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  size_t sVar19;
  ulong *puVar20;
  ulong *puVar21;
  byte *pbVar22;
  byte bVar23;
  ulong uVar24;
  size_t sVar25;
  long lVar26;
  ulong uVar27;
  char cVar28;
  ulong *puVar29;
  ulong uVar30;
  
  if ((param_2 & 1) != 0) goto LAB_001000e0;
  pbVar22 = param_1 + 1;
  bVar13 = false;
  uVar30 = 0;
  uVar15 = 0;
  uVar24 = 0;
  uVar11 = 1;
  uVar16 = 0;
  do {
    bVar2 = pbVar22[-1];
    bVar23 = (byte)uVar24;
    cVar28 = (char)uVar30;
    if (bVar2 == 0x2d) {
      if (cVar28 != '\0') break;
      if ((uVar16 == 0 & bVar23) != 0) goto LAB_00100787;
      bVar13 = false;
      if (bVar23 == 0) {
        uVar30 = 1;
        uVar14 = 0;
        uVar16 = 1;
      }
      else {
        uVar14 = 0;
        uVar30 = uVar24;
      }
    }
    else if (((bVar2 == 0x2c) || (ppuVar9 = __ctype_b_loc(), ((*ppuVar9)[bVar2] & 1) != 0)) ||
            (bVar2 == 0)) {
      if (cVar28 == '\0') {
        if (uVar16 == 0) goto LAB_00100787;
        if (n_frp_allocated == n_frp) {
          frp = (ulong *)xpalloc(frp,&n_frp_allocated,1,0xffffffffffffffff,0x10);
        }
        puVar21 = frp;
        sVar19 = n_frp + 1;
        puVar29 = frp + n_frp * 2;
        *puVar29 = uVar16;
        puVar29[1] = uVar16;
      }
      else if ((char)uVar15 == '\0') {
        if (bVar23 == 0) {
          pcVar18 = "invalid range with no endpoint: -";
          goto LAB_001000bb;
        }
        if (n_frp_allocated == n_frp) {
          frp = (ulong *)xpalloc(frp,&n_frp_allocated,1,0xffffffffffffffff,0x10);
        }
        puVar21 = frp;
        sVar19 = n_frp + 1;
        puVar29 = frp + n_frp * 2;
        *puVar29 = uVar11;
        puVar29[1] = 0xffffffffffffffff;
      }
      else {
        if (uVar16 < uVar11) goto LAB_00100868;
        if (n_frp_allocated == n_frp) {
          frp = (ulong *)xpalloc(frp,&n_frp_allocated,1,0xffffffffffffffff,0x10);
        }
        puVar21 = frp;
        sVar19 = n_frp + 1;
        puVar29 = frp + n_frp * 2;
        *puVar29 = uVar11;
        puVar29[1] = uVar16;
      }
      n_frp = sVar19;
      if (pbVar22[-1] == 0) goto LAB_0010026f;
      bVar13 = false;
      uVar24 = 0;
      uVar14 = 0;
      uVar16 = uVar11;
      uVar15 = 0;
      uVar30 = 0;
    }
    else {
      param_1 = pbVar22 + -1;
      if (9 < (int)(char)bVar2 - 0x30U) goto LAB_00100458;
      if ((!bVar13) || (num_start_0 == (byte *)0x0)) {
        num_start_0 = param_1;
      }
      uVar27 = uVar30;
      if (cVar28 == '\0') {
        uVar24 = 1;
        uVar27 = uVar15;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar16;
      uVar16 = SUB168(auVar4 * ZEXT816(10),0);
      if (SUB168(auVar4 * ZEXT816(10),8) != 0) {
LAB_001007fd:
        pbVar22 = num_start_0;
        sVar19 = strspn((char *)num_start_0,"0123456789");
        __ptr = (void *)ximemdup0(pbVar22,sVar19);
        uVar10 = quote(__ptr);
        if ((param_2 & 4) == 0) {
          uVar12 = dcgettext(0,"field number %s is too large",5);
        }
        else {
          uVar12 = dcgettext(0,"byte/character offset %s is too large",5);
        }
        error(0,0,uVar12,uVar10);
        free(__ptr);
        usage();
LAB_00100868:
        pcVar18 = "invalid decreasing range";
LAB_001000bb:
        do {
          uVar10 = dcgettext(0,pcVar18,5);
LAB_001000c2:
          error(0,0,uVar10);
          param_1 = (byte *)0x1;
          usage();
LAB_001000e0:
          if ((*param_1 == 0x2d) && (param_1[1] == 0)) {
            param_1 = param_1 + 1;
            bVar13 = true;
            uVar24 = 1;
          }
          else {
            bVar13 = false;
            uVar24 = 0;
          }
          bVar8 = false;
          uVar16 = 1;
          bVar5 = bVar13;
          bVar7 = false;
LAB_001001c9:
          while( true ) {
            pbVar22 = param_1 + 1;
            bVar2 = *param_1;
            if (bVar2 != 0x2d) break;
            if (bVar5) goto LAB_001007a6;
            if ((bool)(uVar24 == 0 & bVar13)) goto LAB_00100787;
            bVar8 = false;
            if (bVar13) {
              uVar16 = uVar24;
              uVar24 = 0;
              param_1 = pbVar22;
              bVar5 = bVar13;
            }
            else {
              uVar16 = 1;
              uVar24 = 0;
              param_1 = pbVar22;
              bVar5 = true;
            }
          }
          if (((bVar2 == 0x2c) || (ppuVar9 = __ctype_b_loc(), ((*ppuVar9)[bVar2] & 1) != 0)) ||
             (bVar2 == 0)) {
            if (bVar5) {
              if (bVar13) {
                if (bVar7) goto LAB_00100349;
              }
              else {
                if (bVar7) {
LAB_00100349:
                  if (uVar16 <= uVar24) {
                    if (n_frp == n_frp_allocated) goto LAB_001004a0;
                    goto LAB_0010036d;
                  }
                  goto LAB_00100868;
                }
                uVar16 = 1;
              }
              if (n_frp == n_frp_allocated) {
                frp = (ulong *)xpalloc(frp,&n_frp_allocated,1,0xffffffffffffffff,0x10);
              }
              puVar21 = frp;
              puVar29 = frp + n_frp * 2;
              *puVar29 = uVar16;
              puVar29[1] = 0xffffffffffffffff;
              goto LAB_001001a5;
            }
            if (uVar24 == 0) goto LAB_00100787;
            if (n_frp == n_frp_allocated) {
              frp = (ulong *)xpalloc(frp,&n_frp_allocated,1,0xffffffffffffffff,0x10);
            }
            puVar21 = frp;
            sVar19 = n_frp + 1;
            puVar29 = frp + n_frp * 2;
            n_frp = sVar19;
            *puVar29 = uVar24;
            puVar29[1] = uVar24;
            bVar2 = *param_1;
          }
          else {
            if ((int)(char)bVar2 - 0x30U < 10) {
              if ((!bVar8) || (num_start_0 == (byte *)0x0)) {
                num_start_0 = param_1;
              }
              bVar6 = bVar5;
              if (!bVar5) {
                bVar13 = true;
                bVar6 = bVar7;
              }
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar24;
              uVar11 = SUB168(auVar3 * ZEXT816(10),0);
              if (SUB168(auVar3 * ZEXT816(10),8) != 0) goto LAB_001007fd;
              uVar15 = (ulong)((char)bVar2 + -0x30);
              uVar24 = uVar11 + uVar15;
              if ((uVar24 == 0xffffffffffffffff) || (CARRY8(uVar11,uVar15))) goto LAB_001007fd;
              bVar8 = true;
              param_1 = pbVar22;
              bVar7 = bVar6;
              goto LAB_001001c9;
            }
LAB_00100458:
            uVar10 = quote(param_1);
            if ((param_2 & 4) == 0) {
              uVar12 = dcgettext(0,"invalid field value %s",5);
            }
            else {
              uVar12 = dcgettext(0,"invalid byte/character position %s",5);
            }
            error(0,0,uVar12,uVar10);
            usage(1);
LAB_001004a0:
            frp = (ulong *)xpalloc();
LAB_0010036d:
            puVar21 = frp;
            puVar29 = frp + n_frp * 2;
            *puVar29 = uVar16;
            puVar29[1] = uVar24;
LAB_001001a5:
            sVar19 = n_frp + 1;
            bVar2 = pbVar22[-1];
            n_frp = sVar19;
          }
          if (bVar2 != 0) {
            bVar8 = false;
            bVar5 = false;
            bVar13 = false;
            uVar24 = 0;
            param_1 = pbVar22;
            bVar7 = false;
            goto LAB_001001c9;
          }
LAB_0010026f:
          if (sVar19 != 0) {
            qsort(puVar21,sVar19,0x10,compare_ranges);
            sVar19 = n_frp;
            puVar29 = frp;
            if ((long)n_frp < 1) goto LAB_00100548;
            lVar26 = 0;
            lVar17 = 0x10;
            goto LAB_001002b0;
          }
          if ((param_2 & 4) != 0) {
            uVar10 = dcgettext(0,"missing list of byte/character positions",5);
            goto LAB_001000c2;
          }
          pcVar18 = "missing list of fields";
        } while( true );
      }
      uVar15 = (ulong)((char)bVar2 + -0x30);
      uVar14 = uVar15 + uVar16;
      if ((uVar14 == 0xffffffffffffffff) || (CARRY8(uVar15,uVar16))) goto LAB_001007fd;
      bVar13 = true;
      uVar16 = uVar11;
      uVar15 = uVar27;
    }
    pbVar22 = pbVar22 + 1;
    uVar11 = uVar16;
    uVar16 = uVar14;
  } while( true );
LAB_001007a6:
  if ((param_2 & 4) == 0) {
    uVar10 = dcgettext(0,"invalid field range",5);
  }
  else {
    uVar10 = dcgettext(0,"invalid byte or character range",5);
  }
  goto LAB_001000c2;
LAB_00100787:
  if ((param_2 & 4) == 0) {
    uVar10 = dcgettext(0,"fields are numbered from 1",5);
  }
  else {
    uVar10 = dcgettext(0,"byte/character positions are numbered from 1",5);
  }
  goto LAB_001000c2;
LAB_001002b0:
  lVar26 = lVar26 + 1;
  if ((long)sVar19 <= lVar26) {
LAB_00100548:
    n_frp = sVar19;
    if ((param_2 & 2) != 0) {
      frp = (ulong *)0x0;
      uVar24 = *puVar29;
      n_frp = 0;
      n_frp_allocated = 0;
      if (1 < uVar24) {
        frp = (ulong *)xpalloc(0,&n_frp_allocated,1,0xffffffffffffffff,0x10);
        puVar21 = frp + n_frp * 2;
        *puVar21 = 1;
        puVar21[1] = uVar24 - 1;
        n_frp = n_frp + 1;
      }
      puVar21 = puVar29 + 1;
      sVar25 = 1;
      if (1 < (long)sVar19) {
        do {
          uVar24 = *puVar21;
          uVar16 = puVar21[1];
          if (uVar24 + 1 != uVar16) {
            if (n_frp == n_frp_allocated) {
              frp = (ulong *)xpalloc(frp,&n_frp_allocated,1,0xffffffffffffffff,0x10);
            }
            puVar20 = frp + n_frp * 2;
            *puVar20 = uVar24 + 1;
            puVar20[1] = uVar16 - 1;
            n_frp = n_frp + 1;
          }
          sVar25 = sVar25 + 1;
          puVar21 = puVar21 + 2;
        } while (sVar25 != sVar19);
      }
      uVar24 = puVar29[sVar19 * 2 + -1];
      if (uVar24 != 0xffffffffffffffff) {
        if (n_frp == n_frp_allocated) {
          frp = (ulong *)xpalloc(frp,&n_frp_allocated,1,0xffffffffffffffff,0x10);
        }
        puVar21 = frp + n_frp * 2;
        *puVar21 = uVar24 + 1;
        puVar21[1] = 0xffffffffffffffff;
        n_frp = n_frp + 1;
      }
      free(puVar29);
      puVar29 = frp;
    }
    n_frp = n_frp + 1;
    frp = (ulong *)xrealloc(puVar29,n_frp * 0x10);
    puVar1 = (undefined4 *)((long)frp + -0x10 + n_frp * 0x10);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    return;
  }
  while( true ) {
    puVar21 = (ulong *)((long)puVar29 + lVar17);
    uVar24 = *(ulong *)((long)puVar29 + lVar17 + -8);
    if (uVar24 < *puVar21) break;
    uVar16 = puVar21[1];
    if (puVar21[1] < uVar24) {
      uVar16 = uVar24;
    }
    *(ulong *)((long)puVar29 + lVar17 + -8) = uVar16;
    memmove(puVar21,(void *)((long)puVar29 + lVar17 + 0x10),((sVar19 - lVar26) + -1) * 0x10);
    sVar19 = n_frp - 1;
    puVar29 = frp;
    n_frp = sVar19;
    if ((long)sVar19 <= lVar26) goto LAB_00100548;
  }
  lVar17 = lVar17 + 0x10;
  if ((long)sVar19 <= lVar26) goto LAB_00100548;
  goto LAB_001002b0;
}


