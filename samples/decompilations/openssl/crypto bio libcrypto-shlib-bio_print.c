
undefined8 doapr_outch(long *param_1,long *param_2,ulong *param_3,ulong *param_4,undefined1 param_5)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int num;
  ulong __n;
  
  if (param_2 == (long *)0x0 && *param_1 == 0) {
    return 0;
  }
  __n = *param_3;
  uVar1 = *param_4;
  if (uVar1 < __n) {
    return 0;
  }
  if ((__n == uVar1) && (param_2 != (long *)0x0)) {
    if (0x7ffffbff < uVar1) {
      return 0;
    }
    pvVar3 = (void *)*param_2;
    *param_4 = uVar1 + 0x400;
    num = (int)(uVar1 + 0x400);
    if (pvVar3 != (void *)0x0) {
      pvVar3 = CRYPTO_realloc(pvVar3,num,"crypto/bio/bio_print.c",0x35b);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      __n = *param_3;
      *param_2 = (long)pvVar3;
      uVar1 = *param_4;
      goto LAB_0010003b;
    }
    pvVar3 = CRYPTO_malloc(num,"crypto/bio/bio_print.c",0x350);
    *param_2 = (long)pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    __n = *param_3;
    if (__n != 0) {
      if ((void *)*param_1 == (void *)0x0) {
        return 0;
      }
      memcpy(pvVar3,(void *)*param_1,__n);
    }
    *param_1 = 0;
    if (*param_4 <= __n) {
      return 1;
    }
  }
  else {
LAB_0010003b:
    if (uVar1 <= __n) {
      return 1;
    }
    lVar2 = *param_1;
    if (lVar2 != 0) goto LAB_0010004d;
  }
  lVar2 = *param_2;
LAB_0010004d:
  *param_3 = __n + 1;
  *(undefined1 *)(lVar2 + __n) = param_5;
  return 1;
}



