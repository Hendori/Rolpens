
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BUF_MEM * BUF_MEM_new(void)

{
  BUF_MEM *pBVar1;
  
  pBVar1 = (BUF_MEM *)CRYPTO_zalloc(0x20,"crypto/buffer/buffer.c",0x23);
  return pBVar1;
}



void BUF_MEM_new_ex(size_t param_1)

{
  BUF_MEM *pBVar1;
  
  pBVar1 = BUF_MEM_new();
  if (pBVar1 != (BUF_MEM *)0x0) {
    pBVar1[1].length = param_1;
  }
  return;
}



void BUF_MEM_free(BUF_MEM *a)

{
  char *pcVar1;
  
  if (a != (BUF_MEM *)0x0) {
    pcVar1 = a->data;
    if (pcVar1 != (char *)0x0) {
      if ((a[1].length & 1) == 0) {
        CRYPTO_clear_free(pcVar1,a->max,"crypto/buffer/buffer.c",0x31);
      }
      else {
        CRYPTO_secure_clear_free(pcVar1,a->max,"crypto/buffer/buffer.c",0x2f);
      }
    }
    CRYPTO_free(a);
    return;
  }
  return;
}



int BUF_MEM_grow(BUF_MEM *str,size_t len)

{
  size_t sVar1;
  ulong uVar2;
  char *__src;
  size_t __n;
  char *__dest;
  
  uVar2 = str->length;
  if (len <= uVar2) goto LAB_0010018b;
  if (len <= str->max) {
    if (str->data != (char *)0x0) {
      memset(str->data + uVar2,0,len - uVar2);
    }
    goto LAB_0010018b;
  }
  if (0x5ffffffc < len) {
    ERR_new();
    ERR_set_debug("crypto/buffer/buffer.c",0x58,"BUF_MEM_grow");
    ERR_set_error(7,0x80106,0);
    return 0;
  }
  sVar1 = ((len + 3) / 3) * 4;
  if ((str[1].length & 1) == 0) {
    __dest = (char *)CRYPTO_realloc(str->data,(int)sVar1,"crypto/buffer/buffer.c",0x5f);
LAB_001001e3:
    if (__dest == (char *)0x0) {
      return 0;
    }
  }
  else {
    __dest = (char *)CRYPTO_secure_malloc(sVar1,"crypto/buffer/buffer.c",0x3c);
    __src = str->data;
    if (__src == (char *)0x0) goto LAB_001001e3;
    if (__dest == (char *)0x0) {
      return 0;
    }
    __n = str->length;
    memcpy(__dest,__src,__n);
    CRYPTO_secure_clear_free(__src,__n,"crypto/buffer/buffer.c",0x40);
  }
  str->data = __dest;
  str->max = sVar1;
  memset(__dest + str->length,0,len - str->length);
LAB_0010018b:
  str->length = len;
  return (int)len;
}



int BUF_MEM_grow_clean(BUF_MEM *str,size_t len)

{
  size_t sVar1;
  ulong uVar2;
  char *__src;
  size_t __n;
  char *__dest;
  
  uVar2 = str->length;
  if (len <= uVar2) {
    if (str->data != (char *)0x0) {
      memset(str->data + len,0,uVar2 - len);
    }
    str->length = len;
    goto LAB_00100322;
  }
  if (len <= str->max) {
    memset(str->data + uVar2,0,len - uVar2);
    str->length = len;
    goto LAB_00100322;
  }
  if (0x5ffffffc < len) {
    ERR_new();
    ERR_set_debug("crypto/buffer/buffer.c",0x7d,"BUF_MEM_grow_clean");
    ERR_set_error(7,0x80106,0);
    return 0;
  }
  sVar1 = ((len + 3) / 3) * 4;
  if ((str[1].length & 1) == 0) {
    __dest = (char *)CRYPTO_clear_realloc(str->data,str->max,sVar1,"crypto/buffer/buffer.c",0x84);
LAB_00100354:
    if (__dest == (char *)0x0) {
      return 0;
    }
  }
  else {
    __dest = (char *)CRYPTO_secure_malloc(sVar1,"crypto/buffer/buffer.c",0x3c);
    __src = str->data;
    if (__src == (char *)0x0) goto LAB_00100354;
    if (__dest == (char *)0x0) {
      return 0;
    }
    __n = str->length;
    memcpy(__dest,__src,__n);
    CRYPTO_secure_clear_free(__src,__n,"crypto/buffer/buffer.c",0x40);
  }
  str->data = __dest;
  str->max = sVar1;
  memset(__dest + str->length,0,len - str->length);
  str->length = len;
LAB_00100322:
  return (int)len;
}



void BUF_reverse(uchar *out,uchar *in,size_t siz)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  puVar3 = out + (siz - 1);
  if (in == (uchar *)0x0) {
    if (siz >> 1 != 0) {
      puVar2 = out;
      do {
        uVar1 = *puVar3;
        puVar4 = puVar2 + 1;
        *puVar3 = *puVar2;
        *puVar2 = uVar1;
        puVar3 = puVar3 + -1;
        puVar2 = puVar4;
      } while (out + (siz >> 1) != puVar4);
    }
  }
  else if (siz != 0) {
    do {
      uVar1 = *in;
      puVar2 = puVar3 + -1;
      in = in + 1;
      *puVar3 = uVar1;
      puVar3 = puVar2;
    } while (out + -1 != puVar2);
    return;
  }
  return;
}


