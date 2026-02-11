
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
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = 0;
  ppuVar2 = &dhtype2id;
  do {
    if ((*(int *)((long)ppuVar2 + 0xc) == param_2) || (*(int *)((long)ppuVar2 + 0xc) == -1)) {
      iVar1 = strcmp(*ppuVar2,param_1);
      if (iVar1 == 0) {
        return (&DAT_001000e8)[lVar3 * 4];
      }
    }
    lVar3 = lVar3 + 1;
    ppuVar2 = ppuVar2 + 2;
  } while (lVar3 != 4);
  return 0xffffffff;
}


