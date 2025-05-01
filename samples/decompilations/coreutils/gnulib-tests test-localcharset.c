
/* WARNING: Unknown calling convention */

int main(void)

{
  char *__s;
  
  setlocale(6,"");
  __s = (char *)locale_charset();
  puts(__s);
  return 0;
}


