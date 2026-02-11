
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



undefined8 recurse_tree_constprop_1(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  
LAB_0010053d:
  do {
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      lVar2 = n_strings;
    }
    else {
      lVar2 = *(long *)(lVar1 + 8);
      if (lVar2 == 0) {
        lVar1 = *(long *)(lVar1 + 0x10);
        lVar2 = n_strings;
      }
      else {
        lVar3 = *(long *)(lVar2 + 8);
        if (lVar3 == 0) {
          lVar2 = *(long *)(lVar2 + 0x10);
        }
        else {
          if (*(long *)(lVar3 + 8) == 0) {
            lVar3 = *(long *)(lVar3 + 0x10);
          }
          else {
            cVar4 = recurse_tree_constprop_1();
            if (cVar4 != '\0') {
              return 1;
            }
            lVar3 = *(long *)(lVar3 + 0x10);
          }
          n_strings = n_strings + 1;
          if ((lVar3 != 0) && (cVar4 = recurse_tree_constprop_1(), cVar4 != '\0')) {
            return 1;
          }
          lVar2 = *(long *)(lVar2 + 0x10);
        }
        n_strings = n_strings + 1;
        if ((lVar2 != 0) && (cVar4 = recurse_tree_constprop_1(), cVar4 != '\0')) {
          return 1;
        }
        lVar1 = *(long *)(lVar1 + 0x10);
        lVar2 = n_strings;
      }
      n_strings = lVar2 + 1;
      if (lVar1 != 0) {
        if (*(long *)(lVar1 + 8) == 0) {
          if (*(long *)(lVar1 + 0x10) != 0) {
            n_strings = lVar2 + 2;
            goto LAB_0010078c;
          }
          n_strings = lVar2 + 2;
        }
        else {
          cVar4 = recurse_tree_constprop_1();
          if (cVar4 != '\0') {
            return 1;
          }
          n_strings = n_strings + 1;
          if (*(long *)(lVar1 + 0x10) != 0) {
LAB_0010078c:
            cVar4 = recurse_tree_constprop_1();
            if (cVar4 != '\0') {
              return 1;
            }
          }
        }
      }
      lVar1 = *(long *)(param_1 + 0x10);
      lVar2 = n_strings;
    }
    n_strings = lVar2 + 1;
    if (lVar1 == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar1 + 8);
    if (lVar3 == 0) {
      param_1 = *(long *)(lVar1 + 0x10);
      if (param_1 == 0) {
        n_strings = lVar2 + 2;
        return 0;
      }
      n_strings = lVar2 + 2;
      goto LAB_0010053d;
    }
    if (*(long *)(lVar3 + 8) == 0) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        n_strings = lVar2 + 2;
        goto LAB_00100758;
      }
      param_1 = *(long *)(lVar1 + 0x10);
      n_strings = lVar2 + 2;
    }
    else {
      cVar4 = recurse_tree_constprop_1();
      if (cVar4 != '\0') {
        return 1;
      }
      n_strings = n_strings + 1;
      if (*(long *)(lVar3 + 0x10) == 0) {
        param_1 = *(long *)(lVar1 + 0x10);
      }
      else {
LAB_00100758:
        cVar4 = recurse_tree_constprop_1();
        if (cVar4 != '\0') {
          return 1;
        }
        param_1 = *(long *)(lVar1 + 0x10);
      }
    }
    n_strings = n_strings + 1;
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}



undefined8 recurse_tree_constprop_0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = zeros;
  lVar7 = head;
