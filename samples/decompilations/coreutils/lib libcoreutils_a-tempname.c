
/* WARNING: Unknown calling convention */

int try_nocreate(char *tmpl,void *flags)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = lstat(tmpl,(stat *)&st);
  if (iVar2 == 0) {
    piVar3 = __errno_location();
  }
  else {
    piVar3 = __errno_location();
    if (*piVar3 != 0x4b) {
      iVar2 = -(uint)(*piVar3 != 2);
      goto LAB_0010003a;
    }
  }
  *piVar3 = 0x11;
  iVar2 = -1;
LAB_0010003a:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int try_dir(char *tmpl,void *flags)

{
  int iVar1;
  
  iVar1 = mkdir(tmpl,0x1c0);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int try_file(char *tmpl,void *flags)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = open(tmpl,*flags & 0xffffff3c | 0xc2,0x180);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int try_tempname_len(char *tmpl,int suffixlen,void *args,_func_int_char_ptr_void_ptr *tryfunc,
                    size_t x_suffix_len)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  ulong unaff_R13;
  random_value rVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  int local_70;
  random_value v;
  timespec tv;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = __errno_location();
  v = 0;
  iVar1 = *piVar4;
  sVar5 = strlen(tmpl);
  if ((long)suffixlen + x_suffix_len <= sVar5) {
    lVar6 = sVar5 - ((long)suffixlen + x_suffix_len);
    sVar5 = strspn(tmpl + lVar6,"X");
    if (x_suffix_len <= sVar5) {
      local_70 = 0x3a2f8;
      iVar11 = 0;
      do {
        if (x_suffix_len != 0) {
          pcVar10 = tmpl + lVar6;
          rVar12 = unaff_R13;
          do {
            if (iVar11 == 0) {
              do {
                rVar12 = v;
                lVar7 = getrandom(&v,8,1);
                if (lVar7 != 8) {
                  clock_gettime(0,(timespec *)&tv);
                  uVar13 = (rVar12 * 0x27bb2ee687b0b0fd + 0xb504f32d ^ tv.tv_sec) *
                           0x27bb2ee687b0b0fd + 0xb504f32d ^ tv.tv_nsec;
                  uVar8 = clock();
                  v = uVar13 * 0x27bb2ee687b0b0fd + 0xb504f32d ^ uVar8;
                  break;
                }
              } while (0xf49998db0aa753ff < v);
              iVar11 = 9;
              rVar12 = v;
            }
            else {
              iVar11 = iVar11 + -1;
            }
            pcVar9 = pcVar10 + 1;
            unaff_R13 = rVar12 / 0x3e;
            *pcVar10 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
                       [rVar12 % 0x3e];
            pcVar10 = pcVar9;
            rVar12 = unaff_R13;
          } while (pcVar9 != tmpl + lVar6 + x_suffix_len);
        }
        iVar3 = (*tryfunc)(tmpl,args);
        if (-1 < iVar3) {
          *piVar4 = iVar1;
          goto LAB_001002b5;
        }
      } while ((*piVar4 == 0x11) && (local_70 = local_70 + -1, local_70 != 0));
      goto LAB_001002a1;
    }
  }
  *piVar4 = 0x16;
LAB_001002a1:
  iVar3 = -1;
LAB_001002b5:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* WARNING: Unknown calling convention */

int gen_tempname_len(char *tmpl,int suffixlen,int flags,int kind,size_t x_suffix_len)

{
  int iVar1;
  int local_c [3];
  
  local_c[0] = flags;
  iVar1 = try_tempname_len(tmpl,suffixlen,local_c,
                           *(_func_int_char_ptr_void_ptr **)(tryfunc_0 + (long)kind * 8),
                           x_suffix_len);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int gen_tempname(char *tmpl,int suffixlen,int flags,int kind)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = flags;
  iVar1 = try_tempname_len(tmpl,suffixlen,&local_14,
                           *(_func_int_char_ptr_void_ptr **)(tryfunc_0 + (long)kind * 8),6);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int try_tempname(char *tmpl,int suffixlen,void *args,_func_int_char_ptr_void_ptr *tryfunc)

{
  int iVar1;
  
  iVar1 = try_tempname_len(tmpl,suffixlen,args,tryfunc,6);
  return iVar1;
}


