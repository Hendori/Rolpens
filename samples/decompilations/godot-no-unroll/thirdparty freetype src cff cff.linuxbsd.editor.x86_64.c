
undefined8 cff_cmap_encoding_init(long *param_1)

{
  param_1[3] = *(long *)(*param_1 + 0x490) + 0x30c;
  return 0;
}



void cff_cmap_encoding_done(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



undefined2 cff_cmap_encoding_char_index(long param_1,uint param_2)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x100) {
    uVar1 = *(undefined2 *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 2);
  }
  return uVar1;
}



short cff_cmap_encoding_char_next(long param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *param_2;
  lVar3 = (ulong)(uVar2 + 1) * 2;
  do {
    if (0xfe < uVar2) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    sVar1 = *(short *)(*(long *)(param_1 + 0x18) + lVar3);
    lVar3 = lVar3 + 2;
  } while (sVar1 == 0);
  *param_2 = uVar2;
  return sVar1;
}



undefined8 cff_cmap_unicode_init(long *param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*param_1 + 0x490);
  if (*(long *)(lVar1 + 0x520) == 0) {
    return 0xa3;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + 0x1360) + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (*(undefined8 *)(*param_1 + 0xb8),param_1,*(undefined4 *)(lVar1 + 0x24),
                       cff_sid_to_glyph_name,0);
    return uVar2;
  }
  return 7;
}



void cff_cmap_unicode_char_index(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*param_1 + 0x490) + 0x1360) + 0x10))();
  return;
}



void cff_cmap_unicode_char_next(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*param_1 + 0x490) + 0x1360) + 0x18))();
  return;
}



undefined8
cff_get_kerning(long param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [16])

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x370);
  *param_4 = (undefined1  [16])0x0;
  if (lVar1 != 0) {
    iVar2 = (**(code **)(lVar1 + 0xa8))();
    *(long *)*param_4 = (long)iVar2;
    return 0;
  }
  return 0;
}



bool cff_ps_has_glyph_names(long param_1)

{
  return (*(byte *)(param_1 + 0x11) & 2) != 0;
}



undefined8 cff_get_is_cid(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x490);
  *param_2 = 0;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x74c) != 0xffff)) {
    *param_2 = 1;
  }
  return 0;
}



undefined8 cff_get_cid_from_glyph_index(long param_1,uint param_2,uint *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x490);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x74c) == 0xffff) {
      return 6;
    }
    if (*(uint *)(lVar1 + 0x24) <= param_2) {
      return 6;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)*(ushort *)(*(long *)(lVar1 + 0x520) + (ulong)param_2 * 2);
    }
  }
  return 0;
}



void cff_set_mm_blend(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001001fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x10))();
  return;
}



void cff_get_mm_blend(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010020b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x18))();
  return;
}



void cff_set_mm_weightvector(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010021b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x48))();
  return;
}



void cff_get_mm_weightvector(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010022b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x50))();
  return;
}



void cff_construct_ps_name(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010023b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x58))();
  return;
}



void cff_get_mm_var(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010024b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x20))();
  return;
}



void cff_set_var_design(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010025b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x28))();
  return;
}



void cff_get_var_design(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010026b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x30))();
  return;
}



void cff_set_named_instance(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010027b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x38))();
  return;
}



void cff_get_default_named_instance(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010028b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x40))();
  return;
}



void cff_load_item_variation_store(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010029b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x68))();
  return;
}



void cff_load_delta_set_index_mapping(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x60))();
  return;
}



void cff_get_item_delta(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x70))();
  return;
}



void cff_done_item_variation_store(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x78))();
  return;
}



void cff_done_delta_set_index_map(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x80))();
  return;
}



void cff_hadvance_adjust(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x388))();
  return;
}



void cff_metrics_adjust(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010030b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x388) + 0x38))();
  return;
}



ulong cff_parse_integer(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *param_1;
  pbVar1 = param_1 + 1;
  if (bVar2 == 0x1c) {
    if ((param_1 + 3 <= param_2) || (param_2 < pbVar1)) {
      return (long)(short)(*(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8);
    }
  }
  else if (bVar2 == 0x1d) {
    if ((param_1 + 5 <= param_2) || (param_2 < pbVar1)) {
      uVar3 = *(uint *)(param_1 + 1);
      return (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    );
    }
  }
  else {
    uVar3 = (uint)bVar2;
    if (bVar2 < 0xf7) {
      return (long)(int)(uVar3 - 0x8b);
    }
    if (bVar2 < 0xfb) {
      if (param_1 + 2 <= param_2 || param_2 < pbVar1) {
        return (long)(int)((uVar3 - 0xf7) * 0x100 + 0x6c + (uint)param_1[1]);
      }
    }
    else if (param_1 + 2 <= param_2 || param_2 < pbVar1) {
      return (long)(int)(((0xfb - uVar3) * 0x100 - (uint)param_1[1]) + -0x6c);
    }
  }
  return 0;
}



undefined2 cff_get_standard_encoding(uint param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x100) {
    uVar1 = *(undefined2 *)((long)&cff_standard_encoding + (ulong)param_1 * 2);
  }
  return uVar1;
}



char cff_fd_select_get(char *param_1,uint param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  
  puVar2 = *(ushort **)(param_1 + 8);
  if (puVar2 != (ushort *)0x0) {
    if (*param_1 == '\0') {
      return *(char *)((long)puVar2 + (ulong)param_2);
    }
    if (*param_1 == '\x03') {
      if (param_2 - *(int *)(param_1 + 0x14) < *(uint *)(param_1 + 0x18)) {
        return param_1[0x1c];
      }
      uVar4 = *puVar2 << 8 | *puVar2 >> 8;
      puVar6 = puVar2 + 1;
      do {
        uVar5 = (uint)uVar4;
        if (param_2 < uVar5) {
          return '\0';
        }
        puVar1 = (ushort *)((long)puVar6 + 3);
        uVar4 = *(ushort *)((long)puVar6 + 1) << 8 | *(ushort *)((long)puVar6 + 1) >> 8;
        if (param_2 < uVar4) {
          uVar3 = *puVar6;
          *(uint *)(param_1 + 0x14) = uVar5;
          *(uint *)(param_1 + 0x18) = uVar4 - uVar5;
          param_1[0x1c] = (char)uVar3;
          return (char)uVar3;
        }
        puVar6 = puVar1;
      } while (puVar1 < (ushort *)((ulong)*(uint *)(param_1 + 0x10) + (long)puVar2));
    }
  }
  return '\0';
}



void cff_get_var_blend(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001004bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x380) + 0x88))();
  return;
}



void cff_done_blend(long param_1)

