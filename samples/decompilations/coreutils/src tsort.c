
/* WARNING: Unknown calling convention */

_Bool count_items(item *unused)

{
  n_strings = n_strings + 1;
  return false;
}



/* WARNING: Unknown calling convention */

_Bool recurse_tree(item *root,_func__Bool_item_ptr *action)

{
  _Bool _Var1;
  
  while( true ) {
    if (root->left == (item *)0x0) {
      if (root->right == (item *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        _Var1 = (*action)(root);
        return _Var1;
      }
    }
    else {
      _Var1 = recurse_tree(root->left,action);
      if (_Var1) {
        return true;
      }
    }
    _Var1 = (*action)(root);
    if (_Var1) break;
    root = root->right;
    if (root == (item *)0x0) {
      return false;
    }
  }
  return true;
}



/* WARNING: Unknown calling convention */

_Bool detect_loop(item *k)

{
  successor **ppsVar1;
  item **ppiVar2;
  size_t *psVar3;
  successor *psVar4;
  char **ppcVar5;
  item *piVar6;
  
  if (k->count == 0) {
    return false;
  }
  piVar6 = k;
  if (loop != (item *)0x0) {
    ppsVar1 = &k->top;
    for (psVar4 = k->top; piVar6 = loop, psVar4 != (successor *)0x0; psVar4 = psVar4->next) {
      if (loop == psVar4->suc) {
        if (k->qlink == (item *)0x0) {
          k->qlink = loop;
          loop = k;
          return false;
        }
        do {
          ppcVar5 = &piVar6->str;
          piVar6 = piVar6->qlink;
          error(0,0,&_LC0,*ppcVar5);
          if (loop == k) {
            psVar4 = (*ppsVar1)->next;
            psVar3 = &(*ppsVar1)->suc->count;
            *psVar3 = *psVar3 - 1;
            *ppsVar1 = psVar4;
            do {
              piVar6 = k->qlink;
              k->qlink = (item *)0x0;
              k = piVar6;
            } while (piVar6 != (item *)0x0);
            loop = (item *)0x0;
            return true;
          }
          ppiVar2 = &loop->qlink;
          loop = piVar6;
          *ppiVar2 = (item *)0x0;
        } while (piVar6 != (item *)0x0);
        return true;
      }
      ppsVar1 = &psVar4->next;
    }
  }
  loop = piVar6;
  return false;
}



/* WARNING: Unknown calling convention */

_Bool scan_zeros(item *k)

{
  item *piVar1;
  item *piVar2;
  
  piVar1 = zeros;
  piVar2 = head;
  if (((k->count == 0) && (k->printed == false)) && (piVar1 = k, piVar2 = k, head != (item *)0x0)) {
    zeros->qlink = k;
    piVar1 = k;
    piVar2 = head;
  }
  head = piVar2;
  zeros = piVar1;
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
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
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[2].program = "sha224sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].program = "sha256sum";
  infomap[3].node = "sha2 utilities";
  infomap[4].program = "sha384sum";
  infomap[4].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  do {
    iVar2 = strcmp("tsort",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Unknown calling convention */

item * search_item(item *root,char *str)

{
  char cVar1;
  int iVar2;
  item *piVar3;
  item *piVar4;
  item *piVar5;
  item *piVar6;
  char *pcVar7;
  item *piVar8;
  int local_3c;
  
  piVar3 = root->right;
  piVar8 = piVar3;
  if (piVar3 == (item *)0x0) {
    piVar6 = (item *)xzalloc(0x38);
    if (str != (char *)0x0) {
      pcVar7 = (char *)xstrdup(str);
      piVar6->str = pcVar7;
    }
    root->right = piVar6;
  }
  else {
    while( true ) {
      piVar6 = piVar3;
      iVar2 = strcmp(str,piVar6->str);
      if (iVar2 == 0) break;
      piVar3 = piVar6->right;
      if (iVar2 < 0) {
        piVar3 = piVar6->left;
      }
      if (piVar3 == (item *)0x0) {
        piVar3 = (item *)xzalloc(0x38);
        pcVar7 = (char *)xstrdup(str);
        piVar3->str = pcVar7;
        if (iVar2 < 0) {
          piVar6->left = piVar3;
        }
        else {
          piVar6->right = piVar3;
        }
        iVar2 = strcmp(str,piVar8->str);
        if (iVar2 < 0) {
          local_3c = -1;
          piVar6 = piVar8->left;
          piVar5 = piVar6;
        }
        else {
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("0 < a","src/tsort.c",0xa6,"search_item");
          }
          local_3c = 1;
          piVar6 = piVar8->right;
          piVar5 = piVar6;
        }
        while (piVar6 != piVar3) {
          iVar2 = strcmp(str,piVar6->str);
          if (iVar2 < 0) {
            piVar6->balance = -1;
            piVar6 = piVar6->left;
          }
          else {
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("0 < cmp","src/tsort.c",0xb5,"search_item");
            }
            piVar6->balance = '\x01';
            piVar6 = piVar6->right;
          }
        }
        cVar1 = piVar8->balance;
        if ((cVar1 != '\0') && ((int)cVar1 != -local_3c)) {
          if (piVar5->balance == local_3c) {
            if (local_3c == -1) {
              piVar8->left = piVar5->right;
              piVar5->right = piVar8;
            }
            else {
              piVar8->right = piVar5->left;
              piVar5->left = piVar8;
            }
            piVar5->balance = '\0';
            piVar8->balance = '\0';
          }
          else {
            piVar6 = piVar5->left;
            piVar4 = piVar5->right;
            if (local_3c == -1) {
              piVar5->right = piVar4->left;
              piVar4->left = piVar5;
              piVar8->left = piVar4->right;
              piVar4->right = piVar8;
            }
            else {
              piVar5->left = piVar6->right;
              piVar6->right = piVar5;
              piVar8->right = piVar6->left;
              piVar6->left = piVar8;
              piVar4 = piVar6;
            }
            piVar8->balance = '\0';
            piVar5->balance = '\0';
            if (piVar4->balance == local_3c) {
              piVar8->balance = -(char)local_3c;
            }
            else if (-local_3c == (int)piVar4->balance) {
              piVar5->balance = (char)local_3c;
            }
            piVar4->balance = '\0';
            piVar5 = piVar4;
          }
          if (root->right != piVar8) {
            root->left = piVar5;
            return piVar3;
          }
          root->right = piVar5;
          return piVar3;
        }
        piVar8->balance = cVar1 + (char)local_3c;
        return piVar3;
      }
      if (piVar3->balance != '\0') {
        root = piVar6;
        piVar8 = piVar3;
      }
    }
  }
  return piVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void tsort(char *file)

{
  size_t *psVar1;
  bool bVar2;
  item *piVar3;
  item *piVar4;
  _Bool _Var5;
  int iVar6;
  item *root;
  long lVar7;
  item *piVar8;
  successor *psVar9;
  size_t sVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  item *piVar14;
  item *piVar15;
  successor *psVar16;
  item *piVar17;
  item *piVar18;
  item *unaff_R13;
  item *unaff_R15;
  uint local_70;
  byte local_69;
  token_buffer tokenbuffer;
  
  local_70 = (byte)*file - 0x2d;
  if (local_70 == 0) {
    local_70 = (uint)(byte)file[1];
  }
  root = (item *)xzalloc(0x38);
  if ((local_70 != 0) && (lVar7 = freopen_safer(file,&_LC29,_stdin), lVar7 == 0)) goto LAB_00102e55;
  unaff_R13 = (item *)&tokenbuffer;
  unaff_R15 = (item *)&_LC30;
  fadvise(_stdin,2);
  init_tokenbuffer(unaff_R13);
  do {
    piVar8 = (item *)0x0;
    do {
      piVar14 = piVar8;
      lVar7 = readtoken(_stdin,&_LC30,3,unaff_R13);
      if (lVar7 == -1) {
        if ((*_stdin & 0x20) == 0) {
          if (piVar14 == (item *)0x0) {
            root = root->right;
            if (root != (item *)0x0) {
              recurse_tree(root,count_items);
            }
            local_69 = 1;
            goto LAB_001008e0;
          }
        }
        else {
          root = (item *)quotearg_n_style_colon(0,3,file);
          uVar13 = dcgettext(0,"%s: read error",5);
          piVar11 = __errno_location();
          error(1,*piVar11,uVar13,root);
        }
        uVar13 = quotearg_n_style_colon(0,3,file);
        uVar12 = dcgettext(0,"%s: input contains an odd number of tokens",5);
        error(1,0,uVar12,uVar13);
        goto LAB_00103088;
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("len != 0","src/tsort.c",0x1ca,"tsort");
      }
      piVar8 = search_item(root,tokenbuffer.buffer);
    } while (piVar14 == (item *)0x0);
    iVar6 = strcmp(piVar14->str,piVar8->str);
    if (iVar6 != 0) {
      piVar8->count = piVar8->count + 1;
      psVar9 = (successor *)xmalloc(0x10);
      psVar16 = piVar14->top;
      psVar9->suc = piVar8;
      psVar9->next = psVar16;
      piVar14->top = psVar9;
    }
  } while( true );
LAB_00103088:
  uVar13 = quotearg_n_style_colon(0,3,file);
  uVar12 = dcgettext(0,"%s: input contains a loop:",5);
  error(0,0,uVar12,uVar13);
  do {
    if (root != (item *)0x0) {
      recurse_tree(root,detect_loop);
    }
    local_69 = 0;
  } while (loop != (item *)0x0);
LAB_001008e0:
  if (n_strings == 0) goto LAB_00100aa1;
  piVar8 = zeros;
  piVar14 = head;
  if (root != (item *)0x0) {
    piVar17 = root->left;
    if (piVar17 != (item *)0x0) {
      unaff_R15 = piVar17->left;
      if (unaff_R15 == (item *)0x0) {
        unaff_R15 = piVar17->right;
        sVar10 = piVar17->count;
        if (unaff_R15 == (item *)0x0) goto LAB_0010180b;
        if (sVar10 == 0) goto LAB_00100c86;
      }
      else {
        unaff_R13 = unaff_R15->left;
        if (unaff_R13 == (item *)0x0) {
          unaff_R13 = unaff_R15->right;
          sVar10 = unaff_R15->count;
          if (unaff_R13 != (item *)0x0) {
            if (sVar10 == 0) goto LAB_001009fc;
            goto LAB_00100e39;
          }
LAB_00101b1e:
          piVar8 = zeros;
          piVar14 = head;
          if (((sVar10 == 0) && (unaff_R15->printed == false)) &&
             (piVar8 = unaff_R15, piVar14 = unaff_R15, head != (item *)0x0)) {
            zeros->qlink = unaff_R15;
            piVar8 = unaff_R15;
            piVar14 = head;
          }
        }
        else {
          piVar8 = unaff_R13->left;
          if (piVar8 == (item *)0x0) {
            piVar8 = unaff_R13->right;
            sVar10 = unaff_R13->count;
            if (piVar8 != (item *)0x0) {
              if (sVar10 == 0) goto LAB_001009c1;
              goto LAB_00101053;
            }
LAB_0010216e:
            piVar14 = zeros;
            piVar15 = head;
            if (((sVar10 == 0) && (unaff_R13->printed == false)) &&
               (piVar14 = unaff_R13, piVar15 = unaff_R13, head != (item *)0x0)) {
              zeros->qlink = unaff_R13;
              piVar14 = unaff_R13;
              piVar15 = head;
            }
          }
          else {
            piVar14 = piVar8->left;
            if (piVar14 == (item *)0x0) {
              piVar14 = piVar8->right;
              if (piVar14 != (item *)0x0) {
                if (piVar8->count == 0) goto LAB_00100986;
                goto LAB_0010198f;
              }
              piVar15 = zeros;
              piVar18 = head;
              if (((piVar8->count == 0) && (piVar8->printed == false)) &&
                 (piVar15 = piVar8, piVar18 = piVar8, head != (item *)0x0)) {
                zeros->qlink = piVar8;
                piVar18 = head;
              }
            }
            else {
              if (piVar14->left == (item *)0x0) {
                piVar15 = piVar14->right;
                if (piVar15 != (item *)0x0) {
                  if (piVar14->count == 0) goto LAB_00101212;
                  goto LAB_00101c36;
                }
                piVar18 = zeros;
                piVar4 = head;
                if (((piVar14->count == 0) && (piVar14->printed == false)) &&
                   (piVar18 = piVar14, piVar4 = piVar14, head != (item *)0x0)) {
                  zeros->qlink = piVar14;
                  piVar4 = head;
                }
              }
              else {
                _Var5 = recurse_tree(piVar14->left,scan_zeros);
                piVar3 = zeros;
                piVar4 = head;
                if (_Var5) goto LAB_00100a7e;
                piVar15 = piVar14->right;
                piVar18 = zeros;
                if (piVar14->count == 0) {
LAB_00101212:
                  piVar18 = zeros;
                  piVar4 = head;
                  if ((piVar14->printed == false) &&
                     (piVar18 = piVar14, piVar4 = piVar14, head != (item *)0x0)) {
                    zeros->qlink = piVar14;
                    piVar4 = head;
                  }
                }
                head = piVar4;
                zeros = piVar18;
                piVar18 = zeros;
                piVar4 = head;
                if (piVar15 != (item *)0x0) {
LAB_00101c36:
                  if (piVar15->left == (item *)0x0) {
                    piVar14 = piVar15->right;
                    if (piVar14 != (item *)0x0) {
                      if (piVar15->count == 0) goto LAB_00101c6c;
                      goto LAB_00101c9b;
                    }
                    piVar18 = zeros;
                    piVar4 = head;
                    if (((piVar15->count == 0) && (piVar15->printed == false)) &&
                       (piVar18 = piVar15, piVar4 = piVar15, head != (item *)0x0)) {
                      zeros->qlink = piVar15;
                      piVar4 = head;
                    }
                  }
                  else {
                    _Var5 = recurse_tree(piVar15->left,scan_zeros);
                    piVar3 = zeros;
                    piVar4 = head;
                    if (_Var5) goto LAB_00100a7e;
                    piVar14 = piVar15->right;
                    piVar18 = zeros;
                    if (piVar15->count == 0) {
LAB_00101c6c:
                      piVar18 = zeros;
                      piVar4 = head;
                      if ((piVar15->printed == false) &&
                         (piVar18 = piVar15, piVar4 = piVar15, head != (item *)0x0)) {
                        zeros->qlink = piVar15;
                        piVar4 = head;
                      }
                    }
                    head = piVar4;
                    zeros = piVar18;
                    piVar18 = zeros;
                    piVar4 = head;
                    if (piVar14 != (item *)0x0) {
LAB_00101c9b:
                      _Var5 = recurse_tree(piVar14,scan_zeros);
                      piVar18 = zeros;
                      piVar3 = zeros;
                      piVar4 = head;
                      if (_Var5) goto LAB_00100a7e;
                    }
                  }
                }
              }
              head = piVar4;
              zeros = piVar18;
              piVar14 = piVar8->right;
              piVar15 = zeros;
              piVar18 = head;
              if (piVar8->count == 0) {
LAB_00100986:
                piVar15 = zeros;
                piVar18 = head;
                if ((piVar8->printed == false) &&
                   (piVar15 = piVar8, piVar18 = piVar8, head != (item *)0x0)) {
                  zeros->qlink = piVar8;
                  piVar18 = head;
                }
              }
              head = piVar18;
              zeros = piVar15;
              piVar15 = zeros;
              piVar18 = head;
              if (piVar14 != (item *)0x0) {
LAB_0010198f:
                piVar8 = piVar14->left;
                if (piVar8 == (item *)0x0) {
                  piVar8 = piVar14->right;
                  if (piVar8 != (item *)0x0) {
                    if (piVar14->count == 0) goto LAB_00101a0d;
                    goto LAB_00101a3c;
                  }
                  piVar15 = zeros;
                  piVar18 = head;
                  if (((piVar14->count == 0) && (piVar14->printed == false)) &&
                     (piVar15 = piVar14, piVar18 = piVar14, head != (item *)0x0)) {
                    zeros->qlink = piVar14;
                    piVar18 = head;
                  }
                }
                else {
                  if (piVar8->left == (item *)0x0) {
                    piVar15 = piVar8->right;
                    if (piVar15 != (item *)0x0) {
                      if (piVar8->count == 0) goto LAB_001019d2;
                      goto LAB_00102301;
                    }
                    piVar18 = zeros;
                    piVar4 = head;
                    if (((piVar8->count == 0) && (piVar8->printed == false)) &&
                       (piVar18 = piVar8, piVar4 = piVar8, head != (item *)0x0)) {
                      zeros->qlink = piVar8;
                      piVar4 = head;
                    }
                  }
                  else {
                    _Var5 = recurse_tree(piVar8->left,scan_zeros);
                    piVar3 = zeros;
                    piVar4 = head;
                    if (_Var5) goto LAB_00100a7e;
                    piVar15 = piVar8->right;
                    piVar18 = zeros;
                    if (piVar8->count == 0) {
LAB_001019d2:
                      piVar18 = zeros;
                      piVar4 = head;
                      if ((piVar8->printed == false) &&
                         (piVar18 = piVar8, piVar4 = piVar8, head != (item *)0x0)) {
                        zeros->qlink = piVar8;
                        piVar4 = head;
                      }
                    }
                    head = piVar4;
                    zeros = piVar18;
                    piVar18 = zeros;
                    piVar4 = head;
                    if (piVar15 != (item *)0x0) {
LAB_00102301:
                      _Var5 = recurse_tree(piVar15,scan_zeros);
                      piVar18 = zeros;
                      piVar3 = zeros;
                      piVar4 = head;
                      if (_Var5) goto LAB_00100a7e;
                    }
                  }
                  head = piVar4;
                  zeros = piVar18;
                  piVar8 = piVar14->right;
                  piVar15 = zeros;
                  piVar18 = head;
                  if (piVar14->count == 0) {
LAB_00101a0d:
                    piVar15 = zeros;
                    piVar18 = head;
                    if ((piVar14->printed == false) &&
                       (piVar15 = piVar14, piVar18 = piVar14, head != (item *)0x0)) {
                      zeros->qlink = piVar14;
                      piVar18 = head;
                    }
                  }
                  head = piVar18;
                  zeros = piVar15;
                  piVar15 = zeros;
                  piVar18 = head;
                  if (piVar8 != (item *)0x0) {
LAB_00101a3c:
                    _Var5 = recurse_tree(piVar8,scan_zeros);
                    piVar15 = zeros;
                    piVar3 = zeros;
                    piVar18 = head;
                    piVar4 = head;
                    if (_Var5) goto LAB_00100a7e;
                  }
                }
              }
            }
            head = piVar18;
            zeros = piVar15;
            piVar8 = unaff_R13->right;
            piVar14 = zeros;
            piVar15 = head;
            if (unaff_R13->count == 0) {
LAB_001009c1:
              piVar14 = zeros;
              piVar15 = head;
              if ((unaff_R13->printed == false) &&
                 (piVar14 = unaff_R13, piVar15 = unaff_R13, head != (item *)0x0)) {
                zeros->qlink = unaff_R13;
                piVar14 = unaff_R13;
                piVar15 = head;
              }
            }
            head = piVar15;
            zeros = piVar14;
            piVar14 = zeros;
            piVar15 = head;
            if (piVar8 != (item *)0x0) {
LAB_00101053:
              unaff_R13 = piVar8->left;
              if (unaff_R13 == (item *)0x0) {
                unaff_R13 = piVar8->right;
                if (unaff_R13 != (item *)0x0) {
                  if (piVar8->count == 0) goto LAB_00102027;
                  goto LAB_00101f79;
                }
                piVar14 = zeros;
                piVar15 = head;
                if (((piVar8->count == 0) && (piVar8->printed == false)) &&
                   (piVar14 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
                  zeros->qlink = piVar8;
                  piVar15 = head;
                }
              }
              else {
                piVar14 = unaff_R13->left;
                if (piVar14 == (item *)0x0) {
                  piVar14 = unaff_R13->right;
                  if (piVar14 != (item *)0x0) {
                    if (unaff_R13->count == 0) goto LAB_001010de;
                    goto LAB_00102008;
                  }
                  piVar15 = zeros;
                  piVar18 = head;
                  if (((unaff_R13->count == 0) && (unaff_R13->printed == false)) &&
                     (piVar15 = unaff_R13, piVar18 = unaff_R13, head != (item *)0x0)) {
                    zeros->qlink = unaff_R13;
                    piVar15 = unaff_R13;
                    piVar18 = head;
                  }
                }
                else {
                  if (piVar14->left == (item *)0x0) {
                    piVar15 = piVar14->right;
                    if (piVar15 != (item *)0x0) {
                      if (piVar14->count == 0) goto LAB_001010a3;
                      goto LAB_0010324a;
                    }
                    piVar18 = zeros;
                    piVar4 = head;
                    if (((piVar14->count == 0) && (piVar14->printed == false)) &&
                       (piVar18 = piVar14, piVar4 = piVar14, head != (item *)0x0)) {
                      zeros->qlink = piVar14;
                      piVar4 = head;
                    }
                  }
                  else {
                    _Var5 = recurse_tree(piVar14->left,scan_zeros);
                    piVar3 = zeros;
                    piVar4 = head;
                    if (_Var5) goto LAB_00100a7e;
                    piVar15 = piVar14->right;
                    piVar18 = zeros;
                    if (piVar14->count == 0) {
LAB_001010a3:
                      piVar18 = zeros;
                      piVar4 = head;
                      if ((piVar14->printed == false) &&
                         (piVar18 = piVar14, piVar4 = piVar14, head != (item *)0x0)) {
                        zeros->qlink = piVar14;
                        piVar4 = head;
                      }
                    }
                    head = piVar4;
                    zeros = piVar18;
                    piVar18 = zeros;
                    piVar4 = head;
                    if (piVar15 != (item *)0x0) {
LAB_0010324a:
                      _Var5 = recurse_tree(piVar15,scan_zeros);
                      piVar18 = zeros;
                      piVar3 = zeros;
                      piVar4 = head;
                      if (_Var5) goto LAB_00100a7e;
                    }
                  }
                  head = piVar4;
                  zeros = piVar18;
                  piVar14 = unaff_R13->right;
                  piVar15 = zeros;
                  piVar18 = head;
                  if (unaff_R13->count == 0) {
LAB_001010de:
                    piVar15 = zeros;
                    piVar18 = head;
                    if ((unaff_R13->printed == false) &&
                       (piVar15 = unaff_R13, piVar18 = unaff_R13, head != (item *)0x0)) {
                      zeros->qlink = unaff_R13;
                      piVar15 = unaff_R13;
                      piVar18 = head;
                    }
                  }
                  head = piVar18;
                  zeros = piVar15;
                  piVar15 = zeros;
                  piVar18 = head;
                  if (piVar14 != (item *)0x0) {
LAB_00102008:
                    _Var5 = recurse_tree(piVar14,scan_zeros);
                    piVar15 = zeros;
                    piVar3 = zeros;
                    piVar18 = head;
                    piVar4 = head;
                    if (_Var5) goto LAB_00100a7e;
                  }
                }
                head = piVar18;
                zeros = piVar15;
                unaff_R13 = piVar8->right;
                piVar14 = zeros;
                piVar15 = head;
                if (piVar8->count == 0) {
LAB_00102027:
                  piVar14 = zeros;
                  piVar15 = head;
                  if ((piVar8->printed == false) &&
                     (piVar14 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
                    zeros->qlink = piVar8;
                    piVar15 = head;
                  }
                }
                head = piVar15;
                zeros = piVar14;
                piVar14 = zeros;
                piVar15 = head;
                if (unaff_R13 != (item *)0x0) {
LAB_00101f79:
                  if (unaff_R13->left == (item *)0x0) {
                    piVar8 = unaff_R13->right;
                    sVar10 = unaff_R13->count;
                    if (piVar8 == (item *)0x0) goto LAB_0010216e;
                    if (sVar10 == 0) goto LAB_00101fa5;
                  }
                  else {
                    _Var5 = recurse_tree(unaff_R13->left,scan_zeros);
                    piVar3 = zeros;
                    piVar4 = head;
                    if (_Var5) goto LAB_00100a7e;
                    piVar8 = unaff_R13->right;
                    piVar14 = zeros;
                    piVar15 = head;
                    if (unaff_R13->count == 0) {
LAB_00101fa5:
                      piVar14 = zeros;
                      piVar15 = head;
                      if ((unaff_R13->printed == false) &&
                         (piVar14 = unaff_R13, piVar15 = unaff_R13, head != (item *)0x0)) {
                        zeros->qlink = unaff_R13;
                        piVar14 = unaff_R13;
                        piVar15 = head;
                      }
                    }
                    head = piVar15;
                    zeros = piVar14;
                    piVar14 = zeros;
                    piVar15 = head;
                    if (piVar8 == (item *)0x0) goto LAB_001009f1;
                  }
                  _Var5 = recurse_tree(piVar8,scan_zeros);
                  piVar14 = zeros;
                  piVar3 = zeros;
                  piVar15 = head;
                  piVar4 = head;
                  if (_Var5) goto LAB_00100a7e;
                }
              }
            }
          }
LAB_001009f1:
          head = piVar15;
          zeros = piVar14;
          unaff_R13 = unaff_R15->right;
          piVar8 = zeros;
          piVar14 = head;
          if (unaff_R15->count == 0) {
LAB_001009fc:
            piVar8 = zeros;
            piVar14 = head;
            if ((unaff_R15->printed == false) &&
               (piVar8 = unaff_R15, piVar14 = unaff_R15, head != (item *)0x0)) {
              zeros->qlink = unaff_R15;
              piVar8 = unaff_R15;
              piVar14 = head;
            }
          }
          head = piVar14;
          zeros = piVar8;
          piVar8 = zeros;
          piVar14 = head;
          if (unaff_R13 != (item *)0x0) {
LAB_00100e39:
            piVar8 = unaff_R13->left;
            if (piVar8 == (item *)0x0) {
              unaff_R15 = unaff_R13->right;
              if (unaff_R15 != (item *)0x0) {
                if (unaff_R13->count == 0) goto LAB_001017c5;
                goto LAB_001016d6;
              }
              piVar8 = zeros;
              piVar14 = head;
              if (((unaff_R13->count == 0) && (unaff_R13->printed == false)) &&
                 (piVar8 = unaff_R13, piVar14 = unaff_R13, head != (item *)0x0)) {
                zeros->qlink = unaff_R13;
                piVar8 = unaff_R13;
                piVar14 = head;
              }
            }
            else {
              unaff_R15 = piVar8->left;
              if (unaff_R15 == (item *)0x0) {
                unaff_R15 = piVar8->right;
                if (unaff_R15 != (item *)0x0) {
                  if (piVar8->count == 0) goto LAB_00101e49;
                  goto LAB_0010175e;
                }
                piVar14 = zeros;
                piVar15 = head;
                if (((piVar8->count == 0) && (piVar8->printed == false)) &&
                   (piVar14 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
                  zeros->qlink = piVar8;
                  piVar15 = head;
                }
              }
              else {
                piVar14 = unaff_R15->left;
                if (piVar14 == (item *)0x0) {
                  piVar14 = unaff_R15->right;
                  if (piVar14 != (item *)0x0) {
                    if (unaff_R15->count == 0) goto LAB_00101e0e;
                    goto LAB_00103314;
                  }
                  piVar15 = zeros;
                  piVar18 = head;
                  if (((unaff_R15->count == 0) && (unaff_R15->printed == false)) &&
                     (piVar15 = unaff_R15, piVar18 = unaff_R15, head != (item *)0x0)) {
                    zeros->qlink = unaff_R15;
                    piVar15 = unaff_R15;
                    piVar18 = head;
                  }
                }
                else {
                  if (piVar14->left == (item *)0x0) {
                    piVar15 = piVar14->right;
                    if (piVar15 != (item *)0x0) {
                      if (piVar14->count == 0) goto LAB_00100e96;
                      goto LAB_00101def;
                    }
                    piVar18 = zeros;
                    piVar4 = head;
                    if (((piVar14->count == 0) && (piVar14->printed == false)) &&
                       (piVar18 = piVar14, piVar4 = piVar14, head != (item *)0x0)) {
                      zeros->qlink = piVar14;
                      piVar4 = head;
                    }
                  }
                  else {
                    _Var5 = recurse_tree(piVar14->left,scan_zeros);
                    piVar3 = zeros;
                    piVar4 = head;
                    if (_Var5) goto LAB_00100a7e;
                    piVar15 = piVar14->right;
                    piVar18 = zeros;
                    if (piVar14->count == 0) {
LAB_00100e96:
                      piVar18 = zeros;
                      piVar4 = head;
                      if ((piVar14->printed == false) &&
                         (piVar18 = piVar14, piVar4 = piVar14, head != (item *)0x0)) {
                        zeros->qlink = piVar14;
                        piVar4 = head;
                      }
                    }
                    head = piVar4;
                    zeros = piVar18;
                    piVar18 = zeros;
                    piVar4 = head;
                    if (piVar15 != (item *)0x0) {
LAB_00101def:
                      _Var5 = recurse_tree(piVar15,scan_zeros);
                      piVar18 = zeros;
                      piVar3 = zeros;
                      piVar4 = head;
                      if (_Var5) goto LAB_00100a7e;
                    }
                  }
                  head = piVar4;
                  zeros = piVar18;
                  piVar14 = unaff_R15->right;
                  piVar15 = zeros;
                  piVar18 = head;
                  if (unaff_R15->count == 0) {
LAB_00101e0e:
                    piVar15 = zeros;
                    piVar18 = head;
                    if ((unaff_R15->printed == false) &&
                       (piVar15 = unaff_R15, piVar18 = unaff_R15, head != (item *)0x0)) {
                      zeros->qlink = unaff_R15;
                      piVar15 = unaff_R15;
                      piVar18 = head;
                    }
                  }
                  head = piVar18;
                  zeros = piVar15;
                  piVar15 = zeros;
                  piVar18 = head;
                  if (piVar14 != (item *)0x0) {
LAB_00103314:
                    _Var5 = recurse_tree(piVar14,scan_zeros);
                    piVar15 = zeros;
                    piVar3 = zeros;
                    piVar18 = head;
                    piVar4 = head;
                    if (_Var5) goto LAB_00100a7e;
                  }
                }
                head = piVar18;
                zeros = piVar15;
                unaff_R15 = piVar8->right;
                piVar14 = zeros;
                piVar15 = head;
                if (piVar8->count == 0) {
LAB_00101e49:
                  piVar14 = zeros;
                  piVar15 = head;
                  if ((piVar8->printed == false) &&
                     (piVar14 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
                    zeros->qlink = piVar8;
                    piVar15 = head;
                  }
                }
                head = piVar15;
                zeros = piVar14;
                piVar14 = zeros;
                piVar15 = head;
                if (unaff_R15 != (item *)0x0) {
LAB_0010175e:
                  if (unaff_R15->left == (item *)0x0) {
                    piVar8 = unaff_R15->right;
                    if (piVar8 != (item *)0x0) {
                      if (unaff_R15->count == 0) goto LAB_0010178a;
                      goto LAB_001021c9;
                    }
                    piVar14 = zeros;
                    piVar15 = head;
                    if (((unaff_R15->count == 0) && (unaff_R15->printed == false)) &&
                       (piVar14 = unaff_R15, piVar15 = unaff_R15, head != (item *)0x0)) {
                      zeros->qlink = unaff_R15;
                      piVar14 = unaff_R15;
                      piVar15 = head;
                    }
                  }
                  else {
                    _Var5 = recurse_tree(unaff_R15->left,scan_zeros);
                    piVar3 = zeros;
                    piVar4 = head;
                    if (_Var5) goto LAB_00100a7e;
                    piVar8 = unaff_R15->right;
                    piVar14 = zeros;
                    piVar15 = head;
                    if (unaff_R15->count == 0) {
LAB_0010178a:
                      piVar14 = zeros;
                      piVar15 = head;
                      if ((unaff_R15->printed == false) &&
                         (piVar14 = unaff_R15, piVar15 = unaff_R15, head != (item *)0x0)) {
                        zeros->qlink = unaff_R15;
                        piVar14 = unaff_R15;
                        piVar15 = head;
                      }
                    }
                    head = piVar15;
                    zeros = piVar14;
                    piVar14 = zeros;
                    piVar15 = head;
                    if (piVar8 != (item *)0x0) {
LAB_001021c9:
                      _Var5 = recurse_tree(piVar8,scan_zeros);
                      piVar14 = zeros;
                      piVar3 = zeros;
                      piVar15 = head;
                      piVar4 = head;
                      if (_Var5) goto LAB_00100a7e;
                    }
                  }
                }
              }
              head = piVar15;
              zeros = piVar14;
              unaff_R15 = unaff_R13->right;
              piVar8 = zeros;
              piVar14 = head;
              if (unaff_R13->count == 0) {
LAB_001017c5:
                piVar8 = zeros;
                piVar14 = head;
                if ((unaff_R13->printed == false) &&
                   (piVar8 = unaff_R13, piVar14 = unaff_R13, head != (item *)0x0)) {
                  zeros->qlink = unaff_R13;
                  piVar8 = unaff_R13;
                  piVar14 = head;
                }
              }
              head = piVar14;
              zeros = piVar8;
              piVar8 = zeros;
              piVar14 = head;
              if (unaff_R15 != (item *)0x0) {
LAB_001016d6:
                unaff_R13 = unaff_R15->left;
                if (unaff_R13 == (item *)0x0) {
                  piVar15 = unaff_R15->right;
                  sVar10 = unaff_R15->count;
                  if (piVar15 == (item *)0x0) goto LAB_00101b1e;
                  if (sVar10 == 0) goto LAB_00102ba2;
                }
                else {
                  if (unaff_R13->left == (item *)0x0) {
                    piVar8 = unaff_R13->right;
                    if (piVar8 != (item *)0x0) {
                      if (unaff_R13->count == 0) goto LAB_0010170f;
                      goto LAB_00102b83;
                    }
                    piVar14 = zeros;
                    piVar15 = head;
                    if (((unaff_R13->count == 0) && (unaff_R13->printed == false)) &&
                       (piVar14 = unaff_R13, piVar15 = unaff_R13, head != (item *)0x0)) {
                      zeros->qlink = unaff_R13;
                      piVar14 = unaff_R13;
                      piVar15 = head;
                    }
                  }
                  else {
                    _Var5 = recurse_tree(unaff_R13->left,scan_zeros);
                    piVar3 = zeros;
                    piVar4 = head;
                    if (_Var5) goto LAB_00100a7e;
                    piVar8 = unaff_R13->right;
                    piVar14 = zeros;
                    piVar15 = head;
                    if (unaff_R13->count == 0) {
LAB_0010170f:
                      piVar14 = zeros;
                      piVar15 = head;
                      if ((unaff_R13->printed == false) &&
                         (piVar14 = unaff_R13, piVar15 = unaff_R13, head != (item *)0x0)) {
                        zeros->qlink = unaff_R13;
                        piVar14 = unaff_R13;
                        piVar15 = head;
                      }
                    }
                    head = piVar15;
                    zeros = piVar14;
                    piVar14 = zeros;
                    piVar15 = head;
                    if (piVar8 != (item *)0x0) {
LAB_00102b83:
                      _Var5 = recurse_tree(piVar8,scan_zeros);
                      piVar14 = zeros;
                      piVar3 = zeros;
                      piVar15 = head;
                      piVar4 = head;
                      if (_Var5) goto LAB_00100a7e;
                    }
                  }
                  head = piVar15;
                  zeros = piVar14;
                  piVar15 = unaff_R15->right;
                  piVar8 = zeros;
                  piVar14 = head;
                  if (unaff_R15->count == 0) {
LAB_00102ba2:
                    piVar8 = zeros;
                    piVar14 = head;
                    if ((unaff_R15->printed == false) &&
                       (piVar8 = unaff_R15, piVar14 = unaff_R15, head != (item *)0x0)) {
                      zeros->qlink = unaff_R15;
                      piVar8 = unaff_R15;
                      piVar14 = head;
                    }
                  }
                  head = piVar14;
                  zeros = piVar8;
                  piVar8 = zeros;
                  piVar14 = head;
                  if (piVar15 == (item *)0x0) goto LAB_00100a2c;
                }
                _Var5 = recurse_tree(piVar15,scan_zeros);
                piVar8 = zeros;
                piVar3 = zeros;
                piVar14 = head;
                piVar4 = head;
                if (_Var5) goto LAB_00100a7e;
              }
            }
          }
        }
LAB_00100a2c:
        head = piVar14;
        zeros = piVar8;
        unaff_R15 = piVar17->right;
        piVar8 = zeros;
        piVar14 = head;
        if (piVar17->count == 0) {
LAB_00100c86:
          piVar8 = zeros;
          piVar14 = head;
          if ((piVar17->printed == false) &&
             (piVar8 = piVar17, piVar14 = piVar17, head != (item *)0x0)) {
            zeros->qlink = piVar17;
            piVar14 = head;
          }
        }
        head = piVar14;
        zeros = piVar8;
        piVar8 = zeros;
        piVar14 = head;
        if (unaff_R15 == (item *)0x0) goto LAB_00100a44;
      }
      unaff_R13 = unaff_R15->left;
      if (unaff_R13 == (item *)0x0) {
        piVar17 = unaff_R15->right;
        sVar10 = unaff_R15->count;
        if (piVar17 == (item *)0x0) goto LAB_00101f26;
        if (sVar10 == 0) goto LAB_001015d3;
        goto LAB_0010112d;
      }
      piVar8 = unaff_R13->left;
      if (piVar8 == (item *)0x0) {
        piVar8 = unaff_R13->right;
        sVar10 = unaff_R13->count;
        if (piVar8 == (item *)0x0) goto LAB_00102e20;
        if (sVar10 == 0) goto LAB_0010168c;
      }
      else {
        piVar14 = piVar8->left;
        if (piVar14 == (item *)0x0) {
          piVar14 = piVar8->right;
          if (piVar14 != (item *)0x0) {
            if (piVar8->count == 0) goto LAB_00100d94;
            goto LAB_00101559;
          }
          piVar17 = zeros;
          piVar15 = head;
          if (((piVar8->count == 0) && (piVar8->printed == false)) &&
             (piVar17 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
            zeros->qlink = piVar8;
            piVar15 = head;
          }
        }
        else {
          piVar17 = piVar14->left;
          if (piVar17 == (item *)0x0) {
            piVar17 = piVar14->right;
            if (piVar17 != (item *)0x0) {
              if (piVar14->count == 0) goto LAB_00100d5a;
              goto LAB_00102ef2;
            }
            piVar15 = zeros;
            piVar18 = head;
            if (((piVar14->count == 0) && (piVar14->printed == false)) &&
               (piVar15 = piVar14, piVar18 = piVar14, head != (item *)0x0)) {
              zeros->qlink = piVar14;
              piVar18 = head;
            }
          }
          else {
            if (piVar17->left == (item *)0x0) {
              piVar15 = piVar17->right;
              if (piVar15 != (item *)0x0) {
                if (piVar17->count == 0) goto LAB_00100d1f;
                goto LAB_00102eb3;
              }
              piVar18 = zeros;
              piVar4 = head;
              if (((piVar17->count == 0) && (piVar17->printed == false)) &&
                 (piVar18 = piVar17, piVar4 = piVar17, head != (item *)0x0)) {
                zeros->qlink = piVar17;
                piVar4 = head;
              }
            }
            else {
              _Var5 = recurse_tree(piVar17->left,scan_zeros);
              piVar3 = zeros;
              piVar4 = head;
              if (_Var5) goto LAB_00100a7e;
              piVar15 = piVar17->right;
              piVar18 = zeros;
              if (piVar17->count == 0) {
LAB_00100d1f:
                piVar18 = zeros;
                piVar4 = head;
                if ((piVar17->printed == false) &&
                   (piVar18 = piVar17, piVar4 = piVar17, head != (item *)0x0)) {
                  zeros->qlink = piVar17;
                  piVar4 = head;
                }
              }
              head = piVar4;
              zeros = piVar18;
              piVar18 = zeros;
              piVar4 = head;
              if (piVar15 != (item *)0x0) {
LAB_00102eb3:
                _Var5 = recurse_tree(piVar15,scan_zeros);
                piVar18 = zeros;
                piVar3 = zeros;
                piVar4 = head;
                if (_Var5) goto LAB_00100a7e;
              }
            }
            head = piVar4;
            zeros = piVar18;
            piVar17 = piVar14->right;
            piVar15 = zeros;
            piVar18 = head;
            if (piVar14->count == 0) {
LAB_00100d5a:
              piVar15 = zeros;
              piVar18 = head;
              if ((piVar14->printed == false) &&
                 (piVar15 = piVar14, piVar18 = piVar14, head != (item *)0x0)) {
                zeros->qlink = piVar14;
                piVar18 = head;
              }
            }
            head = piVar18;
            zeros = piVar15;
            piVar15 = zeros;
            piVar18 = head;
            if (piVar17 != (item *)0x0) {
LAB_00102ef2:
              _Var5 = recurse_tree(piVar17,scan_zeros);
              piVar15 = zeros;
              piVar3 = zeros;
              piVar18 = head;
              piVar4 = head;
              if (_Var5) goto LAB_00100a7e;
            }
          }
          head = piVar18;
          zeros = piVar15;
          piVar14 = piVar8->right;
          piVar17 = zeros;
          piVar15 = head;
          if (piVar8->count == 0) {
LAB_00100d94:
            piVar17 = zeros;
            piVar15 = head;
            if ((piVar8->printed == false) &&
               (piVar17 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
              zeros->qlink = piVar8;
              piVar15 = head;
            }
          }
          head = piVar15;
          zeros = piVar17;
          piVar17 = zeros;
          piVar15 = head;
          if (piVar14 != (item *)0x0) {
LAB_00101559:
            if (piVar14->left == (item *)0x0) {
              piVar8 = piVar14->right;
              if (piVar8 != (item *)0x0) {
                if (piVar14->count == 0) goto LAB_00101585;
                goto LAB_00102584;
              }
              piVar17 = zeros;
              piVar15 = head;
              if (((piVar14->count == 0) && (piVar14->printed == false)) &&
                 (piVar17 = piVar14, piVar15 = piVar14, head != (item *)0x0)) {
                zeros->qlink = piVar14;
                piVar15 = head;
              }
            }
            else {
              _Var5 = recurse_tree(piVar14->left,scan_zeros);
              piVar3 = zeros;
              piVar4 = head;
              if (_Var5) goto LAB_00100a7e;
              piVar8 = piVar14->right;
              piVar17 = zeros;
              piVar15 = head;
              if (piVar14->count == 0) {
LAB_00101585:
                piVar17 = zeros;
                piVar15 = head;
                if ((piVar14->printed == false) &&
                   (piVar17 = piVar14, piVar15 = piVar14, head != (item *)0x0)) {
                  zeros->qlink = piVar14;
                  piVar15 = head;
                }
              }
              head = piVar15;
              zeros = piVar17;
              piVar17 = zeros;
              piVar15 = head;
              if (piVar8 != (item *)0x0) {
LAB_00102584:
                _Var5 = recurse_tree(piVar8,scan_zeros);
                piVar17 = zeros;
                piVar3 = zeros;
                piVar15 = head;
                piVar4 = head;
                if (_Var5) goto LAB_00100a7e;
              }
            }
          }
        }
        head = piVar15;
        zeros = piVar17;
        piVar8 = unaff_R13->right;
        piVar14 = zeros;
        piVar17 = head;
        if (unaff_R13->count == 0) {
LAB_0010168c:
          piVar14 = zeros;
          piVar17 = head;
          if ((unaff_R13->printed == false) &&
             (piVar14 = unaff_R13, piVar17 = unaff_R13, head != (item *)0x0)) {
            zeros->qlink = unaff_R13;
            piVar14 = unaff_R13;
            piVar17 = head;
          }
        }
        head = piVar17;
        zeros = piVar14;
        piVar14 = zeros;
        piVar17 = head;
        if (piVar8 == (item *)0x0) goto LAB_001015c8;
      }
      unaff_R13 = piVar8->left;
      if (unaff_R13 == (item *)0x0) {
        unaff_R13 = piVar8->right;
        if (unaff_R13 == (item *)0x0) {
          piVar14 = zeros;
          piVar17 = head;
          if (piVar8->count != 0) goto LAB_001015c8;
          if (piVar8->printed != false) goto LAB_001015c8;
          piVar14 = piVar8;
          piVar17 = piVar8;
          if (head == (item *)0x0) goto LAB_001015c8;
          zeros->qlink = piVar8;
          piVar17 = head;
          goto LAB_001015c8;
        }
        if (piVar8->count == 0) goto LAB_00102c6b;
      }
      else {
        if (unaff_R13->left == (item *)0x0) {
          piVar14 = unaff_R13->right;
          if (piVar14 != (item *)0x0) {
            if (unaff_R13->count == 0) goto LAB_00101657;
            goto LAB_00102c4c;
          }
          piVar17 = zeros;
          piVar15 = head;
          if (((unaff_R13->count == 0) && (unaff_R13->printed == false)) &&
             (piVar17 = unaff_R13, piVar15 = unaff_R13, head != (item *)0x0)) {
            zeros->qlink = unaff_R13;
            piVar17 = unaff_R13;
            piVar15 = head;
          }
        }
        else {
          _Var5 = recurse_tree(unaff_R13->left,scan_zeros);
          piVar3 = zeros;
          piVar4 = head;
          if (_Var5) goto LAB_00100a7e;
          piVar14 = unaff_R13->right;
          piVar17 = zeros;
          piVar15 = head;
          if (unaff_R13->count == 0) {
LAB_00101657:
            piVar17 = zeros;
            piVar15 = head;
            if ((unaff_R13->printed == false) &&
               (piVar17 = unaff_R13, piVar15 = unaff_R13, head != (item *)0x0)) {
              zeros->qlink = unaff_R13;
              piVar17 = unaff_R13;
              piVar15 = head;
            }
          }
          head = piVar15;
          zeros = piVar17;
          piVar17 = zeros;
          piVar15 = head;
          if (piVar14 != (item *)0x0) {
LAB_00102c4c:
            _Var5 = recurse_tree(piVar14,scan_zeros);
            piVar17 = zeros;
            piVar3 = zeros;
            piVar15 = head;
            piVar4 = head;
            if (_Var5) goto LAB_00100a7e;
          }
        }
        head = piVar15;
        zeros = piVar17;
        unaff_R13 = piVar8->right;
        piVar14 = zeros;
        piVar17 = head;
        if (piVar8->count == 0) {
LAB_00102c6b:
          piVar14 = zeros;
          piVar17 = head;
          if ((piVar8->printed == false) &&
             (piVar14 = piVar8, piVar17 = piVar8, head != (item *)0x0)) {
            zeros->qlink = piVar8;
            piVar17 = head;
          }
        }
        head = piVar17;
        zeros = piVar14;
        piVar14 = zeros;
        piVar17 = head;
        if (unaff_R13 == (item *)0x0) goto LAB_001015c8;
      }
      if (unaff_R13->left == (item *)0x0) {
        piVar8 = unaff_R13->right;
        sVar10 = unaff_R13->count;
        if (piVar8 == (item *)0x0) {
LAB_00102e20:
          piVar14 = zeros;
          piVar17 = head;
          if (sVar10 != 0) goto LAB_001015c8;
          if (unaff_R13->printed != false) goto LAB_001015c8;
          piVar14 = unaff_R13;
          piVar17 = unaff_R13;
          if (head == (item *)0x0) goto LAB_001015c8;
          zeros->qlink = unaff_R13;
          piVar14 = unaff_R13;
          piVar17 = head;
          goto LAB_001015c8;
        }
        if (sVar10 != 0) goto LAB_00102cee;
LAB_00102cc2:
        piVar14 = zeros;
        piVar17 = head;
        if ((unaff_R13->printed == false) &&
           (piVar14 = unaff_R13, piVar17 = unaff_R13, head != (item *)0x0)) {
          zeros->qlink = unaff_R13;
          piVar14 = unaff_R13;
          piVar17 = head;
        }
      }
      else {
        _Var5 = recurse_tree(unaff_R13->left,scan_zeros);
        piVar3 = zeros;
        piVar4 = head;
        if (_Var5) goto LAB_00100a7e;
        piVar8 = unaff_R13->right;
        piVar14 = zeros;
        piVar17 = head;
        if (unaff_R13->count == 0) goto LAB_00102cc2;
      }
      head = piVar17;
      zeros = piVar14;
      piVar14 = zeros;
      piVar17 = head;
      if (piVar8 == (item *)0x0) goto LAB_001015c8;
LAB_00102cee:
      _Var5 = recurse_tree(piVar8,scan_zeros);
      piVar14 = zeros;
      piVar3 = zeros;
      piVar17 = head;
      piVar4 = head;
      if (!_Var5) goto LAB_001015c8;
      goto LAB_00100a7e;
    }
    piVar17 = root->right;
    if (piVar17 != (item *)0x0) {
      if (root->count == 0) goto LAB_00100a4f;
      goto LAB_00100b7a;
    }
    if (((root->count == 0) && (root->printed == false)) &&
       (piVar8 = root, piVar14 = root, head != (item *)0x0)) {
      zeros->qlink = root;
      piVar14 = head;
    }
  }
  head = piVar14;
  zeros = piVar8;
  if (head != (item *)0x0) {
    do {
      do {
        psVar16 = head->top;
        puts(head->str);
        piVar8 = zeros;
        bVar2 = false;
        sVar10 = n_strings - 1;
        head->printed = true;
        n_strings = sVar10;
        if (psVar16 != (successor *)0x0) {
          do {
            piVar14 = psVar16->suc;
            psVar1 = &piVar14->count;
            *psVar1 = *psVar1 - 1;
            if (*psVar1 == 0) {
              piVar8->qlink = piVar14;
              bVar2 = true;
              piVar8 = piVar14;
            }
            psVar16 = psVar16->next;
          } while (psVar16 != (successor *)0x0);
          if (bVar2) {
            zeros = piVar8;
          }
        }
        head = head->qlink;
      } while (head != (item *)0x0);
      do {
        if (sVar10 != 0) goto LAB_00103088;
LAB_00100aa1:
        iVar6 = rpl_fclose(_stdin);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          exit((uint)(local_69 ^ 1));
        }
        if (local_70 == 0) {
          uVar13 = dcgettext(0,"standard input",5);
        }
        else {
LAB_00102e55:
          uVar13 = quotearg_n_style_colon(0,3,file);
        }
        piVar11 = __errno_location();
        error(1,*piVar11,&_LC0,uVar13);
        piVar14 = unaff_R13;
        piVar17 = unaff_R13;
LAB_001015c8:
        head = piVar17;
        zeros = piVar14;
        piVar17 = unaff_R15->right;
        piVar8 = zeros;
        piVar14 = head;
        if (unaff_R15->count == 0) {
LAB_001015d3:
          piVar8 = zeros;
          piVar14 = head;
          if ((unaff_R15->printed == false) &&
             (piVar8 = unaff_R15, piVar14 = unaff_R15, head != (item *)0x0)) {
            zeros->qlink = unaff_R15;
            piVar8 = unaff_R15;
            piVar14 = head;
          }
        }
        head = piVar14;
        zeros = piVar8;
        piVar8 = zeros;
        piVar14 = head;
        if (piVar17 == (item *)0x0) goto LAB_00100a44;
LAB_0010112d:
        unaff_R13 = piVar17->left;
        if (unaff_R13 == (item *)0x0) {
          unaff_R15 = piVar17->right;
          sVar10 = piVar17->count;
          if (unaff_R15 == (item *)0x0) {
LAB_0010180b:
            piVar8 = zeros;
            piVar14 = head;
            if (((sVar10 == 0) && (piVar17->printed == false)) &&
               (piVar8 = piVar17, piVar14 = piVar17, head != (item *)0x0)) {
              zeros->qlink = piVar17;
              piVar14 = head;
            }
            goto LAB_00100a44;
          }
          if (sVar10 == 0) {
LAB_001020dd:
            piVar8 = zeros;
            piVar14 = head;
            if ((piVar17->printed == false) &&
               (piVar8 = piVar17, piVar14 = piVar17, head != (item *)0x0)) {
              zeros->qlink = piVar17;
              piVar14 = head;
            }
            goto LAB_00102103;
          }
LAB_00101b60:
          piVar8 = unaff_R15->left;
          if (piVar8 == (item *)0x0) {
            piVar17 = unaff_R15->right;
            sVar10 = unaff_R15->count;
            if (piVar17 != (item *)0x0) {
              if (sVar10 == 0) goto LAB_00101bd3;
              goto LAB_00101c03;
            }
LAB_00101f26:
            piVar8 = zeros;
            piVar14 = head;
            if (((sVar10 == 0) && (unaff_R15->printed == false)) &&
               (piVar8 = unaff_R15, piVar14 = unaff_R15, head != (item *)0x0)) {
              zeros->qlink = unaff_R15;
              piVar8 = unaff_R15;
              piVar14 = head;
            }
          }
          else {
            if (piVar8->left == (item *)0x0) {
              piVar14 = piVar8->right;
              if (piVar14 == (item *)0x0) {
                piVar17 = zeros;
                piVar15 = head;
                if (((piVar8->count == 0) && (piVar8->printed == false)) &&
                   (piVar17 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
                  zeros->qlink = piVar8;
                  piVar15 = head;
                }
              }
              else {
                if (piVar8->count == 0) goto LAB_00101b99;
LAB_0010239d:
                _Var5 = recurse_tree(piVar14,scan_zeros);
                piVar3 = zeros;
                piVar17 = zeros;
                piVar4 = head;
                piVar15 = head;
                if (_Var5) goto LAB_00100a7e;
              }
            }
            else {
              _Var5 = recurse_tree(piVar8->left,scan_zeros);
              piVar3 = zeros;
              piVar4 = head;
              if (_Var5) goto LAB_00100a7e;
              piVar14 = piVar8->right;
              piVar17 = zeros;
              piVar15 = head;
              if (piVar8->count == 0) {
LAB_00101b99:
                piVar17 = zeros;
                piVar15 = head;
                if ((piVar8->printed == false) &&
                   (piVar17 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
                  zeros->qlink = piVar8;
                  piVar15 = head;
                }
              }
              head = piVar15;
              zeros = piVar17;
              piVar17 = zeros;
              piVar15 = head;
              if (piVar14 != (item *)0x0) goto LAB_0010239d;
            }
            head = piVar15;
            zeros = piVar17;
            piVar17 = unaff_R15->right;
            piVar8 = zeros;
            piVar14 = head;
            if (unaff_R15->count == 0) {
LAB_00101bd3:
              piVar8 = zeros;
              piVar14 = head;
              if ((unaff_R15->printed == false) &&
                 (piVar8 = unaff_R15, piVar14 = unaff_R15, head != (item *)0x0)) {
                zeros->qlink = unaff_R15;
                piVar8 = unaff_R15;
                piVar14 = head;
              }
            }
            head = piVar14;
            zeros = piVar8;
            piVar8 = zeros;
            piVar14 = head;
            if (piVar17 != (item *)0x0) {
LAB_00101c03:
              _Var5 = recurse_tree(piVar17,scan_zeros);
              piVar3 = zeros;
              piVar8 = zeros;
              piVar4 = head;
              piVar14 = head;
              if (_Var5) goto LAB_00100a7e;
            }
          }
LAB_00100a44:
          head = piVar14;
          zeros = piVar8;
          piVar17 = root->right;
          piVar8 = zeros;
          piVar14 = head;
          if (root->count == 0) {
LAB_00100a4f:
            piVar8 = zeros;
            piVar14 = head;
            if ((root->printed == false) && (piVar8 = root, piVar14 = root, head != (item *)0x0)) {
              zeros->qlink = root;
              piVar14 = head;
            }
          }
          head = piVar14;
          zeros = piVar8;
          piVar3 = zeros;
          piVar4 = head;
          if (piVar17 != (item *)0x0) {
LAB_00100b7a:
            unaff_R13 = piVar17->left;
            if (unaff_R13 == (item *)0x0) {
              unaff_R15 = piVar17->right;
              sVar10 = piVar17->count;
              if (unaff_R15 != (item *)0x0) {
                if (sVar10 == 0) goto LAB_00100ee1;
                goto LAB_00100f10;
              }
LAB_00101ae4:
              piVar3 = zeros;
              piVar4 = head;
              if (((sVar10 == 0) && (piVar17->printed == false)) &&
                 (piVar3 = piVar17, piVar4 = piVar17, head != (item *)0x0)) {
                zeros->qlink = piVar17;
                piVar4 = head;
              }
            }
            else {
              piVar8 = unaff_R13->left;
              if (piVar8 == (item *)0x0) {
                unaff_R15 = unaff_R13->right;
                sVar10 = unaff_R13->count;
                if (unaff_R15 != (item *)0x0) {
                  if (sVar10 == 0) goto LAB_001014fb;
                  goto LAB_00100fbe;
                }
LAB_00102135:
                piVar8 = zeros;
                piVar14 = head;
                if (((sVar10 == 0) && (unaff_R13->printed == false)) &&
                   (piVar8 = unaff_R13, piVar14 = unaff_R13, head != (item *)0x0)) {
                  zeros->qlink = unaff_R13;
                  piVar8 = unaff_R13;
                  piVar14 = head;
                }
              }
              else {
                piVar14 = piVar8->left;
                if (piVar14 == (item *)0x0) {
                  unaff_R15 = piVar8->right;
                  if (unaff_R15 != (item *)0x0) {
                    if (piVar8->count == 0) goto LAB_0010191a;
                    goto LAB_0010185d;
                  }
                  piVar14 = zeros;
                  piVar15 = head;
                  if (((piVar8->count == 0) && (piVar8->printed == false)) &&
                     (piVar14 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
                    zeros->qlink = piVar8;
                    piVar15 = head;
                  }
                }
                else {
                  unaff_R15 = piVar14->left;
                  if (unaff_R15 == (item *)0x0) {
                    unaff_R15 = piVar14->right;
                    if (unaff_R15 != (item *)0x0) {
                      if (piVar14->count == 0) goto LAB_00101da0;
                      goto LAB_0010147c;
                    }
                    piVar15 = zeros;
                    piVar18 = head;
                    if (((piVar14->count == 0) && (piVar14->printed == false)) &&
                       (piVar15 = piVar14, piVar18 = piVar14, head != (item *)0x0)) {
                      zeros->qlink = piVar14;
                      piVar18 = head;
                    }
                  }
                  else {
                    piVar15 = unaff_R15->left;
                    if (piVar15 == (item *)0x0) {
                      piVar15 = unaff_R15->right;
                      if (piVar15 != (item *)0x0) {
                        if (unaff_R15->count == 0) goto LAB_00100c36;
                        goto LAB_00101d77;
                      }
                      piVar18 = zeros;
                      piVar4 = head;
                      if (((unaff_R15->count == 0) && (unaff_R15->printed == false)) &&
                         (piVar18 = unaff_R15, piVar4 = unaff_R15, head != (item *)0x0)) {
                        zeros->qlink = unaff_R15;
                        piVar18 = unaff_R15;
                        piVar4 = head;
                      }
                    }
                    else {
                      if (piVar15->left == (item *)0x0) {
                        piVar18 = piVar15->right;
                        if (piVar18 != (item *)0x0) {
                          if (piVar15->count == 0) goto LAB_00100bfb;
                          goto LAB_001034a3;
                        }
                        piVar3 = zeros;
                        piVar4 = head;
                        if (((piVar15->count == 0) && (piVar15->printed == false)) &&
                           (piVar3 = piVar15, piVar4 = piVar15, head != (item *)0x0)) {
                          zeros->qlink = piVar15;
                          piVar4 = head;
                        }
                      }
                      else {
                        _Var5 = recurse_tree(piVar15->left,scan_zeros);
                        piVar3 = zeros;
                        piVar4 = head;
                        if (_Var5) goto LAB_00100a7e;
                        piVar18 = piVar15->right;
                        piVar4 = zeros;
                        piVar3 = head;
                        if (piVar15->count == 0) {
LAB_00100bfb:
                          piVar4 = zeros;
                          piVar3 = head;
                          if ((piVar15->printed == false) &&
                             (piVar4 = piVar15, piVar3 = piVar15, head != (item *)0x0)) {
                            zeros->qlink = piVar15;
                            piVar3 = head;
                          }
                        }
                        head = piVar3;
                        zeros = piVar4;
                        piVar3 = zeros;
                        piVar4 = head;
                        if (piVar18 != (item *)0x0) {
LAB_001034a3:
                          _Var5 = recurse_tree(piVar18,scan_zeros);
                          piVar3 = zeros;
                          piVar4 = head;
                          if (_Var5) goto LAB_00100a7e;
                        }
                      }
                      head = piVar4;
                      zeros = piVar3;
                      piVar15 = unaff_R15->right;
                      piVar18 = zeros;
                      piVar4 = head;
                      if (unaff_R15->count == 0) {
LAB_00100c36:
                        piVar18 = zeros;
                        piVar4 = head;
                        if ((unaff_R15->printed == false) &&
                           (piVar18 = unaff_R15, piVar4 = unaff_R15, head != (item *)0x0)) {
                          zeros->qlink = unaff_R15;
                          piVar18 = unaff_R15;
                          piVar4 = head;
                        }
                      }
                      head = piVar4;
                      zeros = piVar18;
                      piVar18 = zeros;
                      piVar4 = head;
                      if (piVar15 != (item *)0x0) {
LAB_00101d77:
                        _Var5 = recurse_tree(piVar15,scan_zeros);
                        piVar3 = zeros;
                        piVar18 = zeros;
                        piVar4 = head;
                        if (_Var5) goto LAB_00100a7e;
                      }
                    }
                    head = piVar4;
                    zeros = piVar18;
                    unaff_R15 = piVar14->right;
                    piVar15 = zeros;
                    piVar18 = head;
                    if (piVar14->count == 0) {
LAB_00101da0:
                      piVar15 = zeros;
                      piVar18 = head;
                      if ((piVar14->printed == false) &&
                         (piVar15 = piVar14, piVar18 = piVar14, head != (item *)0x0)) {
                        zeros->qlink = piVar14;
                        piVar18 = head;
                      }
                    }
                    head = piVar18;
                    zeros = piVar15;
                    piVar15 = zeros;
                    piVar18 = head;
                    if (unaff_R15 != (item *)0x0) {
LAB_0010147c:
                      if (unaff_R15->left == (item *)0x0) {
                        piVar14 = unaff_R15->right;
                        if (piVar14 != (item *)0x0) {
                          if (unaff_R15->count == 0) goto LAB_001014a8;
                          goto LAB_001026a7;
                        }
                        piVar15 = zeros;
                        piVar18 = head;
                        if (((unaff_R15->count == 0) && (unaff_R15->printed == false)) &&
                           (piVar15 = unaff_R15, piVar18 = unaff_R15, head != (item *)0x0)) {
                          zeros->qlink = unaff_R15;
                          piVar15 = unaff_R15;
                          piVar18 = head;
                        }
                      }
                      else {
                        _Var5 = recurse_tree(unaff_R15->left,scan_zeros);
                        piVar3 = zeros;
                        piVar4 = head;
                        if (_Var5) goto LAB_00100a7e;
                        piVar14 = unaff_R15->right;
                        piVar15 = zeros;
                        piVar18 = head;
                        if (unaff_R15->count == 0) {
LAB_001014a8:
                          piVar15 = zeros;
                          piVar18 = head;
                          if ((unaff_R15->printed == false) &&
                             (piVar15 = unaff_R15, piVar18 = unaff_R15, head != (item *)0x0)) {
                            zeros->qlink = unaff_R15;
                            piVar15 = unaff_R15;
                            piVar18 = head;
                          }
                        }
                        head = piVar18;
                        zeros = piVar15;
                        piVar15 = zeros;
                        piVar18 = head;
                        if (piVar14 != (item *)0x0) {
LAB_001026a7:
                          _Var5 = recurse_tree(piVar14,scan_zeros);
                          piVar3 = zeros;
                          piVar15 = zeros;
                          piVar18 = head;
                          piVar4 = head;
                          if (_Var5) goto LAB_00100a7e;
                        }
                      }
                    }
                  }
                  head = piVar18;
                  zeros = piVar15;
                  unaff_R15 = piVar8->right;
                  piVar14 = zeros;
                  piVar15 = head;
                  if (piVar8->count == 0) {
LAB_0010191a:
                    piVar14 = zeros;
                    piVar15 = head;
                    if ((piVar8->printed == false) &&
                       (piVar14 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
                      zeros->qlink = piVar8;
                      piVar15 = head;
                    }
                  }
                  head = piVar15;
                  zeros = piVar14;
                  piVar14 = zeros;
                  piVar15 = head;
                  if (unaff_R15 != (item *)0x0) {
LAB_0010185d:
                    piVar8 = unaff_R15->left;
                    if (piVar8 == (item *)0x0) {
                      piVar8 = unaff_R15->right;
                      if (piVar8 != (item *)0x0) {
                        if (unaff_R15->count == 0) goto LAB_001018d1;
                        goto LAB_00101901;
                      }
                      piVar14 = zeros;
                      piVar15 = head;
                      if (((unaff_R15->count == 0) && (unaff_R15->printed == false)) &&
                         (piVar14 = unaff_R15, piVar15 = unaff_R15, head != (item *)0x0)) {
                        zeros->qlink = unaff_R15;
                        piVar14 = unaff_R15;
                        piVar15 = head;
                      }
                    }
                    else {
                      if (piVar8->left == (item *)0x0) {
                        piVar14 = piVar8->right;
                        if (piVar14 != (item *)0x0) {
                          if (piVar8->count == 0) goto LAB_00101896;
                          goto LAB_00102a65;
                        }
                        piVar15 = zeros;
                        piVar18 = head;
                        if (((piVar8->count == 0) && (piVar8->printed == false)) &&
                           (piVar15 = piVar8, piVar18 = piVar8, head != (item *)0x0)) {
                          zeros->qlink = piVar8;
                          piVar18 = head;
                        }
                      }
                      else {
                        _Var5 = recurse_tree(piVar8->left,scan_zeros);
                        piVar3 = zeros;
                        piVar4 = head;
                        if (_Var5) goto LAB_00100a7e;
                        piVar14 = piVar8->right;
                        piVar15 = zeros;
                        piVar18 = head;
                        if (piVar8->count == 0) {
LAB_00101896:
                          piVar15 = zeros;
                          piVar18 = head;
                          if ((piVar8->printed == false) &&
                             (piVar15 = piVar8, piVar18 = piVar8, head != (item *)0x0)) {
                            zeros->qlink = piVar8;
                            piVar18 = head;
                          }
                        }
                        head = piVar18;
                        zeros = piVar15;
                        piVar15 = zeros;
                        piVar18 = head;
                        if (piVar14 != (item *)0x0) {
LAB_00102a65:
                          _Var5 = recurse_tree(piVar14,scan_zeros);
                          piVar3 = zeros;
                          piVar15 = zeros;
                          piVar18 = head;
                          piVar4 = head;
                          if (_Var5) goto LAB_00100a7e;
                        }
                      }
                      head = piVar18;
                      zeros = piVar15;
                      piVar8 = unaff_R15->right;
                      piVar14 = zeros;
                      piVar15 = head;
                      if (unaff_R15->count == 0) {
LAB_001018d1:
                        piVar14 = zeros;
                        piVar15 = head;
                        if ((unaff_R15->printed == false) &&
                           (piVar14 = unaff_R15, piVar15 = unaff_R15, head != (item *)0x0)) {
                          zeros->qlink = unaff_R15;
                          piVar14 = unaff_R15;
                          piVar15 = head;
                        }
                      }
                      head = piVar15;
                      zeros = piVar14;
                      piVar14 = zeros;
                      piVar15 = head;
                      if (piVar8 != (item *)0x0) {
LAB_00101901:
                        _Var5 = recurse_tree(piVar8,scan_zeros);
                        piVar3 = zeros;
                        piVar14 = zeros;
                        piVar4 = head;
                        piVar15 = head;
                        if (_Var5) goto LAB_00100a7e;
                      }
                    }
                  }
                }
                head = piVar15;
                zeros = piVar14;
                unaff_R15 = unaff_R13->right;
                piVar8 = zeros;
                piVar14 = head;
                if (unaff_R13->count == 0) {
LAB_001014fb:
                  piVar8 = zeros;
                  piVar14 = head;
                  if ((unaff_R13->printed == false) &&
                     (piVar8 = unaff_R13, piVar14 = unaff_R13, head != (item *)0x0)) {
                    zeros->qlink = unaff_R13;
                    piVar8 = unaff_R13;
                    piVar14 = head;
                  }
                }
                head = piVar14;
                zeros = piVar8;
                piVar8 = zeros;
                piVar14 = head;
                if (unaff_R15 != (item *)0x0) {
LAB_00100fbe:
                  unaff_R13 = unaff_R15->left;
                  if (unaff_R13 == (item *)0x0) {
                    unaff_R13 = unaff_R15->right;
                    if (unaff_R13 != (item *)0x0) {
                      if (unaff_R15->count == 0) goto LAB_00101d28;
                      goto LAB_00101a6f;
                    }
                    piVar8 = zeros;
                    piVar14 = head;
                    if (((unaff_R15->count == 0) && (unaff_R15->printed == false)) &&
                       (piVar8 = unaff_R15, piVar14 = unaff_R15, head != (item *)0x0)) {
                      zeros->qlink = unaff_R15;
                      piVar8 = unaff_R15;
                      piVar14 = head;
                    }
                  }
                  else {
                    piVar8 = unaff_R13->left;
                    if (piVar8 == (item *)0x0) {
                      piVar8 = unaff_R13->right;
                      if (piVar8 != (item *)0x0) {
                        if (unaff_R13->count == 0) goto LAB_00101ced;
                        goto LAB_00103125;
                      }
                      piVar14 = zeros;
                      piVar15 = head;
                      if (((unaff_R13->count == 0) && (unaff_R13->printed == false)) &&
                         (piVar14 = unaff_R13, piVar15 = unaff_R13, head != (item *)0x0)) {
                        zeros->qlink = unaff_R13;
                        piVar14 = unaff_R13;
                        piVar15 = head;
                      }
                    }
                    else {
                      if (piVar8->left == (item *)0x0) {
                        piVar14 = piVar8->right;
                        if (piVar14 != (item *)0x0) {
                          if (piVar8->count == 0) goto LAB_00101004;
                          goto LAB_00101cce;
                        }
                        piVar15 = zeros;
                        piVar18 = head;
                        if (((piVar8->count == 0) && (piVar8->printed == false)) &&
                           (piVar15 = piVar8, piVar18 = piVar8, head != (item *)0x0)) {
                          zeros->qlink = piVar8;
                          piVar18 = head;
                        }
                      }
                      else {
                        _Var5 = recurse_tree(piVar8->left,scan_zeros);
                        piVar3 = zeros;
                        piVar4 = head;
                        if (_Var5) goto LAB_00100a7e;
                        piVar14 = piVar8->right;
                        piVar15 = zeros;
                        piVar18 = head;
                        if (piVar8->count == 0) {
LAB_00101004:
                          piVar15 = zeros;
                          piVar18 = head;
                          if ((piVar8->printed == false) &&
                             (piVar15 = piVar8, piVar18 = piVar8, head != (item *)0x0)) {
                            zeros->qlink = piVar8;
                            piVar18 = head;
                          }
                        }
                        head = piVar18;
                        zeros = piVar15;
                        piVar15 = zeros;
                        piVar18 = head;
                        if (piVar14 != (item *)0x0) {
LAB_00101cce:
                          _Var5 = recurse_tree(piVar14,scan_zeros);
                          piVar3 = zeros;
                          piVar15 = zeros;
                          piVar18 = head;
                          piVar4 = head;
                          if (_Var5) goto LAB_00100a7e;
                        }
                      }
                      head = piVar18;
                      zeros = piVar15;
                      piVar8 = unaff_R13->right;
                      piVar14 = zeros;
                      piVar15 = head;
                      if (unaff_R13->count == 0) {
LAB_00101ced:
                        piVar14 = zeros;
                        piVar15 = head;
                        if ((unaff_R13->printed == false) &&
                           (piVar14 = unaff_R13, piVar15 = unaff_R13, head != (item *)0x0)) {
                          zeros->qlink = unaff_R13;
                          piVar14 = unaff_R13;
                          piVar15 = head;
                        }
                      }
                      head = piVar15;
                      zeros = piVar14;
                      piVar14 = zeros;
                      piVar15 = head;
                      if (piVar8 != (item *)0x0) {
LAB_00103125:
                        _Var5 = recurse_tree(piVar8,scan_zeros);
                        piVar3 = zeros;
                        piVar14 = zeros;
                        piVar4 = head;
                        piVar15 = head;
                        if (_Var5) goto LAB_00100a7e;
                      }
                    }
                    head = piVar15;
                    zeros = piVar14;
                    unaff_R13 = unaff_R15->right;
                    piVar8 = zeros;
                    piVar14 = head;
                    if (unaff_R15->count == 0) {
LAB_00101d28:
                      piVar8 = zeros;
                      piVar14 = head;
                      if ((unaff_R15->printed == false) &&
                         (piVar8 = unaff_R15, piVar14 = unaff_R15, head != (item *)0x0)) {
                        zeros->qlink = unaff_R15;
                        piVar8 = unaff_R15;
                        piVar14 = head;
                      }
                    }
                    head = piVar14;
                    zeros = piVar8;
                    piVar8 = zeros;
                    piVar14 = head;
                    if (unaff_R13 != (item *)0x0) {
LAB_00101a6f:
                      if (unaff_R13->left == (item *)0x0) {
                        piVar15 = unaff_R13->right;
                        sVar10 = unaff_R13->count;
                        if (piVar15 == (item *)0x0) goto LAB_00102135;
                        if (sVar10 == 0) goto LAB_00101a9b;
                      }
                      else {
                        _Var5 = recurse_tree(unaff_R13->left,scan_zeros);
                        piVar3 = zeros;
                        piVar4 = head;
                        if (_Var5) goto LAB_00100a7e;
                        piVar15 = unaff_R13->right;
                        piVar8 = zeros;
                        piVar14 = head;
                        if (unaff_R13->count == 0) {
LAB_00101a9b:
                          piVar8 = zeros;
                          piVar14 = head;
                          if ((unaff_R13->printed == false) &&
                             (piVar8 = unaff_R13, piVar14 = unaff_R13, head != (item *)0x0)) {
                            zeros->qlink = unaff_R13;
                            piVar8 = unaff_R13;
                            piVar14 = head;
                          }
                        }
                        head = piVar14;
                        zeros = piVar8;
                        piVar8 = zeros;
                        piVar14 = head;
                        if (piVar15 == (item *)0x0) goto LAB_0010152b;
                      }
                      _Var5 = recurse_tree(piVar15,scan_zeros);
                      piVar3 = zeros;
                      piVar8 = zeros;
                      piVar4 = head;
                      piVar14 = head;
                      if (_Var5) goto LAB_00100a7e;
                    }
                  }
                }
              }
LAB_0010152b:
              head = piVar14;
              zeros = piVar8;
              unaff_R15 = piVar17->right;
              piVar8 = zeros;
              piVar14 = head;
              if (piVar17->count == 0) {
LAB_00100ee1:
                piVar8 = zeros;
                piVar14 = head;
                if ((piVar17->printed == false) &&
                   (piVar8 = piVar17, piVar14 = piVar17, head != (item *)0x0)) {
                  zeros->qlink = piVar17;
                  piVar14 = head;
                }
              }
              head = piVar14;
              zeros = piVar8;
              piVar3 = zeros;
              piVar4 = head;
              if (unaff_R15 != (item *)0x0) {
LAB_00100f10:
                unaff_R13 = unaff_R15->left;
                if (unaff_R13 == (item *)0x0) {
                  piVar17 = unaff_R15->right;
                  sVar10 = unaff_R15->count;
                  if (piVar17 != (item *)0x0) {
                    if (sVar10 == 0) goto LAB_001012c2;
                    goto LAB_001012f2;
                  }
LAB_001023ce:
                  piVar3 = zeros;
                  piVar4 = head;
                  if (((sVar10 == 0) && (unaff_R15->printed == false)) &&
                     (piVar3 = unaff_R15, piVar4 = unaff_R15, head != (item *)0x0)) {
                    zeros->qlink = unaff_R15;
                    piVar3 = unaff_R15;
                    piVar4 = head;
                  }
                }
                else {
                  piVar8 = unaff_R13->left;
                  if (piVar8 == (item *)0x0) {
                    piVar8 = unaff_R13->right;
                    if (piVar8 != (item *)0x0) {
                      if (unaff_R13->count == 0) goto LAB_00101ef1;
                      goto LAB_0010125c;
                    }
                    piVar14 = zeros;
                    piVar17 = head;
                    if (((unaff_R13->count == 0) && (unaff_R13->printed == false)) &&
                       (piVar14 = unaff_R13, piVar17 = unaff_R13, head != (item *)0x0)) {
                      zeros->qlink = unaff_R13;
                      piVar14 = unaff_R13;
                      piVar17 = head;
                    }
                  }
                  else {
                    piVar14 = piVar8->left;
                    if (piVar14 == (item *)0x0) {
                      piVar14 = piVar8->right;
                      if (piVar14 != (item *)0x0) {
                        if (piVar8->count == 0) goto LAB_00101eb7;
                        goto LAB_0010339a;
                      }
                      piVar17 = zeros;
                      piVar15 = head;
                      if (((piVar8->count == 0) && (piVar8->printed == false)) &&
                         (piVar17 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
                        zeros->qlink = piVar8;
                        piVar15 = head;
                      }
                    }
                    else {
                      if (piVar14->left == (item *)0x0) {
                        piVar17 = piVar14->right;
                        if (piVar17 != (item *)0x0) {
                          if (piVar14->count == 0) goto LAB_00100f63;
                          goto LAB_00101e98;
                        }
                        piVar15 = zeros;
                        piVar18 = head;
                        if (((piVar14->count == 0) && (piVar14->printed == false)) &&
                           (piVar15 = piVar14, piVar18 = piVar14, head != (item *)0x0)) {
                          zeros->qlink = piVar14;
                          piVar18 = head;
                        }
                      }
                      else {
                        _Var5 = recurse_tree(piVar14->left,scan_zeros);
                        piVar3 = zeros;
                        piVar4 = head;
                        if (_Var5) goto LAB_00100a7e;
                        piVar17 = piVar14->right;
                        piVar15 = zeros;
                        piVar18 = head;
                        if (piVar14->count == 0) {
LAB_00100f63:
                          piVar15 = zeros;
                          piVar18 = head;
                          if ((piVar14->printed == false) &&
                             (piVar15 = piVar14, piVar18 = piVar14, head != (item *)0x0)) {
                            zeros->qlink = piVar14;
                            piVar18 = head;
                          }
                        }
                        head = piVar18;
                        zeros = piVar15;
                        piVar15 = zeros;
                        piVar18 = head;
                        if (piVar17 != (item *)0x0) {
LAB_00101e98:
                          _Var5 = recurse_tree(piVar17,scan_zeros);
                          piVar3 = zeros;
                          piVar15 = zeros;
                          piVar18 = head;
                          piVar4 = head;
                          if (_Var5) goto LAB_00100a7e;
                        }
                      }
                      head = piVar18;
                      zeros = piVar15;
                      piVar14 = piVar8->right;
                      piVar17 = zeros;
                      piVar15 = head;
                      if (piVar8->count == 0) {
LAB_00101eb7:
                        piVar17 = zeros;
                        piVar15 = head;
                        if ((piVar8->printed == false) &&
                           (piVar17 = piVar8, piVar15 = piVar8, head != (item *)0x0)) {
                          zeros->qlink = piVar8;
                          piVar15 = head;
                        }
                      }
                      head = piVar15;
                      zeros = piVar17;
                      piVar17 = zeros;
                      piVar15 = head;
                      if (piVar14 != (item *)0x0) {
LAB_0010339a:
                        _Var5 = recurse_tree(piVar14,scan_zeros);
                        piVar3 = zeros;
                        piVar17 = zeros;
                        piVar4 = head;
                        piVar15 = head;
                        if (_Var5) goto LAB_00100a7e;
                      }
                    }
                    head = piVar15;
                    zeros = piVar17;
                    piVar8 = unaff_R13->right;
                    piVar14 = zeros;
                    piVar17 = head;
                    if (unaff_R13->count == 0) {
LAB_00101ef1:
                      piVar14 = zeros;
                      piVar17 = head;
                      if ((unaff_R13->printed == false) &&
                         (piVar14 = unaff_R13, piVar17 = unaff_R13, head != (item *)0x0)) {
                        zeros->qlink = unaff_R13;
                        piVar14 = unaff_R13;
                        piVar17 = head;
                      }
                    }
                    head = piVar17;
                    zeros = piVar14;
                    piVar14 = zeros;
                    piVar17 = head;
                    if (piVar8 != (item *)0x0) {
LAB_0010125c:
                      if (piVar8->left == (item *)0x0) {
                        piVar15 = piVar8->right;
                        if (piVar15 != (item *)0x0) {
                          if (piVar8->count == 0) goto LAB_00101288;
                          goto LAB_00102505;
                        }
                        piVar14 = zeros;
                        piVar17 = head;
                        if (((piVar8->count == 0) && (piVar8->printed == false)) &&
                           (piVar14 = piVar8, piVar17 = piVar8, head != (item *)0x0)) {
                          zeros->qlink = piVar8;
                          piVar17 = head;
                        }
                      }
                      else {
                        _Var5 = recurse_tree(piVar8->left,scan_zeros);
                        piVar3 = zeros;
                        piVar4 = head;
                        if (_Var5) goto LAB_00100a7e;
                        piVar15 = piVar8->right;
                        piVar14 = zeros;
                        piVar17 = head;
                        if (piVar8->count == 0) {
LAB_00101288:
                          piVar14 = zeros;
                          piVar17 = head;
                          if ((piVar8->printed == false) &&
                             (piVar14 = piVar8, piVar17 = piVar8, head != (item *)0x0)) {
                            zeros->qlink = piVar8;
                            piVar17 = head;
                          }
                        }
                        head = piVar17;
                        zeros = piVar14;
                        piVar14 = zeros;
                        piVar17 = head;
                        if (piVar15 != (item *)0x0) {
LAB_00102505:
                          _Var5 = recurse_tree(piVar15,scan_zeros);
                          piVar3 = zeros;
                          piVar14 = zeros;
                          piVar4 = head;
                          piVar17 = head;
                          if (_Var5) goto LAB_00100a7e;
                        }
                      }
                    }
                  }
                  head = piVar17;
                  zeros = piVar14;
                  piVar17 = unaff_R15->right;
                  piVar8 = zeros;
                  piVar14 = head;
                  if (unaff_R15->count == 0) {
LAB_001012c2:
                    piVar8 = zeros;
                    piVar14 = head;
                    if ((unaff_R15->printed == false) &&
                       (piVar8 = unaff_R15, piVar14 = unaff_R15, head != (item *)0x0)) {
                      zeros->qlink = unaff_R15;
                      piVar8 = unaff_R15;
                      piVar14 = head;
                    }
                  }
                  head = piVar14;
                  zeros = piVar8;
                  piVar3 = zeros;
                  piVar4 = head;
                  if (piVar17 != (item *)0x0) {
LAB_001012f2:
                    unaff_R15 = piVar17->left;
                    if (unaff_R15 == (item *)0x0) {
                      unaff_R15 = piVar17->right;
                      sVar10 = piVar17->count;
                      if (unaff_R15 == (item *)0x0) goto LAB_00101ae4;
                      if (sVar10 == 0) goto LAB_001013ae;
                    }
                    else {
                      unaff_R13 = unaff_R15->left;
                      if (unaff_R13 == (item *)0x0) {
                        piVar8 = unaff_R15->right;
                        if (piVar8 != (item *)0x0) {
                          if (unaff_R15->count == 0) goto LAB_00101373;
                          goto LAB_0010243e;
                        }
                        piVar14 = zeros;
                        piVar15 = head;
                        if (((unaff_R15->count == 0) && (unaff_R15->printed == false)) &&
                           (piVar14 = unaff_R15, piVar15 = unaff_R15, head != (item *)0x0)) {
                          zeros->qlink = unaff_R15;
                          piVar14 = unaff_R15;
                          piVar15 = head;
                        }
                      }
                      else {
                        if (unaff_R13->left == (item *)0x0) {
                          piVar8 = unaff_R13->right;
                          if (piVar8 == (item *)0x0) {
                            piVar14 = zeros;
                            piVar15 = head;
                            if (((unaff_R13->count == 0) && (unaff_R13->printed == false)) &&
                               (piVar14 = unaff_R13, piVar15 = unaff_R13, head != (item *)0x0)) {
                              zeros->qlink = unaff_R13;
                              piVar14 = unaff_R13;
                              piVar15 = head;
                            }
                          }
                          else {
                            if (unaff_R13->count == 0) goto LAB_00101338;
LAB_0010283c:
                            _Var5 = recurse_tree(piVar8,scan_zeros);
                            piVar3 = zeros;
                            piVar14 = zeros;
                            piVar15 = head;
                            piVar4 = head;
                            if (_Var5) goto LAB_00100a7e;
                          }
                        }
                        else {
                          _Var5 = recurse_tree(unaff_R13->left,scan_zeros);
                          piVar3 = zeros;
                          piVar4 = head;
                          if (_Var5) goto LAB_00100a7e;
                          piVar8 = unaff_R13->right;
                          piVar14 = zeros;
                          piVar15 = head;
                          if (unaff_R13->count == 0) {
LAB_00101338:
                            piVar14 = zeros;
                            piVar15 = head;
                            if ((unaff_R13->printed == false) &&
                               (piVar14 = unaff_R13, piVar15 = unaff_R13, head != (item *)0x0)) {
                              zeros->qlink = unaff_R13;
                              piVar14 = unaff_R13;
                              piVar15 = head;
                            }
                          }
                          head = piVar15;
                          zeros = piVar14;
                          piVar14 = zeros;
                          piVar15 = head;
                          if (piVar8 != (item *)0x0) goto LAB_0010283c;
                        }
                        head = piVar15;
                        zeros = piVar14;
                        piVar8 = unaff_R15->right;
                        piVar14 = zeros;
                        piVar15 = head;
                        if (unaff_R15->count == 0) {
LAB_00101373:
                          piVar14 = zeros;
                          piVar15 = head;
                          if ((unaff_R15->printed == false) &&
                             (piVar14 = unaff_R15, piVar15 = unaff_R15, head != (item *)0x0)) {
                            zeros->qlink = unaff_R15;
                            piVar14 = unaff_R15;
                            piVar15 = head;
                          }
                        }
                        head = piVar15;
                        zeros = piVar14;
                        piVar14 = zeros;
                        piVar15 = head;
                        if (piVar8 != (item *)0x0) {
LAB_0010243e:
                          _Var5 = recurse_tree(piVar8,scan_zeros);
                          piVar3 = zeros;
                          piVar14 = zeros;
                          piVar4 = head;
                          piVar15 = head;
                          if (_Var5) goto LAB_00100a7e;
                        }
                      }
                      head = piVar15;
                      zeros = piVar14;
                      unaff_R15 = piVar17->right;
                      piVar8 = zeros;
                      piVar14 = head;
                      if (piVar17->count == 0) {
LAB_001013ae:
                        piVar8 = zeros;
                        piVar14 = head;
                        if ((piVar17->printed == false) &&
                           (piVar8 = piVar17, piVar14 = piVar17, head != (item *)0x0)) {
                          zeros->qlink = piVar17;
                          piVar14 = head;
                        }
                      }
                      head = piVar14;
                      zeros = piVar8;
                      piVar3 = zeros;
                      piVar4 = head;
                      if (unaff_R15 == (item *)0x0) goto LAB_00100a7e;
                    }
                    if (unaff_R15->left == (item *)0x0) {
                      piVar8 = unaff_R15->right;
                      sVar10 = unaff_R15->count;
                      if (piVar8 == (item *)0x0) goto LAB_001023ce;
                      if (sVar10 == 0) goto LAB_00101409;
LAB_00101439:
                      recurse_tree(piVar8,scan_zeros);
                      piVar3 = zeros;
                      piVar4 = head;
                    }
                    else {
                      _Var5 = recurse_tree(unaff_R15->left,scan_zeros);
                      piVar3 = zeros;
                      piVar4 = head;
                      if (!_Var5) {
                        piVar8 = unaff_R15->right;
                        piVar14 = zeros;
                        piVar17 = head;
                        if (unaff_R15->count == 0) {
LAB_00101409:
                          piVar14 = zeros;
                          piVar17 = head;
                          if ((unaff_R15->printed == false) &&
                             (piVar14 = unaff_R15, piVar17 = unaff_R15, head != (item *)0x0)) {
                            zeros->qlink = unaff_R15;
                            piVar14 = unaff_R15;
                            piVar17 = head;
                          }
                        }
                        head = piVar17;
                        zeros = piVar14;
                        piVar3 = zeros;
                        piVar4 = head;
                        if (piVar8 != (item *)0x0) goto LAB_00101439;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          unaff_R15 = unaff_R13->left;
          if (unaff_R15 == (item *)0x0) {
            unaff_R15 = unaff_R13->right;
            if (unaff_R15 == (item *)0x0) {
              piVar8 = zeros;
              piVar14 = head;
              if (((unaff_R13->count == 0) && (unaff_R13->printed == false)) &&
                 (piVar8 = unaff_R13, piVar14 = unaff_R13, head != (item *)0x0)) {
                zeros->qlink = unaff_R13;
                piVar8 = unaff_R13;
                piVar14 = head;
              }
            }
            else {
              if (unaff_R13->count == 0) {
LAB_001011ae:
                piVar8 = zeros;
                piVar14 = head;
                if ((unaff_R13->printed == false) &&
                   (piVar8 = unaff_R13, piVar14 = unaff_R13, head != (item *)0x0)) {
                  zeros->qlink = unaff_R13;
                  piVar8 = unaff_R13;
                  piVar14 = head;
                }
                goto LAB_001011d5;
              }
LAB_00102076:
              if (unaff_R15->left == (item *)0x0) {
                piVar15 = unaff_R15->right;
                if (piVar15 == (item *)0x0) {
                  piVar8 = zeros;
                  piVar14 = head;
                  if (((unaff_R15->count == 0) && (unaff_R15->printed == false)) &&
                     (piVar8 = unaff_R15, piVar14 = unaff_R15, head != (item *)0x0)) {
                    zeros->qlink = unaff_R15;
                    piVar8 = unaff_R15;
                    piVar14 = head;
                  }
                }
                else {
                  if (unaff_R15->count == 0) goto LAB_001020a2;
LAB_00102f39:
                  _Var5 = recurse_tree(piVar15,scan_zeros);
                  piVar3 = zeros;
                  piVar8 = zeros;
                  piVar4 = head;
                  piVar14 = head;
                  if (_Var5) goto LAB_00100a7e;
                }
              }
              else {
                _Var5 = recurse_tree(unaff_R15->left,scan_zeros);
                piVar3 = zeros;
                piVar4 = head;
                if (_Var5) goto LAB_00100a7e;
                piVar15 = unaff_R15->right;
                piVar8 = zeros;
                piVar14 = head;
                if (unaff_R15->count == 0) {
LAB_001020a2:
                  piVar8 = zeros;
                  piVar14 = head;
                  if ((unaff_R15->printed == false) &&
                     (piVar8 = unaff_R15, piVar14 = unaff_R15, head != (item *)0x0)) {
                    zeros->qlink = unaff_R15;
                    piVar8 = unaff_R15;
                    piVar14 = head;
                  }
                }
                head = piVar14;
                zeros = piVar8;
                piVar8 = zeros;
                piVar14 = head;
                if (piVar15 != (item *)0x0) goto LAB_00102f39;
              }
            }
LAB_001020d2:
            head = piVar14;
            zeros = piVar8;
            unaff_R15 = piVar17->right;
            piVar8 = zeros;
            piVar14 = head;
            if (piVar17->count == 0) goto LAB_001020dd;
LAB_00102103:
            head = piVar14;
            zeros = piVar8;
            piVar8 = zeros;
            piVar14 = head;
            if (unaff_R15 == (item *)0x0) goto LAB_00100a44;
            goto LAB_00101b60;
          }
          if (unaff_R15->left == (item *)0x0) {
            piVar8 = unaff_R15->right;
            if (piVar8 == (item *)0x0) {
              piVar14 = zeros;
              piVar15 = head;
              if (((unaff_R15->count == 0) && (unaff_R15->printed == false)) &&
                 (piVar14 = unaff_R15, piVar15 = unaff_R15, head != (item *)0x0)) {
                zeros->qlink = unaff_R15;
                piVar14 = unaff_R15;
                piVar15 = head;
              }
            }
            else {
              if (unaff_R15->count == 0) {
LAB_00101173:
                piVar14 = zeros;
                piVar15 = head;
                if ((unaff_R15->printed == false) &&
                   (piVar14 = unaff_R15, piVar15 = unaff_R15, head != (item *)0x0)) {
                  zeros->qlink = unaff_R15;
                  piVar14 = unaff_R15;
                  piVar15 = head;
                }
                goto LAB_0010119a;
              }
LAB_00103426:
              _Var5 = recurse_tree(piVar8,scan_zeros);
              piVar3 = zeros;
              piVar14 = zeros;
              piVar4 = head;
              piVar15 = head;
              if (_Var5) goto LAB_00100a7e;
            }
LAB_001011a3:
            head = piVar15;
            zeros = piVar14;
            unaff_R15 = unaff_R13->right;
            piVar8 = zeros;
            piVar14 = head;
            if (unaff_R13->count == 0) goto LAB_001011ae;
LAB_001011d5:
            head = piVar14;
            zeros = piVar8;
            piVar8 = zeros;
            piVar14 = head;
            if (unaff_R15 != (item *)0x0) goto LAB_00102076;
            goto LAB_001020d2;
          }
          _Var5 = recurse_tree(unaff_R15->left,scan_zeros);
          piVar3 = zeros;
          piVar4 = head;
          if (!_Var5) {
            piVar8 = unaff_R15->right;
            piVar14 = zeros;
            piVar15 = head;
            if (unaff_R15->count == 0) goto LAB_00101173;
LAB_0010119a:
            head = piVar15;
            zeros = piVar14;
            piVar14 = zeros;
            piVar15 = head;
            if (piVar8 != (item *)0x0) goto LAB_00103426;
            goto LAB_001011a3;
          }
        }
LAB_00100a7e:
        head = piVar4;
        zeros = piVar3;
        sVar10 = n_strings;
      } while (head == (item *)0x0);
    } while( true );
  }
  goto LAB_00103088;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *file;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar1 = proper_name_lite("Mark Kettenis","Mark Kettenis");
  parse_gnu_standard_options_only(argc,argv,"tsort","GNU coreutils",_Version,1,usage,uVar1,0);
  if (argc - _optind < 2) {
    file = "-";
    if (_optind != argc) {
      file = argv[_optind];
    }
                    /* WARNING: Subroutine does not return */
    tsort(file);
  }
  uVar1 = quote(argv[(long)_optind + 1]);
  uVar2 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar2,uVar1);
                    /* WARNING: Subroutine does not return */
  usage(1);
}


