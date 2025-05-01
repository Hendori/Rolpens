
/* WARNING: Unknown calling convention */

_Bool decode_8(char *in,idx_t inlen,char **outp,idx_t *outleft)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (inlen < 8) {
    return false;
  }
  if (base32_to_int[(byte)*in] < '\0') {
    return false;
  }
  bVar1 = base32_to_int[(byte)in[1]];
  if ((char)bVar1 < '\0') {
    return false;
  }
  pbVar3 = (byte *)*outp;
  pbVar4 = pbVar3;
  if (*outleft != 0) {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = base32_to_int[(byte)*in] << 3 | (char)bVar1 >> 2;
    *outleft = *outleft + -1;
  }
  if (in[2] == 0x3d) {
    if ((((in[3] != '=') || (in[4] != '=')) || (in[5] != '=')) || ((in[6] != '=' || (in[7] != '=')))
       ) goto LAB_00100170;
    bVar1 = bVar1 & 3;
  }
  else {
    if ((base32_to_int[(byte)in[2]] < '\0') ||
       (bVar2 = base32_to_int[(byte)in[3]], (char)bVar2 < '\0')) goto LAB_00100170;
    if (*outleft != 0) {
      *pbVar4 = bVar1 << 6 | base32_to_int[(byte)in[2]] * '\x02' | (char)bVar2 >> 4;
      *outleft = *outleft + -1;
      pbVar4 = pbVar4 + 1;
    }
    if (in[4] == 0x3d) {
      if (((in[5] != '=') || (in[6] != '=')) || (in[7] != '=')) goto LAB_00100170;
      bVar1 = bVar2 & 0xf;
    }
    else {
      bVar1 = base32_to_int[(byte)in[4]];
      if ((char)bVar1 < '\0') goto LAB_00100170;
      if (*outleft != 0) {
        *pbVar4 = bVar2 << 4 | (char)bVar1 >> 1;
        *outleft = *outleft + -1;
        pbVar4 = pbVar4 + 1;
      }
      if (in[5] == 0x3d) {
        if ((in[6] != '=') || (in[7] != '=')) goto LAB_00100170;
        bVar1 = bVar1 & 1;
      }
      else {
        if ((base32_to_int[(byte)in[5]] < '\0') ||
           (bVar2 = base32_to_int[(byte)in[6]], (char)bVar2 < '\0')) goto LAB_00100170;
        pbVar3 = pbVar4;
        if (*outleft != 0) {
          pbVar3 = pbVar4 + 1;
          *pbVar4 = bVar1 << 7 | base32_to_int[(byte)in[5]] << 2 | (char)bVar2 >> 3;
          *outleft = *outleft + -1;
        }
        pbVar4 = pbVar3;
        if (in[7] != 0x3d) {
          if (base32_to_int[(byte)in[7]] < '\0') goto LAB_00100170;
          if (*outleft != 0) {
            pbVar4 = pbVar3 + 1;
            *pbVar3 = bVar2 << 5 | base32_to_int[(byte)in[7]];
            *outleft = *outleft + -1;
          }
          goto LAB_00100156;
        }
        bVar1 = bVar2 & 7;
      }
    }
  }
  if (bVar1 == 0) {
LAB_00100156:
    *outp = (char *)pbVar4;
    return true;
  }
LAB_00100170:
  *outp = (char *)pbVar4;
  return false;
}



/* WARNING: Unknown calling convention */

_Bool isubase32(uchar ch)

{
  return (_Bool)((byte)~base32_to_int[ch] >> 7);
}



/* WARNING: Unknown calling convention */

_Bool isbase32(char ch)

{
  return (_Bool)((byte)~base32_to_int[(byte)ch] >> 7);
}



/* WARNING: Unknown calling convention */

void base32_decode_ctx_init(base32_decode_context *ctx)

{
  ctx->i = 0;
  return;
}



/* WARNING: Unknown calling convention */

