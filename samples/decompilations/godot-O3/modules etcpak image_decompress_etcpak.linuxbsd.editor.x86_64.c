
/* WARNING: Removing unreachable block (ram,0x00101670) */
/* WARNING: Removing unreachable block (ram,0x001017a0) */
/* WARNING: Removing unreachable block (ram,0x00101918) */
/* WARNING: Removing unreachable block (ram,0x001017ac) */
/* WARNING: Removing unreachable block (ram,0x001017b6) */
/* WARNING: Removing unreachable block (ram,0x001018fa) */
/* WARNING: Removing unreachable block (ram,0x001017c2) */
/* WARNING: Removing unreachable block (ram,0x001017cc) */
/* WARNING: Removing unreachable block (ram,0x001018dc) */
/* WARNING: Removing unreachable block (ram,0x001017d8) */
/* WARNING: Removing unreachable block (ram,0x001017e2) */
/* WARNING: Removing unreachable block (ram,0x001018be) */
/* WARNING: Removing unreachable block (ram,0x001017ee) */
/* WARNING: Removing unreachable block (ram,0x001017f8) */
/* WARNING: Removing unreachable block (ram,0x001018a0) */
/* WARNING: Removing unreachable block (ram,0x00101804) */
/* WARNING: Removing unreachable block (ram,0x0010180e) */
/* WARNING: Removing unreachable block (ram,0x00101882) */
/* WARNING: Removing unreachable block (ram,0x00101816) */
/* WARNING: Removing unreachable block (ram,0x00101820) */
/* WARNING: Removing unreachable block (ram,0x00101867) */
/* WARNING: Removing unreachable block (ram,0x00101828) */
/* WARNING: Removing unreachable block (ram,0x0010183d) */
/* WARNING: Removing unreachable block (ram,0x00101849) */
/* String vformat<String, int, int, int, int>(String const&, String const, int const, int const, int
   const, int const) */

undefined8 *
vformat<String,int,int,int,int>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_128 [8];
  undefined8 local_120 [9];
  Variant local_d8 [24];
  Variant local_c0 [24];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_d8,param_3);
  Variant::Variant(local_c0,param_4);
  Variant::Variant(local_a8,param_5);
  iVar2 = 0;
  Variant::Variant(local_90,param_6);
  Variant::Variant(local_78,param_7);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_128);
  iVar4 = (int)local_128;
  Array::resize(iVar4);
  pVVar3 = local_d8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 5);
  String::sprintf((Array *)local_120,param_2);
  *param_1 = local_120[0];
  pVVar3 = local_48;
  Array::~Array(local_128);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00101a90) */
/* WARNING: Removing unreachable block (ram,0x00101bc0) */
/* WARNING: Removing unreachable block (ram,0x00101d39) */
/* WARNING: Removing unreachable block (ram,0x00101bcc) */
/* WARNING: Removing unreachable block (ram,0x00101bd6) */
/* WARNING: Removing unreachable block (ram,0x00101d1b) */
/* WARNING: Removing unreachable block (ram,0x00101be2) */
/* WARNING: Removing unreachable block (ram,0x00101bec) */
/* WARNING: Removing unreachable block (ram,0x00101cfd) */
/* WARNING: Removing unreachable block (ram,0x00101bf8) */
/* WARNING: Removing unreachable block (ram,0x00101c02) */
/* WARNING: Removing unreachable block (ram,0x00101cdf) */
/* WARNING: Removing unreachable block (ram,0x00101c0e) */
/* WARNING: Removing unreachable block (ram,0x00101c18) */
/* WARNING: Removing unreachable block (ram,0x00101cc1) */
/* WARNING: Removing unreachable block (ram,0x00101c24) */
/* WARNING: Removing unreachable block (ram,0x00101c2e) */
/* WARNING: Removing unreachable block (ram,0x00101ca3) */
/* WARNING: Removing unreachable block (ram,0x00101c36) */
/* WARNING: Removing unreachable block (ram,0x00101c40) */
/* WARNING: Removing unreachable block (ram,0x00101c88) */
/* WARNING: Removing unreachable block (ram,0x00101c48) */
/* WARNING: Removing unreachable block (ram,0x00101c5e) */
/* WARNING: Removing unreachable block (ram,0x00101c6a) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,String_conflict *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00101f08) */
/* WARNING: Removing unreachable block (ram,0x00102038) */
/* WARNING: Removing unreachable block (ram,0x001021b0) */
/* WARNING: Removing unreachable block (ram,0x00102044) */
/* WARNING: Removing unreachable block (ram,0x0010204e) */
/* WARNING: Removing unreachable block (ram,0x00102192) */
/* WARNING: Removing unreachable block (ram,0x0010205a) */
/* WARNING: Removing unreachable block (ram,0x00102064) */
/* WARNING: Removing unreachable block (ram,0x00102174) */
/* WARNING: Removing unreachable block (ram,0x00102070) */
/* WARNING: Removing unreachable block (ram,0x0010207a) */
/* WARNING: Removing unreachable block (ram,0x00102156) */
/* WARNING: Removing unreachable block (ram,0x00102086) */
/* WARNING: Removing unreachable block (ram,0x00102090) */
/* WARNING: Removing unreachable block (ram,0x00102138) */
/* WARNING: Removing unreachable block (ram,0x0010209c) */
/* WARNING: Removing unreachable block (ram,0x001020a6) */
/* WARNING: Removing unreachable block (ram,0x0010211a) */
/* WARNING: Removing unreachable block (ram,0x001020ae) */
/* WARNING: Removing unreachable block (ram,0x001020b8) */
/* WARNING: Removing unreachable block (ram,0x001020ff) */
/* WARNING: Removing unreachable block (ram,0x001020c0) */
/* WARNING: Removing unreachable block (ram,0x001020d5) */
/* WARNING: Removing unreachable block (ram,0x001020e1) */
/* String vformat<int, int, String, String, int, unsigned long>(String const&, int const, int const,
   String const, String const, int const, unsigned long const) */

undefined8 *
vformat<int,int,String,String,int,unsigned_long>
          (undefined8 *param_1,bool *param_2,int param_3,int param_4,String_conflict *param_5,
          String_conflict *param_6,int param_7,ulong param_8)

{
  Variant *this;
  int iVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool bVar4;
  Array local_138 [8];
  undefined8 local_130 [9];
  Variant local_e8 [24];
  Variant local_d0 [24];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_e8,param_3);
  Variant::Variant(local_d0,param_4);
  Variant::Variant(local_b8,param_5);
  iVar1 = 0;
  Variant::Variant(local_a0,param_6);
  Variant::Variant(local_88,param_7);
  Variant::Variant(local_70,param_8);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_138);
  iVar3 = (int)local_138;
  Array::resize(iVar3);
  pVVar2 = local_e8;
  do {
    iVar1 = iVar1 + 1;
    this = (Variant *)Array::operator[](iVar3);
    Variant::operator=(this,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar1 != 6);
  String::sprintf((Array *)local_130,param_2);
  *param_1 = local_130[0];
  Array::~Array(local_138);
  pVVar2 = (Variant *)&local_58;
  do {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    bVar4 = pVVar2 != local_e8;
    pVVar2 = pVVar2 + -0x18;
  } while (bVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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


