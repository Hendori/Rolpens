
int convert_raw_to_der_single_int(char *param_1,long param_2,char *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t __n;
  int iVar4;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (*param_1 != '\0') {
      iVar4 = (int)param_2;
      __n = (size_t)iVar4;
      if (param_4 - (long)param_3 < (long)__n) {
LAB_001000d7:
        iVar2 = -0x6c;
      }
      else {
        local_38 = (char *)(param_4 - __n);
        pcVar3 = (char *)memcpy(local_38,param_1,__n);
        if (*pcVar3 < '\0') {
          if (pcVar3 == param_3 || (long)pcVar3 - (long)param_3 < 0) goto LAB_001000d7;
          local_38 = pcVar3 + -1;
          pcVar3[-1] = '\0';
          iVar4 = iVar4 + 1;
          __n = (size_t)iVar4;
        }
        iVar1 = mbedtls_asn1_write_len(&local_38,param_3,__n);
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = mbedtls_asn1_write_tag(&local_38,param_3,2);
          if (-1 < iVar2) {
            iVar2 = iVar4 + iVar1 + iVar2;
          }
        }
      }
      goto LAB_001000b0;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  iVar2 = -0x68;
LAB_001000b0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



ulong convert_der_to_raw_single_int(char *param_1,long param_2,long param_3,ulong param_4)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  char *local_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_1;
  uVar3 = mbedtls_asn1_get_tag(&local_40,param_1 + param_2,&local_38,2);
  if ((int)uVar3 != 0) goto LAB_0010016e;
  if ((local_38 == 0) || (*local_40 < '\0')) {
LAB_001001b0:
    uVar3 = 0xffffff98;
  }
  else {
    if (*local_40 == '\0') {
      pcVar1 = local_40 + 1;
      local_38 = local_38 - 1;
      if (local_38 != 0) {
        pcVar2 = local_40 + 1;
        local_40 = pcVar1;
        if (*pcVar2 == '\0') goto LAB_001001b0;
        goto LAB_0010014b;
      }
    }
    else {
LAB_0010014b:
      pcVar1 = local_40;
      if (param_4 < local_38) goto LAB_001001b0;
    }
    local_40 = pcVar1;
    uVar3 = local_38;
    pcVar1 = local_40;
    memcpy((void *)(param_3 + (param_4 - local_38)),local_40,local_38);
    uVar3 = (ulong)(uint)(((int)pcVar1 + (int)uVar3) - (int)param_1);
  }
LAB_0010016e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



int psa_generic_status_to_mbedtls(uint param_1)

{
  int iVar1;
  
  if (param_1 == 0xffffff7a) {
    return -0x72;
  }
  if ((int)param_1 < -0x85) {
    if ((param_1 & 0xfffffffd) != 0xffffff6d) {
      iVar1 = -0x6e;
      if (param_1 != 0xffffff69) {
        iVar1 = -1;
      }
      return iVar1;
    }
    return -0x70;
  }
  return -(uint)(param_1 != 0);
}



ulong psa_status_to_mbedtls(int param_1,short *param_2,long param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if (*param_2 == param_1) {
        return (ulong)(uint)(int)param_2[1];
      }
      lVar1 = lVar1 + 1;
      param_2 = param_2 + 2;
    } while (param_3 != lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00100250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}



int psa_pk_status_to_mbedtls(uint param_1)

{
  int iVar1;
  
  switch(param_1) {
  case 0xffffff67:
  case 0xffffff68:
  case 0xffffff6e:
    return -0x3e00;
  case 0xffffff73:
    return -0x3f80;
  case 0xffffff76:
    return -0x3880;
  case 0xffffff77:
    return -16000;
  case 0xffffff78:
    return -0x3d00;
  case 0xffffff79:
    return -0x3a80;
  case 0xffffff7a:
    return -0x3980;
  case 0xffffff7b:
    return -0x3f00;
  }
  if ((int)param_1 < -0x85) {
    if ((param_1 & 0xfffffffd) != 0xffffff6d) {
      iVar1 = -0x6e;
      if (param_1 != 0xffffff69) {
        iVar1 = -1;
      }
      return iVar1;
    }
    return -0x70;
  }
  return -(uint)(param_1 != 0);
}



undefined8 mbedtls_ecc_group_to_psa(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  switch(param_1) {
  default:
    uVar2 = 0;
    uVar1 = 0;
    break;
  case 1:
    uVar2 = 0xc0;
    uVar1 = 0x12;
    break;
  case 2:
    uVar2 = 0xe0;
    uVar1 = 0x12;
    break;
  case 3:
    uVar2 = 0x100;
    uVar1 = 0x12;
    break;
  case 4:
    uVar2 = 0x180;
    uVar1 = 0x12;
    break;
  case 5:
    uVar2 = 0x209;
    uVar1 = 0x12;
    break;
  case 6:
    uVar2 = 0x100;
    uVar1 = 0x30;
    break;
  case 7:
    uVar2 = 0x180;
    uVar1 = 0x30;
    break;
  case 8:
    uVar2 = 0x200;
    uVar1 = 0x30;
    break;
  case 9:
    uVar2 = 0xff;
    uVar1 = 0x41;
    break;
  case 10:
    uVar2 = 0xc0;
    uVar1 = 0x17;
    break;
  case 0xc:
    uVar2 = 0x100;
    uVar1 = 0x17;
    break;
  case 0xd:
    uVar2 = 0x1c0;
    uVar1 = 0x41;
  }
  *param_2 = uVar2;
  return uVar1;
}



char mbedtls_ecc_group_from_psa(byte param_1,ulong param_2)

{
  char cVar1;
  
  if (param_1 == 0x30) {
    cVar1 = '\a';
    if ((param_2 != 0x180) && (cVar1 = '\b', param_2 != 0x200)) {
      cVar1 = '\0';
      if (param_2 == 0x100) {
        cVar1 = '\x06';
      }
      return cVar1;
    }
  }
  else if (param_1 < 0x31) {
    if (param_1 == 0x12) {
      if (param_2 == 0x100) {
        return '\x03';
      }
      if (param_2 < 0x101) {
        cVar1 = '\x01';
        if (param_2 != 0xc0) {
          return (param_2 == 0xe0) * '\x02';
        }
      }
      else {
        cVar1 = '\x04';
        if (param_2 != 0x180) {
          return (param_2 == 0x209) * '\x05';
        }
      }
    }
    else {
      if (param_1 != 0x17) {
        return '\0';
      }
      cVar1 = '\n';
      if (param_2 != 0xc0) {
        cVar1 = '\0';
        if (param_2 == 0x100) {
          cVar1 = '\f';
        }
        return cVar1;
      }
    }
  }
  else {
    if (param_1 != 0x41) {
      return '\0';
    }
    cVar1 = '\t';
    if (param_2 != 0xff) {
      cVar1 = '\0';
      if (param_2 == 0x1c0) {
        cVar1 = '\r';
      }
      return cVar1;
    }
  }
  return cVar1;
}



undefined8 mbedtls_psa_get_random(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = psa_generate_random(param_2,param_3);
  if ((int)uVar1 != 0) {
    uVar1 = 0xffffffc4;
  }
  return uVar1;
}



ulong mbedtls_ecdsa_raw_to_der
                (long param_1,void *param_2,long param_3,void *param_4,long param_5,size_t *param_6)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  size_t __n;
  ulong __n_00;
  long in_FS_OFFSET;
  void *local_e0;
  undefined1 local_d8 [80];
  undefined1 local_88 [72];
  long local_40;
  
  pvVar1 = (void *)((long)param_4 + param_5);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __n_00 = param_1 + 7U >> 3;
  local_e0 = pvVar1;
  if ((param_1 == 0) || (__n_00 * 2 != param_3)) {
    uVar6 = 0xffffff98;
  }
  else if (param_1 + 7U < 0x218) {
    memcpy(local_d8,param_2,__n_00);
    pvVar5 = memcpy(local_88,(void *)((long)param_2 + __n_00),__n_00);
    uVar3 = convert_raw_to_der_single_int(pvVar5,__n_00,param_4,pvVar1);
    uVar6 = (ulong)uVar3;
    if (-1 < (int)uVar3) {
      local_e0 = (void *)((long)local_e0 - (long)(int)uVar3);
      iVar4 = convert_raw_to_der_single_int(local_d8,__n_00,param_4);
      uVar6 = (ulong)iVar4;
      if (-1 < iVar4) {
        lVar2 = (long)(int)uVar3 + uVar6;
        local_e0 = (void *)((long)local_e0 - uVar6);
        iVar4 = mbedtls_asn1_write_len(&local_e0,param_4,lVar2);
        uVar6 = (ulong)iVar4;
        if (-1 < iVar4) {
          uVar3 = mbedtls_asn1_write_tag(&local_e0,param_4,0x30);
          if ((int)uVar3 < 0) {
            uVar6 = (ulong)uVar3;
          }
          else {
            __n = uVar6 + lVar2 + (long)(int)uVar3;
            memmove(param_4,local_e0,__n);
            *param_6 = __n;
            uVar6 = 0;
          }
        }
      }
    }
  }
  else {
    uVar6 = 0xffffff94;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_ecdsa_der_to_raw
              (long param_1,long param_2,long param_3,void *param_4,ulong param_5,ulong *param_6)

{
  ulong __n;
  int iVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  undefined1 local_c8 [136];
  long local_40;
  
  uVar3 = param_1 + 7U >> 3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = param_2;
  if (param_1 == 0) {
    iVar2 = -0x68;
  }
  else {
    __n = uVar3 * 2;
    if (0x84 < param_5) {
      param_5 = 0x84;
    }
    if (param_5 < __n) {
      iVar2 = -0x6c;
    }
    else {
      iVar1 = mbedtls_asn1_get_tag(&local_d8,param_2 + param_3,&local_d0,0x30);
      iVar2 = iVar1;
      if (iVar1 == 0) {
        memset(local_c8,0,__n);
        iVar2 = convert_der_to_raw_single_int(local_d8,local_d0,local_c8,uVar3);
        if (-1 < iVar2) {
          local_d8 = local_d8 + iVar2;
          local_d0 = local_d0 - iVar2;
          iVar2 = convert_der_to_raw_single_int(local_d8,local_d0,local_c8 + uVar3,uVar3);
          if (-1 < iVar2) {
            local_d0 = local_d0 - iVar2;
            local_d8 = local_d8 + iVar2;
            if (local_d8 - param_2 == param_3) {
              memcpy(param_4,local_c8,__n);
              *param_6 = __n;
              iVar2 = iVar1;
            }
            else {
              iVar2 = -0x66;
            }
          }
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