undefined8
fmtint(long *param_1,long *param_2,ulong *param_3,ulong *param_4,ulong param_5,int param_6,
      int param_7,int param_8,uint param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  ulong __n;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_8c;
  int local_70;
  undefined4 local_6c;
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 < 0) {
    param_8 = 0;
  }
  if ((param_9 & 0x40) == 0) {
    if ((long)param_5 < 0) {
      uVar1 = 1;
      param_5 = -param_5;
      local_70 = 0x2d;
    }
    else if ((param_9 & 2) == 0) {
      uVar1 = param_9 >> 2 & 1;
      local_70 = (param_9 >> 2 & 1) << 5;
    }
    else {
      uVar1 = 1;
      local_70 = 0x2b;
    }
  }
  else {
    uVar1 = 0;
    local_70 = 0;
  }
  pcVar12 = "";
  if ((((param_9 & 8) != 0) && (pcVar12 = "0", param_6 != 8)) && (pcVar12 = "0x", param_6 != 0x10))
  {
    pcVar12 = "";
  }
  uVar11 = (ulong)param_6;
  lVar7 = 1;
  pcVar10 = "0123456789ABCDEF";
  if ((param_9 & 0x20) == 0) {
    pcVar10 = "0123456789abcdef";
  }
  do {
    local_68[lVar7 + -1] = pcVar10[param_5 % uVar11];
    bVar13 = uVar11 <= param_5;
    iVar3 = (int)lVar7;
    lVar7 = lVar7 + 1;
    param_5 = param_5 / uVar11;
  } while (bVar13 && iVar3 < 0x1a);
  iVar8 = 0x19;
  if (iVar3 != 0x1a) {
    iVar8 = iVar3;
  }
  local_68[iVar8] = '\0';
  sVar4 = strlen(pcVar12);
  iVar3 = param_8;
  if (param_8 <= iVar8) {
    iVar3 = iVar8;
  }
  iVar2 = ((param_7 - iVar3) - uVar1) - (int)sVar4;
  iVar3 = param_8 - iVar8;
  if (param_8 - iVar8 < 0) {
    iVar3 = 0;
  }
  iVar9 = 0;
  if (-1 < iVar2) {
    iVar9 = iVar2;
  }
  if ((param_9 & 0x10) == 0) {
    if ((param_9 & 1) == 0) {
      local_8c = 0;
      if (0 < iVar2) {
        local_6c = iVar3;
        do {
          if (param_2 == (long *)0x0 && *param_1 == 0) goto LAB_001002c0;
          __n = *param_3;
          uVar11 = *param_4;
          if (uVar11 < __n) goto LAB_001002c0;
          if ((__n == uVar11) && (param_2 != (long *)0x0)) {
            if (0x7ffffbff < uVar11) goto LAB_001002c0;
            pvVar5 = (void *)*param_2;
            *param_4 = uVar11 + 0x400;
            iVar3 = (int)(uVar11 + 0x400);
            if (pvVar5 != (void *)0x0) {
              pvVar5 = CRYPTO_realloc(pvVar5,iVar3,"crypto/bio/bio_print.c",0x35b);
              if (pvVar5 != (void *)0x0) {
                __n = *param_3;
                *param_2 = (long)pvVar5;
                uVar11 = *param_4;
                goto LAB_00100430;
              }
              goto LAB_001002c0;
            }
            pvVar5 = CRYPTO_malloc(iVar3,"crypto/bio/bio_print.c",0x350);
            *param_2 = (long)pvVar5;
            if (pvVar5 == (void *)0x0) goto LAB_001002c0;
            __n = *param_3;
            if (__n == 0) {
              *param_1 = 0;
              if (*param_4 == 0) goto LAB_0010044e;
LAB_00100580:
              lVar7 = *param_2;
              goto LAB_00100442;
            }
            if ((void *)*param_1 == (void *)0x0) goto LAB_001002c0;
            memcpy(pvVar5,(void *)*param_1,__n);
            *param_1 = 0;
            if (__n < *param_4) goto LAB_00100580;
          }
          else {
LAB_00100430:
            if (__n < uVar11) {
              lVar7 = *param_1;
              if (lVar7 == 0) goto LAB_00100580;
LAB_00100442:
              *param_3 = __n + 1;
              *(undefined1 *)(lVar7 + __n) = 0x20;
            }
          }
LAB_0010044e:
          iVar9 = iVar9 + -1;
          iVar3 = local_6c;
        } while (iVar9 != 0);
      }
    }
    else {
      local_8c = -iVar9;
    }
  }
  else {
    local_8c = 0;
    if (iVar3 < iVar9) {
      iVar3 = iVar9;
    }
  }
  if ((local_70 == 0) || (iVar2 = doapr_outch(param_1,param_2,param_3,param_4,local_70), iVar2 != 0)
     ) {
    for (; *pcVar12 != '\0'; pcVar12 = pcVar12 + 1) {
      iVar2 = doapr_outch(param_1,param_2,param_3,param_4);
      if (iVar2 == 0) goto LAB_001002c0;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      iVar2 = doapr_outch(param_1,param_2,param_3,param_4,0x30);
      if (iVar2 == 0) goto LAB_001002c0;
    }
    pcVar12 = local_68 + iVar8;
    do {
      if (local_68 == pcVar12) {
        if (local_8c == 0) goto LAB_001005f8;
        goto LAB_001003ca;
      }
      pcVar10 = pcVar12 + -1;
      pcVar12 = pcVar12 + -1;
      iVar3 = doapr_outch(param_1,param_2,param_3,param_4,(int)*pcVar10);
    } while (iVar3 != 0);
  }
LAB_001002c0:
  uVar6 = 0;
  goto LAB_001002c2;
  while (local_8c = local_8c + 1, local_8c != 0) {
LAB_001003ca:
    iVar3 = doapr_outch(param_1,param_2,param_3,param_4,0x20);
    if (iVar3 == 0) goto LAB_001002c0;
  }
LAB_001005f8:
  uVar6 = 1;
