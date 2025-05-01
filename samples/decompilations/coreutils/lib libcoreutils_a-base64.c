
/* WARNING: Unknown calling convention */

_Bool decode_4(char *in,idx_t inlen,char **outp,idx_t *outleft)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (inlen < 2) {
    return false;
  }
  if (base64_to_int[(byte)*in] < '\0') {
    return false;
  }
  bVar1 = base64_to_int[(byte)in[1]];
  if ((char)bVar1 < '\0') {
    return false;
  }
  pbVar3 = (byte *)*outp;
  pbVar4 = pbVar3;
  if (*outleft != 0) {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = base64_to_int[(byte)*in] << 2 | (char)bVar1 >> 4;
    *outleft = *outleft + -1;
  }
  if (inlen == 2) goto LAB_001000d0;
  if (in[2] == 0x3d) {
    if ((inlen != 4) || (in[3] != '=')) goto LAB_001000d0;
    bVar1 = bVar1 & 0xf;
  }
  else {
    bVar2 = base64_to_int[(byte)in[2]];
    if ((char)bVar2 < '\0') goto LAB_001000d0;
    pbVar3 = pbVar4;
    if (*outleft != 0) {
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar1 << 4 | (char)bVar2 >> 2;
      *outleft = *outleft + -1;
    }
    pbVar4 = pbVar3;
    if (inlen == 3) goto LAB_001000d0;
    if (in[3] != 0x3d) {
      if (base64_to_int[(byte)in[3]] < '\0') goto LAB_001000d0;
      if (*outleft != 0) {
        pbVar4 = pbVar3 + 1;
        *pbVar3 = bVar2 << 6 | base64_to_int[(byte)in[3]];
        *outleft = *outleft + -1;
      }
      goto LAB_001000b1;
    }
    if (inlen != 4) goto LAB_001000d0;
    bVar1 = bVar2 & 3;
  }
  if (bVar1 == 0) {
LAB_001000b1:
    *outp = (char *)pbVar4;
    return true;
  }
LAB_001000d0:
  *outp = (char *)pbVar4;
  return false;
}



/* WARNING: Unknown calling convention */

_Bool isubase64(uchar ch)

{
  return (_Bool)((byte)~base64_to_int[ch] >> 7);
}



/* WARNING: Unknown calling convention */

_Bool isbase64(char ch)

{
  return (_Bool)((byte)~base64_to_int[(byte)ch] >> 7);
}



/* WARNING: Unknown calling convention */

void base64_decode_ctx_init(base64_decode_context *ctx)

{
  ctx->i = 0;
  return;
}



/* WARNING: Unknown calling convention */

void base64_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  if ((outlen & 3U) == 0) {
    lVar6 = (outlen >> 2) * 3;
    if (lVar6 == inlen) {
      if (lVar6 == 0) {
        return;
      }
      pbVar8 = (byte *)in;
      do {
        pbVar9 = pbVar8 + 3;
        *(uint *)out = CONCAT31(CONCAT21(CONCAT11("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                  [pbVar8[2] & 0x3f],
                                                  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                  [(uint)(pbVar8[2] >> 6) + (uint)pbVar8[1] * 4 &
                                                   0x3f]),
                                         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                         [(uint)(pbVar8[1] >> 4) + (uint)*pbVar8 * 0x10 & 0x3f]),
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                [*pbVar8 >> 2]);
        out = out + 4;
        pbVar8 = pbVar9;
      } while ((byte *)(in + lVar6) != pbVar9);
      return;
    }
    if (outlen == 0) {
      return;
    }
    if (inlen != 0) goto LAB_00100186;
    if (outlen == 0) {
      return;
    }
  }
  else if (inlen != 0) {
LAB_00100186:
    bVar4 = *in;
    *out = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar4 >> 2];
    if (outlen == 1) {
      return;
    }
    pcVar1 = in + inlen + -1;
    pcVar2 = in + inlen + -3;
    pcVar3 = in + inlen + -2;
    do {
      if (in == pcVar1) {
        out[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(uint)bVar4 * 0x10 & 0x30];
        if (outlen == 2) {
          return;
        }
        out[2] = '=';
        if (outlen == 3) {
          return;
        }
LAB_00100271:
        out[3] = '=';
        if (outlen == 4) {
          return;
        }
LAB_0010027f:
        out[4] = '\0';
        return;
      }
      bVar5 = in[1];
      out[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(uint)bVar4 * 0x10 + (uint)(bVar5 >> 4) & 0x3f];
      if (outlen == 2) {
        return;
      }
      uVar7 = (uint)bVar5 * 4;
      if (in == pcVar3) {
        out[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar7 & 0x3c];
        if (outlen == 3) {
          return;
        }
        goto LAB_00100271;
      }
      bVar4 = in[2];
      out[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [uVar7 + (bVar4 >> 6) & 0x3f];
      if (outlen == 3) {
        return;
      }
      out[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar4 & 0x3f];
      outlen = outlen + -4;
      if (outlen == 0) {
        return;
      }
      if (in == pcVar2) goto LAB_0010027f;
      bVar4 = in[3];
      in = in + 3;
      out[4] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar4 >> 2];
      out = out + 4;
      if (outlen == 1) {
        return;
      }
    } while( true );
  }
  *out = '\0';
  return;
}



/* WARNING: Unknown calling convention */

idx_t base64_encode_alloc(char *in,idx_t inlen,char **out)

