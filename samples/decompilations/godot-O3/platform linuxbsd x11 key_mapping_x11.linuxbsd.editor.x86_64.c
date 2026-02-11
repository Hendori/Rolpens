
/* KeyMappingX11::is_sym_numpad(unsigned long) */

undefined8 KeyMappingX11::is_sym_numpad(ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 - 0xff9f < 0x1f) {
    uVar1 = CONCAT71(0x47fff8,(0x47fff801UL >> (param_1 - 0xff9f & 0x3f) & 1) != 0);
  }
  return uVar1;
}



/* KeyMappingX11::get_keycode(unsigned long) */

ulong KeyMappingX11::get_keycode(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  if (param_1 - 0x20 < 0x5e) {
    uVar10 = (ulong)((uint)param_1 - 0x20);
    if (0x19 < param_1 - 0x61) {
      uVar10 = param_1 & 0xffffffff;
    }
  }
  else {
    uVar10 = 0;
    if ((xkeysym_map._8_8_ != 0) && (xkeysym_map._44_4_ != 0)) {
      uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)xkeysym_map._40_4_ * 4));
      uVar10 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)xkeysym_map._40_4_ * 8);
      uVar9 = ((uint)(param_1 >> 0x10) & 0xffff ^ (uint)param_1) * -0x7a143595;
      uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
      uVar14 = uVar9 ^ uVar9 >> 0x10;
      if (uVar9 == uVar9 >> 0x10) {
        uVar14 = 1;
        uVar12 = uVar10;
      }
      else {
        uVar12 = uVar14 * uVar10;
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar16;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar12;
      lVar13 = SUB168(auVar1 * auVar5,8);
      uVar9 = *(uint *)(xkeysym_map._16_8_ + lVar13 * 4);
      uVar11 = SUB164(auVar1 * auVar5,8);
      if (uVar9 != 0) {
        uVar15 = 0;
        do {
          if ((uVar14 == uVar9) &&
             (*(ulong *)(*(long *)(xkeysym_map._8_8_ + lVar13 * 8) + 0x10) == param_1)) {
            return (ulong)*(uint *)(*(long *)(xkeysym_map._8_8_ + (ulong)uVar11 * 8) + 0x18);
          }
          uVar15 = uVar15 + 1;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = (uVar11 + 1) * uVar10;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar16;
          lVar13 = SUB168(auVar2 * auVar6,8);
          uVar9 = *(uint *)(xkeysym_map._16_8_ + lVar13 * 4);
          uVar11 = SUB164(auVar2 * auVar6,8);
        } while ((uVar9 != 0) &&
                (auVar3._8_8_ = 0, auVar3._0_8_ = uVar9 * uVar10, auVar7._8_8_ = 0,
                auVar7._0_8_ = uVar16, auVar4._8_8_ = 0,
                auVar4._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)(uint)xkeysym_map._40_4_ * 4) + uVar11) -
                               SUB164(auVar3 * auVar7,8)) * uVar10, auVar8._8_8_ = 0,
                auVar8._0_8_ = uVar16, uVar15 <= SUB164(auVar4 * auVar8,8)));
      }
      return 0;
    }
  }
  return uVar10;
}



/* KeyMappingX11::get_scancode(unsigned int) */

undefined4 KeyMappingX11::get_scancode(uint param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  if ((scancode_map._8_8_ == 0) || (scancode_map._44_4_ == 0)) {
    return 0;
  }
  uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)scancode_map._40_4_ * 4));
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)scancode_map._40_4_ * 8);
  uVar10 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar16;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(scancode_map._16_8_ + lVar13 * 4);
  uVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar15 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(uint *)(*(long *)(scancode_map._8_8_ + lVar13 * 8) + 0x10) == param_1)) {
        return *(undefined4 *)(*(long *)(scancode_map._8_8_ + (ulong)uVar11 * 8) + 0x14);
      }
      uVar15 = uVar15 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(scancode_map._16_8_ + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar16, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)(uint)scancode_map._40_4_ * 4
                                      ) + uVar11) - SUB164(auVar4 * auVar8,8)) * uVar1,
            auVar9._8_8_ = 0, auVar9._0_8_ = uVar16, uVar15 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* KeyMappingX11::get_xlibcode(Key) */

uint KeyMappingX11::get_xlibcode(uint param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  if (scancode_map_inv._8_8_ == 0) {
    return 0;
  }
  uVar10 = scancode_map_inv._44_4_;
  if (scancode_map_inv._44_4_ != 0) {
    uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)scancode_map_inv._40_4_ * 4)
                     );
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)scancode_map_inv._40_4_ * 8);
    uVar10 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
    uVar14 = uVar10 ^ uVar10 >> 0x10;
    if (uVar10 == uVar10 >> 0x10) {
      uVar14 = 1;
      uVar12 = uVar1;
    }
    else {
      uVar12 = uVar14 * uVar1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    lVar13 = SUB168(auVar2 * auVar6,8);
    uVar10 = *(uint *)(scancode_map_inv._16_8_ + lVar13 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar10 != 0) {
      uVar15 = 0;
      do {
        if ((uVar14 == uVar10) &&
           (*(uint *)(*(long *)(scancode_map_inv._8_8_ + lVar13 * 8) + 0x10) == param_1)) {
          return *(uint *)(*(long *)(scancode_map_inv._8_8_ + (ulong)uVar11 * 8) + 0x14);
        }
        uVar15 = uVar15 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (uVar11 + 1) * uVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        lVar13 = SUB168(auVar3 * auVar7,8);
        uVar10 = *(uint *)(scancode_map_inv._16_8_ + lVar13 * 4);
        uVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar10 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar10 * uVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)(uint)scancode_map_inv._40_4_ * 4
                                  ) + uVar11) - SUB164(auVar4 * auVar8,8)) * uVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar16;
      } while (uVar15 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return uVar10;
}



/* KeyMappingX11::get_unicode_from_keysym(unsigned long) */

uint KeyMappingX11::get_unicode_from_keysym(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  uVar15 = (uint)param_1;
  uVar10 = uVar15;
  if ((((param_1 - 0x20 < 0x5f) || (param_1 - 0xa0 < 0x60)) ||
      (uVar10 = uVar15 - 0xff80, param_1 - 0xffaa < 0x10)) ||
     (uVar10 = uVar15 & 0xffffff, (uVar15 & 0xff000000) == 0x1000000)) {
    return uVar10;
  }
  if (xkeysym_unicode_map._8_8_ != 0) {
    if (xkeysym_unicode_map._44_4_ == 0) {
      return 0;
    }
    uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                 (ulong)(uint)xkeysym_unicode_map._40_4_ * 4));
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)xkeysym_unicode_map._40_4_ * 8);
    uVar10 = ((uint)(param_1 >> 0x10) & 0xffff ^ uVar15) * -0x7a143595;
    uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
    uVar15 = uVar10 ^ uVar10 >> 0x10;
    if (uVar10 == uVar10 >> 0x10) {
      uVar15 = 1;
      uVar12 = uVar1;
    }
    else {
      uVar12 = uVar15 * uVar1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    lVar13 = SUB168(auVar2 * auVar6,8);
    uVar10 = *(uint *)(xkeysym_unicode_map._16_8_ + lVar13 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar10 == 0) {
      return 0;
    }
    uVar14 = 0;
    do {
      if ((uVar15 == uVar10) &&
         (*(ulong *)(*(long *)(xkeysym_unicode_map._8_8_ + lVar13 * 8) + 0x10) == param_1)) {
        return *(uint *)(*(long *)(xkeysym_unicode_map._8_8_ + (ulong)uVar11 * 8) + 0x18);
      }
      uVar14 = uVar14 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(xkeysym_unicode_map._16_8_ + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
      if (uVar10 == 0) {
        return 0;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar10 * uVar1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar16;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = ((*(uint *)(hash_table_size_primes +
                                (ulong)(uint)xkeysym_unicode_map._40_4_ * 4) + uVar11) -
                     SUB164(auVar4 * auVar8,8)) * uVar1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar16;
    } while (uVar14 <= SUB164(auVar5 * auVar9,8));
  }
  return 0;
}



/* KeyMappingX11::get_location(unsigned int) */

undefined4 KeyMappingX11::get_location(uint param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  if ((location_map._8_8_ == 0) || (location_map._44_4_ == 0)) {
    return 0;
  }
  uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)location_map._40_4_ * 4));
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)location_map._40_4_ * 8);
  uVar10 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar16;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(location_map._16_8_ + lVar13 * 4);
  uVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar15 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(uint *)(*(long *)(location_map._8_8_ + lVar13 * 8) + 0x10) == param_1)) {
        return *(undefined4 *)(*(long *)(location_map._8_8_ + (ulong)uVar11 * 8) + 0x14);
      }
      uVar15 = uVar15 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(location_map._16_8_ + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar16, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)(uint)location_map._40_4_ * 4
                                      ) + uVar11) - SUB164(auVar4 * auVar8,8)) * uVar1,
            auVar9._8_8_ = 0, auVar9._0_8_ = uVar16, uVar15 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* KeyMappingX11::initialize() */

