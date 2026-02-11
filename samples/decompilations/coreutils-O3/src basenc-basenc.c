
uint base32_required_padding(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 7;
  if (uVar1 != 0) {
    uVar1 = (uint)((int)param_1 >> 0x1f) >> 0x1d;
    uVar1 = (uVar1 - (param_1 + uVar1 & 7)) + 8;
  }
  return uVar1;
}



uint base64_required_padding(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 3;
  if (uVar1 != 0) {
    uVar1 = (uint)((int)param_1 >> 0x1f) >> 0x1e;
    uVar1 = (uVar1 - (param_1 + uVar1 & 3)) + 4;
  }
  return uVar1;
}



undefined8 no_required_padding(void)

{
  return 0;
}



int base64_length_wrapper(int param_1)

{
  return ((param_1 + 2) / 3) * 4;
}



void base64_decode_ctx_init_wrapper(long param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



bool isubase64url(byte param_1)

{
  bool bVar1;
  
  bVar1 = param_1 == 0x2d || param_1 == 0x5f;
  if ((param_1 != 0x2d && param_1 != 0x5f) && ((param_1 & 0xfb) != 0x2b)) {
    bVar1 = (bool)((byte)~(&base64_to_int)[param_1] >> 7);
  }
  return bVar1;
}



int base32_length_wrapper(int param_1)

{
  return ((param_1 + 4) / 5) * 8;
}



void base32_decode_ctx_init_wrapper(long param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



uint isubase32hex(int param_1,undefined8 param_2,undefined4 param_3)

{
  return CONCAT31((int3)((uint)(param_1 + -0x30) >> 8),(byte)(param_1 + -0x30) < 10) |
         CONCAT31((int3)((uint)param_3 >> 8),(byte)((char)param_1 + 0xbfU) < 0x16);
}



undefined4 isubase16(byte param_1)

{
  return CONCAT31((int3)(~(uint)(byte)base16_to_int[param_1] >> 8),
                  (byte)~(uint)(byte)base16_to_int[param_1] >> 7);
}



int base16_length(int param_1)

{
  return param_1 * 2;
}



void base16_encode(byte *param_1,long param_2,undefined2 *param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  if ((param_2 != 0) && (param_4 != 0)) {
    pbVar1 = param_1 + param_2;
    puVar3 = param_3;
    do {
      bVar2 = *param_1;
      puVar4 = puVar3 + 1;
      param_1 = param_1 + 1;
      *puVar3 = CONCAT11(base16_2[bVar2 & 0xf],base16_2[bVar2 >> 4]);
      if (param_1 == pbVar1) {
        return;
      }
      puVar3 = puVar4;
    } while (puVar4 != (undefined2 *)((long)param_3 + param_4));
  }
  return;
}



byte base16_decode_ctx(long param_1,byte *param_2,long param_3,char *param_4,long *param_5)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  uVar2 = (uint)bVar1;
  pbVar3 = param_2;
  pcVar6 = param_4;
  if (param_3 == 0) {
    *param_5 = 0;
    return bVar1 >> 7;
  }
  do {
    pbVar4 = pbVar3 + 1;
    pcVar5 = pcVar6;
    if (*pbVar3 == 10) {
LAB_001001e1:
      bVar1 = (byte)uVar2;
      pcVar6 = pcVar5;
    }
    else {
      bVar1 = base16_to_int[*pbVar3];
      if ((char)bVar1 < '\0') {
        *param_5 = (long)pcVar6 - (long)param_4;
        return 0;
      }
      if (-1 < (char)uVar2) {
        pcVar5 = pcVar6 + 1;
        *pcVar6 = (char)(uVar2 << 4) + bVar1;
        uVar2 = 0xffffffff;
        goto LAB_001001e1;
      }
      uVar2 = (uint)bVar1;
    }
    pbVar3 = pbVar4;
    if (param_2 + (param_3 - (long)pbVar4) == (byte *)0x0) {
      *(byte *)(param_1 + 4) = bVar1;
      *param_5 = (long)pcVar6 - (long)param_4;
      return 1;
    }
  } while( true );
}



int z85_length(int param_1)

{
  int iVar1;
  
  param_1 = param_1 * 5;
  iVar1 = param_1 + 3;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1 >> 2;
}



undefined4 z85_decode_ctx(undefined4 *param_1,long param_2,long param_3,uint *param_4,long *param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char cVar8;
  
  *param_5 = 0;
  if (param_3 == 0) {
    return CONCAT31((int3)((uint)param_1[1] >> 8),(int)param_1[1] < 1);
  }
  pcVar5 = (char *)(param_2 + 1);
  pcVar6 = pcVar5 + param_3;
  while( true ) {
    cVar8 = pcVar5[-1];
    if (cVar8 != '\n') break;
    pcVar5 = pcVar5 + 1;
    if (pcVar6 == pcVar5) {
      *param_1 = param_1[1];
      return 1;
    }
  }
  if (((byte)(cVar8 - 0x21U) < 0x5d) && (cVar8 = z85_decoding[cVar8 + -0x21], -1 < cVar8)) {
    while( true ) {
      iVar1 = param_1[1];
      iVar7 = iVar1 + 1;
      param_1[1] = iVar7;
      *(char *)((long)param_1 + (long)iVar1 + 8) = cVar8;
      pcVar4 = pcVar5;
      if (iVar7 == 5) {
        uVar3 = (long)(int)((uint)*(byte *)((long)param_1 + 9) * 0x95eed +
                            (uint)*(byte *)((long)param_1 + 10) * 0x1c39 +
                            (uint)*(byte *)((long)param_1 + 0xb) * 0x55 +
                           (uint)*(byte *)(param_1 + 3)) + (ulong)*(byte *)(param_1 + 2) * 0x31c84b1
        ;
        if (0xffffffff < uVar3) {
          return 0;
        }
        *param_5 = *param_5 + 4;
        uVar2 = (uint)uVar3;
        *param_4 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        param_1[1] = 0;
        param_4 = param_4 + 1;
      }
      do {
        pcVar5 = pcVar4 + 1;
        if (pcVar6 == pcVar5) {
          *param_1 = param_1[1];
          return 1;
        }
        cVar8 = *pcVar4;
        pcVar4 = pcVar5;
      } while (cVar8 == '\n');
      if (0x5c < (byte)(cVar8 - 0x21U)) break;
      cVar8 = z85_decoding[cVar8 + -0x21];
      if (cVar8 < '\0') {
        return 0;
      }
    }
    return 0;
  }
  return 0;
}



bool isubase2(char param_1)

{
  return (byte)(param_1 - 0x30U) < 2;
}



int base2_length(int param_1)

{
  return param_1 * 8;
}



void base2msbf_encode(byte *param_1,long param_2,char *param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_2 != 0) && (param_4 != 0)) {
    pbVar1 = param_1 + param_2;
    pcVar3 = param_3;
    do {
      bVar2 = *param_1;
      pcVar4 = pcVar3 + 8;
      param_1 = param_1 + 1;
      *pcVar3 = '0' - ((char)bVar2 >> 7);
      pcVar3[1] = '0' - ((char)(bVar2 * '\x02') >> 7);
      pcVar3[2] = '0' - ((char)(bVar2 * '\x04') >> 7);
      pcVar3[3] = '0' - ((char)(bVar2 * '\b') >> 7);
      pcVar3[4] = '0' - ((char)(bVar2 << 4) >> 7);
      pcVar3[5] = '0' - ((char)(bVar2 << 5) >> 7);
      pcVar3[6] = '0' - ((char)(bVar2 << 6) >> 7);
      pcVar3[7] = (bVar2 & 1) + 0x30;
      if (param_1 == pbVar1) {
        return;
      }
      pcVar3 = pcVar4;
    } while (pcVar4 != param_3 + param_4);
  }
  return;
}



