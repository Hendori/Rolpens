
/* BitMap::get_true_bit_count() const */

int __thiscall BitMap::get_true_bit_count(BitMap *this)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)(this + 0x248);
  if ((pbVar5 != (byte *)0x0) && (0 < (int)*(undefined8 *)(pbVar5 + -8))) {
    pbVar1 = pbVar5 + (ulong)((int)*(undefined8 *)(pbVar5 + -8) - 1) + 1;
    iVar4 = 0;
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      uVar3 = (uint)bVar2;
      iVar4 = ((int)uVar3 >> 1 & 1U) +
              ((int)uVar3 >> 2 & 1U) +
              ((int)uVar3 >> 3 & 1U) +
              ((int)uVar3 >> 4 & 1U) +
              ((int)(uint)bVar2 >> 5 & 1U) +
              ((int)(uint)bVar2 >> 6 & 1U) + (uint)(bVar2 >> 7) + iVar4 + (bVar2 & 1);
    } while (pbVar1 != pbVar5);
    return iVar4;
  }
  return 0;
}



/* BitMap::get_size() const */

undefined8 __thiscall BitMap::get_size(BitMap *this)

{
  return *(undefined8 *)(this + 0x250);
}



/* BitMap::get_bit(int, int) const */

uint __thiscall BitMap::get_bit(BitMap *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(this + 0x250);
  if ((param_1 < 0) || (iVar1 <= param_1)) {
    _err_print_index_error
              ("get_bit","scene/resources/bit_map.cpp",0x8e,(long)param_1,(long)iVar1,"p_x","width",
               "",false,false);
  }
  else {
    if ((-1 < param_2) && (param_2 < *(int *)(this + 0x254))) {
      lVar2 = *(long *)(this + 0x248);
      iVar1 = iVar1 * param_2 + param_1;
      lVar4 = (long)(iVar1 >> 3);
      if (lVar2 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(long *)(lVar2 + -8);
        if (lVar4 < lVar5) {
          return (int)(uint)*(byte *)(lVar2 + lVar4) >> ((byte)iVar1 & 7) & 1;
        }
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    _err_print_index_error
              ("get_bit","scene/resources/bit_map.cpp",0x8f,(long)param_2,
               (long)*(int *)(this + 0x254),"p_y","height","",false,false);
  }
  return 0;
}



/* BitMap::get_bitv(Vector2i const&) const */

void __thiscall BitMap::get_bitv(BitMap *this,Vector2i *param_1)

{
  get_bit(this,*(int *)param_1,*(int *)(param_1 + 4));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BitMap::convert_to_image() const */

void BitMap::convert_to_image(void)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  Color *pCVar4;
  int iVar5;
  BitMap *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  
  iVar5 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Image::create_empty(in_RDI,*(undefined4 *)(in_RSI + 0x250),*(undefined4 *)(in_RSI + 0x254),0,0);
  if (0 < *(int *)(in_RSI + 0x250)) {
    do {
      pCVar4 = (Color *)0x0;
      if (0 < *(int *)(in_RSI + 0x254)) {
        do {
          uVar2 = *in_RDI;
          get_bit(in_RSI,iVar5,(int)pCVar4);
          Image::set_pixel((int)uVar2,iVar5,pCVar4);
          uVar3 = (int)pCVar4 + 1;
          pCVar4 = (Color *)(ulong)uVar3;
        } while ((int)uVar3 < *(int *)(in_RSI + 0x254));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_RSI + 0x250));
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<FillBitsStackEntry>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<FillBitsStackEntry>::_copy_on_write(CowData<FillBitsStackEntry> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = __n;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* BitMap::set_bit(int, int, bool) */

void __thiscall BitMap::set_bit(BitMap *this,int param_1,int param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  iVar1 = *(int *)(this + 0x250);
  if ((param_1 < 0) || (iVar1 <= param_1)) {
    _err_print_index_error
              ("set_bit","scene/resources/bit_map.cpp",0x77,(long)param_1,(long)iVar1,"p_x","width",
               "",false,false);
    return;
  }
  if ((-1 < param_2) && (param_2 < *(int *)(this + 0x254))) {
    lVar2 = *(long *)(this + 0x248);
    iVar1 = iVar1 * param_2 + param_1;
    lVar7 = (long)(iVar1 >> 3);
    if (lVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar2 + -8);
      if (lVar7 < lVar6) {
        bVar5 = (byte)(1 << ((byte)iVar1 & 7));
        bVar4 = ~bVar5 & *(byte *)(lVar2 + lVar7);
        if (param_3) {
          bVar4 = *(byte *)(lVar2 + lVar7) | bVar5;
        }
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x248));
        *(byte *)(*(long *)(this + 0x248) + lVar7) = bVar4;
        return;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  _err_print_index_error
            ("set_bit","scene/resources/bit_map.cpp",0x78,(long)param_2,(long)*(int *)(this + 0x254)
             ,"p_y","height","",false,false);
  return;
}



/* BitMap::set_bitv(Vector2i const&, bool) */

void __thiscall BitMap::set_bitv(BitMap *this,Vector2i *param_1,bool param_2)

{
  set_bit(this,*(int *)param_1,*(int *)(param_1 + 4),param_2);
  return;
}



/* BitMap::_get_data() const */

void BitMap::_get_data(void)

{
  char cVar1;
  Variant *pVVar2;
  long in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  local_80 = *(undefined8 *)(in_RSI + 0x250);
  Variant::Variant((Variant *)local_58,(Vector2i *)&local_80);
  Variant::Variant((Variant *)local_78,"size");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(Vector *)(in_RSI + 0x240));
  Variant::Variant((Variant *)local_78,"data");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* BitMap::set_bit_rect(Rect2i const&, bool) */

void __thiscall BitMap::set_bit_rect(BitMap *this,Rect2i *param_1,bool param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  undefined4 local_70;
  int local_6c;
  int local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_60 = *(undefined8 *)(this + 0x250);
  local_58 = *(ulong *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68[0] = 0;
  local_68[1] = 0;
  if ((int)(*(uint *)(this + 0x250) | *(uint *)(this + 0x254)) < 0) {
LAB_00100a99:
    uStack_50 = uVar7;
    _err_print_error("intersects","./core/math/rect2i.h",0x38,
                     "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                     ,0,0);
    iVar5 = local_68[0];
    uVar7 = uStack_50;
  }
  else {
    uStack_50._0_4_ = (uint)uVar7;
    uStack_50._4_4_ = (uint)((ulong)uVar7 >> 0x20);
    iVar5 = 0;
    if ((int)((uint)uStack_50 | uStack_50._4_4_) < 0) goto LAB_00100a99;
  }
  uStack_50 = uVar7;
  iVar4 = (uint)uStack_50 + (int)local_58;
  if ((iVar5 < iVar4) && ((int)local_58 < (int)local_60 + iVar5)) {
    if (((int)(uStack_50._4_4_ + local_58._4_4_) <= local_68[1]) ||
       (local_60._4_4_ + local_68[1] <= local_58._4_4_)) goto LAB_001009c0;
    iVar4 = local_68[1];
    if (local_68[1] < *(int *)(param_1 + 4)) {
      iVar4 = *(int *)(param_1 + 4);
    }
    iVar9 = *(int *)param_1;
    if (*(int *)param_1 < iVar5) {
      iVar9 = iVar5;
    }
    local_58 = CONCAT44(iVar4,iVar9);
    uVar6 = Vector2i::operator+((Vector2i *)param_1,(Vector2i *)(param_1 + 8));
    uVar7 = Vector2i::operator+((Vector2i *)local_68,(Vector2i *)&local_60);
    local_6c = (int)((ulong)uVar7 >> 0x20);
    iVar5 = (int)((ulong)uVar6 >> 0x20);
    if (iVar5 < local_6c) {
      local_6c = iVar5;
    }
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    local_70 = (undefined4)uVar7;
    uVar7 = Vector2i::operator-((Vector2i *)&local_70,(Vector2i *)&local_58);
    uVar15 = local_58;
    uStack_50 = uVar7;
  }
  else {
LAB_001009c0:
    uVar15 = 0;
    uVar7 = 0;
  }
  uVar13 = uVar15 & 0xffffffff;
  uVar14 = (long)uVar15 >> 0x20 & 0xffffffff;
  iVar5 = (int)((ulong)uVar7 >> 0x20);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x248));
  uVar12 = (int)uVar15 + (int)uVar7;
  lVar1 = *(long *)(this + 0x248);
  if ((int)uVar15 < (int)uVar12) {
    do {
      uVar11 = uVar14;
      if (0 < iVar5) goto LAB_00100a28;
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar10;
    } while (uVar10 != uVar12);
  }
LAB_00100a6b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00100a28:
  do {
    iVar9 = *(int *)(this + 0x250) * (int)uVar11 + (int)uVar13;
    iVar4 = iVar9 + 7;
    if (-1 < iVar9) {
      iVar4 = iVar9;
    }
    pbVar8 = (byte *)((iVar4 >> 3) + lVar1);
    bVar3 = (byte)(1 << ((byte)iVar9 & 7));
    bVar2 = ~bVar3 & *pbVar8;
    if (param_2) {
      bVar2 = *pbVar8 | bVar3;
    }
    uVar10 = (int)uVar11 + 1;
    *pbVar8 = bVar2;
    uVar11 = (ulong)uVar10;
  } while (((int)uVar10 < (int)(uVar15 >> 0x20) + iVar5) ||
          (uVar10 = (int)uVar13 + 1, uVar13 = (ulong)uVar10, uVar11 = uVar14, uVar12 != uVar10));
  goto LAB_00100a6b;
}



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* HashMap<Vector2i, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, int> > >::erase(Vector2i const&) [clone .isra.0]
    */

ulong __thiscall
HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
::erase(HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
        *this,Vector2i *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
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
  char cVar27;
  uint uVar28;
  ulong in_RAX;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  long *plVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  uint *puVar39;
  uint uVar40;
  
  if (*(long *)(this + 8) == 0) {
    return in_RAX;
  }
  if (*(uint *)(this + 0x2c) == 0) {
    return (ulong)*(uint *)(this + 0x2c);
  }
  uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar33 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar28 = (*(int *)param_1 * 0x16a88000 | (uint)(*(int *)param_1 * -0x3361d2af) >> 0x11) *
           0x1b873593 ^ 0x7f07c65;
  uVar28 = (uVar28 << 0xd | uVar28 >> 0x13) * 5 + 0xe6546b64 ^
           (*(int *)(param_1 + 4) * 0x16a88000 | (uint)(*(int *)(param_1 + 4) * -0x3361d2af) >> 0x11
           ) * 0x1b873593;
  uVar28 = (uVar28 << 0xd | uVar28 >> 0x13) * 5 + 0xe6546b64;
  uVar28 = (uVar28 >> 0x10 ^ uVar28) * -0x7a143595;
  uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
  uVar36 = uVar28 ^ uVar28 >> 0x10;
  if (uVar28 == uVar28 >> 0x10) {
    uVar36 = 1;
    uVar30 = uVar33;
  }
  else {
    uVar30 = uVar36 * uVar33;
  }
  uVar38 = CONCAT44(0,uVar34);
  lVar37 = *(long *)(this + 0x10);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar38;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar30;
  auVar7 = auVar7 * auVar17;
  lVar31 = auVar7._8_8_;
  uVar28 = *(uint *)(lVar37 + lVar31 * 4);
  uVar29 = auVar7._8_4_;
  if (uVar28 == 0) {
    return auVar7._0_8_;
  }
  uVar40 = 0;
  do {
    if (uVar36 == uVar28) {
      cVar27 = Vector2i::operator==
                         ((Vector2i *)(*(long *)(*(long *)(this + 8) + lVar31 * 8) + 0x10),param_1);
      if (cVar27 != '\0') {
        lVar37 = *(long *)(this + 0x10);
        lVar31 = *(long *)(this + 8);
        uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar33 = CONCAT44(0,uVar28);
        lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)(uVar29 + 1) * lVar5;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar33;
        lVar32 = SUB168(auVar11 * auVar21,8);
        puVar39 = (uint *)(lVar37 + lVar32 * 4);
        uVar36 = SUB164(auVar11 * auVar21,8);
        uVar34 = *puVar39;
        if ((uVar34 == 0) ||
           (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar34 * lVar5, auVar22._8_8_ = 0,
           auVar22._0_8_ = uVar33, auVar13._8_8_ = 0,
           auVar13._0_8_ = (ulong)((uVar28 + uVar36) - SUB164(auVar12 * auVar22,8)) * lVar5,
           auVar23._8_8_ = 0, auVar23._0_8_ = uVar33, uVar40 = uVar29,
           SUB164(auVar13 * auVar23,8) == 0)) goto LAB_00100d8b;
        break;
      }
      lVar37 = *(long *)(this + 0x10);
    }
    uVar40 = uVar40 + 1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (uVar29 + 1) * uVar33;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar38;
    auVar8 = auVar8 * auVar18;
    lVar31 = auVar8._8_8_;
    uVar28 = *(uint *)(lVar37 + lVar31 * 4);
    uVar29 = auVar8._8_4_;
    if (uVar28 == 0) {
      return auVar8._0_8_;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar28 * uVar33;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar38;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = ((uVar34 + uVar29) - SUB164(auVar9 * auVar19,8)) * uVar33;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar38;
    if (SUB164(auVar10 * auVar20,8) < uVar40) {
      return SUB168(auVar10 * auVar20,0);
    }
  } while( true );
  while (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar34 * lVar5, auVar24._8_8_ = 0,
        auVar24._0_8_ = uVar33, auVar15._8_8_ = 0,
        auVar15._0_8_ = (ulong)((uVar36 + uVar28) - SUB164(auVar14 * auVar24,8)) * lVar5,
        auVar25._8_8_ = 0, auVar25._0_8_ = uVar33, uVar40 = uVar29, SUB164(auVar15 * auVar25,8) != 0
        ) {
    uVar29 = uVar36;
    puVar1 = (uint *)(lVar37 + (ulong)uVar40 * 4);
    *puVar39 = *puVar1;
    puVar2 = (undefined8 *)(lVar31 + lVar32 * 8);
    *puVar1 = uVar34;
    puVar3 = (undefined8 *)(lVar31 + (ulong)uVar40 * 8);
    uVar6 = *puVar2;
    *puVar2 = *puVar3;
    *puVar3 = uVar6;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(uVar29 + 1) * lVar5;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar33;
    lVar32 = SUB168(auVar16 * auVar26,8);
    puVar39 = (uint *)(lVar37 + lVar32 * 4);
    uVar36 = SUB164(auVar16 * auVar26,8);
    uVar34 = *puVar39;
    if (uVar34 == 0) break;
  }
LAB_00100d8b:
  uVar33 = (ulong)uVar29;
  plVar4 = (long *)(lVar31 + uVar33 * 8);
  *(undefined4 *)(lVar37 + uVar33 * 4) = 0;
  plVar35 = (long *)*plVar4;
  if (*(long **)(this + 0x18) == plVar35) {
    *(long *)(this + 0x18) = *plVar35;
    plVar35 = (long *)*plVar4;
  }
  if (*(long **)(this + 0x20) == plVar35) {
    *(long *)(this + 0x20) = plVar35[1];
    plVar35 = (long *)*plVar4;
  }
  if ((long *)plVar35[1] != (long *)0x0) {
    *(long *)plVar35[1] = *plVar35;
    plVar35 = (long *)*plVar4;
  }
  if (*plVar35 != 0) {
    *(long *)(*plVar35 + 8) = plVar35[1];
    plVar35 = (long *)*plVar4;
  }
  Memory::free_static(plVar35,false);
  uVar30 = *(ulong *)(this + 8);
  *(undefined8 *)(uVar30 + uVar33 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  return uVar30;
}



/* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] */

void __thiscall CowData<Vector2>::_ref(CowData<Vector2> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* BitMap::blit(Vector2i const&, Ref<BitMap> const&) */

ulong __thiscall BitMap::blit(BitMap *this,Vector2i *param_1,Ref *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  lVar4 = *(long *)param_2;
  if (lVar4 == 0) {
    _err_print_error(&_LC32,"scene/resources/bit_map.cpp",0x2ab,
                     "Condition \"p_bitmap.is_null()\" is true.",
                     "It\'s not a reference to a valid BitMap object.",0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(lVar4 + 0x254);
  uVar3 = *(uint *)(lVar4 + 0x250);
  uVar5 = (ulong)uVar3;
  iVar9 = *(int *)param_1;
  if (((int)uVar3 < 1) || (iVar2 < 1)) {
    return uVar5;
  }
  uVar8 = 0;
LAB_00100f90:
  iVar6 = 0;
  iVar7 = iVar1;
  do {
    if (-1 < iVar9) goto LAB_00100fd3;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 1;
  } while (iVar6 != iVar2);
  goto LAB_00100fa6;
  while( true ) {
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 1;
    if (iVar6 == iVar2) break;
LAB_00100fd3:
    if ((iVar9 < *(int *)(this + 0x250)) && (-1 < iVar7)) {
      if ((iVar7 < *(int *)(this + 0x254)) &&
         (uVar5 = get_bit(*(BitMap **)param_2,uVar8,iVar6), (char)uVar5 != '\0')) {
        uVar5 = set_bit(this,iVar9,iVar7,true);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 1;
      if (iVar2 == iVar6) {
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 1;
        if (uVar3 == uVar8) {
          return uVar5;
        }
        goto LAB_00100f90;
      }
      goto LAB_00100fd3;
    }
  }
LAB_00100fa6:
  uVar8 = uVar8 + 1;
  iVar9 = iVar9 + 1;
  if (uVar3 == uVar8) {
    return uVar5;
  }
  goto LAB_00100f90;
}



/* BitMap::BitMap() */

void __thiscall BitMap::BitMap(BitMap *this)

{
  Resource::Resource((Resource *)this);
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00114c88;
  *(undefined8 *)(this + 0x250) = 0;
  return;
}



/* BitMap::_bind_methods() */

void BitMap::_bind_methods(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  MethodBind *pMVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long in_FS_OFFSET;
  CowData<char32_t> *local_298;
  undefined8 local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined8 local_190;
  long *local_188;
  int local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined *local_158;
  char *pcStack_150;
  undefined8 local_148;
  char *local_138;
  undefined *puStack_130;
  undefined8 local_128;
  undefined *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  Variant *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  Variant *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined8 local_80;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar5 = PTR__LC45_00115618;
  puVar4 = PTR__LC42_00115610;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = 0;
  local_168 = &_LC20;
  local_78 = (Variant **)&local_168;
  uVar9 = (uint)(Variant *)&local_78;
  D_METHODP((char *)&local_198,(char ***)"create",uVar9);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,Vector2i_const&>(create);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_a8 = 0;
  auStack_70._0_8_ = &pcStack_b0;
  local_b8 = (Variant *)0x106617;
  pcStack_b0 = "threshold";
  local_78 = &local_b8;
  D_METHODP((char *)&local_198,(char ***)"create_from_image_alpha",uVar9);
  Variant::Variant((Variant *)&local_78,_LC50);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_b8 = (Variant *)&local_78;
  pMVar7 = create_method_bind<BitMap,Ref<Image>const&,float>(create_from_image_alpha);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,&local_b8,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_c8 = 0;
  local_d8 = puVar5;
  puStack_d0 = puVar4;
  auStack_70._0_8_ = &puStack_d0;
  local_78 = (Variant **)&local_d8;
  D_METHODP((char *)&local_198,(char ***)"set_bitv",uVar9);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,Vector2i_const&,bool>(set_bitv);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_88 = &_LC42;
  local_98 = (Variant *)&_LC43;
  puStack_90 = &_LC44;
  auStack_70._8_8_ = &local_88;
  auStack_70._0_8_ = &puStack_90;
  local_78 = &local_98;
  D_METHODP((char *)&local_198,(char ***)"set_bit",uVar9);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,int,int,bool>(set_bit);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_98 = (Variant *)0x10660e;
  puStack_90 = (undefined *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_198,(char ***)"get_bitv",uVar9);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,bool,Vector2i_const&>(get_bitv);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_e8 = 0;
  local_f8 = &_LC43;
  puStack_f0 = &_LC44;
  auStack_70._0_8_ = &puStack_f0;
  local_78 = (Variant **)&local_f8;
  D_METHODP((char *)&local_198,(char ***)"get_bit",uVar9);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,bool,int,int>(get_bit);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_108 = 0;
  local_118 = &_LC39;
  puStack_110 = puVar4;
  auStack_70._0_8_ = &puStack_110;
  local_78 = (Variant **)&local_118;
  D_METHODP((char *)&local_198,(char ***)"set_bit_rect",uVar9);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,Rect2i_const&,bool>(set_bit_rect);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_198,(char ***)"get_true_bit_count",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,int>(get_true_bit_count);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_198,(char ***)"get_size",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,Vector2i>(get_size);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_98 = (Variant *)0x106681;
  puStack_90 = (undefined *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_198,(char ***)"resize",uVar9);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,Vector2i_const&>(resize);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_98 = (Variant *)&_LC21;
  puStack_90 = (undefined *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_198,(char ***)"_set_data",uVar9);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,Dictionary_const&>(_set_data);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_198,(char ***)"_get_data",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,Dictionary>(_get_data);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_128 = 0;
  local_138 = "pixels";
  puStack_130 = &_LC39;
  auStack_70._0_8_ = &puStack_130;
  local_78 = (Variant **)&local_138;
  D_METHODP((char *)&local_198,(char ***)"grow_mask",uVar9);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,int,Rect2i_const&>(grow_mask);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_198,(char ***)"convert_to_image",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<BitMap,Ref<Image>>(convert_to_image);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_148 = 0;
  local_158 = &_LC39;
  pcStack_150 = "epsilon";
  auStack_70._0_8_ = &pcStack_150;
  local_78 = (Variant **)&local_158;
  D_METHODP((char *)&local_198,(char ***)"opaque_to_polygons",uVar9);
  Variant::Variant((Variant *)&local_78,_LC63);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar7 = create_method_bind<BitMap,TypedArray<Vector<Vector2>>,Rect2i_const&,float>
                     (_opaque_to_polygons_bind);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_198,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar8 = local_188 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (local_188 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_188[-1];
      lVar10 = 0;
      local_188 = (long *)0x0;
      plVar8 = plVar6;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (undefined *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1b0,true);
  _scs_create((char *)&local_1b8,true);
  local_1c0 = 0;
  local_198 = &_LC3;
  local_1c8 = 0;
  local_190 = 0;
  String::parse_latin1((StrRange *)&local_1c8);
  local_198 = &_LC21;
  local_1d0 = 0;
  local_190 = 4;
  String::parse_latin1((StrRange *)&local_1d0);
  local_198 = (undefined *)CONCAT44(local_198._4_4_,0x1b);
  local_190 = 0;
  if (local_1d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_190,(CowData *)&local_1d0);
  }
  local_188 = (long *)0x0;
  local_180 = 0;
  local_178 = 0;
  if (local_1c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1c8);
    local_170 = 10;
    if (local_180 == 0x11) {
      StringName::StringName((StringName *)&local_1a8,(String *)&local_178,false);
      if (local_188 == (long *)local_1a8) {
        if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_188 = (long *)local_1a8;
      }
      goto LAB_00102635;
    }
  }
  local_170 = 10;
  StringName::operator=((StringName *)&local_188,(StringName *)&local_1c0);
LAB_00102635:
  local_298 = (CowData<char32_t> *)&local_178;
  local_1d8 = 0;
  local_1a8 = "BitMap";
  local_1a0 = 6;
  String::parse_latin1((StrRange *)&local_1d8);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1d8,false);
  ClassDB::add_property
            ((StringName *)&local_1a8,(PropertyInfo *)&local_198,(StringName *)&local_1b8,
             (StringName *)&local_1b0,-1);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref(local_298);
  if ((StringName::configured != '\0') && (local_188 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if ((((StringName::configured != '\0') &&
       ((local_1c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1b0 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rdp(Vector<Vector2> const&, float) */

Vector * rdp(Vector *param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  code *pcVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  long in_RSI;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  double dVar17;
  float fVar18;
  float fVar19;
  long local_80 [2];
  long local_70;
  Vector local_68 [8];
  long local_60;
  Vector local_58 [8];
  long local_50 [2];
  long local_40;
  
  pfVar7 = *(float **)(in_RSI + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pfVar7 == (float *)0x0) || (uVar11 = *(ulong *)(pfVar7 + -2), (long)uVar11 < 3)) {
    *(undefined8 *)(param_1 + 8) = 0;
    if (*(long *)(in_RSI + 8) != 0) {
      CowData<Vector2>::_ref((CowData<Vector2> *)(param_1 + 8),(CowData *)(in_RSI + 8));
    }
    goto LAB_00102bee;
  }
  fVar2 = *pfVar7;
  fVar18 = 0.0;
  fVar3 = pfVar7[1];
  uVar10 = 1;
  uVar14 = 0xffffffff;
  fVar4 = pfVar7[(uVar11 - 1) * 2];
  fVar5 = (pfVar7 + (uVar11 - 1) * 2)[1];
  do {
    fVar9 = pfVar7[uVar10 * 2];
    if (fVar2 == fVar4) {
      fVar9 = ABS(fVar9 - fVar4);
    }
    else {
      fVar6 = pfVar7[uVar10 * 2 + 1];
      if (fVar5 == fVar3) {
        fVar9 = ABS(fVar6 - fVar5);
      }
      else {
        fVar19 = (fVar5 - fVar3) / (fVar4 - fVar2);
        dVar17 = (double)(fVar19 * fVar19) + __LC77;
        if (dVar17 < 0.0) {
          dVar17 = sqrt(dVar17);
        }
        else {
          dVar17 = SQRT(dVar17);
        }
        fVar9 = (float)((double)ABS((fVar3 - fVar2 * fVar19) + (fVar9 * fVar19 - fVar6)) / dVar17);
      }
    }
    if (fVar18 < fVar9) {
      uVar14 = uVar10 & 0xffffffff;
      fVar18 = fVar9;
    }
    uVar10 = uVar10 + 1;
    if (uVar11 - 1 == uVar10) {
      if (param_2 < fVar18) {
        uVar10 = (ulong)(int)uVar14;
        uVar11 = 0;
        local_80[0] = 0;
        local_70 = 0;
        CowData<Vector2>::resize<false>((CowData<Vector2> *)local_80,uVar10);
        if (0 < (int)uVar14) goto LAB_00102d34;
        goto LAB_00102da0;
      }
      local_50[0] = 0;
      Vector<Vector2>::push_back(*(Vector<Vector2> **)pfVar7,local_58);
      lVar16 = *(long *)(in_RSI + 8);
      if (lVar16 == 0) {
        uVar11 = 0xffffffffffffffff;
        uVar12 = 0;
      }
      else {
        uVar11 = *(ulong *)(lVar16 + -8) - 1;
        uVar12 = *(ulong *)(lVar16 + -8);
        if (-1 < (long)uVar11) {
          Vector<Vector2>::push_back(*(Vector<Vector2> **)(lVar16 + uVar11 * 8),local_58);
          *(long *)(param_1 + 8) = local_50[0];
          goto LAB_00102bee;
        }
      }
      break;
    }
    uVar12 = uVar11;
  } while (uVar11 != uVar10);
  goto LAB_00102cc6;
  while( true ) {
    lVar13 = *(long *)(local_80[0] + -8);
    if (lVar13 <= (long)uVar11) goto LAB_00102f1c;
    uVar11 = uVar11 + 1;
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_80);
    *(undefined8 *)(local_80[0] + lVar15) = *(undefined8 *)(lVar16 + lVar15);
    if (uVar11 == uVar10) break;
LAB_00102d34:
    lVar16 = *(long *)(in_RSI + 8);
    if (lVar16 == 0) {
      uVar12 = 0;
      goto LAB_00102cc6;
    }
    uVar12 = *(ulong *)(lVar16 + -8);
    if ((long)*(ulong *)(lVar16 + -8) <= (long)uVar11) goto LAB_00102cc6;
    lVar15 = uVar11 * 8;
    if (local_80[0] == 0) {
      lVar13 = 0;
      goto LAB_00102f1c;
    }
  }
LAB_00102da0:
  if (*(long *)(in_RSI + 8) == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(*(long *)(in_RSI + 8) + -8);
  }
  CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_70,lVar16 - uVar10);
  if ((local_70 == 0) || (*(long *)(local_70 + -8) < 1)) {
LAB_00102f7b:
    rdp(local_68,param_2);
    rdp(local_58,param_2);
    if (local_60 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(local_60 + -8);
    }
    uVar11 = (ulong)(int)lVar16;
    if (local_50[0] == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(local_50[0] + -8);
    }
    CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_60,lVar15 + lVar16);
    if (local_50[0] != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(local_50[0] + -8) <= lVar16) break;
        puVar1 = (undefined8 *)(local_50[0] + lVar16 * 8);
        if ((long)uVar11 < 0) {
          if (local_60 == 0) {
LAB_001030af:
            lVar13 = 0;
          }
          else {
LAB_0010307c:
            lVar13 = *(long *)(local_60 + -8);
          }
LAB_00102f1c:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,uVar11,lVar13,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if (local_60 == 0) goto LAB_001030af;
        if (*(long *)(local_60 + -8) <= (long)uVar11) goto LAB_0010307c;
        lVar16 = lVar16 + 1;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_60);
        *(undefined8 *)(local_60 + uVar11 * 8) = *puVar1;
        uVar11 = uVar11 + 1;
      } while (local_50[0] != 0);
    }
    *(long *)(param_1 + 8) = local_60;
    local_60 = 0;
    CowData<Vector2>::_unref((CowData<Vector2> *)local_50);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_60);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_70);
    CowData<Vector2>::_unref((CowData<Vector2> *)local_80);
LAB_00102bee:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar16 = *(long *)(in_RSI + 8);
  if ((long)uVar10 < 0) {
    uVar11 = uVar10;
    if (lVar16 != 0) {
LAB_00102f48:
      uVar12 = *(ulong *)(lVar16 + -8);
      goto LAB_00102cc6;
    }
  }
  else {
    lVar15 = 0;
    while (uVar11 = uVar10, lVar16 != 0) {
      if (*(long *)(lVar16 + -8) <= (long)uVar10) goto LAB_00102f48;
      lVar13 = uVar10 * 8;
      uVar10 = uVar10 + 1;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_70);
      *(undefined8 *)(local_70 + lVar15 * 8) = *(undefined8 *)(lVar16 + lVar13);
      lVar15 = lVar15 + 1;
      if ((local_70 == 0) || (*(long *)(local_70 + -8) <= lVar15)) goto LAB_00102f7b;
      lVar16 = *(long *)(in_RSI + 8);
    }
  }
  uVar12 = 0;
LAB_00102cc6:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar11,uVar12,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}



/* BitMap::create(Vector2i const&) */

void __thiscall BitMap::create(BitMap *this,Vector2i *param_1)

{
  CowData<unsigned_char> *this_00;
  int iVar1;
  long lVar2;
  size_t __n;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  CowData<unsigned_char> *pCVar12;
  
  iVar3 = *(int *)param_1;
  if (iVar3 < 1) {
    _err_print_error("create","scene/resources/bit_map.cpp",0x24,
                     "Condition \"p_size.width < 1\" is true.",0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 1) {
    uVar10 = 0x25;
    pcVar7 = "Condition \"p_size.height < 1\" is true.";
    goto LAB_00103302;
  }
  if (0x7fffffff < (long)iVar3 * (long)iVar1) {
    uVar10 = 0x27;
    pcVar7 = 
    "Condition \"static_cast<int64_t>(p_size.width) * static_cast<int64_t>(p_size.height) > (2147483647)\" is true."
    ;
    goto LAB_00103302;
  }
  puVar9 = *(undefined8 **)(this + 0x248);
  this_00 = (CowData<unsigned_char> *)(this + 0x248);
  lVar11 = (long)(iVar1 * iVar3 + 7 >> 3);
  if (puVar9 == (undefined8 *)0x0) {
    CowData<unsigned_char>::_copy_on_write(this_00);
LAB_00103380:
    uVar8 = lVar11 - 1U | lVar11 - 1U >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 >> 4 | uVar8;
    uVar8 = uVar8 | uVar8 >> 8;
    puVar6 = (undefined8 *)Memory::alloc_static((uVar8 | uVar8 >> 0x10) + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
LAB_001032f0:
      uVar10 = 0x2a;
      pcVar7 = "Condition \"err != OK\" is true.";
LAB_00103302:
      _err_print_error("create","scene/resources/bit_map.cpp",uVar10,pcVar7,0,0);
      return;
    }
    puVar9 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)(this + 0x248) = puVar9;
  }
  else {
    lVar2 = puVar9[-1];
    if (lVar11 == lVar2) {
      *(int *)(this + 0x250) = iVar3;
      uVar4 = *(undefined4 *)(param_1 + 4);
      goto LAB_00103264;
    }
    pCVar12 = this_00;
    CowData<unsigned_char>::_copy_on_write(this_00);
    uVar8 = lVar11 - 1U >> 1 | lVar11 - 1U;
    uVar8 = uVar8 >> 2 | uVar8;
    uVar8 = uVar8 >> 4 | uVar8;
    uVar8 = uVar8 >> 8 | uVar8;
    uVar8 = uVar8 >> 0x10 | uVar8;
    if (lVar2 == 0) goto LAB_00103380;
    uVar5 = lVar2 - 1U | lVar2 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = uVar5 | uVar5 >> 0x20;
    if (lVar2 < lVar11) {
      if (uVar5 != uVar8) {
        pCVar12 = this_00;
        iVar3 = CowData<unsigned_char>::_realloc(this_00,uVar8 + 1);
        if (iVar3 != 0) goto LAB_001032f0;
      }
      puVar9 = *(undefined8 **)(this + 0x248);
      if (puVar9 == (undefined8 *)0x0) {
        create((Vector2i *)pCVar12);
        return;
      }
    }
    else {
      if (uVar5 != uVar8) {
        iVar3 = CowData<unsigned_char>::_realloc(this_00,uVar8 + 1);
        if (iVar3 != 0) goto LAB_001032f0;
      }
      puVar9 = *(undefined8 **)(this + 0x248);
      if (puVar9 == (undefined8 *)0x0) {
        FUN_00106c86();
        return;
      }
    }
  }
  uVar4 = *(undefined4 *)param_1;
  puVar9[-1] = lVar11;
  *(undefined4 *)(this + 0x250) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 4);
LAB_00103264:
  *(undefined4 *)(this + 0x254) = uVar4;
  __n = puVar9[-1];
  CowData<unsigned_char>::_copy_on_write(this_00);
  memset(*(void **)(this + 0x248),0,__n);
  return;
}



/* BitMap::_set_data(Dictionary const&) */

void __thiscall BitMap::_set_data(BitMap *this,Dictionary *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  Variant *this_00;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  Variant local_78 [8];
  long local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"size");
  cVar4 = Dictionary::has((Variant *)param_1);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x9d;
      pcVar5 = "Condition \"!p_d.has(\"size\")\" is true.";
LAB_001035e6:
      _err_print_error("_set_data","scene/resources/bit_map.cpp",uVar6,pcVar5,0,0);
      return;
    }
  }
  else {
    Variant::Variant((Variant *)local_58,"data");
    cVar4 = Dictionary::has((Variant *)param_1);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = 0x9e;
        pcVar5 = "Condition \"!p_d.has(\"data\")\" is true.";
        goto LAB_001035e6;
      }
    }
    else {
      Variant::Variant((Variant *)local_58,"size");
      this_00 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      local_60 = Variant::operator_cast_to_Vector2i(this_00);
      create(this,(Vector2i *)&local_60);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,"data");
      Dictionary::operator[]((Variant *)param_1);
      Variant::operator_cast_to_Vector(local_78);
      lVar3 = local_70;
      lVar2 = *(long *)(this + 0x248);
      if (lVar2 == local_70) {
        if (lVar2 != 0) {
          LOCK();
          plVar1 = (long *)(lVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      else {
        if (lVar2 != 0) {
          LOCK();
          plVar1 = (long *)(lVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = *(long *)(this + 0x248);
            *(undefined8 *)(this + 0x248) = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        *(long *)(this + 0x248) = local_70;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BitMap::grow_mask(int, Rect2i const&) [clone .part.0] */

void __thiscall BitMap::grow_mask(BitMap *this,int param_1,Rect2i *param_2)

{
  int iVar1;
  bool bVar2;
  BitMap *this_00;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long in_FS_OFFSET;
  float fVar14;
  Vector2i *local_c0;
  int local_94;
  BitMap *local_78;
  undefined4 local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_60 = *(undefined8 *)(this + 0x250);
  local_58 = *(undefined8 *)param_2;
  uVar9 = *(undefined8 *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = 0 < param_1;
  local_68 = 0;
  iVar4 = -param_1;
  if (0 < param_1) {
    iVar4 = param_1;
  }
  if ((int)(*(uint *)(this + 0x250) | *(uint *)(this + 0x254)) < 0) {
LAB_00103b67:
    uStack_50 = uVar9;
    _err_print_error("intersects","./core/math/rect2i.h",0x38,
                     "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                     ,0,0);
    uVar9 = uStack_50;
  }
  else {
    uStack_50._0_4_ = (uint)uVar9;
    local_68._0_4_ = 0;
    uStack_50._4_4_ = (uint)((ulong)uVar9 >> 0x20);
    if ((int)((uint)uStack_50 | uStack_50._4_4_) < 0) goto LAB_00103b67;
  }
  uStack_50 = uVar9;
  iVar5 = (uint)uStack_50 + (int)local_58;
  if (((int)local_68 < iVar5) && ((int)local_58 < (int)local_60 + (int)local_68)) {
    if ((local_68._4_4_ < (int)(uStack_50._4_4_ + local_58._4_4_)) &&
       (local_58._4_4_ < local_60._4_4_ + local_68._4_4_)) {
      iVar5 = local_68._4_4_;
      if (local_68._4_4_ < *(int *)(param_2 + 4)) {
        iVar5 = *(int *)(param_2 + 4);
      }
      iVar12 = *(int *)param_2;
      if (*(int *)param_2 < (int)local_68) {
        iVar12 = (int)local_68;
      }
      local_58 = CONCAT44(iVar5,iVar12);
      uVar8 = Vector2i::operator+((Vector2i *)param_2,(Vector2i *)(param_2 + 8));
      uVar9 = Vector2i::operator+((Vector2i *)&local_68,(Vector2i *)&local_60);
      local_6c = (int)((ulong)uVar9 >> 0x20);
      iVar5 = (int)((ulong)uVar8 >> 0x20);
      if (iVar5 < local_6c) {
        local_6c = iVar5;
      }
      if ((int)uVar8 < (int)uVar9) {
        uVar9 = uVar8;
      }
      local_70 = (undefined4)uVar9;
      uVar8 = Vector2i::operator-((Vector2i *)&local_70,(Vector2i *)&local_58);
      uVar9 = local_58;
      uStack_50 = uVar8;
      goto LAB_00103805;
    }
  }
  uVar9 = 0;
  uVar8 = 0;
LAB_00103805:
  local_c0 = (Vector2i *)&local_58;
  iVar5 = (int)uVar9;
  iVar12 = (int)((ulong)uVar9 >> 0x20);
  local_78 = (BitMap *)0x0;
  Ref<BitMap>::instantiate<>((Ref<BitMap> *)&local_78);
  this_00 = local_78;
  local_58 = *(undefined8 *)(this + 0x250);
  create(local_78,local_c0);
  if (*(long *)(this_00 + 0x248) != *(long *)(this + 0x248)) {
    CowData<unsigned_char>::_ref
              ((CowData<unsigned_char> *)(this_00 + 0x248),(CowData *)(this + 0x248));
  }
  iVar6 = iVar12 + (int)((ulong)uVar8 >> 0x20);
  if (iVar12 < iVar6) {
    do {
      if (0 < (int)uVar8) {
        do {
          local_94 = iVar5 - iVar4;
          iVar13 = iVar5 + iVar4;
          iVar1 = iVar5;
          do {
            cVar3 = get_bit(this,iVar1,iVar12);
            if (bVar2 != (bool)cVar3) {
              for (iVar10 = iVar12 - iVar4; iVar11 = local_94, iVar10 <= iVar4 + iVar12;
                  iVar10 = iVar10 + 1) {
                for (; iVar11 <= iVar13; iVar11 = iVar11 + 1) {
                  iVar7 = *(int *)param_2;
                  if (iVar7 <= iVar11) goto LAB_00103970;
                  do {
                    if (0 < param_1) goto LAB_001039f2;
                    do {
                      local_68 = CONCAT44((float)iVar10,(float)iVar11);
                      local_58 = CONCAT44((float)iVar12,(float)iVar1);
                      fVar14 = (float)Vector2::distance_squared_to(local_c0);
                      if ((float)((double)fVar14 - __LC88) <= (float)(param_1 * param_1))
                      goto LAB_00103a78;
                      iVar11 = iVar11 + 1;
                      if (iVar13 < iVar11) goto LAB_00103b41;
                      iVar7 = *(int *)param_2;
                    } while (iVar11 < iVar7);
LAB_00103970:
                  } while (((iVar7 + *(int *)(param_2 + 8) <= iVar11) ||
                           (iVar10 < *(int *)(param_2 + 4))) ||
                          (*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) <= iVar10));
                  local_68 = CONCAT44((float)iVar10,(float)iVar11);
                  local_58 = CONCAT44((float)iVar12,(float)iVar1);
                  fVar14 = (float)Vector2::distance_squared_to(local_c0);
                  if (((float)((double)fVar14 - __LC88) <= (float)(param_1 * param_1)) &&
                     (cVar3 = get_bit(this_00,iVar11,iVar10), bVar2 == (bool)cVar3)) {
LAB_00103a78:
                    set_bit(this,iVar1,iVar12,bVar2);
                    goto LAB_00103a97;
                  }
LAB_001039f2:
                }
LAB_00103b41:
              }
            }
LAB_00103a97:
            local_94 = local_94 + 1;
            iVar13 = iVar13 + 1;
            iVar1 = iVar4 + local_94;
          } while (iVar1 < iVar5 + (int)uVar8);
          iVar12 = iVar12 + 1;
        } while (iVar6 != iVar12);
        break;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar6);
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 == '\0') || (cVar3 = predelete_handler((Object *)this_00), cVar3 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(this_00,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BitMap::grow_mask(int, Rect2i const&) */

void __thiscall BitMap::grow_mask(BitMap *this,int param_1,Rect2i *param_2)

{
  if (param_1 == 0) {
    return;
  }
  grow_mask(this,param_1,param_2);
  return;
}



/* BitMap::shrink_mask(int, Rect2i const&) */

void __thiscall BitMap::shrink_mask(BitMap *this,int param_1,Rect2i *param_2)

{
  if (param_1 == 0) {
    return;
  }
  grow_mask(this,-param_1,param_2);
  return;
}



/* BitMap::resize(Vector2i const&) */

void __thiscall BitMap::resize(BitMap *this,Vector2i *param_1)

{
  int iVar1;
  int iVar2;
  BitMap *this_00;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  int local_60;
  BitMap *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)param_1 < 0) || (*(int *)(param_1 + 4) < 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("resize","scene/resources/bit_map.cpp",0x284,
                       "Condition \"p_new_size.width < 0 || p_new_size.height < 0\" is true.",0,0);
      return;
    }
    goto LAB_00103ea3;
  }
  local_48 = *(undefined8 *)(this + 0x250);
  cVar3 = Vector2i::operator==(param_1,(Vector2i *)&local_48);
  if (cVar3 == '\0') {
    local_50 = (BitMap *)0x0;
    Ref<BitMap>::instantiate<>((Ref<BitMap> *)&local_50);
    this_00 = local_50;
    create(local_50,param_1);
    iVar1 = *(int *)(this + 0x250);
    if (iVar1 == 0) {
      iVar6 = *(int *)(this + 0x254);
      if (iVar6 != 0) {
        local_60 = 0;
        iVar5 = *(int *)param_1;
LAB_00103cf9:
        iVar8 = *(int *)(param_1 + 4);
        iVar2 = iVar8;
        goto LAB_00103d00;
      }
    }
    else {
      iVar5 = *(int *)param_1;
      iVar6 = *(int *)(this + 0x254);
      local_60 = iVar5;
      if (iVar6 != 0) goto LAB_00103cf9;
      iVar2 = *(int *)(param_1 + 4);
      iVar6 = 0;
      iVar8 = 0;
LAB_00103d00:
      if ((0 < local_60) && (iVar7 = 0, 0 < iVar8)) {
        do {
          iVar9 = 0;
          do {
            bVar4 = (bool)get_bit(this,(int)((float)iVar7 * ((float)iVar1 / (float)iVar5)),
                                  (int)((float)iVar9 * ((float)iVar6 / (float)iVar2)));
            iVar10 = iVar9 + 1;
            set_bit(this_00,iVar7,iVar9,bVar4);
            iVar9 = iVar10;
          } while (iVar8 != iVar10);
          iVar7 = iVar7 + 1;
        } while (iVar7 != local_60);
      }
    }
    *(undefined4 *)(this + 0x250) = *(undefined4 *)(this_00 + 0x250);
    *(undefined4 *)(this + 0x254) = *(undefined4 *)(this_00 + 0x254);
    if (*(long *)(this + 0x248) != *(long *)(this_00 + 0x248)) {
      CowData<unsigned_char>::_ref
                ((CowData<unsigned_char> *)(this + 0x248),(CowData *)(this_00 + 0x248));
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(this_00,false);
        return;
      }
      goto LAB_00103ea3;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103ea3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BitMap::create_from_image_alpha(Ref<Image> const&, float) */

void __thiscall BitMap::create_from_image_alpha(BitMap *this,Ref *param_1,float param_2)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Image *pIVar9;
  long lVar10;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (cVar6 = Image::is_empty(), cVar6 != '\0')) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("create_from_image_alpha","scene/resources/bit_map.cpp",0x33,
                       "Condition \"p_image.is_null() || p_image->is_empty()\" is true.",0,0);
      return;
    }
    goto LAB_0010418f;
  }
  (**(code **)(**(long **)param_1 + 0x198))(&local_48,*(long **)param_1,0);
  if (local_48 == (Object *)0x0) {
    pIVar9 = (Image *)0x0;
  }
  else {
    pIVar9 = (Image *)__dynamic_cast(local_48,&Object::typeinfo,&Image::typeinfo,0);
    if (pIVar9 != (Image *)0x0) {
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        pIVar9 = (Image *)0x0;
      }
      if (local_48 == (Object *)0x0) goto LAB_00103f61;
    }
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
      (**(code **)(*(long *)local_48 + 0x140))(local_48);
      Memory::free_static(local_48,false);
    }
  }
LAB_00103f61:
  Image::convert(pIVar9,1);
  iVar7 = Image::get_format();
  if (iVar7 == 1) {
    uVar8 = Image::get_height();
    local_38 = Image::get_width();
    local_34 = uVar8;
    create(this,(Vector2i *)&local_38);
    Image::get_data();
    lVar5 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar2 = (long *)(local_40 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x248));
    dVar4 = _LC92;
    lVar3 = *(long *)(this + 0x248);
    if (0 < *(int *)(this + 0x254) * *(int *)(this + 0x250)) {
      lVar10 = 0;
      do {
        if ((double)param_2 < (double)*(byte *)(lVar5 + 1 + lVar10 * 2) / dVar4) {
          pbVar1 = (byte *)(lVar3 + ((int)lVar10 >> 3));
          *pbVar1 = *pbVar1 | (byte)(1 << ((byte)lVar10 & 7));
        }
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < *(int *)(this + 0x250) * *(int *)(this + 0x254));
    }
    cVar6 = RefCounted::unreference();
  }
  else {
    _err_print_error("create_from_image_alpha","scene/resources/bit_map.cpp",0x36,
                     "Condition \"img->get_format() != Image::FORMAT_LA8\" is true.",0,0);
    cVar6 = RefCounted::unreference();
  }
  if (cVar6 == '\0') {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    memdelete<Image>(pIVar9);
    return;
  }
LAB_0010418f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector<Vector2> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<Vector2>>::_copy_on_write(CowData<Vector<Vector2>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<Vector2> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<Vector2> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<Vector2>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* Vector<Vector<Vector2> >::push_back(Vector<Vector2>) [clone .isra.0] */

void __thiscall Vector<Vector<Vector2>>::push_back(Vector<Vector<Vector2>> *this,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector<Vector2>>::resize<false>((CowData<Vector<Vector2>> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 8));
        lVar3 = *(long *)(this + 8) + lVar2 * 0x10;
        if (*(long *)(lVar3 + 8) == *(long *)(param_2 + 8)) {
          return;
        }
        CowData<Vector2>::_ref((CowData<Vector2> *)(lVar3 + 8),(CowData *)(param_2 + 8));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* BitMap::_march_square(Rect2i const&, Vector2i const&) const */

Rect2i * BitMap::_march_square(Rect2i *param_1,Vector2i *param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  byte bVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  int *in_RCX;
  long lVar23;
  int iVar24;
  uint uVar25;
  Vector2i *in_RDX;
  ulong uVar26;
  int iVar27;
  int *piVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  int iVar36;
  uint uVar37;
  long lVar38;
  long in_FS_OFFSET;
  undefined8 uVar39;
  int local_11c;
  long local_118;
  int local_110;
  int local_10c;
  int local_100;
  int local_fc;
  int local_f8;
  int *local_f0;
  long local_a0;
  Vector<Vector<Vector2>> local_98 [8];
  long local_90;
  Vector2i local_88 [8];
  long local_80;
  HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
  local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  int local_48;
  int local_44;
  long local_40;
  
  iVar4 = *in_RCX;
  iVar5 = in_RCX[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 2;
  local_a0 = 0;
  local_90 = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  CowData<Vector<Vector2>>::resize<false>((CowData<Vector<Vector2>> *)&local_90,1);
  local_110 = 0;
  local_118 = 0;
  local_11c = 0;
  local_f8 = 0;
  local_fc = 0;
  iVar27 = iVar4;
  iVar36 = iVar5;
  do {
    iVar24 = *(int *)(in_RDX + 8);
    iVar1 = iVar36 + -1;
    iVar29 = iVar27 + -1;
    if ((iVar24 < 0) || (*(int *)(in_RDX + 0xc) < 0)) {
      uVar34 = 0;
      _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                       "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                       ,0,0);
      iVar20 = *(int *)in_RDX;
      iVar24 = *(int *)(in_RDX + 8);
      if (iVar20 <= iVar29) {
        iVar19 = *(int *)(in_RDX + 4);
        uVar34 = 0;
        if (iVar19 <= iVar1) goto LAB_001044f3;
      }
LAB_0010451d:
      if (iVar24 < 0) {
LAB_00104bd0:
        _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                         "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                         ,0,0);
        iVar20 = *(int *)in_RDX;
        iVar24 = *(int *)(in_RDX + 8);
        if (iVar20 <= iVar27) goto LAB_0010453e;
LAB_00104570:
        if ((-1 < iVar24) && (-1 < *(int *)(in_RDX + 0xc))) {
          iVar20 = *(int *)in_RDX;
          goto LAB_00104588;
        }
        _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                         "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                         ,0,0);
        iVar20 = *(int *)in_RDX;
        iVar24 = *(int *)(in_RDX + 8);
        if (iVar20 <= iVar29) goto LAB_0010458c;
        if (-1 < iVar24) goto LAB_001045c6;
        goto LAB_00104ba0;
      }
LAB_00104525:
      if (*(int *)(in_RDX + 0xc) < 0) goto LAB_00104bd0;
      iVar20 = *(int *)in_RDX;
      if (iVar20 <= iVar27) goto LAB_0010453e;
    }
    else {
      iVar20 = *(int *)in_RDX;
      if (iVar20 <= iVar29) {
        iVar19 = *(int *)(in_RDX + 4);
        if (iVar19 <= iVar1) {
LAB_001044f3:
          uVar34 = 0;
          if ((iVar29 < iVar20 + iVar24) && (iVar1 < iVar19 + *(int *)(in_RDX + 0xc))) {
            bVar17 = get_bit((BitMap *)param_2,iVar29,iVar1);
            iVar24 = *(int *)(in_RDX + 8);
            uVar34 = (ulong)bVar17;
          }
          goto LAB_0010451d;
        }
        uVar34 = 0;
        goto LAB_00104525;
      }
      uVar34 = 0;
      if (iVar20 <= iVar27) {
LAB_0010453e:
        if (((*(int *)(in_RDX + 4) <= iVar1) && (iVar27 < iVar20 + iVar24)) &&
           (iVar1 < *(int *)(in_RDX + 4) + *(int *)(in_RDX + 0xc))) {
          bVar17 = get_bit((BitMap *)param_2,iVar27,iVar1);
          iVar24 = *(int *)(in_RDX + 8);
          uVar34 = (ulong)((int)uVar34 + (uint)bVar17 * 2);
        }
        goto LAB_00104570;
      }
LAB_00104588:
      if (iVar20 <= iVar29) {
LAB_0010458c:
        if (((*(int *)(in_RDX + 4) <= iVar36) && (iVar29 < iVar20 + iVar24)) &&
           (iVar36 < *(int *)(in_RDX + 4) + *(int *)(in_RDX + 0xc))) {
          bVar17 = get_bit((BitMap *)param_2,iVar29,iVar36);
          iVar24 = *(int *)(in_RDX + 8);
          uVar34 = (ulong)((int)uVar34 + (uint)bVar17 * 4);
        }
        if (iVar24 < 0) {
LAB_00104ba0:
          _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                           "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                           ,0,0);
        }
        else {
LAB_001045c6:
          if (*(int *)(in_RDX + 0xc) < 0) goto LAB_00104ba0;
        }
        iVar20 = *(int *)in_RDX;
      }
    }
    if ((((iVar20 <= iVar27) && (*(int *)(in_RDX + 4) <= iVar36)) &&
        (iVar27 < iVar20 + *(int *)(in_RDX + 8))) &&
       (iVar36 < *(int *)(in_RDX + 4) + *(int *)(in_RDX + 0xc))) {
      bVar17 = get_bit((BitMap *)param_2,iVar27,iVar36);
      uVar34 = (ulong)((int)uVar34 + (uint)bVar17 * 8);
    }
    if ((0x8001UL >> (uVar34 & 0x3f) & 1) != 0) {
      _err_print_error("_march_square","scene/resources/bit_map.cpp",0xd4,
                       "Condition \"sv == 0 || sv == 15\" is true. Returning: Vector<Vector<Vector2>>()"
                       ,0,0);
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_00104da2;
    }
    switch(uVar34) {
    default:
      local_100 = -1;
      local_10c = 0;
      iVar36 = iVar1;
      break;
    case 2:
    case 3:
    case 7:
      local_100 = 0;
      local_10c = 1;
      iVar27 = iVar27 + 1;
      break;
    case 4:
    case 0xc:
    case 0xe:
      local_100 = 0;
      local_10c = -1;
      iVar27 = iVar29;
      break;
    case 6:
      iVar1 = iVar36;
      if (local_f8 == -1) {
        iVar29 = iVar27 + 1;
        local_100 = 0;
        local_10c = 1;
      }
      else {
        local_100 = 0;
        local_10c = -1;
      }
      goto LAB_001047bf;
    case 8:
    case 10:
    case 0xb:
      local_100 = 1;
      local_10c = 0;
      iVar36 = iVar36 + 1;
      break;
    case 9:
      iVar29 = iVar27;
      if (local_fc == 1) {
        local_100 = 1;
        local_10c = 0;
        iVar1 = iVar36 + 1;
      }
      else {
        local_100 = -1;
        local_10c = 0;
      }
LAB_001047bf:
      uVar39 = local_70._0_8_;
      local_48 = iVar27;
      local_44 = iVar36;
      if ((local_70._0_8_ != 0) && (local_50._4_4_ != 0)) {
        uVar6 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
        uVar34 = *(ulong *)(hash_table_size_primes_inv + (local_50 & 0xffffffff) * 8);
        uVar21 = (iVar27 * 0x16a88000 | (uint)(iVar27 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                 0x7f07c65;
        uVar21 = (uVar21 << 0xd | uVar21 >> 0x13) * 5 + 0xe6546b64 ^
                 (iVar36 * 0x16a88000 | (uint)(iVar36 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar21 = (uVar21 << 0xd | uVar21 >> 0x13) * 5 + 0xe6546b64;
        uVar21 = (uVar21 >> 0x10 ^ uVar21) * -0x7a143595;
        uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
        uVar32 = uVar21 ^ uVar21 >> 0x10;
        if (uVar21 == uVar21 >> 0x10) {
          uVar32 = 1;
          uVar26 = uVar34;
        }
        else {
          uVar26 = uVar32 * uVar34;
        }
        uVar33 = CONCAT44(0,uVar6);
        uVar16 = local_70._8_8_;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar33;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar26;
        lVar30 = SUB168(auVar8 * auVar12,8);
        uVar21 = *(uint *)(local_70._8_8_ + lVar30 * 4);
        uVar25 = SUB164(auVar8 * auVar12,8);
        if (uVar21 != 0) {
          uVar37 = 0;
LAB_00104920:
          if ((uVar21 != uVar32) ||
             (cVar18 = Vector2i::operator==
                                 ((Vector2i *)(*(long *)(uVar39 + lVar30 * 8) + 0x10),
                                  (Vector2i *)&local_48), cVar18 == '\0')) goto LAB_001048d8;
          lVar30 = *(long *)(uVar39 + (ulong)uVar25 * 8);
          if (lVar30 != 0) {
            local_80 = 0;
            lVar31 = (long)local_110;
            lVar23 = (long)(*(int *)(lVar30 + 0x18) + 1);
            if (local_118 == 0) {
              CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_80,0);
              CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_80);
            }
            else {
              lVar7 = *(long *)(local_118 + -8);
              lVar22 = -lVar7;
              lVar38 = lVar7;
              if (lVar23 <= lVar7) {
                lVar38 = lVar23;
              }
              if (SBORROW8(lVar23,lVar22) != lVar23 + lVar7 < 0) {
                lVar38 = lVar22;
              }
              if (lVar38 < 0) {
                lVar38 = lVar38 + lVar7;
              }
              lVar23 = lVar7;
              if (lVar31 <= lVar7) {
                lVar23 = lVar31;
              }
              if (SBORROW8(lVar31,lVar22) == lVar31 + lVar7 < 0) {
                lVar22 = lVar23;
              }
              if (lVar22 < 0) {
                lVar22 = lVar7 + lVar22;
              }
              if (lVar22 < lVar38) {
                _err_print_error("slice","./core/templates/vector.h",0xb8,
                                 "Condition \"begin > end\" is true. Returning: result",0,0);
              }
              else {
                lVar22 = lVar22 - lVar38;
                CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_80,lVar22);
                CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_80);
                if (lVar22 != 0) {
                  lVar23 = 0;
                  do {
                    *(undefined8 *)(local_80 + lVar23 * 8) =
                         *(undefined8 *)(local_118 + lVar38 * 8 + lVar23 * 8);
                    lVar23 = lVar23 + 1;
                  } while (lVar22 != lVar23);
                }
              }
            }
            Vector<Vector<Vector2>>::push_back(local_98,local_88);
            CowData<Vector2>::_unref((CowData<Vector2> *)&local_80);
            local_110 = *(int *)(lVar30 + 0x18) + 1;
            while (lVar30 != local_60._8_8_) {
              if (local_60._8_8_ == 0) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
              ::erase(local_78,(Vector2i *)(local_60._8_8_ + 0x10));
            }
            HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
            ::erase(local_78,(Vector2i *)&local_48);
            iVar27 = iVar29;
            iVar36 = iVar1;
            break;
          }
        }
      }
LAB_00104d0d:
      local_f0 = &local_48;
      HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
      ::insert(local_88,(int *)local_78,SUB81(local_f0,0));
      iVar27 = iVar29;
      iVar36 = iVar1;
    }
    if ((local_fc == local_10c) && (local_f8 == local_100)) {
      uVar39 = Vector2i::operator_cast_to_Vector2(in_RDX);
      lVar30 = (long)(local_110 + -1);
      if (local_110 + -1 < 0) {
        if (local_118 == 0) goto LAB_00104fbe;
        lVar23 = *(long *)(local_118 + -8);
      }
      else {
        if (local_118 != 0) {
          lVar23 = *(long *)(local_118 + -8);
          if (lVar23 <= lVar30) goto LAB_00104edd;
          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
          *(ulong *)(local_a0 + lVar30 * 8) =
               CONCAT44((float)iVar36 - (float)((ulong)uVar39 >> 0x20),(float)iVar27 - (float)uVar39
                       );
          goto LAB_001046d8;
        }
LAB_00104fbe:
        lVar23 = 0;
      }
LAB_00104edd:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar30,lVar23,"p_index","size()","",false,
                 false);
    }
    else {
      if (local_118 == 0) {
        lVar30 = 0;
      }
      else {
        lVar30 = *(long *)(local_118 + -8);
      }
      iVar1 = local_110 + 1;
      lVar23 = (long)iVar1;
      if (iVar1 < lVar30) {
        lVar23 = lVar30;
      }
      CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_a0,lVar23);
      uVar39 = Vector2i::operator_cast_to_Vector2(in_RDX);
      lVar30 = (long)local_110;
      local_110 = iVar1;
      if (lVar30 < 0) {
        if (local_a0 == 0) goto LAB_00104f30;
        lVar23 = *(long *)(local_a0 + -8);
      }
      else if (local_a0 == 0) {
LAB_00104f30:
        lVar23 = 0;
      }
      else {
        lVar23 = *(long *)(local_a0 + -8);
        if (lVar30 < lVar23) {
          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
          *(ulong *)(local_a0 + lVar30 * 8) =
               CONCAT44((float)iVar36 - (float)((ulong)uVar39 >> 0x20),(float)iVar27 - (float)uVar39
                       );
          goto LAB_001046d8;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar30,lVar23,"p_index","size()","",false,
                 false);
    }
LAB_001046d8:
    local_11c = local_11c + 1;
    if (*(int *)(param_2 + 0x250) * *(int *)(param_2 + 0x254) * 2 + 2 < local_11c) {
      _err_print_error("_march_square","scene/resources/bit_map.cpp",0x164,
                       "Condition \"(int)count > 2 * (width * height + 1)\" is true. Returning: Vector<Vector<Vector2>>()"
                       ,0,0);
      local_118 = local_a0;
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_00104da2;
    }
    if ((iVar27 == iVar4) && (iVar36 == iVar5)) goto LAB_00104f40;
    local_118 = local_a0;
    local_f8 = local_100;
    local_fc = local_10c;
  } while( true );
LAB_001048d8:
  uVar37 = uVar37 + 1;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (uVar25 + 1) * uVar34;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar33;
  lVar30 = SUB168(auVar9 * auVar13,8);
  uVar21 = *(uint *)(uVar16 + lVar30 * 4);
  uVar25 = SUB164(auVar9 * auVar13,8);
  if ((uVar21 == 0) ||
     (auVar10._8_8_ = 0, auVar10._0_8_ = uVar21 * uVar34, auVar14._8_8_ = 0, auVar14._0_8_ = uVar33,
     auVar11._8_8_ = 0, auVar11._0_8_ = ((uVar6 + uVar25) - SUB164(auVar10 * auVar14,8)) * uVar34,
     auVar15._8_8_ = 0, auVar15._0_8_ = uVar33, SUB164(auVar11 * auVar15,8) < uVar37))
  goto LAB_00104d0d;
  goto LAB_00104920;
LAB_00104f40:
  CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_a0,(long)local_110);
  lVar23 = local_90;
  lVar30 = local_a0;
  if (local_90 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = *(long *)(local_90 + -8);
    local_118 = local_a0;
    if (0 < lVar31) {
      CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)&local_90);
      lVar23 = local_90;
      if (*(long *)(local_90 + 8) != lVar30) {
        CowData<Vector2>::_ref((CowData<Vector2> *)(local_90 + 8),(CowData *)&local_a0);
      }
      goto LAB_00104fa9;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,0,lVar31,"p_index","size()","",false,false);
  local_118 = local_a0;
LAB_00104fa9:
  *(long *)(param_1 + 8) = lVar23;
  local_90 = 0;
LAB_00104da2:
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)&local_90);
  if (local_118 != 0) {
    LOCK();
    plVar2 = (long *)(local_118 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static((void *)(local_a0 + -0x10),false);
    }
  }
  uVar39 = local_70._0_8_;
  if ((undefined8 *)local_70._0_8_ != (undefined8 *)0x0) {
    uVar16 = local_70._8_8_;
    if ((local_50._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) != 0)) {
      piVar3 = (int *)(local_70._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) * 4);
      piVar28 = (int *)local_70._8_8_;
      puVar35 = (undefined8 *)local_70._0_8_;
      do {
        if (*piVar28 != 0) {
          *piVar28 = 0;
          Memory::free_static((void *)*puVar35,false);
          *puVar35 = 0;
        }
        piVar28 = piVar28 + 1;
        puVar35 = puVar35 + 1;
      } while (piVar28 != piVar3);
    }
    Memory::free_static((void *)uVar39,false);
    Memory::free_static((void *)uVar16,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BitMap::clip_opaque_to_polygons(Rect2i const&, float) const */

Rect2i * BitMap::clip_opaque_to_polygons(Rect2i *param_1,float param_2)

{
  long *plVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  BitMap *this;
  BitMap *this_00;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  Vector2i *in_RDX;
  undefined8 *puVar21;
  long lVar22;
  ulong *puVar23;
  uint uVar24;
  ulong uVar25;
  BitMap *in_RSI;
  uint uVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  bool bVar32;
  float fVar33;
  float fVar34;
  CowData<FillBitsStackEntry> *local_118;
  Vector2i *local_110;
  Object *local_f8;
  BitMap *local_c0 [2];
  undefined8 *local_b0;
  Rect2i local_a8 [8];
  long local_a0 [2];
  undefined8 *local_90;
  long local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_60 = *(undefined8 *)(in_RSI + 0x250);
  local_58 = *(undefined8 *)in_RDX;
  uVar14 = *(undefined8 *)(in_RDX + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  if ((int)(*(uint *)(in_RSI + 0x250) | *(uint *)(in_RSI + 0x254)) < 0) {
LAB_00105ddd:
    uStack_50 = uVar14;
    _err_print_error("intersects","./core/math/rect2i.h",0x38,
                     "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                     ,0,0);
    uVar14 = uStack_50;
  }
  else {
    uStack_50._0_4_ = (uint)uVar14;
    local_68._0_4_ = 0;
    uStack_50._4_4_ = (uint)((ulong)uVar14 >> 0x20);
    if ((int)((uint)uStack_50 | uStack_50._4_4_) < 0) goto LAB_00105ddd;
  }
  uStack_50 = uVar14;
  iVar11 = (uint)uStack_50 + (int)local_58;
  if (((int)local_68 < iVar11) && ((int)local_58 < (int)local_60 + (int)local_68)) {
    if (((int)(uStack_50._4_4_ + (int)local_58._4_4_) <= local_68._4_4_) ||
       (local_60._4_4_ + local_68._4_4_ <= (int)local_58._4_4_)) goto LAB_001051f4;
    iVar11 = local_68._4_4_;
    if (local_68._4_4_ < *(int *)(in_RDX + 4)) {
      iVar11 = *(int *)(in_RDX + 4);
    }
    iVar27 = *(int *)in_RDX;
    if (*(int *)in_RDX < (int)local_68) {
      iVar27 = (int)local_68;
    }
    local_58 = CONCAT44(iVar11,iVar27);
    uVar13 = Vector2i::operator+(in_RDX,in_RDX + 8);
    uVar14 = Vector2i::operator+((Vector2i *)&local_68,(Vector2i *)&local_60);
    iVar11 = (int)((ulong)uVar14 >> 0x20);
    iVar27 = (int)((ulong)uVar13 >> 0x20);
    if (iVar27 < iVar11) {
      iVar11 = iVar27;
    }
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    local_78 = CONCAT44(iVar11,(int)uVar14);
    local_70 = Vector2i::operator-((Vector2i *)&local_78,(Vector2i *)&local_58);
    local_78 = local_58;
    uStack_50 = local_70;
  }
  else {
LAB_001051f4:
    local_78 = 0;
    local_70 = 0;
  }
  local_110 = (Vector2i *)&local_58;
  local_c0[0] = (BitMap *)0x0;
  Ref<BitMap>::instantiate<>((Ref<BitMap> *)local_c0);
  this = local_c0[0];
  local_58 = *(undefined8 *)(in_RSI + 0x250);
  local_f8 = (Object *)local_c0[0];
  create(local_c0[0],local_110);
  *(undefined8 *)(param_1 + 8) = 0;
  if (0 < local_70._4_4_) {
    uVar24 = (uint)local_78;
    uVar28 = local_78._4_4_;
    uVar19 = local_78._4_4_;
LAB_0010527d:
    if (0 < (int)local_70) {
LAB_001052c0:
      cVar9 = get_bit(this,uVar24,uVar28);
      if ((cVar9 == '\0') && (cVar9 = get_bit(in_RSI,uVar24,uVar28), cVar9 != '\0')) {
        local_80 = (undefined8 *)0x0;
        puVar15 = (undefined8 *)0x0;
        uVar25 = (ulong)uVar28;
        uVar19 = uVar24;
        iVar11 = 0;
LAB_00105316:
        uVar31 = (ulong)uVar19;
        uVar26 = uVar19 - 1;
        uVar20 = (int)uVar25 - 1;
        iVar27 = uVar19 + 1;
        uVar30 = uVar25;
        cVar10 = '\0';
LAB_00105325:
        do {
          if ((int)uVar26 <= iVar27) {
            iVar4 = (int)uVar30;
            uVar19 = uVar26;
LAB_00105350:
            if (iVar4 + 1 < (int)uVar20) goto LAB_001053e6;
            uVar7 = iVar4 - 1;
            uVar5 = uVar20;
            if (cVar10 != '\0') goto joined_r0x0010536e;
            while( true ) {
              this_00 = local_c0[0];
              uVar25 = (ulong)uVar5;
              uVar7 = uVar20;
              if ((((((int)(uint)local_78 <= (int)uVar19) &&
                    ((int)uVar19 < (int)((uint)local_78 + (int)local_70))) &&
                   ((int)local_78._4_4_ <= (int)uVar5)) &&
                  (((int)uVar5 < (int)(local_78._4_4_ + local_70._4_4_) &&
                   (cVar10 = get_bit(local_c0[0],uVar19,uVar5), cVar10 == '\0')))) &&
                 (cVar10 = get_bit(in_RSI,uVar19,uVar5), cVar10 != '\0')) break;
joined_r0x0010536e:
              uVar20 = uVar7;
              bVar32 = iVar4 < (int)uVar5;
              uVar5 = uVar5 + 1;
              if (bVar32) goto LAB_001053e0;
            }
            set_bit(this_00,uVar19,uVar5,true);
            puVar21 = local_80;
            iVar27 = iVar11 + 1;
            lVar29 = (long)iVar27;
            if (puVar15 != (undefined8 *)0x0) {
              lVar22 = puVar15[-1];
              lVar18 = lVar29;
              if (lVar29 <= lVar22) {
                lVar18 = lVar22;
              }
              if (lVar18 < 0) {
                _err_print_error("resize","./core/templates/cowdata.h",0x157,
                                 "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                                 ,0);
                if (-1 < iVar11) goto LAB_00105599;
                lVar22 = puVar15[-1];
                goto LAB_00105a30;
              }
              if (lVar29 <= lVar22) {
                if (-1 < iVar11) goto LAB_00105599;
                goto LAB_00105a30;
              }
              if (lVar18 == 0) {
                LOCK();
                plVar1 = puVar15 + -2;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_80 = (undefined8 *)0x0;
                  Memory::free_static(puVar21 + -2,false);
                }
                else {
                  local_80 = (undefined8 *)0x0;
                }
                lVar22 = 0;
                puVar15 = (undefined8 *)0x0;
                goto LAB_00105a30;
              }
              CowData<FillBitsStackEntry>::_copy_on_write((CowData<FillBitsStackEntry> *)&local_80);
              lVar29 = lVar18;
              if (lVar22 * 0x10 == 0) goto LAB_0010560a;
              uVar17 = lVar22 * 0x10 - 1;
              uVar30 = lVar18 * 0x10 - 1;
              uVar30 = uVar30 >> 1 | uVar30;
              uVar30 = uVar30 >> 2 | uVar30;
              uVar30 = uVar30 >> 4 | uVar30;
              uVar30 = uVar30 >> 8 | uVar30;
              uVar30 = uVar30 >> 0x10 | uVar30;
              uVar30 = uVar30 >> 0x20 | uVar30;
              lVar16 = uVar30 + 1;
              uVar17 = uVar17 >> 1 | uVar17;
              uVar17 = uVar17 >> 2 | uVar17;
              uVar17 = uVar17 >> 4 | uVar17;
              uVar17 = uVar17 >> 8 | uVar17;
              uVar17 = uVar17 >> 0x10 | uVar17;
              uVar17 = uVar17 | uVar17 >> 0x20;
              if (lVar22 < lVar18) {
                if (uVar17 != uVar30) goto LAB_0010565d;
                goto LAB_0010553f;
              }
              if (uVar17 != uVar30) goto LAB_00105a76;
LAB_00105a00:
              if (local_80 == (undefined8 *)0x0) {
                _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              local_80[-1] = lVar29;
              goto joined_r0x00105a1f;
            }
            if (iVar27 < 1) {
              lVar22 = 0;
              goto LAB_00105a30;
            }
            lVar22 = 0;
            CowData<FillBitsStackEntry>::_copy_on_write((CowData<FillBitsStackEntry> *)&local_80);
LAB_0010560a:
            uVar30 = lVar29 * 0x10 - 1;
            uVar30 = uVar30 >> 1 | uVar30;
            uVar30 = uVar30 | uVar30 >> 2;
            uVar30 = uVar30 >> 4 | uVar30;
            uVar30 = uVar30 | uVar30 >> 8;
            uVar30 = uVar30 | uVar30 >> 0x10;
            lVar16 = (uVar30 | uVar30 >> 0x20) + 1;
            if (lVar29 <= lVar22) {
LAB_00105a76:
              local_118 = (CowData<FillBitsStackEntry> *)&local_80;
              iVar12 = CowData<FillBitsStackEntry>::_realloc(local_118,lVar16);
              if (iVar12 != 0) goto LAB_00105a87;
              goto LAB_00105a00;
            }
LAB_0010565d:
            if (lVar22 == 0) {
              puVar15 = (undefined8 *)Memory::alloc_static(lVar16 + 0x10,false);
              if (puVar15 == (undefined8 *)0x0) {
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0);
LAB_00105a87:
                puVar15 = local_80;
                if (iVar11 < 0) {
                  if (local_80 != (undefined8 *)0x0) goto LAB_00105a25;
                }
                else if (local_80 != (undefined8 *)0x0) goto LAB_00105599;
                lVar22 = 0;
                goto LAB_00105a30;
              }
              local_80 = puVar15 + 2;
              *puVar15 = 1;
              puVar15[1] = 0;
              lVar22 = 0;
            }
            else {
              iVar12 = CowData<FillBitsStackEntry>::_realloc
                                 ((CowData<FillBitsStackEntry> *)&local_80,lVar16);
              if (iVar12 != 0) goto LAB_00105a87;
LAB_0010553f:
              if (local_80 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              lVar22 = local_80[-1];
              if (lVar29 <= lVar22) goto LAB_00105585;
            }
            puVar15 = local_80 + lVar22 * 2;
            do {
              *puVar15 = 0;
              puVar21 = puVar15 + 2;
              puVar15[1] = 0;
              puVar15 = puVar21;
            } while (local_80 + lVar29 * 2 != puVar21);
LAB_00105585:
            local_80[-1] = lVar29;
joined_r0x00105a1f:
            puVar15 = local_80;
            if (-1 < iVar11) goto LAB_00105599;
LAB_00105a25:
            lVar22 = local_80[-1];
            puVar15 = local_80;
            goto LAB_00105a30;
          }
LAB_001056bb:
          if (iVar11 != 0) {
            iVar11 = iVar11 + -1;
            lVar18 = (long)iVar11;
            if (iVar11 < 0) {
              if (puVar15 == (undefined8 *)0x0) goto LAB_00105daf;
            }
            else {
              if (puVar15 == (undefined8 *)0x0) goto LAB_00105daf;
              if (lVar18 < (long)puVar15[-1]) {
                puVar23 = puVar15 + lVar18 * 2;
                uVar25 = *puVar23;
                uVar26 = (uint)puVar23[1];
                uVar20 = *(uint *)((long)puVar23 + 0xc);
                uVar31 = uVar25 & 0xffffffff;
                uVar30 = uVar25 >> 0x20;
                iVar27 = (int)uVar25 + 1;
                cVar10 = cVar9;
                goto LAB_00105325;
              }
            }
            lVar16 = puVar15[-1];
            goto LAB_00105d00;
          }
          if (cVar10 == '\0') {
            if (puVar15 != (undefined8 *)0x0) {
              LOCK();
              plVar1 = puVar15 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_80 + -2,false);
              }
            }
            local_58 = CONCAT44(uVar28,uVar24);
            _march_square(local_a8,(Vector2i *)in_RSI);
            CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)local_a0);
            lVar29 = local_a0[0];
            CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)local_a0);
            uVar14 = local_70;
            lVar22 = local_a0[0];
            if (local_a0[0] != 0) {
              lVar22 = local_a0[0] + *(long *)(local_a0[0] + -8) * 0x10;
            }
            goto joined_r0x00105758;
          }
        } while( true );
      }
      goto LAB_001052a5;
    }
    goto LAB_00105988;
  }
  goto LAB_00105e7b;
LAB_00105599:
  lVar22 = puVar15[-1];
  if (iVar11 < lVar22) {
    CowData<FillBitsStackEntry>::_copy_on_write((CowData<FillBitsStackEntry> *)&local_80);
    local_80[(long)iVar11 * 2] = CONCAT44(iVar4,(int)uVar31);
    (local_80 + (long)iVar11 * 2)[1] = CONCAT44(uVar5,uVar19);
    puVar15 = local_80;
    iVar11 = iVar27;
  }
  else {
LAB_00105a30:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,(long)iVar11,lVar22,"p_index","size()","",
               false,false);
    iVar11 = iVar27;
  }
  goto LAB_00105316;
LAB_001053e0:
  cVar10 = '\0';
LAB_001053e6:
  bVar32 = (int)uVar31 < (int)uVar19;
  uVar19 = uVar19 + 1;
  if (bVar32) goto LAB_001056bb;
  goto LAB_00105350;
joined_r0x00105758:
  local_70 = uVar14;
  if (lVar29 == lVar22) goto LAB_0010591a;
  local_b0 = (undefined8 *)0x0;
  if (*(long *)(lVar29 + 8) == 0) {
LAB_00105e15:
    _err_print_error("reduce","scene/resources/bit_map.cpp",0x1ad,
                     "Condition \"size < 3\" is true. Returning: Vector<Vector2>()");
LAB_00105c58:
    if (local_b0 != (undefined8 *)0x0) goto LAB_0010586b;
LAB_00105c69:
    puVar15 = local_b0;
    cVar9 = is_print_verbose_enabled();
    if (cVar9 != '\0') goto LAB_00105c76;
  }
  else {
    plVar1 = (long *)(*(long *)(lVar29 + 8) + -0x10);
    do {
      lVar18 = *plVar1;
      if (lVar18 == 0) goto LAB_001057e7;
      LOCK();
      lVar16 = *plVar1;
      bVar32 = lVar18 == lVar16;
      if (bVar32) {
        *plVar1 = lVar18 + 1;
        lVar16 = lVar18;
      }
      UNLOCK();
    } while (!bVar32);
    if (lVar16 != -1) {
      local_b0 = *(undefined8 **)(lVar29 + 8);
    }
LAB_001057e7:
    puVar15 = local_b0;
    if (local_b0 == (undefined8 *)0x0) goto LAB_00105e15;
    if (2 < (int)local_b0[-1]) {
      puVar21 = puVar15;
      if ((int)local_b0[-1] < 9) {
        local_90 = (undefined8 *)0x0;
        CowData<Vector2>::_ref((CowData<Vector2> *)&local_90,(CowData *)&local_b0);
        puVar8 = local_90;
      }
      else {
        local_70._4_4_ = (int)((ulong)uVar14 >> 0x20);
        local_70._0_4_ = (int)uVar14;
        fVar34 = 0.0;
        if (0.0 <= param_2) {
          if ((int)local_70 < local_70._4_4_) {
            local_70._4_4_ = (int)local_70;
          }
          fVar34 = (float)local_70._4_4_ * __LC103;
          if (param_2 <= (float)local_70._4_4_ * __LC103) {
            fVar34 = param_2;
          }
        }
        rdp((Vector *)&local_88,fVar34);
        puVar8 = local_80;
        if (local_80 == (undefined8 *)0x0) {
          lVar18 = -1;
LAB_00105daf:
          lVar16 = 0;
LAB_00105d00:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar18,lVar16,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar16 = local_80[-1];
        lVar18 = lVar16 + -1;
        if (lVar18 < 0) goto LAB_00105d00;
        uVar14 = local_80[lVar18];
        local_58._4_4_ = (float)((ulong)uVar14 >> 0x20);
        bVar32 = local_58._4_4_ != *(float *)((long)local_80 + 4);
        bVar2 = *(float *)((long)local_80 + 4) <= local_58._4_4_;
        local_58 = uVar14;
        if ((bVar2 && bVar32) &&
           (fVar33 = (float)Vector2::distance_to(local_110), puVar21 = puVar8,
           fVar33 < fVar34 * __LC103)) {
          uVar6 = local_58._4_4_;
          if ((long)puVar8[-1] < 1) {
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,0,puVar8[-1],"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_80);
          *(undefined4 *)((long)local_80 + 4) = uVar6;
          CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_80,local_80[-1] + -1);
          puVar21 = local_80;
          puVar8 = local_80;
        }
      }
      local_90 = puVar8;
      if (local_90 != puVar15) goto LAB_00105836;
      LOCK();
      plVar1 = puVar21 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(local_90 + -2,false);
      }
      goto LAB_00105c58;
    }
    _err_print_error("reduce","scene/resources/bit_map.cpp",0x1ad,
                     "Condition \"size < 3\" is true. Returning: Vector<Vector2>()");
    local_90 = (undefined8 *)0x0;
LAB_00105836:
    LOCK();
    plVar1 = puVar15 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_b0 + -2,false);
    }
    local_b0 = local_90;
    if (local_90 == (undefined8 *)0x0) goto LAB_00105c69;
LAB_0010586b:
    puVar15 = local_b0;
    if ((long)local_b0[-1] < 3) {
      cVar9 = is_print_verbose_enabled();
      if (cVar9 != '\0') {
LAB_00105c76:
        Variant::Variant((Variant *)local_110,"Invalid polygon, skipped");
        stringify_variants((Variant *)&local_88);
        __print_line((String *)&local_88);
        lVar18 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          puVar15 = local_b0;
          if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void *)(lVar18 + -0x10),false);
            puVar15 = local_b0;
          }
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if (puVar15 == (undefined8 *)0x0) goto LAB_00105790;
      }
      LOCK();
      plVar1 = puVar15 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) goto LAB_0010577d;
    }
    else {
      local_80 = (undefined8 *)0x0;
      plVar1 = local_b0 + -2;
      do {
        lVar18 = *plVar1;
        if (lVar18 == 0) goto LAB_001058b9;
        LOCK();
        lVar16 = *plVar1;
        bVar32 = lVar18 == lVar16;
        if (bVar32) {
          *plVar1 = lVar18 + 1;
          lVar16 = lVar18;
        }
        UNLOCK();
      } while (!bVar32);
      if (lVar16 != -1) {
        local_80 = local_b0;
      }
LAB_001058b9:
      puVar15 = local_80;
      Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)param_1);
      if (puVar15 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = puVar15 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_80 + -2,false);
        }
      }
      if (local_b0 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_b0 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) {
          lVar29 = lVar29 + 0x10;
          uVar14 = local_70;
          goto joined_r0x00105758;
        }
