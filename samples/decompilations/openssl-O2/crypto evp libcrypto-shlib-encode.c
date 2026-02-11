
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
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uchar *__src;
  
  *outl = 0;
  if (inl < 1) {
    return;
  }
  iVar3 = ctx->length;
  if (iVar3 < 0x51) {
    iVar1 = ctx->num;
    iVar7 = iVar3 - iVar1;
    if (inl < iVar7) {
      memcpy(ctx->enc_data + iVar1,in,(long)inl);
      ctx->num = ctx->num + inl;
    }
    else {
      bVar2 = true;
      uVar9 = 0;
      __src = in;
      if (iVar1 != 0) {
        __src = in + iVar7;
        memcpy(ctx->enc_data + iVar1,in,(long)iVar7);
        inl = inl - iVar7;
        iVar3 = evp_encodeblock_int(ctx,out,ctx->enc_data,ctx->length);
        ctx->num = 0;
        uVar9 = (ulong)iVar3;
        out = out + uVar9;
        if ((ctx->expect_nl & 1) == 0) {
          *out = '\n';
          uVar9 = uVar9 + 1;
          out = out + 1;
        }
        *out = '\0';
        iVar3 = ctx->length;
        bVar2 = uVar9 < 0x80000000;
      }
      if ((iVar3 <= inl) && (bVar2)) {
        uVar8 = 0x80000000;
        do {
          iVar3 = evp_encodeblock_int(ctx,out,__src);
          __src = __src + ctx->length;
          inl = inl - ctx->length;
          out = out + iVar3;
          uVar9 = uVar9 + (long)iVar3;
          if ((ctx->expect_nl & 1) == 0) {
            *out = '\n';
            uVar9 = uVar9 + 1;
            out = out + 1;
          }
          *out = '\0';
        } while ((uVar9 < uVar8) && (ctx->length <= inl));
      }
      if (0x7fffffff < uVar9) {
        *outl = 0;
        return;
      }
      if (inl != 0) {
        memcpy(ctx->enc_data,__src,(long)inl);
      }
      ctx->num = inl;
      *outl = (int)uVar9;
    }
    return;
  }
  pcVar5 = "crypto/evp/encode.c";
  pcVar6 = "assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)";
  OPENSSL_die("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)","crypto/evp/encode.c",
              0xab);
  if (*(int *)pcVar6 == 0) {
    *extraout_RDX = 0;
    return;
  }
  uVar4 = evp_encodeblock_int();
  uVar9 = (ulong)uVar4;
  if ((*(byte *)((long)pcVar6 + 0x5c) & 1) == 0) {
    uVar4 = uVar4 + 1;
    pcVar5[uVar9] = '\n';
  }
  pcVar5[uVar4] = '\0';
  *(int *)pcVar6 = 0;
  *extraout_RDX = uVar4;
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
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  
  puVar1 = ctx->enc_data;
  uVar8 = ctx->num;
  iVar10 = 0;
  if (((0 < (int)uVar8) && (iVar10 = 0, ctx->enc_data[(long)(int)uVar8 + -1] == '=')) &&
     (iVar10 = 1, uVar8 != 1)) {
    iVar10 = (ctx->enc_data[(long)(int)uVar8 + -2] == '=') + 1;
  }
  uVar5 = 0;
  if (inl == 0) goto LAB_001007bf;
  puVar11 = data_ascii2bin;
  if ((ctx->expect_nl & 2) != 0) {
    puVar11 = srpdata_ascii2bin;
  }
  if (inl < 1) {
    if (0 < (int)uVar8) {
      if ((uVar8 & 3) != 0) {
        inl = 0;
        uVar5 = 1;
        goto LAB_001007bf;
      }
      uVar9 = 0;
      inl = 0;
      goto LAB_001008a4;
    }
    inl = 0;
LAB_001007ab:
    uVar9 = uVar8;
    if (uVar9 == 0) goto LAB_001007af;
  }
  else {
    pbVar2 = in + inl;
    inl = 0;
    do {
      bVar3 = *in;
      in = in + 1;
      if (((char)bVar3 < '\0') || (bVar4 = puVar11[bVar3], bVar4 == 0xff)) goto LAB_00100850;
      if (bVar3 == 0x3d) {
        iVar10 = iVar10 + 1;
        if (iVar10 == 3) goto LAB_00100850;
LAB_001007e2:
        if (bVar4 == 0xf2) {
LAB_00100888:
          uVar9 = 1;
          if (0 < (int)uVar8) goto LAB_00100891;
          uVar5 = 0;
          goto LAB_001007bf;
        }
        if ((bVar4 | 0x13) != 0xf3) {
          if (0x3f < (int)uVar8) goto LAB_00100850;
          lVar7 = (long)(int)uVar8;
          uVar8 = uVar8 + 1;
          puVar1[lVar7] = bVar3;
        }
      }
      else {
        if (iVar10 < 1) goto LAB_001007e2;
        if ((bVar4 | 0x13) != 0xf3) goto LAB_00100850;
        if (bVar4 == 0xf2) goto LAB_00100888;
      }
      if (uVar8 == 0x40) {
        iVar6 = evp_decodeblock_int(ctx,out,puVar1,0x40,iVar10);
        if ((iVar6 < 0) || ((iVar6 == 0 && (0 < iVar10)))) goto LAB_0010084c;
        inl = inl + iVar6;
        uVar8 = 0;
        out = out + iVar6;
      }
    } while (in != pbVar2);
    uVar9 = 0;
    if ((int)uVar8 < 1) goto LAB_001007ab;
LAB_00100891:
    if ((uVar8 & 3) != 0) {
      uVar5 = -(uint)(uVar9 != 0) | 1;
      goto LAB_001007bf;
    }
LAB_001008a4:
    iVar6 = evp_decodeblock_int(ctx,out,puVar1,uVar8,iVar10);
    if ((iVar6 < 0) || ((iVar6 == 0 && (0 < iVar10)))) {
LAB_0010084c:
      uVar8 = 0;
LAB_00100850:
      uVar5 = 0xffffffff;
      goto LAB_001007bf;
    }
    inl = inl + iVar6;
    if (uVar9 != 0) {
      uVar8 = 0;
      uVar5 = 0;
      goto LAB_001007bf;
    }
LAB_001007af:
    uVar8 = 0;
    uVar5 = 0;
    if (iVar10 != 0) goto LAB_001007bf;
  }
  uVar8 = uVar9;
  uVar5 = 1;
LAB_001007bf:
  *outl = inl;
  ctx->num = uVar8;
  return uVar5;
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


