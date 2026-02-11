
undefined8 decode_8(byte *param_1,long param_2,long *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_2 < 8) {
    return 0;
  }
  if ((char)base32_to_int[*param_1] < '\0') {
    return 0;
  }
  bVar1 = base32_to_int[param_1[1]];
  if ((char)bVar1 < '\0') {
    return 0;
  }
  pbVar3 = (byte *)*param_3;
  pbVar4 = pbVar3;
  if (*param_4 != 0) {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = base32_to_int[*param_1] << 3 | (char)bVar1 >> 2;
    *param_4 = *param_4 + -1;
  }
  if (param_1[2] == 0x3d) {
    if ((((param_1[3] != 0x3d) || (param_1[4] != 0x3d)) || (param_1[5] != 0x3d)) ||
       ((param_1[6] != 0x3d || (param_1[7] != 0x3d)))) goto LAB_00100170;
    bVar1 = bVar1 & 3;
  }
  else {
    if (((char)base32_to_int[param_1[2]] < '\0') ||
       (bVar2 = base32_to_int[param_1[3]], (char)bVar2 < '\0')) goto LAB_00100170;
    if (*param_4 != 0) {
      *pbVar4 = bVar1 << 6 | base32_to_int[param_1[2]] * '\x02' | (char)bVar2 >> 4;
      *param_4 = *param_4 + -1;
      pbVar4 = pbVar4 + 1;
    }
    if (param_1[4] == 0x3d) {
      if (((param_1[5] != 0x3d) || (param_1[6] != 0x3d)) || (param_1[7] != 0x3d)) goto LAB_00100170;
      bVar1 = bVar2 & 0xf;
    }
    else {
      bVar1 = base32_to_int[param_1[4]];
      if ((char)bVar1 < '\0') goto LAB_00100170;
      if (*param_4 != 0) {
        *pbVar4 = bVar2 << 4 | (char)bVar1 >> 1;
        *param_4 = *param_4 + -1;
        pbVar4 = pbVar4 + 1;
      }
      if (param_1[5] == 0x3d) {
        if ((param_1[6] != 0x3d) || (param_1[7] != 0x3d)) goto LAB_00100170;
        bVar1 = bVar1 & 1;
      }
      else {
        if (((char)base32_to_int[param_1[5]] < '\0') ||
           (bVar2 = base32_to_int[param_1[6]], (char)bVar2 < '\0')) goto LAB_00100170;
        pbVar3 = pbVar4;
        if (*param_4 != 0) {
          pbVar3 = pbVar4 + 1;
          *pbVar4 = bVar1 << 7 | base32_to_int[param_1[5]] << 2 | (char)bVar2 >> 3;
          *param_4 = *param_4 + -1;
        }
        pbVar4 = pbVar3;
        if (param_1[7] != 0x3d) {
          if ((char)base32_to_int[param_1[7]] < '\0') goto LAB_00100170;
          if (*param_4 != 0) {
            pbVar4 = pbVar3 + 1;
            *pbVar3 = bVar2 << 5 | base32_to_int[param_1[7]];
            *param_4 = *param_4 + -1;
          }
          goto LAB_00100156;
        }
        bVar1 = bVar2 & 7;
      }
    }
  }
  if (bVar1 == 0) {
LAB_00100156:
    *param_3 = (long)pbVar4;
    return 1;
  }
LAB_00100170:
  *param_3 = (long)pbVar4;
  return 0;
}



undefined4 isubase32(byte param_1)

{
  return CONCAT31((int3)(~(uint)(byte)base32_to_int[param_1] >> 8),
                  (byte)~(uint)(byte)base32_to_int[param_1] >> 7);
}



undefined4 isbase32(byte param_1)

{
  return CONCAT31((int3)(~(uint)(byte)base32_to_int[param_1] >> 8),
                  (byte)~(uint)(byte)base32_to_int[param_1] >> 7);
}