LAB_0010577d:
        Memory::free_static(local_b0 + -2,false);
      }
    }
  }
LAB_00105790:
  lVar29 = lVar29 + 0x10;
  uVar14 = local_70;
  goto joined_r0x00105758;
LAB_0010591a:
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)local_a0);
LAB_001052a5:
  uVar24 = uVar24 + 1;
  if ((int)((int)local_70 + (uint)local_78) <= (int)uVar24) goto LAB_0010597e;
  goto LAB_001052c0;
LAB_0010597e:
  uVar24 = (uint)local_78;
  uVar19 = local_78._4_4_;
LAB_00105988:
  uVar28 = uVar28 + 1;
  if ((int)(local_70._4_4_ + uVar19) <= (int)uVar28) goto code_r0x0010599e;
  goto LAB_0010527d;
code_r0x0010599e:
  local_f8 = (Object *)local_c0[0];
  if (local_c0[0] == (BitMap *)0x0) goto LAB_001059b1;
LAB_00105e7b:
  cVar9 = RefCounted::unreference();
  if ((cVar9 != '\0') && (cVar9 = predelete_handler(local_f8), cVar9 != '\0')) {
    (**(code **)(*(long *)local_f8 + 0x140))(local_f8);
    Memory::free_static(local_f8,false);
  }
