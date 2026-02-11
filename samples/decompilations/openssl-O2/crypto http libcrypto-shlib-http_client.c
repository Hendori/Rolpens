
undefined8 check_set_resp_len(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_2 + 0x98);
  if ((uVar1 == 0) || (param_3 <= uVar1)) {
    if ((*(ulong *)(param_2 + 0x90) == 0) || (*(ulong *)(param_2 + 0x90) == param_3)) {
      *(ulong *)(param_2 + 0x90) = param_3;
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x20b,"check_set_resp_len");
    ERR_set_error(0x3d,0x78,"%s length=%zu, Content-Length=%zu",param_1,param_3,
                  *(undefined8 *)(param_2 + 0x90));
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x1ff,"check_max_len");
    ERR_set_error(0x3d,0x75,"%s length=%zu, max=%zu",param_1,param_3,uVar1);
  }
  return 0;
}



undefined4 * OSSL_HTTP_REQ_CTX_new(long param_1,long param_2,int param_3)

{
  undefined4 *ptr;
  void *pvVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x66,"OSSL_HTTP_REQ_CTX_new");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else {
    ptr = (undefined4 *)CRYPTO_zalloc(200,"crypto/http/http_client.c",0x6a);
    if (ptr != (undefined4 *)0x0) {
      *ptr = 0x1000;
      if (param_3 < 1) {
        param_3 = 0x1000;
      }
      ptr[4] = param_3;
      pvVar1 = CRYPTO_malloc(param_3,"crypto/http/http_client.c",0x6e);
      *(long *)(ptr + 6) = param_1;
      *(void **)(ptr + 2) = pvVar1;
      *(long *)(ptr + 8) = param_2;
      *(undefined8 *)(ptr + 0x30) = 0x100;
      if (pvVar1 != (void *)0x0) {
        *(undefined8 *)(ptr + 0x26) = 0x19000;
        return ptr;
      }
      CRYPTO_free(ptr);
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}



void OSSL_HTTP_REQ_CTX_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((long)param_1 + 0x14) != 0) {
      BIO_free_all(*(BIO **)((long)param_1 + 0x18));
    }
    BIO_free(*(BIO **)((long)param_1 + 0x58));
    BIO_free(*(BIO **)((long)param_1 + 0x60));
    CRYPTO_free(*(void **)((long)param_1 + 8));
    CRYPTO_free(*(void **)((long)param_1 + 0x40));
    CRYPTO_free(*(void **)((long)param_1 + 0x48));
    CRYPTO_free(*(void **)((long)param_1 + 0x50));
    CRYPTO_free(*(void **)((long)param_1 + 0x70));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 OSSL_HTTP_REQ_CTX_get0_mem_bio(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x58);
  }
  ERR_new();
  ERR_set_debug("crypto/http/http_client.c",0x94,"OSSL_HTTP_REQ_CTX_get0_mem_bio");
  ERR_set_error(0x3d,0xc0102,0);
  return 0;
}



undefined8 OSSL_HTTP_REQ_CTX_get_resp_len(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x90);
  }
  ERR_new();
  ERR_set_debug("crypto/http/http_client.c",0x9d,"OSSL_HTTP_REQ_CTX_get_resp_len");
  ERR_set_error(0x3d,0xc0102,0);
  return 0;
}



void OSSL_HTTP_REQ_CTX_set_max_response_length(long param_1,long param_2)

{
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = 0x19000;
    }
    *(long *)(param_1 + 0x98) = param_2;
    return;
  }
  ERR_new();
  ERR_set_debug("crypto/http/http_client.c",0xa7,"OSSL_HTTP_REQ_CTX_set_max_response_length");
  ERR_set_error(0x3d,0xc0102,0);
  return;
}



undefined8
OSSL_HTTP_REQ_CTX_set_request_line
          (undefined4 *param_1,int param_2,long param_3,long param_4,char *param_5)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *pBVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0xb7,"OSSL_HTTP_REQ_CTX_set_request_line");
    ERR_set_error(0x3d,0xc0102,0);
    return 0;
  }
  BIO_free(*(BIO **)(param_1 + 0x16));
  type = BIO_s_mem();
  pBVar2 = BIO_new(type);
  *(BIO **)(param_1 + 0x16) = pBVar2;
  if (pBVar2 == (BIO *)0x0) {
    return 0;
  }
  puVar3 = &_LC4;
  param_1[0x1a] = (uint)(param_2 != 0);
  if (param_2 != 0) {
    puVar3 = &_LC3;
  }
  iVar1 = BIO_printf(pBVar2,"%s ",puVar3);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_3 != 0) {
    iVar1 = BIO_printf(*(BIO **)(param_1 + 0x16),"http://%s",param_3);
    if (iVar1 < 1) {
      return 0;
    }
    if ((param_4 != 0) && (iVar1 = BIO_printf(*(BIO **)(param_1 + 0x16),":%s",param_4), iVar1 < 1))
    {
      return 0;
    }
  }
  if (param_5 == (char *)0x0) {
    param_5 = "/";
  }
  else {
    iVar1 = strncmp(param_5,"http://",7);
    if (iVar1 == 0) {
      if (param_3 != 0) {
        ERR_new();
        ERR_set_debug("crypto/http/http_client.c",0xd2,"OSSL_HTTP_REQ_CTX_set_request_line");
        ERR_set_error(0x3d,0x80106,0);
        return 0;
      }
    }
    else {
      pBVar2 = *(BIO **)(param_1 + 0x16);
      if (*param_5 == '/') goto LAB_001004dd;
      iVar1 = BIO_printf(pBVar2,"/");
      if (iVar1 < 1) {
        return 0;
      }
    }
  }
  pBVar2 = *(BIO **)(param_1 + 0x16);
LAB_001004dd:
  iVar1 = BIO_printf(pBVar2,"%s HTTP/1.0\r\n",param_5);
  if (iVar1 < 1) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x24) = 0;
  *param_1 = 0x1001;
  return 1;
}



bool OSSL_HTTP_REQ_CTX_add1_header(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  BIO *b;
  
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0xe8,"OSSL_HTTP_REQ_CTX_add1_header");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else if (*(BIO **)(param_1 + 0x58) == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0xec,"OSSL_HTTP_REQ_CTX_add1_header");
    ERR_set_error(0x3d,0xc0101,0);
  }
  else {
    iVar1 = BIO_puts(*(BIO **)(param_1 + 0x58),param_2);
    if (0 < iVar1) {
      b = *(BIO **)(param_1 + 0x58);
      if (param_3 != (char *)0x0) {
        iVar1 = BIO_write(b,&_LC12,2);
        if (iVar1 != 2) {
          return false;
        }
        iVar1 = BIO_puts(*(BIO **)(param_1 + 0x58),param_3);
        if (iVar1 < 1) {
          return false;
        }
        b = *(BIO **)(param_1 + 0x58);
      }
      iVar1 = BIO_write(b,&_LC11,2);
      return iVar1 == 2;
    }
  }
  return false;
}



