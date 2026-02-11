
void oc_state_accel_init_x86(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  
  oc_state_accel_init_c();
  uVar3 = oc_cpu_flags_get();
  *(uint *)(param_1 + 0x98) = uVar3;
  puVar1 = _GLOBAL_OFFSET_TABLE_;
  if ((uVar3 & 1) != 0) {
    *(undefined1 **)(param_1 + 0x90) = OC_FZIG_ZAG_MMX;
    puVar2 = PTR_oc_frag_copy_list_mmx_00102008;
    *(undefined **)(param_1 + 0x40) = puVar1;
    *(undefined **)(param_1 + 0x48) = puVar2;
    puVar1 = PTR_oc_frag_recon_inter_mmx_00102018;
    *(undefined **)(param_1 + 0x50) = PTR_oc_frag_recon_intra_mmx_00102010;
    *(undefined **)(param_1 + 0x58) = puVar1;
    puVar1 = PTR_oc_idct8x8_mmx_00102028;
    *(undefined **)(param_1 + 0x60) = PTR_oc_frag_recon_inter2_mmx_00102020;
    *(undefined **)(param_1 + 0x68) = puVar1;
    puVar1 = PTR_oc_loop_filter_init_mmx_00102038;
    *(undefined **)(param_1 + 0x70) = PTR_oc_state_frag_recon_mmx_00102030;
    *(undefined **)(param_1 + 0x78) = puVar1;
    puVar1 = PTR_oc_restore_fpu_mmx_00102048;
    *(undefined **)(param_1 + 0x80) = PTR_oc_state_loop_filter_frag_rows_mmx_00102040;
    *(undefined **)(param_1 + 0x88) = puVar1;
  }
  puVar1 = PTR_oc_state_loop_filter_frag_rows_mmxext_00102058;
  if ((uVar3 & 8) != 0) {
    *(undefined **)(param_1 + 0x78) = PTR_oc_loop_filter_init_mmxext_00102050;
    *(undefined **)(param_1 + 0x80) = puVar1;
  }
  if ((uVar3 & 0x20) != 0) {
    *(undefined **)(param_1 + 0x68) = &oc_idct8x8_sse2;
    *(undefined1 **)(param_1 + 0x90) = OC_FZIG_ZAG_SSE2;
  }
  return;
}


