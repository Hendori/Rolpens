
undefined8 int_def_cb(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  size_t __n;
  size_t sVar2;
  ulong uVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar3 = (ulong)param_2;
  sVar2 = 4;
  if (uVar3 < 5) {
    sVar2 = uVar3;
  }
  iVar1 = strncmp(param_1,"ALL",sVar2);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0xffff;
  }
  else {
    iVar1 = strncmp(param_1,"RSA",sVar2);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 1;
    }
    else {
      iVar1 = strncmp(param_1,"DSA",sVar2);
      if (iVar1 == 0) {
        *param_3 = *param_3 | 2;
      }
      else {
        sVar2 = 3;
        if (uVar3 < 4) {
          sVar2 = uVar3;
        }
        iVar1 = strncmp(param_1,"DH",sVar2);
        if (iVar1 == 0) {
          *param_3 = *param_3 | 4;
        }
        else {
          iVar1 = strncmp(param_1,"EC",sVar2);
          if (iVar1 == 0) {
            *param_3 = *param_3 | 0x800;
          }
          else {
            sVar2 = 5;
            if (uVar3 < 6) {
              sVar2 = uVar3;
            }
            iVar1 = strncmp(param_1,"RAND",sVar2);
            if (iVar1 == 0) {
              *param_3 = *param_3 | 8;
            }
            else {
              __n = 8;
              if (uVar3 < 9) {
                __n = uVar3;
              }
              iVar1 = strncmp(param_1,"CIPHERS",__n);
              if (iVar1 == 0) {
                *param_3 = *param_3 | 0x40;
              }
              else {
                iVar1 = strncmp(param_1,"DIGESTS",__n);
                if (iVar1 == 0) {
                  *param_3 = *param_3 | 0x80;
                }
                else {
                  iVar1 = strncmp(param_1,"PKEY",sVar2);
                  if (iVar1 == 0) {
                    *param_3 = *param_3 | 0x600;
                  }
                  else {
                    sVar2 = 0xc;
                    if (uVar3 < 0xd) {
                      sVar2 = uVar3;
                    }
                    iVar1 = strncmp(param_1,"PKEY_CRYPTO",sVar2);
                    if (iVar1 == 0) {
                      *param_3 = *param_3 | 0x200;
                    }
                    else {
                      sVar2 = 10;
                      if (uVar3 < 0xb) {
                        sVar2 = uVar3;
                      }
                      iVar1 = strncmp(param_1,"PKEY_ASN1",sVar2);
                      if (iVar1 != 0) {
                        return 0;
                      }
                      *param_3 = *param_3 | 0x400;
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
  return 1;
}



int ENGINE_set_default(ENGINE *e,uint flags)

{
  int iVar1;
  
  if ((((((((flags & 0x40) == 0) || (iVar1 = ENGINE_set_default_ciphers(e), iVar1 != 0)) &&
         (((flags & 0x80) == 0 || (iVar1 = ENGINE_set_default_digests(e), iVar1 != 0)))) &&
        (((flags & 1) == 0 || (iVar1 = ENGINE_set_default_RSA(e), iVar1 != 0)))) &&
       (((flags & 2) == 0 || (iVar1 = ENGINE_set_default_DSA(e), iVar1 != 0)))) &&
      (((((flags & 4) == 0 || (iVar1 = ENGINE_set_default_DH(e), iVar1 != 0)) &&
        (((flags & 0x800) == 0 || (iVar1 = ENGINE_set_default_EC(e), iVar1 != 0)))) &&
       (((flags & 8) == 0 || (iVar1 = ENGINE_set_default_RAND(e), iVar1 != 0)))))) &&
     (((flags & 0x200) == 0 || (iVar1 = ENGINE_set_default_pkey_meths(e), iVar1 != 0)))) {
    if ((flags & 0x400) == 0) {
      return 1;
    }
    iVar1 = ENGINE_set_default_pkey_asn1_meths(e);
    return (int)(iVar1 != 0);
  }
  return 0;
}



int ENGINE_set_default_string(ENGINE *e,char *def_list)

{
  int iVar1;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  iVar1 = CONF_parse_list(def_list,0x2c,1,int_def_cb,&local_24);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_fat.c",0x56,"ENGINE_set_default_string");
    ERR_set_error(0x26,0x96,"str=%s",def_list);
    iVar1 = 0;
  }
  else {
    iVar1 = ENGINE_set_default(e,local_24);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ENGINE_register_complete(ENGINE *e)

{
  ENGINE_register_ciphers(e);
  ENGINE_register_digests(e);
  ENGINE_register_RSA(e);
  ENGINE_register_DSA(e);
  ENGINE_register_DH(e);
  ENGINE_register_EC(e);
  ENGINE_register_RAND(e);
  ENGINE_register_pkey_meths(e);
  ENGINE_register_pkey_asn1_meths(e);
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ENGINE_register_all_complete(void)

{
  ENGINE *e;
  
  e = ENGINE_get_first();
  do {
    if (e == (ENGINE *)0x0) {
      return 1;
    }
    while (((byte)e[0x98] & 8) != 0) {
      e = ENGINE_get_next(e);
      if (e == (ENGINE *)0x0) {
        return 1;
      }
    }
    ENGINE_register_complete(e);
    e = ENGINE_get_next(e);
  } while( true );
}