undefined8 set1_content(long param_1,long param_2,BIO *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  FILE *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (FILE *)0x0;
  if ((param_1 == 0) || ((param_3 == (BIO *)0x0 && (param_2 != 0)))) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x122,"set1_content");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else if ((*(int *)(param_1 + 0xa0) == 0) ||
          (iVar1 = OSSL_HTTP_REQ_CTX_add1_header(param_1,"Connection","keep-alive"), iVar1 != 0)) {
    BIO_free(*(BIO **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (param_3 != (BIO *)0x0) {
      if (*(int *)(param_1 + 0x68) == 0) {
        ERR_new();
        ERR_set_debug("crypto/http/http_client.c",0x12f,"set1_content");
        ERR_set_error(0x3d,0xc0101,0);
        goto LAB_00100728;
      }
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x6c) = 1;
      }
      else {
        iVar1 = OPENSSL_strncasecmp(param_2,"text/",5);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x6c) = 1;
        }
        iVar1 = BIO_printf(*(BIO **)(param_1 + 0x58),"Content-Type: %s\r\n",param_2);
        if (iVar1 < 1) goto LAB_00100728;
      }
      iVar1 = BIO_method_type(param_3);
      if (iVar1 == 0x402) {
        lVar2 = BIO_ctrl(param_3,0x6b,0,&local_28);
        if ((lVar2 == 1) && (iVar1 = fseek(local_28,0,2), iVar1 == 0)) {
          lVar2 = ftell(local_28);
          fseek(local_28,0,0);
          goto LAB_001007ef;
        }
        local_28 = (FILE *)0x0;
      }
      else {
        lVar2 = BIO_ctrl(param_3,3,0,(void *)0x0);
LAB_001007ef:
        if (((local_28 != (FILE *)0x0) || (0 < lVar2)) &&
           (iVar1 = BIO_printf(*(BIO **)(param_1 + 0x58),"Content-Length: %ld\r\n",lVar2), iVar1 < 0
           )) goto LAB_00100728;
      }
      iVar1 = BIO_up_ref(param_3);
      if (iVar1 == 0) goto LAB_00100728;
      *(BIO **)(param_1 + 0x60) = param_3;
    }
    uVar3 = 1;
    goto LAB_0010072a;
  }
LAB_00100728:
  uVar3 = 0;
LAB_0010072a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8
OSSL_HTTP_REQ_CTX_set_expected(int *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  long lVar2;
  time_t tVar3;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x100,"OSSL_HTTP_REQ_CTX_set_expected");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else {
    if ((param_5 == 0) || (*param_1 - 0x1000U < 2)) {
      CRYPTO_free(*(void **)(param_1 + 0x1c));
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      if (param_2 != (char *)0x0) {
        pcVar1 = CRYPTO_strdup(param_2,"crypto/http/http_client.c",0x10d);
        *(char **)(param_1 + 0x1c) = pcVar1;
        if (pcVar1 == (char *)0x0) {
          return 0;
        }
      }
      param_1[0x1e] = param_3;
      if (param_4 < 0) {
        lVar2 = *(long *)(param_1 + 0x2c);
      }
      else {
        lVar2 = 0;
        if (param_4 != 0) {
          tVar3 = time((time_t *)0x0);
          lVar2 = tVar3 + param_4;
        }
      }
      *(long *)(param_1 + 0x2a) = lVar2;
      param_1[0x28] = param_5;
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x106,"OSSL_HTTP_REQ_CTX_set_expected");
    ERR_set_error(0x3d,0xc0101,0);
  }
  return 0;
}



bool OSSL_HTTP_REQ_CTX_set1_req
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,BIO *param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_4 != (BIO *)0x0) {
    bVar2 = false;
    param_4 = (BIO *)ASN1_item_i2d_mem_bio(param_3,param_4);
    if (param_4 == (BIO *)0x0) goto LAB_00100ab9;
  }
  iVar1 = set1_content(param_1,param_2,param_4);
  bVar2 = iVar1 != 0;
LAB_00100ab9:
  BIO_free(param_4);
  return bVar2;
}



void OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xc0) = param_2;
    return;
  }
  ERR_new();
  ERR_set_debug("crypto/http/http_client.c",0x16f,"OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines");
  ERR_set_error(0x3d,0xc0102,0);
  return;
}



undefined4 OSSL_HTTP_REQ_CTX_nbio(uint *param_1)

{
  BIO *bp;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  size_t sVar9;
  void *pvVar10;
  char *pcVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  byte bVar16;
  byte *pbVar17;
  undefined8 uVar18;
  char *pcVar19;
  char *buf;
  ulong uVar20;
  long in_FS_OFFSET;
  ulong local_80;
  char *local_78;
  byte *local_58;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (char *)0x0;
  if (param_1 == (uint *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x231,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else {
    if (((*(long *)(param_1 + 0x16) != 0) && (*(long *)(param_1 + 6) != 0)) &&
       (*(long *)(param_1 + 8) != 0)) {
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      uVar5 = *param_1;
      uVar20 = 0;
      buf = *(char **)(param_1 + 2);
      local_80 = 0;
      bVar3 = false;
      bVar2 = false;
LAB_00100ba5:
      if ((uVar5 & 0x1000) == 0) goto LAB_00100e07;
      if (uVar5 == 0x1001) goto LAB_00101378;
      if (0x1001 < (int)uVar5) {
LAB_00100d70:
        if (0x1005 < (int)uVar5) {
          if (uVar5 == 0x1006) goto LAB_00100ddd;
          goto LAB_00100f80;
        }
        if (uVar5 == 0x1002) goto LAB_00100d86;
        if (*(long *)(param_1 + 0x22) < 1) {
          if (uVar5 != 0x1004) goto LAB_00100db7;
          BIO_ctrl(*(BIO **)(param_1 + 0x16),1,0,(void *)0x0);
          bp = *(BIO **)(param_1 + 0x18);
          *param_1 = 0x1005;
          do {
            if ((bp != (BIO *)0x0) && (lVar13 = BIO_ctrl(bp,2,0,(void *)0x0), (int)lVar13 == 0)) {
              iVar6 = BIO_read(*(BIO **)(param_1 + 0x18),*(void **)(param_1 + 2),param_1[4]);
              if (0 < (long)iVar6) {
                buf = *(char **)(param_1 + 2);
                *(long *)(param_1 + 0x22) = (long)iVar6;
                uVar5 = *param_1;
                *(char **)(param_1 + 0x20) = buf;
                goto LAB_00100ba5;
              }
              iVar6 = BIO_test_flags(*(BIO **)(param_1 + 0x18),8);
              if (iVar6 != 0) goto LAB_0010171c;
              ERR_new();
              uVar18 = 0x299;
LAB_001018bd:
              ERR_set_debug("crypto/http/http_client.c",uVar18,"OSSL_HTTP_REQ_CTX_nbio");
              ERR_set_error(0x3d,0x80,0);
              goto LAB_00100f80;
            }
            *param_1 = 0x1006;
LAB_00100ddd:
            lVar13 = BIO_ctrl(*(BIO **)(param_1 + 6),0xb,0,(void *)0x0);
            if ((int)lVar13 < 1) {
              iVar6 = BIO_test_flags(*(BIO **)(param_1 + 6),8);
              if (iVar6 == 0) goto LAB_00101532;
              goto LAB_0010171c;
            }
            *param_1 = 1;
            buf = *(char **)(param_1 + 2);
            uVar5 = 1;
LAB_00100e07:
            if ((param_1[0x1e] == 0) || (1 < uVar5 - 5)) {
              ERR_set_mark();
              iVar6 = BIO_gets(*(BIO **)(param_1 + 8),buf,param_1[4]);
              if (iVar6 == -2) {
                ERR_pop_to_mark();
                iVar6 = BIO_get_line(*(undefined8 *)(param_1 + 8),buf,param_1[4]);
              }
              else {
                ERR_clear_last_mark();
              }
            }
            else {
              iVar6 = BIO_read(*(BIO **)(param_1 + 8),buf,param_1[4]);
            }
            if (iVar6 < 1) {
              if (*param_1 != 9) {
                iVar6 = BIO_test_flags(*(BIO **)(param_1 + 8),8);
                if (iVar6 == 0) {
                  ERR_new();
                  uVar18 = 0x254;
                  goto LAB_001018bd;
                }
                goto LAB_0010171c;
              }
              check_set_resp_len("error response content",param_1,local_80);
              goto LAB_00100f80;
            }
            iVar7 = BIO_write(*(BIO **)(param_1 + 0x16),buf,iVar6);
            if (iVar7 != iVar6) goto LAB_00100f80;
            uVar5 = *param_1;
            if (uVar5 != 0x1001) goto code_r0x00100e71;
LAB_00101378:
            iVar6 = BIO_write(*(BIO **)(param_1 + 0x16),&_LC11,2);
            if (iVar6 != 2) goto LAB_00101532;
            *param_1 = 0x1002;
LAB_00100d86:
            lVar13 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,param_1 + 0x20);
            *param_1 = 0x1003;
            *(long *)(param_1 + 0x22) = lVar13;
            if (0 < lVar13) break;
LAB_00100db7:
            bp = *(BIO **)(param_1 + 0x18);
          } while( true );
        }
        iVar6 = BIO_write_ex(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x20));
        if (iVar6 == 0) {
          iVar6 = BIO_test_flags(*(BIO **)(param_1 + 6),8);
          if (iVar6 == 0) {
            *param_1 = 0x1000;
            uVar8 = 0;
          }
          else {
LAB_0010171c:
            uVar8 = 0xffffffff;
          }
          goto LAB_00100f82;
        }
        uVar5 = *param_1;
        if (uVar5 == 0x1003) {
          *param_1 = 0x1004;
          uVar5 = 0x1004;
        }
        buf = *(char **)(param_1 + 2);
        *(char **)(param_1 + 0x20) = local_48 + *(long *)(param_1 + 0x20);
        *(long *)(param_1 + 0x22) = *(long *)(param_1 + 0x22) - (long)local_48;
        goto LAB_00100ba5;
      }
      if ((int)uVar5 < 7) goto LAB_00100bc8;
      goto LAB_00100f80;
    }
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x235,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0xc0101,0);
  }