LAB_0010081d:
  do {
    head = lVar7;
    zeros = lVar6;
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) {
        if (*(long *)(param_1 + 0x20) != 0) {
          return 0;
        }
        if (*(char *)(param_1 + 0x19) != '\0') {
          return 0;
        }
        lVar6 = param_1;
        if (head != 0) {
          *(long *)(zeros + 0x28) = param_1;
          lVar6 = head;
        }
        head = lVar6;
        zeros = param_1;
        return 0;
      }
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_001008fa:
        lVar7 = zeros;
        lVar8 = head;
        if ((*(char *)(param_1 + 0x19) == '\0') && (lVar7 = param_1, lVar8 = param_1, head != 0)) {
          *(long *)(zeros + 0x28) = param_1;
          lVar7 = param_1;
          lVar8 = head;
        }
        goto joined_r0x00100a2d;
      }
    }
    else {
      lVar7 = *(long *)(lVar6 + 8);
      if (lVar7 == 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        if (lVar7 != 0) {
          if (*(long *)(lVar6 + 0x20) == 0) goto LAB_001008c0;
          goto LAB_001009ea;
        }
        lVar5 = zeros;
        lVar8 = head;
        if (((*(long *)(lVar6 + 0x20) == 0) && (*(char *)(lVar6 + 0x19) == '\0')) &&
           (lVar5 = lVar6, lVar8 = lVar6, head != 0)) {
          *(long *)(zeros + 0x28) = lVar6;
          lVar8 = head;
        }
        goto LAB_00100a1b;
      }
      lVar5 = *(long *)(lVar7 + 8);
      if (lVar5 == 0) {
        lVar5 = *(long *)(lVar7 + 0x10);
        if (lVar5 != 0) {
          if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00100884;
          goto LAB_00100a5c;
        }
        lVar8 = zeros;
        lVar2 = head;
        if (((*(long *)(lVar7 + 0x20) == 0) && (*(char *)(lVar7 + 0x19) == '\0')) &&
           (lVar8 = lVar7, lVar2 = lVar7, head != 0)) {
          *(long *)(zeros + 0x28) = lVar7;
          lVar2 = head;
        }
      }
      else {
        if (*(long *)(lVar5 + 8) == 0) {
          lVar8 = *(long *)(lVar5 + 0x10);
          if (lVar8 != 0) {
            if (*(long *)(lVar5 + 0x20) == 0) goto LAB_00100b00;
            goto LAB_00100c4a;
          }
          lVar2 = zeros;
          lVar3 = head;
          if (((*(long *)(lVar5 + 0x20) == 0) && (*(char *)(lVar5 + 0x19) == '\0')) &&
             (lVar2 = lVar5, lVar3 = lVar5, head != 0)) {
            *(long *)(zeros + 0x28) = lVar5;
            lVar3 = head;
          }
        }
        else {
          cVar4 = recurse_tree_constprop_0();
          if (cVar4 != '\0') {
            return 1;
          }
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar2 = zeros;
          lVar3 = head;
          if (*(long *)(lVar5 + 0x20) == 0) {
LAB_00100b00:
            lVar2 = zeros;
            lVar3 = head;
            if ((*(char *)(lVar5 + 0x19) == '\0') && (lVar2 = lVar5, lVar3 = lVar5, head != 0)) {
              *(long *)(zeros + 0x28) = lVar5;
              lVar3 = head;
            }
          }
          head = lVar3;
          zeros = lVar2;
          lVar2 = zeros;
          lVar3 = head;
          if (lVar8 != 0) {
LAB_00100c4a:
            cVar4 = recurse_tree_constprop_0();
            lVar2 = zeros;
            lVar3 = head;
            if (cVar4 != '\0') {
              return 1;
            }
          }
        }
        head = lVar3;
        zeros = lVar2;
        lVar5 = *(long *)(lVar7 + 0x10);
        lVar8 = zeros;
        lVar2 = head;
        if (*(long *)(lVar7 + 0x20) == 0) {
LAB_00100884:
          lVar8 = zeros;
          lVar2 = head;
          if ((*(char *)(lVar7 + 0x19) == '\0') && (lVar8 = lVar7, lVar2 = lVar7, head != 0)) {
            *(long *)(zeros + 0x28) = lVar7;
            lVar2 = head;
          }
        }
        head = lVar2;
        zeros = lVar8;
        lVar8 = zeros;
        lVar2 = head;
        if (lVar5 != 0) {
LAB_00100a5c:
          cVar4 = recurse_tree_constprop_0();
          lVar8 = zeros;
          lVar2 = head;
          if (cVar4 != '\0') {
            return 1;
          }
        }
      }
      head = lVar2;
      zeros = lVar8;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar5 = zeros;
      lVar8 = head;
      if (*(long *)(lVar6 + 0x20) == 0) {
LAB_001008c0:
        lVar5 = zeros;
        lVar8 = head;
        if ((*(char *)(lVar6 + 0x19) == '\0') && (lVar5 = lVar6, lVar8 = lVar6, head != 0)) {
          *(long *)(zeros + 0x28) = lVar6;
          lVar8 = head;
        }
      }
      head = lVar8;
      zeros = lVar5;
      if (lVar7 == 0) {
        lVar6 = *(long *)(param_1 + 0x20);
        lVar5 = *(long *)(param_1 + 0x10);
      }
      else {
LAB_001009ea:
        if (*(long *)(lVar7 + 8) == 0) {
          lVar6 = *(long *)(lVar7 + 0x10);
          if (lVar6 != 0) {
            if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00100a90;
            goto LAB_00100c1c;
          }
          lVar5 = zeros;
          lVar8 = head;
          if (((*(long *)(lVar7 + 0x20) == 0) && (*(char *)(lVar7 + 0x19) == '\0')) &&
             (lVar5 = lVar7, lVar8 = lVar7, head != 0)) {
            *(long *)(zeros + 0x28) = lVar7;
            lVar8 = head;
          }
        }
        else {
          cVar4 = recurse_tree_constprop_0();
          if (cVar4 != '\0') {
            return 1;
          }
          lVar6 = *(long *)(lVar7 + 0x10);
          lVar5 = zeros;
          lVar8 = head;
          if (*(long *)(lVar7 + 0x20) == 0) {
LAB_00100a90:
            lVar5 = zeros;
            lVar8 = head;
            if ((*(char *)(lVar7 + 0x19) == '\0') && (lVar5 = lVar7, lVar8 = lVar7, head != 0)) {
              *(long *)(zeros + 0x28) = lVar7;
              lVar8 = head;
            }
          }
          head = lVar8;
          zeros = lVar5;
          lVar5 = zeros;
          lVar8 = head;
          if (lVar6 != 0) {
LAB_00100c1c:
            cVar4 = recurse_tree_constprop_0();
            lVar5 = zeros;
            lVar8 = head;
            if (cVar4 != '\0') {
              return 1;
            }
          }
        }
LAB_00100a1b:
        head = lVar8;
        zeros = lVar5;
        lVar6 = *(long *)(param_1 + 0x20);
        lVar5 = *(long *)(param_1 + 0x10);
      }
      lVar7 = zeros;
      lVar8 = head;
      if (lVar6 == 0) goto LAB_001008fa;
joined_r0x00100a2d:
      head = lVar8;
      zeros = lVar7;
      if (lVar5 == 0) {
        return 0;
      }
    }
    lVar6 = *(long *)(lVar5 + 8);
    if (lVar6 == 0) {
      param_1 = *(long *)(lVar5 + 0x10);
      if (param_1 == 0) {
        if ((*(long *)(lVar5 + 0x20) == 0) && (*(char *)(lVar5 + 0x19) == '\0')) {
          lVar6 = lVar5;
          if (head != 0) {
            *(long *)(zeros + 0x28) = lVar5;
            lVar6 = head;
          }
          head = lVar6;
          zeros = lVar5;
          return 0;
        }
        return 0;
      }
      lVar6 = zeros;
      lVar7 = head;
      if (((*(long *)(lVar5 + 0x20) == 0) && (*(char *)(lVar5 + 0x19) == '\0')) &&
         (lVar6 = lVar5, lVar7 = lVar5, head != 0)) {
        plVar1 = (long *)(zeros + 0x28);
        zeros = lVar5;
        *plVar1 = lVar5;
        lVar6 = zeros;
        lVar7 = head;
      }
      goto LAB_0010081d;
    }
    if (*(long *)(lVar6 + 8) == 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      if (lVar7 != 0) {
        if (*(long *)(lVar6 + 0x20) == 0) goto LAB_00100ac8;
        goto LAB_00100bdc;
      }
      param_1 = *(long *)(lVar5 + 0x10);
      lVar7 = zeros;
      lVar8 = head;
      if (((*(long *)(lVar6 + 0x20) == 0) && (*(char *)(lVar6 + 0x19) == '\0')) &&
         (lVar7 = lVar6, lVar8 = lVar6, head != 0)) {
        *(long *)(zeros + 0x28) = lVar6;
        lVar8 = head;
      }
    }
    else {
      cVar4 = recurse_tree_constprop_0();
      if (cVar4 != '\0') {
        return 1;
      }
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = zeros;
      lVar2 = head;
      if (*(long *)(lVar6 + 0x20) == 0) {
LAB_00100ac8:
        lVar8 = zeros;
        lVar2 = head;
        if ((*(char *)(lVar6 + 0x19) == '\0') && (lVar8 = lVar6, lVar2 = lVar6, head != 0)) {
          *(long *)(zeros + 0x28) = lVar6;
          lVar2 = head;
        }
      }
      head = lVar2;
      zeros = lVar8;
      if (lVar7 != 0) {
LAB_00100bdc:
        cVar4 = recurse_tree_constprop_0();
        if (cVar4 != '\0') {
          return 1;
        }
      }
      param_1 = *(long *)(lVar5 + 0x10);
      lVar7 = zeros;
      lVar8 = head;
    }
    head = lVar8;
    zeros = lVar7;
    lVar6 = zeros;
    lVar7 = head;
    if (((*(long *)(lVar5 + 0x20) == 0) && (*(char *)(lVar5 + 0x19) == '\0')) &&
       (lVar6 = lVar5, lVar7 = lVar5, head != 0)) {
      *(long *)(zeros + 0x28) = lVar5;
      lVar7 = head;
    }
    head = lVar7;
    zeros = lVar6;
    lVar6 = zeros;
    lVar7 = head;
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void main(int param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  bool bVar7;
  char *__s1;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  long in_FS_OFFSET;
  undefined8 *local_78;
  char *local_68;
  int local_60;
  int local_5c;
  undefined1 local_58 [8];
  char *local_50;
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  uVar9 = proper_name_lite("Mark Kettenis","Mark Kettenis");
  parse_gnu_standard_options_only(param_1,param_2,"tsort","GNU coreutils",_Version,1,usage,uVar9,0);
  if (1 < param_1 - _optind) {
    uVar9 = quote(param_2[(long)_optind + 1]);
    uVar17 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar17,uVar9);
    usage(1);
LAB_00101852:
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 < cmp","src/tsort.c",0xb5,"search_item");
  }
  if (_optind == param_1) {
    local_78 = (undefined8 *)xzalloc(0x38);
    local_5c = 0;
    local_68 = "-";
  }
  else {
    local_68 = (char *)param_2[_optind];
    local_5c = strcmp(local_68,"-");
    local_78 = (undefined8 *)xzalloc(0x38);
    if ((local_5c != 0) && (lVar10 = freopen_safer(local_68,&_LC30,_stdin), lVar10 == 0))
    goto LAB_00101890;
  }
  fadvise(_stdin,2);
  init_tokenbuffer();
