
void copy_internal_cold(void)

{
  ulong uVar1;
  uint *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  char *__s;
  ulong uVar7;
  long lVar8;
  
  puVar2 = (uint *)__errno_location();
  *puVar2 = 0x5f;
  uVar3 = dcgettext(0,"failed to restore the default file creation context",5);
  uVar7 = (ulong)*puVar2;
  lVar8 = 1;
  error(1,uVar7,uVar3);
  uVar7 = uVar7 - lVar8;
  sVar4 = strlen(__s);
  uVar1 = sVar4 + 1 + uVar7;
  lVar5 = ximalloc(uVar1);
  uVar6 = uVar1;
  if (uVar1 <= uVar7) {
    uVar6 = uVar7;
  }
  __memcpy_chk(lVar5 + uVar7,__s,sVar4 + 1,uVar6 - uVar7);
  __memcpy_chk(lVar5,lVar8,uVar7,uVar1);
  return;
}



void subst_suffix(long param_1,long param_2,char *param_3)

{
  ulong uVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_2 - param_1;
  sVar2 = strlen(param_3);
  uVar1 = sVar2 + 1 + uVar5;
  lVar3 = ximalloc(uVar1);
  uVar4 = uVar1;
  if (uVar1 <= uVar5) {
    uVar4 = uVar5;
  }
  __memcpy_chk(lVar3 + uVar5,param_3,sVar2 + 1,uVar4 - uVar5);
  __memcpy_chk(lVar3,param_1,uVar5,uVar1);
  return;
}



undefined8 write_zeros(undefined4 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((zeros_3 == (undefined1 *)0x0) &&
     (zeros_3 = (undefined1 *)calloc(nz_2,1), zeros_3 == (undefined1 *)0x0)) {
    nz_2 = 0x400;
    zeros_3 = fallback_1;
  }
  if (param_2 != 0) {
    do {
      uVar2 = nz_2;
      if (param_2 <= nz_2) {
        uVar2 = param_2;
      }
      uVar1 = full_write(param_1,zeros_3,uVar2);
      if (uVar2 != uVar1) {
        return 0;
      }
      param_2 = param_2 - uVar2;
    } while (param_2 != 0);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void emit_verbose(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = quotearg_n_style(1,4);
  uVar3 = quotearg_n_style(0,4,param_2);
  __printf_chk(2,param_1,uVar3,uVar2);
  if (param_4 != 0) {
    uVar2 = quotearg_style(4,param_4);
    uVar3 = dcgettext(0," (backup: %s)",5);
    __printf_chk(2,uVar3,uVar2);
  }
  pcVar1 = _stdout->_IO_write_ptr;
  if (pcVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
    return;
  }
  __overflow(_stdout,10);
  return;
}



undefined8
create_hard_link(void *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5,undefined8 param_6,undefined1 param_7,char param_8,byte param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *__ptr;
  undefined8 uStack_40;
  
  iVar1 = force_linkat(param_2,param_3,param_5,param_6,(ulong)param_9 << 10,param_7);
  if (iVar1 < 1) {
    if ((iVar1 < 0) && (param_8 != '\0')) {
      uVar2 = quotearg_style(4,param_4,0xffffffffffffffff);
      uVar3 = dcgettext(0,"removed %s\n",5);
      __printf_chk(2,uVar3,uVar2);
    }
    uVar2 = 1;
  }
  else {
    __ptr = (void *)0x0;
    if (param_1 == (void *)0x0) {
      param_1 = (void *)subst_suffix(param_4,param_6,param_3,uStack_40);
      __ptr = param_1;
    }
    uVar2 = quotearg_n_style(1,4,param_1);
    uVar3 = quotearg_n_style(0,4,param_4);
    uVar4 = dcgettext(0,"cannot create hard link %s to %s",5);
    error(0,iVar1,uVar4,uVar3,uVar2);
    free(__ptr);
    uVar2 = 0;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void overwrite_ok(long param_1,undefined8 param_2,int param_3,char *param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 local_3c;
  undefined1 local_3b [9];
  undefined1 local_32;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_5 + 0x18) & 0xf000) != 0xa000) {
    cVar3 = can_write_any_file();
    if (cVar3 == '\0') {
      iVar4 = faccessat(param_3,param_4,2,0x200);
      if (iVar4 != 0) {
        strmode(*(undefined4 *)(param_5 + 0x18),&local_3c);
        uVar1 = *(uint *)(param_5 + 0x18);
        local_32 = 0;
        uVar5 = quotearg_style(4,param_2);
        uVar2 = _program_name;
        if ((*(char *)(param_1 + 0x18) == '\0') && ((*(uint *)(param_1 + 0x14) & 0xffff00) == 0)) {
          uVar6 = dcgettext(0,"%s: unwritable %s (mode %04lo, %s); try anyway? ",5);
        }
        else {
          uVar6 = dcgettext(0,"%s: replace %s, overriding mode %04lo (%s)? ",5);
        }
        __fprintf_chk(_stderr,2,uVar6,uVar2,uVar5,uVar1 & 0xfff,local_3b);
        goto LAB_001003c3;
      }
    }
  }
  uVar5 = quotearg_style(4,param_2);
  uVar2 = _program_name;
  uVar6 = dcgettext(0,"%s: overwrite %s? ",5);
  __fprintf_chk(_stderr,2,uVar6,uVar2,uVar5);
LAB_001003c3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    yesno();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 create_hole(int param_1,undefined8 param_2,char param_3,long param_4)

{
  int iVar1;
  __off_t _Var2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  _Var2 = lseek(param_1,param_4,1);
  if (_Var2 < 0) {
    uVar3 = quotearg_style(4,param_2);
    uVar5 = dcgettext(0,"cannot lseek %s",5);
    piVar4 = __errno_location();
    error(0,*piVar4,uVar5,uVar3);
    uVar3 = 0;
  }
  else {
    if ((param_3 != '\0') && (iVar1 = fallocate(param_1,3,_Var2 - param_4,param_4), iVar1 < 0)) {
      piVar4 = __errno_location();
      if ((*piVar4 != 0x5f) && (*piVar4 != 0x26)) {
        uVar3 = quotearg_style(4,param_2);
        uVar5 = dcgettext(0,"error deallocating %s",5);
        error(0,*piVar4,uVar5,uVar3);
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



undefined8
sparse_copy(int param_1,undefined4 param_2,undefined8 *param_3,ulong param_4,ulong param_5,
           undefined1 param_6,char param_7,undefined8 param_8,undefined8 param_9,ulong param_10,
           long *param_11,byte *param_12)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  char *__buf;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  size_t __n;
  ulong uVar15;
  ulong uVar16;
  char *__s2;
  char *pcVar17;
  bool bVar18;
  ulong uVar19;
  byte bVar20;
  bool bVar21;
  ulong local_78;
  
  *param_12 = 0;
  local_78 = param_10;
  *param_11 = 0;
  if (copy_debug._8_4_ == 0) {
    if (param_5 != 0) {
      copy_debug._8_4_ = 2;
      goto LAB_0010065e;
    }
    copy_debug._8_4_ = 1;
  }
  else if (param_5 != 0) {
    if (copy_debug._8_4_ == 3) {
      copy_debug._8_4_ = 4;
    }
    goto LAB_0010065e;
  }
  if (param_7 != '\0') {
    if (param_10 == 0) {
      return 1;
    }
    do {
      while( true ) {
        uVar15 = 0x7fffffffc0000000;
        if (param_10 < 0x7fffffffc0000001) {
          uVar15 = param_10;
        }
        lVar9 = rpl_copy_file_range(param_1,0,param_2,0,uVar15,0);
        local_78 = param_10;
        if (lVar9 == 0) {
          if (*param_11 != 0) {
            copy_debug._0_4_ = 2;
            return 1;
          }
          goto LAB_00100674;
        }
        lVar2 = *param_11;
        if (lVar9 < 0) break;
        copy_debug._0_4_ = 2;
        *param_11 = lVar2 + lVar9;
        param_10 = param_10 - lVar9;
        if (param_10 == 0) {
          return 1;
        }
      }
      copy_debug._0_4_ = 6;
      puVar10 = (uint *)__errno_location();
      uVar1 = *puVar10;
      if (lVar2 == 0) {
        if (0x1a < (int)uVar1) {
          if ((uVar1 != 0x26) && (uVar1 != 0x5f)) goto LAB_00100ad5;
          goto LAB_00100674;
        }
        if ((int)uVar1 < 1) goto LAB_00100ad5;
        if (((0x6442202UL >> ((ulong)uVar1 & 0x3f) & 1) != 0) || (uVar1 == 2)) goto LAB_00100674;
      }
      if (uVar1 != 4) {
LAB_00100ad5:
        uVar7 = quotearg_n_style(1,4,param_9);
        uVar8 = quotearg_n_style(0,4,param_8);
        uVar12 = dcgettext(0,"error copying %s to %s",5);
        error(0,*puVar10,uVar12,uVar8,uVar7);
        return 0;
      }
      copy_debug._0_4_ = 2;
      *param_11 = lVar2;
    } while( true );
  }
LAB_0010065e:
  copy_debug._0_4_ = 5;
  if (param_10 != 0) {
LAB_00100674:
    uVar15 = param_5;
    if (param_5 == 0) {
      uVar15 = param_4;
    }
    uVar19 = 0;
    bVar18 = false;
    do {
      while( true ) {
        __buf = (char *)*param_3;
        if (__buf == (char *)0x0) {
          iVar4 = getpagesize();
          __buf = (char *)xalignalloc((long)iVar4,param_4);
          *param_3 = __buf;
        }
        uVar5 = local_78;
        if (param_4 <= local_78) {
          uVar5 = param_4;
        }
        uVar5 = read(param_1,__buf,uVar5);
        if (-1 < (long)uVar5) break;
        piVar6 = __errno_location();
        if (*piVar6 != 4) {
          uVar7 = quotearg_style(4,param_8);
          uVar8 = dcgettext(0,"error reading %s",5);
          error(0,*piVar6,uVar8,uVar7);
          return 0;
        }
      }
      if (uVar5 == 0) break;
      local_78 = local_78 - uVar5;
      *param_11 = *param_11 + uVar5;
      uVar11 = uVar15;
      pcVar17 = __buf;
      bVar13 = bVar18;
LAB_00100921:
      do {
        uVar16 = uVar11;
        if (uVar5 < uVar11) {
          uVar16 = uVar5;
        }
        bVar21 = uVar5 == uVar16;
        bVar18 = uVar16 != 0 && param_5 != 0;
        __n = uVar16;
        __s2 = __buf;
        if (bVar18) {
          do {
            if (*__s2 != '\0') {
              bVar18 = false;
              bVar14 = bVar13;
              goto LAB_001008a0;
            }
            __s2 = __s2 + 1;
            __n = __n - 1;
            if (__n == 0) {
              bVar20 = uVar19 != 0 & (bVar13 ^ 1U);
              goto LAB_00100aa7;
            }
          } while ((__n & 0xf) != 0);
          iVar4 = memcmp(__buf,__s2,__n);
          bVar18 = iVar4 == 0;
          bVar21 = bVar21 && iVar4 != 0;
          bVar14 = (bool)(bVar13 ^ bVar18);
LAB_001008a0:
          bVar20 = uVar19 != 0 & bVar14;
          if (bVar21) {
            if (bVar20 == 0) goto LAB_0010097b;
            bVar21 = true;
          }
          else {
LAB_00100aa7:
            bVar21 = false;
            if (bVar20 == 0) goto LAB_00100950;
          }
          if (bVar13 != false) goto LAB_00100993;
LAB_001008ce:
          uVar11 = full_write(param_2,pcVar17,uVar19);
          if (uVar11 != uVar19) {
            uVar7 = quotearg_style(4,param_9);
            uVar8 = dcgettext(0,"error writing %s",5);
            piVar6 = __errno_location();
            error(0,*piVar6,uVar8,uVar7);
            return 0;
          }
          if (!bVar21) goto LAB_001009be;
LAB_001008f3:
          if (uVar16 == 0) {
            uVar19 = 0;
            break;
          }
          if (bVar20 != 0) {
            uVar11 = 0;
            pcVar17 = __buf;
            uVar19 = uVar16;
            bVar13 = bVar18;
            goto LAB_00100921;
          }
          uVar5 = uVar5 - uVar16;
          uVar19 = 0;
          pcVar17 = __buf;
        }
        else {
          bVar18 = bVar13;
          if ((((bVar13 ^ 1U) & bVar21) == 0) && (uVar16 != 0)) {
LAB_00100950:
            if (uVar19 + uVar16 + 0x8000000000000000 < uVar16) {
              uVar7 = quotearg_style(4,param_8);
              uVar8 = dcgettext(0,"overflow reading %s",5);
              error(0,0,uVar8,uVar7);
              return 0;
            }
            uVar5 = uVar5 - uVar16;
            uVar19 = uVar19 + uVar16;
          }
          else {
LAB_0010097b:
            uVar19 = uVar19 + uVar16;
            bVar20 = 0;
            bVar21 = true;
            if (bVar13 == false) goto LAB_001008ce;
LAB_00100993:
            cVar3 = create_hole(param_2,param_9,param_6,uVar19);
            if (cVar3 == '\0') {
              return 0;
            }
            if (bVar21) goto LAB_001008f3;
LAB_001009be:
            uVar5 = uVar5 - uVar16;
            pcVar17 = __buf;
            uVar19 = uVar16;
          }
        }
        __buf = __buf + uVar16;
        uVar11 = uVar16;
        bVar13 = bVar18;
      } while (uVar5 != 0);
      *param_12 = bVar18;
    } while (local_78 != 0);
    if (bVar18 != false) {
      uVar7 = create_hole(param_2,param_9,param_6,uVar19);
      return uVar7;
    }
  }
  return 1;
}



int set_owner_isra_0(long param_1,undefined8 param_2,int param_3,char *param_4,int param_5,
                    uint param_6,__uid_t param_7,__gid_t param_8,char param_9,uint param_10)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_9 == '\0') {
    if ((*(char *)(param_1 + 0x20) == '\0') && (*(char *)(param_1 + 0x18) == '\0')) {
      if (*(char *)(param_1 + 0x39) == '\0') goto LAB_00100c35;
      param_6 = *(uint *)(param_1 + 0x10);
    }
    if ((((ushort)(~(ushort)param_6 | 0xe00) & param_10 & 0xfff) == 0) ||
       (iVar2 = qset_acl(param_2,param_5,param_6 & param_10 & 0x1c0), iVar2 == 0))
    goto LAB_00100c35;
    puVar3 = (uint *)__errno_location();
    if (((*puVar3 < 0x17) && ((0x402002UL >> ((ulong)*puVar3 & 0x3f) & 1) != 0)) &&
       (*(char *)(param_1 + 0x1d) == '\0')) goto LAB_00100cb6;
    uVar4 = quotearg_style(4,param_2);
    uVar5 = dcgettext(0,"clearing permissions for %s",5);
    uVar1 = *puVar3;
  }
  else {
LAB_00100c35:
    if (param_5 < 0) {
      iVar2 = fchownat(param_3,param_4,param_7,param_8,0x100);
    }
    else {
      iVar2 = fchown(param_5,param_7,param_8);
    }
    if (iVar2 == 0) {
      return 1;
    }
    puVar3 = (uint *)__errno_location();
    if (((*puVar3 < 0x17) && ((0x402002UL >> ((ulong)*puVar3 & 0x3f) & 1) != 0)) &&
       (*(char *)(param_1 + 0x1c) == '\0')) {
      if (param_5 < 0) {
        fchownat(param_3,param_4,0xffffffff,param_8,0x100);
      }
      else {
        fchown(param_5,0xffffffff,param_8);
      }
      return 0;
    }
    uVar4 = quotearg_style(4,param_2);
    uVar5 = dcgettext(0,"failed to preserve ownership for %s",5);
    uVar1 = *puVar3;
  }
  error(0,uVar1,uVar5,uVar4);
LAB_00100cb6:
  return -(uint)*(byte *)(param_1 + 0x32);
}



byte set_process_security_ctx
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,long param_5)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_5 + 0x33) != '\0') {
    cVar1 = *(char *)(param_5 + 0x31);
    piVar3 = __errno_location();
    if ((cVar1 == '\0') || (*(char *)(param_5 + 0x34) != '\0')) {
      *piVar3 = 0x5f;
      uVar4 = quotearg_style(4,param_1);
      uVar5 = dcgettext(0,"failed to get security context of %s",5);
      error(0,*piVar3,uVar5,uVar4);
      bVar2 = *(byte *)(param_5 + 0x34);
    }
    else {
      *piVar3 = 0x5f;
      bVar2 = 0;
    }
    return bVar2 ^ 1;
  }
  if ((*(long *)(param_5 + 0x28) != 0) && (param_4 != '\0')) {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  return 1;
}



