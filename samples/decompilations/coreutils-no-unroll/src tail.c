
ulong wd_hasher(long param_1,ulong param_2)

{
  return (ulong)(long)*(int *)(param_1 + 0x44) % param_2;
}



undefined4 wd_comparator(long param_1,long param_2)

{
  return CONCAT31((int3)((uint)*(int *)(param_2 + 0x44) >> 8),
                  *(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44));
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

size_t xwrite_stdout(void *param_1,size_t param_2)

{
  undefined1 *puVar1;
  size_t in_RAX;
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
  
  if (param_2 == 0) {
    return in_RAX;
  }
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
        goto LAB_00100238;
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
            xwrite_stdout(__s,(long)puVar1 - (long)__s);
            sVar2 = 0;
          }
          else {
            sVar2 = 0;
          }
          goto LAB_00100238;
        }
      }
    }
    sVar2 = 0xffffffff;
  }
LAB_00100238:
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
        goto LAB_00100238;
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
            xwrite_stdout(__s,(long)puVar1 - (long)__s);
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
          }
          goto LAB_00100238;
        }
      }
    }
    uVar4 = 0xffffffff;
  }
LAB_00100238:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long dump_remainder(char param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 local_2048 [8200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0xffffffffffffffff) {
    lVar9 = 0;
    while( true ) {
      lVar2 = safe_read(param_3,local_2048,0x2000);
      if (lVar2 < 0) break;
      if (lVar2 == 0) goto LAB_001003c6;
      if (param_1 != '\0') {
        puVar6 = &_LC5;
        if (first_file_3 == '\0') {
          puVar6 = &_LC6;
        }
        __printf_chk(2,"%s==> %s <==\n",puVar6,param_2);
        first_file_3 = '\0';
      }
      lVar9 = lVar9 + lVar2;
      param_1 = '\0';
      xwrite_stdout(local_2048,lVar2);
    }
    piVar3 = __errno_location();
    iVar1 = *piVar3;
joined_r0x0010047a:
    if (iVar1 != 0xb) {
      uVar4 = quotearg_style(4,param_2);
      uVar5 = dcgettext(0,"error reading %s",5);
      error(1,*piVar3,uVar5,uVar4);
      goto LAB_001004b9;
    }
  }
  else {
    lVar9 = 0;
    uVar8 = param_4;
    do {
      uVar7 = 0x2000;
      if (uVar8 < 0x2001) {
        uVar7 = uVar8;
      }
      lVar2 = safe_read(param_3,local_2048,uVar7);
      if (lVar2 < 0) {
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        goto joined_r0x0010047a;
      }
      if (lVar2 == 0) break;
      if (param_1 != '\0') {
        puVar6 = &_LC5;
        if (first_file_3 == '\0') {
          puVar6 = &_LC6;
        }
        __printf_chk(2,"%s==> %s <==\n",puVar6,param_2);
        first_file_3 = '\0';
      }
      lVar9 = lVar9 + lVar2;
      xwrite_stdout(local_2048,lVar2);
      uVar8 = uVar8 - lVar2;
      param_1 = uVar8 == 0 || param_4 == 0xfffffffffffffffe;
    } while (uVar8 != 0 && param_4 != 0xfffffffffffffffe);
  }
LAB_001003c6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar9;
  }
LAB_001004b9:
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
        goto LAB_00100538;
      }
      if ((long)uVar1 < 0) {
        uVar2 = quotearg_style(4,param_1);
        uVar3 = dcgettext(0,"error reading %s",5);
        piVar4 = __errno_location();
        error(0,*piVar4,uVar3,uVar2);
        uVar2 = 1;
        goto LAB_00100538;
      }
      *param_4 = *param_4 + uVar1;
      if (param_3 < uVar1) {
        xwrite_stdout(auStack_2038 + param_3,uVar1 - param_3);
        break;
      }
      param_3 = param_3 - uVar1;
    } while (param_3 != 0);
  }
  uVar2 = 0;
