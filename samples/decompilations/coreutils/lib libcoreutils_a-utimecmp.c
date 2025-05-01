
/* WARNING: Unknown calling convention */

size_t dev_info_hash(void *x,size_t table_size)

{
                    /* WARNING: Load size is inaccurate */
  return *x % table_size;
}



/* WARNING: Unknown calling convention */

_Bool dev_info_compare(void *x,void *y)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return *x == *y;
}



/* WARNING: Unknown calling convention */

int utimecmpat(int dfd,char *dst_name,stat *dst_stat,stat *src_stat,int options)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  Hash_table *pHVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  fs_res *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  ulong local_150;
  fs_res *local_148;
  uint local_128;
  fs_res tmp_dst_res;
  timespec timespec [2];
  stat dst_status;
  
  uVar1 = (dst_stat->st_mtim).tv_sec;
  uVar2 = (src_stat->st_mtim).tv_sec;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  bVar21 = uVar1 == uVar2;
  iVar19 = (int)(src_stat->st_mtim).tv_nsec;
  uVar14 = options & 1;
  iVar18 = (int)(dst_stat->st_mtim).tv_nsec;
  uVar20 = uVar2;
  if (uVar14 != 0) {
    bVar6 = iVar18 == iVar19 && bVar21;
    local_150 = (ulong)bVar6;
    if (bVar6) {
      uVar14 = 0;
      goto LAB_00100174;
    }
    if ((long)uVar1 < (long)(uVar2 - 1)) {
LAB_001001a8:
      uVar14 = 0xffffffff;
      goto LAB_00100174;
    }
    if ((long)uVar2 < (long)(uVar1 - 1)) goto LAB_00100174;
    if ((utimecmpat::lexical_block_10::ht == (Hash_table *)0x0) &&
       (utimecmpat::lexical_block_10::ht =
             (Hash_table *)hash_initialize(0x10,0,0x100000,dev_info_compare,&free),
       utimecmpat::lexical_block_10::ht == (Hash_table *)0x0)) {
LAB_001001fd:
      local_148 = &tmp_dst_res;
      tmp_dst_res.resolution = 2000000000;
      tmp_dst_res.exact = false;
      iVar8 = 2000000000;
    }
    else {
      pHVar5 = utimecmpat::lexical_block_10::ht;
      pfVar9 = utimecmpat::lexical_block_10::new_dst_res;
      if (utimecmpat::lexical_block_10::new_dst_res == (fs_res *)0x0) {
        pfVar9 = (fs_res *)malloc(0x10);
        utimecmpat::lexical_block_10::new_dst_res = pfVar9;
        if (pfVar9 != (fs_res *)0x0) {
          pfVar9->resolution = 2000000000;
          pfVar9->exact = false;
          goto LAB_001000ca;
        }
LAB_00100658:
        tmp_dst_res.dev = dst_stat->st_dev;
        local_148 = (fs_res *)hash_lookup(utimecmpat::lexical_block_10::ht,&tmp_dst_res);
        if (local_148 == (fs_res *)0x0) goto LAB_001001fd;
      }
      else {
LAB_001000ca:
        pfVar9->dev = dst_stat->st_dev;
        local_148 = (fs_res *)hash_insert(pHVar5);
        if (local_148 == (fs_res *)0x0) {
          if (utimecmpat::lexical_block_10::ht == (Hash_table *)0x0) goto LAB_001001fd;
          goto LAB_00100658;
        }
        if (utimecmpat::lexical_block_10::new_dst_res == local_148) {
          utimecmpat::lexical_block_10::new_dst_res = (fs_res *)0x0;
        }
      }
      iVar8 = local_148->resolution;
      if (local_148->exact != false) {
        uVar20 = uVar2 & (long)(int)~(uint)(iVar8 == 2000000000);
        iVar19 = iVar19 - iVar19 % iVar8;
        bVar21 = uVar1 == uVar20;
        goto LAB_00100148;
      }
    }
    uVar4 = (dst_stat->st_atim).tv_sec;
    iVar10 = (int)(dst_stat->st_atim).tv_nsec;
    iVar11 = iVar10 / 10;
    iVar15 = (int)(dst_stat->st_ctim).tv_nsec;
    iVar7 = iVar15 / 10;
    iVar12 = iVar18 / 10;
    uVar13 = uVar14;
    if (iVar18 % 10 == 0 && (iVar10 % 10 == 0 && iVar15 % 10 == 0)) {
      if ((iVar8 < 0xb) || (iVar15 = 8, iVar12 % 10 != 0 || (iVar11 % 10 != 0 || iVar7 % 10 != 0)))
      {
        local_128 = 10;
        uVar17 = 0xffffffffffffffff;
        local_148->resolution = 10;
      }
      else {
        uVar16 = 10;
        do {
          uVar13 = uVar16 * 10;
          iVar11 = iVar11 / 10;
          iVar7 = iVar7 / 10;
          iVar12 = iVar12 / 10;
          local_128 = uVar13;
          if (iVar8 <= (int)uVar13) {
            local_150 = (ulong)(uVar16 == 200000000);
            local_148->resolution = uVar13;
            uVar17 = (ulong)(int)~(uint)(uVar16 == 200000000);
            uVar20 = uVar2 & uVar17;
            goto LAB_00100457;
          }
          if (iVar12 % 10 != 0 || (iVar11 % 10 != 0 || iVar7 % 10 != 0)) {
            local_150 = (ulong)(uVar16 == 200000000);
            local_148->resolution = uVar13;
            uVar17 = (ulong)(int)~(uint)(uVar16 == 200000000);
            uVar20 = uVar2 & uVar17;
            if (1 < (int)uVar13) goto LAB_00100457;
            iVar19 = iVar19 - iVar19 % (int)uVar13;
            bVar21 = uVar1 == uVar20;
            goto LAB_00100630;
          }
          iVar15 = iVar15 + -1;
          uVar16 = uVar13;
        } while (iVar15 != 0);
        if (((uVar4 | uVar1 | (dst_stat->st_ctim).tv_sec) & 1) == 0) {
          local_148->resolution = 2000000000;
          uVar17 = 0xfffffffffffffffe;
          local_150 = 1;
          local_128 = 2000000000;
          uVar20 = uVar2 & 0xfffffffffffffffe;
        }
        else {
          local_148->resolution = 1000000000;
          uVar17 = 0xffffffffffffffff;
          local_128 = 1000000000;
        }
      }
LAB_00100457:
      if (((long)uVar2 < (long)uVar1) || ((iVar19 <= iVar18 && (bVar21)))) goto LAB_00100174;
      if (((long)uVar1 < (long)uVar20) ||
         ((uVar1 == uVar20 && (iVar18 < iVar19 - iVar19 % (int)local_128)))) goto LAB_001001a8;
      timespec[1].tv_sec = local_150 | uVar1;
      timespec[1].tv_nsec = (__syscall_slong_t)(int)(local_128 / 9 + iVar18);
      timespec[0].tv_sec = uVar4;
      timespec[0].tv_nsec = (long)iVar10;
      iVar8 = utimensat(dfd,dst_name,(timespec *)timespec,0x100);
      if ((iVar8 != 0) ||
         ((iVar8 = fstatat(dfd,dst_name,(stat *)&dst_status,0x100),
          iVar8 != 0 || (iVar18 != dst_status.st_mtim.tv_nsec || dst_status.st_mtim.tv_sec != uVar1)
          && (timespec[1].tv_sec = uVar1, timespec[1].tv_nsec = (long)iVar18,
             utimensat(dfd,dst_name,(timespec *)timespec,0x100), iVar8 != 0)))) {
        uVar14 = 0xfffffffe;
        goto LAB_00100174;
      }
      iVar8 = (-((uint)dst_status.st_mtim.tv_sec & 1) & 1000000000) +
              (int)dst_status.st_mtim.tv_nsec;
      uVar13 = iVar8 * -0x33333333 + 0x19999998;
      if ((uVar13 >> 1 | (uint)((uVar13 & 1) != 0) << 0x1f) < 0x19999999) {
        if (local_128 == 10) {
          uVar14 = 10;
          goto LAB_00100862;
        }
        iVar11 = 9;
        uVar13 = 10;
        do {
          iVar8 = iVar8 / 10;
          uVar14 = iVar8 * -0x33333333 + 0x19999998;
          if (0x19999998 < (uVar14 >> 1 | (uint)((uVar14 & 1) != 0) << 0x1f)) {
            uVar17 = (ulong)(int)~(uint)(uVar13 == 2000000000);
            break;
          }
          iVar11 = iVar11 + -1;
          if (iVar11 == 0) {
            uVar17 = 0xfffffffffffffffe;
            uVar13 = 2000000000;
            break;
          }
          uVar13 = uVar13 * 10;
        } while (uVar13 != local_128);
      }
      else {
LAB_00100862:
        uVar17 = 0xffffffffffffffff;
        uVar13 = uVar14;
      }
      uVar20 = uVar2 & uVar17;
      iVar19 = iVar19 - iVar19 % (int)uVar13;
      bVar21 = uVar1 == uVar20;
    }
LAB_00100630:
    local_148->resolution = uVar13;
    local_148->exact = true;
  }
LAB_00100148:
  uVar14 = ((uint)(iVar19 < iVar18) - (uint)(iVar18 < iVar19) & -(uint)bVar21) +
           ((uint)((long)uVar20 < (long)uVar1) - (uint)((long)uVar1 < (long)uVar20));
LAB_00100174:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* WARNING: Unknown calling convention */

int utimecmp(char *dst_name,stat *dst_stat,stat *src_stat,int options)

{
  int iVar1;
  
  iVar1 = utimecmpat(-100,dst_name,dst_stat,src_stat,options);
  return iVar1;
}


