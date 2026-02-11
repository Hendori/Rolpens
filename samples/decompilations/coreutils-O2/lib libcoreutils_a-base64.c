
undefined8 decode_4(byte *param_1,long param_2,long *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_2 < 2) {
    return 0;
  }
  if ((char)base64_to_int[*param_1] < '\0') {
    return 0;
  }
  bVar1 = base64_to_int[param_1[1]];
  if ((char)bVar1 < '\0') {
    return 0;
  }
  pbVar3 = (byte *)*param_3;
  pbVar4 = pbVar3;
  if (*param_4 != 0) {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = base64_to_int[*param_1] << 2 | (char)bVar1 >> 4;
    *param_4 = *param_4 + -1;
  }
  if (param_2 == 2) goto LAB_001000d0;
  if (param_1[2] == 0x3d) {
    if ((param_2 != 4) || (param_1[3] != 0x3d)) goto LAB_001000d0;
    bVar1 = bVar1 & 0xf;
  }
  else {
    bVar2 = base64_to_int[param_1[2]];
    if ((char)bVar2 < '\0') goto LAB_001000d0;
    pbVar3 = pbVar4;
    if (*param_4 != 0) {
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar1 << 4 | (char)bVar2 >> 2;
      *param_4 = *param_4 + -1;
    }
    pbVar4 = pbVar3;
    if (param_2 == 3) goto LAB_001000d0;
    if (param_1[3] != 0x3d) {
      if ((char)base64_to_int[param_1[3]] < '\0') goto LAB_001000d0;
      if (*param_4 != 0) {
        pbVar4 = pbVar3 + 1;
        *pbVar3 = bVar2 << 6 | base64_to_int[param_1[3]];
        *param_4 = *param_4 + -1;
      }
      goto LAB_001000b1;
    }
    if (param_2 != 4) goto LAB_001000d0;
    bVar1 = bVar2 & 3;
  }
  if (bVar1 == 0) {
LAB_001000b1:
    *param_3 = (long)pbVar4;
    return 1;
  }
LAB_001000d0:
  *param_3 = (long)pbVar4;
  return 0;
}



undefined4 isubase64(byte param_1)

{
  return CONCAT31((int3)(~(uint)(byte)base64_to_int[param_1] >> 8),
                  (byte)~(uint)(byte)base64_to_int[param_1] >> 7);
}



undefined4 isbase64(byte param_1)

{
  return CONCAT31((int3)(~(uint)(byte)base64_to_int[param_1] >> 8),
                  (byte)~(uint)(byte)base64_to_int[param_1] >> 7);
}



void base64_decode_ctx_init(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



void base64_encode(byte *param_1,long param_2,undefined4 *param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if ((param_4 & 3) == 0) {
    lVar4 = ((long)param_4 >> 2) * 3;
    if (lVar4 == param_2) {
      if (lVar4 == 0) {
        return;
      }
      pbVar6 = param_1;
      do {
        pbVar7 = pbVar6 + 3;
        *param_3 = CONCAT31(CONCAT21(CONCAT11(b64c[pbVar6[2] & 0x3f],
                                              b64c[(uint)(pbVar6[2] >> 6) + (uint)pbVar6[1] * 4 &
                                                   0x3f]),
                                     b64c[(uint)(pbVar6[1] >> 4) + (uint)*pbVar6 * 0x10 & 0x3f]),
                            b64c[*pbVar6 >> 2]);
        param_3 = param_3 + 1;
        pbVar6 = pbVar7;
      } while (param_1 + lVar4 != pbVar7);
      return;
    }
    if (param_4 == 0) {
      return;
    }
    if (param_2 != 0) goto LAB_00100186;
    if (param_4 == 0) {
      return;
    }
  }
  else if (param_2 != 0) {
LAB_00100186:
    bVar2 = *param_1;
    *(undefined1 *)param_3 = b64c[bVar2 >> 2];
    if (param_4 == 1) {
      return;
    }
    pbVar6 = param_1 + param_2 + -1;
    pbVar7 = param_1 + param_2 + -3;
    pbVar1 = param_1 + param_2 + -2;
    do {
      if (param_1 == pbVar6) {
        *(undefined1 *)((long)param_3 + 1) = b64c[(uint)bVar2 * 0x10 & 0x30];
        if (param_4 == 2) {
          return;
        }
        *(undefined1 *)((long)param_3 + 2) = 0x3d;
        if (param_4 == 3) {
          return;
        }
LAB_00100271:
        *(undefined1 *)((long)param_3 + 3) = 0x3d;
        if (param_4 == 4) {
          return;
        }
LAB_0010027f:
        *(undefined1 *)(param_3 + 1) = 0;
        return;
      }
      bVar3 = param_1[1];
      *(undefined1 *)((long)param_3 + 1) = b64c[(uint)bVar2 * 0x10 + (uint)(bVar3 >> 4) & 0x3f];
      if (param_4 == 2) {
        return;
      }
      uVar5 = (uint)bVar3 * 4;
      if (param_1 == pbVar1) {
        *(undefined1 *)((long)param_3 + 2) = b64c[uVar5 & 0x3c];
        if (param_4 == 3) {
          return;
        }
        goto LAB_00100271;
      }
      bVar2 = param_1[2];
      *(undefined1 *)((long)param_3 + 2) = b64c[uVar5 + (bVar2 >> 6) & 0x3f];
      if (param_4 == 3) {
        return;
      }
      *(undefined1 *)((long)param_3 + 3) = b64c[bVar2 & 0x3f];
      param_4 = param_4 - 4;
      if (param_4 == 0) {
        return;
      }
      if (param_1 == pbVar7) goto LAB_0010027f;
      bVar2 = param_1[3];
      param_1 = param_1 + 3;
      *(undefined1 *)(param_3 + 1) = b64c[bVar2 >> 2];
      param_3 = param_3 + 1;
      if (param_4 == 1) {
        return;
      }
    } while( true );
  }
  *(undefined1 *)param_3 = 0;
  return;
}



size_t base64_encode_alloc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  size_t __size;
  
  lVar2 = param_2 / 3 + (ulong)(param_2 != (param_2 / 3) * 3);
  sVar3 = lVar2 * 4;
  if ((param_2 < 0) || (SEXT816((long)sVar3) != SEXT816(lVar2) * SEXT816(4))) {
    *param_3 = 0;
    __size = 0;
  }
  else {
    __size = sVar3 + 1;
    pvVar1 = malloc(__size);
    *param_3 = pvVar1;
    if (pvVar1 != (void *)0x0) {
      base64_encode(param_1,param_2,pvVar1,__size);
      return sVar3;
    }
  }
  return __size;
}