LAB_00100538:
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
    goto LAB_0010078a;
  }
  if (local_98.f_type != 0x2fc12fc1) {
    if (local_98.f_type < 0x2fc12fc2) {
      if (local_98.f_type != 0xadf5) {
        if (local_98.f_type < 0xadf6) {
          if (local_98.f_type < 0x4007) {
            if (0x3fff < local_98.f_type) {
              bVar5 = (0x51UL >> (local_98.f_type & 0x3fU) & 1) == 0;
              goto LAB_0010078a;
            }
            if (local_98.f_type < 0x1390) {
              if (0x1372 < local_98.f_type) {
                bVar5 = (0x10001401UL >> (local_98.f_type - 0x1373U & 0x3f) & 1) == 0;
                goto LAB_0010078a;
              }
              if (local_98.f_type != 0x187) {
                if (local_98.f_type < 0x188) {
                  bVar5 = (local_98.f_type - 0x2fU & 0xfffffffffffffffb) != 0;
                }
                else {
                  bVar5 = local_98.f_type != 0x7c0;
                }
                goto LAB_0010078a;
              }
            }
            else if (local_98.f_type != 0x2478) {
              if (0x2478 < local_98.f_type) {
                bVar5 = local_98.f_type != 0x3434;
                goto LAB_0010078a;
              }
              if (local_98.f_type != 0x1cd1) {
                bVar5 = local_98.f_type != 0x2468;
                goto LAB_0010078a;
              }
            }
          }
          else if (local_98.f_type != 0x5df5) {
            if (local_98.f_type < 0x5df6) {
              if (local_98.f_type != 0x4858) {
                if (local_98.f_type < 0x4859) {
                  if (local_98.f_type != 0x4244) {
                    bVar5 = local_98.f_type != 0x482b;
                    goto LAB_0010078a;
                  }
                }
                else if (local_98.f_type != 0x4d44) {
                  bVar5 = local_98.f_type != 0x4d5a;
                  goto LAB_0010078a;
                }
              }
            }
            else if (local_98.f_type != 0x9660) {
              if (0x9660 < local_98.f_type) {
                bVar5 = 2 < local_98.f_type - 0x9fa0U;
                goto LAB_0010078a;
              }
              if (local_98.f_type != 0x7275) {
                bVar5 = local_98.f_type != 0x72b6;
                goto LAB_0010078a;
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
                      goto LAB_0010078a;
                    }
                  }
                  else if (local_98.f_type != 0x11954) {
                    bVar5 = local_98.f_type != 0x27e0eb;
                    goto LAB_0010078a;
                  }
                }
              }
              else if (local_98.f_type != 0x1021997) {
                if (local_98.f_type < 0x1021998) {
                  if (local_98.f_type != 0xc0ffee) {
                    bVar5 = local_98.f_type != 0x1021994;
                    goto LAB_0010078a;
                  }
                }
                else if (local_98.f_type != 0x12fd16d) {
                  bVar5 = 3 < local_98.f_type - 0x12ff7b4U;
                  goto LAB_0010078a;
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
                    goto LAB_0010078a;
                  }
                }
                else if (local_98.f_type != 0x13661366) {
                  bVar5 = local_98.f_type != 0x15013346;
                  goto LAB_0010078a;
                }
              }
            }
            else if (local_98.f_type != 0x24051905) {
              if (local_98.f_type < 0x24051906) {
                if (local_98.f_type != 0x1badface) {
                  bVar5 = local_98.f_type != 0x2011bab0;
                  goto LAB_0010078a;
                }
              }
              else if (local_98.f_type != 0x28cd3d45) {
                bVar5 = local_98.f_type != 0x2bad1dea;
                goto LAB_0010078a;
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
                      goto LAB_0010078a;
                    }
                  }
                  else if (local_98.f_type != 0x444d4142) {
                    bVar5 = local_98.f_type != 0x453dcd28;
                    goto LAB_0010078a;
                  }
                }
              }
              else if (local_98.f_type != 0x52654973) {
                if (local_98.f_type < 0x52654974) {
                  if (local_98.f_type != 0x45584653) {
                    bVar5 = local_98.f_type != 0x50494446;
                    goto LAB_0010078a;
                  }
                }
                else if (local_98.f_type != 0x5345434d) {
                  bVar5 = local_98.f_type != 0x5346314d;
                  goto LAB_0010078a;
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
                    goto LAB_0010078a;
                  }
                }
                else if (local_98.f_type != 0x58295829) {
                  bVar5 = local_98.f_type != 0x58465342;
                  goto LAB_0010078a;
                }
              }
            }
            else if (local_98.f_type != 0x6165676c) {
              if (local_98.f_type < 0x6165676d) {
                if (local_98.f_type != 0x5a4f4653) {
                  bVar5 = local_98.f_type != 0x5dca2df5;
                  goto LAB_0010078a;
                }
              }
              else if (local_98.f_type != 0x62646576) {
                bVar5 = local_98.f_type != 0x62656570;
                goto LAB_0010078a;
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
                    goto LAB_0010078a;
                  }
                }
                else if (local_98.f_type != 0x68191122) {
                  bVar5 = local_98.f_type != 0x6c6f6f70;
                  goto LAB_0010078a;
                }
              }
            }
            else if (local_98.f_type != 0x73727279) {
              if (local_98.f_type < 0x7372727a) {
                if (local_98.f_type != 0x73636673) {
                  bVar5 = local_98.f_type != 0x73717368;
                  goto LAB_0010078a;
                }
              }
              else if (local_98.f_type != 0x74726163) {
                bVar5 = local_98.f_type != 0x858458f6;
                goto LAB_0010078a;
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
                  goto LAB_0010078a;
                }
              }
              else if (local_98.f_type != 0xc97e8168) {
                bVar5 = local_98.f_type != 0xca451a4e;
                goto LAB_0010078a;
              }
            }
          }
          else if (local_98.f_type != 0xf2f52010) {
            if (local_98.f_type < 0xf2f52011) {
              if (local_98.f_type != 0xde5e81e4) {
                bVar5 = local_98.f_type != 0xe0f5e1e2;
                goto LAB_0010078a;
              }
            }
            else if (local_98.f_type != 0xf97cff8c) {
              bVar5 = local_98.f_type != 0xf995e849;
              goto LAB_0010078a;
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_0010078a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long dump_remainder_constprop_0(undefined8 param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined1 local_2048 [8200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0xffffffffffffffff) {
    lVar8 = 0;
    while( true ) {
      lVar2 = safe_read(param_2,local_2048,0x2000);
      if (lVar2 < 0) break;
      if (lVar2 == 0) goto LAB_00100d47;
      lVar8 = lVar8 + lVar2;
      xwrite_stdout(local_2048,lVar2);
    }
    piVar3 = __errno_location();
    iVar1 = *piVar3;
joined_r0x00100dbb:
    if (iVar1 != 0xb) {
      uVar4 = quotearg_style(4,param_1);
      uVar5 = dcgettext(0,"error reading %s",5);
      error(1,*piVar3,uVar5,uVar4);
      goto LAB_00100df6;
    }
  }
  else {
    lVar8 = 0;
    uVar7 = param_3;
    while( true ) {
      uVar6 = 0x2000;
      if (uVar7 < 0x2001) {
        uVar6 = uVar7;
      }
      lVar2 = safe_read(param_2,local_2048,uVar6);
      if (lVar2 < 0) {
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        goto joined_r0x00100dbb;
      }
      if (lVar2 == 0) break;
      lVar8 = lVar8 + lVar2;
      xwrite_stdout(local_2048,lVar2);
      uVar7 = uVar7 - lVar2;
      if ((uVar7 == 0) || (param_3 == 0xfffffffffffffffe)) break;
    }
  }
LAB_00100d47:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar8;
  }
LAB_00100df6:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void check_fspec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  __off_t _Var7;
  int *piVar8;
  long in_FS_OFFSET;
  stat sStack_c8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 7) == -1) goto LAB_00100eca;
  pcVar4 = (char *)*param_1;
  if ((*pcVar4 == '-') && (pcVar4[1] == '\0')) {
    pcVar4 = (char *)dcgettext(0,"standard input",5);
    uVar1 = fstat(*(int *)(param_1 + 7),&sStack_c8);
    if (uVar1 == 0) goto LAB_00100e81;
LAB_00100f2f:
    piVar8 = __errno_location();
    param_2 = (undefined8 *)(ulong)*(uint *)(param_1 + 7);
    *(int *)((long)param_1 + 0x3c) = *piVar8;
    if (1 < *(uint *)(param_1 + 7) + 1) goto LAB_00100fd0;
  }
  else {
    uVar1 = fstat(*(int *)(param_1 + 7),&sStack_c8);
    if (uVar1 != 0) goto LAB_00100f2f;
LAB_00100e81:
    if ((*(uint *)(param_1 + 6) & 0xf000) == 0x8000) {
      if (sStack_c8.st_size < (long)param_1[1]) {
        uVar5 = quotearg_n_style_colon(0,3,pcVar4);
        uVar6 = dcgettext(0,"%s: file truncated",5);
        error(0,0,uVar6,uVar5);
        _Var7 = lseek(*(int *)(param_1 + 7),0,0);
        if (_Var7 < 0) {
          param_2 = (undefined8 *)quotearg_n_style_colon(0,3,pcVar4);
          param_1 = (undefined8 *)dcgettext(0,"%s: cannot seek to offset %jd",5);
          piVar8 = __errno_location();
          error(1,*piVar8,param_1,param_2,0);
        }
        param_1[1] = 0;
      }
      else if ((sStack_c8.st_size == param_1[1]) &&
              (((uint)(sStack_c8.st_mtim.tv_nsec < (long)param_1[3]) -
               (uint)((long)param_1[3] < sStack_c8.st_mtim.tv_nsec)) +
               ((uint)(sStack_c8.st_mtim.tv_sec < (long)param_1[2]) -
               (uint)((long)param_1[2] < sStack_c8.st_mtim.tv_sec)) * 2 == 0)) goto LAB_00100eca;
    }
    if (print_headers != '\0') {
      uVar1 = (uint)((undefined8 *)*param_2 != param_1);
    }
    lVar3 = dump_remainder(uVar1,pcVar4,*(undefined4 *)(param_1 + 7),0xffffffffffffffff);
    param_1[1] = param_1[1] + lVar3;
    if (lVar3 == 0) goto LAB_00100eca;
    *param_2 = param_1;
    iVar2 = fflush_unlocked(_stdout);
    if (iVar2 == 0) goto LAB_00100eca;
    write_error();
LAB_00100fd0:
    iVar2 = close((int)param_2);
    if (iVar2 != 0) {
      close_fd_part_0((ulong)param_2 & 0xffffffff,pcVar4);
    }
  }
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
LAB_00100eca:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void recheck(undefined8 *param_1,uint param_2)

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
  byte *pbVar10;
  __off_t _Var11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined *puVar16;
  long in_FS_OFFSET;
  stat local_d8;
  long local_40;
  
  pbVar10 = (byte *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = *pbVar10 - 0x2d;
  if (uVar15 == 0) {
    uVar15 = (uint)pbVar10[1];
  }
  bVar3 = *(byte *)((long)param_1 + 0x36);
  uVar1 = *(uint *)((long)param_1 + 0x3c);
  if (uVar15 == 0) {
    iVar5 = 0;
    uVar6 = uVar1;
  }
  else {
    iVar5 = open_safer(pbVar10,((param_2 ^ 1) & 0xff) << 0xb);
    uVar6 = *(uint *)((long)param_1 + 0x3c);
  }
  cVar2 = reopen_inaccessible_files;
  cVar4 = disable_inotify;
  if ((*(int *)(param_1 + 7) == -1) == (uVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("valid_file_spec (f)","src/tail.c",0x3d8,"recheck");
  }
  if (reopen_inaccessible_files == '\0') {
    *(undefined1 *)((long)param_1 + 0x36) = 1;
    if (((cVar4 == '\0') && (iVar7 = lstat((char *)*param_1,&local_d8), iVar7 == 0)) &&
       ((local_d8.st_mode & 0xf000) == 0xa000)) goto LAB_00101656;
    if (iVar5 == -1) {
LAB_00101139:
      puVar8 = (uint *)__errno_location();
      pbVar10 = (byte *)*param_1;
      uVar15 = *puVar8;
      *(uint *)((long)param_1 + 0x3c) = uVar15;
      if (*(char *)((long)param_1 + 0x36) == '\0') goto LAB_001013b3;
      if (uVar15 != uVar1) {
        uVar13 = pretty_name_isra_0();
        uVar13 = quotearg_n_style_colon(0,3,uVar13);
        error(0,*puVar8,&_LC16,uVar13);
        pbVar10 = (byte *)*param_1;
      }
    }
    else {
LAB_001011fb:
      iVar7 = fstat(iVar5,&local_d8);
      if (iVar7 < 0) goto LAB_00101139;
      if ((((local_d8.st_mode & 0xf000) - 0x1000 & 0xffffe000) == 0) ||
         ((local_d8.st_mode & 0xb000) == 0x8000)) {
        pcVar9 = (char *)*param_1;
        if ((*pcVar9 == '-') && (pcVar9[1] == '\0')) {
          pcVar9 = (char *)dcgettext(0,"standard input",5);
        }
        cVar4 = fremote(iVar5,pcVar9);
        *(char *)((long)param_1 + 0x35) = cVar4;
        if ((cVar4 == '\0') || (disable_inotify != '\0')) {
          *(undefined4 *)((long)param_1 + 0x3c) = 0;
          if ((uVar1 & 0xfffffffd) == 0) {
            pcVar9 = (char *)*param_1;
            if (*(int *)(param_1 + 7) == -1) {
              uVar13 = pretty_name_isra_0(pcVar9);
              uVar13 = quotearg_style(4,uVar13);
              pcVar9 = "%s has appeared;  following new file";
              goto LAB_00101496;
            }
            if ((param_1[5] == local_d8.st_ino) && (param_1[4] == local_d8.st_dev)) {
              if ((*pcVar9 == '-') && (pcVar9[1] == '\0')) {
                pcVar9 = (char *)dcgettext(0,"standard input",5);
              }
              if ((iVar5 != 0) && (iVar7 = close(iVar5), iVar7 != 0)) {
                close_fd_part_0(iVar5,pcVar9);
              }
              goto LAB_001011a0;
            }
            uVar13 = pretty_name_isra_0(pcVar9);
            uVar13 = quotearg_style(4,uVar13);
            uVar14 = dcgettext(0,"%s has been replaced;  following new file",5);
            error(0,0,uVar14,uVar13);
            pretty_name_isra_0(*param_1);
            close_fd(*(undefined4 *)(param_1 + 7));
          }
          else {
            if (*(int *)(param_1 + 7) != -1) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("f->fd == -1","src/tail.c",0x425,"recheck");
            }
            pcVar9 = (char *)*param_1;
            if ((*pcVar9 == '-') && (pcVar9[1] == '\0')) {
              pcVar9 = (char *)dcgettext(0,"standard input",5);
            }
            uVar13 = quotearg_style(4,pcVar9);
            pcVar9 = "%s has become accessible";
LAB_00101496:
            uVar14 = dcgettext(0,pcVar9,5);
            error(0,0,uVar14,uVar13);
          }
          param_2 = param_2 & 0xff;
          *(int *)(param_1 + 7) = iVar5;
          if (uVar15 == 0) {
            param_2 = 0xffffffff;
          }
          param_1[1] = 0;
          param_1[0xb] = 0;
          param_1[2] = local_d8.st_mtim.tv_sec;
          *(uint *)(param_1 + 8) = param_2;
          param_1[3] = local_d8.st_mtim.tv_nsec;
          *(undefined1 *)((long)param_1 + 0x34) = 0;
          *(__mode_t *)(param_1 + 6) = local_d8.st_mode;
          param_1[4] = local_d8.st_dev;
          param_1[5] = local_d8.st_ino;
          if ((local_d8.st_mode & 0xf000) != 0x8000) goto LAB_001011a0;
          pcVar9 = (char *)*param_1;
          if ((*pcVar9 == '-') && (pcVar9[1] == '\0')) {
            pcVar9 = (char *)dcgettext(0,"standard input",5);
          }
          _Var11 = lseek(iVar5,0,0);
          if (-1 < _Var11) goto LAB_001011a0;
          uVar13 = quotearg_n_style_colon(0,3,pcVar9);
          param_1 = (undefined8 *)dcgettext(0,"%s: cannot seek to offset %jd",5);
          piVar12 = __errno_location();
          bVar3 = error(1,*piVar12,param_1,uVar13,0);
          goto LAB_00101590;
        }
        *(undefined4 *)((long)param_1 + 0x3c) = 0xffffffff;
        uVar13 = pretty_name_isra_0(*param_1);
        uVar13 = quotearg_style(4,uVar13);
        uVar14 = dcgettext(0,"%s has been replaced with an untailable remote file",5);
        error(0,0,uVar14,uVar13);
        *(undefined2 *)((long)param_1 + 0x34) = 0x101;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x3c) = 0xffffffff;
        *(undefined1 *)((long)param_1 + 0x36) = 0;
        bVar3 = uVar1 != 0xffffffff | bVar3;
        if ((cVar2 == '\0') || (follow_mode != 1)) {
LAB_00101590:
          *(undefined1 *)((long)param_1 + 0x34) = 1;
          if (bVar3 == 0) goto LAB_001013be;
          puVar16 = (undefined *)dcgettext(0,"; giving up on this name",5);
        }
        else {
          *(undefined1 *)((long)param_1 + 0x34) = 0;
          if (bVar3 == 0) goto LAB_001013be;
          puVar16 = &_LC5;
        }
        uVar13 = pretty_name_isra_0(*param_1);
        uVar13 = quotearg_style(4,uVar13);
        uVar14 = dcgettext(0,"%s has been replaced with an untailable file%s",5);
        error(0,0,uVar14,uVar13,puVar16);
      }
LAB_001013be:
      pbVar10 = (byte *)*param_1;
    }
  }
  else {
    if (iVar5 == -1) {
      *(undefined1 *)((long)param_1 + 0x36) = 0;
      if (cVar4 != '\0') {
        piVar12 = __errno_location();
        *(int *)((long)param_1 + 0x3c) = *piVar12;
LAB_001013b3:
        if (bVar3 == 0) goto LAB_001013be;
        uVar13 = pretty_name_isra_0();
        uVar13 = quotearg_style(4,uVar13);
        uVar14 = dcgettext(0,"%s has become inaccessible",5);
        error(0,*(undefined4 *)((long)param_1 + 0x3c),uVar14,uVar13);
        pbVar10 = (byte *)*param_1;
        goto LAB_00101163;
      }
      iVar7 = lstat((char *)*param_1,&local_d8);
      if ((iVar7 != 0) || ((local_d8.st_mode & 0xf000) != 0xa000)) goto LAB_00101139;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x36) = 1;
      if (((cVar4 != '\0') || (iVar7 = lstat((char *)*param_1,&local_d8), iVar7 != 0)) ||
         ((local_d8.st_mode & 0xf000) != 0xa000)) goto LAB_001011fb;
    }
LAB_00101656:
    *(undefined4 *)((long)param_1 + 0x3c) = 0xffffffff;
    *(undefined1 *)((long)param_1 + 0x34) = 1;
    uVar13 = pretty_name_isra_0(*param_1);
    uVar13 = quotearg_style(4,uVar13);
    uVar14 = dcgettext(0,"%s has been replaced with an untailable symbolic link",5);
    error(0,0,uVar14,uVar13);
    pbVar10 = (byte *)*param_1;
  }
LAB_00101163:
  uVar15 = *pbVar10 - 0x2d;
  if (uVar15 == 0) {
    uVar15 = (uint)pbVar10[1];
  }
  if (uVar15 == 0) {
    pbVar10 = (byte *)dcgettext(0,"standard input",5);
    if (1 < iVar5 + 1U) goto LAB_0010140c;
LAB_0010141c:
    pbVar10 = (byte *)*param_1;
    if ((*pbVar10 == 0x2d) && (pbVar10[1] == 0)) {
      pbVar10 = (byte *)dcgettext(0,"standard input",5);
    }
  }
  else if (1 < iVar5 + 1U) {
LAB_0010140c:
    iVar7 = close(iVar5);
    if (iVar7 != 0) {
      close_fd_part_0(iVar5,pbVar10);
    }
    goto LAB_0010141c;
  }
  iVar5 = *(int *)(param_1 + 7);
  if ((1 < iVar5 + 1U) && (iVar7 = close(iVar5), iVar7 != 0)) {
    close_fd_part_0(iVar5,pbVar10);
  }
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
LAB_001011a0:
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
    goto LAB_0010189a;
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
  local_a8 = &_LC25;
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
    puVar7 = &_LC26;
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) goto LAB_00101bf5;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC26);
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
LAB_00101bf5:
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
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC26);
    if (puVar7 == &_LC26) {
      pcVar5 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,puVar7,pcVar5);
