
void clear_random_data(void)

{
  randint_all_free(randint_source);
  return;
}



void fillpattern(uint param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  size_t __n;
  
  uVar1 = (param_1 & 0xfff) * 0x1001;
  uVar2 = (ushort)uVar1;
  *(ushort *)(param_2 + 1) = uVar2 << 8 | uVar2 >> 8;
  *param_2 = (char)(uVar1 >> 4);
  if (param_3 < 6) {
    if (param_3 < 4) {
      if ((param_1 & 0x1000) == 0) {
        return;
      }
      if (param_3 == 0) {
        return;
      }
      goto LAB_0010007e;
    }
    uVar3 = 3;
LAB_001000e0:
    memcpy(param_2 + uVar3,param_2,param_3 - uVar3);
  }
  else {
    __n = 3;
    do {
      uVar3 = __n * 2;
      memcpy(param_2 + __n,param_2,__n);
      __n = uVar3;
    } while (uVar3 <= param_3 >> 1);
    if (uVar3 < param_3) goto LAB_001000e0;
  }
  if ((param_1 & 0x1000) == 0) {
    return;
  }
LAB_0010007e:
  *param_2 = *param_2 + -0x80;
  uVar3 = 0x200;
  if (0x200 < param_3) {
    if ((param_3 - 1 >> 9 & 1) != 0) {
      uVar3 = 0x400;
      param_2[0x200] = param_2[0x200] + -0x80;
      if (param_3 < 0x401) {
        return;
      }
    }
    do {
      param_2[uVar3] = param_2[uVar3] + -0x80;
      param_2[uVar3 + 0x200] = param_2[uVar3 + 0x200] + -0x80;
      uVar3 = uVar3 + 0x400;
    } while (uVar3 < param_3);
  }
  return;
}



void genpattern(int *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *__dest;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int *__src;
  ulong uVar7;
  long local_48;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = -2;
  local_48 = 0;
  puVar5 = patterns;
  __dest = param_1;
  uVar7 = param_2;
  do {
    if (iVar2 == 0) {
      puVar5 = patterns + 4;
      iVar2 = -2;
LAB_00100174:
      uVar4 = (ulong)-iVar2;
      if (uVar7 <= uVar4) goto LAB_001001d0;
      local_48 = local_48 + uVar4;
    }
    else {
      __src = (int *)((long)puVar5 + 4);
      puVar5 = (undefined1 *)__src;
      if (iVar2 < 0) goto LAB_00100174;
      uVar4 = (ulong)iVar2;
      if (uVar7 < uVar4) break;
      puVar5 = (undefined1 *)(__src + uVar4);
      memcpy(__dest,__src,uVar4 * 4);
      __dest = __dest + uVar4;
    }
    uVar7 = uVar7 - uVar4;
    iVar2 = *(int *)puVar5;
  } while( true );
  if ((1 < uVar7) && (uVar4 <= uVar7 * 3)) {
    do {
      if (uVar4 == uVar7) {
        uVar4 = uVar7 - 1;
LAB_00100272:
        *__dest = *__src;
        uVar7 = uVar7 - 1;
        __dest = __dest + 1;
        if (uVar7 == 0) goto LAB_001001d5;
      }
      else {
        uVar4 = uVar4 - 1;
        uVar6 = randint_genmax(param_3,uVar4);
        if (uVar6 < uVar7) goto LAB_00100272;
      }
      __src = __src + 1;
    } while( true );
  }
LAB_001001d0:
  local_48 = local_48 + uVar7;
LAB_001001d5:
  uVar4 = 0;
  uVar7 = local_48 - 1;
  uVar6 = uVar7;
  lVar1 = param_2 - local_48;
  do {
    while (uVar7 < uVar6) {
      uVar6 = uVar6 - uVar7;
      lVar3 = randint_genmax(param_3,(lVar1 + -1) - uVar4);
      iVar2 = param_1[uVar4];
      lVar3 = lVar3 + uVar4;
      param_1[uVar4] = param_1[lVar3];
      uVar4 = uVar4 + 1;
      param_1[lVar3] = iVar2;
      if (param_2 == uVar4) {
        return;
      }
    }
    uVar6 = (uVar6 + (param_2 - 1)) - uVar7;
    param_1[lVar1] = param_1[uVar4];
    param_1[uVar4] = -1;
    uVar4 = uVar4 + 1;
    lVar1 = lVar1 + 1;
  } while (uVar4 != param_2);
  return;
}



undefined8 dosync(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = fdatasync(param_1);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    if ((1 < iVar1 - 0x15U) && (iVar1 != 9)) {
      uVar3 = dcgettext(0,"%s: fdatasync failed",5);
      error(0,iVar1,uVar3,param_2);
      *piVar2 = iVar1;
      return 0xffffffff;
    }
    iVar1 = fsync(param_1);
    if (iVar1 != 0) {
      iVar1 = *piVar2;
      if ((1 < iVar1 - 0x15U) && (iVar1 != 9)) {
        uVar3 = dcgettext(0,"%s: fsync failed",5);
        error(0,iVar1,uVar3,param_2);
        *piVar2 = iVar1;
        return 0xffffffff;
      }
      sync();
    }
  }
  return 0;
}



