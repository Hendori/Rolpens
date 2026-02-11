
int evp_encodeblock_int(long param_1,char *param_2,byte *param_3,int param_4)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x5c) & 2) != 0)) {
    pcVar3 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./";
  }
  iVar7 = 0;
  pcVar6 = param_2;
  if (0 < param_4) {
    do {
      iVar7 = iVar7 + 4;
      param_2 = pcVar6 + 4;
      uVar5 = (ulong)*param_3 << 0x10;
      if (param_4 < 3) {
        if (param_4 == 2) {
          uVar2 = (ulong)param_3[1] << 8 | uVar5;
          *pcVar6 = pcVar3[uVar5 >> 0x12];
          pcVar6[1] = pcVar3[(uint)(uVar2 >> 0xc) & 0x3f];
          cVar1 = pcVar3[(uint)(uVar2 >> 6) & 0x3f];
          pcVar6[3] = '=';
          pcVar6[2] = cVar1;
          *param_2 = '\0';
          return iVar7;
        }
        *pcVar6 = pcVar3[uVar5 >> 0x12];
        pcVar6[1] = pcVar3[(uint)(uVar5 >> 0xc) & 0x3f];
        pcVar6[2] = '=';
        pcVar6[3] = '=';
        break;
      }
      uVar2 = (ulong)param_3[1] << 8 | uVar5;
      uVar4 = param_3[2] | uVar2;
      *pcVar6 = pcVar3[uVar5 >> 0x12];
      pcVar6[1] = pcVar3[(uint)(uVar2 >> 0xc) & 0x3f];
      pcVar6[2] = pcVar3[(uint)(uVar4 >> 6) & 0x3f];
      pcVar6[3] = pcVar3[(uint)uVar4 & 0x3f];
      param_4 = param_4 + -3;
      pcVar6 = param_2;
      param_3 = param_3 + 3;
    } while (param_4 != 0);
  }
  *param_2 = '\0';
  return iVar7;
}



int evp_decodeblock_int(long param_1,undefined1 *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  
  if (3 < param_5 + 1U) {
    return -1;
  }
  puVar9 = data_ascii2bin;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x5c) & 2) != 0)) {
    puVar9 = srpdata_ascii2bin;
  }
  if ((int)param_4 < 1) {
    if ((param_4 & 3) != 0) {
      return -1;
    }
    if (param_4 == 0) {
      return 0;
    }
    iVar10 = 0;
  }
  else {
    while ((-1 < (char)*param_3 && (puVar9[*param_3] == -0x20))) {
      param_3 = param_3 + 1;
      param_4 = param_4 - 1;
      if (param_4 == 0) {
        return 0;
      }
    }
    if ((int)param_4 < 4) {
      return -1;
    }
    pbVar4 = param_3 + (long)(int)param_4 + -1;
    while ((-1 < (char)*pbVar4 && ((puVar9[*pbVar4] | 0x13) == 0xf3))) {
      param_4 = param_4 - 1;
      pbVar4 = pbVar4 + -1;
      if (param_4 == 3) {
        return -1;
      }
    }
    if ((param_4 & 3) != 0) {
      return -1;
    }
    if (param_4 == 4) {
      iVar10 = 0;
    }
    else {
      iVar10 = (param_4 - 5 >> 2) * 3 + 3;
      iVar7 = 0;
      puVar8 = param_2;
      do {
        if ((char)*param_3 < '\0') {
          bVar1 = param_3[1];
          uVar6 = 0xff;
          if ((char)bVar1 < '\0') goto LAB_00100290;
LAB_001001f9:
          uVar5 = (ulong)(byte)puVar9[bVar1];
          bVar1 = param_3[2];
          bVar2 = param_3[3];
        }
        else {
          uVar6 = (ulong)(byte)puVar9[*param_3];
          bVar1 = param_3[1];
          if (-1 < (char)bVar1) goto LAB_001001f9;
LAB_00100290:
          bVar1 = param_3[2];
          bVar2 = param_3[3];
          uVar5 = 0xff;
        }
        if ((char)bVar1 < '\0') {
          return -1;
        }
        param_3 = param_3 + 4;
        if ((char)bVar2 < '\0') {
          return -1;
        }
        if ((char)(puVar9[bVar2] | puVar9[bVar1] | (byte)uVar6 | (byte)uVar5) < '\0') {
          return -1;
        }
        param_2 = puVar8 + 3;
        iVar7 = iVar7 + 3;
        uVar3 = (ulong)(byte)puVar9[bVar1] << 6 | (ulong)(byte)puVar9[bVar2];
        uVar6 = uVar3 | uVar6 << 0x12 | uVar5 << 0xc;
        puVar8[1] = (char)(uVar6 >> 8);
        *puVar8 = (char)(uVar6 >> 0x10);
        puVar8[2] = (char)uVar3;
        puVar8 = param_2;
      } while (iVar7 != iVar10);
    }
  }
  if ((char)*param_3 < '\0') {
    uVar6 = 0xff;
  }
  else {
    uVar6 = (ulong)(byte)puVar9[*param_3];
  }
  if ((char)param_3[1] < '\0') {
    uVar5 = 0xff;
  }
  else {
    uVar5 = (ulong)(byte)puVar9[param_3[1]];
  }
  if (-1 < (char)param_3[2]) {
    if ((-1 < (char)param_3[3]) &&
       (-1 < (char)(puVar9[param_3[3]] | puVar9[param_3[2]] | (byte)uVar6 | (byte)uVar5))) {
      uVar6 = (ulong)(byte)puVar9[param_3[2]] << 6 | (ulong)(byte)puVar9[param_3[3]] | uVar6 << 0x12
              | uVar5 << 0xc;
      if (param_5 == -1) {
        param_5 = (uint)(param_3[6] == 0x3d) + (uint)(param_3[7] == 0x3d);
      }
      *param_2 = (char)(uVar6 >> 0x10);
      if (param_5 == 1) {
        param_2[1] = (char)(uVar6 >> 8);
      }
      else if (param_5 != 2) {
        *(ushort *)(param_2 + 1) = (ushort)uVar6 << 8 | (ushort)uVar6 >> 8;
      }
      return (iVar10 - param_5) + 3;
    }
  }
  return -1;
}



