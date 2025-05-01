
/* WARNING: Unknown calling convention */

int base32_required_padding(int len)

{
  uint uVar1;
  
  uVar1 = len & 7;
  if (uVar1 != 0) {
    uVar1 = (uint)(len >> 0x1f) >> 0x1d;
    uVar1 = (uVar1 - (len + uVar1 & 7)) + 8;
  }
  return uVar1;
}



/* WARNING: Unknown calling convention */

int base64_required_padding(int len)

{
  uint uVar1;
  
  uVar1 = len & 3;
  if (uVar1 != 0) {
    uVar1 = (uint)(len >> 0x1f) >> 0x1e;
    uVar1 = (uVar1 - (len + uVar1 & 3)) + 4;
  }
  return uVar1;
}



/* WARNING: Unknown calling convention */

int no_required_padding(int len)

{
  return 0;
}



/* WARNING: Unknown calling convention */

int base64_length_wrapper(int len)

{
  return ((len + 2) / 3) * 4;
}



/* WARNING: Unknown calling convention */

void base64_decode_ctx_init_wrapper(base_decode_context *ctx)

{
  (ctx->ctx).base64.i = 0;
  return;
}



/* WARNING: Unknown calling convention */

_Bool isubase64url(uchar ch)

{
  bool bVar1;
  
  bVar1 = ch == '-' || ch == '_';
  if ((ch != '-' && ch != '_') && ((ch & 0xfb) != 0x2b)) {
    bVar1 = (bool)((byte)~(&base64_to_int)[ch] >> 7);
  }
  return bVar1;
}



/* WARNING: Unknown calling convention */

int base32_length_wrapper(int len)

{
  return ((len + 4) / 5) * 8;
}



/* WARNING: Unknown calling convention */

void base32_decode_ctx_init_wrapper(base_decode_context *ctx)

{
  (ctx->ctx).base64.i = 0;
  return;
}



/* WARNING: Unknown calling convention */

_Bool isubase32hex(uchar ch)

{
  return (byte)(ch - 0x30) < 10 || (byte)(ch + 0xbf) < 0x16;
}



/* WARNING: Unknown calling convention */

_Bool isubase16(uchar ch)

{
  return (_Bool)((byte)~base16_to_int[ch] >> 7);
}



/* WARNING: Unknown calling convention */

int base16_length(int len)

{
  return len * 2;
}



/* WARNING: Unknown calling convention */

void base16_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((inlen != 0) && (outlen != 0)) {
    pbVar1 = (byte *)(in + inlen);
    pcVar3 = out;
    do {
      bVar2 = *in;
      pcVar4 = pcVar3 + 2;
      in = (char *)((byte *)in + 1);
      *(ushort *)pcVar3 = CONCAT11("0123456789ABCDEF"[bVar2 & 0xf],"0123456789ABCDEF"[bVar2 >> 4]);
      if ((byte *)in == pbVar1) {
        return;
      }
      pcVar3 = pcVar4;
    } while (pcVar4 != out + outlen);
  }
  return;
}



/* WARNING: Unknown calling convention */