void base32_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  
  if (inlen == 0) {
    if (outlen != 0) {
      *out = '\0';
    }
  }
  else if (outlen != 0) {
    bVar6 = *in;
    *out = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[bVar6 >> 3];
    if (outlen != 1) {
      pcVar1 = in + inlen + -1;
      pcVar2 = in + inlen + -3;
      pcVar3 = in + inlen + -2;
      pcVar4 = in + inlen + -5;
      pcVar5 = in + inlen + -4;
      do {
        if (pcVar1 == in) {
          out[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[(uint)bVar6 * 4 & 0x1c];
          if (outlen == 2) {
            return;
          }
          out[2] = '=';
          if (outlen == 3) {
            return;
          }
          out[3] = '=';
          if (outlen == 4) {
            return;
          }
LAB_00100431:
          out[4] = '=';
          if (outlen == 5) {
            return;
          }
LAB_0010043b:
          out[5] = '=';
          if (outlen == 6) {
            return;
          }
          out[6] = '=';
joined_r0x0010044d:
          if (outlen == 7) {
            return;
          }
          out[7] = '=';
          if (outlen == 8) {
            return;
          }
LAB_0010045d:
          out[8] = '\0';
          return;
        }
        bVar7 = in[1];
        out[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[(uint)bVar6 * 4 + (uint)(bVar7 >> 6) & 0x1f];
        if (outlen == 2) {
          return;
        }
        out[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[bVar7 >> 1 & 0x1f];
        if (outlen == 3) {
          return;
        }
        if (in == pcVar3) {
          out[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[(uint)bVar7 * 0x10 & 0x10];
          if (outlen == 4) {
            return;
          }
          goto LAB_00100431;
        }
        bVar6 = in[2];
        out[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[(uint)bVar7 * 0x10 + (uint)(bVar6 >> 4) & 0x1f];
        if (outlen == 4) {
          return;
        }
        if (pcVar2 == in) {
          out[4] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[(uint)bVar6 + (uint)bVar6 & 0x1e];
          if (outlen == 5) {
            return;
          }
          goto LAB_0010043b;
        }
        bVar7 = in[3];
        out[4] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"
                 [(uint)bVar6 + (uint)bVar6 + (uint)(bVar7 >> 7) & 0x1f];
        if (outlen == 5) {
          return;
        }
        out[5] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[bVar7 >> 2 & 0x1f];
        if (outlen == 6) {
          return;
        }
        if (pcVar5 == in) {
          out[6] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[(uint)bVar7 * 8 & 0x18];
          goto joined_r0x0010044d;
        }
        bVar6 = in[4];
        out[6] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[(uint)bVar7 * 8 + (uint)(bVar6 >> 5) & 0x1f];
        if (outlen == 7) {
          return;
        }
        out[7] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[bVar6 & 0x1f];
        outlen = outlen + -8;
        if (outlen == 0) {
          return;
        }
        if (pcVar4 == in) goto LAB_0010045d;
        bVar6 = in[5];
        in = in + 5;
        out[8] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[bVar6 >> 3];
        out = out + 8;
        if (outlen == 1) {
          return;
        }
      } while( true );
    }
  }
  return;
}



/* WARNING: Unknown calling convention */

idx_t base32_encode_alloc(char *in,idx_t inlen,char **out)

{
  char *out_00;
  long lVar1;
  long lVar2;
  size_t __size;
  
  lVar1 = inlen / 5 + (ulong)(inlen != (inlen / 5) * 5);
  lVar2 = lVar1 * 8;
  if ((inlen < 0) || (SEXT816(lVar2) != SEXT816(lVar1) * SEXT816(8))) {
    *out = (char *)0x0;
    __size = 0;
  }
  else {
    __size = lVar2 + 1;
    out_00 = (char *)malloc(__size);
    *out = out_00;
    if (out_00 != (char *)0x0) {
      base32_encode(in,inlen,out_00,__size);
      return lVar2;
    }
  }
  return __size;
}



/* WARNING: Removing unreachable block (ram,0x00100795) */
/* WARNING: Unknown calling convention */

_Bool base32_decode_ctx(base32_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  char cVar1;
  bool bVar2;
  _Bool _Var3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  long inlen_00;
  char *in_00;
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
  bVar9 = ctx == (base32_decode_context *)0x0;
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
LAB_00100658:
  do {
    inlen_00 = inlen;
    iVar8 = lVar6;
    in_00 = in;
    if (bVar2) {
      while( true ) {
        in_00 = in + (inlen - inlen_00);
        _Var3 = decode_8(in_00,inlen_00,&local_50,&outleft);
        lVar6 = outleft;
        if (!_Var3) break;
        inlen_00 = inlen_00 + -8;
        iVar8 = outleft;
      }
    }
    _Var3 = inlen_00 == 0 && local_5b;
    if (_Var3) goto LAB_00100708;
    in = in_00;
    if (inlen_00 == 0) {
      local_50 = local_50 + -(iVar8 - lVar6);
      pcVar7 = in_00;
      if (ctx == (base32_decode_context *)0x0) {
        _Var3 = true;
        lVar6 = iVar8;
        outleft = iVar8;
LAB_00100708:
        *outlen = *outlen - lVar6;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return _Var3;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_0010069b:
      iVar5 = ctx->i;
      lVar6 = (long)iVar5;
      if (iVar5 == 8) {
        ctx->i = 0;
        lVar6 = 0;
      }
      outleft = iVar8;
      if (((inlen_00 < 8) || (iVar5 != 8 && iVar5 != 0)) ||
         (pvVar4 = memchr(in_00,10,8), pvVar4 != (void *)0x0)) {
        if (in_00 < pcVar7) {
          do {
            cVar1 = *in;
            in = in + 1;
            if (cVar1 != '\n') {
              iVar5 = (int)lVar6 + 1;
              ctx->i = iVar5;
              ctx->buf[lVar6] = cVar1;
              if (iVar5 == 8) {
                in_00 = ctx->buf;
                inlen_00 = 8;
                goto LAB_0010061d;
              }
              lVar6 = (long)iVar5;
            }
          } while (in != pcVar7);
        }
        inlen_00 = (long)(int)lVar6;
        in_00 = ctx->buf;
        if (inlen_00 != 0) goto LAB_0010061d;
        goto LAB_001006f9;
      }
      inlen_00 = 8;
      in = in_00 + 8;
    }
    else {
      if ((*in_00 == '\n') && (!bVar9)) {
        in = in_00 + 1;
        inlen = inlen_00 + -1;
        goto LAB_00100658;
      }
      pcVar7 = in_00 + inlen_00;
      local_50 = local_50 + -(iVar8 - lVar6);
      outleft = iVar8;
      if (ctx != (base32_decode_context *)0x0) goto LAB_0010069b;
LAB_0010061d:
      if (((inlen_00 < 8) && (!bVar9)) && (bVar9 || bVar10)) {
LAB_001006f9:
        _Var3 = true;
        lVar6 = outleft;
        goto LAB_00100708;
      }
    }
    _Var3 = decode_8(in_00,inlen_00,&local_50,&outleft);
    lVar6 = outleft;
    if (!_Var3) goto LAB_00100708;
    inlen = (long)pcVar7 - (long)in;
  } while( true );
}



/* WARNING: Unknown calling convention */

_Bool base32_decode_alloc_ctx
                (base32_decode_context *ctx,char *in,idx_t inlen,char **out,idx_t *outlen)

{
  _Bool _Var1;
  char *out_00;
  long in_FS_OFFSET;
  idx_t needlen;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  needlen = (inlen >> 3) * 5 + 5;
  out_00 = (char *)malloc(needlen);
  *out = out_00;
  if (out_00 != (char *)0x0) {
    _Var1 = base32_decode_ctx(ctx,in,inlen,out_00,&needlen);
    if (!_Var1) {
      free(*out);
      *out = (char *)0x0;
      goto LAB_001008a8;
    }
    if (outlen != (idx_t *)0x0) {
      *outlen = needlen;
    }
  }
  _Var1 = true;
LAB_001008a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