LAB_001059b1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* BitMap::_opaque_to_polygons_bind(Rect2i const&, float) const */

Rect2i * BitMap::_opaque_to_polygons_bind(Rect2i *param_1,float param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  Variant *pVVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long in_FS_OFFSET;
  Rect2i local_78 [8];
  long local_70;
  long local_68;
  long local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  clip_opaque_to_polygons(local_78,param_2);
  Array::Array((Array *)param_1);
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = 0;
  local_50 = (undefined1  [16])0x0;
  uVar8 = (uint)param_1;
  Array::set_typed(uVar8,(StringName *)0x23,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_70 == 0) {
    Array::resize(uVar8);
  }
  else {
    Array::resize(uVar8);
    if (0 < *(long *)(local_70 + -8)) {
      plVar6 = (long *)(local_70 + 8);
      lVar5 = 0;
      do {
        local_60 = 0;
        if (*plVar6 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(*plVar6 + -8);
        }
        CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_60,lVar7);
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_60);
        lVar7 = *plVar6;
        if ((lVar7 != 0) && (lVar2 = *(long *)(lVar7 + -8), 0 < lVar2)) {
          lVar3 = 0;
          do {
            *(undefined8 *)(local_60 + lVar3) = *(undefined8 *)(lVar7 + lVar3);
            lVar3 = lVar3 + 8;
          } while (lVar2 << 3 != lVar3);
        }
        Variant::Variant((Variant *)local_58,(Vector *)&local_68);
        pVVar4 = (Variant *)Array::operator[](uVar8);
        if (pVVar4 == (Variant *)local_58) {
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar4 = 0;
          *(int *)pVVar4 = local_58[0];
          *(undefined8 *)(pVVar4 + 8) = local_50._0_8_;
          *(undefined8 *)(pVVar4 + 0x10) = local_50._8_8_;
        }
        lVar7 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        lVar5 = lVar5 + 1;
        plVar6 = plVar6 + 2;
      } while (lVar5 < *(long *)(local_70 + -8));
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* BitMap::is_class_ptr(void*) const */

uint __thiscall BitMap::is_class_ptr(BitMap *this,void *param_1)

{
  return (uint)CONCAT71(0x1153,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1153,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1153,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1153,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* BitMap::_getv(StringName const&, Variant&) const */

undefined8 BitMap::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* BitMap::_setv(StringName const&, Variant const&) */

undefined8 BitMap::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* BitMap::_validate_propertyv(PropertyInfo&) const */

void BitMap::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* BitMap::_property_can_revertv(StringName const&) const */

undefined8 BitMap::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* BitMap::_property_get_revertv(StringName const&, Variant&) const */

undefined8 BitMap::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* BitMap::_notificationv(int, bool) */

void BitMap::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >, Rect2i const&, float>::_gen_argument_type(int) const
    */

char __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float>::_gen_argument_type
          (MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x1c';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 5U) + 3;
  }
  return cVar1;
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >, Rect2i const&, float>::get_argument_meta(int) const
    */

char __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float>::get_argument_meta
          (MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float> *this,int param_1)

{
  return (param_1 == 1) * '\t';
}



/* MethodBindTRC<Ref<Image>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Image>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Image>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Image>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<int, Rect2i const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Rect2i_const&>::_gen_argument_type(MethodBindT<int,Rect2i_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffffa) + 8;
  }
  return iVar1;
}



/* MethodBindT<int, Rect2i const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Rect2i_const&>::get_argument_meta(MethodBindT<int,Rect2i_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Dictionary>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Dictionary>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTRC<Dictionary>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Dictionary>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Dictionary const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Dictionary_const&>::_gen_argument_type(MethodBindT<Dictionary_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1b;
}



/* MethodBindT<Dictionary const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Dictionary_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector2i>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector2i>::_gen_argument_type(int param_1)

{
  return 6;
}



/* MethodBindTRC<Vector2i>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector2i>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindT<Rect2i const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Rect2i_const&,bool>::_gen_argument_type
          (MethodBindT<Rect2i_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 7U) + 1;
  }
  return cVar1;
}



/* MethodBindT<Rect2i const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<Rect2i_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,int,int>::_gen_argument_type(MethodBindTRC<bool,int,int> *this,int param_1)

{
  return ((uint)param_1 < 2) + '\x01';
}



/* MethodBindTRC<bool, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<bool,int,int>::get_argument_meta(MethodBindTRC<bool,int,int> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* MethodBindTRC<bool, Vector2i const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,Vector2i_const&>::_gen_argument_type
          (MethodBindTRC<bool,Vector2i_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 5U) + 1;
}



/* MethodBindTRC<bool, Vector2i const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,Vector2i_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<int, int, bool>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,int,bool>::get_argument_meta(MethodBindT<int,int,bool> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* MethodBindT<Vector2i const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Vector2i_const&,bool>::_gen_argument_type
          (MethodBindT<Vector2i_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 5U) + 1;
  }
  return cVar1;
}



/* MethodBindT<Vector2i const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector2i_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Image> const&, float>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Ref<Image>const&,float>::_gen_argument_type
          (MethodBindT<Ref<Image>const&,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x15U) + 3;
  }
  return cVar1;
}



/* MethodBindT<Ref<Image> const&, float>::get_argument_meta(int) const */

char __thiscall
MethodBindT<Ref<Image>const&,float>::get_argument_meta
          (MethodBindT<Ref<Image>const&,float> *this,int param_1)

{
  return (param_1 == 1) * '\t';
}



/* MethodBindT<Vector2i const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector2i_const&>::_gen_argument_type(MethodBindT<Vector2i_const&> *this,int param_1)

{
  return -(param_1 == 0) & 6;
}



/* MethodBindT<Vector2i const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector2i_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Image> const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Image>const&,float>::~MethodBindT(MethodBindT<Ref<Image>const&,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114ec0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Image> const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Image>const&,float>::~MethodBindT(MethodBindT<Ref<Image>const&,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114ec0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2i const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector2i_const&,bool>::~MethodBindT(MethodBindT<Vector2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114f20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2i const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector2i_const&,bool>::~MethodBindT(MethodBindT<Vector2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114f20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,int,bool>::~MethodBindT(MethodBindT<int,int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114f80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,int,bool>::~MethodBindT(MethodBindT<int,int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114f80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114fe0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114fe0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int,int>::~MethodBindTRC(MethodBindTRC<bool,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115040;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int,int>::~MethodBindTRC(MethodBindTRC<bool,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115040;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Rect2i const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<Rect2i_const&,bool>::~MethodBindT(MethodBindT<Rect2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001150a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Rect2i const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<Rect2i_const&,bool>::~MethodBindT(MethodBindT<Rect2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001150a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115100;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115100;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2i>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2i>::~MethodBindTRC(MethodBindTRC<Vector2i> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115160;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2i>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2i>::~MethodBindTRC(MethodBindTRC<Vector2i> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115160;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2i_const&>::~MethodBindT(MethodBindT<Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114e60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2i_const&>::~MethodBindT(MethodBindT<Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114e60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001151c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001151c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115220;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115220;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Rect2i const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Rect2i_const&>::~MethodBindT(MethodBindT<int,Rect2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115280;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Rect2i const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Rect2i_const&>::~MethodBindT(MethodBindT<int,Rect2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115280;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Image>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Image>>::~MethodBindTRC(MethodBindTRC<Ref<Image>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001152e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Image>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Image>>::~MethodBindTRC(MethodBindTRC<Ref<Image>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001152e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >, Rect2i const&, float>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float>::~MethodBindTRC
          (MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115340;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >, Rect2i const&, float>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float>::~MethodBindTRC
          (MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115340;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, int, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<int,int,bool>::_gen_argument_type(MethodBindT<int,int,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 3) {
    cVar1 = (param_1 != 2) + '\x01';
  }
  return cVar1;
}



/* CowData<FillBitsStackEntry>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<FillBitsStackEntry>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* BitMap::_bind_methods() [clone .cold] */

void BitMap::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BitMap::create(Vector2i const&) [clone .cold] */

void BitMap::create(Vector2i *param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00106c86(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<Vector2> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<Vector2>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* BitMap::clip_opaque_to_polygons(Rect2i const&, float) const [clone .cold] */

void BitMap::clip_opaque_to_polygons(Rect2i *param_1,float param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* BitMap::_get_class_namev() const */

undefined8 * BitMap::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00106cf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106cf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"BitMap");
      goto LAB_00106d5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"BitMap");
LAB_00106d5e:
  return &_get_class_namev()::_class_name_static;
}



/* BitMap::get_save_class() const */

BitMap * __thiscall BitMap::get_save_class(BitMap *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BitMap::~BitMap() */

void __thiscall BitMap::~BitMap(BitMap *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00114c88;
  if (*(long *)(this + 0x248) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x248) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x248);
      *(undefined8 *)(this + 0x248) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Vector2i::operator-;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* BitMap::~BitMap() */

void __thiscall BitMap::~BitMap(BitMap *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00114c88;
  if (*(long *)(this + 0x248) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x248) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x248);
      *(undefined8 *)(this + 0x248) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,600);
  return;
}



/* BitMap::get_class() const */

void BitMap::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2i>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2i>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 6;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001075dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001075dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010775c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010775c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Dictionary>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1b;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001078dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001078dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Image>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Image>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Image";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_001079e0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_001079e0:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00107b3f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00107b3f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00107bf3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00107ca3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00107ca3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00107bf3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00107bf3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BitMap::is_class(String const&) const */

undefined8 __thiscall BitMap::is_class(BitMap *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00107dcf;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00107dcf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00107e83;
  }
  cVar6 = String::operator==(param_1,"BitMap");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00107f43;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00107f43:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00107e83;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00107fec;
    }
  }
