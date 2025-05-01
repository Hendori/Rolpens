
/* hb_icu_unicode_decompose(hb_unicode_funcs_t*, unsigned int, unsigned int*, unsigned int*, void*)
    */

bool hb_icu_unicode_decompose
               (hb_unicode_funcs_t *param_1,uint param_2,uint *param_3,uint *param_4,void *param_5)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  bool bVar4;
  uint local_3c;
  ushort local_38 [4];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  iVar2 = unorm2_getRawDecomposition_76_godot
                    (param_5,CONCAT44(in_register_00000034,param_2),local_38,4,&local_3c);
  if (((int)local_3c < 1) && (-1 < iVar2)) {
    iVar2 = u_countChar32_76_godot(local_38,iVar2);
    if (iVar2 == 1) {
      *param_3 = (uint)local_38[0];
      if ((local_38[0] & 0xfffff800) == 0xd800) {
        if ((local_38[0] & 0x400) == 0) {
          *param_3 = (uint)local_38[0] * 0x400 + -0x35fdc00 + (uint)local_38[1];
        }
        else {
          *param_3 = local_38[0] + 0xfca02400 + (local_3c >> 0x10) * 0x400;
        }
      }
      *param_4 = 0;
      bVar4 = *param_3 != param_2;
    }
    else {
      if (iVar2 == 2) {
        lVar3 = 1;
        *param_3 = (uint)local_38[0];
        iVar2 = 2;
        if ((local_38[0] & 0xfffffc00) == 0xd800) {
          lVar3 = 2;
          *param_3 = (uint)local_38[0] * 0x400 + -0x35fdc00 + (uint)local_38[1];
          iVar2 = 3;
        }
        uVar1 = local_38[lVar3];
        *param_4 = (uint)uVar1;
        if ((uVar1 & 0xfffffc00) == 0xd800) {
          *param_4 = (uint)uVar1 * 0x400 + -0x35fdc00 + (uint)local_38[iVar2];
        }
      }
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_icu_unicode_compose(hb_unicode_funcs_t*, unsigned int, unsigned int, unsigned int*, void*) */

bool hb_icu_unicode_compose
               (hb_unicode_funcs_t *param_1,uint param_2,uint param_3,uint *param_4,void *param_5)

{
  uint uVar1;
  undefined4 in_register_00000014;
  
  uVar1 = unorm2_composePair_76_godot(param_5,param_2,CONCAT44(in_register_00000014,param_3));
  if (-1 < (int)uVar1) {
    *param_4 = uVar1;
  }
  return -1 < (int)uVar1;
}



/* hb_icu_unicode_mirroring(hb_unicode_funcs_t*, unsigned int, void*) */

void hb_icu_unicode_mirroring(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  u_charMirror_76_godot(param_2);
  return;
}



/* hb_icu_unicode_general_category(hb_unicode_funcs_t*, unsigned int, void*) */

undefined4 hb_icu_unicode_general_category(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = u_getIntPropertyValue_76_godot(param_2,0x1005);
  uVar2 = 2;
  if (iVar1 - 1U < 0x1d) {
    uVar2 = *(undefined4 *)(CSWTCH_31 + (ulong)(iVar1 - 1U) * 4);
  }
  return uVar2;
}



/* hb_icu_unicode_combining_class(hb_unicode_funcs_t*, unsigned int, void*) */

undefined1 hb_icu_unicode_combining_class(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  undefined1 uVar1;
  
  uVar1 = u_getCombiningClass_76_godot(param_2);
  return uVar1;
}



/* hb_icu_unicode_script(hb_unicode_funcs_t*, unsigned int, void*) */

undefined8 hb_icu_unicode_script(hb_unicode_funcs_t *param_1,uint param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  iVar1 = uscript_getScript_76_godot(param_2,&local_14);
  if (local_14 < 1) {
    if (iVar1 == -1) {
      uVar2 = 0;
    }
    else {
      uVar2 = uscript_getShortName_76_godot(iVar1);
      uVar2 = hb_script_from_string(uVar2,0xffffffff);
    }
  }
  else {
    uVar2 = 0x5a7a7a7a;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 hb_icu_script_to_script(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 != -1) {
    uVar1 = uscript_getShortName_76_godot();
    uVar1 = hb_script_from_string(uVar1,0xffffffff);
    return uVar1;
  }
  return 0;
}



undefined4 hb_icu_script_from_script(uint param_1)

{
  long in_FS_OFFSET;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xffffffff;
  if (param_1 == 0) {
    local_20 = 0xffffffff;
  }
  else {
    local_18 = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 |
               param_1 << 0x18;
    local_14 = 0;
    local_1c = 0;
    uscript_getCode_76_godot(&local_18,&local_20,1,&local_1c);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long hb_icu_get_unicode_funcs(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
LAB_0010036c:
  lVar2 = static_icu_funcs;
  if (static_icu_funcs == 0) {
    local_24 = 0;
    uVar1 = unorm2_getNFCInstance_76_godot(&local_24);
    lVar2 = hb_unicode_funcs_create(0);
    hb_unicode_funcs_set_combining_class_func(lVar2,hb_icu_unicode_combining_class,0,0);
    hb_unicode_funcs_set_general_category_func(lVar2,hb_icu_unicode_general_category,0);
    hb_unicode_funcs_set_mirroring_func(lVar2,hb_icu_unicode_mirroring,0);
    hb_unicode_funcs_set_script_func(lVar2,hb_icu_unicode_script,0);
    hb_unicode_funcs_set_compose_func(lVar2,hb_icu_unicode_compose,uVar1);
    hb_unicode_funcs_set_decompose_func(lVar2,0x100000,uVar1);
    hb_unicode_funcs_make_immutable(lVar2);
    if (lVar2 == 0) {
      lVar2 = hb_unicode_funcs_get_empty();
      LOCK();
      bVar4 = static_icu_funcs != 0;
      lVar3 = lVar2;
      if (bVar4) {
        lVar3 = static_icu_funcs;
      }
      static_icu_funcs = lVar3;
      UNLOCK();
      if (bVar4) goto code_r0x00100487;
    }
    else {
      LOCK();
      bVar4 = static_icu_funcs != 0;
      lVar3 = lVar2;
      if (bVar4) {
        lVar3 = static_icu_funcs;
      }
      static_icu_funcs = lVar3;
      UNLOCK();
      if (bVar4) goto LAB_00100452;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
code_r0x00100487:
  if (lVar2 != 0) {
LAB_00100452:
    lVar3 = hb_unicode_funcs_get_empty();
    if (lVar2 != lVar3) {
      hb_unicode_funcs_destroy(lVar2);
    }
  }
  goto LAB_0010036c;
}


