
undefined1 * NAMING_AUTHORITY_it(void)

{
  return local_it_3;
}



undefined1 * PROFESSION_INFO_it(void)

{
  return local_it_2;
}



undefined1 * ADMISSIONS_it(void)

{
  return local_it_1;
}



undefined1 * ADMISSION_SYNTAX_it(void)

{
  return local_it_0;
}



void PROFESSION_INFO_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PROFESSION_INFO_it();
  ASN1_item_free(param_1,it);
  return;
}



void ADMISSIONS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ADMISSIONS_it();
  ASN1_item_free(param_1,it);
  return;
}



bool i2r_NAMING_AUTHORITY_isra_0(long *param_1,BIO *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  char acStack_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (long *)0x0) && (((*param_1 != 0 || (param_1[2] != 0)) || (param_1[1] != 0)))) {
    iVar2 = BIO_printf(param_2,"%*snamingAuthority:\n",(ulong)param_3,&_LC2);
    if (0 < iVar2) {
      if ((ASN1_OBJECT *)*param_1 == (ASN1_OBJECT *)0x0) {
LAB_00100167:
        if (param_1[2] == 0) {
LAB_001001b9:
          bVar1 = true;
          if (param_1[1] == 0) goto LAB_00100210;
          iVar2 = BIO_printf(param_2,"%*s  namingAuthorityUrl: ",(ulong)param_3,&_LC2);
          if (0 < iVar2) {
            iVar2 = ASN1_STRING_print(param_2,(ASN1_STRING *)param_1[1]);
            if (0 < iVar2) {
              iVar2 = BIO_printf(param_2,"\n");
              bVar1 = 0 < iVar2;
              goto LAB_00100210;
            }
          }
        }
        else {
          iVar2 = BIO_printf(param_2,"%*s  namingAuthorityText: ",(ulong)param_3,&_LC2);
          if (0 < iVar2) {
            iVar2 = ASN1_STRING_print(param_2,(ASN1_STRING *)param_1[2]);
            if (0 < iVar2) {
              iVar2 = BIO_printf(param_2,"\n");
              if (0 < iVar2) goto LAB_001001b9;
            }
          }
        }
      }
      else {
        iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
        pcVar3 = OBJ_nid2ln(iVar2);
        iVar2 = BIO_printf(param_2,"%*s  namingAuthorityId: ",(ulong)param_3,&_LC2);
        if (0 < iVar2) {
          OBJ_obj2txt(acStack_c8,0x80,(ASN1_OBJECT *)*param_1,1);
          puVar4 = &_LC0;
          puVar5 = &_LC1;
          if (pcVar3 == (char *)0x0) {
            pcVar3 = "";
            puVar4 = &_LC2;
            puVar5 = &_LC2;
          }
          iVar2 = BIO_printf(param_2,"%s%s%s%s\n",pcVar3,puVar4,acStack_c8,puVar5);
          if (0 < iVar2) goto LAB_00100167;
        }
      }
    }
  }
  bVar1 = false;
