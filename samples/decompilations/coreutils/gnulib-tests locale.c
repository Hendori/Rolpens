
/* WARNING: Unknown calling convention */

void print_category(int category,char *variable)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = getenv(variable);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    pcVar2 = getenv("LC_ALL");
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
      pcVar2 = "%s=%s\n";
      goto LAB_0010004c;
    }
  }
  pcVar1 = setlocale(category,(char *)0x0);
  pcVar2 = "%s=\"%s\"\n";
LAB_0010004c:
  __printf_chk(2,pcVar2,variable,pcVar1);
  return;
}



/* WARNING: Unknown calling convention */

int main(void)

{
  char *pcVar1;
  
  setlocale(6,"");
  pcVar1 = getenv("LANG");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  __printf_chk(2,"LANG=%s\n",pcVar1);
  print_category(0,"LC_CTYPE");
  print_category(1,"LC_NUMERIC");
  print_category(2,"LC_TIME");
  print_category(3,"LC_COLLATE");
  print_category(4,"LC_MONETARY");
  print_category(5,"LC_MESSAGES");
  print_category(7,"LC_PAPER");
  print_category(8,"LC_NAME");
  print_category(9,"LC_ADDRESS");
  print_category(10,"LC_TELEPHONE");
  print_category(0xb,"LC_MEASUREMENT");
  print_category(0xc,"LC_IDENTIFICATION");
  pcVar1 = getenv("LC_ALL");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  __printf_chk(2,"LC_ALL=%s\n",pcVar1);
  return 0;
}