LAB_00101351:
  puVar14 = (undefined8 *)0x0;
LAB_00101358:
  do {
    puVar21 = puVar14;
    lVar10 = readtoken(_stdin,&_LC31,3,local_58);
    __s1 = local_50;
    if (lVar10 == -1) {
      if ((*_stdin & 0x20) != 0) goto LAB_001018c1;
      if (puVar21 != (undefined8 *)0x0) goto LAB_00101904;
      lVar10 = local_78[2];
      if (lVar10 != 0) {
        recurse_tree_constprop_1(lVar10);
      }
      uVar18 = 1;
      goto LAB_00101699;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("len != 0","src/tsort.c",0x1ca,"tsort");
    }
    puVar13 = (undefined8 *)local_78[2];
    puVar19 = local_78;
    puVar14 = puVar13;
    if (puVar13 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)xzalloc(0x38);
      if (__s1 != (char *)0x0) {
        uVar9 = xstrdup(__s1);
        *puVar14 = uVar9;
      }
      local_78[2] = puVar14;
    }
    else {
      while( true ) {
        puVar11 = puVar14;
        iVar8 = strcmp(__s1,(char *)*puVar11);
        puVar14 = puVar11;
        if (iVar8 == 0) break;
        puVar14 = (undefined8 *)puVar11[2];
        if (iVar8 < 0) {
          puVar14 = (undefined8 *)puVar11[1];
        }
        if (puVar14 == (undefined8 *)0x0) {
          puVar14 = (undefined8 *)xzalloc(0x38);
          uVar9 = xstrdup(__s1);
          *puVar14 = uVar9;
          if (iVar8 < 0) {
            puVar11[1] = puVar14;
            iVar8 = strcmp(__s1,(char *)*puVar13);
            if (-1 < iVar8) goto LAB_00101425;
LAB_00101590:
            puVar11 = (undefined8 *)puVar13[1];
            local_60 = -1;
          }
          else {
            puVar11[2] = puVar14;
            iVar8 = strcmp(__s1,(char *)*puVar13);
            if (iVar8 < 0) goto LAB_00101590;
LAB_00101425:
            if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("0 < a","src/tsort.c",0xa6,"search_item");
            }
            puVar11 = (undefined8 *)puVar13[2];
            local_60 = 1;
          }
          puVar12 = puVar11;
          if (puVar11 == puVar14) goto LAB_00101481;
          goto LAB_00101464;
        }
        if (*(char *)(puVar14 + 3) != '\0') {
          puVar13 = puVar14;
          puVar19 = puVar11;
        }
      }
    }
  } while (puVar21 == (undefined8 *)0x0);
  goto LAB_00101531;