LAB_00107e83:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107fec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00108168:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108168;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00108186;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00108186:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00108568:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108568;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108585;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108585:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BitMap::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BitMap::_get_property_listv(BitMap *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BitMap";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BitMap";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001089b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001089b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001089d5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001089d5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BitMap",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Vector2i::operator-;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Vector2i, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, int> > >::insert(Vector2i const&, int const&,
   bool) */

Vector2i *
HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
::insert(Vector2i *param_1,int *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  void *pvVar6;
  void *__s;
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
  undefined1 (*pauVar31) [16];
  char cVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  undefined8 uVar36;
  void *__s_00;
  undefined1 (*pauVar37) [16];
  void *pvVar38;
  undefined4 *in_RCX;
  int iVar39;
  undefined7 in_register_00000011;
  Vector2i *pVVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  undefined8 uVar46;
  char in_R8B;
  uint uVar47;
  long lVar48;
  uint uVar49;
  undefined1 (*pauVar50) [16];
  uint uVar51;
  long in_FS_OFFSET;
  uint local_c8;
  
  pVVar40 = (Vector2i *)CONCAT71(in_register_00000011,param_3);
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar34 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  if (*(long *)(param_2 + 2) == 0) {
    uVar45 = (ulong)uVar34;
    uVar35 = uVar45 * 4;
    uVar41 = uVar45 * 8;
    uVar36 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(param_2 + 4) = uVar36;
    pvVar38 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(param_2 + 2) = pvVar38;
    if (uVar34 != 0) {
      pvVar6 = *(void **)(param_2 + 4);
      if ((pvVar6 < (void *)((long)pvVar38 + uVar41)) && (pvVar38 < (void *)((long)pvVar6 + uVar35))
         ) {
        uVar35 = 0;
        do {
          *(undefined4 *)((long)pvVar6 + uVar35 * 4) = 0;
          *(undefined8 *)((long)pvVar38 + uVar35 * 8) = 0;
          uVar35 = uVar35 + 1;
        } while (uVar45 != uVar35);
        iVar39 = param_2[0xb];
      }
      else {
        memset(pvVar6,0,uVar35);
        memset(pvVar38,0,uVar41);
        iVar39 = param_2[0xb];
      }
      goto LAB_00108e0b;
    }
    iVar39 = param_2[0xb];
    if (pvVar38 != (void *)0x0) goto LAB_00108e0b;
  }
  else {
    iVar39 = param_2[0xb];
LAB_00108e0b:
    if (iVar39 != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
      uVar35 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
      uVar33 = (*(int *)pVVar40 * 0x16a88000 | (uint)(*(int *)pVVar40 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ 0x7f07c65;
      uVar33 = (uVar33 << 0xd | uVar33 >> 0x13) * 5 + 0xe6546b64 ^
               (*(int *)(pVVar40 + 4) * 0x16a88000 |
               (uint)(*(int *)(pVVar40 + 4) * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar33 = (uVar33 << 0xd | uVar33 >> 0x13) * 5 + 0xe6546b64;
      uVar33 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
      uVar33 = (uVar33 ^ uVar33 >> 0xd) * -0x3d4d51cb;
      uVar51 = uVar33 ^ uVar33 >> 0x10;
      if (uVar33 == uVar33 >> 0x10) {
        uVar51 = 1;
        uVar41 = uVar35;
      }
      else {
        uVar41 = uVar51 * uVar35;
      }
      uVar45 = CONCAT44(0,uVar3);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar45;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar41;
      lVar42 = SUB168(auVar7 * auVar19,8);
      lVar48 = *(long *)(param_2 + 4);
      uVar47 = SUB164(auVar7 * auVar19,8);
      uVar33 = *(uint *)(lVar48 + lVar42 * 4);
      if (uVar33 != 0) {
        uVar49 = 0;
        do {
          if (uVar51 == uVar33) {
            cVar32 = Vector2i::operator==
                               ((Vector2i *)(*(long *)(*(long *)(param_2 + 2) + lVar42 * 8) + 0x10),
                                pVVar40);
            if (cVar32 != '\0') {
              pauVar37 = *(undefined1 (**) [16])(*(long *)(param_2 + 2) + (ulong)uVar47 * 8);
              *(undefined4 *)(pauVar37[1] + 8) = *in_RCX;
              goto LAB_00109361;
            }
            lVar48 = *(long *)(param_2 + 4);
          }
          uVar49 = uVar49 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (uVar47 + 1) * uVar35;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar45;
          lVar42 = SUB168(auVar8 * auVar20,8);
          uVar33 = *(uint *)(lVar48 + lVar42 * 4);
          uVar47 = SUB164(auVar8 * auVar20,8);
        } while ((uVar33 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * uVar35, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar45, auVar10._8_8_ = 0,
                auVar10._0_8_ = ((uVar3 + uVar47) - SUB164(auVar9 * auVar21,8)) * uVar35,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar45, uVar49 <= SUB164(auVar10 * auVar22,8)));
        iVar39 = param_2[0xb];
      }
    }
  }
  if ((float)uVar34 * __LC33 < (float)(iVar39 + 1)) {
    uVar34 = param_2[10];
    if (uVar34 == 0x1c) {
      pauVar37 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00109361;
    }
    uVar35 = (ulong)(uVar34 + 1);
    uVar33 = *(uint *)(hash_table_size_primes + (ulong)uVar34 * 4);
    param_2[0xb] = 0;
    if (uVar34 + 1 < 2) {
      uVar35 = 2;
    }
    uVar34 = *(uint *)(hash_table_size_primes + uVar35 * 4);
    param_2[10] = (int)uVar35;
    pvVar38 = *(void **)(param_2 + 2);
    uVar45 = (ulong)uVar34;
    uVar35 = uVar45 * 4;
    pvVar6 = *(void **)(param_2 + 4);
    uVar36 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(param_2 + 4) = uVar36;
    uVar41 = uVar45 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar34 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)((long)__s_00 + uVar41)) && (__s_00 < (void *)((long)__s + uVar35))) {
        uVar35 = 0;
        do {
          *(undefined4 *)((long)__s + uVar35 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar35 * 8) = 0;
          uVar35 = uVar35 + 1;
        } while (uVar45 != uVar35);
      }
      else {
        memset(__s,0,uVar35);
        memset(__s_00,0,uVar41);
      }
    }
    if (uVar33 != 0) {
      uVar35 = 0;
      do {
        uVar34 = *(uint *)((long)pvVar6 + uVar35 * 4);
        if (uVar34 != 0) {
          uVar47 = 0;
          lVar48 = *(long *)(param_2 + 4);
          uVar3 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
          uVar41 = CONCAT44(0,uVar3);
          lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar34 * lVar42;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar41;
          lVar43 = SUB168(auVar11 * auVar23,8);
          puVar1 = (uint *)(lVar48 + lVar43 * 4);
          iVar39 = SUB164(auVar11 * auVar23,8);
          uVar51 = *puVar1;
          uVar36 = *(undefined8 *)((long)pvVar38 + uVar35 * 8);
          while (uVar51 != 0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar51 * lVar42;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar41;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)((uVar3 + iVar39) - SUB164(auVar12 * auVar24,8)) * lVar42;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar41;
            local_c8 = SUB164(auVar13 * auVar25,8);
            uVar46 = uVar36;
            if (local_c8 < uVar47) {
              *puVar1 = uVar34;
              puVar2 = (undefined8 *)((long)__s_00 + lVar43 * 8);
              uVar46 = *puVar2;
              *puVar2 = uVar36;
              uVar34 = uVar51;
              uVar47 = local_c8;
            }
            uVar47 = uVar47 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(iVar39 + 1) * lVar42;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar41;
            lVar43 = SUB168(auVar14 * auVar26,8);
            puVar1 = (uint *)(lVar48 + lVar43 * 4);
            iVar39 = SUB164(auVar14 * auVar26,8);
            uVar36 = uVar46;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar43 * 8) = uVar36;
          *puVar1 = uVar34;
          param_2[0xb] = param_2[0xb] + 1;
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 != uVar33);
      Memory::free_static(pvVar38,false);
      Memory::free_static(pvVar6,false);
    }
  }
  uVar36 = *(undefined8 *)pVVar40;
  uVar4 = *in_RCX;
  pauVar37 = (undefined1 (*) [16])operator_new(0x20,"");
  *pauVar37 = (undefined1  [16])0x0;
  *(undefined4 *)(pauVar37[1] + 8) = uVar4;
  *(undefined8 *)pauVar37[1] = uVar36;
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 6) = pauVar37;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar37;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar37;
    *(undefined8 **)(*pauVar37 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar37;
  }
  else {
    lVar48 = *(long *)(param_2 + 6);
    *(undefined1 (**) [16])(lVar48 + 8) = pauVar37;
    *(long *)*pauVar37 = lVar48;
    *(undefined1 (**) [16])(param_2 + 6) = pauVar37;
  }
  uVar34 = (*(int *)pVVar40 * 0x16a88000 | (uint)(*(int *)pVVar40 * -0x3361d2af) >> 0x11) *
           0x1b873593 ^ 0x7f07c65;
  uVar34 = (uVar34 << 0xd | uVar34 >> 0x13) * 5 + 0xe6546b64 ^
           (*(int *)(pVVar40 + 4) * 0x16a88000 | (uint)(*(int *)(pVVar40 + 4) * -0x3361d2af) >> 0x11
           ) * 0x1b873593;
  uVar34 = (uVar34 << 0xd | uVar34 >> 0x13) * 5 + 0xe6546b64;
  uVar34 = (uVar34 >> 0x10 ^ uVar34) * -0x7a143595;
  uVar33 = (uVar34 ^ uVar34 >> 0xd) * -0x3d4d51cb;
  uVar34 = uVar33 ^ uVar33 >> 0x10;
  if (uVar33 == uVar33 >> 0x10) {
    uVar35 = 1;
    uVar34 = 1;
  }
  else {
    uVar35 = (ulong)uVar34;
  }
  uVar51 = 0;
  lVar48 = *(long *)(param_2 + 4);
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  uVar41 = CONCAT44(0,uVar33);
  lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar35 * lVar42;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar41;
  lVar44 = SUB168(auVar15 * auVar27,8);
  lVar43 = *(long *)(param_2 + 2);
  puVar1 = (uint *)(lVar48 + lVar44 * 4);
  iVar39 = SUB164(auVar15 * auVar27,8);
  uVar3 = *puVar1;
  pauVar31 = pauVar37;
  while (uVar3 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar3 * lVar42;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar41;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar33 + iVar39) - SUB164(auVar16 * auVar28,8)) * lVar42;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar41;
    local_c8 = SUB164(auVar17 * auVar29,8);
    pauVar50 = pauVar31;
    if (local_c8 < uVar51) {
      *puVar1 = uVar34;
      puVar2 = (undefined8 *)(lVar43 + lVar44 * 8);
      pauVar50 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar31;
      uVar34 = uVar3;
      uVar51 = local_c8;
    }
    uVar51 = uVar51 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar39 + 1) * lVar42;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar41;
    lVar44 = SUB168(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar48 + lVar44 * 4);
    iVar39 = SUB164(auVar18 * auVar30,8);
    pauVar31 = pauVar50;
    uVar3 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar43 + lVar44 * 8) = pauVar31;
  *puVar1 = uVar34;
  param_2[0xb] = param_2[0xb] + 1;