LAB_00100f80:
  uVar8 = 0;
LAB_00100f82:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00100e71:
  if ((int)uVar5 < 0x1002) goto code_r0x00100e77;
  goto LAB_00100d70;
code_r0x00100e77:
  if (uVar5 == 6) {
LAB_00100e80:
    uVar14 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,(void *)0x0);
    pbVar12 = local_58;
    bVar1 = bVar2;
    if ((-1 < (long)uVar14) && (*(ulong *)(param_1 + 0x24) <= uVar14)) {
      uVar5 = 7;
LAB_0010189f:
      *param_1 = uVar5;
      uVar8 = 1;
      goto LAB_00100f82;
    }
LAB_00100ea4:
    local_58 = pbVar12;
    buf = *(char **)(param_1 + 2);
    uVar5 = *param_1;
    bVar2 = bVar1;
    goto LAB_00100ba5;
  }
  if ((int)uVar5 < 7) {
    if (uVar5 == 5) {
LAB_00100cff:
      lVar13 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,&local_58);
      pbVar12 = local_58;
      bVar1 = bVar2;
      if (lVar13 < 2) goto LAB_00100ea4;
      pbVar12 = local_58 + 1;
      if (*local_58 != 0x30) {
        local_58 = pbVar12;
        ERR_new();
        ERR_set_debug("crypto/http/http_client.c",0x38e,"OSSL_HTTP_REQ_CTX_nbio");
        ERR_set_error(0x3d,0x6e,0);
        goto LAB_00100f80;
      }
      bVar16 = local_58[1];
      if ((char)bVar16 < '\0') {
        if (lVar13 < 6) goto LAB_00100ea4;
        if (3 < (byte)((char)(bVar16 & 0x7f) - 1U)) {
          local_58 = pbVar12;
          ERR_new();
          ERR_set_debug("crypto/http/http_client.c",0x39d,"OSSL_HTTP_REQ_CTX_nbio");
          ERR_set_error(0x3d,0x6d,0);
          goto LAB_00100f80;
        }
        local_80 = (ulong)((bVar16 & 0x7f) + 2);
        uVar14 = 0;
        pbVar17 = local_58 + local_80;
        pbVar12 = local_58 + 2;
        do {
          local_58 = pbVar12 + 1;
          uVar14 = uVar14 << 8 | (ulong)*pbVar12;
          pbVar12 = local_58;
        } while (local_58 != pbVar17);
        local_80 = local_80 + uVar14;
      }
      else {
        local_80 = (ulong)bVar16 + 2;
        local_58 = pbVar12;
      }
      iVar6 = check_set_resp_len("ASN.1 DER content",param_1,local_80);
      if (iVar6 == 0) goto LAB_00100f80;
      *param_1 = 6;
      goto LAB_00100e80;
    }
LAB_00100bc8:
    if ((int)uVar5 < 1) goto LAB_00100f80;
  }
  else if (uVar5 != 9) goto LAB_00100f80;
  bVar1 = bVar2;
