
/* WARNING: Unknown calling convention */

size_t fprintftime(FILE *s,char *format,tm *tp,timezone_t tz,int ns)

{
  size_t sVar1;
  undefined4 in_register_00000084;
  int in_stack_fffffffffffffff8;
  
  sVar1 = __strftime_internal(s,format,tp,false,ZERO_PAD,-1,(_Bool *)tz,
                              (timezone_t)CONCAT44(in_register_00000084,ns),
                              in_stack_fffffffffffffff8);
  return sVar1;
}


