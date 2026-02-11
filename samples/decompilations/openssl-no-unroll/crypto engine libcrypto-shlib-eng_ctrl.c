
int ENGINE_ctrl(ENGINE *e,int cmd,long i,void *p,f *f)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_ctrl.c",0x85,"ENGINE_ctrl");
    ERR_set_error(0x26,0xc0102,0);
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(e + 0x70);
  if (cmd == 10) {
    return (uint)(UNRECOVERED_JUMPTABLE != (code *)0x0);
  }
  if (7 < cmd - 0xbU) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/engine/eng_ctrl.c",0xaa,"ENGINE_ctrl");
      ERR_set_error(0x26,0x78,0);
      return 0;
    }
LAB_00100040:
                    /* WARNING: Could not recover jumptable at 0x00100048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar5 = (*UNRECOVERED_JUMPTABLE)();
    return iVar5;
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_ctrl.c",0x9d,"ENGINE_ctrl");
    ERR_set_error(0x26,0x78,0);
    return -1;
  }
  if ((*(uint *)(e + 0x98) & 2) != 0) goto LAB_00100040;
  if (cmd == 0xb) {
    puVar2 = *(uint **)(e + 0x90);
    if (puVar2 == (uint *)0x0) {
      return 0;
    }
    uVar10 = *puVar2;
    if (uVar10 == 0) {
      return 0;
    }
    lVar4 = *(long *)(puVar2 + 2);
joined_r0x0010019f:
    if (lVar4 == 0) {
      return 0;
    }
    return uVar10;
  }
  if ((cmd & 0xfffffffdU) == 0xd) {
    if (p == (void *)0x0) goto LAB_0010035c;
    if (cmd == 0xd) {
      piVar3 = *(int **)(e + 0x90);
      if (piVar3 != (int *)0x0) {
        iVar7 = 0;
        iVar5 = *piVar3;
        piVar8 = piVar3;
        while (iVar5 != 0) {
          if ((*(char **)(piVar8 + 2) == (char *)0x0) ||
             (iVar5 = strcmp(*(char **)(piVar8 + 2),(char *)p), iVar5 == 0)) {
            if (*(long *)(piVar8 + 2) != 0) {
              return piVar3[(long)iVar7 * 8];
            }
            break;
          }
          piVar1 = piVar8 + 8;
          piVar8 = piVar8 + 8;
          iVar7 = iVar7 + 1;
          iVar5 = *piVar1;
        }
      }
      ERR_new();
      ERR_set_debug("crypto/engine/eng_ctrl.c",0x5a,"int_ctrl_helper");
      ERR_set_error(0x26,0x89,0);
      return -1;
    }
  }
  else if ((cmd == 0x11) && (p == (void *)0x0)) {
LAB_0010035c:
    ERR_new();
    ERR_set_debug("crypto/engine/eng_ctrl.c",0x52,"int_ctrl_helper");
    ERR_set_error(0x26,0xc0102,0);
    return -1;
  }
  puVar2 = *(uint **)(e + 0x90);
  if (puVar2 == (uint *)0x0) {
LAB_00100143:
    ERR_new();
    ERR_set_debug("crypto/engine/eng_ctrl.c",0x65,"int_ctrl_helper");
    ERR_set_error(0x26,0x8a,0);
    return -1;
  }
  uVar10 = *puVar2;
  if (uVar10 != 0) {
    iVar5 = 0;
    puVar11 = puVar2;
    do {
      if ((*(long *)(puVar11 + 2) == 0) || ((uint)i <= uVar10)) goto LAB_001001ac;
      uVar10 = puVar11[8];
      puVar11 = puVar11 + 8;
      iVar5 = iVar5 + 1;
    } while (uVar10 != 0);
    goto LAB_00100143;
  }
  iVar5 = 0;
LAB_001001ac:
  if ((uint)i != uVar10) goto LAB_00100143;
  switch(cmd) {
  case 0xc:
    uVar10 = puVar2[(long)iVar5 * 8 + 8];
    if (uVar10 == 0) {
      return 0;
    }
    lVar4 = *(long *)(puVar2 + (long)iVar5 * 8 + 10);
    goto joined_r0x0010019f;
  default:
    ERR_new();
    ERR_set_debug("crypto/engine/eng_ctrl.c",0x7c,"int_ctrl_helper");
    ERR_set_error(0x26,0x6e,0);
    return -1;
  case 0xe:
    sVar6 = strlen(*(char **)(puVar2 + (long)iVar5 * 8 + 2));
    return (int)sVar6;
  case 0xf:
    pcVar9 = *(char **)(puVar2 + (long)iVar5 * 8 + 2);
    break;
  case 0x10:
    pcVar9 = *(char **)(puVar2 + (long)iVar5 * 8 + 4);
    if (pcVar9 == (char *)0x0) {
      return 0;
    }
    goto LAB_001001fc;
  case 0x11:
    pcVar9 = *(char **)(puVar2 + (long)iVar5 * 8 + 4);
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "";
    }
    break;
  case 0x12:
    return puVar2[(long)iVar5 * 8 + 6];
  }
  pcVar9 = strcpy((char *)p,pcVar9);
LAB_001001fc:
  sVar6 = strlen(pcVar9);
  return (int)sVar6;
}



int ENGINE_cmd_is_executable(ENGINE *e,int cmd)

{
  uint uVar1;
  
  uVar1 = ENGINE_ctrl(e,0x12,(long)cmd,(void *)0x0,(f *)0x0);
  if (-1 < (int)uVar1) {
    return (int)((uVar1 & 7) != 0);
  }
  ERR_new();
  ERR_set_debug("crypto/engine/eng_ctrl.c",0xb5,"ENGINE_cmd_is_executable");
  ERR_set_error(0x26,0x8a,0);
  return 0;
}



int ENGINE_ctrl_cmd(ENGINE *e,char *cmd_name,long i,void *p,f *f,int cmd_optional)

{
  int iVar1;
  
  if ((e == (ENGINE *)0x0) || (cmd_name == (char *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_ctrl.c",0xc5,"ENGINE_ctrl_cmd");
    ERR_set_error(0x26,0xc0102,0);
  }
  else {
    if (*(long *)(e + 0x70) != 0) {
      iVar1 = ENGINE_ctrl(e,0xd,0,cmd_name,(f *)0x0);
      if (0 < iVar1) {
        iVar1 = ENGINE_ctrl(e,iVar1,i,p,f);
        return (int)(0 < iVar1);
      }
    }
    if (cmd_optional != 0) {
      ERR_clear_error();
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/engine/eng_ctrl.c",0xd7,"ENGINE_ctrl_cmd");
    ERR_set_error(0x26,0x89,0);
  }
  return 0;
}



int ENGINE_ctrl_cmd_string(ENGINE *e,char *cmd_name,char *arg,int cmd_optional)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long i;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((e == (ENGINE *)0x0) || (cmd_name == (char *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_ctrl.c",0xeb,"ENGINE_ctrl_cmd_string");
    ERR_set_error(0x26,0xc0102,0);
    goto LAB_001005c0;
  }
  if (*(long *)(e + 0x70) == 0) {
LAB_0010057c:
    if (cmd_optional != 0) {
      ERR_clear_error();
      uVar3 = 1;
      goto LAB_001005c2;
    }
    ERR_new();
    ERR_set_debug("crypto/engine/eng_ctrl.c",0xfd,"ENGINE_ctrl_cmd_string");
    ERR_set_error(0x26,0x89,0);
  }
  else {
    iVar1 = ENGINE_ctrl(e,0xd,0,cmd_name,(f *)0x0);
    if (iVar1 < 1) goto LAB_0010057c;
    iVar2 = ENGINE_cmd_is_executable(e,iVar1);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/engine/eng_ctrl.c",0x101,"ENGINE_ctrl_cmd_string");
      ERR_set_error(0x26,0x86,0);
    }
    else {
      uVar3 = ENGINE_ctrl(e,0x12,(long)iVar1,(void *)0x0,(f *)0x0);
      if ((int)uVar3 < 0) {
        ERR_new();
        uVar4 = 0x10b;
LAB_00100759:
        ERR_set_debug("crypto/engine/eng_ctrl.c",uVar4,"ENGINE_ctrl_cmd_string");
        ERR_set_error(0x26,0x6e,0);
      }
      else if ((uVar3 & 4) == 0) {
        if (arg != (char *)0x0) {
          if ((uVar3 & 2) == 0) {
            if ((uVar3 & 1) == 0) {
              ERR_new();
              uVar4 = 0x133;
              goto LAB_00100759;
            }
            i = strtol(arg,&local_38,10);
            if ((local_38 == arg) || (*local_38 != '\0')) {
              ERR_new();
              ERR_set_debug("crypto/engine/eng_ctrl.c",0x138,"ENGINE_ctrl_cmd_string");
              ERR_set_error(0x26,0x85,0);
              goto LAB_001005c0;
            }
            arg = (char *)0x0;
          }
          else {
            i = 0;
          }
LAB_001006a0:
          iVar1 = ENGINE_ctrl(e,iVar1,i,arg,(f *)0x0);
          uVar3 = (uint)(0 < iVar1);
          goto LAB_001005c2;
        }
        ERR_new();
        ERR_set_debug("crypto/engine/eng_ctrl.c",0x122,"ENGINE_ctrl_cmd_string");
        ERR_set_error(0x26,0x87,0);
      }
      else {
        if (arg == (char *)0x0) {
          arg = (char *)0x0;
          i = 0;
          goto LAB_001006a0;
        }
        ERR_new();
        ERR_set_debug("crypto/engine/eng_ctrl.c",0x113,"ENGINE_ctrl_cmd_string");
        ERR_set_error(0x26,0x88,0);
      }
    }
  }
LAB_001005c0:
  uVar3 = 0;
LAB_001005c2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


