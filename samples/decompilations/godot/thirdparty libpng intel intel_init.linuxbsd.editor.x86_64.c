
void png_init_filter_functions_sse2(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_png_read_filter_row_paeth3_sse2_00102018;
  puVar3 = PTR_png_read_filter_row_avg3_sse2_00102010;
  puVar2 = PTR_png_read_filter_row_paeth4_sse2_00102008;
  puVar1 = _GLOBAL_OFFSET_TABLE_;
  if (param_2 == 3) {
    *(undefined **)(param_1 + 0x480) = &png_read_filter_row_sub3_sse2;
    *(undefined **)(param_1 + 0x490) = puVar3;
    *(undefined **)(param_1 + 0x498) = puVar4;
    return;
  }
  if (param_2 != 4) {
    return;
  }
  *(undefined **)(param_1 + 0x480) = &png_read_filter_row_sub4_sse2;
  *(undefined **)(param_1 + 0x490) = puVar1;
  *(undefined **)(param_1 + 0x498) = puVar2;
  return;
}


