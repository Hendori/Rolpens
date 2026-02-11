
/* setup_masks_use(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void setup_masks_use(hb_ot_shape_plan_t *param_1,hb_buffer_t *param_2,hb_font_t *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  uint *puVar4;
  
  if (*(long *)(*(long *)(param_1 + 0x88) + 8) != 0) {
    setup_masks_arabic_plan
              (*(long *)(*(long *)(param_1 + 0x88) + 8),param_2,*(undefined4 *)(param_1 + 4));
  }
  param_2[0xb8] = (hb_buffer_t)((byte)param_2[0xb8] | 0x40);
  puVar4 = *(uint **)(param_2 + 0x70);
  if (*(uint *)(param_2 + 0x60) != 0) {
    puVar1 = puVar4 + (ulong)*(uint *)(param_2 + 0x60) * 5;
    do {
      uVar2 = *puVar4;
      uVar3 = 0;
      if (uVar2 < 0xe1000) {
        uVar3 = (&hb_use_u8)
                [(uVar2 & 1) + 0xb89 +
                 (uint)(byte)(&hb_use_u8)
                             [(uVar2 >> 1 & 7) + 0x271 +
                              (uint)*(ushort *)
                                     (hb_use_u16 +
                                     (ulong)((uVar2 >> 4 & 7) +
                                            (uint)(byte)(&hb_use_u8)
                                                        [(((int)(uint)(byte)(&hb_use_u8)
                                                                            [uVar2 >> 0xd] >>
                                                           ((byte)(uVar2 >> 10) & 4) & 0xfU) << 5 |
                                                         uVar2 >> 7 & 0x1f) + 0x71] * 8) * 2) * 8] *
                 2];
      }
      *(undefined1 *)((long)puVar4 + 0x12) = uVar3;
      puVar4 = puVar4 + 5;
    } while (puVar1 != puVar4);
  }
  return;
}



/* compose_use(hb_ot_shape_normalize_context_t const*, unsigned int, unsigned int, unsigned int*) */

bool compose_use(hb_ot_shape_normalize_context_t *param_1,uint param_2,uint param_3,uint *param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_register_00000034;
  bool bVar5;
  
  lVar1 = *(long *)(param_1 + 0x18);
  uVar3 = (**(code **)(lVar1 + 0x28))
                    (lVar1,CONCAT44(in_register_00000034,param_2),*(undefined8 *)(lVar1 + 0x68));
  if (uVar3 < 0x20) {
    lVar1 = *(long *)(param_1 + 0x18);
    bVar2 = (**(code **)(lVar1 + 0x28))(lVar1,param_2,*(undefined8 *)(lVar1 + 0x68));
    if ((1 << (bVar2 & 0x1f) & 0x1c00U) != 0) {
      return false;
    }
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    bVar5 = false;
  }
  else {
    iVar4 = (**(code **)(lVar1 + 0x40))(lVar1,param_2,param_3,param_4,*(undefined8 *)(lVar1 + 0x80))
    ;
    bVar5 = iVar4 != 0;
  }
  return bVar5;
}



/* preprocess_text_use(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void preprocess_text_use(hb_ot_shape_plan_t *param_1,hb_buffer_t *param_2,hb_font_t *param_3)

{
  _hb_preprocess_text_vowel_constraints(param_1,param_2,param_3);
  return;
}



/* data_destroy_use(void*) */

void data_destroy_use(void *param_1)

{
  if (*(void **)((long)param_1 + 8) != (void *)0x0) {
    data_destroy_arabic(*(void **)((long)param_1 + 8));
  }
  free(param_1);
  return;
}



/* collect_features_use(hb_ot_shape_planner_t*) */

void collect_features_use(hb_ot_shape_planner_t *param_1)