undefined8 set_file_security_ctx(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_3 + 0x31);
  piVar2 = __errno_location();
  if ((cVar1 != '\0') && (*(char *)(param_3 + 0x34) == '\0')) {
    *piVar2 = 0x5f;
    return 0;
  }
  *piVar2 = 0x5f;
  uVar3 = quotearg_n_style(0,4,param_1);
  uVar4 = dcgettext(0,"failed to set the security context of %s",5);
  error(0,*piVar2,uVar4,uVar3);
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00101fd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong copy_internal(char *param_1,char *param_2,undefined8 param_3,char *param_4,uint param_5,
                   __dev_t *param_6,__dev_t *param_7,__off_t *param_8,undefined4 param_9,
                   byte *param_10,__dev_t *param_11,__dev_t *param_12)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  __dev_t _Var5;
  __ino_t _Var6;
  __uid_t __owner;
  __gid_t __group;
  char cVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  __mode_t _Var16;
  undefined8 uVar17;
  char *pcVar18;
  uint *puVar19;
  undefined8 uVar20;
  int *piVar21;
  void *pvVar22;
  void *__ptr;
  ulong uVar23;
  __dev_t *__offset;
  undefined8 uVar24;
  size_t sVar25;
  stat *psVar26;
  char *pcVar27;
  ssize_t sVar28;
  size_t sVar29;
  __dev_t *p_Var30;
  __off_t _Var31;
  __dev_t *__offset_00;
  undefined1 *puVar32;
  byte bVar33;
  uint uVar34;
  ulong uVar35;
  long lVar36;
  __off_t **pp_Var37;
  __off_t **pp_Var38;
  __off_t **pp_Var39;
  undefined1 *puVar40;
  __off_t **pp_Var41;
  __off_t **pp_Var42;
  __off_t **pp_Var44;
  uint uVar45;
  char *pcVar46;
  void **ppvVar47;
  stat *psVar48;
  undefined8 in_R10;
  uint uVar49;
  __dev_t *p_Var50;
  undefined7 uVar51;
  long in_FS_OFFSET;
  bool bVar52;
  __off_t *local_3d8;
  uint local_3d0;
  uint local_3cc;
  undefined8 local_3c8;
  char *local_3c0;
  char local_3b5;
  uint local_3b4;
  undefined8 *local_3b0;
  stat *local_3a8;
  undefined8 local_3a0;
  void **local_398;
  undefined1 *local_390;
  stat *local_388;
  __dev_t *local_380;
  __dev_t *local_378;
  undefined8 local_370;
  __dev_t *local_368;
  __dev_t *local_360;
  byte *local_358;
  char *local_350;
  stat *local_348;
  char *local_340;
  uint local_338;
  undefined4 local_334;
  uint local_330;
  int local_32c;
  char *local_328;
  char *local_320;
  undefined1 local_312 [2];
  void *local_310;
  undefined8 local_308;
  __off_t _Stack_300;
  __off_t local_2f8;
  __off_t _Stack_2f0;
  __off_t local_2e8;
  __off_t _Stack_2e0;
  __off_t local_2d8;
  __off_t _Stack_2d0;
  __off_t local_2c8;
  __off_t _Stack_2c0;
  __off_t local_2b8;
  __off_t _Stack_2b0;
  __dev_t local_2a8;
  __dev_t _Stack_2a0;
  __nlink_t local_298;
  ulong uStack_290;
  stat local_288;
  stat local_1f8;
  stat local_168;
  stat local_d8;
  char local_41;
  long local_40;
  __off_t **pp_Var43;
  
  pp_Var44 = &local_3d8;
  pp_Var39 = &local_3d8;
  pp_Var38 = &local_3d8;
  pp_Var37 = &local_3d8;
  pp_Var43 = &local_3d8;
  pp_Var42 = &local_3d8;
  pp_Var41 = &local_3d8;
  local_328 = param_2;
  local_320 = param_1;
  local_378 = param_7;
  local_32c = (int)param_3;
  local_334 = param_9;
  local_350 = param_4;
  local_358 = param_10;
  local_380 = param_6;
  local_360 = param_11;
  local_368 = param_12;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar7 = *param_4;
  *(undefined1 *)param_11 = 0;
  local_340 = ".";
  if (cVar7 != '\0') {
    local_340 = param_4;
  }
  uVar34 = *(uint *)(param_8 + 9);
  uVar23 = (ulong)uVar34;
  if (((char)param_8[3] == '\0') || (*(char *)((long)param_8 + 0x1a) != '\0')) {
    if (uVar34 != 0) goto LAB_00100fea;
LAB_00101194:
    if (*(char *)((long)param_8 + 0x45) != '\0') {
      uVar23 = 0;
      goto LAB_00101040;
    }
    uVar23 = 0;
    pcVar46 = local_340;
    pcVar18 = local_328;
    iVar12 = local_32c;
LAB_00101002:
    iVar12 = fstatat(iVar12,pcVar46,&local_288,(uint)(*(int *)((long)param_8 + 4) == 2) << 8);
    if (iVar12 == 0) {
      local_330 = local_288.st_mode;
      if (((local_288.st_mode & 0xf000) != 0x4000) || ((char)param_8[7] != '\0')) goto LAB_00101040;
      uVar17 = quotearg_style(4,local_320);
      if (*(char *)((long)param_8 + 0x1b) == '\0') {
        uVar20 = dcgettext(0,"-r not specified; omitting directory %s",5);
      }
      else {
        uVar20 = dcgettext(0,"omitting directory %s",5);
      }
      error(0,0,uVar20,uVar17);
      pp_Var44 = &local_3d8;
      goto LAB_001025a2;
    }
LAB_00104cb4:
    *(undefined8 *)((long)pp_Var44 + -8) = 0x104cbe;
    uVar17 = quotearg_style(4,pcVar18);
    pcVar18 = "cannot stat %s";
    pp_Var41 = pp_Var44;
LAB_00104ccd:
    *(undefined8 *)((long)pp_Var41 + -8) = 0x104cd4;
    uVar20 = dcgettext(0,pcVar18,5);
    *(undefined8 *)((long)pp_Var41 + -8) = 0x104cdc;
    piVar21 = __errno_location();
    iVar12 = *piVar21;
    *(undefined8 *)((long)pp_Var41 + -8) = 0x104ced;
    error(0,iVar12,uVar20,uVar17);
    pp_Var44 = pp_Var41;
LAB_001025a2:
    p_Var50 = (__dev_t *)0x0;
  }
  else {
    if ((int)uVar34 < 0) {
      iVar12 = renameatu(0xffffff9c,param_1,param_3,local_340,1);
      if (iVar12 == 0) {
        param_5 = 1;
        *(undefined1 *)local_368 = 1;
        goto LAB_00101194;
      }
      puVar19 = (uint *)__errno_location();
      uVar23 = (ulong)*puVar19;
    }
    iVar12 = (int)uVar23;
    *(bool *)local_368 = iVar12 == 0;
    param_5 = (uint)(iVar12 == 0);
    if (iVar12 == 0) goto LAB_00101194;
LAB_00100fea:
    if (((int)uVar23 != 0x11) || (1 < *(int *)((long)param_8 + 0x3c) - 2U)) {
      pcVar46 = local_320;
      pcVar18 = local_320;
      iVar12 = -100;
      goto LAB_00101002;
    }
LAB_00101040:
    if ((char)local_334 == '\0') {
      local_348 = (stat *)CONCAT71(local_348._1_7_,1);
      local_370 = (stat *)0x0;
      local_338 = (uint)(*(int *)((long)param_8 + 4) == 4);
      if (0 < (int)param_5) goto LAB_00101108;
LAB_001013ec:
      if (((int)uVar23 == 0x11) && (iVar12 = *(int *)((long)param_8 + 0x3c), iVar12 - 2U < 2)) {
        local_348 = (stat *)((ulong)local_348 & 0xffffffffffffff00);
        cVar7 = '\0';
LAB_00101efb:
        cVar8 = '\0';
LAB_00101efe:
        if ((char)param_8[3] != '\0') {
LAB_00102b10:
          if (1 < iVar12 - 2U) {
LAB_00102b1c:
            if ((((int)param_8[1] != 3) &&
                (((((int)param_8[1] != 0 || (*(char *)((long)param_8 + 0x43) == '\0')) ||
                  ((local_1f8.st_mode & 0xf000) == 0xa000)) ||
                 ((cVar10 = can_write_any_file(), cVar10 != '\0' ||
                  (iVar12 = faccessat(local_32c,local_340,2,0x200), iVar12 == 0)))))) ||
               (cVar10 = overwrite_ok(param_8,local_328,local_32c,local_340,&local_1f8),
               cVar10 != '\0')) goto LAB_00102410;
            iVar12 = *(int *)((long)param_8 + 0x3c);
          }
          if (local_368 != (__dev_t *)0x0) {
            *(undefined1 *)local_368 = 1;
          }
LAB_00101f70:
          p_Var50 = (__dev_t *)(ulong)(iVar12 == 2);
LAB_00101f77:
          if (iVar12 == 3) {
            uVar17 = quotearg_style(4,local_328);
            uVar20 = dcgettext(0,"not replacing %s",5);
            error(0,0,uVar20,uVar17);
            pp_Var44 = &local_3d8;
          }
          else {
            pp_Var44 = &local_3d8;
            if (*(char *)((long)param_8 + 0x42) != '\0') {
              uVar17 = quotearg_style(4,local_328);
              uVar20 = dcgettext(0,"skipped %s\n",5);
              __printf_chk(2,uVar20,uVar17);
              pp_Var44 = &local_3d8;
            }
          }
          goto LAB_00101a0c;
        }
        if ((local_330 & 0xf000) != 0x4000) {
LAB_00101f22:
          if (1 < iVar12 - 2U) {
            if (((int)param_8[1] != 3) ||
               (cVar10 = overwrite_ok(param_8,local_328,local_32c,local_350,&local_1f8),
               cVar10 != '\0')) goto LAB_00102410;
            iVar12 = *(int *)((long)param_8 + 0x3c);
          }
          goto LAB_00101f70;
        }
LAB_00102410:
        pp_Var41 = &local_3d8;
        if (cVar8 != '\0') goto LAB_00101a06;
LAB_00102419:
        iVar12 = (int)*param_8;
        uVar34 = local_330 & 0xf000;
        bVar52 = (local_1f8.st_mode & 0xf000) != 0x4000;
        if ((uVar34 != 0x4000) == bVar52) {
LAB_00103070:
          if (((char)local_334 != '\0') && (bVar52)) {
LAB_00102c26:
            if (iVar12 != 3) {
              if (*(char *)((long)param_8 + 0x1a) == '\0') {
                cVar8 = seen_file(param_8[10],local_350,&local_1f8);
                if (cVar8 != '\0') {
                  uVar17 = quotearg_n_style(1,4,local_320);
                  uVar20 = quotearg_n_style(0,4,local_328);
                  pcVar18 = "will not overwrite just-created %s with %s";
                  goto LAB_00101603;
                }
                iVar12 = (int)*param_8;
                goto LAB_00102c5c;
              }
              if (iVar12 == 0) goto LAB_00102480;
            }
LAB_00102c6b:
            pcVar18 = (char *)last_component(local_320);
            if ((*pcVar18 == '.') &&
               ((pcVar18[(ulong)(pcVar18[1] == '.') + 1] == '\0' ||
                (pcVar18[(ulong)(pcVar18[1] == '.') + 1] == '/')))) goto LAB_00103030;
            if (((char)param_8[3] == '\0') && ((local_1f8.st_mode & 0xf000) == 0x4000))
            goto LAB_00103040;
            if (iVar12 != 3) {
              sVar29 = strlen(pcVar18);
              local_370 = (stat *)last_component(local_350);
              local_348 = (stat *)strlen((char *)local_370);
              local_388 = _simple_backup_suffix;
              sVar25 = strlen((char *)_simple_backup_suffix);
              psVar26 = local_348;
              if (((sVar29 == (long)local_348->__unused + (sVar25 - 0x78)) &&
                  (iVar13 = memcmp(pcVar18,local_370,(size_t)local_348), psVar48 = local_388,
                  iVar13 == 0)) &&
                 (iVar13 = strcmp(pcVar18 + (long)(psVar26->__unused + -0xf),(char *)local_388),
                 pcVar18 = local_350, iVar13 == 0)) {
                sVar29 = strlen(local_350);
                pcVar18 = (char *)subst_suffix(pcVar18,pcVar18 + sVar29,psVar48);
                iVar12 = fstatat(local_32c,pcVar18,&local_d8,0);
                free(pcVar18);
                if ((iVar12 == 0) &&
                   (local_288.st_dev == local_d8.st_dev && local_288.st_ino == local_d8.st_ino)) {
                  if ((char)param_8[3] == '\0') {
                    uVar17 = dcgettext(0,"backing up %s might destroy source;  %s not copied",5);
                  }
                  else {
                    uVar17 = dcgettext(0,"backing up %s might destroy source;  %s not moved",5);
                  }
                  uVar20 = quotearg_n_style(1,4,local_320);
                  uVar24 = quotearg_n_style(0,4,local_328);
                  error(0,0,uVar17,uVar24,uVar20);
                  pp_Var44 = &local_3d8;
                  goto LAB_001025a2;
                }
                iVar12 = (int)*param_8;
              }
            }
            pcVar18 = local_350;
            pcVar46 = (char *)backup_file_rename(local_32c,local_350,iVar12);
            if (pcVar46 != (char *)0x0) {
              lVar36 = (long)pcVar18 - (long)local_328;
              sVar29 = strlen(pcVar46);
              uVar23 = sVar29 + 1 + lVar36 + 0x17;
              pp_Var44 = &local_3d8;
              while (pp_Var43 != (__off_t **)((long)&local_3d8 - (uVar23 & 0xfffffffffffff000))) {
                pp_Var42 = (__off_t **)((long)pp_Var44 + -0x1000);
                *(undefined8 *)((long)pp_Var44 + -8) = *(undefined8 *)((long)pp_Var44 + -8);
                pp_Var43 = (__off_t **)((long)pp_Var44 + -0x1000);
                pp_Var44 = (__off_t **)((long)pp_Var44 + -0x1000);
              }
              uVar23 = (ulong)((uint)uVar23 & 0xff0);
              lVar4 = -uVar23;
              if (uVar23 != 0) {
                *(undefined8 *)((long)pp_Var42 + -8) = *(undefined8 *)((long)pp_Var42 + -8);
              }
              local_370 = (stat *)((ulong)((long)pp_Var42 + lVar4 + 0xf) & 0xfffffffffffffff0);
              *(undefined8 *)((long)pp_Var42 + lVar4 + -8) = 0x103266;
              pvVar22 = (void *)__mempcpy_chk(local_370,local_328,lVar36);
              *(undefined8 *)((long)pp_Var42 + lVar4 + -8) = 0x103274;
              memcpy(pvVar22,pcVar46,sVar29 + 1);
              uVar23 = 0x11;
              *(undefined8 *)((long)pp_Var42 + lVar4 + -8) = 0x103281;
              free(pcVar46);
              local_348 = (stat *)CONCAT71(local_348._1_7_,1);
              pp_Var39 = (__off_t **)((long)pp_Var42 + lVar4);
              goto LAB_00102609;
            }
            piVar21 = __errno_location();
            if (*piVar21 == 2) {
              local_348 = (stat *)CONCAT71(local_348._1_7_,1);
              local_370 = (stat *)0x0;
              uVar23 = 0x11;
              pp_Var39 = &local_3d8;
              goto LAB_00102609;
            }
            uVar17 = quotearg_style(4,local_328);
            pcVar18 = "cannot backup %s";
LAB_00105347:
            uVar20 = dcgettext(0,pcVar18,5);
            error(0,*piVar21,uVar20,uVar17);
            pp_Var44 = &local_3d8;
            goto LAB_001025a2;
          }
LAB_00102c5c:
          if (iVar12 != 0) goto LAB_00102c6b;
LAB_00103030:
          if ((local_1f8.st_mode & 0xf000) != 0x4000) goto LAB_00102480;
LAB_00103040:
          local_370 = (stat *)0x0;
          uVar23 = 0x11;
          pp_Var39 = &local_3d8;
LAB_00102609:
          if ((char)local_334 != '\0') goto LAB_001010c3;
          goto LAB_00101108;
        }
        if (iVar12 != 0) {
LAB_00102c18:
          if (((char)local_334 != '\0') && (bVar52)) goto LAB_00102c26;
          goto LAB_00102c6b;
        }
        if (*(char *)((long)param_8 + 0x1a) == '\0') {
          uVar17 = quotearg_n_style(1,4,local_320);
          uVar20 = quotearg_n_style(0,4,local_328);
          pcVar18 = "cannot overwrite directory %s with non-directory %s";
          if (uVar34 == 0x4000) {
            pcVar18 = "cannot overwrite non-directory %s with directory %s";
          }
          uVar24 = dcgettext(0,pcVar18,5);
          error(0,0,uVar24,uVar20,uVar17);
          pp_Var44 = &local_3d8;
          goto LAB_001025a2;
        }
        if ((!bVar52) || ((char)local_334 == '\0')) goto LAB_00103030;
LAB_00102480:
        if ((char)param_8[3] != '\0') goto LAB_00103040;
        if (*(char *)((long)param_8 + 0x15) == '\0') {
          if (*(char *)((long)param_8 + 0x31) == '\0') goto LAB_00103040;
          if (((char)param_8[6] == '\0') || (local_1f8.st_nlink < 2)) {
            uVar23 = 0x11;
            local_370 = (stat *)0x0;
            pp_Var39 = &local_3d8;
            if ((*(int *)((long)param_8 + 4) != 2) ||
               (pp_Var39 = &local_3d8, (local_288.st_mode & 0xf000) == 0x8000)) goto LAB_00102609;
          }
        }
        iVar12 = unlinkat(local_32c,local_350,0);
        if ((iVar12 != 0) && (piVar21 = __errno_location(), *piVar21 != 2)) {
          uVar17 = quotearg_style(4,local_328);
          pcVar18 = "cannot remove %s";
          goto LAB_00105347;
        }
        local_348 = (stat *)CONCAT71(local_348._1_7_,(char)param_8[8]);
        if ((char)param_8[8] != '\0') {
          uVar17 = quotearg_style(4,local_328);
          uVar20 = dcgettext(0,"removed %s\n",5);
          uVar23 = 0x11;
          __printf_chk(2,uVar20,uVar17);
          local_370 = (stat *)0x0;
          pp_Var39 = &local_3d8;
          goto LAB_00102609;
        }
        if ((char)local_334 != '\0') {
          uVar23 = 0x11;
          local_370 = (stat *)0x0;
          local_348 = (stat *)CONCAT71(local_348._1_7_,(char)local_334);
          pp_Var39 = &local_3d8;
          goto LAB_001010c3;
        }
        local_348 = (stat *)CONCAT71(local_348._1_7_,1);
        uVar23 = 0x11;
        local_370 = (stat *)0x0;
        goto LAB_00101630;
      }
      uVar34 = local_330 & 0xf000;
      if (uVar34 == 0x8000) goto LAB_001018aa;
      cVar7 = *(char *)((long)param_8 + 0x14);
      if (cVar7 != '\0') {
        if (uVar34 == 0x4000) {
          if (*(char *)((long)param_8 + 0x41) != '\0') goto LAB_001018aa;
LAB_00101bc8:
          bVar33 = 1;
          param_5 = 0x100;
          goto LAB_00101431;
        }
        if (uVar34 == 0xa000) goto LAB_00101bc8;
LAB_001018aa:
        cVar7 = (char)param_8[3];
        if (((cVar7 != '\0') || (cVar7 = *(char *)((long)param_8 + 0x3a), cVar7 != '\0')) ||
           (cVar7 = *(char *)((long)param_8 + 0x17), cVar7 != '\0')) goto LAB_00101bc8;
        if ((int)*param_8 != 0) goto LAB_0010141f;
        cVar7 = *(char *)((long)param_8 + 0x15);
        if (cVar7 != '\0') goto LAB_00101bc8;
        bVar33 = 0;
        if (param_5 == 0) goto LAB_00101431;
LAB_00101900:
        local_348 = (stat *)CONCAT71(local_348._1_7_,1);
LAB_001025f2:
        local_370 = (stat *)0x0;
        cVar7 = '\0';
        pp_Var39 = &local_3d8;
        if ((int)uVar23 == 0x11) goto LAB_0010146a;
        goto LAB_00102609;
      }
LAB_0010141f:
      cVar7 = '\x01';
      bVar33 = 1;
      param_5 = 0x100;
LAB_00101431:
      local_370 = (stat *)(CONCAT44(local_370._4_4_,local_330) & 0xffffffff0000f000);
      iVar12 = fstatat(local_32c,local_340,&local_1f8,param_5);
      psVar26 = local_348;
      local_348 = (stat *)((ulong)local_348 & 0xffffffffffffff00);
      uVar34 = (uint)local_370;
      if (iVar12 < 0) {
        local_348 = (stat *)CONCAT44(SUB84(psVar26,4),(uint)local_370);
        piVar21 = __errno_location();
        uVar34 = (uint)local_348;
        if (*piVar21 == 2) goto LAB_00101900;
        bVar33 = *piVar21 != 0x28 | bVar33;
        local_348 = (stat *)CONCAT71(local_348._1_7_,bVar33);
        if ((bVar33 != 0) || (*(char *)((long)param_8 + 0x16) == '\0')) {
          uVar17 = quotearg_style(4,local_328);
          uVar20 = dcgettext(0,"cannot stat %s",5);
          error(0,*piVar21,uVar20,uVar17);
          pp_Var44 = &local_3d8;
          goto LAB_001025a2;
        }
        goto LAB_001025f2;
      }
LAB_0010146a:
      iVar12 = *(int *)((long)param_8 + 0x3c);
      if (iVar12 - 2U < 2) goto LAB_00101efb;
      uVar35 = local_288.st_dev ^ local_1f8.st_dev;
      uVar23 = local_288.st_ino ^ local_1f8.st_ino;
      bVar52 = uVar35 == 0 && uVar23 == 0;
      if (uVar35 != 0 || uVar23 != 0) {
        cVar8 = '\0';
        if (*(int *)((long)param_8 + 4) != 2) goto LAB_00102e1f;
LAB_00103358:
        psVar26 = &local_1f8;
        psVar48 = &local_288;
        if (((local_288.st_mode & 0xf000) != 0xa000) || ((local_1f8.st_mode & 0xf000) != 0xa000)) {
LAB_00101570:
          if ((int)*param_8 == 0) {
            cVar8 = (char)param_8[3];
            if ((cVar8 == '\0') && (*(char *)((long)param_8 + 0x15) == '\0')) {
              if ((psVar48->st_mode & 0xf000) != 0xa000) {
LAB_00103612:
                if ((psVar26->st_mode & 0xf000) != 0xa000) {
LAB_001038e8:
                  if (psVar48->st_dev != psVar26->st_dev || psVar48->st_ino != psVar26->st_ino)
                  goto LAB_00103e89;
                  cVar8 = *(char *)((long)param_8 + 0x17);
                  if (cVar8 != '\0') goto LAB_001033ef;
                }
LAB_00103626:
                cVar8 = (char)param_8[3];
LAB_0010362c:
                if (((cVar8 != '\0') && ((local_288.st_mode & 0xf000) == 0xa000)) &&
                   (1 < psVar26->st_nlink)) {
                  local_370 = (stat *)CONCAT44(local_370._4_4_,uVar34);
                  local_388 = psVar48;
                  pcVar18 = canonicalize_file_name(local_320);
                  psVar48 = local_388;
                  uVar34 = (uint)local_370;
                  if (pcVar18 != (char *)0x0) {
                    cVar8 = '\0';
                    bVar33 = same_nameat(0xffffff9c,pcVar18,local_32c);
                    bVar33 = bVar33 ^ 1;
                    free(pcVar18);
                    goto LAB_001033e6;
                  }
                }
              }
              if ((*(char *)((long)param_8 + 0x3a) == '\0') ||
                 ((psVar26->st_mode & 0xf000) != 0xa000)) {
                if (*(int *)((long)param_8 + 4) != 2) goto LAB_001015c8;
                if ((psVar48->st_mode & 0xf000) == 0xa000) {
                  local_370 = (stat *)CONCAT44(local_370._4_4_,uVar34);
                  iVar12 = stat(local_320,&local_d8);
                  uVar34 = (uint)local_370;
                  if (iVar12 != 0) goto LAB_00103e89;
                }
                else {
                  local_d8.st_dev = psVar48->st_dev;
                  local_d8.st_ino = psVar48->st_ino;
                  local_d8.st_nlink = psVar48->st_nlink;
                  local_d8.st_mode = psVar48->st_mode;
                  local_d8.st_uid = psVar48->st_uid;
                  local_d8.st_gid = psVar48->st_gid;
                  local_d8.__pad0 = psVar48->__pad0;
                  local_d8.st_rdev = psVar48->st_rdev;
                  local_d8.st_size = (__off_t)psVar48->st_size;
                  local_d8.st_blksize = psVar48->st_blksize;
                  local_d8.st_blocks = psVar48->st_blocks;
                  local_d8.st_atim.tv_sec = (psVar48->st_atim).tv_sec;
                  local_d8.st_atim.tv_nsec = (psVar48->st_atim).tv_nsec;
                  local_d8.st_mtim.tv_sec = (psVar48->st_mtim).tv_sec;
                  local_d8.st_mtim.tv_nsec = (psVar48->st_mtim).tv_nsec;
                  local_d8.st_ctim.tv_sec = (psVar48->st_ctim).tv_sec;
                  local_d8.st_ctim.tv_nsec = (psVar48->st_ctim).tv_nsec;
                  local_d8.__unused[0] = psVar48->__unused[0];
                  local_d8.__unused[1] = psVar48->__unused[1];
                  local_d8.__unused[2] = psVar48->__unused[2];
                }
                if ((psVar26->st_mode & 0xf000) == 0xa000) {
                  local_370 = (stat *)CONCAT44(local_370._4_4_,uVar34);
                  iVar12 = fstatat(local_32c,local_340,&local_168,0);
                  uVar34 = (uint)local_370;
                  if (iVar12 != 0) goto LAB_00103e89;
                }
                else {
                  local_168.st_dev = psVar26->st_dev;
                  local_168.st_ino = psVar26->st_ino;
                  local_168.st_nlink = psVar26->st_nlink;
                  local_168.st_mode = psVar26->st_mode;
                  local_168.st_uid = psVar26->st_uid;
                  local_168.st_gid = psVar26->st_gid;
                  local_168.__pad0 = psVar26->__pad0;
                  local_168.st_rdev = psVar26->st_rdev;
                  local_168.st_size = psVar26->st_size;
                  local_168.st_blksize = (__blksize_t)psVar26->st_blksize;
                  local_168.st_blocks = psVar26->st_blocks;
                  local_168.st_atim.tv_sec = (psVar26->st_atim).tv_sec;
                  local_168.st_atim.tv_nsec = (psVar26->st_atim).tv_nsec;
                  local_168.st_mtim.tv_sec = (psVar26->st_mtim).tv_sec;
                  local_168.st_mtim.tv_nsec = (psVar26->st_mtim).tv_nsec;
                  local_168.st_ctim.tv_sec = (psVar26->st_ctim).tv_sec;
                  local_168.st_ctim.tv_nsec = (psVar26->st_ctim).tv_nsec;
                  local_168.__unused[0] = psVar26->__unused[0];
                  local_168.__unused[1] = psVar26->__unused[1];
                  local_168.__unused[2] = psVar26->__unused[2];
                }
                if (local_d8.st_dev == local_168.st_dev && local_d8.st_ino == local_168.st_ino) {
                  if (*(char *)((long)param_8 + 0x17) != '\0') {
                    cVar8 = (psVar26->st_mode & 0xf000) != 0xa000;
                    iVar12 = *(int *)((long)param_8 + 0x3c);
                    goto LAB_00102e1f;
                  }
                  goto LAB_001015c8;
                }
              }
            }
            else if ((psVar26->st_mode & 0xf000) != 0xa000) {
              if ((bVar52) && (1 < psVar26->st_nlink)) {
                local_370 = (stat *)CONCAT44(local_370._4_4_,uVar34);
                local_388 = psVar48;
                cVar8 = same_nameat(0xffffff9c,local_320,local_32c);
                if (cVar8 != '\0') {
                  psVar48 = local_388;
                  uVar34 = (uint)local_370;
                  if ((local_388->st_mode & 0xf000) != 0xa000) goto LAB_00103612;
                  goto LAB_00103626;
                }
                bVar33 = *(byte *)(param_8 + 3) ^ 1;
                cVar8 = '\0';
                goto LAB_001033e6;
              }
              if ((psVar48->st_mode & 0xf000) != 0xa000) goto LAB_001038e8;
              goto LAB_0010362c;
            }
LAB_00103e89:
            iVar12 = *(int *)((long)param_8 + 0x3c);
            cVar8 = '\0';
            goto LAB_00102e1f;
          }
          if (bVar52) {
            cVar8 = '\0';
            local_370 = (stat *)CONCAT44(local_370._4_4_,uVar34);
            bVar33 = same_nameat(0xffffff9c,local_320,local_32c);
            bVar33 = bVar33 ^ 1;
            goto LAB_001033e6;
          }
          if ((char)param_8[3] != '\0') {
            if (*(int *)((long)param_8 + 0x3c) != 1) {
              cVar8 = '\0';
              goto LAB_00102b07;
            }
LAB_00103ee9:
            cVar8 = '\0';
            cVar10 = '\0';
            if (uVar34 != 0x4000) goto LAB_00102e35;
            if ((char)param_8[3] != '\0') goto LAB_00102b1c;
            goto LAB_00102419;
          }
          if (((*(int *)((long)param_8 + 4) != 2) && ((psVar48->st_mode & 0xf000) == 0xa000)) &&
             ((psVar26->st_mode & 0xf000) != 0xa000)) goto LAB_001015c8;
          if (*(int *)((long)param_8 + 0x3c) == 1) goto LAB_00103ee9;
          cVar8 = '\0';
          if (uVar34 != 0x4000) goto LAB_0010351c;
          iVar12 = (int)*param_8;
          bVar52 = (local_1f8.st_mode & 0xf000) != 0x4000;
          if (bVar52 != ((local_330 & 0xf000) != 0x4000)) goto LAB_00102c18;
          goto LAB_00103070;
        }
        local_370 = (stat *)CONCAT44(local_370._4_4_,uVar34);
        cVar8 = same_nameat(0xffffff9c,local_320,local_32c);
        if (cVar8 == '\0') {
          cVar8 = '\0';
          uVar34 = (uint)local_370;
          if (((int)*param_8 != 0) || (uVar35 != 0 || uVar23 != 0)) goto LAB_001033ef;
          cVar8 = '\x01';
          bVar33 = *(byte *)(param_8 + 3) ^ 1;
LAB_001033e6:
          uVar34 = (uint)local_370;
          if (bVar33 != 0) goto LAB_001033ef;
        }
LAB_001015c8:
        uVar17 = quotearg_n_style(1,4,local_328);
        uVar20 = quotearg_n_style(0,4,local_320);
        pcVar18 = "%s and %s are the same file";
        pp_Var37 = &local_3d8;
        goto LAB_00101603;
      }
      cVar8 = *(char *)((long)param_8 + 0x17);
      if (cVar8 == '\0') {
        if (*(int *)((long)param_8 + 4) == 2) goto LAB_00103358;
        psVar26 = &local_168;
        local_370 = (stat *)CONCAT44(local_370._4_4_,uVar34);
        iVar12 = fstatat(local_32c,local_340,psVar26,0x100);
        uVar34 = (uint)local_370;
        if (iVar12 == 0) {
          local_388 = (stat *)CONCAT44(local_388._4_4_,(uint)local_370);
          local_370 = &local_d8;
          iVar12 = lstat(local_320,&local_d8);
          uVar34 = (uint)local_388;
          if (iVar12 == 0) {
            bVar52 = local_d8.st_dev == local_168.st_dev && local_d8.st_ino == local_168.st_ino;
            psVar48 = local_370;
            uVar34 = (uint)local_388;
            if ((((local_d8.st_mode & 0xf000) != 0xa000) || ((local_168.st_mode & 0xf000) != 0xa000)
                ) || (*(char *)((long)param_8 + 0x15) == '\0')) goto LAB_00101570;
          }
        }
LAB_001033ef:
        iVar12 = *(int *)((long)param_8 + 0x3c);
      }
LAB_00102e1f:
      if (iVar12 != 1) goto LAB_00101efe;
      cVar10 = cVar8;
      if (uVar34 == 0x4000) {
        if ((char)param_8[3] == '\0') goto LAB_00102410;
        goto LAB_00102b1c;
      }
LAB_00102e35:
      cVar8 = cVar10;
      bVar52 = false;
      if ((*(char *)((long)param_8 + 0x21) != '\0') && (bVar52 = true, (char)param_8[3] != '\0')) {
        bVar52 = local_1f8.st_dev != local_288.st_dev;
      }
      iVar12 = utimecmpat(local_32c,local_350,&local_1f8,&local_288,bVar52);
      if (iVar12 < 0) {
        if ((char)param_8[3] == '\0') {
LAB_0010351c:
          iVar12 = *(int *)((long)param_8 + 0x3c);
          goto LAB_00101f22;
        }
LAB_00102b07:
        iVar12 = *(int *)((long)param_8 + 0x3c);
        goto LAB_00102b10;
      }
      if (local_368 != (__dev_t *)0x0) {
        *(undefined1 *)local_368 = 1;
      }
      lVar36 = remember_copied(local_350,local_288.st_ino,local_288.st_dev);
      if (lVar36 == 0) {
        iVar12 = *(int *)((long)param_8 + 0x3c);
        p_Var50 = (__dev_t *)0x1;
        goto LAB_00101f77;
      }
      uVar34 = create_hard_link(0,local_32c,lVar36,local_328,local_32c,local_350,1,(char)param_8[8],
                                local_338);
      p_Var50 = (__dev_t *)(ulong)uVar34;
      if ((char)uVar34 != '\0') {
        iVar12 = *(int *)((long)param_8 + 0x3c);
        goto LAB_00101f77;
      }
      pp_Var44 = &local_3d8;
      if (*(char *)((long)param_8 + 0x33) == '\0') goto LAB_001025a2;
LAB_00103176:
      *(undefined8 *)((long)pp_Var41 + -8) = 0x10317b;
      copy_internal_cold();
LAB_00103180:
      pcVar18 = local_350;
      _Var31 = param_8[10];
      *(undefined8 *)((long)pp_Var41 + -8) = 0x103198;
      record_file(_Var31,pcVar18,&local_288);
    }
    else {
      lVar36 = param_8[0xb];
      if (lVar36 == 0) {
LAB_00101088:
        local_338 = (uint)(*(int *)((long)param_8 + 4) - 3U < 2);
        if ((int)param_5 < 1) goto LAB_001013ec;
        cVar7 = '\0';
        local_370 = (stat *)0x0;
        local_348 = (stat *)CONCAT71(local_348._1_7_,(char)local_334);
        pp_Var39 = &local_3d8;
LAB_001010c3:
        iVar12 = local_32c;
        pcVar18 = local_340;
        if ((param_8[10] == 0) || ((char)param_8[3] != '\0')) {
LAB_00101108:
          pp_Var38 = pp_Var39;
          if ((char)param_8[8] == '\0') {
LAB_00101207:
            if ((int)uVar23 != 0) goto LAB_00101630;
            pp_Var41 = pp_Var38;
            if ((char)param_8[3] == '\0') goto LAB_0010121b;
            goto LAB_001019b8;
          }
          if ((char)param_8[3] == '\0') goto LAB_001011d0;
          if ((int)uVar23 != 0) {
            pp_Var41 = pp_Var39;
            if (*(char *)((long)param_8 + 0x1a) != '\0') goto LAB_00101648;
            goto LAB_001016fc;
          }
LAB_00101128:
          if (*(char *)((long)param_8 + 0x1a) == '\0') {
            *(undefined8 *)((long)pp_Var38 + -8) = 0x102f26;
            uVar17 = dcgettext(0,"renamed %s -> %s",5);
          }
          else {
            *(undefined8 *)((long)pp_Var38 + -8) = 0x101147;
            uVar17 = dcgettext(0,"exchanged %s <-> %s",5);
          }
          pcVar46 = local_320;
          pcVar18 = local_328;
          psVar26 = local_370;
          *(undefined8 *)((long)pp_Var38 + -8) = 0x101164;
          emit_verbose(uVar17,pcVar46,pcVar18,psVar26);
          pp_Var41 = pp_Var38;
LAB_001019c6:
          pcVar18 = local_328;
          if (param_8[5] != 0) {
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1019e2;
            set_file_security_ctx(pcVar18,1,param_8);
          }
          if (local_368 != (__dev_t *)0x0) {
            *(undefined1 *)local_368 = 1;
          }
          if (((char)local_334 == '\0') || (*(char *)((long)param_8 + 0x45) != '\0'))
          goto LAB_00101a06;
          goto LAB_00103180;
        }
        if ((int)*param_8 == 0) {
          psVar26 = &local_1f8;
          if (cVar7 == '\0') {
            psVar26 = &local_d8;
            *(undefined8 *)((long)pp_Var39 + -8) = 0x1032b1;
            iVar12 = fstatat(iVar12,pcVar18,psVar26,0x100);
            if (iVar12 < 0) goto LAB_00101108;
          }
          pcVar18 = local_350;
          if ((psVar26->st_mode & 0xf000) == 0xa000) {
            _Var31 = param_8[10];
            *(undefined8 *)((long)pp_Var39 + -8) = 0x102fba;
            cVar7 = seen_file(_Var31,pcVar18);
            pcVar18 = local_328;
            if (cVar7 != '\0') {
              *(undefined8 *)((long)pp_Var39 + -8) = 0x102fd8;
              uVar17 = quotearg_n_style(1,4,pcVar18);
              pcVar18 = local_320;
              *(undefined8 *)((long)pp_Var39 + -8) = 0x102fee;
              uVar20 = quotearg_n_style(0,4,pcVar18);
              pcVar18 = "will not copy %s through just-created symlink %s";
              pp_Var37 = pp_Var39;
LAB_00101603:
              *(undefined8 *)((long)pp_Var37 + -8) = 0x10160a;
              uVar24 = dcgettext(0,pcVar18,5);
              *(undefined8 *)((long)pp_Var37 + -8) = 0x10161e;
              error(0,0,uVar24,uVar20,uVar17);
              pp_Var44 = pp_Var37;
              goto LAB_001025a2;
            }
          }
          goto LAB_00101108;
        }
        pp_Var38 = pp_Var39;
        if ((char)param_8[8] != '\0') {
LAB_001011d0:
          pcVar46 = local_320;
          pcVar18 = local_328;
          psVar26 = local_370;
          if ((local_330 & 0xf000) != 0x4000) {
            *(undefined8 *)((long)pp_Var38 + -8) = 0x101207;
            emit_verbose("%s -> %s",pcVar46,pcVar18,psVar26);
            goto LAB_00101207;
          }
        }
        pp_Var41 = pp_Var38;
        if ((int)uVar23 == 0) {
LAB_0010121b:
          local_388 = (stat *)0x0;
          local_368 = (__dev_t *)CONCAT44(local_368._4_4_,(uint)(byte)local_348);
LAB_00101233:
          pcVar46 = local_320;
          pcVar18 = local_328;
          uVar15 = local_330;
          uVar34 = local_330;
          if (*(char *)((long)param_8 + 0x39) != '\0') {
            uVar34 = *(uint *)(param_8 + 2);
          }
          pp_Var44 = pp_Var41;
          puVar40 = (undefined1 *)pp_Var41;
          if (*(char *)((long)param_8 + 0x1f) == '\0') {
            if ((local_330 & 0xf000) == 0x4000) {
              uVar23 = (ulong)local_368 & 0xffffffff;
              *(undefined8 *)((long)pp_Var41 + -8) = 0x101b6a;
              cVar7 = set_process_security_ctx(pcVar46,pcVar18,uVar15,uVar23,param_8);
              if (cVar7 != '\0') {
                local_3b4 = uVar34 & 0x12;
                p_Var50 = local_378;
                goto joined_r0x00101818;
              }
            }
            else {
              uVar23 = (ulong)local_368 & 0xffffffff;
              *(undefined8 *)((long)pp_Var41 + -8) = 0x10129b;
              cVar7 = set_process_security_ctx(pcVar46,pcVar18,uVar15,uVar23,param_8);
              local_3b4 = 0;
              if (cVar7 != '\0') goto LAB_001012ad;
            }
          }
          else {
            uVar23 = (ulong)local_368 & 0xffffffff;
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1017c6;
            cVar7 = set_process_security_ctx(pcVar46,pcVar18,uVar15,uVar23,param_8);
            if (cVar7 != '\0') {
              local_3b4 = uVar34 & 0x3f;
              p_Var50 = local_378;
              if ((uVar15 & 0xf000) == 0x4000) {
joined_r0x00101818:
                for (; _Var6 = local_288.st_ino, _Var5 = local_288.st_dev, pcVar18 = local_320,
                    p_Var50 != (__dev_t *)0x0; p_Var50 = (__dev_t *)*p_Var50) {
                  if ((p_Var50[1] == local_288.st_ino) && (p_Var50[2] == local_288.st_dev)) {
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x101849;
                    uVar17 = quotearg_style(4,pcVar18);
                    pcVar18 = "cannot copy cyclic symbolic link %s";
                    goto LAB_00101858;
                  }
                }
                pp_Var44 = (__off_t **)((long)pp_Var41 + -0x20);
                puVar40 = (undefined1 *)((long)pp_Var41 + -0x20);
                *(undefined8 *)((long)pp_Var41 + -8) = *(undefined8 *)((long)pp_Var41 + -8);
                pcVar46 = local_328;
                iVar12 = local_32c;
                pcVar18 = local_340;
                local_3b0 = (undefined8 *)((ulong)((long)pp_Var41 + -0x11) & 0xfffffffffffffff0);
                *local_3b0 = local_378;
                local_3b0[1] = _Var6;
                local_3b0[2] = _Var5;
                if (((byte)local_348 == '\0') && ((local_1f8.st_mode & 0xf000) == 0x4000)) {
                  if ((param_8[5] != 0) || (*(char *)((long)param_8 + 0x33) != '\0')) {
                    *(undefined8 *)((long)pp_Var41 + -0x28) = 0x10332d;
                    cVar7 = set_file_security_ctx(pcVar46,0,param_8);
                    if ((cVar7 == '\0') &&
                       (puVar40 = (undefined1 *)((long)pp_Var41 + -0x20),
                       *(char *)((long)param_8 + 0x34) != '\0')) goto LAB_00102a20;
                  }
                  local_3b5 = '\0';
                  local_3b4 = 0;
LAB_00102130:
                  pcVar18 = local_320;
                  bVar33 = local_380 != (__dev_t *)0x0 & *(byte *)((long)param_8 + 0x1e);
                  p_Var50 = (__dev_t *)(CONCAT71((int7)((ulong)in_R10 >> 8),bVar33) & 0xffffffff);
                  if ((bVar33 == 0) || (*local_380 == local_288.st_dev)) {
                    local_308 = *param_8;
                    _Stack_300 = param_8[1];
                    local_2f8 = param_8[2];
                    _Stack_2f0 = param_8[3];
                    local_2e8 = param_8[4];
                    _Stack_2e0 = param_8[5];
                    local_2d8 = param_8[6];
                    _Stack_2d0 = param_8[7];
                    local_2c8 = param_8[8];
                    _Stack_2c0 = param_8[9];
                    local_2b8 = param_8[10];
                    _Stack_2b0 = param_8[0xb];
                    *(undefined8 *)((long)pp_Var41 + -0x28) = 0x1021b0;
                    pcVar18 = (char *)savedir(pcVar18,2);
                    pcVar46 = local_320;
                    if (pcVar18 == (char *)0x0) {
                      p_Var50 = (__dev_t *)0x0;
                      *(undefined8 *)((long)pp_Var41 + -0x28) = 0x105458;
                      uVar17 = quotearg_style(4,pcVar46);
                      *(undefined8 *)((long)pp_Var41 + -0x28) = 0x10546e;
                      uVar20 = dcgettext(0,"cannot access %s",5);
                      *(undefined8 *)((long)pp_Var41 + -0x28) = 0x105476;
                      piVar21 = __errno_location();
                      iVar12 = *piVar21;
                      *(undefined8 *)((long)pp_Var41 + -0x28) = 0x105487;
                      error(0,iVar12,uVar20,uVar17);
                    }
                    else {
                      if (*(int *)((long)param_8 + 4) == 3) {
                        local_308 = CONCAT44(2,(undefined4)local_308);
                      }
                      bVar33 = 0;
                      p_Var50 = (__dev_t *)0x1;
                      if (*pcVar18 != '\0') {
                        local_3a8 = &local_288;
                        bVar33 = 0;
                        local_378 = (__dev_t *)(local_350 + -(long)local_328);
                        local_338 = CONCAT31(local_338._1_3_,1);
                        local_398 = &local_310;
                        local_380 = (__dev_t *)local_312;
                        local_390 = local_312 + 1;
                        local_3a0 = &local_308;
                        local_3c8 = param_8;
                        local_3c0 = pcVar18;
                        do {
                          pcVar46 = local_320;
                          *(undefined8 *)((long)pp_Var41 + -0x28) = 0x102296;
                          pvVar22 = (void *)file_name_concat(pcVar46,pcVar18,0);
                          pcVar46 = local_328;
                          *(undefined8 *)((long)pp_Var41 + -0x28) = 0x1022aa;
                          __ptr = (void *)file_name_concat(pcVar46,pcVar18,0);
                          iVar12 = local_32c;
                          p_Var50 = local_378;
                          psVar26 = local_3a8;
                          uVar23 = (ulong)local_368 & 0xffffffff;
                          local_312[1] = *local_358;
                          *(void ***)((long)pp_Var41 + -0x28) = local_398;
                          *(__dev_t **)((long)pp_Var41 + -0x30) = local_380;
                          *(undefined1 **)((long)pp_Var41 + -0x38) = local_390;
                          *(undefined8 *)((long)pp_Var41 + -0x40) = 0;
                          *(undefined8 **)((long)pp_Var41 + -0x48) = local_3a0;
                          *(undefined8 **)((long)pp_Var41 + -0x50) = local_3b0;
                          *(undefined8 *)((long)pp_Var41 + -0x58) = 0x102308;
                          bVar9 = copy_internal(pvVar22,__ptr,iVar12,
                                                (undefined1 *)((long)__ptr + (long)p_Var50),uVar23,
                                                psVar26);
                          bVar11 = local_312[0];
                          local_338 = CONCAT31(local_338._1_3_,(byte)local_338 & bVar9);
                          *(byte *)local_360 = (byte)*local_360 | local_312[0];
                          *(undefined8 *)((long)pp_Var41 + -0x28) = 0x10232c;
                          free(__ptr);
                          *(undefined8 *)((long)pp_Var41 + -0x28) = 0x102334;
                          free(pvVar22);
                          if (bVar11 != 0) break;
                          bVar33 = bVar33 | local_312[1];
                          *(undefined8 *)((long)pp_Var41 + -0x28) = 0x102277;
                          sVar29 = strlen(pcVar18);
                          pcVar18 = pcVar18 + sVar29 + 1;
                        } while (*pcVar18 != '\0');
                        p_Var50 = (__dev_t *)(ulong)(byte)local_338;
                        pcVar18 = local_3c0;
                        param_8 = local_3c8;
                      }
                      *(undefined8 *)((long)pp_Var41 + -0x28) = 0x102358;
                      free(pcVar18);
                      *local_358 = bVar33;
                    }
                  }
                  local_358 = (byte *)((ulong)local_358 & 0xffffffffffffff00);
                  uVar49 = 0x4000;
                  cVar7 = '\0';
LAB_00101345:
                  pcVar18 = local_328;
                  if (((byte)local_348 == '\0') && (*(char *)((long)param_8 + 0x14) == '\0')) {
                    if (uVar49 == 0x4000) {
                      if (((char)local_334 != '\0') && (param_8[10] != 0)) goto LAB_00101c81;
                    }
                    else {
                      if ((param_8[5] != 0) || (*(char *)((long)param_8 + 0x33) != '\0')) {
                        *(undefined8 *)((long)pp_Var44 + -8) = 0x101388;
                        cVar8 = set_file_security_ctx(pcVar18,0,param_8);
                        if ((cVar8 == '\0') &&
                           (puVar40 = (undefined1 *)pp_Var44,
                           *(char *)((long)param_8 + 0x34) != '\0')) goto LAB_00102a20;
                      }
                      if ((char)local_334 != '\0') goto LAB_00101c79;
                      if (*(char *)((long)param_8 + 0x17) != '\0') goto LAB_00101a0c;
                    }
                  }
                  else {
                    if ((char)local_334 != '\0') {
LAB_00101c79:
                      if (param_8[10] != 0) {
LAB_00101c81:
                        iVar12 = local_32c;
                        pcVar18 = local_340;
                        *(undefined8 *)((long)pp_Var44 + -8) = 0x101ca2;
                        iVar12 = fstatat(iVar12,pcVar18,&local_d8,0x100);
                        pcVar18 = local_350;
                        if (iVar12 == 0) {
                          _Var31 = param_8[10];
                          *(undefined8 *)((long)pp_Var44 + -8) = 0x1032dc;
                          record_file(_Var31,pcVar18,&local_d8);
                        }
                      }
                    }
                    if ((*(char *)((long)param_8 + 0x17) != '\0') && (uVar49 != 0x4000))
                    goto LAB_00101a0c;
                  }
                  iVar12 = local_32c;
                  pcVar18 = local_340;
                  if (cVar7 != '\0') goto LAB_00101a0c;
                  if (*(char *)((long)param_8 + 0x21) != '\0') {
                    uVar34 = (uint)(byte)local_358;
                    local_d8.st_dev = local_288.st_atim.tv_sec;
                    local_d8.st_ino = local_288.st_atim.tv_nsec;
                    local_d8.st_nlink = local_288.st_mtim.tv_sec;
                    local_d8.st_mode = (undefined4)local_288.st_mtim.tv_nsec;
                    local_d8.st_uid = local_288.st_mtim.tv_nsec._4_4_;
                    *(undefined8 *)((long)pp_Var44 + -8) = 0x101d11;
                    iVar12 = utimensat(iVar12,pcVar18,(timespec *)&local_d8,uVar34 << 8);
                    pcVar18 = local_328;
                    if (iVar12 != 0) {
                      *(undefined8 *)((long)pp_Var44 + -8) = 0x105799;
                      uVar17 = quotearg_style(4,pcVar18);
                      *(undefined8 *)((long)pp_Var44 + -8) = 0x1057af;
                      uVar20 = dcgettext(0,"preserving times for %s",5);
                      *(undefined8 *)((long)pp_Var44 + -8) = 0x1057b7;
                      piVar21 = __errno_location();
                      iVar12 = *piVar21;
                      *(undefined8 *)((long)pp_Var44 + -8) = 0x1057c8;
                      error(0,iVar12,uVar20,uVar17);
                      if (*(char *)((long)param_8 + 0x32) != '\0') goto LAB_001025a2;
                    }
                  }
                  pcVar46 = local_328;
                  iVar12 = local_32c;
                  pcVar18 = local_340;
                  if ((byte)local_358 != '\0') goto LAB_00101a0c;
                  uVar34 = local_330;
                  if ((*(char *)((long)param_8 + 0x1f) != '\0') &&
                     ((((byte)local_348 != '\0' || (local_288.st_uid != local_1f8.st_uid)) ||
                      (local_288.st_gid != local_1f8.st_gid)))) {
                    *(ulong *)((long)pp_Var44 + -8) = (ulong)local_1f8.st_mode;
                    *(ulong *)((long)pp_Var44 + -0x10) = (ulong)local_348 & 0xff;
                    *(ulong *)((long)pp_Var44 + -0x18) = local_288._32_8_ & 0xffffffff;
                    *(ulong *)((long)pp_Var44 + -0x20) = (ulong)local_288._24_8_ >> 0x20;
                    uVar23 = local_288._24_8_ & 0xffffffff;
                    *(undefined8 *)((long)pp_Var44 + -0x28) = 0x101d93;
                    iVar12 = set_owner_isra_0(param_8,pcVar46,iVar12,pcVar18,0xffffffff,uVar23);
                    if (iVar12 == -1) goto LAB_001025a2;
                    uVar34 = local_330 & 0xfffff1ff;
                    if (iVar12 != 0) {
                      uVar34 = local_330;
                    }
                  }
                  local_330 = uVar34;
                  pcVar46 = local_320;
                  pcVar18 = local_328;
                  uVar34 = local_330;
                  if (((char)param_8[4] == '\0') && ((char)param_8[3] == '\0')) {
                    if (*(char *)((long)param_8 + 0x39) == '\0') {
                      if ((*(char *)((long)param_8 + 0x22) == '\0') || ((byte)local_348 == '\0')) {
                        if (local_3b4 == 0) {
LAB_00101dfd:
                          if (local_3b5 == '\0') goto LAB_00101a0c;
                        }
                        else {
                          uVar34 = mask_0;
                          if (mask_0 == 0xffffffff) {
                            *(undefined8 *)((long)pp_Var44 + -8) = 0x104b87;
                            uVar34 = umask(0);
                            *(undefined8 *)((long)pp_Var44 + -8) = 0x104b96;
                            mask_0 = uVar34;
                            umask(uVar34);
                          }
                          iVar12 = local_32c;
                          pcVar18 = local_340;
                          local_3b4 = local_3b4 & ~uVar34;
                          if (local_3b4 == 0) goto LAB_00101dfd;
                          if (local_3b5 != '\x01') {
                            if ((byte)local_348 != '\0') {
                              *(undefined8 *)((long)pp_Var44 + -8) = 0x104ca5;
                              iVar12 = fstatat(iVar12,pcVar18,&local_1f8,0x100);
                              pcVar18 = local_328;
                              if (iVar12 != 0) goto LAB_00104cb4;
                            }
                            local_3cc = local_1f8.st_mode;
                            if ((local_3b4 & ~local_1f8.st_mode) == 0) goto LAB_00101a0c;
                          }
                        }
                        iVar12 = local_32c;
                        pcVar18 = local_340;
                        uVar34 = local_3cc | local_3b4;
                        *(undefined8 *)((long)pp_Var44 + -8) = 0x101e2f;
                        iVar12 = fchmodat(iVar12,pcVar18,uVar34,0x100);
                        pcVar18 = local_328;
                        if (iVar12 == 0) goto LAB_00101a0c;
                        *(undefined8 *)((long)pp_Var44 + -8) = 0x101e48;
                        uVar17 = quotearg_style(4,pcVar18);
                        *(undefined8 *)((long)pp_Var44 + -8) = 0x101e5e;
                        uVar20 = dcgettext(0,"preserving permissions for %s",5);
                        *(undefined8 *)((long)pp_Var44 + -8) = 0x101e66;
                        piVar21 = __errno_location();
                        iVar12 = *piVar21;
                        *(undefined8 *)((long)pp_Var44 + -8) = 0x101e77;
                        error(0,iVar12,uVar20,uVar17);
                        goto LAB_00101e80;
                      }
                      uVar34 = 0x1b6;
                      if (((local_330 & 0x7000) == 0x4000) &&
                         (uVar34 = 0x1ff, (local_330 & 0xf000) == 0x4000)) {
                        uVar34 = local_1f8.st_mode & 0x400 | 0x1ff;
                      }
                      uVar15 = mask_0;
                      if (mask_0 == 0xffffffff) {
                        *(undefined8 *)((long)pp_Var44 + -8) = 0x104bb6;
                        uVar15 = umask(0);
                        *(undefined8 *)((long)pp_Var44 + -8) = 0x104bc5;
                        mask_0 = uVar15;
                        umask(uVar15);
                      }
                      uVar34 = ~uVar15 & uVar34;
                    }
                    else {
                      uVar34 = *(uint *)(param_8 + 2);
                    }
                    pcVar18 = local_328;
                    *(undefined8 *)((long)pp_Var44 + -8) = 0x103a08;
                    iVar12 = xset_acl(pcVar18,0xffffffff,uVar34);
                    if (iVar12 == 0) goto LAB_00101a0c;
                  }
                  else {
                    *(undefined8 *)((long)pp_Var44 + -8) = 0x101ebc;
                    iVar12 = xcopy_acl(pcVar46,0xffffffff,pcVar18,0xffffffff,uVar34);
                    if (iVar12 == 0) goto LAB_00101a0c;
LAB_00101e80:
                    if (*(char *)((long)param_8 + 0x32) == '\0') goto LAB_00101a0c;
                  }
                  goto LAB_001025a2;
                }
                uVar15 = ~local_3b4;
                *(undefined8 *)((long)pp_Var41 + -0x28) = 0x102050;
                iVar13 = mkdirat(iVar12,pcVar18,uVar15 & uVar34 & 0xfff);
                pcVar46 = local_328;
                iVar12 = local_32c;
                pcVar18 = local_340;
                if (iVar13 == 0) {
                  *(undefined8 *)((long)pp_Var41 + -0x28) = 0x102076;
                  iVar13 = fstatat(iVar12,pcVar18,&local_1f8,0x100);
                  _Var16 = local_1f8.st_mode;
                  pcVar46 = local_328;
                  iVar12 = local_32c;
                  pcVar18 = local_340;
                  if (iVar13 == 0) {
                    local_3b5 = '\0';
                    if ((~local_1f8.st_mode & 0x1c0) != 0) {
                      uVar34 = local_1f8.st_mode | 0x1c0;
                      *(undefined8 *)((long)pp_Var41 + -0x28) = 0x1020b5;
                      iVar12 = fchmodat(iVar12,pcVar18,uVar34,0x100);
                      pcVar18 = local_328;
                      if (iVar12 != 0) {
                        *(undefined8 *)((long)pp_Var41 + -0x28) = 0x10580f;
                        uVar17 = quotearg_style(4,pcVar18);
                        pcVar18 = "setting permissions for %s";
                        puVar40 = (undefined1 *)((long)pp_Var41 + -0x20);
                        goto LAB_00103483;
                      }
                      local_3cc = _Var16;
                      local_3b5 = '\x01';
                    }
                    pcVar18 = local_350;
                    if (*local_358 == 0) {
                      *(undefined8 *)((long)pp_Var41 + -0x28) = 0x1030ca;
                      remember_copied(pcVar18,local_1f8.st_ino,local_1f8.st_dev);
                      *local_358 = 1;
                    }
                    pcVar46 = local_320;
                    pcVar18 = local_328;
                    if ((char)param_8[8] != '\0') {
                      if ((char)param_8[3] == '\0') {
                        *(undefined8 *)((long)pp_Var41 + -0x28) = 0x1034cc;
                        emit_verbose("%s -> %s",pcVar46,pcVar18,0);
                      }
                      else {
                        *(undefined8 *)((long)pp_Var41 + -0x28) = 0x1020ff;
                        uVar17 = quotearg_style(4,pcVar18);
                        *(undefined8 *)((long)pp_Var41 + -0x28) = 0x102115;
                        uVar20 = dcgettext(0,"created directory %s\n",5);
                        *(undefined8 *)((long)pp_Var41 + -0x28) = 0x102127;
                        __printf_chk(2,uVar20,uVar17);
                      }
                    }
                    goto LAB_00102130;
                  }
                  *(undefined8 *)((long)pp_Var41 + -0x28) = 0x1056b7;
                  uVar17 = quotearg_style(4,pcVar46);
                  pcVar18 = "cannot stat %s";
                  puVar40 = (undefined1 *)((long)pp_Var41 + -0x20);
                }
                else {
                  *(undefined8 *)((long)pp_Var41 + -0x28) = 0x1057ea;
                  uVar17 = quotearg_style(4,pcVar46);
                  pcVar18 = "cannot create directory %s";
                }
LAB_00103483:
                *(undefined8 *)(puVar40 + -8) = 0x10348a;
                uVar20 = dcgettext(0,pcVar18,5);
                *(undefined8 *)(puVar40 + -8) = 0x103492;
                piVar21 = __errno_location();
                iVar12 = *piVar21;
                *(undefined8 *)(puVar40 + -8) = 0x1034a3;
                error(0,iVar12,uVar20,uVar17);
              }
              else {
LAB_001012ad:
                _Var31 = local_288.st_size;
                _Var5 = local_288.st_rdev;
                pcVar46 = local_320;
                iVar12 = local_32c;
                pcVar18 = local_350;
                uVar49 = uVar15 & 0xf000;
                local_358 = (byte *)CONCAT71(local_358._1_7_,*(char *)((long)param_8 + 0x3a));
                if (*(char *)((long)param_8 + 0x3a) != '\0') {
                  if (*local_320 != '/') {
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x1012d9;
                    pcVar18 = (char *)dir_name(pcVar18);
                    if (((local_32c != -100) || (*pcVar18 != '.')) || (pcVar18[1] != '\0')) {
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x101bf3;
                      iVar13 = stat(".",&local_168);
                      iVar12 = local_32c;
                      if (iVar13 == 0) {
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x101c12;
                        iVar12 = fstatat(iVar12,pcVar18,&local_d8,0);
                        if ((iVar12 == 0) &&
                           (local_168.st_dev != local_d8.st_dev ||
                            local_168.st_ino != local_d8.st_ino)) {
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x101c47;
                          free(pcVar18);
                          pcVar18 = local_328;
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x101c5a;
                          uVar17 = quotearg_n_style_colon(0,3,pcVar18);
                          pcVar18 = "%s: can make relative symbolic links only in current directory"
                          ;
LAB_00101858:
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x10185f;
                          uVar20 = dcgettext(0,pcVar18,5);
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x101870;
                          error(0,0,uVar20,uVar17);
                          goto LAB_00102a20;
                        }
                      }
                    }
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x101304;
                    free(pcVar18);
                  }
                  pcVar46 = local_320;
                  iVar12 = local_32c;
                  pcVar18 = local_350;
                  uVar1 = *(undefined1 *)((long)param_8 + 0x16);
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x101329;
                  iVar12 = force_symlinkat(pcVar46,iVar12,pcVar18,uVar1,0xffffffff);
                  pcVar18 = local_320;
                  if (iVar12 < 1) {
                    local_3b5 = '\0';
                    p_Var50 = (__dev_t *)((ulong)local_358 & 0xff);
                    cVar7 = '\0';
                    goto LAB_00101345;
                  }
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x105743;
                  uVar17 = quotearg_n_style(1,4,pcVar18);
                  pcVar18 = local_328;
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x105759;
                  uVar20 = quotearg_n_style(0,4,pcVar18);
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x10576f;
                  uVar24 = dcgettext(0,"cannot create symbolic link %s to %s",5);
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x105783;
                  error(0,iVar12,uVar24,uVar20,uVar17);
                  goto LAB_00102a20;
                }
                local_3b5 = *(char *)((long)param_8 + 0x17);
                if (local_3b5 == '\0') {
                  if (uVar49 != 0x8000) {
                    if (*(char *)((long)param_8 + 0x14) == '\0') {
                      cVar7 = '\0';
                      if (uVar49 == 0x1000) {
                        uVar34 = ~local_3b4 & local_330;
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x103ebc;
                        iVar13 = mknodat(iVar12,pcVar18,uVar34,0);
                        iVar12 = local_32c;
                        pcVar18 = local_350;
                        if (iVar13 != 0) {
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x104567;
                          iVar12 = mkfifoat(iVar12,pcVar18,uVar34 & 0xffffefff);
                          pcVar18 = local_328;
                          if (iVar12 != 0) {
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x104580;
                            uVar17 = quotearg_style(4,pcVar18);
                            pcVar18 = "cannot create fifo %s";
                            goto LAB_00103483;
                          }
                        }
                        local_358 = (byte *)((ulong)local_358 & 0xffffffffffffff00);
                        p_Var50 = (__dev_t *)0x1;
                        local_3b5 = '\0';
                      }
                      else {
                        bVar52 = (uVar49 >> 8 & 0xbf) == 0x20;
                        p_Var50 = (__dev_t *)
                                  (CONCAT71((int7)((ulong)in_R10 >> 8),bVar52 || uVar49 == 0xc000) &
                                  0xffffffff);
                        if (!bVar52 && uVar49 != 0xc000) {
                          if (uVar49 != 0xa000) {
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x10443a;
                            uVar17 = quotearg_style(4,pcVar46);
                            pcVar18 = "%s has unknown file type";
                            goto LAB_00101858;
                          }
                          goto LAB_00103957;
                        }
                        uVar34 = ~local_3b4 & local_330;
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x10345b;
                        iVar12 = mknodat(iVar12,pcVar18,uVar34,_Var5);
                        pcVar18 = local_328;
                        if (iVar12 != 0) {
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x103474;
                          uVar17 = quotearg_style(4,pcVar18);
                          pcVar18 = "cannot create special file %s";
                          goto LAB_00103483;
                        }
                      }
                      goto LAB_00101345;
                    }
                    if (uVar49 != 0xa000) goto LAB_001026b5;
LAB_00103957:
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x10396a;
                    pcVar27 = (char *)areadlink_with_size(pcVar46,_Var31);
                    pcVar46 = local_320;
                    iVar12 = local_32c;
                    pcVar18 = local_350;
                    if (pcVar27 == (char *)0x0) {
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x104ffc;
                      uVar17 = quotearg_style(4,pcVar46);
                      pcVar18 = "cannot read symbolic link %s";
                      goto LAB_00103483;
                    }
                    uVar1 = *(undefined1 *)((long)param_8 + 0x16);
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x103997;
                    iVar12 = force_symlinkat(pcVar27,iVar12,pcVar18,uVar1,0xffffffff);
                    if (iVar12 < 1) {
LAB_001042a5:
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x1042ad;
                      free(pcVar27);
                      iVar12 = local_32c;
                      pcVar18 = local_350;
                      local_3b5 = *(char *)((long)param_8 + 0x33);
                      if (local_3b5 != '\0') goto LAB_00103176;
                      if (*(char *)((long)param_8 + 0x1f) != '\0') {
                        __group = local_288.st_gid;
                        __owner = local_288.st_uid;
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x10437b;
                        iVar12 = fchownat(iVar12,pcVar18,__owner,__group,0x100);
                        if (iVar12 != 0) {
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x104388;
                          puVar19 = (uint *)__errno_location();
                          if (((0x16 < *puVar19) ||
                              ((0x402002UL >> ((ulong)*puVar19 & 0x3f) & 1) == 0)) ||
                             (*(char *)((long)param_8 + 0x1c) != '\0')) {
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x1043bc;
                            uVar17 = dcgettext(0,"failed to preserve ownership for %s",5);
                            pcVar18 = local_328;
                            uVar34 = *puVar19;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x1043d1;
                            error(0,uVar34,uVar17,pcVar18);
                            if (*(char *)((long)param_8 + 0x32) != '\0') goto LAB_00102a20;
                          }
                        }
                      }
                      local_358 = (byte *)CONCAT71(local_358._1_7_,1);
                      cVar7 = '\0';
                      uVar49 = 0xa000;
                      p_Var50 = (__dev_t *)0x1;
                      goto LAB_00101345;
                    }
                    if (((*(int *)((long)param_8 + 0x3c) == 1) && ((byte)local_348 == '\0')) &&
                       ((local_1f8.st_mode & 0xf000) == 0xa000)) {
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x104260;
                      sVar29 = strlen(pcVar27);
                      iVar13 = local_32c;
                      pcVar18 = local_350;
                      if (local_1f8.st_size == sVar29) {
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x10427e;
                        pcVar18 = (char *)areadlinkat_with_size(iVar13,pcVar18,local_1f8.st_size);
                        if (pcVar18 != (char *)0x0) {
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x104295;
                          iVar13 = strcmp(pcVar18,pcVar27);
                          if (iVar13 == 0) {
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x1042a5;
                            free(pcVar18);
                            goto LAB_001042a5;
                          }
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x105580;
                          free(pcVar18);
                        }
                      }
                    }
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x1039b5;
                    free(pcVar27);
                    pcVar18 = local_328;
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x1039c6;
                    uVar17 = quotearg_style(4,pcVar18);
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x1039dc;
                    uVar20 = dcgettext(0,"cannot create symbolic link %s",5);
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x1039ed;
                    error(0,iVar12,uVar20,uVar17);
                    goto LAB_00102a20;
                  }
LAB_001026b5:
                  local_310 = (void *)0x0;
                  local_3a0 = (undefined8 *)(CONCAT44(local_3a0._4_4_,uVar34) & 0xffffffff000001ff);
                  local_360 = (__dev_t *)
                              CONCAT71(local_360._1_7_,*(undefined1 *)((long)param_8 + 0x31));
                  copy_debug._0_4_ = 0;
                  iVar12 = *(int *)((long)param_8 + 4);
                  copy_debug._4_4_ = ZEXT14(*(int *)((long)param_8 + 0x4c) == 0);
                  copy_debug._8_4_ = 0;
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x10271c;
                  uVar34 = open_safer(pcVar46,(ulong)(iVar12 == 2) << 0x11);
                  pcVar18 = local_320;
                  local_338 = uVar34;
                  if ((int)uVar34 < 0) {
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x104f66;
                    uVar17 = quotearg_style(4,pcVar18);
                    pcVar18 = "cannot open %s for reading";
                    goto LAB_00103483;
                  }
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x10273c;
                  iVar13 = fstat(uVar34,&local_d8);
                  pcVar46 = local_320;
                  iVar12 = local_32c;
                  pcVar18 = local_350;
                  if (iVar13 == 0) {
                    if (local_288.st_dev != local_d8.st_dev || local_288.st_ino != local_d8.st_ino)
                    {
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x1056dc;
                      uVar17 = quotearg_style(4,pcVar46);
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x1056f2;
                      uVar20 = dcgettext(0,"skipping file %s, as it was replaced while being copied"
                                         ,5);
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x105703;
                      error(0,0,uVar20,uVar17);
                      goto LAB_00104092;
                    }
                    local_288.st_nlink = local_d8.st_nlink;
                    local_288.st_mode = local_d8.st_mode;
                    local_288.st_uid = local_d8.st_uid;
                    uVar17 = local_288._24_8_;
                    local_288.st_mode = (__mode_t)local_d8._24_8_;
                    local_288.st_dev = local_d8.st_dev;
                    local_288.st_ino = local_d8.st_ino;
                    local_288.st_size = local_d8.st_size;
                    local_288.st_blksize = local_d8.st_blksize;
                    local_288.st_gid = local_d8.st_gid;
                    local_288.__pad0 = local_d8.__pad0;
                    local_288.st_rdev = local_d8.st_rdev;
                    local_288.st_blocks = local_d8.st_blocks;
                    local_288.st_atim.tv_sec = local_d8.st_atim.tv_sec;
                    local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,local_288.st_mode);
                    local_288.st_atim.tv_nsec = local_d8.st_atim.tv_nsec;
                    local_288.st_mtim.tv_sec = local_d8.st_mtim.tv_sec;
                    local_288.st_mtim.tv_nsec = local_d8.st_mtim.tv_nsec;
                    local_288.st_ctim.tv_sec = local_d8.st_ctim.tv_sec;
                    local_288.st_ctim.tv_nsec = local_d8.st_ctim.tv_nsec;
                    local_288.__unused[0] = local_d8.__unused[0];
                    local_288.__unused[1] = local_d8.__unused[1];
                    local_288.__unused[2] = local_d8.__unused[2];
                    local_288._24_8_ = uVar17;
                    if ((byte)local_348 == '\0') {
                      bVar52 = (byte)local_360 == '\0';
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x102826;
                      iVar13 = openat_safer(iVar12,pcVar18,(-(uint)bVar52 & 0xfffffe00) + 0x201);
                      local_358 = (byte *)CONCAT44(local_358._4_4_,iVar13);
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x102834;
                      puVar19 = (uint *)__errno_location();
                      pcVar46 = local_328;
                      iVar12 = local_32c;
                      pcVar18 = local_350;
                      p_Var50 = (__dev_t *)(ulong)*puVar19;
                      if (iVar13 < 0) {
                        if (*puVar19 == 2) {
LAB_0010405d:
                          pcVar46 = local_320;
                          pcVar18 = local_328;
                          if (param_8[5] != 0) {
                            uVar23 = (ulong)local_3a0 & 0xffffffff;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x10408a;
                            cVar7 = set_process_security_ctx(pcVar46,pcVar18,uVar23,1,param_8);
                            if (cVar7 == '\0') goto LAB_00104092;
                          }
                          goto LAB_00103530;
                        }
                        bVar33 = *(byte *)((long)param_8 + 0x16);
                        __offset = p_Var50;
                        if (bVar33 != 0) {
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x104014;
                          iVar12 = unlinkat(iVar12,pcVar18,0);
                          pcVar18 = local_328;
                          if (iVar12 == 0) {
                            if ((char)param_8[8] != '\0') {
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x104035;
                              uVar17 = quotearg_style(4,pcVar18);
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x10404b;
                              uVar20 = dcgettext(0,"removed %s\n",5);
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x10405d;
                              __printf_chk(2,uVar20,uVar17);
                            }
                          }
                          else if (*puVar19 != 2) {
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x104c06;
                            uVar17 = quotearg_style(4,pcVar18);
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x104c1c;
                            uVar20 = dcgettext(0,"cannot remove %s",5);
                            uVar34 = *puVar19;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x104c2d;
                            error(0,uVar34,uVar20,uVar17);
                            goto LAB_00104092;
                          }
                          goto LAB_0010405d;
                        }
LAB_00103fee:
                        local_348 = (stat *)CONCAT71(local_348._1_7_,bVar33);
                        goto LAB_001035a3;
                      }
                      if ((param_8[5] != 0) || (*(char *)((long)param_8 + 0x33) != '\0')) {
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x102860;
                        uVar34 = set_file_security_ctx(pcVar46,0,param_8);
                        p_Var50 = (__dev_t *)(ulong)uVar34;
                        if (((char)uVar34 != '\0') || (*(char *)((long)param_8 + 0x34) == '\0'))
                        goto LAB_00102873;
                        local_348 = (stat *)((ulong)local_348 & 0xffffffffffffff00);
                        goto LAB_001029cb;
                      }
LAB_00102873:
                      local_3d0 = 0;
                      uVar34 = 0;
                      __offset = p_Var50;
LAB_0010287f:
                      if ((byte)local_360 == '\0') {
LAB_001037f0:
                        uVar45 = *(byte *)((long)param_8 + 0x1f) | uVar34;
                        local_3c0 = (char *)CONCAT44(local_3c0._4_4_,uVar45);
                        if (uVar45 != 0) {
                          local_360 = (__dev_t *)((ulong)local_360 & 0xffffffffffffff00);
LAB_0010289a:
                          iVar12 = (int)local_358;
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x1028ac;
                          iVar12 = fstat(iVar12,&local_168);
                          pcVar18 = local_328;
                          if (iVar12 != 0) {
                            p_Var50 = (__dev_t *)0x0;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x105547;
                            uVar17 = quotearg_style(4,pcVar18);
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x10555d;
                            uVar20 = dcgettext(0,"cannot fstat %s",5);
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x105565;
                            piVar21 = __errno_location();
                            iVar12 = *piVar21;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x105576;
                            error(0,iVar12,uVar20,uVar17);
                            goto LAB_001029cb;
                          }
                          uVar45 = local_168.st_mode | uVar34;
                          if (local_168.st_mode == uVar45) {
LAB_001028c6:
                            local_3c0 = (char *)CONCAT44(local_3c0._4_4_,uVar34);
                          }
                          else {
                            iVar12 = (int)local_358;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x10389a;
                            iVar12 = fchmod(iVar12,uVar45);
                            local_3c0 = (char *)((ulong)local_3c0 & 0xffffffff00000000);
                            if (iVar12 == 0) goto LAB_001028c6;
                          }
                          uVar34 = local_338;
                          if ((byte)local_360 == '\0') goto LAB_00103b82;
                          local_398 = (void **)local_168.st_blksize;
                          if (local_168.st_blksize - 1U >> 0x3d == 0) {
                            auVar3._8_8_ = 0;
                            auVar3._0_8_ = SUB168(SEXT816(0x3ffff),8);
                            local_378 = (__dev_t *)
                                        ((0x3ffff -
                                         SUB168((auVar3 << 0x40 | ZEXT816(0x3ffff)) %
                                                SEXT816(local_168.st_blksize),0)) +
                                        local_168.st_blksize);
                            if (((local_168.st_mode & 0xf000) == 0x8000) &&
                               (((ulong)local_378 & (ulong)((long)local_378 + -1)) != 0)) {
                              lVar36 = 0x3f;
                              if (local_378 != (__dev_t *)0x0) {
                                for (; (ulong)local_378 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                                }
                              }
                              local_378 = (__dev_t *)(1L << ((char)lVar36 + 1U & 0x3f));
                            }
                          }
                          else {
                            local_378 = (__dev_t *)0x40000;
                            local_398 = (void **)0x200;
                          }
                          if ((local_d8.st_mode & 0xf000) == 0x8000) {
                            p_Var50 = (__dev_t *)(local_d8.st_size + 0x1ff);
                            if (-1 < local_d8.st_size) {
                              p_Var50 = (__dev_t *)local_d8.st_size;
                            }
                            if ((long)p_Var50 >> 9 <= local_d8.st_blocks) goto LAB_00103a30;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x10295f;
                            __offset = (__dev_t *)lseek(uVar34,0,3);
                            if (-1 < (long)__offset) {
LAB_00104add:
                              iVar12 = 3;
                              goto LAB_00103a3c;
                            }
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x102970;
                            piVar21 = __errno_location();
                            pcVar18 = local_320;
                            iVar12 = *piVar21;
                            if (iVar12 == 6) goto LAB_00104add;
                            if ((iVar12 == 0x16) || (iVar12 == 0x5f)) {
                              __offset = (__dev_t *)0xffffffffffffffff;
                              iVar12 = 2;
                              goto LAB_00103a3c;
                            }
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x1029a1;
                            uVar17 = quotearg_style(4,pcVar18);
                            pcVar18 = "cannot lseek %s";
LAB_001029b0:
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x1029b7;
                            uVar20 = dcgettext(0,pcVar18,5);
                            iVar12 = *piVar21;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x1029c8;
                            error(0,iVar12,uVar20,uVar17);
                            goto LAB_001029c8;
                          }
LAB_00103a30:
                          __offset = (__dev_t *)0xffffffffffffffff;
                          iVar12 = 1;
LAB_00103a3c:
                          uVar34 = local_338;
                          if (((local_168.st_mode & 0xf000) == 0x8000) &&
                             ((*(int *)((long)param_8 + 0xc) == 3 ||
                              ((*(int *)((long)param_8 + 0xc) == 2 && (iVar12 != 1)))))) {
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x104318;
                            fdadvise(uVar34,0,0);
                            if (iVar12 == 3) {
                              local_390 = (undefined1 *)
                                          CONCAT44(local_390._4_4_,*(int *)((long)param_8 + 0xc));
                              bVar52 = *(int *)((long)param_8 + 0x4c) != 0;
                              goto LAB_001045ad;
                            }
                            bVar52 = *(int *)((long)param_8 + 0x4c) != 0;
                            iVar12 = *(int *)((long)param_8 + 0xc);
LAB_00103b24:
                            ppvVar47 = local_398;
                            local_312[0] = 0;
                            uVar23 = (ulong)local_358 & 0xffffffff;
                            *(undefined1 **)((long)pp_Var41 + -8) = local_312;
                            uVar34 = local_338;
                            *(undefined8 **)((long)pp_Var41 + -0x10) = &local_308;
                            p_Var50 = local_378;
                            *(undefined8 *)((long)pp_Var41 + -0x18) = 0xffffffffffffffff;
                            *(char **)((long)pp_Var41 + -0x20) = local_328;
                            *(char **)((long)pp_Var41 + -0x28) = local_320;
                            *(ulong *)((long)pp_Var41 + -0x30) = (ulong)bVar52;
                            *(undefined8 *)((long)pp_Var41 + -0x38) = 0x103b69;
                            cVar7 = sparse_copy(uVar34,uVar23,&local_310,p_Var50,ppvVar47,
                                                iVar12 == 3);
                            if (cVar7 == '\0') goto LAB_001029c8;
                            goto LAB_00103b75;
                          }
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x103a62;
                          fdadvise(uVar34,0,0,2);
                          p_Var50 = local_378;
                          if (local_d8.st_blksize - 1U >> 0x3d == 0) {
                            auVar2._8_8_ = 0;
                            auVar2._0_8_ = SUB168(SEXT816(0x3ffff),8);
                            uVar23 = local_d8.st_blksize +
                                     (0x3ffff -
                                     SUB168((auVar2 << 0x40 | ZEXT816(0x3ffff)) %
                                            SEXT816(local_d8.st_blksize),0));
                            if ((local_d8.st_mode & 0xf000) != 0x8000) goto LAB_00103aa5;
                            if ((uVar23 - 1 & uVar23) == 0) goto LAB_00104484;
                            lVar36 = 0x3f;
                            if (uVar23 != 0) {
                              for (; uVar23 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                              }
                            }
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x104c64;
                            p_Var50 = (__dev_t *)
                                      buffer_lcm(1L << ((char)lVar36 + 1U & 0x3f),p_Var50,
                                                 0x7fffffffffffffff);
LAB_0010449d:
                            p_Var30 = (__dev_t *)(local_d8.st_size + 1);
                            if (local_378 <= (ulong)local_d8.st_size) {
                              p_Var30 = local_378;
                            }
                          }
                          else {
                            uVar23 = 0x40000;
                            if ((local_d8.st_mode & 0xf000) == 0x8000) {
                              uVar23 = 0x40000;
LAB_00104484:
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x10449a;
                              p_Var50 = (__dev_t *)buffer_lcm(uVar23,p_Var50,0x7fffffffffffffff);
                              goto LAB_0010449d;
                            }
LAB_00103aa5:
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x103abe;
                            p_Var50 = (__dev_t *)buffer_lcm(uVar23,p_Var50,0x7fffffffffffffff);
                            p_Var30 = local_378;
                          }
                          local_378 = p_Var30;
                          local_378 = (__dev_t *)
                                      ((undefined1 *)((long)p_Var50 + -1) + (long)local_378 +
                                      -((ulong)((undefined1 *)((long)p_Var50 + -1) + (long)local_378
                                               ) % (ulong)p_Var50));
                          bVar52 = *(int *)((long)param_8 + 0x4c) != 0;
                          if ((long)local_378 < 1) {
                            local_378 = p_Var50;
                            if (iVar12 != 3) {
                              iVar12 = *(int *)((long)param_8 + 0xc);
LAB_00103b19:
                              local_398 = (void **)0x0;
                              goto LAB_00103b24;
                            }
                            local_390 = (undefined1 *)CONCAT44(local_390._4_4_,1);
                          }
                          else {
                            if (iVar12 != 3) {
                              iVar12 = *(int *)((long)param_8 + 0xc);
                              goto LAB_00103b19;
                            }
                            local_390 = (undefined1 *)CONCAT44(local_390._4_4_,1);
                          }
LAB_001045ad:
                          uVar34 = local_338;
                          local_312[0] = 0;
                          copy_debug._8_4_ = 3;
                          local_380 = (__dev_t *)local_d8.st_size;
                          if ((long)__offset < 0) {
                            bVar52 = 0 < local_d8.st_size;
                            local_368 = (__dev_t *)0x0;
LAB_001047cf:
                            p_Var50 = local_380;
                            iVar12 = (int)local_358;
                            if ((int)local_390 == 1) {
                              uVar23 = (ulong)local_358 & 0xffffffff;
                              lVar36 = (long)local_380 - (long)local_368;
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x104d80;
                              cVar7 = write_zeros(uVar23,lVar36);
                              if (cVar7 != '\0') goto LAB_00103b75;
                            }
                            else {
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x1047f5;
                              iVar13 = ftruncate(iVar12,(__off_t)p_Var50);
                              p_Var30 = local_368;
                              if (iVar13 == 0) {
                                __offset = p_Var50;
                                if (((int)local_390 == 3) && (bVar52)) {
                                  lVar36 = (long)p_Var50 - (long)local_368;
                                  *(undefined8 *)((long)pp_Var41 + -8) = 0x10482c;
                                  iVar12 = fallocate(iVar12,3,(__off_t)p_Var30,lVar36);
                                  if (iVar12 < 0) {
                                    *(undefined8 *)((long)pp_Var41 + -8) = 0x104839;
                                    piVar21 = __errno_location();
                                    pcVar18 = local_328;
                                    if ((*piVar21 != 0x5f) && (*piVar21 != 0x26)) {
                                      *(undefined8 *)((long)pp_Var41 + -8) = 0x104861;
                                      uVar17 = quotearg_style(4,pcVar18);
                                      pcVar18 = "error deallocating %s";
                                      goto LAB_001029b0;
                                    }
                                  }
                                }
LAB_00103b75:
                                _Var31 = local_308;
                                if (local_312[0] != 0) {
                                  iVar12 = (int)local_358;
                                  *(undefined8 *)((long)pp_Var41 + -8) = 0x1044fb;
                                  iVar12 = ftruncate(iVar12,_Var31);
                                  if (iVar12 < 0) goto LAB_00104503;
                                }
LAB_00103b82:
                                if (*(char *)((long)param_8 + 0x21) != '\0') goto LAB_00103dc7;
                                goto LAB_00103b8e;
                              }
                            }
LAB_00104503:
                            pcVar18 = local_328;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x104514;
                            uVar17 = quotearg_style(4,pcVar18);
                            pcVar18 = "failed to extend %s";
                          }
                          else {
                            local_3d8 = param_8;
                            lVar36 = 0;
                            local_3a8 = (stat *)CONCAT44(local_3a8._4_4_,(uint)bVar52);
                            local_368 = (__dev_t *)0x0;
                            local_380 = (__dev_t *)0x0;
                            local_3c8 = (__off_t *)
                                        (CONCAT44(local_3c8._4_4_,uVar15) & 0xffffffff0000f000);
                            p_Var50 = (__dev_t *)local_d8.st_size;
                            p_Var30 = __offset;
                            do {
                              __offset = p_Var30;
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x104620;
                              p_Var30 = (__dev_t *)lseek(uVar34,(__off_t)__offset,4);
                              if ((long)p_Var30 < 0) {
                                *(undefined8 *)((long)pp_Var41 + -8) = 0x104631;
                                piVar21 = __errno_location();
                                if (*piVar21 != 6) goto LAB_00105184;
                                p_Var30 = p_Var50;
                                if ((long)__offset < (long)p_Var50) goto LAB_00104646;
                                *(undefined8 *)((long)pp_Var41 + -8) = 0x104887;
                                p_Var30 = (__dev_t *)lseek(uVar34,0,2);
                                if ((long)p_Var30 < 0) goto LAB_00105184;
                                p_Var50 = p_Var30;
                                if ((long)__offset < (long)p_Var30) goto LAB_00104646;
                                bVar52 = (long)local_368 < (long)p_Var30;
                                local_360 = (__dev_t *)
                                            CONCAT71(local_360._1_7_,(byte)local_360 | bVar52);
                                __offset_00 = local_368;
                                uVar49 = (uint)local_3c8;
                                local_368 = p_Var30;
LAB_00104ac3:
                                local_380 = local_368;
                                param_8 = local_3d8;
                                local_368 = __offset_00;
                                goto LAB_001047c2;
                              }
                              if ((long)p_Var50 < (long)p_Var30) {
                                p_Var50 = p_Var30;
                              }
LAB_00104646:
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x104653;
                              _Var31 = lseek(uVar34,(__off_t)__offset,0);
                              pcVar18 = local_328;
                              if (_Var31 < 0) {
LAB_00105184:
                                param_8 = local_3d8;
                                uVar49 = (uint)local_3c8;
                                goto LAB_00105192;
                              }
                              puVar32 = (undefined1 *)((long)__offset + (-lVar36 - (long)local_380))
                              ;
                              if (puVar32 != (undefined1 *)0x0) {
                                if ((int)local_390 != 1) {
                                  bVar52 = (int)local_390 == 3;
                                  uVar23 = (ulong)local_358 & 0xffffffff;
                                  *(undefined8 *)((long)pp_Var41 + -8) = 0x10469b;
                                  cVar7 = create_hole(uVar23,pcVar18,bVar52);
                                  local_360 = (__dev_t *)CONCAT71(local_360._1_7_,cVar7);
                                  if (cVar7 != '\0') goto LAB_001046a9;
LAB_001049c5:
                                  param_8 = local_3d8;
                                  uVar49 = (uint)local_3c8;
                                  goto LAB_001029c8;
                                }
                                uVar23 = (ulong)local_358 & 0xffffffff;
                                *(undefined8 *)((long)pp_Var41 + -8) = 0x1048b2;
                                cVar7 = write_zeros(uVar23,puVar32);
                                pcVar18 = local_328;
                                param_8 = local_3d8;
                                if (cVar7 != '\0') {
                                  local_360 = (__dev_t *)((ulong)local_360 & 0xffffffffffffff00);
                                  ppvVar47 = (void **)0x0;
                                  lVar36 = (long)p_Var30 - (long)__offset;
                                  goto LAB_001046c1;
                                }
                                uVar49 = (uint)local_3c8;
                                *(undefined8 *)((long)pp_Var41 + -8) = 0x10503d;
                                uVar17 = quotearg_n_style_colon(0,3,pcVar18);
                                pcVar18 = "%s: write failed";
                                goto LAB_00104523;
                              }
                              local_360 = (__dev_t *)((ulong)local_360 & 0xffffffffffffff00);
LAB_001046a9:
                              lVar36 = (long)p_Var30 - (long)__offset;
                              ppvVar47 = (void **)0x0;
                              if ((int)local_390 == 3) {
                                ppvVar47 = local_398;
                              }
LAB_001046c1:
                              p_Var30 = local_378;
                              uVar35 = (ulong)local_358 & 0xffffffff;
                              *(undefined1 **)((long)pp_Var41 + -8) = local_312 + 1;
                              *(undefined8 **)((long)pp_Var41 + -0x10) = &local_308;
                              uVar23 = (ulong)local_3a8 & 0xffffffff;
                              *(long *)((long)pp_Var41 + -0x18) = lVar36;
                              *(char **)((long)pp_Var41 + -0x20) = local_328;
                              *(char **)((long)pp_Var41 + -0x28) = local_320;
                              *(ulong *)((long)pp_Var41 + -0x30) = uVar23;
                              *(undefined8 *)((long)pp_Var41 + -0x38) = 0x104707;
                              cVar7 = sparse_copy(uVar34,uVar35,&local_310,p_Var30,ppvVar47,1);
                              if (cVar7 == '\0') goto LAB_001049c5;
                              __offset_00 = (__dev_t *)(local_308 + (long)__offset);
                              if (local_308 != 0) {
                                local_360 = (__dev_t *)CONCAT71(local_360._1_7_,local_312[1]);
                              }
                              if (local_308 < lVar36) {
                                bVar52 = false;
                                uVar49 = (uint)local_3c8;
                                local_368 = __offset_00;
                                goto LAB_00104ac3;
                              }
                              local_368 = __offset_00;
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x104758;
                              p_Var30 = (__dev_t *)lseek(uVar34,(__off_t)__offset_00,3);
                              param_8 = local_3d8;
                              local_380 = __offset;
                            } while (-1 < (long)p_Var30);
                            local_380 = p_Var50;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x1047a6;
                            piVar21 = __errno_location();
                            uVar49 = (uint)local_3c8;
                            if (*piVar21 == 6) {
                              bVar52 = (long)__offset_00 < (long)p_Var50;
                              local_360 = (__dev_t *)
                                          CONCAT71(local_360._1_7_,(byte)local_360 | bVar52);
LAB_001047c2:
                              if ((byte)local_360 == '\0') goto LAB_00103b75;
                              goto LAB_001047cf;
                            }
LAB_00105192:
                            pcVar18 = local_320;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x1051a3;
                            uVar17 = quotearg_style(4,pcVar18);
                            pcVar18 = "cannot lseek %s";
                          }
LAB_00104523:
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x10452a;
                          uVar20 = dcgettext(0,pcVar18,5);
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x104532;
                          piVar21 = __errno_location();
                          iVar12 = *piVar21;
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x104543;
                          error(0,iVar12,uVar20,uVar17);
                          goto LAB_001029c8;
                        }
                        local_168._24_8_ = local_168._24_8_ & 0xffffffff00000000;
                        if (*(char *)((long)param_8 + 0x21) != '\0') {
LAB_00103dc7:
                          iVar12 = local_32c;
                          pcVar18 = local_350;
                          uVar23 = (ulong)local_358 & 0xffffffff;
                          local_2a8 = local_288.st_atim.tv_sec;
                          _Stack_2a0 = local_288.st_atim.tv_nsec;
                          local_298 = local_288.st_mtim.tv_sec;
                          uStack_290 = local_288.st_mtim.tv_nsec;
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x103e07;
                          iVar12 = fdutimensat(uVar23,iVar12,pcVar18,&local_2a8,0);
                          pcVar18 = local_328;
                          if (iVar12 != 0) {
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x103e20;
                            uVar17 = quotearg_style(4,pcVar18);
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x103e36;
                            uVar20 = dcgettext(0,"preserving times for %s",5);
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x103e3e;
                            piVar21 = __errno_location();
                            iVar12 = *piVar21;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x103e4f;
                            error(0,iVar12,uVar20,uVar17);
                            if (*(char *)((long)param_8 + 0x32) != '\0') goto LAB_001029c8;
                          }
LAB_00103b8e:
                          pcVar46 = local_328;
                          pcVar18 = local_350;
                          if (*(char *)((long)param_8 + 0x1f) != '\0') {
                            uVar23 = (ulong)local_288.st_uid;
                            if (local_288.st_uid == local_168.st_uid) {
                              if (local_288.st_gid == local_168.st_gid) goto LAB_0010381a;
                            }
                            uVar35 = (ulong)local_358 & 0xffffffff;
                            *(ulong *)((long)pp_Var41 + -8) = local_168._24_8_ & 0xffffffff;
                            *(ulong *)((long)pp_Var41 + -0x10) = (ulong)local_348 & 0xff;
                            *(ulong *)((long)pp_Var41 + -0x18) = local_288._32_8_ & 0xffffffff;
                            iVar12 = local_32c;
                            *(ulong *)((long)pp_Var41 + -0x20) = uVar23;
                            uVar23 = local_288._24_8_ & 0xffffffff;
                            *(undefined8 *)((long)pp_Var41 + -0x28) = 0x103bfb;
                            iVar12 = set_owner_isra_0(param_8,pcVar46,iVar12,pcVar18,uVar35,uVar23);
                            if (iVar12 == -1) goto LAB_001029c8;
                            uVar34 = (uint)local_3b0 & 0xfffff1ff;
                            if (iVar12 != 0) {
                              uVar34 = (uint)local_3b0;
                            }
                            local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,uVar34);
                          }
                        }
LAB_0010381a:
                        pcVar46 = local_320;
                        pcVar18 = local_328;
                        uVar34 = local_338;
                        if (((char)param_8[4] == '\0') && ((char)param_8[3] == '\0')) {
                          uVar51 = (undefined7)((ulong)__offset >> 8);
                          if (*(char *)((long)param_8 + 0x39) == '\0') {
                            bVar33 = (byte)local_348 & *(byte *)((long)param_8 + 0x22);
                            if (bVar33 == 0) {
                              if ((int)local_3c0 != 0 || local_3d0 != 0) {
                                if (mask_0 == 0xffffffff) {
                                  *(undefined8 *)((long)pp_Var41 + -8) = 0x104ea5;
                                  _Var16 = umask(0);
                                  *(undefined8 *)((long)pp_Var41 + -8) = 0x104eb4;
                                  mask_0 = _Var16;
                                  umask(_Var16);
                                  if ((~_Var16 & local_3d0) != 0 || (int)local_3c0 != 0) {
                                    if (_Var16 == 0xffffffff) {
                                      *(undefined8 *)((long)pp_Var41 + -8) = 0x104ed8;
                                      mask_0 = umask(0);
                                      *(undefined8 *)((long)pp_Var41 + -8) = 0x104ee5;
                                      umask(mask_0);
                                    }
                                    goto LAB_00104b14;
                                  }
                                }
                                else if ((~mask_0 & local_3d0) != 0 || (int)local_3c0 != 0) {
LAB_00104b14:
                                  iVar12 = (int)local_358;
                                  p_Var50 = (__dev_t *)0x1;
                                  uVar34 = (uint)local_3a0 & ~mask_0;
                                  *(undefined8 *)((long)pp_Var41 + -8) = 0x104b2f;
                                  iVar12 = fchmod(iVar12,uVar34);
                                  pcVar18 = local_328;
                                  if (iVar12 != 0) {
                                    *(undefined8 *)((long)pp_Var41 + -8) = 0x104b48;
                                    uVar17 = quotearg_style(4,pcVar18);
                                    *(undefined8 *)((long)pp_Var41 + -8) = 0x104b5e;
                                    uVar20 = dcgettext(0,"preserving permissions for %s",5);
                                    *(undefined8 *)((long)pp_Var41 + -8) = 0x104b66;
                                    piVar21 = __errno_location();
                                    iVar12 = *piVar21;
                                    *(undefined8 *)((long)pp_Var41 + -8) = 0x104b77;
                                    error(0,iVar12,uVar20,uVar17);
                                    goto LAB_00103948;
                                  }
                                  goto LAB_001029cb;
                                }
                              }
                              p_Var50 = (__dev_t *)0x1;
                            }
                            else {
                              if (mask_0 == 0xffffffff) {
                                *(undefined8 *)((long)pp_Var41 + -8) = 0x104e0f;
                                mask_0 = umask(0);
                                *(undefined8 *)((long)pp_Var41 + -8) = 0x104e1c;
                                umask(mask_0);
                              }
                              pcVar18 = local_328;
                              uVar23 = (ulong)local_358 & 0xffffffff;
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x104d2e;
                              iVar12 = xset_acl(pcVar18,uVar23,~mask_0 & 0x1b6);
                              local_348 = (stat *)CONCAT71(local_348._1_7_,bVar33);
                              p_Var50 = (__dev_t *)CONCAT71(uVar51,iVar12 == 0);
                            }
                          }
                          else {
                            _Var31 = param_8[2];
                            uVar23 = (ulong)local_358 & 0xffffffff;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x1048e6;
                            iVar12 = xset_acl(pcVar18,uVar23,(int)_Var31);
                            p_Var50 = (__dev_t *)CONCAT71(uVar51,iVar12 == 0);
                          }
                        }
                        else {
                          uVar35 = (ulong)local_3b0 & 0xffffffff;
                          uVar23 = (ulong)local_358 & 0xffffffff;
                          p_Var50 = (__dev_t *)0x1;
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x103940;
                          iVar12 = xcopy_acl(pcVar46,uVar34,pcVar18,uVar23,uVar35);
                          if (iVar12 != 0) {
LAB_00103948:
                            p_Var50 = (__dev_t *)(ulong)(*(byte *)((long)param_8 + 0x32) ^ 1);
                          }
                        }
                      }
                      else {
                        if (*(int *)((long)param_8 + 0x4c) == 0) goto LAB_0010289a;
                        uVar23 = (ulong)local_338;
                        iVar12 = (int)local_358;
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x1037de;
                        iVar12 = ioctl(iVar12,0x40049409,uVar23);
                        if (iVar12 == 0) {
                          copy_debug._4_4_ = 2;
                          goto LAB_001037f0;
                        }
                        local_368 = (__dev_t *)
                                    CONCAT44(local_368._4_4_,*(int *)((long)param_8 + 0x4c));
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x1049e8;
                        __offset = (__dev_t *)__errno_location();
                        pcVar18 = local_320;
                        uVar45 = (uint)*__offset;
                        if ((int)uVar45 < 0x1d) {
                          if ((4 < (int)uVar45) &&
                             ((0x10001020UL >> ((ulong)uVar45 & 0x3f) & 1) != 0)) goto LAB_00104a0e;
LAB_00104d48:
                          if ((int)local_368 != 2) {
                            copy_debug._4_4_ = 6;
                            goto LAB_0010289a;
                          }
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x1052b6;
                          uVar17 = quotearg_n_style(1,4,pcVar18);
                          pcVar18 = local_328;
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x1052cc;
                          uVar20 = quotearg_n_style(0,4,pcVar18);
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x1052e2;
                          uVar24 = dcgettext(0,"failed to clone %s from %s",5);
                          _Var5 = *__offset;
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x1052f7;
                          error(0,(int)_Var5,uVar24,uVar20,uVar17);
                          iVar12 = local_32c;
                          pcVar18 = local_350;
                          if ((byte)local_348 != '\0') {
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x105314;
                            iVar12 = unlinkat(iVar12,pcVar18,0);
                            pcVar18 = local_328;
                            if (iVar12 != 0) {
                              if ((int)*__offset == 2) {
                                copy_debug._4_4_ = 6;
                                p_Var50 = (__dev_t *)0x0;
                                goto LAB_001029cb;
                              }
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x10539c;
                              uVar17 = quotearg_style(4,pcVar18);
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x1053b2;
                              uVar20 = dcgettext(0,"cannot remove %s",5);
                              _Var5 = *__offset;
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x1053c4;
                              error(0,(int)_Var5,uVar20,uVar17);
                            }
                            copy_debug._4_4_ = 6;
                            goto LAB_00104a9a;
                          }
                          copy_debug._4_4_ = 6;
                        }
                        else {
                          if (uVar45 != 0x7a) goto LAB_00104d48;
LAB_00104a0e:
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x104a24;
                          uVar17 = quotearg_n_style(1,4,pcVar18);
                          pcVar18 = local_328;
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x104a3a;
                          uVar20 = quotearg_n_style(0,4,pcVar18);
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x104a50;
                          uVar24 = dcgettext(0,"failed to clone %s from %s",5);
                          _Var5 = *__offset;
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x104a65;
                          error(0,(int)_Var5,uVar24,uVar20,uVar17);
                          if (((int)local_368 == 2) && ((byte)local_348 != '\0')) {
                            iVar12 = (int)local_358;
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x104a91;
                            _Var31 = lseek(iVar12,0,2);
                            iVar12 = local_32c;
                            pcVar18 = local_350;
                            if (_Var31 == 0) {
                              *(undefined8 *)((long)pp_Var41 + -8) = 0x104e4e;
                              iVar12 = unlinkat(iVar12,pcVar18,0);
                              pcVar18 = local_328;
                              if ((iVar12 != 0) && ((int)*__offset != 2)) {
                                *(undefined8 *)((long)pp_Var41 + -8) = 0x104e71;
                                uVar17 = quotearg_style(4,pcVar18);
                                *(undefined8 *)((long)pp_Var41 + -8) = 0x104e87;
                                uVar20 = dcgettext(0,"cannot remove %s",5);
                                _Var5 = *__offset;
                                *(undefined8 *)((long)pp_Var41 + -8) = 0x104e99;
                                error(0,(int)_Var5,uVar20,uVar17);
                              }
                            }
LAB_00104a9a:
                            local_348 = (stat *)CONCAT71(local_348._1_7_,(byte)local_360);
                          }
                        }
LAB_001029c8:
                        p_Var50 = (__dev_t *)0x0;
                      }
LAB_001029cb:
                      iVar12 = (int)local_358;
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x1029d6;
                      iVar12 = close(iVar12);
                      pcVar18 = local_328;
                      if (iVar12 < 0) {
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x105221;
                        uVar17 = quotearg_style(4,pcVar18);
                        pcVar18 = "failed to close %s";
                        goto LAB_00105230;
                      }
                    }
                    else {
LAB_00103530:
                      iVar12 = local_32c;
                      pcVar18 = local_350;
                      uVar34 = (uint)local_3a0 & ~local_3b4;
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x10355b;
                      uVar14 = openat_safer(iVar12,pcVar18,0xc1,uVar34);
                      local_358 = (byte *)CONCAT44(local_358._4_4_,uVar14);
                      *(undefined8 *)((long)pp_Var41 + -8) = 0x103569;
                      psVar26 = (stat *)__errno_location();
                      iVar12 = local_32c;
                      pcVar18 = local_350;
                      uVar45 = (uint)psVar26->st_dev;
                      bVar11 = (byte)((uint)uVar14 >> 0x1f);
                      bVar33 = uVar45 == 0x11 & bVar11;
                      if (bVar33 == 0) {
LAB_001041b8:
                        pcVar18 = local_328;
                        __offset = (__dev_t *)(ulong)uVar45;
                        bVar11 = uVar45 == 0x15 & bVar11;
                        local_348 = (stat *)CONCAT71(local_348._1_7_,bVar11);
                        if (bVar11 == 0) {
                          if (-1 < (int)local_358) {
                            local_348 = (stat *)CONCAT71(local_348._1_7_,1);
                            uVar34 = uVar34 & ~(uint)local_3a0;
                            local_3d0 = local_3b4;
                            goto LAB_0010287f;
                          }
                          local_348 = (stat *)CONCAT71(local_348._1_7_,1);
                        }
                        else {
                          __offset = (__dev_t *)0x15;
                          if (*local_328 != '\0') {
                            *(undefined8 *)((long)pp_Var41 + -8) = 0x1041ea;
                            sVar29 = strlen(pcVar18);
                            __offset = (__dev_t *)(ulong)((pcVar18[sVar29 - 1] != '/') + 0x14);
                          }
                        }
LAB_001035a3:
                        pcVar18 = local_328;
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x1035b4;
                        uVar17 = quotearg_style(4,pcVar18);
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x1035ca;
                        uVar20 = dcgettext(0,"cannot create regular file %s",5);
                        p_Var50 = (__dev_t *)0x0;
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x1035df;
                        error(0,__offset,uVar20,uVar17);
                      }
                      else {
                        __offset = (__dev_t *)0x11;
                        local_348 = (stat *)CONCAT71(local_348._1_7_,(char)param_8[3]);
                        if ((char)param_8[3] != '\0') goto LAB_001035a3;
                        local_348 = psVar26;
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x104170;
                        sVar28 = readlinkat(iVar12,pcVar18,&local_41,1);
                        pcVar46 = local_328;
                        iVar12 = local_32c;
                        pcVar18 = local_350;
                        if (sVar28 < 0) goto LAB_00103fee;
                        p_Var50 = (__dev_t *)(ulong)*(byte *)((long)param_8 + 0x44);
                        if (*(byte *)((long)param_8 + 0x44) != 0) {
                          *(undefined8 *)((long)pp_Var41 + -8) = 0x1041a3;
                          uVar14 = openat_safer(iVar12,pcVar18,0x41,uVar34);
                          local_358 = (byte *)CONCAT44(local_358._4_4_,uVar14);
                          uVar45 = (uint)local_348->st_dev;
                          bVar11 = (byte)((uint)uVar14 >> 0x1f);
                          goto LAB_001041b8;
                        }
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x105596;
                        uVar17 = quotearg_style(4,pcVar46);
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x1055ac;
                        uVar20 = dcgettext(0,"not writing through dangling symlink %s",5);
                        *(undefined8 *)((long)pp_Var41 + -8) = 0x1055bd;
                        error(0,0,uVar20,uVar17);
                        local_348 = (stat *)CONCAT71(local_348._1_7_,bVar33);
                      }
                    }
                  }
                  else {
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x105719;
                    uVar17 = quotearg_style(4,pcVar46);
                    pcVar18 = "cannot fstat %s";
LAB_00105230:
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x105237;
                    uVar20 = dcgettext(0,pcVar18,5);
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x10523f;
                    piVar21 = __errno_location();
                    iVar12 = *piVar21;
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x105250;
                    error(0,iVar12,uVar20,uVar17);
LAB_00104092:
                    p_Var50 = (__dev_t *)0x0;
                  }
                  uVar34 = local_338;
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x1029e9;
                  iVar12 = close(uVar34);
                  pvVar22 = local_310;
                  pcVar18 = local_320;
                  if (iVar12 < 0) {
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x1051c8;
                    uVar17 = quotearg_style(4,pcVar18);
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x1051de;
                    uVar20 = dcgettext(0,"failed to close %s",5);
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x1051e6;
                    piVar21 = __errno_location();
                    iVar12 = *piVar21;
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x1051f7;
                    error(0,iVar12,uVar20,uVar17);
                    pvVar22 = local_310;
                    if ((((*(char *)((long)param_8 + 0x42) != '\0') &&
                         (*(char *)((long)param_8 + 0x17) == '\0')) &&
                        (*(char *)((long)param_8 + 0x3a) == '\0')) &&
                       (*(char *)((long)param_8 + 0x31) != '\0')) goto LAB_00103c57;
                    *(undefined8 *)((long)pp_Var41 + -8) = 0x10520b;
                    free(pvVar22);
                    goto LAB_00102a20;
                  }
                  if (((*(char *)((long)param_8 + 0x42) != '\0') &&
                      (*(char *)((long)param_8 + 0x17) == '\0')) &&
                     ((*(char *)((long)param_8 + 0x3a) == '\0' &&
                      (*(char *)((long)param_8 + 0x31) != '\0')))) {
LAB_00103c57:
                    /* WARNING: Could not recover jumptable at 0x00103c6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar23 = (*(code *)((long)&DAT_001069b0 +
                                       (long)(int)(&DAT_001069b0)[(uint)copy_debug._8_4_]))();
                    return uVar23;
                  }
                  cVar7 = (char)p_Var50;
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x102a0c;
                  free(pvVar22);
                  local_358 = (byte *)((ulong)local_358 & 0xffffffffffffff00);
                  cVar8 = cVar7;
                }
                else {
                  uVar23 = 1;
                  if (*(char *)((long)param_8 + 0x16) == '\0') {
                    uVar23 = (ulong)((int)param_8[1] == 3);
                  }
                  cVar7 = '\0';
                  *(ulong *)((long)pp_Var41 + -0x10) = (ulong)local_338;
                  pcVar27 = local_328;
                  *(undefined8 *)((long)pp_Var41 + -0x18) = 0;
                  *(ulong *)((long)pp_Var41 + -0x20) = uVar23;
                  *(undefined8 *)((long)pp_Var41 + -0x28) = 0x1023df;
                  uVar34 = create_hard_link(pcVar46,0xffffff9c,pcVar46,pcVar27,iVar12,pcVar18);
                  local_3b5 = '\0';
                  p_Var50 = (__dev_t *)(ulong)uVar34;
                  cVar8 = (char)uVar34;
                }
                if (cVar8 != '\0') goto LAB_00101345;
              }
LAB_00102a20:
              _Var6 = local_288.st_ino;
              _Var5 = local_288.st_dev;
              pp_Var41 = (__off_t **)puVar40;
              if (*(char *)((long)param_8 + 0x33) != '\0') goto LAB_00103176;
              if (local_388 == (stat *)0x0) {
                *(undefined8 *)(puVar40 + -8) = 0x102a49;
                forget_created(_Var6,_Var5);
              }
LAB_00102a50:
              iVar12 = local_32c;
              pcVar18 = local_340;
              pp_Var44 = pp_Var41;
              if (local_370 != (stat *)0x0) {
                pcVar46 = (char *)(((long)local_350 - (long)local_328) + (long)local_370);
                *(undefined8 *)((long)pp_Var41 + -8) = 0x102a88;
                iVar12 = renameat(iVar12,pcVar46,iVar12,pcVar18);
                pcVar18 = local_328;
                if (iVar12 != 0) {
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x105658;
                  uVar17 = quotearg_style(4,pcVar18);
                  pcVar18 = "cannot un-backup %s";
                  goto LAB_00104ccd;
                }
                if ((char)param_8[8] != '\0') {
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x102ab2;
                  uVar17 = quotearg_n_style(1,4,pcVar18);
                  psVar26 = local_370;
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x102ac8;
                  uVar20 = quotearg_n_style(0,4,psVar26);
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x102ade;
                  uVar24 = dcgettext(0,"%s -> %s (unbackup)\n",5);
                  *(undefined8 *)((long)pp_Var41 + -8) = 0x102af3;
                  __printf_chk(2,uVar24,uVar20,uVar17);
                }
              }
            }
          }
          goto LAB_001025a2;
        }
LAB_00101630:
        pp_Var41 = pp_Var38;
        if (*(char *)((long)param_8 + 0x1a) != '\0') {
          if ((char)param_8[3] == '\0') goto LAB_0010121b;
LAB_00101648:
          if ((int)uVar23 != 0x11) goto LAB_00101651;
          local_388 = (stat *)0x0;
          uVar34 = 1;
LAB_00101980:
          pcVar46 = local_320;
          iVar12 = local_32c;
          pcVar18 = local_340;
          *(undefined8 *)((long)pp_Var41 + -8) = 0x1019a1;
          iVar12 = renameatu(0xffffff9c,pcVar46,iVar12,pcVar18,uVar34 * 2);
          pp_Var38 = pp_Var41;
          if (iVar12 != 0) {
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1019aa;
            puVar19 = (uint *)__errno_location();
            uVar23 = (ulong)*puVar19;
            if (*puVar19 != 0) goto LAB_0010165c;
          }
LAB_001019b8:
          pp_Var41 = pp_Var38;
          if ((char)param_8[8] != '\0') goto LAB_00101128;
          goto LAB_001019c6;
        }
LAB_001016fc:
        _Var6 = local_288.st_ino;
        _Var5 = local_288.st_dev;
        pcVar18 = local_350;
        if (((char)param_8[7] != '\0') && ((local_330 & 0xf000) == 0x4000)) {
          if ((char)local_334 == '\0') {
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1034e0;
            local_388 = (stat *)src_to_dest_lookup(_Var6,_Var5);
          }
          else {
            *(undefined8 *)((long)pp_Var41 + -8) = 0x101a78;
            local_388 = (stat *)remember_copied(pcVar18,_Var6);
          }
          if (local_388 == (stat *)0x0) {
LAB_00104dd0:
            cVar7 = (char)param_8[3];
LAB_00101956:
            if (cVar7 == '\0') goto LAB_0010121b;
            goto LAB_0010195e;
          }
LAB_00101a8d:
          pcVar18 = local_320;
          iVar12 = local_32c;
          psVar26 = local_388;
          *(undefined8 *)((long)pp_Var41 + -8) = 0x101aab;
          cVar7 = same_nameat(0xffffff9c,pcVar18,iVar12,psVar26);
          iVar12 = local_32c;
          pcVar18 = local_350;
          psVar26 = local_388;
          if (cVar7 == '\0') {
            *(undefined8 *)((long)pp_Var41 + -8) = 0x101ace;
            cVar7 = same_nameat(iVar12,pcVar18,iVar12,psVar26);
            pcVar46 = local_328;
            pcVar18 = local_350;
            psVar26 = local_388;
            if (cVar7 == '\0') {
              if ((*(int *)((long)param_8 + 4) != 4) &&
                 ((*(int *)((long)param_8 + 4) != 3 || ((char)local_334 == '\0')))) {
                *(undefined8 *)((long)pp_Var41 + -8) = 0x10506e;
                pvVar22 = (void *)subst_suffix(pcVar46,pcVar18,psVar26);
                *(undefined8 *)((long)pp_Var41 + -8) = 0x105083;
                uVar17 = quotearg_n_style(1,4,pvVar22);
                *(undefined8 *)((long)pp_Var41 + -8) = 0x105095;
                uVar20 = quotearg_n_style(0,4,pcVar46);
                *(undefined8 *)((long)pp_Var41 + -8) = 0x1050ab;
                uVar24 = dcgettext(0,"will not create hard link %s to directory %s",5);
                *(undefined8 *)((long)pp_Var41 + -8) = 0x1050bf;
                error(0,0,uVar24,uVar20,uVar17);
                *(undefined8 *)((long)pp_Var41 + -8) = 0x1050c7;
                free(pvVar22);
                cVar7 = *(char *)((long)param_8 + 0x33);
                goto joined_r0x001050cd;
              }
              if ((char)param_8[3] == '\0') {
                local_368 = (__dev_t *)CONCAT44(local_368._4_4_,(uint)(byte)local_348);
                goto LAB_00101233;
              }
              if ((int)uVar23 == 0x11) {
                uVar34 = (uint)*(byte *)((long)param_8 + 0x1a);
                goto LAB_00101980;
              }
              goto LAB_0010165c;
            }
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1055da;
            uVar17 = quotearg_style(4,top_level_src_name);
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1055f0;
            uVar20 = dcgettext(0,"warning: source directory %s specified more than once",5);
            *(undefined8 *)((long)pp_Var41 + -8) = 0x105601;
            error(0,0,uVar20,uVar17);
            if (((char)param_8[3] == '\0') || (p_Var50 = local_368, local_368 == (__dev_t *)0x0))
            goto LAB_00101a06;
            goto LAB_00104f4d;
          }
          *(undefined8 *)((long)pp_Var41 + -8) = 0x104f90;
          uVar17 = quotearg_n_style(1,4,top_level_dst_name);
          *(undefined8 *)((long)pp_Var41 + -8) = 0x104fa6;
          uVar20 = quotearg_n_style(0,4,top_level_src_name);
          *(undefined8 *)((long)pp_Var41 + -8) = 0x104fbc;
          uVar24 = dcgettext(0,"cannot copy a directory, %s, into itself, %s",5);
          *(undefined8 *)((long)pp_Var41 + -8) = 0x104fd0;
          error(0,0,uVar24,uVar20,uVar17);
          *(undefined1 *)local_360 = 1;
          cVar7 = *(char *)((long)param_8 + 0x33);
joined_r0x001050cd:
          if (cVar7 != '\0') goto LAB_00103176;
          goto LAB_00102a50;
        }
        cVar7 = (char)param_8[3];
        if (cVar7 == '\0') {
          if (((char)param_8[6] == '\0') || (*(char *)((long)param_8 + 0x17) != '\0'))
          goto LAB_0010121b;
LAB_00101928:
          if ((1 < local_288.st_nlink) ||
             ((((char)local_334 != '\0' && (*(int *)((long)param_8 + 4) == 3)) ||
              (*(int *)((long)param_8 + 4) == 4)))) {
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1030fa;
            local_388 = (stat *)remember_copied(pcVar18,_Var6,_Var5);
LAB_00103101:
            pcVar46 = local_328;
            iVar12 = local_32c;
            pcVar18 = local_350;
            if (local_388 != (stat *)0x0) {
              if ((local_330 & 0xf000) == 0x4000) goto LAB_00101a8d;
              *(ulong *)((long)pp_Var41 + -0x10) = (ulong)local_338;
              psVar26 = local_388;
              *(ulong *)((long)pp_Var41 + -0x18) = (ulong)*(byte *)(param_8 + 8);
              *(undefined8 *)((long)pp_Var41 + -0x20) = 1;
              *(undefined8 *)((long)pp_Var41 + -0x28) = 0x10315e;
              cVar7 = create_hard_link(0,iVar12,psVar26,pcVar46,iVar12,pcVar18);
              if (cVar7 != '\0') goto LAB_00101a06;
              cVar7 = *(char *)((long)param_8 + 0x33);
              goto joined_r0x001050cd;
            }
            goto LAB_00104dd0;
          }
          goto LAB_00101956;
        }
        if (local_288.st_nlink == 1) {
          *(undefined8 *)((long)pp_Var41 + -8) = 0x103503;
          local_388 = (stat *)src_to_dest_lookup(_Var6,_Var5);
          goto LAB_00103101;
        }
        if (((char)param_8[6] != '\0') && (*(char *)((long)param_8 + 0x17) == '\0'))
        goto LAB_00101928;
LAB_0010195e:
        if ((int)uVar23 == 0x11) {
          local_388 = (stat *)0x0;
          uVar34 = (uint)*(byte *)((long)param_8 + 0x1a);
          goto LAB_00101980;
        }
LAB_00101651:
        local_388 = (stat *)0x0;
LAB_0010165c:
        pcVar46 = local_328;
        iVar12 = local_32c;
        pcVar18 = local_340;
        iVar13 = (int)uVar23;
        if (iVar13 == 0x16) {
          *(undefined8 *)((long)pp_Var41 + -8) = 0x104f06;
          uVar17 = quotearg_n_style(1,4,top_level_dst_name);
          *(undefined8 *)((long)pp_Var41 + -8) = 0x104f1c;
          uVar20 = quotearg_n_style(0,4,top_level_src_name);
          *(undefined8 *)((long)pp_Var41 + -8) = 0x104f32;
          uVar24 = dcgettext(0,"cannot move %s to a subdirectory of itself, %s",5);
          *(undefined8 *)((long)pp_Var41 + -8) = 0x104f46;
          error(0,0,uVar24,uVar20,uVar17);
          p_Var50 = local_360;
LAB_00104f4d:
          *(undefined1 *)p_Var50 = 1;
          goto LAB_00101a06;
        }
        if (iVar13 == 0x12) {
          if ((*(uint *)(param_8 + 3) & 0xffff00) == 0) {
            uVar34 = local_330 & 0xf000;
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1016a9;
            iVar12 = unlinkat(iVar12,pcVar18,(uint)(uVar34 == 0x4000) << 9);
            if (iVar12 == 0) {
LAB_001016be:
              if (((char)param_8[8] != '\0') && (uVar34 != 0x4000)) {
                *(undefined8 *)((long)pp_Var41 + -8) = 0x102f73;
                uVar17 = dcgettext(0,"copied %s -> %s",5);
                pcVar46 = local_320;
                pcVar18 = local_328;
                psVar26 = local_370;
                *(undefined8 *)((long)pp_Var41 + -8) = 0x102f90;
                emit_verbose(uVar17,pcVar46,pcVar18,psVar26);
              }
              local_368 = (__dev_t *)CONCAT44(local_368._4_4_,1);
              local_348 = (stat *)CONCAT71(local_348._1_7_,1);
              goto LAB_00101233;
            }
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1016b2;
            puVar19 = (uint *)__errno_location();
            pcVar18 = local_328;
            if (*puVar19 == 2) goto LAB_001016be;
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1054a2;
            uVar17 = quotearg_n_style(1,4,pcVar18);
            pcVar18 = local_320;
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1054b8;
            uVar20 = quotearg_n_style(0,4,pcVar18);
            *(undefined8 *)((long)pp_Var41 + -8) = 0x1054ce;
            uVar24 = dcgettext(0,"inter-device move failed: %s to %s; unable to remove target",5);
            uVar23 = (ulong)*puVar19;
          }
          else {
            *(undefined8 *)((long)pp_Var41 + -8) = 0x102636;
            uVar17 = quotearg_n_style(1,4,pcVar46);
            if (*(char *)((long)param_8 + 0x1a) == '\0') goto LAB_00102645;
LAB_0010567f:
            pcVar18 = local_320;
            *(undefined8 *)((long)pp_Var41 + -8) = 0x105692;
            uVar20 = quotearg_n_style(0,4,pcVar18);
            pcVar18 = "cannot exchange %s and %s";
LAB_00102667:
            *(undefined8 *)((long)pp_Var41 + -8) = 0x10266e;
            uVar24 = dcgettext(0,pcVar18,5);
          }
          *(undefined8 *)((long)pp_Var41 + -8) = 0x102682;
          error(0,uVar23,uVar24,uVar20,uVar17);
        }
        else {
          *(undefined8 *)((long)pp_Var41 + -8) = 0x102536;
          uVar17 = quotearg_n_style(1,4,pcVar46);
          if (*(char *)((long)param_8 + 0x1a) != '\0') goto LAB_0010567f;
          if (0x27 < iVar13) {
            if (iVar13 == 0x7a) goto LAB_0010256b;
LAB_00102645:
            pcVar18 = local_320;
            *(undefined8 *)((long)pp_Var41 + -8) = 0x102658;
            uVar20 = quotearg_n_style(0,4,pcVar18);
            pcVar18 = "cannot move %s to %s";
            goto LAB_00102667;
          }
          if ((iVar13 < 0x11) || ((0x8094220000U >> (uVar23 & 0x3f) & 1) == 0)) goto LAB_00102645;
LAB_0010256b:
          *(undefined8 *)((long)pp_Var41 + -8) = 0x10257e;
          uVar20 = dcgettext(0,"cannot overwrite %s",5);
          *(undefined8 *)((long)pp_Var41 + -8) = 0x10258f;
          error(0,uVar23,uVar20,uVar17);
        }
        _Var6 = local_288.st_ino;
        _Var5 = local_288.st_dev;
        *(undefined8 *)((long)pp_Var41 + -8) = 0x1025a2;
        forget_created(_Var6,_Var5);
        pp_Var44 = pp_Var41;
        goto LAB_001025a2;
      }
      psVar26 = &local_288;
      if (((local_330 & 0xf000) == 0x4000) || ((int)*param_8 != 0)) {
LAB_0010107c:
        record_file(lVar36,local_320,psVar26);
        goto LAB_00101088;
      }
      local_348 = &local_288;
      cVar7 = seen_file(lVar36,local_320);
      if (cVar7 == '\0') {
        lVar36 = param_8[0xb];
        psVar26 = local_348;
        goto LAB_0010107c;
      }
      uVar17 = quotearg_style(4,local_320);
      uVar20 = dcgettext(0,"warning: source file %s specified more than once",5);
      error(0,0,uVar20,uVar17);
      pp_Var41 = &local_3d8;
    }
LAB_00101a06:
    p_Var50 = (__dev_t *)0x1;
    pp_Var44 = pp_Var41;
  }
LAB_00101a0c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)p_Var50 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)pp_Var44 + -8) = 0x104d92;
  __stack_chk_fail();
}



void dest_info_init(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint *in_R9;
  long in_FS_OFFSET;
  
  lVar3 = 0x3d;
  lVar1 = hash_initialize(0x3d,0,&triple_hash,&triple_compare,&triple_free);
  *(long *)(param_1 + 0x50) = lVar1;
  if (lVar1 != 0) {
    return;
  }
  xalloc_die();
  uVar2 = 0;
  uVar4 = 0x3d;
  lVar1 = hash_initialize(0x3d,0,&triple_hash_no_name,&triple_compare,&triple_free);
  *(long *)(lVar3 + 0x58) = lVar1;
  if (lVar1 != 0) {
    return;
  }
  xalloc_die();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (3 < *in_R9) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((unsigned int) (co->backup_type) <= numbered_backups)","src/copy.c",0xd1d,
                  "valid_options");
  }
  if (in_R9[3] - 1 < 3) {
    if (2 < in_R9[0x13]) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("((co->reflink_mode) == REFLINK_NEVER || (co->reflink_mode) == REFLINK_AUTO || (co->reflink_mode) == REFLINK_ALWAYS)"
                    ,"src/copy.c",0xd1f,"valid_options");
    }
    if ((*(char *)((long)in_R9 + 0x17) != '\0') && (*(char *)((long)in_R9 + 0x3a) != '\0')) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!(co->hard_link && co->symbolic_link)","src/copy.c",0xd20,"valid_options");
    }
    if ((in_R9[3] != 2) && (in_R9[0x13] == 2)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)",
                    "src/copy.c",0xd21,"valid_options");
    }
    top_level_dst_name = uVar2;
    top_level_src_name = uVar4;
    copy_internal();
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("((co->sparse_mode) == SPARSE_NEVER || (co->sparse_mode) == SPARSE_AUTO || (co->sparse_mode) == SPARSE_ALWAYS)"
                ,"src/copy.c",0xd1e,"valid_options");
}



void src_info_init(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *in_R9;
  long in_FS_OFFSET;
  
  uVar2 = 0;
  uVar3 = 0x3d;
  lVar1 = hash_initialize(0x3d,0,&triple_hash_no_name,&triple_compare,&triple_free);
  *(long *)(param_1 + 0x58) = lVar1;
  if (lVar1 != 0) {
    return;
  }
  xalloc_die();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (3 < *in_R9) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((unsigned int) (co->backup_type) <= numbered_backups)","src/copy.c",0xd1d,
                  "valid_options");
  }
  if (2 < in_R9[3] - 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((co->sparse_mode) == SPARSE_NEVER || (co->sparse_mode) == SPARSE_AUTO || (co->sparse_mode) == SPARSE_ALWAYS)"
                  ,"src/copy.c",0xd1e,"valid_options");
  }
  if (in_R9[0x13] < 3) {
    if ((*(char *)((long)in_R9 + 0x17) != '\0') && (*(char *)((long)in_R9 + 0x3a) != '\0')) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!(co->hard_link && co->symbolic_link)","src/copy.c",0xd20,"valid_options");
    }
    if ((in_R9[3] != 2) && (in_R9[0x13] == 2)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)",
                    "src/copy.c",0xd21,"valid_options");
    }
    top_level_dst_name = uVar2;
    top_level_src_name = uVar3;
    copy_internal();
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("((co->reflink_mode) == REFLINK_NEVER || (co->reflink_mode) == REFLINK_AUTO || (co->reflink_mode) == REFLINK_ALWAYS)"
                ,"src/copy.c",0xd1f,"valid_options");
}



int copy(EVP_PKEY_CTX *dst,EVP_PKEY_CTX *src)

{
  long lVar1;
  int iVar2;
  undefined8 in_RCX;
  undefined4 in_EDX;
  undefined8 in_R8;
  uint *in_R9;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (3 < *in_R9) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((unsigned int) (co->backup_type) <= numbered_backups)","src/copy.c",0xd1d,
                  "valid_options");
  }
  if (2 < in_R9[3] - 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((co->sparse_mode) == SPARSE_NEVER || (co->sparse_mode) == SPARSE_AUTO || (co->sparse_mode) == SPARSE_ALWAYS)"
                  ,"src/copy.c",0xd1e,"valid_options");
  }
  if (2 < in_R9[0x13]) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((co->reflink_mode) == REFLINK_NEVER || (co->reflink_mode) == REFLINK_AUTO || (co->reflink_mode) == REFLINK_ALWAYS)"
                  ,"src/copy.c",0xd1f,"valid_options");
  }
  if ((*(char *)((long)in_R9 + 0x17) != '\0') && (*(char *)((long)in_R9 + 0x3a) != '\0')) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!(co->hard_link && co->symbolic_link)","src/copy.c",0xd20,"valid_options");
  }
  if ((in_R9[3] != 2) && (in_R9[0x13] == 2)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)",
                  "src/copy.c",0xd21,"valid_options");
  }
  top_level_dst_name = src;
  top_level_src_name = dst;
  iVar2 = copy_internal(dst,src,in_EDX,in_RCX,in_R8,0,0);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cp_options_default(undefined8 *param_1)

{
  __uid_t _Var1;
  ulong uVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[0xb] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x60U >> 3)
      ; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _Var1 = geteuid();
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(ushort *)((long)param_1 + 0x1c) = CONCAT11(_Var1 == 0,_Var1 == 0);
  return;
}



ulong chown_failure_ok(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  bool bVar3;
  
  puVar1 = (uint *)__errno_location();
  uVar2 = 0;
  if ((*puVar1 < 0x17) &&
     (bVar3 = (0x402002UL >> ((ulong)*puVar1 & 0x3f) & 1) != 0, uVar2 = CONCAT71(0x4020,bVar3),
     bVar3)) {
    uVar2 = (ulong)(*(byte *)(param_1 + 0x1c) ^ 1);
  }
  return uVar2;
}



__mode_t cached_umask(void)

{
  __mode_t __mask;
  
  if (mask_0 != 0xffffffff) {
    return mask_0;
  }
  __mask = umask(0);
  mask_0 = __mask;
  umask(__mask);
  return __mask;
}