LAB_00100210:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 i2r_ADMISSION_SYNTAX(undefined8 param_1,long *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ASN1_OBJECT *o;
  char *pcVar5;
  ASN1_STRING *v;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined *puVar11;
  uint local_e8;
  char local_c8 [136];
  long local_40;
  
  uVar10 = (ulong)param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 == 0) ||
     ((((iVar1 = BIO_printf(param_3,"%*sadmissionAuthority:\n",(ulong)param_4,&_LC2), 0 < iVar1 &&
        (iVar1 = BIO_printf(param_3,"%*s  ",uVar10,&_LC2), 0 < iVar1)) &&
       (iVar1 = GENERAL_NAME_print(param_3,(GENERAL_NAME *)*param_2), 0 < iVar1)) &&
      (iVar1 = BIO_printf(param_3,"\n"), 0 < iVar1)))) {
    uVar8 = 0;
    while (iVar1 = OPENSSL_sk_num(param_2[1]), (int)uVar8 < iVar1) {
      uVar7 = uVar8 + 1;
      plVar3 = (long *)OPENSSL_sk_value(param_2[1],uVar8);
      iVar1 = BIO_printf(param_3,"%*sEntry %0d:\n",uVar10,&_LC2,(ulong)uVar7);
      if ((iVar1 < 1) ||
         (((*plVar3 != 0 &&
           (((iVar1 = BIO_printf(param_3,"%*s  admissionAuthority:\n",uVar10,&_LC2), iVar1 < 1 ||
             (iVar1 = BIO_printf(param_3,"%*s    ",uVar10,&_LC2), iVar1 < 1)) ||
            ((iVar1 = GENERAL_NAME_print(param_3,(GENERAL_NAME *)*plVar3), iVar1 < 1 ||
             (iVar1 = BIO_printf(param_3,"\n"), iVar1 < 1)))))) ||
          ((plVar3[1] != 0 &&
           (iVar1 = i2r_NAMING_AUTHORITY_isra_0(plVar3[1],param_3,param_4 + 2), iVar1 < 1))))))
      goto LAB_00100668;
      local_e8 = 0;
      while (iVar1 = OPENSSL_sk_num(plVar3[2]), uVar8 = uVar7, (int)local_e8 < iVar1) {
        uVar8 = local_e8 + 1;
        plVar4 = (long *)OPENSSL_sk_value(plVar3[2],local_e8);
        iVar1 = BIO_printf(param_3,"%*s  Profession Info Entry %0d:\n",uVar10,&_LC2,(ulong)uVar8);
        if (((iVar1 < 1) ||
            ((plVar4[3] != 0 &&
             (((iVar1 = BIO_printf(param_3,"%*s    registrationNumber: ",uVar10,&_LC2), iVar1 < 1 ||
               (iVar1 = ASN1_STRING_print(param_3,(ASN1_STRING *)plVar4[3]), iVar1 < 1)) ||
              (iVar1 = BIO_printf(param_3,"\n"), iVar1 < 1)))))) ||
           ((*plVar4 != 0 &&
            (iVar1 = i2r_NAMING_AUTHORITY_isra_0(*plVar4,param_3,param_4 + 4), iVar1 < 1))))
        goto LAB_00100668;
        if (plVar4[1] != 0) {
          iVar1 = BIO_printf(param_3,"%*s    Info Entries:\n",uVar10,&_LC2);
          if (iVar1 < 1) goto LAB_00100668;
          for (iVar1 = 0; iVar2 = OPENSSL_sk_num(plVar4[1]), iVar1 < iVar2; iVar1 = iVar1 + 1) {
            v = (ASN1_STRING *)OPENSSL_sk_value(plVar4[1],iVar1);
            iVar2 = BIO_printf(param_3,"%*s      ",uVar10,&_LC2);
            if (((iVar2 < 1) || (iVar2 = ASN1_STRING_print(param_3,v), iVar2 < 1)) ||
               (iVar2 = BIO_printf(param_3,"\n"), iVar2 < 1)) goto LAB_00100668;
          }
        }
        local_e8 = uVar8;
        if (plVar4[2] != 0) {
          iVar1 = BIO_printf(param_3,"%*s    Profession OIDs:\n",uVar10,&_LC2);
          if (iVar1 < 1) goto LAB_00100668;
          for (iVar1 = 0; iVar2 = OPENSSL_sk_num(plVar4[2]), iVar1 < iVar2; iVar1 = iVar1 + 1) {
            o = (ASN1_OBJECT *)OPENSSL_sk_value(plVar4[2],iVar1);
            iVar2 = OBJ_obj2nid(o);
            pcVar5 = OBJ_nid2ln(iVar2);
            OBJ_obj2txt(local_c8,0x80,o,1);
            if (pcVar5 == (char *)0x0) {
              pcVar5 = "";
              puVar11 = &_LC2;
              pcVar9 = pcVar5;
            }
            else {
              pcVar9 = " (";
              puVar11 = &_LC1;
            }
            iVar2 = BIO_printf(param_3,"%*s      %s%s%s%s\n",uVar10,&_LC2,pcVar5,pcVar9,local_c8,
                               puVar11);
            if (iVar2 < 1) goto LAB_00100668;
          }
        }
      }
    }
    uVar6 = 1;
  }
  else {
LAB_00100668:
    uVar6 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



void d2i_NAMING_AUTHORITY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NAMING_AUTHORITY_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_NAMING_AUTHORITY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NAMING_AUTHORITY_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void NAMING_AUTHORITY_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NAMING_AUTHORITY_it();
  ASN1_item_new(it);
  return;
}



