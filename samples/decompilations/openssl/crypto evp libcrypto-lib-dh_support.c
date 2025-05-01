
char * ossl_dh_gen_type_id2name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "group";
  if ((((param_1 != 3) && (pcVar1 = "generator", param_1 != 0)) &&
      (pcVar1 = "fips186_4", param_1 != 2)) && (pcVar1 = "fips186_2", param_1 != 1)) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



undefined4 ossl_dh_gen_type_name2id(char *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = strcmp("group",param_1);
  if (iVar1 == 0) {
    lVar2 = 0;
LAB_001000ca:
    return *(undefined4 *)(dhtype2id + lVar2 * 0x10 + 8);
  }
  if (param_2 == 0) {
    iVar1 = strcmp("generator",param_1);
    if (iVar1 == 0) {
      lVar2 = 1;
      goto LAB_001000ca;
    }
  }
  else if (param_2 == 0x1000) {
    iVar1 = strcmp("fips186_4",param_1);
    if (iVar1 == 0) {
      lVar2 = 2;
    }
    else {
      iVar1 = strcmp("fips186_2",param_1);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      lVar2 = 3;
    }
    goto LAB_001000ca;
  }
  return 0xffffffff;
}