void base32_decode_ctx_init(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



void base32_encode(byte *param_1,long param_2,undefined1 *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  
  if (param_2 == 0) {
    if (param_4 != 0) {
      *param_3 = 0;
    }
  }
  else if (param_4 != 0) {
    bVar6 = *param_1;
    *param_3 = b32str_0[bVar6 >> 3];
    if (param_4 != 1) {
      pbVar1 = param_1 + param_2 + -1;
      pbVar2 = param_1 + param_2 + -3;
      pbVar3 = param_1 + param_2 + -2;
      pbVar4 = param_1 + param_2 + -5;
      pbVar5 = param_1 + param_2 + -4;
      do {
        if (pbVar1 == param_1) {
          param_3[1] = b32str_0[(uint)bVar6 * 4 & 0x1c];
          if (param_4 == 2) {
            return;
          }
          param_3[2] = 0x3d;
          if (param_4 == 3) {
            return;
          }
          param_3[3] = 0x3d;
          if (param_4 == 4) {
            return;
          }
LAB_00100431:
          param_3[4] = 0x3d;
          if (param_4 == 5) {
            return;
          }
LAB_0010043b:
          param_3[5] = 0x3d;
          if (param_4 == 6) {
            return;
          }
          param_3[6] = 0x3d;
joined_r0x0010044d:
          if (param_4 == 7) {
            return;
          }
          param_3[7] = 0x3d;
          if (param_4 == 8) {
            return;
          }
LAB_0010045d:
          param_3[8] = 0;
          return;
        }
        bVar7 = param_1[1];
        param_3[1] = b32str_0[(uint)bVar6 * 4 + (uint)(bVar7 >> 6) & 0x1f];
        if (param_4 == 2) {
          return;
        }
        param_3[2] = b32str_0[bVar7 >> 1 & 0x1f];
        if (param_4 == 3) {
          return;
        }
        if (param_1 == pbVar3) {
          param_3[3] = b32str_0[(uint)bVar7 * 0x10 & 0x10];
          if (param_4 == 4) {
            return;
          }
          goto LAB_00100431;
        }
        bVar6 = param_1[2];
        param_3[3] = b32str_0[(uint)bVar7 * 0x10 + (uint)(bVar6 >> 4) & 0x1f];
        if (param_4 == 4) {
          return;
        }
        if (pbVar2 == param_1) {
          param_3[4] = b32str_0[(uint)bVar6 + (uint)bVar6 & 0x1e];
          if (param_4 == 5) {
            return;
          }
          goto LAB_0010043b;
        }
        bVar7 = param_1[3];
        param_3[4] = b32str_0[(uint)bVar6 + (uint)bVar6 + (uint)(bVar7 >> 7) & 0x1f];
        if (param_4 == 5) {
          return;
        }
        param_3[5] = b32str_0[bVar7 >> 2 & 0x1f];
        if (param_4 == 6) {
          return;
        }
        if (pbVar5 == param_1) {
          param_3[6] = b32str_0[(uint)bVar7 * 8 & 0x18];
          goto joined_r0x0010044d;
        }
        bVar6 = param_1[4];
        param_3[6] = b32str_0[(uint)bVar7 * 8 + (uint)(bVar6 >> 5) & 0x1f];
        if (param_4 == 7) {
          return;
        }
        param_3[7] = b32str_0[bVar6 & 0x1f];
        param_4 = param_4 + -8;
        if (param_4 == 0) {
          return;
        }
        if (pbVar4 == param_1) goto LAB_0010045d;
        bVar6 = param_1[5];
        param_1 = param_1 + 5;
        param_3[8] = b32str_0[bVar6 >> 3];
        param_3 = param_3 + 8;
        if (param_4 == 1) {
          return;
        }
      } while( true );
    }
  }
  return;
}



size_t base32_encode_alloc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  size_t __size;
  
  lVar2 = param_2 / 5 + (ulong)(param_2 != (param_2 / 5) * 5);
  sVar3 = lVar2 * 8;
  if ((param_2 < 0) || (SEXT816((long)sVar3) != SEXT816(lVar2) * SEXT816(8))) {
    *param_3 = 0;
    __size = 0;
  }
  else {
    __size = sVar3 + 1;
    pvVar1 = malloc(__size);
    *param_3 = pvVar1;
    if (pvVar1 != (void *)0x0) {
      base32_encode(param_1,param_2,pvVar1,__size);
      return sVar3;
    }
  }
  return __size;
}



/* WARNING: Removing unreachable block (ram,0x00100795) */

