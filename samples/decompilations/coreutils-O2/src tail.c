
ulong wd_hasher(long param_1,ulong param_2)

{
  return (ulong)(long)*(int *)(param_1 + 0x44) % param_2;
}



undefined4 wd_comparator(long param_1,long param_2)

{
  return CONCAT31((int3)((uint)*(int *)(param_2 + 0x44) >> 8),
                  *(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44));
}



undefined8 writers_are_dead(void)

{
  __pid_t *p_Var1;
  int iVar2;
  int *piVar3;
  __pid_t *p_Var4;
  
  if (nbpids == 0) {
    return 0;
  }
  if (0 < nbpids) {
    p_Var1 = pids + nbpids;
    p_Var4 = pids;
    while( true ) {
      iVar2 = kill(*p_Var4,0);
      if (iVar2 == 0) {
        return 0;
      }
      piVar3 = __errno_location();
      if (*piVar3 == 1) break;
      p_Var4 = p_Var4 + 1;
      if (p_Var4 == p_Var1) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar3 = dcgettext(0,"write error",5);
  uVar5 = 1;
  error(1,iVar1,uVar3);
  uVar3 = quotearg_style(4);
  uVar4 = dcgettext(0,"closing %s (fd=%d)",5);
  piVar2 = __errno_location();
  error(0,*piVar2,uVar4,uVar3,uVar5 & 0xffffffff);
  return;
}



void close_fd_part_0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar1 = quotearg_style(4);
  uVar2 = dcgettext(0,"closing %s (fd=%d)",5);
  piVar3 = __errno_location();
  error(0,*piVar3,uVar2,uVar1,param_1);
  return;
}



void close_fd(int param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 + 1U < 2) {
    return;
  }
  iVar1 = close(param_1);
  if (iVar1 == 0) {
    return;
  }
  close_fd_part_0(param_1,param_2);
  return;
}



