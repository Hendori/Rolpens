
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
        goto LAB_00100313;
      }
    }
  }
  uVar5 = quotearg_style(4,param_2);
  uVar2 = _program_name;
  uVar6 = dcgettext(0,"%s: overwrite %s? ",5);
  __fprintf_chk(_stderr,2,uVar6,uVar2,uVar5);
LAB_00100313:
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
  ulong uVar18;
  bool bVar19;
  byte bVar20;
  bool bVar21;
  ulong local_78;
  
  *param_12 = 0;
  local_78 = param_10;
  *param_11 = 0;
  if (copy_debug._8_4_ == 0) {
    if (param_5 != 0) {
      copy_debug._8_4_ = 2;
      goto LAB_001005ae;
    }
    copy_debug._8_4_ = 1;
  }
  else if (param_5 != 0) {
    if (copy_debug._8_4_ == 3) {
      copy_debug._8_4_ = 4;
    }
    goto LAB_001005ae;
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
          goto LAB_001005c4;
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
          if ((uVar1 != 0x26) && (uVar1 != 0x5f)) goto LAB_00100a2d;
          goto LAB_001005c4;
        }
        if ((int)uVar1 < 1) goto LAB_00100a2d;
        if (((0x6442202UL >> ((ulong)uVar1 & 0x3f) & 1) != 0) || (uVar1 == 2)) goto LAB_001005c4;
      }
      if (uVar1 != 4) {
LAB_00100a2d:
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
LAB_001005ae:
  copy_debug._0_4_ = 5;
  if (param_10 != 0) {
LAB_001005c4:
    uVar15 = param_5;
    if (param_5 == 0) {
      uVar15 = param_4;
    }
    uVar18 = 0;
    bVar19 = false;
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
      bVar13 = bVar19;
LAB_00100871:
      do {
        uVar16 = uVar11;
        if (uVar5 < uVar11) {
          uVar16 = uVar5;
        }
        bVar21 = uVar5 == uVar16;
        bVar19 = uVar16 != 0 && param_5 != 0;
        __n = uVar16;
        __s2 = __buf;
        if (bVar19) {
          do {
            if (*__s2 != '\0') {
              bVar19 = false;
              bVar14 = bVar13;
              goto LAB_001007f0;
            }
            __s2 = __s2 + 1;
            __n = __n - 1;
            if (__n == 0) {
              bVar20 = uVar18 != 0 & (bVar13 ^ 1U);
              goto LAB_001009ff;
            }
          } while ((__n & 0xf) != 0);
          iVar4 = memcmp(__buf,__s2,__n);
          bVar19 = iVar4 == 0;
          bVar21 = bVar21 && iVar4 != 0;
          bVar14 = (bool)(bVar13 ^ bVar19);
LAB_001007f0:
          bVar20 = uVar18 != 0 & bVar14;
          if (bVar21) {
            if (bVar20 == 0) goto LAB_001008cb;
            bVar21 = true;
          }
          else {
LAB_001009ff:
            bVar21 = false;
            if (bVar20 == 0) goto LAB_001008a0;
          }
          if (bVar13 != false) goto LAB_001008e3;
LAB_0010081e:
          uVar11 = full_write(param_2,pcVar17,uVar18);
          if (uVar11 != uVar18) {
            uVar7 = quotearg_style(4,param_9);
            uVar8 = dcgettext(0,"error writing %s",5);
            piVar6 = __errno_location();
            error(0,*piVar6,uVar8,uVar7);
            return 0;
          }
          if (!bVar21) goto LAB_0010090e;
LAB_00100843:
          if (uVar16 == 0) {
            uVar18 = 0;
            break;
          }
          if (bVar20 != 0) {
            uVar11 = 0;
            pcVar17 = __buf;
            uVar18 = uVar16;
            bVar13 = bVar19;
            goto LAB_00100871;
          }
          uVar5 = uVar5 - uVar16;
          uVar18 = 0;
          pcVar17 = __buf;
        }
        else {
          bVar19 = bVar13;
          if ((((bVar13 ^ 1U) & bVar21) == 0) && (uVar16 != 0)) {
LAB_001008a0:
            if (uVar18 + uVar16 + 0x8000000000000000 < uVar16) {
              uVar7 = quotearg_style(4,param_8);
              uVar8 = dcgettext(0,"overflow reading %s",5);
              error(0,0,uVar8,uVar7);
              return 0;
            }
            uVar5 = uVar5 - uVar16;
            uVar18 = uVar18 + uVar16;
          }
          else {
LAB_001008cb:
            uVar18 = uVar18 + uVar16;
            bVar20 = 0;
            bVar21 = true;
            if (bVar13 == false) goto LAB_0010081e;
LAB_001008e3:
            cVar3 = create_hole(param_2,param_9,param_6,uVar18);
            if (cVar3 == '\0') {
              return 0;
            }
            if (bVar21) goto LAB_00100843;
LAB_0010090e:
            uVar5 = uVar5 - uVar16;
            pcVar17 = __buf;
            uVar18 = uVar16;
          }
        }
        __buf = __buf + uVar16;
        uVar11 = uVar16;
        bVar13 = bVar19;
      } while (uVar5 != 0);
      *param_12 = bVar19;
    } while (local_78 != 0);
    if (bVar19 != false) {
      uVar7 = create_hole(param_2,param_9,param_6,uVar18);
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
      if (*(char *)(param_1 + 0x39) == '\0') goto LAB_00100b95;
      param_6 = *(uint *)(param_1 + 0x10);
    }
    if ((((ushort)(~(ushort)param_6 | 0xe00) & param_10 & 0xfff) == 0) ||
       (iVar2 = qset_acl(param_2,param_5,param_6 & param_10 & 0x1c0), iVar2 == 0))
    goto LAB_00100b95;
    puVar3 = (uint *)__errno_location();
    if (((*puVar3 < 0x17) && ((0x402002UL >> ((ulong)*puVar3 & 0x3f) & 1) != 0)) &&
       (*(char *)(param_1 + 0x1d) == '\0')) goto LAB_00100c16;
    uVar4 = quotearg_style(4,param_2);
    uVar5 = dcgettext(0,"clearing permissions for %s",5);
    uVar1 = *puVar3;
  }
  else {
LAB_00100b95:
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
LAB_00100c16:
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



/* WARNING: Removing unreachable block (ram,0x00101fe8) */
/* WARNING: Removing unreachable block (ram,0x00103a09) */
/* WARNING: Removing unreachable block (ram,0x00103a26) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong copy_internal(stat *param_1,stat *param_2,undefined8 param_3,stat *param_4,ulong param_5,
                   stat *param_6,stat *param_7,stat *param_8,undefined4 param_9,stat *param_10,
                   stat *param_11,stat *param_12)

{
  __mode_t *p_Var1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  __dev_t _Var4;
  __nlink_t _Var5;
  __ino_t _Var6;
  __uid_t __owner;
  __gid_t __group;
  char cVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  __mode_t _Var14;
  undefined8 uVar15;
  char *pcVar16;
  stat *psVar17;
  undefined8 uVar18;
  stat *psVar19;
  uint *puVar20;
  int *piVar21;
  undefined8 uVar22;
  void *pvVar23;
  void *__ptr;
  ulong uVar24;
  stat *psVar25;
  long lVar26;
  ssize_t sVar27;
  size_t sVar28;
  __off_t _Var29;
  stat *psVar30;
  byte bVar31;
  byte bVar32;
  uint uVar33;
  uint uVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  ulong uVar42;
  ulong uVar43;
  stat *psVar44;
  undefined1 uVar45;
  ulong in_R10;
  stat *psVar46;
  stat *psVar47;
  undefined7 uVar48;
  long in_FS_OFFSET;
  bool bVar49;
  undefined1 auStack_3e8 [12];
  uint local_3dc;
  undefined8 local_3d8;
  stat *local_3d0;
  uint local_3c8;
  uint local_3c4;
  char local_3bd;
  uint local_3bc;
  undefined8 *local_3b8;
  stat *local_3b0;
  undefined1 *local_3a8;
  stat *local_3a0;
  stat *local_398;
  undefined8 local_390;
  stat *local_388;
  stat *local_380;
  stat *local_378;
  stat *local_370;
  stat *local_368;
  stat *local_360;
  stat *local_358;
  stat *local_350;
  stat *local_348;
  stat *local_340;
  stat *local_338;
  stat *local_330;
  uint local_328;
  uint local_324;
  stat *local_320;
  undefined1 local_312 [2];
  undefined1 local_310 [112];
  __ino_t _Stack_2a0;
  __nlink_t local_298;
  ulong uStack_290;
  stat local_288;
  stat local_1f8;
  stat local_168;
  stat local_d8;
  char local_41;
  long local_40;
  
  psVar46 = (stat *)(param_5 & 0xffffffff);
  puVar41 = auStack_3e8;
  puVar38 = auStack_3e8;
  puVar36 = auStack_3e8;
  puVar35 = auStack_3e8;
  puVar39 = auStack_3e8;
  puVar37 = auStack_3e8;
  puVar40 = auStack_3e8;
  local_320 = param_2;
  local_324 = (uint)param_3;
  local_378 = param_7;
  local_348 = param_4;
  local_330 = (stat *)CONCAT44(local_330._4_4_,param_9);
  local_380 = param_6;
  local_350 = param_10;
  local_358 = param_11;
  local_360 = param_12;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_338 = (stat *)&_LC16;
  if ((char)param_4->st_dev != '\0') {
    local_338 = param_4;
  }
  uVar11 = (uint)(param_8->st_atim).tv_sec;
  psVar19 = (stat *)(ulong)uVar11;
  *(undefined1 *)&param_11->st_dev = 0;
  if (((char)param_8->st_mode != '\0') && (*(char *)((long)&param_8->st_mode + 2) == '\0')) {
    if (-1 < (int)uVar11) {
LAB_001010a0:
      bVar49 = (int)psVar19 == 0;
      *(bool *)&local_360->st_dev = bVar49;
      psVar46 = (stat *)(ulong)bVar49;
      goto LAB_00100eae;
    }
    iVar10 = renameatu(0xffffff9c,param_1,param_3,local_338,1);
    if (iVar10 != 0) {
      puVar20 = (uint *)__errno_location();
      psVar19 = (stat *)(ulong)*puVar20;
      goto LAB_001010a0;
    }
    psVar46 = (stat *)0x1;
    *(undefined1 *)&local_360->st_dev = 1;
LAB_00101060:
    if (*(char *)((long)&param_8->st_blocks + 5) != '\0') {
      psVar19 = (stat *)0x0;
      goto LAB_00100f0a;
    }
    psVar19 = (stat *)0x0;
    param_11 = local_320;
    psVar17 = local_338;
    uVar11 = local_324;
LAB_00100ecc:
    iVar10 = fstatat(uVar11,(char *)psVar17,&local_288,
                     (uint)(*(int *)((long)&param_8->st_dev + 4) == 2) << 8);
    if (iVar10 == 0) {
      local_328 = local_288.st_mode;
      if (((local_288.st_mode & 0xf000) != 0x4000) || ((char)param_8->st_blksize != '\0'))
      goto LAB_00100f0a;
      uVar15 = quotearg_style(4,param_1);
      if (*(char *)((long)&param_8->st_mode + 3) == '\0') {
        uVar22 = dcgettext(0,"-r not specified; omitting directory %s",5);
      }
      else {
        uVar22 = dcgettext(0,"omitting directory %s",5);
      }
      error(0,0,uVar22,uVar15);
      puVar41 = auStack_3e8;
      goto LAB_001025d5;
    }
LAB_00104ffd:
    *(undefined8 *)(puVar41 + -8) = 0x105007;
    uVar15 = quotearg_style(4,param_11);
    pcVar16 = "cannot stat %s";
    puVar40 = puVar41;
LAB_00105016:
    *(undefined8 *)(puVar40 + -8) = 0x10501d;
    uVar22 = dcgettext(0,pcVar16,5);
    *(undefined8 *)(puVar40 + -8) = 0x105025;
    piVar21 = __errno_location();
    iVar10 = *piVar21;
    *(undefined8 *)(puVar40 + -8) = 0x105036;
    error(0,iVar10,uVar22,uVar15);
    puVar41 = puVar40;
    goto LAB_001025d5;
  }
LAB_00100eae:
  if ((int)psVar19 == 0) goto LAB_00101060;
  if (((int)psVar19 != 0x11) || (1 < *(int *)((long)&param_8->st_blksize + 4) - 2U)) {
    param_11 = param_1;
    psVar17 = param_1;
    uVar11 = 0xffffff9c;
    goto LAB_00100ecc;
  }
LAB_00100f0a:
  iVar10 = (int)psVar46;
  if ((byte)local_330 == '\0') {
    local_340 = (stat *)CONCAT71(local_340._1_7_,1);
    local_368 = (stat *)0x0;
    local_370 = (stat *)CONCAT44(local_370._4_4_,(uint)(*(int *)((long)&param_8->st_dev + 4) == 4));
    if (0 < iVar10) goto LAB_00100fd0;
LAB_001012fc:
    if (((int)psVar19 != 0x11) ||
       (iVar12 = *(int *)((long)&param_8->st_blksize + 4), 1 < iVar12 - 2U)) {
      uVar11 = local_328 & 0xf000;
      param_11 = (stat *)(ulong)uVar11;
      if (uVar11 == 0x8000) goto LAB_00101898;
      cVar7 = *(char *)((long)&param_8->st_nlink + 4);
      if (cVar7 != '\0') {
        if (uVar11 == 0x4000) {
          if (*(char *)((long)&param_8->st_blocks + 1) != '\0') goto LAB_00101898;
LAB_00101be0:
          psVar46 = (stat *)0x100;
          goto LAB_00101339;
        }
        if (uVar11 == 0xa000) goto LAB_00101be0;
LAB_00101898:
        cVar7 = (char)param_8->st_mode;
        if (((cVar7 != '\0') || (cVar7 = *(char *)((long)&param_8->st_blksize + 2), cVar7 != '\0'))
           || (cVar7 = *(char *)((long)&param_8->st_nlink + 7), cVar7 != '\0')) goto LAB_00101be0;
        if ((int)param_8->st_dev != 0) goto LAB_0010132d;
        cVar7 = *(char *)((long)&param_8->st_nlink + 5);
        if (cVar7 != '\0') goto LAB_00101be0;
        if (iVar10 == 0) goto LAB_00101339;
LAB_001018f0:
        local_340 = (stat *)CONCAT71(local_340._1_7_,1);
LAB_00102623:
        local_368 = (stat *)0x0;
        in_R10 = 0;
        puVar38 = auStack_3e8;
        if ((int)psVar19 == 0x11) goto LAB_00101373;
        goto LAB_0010263b;
      }
LAB_0010132d:
      cVar7 = '\x01';
      psVar46 = (stat *)0x100;
LAB_00101339:
      local_368 = (stat *)CONCAT71(local_368._1_7_,cVar7);
      iVar10 = fstatat(local_324,(char *)local_338,&local_1f8,(int)psVar46);
      psVar17 = local_340;
      local_340 = (stat *)((ulong)local_340 & 0xffffffffffffff00);
      in_R10 = (ulong)local_368 & 0xff;
      if (iVar10 < 0) {
        local_340._1_7_ = SUB87(psVar17,1);
        local_340 = (stat *)CONCAT71(local_340._1_7_,local_368._0_1_);
        psVar46 = (stat *)__errno_location();
        iVar10 = (int)psVar46->st_dev;
        if (iVar10 == 2) goto LAB_001018f0;
        bVar9 = iVar10 != 0x28 | (byte)local_340;
        local_340 = (stat *)CONCAT71(local_340._1_7_,bVar9);
        if ((bVar9 != 0) || (*(char *)((long)&param_8->st_nlink + 6) == '\0')) {
          uVar15 = quotearg_style(4,local_320);
          uVar22 = dcgettext(0,"cannot stat %s",5);
          error(0,(int)psVar46->st_dev,uVar22,uVar15);
          puVar41 = auStack_3e8;
          goto LAB_001025d5;
        }
        goto LAB_00102623;
      }
LAB_00101373:
      iVar12 = *(int *)((long)&param_8->st_blksize + 4);
      if (iVar12 - 2U < 2) goto LAB_00101f03;
      psVar46 = (stat *)(local_288.st_dev ^ local_1f8.st_dev | local_288.st_ino ^ local_1f8.st_ino);
      bVar49 = psVar46 == (stat *)0x0;
      if (bVar49) {
        bVar9 = *(byte *)((long)&param_8->st_nlink + 7);
        psVar19 = (stat *)(ulong)bVar9;
        if (bVar9 == 0) {
          if (*(int *)((long)&param_8->st_dev + 4) == 2) goto LAB_00103300;
          local_388 = &local_168;
          local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
          iVar10 = fstatat(local_324,(char *)local_338,local_388,0x100);
          in_R10 = (ulong)local_368 & 0xff;
          if (iVar10 == 0) {
            local_390 = (stat *)CONCAT71(local_390._1_7_,local_368._0_1_);
            local_368 = &local_d8;
            iVar10 = lstat((char *)param_1,&local_d8);
            in_R10 = (ulong)local_390 & 0xff;
            if (iVar10 == 0) {
              psVar46 = (stat *)(local_d8.st_dev ^ local_168.st_dev |
                                local_d8.st_ino ^ local_168.st_ino);
              bVar49 = psVar46 == (stat *)0x0;
              uVar33 = local_d8.st_mode & 0xf000;
              psVar17 = local_388;
              psVar47 = local_368;
              if (((uVar33 != 0xa000) || ((local_168.st_mode & 0xf000) != 0xa000)) ||
                 (*(char *)((long)&param_8->st_nlink + 5) == '\0')) goto LAB_00101488;
            }
          }
LAB_00103396:
          iVar12 = *(int *)((long)&param_8->st_blksize + 4);
        }
LAB_00102d1f:
        cVar7 = (char)psVar19;
        if (iVar12 != 1) goto LAB_00101f06;
        if (uVar11 == 0x4000) {
          if ((char)param_8->st_mode == '\0') goto LAB_00102420;
          goto LAB_00102944;
        }
LAB_00102d34:
        cVar7 = (char)psVar19;
        bVar49 = false;
        if ((*(char *)((long)&param_8->st_gid + 1) != '\0') &&
           (bVar49 = true, (char)param_8->st_mode != '\0')) {
          bVar49 = local_1f8.st_dev != local_288.st_dev;
        }
        local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
        iVar10 = utimecmpat(local_324,local_348,&local_1f8,&local_288,bVar49);
        in_R10 = (ulong)local_368 & 0xff;
        if (iVar10 < 0) {
          if ((char)param_8->st_mode == '\0') {
LAB_001034dc:
            iVar12 = *(int *)((long)&param_8->st_blksize + 4);
            goto LAB_00101f2a;
          }
LAB_0010292f:
          iVar12 = *(int *)((long)&param_8->st_blksize + 4);
          goto LAB_00102938;
        }
        if (local_360 != (stat *)0x0) {
          *(undefined1 *)&local_360->st_dev = 1;
        }
        lVar26 = remember_copied(local_348,local_288.st_ino,local_288.st_dev);
        if (lVar26 == 0) {
          iVar12 = *(int *)((long)&param_8->st_blksize + 4);
          psVar46 = (stat *)0x1;
        }
        else {
          uVar24 = (ulong)local_324;
          psVar17 = local_320;
          uVar11 = create_hard_link(0,local_324,lVar26,local_320,uVar24,local_348,1,
                                    (char)param_8->st_blocks,(ulong)local_370 & 0xffffffff);
          bVar9 = (byte)uVar24;
          psVar46 = (stat *)(ulong)uVar11;
          if ((char)uVar11 == '\0') {
            puVar41 = auStack_3e8;
            if (*(char *)((long)&param_8->st_size + 3) != '\0') goto LAB_00103166;
            goto LAB_001025d5;
          }
          iVar12 = *(int *)((long)&param_8->st_blksize + 4);
        }
        goto LAB_00101f87;
      }
      psVar19 = (stat *)0x0;
      if (*(int *)((long)&param_8->st_dev + 4) != 2) goto LAB_00102d1f;
LAB_00103300:
      uVar33 = local_288.st_mode & 0xf000;
      psVar17 = &local_1f8;
      psVar47 = &local_288;
      if ((uVar33 != 0xa000) || ((local_1f8.st_mode & 0xf000) != 0xa000)) {
LAB_00101488:
        if ((int)param_8->st_dev == 0) {
          cVar7 = (char)param_8->st_mode;
          if ((cVar7 == '\0') && (*(char *)((long)&param_8->st_nlink + 5) == '\0')) {
            if (uVar33 != 0xa000) {
LAB_0010355d:
              if ((psVar17->st_mode & 0xf000) != 0xa000) {
                psVar46 = (stat *)(psVar47->st_dev ^ psVar17->st_dev |
                                  psVar47->st_ino ^ psVar17->st_ino);
LAB_00103a5b:
                if (psVar46 != (stat *)0x0) goto LAB_00104009;
                bVar9 = *(byte *)((long)&param_8->st_nlink + 7);
                psVar19 = (stat *)(ulong)bVar9;
                if (bVar9 != 0) goto LAB_00103396;
              }
LAB_00103571:
              cVar7 = (char)param_8->st_mode;
LAB_00103577:
              if (((cVar7 != '\0') && ((local_288.st_mode & 0xf000) == 0xa000)) &&
                 (1 < psVar17->st_nlink)) {
                local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
                local_390 = psVar17;
                local_388 = psVar47;
                pcVar16 = canonicalize_file_name((char *)param_1);
                in_R10 = (ulong)local_368 & 0xff;
                psVar17 = local_390;
                psVar47 = local_388;
                if (pcVar16 != (char *)0x0) {
                  uVar33 = same_nameat(0xffffff9c,pcVar16,local_324,local_338);
                  psVar19 = (stat *)0x0;
                  psVar46 = (stat *)(ulong)(uVar33 ^ 1);
                  free(pcVar16);
                  in_R10 = (ulong)local_368 & 0xff;
                  goto LAB_0010338d;
                }
              }
            }
            if ((*(char *)((long)&param_8->st_blksize + 2) == '\0') ||
               ((psVar17->st_mode & 0xf000) != 0xa000)) {
              if (*(int *)((long)&param_8->st_dev + 4) != 2) goto LAB_001014d6;
              if ((psVar47->st_mode & 0xf000) == 0xa000) {
                local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
                local_388 = psVar17;
                iVar10 = stat((char *)param_1,&local_d8);
                in_R10 = (ulong)local_368 & 0xff;
                psVar17 = local_388;
                if (iVar10 != 0) goto LAB_00104009;
              }
              else {
                local_d8.st_dev = psVar47->st_dev;
                local_d8.st_ino = psVar47->st_ino;
                local_d8.st_nlink = psVar47->st_nlink;
                local_d8.st_mode = psVar47->st_mode;
                local_d8.st_uid = psVar47->st_uid;
                local_d8.st_gid = psVar47->st_gid;
                local_d8.__pad0 = psVar47->__pad0;
                local_d8.st_rdev = psVar47->st_rdev;
                local_d8.st_size = (__off_t)psVar47->st_size;
                local_d8.st_blksize = psVar47->st_blksize;
                local_d8.st_blocks = psVar47->st_blocks;
                local_d8.st_atim.tv_sec = (psVar47->st_atim).tv_sec;
                local_d8.st_atim.tv_nsec = (psVar47->st_atim).tv_nsec;
                local_d8.st_mtim.tv_sec = (psVar47->st_mtim).tv_sec;
                local_d8.st_mtim.tv_nsec = (psVar47->st_mtim).tv_nsec;
                local_d8.st_ctim.tv_sec = (psVar47->st_ctim).tv_sec;
                local_d8.st_ctim.tv_nsec = (psVar47->st_ctim).tv_nsec;
                local_d8.__unused[0] = psVar47->__unused[0];
                local_d8.__unused[1] = psVar47->__unused[1];
                local_d8.__unused[2] = psVar47->__unused[2];
              }
              if ((psVar17->st_mode & 0xf000) == 0xa000) {
                local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
                local_388 = psVar17;
                iVar10 = fstatat(local_324,(char *)local_338,&local_168,0);
                in_R10 = (ulong)local_368 & 0xff;
                psVar17 = local_388;
                if (iVar10 != 0) goto LAB_00104009;
              }
              else {
                local_168.st_dev = psVar17->st_dev;
                local_168.st_ino = psVar17->st_ino;
                local_168.st_nlink = psVar17->st_nlink;
                local_168.st_mode = psVar17->st_mode;
                local_168.st_uid = psVar17->st_uid;
                local_168.st_gid = psVar17->st_gid;
                local_168.__pad0 = psVar17->__pad0;
                local_168.st_rdev = psVar17->st_rdev;
                local_168.st_size = psVar17->st_size;
                local_168.st_blksize = (__blksize_t)psVar17->st_blksize;
                local_168.st_blocks = psVar17->st_blocks;
                local_168.st_atim.tv_sec = (psVar17->st_atim).tv_sec;
                local_168.st_atim.tv_nsec = (psVar17->st_atim).tv_nsec;
                local_168.st_mtim.tv_sec = (psVar17->st_mtim).tv_sec;
                local_168.st_mtim.tv_nsec = (psVar17->st_mtim).tv_nsec;
                local_168.st_ctim.tv_sec = (psVar17->st_ctim).tv_sec;
                local_168.st_ctim.tv_nsec = (psVar17->st_ctim).tv_nsec;
                local_168.__unused[0] = psVar17->__unused[0];
                local_168.__unused[1] = psVar17->__unused[1];
                local_168.__unused[2] = psVar17->__unused[2];
              }
              if (local_d8.st_dev == local_168.st_dev && local_d8.st_ino == local_168.st_ino) {
                if (*(char *)((long)&param_8->st_nlink + 7) != '\0') {
                  iVar12 = *(int *)((long)&param_8->st_blksize + 4);
                  psVar19 = (stat *)(ulong)((psVar17->st_mode & 0xf000) != 0xa000);
                  goto LAB_00102d1f;
                }
                goto LAB_001014d6;
              }
            }
          }
          else if ((psVar17->st_mode & 0xf000) != 0xa000) {
            if ((bVar49) && (1 < psVar17->st_nlink)) {
              local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
              local_390 = psVar17;
              local_388 = psVar47;
              uVar33 = same_nameat(0xffffff9c,param_1,local_324);
              in_R10 = (ulong)local_368 & 0xff;
              psVar19 = (stat *)(ulong)uVar33;
              if ((char)uVar33 != '\0') {
                psVar17 = local_390;
                psVar47 = local_388;
                if ((local_388->st_mode & 0xf000) != 0xa000) goto LAB_0010355d;
                goto LAB_00103571;
              }
              psVar46 = (stat *)(ulong)((byte)param_8->st_mode ^ 1);
              goto LAB_0010338d;
            }
            if (uVar33 != 0xa000) goto LAB_00103a5b;
            goto LAB_00103577;
          }
LAB_00104009:
          iVar12 = *(int *)((long)&param_8->st_blksize + 4);
          psVar19 = (stat *)0x0;
          goto LAB_00102d1f;
        }
        if (bVar49) {
          psVar19 = (stat *)0x0;
          local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
          uVar33 = same_nameat(0xffffff9c,param_1,local_324,local_338);
          in_R10 = (ulong)local_368 & 0xff;
          psVar46 = (stat *)(ulong)(uVar33 ^ 1);
          goto LAB_0010338d;
        }
        if ((char)param_8->st_mode != '\0') {
          if (*(int *)((long)&param_8->st_blksize + 4) != 1) {
            cVar7 = '\0';
            goto LAB_0010292f;
          }
LAB_00104154:
          psVar19 = (stat *)0x0;
          cVar7 = '\0';
          if (uVar11 != 0x4000) goto LAB_00102d34;
          if ((char)param_8->st_mode != '\0') goto LAB_00102944;
          goto LAB_00102429;
        }
        if (((*(int *)((long)&param_8->st_dev + 4) != 2) && (uVar33 == 0xa000)) &&
           ((psVar17->st_mode & 0xf000) != 0xa000)) goto LAB_001014d6;
        if (*(int *)((long)&param_8->st_blksize + 4) == 1) goto LAB_00104154;
        cVar7 = '\0';
        if (uVar11 != 0x4000) goto LAB_001034dc;
        iVar10 = (int)param_8->st_dev;
        bVar49 = (local_1f8.st_mode & 0xf000) != 0x4000;
        if (bVar49 != ((local_328 & 0xf000) != 0x4000)) goto LAB_00102a80;
        goto LAB_00103068;
      }
      local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
      uVar33 = same_nameat(0xffffff9c,param_1,local_324,local_338);
      psVar19 = (stat *)(ulong)uVar33;
      if ((char)uVar33 == '\0') {
        in_R10 = (ulong)local_368 & 0xff;
        if (((int)param_8->st_dev != 0) || (psVar46 != (stat *)0x0)) goto LAB_00103396;
        psVar19 = (stat *)0x1;
        psVar46 = (stat *)(ulong)((byte)param_8->st_mode ^ 1);
LAB_0010338d:
        if ((char)psVar46 != '\0') goto LAB_00103396;
      }
LAB_001014d6:
      uVar15 = quotearg_n_style(1,4,local_320);
      uVar22 = quotearg_n_style(0,4,param_1);
      pcVar16 = "%s and %s are the same file";
      puVar35 = auStack_3e8;
LAB_0010150d:
      *(undefined8 *)(puVar35 + -8) = 0x101514;
      uVar18 = dcgettext(0,pcVar16,5);
      *(undefined8 *)(puVar35 + -8) = 0x101528;
      error(0,0,uVar18,uVar22,uVar15);
      puVar41 = puVar35;
      goto LAB_001025d5;
    }
    local_340 = (stat *)((ulong)local_340 & 0xffffffffffffff00);
    in_R10 = 0;
LAB_00101f03:
    cVar7 = '\0';
LAB_00101f06:
    if ((char)param_8->st_mode == '\0') {
      if ((local_328 & 0xf000) != 0x4000) {
LAB_00101f2a:
        if (iVar12 - 2U < 2) goto LAB_00101f80;
        if ((int)param_8->st_ino == 3) {
          local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
          cVar8 = overwrite_ok(param_8,local_320,local_324,local_348,&local_1f8);
          in_R10 = (ulong)local_368 & 0xff;
          if (cVar8 == '\0') {
            iVar12 = *(int *)((long)&param_8->st_blksize + 4);
            goto LAB_00101f80;
          }
        }
      }
    }
    else {
LAB_00102938:
      if (iVar12 - 2U < 2) {
LAB_00102a00:
        if (local_360 != (stat *)0x0) {
          *(undefined1 *)&local_360->st_dev = 1;
        }
LAB_00101f80:
        psVar46 = (stat *)CONCAT71((int7)((ulong)psVar46 >> 8),iVar12 == 2);
LAB_00101f87:
        if (iVar12 == 3) {
          uVar15 = quotearg_style(4,local_320);
          uVar22 = dcgettext(0,"not replacing %s",5);
          error(0,0,uVar22,uVar15);
          puVar41 = auStack_3e8;
        }
        else {
          puVar41 = auStack_3e8;
          if (*(char *)((long)&param_8->st_blocks + 2) != '\0') {
            uVar15 = quotearg_style(4,local_320);
            uVar22 = dcgettext(0,"skipped %s\n",5);
            __printf_chk(2,uVar22,uVar15);
            puVar41 = auStack_3e8;
          }
        }
        goto LAB_00101a42;
      }
LAB_00102944:
      iVar10 = (int)param_8->st_ino;
      if (iVar10 == 3) {
LAB_001029c0:
        local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
        cVar8 = overwrite_ok(param_8,local_320,local_324,local_338,&local_1f8);
        in_R10 = (ulong)local_368 & 0xff;
        if (cVar8 == '\0') {
          iVar12 = *(int *)((long)&param_8->st_blksize + 4);
          goto LAB_00102a00;
        }
      }
      else if (((iVar10 == 0) && (*(char *)((long)&param_8->st_blocks + 3) != '\0')) &&
              ((local_1f8.st_mode & 0xf000) != 0xa000)) {
        local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
        cVar8 = can_write_any_file();
        in_R10 = (ulong)local_368 & 0xff;
        if (cVar8 == '\0') {
          iVar10 = faccessat(local_324,(char *)local_338,2,0x200);
          in_R10 = (ulong)local_368 & 0xff;
          if (iVar10 != 0) goto LAB_001029c0;
        }
      }
    }
LAB_00102420:
    puVar40 = auStack_3e8;
    if (cVar7 != '\0') goto LAB_00101a3c;
LAB_00102429:
    iVar10 = (int)param_8->st_dev;
    uVar11 = local_328 & 0xf000;
    param_11 = (stat *)(ulong)uVar11;
    bVar49 = (local_1f8.st_mode & 0xf000) != 0x4000;
    if ((uVar11 != 0x4000) == bVar49) {
LAB_00103068:
      if (((byte)local_330 == '\0') || (!bVar49)) {
LAB_00102ad3:
        if (iVar10 != 0) goto LAB_00102adc;
LAB_00102f12:
        if ((local_1f8.st_mode & 0xf000) != 0x4000) goto LAB_0010248f;
        goto LAB_00102f22;
      }
LAB_00102a8e:
      if (iVar10 != 3) {
        if (*(char *)((long)&param_8->st_mode + 2) == '\0') {
          local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
          cVar7 = seen_file((param_8->st_atim).tv_nsec,local_348,&local_1f8);
          if (cVar7 != '\0') {
            uVar15 = quotearg_n_style(1,4,param_1);
            uVar22 = quotearg_n_style(0,4,local_320);
            pcVar16 = "will not overwrite just-created %s with %s";
            goto LAB_0010150d;
          }
          iVar10 = (int)param_8->st_dev;
          in_R10 = (ulong)local_368 & 0xff;
          goto LAB_00102ad3;
        }
        if (iVar10 == 0) goto LAB_0010248f;
      }
LAB_00102adc:
      local_368 = (stat *)CONCAT71(local_368._1_7_,(char)in_R10);
      psVar46 = (stat *)last_component(param_1);
      in_R10 = (ulong)local_368 & 0xff;
      if (((char)psVar46->st_dev == '.') &&
         ((cVar7 = *(char *)((long)psVar46->__unused +
                            ((ulong)(*(char *)((long)&psVar46->st_dev + 1) == '.') - 0x77)),
          cVar7 == '\0' || (cVar7 == '/')))) goto LAB_00102f12;
      if (((char)param_8->st_mode == '\0') && ((local_1f8.st_mode & 0xf000) == 0x4000))
      goto LAB_00102f22;
      uVar45 = local_368._0_1_;
      if (iVar10 != 3) {
        local_340 = (stat *)strlen((char *)psVar46);
        local_388 = (stat *)last_component(local_348);
        sVar28 = strlen((char *)local_388);
        local_390 = _simple_backup_suffix;
        local_398 = (stat *)strlen((char *)_simple_backup_suffix);
        uVar45 = local_368._0_1_;
        if (local_340 == (stat *)((long)local_398->__unused + (sVar28 - 0x78))) {
          local_340 = (stat *)CONCAT71(local_340._1_7_,local_368._0_1_);
          iVar12 = memcmp(psVar46,local_388,sVar28);
          psVar19 = local_390;
          uVar45 = (byte)local_340;
          if (iVar12 == 0) {
            iVar12 = strcmp((char *)((long)psVar46->__unused + (sVar28 - 0x78)),(char *)local_390);
            uVar45 = (byte)local_340;
            if (iVar12 == 0) {
              local_388 = (stat *)CONCAT71(local_388._1_7_,(byte)local_340);
              sVar28 = strlen((char *)local_348);
              local_368 = (stat *)((long)&local_398->st_dev + 1);
              uVar24 = (long)local_368->__unused + (sVar28 - 0x78);
              local_340 = (stat *)ximalloc(uVar24);
              if (uVar24 <= sVar28) {
                uVar24 = sVar28;
              }
              __memcpy_chk((long)local_340->__unused + (sVar28 - 0x78),psVar19,local_368,
                           uVar24 - sVar28);
              pcVar16 = (char *)__memcpy_chk(local_340,local_348,sVar28);
              iVar10 = fstatat(local_324,pcVar16,&local_d8,0);
              free(pcVar16);
              if ((iVar10 == 0) &&
                 (local_288.st_dev == local_d8.st_dev && local_288.st_ino == local_d8.st_ino)) {
                if ((char)param_8->st_mode == '\0') {
                  uVar15 = dcgettext(0,"backing up %s might destroy source;  %s not copied",5);
                }
                else {
                  uVar15 = dcgettext(0,"backing up %s might destroy source;  %s not moved",5);
                }
                uVar22 = quotearg_n_style(1,4,param_1);
                uVar18 = quotearg_n_style(0,4,local_320);
                error(0,0,uVar15,uVar18,uVar22);
                puVar41 = auStack_3e8;
                goto LAB_001025d5;
              }
              iVar10 = (int)param_8->st_dev;
              uVar45 = local_388._0_1_;
            }
          }
        }
      }
      psVar46 = local_348;
      local_340._0_1_ = uVar45;
      param_11 = (stat *)backup_file_rename(local_324,local_348,iVar10);
      if (param_11 == (stat *)0x0) {
        param_11 = (stat *)__errno_location();
        in_R10 = (ulong)local_340 & 0xff;
        if ((int)param_11->st_dev == 2) {
          local_340 = (stat *)CONCAT71(local_340._1_7_,1);
          local_368 = (stat *)0x0;
          psVar19 = (stat *)0x11;
          puVar38 = auStack_3e8;
          goto LAB_0010263b;
        }
        uVar15 = quotearg_style(4,local_320);
        pcVar16 = "cannot backup %s";
        goto LAB_0010579c;
      }
      psVar46 = (stat *)((long)psVar46 - (long)local_320);
      sVar28 = strlen((char *)param_11);
      uVar24 = (long)psVar46->__unused + (sVar28 - 0x60);
      puVar41 = auStack_3e8;
      while (puVar39 != auStack_3e8 + -(uVar24 & 0xfffffffffffff000)) {
        puVar37 = puVar41 + -0x1000;
        *(undefined8 *)(puVar41 + -8) = *(undefined8 *)(puVar41 + -8);
        puVar39 = puVar41 + -0x1000;
        puVar41 = puVar41 + -0x1000;
      }
      uVar24 = (ulong)((uint)uVar24 & 0xff0);
      lVar26 = -uVar24;
      if (uVar24 != 0) {
        *(undefined8 *)(puVar37 + -8) = *(undefined8 *)(puVar37 + -8);
      }
      local_388 = (stat *)CONCAT71(local_388._1_7_,(byte)local_340);
      local_368 = (stat *)((ulong)(puVar37 + lVar26 + 0xf) & 0xfffffffffffffff0);
      *(undefined8 *)(puVar37 + lVar26 + -8) = 0x103034;
      pvVar23 = (void *)__mempcpy_chk(local_368,local_320,psVar46);
      psVar19 = (stat *)0x11;
      *(undefined8 *)(puVar37 + lVar26 + -8) = 0x103048;
      memcpy(pvVar23,param_11,sVar28 + 1);
      *(undefined8 *)(puVar37 + lVar26 + -8) = 0x103050;
      free(param_11);
      local_340 = (stat *)CONCAT71(local_340._1_7_,1);
      in_R10 = (ulong)local_388 & 0xff;
      puVar38 = puVar37 + lVar26;
LAB_0010263b:
      if ((byte)local_330 != '\0') goto LAB_00100f8a;
      goto LAB_00100fd0;
    }
    if (iVar10 != 0) {
LAB_00102a80:
      if (((byte)local_330 != '\0') && (bVar49)) goto LAB_00102a8e;
      goto LAB_00102adc;
    }
    if (*(char *)((long)&param_8->st_mode + 2) == '\0') {
      uVar15 = quotearg_n_style(1,4,param_1);
      uVar22 = quotearg_n_style(0,4,local_320);
      pcVar16 = "cannot overwrite directory %s with non-directory %s";
      if (uVar11 == 0x4000) {
        pcVar16 = "cannot overwrite non-directory %s with directory %s";
      }
      uVar18 = dcgettext(0,pcVar16,5);
      error(0,0,uVar18,uVar22,uVar15);
      puVar41 = auStack_3e8;
      goto LAB_001025d5;
    }
    if ((!bVar49) || ((byte)local_330 == '\0')) goto LAB_00102f12;
LAB_0010248f:
    if ((char)param_8->st_mode != '\0') {
LAB_00102f22:
      local_368 = (stat *)0x0;
      psVar19 = (stat *)0x11;
      puVar38 = auStack_3e8;
      goto LAB_0010263b;
    }
    if (*(char *)((long)&param_8->st_nlink + 5) == '\0') {
      if (*(char *)((long)&param_8->st_size + 1) == '\0') goto LAB_00102f22;
      if (((char)param_8->st_size == '\0') || (local_1f8.st_nlink < 2)) {
        psVar19 = (stat *)0x11;
        local_368 = (stat *)0x0;
        puVar38 = auStack_3e8;
        if ((*(int *)((long)&param_8->st_dev + 4) != 2) ||
           (puVar38 = auStack_3e8, (local_288.st_mode & 0xf000) == 0x8000)) goto LAB_0010263b;
      }
    }
    local_340 = (stat *)CONCAT71(local_340._1_7_,(char)in_R10);
    iVar10 = unlinkat(local_324,(char *)local_348,0);
    bVar9 = (byte)local_340;
    if (iVar10 != 0) {
      param_11 = (stat *)__errno_location();
      bVar9 = (byte)local_340;
      if ((int)param_11->st_dev != 2) {
        uVar15 = quotearg_style(4,local_320);
        pcVar16 = "cannot remove %s";
LAB_0010579c:
        uVar22 = dcgettext(0,pcVar16,5);
        error(0,(int)param_11->st_dev,uVar22,uVar15);
        puVar41 = auStack_3e8;
        goto LAB_001025d5;
      }
    }
    in_R10 = (ulong)bVar9;
    cVar7 = (char)param_8->st_blocks;
    local_340 = (stat *)CONCAT71(local_340._1_7_,cVar7);
    if (cVar7 != '\0') {
      local_388 = (stat *)CONCAT71(local_388._1_7_,bVar9);
      psVar19 = (stat *)0x11;
      param_11 = (stat *)quotearg_style(4,local_320);
      uVar15 = dcgettext(0,"removed %s\n",5);
      __printf_chk(2,uVar15,param_11);
      in_R10 = (ulong)local_388 & 0xff;
      local_368 = (stat *)0x0;
      puVar38 = auStack_3e8;
      goto LAB_0010263b;
    }
    if ((byte)local_330 != '\0') {
      psVar19 = (stat *)0x11;
      local_368 = (stat *)0x0;
      local_340 = (stat *)CONCAT71(local_340._1_7_,(byte)local_330);
      puVar38 = auStack_3e8;
      goto LAB_00100f8a;
    }
    local_340 = (stat *)CONCAT71(local_340._1_7_,1);
    psVar19 = (stat *)0x11;
    local_368 = (stat *)0x0;
LAB_00101539:
    puVar40 = puVar36;
    if (*(char *)((long)&param_8->st_mode + 2) == '\0') {
LAB_00101545:
      _Var6 = local_288.st_ino;
      _Var4 = local_288.st_dev;
      psVar17 = local_348;
      if (((char)param_8->st_blksize == '\0') || ((local_328 & 0xf000) != 0x4000)) {
        cVar7 = (char)param_8->st_mode;
        if (cVar7 == '\0') {
          if (((char)param_8->st_size == '\0') || (*(char *)((long)&param_8->st_nlink + 7) != '\0'))
          goto LAB_00101118;
LAB_00101918:
          if ((1 < local_288.st_nlink) ||
             (((iVar10 = *(int *)((long)&param_8->st_dev + 4), (byte)local_330 != '\0' &&
               (iVar10 == 3)) || (iVar10 == 4)))) {
            *(undefined8 *)(puVar40 + -8) = 0x1030ea;
            local_388 = (stat *)remember_copied(psVar17,_Var6,_Var4);
LAB_001030f1:
            psVar17 = local_320;
            uVar11 = local_324;
            psVar47 = local_348;
            if (local_388 != (stat *)0x0) {
              if ((local_328 & 0xf000) == 0x4000) goto LAB_00101ac5;
              *(ulong *)(puVar40 + -0x10) = (ulong)local_370 & 0xffffffff;
              psVar25 = local_388;
              uVar24 = (ulong)uVar11;
              *(ulong *)(puVar40 + -0x18) = (ulong)(byte)param_8->st_blocks;
              *(undefined8 *)(puVar40 + -0x20) = 1;
              *(undefined8 *)(puVar40 + -0x28) = 0x10314e;
              cVar7 = create_hard_link(0,uVar11,psVar25,psVar17,uVar24,psVar47);
              bVar9 = (byte)uVar24;
              if (cVar7 != '\0') goto LAB_00101a3c;
              cVar7 = *(char *)((long)&param_8->st_size + 3);
              goto joined_r0x00105a18;
            }
            goto LAB_00105170;
          }
LAB_00101946:
          if (cVar7 == '\0') goto LAB_00101118;
        }
        else {
          if (local_288.st_nlink == 1) {
            *(undefined8 *)(puVar40 + -8) = 0x1034bb;
            local_388 = (stat *)src_to_dest_lookup(_Var6,_Var4);
            goto LAB_001030f1;
          }
          if (((char)param_8->st_size != '\0') && (*(char *)((long)&param_8->st_nlink + 7) == '\0'))
          goto LAB_00101918;
        }
        if ((int)psVar19 != 0x11) goto LAB_001017b6;
        local_388 = (stat *)0x0;
        uVar11 = (uint)*(byte *)((long)&param_8->st_mode + 2);
LAB_00101970:
        uVar33 = local_324;
        psVar19 = local_338;
        *(undefined8 *)(puVar40 + -8) = 0x10198d;
        iVar10 = renameatu(0xffffff9c,param_1,uVar33,psVar19,uVar11 * 2);
        if (iVar10 != 0) {
          *(undefined8 *)(puVar40 + -8) = 0x101996;
          puVar20 = (uint *)__errno_location();
          psVar19 = (stat *)(ulong)*puVar20;
          if (*puVar20 != 0) goto LAB_001017c1;
        }
LAB_001019a8:
        if ((char)param_8->st_blocks != '\0') goto LAB_00100ff1;
LAB_001019b6:
        if (param_8->st_rdev != 0) {
          *(undefined8 *)(puVar40 + -8) = 0x1019c3;
          piVar21 = __errno_location();
          psVar46 = local_320;
          if ((*(char *)((long)&param_8->st_size + 1) == '\0') ||
             (*(char *)((long)&param_8->st_size + 4) != '\0')) {
            *piVar21 = 0x5f;
            *(undefined8 *)(puVar40 + -8) = 0x1019ef;
            uVar15 = quotearg_n_style(0,4,psVar46);
            *(undefined8 *)(puVar40 + -8) = 0x101a05;
            uVar22 = dcgettext(0,"failed to set the security context of %s",5);
            iVar10 = *piVar21;
            *(undefined8 *)(puVar40 + -8) = 0x101a18;
            error(0,iVar10,uVar22,uVar15);
          }
          else {
            *piVar21 = 0x5f;
          }
        }
        psVar46 = local_348;
        if (local_360 != (stat *)0x0) {
          *(undefined1 *)&local_360->st_dev = 1;
        }
        if (((byte)local_330 != '\0') && (*(char *)((long)&param_8->st_blocks + 5) == '\0')) {
          lVar26 = (param_8->st_atim).tv_nsec;
          *(undefined8 *)(puVar40 + -8) = 0x103208;
          record_file(lVar26,psVar46,&local_288);
        }
        goto LAB_00101a3c;
      }
      if ((byte)local_330 == '\0') {
        *(undefined8 *)(puVar40 + -8) = 0x103498;
        local_388 = (stat *)src_to_dest_lookup(_Var6,_Var4);
      }
      else {
        *(undefined8 *)(puVar40 + -8) = 0x101ab0;
        local_388 = (stat *)remember_copied(psVar17,_Var6);
      }
      if (local_388 == (stat *)0x0) {
LAB_00105170:
        cVar7 = (char)param_8->st_mode;
        goto LAB_00101946;
      }
LAB_00101ac5:
      uVar11 = local_324;
      psVar17 = local_388;
      *(undefined8 *)(puVar40 + -8) = 0x101adf;
      cVar7 = same_nameat(0xffffff9c,param_1,uVar11,psVar17);
      uVar11 = local_324;
      psVar47 = local_348;
      psVar17 = local_388;
      if (cVar7 == '\0') {
        *(undefined8 *)(puVar40 + -8) = 0x101b02;
        cVar7 = same_nameat(uVar11,psVar47,uVar11,psVar17);
        psVar25 = local_320;
        psVar47 = local_348;
        psVar17 = local_388;
        if (cVar7 == '\0') {
          iVar10 = *(int *)((long)&param_8->st_dev + 4);
          if ((iVar10 != 4) && ((iVar10 != 3 || ((byte)local_330 == '\0')))) {
            *(undefined8 *)(puVar40 + -8) = 0x10534f;
            param_11 = (stat *)subst_suffix(psVar25,psVar47,psVar17);
            *(undefined8 *)(puVar40 + -8) = 0x105364;
            psVar19 = (stat *)quotearg_n_style(1,4,param_11);
            bVar9 = (byte)psVar19;
            *(undefined8 *)(puVar40 + -8) = 0x105376;
            param_1 = (stat *)quotearg_n_style(0,4,psVar25);
            *(undefined8 *)(puVar40 + -8) = 0x10538c;
            uVar15 = dcgettext(0,"will not create hard link %s to directory %s",5);
            *(undefined8 *)(puVar40 + -8) = 0x1053a0;
            psVar17 = param_1;
            error(0,0,uVar15);
            *(undefined8 *)(puVar40 + -8) = 0x1053a8;
            free(param_11);
            cVar7 = *(char *)((long)&param_8->st_size + 3);
            goto joined_r0x00105a18;
          }
          if ((char)param_8->st_mode == '\0') {
            local_360 = (stat *)CONCAT44(local_360._4_4_,(uint)(byte)local_340);
            goto LAB_00101130;
          }
          if ((int)psVar19 == 0x11) {
            uVar11 = (uint)*(byte *)((long)&param_8->st_mode + 2);
            goto LAB_00101970;
          }
          goto LAB_001017c1;
        }
        *(undefined8 *)(puVar40 + -8) = 0x105708;
        uVar15 = quotearg_style(4,top_level_src_name);
        *(undefined8 *)(puVar40 + -8) = 0x10571e;
        uVar22 = dcgettext(0,"warning: source directory %s specified more than once",5);
        *(undefined8 *)(puVar40 + -8) = 0x10572f;
        error(0,0,uVar22,uVar15);
        if ((local_360 == (stat *)0x0) || (psVar46 = local_360, (char)param_8->st_mode == '\0'))
        goto LAB_00101a3c;
        goto LAB_00105212;
      }
      *(undefined8 *)(puVar40 + -8) = 0x1059c8;
      param_11 = (stat *)quotearg_n_style(1,4,top_level_dst_name);
      *(undefined8 *)(puVar40 + -8) = 0x1059de;
      psVar19 = (stat *)quotearg_n_style(0,4,top_level_src_name);
      *(undefined8 *)(puVar40 + -8) = 0x1059f4;
      uVar15 = dcgettext(0,"cannot copy a directory, %s, into itself, %s",5);
      *(undefined8 *)(puVar40 + -8) = 0x105a08;
      psVar17 = psVar19;
      psVar47 = param_11;
      error(0,0,uVar15);
      bVar9 = (byte)psVar47;
      *(undefined1 *)&local_358->st_dev = 1;
      cVar7 = *(char *)((long)&param_8->st_size + 3);
joined_r0x00105a18:
      if (cVar7 != '\0') goto LAB_00103166;
LAB_001016f0:
      uVar11 = local_324;
      psVar46 = local_338;
      puVar41 = puVar40;
      if (local_368 != (stat *)0x0) {
        pcVar16 = (char *)(((long)local_348 - (long)local_320) + (long)local_368);
        *(undefined8 *)(puVar40 + -8) = 0x101728;
        iVar10 = renameat(uVar11,pcVar16,uVar11,(char *)psVar46);
        psVar46 = local_320;
        if (iVar10 != 0) {
          *(undefined8 *)(puVar40 + -8) = 0x105a90;
          uVar15 = quotearg_style(4,psVar46);
          pcVar16 = "cannot un-backup %s";
          goto LAB_00105016;
        }
        if ((char)param_8->st_blocks != '\0') {
          *(undefined8 *)(puVar40 + -8) = 0x101752;
          uVar15 = quotearg_n_style(1,4,psVar46);
          psVar46 = local_368;
          *(undefined8 *)(puVar40 + -8) = 0x101768;
          uVar22 = quotearg_n_style(0,4,psVar46);
          *(undefined8 *)(puVar40 + -8) = 0x10177e;
          uVar18 = dcgettext(0,"%s -> %s (unbackup)\n",5);
          *(undefined8 *)(puVar40 + -8) = 0x101793;
          __printf_chk(2,uVar18,uVar22,uVar15);
        }
      }
      goto LAB_001025d5;
    }
    if ((char)param_8->st_mode == '\0') goto LAB_00101118;
LAB_001017ac:
    if ((int)psVar19 == 0x11) {
      local_388 = (stat *)0x0;
      uVar11 = 1;
      goto LAB_00101970;
    }
LAB_001017b6:
    local_388 = (stat *)0x0;
LAB_001017c1:
    psVar47 = local_320;
    uVar11 = local_324;
    psVar17 = local_338;
    iVar10 = (int)psVar19;
    if (iVar10 == 0x16) {
      *(undefined8 *)(puVar40 + -8) = 0x1051cb;
      uVar15 = quotearg_n_style(1,4,top_level_dst_name);
      *(undefined8 *)(puVar40 + -8) = 0x1051e1;
      uVar22 = quotearg_n_style(0,4,top_level_src_name);
      *(undefined8 *)(puVar40 + -8) = 0x1051f7;
      uVar18 = dcgettext(0,"cannot move %s to a subdirectory of itself, %s",5);
      *(undefined8 *)(puVar40 + -8) = 0x10520b;
      error(0,0,uVar18,uVar22,uVar15);
      psVar46 = local_358;
LAB_00105212:
      *(undefined1 *)&psVar46->st_dev = 1;
LAB_00101a3c:
      psVar46 = (stat *)0x1;
      puVar41 = puVar40;
      goto LAB_00101a42;
    }
    if (iVar10 == 0x12) {
      if ((param_8->st_mode & 0xffff00) == 0) {
        uVar33 = local_328 & 0xf000;
        *(undefined8 *)(puVar40 + -8) = 0x101810;
        iVar10 = unlinkat(uVar11,(char *)psVar17,(uint)(uVar33 == 0x4000) << 9);
        if (iVar10 == 0) {
LAB_00101825:
          if (((char)param_8->st_blocks != '\0') && (uVar33 != 0x4000)) {
            *(undefined8 *)(puVar40 + -8) = 0x102e63;
            uVar15 = dcgettext(0,"copied %s -> %s",5);
            psVar47 = local_320;
            psVar17 = local_368;
            *(undefined8 *)(puVar40 + -8) = 0x102e7c;
            emit_verbose(uVar15,param_1,psVar47,psVar17);
          }
          local_360 = (stat *)CONCAT44(local_360._4_4_,1);
          local_340 = (stat *)CONCAT71(local_340._1_7_,1);
          goto LAB_00101130;
        }
        *(undefined8 *)(puVar40 + -8) = 0x101819;
        psVar19 = (stat *)__errno_location();
        psVar17 = local_320;
        if ((int)psVar19->st_dev == 2) goto LAB_00101825;
        *(undefined8 *)(puVar40 + -8) = 0x1053d9;
        uVar15 = quotearg_n_style(1,4,psVar17);
        *(undefined8 *)(puVar40 + -8) = 0x1053eb;
        uVar22 = quotearg_n_style(0,4,param_1);
        *(undefined8 *)(puVar40 + -8) = 0x105401;
        uVar18 = dcgettext(0,"inter-device move failed: %s to %s; unable to remove target",5);
        psVar19 = (stat *)(ulong)(uint)psVar19->st_dev;
      }
      else {
        *(undefined8 *)(puVar40 + -8) = 0x102666;
        uVar15 = quotearg_n_style(1,4,psVar47);
        if (*(char *)((long)&param_8->st_mode + 2) == '\0') goto LAB_00102675;
LAB_00105a23:
        *(undefined8 *)(puVar40 + -8) = 0x105a32;
        uVar22 = quotearg_n_style(0,4,param_1);
        pcVar16 = "cannot exchange %s and %s";
LAB_00102693:
        *(undefined8 *)(puVar40 + -8) = 0x10269a;
        uVar18 = dcgettext(0,pcVar16,5);
      }
      *(undefined8 *)(puVar40 + -8) = 0x1026af;
      error(0,psVar19,uVar18,uVar22,uVar15);
    }
    else {
      *(undefined8 *)(puVar40 + -8) = 0x102566;
      uVar15 = quotearg_n_style(1,4,psVar47);
      if (*(char *)((long)&param_8->st_mode + 2) != '\0') goto LAB_00105a23;
      if (0x27 < iVar10) {
        if (iVar10 == 0x7a) goto LAB_0010259d;
LAB_00102675:
        *(undefined8 *)(puVar40 + -8) = 0x102684;
        uVar22 = quotearg_n_style(0,4,param_1);
        pcVar16 = "cannot move %s to %s";
        goto LAB_00102693;
      }
      if ((iVar10 < 0x11) || ((0x8094220000U >> ((ulong)psVar19 & 0x3f) & 1) == 0))
      goto LAB_00102675;
LAB_0010259d:
      *(undefined8 *)(puVar40 + -8) = 0x1025b0;
      uVar22 = dcgettext(0,"cannot overwrite %s",5);
      *(undefined8 *)(puVar40 + -8) = 0x1025c2;
      error(0,psVar19,uVar22,uVar15);
    }
    _Var6 = local_288.st_ino;
    _Var4 = local_288.st_dev;
    *(undefined8 *)(puVar40 + -8) = 0x1025d5;
    forget_created(_Var6,_Var4);
    puVar41 = puVar40;
  }
  else {
    lVar26 = (param_8->st_mtim).tv_sec;
    if (lVar26 != 0) {
      psVar17 = &local_288;
      if (((local_328 & 0xf000) == 0x4000) || ((int)param_8->st_dev != 0)) {
LAB_00100f47:
        record_file(lVar26,param_1,psVar17);
        goto LAB_00100f4f;
      }
      local_340 = &local_288;
      cVar7 = seen_file(lVar26,param_1);
      if (cVar7 == '\0') {
        lVar26 = (param_8->st_mtim).tv_sec;
        psVar17 = local_340;
        goto LAB_00100f47;
      }
      uVar15 = quotearg_style(4,param_1);
      uVar22 = dcgettext(0,"warning: source file %s specified more than once",5);
      error(0,0,uVar22,uVar15);
      puVar40 = auStack_3e8;
      goto LAB_00101a3c;
    }
LAB_00100f4f:
    local_370 = (stat *)CONCAT44(local_370._4_4_,
                                 (uint)(*(int *)((long)&param_8->st_dev + 4) - 3U < 2));
    if (iVar10 < 1) goto LAB_001012fc;
    in_R10 = 0;
    local_368 = (stat *)0x0;
    local_340 = (stat *)CONCAT71(local_340._1_7_,(byte)local_330);
    puVar38 = auStack_3e8;
LAB_00100f8a:
    uVar11 = local_324;
    psVar17 = local_338;
    if (((param_8->st_atim).tv_nsec == 0) || ((char)param_8->st_mode != '\0')) {
LAB_00100fd0:
      puVar36 = puVar38;
      if ((char)param_8->st_blocks == '\0') {
LAB_00101103:
        if ((int)psVar19 != 0) goto LAB_00101539;
        puVar40 = puVar36;
        if ((char)param_8->st_mode == '\0') goto LAB_00101118;
        goto LAB_001019a8;
      }
      psVar47 = param_11;
      if ((char)param_8->st_mode == '\0') {
LAB_001010d0:
        psVar25 = local_320;
        psVar17 = local_368;
        param_11 = psVar47;
        if ((local_328 & 0xf000) == 0x4000) goto LAB_00101530;
        *(undefined8 *)(puVar36 + -8) = 0x101103;
        emit_verbose("%s -> %s",param_1,psVar25,psVar17);
        goto LAB_00101103;
      }
      puVar40 = puVar38;
      if ((int)psVar19 != 0) {
        if (*(char *)((long)&param_8->st_mode + 2) != '\0') goto LAB_001017ac;
        goto LAB_00101545;
      }
LAB_00100ff1:
      if (*(char *)((long)&param_8->st_mode + 2) == '\0') {
        *(undefined8 *)(puVar40 + -8) = 0x101010;
        uVar15 = dcgettext(0,"renamed %s -> %s",5);
      }
      else {
        *(undefined8 *)(puVar40 + -8) = 0x102e2e;
        uVar15 = dcgettext(0,"exchanged %s <-> %s",5);
      }
      psVar19 = local_320;
      psVar46 = local_368;
      *(undefined8 *)(puVar40 + -8) = 0x101029;
      emit_verbose(uVar15,param_1,psVar19,psVar46);
      goto LAB_001019b6;
    }
    uVar33 = (uint)param_8->st_dev;
    psVar47 = (stat *)(ulong)uVar33;
    if (uVar33 == 0) {
      param_11 = &local_1f8;
      if ((char)in_R10 == '\0') {
        param_11 = &local_d8;
        *(undefined8 *)(puVar38 + -8) = 0x103249;
        iVar10 = fstatat(uVar11,(char *)psVar17,param_11,0x100);
        psVar47 = param_11;
        if (iVar10 < 0) goto LAB_00100fd0;
      }
      psVar17 = local_348;
      p_Var1 = &param_11->st_mode;
      param_11 = psVar47;
      if ((*p_Var1 & 0xf000) == 0xa000) {
        lVar26 = (param_8->st_atim).tv_nsec;
        *(undefined8 *)(puVar38 + -8) = 0x102eaa;
        cVar7 = seen_file(lVar26,psVar17);
        psVar17 = local_320;
        if (cVar7 != '\0') {
          *(undefined8 *)(puVar38 + -8) = 0x102ec8;
          uVar15 = quotearg_n_style(1,4,psVar17);
          *(undefined8 *)(puVar38 + -8) = 0x102eda;
          uVar22 = quotearg_n_style(0,4,param_1);
          pcVar16 = "will not copy %s through just-created symlink %s";
          puVar35 = puVar38;
          goto LAB_0010150d;
        }
      }
      goto LAB_00100fd0;
    }
    param_11 = psVar47;
    puVar36 = puVar38;
    if ((char)param_8->st_blocks != '\0') goto LAB_001010d0;
LAB_00101530:
    puVar40 = puVar36;
    if ((int)psVar19 != 0) goto LAB_00101539;
LAB_00101118:
    local_388 = (stat *)0x0;
    local_360 = (stat *)CONCAT44(local_360._4_4_,(uint)(byte)local_340);
LAB_00101130:
    psVar47 = local_320;
    uVar33 = local_328;
    uVar11 = local_328;
    if (*(char *)((long)&param_8->st_blksize + 1) != '\0') {
      uVar11 = (uint)param_8->st_nlink;
    }
    param_11 = (stat *)(ulong)(uVar11 & 0xfff);
    puVar41 = puVar40;
    puVar37 = puVar40;
    psVar25 = param_8;
    if (*(char *)((long)&param_8->st_uid + 3) == '\0') {
      local_390 = (stat *)(CONCAT44(local_390._4_4_,local_328) & 0xffffffff0000f000);
      if ((local_328 & 0xf000) == 0x4000) {
        uVar24 = (ulong)local_360 & 0xffffffff;
        *(undefined8 *)(puVar40 + -8) = 0x101bae;
        psVar17 = param_8;
        cVar7 = set_process_security_ctx(param_1,psVar47,uVar33,uVar24);
        bVar9 = (byte)psVar17;
        if (cVar7 != '\0') {
          local_3bc = uVar11 & 0x12;
          psVar47 = local_378;
joined_r0x00101660:
          for (; _Var6 = local_288.st_ino, _Var4 = local_288.st_dev, psVar47 != (stat *)0x0;
              psVar47 = (stat *)psVar47->st_dev) {
            if ((psVar47->st_ino == local_288.st_ino) && (psVar47->st_nlink == local_288.st_dev)) {
              *(undefined8 *)(puVar40 + -8) = 0x101695;
              param_11 = (stat *)quotearg_style(4,param_1);
              pcVar16 = "cannot copy cyclic symbolic link %s";
              goto LAB_001016a4;
            }
          }
          puVar41 = puVar40 + -0x20;
          puVar37 = puVar40 + -0x20;
          *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(puVar40 + -8);
          uVar33 = local_324;
          psVar19 = local_338;
          local_3b8 = (undefined8 *)((ulong)(puVar40 + -0x11) & 0xfffffffffffffff0);
          *local_3b8 = local_378;
          local_3b8[1] = _Var6;
          local_3b8[2] = _Var4;
          if (((byte)local_340 == '\0') && ((local_1f8.st_mode & 0xf000) == 0x4000)) {
            if ((param_8->st_rdev != 0) || (*(char *)((long)&param_8->st_size + 3) != '\0')) {
              *(undefined8 *)(puVar40 + -0x28) = 0x103299;
              psVar19 = (stat *)__errno_location();
              psVar17 = local_320;
              if ((*(char *)((long)&param_8->st_size + 1) == '\0') ||
                 (*(char *)((long)&param_8->st_size + 4) != '\0')) {
                *(undefined4 *)&psVar19->st_dev = 0x5f;
                *(undefined8 *)(puVar40 + -0x28) = 0x103501;
                param_11 = (stat *)quotearg_n_style(0,4,psVar17);
                *(undefined8 *)(puVar40 + -0x28) = 0x103517;
                uVar15 = dcgettext(0,"failed to set the security context of %s",5);
                _Var4 = psVar19->st_dev;
                *(undefined8 *)(puVar40 + -0x28) = 0x10352a;
                psVar17 = param_11;
                error(0,(int)_Var4,uVar15);
                puVar37 = puVar40 + -0x20;
                if (*(char *)((long)&param_8->st_size + 4) != '\0') goto LAB_001016c0;
              }
              else {
                *(undefined4 *)&psVar19->st_dev = 0x5f;
              }
            }
            local_3bd = '\0';
            local_3c4 = CONCAT31(local_3c4._1_3_,1);
            local_3bc = 0;
          }
          else {
            uVar34 = ~local_3bc;
            *(undefined8 *)(puVar40 + -0x28) = 0x102060;
            iVar10 = mkdirat(uVar33,(char *)psVar19,uVar34 & uVar11 & 0xfff);
            psVar17 = local_320;
            uVar11 = local_324;
            psVar19 = local_338;
            if (iVar10 != 0) {
              *(undefined8 *)(puVar40 + -0x28) = 0x1055c6;
              psVar19 = (stat *)quotearg_style(4,psVar17);
              pcVar16 = "cannot create directory %s";
              goto LAB_00104b7f;
            }
            *(undefined8 *)(puVar40 + -0x28) = 0x102086;
            iVar10 = fstatat(uVar11,(char *)psVar19,&local_1f8,0x100);
            _Var14 = local_1f8.st_mode;
            psVar17 = local_320;
            uVar11 = local_324;
            psVar19 = local_338;
            if (iVar10 != 0) {
              *(undefined8 *)(puVar40 + -0x28) = 0x1055a1;
              psVar19 = (stat *)quotearg_style(4,psVar17);
              pcVar16 = "cannot stat %s";
              puVar37 = puVar40 + -0x20;
              goto LAB_00104b7f;
            }
            if ((~local_1f8.st_mode & 0x1c0) == 0) {
              local_3c4 = CONCAT31(local_3c4._1_3_,1);
              local_3bd = '\0';
            }
            else {
              uVar33 = local_1f8.st_mode | 0x1c0;
              *(undefined8 *)(puVar40 + -0x28) = 0x1020c2;
              iVar10 = fchmodat(uVar11,(char *)psVar19,uVar33,0x100);
              psVar19 = local_320;
              if (iVar10 != 0) {
                *(undefined8 *)(puVar40 + -0x28) = 0x105923;
                psVar19 = (stat *)quotearg_style(4,psVar19);
                pcVar16 = "setting permissions for %s";
                puVar37 = puVar40 + -0x20;
                goto LAB_00104b7f;
              }
              local_3c8 = _Var14;
              local_3c4 = local_3c4 & 0xffffff00;
              local_3bd = '\x01';
            }
            psVar46 = local_348;
            if ((char)local_350->st_dev == '\0') {
              *(undefined8 *)(puVar40 + -0x28) = 0x1030ba;
              remember_copied(psVar46,local_1f8.st_ino,local_1f8.st_dev);
              *(undefined1 *)&local_350->st_dev = 1;
            }
            psVar46 = local_320;
            if ((char)param_8->st_blocks != '\0') {
              if ((char)param_8->st_mode == '\0') {
                *(undefined8 *)(puVar40 + -0x28) = 0x10343e;
                uVar15 = quotearg_n_style(1,4,psVar46);
                *(undefined8 *)(puVar40 + -0x28) = 0x103450;
                uVar22 = quotearg_n_style(0,4,param_1);
                *(undefined8 *)(puVar40 + -0x28) = 0x103469;
                __printf_chk(2,"%s -> %s",uVar22,uVar15);
                pcVar16 = _stdout->_IO_write_ptr;
                if (pcVar16 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar16 + 1;
                  *pcVar16 = '\n';
                }
                else {
                  *(undefined8 *)(puVar40 + -0x28) = 0x104783;
                  __overflow(_stdout,10);
                }
              }
              else {
                *(undefined8 *)(puVar40 + -0x28) = 0x102113;
                uVar15 = quotearg_style(4,psVar46);
                *(undefined8 *)(puVar40 + -0x28) = 0x102129;
                uVar22 = dcgettext(0,"created directory %s\n",5);
                *(undefined8 *)(puVar40 + -0x28) = 0x10213b;
                __printf_chk(2,uVar22,uVar15);
              }
            }
          }
          bVar9 = local_380 != (stat *)0x0 & *(byte *)((long)&param_8->st_uid + 2);
          psVar46 = (stat *)(CONCAT71((int7)(in_R10 >> 8),bVar9) & 0xffffffff);
          if ((bVar9 == 0) || (local_380->st_dev == local_288.st_dev)) {
            local_310._8_8_ = param_8->st_dev;
            local_310._16_8_ = param_8->st_ino;
            local_310._24_8_ = param_8->st_nlink;
            local_310._32_4_ = param_8->st_mode;
            local_310._36_4_ = param_8->st_uid;
            local_310._40_4_ = param_8->st_gid;
            local_310._44_4_ = param_8->__pad0;
            local_310._48_8_ = param_8->st_rdev;
            local_310._56_8_ = param_8->st_size;
            local_310._64_8_ = param_8->st_blksize;
            local_310._72_8_ = param_8->st_blocks;
            local_310._80_8_ = (param_8->st_atim).tv_sec;
            local_310._88_8_ = (param_8->st_atim).tv_nsec;
            local_310._96_8_ = (param_8->st_mtim).tv_sec;
            *(undefined8 *)(puVar40 + -0x28) = 0x1021b7;
            psVar19 = (stat *)savedir(param_1,2);
            if (psVar19 == (stat *)0x0) {
              psVar46 = (stat *)0x0;
              *(undefined8 *)(puVar40 + -0x28) = 0x10580d;
              uVar15 = quotearg_style(4,param_1);
              *(undefined8 *)(puVar40 + -0x28) = 0x105823;
              uVar22 = dcgettext(0,"cannot access %s",5);
              *(undefined8 *)(puVar40 + -0x28) = 0x10582b;
              piVar21 = __errno_location();
              iVar10 = *piVar21;
              *(undefined8 *)(puVar40 + -0x28) = 0x10583c;
              error(0,iVar10,uVar22,uVar15);
            }
            else {
              if (*(int *)((long)&param_8->st_dev + 4) == 3) {
                local_310._12_4_ = 2;
              }
              bVar9 = 0;
              psVar46 = (stat *)0x1;
              if ((char)psVar19->st_dev != '\0') {
                local_3b0 = &local_288;
                bVar9 = 0;
                local_380 = (stat *)((long)local_348 - (long)local_320);
                local_370 = (stat *)CONCAT71(local_370._1_7_,1);
                local_3a0 = (stat *)local_310;
                local_390 = (stat *)local_312;
                local_398 = (stat *)(local_312 + 1);
                local_3a8 = local_310 + 8;
                local_3d8 = param_8;
                local_3d0 = psVar19;
                local_378 = param_1;
                do {
                  psVar46 = local_378;
                  *(undefined8 *)(puVar40 + -0x28) = 0x10229e;
                  pvVar23 = (void *)file_name_concat(psVar46,psVar19,0);
                  psVar46 = local_320;
                  *(undefined8 *)(puVar40 + -0x28) = 0x1022b2;
                  __ptr = (void *)file_name_concat(psVar46,psVar19,0);
                  uVar11 = local_324;
                  psVar17 = local_380;
                  psVar46 = local_3b0;
                  uVar24 = (ulong)local_360 & 0xffffffff;
                  local_312[1] = (byte)local_350->st_dev;
                  *(stat **)(puVar40 + -0x28) = local_3a0;
                  *(stat **)(puVar40 + -0x30) = local_390;
                  *(stat **)(puVar40 + -0x38) = local_398;
                  *(undefined8 *)(puVar40 + -0x40) = 0;
                  *(undefined1 **)(puVar40 + -0x48) = local_3a8;
                  *(undefined8 **)(puVar40 + -0x50) = local_3b8;
                  *(undefined8 *)(puVar40 + -0x58) = 0x10230f;
                  bVar31 = copy_internal(pvVar23,__ptr,uVar11,
                                         (undefined *)((long)__ptr + (long)psVar17),uVar24,psVar46);
                  bVar32 = local_312[0];
                  local_370 = (stat *)CONCAT71(local_370._1_7_,(byte)local_370 & bVar31);
                  *(byte *)&local_358->st_dev = (byte)local_358->st_dev | local_312[0];
                  *(undefined8 *)(puVar40 + -0x28) = 0x102333;
                  free(__ptr);
                  *(undefined8 *)(puVar40 + -0x28) = 0x10233b;
                  free(pvVar23);
                  if (bVar32 != 0) break;
                  bVar9 = bVar9 | local_312[1];
                  *(undefined8 *)(puVar40 + -0x28) = 0x10227f;
                  sVar28 = strlen((char *)psVar19);
                  psVar19 = (stat *)((long)psVar19->__unused + (sVar28 - 0x77));
                } while ((char)psVar19->st_dev != '\0');
                psVar46 = (stat *)((ulong)local_370 & 0xff);
                psVar19 = local_3d0;
                param_8 = local_3d8;
                param_1 = local_378;
              }
              *(undefined8 *)(puVar40 + -0x28) = 0x102366;
              free(psVar19);
              *(byte *)&local_350->st_dev = bVar9;
            }
          }
          local_390 = (stat *)CONCAT44(local_390._4_4_,0x4000);
          param_11 = (stat *)0x0;
          psVar19 = (stat *)0x0;
          bVar32 = 0;
          goto LAB_00101237;
        }
      }
      else {
        psVar17 = (stat *)((ulong)local_360 & 0xffffffff);
        *(undefined8 *)(puVar40 + -8) = 0x101195;
        cVar7 = set_process_security_ctx(param_1,psVar47,uVar33);
        local_3bc = 0;
        if (cVar7 != '\0') goto LAB_001011a7;
      }
    }
    else {
      psVar17 = (stat *)((ulong)local_360 & 0xffffffff);
      *(undefined8 *)(puVar40 + -8) = 0x10160a;
      cVar7 = set_process_security_ctx(param_1,psVar47,uVar33);
      bVar9 = (byte)psVar25;
      if (cVar7 != '\0') {
        psVar46 = (stat *)(ulong)(uVar33 & 0xf000);
        local_390 = (stat *)(CONCAT44(local_390._4_4_,uVar33) & 0xffffffff0000f000);
        local_3bc = uVar11 & 0x3f;
        psVar47 = local_378;
        if ((uVar33 & 0xf000) == 0x4000) goto joined_r0x00101660;
LAB_001011a7:
        _Var29 = local_288.st_size;
        _Var4 = local_288.st_rdev;
        uVar33 = local_324;
        psVar47 = local_348;
        bVar9 = (byte)psVar25;
        bVar32 = *(byte *)((long)&param_8->st_blksize + 2);
        psVar19 = (stat *)(ulong)bVar32;
        if (bVar32 == 0) {
          local_3bd = *(char *)((long)&param_8->st_nlink + 7);
          if (local_3bd == '\0') {
            if ((uint)local_390 == 0x8000) {
LAB_001026df:
              local_3d8 = (stat *)(CONCAT44(local_3d8._4_4_,uVar11) & 0xffffffff000001ff);
              bVar32 = *(byte *)((long)&param_8->st_size + 1);
              psVar19 = (stat *)(ulong)bVar32;
              local_310._0_8_ = (void *)0x0;
              copy_debug._0_4_ = 0;
              iVar10 = *(int *)((long)&param_8->st_dev + 4);
              copy_debug._4_4_ = ZEXT14(*(int *)((long)&(param_8->st_atim).tv_sec + 4) == 0);
              copy_debug._8_4_ = 0;
              *(undefined8 *)(puVar40 + -8) = 0x10273c;
              iVar10 = open_safer(param_1,(ulong)(iVar10 == 2) << 0x11);
              bVar9 = (byte)psVar25;
              local_350 = (stat *)CONCAT44(local_350._4_4_,iVar10);
              if (iVar10 < 0) {
                *(undefined8 *)(puVar40 + -8) = 0x10599e;
                psVar19 = (stat *)quotearg_style(4,param_1);
                pcVar16 = "cannot open %s for reading";
LAB_00104b7f:
                *(undefined8 *)(puVar37 + -8) = 0x104b86;
                param_11 = (stat *)dcgettext(0,pcVar16,5);
                *(undefined8 *)(puVar37 + -8) = 0x104b8e;
                piVar21 = __errno_location();
                iVar10 = *piVar21;
                *(undefined8 *)(puVar37 + -8) = 0x104b9f;
                psVar17 = psVar19;
                error(0,iVar10,param_11);
                goto LAB_001016c0;
              }
              *(undefined8 *)(puVar40 + -8) = 0x102758;
              iVar10 = fstat(iVar10,&local_d8);
              uVar11 = local_324;
              psVar46 = local_348;
              bVar9 = (byte)psVar25;
              local_3b8 = (undefined8 *)CONCAT44(local_3b8._4_4_,iVar10);
              if (iVar10 == 0) {
                if (local_288.st_dev != local_d8.st_dev || local_288.st_ino != local_d8.st_ino) {
                  *(undefined8 *)(puVar40 + -8) = 0x105944;
                  param_11 = (stat *)quotearg_style(4,param_1);
                  *(undefined8 *)(puVar40 + -8) = 0x10595a;
                  uVar15 = dcgettext(0,"skipping file %s, as it was replaced while being copied",5);
                  *(undefined8 *)(puVar40 + -8) = 0x10596b;
                  psVar17 = param_11;
                  error(0,0,uVar15);
                  goto LAB_00103943;
                }
                local_288.st_nlink = local_d8.st_nlink;
                local_288.st_mode = local_d8.st_mode;
                local_288.st_uid = local_d8.st_uid;
                uVar15 = local_288._24_8_;
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
                local_3b0 = (stat *)CONCAT44(local_3b0._4_4_,local_288.st_mode);
                local_288.st_atim.tv_nsec = local_d8.st_atim.tv_nsec;
                local_288.st_mtim.tv_sec = local_d8.st_mtim.tv_sec;
                local_288.st_mtim.tv_nsec = local_d8.st_mtim.tv_nsec;
                local_288.st_ctim.tv_sec = local_d8.st_ctim.tv_sec;
                local_288.st_ctim.tv_nsec = local_d8.st_ctim.tv_nsec;
                local_288.__unused[0] = local_d8.__unused[0];
                local_288.__unused[1] = local_d8.__unused[1];
                local_288.__unused[2] = local_d8.__unused[2];
                local_288._24_8_ = uVar15;
                if ((byte)local_340 == '\0') {
                  *(undefined8 *)(puVar40 + -8) = 0x10374d;
                  uVar13 = openat_safer(uVar11,psVar46,(-(uint)(bVar32 == 0) & 0xfffffe00) + 0x201);
                  local_358 = (stat *)CONCAT44(local_358._4_4_,uVar13);
                  *(undefined8 *)(puVar40 + -8) = 0x103758;
                  param_11 = (stat *)__errno_location();
                  psVar44 = local_320;
                  uVar33 = local_324;
                  psVar46 = local_348;
                  bVar9 = (byte)psVar25;
                  uVar11 = (uint)param_11->st_dev;
                  psVar47 = (stat *)(ulong)uVar11;
                  if ((int)local_358 < 0) {
                    if (uVar11 == 2) {
LAB_001040ce:
                      if (param_8->st_rdev != 0) {
                        if ((*(char *)((long)&param_8->st_size + 3) == '\0') ||
                           ((*(char *)((long)&param_8->st_size + 1) != '\0' &&
                            (*(char *)((long)&param_8->st_size + 4) == '\0')))) {
                          *(undefined4 *)&param_11->st_dev = 0x5f;
                        }
                        else {
                          *(undefined4 *)&param_11->st_dev = 0x5f;
                          *(undefined8 *)(puVar40 + -8) = 0x10410d;
                          psVar17 = (stat *)quotearg_style(4,param_1);
                          *(undefined8 *)(puVar40 + -8) = 0x104123;
                          uVar15 = dcgettext(0,"failed to get security context of %s",5);
                          _Var4 = param_11->st_dev;
                          *(undefined8 *)(puVar40 + -8) = 0x104134;
                          error(0,(int)_Var4,uVar15);
                          if (*(char *)((long)&param_8->st_size + 4) != '\0') goto LAB_00103943;
                        }
                      }
                      goto LAB_0010281f;
                    }
                    cVar7 = *(char *)((long)&param_8->st_nlink + 6);
                    if (cVar7 != '\0') {
                      *(undefined8 *)(puVar40 + -8) = 0x104085;
                      iVar10 = unlinkat(uVar33,(char *)psVar46,0);
                      psVar46 = local_320;
                      if (iVar10 == 0) {
                        if ((char)param_8->st_blocks != '\0') {
                          *(undefined8 *)(puVar40 + -8) = 0x1040a6;
                          uVar15 = quotearg_style(4,psVar46);
                          *(undefined8 *)(puVar40 + -8) = 0x1040bc;
                          uVar22 = dcgettext(0,"removed %s\n",5);
                          *(undefined8 *)(puVar40 + -8) = 0x1040ce;
                          __printf_chk(2,uVar22,uVar15);
                        }
                      }
                      else if ((int)param_11->st_dev != 2) {
                        *(undefined8 *)(puVar40 + -8) = 0x104f9c;
                        psVar19 = (stat *)quotearg_style(4,psVar46);
                        *(undefined8 *)(puVar40 + -8) = 0x104fb2;
                        uVar15 = dcgettext(0,"cannot remove %s",5);
                        _Var4 = param_11->st_dev;
                        *(undefined8 *)(puVar40 + -8) = 0x104fc3;
                        psVar17 = psVar19;
                        error(0,(int)_Var4,uVar15);
                        goto LAB_00103943;
                      }
                      goto LAB_001040ce;
                    }
LAB_00103fc9:
                    local_340 = (stat *)CONCAT71(local_340._1_7_,cVar7);
                    goto LAB_00102897;
                  }
                  if ((param_8->st_rdev != 0) || (*(char *)((long)&param_8->st_size + 3) != '\0')) {
                    if ((*(char *)((long)&param_8->st_size + 1) != '\0') &&
                       (*(char *)((long)&param_8->st_size + 4) == '\0')) {
                      *(undefined4 *)&param_11->st_dev = 0x5f;
                      goto LAB_00103798;
                    }
                    *(undefined4 *)&param_11->st_dev = 0x5f;
                    *(undefined8 *)(puVar40 + -8) = 0x1043af;
                    psVar17 = (stat *)quotearg_n_style(0,4,psVar44);
                    *(undefined8 *)(puVar40 + -8) = 0x1043c5;
                    uVar15 = dcgettext(0,"failed to set the security context of %s",5);
                    _Var4 = param_11->st_dev;
                    psVar47 = (stat *)0x0;
                    psVar46 = (stat *)0x0;
                    *(undefined8 *)(puVar40 + -8) = 0x1043d9;
                    error(0,(int)_Var4,uVar15);
                    bVar9 = (byte)psVar25;
                    if (*(char *)((long)&param_8->st_size + 4) == '\0') goto LAB_00103798;
                    goto LAB_001038f0;
                  }
LAB_00103798:
                  local_3dc = 0;
LAB_001037a4:
                  param_11 = (stat *)0x0;
                  if (bVar32 == 0) {
LAB_00103975:
                    bVar9 = (byte)psVar25;
                    local_3c4 = (uint)*(byte *)((long)&param_8->st_uid + 3);
                    if (local_3c4 != 0) {
                      psVar19 = (stat *)0x0;
LAB_001037bb:
                      iVar10 = (int)local_358;
                      *(undefined8 *)(puVar40 + -8) = 0x1037cd;
                      iVar10 = fstat(iVar10,&local_168);
                      psVar44 = local_320;
                      bVar9 = (byte)psVar25;
                      if (iVar10 != 0) {
                        psVar46 = (stat *)0x0;
                        *(undefined8 *)(puVar40 + -8) = 0x105ab8;
                        psVar19 = (stat *)quotearg_style(4,psVar44);
                        *(undefined8 *)(puVar40 + -8) = 0x105ace;
                        param_11 = (stat *)dcgettext(0,"cannot fstat %s",5);
                        *(undefined8 *)(puVar40 + -8) = 0x105ad6;
                        piVar21 = __errno_location();
                        iVar10 = *piVar21;
                        *(undefined8 *)(puVar40 + -8) = 0x105ae7;
                        psVar17 = psVar19;
                        error(0,iVar10,param_11);
                        goto LAB_001038f0;
                      }
                      local_3c4 = 0;
                      if ((char)psVar19 == '\0') {
LAB_00103cd2:
                        psVar46 = psVar17;
                        if (*(char *)((long)&param_8->st_gid + 1) != '\0') goto LAB_00103f0f;
                        goto LAB_00103cde;
                      }
                      local_3a0 = (stat *)local_168.st_blksize;
                      uVar11 = local_168.st_mode & 0xf000;
                      if ((ulong)((long)((stat *)(local_168.st_blksize + -0x90))->__unused + 0x17)
                          >> 0x3d == 0) {
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = SUB168(SEXT816(0x3ffff),8);
                        local_380 = (stat *)((0x3ffff -
                                             SUB168((auVar3 << 0x40 | ZEXT816(0x3ffff)) %
                                                    SEXT816(local_168.st_blksize),0)) +
                                            local_168.st_blksize);
                        if ((uVar11 == 0x8000) &&
                           (((ulong)local_380 & (ulong)((long)local_380[-1].__unused + 0x17U)) != 0)
                           ) {
                          lVar26 = 0x3f;
                          if (local_380 != (stat *)0x0) {
                            for (; (ulong)local_380 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                            }
                          }
                          local_380 = (stat *)(1L << ((char)lVar26 + 1U & 0x3f));
                        }
                      }
                      else {
                        local_380 = (stat *)0x40000;
                        local_3a0 = (stat *)0x200;
                      }
                      if ((local_d8.st_mode & 0xf000) == 0x8000) {
                        psVar46 = (stat *)((long)&(((stat *)(local_d8.st_size + 0x1b0))->st_atim).
                                                  tv_sec + 7);
                        if (-1 < local_d8.st_size) {
                          psVar46 = (stat *)local_d8.st_size;
                        }
                        if ((long)psVar46 >> 9 <= local_d8.st_blocks) goto LAB_00103b88;
                        iVar10 = (int)local_350;
                        *(undefined8 *)(puVar40 + -8) = 0x103882;
                        psVar46 = (stat *)lseek(iVar10,0,3);
                        if (-1 < (long)psVar46) {
LAB_00104e90:
                          param_11 = (stat *)0x3;
                          uVar11 = local_168.st_mode & 0xf000;
                          goto LAB_00103b94;
                        }
                        *(undefined8 *)(puVar40 + -8) = 0x103893;
                        param_11 = (stat *)__errno_location();
                        bVar9 = (byte)psVar25;
                        iVar10 = (int)param_11->st_dev;
                        if (iVar10 == 6) goto LAB_00104e90;
                        if ((iVar10 == 0x16) || (iVar10 == 0x5f)) {
                          psVar46 = (stat *)0xffffffffffffffff;
                          param_11 = (stat *)0x2;
                          uVar11 = local_168.st_mode & 0xf000;
                          goto LAB_00103b94;
                        }
                        *(undefined8 *)(puVar40 + -8) = 0x1038c0;
                        psVar19 = (stat *)quotearg_style(4,param_1);
                        pcVar16 = "cannot lseek %s";
LAB_001038cf:
                        *(undefined8 *)(puVar40 + -8) = 0x1038d6;
                        uVar15 = dcgettext(0,pcVar16,5);
                        _Var4 = param_11->st_dev;
                        *(undefined8 *)(puVar40 + -8) = 0x1038e7;
                        psVar17 = psVar19;
                        error(0,(int)_Var4,uVar15);
                      }
                      else {
LAB_00103b88:
                        psVar46 = (stat *)0xffffffffffffffff;
                        param_11 = (stat *)0x1;
LAB_00103b94:
                        iVar10 = (int)param_11;
                        if ((uVar11 == 0x8000) &&
                           ((iVar12 = *(int *)((long)&param_8->st_ino + 4), iVar12 == 3 ||
                            ((iVar12 == 2 && (iVar10 != 1)))))) {
                          uVar24 = (ulong)local_350 & 0xffffffff;
                          psVar17 = (stat *)0x2;
                          *(undefined8 *)(puVar40 + -8) = 0x104541;
                          fdadvise(uVar24,0,0);
                          if (iVar10 == 3) {
                            bVar49 = *(int *)((long)&(param_8->st_atim).tv_sec + 4) != 0;
                            local_378 = (stat *)CONCAT44(local_378._4_4_,
                                                         *(undefined4 *)((long)&param_8->st_ino + 4)
                                                        );
                            goto LAB_0010479d;
                          }
                          bVar49 = *(int *)((long)&(param_8->st_atim).tv_sec + 4) != 0;
                          iVar10 = *(int *)((long)&param_8->st_ino + 4);
LAB_00103c76:
                          psVar47 = local_3a0;
                          local_312[0] = 0;
                          uVar24 = (ulong)local_358 & 0xffffffff;
                          *(undefined1 **)(puVar40 + -8) = local_312;
                          uVar42 = (ulong)local_350 & 0xffffffff;
                          *(undefined1 **)(puVar40 + -0x10) = local_310 + 8;
                          psVar17 = local_380;
                          *(undefined8 *)(puVar40 + -0x18) = 0xffffffffffffffff;
                          *(stat **)(puVar40 + -0x20) = local_320;
                          *(stat **)(puVar40 + -0x28) = param_1;
                          *(ulong *)(puVar40 + -0x30) = (ulong)bVar49;
                          *(undefined8 *)(puVar40 + -0x38) = 0x103cb7;
                          cVar7 = sparse_copy(uVar42,uVar24,local_310,psVar17,psVar47,iVar10 == 3);
                          bVar9 = (byte)psVar47;
                          psVar47 = psVar46;
                          if (cVar7 == '\0') goto LAB_001038e7;
LAB_00103cc3:
                          uVar15 = local_310._8_8_;
                          if (local_312[0] != 0) {
                            iVar10 = (int)local_358;
                            *(undefined8 *)(puVar40 + -8) = 0x1046fb;
                            iVar10 = ftruncate(iVar10,uVar15);
                            if (iVar10 < 0) goto LAB_00104703;
                          }
                          goto LAB_00103cd2;
                        }
                        uVar24 = (ulong)local_350 & 0xffffffff;
                        *(undefined8 *)(puVar40 + -8) = 0x103bb4;
                        fdadvise(uVar24,0,0,2);
                        psVar17 = local_380;
                        if (local_d8.st_blksize - 1U >> 0x3d == 0) {
                          auVar2._8_8_ = 0;
                          auVar2._0_8_ = SUB168(SEXT816(0x3ffff),8);
                          uVar24 = local_d8.st_blksize +
                                   (0x3ffff -
                                   SUB168((auVar2 << 0x40 | ZEXT816(0x3ffff)) %
                                          SEXT816(local_d8.st_blksize),0));
                          if ((local_d8.st_mode & 0xf000) != 0x8000) goto LAB_00103bf7;
                          if ((uVar24 - 1 & uVar24) == 0) goto LAB_001046ab;
                          lVar26 = 0x3f;
                          if (uVar24 != 0) {
                            for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                            }
                          }
                          *(undefined8 *)(puVar40 + -8) = 0x104f05;
                          psVar17 = (stat *)buffer_lcm(1L << ((char)lVar26 + 1U & 0x3f),psVar17,
                                                       0x7fffffffffffffff);
LAB_001046c4:
                          psVar47 = (stat *)((long)(__dev_t *)local_d8.st_size + 1);
                          if (local_380 <= (ulong)local_d8.st_size) {
                            psVar47 = local_380;
                          }
                        }
                        else {
                          uVar24 = 0x40000;
                          if ((local_d8.st_mode & 0xf000) == 0x8000) {
                            uVar24 = 0x40000;
LAB_001046ab:
                            *(undefined8 *)(puVar40 + -8) = 0x1046c1;
                            psVar17 = (stat *)buffer_lcm(uVar24,psVar17,0x7fffffffffffffff);
                            goto LAB_001046c4;
                          }
LAB_00103bf7:
                          *(undefined8 *)(puVar40 + -8) = 0x103c10;
                          psVar17 = (stat *)buffer_lcm(uVar24,psVar17,0x7fffffffffffffff);
                          psVar47 = local_380;
                        }
                        local_380 = psVar47;
                        puVar38 = (undefined1 *)((long)psVar17[-1].__unused + 0x17) +
                                  (long)local_380;
                        local_380 = (stat *)(puVar38 + -((ulong)puVar38 % (ulong)psVar17));
                        bVar49 = *(int *)((long)&(param_8->st_atim).tv_sec + 4) != 0;
                        if ((long)local_380 < 1) {
                          local_380 = psVar17;
                          if (iVar10 != 3) {
                            iVar10 = *(int *)((long)&param_8->st_ino + 4);
LAB_00103c6b:
                            local_3a0 = (stat *)0x0;
                            goto LAB_00103c76;
                          }
                          local_378 = (stat *)CONCAT44(local_378._4_4_,1);
                        }
                        else {
                          if (iVar10 != 3) {
                            iVar10 = *(int *)((long)&param_8->st_ino + 4);
                            goto LAB_00103c6b;
                          }
                          local_378 = (stat *)CONCAT44(local_378._4_4_,1);
                        }
LAB_0010479d:
                        local_312[0] = 0;
                        copy_debug._8_4_ = 3;
                        local_370 = (stat *)local_d8.st_size;
                        if ((long)psVar46 < 0) {
                          param_11 = (stat *)(ulong)(0 < local_d8.st_size);
                          psVar17 = (stat *)0x0;
                          local_360 = (stat *)0x0;
LAB_001049b9:
                          psVar47 = local_370;
                          bVar9 = (byte)psVar25;
                          if ((int)local_378 == 1) {
                            psVar19 = (stat *)((long)local_370 - (long)local_360);
                            if (zeros_3 == (undefined1 *)0x0) {
                              *(undefined8 *)(puVar40 + -8) = 0x105868;
                              zeros_3 = (undefined1 *)calloc((size_t)nz_2,1);
                              if (zeros_3 == (undefined1 *)0x0) {
                                nz_2 = (stat *)0x400;
                                zeros_3 = fallback_1;
                              }
                            }
                            bVar9 = (byte)psVar25;
                            psVar47 = psVar46;
                            if (psVar19 == (stat *)0x0) {
                              psVar19 = (stat *)0x0;
                            }
                            else {
                              do {
                                uVar24 = (ulong)local_358 & 0xffffffff;
                                param_11 = nz_2;
                                if (psVar19 <= nz_2) {
                                  param_11 = psVar19;
                                }
                                *(undefined8 *)(puVar40 + -8) = 0x10511c;
                                psVar46 = (stat *)full_write(uVar24,zeros_3,param_11);
                                bVar9 = (byte)psVar25;
                                if (param_11 != psVar46) goto LAB_00104703;
                                psVar19 = (stat *)((long)psVar19 - (long)param_11);
                              } while (psVar19 != (stat *)0x0);
                            }
                            goto LAB_00103cc3;
                          }
                          iVar10 = (int)local_358;
                          psVar19 = (stat *)((ulong)local_358 & 0xffffffff);
                          *(undefined8 *)(puVar40 + -8) = 0x1049df;
                          iVar12 = ftruncate(iVar10,(__off_t)psVar47);
                          psVar46 = local_360;
                          if (iVar12 == 0) {
                            if (((int)local_378 == 3) && ((char)param_11 != '\0')) {
                              psVar17 = (stat *)((long)psVar47 - (long)local_360);
                              *(undefined8 *)(puVar40 + -8) = 0x104a16;
                              iVar10 = fallocate(iVar10,3,(__off_t)psVar46,(__off_t)psVar17);
                              if (iVar10 < 0) {
                                *(undefined8 *)(puVar40 + -8) = 0x104a23;
                                param_11 = (stat *)__errno_location();
                                psVar46 = local_320;
                                iVar10 = (int)param_11->st_dev;
                                if ((iVar10 != 0x5f) && (iVar10 != 0x26)) {
                                  *(undefined8 *)(puVar40 + -8) = 0x104a4b;
                                  psVar19 = (stat *)quotearg_style(4,psVar46);
                                  pcVar16 = "error deallocating %s";
                                  goto LAB_001038cf;
                                }
                              }
                            }
                            goto LAB_00103cd2;
                          }
LAB_00104703:
                          psVar46 = local_320;
                          *(undefined8 *)(puVar40 + -8) = 0x104714;
                          psVar19 = (stat *)quotearg_style(4,psVar46);
                          pcVar16 = "failed to extend %s";
                        }
                        else {
                          param_11 = (stat *)0x0;
                          local_360 = (stat *)0x0;
                          local_3a8 = (undefined1 *)CONCAT44(local_3a8._4_4_,(uint)bVar49);
                          local_3d0 = param_8;
                          psVar44 = psVar25;
                          psVar30 = (stat *)0x0;
                          local_398 = param_1;
                          do {
                            psVar47 = psVar46;
                            iVar10 = (int)local_350;
                            *(undefined8 *)(puVar40 + -8) = 0x104803;
                            psVar46 = (stat *)lseek(iVar10,(__off_t)psVar47,4);
                            if ((long)psVar46 < 0) {
                              *(undefined8 *)(puVar40 + -8) = 0x104814;
                              piVar21 = __errno_location();
                              bVar9 = (byte)psVar44;
                              if (*piVar21 != 6) goto LAB_001056d6;
                              psVar46 = local_370;
                              if ((long)local_370 <= (long)psVar47) {
                                iVar10 = (int)local_350;
                                *(undefined8 *)(puVar40 + -8) = 0x104a72;
                                psVar25 = (stat *)lseek(iVar10,0,2);
                                bVar9 = (byte)psVar44;
                                if ((long)psVar25 < 0) goto LAB_001056d6;
                                psVar46 = psVar25;
                                local_370 = psVar25;
                                if ((long)psVar25 <= (long)psVar47) {
                                  param_11 = (stat *)CONCAT71((int7)((ulong)param_11 >> 8),
                                                              (long)local_360 < (long)psVar25);
                                  psVar19 = (stat *)(ulong)((uint)psVar19 | (uint)param_11);
                                  goto LAB_001049b0;
                                }
                              }
                            }
                            else if ((long)local_370 < (long)psVar46) {
                              local_370 = psVar46;
                            }
                            iVar10 = (int)local_350;
                            *(undefined8 *)(puVar40 + -8) = 0x104840;
                            _Var29 = lseek(iVar10,(__off_t)psVar47,0);
                            psVar25 = local_320;
                            psVar19 = nz_2;
                            bVar9 = (byte)psVar44;
                            if (_Var29 < 0) goto LAB_001056d6;
                            psVar17 = (stat *)((long)psVar47 + (-(long)param_11 - (long)psVar30));
                            if (psVar17 == (stat *)0x0) {
                              psVar19 = (stat *)0x0;
LAB_00104894:
                              param_11 = (stat *)((long)psVar46 - (long)psVar47);
                              psVar25 = (stat *)0x0;
                              if ((int)local_378 == 3) {
                                psVar25 = local_3a0;
                              }
                            }
                            else {
                              if ((int)local_378 != 1) {
                                bVar49 = (int)local_378 == 3;
                                uVar24 = (ulong)local_358 & 0xffffffff;
                                *(undefined8 *)(puVar40 + -8) = 0x104889;
                                uVar11 = create_hole(uVar24,psVar25,bVar49);
                                psVar19 = (stat *)(ulong)uVar11;
                                param_8 = local_3d0;
                                param_1 = local_398;
                                if ((char)uVar11 != '\0') goto LAB_00104894;
                                goto LAB_001038e7;
                              }
                              if (zeros_3 == (undefined1 *)0x0) {
                                *(undefined8 *)(puVar40 + -8) = 0x104c4b;
                                zeros_3 = (undefined1 *)calloc((size_t)nz_2,1);
                                if (zeros_3 != (undefined1 *)0x0) goto LAB_00104aaa;
                                nz_2 = (stat *)0x400;
                                zeros_3 = fallback_1;
                                psVar19 = (stat *)0x400;
                                uVar13 = (int)local_358;
                              }
                              else {
LAB_00104aaa:
                                uVar13 = (int)local_358;
                              }
                              do {
                                if (psVar17 <= psVar19) {
                                  psVar19 = psVar17;
                                }
                                *(undefined8 *)(puVar40 + -8) = 0x104add;
                                psVar30 = (stat *)full_write(uVar13,zeros_3,psVar19);
                                psVar25 = local_320;
                                param_1 = local_398;
                                param_8 = local_3d0;
                                bVar9 = (byte)psVar44;
                                if (psVar19 != psVar30) {
                                  *(undefined8 *)(puVar40 + -8) = 0x104b03;
                                  psVar19 = (stat *)quotearg_n_style_colon(0,3,psVar25);
                                  pcVar16 = "%s: write failed";
                                  goto LAB_00104723;
                                }
                                psVar17 = (stat *)((long)psVar17 - (long)psVar19);
                                psVar19 = nz_2;
                              } while (psVar17 != (stat *)0x0);
                              psVar19 = (stat *)0x0;
                              psVar25 = (stat *)0x0;
                              param_11 = (stat *)((long)psVar46 - (long)psVar47);
                            }
                            psVar17 = local_380;
                            uVar42 = (ulong)local_358 & 0xffffffff;
                            *(undefined1 **)(puVar40 + -8) = local_312 + 1;
                            uVar43 = (ulong)local_350 & 0xffffffff;
                            *(undefined1 **)(puVar40 + -0x10) = local_310 + 8;
                            uVar24 = (ulong)local_3a8 & 0xffffffff;
                            *(stat **)(puVar40 + -0x18) = param_11;
                            *(stat **)(puVar40 + -0x20) = local_320;
                            *(stat **)(puVar40 + -0x28) = local_398;
                            *(ulong *)(puVar40 + -0x30) = uVar24;
                            *(undefined8 *)(puVar40 + -0x38) = 0x1048f5;
                            cVar7 = sparse_copy(uVar43,uVar42,local_310,psVar17,psVar25,1);
                            bVar9 = (byte)psVar25;
                            param_8 = local_3d0;
                            param_1 = local_398;
                            if (cVar7 == '\0') goto LAB_001038e7;
                            psVar46 = (stat *)((long)psVar47->__unused + (local_310._8_8_ - 0x78));
                            if (local_310._8_8_ != 0) {
                              psVar19 = (stat *)(ulong)local_312[1];
                            }
                            local_360 = psVar46;
                            if ((long)local_310._8_8_ < (long)param_11) {
                              param_11 = (stat *)0x0;
                              local_370 = psVar46;
                              goto LAB_001049b0;
                            }
                            iVar10 = (int)local_350;
                            *(undefined8 *)(puVar40 + -8) = 0x104940;
                            psVar46 = (stat *)lseek(iVar10,(__off_t)psVar46,3);
                            psVar44 = psVar25;
                            psVar30 = psVar47;
                          } while (-1 < (long)psVar46);
                          *(undefined8 *)(puVar40 + -8) = 0x104985;
                          piVar21 = __errno_location();
                          bVar9 = (byte)psVar25;
                          if (*piVar21 == 6) {
                            param_11 = (stat *)CONCAT71((int7)((ulong)param_11 >> 8),
                                                        (long)local_360 < (long)local_370);
                            psVar19 = (stat *)(ulong)((uint)psVar19 | (uint)param_11);
LAB_001049b0:
                            bVar9 = (byte)psVar25;
                            param_8 = local_3d0;
                            param_1 = local_398;
                            psVar46 = psVar47;
                            if ((char)psVar19 == '\0') goto LAB_00103cd2;
                            goto LAB_001049b9;
                          }
LAB_001056d6:
                          param_1 = local_398;
                          param_8 = local_3d0;
                          *(undefined8 *)(puVar40 + -8) = 0x1056e3;
                          psVar19 = (stat *)quotearg_style(4,param_1);
                          pcVar16 = "cannot lseek %s";
                        }
LAB_00104723:
                        *(undefined8 *)(puVar40 + -8) = 0x10472a;
                        param_11 = (stat *)dcgettext(0,pcVar16,5);
                        *(undefined8 *)(puVar40 + -8) = 0x104732;
                        piVar21 = __errno_location();
                        iVar10 = *piVar21;
                        *(undefined8 *)(puVar40 + -8) = 0x104743;
                        psVar17 = psVar19;
                        error(0,iVar10,param_11);
                      }
                      goto LAB_001038e7;
                    }
                    local_168._24_8_ = local_168._24_8_ & 0xffffffff00000000;
                    psVar46 = psVar17;
                    if (*(char *)((long)&param_8->st_gid + 1) != '\0') {
LAB_00103f0f:
                      uVar11 = local_324;
                      psVar17 = local_348;
                      bVar9 = 0;
                      psVar46 = (stat *)(local_310 + 0x68);
                      uVar24 = (ulong)local_358 & 0xffffffff;
                      local_310._104_8_ = local_288.st_atim.tv_sec;
                      _Stack_2a0 = local_288.st_atim.tv_nsec;
                      local_298 = local_288.st_mtim.tv_sec;
                      uStack_290 = local_288.st_mtim.tv_nsec;
                      *(undefined8 *)(puVar40 + -8) = 0x103f4f;
                      iVar10 = fdutimensat(uVar24,uVar11,psVar17);
                      psVar17 = local_320;
                      if (iVar10 != 0) {
                        *(undefined8 *)(puVar40 + -8) = 0x103f68;
                        psVar19 = (stat *)quotearg_style(4,psVar17);
                        *(undefined8 *)(puVar40 + -8) = 0x103f7e;
                        param_11 = (stat *)dcgettext(0,"preserving times for %s",5);
                        *(undefined8 *)(puVar40 + -8) = 0x103f86;
                        piVar21 = __errno_location();
                        iVar10 = *piVar21;
                        *(undefined8 *)(puVar40 + -8) = 0x103f97;
                        psVar17 = psVar19;
                        error(0,iVar10,param_11);
                        psVar46 = psVar17;
                        if (*(char *)((long)&param_8->st_size + 2) != '\0') goto LAB_001038e7;
                      }
LAB_00103cde:
                      psVar17 = local_348;
                      if (*(char *)((long)&param_8->st_uid + 3) != '\0') {
                        uVar24 = (ulong)local_288.st_uid;
                        if (local_288.st_uid == local_168.st_uid) {
                          if (local_288.st_gid == local_168.st_gid) goto LAB_0010399f;
                        }
                        uVar42 = (ulong)local_3b8 & 0xffffffff;
                        uVar43 = (ulong)local_358 & 0xffffffff;
                        *(ulong *)(puVar40 + -8) = local_168._24_8_ & 0xffffffff;
                        psVar46 = local_320;
                        *(ulong *)(puVar40 + -0x10) = uVar42;
                        *(ulong *)(puVar40 + -0x18) = local_288._32_8_ & 0xffffffff;
                        uVar11 = local_324;
                        *(ulong *)(puVar40 + -0x20) = uVar24;
                        uVar24 = local_288._24_8_ & 0xffffffff;
                        *(undefined8 *)(puVar40 + -0x28) = 0x103d4a;
                        iVar10 = set_owner_isra_0(param_8,psVar46,uVar11,psVar17,uVar43,uVar24);
                        bVar9 = (byte)uVar43;
                        if (iVar10 == -1) goto LAB_001038e7;
                        uVar11 = (uint)local_3b0 & 0xfffff1ff;
                        if (iVar10 != 0) {
                          uVar11 = (uint)local_3b0;
                        }
                        local_3b0 = (stat *)CONCAT44(local_3b0._4_4_,uVar11);
                        psVar46 = psVar17;
                      }
                    }
LAB_0010399f:
                    psVar17 = psVar46;
                    psVar25 = local_320;
                    if (((char)param_8->st_gid == '\0') && ((char)param_8->st_mode == '\0')) {
                      uVar48 = (undefined7)((ulong)psVar47 >> 8);
                      if (*(char *)((long)&param_8->st_blksize + 1) == '\0') {
                        bVar32 = (byte)local_340 & *(byte *)((long)&param_8->st_gid + 2);
                        param_11 = (stat *)(ulong)bVar32;
                        if (bVar32 == 0) {
                          if (local_3c4 != 0 || local_3dc != 0) {
                            if (mask_0 == 0xffffffff) {
                              *(undefined8 *)(puVar40 + -8) = 0x1052ba;
                              _Var14 = umask(0);
                              param_11 = (stat *)(ulong)_Var14;
                              *(undefined8 *)(puVar40 + -8) = 0x1052c9;
                              mask_0 = _Var14;
                              umask(_Var14);
                              if ((~_Var14 & local_3dc) != 0 || local_3c4 != 0) {
                                param_11 = (stat *)(ulong)(_Var14 + 1);
                                if (_Var14 + 1 == 0) {
                                  *(undefined8 *)(puVar40 + -8) = 0x1052ed;
                                  mask_0 = umask(0);
                                  *(undefined8 *)(puVar40 + -8) = 0x1052fa;
                                  umask(mask_0);
                                }
                                goto LAB_00104e1f;
                              }
                            }
                            else if ((~mask_0 & local_3dc) != 0 || local_3c4 != 0) {
LAB_00104e1f:
                              iVar10 = (int)local_358;
                              psVar46 = (stat *)0x1;
                              uVar11 = (uint)local_3d8 & ~mask_0;
                              *(undefined8 *)(puVar40 + -8) = 0x104e3a;
                              iVar10 = fchmod(iVar10,uVar11);
                              psVar47 = local_320;
                              if (iVar10 != 0) {
                                *(undefined8 *)(puVar40 + -8) = 0x104e53;
                                psVar19 = (stat *)quotearg_style(4,psVar47);
                                *(undefined8 *)(puVar40 + -8) = 0x104e69;
                                param_11 = (stat *)dcgettext(0,"preserving permissions for %s",5);
                                *(undefined8 *)(puVar40 + -8) = 0x104e71;
                                piVar21 = __errno_location();
                                iVar10 = *piVar21;
                                *(undefined8 *)(puVar40 + -8) = 0x104e82;
                                psVar17 = psVar19;
                                error(0,iVar10,param_11);
                                goto LAB_00103aa8;
                              }
                              goto LAB_001038f0;
                            }
                          }
                          psVar46 = (stat *)0x1;
                        }
                        else {
                          if (mask_0 == 0xffffffff) {
                            *(undefined8 *)(puVar40 + -8) = 0x10518a;
                            mask_0 = umask(0);
                            *(undefined8 *)(puVar40 + -8) = 0x105197;
                            umask(mask_0);
                          }
                          psVar46 = local_320;
                          uVar24 = (ulong)local_358 & 0xffffffff;
                          *(undefined8 *)(puVar40 + -8) = 0x105068;
                          iVar10 = xset_acl(psVar46,uVar24,~mask_0 & 0x1b6);
                          local_340 = (stat *)CONCAT71(local_340._1_7_,bVar32);
                          psVar46 = (stat *)CONCAT71(uVar48,iVar10 == 0);
                        }
                      }
                      else {
                        _Var5 = param_8->st_nlink;
                        uVar24 = (ulong)local_358 & 0xffffffff;
                        *(undefined8 *)(puVar40 + -8) = 0x104c28;
                        iVar10 = xset_acl(psVar25,uVar24,(int)_Var5);
                        psVar46 = (stat *)CONCAT71(uVar48,iVar10 == 0);
                      }
                    }
                    else {
                      bVar9 = (byte)local_3b0;
                      psVar17 = (stat *)((ulong)local_358 & 0xffffffff);
                      psVar46 = (stat *)0x1;
                      uVar24 = (ulong)local_350 & 0xffffffff;
                      *(undefined8 *)(puVar40 + -8) = 0x103aa0;
                      iVar10 = xcopy_acl(param_1,uVar24,psVar25);
                      if (iVar10 != 0) {
LAB_00103aa8:
                        psVar46 = (stat *)(ulong)(*(byte *)((long)&param_8->st_size + 2) ^ 1);
                      }
                    }
                  }
                  else {
                    uVar11 = *(uint *)((long)&(param_8->st_atim).tv_sec + 4);
                    psVar25 = (stat *)(ulong)uVar11;
                    if (uVar11 == 0) goto LAB_001037bb;
                    uVar24 = (ulong)local_350 & 0xffffffff;
                    iVar10 = (int)local_358;
                    *(undefined8 *)(puVar40 + -8) = 0x103963;
                    iVar10 = ioctl(iVar10,0x40049409,uVar24);
                    if (iVar10 == 0) {
                      copy_debug._4_4_ = 2;
                      goto LAB_00103975;
                    }
                    *(undefined8 *)(puVar40 + -8) = 0x104d2a;
                    local_360 = (stat *)__errno_location();
                    uVar11 = *(uint *)((long)&(param_8->st_atim).tv_sec + 4);
                    psVar47 = (stat *)(ulong)uVar11;
                    uVar33 = (uint)local_360->st_dev;
                    if ((int)uVar33 < 0x1d) {
                      if ((4 < (int)uVar33) && ((0x10001020UL >> ((ulong)uVar33 & 0x3f) & 1) != 0))
                      goto LAB_00104d59;
LAB_00105082:
                      if (uVar11 != 2) {
                        copy_debug._4_4_ = 6;
                        goto LAB_001037bb;
                      }
                      *(undefined8 *)(puVar40 + -8) = 0x105425;
                      param_11 = (stat *)quotearg_n_style(1,4,param_1);
                      psVar46 = local_320;
                      *(undefined8 *)(puVar40 + -8) = 0x10543b;
                      psVar17 = (stat *)quotearg_n_style(0,4,psVar46);
                      *(undefined8 *)(puVar40 + -8) = 0x105451;
                      uVar15 = dcgettext(0,"failed to clone %s from %s",5);
                      _Var4 = local_360->st_dev;
                      *(undefined8 *)(puVar40 + -8) = 0x10546c;
                      psVar47 = param_11;
                      error(0,(int)_Var4,uVar15);
                      uVar11 = local_324;
                      psVar46 = local_348;
                      bVar9 = (byte)psVar47;
                      if ((byte)local_340 == '\0') {
                        copy_debug._4_4_ = 6;
                        goto LAB_001038e7;
                      }
                      *(undefined8 *)(puVar40 + -8) = 0x10548d;
                      iVar10 = unlinkat(uVar11,(char *)psVar46,0);
                      psVar46 = local_320;
                      if (iVar10 != 0) {
                        if ((int)local_360->st_dev == 2) {
                          copy_debug._4_4_ = 6;
                          psVar46 = (stat *)0x0;
                          goto LAB_001038f0;
                        }
                        *(undefined8 *)(puVar40 + -8) = 0x10555d;
                        param_11 = (stat *)quotearg_style(4,psVar46);
                        *(undefined8 *)(puVar40 + -8) = 0x105573;
                        uVar15 = dcgettext(0,"cannot remove %s",5);
                        _Var4 = local_360->st_dev;
                        *(undefined8 *)(puVar40 + -8) = 0x10558b;
                        psVar17 = param_11;
                        error(0,(int)_Var4,uVar15);
                      }
                      copy_debug._4_4_ = 6;
                    }
                    else {
                      if (uVar33 != 0x7a) goto LAB_00105082;
LAB_00104d59:
                      *(undefined8 *)(puVar40 + -8) = 0x104d6b;
                      param_11 = (stat *)quotearg_n_style(1,4,param_1);
                      psVar46 = local_320;
                      *(undefined8 *)(puVar40 + -8) = 0x104d81;
                      local_370 = (stat *)quotearg_n_style(0,4,psVar46);
                      *(undefined8 *)(puVar40 + -8) = 0x104d9b;
                      uVar15 = dcgettext(0,"failed to clone %s from %s",5);
                      psVar17 = local_370;
                      _Var4 = local_360->st_dev;
                      *(undefined8 *)(puVar40 + -8) = 0x104dba;
                      psVar46 = param_11;
                      error(0,(int)_Var4,uVar15);
                      bVar9 = (byte)psVar46;
                      if ((uVar11 != 2) || ((byte)local_340 == '\0')) goto LAB_001038e7;
                      iVar10 = (int)local_358;
                      *(undefined8 *)(puVar40 + -8) = 0x104de3;
                      _Var29 = lseek(iVar10,0,2);
                      uVar11 = local_324;
                      psVar46 = local_348;
                      if (_Var29 == 0) {
                        *(undefined8 *)(puVar40 + -8) = 0x10522e;
                        iVar10 = unlinkat(uVar11,(char *)psVar46,0);
                        psVar46 = local_320;
                        if ((iVar10 != 0) && ((int)local_360->st_dev != 2)) {
                          *(undefined8 *)(puVar40 + -8) = 0x105257;
                          param_11 = (stat *)quotearg_style(4,psVar46);
                          *(undefined8 *)(puVar40 + -8) = 0x10526d;
                          uVar15 = dcgettext(0,"cannot remove %s",5);
                          _Var4 = local_360->st_dev;
                          *(undefined8 *)(puVar40 + -8) = 0x105285;
                          psVar17 = param_11;
                          error(0,(int)_Var4,uVar15);
                        }
                      }
                    }
                    local_340 = (stat *)CONCAT71(local_340._1_7_,bVar32);
LAB_001038e7:
                    psVar46 = (stat *)0x0;
                  }
LAB_001038f0:
                  iVar10 = (int)local_358;
                  *(undefined8 *)(puVar40 + -8) = 0x1038fb;
                  iVar10 = close(iVar10);
                  psVar47 = local_320;
                  if (iVar10 < 0) {
                    *(undefined8 *)(puVar40 + -8) = 0x103914;
                    psVar19 = (stat *)quotearg_style(4,psVar47);
                    pcVar16 = "failed to close %s";
                    goto LAB_00103923;
                  }
                }
                else {
LAB_0010281f:
                  uVar11 = local_324;
                  psVar46 = local_348;
                  uVar24 = (ulong)((uint)local_3d8 & ~local_3bc);
                  local_360 = (stat *)CONCAT44(local_360._4_4_,(uint)local_3d8 & ~local_3bc);
                  *(undefined8 *)(puVar40 + -8) = 0x102852;
                  uVar13 = openat_safer(uVar11,psVar46,0xc1,uVar24);
                  local_358 = (stat *)CONCAT44(local_358._4_4_,uVar13);
                  *(undefined8 *)(puVar40 + -8) = 0x10285d;
                  psVar25 = (stat *)__errno_location();
                  uVar33 = local_324;
                  psVar46 = local_348;
                  uVar11 = (uint)psVar25->st_dev;
                  bVar9 = (byte)((ulong)local_358 >> 0x18) >> 7;
                  bVar31 = uVar11 == 0x11 & bVar9;
                  psVar17 = (stat *)CONCAT71((int7)(uVar24 >> 8),bVar31);
                  if (bVar31 == 0) {
LAB_001042fd:
                    psVar46 = local_320;
                    psVar47 = (stat *)(ulong)uVar11;
                    bVar9 = uVar11 == 0x15 & bVar9;
                    local_340 = (stat *)CONCAT71(local_340._1_7_,bVar9);
                    if (bVar9 == 0) {
                      if (-1 < (int)local_358) {
                        local_3dc = local_3bc;
                        local_340 = (stat *)CONCAT71(local_340._1_7_,1);
                        local_3b8 = (undefined8 *)CONCAT44(local_3b8._4_4_,1);
                        goto LAB_001037a4;
                      }
                      local_340 = (stat *)CONCAT71(local_340._1_7_,1);
                    }
                    else {
                      psVar47 = (stat *)0x15;
                      if ((char)local_320->st_dev != '\0') {
                        *(undefined8 *)(puVar40 + -8) = 0x10432f;
                        sVar28 = strlen((char *)psVar46);
                        psVar47 = (stat *)(ulong)((*(char *)((long)psVar46->__unused +
                                                            (sVar28 - 0x79)) != '/') + 0x14);
                      }
                    }
LAB_00102897:
                    psVar46 = local_320;
                    bVar9 = (byte)psVar25;
                    *(undefined8 *)(puVar40 + -8) = 0x1028a8;
                    param_11 = (stat *)quotearg_style(4,psVar46);
                    *(undefined8 *)(puVar40 + -8) = 0x1028be;
                    uVar15 = dcgettext(0,"cannot create regular file %s",5);
                    psVar46 = (stat *)0x0;
                    *(undefined8 *)(puVar40 + -8) = 0x1028d3;
                    psVar17 = param_11;
                    error(0,psVar47,uVar15);
                  }
                  else {
                    cVar7 = (char)param_8->st_mode;
                    psVar47 = (stat *)0x11;
                    local_340 = (stat *)CONCAT71(local_340._1_7_,cVar7);
                    if (cVar7 != '\0') goto LAB_00102897;
                    local_340 = (stat *)CONCAT71(local_340._1_7_,bVar31);
                    local_370 = psVar25;
                    *(undefined8 *)(puVar40 + -8) = 0x1042a9;
                    sVar27 = readlinkat(uVar33,(char *)psVar46,&local_41,1);
                    psVar17 = local_320;
                    uVar11 = local_324;
                    psVar44 = local_348;
                    bVar9 = (byte)psVar25;
                    cVar7 = (byte)local_340;
                    if (sVar27 < 0) goto LAB_00103fc9;
                    bVar31 = *(byte *)((long)&param_8->st_blocks + 4);
                    psVar46 = (stat *)(ulong)bVar31;
                    if (bVar31 != 0) {
                      psVar17 = (stat *)((ulong)local_360 & 0xffffffff);
                      *(undefined8 *)(puVar40 + -8) = 0x1042e8;
                      uVar13 = openat_safer(uVar11,psVar44,0x41);
                      local_358 = (stat *)CONCAT44(local_358._4_4_,uVar13);
                      bVar9 = (byte)((uint)uVar13 >> 0x1f);
                      uVar11 = (uint)local_370->st_dev;
                      psVar25 = local_370;
                      goto LAB_001042fd;
                    }
                    *(undefined8 *)(puVar40 + -8) = 0x1057d1;
                    param_11 = (stat *)quotearg_style(4,psVar17);
                    *(undefined8 *)(puVar40 + -8) = 0x1057e7;
                    uVar15 = dcgettext(0,"not writing through dangling symlink %s",5);
                    *(undefined8 *)(puVar40 + -8) = 0x1057f8;
                    psVar17 = param_11;
                    error(0,0,uVar15);
                  }
                }
              }
              else {
                *(undefined8 *)(puVar40 + -8) = 0x10597d;
                psVar19 = (stat *)quotearg_style(4,param_1);
                pcVar16 = "cannot fstat %s";
LAB_00103923:
                *(undefined8 *)(puVar40 + -8) = 0x10392a;
                param_11 = (stat *)dcgettext(0,pcVar16,5);
                *(undefined8 *)(puVar40 + -8) = 0x103932;
                piVar21 = __errno_location();
                iVar10 = *piVar21;
                *(undefined8 *)(puVar40 + -8) = 0x103943;
                psVar17 = psVar19;
                error(0,iVar10,param_11);
LAB_00103943:
                psVar46 = (stat *)0x0;
              }
              iVar10 = (int)local_350;
              *(undefined8 *)(puVar40 + -8) = 0x1028e3;
              iVar10 = close(iVar10);
              uVar15 = local_310._0_8_;
              if (iVar10 < 0) {
                *(undefined8 *)(puVar40 + -8) = 0x10567c;
                psVar19 = (stat *)quotearg_style(4,param_1);
                *(undefined8 *)(puVar40 + -8) = 0x105692;
                param_11 = (stat *)dcgettext(0,"failed to close %s",5);
                *(undefined8 *)(puVar40 + -8) = 0x10569a;
                piVar21 = __errno_location();
                iVar10 = *piVar21;
                *(undefined8 *)(puVar40 + -8) = 0x1056ab;
                psVar17 = psVar19;
                error(0,iVar10,param_11);
                uVar15 = local_310._0_8_;
                if ((((*(char *)((long)&param_8->st_blocks + 2) == '\0') ||
                     (*(char *)((long)&param_8->st_nlink + 7) != '\0')) ||
                    (bVar32 = *(byte *)((long)&param_8->st_blksize + 2),
                    psVar46 = (stat *)(ulong)bVar32, bVar32 != 0)) ||
                   (*(char *)((long)&param_8->st_size + 1) == '\0')) {
                  *(undefined8 *)(puVar40 + -8) = 0x1056c3;
                  free((void *)uVar15);
                  goto LAB_001016c0;
                }
LAB_00103da6:
                    /* WARNING: Could not recover jumptable at 0x00103dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar24 = (*(code *)((long)&DAT_00106dd0 +
                                   (long)(int)(&DAT_00106dd0)[(uint)copy_debug._8_4_]))();
                return uVar24;
              }
              if (((*(char *)((long)&param_8->st_blocks + 2) != '\0') &&
                  (*(char *)((long)&param_8->st_nlink + 7) == '\0')) &&
                 ((*(char *)((long)&param_8->st_blksize + 2) == '\0' &&
                  (*(char *)((long)&param_8->st_size + 1) != '\0')))) goto LAB_00103da6;
              *(undefined8 *)(puVar40 + -8) = 0x102903;
              free((void *)uVar15);
              bVar32 = (byte)psVar46;
              if (bVar32 == 0) goto LAB_001016c0;
              local_3c4 = CONCAT31(local_3c4._1_3_,bVar32);
              psVar19 = (stat *)0x0;
              param_11 = (stat *)0x0;
            }
            else {
              bVar9 = *(byte *)((long)&param_8->st_nlink + 4);
              psVar25 = (stat *)(ulong)bVar9;
              if (bVar9 == 0) {
                if ((uint)local_390 == 0x1000) {
                  local_350 = (stat *)((ulong)local_350._1_7_ << 8);
                  uVar34 = ~local_3bc & local_328;
                  *(undefined8 *)(puVar40 + -8) = 0x104043;
                  iVar10 = mknodat(uVar33,(char *)psVar47,uVar34,0);
                  uVar11 = local_324;
                  psVar19 = local_348;
                  bVar32 = (byte)local_350;
                  if (iVar10 != 0) {
                    *(undefined8 *)(puVar40 + -8) = 0x104b4f;
                    iVar10 = mkfifoat(uVar11,(char *)psVar19,uVar34 & 0xffffefff);
                    psVar19 = local_320;
                    bVar9 = (byte)local_350;
                    bVar32 = (byte)local_350;
                    if (iVar10 != 0) {
                      *(undefined8 *)(puVar40 + -8) = 0x104b70;
                      psVar19 = (stat *)quotearg_style(4,psVar19);
                      pcVar16 = "cannot create fifo %s";
                      goto LAB_00104b7f;
                    }
                  }
                  local_3bd = '\0';
                  psVar19 = (stat *)0x0;
                  param_11 = (stat *)0x0;
                  psVar46 = (stat *)0x1;
                  local_3c4 = CONCAT31(local_3c4._1_3_,1);
                }
                else {
                  local_350 = (stat *)((ulong)local_350._1_7_ << 8);
                  bVar49 = ((uint)local_390 & 0xffffbfff) == 0x2000;
                  psVar46 = (stat *)(CONCAT71((int7)(in_R10 >> 8),
                                              bVar49 || (uint)local_390 == 0xc000) & 0xffffffff);
                  if (!bVar49 && (uint)local_390 != 0xc000) {
                    if ((uint)local_390 != 0xa000) {
                      *(undefined8 *)(puVar40 + -8) = 0x104628;
                      param_11 = (stat *)quotearg_style(4,param_1);
                      pcVar16 = "%s has unknown file type";
                      goto LAB_001016a4;
                    }
                    goto LAB_00103ab7;
                  }
                  uVar11 = ~local_3bc & local_328;
                  *(undefined8 *)(puVar40 + -8) = 0x103403;
                  uVar11 = mknodat(uVar33,(char *)psVar47,uVar11,_Var4);
                  psVar17 = local_320;
                  bVar9 = (byte)local_350;
                  param_11 = (stat *)(ulong)uVar11;
                  if (uVar11 != 0) {
                    *(undefined8 *)(puVar40 + -8) = 0x1058fe;
                    psVar19 = (stat *)quotearg_style(4,psVar17);
                    pcVar16 = "cannot create special file %s";
                    goto LAB_00104b7f;
                  }
                  local_3c4 = CONCAT31(local_3c4._1_3_,(char)psVar46);
                  bVar32 = (byte)local_350;
                }
              }
              else {
                if ((uint)local_390 != 0xa000) goto LAB_001026df;
LAB_00103ab7:
                *(undefined8 *)(puVar40 + -8) = 0x103ac6;
                psVar19 = (stat *)areadlink_with_size(param_1,_Var29);
                uVar11 = local_324;
                psVar47 = local_348;
                if (psVar19 == (stat *)0x0) {
                  *(undefined8 *)(puVar40 + -8) = 0x10531e;
                  psVar19 = (stat *)quotearg_style(4,param_1);
                  pcVar16 = "cannot read symbolic link %s";
                  goto LAB_00104b7f;
                }
                psVar17 = (stat *)(ulong)*(byte *)((long)&param_8->st_nlink + 6);
                bVar9 = 0xff;
                *(undefined8 *)(puVar40 + -8) = 0x103af3;
                uVar11 = force_symlinkat(psVar19,uVar11,psVar47);
                param_11 = (stat *)(ulong)uVar11;
                if (0 < (int)uVar11) {
                  if (((*(int *)((long)&param_8->st_blksize + 4) != 1) || ((byte)local_340 != '\0'))
                     || ((local_1f8.st_mode & 0xf000) != 0xa000)) {
LAB_00103b09:
                    *(undefined8 *)(puVar40 + -8) = 0x103b11;
                    free(psVar19);
                    psVar19 = local_320;
                    *(undefined8 *)(puVar40 + -8) = 0x103b22;
                    psVar19 = (stat *)quotearg_style(4,psVar19);
                    *(undefined8 *)(puVar40 + -8) = 0x103b38;
                    uVar15 = dcgettext(0,"cannot create symbolic link %s",5);
                    *(undefined8 *)(puVar40 + -8) = 0x103b49;
                    psVar17 = psVar19;
                    error(0,uVar11,uVar15);
                    goto LAB_001016c0;
                  }
                  *(undefined8 *)(puVar40 + -8) = 0x10447a;
                  psVar25 = (stat *)strlen((char *)psVar19);
                  uVar33 = local_324;
                  psVar47 = local_348;
                  psVar46 = (stat *)local_1f8.st_size;
                  if ((stat *)local_1f8.st_size != psVar25) goto LAB_00103b09;
                  *(undefined8 *)(puVar40 + -8) = 0x104498;
                  psVar46 = (stat *)areadlinkat_with_size(uVar33,psVar47,local_1f8.st_size);
                  if (psVar46 == (stat *)0x0) goto LAB_00103b09;
                  *(undefined8 *)(puVar40 + -8) = 0x1044af;
                  iVar10 = strcmp((char *)psVar46,(char *)psVar19);
                  if (iVar10 != 0) {
                    *(undefined8 *)(puVar40 + -8) = 0x1053be;
                    free(psVar46);
                    goto LAB_00103b09;
                  }
                  *(undefined8 *)(puVar40 + -8) = 0x1044bf;
                  free(psVar46);
                }
                *(undefined8 *)(puVar40 + -8) = 0x1044c7;
                free(psVar19);
                uVar11 = local_324;
                psVar47 = local_348;
                local_3bd = *(char *)((long)&param_8->st_size + 3);
                if (local_3bd != '\0') goto LAB_00103166;
                if (*(char *)((long)&param_8->st_uid + 3) != '\0') {
                  __group = local_288.st_gid;
                  __owner = local_288.st_uid;
                  bVar9 = 0;
                  *(undefined8 *)(puVar40 + -8) = 0x1045a4;
                  iVar10 = fchownat(uVar11,(char *)psVar47,__owner,__group,0x100);
                  if (iVar10 != 0) {
                    *(undefined8 *)(puVar40 + -8) = 0x1045b1;
                    param_11 = (stat *)__errno_location();
                    uVar11 = (uint)param_11->st_dev;
                    if (((0x16 < uVar11) || ((0x402002UL >> ((ulong)uVar11 & 0x3f) & 1) == 0)) ||
                       ((char)param_8->st_uid != '\0')) {
                      *(undefined8 *)(puVar40 + -8) = 0x1045e5;
                      uVar15 = dcgettext(0,"failed to preserve ownership for %s",5);
                      psVar17 = local_320;
                      _Var4 = param_11->st_dev;
                      *(undefined8 *)(puVar40 + -8) = 0x1045fa;
                      error(0,(int)_Var4,uVar15);
                      if (*(char *)((long)&param_8->st_size + 2) != '\0') goto LAB_001016c0;
                    }
                  }
                }
                local_3c4 = CONCAT31(local_3c4._1_3_,1);
                param_11 = (stat *)0x100;
                psVar19 = (stat *)0x1;
                local_390 = (stat *)CONCAT44(local_390._4_4_,0xa000);
                psVar46 = (stat *)0x1;
                bVar32 = 0;
              }
            }
          }
          else {
            uVar24 = 1;
            if (*(char *)((long)&param_8->st_nlink + 6) == '\0') {
              uVar24 = (ulong)((int)param_8->st_ino == 3);
            }
            uVar42 = (ulong)local_324;
            *(ulong *)(puVar40 + -0x10) = (ulong)local_370 & 0xffffffff;
            psVar17 = local_320;
            *(undefined8 *)(puVar40 + -0x18) = 0;
            *(ulong *)(puVar40 + -0x20) = uVar24;
            *(undefined8 *)(puVar40 + -0x28) = 0x1023e8;
            uVar11 = create_hard_link(param_1,0xffffff9c,param_1,psVar17,uVar42,psVar47);
            psVar46 = (stat *)(ulong)uVar11;
            bVar9 = (byte)uVar42;
            if ((char)uVar11 == '\0') goto LAB_001016c0;
            local_3c4 = CONCAT31(local_3c4._1_3_,(char)uVar11);
            param_11 = (stat *)0x0;
            local_3bd = '\0';
            bVar32 = 0;
          }
        }
        else {
          if ((char)param_1->st_dev != '/') {
            *(undefined8 *)(puVar40 + -8) = 0x1011c8;
            pcVar16 = (char *)dir_name(psVar47);
            if (((local_324 != 0xffffff9c) || (*pcVar16 != '.')) || (pcVar16[1] != '\0')) {
              *(undefined8 *)(puVar40 + -8) = 0x101c03;
              iVar10 = stat(".",&local_168);
              uVar11 = local_324;
              if (iVar10 == 0) {
                *(undefined8 *)(puVar40 + -8) = 0x101c22;
                iVar10 = fstatat(uVar11,pcVar16,&local_d8,0);
                if ((iVar10 == 0) &&
                   (local_168.st_dev != local_d8.st_dev || local_168.st_ino != local_d8.st_ino)) {
                  *(undefined8 *)(puVar40 + -8) = 0x101c57;
                  free(pcVar16);
                  psVar17 = local_320;
                  *(undefined8 *)(puVar40 + -8) = 0x101c6a;
                  param_11 = (stat *)quotearg_n_style_colon(0,3,psVar17);
                  pcVar16 = "%s: can make relative symbolic links only in current directory";
LAB_001016a4:
                  *(undefined8 *)(puVar40 + -8) = 0x1016ab;
                  uVar15 = dcgettext(0,pcVar16,5);
                  *(undefined8 *)(puVar40 + -8) = 0x1016bc;
                  psVar17 = param_11;
                  error(0,0,uVar15);
                  goto LAB_001016c0;
                }
              }
            }
            *(undefined8 *)(puVar40 + -8) = 0x1011f3;
            free(pcVar16);
          }
          uVar11 = local_324;
          psVar17 = local_348;
          uVar45 = *(undefined1 *)((long)&param_8->st_nlink + 6);
          *(undefined8 *)(puVar40 + -8) = 0x101214;
          uVar11 = force_symlinkat(param_1,uVar11,psVar17,uVar45);
          param_11 = (stat *)(ulong)uVar11;
          if (0 < (int)uVar11) {
            *(undefined8 *)(puVar40 + -8) = 0x1058a8;
            psVar19 = (stat *)quotearg_n_style(1,4,param_1);
            psVar17 = local_320;
            bVar9 = (byte)psVar19;
            *(undefined8 *)(puVar40 + -8) = 0x1058be;
            param_1 = (stat *)quotearg_n_style(0,4,psVar17);
            *(undefined8 *)(puVar40 + -8) = 0x1058d4;
            uVar15 = dcgettext(0,"cannot create symbolic link %s to %s",5);
            *(undefined8 *)(puVar40 + -8) = 0x1058e8;
            psVar17 = param_1;
            error(0,uVar11,uVar15);
            goto LAB_001016c0;
          }
          local_3c4 = CONCAT31(local_3c4._1_3_,bVar32);
          param_11 = (stat *)0x100;
          local_3bd = '\0';
          psVar46 = psVar19;
          bVar32 = 0;
        }
LAB_00101237:
        iVar10 = (int)param_11;
        cVar7 = (char)psVar19;
        if (((byte)local_340 == '\0') && (*(char *)((long)&param_8->st_nlink + 4) == '\0')) {
          if ((uint)local_390 == 0x4000) {
            if (((byte)local_330 != '\0') && ((param_8->st_atim).tv_nsec != 0)) goto LAB_00101c91;
          }
          else {
            if ((param_8->st_rdev != 0) || (*(char *)((long)&param_8->st_size + 3) != '\0')) {
              local_358 = (stat *)CONCAT71(local_358._1_7_,bVar32);
              local_350 = (stat *)CONCAT71(local_350._1_7_,
                                           *(undefined1 *)((long)&param_8->st_size + 1));
              *(undefined8 *)(puVar41 + -8) = 0x101284;
              psVar17 = (stat *)__errno_location();
              puVar37 = puVar41;
              if (((byte)local_350 == '\0') || (*(char *)((long)&param_8->st_size + 4) != '\0')) {
                while( true ) {
                  psVar47 = local_320;
                  iVar10 = (int)param_11;
                  cVar7 = (char)psVar19;
                  *(undefined4 *)&psVar17->st_dev = 0x5f;
                  local_360 = (stat *)CONCAT71(local_360._1_7_,(byte)local_358);
                  local_358 = psVar17;
                  *(undefined8 *)(puVar37 + -8) = 0x103197;
                  local_350 = (stat *)quotearg_n_style(0,4,psVar47);
                  *(undefined8 *)(puVar37 + -8) = 0x1031b1;
                  uVar15 = dcgettext(0,"failed to set the security context of %s",5);
                  psVar17 = local_350;
                  _Var4 = local_358->st_dev;
                  *(undefined8 *)(puVar37 + -8) = 0x1031cd;
                  error(0,(int)_Var4,uVar15);
                  puVar41 = puVar37;
                  bVar32 = (byte)local_360;
                  bVar9 = (byte)local_360;
                  if (*(char *)((long)&param_8->st_size + 4) == '\0') break;
LAB_001016c0:
                  _Var6 = local_288.st_ino;
                  _Var4 = local_288.st_dev;
                  puVar40 = puVar37;
                  if (*(char *)((long)&param_8->st_size + 3) == '\0') {
                    if (local_388 == (stat *)0x0) {
                      *(undefined8 *)(puVar37 + -8) = 0x1016e9;
                      forget_created(_Var6,_Var4);
                    }
                    goto LAB_001016f0;
                  }
LAB_00103166:
                  *(undefined8 *)(puVar40 + -8) = 0x10316b;
                  copy_internal_cold();
                  local_358._0_1_ = bVar9;
                  puVar37 = puVar40;
                }
              }
              else {
                *(undefined4 *)&psVar17->st_dev = 0x5f;
                bVar32 = (byte)local_358;
              }
            }
            if ((byte)local_330 != '\0') goto LAB_00101c89;
            if (*(char *)((long)&param_8->st_nlink + 7) != '\0') goto LAB_00101a42;
          }
        }
        else {
          if ((byte)local_330 != '\0') {
LAB_00101c89:
            if ((param_8->st_atim).tv_nsec != 0) {
LAB_00101c91:
              uVar11 = local_324;
              psVar19 = local_338;
              local_350 = (stat *)CONCAT71(local_350._1_7_,bVar32);
              local_330 = &local_d8;
              *(undefined8 *)(puVar41 + -8) = 0x101cbd;
              iVar12 = fstatat(uVar11,(char *)psVar19,&local_d8,0x100);
              psVar17 = local_330;
              psVar19 = local_348;
              bVar32 = (byte)local_350;
              if (iVar12 == 0) {
                lVar26 = (param_8->st_atim).tv_nsec;
                local_330 = (stat *)CONCAT71(local_330._1_7_,(byte)local_350);
                *(undefined8 *)(puVar41 + -8) = 0x103278;
                record_file(lVar26,psVar19,psVar17);
                bVar32 = (byte)local_330;
              }
            }
          }
          if ((*(char *)((long)&param_8->st_nlink + 7) != '\0') && ((uint)local_390 != 0x4000))
          goto LAB_00101a42;
        }
        uVar11 = local_324;
        psVar19 = local_338;
        if (bVar32 != 0) goto LAB_00101a42;
        if (*(char *)((long)&param_8->st_gid + 1) != '\0') {
          local_d8.st_dev = local_288.st_atim.tv_sec;
          local_d8.st_ino = local_288.st_atim.tv_nsec;
          local_d8.st_nlink = local_288.st_mtim.tv_sec;
          local_d8.st_mode = (undefined4)local_288.st_mtim.tv_nsec;
          local_d8.st_uid = local_288.st_mtim.tv_nsec._4_4_;
          *(undefined8 *)(puVar41 + -8) = 0x101d36;
          iVar10 = utimensat(uVar11,(char *)psVar19,(timespec *)&local_d8,iVar10);
          psVar19 = local_320;
          if (iVar10 != 0) {
            *(undefined8 *)(puVar41 + -8) = 0x105627;
            local_330 = (stat *)quotearg_style(4,psVar19);
            *(undefined8 *)(puVar41 + -8) = 0x105641;
            uVar15 = dcgettext(0,"preserving times for %s",5);
            *(undefined8 *)(puVar41 + -8) = 0x105649;
            piVar21 = __errno_location();
            psVar19 = local_330;
            iVar10 = *piVar21;
            *(undefined8 *)(puVar41 + -8) = 0x10565e;
            error(0,iVar10,uVar15,psVar19);
            if (*(char *)((long)&param_8->st_size + 2) != '\0') goto LAB_001025d5;
          }
        }
        psVar17 = local_320;
        uVar11 = local_324;
        psVar19 = local_338;
        if (cVar7 != '\0') goto LAB_00101a42;
        uVar33 = local_328;
        if ((*(char *)((long)&param_8->st_uid + 3) != '\0') &&
           ((((byte)local_340 != '\0' || (local_288.st_uid != local_1f8.st_uid)) ||
            (local_288.st_gid != local_1f8.st_gid)))) {
          *(ulong *)(puVar41 + -8) = (ulong)local_1f8.st_mode;
          *(ulong *)(puVar41 + -0x10) = (ulong)local_340 & 0xff;
          *(ulong *)(puVar41 + -0x18) = local_288._32_8_ & 0xffffffff;
          *(ulong *)(puVar41 + -0x20) = (ulong)local_288._24_8_ >> 0x20;
          uVar24 = local_288._24_8_ & 0xffffffff;
          *(undefined8 *)(puVar41 + -0x28) = 0x101db4;
          iVar10 = set_owner_isra_0(param_8,psVar17,uVar11,psVar19,0xffffffff,uVar24);
          if (iVar10 == -1) goto LAB_001025d5;
          uVar33 = local_328 & 0xfffff1ff;
          if (iVar10 != 0) {
            uVar33 = local_328;
          }
        }
        local_328 = uVar33;
        psVar19 = local_320;
        uVar11 = local_328;
        if (((char)param_8->st_gid == '\0') && ((char)param_8->st_mode == '\0')) {
          if (*(char *)((long)&param_8->st_blksize + 1) == '\0') {
            if ((*(char *)((long)&param_8->st_gid + 2) == '\0') || ((byte)local_340 == '\0')) {
              if (local_3bc == 0) {
LAB_00101e1e:
                if (local_3bd == '\0') goto LAB_00101a42;
              }
              else {
                uVar11 = mask_0;
                if (mask_0 == 0xffffffff) {
                  *(undefined8 *)(puVar41 + -8) = 0x104f58;
                  uVar11 = umask(0);
                  *(undefined8 *)(puVar41 + -8) = 0x104f67;
                  mask_0 = uVar11;
                  umask(uVar11);
                }
                uVar33 = local_324;
                psVar19 = local_338;
                local_3bc = local_3bc & ~uVar11;
                if ((local_3bc == 0) || ((char)local_3c4 == '\0')) goto LAB_00101e1e;
                if ((byte)local_340 != '\0') {
                  *(undefined8 *)(puVar41 + -8) = 0x104fee;
                  iVar10 = fstatat(uVar33,(char *)psVar19,&local_1f8,0x100);
                  param_11 = local_320;
                  if (iVar10 != 0) goto LAB_00104ffd;
                }
                local_3c8 = local_1f8.st_mode;
                if ((local_3bc & ~local_1f8.st_mode) == 0) goto LAB_00101a42;
              }
              uVar11 = local_324;
              psVar19 = local_338;
              uVar33 = local_3c8 | local_3bc;
              *(undefined8 *)(puVar41 + -8) = 0x101e50;
              iVar10 = fchmodat(uVar11,(char *)psVar19,uVar33,0x100);
              psVar19 = local_320;
              if (iVar10 == 0) goto LAB_00101a42;
              *(undefined8 *)(puVar41 + -8) = 0x101e69;
              uVar15 = quotearg_style(4,psVar19);
              *(undefined8 *)(puVar41 + -8) = 0x101e7f;
              uVar22 = dcgettext(0,"preserving permissions for %s",5);
              *(undefined8 *)(puVar41 + -8) = 0x101e87;
              piVar21 = __errno_location();
              iVar10 = *piVar21;
              *(undefined8 *)(puVar41 + -8) = 0x101e98;
              error(0,iVar10,uVar22,uVar15);
              goto LAB_00101ea0;
            }
            uVar11 = 0x1b6;
            if ((local_328 & 0x7000) == 0x4000) {
              uVar11 = 0x1ff;
              if ((uint)local_390 == 0x4000) {
                uVar11 = local_1f8.st_mode & 0x400 | 0x1ff;
              }
            }
            uVar33 = mask_0;
            if (mask_0 == 0xffffffff) {
              *(undefined8 *)(puVar41 + -8) = 0x104f23;
              uVar33 = umask(0);
              *(undefined8 *)(puVar41 + -8) = 0x104f32;
              mask_0 = uVar33;
              umask(uVar33);
            }
            uVar11 = ~uVar33 & uVar11;
          }
          else {
            uVar11 = (uint)param_8->st_nlink;
          }
          psVar19 = local_320;
          *(undefined8 *)(puVar41 + -8) = 0x103b64;
          iVar10 = xset_acl(psVar19,0xffffffff,uVar11);
          if (iVar10 == 0) goto LAB_00101a42;
        }
        else {
          *(undefined8 *)(puVar41 + -8) = 0x101ed8;
          iVar10 = xcopy_acl(param_1,0xffffffff,psVar19,0xffffffff,uVar11);
          if (iVar10 == 0) goto LAB_00101a42;
LAB_00101ea0:
          if (*(char *)((long)&param_8->st_size + 2) == '\0') goto LAB_00101a42;
        }
      }
    }
  }
LAB_001025d5:
  psVar46 = (stat *)0x0;
LAB_00101a42:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)psVar46 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar41 + -8) = 0x105170;
  __stack_chk_fail();
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