LAB_00100bd8:
  sVar9 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,&local_58);
  if ((long)sVar9 < 1) goto LAB_00101525;
  pvVar10 = memchr(local_58,10,sVar9);
  uVar5 = param_1[4];
  if (pvVar10 == (void *)0x0) goto LAB_00101529;
  uVar5 = BIO_gets(*(BIO **)(param_1 + 0x16),buf,uVar5);
  if ((int)uVar5 < 1) {
    iVar6 = BIO_test_flags(*(BIO **)(param_1 + 0x16),8);
    pbVar12 = local_58;
    if (iVar6 != 0) goto LAB_00100ea4;
    goto LAB_00101532;
  }
  if (*param_1 == 9) goto LAB_00101098;
  uVar20 = uVar20 + 1;
  if ((*(ulong *)(param_1 + 0x30) < uVar20) && (*(ulong *)(param_1 + 0x30) != 0)) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x2dd,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0x82,0);
    goto LAB_00101532;
  }
  if (uVar5 == param_1[4]) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x2e4,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0x71,0);
    *param_1 = 0x1000;
    goto LAB_00100f80;
  }
  if (*param_1 == 1) {
    iVar6 = strncmp(buf,"HTTP/1.",7);
    local_78 = buf;
    if (iVar6 == 0) {
      cVar4 = buf[7];
      local_78 = buf + 7;
      bVar1 = '0' < cVar4;
      pcVar11 = local_78;
      while (cVar4 != '\0') {
        iVar6 = ossl_ctype_check((int)cVar4,8);
        if (iVar6 != 0) goto LAB_00101179;
        pcVar19 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
        cVar4 = *pcVar19;
      }
    }
    goto LAB_00101180;
  }
  pcVar11 = strchr(buf,0x3a);
  bVar2 = bVar1;
  if (pcVar11 != (char *)0x0) {
    *pcVar11 = '\0';
    do {
      pcVar11 = pcVar11 + 1;
      iVar6 = ossl_ctype_check((int)*pcVar11,8);
    } while (iVar6 != 0);
    local_50 = strchr(pcVar11,0xd);
    if (((local_50 == (char *)0x0) && (local_50 = strchr(pcVar11,10), local_50 == (char *)0x0)) ||
       (*local_50 = '\0', local_50 == (char *)0x0)) goto LAB_00100c78;
    if ((*param_1 == 4) && (iVar6 = OPENSSL_strcasecmp(buf,"Location"), iVar6 == 0)) {
      *(char **)(param_1 + 0x2e) = pcVar11;
      goto LAB_0010122e;
    }
    iVar6 = OPENSSL_strcasecmp(buf,"Content-Type");
    if (((iVar6 == 0) && (OPENSSL_strncasecmp(pcVar11,"text/",5), *param_1 == 2)) &&
       (*(long *)(param_1 + 0x1c) != 0)) {
      iVar6 = OPENSSL_strcasecmp(*(long *)(param_1 + 0x1c),pcVar11);
      if (iVar6 != 0) {
        pcVar19 = *(char **)(param_1 + 0x1c);
        pcVar15 = strchr(pcVar19,0x3b);
        if ((((pcVar15 != (char *)0x0) || (pcVar15 = strchr(pcVar11,0x3b), pcVar15 == (char *)0x0))
            || (sVar9 = strlen(pcVar19), (long)pcVar15 - (long)pcVar11 != sVar9)) ||
           (iVar6 = OPENSSL_strncasecmp(pcVar19,pcVar11), iVar6 != 0)) {
          ERR_new();
          ERR_set_debug("crypto/http/http_client.c",0x32a,"OSSL_HTTP_REQ_CTX_nbio");
          ERR_set_error(0x3d,0x76,"expected=%s, actual=%s",*(undefined8 *)(param_1 + 0x1c),pcVar11);
          goto LAB_00100f80;
        }
      }
      bVar3 = true;
    }
    iVar6 = OPENSSL_strcasecmp(buf,"Connection");
    if (iVar6 == 0) {
      iVar6 = OPENSSL_strcasecmp(pcVar11,"keep-alive");
      if (iVar6 == 0) {
        bVar2 = true;
      }
      else {
        iVar6 = OPENSSL_strcasecmp(pcVar11,"close");
        bVar2 = false;
        if (iVar6 != 0) {
          bVar2 = bVar1;
        }
      }
    }
    else {
      iVar6 = OPENSSL_strcasecmp(buf,"Content-Length");
      if (iVar6 == 0) {
        strtoul(pcVar11,&local_50,10);
        if ((local_50 == pcVar11) || (*local_50 != '\0')) {
          ERR_new();
          ERR_set_debug("crypto/http/http_client.c",0x33e,"OSSL_HTTP_REQ_CTX_nbio");
          ERR_set_error(0x3d,0x77,"input=%s",pcVar11);
        }
        else {
          iVar6 = check_set_resp_len("response content-length",param_1);
          if (iVar6 != 0) goto LAB_00100c78;
        }
        goto LAB_00100f80;
      }
    }
  }
LAB_00100c78:
  local_58 = *(byte **)(param_1 + 2);
  bVar16 = *local_58;
  if (bVar16 != 0) {
    while ((pbVar12 = local_58 + 1, bVar16 == 0xd || (bVar1 = bVar2, bVar16 == 10))) {
      bVar16 = *pbVar12;
      local_58 = pbVar12;
      if (bVar16 == 0) goto LAB_00100cae;
    }
    goto LAB_00100bd8;
  }
LAB_00100cae:
  uVar5 = param_1[0x28];
  if (((!bVar2) && (uVar5 != 0)) && (param_1[0x28] = 0, uVar5 == 2)) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x358,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0x7f,0);
    goto LAB_00100f80;
  }
  if (*param_1 != 3) {
    if ((*(long *)(param_1 + 0x1c) != 0) && (!bVar3)) {
      ERR_new();
      ERR_set_debug("crypto/http/http_client.c",0x36b,"OSSL_HTTP_REQ_CTX_nbio");
      ERR_set_error(0x3d,0x79,"expected=%s",*(undefined8 *)(param_1 + 0x1c));
      goto LAB_00100f80;
    }
    if (*param_1 == 4) {
      ERR_new();
      ERR_set_debug("crypto/http/http_client.c",0x371,"OSSL_HTTP_REQ_CTX_nbio");
      ERR_set_error(0x3d,0x6f,0);
      goto LAB_00100f80;
    }
    if (param_1[0x1e] != 0) {
      *param_1 = 5;
      goto LAB_00100cff;
    }
    uVar5 = 8;
    goto LAB_0010189f;
  }
  *param_1 = 9;
LAB_0010122e:
  BIO_ctrl(*(BIO **)(param_1 + 8),1,0,(void *)0x0);
  goto LAB_00100f80;
LAB_00101525:
  uVar5 = param_1[4];
LAB_00101529:
  pbVar12 = local_58;
  if ((long)(int)uVar5 <= (long)sVar9) {
LAB_00101532:
    *param_1 = 0x1000;
    goto LAB_00100f80;
  }
  goto LAB_00100ea4;
LAB_00101098:
  uVar14 = *(ulong *)(param_1 + 0x26);
  local_80 = local_80 + (long)(int)uVar5;
  if ((uVar14 != 0) && (uVar14 < local_80)) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x1ff,"check_max_len");
    ERR_set_error(0x3d,0x75,"%s length=%zu, max=%zu","error response content",local_80,uVar14);
    goto LAB_00100f80;
  }
  goto LAB_00100bd8;
LAB_00101179:
  if (*pcVar11 == '\0') goto LAB_00101180;
  iVar6 = ossl_ctype_check((int)*pcVar11,8);
  if (iVar6 == 0) {
    cVar4 = *pcVar11;
    pcVar19 = pcVar11;
    if (cVar4 != '\0') goto LAB_00101426;
    goto LAB_00101180;
  }
  pcVar11 = pcVar11 + 1;
  goto LAB_00101179;
  while( true ) {
    cVar4 = pcVar19[1];
    pcVar19 = pcVar19 + 1;
    if (cVar4 == '\0') break;
LAB_00101426:
    iVar6 = ossl_ctype_check((int)cVar4,8);
    if (iVar6 != 0) {
      if (*pcVar19 != '\0') {
        *pcVar19 = '\0';
        uVar14 = strtoul(pcVar11,&local_48,10);
        if (*local_48 == '\0') {
          cVar4 = pcVar19[1];
          pcVar19 = pcVar19 + 1;
          if (cVar4 != '\0') goto LAB_0010149e;
          goto LAB_001014ef;
        }
      }
      break;
    }
  }
LAB_00101180:
  pcVar11 = local_78;
  do {
    pcVar19 = pcVar11;
    if (*pcVar11 == '\0') break;
    iVar6 = ossl_ctype_check((int)*pcVar11,0x100);
    if (iVar6 == 0) {
      *pcVar11 = ' ';
    }
    pcVar11 = pcVar11 + 1;
    pcVar19 = local_78 + 0x3c;
  } while (local_78 + 0x3c != pcVar11);
  *pcVar19 = '\0';
  ERR_new();
  ERR_set_debug("crypto/http/http_client.c",0x1f8,"parse_http_line1");
  ERR_set_error(0x3d,0x7e,"content=%s",local_78);
  uVar5 = 3;
  goto LAB_001011ff;
  while( true ) {
    cVar4 = pcVar19[1];
    pcVar19 = pcVar19 + 1;
    if (cVar4 == '\0') break;
LAB_0010149e:
    iVar6 = ossl_ctype_check((int)cVar4,8);
    if (iVar6 == 0) {
      if (*pcVar19 != '\0') {
        sVar9 = strlen(pcVar19);
        local_48 = pcVar19 + (sVar9 - 1);
        while (iVar6 = ossl_ctype_check((int)*local_48,8), iVar6 != 0) {
          *local_48 = '\0';
          local_48 = local_48 + -1;
        }
      }
      break;
    }
  }