_Bool base16_decode_ctx(base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  
  bVar2 = *(byte *)&ctx->ctx;
  uVar3 = (uint)bVar2;
  pbVar4 = (byte *)in;
  pcVar7 = out;
  if (inlen == 0) {
    *outlen = 0;
    return (_Bool)(bVar2 >> 7);
  }
  do {
    pbVar5 = pbVar4 + 1;
    pcVar6 = pcVar7;
    if (*pbVar4 == 10) {
LAB_001001e1:
      bVar2 = (byte)uVar3;
      pcVar7 = pcVar6;
      uVar1 = uVar3;
    }
    else {
      bVar2 = base16_to_int[*pbVar4];
      if ((char)bVar2 < '\0') {
        *outlen = (long)pcVar7 - (long)out;
        return false;
      }
      uVar1 = (uint)bVar2;
      if (-1 < (char)uVar3) {
        pcVar6 = pcVar7 + 1;
        *pcVar7 = (char)(uVar3 << 4) + bVar2;
        uVar3 = 0xffffffff;
        goto LAB_001001e1;
      }
    }
    uVar3 = uVar1;
    pbVar4 = pbVar5;
    if (in + (inlen - (long)pbVar5) == (char *)0x0) {
      (ctx->ctx).base16.nibble = bVar2;
      *outlen = (long)pcVar7 - (long)out;
      return true;
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

int z85_length(int len)

{
  int iVar1;
  int iVar2;
  
  iVar1 = len * 5;
  iVar2 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2 >> 2;
}



/* WARNING: Unknown calling convention */

_Bool z85_decode_ctx(base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char cVar8;
  
  *outlen = 0;
  if (inlen == 0) {
    return (ctx->ctx).base64.i < 1;
  }
  pcVar5 = in + 1;
  pcVar6 = pcVar5 + inlen;
  while( true ) {
    cVar8 = pcVar5[-1];
    if (cVar8 != '\n') break;
    pcVar5 = pcVar5 + 1;
    if (pcVar6 == pcVar5) {
      ctx->i = (ctx->ctx).base64.i;
      return true;
    }
  }
  if (((byte)(cVar8 - 0x21U) < 0x5d) && (cVar8 = z85_decoding[cVar8 + -0x21], -1 < cVar8)) {
    while( true ) {
      iVar1 = (ctx->ctx).base64.i;
      iVar7 = iVar1 + 1;
      (ctx->ctx).base64.i = iVar7;
      *(char *)((long)&ctx->ctx + (long)iVar1 + 4) = cVar8;
      pcVar4 = pcVar5;
      if (iVar7 == 5) {
        uVar3 = (long)(int)((uint)(ctx->ctx).z85.octets[1] * 0x95eed +
                            (uint)(ctx->ctx).z85.octets[2] * 0x1c39 +
                            (uint)(ctx->ctx).z85.octets[3] * 0x55 + (uint)(ctx->ctx).z85.octets[4])
                + (ulong)(ctx->ctx).z85.octets[0] * 0x31c84b1;
        if (0xffffffff < uVar3) {
          return false;
        }
        *outlen = *outlen + 4;
        uVar2 = (uint)uVar3;
        *(uint *)out = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                       uVar2 << 0x18;
        (ctx->ctx).base64.i = 0;
        out = (char *)((long)out + 4);
      }
      do {
        pcVar5 = pcVar4 + 1;
        if (pcVar6 == pcVar5) {
          ctx->i = (ctx->ctx).base64.i;
          return true;
        }
        cVar8 = *pcVar4;
        pcVar4 = pcVar5;
      } while (cVar8 == '\n');
      if (0x5c < (byte)(cVar8 - 0x21U)) break;
      cVar8 = z85_decoding[cVar8 + -0x21];
      if (cVar8 < '\0') {
        return false;
      }
    }
    return false;
  }
  return false;
}



/* WARNING: Unknown calling convention */

_Bool isubase2(uchar ch)

{
  return (byte)(ch - 0x30) < 2;
}



/* WARNING: Unknown calling convention */

int base2_length(int len)

{
  return len * 8;
}



/* WARNING: Unknown calling convention */

void base2msbf_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  bool bVar6;
  
  if ((inlen != 0) && (outlen != 0)) {
    pcVar1 = in + inlen;
    pcVar5 = out + 8;
    do {
      pcVar2 = pcVar5 + -8;
      cVar4 = *in;
      do {
        pcVar3 = pcVar2 + 1;
        *pcVar2 = '0' - (cVar4 >> 7);
        pcVar2 = pcVar3;
        cVar4 = cVar4 * '\x02';
      } while (pcVar3 != pcVar5);
      in = in + 1;
      bVar6 = out + outlen != pcVar5;
      pcVar5 = pcVar5 + 8;
    } while (in != pcVar1 && bVar6);
  }
  return;
}



/* WARNING: Unknown calling convention */

void base2lsbf_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  char *pcVar5;
  bool bVar6;
  
  if ((inlen != 0) && (outlen != 0)) {
    pbVar1 = (byte *)(in + inlen);
    pcVar5 = out + 8;
    do {
      pcVar2 = pcVar5 + -8;
      bVar4 = *in;
      do {
        pcVar3 = pcVar2 + 1;
        *pcVar2 = (bVar4 & 1) + 0x30;
        pcVar2 = pcVar3;
        bVar4 = bVar4 >> 1;
      } while (pcVar3 != pcVar5);
      in = (char *)((byte *)in + 1);
      bVar6 = out + outlen != pcVar5;
      pcVar5 = pcVar5 + 8;
    } while ((byte *)in != pbVar1 && bVar6);
  }
  return;
}



/* WARNING: Unknown calling convention */

void base64url_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  char *pcVar1;
  
  base64_encode();
  if (outlen != 0) {
    pcVar1 = out + outlen;
    do {
      while (*out == '+') {
        *out = '-';
        out = out + 1;
        if (out == pcVar1) {
          return;
        }
      }
      if (*out == '/') {
        *out = '_';
      }
      out = out + 1;
    } while (out != pcVar1);
  }
  return;
}