{
  hb_ot_shape_planner_t *phVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  
  phVar1 = param_1 + 0x28;
  uVar4 = (uint)phVar1;
  hb_ot_map_builder_t::add_pause
            (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  hb_ot_map_builder_t::add_feature(phVar1,0x6c6f636c,0x41,1);
  hb_ot_map_builder_t::add_feature(phVar1,0x63636d70,0x41,1);
  hb_ot_map_builder_t::add_feature(phVar1,0x6e756b74,0x41,1);
  hb_ot_map_builder_t::add_feature(phVar1,0x616b686e,0x49,1);
  hb_ot_map_builder_t::add_pause
            (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  hb_ot_map_builder_t::add_feature(phVar1,0x72706866,0x48,1);
  hb_ot_map_builder_t::add_pause
            (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  hb_ot_map_builder_t::add_pause
            (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  pcVar3 = "frkrfvbafwlbflahftsputavtcjc";
  hb_ot_map_builder_t::add_feature(phVar1,0x70726566,0x49,1);
  hb_ot_map_builder_t::add_pause
            (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  do {
    uVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    hb_ot_map_builder_t::add_feature(phVar1,uVar2,0x49,1);
  } while (pcVar3 != "");
  hb_ot_map_builder_t::add_pause
            (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  pcVar3 = "lositiniidemaniffrkrfvbafwlbflahftsputavtcjc";
  hb_ot_map_builder_t::add_pause
            (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  do {
    uVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    hb_ot_map_builder_t::add_feature(phVar1,uVar2,0,1);
  } while (pcVar3 != "frkrfvbafwlbflahftsputavtcjc");
  pcVar3 = "svbaswlbnlahserpstsp";
  hb_ot_map_builder_t::add_pause
            (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  do {
    uVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    hb_ot_map_builder_t::add_feature(phVar1,uVar2,9,1);
  } while (pcVar3 != "");
  return;
}



/* data_create_use(hb_ot_shape_plan_t const*) */

uint * data_create_use(hb_ot_shape_plan_t *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *__ptr;
  long lVar4;
  int iVar5;
  int iVar6;
  
  __ptr = (uint *)calloc(1,0x10);
  if (__ptr != (uint *)0x0) {
    iVar5 = *(int *)(param_1 + 0x3c) + -1;
    if (-1 < iVar5) {
      iVar6 = 0;
      do {
        while( true ) {
          uVar2 = (uint)(iVar6 + iVar5) >> 1;
          puVar1 = (uint *)(*(long *)(param_1 + 0x40) + (ulong)uVar2 * 0x24);
          uVar3 = *puVar1;
          if (0x72706866 < uVar3) break;
          if (uVar3 == 0x72706866) {
            uVar3 = puVar1[7];
            goto LAB_001003d3;
          }
          iVar6 = uVar2 + 1;
          if (iVar5 < iVar6) goto LAB_00100427;
        }
        iVar5 = uVar2 - 1;
      } while (iVar6 <= iVar5);
    }
LAB_00100427:
    uVar3 = 0;
LAB_001003d3:
    *__ptr = uVar3;
    uVar3 = *(uint *)(param_1 + 4);
    if (uVar3 != 0x4e6b6f6f) {
      if (uVar3 < 0x4e6b6f70) {
        if (uVar3 != 0x4d616e64) {
          if (uVar3 < 0x4d616e65) {
            if (((uVar3 != 0x41726162) && (uVar3 != 0x43687273)) && (uVar3 != 0x41646c6d)) {
              return __ptr;
            }
          }
          else if ((uVar3 != 0x4d616e69) && (uVar3 != 0x4d6f6e67)) {
            return __ptr;
          }
        }
      }
      else if (uVar3 != 0x526f6867) {
        if (uVar3 < 0x526f6868) {
          if (((uVar3 != 0x50686167) && (uVar3 != 0x50686c70)) && (uVar3 != 0x4f756772)) {
            return __ptr;
          }
        }
        else if ((uVar3 != 0x536f6764) && (uVar3 != 0x53797263)) {
          return __ptr;
        }
      }
    }
    lVar4 = data_create_arabic(param_1);
    *(long *)(__ptr + 2) = lVar4;
    if (lVar4 != 0) {
      return __ptr;
    }
    free(__ptr);
  }
  return (uint *)0x0;
}



/* record_pref_use(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 record_pref_use(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_3 + 0x60);
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_3 + 0x70);
    uVar7 = 0;
    pcVar4 = (char *)(lVar3 + 0x23);
    do {
      uVar7 = uVar7 + 1;
      if (uVar2 == uVar7) break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 0x14;
    } while (*(char *)(lVar3 + 0xf) == cVar1);
    uVar6 = 0;
    do {
      uVar8 = uVar7;
      if (uVar6 < uVar8) {
        lVar5 = lVar3 + (ulong)uVar6 * 0x14;
        do {
          if ((*(byte *)(lVar5 + 0xc) & 0x10) != 0) {
            *(undefined1 *)(lVar5 + 0x12) = 0x16;
            break;
          }
          lVar5 = lVar5 + 0x14;
        } while (lVar5 != lVar3 + 0x14 + ((ulong)((uVar8 - 1) - uVar6) + (ulong)uVar6) * 0x14);
      }
      lVar5 = *(long *)(param_3 + 0x70) + (ulong)(uVar8 + 1) * 0x14;
      uVar7 = uVar8;
      do {
        uVar7 = uVar7 + 1;
        if (*(uint *)(param_3 + 0x60) <= uVar7) break;
        pcVar4 = (char *)(lVar5 + 0xf);
        lVar5 = lVar5 + 0x14;
      } while (*(char *)(*(long *)(param_3 + 0x70) + 0xf + (ulong)uVar8 * 0x14) == *pcVar4);
      uVar6 = uVar8;
    } while (uVar8 < uVar2);
  }
  return 0;
}



/* hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned int, unsigned int>,
   hb_array_t<hb_glyph_info_t> >, find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t
   const&)#1}, ._anon_129 const&, (void*)0>,
   find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned int, hb_glyph_info_t const&>)#1},
   ._anon_117 const&, (void*)0>::__next__() */

void __thiscall
hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
::__next__(hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
           *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar3 = *(int *)(this + 0x10);
  iVar5 = *(int *)this + *(int *)(this + 4);
  *(int *)this = iVar5;
  if (iVar3 == 0) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  do {
    iVar3 = iVar3 + -1;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
    *(int *)(this + 0x10) = iVar3;
    *(long *)(this + 8) = lVar2 + 0x14;
    if (iVar3 == 0) {
      return;
    }
    if (*(char *)(lVar2 + 0x26) != '\x06') {
      if (*(char *)(lVar2 + 0x26) != '\x0e') {
        return;
      }
      uVar1 = iVar5 + 1;
      if (*(uint *)(**(long **)(this + 0x28) + 0x60) <= uVar1) {
        return;
      }
      lVar4 = **(long **)(this + 0x30) + (ulong)uVar1 * 0x14;
      while (*(char *)(lVar4 + 0x12) == '\x06') {
        lVar4 = lVar4 + 0x14;
        if (**(long **)(this + 0x30) + 0x14 +
            ((ulong)uVar1 + (ulong)((*(uint *)(**(long **)(this + 0x28) + 0x60) - iVar5) - 2)) *
            0x14 == lVar4) {
          return;
        }
      }
      if ((0x1c00U >> (*(ushort *)(lVar4 + 0x10) & 0x1f) & 1) == 0) {
        return;
      }
    }
    iVar5 = iVar5 + *(int *)(this + 4);
    *(int *)this = iVar5;
    lVar2 = lVar2 + 0x14;
  } while( true );
}



/* hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned int, unsigned int>,
   hb_array_t<hb_glyph_info_t> >, find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t
   const&)#1}, ._anon_129 const&, (void*)0>,
   find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned int, hb_glyph_info_t const&>)#1},
   ._anon_117 const&, (void*)0>::__prev__() */

void __thiscall
hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
::__prev__(hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
           *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)this;
  iVar4 = *(int *)(this + 0x10);
  do {
    iVar2 = *(int *)(this + 0x14);
    iVar5 = iVar5 - *(int *)(this + 4);
    *(int *)this = iVar5;
    if (iVar2 == 0) goto LAB_0010066f;
LAB_0010065e:
    iVar4 = iVar4 + 1;
    *(long *)(this + 8) = *(long *)(this + 8) + -0x14;
    *(int *)(this + 0x10) = iVar4;
    *(int *)(this + 0x14) = iVar2 + -1;
LAB_0010066f:
    if (iVar4 == 0) {
      return;
    }
    while (*(char *)(*(long *)(this + 8) + 0x12) == '\x06') {
      iVar2 = *(int *)(this + 0x14);
      iVar5 = iVar5 - *(int *)(this + 4);
      *(int *)this = iVar5;
      if (iVar2 != 0) goto LAB_0010065e;
    }
    if (*(char *)(*(long *)(this + 8) + 0x12) != '\x0e') {
      return;
    }
    uVar1 = iVar5 + 1;
    if (*(uint *)(**(long **)(this + 0x28) + 0x60) <= uVar1) {
      return;
    }
    lVar3 = **(long **)(this + 0x30) + (ulong)uVar1 * 0x14;
    while (*(char *)(lVar3 + 0x12) == '\x06') {
      lVar3 = lVar3 + 0x14;
      if (**(long **)(this + 0x30) + 0x14 +
          ((ulong)((*(uint *)(**(long **)(this + 0x28) + 0x60) - 2) - iVar5) + (ulong)uVar1) * 0x14
          == lVar3) {
        return;
      }
    }
    if ((0x1c00U >> (*(ushort *)(lVar3 + 0x10) & 0x1f) & 1) == 0) {
      return;
    }
  } while( true );
}



/* hb_zip_iter_t<hb_iota_iter_t<unsigned int, unsigned int>,
   hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned int, unsigned int>,
   hb_array_t<hb_glyph_info_t> >, find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t
   const&)#1}, ._anon_129 const&, (void*)0>,
   find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned int, hb_glyph_info_t const&>)#1},
   ._anon_117 const&, (void*)0> >::__forward__(unsigned int) */

void __thiscall
hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>>
::__forward__(hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>>
              *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_1 == 0) {
    return;
  }
  iVar7 = param_1 - 1;
  *(int *)this = *(int *)this + *(int *)(this + 4) + *(int *)(this + 4) * iVar7;
  iVar4 = *(int *)(this + 0x18);
  if (iVar4 == 0) {
    return;
  }
  iVar2 = *(int *)(this + 0xc);
  iVar6 = *(int *)(this + 8) + iVar2;
  *(int *)(this + 8) = iVar6;
joined_r0x00100739:
  if (iVar4 == 0) {
    return;
  }
  lVar3 = *(long *)(this + 0x10);
  do {
    iVar4 = iVar4 + -1;
    *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
    *(int *)(this + 0x18) = iVar4;
    *(long *)(this + 0x10) = lVar3 + 0x14;
    if (iVar4 == 0) {
      return;
    }
    if (*(char *)(lVar3 + 0x26) != '\x06') {
      if (*(char *)(lVar3 + 0x26) != '\x0e') break;
      uVar1 = iVar6 + 1;
      if (*(uint *)(**(long **)(this + 0x30) + 0x60) <= uVar1) break;
      lVar5 = **(long **)(this + 0x38) + (ulong)uVar1 * 0x14;
      while (*(char *)(lVar5 + 0x12) == '\x06') {
        lVar5 = lVar5 + 0x14;
        if (**(long **)(this + 0x38) + 0x14 +
            ((ulong)uVar1 + (ulong)((*(uint *)(**(long **)(this + 0x30) + 0x60) - iVar6) - 2)) *
            0x14 == lVar5) goto LAB_00100769;
      }
      if ((0x1c00U >> (*(ushort *)(lVar5 + 0x10) & 0x1f) & 1) == 0) break;
    }
    iVar6 = iVar6 + iVar2;
    *(int *)(this + 8) = iVar6;
    lVar3 = lVar3 + 0x14;
  } while( true );
LAB_00100769:
  bVar8 = iVar7 == 0;
  iVar7 = iVar7 + -1;
  if (bVar8) {
    return;
  }
  iVar4 = *(int *)(this + 0x18);
  iVar6 = iVar6 + iVar2;
  *(int *)(this + 8) = iVar6;
  goto joined_r0x00100739;
}



/* record_rphf_use(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 record_rphf_use(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = **(uint **)(param_1 + 0x88);
  if ((uVar2 == 0) || (uVar3 = *(uint *)(param_3 + 0x60), uVar3 == 0)) {
    return 0;
  }
  lVar4 = *(long *)(param_3 + 0x70);
  uVar8 = 0;
  pcVar5 = (char *)(lVar4 + 0x23);
  do {
    uVar8 = uVar8 + 1;
    if (uVar3 == uVar8) break;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 0x14;
  } while (*(char *)(lVar4 + 0xf) == cVar1);
  uVar7 = 0;
  do {
    uVar9 = uVar8;
    if (uVar7 < uVar9) {
      lVar6 = lVar4 + (ulong)uVar7 * 0x14;
      do {
        if ((uVar2 & *(uint *)(lVar6 + 4)) == 0) break;
        if ((*(byte *)(lVar6 + 0xc) & 0x10) != 0) {
          *(undefined1 *)(lVar6 + 0x12) = 0x12;
          break;
        }
        lVar6 = lVar6 + 0x14;
      } while (lVar6 != lVar4 + 0x14 + ((ulong)((uVar9 - 1) - uVar7) + (ulong)uVar7) * 0x14);
    }
    lVar6 = *(long *)(param_3 + 0x70) + (ulong)(uVar9 + 1) * 0x14;
    uVar8 = uVar9;
    do {
      uVar8 = uVar8 + 1;
      if (*(uint *)(param_3 + 0x60) <= uVar8) break;
      pcVar5 = (char *)(lVar6 + 0xf);
      lVar6 = lVar6 + 0x14;
    } while (*(char *)(*(long *)(param_3 + 0x70) + 0xf + (ulong)uVar9 * 0x14) == *pcVar5);
    uVar7 = uVar9;
    if (uVar3 <= uVar9) {
      return 0;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* find_syllables_use(hb_buffer_t*) */

void find_syllables_use(hb_buffer_t *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  hb_buffer_t *phVar9;
  long lVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  hb_buffer_t hVar16;
  int iVar17;
  hb_buffer_t *phVar18;
  int iVar19;
  uint uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
  *local_240;
  hb_buffer_t *local_1f0 [2];
  hb_buffer_t *local_1e0;
  undefined8 local_1d8;
  uint uStack_1d0;
  int iStack_1cc;
  hb_buffer_t *local_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined1 *puStack_1b8;
  hb_buffer_t **local_1b0;
  hb_buffer_t **pphStack_1a8;
  hb_buffer_t **local_1a0;
  undefined1 *puStack_198;
  char local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  hb_buffer_t *local_178;
  long lStack_170;
  undefined1 *local_168;
  hb_buffer_t **pphStack_160;
  hb_buffer_t **local_158;
  hb_buffer_t **pphStack_150;
  undefined1 *local_148;
  undefined1 local_140;
  undefined8 local_138;
  hb_buffer_t *phStack_130;
  hb_buffer_t *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  hb_buffer_t **pphStack_110;
  hb_buffer_t **local_108;
  hb_buffer_t **pphStack_100;
  undefined1 *local_f8;
  char local_f0;
  undefined8 local_e8;
  hb_buffer_t *phStack_e0;
  hb_buffer_t *local_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  hb_buffer_t **pphStack_c0;
  hb_buffer_t **local_b8;
  hb_buffer_t **pphStack_b0;
  undefined1 *local_a8;
  char local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  hb_buffer_t *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  hb_buffer_t **pphStack_70;
  hb_buffer_t **local_68;
  hb_buffer_t **pphStack_60;
  undefined1 *local_58;
  char local_50;
  long local_40;
  
  local_1e0 = *(hb_buffer_t **)(param_1 + 0x70);
  local_1a0 = &local_1e0;
  uVar7 = *(uint *)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pphStack_1a8 = local_1f0;
  local_1c8 = local_1e0;
  if (uVar7 == 0) {
    uStack_1d0 = 0;
    uVar20 = 0;
  }
  else {
    uStack_1d0 = 0;
    uVar20 = uVar7;
    do {
      if (local_1c8[0x12] != (hb_buffer_t)0x6) {
        hVar16 = local_1c8[0x12];
        goto LAB_00100ce8;
      }
      uStack_1d0 = uStack_1d0 + 1;
      local_1c8 = local_1c8 + 0x14;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
LAB_00100a70:
  iStack_1cc = 1;
  local_1d8 = _LC0;
  local_190 = '\0';
  local_1b0 = (hb_buffer_t **)&hb_second;
  puStack_198 = &hb_identity;
  local_1f0[0] = param_1;
  uStack_1c0 = uVar20;
  uStack_1bc = uStack_1d0;
  if (uVar20 == 0) {
    uStack_180 = CONCAT44(1,uStack_1d0);
    lStack_170 = (ulong)uStack_1d0 << 0x20;
    local_140 = 0;
    local_188 = _LC0;
    local_148 = &hb_identity;
    local_168 = puStack_1b8;
    pphStack_160 = (hb_buffer_t **)&hb_second;
    local_178 = local_1c8;
    local_158 = pphStack_1a8;
    pphStack_150 = local_1a0;
    hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>>
    ::__forward__((hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>>
                   *)&local_188,0);
    uVar22 = __hb_CrapPool;
    phStack_130 = (hb_buffer_t *)CONCAT44(iStack_1cc,uStack_1d0);
    local_f0 = '\x01';
    puStack_120 = (undefined1 *)CONCAT44(uStack_1bc,uStack_1c0);
    local_a0 = '\x01';
    uVar12 = ___stack_chk_fail;
    local_108 = pphStack_1a8;
    pphStack_100 = local_1a0;
    local_b8 = pphStack_1a8;
    pphStack_b0 = local_1a0;
    local_f8 = puStack_198;
    local_a8 = puStack_198;
    _message_impl = ___stack_chk_fail;
    local_138 = local_1d8;
    local_128 = local_1c8;
    local_118 = puStack_1b8;
    pphStack_110 = local_1b0;
    local_e8 = local_1d8;
    local_d8 = local_1c8;
    local_c8 = puStack_1b8;
    pphStack_c0 = local_1b0;
    __hb_CrapPool = __hb_NullPool;
    ___stack_chk_fail = uVar22;
    phStack_e0 = phStack_130;
    puStack_d0 = puStack_120;
    if ((int)lStack_170 != 0) {
      iVar13 = (int)lStack_170;
      uVar7 = (uint)local_188;
      if ((uint)local_188 == 0) {
        lVar10 = 1;
        iVar19 = 1;
        iVar11 = (int)lStack_170;
        goto LAB_001010a5;
      }
      goto LAB_00100bf4;
    }
  }
  else {
    local_98 = CONCAT44(1,uStack_1d0);
    uVar7 = 0;
    local_88 = (hb_buffer_t *)CONCAT44(uStack_1d0,uVar20);
    uStack_80 = puStack_1b8;
    local_78 = &hb_second;
    pphStack_60 = (hb_buffer_t **)&hb_identity;
    uStack_90 = local_1c8;
    pphStack_70 = pphStack_1a8;
    local_68 = local_1a0;
    do {
      uVar7 = uVar7 + 1;
      hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
      ::__next__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                  *)&local_98);
    } while ((int)local_88 != 0);
    uStack_180 = CONCAT44(iStack_1cc,uStack_1d0);
    lStack_170 = CONCAT44(uStack_1bc,uStack_1c0);
    local_140 = 0;
    local_188 = local_1d8;
    local_178 = local_1c8;
    local_148 = puStack_198;
    local_168 = puStack_1b8;
    pphStack_160 = local_1b0;
    local_158 = pphStack_1a8;
    pphStack_150 = local_1a0;
    hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>>
    ::__forward__((hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>>
                   *)&local_188,uVar7);
    local_e8 = local_1d8;
    phStack_130 = (hb_buffer_t *)CONCAT44(iStack_1cc,uStack_1d0);
    local_d8 = local_1c8;
    puStack_120 = (undefined1 *)CONCAT44(uStack_1bc,uStack_1c0);
    local_f0 = '\x01';
    local_c8 = puStack_1b8;
    pphStack_c0 = local_1b0;
    local_a8 = puStack_198;
    local_a0 = '\x01';
    local_b8 = pphStack_1a8;
    pphStack_b0 = local_1a0;
    local_138 = local_1d8;
    local_f8 = puStack_198;
    local_128 = local_1c8;
    local_118 = puStack_1b8;
    pphStack_110 = local_1b0;
    local_108 = pphStack_1a8;
    pphStack_100 = local_1a0;
    phStack_e0 = phStack_130;
    puStack_d0 = puStack_120;
    if ((int)lStack_170 != 0) {
      iVar13 = (int)lStack_170;
      uVar7 = (uint)local_188;
      if ((uint)local_188 == 0) {
LAB_00100f05:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      goto LAB_00100bf4;
    }
    uVar12 = ___stack_chk_fail;
    uVar22 = __hb_CrapPool;
  }
  local_f0 = '\x01';
  local_a0 = '\x01';
  iVar11 = 0;
  __hb_CrapPool = __hb_NullPool;
  iVar13 = 0;
  uVar7 = (uint)local_188;
  ___stack_chk_fail = uVar22;
  _message_impl = uVar12;
  local_e8 = local_1d8;
  local_d8 = local_1c8;
  local_c8 = puStack_1b8;
  pphStack_c0 = local_1b0;
  local_b8 = pphStack_1a8;
  pphStack_b0 = local_1a0;
  local_a8 = puStack_198;
  if ((uint)local_188 == 0) {
    lVar10 = 1;
    iVar19 = 1;
    local_138 = local_1d8;
    phStack_130 = phStack_e0;
    local_128 = local_1c8;
    puStack_120 = puStack_d0;
    local_118 = puStack_1b8;
    pphStack_110 = local_1b0;
    local_108 = pphStack_1a8;
    pphStack_100 = local_1a0;
    local_f8 = puStack_198;
    if (uVar20 == 0) goto LAB_001010a5;
    goto LAB_00100f70;
  }
LAB_00100bf4:
  uVar4 = 0;
  local_a0 = '\x01';
  lVar10 = 2;
  iVar19 = 1;
  lVar15 = 1;
  uVar3 = uVar20;
  iVar11 = iVar13;
  uVar20 = uVar7;
  local_1d8 = local_e8;
  local_1c8 = local_d8;
  puStack_1b8 = local_c8;
  local_1b0 = pphStack_c0;
  pphStack_1a8 = local_b8;
  local_1a0 = pphStack_b0;
  puStack_198 = local_a8;
  local_138 = local_e8;
  phStack_130 = phStack_e0;
  local_128 = local_d8;
  puStack_120 = puStack_d0;
  local_118 = local_c8;
  pphStack_110 = pphStack_c0;
  local_108 = local_b8;
  pphStack_100 = pphStack_b0;
  local_f8 = local_a8;
  cVar6 = '\0';
LAB_00100c30:
  local_f0 = cVar6;
  if ((int)puStack_120 == 0) {
    uVar22 = __hb_CrapPool;
    _message_impl = ___stack_chk_fail;
    __hb_CrapPool = __hb_NullPool;
    ___stack_chk_fail = uVar22;
  }
  if (uVar3 == 0) {
    uVar22 = __hb_CrapPool;
    _message_impl = ___stack_chk_fail;
    __hb_CrapPool = __hb_NullPool;
    ___stack_chk_fail = uVar22;
  }
  if ((uint)local_138 < uVar4) {
    iVar13 = (uVar4 - (uint)local_138) + -1;
    local_138 = CONCAT44(local_138._4_4_,
                         (uint)local_138 + local_138._4_4_ + local_138._4_4_ * iVar13);
    if ((int)puStack_120 != 0) {
      do {
        hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
        ::__next__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                    *)&phStack_130);
        if ((int)puStack_120 == 0) break;
        bVar21 = iVar13 != 0;
        iVar13 = iVar13 + -1;
      } while (bVar21);
    }
  }
  else if (uVar4 < (uint)local_138) {
    iVar13 = ((uint)local_138 - 1) - uVar4;
    local_138 = CONCAT44(local_138._4_4_,
                         ((uint)local_138 - local_138._4_4_) - local_138._4_4_ * iVar13);
    if ((int)puStack_120 != 0) {
      do {
        hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
        ::__prev__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                    *)&phStack_130);
        if ((int)puStack_120 == 0) break;
        bVar21 = iVar13 != 0;
        iVar13 = iVar13 + -1;
      } while (bVar21);
    }
  }
LAB_00100c70:
  lVar8 = (long)(char)_use_syllable_machine_key_spans[lVar15];
  if ('\0' < (char)_use_syllable_machine_key_spans[lVar15]) {
    if (uStack_1c0 == 0) {
      hVar16 = SUB81((ulong)___stack_chk_fail >> 0x10,0);
      _message_impl = ___stack_chk_fail;
      uVar22 = __hb_NullPool;
      ___stack_chk_fail = __hb_CrapPool;
    }
    else {
      hVar16 = local_1c8[0x12];
      uVar22 = __hb_CrapPool;
    }
    __hb_CrapPool = uVar22;
    if (((byte)*(hb_buffer_t *)(_use_syllable_machine_trans_keys + lVar10) <= (byte)hVar16) &&
       ((byte)hVar16 <= (byte)*(hb_buffer_t *)(_use_syllable_machine_trans_keys + lVar10 + 1))) {
      lVar8 = (long)(int)((uint)(byte)hVar16 -
                         (uint)(byte)*(hb_buffer_t *)(_use_syllable_machine_trans_keys + lVar10));
    }
  }
  uVar7 = (uint)(byte)_use_syllable_machine_indicies
                      [lVar8 + *(short *)(_use_syllable_machine_index_offsets + lVar15 * 2)];
  do {
    cVar6 = local_190;
    uVar22 = __hb_CrapPool;
    local_240 = (hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                 *)&uStack_1d0;
    lVar10 = (long)(char)_use_syllable_machine_trans_targs[(int)uVar7];
    bVar2 = _use_syllable_machine_trans_actions[(int)uVar7];
    uVar4 = (uint)local_1d8;
    if (bVar2 == 0) {
      uVar4 = (uint)local_1d8 + local_1d8._4_4_;
      goto LAB_0010101a;
    }
    if (0x16 < bVar2) {
switchD_00100cd3_caseD_2:
      uVar4 = local_1d8._4_4_ + (uint)local_1d8;
      goto LAB_0010101a;
    }
    iVar13 = (int)(char)_use_syllable_machine_trans_targs[(int)uVar7];
    uVar12 = ___stack_chk_fail;
    switch(bVar2) {
    case 1:
      local_58 = local_a8;
      uStack_90 = phStack_e0;
      local_50 = local_a0;
      local_88 = local_d8;
      uStack_80 = puStack_d0;
      local_98 = CONCAT44(local_e8._4_4_,(uint)local_e8 - local_e8._4_4_);
      local_78 = local_c8;
      pphStack_70 = pphStack_c0;
      local_68 = local_b8;
      pphStack_60 = pphStack_b0;
      if ((int)puStack_d0 != 0) {
        hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
        ::__prev__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                    *)&uStack_90);
      }
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_1d8,&local_98);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 5);
        lVar15 = lVar15 + 0x14;
      }
      iVar19 = iVar19 + 1;
      uVar4 = local_1d8._4_4_ + (uint)local_1d8;
      cVar6 = local_190;
      if (iVar19 == 0x10) {
        iVar19 = 1;
      }
      break;
    default:
      goto switchD_00100cd3_caseD_2;
    case 4:
      uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uStack_1d0);
      uStack_80 = (undefined1 *)CONCAT44(uStack_1bc,uStack_1c0);
      local_88 = local_1c8;
      local_98 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 + local_1d8._4_4_);
      local_58 = puStack_198;
      local_78 = puStack_1b8;
      pphStack_70 = local_1b0;
      local_50 = local_190;
      local_68 = pphStack_1a8;
      pphStack_60 = local_1a0;
      if (uStack_1c0 != 0) {
        phVar9 = local_1c8;
        uVar7 = uStack_1bc;
        iVar13 = uStack_1d0 + iStack_1cc;
        uVar4 = uStack_1c0;
        while( true ) {
          do {
            iVar17 = iVar13;
            uVar7 = uVar7 + 1;
            local_88 = phVar9 + 0x14;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
              uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
              uStack_80 = (undefined1 *)((ulong)uVar7 << 0x20);
              goto LAB_001023da;
            }
            phVar18 = phVar9 + 0x26;
            phVar9 = local_88;
            iVar13 = iVar17 + iStack_1cc;
          } while (*phVar18 == (hb_buffer_t)0x6);
          if (*phVar18 != (hb_buffer_t)0xe) break;
          uVar3 = iVar17 + 1;
          if (*(uint *)(*pphStack_1a8 + 0x60) <= uVar3) break;
          phVar18 = *local_1a0 + (ulong)uVar3 * 0x14;
          while (phVar18[0x12] == (hb_buffer_t)0x6) {
            phVar18 = phVar18 + 0x14;
            if (phVar18 ==
                *local_1a0 +
                ((ulong)((*(uint *)(*pphStack_1a8 + 0x60) - 2) - iVar17) + (ulong)uVar3) * 0x14 +
                0x14) goto LAB_001023bd;
          }
          if ((0x1c00U >> (*(ushort *)(phVar18 + 0x10) & 0x1f) & 1) == 0) break;
        }