LAB_0010189a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  __ino_t _Var1;
  __dev_t _Var2;
  long lVar3;
  __dev_t *p_Var4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint32_t __mask;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char *pcVar15;
  stat *psVar16;
  int *piVar17;
  undefined **__s1;
  long lVar18;
  stat *psVar19;
  __blksize_t _Var20;
  undefined8 uVar21;
  __off_t _Var22;
  void *pvVar23;
  size_t __n;
  size_t sVar24;
  undefined8 uVar25;
  stat *psVar26;
  stat *psVar27;
  stat *psVar28;
  char cVar29;
  undefined1 *puVar30;
  int extraout_EDX;
  char *pcVar31;
  ulong uVar32;
  undefined *puVar33;
  byte bVar34;
  uint uVar35;
  uint *puVar36;
  stat *psVar37;
  char *pcVar38;
  undefined1 *__ptr;
  stat *psVar39;
  long in_FS_OFFSET;
  bool bVar40;
  undefined1 auVar41 [16];
  stat *local_260;
  ulong local_258;
  stat *local_250;
  undefined8 local_248;
  stat *local_240;
  stat *local_238;
  byte *local_230;
  stat *local_228;
  double local_220;
  stat *local_218;
  stat *local_210;
  stat *local_208;
  size_t local_200;
  stat *local_1f0;
  stat *local_1e8;
  byte local_1dd;
  stat *local_1d8;
  undefined *local_1d0;
  stat *local_1c8 [8];
  int local_184;
  stat local_168;
  stat local_d8;
  long local_40;
  undefined8 extraout_XMM0_Qb;
  
  psVar39 = (stat *)&_LC5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1d8 = (stat *)0xa;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  iVar7 = getpagesize();
  have_read_stdin = '\0';
  page_size = (stat *)(long)iVar7;
  count_lines = 1;
  print_headers = '\0';
  from_start = 0;
  forever = 0;
  line_end = '\n';
  if (param_1 == 2) {
LAB_0010323e:
    iVar7 = posix2_version();
    pcVar15 = (char *)param_2[1];
    pcVar38 = pcVar15 + 1;
    pcVar31 = pcVar38;
    if (*pcVar15 == '+') {
      psVar37 = (stat *)0x1;
      if (0x2b8 < iVar7 - 0x30db0U) goto LAB_001033eb;
      goto LAB_00103260;
    }
    if ((*pcVar15 != '-') ||
       ((0x30daf < iVar7 && (pcVar15[(ulong)(pcVar15[1] == 'c') + 1] == '\0')))) goto LAB_00103260;
    psVar37 = (stat *)0x0;
LAB_001033eb:
    for (; cVar29 = *pcVar31, (int)cVar29 - 0x30U < 10; pcVar31 = pcVar31 + 1) {
    }
    if (cVar29 == 'c') {
      __ptr = (undefined1 *)0x0;
      psVar16 = (stat *)0xa;
LAB_00103692:
      pcVar15 = pcVar31 + 1;
    }
    else {
      if (cVar29 == 'l') {
        __ptr = (undefined1 *)0x1;
        psVar16 = (stat *)0xa;
        goto LAB_00103692;
      }
      if (cVar29 == 'b') {
        __ptr = (undefined1 *)0x0;
        psVar16 = (stat *)0x1400;
        goto LAB_00103692;
      }
      __ptr = (undefined1 *)0x1;
      psVar16 = (stat *)0xa;
      pcVar15 = pcVar31;
    }
    cVar29 = *pcVar15;
    if (cVar29 == 'f') {
      pcVar15 = pcVar15 + 1;
    }
    if (*pcVar15 != '\0') goto LAB_00103260;
    if ((pcVar38 == pcVar31) ||
       (uVar35 = xstrtoumax(pcVar38,0,10,&local_1d8), psVar16 = local_1d8,
       (uVar35 & 0xfffffffd) == 0)) {
      local_1d8 = psVar16;
      from_start = (byte)psVar37;
      lVar18 = 1;
      count_lines = (byte)__ptr;
      forever = cVar29 == 'f';
      goto LAB_00103262;
    }
    quote(param_2[1]);
    uVar35 = dcgettext(0,"invalid number",5);
    piVar17 = __errno_location();
    error(1,*piVar17,"%s: %s");
LAB_00105e54:
    uVar21 = dcgettext(0,"warning: PID ignored; --pid=PID is useful only when following",5);
    error(0,0,uVar21);
  }
  else {
    if (param_1 == 3) {
      pcVar38 = (char *)param_2[2];
      if ((*pcVar38 == '-') && (pcVar38[1] != '\0')) goto LAB_0010322e;
      goto LAB_0010323e;
    }
    if (param_1 == 4) {
      pcVar38 = (char *)param_2[2];
LAB_0010322e:
      iVar7 = strcmp(pcVar38,"--");
      if (iVar7 == 0) goto LAB_0010323e;
    }
LAB_00103260:
    lVar18 = 0;
LAB_00103262:
    local_258 = 0;
    psVar37 = (stat *)(param_2 + lVar18);
    uVar35 = param_1 - (int)lVar18;
    __s1 = (undefined **)(ulong)uVar35;
    __ptr = long_options;
    pcVar38 = "c:n:fFqs:vz0123456789";
    local_220 = _LC61;
    puVar36 = &switchD_001032e4::switchdataD_00105f60;
LAB_001032a0:
    puVar30 = long_options;
    uVar32 = (ulong)uVar35;
    iVar7 = getopt_long(uVar32,psVar37,"c:n:fFqs:vz0123456789");
    if (iVar7 != -1) {
      if (0x85 < iVar7) {
switchD_001032e4_caseD_3a:
        iVar7 = usage(1);
switchD_001032e4_caseD_30:
        local_260 = (stat *)CONCAT44(local_260._4_4_,iVar7);
        uVar21 = dcgettext(0,"option used in invalid context -- %c",5);
        iVar7 = error(1,0,uVar21,iVar7);
        goto LAB_00104626;
      }
      if (iVar7 < 0x30) {
        if (iVar7 == -0x83) {
          uVar21 = proper_name_lite("Jim Meyering","Jim Meyering");
          uVar25 = proper_name_lite("Ian Lance Taylor","Ian Lance Taylor");
          uVar13 = proper_name_lite("David MacKenzie","David MacKenzie");
          uVar14 = proper_name_lite("Paul Rubin","Paul Rubin");
          version_etc(_stdout,&_LC26,"GNU coreutils",_Version,uVar14,uVar13,uVar25,uVar21,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar7 != -0x82) goto switchD_001032e4_caseD_3a;
        usage(0);
        goto LAB_00104f84;
      }
      switch(iVar7) {
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
        goto switchD_001032e4_caseD_30;
      default:
        goto switchD_001032e4_caseD_3a;
      case 0x46:
        forever = 1;
        follow_mode = 1;
        reopen_inaccessible_files = 1;
        break;
      case 99:
      case 0x6e:
        count_lines = iVar7 == 0x6e;
        cVar29 = (char)_optarg->st_dev;
        if (cVar29 == '+') {
          from_start = 1;
        }
        else if (cVar29 == '-') {
          _optarg = (stat *)((long)&_optarg->st_dev + 1);
        }
        if (iVar7 == 0x6e) {
          uVar21 = dcgettext(0,"invalid number of lines",5);
        }
        else {
          uVar21 = dcgettext(0,"invalid number of bytes",5);
        }
        local_1d8 = (stat *)xnumtoumax(_optarg,10,0,0xffffffffffffffff,"bkKmMGTPEZYRQ0",uVar21,0,2);
        break;
      case 0x66:
      case 0x84:
        forever = 1;
        if (_optarg == (stat *)0x0) {
          follow_mode = 2;
        }
        else {
          lVar18 = __xargmatch_internal
                             ("--follow",_optarg,follow_mode_string,&follow_mode_map,4,_argmatch_die
                              ,1,uVar32);
          follow_mode = *(int *)((long)&follow_mode_map + lVar18 * 4);
        }
        break;
      case 0x71:
        local_258 = 2;
        break;
      case 0x73:
        local_260 = (stat *)__errno_location();
        psVar16 = _optarg;
        *(undefined4 *)&local_260->st_dev = 0;
        auVar41._0_8_ = (double)cl_strtod(psVar16,local_1c8);
        auVar41._8_8_ = extraout_XMM0_Qb;
        if (((_optarg == local_1c8[0]) || ((char)local_1c8[0]->st_dev != '\0')) ||
           (auVar41._0_8_ < 0.0)) {
          uVar21 = quote();
          pcVar38 = "invalid number of seconds: %s";
          goto LAB_00105357;
        }
        if ((int)local_260->st_dev == 0x22) {
          uVar9 = (undefined4)CONCAT71((int7)((ulong)local_260 >> 8),!NAN(auVar41._0_8_));
          if (auVar41._0_8_ != 0.0) {
            uVar9 = 0;
          }
          if ((char)uVar9 != '\0') {
            uVar8 = movmskpd(uVar9,auVar41);
            if ((uVar8 & 1) == 0) {
              local_220 = _LC59;
            }
            else {
              local_220 = _LC60;
            }
            break;
          }
        }
        local_220 = _LC76 * auVar41._0_8_ + auVar41._0_8_;
        break;
      case 0x76:
        local_258 = 1;
        break;
      case 0x7a:
        line_end = '\0';
        break;
      case 0x80:
        reopen_inaccessible_files = 1;
        break;
      case 0x81:
        uVar21 = dcgettext(0,"invalid maximum number of unchanged stats between opens",5);
        max_n_unchanged_stats_between_opens =
             xnumtoumax(_optarg,10,0,0xffffffffffffffff,&_LC5,uVar21,0,2);
        break;
      case 0x82:
        if ((int)nbpids == pids_alloc) {
          pids = (stat *)xpalloc(pids,&pids_alloc,1,0x7fffffff,4);
        }
        dcgettext(0,"invalid PID",5);
        uVar9 = xdectoumax(_optarg,0,0x7fffffff,&_LC5);
        lVar18 = (long)(int)nbpids;
        nbpids = nbpids + 1;
        *(undefined4 *)((long)pids->__unused + lVar18 * 4 + -0x78) = uVar9;
        break;
      case 0x83:
        presume_input_pipe = 1;
        break;
      case 0x85:
        disable_inotify = '\x01';
      }
      goto LAB_001032a0;
    }
    if (reopen_inaccessible_files == 0) {
LAB_00103a24:
      if (nbpids == 0) goto LAB_0010376f;
      if (forever == 0) goto LAB_00105e54;
    }
    else {
      if (forever == 0) {
        reopen_inaccessible_files = 0;
        pcVar38 = "warning: --retry ignored; --retry is useful only when following";
LAB_00103a0f:
        uVar21 = dcgettext(0,pcVar38,5);
        error(0,0,uVar21);
        goto LAB_00103a24;
      }
      if (follow_mode == 2) {
        pcVar38 = "warning: --retry only effective for the initial open";
        goto LAB_00103a0f;
      }
      if (nbpids == 0) goto LAB_0010376f;
    }
    iVar7 = kill((__pid_t)pids->st_dev,0);
    if ((iVar7 != 0) && (piVar17 = __errno_location(), *piVar17 == 0x26)) {
      uVar21 = dcgettext(0,"warning: --pid=PID is not supported on this system",5);
      error(0,0,uVar21);
      nbpids = 0;
      free(pids);
    }
  }
LAB_0010376f:
  local_1d8 = (stat *)((long)local_1d8 -
                      (ulong)((undefined1 *)((long)local_1d8[-1].__unused + 0x17U) <
                              (undefined1 *)0xfffffffffffffffe & from_start));
  if ((int)uVar35 <= _optind) goto LAB_001042fe;
  __s1 = (undefined **)(psVar37->__unused + (long)_optind + -0xf);
  local_260 = (stat *)(long)(int)(uVar35 - _optind);
  do {
    bVar40 = false;
    psVar39 = (stat *)__s1;
    do {
      if ((*(char *)psVar39->st_dev == '-') && (((char *)psVar39->st_dev)[1] == '\0')) {
        bVar40 = true;
      }
      psVar39 = (stat *)&psVar39->st_ino;
    } while ((stat *)(((stat *)__s1)->__unused + (long)((long)local_260[-1].__unused + 9)) !=
             psVar39);
    puVar36 = (uint *)__s1;
    if (bVar40) {
      if (follow_mode == 1) {
        uVar21 = quotearg_style(4,&_LC87);
        pcVar38 = "cannot follow %s by name";
LAB_00105357:
        uVar25 = dcgettext(0,pcVar38,5);
        error(1,0,uVar25,uVar21);
LAB_00105372:
                    /* WARNING: Subroutine does not return */
        __assert_fail("((((sb->st_mode)) & 0170000) == (0100000))","src/tail.c",0x21c,"file_lines");
      }
      if (forever != 0) {
        iVar7 = follow_mode;
        if (nbpids == 0) {
LAB_00104626:
          if ((((iVar7 == 2) && (local_260 == (stat *)0x1)) &&
              (iVar7 = fstat(0,&local_d8), iVar7 == 0)) && ((local_d8.st_mode & 0xf000) != 0x8000))
          goto LAB_00104234;
        }
        iVar7 = isatty(0);
        if (iVar7 != 0) {
          uVar21 = dcgettext(0,"warning: following standard input indefinitely is ineffective",5);
          error(0,0,uVar21);
        }
        goto LAB_00104234;
      }
LAB_0010380c:
      if ((long)local_1d8->__unused + ((ulong)from_start - 0x78) == 0) {
        bVar5 = 0;
LAB_00103c09:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return bVar5;
      }
    }
    else {
LAB_00104234:
      if (forever == 0) goto LAB_0010380c;
    }
    psVar16 = (stat *)xnmalloc(local_260,0x60);
    if (local_260 == (stat *)0x1) {
      uVar32 = 0;
LAB_00103889:
      psVar16->__unused[uVar32 * 0xc + -0xf] = ((stat *)puVar36)->__unused[uVar32 - 0xf];
    }
    else {
      psVar39 = psVar16;
      do {
        _Var1 = ((stat *)__s1)->st_ino;
        p_Var4 = &((stat *)__s1)->st_dev;
        __s1 = (undefined **)&((stat *)__s1)->st_nlink;
        psVar39->st_dev = *p_Var4;
        (psVar39->st_mtim).tv_nsec = _Var1;
        psVar39 = (stat *)&psVar39[1].st_size;
      } while ((undefined **)
               (((stat *)puVar36)->__unused + (((ulong)local_260 & 0xfffffffffffffffe) - 0xf)) !=
               __s1);
      if (((ulong)local_260 & 1) != 0) {
        uVar32 = (ulong)local_260 & 0xfffffffffffffffe;
        goto LAB_00103889;
      }
    }
    if (((uint)local_258 == 1) || (((uint)local_258 == 0 && (local_260 != (stat *)0x1)))) {
      print_headers = '\x01';
    }
    local_1e8 = (stat *)((long)local_260 * 0x60);
    local_1dd = 1;
    local_210 = (stat *)((long)(((stat *)(((stat *)(psVar16->__unused + -0xf))->__unused + -0xf))->
                                __unused + 0xfffffffffffffff1) +
                        (long)((stat *)(((stat *)(((stat *)(local_1e8->__unused + -0xf))->__unused +
                                                 -0xf))->__unused + -0xf))->__unused +
                        0xffffffffffffff88U);
    local_238 = psVar16;
LAB_001038e8:
    psVar39 = local_1d8;
    local_230 = (byte *)psVar16->st_dev;
    local_248 = local_1d8;
    __s1 = (undefined **)(ulong)(*local_230 - 0x2d);
    if (*local_230 - 0x2d == 0) {
      __s1 = (undefined **)(ulong)local_230[1];
    }
    if ((forever == 0) || ((nbpids == 0 && (local_260 == (stat *)0x1)))) {
      if ((int)__s1 != 0) {
        uVar21 = 0;
        goto LAB_00103936;
      }
LAB_00103ac5:
      have_read_stdin = '\x01';
      if (reopen_inaccessible_files == 0) {
        *(undefined1 *)((long)&psVar16->st_size + 6) = 1;
        __s1 = (undefined **)0x0;
        local_258 = 0;
      }
      else {
        __s1 = (undefined **)0x0;
        local_258 = 0;
LAB_00103ee9:
        *(undefined1 *)((long)&psVar16->st_size + 6) = 1;
      }
    }
    else {
      uVar21 = 0x800;
      if ((int)__s1 == 0) goto LAB_00103ac5;
LAB_00103936:
      uVar35 = open_safer(local_230,uVar21);
      bVar5 = reopen_inaccessible_files;
      local_258 = (ulong)uVar35;
      if (reopen_inaccessible_files != 0) {
        if (uVar35 == 0xffffffff) {
          *(undefined1 *)((long)&psVar16->st_size + 6) = 0;
          goto LAB_0010395f;
        }
        local_230 = (byte *)psVar16->st_dev;
        goto LAB_00103ee9;
      }
      *(undefined1 *)((long)&psVar16->st_size + 6) = 1;
      if (uVar35 == 0xffffffff) {
LAB_0010395f:
        if (forever != 0) {
          *(undefined4 *)&psVar16->st_blksize = 0xffffffff;
          piVar17 = __errno_location();
          *(byte *)((long)&psVar16->st_size + 4) = bVar5 ^ 1;
          iVar7 = *piVar17;
          psVar16->st_gid = 0;
          psVar16->__pad0 = 0;
          psVar16->st_rdev = 0;
          *(int *)((long)&psVar16->st_blksize + 4) = iVar7;
        }
        uVar21 = pretty_name_isra_0(psVar16->st_dev);
        uVar21 = quotearg_style(4,uVar21);
        pcVar38 = "cannot open %s for reading";
LAB_001039ae:
        local_218 = (stat *)0x0;
        __s1 = (undefined **)dcgettext(0,pcVar38,5);
        piVar17 = __errno_location();
        error(0,*piVar17,__s1,uVar21);
        psVar19 = (stat *)__ptr;
        goto LAB_00103bbc;
      }
      local_230 = (byte *)psVar16->st_dev;
    }
    if (print_headers != '\0') {
      iVar7 = strcmp((char *)local_230,"-");
      if (iVar7 == 0) {
        local_230 = (byte *)dcgettext(0,"standard input",5);
      }
      puVar33 = &_LC5;
      if (first_file_3 == '\0') {
        puVar33 = &_LC6;
      }
      __printf_chk(2,"%s==> %s <==\n",puVar33,local_230);
      first_file_3 = '\0';
      local_230 = (byte *)psVar16->st_dev;
    }
    if ((*local_230 == 0x2d) && (local_230[1] == 0)) {
      local_230 = (byte *)dcgettext(0,"standard input",5);
    }
    bVar5 = count_lines;
    local_218 = (stat *)(ulong)count_lines;
    local_208 = &local_d8;
    local_1c8[0] = (stat *)0x0;
    if (count_lines == 0) {
      iVar7 = fstat((uint)local_258,local_208);
      psVar37 = (stat *)local_d8.st_size;
      if (iVar7 != 0) {
        uVar21 = quotearg_style(4,local_230);
        uVar25 = dcgettext(0,"cannot fstat %s",5);
        piVar17 = __errno_location();
        error(0,*piVar17,uVar25,uVar21);
        goto LAB_00103ba7;
      }
      if (from_start != 0) {
        if ((presume_input_pipe == 0) && (-1 < (long)psVar39)) {
          iVar7 = 1;
          iVar10 = (uint)local_258;
          if ((local_d8.st_mode & 0xf000) == 0x8000) goto LAB_00104b8d;
          _Var22 = lseek((uint)local_258,(__off_t)psVar39,1);
          if (_Var22 != -1) goto LAB_00103c93;
        }
        uVar35 = start_bytes(local_230,local_258,psVar39,local_1c8);
        if (uVar35 == 0) goto LAB_00103ca0;
        local_218 = (stat *)(ulong)(uVar35 >> 0x1f);
        goto LAB_00103ba7;
      }
      if ((presume_input_pipe != 0) || ((long)psVar39 < 0)) {
LAB_00103def:
        psVar37 = (stat *)xmalloc(0x2010);
        psVar37[0x38].__unused[1] = 0;
        psVar37[0x38].__unused[2] = 0;
        psVar28 = (stat *)xmalloc(0x2010);
        local_250 = (stat *)0x0;
        psVar19 = psVar37;
        while (__ptr = (undefined1 *)psVar19, sVar24 = safe_read(local_258,psVar28,0x2000),
              0 < (long)sVar24) {
          local_1c8[0] = (stat *)((long)local_1c8[0]->__unused + (sVar24 - 0x78));
          local_250 = (stat *)((long)local_250->__unused + (sVar24 - 0x78));
          psVar28[0x38].__unused[1] = sVar24;
          psVar28[0x38].__unused[2] = 0;
          psVar19 = (stat *)__ptr;
          if (sVar24 + psVar37[0x38].__unused[1] < 0x2000) {
            memcpy((void *)((long)psVar37->__unused + psVar37[0x38].__unused[1] + -0x78),psVar28,
                   sVar24);
            psVar37[0x38].__unused[1] = psVar37[0x38].__unused[1] + psVar28[0x38].__unused[1];
          }
          else {
            psVar26 = (stat *)((long)local_250 - ((stat *)((long)__ptr + 0x1f80))->__unused[1]);
            psVar37[0x38].__unused[2] = (long)psVar28;
            psVar37 = psVar28;
            if (psVar39 < psVar26) {
              local_250 = psVar26;
              psVar19 = (stat *)((stat *)((long)__ptr + 0x1f80))->__unused[2];
              psVar28 = (stat *)__ptr;
            }
            else {
              psVar28 = (stat *)xmalloc(0x2010);
            }
          }
        }
        local_218 = (stat *)0x0;
        free(psVar28);
        psVar37 = local_250;
        psVar28 = (stat *)__ptr;
        psVar19 = (stat *)__ptr;
        if ((sVar24 == 0) || (piVar17 = __errno_location(), *piVar17 == 0xb)) {
          while (psVar26 = (stat *)((long)psVar37 - psVar28[0x38].__unused[1]), psVar39 < psVar26) {
            psVar37 = psVar26;
            psVar28 = (stat *)psVar28[0x38].__unused[2];
          }
          lVar18 = 0;
          if (psVar39 < psVar37) {
            lVar18 = (long)psVar37 - (long)psVar39;
          }
          xwrite_stdout((long)psVar28->__unused + lVar18 + -0x78);
          for (lVar18 = psVar28[0x38].__unused[2]; lVar18 != 0; lVar18 = *(long *)(lVar18 + 0x2008))
          {
            xwrite_stdout(lVar18);
          }
          local_218 = (stat *)0x1;
        }
        else {
          uVar21 = quotearg_style(4,local_230);
          uVar25 = dcgettext(0,"error reading %s",5);
          error(0,*piVar17,uVar25,uVar21);
        }
        while (local_240 = (stat *)__s1, local_228 = psVar16, psVar19 != (stat *)0x0) {
          psVar39 = (stat *)psVar19[0x38].__unused[2];
          free(psVar19);
          psVar19 = psVar39;
        }
        goto LAB_00103ba7;
      }
      if ((local_d8.st_mode & 0xd000) == 0x8000) {
        _Var20 = local_d8.st_blksize;
        if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
          _Var20 = 0x200;
        }
        if (local_d8.st_size <= _Var20) goto LAB_00103def;
        psVar19 = (stat *)lseek((uint)local_258,0,1);
        if ((long)psVar19 < 0) {
          quotearg_n_style_colon(0,3,local_230);
          pcVar38 = "%s: cannot seek to relative offset %jd";
LAB_001042d8:
          uVar21 = dcgettext(0,pcVar38,5);
          piVar17 = __errno_location();
          goto LAB_001042ea;
        }
      }
      else {
        psVar19 = (stat *)lseek((uint)local_258,-(long)psVar39,2);
        if (psVar19 == (stat *)0xffffffffffffffff) goto LAB_00103def;
        psVar37 = (stat *)((long)(((stat *)(((stat *)(psVar39->__unused + -0xf))->__unused + -0xf))
                                  ->__unused + 0xfffffffffffffff1) +
                          (long)((stat *)(((stat *)(((stat *)(psVar19->__unused + -0xf))->__unused +
                                                   -0xf))->__unused + -0xf))->__unused +
                          0xffffffffffffff88U);
        __ptr = (undefined1 *)psVar39;
      }
      if ((long)psVar37 <= (long)psVar19) goto LAB_00103ca9;
      if ((stat *)((long)psVar37 - (long)psVar19) <= psVar39) goto LAB_00103ca9;
      _Var22 = lseek((uint)local_258,(__off_t)((long)psVar37 - (long)psVar39),0);
      psVar19 = (stat *)((long)psVar37 - (long)psVar39);
      if (-1 < _Var22) goto LAB_00103ca9;
LAB_00104bfd:
      quotearg_n_style_colon(0,3,local_230);
      uVar21 = dcgettext(0,"%s: cannot seek to offset %jd",5);
      piVar17 = __errno_location();
      goto LAB_001042ea;
    }
    iVar7 = fstat((uint)local_258,local_208);
    if (iVar7 != 0) {
      uVar21 = quotearg_style(4,local_230);
      uVar25 = dcgettext(0,"cannot fstat %s",5);
      piVar17 = __errno_location();
      error(0,*piVar17,uVar25,uVar21);
      local_218 = (stat *)0x0;
      goto LAB_00103ba7;
    }
    if (from_start != 0) {
      if ((psVar39 != (stat *)0xffffffffffffffff) ||
         (psVar37 = (stat *)lseek((uint)local_258,2,0), (long)psVar37 < 0)) {
        uVar35 = start_lines(local_230,local_258,psVar39,local_1c8);
        if (uVar35 != 0) {
          local_218 = (stat *)(ulong)(uVar35 >> 0x1f);
          goto LAB_00103ba7;
        }
        lVar18 = dump_remainder_constprop_0(local_230,local_258,0xffffffffffffffff);
        psVar37 = (stat *)((long)local_1c8[0]->__unused + lVar18 + -0x78);
      }
LAB_00104357:
      local_1c8[0] = psVar37;
      local_218 = (stat *)(ulong)bVar5;
      goto LAB_00103ba7;
    }
    __ptr = (undefined1 *)(ulong)presume_input_pipe;
    if (((presume_input_pipe != 0) || ((local_d8.st_mode & 0xf000) != 0x8000)) ||
       (pcVar38 = (char *)lseek((uint)local_258,0,1), pcVar38 == (char *)0xffffffffffffffff)) {
LAB_00103f2e:
      psVar37 = (stat *)xmalloc(0x2018);
      psVar37[0x38].__unused[1] = 0;
      psVar37[0x38].__unused[2] = 0;
      psVar37[0x39].st_dev = 0;
      __ptr = (undefined1 *)xmalloc(0x2018);
      local_200 = CONCAT71(local_200._1_7_,bVar5);
      local_250 = (stat *)0x0;
      local_240 = (stat *)0x0;
      local_228 = psVar37;
      while (psVar19 = (stat *)safe_read(local_258,__ptr,0x2000), 0 < (long)psVar19) {
        local_250 = (stat *)((long)(((stat *)(((stat *)(psVar19->__unused + -0xf))->__unused + -0xf)
                                    )->__unused + 0xfffffffffffffff1) +
                            (long)((stat *)(((stat *)(((stat *)(local_250->__unused + -0xf))->
                                                      __unused + -0xf))->__unused + -0xf))->__unused
                            + 0xffffffffffffff88U);
        ((stat *)((long)__ptr + 0x1f80))->__unused[1] = (long)psVar19;
        iVar7 = (int)line_end;
        ((stat *)((long)__ptr + 0x1f80))->__unused[2] = 0;
        ((stat *)((long)__ptr + 0x2010))->st_dev = 0;
        psVar28 = (stat *)__ptr;
        lVar18 = 0;
        local_1c8[0] = local_250;
        while( true ) {
          pvVar23 = memchr(psVar28,iVar7,
                           (size_t)((long)psVar19 +
                                   (long)((stat *)__ptr)->__unused + (-0x78 - (long)psVar28)));
          if (pvVar23 == (void *)0x0) break;
          ((stat *)((long)__ptr + 0x1f80))->__unused[2] = lVar18 + 1;
          psVar28 = (stat *)((long)pvVar23 + 1);
          lVar18 = lVar18 + 1;
        }
        local_240 = (stat *)((long)local_240->__unused + lVar18 + -0x78);
        if ((ulong)((long)psVar19->__unused + psVar37[0x38].__unused[1] + -0x78) < 0x2000) {
          memcpy((void *)((long)psVar37->__unused + psVar37[0x38].__unused[1] + -0x78),__ptr,
                 (size_t)psVar19);
          lVar18 = ((stat *)((long)__ptr + 0x1f80))->__unused[2];
          lVar3 = psVar37[0x38].__unused[2];
          psVar37[0x38].__unused[1] =
               ((stat *)((long)__ptr + 0x1f80))->__unused[1] + psVar37[0x38].__unused[1];
          psVar37[0x38].__unused[2] = lVar18 + lVar3;
        }
        else {
          psVar37[0x39].st_dev = (__dev_t)__ptr;
          psVar19 = (stat *)((long)local_240 - local_228[0x38].__unused[2]);
          psVar37 = (stat *)__ptr;
          if (psVar39 < psVar19) {
            __ptr = (undefined1 *)local_228;
            local_240 = psVar19;
            local_228 = (stat *)local_228[0x39].st_dev;
          }
          else {
            psVar19 = (stat *)xmalloc(0x2018);
            __ptr = (undefined1 *)psVar19;
          }
        }
      }
      free(__ptr);
      local_250 = psVar19;
      if ((psVar19 == (stat *)0x0) ||
         (__ptr = (undefined1 *)__errno_location(), (int)((stat *)__ptr)->st_dev == 0xb)) {
        cVar29 = line_end;
        lVar18 = psVar37[0x38].__unused[1];
        bVar40 = lVar18 == 0 || psVar39 == (stat *)0x0;
        if (lVar18 != 0 && psVar39 != (stat *)0x0) {
          if (*(char *)((long)psVar37->__unused + lVar18 + -0x79) != line_end) {
            psVar37[0x38].__unused[2] = psVar37[0x38].__unused[2] + 1;
            local_240 = (stat *)((long)&local_240->st_dev + 1);
          }
          psVar19 = (stat *)((long)local_240 - local_228[0x38].__unused[2]);
          psVar37 = local_240;
          __ptr = (undefined1 *)local_228;
          while (psVar28 = psVar19, psVar39 < psVar28) {
            __ptr = (undefined1 *)((stat *)((long)__ptr + 0x2010))->st_dev;
            psVar37 = psVar28;
            psVar19 = (stat *)((long)psVar28 - ((stat *)((long)__ptr + 0x1f80))->__unused[2]);
          }
          if (psVar39 < psVar37) {
            lVar18 = (long)psVar37 - (long)psVar39;
            local_248 = (stat *)CONCAT44((int)((ulong)psVar39 >> 0x20),(int)__s1);
            psVar39 = (stat *)__ptr;
            do {
              pvVar23 = rawmemchr(psVar39,(int)cVar29);
              psVar39 = (stat *)((long)pvVar23 + 1);
              lVar18 = lVar18 + -1;
              local_250 = (stat *)__ptr;
            } while (lVar18 != 0);
          }
          xwrite_stdout();
          for (_Var2 = ((stat *)((long)__ptr + 0x2010))->st_dev; _Var2 != 0;
              _Var2 = *(__dev_t *)(_Var2 + 0x2010)) {
            xwrite_stdout(_Var2);
          }
          local_218 = (stat *)(ulong)bVar5;
          psVar39 = local_228;
          goto LAB_00104118;
        }
      }
      else {
        uVar21 = quotearg_style(4,local_230);
        uVar25 = dcgettext(0,"error reading %s",5);
        error(0,(int)((stat *)__ptr)->st_dev,uVar25,uVar21);
        bVar40 = false;
      }
      local_218 = (stat *)(ulong)bVar40;
      local_248 = psVar39;
      psVar37 = local_228;
      while (psVar39 = psVar37, local_1f0 = psVar16, psVar37 != (stat *)0x0) {
LAB_00104118:
        psVar37 = (stat *)psVar39[0x39].st_dev;
        free(psVar39);
      }
LAB_00103ba7:
      while( true ) {
        iVar7 = (int)__s1;
        psVar19 = (stat *)__ptr;
        if (forever == 0) break;
        *(int *)((long)&psVar16->st_blksize + 4) = (int)local_218 + -1;
        iVar10 = fstat((uint)local_258,local_208);
        if (iVar10 < 0) {
          piVar17 = __errno_location();
          _Var2 = psVar16->st_dev;
          *(int *)((long)&psVar16->st_blksize + 4) = *piVar17;
          uVar21 = pretty_name_isra_0(_Var2);
          uVar21 = quotearg_style(4,uVar21);
          uVar25 = dcgettext(0,"error reading %s",5);
          error(0,*piVar17,uVar25,uVar21);
          goto LAB_00103da4;
        }
        if ((((local_d8.st_mode & 0xf000) - 0x1000 & 0xffffe000) == 0) ||
           ((local_d8.st_mode & 0xb000) == 0x8000)) {
          if ((char)local_218 == '\0') goto LAB_00103da4;
          *(__mode_t *)&psVar16->st_size = local_d8.st_mode;
          __s1 = (undefined **)psVar16->st_dev;
          *(undefined1 *)((long)&psVar16->st_size + 4) = 0;
          *(uint *)&psVar16->st_blksize = (uint)local_258;
          uVar21 = CONCAT26(local_d8.st_dev._6_2_,
                            CONCAT24(local_d8.st_dev._4_2_,(int)local_d8.st_dev));
          *(uint *)&psVar16->st_blocks = -(uint)(iVar7 == 0) | 1;
          psVar16->st_mode = (undefined4)local_d8.st_mtim.tv_nsec;
          psVar16->st_uid = local_d8.st_mtim.tv_nsec._4_4_;
          (psVar16->st_mtim).tv_sec = 0;
          psVar16->st_ino = (__ino_t)local_1c8[0];
          psVar16->st_nlink = local_d8.st_mtim.tv_sec;
          psVar16->st_gid = (int)uVar21;
          psVar16->__pad0 = (int)((ulong)uVar21 >> 0x20);
          psVar16->st_rdev = local_d8.st_ino;
          iVar7 = strcmp((char *)__s1,"-");
          if (iVar7 == 0) {
            __s1 = (undefined **)dcgettext(0,"standard input",5);
          }
          uVar6 = fremote();
          *(undefined1 *)((long)&psVar16->st_size + 5) = uVar6;
          goto LAB_00103bbc;
        }
LAB_0010541d:
        bVar5 = reopen_inaccessible_files;
        *(undefined4 *)((long)&psVar16->st_blksize + 4) = 0xffffffff;
        *(undefined1 *)((long)&psVar16->st_size + 6) = 0;
        *(byte *)((long)&psVar16->st_size + 4) = bVar5 ^ 1;
        if ((bVar5 ^ 1) != 0) {
          dcgettext(0,"; giving up on this name",5);
        }
        uVar21 = pretty_name_isra_0(psVar16->st_dev);
        uVar21 = quotearg_n_style_colon(0,3,uVar21);
        uVar25 = dcgettext(0,"%s: cannot follow end of this type of file%s",5);
        error(0,0,uVar25,uVar21);
LAB_00103da4:
        __s1 = (undefined **)psVar16->st_dev;
        *(byte *)((long)&psVar16->st_size + 4) = reopen_inaccessible_files ^ 1;
        iVar7 = strcmp((char *)__s1,"-");
        if (iVar7 == 0) {
          __s1 = (undefined **)dcgettext(0,"standard input",5);
        }
        if (((uint)local_258 != 0) && (iVar7 = close((uint)local_258), iVar7 != 0)) {
          close_fd_part_0();
        }
        *(undefined4 *)&psVar16->st_blksize = 0xffffffff;
        local_218 = (stat *)0x0;
        psVar19 = (stat *)__ptr;
LAB_00103bbc:
        bVar5 = forever;
        local_1dd = local_1dd & (byte)local_218;
        psVar16 = (stat *)&(psVar16->st_mtim).tv_nsec;
        __ptr = (undefined1 *)psVar19;
        if (local_210 != psVar16) goto LAB_001038e8;
        local_230 = (byte *)(ulong)forever;
        if (forever == 0) {
LAB_00103bee:
          if (have_read_stdin == '\0') goto LAB_00103bfb;
        }
        else {
          psVar37 = (stat *)0x0;
          __s1 = (undefined **)&_LC87;
          psVar16 = local_238;
          do {
            iVar7 = strcmp((char *)psVar16->st_dev,"-");
            if ((((iVar7 == 0) && (*(char *)((long)&psVar16->st_size + 4) == '\0')) &&
                (-1 < (int)psVar16->st_blksize)) && ((psVar16->st_size & 0xf000) == 0x1000)) {
              *(undefined4 *)&psVar16->st_blksize = 0xffffffff;
              *(undefined1 *)((long)&psVar16->st_size + 4) = 1;
            }
            else {
              psVar37 = (stat *)((long)&psVar37->st_dev + 1);
            }
            psVar16 = (stat *)&(psVar16->st_mtim).tv_nsec;
          } while (local_210 != psVar16);
          if (psVar37 == (stat *)0x0) goto LAB_00103bee;
          iVar7 = fstat(1,&local_168);
          pcVar38 = "standard output";
          if (-1 < iVar7) {
            monitor_output = (local_168.st_mode & 0xf000) == 0x1000;
            __ptr = (undefined1 *)local_238;
            psVar39 = local_1e8;
            if (disable_inotify == '\0') {
              do {
                psVar37 = local_210;
                if ((*(char *)((long)&((stat *)__ptr)->st_size + 4) == '\0') &&
                   (iVar7 = strcmp((char *)((stat *)__ptr)->st_dev,"-"), iVar7 == 0))
                goto LAB_001048d9;
                __ptr = (undefined1 *)&(((stat *)__ptr)->st_mtim).tv_nsec;
              } while (local_210 != (stat *)__ptr);
              lVar18 = 0;
              do {
                if ((-1 < *(int *)((long)&local_238->st_blksize + lVar18)) &&
                   (((undefined1 *)((long)&local_238->st_size + 5))[lVar18] != '\0'))
                goto LAB_001048d9;
                lVar18 = lVar18 + 0x60;
              } while (local_1e8 != (stat *)lVar18);
              lVar18 = 0;
              do {
                if ((-1 < *(int *)((long)&local_238->st_blksize + lVar18)) &&
                   (cVar29 = ((undefined1 *)((long)&local_238->st_size + 5))[lVar18],
                   psVar28 = psVar19, cVar29 == '\0')) goto LAB_001054fa;
                lVar18 = lVar18 + 0x60;
              } while (local_1e8 != (stat *)lVar18);
            }
LAB_001048d9:
            do {
              disable_inotify = '\x01';
              local_258 = (ulong)nbpids;
              if (nbpids == 0) {
                if (((follow_mode == 2) && (local_260 == (stat *)0x1)) &&
                   ((int)local_238->st_blksize != -1)) {
                  local_258 = (ulong)((local_238->st_size & 0xf000) != 0x8000);
                }
              }
              else {
                local_258 = 0;
              }
              local_210 = (stat *)((ulong)local_210 & 0xffffffffffffff00);
              uVar35 = ((uint)local_258 ^ 1) << 0xb;
              local_218._0_1_ = (byte)local_258 & 1;
              local_240 = (stat *)(ulong)uVar35;
              psVar26 = (stat *)((long)local_260[-1].__unused + 0x17);
              psVar16 = (stat *)((undefined1 *)((long)&local_238->st_size + 4) + (long)psVar39);
              local_248 = psVar26;
LAB_0010493b:
              local_250 = (stat *)((ulong)local_250 & 0xffffffffffffff00);
              psVar19 = local_238;
              psVar28 = (stat *)0x0;
              do {
                while( true ) {
                  __ptr = (undefined1 *)psVar28;
                  bVar34 = *(byte *)((long)&psVar19->st_size + 4);
                  pcVar38 = (char *)(ulong)bVar34;
                  local_228 = psVar16;
                  if (bVar34 != 0) goto LAB_001049f4;
                  uVar8 = (uint)psVar19->st_blksize;
                  psVar37 = (stat *)(ulong)uVar8;
                  if ((int)uVar8 < 0) break;
                  psVar39 = (stat *)psVar19->st_dev;
                  if (((char)psVar39->st_dev == '-') &&
                     (*(char *)((long)&psVar39->st_dev + 1) == '\0')) {
                    psVar39 = (stat *)dcgettext(0,"standard input",5);
                  }
                  _Var22 = psVar19->st_size;
                  uVar11 = (uint)psVar19->st_blocks;
                  if ((uint)local_258 != uVar11) {
                    uVar11 = rpl_fcntl(psVar37,3);
                    if (((int)uVar11 < 0) ||
                       ((uVar11 != (uVar35 | uVar11) && (iVar7 = rpl_fcntl(psVar37,4), iVar7 == -1))
                       )) {
                      if (((psVar19->st_size & 0xf000) != 0x8000) ||
                         (piVar17 = __errno_location(), *piVar17 != 1)) {
                        puVar36 = (uint *)quotearg_n_style_colon(0,3,psVar39);
                        local_218 = (stat *)dcgettext(0,"%s: cannot change nonblocking mode",5);
                        piVar17 = __errno_location();
                        error(1,*piVar17,local_218,puVar36);
                        goto LAB_001051b0;
                      }
                      uVar11 = (uint)psVar19->st_blocks;
                    }
                    else {
                      *(uint *)&psVar19->st_blocks = (uint)local_258;
                      uVar11 = (uint)local_258;
                    }
                  }
                  if (uVar11 == 0) {
                    iVar7 = fstat(uVar8,&local_d8);
                    if (iVar7 == 0) {
                      if (((uint)psVar19->st_size == local_d8.st_mode) &&
                         ((((local_d8.st_mode & 0xf000) != 0x8000 ||
                           (psVar26 = (stat *)local_d8.st_size,
                           (stat *)psVar19->st_ino == (stat *)local_d8.st_size)) &&
                          (lVar18._0_4_ = psVar19->st_mode, lVar18._4_4_ = psVar19->st_uid,
                          uVar11 = (uint)(local_d8.st_mtim.tv_sec < (long)psVar19->st_nlink) -
                                   (uint)((long)psVar19->st_nlink < local_d8.st_mtim.tv_sec),
                          psVar26 = (stat *)(ulong)uVar11,
                          ((uint)(local_d8.st_mtim.tv_nsec < lVar18) -
                          (uint)(lVar18 < local_d8.st_mtim.tv_nsec)) + uVar11 * 2 == 0)))) {
                        uVar32 = (psVar19->st_mtim).tv_sec;
                        bVar40 = max_n_unchanged_stats_between_opens <= uVar32;
                        (psVar19->st_mtim).tv_sec = uVar32 + 1;
                        if ((bVar40) && (follow_mode == 1)) {
                          recheck();
                          (psVar19->st_mtim).tv_sec = 0;
                        }
                        if (((uVar8 != (uint)psVar19->st_blksize) ||
                            ((local_d8.st_mode & 0xf000) == 0x8000)) || (local_260 != (stat *)0x1))
                        goto LAB_001049f4;
                        *(__mode_t *)&psVar19->st_size = local_d8.st_mode;
                        psVar19->st_nlink = local_d8.st_mtim.tv_sec;
                        psVar19->st_mode = (undefined4)local_d8.st_mtim.tv_nsec;
                        psVar19->st_uid = local_d8.st_mtim.tv_nsec._4_4_;
                        bVar34 = bVar5;
                      }
                      else {
                        if ((uint)psVar19->st_blksize != uVar8) {
                    /* WARNING: Subroutine does not return */
                          __assert_fail("fd == f[i].fd","src/tail.c",0x4e7,"tail_forever");
                        }
                        *(__mode_t *)&psVar19->st_size = local_d8.st_mode;
                        (psVar19->st_mtim).tv_sec = 0;
                        psVar19->st_nlink = local_d8.st_mtim.tv_sec;
                        psVar19->st_mode = (undefined4)local_d8.st_mtim.tv_nsec;
                        psVar19->st_uid = local_d8.st_mtim.tv_nsec._4_4_;
                        bVar34 = 0;
                      }
                      uVar11 = (uint)_Var22 & 0xf000;
                      if (uVar11 == 0x8000) {
                        if (local_d8.st_size < (long)psVar19->st_ino) {
                          local_208 = (stat *)quotearg_n_style_colon(0,3,psVar39);
                          uVar21 = dcgettext(0,"%s: file truncated",5);
                          psVar26 = local_208;
                          error(0,0,uVar21);
                          _Var22 = lseek(uVar8,0,0);
                          if (_Var22 < 0) {
                            quotearg_n_style_colon(0,3,psVar39);
                            pcVar38 = "%s: cannot seek to offset %jd";
                            goto LAB_001042d8;
                          }
                          psVar19->st_ino = 0;
                        }
                        if (((stat *)__ptr != local_248) && (print_headers != '\0'))
                        goto LAB_00104d25;
                        if ((int)psVar19->st_blocks != 0) goto LAB_00104dfb;
LAB_00104dd7:
                        if (*(char *)((long)&psVar19->st_size + 5) == '\0') goto LAB_00104d6e;
                        lVar18 = local_d8.st_size - psVar19->st_ino;
                      }
                      else {
                        if (((stat *)__ptr == local_248) || (print_headers == '\0')) {
                          if ((int)psVar19->st_blocks != 0) goto LAB_00104dfb;
                        }
                        else {
LAB_00104d25:
                          puVar33 = &_LC5;
                          if (first_file_3 == '\0') {
                            puVar33 = &_LC6;
                          }
                          psVar26 = psVar39;
                          __printf_chk(2,"%s==> %s <==\n",puVar33);
                          first_file_3 = '\0';
                          if ((int)psVar19->st_blocks != 0) {
LAB_00104dfb:
                            lVar18 = -2;
                            goto LAB_00104d75;
                          }
                          if (uVar11 == 0x8000) goto LAB_00104dd7;
                        }
LAB_00104d6e:
                        lVar18 = -1;
                      }
LAB_00104d75:
                      lVar18 = dump_remainder_constprop_0(psVar39,uVar8,lVar18);
                      bVar40 = lVar18 != 0;
                      local_248 = (stat *)__ptr;
                      if ((bool)(bVar34 & bVar40) != false) {
                        (psVar19->st_mtim).tv_sec = 0;
                        bVar40 = (bool)(bVar34 & bVar40);
                      }
                      goto LAB_001049eb;
                    }
                    *(undefined4 *)&psVar19->st_blksize = 0xffffffff;
                    piVar17 = __errno_location();
                    *(int *)((long)&psVar19->st_blksize + 4) = *piVar17;
                    psVar26 = (stat *)quotearg_n_style_colon(0,3,psVar39);
                    error(0,*piVar17,&_LC16);
                    close(uVar8);
                  }
                  else {
                    lVar18 = dump_remainder_constprop_0(psVar39,psVar37,0xfffffffffffffffe);
                    bVar40 = lVar18 != 0;
LAB_001049eb:
                    local_250 = (stat *)CONCAT71(local_250._1_7_,(byte)local_250 | bVar40);
                    psVar19->st_ino = psVar19->st_ino + lVar18;
                  }
LAB_001049f4:
                  psVar28 = (stat *)((long)&((stat *)__ptr)->st_dev + 1);
                  psVar19 = (stat *)&(psVar19->st_mtim).tv_nsec;
                  if (local_260 == psVar28) goto LAB_00104a35;
                }
                psVar28 = (stat *)((long)&((stat *)__ptr)->st_dev + 1);
                psVar19 = (stat *)&(psVar19->st_mtim).tv_nsec;
                recheck();
              } while (local_260 != psVar28);
LAB_00104a35:
              psVar19 = (stat *)((long)&((stat *)__ptr)->st_dev + 1);
              if ((reopen_inaccessible_files == 0) || (follow_mode != 1)) {
                pcVar38 = (char *)((long)&local_238->st_size + 4);
                while ((psVar26 = (stat *)(ulong)(uint)*(__blksize_t *)(pcVar38 + 4),
                       (int)(uint)*(__blksize_t *)(pcVar38 + 4) < 0 &&
                       ((*pcVar38 == '\x01' || (reopen_inaccessible_files == 0))))) {
                  pcVar38 = pcVar38 + 0x60;
                  __ptr = (undefined1 *)psVar19;
                  if ((stat *)pcVar38 == psVar16) goto LAB_001053f9;
                }
              }
              bVar34 = (byte)local_250 ^ 1 | (byte)local_218;
              __s1 = (undefined **)(ulong)bVar34;
              if (bVar34 == 0) {
                if ((monitor_output != 0) && (iVar7 = iopoll(0xffffffff,1,0), iVar7 == -2))
                goto LAB_00104f0e;
                goto LAB_0010493b;
              }
              iVar7 = fflush_unlocked(_stdout);
              __ptr = (undefined1 *)psVar16;
              psVar28 = psVar19;
              if (iVar7 == 0) {
                if ((monitor_output != 0) && (iVar7 = iopoll(0xffffffff,1,0), iVar7 == -2))
                goto LAB_00104f0e;
                if ((byte)local_250 == 0) {
                  if ((char)local_210 != '\0') goto LAB_00103bee;
                  if (nbpids == 0) {
LAB_00104b25:
                    iVar7 = xnanosleep(local_220);
                    if (iVar7 != 0) {
                      pcVar38 = "cannot read realtime clock";
                      break;
                    }
                  }
                  else {
                    if (0 < (int)nbpids) {
                      psVar37 = (stat *)((long)pids->__unused + (long)(int)nbpids * 4 + -0x78);
                      psVar39 = pids;
                      do {
                        iVar7 = kill((__pid_t)psVar39->st_dev,0);
                        if ((iVar7 == 0) || (piVar17 = __errno_location(), *piVar17 == 1))
                        goto LAB_00104b25;
                        psVar39 = (stat *)((long)&psVar39->st_dev + 4);
                      } while (psVar39 != psVar37);
                    }
                    local_210 = (stat *)CONCAT71(local_210._1_7_,bVar34);
                  }
                }
                goto LAB_0010493b;
              }
              do {
                cVar29 = (char)psVar26;
                write_error();
LAB_001054fa:
                psVar19 = &local_d8;
                local_208 = (stat *)CONCAT71(local_208._1_7_,cVar29);
                psVar27 = local_238;
                do {
                  iVar7 = lstat((char *)psVar27->st_dev,psVar19);
                  if ((iVar7 == 0) && ((local_d8.st_mode & 0xf000) == 0xa000)) goto LAB_001048d9;
                  psVar27 = (stat *)&(psVar27->st_mtim).tv_nsec;
                } while (local_210 != psVar27);
                lVar18 = 0;
                do {
                  if (((-1 < *(int *)((long)&local_238->st_blksize + lVar18)) &&
                      (uVar35 = *(uint *)((long)&local_238->st_size + lVar18) & 0xf000,
                      uVar35 != 0x1000)) && (uVar35 != 0x8000)) goto LAB_001048d9;
                  lVar18 = lVar18 + 0x60;
                } while (psVar39 != (stat *)lVar18);
                if ((local_1dd == 0) && (follow_mode == 2)) goto LAB_001048d9;
                psVar26 = local_238;
                iVar7 = inotify_init();
                if (iVar7 < 0) goto LAB_00105d91;
                iVar10 = fflush_unlocked(_stdout);
              } while (iVar10 != 0);
              local_258 = hash_initialize(local_260,0,0x100000);
              psVar26 = psVar39;
              if (local_258 == 0) goto LAB_00105c91;
              __mask = 0xc06;
              if (follow_mode != 1) {
                __mask = 2;
              }
              local_200 = local_200 & 0xffffffffffffff00;
              __ptr = (undefined1 *)0x0;
              psVar28 = (stat *)0x0;
              local_250 = (stat *)CONCAT44(local_250._4_4_,__mask);
              psVar37 = local_238;
              do {
                iVar10 = follow_mode;
                if (*(char *)((long)&psVar37->st_size + 4) == '\0') {
                  psVar27 = (stat *)psVar37->st_dev;
                  psVar16 = (stat *)strlen((char *)psVar27);
                  *(undefined4 *)((long)&psVar37->st_blocks + 4) = 0xffffffff;
                  if (__ptr < psVar16) {
                    __ptr = (undefined1 *)psVar16;
                  }
                  psVar26 = (stat *)(ulong)(iVar10 - 1U);
                  psVar16 = local_1e8;
                  if (iVar10 - 1U == 0) {
                    psVar26 = (stat *)dir_len(psVar27);
                    local_228 = (stat *)((long)(((stat *)(((stat *)(psVar26->__unused + -0xf))->
                                                          __unused + -0xf))->__unused +
                                               0xfffffffffffffff1) +
                                        (long)((stat *)(((stat *)(((stat *)(psVar27->__unused + -0xf
                                                                           ))->__unused + -0xf))->
                                                        __unused + -0xf))->__unused +
                                        0xffffffffffffff88U);
                    uVar6 = (undefined1)local_228->st_dev;
                    local_248 = (stat *)CONCAT71(local_248._1_7_,uVar6);
                    lVar18 = last_component(psVar27);
                    pcVar38 = ".";
                    (psVar37->st_atim).tv_nsec = lVar18 - (long)psVar27;
                    *(undefined1 *)&local_228->st_dev = 0;
                    if (psVar26 != (stat *)0x0) {
                      pcVar38 = (char *)psVar37->st_dev;
                    }
                    iVar10 = inotify_add_watch(iVar7,pcVar38,0x784);
                    *(int *)&(psVar37->st_atim).tv_sec = iVar10;
                    *(undefined1 *)((long)psVar26->__unused + (psVar37->st_dev - 0x78)) = uVar6;
                    if ((int)(psVar37->st_atim).tv_sec < 0) {
                      piVar17 = __errno_location();
                      if (*piVar17 == 0x1c) {
LAB_00105ee2:
                        local_1e8 = psVar16;
                        pcVar38 = "inotify resources exhausted";
LAB_00105b90:
                        uVar21 = dcgettext(0,pcVar38,5);
                        error(0,0,uVar21);
                      }
                      else {
                        uVar21 = quotearg_style(4,psVar37->st_dev);
                        uVar25 = dcgettext(0,"cannot watch parent directory of %s",5);
                        error(0,*piVar17,uVar25,uVar21);
                      }
                      goto LAB_00105d74;
                    }
                  }
                  iVar10 = inotify_add_watch(iVar7,(char *)psVar37->st_dev,__mask);
                  *(int *)((long)&psVar37->st_blocks + 4) = iVar10;
                  if (iVar10 < 0) {
                    if ((int)psVar37->st_blksize != -1) {
                      psVar28 = (stat *)(ulong)bVar5;
                    }
                    puVar36 = (uint *)__errno_location();
                    if ((*puVar36 & 0xffffffef) == 0xc) goto LAB_00105ee2;
                    if (*puVar36 != *(uint *)((long)&psVar37->st_blksize + 4)) {
                      uVar21 = quotearg_style(4,psVar37->st_dev);
                      uVar25 = dcgettext(0,"cannot watch %s",5);
                      error(0,*puVar36,uVar25,uVar21);
                    }
                  }
                  else {
                    lVar18 = hash_insert(local_258);
                    local_240 = psVar39;
                    if (lVar18 == 0) goto LAB_00105c91;
                    local_200 = CONCAT71(local_200._1_7_,bVar5);
                  }
                }
                psVar37 = (stat *)&(psVar37->st_mtim).tv_nsec;
              } while (local_210 != psVar37);
              if (follow_mode != 2) {
LAB_001057d4:
                local_1d0 = (undefined *)((long)&local_238[-1].st_size + (long)psVar39);
                psVar37 = local_238;
                do {
                  if (*(char *)((long)&psVar37->st_size + 4) == '\0') {
                    if (follow_mode == 1) {
                      recheck(psVar37,0);
                    }
                    else if ((((int)psVar37->st_blksize != -1) &&
                             (iVar10 = stat((char *)psVar37->st_dev,psVar19), iVar10 == 0)) &&
                            ((lVar3._0_4_ = psVar37->st_gid, lVar3._4_4_ = psVar37->__pad0,
                             lVar3 != CONCAT26(local_d8.st_dev._6_2_,
                                               CONCAT24(local_d8.st_dev._4_2_,(int)local_d8.st_dev))
                             || (psVar37->st_rdev != local_d8.st_ino)))) {
                      uVar21 = pretty_name_isra_0(psVar37->st_dev);
                      uVar21 = quotearg_style(4,uVar21);
                      uVar25 = dcgettext(0,"%s was replaced",5);
                      piVar17 = __errno_location();
                      error(0,*piVar17,uVar25,uVar21);
                      psVar37 = local_210;
                      goto LAB_00105d74;
                    }
                    check_fspec(psVar37);
                  }
                  psVar37 = (stat *)&(psVar37->st_mtim).tv_nsec;
                } while (local_210 != psVar37);
                psVar37 = (stat *)0x0;
                local_240 = (stat *)((long)&((stat *)__ptr)->st_nlink + 1);
                local_248 = (stat *)xmalloc();
                local_210 = (stat *)CONCAT44(local_210._4_4_,3);
                local_228 = (stat *)0x0;
                psVar16 = local_260;
                local_1f0 = psVar39;
LAB_00105895:
                if (((follow_mode == 1) && (reopen_inaccessible_files == 0)) &&
                   (lVar18 = hash_get_n_entries(), lVar18 == 0)) goto LAB_001053f9;
                psVar28 = (stat *)__ptr;
                if (psVar37 < local_228) {
LAB_001058b0:
                  psVar26 = (stat *)((long)(((stat *)(((stat *)(psVar37->__unused + -0xf))->__unused
                                                     + -0xf))->__unused + 0xfffffffffffffff1) +
                                    (long)((stat *)(((stat *)(((stat *)(local_248->__unused + -0xf))
                                                              ->__unused + -0xf))->__unused + -0xf))
                                          ->__unused + 0xffffffffffffff88U);
                  uVar35 = *(uint *)((long)&psVar26->st_ino + 4);
                  _Var2 = psVar26->st_dev;
                  iVar10 = (int)psVar26->st_dev;
                  local_200 = (size_t)uVar35;
                  psVar39 = local_1f0;
                  if ((_Var2 & 0x40000000000) == 0) {
                    if (uVar35 != 0) goto LAB_001058dc;
LAB_001059c2:
                    local_184 = iVar10;
                    psVar27 = (stat *)hash_lookup();
                    if (psVar27 == (stat *)0x0) goto LAB_001059a9;
                    goto LAB_00105969;
                  }
                  if (uVar35 == 0) {
                    psVar27 = (stat *)0x0;
                    do {
                      if ((int)local_238->__unused[(long)psVar27 * 0xc + -6] == iVar10) {
                        pcVar38 = "directory containing watched file was removed";
                        goto LAB_00105b90;
                      }
                      psVar27 = (stat *)((long)&psVar27->st_dev + 1);
                    } while (psVar16 != psVar27);
                    goto LAB_001059c2;
                  }
LAB_001058dc:
                  psVar28 = (stat *)0x0;
                  psVar27 = local_238;
                  do {
                    local_1e8 = psVar37;
                    if (((int)(psVar27->st_atim).tv_sec == iVar10) &&
                       (iVar12 = strcmp((char *)&psVar26->st_nlink,
                                        (char *)((psVar27->st_atim).tv_nsec + psVar27->st_dev)),
                       iVar12 == 0)) {
                      if (psVar16 != psVar28) {
                        psVar27 = (stat *)(local_238->__unused + (long)psVar28 * 0xc + -0xf);
                        __ptr = (undefined1 *)psVar16;
                        if ((_Var2 & 0x20000000000) != 0) goto LAB_0010595c;
                        uVar35 = inotify_add_watch(iVar7,(char *)psVar27->st_dev,(uint32_t)local_250
                                                  );
                        psVar28 = (stat *)(ulong)uVar35;
                        if (-1 < (int)uVar35) goto LAB_00105c96;
                        local_1e8 = (stat *)__errno_location();
                        psVar16 = psVar37;
                        if ((local_1e8->st_dev & 0xffffffef) == 0xc) goto LAB_00105ee2;
                        uVar21 = quotearg_style(4,psVar27->st_dev);
                        uVar25 = dcgettext(0,"cannot watch %s",5);
                        error(0,(int)local_1e8->st_dev,uVar25,uVar21);
                        uVar8 = *(uint *)((long)&psVar27->st_blocks + 4);
                        if (-1 < (int)uVar8) goto LAB_00105ca9;
                        goto LAB_00105c2a;
                      }
                      break;
                    }
                    psVar28 = (stat *)((long)&psVar28->st_dev + 1);
                    psVar27 = (stat *)&(psVar27->st_mtim).tv_nsec;
                  } while (psVar16 != psVar28);
                  goto LAB_001059a9;
                }
                uVar32 = (ulong)local_208 & 0xff;
                do {
                  uVar35 = nbpids;
                  if (nbpids == 0) {
LAB_00105af5:
                    iVar10 = -1;
                  }
                  else {
                    if ((char)uVar32 != '\0') {
                    /* WARNING: Subroutine does not return */
                      exit(0);
                    }
                    lVar18 = 0;
                    do {
                      if ((int)uVar35 <= (int)lVar18) {
                        uVar32 = (ulong)bVar5;
                        iVar10 = 0;
                        goto LAB_00105a57;
                      }
                      iVar10 = kill(*(__pid_t *)((long)pids->__unused + lVar18 * 4 + -0x78),0);
                      if (iVar10 == 0) break;
                      piVar17 = __errno_location();
                      lVar18 = lVar18 + 1;
                    } while (*piVar17 != 1);
                    iVar10 = 0;
                    if (0.0 < local_220) {
                      if (_LC100 <= local_220) goto LAB_00105af5;
                      iVar10 = (int)(_LC101 * local_220);
                      iVar10 = iVar10 + (uint)((double)iVar10 < _LC101 * local_220);
                    }
                  }
LAB_00105a57:
                  local_d8.st_dev._4_2_ = 1;
                  local_d8.st_ino = 1;
                  local_d8.st_dev._0_4_ = iVar7;
                  iVar10 = poll((pollfd *)psVar19,(ulong)monitor_output + 1,iVar10);
                } while (iVar10 == 0);
                local_208 = (stat *)CONCAT71(local_208._1_7_,(char)uVar32);
                if (iVar10 < 0) {
                  pcVar38 = "error waiting for inotify and output events";
                  break;
                }
                if (local_d8.st_ino._6_2_ != 0) goto LAB_00104f0e;
                local_228 = (stat *)safe_read(iVar7,local_248,local_240);
                if (local_228 == (stat *)0x0) {
LAB_00105ce8:
                  if ((int)local_210 != 0) {
                    psVar37 = (stat *)0x0;
                    local_210 = (stat *)CONCAT44(local_210._4_4_,(int)local_210 + -1);
                    local_240 = (stat *)((long)local_240 * 2);
                    local_248 = (stat *)xrealloc();
                    local_228 = (stat *)0x0;
                    __ptr = (undefined1 *)psVar19;
                    goto LAB_00105895;
                  }
                }
                else {
                  psVar37 = (stat *)0x0;
                  psVar28 = psVar19;
                  if (-1 < (long)local_228) goto LAB_001058b0;
                  piVar17 = __errno_location();
                  if (*piVar17 == 0x16) goto LAB_00105ce8;
                }
                pcVar38 = "error reading inotify event";
                break;
              }
              if ((char)psVar28 == '\0') {
                if ((char)local_200 != '\0') goto LAB_001057d4;
                goto LAB_00104f18;
              }
LAB_00105d74:
              hash_free(local_258);
              close(iVar7);
              piVar17 = __errno_location();
              *piVar17 = 0;
LAB_00105d91:
              uVar21 = dcgettext(0,"inotify cannot be used, reverting to polling",5);
              piVar17 = __errno_location();
              error(0,*piVar17,uVar21);
            } while( true );
          }
          __s1 = (undefined **)dcgettext(0,pcVar38,5);
          piVar17 = __errno_location();
          error(1,*piVar17,__s1);
        }
        iVar7 = close(0);
        if (-1 < iVar7) {
LAB_00103bfb:
          bVar5 = local_1dd ^ 1;
          goto LAB_00103c09;
        }
        puVar36 = (uint *)__errno_location();
        iVar10 = 1;
        psVar39 = (stat *)(ulong)*puVar36;
        error(1,psVar39,&_LC87);
        __ptr = (undefined1 *)psVar19;
        iVar7 = extraout_EDX;
LAB_00104b8d:
        _Var22 = lseek(iVar10,(__off_t)psVar39,iVar7);
        if (_Var22 < 0) {
          quotearg_n_style_colon(0,3,local_230);
          uVar21 = dcgettext(0,"%s: cannot seek to relative offset %jd",5);
          piVar17 = __errno_location();
          goto LAB_001042ea;
        }
LAB_00103c93:
        local_1c8[0] = local_248;
LAB_00103ca0:
        local_248 = (stat *)0xffffffffffffffff;
        psVar19 = local_1c8[0];
LAB_00103ca9:
        local_1c8[0] = psVar19;
        local_218 = (stat *)0x1;
        lVar18 = dump_remainder_constprop_0(local_230,local_258 & 0xffffffff,local_248);
        local_1c8[0] = (stat *)((long)local_1c8[0]->__unused + lVar18 + -0x78);
      }
      if (iVar7 == 0) goto LAB_00103bbc;
      iVar7 = close((uint)local_258);
      if (iVar7 == 0) goto LAB_00103bbc;
      uVar21 = pretty_name_isra_0(psVar16->st_dev);
      uVar21 = quotearg_style(4,uVar21);
      pcVar38 = "error reading %s";
      goto LAB_001039ae;
    }
    psVar37 = (stat *)lseek((uint)local_258,0,2);
    if ((long)psVar37 <= (long)pcVar38) {
      _Var22 = lseek((uint)local_258,(__off_t)pcVar38,0);
      if (_Var22 < 0) goto LAB_00104bfd;
      goto LAB_00103f2e;
    }
    if ((psVar37 == (stat *)0x0) || (psVar39 == (stat *)0x0)) goto LAB_00104357;
    local_1c8[0] = psVar37;
    if ((local_d8.st_mode & 0xf000) != 0x8000) goto LAB_00105372;
    local_228 = (stat *)0x2000;
    if ((local_d8.st_size % (long)page_size == 0) &&
       (local_228 = (stat *)0x2000, 0x1fff < (long)page_size)) {
      local_228 = page_size;
    }
    local_250 = (stat *)xmalloc(local_228);
    puVar30 = (undefined1 *)(((long)psVar37 - (long)pcVar38) % (long)local_228);
    if ((stat *)puVar30 == (stat *)0x0) {
      puVar30 = (undefined1 *)local_228;
    }
    _Var22 = lseek((uint)local_258,(__off_t)((long)psVar37 - (long)puVar30),0);
    puVar36 = (uint *)psVar16;
    psVar39 = local_218;
    local_240 = (stat *)puVar30;
    local_218 = (stat *)((long)psVar37 - (long)puVar30);
    if (-1 < _Var22) {
LAB_00104f84:
      sVar24 = safe_read(local_258,local_250,puVar30);
      if ((long)sVar24 < 0) goto LAB_0010521b;
      local_1c8[0] = (stat *)((long)local_218 + sVar24);
      if (sVar24 == 0) goto LAB_00104fd8;
      if (*(char *)((long)local_250->__unused + (sVar24 - 0x79)) == line_end) goto LAB_00104fd8;
      local_248 = (stat *)((long)local_248[-1].__unused + 0x17);
      goto LAB_00104fd8;
    }
    quotearg_n_style_colon(0,3,local_230);
    uVar21 = dcgettext(0,"%s: cannot seek to offset %jd",5);
    piVar17 = __errno_location();
LAB_001042ea:
    error(1,*piVar17,uVar21);
LAB_001042fe:
    local_260 = (stat *)0x1;
    __s1 = &dummy_stdin_4;
  } while( true );