LAB_001002c2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fmtfp(double param_1,long *param_2,long *param_3,ulong *param_4,ulong *param_5,int param_6,
     uint param_7,uint param_8,int param_9)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long in_FS_OFFSET;
  double dVar19;
  double dVar20;
  double dVar21;
  uint local_d8;
  uint local_c8;
  int local_c4;
  uint local_a0;
  undefined4 local_9c;
  undefined1 local_98 [31];
  char local_79 [32];
  undefined1 local_59 [25];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_7 < 0) {
    param_7 = 6;
  }
  dVar20 = param_1;
  dVar19 = _LC6;
  if (param_1 < 0.0) {
    if ((param_9 == 2) || (param_9 != 0)) {
      local_c8 = 1;
      uVar3 = 0x2d;
      goto LAB_00100b71;
    }
    uVar3 = 0x2d;
    uVar16 = 0;
LAB_00100711:
    param_1 = (double)((ulong)param_1 ^ __LC19);
LAB_00100719:
    if (param_1 < __LC20) {
      local_c8 = 0;
      dVar20 = param_1;
LAB_0010072f:
      if (_LC17 <= dVar20) {
        uVar17 = (long)(dVar20 - _LC17) ^ 0x8000000000000000;
      }
      else {
        uVar17 = (ulong)dVar20;
      }
      local_d8 = 9;
      if ((int)param_7 < 10) {
        local_d8 = param_7;
      }
      if (param_7 == 0) {
        local_d8 = 0;
        uVar9 = 1;
      }
      else if (param_7 == 1) {
        uVar9 = 10;
        dVar19 = _LC8;
      }
      else if (param_7 == 2) {
        uVar9 = 100;
        dVar19 = _LC9;
      }
      else {
        dVar19 = _LC10;
        if (param_7 == 3) {
          uVar9 = 1000;
        }
        else if (param_7 == 4) {
          uVar9 = 10000;
          dVar19 = _LC11;
        }
        else if (param_7 == 5) {
          uVar9 = 100000;
          dVar19 = _LC12;
        }
        else if (param_7 == 6) {
          uVar9 = 1000000;
          dVar19 = _LC13;
        }
        else if (param_7 == 7) {
          uVar9 = 10000000;
          dVar19 = _LC14;
        }
        else {
          uVar9 = 100000000;
          if ((param_7 == 8) ||
             (((((uVar9 = 1000000000, param_7 != 3 && (dVar19 = _LC11, param_7 != 4)) &&
                (dVar19 = _LC12, param_7 != 5)) &&
               ((dVar19 = _LC13, param_7 != 6 && (dVar19 = _LC14, param_7 != 7)))) &&
              (dVar19 = _LC7, param_7 == 8)))) {
            dVar19 = _LC15;
          }
        }
      }
LAB_001007eb:
      dVar19 = (dVar20 - (double)uVar17) * dVar19;
      lVar14 = (long)dVar19;
      uVar15 = (lVar14 + 1) - (ulong)(dVar19 - (double)lVar14 < __LC21);
      if (uVar9 <= uVar15) {
        uVar17 = uVar17 + 1;
        uVar15 = uVar15 - uVar9;
      }
      lVar14 = 1;
      do {
        local_98[lVar14 + -1] = (&_LC22)[uVar17 % 10];
        bVar2 = 9 < uVar17;
        iVar7 = (int)lVar14;
        lVar14 = lVar14 + 1;
        uVar17 = uVar17 / 10;
      } while (bVar2 && iVar7 < 0x14);
      if (iVar7 == 0x14) {
        iVar7 = 0x13;
      }
      local_98[iVar7] = 0;
      if (param_7 != 0) {
        param_7 = 0;
        do {
          uVar17 = uVar15 / 10;
          uVar15 = uVar15 % 10;
          if ((param_7 == 0) && (param_9 == 2)) {
            while (uVar15 == 0) {
              local_d8 = local_d8 - 1;
              if ((int)local_d8 < 1) {
                param_7 = 0;
                goto LAB_00100912;
              }
              uVar15 = uVar17 % 10;
              uVar17 = uVar17 / 10;
            }
            lVar14 = 0;
          }
          else {
            lVar14 = (long)(int)param_7;
          }
          param_7 = (int)lVar14 + 1;
          local_79[lVar14 + 1] = (&_LC22)[uVar15];
          uVar15 = uVar17;
        } while ((int)param_7 < (int)local_d8);
      }
LAB_00100912:
      lVar14 = (long)(int)param_7;
      local_79[lVar14 + 1] = '\0';
      if (local_c8 == 1) {
        lVar12 = 1;
        uVar17 = (ulong)(uint)-(int)uVar16;
        if (-1 < (long)uVar16) {
          uVar17 = uVar16 & 0xffffffff;
        }
        do {
          iVar6 = (int)uVar17;
          local_59[lVar12] = (&_LC22)[iVar6 % 10];
          uVar17 = (ulong)(uint)(iVar6 / 10);
          local_a0 = (uint)lVar12;
          lVar12 = lVar12 + 1;
        } while (9 < iVar6 && (int)local_a0 < 0x14);
        if (9 < iVar6) goto LAB_00100e88;
        iVar6 = (((param_6 - iVar7) - local_d8) - (uint)(0 < (int)local_d8)) + -1 +
                (uint)(uVar3 == 0);
        if (local_a0 == 1) {
          local_59[2] = 0x30;
          local_a0 = 2;
          iVar6 = iVar6 + -4;
        }
        else {
          iVar6 = iVar6 - (local_a0 + 2);
        }
      }
      else {
        local_a0 = local_c8;
        iVar6 = (((param_6 - iVar7) - local_d8) - (uint)(0 < (int)local_d8)) + -1 +
                (uint)(uVar3 == 0);
      }
      iVar13 = 0;
      if (-1 < iVar6) {
        iVar13 = iVar6;
      }
      if ((param_8 & 1) == 0) {
        local_c4 = 0;
        if ((param_8 & 0x10) == 0) {
          if (iVar6 < 1) goto LAB_00100974;
          local_9c = param_7;
          do {
            if (param_3 == (long *)0x0 && *param_2 == 0) goto LAB_00100a88;
            uVar9 = *param_4;
            uVar17 = *param_5;
            if (uVar17 < uVar9) goto LAB_00100a88;
            if ((uVar9 == uVar17) && (param_3 != (long *)0x0)) {
              if (0x7ffffbff < uVar17) goto LAB_00100a88;
              pvVar10 = (void *)*param_3;
              *param_5 = uVar17 + 0x400;
              iVar6 = (int)(uVar17 + 0x400);
              if (pvVar10 != (void *)0x0) {
                pvVar10 = CRYPTO_realloc(pvVar10,iVar6,"crypto/bio/bio_print.c",0x35b);
                if (pvVar10 != (void *)0x0) {
                  uVar9 = *param_4;
                  *param_3 = (long)pvVar10;
                  uVar17 = *param_5;
                  goto LAB_00100c40;
                }
                goto LAB_00100a88;
              }
              pvVar10 = CRYPTO_malloc(iVar6,"crypto/bio/bio_print.c",0x350);
              *param_3 = (long)pvVar10;
              if (pvVar10 == (void *)0x0) goto LAB_00100a88;
              uVar9 = *param_4;
              if (uVar9 != 0) {
                if ((void *)*param_2 == (void *)0x0) goto LAB_00100a88;
                memcpy(pvVar10,(void *)*param_2,uVar9);
              }
              *param_2 = 0;
              if (uVar9 < *param_5) {
LAB_00100d30:
                lVar12 = *param_3;
                goto LAB_00100c52;
              }
            }
            else {
LAB_00100c40:
              if (uVar9 < uVar17) {
                lVar12 = *param_2;
                if (lVar12 == 0) goto LAB_00100d30;
LAB_00100c52:
                *param_4 = uVar9 + 1;
                *(undefined1 *)(lVar12 + uVar9) = 0x20;
              }
            }
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          param_7 = local_9c;
          if (uVar3 == 0) goto LAB_00100980;
          goto LAB_00100da6;
        }
        if (iVar6 < 1) goto LAB_00100974;
        if (uVar3 != 0) {
          iVar6 = doapr_outch(param_2,param_3,param_4,param_5,uVar3);
          if (iVar6 == 0) goto LAB_00100a88;
          iVar13 = iVar13 + -1;
          if (iVar13 == 0) goto LAB_00100980;
        }
        do {
          iVar6 = doapr_outch(param_2,param_3,param_4,param_5,0x30);
          if (iVar6 == 0) goto LAB_00100a88;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        local_c4 = 0;
      }
      else {
        local_c4 = -iVar13;
LAB_00100974:
        if (uVar3 != 0) {
LAB_00100da6:
          iVar6 = doapr_outch(param_2,param_3,param_4,param_5,uVar3);
          if (iVar6 == 0) goto LAB_00100a88;
        }
      }
LAB_00100980:
      puVar18 = local_98 + iVar7;
      do {
        if (local_98 == puVar18) {
          if (((int)local_d8 < 1) && ((param_8 & 8) == 0)) goto LAB_00100a4b;
          iVar7 = doapr_outch(param_2,param_3,param_4,param_5,0x2e);
          if (iVar7 != 0) goto LAB_00100a3e;
          break;
        }
        pcVar1 = puVar18 + -1;
        puVar18 = puVar18 + -1;
        iVar7 = doapr_outch(param_2,param_3,param_4,param_5,(int)*pcVar1);
      } while (iVar7 != 0);
      goto LAB_00100a88;
    }
  }
  else {
    uVar3 = 0x2b;
    if ((param_8 & 2) != 0) {
      if (param_9 == 2) goto LAB_00100adb;
LAB_00100685:
      if (param_9 != 0) {
        local_c8 = 1;
        if (param_1 != 0.0) goto LAB_001006be;
        goto LAB_00100f63;
      }
      uVar16 = 0;
      goto LAB_00100719;
    }
    uVar3 = param_8 * 8 & 0x20;
    if (param_9 != 2) goto LAB_00100685;
LAB_00100adb:
    if (param_1 == 0.0) {
      if (param_7 != 0) {
        local_c8 = 0;
        param_7 = param_7 - 1;
LAB_00100f63:
        uVar16 = 0;
        goto LAB_0010072f;
      }
      if (_LC17 <= param_1) {
        uVar17 = (long)(param_1 - _LC17) ^ 0x8000000000000000;
      }
      else {
        uVar17 = (ulong)param_1;
      }
      local_c8 = 0;
      uVar16 = 0;
      uVar9 = 1;
      local_d8 = 0;
      goto LAB_001007eb;
    }
    if (param_1 < _LC18) {
      local_c8 = 1;
LAB_00100b71:
      uVar16 = 0;
      do {
        dVar20 = dVar20 * _LC8;
        uVar16 = uVar16 - 1;
      } while (dVar20 < _LC6);
joined_r0x001006f6:
      if (param_9 == 2) {
        if (param_7 == 0) {
          param_7 = 1;
        }
        goto LAB_00101064;
      }
      if (local_c8 == 1) goto LAB_0010072f;
LAB_00100707:
      if (param_1 < 0.0) goto LAB_00100711;
      goto LAB_00100719;
    }
    if (param_7 != 0) {
      dVar21 = _LC6;
      dVar4 = _LC8;
      uVar8 = param_7;
      uVar5 = param_7 - 1;
      if ((param_7 & 1) == 0) goto LAB_001010d0;
      while (uVar8 = uVar5, dVar21 = dVar4, uVar8 != 0) {
LAB_001010d0:
        dVar4 = dVar21 * _LC8 * _LC8;
        uVar5 = uVar8 - 2;
      }
      local_c8 = (uint)(dVar21 <= param_1);
LAB_001006be:
      if (param_1 < _LC6) goto LAB_00100b71;
      if (_LC8 < param_1) goto LAB_001006d2;
      uVar16 = 0;
      goto joined_r0x001006f6;
    }
    if (_LC8 <= param_1) {
      local_c8 = 1;
      if (_LC8 < param_1) {
LAB_001006d2:
        uVar16 = 0;
        do {
          dVar20 = dVar20 / _LC8;
          uVar16 = uVar16 + 1;
        } while (_LC8 < dVar20);
        goto joined_r0x001006f6;
      }
      local_c8 = 1;
      dVar20 = _LC8;
    }
    else {
      local_c8 = 0;
      if (param_1 < _LC6) goto LAB_00100b71;
      local_c8 = 0;
    }
    uVar16 = 0;
    param_7 = 1;
LAB_00101064:
    if (local_c8 != 0) {
      param_7 = param_7 - 1;
      goto LAB_0010072f;
    }
    param_7 = (param_7 - (int)uVar16) - 1;
    if (-1 < (int)param_7) goto LAB_00100707;
  }
LAB_00100e88:
  doapr_outch(param_2,param_3,param_4,param_5,0);
  goto LAB_00100a88;
  while( true ) {
    pcVar1 = local_79 + lVar14;
    lVar14 = lVar14 + -1;
    iVar7 = doapr_outch(param_2,param_3,param_4,param_5,(int)*pcVar1);
    if (iVar7 == 0) break;
LAB_00100a3e:
    if ((int)lVar14 < 1) goto LAB_00100a4b;
  }
  goto LAB_00100a88;
LAB_00101152:
  uVar11 = 1;
  goto LAB_00100a8a;
LAB_00100a4b:
  iVar7 = local_d8 - param_7;
  if (0 < iVar7) {
    do {
      iVar6 = doapr_outch(param_2,param_3,param_4,param_5,0x30);
      if (iVar6 == 0) goto LAB_00100a88;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_c8 != 1) {
joined_r0x00101115:
    do {
      if (local_c4 == 0) goto LAB_00101152;
      iVar7 = doapr_outch(param_2,param_3,param_4,param_5,0x20);
      if (iVar7 == 0) goto LAB_00100a88;
      local_c4 = local_c4 + 1;
    } while( true );
  }
  iVar7 = doapr_outch(param_2,param_3,param_4,param_5,(-((param_8 & 0x20) == 0) & 0x20U) + 0x45);
  if (iVar7 != 0) {
    uVar11 = 0x2d;
    if (-1 < (long)uVar16) {
      uVar11 = 0x2b;
    }
    iVar7 = doapr_outch(param_2,param_3,param_4,param_5,uVar11);
    if (iVar7 != 0) {
      puVar18 = local_59 + (long)(int)local_a0 + 1;
      do {
        if (puVar18 == local_59 + 1) goto joined_r0x00101115;
        pcVar1 = puVar18 + -1;
        puVar18 = puVar18 + -1;
        iVar7 = doapr_outch(param_2,param_3,param_4,param_5,(int)*pcVar1);
      } while (iVar7 != 0);
    }
  }
LAB_00100a88:
  uVar11 = 0;
LAB_00100a8a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



int BIO_vprintf(BIO *bio,char *format,va_list args)

{
  void *ptr;
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_84c [4];
  int local_848 [2];
  undefined1 *local_840;
  undefined8 local_838;
  void *local_830;
  undefined1 local_828 [2056];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_838 = 0x800;
  local_830 = (void *)0x0;
  local_840 = local_828;
  iVar1 = _dopr(&local_840,&local_830,&local_838,local_848,local_84c,format,args);
  ptr = local_830;
  if (iVar1 == 0) {
    iVar1 = -1;
    CRYPTO_free(local_830);
  }
  else if (local_830 == (void *)0x0) {
    iVar1 = BIO_write(bio,local_828,local_848[0]);
  }
  else {
    iVar1 = BIO_write(bio,local_830,local_848[0]);
    CRYPTO_free(ptr);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_printf(BIO *bio,char *format,...)

{
  char in_AL;
  int iVar1;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_d8 = 0x10;
  local_c8 = local_b8;
  local_d4 = 0x30;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  iVar1 = BIO_vprintf(bio,format,&local_d8);
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_vsnprintf(char *buf,size_t n,char *format,va_list args)

{
  int iVar1;
  long in_FS_OFFSET;
  size_t local_38;
  char *local_30 [2];
  int local_1c;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = n;
  local_30[0] = buf;
  iVar1 = _dopr(local_30,0,&local_38,&local_18,&local_1c,format,args);
  if ((iVar1 == 0) || (local_1c != 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)local_18;
    if (0x7fffffff < local_18) {
      iVar1 = -1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_snprintf(char *buf,size_t n,char *format,...)

{
  char in_AL;
  int iVar1;
  undefined8 in_RCX;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_d8 = 0x18;
  local_c8 = local_b8;
  local_d4 = 0x30;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  iVar1 = BIO_vsnprintf(buf,n,format,&local_d8);
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