void base2lsbf_encode(byte *param_1,long param_2,char *param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_2 != 0) && (param_4 != 0)) {
    pbVar1 = param_1 + param_2;
    pcVar3 = param_3;
    do {
      bVar2 = *param_1;
      *pcVar3 = (bVar2 & 1) + 0x30;
      pcVar3[1] = ((bVar2 & 2) != 0) + '0';
      pcVar3[2] = ((bVar2 & 4) != 0) + '0';
      pcVar3[3] = ((bVar2 & 8) != 0) + '0';
      pcVar3[4] = ((bVar2 & 0x10) != 0) + '0';
      pcVar3[5] = ((bVar2 & 0x20) != 0) + '0';
      pcVar4 = pcVar3 + 8;
      param_1 = param_1 + 1;
      pcVar3[6] = ((bVar2 & 0x40) != 0) + '0';
      pcVar3[7] = '0' - ((char)bVar2 >> 7);
      if (param_1 == pbVar1) {
        return;
      }
      pcVar3 = pcVar4;
    } while (pcVar4 != param_3 + param_4);
  }
  return;
}



void base64url_encode(undefined8 param_1,undefined8 param_2,char *param_3,long param_4)

{
  char *pcVar1;
  
  base64_encode();
  if (param_4 != 0) {
    pcVar1 = param_3 + param_4;
    do {
      while (*param_3 == '+') {
        *param_3 = '-';
        param_3 = param_3 + 1;
        if (param_3 == pcVar1) {
          return;
        }
      }
      if (*param_3 == '/') {
        *param_3 = '_';
      }
      param_3 = param_3 + 1;
    } while (param_3 != pcVar1);
  }
  return;
}



