
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



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_001002b6:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_001002b6;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_0010177a();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_0010020c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_0010020c:
  puVar8[-1] = param_1;
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010177a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00101970) */
/* WARNING: Removing unreachable block (ram,0x00101aa0) */
/* WARNING: Removing unreachable block (ram,0x00101c18) */
/* WARNING: Removing unreachable block (ram,0x00101aac) */
/* WARNING: Removing unreachable block (ram,0x00101ab6) */
/* WARNING: Removing unreachable block (ram,0x00101bfa) */
/* WARNING: Removing unreachable block (ram,0x00101ac2) */
/* WARNING: Removing unreachable block (ram,0x00101acc) */
/* WARNING: Removing unreachable block (ram,0x00101bdc) */
/* WARNING: Removing unreachable block (ram,0x00101ad8) */
/* WARNING: Removing unreachable block (ram,0x00101ae2) */
/* WARNING: Removing unreachable block (ram,0x00101bbe) */
/* WARNING: Removing unreachable block (ram,0x00101aee) */
/* WARNING: Removing unreachable block (ram,0x00101af8) */
/* WARNING: Removing unreachable block (ram,0x00101ba0) */
/* WARNING: Removing unreachable block (ram,0x00101b04) */
/* WARNING: Removing unreachable block (ram,0x00101b0e) */
/* WARNING: Removing unreachable block (ram,0x00101b82) */
/* WARNING: Removing unreachable block (ram,0x00101b16) */
/* WARNING: Removing unreachable block (ram,0x00101b20) */
/* WARNING: Removing unreachable block (ram,0x00101b67) */
/* WARNING: Removing unreachable block (ram,0x00101b28) */
/* WARNING: Removing unreachable block (ram,0x00101b3d) */
/* WARNING: Removing unreachable block (ram,0x00101b49) */
/* String vformat<int, int, String, char const*>(String const&, int const, int const, String const,
   char const* const) */

undefined8 *
vformat<int,int,String,char_const*>
          (undefined8 *param_1,bool *param_2,int param_3,int param_4,String_conflict *param_5,
          char *param_6)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  Variant::Variant(local_88,param_5);
  iVar2 = 0;
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar4 = (int)local_108;
  Array::resize(iVar4);
  pVVar3 = local_b8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar3 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00101d58) */
/* WARNING: Removing unreachable block (ram,0x00101e88) */
/* WARNING: Removing unreachable block (ram,0x00102050) */
/* WARNING: Removing unreachable block (ram,0x00101e94) */
/* WARNING: Removing unreachable block (ram,0x00101e9e) */
/* WARNING: Removing unreachable block (ram,0x00102030) */
/* WARNING: Removing unreachable block (ram,0x00101eaa) */
/* WARNING: Removing unreachable block (ram,0x00101eb4) */
/* WARNING: Removing unreachable block (ram,0x00102010) */
/* WARNING: Removing unreachable block (ram,0x00101ec0) */
/* WARNING: Removing unreachable block (ram,0x00101eca) */
/* WARNING: Removing unreachable block (ram,0x00101ff0) */
/* WARNING: Removing unreachable block (ram,0x00101ed6) */
/* WARNING: Removing unreachable block (ram,0x00101ee0) */
/* WARNING: Removing unreachable block (ram,0x00101fd0) */
/* WARNING: Removing unreachable block (ram,0x00101eec) */
/* WARNING: Removing unreachable block (ram,0x00101ef6) */
/* WARNING: Removing unreachable block (ram,0x00101fb0) */
/* WARNING: Removing unreachable block (ram,0x00101f02) */
/* WARNING: Removing unreachable block (ram,0x00101f0c) */
/* WARNING: Removing unreachable block (ram,0x00101f90) */
/* WARNING: Removing unreachable block (ram,0x00101f14) */
/* WARNING: Removing unreachable block (ram,0x00101f2a) */
/* WARNING: Removing unreachable block (ram,0x00101f36) */
/* String vformat<char const*>(String const&, char const* const) */

String_conflict * vformat<char_const*>(String_conflict *param_1,char *param_2)

{
  char cVar1;
  Variant *this;
  char *in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
  *(undefined8 *)param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00102198) */
/* WARNING: Removing unreachable block (ram,0x001022c8) */
/* WARNING: Removing unreachable block (ram,0x00102490) */
/* WARNING: Removing unreachable block (ram,0x001022d4) */
/* WARNING: Removing unreachable block (ram,0x001022de) */
/* WARNING: Removing unreachable block (ram,0x00102470) */
/* WARNING: Removing unreachable block (ram,0x001022ea) */
/* WARNING: Removing unreachable block (ram,0x001022f4) */
/* WARNING: Removing unreachable block (ram,0x00102450) */
/* WARNING: Removing unreachable block (ram,0x00102300) */
/* WARNING: Removing unreachable block (ram,0x0010230a) */
/* WARNING: Removing unreachable block (ram,0x00102430) */
/* WARNING: Removing unreachable block (ram,0x00102316) */
/* WARNING: Removing unreachable block (ram,0x00102320) */
/* WARNING: Removing unreachable block (ram,0x00102410) */
/* WARNING: Removing unreachable block (ram,0x0010232c) */
/* WARNING: Removing unreachable block (ram,0x00102336) */
/* WARNING: Removing unreachable block (ram,0x001023f0) */
/* WARNING: Removing unreachable block (ram,0x00102342) */
/* WARNING: Removing unreachable block (ram,0x0010234c) */
/* WARNING: Removing unreachable block (ram,0x001023d0) */
/* WARNING: Removing unreachable block (ram,0x00102354) */
/* WARNING: Removing unreachable block (ram,0x0010236a) */
/* WARNING: Removing unreachable block (ram,0x00102376) */
/* String vformat<unsigned long>(String const&, unsigned long const) */

String_conflict * vformat<unsigned_long>(String_conflict *param_1,ulong param_2)

{
  char cVar1;
  Variant *this;
  ulong in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
  *(undefined8 *)param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x001025d8) */
/* WARNING: Removing unreachable block (ram,0x00102708) */
/* WARNING: Removing unreachable block (ram,0x001028d0) */
/* WARNING: Removing unreachable block (ram,0x00102714) */
/* WARNING: Removing unreachable block (ram,0x0010271e) */
/* WARNING: Removing unreachable block (ram,0x001028b0) */
/* WARNING: Removing unreachable block (ram,0x0010272a) */
/* WARNING: Removing unreachable block (ram,0x00102734) */
/* WARNING: Removing unreachable block (ram,0x00102890) */
/* WARNING: Removing unreachable block (ram,0x00102740) */
/* WARNING: Removing unreachable block (ram,0x0010274a) */
/* WARNING: Removing unreachable block (ram,0x00102870) */
/* WARNING: Removing unreachable block (ram,0x00102756) */
/* WARNING: Removing unreachable block (ram,0x00102760) */
/* WARNING: Removing unreachable block (ram,0x00102850) */
/* WARNING: Removing unreachable block (ram,0x0010276c) */
/* WARNING: Removing unreachable block (ram,0x00102776) */
/* WARNING: Removing unreachable block (ram,0x00102830) */
/* WARNING: Removing unreachable block (ram,0x00102782) */
/* WARNING: Removing unreachable block (ram,0x0010278c) */
/* WARNING: Removing unreachable block (ram,0x00102810) */
/* WARNING: Removing unreachable block (ram,0x00102794) */
/* WARNING: Removing unreachable block (ram,0x001027aa) */
/* WARNING: Removing unreachable block (ram,0x001027b6) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String_conflict *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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


