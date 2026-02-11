
uint mgetgroups(char *param_1,__gid_t param_2,undefined8 *param_3)

{
  __gid_t _Var1;
  __gid_t _Var2;
  __gid_t *p_Var3;
  int iVar4;
  uint uVar5;
  __gid_t *p_Var6;
  __gid_t *p_Var7;
  int *piVar8;
  size_t __size;
  long in_FS_OFFSET;
  bool bVar9;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) {
    uVar5 = getgroups(0,(__gid_t *)0x0);
    if ((int)uVar5 < 0) {
      local_44 = uVar5;
      piVar8 = __errno_location();
      if ((*piVar8 == 0x26) && (p_Var6 = (__gid_t *)malloc(4), p_Var6 != (__gid_t *)0x0)) {
        *p_Var6 = param_2;
        uVar5 = (uint)(param_2 != 0xffffffff);
        *param_3 = p_Var6;
        goto LAB_001000e8;
      }
    }
    else {
      bVar9 = param_2 != 0xffffffff;
      if ((uVar5 == 0) || (bVar9)) {
        uVar5 = uVar5 + 1;
      }
      local_44 = uVar5;
      p_Var6 = (__gid_t *)malloc((long)(int)uVar5 << 2);
      if (p_Var6 != (__gid_t *)0x0) {
        uVar5 = getgroups(uVar5 - bVar9,p_Var6 + bVar9);
        if (-1 < (int)uVar5) {
          if (param_2 != 0xffffffff) {
            *p_Var6 = param_2;
            uVar5 = uVar5 + 1;
          }
          *param_3 = p_Var6;
          if (1 < (int)uVar5) {
            _Var1 = *p_Var6;
            p_Var7 = p_Var6 + (int)uVar5;
            p_Var3 = p_Var6;
            while (p_Var3 = p_Var3 + 1, p_Var3 < p_Var7) {
              _Var2 = *p_Var3;
              if ((_Var2 == _Var1) || (_Var2 == *p_Var6)) {
                uVar5 = uVar5 - 1;
              }
              else {
                p_Var6[1] = _Var2;
                p_Var6 = p_Var6 + 1;
              }
            }
          }
          goto LAB_001000e8;
        }
LAB_001000db:
        free(p_Var6);
      }
    }
  }
  else {
    local_44 = 10;
    p_Var6 = (__gid_t *)malloc(0x28);
    if (p_Var6 != (__gid_t *)0x0) {
      uVar5 = 10;
      do {
        iVar4 = getgrouplist(param_1,param_2,p_Var6,(int *)&local_44);
        if ((iVar4 < 0) && (local_44 == uVar5)) {
          local_44 = uVar5 * 2;
        }
        uVar5 = local_44;
        __size = (long)(int)local_44 << 2;
        if (((long)__size < 0) || ((ulong)(long)(int)local_44 >> 0x3e != 0)) {
          piVar8 = __errno_location();
          *piVar8 = 0xc;
          goto LAB_001000db;
        }
        if (__size == 0) {
          __size = 1;
        }
        p_Var7 = (__gid_t *)realloc(p_Var6,__size);
        if (p_Var7 == (__gid_t *)0x0) goto LAB_001000db;
        p_Var6 = p_Var7;
      } while (iVar4 < 0);
      *param_3 = p_Var7;
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