void KeyMappingX11::initialize(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0xff1b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff09;
  *puVar3 = 0x400001;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xfe20;
  *puVar3 = 0x400002;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff08;
  *puVar3 = 0x400003;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff0d;
  *puVar3 = 0x400004;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff63;
  *puVar3 = 0x400005;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffff;
  *puVar3 = 0x400007;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff0b;
  *puVar3 = 0x400008;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff13;
  *puVar3 = 0x400008;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff61;
  *puVar3 = 0x400009;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff50;
  *puVar3 = 0x40000a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff57;
  *puVar3 = 0x40000d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff51;
  *puVar3 = 0x40000e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff52;
  *puVar3 = 0x40000f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff53;
  *puVar3 = 0x400010;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff54;
  *puVar3 = 0x400011;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff55;
  *puVar3 = 0x400012;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff56;
  *puVar3 = 0x400013;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffe1;
  *puVar3 = 0x400014;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffe2;
  *puVar3 = 0x400015;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffe6;
  *puVar3 = 0x400015;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffe3;
  *puVar3 = 0x400015;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffe4;
  *puVar3 = 0x400016;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffe7;
  *puVar3 = 0x400016;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffe8;
  *puVar3 = 0x400017;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffe9;
  *puVar3 = 0x400017;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffea;
  *puVar3 = 0x400018;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffe5;
  *puVar3 = 0x400018;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff7f;
  *puVar3 = 0x400019;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff14;
  *puVar3 = 0x40001a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x3c;
  *puVar3 = 0x40001b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x60;
  *puVar3 = 0x60;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffeb;
  *puVar3 = 0xa7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffec;
  *puVar3 = 0x400017;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff67;
  *puVar3 = 0x400017;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffed;
  *puVar3 = 0x400042;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffee;
  *puVar3 = 0x400043;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff6a;
  *puVar3 = 0x400043;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff80;
  *puVar3 = 0x400045;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff89;
  *puVar3 = 0x20;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff8d;
  *puVar3 = 0x400002;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff50;
  *puVar3 = 0x400006;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff51;
  *puVar3 = 0x40000d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff52;
  *puVar3 = 0x40000f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff53;
  *puVar3 = 0x400010;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff54;
  *puVar3 = 0x400011;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff55;
  *puVar3 = 0x400012;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff56;
  *puVar3 = 0x400013;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff57;
  *puVar3 = 0x400014;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff58;
  *puVar3 = 0x40000e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff63;
  *puVar3 = 0x40000c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffff;
  *puVar3 = 0x400007;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffbd;
  *puVar3 = 0x400008;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffac;
  *puVar3 = 0x3d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffae;
  *puVar3 = 0x2c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffaa;
  *puVar3 = 0x400084;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffaf;
  *puVar3 = 0x400081;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffad;
  *puVar3 = 0x400082;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffab;
  *puVar3 = 0x400083;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffb0;
  *puVar3 = 0x400085;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffb1;
  *puVar3 = 0x400086;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffb2;
  *puVar3 = 0x400087;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffb3;
  *puVar3 = 0x400088;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffb4;
  *puVar3 = 0x400089;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffb5;
  *puVar3 = 0x40008a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffb6;
  *puVar3 = 0x40008b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffb7;
  *puVar3 = 0x40008c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffb8;
  *puVar3 = 0x40008d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffb9;
  *puVar3 = 0x40008e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff9e;
  *puVar3 = 0x40008f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff9f;
  *puVar3 = 0x400007;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff9c;
  *puVar3 = 0x400008;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff99;
  *puVar3 = 0x40000e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff9b;
  *puVar3 = 0x400012;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff96;
  *puVar3 = 0x400014;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff9d;
  *puVar3 = 0x40000f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff98;
  *puVar3 = 0x40000c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff95;
  *puVar3 = 0x400011;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff97;
  *puVar3 = 0x40000d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xff9a;
  *puVar3 = 0x400010;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffbe;
  *puVar3 = 0x400013;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffbf;
  *puVar3 = 0x40001c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffc0;
  *puVar3 = 0x40001d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffc1;
  *puVar3 = 0x40001e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffc2;
  *puVar3 = 0x40001f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffc3;
  *puVar3 = 0x400020;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffc4;
  *puVar3 = 0x400021;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffc5;
  *puVar3 = 0x400022;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffc6;
  *puVar3 = 0x400023;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffc7;
  *puVar3 = 0x400024;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffc8;
  *puVar3 = 0x400025;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffc9;
  *puVar3 = 0x400026;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffca;
  *puVar3 = 0x400027;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffcb;
  *puVar3 = 0x400028;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffcc;
  *puVar3 = 0x400029;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffcd;
  *puVar3 = 0x40002a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffce;
  *puVar3 = 0x40002b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffcf;
  *puVar3 = 0x40002c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffd0;
  *puVar3 = 0x40002d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffd1;
  *puVar3 = 0x40002e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffd2;
  *puVar3 = 0x40002f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffd3;
  *puVar3 = 0x400030;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffd4;
  *puVar3 = 0x400031;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffd5;
  *puVar3 = 0x400032;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffd6;
  *puVar3 = 0x400033;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffd7;
  *puVar3 = 0x400034;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffd8;
  *puVar3 = 0x400035;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffd9;
  *puVar3 = 0x400036;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffda;
  *puVar3 = 0x400037;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffdb;
  *puVar3 = 0x400038;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffdc;
  *puVar3 = 0x400039;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffdd;
  *puVar3 = 0x40003a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffde;
  *puVar3 = 0x40003b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffdf;
  *puVar3 = 0x40003c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xffe0;
  *puVar3 = 0x40003d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xa5;
  *puVar3 = 0x40003e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0xa7;
  *puVar3 = 0xa5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff26;
  *puVar3 = 0xa7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff27;
  *puVar3 = 0x400048;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff28;
  *puVar3 = 0x400049;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff29;
  *puVar3 = 0x40004a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff30;
  *puVar3 = 0x40004b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff38;
  *puVar3 = 0x40005a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff18;
  *puVar3 = 0x40005d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff1b;
  *puVar3 = 0x400059;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff11;
  *puVar3 = 0x40005b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff12;
  *puVar3 = 0x40004c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff13;
  *puVar3 = 0x40004d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff14;
  *puVar3 = 0x40004e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff15;
  *puVar3 = 0x400054;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff16;
  *puVar3 = 0x400055;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff17;
  *puVar3 = 0x400056;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff1c;
  *puVar3 = 0x400057;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff10;
  *puVar3 = 0x400058;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff19;
  *puVar3 = 0x40005c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff32;
  *puVar3 = 0x40005e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff33;
  *puVar3 = 0x40005f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff1d;
  *puVar3 = 0x400060;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff40;
  *puVar3 = 0x400061;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff41;
  *puVar3 = 0x400062;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff42;
  *puVar3 = 0x400063;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff43;
  *puVar3 = 0x400064;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff44;
  *puVar3 = 0x400065;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff45;
  *puVar3 = 0x400066;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff46;
  *puVar3 = 0x400067;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff47;
  *puVar3 = 0x400068;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff48;
  *puVar3 = 0x400069;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff49;
  *puVar3 = 0x40006a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff4a;
  *puVar3 = 0x40006b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff4b;
  *puVar3 = 0x40006c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff4c;
  *puVar3 = 0x40006d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38 = 0x1008ff4d;
  *puVar3 = 0x40006e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           ::operator[]((HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                         *)xkeysym_map,&local_38);
  local_38._0_4_ = 9;
  *puVar3 = 0x40006f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 10;
  *puVar3 = 0x400001;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xb;
  *puVar3 = 0x31;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xc;
  *puVar3 = 0x32;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xd;
  *puVar3 = 0x33;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xe;
  *puVar3 = 0x34;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xf;
  *puVar3 = 0x35;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x10;
  *puVar3 = 0x36;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x11;
  *puVar3 = 0x37;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x12;
  *puVar3 = 0x38;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x13;
  *puVar3 = 0x39;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x14;
  *puVar3 = 0x30;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x15;
  *puVar3 = 0x2d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x16;
  *puVar3 = 0x3d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x17;
  *puVar3 = 0x400004;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x18;
  *puVar3 = 0x400002;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x19;
  *puVar3 = 0x51;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x1a;
  *puVar3 = 0x57;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x1b;
  *puVar3 = 0x45;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x1c;
  *puVar3 = 0x52;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x1d;
  *puVar3 = 0x54;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x1e;
  *puVar3 = 0x59;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x1f;
  *puVar3 = 0x55;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x20;
  *puVar3 = 0x49;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x21;
  *puVar3 = 0x4f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x22;
  *puVar3 = 0x50;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x23;
  *puVar3 = 0x5b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x24;
  *puVar3 = 0x5d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x25;
  *puVar3 = 0x400005;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x26;
  *puVar3 = 0x400016;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x27;
  *puVar3 = 0x41;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x28;
  *puVar3 = 0x53;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x29;
  *puVar3 = 0x44;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x2a;
  *puVar3 = 0x46;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x2b;
  *puVar3 = 0x47;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x2c;
  *puVar3 = 0x48;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x2d;
  *puVar3 = 0x4a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x2e;
  *puVar3 = 0x4b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x2f;
  *puVar3 = 0x4c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x30;
  *puVar3 = 0x3b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x31;
  *puVar3 = 0x27;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x32;
  *puVar3 = 0x60;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x33;
  *puVar3 = 0x400015;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x34;
  *puVar3 = 0x5c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x35;
  *puVar3 = 0x5a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x36;
  *puVar3 = 0x58;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x37;
  *puVar3 = 0x43;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x38;
  *puVar3 = 0x56;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x39;
  *puVar3 = 0x42;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x3a;
  *puVar3 = 0x4e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x3b;
  *puVar3 = 0x4d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x3c;
  *puVar3 = 0x2c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x3d;
  *puVar3 = 0x2e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x3e;
  *puVar3 = 0x2f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x3f;
  *puVar3 = 0x400015;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x40;
  *puVar3 = 0x400081;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x41;
  *puVar3 = 0x400018;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x42;
  *puVar3 = 0x20;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x43;
  *puVar3 = 0x400019;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x44;
  *puVar3 = 0x40001c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x45;
  *puVar3 = 0x40001d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x46;
  *puVar3 = 0x40001e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x47;
  *puVar3 = 0x40001f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x48;
  *puVar3 = 0x400020;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x49;
  *puVar3 = 0x400021;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x4a;
  *puVar3 = 0x400022;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x4b;
  *puVar3 = 0x400023;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x4c;
  *puVar3 = 0x400024;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x4d;
  *puVar3 = 0x400025;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x4e;
  *puVar3 = 0x40001a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x4f;
  *puVar3 = 0x40001b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x50;
  *puVar3 = 0x40008d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x51;
  *puVar3 = 0x40008e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x52;
  *puVar3 = 0x40008f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x53;
  *puVar3 = 0x400083;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x54;
  *puVar3 = 0x40008a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x55;
  *puVar3 = 0x40008b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x56;
  *puVar3 = 0x40008c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x57;
  *puVar3 = 0x400085;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x58;
  *puVar3 = 0x400087;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x59;
  *puVar3 = 0x400088;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x5a;
  *puVar3 = 0x400089;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x5b;
  *puVar3 = 0x400086;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x5e;
  *puVar3 = 0x400084;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x5f;
  *puVar3 = 0xa7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x60;
  *puVar3 = 0x400026;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x67;
  *puVar3 = 0x400027;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x68;
  *puVar3 = 0x2c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x69;
  *puVar3 = 0x400006;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x6a;
  *puVar3 = 0x400016;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x6b;
  *puVar3 = 0x400082;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x6c;
  *puVar3 = 0x40000a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x6d;
  *puVar3 = 0x400018;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x6e;
  *puVar3 = 0x400005;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x6f;
  *puVar3 = 0x40000d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x70;
  *puVar3 = 0x400010;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x71;
  *puVar3 = 0x400013;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x72;
  *puVar3 = 0x40000f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x73;
  *puVar3 = 0x400011;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x74;
  *puVar3 = 0x40000e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x75;
  *puVar3 = 0x400012;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x76;
  *puVar3 = 0x400014;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x77;
  *puVar3 = 0x400007;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x79;
  *puVar3 = 0x400008;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x7a;
  *puVar3 = 0x40004d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x7b;
  *puVar3 = 0x40004c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x7d;
  *puVar3 = 0x40004e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x7f;
  *puVar3 = 0x3d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x80;
  *puVar3 = 0x400009;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x81;
  *puVar3 = 0x400060;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x84;
  *puVar3 = 0x2c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x85;
  *puVar3 = 0xa5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x86;
  *puVar3 = 0x400017;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0x87;
  *puVar3 = 0x400017;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xa6;
  *puVar3 = 0x400042;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xa7;
  *puVar3 = 0x400048;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xb5;
  *puVar3 = 0x400049;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xbf;
  *puVar3 = 0x40004b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xc0;
  *puVar3 = 0x400028;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xc1;
  *puVar3 = 0x400029;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xc2;
  *puVar3 = 0x40002a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xc3;
  *puVar3 = 0x40002b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xc4;
  *puVar3 = 0x40002c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xc5;
  *puVar3 = 0x40002d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xc6;
  *puVar3 = 0x40002e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 199;
  *puVar3 = 0x40002f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 200;
  *puVar3 = 0x400030;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xc9;
  *puVar3 = 0x400031;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xca;
  *puVar3 = 0x400032;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xcb;
  *puVar3 = 0x400033;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xcc;
  *puVar3 = 0x400034;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xcd;
  *puVar3 = 0x400035;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xce;
  *puVar3 = 0x400036;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xcf;
  *puVar3 = 0x400037;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xd0;
  *puVar3 = 0x400038;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xd1;
  *puVar3 = 0x400039;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xd2;
  *puVar3 = 0x40003a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xd3;
  *puVar3 = 0x40003b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38._0_4_ = 0xd4;
  *puVar3 = 0x40003c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  local_38 = CONCAT44(local_38._4_4_,0xd5);
  *puVar3 = 0x40003d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           ::operator[]((HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                         *)scancode_map,(uint *)&local_38);
  puVar2 = (undefined8 *)scancode_map._24_8_;
  *puVar3 = 0x40003e;
  while (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(puVar2 + 2);
    puVar3 = (undefined4 *)
             HashMap<Key,unsigned_int,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<Key>,DefaultTypedAllocator<HashMapElement<Key,unsigned_int>>>
             ::operator[]((HashMap<Key,unsigned_int,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<Key>,DefaultTypedAllocator<HashMapElement<Key,unsigned_int>>>
                           *)scancode_map_inv,(Key *)((long)puVar2 + 0x14));
    puVar2 = (undefined8 *)*puVar2;
    *puVar3 = uVar1;
  }
  local_38 = 0x1a1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1a2;
  *puVar3 = 0x104;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1a3;
  *puVar3 = 0x2d8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1a5;
  *puVar3 = 0x141;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1a6;
  *puVar3 = 0x13d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1a9;
  *puVar3 = 0x15a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1aa;
  *puVar3 = 0x160;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1ab;
  *puVar3 = 0x15e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1ac;
  *puVar3 = 0x164;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1ae;
  *puVar3 = 0x179;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1af;
  *puVar3 = 0x17d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1b1;
  *puVar3 = 0x17b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1b2;
  *puVar3 = 0x105;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1b3;
  *puVar3 = 0x2db;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1b5;
  *puVar3 = 0x142;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1b6;
  *puVar3 = 0x13e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1b7;
  *puVar3 = 0x15b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1b9;
  *puVar3 = 0x2c7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1ba;
  *puVar3 = 0x161;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1bb;
  *puVar3 = 0x15f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1bc;
  *puVar3 = 0x165;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1bd;
  *puVar3 = 0x17a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1be;
  *puVar3 = 0x2dd;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1bf;
  *puVar3 = 0x17e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1c0;
  *puVar3 = 0x17c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1c3;
  *puVar3 = 0x154;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1c5;
  *puVar3 = 0x102;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1c6;
  *puVar3 = 0x139;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1c8;
  *puVar3 = 0x106;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1ca;
  *puVar3 = 0x10c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1cc;
  *puVar3 = 0x118;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1cf;
  *puVar3 = 0x11a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1d0;
  *puVar3 = 0x10e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1d1;
  *puVar3 = 0x110;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1d2;
  *puVar3 = 0x143;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1d5;
  *puVar3 = 0x147;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1d8;
  *puVar3 = 0x150;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1d9;
  *puVar3 = 0x158;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1db;
  *puVar3 = 0x16e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1de;
  *puVar3 = 0x170;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1e0;
  *puVar3 = 0x162;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1e3;
  *puVar3 = 0x155;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1e5;
  *puVar3 = 0x103;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1e6;
  *puVar3 = 0x13a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1e8;
  *puVar3 = 0x107;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1ea;
  *puVar3 = 0x10d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1ec;
  *puVar3 = 0x119;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1ef;
  *puVar3 = 0x11b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1f0;
  *puVar3 = 0x10f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1f1;
  *puVar3 = 0x111;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1f2;
  *puVar3 = 0x144;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1f5;
  *puVar3 = 0x148;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1f8;
  *puVar3 = 0x151;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1f9;
  *puVar3 = 0x159;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1fb;
  *puVar3 = 0x16f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1fe;
  *puVar3 = 0x171;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x1ff;
  *puVar3 = 0x163;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2a1;
  *puVar3 = 0x2d9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2a6;
  *puVar3 = 0x126;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2a9;
  *puVar3 = 0x124;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2ab;
  *puVar3 = 0x130;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2ac;
  *puVar3 = 0x11e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2b1;
  *puVar3 = 0x134;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2b6;
  *puVar3 = 0x127;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2b9;
  *puVar3 = 0x125;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 699;
  *puVar3 = 0x131;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 700;
  *puVar3 = 0x11f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2c5;
  *puVar3 = 0x135;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2c6;
  *puVar3 = 0x10a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2d5;
  *puVar3 = 0x108;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2d8;
  *puVar3 = 0x120;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2dd;
  *puVar3 = 0x11c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2de;
  *puVar3 = 0x16c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2e5;
  *puVar3 = 0x15c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2e6;
  *puVar3 = 0x10b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2f5;
  *puVar3 = 0x109;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2f8;
  *puVar3 = 0x121;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2fd;
  *puVar3 = 0x11d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x2fe;
  *puVar3 = 0x16d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3a2;
  *puVar3 = 0x15d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3a3;
  *puVar3 = 0x138;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3a5;
  *puVar3 = 0x156;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3a6;
  *puVar3 = 0x128;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3aa;
  *puVar3 = 0x13b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3ab;
  *puVar3 = 0x112;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3ac;
  *puVar3 = 0x122;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3b3;
  *puVar3 = 0x166;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3b5;
  *puVar3 = 0x157;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3b6;
  *puVar3 = 0x129;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3ba;
  *puVar3 = 0x13c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3bb;
  *puVar3 = 0x113;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3bc;
  *puVar3 = 0x123;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3bd;
  *puVar3 = 0x167;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3bf;
  *puVar3 = 0x14a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3c0;
  *puVar3 = 0x14b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3c7;
  *puVar3 = 0x100;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3cc;
  *puVar3 = 0x12e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3cf;
  *puVar3 = 0x116;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3d1;
  *puVar3 = 0x12a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3d2;
  *puVar3 = 0x145;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3d3;
  *puVar3 = 0x14c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3d9;
  *puVar3 = 0x136;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3dd;
  *puVar3 = 0x172;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3de;
  *puVar3 = 0x168;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3e0;
  *puVar3 = 0x16a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 999;
  *puVar3 = 0x101;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3ec;
  *puVar3 = 0x12f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3ef;
  *puVar3 = 0x117;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3f1;
  *puVar3 = 299;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3f2;
  *puVar3 = 0x146;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3f3;
  *puVar3 = 0x14d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3f9;
  *puVar3 = 0x137;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3fd;
  *puVar3 = 0x173;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x3fe;
  *puVar3 = 0x169;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x47e;
  *puVar3 = 0x16b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4a1;
  *puVar3 = 0x203e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4a2;
  *puVar3 = 0x3002;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4a3;
  *puVar3 = 0x300c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4a4;
  *puVar3 = 0x300d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4a5;
  *puVar3 = 0x3001;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4a6;
  *puVar3 = 0x30fb;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4a7;
  *puVar3 = 0x30f2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4a8;
  *puVar3 = 0x30a1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4a9;
  *puVar3 = 0x30a3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4aa;
  *puVar3 = 0x30a5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4ab;
  *puVar3 = 0x30a7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4ac;
  *puVar3 = 0x30a9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4ad;
  *puVar3 = 0x30e3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4ae;
  *puVar3 = 0x30e5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4af;
  *puVar3 = 0x30e7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4b0;
  *puVar3 = 0x30c3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4b1;
  *puVar3 = 0x30fc;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4b2;
  *puVar3 = 0x30a2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4b3;
  *puVar3 = 0x30a4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4b4;
  *puVar3 = 0x30a6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4b5;
  *puVar3 = 0x30a8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4b6;
  *puVar3 = 0x30aa;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4b7;
  *puVar3 = 0x30ab;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4b8;
  *puVar3 = 0x30ad;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4b9;
  *puVar3 = 0x30af;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4ba;
  *puVar3 = 0x30b1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4bb;
  *puVar3 = 0x30b3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4bc;
  *puVar3 = 0x30b5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4bd;
  *puVar3 = 0x30b7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4be;
  *puVar3 = 0x30b9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4bf;
  *puVar3 = 0x30bb;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4c0;
  *puVar3 = 0x30bd;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4c1;
  *puVar3 = 0x30bf;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4c2;
  *puVar3 = 0x30c1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4c3;
  *puVar3 = 0x30c4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4c4;
  *puVar3 = 0x30c6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4c5;
  *puVar3 = 0x30c8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4c6;
  *puVar3 = 0x30ca;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4c7;
  *puVar3 = 0x30cb;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4c8;
  *puVar3 = 0x30cc;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4c9;
  *puVar3 = 0x30cd;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4ca;
  *puVar3 = 0x30ce;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4cb;
  *puVar3 = 0x30cf;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4cc;
  *puVar3 = 0x30d2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4cd;
  *puVar3 = 0x30d5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4ce;
  *puVar3 = 0x30d8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4cf;
  *puVar3 = 0x30db;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4d0;
  *puVar3 = 0x30de;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4d1;
  *puVar3 = 0x30df;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4d2;
  *puVar3 = 0x30e0;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4d3;
  *puVar3 = 0x30e1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4d4;
  *puVar3 = 0x30e2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4d5;
  *puVar3 = 0x30e4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4d6;
  *puVar3 = 0x30e6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4d7;
  *puVar3 = 0x30e8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4d8;
  *puVar3 = 0x30e9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4d9;
  *puVar3 = 0x30ea;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4da;
  *puVar3 = 0x30eb;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4db;
  *puVar3 = 0x30ec;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4dc;
  *puVar3 = 0x30ed;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4dd;
  *puVar3 = 0x30ef;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4de;
  *puVar3 = 0x30f3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x4df;
  *puVar3 = 0x309b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5ac;
  *puVar3 = 0x309c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5bb;
  *puVar3 = 0x60c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5bf;
  *puVar3 = 0x61b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5c1;
  *puVar3 = 0x61f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5c2;
  *puVar3 = 0x621;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5c3;
  *puVar3 = 0x622;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5c4;
  *puVar3 = 0x623;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5c5;
  *puVar3 = 0x624;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5c6;
  *puVar3 = 0x625;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5c7;
  *puVar3 = 0x626;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5c8;
  *puVar3 = 0x627;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5c9;
  *puVar3 = 0x628;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5ca;
  *puVar3 = 0x629;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5cb;
  *puVar3 = 0x62a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5cc;
  *puVar3 = 0x62b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5cd;
  *puVar3 = 0x62c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5ce;
  *puVar3 = 0x62d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5cf;
  *puVar3 = 0x62e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5d0;
  *puVar3 = 0x62f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5d1;
  *puVar3 = 0x630;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5d2;
  *puVar3 = 0x631;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5d3;
  *puVar3 = 0x632;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5d4;
  *puVar3 = 0x633;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5d5;
  *puVar3 = 0x634;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5d6;
  *puVar3 = 0x635;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5d7;
  *puVar3 = 0x636;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5d8;
  *puVar3 = 0x637;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5d9;
  *puVar3 = 0x638;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5da;
  *puVar3 = 0x639;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5e0;
  *puVar3 = 0x63a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5e1;
  *puVar3 = 0x640;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5e2;
  *puVar3 = 0x641;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5e3;
  *puVar3 = 0x642;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5e4;
  *puVar3 = 0x643;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5e5;
  *puVar3 = 0x644;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5e6;
  *puVar3 = 0x645;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5e7;
  *puVar3 = 0x646;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5e8;
  *puVar3 = 0x647;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5e9;
  *puVar3 = 0x648;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5ea;
  *puVar3 = 0x649;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5eb;
  *puVar3 = 0x64a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5ec;
  *puVar3 = 0x64b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5ed;
  *puVar3 = 0x64c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5ee;
  *puVar3 = 0x64d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5ef;
  *puVar3 = 0x64e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5f0;
  *puVar3 = 0x64f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5f1;
  *puVar3 = 0x650;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x5f2;
  *puVar3 = 0x651;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6a1;
  *puVar3 = 0x652;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6a2;
  *puVar3 = 0x452;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6a3;
  *puVar3 = 0x453;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6a4;
  *puVar3 = 0x451;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6a5;
  *puVar3 = 0x454;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6a6;
  *puVar3 = 0x455;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6a7;
  *puVar3 = 0x456;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6a8;
  *puVar3 = 0x457;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6a9;
  *puVar3 = 0x458;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6aa;
  *puVar3 = 0x459;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ab;
  *puVar3 = 0x45a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ac;
  *puVar3 = 0x45b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ae;
  *puVar3 = 0x45c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6af;
  *puVar3 = 0x45e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6b0;
  *puVar3 = 0x45f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6b1;
  *puVar3 = 0x2116;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6b2;
  *puVar3 = 0x402;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6b3;
  *puVar3 = 0x403;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6b4;
  *puVar3 = 0x401;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6b5;
  *puVar3 = 0x404;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6b6;
  *puVar3 = 0x405;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6b7;
  *puVar3 = 0x406;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6b8;
  *puVar3 = 0x407;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6b9;
  *puVar3 = 0x408;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ba;
  *puVar3 = 0x409;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6bb;
  *puVar3 = 0x40a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6bc;
  *puVar3 = 0x40b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6be;
  *puVar3 = 0x40c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6bf;
  *puVar3 = 0x40e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6c0;
  *puVar3 = 0x40f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6c1;
  *puVar3 = 0x44e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6c2;
  *puVar3 = 0x430;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6c3;
  *puVar3 = 0x431;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6c4;
  *puVar3 = 0x446;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6c5;
  *puVar3 = 0x434;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6c6;
  *puVar3 = 0x435;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6c7;
  *puVar3 = 0x444;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6c8;
  *puVar3 = 0x433;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6c9;
  *puVar3 = 0x445;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ca;
  *puVar3 = 0x438;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6cb;
  *puVar3 = 0x439;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6cc;
  *puVar3 = 0x43a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6cd;
  *puVar3 = 0x43b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ce;
  *puVar3 = 0x43c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6cf;
  *puVar3 = 0x43d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6d0;
  *puVar3 = 0x43e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6d1;
  *puVar3 = 0x43f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6d2;
  *puVar3 = 0x44f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6d3;
  *puVar3 = 0x440;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6d4;
  *puVar3 = 0x441;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6d5;
  *puVar3 = 0x442;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6d6;
  *puVar3 = 0x443;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6d7;
  *puVar3 = 0x436;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6d8;
  *puVar3 = 0x432;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6d9;
  *puVar3 = 0x44c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6da;
  *puVar3 = 1099;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6db;
  *puVar3 = 0x437;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6dc;
  *puVar3 = 0x448;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6dd;
  *puVar3 = 0x44d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6de;
  *puVar3 = 0x449;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6df;
  *puVar3 = 0x447;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6e0;
  *puVar3 = 0x44a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6e1;
  *puVar3 = 0x42e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6e2;
  *puVar3 = 0x410;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6e3;
  *puVar3 = 0x411;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6e4;
  *puVar3 = 0x426;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6e5;
  *puVar3 = 0x414;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6e6;
  *puVar3 = 0x415;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6e7;
  *puVar3 = 0x424;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6e8;
  *puVar3 = 0x413;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6e9;
  *puVar3 = 0x425;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ea;
  *puVar3 = 0x418;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6eb;
  *puVar3 = 0x419;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ec;
  *puVar3 = 0x41a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ed;
  *puVar3 = 0x41b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ee;
  *puVar3 = 0x41c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ef;
  *puVar3 = 0x41d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6f0;
  *puVar3 = 0x41e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6f1;
  *puVar3 = 0x41f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6f2;
  *puVar3 = 0x42f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6f3;
  *puVar3 = 0x420;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6f4;
  *puVar3 = 0x421;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6f5;
  *puVar3 = 0x422;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6f6;
  *puVar3 = 0x423;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6f7;
  *puVar3 = 0x416;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6f8;
  *puVar3 = 0x412;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6f9;
  *puVar3 = 0x42c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6fa;
  *puVar3 = 0x42b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6fb;
  *puVar3 = 0x417;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6fc;
  *puVar3 = 0x428;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6fd;
  *puVar3 = 0x42d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6fe;
  *puVar3 = 0x429;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x6ff;
  *puVar3 = 0x427;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7a1;
  *puVar3 = 0x42a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7a2;
  *puVar3 = 0x386;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7a3;
  *puVar3 = 0x388;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7a4;
  *puVar3 = 0x389;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7a5;
  *puVar3 = 0x38a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7a7;
  *puVar3 = 0x3aa;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7a8;
  *puVar3 = 0x38c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7a9;
  *puVar3 = 0x38e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7ab;
  *puVar3 = 0x3ab;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7ae;
  *puVar3 = 0x38f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7af;
  *puVar3 = 0x385;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7b1;
  *puVar3 = 0x2015;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7b2;
  *puVar3 = 0x3ac;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7b3;
  *puVar3 = 0x3ad;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7b4;
  *puVar3 = 0x3ae;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7b5;
  *puVar3 = 0x3af;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7b6;
  *puVar3 = 0x3ca;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7b7;
  *puVar3 = 0x390;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7b8;
  *puVar3 = 0x3cc;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7b9;
  *puVar3 = 0x3cd;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7ba;
  *puVar3 = 0x3cb;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7bb;
  *puVar3 = 0x3b0;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7c1;
  *puVar3 = 0x3ce;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7c2;
  *puVar3 = 0x391;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7c3;
  *puVar3 = 0x392;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7c4;
  *puVar3 = 0x393;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7c5;
  *puVar3 = 0x394;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7c6;
  *puVar3 = 0x395;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7c7;
  *puVar3 = 0x396;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7c8;
  *puVar3 = 0x397;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7c9;
  *puVar3 = 0x398;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7ca;
  *puVar3 = 0x399;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7cb;
  *puVar3 = 0x39a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7cc;
  *puVar3 = 0x39b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7cd;
  *puVar3 = 0x39c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7ce;
  *puVar3 = 0x39d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 1999;
  *puVar3 = 0x39e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 2000;
  *puVar3 = 0x39f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7d1;
  *puVar3 = 0x3a0;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7d2;
  *puVar3 = 0x3a1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7d4;
  *puVar3 = 0x3a3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7d5;
  *puVar3 = 0x3a4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7d6;
  *puVar3 = 0x3a5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7d7;
  *puVar3 = 0x3a6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7d8;
  *puVar3 = 0x3a7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7d9;
  *puVar3 = 0x3a8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7e1;
  *puVar3 = 0x3a9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7e2;
  *puVar3 = 0x3b1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7e3;
  *puVar3 = 0x3b2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7e4;
  *puVar3 = 0x3b3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7e5;
  *puVar3 = 0x3b4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7e6;
  *puVar3 = 0x3b5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7e7;
  *puVar3 = 0x3b6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7e8;
  *puVar3 = 0x3b7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7e9;
  *puVar3 = 0x3b8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7ea;
  *puVar3 = 0x3b9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7eb;
  *puVar3 = 0x3ba;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7ec;
  *puVar3 = 0x3bb;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7ed;
  *puVar3 = 0x3bc;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7ee;
  *puVar3 = 0x3bd;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7ef;
  *puVar3 = 0x3be;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7f0;
  *puVar3 = 0x3bf;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7f1;
  *puVar3 = 0x3c0;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7f2;
  *puVar3 = 0x3c1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7f3;
  *puVar3 = 0x3c3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7f4;
  *puVar3 = 0x3c2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7f5;
  *puVar3 = 0x3c4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7f6;
  *puVar3 = 0x3c5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7f7;
  *puVar3 = 0x3c6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7f8;
  *puVar3 = 0x3c7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x7f9;
  *puVar3 = 0x3c8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8a1;
  *puVar3 = 0x3c9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8a2;
  *puVar3 = 0x23b7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8a3;
  *puVar3 = 0x250c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8a4;
  *puVar3 = 0x2500;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8a5;
  *puVar3 = 0x2320;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8a6;
  *puVar3 = 0x2321;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8a7;
  *puVar3 = 0x2502;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8a8;
  *puVar3 = 0x23a1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8a9;
  *puVar3 = 0x23a3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8aa;
  *puVar3 = 0x23a4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8ab;
  *puVar3 = 0x23a6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8ac;
  *puVar3 = 0x239b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8ad;
  *puVar3 = 0x239d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8ae;
  *puVar3 = 0x239e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8af;
  *puVar3 = 0x23a0;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8b0;
  *puVar3 = 0x23a8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8bc;
  *puVar3 = 0x23ac;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8bd;
  *puVar3 = 0x2264;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8be;
  *puVar3 = 0x2260;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8bf;
  *puVar3 = 0x2265;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8c0;
  *puVar3 = 0x222b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8c1;
  *puVar3 = 0x2234;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8c2;
  *puVar3 = 0x221d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8c5;
  *puVar3 = 0x221e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8c8;
  *puVar3 = 0x2207;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8c9;
  *puVar3 = 0x223c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8cd;
  *puVar3 = 0x2243;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8ce;
  *puVar3 = 0x21d4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8cf;
  *puVar3 = 0x21d2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8d6;
  *puVar3 = 0x2261;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8da;
  *puVar3 = 0x221a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8db;
  *puVar3 = 0x2282;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8dc;
  *puVar3 = 0x2283;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8dd;
  *puVar3 = 0x2229;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8de;
  *puVar3 = 0x222a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8df;
  *puVar3 = 0x2227;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8ef;
  *puVar3 = 0x2228;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8f6;
  *puVar3 = 0x2202;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8fb;
  *puVar3 = 0x192;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8fc;
  *puVar3 = 0x2190;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8fd;
  *puVar3 = 0x2191;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x8fe;
  *puVar3 = 0x2192;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9e0;
  *puVar3 = 0x2193;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9e1;
  *puVar3 = 0x25c6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9e2;
  *puVar3 = 0x2592;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9e3;
  *puVar3 = 0x2409;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9e4;
  *puVar3 = 0x240c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9e5;
  *puVar3 = 0x240d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9e8;
  *puVar3 = 0x240a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9e9;
  *puVar3 = 0x2424;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9ea;
  *puVar3 = 0x240b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9eb;
  *puVar3 = 0x2518;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9ec;
  *puVar3 = 0x2510;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9ed;
  *puVar3 = 0x250c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9ee;
  *puVar3 = 0x2514;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9ef;
  *puVar3 = 0x253c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9f0;
  *puVar3 = 0x23ba;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9f1;
  *puVar3 = 0x23bb;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9f2;
  *puVar3 = 0x2500;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9f3;
  *puVar3 = 0x23bc;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9f4;
  *puVar3 = 0x23bd;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9f5;
  *puVar3 = 0x251c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9f6;
  *puVar3 = 0x2524;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9f7;
  *puVar3 = 0x2534;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x9f8;
  *puVar3 = 0x252c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaa1;
  *puVar3 = 0x2502;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaa2;
  *puVar3 = 0x2003;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaa3;
  *puVar3 = 0x2002;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaa4;
  *puVar3 = 0x2004;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaa5;
  *puVar3 = 0x2005;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaa6;
  *puVar3 = 0x2007;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaa7;
  *puVar3 = 0x2008;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaa8;
  *puVar3 = 0x2009;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaa9;
  *puVar3 = 0x200a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaaa;
  *puVar3 = 0x2014;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaae;
  *puVar3 = 0x2013;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaaf;
  *puVar3 = 0x2026;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xab0;
  *puVar3 = 0x2025;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xab1;
  *puVar3 = 0x2153;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xab2;
  *puVar3 = 0x2154;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xab3;
  *puVar3 = 0x2155;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xab4;
  *puVar3 = 0x2156;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xab5;
  *puVar3 = 0x2157;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xab6;
  *puVar3 = 0x2158;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xab7;
  *puVar3 = 0x2159;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xab8;
  *puVar3 = 0x215a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xabb;
  *puVar3 = 0x2105;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xabc;
  *puVar3 = 0x2012;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xabe;
  *puVar3 = 0x2329;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xac3;
  *puVar3 = 0x232a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xac4;
  *puVar3 = 0x215b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xac5;
  *puVar3 = 0x215c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xac6;
  *puVar3 = 0x215d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xac9;
  *puVar3 = 0x215e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaca;
  *puVar3 = 0x2122;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xacc;
  *puVar3 = 0x2613;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xacd;
  *puVar3 = 0x25c1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xace;
  *puVar3 = 0x25b7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xacf;
  *puVar3 = 0x25cb;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xad0;
  *puVar3 = 0x25af;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xad1;
  *puVar3 = 0x2018;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xad2;
  *puVar3 = 0x2019;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xad3;
  *puVar3 = 0x201c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xad4;
  *puVar3 = 0x201d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xad6;
  *puVar3 = 0x211e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xad7;
  *puVar3 = 0x2032;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xad9;
  *puVar3 = 0x2033;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xadb;
  *puVar3 = 0x271d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xadc;
  *puVar3 = 0x25ac;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xadd;
  *puVar3 = 0x25c0;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xade;
  *puVar3 = 0x25b6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xadf;
  *puVar3 = 0x25cf;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xae0;
  *puVar3 = 0x25ae;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xae1;
  *puVar3 = 0x25e6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xae2;
  *puVar3 = 0x25ab;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xae3;
  *puVar3 = 0x25ad;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xae4;
  *puVar3 = 0x25b3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xae5;
  *puVar3 = 0x25bd;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xae6;
  *puVar3 = 0x2606;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xae7;
  *puVar3 = 0x2022;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xae8;
  *puVar3 = 0x25aa;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xae9;
  *puVar3 = 0x25b2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaea;
  *puVar3 = 0x25bc;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaeb;
  *puVar3 = 0x261c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaec;
  *puVar3 = 0x261e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaed;
  *puVar3 = 0x2663;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaee;
  *puVar3 = 0x2666;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaf0;
  *puVar3 = 0x2665;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaf1;
  *puVar3 = 0x2720;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaf2;
  *puVar3 = 0x2020;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaf3;
  *puVar3 = 0x2021;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaf4;
  *puVar3 = 0x2713;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaf5;
  *puVar3 = 0x2717;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaf6;
  *puVar3 = 0x266f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaf7;
  *puVar3 = 0x266d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaf8;
  *puVar3 = 0x2642;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xaf9;
  *puVar3 = 0x2640;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xafa;
  *puVar3 = 0x260e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xafb;
  *puVar3 = 0x2315;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xafc;
  *puVar3 = 0x2117;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xafd;
  *puVar3 = 0x2038;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xafe;
  *puVar3 = 0x201a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xba3;
  *puVar3 = 0x201e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xba6;
  *puVar3 = 0x3c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xba8;
  *puVar3 = 0x3e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xba9;
  *puVar3 = 0x2228;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbc0;
  *puVar3 = 0x2227;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbc2;
  *puVar3 = 0xaf;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbc3;
  *puVar3 = 0x22a5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbc4;
  *puVar3 = 0x2229;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbc6;
  *puVar3 = 0x230a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbca;
  *puVar3 = 0x5f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbcc;
  *puVar3 = 0x2218;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbce;
  *puVar3 = 0x2395;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbcf;
  *puVar3 = 0x22a4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbd3;
  *puVar3 = 0x25cb;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbd6;
  *puVar3 = 0x2308;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbd8;
  *puVar3 = 0x222a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbda;
  *puVar3 = 0x2283;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbdc;
  *puVar3 = 0x2282;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xbfc;
  *puVar3 = 0x22a2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcdf;
  *puVar3 = 0x22a3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xce0;
  *puVar3 = 0x2017;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xce1;
  *puVar3 = 0x5d0;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xce2;
  *puVar3 = 0x5d1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xce3;
  *puVar3 = 0x5d2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xce4;
  *puVar3 = 0x5d3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xce5;
  *puVar3 = 0x5d4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xce6;
  *puVar3 = 0x5d5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xce7;
  *puVar3 = 0x5d6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xce8;
  *puVar3 = 0x5d7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xce9;
  *puVar3 = 0x5d8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcea;
  *puVar3 = 0x5d9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xceb;
  *puVar3 = 0x5da;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcec;
  *puVar3 = 0x5db;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xced;
  *puVar3 = 0x5dc;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcee;
  *puVar3 = 0x5dd;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcef;
  *puVar3 = 0x5de;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcf0;
  *puVar3 = 0x5df;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcf1;
  *puVar3 = 0x5e0;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcf2;
  *puVar3 = 0x5e1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcf3;
  *puVar3 = 0x5e2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcf4;
  *puVar3 = 0x5e3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcf5;
  *puVar3 = 0x5e4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcf6;
  *puVar3 = 0x5e5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcf7;
  *puVar3 = 0x5e6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcf8;
  *puVar3 = 0x5e7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcf9;
  *puVar3 = 0x5e8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xcfa;
  *puVar3 = 0x5e9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xda1;
  *puVar3 = 0x5ea;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xda2;
  *puVar3 = 0xe01;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xda3;
  *puVar3 = 0xe02;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xda4;
  *puVar3 = 0xe03;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xda5;
  *puVar3 = 0xe04;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xda6;
  *puVar3 = 0xe05;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xda7;
  *puVar3 = 0xe06;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xda8;
  *puVar3 = 0xe07;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xda9;
  *puVar3 = 0xe08;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdaa;
  *puVar3 = 0xe09;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdab;
  *puVar3 = 0xe0a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdac;
  *puVar3 = 0xe0b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdad;
  *puVar3 = 0xe0c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdae;
  *puVar3 = 0xe0d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdaf;
  *puVar3 = 0xe0e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdb0;
  *puVar3 = 0xe0f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdb1;
  *puVar3 = 0xe10;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdb2;
  *puVar3 = 0xe11;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdb3;
  *puVar3 = 0xe12;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdb4;
  *puVar3 = 0xe13;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdb5;
  *puVar3 = 0xe14;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdb6;
  *puVar3 = 0xe15;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdb7;
  *puVar3 = 0xe16;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdb8;
  *puVar3 = 0xe17;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdb9;
  *puVar3 = 0xe18;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdba;
  *puVar3 = 0xe19;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdbb;
  *puVar3 = 0xe1a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdbc;
  *puVar3 = 0xe1b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdbd;
  *puVar3 = 0xe1c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdbe;
  *puVar3 = 0xe1d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdbf;
  *puVar3 = 0xe1e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdc0;
  *puVar3 = 0xe1f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdc1;
  *puVar3 = 0xe20;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdc2;
  *puVar3 = 0xe21;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdc3;
  *puVar3 = 0xe22;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdc4;
  *puVar3 = 0xe23;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdc5;
  *puVar3 = 0xe24;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdc6;
  *puVar3 = 0xe25;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdc7;
  *puVar3 = 0xe26;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdc8;
  *puVar3 = 0xe27;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdc9;
  *puVar3 = 0xe28;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdca;
  *puVar3 = 0xe29;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdcb;
  *puVar3 = 0xe2a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdcc;
  *puVar3 = 0xe2b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdcd;
  *puVar3 = 0xe2c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdce;
  *puVar3 = 0xe2d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdcf;
  *puVar3 = 0xe2e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdd0;
  *puVar3 = 0xe2f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdd1;
  *puVar3 = 0xe30;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdd2;
  *puVar3 = 0xe31;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdd3;
  *puVar3 = 0xe32;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdd4;
  *puVar3 = 0xe33;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdd5;
  *puVar3 = 0xe34;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdd6;
  *puVar3 = 0xe35;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdd7;
  *puVar3 = 0xe36;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdd8;
  *puVar3 = 0xe37;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdd9;
  *puVar3 = 0xe38;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdda;
  *puVar3 = 0xe39;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xddf;
  *puVar3 = 0xe3a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xde0;
  *puVar3 = 0xe3f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xde1;
  *puVar3 = 0xe40;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xde2;
  *puVar3 = 0xe41;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xde3;
  *puVar3 = 0xe42;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xde4;
  *puVar3 = 0xe43;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xde5;
  *puVar3 = 0xe44;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xde6;
  *puVar3 = 0xe45;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xde7;
  *puVar3 = 0xe46;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xde8;
  *puVar3 = 0xe47;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xde9;
  *puVar3 = 0xe48;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdea;
  *puVar3 = 0xe49;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdeb;
  *puVar3 = 0xe4a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdec;
  *puVar3 = 0xe4b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xded;
  *puVar3 = 0xe4c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdf0;
  *puVar3 = 0xe4d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdf1;
  *puVar3 = 0xe50;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdf2;
  *puVar3 = 0xe51;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdf3;
  *puVar3 = 0xe52;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdf4;
  *puVar3 = 0xe53;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdf5;
  *puVar3 = 0xe54;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdf6;
  *puVar3 = 0xe55;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdf7;
  *puVar3 = 0xe56;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdf8;
  *puVar3 = 0xe57;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xdf9;
  *puVar3 = 0xe58;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xea1;
  *puVar3 = 0xe59;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xea2;
  *puVar3 = 0x3131;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xea3;
  *puVar3 = 0x3132;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xea4;
  *puVar3 = 0x3133;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xea5;
  *puVar3 = 0x3134;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xea6;
  *puVar3 = 0x3135;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xea7;
  *puVar3 = 0x3136;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xea8;
  *puVar3 = 0x3137;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xea9;
  *puVar3 = 0x3138;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeaa;
  *puVar3 = 0x3139;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeab;
  *puVar3 = 0x313a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeac;
  *puVar3 = 0x313b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xead;
  *puVar3 = 0x313c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeae;
  *puVar3 = 0x313d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeaf;
  *puVar3 = 0x313e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeb0;
  *puVar3 = 0x313f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeb1;
  *puVar3 = 0x3140;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeb2;
  *puVar3 = 0x3141;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeb3;
  *puVar3 = 0x3142;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeb4;
  *puVar3 = 0x3143;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeb5;
  *puVar3 = 0x3144;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeb6;
  *puVar3 = 0x3145;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeb7;
  *puVar3 = 0x3146;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeb8;
  *puVar3 = 0x3147;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeb9;
  *puVar3 = 0x3148;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeba;
  *puVar3 = 0x3149;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xebb;
  *puVar3 = 0x314a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xebc;
  *puVar3 = 0x314b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xebd;
  *puVar3 = 0x314c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xebe;
  *puVar3 = 0x314d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xebf;
  *puVar3 = 0x314e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xec0;
  *puVar3 = 0x314f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xec1;
  *puVar3 = 0x3150;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xec2;
  *puVar3 = 0x3151;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xec3;
  *puVar3 = 0x3152;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xec4;
  *puVar3 = 0x3153;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xec5;
  *puVar3 = 0x3154;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xec6;
  *puVar3 = 0x3155;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xec7;
  *puVar3 = 0x3156;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xec8;
  *puVar3 = 0x3157;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xec9;
  *puVar3 = 0x3158;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeca;
  *puVar3 = 0x3159;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xecb;
  *puVar3 = 0x315a;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xecc;
  *puVar3 = 0x315b;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xecd;
  *puVar3 = 0x315c;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xece;
  *puVar3 = 0x315d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xecf;
  *puVar3 = 0x315e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xed0;
  *puVar3 = 0x315f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xed1;
  *puVar3 = 0x3160;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xed2;
  *puVar3 = 0x3161;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xed3;
  *puVar3 = 0x3162;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xed4;
  *puVar3 = 0x3163;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xed5;
  *puVar3 = 0x11a8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xed6;
  *puVar3 = 0x11a9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xed7;
  *puVar3 = 0x11aa;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xed8;
  *puVar3 = 0x11ab;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xed9;
  *puVar3 = 0x11ac;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeda;
  *puVar3 = 0x11ad;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xedb;
  *puVar3 = 0x11ae;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xedc;
  *puVar3 = 0x11af;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xedd;
  *puVar3 = 0x11b0;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xede;
  *puVar3 = 0x11b1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xedf;
  *puVar3 = 0x11b2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xee0;
  *puVar3 = 0x11b3;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xee1;
  *puVar3 = 0x11b4;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xee2;
  *puVar3 = 0x11b5;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xee3;
  *puVar3 = 0x11b6;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xee4;
  *puVar3 = 0x11b7;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xee5;
  *puVar3 = 0x11b8;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xee6;
  *puVar3 = 0x11b9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xee7;
  *puVar3 = 0x11ba;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xee8;
  *puVar3 = 0x11bb;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xee9;
  *puVar3 = 0x11bc;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeea;
  *puVar3 = 0x11bd;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeeb;
  *puVar3 = 0x11be;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeec;
  *puVar3 = 0x11bf;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeed;
  *puVar3 = 0x11c0;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeee;
  *puVar3 = 0x11c1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeef;
  *puVar3 = 0x11c2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xef0;
  *puVar3 = 0x316d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xef1;
  *puVar3 = 0x3171;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xef2;
  *puVar3 = 0x3178;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xef3;
  *puVar3 = 0x317f;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xef4;
  *puVar3 = 0x3181;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xef5;
  *puVar3 = 0x3184;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xef6;
  *puVar3 = 0x3186;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xef7;
  *puVar3 = 0x318d;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xef8;
  *puVar3 = 0x318e;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xef9;
  *puVar3 = 0x11eb;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xefa;
  *puVar3 = 0x11f0;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0xeff;
  *puVar3 = 0x11f9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x13a4;
  *puVar3 = 0x20a9;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x13bc;
  *puVar3 = 0x20ac;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x13bd;
  *puVar3 = 0x152;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x13be;
  *puVar3 = 0x153;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38 = 0x20ac;
  *puVar3 = 0x178;
  puVar3 = (undefined4 *)
           HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           ::operator[]((HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                         *)xkeysym_unicode_map,&local_38);
  local_38._0_4_ = 0x25;
  *puVar3 = 0x20ac;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
           ::operator[]((HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
                         *)location_map,(uint *)&local_38);
  local_38._0_4_ = 0x69;
  *puVar3 = 1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
           ::operator[]((HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
                         *)location_map,(uint *)&local_38);
  local_38._0_4_ = 0x32;
  *puVar3 = 2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
           ::operator[]((HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
                         *)location_map,(uint *)&local_38);
  local_38._0_4_ = 0x3e;
  *puVar3 = 1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
           ::operator[]((HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
                         *)location_map,(uint *)&local_38);
  local_38._0_4_ = 0x40;
  *puVar3 = 2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
           ::operator[]((HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
                         *)location_map,(uint *)&local_38);
  local_38._0_4_ = 0x6c;
  *puVar3 = 1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
           ::operator[]((HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
                         *)location_map,(uint *)&local_38);
  local_38._0_4_ = 0x85;
  *puVar3 = 2;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
           ::operator[]((HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
                         *)location_map,(uint *)&local_38);
  local_38 = CONCAT44(local_38._4_4_,0x86);
  *puVar3 = 1;
  puVar3 = (undefined4 *)
           HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
           ::operator[]((HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
                         *)location_map,(uint *)&local_38);
  *puVar3 = 2;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<unsigned long, Key, KeyMappingX11::HashMapHasherKeys, HashMapComparatorDefault<unsigned
   long>, DefaultTypedAllocator<HashMapElement<unsigned long, Key> > >::~HashMap() */

void __thiscall
HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
::~HashMap(HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<unsigned int, Key, KeyMappingX11::HashMapHasherKeys, HashMapComparatorDefault<unsigned
   int>, DefaultTypedAllocator<HashMapElement<unsigned int, Key> > >::~HashMap() */

void __thiscall
HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
::~HashMap(HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<Key, unsigned int, KeyMappingX11::HashMapHasherKeys, HashMapComparatorDefault<Key>,
   DefaultTypedAllocator<HashMapElement<Key, unsigned int> > >::~HashMap() */

void __thiscall
HashMap<Key,unsigned_int,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<Key>,DefaultTypedAllocator<HashMapElement<Key,unsigned_int>>>
::~HashMap(HashMap<Key,unsigned_int,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<Key>,DefaultTypedAllocator<HashMapElement<Key,unsigned_int>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<unsigned long, char32_t, KeyMappingX11::HashMapHasherKeys,
   HashMapComparatorDefault<unsigned long>, DefaultTypedAllocator<HashMapElement<unsigned long,
   char32_t> > >::~HashMap() */

void __thiscall
HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
::~HashMap(HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<unsigned int, KeyLocation, KeyMappingX11::HashMapHasherKeys,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   KeyLocation> > >::~HashMap() */

void __thiscall
HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
::~HashMap(HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned long, Key, KeyMappingX11::HashMapHasherKeys, HashMapComparatorDefault<unsigned
   long>, DefaultTypedAllocator<HashMapElement<unsigned long, Key> > >::operator[](unsigned long
   const&) */

undefined1  [16] __thiscall
HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
::operator[](HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
             *this,ulong *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined1 (*pauVar44) [16];
  ulong uVar45;
  int iVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar41 = (ulong)*(uint *)(this + 0x28);
  uVar42 = *param_1;
  uVar40 = *(uint *)(hash_table_size_primes + uVar41 * 4);
  uVar50 = CONCAT44(0,uVar40);
  if (local_70 == (void *)0x0) {
    uVar42 = uVar50 * 4;
    uVar41 = uVar50 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    lStack_90 = 0x1077c3;
    local_70 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(this + 8) = local_70;
    if (uVar40 == 0) {
      iVar46 = *(int *)(this + 0x2c);
      uVar42 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00107323;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar41)) &&
         (local_70 < (void *)((long)pvVar4 + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar42 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar50 != uVar42);
        iVar46 = *(int *)(this + 0x2c);
        uVar42 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar42);
        lStack_90 = 0x10780c;
        memset(local_70,0,uVar41);
        iVar46 = *(int *)(this + 0x2c);
        uVar42 = *param_1;
      }
    }
    if (iVar46 != 0) {
      uVar41 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_001076a3;
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      uVar3 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar38 = ((uint)(uVar42 >> 0x10) & 0xffff ^ (uint)uVar42) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar54 = 1;
        uVar47 = uVar3;
      }
      else {
        uVar47 = uVar54 * uVar3;
      }
      lVar53 = *(long *)(this + 0x10);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar50;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar47;
      lVar48 = SUB168(auVar5 * auVar21,8);
      uVar38 = *(uint *)(lVar53 + lVar48 * 4);
      uVar55 = SUB164(auVar5 * auVar21,8);
      if (uVar38 != 0) {
        uVar52 = 0;
        lVar49 = lVar48;
        do {
          if ((uVar54 == uVar38) &&
             (uVar42 == *(ulong *)(*(long *)((long)local_70 + lVar48 * 8) + 0x10))) {
            auVar57._0_8_ = *(long *)((long)local_70 + (ulong)uVar55 * 8) + 0x18;
            auVar57._8_8_ = lVar49;
            return auVar57;
          }
          uVar52 = uVar52 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar55 + 1) * uVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar50;
          lVar48 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(lVar53 + lVar48 * 4);
          uVar55 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar38 * uVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar50, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar55 + uVar40) - SUB164(auVar7 * auVar23,8)) * uVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar50, lVar49 = SUB168(auVar8 * auVar24,8),
                uVar52 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_001076a3:
      uVar47 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar41 * 4));
      uVar3 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar40 = ((uint)(uVar42 >> 0x10) & 0xffff ^ (uint)uVar42) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar38 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar38 = 1;
        uVar45 = uVar3;
      }
      else {
        uVar45 = uVar38 * uVar3;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar47;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar45;
      lVar48 = SUB168(auVar17 * auVar33,8);
      uVar40 = *(uint *)(lVar53 + lVar48 * 4);
      uVar54 = SUB164(auVar17 * auVar33,8);
      if (uVar40 != 0) {
        uVar55 = 0;
        lVar49 = lVar48;
        do {
          if ((uVar38 == uVar40) &&
             (*(ulong *)(*(long *)((long)local_70 + lVar48 * 8) + 0x10) == uVar42)) {
            pauVar44 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar54 * 8);
            *(undefined4 *)(pauVar44[1] + 8) = 0;
            lStack_90 = lVar49;
            goto LAB_00107684;
          }
          uVar55 = uVar55 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (uVar54 + 1) * uVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar47;
          lVar48 = SUB168(auVar18 * auVar34,8);
          uVar40 = *(uint *)(lVar53 + lVar48 * 4);
          uVar54 = SUB164(auVar18 * auVar34,8);
        } while ((uVar40 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = uVar40 * uVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar47, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar41 * 4) + uVar54) -
                     SUB164(auVar19 * auVar35,8)) * uVar3, auVar36._8_8_ = 0, auVar36._0_8_ = uVar47
                , lVar49 = SUB168(auVar20 * auVar36,8), uVar55 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00107323:
  if ((float)uVar50 * __LC0 < (float)(iVar46 + 1)) {
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      pauVar44 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00107684;
    }
    uVar42 = (ulong)(uVar40 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar42 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    uVar50 = (ulong)uVar40;
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar4 = *(void **)(this + 0x10);
    uVar42 = uVar50 * 4;
    uVar41 = uVar50 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar41)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar50);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar41);
      }
    }
    if (uVar38 != 0) {
      uVar42 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar4 + uVar42 * 4);
        if (uVar40 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar52 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar41 = CONCAT44(0,uVar54);
          lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar40 * lVar48;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar41;
          lVar49 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar49 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar55 = *puVar1;
          uVar43 = *(undefined8 *)((long)local_70 + uVar42 * 8);
          while (uVar55 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar55 * lVar48;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar41;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar54 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar48;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar41;
            uVar39 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar43;
            if (uVar39 < uVar52) {
              *puVar1 = uVar40;
              puVar2 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar51 = *puVar2;
              *puVar2 = uVar43;
              uVar40 = uVar55;
              uVar52 = uVar39;
            }
            uVar52 = uVar52 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar48;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar41;
            lVar49 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar49 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar43 = uVar51;
            uVar55 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar43;
          *puVar1 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar38 != uVar42);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar42 = *param_1;
  pauVar44 = (undefined1 (*) [16])operator_new(0x20,"");
  *(ulong *)pauVar44[1] = uVar42;
  *(undefined4 *)(pauVar44[1] + 8) = 0;
  *pauVar44 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar44;
  }
  else {
    *puVar2 = pauVar44;
    *(undefined8 **)(*pauVar44 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar44;
  uVar40 = ((uint)(*param_1 >> 0x10) & 0xffff ^ (uint)*param_1) * -0x7a143595;
  uVar38 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
  uVar40 = uVar38 ^ uVar38 >> 0x10;
  if (uVar38 == uVar38 >> 0x10) {
    uVar42 = 1;
    uVar40 = 1;
  }
  else {
    uVar42 = (ulong)uVar40;
  }
  uVar55 = 0;
  lVar53 = *(long *)(this + 0x10);
  lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar38);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar42 * lVar48;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar41;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lStack_90 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar54 = *puVar1;
  pauVar37 = pauVar44;
  while (uVar54 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar54 * lVar48;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar41;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar38 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar48;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar41;
    uVar52 = SUB164(auVar15 * auVar31,8);
    pauVar56 = pauVar37;
    if (uVar52 < uVar55) {
      *puVar1 = uVar40;
      puVar2 = (undefined8 *)(lVar49 + lStack_90 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar40 = uVar54;
      uVar55 = uVar52;
    }
    uVar55 = uVar55 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar48;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar41;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lStack_90 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar56;
    uVar54 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar49 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00107684:
  auVar58._8_8_ = lStack_90;
  auVar58._0_8_ = pauVar44[1] + 8;
  return auVar58;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned int, Key, KeyMappingX11::HashMapHasherKeys, HashMapComparatorDefault<unsigned
   int>, DefaultTypedAllocator<HashMapElement<unsigned int, Key> > >::operator[](unsigned int
   const&) */

undefined1  [16] __thiscall
HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
::operator[](HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
             *this,uint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x107f0b;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00107a73;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar48)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x107f54;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00107df3;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar53 = 1;
        uVar45 = uVar48;
      }
      else {
        uVar45 = uVar53 * uVar48;
      }
      lVar52 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar52 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar50 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar53 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar56._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x14;
            auVar56._8_8_ = lVar47;
            return auVar56;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar54 + 1) * uVar48;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar52 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar48, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar54 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar48,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_00107df3:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar48;
      }
      else {
        uVar43 = uVar37 * uVar48;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar53 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar53 * 8);
            *(undefined4 *)(pauVar42[1] + 4) = 0;
            lStack_90 = lVar47;
            goto LAB_00107dd4;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar53 + 1) * uVar48;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar53 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar48, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar53) -
                     SUB164(auVar18 * auVar34,8)) * uVar48, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_00107a73:
  if ((float)uVar51 * __LC0 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00107dd4;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar51 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar52 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar53 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            uVar50 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar50 < uVar54) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar50;
            }
            uVar54 = uVar54 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar52 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  uVar38 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x18,"");
  *(uint *)pauVar42[1] = uVar38;
  *(undefined4 *)(pauVar42[1] + 4) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = (*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar53 = 0;
  lVar52 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lStack_90 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar51;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00107dd4:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 4;
  return auVar57;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Key, unsigned int, KeyMappingX11::HashMapHasherKeys, HashMapComparatorDefault<Key>,
   DefaultTypedAllocator<HashMapElement<Key, unsigned int> > >::operator[](Key const&) */

undefined1  [16] __thiscall
HashMap<Key,unsigned_int,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<Key>,DefaultTypedAllocator<HashMapElement<Key,unsigned_int>>>
::operator[](HashMap<Key,unsigned_int,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<Key>,DefaultTypedAllocator<HashMapElement<Key,unsigned_int>>>
             *this,Key *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  ulong uVar44;
  int iVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar41 = (ulong)*(uint *)(this + 0x28);
  uVar39 = *(uint *)param_1;
  uVar40 = *(uint *)(hash_table_size_primes + uVar41 * 4);
  uVar52 = CONCAT44(0,uVar40);
  if (local_70 == (void *)0x0) {
    uVar41 = uVar52 * 4;
    uVar49 = uVar52 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    lStack_90 = 0x10864b;
    local_70 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = local_70;
    if (uVar40 == 0) {
      iVar45 = *(int *)(this + 0x2c);
      uVar39 = *(uint *)param_1;
      if (local_70 == (void *)0x0) goto LAB_001081b3;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar49)) &&
         (local_70 < (void *)((long)pvVar4 + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar41 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar52 != uVar41);
        iVar45 = *(int *)(this + 0x2c);
        uVar39 = *(uint *)param_1;
      }
      else {
        memset(pvVar4,0,uVar41);
        lStack_90 = 0x108694;
        memset(local_70,0,uVar49);
        iVar45 = *(int *)(this + 0x2c);
        uVar39 = *(uint *)param_1;
      }
    }
    if (iVar45 != 0) {
      uVar41 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00108533;
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    if (iVar45 != 0) {
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar38 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar54 = 1;
        uVar46 = uVar49;
      }
      else {
        uVar46 = uVar54 * uVar49;
      }
      lVar53 = *(long *)(this + 0x10);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar52;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar46;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar38 = *(uint *)(lVar53 + lVar47 * 4);
      uVar55 = SUB164(auVar5 * auVar21,8);
      if (uVar38 != 0) {
        uVar51 = 0;
        lVar48 = lVar47;
        do {
          if ((uVar54 == uVar38) &&
             (uVar39 == *(uint *)(*(long *)((long)local_70 + lVar47 * 8) + 0x10))) {
            auVar57._0_8_ = *(long *)((long)local_70 + (ulong)uVar55 * 8) + 0x14;
            auVar57._8_8_ = lVar48;
            return auVar57;
          }
          uVar51 = uVar51 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar55 + 1) * uVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar52;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(lVar53 + lVar47 * 4);
          uVar55 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar38 * uVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar52, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar55 + uVar40) - SUB164(auVar7 * auVar23,8)) * uVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar52, lVar48 = SUB168(auVar8 * auVar24,8),
                uVar51 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00108533:
      uVar46 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar41 * 4));
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar40 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar38 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar38 = 1;
        uVar44 = uVar49;
      }
      else {
        uVar44 = uVar38 * uVar49;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar46;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar44;
      lVar47 = SUB168(auVar17 * auVar33,8);
      uVar40 = *(uint *)(lVar53 + lVar47 * 4);
      uVar54 = SUB164(auVar17 * auVar33,8);
      if (uVar40 != 0) {
        uVar55 = 0;
        lVar48 = lVar47;
        do {
          if ((uVar38 == uVar40) &&
             (*(uint *)(*(long *)((long)local_70 + lVar47 * 8) + 0x10) == uVar39)) {
            pauVar43 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar54 * 8);
            *(undefined4 *)(pauVar43[1] + 4) = 0;
            lStack_90 = lVar48;
            goto LAB_00108514;
          }
          uVar55 = uVar55 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (uVar54 + 1) * uVar49;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar46;
          lVar47 = SUB168(auVar18 * auVar34,8);
          uVar40 = *(uint *)(lVar53 + lVar47 * 4);
          uVar54 = SUB164(auVar18 * auVar34,8);
        } while ((uVar40 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = uVar40 * uVar49, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar46, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar41 * 4) + uVar54) -
                     SUB164(auVar19 * auVar35,8)) * uVar49, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar46, lVar48 = SUB168(auVar20 * auVar36,8),
                uVar55 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_001081b3:
  if ((float)uVar52 * __LC0 < (float)(iVar45 + 1)) {
    uVar39 = *(uint *)(this + 0x28);
    if (uVar39 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00108514;
    }
    uVar41 = (ulong)(uVar39 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
    if (uVar39 + 1 < 2) {
      uVar41 = 2;
    }
    uVar39 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar49 = (ulong)uVar39;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar4 = *(void **)(this + 0x10);
    uVar41 = uVar49 * 4;
    uVar52 = uVar49 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar39 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar49);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    if (uVar40 != 0) {
      uVar41 = 0;
      do {
        uVar39 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar39 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar55 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar38);
          lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar39 * lVar47;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar52;
          lVar48 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar48 * 4);
          iVar45 = SUB164(auVar9 * auVar25,8);
          uVar54 = *puVar1;
          uVar42 = *(undefined8 *)((long)local_70 + uVar41 * 8);
          while (uVar54 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar54 * lVar47;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar52;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar47;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar52;
            uVar51 = SUB164(auVar11 * auVar27,8);
            uVar50 = uVar42;
            if (uVar51 < uVar55) {
              *puVar1 = uVar39;
              puVar2 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar50 = *puVar2;
              *puVar2 = uVar42;
              uVar39 = uVar54;
              uVar55 = uVar51;
            }
            uVar55 = uVar55 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar47;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar52;
            lVar48 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar48 * 4);
            iVar45 = SUB164(auVar12 * auVar28,8);
            uVar42 = uVar50;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar42;
          *puVar1 = uVar39;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar40 != uVar41);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar3 = *(undefined4 *)param_1;
  pauVar43 = (undefined1 (*) [16])operator_new(0x18,"");
  *(undefined4 *)pauVar43[1] = uVar3;
  *(undefined4 *)(pauVar43[1] + 4) = 0;
  *pauVar43 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = (*(uint *)param_1 >> 0x10 ^ *(uint *)param_1) * -0x7a143595;
  uVar40 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
  uVar39 = uVar40 ^ uVar40 >> 0x10;
  if (uVar40 == uVar40 >> 0x10) {
    uVar41 = 1;
    uVar39 = 1;
  }
  else {
    uVar41 = (ulong)uVar39;
  }
  uVar54 = 0;
  lVar53 = *(long *)(this + 0x10);
  lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar52 = CONCAT44(0,uVar40);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar41 * lVar47;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar52;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar48 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lStack_90 * 4);
  iVar45 = SUB164(auVar13 * auVar29,8);
  uVar38 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar38 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar38 * lVar47;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar52;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar14 * auVar30,8)) * lVar47;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar52;
    uVar55 = SUB164(auVar15 * auVar31,8);
    pauVar56 = pauVar37;
    if (uVar55 < uVar54) {
      *puVar1 = uVar39;
      puVar2 = (undefined8 *)(lVar48 + lStack_90 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar39 = uVar38;
      uVar54 = uVar55;
    }
    uVar54 = uVar54 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar45 + 1) * lVar47;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar52;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lStack_90 * 4);
    iVar45 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar56;
    uVar38 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar48 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar39;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00108514:
  auVar58._8_8_ = lStack_90;
  auVar58._0_8_ = pauVar43[1] + 4;
  return auVar58;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned long, char32_t, KeyMappingX11::HashMapHasherKeys,
   HashMapComparatorDefault<unsigned long>, DefaultTypedAllocator<HashMapElement<unsigned long,
   char32_t> > >::operator[](unsigned long const&) */