LAB_00101699:
  puVar14 = head;
  if (n_strings == 0) {
LAB_00101752:
    head = puVar14;
    iVar8 = rpl_fclose(_stdin);
    if (iVar8 != 0) {
      do {
        if (local_5c == 0) {
          uVar9 = dcgettext(0,"standard input",5);
        }
        else {
LAB_00101890:
          uVar9 = quotearg_n_style_colon(0,3,local_68);
        }
        piVar16 = __errno_location();
        error(1,*piVar16,&_LC0,uVar9);
LAB_001018c1:
        uVar9 = quotearg_n_style_colon(0,3,local_68);
        uVar17 = dcgettext(0,"%s: read error",5);
        piVar16 = __errno_location();
        error(1,*piVar16,uVar17,uVar9);
LAB_00101904:
        uVar9 = quotearg_n_style_colon(0,3,local_68);
        uVar17 = dcgettext(0,"%s: input contains an odd number of tokens",5);
        error(1,0,uVar17,uVar9);
      } while( true );
    }
                    /* WARNING: Subroutine does not return */
    exit(uVar18 ^ 1);
  }
  if (lVar10 != 0) {
    recurse_tree_constprop_0(lVar10);
  }
  if (head != (undefined8 *)0x0) {
    do {
      plVar20 = (long *)head[6];
      puts((char *)*head);
      lVar15 = zeros;
      bVar7 = false;
      lVar1 = n_strings + -1;
      *(undefined1 *)((long)head + 0x19) = 1;
      n_strings = lVar1;
      if (plVar20 != (long *)0x0) {
        do {
          lVar6 = *plVar20;
          plVar2 = (long *)(lVar6 + 0x20);
          *plVar2 = *plVar2 + -1;
          lVar3 = *plVar2;
          while (lVar3 == 0) {
            plVar20 = (long *)plVar20[1];
            *(long *)(lVar15 + 0x28) = lVar6;
            lVar15 = lVar6;
            if (plVar20 == (long *)0x0) goto LAB_0010177b;
            lVar6 = *plVar20;
            bVar7 = true;
            plVar2 = (long *)(lVar6 + 0x20);
            *plVar2 = *plVar2 + -1;
            lVar3 = *plVar2;
          }
          plVar20 = (long *)plVar20[1];
        } while (plVar20 != (long *)0x0);
        if (bVar7) {
LAB_0010177b:
          zeros = lVar15;
        }
      }
      head = (undefined8 *)head[5];
    } while (head != (undefined8 *)0x0);
    puVar14 = (undefined8 *)0x0;
    if (lVar1 == 0) goto LAB_00101752;
  }
  uVar9 = quotearg_n_style_colon(0,3,local_68);
  uVar17 = dcgettext(0,"%s: input contains a loop:",5);
  uVar18 = 0;
  error(0,0,uVar17,uVar9);
  do {
    if (lVar10 != 0) {
      recurse_tree(lVar10,detect_loop);
    }
  } while (loop != 0);
  goto LAB_00101699;
