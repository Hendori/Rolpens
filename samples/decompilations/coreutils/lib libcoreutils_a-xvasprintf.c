
/* WARNING: Unknown calling convention */

char * xstrcat(size_t argcount,__va_list_tag *args)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  char *__s;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t sVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  char *local_60;
  va_list ap;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  ap[0].gp_offset = args->gp_offset;
  ap[0].fp_offset = args->fp_offset;
  ap[0].overflow_arg_area = args->overflow_arg_area;
  pvVar3 = args->reg_save_area;
  if (argcount == 0) {
    pcVar11 = (char *)xmalloc(1);
    local_60 = pcVar11;
  }
  else {
    uVar10 = 0;
    sVar8 = argcount;
    do {
      uVar9 = ap[0]._0_8_ & 0xffffffff;
      if (ap[0].gp_offset < 0x30) {
        ap[0].fp_offset = 0;
        ap[0].gp_offset = ap[0].gp_offset + 8;
        puVar7 = (undefined8 *)(uVar9 + (long)pvVar3);
      }
      else {
        puVar7 = (undefined8 *)ap[0].overflow_arg_area;
        ap[0].overflow_arg_area = (void *)((long)ap[0].overflow_arg_area + 8);
      }
      sVar4 = strlen((char *)*puVar7);
      bVar12 = CARRY8(uVar10,sVar4);
      uVar10 = uVar10 + sVar4;
      if (bVar12) {
        uVar10 = 0xffffffffffffffff;
      }
      sVar8 = sVar8 - 1;
    } while (sVar8 != 0);
    if (uVar10 == 0xffffffffffffffff) {
      xalloc_die();
      goto LAB_00100175;
    }
    uVar10 = uVar10 + 1;
    local_60 = (char *)xmalloc(uVar10);
    uVar9 = uVar10;
    pcVar11 = local_60;
    do {
      uVar1 = args->gp_offset;
      if (uVar1 < 0x30) {
        puVar7 = (undefined8 *)((ulong)uVar1 + (long)args->reg_save_area);
        args->gp_offset = uVar1 + 8;
      }
      else {
        puVar7 = (undefined8 *)args->overflow_arg_area;
        args->overflow_arg_area = puVar7 + 1;
      }
      __s = (char *)*puVar7;
      sVar4 = strlen(__s);
      __memcpy_chk(pcVar11,__s,sVar4,uVar9);
      uVar6 = uVar9;
      if (uVar9 <= uVar10) {
        uVar6 = uVar10;
      }
      uVar5 = (sVar4 + uVar6) - uVar9;
      if (uVar5 < uVar6) {
        uVar5 = uVar6;
      }
      pcVar11 = pcVar11 + sVar4;
      uVar9 = (uVar9 - (sVar4 + uVar6)) + uVar5;
      argcount = argcount - 1;
    } while (argcount != 0);
  }
  *pcVar11 = '\0';
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_60;
  }
LAB_00100175:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

char * xvasprintf(char *format,__va_list_tag *args)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  __va_list_tag *p_Var7;
  char **argcount;
  long in_FS_OFFSET;
  char *result;
  char errbuf [20];
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *format;
  argcount = (char **)0x0;
  do {
    if (cVar1 == '\0') {
LAB_00100218:
      if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar6 = xstrcat((size_t)argcount,args);
        return pcVar6;
      }
LAB_00100235:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((cVar1 != '%') || (format[(long)argcount * 2 + 1] != 's')) {
      argcount = &result;
      p_Var7 = (__va_list_tag *)format;
      lVar4 = vaszprintf(argcount,format,args);
      if (-1 < lVar4) {
        if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
          return result;
        }
        goto LAB_00100235;
      }
      piVar5 = __errno_location();
      iVar2 = *piVar5;
      if (iVar2 != 0xc) {
        pcVar6 = (char *)strerrorname_np(iVar2);
        if (pcVar6 == (char *)0x0) {
          pcVar6 = errbuf;
          __sprintf_chk(pcVar6,2,0x14,&_LC0,iVar2);
        }
        __fprintf_chk(_stderr,2,"vasprintf failed! format=\"%s\", errno=%s\n",format,pcVar6);
        rpl_fflush(_stderr);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      xalloc_die();
      args = p_Var7;
      goto LAB_00100218;
    }
    argcount = (char **)((long)argcount + 1);
    cVar1 = format[(long)argcount * 2];
  } while( true );
}


