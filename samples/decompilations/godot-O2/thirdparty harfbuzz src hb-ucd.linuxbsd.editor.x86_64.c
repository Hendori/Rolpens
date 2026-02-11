
/* hb_ucd_combining_class(hb_unicode_funcs_t*, unsigned int, void*) */

undefined1 hb_ucd_combining_class(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x1e94b) {
    uVar1 = (&_hb_ucd_u8)
            [(param_2 & 3) + 0x2138 +
             (uint)(byte)(&_hb_ucd_u8)
                         [(param_2 >> 2 & 3) + 0x1f00 +
                          (uint)(byte)(&_hb_ucd_u8)
                                      [(param_2 >> 4 & 3) + 0x1d24 +
                                       (uint)(byte)(&_hb_ucd_u8)
                                                   [(param_2 >> 6 & 7) + 0x1bbc +
                                                    (uint)(byte)(&_hb_ucd_u8)
                                                                [(param_2 >> 9) + 0x1ac6] * 8] * 4]
                          * 4] * 4];
  }
  return uVar1;
}



/* hb_ucd_general_category(hb_unicode_funcs_t*, unsigned int, void*) */

undefined1 hb_ucd_general_category(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_2 < 0x10fffe) {
    uVar1 = (&_hb_ucd_u8)
            [(param_2 & 1) + 0x1948 +
             (uint)(byte)(&_hb_ucd_u8)
                         [(param_2 >> 1 & 7) + 0x330 +
                          (uint)*(ushort *)
                                 (_hb_ucd_u16 +
                                 (ulong)((uint)(byte)(&_hb_ucd_u8)
                                                     [(uint)(byte)(&_hb_ucd_u8)[param_2 >> 0xc] *
                                                      0x10 + 0x110 + (param_2 >> 8 & 0xf)] * 0x10 +
                                        (param_2 >> 4 & 0xf)) * 2) * 8] * 2];
  }
  return uVar1;
}



/* hb_ucd_mirroring(hb_unicode_funcs_t*, unsigned int, void*) */

