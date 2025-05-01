
undefined8 main(void)

{
  undefined8 uVar1;
  
  __printf_chk(2,"Build version: %s\n",0x100000);
  uVar1 = OpenSSL_version(7);
  __printf_chk(2,"Library version: %s\n",uVar1);
  return 0;
}


