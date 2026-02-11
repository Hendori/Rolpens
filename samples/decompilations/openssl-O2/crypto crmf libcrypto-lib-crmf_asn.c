
undefined1 * OSSL_CRMF_PRIVATEKEYINFO_it(void)

{
  return local_it_21;
}



undefined1 * OSSL_CRMF_ENCKEYWITHID_IDENTIFIER_it(void)

{
  return local_it_20;
}



undefined1 * OSSL_CRMF_CERTID_it(void)

{
  return local_it_18;
}



undefined1 * OSSL_CRMF_ENCRYPTEDVALUE_it(void)

{
  return local_it_17;
}



undefined1 * OSSL_CRMF_SINGLEPUBINFO_it(void)

{
  return local_it_15;
}



undefined1 * OSSL_CRMF_PKIPUBLICATIONINFO_it(void)

{
  return local_it_14;
}



undefined1 * OSSL_CRMF_PKMACVALUE_it(void)

{
  return local_it_13;
}



undefined1 * OSSL_CRMF_POPOPRIVKEY_it(void)

{
  return local_it_12;
}



undefined1 * OSSL_CRMF_POPOSIGNINGKEYINPUT_AUTHINFO_it(void)

{
  return local_it_10;
}



undefined1 * OSSL_CRMF_POPOSIGNINGKEYINPUT_it(void)

{
  return local_it_9;
}



undefined1 * OSSL_CRMF_POPOSIGNINGKEY_it(void)

{
  return local_it_8;
}



undefined1 * OSSL_CRMF_POPO_it(void)

{
  return local_it_7;
}



undefined1 * OSSL_CRMF_ATTRIBUTETYPEANDVALUE_adb(void)

{
  return internal_adb_5;
}



undefined1 * OSSL_CRMF_ATTRIBUTETYPEANDVALUE_it(void)

{
  return local_it_6;
}



undefined1 * OSSL_CRMF_OPTIONALVALIDITY_it(void)

{
  return local_it_4;
}



undefined1 * OSSL_CRMF_CERTTEMPLATE_it(void)

{
  return local_it_3;
}



undefined1 * OSSL_CRMF_CERTREQUEST_it(void)

{
  return local_it_2;
}



undefined1 * OSSL_CRMF_MSG_it(void)

{
  return local_it_1;
}