undefined1  [16] __thiscall
HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
::operator[](HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
             *this,ulong *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined1 (*pauVar44) [16];
  ulong uVar45;
  int iVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar41 = (ulong)*(uint *)(this + 0x28);
  uVar42 = *param_1;
  uVar40 = *(uint *)(hash_table_size_primes + uVar41 * 4);
  uVar50 = CONCAT44(0,uVar40);
  if (local_70 == (void *)0x0) {
    uVar42 = uVar50 * 4;
    uVar41 = uVar50 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    lStack_90 = 0x108d93;
    local_70 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(this + 8) = local_70;
    if (uVar40 == 0) {
      iVar46 = *(int *)(this + 0x2c);
      uVar42 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_001088f3;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar41)) &&
         (local_70 < (void *)((long)pvVar4 + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar42 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar50 != uVar42);
        iVar46 = *(int *)(this + 0x2c);
        uVar42 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar42);
        lStack_90 = 0x108ddc;
        memset(local_70,0,uVar41);
        iVar46 = *(int *)(this + 0x2c);
        uVar42 = *param_1;
      }
    }
    if (iVar46 != 0) {
      uVar41 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00108c73;
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      uVar3 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar38 = ((uint)(uVar42 >> 0x10) & 0xffff ^ (uint)uVar42) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar54 = 1;
        uVar47 = uVar3;
      }
      else {
        uVar47 = uVar54 * uVar3;
      }
      lVar53 = *(long *)(this + 0x10);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar50;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar47;
      lVar48 = SUB168(auVar5 * auVar21,8);
      uVar38 = *(uint *)(lVar53 + lVar48 * 4);
      uVar55 = SUB164(auVar5 * auVar21,8);
      if (uVar38 != 0) {
        uVar52 = 0;
        lVar49 = lVar48;
        do {
          if ((uVar54 == uVar38) &&
             (uVar42 == *(ulong *)(*(long *)((long)local_70 + lVar48 * 8) + 0x10))) {
            auVar57._0_8_ = *(long *)((long)local_70 + (ulong)uVar55 * 8) + 0x18;
            auVar57._8_8_ = lVar49;
            return auVar57;
          }
          uVar52 = uVar52 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar55 + 1) * uVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar50;
          lVar48 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(lVar53 + lVar48 * 4);
          uVar55 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar38 * uVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar50, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar55 + uVar40) - SUB164(auVar7 * auVar23,8)) * uVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar50, lVar49 = SUB168(auVar8 * auVar24,8),
                uVar52 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00108c73:
      uVar47 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar41 * 4));
      uVar3 = *(ulong *)(hash_table_size_primes_inv + uVar41 * 8);
      uVar40 = ((uint)(uVar42 >> 0x10) & 0xffff ^ (uint)uVar42) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar38 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar38 = 1;
        uVar45 = uVar3;
      }
      else {
        uVar45 = uVar38 * uVar3;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar47;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar45;
      lVar48 = SUB168(auVar17 * auVar33,8);
      uVar40 = *(uint *)(lVar53 + lVar48 * 4);
      uVar54 = SUB164(auVar17 * auVar33,8);
      if (uVar40 != 0) {
        uVar55 = 0;
        lVar49 = lVar48;
        do {
          if ((uVar38 == uVar40) &&
             (*(ulong *)(*(long *)((long)local_70 + lVar48 * 8) + 0x10) == uVar42)) {
            pauVar44 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar54 * 8);
            *(undefined4 *)(pauVar44[1] + 8) = 0;
            lStack_90 = lVar49;
            goto LAB_00108c54;
          }
          uVar55 = uVar55 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (uVar54 + 1) * uVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar47;
          lVar48 = SUB168(auVar18 * auVar34,8);
          uVar40 = *(uint *)(lVar53 + lVar48 * 4);
          uVar54 = SUB164(auVar18 * auVar34,8);
        } while ((uVar40 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = uVar40 * uVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar47, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar41 * 4) + uVar54) -
                     SUB164(auVar19 * auVar35,8)) * uVar3, auVar36._8_8_ = 0, auVar36._0_8_ = uVar47
                , lVar49 = SUB168(auVar20 * auVar36,8), uVar55 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_001088f3:
  if ((float)uVar50 * __LC0 < (float)(iVar46 + 1)) {
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      pauVar44 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00108c54;
    }
    uVar42 = (ulong)(uVar40 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar42 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    uVar50 = (ulong)uVar40;
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar4 = *(void **)(this + 0x10);
    uVar42 = uVar50 * 4;
    uVar41 = uVar50 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar41)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar50);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar41);
      }
    }
    if (uVar38 != 0) {
      uVar42 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar4 + uVar42 * 4);
        if (uVar40 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar52 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar41 = CONCAT44(0,uVar54);
          lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar40 * lVar48;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar41;
          lVar49 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar49 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar55 = *puVar1;
          uVar43 = *(undefined8 *)((long)local_70 + uVar42 * 8);
          while (uVar55 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar55 * lVar48;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar41;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar54 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar48;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar41;
            uVar39 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar43;
            if (uVar39 < uVar52) {
              *puVar1 = uVar40;
              puVar2 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar51 = *puVar2;
              *puVar2 = uVar43;
              uVar40 = uVar55;
              uVar52 = uVar39;
            }
            uVar52 = uVar52 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar48;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar41;
            lVar49 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar49 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar43 = uVar51;
            uVar55 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar43;
          *puVar1 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar38 != uVar42);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar42 = *param_1;
  pauVar44 = (undefined1 (*) [16])operator_new(0x20,"");
  *(ulong *)pauVar44[1] = uVar42;
  *(undefined4 *)(pauVar44[1] + 8) = 0;
  *pauVar44 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar44;
  }
  else {
    *puVar2 = pauVar44;
    *(undefined8 **)(*pauVar44 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar44;
  uVar40 = ((uint)(*param_1 >> 0x10) & 0xffff ^ (uint)*param_1) * -0x7a143595;
  uVar38 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
  uVar40 = uVar38 ^ uVar38 >> 0x10;
  if (uVar38 == uVar38 >> 0x10) {
    uVar42 = 1;
    uVar40 = 1;
  }
  else {
    uVar42 = (ulong)uVar40;
  }
  uVar55 = 0;
  lVar53 = *(long *)(this + 0x10);
  lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar38);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar42 * lVar48;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar41;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lStack_90 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar54 = *puVar1;
  pauVar37 = pauVar44;
  while (uVar54 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar54 * lVar48;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar41;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar38 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar48;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar41;
    uVar52 = SUB164(auVar15 * auVar31,8);
    pauVar56 = pauVar37;
    if (uVar52 < uVar55) {
      *puVar1 = uVar40;
      puVar2 = (undefined8 *)(lVar49 + lStack_90 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar40 = uVar54;
      uVar55 = uVar52;
    }
    uVar55 = uVar55 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar48;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar41;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lStack_90 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar56;
    uVar54 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar49 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00108c54:
  auVar58._8_8_ = lStack_90;
  auVar58._0_8_ = pauVar44[1] + 8;
  return auVar58;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned int, KeyLocation, KeyMappingX11::HashMapHasherKeys,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   KeyLocation> > >::operator[](unsigned int const&) */

undefined1  [16] __thiscall
HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
::operator[](HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
             *this,uint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x1094db;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00109043;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar48)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x109524;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_001093c3;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar53 = 1;
        uVar45 = uVar48;
      }
      else {
        uVar45 = uVar53 * uVar48;
      }
      lVar52 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar52 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar50 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar53 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar56._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x14;
            auVar56._8_8_ = lVar47;
            return auVar56;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar54 + 1) * uVar48;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar52 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar48, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar54 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar48,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_001093c3:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar48;
      }
      else {
        uVar43 = uVar37 * uVar48;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar53 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar53 * 8);
            *(undefined4 *)(pauVar42[1] + 4) = 0;
            lStack_90 = lVar47;
            goto LAB_001093a4;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar53 + 1) * uVar48;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar53 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar48, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar53) -
                     SUB164(auVar18 * auVar34,8)) * uVar48, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_00109043:
  if ((float)uVar51 * __LC0 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001093a4;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar51 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar52 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar53 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            uVar50 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar50 < uVar54) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar50;
            }
            uVar54 = uVar54 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar52 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  uVar38 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x18,"");
  *(uint *)pauVar42[1] = uVar38;
  *(undefined4 *)(pauVar42[1] + 4) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = (*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar53 = 0;
  lVar52 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lStack_90 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar51;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001093a4:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 4;
  return auVar57;
}



