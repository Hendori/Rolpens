
/* WARNING: Unknown calling convention */

size_t nstrftime(char *s,size_t maxsize,char *format,tm *tp,timezone_t tz,int ns)

{
  size_t sVar1;
  undefined4 in_register_0000008c;
  int in_stack_fffffffffffffff0;
  
  sVar1 = __strftime_internal(s,maxsize,format,tp,false,ZERO_PAD,-1,(_Bool *)tz,
                              (timezone_t)CONCAT44(in_register_0000008c,ns),
                              in_stack_fffffffffffffff0);
  return sVar1;
}


