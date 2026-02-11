
undefined8 count_items(void)

{
  n_strings = n_strings + 1;
  return 0;
}



undefined8 recurse_tree(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  char cVar1;
  undefined8 uVar2;
  
  while( true ) {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00100073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1);
        return uVar2;
      }
    }
    else {
      cVar1 = recurse_tree(*(long *)(param_1 + 8),UNRECOVERED_JUMPTABLE);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1);
    if ((char)uVar2 != '\0') break;
    param_1 = *(long *)(param_1 + 0x10);
    if (param_1 == 0) {
      return uVar2;
    }
  }
  return 1;
}



undefined8 detect_loop(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_1[4] == 0) {
    return 0;
  }
  puVar6 = param_1;
  if (loop != (undefined8 *)0x0) {
    plVar1 = param_1 + 6;
    for (plVar3 = (long *)param_1[6]; puVar6 = loop, plVar3 != (long *)0x0;
        plVar3 = (long *)plVar3[1]) {
      if (loop == (undefined8 *)*plVar3) {
        if (param_1[5] == 0) {
          param_1[5] = loop;
          loop = param_1;
          return 0;
        }
        do {
          uVar4 = *puVar6;
          puVar6 = (undefined8 *)puVar6[5];
          error(0,0,&_LC0,uVar4);
          if (loop == param_1) {
            lVar5 = ((long *)*plVar1)[1];
            plVar3 = (long *)(*(long *)*plVar1 + 0x20);
            *plVar3 = *plVar3 + -1;
            *plVar1 = lVar5;
            do {
              puVar6 = (undefined8 *)param_1[5];
              param_1[5] = 0;
              param_1 = puVar6;
            } while (puVar6 != (undefined8 *)0x0);
            loop = (undefined8 *)0x0;
            return 1;
          }
          puVar2 = loop + 5;
          loop = puVar6;
          *puVar2 = 0;
        } while (puVar6 != (undefined8 *)0x0);
        return 1;
      }
      plVar1 = plVar3 + 1;
    }
  }
  loop = puVar6;
  return 0;
}



undefined8 scan_zeros(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = zeros;
  lVar2 = head;
  if (((*(long *)(param_1 + 0x20) == 0) && (*(char *)(param_1 + 0x19) == '\0')) &&
     (lVar1 = param_1, lVar2 = param_1, head != 0)) {
    *(long *)(zeros + 0x28) = param_1;
    lVar1 = param_1;
    lVar2 = head;
  }
  head = lVar2;
  zeros = lVar1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
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
  
  uVar5 = _program_name;
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_0010021a;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION] [FILE]\nWrite totally ordered list consistent with the partial ordering in FILE.\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,&_LC9,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC1;
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
    iVar2 = strcmp("tsort",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "tsort";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001003fd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","tsort");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001003fd:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","tsort");
    if (pcVar4 == "tsort") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010021a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



undefined8 * search_item(undefined8 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int local_3c;
  
  puVar3 = (undefined8 *)param_1[2];
  puVar8 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)xzalloc(0x38);
    if (param_2 != (char *)0x0) {
      uVar7 = xstrdup(param_2);
      *puVar6 = uVar7;
    }
    param_1[2] = puVar6;
  }
  else {
    while( true ) {
      puVar6 = puVar3;
      iVar2 = strcmp(param_2,(char *)*puVar6);
      if (iVar2 == 0) break;
      puVar3 = (undefined8 *)puVar6[2];
      if (iVar2 < 0) {
        puVar3 = (undefined8 *)puVar6[1];
      }
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)xzalloc(0x38);
        uVar7 = xstrdup(param_2);
        *puVar3 = uVar7;
        if (iVar2 < 0) {
          puVar6[1] = puVar3;
        }
        else {
          puVar6[2] = puVar3;
        }
        iVar2 = strcmp(param_2,(char *)*puVar8);
        if (iVar2 < 0) {
          local_3c = -1;
          puVar6 = (undefined8 *)puVar8[1];
          puVar5 = puVar6;
        }
        else {
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("0 < a","src/tsort.c",0xa6,"search_item");
          }
          local_3c = 1;
          puVar6 = (undefined8 *)puVar8[2];
          puVar5 = puVar6;
        }
        while (puVar6 != puVar3) {
          iVar2 = strcmp(param_2,(char *)*puVar6);
          if (iVar2 < 0) {
            *(undefined1 *)(puVar6 + 3) = 0xff;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("0 < cmp","src/tsort.c",0xb5,"search_item");
            }
            *(undefined1 *)(puVar6 + 3) = 1;
            puVar6 = (undefined8 *)puVar6[2];
          }
        }
        cVar1 = *(char *)(puVar8 + 3);
        if ((cVar1 != '\0') && ((int)cVar1 != -local_3c)) {
          if (*(char *)(puVar5 + 3) == local_3c) {
            if (local_3c == -1) {
              puVar8[1] = puVar5[2];
              puVar5[2] = puVar8;
            }
            else {
              puVar8[2] = puVar5[1];
              puVar5[1] = puVar8;
            }
            *(undefined1 *)(puVar5 + 3) = 0;
            *(undefined1 *)(puVar8 + 3) = 0;
          }
          else {
            puVar6 = (undefined8 *)puVar5[1];
            puVar4 = (undefined8 *)puVar5[2];
            if (local_3c == -1) {
              puVar5[2] = puVar4[1];
              puVar4[1] = puVar5;
              puVar8[1] = puVar4[2];
              puVar4[2] = puVar8;
            }
            else {
              puVar5[1] = puVar6[2];
              puVar6[2] = puVar5;
              puVar8[2] = puVar6[1];
              puVar6[1] = puVar8;
              puVar4 = puVar6;
            }
            *(undefined1 *)(puVar8 + 3) = 0;
            *(undefined1 *)(puVar5 + 3) = 0;
            if (*(char *)(puVar4 + 3) == local_3c) {
              *(char *)(puVar8 + 3) = -(char)local_3c;
            }
            else if (-local_3c == (int)*(char *)(puVar4 + 3)) {
              *(char *)(puVar5 + 3) = (char)local_3c;
            }
            *(undefined1 *)(puVar4 + 3) = 0;
            puVar5 = puVar4;
          }
          if ((undefined8 *)param_1[2] != puVar8) {
            param_1[1] = puVar5;
            return puVar3;
          }
          param_1[2] = puVar5;
          return puVar3;
        }
        *(char *)(puVar8 + 3) = cVar1 + (char)local_3c;
        return puVar3;
      }
      if (*(char *)(puVar3 + 3) != '\0') {
        param_1 = puVar6;
        puVar8 = puVar3;
      }
    }
  }
  return puVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tsort(byte *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *unaff_R13;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  uint local_70;
  byte local_69;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  local_70 = *param_1 - 0x2d;
  if (local_70 == 0) {
    local_70 = (uint)param_1[1];
  }
  puVar8 = (undefined8 *)xzalloc(0x38);
  if ((local_70 != 0) && (lVar9 = freopen_safer(param_1,&_LC29,_stdin), lVar9 == 0))
  goto LAB_00102e55;
  unaff_R13 = &local_58;
  unaff_R15 = (undefined8 *)&_LC30;
  fadvise(_stdin,2);
  init_tokenbuffer(unaff_R13);
  do {
    puVar10 = (undefined8 *)0x0;
    do {
      puVar15 = puVar10;
      lVar9 = readtoken(_stdin,&_LC30,3,unaff_R13);
      if (lVar9 == -1) {
        if ((*_stdin & 0x20) == 0) {
          if (puVar15 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)puVar8[2];
            if (puVar8 != (undefined8 *)0x0) {
              recurse_tree(puVar8);
            }
            local_69 = 1;
            goto LAB_001008e0;
          }
        }
        else {
          puVar8 = (undefined8 *)quotearg_n_style_colon(0,3,param_1);
          uVar14 = dcgettext(0,"%s: read error",5);
          piVar12 = __errno_location();
          error(1,*piVar12,uVar14,puVar8);
        }
        uVar14 = quotearg_n_style_colon(0,3,param_1);
        uVar13 = dcgettext(0,"%s: input contains an odd number of tokens",5);
        error(1,0,uVar13,uVar14);
        goto LAB_00103088;
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("len != 0","src/tsort.c",0x1ca,"tsort");
      }
      puVar10 = (undefined8 *)search_item(puVar8,local_50);
    } while (puVar15 == (undefined8 *)0x0);
    iVar7 = strcmp((char *)*puVar15,(char *)*puVar10);
    if (iVar7 != 0) {
      puVar10[4] = puVar10[4] + 1;
      puVar11 = (undefined8 *)xmalloc(0x10);
      uVar14 = puVar15[6];
      *puVar11 = puVar10;
      puVar11[1] = uVar14;
      puVar15[6] = puVar11;
    }
  } while( true );
LAB_00103088:
  uVar14 = quotearg_n_style_colon(0,3,param_1);
  uVar13 = dcgettext(0,"%s: input contains a loop:",5);
  error(0,0,uVar13,uVar14);
  do {
    if (puVar8 != (undefined8 *)0x0) {
      recurse_tree();
    }
    local_69 = 0;
  } while (loop != 0);
