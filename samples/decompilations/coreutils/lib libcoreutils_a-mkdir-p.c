
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

_Bool make_dir_parents(char *dir,savewd *wd,_func_int_char_ptr_char_ptr_void_ptr *make_ancestor,
                      void *options,mode_t mode,_func_void_char_ptr_void_ptr *announce,
                      mode_t mode_bits,uid_t owner,gid_t group,_Bool preserve_existing)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  char *local_f8;
  mode_t local_ec;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*dir == '/') || (wd->state < ERROR_STATE)) || (iVar3 = (wd->val).fd, iVar3 == 0)) {
    local_f8 = dir;
    if (make_ancestor == (_func_int_char_ptr_char_ptr_void_ptr *)0x0) {
LAB_0010007f:
      if ((owner & group) == 0xffffffff) {
        if ((mode_bits & 0xc00) != 0 || (mode & 0x200) != 0) {
          local_ec = mode & 0xffffffed;
          goto LAB_001000a4;
        }
        iVar3 = mkdir(local_f8,mode);
        if (iVar3 != 0) goto LAB_001000bb;
        (*announce)(dir,options);
        if ((mode_bits & mode & 0x1ff) == 0) goto LAB_001001aa;
        uVar7 = 3;
        iVar3 = 0;
        local_ec = mode;
      }
      else {
        local_ec = mode & 0xffffffc0;
LAB_001000a4:
        iVar3 = mkdir(local_f8,local_ec);
        if (iVar3 == 0) {
          (*announce)(dir,options);
          uVar7 = 3;
          iVar3 = 0;
        }
        else {
LAB_001000bb:
          piVar6 = __errno_location();
          iVar3 = *piVar6;
          if (preserve_existing) {
            if (iVar3 != 0) {
              bVar2 = iVar3 != 2 && make_ancestor != (_func_int_char_ptr_char_ptr_void_ptr *)0x0;
              if (iVar3 != 2 && make_ancestor != (_func_int_char_ptr_char_ptr_void_ptr *)0x0) {
                iVar4 = stat(local_f8,(stat *)&st);
                if (iVar4 == 0) {
                  if ((st.st_mode & 0xf000) == 0x4000) goto LAB_001001b0;
                }
                else if (((iVar3 == 0x11) && (*piVar6 != 2)) && (*piVar6 != 0x14)) {
                  bVar2 = false;
                  uVar7 = quote(dir);
                  uVar8 = dcgettext("gnulib","cannot stat %s",5);
                  error(0,*piVar6,uVar8,uVar7);
                  goto LAB_001001b0;
                }
              }
              goto LAB_00100160;
            }
            goto LAB_001001aa;
          }
          local_ec = 0xffffffff;
          uVar7 = 2;
        }
      }
      iVar4 = savewd_chdir(wd,local_f8,uVar7,&st);
      if (-2 < iVar4) {
        pcVar9 = ".";
        if (iVar4 != 0) {
          pcVar9 = local_f8;
        }
        iVar4 = dirchownmod((undefined4)st.st_dev,pcVar9,local_ec,owner,group,mode,mode_bits);
        if (iVar4 != 0) {
          if ((iVar3 == 0) ||
             (((iVar3 != 2 && (make_ancestor != (_func_int_char_ptr_char_ptr_void_ptr *)0x0)) &&
              (piVar6 = __errno_location(), *piVar6 != 0x14)))) {
            uVar7 = quote(dir);
            pcVar9 = "cannot change owner and permissions of %s";
            if ((owner & group) == 0xffffffff) {
              pcVar9 = "cannot change permissions of %s";
            }
            bVar2 = false;
            uVar8 = dcgettext("gnulib",pcVar9,5);
            piVar6 = __errno_location();
            error(0,*piVar6,uVar8,uVar7);
            goto LAB_001001b0;
          }
          goto LAB_00100160;
        }
      }
    }
    else {
      lVar5 = mkancesdirs(dir,wd,make_ancestor,options);
      if (-1 < lVar5) {
        local_f8 = dir + lVar5;
        goto LAB_0010007f;
      }
      if (lVar5 == -1) {
        piVar6 = __errno_location();
        iVar3 = *piVar6;
        goto LAB_00100160;
      }
    }
LAB_001001aa:
    bVar2 = true;
  }
  else {
LAB_00100160:
    bVar2 = false;
    uVar7 = quote(dir);
    uVar8 = dcgettext("gnulib","cannot create directory %s",5);
    error(0,iVar3,uVar8,uVar7);
  }
LAB_001001b0:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