LAB_001014ef:
  iVar6 = (int)uVar14;
  if (iVar6 == 200) {
    *param_1 = 2;
    goto LAB_00100bd8;
  }
  if (iVar6 - 0x12dU < 2) {
    if (param_1[0x1a] == 0) {
      *param_1 = 4;
      goto LAB_00100bd8;
    }
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x2fd,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0x74,0);
  }
  else {
    uVar5 = 2;
    if (399 < iVar6) goto LAB_001011ff;
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x1ec,"parse_http_line1");
    ERR_set_error(0x3d,0x72,"code=%s",pcVar11);
    if (*pcVar19 != '\0') {
      ERR_add_error_data(2,", reason=",pcVar19);
    }
  }
  uVar5 = 3;
LAB_001011ff:
  *param_1 = uVar5;
  goto LAB_00100bd8;
}



ulong OSSL_HTTP_REQ_CTX_nbio_d2i(long param_1,undefined8 *param_2,ASN1_ITEM *param_3)

{
  ulong uVar1;
  long len;
  ASN1_VALUE *pAVar2;
  long in_FS_OFFSET;
  uchar *puStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = 0;
  uVar1 = OSSL_HTTP_REQ_CTX_nbio();
  if ((int)uVar1 == 1) {
    len = BIO_ctrl(*(BIO **)(param_1 + 0x58),3,0,&puStack_38);
    pAVar2 = ASN1_item_d2i((ASN1_VALUE **)0x0,&puStack_38,len,param_3);
    *param_2 = pAVar2;
    uVar1 = (ulong)(pAVar2 != (ASN1_VALUE *)0x0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 OSSL_HTTP_REQ_CTX_exchange(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x402,"OSSL_HTTP_REQ_CTX_exchange");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else {
    do {
      iVar1 = OSSL_HTTP_REQ_CTX_nbio(param_1);
      if (iVar1 != -1) {
        if (iVar1 != 0) {
          if (*param_1 != 8) {
            return *(undefined8 *)(param_1 + 0x16);
          }
          return *(undefined8 *)(param_1 + 8);
        }
        if (*(long *)(param_1 + 0x2e) != 0) {
          return 0;
        }
        if (0 < *(long *)(param_1 + 0x22)) {
          ERR_new();
          ERR_set_debug("crypto/http/http_client.c",0x413,"OSSL_HTTP_REQ_CTX_exchange");
          ERR_set_error(0x3d,0x66,0);
          return 0;
        }
        ERR_new();
        ERR_set_debug("crypto/http/http_client.c",0x415,"OSSL_HTTP_REQ_CTX_exchange");
        ERR_set_error(0x3d,0x67,0);
        return 0;
      }
      iVar1 = BIO_wait(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x2a),100);
    } while (0 < iVar1);
  }
  return 0;
}



bool OSSL_HTTP_is_alive(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(int *)(param_1 + 0xa0) != 0;
  }
  return bVar1;
}



long OSSL_HTTP_open(char *param_1,char *param_2,long param_3,long param_4,int param_5,BIO *param_6,
                   long param_7,code *param_8,undefined8 param_9,undefined4 param_10,int param_11)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  BIO *pBVar4;
  time_t tVar5;
  long lVar6;
  char *parg;
  undefined8 uVar7;
  char *host_port;
  long in_FS_OFFSET;
  BIO *local_78;
  char *local_58;
  char *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_8 == (code *)0x0) && (param_5 != 0)) {
    ERR_new();
    lVar2 = 0;
    ERR_set_debug("crypto/http/http_client.c",0x42e,"OSSL_HTTP_open");
    ERR_set_error(0x3d,0x6b,0);
    goto LAB_00101d51;
  }
  if (param_7 != 0) {
    if ((param_6 == (BIO *)0x0) || (param_8 != (code *)0x0)) {
      ERR_new();
      uVar7 = 0x432;
    }
    else {
      if (param_4 == 0 && param_3 == 0) {
        ERR_set_mark();
        lVar2 = OSSL_HTTP_REQ_CTX_new(param_6,param_7,param_10);
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 0x14) = 0;
          *(undefined8 *)(lVar2 + 0x28) = 0;
          *(int *)(lVar2 + 0x38) = param_5;
          *(undefined8 *)(lVar2 + 0x30) = param_9;
          goto LAB_00101ce8;
        }
        goto LAB_00101ee8;
      }