{
  char *out_00;
  long lVar1;
  long lVar2;
  size_t __size;
  
  lVar1 = inlen / 3 + (ulong)(inlen != (inlen / 3) * 3);
  lVar2 = lVar1 * 4;
  if ((inlen < 0) || (SEXT816(lVar2) != SEXT816(lVar1) * SEXT816(4))) {
    *out = (char *)0x0;
    __size = 0;
  }
  else {
    __size = lVar2 + 1;
    out_00 = (char *)malloc(__size);
    *out = out_00;
    if (out_00 != (char *)0x0) {
      base64_encode(in,inlen,out_00,__size);
      return lVar2;
    }
  }
  return __size;
}



/* WARNING: Removing unreachable block (ram,0x0010060d) */
/* WARNING: Unknown calling convention */

_Bool base64_decode_ctx(base64_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  char cVar1;
  bool bVar2;
  _Bool _Var3;
  void *pvVar4;
  int iVar5;
  char *in_00;
  long lVar6;
  long inlen_00;
  char *pcVar7;
  idx_t iVar8;
  long in_FS_OFFSET;
  bool bVar9;
  bool bVar10;
  bool local_5b;
  char *local_50;
  idx_t outleft;
  long local_40;
  
  outleft = *outlen;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar9 = ctx == (base64_decode_context *)0x0;
  if (bVar9) {
    bVar2 = true;
  }
  else {
    bVar2 = ctx->i == 0 && inlen != 0;
  }
  bVar10 = inlen != 0;
  local_5b = bVar9 || bVar10;
  lVar6 = outleft;
  local_50 = out;
LAB_001004d7:
  do {
    in_00 = in;
    inlen_00 = inlen;
    iVar8 = lVar6;
    if (bVar2) {
      while( true ) {
        in_00 = in + (inlen - inlen_00);
        _Var3 = decode_4(in_00,inlen_00,&local_50,&outleft);
        lVar6 = outleft;
        if (!_Var3) break;
        inlen_00 = inlen_00 + -4;
        iVar8 = outleft;
      }
    }
    _Var3 = inlen_00 == 0 && local_5b;
    if (_Var3) goto LAB_00100588;
    if (inlen_00 == 0) {
      local_50 = local_50 + -(iVar8 - lVar6);
      pcVar7 = in_00;
      if (ctx == (base64_decode_context *)0x0) {
        _Var3 = true;
        lVar6 = iVar8;
        outleft = iVar8;
LAB_00100588:
        *outlen = *outlen - lVar6;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return _Var3;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_0010051a:
      iVar5 = ctx->i;
      lVar6 = (long)iVar5;
      if (iVar5 == 4) {
        ctx->i = 0;
        lVar6 = 0;
      }
      outleft = iVar8;
      if (((inlen_00 < 4) || (iVar5 != 4 && iVar5 != 0)) ||
         (pvVar4 = memchr(in_00,10,4), pvVar4 != (void *)0x0)) {
        if (in_00 < pcVar7) {
          do {
            cVar1 = *in_00;
            in_00 = in_00 + 1;
            if (cVar1 != '\n') {
              iVar5 = (int)lVar6 + 1;
              ctx->i = iVar5;
              ctx->buf[lVar6] = cVar1;
              if (iVar5 == 4) {
                inlen_00 = 4;
                in = in_00;
                in_00 = ctx->buf;
                goto LAB_0010049c;
              }
              lVar6 = (long)iVar5;
            }
          } while (in_00 != pcVar7);
        }
        inlen_00 = (long)(int)lVar6;
        in = in_00;
        in_00 = ctx->buf;
        if (inlen_00 != 0) goto LAB_0010049c;
        goto LAB_00100577;
      }
      inlen_00 = 4;
      in = in_00 + 4;
    }
    else {
      if ((*in_00 == '\n') && (!bVar9)) {
        in = in_00 + 1;
        inlen = inlen_00 + -1;
        goto LAB_001004d7;
      }
      pcVar7 = in_00 + inlen_00;
      local_50 = local_50 + -(iVar8 - lVar6);
      in = in_00;
      outleft = iVar8;
      if (ctx != (base64_decode_context *)0x0) goto LAB_0010051a;
LAB_0010049c:
      if (((inlen_00 < 4) && (!bVar9)) && (bVar9 || bVar10)) {
LAB_00100577:
        _Var3 = true;
        lVar6 = outleft;
        goto LAB_00100588;
      }
    }
    _Var3 = decode_4(in_00,inlen_00,&local_50,&outleft);
    lVar6 = outleft;
    if (!_Var3) goto LAB_00100588;
    inlen = (long)pcVar7 - (long)in;
  } while( true );
}



/* WARNING: Unknown calling convention */

_Bool base64_decode_alloc_ctx
                (base64_decode_context *ctx,char *in,idx_t inlen,char **out,idx_t *outlen)

{
  _Bool _Var1;
  char *out_00;
  long in_FS_OFFSET;
  idx_t needlen;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  needlen = (inlen >> 2) * 3 + 3;
  out_00 = (char *)malloc(needlen);
  *out = out_00;
  if (out_00 != (char *)0x0) {
    _Var1 = base64_decode_ctx(ctx,in,inlen,out_00,&needlen);
    if (!_Var1) {
      free(*out);
      *out = (char *)0x0;
      goto LAB_00100718;
    }
    if (outlen != (idx_t *)0x0) {
      *outlen = needlen;
    }
  }
  _Var1 = true;
LAB_00100718:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


