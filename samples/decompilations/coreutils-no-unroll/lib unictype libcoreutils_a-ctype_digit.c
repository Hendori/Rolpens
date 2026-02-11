
uint uc_is_digit(uint param_1)

{
  if ((param_1 >> 0x10 == 0) && (-1 < *(short *)(u_is_digit + (ulong)((param_1 >> 9) + 4) * 2))) {
    return *(uint *)(u_is_digit +
                    (ulong)((param_1 >> 5 & 0xf) +
                           (int)*(short *)(u_is_digit + (ulong)((param_1 >> 9) + 4) * 2)) * 4) >>
           ((byte)param_1 & 0x1f) & 1;
  }
  return 0;
}


