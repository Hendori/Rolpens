
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
      } while (pbVar7 != param_1 + lVar4);
      return;
    }
    if (param_4 == 0) {
      return;
    }
    if (param_2 != 0) goto LAB_00100066;
    if (param_4 == 0) {
      return;
    }
  }
  else if (param_2 != 0) {
LAB_00100066:
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
LAB_00100151:
        *(undefined1 *)((long)param_3 + 3) = 0x3d;
        if (param_4 == 4) {
          return;
        }
LAB_0010015f:
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
        goto LAB_00100151;
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
      if (param_1 == pbVar7) goto LAB_0010015f;
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



/* WARNING: Removing unreachable block (ram,0x001006b5) */

ulong base64_decode_ctx(uint *param_1,uint *param_2,uint *param_3,byte *param_4,long *param_5)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  byte *pbVar4;
  uint uVar5;
  uint *__s;
  long lVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 in_R10;
  uint *puVar12;
  uint *puVar13;
  
  if (param_1 == (uint *)0x0) {
    uVar10 = 0;
    uVar11 = 1;
    uVar9 = 1;
    __s = param_3;
  }
  else {
    uVar9 = CONCAT71((int7)((ulong)param_5 >> 8),param_3 != (uint *)0x0);
    uVar10 = uVar9 & 0xffffffff;
    uVar11 = (uint)CONCAT71((int7)((ulong)in_R10 >> 8),*param_1 == 0) & (uint)uVar9;
    __s = (uint *)(ulong)*param_1;
  }
  puVar13 = (uint *)*param_5;
  do {
    while( true ) {
      if (((char)uVar11 == '\0') || ((long)param_3 < 2)) {
        uVar8 = (uint)CONCAT71((int7)((ulong)__s >> 8),param_3 == (uint *)0x0);
        __s = puVar13;
      }
      else {
        do {
          bVar7 = (byte)*param_2;
          __s = puVar13;
          if (((char)base64_to_int[bVar7] < '\0') ||
             (bVar2 = base64_to_int[*(byte *)((long)param_2 + 1)], (char)bVar2 < '\0'))
          goto LAB_00100463;
          __s = (uint *)0x0;
          if (puVar13 != (uint *)0x0) {
            __s = (uint *)((long)puVar13 + -1);
            *param_4 = base64_to_int[bVar7] << 2 | (char)bVar2 >> 4;
            param_4 = param_4 + 1;
          }
          if (param_3 == (uint *)0x2) goto LAB_00100463;
          if (*(byte *)((long)param_2 + 2) == 0x3d) {
            if (((param_3 != (uint *)0x4) || (*(byte *)((long)param_2 + 3) != 0x3d)) ||
               ((bVar2 & 0xf) != 0)) goto LAB_00100463;
            param_2 = param_2 + 1;
            puVar13 = __s;
            if ((char)uVar9 == '\0') goto LAB_0010061d;
            uVar10 = uVar9 & 0xffffffff;
            goto LAB_0010049e;
          }
          bVar1 = base64_to_int[*(byte *)((long)param_2 + 2)];
          if ((char)bVar1 < '\0') goto LAB_00100463;
          pbVar4 = param_4;
          if (__s != (uint *)0x0) {
            __s = (uint *)((long)__s + -1);
            pbVar4 = param_4 + 1;
            *param_4 = bVar2 << 4 | (char)bVar1 >> 2;
          }
          param_4 = pbVar4;
          if (param_3 == (uint *)0x3) goto LAB_00100463;
          if (*(byte *)((long)param_2 + 3) == 0x3d) {
            if (param_3 != (uint *)0x4) goto LAB_00100463;
            if ((bVar1 & 3) != 0) goto LAB_00100466;
            uVar10 = (ulong)uVar11;
            puVar13 = __s;
            goto LAB_0010049e;
          }
          if ((char)base64_to_int[*(byte *)((long)param_2 + 3)] < '\0') goto LAB_00100463;
          puVar13 = (uint *)0x0;
          if (__s != (uint *)0x0) {
            puVar13 = (uint *)((long)__s + -1);
            param_4 = pbVar4 + 1;
            *pbVar4 = bVar1 << 6 | base64_to_int[*(byte *)((long)param_2 + 3)];
          }
          param_3 = param_3 + -1;
          param_2 = param_2 + 1;
        } while (1 < (long)param_3);
        uVar8 = (uint)param_3 ^ 1;
        __s = puVar13;
      }
      uVar8 = uVar8 & (uint)uVar9;
      puVar13 = __s;
      if ((char)uVar8 != '\0') {
        uVar10 = (ulong)uVar8;
        goto LAB_0010049e;
      }
      if (param_3 == (uint *)0x0) break;
LAB_00100463:
      bVar7 = (byte)*param_2;
LAB_00100466:
      if (bVar7 != 10) {
        pbVar4 = param_4 + -((long)puVar13 - (long)__s);
        __s = param_2;
        puVar12 = (uint *)((long)param_2 + (long)param_3);
        if (param_1 != (uint *)0x0) goto LAB_00100630;
LAB_00100486:
        puVar12 = (uint *)((long)param_2 + (long)param_3);
        __s = param_2;
LAB_00100489:
        if ((3 < (long)param_3) || (((char)uVar10 == '\0' && (1 < (long)param_3))))
        goto LAB_00100518;
        goto LAB_0010049e;
      }
      if (param_1 == (uint *)0x0) {
        pbVar4 = param_4 + -((long)puVar13 - (long)__s);
        goto LAB_00100486;
      }
      param_2 = (uint *)((long)param_2 + 1);
      param_3 = (uint *)((long)param_3 + -1);
      puVar13 = __s;
    }
LAB_0010061d:
    if (param_1 == (uint *)0x0) {
LAB_0010068c:
      uVar10 = 1;
      goto LAB_0010049e;
    }
    param_3 = (uint *)0x0;
    pbVar4 = param_4;
    __s = param_2;
    puVar12 = param_2;
LAB_00100630:
    uVar8 = *param_1;
    lVar6 = (long)(int)uVar8;
    if (uVar8 == 4) {
      *param_1 = 0;
      lVar6 = 0;
    }
    if (((long)param_3 < 4) || (uVar8 != 4 && uVar8 != 0)) {
LAB_00100650:
      param_2 = __s;
      if (__s < puVar12) {
        do {
          uVar8 = *param_2;
          param_2 = (uint *)((long)param_2 + 1);
          if ((byte)uVar8 != 10) {
            uVar5 = (int)lVar6 + 1;
            *param_1 = uVar5;
            *(byte *)((long)param_1 + lVar6 + 4) = (byte)uVar8;
            if (uVar5 == 4) {
              param_3 = (uint *)0x4;
              __s = param_1 + 1;
              goto LAB_00100489;
            }
            lVar6 = (long)(int)uVar5;
          }
        } while (puVar12 != param_2);
      }
      param_3 = (uint *)(long)(int)lVar6;
      __s = param_1 + 1;
      if (param_3 == (uint *)0x0) goto LAB_0010068c;
      goto LAB_00100489;
    }
    pvVar3 = memchr(__s,10,4);
    uVar11 = uVar11 & 0xff;
    uVar9 = uVar9 & 0xff;
    uVar10 = uVar10 & 0xff;
    if (pvVar3 != (void *)0x0) goto LAB_00100650;
    param_3 = (uint *)0x4;
    param_2 = __s + 1;
LAB_00100518:
    if (((char)base64_to_int[(byte)*__s] < '\0') ||
       (bVar7 = base64_to_int[*(byte *)((long)__s + 1)], (char)bVar7 < '\0')) {
LAB_001005e0:
      uVar10 = 0;
LAB_0010049e:
      *param_5 = *param_5 - (long)puVar13;
      return uVar10;
    }
    param_4 = pbVar4;
    if (puVar13 != (uint *)0x0) {
      puVar13 = (uint *)((long)puVar13 + -1);
      param_4 = pbVar4 + 1;
      *pbVar4 = base64_to_int[(byte)*__s] << 2 | (char)bVar7 >> 4;
    }
    if (param_3 == (uint *)0x2) goto LAB_001005e0;
    if (*(byte *)((long)__s + 2) == 0x3d) {
      if (((param_3 != (uint *)0x4) || (*(byte *)((long)__s + 3) != 0x3d)) || ((bVar7 & 0xf) != 0))
      goto LAB_001005e0;
      param_3 = (uint *)((long)puVar12 - (long)param_2);
    }
    else {
      bVar2 = base64_to_int[*(byte *)((long)__s + 2)];
      if ((char)bVar2 < '\0') goto LAB_001005e0;
      if (puVar13 != (uint *)0x0) {
        puVar13 = (uint *)((long)puVar13 + -1);
        *param_4 = bVar7 << 4 | (char)bVar2 >> 2;
        param_4 = param_4 + 1;
      }
      if (param_3 == (uint *)0x3) goto LAB_001005e0;
      pbVar4 = (byte *)((long)__s + 3);
      __s = (uint *)(ulong)*pbVar4;
      if (*pbVar4 == 0x3d) {
        if ((param_3 != (uint *)0x4) || ((bVar2 & 3) != 0)) goto LAB_001005e0;
        param_3 = (uint *)((long)puVar12 - (long)param_2);
      }
      else {
        if ((char)(byte)__s[0x40218] < '\0') goto LAB_001005e0;
        pbVar4 = param_4;
        if (puVar13 != (uint *)0x0) {
          puVar13 = (uint *)((long)puVar13 + -1);
          pbVar4 = param_4 + 1;
          *param_4 = bVar2 << 6 | (byte)__s[0x40218];
        }
        param_3 = (uint *)((long)puVar12 - (long)param_2);
        param_4 = pbVar4;
      }
    }
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
      goto LAB_00100808;
    }
    if (param_5 != (size_t *)0x0) {
      *param_5 = local_38;
    }
  }
  uVar2 = 1;
LAB_00100808:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