LAB_00109361:
  *(undefined1 (**) [16])param_1 = pauVar37;
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void Ref<BitMap>::instantiate<>() */

void __thiscall Ref<BitMap>::instantiate<>(Ref<BitMap> *this)

{
  char cVar1;
  Resource *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (Resource *)operator_new(600,"");
  Resource::Resource(this_00);
  *(undefined8 *)(this_00 + 0x248) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_00114c88;
  *(undefined8 *)(this_00 + 0x250) = 0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (Resource *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (Resource *)pOVar3) goto LAB_00109625;
    *(Resource **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00109625;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_00109625:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* MethodBindT<Dictionary const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Dictionary_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00109739;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1b);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109835:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109835;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00109739:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<BitMap, Vector2i const&>(void (BitMap::*)(Vector2i const&)) */

MethodBind * create_method_bind<BitMap,Vector2i_const&>(_func_void_Vector2i_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114e60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, Ref<Image> const&, float>(void (BitMap::*)(Ref<Image>
   const&, float)) */

MethodBind * create_method_bind<BitMap,Ref<Image>const&,float>(_func_void_Ref_ptr_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref_ptr_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114ec0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, Vector2i const&, bool>(void (BitMap::*)(Vector2i const&,
   bool)) */

MethodBind * create_method_bind<BitMap,Vector2i_const&,bool>(_func_void_Vector2i_ptr_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector2i_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114f20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, int, int, bool>(void (BitMap::*)(int, int, bool)) */

MethodBind * create_method_bind<BitMap,int,int,bool>(_func_void_int_int_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int_int_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114f80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, bool, Vector2i const&>(bool (BitMap::*)(Vector2i const&)
   const) */

MethodBind * create_method_bind<BitMap,bool,Vector2i_const&>(_func_bool_Vector2i_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool_Vector2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114fe0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, bool, int, int>(bool (BitMap::*)(int, int) const) */

MethodBind * create_method_bind<BitMap,bool,int,int>(_func_bool_int_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00115040;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, Rect2i const&, bool>(void (BitMap::*)(Rect2i const&,
   bool)) */

MethodBind * create_method_bind<BitMap,Rect2i_const&,bool>(_func_void_Rect2i_ptr_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Rect2i_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001150a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, int>(int (BitMap::*)() const) */

MethodBind * create_method_bind<BitMap,int>(_func_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00115100;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, Vector2i>(Vector2i (BitMap::*)() const) */

MethodBind * create_method_bind<BitMap,Vector2i>(_func_Vector2i *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector2i **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00115160;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, Dictionary const&>(void (BitMap::*)(Dictionary const&)) */

MethodBind * create_method_bind<BitMap,Dictionary_const&>(_func_void_Dictionary_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Dictionary_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001151c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, Dictionary>(Dictionary (BitMap::*)() const) */

MethodBind * create_method_bind<BitMap,Dictionary>(_func_Dictionary *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Dictionary **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00115220;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, int, Rect2i const&>(void (BitMap::*)(int, Rect2i const&))
    */

MethodBind * create_method_bind<BitMap,int,Rect2i_const&>(_func_void_int_Rect2i_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int_Rect2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00115280;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, Ref<Image>>(Ref<Image> (BitMap::*)() const) */

MethodBind * create_method_bind<BitMap,Ref<Image>>(_func_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001152e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<BitMap, TypedArray<Vector<Vector2> >, Rect2i const&,
   float>(TypedArray<Vector<Vector2> > (BitMap::*)(Rect2i const&, float) const) */

MethodBind *
create_method_bind<BitMap,TypedArray<Vector<Vector2>>,Rect2i_const&,float>
          (_func_TypedArray_Rect2i_ptr_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_TypedArray_Rect2i_ptr_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00115340;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "BitMap";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BitMap::_initialize_classv() */

void BitMap::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_0011a008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "BitMap";
    local_70 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010b0e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_0010b0e0;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_0010b04c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0010afe1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010b04c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_0010afe1:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = Vector2i::operator-;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* CowData<Vector<Vector2> >::_unref() */

void __thiscall CowData<Vector<Vector2>>::_unref(CowData<Vector<Vector2>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Vector<Vector2> >::_realloc(long) */

undefined8 __thiscall
CowData<Vector<Vector2>>::_realloc(CowData<Vector<Vector2>> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector<Vector2> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<Vector2>>::resize<false>(CowData<Vector<Vector2>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar6 * 0x10;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0010b630:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x10 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_0010b630;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar9 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar9) {
LAB_0010b4e2:
        if (lVar10 != lVar8) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar3 = uVar9 * 0x10 + lVar6;
        if (*(long *)(lVar3 + 8) != 0) break;
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar9) goto LAB_0010b4e2;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar3 + 8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *(long *)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 8) = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar9 = uVar9 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_0010b686;
  }
  if (lVar10 == lVar8) {
LAB_0010b59f:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010b686:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar7[-1];
    if (param_1 <= lVar6) goto LAB_0010b581;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010b59f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar6 = 0;
  }
  puVar5 = puVar7 + lVar6 * 2;
  do {
    puVar5[1] = 0;
    puVar5 = puVar5 + 2;
  } while (puVar5 != puVar7 + param_1 * 2);
LAB_0010b581:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<FillBitsStackEntry>::_realloc(long) */

undefined8 __thiscall
CowData<FillBitsStackEntry>::_realloc(CowData<FillBitsStackEntry> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Removing unreachable block (ram,0x0010b8c8) */
/* WARNING: Removing unreachable block (ram,0x0010ba5d) */
/* WARNING: Removing unreachable block (ram,0x0010ba69) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<int, Rect2i const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Rect2i_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010bd82;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010bc09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_0010bd82:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Rect2i const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Rect2i_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010bf8c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010bdf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010bf8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Dictionary>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c100;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Dictionary *)&local_58);
      Variant::Variant((Variant *)local_48,(Dictionary *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Dictionary::~Dictionary((Dictionary *)&local_58);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010c100:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Dictionary>::validated_call
          (MethodBindTRC<Dictionary> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10bab8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c379;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010c379:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary>::ptrcall
          (MethodBindTRC<Dictionary> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10bab8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c56a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010c56a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Dictionary_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010c915;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010c915:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Dictionary_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010cb35;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010cb35:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2i>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2i>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar3 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_68 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar6 = (long *)(local_70 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cc10;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      local_50 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,(Vector2i *)&local_50);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010cc10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2i>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2i>::validated_call
          (MethodBindTRC<Vector2i> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ce72;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar2;
LAB_0010ce72:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2i>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2i>::ptrcall
          (MethodBindTRC<Vector2i> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d051;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar2;
LAB_0010d051:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d2a0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010d2a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d504;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar3;
LAB_0010d504:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  int iVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d703;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar2;
LAB_0010d703:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Rect2i_const&,bool>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010da9a;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010da9a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Rect2i_const&,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010dca4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010db08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0010dca4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,int,int>::validated_call
          (MethodBindTRC<bool,int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant VVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dcff;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar2 = (Variant)(*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                             *(undefined4 *)(param_2[1] + 8));
  param_3[8] = VVar2;
LAB_0010dcff:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,int,int>::ptrcall
          (MethodBindTRC<bool,int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010defc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(undefined1 *)param_3 = uVar2;
LAB_0010defc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Vector2i const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,Vector2i_const&>::validated_call
          (MethodBindTRC<bool,Vector2i_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  Variant VVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e0f9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar2 = (Variant)(*pcVar3)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  param_3[8] = VVar2;
LAB_0010e0f9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Vector2i const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,Vector2i_const&>::ptrcall
          (MethodBindTRC<bool,Vector2i_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e2f5;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined1 *)param_3 = uVar2;
LAB_0010e2f5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,int,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e6b2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8),
               *(undefined1 *)(*(long *)(param_3 + 0x10) + 8));
    return;
  }
LAB_0010e6b2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,int,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e8cc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010e72f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined4 **)((long)param_3 + 8),**(char **)((long)param_3 + 0x10) != '\0');
    return;
  }
LAB_0010e8cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2i_const&,bool>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010eae4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010eae4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2i_const&,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ecf2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010eb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0010ecf2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2i_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ef15;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ed59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010ef15:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2i_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f114;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ef79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010f114:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >, Rect2i const&, float>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float>::validated_call
          (MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f18e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar4._0_4_ = (float)*(double *)(param_2[1] + 8);
  (*pcVar2)(auVar4._0_8_,(Array *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010f18e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >, Rect2i const&, float>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float>::ptrcall
          (MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float> *this,Object *param_1,
          void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f3a7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar4._0_4_ = (float)*param_2[1];
  (*pcVar2)(auVar4._0_8_,(Array *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010f3a7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Image>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Image>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  Variant *pVVar6;
  long *plVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar7 = (long *)plVar8[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar7 = (long *)(plVar8[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10bab8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pOVar4 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar4 + -0x10,false);
        }
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f650;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar6 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar6 & 1) != 0) {
        pVVar6 = *(Variant **)(pVVar6 + *(long *)((long)plVar8 + (long)pVVar2) + -1);
      }
      (*(code *)pVVar6)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          memdelete<Image>((Image *)local_58);
        }
      }
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010f650:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Image>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Image>>::ptrcall
          (MethodBindTRC<Ref<Image>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Image *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Image *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Image *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Image *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Image *)0x10bab8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f926;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Image *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Image *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Image *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010f926;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010f969;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010f969;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010f969:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Image *)0x0) goto LAB_0010f926;
    }
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    memdelete<Image>(local_48);
  }
LAB_0010f926:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&, float>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<Ref<Image>const&,float>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  double dVar1;
  long lVar2;
  Image *pIVar3;
  char cVar4;
  Image *pIVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Image *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Image *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Image *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Image *)0x10bab8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fc25;
    }
    if ((StringName::configured != '\0') && (local_68 != (Image *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  dVar1 = *(double *)(*(long *)(param_3 + 8) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Image *)0x0;
  pIVar5 = (Image *)Variant::get_validated_object();
  pIVar3 = local_68;
  if (pIVar5 != local_68) {
    if (pIVar5 == (Image *)0x0) {
      if (local_68 != (Image *)0x0) {
        local_68 = (Image *)0x0;
LAB_0010fbde:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          memdelete<Image>(pIVar3);
        }
      }
    }
    else {
      pIVar5 = (Image *)__dynamic_cast(pIVar5,&Object::typeinfo,&Image::typeinfo,0);
      if (pIVar3 != pIVar5) {
        local_68 = pIVar5;
        if (pIVar5 != (Image *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Image *)0x0;
          }
        }
        if (pIVar3 != (Image *)0x0) goto LAB_0010fbde;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((float)dVar1,(long *)((long)param_2 + lVar2),(StringName *)&local_68);
  if (local_68 != (Image *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<Image>(local_68);
    }
  }
LAB_0010fc25:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Image>const&,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Image *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Image *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Image *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Image *)0x10bab8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fec4;
    }
    if ((StringName::configured != '\0') && (local_48 != (Image *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_48 = (Image *)**param_3, local_48 == (Image *)0x0)) {
LAB_0010fea0:
    local_48 = (Image *)0x0;
  }
  else {
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') goto LAB_0010fea0;
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(StringName *)&local_48);
  if (local_48 != (Image *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<Image>(local_48);
    }
  }
LAB_0010fec4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >, Rect2i const&, float>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *this;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_78 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      auVar4._8_8_ = local_68._8_8_;
      auVar4._0_8_ = local_68._0_8_;
      if ((StringName::configured != '\0') && (local_68 = auVar4, local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_001101ea;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar14 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar14 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_00110228;
      this = *(Variant **)param_4;
LAB_0011023d:
      pVVar14 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar14 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar7) {
LAB_00110228:
        uVar8 = 4;
        goto LAB_00110215;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar2 <= lVar10) goto LAB_00110300;
        this = pVVar14 + lVar10 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011023d;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar7));
      if (lVar2 <= lVar10) {
LAB_00110300:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar14 = pVVar14 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar14,3);
    uVar5 = _LC119;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    Variant::operator_cast_to_float(pVVar14);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,8);
    uVar5 = _LC120;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_68 = Variant::operator_cast_to_Rect2i(this);
    (*(code *)pVVar13)((Array *)&local_78,(Variant *)((long)plVar11 + (long)pVVar1),local_68);
    Variant::Variant((Variant *)local_58,(Array *)&local_78);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Array::~Array((Array *)&local_78);
  }
  else {
    uVar8 = 3;
LAB_00110215:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_001101ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Dictionary_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar10 = (long *)(local_50 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110600;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00110650;
LAB_00110640:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110650:
        uVar7 = 4;
        goto LAB_001105f5;
      }
      if (in_R8D == 1) goto LAB_00110640;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x1b);
    uVar4 = _LC122;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_48);
    Dictionary::~Dictionary((Dictionary *)&local_48);
  }
  else {
    uVar7 = 3;
LAB_001105f5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00110600:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Vector2i const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,Vector2i_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001109a0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001109e0;
LAB_001109d0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001109e0:
        uVar7 = 4;
        goto LAB_00110995;
      }
      if (in_R8D == 1) goto LAB_001109d0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,6);
    uVar4 = _LC123;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_50 = Variant::operator_cast_to_Vector2i(pVVar11);
    bVar6 = (bool)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),&local_50);
    Variant::Variant((Variant *)local_48,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00110995:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001109a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector2i_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar10 = (long *)(local_50 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110cf0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00110d40;
LAB_00110d30:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110d40:
        uVar7 = 4;
        goto LAB_00110ce5;
      }
      if (in_R8D == 1) goto LAB_00110d30;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,6);
    uVar4 = _LC123;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_38 = Variant::operator_cast_to_Vector2i(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),&local_38);
  }
  else {
    uVar7 = 3;
LAB_00110ce5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00110cf0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&, float>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Image>const&,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Image *pIVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Image *pIVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  Variant *pVVar16;
  long in_FS_OFFSET;
  float fVar17;
  long local_68;
  undefined8 local_60;
  Image *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (Image *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (Image *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Image *)0x10bab8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111130;
    }
    if ((StringName::configured != '\0') && (local_58 != (Image *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_00111125:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_00111130;
  }
  pVVar16 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar16 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_00111168;
    pVVar13 = *(Variant **)param_4;
LAB_0011117d:
    pVVar16 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar16 + -8);
    iVar14 = (int)lVar2;
    if (iVar14 < iVar7) {
LAB_00111168:
      uVar8 = 4;
      goto LAB_00111125;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar14 + -2);
      if (lVar2 <= lVar11) goto LAB_00111280;
      pVVar13 = pVVar16 + lVar11 * 0x18;
    }
    else {
      pVVar13 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0011117d;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar7));
    if (lVar2 <= lVar11) {
LAB_00111280:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar16 = pVVar16 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar15 & 1) != 0) {
    pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar16,3);
  uVar4 = _LC119;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  fVar17 = Variant::operator_cast_to_float(pVVar16);
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0x18);
  uVar4 = _LC124;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_58 = (Image *)0x0;
  pIVar9 = (Image *)Variant::get_validated_object();
  pIVar5 = local_58;
  if (pIVar9 != local_58) {
    if (pIVar9 == (Image *)0x0) {
      if (local_58 != (Image *)0x0) {
        local_58 = (Image *)0x0;
LAB_001110d9:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          memdelete<Image>(pIVar5);
        }
      }
    }
    else {
      pIVar9 = (Image *)__dynamic_cast(pIVar9,&Object::typeinfo,&Image::typeinfo,0);
      if (pIVar5 != pIVar9) {
        local_58 = pIVar9;
        if (pIVar9 != (Image *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_58 = (Image *)0x0;
          }
        }
        if (pIVar5 != (Image *)0x0) goto LAB_001110d9;
      }
    }
  }
  (*(code *)pVVar15)(fVar17,(Variant *)((long)plVar12 + (long)pVVar1),&local_58);
  if (local_58 != (Image *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      memdelete<Image>(local_58);
    }
  }
LAB_00111130:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Image>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Image>>::validated_call
          (MethodBindTRC<Ref<Image>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char cVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Image *local_50;
  Variant **local_48;
  Image *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10bab8;
      local_50 = (Image *)0x0;
      local_40 = (Image *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111436;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Image *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Image *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Image>(local_50);
    }
  }
LAB_00111436:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Rect2i const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Rect2i const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Rect2i_const&>
               (__UnexistingClass *param_1,_func_void_int_Rect2i_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  uint uVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar11;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_001116f8;
      this = (Variant *)*plVar9;
LAB_0011174d:
      this_00 = (Variant *)plVar9[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar7) {
LAB_001116f8:
        uVar8 = 4;
        goto LAB_001116fd;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar3 <= lVar10) goto LAB_00111768;
        this = (Variant *)(lVar2 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0011174d;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar7));
      if (lVar3 <= lVar10) {
LAB_00111768:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      this_00 = (Variant *)(lVar2 + lVar10 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_Rect2i_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,8);
    uVar5 = _LC125;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Rect2i(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar5 = _LC126;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    iVar7 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Rect2i *)iVar7);
  }
  else {
    uVar8 = 3;
LAB_001116fd:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Rect2i const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<int,Rect2i_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00111806;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Rect2i_const&>
            (p_Var4,(_func_void_int_Rect2i_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00111806:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Rect2i const&, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(Rect2i const&, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Rect2i_const&,bool>
               (__UnexistingClass *param_1,_func_void_Rect2i_ptr_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  undefined1 local_48 [16];
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00111b50;
      this = (Variant *)*plVar8;
LAB_00111b9d:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_00111b50:
        uVar7 = 4;
        goto LAB_00111b55;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00111bb8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00111b9d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00111bb8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Rect2i_ptr_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
    uVar4 = _LC127;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_bool(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,8);
    uVar4 = _LC120;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_48 = Variant::operator_cast_to_Rect2i(this);
    (*param_2)((Rect2i *)(param_1 + (long)param_3),SUB81(local_48,0));
  }
  else {
    uVar7 = 3;
LAB_00111b55:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&, bool>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Rect2i_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00111c56;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Rect2i_const&,bool>
            (p_Var4,(_func_void_Rect2i_ptr_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00111c56:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, bool, int, int>(__UnexistingClass*, bool
   (__UnexistingClass::*)(int, int) const, Variant const**, int, Variant&, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,bool,int,int>
               (__UnexistingClass *param_1,_func_bool_int_int *param_2,Variant **param_3,int param_4
               ,Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar11 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar11 != 0) goto LAB_00111fd8;
      this = (Variant *)*plVar8;
LAB_0011202d:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar11) {
LAB_00111fd8:
        uVar7 = 4;
        goto LAB_00111fdd;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00112048;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011202d;
      }
      lVar9 = (long)(int)((iVar12 - iVar11) + (uVar10 ^ 1));
      if (lVar2 <= lVar9) {
LAB_00112048:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_bool_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC128;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC126;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    iVar11 = Variant::operator_cast_to_int(this);
    bVar6 = (*param_2)((int)(param_1 + (long)param_3),iVar11);
    Variant::Variant((Variant *)local_58,bVar6);
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar7 = 3;
LAB_00111fdd:
    *(undefined4 *)param_7 = uVar7;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112106;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,bool,int,int>
            (p_Var4,(_func_bool_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             (CallError *)param_1,in_R9);
LAB_00112106:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, int, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, int, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,int,bool>
               (__UnexistingClass *param_1,_func_void_int_int_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined4 in_register_0000000c;
  long lVar9;
  uint uVar10;
  uint uVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  uVar5 = 3;
  if (uVar10 < 4) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    if (lVar1 == 0) {
      iVar6 = 0;
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(lVar1 + -8);
      iVar6 = (int)lVar9;
    }
    if ((int)(3 - uVar10) <= iVar6) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)uVar10) {
          pVVar12 = *(Variant **)(CONCAT44(in_register_0000000c,param_4) + lVar8 * 8);
        }
        else {
          uVar11 = iVar6 + -3 + (int)lVar8;
          if (lVar9 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar9,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          pVVar12 = (Variant *)(lVar1 + (ulong)uVar11 * 0x18);
        }
        local_58[lVar8] = pVVar12;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_int_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar4 = Variant::can_convert_strict(*(undefined4 *)local_58[2],1);
      uVar3 = _LC129;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      Variant::operator_cast_to_bool(local_58[2]);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)local_58[1],2);
      uVar3 = _LC128;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      iVar6 = Variant::operator_cast_to_int(local_58[1]);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)local_58[0],2);
      uVar3 = _LC126;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      iVar7 = Variant::operator_cast_to_int(local_58[0]);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*param_2)((int)(param_1 + (long)param_3),iVar7,SUB41(iVar6,0));
        return;
      }
      goto LAB_00112532;
    }
    uVar5 = 4;
  }
  *(undefined4 *)param_6 = uVar5;
  *(undefined4 *)(param_6 + 8) = 3;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00112532:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,int,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00112596;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,int,bool>
            (p_Var4,(_func_void_int_int_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00112596:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Vector2i const&, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(Vector2i const&, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Vector2i_const&,bool>
               (__UnexistingClass *param_1,_func_void_Vector2i_ptr_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  undefined8 local_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_001128d8;
      this = (Variant *)*plVar8;
LAB_0011292d:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_001128d8:
        uVar7 = 4;
        goto LAB_001128dd;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00112948;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011292d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00112948:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Vector2i_ptr_bool **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
    uVar4 = _LC127;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_bool(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,6);
    uVar4 = _LC123;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_38 = Variant::operator_cast_to_Vector2i(this);
    (*param_2)((Vector2i *)(param_1 + (long)param_3),SUB81(&local_38,0));
  }
  else {
    uVar7 = 3;
LAB_001128dd:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&, bool>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector2i_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001129e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Vector2i_const&,bool>
            (p_Var4,(_func_void_Vector2i_ptr_bool *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001129e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Rect2i const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Rect2i_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00112c27;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,8);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00112d25:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112d25;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00112c27:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int, Rect2i const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Rect2i_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  local_8c = 0;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00112ea5;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00112fb5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112fb5;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00112ea5:
  local_8c = 1;
  call_get_argument_type_info_helper<Rect2i_const&>(in_EDX,&local_8c,pPVar5);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindT<Rect2i const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Rect2i_const&,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<Rect2i_const&>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00113144;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113245:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113245;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00113144:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* void call_get_argument_type_info_helper<float>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<float>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00113397;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113495:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113495;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00113397:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<TypedArray<Vector<Vector2> >, Rect2i const&, float>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  long local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<Rect2i_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<float>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar3 = (undefined4)local_68;
    *(undefined8 *)(puVar3 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_60._8_8_;
    puVar3[6] = (undefined4)local_50;
    *(undefined8 *)(puVar3 + 8) = local_48;
    puVar3[10] = local_40;
    goto LAB_00113709;
  }
  local_70 = 0;
  Variant::get_type_name(&local_78,0x23);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar3[10] = 6;
LAB_00113737:
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_78);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) goto LAB_00113737;
    StringName::StringName((StringName *)&local_68,(String *)(puVar3 + 8),false);
    if (*(long *)(puVar3 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(puVar3 + 4) = local_68;
    }
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00113709:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&, float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<Image>const&,float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar4 = 0;
  *(undefined4 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined4 *)(pPVar4 + 0x28) = 6;
  local_8c = 0;
  *(undefined1 (*) [16])(pPVar4 + 8) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00113805;
  local_78 = 0;
  local_68 = "Image";
  local_80 = 0;
  local_60._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001139dd:
    local_40 = 6;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_001139dd;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar4 = local_68._0_4_;
  if (*(long *)(pPVar4 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 8));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(pPVar4 + 8) = uVar2;
  }
  if (*(long *)(pPVar4 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar4 + 0x10) = uVar2;
  }
  *(int *)(pPVar4 + 0x18) = local_50;
  if (*(long *)(pPVar4 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 0x20));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(pPVar4 + 0x20) = lVar3;
  }
  *(undefined4 *)(pPVar4 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00113805:
  local_8c = 1;
  call_get_argument_type_info_helper<float>(in_EDX,&local_8c,pPVar4);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar4;
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00113a67;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113b65:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113b65;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00113a67:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<bool, int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,int,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00113e04;
  }
  local_70 = 0;
  local_68 = &_LC3;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 1;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_00113e37:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_00113e37;
    StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
    if (*(undefined **)(puVar7 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar7 + 4) = local_68;
    }
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00113e04:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,int,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar5);
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00113f24;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00114025:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00114025;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00113f24:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* void call_get_argument_type_info_helper<Vector2i const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector2i_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00114177;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,6);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00114275:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00114275;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00114177:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Vector2i const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector2i_const&,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<Vector2i_const&>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00114404;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00114505:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00114505;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00114404:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindTRC<bool, Vector2i const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,Vector2i_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Vector2i_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_001146c5;
  }
  local_70 = 0;
  local_68 = &_LC3;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001147d7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_001147d7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001146c5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector2i_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<Vector2i_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* BitMap::~BitMap() */

void __thiscall BitMap::~BitMap(BitMap *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<Vector<Vector2> >, Rect2i const&, float>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float>::~MethodBindTRC
          (MethodBindTRC<TypedArray<Vector<Vector2>>,Rect2i_const&,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Image>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Image>>::~MethodBindTRC(MethodBindTRC<Ref<Image>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Rect2i const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Rect2i_const&>::~MethodBindT(MethodBindT<int,Rect2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2i_const&>::~MethodBindT(MethodBindT<Vector2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2i>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2i>::~MethodBindTRC(MethodBindTRC<Vector2i> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Rect2i const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<Rect2i_const&,bool>::~MethodBindT(MethodBindT<Rect2i_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int,int>::~MethodBindTRC(MethodBindTRC<bool,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,int,bool>::~MethodBindT(MethodBindT<int,int,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2i const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector2i_const&,bool>::~MethodBindT(MethodBindT<Vector2i_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Image> const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Image>const&,float>::~MethodBindT(MethodBindT<Ref<Image>const&,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


