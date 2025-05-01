
/* WARNING: Unknown calling convention */

int try_link(char *dest,void *arg)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = linkat(*arg,*(char **)((long)arg + 8),*(int *)((long)arg + 0x10),dest,
                 *(int *)((long)arg + 0x14));
  return iVar1;
}



/* WARNING: Unknown calling convention */

int try_symlink(char *dest,void *arg)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = symlinkat(*arg,*(int *)((long)arg + 8),dest);
  return iVar1;
}



/* WARNING: Unknown calling convention */

char * samedir_template(char *dstname,char *buf)

{
  ulong __size;
  long lVar1;
  char *pcVar2;
  
  lVar1 = last_component();
  __size = (lVar1 - (long)dstname) + 9;
  if ((0x100 < __size) && (buf = (char *)malloc(__size), buf == (char *)0x0)) {
    return (char *)0x0;
  }
  pcVar2 = (char *)mempcpy(buf,dstname,lVar1 - (long)dstname);
  *(undefined8 *)pcVar2 = simple_pattern._0_8_;
  pcVar2[8] = simple_pattern[8];
  return buf;
}



/* WARNING: Unknown calling convention */

int force_linkat(int srcdir,char *srcname,int dstdir,char *dstname,int flags,_Bool force,
                int linkat_errno)

{
  long lVar1;
  int iVar2;
  char *__old;
  int *piVar3;
  long in_FS_OFFSET;
  link_arg arg;
  char buf [256];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (linkat_errno < 0) {
    linkat_errno = linkat(srcdir,srcname,dstdir,dstname,flags);
    if (linkat_errno == 0) goto LAB_00100172;
    piVar3 = __errno_location();
    linkat_errno = *piVar3;
  }
  if ((force) && (linkat_errno == 0x11)) {
    __old = samedir_template(dstname,buf);
    if (__old == (char *)0x0) {
      piVar3 = __errno_location();
      linkat_errno = *piVar3;
    }
    else {
      arg.srcdir = srcdir;
      arg.srcname = srcname;
      arg.dstdir = dstdir;
      arg.flags = flags;
      iVar2 = try_tempname_len(__old,0,&arg,0x100000,6);
      if (iVar2 == 0) {
        iVar2 = renameat(dstdir,__old,dstdir,dstname);
        linkat_errno = -1;
        if (iVar2 != 0) {
          piVar3 = __errno_location();
          linkat_errno = *piVar3;
        }
        unlinkat(dstdir,__old,0);
      }
      else {
        piVar3 = __errno_location();
        linkat_errno = *piVar3;
      }
      if (__old != buf) {
        free(__old);
      }
    }
  }
LAB_00100172:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return linkat_errno;
}



/* WARNING: Unknown calling convention */

int force_symlinkat(char *srcname,int dstdir,char *dstname,_Bool force,int symlinkat_errno)

{
  long lVar1;
  int iVar2;
  char *__old;
  int *piVar3;
  long in_FS_OFFSET;
  symlink_arg arg;
  char buf [256];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (symlinkat_errno < 0) {
    symlinkat_errno = symlinkat(srcname,dstdir,dstname);
    if (symlinkat_errno == 0) goto LAB_001002bb;
    piVar3 = __errno_location();
    symlinkat_errno = *piVar3;
  }
  if ((force) && (symlinkat_errno == 0x11)) {
    __old = samedir_template(dstname,buf);
    if (__old == (char *)0x0) {
      piVar3 = __errno_location();
      symlinkat_errno = *piVar3;
    }
    else {
      arg.srcname = srcname;
      arg.dstdir = dstdir;
      iVar2 = try_tempname_len(__old,0,&arg,try_symlink,6);
      if (iVar2 == 0) {
        iVar2 = renameat(dstdir,__old,dstdir,dstname);
        symlinkat_errno = -1;
        if (iVar2 != 0) {
          piVar3 = __errno_location();
          symlinkat_errno = *piVar3;
          unlinkat(dstdir,__old,0);
        }
      }
      else {
        piVar3 = __errno_location();
        symlinkat_errno = *piVar3;
      }
      if (__old != buf) {
        free(__old);
      }
    }
  }
LAB_001002bb:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return symlinkat_errno;
}