ulong dopass_constprop_0(long param_1,undefined8 param_2,ulong *param_3,uint param_4,ulong param_5,
                        undefined8 param_6,long param_7)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *__ptr;
  __off_t _Var6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  ssize_t sVar10;
  char *__s2;
  char *pcVar11;
  long lVar12;
  char cVar13;
  ulong uVar14;
  undefined4 uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  ulong local_860;
  ulong local_858;
  char *local_848;
  long local_840;
  long local_838;
  undefined2 local_808 [2];
  undefined4 local_804;
  undefined4 local_7ff;
  undefined3 uStack_7fb;
  char local_7f8 [656];
  undefined1 local_568 [656];
  undefined1 local_2d8 [664];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_858 = *param_3;
  uVar9 = param_5;
  iVar4 = getpagesize();
  if ((int)param_4 < 1) {
LAB_001004d2:
    uVar16 = 0x10002;
    uVar14 = 0x10000;
  }
  else {
    uVar5 = (param_4 & 0xfff) * 0x1001;
    cVar13 = (char)(uVar5 >> 4);
    if (((char)(uVar5 >> 8) == cVar13) && (cVar13 == (char)uVar5)) goto LAB_001004d2;
    uVar16 = 0xf000;
    uVar14 = 0xf000;
  }
  __ptr = (byte *)xalignalloc((long)iVar4);
  bVar1 = 0 < (long)local_858 && local_858 < uVar14;
  if (((0 >= (long)local_858 || local_858 >= uVar14) && (uVar5 = rpl_fcntl(1), 0 < (int)uVar5)) &&
     (uVar5 != (uVar5 | 0x4000))) {
    rpl_fcntl(1);
  }
  if ((*(uint *)(param_1 + 0x18) & 0xf000) == 0x2000) {
    local_808[0] = 6;
    local_804 = 1;
    iVar4 = ioctl(1,0x40086d01,local_808);
    if (iVar4 == 0) goto joined_r0x00100b0d;
  }
  _Var6 = lseek(1,0,0);
  if (_Var6 < 1) {
    if (_Var6 == 0) {
joined_r0x00100b0d:
      if ((int)param_4 < 0) {
        local_7ff = 0x646e6172;
        uStack_7fb = 0x6d6f;
      }
      else {
        if ((long)local_858 < 0) {
          fillpattern(param_4,__ptr,uVar16);
        }
        else {
          if (local_858 <= uVar16) {
            uVar16 = local_858;
          }
          fillpattern(param_4,__ptr,uVar16);
        }
        uVar9 = (ulong)*__ptr;
        __sprintf_chk(&local_7ff,2,7,"%02x%02x%02x",uVar9,__ptr[1],__ptr[2]);
      }
      if (param_7 != 0) {
        uVar8 = dcgettext(0,"%s: pass %lu/%lu (%s)...",5);
        error(0,0,uVar8,param_2,param_6,param_7,&local_7ff,uVar9);
        lVar12 = rpl_time(0);
        local_840 = lVar12 + 5;
      }
      bVar3 = 0;
      local_848 = "";
      local_838 = 0;
      local_860 = 0;
joined_r0x00100588:
      do {
        if ((long)local_858 < 0) {
          if ((int)param_4 < 0) {
            randread(param_5,__ptr,uVar14);
          }
          uVar9 = 0;
          do {
            sVar10 = write(1,__ptr + uVar9,uVar14 - uVar9);
            if (sVar10 < 1) {
              if (sVar10 != 0) {
                piVar7 = __errno_location();
                iVar4 = *piVar7;
                if (iVar4 != 0x1c) {
                  bVar1 = (bool)((bVar1 ^ 1U) & iVar4 == 0x16);
                  if (bVar1) {
                    uVar5 = rpl_fcntl(1,3);
                    if ((0 < (int)uVar5) && ((uVar5 & 0x4000) != 0)) {
                      rpl_fcntl(1,4,uVar5 & 0xffffbfff);
                    }
                    goto LAB_001007f3;
                  }
                  uVar8 = dcgettext(0,"%s: error writing at offset %ju",5);
                  error(0,iVar4,uVar8,param_2,local_860 + uVar9);
                  goto LAB_00100bb2;
                }
              }
              if (0x7fffffffffffffff - local_860 < uVar9) goto LAB_001008bf;
              local_860 = local_860 + uVar9;
              *param_3 = local_860;
              local_858 = local_860;
              goto LAB_0010065e;
            }
            uVar9 = uVar9 + sVar10;
LAB_001007f3:
          } while (uVar9 < uVar14);
        }
        else {
          uVar9 = local_858 - local_860;
          uVar16 = uVar14;
          if ((uVar9 < uVar14) &&
             (((long)local_858 < (long)local_860 || (uVar16 = uVar9, uVar9 == 0)))) {
            iVar4 = dosync(1,param_2);
            if (iVar4 == 0) {
              free(__ptr);
              uVar9 = (ulong)bVar3;
              goto LAB_001004a9;
            }
            piVar7 = __errno_location();
            if (*piVar7 == 5) {
              free(__ptr);
              uVar9 = 1;
              goto LAB_001004a9;
            }
            free(__ptr);
            goto LAB_001004a4;
          }
          if ((int)param_4 < 0) {
            randread(param_5,__ptr,uVar16);
          }
          uVar9 = 0;
          bVar2 = bVar1;
LAB_001005c8:
          do {
            sVar10 = write(1,__ptr + uVar9,uVar16 - uVar9);
            if (sVar10 < 1) {
              piVar7 = __errno_location();
              iVar4 = *piVar7;
              bVar1 = (bool)(iVar4 == 0x16 & (bVar2 ^ 1U));
              if (bVar1) {
                uVar5 = rpl_fcntl(1,3);
                if ((0 < (int)uVar5) && ((uVar5 & 0x4000) != 0)) {
                  rpl_fcntl(1,4,uVar5 & 0xffffbfff);
                }
                bVar2 = bVar1;
                if (uVar16 <= uVar9) break;
                goto LAB_001005c8;
              }
              uVar8 = dcgettext(0,"%s: error writing at offset %ju",5);
              error(0,iVar4,uVar8,param_2,uVar9 + local_860);
              if ((iVar4 != 5) || (uVar16 <= (uVar9 | 0x1ff))) goto LAB_00100bb2;
              uVar9 = (uVar9 | 0x1ff) + 1;
              _Var6 = lseek(1,uVar9 + local_860,0);
              if (_Var6 == -1) {
                uVar8 = dcgettext(0,"%s: lseek failed",5);
                iVar4 = *piVar7;
                goto LAB_00100493;
              }
              bVar3 = 1;
            }
            else {
              uVar9 = uVar9 + sVar10;
            }
            bVar1 = bVar2;
          } while (uVar9 < uVar16);
        }
        if (0x7fffffffffffffff - local_860 < uVar9) {
LAB_001008bf:
          uVar8 = dcgettext(0,"%s: file too large",5);
          iVar4 = 0;
          goto LAB_00100493;
        }
        local_860 = uVar9 + local_860;
LAB_0010065e:
      } while (param_7 == 0);
      if (local_860 == local_858) {
        if ((*local_848 == '\0') && (local_838 = rpl_time(0), local_838 < local_840))
        goto joined_r0x00100588;
        __s2 = (char *)human_readable(local_860,local_568,0x1b2,1,1);
        if (-1 < (long)local_858) goto LAB_001006bd;
LAB_0010093c:
        uVar8 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s",5);
        error(0,0,uVar8,param_2,param_6,param_7,&local_7ff,__s2);
      }
      else {
        local_838 = rpl_time(0);
        if (local_838 < local_840) goto joined_r0x00100588;
        __s2 = (char *)human_readable(local_860,local_568,0x1b2,1,1);
        iVar4 = strcmp(local_848,__s2);
        if (iVar4 == 0) goto joined_r0x00100588;
        if ((long)local_858 < 0) goto LAB_0010093c;
LAB_001006bd:
        uVar15 = 100;
        if (local_858 != 0) {
          if (local_860 < 0x28f5c28f5c28f5d) {
            uVar15 = (undefined4)((local_860 * 100) / local_858);
          }
          else {
            uVar15 = (undefined4)
                     (local_860 /
                     (ulong)(((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)local_858),
                                            8) + local_858) >> 6) - ((long)local_858 >> 0x3f)));
          }
        }
        pcVar11 = (char *)human_readable(local_858,local_2d8,0x1b0,1,1);
        if (local_860 == local_858) {
          __s2 = pcVar11;
        }
        uVar8 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s/%s %d%%",5);
        error(0,0,uVar8,param_2,param_6,param_7,&local_7ff,__s2,pcVar11,uVar15);
      }
      local_848 = local_7f8;
      __strcpy_chk(local_848,__s2,0x28c);
      local_840 = local_838 + 5;
      iVar4 = dosync(1,param_2);
      if (iVar4 != 0) {
        piVar7 = __errno_location();
        if (*piVar7 != 5) goto LAB_00100bb2;
        bVar3 = 1;
      }
      goto joined_r0x00100588;
    }
  }
  else {
    piVar7 = __errno_location();
    *piVar7 = 0x16;
  }
  uVar8 = dcgettext(0,"%s: cannot rewind",5);
  piVar7 = __errno_location();
  iVar4 = *piVar7;