LAB_001051b0:
  sVar24 = safe_read(local_258,local_250,local_228);
  __s1 = (undefined **)local_240;
  if ((long)sVar24 < 0) goto LAB_0010521b;
  local_1c8[0] = (stat *)((long)local_218 + sVar24);
  if (sVar24 == 0) {
LAB_00105112:
    __s1 = (undefined **)(ulong)(uint)local_240;
    __ptr = (undefined1 *)((ulong)psVar39 & 0xffffffff);
    psVar16 = (stat *)puVar36;
    goto LAB_00105115;
  }
LAB_00104fd8:
  local_240 = (stat *)__s1;
  psVar16 = local_1c8[0];
  iVar7 = (int)line_end;
  __n = sVar24;
  while( true ) {
    local_200 = sVar24;
    if ((__n == 0) || (pvVar23 = memrchr(local_250,iVar7,__n), pvVar23 == (void *)0x0)) break;
    __n = (long)pvVar23 - (long)local_250;
    bVar40 = local_248 == (stat *)0x0;
    local_248 = (stat *)((long)local_248[-1].__unused + 0x17);
    if (bVar40) {
      xwrite_stdout((long)pvVar23 + 1,sVar24 - (__n + 1));
      lVar18 = dump_remainder_constprop_0(local_230,local_258,(long)psVar37 - (long)psVar16);
      local_1c8[0] = (stat *)((long)local_1c8[0]->__unused + lVar18 + -0x78);
      local_248 = psVar16;
      goto LAB_00105112;
    }
  }
  if ((stat *)pcVar38 == local_218) {
    _Var22 = lseek((uint)local_258,(__off_t)pcVar38,0);
    if (-1 < _Var22) {
      lVar18 = dump_remainder_constprop_0(local_230,local_258,psVar37);
      local_1c8[0] = (stat *)(pcVar38 + lVar18);
      goto LAB_00105112;
    }
    goto LAB_00104bfd;
  }
  local_218 = (stat *)((long)local_218 + -(long)local_228);
  _Var22 = lseek((uint)local_258,(__off_t)local_218,0);
  if (_Var22 < 0) {
    quotearg_n_style_colon(0,3,local_230);
    uVar21 = dcgettext(0,"%s: cannot seek to offset %jd",5);
    piVar17 = __errno_location();
    goto LAB_001042ea;
  }
  goto LAB_001051b0;