void NAMING_AUTHORITY_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NAMING_AUTHORITY_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_PROFESSION_INFO(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PROFESSION_INFO_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_PROFESSION_INFO(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PROFESSION_INFO_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void PROFESSION_INFO_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PROFESSION_INFO_it();
  ASN1_item_new(it);
  return;
}



void d2i_ADMISSIONS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ADMISSIONS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_ADMISSIONS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ADMISSIONS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void ADMISSIONS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ADMISSIONS_it();
  ASN1_item_new(it);
  return;
}



void d2i_ADMISSION_SYNTAX(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ADMISSION_SYNTAX_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_ADMISSION_SYNTAX(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ADMISSION_SYNTAX_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void ADMISSION_SYNTAX_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ADMISSION_SYNTAX_it();
  ASN1_item_new(it);
  return;
}



void ADMISSION_SYNTAX_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ADMISSION_SYNTAX_it();
  ASN1_item_free(param_1,it);
  return;
}



undefined8 NAMING_AUTHORITY_get0_authorityId(undefined8 *param_1)

{
  return *param_1;
}



void NAMING_AUTHORITY_set0_authorityId(undefined8 *param_1,undefined8 param_2)

{
  ASN1_OBJECT_free((ASN1_OBJECT *)*param_1);
  *param_1 = param_2;
  return;
}



undefined8 NAMING_AUTHORITY_get0_authorityURL(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



void NAMING_AUTHORITY_set0_authorityURL(long param_1,undefined8 param_2)

{
  ASN1_IA5STRING_free(*(ASN1_IA5STRING **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



undefined8 NAMING_AUTHORITY_get0_authorityText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void NAMING_AUTHORITY_set0_authorityText(long param_1,undefined8 param_2)

{
  ASN1_IA5STRING_free(*(ASN1_IA5STRING **)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



undefined8 ADMISSION_SYNTAX_get0_admissionAuthority(undefined8 *param_1)

{
  return *param_1;
}



void ADMISSION_SYNTAX_set0_admissionAuthority(undefined8 *param_1,undefined8 param_2)

{
  GENERAL_NAME_free((GENERAL_NAME *)*param_1);
  *param_1 = param_2;
  return;
}



undefined8 ADMISSION_SYNTAX_get0_contentsOfAdmissions(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



void ADMISSION_SYNTAX_set0_contentsOfAdmissions(long param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 8),ADMISSIONS_free);
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



undefined8 ADMISSIONS_get0_admissionAuthority(undefined8 *param_1)

{
  return *param_1;
}



void ADMISSIONS_set0_admissionAuthority(undefined8 *param_1,undefined8 param_2)

{
  GENERAL_NAME_free((GENERAL_NAME *)*param_1);
  *param_1 = param_2;
  return;
}



undefined8 ADMISSIONS_get0_namingAuthority(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



void ADMISSIONS_set0_namingAuthority(long param_1,undefined8 param_2)

{
  NAMING_AUTHORITY_free(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



undefined8 ADMISSIONS_get0_professionInfos(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void ADMISSIONS_set0_professionInfos(long param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x10),PROFESSION_INFO_free);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



undefined8 PROFESSION_INFO_get0_addProfessionInfo(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



void PROFESSION_INFO_set0_addProfessionInfo(long param_1,undefined8 param_2)

{
  ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING **)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



undefined8 PROFESSION_INFO_get0_namingAuthority(undefined8 *param_1)

{
  return *param_1;
}



void PROFESSION_INFO_set0_namingAuthority(undefined8 *param_1,undefined8 param_2)

{
  NAMING_AUTHORITY_free(*param_1);
  *param_1 = param_2;
  return;
}



undefined8 PROFESSION_INFO_get0_professionItems(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



void PROFESSION_INFO_set0_professionItems(long param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 8),&ASN1_STRING_free);
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



undefined8 PROFESSION_INFO_get0_professionOIDs(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void PROFESSION_INFO_set0_professionOIDs(long param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x10),ASN1_OBJECT_free);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



undefined8 PROFESSION_INFO_get0_registrationNumber(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



void PROFESSION_INFO_set0_registrationNumber(long param_1,undefined8 param_2)

{
  ASN1_PRINTABLESTRING_free(*(ASN1_PRINTABLESTRING **)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


