
dword ossl_rsa_oaeppss_md2nid(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  NoteGnuProperty_4 *pNVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  pNVar3 = (NoteGnuProperty_4 *)&oaeppss_name_nid_map;
  do {
    uVar1._0_4_ = pNVar3->type;
    uVar1._4_1_ = pNVar3->name[0];
    uVar1._5_1_ = pNVar3->name[1];
    uVar1._6_1_ = pNVar3->name[2];
    uVar1._7_1_ = pNVar3->name[3];
    iVar2 = EVP_MD_is_a(param_1,uVar1);
    if (iVar2 != 0) {
      return pNVar3->namesz;
    }
    pNVar3 = pNVar3 + 1;
  } while (pNVar3 != &NoteGnuProperty_4_00100190);
  return 0;
}



undefined8 ossl_rsa_oaeppss_nid2name(dword param_1)

{
  NoteGnuProperty_4 *pNVar1;
  undefined8 uVar2;
  
  pNVar1 = (NoteGnuProperty_4 *)&oaeppss_name_nid_map;
  do {
    if (param_1 == pNVar1->namesz) {
      uVar2._0_4_ = pNVar1->type;
      uVar2._4_1_ = pNVar1->name[0];
      uVar2._5_1_ = pNVar1->name[1];
      uVar2._6_1_ = pNVar1->name[2];
      uVar2._7_1_ = pNVar1->name[3];
      return uVar2;
    }
    pNVar1 = pNVar1 + 1;
  } while (pNVar1 != &NoteGnuProperty_4_00100190);
  return 0;
}



undefined * ossl_rsa_mgf_nid2name(int param_1)

{
  undefined *puVar1;
  
  puVar1 = &_LC0;
  if (param_1 != 0x38f) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}


