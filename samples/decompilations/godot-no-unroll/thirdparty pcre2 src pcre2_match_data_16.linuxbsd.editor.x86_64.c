
void pcre2_match_data_create_16(uint param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0xffff;
  if (param_1 < 0x10000) {
    uVar1 = param_1;
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  lVar2 = _pcre2_memctl_malloc_16((ulong)(uVar1 * 2 + 0xd) << 3);
  if (lVar2 != 0) {
    *(short *)(lVar2 + 0x62) = (short)uVar1;
    *(undefined1 *)(lVar2 + 0x61) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
  }
  return;
}



void pcre2_match_data_create_from_pattern_16(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    param_2 = param_1;
  }
  uVar2 = *(ushort *)(param_1 + 0x80) + 1;
  if (0xffff < uVar2) {
    uVar2 = 0xffff;
  }
  lVar1 = _pcre2_memctl_malloc_16((ulong)(uVar2 * 2 + 0xd) << 3,param_2);
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0x62) = (short)uVar2;
    *(undefined1 *)(lVar1 + 0x61) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
  }
  return;
}



void pcre2_match_data_free_16(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(param_1 + 8))(*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x10));
    }
    if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
      (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10));
    }
                    /* WARNING: Could not recover jumptable at 0x001000da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(param_1,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



undefined8 pcre2_get_mark_16(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



long pcre2_get_ovector_pointer_16(long param_1)

{
  return param_1 + 0x68;
}



undefined2 pcre2_get_ovector_count_16(long param_1)

{
  return *(undefined2 *)(param_1 + 0x62);
}



undefined8 pcre2_get_startchar_16(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



long pcre2_get_match_data_size_16(long param_1)

{
  return ((ulong)*(ushort *)(param_1 + 0x62) * 2 + 0xd) * 8;
}



undefined8 pcre2_get_match_data_heapframes_size_16(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