{
  if (*(long *)(param_1 + 0x380) != 0) {
                    /* WARNING: Could not recover jumptable at 0x001004e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x380) + 0x90))();
    return;
  }
  return;
}



void cff_slot_done(long param_1)

{
  if (*(long *)(param_1 + 0x128) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x128) + 0x40) = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 cff_driver_init(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  long local_20;
  undefined1 local_14 [4];
  long local_10;
  
  uVar1 = _UNK_00108da8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0x40) = __LC0;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar2 = _UNK_00108db8;
  uVar1 = __LC1;
  uVar3 = (uint)local_14 ^ (uint)&local_20 ^ *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  uVar3 = uVar3 >> 10 ^ uVar3 >> 0x14 ^ uVar3;
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  else if (uVar3 == 0) {
    uVar3 = 0x75bcd15;
  }
  *(uint *)(param_1 + 0x60) = uVar3;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  local_20 = param_1;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cff_driver_done(void)

{
  return;
}



void cff_cmap_unicode_done(long *param_1)

{
  ft_mem_free(*(undefined8 *)(*param_1 + 0xb8),param_1[4]);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



void cff_vstore_done(uint *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 6);
  if ((lVar3 != 0) && (param_1[5] != 0)) {
    lVar1 = 0;
    do {
      ft_mem_free(param_2,*(undefined8 *)(lVar3 + lVar1 * 8));
      lVar3 = *(long *)(param_1 + 6);
      *(undefined8 *)(lVar3 + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < param_1[5]);
  }
  ft_mem_free(param_2);
  lVar3 = *(long *)(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  if ((lVar3 != 0) && (*param_1 != 0)) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 + 1;
      ft_mem_free(param_2,*(undefined8 *)(lVar3 + 8 + lVar1 * 0x10));
      lVar3 = *(long *)(param_1 + 2);
      *(undefined8 *)(lVar3 + 8 + lVar1 * 0x10) = 0;
      lVar1 = lVar2;
    } while ((uint)lVar2 < *param_1);
  }
  ft_mem_free(param_2);
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



undefined8 cff_slot_init(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1[1] + 0x490) + 0x1358);
  if (lVar1 != 0) {
    lVar2 = FT_Get_Module(*param_1,"pshinter");
    if (lVar2 != 0) {
      uVar3 = (**(code **)(lVar1 + 0x10))(lVar2);
      *(undefined8 *)(param_1[0x25] + 0x40) = uVar3;
    }
  }
  return 0;
}



void cff_make_private_dict(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar2 = 0;
  puVar4 = param_2;
  for (lVar3 = 0x1c; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  bVar1 = *(byte *)(param_1 + 0x148);
  *(byte *)(param_2 + 1) = bVar1;
  if (bVar1 != 0) {
    do {
      *(short *)((long)param_2 + lVar2 * 2 + 0xc) =
           (short)*(undefined8 *)(param_1 + 0x150 + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < (uint)bVar1);
  }
  bVar1 = *(byte *)(param_1 + 0x149);
  *(byte *)((long)param_2 + 9) = bVar1;
  if (bVar1 != 0) {
    lVar2 = 0;
    do {
      *(short *)((long)param_2 + lVar2 * 2 + 0x28) =
           (short)*(undefined8 *)(param_1 + 0x1c0 + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < (uint)bVar1);
  }
  bVar1 = *(byte *)(param_1 + 0x14a);
  *(byte *)((long)param_2 + 10) = bVar1;
  if (bVar1 != 0) {
    lVar2 = 0;
    do {
      *(short *)((long)param_2 + lVar2 * 2 + 0x3c) =
           (short)*(undefined8 *)(param_1 + 0x210 + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < (uint)bVar1);
  }
  bVar1 = *(byte *)(param_1 + 0x14b);
  *(byte *)((long)param_2 + 0xb) = bVar1;
  if (bVar1 != 0) {
    lVar2 = 0;
    do {
      *(short *)((long)param_2 + lVar2 * 2 + 0x58) =
           (short)*(undefined8 *)(param_1 + 0x280 + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < (uint)bVar1);
  }
  param_2[0xe] = *(undefined8 *)(param_1 + 0x2d0);
  *(int *)(param_2 + 0xf) = (int)*(undefined8 *)(param_1 + 0x2d8);
  *(int *)((long)param_2 + 0x7c) = (int)*(undefined8 *)(param_1 + 0x2e0);
  *(short *)(param_2 + 0x10) = (short)*(undefined8 *)(param_1 + 0x2e8);
  *(short *)((long)param_2 + 0x82) = (short)*(undefined8 *)(param_1 + 0x2f0);
  bVar1 = *(byte *)(param_1 + 0x2f8);
  *(byte *)((long)param_2 + 0x84) = bVar1;
  if (bVar1 != 0) {
    lVar2 = 0;
    do {
      *(short *)((long)param_2 + lVar2 * 2 + 0x88) =
           (short)*(undefined8 *)(param_1 + 0x300 + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < (uint)bVar1);
  }
  bVar1 = *(byte *)(param_1 + 0x2f9);
  *(byte *)((long)param_2 + 0x85) = bVar1;
  if (bVar1 != 0) {
    lVar2 = 0;
    do {
      *(short *)((long)param_2 + lVar2 * 2 + 0xa2) =
           (short)*(undefined8 *)(param_1 + 0x368 + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < (uint)bVar1);
  }
  *(undefined1 *)((long)param_2 + 0x86) = *(undefined1 *)(param_1 + 0x3d0);
  param_2[0x19] = (long)*(int *)(param_1 + 0x3e4);
  *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(param_1 + 0x3e0);
  return;
}



void cff_index_done(undefined1 (*param_1) [16])

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    if (*(long *)(param_1[3] + 8) != 0) {
      FT_Stream_ReleaseFrame(lVar1,param_1[3] + 8);
    }
    ft_mem_free(uVar2,*(undefined8 *)param_1[3]);
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
  }
  return;
}



undefined8 cff_get_cmap_info(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (((undefined1 *)param_1[2] == cff_cmap_unicode_class_rec) ||
     ((undefined1 *)param_1[2] == cff_cmap_encoding_class_rec)) {
    return 0x96;
  }
  uVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),&_LC3);
  puVar2 = (undefined8 *)ft_module_get_service(uVar1,"tt-cmaps",0);
  if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00100970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*puVar2)(param_1,param_2);
    return uVar1;
  }
  return 0;
}



long cff_get_ps_name(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x490);
  if (((*(byte *)(param_1 + 0x10) & 8) != 0) && (*(long *)(param_1 + 0x370) != 0)) {
    uVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 8),&_LC3);
    puVar2 = (undefined8 *)ft_module_get_service(uVar1,"postscript-font-name",0);
    if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00100a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (*(code *)*puVar2)(param_1);
      return lVar3;
    }
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x638);
  }
  return lVar3;
}



long cff_parse_real(byte *param_1,byte *param_2,long param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  lVar11 = 0;
  lVar10 = 0;
  bVar1 = false;
  lVar9 = 0;
  iVar4 = 4;
  while (((pbVar5 = param_1, iVar4 == 0 || (pbVar5 = param_1 + 1, param_1 + 2 <= param_2)) ||
         (param_2 < pbVar5))) {
    iVar14 = 4 - iVar4;
    uVar8 = (int)(uint)*pbVar5 >> ((byte)iVar4 & 0x1f) & 0xf;
    param_1 = pbVar5;
    iVar4 = iVar14;
    if (uVar8 == 0xe) {
      bVar1 = true;
    }
    else {
      if (9 < uVar8) {
        lVar12 = 0;
        pbVar6 = pbVar5;
        if (uVar8 == 10) goto joined_r0x00100bc2;
        goto LAB_00100adc;
      }
      if (lVar9 < 0xccccccc) {
        if ((uVar8 == 0) && (lVar9 == 0)) {
          lVar9 = 0;
        }
        else {
          lVar11 = lVar11 + 1;
          lVar9 = (ulong)uVar8 + lVar9 * 10;
        }
      }
      else {
        lVar10 = lVar10 + 1;
      }
    }
  }
LAB_00100cc8:
  lVar7 = 0;
  goto LAB_00100b8c;
joined_r0x00100bc2:
  pbVar5 = pbVar6;
  if (((iVar4 != 0) && (pbVar5 = pbVar6 + 1, param_2 < pbVar6 + 2)) && (pbVar5 <= param_2))
  goto LAB_00100cc8;
  iVar14 = 4 - iVar4;
  uVar8 = (int)(uint)*pbVar5 >> ((byte)iVar4 & 0x1f) & 0xf;
  if (uVar8 < 10) {
    pbVar6 = pbVar5;
    iVar4 = iVar14;
    if ((uVar8 == 0) && (lVar9 == 0)) {
      lVar10 = lVar10 + -1;
    }
    else if ((lVar9 < 0xccccccc) && (lVar12 < 9)) {
      lVar12 = lVar12 + 1;
      lVar9 = (ulong)uVar8 + lVar9 * 10;
    }
    goto joined_r0x00100bc2;
  }
LAB_00100adc:
  lVar7 = lVar9;
  if (uVar8 == 0xc) {
    bVar3 = true;
LAB_00100c18:
    bVar2 = false;
    lVar13 = 0;
    while( true ) {
      pbVar6 = pbVar5;
      if (((iVar14 != 0) && (pbVar6 = pbVar5 + 1, param_2 < pbVar5 + 2)) && (pbVar6 <= param_2))
      goto LAB_00100cc8;
      uVar8 = (int)(uint)*pbVar6 >> ((byte)iVar14 & 0x1f) & 0xf;
      if (9 < uVar8) break;
      pbVar5 = pbVar6;
      if (lVar13 < 0x3e9) {
        lVar13 = (ulong)uVar8 + lVar13 * 10;
        iVar14 = 4 - iVar14;
      }
      else {
        bVar2 = true;
        iVar14 = 4 - iVar14;
      }
    }
    if (bVar3) {
      if ((lVar9 == 0) || (lVar13 = -lVar13, bVar2)) goto LAB_00100cc8;
      goto LAB_00100afa;
    }
    if (lVar9 == 0) goto LAB_00100b8c;
    if (!bVar2) goto LAB_00100afa;
  }
  else {
    if (uVar8 == 0xb) {
      bVar3 = false;
      goto LAB_00100c18;
    }
    if (lVar9 == 0) goto LAB_00100b8c;
    lVar13 = 0;
LAB_00100afa:
    lVar13 = lVar10 + param_3 + lVar13;
    lVar10 = lVar11 + lVar13;
    if (param_4 != (long *)0x0) {
      lVar11 = lVar11 + lVar12;
      if (lVar11 < 6) {
        if (lVar9 < 0x8000) {
          lVar13 = lVar13 - lVar12;
          if (0 < lVar10) {
            lVar12 = 5;
            if (lVar10 < 6) {
              lVar12 = lVar10;
            }
            if (0 < lVar12 - lVar11) {
              lVar13 = lVar10 - lVar12;
              lVar9 = lVar9 * *(long *)(power_tens + (lVar12 - lVar11) * 8);
              if (0x7fff < lVar9) {
                lVar13 = lVar13 + 1;
                lVar9 = lVar9 / 10;
              }
            }
          }
          *param_4 = lVar13;
          lVar7 = lVar9 << 0x10;
        }
        else {
          lVar7 = FT_DivFix(lVar9,10);
          *param_4 = (lVar13 - lVar12) + 1;
        }
      }
      else {
        lVar12 = *(long *)(power_ten_limits + lVar11 * 8 + 0x38);
        if (lVar9 / lVar12 < 0x8000) {
          lVar7 = FT_DivFix(lVar9,lVar12,lVar9 % lVar12);
          *param_4 = lVar10 + -5;
        }
        else {
          lVar7 = FT_DivFix(lVar9,*(undefined8 *)(power_ten_limits + lVar11 * 8 + 0x40),
                            lVar9 % lVar12);
          *param_4 = lVar10 + -4;
        }
      }
      goto LAB_00100b8c;
    }
    if (lVar10 < 6) {
      if (-6 < lVar10) {
        if (lVar10 < 0) {
          lVar9 = lVar9 / *(long *)(power_tens + lVar10 * -8);
        }
        else {
          lVar11 = -lVar13;
        }
        lVar12 = lVar12 + lVar11;
        if (lVar12 == 10) {
          lVar11 = 1000000000;
          lVar9 = lVar9 / 10;
        }
        else {
          if (lVar12 < 1) {
            lVar7 = 0x7fffffff;
            if (lVar9 * *(long *)(power_tens + lVar12 * -8) < 0x8000) {
              lVar7 = lVar9 * *(long *)(power_tens + lVar12 * -8) * 0x10000;
            }
            goto LAB_00100b8c;
          }
          lVar11 = *(long *)(power_tens + lVar12 * 8);
        }
        if (lVar9 / lVar11 < 0x8000) {
          lVar7 = FT_DivFix(lVar9,lVar11,lVar9 % lVar11);
          goto LAB_00100b8c;
        }
      }
      goto LAB_00100cc8;
    }
  }
  lVar7 = 0x7fffffff;
LAB_00100b8c:
  if (bVar1) {
    lVar7 = -lVar7;
  }
  return lVar7;
}



ulong cff_get_name_index(long param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  char *__s2;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(param_1 + 0x490);
  if (*(char *)(lVar5 + 0x28) == '\x02') {
    uVar4 = FT_Get_Module(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 8),&_LC3);
    lVar5 = ft_module_get_service(uVar4,"glyph-dict",0);
    if ((lVar5 != 0) && (*(code **)(lVar5 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00100f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(lVar5 + 8))(param_1,param_2);
      return uVar7;
    }
  }
  else {
    lVar3 = ft_module_get_service(*(long *)(param_1 + 0xb0),"postscript-cmaps",1);
    if ((lVar3 != 0) && (*(int *)(lVar5 + 0x24) != 0)) {
      uVar7 = 0;
      do {
        uVar1 = *(ushort *)(*(long *)(lVar5 + 0x520) + uVar7 * 2);
        if (uVar1 < 0x187) {
          __s2 = (char *)(**(code **)(lVar3 + 0x28))();
LAB_00100ead:
          if (__s2 != (char *)0x0) {
            iVar2 = strcmp(param_2,__s2);
            if (iVar2 == 0) {
              return uVar7 & 0xffffffff;
            }
          }
        }
        else {
          uVar6 = uVar1 - 0x187;
          if (uVar6 < *(uint *)(lVar5 + 0x648)) {
            __s2 = *(char **)(*(long *)(lVar5 + 0x650) + (long)(int)uVar6 * 8);
            goto LAB_00100ead;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((uint)uVar7 < *(uint *)(lVar5 + 0x24));
    }
  }
  return 0;
}



int cff_charset_compute_cids(long param_1,uint param_2,undefined8 param_3)

{
  ushort *puVar1;
  long lVar2;
  ushort *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == 0) {
      uVar8 = 0;
      uVar5 = ft_mem_realloc(param_3,2,0,1,0,&local_24);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      iVar7 = local_24;
      if (local_24 != 0) goto LAB_00101015;
    }
    else {
      puVar3 = *(ushort **)(param_1 + 0x10);
      uVar8 = 0;
      puVar1 = puVar3 + param_2;
      do {
        if ((ushort)uVar8 < *puVar3) {
          uVar8 = (uint)*puVar3;
        }
        puVar3 = puVar3 + 1;
      } while (puVar1 != puVar3);
      lVar4 = ft_mem_realloc(param_3,2,0,uVar8 + 1,0,&local_24);
      *(long *)(param_1 + 0x18) = lVar4;
      iVar7 = local_24;
      if (local_24 != 0) goto LAB_00101015;
      lVar2 = *(long *)(param_1 + 0x10);
      uVar6 = param_2 - 1;
      do {
        *(short *)(lVar4 + (ulong)*(ushort *)(lVar2 + (ulong)uVar6 * 2) * 2) = (short)uVar6;
        uVar6 = uVar6 - 1;
      } while (uVar6 < param_2);
    }
    *(uint *)(param_1 + 0x20) = uVar8;
    *(uint *)(param_1 + 0x24) = param_2;
  }
  iVar7 = 0;
LAB_00101015:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



ulong cff_blend_check_vector(char *param_1,int param_2,uint param_3,void *param_4)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 1;
  if ((((*param_1 != '\0') && (*(int *)(param_1 + 0x10) == param_2)) &&
      (*(uint *)(param_1 + 0x14) == param_3)) && (uVar2 = 0, param_3 != 0)) {
    iVar1 = memcmp(param_4,*(void **)(param_1 + 0x18),(ulong)param_3 << 3);
    return CONCAT71((int7)((ulong)param_4 >> 8),iVar1 != 0) & 0xffffffff;
  }
  return uVar2;
}



int cff_blend_build_vector(undefined1 *param_1,uint param_2,uint param_3,long *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined8 uVar13;
  void *__dest;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  int local_44;
  long local_40;
  
  lVar5 = *(long *)(param_1 + 8);
  uVar6 = *(undefined8 *)(lVar5 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  if ((((param_3 == 0) || (param_4 != (long *)0x0)) &&
      ((*param_1 = 0, param_3 == 0 || (*(ushort *)(lVar5 + 0x13a8) == param_3)))) &&
     (param_2 < *(uint *)(lVar5 + 0x1398))) {
    puVar12 = (uint *)((ulong)param_2 * 0x10 + *(long *)(lVar5 + 0x13a0));
    uVar3 = *puVar12;
    iVar11 = uVar3 + 1;
    uVar13 = ft_mem_qrealloc(uVar6,4,*(undefined4 *)(param_1 + 0x20),iVar11,
                             *(undefined8 *)(param_1 + 0x28),&local_44);
    *(undefined8 *)(param_1 + 0x28) = uVar13;
    iVar10 = local_44;
    if (local_44 == 0) {
      *(int *)(param_1 + 0x20) = iVar11;
      if (iVar11 != 0) {
        uVar21 = 0;
        do {
          if (uVar21 == 0) {
            **(undefined4 **)(param_1 + 0x28) = 0x10000;
          }
          else {
            lVar7 = *(long *)(lVar5 + 0x13b0);
            uVar4 = *(uint *)(*(long *)(puVar12 + 2) + (ulong)((int)uVar21 - 1) * 4);
            if (*(uint *)(lVar5 + 0x13ac) <= uVar4) goto LAB_001010f7;
            lVar16 = *(long *)(param_1 + 0x28);
            puVar1 = (undefined4 *)(lVar16 + uVar21 * 4);
            if (param_3 == 0) {
              *puVar1 = 0;
            }
            else {
              *puVar1 = 0x10000;
              lVar15 = 0;
              plVar14 = param_4;
              do {
                lVar20 = 0x10000;
                plVar18 = (long *)(*(long *)(lVar7 + (ulong)uVar4 * 8) + lVar15);
                lVar8 = *plVar18;
                lVar9 = plVar18[1];
                if (((lVar8 <= lVar9) && (lVar17 = plVar18[2], lVar9 <= lVar17)) &&
                   (((-1 < lVar8 || (lVar17 < 1)) && (lVar20 = 0x10000, lVar9 != 0)))) {
                  lVar19 = *plVar14;
                  if ((lVar17 < lVar19) || (lVar19 < lVar8)) {
                    lVar20 = 0;
                  }
                  else if (lVar9 != lVar19) {
                    if (lVar19 < lVar9) {
                      lVar17 = lVar9 - lVar8;
                      lVar19 = lVar19 - lVar8;
                    }
                    else {
                      lVar19 = lVar17 - lVar19;
                      lVar17 = lVar17 - lVar9;
                    }
                    iVar11 = FT_DivFix(lVar19,lVar17);
                    lVar20 = (long)iVar11;
                    lVar16 = *(long *)(param_1 + 0x28);
                  }
                }
                piVar2 = (int *)(lVar16 + uVar21 * 4);
                plVar14 = plVar14 + 1;
                lVar15 = lVar15 + 0x18;
                lVar20 = *piVar2 * lVar20;
                *piVar2 = (int)((ulong)(lVar20 + 0x8000 + (lVar20 >> 0x3f)) >> 0x10);
              } while (plVar14 != param_4 + param_3);
            }
          }
          bVar22 = uVar3 != uVar21;
          uVar21 = uVar21 + 1;
        } while (bVar22);
      }
      *(uint *)(param_1 + 0x10) = param_2;
      if (param_3 != 0) {
        __dest = (void *)ft_mem_qrealloc(uVar6,8,*(undefined4 *)(param_1 + 0x14),(ulong)param_3,
                                         *(undefined8 *)(param_1 + 0x18),&local_44);
        *(void **)(param_1 + 0x18) = __dest;
        iVar10 = local_44;
        if (local_44 != 0) goto LAB_001010fc;
        memcpy(__dest,param_4,(ulong)param_3 * 8);
      }
      *(uint *)(param_1 + 0x14) = param_3;
      *param_1 = 1;
      iVar10 = local_44;
    }
  }
  else {
LAB_001010f7:
    iVar10 = 3;
  }
LAB_001010fc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}



int cff_index_get_pointers(long *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  int local_48;
  int local_44;
  long local_40;
  
  lVar5 = *param_1;
  uVar16 = *(uint *)((long)param_1 + 0x14);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = param_1[6];
  local_48 = 0;
  uVar6 = *(undefined8 *)(lVar5 + 0x38);
  *param_2 = 0;
  if (lVar9 == 0) {
    local_44 = 0;
    if (uVar16 == 0) goto LAB_00101477;
    bVar2 = *(byte *)(param_1 + 3);
    lVar9 = ft_mem_qrealloc(uVar6,8,0,(ulong)(uVar16 + 1),0,&local_44);
    param_1[6] = lVar9;
    if (local_44 == 0) {
      local_44 = FT_Stream_Seek(lVar5,(ulong)*(uint *)(param_1 + 2) + param_1[1]);
      if (local_44 == 0) {
        lVar9 = (ulong)(uVar16 + 1) * (ulong)bVar2;
        local_44 = FT_Stream_EnterFrame(lVar5,lVar9);
        if (local_44 == 0) {
          puVar10 = *(uint **)(lVar5 + 0x40);
          puVar12 = (ulong *)param_1[6];
          puVar1 = (uint *)((long)puVar10 + lVar9);
          if (bVar2 == 2) {
            for (; puVar10 < puVar1; puVar10 = (uint *)((long)puVar10 + 2)) {
              *puVar12 = (ulong)(ushort)((ushort)*puVar10 << 8 | (ushort)*puVar10 >> 8);
              puVar12 = puVar12 + 1;
            }
          }
          else if (bVar2 == 3) {
            for (; puVar10 < puVar1; puVar10 = (uint *)((long)puVar10 + 3)) {
              *puVar12 = (ulong)((uint)(byte)*puVar10 << 0x10 |
                                 (uint)*(byte *)((long)puVar10 + 1) << 8 |
                                (uint)*(byte *)((long)puVar10 + 2));
              puVar12 = puVar12 + 1;
            }
          }
          else if (bVar2 == 1) {
            lVar8 = 0;
            if (puVar10 < puVar1) {
              do {
                puVar12[lVar8] = (ulong)*(byte *)((long)puVar10 + lVar8);
                lVar8 = lVar8 + 1;
              } while (lVar9 - lVar8 != 0);
            }
          }
          else {
            for (; puVar10 < puVar1; puVar10 = puVar10 + 1) {
              uVar16 = *puVar10;
              *puVar12 = (ulong)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8
                                | uVar16 << 0x18);
              puVar12 = puVar12 + 1;
            }
          }
          FT_Stream_ExitFrame(lVar5);
          if (local_44 == 0) {
            local_48 = 0;
            uVar16 = *(uint *)((long)param_1 + 0x14);
            goto LAB_0010141f;
          }
        }
      }
      lVar9 = param_1[6];
    }
    ft_mem_free(uVar6,lVar9);
    local_48 = local_44;
    param_1[6] = 0;
    if (local_44 != 0) goto LAB_00101477;
    uVar16 = *(uint *)((long)param_1 + 0x14);
  }
LAB_0010141f:
  if (uVar16 == 0) goto LAB_00101477;
  lVar5 = param_1[5];
  plVar7 = (long *)ft_mem_qrealloc(uVar6,8,0,uVar16 + 1,0);
  bVar20 = true;
  if (local_48 == 0) {
    if (param_3 == (long *)0x0) {
      lVar9 = param_1[7];
      iVar3 = *(int *)((long)param_1 + 0x14);
      lVar8 = 0;
      bVar19 = false;
      *plVar7 = lVar9;
      bVar20 = false;
      if (iVar3 == 0) {
        *param_2 = plVar7;
      }
      else {
LAB_0010150e:
        bVar19 = bVar20;
        lVar14 = 0;
        plVar17 = plVar7 + 1;
        uVar13 = 1;
        uVar15 = 0;
        do {
          while (uVar18 = *(long *)(param_1[6] + uVar13 * 8) - 1, uVar18 < uVar15) {
            uVar18 = uVar15;
            if (param_3 == (long *)0x0) goto LAB_0010166b;
            *plVar17 = lVar14 + uVar15 + lVar8;
LAB_00101565:
            uVar13 = uVar13 + 1;
            plVar17 = plVar17 + 1;
            if (*(uint *)((long)param_1 + 0x14) < uVar13) goto LAB_001015ee;
          }
          if ((ulong)param_1[5] < uVar18) {
            uVar18 = param_1[5];
          }
          if (param_3 == (long *)0x0) {
LAB_0010166b:
            *plVar17 = lVar9 + uVar18;
            uVar15 = uVar18;
            goto LAB_00101565;
          }
          lVar11 = uVar18 + lVar14 + lVar8;
          *plVar17 = lVar11;
          if (uVar18 == uVar15) goto LAB_00101565;
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 1;
          memcpy((void *)plVar17[-1],(void *)(uVar15 + lVar9),lVar11 - plVar17[-1]);
          *(undefined1 *)*plVar17 = 0;
          uVar4 = *(uint *)((long)param_1 + 0x14);
          *plVar17 = *plVar17 + 1;
          plVar17 = plVar17 + 1;
          uVar15 = uVar18;
        } while (uVar13 <= uVar4);
LAB_001015ee:
        *param_2 = plVar7;
        if (param_3 != (long *)0x0) goto LAB_0010161a;
      }
LAB_0010161e:
      if (param_4 != (long *)0x0) {
        *param_4 = lVar5 + (ulong)uVar16;
      }
    }
    else {
      lVar8 = ft_mem_alloc(uVar6,lVar5 + (ulong)uVar16,&local_48);
      if (local_48 == 0) {
        iVar3 = *(int *)((long)param_1 + 0x14);
        bVar19 = lVar8 != 0;
        lVar9 = param_1[7];
        *plVar7 = lVar8;
        bVar20 = bVar19;
        if (iVar3 != 0) goto LAB_0010150e;
        *param_2 = plVar7;
LAB_0010161a:
        *param_3 = lVar8;
        goto LAB_0010161e;
      }
      bVar19 = lVar8 != 0;
    }
    bVar20 = local_48 != 0;
    if ((bVar20) && (bVar19)) {
      ft_mem_free(uVar6,lVar8);
      bVar20 = local_48 != 0;
    }
  }
  if ((plVar7 != (long *)0x0) && (bVar20)) {
    ft_mem_free(uVar6,plVar7);
  }
LAB_00101477:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}



long cff_index_get_sid_string(long param_1,uint param_2)

{
  long lVar1;
  
  if (param_2 == 0xffff) {
    lVar1 = 0;
  }
  else if (param_2 < 0x187) {
    lVar1 = *(long *)(param_1 + 0x1360);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00101872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(lVar1 + 0x28))(param_2);
      return lVar1;
    }
  }
  else {
    lVar1 = 0;
    if (param_2 - 0x187 < *(uint *)(param_1 + 0x648)) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x650) + (ulong)(param_2 - 0x187) * 8);
    }
  }
  return lVar1;
}



undefined8 cff_get_ros(long param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x490);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x74c) == 0xffff) {
      return 6;
    }
    if (param_2 != (long *)0x0) {
      lVar2 = *(long *)(lVar1 + 0x1378);
      if (lVar2 == 0) {
        lVar2 = cff_index_get_sid_string(lVar1);
        *(long *)(lVar1 + 0x1378) = lVar2;
      }
      *param_2 = lVar2;
    }
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)(lVar1 + 0x1380);
      if (lVar2 == 0) {
        lVar2 = cff_index_get_sid_string(lVar1,*(undefined4 *)(lVar1 + 0x750));
        *(long *)(lVar1 + 0x1380) = lVar2;
      }
      *param_3 = lVar2;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (int)*(undefined8 *)(lVar1 + 0x758);
    }
  }
  return 0;
}



int cff_ps_get_font_info(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  lVar2 = *(long *)(param_1 + 0x490);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  iVar3 = 6;
  if ((*(char *)(param_1 + 0x4b8) == '\0') && (iVar3 = 0, lVar2 != 0)) {
    puVar4 = *(undefined8 **)(lVar2 + 0x1370);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)ft_mem_qalloc(*(undefined8 *)(param_1 + 0xb8),0x38,&local_24);
      iVar3 = local_24;
      if (local_24 != 0) goto LAB_00101a02;
      uVar5 = cff_index_get_sid_string(lVar2,*(undefined4 *)(lVar2 + 0x668));
      uVar1 = *(undefined4 *)(lVar2 + 0x66c);
      *puVar4 = uVar5;
      uVar5 = cff_index_get_sid_string(lVar2,uVar1);
      uVar1 = *(undefined4 *)(lVar2 + 0x674);
      puVar4[1] = uVar5;
      uVar5 = cff_index_get_sid_string(lVar2,uVar1);
      uVar1 = *(undefined4 *)(lVar2 + 0x678);
      puVar4[2] = uVar5;
      uVar5 = cff_index_get_sid_string(lVar2,uVar1);
      uVar1 = *(undefined4 *)(lVar2 + 0x67c);
      puVar4[3] = uVar5;
      uVar5 = cff_index_get_sid_string(lVar2,uVar1);
      puVar4[4] = uVar5;
      puVar4[5] = *(undefined8 *)(lVar2 + 0x688);
      *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(lVar2 + 0x680);
      *(short *)((long)puVar4 + 0x32) = (short)*(undefined8 *)(lVar2 + 0x690);
      *(short *)((long)puVar4 + 0x34) = (short)*(undefined8 *)(lVar2 + 0x698);
      *(undefined8 **)(lVar2 + 0x1370) = puVar4;
    }
    uVar5 = puVar4[1];
    *param_2 = *puVar4;
    param_2[1] = uVar5;
    uVar5 = puVar4[3];
    param_2[2] = puVar4[2];
    param_2[3] = uVar5;
    uVar5 = puVar4[5];
    param_2[4] = puVar4[4];
    param_2[5] = uVar5;
    param_2[6] = puVar4[6];
    iVar3 = local_24;
  }
LAB_00101a02:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 cff_get_glyph_name(long param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x490);
  if (*(char *)(lVar1 + 0x28) == '\x02') {
    uVar2 = FT_Get_Module(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 8),&_LC3);
    puVar3 = (undefined8 *)ft_module_get_service(uVar2,"glyph-dict",0);
    if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00101bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar3)(param_1,param_2,param_3,param_4);
      return uVar2;
    }
  }
  else if (*(long *)(lVar1 + 0x1360) != 0) {
    lVar1 = cff_index_get_sid_string
                      (lVar1,*(undefined2 *)(*(long *)(lVar1 + 0x520) + (ulong)param_2 * 2));
    if (lVar1 != 0) {
      ft_mem_strcpyn(param_3,lVar1,param_4);
    }
    return 0;
  }
  return 0xb;
}



int cff_ps_get_font_extra(long param_1,ushort *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *__haystack;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  lVar3 = *(long *)(param_1 + 0x490);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  iVar5 = 0;
  if (lVar3 != 0) {
    puVar6 = *(ushort **)(lVar3 + 0x13b8);
    if (puVar6 == (ushort *)0x0) {
      puVar6 = (ushort *)ft_mem_qalloc(*(undefined8 *)(param_1 + 0xb8),2,&local_34);
      iVar5 = local_34;
      if (local_34 != 0) goto LAB_00101c09;
      uVar2 = *(undefined4 *)(lVar3 + 0x748);
      *puVar6 = 0;
      pcVar7 = (char *)cff_index_get_sid_string(lVar3,uVar2);
      if ((pcVar7 != (char *)0x0) && (pcVar7 = strstr(pcVar7,"/FSType"), pcVar7 != (char *)0x0)) {
        __haystack = (byte *)(pcVar7 + 7);
        pbVar8 = (byte *)strstr((char *)__haystack,"def");
        if (pbVar8 != (byte *)0x0) {
          for (; __haystack != pbVar8; __haystack = __haystack + 1) {
            bVar1 = *__haystack;
            if ((byte)(bVar1 - 0x30) < 10) {
              if (0x1997 < *puVar6) {
LAB_00101cea:
                *puVar6 = 0;
                break;
              }
              uVar4 = *puVar6 * 10;
              *puVar6 = uVar4;
              *puVar6 = (uVar4 - 0x30) + (short)(char)*__haystack;
            }
            else if ((0x20 < bVar1) || ((0xfffffffeffffdbffU >> ((ulong)bVar1 & 0x3f) & 1) != 0))
            goto LAB_00101cea;
          }
        }
      }
      *(ushort **)(lVar3 + 0x13b8) = puVar6;
    }
    *param_2 = *puVar6;
    iVar5 = local_34;
  }
LAB_00101c09:
  local_34 = iVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_34;
}



void cff_subfont_done_part_0(undefined8 param_1,long param_2)

{
  cff_index_done(param_2 + 0x478);
  ft_mem_free(param_1,*(undefined8 *)(param_2 + 0x4b8));
  *(undefined8 *)(param_2 + 0x4b8) = 0;
  ft_mem_free(param_1,*(undefined8 *)(param_2 + 0x438));
  *(undefined8 *)(param_2 + 0x438) = 0;
  ft_mem_free(param_1,*(undefined8 *)(param_2 + 0x448));
  *(undefined8 *)(param_2 + 0x448) = 0;
  ft_mem_free(param_1,*(undefined8 *)(param_2 + 0x460));
  *(undefined8 *)(param_2 + 0x460) = 0;
  return;
}



long cff_get_interface(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = ft_service_list_lookup(cff_services);
  if (((lVar1 == 0) && (param_1 != 0)) && (*(long *)(param_1 + 8) != 0)) {
    plVar2 = (long *)FT_Get_Module(*(long *)(param_1 + 8),&_LC3);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101e01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      return lVar1;
    }
  }
  return lVar1;
}



undefined8 cff_size_get_globals_funcs_isra_0(long param_1)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 0x490))[0x26b];
  lVar2 = FT_Get_Module(**(undefined8 **)(param_1 + 0x490),"pshinter");
  if (((lVar2 != 0) && (puVar1 != (undefined8 *)0x0)) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00101e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(lVar2);
    return uVar3;
  }
  return 0;
}



int cff_size_init(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long in_FS_OFFSET;
  int local_12c;
  undefined1 local_128 [232];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_12c = 0;
  puVar4 = (undefined8 *)cff_size_get_globals_funcs_isra_0(*param_1);
  uVar1 = *(undefined8 *)(*param_1 + 0xb8);
  lVar2 = *(long *)(*param_1 + 0x490);
  if (puVar4 == (undefined8 *)0x0) {
    if (local_12c == 0) {
LAB_00101ff9:
      iVar3 = 0;
      goto LAB_00101f37;
    }
LAB_00102008:
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)ft_mem_alloc(uVar1,0x808,&local_12c);
    if (local_12c == 0) {
      puVar9 = local_128;
      cff_make_private_dict(lVar2 + 0x668,local_128);
      local_12c = (*(code *)*puVar4)(uVar1,puVar9,puVar5);
      if (local_12c == 0) {
        uVar8 = (ulong)*(uint *)(lVar2 + 0xb30);
        do {
          if ((int)uVar8 == 0) {
            *(undefined8 **)param_1[10] = puVar5;
            param_1[0xb] = 0xffffffff;
            if (local_12c == 0) goto LAB_00101ff9;
            break;
          }
          uVar6 = (ulong)((int)uVar8 - 1);
          puVar9 = local_128;
          cff_make_private_dict(*(undefined8 *)(lVar2 + 0xb38 + uVar6 * 8),local_128);
          local_12c = (*(code *)*puVar4)(uVar1,puVar9,puVar5 + uVar8);
          uVar8 = uVar6;
        } while (local_12c == 0);
      }
    }
    if (puVar5 == (undefined8 *)0x0) goto LAB_00102008;
    puVar4 = puVar5 + *(uint *)(lVar2 + 0xb30);
    if (*(uint *)(lVar2 + 0xb30) != 0) {
      do {
        puVar7 = puVar4 + -1;
        ft_mem_free(uVar1,*puVar4);
        *puVar4 = 0;
        puVar4 = puVar7;
      } while (puVar7 != puVar5);
    }
    ft_mem_free(uVar1,*puVar5);
    *puVar5 = 0;
  }
  ft_mem_free(uVar1,puVar5);
  iVar3 = local_12c;
LAB_00101f37:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



void cff_size_done(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar2 = *(undefined8 **)param_1[10];
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(*param_1 + 0xb8);
    lVar4 = *(long *)(*param_1 + 0x490);
    lVar6 = cff_size_get_globals_funcs_isra_0();
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x10))(*puVar2);
      uVar1 = *(uint *)(lVar4 + 0xb30);
      if (uVar1 != 0) {
        puVar7 = puVar2 + uVar1;
        do {
          uVar5 = *puVar7;
          puVar7 = puVar7 + -1;
          (**(code **)(lVar6 + 0x10))(uVar5);
        } while (puVar7 != puVar2);
      }
    }
    ft_mem_free(uVar3,puVar2);
    return;
  }
  return;
}



undefined8 cff_size_select(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  param_1[0xb] = param_2;
  FT_Select_Metrics(*param_1);
  lVar5 = cff_size_get_globals_funcs_isra_0(*param_1);
  if (lVar5 != 0) {
    lVar1 = *(long *)(*param_1 + 0x490);
    puVar2 = *(undefined8 **)param_1[10];
    lVar3 = *(long *)(lVar1 + 0x6d0);
    (**(code **)(lVar5 + 8))(*puVar2,param_1[4],param_1[5],0,0);
    if (*(int *)(lVar1 + 0xb30) != 0) {
      lVar8 = (ulong)(*(int *)(lVar1 + 0xb30) - 1) << 3;
      do {
        lVar6 = param_1[4];
        lVar7 = *(long *)(*(long *)(lVar1 + 0xb38 + lVar8) + 0x68);
        if (lVar3 == lVar7) {
          lVar7 = param_1[5];
        }
        else {
          lVar6 = FT_MulDiv(lVar6,lVar3);
          lVar7 = FT_MulDiv(param_1[5],lVar3,lVar7);
        }
        lVar4 = lVar8 + 8;
        lVar8 = lVar8 + -8;
        (**(code **)(lVar5 + 8))(*(undefined8 *)((long)puVar2 + lVar4),lVar6,lVar7,0,0);
      } while (lVar8 != -8);
    }
  }
  return 0;
}



int cff_size_request(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  long local_40;
  
  lVar6 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(lVar6 + 0x10) & 2) != 0) {
    iVar5 = (**(code **)(*(long *)(lVar6 + 0x370) + 0xd0))(lVar6,param_2,&local_48);
    if (iVar5 == 0) {
      local_4c = cff_size_select(param_1,local_48);
      goto LAB_00102217;
    }
    lVar6 = *param_1;
    param_1[0xb] = 0xffffffff;
  }
  local_4c = FT_Request_Metrics(lVar6,param_2);
  if (local_4c == 0) {
    lVar6 = cff_size_get_globals_funcs_isra_0(*param_1);
    if (lVar6 != 0) {
      lVar1 = *(long *)(*param_1 + 0x490);
      puVar2 = *(undefined8 **)param_1[10];
      lVar3 = *(long *)(lVar1 + 0x6d0);
      (**(code **)(lVar6 + 8))(*puVar2,param_1[4],param_1[5],0,0);
      if (*(int *)(lVar1 + 0xb30) != 0) {
        lVar9 = (ulong)(*(int *)(lVar1 + 0xb30) - 1) * 8;
        do {
          lVar7 = param_1[4];
          lVar8 = *(long *)(*(long *)(lVar1 + 0xb38 + lVar9) + 0x68);
          if (lVar3 == lVar8) {
            lVar8 = param_1[5];
          }
          else {
            lVar7 = FT_MulDiv(lVar7,lVar3);
            lVar8 = FT_MulDiv(param_1[5],lVar3,lVar8);
          }
          lVar4 = lVar9 + 8;
          lVar9 = lVar9 + -8;
          (**(code **)(lVar6 + 8))(*(undefined8 *)((long)puVar2 + lVar4),lVar7,lVar8,0,0);
        } while (lVar9 != -8);
      }
    }
  }
LAB_00102217:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_4c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cff_face_done(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0x370) != 0) {
      (**(code **)(*(long *)(param_1 + 0x370) + 0x18))();
    }
    lVar2 = *(long *)(param_1 + 0x490);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x10);
      cff_index_done(lVar2 + 0xb8);
      cff_index_done(lVar2 + 0x578);
      cff_index_done(lVar2 + 0x38);
      cff_index_done(lVar2 + 0x538);
      if (*(int *)(lVar2 + 0xb30) != 0) {
        lVar5 = 0;
        do {
          if (*(long *)(lVar2 + 0xb38 + lVar5 * 8) != 0) {
            cff_subfont_done_part_0(uVar3);
          }
          lVar5 = lVar5 + 1;
        } while ((uint)lVar5 < *(uint *)(lVar2 + 0xb30));
        ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0xb38));
        *(undefined8 *)(lVar2 + 0xb38) = 0;
      }
      *(undefined4 *)(lVar2 + 0xf8) = 0;
      *(undefined8 *)(lVar2 + 0x100) = 0;
      *(undefined4 *)(lVar2 + 0x108) = 0;
      uVar4 = *(undefined8 *)(*(long *)(lVar2 + 8) + 0x38);
      ft_mem_free(uVar4,*(undefined8 *)(lVar2 + 0x528));
      *(undefined8 *)(lVar2 + 0x528) = 0;
      *(undefined4 *)(lVar2 + 0x530) = 0;
      ft_mem_free(uVar4,*(undefined8 *)(lVar2 + 0x520));
      *(undefined8 *)(lVar2 + 0x520) = 0;
      *(undefined4 *)(lVar2 + 0x510) = 0;
      *(undefined8 *)(lVar2 + 0x518) = 0;
      cff_vstore_done(lVar2 + 0x1398,uVar3);
      cff_subfont_done_part_0(uVar3,lVar2 + 0x668);
      if (*(long *)(lVar2 + 0x1340) != 0) {
        FT_Stream_ReleaseFrame(*(undefined8 *)(lVar2 + 8),lVar2 + 0x1340);
      }
      *(undefined4 *)(lVar2 + 0x1348) = 0;
      *(undefined1 *)(lVar2 + 0x1338) = 0;
      *(undefined4 *)(lVar2 + 0x133c) = 0;
      ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x1370));
      *(undefined8 *)(lVar2 + 0x1370) = 0;
      ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x638));
      *(undefined8 *)(lVar2 + 0x638) = 0;
      ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x640));
      *(undefined8 *)(lVar2 + 0x640) = 0;
      ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x650));
      *(undefined8 *)(lVar2 + 0x650) = 0;
      ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x658));
      *(undefined8 *)(lVar2 + 0x658) = 0;
      if (*(code **)(lVar2 + 0x1390) != (code *)0x0) {
        (**(code **)(lVar2 + 0x1390))(*(undefined8 *)(lVar2 + 5000));
        ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 5000));
        *(undefined8 *)(lVar2 + 5000) = 0;
      }
      ft_mem_free(uVar3,*(undefined8 *)(lVar2 + 0x13b8));
      uVar3 = *(undefined8 *)(param_1 + 0x490);
      *(undefined8 *)(lVar2 + 0x13b8) = 0;
      ft_mem_free(uVar1,uVar3);
      *(undefined8 *)(param_1 + 0x490) = 0;
    }
    if (*(long *)(param_1 + 0x380) != 0) {
      (**(code **)(*(long *)(param_1 + 0x380) + 0x90))(param_1);
    }
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 cff_parse_font_matrix(long param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  undefined1 auVar20 [16];
  long local_a8 [6];
  long local_78 [7];
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = 0xa1;
  if (*(ulong *)(param_1 + 0x28) < lVar1 + 0x30U) goto LAB_001027ba;
  lVar2 = *(long *)(param_1 + 0x38);
  lVar12 = 0;
  plVar16 = local_a8;
  *(undefined1 *)(lVar2 + 0x60) = 1;
  lVar19 = -0x8000000000000000;
  lVar18 = 0x7fffffffffffffff;
  plVar11 = local_78;
  do {
    pcVar3 = *(char **)(lVar1 + lVar12);
    if (*pcVar3 == '\x1e') {
      auVar20 = cff_parse_real(pcVar3,*(undefined8 *)(param_1 + 0x10),0,plVar11);
    }
    else {
      auVar20 = cff_parse_integer();
      lVar9 = auVar20._8_8_;
      lVar10 = auVar20._0_8_;
      if (lVar10 < 0x8000) {
        *plVar11 = 0;
        auVar20._8_8_ = lVar9;
        auVar20._0_8_ = lVar10 << 0x10;
      }
      else {
        if (lVar10 < 100000) {
          uVar8 = 10;
          lVar14 = 1;
        }
        else {
          if (lVar10 < 1000000) {
            lVar14 = 10;
            iVar15 = 1;
            iVar13 = 6;
          }
          else if (lVar10 < 10000000) {
            lVar14 = 100;
            iVar15 = 2;
            iVar13 = 7;
          }
          else if (lVar10 < 100000000) {
            lVar14 = 1000;
            iVar15 = 3;
            iVar13 = 8;
          }
          else {
            lVar14 = 100000;
            if (lVar10 < 1000000000) {
              lVar14 = 10000;
            }
            iVar15 = (999999999 < lVar10) + 4;
            iVar13 = (999999999 < lVar10) + 9;
          }
          lVar9 = lVar10 % lVar14;
          if (lVar10 / lVar14 < 0x8000) {
            *plVar11 = (long)iVar15;
            auVar20 = FT_DivFix(lVar10,lVar14,lVar9);
            goto LAB_001026dd;
          }
          lVar14 = (long)(iVar13 + -4);
          uVar8 = *(undefined8 *)(power_tens + lVar14 * 8);
        }
        *plVar11 = lVar14;
        auVar20 = FT_DivFix(lVar10,uVar8,lVar9);
      }
    }
LAB_001026dd:
    lVar10 = auVar20._8_8_;
    *(long *)(lVar12 + (long)plVar16) = auVar20._0_8_;
    if (auVar20._0_8_ != 0) {
      lVar9 = *plVar11;
      if (lVar19 < lVar9) {
        lVar19 = lVar9;
      }
      if (lVar9 < lVar18) {
        lVar18 = lVar9;
      }
    }
    lVar12 = lVar12 + 8;
    plVar11 = plVar11 + 1;
  } while (lVar12 != 0x30);
  if ((lVar19 + 9U < 10) && (plVar11 = local_78, (ulong)(lVar19 - lVar18) < 10)) {
    do {
      while (lVar1 = *plVar16, lVar1 == 0) {
LAB_0010283b:
        plVar16 = plVar16 + 1;
        plVar11 = plVar11 + 1;
        if (plVar16 == local_78) goto LAB_00102890;
      }
      lVar18 = *(long *)(power_tens + (lVar19 - *plVar11) * 8);
      lVar12 = lVar18 >> 1;
      if (-1 < lVar1) {
        if (lVar1 < 0x7fffffffffffffff - lVar12) {
          lVar10 = (lVar1 + lVar12) % lVar18;
          *plVar16 = (lVar1 + lVar12) / lVar18;
        }
        else {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
          auVar20 = auVar4 << 0x40 | ZEXT816(0x7fffffffffffffff);
          lVar10 = SUB168(auVar20 % SEXT816(lVar18),0);
          *plVar16 = SUB168(auVar20 / SEXT816(lVar18),0);
        }
        goto LAB_0010283b;
      }
      if (lVar1 < lVar12 + -0x7fffffffffffffff) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = SUB168(SEXT816(-0x8000000000000000),8);
        auVar20 = auVar5 << 0x40 | ZEXT816(0x8000000000000000);
        lVar10 = SUB168(auVar20 % SEXT816(lVar18),0);
        *plVar16 = SUB168(auVar20 / SEXT816(lVar18),0);
        goto LAB_0010283b;
      }
      plVar17 = plVar16 + 1;
      lVar10 = (lVar1 - lVar12) % lVar18;
      *plVar16 = (lVar1 - lVar12) / lVar18;
      plVar11 = plVar11 + 1;
      plVar16 = plVar17;
    } while (plVar17 != local_78);
LAB_00102890:
    *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(power_tens + lVar19 * -8);
    *(long *)(lVar2 + 0x40) = local_a8[0];
    *(long *)(lVar2 + 0x48) = local_a8[2];
    *(long *)(lVar2 + 0x50) = local_a8[1];
    *(long *)(lVar2 + 0x58) = local_a8[3];
    *(long *)(lVar2 + 0x70) = local_a8[4];
    *(long *)(lVar2 + 0x78) = local_a8[5];
    cVar7 = FT_Matrix_Check(lVar2 + 0x40,0x7fffffffffffffff,lVar10);
    if (cVar7 == '\0') goto LAB_0010278d;
  }
  else {
LAB_0010278d:
    uVar6 = _UNK_00108dc8;
    uVar8 = __LC10;
    *(undefined8 *)(lVar2 + 0x68) = 1;
    *(undefined8 *)(lVar2 + 0x40) = uVar8;
    *(undefined8 *)(lVar2 + 0x48) = uVar6;
    uVar8 = _UNK_00108dd8;
    *(undefined8 *)(lVar2 + 0x50) = __LC11;
    *(undefined8 *)(lVar2 + 0x58) = uVar8;
    *(undefined1 (*) [16])(lVar2 + 0x70) = (undefined1  [16])0x0;
  }
  uVar8 = 0;
LAB_001027ba:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



ulong do_fixed_isra_0(long param_1,char *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*param_2 == '\x1e') {
    uVar5 = cff_parse_real(param_2,*(undefined8 *)(param_1 + 0x10),param_3,0);
    return uVar5;
  }
  if (*param_2 != -1) {
    lVar2 = cff_parse_integer(param_2,*(undefined8 *)(param_1 + 0x10));
    if (param_3 != 0) {
      lVar3 = -lVar2;
      if (0 < lVar2) {
        lVar3 = lVar2;
      }
      if (*(long *)(power_ten_limits + param_3 * 8) < lVar3 * 0x10000) {
        if (0 < lVar2) {
          return 0x7fffffff;
        }
        return 0xffffffff80000001;
      }
      lVar2 = lVar2 * *(long *)(power_tens + param_3 * 8);
    }
    uVar5 = 0x7fffffff;
    if (lVar2 < 0x8000) {
      uVar5 = 0xffffffff80000001;
      if (-0x8000 < lVar2) {
        uVar5 = lVar2 << 0x10;
      }
    }
    return uVar5;
  }
  uVar1 = *(uint *)(param_2 + 1);
  uVar5 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  if (param_3 == 0) {
    return uVar5;
  }
  if (*(long *)(power_ten_limits + param_3 * 8) < (long)uVar5) {
    uVar4 = 0xffffffff80000001;
    if (uVar5 != 0) {
      uVar4 = 0x7fffffff;
    }
    return uVar4;
  }
  return uVar5 * *(long *)(power_tens + param_3 * 8);
}



undefined8 cff_parse_font_bbox(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0xa1;
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 + 4 <= *(undefined8 **)(param_1 + 0x28)) {
    lVar2 = *(long *)(param_1 + 0x38);
    uVar3 = do_fixed_isra_0(param_1,*puVar1,0);
    uVar4 = FT_RoundFix(uVar3);
    uVar3 = puVar1[1];
    *(undefined8 *)(lVar2 + 0x88) = uVar4;
    uVar3 = do_fixed_isra_0(param_1,uVar3,0);
    uVar4 = FT_RoundFix(uVar3);
    uVar3 = puVar1[2];
    *(undefined8 *)(lVar2 + 0x90) = uVar4;
    uVar3 = do_fixed_isra_0(param_1,uVar3,0);
    uVar4 = FT_RoundFix(uVar3);
    uVar3 = puVar1[3];
    *(undefined8 *)(lVar2 + 0x98) = uVar4;
    uVar3 = do_fixed_isra_0(param_1,uVar3,0);
    uVar3 = FT_RoundFix(uVar3);
    *(undefined8 *)(lVar2 + 0xa0) = uVar3;
    uVar3 = 0;
  }
  return uVar3;
}



long cff_parse_num_isra_0(long param_1,char *param_2)

{
  long lVar1;
  
  if (*param_2 == '\x1e') {
    lVar1 = cff_parse_real(param_2,*(undefined8 *)(param_1 + 0x10),0,0);
    return lVar1 >> 0x10;
  }
  if (*param_2 != -1) {
    lVar1 = cff_parse_integer(param_2,*(undefined8 *)(param_1 + 0x10));
    return lVar1;
  }
  return (long)(short)(((uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 |
                       (uint)(byte)param_2[3]) + 0x80 >> 8);
}



undefined8 cff_parse_private_dict(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) < puVar1 + 2) {
    return 0xa1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  lVar3 = cff_parse_num_isra_0(param_1,*puVar1);
  if (-1 < lVar3) {
    *(long *)(lVar2 + 0xd0) = lVar3;
    lVar3 = cff_parse_num_isra_0(param_1,puVar1[1]);
    if (-1 < lVar3) {
      *(long *)(lVar2 + 200) = lVar3;
      return 0;
    }
  }
  return 3;
}



undefined8 cff_parse_multiple_master(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  short sVar6;
  
  if (*(undefined8 **)(param_1 + 0x28) < *(undefined8 **)(param_1 + 0x20) + 5) {
    return 0xa1;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  lVar4 = cff_parse_num_isra_0(param_1,**(undefined8 **)(param_1 + 0x20));
  uVar5 = 3;
  if (lVar4 - 2U < 0xf) {
    lVar2 = *(long *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x20);
    *(short *)(lVar1 + 0x134) = (short)lVar4;
    uVar5 = 0;
    sVar6 = (short)(lVar2 - lVar3 >> 3) + -4;
    *(short *)(lVar1 + 0x136) = sVar6;
    *(short *)(param_1 + 0x40) = (short)lVar4;
    *(short *)(param_1 + 0x42) = sVar6;
  }
  return uVar5;
}



undefined8 cff_parse_cid_ros(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xa1;
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 + 3 <= *(undefined8 **)(param_1 + 0x28)) {
    lVar2 = *(long *)(param_1 + 0x38);
    uVar3 = cff_parse_num_isra_0(param_1,*puVar1);
    uVar4 = puVar1[1];
    *(undefined4 *)(lVar2 + 0xe4) = uVar3;
    uVar3 = cff_parse_num_isra_0(param_1,uVar4);
    uVar4 = puVar1[2];
    *(undefined4 *)(lVar2 + 0xe8) = uVar3;
    uVar4 = cff_parse_num_isra_0(param_1,uVar4);
    *(undefined8 *)(lVar2 + 0xf0) = uVar4;
    uVar4 = 0;
  }
  return uVar4;
}



undefined8 cff_parse_vsindex(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x2d0) != 0)) {
    uVar3 = 0xa0;
    if (*(char *)(*(long *)(lVar1 + 0x2d0) + 0x421) == '\0') {
      uVar2 = cff_parse_num_isra_0(param_1,**(undefined8 **)(param_1 + 0x20));
      uVar3 = 0;
      *(undefined4 *)(lVar1 + 0x2c8) = uVar2;
    }
    return uVar3;
  }
  return 3;
}



undefined8 cff_parser_run(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  int *piVar11;
  ulong *puVar12;
  long *plVar13;
  byte *pbVar14;
  long lVar15;
  
  puVar4 = *(ulong **)(param_1 + 0x20);
  *(byte **)(param_1 + 8) = param_2;
  *(byte **)(param_1 + 0x10) = param_3;
  *(ulong **)(param_1 + 0x28) = puVar4;
  *(byte **)(param_1 + 0x18) = param_2;
  puVar12 = puVar4;
  if (param_3 <= param_2) {
    return 0;
  }
  do {
    uVar10 = (uint)*param_2;
    uVar9 = (long)puVar4 - (long)puVar12 >> 3;
    uVar8 = (uint)uVar9;
    if ((uVar10 < 0x1b || uVar10 == 0x1f) || (uVar10 == 0xff)) {
      if (*(uint *)(param_1 + 0x30) <= uVar8) {
        return 6;
      }
      *puVar4 = (ulong)param_2;
      pbVar14 = param_2;
      if (uVar10 == 0xc) {
        pbVar14 = param_2 + 1;
        if (param_3 <= pbVar14) {
          return 6;
        }
        uVar10 = (uint)CONCAT11(1,param_2[1]);
      }
      piVar11 = &cff_field_handlers;
      iVar3 = 4;
LAB_00102e4f:
      if (piVar11[1] != (uVar10 | *(uint *)(param_1 + 0x34))) break;
      plVar13 = (long *)((ulong)(uint)piVar11[2] + *(long *)(param_1 + 0x38));
      if (iVar3 == 6) {
switchD_00102e87_caseD_6:
        uVar9 = uVar9 & 0xffffffff;
        if ((uint)piVar11[6] < uVar8) {
          uVar9 = (ulong)(uint)piVar11[6];
        }
        *(char *)(*(long *)(param_1 + 0x38) + (ulong)(uint)piVar11[7]) = (char)uVar9;
        if ((int)uVar9 != 0) {
          puVar4 = puVar12 + uVar9;
          lVar15 = 0;
          do {
            uVar9 = *puVar12;
            puVar12 = puVar12 + 1;
            lVar5 = cff_parse_num_isra_0(param_1,uVar9);
            lVar15 = lVar15 + lVar5;
            bVar1 = *(byte *)(piVar11 + 3);
            uVar9 = (ulong)bVar1;
            if (bVar1 == 2) {
              *(short *)plVar13 = (short)lVar15;
            }
            else if (bVar1 == 4) {
              *(int *)plVar13 = (int)lVar15;
            }
            else if (bVar1 == 1) {
              *(char *)plVar13 = (char)lVar15;
              uVar9 = (ulong)*(byte *)(piVar11 + 3);
            }
            else {
              *plVar13 = lVar15;
            }
            plVar13 = (long *)((long)plVar13 + uVar9);
          } while (puVar4 != puVar12);
        }
        iVar3 = *piVar11;
      }
      else {
        if (uVar8 == 0) {
          return 6;
        }
        switch(iVar3) {
        default:
          uVar6 = (**(code **)(piVar11 + 4))(param_1);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          iVar3 = *piVar11;
          goto LAB_00102ec8;
        case 1:
        case 4:
        case 5:
          lVar15 = cff_parse_num_isra_0(param_1,*puVar12);
          break;
        case 2:
          lVar15 = do_fixed_isra_0(param_1,*puVar12,0);
          break;
        case 3:
          lVar15 = do_fixed_isra_0(param_1,*puVar12,3);
          cVar2 = (char)piVar11[3];
          goto joined_r0x00102f16;
        case 6:
          goto switchD_00102e87_caseD_6;
        }
        cVar2 = (char)piVar11[3];
joined_r0x00102f16:
        if (cVar2 == '\x02') {
          *(short *)plVar13 = (short)lVar15;
          iVar3 = *piVar11;
        }
        else if (cVar2 == '\x04') {
          *(int *)plVar13 = (int)lVar15;
          iVar3 = *piVar11;
        }
        else if (cVar2 == '\x01') {
          *(char *)plVar13 = (char)lVar15;
          iVar3 = *piVar11;
        }
        else {
          *plVar13 = lVar15;
          iVar3 = *piVar11;
        }
      }
LAB_00102ec8:
      if (iVar3 == 8) goto joined_r0x00102ee0;
      puVar12 = *(ulong **)(param_1 + 0x20);
LAB_00102ed5:
      *(ulong **)(param_1 + 0x28) = puVar12;
    }
    else {
      if (*(uint *)(param_1 + 0x30) <= uVar8) {
        return 6;
      }
      *(ulong **)(param_1 + 0x28) = puVar4 + 1;
      *puVar4 = (ulong)param_2;
      if (uVar10 == 0x1e) {
        pbVar14 = param_2 + 1;
        if (param_3 <= param_2 + 1) {
          return 0;
        }
        while( true ) {
          pbVar7 = pbVar14 + 1;
          if ((*pbVar14 >> 4 == 0xf) || ((~*pbVar14 & 0xf) == 0)) break;
          pbVar14 = pbVar7;
          if (param_3 == pbVar7) {
            return 0;
          }
        }
      }
      else if (uVar10 == 0x1c) {
        pbVar14 = param_2 + 2;
      }
      else if (uVar10 == 0x1d) {
        pbVar14 = param_2 + 4;
      }
      else {
        pbVar14 = param_2 + (0xf6 < uVar10);
      }
    }
joined_r0x00102ee0:
    param_2 = pbVar14 + 1;
    if (param_3 <= param_2) {
      return 0;
    }
    puVar4 = *(ulong **)(param_1 + 0x28);
    puVar12 = *(ulong **)(param_1 + 0x20);
  } while( true );
  iVar3 = piVar11[8];
  piVar11 = piVar11 + 8;
  if (iVar3 == 0) goto LAB_00102ed5;
  goto LAB_00102e4f;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int cff_load_private_dict(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [12];
  undefined4 uStack_54;
  undefined1 local_50 [16];
  long local_40;
  
  iVar3 = 0;
  lVar1 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 **)(param_2 + 0x428) = param_1;
  *(undefined1 *)(param_2 + 0x421) = 0;
  if ((*(long *)(param_2 + 200) != 0) && (*(long *)(param_2 + 0xd0) != 0)) {
    *(undefined8 *)(param_2 + 0x148) = 0;
    uVar2 = _UNK_00108de8;
    uVar4 = __LC13;
    puVar6 = (undefined8 *)(param_2 + 0x150U & 0xfffffffffffffff8);
    uVar5 = (ulong)(((int)(param_2 + 0x148) - (int)puVar6) + 0x2d8U >> 3);
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(long *)(param_2 + 0x418) = param_2;
    *(undefined8 *)(param_2 + 0x2e0) = 1;
    *(undefined4 *)(param_2 + 0x3e0) = 0xffffffff;
    *(undefined8 *)(param_2 + 1000) = 0xf5c;
    *(undefined4 *)(param_2 + 0x450) = param_3;
    *(undefined8 *)(param_2 + 0x458) = param_4;
    *(undefined8 *)(param_2 + 0x2d0) = uVar4;
    *(undefined8 *)(param_2 + 0x2d8) = uVar2;
    if (*(char *)(param_1 + 6) == '\0') {
      local_50._8_4_ = *(undefined4 *)(param_2 + 0x134);
      local_88 = (undefined8 *)*param_1;
      iVar7 = 0x61;
      uStack_54 = 0x2000;
    }
    else {
      local_50._8_4_ = *(undefined4 *)(param_2 + 0x134);
      uStack_54 = 0x5000;
      iVar7 = *(int *)(param_1 + 0xf5) + 1;
      local_88 = (undefined8 *)*param_1;
    }
    iVar3 = 0;
    local_50._0_8_ = param_2 + 0x148;
    local_50._12_4_ = 0;
    local_60 = SUB1612((undefined1  [16])0x0,0);
    local_80 = (undefined1  [16])0x0;
    local_70 = (undefined1  [16])0x0;
    uVar4 = ft_mem_qrealloc(*local_88,8,0,iVar7,0,&local_8c);
    local_70._8_8_ = uVar4;
    if (local_8c == 0) {
      local_60._8_4_ = iVar7;
      local_60._0_8_ = uVar4;
      iVar3 = FT_Stream_Seek(lVar1,*(long *)(param_2 + 200) + param_1[3]);
      if (iVar3 == 0) {
        iVar3 = FT_Stream_EnterFrame(lVar1,*(undefined8 *)(param_2 + 0xd0));
        if (iVar3 == 0) {
          iVar3 = cff_parser_run(&local_88,*(undefined8 *)(lVar1 + 0x40),
                                 *(undefined8 *)(lVar1 + 0x48));
          FT_Stream_ExitFrame(lVar1);
          if (iVar3 == 0) {
            lVar1 = *(long *)(param_2 + 0x3f0);
            *(byte *)(param_2 + 0x148) = *(byte *)(param_2 + 0x148) & 0xfe;
            if (lVar1 < 0) {
              *(long *)(param_2 + 0x3f0) = -lVar1;
            }
            else if (lVar1 == 0) {
              *(undefined8 *)(param_2 + 0x3f0) = 0x3ade68b1;
            }
            if (1000 < *(ulong *)(param_2 + 0x2d8)) {
              *(undefined8 *)(param_2 + 0x2d8) = 7;
            }
            if (1000 < *(ulong *)(param_2 + 0x2e0)) {
              *(undefined8 *)(param_2 + 0x2e0) = 1;
            }
          }
        }
      }
      uVar4 = local_70._8_8_;
    }
    *(undefined4 *)(param_2 + 0x470) = 0;
    *(undefined8 *)(param_2 + 0x468) = *(undefined8 *)(param_2 + 0x460);
    ft_mem_free(*local_88,uVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cff_free_glyph_data(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = *(long **)(*(long *)(param_1 + 0xf0) + 0x68);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(*(long *)(param_1 + 0x490) + 0x570) == 0) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        FT_Stream_ReleaseFrame(*(undefined8 *)(*(long *)(param_1 + 0x490) + 0x538));
        return;
      }
      goto LAB_001033a9;
    }
  }
  else {
    local_28 = *param_2;
    local_20 = param_3;
    (**(code **)(*plVar1 + 8))(plVar1[1],&local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001033a9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong cff_parse_blend(long param_1)

{
  int iVar1;
  long lVar2;
  void *__s1;
  char *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  int *piVar22;
  long in_FS_OFFSET;
  uint local_50;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar19 = *(long *)(param_1 + 0x38);
  if ((lVar19 != 0) && (lVar2 = *(long *)(lVar19 + 0x2d0), lVar2 != 0)) {
    __s1 = *(void **)(lVar2 + 0x458);
    uVar7 = *(uint *)(lVar2 + 0x450);
    iVar10 = *(int *)(lVar19 + 0x2c8);
    if ((((*(char *)(lVar2 + 0x420) == '\0') ||
         ((iVar10 != *(int *)(lVar2 + 0x430) || (uVar7 != *(uint *)(lVar2 + 0x434))))) ||
        ((uVar7 != 0 &&
         (iVar11 = memcmp(__s1,*(void **)(lVar2 + 0x438),(ulong)uVar7 << 3), iVar11 != 0)))) &&
       (uVar13 = cff_blend_build_vector(lVar2 + 0x420,iVar10,uVar7,__s1), (int)uVar13 != 0))
    goto LAB_001035b5;
    uVar7 = cff_parse_num_isra_0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x28) + -8));
    if (uVar7 <= *(uint *)(param_1 + 0x30)) {
      local_44 = 0;
      puVar18 = *(ulong **)(param_1 + 0x20);
      uVar20 = *(int *)(lVar2 + 0x440) * uVar7;
      uVar13 = 0xa1;
      local_50 = (uint)((*(long *)(param_1 + 0x28) + -8) - (long)puVar18 >> 3);
      if (uVar20 <= local_50) {
        iVar10 = uVar7 * 5;
        uVar9 = *(uint *)(lVar2 + 0x474);
        uVar8 = *(int *)(lVar2 + 0x470) + iVar10;
        if (uVar9 < uVar8) {
          uVar21 = *(ulong *)(lVar2 + 0x460);
          uVar5 = *(ulong *)(lVar2 + 0x468);
          uVar15 = ft_mem_qrealloc(*(undefined8 *)(*(long *)(lVar2 + 0x428) + 0x10),1,uVar9,
                                   iVar10 + uVar9,uVar21,&local_44);
          *(ulong *)(lVar2 + 0x460) = uVar15;
          uVar13 = (ulong)local_44;
          if (local_44 != 0) goto LAB_001036f8;
          uVar8 = *(uint *)(lVar2 + 0x470);
          puVar18 = *(ulong **)(param_1 + 0x20);
          *(int *)(lVar2 + 0x474) = *(int *)(lVar2 + 0x474) + iVar10;
          *(ulong *)(lVar2 + 0x468) = uVar8 + uVar15;
          if ((uVar21 != 0) && (uVar21 != uVar15)) {
            puVar6 = *(ulong **)(param_1 + 0x28);
            for (puVar16 = puVar18; puVar16 < puVar6; puVar16 = puVar16 + 1) {
              uVar13 = *puVar16;
              if ((uVar21 <= uVar13) && (uVar13 < uVar5)) {
                *puVar16 = uVar13 + (uVar15 - uVar21);
              }
            }
          }
          uVar8 = iVar10 + uVar8;
        }
        *(uint *)(lVar2 + 0x470) = uVar8;
        local_50 = local_50 - uVar20;
        uVar9 = local_50 + uVar7;
        uVar20 = uVar9;
        if (uVar7 != 0) {
          do {
            piVar22 = *(int **)(lVar2 + 0x448);
            uVar13 = (ulong)local_50;
            iVar10 = do_fixed_isra_0(param_1,puVar18[uVar13],0);
            lVar19 = *(long *)(param_1 + 0x20);
            if (1 < *(uint *)(lVar2 + 0x440)) {
              iVar11 = 1 - uVar20;
              do {
                uVar21 = (ulong)uVar20;
                piVar22 = piVar22 + 1;
                uVar20 = uVar20 + 1;
                iVar1 = *piVar22;
                pcVar3 = *(char **)(lVar19 + uVar21 * 8);
                if (*pcVar3 == '\x1e') {
                  iVar12 = cff_parse_real(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
                  lVar19 = *(long *)(param_1 + 0x20);
                  lVar17 = (long)iVar12;
                }
                else if (*pcVar3 == -1) {
                  uVar7 = *(uint *)(pcVar3 + 1);
                  lVar17 = (long)(int)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 |
                                       (uVar7 & 0xff00) << 8 | uVar7 << 0x18);
                }
                else {
                  lVar14 = cff_parse_integer(pcVar3,*(undefined8 *)(param_1 + 0x10));
                  lVar17 = 0x7fffffff;
                  if ((lVar14 < 0x8000) && (lVar17 = (long)((int)lVar14 << 0x10), lVar14 < -0x7fff))
                  {
                    lVar17 = -0x7fffffff;
                  }
                }
                iVar10 = iVar10 + (int)((ulong)(iVar1 * lVar17 + 0x8000 + (iVar1 * lVar17 >> 0x3f))
                                       >> 0x10);
              } while (iVar11 + uVar20 < *(uint *)(lVar2 + 0x440));
            }
            puVar4 = *(undefined1 **)(lVar2 + 0x468);
            local_50 = local_50 + 1;
            *(undefined1 **)(lVar19 + uVar13 * 8) = puVar4;
            *(undefined1 **)(lVar2 + 0x468) = puVar4 + 1;
            *puVar4 = 0xff;
            puVar4 = *(undefined1 **)(lVar2 + 0x468);
            *(undefined1 **)(lVar2 + 0x468) = puVar4 + 1;
            *puVar4 = (char)((uint)iVar10 >> 0x18);
            puVar4 = *(undefined1 **)(lVar2 + 0x468);
            *(undefined1 **)(lVar2 + 0x468) = puVar4 + 1;
            *puVar4 = (char)((uint)iVar10 >> 0x10);
            puVar4 = *(undefined1 **)(lVar2 + 0x468);
            *(undefined1 **)(lVar2 + 0x468) = puVar4 + 1;
            *puVar4 = (char)((uint)iVar10 >> 8);
            puVar4 = *(undefined1 **)(lVar2 + 0x468);
            *(undefined1 **)(lVar2 + 0x468) = puVar4 + 1;
            *puVar4 = (char)iVar10;
            puVar18 = *(ulong **)(param_1 + 0x20);
          } while (uVar9 != local_50);
        }
        *(ulong **)(param_1 + 0x28) = puVar18 + uVar9;
        uVar13 = (ulong)local_44;
      }
LAB_001036f8:
      *(undefined1 *)(lVar2 + 0x421) = 1;
      goto LAB_001035b5;
    }
  }
  uVar13 = 3;
LAB_001035b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 cff_index_access_element(long *param_1,uint param_2,long *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ulong *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  byte local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < *(uint *)((long)param_1 + 0x14)) {
    uVar10 = (ulong)param_2;
    lVar11 = param_1[6];
    lVar3 = *param_1;
    if (lVar11 != 0) {
      uVar7 = *(ulong *)(lVar11 + uVar10 * 8);
      if (uVar7 != 0) {
        puVar4 = (ulong *)(lVar11 + (ulong)(param_2 + 1) * 8);
        do {
          uVar8 = *puVar4;
          if (uVar8 != 0) goto LAB_00103845;
          puVar4 = puVar4 + 1;
        } while (puVar4 != (ulong *)(lVar11 + 8 +
                                    ((ulong)((*(uint *)((long)param_1 + 0x14) - param_2) - 1) +
                                    (ulong)(param_2 + 1)) * 8));
        uVar6 = 0;
LAB_001039b2:
        lVar11 = *(long *)(lVar3 + 8);
        uVar12 = param_1[4];
        uVar8 = 0;
        uVar10 = lVar11 + 1;
        goto LAB_001039c0;
      }
LAB_001038c0:
      uVar6 = 0;
      goto LAB_001038c2;
    }
    uVar6 = FT_Stream_Seek(lVar3,(ulong)*(uint *)(param_1 + 2) + param_1[1] +
                                 (ulong)(*(byte *)(param_1 + 3) * param_2));
    if ((int)uVar6 == 0) {
      uVar6 = FT_Stream_Read(*param_1,local_44,(char)param_1[3]);
      if ((int)uVar6 == 0) {
        bVar1 = *(byte *)(param_1 + 3);
        if (bVar1 != 0) {
          uVar7 = 0;
          pbVar5 = local_44;
          do {
            bVar2 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar7 = uVar7 << 8 | (ulong)bVar2;
          } while (local_44 + (ulong)(bVar1 - 1) + 1 != pbVar5);
          if (uVar7 != 0) {
            while( true ) {
              uVar9 = (int)uVar10 + 1;
              uVar10 = (ulong)uVar9;
              uVar6 = FT_Stream_Read(*param_1,local_44,bVar1);
              if (((int)uVar6 == 0) && (*(byte *)(param_1 + 3) != 0)) {
                uVar8 = 0;
                pbVar5 = local_44;
                do {
                  bVar1 = *pbVar5;
                  pbVar5 = pbVar5 + 1;
                  uVar8 = uVar8 << 8 | (ulong)bVar1;
                } while (local_44 + (ulong)(*(byte *)(param_1 + 3) - 1) + 1 != pbVar5);
                if (uVar8 != 0) goto LAB_00103845;
              }
              if (*(uint *)((long)param_1 + 0x14) <= uVar9) break;
              bVar1 = *(byte *)(param_1 + 3);
            }
            goto LAB_001039b2;
          }
        }
        goto LAB_001038c0;
      }
    }
  }
  else {
    uVar6 = 6;
  }
  goto LAB_00103895;
LAB_00103845:
  lVar11 = *(long *)(lVar3 + 8);
  uVar12 = param_1[4];
  uVar10 = lVar11 + 1;
  if (uVar10 < uVar8) {
    uVar8 = (lVar11 - uVar12) + 1;
    bVar13 = uVar7 < uVar8;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
LAB_001039c0:
    if (uVar10 - uVar8 < uVar12) {
      uVar8 = (lVar11 - uVar12) + 1;
    }
    bVar13 = uVar7 < uVar8;
  }
  if (bVar13) {
    *param_4 = uVar8 - uVar7;
    if (param_1[7] == 0) {
      uVar6 = FT_Stream_Seek(lVar3,(uVar7 - 1) + param_1[4]);
      if ((int)uVar6 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = FT_Stream_ExtractFrame(lVar3,uVar8 - uVar7,param_3);
          return uVar6;
        }
        goto LAB_00103a25;
      }
    }
    else {
      *param_3 = param_1[7] + -1 + uVar7;
    }
  }
  else {
LAB_001038c2:
    *param_3 = 0;
    *param_4 = 0;
  }
LAB_00103895:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00103a25:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cff_get_glyph_data(long param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  uint local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0xf0) + 0x68);
  if (puVar1 == (undefined8 *)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      cff_index_access_element(*(long *)(param_1 + 0x490) + 0x538);
      return;
    }
  }
  else {
    (**(code **)*puVar1)(puVar1[1],param_2,&local_38);
    *param_3 = local_38;
    *param_4 = (ulong)local_30;
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong cff_slot_load(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  byte bVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  ulong in_stack_fffffffffffff430;
  uint local_bb0;
  long local_ba8;
  long lStack_ba0;
  char local_b95;
  ushort local_b70;
  undefined6 uStack_b6e;
  ulong local_b68;
  long lStack_b60;
  long local_b58;
  long lStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  long local_b38;
  long lStack_b30;
  undefined1 local_b28 [1264];
  undefined1 local_638 [64];
  ulong local_5f8;
  long local_5e8;
  long lStack_5e0;
  undefined1 local_5b6;
  long local_5b0;
  code *local_598;
  undefined8 local_1b0;
  undefined1 local_19f;
  long local_40;
  
  uVar16 = _UNK_00108df8;
  uVar21 = (ulong)param_3 & 0xffffffff;
  lVar18 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar17 = *(long *)(lVar18 + 0x398);
  lVar5 = *(long *)(lVar18 + 0x490);
  puVar6 = *(undefined8 **)(lVar17 + 0x50);
  uVar22 = (uint)param_3;
  if ((*(int *)(lVar5 + 0x74c) == 0xffff) || (*(long *)(lVar5 + 0x528) == 0)) {
    if (uVar22 < *(uint *)(lVar5 + 0x24)) {
LAB_00103b76:
      uVar23 = param_4 & 0xffffffff;
      if ((param_4 & 0x400) != 0) {
        uVar23 = (ulong)((uint)param_4 | 3);
      }
      *(undefined8 *)(param_1 + 0x138) = __LC15;
      *(undefined8 *)(param_1 + 0x140) = uVar16;
      local_bb0 = (uint)uVar23;
      if (param_2 == (ulong *)0x0) {
LAB_00103d50:
        if ((uVar23 & 0x4000) != 0) goto LAB_00103b39;
        if (((local_bb0 & 0x1100000) == 0x100000) && (*(long *)(lVar18 + 0x5c8) != 0)) {
          if ((param_2 != (ulong *)0x0) &&
             ((uVar15 = 0x24, (short)param_2[3] == 0 || (*(short *)((long)param_2 + 0x1a) == 0))))
          goto LAB_00103b3e;
          lVar8 = *(long *)(lVar18 + 0x370);
          iVar14 = (**(code **)(lVar8 + 0x168))(param_1,uVar21,param_3,param_4);
          if (iVar14 == 0) {
            uVar23 = param_2[4];
            uVar15 = param_2[5];
            *(undefined4 *)(param_1 + 0x90) = 0x53564720;
            (**(code **)(lVar8 + 0x140))(lVar18,0,uVar21,&local_b70,&local_b68);
            (**(code **)(lVar8 + 0x140))(lVar18,1,uVar21,&local_b70,&local_b48);
            lVar18 = (long)(int)uVar23 * (local_b68 & 0xffff);
            *(ulong *)(param_1 + 0x70) = local_b68 & 0xffff;
            *(ulong *)(param_1 + 0x78) = local_b48 & 0xffff;
            *(long *)(param_1 + 0x50) = lVar18 + 0x8000 + (lVar18 >> 0x3f) >> 0x10;
            lVar18 = (long)(int)uVar15 * (local_b48 & 0xffff);
            *(long *)(param_1 + 0x68) = lVar18 + 0x8000 + (lVar18 >> 0x3f) >> 0x10;
            uVar15 = 0;
            goto LAB_00103b3e;
          }
        }
        uVar22 = *(uint *)(lVar5 + 0xb30);
        if (uVar22 == 0) {
          local_b68 = *(ulong *)(lVar5 + 0x6a8);
          lStack_b60 = *(long *)(lVar5 + 0x6b0);
          bVar11 = false;
          local_b58 = *(long *)(lVar5 + 0x6b8);
          lStack_b50 = *(long *)(lVar5 + 0x6c0);
          local_ba8 = *(long *)(lVar5 + 0x6d8);
          lStack_ba0 = *(long *)(lVar5 + 0x6e0);
        }
        else {
          bVar13 = cff_fd_select_get(lVar5 + 0x1338,uVar21);
          bVar11 = false;
          lVar8 = *(long *)(lVar5 + 0x6d0);
          uVar15 = (ulong)bVar13;
          if (uVar22 <= bVar13) {
            uVar15 = (ulong)(uVar22 - 1 & 0xff);
          }
          lVar9 = *(long *)(lVar5 + 0xb38 + uVar15 * 8);
          local_b68 = *(ulong *)(lVar9 + 0x40);
          lStack_b60 = *(long *)(lVar9 + 0x48);
          lVar10 = *(long *)(lVar9 + 0x68);
          local_b58 = *(long *)(lVar9 + 0x50);
          lStack_b50 = *(long *)(lVar9 + 0x58);
          local_ba8 = *(long *)(lVar9 + 0x70);
          lStack_ba0 = *(long *)(lVar9 + 0x78);
          if (lVar8 != lVar10) {
            uVar16 = FT_MulDiv(*(undefined8 *)(param_1 + 0x138));
            *(undefined8 *)(param_1 + 0x138) = uVar16;
            uVar16 = FT_MulDiv(*(undefined8 *)(param_1 + 0x140),lVar8,lVar10);
            bVar11 = true;
            *(undefined8 *)(param_1 + 0x140) = uVar16;
          }
        }
        *(undefined4 *)(param_1 + 200) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
        uVar22 = ((uint)(uVar23 >> 1) ^ 1) & 1;
        *(byte *)(param_1 + 0x131) = (byte)uVar23 & 1 ^ 1;
        local_b95 = (char)uVar22;
        *(char *)(param_1 + 0x130) = local_b95;
        (*(code *)*puVar6)(local_638,lVar18,param_2,param_1,uVar22,(int)local_bb0 >> 0x10 & 0xf,
                           cff_get_glyph_data,cff_free_glyph_data);
        if ((uVar23 & 0x100) != 0) {
          local_19f = 1;
        }
        local_5b6 = (uVar23 & 0x400) != 0;
        local_bb0 = local_bb0 & 0x400;
        uVar15 = (*(code *)puVar6[1])(local_638,param_2,uVar21);
        if ((int)uVar15 != 0) goto LAB_00103b3e;
        uVar15 = cff_get_glyph_data(lVar18,uVar21);
        if ((int)uVar15 != 0) goto LAB_00103b3e;
        (**(code **)(lVar17 + 0x30))(local_b28,local_638,0);
        uVar12 = local_b48;
        uVar22 = (*(code *)puVar6[2])(local_b28,CONCAT62(uStack_b6e,local_b70),local_b48);
        if ((char)uVar22 == -0x5c) {
          *(undefined1 *)(param_1 + 0x130) = 0;
          uVar22 = (*(code *)puVar6[2])(local_b28,CONCAT62(uStack_b6e,local_b70),uVar12);
          bVar11 = true;
          local_b95 = '\0';
        }
        cff_free_glyph_data(lVar18,&local_b70,uVar12);
        uVar15 = (ulong)uVar22;
        if (uVar22 != 0) goto LAB_00103b3e;
        if (*(long *)(*(long *)(lVar18 + 0xf0) + 0x68) == 0) {
          if (*(long *)(lVar5 + 0x568) != 0) {
            *(long *)(param_1 + 0x100) =
                 *(long *)(lVar5 + 0x570) + -1 + *(long *)(*(long *)(lVar5 + 0x568) + uVar21 * 8);
            *(ulong *)(param_1 + 0x108) = uVar12;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x100) = 0;
          *(undefined8 *)(param_1 + 0x108) = 0;
        }
        (*local_598)();
        plVar7 = *(long **)(*(long *)(lVar18 + 0xf0) + 0x68);
        if ((plVar7 != (long *)0x0) && (*(code **)(*plVar7 + 0x10) != (code *)0x0)) {
          uStack_b40 = 0;
          local_b48 = local_5f8;
          local_b38 = local_5e8;
          lStack_b30 = lStack_5e0;
          uVar15 = (**(code **)(*plVar7 + 0x10))(plVar7[1],uVar21,0);
          local_5f8 = local_b48;
          local_5e8 = local_b38;
          lStack_5e0 = lStack_b30;
          if ((int)uVar15 != 0) goto LAB_00103b3e;
        }
        if ((uVar23 & 0x400) != 0) {
          lVar18 = *(long *)(param_1 + 0x128);
          *(ulong *)(param_1 + 0x40) = local_5f8;
          *(undefined8 *)(param_1 + 0x50) = local_1b0;
          *(ulong *)(lVar18 + 0x10) = local_b68;
          *(long *)(lVar18 + 0x18) = lStack_b60;
          *(undefined1 *)(lVar18 + 0xc) = 1;
          *(long *)(lVar18 + 0x20) = local_b58;
          *(long *)(lVar18 + 0x28) = lStack_b50;
          *(long *)(lVar18 + 0x30) = local_ba8;
          *(long *)(lVar18 + 0x38) = lStack_ba0;
          uVar15 = 0;
          goto LAB_00103b3e;
        }
        if (*(short *)(lVar18 + 0x1b6) == 0) {
          *(undefined8 *)(param_1 + 0x50) = local_1b0;
          *(undefined8 *)(param_1 + 0x70) = local_1b0;
        }
        else {
          local_b70 = 0;
          local_b48 = local_b48 & 0xffffffffffff0000;
          (**(code **)(*(long *)(lVar18 + 0x370) + 0x140))(lVar18,0,uVar21,&local_b70,&local_b48);
          *(ulong *)(param_1 + 0x50) = local_b48 & 0xffff;
          *(long *)(param_1 + 0x40) = (long)(short)local_b70;
          *(ulong *)(param_1 + 0x70) = local_b48 & 0xffff;
        }
        *(undefined1 *)(*(long *)(param_1 + 0x128) + 0xc) = 0;
        if ((*(char *)(lVar18 + 0x1f0) == '\0') || (*(short *)(lVar18 + 0x21e) == 0)) {
          if (*(short *)(lVar18 + 0x268) == -1) {
            uVar21 = (ulong)((int)*(short *)(lVar18 + 0x198) - (int)*(short *)(lVar18 + 0x19a));
            *(ulong *)(param_1 + 0x68) = uVar21;
          }
          else {
            uVar21 = (ulong)((int)*(short *)(lVar18 + 0x2c2) - (int)*(short *)(lVar18 + 0x2c4));
            *(ulong *)(param_1 + 0x68) = uVar21;
          }
        }
        else {
          local_b70 = 0;
          local_b48 = local_b48 & 0xffffffffffff0000;
          (**(code **)(*(long *)(lVar18 + 0x370) + 0x140))(lVar18,1,uVar21,&local_b70,&local_b48);
          local_bb0 = 1;
          *(long *)(param_1 + 0x60) = (long)(short)local_b70;
          uVar21 = local_b48 & 0xffff;
          *(ulong *)(param_1 + 0x68) = uVar21;
        }
        *(ulong *)(param_1 + 0x78) = uVar21;
        iVar14 = 4;
        *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
        if (param_2 != (ulong *)0x0) {
          iVar14 = (-(uint)(*(ushort *)((long)param_2 + 0x1a) < 0x18) & 0x100) + 4;
        }
        *(int *)(param_1 + 0xe8) = iVar14;
        lVar18 = param_1 + 200;
        if (((local_b68 != 0x10000) || (lStack_b50 != 0x10000)) ||
           (lStack_b60 != 0 || local_b58 != 0)) {
          FT_Outline_Transform(lVar18,&local_b68);
          lVar17 = (long)*(int *)(param_1 + 0x50) * (long)(int)local_b68;
          *(long *)(param_1 + 0x50) =
               (long)(int)((ulong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
          lVar17 = (long)*(int *)(param_1 + 0x68) * (long)(int)lStack_b50;
          *(long *)(param_1 + 0x68) =
               (long)(int)((ulong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
        }
        if (local_ba8 != 0 || lStack_ba0 != 0) {
          FT_Outline_Translate(lVar18,local_ba8,lStack_ba0);
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + local_ba8;
          *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + lStack_ba0;
        }
        if (((uVar23 & 1) == 0) || (bVar11)) {
          iVar14 = *(int *)(param_1 + 0x140);
          iVar4 = *(int *)(param_1 + 0x138);
          if (((local_b95 == '\0') || (local_5b0 == 0)) &&
             (sVar3 = *(short *)(param_1 + 0xca), 0 < sVar3)) {
            plVar7 = *(long **)(param_1 + 0xd0);
            plVar19 = plVar7;
            do {
              plVar20 = plVar19 + 2;
              lVar17 = (long)(int)*plVar19 * (long)iVar4;
              *plVar19 = (long)(int)((ulong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
              lVar17 = (long)(int)plVar19[1] * (long)iVar14;
              plVar19[1] = (long)(int)((ulong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
              plVar19 = plVar20;
            } while (plVar20 != plVar7 + (ulong)(uint)(int)sVar3 * 2);
          }
          lVar17 = (long)*(int *)(param_1 + 0x50) * (long)iVar4;
          *(long *)(param_1 + 0x50) =
               (long)(int)((ulong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
          lVar17 = (long)*(int *)(param_1 + 0x68) * (long)iVar14;
          *(long *)(param_1 + 0x68) =
               (long)(int)((ulong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
        }
        FT_Outline_Get_CBox(lVar18,&local_b48);
        *(ulong *)(param_1 + 0x30) = local_b38 - local_b48;
        *(ulong *)(param_1 + 0x38) = lStack_b30 - uStack_b40;
        *(ulong *)(param_1 + 0x40) = local_b48;
        *(long *)(param_1 + 0x48) = lStack_b30;
        if (local_bb0 != 0) {
          *(ulong *)(param_1 + 0x58) = local_b48 - *(long *)(param_1 + 0x50) / 2;
          lVar18 = (long)*(int *)(param_1 + 0x60) * (long)*(int *)(param_1 + 0x140);
          *(long *)(param_1 + 0x60) =
               (long)(int)((ulong)(lVar18 + 0x8000 + (lVar18 >> 0x3f)) >> 0x10);
          uVar15 = 0;
          goto LAB_00103b3e;
        }
        if ((uVar23 & 0x10) != 0) {
          ft_synthesize_vertical_metrics(param_1 + 0x30,*(undefined8 *)(param_1 + 0x68));
          uVar15 = 0;
          goto LAB_00103b3e;
        }
      }
      else {
        uVar15 = param_2[5];
        param_3 = (undefined8 *)*param_2;
        param_4 = 0xffffffff;
        *(ulong *)(param_1 + 0x138) = param_2[4];
        *(ulong *)(param_1 + 0x140) = uVar15;
        plVar7 = param_3 + 0x6e;
        puVar1 = param_3 + 0x18;
        if ((((param_2[0xb] == 0xffffffff) || ((uVar23 & 8) != 0)) ||
            ((param_3[1] & 0x7fff0000) != 0)) || ((*(byte *)((long)param_3 + 0x11) & 0x80) != 0))
        goto LAB_00103d50;
        param_3 = &local_b48;
        param_4 = in_stack_fffffffffffff430;
        iVar14 = (**(code **)(*plVar7 + 0x90))
                           (lVar18,param_2[0xb],uVar21,uVar23,*puVar1,param_1 + 0x98);
        if (iVar14 != 0) goto LAB_00103d50;
        *(undefined4 *)(param_1 + 200) = 0;
        uVar15 = (ulong)local_b48._6_2_;
        *(undefined4 *)(param_1 + 0x90) = 0x62697473;
        *(ulong *)(param_1 + 0x30) = (local_b48 >> 0x10 & 0xffff) << 6;
        *(ulong *)(param_1 + 0x38) = (local_b48 & 0xffff) << 6;
        *(long *)(param_1 + 0x40) = (long)local_b48._4_2_ << 6;
        *(ulong *)(param_1 + 0x48) = uVar15 << 6;
        *(ulong *)(param_1 + 0x50) = (uStack_b40 & 0xffff) << 6;
        *(long *)(param_1 + 0x58) = (long)uStack_b40._2_2_ << 6;
        *(long *)(param_1 + 0x60) = (long)uStack_b40._4_2_ << 6;
        *(ulong *)(param_1 + 0x68) = (uStack_b40 >> 0x30) << 6;
        sVar3 = local_b48._4_2_;
        if ((uVar23 & 0x10) != 0) {
          uVar15 = (ulong)(uint)(int)uStack_b40._4_2_;
          sVar3 = uStack_b40._2_2_;
        }
        *(int *)(param_1 + 0xc0) = (int)sVar3;
        lVar17 = *(long *)(lVar18 + 0x370);
        *(int *)(param_1 + 0xc4) = (int)uVar15;
        (**(code **)(lVar17 + 0x140))(lVar18,0,uVar21,&local_b68,&local_b70);
        *(ulong *)(param_1 + 0x70) = (ulong)local_b70;
        if ((*(char *)(lVar18 + 0x1f0) == '\0') || (*(short *)(lVar18 + 0x21e) == 0)) {
          if (*(short *)(lVar18 + 0x268) == -1) {
            uVar21 = (ulong)((int)*(short *)(lVar18 + 0x198) - (int)*(short *)(lVar18 + 0x19a));
          }
          else {
            uVar21 = (ulong)((int)*(short *)(lVar18 + 0x2c2) - (int)*(short *)(lVar18 + 0x2c4));
          }
        }
        else {
          (**(code **)(*(long *)(lVar18 + 0x370) + 0x140))(lVar18,1,uVar21,&local_b68,&local_b70);
          uVar21 = (ulong)local_b70;
        }
        *(ulong *)(param_1 + 0x78) = uVar21;
      }
      uVar15 = 0;
      goto LAB_00103b3e;
    }
  }
  else if ((uVar22 == 0) ||
          ((uVar22 <= *(uint *)(lVar5 + 0x530) &&
           (uVar2 = *(ushort *)(*(long *)(lVar5 + 0x528) + uVar21 * 2), uVar21 = (ulong)uVar2,
           uVar2 != 0)))) goto LAB_00103b76;
LAB_00103b39:
  uVar15 = 6;
LAB_00103b3e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



undefined8 cff_glyph_load(long param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0x25;
  }
  if (param_2 != (long *)0x0) {
    if (((param_4 & 1) == 0) && (*param_2 != *(long *)(param_1 + 8))) {
      return 0x23;
    }
    uVar1 = cff_slot_load();
    return uVar1;
  }
  uVar1 = cff_slot_load();
  return uVar1;
}



undefined8 cff_get_advances(long param_1,int param_2,int param_3,uint param_4,ulong *param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long in_FS_OFFSET;
  undefined1 local_44 [2];
  ushort local_42;
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(ulong *)(param_1 + 0x10);
  if ((uVar4 & 8) == 0) {
LAB_00104790:
    if (param_3 != 0) {
      plVar7 = *(long **)(param_1 + 0xa0);
      if (lVar2 == 0) {
        uVar3 = 0x25;
        goto LAB_0010476a;
      }
      param_3 = param_3 + param_2;
      while( true ) {
        uVar1 = param_4 | 0x103;
        if (((plVar7 != (long *)0x0) && (uVar1 = param_4 | 0x100, (param_4 & 1) == 0)) &&
           (*plVar7 != *(long *)(lVar2 + 8))) {
          uVar3 = 0x23;
          goto LAB_0010476a;
        }
        uVar3 = cff_slot_load(lVar2,plVar7,param_2,uVar1);
        if ((int)uVar3 != 0) goto LAB_0010476a;
        uVar4 = *(ulong *)(lVar2 + 0x78);
        if ((param_4 & 0x10) == 0) {
          uVar4 = *(ulong *)(lVar2 + 0x70);
        }
        param_2 = param_2 + 1;
        *param_5 = uVar4;
        if (param_3 == param_2) break;
        plVar7 = *(long **)(param_1 + 0xa0);
        param_5 = param_5 + 1;
      }
    }
  }
  else {
    if ((param_4 & 0x10) == 0) {
      if (((uVar4 & 0x8000) != 0 || (*(ulong *)(param_1 + 8) & 0x7fff0000) != 0) &&
         (uVar3 = 7, (*(byte *)(param_1 + 0x4c8) & 2) == 0)) goto LAB_0010476a;
      if (*(short *)(param_1 + 0x1b6) != 0) {
        if (param_3 != 0) {
          iVar5 = param_2;
          do {
            iVar6 = iVar5 + 1;
            (**(code **)(*(long *)(param_1 + 0x370) + 0x140))(param_1,0,iVar5,local_44,&local_42);
            *param_5 = (ulong)local_42;
            param_5 = param_5 + 1;
            iVar5 = iVar6;
          } while (iVar6 != param_3 + param_2);
          uVar3 = 0;
          goto LAB_0010476a;
        }
        goto LAB_00104768;
      }
      goto LAB_00104790;
    }
    if (((uVar4 & 0x8000) != 0 || (*(ulong *)(param_1 + 8) & 0x7fff0000) != 0) &&
       (uVar3 = 7, (*(byte *)(param_1 + 0x4c8) & 0x10) == 0)) goto LAB_0010476a;
    if (*(char *)(param_1 + 0x1f0) == '\0') goto LAB_00104790;
    if (param_3 != 0) {
      iVar5 = param_2;
      do {
        iVar6 = iVar5 + 1;
        (**(code **)(*(long *)(param_1 + 0x370) + 0x140))(param_1,1,iVar5,local_44,&local_42);
        *param_5 = (ulong)local_42;
        param_5 = param_5 + 1;
        iVar5 = iVar6;
      } while (iVar6 != param_3 + param_2);
    }
  }
LAB_00104768:
  uVar3 = 0;
LAB_0010476a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void * cff_index_get_name(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  void *__dest;
  long in_FS_OFFSET;
  int local_44;
  void *local_40;
  size_t local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38);
    local_44 = cff_index_access_element(param_1 + 0x38,param_2,&local_40,&local_38);
    if (local_44 == 0) {
      __dest = (void *)ft_mem_qalloc(uVar1,local_38 + 1,&local_44);
      if (local_44 == 0) {
        memcpy(__dest,local_40,local_38);
        *(undefined1 *)((long)__dest + local_38) = 0;
        lVar2 = *(long *)(param_1 + 0x70);
      }
      else {
        lVar2 = *(long *)(param_1 + 0x70);
      }
      if (lVar2 == 0) {
        FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0x38),&local_40);
      }
      goto LAB_0010491e;
    }
  }
  __dest = (void *)0x0;
LAB_0010491e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __dest;
}



ulong cff_index_init(long *param_1,long param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint local_48;
  byte local_44 [4];
  long local_40;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = param_2;
  param_1[7] = 0;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  lVar5 = FT_Stream_Pos(param_2);
  param_1[1] = lVar5;
  if (param_4 == '\0') {
    uVar3 = FT_Stream_ReadUShort(param_2,&local_48);
    if (local_48 == 0) {
      uVar4 = (uint)uVar3;
      *(undefined4 *)(param_1 + 2) = 3;
      if (uVar3 == 0) goto LAB_00104a03;
      goto LAB_00104a4d;
    }
  }
  else {
    uVar4 = FT_Stream_ReadULong();
    if (local_48 == 0) {
      *(undefined4 *)(param_1 + 2) = 5;
      if (uVar4 == 0) {
LAB_00104a03:
        uVar7 = (ulong)local_48;
        goto LAB_00104a06;
      }
LAB_00104a4d:
      bVar2 = FT_Stream_ReadByte(param_2,&local_48);
      if (local_48 == 0) {
        if (3 < (byte)(bVar2 - 1)) goto LAB_00104ac0;
        *(byte *)(param_1 + 3) = bVar2;
        lVar5 = (ulong)(uVar4 + 1) * (ulong)bVar2;
        *(uint *)((long)param_1 + 0x14) = uVar4;
        param_1[4] = (ulong)*(uint *)(param_1 + 2) + param_1[1] + lVar5;
        local_48 = FT_Stream_Skip(param_2,lVar5 - (ulong)bVar2);
        if (local_48 == 0) {
          pbVar6 = local_44;
          local_48 = FT_Stream_Read(*param_1,pbVar6,(char)param_1[3]);
          if (local_48 == 0) {
            if (*(byte *)(param_1 + 3) != 0) {
              uVar7 = 0;
              do {
                bVar2 = *pbVar6;
                pbVar6 = pbVar6 + 1;
                uVar7 = uVar7 << 8 | (ulong)bVar2;
              } while (local_44 + (ulong)(*(byte *)(param_1 + 3) - 1) + 1 != pbVar6);
              local_48 = 0;
              if (uVar7 != 0) {
                param_1[5] = uVar7 - 1;
                if (param_3 == '\0') {
                  uVar7 = FT_Stream_Skip(param_2);
                }
                else {
                  uVar7 = FT_Stream_ExtractFrame(param_2,uVar7 - 1,param_1 + 7);
                }
                local_48 = (uint)uVar7;
                if (local_48 == 0) goto LAB_00104a06;
                goto LAB_00104aa0;
              }
            }
LAB_00104ac0:
            local_48 = 8;
          }
        }
      }
    }
  }
LAB_00104aa0:
  ft_mem_free(uVar1,param_1[6]);
  param_1[6] = 0;
  uVar7 = (ulong)local_48;
LAB_00104a06:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



long cff_sid_to_glyph_name(long param_1,uint param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x490);
  uVar1 = *(ushort *)(*(long *)(lVar2 + 0x520) + (ulong)param_2 * 2);
  if (uVar1 == 0xffff) {
    lVar3 = 0;
  }
  else if (uVar1 < 0x187) {
    lVar3 = *(long *)(lVar2 + 0x1360);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00104b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(lVar3 + 0x28))();
      return lVar2;
    }
  }
  else {
    lVar3 = 0;
    if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x648)) {
      lVar3 = *(long *)(*(long *)(lVar2 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
    }
  }
  return lVar3;
}



undefined8 cff_parse_maxstack(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(char *)**(undefined8 **)(param_1 + 0x20) == '\x1e') {
      cff_parse_real((char *)**(undefined8 **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),0,0);
    }
    *(undefined4 *)(lVar1 + 0x140) = 0x201;
    return 0;
  }
  return 3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int cff_subfont_load(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                    long param_5,int param_6,undefined8 *param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  byte bVar11;
  long local_98;
  long local_90;
  undefined8 *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [12];
  int iStack_54;
  undefined1 local_50 [16];
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_8 + 0x398);
  local_98 = 0;
  uVar9 = param_6 - 0x3000U & 0xffffefff;
  local_88 = (undefined8 *)*param_7;
  local_60 = SUB1612((undefined1  [16])0x0,0);
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_50._8_8_ = 0;
  local_50._0_8_ = param_1;
  iStack_54 = param_6;
  uVar6 = ft_mem_qrealloc(*local_88,8,0,(-(uint)(uVar9 == 0) & 0x1a1) + 0x60,0);
  uVar3 = _UNK_00108e08;
  uVar2 = __LC16;
  iVar4 = (int)local_90;
  local_70._8_8_ = uVar6;
  if ((int)local_90 != 0) goto LAB_00104e10;
  local_60._8_4_ = (-(uint)(uVar9 == 0) & 0x1a1) + 0x60;
  local_60._0_8_ = uVar6;
  param_1[0x28] = 0;
  puVar10 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar7 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x148U >> 3
                      ); uVar6 = _LC18, uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
  }
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  uVar3 = _UNK_00108e18;
  uVar2 = _LC18;
  *(undefined4 *)((long)param_1 + 0x3c) = 2;
  param_1[2] = uVar6;
  param_1[0x1c] = uVar6;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  iVar4 = *(int *)((long)param_2 + 0x14);
  param_1[8] = 0x10000;
  param_1[0xb] = 0x10000;
  param_1[0x22] = 0x2210;
  *(undefined4 *)(param_1 + 0x1d) = 0xffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffff;
  *(uint *)(param_1 + 0x28) = (-(uint)(uVar9 == 0) & 0x1d1) + 0x30;
  if (iVar4 == 0) {
    iVar4 = FT_Stream_Seek(param_4,param_2[4]);
    if ((iVar4 != 0) || (iVar4 = FT_Stream_ExtractFrame(param_4,param_2[5],&local_98), iVar4 != 0))
    goto LAB_00104e10;
    local_90 = param_2[5];
  }
  else {
    iVar4 = cff_index_access_element(param_2,param_3,&local_98,&local_90);
    if (iVar4 != 0) {
      if (*(int *)((long)param_2 + 0x14) == 0) {
        FT_Stream_ReleaseFrame(param_4,&local_98);
      }
      else if (param_2[7] == 0) {
        FT_Stream_ReleaseFrame(*param_2,&local_98);
      }
      goto LAB_00104e10;
    }
  }
  lVar8 = 0;
  if (local_98 != 0) {
    lVar8 = local_90 + local_98;
  }
  iVar4 = cff_parser_run(&local_88,local_98,lVar8);
  if (*(int *)((long)param_2 + 0x14) == 0) {
    FT_Stream_ReleaseFrame(param_4,&local_98);
  }
  else if (param_2[7] == 0) {
    FT_Stream_ReleaseFrame(*param_2,&local_98);
  }
  if (((iVar4 != 0) || (*(int *)((long)param_1 + 0xe4) != 0xffff)) ||
     (iVar4 = cff_load_private_dict(param_7,param_1,0,0), iVar4 != 0)) goto LAB_00104e10;
  if (uVar9 != 0) {
    iVar5 = *(int *)(*(long *)(param_8 + 0xf0) + 0x74);
    if (iVar5 == -1) {
      lVar8 = *(long *)(param_8 + 0xb0);
      iVar5 = *(int *)(lVar8 + 0x60);
      *(int *)(param_1 + 0x98) = iVar5;
      if (iVar5 != 0) {
        do {
          iVar5 = (**(code **)(lVar1 + 0x28))(iVar5);
          *(int *)(lVar8 + 0x60) = iVar5;
        } while (iVar5 < 0);
        goto LAB_00104f43;
      }
    }
    else {
      *(int *)(param_1 + 0x98) = iVar5;
      if (iVar5 != 0) {
        do {
          iVar5 = (**(code **)(lVar1 + 0x28))();
          *(int *)(*(long *)(param_8 + 0xf0) + 0x74) = iVar5;
        } while (iVar5 < 0);
LAB_00104f43:
        if (*(int *)(param_1 + 0x98) != 0) goto LAB_00104f5c;
      }
    }
    *(int *)(param_1 + 0x98) = (int)param_1[0x7e];
  }
LAB_00104f5c:
  if ((param_1[0x7f] != 0) &&
     (iVar4 = FT_Stream_Seek(param_4,param_5 + param_1[0x7f] + param_1[0x19]), iVar4 == 0)) {
    iVar4 = cff_index_init(param_1 + 0x8f,param_4,1,uVar9 == 0);
    if (iVar4 == 0) {
      iVar4 = cff_index_get_pointers(param_1 + 0x8f,param_1 + 0x97,0,0);
    }
  }
LAB_00104e10:
  ft_mem_free(*local_88,local_70._8_8_);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint cff_face_init(long param_1,ulong *param_2,uint param_3,undefined4 param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  char cVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long lVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  size_t sVar33;
  size_t sVar34;
  undefined8 *puVar35;
  undefined2 *puVar36;
  undefined1 *puVar37;
  undefined8 uVar38;
  long lVar39;
  int iVar40;
  uint uVar41;
  ulong uVar42;
  ulong *puVar43;
  ulong uVar44;
  undefined8 uVar45;
  long *plVar46;
  uint *puVar47;
  undefined8 *puVar48;
  undefined1 *puVar49;
  short sVar50;
  long *plVar51;
  long in_FS_OFFSET;
  uint local_128;
  long local_120;
  uint local_118;
  undefined8 *local_110;
  uint local_108;
  byte local_e8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ulong *local_88;
  undefined8 local_80;
  uint local_74;
  long local_40;
  
  bVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar27 = *(undefined8 *)(param_2[0x16] + 8);
  lVar21 = FT_Get_Module_Interface(uVar27,&_LC3);
  if (lVar21 != 0) {
    lVar22 = ft_module_get_service(param_2[0x16],"postscript-cmaps",1);
    uVar23 = FT_Get_Module_Interface(uVar27,"pshinter");
    uVar24 = FT_Get_Module_Interface(uVar27,"psaux");
    if (uVar24 != 0) {
      param_2[0x73] = uVar24;
      uVar25 = ft_module_get_service(param_2[0x16],"cff-load",1);
      uVar14 = FT_Stream_Seek(param_1,0);
      uVar15 = uVar14;
      uVar17 = uVar14;
      if (uVar14 != 0) goto LAB_00105256;
      local_d4 = uVar14;
      local_d4 = (**(code **)(lVar21 + 8))(param_1,param_2,param_3,param_4,param_5);
      if (local_d4 == 0) {
        uVar15 = 0;
        if (param_2[0x23] != 0x4f54544f) {
          uVar17 = 2;
          goto LAB_00105256;
        }
        if ((int)param_3 < 0) goto LAB_00105256;
        local_d4 = (*(code *)param_2[0x68])(param_2,0x68656164,param_1,0);
        if (local_d4 == 0) {
          uVar15 = (**(code **)(lVar21 + 0x10))(param_1,param_2,param_3,param_4,param_5);
          uVar17 = uVar15;
          if (uVar15 != 0) goto LAB_00105256;
          local_e8 = 0;
        }
        else {
          uVar15 = (**(code **)(lVar21 + 0x40))(param_2,param_1);
          uVar17 = uVar15;
          if (uVar15 != 0) goto LAB_00105256;
          local_e8 = 1;
        }
        local_d4 = 0;
        local_d4 = (*(code *)param_2[0x68])(param_2,0x43464632,param_1,0);
        if (local_d4 == 0) {
          *(undefined1 *)(param_2 + 0x97) = 1;
          bVar4 = true;
          bVar5 = true;
        }
        else {
          uVar15 = local_d4;
          uVar17 = local_d4;
          if (((char)local_d4 != -0x72) ||
             (local_d4 = (*(code *)param_2[0x68])(param_2,0x43464620,param_1,0), uVar15 = local_d4,
             uVar17 = local_d4, local_d4 != 0)) goto LAB_00105256;
          bVar4 = true;
          bVar5 = false;
        }
      }
      else {
        local_d4 = FT_Stream_Seek(param_1,0);
        uVar15 = local_d4;
        uVar17 = local_d4;
        if (local_d4 != 0) goto LAB_00105256;
        bVar4 = false;
        bVar5 = false;
        local_e8 = 1;
      }
      uVar24 = param_2[0x17];
      puVar26 = (undefined8 *)ft_mem_alloc(uVar24,0x13c0,&local_d4);
      uVar15 = local_d4;
      uVar17 = local_d4;
      if (local_d4 != 0) goto LAB_00105256;
      uVar45 = *(undefined8 *)(param_1 + 0x38);
      iVar16 = (int)puVar26;
      param_2[0x92] = (ulong)puVar26;
      *puVar26 = 0;
      puVar26[0x277] = 0;
      puVar35 = (undefined8 *)((ulong)(puVar26 + 1) & 0xfffffffffffffff8);
      for (uVar42 = (ulong)((iVar16 - (int)(undefined8 *)((ulong)(puVar26 + 1) & 0xfffffffffffffff8)
                            ) + 0x13c0U >> 3); uVar42 != 0; uVar42 = uVar42 - 1) {
        *puVar35 = 0;
        puVar35 = puVar35 + (ulong)bVar7 * -2 + 1;
      }
      local_c8 = (undefined1  [16])0x0;
      local_b8 = (undefined1  [16])0x0;
      local_a8 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
      lVar21 = FT_Stream_Pos(param_1);
      puVar26[2] = uVar45;
      *(bool *)(puVar26 + 6) = bVar5;
      puVar26[3] = lVar21;
      *puVar26 = uVar27;
      puVar26[1] = param_1;
      local_d0 = FT_Stream_ReadFields(param_1,cff_header_fields_0,puVar26);
      if (local_d0 == 0) {
        if (bVar5 == false) {
          bVar8 = FT_Stream_ReadByte(param_1,&local_d0);
          if (local_d0 == 0) {
            if (((*(char *)(puVar26 + 5) != '\x01') || (*(byte *)((long)puVar26 + 0x2a) < 4)) ||
               (4 < bVar8)) goto LAB_00105c60;
            local_d0 = FT_Stream_Seek(param_1,(ulong)*(byte *)((long)puVar26 + 0x2a) + lVar21);
            if ((local_d0 != 0) ||
               (local_d0 = cff_index_init(puVar26 + 7,param_1,0,0), local_d0 != 0))
            goto LAB_00105960;
            if ((*(uint *)((long)puVar26 + 0x4c) < 2) ||
               ((ulong)*(uint *)((long)puVar26 + 0x4c) <= (ulong)puVar26[0xc])) {
              local_d0 = cff_index_init(puVar26 + 0xaf,param_1,0,0);
              if ((((local_d0 == 0) &&
                   (local_d0 = cff_index_init(local_c8,param_1,1,0), local_d0 == 0)) &&
                  (local_d0 = cff_index_init(puVar26 + 0x17,param_1,1,0), local_d0 == 0)) &&
                 (local_d0 = cff_index_get_pointers(local_c8,puVar26 + 0xca,puVar26 + 0xcb),
                 local_d0 == 0)) {
                uVar15 = *(uint *)((long)puVar26 + 0x4c);
                if (uVar15 <= *(uint *)((long)puVar26 + 0x58c)) goto LAB_001054f3;
LAB_001061cc:
                local_d0 = 3;
              }
            }
            else {
              local_d0 = 3 - local_e8;
            }
          }
          goto LAB_00105978;
        }
        if ((*(char *)(puVar26 + 5) != '\x02') || (*(byte *)((long)puVar26 + 0x2a) < 5)) {
LAB_00105c60:
          local_d0 = 2;
          goto LAB_00105978;
        }
        uVar9 = FT_Stream_ReadUShort(param_1,&local_d0);
        *(uint *)((long)puVar26 + 0x2c) = (uint)uVar9;
        if (local_d0 != 0) goto LAB_00105978;
        local_d0 = FT_Stream_Seek(param_1,(ulong)*(byte *)((long)puVar26 + 0x2a) + lVar21);
        if (local_d0 != 0) {
LAB_00105960:
          if (local_e8 != 0) goto LAB_00105c60;
          goto LAB_00105978;
        }
        *(undefined1 (*) [16])(puVar26 + 0xaf) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar26 + 0xb1) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar26 + 0xb3) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar26 + 0xb5) = (undefined1  [16])0x0;
        uVar27 = FT_Stream_Pos(param_1);
        puVar26[0xb3] = uVar27;
        puVar26[0xb4] = (ulong)*(uint *)((long)puVar26 + 0x2c);
        local_d0 = FT_Stream_Skip(param_1,(ulong)*(uint *)((long)puVar26 + 0x2c));
        if ((local_d0 != 0) || (local_d0 = cff_index_init(puVar26 + 0x17,param_1,1), local_d0 != 0))
        goto LAB_00105978;
        uVar15 = *(uint *)((long)puVar26 + 0x4c);
LAB_001054f3:
        local_110 = puVar26 + 0x17;
        *(undefined4 *)(puVar26 + 0xc9) = local_b8._4_4_;
        if (local_e8 == 0) {
          if (1 < uVar15) goto LAB_001061cc;
          local_108 = 0;
LAB_00105530:
          if ((int)param_3 < 0) {
            cff_index_done(local_c8);
            local_d4 = local_d0;
            uVar15 = local_d4;
            uVar17 = local_d0;
            if (local_d0 != 0) goto LAB_00105256;
            goto LAB_00106302;
          }
          local_d0 = cff_subfont_load(puVar26 + 0xcd,puVar26 + 0xaf,local_108,param_1,lVar21,
                                      (-(uint)(bVar5 == false) & 0xffffe000) + 0x3000,puVar26);
          if (((local_d0 != 0) ||
              (local_d0 = FT_Stream_Seek(param_1,puVar26[0xe5] + lVar21,param_2), local_d0 != 0)) ||
             (local_d0 = cff_index_init(puVar26 + 0xa7,param_1,0,bVar5), local_d0 != 0))
          goto LAB_001058c1;
          if ((*(int *)((long)puVar26 + 0x74c) != 0xffff) || (bVar5)) {
            uVar27 = *(undefined8 *)(param_1 + 0x38);
            local_88 = (ulong *)CONCAT44(local_88._4_4_,3);
            local_120 = 0;
            if (puVar26[0xf4] == 0) goto LAB_00105639;
            iVar18 = FT_Stream_Seek(param_1,lVar21 + puVar26[0xf4]);
            local_88 = (ulong *)CONCAT44(local_88._4_4_,iVar18);
            if (iVar18 == 0) {
              iVar18 = FT_Stream_Skip(param_1,2);
              local_88 = (ulong *)CONCAT44(local_88._4_4_,iVar18);
              if (iVar18 == 0) {
                uVar42 = FT_Stream_Pos(param_1);
                sVar50 = FT_Stream_ReadUShort(param_1,&local_88);
                if ((uint)local_88 == 0) {
                  if (sVar50 == 1) {
                    uVar15 = FT_Stream_ReadULong(param_1,&local_88);
                    if ((uint)local_88 == 0) {
                      uVar9 = FT_Stream_ReadUShort(param_1,&local_88);
                      if ((uint)local_88 == 0) {
                        local_120 = ft_mem_qrealloc(uVar27,8,0,uVar9);
                        if ((uint)local_88 == 0) {
                          lVar28 = 0;
                          local_118 = (uint)uVar9;
                          do {
                            if (local_118 <= (uint)lVar28) {
                              iVar18 = FT_Stream_Seek(param_1,(ulong)uVar15 + (uVar42 & 0xffffffff))
                              ;
                              local_88 = (ulong *)CONCAT44(local_88._4_4_,iVar18);
                              if (iVar18 == 0) {
                                uVar13 = FT_Stream_ReadUShort(param_1,&local_88);
                                *(undefined2 *)(puVar26 + 0x275) = uVar13;
                                if ((uint)local_88 == 0) {
                                  uVar10 = FT_Stream_ReadUShort(param_1,&local_88);
                                  if ((uint)local_88 == 0) {
                                    *(undefined4 *)((long)puVar26 + 0x13ac) = 0;
                                    uVar38 = ft_mem_qrealloc(uVar27,8,0,uVar10);
                                    puVar26[0x276] = uVar38;
                                    if ((uint)local_88 == 0) {
                                      lVar28 = 0;
                                      local_128 = (uint)uVar10;
                                      goto LAB_00107302;
                                    }
                                  }
                                }
                              }
                              break;
                            }
                            uVar17 = FT_Stream_ReadULong(param_1,&local_88);
                            *(ulong *)(local_120 + lVar28 * 8) = (ulong)uVar17;
                            lVar28 = lVar28 + 1;
                          } while ((uint)local_88 == 0);
                        }
                        goto LAB_00105642;
                      }
                    }
                  }
                  else {
                    local_88 = (ulong *)CONCAT44(local_88._4_4_,3);
                  }
                }
              }
            }
            local_120 = 0;
            goto LAB_00105642;
          }
          *(undefined4 *)(puVar26 + 0x166) = 0;
          local_d0 = 0;
          goto LAB_0010664d;
        }
        local_108 = param_3 & 0xffff;
        if (((int)param_3 < 1) || (local_108 < uVar15)) {
          *(uint *)(puVar26 + 4) = uVar15;
          goto LAB_00105530;
        }
        local_d0 = 6;
        cff_index_done(local_c8);
        goto joined_r0x00106639;
      }
LAB_00105978:
      cff_index_done(local_c8);
      local_d4 = local_d0;
      uVar15 = local_d4;
      uVar17 = local_d0;
      if (local_d0 != 0) goto LAB_00105256;
      if ((int)param_3 < 0) {
LAB_00106302:
        *param_2 = (ulong)*(uint *)(puVar26 + 4);
        uVar15 = local_d0;
        uVar17 = uVar14;
        goto LAB_00105256;
      }
      goto LAB_001059ac;
    }
  }
  goto LAB_00105250;
LAB_00107302:
  if (local_128 <= (uint)lVar28) goto LAB_001074bc;
  plVar51 = (long *)(puVar26[0x276] + lVar28 * 8);
  lVar39 = ft_mem_qrealloc(uVar27,0x18,0,*(undefined2 *)(puVar26 + 0x275));
  *plVar51 = lVar39;
  if ((uint)local_88 != 0) goto LAB_00105642;
  *(int *)((long)puVar26 + 0x13ac) = *(int *)((long)puVar26 + 0x13ac) + 1;
  lVar39 = 0;
  while ((uint)lVar39 < (uint)*(ushort *)(puVar26 + 0x275)) {
    plVar46 = (long *)(lVar39 * 0x18 + *plVar51);
    sVar50 = FT_Stream_ReadUShort(param_1,&local_88);
    if ((uint)local_88 != 0) goto LAB_00105642;
    sVar11 = FT_Stream_ReadUShort(param_1,&local_88);
    if ((uint)local_88 != 0) goto LAB_00105642;
    lVar39 = lVar39 + 1;
    sVar12 = FT_Stream_ReadUShort(param_1,&local_88);
    if ((uint)local_88 != 0) goto LAB_00105642;
    plVar46[2] = (long)sVar12 << 2;
    *plVar46 = (long)sVar50 << 2;
    plVar46[1] = (long)sVar11 << 2;
  }
  lVar28 = lVar28 + 1;
  goto LAB_00107302;
  while( true ) {
    iVar40 = iVar40 + 1;
    lVar21 = lVar21 + -1;
    if (iVar40 == iVar16 + 1) break;
LAB_0010656f:
    if (pcVar29[lVar21 + -1 + (long)iVar18] != pcVar30[lVar21 + -1 + (long)iVar16]) break;
  }
  if (iVar16 < iVar40) {
LAB_00106583:
    iVar16 = (iVar18 - iVar16) + -1;
    if (iVar16 != 0) {
      lVar21 = (long)iVar16;
      do {
        if ((pcVar29[lVar21] != 0x20) &&
           ((uVar15 = (byte)pcVar29[lVar21] - 0x2b, 0x34 < (byte)uVar15 ||
            ((0x10000000000005U >> ((ulong)uVar15 & 0x3f) & 1) == 0)))) {
          pcVar29[(int)lVar21 + 1] = '\0';
          break;
        }
        lVar21 = lVar21 + -1;
      } while ((int)lVar21 != 0);
    }
  }
LAB_00105e67:
  param_2[6] = (ulong)pcVar30;
  uVar15 = (-(uint)!bVar4 & 0xfffffff8) + 0x819;
  if (*(char *)(puVar26 + 0xd0) != '\0') {
    uVar15 = uVar15 | 4;
  }
  param_2[2] = param_2[2] | (long)(int)uVar15;
  uVar15 = (uint)(puVar26[0xd1] != 0);
  pcVar30 = (char *)cff_index_get_sid_string(puVar26,*(undefined4 *)((long)puVar26 + 0x67c));
  if (((pcVar30 != (char *)0x0) &&
      ((iVar16 = strcmp(pcVar30,"Bold"), iVar16 == 0 ||
       (iVar16 = strcmp(pcVar30,"Black"), iVar16 == 0)))) ||
     ((pcVar30 = (char *)param_2[6], pcVar30 != (char *)0x0 &&
      ((iVar16 = strncmp(pcVar30,"Bold",4), iVar16 == 0 ||
       (iVar16 = strncmp(pcVar30,"Black",5), iVar16 == 0)))))) {
    uVar15 = uVar15 | 2;
  }
  iVar16 = *(int *)((long)puVar26 + 0x74c);
  param_2[3] = (long)(int)uVar15;
  lVar21 = (long)(int)param_2[9];
  if (iVar16 == 0xffff) {
LAB_0010630e:
    if (bVar5 == false) {
      param_2[2] = param_2[2] | 0x200;
    }
    iVar16 = 0xffff;
LAB_001061f0:
    if (0 < (int)lVar21) goto LAB_00105f67;
  }
  else {
    param_2[2] = param_2[2] | 0x1000;
    uVar15 = local_d4;
    uVar17 = local_d4;
    if ((int)param_2[9] < 1) goto LAB_00105256;
LAB_00105f67:
    lVar22 = 0;
    do {
      lVar28 = *(long *)(param_2[10] + lVar22 * 8);
      if ((*(int *)(lVar28 + 0xc) == 0x10003) || (*(short *)(lVar28 + 0xc) == 0)) goto LAB_00105f90;
      lVar22 = lVar22 + 1;
    } while ((int)lVar22 < (int)lVar21);
    if ((iVar16 != 0xffff) && (uVar15 = local_d4, uVar17 = local_d4, local_e8 != 0))
    goto LAB_00105256;
  }
  local_80 = 0x10003756e6963;
  local_88 = param_2;
  uVar17 = FT_CMap_New(cff_cmap_unicode_class_rec,0,&local_88,0);
  if ((uVar17 == 0) || (((char)uVar17 == '\a' || (uVar15 = uVar17, (uVar17 & 0xff) == 0xa3)))) {
    local_d4 = 0;
    if ((param_2[0x15] == 0) && ((int)param_2[9] != (int)lVar21)) {
      param_2[0x15] = *(ulong *)(param_2[10] + lVar21 * 8);
    }
LAB_00105f90:
    uVar15 = local_d4;
    uVar17 = local_d4;
    if (*(int *)(puVar26 + 0x21) != 0) {
      lVar21 = puVar26[0x20];
      if (lVar21 == 0) {
        sVar50 = 0;
        iVar16 = 0x41444f42;
      }
      else {
        sVar50 = (lVar21 != 1) + 1;
        iVar16 = (lVar21 == 1) + 0x41444243 + (uint)(lVar21 == 1);
      }
      local_80 = CONCAT26(sVar50,0x700000000);
      local_80 = CONCAT44(local_80._4_4_,iVar16);
      local_88 = param_2;
      uVar17 = FT_CMap_New(cff_cmap_encoding_class_rec,0,&local_88,0);
      uVar15 = local_d4;
    }
  }
  goto LAB_00105256;
LAB_001074bc:
  *(undefined4 *)(puVar26 + 0x273) = 0;
  uVar38 = ft_mem_qrealloc(uVar27,0x10,0,uVar9);
  puVar26[0x274] = uVar38;
  if ((uint)local_88 == 0) {
    for (lVar28 = 0; (uint)lVar28 < local_118; lVar28 = lVar28 + 1) {
      puVar47 = (uint *)(lVar28 * 0x10 + puVar26[0x274]);
      iVar18 = FT_Stream_Seek(param_1,(uVar42 & 0xffffffff) + *(long *)(local_120 + lVar28 * 8));
      local_88 = (ulong *)CONCAT44(local_88._4_4_,iVar18);
      if (iVar18 != 0) goto LAB_00105642;
      iVar18 = FT_Stream_Skip(param_1,4);
      local_88 = (ulong *)CONCAT44(local_88._4_4_,iVar18);
      if (iVar18 != 0) goto LAB_00105642;
      uVar9 = FT_Stream_ReadUShort(param_1,&local_88);
      *puVar47 = (uint)uVar9;
      if ((uint)local_88 != 0) goto LAB_00105642;
      uVar38 = ft_mem_qrealloc(uVar27,4,0,uVar9);
      *(undefined8 *)(puVar47 + 2) = uVar38;
      if ((uint)local_88 != 0) goto LAB_00105642;
      *(int *)(puVar26 + 0x273) = *(int *)(puVar26 + 0x273) + 1;
      for (uVar44 = 0; (uint)uVar44 < *puVar47; uVar44 = (ulong)((uint)uVar44 + 1)) {
        uVar9 = FT_Stream_ReadUShort(param_1);
        *(uint *)(*(long *)(puVar47 + 2) + uVar44 * 4) = (uint)uVar9;
        if ((uint)local_88 != 0) goto LAB_00105642;
      }
    }
LAB_00105639:
    local_88 = (ulong *)((ulong)local_88 & 0xffffffff00000000);
  }
LAB_00105642:
  ft_mem_free(uVar27,local_120);
  if ((uint)local_88 == 0) {
    local_d0 = 0;
LAB_00105672:
    local_d0 = FT_Stream_Seek(param_1,lVar21 + puVar26[0xf1]);
    if (local_d0 == 0) {
      local_d0 = cff_index_init(&local_88,param_1,0,bVar5);
      if (local_d0 == 0) {
        if (local_74 < 0x101) {
          *(uint *)(puVar26 + 0x166) = local_74;
          lVar28 = ft_mem_realloc(uVar45,0x4c8,0);
          if (local_d0 == 0) {
            for (puVar43 = (ulong *)0x0; (uint)puVar43 < local_74;
                puVar43 = (ulong *)((long)puVar43 + 1)) {
              puVar26[(long)puVar43 + 0x167] = lVar28;
              lVar28 = lVar28 + 0x4c8;
            }
            uVar42 = 0;
            do {
              uVar44 = uVar42 & 0xffffffff;
              if (local_74 <= (uint)uVar42) {
                if ((bVar5 == false) || (1 < local_74)) {
                  iVar18 = *(int *)((long)puVar26 + 0x54c);
                  local_cc = FT_Stream_Seek(param_1,lVar21 + puVar26[0xf2],local_74,puVar43);
                  if (local_cc == 0) {
                    cVar6 = FT_Stream_ReadByte(param_1);
                    if (local_cc == 0) {
                      *(char *)(puVar26 + 0x267) = cVar6;
                      *(undefined4 *)(puVar26 + 0x26a) = 0;
                      if (cVar6 == '\0') {
LAB_00105865:
                        *(int *)(puVar26 + 0x269) = iVar18;
                        local_cc = FT_Stream_ExtractFrame(param_1,iVar18,puVar26 + 0x268);
                      }
                      else {
                        if (cVar6 == '\x03') {
                          uVar9 = FT_Stream_ReadUShort(param_1,&local_cc);
                          if (local_cc != 0) goto LAB_0010588e;
                          if (uVar9 != 0) {
                            iVar18 = (uint)uVar9 + (uint)uVar9 * 2 + 2;
                            goto LAB_00105865;
                          }
                        }
                        local_cc = 3;
                      }
                    }
                  }
LAB_0010588e:
                  local_d0 = local_cc;
                }
                break;
              }
              lVar28 = uVar42 + 0x167;
              uVar42 = uVar42 + 1;
              local_d0 = cff_subfont_load(puVar26[lVar28],&local_88,uVar44,param_1);
              puVar43 = param_2;
            } while (local_d0 == 0);
          }
        }
        cff_index_done(&local_88);
        if (local_d0 == 0) {
LAB_0010664d:
          if (puVar26[0xe5] == 0) {
            local_d0 = 3;
          }
          else {
            *(undefined4 *)((long)puVar26 + 0x24) = *(undefined4 *)((long)puVar26 + 0x54c);
            local_d0 = cff_index_get_pointers(local_110,puVar26 + 200,0,0);
            if (local_d0 == 0) {
              if ((bVar5 == false) && (uVar15 = *(uint *)((long)puVar26 + 0x24), uVar15 != 0)) {
                iVar18 = *(int *)((long)puVar26 + 0x74c);
                uVar27 = *(undefined8 *)(param_1 + 0x38);
                uVar42 = puVar26[0xe3];
                local_88 = (ulong *)((ulong)local_88 & 0xffffffff00000000);
                if (uVar42 < 3) {
                  puVar26[0xa3] = uVar42;
                  if ((int)uVar42 == 1) {
                    if (0xa6 < uVar15) goto LAB_00106dce;
                    puVar35 = (undefined8 *)ft_mem_qrealloc(uVar27,2,0);
                    puVar26[0xa4] = puVar35;
                    if ((uint)local_88 == 0) {
                      uVar17 = uVar15 * 2;
                      puVar48 = &cff_expert_charset;
                      if (uVar17 < 8) {
                        if ((uVar17 & 4) == 0) {
                          if (uVar17 != 0) {
                            *(char *)puVar35 = (char)(undefined4)cff_expert_charset;
joined_r0x0010709f:
                            uVar17 = uVar15 * 2;
                            if ((uVar17 & 2) != 0) {
                              *(undefined2 *)((long)puVar35 + ((ulong)uVar17 - 2)) =
                                   *(undefined2 *)((long)puVar48 + ((ulong)uVar17 - 2));
                            }
                          }
                        }
                        else {
                          *(undefined4 *)puVar35 = (undefined4)cff_expert_charset;
                          *(undefined4 *)((long)puVar35 + ((ulong)uVar17 - 4)) =
                               *(undefined4 *)(&DAT_00107bfc + uVar17);
                        }
                      }
                      else {
                        uVar45 = CONCAT44(cff_expert_charset._4_4_,(undefined4)cff_expert_charset);
LAB_001069ca:
                        uVar17 = uVar15 * 2;
                        *puVar35 = uVar45;
                        *(undefined8 *)((long)puVar35 + ((ulong)uVar17 - 8)) =
                             *(undefined8 *)((long)puVar48 + ((ulong)uVar17 - 8));
                        lVar28 = (long)puVar35 - (long)((ulong)(puVar35 + 1) & 0xfffffffffffffff8);
                        puVar48 = (undefined8 *)((long)puVar48 - lVar28);
                        puVar35 = (undefined8 *)((ulong)(puVar35 + 1) & 0xfffffffffffffff8);
                        for (uVar42 = (ulong)(uVar17 + (int)lVar28 >> 3); uVar42 != 0;
                            uVar42 = uVar42 - 1) {
                          *puVar35 = *puVar48;
                          puVar48 = puVar48 + (ulong)bVar7 * -2 + 1;
                          puVar35 = puVar35 + (ulong)bVar7 * -2 + 1;
                        }
                      }
                      goto LAB_00106818;
                    }
                  }
                  else if ((int)uVar42 == 2) {
                    if (0x57 < uVar15) goto LAB_00106dce;
                    puVar37 = (undefined1 *)ft_mem_qrealloc(uVar27,2,0);
                    puVar26[0xa4] = puVar37;
                    if ((uint)local_88 == 0) {
                      puVar49 = &cff_expertsubset_charset;
                      for (uVar42 = (ulong)uVar15 * 2 & 0xffffffff; uVar42 != 0; uVar42 = uVar42 - 1
                          ) {
                        *puVar37 = *puVar49;
                        puVar49 = puVar49 + (ulong)bVar7 * -2 + 1;
                        puVar37 = puVar37 + (ulong)bVar7 * -2 + 1;
                      }
                      goto LAB_00106818;
                    }
                  }
                  else if (uVar15 < 0xe6) {
                    puVar35 = (undefined8 *)ft_mem_qrealloc(uVar27,2,0);
                    puVar26[0xa4] = puVar35;
                    if ((uint)local_88 == 0) {
                      uVar17 = uVar15 * 2;
                      puVar48 = &cff_isoadobe_charset;
                      if (7 < uVar17) {
                        uVar45 = CONCAT44(cff_isoadobe_charset._4_4_,
                                          (undefined4)cff_isoadobe_charset);
                        goto LAB_001069ca;
                      }
                      if ((uVar17 & 4) == 0) {
                        if (uVar17 != 0) {
                          *(char *)puVar35 = (char)(undefined4)cff_isoadobe_charset;
                          goto joined_r0x0010709f;
                        }
                      }
                      else {
                        *(undefined4 *)puVar35 = (undefined4)cff_isoadobe_charset;
                        *(undefined4 *)((long)puVar35 + ((ulong)uVar17 - 4)) =
                             *(undefined4 *)(&DAT_00107d5c + uVar17);
                      }
                      goto LAB_00106818;
                    }
                  }
                  else {
LAB_00106dce:
                    local_88 = (ulong *)CONCAT44(local_88._4_4_,3);
                  }
LAB_00106dd9:
                  ft_mem_free(uVar27,puVar26[0xa4]);
                  puVar26[0xa4] = 0;
                  ft_mem_free();
                  *(undefined4 *)(puVar26 + 0xa2) = 0;
                  local_d0 = (uint)local_88;
                  puVar26[0xa5] = 0;
                  puVar26[0xa3] = 0;
                  if ((uint)local_88 != 0) goto LAB_001058c1;
                }
                else {
                  puVar26[0xa3] = lVar21 + uVar42;
                  iVar40 = FT_Stream_Seek(param_1);
                  local_88 = (ulong *)CONCAT44(local_88._4_4_,iVar40);
                  if (iVar40 != 0) goto LAB_00106dd9;
                  bVar8 = FT_Stream_ReadByte(param_1,&local_88);
                  *(uint *)(puVar26 + 0xa2) = (uint)bVar8;
                  if ((uint)local_88 != 0) goto LAB_00106dd9;
                  puVar36 = (undefined2 *)ft_mem_qrealloc(uVar27,2,0);
                  puVar26[0xa4] = puVar36;
                  if ((uint)local_88 != 0) goto LAB_00106dd9;
                  *puVar36 = 0;
                  if (*(int *)(puVar26 + 0xa2) == 0) {
                    iVar40 = FT_Stream_EnterFrame(param_1,uVar15 * 2 + -2);
                    local_88 = (ulong *)CONCAT44(local_88._4_4_,iVar40);
                    if (iVar40 != 0) goto LAB_00106dd9;
                    lVar28 = 0;
                    while (lVar28 = lVar28 + 1, (uint)lVar28 < uVar15) {
                      lVar39 = puVar26[0xa4];
                      uVar13 = FT_Stream_GetUShort(param_1);
                      *(undefined2 *)(lVar28 * 2 + lVar39) = uVar13;
                    }
                    FT_Stream_ExitFrame();
                  }
                  else {
                    if (1 < *(int *)(puVar26 + 0xa2) - 1U) goto LAB_00106dce;
                    uVar17 = 1;
                    while (uVar14 = uVar17, uVar14 < uVar15) {
                      uVar9 = FT_Stream_ReadUShort(param_1,&local_88);
                      if ((uint)local_88 != 0) goto LAB_00106dd9;
                      if (*(int *)(puVar26 + 0xa2) == 2) {
                        uVar10 = FT_Stream_ReadUShort(param_1,&local_88);
                        uVar41 = (uint)uVar10;
                      }
                      else {
                        bVar8 = FT_Stream_ReadByte();
                        uVar41 = (uint)bVar8;
                      }
                      if ((uint)local_88 != 0) goto LAB_00106dd9;
                      if ((long)(0xffff - (ulong)uVar41) < (long)(ulong)uVar9) {
                        uVar41 = (uint)(ushort)~uVar9;
                      }
                      uVar20 = 0;
                      while( true ) {
                        sVar50 = (short)uVar20;
                        uVar17 = uVar14 + uVar20;
                        if ((uVar15 <= uVar17) || (uVar41 < uVar20)) break;
                        uVar20 = uVar20 + 1;
                        *(ushort *)(puVar26[0xa4] + (ulong)uVar17 * 2) = uVar9 + sVar50;
                      }
                    }
                  }
LAB_00106818:
                  if ((iVar18 != 0xffff) && (local_e8 != 0)) {
                    uVar19 = cff_charset_compute_cids(puVar26 + 0xa2,uVar15,uVar27);
                    local_88 = (ulong *)CONCAT44(local_88._4_4_,uVar19);
                  }
                  if ((uint)local_88 != 0) goto LAB_00106dd9;
                  local_d0 = 0;
                }
                if (*(int *)((long)puVar26 + 0x74c) == 0xffff) {
                  uVar15 = *(uint *)((long)puVar26 + 0x24);
                  uVar42 = puVar26[0xe4];
                  local_88 = (ulong *)((ulong)local_88 & 0xffffffff00000000);
                  if (puVar26[0xa4] == 0) {
LAB_00106a08:
                    local_88 = (ulong *)CONCAT44(local_88._4_4_,3);
                  }
                  else if (uVar42 < 2) {
                    if ((int)uVar42 == 1) {
                      puVar48 = (undefined8 *)((long)puVar26 + 0x114U & 0xfffffffffffffff8);
                      *(undefined8 *)((long)puVar26 + 0x10c) = cff_expert_encoding;
                      lVar21 = (long)puVar26 + (0x10c - (long)puVar48);
                      *(undefined8 *)((long)puVar26 + 0x304) = DAT_00107938;
                      puVar35 = (undefined8 *)((long)&cff_expert_encoding - lVar21);
                      for (uVar44 = (ulong)((int)lVar21 + 0x200U >> 3); uVar44 != 0;
                          uVar44 = uVar44 - 1) {
                        *puVar48 = *puVar35;
                        puVar35 = puVar35 + (ulong)bVar7 * -2 + 1;
                        puVar48 = puVar48 + (ulong)bVar7 * -2 + 1;
                      }
                    }
                    else {
                      puVar48 = (undefined8 *)((long)puVar26 + 0x114U & 0xfffffffffffffff8);
                      *(undefined8 *)((long)puVar26 + 0x10c) = cff_standard_encoding;
                      lVar21 = (long)puVar26 + (0x10c - (long)puVar48);
                      *(undefined8 *)((long)puVar26 + 0x304) = DAT_00107b38;
                      puVar35 = (undefined8 *)((long)&cff_standard_encoding - lVar21);
                      for (uVar44 = (ulong)((int)lVar21 + 0x200U >> 3); uVar44 != 0;
                          uVar44 = uVar44 - 1) {
                        *puVar48 = *puVar35;
                        puVar35 = puVar35 + (ulong)bVar7 * -2 + 1;
                        puVar48 = puVar48 + (ulong)bVar7 * -2 + 1;
                      }
                    }
                    puVar26[0x20] = uVar42;
                    uVar27 = *(undefined8 *)(param_1 + 0x38);
                    *(undefined4 *)(puVar26 + 0x21) = 0;
                    iVar16 = cff_charset_compute_cids(puVar26 + 0xa2,uVar15,uVar27);
                    local_88 = (ulong *)CONCAT44(local_88._4_4_,iVar16);
                    if (iVar16 == 0) {
                      lVar21 = 1;
                      do {
                        uVar15 = (uint)*(ushort *)((long)puVar26 + lVar21 * 2 + 0x10a);
                        if (((uVar15 == 0) || (*(uint *)(puVar26 + 0xa6) < uVar15)) ||
                           (sVar50 = *(short *)(puVar26[0xa5] + (ulong)uVar15 * 2), sVar50 == 0)) {
                          *(undefined2 *)((long)puVar26 + lVar21 * 2 + 0x10a) = 0;
                          sVar50 = 0;
                        }
                        else {
                          *(int *)(puVar26 + 0x21) = (int)lVar21;
                        }
                        *(short *)((long)puVar26 + lVar21 * 2 + 0x30a) = sVar50;
                        lVar21 = lVar21 + 1;
                      } while (lVar21 != 0x101);
                      local_d0 = 0;
                      goto LAB_00106874;
                    }
                  }
                  else {
                    *(undefined8 *)((long)puVar26 + 0x304) = 0;
                    *(undefined8 *)((long)puVar26 + 0x10c) = 0;
                    puVar35 = (undefined8 *)((long)puVar26 + 0x114U & 0xfffffffffffffff8);
                    uVar44 = (ulong)((iVar16 - (int)puVar35) + 0x30cU >> 3);
                    for (; uVar44 != 0; uVar44 = uVar44 - 1) {
                      *puVar35 = 0;
                      puVar35 = puVar35 + (ulong)bVar7 * -2 + 1;
                    }
                    *(undefined8 *)((long)puVar26 + 0x30c) = 0;
                    puVar35 = (undefined8 *)((long)puVar26 + 0x314U & 0xfffffffffffffff8);
                    *(undefined8 *)((long)puVar26 + 0x504) = 0;
                    uVar44 = (ulong)((iVar16 - (int)puVar35) + 0x50cU >> 3);
                    for (; uVar44 != 0; uVar44 = uVar44 - 1) {
                      *puVar35 = 0;
                      puVar35 = puVar35 + (ulong)bVar7 * -2 + 1;
                    }
                    puVar26[0x20] = lVar21 + uVar42;
                    iVar16 = FT_Stream_Seek(param_1);
                    local_88 = (ulong *)CONCAT44(local_88._4_4_,iVar16);
                    if (iVar16 == 0) {
                      bVar7 = FT_Stream_ReadByte(param_1,&local_88);
                      *(uint *)(puVar26 + 0x1f) = (uint)bVar7;
                      if ((uint)local_88 == 0) {
                        bVar7 = FT_Stream_ReadByte(param_1,&local_88);
                        if ((uint)local_88 == 0) {
                          if ((*(uint *)(puVar26 + 0x1f) & 0x7f) == 0) {
                            *(uint *)(puVar26 + 0x21) = bVar7 + 1;
                            iVar16 = FT_Stream_EnterFrame(param_1,bVar7);
                            local_88 = (ulong *)CONCAT44(local_88._4_4_,iVar16);
                            if (iVar16 != 0) goto LAB_00106a13;
                            lVar21 = *(long *)(param_1 + 0x40);
                            lVar28 = 0;
                            for (uVar17 = 1; uVar17 <= bVar7; uVar17 = uVar17 + 1) {
                              if (uVar17 < uVar15) {
                                uVar42 = (ulong)*(byte *)(lVar21 + lVar28);
                                lVar39 = puVar26[0xa4];
                                *(short *)((long)puVar26 + uVar42 * 2 + 0x30c) = (short)uVar17;
                                *(undefined2 *)((long)puVar26 + uVar42 * 2 + 0x10c) =
                                     *(undefined2 *)(lVar39 + (lVar28 + 1) * 2);
                              }
                              lVar28 = lVar28 + 1;
                            }
                            FT_Stream_ExitFrame(param_1);
                          }
                          else {
                            if ((*(uint *)(puVar26 + 0x1f) & 0x7f) != 1) goto LAB_00106a08;
                            *(undefined4 *)(puVar26 + 0x21) = 0;
                            uVar14 = 1;
                            for (uVar17 = 0; uVar17 < bVar7; uVar17 = uVar17 + 1) {
                              bVar8 = FT_Stream_ReadByte(param_1,&local_88);
                              if ((uint)local_88 != 0) goto LAB_00106a13;
                              uVar41 = (uint)bVar8;
                              bVar8 = FT_Stream_ReadByte(param_1,&local_88);
                              if ((uint)local_88 != 0) goto LAB_00106a13;
                              uVar20 = bVar8 + 1;
                              if (*(uint *)(puVar26 + 0x21) < uVar20) {
                                *(uint *)(puVar26 + 0x21) = uVar20;
                              }
                              uVar20 = uVar20 + uVar14;
                              lVar21 = (ulong)uVar14 * 2;
                              for (; uVar14 < uVar20; uVar14 = uVar14 + 1) {
                                if ((uVar14 < uVar15) && (uVar41 < 0x100)) {
                                  lVar28 = puVar26[0xa4];
                                  *(short *)((long)puVar26 + (ulong)uVar41 * 2 + 0x30c) =
                                       (short)uVar14;
                                  *(undefined2 *)((long)puVar26 + (ulong)uVar41 * 2 + 0x10c) =
                                       *(undefined2 *)(lVar28 + lVar21);
                                }
                                uVar41 = uVar41 + 1;
                                lVar21 = lVar21 + 2;
                              }
                              uVar14 = uVar20;
                            }
                            if (0x100 < *(uint *)(puVar26 + 0x21)) {
                              *(undefined4 *)(puVar26 + 0x21) = 0x100;
                            }
                          }
                          if ((*(byte *)(puVar26 + 0x1f) & 0x80) != 0) {
                            bVar7 = FT_Stream_ReadByte(param_1,&local_88);
                            if ((uint)local_88 != 0) goto LAB_00106a13;
                            for (uVar17 = 0; uVar17 < bVar7; uVar17 = uVar17 + 1) {
                              bVar8 = FT_Stream_ReadByte(param_1,&local_88);
                              if ((uint)local_88 != 0) goto LAB_00106a13;
                              sVar50 = FT_Stream_ReadUShort(param_1,&local_88);
                              if ((uint)local_88 != 0) goto LAB_00106a13;
                              *(short *)((long)puVar26 + (ulong)bVar8 * 2 + 0x10c) = sVar50;
                              lVar21 = 0;
                              do {
                                lVar28 = lVar21;
                                if (uVar15 <= (uint)lVar28) goto LAB_00106fa4;
                                lVar21 = lVar28 + 1;
                              } while (sVar50 != *(short *)(puVar26[0xa4] + lVar28 * 2));
                              *(short *)((long)puVar26 + (ulong)bVar8 * 2 + 0x30c) = (short)lVar28;
LAB_00106fa4:
                            }
                          }
                          local_d0 = (uint)local_88;
                          if ((uint)local_88 != 0) goto LAB_001058c1;
                          goto LAB_00106874;
                        }
                      }
                    }
                  }
LAB_00106a13:
                  local_d0 = (uint)local_88;
                  goto LAB_001058c1;
                }
              }
LAB_00106874:
              uVar27 = cff_index_get_name(puVar26,local_108);
              puVar26[199] = uVar27;
            }
          }
        }
      }
    }
  }
  else {
    cff_vstore_done(puVar26 + 0x273,uVar27);
    local_d0 = (uint)local_88;
    if ((uint)local_88 == 0) goto LAB_00105672;
  }
LAB_001058c1:
  cff_index_done(local_c8);
joined_r0x00106639:
  uVar15 = local_d0;
  uVar17 = local_d0;
  if (local_d0 != 0) goto LAB_00105256;
LAB_001059ac:
  iVar16 = *(int *)((long)puVar26 + 0x74c);
  puVar26[0x26b] = uVar23;
  puVar26[0x26c] = lVar22;
  puVar26[0x26d] = uVar25;
  param_2[1] = (long)(int)(param_3 & 0xffff);
  param_2[4] = (ulong)*(uint *)((long)puVar26 + 0x24);
  local_d4 = local_d0;
  if ((iVar16 != 0xffff) || (lVar22 != 0)) {
    if (((*(byte *)((long)param_2 + 0x11) & 1) != 0) &&
       ((param_3 >> 0x10 != 0 &&
        (local_d4 = FT_Set_Named_Instance(param_2), uVar15 = local_d4, uVar17 = local_d4,
        local_d4 != 0)))) goto LAB_00105256;
    if (*(char *)(puVar26 + 0xd9) == '\0') {
      uVar42 = 1000;
      if (local_e8 == 0) {
        uVar42 = (ulong)(ushort)param_2[0x11];
      }
      puVar26[0xda] = uVar42;
    }
    lVar21 = puVar26[0xd8];
    if (lVar21 == 0) {
      lVar21 = puVar26[0xd7];
    }
    lVar22 = -lVar21;
    if (0 < lVar21) {
      lVar22 = lVar21;
    }
    if (lVar22 == 0x10000) {
      lVar21 = puVar26[0xdc];
    }
    else {
      uVar27 = FT_DivFix(puVar26[0xda],lVar22);
      puVar26[0xda] = uVar27;
      uVar27 = FT_DivFix(puVar26[0xd5],lVar22);
      puVar26[0xd5] = uVar27;
      uVar27 = FT_DivFix(puVar26[0xd7],lVar22);
      puVar26[0xd7] = uVar27;
      uVar27 = FT_DivFix(puVar26[0xd6],lVar22);
      puVar26[0xd6] = uVar27;
      uVar27 = FT_DivFix(puVar26[0xd8],lVar22);
      puVar26[0xd8] = uVar27;
      uVar27 = FT_DivFix(puVar26[0xdb],lVar22);
      puVar26[0xdb] = uVar27;
      lVar21 = FT_DivFix(puVar26[0xdc],lVar22);
    }
    puVar26[0xdb] = (long)puVar26[0xdb] >> 0x10;
    puVar26[0xdc] = lVar21 >> 0x10;
    if (*(int *)(puVar26 + 0x166) != 0) {
      plVar51 = puVar26 + (ulong)(*(int *)(puVar26 + 0x166) - 1) + 0x167;
      do {
        lVar21 = *plVar51;
        if (*(char *)(lVar21 + 0x60) == '\0') {
          uVar23 = puVar26[0xd6];
          uVar27 = puVar26[0xda];
          uVar25 = puVar26[0xdb];
          uVar45 = puVar26[0xdc];
          *(undefined8 *)(lVar21 + 0x40) = puVar26[0xd5];
          *(undefined8 *)(lVar21 + 0x48) = uVar23;
          uVar23 = puVar26[0xd7];
          uVar38 = puVar26[0xd8];
          *(undefined8 *)(lVar21 + 0x68) = uVar27;
          *(undefined8 *)(lVar21 + 0x50) = uVar23;
          *(undefined8 *)(lVar21 + 0x58) = uVar38;
          *(undefined8 *)(lVar21 + 0x70) = uVar25;
          *(undefined8 *)(lVar21 + 0x78) = uVar45;
        }
        else if (*(char *)(puVar26 + 0xd9) != '\0') {
          uVar42 = puVar26[0xda];
          uVar44 = 1;
          if (1 < uVar42) {
            uVar3 = *(ulong *)(lVar21 + 0x68);
            if (uVar3 < uVar42) {
              uVar42 = uVar3;
            }
            if (1 < uVar3) {
              uVar44 = uVar42;
            }
          }
          FT_Matrix_Multiply_Scaled(puVar26 + 0xd5,lVar21 + 0x40,uVar44);
          FT_Vector_Transform_Scaled(lVar21 + 0x70,puVar26 + 0xd5,uVar44);
          uVar27 = FT_MulDiv(*(undefined8 *)(lVar21 + 0x68),puVar26[0xda],uVar44);
          *(undefined8 *)(lVar21 + 0x68) = uVar27;
        }
        lVar22 = *(long *)(lVar21 + 0x58);
        if (lVar22 == 0) {
          lVar22 = *(long *)(lVar21 + 0x50);
        }
        lVar28 = -lVar22;
        if (0 < lVar22) {
          lVar28 = lVar22;
        }
        if (lVar28 == 0x10000) {
          lVar22 = *(long *)(lVar21 + 0x78);
        }
        else {
          uVar27 = FT_DivFix(*(undefined8 *)(lVar21 + 0x68),lVar28);
          *(undefined8 *)(lVar21 + 0x68) = uVar27;
          uVar27 = FT_DivFix(*(undefined8 *)(lVar21 + 0x40),lVar28);
          *(undefined8 *)(lVar21 + 0x40) = uVar27;
          uVar27 = FT_DivFix(*(undefined8 *)(lVar21 + 0x50),lVar28);
          *(undefined8 *)(lVar21 + 0x50) = uVar27;
          uVar27 = FT_DivFix(*(undefined8 *)(lVar21 + 0x48),lVar28);
          *(undefined8 *)(lVar21 + 0x48) = uVar27;
          uVar27 = FT_DivFix(*(undefined8 *)(lVar21 + 0x58),lVar28);
          *(undefined8 *)(lVar21 + 0x58) = uVar27;
          uVar27 = FT_DivFix(*(undefined8 *)(lVar21 + 0x70),lVar28);
          *(undefined8 *)(lVar21 + 0x70) = uVar27;
          lVar22 = FT_DivFix(*(undefined8 *)(lVar21 + 0x78),lVar28);
        }
        plVar51 = plVar51 + -1;
        *(long *)(lVar21 + 0x70) = *(long *)(lVar21 + 0x70) >> 0x10;
        *(long *)(lVar21 + 0x78) = lVar22 >> 0x10;
      } while (plVar51 != puVar26 + 0x166);
    }
    iVar16 = *(int *)((long)puVar26 + 0x74c);
    if (local_e8 != 0) {
      *param_2 = (ulong)*(uint *)(puVar26 + 4);
      if (iVar16 == 0xffff) {
        uVar15 = *(uint *)((long)puVar26 + 0x54c);
      }
      else {
        uVar15 = *(int *)(puVar26 + 0xa6) + 1;
      }
      param_2[4] = (ulong)uVar15;
      auVar1 = *(undefined1 (*) [16])(puVar26 + 0xde);
      sVar11 = (short)((ulong)puVar26[0xdf] >> 0x10);
      *(int *)(param_2 + 0xd) = auVar1._2_4_;
      *(int *)((long)param_2 + 0x6c) = auVar1._4_4_ >> 0x10;
      *(int *)(param_2 + 0xe) = auVar1._10_4_;
      *(int *)((long)param_2 + 0x74) = auVar1._12_4_ >> 0x10;
      lVar21 = puVar26[0xe1];
      lVar22 = puVar26[0xe0] + __LC21;
      lVar28 = puVar26[0xe1] + _UNK_00108e28;
      *(int *)(param_2 + 0xf) = (int)((ulong)lVar22 >> 0x10);
      *(int *)((long)param_2 + 0x7c) = (int)(lVar22 >> 0x30);
      *(int *)(param_2 + 0x10) = (int)((ulong)lVar28 >> 0x10);
      *(int *)((long)param_2 + 0x84) = (int)(lVar28 >> 0x30);
      uVar15 = ((uint)puVar26[0xda] & 0xffff) * 0xc;
      sVar12 = (short)((ulong)(lVar21 + 0xffff) >> 0x10);
      sVar50 = (short)(uVar15 / 10);
      if ((int)(short)(uVar15 / 10) < (int)sVar12 - (int)sVar11) {
        sVar50 = (short)((ulong)lVar28 >> 0x10) - auVar1._10_2_;
      }
      uVar27 = puVar26[0xd2];
      *(short *)(param_2 + 0x11) = (short)puVar26[0xda];
      iVar16 = *(int *)(puVar26 + 0xcf);
      *(short *)((long)param_2 + 0x8a) = sVar12;
      *(short *)((long)param_2 + 0x8c) = sVar11;
      *(short *)((long)param_2 + 0x94) = (short)((ulong)uVar27 >> 0x10);
      uVar27 = puVar26[0xd3];
      *(short *)((long)param_2 + 0x8e) = sVar50;
      *(short *)((long)param_2 + 0x96) = (short)((ulong)uVar27 >> 0x10);
      if ((iVar16 == 0) || (lVar21 = cff_index_get_sid_string(puVar26), lVar21 == 0)) {
        uVar42 = param_2[5];
      }
      else {
        uVar42 = ft_mem_strdup(uVar24,lVar21,&local_88);
        param_2[5] = uVar42;
      }
      if (uVar42 == 0) {
        pcVar30 = (char *)cff_index_get_name(puVar26,param_3 & 0xffff);
        param_2[5] = (ulong)pcVar30;
        if (pcVar30 != (char *)0x0) {
          sVar33 = strlen(pcVar30);
          uVar15 = (int)sVar33 + 1;
          uVar42 = (ulong)uVar15;
          if (6 < (int)uVar15) {
            pcVar29 = pcVar30 + 6;
            while (pcVar31 = pcVar30, bVar7 = local_e8, pcVar30[6] == '+') {
              do {
                while (pcVar32 = pcVar31 + 1, 0x19 < (byte)(*pcVar31 + 0xbfU)) {
                  if (pcVar32 == pcVar29) goto LAB_00106487;
                  pcVar31 = pcVar32;
                  bVar7 = 0;
                }
                pcVar31 = pcVar32;
              } while (pcVar32 != pcVar29);
              if ((bVar7 == 0) || ((int)uVar42 == 7)) break;
              uVar15 = (int)uVar42 - 7;
              uVar42 = (ulong)uVar15;
              pcVar30 = (char *)memmove(pcVar30,pcVar30 + 7,uVar42);
              if ((int)uVar15 < 7) break;
            }
LAB_00106487:
            if (param_2[5] == 0) goto LAB_00106495;
          }
          goto LAB_00105de1;
        }
LAB_00106495:
        lVar21 = cff_index_get_sid_string(puVar26,*(undefined4 *)(puVar26 + 0xf3));
        if (lVar21 != 0) {
          uVar42 = ft_mem_strdup(uVar24,lVar21,&local_88);
          param_2[5] = uVar42;
        }
      }
      else {
LAB_00105de1:
        pcVar29 = (char *)cff_index_get_sid_string(puVar26,*(undefined4 *)((long)puVar26 + 0x674));
        pcVar30 = (char *)param_2[5];
        if ((pcVar29 != (char *)0x0) && (pcVar30 != (char *)0x0)) {
          while (cVar6 = *pcVar29, cVar6 != '\0') {
            cVar2 = *pcVar30;
            if (cVar2 == cVar6) {
              pcVar30 = pcVar30 + 1;
              pcVar29 = pcVar29 + 1;
            }
            else if ((cVar6 == ' ') || (cVar6 == '-')) {
              pcVar29 = pcVar29 + 1;
            }
            else {
              if ((cVar2 != ' ') && (cVar2 != '-')) {
                if ((cVar2 == '\0') &&
                   (pcVar30 = (char *)ft_mem_strdup(uVar24,pcVar29,&local_88),
                   pcVar30 != (char *)0x0)) {
                  pcVar29 = (char *)param_2[5];
                  sVar33 = strlen(pcVar29);
                  sVar34 = strlen(pcVar30);
                  iVar18 = (int)sVar33;
                  iVar16 = (int)sVar34;
                  if (iVar18 <= iVar16) goto LAB_00105e67;
                  if (iVar16 < 1) goto LAB_00106583;
                  iVar40 = 1;
                  lVar21 = 0;
                  goto LAB_0010656f;
                }
                break;
              }
              pcVar30 = pcVar30 + 1;
            }
          }
        }
      }
      pcVar30 = (char *)ft_mem_strdup(uVar24,"Regular",&local_88);
      goto LAB_00105e67;
    }
    lVar21 = (long)(int)param_2[9];
    if (iVar16 == 0xffff) goto LAB_0010630e;
    goto LAB_001061f0;
  }
LAB_00105250:
  uVar15 = local_d4;
  uVar17 = 0xb;
LAB_00105256:
  local_d4 = uVar15;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}


