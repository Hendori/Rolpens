
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
     int param_7,uint param_8,int param_9)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long in_FS_OFFSET;
  double dVar16;
  double dVar17;
  double dVar18;
  int local_d8;
  uint local_c8;
  int local_c4;
  uint local_a0;
  undefined4 local_9c;
  undefined1 local_98 [31];
  char local_79 [32];
  undefined1 local_59 [25];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 < 0) {
    param_7 = 6;
  }
  dVar17 = param_1;
  dVar16 = _LC6;
  if (param_1 < 0.0) {
    if ((param_9 == 2) || (param_9 != 0)) {
      local_c8 = 1;
      uVar3 = 0x2d;
      goto LAB_00100b71;
    }
    uVar3 = 0x2d;
    uVar13 = 0;
LAB_00100711:
    param_1 = (double)((ulong)param_1 ^ __LC19);
LAB_00100719:
    if (param_1 < __LC20) {
      local_c8 = 0;
      dVar17 = param_1;
LAB_0010072f:
      if (_LC17 <= dVar17) {
        uVar14 = (long)(dVar17 - _LC17) ^ 0x8000000000000000;
      }
      else {
        uVar14 = (ulong)dVar17;
      }
      local_d8 = 9;
      if (param_7 < 10) {
        local_d8 = param_7;
      }
      if (param_7 == 0) {
        local_d8 = 0;
        uVar6 = 1;
      }
      else if (param_7 == 1) {
        uVar6 = 10;
        dVar16 = _LC8;
      }
      else if (param_7 == 2) {
        uVar6 = 100;
        dVar16 = _LC9;
      }
      else {
        dVar16 = _LC10;
        if (param_7 == 3) {
          uVar6 = 1000;
        }
        else if (param_7 == 4) {
          uVar6 = 10000;
          dVar16 = _LC11;
        }
        else if (param_7 == 5) {
          uVar6 = 100000;
          dVar16 = _LC12;
        }
        else if (param_7 == 6) {
          uVar6 = 1000000;
          dVar16 = _LC13;
        }
        else if (param_7 == 7) {
          uVar6 = 10000000;
          dVar16 = _LC14;
        }
        else {
          uVar6 = 100000000;
          if ((param_7 == 8) ||
             (((((uVar6 = 1000000000, param_7 != 3 && (dVar16 = _LC11, param_7 != 4)) &&
                (dVar16 = _LC12, param_7 != 5)) &&
               ((dVar16 = _LC13, param_7 != 6 && (dVar16 = _LC14, param_7 != 7)))) &&
              (dVar16 = _LC7, param_7 == 8)))) {
            dVar16 = _LC15;
          }
        }
      }
LAB_001007eb:
      dVar16 = (dVar17 - (double)uVar14) * dVar16;
      lVar11 = (long)dVar16;
      uVar12 = (lVar11 + 1) - (ulong)(dVar16 - (double)lVar11 < __LC21);
      if (uVar6 <= uVar12) {
        uVar14 = uVar14 + 1;
        uVar12 = uVar12 - uVar6;
      }
      lVar11 = 1;
      do {
        local_98[lVar11 + -1] = (&_LC22)[uVar14 % 10];
        bVar2 = 9 < uVar14;
        iVar5 = (int)lVar11;
        lVar11 = lVar11 + 1;
        uVar14 = uVar14 / 10;
      } while (bVar2 && iVar5 < 0x14);
      if (iVar5 == 0x14) {
        iVar5 = 0x13;
      }
      local_98[iVar5] = 0;
      if (param_7 != 0) {
        param_7 = 0;
        do {
          uVar14 = uVar12 / 10;
          uVar12 = uVar12 % 10;
          if ((param_7 == 0) && (param_9 == 2)) {
            while (uVar12 == 0) {
              local_d8 = local_d8 + -1;
              if (local_d8 < 1) {
                param_7 = 0;
                goto LAB_00100912;
              }
              uVar12 = uVar14 % 10;
              uVar14 = uVar14 / 10;
            }
            lVar11 = 0;
          }
          else {
            lVar11 = (long)param_7;
          }
          param_7 = (int)lVar11 + 1;
          local_79[lVar11 + 1] = (&_LC22)[uVar12];
          uVar12 = uVar14;
        } while (param_7 < local_d8);
      }
LAB_00100912:
      lVar11 = (long)param_7;
      local_79[lVar11 + 1] = '\0';
      if (local_c8 == 1) {
        lVar9 = 1;
        uVar14 = (ulong)(uint)-(int)uVar13;
        if (-1 < (long)uVar13) {
          uVar14 = uVar13 & 0xffffffff;
        }
        do {
          iVar4 = (int)uVar14;
          local_59[lVar9] = (&_LC22)[iVar4 % 10];
          uVar14 = (ulong)(uint)(iVar4 / 10);
          local_a0 = (uint)lVar9;
          lVar9 = lVar9 + 1;
        } while (9 < iVar4 && (int)local_a0 < 0x14);
        if (9 < iVar4) goto LAB_00100e88;
        iVar4 = (((param_6 - iVar5) - local_d8) - (uint)(0 < local_d8)) + -1 + (uint)(uVar3 == 0);
        if (local_a0 == 1) {
          local_59[2] = 0x30;
          local_a0 = 2;
          iVar4 = iVar4 + -4;
        }
        else {
          iVar4 = iVar4 - (local_a0 + 2);
        }
      }
      else {
        local_a0 = local_c8;
        iVar4 = (((param_6 - iVar5) - local_d8) - (uint)(0 < local_d8)) + -1 + (uint)(uVar3 == 0);
      }
      iVar10 = 0;
      if (-1 < iVar4) {
        iVar10 = iVar4;
      }
      if ((param_8 & 1) == 0) {
        local_c4 = 0;
        if ((param_8 & 0x10) == 0) {
          if (iVar4 < 1) goto LAB_00100974;
          local_9c = param_7;
          do {
            if (param_3 == (long *)0x0 && *param_2 == 0) goto LAB_00100a88;
            uVar6 = *param_4;
            uVar14 = *param_5;
            if (uVar14 < uVar6) goto LAB_00100a88;
            if ((uVar6 == uVar14) && (param_3 != (long *)0x0)) {
              if (0x7ffffbff < uVar14) goto LAB_00100a88;
              pvVar7 = (void *)*param_3;
              *param_5 = uVar14 + 0x400;
              iVar4 = (int)(uVar14 + 0x400);
              if (pvVar7 != (void *)0x0) {
                pvVar7 = CRYPTO_realloc(pvVar7,iVar4,"crypto/bio/bio_print.c",0x35b);
                if (pvVar7 != (void *)0x0) {
                  uVar6 = *param_4;
                  *param_3 = (long)pvVar7;
                  uVar14 = *param_5;
                  goto LAB_00100c40;
                }
                goto LAB_00100a88;
              }
              pvVar7 = CRYPTO_malloc(iVar4,"crypto/bio/bio_print.c",0x350);
              *param_3 = (long)pvVar7;
              if (pvVar7 == (void *)0x0) goto LAB_00100a88;
              uVar6 = *param_4;
              if (uVar6 != 0) {
                if ((void *)*param_2 == (void *)0x0) goto LAB_00100a88;
                memcpy(pvVar7,(void *)*param_2,uVar6);
              }
              *param_2 = 0;
              if (uVar6 < *param_5) {
LAB_00100d30:
                lVar9 = *param_3;
                goto LAB_00100c52;
              }
            }
            else {
LAB_00100c40:
              if (uVar6 < uVar14) {
                lVar9 = *param_2;
                if (lVar9 == 0) goto LAB_00100d30;
LAB_00100c52:
                *param_4 = uVar6 + 1;
                *(undefined1 *)(lVar9 + uVar6) = 0x20;
              }
            }
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          param_7 = local_9c;
          if (uVar3 == 0) goto LAB_00100980;
          goto LAB_00100da6;
        }
        if (iVar4 < 1) goto LAB_00100974;
        if (uVar3 != 0) {
          iVar4 = doapr_outch(param_2,param_3,param_4,param_5,uVar3);
          if (iVar4 == 0) goto LAB_00100a88;
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) goto LAB_00100980;
        }
        do {
          iVar4 = doapr_outch(param_2,param_3,param_4,param_5,0x30);
          if (iVar4 == 0) goto LAB_00100a88;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        local_c4 = 0;
      }
      else {
        local_c4 = -iVar10;
LAB_00100974:
        if (uVar3 != 0) {
LAB_00100da6:
          iVar4 = doapr_outch(param_2,param_3,param_4,param_5,uVar3);
          if (iVar4 == 0) goto LAB_00100a88;
        }
      }
LAB_00100980:
      puVar15 = local_98 + iVar5;
      do {
        if (local_98 == puVar15) {
          if ((local_d8 < 1) && ((param_8 & 8) == 0)) goto LAB_00100a4b;
          iVar5 = doapr_outch(param_2,param_3,param_4,param_5,0x2e);
          if (iVar5 != 0) goto LAB_00100a3e;
          break;
        }
        pcVar1 = puVar15 + -1;
        puVar15 = puVar15 + -1;
        iVar5 = doapr_outch(param_2,param_3,param_4,param_5,(int)*pcVar1);
      } while (iVar5 != 0);
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
      uVar13 = 0;
      goto LAB_00100719;
    }
    uVar3 = param_8 * 8 & 0x20;
    if (param_9 != 2) goto LAB_00100685;
LAB_00100adb:
    if (param_1 == 0.0) {
      if (param_7 != 0) {
        local_c8 = 0;
        param_7 = param_7 + -1;
LAB_00100f63:
        uVar13 = 0;
        goto LAB_0010072f;
      }
      if (_LC17 <= param_1) {
        uVar14 = (long)(param_1 - _LC17) ^ 0x8000000000000000;
      }
      else {
        uVar14 = (ulong)param_1;
      }
      local_c8 = 0;
      uVar13 = 0;
      uVar6 = 1;
      local_d8 = 0;
      goto LAB_001007eb;
    }
    if (param_1 < _LC18) {
      local_c8 = 1;
LAB_00100b71:
      uVar13 = 0;
      do {
        dVar17 = dVar17 * _LC8;
        uVar13 = uVar13 - 1;
      } while (dVar17 < _LC6);
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
    dVar18 = _LC6;
    iVar5 = param_7;
    if (param_7 != 0) {
      do {
        dVar18 = dVar18 * _LC8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      local_c8 = (uint)(dVar18 <= param_1);
LAB_001006be:
      if (param_1 < _LC6) goto LAB_00100b71;
      if (_LC8 < param_1) goto LAB_001006d2;
      uVar13 = 0;
      goto joined_r0x001006f6;
    }
    if (_LC8 <= param_1) {
      local_c8 = 1;
      if (_LC8 < param_1) {
LAB_001006d2:
        uVar13 = 0;
        do {
          dVar17 = dVar17 / _LC8;
          uVar13 = uVar13 + 1;
        } while (_LC8 < dVar17);
        goto joined_r0x001006f6;
      }
      local_c8 = 1;
      dVar17 = _LC8;
    }
    else {
      local_c8 = 0;
      if (param_1 < _LC6) goto LAB_00100b71;
      local_c8 = 0;
    }
    uVar13 = 0;
    param_7 = 1;
LAB_00101064:
    if (local_c8 != 0) {
      param_7 = param_7 + -1;
      goto LAB_0010072f;
    }
    param_7 = (param_7 - (int)uVar13) + -1;
    if (-1 < param_7) goto LAB_00100707;
  }
LAB_00100e88:
  doapr_outch(param_2,param_3,param_4,param_5,0);
  goto LAB_00100a88;
  while( true ) {
    pcVar1 = local_79 + lVar11;
    lVar11 = lVar11 + -1;
    iVar5 = doapr_outch(param_2,param_3,param_4,param_5,(int)*pcVar1);
    if (iVar5 == 0) break;
LAB_00100a3e:
    if ((int)lVar11 < 1) goto LAB_00100a4b;
  }
  goto LAB_00100a88;
LAB_0010113a:
  uVar8 = 1;
  goto LAB_00100a8a;
LAB_00100a4b:
  local_d8 = local_d8 - param_7;
  if (0 < local_d8) {
    do {
      iVar5 = doapr_outch(param_2,param_3,param_4,param_5,0x30);
      if (iVar5 == 0) goto LAB_00100a88;
      local_d8 = local_d8 + -1;
    } while (local_d8 != 0);
  }
  if (local_c8 != 1) {
joined_r0x00101101:
    do {
      if (local_c4 == 0) goto LAB_0010113a;
      iVar5 = doapr_outch(param_2,param_3,param_4,param_5,0x20);
      if (iVar5 == 0) goto LAB_00100a88;
      local_c4 = local_c4 + 1;
    } while( true );
  }
  iVar5 = doapr_outch(param_2,param_3,param_4,param_5,(-((param_8 & 0x20) == 0) & 0x20U) + 0x45);
  if (iVar5 != 0) {
    uVar8 = 0x2d;
    if (-1 < (long)uVar13) {
      uVar8 = 0x2b;
    }
    iVar5 = doapr_outch(param_2,param_3,param_4,param_5,uVar8);
    if (iVar5 != 0) {
      puVar15 = local_59 + (long)(int)local_a0 + 1;
      do {
        if (puVar15 == local_59 + 1) goto joined_r0x00101101;
        pcVar1 = puVar15 + -1;
        puVar15 = puVar15 + -1;
        iVar5 = doapr_outch(param_2,param_3,param_4,param_5,(int)*pcVar1);
      } while (iVar5 != 0);
    }
  }
LAB_00100a88:
  uVar8 = 0;
LAB_00100a8a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
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