LAB_00102030:
      ERR_new();
      uVar7 = 0x439;
    }
    lVar2 = 0;
    ERR_set_debug("crypto/http/http_client.c",uVar7,"OSSL_HTTP_open");
    ERR_set_error(0x3d,0x80106,0);
    goto LAB_00101d51;
  }
  if (param_6 == (BIO *)0x0) {
    local_58 = (char *)0x0;
    local_50 = (char *)0x0;
    if (param_1 == (char *)0x0) {
      ERR_new();
      lVar2 = 0;
      ERR_set_debug("crypto/http/http_client.c",0x441,"OSSL_HTTP_open");
      ERR_set_error(0x3d,0xc0102,0);
      goto LAB_00101d51;
    }
    if ((param_2 != (char *)0x0) && (*param_2 == '\0')) {
      param_2 = (char *)0x0;
    }
    pcVar3 = (char *)OSSL_HTTP_adapt_proxy(param_3,param_4,param_1,param_5);
    if ((pcVar3 == (char *)0x0) ||
       (iVar1 = OSSL_HTTP_parse_url(pcVar3,0,0,&local_58,&local_50,0,0,0,0), iVar1 != 0)) {
      parg = local_50;
      host_port = local_58;
      if (local_58 == (char *)0x0) {
        parg = param_2;
        host_port = param_1;
      }
      if (parg == (char *)0x0) {
        local_48 = (void *)0x0;
        iVar1 = BIO_parse_hostserv(host_port,0,&local_48,0);
        if (iVar1 != 0) {
          if (local_48 == (void *)0x0) {
            parg = "80";
            if (param_5 != 0) {
              parg = "443";
            }
            CRYPTO_free((void *)0x0);
            local_78 = BIO_new_connect(host_port);
            if (local_78 != (BIO *)0x0) goto LAB_00101e5c;
          }
          else {
            CRYPTO_free(local_48);
            local_78 = BIO_new_connect(host_port);
            if (local_78 != (BIO *)0x0) goto LAB_00101e7b;
          }
          goto LAB_00102120;
        }
        local_78 = BIO_new_connect(host_port);
        CRYPTO_free(local_58);
        CRYPTO_free(local_50);
        if (local_78 == (BIO *)0x0) {
          lVar2 = 0;
          goto LAB_00101d51;
        }
      }
      else {
        local_78 = BIO_new_connect(host_port);
        if (local_78 == (BIO *)0x0) {
LAB_00102120:
          CRYPTO_free(local_58);
          lVar2 = 0;
          CRYPTO_free(local_50);
          goto LAB_00101d51;
        }
LAB_00101e5c:
        BIO_ctrl(local_78,100,1,parg);
LAB_00101e7b:
        CRYPTO_free(local_58);
        CRYPTO_free(local_50);
      }
      ERR_set_mark();
      iVar1 = BIO_do_connect_retry(local_78,param_11,0xffffffff);
      if (0 < iVar1) goto LAB_00101f2e;
      goto LAB_00101ed8;
    }
  }
  else {
    if (param_4 != 0 || param_3 != 0) goto LAB_00102030;
    ERR_set_mark();
    iVar1 = BIO_do_connect_retry(param_6,param_11,0xffffffff);
    if (iVar1 < 1) goto LAB_00101ee8;
    pcVar3 = (char *)0x0;
    local_78 = param_6;
LAB_00101f2e:
    pBVar4 = local_78;
    if ((param_8 == (code *)0x0) ||
       (pBVar4 = (BIO *)(*param_8)(local_78,param_9,1,param_5 != 0), pBVar4 != (BIO *)0x0)) {
      lVar2 = OSSL_HTTP_REQ_CTX_new(pBVar4,pBVar4,param_10);
      if (lVar2 != 0) {
        *(code **)(lVar2 + 0x28) = param_8;
        *(int *)(lVar2 + 0x38) = param_5;
        *(uint *)(lVar2 + 0x14) = (uint)(param_6 == (BIO *)0x0);
        *(undefined8 *)(lVar2 + 0x30) = param_9;
        if (pcVar3 == (char *)0x0) {
LAB_00101ce8:
          if (param_1 != (char *)0x0) {
            pcVar3 = CRYPTO_strdup(param_1,"crypto/http/http_client.c",0x19d);
            *(char **)(lVar2 + 0x48) = pcVar3;
            if (pcVar3 == (char *)0x0) goto LAB_00101fc2;
          }
          if (param_2 != (char *)0x0) {
            pcVar3 = CRYPTO_strdup(param_2,"crypto/http/http_client.c",0x1a0);
            *(char **)(lVar2 + 0x50) = pcVar3;
            if (pcVar3 == (char *)0x0) goto LAB_00101fc2;
          }
          if (param_11 < 1) {
            lVar6 = 0;
          }
          else {
            tVar5 = time((time_t *)0x0);
            lVar6 = param_11 + tVar5;
          }
          *(long *)(lVar2 + 0xb0) = lVar6;
          ERR_pop_to_mark();
          goto LAB_00101d51;
        }
        pcVar3 = CRYPTO_strdup(pcVar3,"crypto/http/http_client.c",0x19a);
        *(char **)(lVar2 + 0x40) = pcVar3;
        if (pcVar3 != (char *)0x0) goto LAB_00101ce8;
LAB_00101fc2:
        OSSL_HTTP_REQ_CTX_free(lVar2);
      }
    }
    else if (param_6 == (BIO *)0x0) {
LAB_00101ed8:
      BIO_free_all(local_78);
    }
LAB_00101ee8:
    ERR_clear_last_mark();
  }
  lVar2 = 0;
LAB_00101d51:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



bool OSSL_HTTP_set1_request
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
               undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9,
               undefined4 param_10)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x483,"OSSL_HTTP_set1_request");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else {
    if ((*(long *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x38) != 0)) {
      *(undefined8 *)(param_1 + 0x98) = param_8;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 == 0) {
        ERR_new();
        ERR_set_debug("crypto/http/http_client.c",0x488,"OSSL_HTTP_set1_request");
        ERR_set_error(0x3d,0x80106,0);
        return false;
      }
      *(undefined8 *)(param_1 + 0x98) = param_8;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
    }
    iVar2 = OSSL_HTTP_REQ_CTX_set_request_line(param_1,param_5 != 0,lVar4,uVar5,param_2);
    if (iVar2 != 0) {
      pcVar1 = *(char **)(param_1 + 0x48);
      bVar6 = false;
      if (pcVar1 != (char *)0x0) {
        bVar6 = *pcVar1 != '\0';
      }
      for (iVar2 = 0; iVar3 = OPENSSL_sk_num(param_3), iVar2 < iVar3; iVar2 = iVar2 + 1) {
        lVar4 = OPENSSL_sk_value(param_3,iVar2);
        if (bVar6) {
          iVar3 = OPENSSL_strcasecmp(&_LC34,*(undefined8 *)(lVar4 + 8));
          bVar6 = iVar3 != 0;
        }
        iVar3 = OSSL_HTTP_REQ_CTX_add1_header
                          (param_1,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
        if (iVar3 == 0) {
          return false;
        }
      }
      if (((!bVar6) || (iVar2 = OSSL_HTTP_REQ_CTX_add1_header(param_1,&_LC35,pcVar1), iVar2 != 0))
         && (iVar2 = OSSL_HTTP_REQ_CTX_set_expected(param_1,param_6,param_7,param_9,param_10),
            iVar2 != 0)) {
        iVar2 = set1_content(param_1,param_4,param_5);
        return iVar2 != 0;
      }
    }
  }
  return false;
}



long OSSL_HTTP_exchange(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  long in_FS_OFFSET;
  char acStack_e8 [200];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new();
    lVar3 = 0;
    ERR_set_debug("crypto/http/http_client.c",0x4a0,"OSSL_HTTP_exchange");
    ERR_set_error(0x3d,0xc0102,0);
    goto LAB_001024b9;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  lVar3 = OSSL_HTTP_REQ_CTX_exchange(param_1);
  if (lVar3 == 0) {
    if (*(char **)(param_1 + 0xb8) == (char *)0x0) {
      uVar5 = ERR_peek_error();
      if ((uVar5 & 0x80000000) == 0) {
        uVar8 = (uint)(uVar5 >> 0x17) & 0xff;
        if ((((char)(uVar5 >> 0x17) == '\x14') || (uVar8 == 0x3d)) ||
           ((uVar2 = (uint)uVar5 & 0x7fffff, uVar2 == 0x67 || uVar2 == 0x93 && (uVar8 == 0x20)))) {
          pcVar4 = *(char **)(param_1 + 0x48);
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(param_1 + 0x40) != 0) {
              lVar3 = 0;
              ERR_add_error_data(2," proxy=");
              goto LAB_001024b9;
            }
          }
          else {
            if (*pcVar4 != '\0') goto LAB_00102680;
            if (*(long *)(param_1 + 0x40) != 0) goto LAB_00102597;
          }
        }
        else if ((uVar8 == 0x3a) && (uVar2 == 0x93)) {
          pcVar4 = *(char **)(param_1 + 0x48);
          if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
LAB_00102680:
            puVar6 = *(undefined **)(param_1 + 0x50);
            puVar9 = &_LC36;
            if (puVar6 == (undefined *)0x0) {
              puVar6 = &_LC37;
              puVar9 = puVar6;
            }
            puVar7 = &_LC37;
            if (*(int *)(param_1 + 0x38) != 0) {
              puVar7 = &_LC38;
            }
            BIO_snprintf(acStack_e8,200,"server=http%s://%s%s%s",puVar7,pcVar4,puVar9,puVar6);
            ERR_add_error_data(1,acStack_e8);
          }
          if (*(long *)(param_1 + 0x40) != 0) {
LAB_00102597:
            ERR_add_error_data(2," proxy=");
          }
          if (uVar5 == 0) {
            pcVar4 = ", likely because it requires the use of TLS";
            if (*(int *)(param_1 + 0x38) != 0) {
              pcVar4 = " violating the protocol";
            }
            BIO_snprintf(acStack_e8,200," peer has disconnected%s",pcVar4);
            ERR_add_error_data(1,acStack_e8);
            lVar3 = 0;
            goto LAB_001024b9;
          }
        }
      }
    }
    else {
      if (param_2 == (undefined8 *)0x0) {
        ERR_new();
        lVar3 = 0;
        ERR_set_debug("crypto/http/http_client.c",0x4ab,"OSSL_HTTP_exchange");
        ERR_set_error(0x3d,0x74,0);
        goto LAB_001024b9;
      }
      pcVar4 = CRYPTO_strdup(*(char **)(param_1 + 0xb8),"crypto/http/http_client.c",0x4ae);
      *param_2 = pcVar4;
    }
  }
  else {
    iVar1 = BIO_up_ref(lVar3);
    if (iVar1 != 0) goto LAB_001024b9;
  }
  lVar3 = 0;
