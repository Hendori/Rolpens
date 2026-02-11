
uint uc_tolower(uint param_1)

{
  if (((param_1 < 0x20000) && (-1 < *(int *)(&u_mapping + (ulong)(param_1 >> 0x10) * 4))) &&
     (-1 < *(short *)(&DAT_00100068 +
                     (ulong)(*(int *)(&u_mapping + (ulong)(param_1 >> 0x10) * 4) +
                            (param_1 >> 7 & 0x1ff)) * 2))) {
    return param_1 + *(int *)(&DAT_00100868 +
                             (ulong)((int)*(short *)(&DAT_00100068 +
                                                    (ulong)(*(int *)(&u_mapping +
                                                                    (ulong)(param_1 >> 0x10) * 4) +
                                                           (param_1 >> 7 & 0x1ff)) * 2) +
                                    (param_1 & 0x7f)) * 4);
  }
  return param_1;
}


