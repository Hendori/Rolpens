
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fmtfp(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
     int param_6,uint param_7,uint param_8,int param_9)

{
  char *pcVar1;
  bool bVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  undefined1 *puVar16;
  long in_FS_OFFSET;
  double dVar17;
  double dVar18;
  double dVar19;
  uint local_c4;
  uint local_c0;
  int local_bc;
  ulong local_b8;
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
  dVar19 = _LC1;
  dVar17 = param_1;
  if (param_1 < 0.0) {
    if ((param_9 == 2) || (param_9 != 0)) {
      local_c4 = 1;
      local_c0 = 0x2d;
      goto LAB_0010069b;
    }
    local_c0 = 0x2d;
    local_b8 = 0;
LAB_00100236:
    param_1 = (double)((ulong)param_1 ^ __LC6);
LAB_0010023e:
    if (param_1 < __LC7) {
      local_c4 = 0;
      dVar17 = param_1;
LAB_00100254:
      if (_LC4 <= dVar17) {
        uVar14 = (long)(dVar17 - _LC4) ^ 0x8000000000000000;
      }
      else {
        uVar14 = (ulong)dVar17;
      }
      uVar13 = 9;
      if ((int)param_7 < 10) {
        uVar13 = param_7;
      }
      param_1 = dVar17;
      if (param_7 == 0) {
        uVar13 = 0;
        uVar9 = 1;
      }
      else {
        dVar17 = _LC1;
        uVar5 = uVar13;
        uVar4 = uVar13 - 1;
        dVar18 = _LC2;
        if ((uVar13 & 1) == 0) goto LAB_001002b0;
        while (dVar17 = dVar18, uVar5 = uVar4, uVar5 != 0) {
LAB_001002b0:
          dVar18 = dVar17 * _LC2 * _LC2;
          uVar4 = uVar5 - 2;
        }
        uVar9 = ((long)dVar17 + 1) - (ulong)(dVar17 - (double)(long)dVar17 < _LC8);
        uVar5 = uVar13;
        uVar4 = uVar13 - 1;
        dVar17 = _LC2;
        if ((uVar13 & 1) == 0) goto LAB_00100300;
        while (dVar19 = dVar17, uVar5 = uVar4, uVar5 != 0) {
LAB_00100300:
          dVar17 = dVar19 * _LC2 * _LC2;
          uVar4 = uVar5 - 2;
        }
      }
LAB_0010030d:
      dVar19 = (param_1 - (double)uVar14) * dVar19;
      lVar11 = (long)dVar19;
      uVar12 = (lVar11 + 1) - (ulong)(dVar19 - (double)lVar11 < _LC8);
      if (uVar9 <= uVar12) {
        uVar14 = uVar14 + 1;
        uVar12 = uVar12 - uVar9;
      }
      lVar11 = 1;
      do {
        local_98[lVar11 + -1] = (&_LC9)[uVar14 % 10];
        bVar2 = 9 < uVar14;
        iVar7 = (int)lVar11;
        lVar11 = lVar11 + 1;
        uVar14 = uVar14 / 10;
      } while (bVar2 && iVar7 < 0x14);
      if (iVar7 == 0x14) {
        iVar7 = 0x13;
      }
      local_98[iVar7] = 0;
      if (param_7 != 0) {
        param_7 = 0;
        do {
          uVar14 = uVar12 / 10;
          uVar12 = uVar12 % 10;
          if ((param_7 == 0) && (param_9 == 2)) {
            while (uVar12 == 0) {
              uVar13 = uVar13 - 1;
              if ((int)uVar13 < 1) {
                param_7 = 0;
                goto LAB_0010042a;
              }
              uVar12 = uVar14 % 10;
              uVar14 = uVar14 / 10;
            }
            lVar11 = 0;
          }
          else {
            lVar11 = (long)(int)param_7;
          }
          param_7 = (int)lVar11 + 1;
          local_79[lVar11 + 1] = (&_LC9)[uVar12];
          uVar12 = uVar14;
        } while ((int)param_7 < (int)uVar13);
      }
LAB_0010042a:
      lVar11 = (long)(int)param_7;
      local_79[lVar11 + 1] = '\0';
      if (local_c4 == 1) {
        lVar10 = 1;
        uVar14 = (ulong)(uint)-(int)local_b8;
        if (-1 < (long)local_b8) {
          uVar14 = local_b8 & 0xffffffff;
        }
        do {
          iVar6 = (int)uVar14;
          local_59[lVar10] = (&_LC9)[iVar6 % 10];
          uVar14 = (ulong)(uint)(iVar6 / 10);
          local_a0 = (uint)lVar10;
          lVar10 = lVar10 + 1;
        } while (9 < iVar6 && (int)local_a0 < 0x14);
        if (9 < iVar6) goto LAB_001008f0;
        iVar6 = (((param_6 - iVar7) - uVar13) - (uint)(0 < (int)uVar13)) + -1 +
                (uint)(local_c0 == 0);
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
        local_a0 = local_c4;
        iVar6 = (((param_6 - iVar7) - uVar13) - (uint)(0 < (int)uVar13)) + -1 +
                (uint)(local_c0 == 0);
      }
      iVar15 = 0;
      if (-1 < iVar6) {
        iVar15 = iVar6;
      }
      if ((param_8 & 1) == 0) {
        local_bc = 0;
        if ((param_8 & 0x10) == 0) {
          if (iVar6 < 1) goto LAB_0010048b;
          do {
            local_9c = uVar13;
            iVar6 = doapr_outch(param_2,param_3,param_4,param_5,0x20);
            if (iVar6 == 0) goto LAB_001005a8;
            iVar15 = iVar15 + -1;
            uVar13 = local_9c;
          } while (iVar15 != 0);
          if (local_c0 == 0) goto LAB_001004a0;
          goto LAB_00100809;
        }
        if (iVar6 < 1) goto LAB_0010048b;
        if (local_c0 != 0) {
          local_9c = uVar13;
          iVar6 = doapr_outch(param_2,param_3,param_4,param_5,local_c0);
          if (iVar6 == 0) goto LAB_001005a8;
          iVar15 = iVar15 + -1;
          uVar13 = local_9c;
          if (iVar15 == 0) goto LAB_001004a0;
        }
        do {
          iVar6 = doapr_outch(param_2,param_3,param_4,param_5,0x30);
          if (iVar6 == 0) goto LAB_001005a8;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        local_bc = 0;
      }
      else {
        local_bc = -iVar15;
LAB_0010048b:
        if (local_c0 != 0) {
LAB_00100809:
          local_9c = uVar13;
          iVar6 = doapr_outch(param_2,param_3,param_4,param_5,local_c0);
          uVar13 = local_9c;
          if (iVar6 == 0) goto LAB_001005a8;
        }
      }
LAB_001004a0:
      puVar16 = local_98 + iVar7;
      do {
        if (puVar16 == local_98) {
          if (((int)uVar13 < 1) && ((param_8 & 8) == 0)) goto LAB_0010056b;
          iVar7 = doapr_outch(param_2,param_3,param_4,param_5,0x2e);
          if (iVar7 != 0) goto LAB_0010055e;
          break;
        }
        pcVar1 = puVar16 + -1;
        puVar16 = puVar16 + -1;
        iVar7 = doapr_outch(param_2,param_3,param_4,param_5,(int)*pcVar1);
      } while (iVar7 != 0);
      goto LAB_001005a8;
    }
  }
  else {
    local_c0 = 0x2b;
    if ((param_8 & 2) == 0) {
      local_c0 = param_8 * 8 & 0x20;
      if (param_9 == 2) goto LAB_001005fb;
LAB_001001a9:
      if (param_9 != 0) {
        local_c4 = 1;
        if (param_1 != 0.0) goto LAB_001001e2;
        goto LAB_0010096b;
      }
      local_b8 = 0;
      goto LAB_0010023e;
    }
    if (param_9 != 2) goto LAB_001001a9;
LAB_001005fb:
    if (param_1 == 0.0) {
      if (param_7 != 0) {
        local_c4 = 0;
        param_7 = param_7 - 1;
LAB_0010096b:
        local_b8 = 0;
        goto LAB_00100254;
      }
      if (_LC4 <= param_1) {
        uVar14 = (long)(param_1 - _LC4) ^ 0x8000000000000000;
      }
      else {
        uVar14 = (ulong)param_1;
      }
      local_c4 = 0;
      uVar13 = 0;
      uVar9 = 1;
      local_b8 = 0;
      param_7 = 0;
      goto LAB_0010030d;
    }
    if (param_1 < _LC5) {
      local_c4 = 1;
LAB_0010069b:
      local_b8 = 0;
      do {
        dVar17 = dVar17 * _LC2;
        local_b8 = local_b8 - 1;
      } while (dVar17 < _LC1);
LAB_00100213:
      if (param_9 == 2) {
        if (param_7 == 0) {
          param_7 = 1;
        }
        goto LAB_00100a18;
      }
      if (local_c4 == 1) goto LAB_00100254;
LAB_0010022c:
      if (param_1 < 0.0) goto LAB_00100236;
      goto LAB_0010023e;
    }
    if (param_7 != 0) {
      dVar18 = _LC1;
      dVar3 = _LC2;
      uVar13 = param_7;
      uVar5 = param_7 - 1;
      if ((param_7 & 1) == 0) goto LAB_00100a70;
      while (uVar13 = uVar5, dVar18 = dVar3, uVar13 != 0) {
LAB_00100a70:
        dVar3 = dVar18 * _LC2 * _LC2;
        uVar5 = uVar13 - 2;
      }
      local_c4 = (uint)(dVar18 <= param_1);
LAB_001001e2:
      if (param_1 < _LC1) goto LAB_0010069b;
      if (_LC2 < param_1) goto LAB_001001f6;
      local_b8 = 0;
      goto LAB_00100213;
    }
    if (_LC2 <= param_1) {
      local_c4 = 1;
      if (_LC2 < param_1) {
LAB_001001f6:
        local_b8 = 0;
        do {
          dVar17 = dVar17 / _LC2;
          local_b8 = local_b8 + 1;
        } while (_LC2 < dVar17);
        goto LAB_00100213;
      }
      local_c4 = 1;
      dVar17 = _LC2;
    }
    else {
      local_c4 = 0;
      if (param_1 < _LC1) goto LAB_0010069b;
      local_c4 = 0;
    }
    param_7 = 1;
    local_b8 = 0;
LAB_00100a18:
    if (local_c4 != 0) {
      param_7 = param_7 - 1;
      goto LAB_00100254;
    }
    param_7 = (param_7 - (int)local_b8) - 1;
    if (-1 < (int)param_7) goto LAB_0010022c;
  }
LAB_001008f0:
  doapr_outch(param_2,param_3,param_4,param_5,0);
  goto LAB_001005a8;
  while( true ) {
    pcVar1 = local_79 + lVar11;
    lVar11 = lVar11 + -1;
    iVar7 = doapr_outch(param_2,param_3,param_4,param_5,(int)*pcVar1);
    if (iVar7 == 0) break;
LAB_0010055e:
    if ((int)lVar11 < 1) goto LAB_0010056b;
  }
  goto LAB_001005a8;
LAB_00100acd:
  uVar8 = 1;
  goto LAB_001005aa;
LAB_0010056b:
  iVar7 = uVar13 - param_7;
  if (0 < iVar7) {
    do {
      iVar6 = doapr_outch(param_2,param_3,param_4,param_5,0x30);
      if (iVar6 == 0) goto LAB_001005a8;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_c4 != 1) {
joined_r0x00100aa0:
    do {
      if (local_bc == 0) goto LAB_00100acd;
      iVar7 = doapr_outch(param_2,param_3,param_4,param_5,0x20);
      if (iVar7 == 0) goto LAB_001005a8;
      local_bc = local_bc + 1;
    } while( true );
  }
  iVar7 = doapr_outch(param_2,param_3,param_4,param_5,(-((param_8 & 0x20) == 0) & 0x20U) + 0x45);
  if (iVar7 != 0) {
    uVar8 = 0x2d;
    if (-1 < (long)local_b8) {
      uVar8 = 0x2b;
    }
    iVar7 = doapr_outch(param_2,param_3,param_4,param_5,uVar8);
    if (iVar7 != 0) {
      puVar16 = local_59 + (long)(int)local_a0 + 1;
      do {
        if (local_59 + 1 == puVar16) goto joined_r0x00100aa0;
        pcVar1 = puVar16 + -1;
        puVar16 = puVar16 + -1;
        iVar7 = doapr_outch(param_2,param_3,param_4,param_5,(int)*pcVar1);
      } while (iVar7 != 0);
    }
  }
LAB_001005a8:
  uVar8 = 0;
LAB_001005aa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
fmtint(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
      int param_6,int param_7,int param_8,uint param_9)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  int iVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  int local_7c;
  uint local_78;
  int local_74;
  undefined8 local_70;
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = 0;
  if (-1 < param_8) {
    iVar2 = param_8;
  }
  if ((param_9 & 0x40) == 0) {
    if ((long)param_5 < 0) {
      local_78 = 1;
      param_5 = -param_5;
      local_74 = 0x2d;
    }
    else if ((param_9 & 2) == 0) {
      local_78 = param_9 >> 2 & 1;
      local_74 = local_78 << 5;
    }
    else {
      local_78 = 1;
      local_74 = 0x2b;
    }
  }
  else {
    local_78 = 0;
    local_74 = 0;
  }
  pcVar11 = "";
  if ((((param_9 & 8) != 0) && (pcVar11 = "0", param_6 != 8)) && (pcVar11 = "", param_6 == 0x10)) {
    pcVar11 = "0x";
  }
  uVar9 = (ulong)param_6;
  lVar6 = 1;
  pcVar8 = "0123456789ABCDEF";
  if ((param_9 & 0x20) == 0) {
    pcVar8 = "0123456789abcdef";
  }
  do {
    local_68[lVar6 + -1] = pcVar8[param_5 % uVar9];
    bVar12 = uVar9 <= param_5;
    iVar5 = (int)lVar6;
    lVar6 = lVar6 + 1;
    param_5 = param_5 / uVar9;
  } while (bVar12 && iVar5 < 0x1a);
  if (iVar5 == 0x1a) {
    iVar5 = 0x19;
  }
  local_70 = (long)iVar5;
  local_68[local_70] = '\0';
  sVar3 = strlen(pcVar11);
  iVar10 = iVar2;
  if (iVar2 <= iVar5) {
    iVar10 = iVar5;
  }
  iVar7 = ((param_7 - iVar10) - local_78) - (int)sVar3;
  iVar10 = iVar2 - iVar5;
  if (iVar2 - iVar5 < 0) {
    iVar10 = 0;
  }
  local_7c = 0;
  if (-1 < iVar7) {
    local_7c = iVar7;
  }
  if ((param_9 & 0x10) == 0) {
    if ((param_9 & 1) == 0) {
      if (0 < iVar7) {
        do {
          iVar2 = doapr_outch(param_1,param_2,param_3,param_4,0x20);
          if (iVar2 == 0) goto LAB_00100db7;
          local_7c = local_7c + -1;
        } while (local_7c != 0);
      }
      goto LAB_00100d6a;
    }
    local_7c = -local_7c;
    if (local_74 != 0) goto LAB_00100e94;
LAB_00100d76:
    cVar1 = *pcVar11;
    while (cVar1 != '\0') {
      iVar2 = doapr_outch(param_1,param_2,param_3,param_4);
      if (iVar2 == 0) goto LAB_00100db7;
      pcVar8 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar1 = *pcVar8;
    }
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      iVar2 = doapr_outch(param_1,param_2,param_3,param_4,0x30);
      if (iVar2 == 0) goto LAB_00100db7;
    }
    pcVar11 = local_68 + local_70;
    do {
      if (pcVar11 == local_68) goto joined_r0x00100f9a;
      pcVar8 = pcVar11 + -1;
      pcVar11 = pcVar11 + -1;
      iVar2 = doapr_outch(param_1,param_2,param_3,param_4,(int)*pcVar8);
    } while (iVar2 != 0);
  }
  else {
    if (iVar10 < local_7c) {
      iVar10 = local_7c;
    }
LAB_00100d6a:
    local_7c = 0;
    if (local_74 == 0) goto LAB_00100d76;
LAB_00100e94:
    iVar2 = doapr_outch(param_1,param_2,param_3,param_4,local_74);
    if (iVar2 != 0) goto LAB_00100d76;
  }
LAB_00100db7:
  uVar4 = 0;
LAB_00100db9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
joined_r0x00100f9a:
  if (local_7c == 0) goto LAB_00100fc6;
  iVar2 = doapr_outch(param_1,param_2,param_3,param_4,0x20);
  if (iVar2 == 0) goto LAB_00100db7;
  local_7c = local_7c + 1;
  goto joined_r0x00100f9a;
LAB_00100fc6:
  uVar4 = 1;
  goto LAB_00100db9;
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