LAB_001023bd:
        uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
        uStack_80 = (undefined1 *)CONCAT44(uVar7,uVar4);
      }
LAB_001023da:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_98);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 8);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_001014aa;
    case 5:
      uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uStack_1d0);
      uStack_80 = (undefined1 *)CONCAT44(uStack_1bc,uStack_1c0);
      local_88 = local_1c8;
      local_98 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 + local_1d8._4_4_);
      local_58 = puStack_198;
      local_78 = puStack_1b8;
      pphStack_70 = local_1b0;
      local_50 = local_190;
      local_68 = pphStack_1a8;
      pphStack_60 = local_1a0;
      if (uStack_1c0 != 0) {
        phVar9 = local_1c8;
        uVar7 = uStack_1bc;
        iVar13 = uStack_1d0 + iStack_1cc;
        uVar4 = uStack_1c0;
        while( true ) {
          do {
            iVar17 = iVar13;
            uVar7 = uVar7 + 1;
            local_88 = phVar9 + 0x14;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
              uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
              uStack_80 = (undefined1 *)((ulong)uVar7 << 0x20);
              goto LAB_0010223c;
            }
            phVar18 = phVar9 + 0x26;
            phVar9 = local_88;
            iVar13 = iVar17 + iStack_1cc;
          } while (*phVar18 == (hb_buffer_t)0x6);
          if (*phVar18 != (hb_buffer_t)0xe) break;
          uVar3 = iVar17 + 1;
          if (*(uint *)(*pphStack_1a8 + 0x60) <= uVar3) break;
          phVar18 = *local_1a0 + (ulong)uVar3 * 0x14;
          while (phVar18[0x12] == (hb_buffer_t)0x6) {
            phVar18 = phVar18 + 0x14;
            if (*local_1a0 +
                ((ulong)((*(uint *)(*pphStack_1a8 + 0x60) - 2) - iVar17) + (ulong)uVar3) * 0x14 +
                0x14 == phVar18) goto LAB_0010221f;
          }
          if ((0x1c00U >> (*(ushort *)(phVar18 + 0x10) & 0x1f) & 1) == 0) break;
        }
