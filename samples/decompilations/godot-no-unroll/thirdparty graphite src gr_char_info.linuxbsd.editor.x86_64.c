
undefined4 gr_cinfo_unicode_char(undefined4 *param_1)

{
  return *param_1;
}



int gr_cinfo_break_weight(long param_1)

{
  return (int)*(char *)(param_1 + 0x19);
}



undefined4 gr_cinfo_after(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



undefined4 gr_cinfo_before(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



undefined8 gr_cinfo_base(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