void z85_decode_ctx_init(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[3] = 0x1068;
  uVar1 = xcharalloc(0x1068);
  *param_1 = 1;
  param_1[2] = uVar1;
  return;
}



void base2_decode_ctx_init(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 6) = 0x1068;
  uVar1 = xcharalloc(0x1068);
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *param_1 = 0;
  return;
}



void base16_decode_ctx_init(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 6) = 0x1068;
  uVar1 = xcharalloc(0x1068);
  *(undefined1 *)(param_1 + 1) = 0xff;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}



void base32hex_decode_ctx_init_wrapper(long param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x1068;
  uVar1 = xcharalloc(0x1068);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



void base64url_decode_ctx_init_wrapper(long param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x1068;
  uVar1 = xcharalloc(0x1068);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



bool isuz85(byte param_1)

{
  char *pcVar1;
  
  if (param_1 < 0x5b) {
    if (0x40 < param_1) {
      return true;
    }
    if ((byte)(param_1 - 0x30) < 10) {
      return true;
    }
  }
  else if ((byte)(param_1 + 0x9f) < 0x1a) {
    return true;
  }
  pcVar1 = strchr(".-:+=^!/*?&<>()[]{}@%$#",(uint)param_1);
  return pcVar1 != (char *)0x0;
}



void base32_decode_ctx_wrapper(undefined4 *param_1)

{
  base32_decode_ctx(param_1 + 1);
  *param_1 = param_1[1];
  return;
}



void base64_decode_ctx_wrapper(undefined4 *param_1)

{
  base64_decode_ctx(param_1 + 1);
  *param_1 = param_1[1];
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  
  puVar3 = (uint *)__errno_location();
  uVar1 = *puVar3;
  uVar7 = (ulong)uVar1;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar4 = dcgettext(0,"write error",5);
  pcVar5 = (char *)(ulong)uVar1;
  error(1,pcVar5,uVar4);
  iVar2 = rpl_fclose();
  if (iVar2 != 0) {
    if ((*pcVar5 == '-') && (pcVar5[1] == '\0')) {
      pcVar5 = (char *)dcgettext(0,"closing standard input",5);
      piVar6 = __errno_location();
      error(1,*piVar6,pcVar5);
    }
    uVar4 = quotearg_n_style_colon(0,3,pcVar5);
    piVar6 = __errno_location();
    error(1,*piVar6,&_LC4,uVar4,in_R8,in_R9,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}



void finish_and_exit(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = rpl_fclose();
  if (iVar1 != 0) {
    if ((*param_2 == '-') && (param_2[1] == '\0')) {
      param_2 = (char *)dcgettext(0,"closing standard input",5);
      piVar2 = __errno_location();
      error(1,*piVar2,param_2);
    }
    uVar3 = quotearg_n_style_colon(0,3,param_2);
    piVar2 = __errno_location();
    error(1,*piVar2,&_LC4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}



void z85_encode(byte *param_1,long param_2,char *param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  char *extraout_RDX;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  pbVar1 = param_1 + param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = 0;
  if (param_2 != 0) {
    lVar11 = 0;
    do {
      while( true ) {
        bVar2 = *param_1;
        uVar8 = (ulong)bVar2;
        lVar7 = (long)iVar4;
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 1;
        *(byte *)((long)&local_24 + lVar7) = bVar2;
        if (iVar4 != 4) break;
        uVar6 = local_24 >> 0x18 | (local_24 & 0xff0000) >> 8 | (local_24 & 0xff00) << 8 |
                local_24 << 0x18;
        uVar8 = (ulong)uVar6 / 0x55;
        iVar4 = (int)uVar8;
        if (lVar11 + 4 < param_4) {
          param_3[4] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.-:+=^!/*?&<>()[]{}@%$#"
                       [(int)(uVar6 + iVar4 * -0x55)];
        }
        uVar8 = uVar8 / 0x55;
        iVar3 = (int)uVar8;
        if (lVar11 + 3 < param_4) {
          param_3[3] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.-:+=^!/*?&<>()[]{}@%$#"
                       [iVar4 + iVar3 * -0x55];
        }
        uVar8 = uVar8 / 0x55;
        if (lVar11 + 2 < param_4) {
          param_3[2] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.-:+=^!/*?&<>()[]{}@%$#"
                       [iVar3 + (int)uVar8 * -0x55];
          if (lVar11 + 1 < param_4) {
LAB_001008d7:
            param_3[1] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.-:+=^!/*?&<>()[]{}@%$#"
                         [(int)uVar8 + (int)(uVar8 / 0x55) * -0x55];
          }
LAB_00100907:
          *param_3 = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.-:+=^!/*?&<>()[]{}@%$#"
                     [(int)(uVar8 / 0x55)];
        }
        else {
          if (lVar11 + 1 < param_4) goto LAB_001008d7;
          if (lVar11 < param_4) goto LAB_00100907;
        }
        param_3 = param_3 + 5;
        lVar11 = lVar11 + 5;
        iVar4 = 0;
        if (pbVar1 == param_1) goto LAB_00100938;
      }
    } while (pbVar1 != param_1);
LAB_00100938:
    if (iVar4 != 0) {
      uVar5 = dcgettext(0,"invalid input (length must be multiple of 4 characters)",5);
      error(1,0,uVar5);
      base32_encode();
      if (uVar8 != 0) {
        pcVar9 = extraout_RDX;
        do {
          if (0x28 < (byte)(*pcVar9 - 0x32U)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("0x32 <= *p && *p <= 0x5a","src/basenc.c",0x1de,"base32hex_encode");
          }
          pcVar10 = pcVar9 + 1;
          *pcVar9 = base32_norm_to_hex[*pcVar9 + -0x32];
          pcVar9 = pcVar10;
        } while (pcVar10 != extraout_RDX + uVar8);
      }
      return;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void base32hex_encode(undefined8 param_1,undefined8 param_2,char *param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  
  base32_encode();
  if (param_4 != 0) {
    pcVar1 = param_3;
    do {
      if (0x28 < (byte)(*pcVar1 - 0x32U)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("0x32 <= *p && *p <= 0x5a","src/basenc.c",0x1de,"base32hex_encode");
      }
      pcVar2 = pcVar1 + 1;
      *pcVar1 = base32_norm_to_hex[*pcVar1 + -0x32];
      pcVar1 = pcVar2;
    } while (pcVar2 != param_3 + param_4);
  }
  return;
}



undefined8
base64url_decode_ctx_wrapper
          (undefined4 *param_1,void *param_2,size_t param_3,undefined8 param_4,undefined8 *param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  void *__dest;
  byte *pbVar4;
  
  __dest = *(void **)(param_1 + 4);
  if (*(long *)(param_1 + 6) < (long)param_3) {
    __dest = (void *)xpalloc(__dest,param_1 + 6,param_3 - *(long *)(param_1 + 6),0xffffffffffffffff,
                             1);
    *(void **)(param_1 + 4) = __dest;
  }
  memcpy(__dest,param_2,param_3);
  pbVar4 = *(byte **)(param_1 + 4);
  if (param_3 != 0) {
    pbVar1 = pbVar4 + param_3;
    do {
      while( true ) {
        bVar2 = *pbVar4;
        if ((bVar2 & 0xfb) == 0x2b) {
          *param_5 = 0;
          return 0;
        }
        if (bVar2 != 0x2d) break;
        *pbVar4 = 0x2b;
        pbVar4 = pbVar4 + 1;
        if (pbVar4 == pbVar1) goto LAB_00100a9d;
      }
      if (bVar2 == 0x5f) {
        *pbVar4 = 0x2f;
      }
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 != pbVar1);
LAB_00100a9d:
    pbVar4 = *(byte **)(param_1 + 4);
  }
  uVar3 = base64_decode_ctx(param_1 + 1,pbVar4,param_3,param_4,param_5);
  *param_1 = param_1[1];
  return uVar3;
}



undefined4 base2msbf_decode_ctx(int *param_1,long param_2,long param_3,byte *param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  
  *param_5 = 0;
  if (param_3 == 0) {
    return CONCAT31((int3)((uint)*param_1 >> 8),*param_1 == 0);
  }
  param_2 = param_2 + 1;
  param_3 = param_2 + param_3;
  do {
    cVar1 = *(char *)(param_2 + -1);
    if (cVar1 != '\n') {
      if (1 < (byte)(cVar1 - 0x30U)) {
        return 0;
      }
      if (*param_1 == 0) {
        *param_1 = 7;
        *(byte *)(param_1 + 1) = (cVar1 == '1') << 7 | *(byte *)(param_1 + 1);
      }
      else {
        iVar2 = *param_1 + -1;
        *param_1 = iVar2;
        bVar3 = *(byte *)(param_1 + 1) | (cVar1 == '1') << ((byte)iVar2 & 0x1f);
        *(byte *)(param_1 + 1) = bVar3;
        if (iVar2 == 0) {
          *param_4 = bVar3;
          param_4 = param_4 + 1;
          *(undefined1 *)(param_1 + 1) = 0;
          *param_5 = *param_5 + 1;
          *param_1 = 0;
        }
      }
    }
    param_2 = param_2 + 1;
  } while (param_3 != param_2);
  return 1;
}



undefined4 base2lsbf_decode_ctx(int *param_1,long param_2,long param_3,byte *param_4,long *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  *param_5 = 0;
  if (param_3 == 0) {
    return CONCAT31((int3)((uint)*param_1 >> 8),*param_1 == 0);
  }
  param_2 = param_2 + 1;
  param_3 = param_3 + param_2;
  do {
    cVar1 = *(char *)(param_2 + -1);
    pbVar4 = param_4;
    if (cVar1 != '\n') {
      if (1 < (byte)(cVar1 - 0x30U)) {
        return 0;
      }
      iVar3 = *param_1 + 1;
      bVar2 = (cVar1 == '1') << ((byte)*param_1 & 0x1f) | *(byte *)(param_1 + 1);
      *(byte *)(param_1 + 1) = bVar2;
      *param_1 = iVar3;
      if (iVar3 == 8) {
        *(undefined1 *)(param_1 + 1) = 0;
        pbVar4 = param_4 + 1;
        *param_5 = *param_5 + 1;
        *param_4 = bVar2;
        *param_1 = 0;
      }
    }
    param_2 = param_2 + 1;
    param_4 = pbVar4;
  } while (param_3 != param_2);
  return 1;
}



void base32hex_decode_ctx_wrapper
               (undefined4 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 4);
  if (*(long *)(param_1 + 6) < param_3) {
    lVar2 = xpalloc(lVar2,param_1 + 6,param_3 - *(long *)(param_1 + 6),0xffffffffffffffff,1);
    *(long *)(param_1 + 4) = lVar2;
  }
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      while( true ) {
        cVar1 = *(char *)(param_2 + lVar3);
        if (((byte)(cVar1 - 0x30U) < 10) || ((byte)(cVar1 + 0xbfU) < 0x16)) break;
        *(char *)(lVar2 + lVar3) = cVar1;
        lVar3 = lVar3 + 1;
        if (param_3 == lVar3) goto LAB_00100cb1;
      }
      *(char *)(lVar2 + lVar3) = "ABCDEFGHIJ:;<=>?@KLMNOPQRSTUVWXYZ234567"[cVar1 + -0x30];
      lVar3 = lVar3 + 1;
    } while (lVar3 != param_3);
LAB_00100cb1:
    lVar2 = *(long *)(param_1 + 4);
  }
  base32_decode_ctx(param_1 + 1,lVar2,param_3,param_4,param_5);
  *param_1 = param_1[1];
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long in_FS_OFFSET;
  undefined *local_a8;
  char *pcStack_a0;
  char *local_98 [4];
  char *local_78;
  char *pcStack_70;
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  undefined1 local_48 [16];
  undefined8 local_30;
  
  uVar5 = _program_name;
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00100d8a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "basenc encode or decode FILE, or standard input, to standard output.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --base64          same as \'base64\' program (RFC4648 section 4)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --base64url       file- and url-safe base64 (RFC4648 section 5)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --base32          same as \'base32\' program (RFC4648 section 6)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --base32hex       extended hex alphabet base32 (RFC4648 section 7)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --base16          hex encoding (RFC4648 section 8)\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --base2msbf       bit string with most significant bit (msb) first\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --base2lsbf       bit string with least significant bit (lsb) first\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -d, --decode          decode data\n  -i, --ignore-garbage  when decoding, ignore non-alphabet characters\n  -w, --wrap=COLS       wrap encoded lines after COLS character (default 76).\n                          Use 0 to disable line wrapping\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --z85             ascii85-like encoding (ZeroMQ spec:32/Z85);\n                        when encoding, input length must be a multiple of 4;\n                        when decoding, input length must be a multiple of 5\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal alphabet.  Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC8;
  pcStack_a0 = "test invocation";
  local_98[0] = "coreutils";
  local_98[1] = "Multi-call invocation";
  local_98[2] = "sha224sum";
  local_98[3] = "sha2 utilities";
  local_78 = "sha256sum";
  pcStack_70 = "sha2 utilities";
  local_68 = "sha384sum";
  pcStack_60 = "sha2 utilities";
  local_58 = "sha512sum";
  pcStack_50 = "sha2 utilities";
  local_48 = (undefined1  [16])0x0;
  do {
    iVar2 = strcmp("basenc",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "basenc";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00101105;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","basenc");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00101105:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","basenc");
    if (pcVar4 == "basenc") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_00100d8a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void main(int param_1,undefined8 *param_2)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  _IO_FILE *p_Var9;
  long lVar10;
  size_t sVar11;
  int *piVar12;
  FILE *pFVar13;
  uint *puVar14;
  undefined8 uVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  ulong __n;
  uint *in_R10;
  FILE *__stream;
  long lVar19;
  FILE *pFVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  int *local_c0;
  uint *local_b8;
  FILE *local_b0;
  int *local_a8;
  char *local_80;
  size_t local_70;
  int local_68 [4];
  undefined8 local_58;
  int local_48;
  undefined4 uStack_44;
  char *local_40;
  
  bVar2 = false;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_b8 = (uint *)((ulong)local_b8 & 0xffffffffffffff00);
  uVar21 = 0x4c;
  iVar6 = 0;
LAB_00101c54:
  do {
    iVar4 = getopt_long(param_1,param_2,&_LC50,long_options,0);
    if (iVar4 == -1) {
      switch(iVar6) {
      case 0x80:
        isubase = (code *)&isubase64;
        base_encode = base64_encode;
        base_length = base64_length_wrapper;
        required_padding = base64_required_padding;
        base_decode_ctx_init = base64_decode_ctx_init_wrapper;
        base_decode_ctx = base64_decode_ctx_wrapper;
        break;
      case 0x81:
        base_length = base64_length_wrapper;
        required_padding = base64_required_padding;
        isubase = isubase64url;
        base_encode = base64url_encode;
        base_decode_ctx_init = base64url_decode_ctx_init_wrapper;
        base_decode_ctx = base64url_decode_ctx_wrapper;
        break;
      case 0x82:
        isubase = (code *)&isubase32;
        base_encode = base32_encode;
        base_length = base32_length_wrapper;
        required_padding = base32_required_padding;
        base_decode_ctx_init = base32_decode_ctx_init_wrapper;
        base_decode_ctx = base32_decode_ctx_wrapper;
        break;
      case 0x83:
        base_length = base32_length_wrapper;
        required_padding = base32_required_padding;
        isubase = isubase32hex;
        base_encode = base32hex_encode;
        base_decode_ctx_init = base32hex_decode_ctx_init_wrapper;
        base_decode_ctx = base32hex_decode_ctx_wrapper;
        break;
      case 0x84:
        base_length = base16_length;
        required_padding = no_required_padding;
        isubase = isubase16;
        base_encode = base16_encode;
        base_decode_ctx_init = base16_decode_ctx_init;
        base_decode_ctx = base16_decode_ctx;
        break;
      case 0x85:
        base_length = base2_length;
        required_padding = no_required_padding;
        isubase = isubase2;
        base_encode = base2msbf_encode;
        base_decode_ctx_init = base2_decode_ctx_init;
        base_decode_ctx = base2msbf_decode_ctx;
        break;
      case 0x86:
        base_length = base2_length;
        required_padding = no_required_padding;
        isubase = isubase2;
        base_encode = base2lsbf_encode;
        base_decode_ctx_init = base2_decode_ctx_init;
        base_decode_ctx = base2lsbf_decode_ctx;
        break;
      case 0x87:
        base_length = z85_length;
        required_padding = no_required_padding;
        isubase = isuz85;
        base_encode = z85_encode;
        base_decode_ctx_init = z85_decode_ctx_init;
        base_decode_ctx = z85_decode_ctx;
        break;
      default:
        uVar7 = dcgettext(0,"missing encoding type",5);
        error(0,0,uVar7);
        goto LAB_00101d79;
      }
      lVar17 = (long)_optind;
      if (1 < param_1 - _optind) goto LAB_0010251a;
      if (_optind < param_1) {
        local_80 = (char *)param_2[lVar17];
        iVar6 = strcmp(local_80,"-");
        puVar8 = _stdin;
        if ((iVar6 != 0) && (puVar8 = (uint *)rpl_fopen(local_80,&_LC53), puVar8 == (uint *)0x0))
        goto LAB_001024e9;
      }
      else {
        local_80 = "-";
        puVar8 = _stdin;
      }
      fadvise(puVar8,2);
      __stream = _stdout;
      if (!bVar2) {
        pFVar20 = (FILE *)0x0;
        pFVar13 = (FILE *)xmalloc(0x7800);
        iVar6 = (*base_length)(0x7800);
        local_c0 = (int *)xmalloc((long)iVar6);
        p_Var9 = __stream;
        __stream = pFVar13;
        goto LAB_0010225c;
      }
      local_48 = 0x3d3d3d3d;
      uStack_44 = 0x3d3d3d3d;
      iVar6 = (*base_length)(0x1068);
      local_c0 = (int *)(long)iVar6;
      p_Var9 = (_IO_FILE *)xmalloc(local_c0);
      local_b0 = (FILE *)xmalloc(0x1068);
      local_58 = 0;
      local_a8 = local_68;
      (*base_decode_ctx_init)(local_a8);
LAB_00101ee0:
      piVar16 = (int *)0x0;
      do {
        iVar6 = (*base_length)(0x1068);
        piVar12 = local_c0;
        if (local_c0 < piVar16) {
          piVar12 = piVar16;
        }
        lVar17 = __fread_unlocked_chk
                           ((undefined1 *)((long)&p_Var9->_flags + (long)piVar16),
                            (long)piVar12 - (long)piVar16,1,(long)iVar6 - (long)piVar16,puVar8);
        if (((char)local_b8 != '\0') && (0 < lVar17)) {
          lVar19 = 0;
          do {
            while( true ) {
              piVar12 = (int *)((long)piVar16 + lVar19);
              pcVar1 = (char *)((long)&p_Var9->_flags + (long)piVar12);
              cVar3 = (*isubase)(*pcVar1);
              if ((cVar3 == '\0') && (*pcVar1 != '=')) break;
              lVar19 = lVar19 + 1;
              lVar10 = 0;
              if (-1 < lVar19) {
                lVar10 = lVar19;
              }
              if (lVar17 <= lVar10) goto LAB_00101ef3;
            }
            lVar17 = lVar17 + -1;
            piVar18 = local_c0;
            if (local_c0 < piVar12) {
              piVar18 = piVar12;
            }
            __memmove_chk(pcVar1,(undefined1 *)((long)&p_Var9->_flags + 1) + (long)piVar12,
                          lVar17 - lVar19,(long)piVar18 - (long)piVar12);
            lVar10 = 0;
            if (-1 < lVar19) {
              lVar10 = lVar19;
            }
          } while (lVar10 < lVar17);
        }
LAB_00101ef3:
        piVar16 = (int *)((long)piVar16 + lVar17);
        if ((*puVar8 & 0x20) != 0) goto LAB_00102480;
        iVar6 = (*base_length)(0x1068);
      } while (((long)piVar16 < (long)iVar6) && ((*puVar8 & 0x10) == 0));
      uVar21 = 0;
LAB_00102175:
      local_70 = 0x1068;
      uVar5 = (*base_decode_ctx)(local_a8,p_Var9,piVar16,local_b0,&local_70);
      pFVar20 = (FILE *)(ulong)uVar5;
      sVar11 = fwrite_unlocked(local_b0,1,local_70,__stream);
      if (sVar11 < local_70) goto LAB_001023e9;
      if ((char)uVar5 == '\0') {
        uVar7 = dcgettext(0,"invalid input",5);
        error(1,0,uVar7);
LAB_00102480:
        uVar7 = dcgettext(0,"read error",5);
        piVar16 = __errno_location();
        error(1,*piVar16,uVar7);
        goto LAB_001024ac;
      }
      if ((*puVar8 & 0x10) != 0) break;
      goto LAB_00101ee0;
    }
    if (iVar4 != 0x69) {
      if (iVar4 < 0x6a) {
        if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        if (iVar4 != 100) {
          if (iVar4 == -0x83) {
            uVar7 = proper_name_lite("Assaf Gordon","Assaf Gordon");
            auVar22 = proper_name_lite("Simon Josefsson","Simon Josefsson");
            version_etc(_stdout,"basenc","GNU coreutils",_Version,auVar22._0_8_,uVar7,0,
                        auVar22._8_8_);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          goto LAB_00101d79;
        }
        bVar2 = true;
      }
      else if (iVar4 == 0x77) {
        uVar5 = xstrtoimax(_optarg,0,10,&local_70);
        if ((1 < uVar5) || ((long)local_70 < 0)) goto LAB_001024ac;
        uVar21 = local_70;
        if (uVar5 == 1) {
          uVar21 = 0;
        }
      }
      else {
        iVar6 = iVar4;
        if (7 < iVar4 - 0x80U) {
LAB_00101d79:
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
      }
      goto LAB_00101c54;
    }
    local_b8 = (uint *)CONCAT71(local_b8._1_7_,1);
  } while( true );
  if (((int)uVar21 != 0) || (local_68[0] == 0)) {
LAB_00102342:
    finish_and_exit(puVar8,local_80);
    puVar14 = in_R10;
    pFVar13 = __stream;
    do {
      __stream = pFVar20;
      lVar17 = 0;
      in_R10 = puVar14;
      pFVar20 = __stream;
      if (0 < (long)puVar14) {
        do {
          __n = (long)puVar14 - lVar17;
          if ((long)(uVar21 - (long)__stream) < (long)puVar14 - lVar17) {
            __n = uVar21 - (long)__stream;
          }
          local_b8 = puVar8;
          local_b0 = pFVar13;
          local_a8 = piVar16;
          if (__n == 0) {
            pcVar1 = p_Var9->_IO_write_ptr;
            if (pcVar1 < p_Var9->_IO_write_end) {
              p_Var9->_IO_write_ptr = pcVar1 + 1;
              *pcVar1 = '\n';
            }
            else {
              iVar6 = __overflow(p_Var9,10);
              pFVar20 = p_Var9;
              if (iVar6 == -1) goto LAB_001023e9;
            }
            __stream = (FILE *)0x0;
          }
          else {
            sVar11 = fwrite_unlocked((void *)((long)local_c0 + lVar17),1,__n,_stdout);
            pFVar20 = p_Var9;
            if (sVar11 < __n) goto LAB_001023e9;
            __stream = (FILE *)((long)&__stream->_flags + __n);
            lVar17 = lVar17 + __n;
          }
          pFVar20 = __stream;
        } while (lVar17 < (long)puVar14);
      }
LAB_00102319:
      uVar5 = *puVar8;
      __stream = pFVar13;
      if (((uVar5 & 0x30) != 0) || (piVar16 != (int *)0x7800)) {
LAB_0010232c:
        if ((0 < (long)pFVar20) && (uVar21 != 0)) {
          pcVar1 = p_Var9->_IO_write_ptr;
          if (pcVar1 < p_Var9->_IO_write_end) {
            p_Var9->_IO_write_ptr = pcVar1 + 1;
            *pcVar1 = '\n';
            uVar5 = *puVar8;
            goto LAB_0010233a;
          }
          iVar6 = __overflow(p_Var9,10);
          if (iVar6 != -1) {
            uVar5 = *puVar8;
            goto LAB_0010233a;
          }
          goto LAB_001023e9;
        }
LAB_0010233a:
        if ((uVar5 & 0x20) != 0) goto LAB_00102480;
        goto LAB_00102342;
      }
LAB_0010225c:
      piVar16 = (int *)0x0;
      do {
        piVar12 = (int *)0x7800;
        if ((int *)0x77ff < piVar16) {
          piVar12 = piVar16;
        }
        lVar17 = __fread_unlocked_chk
                           ((code *)((long)&__stream->_flags + (long)piVar16),
                            (long)piVar12 - (long)piVar16,1,0x7800 - (long)piVar16,puVar8);
        pFVar13 = (FILE *)base_encode;
        piVar16 = (int *)((long)piVar16 + lVar17);
        uVar5 = *puVar8;
      } while (((uVar5 & 0x30) == 0) && ((long)piVar16 < 0x7800));
      if ((long)piVar16 < 1) goto LAB_0010232c;
      local_b8 = (uint *)CONCAT44(local_b8._4_4_,(int)piVar16);
      local_b0 = (FILE *)base_encode;
      iVar6 = (*base_length)((ulong)piVar16 & 0xffffffff);
      (*(code *)pFVar13)(__stream,piVar16,local_c0,(long)iVar6);
      iVar6 = (*base_length)((ulong)piVar16 & 0xffffffff);
      in_R10 = (uint *)(long)iVar6;
      puVar14 = in_R10;
      pFVar13 = __stream;
      if (uVar21 == 0) goto code_r0x001022ed;
    } while( true );
  }
  iVar6 = (*required_padding)();
  piVar12 = (int *)(long)iVar6;
  if (piVar12 != (int *)0x0) {
    if ((piVar16 == (int *)0x0) || ((p_Var9[-1]._unused2 + 0x13)[(long)piVar16] != '=')) {
      if ((int *)0x8 < piVar12) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("auto_padding <= sizeof (padbuf)","src/basenc.c",0x4a7,"do_decode");
      }
      local_c0 = (int *)0x8;
      p_Var9 = (_IO_FILE *)&stack0xffffffffffffffb8;
    }
    else {
      piVar12 = (int *)0x0;
    }
  }
  uVar21 = 1;
  piVar16 = piVar12;
  goto LAB_00102175;
code_r0x001022ed:
  puVar14 = (uint *)fwrite_unlocked(local_c0,1,(size_t)in_R10,_stdout);
  local_b8 = in_R10;
  if (puVar14 < in_R10) {
LAB_001023e9:
    p_Var9 = pFVar20;
    write_error();
    puVar8 = local_b8;
    pFVar13 = local_b0;
    pFVar20 = __stream;
    piVar16 = local_a8;
  }
  goto LAB_00102319;
LAB_001024ac:
  uVar7 = quote(_optarg);
  uVar15 = dcgettext(0,"invalid wrap size",5);
  error(1,0,"%s: %s",uVar15,uVar7);
LAB_001024e9:
  param_2 = (undefined8 *)quotearg_n_style_colon(0,3,local_80);
  piVar16 = __errno_location();
  lVar17 = error(1,*piVar16,&_LC4,param_2);
LAB_0010251a:
  uVar7 = quote(param_2[lVar17 + 1]);
  uVar15 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar15,uVar7);
                    /* WARNING: Subroutine does not return */
  usage(1);
}