LAB_0010221f:
        uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
        uStack_80 = (undefined1 *)CONCAT44(uVar7,uVar4);
      }
LAB_0010223c:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_98);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 7);
        lVar15 = lVar15 + 0x14;
      }
      iVar19 = iVar19 + 1;
      if (iVar19 == 0x10) {
        iVar19 = 1;
      }
      *(uint *)(local_1f0[0] + 0xc0) = *(uint *)(local_1f0[0] + 0xc0) | 0x40;
      uVar4 = (uint)local_1d8 + local_1d8._4_4_;
      break;
    case 6:
      uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uStack_1d0);
      uStack_80 = (undefined1 *)CONCAT44(uStack_1bc,uStack_1c0);
      local_88 = local_1c8;
      local_98 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 + local_1d8._4_4_);
      local_58 = puStack_198;
      local_78 = puStack_1b8;
      pphStack_70 = local_1b0;
      local_50 = local_190;
      local_68 = pphStack_1a8;
      pphStack_60 = local_1a0;
      if (uStack_1c0 != 0) {
        phVar9 = local_1c8;
        uVar7 = uStack_1bc;
        iVar13 = uStack_1d0 + iStack_1cc;
        uVar4 = uStack_1c0;
        while( true ) {
          do {
            iVar17 = iVar13;
            uVar7 = uVar7 + 1;
            local_88 = phVar9 + 0x14;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
              uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
              uStack_80 = (undefined1 *)((ulong)uVar7 << 0x20);
              goto LAB_00102626;
            }
            phVar18 = phVar9 + 0x26;
            phVar9 = local_88;
            iVar13 = iVar17 + iStack_1cc;
          } while (*phVar18 == (hb_buffer_t)0x6);
          if (*phVar18 != (hb_buffer_t)0xe) break;
          uVar3 = iVar17 + 1;
          if (*(uint *)(*pphStack_1a8 + 0x60) <= uVar3) break;
          phVar18 = *local_1a0 + (ulong)uVar3 * 0x14;
          while (phVar18[0x12] == (hb_buffer_t)0x6) {
            phVar18 = phVar18 + 0x14;
            if (phVar18 ==
                *local_1a0 +
                ((ulong)((*(uint *)(*pphStack_1a8 + 0x60) - 2) - iVar17) + (ulong)uVar3) * 0x14 +
                0x14) goto LAB_00102609;
          }
          if ((0x1c00U >> (*(ushort *)(phVar18 + 0x10) & 0x1f) & 1) == 0) break;
        }
LAB_00102609:
        uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
        uStack_80 = (undefined1 *)CONCAT44(uVar7,uVar4);
      }
LAB_00102626:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_98);
      uVar4 = local_1d8._4_4_ + (uint)local_1d8;
      break;
    case 7:
      local_a0 = local_190;
      uVar22 = ___stack_chk_fail;
      if ((int)puStack_d0 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
      }
      ___stack_chk_fail = uVar22;
      if (uStack_1c0 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      iVar17 = (int)puStack_d0;
      if ((uint)local_e8 < (uint)local_1d8) {
        iVar14 = ((uint)local_1d8 - 1) - (uint)local_e8;
        local_e8 = CONCAT44(local_e8._4_4_,local_e8._4_4_ * iVar14 + local_e8._4_4_ + (uint)local_e8
                           );
        if ((int)puStack_d0 != 0) {
          do {
            hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
            ::__next__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                        *)&phStack_e0);
            if ((int)puStack_d0 == 0) {
              lVar10 = (long)iVar13;
              goto LAB_00103353;
            }
            bVar21 = iVar14 != 0;
            iVar14 = iVar14 + -1;
          } while (bVar21);
          lVar10 = (long)iVar13;
          iVar17 = (int)puStack_d0;
        }
      }
      else if ((uint)local_1d8 < (uint)local_e8) {
        iVar13 = (uint)local_e8 - (uint)local_1d8;
        local_e8 = CONCAT44(local_e8._4_4_,
                            ((uint)local_e8 - local_e8._4_4_) - (iVar13 + -1) * local_e8._4_4_);
        while ((int)puStack_d0 != 0) {
          iVar17 = (int)puStack_d0;
          if (iVar13 == 0) goto LAB_001024aa;
          iVar13 = iVar13 + -1;
          hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
          ::__prev__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                      *)&phStack_e0);
        }
LAB_00103353:
        iVar17 = 0;
      }
LAB_001024aa:
      local_240 = (hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                   *)&uStack_1d0;
      local_1d8 = CONCAT44(local_1d8._4_4_,uVar4 - local_1d8._4_4_);
      hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
      ::__prev__(local_240);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if (iVar17 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 5);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_0010132c;
    case 8:
      uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uStack_1d0);
      uStack_80 = (undefined1 *)CONCAT44(uStack_1bc,uStack_1c0);
      local_88 = local_1c8;
      local_98 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 + local_1d8._4_4_);
      local_58 = puStack_198;
      local_78 = puStack_1b8;
      pphStack_70 = local_1b0;
      local_50 = local_190;
      local_68 = pphStack_1a8;
      pphStack_60 = local_1a0;
      if (uStack_1c0 != 0) {
        phVar9 = local_1c8;
        uVar7 = uStack_1bc;
        iVar13 = uStack_1d0 + iStack_1cc;
        uVar4 = uStack_1c0;
        while( true ) {
          do {
            iVar17 = iVar13;
            uVar7 = uVar7 + 1;
            local_88 = phVar9 + 0x14;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
              uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
              uStack_80 = (undefined1 *)((ulong)uVar7 << 0x20);
              goto LAB_00101c34;
            }
            phVar18 = phVar9 + 0x26;
            phVar9 = local_88;
            iVar13 = iVar17 + iStack_1cc;
          } while (*phVar18 == (hb_buffer_t)0x6);
          if (*phVar18 != (hb_buffer_t)0xe) break;
          uVar3 = iVar17 + 1;
          if (*(uint *)(*pphStack_1a8 + 0x60) <= uVar3) break;
          phVar18 = *local_1a0 + (ulong)uVar3 * 0x14;
          while (phVar18[0x12] == (hb_buffer_t)0x6) {
            phVar18 = phVar18 + 0x14;
            if (phVar18 ==
                *local_1a0 +
                ((ulong)((*(uint *)(*pphStack_1a8 + 0x60) - 2) - iVar17) + (ulong)uVar3) * 0x14 +
                0x14) goto LAB_00101c17;
          }
          if ((0x1c00U >> (*(ushort *)(phVar18 + 0x10) & 0x1f) & 1) == 0) break;
        }
LAB_00101c17:
        uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
        uStack_80 = (undefined1 *)CONCAT44(uVar7,uVar4);
      }
LAB_00101c34:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_98);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 5);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_0010123e;
    case 9:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_1d8);
      uVar4 = (uint)local_1d8;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 - local_1d8._4_4_);
      hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
      ::__prev__(local_240);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 2);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_00101554;
    case 10:
      uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uStack_1d0);
      uStack_80 = (undefined1 *)CONCAT44(uStack_1bc,uStack_1c0);
      local_88 = local_1c8;
      local_98 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 + local_1d8._4_4_);
      local_58 = puStack_198;
      local_78 = puStack_1b8;
      pphStack_70 = local_1b0;
      local_50 = local_190;
      local_68 = pphStack_1a8;
      pphStack_60 = local_1a0;
      if (uStack_1c0 != 0) {
        phVar9 = local_1c8;
        uVar7 = uStack_1bc;
        iVar13 = uStack_1d0 + iStack_1cc;
        uVar4 = uStack_1c0;
        while( true ) {
          do {
            iVar17 = iVar13;
            uVar7 = uVar7 + 1;
            local_88 = phVar9 + 0x14;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
              uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
              uStack_80 = (undefined1 *)((ulong)uVar7 << 0x20);
              goto LAB_001020c4;
            }
            phVar18 = phVar9 + 0x26;
            phVar9 = local_88;
            iVar13 = iVar17 + iStack_1cc;
          } while (*phVar18 == (hb_buffer_t)0x6);
          if (*phVar18 != (hb_buffer_t)0xe) break;
          uVar3 = iVar17 + 1;
          if (*(uint *)(*pphStack_1a8 + 0x60) <= uVar3) break;
          phVar18 = *local_1a0 + (ulong)uVar3 * 0x14;
          while (phVar18[0x12] == (hb_buffer_t)0x6) {
            phVar18 = phVar18 + 0x14;
            if (phVar18 ==
                *local_1a0 +
                ((ulong)((*(uint *)(*pphStack_1a8 + 0x60) - 2) - iVar17) + (ulong)uVar3) * 0x14 +
                0x14) goto LAB_001020a7;
          }
          if ((0x1c00U >> (*(ushort *)(phVar18 + 0x10) & 0x1f) & 1) == 0) break;
        }
LAB_001020a7:
        uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
        uStack_80 = (undefined1 *)CONCAT44(uVar7,uVar4);
      }
LAB_001020c4:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_98);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 2);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_001014aa;
    case 0xb:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_1d8);
      uVar4 = (uint)local_1d8;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 - local_1d8._4_4_);
      hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
      ::__prev__(local_240);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 1);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_00101554;
    case 0xc:
      uVar4 = local_1d8._4_4_ + (uint)local_1d8;
      phVar9 = local_1c8;
      uVar7 = uStack_1c0;
      uVar3 = uStack_1d0;
      if (uStack_1c0 == 0) {
LAB_001017e6:
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
        uVar23 = ___stack_chk_fail;
      }
      else {
        while( true ) {
          do {
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              if ((int)puStack_d0 == 0) goto LAB_00101920;
              goto LAB_001017e6;
            }
            phVar18 = phVar9 + 0x26;
            phVar9 = phVar9 + 0x14;
            uVar3 = uVar3 + iStack_1cc;
          } while (*phVar18 == (hb_buffer_t)0x6);
          if (*phVar18 != (hb_buffer_t)0xe) break;
          uVar1 = uVar3 + 1;
          if (*(uint *)(*pphStack_1a8 + 0x60) <= uVar1) break;
          phVar18 = *local_1a0 + (ulong)uVar1 * 0x14;
          while (phVar18[0x12] == (hb_buffer_t)0x6) {
            phVar18 = phVar18 + 0x14;
            if (*local_1a0 +
                ((ulong)((*(uint *)(*pphStack_1a8 + 0x60) - uVar3) - 2) + (ulong)uVar1) * 0x14 +
                0x14 == phVar18) goto LAB_00101910;
          }
          if ((0x1c00U >> (*(ushort *)(phVar18 + 0x10) & 0x1f) & 1) == 0) break;
        }
