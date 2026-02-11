
void dup_safer_flag(undefined8 param_1,uint param_2)

{
  rpl_fcntl(param_1,-(uint)((param_2 & 0x80000) != 0) & 0x406,3);
  return;
}