/* KeyMappingX11::initialize() */

void KeyMappingX11::_GLOBAL__sub_I_initialize(void)

{
  if (xkeysym_map == '\0') {
    xkeysym_map = '\x01';
    xkeysym_map._8_16_ = (undefined1  [16])0x0;
    xkeysym_map._24_16_ = (undefined1  [16])0x0;
    xkeysym_map._40_8_ = 2;
    __cxa_atexit(HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
                 ::~HashMap,xkeysym_map,&__dso_handle);
  }
  if (scancode_map == '\0') {
    scancode_map = '\x01';
    scancode_map._8_16_ = (undefined1  [16])0x0;
    scancode_map._24_16_ = (undefined1  [16])0x0;
    scancode_map._40_8_ = 2;
    __cxa_atexit(HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
                 ::~HashMap,scancode_map,&__dso_handle);
  }
  if (scancode_map_inv == '\0') {
    scancode_map_inv = '\x01';
    scancode_map_inv._8_16_ = (undefined1  [16])0x0;
    scancode_map_inv._24_16_ = (undefined1  [16])0x0;
    scancode_map_inv._40_8_ = 2;
    __cxa_atexit(HashMap<Key,unsigned_int,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<Key>,DefaultTypedAllocator<HashMapElement<Key,unsigned_int>>>
                 ::~HashMap,scancode_map_inv,&__dso_handle);
  }
  if (xkeysym_unicode_map == '\0') {
    xkeysym_unicode_map = '\x01';
    xkeysym_unicode_map._8_16_ = (undefined1  [16])0x0;
    xkeysym_unicode_map._24_16_ = (undefined1  [16])0x0;
    xkeysym_unicode_map._40_8_ = 2;
    __cxa_atexit(HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
                 ::~HashMap,xkeysym_unicode_map,&__dso_handle);
  }
  if (location_map != '\0') {
    return;
  }
  location_map = 1;
  location_map._8_16_ = (undefined1  [16])0x0;
  location_map._40_8_ = 2;
  location_map._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
               ::~HashMap,location_map,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<unsigned int, KeyLocation, KeyMappingX11::HashMapHasherKeys,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   KeyLocation> > >::~HashMap() */

void __thiscall
HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
::~HashMap(HashMap<unsigned_int,KeyLocation,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,KeyLocation>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<unsigned long, char32_t, KeyMappingX11::HashMapHasherKeys,
   HashMapComparatorDefault<unsigned long>, DefaultTypedAllocator<HashMapElement<unsigned long,
   char32_t> > >::~HashMap() */

void __thiscall
HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
::~HashMap(HashMap<unsigned_long,char32_t,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,char32_t>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<Key, unsigned int, KeyMappingX11::HashMapHasherKeys, HashMapComparatorDefault<Key>,
   DefaultTypedAllocator<HashMapElement<Key, unsigned int> > >::~HashMap() */

void __thiscall
HashMap<Key,unsigned_int,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<Key>,DefaultTypedAllocator<HashMapElement<Key,unsigned_int>>>
::~HashMap(HashMap<Key,unsigned_int,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<Key>,DefaultTypedAllocator<HashMapElement<Key,unsigned_int>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<unsigned int, Key, KeyMappingX11::HashMapHasherKeys, HashMapComparatorDefault<unsigned
   int>, DefaultTypedAllocator<HashMapElement<unsigned int, Key> > >::~HashMap() */

void __thiscall
HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
::~HashMap(HashMap<unsigned_int,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,Key>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<unsigned long, Key, KeyMappingX11::HashMapHasherKeys, HashMapComparatorDefault<unsigned
   long>, DefaultTypedAllocator<HashMapElement<unsigned long, Key> > >::~HashMap() */

void __thiscall
HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
::~HashMap(HashMap<unsigned_long,Key,KeyMappingX11::HashMapHasherKeys,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,Key>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