LAB_00100493:
  error(0,iVar4,uVar8,param_2);
  free(__ptr);
LAB_001004a4:
  uVar9 = 0xffffffff;
LAB_001004a9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100bb2:
  free(__ptr);
  goto LAB_001004a4;
}



undefined8
dopass(int param_1,long param_2,undefined8 param_3,ulong *param_4,ulong param_5,undefined8 param_6,
      undefined8 param_7,long param_8)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  byte *__ptr;
  __off_t _Var4;
  int *piVar5;
  undefined8 uVar6;
  ssize_t sVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  char cVar10;
  bool bVar11;
  ulong uVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  bool bVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  ulong local_860;
  char *local_838;
  long local_830;
  long local_828;
  undefined8 local_818;
  undefined2 local_808 [2];
  undefined4 local_804;
  undefined4 local_7ff;
  undefined3 uStack_7fb;
  char local_7f8 [656];
  undefined1 local_568 [656];
  undefined1 local_2d8 [664];
  long local_40;
  
  uVar13 = (uint)param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_860 = *param_4;
  iVar2 = getpagesize();
  if ((int)uVar13 < 1) {
LAB_00100d93:
    uVar12 = 0x10002;
    uVar15 = 0x10000;
  }
  else {
    uVar3 = (uVar13 & 0xfff) * 0x1001;
    cVar10 = (char)(uVar3 >> 4);
    if (((char)(uVar3 >> 8) == cVar10) && (cVar10 == (char)uVar3)) goto LAB_00100d93;
    uVar12 = 0xf000;
    uVar15 = 0xf000;
  }
  __ptr = (byte *)xalignalloc((long)iVar2);
  bVar11 = 0 < (long)local_860 && local_860 < uVar15;
  if (((0 >= (long)local_860 || local_860 >= uVar15) && (uVar3 = rpl_fcntl(param_1), 0 < (int)uVar3)
      ) && (uVar3 != (uVar3 | 0x4000))) {
    rpl_fcntl(param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 0xf000) == 0x2000) {
    local_808[0] = 6;
    local_804 = 1;
    iVar2 = ioctl(param_1,0x40086d01,local_808);
    if (iVar2 == 0) goto LAB_00100daa;
  }
  _Var4 = lseek(param_1,0,0);
  if (_Var4 < 1) {
    if (_Var4 == 0) {
LAB_00100daa:
      if ((int)uVar13 < 0) {
        local_7ff = 0x646e6172;
        uStack_7fb = 0x6d6f;
      }
      else {
        if ((long)local_860 < 0) {
          fillpattern(uVar13,__ptr,uVar12);
        }
        else {
          if (local_860 <= uVar12) {
            uVar12 = local_860;
          }
          fillpattern(uVar13,__ptr,uVar12);
        }
        param_5 = (ulong)*__ptr;
        __sprintf_chk(&local_7ff,2,7,"%02x%02x%02x",param_5,__ptr[1],__ptr[2]);
      }
      if (param_8 != 0) {
        uVar6 = dcgettext(0,"%s: pass %lu/%lu (%s)...",5);
        error(0,0,uVar6,param_3,param_7,param_8,&local_7ff,param_5);
        lVar9 = rpl_time(0);
        local_830 = lVar9 + 5;
      }
      local_818 = 0;
      uVar12 = 0;
      local_838 = "";
      local_828 = 0;
joined_r0x00100e48:
      if ((long)local_860 < 0) goto LAB_001010e8;
      uVar17 = local_860 - uVar12;
      uVar1 = uVar15;
      if ((uVar15 <= uVar17) || (((long)uVar12 <= (long)local_860 && (uVar1 = uVar17, uVar17 != 0)))
         ) {
        if ((int)uVar13 < 0) {
          randread(param_6,__ptr,uVar1);
        }
        uVar17 = 0;
        do {
          while (sVar7 = write(param_1,__ptr + uVar17,uVar1 - uVar17), 0 < sVar7) {
            uVar17 = uVar17 + sVar7;
LAB_00100e8b:
            if (uVar1 <= uVar17) goto LAB_00100f11;
          }
          piVar5 = __errno_location();
          iVar2 = *piVar5;
          bVar16 = (bool)(iVar2 == 0x16 & (bVar11 ^ 1U));
          if (!bVar16) {
            uVar6 = dcgettext(0,"%s: error writing at offset %ju",5);
            error(0,iVar2,uVar6,param_3,uVar17 + uVar12);
            if ((iVar2 != 5) || (uVar1 <= (uVar17 | 0x1ff))) goto LAB_001014e3;
            uVar17 = (uVar17 | 0x1ff) + 1;
            _Var4 = lseek(param_1,uVar12 + uVar17,0);
            if (_Var4 != -1) {
              local_818 = 1;
              goto LAB_00100e8b;
            }
            uVar6 = dcgettext(0,"%s: lseek failed",5);
            iVar2 = *piVar5;
            goto LAB_00100d54;
          }
          uVar3 = rpl_fcntl(param_1,3);
          if ((0 < (int)uVar3) && ((uVar3 & 0x4000) != 0)) {
            rpl_fcntl(param_1,4,uVar3 & 0xffffbfff);
          }
          bVar11 = bVar16;
        } while (uVar17 < uVar1);
        goto LAB_00100f11;
      }
      iVar2 = dosync(param_1,param_3);
      if (iVar2 == 0) {
        free(__ptr);
        goto LAB_00100d6a;
      }
      piVar5 = __errno_location();
      if (*piVar5 == 5) {
        free(__ptr);
        local_818 = 1;
        goto LAB_00100d6a;
      }
      free(__ptr);
      goto LAB_00100d65;
    }
  }
  else {
    piVar5 = __errno_location();
    *piVar5 = 0x16;
  }
  uVar6 = dcgettext(0,"%s: cannot rewind",5);
  piVar5 = __errno_location();
  iVar2 = *piVar5;