void d2i_OSSL_CRMF_PRIVATEKEYINFO(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PRIVATEKEYINFO_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_PRIVATEKEYINFO(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PRIVATEKEYINFO_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_PRIVATEKEYINFO_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PRIVATEKEYINFO_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_PRIVATEKEYINFO_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PRIVATEKEYINFO_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CRMF_ENCKEYWITHID_IDENTIFIER(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCKEYWITHID_IDENTIFIER_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_ENCKEYWITHID_IDENTIFIER(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCKEYWITHID_IDENTIFIER_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_ENCKEYWITHID_IDENTIFIER_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCKEYWITHID_IDENTIFIER_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_ENCKEYWITHID_IDENTIFIER_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCKEYWITHID_IDENTIFIER_it();
  ASN1_item_free(param_1,it);
  return;
}



undefined1 * OSSL_CRMF_ENCKEYWITHID_it(void)

{
  return local_it_19;
}



void d2i_OSSL_CRMF_ENCKEYWITHID(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCKEYWITHID_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_ENCKEYWITHID(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCKEYWITHID_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_ENCKEYWITHID_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCKEYWITHID_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_ENCKEYWITHID_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCKEYWITHID_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CRMF_CERTID(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTID_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_CERTID(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTID_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_CERTID_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTID_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_CERTID_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTID_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_CRMF_CERTID_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTID_it();
  ASN1_item_dup(it,param_1);
  return;
}



void d2i_OSSL_CRMF_ENCRYPTEDVALUE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCRYPTEDVALUE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_ENCRYPTEDVALUE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCRYPTEDVALUE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_ENCRYPTEDVALUE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCRYPTEDVALUE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_ENCRYPTEDVALUE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCRYPTEDVALUE_it();
  ASN1_item_free(param_1,it);
  return;
}



undefined1 * OSSL_CRMF_ENCRYPTEDKEY_it(void)

{
  return local_it_16;
}



void d2i_OSSL_CRMF_ENCRYPTEDKEY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCRYPTEDKEY_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_ENCRYPTEDKEY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCRYPTEDKEY_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_ENCRYPTEDKEY_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCRYPTEDKEY_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_ENCRYPTEDKEY_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ENCRYPTEDKEY_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CRMF_SINGLEPUBINFO(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_SINGLEPUBINFO_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_SINGLEPUBINFO(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_SINGLEPUBINFO_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_SINGLEPUBINFO_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_SINGLEPUBINFO_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_SINGLEPUBINFO_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_SINGLEPUBINFO_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CRMF_PKIPUBLICATIONINFO(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PKIPUBLICATIONINFO_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_PKIPUBLICATIONINFO(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PKIPUBLICATIONINFO_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_PKIPUBLICATIONINFO_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PKIPUBLICATIONINFO_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_PKIPUBLICATIONINFO_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PKIPUBLICATIONINFO_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_CRMF_PKIPUBLICATIONINFO_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PKIPUBLICATIONINFO_it();
  ASN1_item_dup(it,param_1);
  return;
}



void d2i_OSSL_CRMF_PKMACVALUE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PKMACVALUE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_PKMACVALUE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PKMACVALUE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_PKMACVALUE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PKMACVALUE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_PKMACVALUE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PKMACVALUE_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CRMF_POPOPRIVKEY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOPRIVKEY_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_POPOPRIVKEY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOPRIVKEY_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_POPOPRIVKEY_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOPRIVKEY_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_POPOPRIVKEY_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOPRIVKEY_it();
  ASN1_item_free(param_1,it);
  return;
}



undefined1 * OSSL_CRMF_PBMPARAMETER_it(void)

{
  return local_it_11;
}



void d2i_OSSL_CRMF_PBMPARAMETER(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PBMPARAMETER_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_PBMPARAMETER(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PBMPARAMETER_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_PBMPARAMETER_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PBMPARAMETER_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_PBMPARAMETER_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_PBMPARAMETER_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CRMF_POPOSIGNINGKEYINPUT_AUTHINFO(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEYINPUT_AUTHINFO_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_POPOSIGNINGKEYINPUT_AUTHINFO(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEYINPUT_AUTHINFO_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_POPOSIGNINGKEYINPUT_AUTHINFO_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEYINPUT_AUTHINFO_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_POPOSIGNINGKEYINPUT_AUTHINFO_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEYINPUT_AUTHINFO_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CRMF_POPOSIGNINGKEYINPUT(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEYINPUT_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_POPOSIGNINGKEYINPUT(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEYINPUT_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_POPOSIGNINGKEYINPUT_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEYINPUT_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_POPOSIGNINGKEYINPUT_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEYINPUT_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CRMF_POPOSIGNINGKEY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEY_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_POPOSIGNINGKEY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEY_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_POPOSIGNINGKEY_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEY_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_POPOSIGNINGKEY_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPOSIGNINGKEY_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CRMF_POPO(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPO_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_POPO(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPO_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_POPO_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPO_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_POPO_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_POPO_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CRMF_ATTRIBUTETYPEANDVALUE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_ATTRIBUTETYPEANDVALUE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_ATTRIBUTETYPEANDVALUE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_it();
  ASN1_item_dup(it,param_1);
  return;
}



void d2i_OSSL_CRMF_OPTIONALVALIDITY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_OPTIONALVALIDITY_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_OPTIONALVALIDITY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_OPTIONALVALIDITY_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_OPTIONALVALIDITY_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_OPTIONALVALIDITY_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_OPTIONALVALIDITY_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_OPTIONALVALIDITY_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CRMF_CERTTEMPLATE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTTEMPLATE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_CERTTEMPLATE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTTEMPLATE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_CERTTEMPLATE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTTEMPLATE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_CERTTEMPLATE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTTEMPLATE_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_CRMF_CERTTEMPLATE_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTTEMPLATE_it();
  ASN1_item_dup(it,param_1);
  return;
}



void d2i_OSSL_CRMF_CERTREQUEST(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTREQUEST_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_CERTREQUEST(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTREQUEST_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_CERTREQUEST_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTREQUEST_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_CERTREQUEST_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTREQUEST_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_CRMF_CERTREQUEST_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_CERTREQUEST_it();
  ASN1_item_dup(it,param_1);
  return;
}



void d2i_OSSL_CRMF_MSG(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_MSG_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_MSG(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_MSG_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_MSG_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_MSG_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_MSG_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_MSG_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_CRMF_MSG_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_MSG_it();
  ASN1_item_dup(it,param_1);
  return;
}



undefined1 * OSSL_CRMF_MSGS_it(void)

{
  return local_it_0;
}



void d2i_OSSL_CRMF_MSGS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_MSGS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CRMF_MSGS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_MSGS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CRMF_MSGS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_MSGS_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CRMF_MSGS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CRMF_MSGS_it();
  ASN1_item_free(param_1,it);
  return;
}