LAB_001008e0:
  if (n_strings == 0) goto LAB_00100aa1;
  puVar10 = zeros;
  puVar15 = head;
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)puVar8[1];
    if (puVar11 != (undefined8 *)0x0) {
      unaff_R15 = (undefined8 *)puVar11[1];
      if (unaff_R15 == (undefined8 *)0x0) {
        unaff_R15 = (undefined8 *)puVar11[2];
        lVar9 = puVar11[4];
        if (unaff_R15 == (undefined8 *)0x0) goto LAB_0010180b;
        if (lVar9 == 0) goto LAB_00100c86;
      }
      else {
        unaff_R13 = (undefined8 *)unaff_R15[1];
        if (unaff_R13 == (undefined8 *)0x0) {
          unaff_R13 = (undefined8 *)unaff_R15[2];
          lVar9 = unaff_R15[4];
          if (unaff_R13 != (undefined8 *)0x0) {
            if (lVar9 == 0) goto LAB_001009fc;
            goto LAB_00100e39;
          }
LAB_00101b1e:
          puVar10 = zeros;
          puVar15 = head;
          if (((lVar9 == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
             (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
            zeros[5] = unaff_R15;
            puVar10 = unaff_R15;
            puVar15 = head;
          }
        }
        else {
          puVar10 = (undefined8 *)unaff_R13[1];
          if (puVar10 == (undefined8 *)0x0) {
            puVar10 = (undefined8 *)unaff_R13[2];
            lVar9 = unaff_R13[4];
            if (puVar10 != (undefined8 *)0x0) {
              if (lVar9 == 0) goto LAB_001009c1;
              goto LAB_00101053;
            }
LAB_0010216e:
            puVar15 = zeros;
            puVar16 = head;
            if (((lVar9 == 0) && (*(char *)((long)unaff_R13 + 0x19) == '\0')) &&
               (puVar15 = unaff_R13, puVar16 = unaff_R13, head != (undefined8 *)0x0)) {
              zeros[5] = unaff_R13;
              puVar15 = unaff_R13;
              puVar16 = head;
            }
          }
          else {
            puVar15 = (undefined8 *)puVar10[1];
            if (puVar15 == (undefined8 *)0x0) {
              puVar15 = (undefined8 *)puVar10[2];
              if (puVar15 != (undefined8 *)0x0) {
                if (puVar10[4] == 0) goto LAB_00100986;
                goto LAB_0010198f;
              }
              puVar16 = zeros;
              puVar3 = head;
              if (((puVar10[4] == 0) && (*(char *)((long)puVar10 + 0x19) == '\0')) &&
                 (puVar16 = puVar10, puVar3 = puVar10, head != (undefined8 *)0x0)) {
                zeros[5] = puVar10;
                puVar3 = head;
              }
            }
            else {
              if (puVar15[1] == 0) {
                puVar16 = (undefined8 *)puVar15[2];
                if (puVar16 != (undefined8 *)0x0) {
                  if (puVar15[4] == 0) goto LAB_00101212;
                  goto LAB_00101c36;
                }
                puVar3 = zeros;
                puVar5 = head;
                if (((puVar15[4] == 0) && (*(char *)((long)puVar15 + 0x19) == '\0')) &&
                   (puVar3 = puVar15, puVar5 = puVar15, head != (undefined8 *)0x0)) {
                  zeros[5] = puVar15;
                  puVar5 = head;
                }
              }
              else {
                cVar6 = recurse_tree();
                puVar4 = zeros;
                puVar5 = head;
                if (cVar6 != '\0') goto LAB_00100a7e;
                puVar16 = (undefined8 *)puVar15[2];
                puVar3 = zeros;
                if (puVar15[4] == 0) {
LAB_00101212:
                  puVar3 = zeros;
                  puVar5 = head;
                  if ((*(char *)((long)puVar15 + 0x19) == '\0') &&
                     (puVar3 = puVar15, puVar5 = puVar15, head != (undefined8 *)0x0)) {
                    zeros[5] = puVar15;
                    puVar5 = head;
                  }
                }
                head = puVar5;
                zeros = puVar3;
                puVar3 = zeros;
                puVar5 = head;
                if (puVar16 != (undefined8 *)0x0) {
LAB_00101c36:
                  if (puVar16[1] == 0) {
                    lVar9 = puVar16[2];
                    if (lVar9 != 0) {
                      if (puVar16[4] == 0) goto LAB_00101c6c;
                      goto LAB_00101c9b;
                    }
                    puVar3 = zeros;
                    puVar5 = head;
                    if (((puVar16[4] == 0) && (*(char *)((long)puVar16 + 0x19) == '\0')) &&
                       (puVar3 = puVar16, puVar5 = puVar16, head != (undefined8 *)0x0)) {
                      zeros[5] = puVar16;
                      puVar5 = head;
                    }
                  }
                  else {
                    cVar6 = recurse_tree();
                    puVar4 = zeros;
                    puVar5 = head;
                    if (cVar6 != '\0') goto LAB_00100a7e;
                    lVar9 = puVar16[2];
                    puVar15 = zeros;
                    puVar3 = head;
                    if (puVar16[4] == 0) {
LAB_00101c6c:
                      puVar15 = zeros;
                      puVar3 = head;
                      if ((*(char *)((long)puVar16 + 0x19) == '\0') &&
                         (puVar15 = puVar16, puVar3 = puVar16, head != (undefined8 *)0x0)) {
                        zeros[5] = puVar16;
                        puVar3 = head;
                      }
                    }
                    head = puVar3;
                    zeros = puVar15;
                    puVar3 = zeros;
                    puVar5 = head;
                    if (lVar9 != 0) {
LAB_00101c9b:
                      cVar6 = recurse_tree();
                      puVar3 = zeros;
                      puVar4 = zeros;
                      puVar5 = head;
                      if (cVar6 != '\0') goto LAB_00100a7e;
                    }
                  }
                }
              }
              head = puVar5;
              zeros = puVar3;
              puVar15 = (undefined8 *)puVar10[2];
              puVar16 = zeros;
              puVar3 = head;
              if (puVar10[4] == 0) {
LAB_00100986:
                puVar16 = zeros;
                puVar3 = head;
                if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
                   (puVar16 = puVar10, puVar3 = puVar10, head != (undefined8 *)0x0)) {
                  zeros[5] = puVar10;
                  puVar3 = head;
                }
              }
              head = puVar3;
              zeros = puVar16;
              puVar16 = zeros;
              puVar3 = head;
              if (puVar15 != (undefined8 *)0x0) {
LAB_0010198f:
                puVar10 = (undefined8 *)puVar15[1];
                if (puVar10 == (undefined8 *)0x0) {
                  lVar9 = puVar15[2];
                  if (lVar9 != 0) {
                    if (puVar15[4] == 0) goto LAB_00101a0d;
                    goto LAB_00101a3c;
                  }
                  puVar16 = zeros;
                  puVar3 = head;
                  if (((puVar15[4] == 0) && (*(char *)((long)puVar15 + 0x19) == '\0')) &&
                     (puVar16 = puVar15, puVar3 = puVar15, head != (undefined8 *)0x0)) {
                    zeros[5] = puVar15;
                    puVar3 = head;
                  }
                }
                else {
                  if (puVar10[1] == 0) {
                    lVar9 = puVar10[2];
                    if (lVar9 != 0) {
                      if (puVar10[4] == 0) goto LAB_001019d2;
                      goto LAB_00102301;
                    }
                    puVar16 = zeros;
                    puVar3 = head;
                    if (((puVar10[4] == 0) && (*(char *)((long)puVar10 + 0x19) == '\0')) &&
                       (puVar16 = puVar10, puVar3 = puVar10, head != (undefined8 *)0x0)) {
                      zeros[5] = puVar10;
                      puVar3 = head;
                    }
                  }
                  else {
                    cVar6 = recurse_tree();
                    puVar4 = zeros;
                    puVar5 = head;
                    if (cVar6 != '\0') goto LAB_00100a7e;
                    lVar9 = puVar10[2];
                    puVar16 = zeros;
                    puVar3 = head;
                    if (puVar10[4] == 0) {
LAB_001019d2:
                      puVar16 = zeros;
                      puVar3 = head;
                      if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
                         (puVar16 = puVar10, puVar3 = puVar10, head != (undefined8 *)0x0)) {
                        zeros[5] = puVar10;
                        puVar3 = head;
                      }
                    }
                    head = puVar3;
                    zeros = puVar16;
                    puVar16 = zeros;
                    puVar3 = head;
                    if (lVar9 != 0) {
LAB_00102301:
                      cVar6 = recurse_tree();
                      puVar16 = zeros;
                      puVar4 = zeros;
                      puVar3 = head;
                      puVar5 = head;
                      if (cVar6 != '\0') goto LAB_00100a7e;
                    }
                  }
                  head = puVar3;
                  zeros = puVar16;
                  lVar9 = puVar15[2];
                  puVar10 = zeros;
                  puVar16 = head;
                  if (puVar15[4] == 0) {
LAB_00101a0d:
                    puVar10 = zeros;
                    puVar16 = head;
                    if ((*(char *)((long)puVar15 + 0x19) == '\0') &&
                       (puVar10 = puVar15, puVar16 = puVar15, head != (undefined8 *)0x0)) {
                      zeros[5] = puVar15;
                      puVar16 = head;
                    }
                  }
                  head = puVar16;
                  zeros = puVar10;
                  puVar16 = zeros;
                  puVar3 = head;
                  if (lVar9 != 0) {
LAB_00101a3c:
                    cVar6 = recurse_tree();
                    puVar16 = zeros;
                    puVar4 = zeros;
                    puVar3 = head;
                    puVar5 = head;
                    if (cVar6 != '\0') goto LAB_00100a7e;
                  }
                }
              }
            }
            head = puVar3;
            zeros = puVar16;
            puVar10 = (undefined8 *)unaff_R13[2];
            puVar15 = zeros;
            puVar16 = head;
            if (unaff_R13[4] == 0) {
LAB_001009c1:
              puVar15 = zeros;
              puVar16 = head;
              if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
                 (puVar15 = unaff_R13, puVar16 = unaff_R13, head != (undefined8 *)0x0)) {
                zeros[5] = unaff_R13;
                puVar15 = unaff_R13;
                puVar16 = head;
              }
            }
            head = puVar16;
            zeros = puVar15;
            puVar15 = zeros;
            puVar16 = head;
            if (puVar10 != (undefined8 *)0x0) {
LAB_00101053:
              unaff_R13 = (undefined8 *)puVar10[1];
              if (unaff_R13 == (undefined8 *)0x0) {
                unaff_R13 = (undefined8 *)puVar10[2];
                if (unaff_R13 != (undefined8 *)0x0) {
                  if (puVar10[4] == 0) goto LAB_00102027;
                  goto LAB_00101f79;
                }
                puVar15 = zeros;
                puVar16 = head;
                if (((puVar10[4] == 0) && (*(char *)((long)puVar10 + 0x19) == '\0')) &&
                   (puVar15 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
                  zeros[5] = puVar10;
                  puVar16 = head;
                }
              }
              else {
                puVar15 = (undefined8 *)unaff_R13[1];
                if (puVar15 == (undefined8 *)0x0) {
                  lVar9 = unaff_R13[2];
                  if (lVar9 != 0) {
                    if (unaff_R13[4] == 0) goto LAB_001010de;
                    goto LAB_00102008;
                  }
                  puVar15 = zeros;
                  puVar16 = head;
                  if (((unaff_R13[4] == 0) && (*(char *)((long)unaff_R13 + 0x19) == '\0')) &&
                     (puVar15 = unaff_R13, puVar16 = unaff_R13, head != (undefined8 *)0x0)) {
                    zeros[5] = unaff_R13;
                    puVar15 = unaff_R13;
                    puVar16 = head;
                  }
                }
                else {
                  if (puVar15[1] == 0) {
                    lVar9 = puVar15[2];
                    if (lVar9 != 0) {
                      if (puVar15[4] == 0) goto LAB_001010a3;
                      goto LAB_0010324a;
                    }
                    puVar16 = zeros;
                    puVar3 = head;
                    if (((puVar15[4] == 0) && (*(char *)((long)puVar15 + 0x19) == '\0')) &&
                       (puVar16 = puVar15, puVar3 = puVar15, head != (undefined8 *)0x0)) {
                      zeros[5] = puVar15;
                      puVar3 = head;
                    }
                  }
                  else {
                    cVar6 = recurse_tree();
                    puVar4 = zeros;
                    puVar5 = head;
                    if (cVar6 != '\0') goto LAB_00100a7e;
                    lVar9 = puVar15[2];
                    puVar16 = zeros;
                    puVar3 = head;
                    if (puVar15[4] == 0) {
LAB_001010a3:
                      puVar16 = zeros;
                      puVar3 = head;
                      if ((*(char *)((long)puVar15 + 0x19) == '\0') &&
                         (puVar16 = puVar15, puVar3 = puVar15, head != (undefined8 *)0x0)) {
                        zeros[5] = puVar15;
                        puVar3 = head;
                      }
                    }
                    head = puVar3;
                    zeros = puVar16;
                    puVar16 = zeros;
                    puVar3 = head;
                    if (lVar9 != 0) {
LAB_0010324a:
                      cVar6 = recurse_tree();
                      puVar16 = zeros;
                      puVar4 = zeros;
                      puVar3 = head;
                      puVar5 = head;
                      if (cVar6 != '\0') goto LAB_00100a7e;
                    }
                  }
                  head = puVar3;
                  zeros = puVar16;
                  lVar9 = unaff_R13[2];
                  puVar15 = zeros;
                  puVar16 = head;
                  if (unaff_R13[4] == 0) {
LAB_001010de:
                    puVar15 = zeros;
                    puVar16 = head;
                    if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
                       (puVar15 = unaff_R13, puVar16 = unaff_R13, head != (undefined8 *)0x0)) {
                      zeros[5] = unaff_R13;
                      puVar15 = unaff_R13;
                      puVar16 = head;
                    }
                  }
                  head = puVar16;
                  zeros = puVar15;
                  puVar15 = zeros;
                  puVar16 = head;
                  if (lVar9 != 0) {
LAB_00102008:
                    cVar6 = recurse_tree();
                    puVar15 = zeros;
                    puVar4 = zeros;
                    puVar16 = head;
                    puVar5 = head;
                    if (cVar6 != '\0') goto LAB_00100a7e;
                  }
                }
                head = puVar16;
                zeros = puVar15;
                unaff_R13 = (undefined8 *)puVar10[2];
                puVar15 = zeros;
                puVar16 = head;
                if (puVar10[4] == 0) {
LAB_00102027:
                  puVar15 = zeros;
                  puVar16 = head;
                  if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
                     (puVar15 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
                    zeros[5] = puVar10;
                    puVar16 = head;
                  }
                }
                head = puVar16;
                zeros = puVar15;
                puVar15 = zeros;
                puVar16 = head;
                if (unaff_R13 != (undefined8 *)0x0) {
LAB_00101f79:
                  if (unaff_R13[1] == 0) {
                    lVar17 = unaff_R13[2];
                    lVar9 = unaff_R13[4];
                    if (lVar17 == 0) goto LAB_0010216e;
                    if (lVar9 == 0) goto LAB_00101fa5;
                  }
                  else {
                    cVar6 = recurse_tree();
                    puVar4 = zeros;
                    puVar5 = head;
                    if (cVar6 != '\0') goto LAB_00100a7e;
                    lVar17 = unaff_R13[2];
                    puVar10 = zeros;
                    puVar15 = head;
                    if (unaff_R13[4] == 0) {
LAB_00101fa5:
                      puVar10 = zeros;
                      puVar15 = head;
                      if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
                         (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
                        zeros[5] = unaff_R13;
                        puVar10 = unaff_R13;
                        puVar15 = head;
                      }
                    }
                    head = puVar15;
                    zeros = puVar10;
                    puVar15 = zeros;
                    puVar16 = head;
                    if (lVar17 == 0) goto LAB_001009f1;
                  }
                  cVar6 = recurse_tree();
                  puVar15 = zeros;
                  puVar4 = zeros;
                  puVar16 = head;
                  puVar5 = head;
                  if (cVar6 != '\0') goto LAB_00100a7e;
                }
              }
            }
          }
LAB_001009f1:
          head = puVar16;
          zeros = puVar15;
          unaff_R13 = (undefined8 *)unaff_R15[2];
          puVar10 = zeros;
          puVar15 = head;
          if (unaff_R15[4] == 0) {
LAB_001009fc:
            puVar10 = zeros;
            puVar15 = head;
            if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
               (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
              zeros[5] = unaff_R15;
              puVar10 = unaff_R15;
              puVar15 = head;
            }
          }
          head = puVar15;
          zeros = puVar10;
          puVar10 = zeros;
          puVar15 = head;
          if (unaff_R13 != (undefined8 *)0x0) {
LAB_00100e39:
            puVar10 = (undefined8 *)unaff_R13[1];
            if (puVar10 == (undefined8 *)0x0) {
              unaff_R15 = (undefined8 *)unaff_R13[2];
              if (unaff_R15 != (undefined8 *)0x0) {
                if (unaff_R13[4] == 0) goto LAB_001017c5;
                goto LAB_001016d6;
              }
              puVar10 = zeros;
              puVar15 = head;
              if (((unaff_R13[4] == 0) && (*(char *)((long)unaff_R13 + 0x19) == '\0')) &&
                 (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
                zeros[5] = unaff_R13;
                puVar10 = unaff_R13;
                puVar15 = head;
              }
            }
            else {
              unaff_R15 = (undefined8 *)puVar10[1];
              if (unaff_R15 == (undefined8 *)0x0) {
                unaff_R15 = (undefined8 *)puVar10[2];
                if (unaff_R15 != (undefined8 *)0x0) {
                  if (puVar10[4] == 0) goto LAB_00101e49;
                  goto LAB_0010175e;
                }
                puVar15 = zeros;
                puVar16 = head;
                if (((puVar10[4] == 0) && (*(char *)((long)puVar10 + 0x19) == '\0')) &&
                   (puVar15 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
                  zeros[5] = puVar10;
                  puVar16 = head;
                }
              }
              else {
                puVar15 = (undefined8 *)unaff_R15[1];
                if (puVar15 == (undefined8 *)0x0) {
                  lVar9 = unaff_R15[2];
                  if (lVar9 != 0) {
                    if (unaff_R15[4] == 0) goto LAB_00101e0e;
                    goto LAB_00103314;
                  }
                  puVar15 = zeros;
                  puVar16 = head;
                  if (((unaff_R15[4] == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
                     (puVar15 = unaff_R15, puVar16 = unaff_R15, head != (undefined8 *)0x0)) {
                    zeros[5] = unaff_R15;
                    puVar15 = unaff_R15;
                    puVar16 = head;
                  }
                }
                else {
                  if (puVar15[1] == 0) {
                    lVar9 = puVar15[2];
                    if (lVar9 != 0) {
                      if (puVar15[4] == 0) goto LAB_00100e96;
                      goto LAB_00101def;
                    }
                    puVar16 = zeros;
                    puVar3 = head;
                    if (((puVar15[4] == 0) && (*(char *)((long)puVar15 + 0x19) == '\0')) &&
                       (puVar16 = puVar15, puVar3 = puVar15, head != (undefined8 *)0x0)) {
                      zeros[5] = puVar15;
                      puVar3 = head;
                    }
                  }
                  else {
                    cVar6 = recurse_tree();
                    puVar4 = zeros;
                    puVar5 = head;
                    if (cVar6 != '\0') goto LAB_00100a7e;
                    lVar9 = puVar15[2];
                    puVar16 = zeros;
                    puVar3 = head;
                    if (puVar15[4] == 0) {
LAB_00100e96:
                      puVar16 = zeros;
                      puVar3 = head;
                      if ((*(char *)((long)puVar15 + 0x19) == '\0') &&
                         (puVar16 = puVar15, puVar3 = puVar15, head != (undefined8 *)0x0)) {
                        zeros[5] = puVar15;
                        puVar3 = head;
                      }
                    }
                    head = puVar3;
                    zeros = puVar16;
                    puVar16 = zeros;
                    puVar3 = head;
                    if (lVar9 != 0) {
LAB_00101def:
                      cVar6 = recurse_tree();
                      puVar16 = zeros;
                      puVar4 = zeros;
                      puVar3 = head;
                      puVar5 = head;
                      if (cVar6 != '\0') goto LAB_00100a7e;
                    }
                  }
                  head = puVar3;
                  zeros = puVar16;
                  lVar9 = unaff_R15[2];
                  puVar15 = zeros;
                  puVar16 = head;
                  if (unaff_R15[4] == 0) {
LAB_00101e0e:
                    puVar15 = zeros;
                    puVar16 = head;
                    if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                       (puVar15 = unaff_R15, puVar16 = unaff_R15, head != (undefined8 *)0x0)) {
                      zeros[5] = unaff_R15;
                      puVar15 = unaff_R15;
                      puVar16 = head;
                    }
                  }
                  head = puVar16;
                  zeros = puVar15;
                  puVar15 = zeros;
                  puVar16 = head;
                  if (lVar9 != 0) {
LAB_00103314:
                    cVar6 = recurse_tree();
                    puVar15 = zeros;
                    puVar4 = zeros;
                    puVar16 = head;
                    puVar5 = head;
                    if (cVar6 != '\0') goto LAB_00100a7e;
                  }
                }
                head = puVar16;
                zeros = puVar15;
                unaff_R15 = (undefined8 *)puVar10[2];
                puVar15 = zeros;
                puVar16 = head;
                if (puVar10[4] == 0) {
LAB_00101e49:
                  puVar15 = zeros;
                  puVar16 = head;
                  if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
                     (puVar15 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
                    zeros[5] = puVar10;
                    puVar16 = head;
                  }
                }
                head = puVar16;
                zeros = puVar15;
                puVar15 = zeros;
                puVar16 = head;
                if (unaff_R15 != (undefined8 *)0x0) {
LAB_0010175e:
                  if (unaff_R15[1] == 0) {
                    lVar9 = unaff_R15[2];
                    if (lVar9 != 0) {
                      if (unaff_R15[4] == 0) goto LAB_0010178a;
                      goto LAB_001021c9;
                    }
                    puVar15 = zeros;
                    puVar16 = head;
                    if (((unaff_R15[4] == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
                       (puVar15 = unaff_R15, puVar16 = unaff_R15, head != (undefined8 *)0x0)) {
                      zeros[5] = unaff_R15;
                      puVar15 = unaff_R15;
                      puVar16 = head;
                    }
                  }
                  else {
                    cVar6 = recurse_tree();
                    puVar4 = zeros;
                    puVar5 = head;
                    if (cVar6 != '\0') goto LAB_00100a7e;
                    lVar9 = unaff_R15[2];
                    puVar10 = zeros;
                    puVar15 = head;
                    if (unaff_R15[4] == 0) {
LAB_0010178a:
                      puVar10 = zeros;
                      puVar15 = head;
                      if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                         (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                        zeros[5] = unaff_R15;
                        puVar10 = unaff_R15;
                        puVar15 = head;
                      }
                    }
                    head = puVar15;
                    zeros = puVar10;
                    puVar15 = zeros;
                    puVar16 = head;
                    if (lVar9 != 0) {
LAB_001021c9:
                      cVar6 = recurse_tree();
                      puVar15 = zeros;
                      puVar4 = zeros;
                      puVar16 = head;
                      puVar5 = head;
                      if (cVar6 != '\0') goto LAB_00100a7e;
                    }
                  }
                }
              }
              head = puVar16;
              zeros = puVar15;
              unaff_R15 = (undefined8 *)unaff_R13[2];
              puVar10 = zeros;
              puVar15 = head;
              if (unaff_R13[4] == 0) {
LAB_001017c5:
                puVar10 = zeros;
                puVar15 = head;
                if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
                   (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
                  zeros[5] = unaff_R13;
                  puVar10 = unaff_R13;
                  puVar15 = head;
                }
              }
              head = puVar15;
              zeros = puVar10;
              puVar10 = zeros;
              puVar15 = head;
              if (unaff_R15 != (undefined8 *)0x0) {
LAB_001016d6:
                unaff_R13 = (undefined8 *)unaff_R15[1];
                if (unaff_R13 == (undefined8 *)0x0) {
                  lVar17 = unaff_R15[2];
                  lVar9 = unaff_R15[4];
                  if (lVar17 == 0) goto LAB_00101b1e;
                  if (lVar9 == 0) goto LAB_00102ba2;
                }
                else {
                  if (unaff_R13[1] == 0) {
                    lVar9 = unaff_R13[2];
                    if (lVar9 != 0) {
                      if (unaff_R13[4] == 0) goto LAB_0010170f;
                      goto LAB_00102b83;
                    }
                    puVar10 = zeros;
                    puVar15 = head;
                    if (((unaff_R13[4] == 0) && (*(char *)((long)unaff_R13 + 0x19) == '\0')) &&
                       (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
                      zeros[5] = unaff_R13;
                      puVar10 = unaff_R13;
                      puVar15 = head;
                    }
                  }
                  else {
                    cVar6 = recurse_tree();
                    puVar4 = zeros;
                    puVar5 = head;
                    if (cVar6 != '\0') goto LAB_00100a7e;
                    lVar9 = unaff_R13[2];
                    puVar10 = zeros;
                    puVar15 = head;
                    if (unaff_R13[4] == 0) {
LAB_0010170f:
                      puVar10 = zeros;
                      puVar15 = head;
                      if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
                         (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
                        zeros[5] = unaff_R13;
                        puVar10 = unaff_R13;
                        puVar15 = head;
                      }
                    }
                    head = puVar15;
                    zeros = puVar10;
                    puVar10 = zeros;
                    puVar15 = head;
                    if (lVar9 != 0) {
LAB_00102b83:
                      cVar6 = recurse_tree();
                      puVar10 = zeros;
                      puVar4 = zeros;
                      puVar15 = head;
                      puVar5 = head;
                      if (cVar6 != '\0') goto LAB_00100a7e;
                    }
                  }
                  head = puVar15;
                  zeros = puVar10;
                  lVar17 = unaff_R15[2];
                  puVar10 = zeros;
                  puVar15 = head;
                  if (unaff_R15[4] == 0) {
LAB_00102ba2:
                    puVar10 = zeros;
                    puVar15 = head;
                    if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                       (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                      zeros[5] = unaff_R15;
                      puVar10 = unaff_R15;
                      puVar15 = head;
                    }
                  }
                  head = puVar15;
                  zeros = puVar10;
                  puVar10 = zeros;
                  puVar15 = head;
                  if (lVar17 == 0) goto LAB_00100a2c;
                }
                cVar6 = recurse_tree();
                puVar10 = zeros;
                puVar4 = zeros;
                puVar15 = head;
                puVar5 = head;
                if (cVar6 != '\0') goto LAB_00100a7e;
              }
            }
          }
        }
LAB_00100a2c:
        head = puVar15;
        zeros = puVar10;
        unaff_R15 = (undefined8 *)puVar11[2];
        puVar10 = zeros;
        puVar15 = head;
        if (puVar11[4] == 0) {
LAB_00100c86:
          puVar10 = zeros;
          puVar15 = head;
          if ((*(char *)((long)puVar11 + 0x19) == '\0') &&
             (puVar10 = puVar11, puVar15 = puVar11, head != (undefined8 *)0x0)) {
            zeros[5] = puVar11;
            puVar15 = head;
          }
        }
        head = puVar15;
        zeros = puVar10;
        puVar10 = zeros;
        puVar15 = head;
        if (unaff_R15 == (undefined8 *)0x0) goto LAB_00100a44;
      }
      unaff_R13 = (undefined8 *)unaff_R15[1];
      if (unaff_R13 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)unaff_R15[2];
        lVar9 = unaff_R15[4];
        if (puVar11 == (undefined8 *)0x0) goto LAB_00101f26;
        if (lVar9 == 0) goto LAB_001015d3;
        goto LAB_0010112d;
      }
      puVar10 = (undefined8 *)unaff_R13[1];
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)unaff_R13[2];
        lVar9 = unaff_R13[4];
        if (puVar10 == (undefined8 *)0x0) goto LAB_00102e20;
        if (lVar9 == 0) goto LAB_0010168c;
      }
      else {
        puVar15 = (undefined8 *)puVar10[1];
        if (puVar15 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)puVar10[2];
          if (puVar15 != (undefined8 *)0x0) {
            if (puVar10[4] == 0) goto LAB_00100d94;
            goto LAB_00101559;
          }
          puVar11 = zeros;
          puVar16 = head;
          if (((puVar10[4] == 0) && (*(char *)((long)puVar10 + 0x19) == '\0')) &&
             (puVar11 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
            zeros[5] = puVar10;
            puVar16 = head;
          }
        }
        else {
          puVar11 = (undefined8 *)puVar15[1];
          if (puVar11 == (undefined8 *)0x0) {
            lVar9 = puVar15[2];
            if (lVar9 != 0) {
              if (puVar15[4] == 0) goto LAB_00100d5a;
              goto LAB_00102ef2;
            }
            puVar11 = zeros;
            puVar16 = head;
            if (((puVar15[4] == 0) && (*(char *)((long)puVar15 + 0x19) == '\0')) &&
               (puVar11 = puVar15, puVar16 = puVar15, head != (undefined8 *)0x0)) {
              zeros[5] = puVar15;
              puVar16 = head;
            }
          }
          else {
            if (puVar11[1] == 0) {
              lVar9 = puVar11[2];
              if (lVar9 != 0) {
                if (puVar11[4] == 0) goto LAB_00100d1f;
                goto LAB_00102eb3;
              }
              puVar16 = zeros;
              puVar3 = head;
              if (((puVar11[4] == 0) && (*(char *)((long)puVar11 + 0x19) == '\0')) &&
                 (puVar16 = puVar11, puVar3 = puVar11, head != (undefined8 *)0x0)) {
                zeros[5] = puVar11;
                puVar3 = head;
              }
            }
            else {
              cVar6 = recurse_tree();
              puVar4 = zeros;
              puVar5 = head;
              if (cVar6 != '\0') goto LAB_00100a7e;
              lVar9 = puVar11[2];
              puVar16 = zeros;
              puVar3 = head;
              if (puVar11[4] == 0) {
LAB_00100d1f:
                puVar16 = zeros;
                puVar3 = head;
                if ((*(char *)((long)puVar11 + 0x19) == '\0') &&
                   (puVar16 = puVar11, puVar3 = puVar11, head != (undefined8 *)0x0)) {
                  zeros[5] = puVar11;
                  puVar3 = head;
                }
              }
              head = puVar3;
              zeros = puVar16;
              puVar16 = zeros;
              puVar3 = head;
              if (lVar9 != 0) {
LAB_00102eb3:
                cVar6 = recurse_tree();
                puVar16 = zeros;
                puVar4 = zeros;
                puVar3 = head;
                puVar5 = head;
                if (cVar6 != '\0') goto LAB_00100a7e;
              }
            }
            head = puVar3;
            zeros = puVar16;
            lVar9 = puVar15[2];
            puVar11 = zeros;
            puVar16 = head;
            if (puVar15[4] == 0) {
LAB_00100d5a:
              puVar11 = zeros;
              puVar16 = head;
              if ((*(char *)((long)puVar15 + 0x19) == '\0') &&
                 (puVar11 = puVar15, puVar16 = puVar15, head != (undefined8 *)0x0)) {
                zeros[5] = puVar15;
                puVar16 = head;
              }
            }
            head = puVar16;
            zeros = puVar11;
            puVar11 = zeros;
            puVar16 = head;
            if (lVar9 != 0) {
LAB_00102ef2:
              cVar6 = recurse_tree();
              puVar11 = zeros;
              puVar4 = zeros;
              puVar16 = head;
              puVar5 = head;
              if (cVar6 != '\0') goto LAB_00100a7e;
            }
          }
          head = puVar16;
          zeros = puVar11;
          puVar15 = (undefined8 *)puVar10[2];
          puVar11 = zeros;
          puVar16 = head;
          if (puVar10[4] == 0) {
LAB_00100d94:
            puVar11 = zeros;
            puVar16 = head;
            if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
               (puVar11 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
              zeros[5] = puVar10;
              puVar16 = head;
            }
          }
          head = puVar16;
          zeros = puVar11;
          puVar11 = zeros;
          puVar16 = head;
          if (puVar15 != (undefined8 *)0x0) {
LAB_00101559:
            if (puVar15[1] == 0) {
              lVar9 = puVar15[2];
              if (lVar9 != 0) {
                if (puVar15[4] == 0) goto LAB_00101585;
                goto LAB_00102584;
              }
              puVar11 = zeros;
              puVar16 = head;
              if (((puVar15[4] == 0) && (*(char *)((long)puVar15 + 0x19) == '\0')) &&
                 (puVar11 = puVar15, puVar16 = puVar15, head != (undefined8 *)0x0)) {
                zeros[5] = puVar15;
                puVar16 = head;
              }
            }
            else {
              cVar6 = recurse_tree();
              puVar4 = zeros;
              puVar5 = head;
              if (cVar6 != '\0') goto LAB_00100a7e;
              lVar9 = puVar15[2];
              puVar10 = zeros;
              puVar11 = head;
              if (puVar15[4] == 0) {
LAB_00101585:
                puVar10 = zeros;
                puVar11 = head;
                if ((*(char *)((long)puVar15 + 0x19) == '\0') &&
                   (puVar10 = puVar15, puVar11 = puVar15, head != (undefined8 *)0x0)) {
                  zeros[5] = puVar15;
                  puVar11 = head;
                }
              }
              head = puVar11;
              zeros = puVar10;
              puVar11 = zeros;
              puVar16 = head;
              if (lVar9 != 0) {
LAB_00102584:
                cVar6 = recurse_tree();
                puVar11 = zeros;
                puVar4 = zeros;
                puVar16 = head;
                puVar5 = head;
                if (cVar6 != '\0') goto LAB_00100a7e;
              }
            }
          }
        }
        head = puVar16;
        zeros = puVar11;
        puVar10 = (undefined8 *)unaff_R13[2];
        puVar15 = zeros;
        puVar11 = head;
        if (unaff_R13[4] == 0) {
LAB_0010168c:
          puVar15 = zeros;
          puVar11 = head;
          if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
             (puVar15 = unaff_R13, puVar11 = unaff_R13, head != (undefined8 *)0x0)) {
            zeros[5] = unaff_R13;
            puVar15 = unaff_R13;
            puVar11 = head;
          }
        }
        head = puVar11;
        zeros = puVar15;
        puVar15 = zeros;
        puVar11 = head;
        if (puVar10 == (undefined8 *)0x0) goto LAB_001015c8;
      }
      unaff_R13 = (undefined8 *)puVar10[1];
      if (unaff_R13 == (undefined8 *)0x0) {
        unaff_R13 = (undefined8 *)puVar10[2];
        if (unaff_R13 == (undefined8 *)0x0) {
          puVar15 = zeros;
          puVar11 = head;
          if (puVar10[4] != 0) goto LAB_001015c8;
          if (*(char *)((long)puVar10 + 0x19) != '\0') goto LAB_001015c8;
          puVar15 = puVar10;
          puVar11 = puVar10;
          if (head == (undefined8 *)0x0) goto LAB_001015c8;
          zeros[5] = puVar10;
          puVar11 = head;
          goto LAB_001015c8;
        }
        if (puVar10[4] == 0) goto LAB_00102c6b;
      }
      else {
        if (unaff_R13[1] == 0) {
          lVar9 = unaff_R13[2];
          if (lVar9 != 0) {
            if (unaff_R13[4] == 0) goto LAB_00101657;
            goto LAB_00102c4c;
          }
          puVar15 = zeros;
          puVar11 = head;
          if (((unaff_R13[4] == 0) && (*(char *)((long)unaff_R13 + 0x19) == '\0')) &&
             (puVar15 = unaff_R13, puVar11 = unaff_R13, head != (undefined8 *)0x0)) {
            zeros[5] = unaff_R13;
            puVar15 = unaff_R13;
            puVar11 = head;
          }
        }
        else {
          cVar6 = recurse_tree();
          puVar4 = zeros;
          puVar5 = head;
          if (cVar6 != '\0') goto LAB_00100a7e;
          lVar9 = unaff_R13[2];
          puVar15 = zeros;
          puVar11 = head;
          if (unaff_R13[4] == 0) {
LAB_00101657:
            puVar15 = zeros;
            puVar11 = head;
            if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
               (puVar15 = unaff_R13, puVar11 = unaff_R13, head != (undefined8 *)0x0)) {
              zeros[5] = unaff_R13;
              puVar15 = unaff_R13;
              puVar11 = head;
            }
          }
          head = puVar11;
          zeros = puVar15;
          puVar15 = zeros;
          puVar11 = head;
          if (lVar9 != 0) {
LAB_00102c4c:
            cVar6 = recurse_tree();
            puVar15 = zeros;
            puVar4 = zeros;
            puVar11 = head;
            puVar5 = head;
            if (cVar6 != '\0') goto LAB_00100a7e;
          }
        }
        head = puVar11;
        zeros = puVar15;
        unaff_R13 = (undefined8 *)puVar10[2];
        puVar15 = zeros;
        puVar11 = head;
        if (puVar10[4] == 0) {
LAB_00102c6b:
          puVar15 = zeros;
          puVar11 = head;
          if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
             (puVar15 = puVar10, puVar11 = puVar10, head != (undefined8 *)0x0)) {
            zeros[5] = puVar10;
            puVar11 = head;
          }
        }
        head = puVar11;
        zeros = puVar15;
        puVar15 = zeros;
        puVar11 = head;
        if (unaff_R13 == (undefined8 *)0x0) goto LAB_001015c8;
      }
      if (unaff_R13[1] == 0) {
        lVar17 = unaff_R13[2];
        lVar9 = unaff_R13[4];
        if (lVar17 == 0) {
LAB_00102e20:
          puVar15 = zeros;
          puVar11 = head;
          if (lVar9 != 0) goto LAB_001015c8;
          if (*(char *)((long)unaff_R13 + 0x19) != '\0') goto LAB_001015c8;
          puVar15 = unaff_R13;
          puVar11 = unaff_R13;
          if (head == (undefined8 *)0x0) goto LAB_001015c8;
          zeros[5] = unaff_R13;
          puVar15 = unaff_R13;
          puVar11 = head;
          goto LAB_001015c8;
        }
        if (lVar9 != 0) goto LAB_00102cee;
LAB_00102cc2:
        puVar10 = zeros;
        puVar15 = head;
        if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
           (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
          zeros[5] = unaff_R13;
          puVar10 = unaff_R13;
          puVar15 = head;
        }
      }
      else {
        cVar6 = recurse_tree();
        puVar4 = zeros;
        puVar5 = head;
        if (cVar6 != '\0') goto LAB_00100a7e;
        lVar17 = unaff_R13[2];
        puVar10 = zeros;
        puVar15 = head;
        if (unaff_R13[4] == 0) goto LAB_00102cc2;
      }
      head = puVar15;
      zeros = puVar10;
      puVar15 = zeros;
      puVar11 = head;
      if (lVar17 == 0) goto LAB_001015c8;
LAB_00102cee:
      cVar6 = recurse_tree();
      puVar15 = zeros;
      puVar4 = zeros;
      puVar11 = head;
      puVar5 = head;
      if (cVar6 == '\0') goto LAB_001015c8;
      goto LAB_00100a7e;
    }
    puVar11 = (undefined8 *)puVar8[2];
    if (puVar11 != (undefined8 *)0x0) {
      if (puVar8[4] == 0) goto LAB_00100a4f;
      goto LAB_00100b7a;
    }
    if (((puVar8[4] == 0) && (*(char *)((long)puVar8 + 0x19) == '\0')) &&
       (puVar10 = puVar8, puVar15 = puVar8, head != (undefined8 *)0x0)) {
      zeros[5] = puVar8;
      puVar15 = head;
    }
  }
  head = puVar15;
  zeros = puVar10;
  if (head != (undefined8 *)0x0) {
    do {
      do {
        puVar10 = (undefined8 *)head[6];
        puts((char *)*head);
        puVar15 = zeros;
        bVar2 = false;
        lVar9 = n_strings + -1;
        *(undefined1 *)((long)head + 0x19) = 1;
        n_strings = lVar9;
        if (puVar10 != (undefined8 *)0x0) {
          do {
            puVar11 = (undefined8 *)*puVar10;
            plVar1 = puVar11 + 4;
            *plVar1 = *plVar1 + -1;
            if (*plVar1 == 0) {
              puVar15[5] = puVar11;
              bVar2 = true;
              puVar15 = puVar11;
            }
            puVar10 = (undefined8 *)puVar10[1];
          } while (puVar10 != (undefined8 *)0x0);
          if (bVar2) {
            zeros = puVar15;
          }
        }
        head = (undefined8 *)head[5];
      } while (head != (undefined8 *)0x0);
      do {
        if (lVar9 != 0) goto LAB_00103088;
LAB_00100aa1:
        iVar7 = rpl_fclose(_stdin);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          exit((uint)(local_69 ^ 1));
        }
        if (local_70 == 0) {
          uVar14 = dcgettext(0,"standard input",5);
        }
        else {
LAB_00102e55:
          uVar14 = quotearg_n_style_colon(0,3,param_1);
        }
        piVar12 = __errno_location();
        error(1,*piVar12,&_LC0,uVar14);
        puVar15 = unaff_R13;
        puVar11 = unaff_R13;
LAB_001015c8:
        head = puVar11;
        zeros = puVar15;
        puVar11 = (undefined8 *)unaff_R15[2];
        puVar10 = zeros;
        puVar15 = head;
        if (unaff_R15[4] == 0) {
LAB_001015d3:
          puVar10 = zeros;
          puVar15 = head;
          if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
             (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
            zeros[5] = unaff_R15;
            puVar10 = unaff_R15;
            puVar15 = head;
          }
        }
        head = puVar15;
        zeros = puVar10;
        puVar10 = zeros;
        puVar15 = head;
        if (puVar11 == (undefined8 *)0x0) goto LAB_00100a44;
LAB_0010112d:
        unaff_R13 = (undefined8 *)puVar11[1];
        if (unaff_R13 == (undefined8 *)0x0) {
          unaff_R15 = (undefined8 *)puVar11[2];
          lVar9 = puVar11[4];
          if (unaff_R15 == (undefined8 *)0x0) {
LAB_0010180b:
            puVar10 = zeros;
            puVar15 = head;
            if (((lVar9 == 0) && (*(char *)((long)puVar11 + 0x19) == '\0')) &&
               (puVar10 = puVar11, puVar15 = puVar11, head != (undefined8 *)0x0)) {
              zeros[5] = puVar11;
              puVar15 = head;
            }
            goto LAB_00100a44;
          }
          if (lVar9 == 0) {
LAB_001020dd:
            puVar10 = zeros;
            puVar15 = head;
            if ((*(char *)((long)puVar11 + 0x19) == '\0') &&
               (puVar10 = puVar11, puVar15 = puVar11, head != (undefined8 *)0x0)) {
              zeros[5] = puVar11;
              puVar15 = head;
            }
            goto LAB_00102103;
          }
LAB_00101b60:
          puVar10 = (undefined8 *)unaff_R15[1];
          if (puVar10 == (undefined8 *)0x0) {
            lVar17 = unaff_R15[2];
            lVar9 = unaff_R15[4];
            if (lVar17 != 0) {
              if (lVar9 == 0) goto LAB_00101bd3;
              goto LAB_00101c03;
            }
LAB_00101f26:
            puVar10 = zeros;
            puVar15 = head;
            if (((lVar9 == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
               (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
              zeros[5] = unaff_R15;
              puVar10 = unaff_R15;
              puVar15 = head;
            }
          }
          else {
            if (puVar10[1] == 0) {
              lVar9 = puVar10[2];
              if (lVar9 == 0) {
                puVar15 = zeros;
                puVar11 = head;
                if (((puVar10[4] == 0) && (*(char *)((long)puVar10 + 0x19) == '\0')) &&
                   (puVar15 = puVar10, puVar11 = puVar10, head != (undefined8 *)0x0)) {
                  zeros[5] = puVar10;
                  puVar11 = head;
                }
              }
              else {
                if (puVar10[4] == 0) goto LAB_00101b99;
LAB_0010239d:
                cVar6 = recurse_tree();
                puVar4 = zeros;
                puVar15 = zeros;
                puVar5 = head;
                puVar11 = head;
                if (cVar6 != '\0') goto LAB_00100a7e;
              }
            }
            else {
              cVar6 = recurse_tree();
              puVar4 = zeros;
              puVar5 = head;
              if (cVar6 != '\0') goto LAB_00100a7e;
              lVar9 = puVar10[2];
              puVar15 = zeros;
              puVar11 = head;
              if (puVar10[4] == 0) {
LAB_00101b99:
                puVar15 = zeros;
                puVar11 = head;
                if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
                   (puVar15 = puVar10, puVar11 = puVar10, head != (undefined8 *)0x0)) {
                  zeros[5] = puVar10;
                  puVar11 = head;
                }
              }
              head = puVar11;
              zeros = puVar15;
              puVar15 = zeros;
              puVar11 = head;
              if (lVar9 != 0) goto LAB_0010239d;
            }
            head = puVar11;
            zeros = puVar15;
            lVar17 = unaff_R15[2];
            puVar10 = zeros;
            puVar15 = head;
            if (unaff_R15[4] == 0) {
LAB_00101bd3:
              puVar10 = zeros;
              puVar15 = head;
              if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                 (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                zeros[5] = unaff_R15;
                puVar10 = unaff_R15;
                puVar15 = head;
              }
            }
            head = puVar15;
            zeros = puVar10;
            puVar10 = zeros;
            puVar15 = head;
            if (lVar17 != 0) {
LAB_00101c03:
              cVar6 = recurse_tree();
              puVar4 = zeros;
              puVar10 = zeros;
              puVar5 = head;
              puVar15 = head;
              if (cVar6 != '\0') goto LAB_00100a7e;
            }
          }
LAB_00100a44:
          head = puVar15;
          zeros = puVar10;
          puVar11 = (undefined8 *)puVar8[2];
          puVar10 = zeros;
          puVar15 = head;
          if (puVar8[4] == 0) {
LAB_00100a4f:
            puVar10 = zeros;
            puVar15 = head;
            if ((*(char *)((long)puVar8 + 0x19) == '\0') &&
               (puVar10 = puVar8, puVar15 = puVar8, head != (undefined8 *)0x0)) {
              zeros[5] = puVar8;
              puVar15 = head;
            }
          }
          head = puVar15;
          zeros = puVar10;
          puVar4 = zeros;
          puVar5 = head;
          if (puVar11 != (undefined8 *)0x0) {
LAB_00100b7a:
            unaff_R13 = (undefined8 *)puVar11[1];
            if (unaff_R13 == (undefined8 *)0x0) {
              unaff_R15 = (undefined8 *)puVar11[2];
              lVar9 = puVar11[4];
              if (unaff_R15 != (undefined8 *)0x0) {
                if (lVar9 == 0) goto LAB_00100ee1;
                goto LAB_00100f10;
              }
LAB_00101ae4:
              puVar4 = zeros;
              puVar5 = head;
              if (((lVar9 == 0) && (*(char *)((long)puVar11 + 0x19) == '\0')) &&
                 (puVar4 = puVar11, puVar5 = puVar11, head != (undefined8 *)0x0)) {
                zeros[5] = puVar11;
                puVar5 = head;
              }
            }
            else {
              puVar10 = (undefined8 *)unaff_R13[1];
              if (puVar10 == (undefined8 *)0x0) {
                unaff_R15 = (undefined8 *)unaff_R13[2];
                lVar9 = unaff_R13[4];
                if (unaff_R15 != (undefined8 *)0x0) {
                  if (lVar9 == 0) goto LAB_001014fb;
                  goto LAB_00100fbe;
                }
LAB_00102135:
                puVar10 = zeros;
                puVar15 = head;
                if (((lVar9 == 0) && (*(char *)((long)unaff_R13 + 0x19) == '\0')) &&
                   (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
                  zeros[5] = unaff_R13;
                  puVar10 = unaff_R13;
                  puVar15 = head;
                }
              }
              else {
                puVar15 = (undefined8 *)puVar10[1];
                if (puVar15 == (undefined8 *)0x0) {
                  unaff_R15 = (undefined8 *)puVar10[2];
                  if (unaff_R15 != (undefined8 *)0x0) {
                    if (puVar10[4] == 0) goto LAB_0010191a;
                    goto LAB_0010185d;
                  }
                  puVar15 = zeros;
                  puVar16 = head;
                  if (((puVar10[4] == 0) && (*(char *)((long)puVar10 + 0x19) == '\0')) &&
                     (puVar15 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
                    zeros[5] = puVar10;
                    puVar16 = head;
                  }
                }
                else {
                  unaff_R15 = (undefined8 *)puVar15[1];
                  if (unaff_R15 == (undefined8 *)0x0) {
                    unaff_R15 = (undefined8 *)puVar15[2];
                    if (unaff_R15 != (undefined8 *)0x0) {
                      if (puVar15[4] == 0) goto LAB_00101da0;
                      goto LAB_0010147c;
                    }
                    puVar16 = zeros;
                    puVar3 = head;
                    if (((puVar15[4] == 0) && (*(char *)((long)puVar15 + 0x19) == '\0')) &&
                       (puVar16 = puVar15, puVar3 = puVar15, head != (undefined8 *)0x0)) {
                      zeros[5] = puVar15;
                      puVar3 = head;
                    }
                  }
                  else {
                    puVar16 = (undefined8 *)unaff_R15[1];
                    if (puVar16 == (undefined8 *)0x0) {
                      lVar9 = unaff_R15[2];
                      if (lVar9 != 0) {
                        if (unaff_R15[4] == 0) goto LAB_00100c36;
                        goto LAB_00101d77;
                      }
                      puVar16 = zeros;
                      puVar3 = head;
                      if (((unaff_R15[4] == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
                         (puVar16 = unaff_R15, puVar3 = unaff_R15, head != (undefined8 *)0x0)) {
                        zeros[5] = unaff_R15;
                        puVar16 = unaff_R15;
                        puVar3 = head;
                      }
                    }
                    else {
                      if (puVar16[1] == 0) {
                        lVar9 = puVar16[2];
                        if (lVar9 != 0) {
                          if (puVar16[4] == 0) goto LAB_00100bfb;
                          goto LAB_001034a3;
                        }
                        puVar3 = zeros;
                        puVar5 = head;
                        if (((puVar16[4] == 0) && (*(char *)((long)puVar16 + 0x19) == '\0')) &&
                           (puVar3 = puVar16, puVar5 = puVar16, head != (undefined8 *)0x0)) {
                          zeros[5] = puVar16;
                          puVar5 = head;
                        }
                      }
                      else {
                        cVar6 = recurse_tree();
                        puVar4 = zeros;
                        puVar5 = head;
                        if (cVar6 != '\0') goto LAB_00100a7e;
                        lVar9 = puVar16[2];
                        puVar3 = zeros;
                        if (puVar16[4] == 0) {
LAB_00100bfb:
                          puVar3 = zeros;
                          puVar5 = head;
                          if ((*(char *)((long)puVar16 + 0x19) == '\0') &&
                             (puVar3 = puVar16, puVar5 = puVar16, head != (undefined8 *)0x0)) {
                            zeros[5] = puVar16;
                            puVar5 = head;
                          }
                        }
                        head = puVar5;
                        zeros = puVar3;
                        puVar3 = zeros;
                        puVar5 = head;
                        if (lVar9 != 0) {
LAB_001034a3:
                          cVar6 = recurse_tree();
                          puVar3 = zeros;
                          puVar4 = zeros;
                          puVar5 = head;
                          if (cVar6 != '\0') goto LAB_00100a7e;
                        }
                      }
                      head = puVar5;
                      zeros = puVar3;
                      lVar9 = unaff_R15[2];
                      puVar16 = zeros;
                      puVar3 = head;
                      if (unaff_R15[4] == 0) {
LAB_00100c36:
                        puVar16 = zeros;
                        puVar3 = head;
                        if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                           (puVar16 = unaff_R15, puVar3 = unaff_R15, head != (undefined8 *)0x0)) {
                          zeros[5] = unaff_R15;
                          puVar16 = unaff_R15;
                          puVar3 = head;
                        }
                      }
                      head = puVar3;
                      zeros = puVar16;
                      puVar16 = zeros;
                      puVar3 = head;
                      if (lVar9 != 0) {
LAB_00101d77:
                        cVar6 = recurse_tree();
                        puVar4 = zeros;
                        puVar16 = zeros;
                        puVar3 = head;
                        puVar5 = head;
                        if (cVar6 != '\0') goto LAB_00100a7e;
                      }
                    }
                    head = puVar3;
                    zeros = puVar16;
                    unaff_R15 = (undefined8 *)puVar15[2];
                    puVar16 = zeros;
                    puVar3 = head;
                    if (puVar15[4] == 0) {
LAB_00101da0:
                      puVar16 = zeros;
                      puVar3 = head;
                      if ((*(char *)((long)puVar15 + 0x19) == '\0') &&
                         (puVar16 = puVar15, puVar3 = puVar15, head != (undefined8 *)0x0)) {
                        zeros[5] = puVar15;
                        puVar3 = head;
                      }
                    }
                    head = puVar3;
                    zeros = puVar16;
                    puVar16 = zeros;
                    puVar3 = head;
                    if (unaff_R15 != (undefined8 *)0x0) {
LAB_0010147c:
                      if (unaff_R15[1] == 0) {
                        lVar9 = unaff_R15[2];
                        if (lVar9 != 0) {
                          if (unaff_R15[4] == 0) goto LAB_001014a8;
                          goto LAB_001026a7;
                        }
                        puVar16 = zeros;
                        puVar3 = head;
                        if (((unaff_R15[4] == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
                           (puVar16 = unaff_R15, puVar3 = unaff_R15, head != (undefined8 *)0x0)) {
                          zeros[5] = unaff_R15;
                          puVar16 = unaff_R15;
                          puVar3 = head;
                        }
                      }
                      else {
                        cVar6 = recurse_tree();
                        puVar4 = zeros;
                        puVar5 = head;
                        if (cVar6 != '\0') goto LAB_00100a7e;
                        lVar9 = unaff_R15[2];
                        puVar15 = zeros;
                        puVar16 = head;
                        if (unaff_R15[4] == 0) {
LAB_001014a8:
                          puVar15 = zeros;
                          puVar16 = head;
                          if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                             (puVar15 = unaff_R15, puVar16 = unaff_R15, head != (undefined8 *)0x0))
                          {
                            zeros[5] = unaff_R15;
                            puVar15 = unaff_R15;
                            puVar16 = head;
                          }
                        }
                        head = puVar16;
                        zeros = puVar15;
                        puVar16 = zeros;
                        puVar3 = head;
                        if (lVar9 != 0) {
LAB_001026a7:
                          cVar6 = recurse_tree();
                          puVar4 = zeros;
                          puVar16 = zeros;
                          puVar3 = head;
                          puVar5 = head;
                          if (cVar6 != '\0') goto LAB_00100a7e;
                        }
                      }
                    }
                  }
                  head = puVar3;
                  zeros = puVar16;
                  unaff_R15 = (undefined8 *)puVar10[2];
                  puVar15 = zeros;
                  puVar16 = head;
                  if (puVar10[4] == 0) {
LAB_0010191a:
                    puVar15 = zeros;
                    puVar16 = head;
                    if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
                       (puVar15 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
                      zeros[5] = puVar10;
                      puVar16 = head;
                    }
                  }
                  head = puVar16;
                  zeros = puVar15;
                  puVar15 = zeros;
                  puVar16 = head;
                  if (unaff_R15 != (undefined8 *)0x0) {
LAB_0010185d:
                    puVar10 = (undefined8 *)unaff_R15[1];
                    if (puVar10 == (undefined8 *)0x0) {
                      lVar9 = unaff_R15[2];
                      if (lVar9 != 0) {
                        if (unaff_R15[4] == 0) goto LAB_001018d1;
                        goto LAB_00101901;
                      }
                      puVar15 = zeros;
                      puVar16 = head;
                      if (((unaff_R15[4] == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
                         (puVar15 = unaff_R15, puVar16 = unaff_R15, head != (undefined8 *)0x0)) {
                        zeros[5] = unaff_R15;
                        puVar15 = unaff_R15;
                        puVar16 = head;
                      }
                    }
                    else {
                      if (puVar10[1] == 0) {
                        lVar9 = puVar10[2];
                        if (lVar9 != 0) {
                          if (puVar10[4] == 0) goto LAB_00101896;
                          goto LAB_00102a65;
                        }
                        puVar15 = zeros;
                        puVar16 = head;
                        if (((puVar10[4] == 0) && (*(char *)((long)puVar10 + 0x19) == '\0')) &&
                           (puVar15 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
                          zeros[5] = puVar10;
                          puVar16 = head;
                        }
                      }
                      else {
                        cVar6 = recurse_tree();
                        puVar4 = zeros;
                        puVar5 = head;
                        if (cVar6 != '\0') goto LAB_00100a7e;
                        lVar9 = puVar10[2];
                        puVar15 = zeros;
                        puVar16 = head;
                        if (puVar10[4] == 0) {
LAB_00101896:
                          puVar15 = zeros;
                          puVar16 = head;
                          if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
                             (puVar15 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
                            zeros[5] = puVar10;
                            puVar16 = head;
                          }
                        }
                        head = puVar16;
                        zeros = puVar15;
                        puVar15 = zeros;
                        puVar16 = head;
                        if (lVar9 != 0) {
LAB_00102a65:
                          cVar6 = recurse_tree();
                          puVar4 = zeros;
                          puVar15 = zeros;
                          puVar16 = head;
                          puVar5 = head;
                          if (cVar6 != '\0') goto LAB_00100a7e;
                        }
                      }
                      head = puVar16;
                      zeros = puVar15;
                      lVar9 = unaff_R15[2];
                      puVar10 = zeros;
                      puVar15 = head;
                      if (unaff_R15[4] == 0) {
LAB_001018d1:
                        puVar10 = zeros;
                        puVar15 = head;
                        if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                           (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                          zeros[5] = unaff_R15;
                          puVar10 = unaff_R15;
                          puVar15 = head;
                        }
                      }
                      head = puVar15;
                      zeros = puVar10;
                      puVar15 = zeros;
                      puVar16 = head;
                      if (lVar9 != 0) {
LAB_00101901:
                        cVar6 = recurse_tree();
                        puVar4 = zeros;
                        puVar15 = zeros;
                        puVar5 = head;
                        puVar16 = head;
                        if (cVar6 != '\0') goto LAB_00100a7e;
                      }
                    }
                  }
                }
                head = puVar16;
                zeros = puVar15;
                unaff_R15 = (undefined8 *)unaff_R13[2];
                puVar10 = zeros;
                puVar15 = head;
                if (unaff_R13[4] == 0) {
LAB_001014fb:
                  puVar10 = zeros;
                  puVar15 = head;
                  if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
                     (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
                    zeros[5] = unaff_R13;
                    puVar10 = unaff_R13;
                    puVar15 = head;
                  }
                }
                head = puVar15;
                zeros = puVar10;
                puVar10 = zeros;
                puVar15 = head;
                if (unaff_R15 != (undefined8 *)0x0) {
LAB_00100fbe:
                  unaff_R13 = (undefined8 *)unaff_R15[1];
                  if (unaff_R13 == (undefined8 *)0x0) {
                    unaff_R13 = (undefined8 *)unaff_R15[2];
                    if (unaff_R13 != (undefined8 *)0x0) {
                      if (unaff_R15[4] == 0) goto LAB_00101d28;
                      goto LAB_00101a6f;
                    }
                    puVar10 = zeros;
                    puVar15 = head;
                    if (((unaff_R15[4] == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
                       (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                      zeros[5] = unaff_R15;
                      puVar10 = unaff_R15;
                      puVar15 = head;
                    }
                  }
                  else {
                    puVar10 = (undefined8 *)unaff_R13[1];
                    if (puVar10 == (undefined8 *)0x0) {
                      lVar9 = unaff_R13[2];
                      if (lVar9 != 0) {
                        if (unaff_R13[4] == 0) goto LAB_00101ced;
                        goto LAB_00103125;
                      }
                      puVar10 = zeros;
                      puVar15 = head;
                      if (((unaff_R13[4] == 0) && (*(char *)((long)unaff_R13 + 0x19) == '\0')) &&
                         (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
                        zeros[5] = unaff_R13;
                        puVar10 = unaff_R13;
                        puVar15 = head;
                      }
                    }
                    else {
                      if (puVar10[1] == 0) {
                        lVar9 = puVar10[2];
                        if (lVar9 != 0) {
                          if (puVar10[4] == 0) goto LAB_00101004;
                          goto LAB_00101cce;
                        }
                        puVar15 = zeros;
                        puVar16 = head;
                        if (((puVar10[4] == 0) && (*(char *)((long)puVar10 + 0x19) == '\0')) &&
                           (puVar15 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
                          zeros[5] = puVar10;
                          puVar16 = head;
                        }
                      }
                      else {
                        cVar6 = recurse_tree();
                        puVar4 = zeros;
                        puVar5 = head;
                        if (cVar6 != '\0') goto LAB_00100a7e;
                        lVar9 = puVar10[2];
                        puVar15 = zeros;
                        puVar16 = head;
                        if (puVar10[4] == 0) {
LAB_00101004:
                          puVar15 = zeros;
                          puVar16 = head;
                          if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
                             (puVar15 = puVar10, puVar16 = puVar10, head != (undefined8 *)0x0)) {
                            zeros[5] = puVar10;
                            puVar16 = head;
                          }
                        }
                        head = puVar16;
                        zeros = puVar15;
                        puVar15 = zeros;
                        puVar16 = head;
                        if (lVar9 != 0) {
LAB_00101cce:
                          cVar6 = recurse_tree();
                          puVar4 = zeros;
                          puVar15 = zeros;
                          puVar16 = head;
                          puVar5 = head;
                          if (cVar6 != '\0') goto LAB_00100a7e;
                        }
                      }
                      head = puVar16;
                      zeros = puVar15;
                      lVar9 = unaff_R13[2];
                      puVar10 = zeros;
                      puVar15 = head;
                      if (unaff_R13[4] == 0) {
LAB_00101ced:
                        puVar10 = zeros;
                        puVar15 = head;
                        if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
                           (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
                          zeros[5] = unaff_R13;
                          puVar10 = unaff_R13;
                          puVar15 = head;
                        }
                      }
                      head = puVar15;
                      zeros = puVar10;
                      puVar10 = zeros;
                      puVar15 = head;
                      if (lVar9 != 0) {
LAB_00103125:
                        cVar6 = recurse_tree();
                        puVar4 = zeros;
                        puVar10 = zeros;
                        puVar5 = head;
                        puVar15 = head;
                        if (cVar6 != '\0') goto LAB_00100a7e;
                      }
                    }
                    head = puVar15;
                    zeros = puVar10;
                    unaff_R13 = (undefined8 *)unaff_R15[2];
                    puVar10 = zeros;
                    puVar15 = head;
                    if (unaff_R15[4] == 0) {
LAB_00101d28:
                      puVar10 = zeros;
                      puVar15 = head;
                      if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                         (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                        zeros[5] = unaff_R15;
                        puVar10 = unaff_R15;
                        puVar15 = head;
                      }
                    }
                    head = puVar15;
                    zeros = puVar10;
                    puVar10 = zeros;
                    puVar15 = head;
                    if (unaff_R13 != (undefined8 *)0x0) {
LAB_00101a6f:
                      if (unaff_R13[1] == 0) {
                        lVar17 = unaff_R13[2];
                        lVar9 = unaff_R13[4];
                        if (lVar17 == 0) goto LAB_00102135;
                        if (lVar9 == 0) goto LAB_00101a9b;
                      }
                      else {
                        cVar6 = recurse_tree();
                        puVar4 = zeros;
                        puVar5 = head;
                        if (cVar6 != '\0') goto LAB_00100a7e;
                        lVar17 = unaff_R13[2];
                        puVar10 = zeros;
                        puVar15 = head;
                        if (unaff_R13[4] == 0) {
LAB_00101a9b:
                          puVar10 = zeros;
                          puVar15 = head;
                          if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
                             (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0))
                          {
                            zeros[5] = unaff_R13;
                            puVar10 = unaff_R13;
                            puVar15 = head;
                          }
                        }
                        head = puVar15;
                        zeros = puVar10;
                        puVar10 = zeros;
                        puVar15 = head;
                        if (lVar17 == 0) goto LAB_0010152b;
                      }
                      cVar6 = recurse_tree();
                      puVar4 = zeros;
                      puVar10 = zeros;
                      puVar5 = head;
                      puVar15 = head;
                      if (cVar6 != '\0') goto LAB_00100a7e;
                    }
                  }
                }
              }
LAB_0010152b:
              head = puVar15;
              zeros = puVar10;
              unaff_R15 = (undefined8 *)puVar11[2];
              puVar10 = zeros;
              puVar15 = head;
              if (puVar11[4] == 0) {
LAB_00100ee1:
                puVar10 = zeros;
                puVar15 = head;
                if ((*(char *)((long)puVar11 + 0x19) == '\0') &&
                   (puVar10 = puVar11, puVar15 = puVar11, head != (undefined8 *)0x0)) {
                  zeros[5] = puVar11;
                  puVar15 = head;
                }
              }
              head = puVar15;
              zeros = puVar10;
              puVar4 = zeros;
              puVar5 = head;
              if (unaff_R15 != (undefined8 *)0x0) {
LAB_00100f10:
                unaff_R13 = (undefined8 *)unaff_R15[1];
                if (unaff_R13 == (undefined8 *)0x0) {
                  puVar11 = (undefined8 *)unaff_R15[2];
                  lVar9 = unaff_R15[4];
                  if (puVar11 != (undefined8 *)0x0) {
                    if (lVar9 == 0) goto LAB_001012c2;
                    goto LAB_001012f2;
                  }
LAB_001023ce:
                  puVar4 = zeros;
                  puVar5 = head;
                  if (((lVar9 == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
                     (puVar4 = unaff_R15, puVar5 = unaff_R15, head != (undefined8 *)0x0)) {
                    zeros[5] = unaff_R15;
                    puVar4 = unaff_R15;
                    puVar5 = head;
                  }
                }
                else {
                  puVar10 = (undefined8 *)unaff_R13[1];
                  if (puVar10 == (undefined8 *)0x0) {
                    puVar10 = (undefined8 *)unaff_R13[2];
                    if (puVar10 != (undefined8 *)0x0) {
                      if (unaff_R13[4] == 0) goto LAB_00101ef1;
                      goto LAB_0010125c;
                    }
                    puVar15 = zeros;
                    puVar11 = head;
                    if (((unaff_R13[4] == 0) && (*(char *)((long)unaff_R13 + 0x19) == '\0')) &&
                       (puVar15 = unaff_R13, puVar11 = unaff_R13, head != (undefined8 *)0x0)) {
                      zeros[5] = unaff_R13;
                      puVar15 = unaff_R13;
                      puVar11 = head;
                    }
                  }
                  else {
                    puVar15 = (undefined8 *)puVar10[1];
                    if (puVar15 == (undefined8 *)0x0) {
                      lVar9 = puVar10[2];
                      if (lVar9 != 0) {
                        if (puVar10[4] == 0) goto LAB_00101eb7;
                        goto LAB_0010339a;
                      }
                      puVar15 = zeros;
                      puVar11 = head;
                      if (((puVar10[4] == 0) && (*(char *)((long)puVar10 + 0x19) == '\0')) &&
                         (puVar15 = puVar10, puVar11 = puVar10, head != (undefined8 *)0x0)) {
                        zeros[5] = puVar10;
                        puVar11 = head;
                      }
                    }
                    else {
                      if (puVar15[1] == 0) {
                        lVar9 = puVar15[2];
                        if (lVar9 != 0) {
                          if (puVar15[4] == 0) goto LAB_00100f63;
                          goto LAB_00101e98;
                        }
                        puVar11 = zeros;
                        puVar16 = head;
                        if (((puVar15[4] == 0) && (*(char *)((long)puVar15 + 0x19) == '\0')) &&
                           (puVar11 = puVar15, puVar16 = puVar15, head != (undefined8 *)0x0)) {
                          zeros[5] = puVar15;
                          puVar16 = head;
                        }
                      }
                      else {
                        cVar6 = recurse_tree();
                        puVar4 = zeros;
                        puVar5 = head;
                        if (cVar6 != '\0') goto LAB_00100a7e;
                        lVar9 = puVar15[2];
                        puVar11 = zeros;
                        puVar16 = head;
                        if (puVar15[4] == 0) {
LAB_00100f63:
                          puVar11 = zeros;
                          puVar16 = head;
                          if ((*(char *)((long)puVar15 + 0x19) == '\0') &&
                             (puVar11 = puVar15, puVar16 = puVar15, head != (undefined8 *)0x0)) {
                            zeros[5] = puVar15;
                            puVar16 = head;
                          }
                        }
                        head = puVar16;
                        zeros = puVar11;
                        puVar11 = zeros;
                        puVar16 = head;
                        if (lVar9 != 0) {
LAB_00101e98:
                          cVar6 = recurse_tree();
                          puVar4 = zeros;
                          puVar11 = zeros;
                          puVar16 = head;
                          puVar5 = head;
                          if (cVar6 != '\0') goto LAB_00100a7e;
                        }
                      }
                      head = puVar16;
                      zeros = puVar11;
                      lVar9 = puVar10[2];
                      puVar15 = zeros;
                      puVar11 = head;
                      if (puVar10[4] == 0) {
LAB_00101eb7:
                        puVar15 = zeros;
                        puVar11 = head;
                        if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
                           (puVar15 = puVar10, puVar11 = puVar10, head != (undefined8 *)0x0)) {
                          zeros[5] = puVar10;
                          puVar11 = head;
                        }
                      }
                      head = puVar11;
                      zeros = puVar15;
                      puVar15 = zeros;
                      puVar11 = head;
                      if (lVar9 != 0) {
LAB_0010339a:
                        cVar6 = recurse_tree();
                        puVar4 = zeros;
                        puVar15 = zeros;
                        puVar5 = head;
                        puVar11 = head;
                        if (cVar6 != '\0') goto LAB_00100a7e;
                      }
                    }
                    head = puVar11;
                    zeros = puVar15;
                    puVar10 = (undefined8 *)unaff_R13[2];
                    puVar15 = zeros;
                    puVar11 = head;
                    if (unaff_R13[4] == 0) {
LAB_00101ef1:
                      puVar15 = zeros;
                      puVar11 = head;
                      if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
                         (puVar15 = unaff_R13, puVar11 = unaff_R13, head != (undefined8 *)0x0)) {
                        zeros[5] = unaff_R13;
                        puVar15 = unaff_R13;
                        puVar11 = head;
                      }
                    }
                    head = puVar11;
                    zeros = puVar15;
                    puVar15 = zeros;
                    puVar11 = head;
                    if (puVar10 != (undefined8 *)0x0) {
LAB_0010125c:
                      if (puVar10[1] == 0) {
                        lVar9 = puVar10[2];
                        if (lVar9 != 0) {
                          if (puVar10[4] == 0) goto LAB_00101288;
                          goto LAB_00102505;
                        }
                        puVar15 = zeros;
                        puVar11 = head;
                        if (((puVar10[4] == 0) && (*(char *)((long)puVar10 + 0x19) == '\0')) &&
                           (puVar15 = puVar10, puVar11 = puVar10, head != (undefined8 *)0x0)) {
                          zeros[5] = puVar10;
                          puVar11 = head;
                        }
                      }
                      else {
                        cVar6 = recurse_tree();
                        puVar4 = zeros;
                        puVar5 = head;
                        if (cVar6 != '\0') goto LAB_00100a7e;
                        lVar9 = puVar10[2];
                        puVar15 = zeros;
                        puVar11 = head;
                        if (puVar10[4] == 0) {
LAB_00101288:
                          puVar15 = zeros;
                          puVar11 = head;
                          if ((*(char *)((long)puVar10 + 0x19) == '\0') &&
                             (puVar15 = puVar10, puVar11 = puVar10, head != (undefined8 *)0x0)) {
                            zeros[5] = puVar10;
                            puVar11 = head;
                          }
                        }
                        head = puVar11;
                        zeros = puVar15;
                        puVar15 = zeros;
                        puVar11 = head;
                        if (lVar9 != 0) {
LAB_00102505:
                          cVar6 = recurse_tree();
                          puVar4 = zeros;
                          puVar15 = zeros;
                          puVar5 = head;
                          puVar11 = head;
                          if (cVar6 != '\0') goto LAB_00100a7e;
                        }
                      }
                    }
                  }
                  head = puVar11;
                  zeros = puVar15;
                  puVar11 = (undefined8 *)unaff_R15[2];
                  puVar10 = zeros;
                  puVar15 = head;
                  if (unaff_R15[4] == 0) {
LAB_001012c2:
                    puVar10 = zeros;
                    puVar15 = head;
                    if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                       (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                      zeros[5] = unaff_R15;
                      puVar10 = unaff_R15;
                      puVar15 = head;
                    }
                  }
                  head = puVar15;
                  zeros = puVar10;
                  puVar4 = zeros;
                  puVar5 = head;
                  if (puVar11 != (undefined8 *)0x0) {
LAB_001012f2:
                    unaff_R15 = (undefined8 *)puVar11[1];
                    if (unaff_R15 == (undefined8 *)0x0) {
                      unaff_R15 = (undefined8 *)puVar11[2];
                      lVar9 = puVar11[4];
                      if (unaff_R15 == (undefined8 *)0x0) goto LAB_00101ae4;
                      if (lVar9 == 0) goto LAB_001013ae;
                    }
                    else {
                      unaff_R13 = (undefined8 *)unaff_R15[1];
                      if (unaff_R13 == (undefined8 *)0x0) {
                        lVar9 = unaff_R15[2];
                        if (lVar9 != 0) {
                          if (unaff_R15[4] == 0) goto LAB_00101373;
                          goto LAB_0010243e;
                        }
                        puVar10 = zeros;
                        puVar15 = head;
                        if (((unaff_R15[4] == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
                           (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                          zeros[5] = unaff_R15;
                          puVar10 = unaff_R15;
                          puVar15 = head;
                        }
                      }
                      else {
                        if (unaff_R13[1] == 0) {
                          lVar9 = unaff_R13[2];
                          if (lVar9 == 0) {
                            puVar10 = zeros;
                            puVar15 = head;
                            if (((unaff_R13[4] == 0) && (*(char *)((long)unaff_R13 + 0x19) == '\0'))
                               && (puVar10 = unaff_R13, puVar15 = unaff_R13,
                                  head != (undefined8 *)0x0)) {
                              zeros[5] = unaff_R13;
                              puVar10 = unaff_R13;
                              puVar15 = head;
                            }
                          }
                          else {
                            if (unaff_R13[4] == 0) goto LAB_00101338;
LAB_0010283c:
                            cVar6 = recurse_tree();
                            puVar4 = zeros;
                            puVar10 = zeros;
                            puVar15 = head;
                            puVar5 = head;
                            if (cVar6 != '\0') goto LAB_00100a7e;
                          }
                        }
                        else {
                          cVar6 = recurse_tree();
                          puVar4 = zeros;
                          puVar5 = head;
                          if (cVar6 != '\0') goto LAB_00100a7e;
                          lVar9 = unaff_R13[2];
                          puVar10 = zeros;
                          puVar15 = head;
                          if (unaff_R13[4] == 0) {
LAB_00101338:
                            puVar10 = zeros;
                            puVar15 = head;
                            if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
                               (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)
                               ) {
                              zeros[5] = unaff_R13;
                              puVar10 = unaff_R13;
                              puVar15 = head;
                            }
                          }
                          head = puVar15;
                          zeros = puVar10;
                          puVar10 = zeros;
                          puVar15 = head;
                          if (lVar9 != 0) goto LAB_0010283c;
                        }
                        head = puVar15;
                        zeros = puVar10;
                        lVar9 = unaff_R15[2];
                        puVar10 = zeros;
                        puVar15 = head;
                        if (unaff_R15[4] == 0) {
LAB_00101373:
                          puVar10 = zeros;
                          puVar15 = head;
                          if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                             (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0))
                          {
                            zeros[5] = unaff_R15;
                            puVar10 = unaff_R15;
                            puVar15 = head;
                          }
                        }
                        head = puVar15;
                        zeros = puVar10;
                        puVar10 = zeros;
                        puVar15 = head;
                        if (lVar9 != 0) {
LAB_0010243e:
                          cVar6 = recurse_tree();
                          puVar4 = zeros;
                          puVar10 = zeros;
                          puVar5 = head;
                          puVar15 = head;
                          if (cVar6 != '\0') goto LAB_00100a7e;
                        }
                      }
                      head = puVar15;
                      zeros = puVar10;
                      unaff_R15 = (undefined8 *)puVar11[2];
                      puVar10 = zeros;
                      puVar15 = head;
                      if (puVar11[4] == 0) {
LAB_001013ae:
                        puVar10 = zeros;
                        puVar15 = head;
                        if ((*(char *)((long)puVar11 + 0x19) == '\0') &&
                           (puVar10 = puVar11, puVar15 = puVar11, head != (undefined8 *)0x0)) {
                          zeros[5] = puVar11;
                          puVar15 = head;
                        }
                      }
                      head = puVar15;
                      zeros = puVar10;
                      puVar4 = zeros;
                      puVar5 = head;
                      if (unaff_R15 == (undefined8 *)0x0) goto LAB_00100a7e;
                    }
                    if (unaff_R15[1] == 0) {
                      lVar17 = unaff_R15[2];
                      lVar9 = unaff_R15[4];
                      if (lVar17 == 0) goto LAB_001023ce;
                      if (lVar9 == 0) goto LAB_00101409;
LAB_00101439:
                      recurse_tree();
                      puVar4 = zeros;
                      puVar5 = head;
                    }
                    else {
                      cVar6 = recurse_tree();
                      puVar4 = zeros;
                      puVar5 = head;
                      if (cVar6 == '\0') {
                        lVar17 = unaff_R15[2];
                        puVar10 = zeros;
                        puVar15 = head;
                        if (unaff_R15[4] == 0) {
LAB_00101409:
                          puVar10 = zeros;
                          puVar15 = head;
                          if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                             (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0))
                          {
                            zeros[5] = unaff_R15;
                            puVar10 = unaff_R15;
                            puVar15 = head;
                          }
                        }
                        head = puVar15;
                        zeros = puVar10;
                        puVar4 = zeros;
                        puVar5 = head;
                        if (lVar17 != 0) goto LAB_00101439;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          unaff_R15 = (undefined8 *)unaff_R13[1];
          if (unaff_R15 == (undefined8 *)0x0) {
            unaff_R15 = (undefined8 *)unaff_R13[2];
            if (unaff_R15 == (undefined8 *)0x0) {
              puVar10 = zeros;
              puVar15 = head;
              if (((unaff_R13[4] == 0) && (*(char *)((long)unaff_R13 + 0x19) == '\0')) &&
                 (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
                zeros[5] = unaff_R13;
                puVar10 = unaff_R13;
                puVar15 = head;
              }
            }
            else {
              if (unaff_R13[4] == 0) {
LAB_001011ae:
                puVar10 = zeros;
                puVar15 = head;
                if ((*(char *)((long)unaff_R13 + 0x19) == '\0') &&
                   (puVar10 = unaff_R13, puVar15 = unaff_R13, head != (undefined8 *)0x0)) {
                  zeros[5] = unaff_R13;
                  puVar10 = unaff_R13;
                  puVar15 = head;
                }
                goto LAB_001011d5;
              }
LAB_00102076:
              if (unaff_R15[1] == 0) {
                lVar9 = unaff_R15[2];
                if (lVar9 == 0) {
                  puVar10 = zeros;
                  puVar15 = head;
                  if (((unaff_R15[4] == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
                     (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                    zeros[5] = unaff_R15;
                    puVar10 = unaff_R15;
                    puVar15 = head;
                  }
                }
                else {
                  if (unaff_R15[4] == 0) goto LAB_001020a2;
LAB_00102f39:
                  cVar6 = recurse_tree();
                  puVar4 = zeros;
                  puVar10 = zeros;
                  puVar5 = head;
                  puVar15 = head;
                  if (cVar6 != '\0') goto LAB_00100a7e;
                }
              }
              else {
                cVar6 = recurse_tree();
                puVar4 = zeros;
                puVar5 = head;
                if (cVar6 != '\0') goto LAB_00100a7e;
                lVar9 = unaff_R15[2];
                puVar10 = zeros;
                puVar15 = head;
                if (unaff_R15[4] == 0) {
LAB_001020a2:
                  puVar10 = zeros;
                  puVar15 = head;
                  if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                     (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                    zeros[5] = unaff_R15;
                    puVar10 = unaff_R15;
                    puVar15 = head;
                  }
                }
                head = puVar15;
                zeros = puVar10;
                puVar10 = zeros;
                puVar15 = head;
                if (lVar9 != 0) goto LAB_00102f39;
              }
            }
LAB_001020d2:
            head = puVar15;
            zeros = puVar10;
            unaff_R15 = (undefined8 *)puVar11[2];
            puVar10 = zeros;
            puVar15 = head;
            if (puVar11[4] == 0) goto LAB_001020dd;
LAB_00102103:
            head = puVar15;
            zeros = puVar10;
            puVar10 = zeros;
            puVar15 = head;
            if (unaff_R15 == (undefined8 *)0x0) goto LAB_00100a44;
            goto LAB_00101b60;
          }
          if (unaff_R15[1] == 0) {
            lVar9 = unaff_R15[2];
            if (lVar9 == 0) {
              puVar10 = zeros;
              puVar15 = head;
              if (((unaff_R15[4] == 0) && (*(char *)((long)unaff_R15 + 0x19) == '\0')) &&
                 (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                zeros[5] = unaff_R15;
                puVar10 = unaff_R15;
                puVar15 = head;
              }
            }
            else {
              if (unaff_R15[4] == 0) {
LAB_00101173:
                puVar10 = zeros;
                puVar15 = head;
                if ((*(char *)((long)unaff_R15 + 0x19) == '\0') &&
                   (puVar10 = unaff_R15, puVar15 = unaff_R15, head != (undefined8 *)0x0)) {
                  zeros[5] = unaff_R15;
                  puVar10 = unaff_R15;
                  puVar15 = head;
                }
                goto LAB_0010119a;
              }
LAB_00103426:
              cVar6 = recurse_tree();
              puVar4 = zeros;
              puVar10 = zeros;
              puVar5 = head;
              puVar15 = head;
              if (cVar6 != '\0') goto LAB_00100a7e;
            }
LAB_001011a3:
            head = puVar15;
            zeros = puVar10;
            unaff_R15 = (undefined8 *)unaff_R13[2];
            puVar10 = zeros;
            puVar15 = head;
            if (unaff_R13[4] == 0) goto LAB_001011ae;
LAB_001011d5:
            head = puVar15;
            zeros = puVar10;
            puVar10 = zeros;
            puVar15 = head;
            if (unaff_R15 != (undefined8 *)0x0) goto LAB_00102076;
            goto LAB_001020d2;
          }
          cVar6 = recurse_tree();
          puVar4 = zeros;
          puVar5 = head;
          if (cVar6 == '\0') {
            lVar9 = unaff_R15[2];
            puVar10 = zeros;
            puVar15 = head;
            if (unaff_R15[4] == 0) goto LAB_00101173;
LAB_0010119a:
            head = puVar15;
            zeros = puVar10;
            puVar10 = zeros;
            puVar15 = head;
            if (lVar9 != 0) goto LAB_00103426;
            goto LAB_001011a3;
          }
        }
LAB_00100a7e:
        head = puVar5;
        zeros = puVar4;
        lVar9 = n_strings;
      } while (head == (undefined8 *)0x0);
    } while( true );
  }
  goto LAB_00103088;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void main(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar1 = proper_name_lite("Mark Kettenis","Mark Kettenis");
  parse_gnu_standard_options_only(param_1,param_2,"tsort","GNU coreutils",_Version,1,usage,uVar1,0);
  lVar2 = (long)_optind;
  if (param_1 - _optind < 2) {
    puVar4 = &_LC36;
    if (_optind != param_1) {
      puVar4 = (undefined *)param_2[lVar2];
    }
    lVar2 = tsort(puVar4);
  }
  uVar1 = quote(param_2[lVar2 + 1]);
  uVar3 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar3,uVar1);
                    /* WARNING: Subroutine does not return */
  usage(1);
}