/* WARNING: Removing unreachable block (ram,0x0010060d) */

char base64_decode_ctx(int *param_1,int *param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int iVar5;
  int *__s;
  long lVar6;
  long lVar7;
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
LAB_001004d7:
  do {
    __s = param_2;
    lVar7 = param_3;
    lVar9 = lVar6;
    if (bVar2) {
      while( true ) {
        __s = (int *)((long)param_2 + (param_3 - lVar7));
        cVar3 = decode_4(__s,lVar7,&local_50,&local_48);
        lVar6 = local_48;
        if (cVar3 == '\0') break;
        lVar7 = lVar7 + -4;
        lVar9 = local_48;
      }
    }
    cVar3 = lVar7 == 0 && local_5b;
    if ((bool)cVar3) goto LAB_00100588;
    if (lVar7 == 0) {
      local_50 = local_50 - (lVar9 - lVar6);
      piVar8 = __s;
      if (param_1 == (int *)0x0) {
        cVar3 = '\x01';
        lVar6 = lVar9;
        local_48 = lVar9;
LAB_00100588:
        *param_5 = *param_5 - lVar6;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return cVar3;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_0010051a:
      iVar1 = *param_1;
      lVar6 = (long)iVar1;
      if (iVar1 == 4) {
        *param_1 = 0;
        lVar6 = 0;
      }
      local_48 = lVar9;
      if (((lVar7 < 4) || (iVar1 != 4 && iVar1 != 0)) ||
         (pvVar4 = memchr(__s,10,4), pvVar4 != (void *)0x0)) {
        if (__s < piVar8) {
          do {
            iVar1 = *__s;
            __s = (int *)((long)__s + 1);
            if ((char)iVar1 != '\n') {
              iVar5 = (int)lVar6 + 1;
              *param_1 = iVar5;
              *(char *)((long)param_1 + lVar6 + 4) = (char)iVar1;
              if (iVar5 == 4) {
                lVar7 = 4;
                param_2 = __s;
                __s = param_1 + 1;
                goto LAB_0010049c;
              }
              lVar6 = (long)iVar5;
            }
          } while (__s != piVar8);
        }
        lVar7 = (long)(int)lVar6;
        param_2 = __s;
        __s = param_1 + 1;
        if (lVar7 != 0) goto LAB_0010049c;
        goto LAB_00100577;
      }
      param_2 = __s + 1;
    }
    else {
      if (((char)*__s == '\n') && (!bVar10)) {
        param_2 = (int *)((long)__s + 1);
        param_3 = lVar7 + -1;
        goto LAB_001004d7;
      }
      piVar8 = (int *)((long)__s + lVar7);
      local_50 = local_50 - (lVar9 - lVar6);
      param_2 = __s;
      local_48 = lVar9;
      if (param_1 != (int *)0x0) goto LAB_0010051a;
LAB_0010049c:
      if (((lVar7 < 4) && (!bVar10)) && (bVar10 || bVar11)) {
LAB_00100577:
        cVar3 = '\x01';
        lVar6 = local_48;
        goto LAB_00100588;
      }
    }
    cVar3 = decode_4(__s);
    lVar6 = local_48;
    if (cVar3 == '\0') goto LAB_00100588;
    param_3 = (long)piVar8 - (long)param_2;
  } while( true );
}



undefined1
base64_decode_alloc_ctx
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,size_t *param_5)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  size_t local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (param_3 >> 2) * 3 + 3;
  pvVar3 = malloc(local_38);
  *param_4 = pvVar3;
  if (pvVar3 != (void *)0x0) {
    cVar1 = base64_decode_ctx(param_1,param_2,param_3,pvVar3,&local_38);
    if (cVar1 == '\0') {
      free((void *)*param_4);
      *param_4 = 0;
      uVar2 = 0;
      goto LAB_00100718;
    }
    if (param_5 != (size_t *)0x0) {
      *param_5 = local_38;
    }
  }
  uVar2 = 1;
LAB_00100718:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