LAB_001024b9:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



undefined8 OSSL_HTTP_close(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
    lVar1 = (**(code **)(param_1 + 0x28))
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),0,param_2);
    uVar2 = 0;
    if (lVar1 == 0) goto LAB_00102769;
    *(long *)(param_1 + 0x18) = lVar1;
  }
  uVar2 = 1;
LAB_00102769:
  OSSL_HTTP_REQ_CTX_free(param_1);
  return uVar2;
}



BIO * OSSL_HTTP_get(char *param_1,undefined8 param_2,undefined8 param_3,BIO *param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                   undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                   uint param_13)

{
  char *__s1;
  int iVar1;
  time_t tVar2;
  char *__s1_00;
  long lVar3;
  BIO *a;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  BIO *pBVar7;
  long in_FS_OFFSET;
  ulong local_c8;
  undefined4 local_64;
  void *local_60;
  void *local_58;
  char *local_50;
  char *local_48;
  long local_40;
  
  lVar6 = 0;
  local_c8 = (ulong)param_13;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < (int)param_13) {
    tVar2 = time((time_t *)0x0);
    lVar6 = (int)param_13 + tVar2;
  }
  if (param_1 == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x4f7,"OSSL_HTTP_get");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else {
    __s1_00 = CRYPTO_strdup(param_1,"crypto/http/http_client.c",0x4fa);
    if (__s1_00 != (char *)0x0) {
      iVar4 = 0;
LAB_00102870:
      iVar1 = OSSL_HTTP_parse_url(__s1_00,&local_64,0,&local_60,&local_58,0,&local_50,0,0);
      if (iVar1 != 0) {
        lVar3 = OSSL_HTTP_open(local_60,local_58,param_2,param_3,local_64,param_4,param_5,param_6,
                               param_7,param_8,local_c8 & 0xffffffff);
        do {
          local_48 = (char *)0x0;
          if (lVar3 != 0) {
            iVar1 = OSSL_HTTP_set1_request
                              (lVar3,local_50,param_9,0,0,param_10,param_11,param_12,
                               0xffffffffffffffff,0);
            if (iVar1 == 0) {
              OSSL_HTTP_REQ_CTX_free(lVar3);
              CRYPTO_free(local_50);
              goto LAB_00102973;
            }
            a = (BIO *)OSSL_HTTP_exchange(lVar3,&local_48);
            CRYPTO_free(local_50);
            if (a == (BIO *)0x0) goto LAB_00102975;
            uVar5 = 1;
LAB_00102b37:
            CRYPTO_free(local_60);
            CRYPTO_free(local_58);
            iVar4 = OSSL_HTTP_close(lVar3,uVar5);
            pBVar7 = a;
            if (iVar4 == 0) {
              pBVar7 = (BIO *)0x0;
              BIO_free(a);
            }
            goto LAB_00102b71;
          }
          CRYPTO_free(local_50);
LAB_00102973:
          lVar3 = 0;
LAB_00102975:
          __s1 = local_48;
          if (local_48 == (char *)0x0) {
LAB_00102bf1:
            uVar5 = 0;
            a = (BIO *)0x0;
            goto LAB_00102b37;
          }
          iVar4 = iVar4 + 1;
          if (iVar4 == 0x32) {
            ERR_new();
            ERR_set_debug("crypto/http/http_client.c",0x4d8,"redirection_ok");
            ERR_set_error(0x3d,0x73,0);
LAB_00102bdc:
            CRYPTO_free(local_48);
            goto LAB_00102bf1;
          }
          if (((*local_48 != '/') && (iVar1 = strncmp(__s1_00,"https:",6), iVar1 == 0)) &&
             (iVar1 = strncmp(__s1,"https:",6), iVar1 != 0)) {
            ERR_new();
            ERR_set_debug("crypto/http/http_client.c",0x4df,"redirection_ok");
            ERR_set_error(0x3d,0x70,0);
            goto LAB_00102bdc;
          }
          tVar2 = time((time_t *)0x0);
          if (lVar6 != 0) {
            if (lVar6 < tVar2) {
              ERR_new();
              ERR_set_debug("crypto/http/http_client.c",0x219,"may_still_retry");
              ERR_set_error(0x3d,0x81,0);
              goto LAB_00102bdc;
            }
            local_c8 = 0x7fffffff;
            if (lVar6 - tVar2 < 0x80000000) {
              local_c8 = lVar6 - tVar2;
            }
          }
          BIO_ctrl(param_4,1,0,(void *)0x0);
          CRYPTO_free(__s1_00);
          __s1_00 = local_48;
          if (*local_48 != '/') goto LAB_00102ac0;
          local_50 = CRYPTO_strdup(local_48,"crypto/http/http_client.c",0x51f);
          if (local_50 == (char *)0x0) {
            CRYPTO_free(local_60);
            CRYPTO_free(local_58);
            OSSL_HTTP_close(lVar3,1);
            BIO_free((BIO *)0x0);
            CRYPTO_free(__s1_00);
            goto LAB_00102cb8;
          }
        } while( true );
      }
      pBVar7 = (BIO *)0x0;
LAB_00102b71:
      CRYPTO_free(__s1_00);
      goto LAB_00102b81;
    }
  }
LAB_00102cb8:
  pBVar7 = (BIO *)0x0;
LAB_00102b81:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar7;
LAB_00102ac0:
  CRYPTO_free(local_60);
  CRYPTO_free(local_58);
  OSSL_HTTP_close(lVar3,1);
  goto LAB_00102870;
}



BIO * OSSL_HTTP_transfer(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                        undefined8 param_9,undefined8 param_10,undefined8 param_11,
                        undefined4 param_12,undefined8 param_13,undefined8 param_14,
                        undefined8 param_15,undefined8 param_16,undefined4 param_17,
                        undefined8 param_18,undefined4 param_19,undefined4 param_20)

