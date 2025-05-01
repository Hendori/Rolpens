
undefined8
asn1_get_sequence_of_cb(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (*(long *)(puVar2 + 4) != 0) {
    puVar1 = (undefined4 *)calloc(1,0x20);
    *(undefined4 **)(puVar2 + 6) = puVar1;
    puVar2 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffffff96;
    }
  }
  *(undefined8 *)(puVar2 + 4) = param_3;
  *(undefined8 *)(puVar2 + 2) = param_4;
  *puVar2 = param_2;
  *(undefined4 **)(param_1 + 8) = puVar2;
  return 0;
}



undefined8 mbedtls_asn1_get_len(long *param_1,long param_2,ulong *param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  if (0 < param_2 - (long)pbVar2) {
    if ((char)*pbVar2 < '\0') {
      bVar4 = *pbVar2 & 0x7f;
      if (3 < (byte)(bVar4 - 1)) {
        return 0xffffff9c;
      }
      if (param_2 - (long)pbVar2 <= (long)(ulong)bVar4) {
        return 0xffffffa0;
      }
      pbVar5 = pbVar2 + 1;
      *param_3 = 0;
      *param_1 = (long)pbVar5;
      uVar3 = 0;
      pbVar6 = pbVar5;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar3 = uVar3 << 8 | (ulong)bVar1;
        *param_3 = uVar3;
        *param_1 = (long)pbVar6;
      } while (pbVar2 + (byte)(bVar4 + 1) != pbVar6);
      pbVar5 = pbVar5 + bVar4;
    }
    else {
      pbVar5 = pbVar2 + 1;
      *param_1 = (long)pbVar5;
      uVar3 = (ulong)*pbVar2;
      *param_3 = uVar3;
    }
    if (uVar3 <= (ulong)(param_2 - (long)pbVar5)) {
      return 0;
    }
  }
  return 0xffffffa0;
}



int asn1_get_tagged_int(undefined8 *param_1,byte *param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  ulong unaff_RBP;
  byte *pbVar9;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar5 = (byte *)*param_1;
  uVar4 = local_28;
  if (param_2 == pbVar5 || (long)param_2 - (long)pbVar5 < 0) {
    iVar3 = -0x60;
  }
  else if (param_3 == *pbVar5) {
    *param_1 = pbVar5 + 1;
    iVar3 = mbedtls_asn1_get_len(param_1,param_2,&local_28);
    uVar4 = local_28;
    if (iVar3 == 0) {
      if (local_28 != 0) {
        pcVar8 = (char *)*param_1;
        cVar6 = *pcVar8;
        if (-1 < cVar6) {
          bVar2 = false;
          while (cVar6 == '\0') {
            pcVar8 = pcVar8 + 1;
            *param_1 = pcVar8;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
              local_28 = 0;
              goto LAB_001001c9;
            }
            bVar2 = true;
            unaff_RBP = uVar4;
            cVar6 = *pcVar8;
          }
          if (bVar2) {
            local_28 = unaff_RBP;
          }
          if ((uVar4 < 5) && ((uVar4 != 4 || (-1 < *(char *)*param_1)))) {
LAB_001001c9:
            *param_4 = 0;
            uVar4 = local_28 - 1;
            if (local_28 != 0) {
              pbVar5 = (byte *)*param_1;
              uVar7 = 0;
              pbVar9 = pbVar5 + local_28;
              do {
                bVar1 = *pbVar5;
                pbVar5 = pbVar5 + 1;
                uVar7 = uVar7 << 8 | (uint)bVar1;
                *param_4 = uVar7;
                *param_1 = pbVar5;
              } while (pbVar5 != pbVar9);
            }
            goto LAB_00100206;
          }
        }
      }
      iVar3 = -100;
      uVar4 = local_28;
    }
  }
  else {
    iVar3 = -0x62;
  }
LAB_00100206:
  local_28 = uVar4;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_asn1_get_tag(long *param_1,byte *param_2,ulong *param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar2 = (byte *)*param_1;
  if (param_2 != pbVar2 && -1 < (long)param_2 - (long)pbVar2) {
    if (*pbVar2 != param_4) {
      return 0xffffff9e;
    }
    lVar4 = (long)param_2 - (long)(pbVar2 + 1);
    *param_1 = (long)(pbVar2 + 1);
    if (0 < lVar4) {
      if ((char)pbVar2[1] < '\0') {
        bVar5 = pbVar2[1] & 0x7f;
        if (3 < (byte)(bVar5 - 1)) {
          return 0xffffff9c;
        }
        if (lVar4 <= (long)(ulong)bVar5) {
          return 0xffffffa0;
        }
        pbVar6 = pbVar2 + 2;
        *param_3 = 0;
        *param_1 = (long)pbVar6;
        uVar3 = 0;
        pbVar7 = pbVar6;
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          uVar3 = uVar3 << 8 | (ulong)bVar1;
          *param_3 = uVar3;
          *param_1 = (long)pbVar7;
        } while (pbVar2 + (byte)(bVar5 + 2) != pbVar7);
        pbVar6 = pbVar6 + bVar5;
      }
      else {
        pbVar6 = pbVar2 + 2;
        *param_1 = (long)pbVar6;
        uVar3 = (ulong)pbVar2[1];
        *param_3 = uVar3;
      }
      if (uVar3 <= (ulong)((long)param_2 - (long)pbVar6)) {
        return 0;
      }
    }
  }
  return 0xffffffa0;
}