LAB_00100d54:
  error(0,iVar2,uVar6,param_3);
  free(__ptr);
LAB_00100d65:
  local_818 = 0xffffffff;
LAB_00100d6a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_818;
LAB_001010e8:
  if ((int)uVar13 < 0) {
    randread(param_6,__ptr,uVar15);
  }
  uVar17 = 0;
  do {
    sVar7 = write(param_1,__ptr + uVar17,uVar15 - uVar17);
    if (sVar7 < 1) {
      if (sVar7 != 0) {
        piVar5 = __errno_location();
        iVar2 = *piVar5;
        if (iVar2 != 0x1c) {
          bVar11 = (bool)((bVar11 ^ 1U) & iVar2 == 0x16);
          if (bVar11) {
            uVar3 = rpl_fcntl(param_1,3);
            if ((0 < (int)uVar3) && ((uVar3 & 0x4000) != 0)) {
              rpl_fcntl(param_1,4,uVar3 & 0xffffbfff);
            }
            goto joined_r0x0010117c;
          }
          uVar6 = dcgettext(0,"%s: error writing at offset %ju",5);
          error(0,iVar2,uVar6,param_3,uVar12 + uVar17);
          goto LAB_001014e3;
        }
      }
      if (0x7fffffffffffffff - uVar12 < uVar17) goto LAB_0010129d;
      uVar12 = uVar17 + uVar12;
      *param_4 = uVar12;
      local_860 = uVar12;
      if (param_8 == 0) goto joined_r0x00100e48;
      goto LAB_001011ec;
    }
    uVar17 = uVar17 + sVar7;
joined_r0x0010117c:
  } while (uVar17 < uVar15);
LAB_00100f11:
  if (uVar17 <= 0x7fffffffffffffff - uVar12) {
    uVar12 = uVar17 + uVar12;
    if (param_8 != 0) {
      if (local_860 == uVar12) {
LAB_001011ec:
        if ((*local_838 == '\0') && (local_828 = rpl_time(0), local_828 < local_830))
        goto joined_r0x00100e48;
        __s2 = (char *)human_readable(uVar12,local_568,0x1b2,1,1);
      }
      else {
        local_828 = rpl_time(0);
        if (local_828 < local_830) goto joined_r0x00100e48;
        __s2 = (char *)human_readable(uVar12,local_568,0x1b2,1,1);
        iVar2 = strcmp(local_838,__s2);
        if (iVar2 == 0) goto joined_r0x00100e48;
      }
      if ((long)local_860 < 0) {
        uVar6 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s",5);
        error(0,0,uVar6,param_3,param_7,param_8,&local_7ff,__s2);
      }
      else {
        uVar14 = 100;
        if (local_860 != 0) {
          if (uVar12 < 0x28f5c28f5c28f5d) {
            uVar14 = (undefined4)((uVar12 * 100) / local_860);
          }
          else {
            uVar14 = (undefined4)
                     (uVar12 / (ulong)(((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) *
                                                      SEXT816((long)local_860),8) + local_860) >> 6)
                                      - ((long)local_860 >> 0x3f)));
          }
        }
        pcVar8 = (char *)human_readable(local_860,local_2d8,0x1b0,1,1);
        if (local_860 == uVar12) {
          __s2 = pcVar8;
        }
        uVar6 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s/%s %d%%",5);
        error(0,0,uVar6,param_3,param_7,param_8,&local_7ff,__s2,pcVar8,uVar14);
      }
      local_838 = local_7f8;
      __strcpy_chk(local_838,__s2,0x28c);
      local_830 = local_828 + 5;
      iVar2 = dosync(param_1,param_3);
      if (iVar2 != 0) {
        piVar5 = __errno_location();
        if (*piVar5 != 5) {
LAB_001014e3:
          free(__ptr);
          goto LAB_00100d65;
        }
        local_818 = 1;
      }
    }
    goto joined_r0x00100e48;
  }