LAB_00101910:
        uVar23 = ___stack_chk_fail;
        if ((int)puStack_d0 == 0) {
LAB_00101920:
          uVar23 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          if (uVar7 == 0) goto LAB_001017e6;
        }
      }
      ___stack_chk_fail = uVar23;
      local_a0 = local_190;
      iVar17 = (int)puStack_d0;
      if ((uint)local_e8 < uVar4) {
        iVar14 = (uVar4 - (uint)local_e8) + -1;
        local_e8 = CONCAT44(local_e8._4_4_,local_e8._4_4_ + (uint)local_e8 + local_e8._4_4_ * iVar14
                           );
        if ((int)puStack_d0 != 0) {
          do {
            hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
            ::__next__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                        *)&phStack_e0);
            if ((int)puStack_d0 == 0) {
              lVar10 = (long)iVar13;
              goto LAB_0010342e;
            }
            bVar21 = iVar14 != 0;
            iVar14 = iVar14 + -1;
          } while (bVar21);
          lVar10 = (long)iVar13;
          iVar17 = (int)puStack_d0;
        }
      }
      else if (uVar4 < (uint)local_e8) {
        iVar13 = (uint)local_e8 - uVar4;
        local_e8 = CONCAT44(local_e8._4_4_,
                            ((uint)local_e8 - local_e8._4_4_) - (iVar13 + -1) * local_e8._4_4_);
        while ((int)puStack_d0 != 0) {
          iVar17 = (int)puStack_d0;
          if (iVar13 == 0) goto LAB_00101805;
          iVar13 = iVar13 + -1;
          hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
          ::__prev__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                      *)&phStack_e0);
        }
LAB_0010342e:
        iVar17 = 0;
      }
LAB_00101805:
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if (iVar17 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 1);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_0010132c;
    case 0xd:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_1d8);
      uVar4 = (uint)local_1d8;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 - local_1d8._4_4_);
      hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
      ::__prev__(local_240);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = SUB41(iVar19 << 4,0);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_00101554;
    case 0xe:
      uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uStack_1d0);
      uStack_80 = (undefined1 *)CONCAT44(uStack_1bc,uStack_1c0);
      local_88 = local_1c8;
      local_98 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 + local_1d8._4_4_);
      local_58 = puStack_198;
      local_78 = puStack_1b8;
      pphStack_70 = local_1b0;
      local_50 = local_190;
      local_68 = pphStack_1a8;
      pphStack_60 = local_1a0;
      if (uStack_1c0 != 0) {
        phVar9 = local_1c8;
        uVar7 = uStack_1bc;
        iVar13 = uStack_1d0 + iStack_1cc;
        uVar4 = uStack_1c0;
        while( true ) {
          do {
            iVar17 = iVar13;
            uVar7 = uVar7 + 1;
            local_88 = phVar9 + 0x14;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
              uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
              uStack_80 = (undefined1 *)((ulong)uVar7 << 0x20);
              goto LAB_0010166a;
            }
            phVar18 = phVar9 + 0x26;
            phVar9 = local_88;
            iVar13 = iVar17 + iStack_1cc;
          } while (*phVar18 == (hb_buffer_t)0x6);
          if (*phVar18 != (hb_buffer_t)0xe) break;
          uVar3 = iVar17 + 1;
          if (*(uint *)(*pphStack_1a8 + 0x60) <= uVar3) break;
          phVar18 = *local_1a0 + (ulong)uVar3 * 0x14;
          while (phVar18[0x12] == (hb_buffer_t)0x6) {
            phVar18 = phVar18 + 0x14;
            if (phVar18 ==
                *local_1a0 +
                ((ulong)((*(uint *)(*pphStack_1a8 + 0x60) - 2) - iVar17) + (ulong)uVar3) * 0x14 +
                0x14) goto LAB_0010164d;
          }
          if ((0x1c00U >> (*(ushort *)(phVar18 + 0x10) & 0x1f) & 1) == 0) break;
        }
LAB_0010164d:
        uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,iVar17);
        uStack_80 = (undefined1 *)CONCAT44(uVar7,uVar4);
      }
LAB_0010166a:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_98);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = SUB41(iVar19 << 4,0);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_0010123e;
    case 0xf:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_1d8);
      uVar4 = (uint)local_1d8;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 - local_1d8._4_4_);
      hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
      ::__prev__(local_240);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 4);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_00101554;
    case 0x10:
      uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uStack_1d0);
      uStack_80 = (undefined1 *)CONCAT44(uStack_1bc,uStack_1c0);
      local_88 = local_1c8;
      local_98 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 + local_1d8._4_4_);
      local_58 = puStack_198;
      local_78 = puStack_1b8;
      pphStack_70 = local_1b0;
      local_50 = local_190;
      local_68 = pphStack_1a8;
      pphStack_60 = local_1a0;
      phVar9 = local_1c8;
      uVar7 = uStack_1d0;
      uVar4 = uStack_1bc;
      uVar3 = uStack_1c0;
      if (uStack_1c0 != 0) {
        while( true ) {
          do {
            uVar7 = uVar7 + iStack_1cc;
            uVar4 = uVar4 + 1;
            local_88 = phVar9 + 0x14;
            uVar3 = uVar3 - 1;
            if (uVar3 == 0) {
              uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uVar7);
              uStack_80 = (undefined1 *)((ulong)uVar4 << 0x20);
              goto LAB_0010142f;
            }
            phVar18 = phVar9 + 0x26;
            phVar9 = local_88;
          } while (*phVar18 == (hb_buffer_t)0x6);
          if (*phVar18 != (hb_buffer_t)0xe) break;
          uVar1 = uVar7 + 1;
          if (*(uint *)(*pphStack_1a8 + 0x60) <= uVar1) break;
          phVar18 = *local_1a0 + (ulong)uVar1 * 0x14;
          while (phVar18[0x12] == (hb_buffer_t)0x6) {
            phVar18 = phVar18 + 0x14;
            if (*local_1a0 +
                ((ulong)((*(uint *)(*pphStack_1a8 + 0x60) - uVar7) - 2) + (ulong)uVar1) * 0x14 +
                0x14 == phVar18) goto LAB_00101411;
          }
          if ((0x1c00U >> (*(ushort *)(phVar18 + 0x10) & 0x1f) & 1) == 0) break;
        }
LAB_00101411:
        uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uVar7);
        uStack_80 = (undefined1 *)CONCAT44(uVar4,uVar3);
      }
LAB_0010142f:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_98);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 4);
        lVar15 = lVar15 + 0x14;
      }
LAB_001014aa:
      iVar19 = iVar19 + 1;
      uVar4 = local_1d8._4_4_ + (uint)local_1d8;
      if (iVar19 == 0x10) {
        iVar19 = 1;
      }
      break;
    case 0x11:
      local_a0 = local_190;
      uVar22 = ___stack_chk_fail;
      if ((int)puStack_d0 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
      }
      ___stack_chk_fail = uVar22;
      if (uStack_1c0 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      iVar17 = (int)puStack_d0;
      if ((uint)local_e8 < (uint)local_1d8) {
        iVar14 = ((uint)local_1d8 - 1) - (uint)local_e8;
        local_e8 = CONCAT44(local_e8._4_4_,local_e8._4_4_ * iVar14 + local_e8._4_4_ + (uint)local_e8
                           );
        if ((int)puStack_d0 != 0) {
          do {
            hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
            ::__next__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                        *)&phStack_e0);
            if ((int)puStack_d0 == 0) {
              lVar10 = (long)iVar13;
              goto LAB_00103225;
            }
            bVar21 = iVar14 != 0;
            iVar14 = iVar14 + -1;
          } while (bVar21);
          lVar10 = (long)iVar13;
          iVar17 = (int)puStack_d0;
        }
      }
      else if ((uint)local_1d8 < (uint)local_e8) {
        iVar13 = (uint)local_e8 - (uint)local_1d8;
        local_e8 = CONCAT44(local_e8._4_4_,
                            ((uint)local_e8 - local_e8._4_4_) - (iVar13 + -1) * local_e8._4_4_);
        while ((int)puStack_d0 != 0) {
          iVar17 = (int)puStack_d0;
          if (iVar13 == 0) goto LAB_001012af;
          iVar13 = iVar13 + -1;
          hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
          ::__prev__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                      *)&phStack_e0);
        }
LAB_00103225:
        iVar17 = 0;
      }
LAB_001012af:
      local_240 = (hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                   *)&uStack_1d0;
      local_1d8 = CONCAT44(local_1d8._4_4_,uVar4 - local_1d8._4_4_);
      hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
      ::__prev__(local_240);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if (iVar17 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 3);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_0010132c;
    case 0x12:
      uVar4 = local_1d8._4_4_ + (uint)local_1d8;
      phVar9 = local_1c8;
      uVar7 = uStack_1c0;
      uVar3 = uStack_1d0;
      if (uStack_1c0 == 0) {
LAB_00101dd9:
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
        uVar23 = ___stack_chk_fail;
        _message_impl = uVar12;
      }
      else {
        while( true ) {
          do {
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              if ((int)puStack_d0 == 0) goto LAB_00101f13;
              goto LAB_00101dd9;
            }
            phVar18 = phVar9 + 0x26;
            phVar9 = phVar9 + 0x14;
            uVar3 = uVar3 + iStack_1cc;
          } while (*phVar18 == (hb_buffer_t)0x6);
          if (*phVar18 != (hb_buffer_t)0xe) break;
          uVar1 = uVar3 + 1;
          if (*(uint *)(*pphStack_1a8 + 0x60) <= uVar1) break;
          phVar18 = *local_1a0 + (ulong)uVar1 * 0x14;
          while (phVar18[0x12] == (hb_buffer_t)0x6) {
            phVar18 = phVar18 + 0x14;
            if (*local_1a0 +
                ((ulong)((*(uint *)(*pphStack_1a8 + 0x60) - uVar3) - 2) + (ulong)uVar1) * 0x14 +
                0x14 == phVar18) goto LAB_00101f03;
          }
          if ((0x1c00U >> (*(ushort *)(phVar18 + 0x10) & 0x1f) & 1) == 0) break;
        }
LAB_00101f03:
        uVar23 = ___stack_chk_fail;
        if ((int)puStack_d0 == 0) {
LAB_00101f13:
          uVar23 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          if (uVar7 == 0) goto LAB_00101dd9;
        }
      }
      ___stack_chk_fail = uVar23;
      local_a0 = local_190;
      iVar17 = (int)puStack_d0;
      if ((uint)local_e8 < uVar4) {
        iVar14 = (uVar4 - (uint)local_e8) + -1;
        local_e8 = CONCAT44(local_e8._4_4_,local_e8._4_4_ * iVar14 + local_e8._4_4_ + (uint)local_e8
                           );
        if ((int)puStack_d0 != 0) {
          do {
            hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
            ::__next__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                        *)&phStack_e0);
            if ((int)puStack_d0 == 0) {
              lVar10 = (long)iVar13;
              goto LAB_001034af;
            }
            bVar21 = iVar14 != 0;
            iVar14 = iVar14 + -1;
          } while (bVar21);
          lVar10 = (long)iVar13;
          iVar17 = (int)puStack_d0;
        }
      }
      else if (uVar4 < (uint)local_e8) {
        iVar13 = (uint)local_e8 - uVar4;
        local_e8 = CONCAT44(local_e8._4_4_,
                            ((uint)local_e8 - local_e8._4_4_) - (iVar13 + -1) * local_e8._4_4_);
        while ((int)puStack_d0 != 0) {
          iVar17 = (int)puStack_d0;
          if (iVar13 == 0) goto LAB_00101df8;
          iVar13 = iVar13 + -1;
          hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
          ::__prev__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                      *)&phStack_e0);
        }