LAB_0010521b:
  uVar21 = quotearg_style(4,local_230);
  uVar25 = dcgettext(0,"error reading %s",5);
  piVar17 = __errno_location();
  error(0,*piVar17,uVar25,uVar21);
  psVar16 = (stat *)puVar36;
LAB_00105115:
  free(local_250);
  local_218 = (stat *)((ulong)__ptr & 0xff);
  goto LAB_00103ba7;
LAB_001053f9:
  uVar21 = dcgettext(0,"no files remaining",5);
  error(1,0,uVar21);
  goto LAB_0010541d;
LAB_00105c2a:
  *(int *)((long)&psVar27->st_blocks + 4) = (int)psVar28;
  uVar35 = (int)psVar28 + 1;
  psVar28 = (stat *)(ulong)uVar35;
  psVar16 = (stat *)__ptr;
  if (uVar35 == 0) goto LAB_001059a9;
  while( true ) {
    psVar28 = (stat *)hash_remove(local_258,psVar27);
    if ((psVar28 != (stat *)0x0) && (psVar27 != psVar28)) {
      if (follow_mode == 1) {
        recheck(psVar28,0);
      }
      *(undefined4 *)((long)&psVar28->st_blocks + 4) = 0xffffffff;
      uVar21 = pretty_name_isra_0(psVar28->st_dev);
      close_fd((int)psVar28->st_blksize,uVar21);
    }
    lVar18 = hash_insert(local_258);
    if (lVar18 != 0) goto LAB_0010595c;
LAB_00105c91:
    uVar35 = xalloc_die();
LAB_00105c96:
    uVar8 = *(uint *)((long)&psVar27->st_blocks + 4);
    if (-1 < (int)uVar8) break;
    *(uint *)((long)&psVar27->st_blocks + 4) = uVar35;
  }
  if (uVar35 == uVar8) goto LAB_0010595c;
LAB_00105ca9:
  inotify_rm_watch(iVar7,uVar8);
  hash_remove();
  goto LAB_00105c2a;
LAB_0010595c:
  psVar16 = (stat *)__ptr;
  if (follow_mode == 1) {
    recheck(psVar27);
  }
LAB_00105969:
  _Var2 = psVar26->st_dev;
  if ((_Var2 & 0xe0400000000) == 0) {
    check_fspec();
  }
  else {
    if (((_Var2 & 0x40000000000) != 0) ||
       ((reopen_inaccessible_files == 0 && ((_Var2 & 0x80000000000) != 0)))) {
      inotify_rm_watch(iVar7,*(int *)((long)&psVar27->st_blocks + 4));
      hash_remove(local_258);
    }
    recheck();
  }
LAB_001059a9:
  psVar37 = (stat *)((long)psVar37->__unused + ((local_200 & 0xffffffff) - 0x68));
  __ptr = (undefined1 *)psVar28;
  goto LAB_00105895;
LAB_00104f0e:
  raise(0xd);
LAB_00104f18:
                    /* WARNING: Subroutine does not return */
  exit(1);
}


