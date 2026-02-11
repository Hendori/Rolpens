
undefined1 * OSSL_HASH_it(void)

{
  return local_it_4;
}



undefined1 * OSSL_INFO_SYNTAX_POINTER_it(void)

{
  return local_it_3;
}



undefined1 * OSSL_INFO_SYNTAX_it(void)

{
  return local_it_2;
}



undefined1 * OSSL_PRIVILEGE_POLICY_ID_it(void)

{
  return local_it_1;
}



undefined1 * OSSL_ATTRIBUTE_DESCRIPTOR_it(void)

{
  return local_it_0;
}



bool i2r_OSSL_ATTRIBUTE_DESCRIPTOR(undefined8 param_1,undefined8 *param_2,BIO *param_3,uint param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  long *plVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  long in_FS_OFFSET;
  char acStack_e8 [80];
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = OBJ_obj2txt(acStack_e8,0x50,(ASN1_OBJECT *)*param_2,1);
  if (0 < iVar5) {
    iVar5 = BIO_printf(param_3,"%*sIdentifier: %s\n",(ulong)param_4,&_LC0,acStack_e8);
    if (0 < iVar5) {
      iVar5 = BIO_printf(param_3,"%*sSyntax:\n",(ulong)param_4,&_LC0);
      if (0 < iVar5) {
        uVar7 = param_4 + 4;
        iVar5 = BIO_printf(param_3,"%*s%.*s",(ulong)uVar7,&_LC0,(ulong)*(uint *)param_2[1],
                           *(undefined8 *)((uint *)param_2[1] + 2));
        if (0 < iVar5) {
          iVar5 = BIO_puts(param_3,"\n\n");
          if (0 < iVar5) {
            puVar1 = (uint *)param_2[2];
            if (puVar1 != (uint *)0x0) {
              iVar5 = BIO_printf(param_3,"%*sName: %.*s\n",(ulong)param_4,&_LC0,(ulong)*puVar1,
                                 *(undefined8 *)(puVar1 + 2));
              if (iVar5 < 1) goto LAB_001003b8;
            }
            puVar1 = (uint *)param_2[3];
            if (puVar1 != (uint *)0x0) {
              iVar5 = BIO_printf(param_3,"%*sDescription: %.*s\n",(ulong)param_4,&_LC0,
                                 (ulong)*puVar1,*(undefined8 *)(puVar1 + 2));
              if (iVar5 < 1) goto LAB_001003b8;
            }
            iVar5 = BIO_printf(param_3,"%*sDomination Rule:\n",(ulong)param_4,&_LC0);
            if (0 < iVar5) {
              puVar2 = (undefined8 *)param_2[4];
              iVar5 = OBJ_obj2txt(local_98,0x50,(ASN1_OBJECT *)*puVar2,1);
              if (0 < iVar5) {
                iVar5 = BIO_printf(param_3,"%*sPrivilege Policy Identifier: %s\n",(ulong)uVar7,&_LC0
                                   ,local_98);
                if (0 < iVar5) {
                  iVar5 = BIO_printf(param_3,"%*sPrivilege Policy Syntax:\n",(ulong)uVar7,&_LC0);
                  if (0 < iVar5) {
                    piVar3 = (int *)puVar2[1];
                    if (*piVar3 == 0) {
                      iVar5 = BIO_printf(param_3,"%*sContent: ",(ulong)(param_4 + 8),&_LC0);
                      if (0 < iVar5) {
                        iVar5 = BIO_printf(param_3,"%.*s",(ulong)**(uint **)(piVar3 + 2),
                                           *(undefined8 *)(*(uint **)(piVar3 + 2) + 2));
                        if (0 < iVar5) {
                          iVar5 = BIO_puts(param_3,"\n");
                          bVar6 = 0 < iVar5;
                          goto LAB_001003bb;
                        }
                      }
                    }
                    else if (*piVar3 == 1) {
                      iVar5 = BIO_printf(param_3,"%*sPointer:\n",(ulong)(param_4 + 8),&_LC0);
                      if (0 < iVar5) {
                        uVar7 = param_4 + 0xc;
                        puVar2 = *(undefined8 **)(piVar3 + 2);
                        iVar5 = BIO_printf(param_3,"%*sNames:\n",(ulong)uVar7,&_LC0);
                        if (0 < iVar5) {
                          iVar5 = OSSL_GENERAL_NAMES_print(param_3,*puVar2,uVar7);
                          if (0 < iVar5) {
                            iVar5 = BIO_puts(param_3,"\n");
                            if (0 < iVar5) {
                              bVar6 = true;
                              if (puVar2[1] == 0) goto LAB_001003bb;
                              iVar5 = BIO_printf(param_3,"%*sHash:\n",(ulong)uVar7,&_LC0);
                              if (0 < iVar5) {
                                uVar7 = param_4 + 0x10;
                                plVar4 = (long *)puVar2[1];
                                iVar5 = BIO_printf(param_3,"%*sAlgorithm: ",(ulong)uVar7,&_LC0);
                                if (0 < iVar5) {
                                  iVar5 = i2a_ASN1_OBJECT(param_3,*(ASN1_OBJECT **)*plVar4);
                                  if (0 < iVar5) {
                                    iVar5 = BIO_puts(param_3,"\n");
                                    if (0 < iVar5) {
                                      if (*(long *)(*plVar4 + 8) == 0) {
LAB_00100379:
                                        iVar5 = BIO_printf(param_3,"%*sHash Value: ",(ulong)uVar7,
                                                           &_LC0);
                                        if (0 < iVar5) {
                                          iVar5 = ossl_bio_print_hex(param_3,*(undefined8 *)
                                                                              ((undefined4 *)
                                                                               plVar4[1] + 2),
                                                                     *(undefined4 *)plVar4[1]);
                                          bVar6 = 0 < iVar5;
                                          goto LAB_001003bb;
                                        }
                                      }
                                      else {
                                        iVar5 = BIO_printf(param_3,"%*sParameter: ",(ulong)uVar7,
                                                           &_LC0);
                                        if (0 < iVar5) {
                                          iVar5 = ossl_print_attribute_value
                                                            (param_3,0,*(undefined8 *)(*plVar4 + 8),
                                                             param_4 + 0x14);
                                          if (0 < iVar5) {
                                            iVar5 = BIO_puts(param_3,"\n");
                                            if (0 < iVar5) goto LAB_00100379;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001003b8:
  bVar6 = false;
LAB_001003bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void d2i_OSSL_HASH(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_HASH_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_HASH(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_HASH_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_HASH_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_HASH_it();
  ASN1_item_new(it);
  return;
}



void OSSL_HASH_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_HASH_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_INFO_SYNTAX(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_INFO_SYNTAX_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_INFO_SYNTAX(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_INFO_SYNTAX_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_INFO_SYNTAX_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_INFO_SYNTAX_it();
  ASN1_item_new(it);
  return;
}



void OSSL_INFO_SYNTAX_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_INFO_SYNTAX_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_INFO_SYNTAX_POINTER(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_INFO_SYNTAX_POINTER_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_INFO_SYNTAX_POINTER(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_INFO_SYNTAX_POINTER_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_INFO_SYNTAX_POINTER_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_INFO_SYNTAX_POINTER_it();
  ASN1_item_new(it);
  return;
}



void OSSL_INFO_SYNTAX_POINTER_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_INFO_SYNTAX_POINTER_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_PRIVILEGE_POLICY_ID(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_PRIVILEGE_POLICY_ID_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_PRIVILEGE_POLICY_ID(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_PRIVILEGE_POLICY_ID_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_PRIVILEGE_POLICY_ID_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_PRIVILEGE_POLICY_ID_it();
  ASN1_item_new(it);
  return;
}



void OSSL_PRIVILEGE_POLICY_ID_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_PRIVILEGE_POLICY_ID_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_ATTRIBUTE_DESCRIPTOR(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_DESCRIPTOR_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ATTRIBUTE_DESCRIPTOR(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_DESCRIPTOR_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ATTRIBUTE_DESCRIPTOR_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_DESCRIPTOR_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ATTRIBUTE_DESCRIPTOR_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_DESCRIPTOR_it();
  ASN1_item_free(param_1,it);
  return;
}