LAB_001034af:
        iVar17 = 0;
      }
LAB_00101df8:
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if (iVar17 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 3);
        lVar15 = lVar15 + 0x14;
      }
      goto LAB_0010132c;
    case 0x13:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_1d8);
      uVar4 = (uint)local_1d8;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 - local_1d8._4_4_);
      hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
      ::__prev__(local_240);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 7);
        lVar15 = lVar15 + 0x14;
      }
      iVar19 = iVar19 + 1;
      if (iVar19 == 0x10) {
        iVar19 = 1;
      }
      *(uint *)(local_1f0[0] + 0xc0) = *(uint *)(local_1f0[0] + 0xc0) | 0x40;
      cVar6 = local_190;
      break;
    case 0x14:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_1d8);
      uVar4 = (uint)local_1d8;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 - local_1d8._4_4_);
      hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
      ::__prev__(local_240);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 8);
        lVar15 = lVar15 + 0x14;
      }
LAB_00101554:
      iVar19 = iVar19 + 1;
      cVar6 = local_190;
      if (iVar19 == 0x10) {
        iVar19 = 1;
      }
      break;
    case 0x15:
      local_a0 = local_190;
      uVar22 = ___stack_chk_fail;
      if ((int)puStack_d0 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
      }
      ___stack_chk_fail = uVar22;
      if (uStack_1c0 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      iVar17 = (int)puStack_d0;
      if ((uint)local_e8 < (uint)local_1d8) {
        iVar14 = ((uint)local_1d8 - 1) - (uint)local_e8;
        local_e8 = CONCAT44(local_e8._4_4_,local_e8._4_4_ * iVar14 + local_e8._4_4_ + (uint)local_e8
                           );
        if ((int)puStack_d0 != 0) {
          do {
            hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
            ::__next__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                        *)&phStack_e0);
            if ((int)puStack_d0 == 0) {
              lVar10 = (long)iVar13;
              goto LAB_001030df;
            }
            bVar21 = iVar14 != 0;
            iVar14 = iVar14 + -1;
          } while (bVar21);
          lVar10 = (long)iVar13;
          iVar17 = (int)puStack_d0;
        }
      }
      else if ((uint)local_1d8 < (uint)local_e8) {
        iVar13 = (uint)local_e8 - (uint)local_1d8;
        local_e8 = CONCAT44(local_e8._4_4_,
                            ((uint)local_e8 - local_e8._4_4_) - (iVar13 + -1) * local_e8._4_4_);
        while ((int)puStack_d0 != 0) {
          iVar17 = (int)puStack_d0;
          if (iVar13 == 0) goto LAB_001019a2;
          iVar13 = iVar13 + -1;
          hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
          ::__prev__((hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                      *)&phStack_e0);
        }
LAB_001030df:
        iVar17 = 0;
      }
LAB_001019a2:
      local_240 = (hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                   *)&uStack_1d0;
      local_1d8 = CONCAT44(local_1d8._4_4_,uVar4 - local_1d8._4_4_);
      hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
      ::__prev__(local_240);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if (iVar17 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 6);
        lVar15 = lVar15 + 0x14;
      }
LAB_0010132c:
      iVar19 = iVar19 + 1;
      if (iVar19 == 0x10) {
        iVar19 = 1;
      }
      break;
    case 0x16:
      uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uStack_1d0);
      uStack_80 = (undefined1 *)CONCAT44(uStack_1bc,uStack_1c0);
      local_88 = local_1c8;
      local_98 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 + local_1d8._4_4_);
      local_58 = puStack_198;
      local_78 = puStack_1b8;
      pphStack_70 = local_1b0;
      local_50 = local_190;
      local_68 = pphStack_1a8;
      pphStack_60 = local_1a0;
      phVar9 = local_1c8;
      uVar7 = uStack_1d0;
      uVar4 = uStack_1bc;
      uVar3 = uStack_1c0;
      if (uStack_1c0 != 0) {
        while( true ) {
          do {
            uVar7 = uVar7 + iStack_1cc;
            uVar4 = uVar4 + 1;
            local_88 = phVar9 + 0x14;
            uVar3 = uVar3 - 1;
            if (uVar3 == 0) {
              uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uVar7);
              uStack_80 = (undefined1 *)((ulong)uVar4 << 0x20);
              goto LAB_001011c5;
            }
            phVar18 = phVar9 + 0x26;
            phVar9 = local_88;
          } while (*phVar18 == (hb_buffer_t)0x6);
          if (*phVar18 != (hb_buffer_t)0xe) break;
          uVar1 = uVar7 + 1;
          if (*(uint *)(*pphStack_1a8 + 0x60) <= uVar1) break;
          phVar18 = *local_1a0 + (ulong)uVar1 * 0x14;
          while (phVar18[0x12] == (hb_buffer_t)0x6) {
            phVar18 = phVar18 + 0x14;
            if (phVar18 ==
                *local_1a0 +
                ((ulong)((*(uint *)(*pphStack_1a8 + 0x60) - uVar7) - 2) + (ulong)uVar1) * 0x14 +
                0x14) goto LAB_001011a7;
          }
          if ((0x1c00U >> (*(ushort *)(phVar18 + 0x10) & 0x1f) & 1) == 0) break;
        }
LAB_001011a7:
        uStack_90 = (hb_buffer_t *)CONCAT44(iStack_1cc,uVar7);
        uStack_80 = (undefined1 *)CONCAT44(uVar4,uVar3);
      }
LAB_001011c5:
      _ZN15machine_index_tI13hb_zip_iter_tI14hb_iota_iter_tIjjE16hb_filter_iter_tIS3_IS0_IS2_10hb_array_tI15hb_glyph_info_tEEZL18find_syllables_useP11hb_buffer_tEUlRKS5_E_RK10__anon_129LPv0EEZL18find_syllables_useS9_EUl9hb_pair_tIjSB_EE_RK10__anon_117LSG_0EEEEaSERKSQ_
                (&local_e8,&local_98);
      if ((int)puStack_120 == 0) {
        uVar22 = __hb_CrapPool;
        _message_impl = ___stack_chk_fail;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
      }
      uVar5 = (ulong)phStack_130 & 0xffffffff;
      lVar15 = uVar5 * 0x14;
      while( true ) {
        if ((int)puStack_d0 == 0) {
          uVar22 = __hb_CrapPool;
          _message_impl = ___stack_chk_fail;
          __hb_CrapPool = __hb_NullPool;
          ___stack_chk_fail = uVar22;
        }
        if ((uint)phStack_e0 <= (uint)uVar5) break;
        uVar5 = (ulong)((uint)uVar5 + 1);
        local_1e0[lVar15 + 0xf] = (hb_buffer_t)((byte)(iVar19 << 4) | 6);
        lVar15 = lVar15 + 0x14;
      }
LAB_0010123e:
      iVar19 = iVar19 + 1;
      uVar4 = (uint)local_1d8 + local_1d8._4_4_;
      if (iVar19 == 0x10) {
        iVar19 = 1;
      }
    }
LAB_0010101a:
    local_240 = (hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__anon_117_const&,(void*)0>
                 *)&uStack_1d0;
    lVar15 = (long)(int)lVar10;
    if (_use_syllable_machine_to_state_actions[lVar15] == '\x02') {
      local_f0 = '\x01';
    }
    local_1d8 = CONCAT44(local_1d8._4_4_,uVar4);
    hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},._anon_129_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},._anon_117_const&,(void*)0>
    ::__next__(local_240);
    uVar22 = __hb_CrapPool;
    if (cVar6 != '\0') goto LAB_00101076;
    uVar12 = ___stack_chk_fail;
    uVar7 = uVar20;
    if (uStack_1c0 == 0) {
      __hb_CrapPool = __hb_NullPool;
      ___stack_chk_fail = uVar22;
      _message_impl = uVar12;
      if (iVar11 == 0) goto LAB_0010315b;
      if (uVar20 != uVar4) goto LAB_00101076;
LAB_001010a5:
      __hb_CrapPool = __hb_NullPool;
      ___stack_chk_fail = uVar22;
      _message_impl = uVar12;
      if (iVar11 == 0) {
LAB_001010b6:
        iVar11 = 0;
        __hb_CrapPool = __hb_NullPool;
        ___stack_chk_fail = uVar22;
        _message_impl = uVar12;
      }
    }
    else {
      if (iVar11 == 0) {
LAB_0010315b:
        ___stack_chk_fail = uVar22;
        __hb_CrapPool = __hb_NullPool;
        _message_impl = uVar12;
        if (uVar20 == uVar4) {
          iVar11 = 0;
          if (uStack_1c0 == 0) goto LAB_001010a5;
          goto LAB_001010b6;
        }
        goto LAB_00101076;
      }
      if (uVar20 != uVar4) goto LAB_00101076;
    }
    iVar13 = iVar11;
    if (uVar20 != uVar7) goto LAB_00100f05;
LAB_00100f70:
    uVar20 = uVar7;
    iVar11 = iVar13;
    if (*(short *)(_use_syllable_machine_eof_trans + lVar10 * 2) < 1) goto LAB_00100f05;
    uVar7 = (int)*(short *)(_use_syllable_machine_eof_trans + lVar10 * 2) - 1;
  } while( true );
LAB_00100ce8:
  if ((hVar16 != (hb_buffer_t)0xe) || (uVar4 = uStack_1d0 + 1, uVar7 <= uVar4)) goto LAB_00100a70;
  phVar9 = local_1e0 + (ulong)uVar4 * 0x14;
  while (phVar9[0x12] == (hb_buffer_t)0x6) {
    phVar9 = phVar9 + 0x14;
    if (phVar9 == local_1e0 + ((ulong)((uVar7 - 2) - uStack_1d0) + (ulong)uVar4) * 0x14 + 0x14)
    goto LAB_00100a70;
  }
  phVar18 = local_1c8;
  if ((0x1c00U >> (*(ushort *)(phVar9 + 0x10) & 0x1f) & 1) == 0) goto LAB_00100a70;
  while( true ) {
    uStack_1d0 = uVar4;
    uVar20 = uVar20 - 1;
    local_1c8 = phVar18 + 0x14;
    if (uVar20 == 0) goto LAB_00100a70;
    hVar16 = phVar18[0x26];
    if (hVar16 != (hb_buffer_t)0x6) break;
    uVar4 = uStack_1d0 + 1;
    phVar18 = local_1c8;
  }
  goto LAB_00100ce8;
LAB_00101076:
  lVar10 = (long)((int)lVar10 * 2);
  uVar3 = uStack_1c0;
  if (_use_syllable_machine_from_state_actions[lVar15] == '\x03') goto LAB_00100c30;
  goto LAB_00100c70;
}