/* WARNING: Unknown calling convention */

void z85_decode_ctx_init(base_decode_context *ctx)

{
  char *pcVar1;
  
  ctx->bufsize = 0x1068;
  pcVar1 = (char *)xcharalloc(0x1068);
  *(undefined8 *)ctx = 1;
  ctx->inbuf = pcVar1;
  return;
}



/* WARNING: Unknown calling convention */

void base2_decode_ctx_init(base_decode_context *ctx)

{
  char *pcVar1;
  
  ctx->bufsize = 0x1068;
  pcVar1 = (char *)xcharalloc(0x1068);
  (ctx->ctx).base16.nibble = '\0';
  ctx->inbuf = pcVar1;
  ctx->i = 0;
  return;
}



/* WARNING: Unknown calling convention */

void base16_decode_ctx_init(base_decode_context *ctx)

{
  char *pcVar1;
  
  ctx->bufsize = 0x1068;
  pcVar1 = (char *)xcharalloc(0x1068);
  (ctx->ctx).base16.nibble = -1;
  ctx->inbuf = pcVar1;
  ctx->i = 1;
  return;
}



/* WARNING: Unknown calling convention */

void base32hex_decode_ctx_init_wrapper(base_decode_context *ctx)

{
  char *pcVar1;
  
  (ctx->ctx).base64.i = 0;
  ctx->bufsize = 0x1068;
  pcVar1 = (char *)xcharalloc(0x1068);
  ctx->inbuf = pcVar1;
  return;
}



/* WARNING: Unknown calling convention */

void base64url_decode_ctx_init_wrapper(base_decode_context *ctx)

{
  char *pcVar1;
  
  (ctx->ctx).base64.i = 0;
  ctx->bufsize = 0x1068;
  pcVar1 = (char *)xcharalloc(0x1068);
  ctx->inbuf = pcVar1;
  return;
}



/* WARNING: Unknown calling convention */

_Bool isuz85(uchar ch)

{
  char *pcVar1;
  
  if (ch < 0x5b) {
    if (0x40 < ch) {
      return true;
    }
    if ((byte)(ch - 0x30) < 10) {
      return true;
    }
  }
  else if ((byte)(ch + 0x9f) < 0x1a) {
    return true;
  }
  pcVar1 = strchr(".-:+=^!/*?&<>()[]{}@%$#",(uint)ch);
  return pcVar1 != (char *)0x0;
}



/* WARNING: Unknown calling convention */

_Bool base32_decode_ctx_wrapper
                (base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  _Bool _Var1;
  
  _Var1 = (_Bool)base32_decode_ctx(&ctx->ctx);
  ctx->i = (ctx->ctx).base64.i;
  return _Var1;
}



/* WARNING: Unknown calling convention */

_Bool base64_decode_ctx_wrapper
                (base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  _Bool _Var1;
  
  _Var1 = (_Bool)base64_decode_ctx(&ctx->ctx);
  ctx->i = (ctx->ctx).base64.i;
  return _Var1;
}



/* WARNING: Unknown calling convention */