undefined1  [16] hb_ucd_mirroring(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (ulong)param_2;
  if (param_2 < 0xff64) {
    param_3 = (void *)(ulong)(uint)(int)*(short *)(_hb_ucd_i16 +
                                                  (ulong)((param_2 & 3) +
                                                         (uint)(byte)(&_hb_ucd_u8)
                                                                     [(param_2 >> 2 & 7) + 0x2424 +
                                                                      (uint)(byte)(&_hb_ucd_u8)
                                                                                  [(((int)(uint)(
                                                  byte)(&DAT_00107c0c)[param_2 >> 9] >>
                                                  ((byte)(param_2 >> 6) & 4) & 0xfU) << 3 |
                                                  param_2 >> 5 & 7) + 0x23ac] * 8] * 4) * 2);
    uVar1 = (ulong)(param_2 +
                   (int)*(short *)(_hb_ucd_i16 +
                                  (ulong)((param_2 & 3) +
                                         (uint)(byte)(&_hb_ucd_u8)
                                                     [(param_2 >> 2 & 7) + 0x2424 +
                                                      (uint)(byte)(&_hb_ucd_u8)
                                                                  [(((int)(uint)(byte)(&DAT_00107c0c
                                                                                      )[param_2 >> 9
                                                                                       ] >>
                                                                     ((byte)(param_2 >> 6) & 4) &
                                                                    0xfU) << 3 | param_2 >> 5 & 7) +
                                                                   0x23ac] * 8] * 4) * 2));
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* hb_ucd_script(hb_unicode_funcs_t*, unsigned int, void*) */

undefined4 hb_ucd_script(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x5a7a7a7a;
  if (param_2 < 0xe01f0) {
    uVar1 = *(undefined4 *)
             (_hb_ucd_sc_map +
             (ulong)(byte)(&_hb_ucd_u8)
                          [(param_2 & 7) + 0x28f6 +
                           (uint)*(ushort *)
                                  (_hb_ucd_u16 +
                                  (ulong)((param_2 >> 3 & 7) + 0xea0 +
                                         (uint)*(ushort *)
                                                (_hb_ucd_u16 +
                                                (ulong)((uint)(byte)(&_hb_ucd_u8)
                                                                    [(param_2 >> 10) + 0x2574] *
                                                        0x10 + 0xa40 + (param_2 >> 6 & 0xf)) * 2) *
                                         8) * 2) * 8] * 4);
  }
  return uVar1;
}



/* hb_ucd_decompose(hb_unicode_funcs_t*, unsigned int, unsigned int*, unsigned int*, void*) */

undefined8
hb_ucd_decompose(hb_unicode_funcs_t *param_1,uint param_2,uint *param_3,uint *param_4,void *param_5)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = param_2 - 0xac00;
  if (uVar3 < 0x2ba4) {
    if (uVar3 % 0x1c != 0) {
      *param_3 = (uVar3 / 0x1c) * 0x1c + 0xac00;
      *param_4 = uVar3 % 0x1c + 0x11a7;
      return 1;
    }
    *param_3 = uVar3 / 0x24c + 0x1100;
    *param_4 = (uVar3 % 0x24c) / 0x1c + 0x1161;
  }
  else {
    if (0x2fa1d < param_2) {
      return 0;
    }
    uVar1 = *(ushort *)
             (_hb_ucd_u16 +
             (ulong)((uint)(byte)(&_hb_ucd_u8)
                                 [(uint)(byte)(&_hb_ucd_u8)[(param_2 >> 9) + 0x3fce] * 0x20 + 0x414c
                                  + (param_2 >> 4 & 0x1f)] * 0x10 + 0x1b40 + (param_2 & 0xf)) * 2);
    if (uVar1 == 0) {
      return 0;
    }
    uVar3 = uVar1 - 1;
    if (uVar3 < 0x3a7) {
      if (uVar3 < 0x339) {
        uVar3 = (uint)*(ushort *)(_hb_ucd_dm1_p0_map + (ulong)uVar3 * 2);
      }
      else {
        uVar3 = *(ushort *)(_hb_ucd_dm1_p2_map + (ulong)(uVar1 - 0x33a) * 2) | 0x20000;
      }
      *param_3 = uVar3;
      *param_4 = 0;
    }
    else if (uVar1 - 0x3a8 < 0x27e) {
      uVar3 = *(uint *)(_hb_ucd_dm2_u32_map + (ulong)(uVar1 - 0x3a8) * 4);
      *param_3 = uVar3 >> 0x15;
      *param_4 = (uint)CONCAT11(3,(byte)(uVar3 >> 0xe) & 0x7f);
    }
    else {
      uVar2 = *(ulong *)(_hb_ucd_dm2_u64_map + (ulong)(uVar1 - 0x626) * 8);
      *param_3 = (uint)(uVar2 >> 0x2a);
      *param_4 = (uint)(uVar2 >> 0x15) & 0x1fffff;
    }
  }
  return 1;
}



/* hb_ucd_compose(hb_unicode_funcs_t*, unsigned int, unsigned int, unsigned int*, void*) */

undefined8
hb_ucd_compose(hb_unicode_funcs_t *param_1,uint param_2,uint param_3,uint *param_4,void *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  if (param_2 - 0xac00 < 0x2ba4) {
    if ((param_3 - 0x11a8 < 0x1b) &&
       (uVar1 = (param_2 - 0x11a7) + param_3,
       ((param_2 - 0xac00) * -0x49249249 >> 2 | param_2 * -0x40000000) < 0x924924a)) {
LAB_00100452:
      *param_4 = uVar1;
      return 1;
    }
  }
  else if (param_2 - 0x1100 < 0x13) {
    if (param_3 - 0x1161 < 0x15) {
      uVar1 = (param_3 - 0x1161) * 0x1c + 0xac00 + (param_2 - 0x1100) * 0x24c;
      goto LAB_00100452;
    }
  }
  else if ((param_2 < 0x800) && ((param_3 & 0xffffff80) == 0x300)) {
    iVar3 = 0x27d;
    uVar1 = param_2 << 0x15 | (param_3 & 0x7f) << 0xe;
    iVar6 = 0;
    do {
      uVar2 = (uint)(iVar6 + iVar3) >> 1;
      uVar4 = *(uint *)(_hb_ucd_dm2_u32_map + (ulong)uVar2 * 4) & 0xffffc000;
      if (uVar1 < uVar4) {
        iVar3 = uVar2 - 1;
      }
      else {
        if (uVar1 <= uVar4) {
          uVar1 = *(uint *)(_hb_ucd_dm2_u32_map + (ulong)uVar2 * 4) & 0x3fff;
          goto LAB_001003f8;
        }
        iVar6 = uVar2 + 1;
      }
      if (iVar3 < iVar6) {
        return 0;
      }
    } while( true );
  }
  iVar6 = 0x197;
  uVar7 = (ulong)param_2 << 0x2a | (ulong)param_3 << 0x15;
  iVar3 = 0;
  do {
    uVar1 = (uint)(iVar3 + iVar6) >> 1;
    uVar5 = *(ulong *)(_hb_ucd_dm2_u64_map + (ulong)uVar1 * 8) & 0x7fffffffffe00000;
    if (uVar7 < uVar5) {
      iVar6 = uVar1 - 1;
    }
    else {
      if (uVar7 <= uVar5) {
        uVar1 = (uint)*(ulong *)(_hb_ucd_dm2_u64_map + (ulong)uVar1 * 8) & 0x1fffff;
LAB_001003f8:
        if (uVar1 == 0) {
          return 0;
        }
        goto LAB_00100452;
      }
      iVar3 = uVar1 + 1;
    }
    if (iVar6 < iVar3) {
      return 0;
    }
  } while( true );
}



long hb_ucd_get_unicode_funcs(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
LAB_001004ea:
  lVar1 = static_ucd_funcs;
  if (static_ucd_funcs == 0) {
    lVar1 = hb_unicode_funcs_create(0);
    hb_unicode_funcs_set_combining_class_func(lVar1,0x100000,0,0);
    hb_unicode_funcs_set_general_category_func(lVar1,hb_ucd_general_category,0);
    hb_unicode_funcs_set_mirroring_func(lVar1,hb_ucd_mirroring,0);
    hb_unicode_funcs_set_script_func(lVar1,hb_ucd_script,0);
    hb_unicode_funcs_set_compose_func(lVar1,hb_ucd_compose,0);
    hb_unicode_funcs_set_decompose_func(lVar1,hb_ucd_decompose,0);
    hb_unicode_funcs_make_immutable();
    if (lVar1 == 0) {
      lVar1 = hb_unicode_funcs_get_empty();
      LOCK();
      bVar3 = static_ucd_funcs != 0;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = static_ucd_funcs;
      }
      static_ucd_funcs = lVar2;
      UNLOCK();
      if (bVar3) goto code_r0x001005d8;
    }
    else {
      LOCK();
      bVar3 = static_ucd_funcs != 0;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = static_ucd_funcs;
      }
      static_ucd_funcs = lVar2;
      UNLOCK();
      if (bVar3) goto LAB_001005a3;
    }
  }
  return lVar1;
code_r0x001005d8:
  if (lVar1 != 0) {
LAB_001005a3:
    lVar2 = hb_unicode_funcs_get_empty();
    if (lVar1 != lVar2) {
      hb_unicode_funcs_destroy();
    }
  }
  goto LAB_001004ea;
}


