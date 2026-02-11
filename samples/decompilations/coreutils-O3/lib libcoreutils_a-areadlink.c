
void careadlinkatcwd(int param_1,char *param_2,char *param_3,size_t param_4)

{
  if (param_1 == -100) {
    readlink(param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void areadlink(undefined8 param_1)

{
  careadlinkat(0xffffff9c,param_1,0,0,0,0x100000);
  return;
}



void careadlinkatcwd_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


