
FILE * openssl_fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
  if (param_1 != (char *)0x0) {
    pFVar1 = fopen64(param_1,param_2);
    return pFVar1;
  }
  return (FILE *)0x0;
}