_Bool base64url_decode_ctx_wrapper
                (base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  char *__dest;
  byte *pbVar4;
  
  __dest = ctx->inbuf;
  if (ctx->bufsize < inlen) {
    __dest = (char *)xpalloc(__dest,&ctx->bufsize,inlen - ctx->bufsize,0xffffffffffffffff,1);
    ctx->inbuf = __dest;
  }
  memcpy(__dest,in,inlen);
  pbVar4 = (byte *)ctx->inbuf;
  if (inlen != 0) {
    pbVar1 = pbVar4 + inlen;
    do {
      while( true ) {
        bVar2 = *pbVar4;
        if ((bVar2 & 0xfb) == 0x2b) {
          *outlen = 0;
          return false;
        }
        if (bVar2 != 0x2d) break;
        *pbVar4 = 0x2b;
        pbVar4 = pbVar4 + 1;
        if (pbVar4 == pbVar1) goto LAB_001006ed;
      }
      if (bVar2 == 0x5f) {
        *pbVar4 = 0x2f;
      }
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 != pbVar1);
LAB_001006ed:
    pbVar4 = (byte *)ctx->inbuf;
  }
  uVar3 = base64_decode_ctx(&ctx->ctx,pbVar4,inlen,out,outlen);
  ctx->i = (ctx->ctx).base64.i;
  return (_Bool)uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void z85_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  uchar *puVar1;
  uchar uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  char *pcVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  uchar quad [4];
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (inlen != 0) {
    puVar1 = (uchar *)(in + inlen);
    lVar12 = 0;
    iVar5 = 0;
    do {
      while( true ) {
        uVar2 = *in;
        lVar11 = (long)iVar5;
        iVar5 = iVar5 + 1;
        in = (char *)((uchar *)in + 1);
        quad[lVar11] = uVar2;
        if (iVar5 != 4) break;
        uVar10 = (ulong)((uint)quad >> 0x18 | ((uint)quad & 0xff0000) >> 8 |
                         ((uint)quad & 0xff00) << 8 | (int)quad << 0x18);
        lVar11 = lVar12 + 4;
        do {
          if (lVar11 < outlen) {
            out[lVar11 - lVar12] =
                 "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.-:+=^!/*?&<>()[]{}@%$#"
                 [(int)uVar10 + (int)((long)uVar10 / 0x55) * -0x55];
          }
          bVar13 = lVar11 != lVar12;
          uVar10 = (long)uVar10 / 0x55;
          lVar11 = lVar11 + -1;
        } while (bVar13);
        out = out + 5;
        lVar12 = lVar12 + 5;
        iVar5 = 0;
        if ((uchar *)in == puVar1) goto LAB_00100848;
      }
    } while ((uchar *)in != puVar1);
LAB_00100848:
    if (iVar5 != 0) {
      uVar6 = dcgettext(0,"invalid input (length must be multiple of 4 characters)",5);
      error(1,0,uVar6);
      puVar7 = (uint *)__errno_location();
      uVar3 = *puVar7;
      fflush_unlocked(_stdout);
      fpurge(_stdout);
      clearerr_unlocked(_stdout);
      uVar6 = dcgettext(0,"write error",5);
      pcVar8 = (char *)(ulong)uVar3;
      error(1,pcVar8,uVar6);
      iVar5 = rpl_fclose();
      if (iVar5 != 0) {
        if ((*pcVar8 == '-') && (pcVar8[1] == '\0')) {
          pcVar8 = (char *)dcgettext(0,"closing standard input",5);
          piVar9 = __errno_location();
          error(1,*piVar9,pcVar8);
        }
        uVar6 = quotearg_n_style_colon(0,3,pcVar8);
        piVar9 = __errno_location();
        error(1,*piVar9,&_LC5,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
  }
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
    error(1,*piVar6,&_LC5,uVar4,in_R8,in_R9,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* WARNING: Unknown calling convention */

void finish_and_exit(FILE *in,char *infile)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = rpl_fclose();
  if (iVar1 != 0) {
    if ((*infile == '-') && (infile[1] == '\0')) {
      infile = (char *)dcgettext(0,"closing standard input",5);
      piVar2 = __errno_location();
      error(1,*piVar2,infile);
    }
    uVar3 = quotearg_n_style_colon(0,3,infile);
    piVar2 = __errno_location();
    error(1,*piVar2,&_LC5,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* WARNING: Unknown calling convention */

void base32hex_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  char *pcVar1;
  char *pcVar2;
  
  base32_encode();
  if (outlen != 0) {
    pcVar1 = out;
    do {
      if (0x28 < (byte)(*pcVar1 - 0x32U)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("0x32 <= *p && *p <= 0x5a","src/basenc.c",0x1de,"base32hex_encode");
      }
      pcVar2 = pcVar1 + 1;
      *pcVar1 = "QRSTUV89:;<=>?@0123456789ABCDEFGHIJKLMNOP"[*pcVar1 + -0x32];
      pcVar1 = pcVar2;
    } while (pcVar2 != out + outlen);
  }
  return;
}



/* WARNING: Unknown calling convention */

_Bool base2msbf_decode_ctx(base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  byte bVar5;
  
  *outlen = 0;
  if (inlen == 0) {
    return ctx->i == 0;
  }
  pcVar3 = in + 1;
  pcVar1 = pcVar3 + inlen;
  do {
    cVar2 = pcVar3[-1];
    if (cVar2 != '\n') {
      if (1 < (byte)(cVar2 - 0x30U)) {
        return false;
      }
      if (ctx->i == 0) {
        ctx->i = 7;
        (ctx->ctx).base16.nibble = (cVar2 == '1') << 7 | *(byte *)&ctx->ctx;
      }
      else {
        iVar4 = ctx->i + -1;
        ctx->i = iVar4;
        bVar5 = *(byte *)&ctx->ctx | (cVar2 == '1') << ((byte)iVar4 & 0x1f);
        (ctx->ctx).base16.nibble = bVar5;
        if (iVar4 == 0) {
          *out = bVar5;
          out = (char *)((byte *)out + 1);
          (ctx->ctx).base16.nibble = '\0';
          *outlen = *outlen + 1;
          ctx->i = 0;
        }
      }
    }
    pcVar3 = pcVar3 + 1;
  } while (pcVar1 != pcVar3);
  return true;
}



/* WARNING: Unknown calling convention */

_Bool base2lsbf_decode_ctx(base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  
  *outlen = 0;
  if (inlen == 0) {
    return ctx->i == 0;
  }
  pcVar5 = in + 1;
  pcVar4 = pcVar5 + inlen;
  do {
    cVar1 = pcVar5[-1];
    pbVar6 = (byte *)out;
    if (cVar1 != '\n') {
      if (1 < (byte)(cVar1 - 0x30U)) {
        return false;
      }
      iVar3 = ctx->i + 1;
      bVar2 = (cVar1 == '1') << ((byte)ctx->i & 0x1f) | (ctx->ctx).base16.nibble;
      (ctx->ctx).base16.nibble = bVar2;
      ctx->i = iVar3;
      if (iVar3 == 8) {
        (ctx->ctx).base16.nibble = '\0';
        pbVar6 = (byte *)out + 1;
        *outlen = *outlen + 1;
        *out = bVar2;
        ctx->i = 0;
      }
    }
    pcVar5 = pcVar5 + 1;
    out = (char *)pbVar6;
  } while (pcVar4 != pcVar5);
  return true;
}



/* WARNING: Unknown calling convention */

_Bool base32hex_decode_ctx_wrapper
                (base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  long lVar4;
  
  pcVar3 = ctx->inbuf;
  if (ctx->bufsize < inlen) {
    pcVar3 = (char *)xpalloc(pcVar3,&ctx->bufsize,inlen - ctx->bufsize,0xffffffffffffffff,1);
    ctx->inbuf = pcVar3;
  }
  if (inlen != 0) {
    lVar4 = 0;
    do {
      while( true ) {
        cVar1 = in[lVar4];
        if ((9 < (byte)(cVar1 - 0x30U)) && (0x15 < (byte)(cVar1 + 0xbfU))) break;
        pcVar3[lVar4] = "ABCDEFGHIJ:;<=>?@KLMNOPQRSTUVWXYZ234567"[cVar1 + -0x30];
        lVar4 = lVar4 + 1;
        if (inlen == lVar4) goto LAB_00100b96;
      }
      pcVar3[lVar4] = cVar1;
      lVar4 = lVar4 + 1;
    } while (inlen != lVar4);
LAB_00100b96:
    pcVar3 = ctx->inbuf;
  }
  uVar2 = base32_decode_ctx(&ctx->ctx,pcVar3,inlen,out,outlen);
  ctx->i = (ctx->ctx).base64.i;
  return (_Bool)uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00100c5a;
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
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[2].program = "sha224sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].program = "sha256sum";
  infomap[3].node = "sha2 utilities";
  infomap[4].program = "sha384sum";
  infomap[4].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  do {
    iVar2 = strcmp("basenc",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "basenc";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100fd5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","basenc");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100fd5:
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
LAB_00100c5a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  uchar *puVar1;
  bool bVar2;
  _func_void_char_ptr_idx_t_char_ptr_idx_t *p_Var3;
  _Bool _Var4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  FILE *in;
  char *pcVar9;
  long lVar10;
  code *pcVar11;
  undefined7 extraout_var;
  size_t sVar12;
  char *pcVar13;
  FILE *pFVar14;
  FILE *pFVar15;
  undefined8 uVar16;
  int *piVar17;
  long lVar18;
  char *pcVar19;
  code *pcVar20;
  code *pcVar21;
  ulong __n;
  FILE *__stream;
  code *pcVar22;
  base_decode_context *pbVar23;
  code *pcVar24;
  code *pcVar25;
  FILE *__n_00;
  FILE *pFVar26;
  FILE *pFVar27;
  FILE *pFVar28;
  long lVar29;
  char *pcVar30;
  base_decode_context *pbVar31;
  undefined1 auVar32 [16];
  char *local_c0;
  FILE *local_b8;
  FILE *local_b0;
  base_decode_context *local_a8;
  char *local_80;
  intmax_t w;
  base_decode_context ctx;
  char padbuf [8];
  
  bVar2 = false;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_b8 = (FILE *)((ulong)local_b8 & 0xffffffffffffff00);
  lVar29 = 0x4c;
  iVar7 = 0;
LAB_00101b24:
  do {
    iVar5 = getopt_long(argc,argv,&_LC50,long_options,0);
    if (iVar5 == -1) {
      switch(iVar7) {
      case 0x80:
        pcVar22 = (code *)&isubase64;
        pcVar20 = base64_encode;
        pcVar25 = base64_length_wrapper;
        pcVar24 = base64_required_padding;
        pcVar21 = base64_decode_ctx_init_wrapper;
        pcVar11 = base64_decode_ctx_wrapper;
        break;
      case 0x81:
        pcVar25 = base64_length_wrapper;
        pcVar24 = base64_required_padding;
        pcVar22 = isubase64url;
        pcVar20 = base64url_encode;
        pcVar21 = base64url_decode_ctx_init_wrapper;
        pcVar11 = base64url_decode_ctx_wrapper;
        break;
      case 0x82:
        pcVar22 = (code *)&isubase32;
        pcVar20 = base32_encode;
        pcVar25 = base32_length_wrapper;
        pcVar24 = base32_required_padding;
        pcVar21 = base32_decode_ctx_init_wrapper;
        pcVar11 = base32_decode_ctx_wrapper;
        break;
      case 0x83:
        pcVar25 = base32_length_wrapper;
        pcVar24 = base32_required_padding;
        pcVar22 = isubase32hex;
        pcVar20 = base32hex_encode;
        pcVar21 = base32hex_decode_ctx_init_wrapper;
        pcVar11 = base32hex_decode_ctx_wrapper;
        break;
      case 0x84:
        pcVar25 = base16_length;
        pcVar24 = no_required_padding;
        pcVar22 = isubase16;
        pcVar20 = base16_encode;
        pcVar21 = base16_decode_ctx_init;
        pcVar11 = base16_decode_ctx;
        break;
      case 0x85:
        pcVar25 = base2_length;
        pcVar24 = no_required_padding;
        pcVar22 = isubase2;
        pcVar20 = base2msbf_encode;
        pcVar21 = base2_decode_ctx_init;
        pcVar11 = base2msbf_decode_ctx;
        break;
      case 0x86:
        pcVar25 = base2_length;
        pcVar24 = no_required_padding;
        pcVar22 = isubase2;
        pcVar20 = base2lsbf_encode;
        pcVar21 = base2_decode_ctx_init;
        pcVar11 = base2lsbf_decode_ctx;
        break;
      case 0x87:
        pcVar25 = z85_length;
        pcVar24 = no_required_padding;
        pcVar22 = isuz85;
        pcVar20 = z85_encode;
        pcVar21 = z85_decode_ctx_init;
        pcVar11 = z85_decode_ctx;
        break;
      default:
        uVar8 = dcgettext(0,"missing encoding type",5);
        error(0,0,uVar8);
        goto LAB_00101c49;
      }
      lVar18 = (long)_optind;
      base_decode_ctx = pcVar11;
      base_decode_ctx_init = pcVar21;
      base_encode = pcVar20;
      isubase = pcVar22;
      required_padding = pcVar24;
      base_length = pcVar25;
      if (1 < argc - _optind) goto LAB_001023ea;
      if (_optind < argc) {
        local_80 = argv[lVar18];
        iVar7 = strcmp(local_80,"-");
        in = _stdin;
        if ((iVar7 != 0) && (in = (FILE *)rpl_fopen(local_80,&_LC53), in == (FILE *)0x0))
        goto LAB_001023b9;
      }
      else {
        local_80 = "-";
        in = _stdin;
      }
      fadvise(in,2);
      __stream = _stdout;
      if (!bVar2) {
        pFVar26 = (FILE *)0x0;
        pFVar14 = (FILE *)xmalloc(0x7800);
        iVar7 = (*base_length)(0x7800);
        local_c0 = (char *)xmalloc((long)iVar7);
        goto LAB_0010212c;
      }
      builtin_strncpy(padbuf,"========",8);
      iVar7 = (*base_length)(0x1068);
      local_c0 = (char *)(long)iVar7;
      pcVar9 = (char *)xmalloc(local_c0);
      local_b0 = (FILE *)xmalloc(0x1068);
      ctx.inbuf = (char *)0x0;
      (*base_decode_ctx_init)(&ctx);
      do {
        pcVar30 = (char *)0x0;
        do {
          iVar7 = (*base_length)(0x1068);
          pcVar13 = local_c0;
          if (local_c0 < pcVar30) {
            pcVar13 = pcVar30;
          }
          lVar29 = __fread_unlocked_chk
                             (pcVar9 + (long)pcVar30,(long)pcVar13 - (long)pcVar30,1,
                              (long)iVar7 - (long)pcVar30,in);
          if (((char)local_b8 != '\0') && (0 < lVar29)) {
            lVar18 = 0;
            do {
              while( true ) {
                pcVar13 = pcVar30 + lVar18;
                puVar1 = (uchar *)(pcVar9 + (long)pcVar13);
                _Var4 = (*isubase)(*puVar1);
                if ((!_Var4) && (*puVar1 != '=')) break;
                lVar18 = lVar18 + 1;
                lVar10 = 0;
                if (-1 < lVar18) {
                  lVar10 = lVar18;
                }
                if (lVar29 <= lVar10) goto LAB_00101dc3;
              }
              lVar29 = lVar29 + -1;
              pcVar19 = local_c0;
              if (local_c0 < pcVar13) {
                pcVar19 = pcVar13;
              }
              __memmove_chk(puVar1,pcVar9 + 1 + (long)pcVar13,lVar29 - lVar18,
                            (long)pcVar19 - (long)pcVar13);
              lVar10 = 0;
              if (-1 < lVar18) {
                lVar10 = lVar18;
              }
            } while (lVar10 < lVar29);
          }
LAB_00101dc3:
          pcVar30 = pcVar30 + lVar29;
          if ((in->_flags & 0x20U) != 0) goto LAB_00102350;
          iVar7 = (*base_length)(0x1068);
        } while (((long)pcVar30 < (long)iVar7) && ((in->_flags & 0x10) == 0));
        lVar29 = 0;
        while( true ) {
          w = 0x1068;
          _Var4 = (*base_decode_ctx)(&ctx,pcVar9,(idx_t)pcVar30,(char *)local_b0,&w);
          pFVar28 = (FILE *)(CONCAT71(extraout_var,_Var4) & 0xffffffff);
          sVar12 = fwrite_unlocked(local_b0,1,w,__stream);
          pFVar27 = __stream;
          local_a8 = &ctx;
          if (sVar12 < (ulong)w) goto LAB_001022b9;
          if ((char)pFVar28 == '\0') {
            uVar8 = dcgettext(0,"invalid input",5);
            error(1,0,uVar8);
            goto LAB_00102350;
          }
          if ((in->_flags & 0x10) == 0) break;
          if (((int)lVar29 != 0) || (ctx.i == 0)) goto LAB_00102212;
          iVar7 = (*required_padding)(ctx.i);
          pcVar13 = (char *)(long)iVar7;
          if (pcVar13 != (char *)0x0) {
            if ((pcVar30 == (char *)0x0) || ((pcVar9 + -1)[(long)pcVar30] != '=')) {
              if ((char *)0x8 < pcVar13) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("auto_padding <= sizeof (padbuf)","src/basenc.c",0x4a7,"do_decode");
              }
              local_c0 = (char *)0x8;
              pcVar9 = padbuf;
            }
            else {
              pcVar13 = (char *)0x0;
            }
          }
          lVar29 = 1;
          pcVar30 = pcVar13;
        }
      } while( true );
    }
    if (iVar5 != 0x69) {
      if (iVar5 < 0x6a) {
        if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        if (iVar5 != 100) {
          if (iVar5 == -0x83) {
            uVar8 = proper_name_lite("Assaf Gordon","Assaf Gordon");
            auVar32 = proper_name_lite("Simon Josefsson","Simon Josefsson");
            version_etc(_stdout,"basenc","GNU coreutils",_Version,auVar32._0_8_,uVar8,0,
                        auVar32._8_8_);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          goto LAB_00101c49;
        }
        bVar2 = true;
      }
      else if (iVar5 == 0x77) {
        uVar6 = xstrtoimax(_optarg,0,10,&w);
        if ((1 < uVar6) || (w < 0)) goto LAB_0010237c;
        lVar29 = w;
        if (uVar6 == 1) {
          lVar29 = 0;
        }
      }
      else {
        iVar7 = iVar5;
        if (7 < iVar5 - 0x80U) {
LAB_00101c49:
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
      }
      goto LAB_00101b24;
    }
    local_b8 = (FILE *)CONCAT71(local_b8._1_7_,1);
  } while( true );
LAB_001022b9:
  __stream = pFVar28;
  write_error();
  in = local_b8;
  pFVar14 = local_b0;
  pFVar26 = pFVar27;
  pbVar31 = local_a8;
LAB_001021e9:
  while ((uVar6 = in->_flags, (uVar6 & 0x30) == 0 && (pbVar31 == (base_decode_context *)0x7800))) {
LAB_0010212c:
    pbVar31 = (base_decode_context *)0x0;
    do {
      pbVar23 = (base_decode_context *)0x7800;
      if ((base_decode_context *)0x77ff < pbVar31) {
        pbVar23 = pbVar31;
      }
      lVar18 = __fread_unlocked_chk
                         ((code *)((long)&pbVar31->i + (long)&pFVar14->_flags),
                          (long)pbVar23 - (long)pbVar31,1,0x7800 - (long)pbVar31,in);
      p_Var3 = base_encode;
      pbVar31 = (base_decode_context *)((long)&pbVar31->i + lVar18);
      uVar6 = in->_flags;
    } while (((uVar6 & 0x30) == 0) && ((long)pbVar31 < 0x7800));
    if ((long)pbVar31 < 1) break;
    iVar5 = (int)pbVar31;
    local_b8 = (FILE *)CONCAT44(local_b8._4_4_,iVar5);
    local_b0 = (FILE *)base_encode;
    iVar7 = (*base_length)(iVar5);
    (*p_Var3)((char *)pFVar14,(idx_t)pbVar31,local_c0,(long)iVar7);
    iVar7 = (*base_length)(iVar5);
    __n_00 = (FILE *)(long)iVar7;
    if (lVar29 == 0) goto code_r0x001021bd;
    lVar18 = 0;
    if (0 < (long)__n_00) {
      do {
        __n = (long)__n_00 - lVar18;
        if (lVar29 - (long)pFVar26 < (long)__n_00 - lVar18) {
          __n = lVar29 - (long)pFVar26;
        }
        pFVar27 = pFVar26;
        pFVar28 = __stream;
        local_b8 = in;
        local_b0 = pFVar14;
        local_a8 = pbVar31;
        if (__n == 0) {
          pcVar9 = __stream->_IO_write_ptr;
          if (pcVar9 < __stream->_IO_write_end) {
            __stream->_IO_write_ptr = pcVar9 + 1;
            *pcVar9 = '\n';
          }
          else {
            iVar7 = __overflow(__stream,10);
            if (iVar7 == -1) goto LAB_001022b9;
          }
          pFVar26 = (FILE *)0x0;
        }
        else {
          sVar12 = fwrite_unlocked(local_c0 + lVar18,1,__n,_stdout);
          if (sVar12 < __n) goto LAB_001022b9;
          pFVar26 = (FILE *)((long)&pFVar26->_flags + __n);
          lVar18 = lVar18 + __n;
        }
      } while (lVar18 < (long)__n_00);
    }
  }
  if ((0 < (long)pFVar26) && (lVar29 != 0)) {
    pcVar9 = __stream->_IO_write_ptr;
    if (pcVar9 < __stream->_IO_write_end) {
      __stream->_IO_write_ptr = pcVar9 + 1;
      *pcVar9 = '\n';
      uVar6 = in->_flags;
    }
    else {
      iVar7 = __overflow(__stream,10);
      pFVar27 = pFVar14;
      pFVar28 = pFVar26;
      if (iVar7 == -1) goto LAB_001022b9;
      uVar6 = in->_flags;
    }
  }
  if ((uVar6 & 0x20) == 0) {
LAB_00102212:
                    /* WARNING: Subroutine does not return */
    finish_and_exit(in,local_80);
  }
LAB_00102350:
  uVar8 = dcgettext(0,"read error",5);
  piVar17 = __errno_location();
  error(1,*piVar17,uVar8);
  goto LAB_0010237c;
code_r0x001021bd:
  pFVar15 = (FILE *)fwrite_unlocked(local_c0,1,(size_t)__n_00,_stdout);
  pFVar27 = pFVar14;
  pFVar28 = pFVar26;
  local_b8 = __n_00;
  if (pFVar15 < __n_00) goto LAB_001022b9;
  goto LAB_001021e9;
LAB_0010237c:
  uVar8 = quote(_optarg);
  uVar16 = dcgettext(0,"invalid wrap size",5);
  error(1,0,"%s: %s",uVar16,uVar8);
LAB_001023b9:
  argv = (char **)quotearg_n_style_colon(0,3,local_80);
  piVar17 = __errno_location();
  lVar18 = error(1,*piVar17,&_LC5,argv);
LAB_001023ea:
  uVar8 = quote(argv[lVar18 + 1]);
  uVar16 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar16,uVar8);
                    /* WARNING: Subroutine does not return */
  usage(1);
}


