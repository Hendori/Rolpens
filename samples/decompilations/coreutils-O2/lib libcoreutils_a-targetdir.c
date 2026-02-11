
bool target_dirfd_valid(int param_1)

{
  return param_1 != -1;
}



int target_directory_operand(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  cVar2 = *param_1;
  pcVar4 = param_1;
  do {
    if (cVar2 != '.') {
LAB_0010004c:
      iVar3 = open(param_1,0x210000);
      return iVar3;
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    if (*pcVar1 != '/') {
      if (*pcVar1 == '\0') {
        return -100;
      }
      goto LAB_0010004c;
    }
    do {
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    } while (cVar2 == '/');
    if (cVar2 == '\0') {
      return -100;
    }
  } while( true );
}