void xlseek_part_0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  
  if (param_2 == 1) goto LAB_001001d0;
  uVar1 = quotearg_n_style_colon(0,3);
  pcVar4 = "%s: cannot seek to offset %jd";
  do {
    uVar2 = dcgettext(0,pcVar4,5);
    piVar3 = __errno_location();
    error(1,*piVar3,uVar2,uVar1,param_1);
LAB_001001d0:
    uVar1 = quotearg_n_style_colon();
    pcVar4 = "%s: cannot seek to relative offset %jd";
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

size_t xwrite_stdout_part_0(void *param_1,size_t param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  long extraout_RDX;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 *__s;
  int __c;
  long in_FS_OFFSET;
  undefined1 auStack_2060 [8200];
  long lStack_58;
  undefined8 uStack_48;
  long *plStack_40;
  
  sVar2 = fwrite_unlocked(param_1,1,param_2,_stdout);
  if (param_2 <= sVar2) {
    return sVar2;
  }
  clearerr_unlocked(_stdout);
  plVar3 = (long *)quotearg_style(4,"standard output");
  uVar4 = dcgettext(0,"error writing %s",5);
  piVar5 = __errno_location();
  uVar11 = 1;
  iVar10 = *piVar5;
  plVar8 = plVar3;
  error(1,iVar10,uVar4);
  lStack_58 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = 0;
  uStack_48 = uVar4;
  plStack_40 = plVar3;
  if (extraout_RDX != 0) {
    lVar9 = extraout_RDX;
    while( true ) {
      lVar6 = safe_read(iVar10,auStack_2060,0x2000);
      if (lVar6 == 0) break;
      if (lVar6 < 0) {
        uVar4 = quotearg_style(4,uVar11);
        uVar11 = dcgettext(0,"error reading %s",5);
        piVar5 = __errno_location();
        error(0,*piVar5,uVar11,uVar4);
        sVar2 = 1;
        goto LAB_00100318;
      }
      *plVar8 = *plVar8 + lVar6;
      __c = (int)line_end;
      puVar1 = auStack_2060 + lVar6;
      __s = auStack_2060;
      while( true ) {
        pvVar7 = memchr(__s,__c,(long)puVar1 - (long)__s);
        if (pvVar7 == (void *)0x0) break;
        __s = (undefined1 *)((long)pvVar7 + 1);
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) {
          if (__s < puVar1) {
            xwrite_stdout_part_0(__s,(long)puVar1 - (long)__s);
            sVar2 = 0;
          }
          else {
            sVar2 = 0;
          }
          goto LAB_00100318;
        }
      }
    }
    sVar2 = 0xffffffff;
  }
LAB_00100318:
  if (lStack_58 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 start_lines(undefined8 param_1,undefined4 param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined1 *__s;
  int __c;
  long in_FS_OFFSET;
  undefined1 local_2048 [8200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if (param_3 != 0) {
    while( true ) {
      lVar2 = safe_read(param_2,local_2048,0x2000);
      if (lVar2 == 0) break;
      if (lVar2 < 0) {
        uVar4 = quotearg_style(4,param_1);
        uVar5 = dcgettext(0,"error reading %s",5);
        piVar6 = __errno_location();
        error(0,*piVar6,uVar5,uVar4);
        uVar4 = 1;
        goto LAB_00100318;
      }
      *param_4 = *param_4 + lVar2;
      __c = (int)line_end;
      puVar1 = local_2048 + lVar2;
      __s = local_2048;
      while( true ) {
        pvVar3 = memchr(__s,__c,(long)puVar1 - (long)__s);
        if (pvVar3 == (void *)0x0) break;
        __s = (undefined1 *)((long)pvVar3 + 1);
        param_3 = param_3 + -1;
        if (param_3 == 0) {
          if (__s < puVar1) {
            xwrite_stdout_part_0(__s,(long)puVar1 - (long)__s);
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
          }
          goto LAB_00100318;
        }
      }
    }
    uVar4 = 0xffffffff;
  }
LAB_00100318:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 start_bytes(undefined8 param_1,undefined4 param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  undefined1 auStack_2038 [8200];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    do {
      uVar1 = safe_read(param_2,auStack_2038,0x2000);
      if (uVar1 == 0) {
        uVar2 = 0xffffffff;
        goto LAB_00100428;
      }
      if ((long)uVar1 < 0) {
        uVar2 = quotearg_style(4,param_1);
        uVar3 = dcgettext(0,"error reading %s",5);
        piVar4 = __errno_location();
        error(0,*piVar4,uVar3,uVar2);
        uVar2 = 1;
        goto LAB_00100428;
      }
      *param_4 = *param_4 + uVar1;
      if (param_3 < uVar1) {
        xwrite_stdout_part_0(auStack_2038 + param_3,uVar1 - param_3);
        break;
      }
      param_3 = param_3 - uVar1;
    } while (param_3 != 0);
  }
  uVar2 = 0;
LAB_00100428:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



bool fremote(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  statfs local_98;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = fstatfs(param_1,&local_98);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if (*piVar2 != 0x26) {
      uVar3 = quotearg_style(4,param_2);
      uVar4 = dcgettext(0,"cannot determine location of %s. reverting to polling",5);
      error(0,*piVar2,uVar4,uVar3);
    }
    bVar5 = true;
    goto LAB_0010067a;
  }
  if (local_98.f_type != 0x2fc12fc1) {
    if (local_98.f_type < 0x2fc12fc2) {
      if (local_98.f_type != 0xadf5) {
        if (local_98.f_type < 0xadf6) {
          if (local_98.f_type < 0x4007) {
            if (0x3fff < local_98.f_type) {
              bVar5 = (0x51UL >> (local_98.f_type & 0x3fU) & 1) == 0;
              goto LAB_0010067a;
            }
            if (local_98.f_type < 0x1390) {
              if (0x1372 < local_98.f_type) {
                bVar5 = (0x10001401UL >> (local_98.f_type - 0x1373U & 0x3f) & 1) == 0;
                goto LAB_0010067a;
              }
              if (local_98.f_type != 0x187) {
                if (local_98.f_type < 0x188) {
                  bVar5 = (local_98.f_type - 0x2fU & 0xfffffffffffffffb) != 0;
                }
                else {
                  bVar5 = local_98.f_type != 0x7c0;
                }
                goto LAB_0010067a;
              }
            }
            else if (local_98.f_type != 0x2478) {
              if (0x2478 < local_98.f_type) {
                bVar5 = local_98.f_type != 0x3434;
                goto LAB_0010067a;
              }
              if (local_98.f_type != 0x1cd1) {
                bVar5 = local_98.f_type != 0x2468;
                goto LAB_0010067a;
              }
            }
          }
          else if (local_98.f_type != 0x5df5) {
            if (local_98.f_type < 0x5df6) {
              if (local_98.f_type != 0x4858) {
                if (local_98.f_type < 0x4859) {
                  if (local_98.f_type != 0x4244) {
                    bVar5 = local_98.f_type != 0x482b;
                    goto LAB_0010067a;
                  }
                }
                else if (local_98.f_type != 0x4d44) {
                  bVar5 = local_98.f_type != 0x4d5a;
                  goto LAB_0010067a;
                }
              }
            }
            else if (local_98.f_type != 0x9660) {
              if (0x9660 < local_98.f_type) {
                bVar5 = 2 < local_98.f_type - 0x9fa0U;
                goto LAB_0010067a;
              }
              if (local_98.f_type != 0x7275) {
                bVar5 = local_98.f_type != 0x72b6;
                goto LAB_0010067a;
              }
            }
          }
        }
        else if (local_98.f_type != 0x7655821) {
          if (local_98.f_type < 0x7655822) {
            if (local_98.f_type != 0x414a53) {
              if (local_98.f_type < 0x414a54) {
                if (local_98.f_type != 0xf15f) {
                  if (local_98.f_type < 0xf160) {
                    if ((local_98.f_type & 0xfffffffffffffffdU) != 0xef51) {
                      bVar5 = local_98.f_type != 0xadff;
                      goto LAB_0010067a;
                    }
                  }
                  else if (local_98.f_type != 0x11954) {
                    bVar5 = local_98.f_type != 0x27e0eb;
                    goto LAB_0010067a;
                  }
                }
              }
              else if (local_98.f_type != 0x1021997) {
                if (local_98.f_type < 0x1021998) {
                  if (local_98.f_type != 0xc0ffee) {
                    bVar5 = local_98.f_type != 0x1021994;
                    goto LAB_0010067a;
                  }
                }
                else if (local_98.f_type != 0x12fd16d) {
                  bVar5 = 3 < local_98.f_type - 0x12ff7b4U;
                  goto LAB_0010067a;
                }
              }
            }
          }
          else if (local_98.f_type != 0x19800202) {
            if (local_98.f_type < 0x19800203) {
              if (local_98.f_type != 0x11307854) {
                if (local_98.f_type < 0x11307855) {
                  if (local_98.f_type != 0x9041934) {
                    bVar5 = local_98.f_type != 0xbad1dea;
                    goto LAB_0010067a;
                  }
                }
                else if (local_98.f_type != 0x13661366) {
                  bVar5 = local_98.f_type != 0x15013346;
                  goto LAB_0010067a;
                }
              }
            }
            else if (local_98.f_type != 0x24051905) {
              if (local_98.f_type < 0x24051906) {
                if (local_98.f_type != 0x1badface) {
                  bVar5 = local_98.f_type != 0x2011bab0;
                  goto LAB_0010067a;
                }
              }
              else if (local_98.f_type != 0x28cd3d45) {
                bVar5 = local_98.f_type != 0x2bad1dea;
                goto LAB_0010067a;
              }
            }
          }
        }
      }
    }
    else if (local_98.f_type != 0x62656572) {
      if (local_98.f_type < 0x62656573) {
        if (local_98.f_type != 0x53464846) {
          if (local_98.f_type < 0x53464847) {
            if (local_98.f_type != 0x454d444d) {
              if (local_98.f_type < 0x454d444e) {
                if (local_98.f_type != 0x43415d53) {
                  if (local_98.f_type < 0x43415d54) {
                    if ((local_98.f_type != 0x42465331) && (local_98.f_type != 0x42494e4d)) {
                      bVar5 = local_98.f_type != 0x3153464a;
                      goto LAB_0010067a;
                    }
                  }
                  else if (local_98.f_type != 0x444d4142) {
                    bVar5 = local_98.f_type != 0x453dcd28;
                    goto LAB_0010067a;
                  }
                }
              }
              else if (local_98.f_type != 0x52654973) {
                if (local_98.f_type < 0x52654974) {
                  if (local_98.f_type != 0x45584653) {
                    bVar5 = local_98.f_type != 0x50494446;
                    goto LAB_0010067a;
                  }
                }
                else if (local_98.f_type != 0x5345434d) {
                  bVar5 = local_98.f_type != 0x5346314d;
                  goto LAB_0010067a;
                }
              }
            }
          }
          else if (local_98.f_type != 0x5a3c69f0) {
            if (local_98.f_type < 0x5a3c69f1) {
              if (local_98.f_type != 0x565a4653) {
                if (local_98.f_type < 0x565a4654) {
                  if ((local_98.f_type != 0x534f434b) && (local_98.f_type != 0x54190100)) {
                    bVar5 = local_98.f_type != 0x5346544e;
                    goto LAB_0010067a;
                  }
                }
                else if (local_98.f_type != 0x58295829) {
                  bVar5 = local_98.f_type != 0x58465342;
                  goto LAB_0010067a;
                }
              }
            }
            else if (local_98.f_type != 0x6165676c) {
              if (local_98.f_type < 0x6165676d) {
                if (local_98.f_type != 0x5a4f4653) {
                  bVar5 = local_98.f_type != 0x5dca2df5;
                  goto LAB_0010067a;
                }
              }
              else if (local_98.f_type != 0x62646576) {
                bVar5 = local_98.f_type != 0x62656570;
                goto LAB_0010067a;
              }
            }
          }
        }
      }
      else if (local_98.f_type != 0x9123683e) {
        if (local_98.f_type < 0x9123683f) {
          if (local_98.f_type != 0x6e736673) {
            if (local_98.f_type < 0x6e736674) {
              if (local_98.f_type != 0x67596969) {
                if (local_98.f_type < 0x6759696a) {
                  if ((local_98.f_type != 0x64626720) && (local_98.f_type != 0x64646178)) {
                    bVar5 = local_98.f_type != 0x63677270;
                    goto LAB_0010067a;
                  }
                }
                else if (local_98.f_type != 0x68191122) {
                  bVar5 = local_98.f_type != 0x6c6f6f70;
                  goto LAB_0010067a;
                }
              }
            }
            else if (local_98.f_type != 0x73727279) {
              if (local_98.f_type < 0x7372727a) {
                if (local_98.f_type != 0x73636673) {
                  bVar5 = local_98.f_type != 0x73717368;
                  goto LAB_0010067a;
                }
              }
              else if (local_98.f_type != 0x74726163) {
                bVar5 = local_98.f_type != 0x858458f6;
                goto LAB_0010067a;
              }
            }
          }
        }
        else if (local_98.f_type != 0xcafe4a11) {
          if (local_98.f_type < 0xcafe4a12) {
            if (local_98.f_type != 0xc7571590) {
              if (local_98.f_type < 0xc7571591) {
                if (local_98.f_type != 0x958458f6) {
                  bVar5 = local_98.f_type != 0xabba1974;
                  goto LAB_0010067a;
                }
              }
              else if (local_98.f_type != 0xc97e8168) {
                bVar5 = local_98.f_type != 0xca451a4e;
                goto LAB_0010067a;
              }
            }
          }
          else if (local_98.f_type != 0xf2f52010) {
            if (local_98.f_type < 0xf2f52011) {
              if (local_98.f_type != 0xde5e81e4) {
                bVar5 = local_98.f_type != 0xe0f5e1e2;
                goto LAB_0010067a;
              }
            }
            else if (local_98.f_type != 0xf97cff8c) {
              bVar5 = local_98.f_type != 0xf995e849;
              goto LAB_0010067a;
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_0010067a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * pretty_name_isra_0(char *param_1)

{
  char *pcVar1;
  
  if ((*param_1 == '-') && (param_1[1] == '\0')) {
    pcVar1 = (char *)dcgettext(0,"standard input",5);
    return pcVar1;
  }
  return param_1;
}



long dump_remainder(char param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined1 local_2048 [8200];
  long local_40;
  
  lVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = param_4;
  while( true ) {
    uVar5 = 0x2000;
    if (uVar7 < 0x2001) {
      uVar5 = uVar7;
    }
    lVar1 = safe_read(param_3,local_2048,uVar5);
    if (lVar1 < 0) break;
    if (lVar1 == 0) goto LAB_00100c75;
    if (param_1 != '\0') {
      puVar6 = &_LC9;
      if (first_file_3 == '\0') {
        puVar6 = &_LC10;
      }
      __printf_chk(2,"%s==> %s <==\n",puVar6,param_2);
      first_file_3 = '\0';
    }
    lVar8 = lVar8 + lVar1;
    xwrite_stdout_part_0(local_2048,lVar1);
    if ((param_4 != 0xffffffffffffffff) &&
       ((uVar7 = uVar7 - lVar1, uVar7 == 0 || (param_4 == 0xfffffffffffffffe)))) goto LAB_00100c75;
    param_1 = '\0';
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0xb) {
    uVar3 = quotearg_style(4,param_2);
    uVar4 = dcgettext(0,"error reading %s",5);
    error(1,*piVar2,uVar4,uVar3);
    goto LAB_00100d1e;
  }
LAB_00100c75:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar8;
  }
LAB_00100d1e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void check_fspec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  __off_t _Var8;
  long in_FS_OFFSET;
  stat sStack_c8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 7) == -1) goto LAB_00100dca;
  pcVar4 = (char *)*param_1;
  if ((*pcVar4 == '-') && (pcVar4[1] == '\0')) {
    pcVar4 = (char *)dcgettext(0,"standard input",5);
    uVar1 = fstat(*(int *)(param_1 + 7),&sStack_c8);
    if (uVar1 == 0) goto LAB_00100d81;
LAB_00100e2f:
    piVar5 = __errno_location();
    param_2 = (undefined8 *)(ulong)*(uint *)(param_1 + 7);
    *(int *)((long)param_1 + 0x3c) = *piVar5;
    if (1 < *(uint *)(param_1 + 7) + 1) goto LAB_00100ed0;
  }
  else {
    uVar1 = fstat(*(int *)(param_1 + 7),&sStack_c8);
    if (uVar1 != 0) goto LAB_00100e2f;
LAB_00100d81:
    if ((*(uint *)(param_1 + 6) & 0xf000) == 0x8000) {
      if (sStack_c8.st_size < (long)param_1[1]) {
        uVar6 = quotearg_n_style_colon(0,3,pcVar4);
        uVar7 = dcgettext(0,"%s: file truncated",5);
        error(0,0,uVar7,uVar6);
        _Var8 = lseek(*(int *)(param_1 + 7),0,0);
        if (_Var8 < 0) {
          xlseek_part_0(0,0,pcVar4);
        }
        param_1[1] = 0;
      }
      else if ((sStack_c8.st_size == param_1[1]) &&
              (((uint)(sStack_c8.st_mtim.tv_nsec < (long)param_1[3]) -
               (uint)((long)param_1[3] < sStack_c8.st_mtim.tv_nsec)) +
               ((uint)(sStack_c8.st_mtim.tv_sec < (long)param_1[2]) -
               (uint)((long)param_1[2] < sStack_c8.st_mtim.tv_sec)) * 2 == 0)) goto LAB_00100dca;
    }
    if (print_headers != '\0') {
      uVar1 = (uint)((undefined8 *)*param_2 != param_1);
    }
    lVar3 = dump_remainder(uVar1,pcVar4,*(undefined4 *)(param_1 + 7),0xffffffffffffffff);
    param_1[1] = param_1[1] + lVar3;
    if (lVar3 == 0) goto LAB_00100dca;
    *param_2 = param_1;
    iVar2 = fflush_unlocked(_stdout);
    if (iVar2 == 0) goto LAB_00100dca;
    write_error();
LAB_00100ed0:
    iVar2 = close((int)param_2);
    if (iVar2 != 0) {
      close_fd_part_0((ulong)param_2 & 0xffffffff,pcVar4);
    }
  }
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
LAB_00100dca:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void recheck(char *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  int *piVar10;
  byte *pbVar11;
  __off_t _Var12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined *puVar16;
  long in_FS_OFFSET;
  stat local_d8;
  long local_40;
  
  pbVar11 = *(byte **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = *pbVar11 - 0x2d;
  if (uVar15 == 0) {
    uVar15 = (uint)pbVar11[1];
  }
  bVar3 = param_1[0x36];
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (uVar15 == 0) {
    iVar5 = 0;
    uVar6 = uVar1;
  }
  else {
    iVar5 = open_safer(pbVar11,((param_2 ^ 1) & 0xff) << 0xb);
    uVar6 = *(uint *)(param_1 + 0x3c);
  }
  cVar2 = reopen_inaccessible_files;
  cVar4 = disable_inotify;
  if ((*(int *)(param_1 + 0x38) == -1) == (uVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("valid_file_spec (f)","src/tail.c",0x3d8,"recheck");
  }
  if (reopen_inaccessible_files == '\0') {
    param_1[0x36] = '\x01';
    if (((cVar4 == '\0') && (iVar7 = lstat(*(char **)param_1,&local_d8), iVar7 == 0)) &&
       ((local_d8.st_mode & 0xf000) == 0xa000)) goto LAB_001014e6;
    if (iVar5 == -1) {
LAB_00101009:
      puVar8 = (uint *)__errno_location();
      pbVar11 = *(byte **)param_1;
      uVar15 = *puVar8;
      *(uint *)(param_1 + 0x3c) = uVar15;
      if (param_1[0x36] == '\0') goto LAB_00101283;
      if (uVar15 != uVar1) {
        uVar13 = pretty_name_isra_0();
        uVar13 = quotearg_n_style_colon(0,3,uVar13);
        error(0,*puVar8,&_LC17,uVar13);
        pbVar11 = *(byte **)param_1;
      }
    }
    else {
LAB_001010cb:
      iVar7 = fstat(iVar5,&local_d8);
      if (iVar7 < 0) goto LAB_00101009;
      if ((((local_d8.st_mode & 0xf000) - 0x1000 & 0xffffe000) == 0) ||
         ((local_d8.st_mode & 0xb000) == 0x8000)) {
        pcVar9 = *(char **)param_1;
        if ((*pcVar9 == '-') && (pcVar9[1] == '\0')) {
          pcVar9 = (char *)dcgettext(0,"standard input",5);
        }
        cVar4 = fremote(iVar5,pcVar9);
        param_1[0x35] = cVar4;
        if ((cVar4 == '\0') || (disable_inotify != '\0')) {
          param_1[0x3c] = '\0';
          param_1[0x3d] = '\0';
          param_1[0x3e] = '\0';
          param_1[0x3f] = '\0';
          if ((uVar1 & 0xfffffffd) == 0) {
            pcVar9 = *(char **)param_1;
            if (*(int *)(param_1 + 0x38) == -1) {
              uVar13 = pretty_name_isra_0(pcVar9);
              uVar13 = quotearg_style(4,uVar13);
              pcVar9 = "%s has appeared;  following new file";
              goto LAB_00101366;
            }
            if ((*(__ino_t *)(param_1 + 0x28) == local_d8.st_ino) &&
               (*(__dev_t *)(param_1 + 0x20) == local_d8.st_dev)) {
              if ((*pcVar9 == '-') && (pcVar9[1] == '\0')) {
                pcVar9 = (char *)dcgettext(0,"standard input",5);
              }
              if ((iVar5 != 0) && (iVar7 = close(iVar5), iVar7 != 0)) {
                close_fd_part_0(iVar5,pcVar9);
              }
              goto LAB_00101070;
            }
            uVar13 = pretty_name_isra_0(pcVar9);
            uVar13 = quotearg_style(4,uVar13);
            uVar14 = dcgettext(0,"%s has been replaced;  following new file",5);
            error(0,0,uVar14,uVar13);
            pretty_name_isra_0(*(undefined8 *)param_1);
            close_fd(*(undefined4 *)(param_1 + 0x38));
          }
          else {
            if (*(int *)(param_1 + 0x38) != -1) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("f->fd == -1","src/tail.c",0x425,"recheck");
            }
            pcVar9 = *(char **)param_1;
            if ((*pcVar9 == '-') && (pcVar9[1] == '\0')) {
              pcVar9 = (char *)dcgettext(0,"standard input",5);
            }
            uVar13 = quotearg_style(4,pcVar9);
            pcVar9 = "%s has become accessible";
LAB_00101366:
            uVar14 = dcgettext(0,pcVar9,5);
            error(0,0,uVar14,uVar13);
          }
          param_2 = param_2 & 0xff;
          *(int *)(param_1 + 0x38) = iVar5;
          if (uVar15 == 0) {
            param_2 = 0xffffffff;
          }
          param_1[8] = '\0';
          param_1[9] = '\0';
          param_1[10] = '\0';
          param_1[0xb] = '\0';
          param_1[0xc] = '\0';
          param_1[0xd] = '\0';
          param_1[0xe] = '\0';
          param_1[0xf] = '\0';
          param_1[0x58] = '\0';
          param_1[0x59] = '\0';
          param_1[0x5a] = '\0';
          param_1[0x5b] = '\0';
          param_1[0x5c] = '\0';
          param_1[0x5d] = '\0';
          param_1[0x5e] = '\0';
          param_1[0x5f] = '\0';
          *(__time_t *)(param_1 + 0x10) = local_d8.st_mtim.tv_sec;
          *(uint *)(param_1 + 0x40) = param_2;
          *(long *)(param_1 + 0x18) = local_d8.st_mtim.tv_nsec;
          param_1[0x34] = '\0';
          *(__mode_t *)(param_1 + 0x30) = local_d8.st_mode;
          *(__dev_t *)(param_1 + 0x20) = local_d8.st_dev;
          *(__ino_t *)(param_1 + 0x28) = local_d8.st_ino;
          if ((local_d8.st_mode & 0xf000) != 0x8000) goto LAB_00101070;
          param_1 = *(char **)param_1;
          if ((*param_1 == '-') && (param_1[1] == '\0')) {
            param_1 = (char *)dcgettext(0,"standard input",5);
          }
          _Var12 = lseek(iVar5,0,0);
          if (-1 < _Var12) goto LAB_00101070;
          bVar3 = xlseek_part_0(0,0,param_1);
          goto LAB_00101428;
        }
        param_1[0x3c] = -1;
        param_1[0x3d] = -1;
        param_1[0x3e] = -1;
        param_1[0x3f] = -1;
        uVar13 = pretty_name_isra_0(*(undefined8 *)param_1);
        uVar13 = quotearg_style(4,uVar13);
        uVar14 = dcgettext(0,"%s has been replaced with an untailable remote file",5);
        error(0,0,uVar14,uVar13);
        param_1[0x34] = '\x01';
        param_1[0x35] = '\x01';
      }
      else {
        param_1[0x3c] = -1;
        param_1[0x3d] = -1;
        param_1[0x3e] = -1;
        param_1[0x3f] = -1;
        param_1[0x36] = '\0';
        bVar3 = uVar1 != 0xffffffff | bVar3;
        if ((cVar2 == '\0') || (follow_mode != 1)) {
LAB_00101428:
          param_1[0x34] = '\x01';
          if (bVar3 == 0) goto LAB_0010128e;
          puVar16 = (undefined *)dcgettext(0,"; giving up on this name",5);
        }
        else {
          param_1[0x34] = '\0';
          if (bVar3 == 0) goto LAB_0010128e;
          puVar16 = &_LC9;
        }
        uVar13 = pretty_name_isra_0(*(undefined8 *)param_1);
        uVar13 = quotearg_style(4,uVar13);
        uVar14 = dcgettext(0,"%s has been replaced with an untailable file%s",5);
        error(0,0,uVar14,uVar13,puVar16);
      }
LAB_0010128e:
      pbVar11 = *(byte **)param_1;
    }
  }
  else {
    if (iVar5 == -1) {
      param_1[0x36] = '\0';
      if (cVar4 != '\0') {
        piVar10 = __errno_location();
        *(int *)(param_1 + 0x3c) = *piVar10;
LAB_00101283:
        if (bVar3 == 0) goto LAB_0010128e;
        uVar13 = pretty_name_isra_0();
        uVar13 = quotearg_style(4,uVar13);
        uVar14 = dcgettext(0,"%s has become inaccessible",5);
        error(0,*(undefined4 *)(param_1 + 0x3c),uVar14,uVar13);
        pbVar11 = *(byte **)param_1;
        goto LAB_00101033;
      }
      iVar7 = lstat(*(char **)param_1,&local_d8);
      if ((iVar7 != 0) || ((local_d8.st_mode & 0xf000) != 0xa000)) goto LAB_00101009;
    }
    else {
      param_1[0x36] = '\x01';
      if (((cVar4 != '\0') || (iVar7 = lstat(*(char **)param_1,&local_d8), iVar7 != 0)) ||
         ((local_d8.st_mode & 0xf000) != 0xa000)) goto LAB_001010cb;
    }
LAB_001014e6:
    param_1[0x3c] = -1;
    param_1[0x3d] = -1;
    param_1[0x3e] = -1;
    param_1[0x3f] = -1;
    param_1[0x34] = '\x01';
    uVar13 = pretty_name_isra_0(*(undefined8 *)param_1);
    uVar13 = quotearg_style(4,uVar13);
    uVar14 = dcgettext(0,"%s has been replaced with an untailable symbolic link",5);
    error(0,0,uVar14,uVar13);
    pbVar11 = *(byte **)param_1;
  }
LAB_00101033:
  uVar15 = *pbVar11 - 0x2d;
  if (uVar15 == 0) {
    uVar15 = (uint)pbVar11[1];
  }
  if (uVar15 == 0) {
    pbVar11 = (byte *)dcgettext(0,"standard input",5);
    if (1 < iVar5 + 1U) goto LAB_001012dc;
LAB_001012ec:
    pbVar11 = *(byte **)param_1;
    if ((*pbVar11 == 0x2d) && (pbVar11[1] == 0)) {
      pbVar11 = (byte *)dcgettext(0,"standard input",5);
    }
  }
  else if (1 < iVar5 + 1U) {
LAB_001012dc:
    iVar7 = close(iVar5);
    if (iVar7 != 0) {
      close_fd_part_0(iVar5,pbVar11);
    }
    goto LAB_001012ec;
  }
  iVar5 = *(int *)(param_1 + 0x38);
  if ((1 < iVar5 + 1U) && (iVar7 = close(iVar5), iVar7 != 0)) {
    close_fd_part_0(iVar5,pbVar11);
  }
  param_1[0x38] = -1;
  param_1[0x39] = -1;
  param_1[0x3a] = -1;
  param_1[0x3b] = -1;
LAB_00101070:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined *puVar7;
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
  
  uVar4 = _program_name;
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar4);
    goto LAB_0010172a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,
                    "Print the last %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\n"
                    ,5);
  __printf_chk(2,uVar4,10);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -c, --bytes=[+]NUM       output the last NUM bytes; or use -c +NUM to\n                             output starting with byte NUM of each file\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -f, --follow[={name|descriptor}]\n                           output appended data as the file grows;\n                             an absent option argument means \'descriptor\'\n  -F                       same as --follow=name --retry\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  uVar4 = dcgettext(0,
                    "  -n, --lines=[+]NUM       output the last NUM lines, instead of the last %d;\n                             or use -n +NUM to skip NUM-1 lines at the start\n"
                    ,5);
  __printf_chk(2,uVar4,10);
  uVar4 = dcgettext(0,
                    "      --max-unchanged-stats=N\n                           with --follow=name, reopen a FILE which has not\n                             changed size after N (default %d) iterations\n                             to see if it has been unlinked or renamed\n                             (this is the usual case of rotated log files);\n                             with inotify, this option is rarely useful\n"
                    ,5);
  __printf_chk(2,uVar4,5);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --pid=PID            with -f, terminate after process ID, PID dies;\n                             can be repeated to watch multiple processes\n  -q, --quiet, --silent    never output headers giving file names\n      --retry              keep trying to open a file if it is inaccessible\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -s, --sleep-interval=N   with -f, sleep for approximately N seconds\n                             (default 1.0) between iterations;\n                             with inotify and --pid=P, check process P at\n                             least once every N seconds\n  -v, --verbose            always output headers giving file names\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"  -z, --zero-terminated    line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nNUM may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y, R, Q.\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "With --follow (-f), tail defaults to following the file descriptor, which\nmeans that even if a tail\'ed file is renamed, tail will continue to track\nits end.  This default behavior is not desirable when you really want to\ntrack the actual name of the file, not the file descriptor (e.g., log\nrotation).  Use --follow=name in that case.  That causes tail to track the\nnamed file in a way that accommodates renaming, removal and creation.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pcVar5 = "[";
  local_a8 = &_LC26;
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
    iVar2 = strcmp("tail",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar5 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC27;
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) goto LAB_00101a85;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC27);
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
LAB_00101a85:
      iVar2 = strncmp(pcVar5,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar5 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar5,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = "";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC27);
    if (puVar7 == &_LC27) {
      pcVar5 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,puVar7,pcVar5);
LAB_0010172a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  __dev_t _Var1;
  undefined1 uVar2;
  int iVar4;
  uint uVar5;
  __pid_t _Var6;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  char cVar3;
  uint uVar7;
  uint32_t __mask;
  stat *psVar14;
  void *pvVar15;
  __blksize_t _Var16;
  undefined8 uVar17;
  stat *psVar18;
  uint *puVar19;
  __off_t _Var20;
  int *piVar21;
  stat *psVar22;
  size_t sVar23;
  long lVar24;
  stat *psVar25;
  undefined8 uVar26;
  undefined1 *puVar27;
  stat *psVar28;
  int extraout_EDX;
  stat *extraout_RDX;
  undefined *puVar29;
  size_t __n;
  uint uVar30;
  undefined **ppuVar31;
  stat *psVar32;
  long *plVar33;
  uint *puVar34;
  char *pcVar35;
  char *pcVar36;
  ulong uVar37;
  byte bVar38;
  stat *psVar39;
  char *pcVar40;
  undefined1 *puVar41;
  char cVar42;
  stat *psVar43;
  long in_FS_OFFSET;
  bool bVar44;
  double dVar45;
  undefined1 auVar46 [16];
  stat *local_260;
  undefined8 local_258;
  stat *local_250;
  stat *local_248;
  stat *local_240;
  stat *local_238;
  double local_230;
  stat *local_228;
  stat *local_220;
  stat *local_218;
  stat *local_210;
  stat *local_208;
  ulong local_200;
  stat *local_1f0;
  stat *local_1e8;
  byte local_1dd;
  stat *local_1d8;
  undefined *local_1d0;
  undefined1 local_1c8 [120];
  uint local_150;
  stat local_d8;
  long local_40;
  
  psVar43 = (stat *)&_LC9;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1d8 = (stat *)0xa;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  iVar4 = getpagesize();
  have_read_stdin = '\0';
  page_size = (stat *)(long)iVar4;
  count_lines = 1;
  print_headers = '\0';
  from_start = 0;
  forever = '\0';
  line_end = '\n';
  if (param_1 == 2) {
LAB_001030ce:
    iVar4 = posix2_version();
    pcVar35 = (char *)param_2[1];
    pcVar40 = pcVar35 + 1;
    pcVar36 = pcVar40;
    if (*pcVar35 == '+') {
      psVar28 = (stat *)0x1;
      if (0x2b8 < iVar4 - 0x30db0U) goto LAB_0010327b;
    }
    else if ((*pcVar35 == '-') &&
            ((iVar4 < 0x30db0 || (pcVar35[(ulong)(pcVar35[1] == 'c') + 1] != '\0')))) {
      psVar28 = (stat *)0x0;
LAB_0010327b:
      for (; cVar3 = *pcVar36, (int)cVar3 - 0x30U < 10; pcVar36 = pcVar36 + 1) {
      }
      if (cVar3 == 'c') {
        puVar41 = (undefined1 *)0x0;
        psVar25 = (stat *)0xa;
LAB_001034df:
        pcVar35 = pcVar36 + 1;
      }
      else {
        if (cVar3 == 'l') {
          puVar41 = (undefined1 *)0x1;
          psVar25 = (stat *)0xa;
          goto LAB_001034df;
        }
        if (cVar3 == 'b') {
          puVar41 = (undefined1 *)0x0;
          psVar25 = (stat *)0x1400;
          goto LAB_001034df;
        }
        puVar41 = (undefined1 *)0x1;
        psVar25 = (stat *)0xa;
        pcVar35 = pcVar36;
      }
      cVar3 = *pcVar35;
      if (cVar3 == 'f') {
        pcVar35 = pcVar35 + 1;
      }
      if (*pcVar35 == '\0') {
        if ((pcVar40 != pcVar36) &&
           (uVar30 = xstrtoumax(pcVar40,0,10,&local_1d8), psVar25 = local_1d8,
           (uVar30 & 0xfffffffd) != 0)) {
          psVar25 = (stat *)quote(param_2[1]);
          uVar30 = dcgettext(0,"invalid number",5);
          piVar21 = __errno_location();
          error(1,*piVar21,"%s: %s");
LAB_00105c5d:
          reopen_inaccessible_files = 0;
          pcVar40 = "warning: --retry ignored; --retry is useful only when following";
LAB_001037f7:
          uVar17 = dcgettext(0,pcVar40,5);
          error(0,0,uVar17);
LAB_0010380c:
          psVar43 = (stat *)puVar41;
          if (nbpids == 0) goto LAB_001035da;
          if (forever == '\0') {
            uVar17 = dcgettext(0,"warning: PID ignored; --pid=PID is useful only when following",5);
            error(0,0,uVar17);
            goto LAB_001035da;
          }
LAB_001035b8:
          iVar4 = kill(*pids,0);
          psVar43 = (stat *)puVar41;
          if (iVar4 == 0) goto LAB_001035da;
          piVar21 = __errno_location();
          if (*piVar21 == 0x26) goto LAB_00105bcb;
          goto LAB_001035da;
        }
        local_1d8 = psVar25;
        from_start = (byte)psVar28;
        lVar13 = 1;
        count_lines = (byte)puVar41;
        forever = cVar3 == 'f';
        goto LAB_001030f2;
      }
    }
  }
  else {
    if (param_1 == 3) {
      pcVar40 = (char *)param_2[2];
      if ((*pcVar40 == '-') && (pcVar40[1] != '\0')) goto LAB_001030be;
      goto LAB_001030ce;
    }
    if (param_1 == 4) {
      pcVar40 = (char *)param_2[2];
LAB_001030be:
      iVar4 = strcmp(pcVar40,"--");
      if (iVar4 == 0) goto LAB_001030ce;
    }
  }
  lVar13 = 0;
LAB_001030f2:
  local_258 = local_258 & 0xffffffff00000000;
  psVar28 = (stat *)(param_2 + lVar13);
  uVar30 = param_1 - (int)lVar13;
  psVar32 = (stat *)(ulong)uVar30;
  puVar41 = long_options;
  pcVar40 = "c:n:fFqs:vz0123456789";
  bVar38 = 0xae;
  local_230 = _LC60;
  puVar34 = &switchD_00103174::switchdataD_00105c78;
  while( true ) {
    psVar25 = (stat *)0x0;
    puVar27 = long_options;
    uVar37 = (ulong)uVar30;
    uVar5 = getopt_long(uVar37,psVar28,"c:n:fFqs:vz0123456789");
    if (uVar5 == 0xffffffff) break;
    if (0x85 < (int)uVar5) {
switchD_00103174_caseD_3a:
      uVar5 = usage(1);
switchD_00103174_caseD_30:
      local_260 = (stat *)CONCAT44(local_260._4_4_,uVar5);
      uVar17 = dcgettext(0,"option used in invalid context -- %c",5);
      puVar27 = (undefined1 *)(ulong)uVar5;
      psVar43 = (stat *)error(1,0,uVar17,puVar27);
LAB_00104391:
      xwrite_stdout_part_0();
      local_250 = psVar43;
LAB_00104190:
      for (_Var1 = psVar43[0x39].st_dev; _Var1 != 0; _Var1 = *(__dev_t *)(_Var1 + 0x2010)) {
        if (*(long *)(_Var1 + 0x2000) != 0) {
          xwrite_stdout_part_0(_Var1);
        }
      }
      local_220 = (stat *)CONCAT71(local_220._1_7_,bVar38);
LAB_00103ed0:
      do {
        psVar43 = (stat *)((stat *)((long)puVar41 + 0x2010))->st_dev;
        free(puVar41);
        puVar41 = (undefined1 *)psVar43;
      } while (psVar43 != (stat *)0x0);
      puVar41 = (undefined1 *)(stat *)0x0;
LAB_0010394f:
      pcVar40 = (char *)((ulong)local_220 & 0xff);
      psVar39 = (stat *)puVar27;
LAB_00103955:
      do {
        iVar4 = (int)psVar32;
        psVar43 = (stat *)pcVar40;
        if (forever != '\0') {
          *(int *)((long)&((stat *)puVar34)->st_blksize + 4) = (int)pcVar40 + -1;
          iVar9 = fstat((uint)local_258,local_218);
          bVar38 = reopen_inaccessible_files;
          if (iVar9 < 0) {
            piVar21 = __errno_location();
            _Var1 = ((stat *)puVar34)->st_dev;
            *(int *)((long)&((stat *)puVar34)->st_blksize + 4) = *piVar21;
            uVar17 = pretty_name_isra_0(_Var1);
            psVar39 = (stat *)quotearg_style(4,uVar17);
            uVar17 = dcgettext(0,"error reading %s",5);
            error(0,*piVar21,uVar17,psVar39);
          }
          else if ((((local_d8.st_mode & 0xf000) - 0x1000 & 0xffffe000) == 0) ||
                  ((local_d8.st_mode & 0xb000) == 0x8000)) {
            if ((char)pcVar40 != '\0') {
              *(__mode_t *)&((stat *)puVar34)->st_size = local_d8.st_mode;
              psVar32 = (stat *)((stat *)puVar34)->st_dev;
              *(undefined1 *)((long)&((stat *)puVar34)->st_size + 4) = 0;
              *(uint *)&((stat *)puVar34)->st_blksize = (uint)local_258;
              uVar17 = CONCAT26(local_d8.st_dev._6_2_,
                                CONCAT24(local_d8.st_dev._4_2_,(int)local_d8.st_dev));
              *(uint *)&((stat *)puVar34)->st_blocks = -(uint)(iVar4 == 0) | 1;
              ((stat *)puVar34)->st_mode = (undefined4)local_d8.st_mtim.tv_nsec;
              ((stat *)puVar34)->st_uid = local_d8.st_mtim.tv_nsec._4_4_;
              (((stat *)puVar34)->st_mtim).tv_sec = 0;
              ((stat *)puVar34)->st_ino = local_1c8._0_8_;
              ((stat *)puVar34)->st_nlink = local_d8.st_mtim.tv_sec;
              ((stat *)puVar34)->st_gid = (int)uVar17;
              ((stat *)puVar34)->__pad0 = (int)((ulong)uVar17 >> 0x20);
              ((stat *)puVar34)->st_rdev = local_d8.st_ino;
              puVar27 = (undefined1 *)local_d8.st_mtim.tv_nsec;
              iVar4 = strcmp((char *)psVar32,"-");
              if (iVar4 == 0) {
                psVar32 = (stat *)dcgettext(0,"standard input",5);
              }
              uVar2 = fremote(local_258 & 0xffffffff,psVar32);
              *(undefined1 *)((long)&((stat *)puVar34)->st_size + 5) = uVar2;
              goto LAB_0010396a;
            }
          }
          else {
            *(undefined4 *)((long)&((stat *)puVar34)->st_blksize + 4) = 0xffffffff;
            psVar25 = (stat *)&_LC9;
            *(undefined1 *)((long)&((stat *)puVar34)->st_size + 6) = 0;
            *(byte *)((long)&((stat *)puVar34)->st_size + 4) = bVar38 ^ 1;
            if ((bVar38 ^ 1) != 0) {
              psVar25 = (stat *)dcgettext(0,"; giving up on this name",5);
            }
            uVar17 = pretty_name_isra_0(((stat *)puVar34)->st_dev);
            psVar39 = (stat *)quotearg_n_style_colon(0,3,uVar17);
            uVar17 = dcgettext(0,"%s: cannot follow end of this type of file%s",5);
            error(0,0,uVar17,psVar39);
          }
          psVar32 = (stat *)((stat *)puVar34)->st_dev;
          *(byte *)((long)&((stat *)puVar34)->st_size + 4) = reopen_inaccessible_files ^ 1;
          iVar4 = strcmp((char *)psVar32,"-");
          if (iVar4 == 0) {
            psVar32 = (stat *)dcgettext(0,"standard input",5);
          }
          iVar4 = (uint)local_258;
          if ((uint)local_258 != 0) goto LAB_0010433b;
          goto LAB_00103b8b;
        }
        puVar27 = (undefined1 *)psVar39;
        if (iVar4 == 0) goto LAB_0010396a;
        iVar4 = close((uint)local_258);
        puVar27 = (undefined1 *)psVar39;
        if (iVar4 == 0) goto LAB_0010396a;
        uVar17 = pretty_name_isra_0(((stat *)puVar34)->st_dev);
        puVar27 = (undefined1 *)quotearg_style(4,uVar17);
        pcVar40 = "error reading %s";
LAB_001037a9:
        psVar32 = (stat *)dcgettext(0,pcVar40,5);
        piVar21 = __errno_location();
        error(0,*piVar21,psVar32,puVar27);
        psVar43 = (stat *)0x0;
LAB_0010396a:
        pcVar40 = (char *)local_210;
        cVar3 = forever;
        puVar34 = (uint *)&(((stat *)puVar34)->st_mtim).tv_nsec;
        local_1dd = local_1dd & (byte)psVar43;
        if ((stat *)puVar34 != local_210) {
LAB_00103700:
          psVar39 = local_1d8;
          psVar22 = local_220;
          psVar43 = (stat *)((stat *)puVar34)->st_dev;
          local_250 = local_1d8;
          uVar30 = (byte)psVar43->st_dev - 0x2d;
          psVar32 = (stat *)(ulong)uVar30;
          if (uVar30 == 0) {
            psVar32 = (stat *)(ulong)*(byte *)((long)&psVar43->st_dev + 1);
          }
          if ((forever == '\0') || ((nbpids == 0 && (local_260 == (stat *)0x1)))) {
            if ((int)psVar32 == 0) goto LAB_00103873;
            uVar17 = 0;
LAB_0010374e:
            iVar4 = open_safer(psVar43,uVar17);
            bVar38 = reopen_inaccessible_files;
            local_258 = CONCAT44(local_258._4_4_,iVar4);
            if (reopen_inaccessible_files == 0) {
              *(undefined1 *)((long)&((stat *)puVar34)->st_size + 6) = 1;
              if (iVar4 == -1) {
LAB_00103777:
                if (forever != '\0') {
                  *(undefined4 *)&((stat *)puVar34)->st_blksize = 0xffffffff;
                  piVar21 = __errno_location();
                  *(byte *)((long)&((stat *)puVar34)->st_size + 4) = bVar38 ^ 1;
                  iVar4 = *piVar21;
                  ((stat *)puVar34)->st_gid = 0;
                  ((stat *)puVar34)->__pad0 = 0;
                  ((stat *)puVar34)->st_rdev = 0;
                  *(int *)((long)&((stat *)puVar34)->st_blksize + 4) = iVar4;
                }
                uVar17 = pretty_name_isra_0(((stat *)puVar34)->st_dev);
                puVar27 = (undefined1 *)quotearg_style(4,uVar17);
                pcVar40 = "cannot open %s for reading";
                goto LAB_001037a9;
              }
              psVar43 = (stat *)((stat *)puVar34)->st_dev;
            }
            else {
              if (iVar4 == -1) {
                *(undefined1 *)((long)&((stat *)puVar34)->st_size + 6) = 0;
                goto LAB_00103777;
              }
              psVar43 = (stat *)((stat *)puVar34)->st_dev;
LAB_00103c9b:
              *(undefined1 *)((long)&((stat *)puVar34)->st_size + 6) = 1;
            }
          }
          else {
            uVar17 = 0x800;
            if ((int)psVar32 != 0) goto LAB_0010374e;
LAB_00103873:
            have_read_stdin = '\x01';
            if (reopen_inaccessible_files != 0) {
              psVar32 = (stat *)0x0;
              local_258 = (ulong)local_258._4_4_ << 0x20;
              goto LAB_00103c9b;
            }
            *(undefined1 *)((long)&((stat *)puVar34)->st_size + 6) = 1;
            psVar32 = (stat *)0x0;
            local_258 = (ulong)local_258._4_4_ << 0x20;
          }
          uVar30 = (uint)psVar32;
          if (print_headers != '\0') {
            iVar4 = strcmp((char *)psVar43,"-");
            puVar27 = (undefined1 *)psVar43;
            if (iVar4 == 0) {
              puVar27 = (undefined1 *)dcgettext(0,"standard input",5);
            }
            puVar29 = &_LC9;
            if (first_file_3 == '\0') {
              puVar29 = &_LC10;
            }
            __printf_chk(2,"%s==> %s <==\n",puVar29,puVar27);
            first_file_3 = '\0';
            psVar43 = (stat *)((stat *)puVar34)->st_dev;
          }
          local_240 = psVar43;
          if (((char)psVar43->st_dev == '-') && (*(char *)((long)&psVar43->st_dev + 1) == '\0')) {
            local_240 = (stat *)dcgettext(0,"standard input",5);
          }
          bVar38 = count_lines;
          pcVar40 = (char *)(ulong)count_lines;
          local_218 = &local_d8;
          local_1c8._0_8_ = (stat *)0x0;
          if (count_lines != 0) goto code_r0x001038f9;
          iVar4 = fstat((uint)local_258,local_218);
          psVar43 = (stat *)local_d8.st_size;
          if (iVar4 != 0) {
            psVar39 = (stat *)quotearg_style(4,local_240);
            puVar41 = (undefined1 *)dcgettext(0,"cannot fstat %s",5);
            piVar21 = __errno_location();
            error(0,*piVar21,puVar41,psVar39);
            goto LAB_00103955;
          }
          if (from_start != 0) {
            if ((presume_input_pipe == 0) && (-1 < (long)psVar39)) {
              iVar4 = 1;
              iVar9 = (uint)local_258;
              if ((local_d8.st_mode & 0xf000) == 0x8000) goto LAB_0010489d;
              _Var20 = lseek((uint)local_258,(__off_t)psVar39,1);
              if (_Var20 != -1) goto LAB_00103a44;
            }
            psVar28 = (stat *)local_1c8;
            uVar30 = start_bytes(local_240,local_258 & 0xffffffff,psVar39,psVar28);
            psVar43 = (stat *)puVar41;
            if (uVar30 == 0) goto LAB_00103a51;
            pcVar40 = (char *)(ulong)(uVar30 >> 0x1f);
            psVar39 = psVar28;
            goto LAB_00103955;
          }
          if ((presume_input_pipe == 0) && (-1 < (long)psVar39)) {
            if ((local_d8.st_mode & 0xd000) != 0x8000) {
              psVar28 = (stat *)lseek((uint)local_258,-(long)psVar39,2);
              if (psVar28 == (stat *)0xffffffffffffffff) goto LAB_00103ba2;
              psVar43 = (stat *)((long)(((stat *)(((stat *)(psVar39->__unused + -0xf))->__unused +
                                                 -0xf))->__unused + 0xfffffffffffffff1) +
                                (long)((stat *)(((stat *)(((stat *)(psVar28->__unused + -0xf))->
                                                          __unused + -0xf))->__unused + -0xf))->
                                      __unused + 0xffffffffffffff88U);
LAB_0010441a:
              if (((long)psVar43 <= (long)psVar28) ||
                 ((stat *)((long)psVar43 - (long)psVar28) <= psVar39)) goto LAB_00103a5a;
              psVar43 = (stat *)((long)psVar43 - (long)psVar39);
              _Var20 = lseek((uint)local_258,(__off_t)psVar43,0);
              psVar28 = psVar43;
              if (-1 < _Var20) goto LAB_00103a5a;
              xlseek_part_0(psVar43,0,local_240);
              psVar28 = extraout_RDX;
              psVar22 = psVar25;
              goto LAB_001044c4;
            }
            _Var16 = local_d8.st_blksize;
            if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
              _Var16 = 0x200;
            }
            if (local_d8.st_size <= _Var16) goto LAB_00103ba2;
            psVar28 = (stat *)lseek((uint)local_258,0,1);
            if (-1 < (long)psVar28) goto LAB_0010441a;
            xlseek_part_0(0,1,local_240);
LAB_00104081:
            local_260 = (stat *)0x1;
            ppuVar31 = &dummy_stdin_4;
            while( true ) {
              bVar44 = false;
              plVar33 = (long *)ppuVar31 + (long)local_260;
              plVar12 = (long *)ppuVar31;
              do {
                if ((*(char *)*plVar12 == '-') && (((char *)*plVar12)[1] == '\0')) {
                  bVar44 = true;
                }
                plVar12 = plVar12 + 1;
              } while (plVar12 != plVar33);
              puVar41 = (undefined1 *)psVar43;
              if (!bVar44) break;
              if (follow_mode != 1) {
                if (forever != '\0') {
                  if (((((nbpids != 0) || (local_260 != (stat *)0x1)) || (follow_mode != 2)) ||
                      ((iVar4 = fstat(0,&local_d8), iVar4 != 0 ||
                       ((local_d8.st_mode & 0xf000) == 0x8000)))) && (iVar4 = isatty(0), iVar4 != 0)
                     ) {
                    uVar17 = dcgettext(0,
                                       "warning: following standard input indefinitely is ineffective"
                                       ,5);
                    error(0,0,uVar17);
                  }
                  break;
                }
                goto LAB_00103674;
              }
              uVar30 = quotearg_style(4,&_LC85);
              pcVar40 = "cannot follow %s by name";
LAB_00105bb0:
              uVar17 = dcgettext(0,pcVar40,5);
              error(1,0,uVar17);
LAB_00105bcb:
              uVar17 = dcgettext(0,"warning: --pid=PID is not supported on this system",5);
              error(0,0,uVar17);
              nbpids = 0;
              free(pids);
              psVar43 = (stat *)puVar41;
LAB_001035da:
              local_1d8 = (stat *)((long)local_1d8 -
                                  (ulong)((undefined1 *)((long)local_1d8[-1].__unused + 0x17U) <
                                          (undefined1 *)0xfffffffffffffffe & from_start));
              if ((int)uVar30 <= _optind) goto LAB_00104081;
              local_260 = (stat *)(long)(int)(uVar30 - _optind);
              ppuVar31 = (undefined **)(psVar28->__unused + (long)_optind + -0xf);
            }
            if (forever == '\0') {
LAB_00103674:
              if ((long)local_1d8->__unused + ((ulong)from_start - 0x78) == 0) goto LAB_001048bf;
            }
            puVar34 = (uint *)xnmalloc(local_260);
            psVar43 = (stat *)puVar34;
            do {
              _Var1 = (__dev_t)*ppuVar31;
              ppuVar31 = (undefined **)((long *)ppuVar31 + 1);
              psVar43->st_dev = _Var1;
              psVar43 = (stat *)&(psVar43->st_mtim).tv_nsec;
            } while (ppuVar31 != (undefined **)plVar33);
            if (((uint)local_258 == 1) || (((uint)local_258 == 0 && (local_260 != (stat *)0x1)))) {
              print_headers = '\x01';
            }
            local_1e8 = (stat *)((long)local_260 * 0x60);
            local_1dd = 1;
            puVar27 = (undefined1 *)
                      ((long)(((stat *)(((stat *)(local_1e8->__unused + -0xf))->__unused + -0xf))->
                              __unused + 0xfffffffffffffff1) +
                      (long)((stat *)(((stat *)(((stat *)(((stat *)puVar34)->__unused + -0xf))->
                                                __unused + -0xf))->__unused + -0xf))->__unused +
                      0xffffffffffffff88U);
            local_228 = (stat *)puVar34;
            local_210 = (stat *)puVar27;
            goto LAB_00103700;
          }
LAB_00103ba2:
          psVar25 = (stat *)xmalloc(0x2010);
          psVar25[0x38].__unused[1] = 0;
          psVar25[0x38].__unused[2] = 0;
          psVar43 = (stat *)xmalloc(0x2010);
          psVar18 = psVar25;
          psVar28 = (stat *)0x0;
          while (psVar22 = psVar25, sVar23 = safe_read(local_258 & 0xffffffff,psVar43,0x2000),
                0 < (long)sVar23) {
            local_1c8._0_8_ = (long)(local_1c8._0_8_ + 0x78) + (sVar23 - 0x78);
            psVar28 = (stat *)((long)psVar28->__unused + (sVar23 - 0x78));
            psVar43[0x38].__unused[1] = sVar23;
            psVar43[0x38].__unused[2] = 0;
            psVar25 = psVar22;
            if (sVar23 + psVar18[0x38].__unused[1] < 0x2000) {
              memcpy((void *)((long)psVar18->__unused + psVar18[0x38].__unused[1] + -0x78),psVar43,
                     sVar23);
              psVar18[0x38].__unused[1] = psVar18[0x38].__unused[1] + psVar43[0x38].__unused[1];
            }
            else {
              psVar14 = (stat *)((long)psVar28 - psVar22[0x38].__unused[1]);
              psVar18[0x38].__unused[2] = (long)psVar43;
              psVar18 = psVar43;
              if (psVar39 < psVar14) {
                psVar25 = (stat *)psVar22[0x38].__unused[2];
                psVar43 = psVar22;
                psVar28 = psVar14;
              }
              else {
                psVar43 = (stat *)xmalloc(0x2010);
              }
            }
          }
          pcVar40 = (char *)0x0;
          free(psVar43);
          psVar25 = psVar22;
          local_248 = psVar28;
          local_238 = psVar32;
          local_220 = (stat *)puVar34;
          local_208 = psVar22;
          if ((sVar23 == 0) || (piVar21 = __errno_location(), local_238 = psVar22, *piVar21 == 0xb))
          {
LAB_001044c4:
            while( true ) {
              psVar18 = (stat *)((long)psVar28 - psVar22[0x38].__unused[1]);
              if (psVar18 <= psVar39) break;
              psVar28 = psVar18;
              psVar22 = (stat *)psVar22[0x38].__unused[2];
            }
            lVar13 = 0;
            if (psVar39 < psVar28) {
              lVar13 = (long)psVar28 - (long)psVar39;
            }
            if (psVar22[0x38].__unused[1] != lVar13) {
              xwrite_stdout_part_0((long)psVar22->__unused + lVar13 + -0x78);
              local_250 = psVar25;
            }
            for (lVar13 = psVar22[0x38].__unused[2]; lVar13 != 0;
                lVar13 = *(long *)(lVar13 + 0x2008)) {
              if (*(long *)(lVar13 + 0x2000) != 0) {
                xwrite_stdout_part_0(lVar13);
              }
            }
            pcVar40 = (char *)0x1;
            psVar22 = psVar25;
          }
          else {
            psVar43 = (stat *)quotearg_style(4,local_240);
            uVar17 = dcgettext(0,"error reading %s",5);
            psVar39 = psVar43;
            error(0,*piVar21,uVar17,psVar43);
            local_250 = psVar22;
          }
          while (puVar41 = (undefined1 *)psVar43, psVar22 != (stat *)0x0) {
            psVar28 = (stat *)psVar22[0x38].__unused[2];
            free(psVar22);
            psVar22 = psVar28;
          }
          goto LAB_00103955;
        }
        local_238 = (stat *)CONCAT71(local_238._1_7_,forever);
        if (forever == '\0') goto LAB_0010399f;
        psVar39 = (stat *)0x0;
        psVar32 = (stat *)&_LC85;
        puVar34 = (uint *)local_228;
        do {
          iVar4 = strcmp((char *)((stat *)puVar34)->st_dev,"-");
          if ((((iVar4 == 0) && (*(char *)((long)&((stat *)puVar34)->st_size + 4) == '\0')) &&
              (-1 < (int)((stat *)puVar34)->st_blksize)) &&
             ((((stat *)puVar34)->st_size & 0xf000) == 0x1000)) {
            *(undefined4 *)&((stat *)puVar34)->st_blksize = 0xffffffff;
            *(undefined1 *)((long)&((stat *)puVar34)->st_size + 4) = 1;
          }
          else {
            psVar39 = (stat *)((long)&psVar39->st_dev + 1);
          }
          puVar34 = (uint *)&(((stat *)puVar34)->st_mtim).tv_nsec;
        } while ((stat *)puVar34 != local_210);
        if (psVar39 != (stat *)0x0) {
          iVar4 = fstat(1,(stat *)(local_1c8 + 0x60));
          pcVar35 = "standard output";
          psVar43 = local_1e8;
          if (iVar4 < 0) goto LAB_00104c1e;
          monitor_output = (local_150 & 0xf000) == 0x1000;
          puVar34 = (uint *)local_228;
          if (disable_inotify == '\0') {
            do {
              if ((*(char *)((long)&((stat *)puVar34)->st_size + 4) == '\0') &&
                 (iVar4 = strcmp((char *)((stat *)puVar34)->st_dev,"-"), iVar4 == 0))
              goto LAB_0010467d;
              puVar34 = (uint *)&(((stat *)puVar34)->st_mtim).tv_nsec;
            } while ((stat *)puVar34 != local_210);
            lVar13 = 0;
            do {
              if ((-1 < *(int *)((long)&local_228->st_blksize + lVar13)) &&
                 (((undefined1 *)((long)&local_228->st_size + 5))[lVar13] != '\0'))
              goto LAB_0010467d;
              lVar13 = lVar13 + 0x60;
            } while ((stat *)lVar13 != local_1e8);
            lVar13 = 0;
            do {
              if ((-1 < *(int *)((long)&local_228->st_blksize + lVar13)) &&
                 (((undefined1 *)((long)&local_228->st_size + 5))[lVar13] == '\0')) {
                local_218 = &local_d8;
                psVar32 = local_228;
                goto LAB_001050f4;
              }
              lVar13 = lVar13 + 0x60;
            } while ((stat *)lVar13 != local_1e8);
          }
          goto LAB_0010467d;
        }
LAB_0010399f:
        if ((have_read_stdin == '\0') || (iVar4 = close(0), -1 < iVar4)) {
          bVar38 = local_1dd ^ 1;
LAB_001039ba:
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return bVar38;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        puVar19 = (uint *)__errno_location();
        iVar9 = 1;
        psVar39 = (stat *)(ulong)*puVar19;
        error(1,psVar39,&_LC85);
        iVar4 = extraout_EDX;
LAB_0010489d:
        _Var20 = lseek(iVar9,(__off_t)psVar39,iVar4);
        if (_Var20 < 0) {
          xlseek_part_0(local_250,1,local_240);
LAB_001048bf:
          bVar38 = 0;
          goto LAB_001039ba;
        }
LAB_00103a44:
        local_1c8._0_8_ = local_250;
        psVar43 = (stat *)puVar41;
LAB_00103a51:
        local_250 = (stat *)0xffffffffffffffff;
        psVar28 = (stat *)local_1c8._0_8_;
LAB_00103a5a:
        local_1c8._0_8_ = psVar28;
        pcVar40 = (char *)0x1;
        psVar39 = local_250;
        lVar13 = dump_remainder(0,local_240,local_258 & 0xffffffff);
        local_1c8._0_8_ = (long)(local_1c8._0_8_ + 0x78) + lVar13 + -0x78;
        puVar41 = (undefined1 *)psVar43;
      } while( true );
    }
    if ((int)uVar5 < 0x30) {
      if (uVar5 == 0xffffff7d) {
        uVar17 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar26 = proper_name_lite("Ian Lance Taylor","Ian Lance Taylor");
        uVar10 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar11 = proper_name_lite("Paul Rubin","Paul Rubin");
        version_etc(_stdout,&_LC27,"GNU coreutils",_Version,uVar11,uVar10,uVar26,uVar17,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (uVar5 == 0xffffff7e) {
        usage(0);
        goto LAB_00104c7b;
      }
      goto switchD_00103174_caseD_3a;
    }
    switch(uVar5) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_00103174_caseD_30;
    default:
      goto switchD_00103174_caseD_3a;
    case 0x46:
      forever = '\x01';
      follow_mode = 1;
      reopen_inaccessible_files = 1;
      break;
    case 99:
    case 0x6e:
      count_lines = uVar5 == 0x6e;
      cVar3 = (char)_optarg->st_dev;
      if (cVar3 == '+') {
        from_start = 1;
      }
      else if (cVar3 == '-') {
        _optarg = (stat *)((long)&_optarg->st_dev + 1);
      }
      if (uVar5 == 0x6e) {
        uVar17 = dcgettext(0,"invalid number of lines",5);
      }
      else {
        uVar17 = dcgettext(0,"invalid number of bytes",5);
      }
      local_1d8 = (stat *)xnumtoumax(_optarg,10,0,0xffffffffffffffff,"bkKmMGTPEZYRQ0",uVar17,0,2);
      break;
    case 0x66:
    case 0x84:
      forever = '\x01';
      if (_optarg == (stat *)0x0) {
        follow_mode = 2;
      }
      else {
        lVar13 = __xargmatch_internal
                           ("--follow",_optarg,follow_mode_string,&follow_mode_map,4,_argmatch_die,1
                            ,uVar37);
        follow_mode = *(int *)((long)&follow_mode_map + lVar13 * 4);
      }
      break;
    case 0x71:
      local_258 = CONCAT44(local_258._4_4_,2);
      break;
    case 0x73:
      local_260 = (stat *)__errno_location();
      psVar39 = _optarg;
      *(undefined4 *)&local_260->st_dev = 0;
      dVar45 = (double)cl_strtod(psVar39,local_1c8);
      if (((_optarg == (stat *)local_1c8._0_8_) || ((char)*(__dev_t *)local_1c8._0_8_ != '\0')) ||
         (dVar45 < 0.0)) {
        uVar30 = quote();
        pcVar40 = "invalid number of seconds: %s";
        goto LAB_00105bb0;
      }
      local_230 = (double)dtimespec_bound((int)local_260->st_dev);
      break;
    case 0x76:
      local_258 = CONCAT44(local_258._4_4_,1);
      break;
    case 0x7a:
      line_end = '\0';
      break;
    case 0x80:
      reopen_inaccessible_files = 1;
      break;
    case 0x81:
      uVar17 = dcgettext(0,"invalid maximum number of unchanged stats between opens",5);
      max_n_unchanged_stats_between_opens =
           xnumtoumax(_optarg,10,0,0xffffffffffffffff,&_LC9,uVar17,0,2);
      break;
    case 0x82:
      if (nbpids == pids_alloc) {
        pids = (__pid_t *)xpalloc(pids,&pids_alloc,1,0x7fffffff,4);
      }
      dcgettext(0,"invalid PID",5);
      _Var6 = xdectoumax(_optarg,0,0x7fffffff,&_LC9);
      lVar13 = (long)nbpids;
      nbpids = nbpids + 1;
      pids[lVar13] = _Var6;
      break;
    case 0x83:
      presume_input_pipe = 1;
      break;
    case 0x85:
      disable_inotify = '\x01';
    }
  }
  if (reopen_inaccessible_files != 0) {
    if (forever == '\0') goto LAB_00105c5d;
    if (follow_mode != 2) {
      psVar43 = (stat *)puVar41;
      if (nbpids == 0) goto LAB_001035da;
      goto LAB_001035b8;
    }
    pcVar40 = "warning: --retry only effective for the initial open";
    goto LAB_001037f7;
  }
  goto LAB_0010380c;
code_r0x001038f9:
  iVar4 = fstat((uint)local_258,local_218);
  if (iVar4 != 0) {
    puVar27 = (undefined1 *)quotearg_style(4,local_240);
    uVar17 = dcgettext(0,"cannot fstat %s",5);
    piVar21 = __errno_location();
    error(0,*piVar21,uVar17,puVar27);
    local_220 = (stat *)((ulong)local_220._1_7_ << 8);
    goto LAB_0010394f;
  }
  local_220 = (stat *)CONCAT71(local_220._1_7_,from_start);
  if (from_start == 0) {
    psVar43 = (stat *)(ulong)presume_input_pipe;
    if (((presume_input_pipe != 0) || ((local_d8.st_mode & 0xf000) != 0x8000)) ||
       (puVar41 = (undefined1 *)lseek((uint)local_258,0,1),
       (stat *)puVar41 == (stat *)0xffffffffffffffff)) goto LAB_00103ce0;
    psVar28 = (stat *)lseek((uint)local_258,0,2);
    if ((long)psVar28 <= (long)puVar41) goto LAB_00104c7b;
    if ((psVar28 != (stat *)0x0) && (psVar39 != (stat *)0x0)) {
      local_1c8._0_8_ = psVar28;
      if ((local_d8.st_mode & 0xf000) != 0x8000) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("((((sb->st_mode)) & 0170000) == (0100000))","src/tail.c",0x21c,"file_lines");
      }
      local_220 = (stat *)0x2000;
      if ((local_d8.st_size % (long)page_size == 0) &&
         (local_220 = (stat *)0x2000, 0x1fff < (long)page_size)) {
        local_220 = page_size;
      }
      local_248 = (stat *)xmalloc(local_220);
      puVar27 = (undefined1 *)(((long)psVar28 - (long)puVar41) % (long)local_220);
      if ((stat *)puVar27 == (stat *)0x0) {
        puVar27 = (undefined1 *)local_220;
      }
      local_208 = (stat *)((long)psVar28 - (long)puVar27);
      _Var20 = lseek((uint)local_258,(__off_t)local_208,0);
      local_238 = (stat *)puVar27;
      if (-1 < _Var20) goto LAB_00104ca1;
      psVar39 = (stat *)puVar27;
      iVar4 = xlseek_part_0(local_208,0,local_240);
LAB_0010433b:
      iVar4 = close(iVar4);
      if (iVar4 != 0) {
        close_fd_part_0();
      }
LAB_00103b8b:
      *(undefined4 *)&((stat *)puVar34)->st_blksize = 0xffffffff;
      puVar27 = (undefined1 *)psVar39;
      psVar43 = (stat *)0x0;
      goto LAB_0010396a;
    }
  }
  else if ((psVar39 != (stat *)0xffffffffffffffff) ||
          (psVar28 = (stat *)lseek((uint)local_258,2,0), (long)psVar28 < 0)) {
    puVar27 = local_1c8;
    uVar30 = start_lines(local_240,local_258 & 0xffffffff,psVar39,puVar27);
    if (uVar30 != 0) {
      local_220 = (stat *)CONCAT44(SUB84(psVar22,4),uVar30 >> 0x1f);
      goto LAB_0010394f;
    }
    puVar27 = (undefined1 *)0xffffffffffffffff;
    lVar13 = dump_remainder(0,local_240,local_258 & 0xffffffff,0xffffffffffffffff);
    psVar28 = (stat *)((long)(local_1c8._0_8_ + 0x78) + lVar13 + -0x78);
  }
  local_1c8._0_8_ = psVar28;
  local_220 = (stat *)CONCAT71(local_220._1_7_,bVar38);
  goto LAB_0010394f;
LAB_00104c7b:
  uVar30 = (uint)psVar32;
  bVar38 = (byte)pcVar40;
  _Var20 = lseek((uint)local_258,(__off_t)puVar41,0);
  if (_Var20 < 0) goto LAB_00104c92;
LAB_00103ce0:
  psVar28 = (stat *)xmalloc(0x2018);
  psVar28[0x38].__unused[1] = 0;
  psVar28[0x38].__unused[2] = 0;
  psVar28[0x39].st_dev = 0;
  psVar43 = (stat *)xmalloc(0x2018);
  local_208 = (stat *)CONCAT71(local_208._1_7_,bVar38);
  local_248 = (stat *)0x0;
  local_200 = (ulong)uVar30;
  local_238 = psVar28;
  while (local_1f0 = (stat *)safe_read(local_258 & 0xffffffff,psVar43,0x2000), 0 < (long)local_1f0)
  {
    psVar43[0x38].__unused[1] = (long)local_1f0;
    iVar4 = (int)line_end;
    local_1c8._0_8_ =
         (long)(((stat *)(((stat *)(local_1f0->__unused + -0xf))->__unused + -0xf))->__unused +
               0xfffffffffffffff1) +
         (long)((stat *)(((stat *)(((stat *)((long *)(local_1c8._0_8_ + 0x78) + -0xf))->__unused +
                                  -0xf))->__unused + -0xf))->__unused + 0xffffffffffffff88U;
    psVar43[0x38].__unused[2] = 0;
    psVar43[0x39].st_dev = 0;
    psVar32 = psVar43;
    lVar13 = 0;
    while( true ) {
      pvVar15 = memchr(psVar32,iVar4,
                       (size_t)((long)local_1f0 + (long)psVar43->__unused + (-0x78 - (long)psVar32))
                      );
      if (pvVar15 == (void *)0x0) break;
      psVar43[0x38].__unused[2] = lVar13 + 1;
      psVar32 = (stat *)((long)pvVar15 + 1);
      lVar13 = lVar13 + 1;
    }
    local_248 = (stat *)((long)local_248->__unused + lVar13 + -0x78);
    if ((ulong)((long)local_1f0->__unused + psVar28[0x38].__unused[1] + -0x78) < 0x2000) {
      memcpy((void *)((long)psVar28->__unused + psVar28[0x38].__unused[1] + -0x78),psVar43,
             (size_t)local_1f0);
      lVar13 = psVar28[0x38].__unused[2];
      lVar24 = psVar43[0x38].__unused[2];
      psVar28[0x38].__unused[1] = psVar28[0x38].__unused[1] + psVar43[0x38].__unused[1];
      psVar28[0x38].__unused[2] = lVar13 + lVar24;
    }
    else {
      psVar28[0x39].st_dev = (__dev_t)psVar43;
      psVar32 = (stat *)((long)local_248 - local_238[0x38].__unused[2]);
      psVar28 = psVar43;
      if (local_250 < psVar32) {
        psVar43 = local_238;
        local_248 = psVar32;
        local_238 = (stat *)local_238[0x39].st_dev;
      }
      else {
        psVar43 = (stat *)xmalloc(0x2018);
      }
    }
  }
  psVar32 = (stat *)(ulong)uVar30;
  free(psVar43);
  puVar41 = (undefined1 *)local_238;
  if ((local_1f0 == (stat *)0x0) ||
     (psVar43 = (stat *)__errno_location(), (int)psVar43->st_dev == 0xb)) {
    cVar3 = line_end;
    puVar27 = (undefined1 *)psVar28[0x38].__unused[1];
    local_220 = (stat *)CONCAT71(local_220._1_7_,
                                 local_250 == (stat *)0x0 || (stat *)puVar27 == (stat *)0x0);
    if (local_250 != (stat *)0x0 && (stat *)puVar27 != (stat *)0x0) goto LAB_001040e6;
  }
  else {
    puVar27 = (undefined1 *)quotearg_style(4,local_240);
    uVar17 = dcgettext(0,"error reading %s",5);
    error(0,(int)psVar43->st_dev,uVar17,puVar27);
    local_250 = psVar43;
  }
  if (local_238 != (stat *)0x0) goto LAB_00103ed0;
  goto LAB_0010394f;
LAB_001040e6:
  if (((undefined1 *)((long)psVar28[-1].__unused + 0x17))[(long)puVar27] != line_end) {
    psVar28[0x38].__unused[2] = psVar28[0x38].__unused[2] + 1;
    local_248 = (stat *)((long)&local_248->st_dev + 1);
  }
  psVar39 = (stat *)((long)local_248 - local_238[0x38].__unused[2]);
  psVar28 = local_248;
  psVar43 = local_238;
  while (psVar22 = psVar39, local_250 < psVar22) {
    psVar43 = (stat *)psVar43[0x39].st_dev;
    psVar28 = psVar22;
    psVar39 = (stat *)((long)psVar22 - psVar43[0x38].__unused[2]);
  }
  lVar13 = psVar43[0x38].__unused[1];
  puVar27 = (undefined1 *)local_250;
  psVar39 = psVar43;
  psVar22 = local_250;
  if (local_250 < psVar28) {
    lVar24 = (long)psVar28 - (long)local_250;
    local_248 = (stat *)CONCAT71(local_248._1_7_,bVar38);
    do {
      pvVar15 = rawmemchr(psVar39,(int)cVar3);
      psVar39 = (stat *)((long)pvVar15 + 1);
      lVar24 = lVar24 + -1;
      puVar27 = (undefined1 *)local_250;
      psVar22 = psVar43;
    } while (lVar24 != 0);
  }
  local_250 = psVar22;
  if ((stat *)((long)psVar43->__unused + lVar13 + -0x78) != psVar39) goto LAB_00104391;
  goto LAB_00104190;
  while (psVar32 = (stat *)&(psVar32->st_mtim).tv_nsec, psVar32 != local_210) {
LAB_001050f4:
    iVar4 = lstat((char *)psVar32->st_dev,local_218);
    if ((iVar4 == 0) && ((local_d8.st_mode & 0xf000) == 0xa000)) goto LAB_0010467d;
  }
  lVar13 = 0;
  do {
    if (((-1 < *(int *)((long)&local_228->st_blksize + lVar13)) &&
        (uVar30 = *(uint *)((long)&local_228->st_size + lVar13) & 0xf000, uVar30 != 0x8000)) &&
       (uVar30 != 0x1000)) goto LAB_0010467d;
    lVar13 = lVar13 + 0x60;
  } while ((stat *)lVar13 != local_1e8);
  if ((local_1dd != 0) || (follow_mode != 2)) {
    uVar30 = inotify_init();
    puVar41 = (undefined1 *)(ulong)uVar30;
    psVar28 = local_1e8;
    if ((int)uVar30 < 0) goto LAB_001058dc;
    iVar4 = fflush_unlocked(_stdout);
    psVar39 = local_210;
    if (iVar4 != 0) goto LAB_00105a5a;
    psVar25 = (stat *)0x0;
    local_250 = (stat *)hash_initialize(local_260,0,0x100000);
    if (local_250 != (stat *)0x0) {
      __mask = 0xc06;
      if (follow_mode != 1) {
        __mask = 2;
      }
      local_258 = CONCAT44(local_258._4_4_,uVar30);
      local_200 = local_200 & 0xffffffffffffff00;
      uVar37 = 0;
      cVar42 = '\0';
      local_248 = (stat *)CONCAT44(local_248._4_4_,__mask);
      psVar43 = local_228;
      do {
        iVar4 = follow_mode;
        if (*(char *)((long)&psVar43->st_size + 4) == '\0') {
          pcVar35 = (char *)psVar43->st_dev;
          sVar23 = strlen(pcVar35);
          *(undefined4 *)((long)&psVar43->st_blocks + 4) = 0xffffffff;
          if (uVar37 < sVar23) {
            uVar37 = sVar23;
          }
          if (iVar4 == 1) {
            lVar13 = dir_len(pcVar35);
            local_208 = (stat *)(pcVar35 + lVar13);
            uVar2 = (undefined1)local_208->st_dev;
            local_240 = (stat *)CONCAT71(local_240._1_7_,uVar2);
            lVar24 = last_component(pcVar35);
            pcVar36 = ".";
            (psVar43->st_atim).tv_nsec = lVar24 - (long)pcVar35;
            *(undefined1 *)&local_208->st_dev = 0;
            if (lVar13 != 0) {
              pcVar36 = (char *)psVar43->st_dev;
            }
            iVar4 = inotify_add_watch(uVar30,pcVar36,0x784);
            *(int *)&(psVar43->st_atim).tv_sec = iVar4;
            *(undefined1 *)(psVar43->st_dev + lVar13) = uVar2;
            if ((int)(psVar43->st_atim).tv_sec < 0) {
              piVar21 = __errno_location();
              puVar41 = (undefined1 *)(ulong)uVar30;
              if (*piVar21 == 0x1c) goto LAB_001059a4;
              uVar17 = quotearg_style(4,psVar43->st_dev);
              uVar26 = dcgettext(0,"cannot watch parent directory of %s",5);
              error(0,*piVar21,uVar26,uVar17);
              goto LAB_001058bf;
            }
          }
          iVar4 = inotify_add_watch(uVar30,(char *)psVar43->st_dev,__mask);
          *(int *)((long)&psVar43->st_blocks + 4) = iVar4;
          if (iVar4 < 0) {
            if ((int)psVar43->st_blksize != -1) {
              cVar42 = cVar3;
            }
            puVar34 = (uint *)__errno_location();
            if ((*puVar34 & 0xffffffef) == 0xc) {
              puVar41 = (undefined1 *)(ulong)uVar30;
              goto LAB_001059a4;
            }
            if (*puVar34 != *(uint *)((long)&psVar43->st_blksize + 4)) {
              local_240 = (stat *)quotearg_style(4,psVar43->st_dev);
              uVar17 = dcgettext(0,"cannot watch %s",5);
              error(0,*puVar34,uVar17,local_240);
            }
          }
          else {
            lVar13 = hash_insert(local_250,psVar43);
            if (lVar13 == 0) break;
            local_200 = CONCAT71(local_200._1_7_,cVar3);
          }
        }
        psVar43 = (stat *)&(psVar43->st_mtim).tv_nsec;
        if (psVar43 == local_210) {
          puVar41 = (undefined1 *)(ulong)uVar30;
          if (follow_mode == 2) {
            if (cVar42 != '\0') goto LAB_001058bf;
            if ((char)local_200 == '\0') {
LAB_0010486a:
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
          }
          local_1d0 = (undefined *)((long)&local_228[-1].st_size + (long)local_1e8);
          psVar43 = local_228;
          do {
            if (*(char *)((long)&psVar43->st_size + 4) == '\0') {
              if (follow_mode == 1) {
                recheck(psVar43,0);
              }
              else if ((((int)psVar43->st_blksize != -1) &&
                       (iVar4 = stat((char *)psVar43->st_dev,local_218), iVar4 == 0)) &&
                      ((lVar13._0_4_ = psVar43->st_gid, lVar13._4_4_ = psVar43->__pad0,
                       lVar13 != CONCAT26(local_d8.st_dev._6_2_,
                                          CONCAT24(local_d8.st_dev._4_2_,(int)local_d8.st_dev)) ||
                       (psVar43->st_rdev != local_d8.st_ino)))) {
                uVar17 = pretty_name_isra_0(psVar43->st_dev);
                uVar17 = quotearg_style(4,uVar17);
                uVar26 = dcgettext(0,"%s was replaced",5);
                piVar21 = __errno_location();
                error(0,*piVar21,uVar26,uVar17);
                goto LAB_001058bf;
              }
              check_fspec(psVar43);
            }
            psVar43 = (stat *)&(psVar43->st_mtim).tv_nsec;
            if (psVar43 == local_210) {
              local_220 = (stat *)(uVar37 + 0x11);
              psVar32 = (stat *)0x0;
              psVar39 = (stat *)0x0;
              local_258 = xmalloc();
              local_240 = (stat *)0x0;
              local_210 = (stat *)CONCAT44(local_210._4_4_,3);
              local_1f0 = local_1e8;
              psVar43 = (stat *)0x0;
              puVar34 = (uint *)local_260;
              goto LAB_00105449;
            }
          } while( true );
        }
      } while( true );
    }
LAB_00105851:
    xalloc_die();
LAB_00105856:
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
LAB_0010467d:
  disable_inotify = '\x01';
  local_258 = CONCAT44(local_258._4_4_,nbpids);
  if (nbpids != 0) goto LAB_00104d98;
  if (((follow_mode == 2) && (local_260 == (stat *)0x1)) && ((int)local_228->st_blksize != -1)) {
    local_258 = CONCAT44(local_258._4_4_,(uint)((local_228->st_size & 0xf000) != 0x8000));
  }
  do {
    local_218 = (stat *)((ulong)local_218 & 0xffffffffffffff00);
    local_210 = (stat *)(CONCAT71(local_210._1_7_,(char)local_258) & 0xffffffffffffff01);
    local_248 = (stat *)((long)local_260[-1].__unused + 0x17);
    local_240 = (stat *)CONCAT44(local_240._4_4_,((uint)local_258 ^ 1) << 0xb);
    puVar34 = (uint *)((undefined1 *)((long)&local_228->st_size + 4) + (long)psVar43);
    local_220 = (stat *)puVar34;
LAB_001046e3:
    local_250 = (stat *)((ulong)local_250 & 0xffffffffffffff00);
    psVar43 = (stat *)0x0;
    psVar32 = local_228;
    while( true ) {
      bVar38 = *(byte *)((long)&psVar32->st_size + 4);
      pcVar40 = (char *)(ulong)bVar38;
      if (bVar38 != 0) goto LAB_0010479e;
      uVar30 = (uint)psVar32->st_blksize;
      psVar39 = (stat *)(ulong)uVar30;
      if (-1 < (int)uVar30) break;
      psVar43 = (stat *)((long)&psVar43->st_dev + 1);
      plVar33 = &(psVar32->st_mtim).tv_nsec;
      recheck(psVar32,local_258 & 0xffffffff);
      psVar32 = (stat *)plVar33;
      if (local_260 == psVar43) {
        do {
          psVar39 = local_220;
          if ((reopen_inaccessible_files == 0) || (follow_mode != 1)) {
            pcVar35 = (char *)((long)&local_228->st_size + 4);
            while (((int)*(__blksize_t *)(pcVar35 + 4) < 0 &&
                   ((*pcVar35 == '\x01' || (reopen_inaccessible_files == 0))))) {
              pcVar35 = pcVar35 + 0x60;
              if ((stat *)pcVar35 == local_220) {
LAB_001055cb:
                uVar17 = dcgettext(0,"no files remaining",5);
                error(1,0,uVar17);
                do {
                  check_fspec(psVar32,&local_1d0);
LAB_0010556b:
                  psVar39 = (stat *)((long)psVar39->__unused + ((local_200 & 0xffffffff) - 0x68));
LAB_00105449:
                  while( true ) {
                    if (((follow_mode == 1) && (reopen_inaccessible_files == 0)) &&
                       (lVar13 = hash_get_n_entries(), lVar13 == 0)) goto LAB_001055cb;
                    iVar4 = (int)puVar41;
                    if (psVar39 < local_240) break;
                    do {
                      if (nbpids == 0) {
LAB_001056a8:
                        iVar9 = -1;
                      }
                      else {
                        if ((char)psVar43 != '\0') goto LAB_00105856;
                        uVar30 = writers_are_dead();
                        psVar43 = (stat *)(ulong)uVar30;
                        iVar9 = 0;
                        if (((char)uVar30 == '\0') && (iVar9 = 0, 0.0 < local_230)) {
                          if (_LC97 <= local_230) goto LAB_001056a8;
                          iVar9 = (int)(_LC98 * local_230);
                          iVar9 = iVar9 + (uint)((double)iVar9 < _LC98 * local_230);
                        }
                      }
                      local_d8.st_dev._4_2_ = 1;
                      local_d8.st_ino = 1;
                      local_d8.st_dev._0_4_ = iVar4;
                      iVar9 = poll((pollfd *)local_218,(ulong)monitor_output + 1,iVar9);
                    } while (iVar9 == 0);
                    if (iVar9 < 0) {
                      pcVar35 = "error waiting for inotify and output events";
                      goto LAB_00104c1e;
                    }
                    if (local_d8.st_ino._6_2_ != 0) goto LAB_00104860;
                    local_240 = (stat *)safe_read((ulong)puVar41 & 0xffffffff,local_258,local_220);
                    if (local_240 != (stat *)0x0) {
                      psVar39 = (stat *)0x0;
                      if ((long)local_240 < 0) {
                        piVar21 = __errno_location();
                        if (*piVar21 == 0x16) goto LAB_00105937;
LAB_00105709:
                        pcVar35 = "error reading inotify event";
                        goto LAB_00104c1e;
                      }
                      break;
                    }
LAB_00105937:
                    if ((int)local_210 == 0) goto LAB_00105709;
                    psVar39 = (stat *)0x0;
                    local_210 = (stat *)CONCAT44(local_210._4_4_,(int)local_210 + -1);
                    local_220 = (stat *)((long)local_220 * 2);
                    local_258 = xrealloc(local_258,local_220);
                    local_240 = (stat *)0x0;
                    psVar32 = local_218;
                  }
                  local_208 = (stat *)((long)psVar39->__unused + (local_258 - 0x78));
                  uVar30 = *(uint *)((long)&local_208->st_ino + 4);
                  _Var1 = local_208->st_dev;
                  iVar9 = (int)local_208->st_dev;
                  local_200 = (ulong)uVar30;
                  psVar28 = local_1f0;
                  if ((_Var1 & 0x40000000000) == 0) {
                    if (uVar30 == 0) goto LAB_00105584;
LAB_00105491:
                    pcVar40 = (char *)0x0;
                    psVar32 = local_228;
                    psVar22 = psVar25;
                    do {
                      psVar25 = psVar22;
                      local_1e8 = psVar39;
                      if (((int)(psVar32->st_atim).tv_sec == iVar9) &&
                         (iVar8 = strcmp((char *)&local_208->st_nlink,
                                         (char *)((psVar32->st_atim).tv_nsec + psVar32->st_dev)),
                         psVar25 = psVar22, iVar8 == 0)) {
                        if ((uint *)pcVar40 == puVar34) break;
                        psVar32 = (stat *)(local_228->__unused + (long)pcVar40 * 0xc + -0xf);
                        if ((_Var1 & 0x20000000000) == 0) {
                          uVar30 = inotify_add_watch(iVar4,(char *)psVar32->st_dev,
                                                     (uint32_t)local_248);
                          pcVar40 = (char *)(ulong)uVar30;
                          if ((int)uVar30 < 0) {
                            psVar25 = (stat *)__errno_location();
                            if ((psVar25->st_dev & 0xffffffef) == 0xc) goto LAB_001059a4;
                            uVar17 = quotearg_style(4,psVar32->st_dev);
                            uVar26 = dcgettext(0,"cannot watch %s",5);
                            psVar22 = psVar25;
                            error(0,(int)psVar25->st_dev,uVar26,uVar17);
                            uVar5 = *(uint *)((long)&psVar32->st_blocks + 4);
                            local_1e8 = psVar25;
                            if (-1 < (int)uVar5) {
LAB_0010591d:
                              inotify_rm_watch(iVar4,uVar5);
                              hash_remove(local_250,psVar32);
                            }
                            *(uint *)((long)&psVar32->st_blocks + 4) = uVar30;
                            pcVar40 = (char *)(ulong)(uVar30 + 1);
                            psVar25 = psVar22;
                            if (uVar30 + 1 == 0) break;
                          }
                          else {
                            uVar5 = *(uint *)((long)&psVar32->st_blocks + 4);
                            if (-1 < (int)uVar5) {
                              if (uVar30 != uVar5) goto LAB_0010591d;
                              goto LAB_00105516;
                            }
                            *(uint *)((long)&psVar32->st_blocks + 4) = uVar30;
                          }
                          pcVar40 = (char *)hash_remove(local_250,psVar32);
                          if (((stat *)pcVar40 != (stat *)0x0) && (psVar32 != (stat *)pcVar40)) {
                            if (follow_mode == 1) {
                              recheck(pcVar40,0);
                            }
                            *(undefined4 *)((long)&((stat *)pcVar40)->st_blocks + 4) = 0xffffffff;
                            uVar17 = pretty_name_isra_0(((stat *)pcVar40)->st_dev);
                            close_fd((int)((stat *)pcVar40)->st_blksize,uVar17);
                          }
                          lVar13 = hash_insert(local_250,psVar32);
                          if (lVar13 == 0) goto LAB_00105851;
                        }
LAB_00105516:
                        psVar25 = psVar22;
                        if (follow_mode == 1) {
                          recheck(psVar32,0);
                          psVar25 = psVar22;
                        }
                        goto LAB_00105523;
                      }
                      pcVar40 = (char *)((long)&((stat *)pcVar40)->st_dev + 1);
                      psVar32 = (stat *)&(psVar32->st_mtim).tv_nsec;
                      psVar22 = psVar25;
                    } while (puVar34 != (uint *)pcVar40);
                    goto LAB_0010556b;
                  }
                  if (uVar30 != 0) goto LAB_00105491;
                  psVar32 = (stat *)0x0;
                  do {
                    if ((int)local_228->__unused[(long)psVar32 * 0xc + -6] == iVar9) {
                      pcVar40 = "directory containing watched file was removed";
                      goto LAB_0010574b;
                    }
                    psVar32 = (stat *)((long)&psVar32->st_dev + 1);
                  } while ((stat *)puVar34 != psVar32);
LAB_00105584:
                  local_1c8._68_4_ = iVar9;
                  psVar32 = (stat *)hash_lookup(local_250,local_1c8);
                  if (psVar32 == (stat *)0x0) goto LAB_0010556b;
LAB_00105523:
                  _Var1 = local_208->st_dev;
                  if ((_Var1 & 0xe0400000000) != 0) {
                    if (((_Var1 & 0x40000000000) != 0) ||
                       ((reopen_inaccessible_files == 0 && ((_Var1 & 0x80000000000) != 0)))) {
                      inotify_rm_watch(iVar4,*(int *)((long)&psVar32->st_blocks + 4));
                      hash_remove(local_250,psVar32);
                    }
                    recheck(psVar32,0);
                    goto LAB_0010556b;
                  }
                } while( true );
              }
            }
          }
          if (((byte)local_250 == '\x01') && ((char)local_210 == '\0')) {
            if ((monitor_output == 0) || (iVar4 = iopoll(0xffffffff,1,0), iVar4 != -2))
            goto LAB_001046e3;
LAB_00104860:
            raise(0xd);
            goto LAB_0010486a;
          }
          iVar4 = fflush_unlocked(_stdout);
          if (iVar4 == 0) {
            if ((monitor_output != 0) && (iVar4 = iopoll(0xffffffff,1,0), iVar4 == -2))
            goto LAB_00104860;
            if ((byte)local_250 != '\0') goto LAB_001046e3;
            if ((char)local_218 != '\0') goto LAB_0010399f;
            cVar3 = writers_are_dead();
            local_218 = (stat *)CONCAT71(local_218._1_7_,cVar3);
            if ((cVar3 != '\0') || (iVar4 = xnanosleep(local_230), iVar4 == 0)) goto LAB_001046e3;
            pcVar35 = "cannot read realtime clock";
LAB_00104c1e:
            psVar32 = (stat *)dcgettext(0,pcVar35,5);
            piVar21 = __errno_location();
            error(1,*piVar21,psVar32);
LAB_00104c3e:
            recheck(psVar32,(int)psVar32->st_blocks != 0);
            psVar25 = (stat *)0x0;
            (psVar32->st_mtim).tv_sec = 0;
LAB_00104a9d:
            if ((((int)psVar39 == (int)psVar32->st_blksize) &&
                ((local_d8.st_mode & 0xf000) != 0x8000)) && (local_260 == (stat *)0x1)) {
              uVar5 = (uint)puVar34;
              *(__mode_t *)&psVar32->st_size = local_d8.st_mode;
              pcVar40 = (char *)((ulong)local_238 & 0xff);
              psVar32->st_nlink = local_d8.st_mtim.tv_sec;
              psVar32->st_mode = (undefined4)local_d8.st_mtim.tv_nsec;
              psVar32->st_uid = local_d8.st_mtim.tv_nsec._4_4_;
joined_r0x001049c4:
              puVar34 = (uint *)(ulong)(uVar5 & 0xf000);
              if ((uVar5 & 0xf000) == 0x8000) {
                if (local_d8.st_size < (long)psVar32->st_ino) goto LAB_00105a5f;
                goto LAB_00104b08;
              }
              if ((local_248 != psVar43) && (print_headers != '\0')) goto LAB_00104b3e;
              if ((int)psVar32->st_blocks != 0) goto LAB_00105b41;
LAB_001049e9:
              lVar13 = -1;
              goto LAB_001049f0;
            }
          }
          else {
LAB_00105a5a:
            write_error();
LAB_00105a5f:
            local_208 = (stat *)quotearg_n_style_colon(0,3,puVar41);
            uVar17 = dcgettext(0,"%s: file truncated",5);
            error(0,0,uVar17,local_208);
            _Var20 = lseek((int)psVar39,0,0);
            if (_Var20 < 0) {
              xlseek_part_0(0,0,puVar41);
            }
            psVar32->st_ino = 0;
LAB_00104b08:
            if ((local_248 == psVar43) || (print_headers == '\0')) {
              if ((int)psVar32->st_blocks == 0) goto LAB_00104b23;
LAB_00105b41:
              lVar13 = -2;
            }
            else {
LAB_00104b3e:
              puVar29 = &_LC9;
              if (first_file_3 == '\0') {
                puVar29 = &_LC10;
              }
              __printf_chk(2,"%s==> %s <==\n",puVar29,puVar41);
              first_file_3 = '\0';
              if ((int)psVar32->st_blocks != 0) goto LAB_00105b41;
              if ((int)puVar34 != 0x8000) goto LAB_001049e9;
LAB_00104b23:
              if (*(char *)((long)&psVar32->st_size + 5) == '\0') goto LAB_001049e9;
              lVar13 = local_d8.st_size - psVar32->st_ino;
            }
LAB_001049f0:
            auVar46 = dump_remainder(0,puVar41,(ulong)psVar39 & 0xffffffff,lVar13);
            lVar13 = auVar46._0_8_;
            bVar38 = (byte)((ulong)pcVar40 & 0xffffffff) & lVar13 != 0;
            psVar25 = (stat *)CONCAT71((int7)(((ulong)pcVar40 & 0xffffffff) >> 8),bVar38);
            local_248 = psVar43;
            if (bVar38 == 0) {
              psVar25 = (stat *)(CONCAT71(auVar46._9_7_,lVar13 != 0) & 0xffffffff);
            }
            else {
              (psVar32->st_mtim).tv_sec = 0;
            }
LAB_00104795:
            local_250 = (stat *)CONCAT71(local_250._1_7_,(byte)local_250 | (byte)psVar25);
            psVar32->st_ino = psVar32->st_ino + lVar13;
          }
LAB_0010479e:
          psVar43 = (stat *)((long)&psVar43->st_dev + 1);
          psVar32 = (stat *)&(psVar32->st_mtim).tv_nsec;
        } while (local_260 == psVar43);
      }
    }
    puVar41 = (undefined1 *)psVar32->st_dev;
    if (((char)((stat *)puVar41)->st_dev == '-') &&
       (*(char *)((long)&((stat *)puVar41)->st_dev + 1) == '\0')) {
      puVar41 = (undefined1 *)dcgettext(0,"standard input",5);
    }
    uVar5 = (uint)psVar32->st_size;
    puVar34 = (uint *)(ulong)uVar5;
    iVar4 = (int)psVar32->st_blocks;
    if ((uint)local_258 == iVar4) {
LAB_00104772:
      if (iVar4 != 0) {
        lVar13 = dump_remainder(0,puVar41,psVar39,0xfffffffffffffffe);
        psVar25 = (stat *)CONCAT71((int7)((ulong)psVar25 >> 8),lVar13 != 0);
        goto LAB_00104795;
      }
      iVar4 = fstat(uVar30,&local_d8);
      if (iVar4 == 0) {
        if (((uint)psVar32->st_size == local_d8.st_mode) &&
           ((((local_d8.st_mode & 0xf000) != 0x8000 ||
             ((stat *)psVar32->st_ino == (stat *)local_d8.st_size)) &&
            (lVar24._0_4_ = psVar32->st_mode, lVar24._4_4_ = psVar32->st_uid,
            ((uint)(local_d8.st_mtim.tv_nsec < lVar24) - (uint)(lVar24 < local_d8.st_mtim.tv_nsec))
            + ((uint)(local_d8.st_mtim.tv_sec < (long)psVar32->st_nlink) -
              (uint)((long)psVar32->st_nlink < local_d8.st_mtim.tv_sec)) * 2 == 0)))) {
          uVar37 = (psVar32->st_mtim).tv_sec;
          bVar44 = uVar37 < max_n_unchanged_stats_between_opens;
          (psVar32->st_mtim).tv_sec = uVar37 + 1;
          if (bVar44) goto LAB_00104a9d;
          if (follow_mode == 1) goto LAB_00104c3e;
          goto LAB_00104a9d;
        }
        if ((uint)psVar32->st_blksize != uVar30) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("fd == f[i].fd","src/tail.c",0x4e7,"tail_forever");
        }
        *(__mode_t *)&psVar32->st_size = local_d8.st_mode;
        (psVar32->st_mtim).tv_sec = 0;
        psVar32->st_nlink = local_d8.st_mtim.tv_sec;
        psVar32->st_mode = (undefined4)local_d8.st_mtim.tv_nsec;
        psVar32->st_uid = local_d8.st_mtim.tv_nsec._4_4_;
        goto joined_r0x001049c4;
      }
      *(undefined4 *)&psVar32->st_blksize = 0xffffffff;
      puVar34 = (uint *)__errno_location();
      *(int *)((long)&psVar32->st_blksize + 4) = (int)((stat *)puVar34)->st_dev;
      uVar17 = quotearg_n_style_colon(0,3,puVar41);
      error(0,(int)((stat *)puVar34)->st_dev,&_LC17,uVar17);
      close(uVar30);
      goto LAB_0010479e;
    }
    uVar7 = rpl_fcntl(psVar39,3);
    if ((-1 < (int)uVar7) &&
       ((uVar7 == ((uint)local_240 | uVar7) || (iVar4 = rpl_fcntl(psVar39,4), iVar4 != -1)))) {
      *(uint *)&psVar32->st_blocks = (uint)local_258;
      iVar4 = (uint)local_258;
      goto LAB_00104772;
    }
    if (((psVar32->st_size & 0xf000) == 0x8000) && (piVar21 = __errno_location(), *piVar21 == 1)) {
      iVar4 = (int)psVar32->st_blocks;
      goto LAB_00104772;
    }
    puVar34 = (uint *)quotearg_n_style_colon(0,3,puVar41);
    psVar22 = (stat *)dcgettext(0,"%s: cannot change nonblocking mode",5);
    piVar21 = __errno_location();
    puVar27 = (undefined1 *)puVar34;
    error(1,*piVar21,psVar22,puVar34);
    do {
      uVar2 = SUB81(pcVar40,0);
      sVar23 = safe_read(local_258 & 0xffffffff,local_248,local_220);
      if ((long)sVar23 < 0) {
        psVar32 = (stat *)((ulong)local_238 & 0xffffffff);
LAB_00104f11:
        uVar2 = SUB81(psVar43,0);
        puVar27 = (undefined1 *)quotearg_style(4,local_240);
        uVar17 = dcgettext(0,"error reading %s",5);
        piVar21 = __errno_location();
        error(0,*piVar21,uVar17);
LAB_00104e4f:
        free(local_248);
        local_220 = (stat *)CONCAT71(local_220._1_7_,uVar2);
        goto LAB_0010394f;
      }
      local_1c8._0_8_ = (long)psVar22->__unused + (sVar23 - 0x78);
      psVar28 = (stat *)puVar27;
      if (sVar23 == 0) {
LAB_00104e4c:
        psVar32 = (stat *)((ulong)local_238 & 0xffffffff);
        puVar27 = (undefined1 *)psVar28;
        goto LAB_00104e4f;
      }
      while( true ) {
        psVar28 = psVar39;
        uVar17 = local_1c8._0_8_;
        uVar2 = SUB81(pcVar40,0);
        iVar4 = (int)line_end;
        __n = sVar23;
        psVar32 = local_250;
        while ((local_250 = psVar32, local_208 = (stat *)puVar34, local_200 = sVar23, __n != 0 &&
               (puVar27 = (undefined1 *)memrchr(local_248,iVar4,__n), (stat *)puVar27 != (stat *)0x0
               ))) {
          __n = (long)puVar27 - (long)local_248;
          psVar32 = (stat *)((long)local_250[-1].__unused + 0x17);
          if (local_250 == (stat *)0x0) {
            lVar13 = sVar23 - (__n + 1);
            if (lVar13 != 0) {
              xwrite_stdout_part_0((undefined *)((long)&((stat *)puVar27)->st_dev + 1),lVar13);
              local_250 = (stat *)uVar17;
            }
            psVar28 = (stat *)((long)psVar28 - uVar17);
            lVar13 = dump_remainder(0,local_240,local_258 & 0xffffffff,psVar28);
            local_1c8._0_8_ = (long)(local_1c8._0_8_ + 0x78) + lVar13 + -0x78;
            goto LAB_00104e4c;
          }
        }
        if ((stat *)puVar41 != psVar22) break;
        psVar32 = (stat *)((ulong)local_238 & 0xffffffff);
        _Var20 = lseek((uint)local_258,(__off_t)puVar41,0);
        if (-1 < _Var20) {
          lVar13 = dump_remainder(0,local_240,local_258 & 0xffffffff);
          local_1c8._0_8_ = (long)((stat *)puVar41)->__unused + lVar13 + -0x78;
          goto LAB_00104e4c;
        }
LAB_00104c92:
        xlseek_part_0(puVar41,0,local_240);
LAB_00104ca1:
        sVar23 = safe_read(local_258 & 0xffffffff,local_248,puVar27);
        if ((long)sVar23 < 0) goto LAB_00104f11;
        local_1c8._0_8_ = (long)local_208->__unused + (sVar23 - 0x78);
        psVar22 = local_208;
        psVar39 = psVar28;
        local_238 = psVar32;
        if ((sVar23 != 0) &&
           (puVar27 = (undefined1 *)local_248,
           *(char *)((long)local_248->__unused + (sVar23 - 0x79)) != line_end)) {
          local_250 = (stat *)((long)local_250[-1].__unused + 0x17);
        }
      }
      psVar22 = (stat *)((long)psVar22 - (long)local_220);
      _Var20 = lseek((uint)local_258,(__off_t)psVar22,0);
      psVar39 = psVar28;
    } while (-1 < _Var20);
    xlseek_part_0(psVar22,0,local_240);
LAB_00104d98:
    local_258 = local_258 & 0xffffffff00000000;
  } while( true );
LAB_001059a4:
  pcVar40 = "inotify resources exhausted";
LAB_0010574b:
  uVar17 = dcgettext(0,pcVar40,5);
  error(0,0,uVar17);
LAB_001058bf:
  hash_free(local_250);
  close((int)puVar41);
  piVar21 = __errno_location();
  *piVar21 = 0;
LAB_001058dc:
  uVar17 = dcgettext(0,"inotify cannot be used, reverting to polling",5);
  piVar21 = __errno_location();
  error(0,*piVar21,uVar17);
  psVar43 = psVar28;
  goto LAB_0010467d;
}


