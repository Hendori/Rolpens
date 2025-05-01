
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void stbl_module_finish(void)

{
  ASN1_STRING_TABLE_cleanup();
  return;
}



undefined8 stbl_module_init(CONF_IMODULE *param_1,CONF *param_2)

{
  char cVar1;
  char *line;
  char *__s1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  stack_st_CONF_VALUE *psVar5;
  long lVar6;
  stack_st_CONF_VALUE *psVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  char *local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = CONF_imodule_get_value(param_1);
  psVar5 = NCONF_get_section(param_2,pcVar4);
  if (psVar5 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/asn_mstbl.c",0x1d,"stbl_module_init");
    ERR_set_error(0xd,0xac,0);
LAB_00100264:
    uVar8 = 0;
  }
  else {
    iVar10 = 0;
    iVar2 = OPENSSL_sk_num(psVar5);
    if (0 < iVar2) {
      do {
        lVar6 = OPENSSL_sk_value(psVar5,iVar10);
        local_48 = 0;
        pcVar4 = *(char **)(lVar6 + 8);
        line = *(char **)(lVar6 + 0x10);
        iVar2 = OBJ_sn2nid(pcVar4);
        if (((iVar2 == 0) && (iVar2 = OBJ_ln2nid(pcVar4), iVar2 == 0)) ||
           (psVar7 = X509V3_parse_list(line), psVar7 == (stack_st_CONF_VALUE *)0x0)) {
          ERR_new();
          ERR_set_debug("crypto/asn1/asn_mstbl.c",0x6b,"do_tcreate");
          ERR_set_error(0xd,0xda,"name=%s, value=%s",pcVar4,line);
          OPENSSL_sk_pop_free(0,&X509V3_conf_free);
LAB_00100238:
          ERR_new();
          ERR_set_debug("crypto/asn1/asn_mstbl.c",0x23,"stbl_module_init");
          ERR_set_error(0xd,0xdb,0);
          goto LAB_00100264;
        }
        local_88 = 0xffffffffffffffff;
        local_78 = 0xffffffffffffffff;
        local_80 = 0;
        for (iVar9 = 0; iVar3 = OPENSSL_sk_num(psVar7), iVar9 < iVar3; iVar9 = iVar9 + 1) {
          lVar6 = OPENSSL_sk_value(psVar7,iVar9);
          pcVar4 = *(char **)(lVar6 + 0x10);
          if (pcVar4 == (char *)0x0) goto LAB_001001e0;
          __s1 = *(char **)(lVar6 + 8);
          iVar3 = strcmp(__s1,"min");
          if (iVar3 == 0) {
            local_88 = strtoul(pcVar4,&local_50,0);
            cVar1 = *local_50;
joined_r0x001001db:
            if (cVar1 != '\0') {
LAB_001001e0:
              ERR_new();
              ERR_set_debug("crypto/asn1/asn_mstbl.c",0x66,"do_tcreate");
              pcVar4 = *(char **)(lVar6 + 0x10);
              if (*(char **)(lVar6 + 0x10) == (char *)0x0) {
                pcVar4 = line;
              }
              ERR_set_error(0xd,0xda,"field=%s, value=%s",*(undefined8 *)(lVar6 + 8),pcVar4);
              OPENSSL_sk_pop_free(psVar7,&X509V3_conf_free);
              goto LAB_00100238;
            }
          }
          else {
            iVar3 = strcmp(__s1,"max");
            if (iVar3 == 0) {
              local_78 = strtoul(pcVar4,&local_50,0);
              cVar1 = *local_50;
              goto joined_r0x001001db;
            }
            iVar3 = strcmp(__s1,"mask");
            if (iVar3 == 0) {
              iVar3 = ASN1_str2mask(pcVar4,&local_48);
              if ((iVar3 != 0) && (local_48 != 0)) goto LAB_00100180;
              goto LAB_001001e0;
            }
            iVar3 = strcmp(__s1,"flags");
            if (iVar3 != 0) goto LAB_001001e0;
            iVar3 = strcmp(pcVar4,"nomask");
            if (iVar3 == 0) {
              local_80 = 2;
            }
            else {
              iVar3 = strcmp(pcVar4,"none");
              if (iVar3 != 0) goto LAB_001001e0;
              local_80 = 1;
            }
          }
LAB_00100180:
        }
        iVar2 = ASN1_STRING_TABLE_add(iVar2,local_88,local_78,local_48,local_80);
        if (iVar2 == 0) {
          ERR_new();
          ERR_set_debug("crypto/asn1/asn_mstbl.c",0x71,"do_tcreate");
          ERR_set_error(0xd,0x8000d,0);
          OPENSSL_sk_pop_free(psVar7,&X509V3_conf_free);
          goto LAB_00100238;
        }
        iVar10 = iVar10 + 1;
        OPENSSL_sk_pop_free(psVar7,&X509V3_conf_free);
        iVar2 = OPENSSL_sk_num(psVar5);
      } while (iVar10 < iVar2);
    }
    uVar8 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ASN1_add_stable_module(void)

{
  CONF_module_add("stbl_section",stbl_module_init,stbl_module_finish);
  return;
}


