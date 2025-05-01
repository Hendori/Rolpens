
/* WARNING: Unknown calling convention */

int mgetgroups(char *username,gid_t gid,gid_t **groups)

{
  gid_t gVar1;
  gid_t gVar2;
  gid_t *pgVar3;
  int iVar4;
  uint uVar5;
  gid_t *pgVar6;
  gid_t *pgVar7;
  int *piVar8;
  size_t __size;
  long in_FS_OFFSET;
  bool bVar9;
  int max_n_groups;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (username == (char *)0x0) {
    iVar4 = getgroups(0,(__gid_t *)0x0);
    if (iVar4 < 0) {
      max_n_groups = iVar4;
      piVar8 = __errno_location();
      if ((*piVar8 == 0x26) && (pgVar6 = (gid_t *)malloc(4), pgVar6 != (gid_t *)0x0)) {
        *pgVar6 = gid;
        uVar5 = (uint)(gid != 0xffffffff);
        *groups = pgVar6;
        goto LAB_001000e8;
      }
    }
    else {
      bVar9 = gid != 0xffffffff;
      if ((iVar4 == 0) || (bVar9)) {
        iVar4 = iVar4 + 1;
      }
      max_n_groups = iVar4;
      pgVar6 = (gid_t *)malloc((long)iVar4 << 2);
      if (pgVar6 != (gid_t *)0x0) {
        uVar5 = getgroups(iVar4 - (uint)bVar9,pgVar6 + bVar9);
        if (-1 < (int)uVar5) {
          if (gid != 0xffffffff) {
            *pgVar6 = gid;
            uVar5 = uVar5 + 1;
          }
          *groups = pgVar6;
          if (1 < (int)uVar5) {
            gVar1 = *pgVar6;
            pgVar7 = pgVar6 + (int)uVar5;
            pgVar3 = pgVar6;
            while (pgVar3 = pgVar3 + 1, pgVar3 < pgVar7) {
              gVar2 = *pgVar3;
              if ((gVar2 == gVar1) || (gVar2 == *pgVar6)) {
                uVar5 = uVar5 - 1;
              }
              else {
                pgVar6[1] = gVar2;
                pgVar6 = pgVar6 + 1;
              }
            }
          }
          goto LAB_001000e8;
        }
LAB_001000db:
        free(pgVar6);
      }
    }
  }
  else {
    max_n_groups = 10;
    pgVar6 = (gid_t *)malloc(0x28);
    if (pgVar6 != (__gid_t *)0x0) {
      uVar5 = 10;
      do {
        iVar4 = getgrouplist(username,gid,pgVar6,&max_n_groups);
        if ((iVar4 < 0) && (max_n_groups == uVar5)) {
          max_n_groups = uVar5 * 2;
        }
        uVar5 = max_n_groups;
        __size = (long)max_n_groups << 2;
        if (((long)__size < 0) || ((ulong)(long)max_n_groups >> 0x3e != 0)) {
          piVar8 = __errno_location();
          *piVar8 = 0xc;
          goto LAB_001000db;
        }
        if (__size == 0) {
          __size = 1;
        }
        pgVar7 = (gid_t *)realloc(pgVar6,__size);
        if (pgVar7 == (gid_t *)0x0) goto LAB_001000db;
        pgVar6 = pgVar7;
      } while (iVar4 < 0);
      *groups = pgVar7;
      goto LAB_001000e8;
    }
  }
  uVar5 = 0xffffffff;
LAB_001000e8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