LAB_00101464:
  do {
    iVar8 = strcmp(__s1,(char *)*puVar12);
    if (iVar8 < 0) {
      *(undefined1 *)(puVar12 + 3) = 0xff;
      puVar12 = (undefined8 *)puVar12[1];
    }
    else {
      if (iVar8 == 0) goto LAB_00101852;
      *(undefined1 *)(puVar12 + 3) = 1;
      puVar12 = (undefined8 *)puVar12[2];
    }
  } while (puVar14 != puVar12);
LAB_00101481:
  cVar4 = *(char *)(puVar13 + 3);
  if ((cVar4 == '\0') || ((int)cVar4 == -local_60)) {
    *(char *)(puVar13 + 3) = cVar4 + (char)local_60;
  }
  else {
    if (local_60 == *(char *)(puVar11 + 3)) {
      if (local_60 == -1) {
        puVar13[1] = puVar11[2];
        puVar11[2] = puVar13;
      }
      else {
        puVar13[2] = puVar11[1];
        puVar11[1] = puVar13;
      }
      *(undefined1 *)(puVar11 + 3) = 0;
      *(undefined1 *)(puVar13 + 3) = 0;
      puVar5 = (undefined8 *)puVar19[2];
      puVar12 = puVar11;
    }
    else {
      puVar5 = (undefined8 *)puVar11[1];
      puVar12 = (undefined8 *)puVar11[2];
      if (local_60 == -1) {
        puVar11[2] = puVar12[1];
        puVar12[1] = puVar11;
        puVar13[1] = puVar12[2];
        puVar12[2] = puVar13;
      }
      else {
        puVar11[1] = puVar5[2];
        puVar5[2] = puVar11;
        puVar13[2] = puVar5[1];
        puVar5[1] = puVar13;
        puVar12 = puVar5;
      }
      *(undefined1 *)(puVar13 + 3) = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
      if (local_60 == *(char *)(puVar12 + 3)) {
        *(char *)(puVar13 + 3) = -(char)local_60;
      }
      else if (-local_60 == (int)*(char *)(puVar12 + 3)) {
        *(char *)(puVar11 + 3) = (char)local_60;
      }
      *(undefined1 *)(puVar12 + 3) = 0;
      puVar5 = (undefined8 *)puVar19[2];
    }
    if (puVar5 == puVar13) {
      puVar19[2] = puVar12;
    }
    else {
      puVar19[1] = puVar12;
    }
  }
  if (puVar21 != (undefined8 *)0x0) goto LAB_00101531;
  goto LAB_00101358;
LAB_00101531:
  iVar8 = strcmp((char *)*puVar21,(char *)*puVar14);
  if (iVar8 != 0) {
    puVar14[4] = puVar14[4] + 1;
    puVar13 = (undefined8 *)xmalloc(0x10);
    uVar9 = puVar21[6];
    *puVar13 = puVar14;
    puVar13[1] = uVar9;
    puVar21[6] = puVar13;
  }
  goto LAB_00101351;
}