void EVP_ENCODE_CTX_new(void)

{
  CRYPTO_zalloc(0x60,"crypto/evp/encode.c",0x81);
  return;
}



void EVP_ENCODE_CTX_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 EVP_ENCODE_CTX_copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  return 1;
}



undefined4 EVP_ENCODE_CTX_num(undefined4 *param_1)

{
  return *param_1;
}



void evp_encode_ctx_set_flags(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



void EVP_EncodeInit(EVP_ENCODE_CTX *ctx)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = _LC2;
  ctx->line_num = 0;
  uVar3 = _LC2;
  ctx->expect_nl = 0;
  _LC2._0_4_ = (undefined4)uVar1;
  _LC2._4_4_ = SUB84(uVar1,4);
  uVar2 = _LC2._4_4_;
  ctx->num = (undefined4)_LC2;
  _LC2 = uVar3;
  ctx->length = uVar2;
  return;
}



void EVP_EncodeUpdate(EVP_ENCODE_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *extraout_RDX;
  uchar *puVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uchar *__src;
  
  *outl = 0;
  if (inl < 1) {
    return;
  }
  iVar3 = ctx->length;
  if (0x50 < iVar3) {
    pcVar6 = "crypto/evp/encode.c";
    pcVar7 = "assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)";
    OPENSSL_die("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)","crypto/evp/encode.c",
                0xab);
    if (*(int *)pcVar7 != 0) {
      uVar4 = evp_encodeblock_int();
      uVar10 = (ulong)uVar4;
      if ((*(byte *)((long)pcVar7 + 0x5c) & 1) == 0) {
        uVar4 = uVar4 + 1;
        pcVar6[uVar10] = '\n';
      }
      pcVar6[uVar4] = '\0';
      *(int *)pcVar7 = 0;
      *extraout_RDX = uVar4;
      return;
    }
    *extraout_RDX = 0;
    return;
  }
  iVar1 = ctx->num;
  iVar8 = iVar3 - iVar1;
  if (inl < iVar8) {
    memcpy(ctx->enc_data + iVar1,in,(long)inl);
    ctx->num = ctx->num + inl;
  }
  else {
    bVar2 = true;
    uVar10 = 0;
    __src = in;
    if (iVar1 != 0) {
      __src = in + iVar8;
      memcpy(ctx->enc_data + iVar1,in,(long)iVar8);
      inl = inl - iVar8;
      iVar3 = evp_encodeblock_int(ctx,out,ctx->enc_data,ctx->length);
      ctx->num = 0;
      uVar10 = (ulong)iVar3;
      out = out + uVar10;
      if ((ctx->expect_nl & 1) == 0) {
        *out = '\n';
        uVar10 = uVar10 + 1;
        out = out + 1;
      }
      *out = '\0';
      iVar3 = ctx->length;
      bVar2 = uVar10 < 0x80000000;
    }
    if ((iVar3 <= inl) && (bVar2)) {
      uVar9 = 0x80000000;
      do {
        while( true ) {
          iVar3 = evp_encodeblock_int(ctx,out,__src);
          __src = __src + ctx->length;
          inl = inl - ctx->length;
          puVar5 = out + iVar3;
          uVar10 = uVar10 + (long)iVar3;
          if ((ctx->expect_nl & 1) != 0) break;
          uVar10 = uVar10 + 1;
          out = puVar5 + 1;
          puVar5[0] = '\n';
          puVar5[1] = '\0';
          if ((uVar9 <= uVar10) || (inl < ctx->length)) goto LAB_00100550;
        }
        *puVar5 = '\0';
      } while ((uVar10 < uVar9) && (out = puVar5, ctx->length <= inl));
    }
LAB_00100550:
    if (0x7fffffff < uVar10) {
      *outl = 0;
      return;
    }
    if (inl != 0) {
      memcpy(ctx->enc_data,__src,(long)inl);
    }
    ctx->num = inl;
    *outl = (int)uVar10;
  }
  return;
}