undefined8 mbedtls_asn1_get_bool(undefined8 *param_1,char *param_2,uint *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = (char *)*param_1;
  if (param_2 == pcVar1 || (long)param_2 - (long)pcVar1 < 0) {
    uVar2 = 0xffffffa0;
  }
  else if (*pcVar1 == '\x01') {
    *param_1 = pcVar1 + 1;
    uVar2 = mbedtls_asn1_get_len(param_1,param_2,&local_18);
    if ((int)uVar2 == 0) {
      if (local_18 == 1) {
        pcVar1 = (char *)*param_1;
        *param_3 = (uint)(*pcVar1 != '\0');
        *param_1 = pcVar1 + 1;
      }
      else {
        uVar2 = 0xffffff9c;
      }
    }
  }
  else {
    uVar2 = 0xffffff9e;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_asn1_get_int(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  asn1_get_tagged_int(param_1,param_2,2,param_3);
  return;
}



void mbedtls_asn1_get_enum(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  asn1_get_tagged_int(param_1,param_2,10,param_3);
  return;
}



undefined8 mbedtls_asn1_get_mpi(long *param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = (char *)*param_1;
  if (param_2 == pcVar1 || (long)param_2 - (long)pcVar1 < 0) {
    uVar2 = 0xffffffa0;
  }
  else if (*pcVar1 == '\x02') {
    *param_1 = (long)(pcVar1 + 1);
    plVar3 = param_1;
    uVar2 = mbedtls_asn1_get_len(param_1,param_2,&local_28);
    if ((int)uVar2 == 0) {
      uVar2 = mbedtls_mpi_read_binary(param_3,*plVar3,local_28);
      *param_1 = *param_1 + local_28;
    }
  }
  else {
    uVar2 = 0xffffff9e;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_asn1_get_bitstring(undefined8 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  
  pbVar2 = (byte *)*param_1;
  if (param_2 != pbVar2 && -1 < (long)param_2 - (long)pbVar2) {
    if (*pbVar2 != 3) {
      return 0xffffff9e;
    }
    *param_1 = pbVar2 + 1;
    uVar4 = mbedtls_asn1_get_len(param_1,param_2,param_3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    lVar3 = *param_3;
    if (lVar3 != 0) {
      *param_3 = lVar3 + -1;
      pbVar2 = (byte *)*param_1;
      bVar1 = *pbVar2;
      *(byte *)(param_3 + 1) = bVar1;
      if (7 < bVar1) {
        return 0xffffff9c;
      }
      param_3[2] = (long)(pbVar2 + 1);
      *param_1 = pbVar2 + lVar3;
      if (pbVar2 + lVar3 == param_2) {
        return uVar4 & 0xffffffff;
      }
      return 0xffffff9a;
    }
  }
  return 0xffffffa0;
}



int mbedtls_asn1_traverse_sequence_of
              (long *param_1,byte *param_2,byte param_3,byte param_4,byte param_5,byte param_6,
              code *param_7,undefined8 param_8)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  long *plVar6;
  long in_FS_OFFSET;
  int local_4c;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = (char *)*param_1;
  if ((long)param_2 - (long)pcVar2 < 1) {
    local_4c = -0x60;
  }
  else if (*pcVar2 == '0') {
    *param_1 = (long)(pcVar2 + 1);
    plVar6 = param_1;
    iVar4 = mbedtls_asn1_get_len();
    local_4c = iVar4;
    if (iVar4 == 0) {
      pbVar5 = (byte *)*plVar6;
      if (param_2 == pbVar5 + local_48) {
        while (local_4c = iVar4, pbVar5 < param_2) {
          while( true ) {
            *param_1 = (long)(pbVar5 + 1);
            bVar1 = *pbVar5;
            if ((bVar1 & param_3) != param_4) goto LAB_00100688;
            local_4c = mbedtls_asn1_get_len(param_1,param_2,&local_48);
            lVar3 = local_48;
            if (local_4c != 0) goto LAB_00100660;
            if (((param_5 & bVar1) == param_6) && (param_7 != (code *)0x0)) break;
            pbVar5 = (byte *)(*param_1 + local_48);
            *param_1 = (long)pbVar5;
            local_4c = iVar4;
            if (param_2 <= pbVar5) goto LAB_00100660;
          }
          local_4c = (*param_7)(param_8,bVar1,*param_1,local_48);
          if (local_4c != 0) break;
          pbVar5 = (byte *)(*param_1 + lVar3);
          *param_1 = (long)pbVar5;
        }
      }
      else {
        local_4c = -0x66;
      }
    }
  }
  else {
LAB_00100688:
    local_4c = -0x62;
  }
LAB_00100660:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_4c;
}



undefined8 mbedtls_asn1_get_bitstring_null(undefined8 *param_1,char *param_2,long *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)*param_1;
  if (param_2 == pcVar1 || (long)param_2 - (long)pcVar1 < 0) {
    return 0xffffffa0;
  }
  if (*pcVar1 == '\x03') {
    *param_1 = pcVar1 + 1;
    uVar2 = mbedtls_asn1_get_len(param_1,param_2,param_3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*param_3 != 0) {
      *param_3 = *param_3 + -1;
      if (*(char *)*param_1 == '\0') {
        *param_1 = (char *)*param_1 + 1;
        return uVar2;
      }
    }
    return 0xffffff98;
  }
  return 0xffffff9e;
}



void mbedtls_asn1_sequence_free(void *param_1)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  do {
    pvVar1 = *(void **)((long)param_1 + 0x18);
    free(param_1);
    param_1 = pvVar1;
  } while (pvVar1 != (void *)0x0);
  return;
}



void mbedtls_asn1_get_sequence_of
               (undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],undefined1 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = (undefined1  [16])0x0;
  param_3[1] = (undefined1  [16])0x0;
  mbedtls_asn1_traverse_sequence_of(param_1,param_2,0xff,param_4,0,0,0x100000);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_asn1_get_alg(long *param_1,byte *param_2,uint *param_3,uint *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = (char *)*param_1;
  if (0 < (long)param_2 - (long)pcVar1) {
    if (*pcVar1 != '0') {
LAB_00100900:
      iVar4 = -0x62;
      goto LAB_001008c2;
    }
    *param_1 = (long)(pcVar1 + 1);
    iVar4 = mbedtls_asn1_get_len(param_1,param_2,&local_38);
    if (iVar4 != 0) goto LAB_001008c2;
    pbVar2 = (byte *)*param_1;
    if (param_2 != pbVar2 && -1 < (long)param_2 - (long)pbVar2) {
      *param_3 = (uint)*pbVar2;
      if (0 < local_38) {
        if (*pbVar2 == 6) {
          *param_1 = (long)(pbVar2 + 1);
          iVar5 = mbedtls_asn1_get_len();
          iVar4 = iVar5;
          if (iVar5 == 0) {
            lVar3 = *param_1;
            *(long *)(param_3 + 4) = lVar3;
            pbVar6 = (byte *)(lVar3 + *(long *)(param_3 + 2));
            *param_1 = (long)pbVar6;
            if (pbVar6 == pbVar2 + local_38) {
              mbedtls_platform_zeroize(param_4,0x18);
            }
            else {
              *param_4 = (uint)*pbVar6;
              *param_1 = (long)(pbVar6 + 1);
              iVar4 = mbedtls_asn1_get_len();
              if (iVar4 == 0) {
                lVar3 = *param_1;
                *(long *)(param_4 + 4) = lVar3;
                pbVar6 = (byte *)(lVar3 + *(long *)(param_4 + 2));
                *param_1 = (long)pbVar6;
                iVar4 = iVar5;
                if (pbVar6 != pbVar2 + local_38) {
                  iVar4 = -0x66;
                }
              }
            }
          }
          goto LAB_001008c2;
        }
        goto LAB_00100900;
      }
    }
  }
  iVar4 = -0x60;
LAB_001008c2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* WARNING: Removing unreachable block (ram,0x0010096c) */
/* WARNING: Removing unreachable block (ram,0x00100984) */

ulong mbedtls_asn1_get_alg_null(void)

{
  long lVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = mbedtls_asn1_get_alg();
  if ((int)uVar2 == 0) {
    uVar2 = uVar2 & 0xffffffff;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



void mbedtls_asn1_free_named_data_list(undefined8 *param_1)

{
  void *__ptr;
  void *__ptr_00;
  
  __ptr = (void *)*param_1;
  while (__ptr != (void *)0x0) {
    __ptr_00 = *(void **)((long)__ptr + 0x10);
    *param_1 = *(undefined8 *)((long)__ptr + 0x30);
    free(__ptr_00);
    free(*(void **)((long)__ptr + 0x28));
    free(__ptr);
    __ptr = (void *)*param_1;
  }
  return;
}



void mbedtls_asn1_free_named_data_list_shallow(void *param_1)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  do {
    pvVar1 = *(void **)((long)param_1 + 0x30);
    free(param_1);
    param_1 = pvVar1;
  } while (pvVar1 != (void *)0x0);
  return;
}



long mbedtls_asn1_find_named_data(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    do {
      if ((*(size_t *)(param_1 + 8) == param_3) &&
         (iVar1 = memcmp(*(void **)(param_1 + 0x10),param_2,param_3), iVar1 == 0)) {
        return param_1;
      }
      param_1 = *(long *)(param_1 + 0x30);
    } while (param_1 != 0);
  }
  return param_1;
}