/* setup_syllables_use(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 setup_syllables_use(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint *puVar11;
  byte *pbVar13;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long in_FS_OFFSET;
  uint local_58 [6];
  long local_40;
  ulong uVar12;
  ulong uVar14;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] | 8);
  find_syllables_use(param_3);
  uVar3 = *(uint *)(param_3 + 0x60);
  if (uVar3 == 0) {
    puVar15 = *(uint **)(param_1 + 0x88);
  }
  else {
    lVar4 = *(long *)(param_3 + 0x70);
    uVar17 = 0;
    pcVar10 = (char *)(lVar4 + 0x23);
    do {
      uVar17 = uVar17 + 1;
      if (uVar3 == uVar17) break;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 0x14;
    } while (*(char *)(lVar4 + 0xf) == cVar1);
    uVar7 = 0;
    do {
      uVar9 = uVar17;
      hb_buffer_t::_set_glyph_flags(param_3,3,uVar7,uVar9,true,false);
      uVar8 = *(uint *)(param_3 + 0x60);
      lVar20 = lVar4 + (ulong)(uVar9 + 1) * 0x14;
      uVar17 = uVar9;
      do {
        uVar17 = uVar17 + 1;
        if (uVar8 <= uVar17) break;
        pcVar10 = (char *)(lVar20 + 0xf);
        lVar20 = lVar20 + 0x14;
      } while (*(char *)(lVar4 + 0xf + (ulong)uVar9 * 0x14) == *pcVar10);
      uVar7 = uVar9;
    } while (uVar9 < uVar3);
    puVar15 = *(uint **)(param_1 + 0x88);
    uVar3 = *puVar15;
    if ((uVar3 != 0) && (uVar8 != 0)) {
      uVar14 = 0;
      pcVar10 = (char *)(lVar4 + 0x23);
      do {
        uVar17 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar17;
        if (uVar8 == uVar17) break;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 0x14;
      } while (*(char *)(lVar4 + 0xf) == cVar1);
      uVar12 = 0;
      uVar17 = uVar8;
      do {
        uVar7 = (uint)uVar12;
        uVar9 = (uint)uVar14;
        if (*(char *)(lVar4 + 0x12 + uVar12 * 0x14) == '\x12') {
          uVar6 = uVar7 + 1;
LAB_00103a14:
          puVar11 = (uint *)(lVar4 + 4 + uVar12 * 0x14);
          do {
            *puVar11 = *puVar11 | uVar3;
            puVar11 = puVar11 + 5;
          } while ((uint *)(lVar4 + 0x18 + (((uVar6 - uVar7) - 1) + uVar12) * 0x14) != puVar11);
          uVar17 = *(uint *)(param_3 + 0x60);
        }
        else {
          uVar6 = uVar9 - uVar7;
          if (3 < uVar6) {
            uVar6 = 3;
          }
          uVar6 = uVar6 + uVar7;
          if (uVar7 < uVar6) goto LAB_00103a14;
        }
        uVar12 = uVar14;
        lVar20 = lVar4 + (ulong)(uVar9 + 1) * 0x14;
        do {
          uVar7 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar7;
          if (uVar17 <= uVar7) break;
          pcVar10 = (char *)(lVar20 + 0xf);
          lVar20 = lVar20 + 0x14;
        } while (*(char *)(lVar4 + 0xf + uVar14 * 0x14) == *pcVar10);
        if (uVar8 <= uVar9) break;
        uVar12 = uVar14;
        uVar14 = (ulong)uVar7;
      } while( true );
    }
  }
  if (*(long *)(puVar15 + 2) == 0) {
    iVar18 = *(int *)(param_1 + 0x3c);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar20 = 0;
    uVar17 = 0;
    uVar3 = *(uint *)(param_1 + 0x34);
    do {
      if (-1 < iVar18 + -1) {
        iVar16 = 0;
        iVar19 = iVar18 + -1;
        do {
          while( true ) {
            uVar8 = (uint)(iVar16 + iVar19) >> 1;
            puVar15 = (uint *)(lVar4 + (ulong)uVar8 * 0x24);
            uVar7 = *puVar15;
            if (*(uint *)("lositiniidemaniffrkrfvbafwlbflahftsputavtcjc" + lVar20) < uVar7) break;
            if (*(uint *)("lositiniidemaniffrkrfvbafwlbflahftsputavtcjc" + lVar20) <= uVar7) {
              uVar7 = puVar15[7];
              if (uVar3 == uVar7) goto LAB_00103c06;
              goto LAB_00103b2e;
            }
            iVar16 = uVar8 + 1;
            if (iVar19 < iVar16) goto LAB_00103bfb;
          }
          iVar19 = uVar8 - 1;
        } while (iVar16 <= iVar19);
      }
LAB_00103bfb:
      uVar7 = 0;
      if (uVar3 == 0) {
LAB_00103c06:
        uVar7 = 0;
      }
      else {
LAB_00103b2e:
        uVar17 = uVar17 | uVar7;
      }
      *(uint *)((long)local_58 + lVar20) = uVar7;
      lVar20 = lVar20 + 4;
    } while (lVar20 != 0x10);
    if (uVar17 != 0) {
      uVar3 = *(uint *)(param_3 + 0x60);
      if (uVar3 != 0) {
        lVar4 = *(long *)(param_3 + 0x70);
        uVar14 = 0;
        bVar2 = *(byte *)(lVar4 + 0xf);
        pbVar13 = (byte *)(lVar4 + 0x23);
        do {
          uVar7 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar7;
          if (uVar3 == uVar7) break;
          bVar5 = *pbVar13;
          pbVar13 = pbVar13 + 0x14;
        } while (bVar2 == bVar5);
        uVar12 = 0;
        iVar18 = 4;
        uVar7 = 0;
        do {
          bVar5 = bVar2 & 0xf;
          uVar8 = (uint)uVar14;
          if (bVar5 == 7) {
LAB_00103c10:
            if ((iVar18 == 3) || (iVar18 == 0)) {
              if ((uint)uVar12 < uVar7) {
                uVar9 = local_58[(int)((iVar18 == 3) + 1)];
                puVar15 = (uint *)(lVar4 + 4 + uVar12 * 0x14);
                do {
                  puVar11 = puVar15 + 5;
                  *puVar15 = *puVar15 & ~uVar17 | uVar9;
                  puVar15 = puVar11;
                } while ((uint *)(lVar4 + 0x18 + (((uVar7 - 1) - (uint)uVar12) + uVar12) * 0x14) !=
                         puVar11);
              }
              iVar18 = 3;
            }
            else {
              iVar18 = 0;
            }
            if (uVar7 < uVar8) {
              uVar9 = local_58[iVar18];
              puVar15 = (uint *)(lVar4 + 4 + (ulong)uVar7 * 0x14);
              do {
                puVar11 = puVar15 + 5;
                *puVar15 = *puVar15 & ~uVar17 | uVar9;
                puVar15 = puVar11;
              } while ((uint *)(lVar4 + 0x18 + ((ulong)((uVar8 - 1) - uVar7) + (ulong)uVar7) * 0x14)
                       != puVar11);
            }
          }
          else if ((bVar2 & 8) == 0) {
            if (bVar5 != 6) goto LAB_00103c10;
            iVar18 = 4;
          }
          else if (bVar5 == 8) {
            iVar18 = 4;
          }
          bVar2 = *(byte *)(lVar4 + 0xf + uVar14 * 0x14);
          lVar20 = lVar4 + (ulong)(uVar8 + 1) * 0x14;
          do {
            uVar9 = (int)uVar14 + 1;
            uVar14 = (ulong)uVar9;
            if (*(uint *)(param_3 + 0x60) <= uVar9) break;
            pbVar13 = (byte *)(lVar20 + 0xf);
            lVar20 = lVar20 + 0x14;
          } while (bVar2 == *pbVar13);
          uVar12 = (ulong)uVar7;
          if (uVar3 <= uVar8) break;
          uVar14 = (ulong)uVar9;
          uVar7 = uVar8;
        } while( true );
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* reorder_use(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

uint reorder_use(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *__dest;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = hb_buffer_t::message(param_3,param_2,"start reordering USE");
  if ((char)uVar8 != '\0') {
    uVar8 = hb_syllabic_insert_dotted_circles(param_2,param_3,7,1,0x12,-1);
    uVar3 = *(uint *)(param_3 + 0x60);
    if (uVar3 != 0) {
      uVar15 = 0;
      lVar19 = *(long *)(param_3 + 0x70);
      bVar12 = *(byte *)(lVar19 + 0xf);
      pbVar10 = (byte *)(lVar19 + 0x23);
      do {
        uVar15 = uVar15 + 1;
        if (uVar3 == uVar15) break;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 0x14;
      } while (bVar12 == bVar2);
      uVar14 = 0;
      do {
        uVar9 = (uint)uVar14;
        __dest = (undefined8 *)(lVar19 + uVar14 * 0x14);
        if ((1 << (bVar12 & 0xf) & 0xa7U) != 0) {
          uVar18 = uVar14;
          if (((*(char *)((long)__dest + 0x12) == '\x12') && (1 < uVar15 - uVar9)) &&
             (uVar16 = uVar9 + 1, uVar16 < uVar15)) {
            puVar1 = (undefined8 *)(lVar19 + (ulong)uVar16 * 0x14);
            puVar11 = puVar1;
            do {
              bVar12 = *(byte *)((long)puVar11 + 0x12);
              if ((bVar12 < 0x40) &&
                 (((1L << (bVar12 & 0x3f) & 0xe0ee7fc00000U) != 0 ||
                  (((bVar12 < 0x36 && ((0x20100000001000U >> ((ulong)bVar12 & 0x3f) & 1) != 0)) &&
                   ((*(ushort *)((long)puVar11 + 0xc) & 0x20) == 0)))))) {
                puVar11 = (undefined8 *)(lVar19 + (ulong)(uVar16 - 1) * 0x14);
                uVar17 = uVar16;
                uVar16 = uVar16 - 1;
LAB_0010402d:
                if (1 < uVar17 - uVar9) {
                  hb_buffer_t::merge_clusters_impl((uint)param_3,uVar9);
                }
                uVar4 = *(undefined4 *)(__dest + 2);
                uVar6 = *__dest;
                uVar7 = __dest[1];
                memmove(__dest,puVar1,(ulong)(uVar16 - uVar9) * 0x14);
                *puVar11 = uVar6;
                puVar11[1] = uVar7;
                *(undefined4 *)(puVar11 + 2) = uVar4;
                break;
              }
              if (uVar16 == uVar15 - 1) {
                uVar17 = uVar16 + 1;
                goto LAB_0010402d;
              }
              uVar16 = uVar16 + 1;
              puVar11 = (undefined8 *)((long)puVar11 + 0x14);
            } while (uVar16 < uVar15);
          }
          else if (uVar15 <= uVar9) goto LAB_00103e6c;
          while( true ) {
            uVar9 = uVar9 + 1;
            bVar12 = *(byte *)((long)__dest + 0x12);
            uVar16 = (uint)uVar14;
            uVar14 = (ulong)uVar9;
            if (bVar12 < 0x20) {
              if (((0x20100000001000U >> ((ulong)bVar12 & 0x3f) & 1) == 0) ||
                 ((*(ushort *)((long)__dest + 0xc) & 0x20) != 0)) {
                if (((1 << (bVar12 & 0x1f) & 0xc00000U) != 0) &&
                   ((((*(byte *)((long)__dest + 0xe) & 0x10) != 0 ||
                     ((*(byte *)((long)__dest + 0xe) & 0xf) == 0)) &&
                    (uVar17 = (uint)uVar18, uVar17 < uVar16)))) {
                  if (uVar9 - uVar17 != 1) {
                    hb_buffer_t::merge_clusters_impl((uint)param_3,uVar17);
                  }
                  uVar4 = *(undefined4 *)(__dest + 2);
                  uVar6 = *__dest;
                  uVar7 = __dest[1];
                  puVar1 = (undefined8 *)(lVar19 + uVar18 * 0x14);
                  memmove((void *)(lVar19 + (ulong)(uVar17 + 1) * 0x14),puVar1,
                          (ulong)(uVar16 - uVar17) * 0x14);
                  *puVar1 = uVar6;
                  puVar1[1] = uVar7;
                  *(undefined4 *)(puVar1 + 2) = uVar4;
                }
              }
              else {
                uVar18 = (ulong)uVar9;
              }
            }
            else if (((bVar12 < 0x36) && ((0x20100000001000U >> ((ulong)bVar12 & 0x3f) & 1) != 0))
                    && ((*(ushort *)((long)__dest + 0xc) & 0x20) == 0)) {
              uVar18 = (ulong)uVar9;
            }
            if (uVar15 == uVar9) break;
            __dest = (undefined8 *)((long)__dest + 0x14);
          }
          lVar19 = *(long *)(param_3 + 0x70);
        }
LAB_00103e6c:
        bVar12 = *(byte *)(lVar19 + 0xf + (ulong)uVar15 * 0x14);
        lVar13 = lVar19 + (ulong)(uVar15 + 1) * 0x14;
        uVar9 = uVar15;
        do {
          uVar9 = uVar9 + 1;
          if (*(uint *)(param_3 + 0x60) <= uVar9) break;
          pbVar10 = (byte *)(lVar13 + 0xf);
          lVar13 = lVar13 + 0x14;
        } while (bVar12 == *pbVar10);
        uVar14 = (ulong)uVar15;
        bVar20 = uVar15 < uVar3;
        uVar15 = uVar9;
      } while (bVar20);
      uVar8 = uVar8 & 0xff;
    }
    hb_buffer_t::message(param_3,param_2,"end reordering USE");
  }
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] & 0xbf);
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_buffer_t::_set_glyph_flags(unsigned int, unsigned int, unsigned int, bool, bool) */