char base32_decode_ctx(int *param_1,int *param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int *__s;
  int *piVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  bool bVar11;
  bool local_5b;
  long local_50;
  long local_48;
  long local_40;
  
  local_48 = *param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar10 = param_1 == (int *)0x0;
  if (bVar10) {
    bVar2 = true;
  }
  else {
    bVar2 = *param_1 == 0 && param_3 != 0;
  }
  bVar11 = param_3 != 0;
  local_5b = bVar10 || bVar11;
  lVar6 = local_48;
  local_50 = param_4;
LAB_00100658:
  do {
    lVar7 = param_3;
    lVar9 = lVar6;
    __s = param_2;
    if (bVar2) {
      while( true ) {
        __s = (int *)((long)param_2 + (param_3 - lVar7));
        cVar3 = decode_8(__s,lVar7,&local_50,&local_48);
        lVar6 = local_48;
        if (cVar3 == '\0') break;
        lVar7 = lVar7 + -8;
        lVar9 = local_48;
      }
    }
    cVar3 = lVar7 == 0 && local_5b;
    if ((bool)cVar3) goto LAB_00100708;
    param_2 = __s;
    if (lVar7 == 0) {
      local_50 = local_50 - (lVar9 - lVar6);
      piVar8 = __s;
      if (param_1 == (int *)0x0) {
        cVar3 = '\x01';
        lVar6 = lVar9;
        local_48 = lVar9;
LAB_00100708:
        *param_5 = *param_5 - lVar6;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return cVar3;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_0010069b:
      iVar1 = *param_1;
      lVar6 = (long)iVar1;
      if (iVar1 == 8) {
        *param_1 = 0;
        lVar6 = 0;
      }
      local_48 = lVar9;
      if (((lVar7 < 8) || (iVar1 != 8 && iVar1 != 0)) ||
         (pvVar4 = memchr(__s,10,8), pvVar4 != (void *)0x0)) {
        if (__s < piVar8) {
          do {
            iVar1 = *param_2;
            param_2 = (int *)((long)param_2 + 1);
            if ((char)iVar1 != '\n') {
              iVar5 = (int)lVar6 + 1;
              *param_1 = iVar5;
              *(char *)((long)param_1 + lVar6 + 4) = (char)iVar1;
              if (iVar5 == 8) {
                __s = param_1 + 1;
                lVar7 = 8;
                goto LAB_0010061d;
              }
              lVar6 = (long)iVar5;
            }
          } while (param_2 != piVar8);
        }
        lVar7 = (long)(int)lVar6;
        __s = param_1 + 1;
        if (lVar7 != 0) goto LAB_0010061d;
        goto LAB_001006f9;
      }
      lVar7 = 8;
      param_2 = __s + 2;
    }
    else {
      if (((char)*__s == '\n') && (!bVar10)) {
        param_2 = (int *)((long)__s + 1);
        param_3 = lVar7 + -1;
        goto LAB_00100658;
      }
      piVar8 = (int *)((long)__s + lVar7);
      local_50 = local_50 - (lVar9 - lVar6);
      local_48 = lVar9;
      if (param_1 != (int *)0x0) goto LAB_0010069b;
LAB_0010061d:
      if (((lVar7 < 8) && (!bVar10)) && (bVar10 || bVar11)) {
LAB_001006f9:
        cVar3 = '\x01';
        lVar6 = local_48;
        goto LAB_00100708;
      }
    }
    cVar3 = decode_8(__s,lVar7,&local_50,&local_48);
    lVar6 = local_48;
    if (cVar3 == '\0') goto LAB_00100708;
    param_3 = (long)piVar8 - (long)param_2;
  } while( true );
}



undefined1
base32_decode_alloc_ctx
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,size_t *param_5)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  size_t local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (param_3 >> 3) * 5 + 5;
  pvVar3 = malloc(local_38);
  *param_4 = pvVar3;
  if (pvVar3 != (void *)0x0) {
    cVar1 = base32_decode_ctx(param_1,param_2,param_3,pvVar3,&local_38);
    if (cVar1 == '\0') {
      free((void *)*param_4);
      *param_4 = 0;
      uVar2 = 0;
      goto LAB_001008a8;
    }
    if (param_5 != (size_t *)0x0) {
      *param_5 = local_38;
    }
  }
  uVar2 = 1;
LAB_001008a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


