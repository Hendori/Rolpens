
uint uc_is_graph(uint param_1)

{
  if (((param_1 < 0x110000) && (-1 < *(int *)(u_is_graph + (ulong)((param_1 >> 0x10) + 1) * 4))) &&
     (-1 < *(short *)(u_is_graph +
                     (ulong)(*(int *)(u_is_graph + (ulong)((param_1 >> 0x10) + 1) * 4) +
                            (param_1 >> 9 & 0x7f)) * 2))) {
    return *(uint *)(u_is_graph +
                    (ulong)((param_1 >> 5 & 0xf) +
                           (int)*(short *)(u_is_graph +
                                          (ulong)(*(int *)(u_is_graph +
                                                          (ulong)((param_1 >> 0x10) + 1) * 4) +
                                                 (param_1 >> 9 & 0x7f)) * 2)) * 4) >>
           ((byte)param_1 & 0x1f) & 1;
  }
  return 0;
}


