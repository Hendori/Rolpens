
void rpl_realloc(void *param_1,size_t param_2)

{
  if (param_2 == 0) {
    param_2 = 1;
  }
  realloc(param_1,param_2);
  return;
}