{
  int iVar1;
  BIO *pBVar2;
  long lVar3;
  undefined8 uVar4;
  BIO *a;
  
  if (param_1 == (long *)0x0) {
    lVar3 = OSSL_HTTP_open(param_2,param_3,param_6,param_7,param_5,param_8,param_9,param_10,param_11
                           ,param_12,param_19);
    param_19 = 0xffffffff;
    if (lVar3 == 0) {
      return (BIO *)0x0;
    }
  }
  else {
    lVar3 = *param_1;
    if (lVar3 == 0) {
      lVar3 = OSSL_HTTP_open(param_2,param_3,param_6,param_7,param_5,param_8,param_9,param_10,
                             param_11,param_12,param_19);
      param_19 = 0xffffffff;
      if (lVar3 == 0) {
        pBVar2 = (BIO *)0x0;
        goto LAB_00102d65;
      }
    }
  }
  iVar1 = OSSL_HTTP_set1_request
                    (lVar3,param_4,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                     param_20);
  if ((iVar1 == 0) || (pBVar2 = (BIO *)OSSL_HTTP_exchange(lVar3,0), pBVar2 == (BIO *)0x0)) {
    uVar4 = 0;
    a = (BIO *)0x0;
LAB_00102d4e:
    iVar1 = OSSL_HTTP_close(lVar3,uVar4);
    lVar3 = 0;
    pBVar2 = a;
    if (iVar1 == 0) {
      pBVar2 = (BIO *)0x0;
      BIO_free(a);
    }
  }
  else {
    iVar1 = OSSL_HTTP_is_alive(lVar3);
    if (iVar1 == 0) {
      uVar4 = 1;
      a = pBVar2;
      goto LAB_00102d4e;
    }
  }
  if (param_1 == (long *)0x0) {
    return pBVar2;
  }
LAB_00102d65:
  *param_1 = lVar3;
  return pBVar2;
}



undefined8
OSSL_HTTP_proxy_connect
          (BIO *param_1,long param_2,undefined8 param_3,char *param_4,char *param_5,int param_6,
          BIO *param_7,long param_8)

{
  undefined1 auVar1 [16];
  int iVar2;
  char *buf;
  BIO_METHOD *type;
  BIO *b;
  time_t tVar3;
  size_t sVar4;
  uchar *f;
  ulong uVar5;
  uchar *t;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  long local_50;
  char *local_48;
  
  buf = (char *)CRYPTO_malloc(0x2000,"crypto/http/http_client.c",0x599);
  type = BIO_f_buffer();
  b = BIO_new(type);
  local_50 = 0;
  if (0 < param_6) {
    tVar3 = time((time_t *)0x0);
    local_50 = tVar3 + param_6;
  }
  if (((param_1 == (BIO *)0x0) || (param_2 == 0)) || ((param_7 != (BIO *)0x0 && (param_8 == 0)))) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x5a3,"OSSL_HTTP_proxy_connect");
    ERR_set_error(0x3d,0xc0102,0);
LAB_00102efa:
    uVar9 = 0;
    if (b == (BIO *)0x0) goto LAB_00102f06;
LAB_00103015:
    uVar9 = 0;
  }
  else {
    if ((buf == (char *)0x0) || (b == (BIO *)0x0)) {
      BIO_printf(param_7,"%s: out of memory",param_8);
      goto LAB_00102efa;
    }
    BIO_push(b,param_1);
    BIO_printf(b,"CONNECT %s:%s HTTP/1.0\r\n",param_2);
    BIO_printf(b,"Proxy-Connection: Keep-Alive\r\n");
    if (param_4 != (char *)0x0) {
      sVar4 = strlen(param_4);
      uVar7 = sVar4 + 1;
      if (param_5 == (char *)0x0) {
        sVar4 = sVar4 + 2;
        f = (uchar *)CRYPTO_malloc((int)sVar4,"crypto/http/http_client.c",0x5be);
        if (f != (uchar *)0x0) {
          local_48 = "";
          goto LAB_00102fdf;
        }
      }
      else {
        sVar4 = strlen(param_5);
        uVar7 = uVar7 + sVar4;
        sVar4 = uVar7 + 1;
        f = (uchar *)CRYPTO_malloc((int)sVar4,"crypto/http/http_client.c",0x5be);
        local_48 = param_5;
        if (f != (uchar *)0x0) {
LAB_00102fdf:
          iVar2 = BIO_snprintf((char *)f,sVar4,"%s:%s",param_4,local_48);
          if (iVar2 == (int)uVar7) {
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar7;
            uVar5 = ((uVar7 / 3 + 1) -
                    (ulong)(uVar7 == (SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,8) &
                                     0xfffffffffffffffe) + uVar7 / 3)) * 4;
            t = (uchar *)CRYPTO_malloc((int)uVar5 + 1,"crypto/http/http_client.c",0x582);
            if (t != (uchar *)0x0) {
              iVar2 = EVP_EncodeBlock(t,f,iVar2);
              if ((-1 < iVar2) && ((ulong)(long)iVar2 <= uVar5)) {
                BIO_printf(b,"Proxy-Authorization: Basic %s\r\n",t);
                sVar4 = strlen((char *)t);
                CRYPTO_clear_free(t,sVar4,"crypto/http/http_client.c",0x5c7);
                CRYPTO_clear_free(f,uVar7,"crypto/http/http_client.c");
                goto LAB_001030f6;
              }
              CRYPTO_free(t);
            }
          }
          CRYPTO_clear_free(f,uVar7,"crypto/http/http_client.c");
        }
      }
      goto LAB_00103015;
    }
LAB_001030f6:
    BIO_printf(b,"\r\n");
    do {
      lVar6 = BIO_ctrl(b,0xb,0,(void *)0x0);
      if ((int)lVar6 != 0) break;
      iVar2 = BIO_test_flags(b,8);
    } while (iVar2 != 0);
    do {
      iVar2 = BIO_wait(b,local_50,100);
      if (iVar2 < 1) {
        BIO_printf(param_7,"%s: HTTP CONNECT %s\n",param_8);
        goto LAB_00103015;
      }
      iVar2 = BIO_gets(b,buf,0x2000);
      lVar6 = (long)iVar2;
    } while (iVar2 < 0xd);
    iVar2 = strncmp(buf,"HTTP/",5);
    if (iVar2 != 0) {
      ERR_new();
      ERR_set_debug("crypto/http/http_client.c",0x5f0,"OSSL_HTTP_proxy_connect");
      ERR_set_error(0x3d,0x7e,0);
      BIO_printf(param_7,"%s: HTTP CONNECT failed, non-HTTP response\n",param_8);
      goto LAB_00103015;
    }
    if ((buf[5] != '1') || (buf[6] != '.')) {
      ERR_new();
      ERR_set_debug("crypto/http/http_client.c",0x5f7,"OSSL_HTTP_proxy_connect");
      ERR_set_error(0x3d,0x6a,0);
      BIO_printf(param_7,"%s: HTTP CONNECT failed, bad HTTP version %.*s\n",param_8,3,buf + 5);
      goto LAB_00103015;
    }
    if ((buf[8] != ' ') || (buf[9] != '2')) {
      iVar2 = ossl_ctype_check((int)buf[8],8);
      pcVar10 = buf + 8;
      if (iVar2 != 0) {
        pcVar10 = buf + 9;
      }
      do {
        iVar2 = ossl_ctype_check((int)buf[lVar6 + -1],8);
        if (iVar2 == 0) {
          pcVar8 = buf + lVar6;
          break;
        }
        lVar6 = lVar6 + -1;
        pcVar8 = buf;
      } while (lVar6 != 0);
      *pcVar8 = '\0';
      ERR_new();
      ERR_set_debug("crypto/http/http_client.c",0x607,"OSSL_HTTP_proxy_connect");
      ERR_set_error(0x3d,100,"reason=%s",pcVar10);
      BIO_printf(param_7,"%s: HTTP CONNECT failed, reason=%s\n",param_8);
      goto LAB_00103015;
    }
    do {
      iVar2 = BIO_gets(b,buf,0x2000);
    } while (2 < iVar2);
    uVar9 = 1;
  }
  BIO_ctrl(b,0xb,0,(void *)0x0);
  BIO_pop(b);
  BIO_free(b);
LAB_00102f06:
  CRYPTO_free(buf);
  return uVar9;
}