void EVP_EncodeFinal(EVP_ENCODE_CTX *ctx,uchar *out,int *outl)

{
  uint uVar1;
  ulong uVar2;
  
  if (ctx->num == 0) {
    *outl = 0;
    return;
  }
  uVar1 = evp_encodeblock_int(ctx,out,ctx->enc_data);
  uVar2 = (ulong)uVar1;
  if ((ctx->expect_nl & 1) == 0) {
    uVar1 = uVar1 + 1;
    out[uVar2] = '\n';
  }
  out[uVar1] = '\0';
  ctx->num = 0;
  *outl = uVar1;
  return;
}



int EVP_EncodeBlock(uchar *t,uchar *f,int n)

{
  int iVar1;
  
  iVar1 = evp_encodeblock_int(0,t,f,n);
  return iVar1;
}



void EVP_DecodeInit(EVP_ENCODE_CTX *ctx)

{
  ctx->num = 0;
  ctx->length = 0;
  ctx->line_num = 0;
  ctx->expect_nl = 0;
  return;
}



int EVP_DecodeUpdate(EVP_ENCODE_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  uchar *puVar16;
  undefined1 *puVar17;
  uchar *puVar18;
  uchar *puVar19;
  int iVar20;
  uchar *puVar21;
  bool bVar22;
  uchar *local_48;
  byte local_40;
  
  puVar1 = ctx->enc_data;
  uVar13 = ctx->num;
  if ((int)uVar13 < 1) {
    bVar22 = true;
    iVar20 = 0;
  }
  else {
    iVar20 = 0;
    bVar22 = true;
    if (ctx->enc_data[(long)(int)uVar13 + -1] == '=') {
      iVar20 = 1;
      bVar22 = false;
      if (uVar13 != 1) {
        iVar20 = (ctx->enc_data[(long)(int)uVar13 + -2] == '=') + 1;
        bVar22 = false;
      }
    }
  }
  uVar7 = 0;
  if (inl == 0) goto LAB_001007ee;
  puVar9 = srpdata_ascii2bin;
  if ((ctx->expect_nl & 2) == 0) {
    puVar9 = data_ascii2bin;
  }
  local_48 = out;
  if (0 < inl) {
    pbVar4 = in + inl;
    inl = 0;
LAB_0010077d:
    bVar5 = *in;
    in = in + 1;
    if (((char)bVar5 < '\0') || (bVar6 = puVar9[bVar5], bVar6 == 0xff)) {
LAB_00100890:
      uVar7 = 0xffffffff;
      goto LAB_001007ee;
    }
    if (bVar5 == 0x3d) {
      iVar20 = iVar20 + 1;
      if (iVar20 != 3) goto LAB_00100812;
      goto LAB_00100890;
    }
    if (0 < iVar20) {
      if ((bVar6 | 0x13) != 0xf3) goto LAB_00100890;
      if (bVar6 != 0xf2) {
        if (uVar13 == 0x40) goto LAB_00100848;
        goto LAB_001007c9;
      }
LAB_00100af0:
      bVar22 = true;
      if (0 < (int)uVar13) goto LAB_001007dd;
      goto LAB_00100b02;
    }
LAB_00100812:
    if (bVar6 == 0xf2) goto LAB_00100af0;
    if ((bVar6 | 0x13) != 0xf3) {
      if (0x3f < (int)uVar13) goto LAB_00100890;
      lVar10 = (long)(int)uVar13;
      uVar13 = uVar13 + 1;
      puVar1[lVar10] = bVar5;
    }
    if (uVar13 == 0x40) {
      if (iVar20 + 1U < 4) {
LAB_00100848:
        puVar17 = srpdata_ascii2bin;
        puVar16 = puVar1;
        if ((ctx->expect_nl & 2) == 0) {
          puVar17 = data_ascii2bin;
        }
        do {
          if (((char)*puVar16 < '\0') || (puVar17[*puVar16] != -0x20)) {
            iVar8 = ((int)puVar1 + 0x40) - (int)puVar16;
            if (iVar8 < 4) goto LAB_001008d4;
            uVar11 = (ulong)iVar8;
            goto LAB_00100916;
          }
          puVar16 = puVar16 + 1;
        } while (puVar16 != ctx->enc_data + 0x40);
        if (iVar20 < 1) {
          uVar13 = 0;
          goto LAB_001007c9;
        }
      }
      goto LAB_001008d4;
    }
    goto LAB_001007c9;
  }
  if ((int)uVar13 < 1) {
    inl = 0;
    goto LAB_00100b56;
  }
  if ((uVar13 & 3) == 0) {
    bVar22 = false;
    inl = 0;
    goto LAB_00100b20;
  }
  inl = 0;
LAB_00100b75:
  uVar7 = 1;
LAB_001007ee:
  *outl = inl;
  ctx->num = uVar13;
  return uVar7;
LAB_00100916:
  if (((char)puVar16[uVar11 - 1] < '\0') || ((puVar17[puVar16[uVar11 - 1]] | 0x13) != 0xf3))
  goto LAB_0010091f;
  uVar11 = uVar11 - 1;
  if ((int)uVar11 < 4) goto LAB_001008d4;
  goto LAB_00100916;
LAB_0010091f:
  if ((uVar11 & 3) != 0) goto LAB_001008d4;
  if ((int)uVar11 == 4) {
    iVar8 = 0;
    puVar18 = local_48;
    puVar21 = puVar16;
  }
  else {
    iVar8 = 0;
    puVar21 = puVar16 + (ulong)(((int)uVar11 - 5U >> 2) + 1) * 4;
    puVar19 = local_48;
    do {
      if ((char)*puVar16 < '\0') {
        bVar5 = puVar16[1];
        uVar11 = 0xff;
        if (-1 < (char)bVar5) goto LAB_00100961;
LAB_001009f8:
        uVar14 = 0xff;
      }
      else {
        uVar11 = (ulong)(byte)puVar17[*puVar16];
        bVar5 = puVar16[1];
        if ((char)bVar5 < '\0') goto LAB_001009f8;
LAB_00100961:
        uVar14 = (ulong)(byte)puVar17[bVar5];
      }
      puVar2 = puVar16 + 2;
      puVar3 = puVar16 + 3;
      if ((char)*puVar2 < '\0') goto LAB_001008d4;
      puVar16 = puVar16 + 4;
      if (((char)*puVar3 < '\0') ||
         ((char)(puVar17[*puVar2] | puVar17[*puVar3] | (byte)uVar11 | (byte)uVar14) < '\0'))
      goto LAB_001008d4;
      puVar18 = puVar19 + 3;
      iVar8 = iVar8 + 3;
      uVar12 = (ulong)(byte)puVar17[*puVar3] | (ulong)(byte)puVar17[*puVar2] << 6;
      uVar11 = uVar12 | uVar11 << 0x12 | uVar14 << 0xc;
      *puVar19 = (uchar)(uVar11 >> 0x10);
      puVar19[1] = (uchar)(uVar11 >> 8);
      puVar19[2] = (uchar)uVar12;
      puVar19 = puVar18;
    } while (puVar16 != puVar21);
  }
  if ((char)*puVar21 < '\0') {
    uVar11 = 0xff;
  }
  else {
    uVar11 = (ulong)(byte)puVar17[*puVar21];
  }
  if ((char)puVar21[1] < '\0') {
    local_40 = 0xff;
  }
  else {
    local_40 = puVar17[puVar21[1]];
  }
  if ((char)puVar21[2] < '\0') goto LAB_001008d4;
  if (((char)puVar21[3] < '\0') ||
     ((char)(puVar17[puVar21[2]] | puVar17[puVar21[3]] | (byte)uVar11 | local_40) < '\0'))
  goto LAB_001008d4;
  uVar11 = (ulong)(byte)puVar17[puVar21[2]] << 6 | (ulong)(byte)puVar17[puVar21[3]] | uVar11 << 0x12
           | (ulong)local_40 << 0xc;
  iVar15 = iVar20;
  if (iVar20 == -1) {
    iVar15 = (uint)(puVar21[6] == 0x3d) + (uint)(puVar21[7] == 0x3d);
  }
  *puVar18 = (uchar)(uVar11 >> 0x10);
  if (iVar15 == 1) {
    puVar18[1] = (uchar)(uVar11 >> 8);
  }
  else if (iVar15 != 2) {
    *(ushort *)(puVar18 + 1) = (ushort)uVar11 << 8 | (ushort)uVar11 >> 8;
  }
  uVar13 = 0;
  iVar8 = (iVar8 - iVar15) + 3;
  inl = inl + iVar8;
  local_48 = local_48 + iVar8;
LAB_001007c9:
  if (in == pbVar4) goto code_r0x001007ce;
  goto LAB_0010077d;
code_r0x001007ce:
  bVar22 = false;
  uVar7 = uVar13;
  if (0 < (int)uVar13) {
LAB_001007dd:
    if ((uVar13 & 3) != 0) {
      uVar7 = -(uint)bVar22 | 1;
      goto LAB_001007ee;
    }
LAB_00100b20:
    iVar8 = evp_decodeblock_int(ctx,local_48,puVar1,uVar13,iVar20);
    if ((iVar8 < 0) || ((iVar8 == 0 && (0 < iVar20)))) {
LAB_001008d4:
      uVar13 = 0;
      uVar7 = 0xffffffff;
      goto LAB_001007ee;
    }
    inl = inl + iVar8;
    uVar13 = 0;
    uVar7 = 0;
    if (bVar22) {
LAB_00100b02:
      uVar7 = 0;
      goto LAB_001007ee;
    }
  }
  uVar13 = uVar7;
  bVar22 = iVar20 == 0;
LAB_00100b56:
  if ((uVar13 == 0) && (!bVar22)) {
    uVar13 = 0;
    uVar7 = 0;
    goto LAB_001007ee;
  }
  goto LAB_00100b75;
}



int EVP_DecodeBlock(uchar *t,uchar *f,int n)

{
  int iVar1;
  
  iVar1 = evp_decodeblock_int(0,t,f,n,0);
  return iVar1;
}



int EVP_DecodeFinal(EVP_ENCODE_CTX *ctx,uchar *out,int *outl)

{
  int iVar1;
  int iVar2;
  
  *outl = 0;
  if (ctx->num == 0) {
    return 1;
  }
  iVar1 = evp_decodeblock_int(ctx,out,ctx->enc_data,ctx->num,0xffffffff);
  iVar2 = -1;
  if (-1 < iVar1) {
    ctx->num = 0;
    iVar2 = 1;
    *outl = iVar1;
  }
  return iVar2;
}