void __thiscall
hb_buffer_t::_set_glyph_flags
          (hb_buffer_t *this,uint param_1,uint param_2,uint param_3,bool param_4,bool param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long in_FS_OFFSET;
  long local_50;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x60) < param_3) {
    param_3 = *(uint *)(this + 0x60);
  }
  if ((param_5) || (!param_4)) {
    *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
    if ((param_5) && (this[0x5a] != (hb_buffer_t)0x0)) {
      uVar5 = *(uint *)(this + 100);
      if (!param_4) {
        if (param_2 < uVar5) {
          puVar4 = (uint *)(*(long *)(this + 0x78) + 4 + (ulong)param_2 * 0x14);
          do {
            *puVar4 = *puVar4 | param_1;
            param_2 = param_2 + 1;
            puVar4 = puVar4 + 5;
          } while (param_2 < *(uint *)(this + 100));
        }
        uVar5 = *(uint *)(this + 0x5c);
        if (uVar5 < param_3) {
          lVar3 = *(long *)(this + 0x70);
          puVar4 = (uint *)(lVar3 + 4 + (ulong)uVar5 * 0x14);
          do {
            *puVar4 = *puVar4 | param_1;
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 + ((ulong)((param_3 - uVar5) - 1) + (ulong)uVar5) * 0x14)
                   != puVar4);
        }
        goto LAB_00106da0;
      }
      iVar1 = *(int *)(this + 0x1c);
      uVar11 = *(uint *)(this + 0x5c);
      lVar3 = *(long *)(this + 0x70);
      lVar8 = *(long *)(this + 0x78);
      if (uVar11 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar5) goto LAB_00106da0;
        if (iVar1 == 2) goto LAB_0010713e;
LAB_00106ef5:
        lVar10 = lVar8 + (ulong)(uVar5 - 1) * 0x14;
        uVar6 = (ulong)param_2;
        uVar7 = *(uint *)(lVar10 + 8);
        lVar12 = lVar8 + uVar6 * 0x14;
        uVar13 = *(uint *)(lVar12 + 8);
        if (uVar7 < uVar13) {
          uVar13 = uVar7;
          lVar12 = lVar10;
        }
        puVar4 = (uint *)(lVar12 + 8);
        if (local_44 <= uVar13) {
          puVar4 = &local_44;
        }
        uVar7 = *puVar4;
        if (param_2 == uVar5) {
LAB_001071d5:
          if (param_3 == uVar11) goto LAB_00106da0;
LAB_001071de:
          uVar9 = (ulong)(param_3 - 1);
          uVar6 = (ulong)uVar11;
          goto LAB_001071e5;
        }
        local_50 = uVar6 * 0x14;
        lVar12 = (ulong)(uVar5 - 1) * 0x14;
        uVar13 = *(uint *)(lVar8 + 8 + local_50);
        lVar10 = lVar8 + lVar12;
        uVar2 = *(uint *)(lVar10 + 8);
        if (uVar7 == uVar13) {
LAB_0010709d:
          if (param_2 < uVar5) {
            do {
              if (*(uint *)(lVar10 + 8) == uVar7) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | param_1;
              lVar10 = lVar10 + -0x14;
            } while (lVar10 != lVar8 + -0x14 + lVar12 + (ulong)((uVar5 - param_2) - 1) * -0x14);
LAB_00106fb9:
            uVar11 = *(uint *)(this + 0x5c);
          }
        }
        else {
          if (uVar7 != uVar2) goto LAB_00107192;
          if (uVar7 == uVar13) goto LAB_0010709d;
          if (param_2 < uVar5) {
            puVar4 = (uint *)(lVar8 + 4 + local_50);
            do {
              if (puVar4[1] == uVar2) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *puVar4 = *puVar4 | param_1;
              puVar4 = puVar4 + 5;
            } while (puVar4 != (uint *)(lVar8 + 0x18 + (((uVar5 - param_2) - 1) + uVar6) * 0x14));
            goto LAB_00106fb9;
          }
        }
        if (uVar11 == param_3) goto LAB_00106da0;
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
LAB_00106fe3:
        if (uVar5 != uVar7) {
          if (uVar13 != uVar7) goto LAB_00107206;
          if (uVar5 != uVar7) {
            if (uVar11 < param_3) {
              puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
              do {
                if (puVar4[1] == uVar13) break;
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar4 = *puVar4 | param_1;
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar3 + 0x18 + (((int)uVar9 - uVar11) + uVar6) * 0x14));
            }
            goto LAB_00106da0;
          }
        }
        if (uVar11 < param_3) {
          lVar8 = lVar3 + uVar9 * 0x14;
          do {
            if (*(uint *)(lVar8 + 8) == uVar7) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | param_1;
            lVar8 = lVar8 + -0x14;
          } while (lVar8 != lVar3 + -0x14 + uVar9 * 0x14 + (ulong)((int)uVar9 - uVar11) * -0x14);
        }
      }
      else {
        if (iVar1 == 2) {
          if (uVar11 < param_3) {
            puVar4 = (uint *)(lVar3 + 8 + (ulong)uVar11 * 0x14);
            local_44 = 0xffffffff;
            do {
              if (*puVar4 < local_44) {
                local_44 = *puVar4;
              }
              puVar4 = puVar4 + 5;
            } while (puVar4 != (uint *)(lVar3 + 0x1c +
                                       ((ulong)((param_3 - uVar11) - 1) + (ulong)uVar11) * 0x14));
          }
          else {
            local_44 = 0xffffffff;
          }
          uVar7 = local_44;
          if (param_2 != uVar5) {
LAB_0010713e:
            uVar6 = (ulong)param_2;
            uVar7 = local_44;
            if (param_2 < uVar5) {
              puVar4 = (uint *)(lVar8 + 8 + uVar6 * 0x14);
              do {
                if (*puVar4 < uVar7) {
                  uVar7 = *puVar4;
                }
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar8 + 0x1c + (((uVar5 - param_2) - 1) + uVar6) * 0x14));
              if (param_2 == uVar5) goto LAB_001071d5;
            }
            local_50 = uVar6 * 0x14;
LAB_00107192:
            if (param_2 < uVar5) {
              puVar4 = (uint *)(lVar8 + 4 + local_50);
              do {
                if (puVar4[1] != uVar7) {
                  *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                  *puVar4 = *puVar4 | param_1;
                }
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar8 + 0x18 +
                                         ((ulong)((uVar5 - param_2) - 1) + (ulong)param_2) * 0x14));
              uVar11 = *(uint *)(this + 0x5c);
            }
            goto LAB_001071d5;
          }
          goto LAB_001071de;
        }
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar7 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        if (uVar13 < uVar7) {
          uVar7 = uVar13;
        }
        local_44 = uVar7;
        if (param_2 != uVar5) goto LAB_00106ef5;
LAB_001071e5:
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        if (iVar1 != 2) goto LAB_00106fe3;
LAB_00107206:
        if (uVar11 < param_3) {
          puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
          do {
            if (puVar4[1] != uVar7) {
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *puVar4 = *puVar4 | param_1;
            }
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 + (((int)uVar9 - uVar11) + uVar6) * 0x14) != puVar4);
        }
      }
      goto LAB_00106da0;
    }
    if (!param_4) {
      if (param_2 < param_3) {
        lVar3 = *(long *)(this + 0x70);
        puVar4 = (uint *)(lVar3 + 4 + (ulong)param_2 * 0x14);
        do {
          *puVar4 = *puVar4 | param_1;
          puVar4 = puVar4 + 5;
        } while (puVar4 != (uint *)(lVar3 + 0x18 +
                                   ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14));
      }
      goto LAB_00106da0;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_00106da0;
    *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
  }
  lVar3 = *(long *)(this + 0x70);
  if (param_2 != param_3) {
    if (*(int *)(this + 0x1c) == 2) {
      if (param_2 < param_3) {
        uVar6 = (ulong)param_2;
        puVar4 = (uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar5 = 0xffffffff;
        do {
          if (*puVar4 < uVar5) {
            uVar5 = *puVar4;
          }
          puVar4 = puVar4 + 5;
        } while ((uint *)(lVar3 + 0x1c + (((param_3 - param_2) - 1) + uVar6) * 0x14) != puVar4);
        puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
        do {
          if (uVar5 != puVar4[1]) {
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *puVar4 = *puVar4 | param_1;
          }
          puVar4 = puVar4 + 5;
        } while (puVar4 != (uint *)(lVar3 + 0x18 + (((param_3 - param_2) - 1) + uVar6) * 0x14));
      }
    }
    else {
      lVar12 = (ulong)(param_3 - 1) * 0x14;
      lVar10 = (ulong)param_2 * 0x14;
      lVar8 = lVar3 + lVar12;
      uVar5 = *(uint *)(lVar3 + 8 + lVar10);
      uVar11 = *(uint *)(lVar8 + 8);
      if (uVar11 < uVar5) {
        if (param_2 < param_3) {
          puVar4 = (uint *)(lVar3 + 4 + lVar10);
          do {
            if (puVar4[1] == uVar11) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *puVar4 = *puVar4 | param_1;
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 +
                           ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14) != puVar4);
        }
      }
      else if (param_2 < param_3) {
        do {
          if (*(uint *)(lVar8 + 8) == uVar5) break;
          *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
          *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | param_1;
          lVar8 = lVar8 + -0x14;
        } while (lVar3 + -0x14 + lVar12 + (ulong)((param_3 - param_2) - 1) * -0x14 != lVar8);
      }
    }
  }
LAB_00106da0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* hb_buffer_t::message(hb_font_t*, char const*, ...) */

undefined8 __thiscall hb_buffer_t::message(hb_buffer_t *this,hb_font_t *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 1;
  if (*(long *)(this + 0xd0) != 0) {
    uVar2 = hb_buffer_t::message_impl((hb_font_t *)this,(char *)param_1,(__va_list_tag *)param_2);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