LAB_0010129d:
  uVar6 = dcgettext(0,"%s: file too large",5);
  iVar2 = 0;
  goto LAB_00100d54;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long in_FS_OFFSET;
  undefined *local_a8;
  char *pcStack_a0;
  char *local_98 [4];
  char *local_78;
  char *pcStack_70;
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  undefined1 local_48 [16];
  undefined8 local_30;
  
  uVar5 = _program_name;
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001015da;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Overwrite the specified FILE(s) repeatedly, in order to make it harder\nfor even very expensive hardware probing to recover the data.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nIf FILE is -, shred standard output.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "  -f, --force    change permissions to allow writing if necessary\n  -n, --iterations=N  overwrite N times instead of the default (%d)\n      --random-source=FILE  get random bytes from FILE\n  -s, --size=N   shred this many bytes (suffixes like K, M, G accepted)\n"
                    ,5);
  __printf_chk(2,uVar5,3);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -u             deallocate and remove file after overwriting\n      --remove[=HOW]  like -u but give control on HOW to delete;  See below\n  -v, --verbose  show progress\n  -x, --exact    do not round file sizes up to the next full block;\n                   this is the default for non-regular files\n  -z, --zero     add a final overwrite with zeros to hide shredding\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nDelete FILE(s) if --remove (-u) is specified.  The default is not to remove\nthe files because it is common to operate on device files like /dev/hda,\nand those files usually should not be removed.\nThe optional HOW parameter indicates how to remove a directory entry:\n\'unlink\' => use a standard unlink call.\n\'wipe\' => also first obfuscate bytes in the name.\n\'wipesync\' => also sync each obfuscated byte to the device.\nThe default mode is \'wipesync\', but note it can be expensive.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "CAUTION: shred assumes the file system and hardware overwrite data in place.\nAlthough this is common, many platforms operate otherwise.  Also, backups\nand mirrors may contain unremovable copies that will let a shredded file\nbe recovered later.  See the GNU coreutils manual for details.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC11;
  pcStack_a0 = "test invocation";
  local_98[0] = "coreutils";
  local_98[1] = "Multi-call invocation";
  local_98[2] = "sha224sum";
  local_98[3] = "sha2 utilities";
  local_78 = "sha256sum";
  pcStack_70 = "sha2 utilities";
  local_68 = "sha384sum";
  pcStack_60 = "sha2 utilities";
  local_58 = "sha512sum";
  pcStack_50 = "sha2 utilities";
  local_48 = (undefined1  [16])0x0;
  do {
    iVar2 = strcmp("shred",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "shred";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010187d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","shred");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010187d:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","shred");
    if (pcVar4 == "shred") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_001015da:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *__ptr;
  void *pvVar9;
  long lVar10;
  void *__ptr_00;
  void *__ptr_01;
  size_t __n;
  char *pcVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined4 uVar14;
  __off_t _Var15;
  char *pcVar16;
  char *pcVar17;
  __blksize_t _Var18;
  long lVar19;
  undefined8 in_R10;
  long lVar20;
  char *__buf;
  undefined1 *puVar21;
  size_t sVar22;
  char *pcVar23;
  long in_FS_OFFSET;
  bool bVar24;
  char *local_178;
  long local_170;
  undefined8 local_168;
  void *local_160;
  long local_158;
  undefined8 *local_150;
  long local_148;
  long local_140;
  char *local_138;
  char *local_130;
  undefined8 *local_128;
  int local_120;
  byte local_11a;
  long local_e0;
  stat local_d8;
  long local_40;
  
  pcVar23 = (char *)0x3;
  puVar21 = long_opts;
  __buf = "fn:s:uvxz";
  __ptr = (char *)(ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_170 = 0;
  bVar3 = false;
  bVar1 = false;
  local_120 = 0;
  local_148 = -1;
  bVar2 = false;
  local_178 = (char *)0x0;
  do {
    pcVar16 = local_178;
    iVar5 = getopt_long(param_1,param_2,"fn:s:uvxz",long_opts);
    pcVar17 = _optarg;
    if (iVar5 == -1) {
      lVar20 = (long)_optind;
      param_1 = param_1 - _optind;
      __ptr = (char *)(ulong)param_1;
      if (param_1 != 0) {
        randint_source = randint_all_new(local_178,0xffffffffffffffff);
        if (randint_source == 0) {
          randint_source = 0;
          if (local_178 == (char *)0x0) goto LAB_001035a6;
          do {
            uVar12 = quotearg_n_style_colon(0,3,local_178);
            piVar13 = __errno_location();
            error(1,*piVar13,&_LC50,uVar12);
LAB_001035a6:
            local_178 = "getrandom";
          } while( true );
        }
        atexit(clear_random_data);
        if (0 < (int)param_1) {
          __buf = (char *)&local_d8;
          local_11a = 1;
          local_178 = pcVar23 + local_170;
          local_130 = (char *)0x0;
          if (bVar1) {
            local_130 = local_178;
          }
          local_150 = param_2 + lVar20;
          local_128 = param_2 + (int)param_1 + lVar20;
          puVar21 = (undefined1 *)&local_e0;
          goto LAB_001028b0;
        }
        local_11a = 1;
LAB_00102b1c:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return local_11a ^ 1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar12 = dcgettext(0,"missing file operand",5);
      error(0,0,uVar12);
switchD_00102663_caseD_67:
      usage(1);
LAB_001032ec:
      uVar6 = (uint)param_2;
      iVar5 = ftruncate(uVar6,0);
      if (iVar5 == 0) goto LAB_00103093;
      if ((local_d8.st_mode & 0xf000) != 0x8000) goto LAB_00103093;
      uVar12 = dcgettext(0,"%s: error truncating",5);
      piVar13 = __errno_location();
      error(0,*piVar13,uVar12,__ptr);
LAB_00102cfe:
      free(local_160);
      iVar5 = close((int)param_2);
      if (iVar5 == 0) goto LAB_00102ae2;
LAB_00102d17:
      uVar12 = dcgettext(0,"%s: failed to close",5);
      piVar13 = __errno_location();
      error(0,*piVar13,uVar12,__ptr);
LAB_00102ae2:
      do {
        local_158._0_1_ = 0;
LAB_00102af0:
        local_11a = local_11a & (byte)local_158;
        while( true ) {
          free(__ptr);
          local_150 = local_150 + 1;
          if (local_128 == local_150) goto LAB_00102b1c;
LAB_001028b0:
          uVar12 = quotearg_n_style_colon(0,3,*local_150);
          __ptr = (char *)xstrdup(uVar12);
          lVar20 = randint_source;
          local_138 = (char *)*local_150;
          if ((*local_138 != '-') || (local_138[1] != '\0')) break;
          uVar6 = rpl_fcntl(1,3);
          if ((int)uVar6 < 0) {
LAB_00103484:
            pcVar17 = "%s: fcntl failed";
LAB_00103490:
            uVar12 = dcgettext(0,pcVar17,5);
            piVar13 = __errno_location();
            error(0,*piVar13,uVar12,__ptr);
LAB_001034b0:
            local_160._0_1_ = false;
          }
          else {
            if ((uVar6 & 0x400) != 0) {
              pcVar17 = "%s: cannot shred append-only file descriptor";
              goto LAB_00102fbb;
            }
            iVar5 = fstat(1,(stat *)__buf);
            if (iVar5 != 0) {
              pcVar17 = "%s: fstat failed";
              goto LAB_00103490;
            }
            if ((((local_d8.st_mode & 0xf000) == 0x2000) && (iVar5 = isatty(1), iVar5 != 0)) ||
               (uVar6 = local_d8.st_mode & 0xf000, uVar6 == 0xc000 || uVar6 == 0x1000)) {
              pcVar17 = "%s: invalid file type";
LAB_00102fbb:
              uVar12 = dcgettext(0,pcVar17,5);
              error(0,0,uVar12,__ptr);
              goto LAB_001034b0;
            }
            if ((uVar6 == 0x8000) && (pcVar17 = "%s: file has negative size", local_d8.st_size < 0))
            goto LAB_00102fbb;
            pvVar9 = (void *)xnmalloc(pcVar23);
            _Var15 = local_d8.st_size;
            if (local_148 == -1) {
              if ((local_d8.st_mode & 0xf000) == 0x8000) {
                local_158 = local_d8.st_size;
                if (!bVar3) {
                  _Var18 = local_d8.st_blksize;
                  if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
                    _Var18 = 0x200;
                  }
                  lVar10 = local_d8.st_size % _Var18;
                  local_160._0_1_ = local_d8.st_size != 0 && local_d8.st_size < _Var18;
                  if (local_160._0_1_) {
                    if (lVar10 == 0) {
                      genpattern(pvVar9,pcVar23,lVar20);
                      local_170 = randint_get_source(lVar20);
                      pcVar17 = (char *)0x0;
                      goto LAB_00102a04;
                    }
                  }
                  else {
                    _Var15 = 0;
                    if (lVar10 == 0) goto LAB_001029be;
                  }
                  lVar19 = _Var18 - lVar10;
                  if (0x7fffffffffffffff - local_d8.st_size < _Var18 - lVar10) {
                    lVar19 = 0x7fffffffffffffff - local_d8.st_size;
                  }
                  local_158 = local_d8.st_size + lVar19;
                  goto LAB_00102e9e;
                }
              }
              else {
                local_158 = lseek(1,0,2);
                if (local_158 < 1) {
                  local_158 = -1;
                }
              }
LAB_001029be:
              genpattern(pvVar9,pcVar23,lVar20);
              local_170 = randint_get_source(lVar20);
              local_160._0_1_ = true;
            }
            else {
              local_158 = local_148;
              if ((local_d8.st_mode & 0xf000) != 0x8000) goto LAB_001029be;
              lVar10 = local_d8.st_blksize;
              if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
                lVar10 = 0x200;
              }
              if (local_148 < lVar10) {
                lVar10 = local_148;
              }
              if (lVar10 <= local_d8.st_size) goto LAB_001029be;
LAB_00102e9e:
              genpattern(pvVar9,pcVar23,lVar20);
              local_170 = randint_get_source(lVar20);
              if (_Var15 != 0) {
                local_160._0_1_ = true;
                pcVar17 = (char *)0x0;
                goto LAB_00102a04;
              }
              local_160._0_1_ = true;
            }
            while (_Var15 = local_158, local_158 = 0, pcVar17 = local_130, _Var15 != 0) {
LAB_00102a04:
              local_e0 = _Var15;
              if (local_178 != (char *)0x0) {
                pcVar16 = (char *)0x0;
                do {
                  uVar14 = 0;
                  if (pcVar16 < pcVar23) {
                    uVar14 = *(undefined4 *)((long)pvVar9 + (long)pcVar16 * 4);
                  }
                  pcVar16 = pcVar16 + 1;
                  iVar5 = dopass_constprop_0(__buf,__ptr,puVar21,uVar14,local_170,pcVar16,pcVar17);
                  if (iVar5 != 0) {
                    if (iVar5 < 0) goto LAB_00102a65;
                    local_160._0_1_ = false;
                  }
                } while (pcVar16 != local_178);
              }
            }
            if (((local_120 != 0) && (iVar5 = ftruncate(1,0), iVar5 != 0)) &&
               ((local_d8.st_mode & 0xf000) == 0x8000)) {
              uVar12 = dcgettext(0,"%s: error truncating",5);
              piVar13 = __errno_location();
              error(0,*piVar13,uVar12,__ptr);
LAB_00102a65:
              local_160._0_1_ = false;
            }
            free(pvVar9);
          }
          local_11a = local_11a & local_160._0_1_;
        }
        uVar6 = open_safer(local_138,0x101);
        if ((-1 < (int)uVar6) ||
           ((((piVar13 = __errno_location(), *piVar13 == 0xd && (bVar2)) &&
             (iVar5 = chmod(local_138,0x80), iVar5 == 0)) &&
            (uVar6 = open_safer(local_138,0x101), -1 < (int)uVar6)))) {
          param_2 = (undefined8 *)(ulong)uVar6;
          iVar5 = fstat(uVar6,(stat *)__buf);
          if (iVar5 != 0) goto LAB_00103612;
          if ((((local_d8.st_mode & 0xf000) == 0x2000) && (iVar5 = isatty(uVar6), iVar5 != 0)) ||
             (uVar7 = local_d8.st_mode & 0xf000, uVar7 == 0x1000 || uVar7 == 0xc000)) {
            pcVar17 = "%s: invalid file type";
LAB_0010365e:
            uVar12 = dcgettext(0,pcVar17,5);
            iVar5 = 0;
            goto LAB_00103635;
          }
          if ((uVar7 == 0x8000) && (local_d8.st_size < 0)) {
            pcVar17 = "%s: file has negative size";
            goto LAB_0010365e;
          }
          local_160 = (void *)xnmalloc(pcVar23);
          _Var15 = local_d8.st_size;
          if (local_148 == -1) {
            if ((local_d8.st_mode & 0xf000) == 0x8000) {
              local_140 = local_d8.st_size;
              if (!bVar3) {
                _Var18 = local_d8.st_blksize;
                if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
                  _Var18 = 0x200;
                }
                lVar10 = local_d8.st_size % _Var18;
                local_158._0_1_ = local_d8.st_size != 0 && local_d8.st_size < _Var18;
                if ((bool)(byte)local_158) {
                  if (lVar10 == 0) {
                    genpattern(local_160,pcVar23,lVar20);
                    local_168 = randint_get_source(lVar20);
                    local_140 = _Var15;
                    pcVar17 = (char *)0x0;
                    goto LAB_00102c87;
                  }
                }
                else {
                  _Var15 = 0;
                  if (lVar10 == 0) goto LAB_00102c3a;
                }
                lVar19 = _Var18 - lVar10;
                if (0x7fffffffffffffff - local_d8.st_size < _Var18 - lVar10) {
                  lVar19 = 0x7fffffffffffffff - local_d8.st_size;
                }
                local_140 = local_d8.st_size + lVar19;
                goto LAB_00102f1d;
              }
            }
            else {
              local_140 = lseek(uVar6,0,2);
              if (local_140 < 1) {
                local_140 = -1;
              }
            }
LAB_00102c3a:
            genpattern(local_160,pcVar23,lVar20);
            local_168 = randint_get_source(lVar20);
            local_158._0_1_ = true;
          }
          else {
            local_140 = local_148;
            if ((local_d8.st_mode & 0xf000) != 0x8000) goto LAB_00102c3a;
            lVar10 = local_d8.st_blksize;
            if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
              lVar10 = 0x200;
            }
            if (local_148 < lVar10) {
              lVar10 = local_148;
            }
            if (lVar10 <= local_d8.st_size) goto LAB_00102c3a;
LAB_00102f1d:
            genpattern(local_160,pcVar23,lVar20);
            local_168 = randint_get_source(lVar20);
            if (_Var15 != 0) {
              local_158._0_1_ = true;
              pcVar17 = (char *)0x0;
              goto LAB_00102c87;
            }
            local_158._0_1_ = true;
          }
          while (_Var15 = local_140, local_140 = 0, pcVar17 = local_130, _Var15 != 0) {
LAB_00102c87:
            local_e0 = _Var15;
            if (local_178 != (char *)0x0) {
              pcVar16 = (char *)0x0;
              do {
                uVar14 = 0;
                if (pcVar16 < pcVar23) {
                  uVar14 = *(undefined4 *)((long)local_160 + (long)pcVar16 * 4);
                }
                pcVar16 = pcVar16 + 1;
                iVar5 = dopass(param_2,__buf,__ptr,puVar21,uVar14,local_168,pcVar16,pcVar17);
                if (iVar5 != 0) {
                  if (iVar5 < 0) goto LAB_00102cfe;
                  local_158._0_1_ = false;
                }
              } while (local_178 != pcVar16);
            }
          }
          if (local_120 != 0) goto LAB_001032ec;
LAB_00103093:
          free(local_160);
          iVar5 = close(uVar6);
          if (iVar5 != 0) goto LAB_00102d17;
          if ((byte)local_158 == 0) goto LAB_00102ae2;
          if (local_120 != 0) {
            pvVar9 = (void *)xstrdup(local_138);
            pcVar17 = (char *)last_component(pvVar9);
            __ptr_00 = (void *)dir_name(pvVar9);
            uVar12 = quotearg_n_style_colon(0,3,__ptr_00);
            __ptr_01 = (void *)xstrdup(uVar12);
            if (local_120 == 3) {
              iVar5 = open_safer(__ptr_00,0x10900);
              if (bVar1) goto LAB_0010343f;
LAB_00103131:
              __n = base_len(pcVar17);
              if (__n != 0) {
                bVar4 = (byte)local_158;
                do {
                  sVar22 = __n - 1;
                  memset(pcVar17,0x30,__n);
                  pcVar17[__n] = '\0';
                  while (iVar8 = renameatu(0xffffff9c,local_138,0xffffff9c,pvVar9), iVar8 != 0) {
                    piVar13 = __errno_location();
                    if (*piVar13 != 0x11) goto LAB_0010324a;
                    pcVar16 = pcVar17 + sVar22;
                    while( true ) {
                      pcVar11 = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_."
                                       ,(int)*pcVar16);
                      if (pcVar11[1] != '\0') break;
                      *pcVar16 = '0';
                      bVar24 = pcVar17 == pcVar16;
                      pcVar16 = pcVar16 + -1;
                      if (bVar24) goto LAB_0010324a;
                    }
                    *pcVar16 = pcVar11[1];
                  }
                  if (-1 < iVar5) {
                    iVar8 = dosync(iVar5,__ptr_01);
                    if (iVar8 != 0) {
                      local_158._0_1_ = 0;
                    }
                  }
                  if (bVar1) {
                    pcVar16 = __ptr;
                    if (bVar4 == 0) {
                      pcVar16 = local_138;
                    }
                    uVar12 = dcgettext(0,"%s: renamed to %s",5);
                    error(0,0,uVar12,pcVar16);
                    bVar4 = 0;
                  }
                  memcpy(local_138 + ((long)pcVar17 - (long)pvVar9),pcVar17,__n + 1);
LAB_0010324a:
                  __n = sVar22;
                } while (sVar22 != 0);
              }
            }
            else {
              iVar5 = -1;
              if (bVar1) {
LAB_0010343f:
                uVar12 = dcgettext(0,"%s: removing",5);
                error(0,0,uVar12,__ptr);
              }
              if (local_120 != 1) goto LAB_00103131;
            }
            iVar8 = unlink(local_138);
            if (iVar8 == 0) {
              if (bVar1) {
                uVar12 = dcgettext(0,"%s: removed",5);
                error(0,0,uVar12,__ptr);
              }
            }
            else {
              uVar12 = dcgettext(0,"%s: failed to remove",5);
              piVar13 = __errno_location();
              error(0,*piVar13,uVar12,__ptr);
              local_158._0_1_ = 0;
            }
            if (-1 < iVar5) {
              iVar8 = dosync(iVar5,__ptr_01);
              if (iVar8 != 0) {
                local_158._0_1_ = 0;
              }
              iVar5 = close(iVar5);
              if (iVar5 != 0) {
                uVar12 = dcgettext(0,"%s: failed to close",5);
                piVar13 = __errno_location();
                error(0,*piVar13,uVar12,__ptr_01);
                local_158._0_1_ = 0;
              }
            }
            free(pvVar9);
            free(__ptr_00);
            free(__ptr_01);
          }
          goto LAB_00102af0;
        }
        uVar12 = dcgettext(0,"%s: failed to open for writing",5);
        error(0,*piVar13,uVar12,__ptr);
      } while( true );
    }
    if (0x80 < iVar5) goto switchD_00102663_caseD_67;
    if (iVar5 < 0x66) {
      if (iVar5 == -0x83) {
        uVar12 = proper_name_lite("Colin Plumb","Colin Plumb");
        version_etc(_stdout,"shred","GNU coreutils",_Version,uVar12,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar5 == -0x82) {
        usage(0);
        goto LAB_00103484;
      }
      goto switchD_00102663_caseD_67;
    }
    switch(iVar5) {
    case 0x66:
      bVar2 = true;
      break;
    default:
      goto switchD_00102663_caseD_67;
    case 0x6e:
      dcgettext(0,"invalid number of passes",5);
      pcVar23 = (char *)xdectoumax(_optarg,0,0x3fffffffffffffff,&_LC2);
      break;
    case 0x73:
      uVar12 = dcgettext(0,"invalid file size",5);
      local_148 = xnumtoumax(_optarg,0,0,0x7fffffffffffffff,"cbBkKMGTPEZYRQ0",uVar12,0,0);
      break;
    case 0x75:
      local_120 = 3;
      if (_optarg != (char *)0x0) {
        lVar20 = __xargmatch_internal
                           ("--remove",_optarg,remove_args,remove_methods,4,_argmatch_die,1,in_R10);
        local_120 = *(int *)(remove_methods + lVar20 * 4);
      }
      break;
    case 0x76:
      bVar1 = true;
      break;
    case 0x78:
      bVar3 = true;
      break;
    case 0x7a:
      local_170 = 1;
      break;
    case 0x80:
      if (local_178 != (char *)0x0) {
        local_178 = _optarg;
        iVar5 = strcmp(pcVar16,_optarg);
        if (iVar5 != 0) {
          uVar12 = dcgettext(0,"multiple random sources specified",5);
          error(1,0,uVar12);
          goto LAB_00103612;
        }
      }
      local_178 = pcVar17;
    }
  } while( true );
LAB_00103612:
  uVar6 = (uint)param_2;
  uVar12 = dcgettext(0,"%s: fstat failed",5);
  piVar13 = __errno_location();
  iVar5 = *piVar13;
LAB_00103635:
  error(0,iVar5,uVar12,__ptr);
  iVar5 = close(uVar6);
  if (iVar5 != 0) goto LAB_00102d17;
  goto LAB_00102ae2;
}


