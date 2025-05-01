
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



undefined4 OSSL_HTTP_REQ_CTX_set1_req(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  BIO *b;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  FILE *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    local_38 = (FILE *)0x0;
    b = (BIO *)0x0;
    if ((param_1 == 0) || (param_2 != 0)) {
LAB_0010099a:
      local_38 = (FILE *)0x0;
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("crypto/http/http_client.c",0x122,"set1_content");
      ERR_set_error(0x3d,0xc0102,0);
      goto LAB_00100958;
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      iVar1 = OSSL_HTTP_REQ_CTX_add1_header(param_1,"Connection","keep-alive");
      b = (BIO *)0x0;
      if (iVar1 == 0) goto LAB_001009ee;
    }
    b = (BIO *)0x0;
    uVar3 = 1;
    BIO_free(*(BIO **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    uVar3 = 0;
    b = (BIO *)ASN1_item_i2d_mem_bio(param_3,param_4);
    if (b == (BIO *)0x0) goto LAB_00100958;
    local_38 = (FILE *)0x0;
    if (param_1 == 0) goto LAB_0010099a;
    if (*(int *)(param_1 + 0xa0) != 0) {
      iVar1 = OSSL_HTTP_REQ_CTX_add1_header(param_1,"Connection","keep-alive");
      if (iVar1 == 0) goto LAB_001009ee;
    }
    BIO_free(*(BIO **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 0x68) == 0) {
      ERR_new();
      ERR_set_debug("crypto/http/http_client.c",0x12f,"set1_content");
      ERR_set_error(0x3d,0xc0101,0);
      uVar3 = 0;
      goto LAB_00100958;
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
      if (iVar1 < 1) goto LAB_001009ee;
    }
    iVar1 = BIO_method_type(b);
    if (iVar1 == 0x402) {
      lVar2 = BIO_ctrl(b,0x6b,0,&local_38);
      if (lVar2 == 1) {
        iVar1 = fseek(local_38,0,2);
        if (iVar1 == 0) {
          lVar2 = ftell(local_38);
          fseek(local_38,0,0);
          goto LAB_00100913;
        }
      }
      local_38 = (FILE *)0x0;
    }
    else {
      lVar2 = BIO_ctrl(b,3,0,(void *)0x0);
LAB_00100913:
      if ((local_38 != (FILE *)0x0) || (0 < lVar2)) {
        iVar1 = BIO_printf(*(BIO **)(param_1 + 0x58),"Content-Length: %ld\r\n",lVar2);
        if (iVar1 < 0) goto LAB_001009ee;
      }
    }
    iVar1 = BIO_up_ref(b);
    if (iVar1 != 0) {
      *(BIO **)(param_1 + 0x60) = b;
      uVar3 = 1;
      goto LAB_00100958;
    }
LAB_001009ee:
    uVar3 = 0;
  }
LAB_00100958:
  BIO_free(b);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  byte bVar1;
  BIO *bp;
  bool bVar2;
  ushort uVar3;
  uint3 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  size_t sVar12;
  void *pvVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  char *pcVar17;
  uint uVar18;
  undefined8 uVar19;
  char *pcVar20;
  char *pcVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  ulong local_80;
  char *local_78;
  char *local_58;
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
      uVar8 = *param_1;
      uVar22 = 0;
      pcVar21 = *(char **)(param_1 + 2);
      local_80 = 0;
      bVar6 = false;
      bVar5 = false;
LAB_00100bc5:
      if ((uVar8 & 0x1000) == 0) goto LAB_00100e27;
      if (uVar8 == 0x1001) goto LAB_00101370;
      if (0x1001 < (int)uVar8) {
LAB_00100d90:
        if (0x1005 < (int)uVar8) {
          if (uVar8 == 0x1006) goto LAB_00100dfd;
          goto LAB_00100fa0;
        }
        if (uVar8 == 0x1002) goto LAB_00100da6;
        if (*(long *)(param_1 + 0x22) < 1) {
          if (uVar8 != 0x1004) goto LAB_00100dd7;
          BIO_ctrl(*(BIO **)(param_1 + 0x16),1,0,(void *)0x0);
          bp = *(BIO **)(param_1 + 0x18);
          *param_1 = 0x1005;
          do {
            if ((bp != (BIO *)0x0) && (lVar15 = BIO_ctrl(bp,2,0,(void *)0x0), (int)lVar15 == 0)) {
              iVar9 = BIO_read(*(BIO **)(param_1 + 0x18),*(void **)(param_1 + 2),param_1[4]);
              if (0 < (long)iVar9) {
                pcVar21 = *(char **)(param_1 + 2);
                *(long *)(param_1 + 0x22) = (long)iVar9;
                uVar8 = *param_1;
                *(char **)(param_1 + 0x20) = pcVar21;
                goto LAB_00100bc5;
              }
              iVar9 = BIO_test_flags(*(BIO **)(param_1 + 0x18),8);
              if (iVar9 != 0) goto LAB_00101784;
              ERR_new();
              uVar19 = 0x299;
LAB_00101925:
              ERR_set_debug("crypto/http/http_client.c",uVar19,"OSSL_HTTP_REQ_CTX_nbio");
              ERR_set_error(0x3d,0x80,0);
              goto LAB_00100fa0;
            }
            *param_1 = 0x1006;
LAB_00100dfd:
            lVar15 = BIO_ctrl(*(BIO **)(param_1 + 6),0xb,0,(void *)0x0);
            if ((int)lVar15 < 1) {
              iVar9 = BIO_test_flags(*(BIO **)(param_1 + 6),8);
              if (iVar9 == 0) goto LAB_00101434;
              goto LAB_00101784;
            }
            *param_1 = 1;
            pcVar21 = *(char **)(param_1 + 2);
            uVar8 = 1;
LAB_00100e27:
            if ((param_1[0x1e] == 0) || (1 < uVar8 - 5)) {
              ERR_set_mark();
              iVar9 = BIO_gets(*(BIO **)(param_1 + 8),pcVar21,param_1[4]);
              if (iVar9 == -2) {
                ERR_pop_to_mark();
                iVar9 = BIO_get_line(*(undefined8 *)(param_1 + 8),pcVar21,param_1[4]);
              }
              else {
                ERR_clear_last_mark();
              }
            }
            else {
              iVar9 = BIO_read(*(BIO **)(param_1 + 8),pcVar21,param_1[4]);
            }
            if (iVar9 < 1) {
              if (*param_1 != 9) {
                iVar9 = BIO_test_flags(*(BIO **)(param_1 + 8),8);
                if (iVar9 == 0) {
                  ERR_new();
                  uVar19 = 0x254;
                  goto LAB_00101925;
                }
                goto LAB_00101784;
              }
              check_set_resp_len("error response content",param_1,local_80);
              goto LAB_00100fa0;
            }
            iVar10 = BIO_write(*(BIO **)(param_1 + 0x16),pcVar21,iVar9);
            if (iVar10 != iVar9) goto LAB_00100fa0;
            uVar8 = *param_1;
            if (uVar8 != 0x1001) goto code_r0x00100e94;
LAB_00101370:
            iVar9 = BIO_write(*(BIO **)(param_1 + 0x16),&_LC11,2);
            if (iVar9 != 2) goto LAB_00101434;
            *param_1 = 0x1002;
LAB_00100da6:
            lVar15 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,param_1 + 0x20);
            *param_1 = 0x1003;
            *(long *)(param_1 + 0x22) = lVar15;
            if (0 < lVar15) break;
LAB_00100dd7:
            bp = *(BIO **)(param_1 + 0x18);
          } while( true );
        }
        iVar9 = BIO_write_ex(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x20));
        if (iVar9 == 0) {
          iVar9 = BIO_test_flags(*(BIO **)(param_1 + 6),8);
          if (iVar9 == 0) {
            *param_1 = 0x1000;
            uVar11 = 0;
          }
          else {
LAB_00101784:
            uVar11 = 0xffffffff;
          }
          goto LAB_00100fa2;
        }
        uVar8 = *param_1;
        if (uVar8 == 0x1003) {
          *param_1 = 0x1004;
          uVar8 = 0x1004;
        }
        pcVar21 = *(char **)(param_1 + 2);
        *(char **)(param_1 + 0x20) = local_48 + *(long *)(param_1 + 0x20);
        *(long *)(param_1 + 0x22) = *(long *)(param_1 + 0x22) - (long)local_48;
        goto LAB_00100bc5;
      }
      if ((int)uVar8 < 7) goto LAB_00100be8;
      goto LAB_00100fa0;
    }
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x235,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0xc0101,0);
  }
LAB_00100fa0:
  uVar11 = 0;
LAB_00100fa2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00100e94:
  if ((int)uVar8 < 0x1002) goto code_r0x00100e9a;
  goto LAB_00100d90;
code_r0x00100e9a:
  if (uVar8 == 6) {
LAB_00100ea3:
    uVar16 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,(void *)0x0);
    pcVar21 = local_58;
    bVar2 = bVar5;
    if ((-1 < (long)uVar16) && (*(ulong *)(param_1 + 0x24) <= uVar16)) {
      uVar8 = 7;
LAB_00101907:
      *param_1 = uVar8;
      uVar11 = 1;
      goto LAB_00100fa2;
    }
LAB_00100ec7:
    local_58 = pcVar21;
    pcVar21 = *(char **)(param_1 + 2);
    uVar8 = *param_1;
    bVar5 = bVar2;
    goto LAB_00100bc5;
  }
  if ((int)uVar8 < 7) {
    if (uVar8 == 5) {
LAB_00100d1f:
      lVar15 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,&local_58);
      pcVar21 = local_58;
      bVar2 = bVar5;
      if (lVar15 < 2) goto LAB_00100ec7;
      pcVar21 = local_58 + 1;
      if (*local_58 != '0') {
        local_58 = pcVar21;
        ERR_new();
        ERR_set_debug("crypto/http/http_client.c",0x38e,"OSSL_HTTP_REQ_CTX_nbio");
        ERR_set_error(0x3d,0x6e,0);
        goto LAB_00100fa0;
      }
      bVar1 = local_58[1];
      if ((char)bVar1 < '\0') {
        if (lVar15 < 6) goto LAB_00100ec7;
        uVar8 = bVar1 & 0x7f;
        uVar18 = bVar1 & 0x7f;
        if (3 < (byte)((char)uVar18 - 1U)) {
          local_58 = pcVar21;
          ERR_new();
          ERR_set_debug("crypto/http/http_client.c",0x39d,"OSSL_HTTP_REQ_CTX_nbio");
          ERR_set_error(0x3d,0x6d,0);
          goto LAB_00100fa0;
        }
        local_80 = (ulong)(byte)local_58[2];
        pcVar21 = local_58 + 3;
        if (uVar8 != 1) {
          uVar3 = CONCAT11(local_58[2],local_58[3]);
          local_80 = (ulong)uVar3;
          pcVar21 = local_58 + 4;
          if (uVar8 != 2) {
            uVar4 = CONCAT21(uVar3,local_58[4]);
            local_80 = (ulong)uVar4;
            pcVar21 = local_58 + 5;
            if (uVar8 == 4) {
              local_80 = (ulong)CONCAT31(uVar4,local_58[5]);
              pcVar21 = local_58 + 6;
            }
          }
        }
        local_58 = pcVar21;
        local_80 = local_80 + (uVar18 + 2);
      }
      else {
        local_80 = (ulong)bVar1 + 2;
        local_58 = pcVar21;
      }
      iVar9 = check_set_resp_len("ASN.1 DER content",param_1,local_80);
      if (iVar9 == 0) goto LAB_00100fa0;
      *param_1 = 6;
      goto LAB_00100ea3;
    }
LAB_00100be8:
    if ((int)uVar8 < 1) goto LAB_00100fa0;
  }
  else if (uVar8 != 9) goto LAB_00100fa0;
  bVar2 = bVar5;
LAB_00100bf8:
  sVar12 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,&local_58);
  if ((long)sVar12 < 1) goto LAB_00101427;
  pvVar13 = memchr(local_58,10,sVar12);
  uVar8 = param_1[4];
  if (pvVar13 == (void *)0x0) goto LAB_0010142b;
  uVar8 = BIO_gets(*(BIO **)(param_1 + 0x16),pcVar21,uVar8);
  if ((int)uVar8 < 1) {
    iVar9 = BIO_test_flags(*(BIO **)(param_1 + 0x16),8);
    pcVar21 = local_58;
    if (iVar9 != 0) goto LAB_00100ec7;
    goto LAB_00101434;
  }
  if (*param_1 == 9) goto LAB_00100fc8;
  uVar22 = uVar22 + 1;
  if ((*(ulong *)(param_1 + 0x30) < uVar22) && (*(ulong *)(param_1 + 0x30) != 0)) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x2dd,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0x82,0);
    goto LAB_00101434;
  }
  if (uVar8 == param_1[4]) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x2e4,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0x71,0);
    *param_1 = 0x1000;
    goto LAB_00100fa0;
  }
  if (*param_1 == 1) {
    iVar9 = strncmp(pcVar21,"HTTP/1.",7);
    local_78 = pcVar21;
    if (iVar9 == 0) {
      cVar7 = pcVar21[7];
      local_78 = pcVar21 + 7;
      bVar2 = '0' < cVar7;
      pcVar14 = local_78;
      while (cVar7 != '\0') {
        iVar9 = ossl_ctype_check((int)cVar7,8);
        if (iVar9 != 0) goto LAB_00101199;
        pcVar20 = pcVar14 + 1;
        pcVar14 = pcVar14 + 1;
        cVar7 = *pcVar20;
      }
    }
    goto LAB_001011a0;
  }
  pcVar14 = strchr(pcVar21,0x3a);
  bVar5 = bVar2;
  if (pcVar14 != (char *)0x0) {
    *pcVar14 = '\0';
    do {
      pcVar14 = pcVar14 + 1;
      iVar9 = ossl_ctype_check((int)*pcVar14,8);
    } while (iVar9 != 0);
    local_50 = strchr(pcVar14,0xd);
    if (((local_50 == (char *)0x0) && (local_50 = strchr(pcVar14,10), local_50 == (char *)0x0)) ||
       (*local_50 = '\0', local_50 == (char *)0x0)) goto LAB_00100c98;
    if ((*param_1 == 4) && (iVar9 = OPENSSL_strcasecmp(pcVar21,"Location"), iVar9 == 0)) {
      *(char **)(param_1 + 0x2e) = pcVar14;
      goto LAB_0010125e;
    }
    iVar9 = OPENSSL_strcasecmp(pcVar21,"Content-Type");
    if (((iVar9 == 0) && (OPENSSL_strncasecmp(pcVar14,"text/",5), *param_1 == 2)) &&
       (*(long *)(param_1 + 0x1c) != 0)) {
      iVar9 = OPENSSL_strcasecmp(*(long *)(param_1 + 0x1c),pcVar14);
      if (iVar9 != 0) {
        pcVar20 = *(char **)(param_1 + 0x1c);
        pcVar17 = strchr(pcVar20,0x3b);
        if ((((pcVar17 != (char *)0x0) || (pcVar17 = strchr(pcVar14,0x3b), pcVar17 == (char *)0x0))
            || (sVar12 = strlen(pcVar20), (long)pcVar17 - (long)pcVar14 != sVar12)) ||
           (iVar9 = OPENSSL_strncasecmp(pcVar20,pcVar14), iVar9 != 0)) {
          ERR_new();
          ERR_set_debug("crypto/http/http_client.c",0x32a,"OSSL_HTTP_REQ_CTX_nbio");
          ERR_set_error(0x3d,0x76,"expected=%s, actual=%s",*(undefined8 *)(param_1 + 0x1c),pcVar14);
          goto LAB_00100fa0;
        }
      }
      bVar6 = true;
    }
    iVar9 = OPENSSL_strcasecmp(pcVar21,"Connection");
    if (iVar9 == 0) {
      iVar9 = OPENSSL_strcasecmp(pcVar14,"keep-alive");
      if (iVar9 == 0) {
        bVar5 = true;
      }
      else {
        iVar9 = OPENSSL_strcasecmp(pcVar14,"close");
        bVar5 = false;
        if (iVar9 != 0) {
          bVar5 = bVar2;
        }
      }
    }
    else {
      iVar9 = OPENSSL_strcasecmp(pcVar21,"Content-Length");
      if (iVar9 == 0) {
        strtoul(pcVar14,&local_50,10);
        if ((local_50 == pcVar14) || (*local_50 != '\0')) {
          ERR_new();
          ERR_set_debug("crypto/http/http_client.c",0x33e,"OSSL_HTTP_REQ_CTX_nbio");
          ERR_set_error(0x3d,0x77,"input=%s",pcVar14);
        }
        else {
          iVar9 = check_set_resp_len("response content-length",param_1);
          if (iVar9 != 0) goto LAB_00100c98;
        }
        goto LAB_00100fa0;
      }
    }
  }
LAB_00100c98:
  local_58 = *(char **)(param_1 + 2);
  cVar7 = *local_58;
  if (cVar7 != '\0') {
    while ((pcVar14 = local_58 + 1, cVar7 == '\r' || (bVar2 = bVar5, cVar7 == '\n'))) {
      cVar7 = *pcVar14;
      local_58 = pcVar14;
      if (cVar7 == '\0') goto LAB_00100cce;
    }
    goto LAB_00100bf8;
  }
LAB_00100cce:
  uVar8 = param_1[0x28];
  if (((!bVar5) && (uVar8 != 0)) && (param_1[0x28] = 0, uVar8 == 2)) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x358,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0x7f,0);
    goto LAB_00100fa0;
  }
  if (*param_1 != 3) {
    if ((*(long *)(param_1 + 0x1c) != 0) && (!bVar6)) {
      ERR_new();
      ERR_set_debug("crypto/http/http_client.c",0x36b,"OSSL_HTTP_REQ_CTX_nbio");
      ERR_set_error(0x3d,0x79,"expected=%s",*(undefined8 *)(param_1 + 0x1c));
      goto LAB_00100fa0;
    }
    if (*param_1 == 4) {
      ERR_new();
      ERR_set_debug("crypto/http/http_client.c",0x371,"OSSL_HTTP_REQ_CTX_nbio");
      ERR_set_error(0x3d,0x6f,0);
      goto LAB_00100fa0;
    }
    if (param_1[0x1e] != 0) {
      *param_1 = 5;
      goto LAB_00100d1f;
    }
    uVar8 = 8;
    goto LAB_00101907;
  }
  *param_1 = 9;
LAB_0010125e:
  BIO_ctrl(*(BIO **)(param_1 + 8),1,0,(void *)0x0);
  goto LAB_00100fa0;
LAB_00101427:
  uVar8 = param_1[4];
LAB_0010142b:
  pcVar21 = local_58;
  if ((long)(int)uVar8 <= (long)sVar12) {
LAB_00101434:
    *param_1 = 0x1000;
    goto LAB_00100fa0;
  }
  goto LAB_00100ec7;
LAB_00100fc8:
  uVar16 = *(ulong *)(param_1 + 0x26);
  local_80 = local_80 + (long)(int)uVar8;
  if ((uVar16 != 0) && (uVar16 < local_80)) {
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x1ff,"check_max_len");
    ERR_set_error(0x3d,0x75,"%s length=%zu, max=%zu","error response content",local_80,uVar16);
    goto LAB_00100fa0;
  }
  goto LAB_00100bf8;
LAB_00101199:
  if (*pcVar14 == '\0') goto LAB_001011a0;
  iVar9 = ossl_ctype_check((int)*pcVar14,8);
  if (iVar9 == 0) {
    cVar7 = *pcVar14;
    pcVar20 = pcVar14;
    if (cVar7 != '\0') goto LAB_00101466;
    goto LAB_001011a0;
  }
  pcVar14 = pcVar14 + 1;
  goto LAB_00101199;
  while( true ) {
    cVar7 = pcVar20[1];
    pcVar20 = pcVar20 + 1;
    if (cVar7 == '\0') break;
LAB_00101466:
    iVar9 = ossl_ctype_check((int)cVar7,8);
    if (iVar9 != 0) {
      if (*pcVar20 != '\0') {
        *pcVar20 = '\0';
        uVar16 = strtoul(pcVar14,&local_48,10);
        if (*local_48 == '\0') {
          cVar7 = pcVar20[1];
          pcVar20 = pcVar20 + 1;
          if (cVar7 != '\0') goto LAB_001014de;
          goto LAB_0010152f;
        }
      }
      break;
    }
  }
LAB_001011a0:
  pcVar14 = local_78;
  do {
    pcVar20 = pcVar14;
    if (*pcVar14 == '\0') break;
    iVar9 = ossl_ctype_check((int)*pcVar14,0x100);
    if (iVar9 == 0) {
      *pcVar14 = ' ';
    }
    pcVar14 = pcVar14 + 1;
    pcVar20 = local_78 + 0x3c;
  } while (local_78 + 0x3c != pcVar14);
  *pcVar20 = '\0';
  ERR_new();
  ERR_set_debug("crypto/http/http_client.c",0x1f8,"parse_http_line1");
  ERR_set_error(0x3d,0x7e,"content=%s",local_78);
  uVar8 = 3;
  goto LAB_0010121f;
  while( true ) {
    cVar7 = pcVar20[1];
    pcVar20 = pcVar20 + 1;
    if (cVar7 == '\0') break;
LAB_001014de:
    iVar9 = ossl_ctype_check((int)cVar7,8);
    if (iVar9 == 0) {
      if (*pcVar20 != '\0') {
        sVar12 = strlen(pcVar20);
        local_48 = pcVar20 + (sVar12 - 1);
        while (iVar9 = ossl_ctype_check((int)*local_48,8), iVar9 != 0) {
          *local_48 = '\0';
          local_48 = local_48 + -1;
        }
      }
      break;
    }
  }
LAB_0010152f:
  iVar9 = (int)uVar16;
  if (iVar9 == 200) {
    *param_1 = 2;
    goto LAB_00100bf8;
  }
  if (iVar9 - 0x12dU < 2) {
    if (param_1[0x1a] == 0) {
      *param_1 = 4;
      goto LAB_00100bf8;
    }
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x2fd,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0x74,0);
  }
  else {
    uVar8 = 2;
    if (399 < iVar9) goto LAB_0010121f;
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x1ec,"parse_http_line1");
    ERR_set_error(0x3d,0x72,"code=%s",pcVar14);
    if (*pcVar20 != '\0') {
      ERR_add_error_data(2,", reason=",pcVar20);
    }
  }
  uVar8 = 3;
LAB_0010121f:
  *param_1 = uVar8;
  goto LAB_00100bf8;
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
    goto LAB_00101db1;
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
          goto LAB_00101d48;
        }
        goto LAB_00101f48;
      }
LAB_00102090:
      ERR_new();
      uVar7 = 0x439;
    }
    lVar2 = 0;
    ERR_set_debug("crypto/http/http_client.c",uVar7,"OSSL_HTTP_open");
    ERR_set_error(0x3d,0x80106,0);
    goto LAB_00101db1;
  }
  if (param_6 == (BIO *)0x0) {
    local_58 = (char *)0x0;
    local_50 = (char *)0x0;
    if (param_1 == (char *)0x0) {
      ERR_new();
      lVar2 = 0;
      ERR_set_debug("crypto/http/http_client.c",0x441,"OSSL_HTTP_open");
      ERR_set_error(0x3d,0xc0102,0);
      goto LAB_00101db1;
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
            if (local_78 != (BIO *)0x0) goto LAB_00101ebc;
          }
          else {
            CRYPTO_free(local_48);
            local_78 = BIO_new_connect(host_port);
            if (local_78 != (BIO *)0x0) goto LAB_00101edb;
          }
          goto LAB_00102180;
        }
        local_78 = BIO_new_connect(host_port);
        CRYPTO_free(local_58);
        CRYPTO_free(local_50);
        if (local_78 == (BIO *)0x0) {
          lVar2 = 0;
          goto LAB_00101db1;
        }
      }
      else {
        local_78 = BIO_new_connect(host_port);
        if (local_78 == (BIO *)0x0) {
LAB_00102180:
          CRYPTO_free(local_58);
          lVar2 = 0;
          CRYPTO_free(local_50);
          goto LAB_00101db1;
        }
LAB_00101ebc:
        BIO_ctrl(local_78,100,1,parg);
LAB_00101edb:
        CRYPTO_free(local_58);
        CRYPTO_free(local_50);
      }
      ERR_set_mark();
      iVar1 = BIO_do_connect_retry(local_78,param_11,0xffffffff);
      if (0 < iVar1) goto LAB_00101f8e;
      goto LAB_00101f38;
    }
  }
  else {
    if (param_4 != 0 || param_3 != 0) goto LAB_00102090;
    ERR_set_mark();
    iVar1 = BIO_do_connect_retry(param_6,param_11,0xffffffff);
    if (iVar1 < 1) goto LAB_00101f48;
    pcVar3 = (char *)0x0;
    local_78 = param_6;
LAB_00101f8e:
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
LAB_00101d48:
          if (param_1 != (char *)0x0) {
            pcVar3 = CRYPTO_strdup(param_1,"crypto/http/http_client.c",0x19d);
            *(char **)(lVar2 + 0x48) = pcVar3;
            if (pcVar3 == (char *)0x0) goto LAB_00102022;
          }
          if (param_2 != (char *)0x0) {
            pcVar3 = CRYPTO_strdup(param_2,"crypto/http/http_client.c",0x1a0);
            *(char **)(lVar2 + 0x50) = pcVar3;
            if (pcVar3 == (char *)0x0) goto LAB_00102022;
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
          goto LAB_00101db1;
        }
        pcVar3 = CRYPTO_strdup(pcVar3,"crypto/http/http_client.c",0x19a);
        *(char **)(lVar2 + 0x40) = pcVar3;
        if (pcVar3 != (char *)0x0) goto LAB_00101d48;
LAB_00102022:
        OSSL_HTTP_REQ_CTX_free(lVar2);
      }
    }
    else if (param_6 == (BIO *)0x0) {
LAB_00101f38:
      BIO_free_all(local_78);
    }
LAB_00101f48:
    ERR_clear_last_mark();
  }
  lVar2 = 0;
LAB_00101db1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



undefined8
OSSL_HTTP_set1_request
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,BIO *param_5,
          undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9,
          undefined4 param_10)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  FILE *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new();
    pcVar4 = "OSSL_HTTP_set1_request";
    uVar5 = 0x483;
LAB_00102489:
    ERR_set_debug("crypto/http/http_client.c",uVar5,pcVar4);
    ERR_set_error(0x3d,0xc0102,0);
  }
  else if ((*(long *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x38) != 0)) {
    *(undefined8 *)(param_1 + 0x98) = param_8;
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    lVar3 = 0;
LAB_0010233d:
    iVar1 = OSSL_HTTP_REQ_CTX_set_request_line(param_1,param_5 != (BIO *)0x0,lVar3,uVar5,param_2);
    if (iVar1 != 0) {
      pcVar4 = *(char **)(param_1 + 0x48);
      bVar6 = false;
      if (pcVar4 != (char *)0x0) {
        bVar6 = *pcVar4 != '\0';
      }
      for (iVar1 = 0; iVar2 = OPENSSL_sk_num(param_3), iVar1 < iVar2; iVar1 = iVar1 + 1) {
        lVar3 = OPENSSL_sk_value(param_3,iVar1);
        if (bVar6) {
          iVar2 = OPENSSL_strcasecmp(&_LC34,*(undefined8 *)(lVar3 + 8));
          bVar6 = iVar2 != 0;
          iVar2 = OSSL_HTTP_REQ_CTX_add1_header
                            (param_1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        }
        else {
          iVar2 = OSSL_HTTP_REQ_CTX_add1_header
                            (param_1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        }
        if (iVar2 == 0) goto LAB_00102355;
      }
      if (((!bVar6) || (iVar1 = OSSL_HTTP_REQ_CTX_add1_header(param_1,&_LC35,pcVar4), iVar1 != 0))
         && (iVar1 = OSSL_HTTP_REQ_CTX_set_expected(param_1,param_6,param_7,param_9,param_10),
            iVar1 != 0)) {
        local_48 = (FILE *)0x0;
        if ((param_5 == (BIO *)0x0) && (param_4 != 0)) {
          ERR_new();
          pcVar4 = "set1_content";
          uVar5 = 0x122;
          goto LAB_00102489;
        }
        if ((*(int *)(param_1 + 0xa0) != 0) &&
           (iVar1 = OSSL_HTTP_REQ_CTX_add1_header(param_1,"Connection","keep-alive"), iVar1 == 0))
        goto LAB_00102355;
        BIO_free(*(BIO **)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x60) = 0;
        if (param_5 != (BIO *)0x0) {
          if (*(int *)(param_1 + 0x68) == 0) {
            ERR_new();
            ERR_set_debug("crypto/http/http_client.c",0x12f,"set1_content");
            ERR_set_error(0x3d,0xc0101,0);
            goto LAB_00102355;
          }
          if (param_4 == 0) {
            *(undefined4 *)(param_1 + 0x6c) = 1;
          }
          else {
            iVar1 = OPENSSL_strncasecmp(param_4,"text/",5);
            if (iVar1 == 0) {
              *(undefined4 *)(param_1 + 0x6c) = 1;
            }
            iVar1 = BIO_printf(*(BIO **)(param_1 + 0x58),"Content-Type: %s\r\n",param_4);
            if (iVar1 < 1) goto LAB_00102355;
          }
          iVar1 = BIO_method_type(param_5);
          if (iVar1 == 0x402) {
            lVar3 = BIO_ctrl(param_5,0x6b,0,&local_48);
            if ((lVar3 == 1) && (iVar1 = fseek(local_48,0,2), iVar1 == 0)) {
              lVar3 = ftell(local_48);
              fseek(local_48,0,0);
              goto LAB_001025c9;
            }
            local_48 = (FILE *)0x0;
          }
          else {
            lVar3 = BIO_ctrl(param_5,3,0,(void *)0x0);
LAB_001025c9:
            if (((local_48 != (FILE *)0x0) || (0 < lVar3)) &&
               (iVar1 = BIO_printf(*(BIO **)(param_1 + 0x58),"Content-Length: %ld\r\n",lVar3),
               iVar1 < 0)) goto LAB_00102355;
          }
          iVar1 = BIO_up_ref(param_5);
          if (iVar1 == 0) goto LAB_00102355;
          *(BIO **)(param_1 + 0x60) = param_5;
        }
        uVar5 = 1;
        goto LAB_00102357;
      }
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x98) = param_8;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      goto LAB_0010233d;
    }
    ERR_new();
    ERR_set_debug("crypto/http/http_client.c",0x488,"OSSL_HTTP_set1_request");
    ERR_set_error(0x3d,0x80106,0);
  }
LAB_00102355:
  uVar5 = 0;
LAB_00102357:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    goto LAB_00102709;
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
              goto LAB_00102709;
            }
          }
          else {
            if (*pcVar4 != '\0') goto LAB_001028d0;
            if (*(long *)(param_1 + 0x40) != 0) goto LAB_001027e7;
          }
        }
        else if ((uVar8 == 0x3a) && (uVar2 == 0x93)) {
          pcVar4 = *(char **)(param_1 + 0x48);
          if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
LAB_001028d0:
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
LAB_001027e7:
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
            goto LAB_00102709;
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
        goto LAB_00102709;
      }
      pcVar4 = CRYPTO_strdup(*(char **)(param_1 + 0xb8),"crypto/http/http_client.c",0x4ae);
      *param_2 = pcVar4;
    }
  }
  else {
    iVar1 = BIO_up_ref(lVar3);
    if (iVar1 != 0) goto LAB_00102709;
  }
  lVar3 = 0;
LAB_00102709:
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
    if (lVar1 == 0) goto LAB_001029b9;
    *(long *)(param_1 + 0x18) = lVar1;
  }
  uVar2 = 1;
LAB_001029b9:
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
LAB_00102ac0:
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
              goto LAB_00102bc3;
            }
            a = (BIO *)OSSL_HTTP_exchange(lVar3,&local_48);
            CRYPTO_free(local_50);
            if (a == (BIO *)0x0) goto LAB_00102bc5;
            uVar5 = 1;
LAB_00102d87:
            CRYPTO_free(local_60);
            CRYPTO_free(local_58);
            iVar4 = OSSL_HTTP_close(lVar3,uVar5);
            pBVar7 = a;
            if (iVar4 == 0) {
              pBVar7 = (BIO *)0x0;
              BIO_free(a);
            }
            goto LAB_00102dc1;
          }
          CRYPTO_free(local_50);
LAB_00102bc3:
          lVar3 = 0;
LAB_00102bc5:
          __s1 = local_48;
          if (local_48 == (char *)0x0) {
LAB_00102e41:
            uVar5 = 0;
            a = (BIO *)0x0;
            goto LAB_00102d87;
          }
          iVar4 = iVar4 + 1;
          if (iVar4 == 0x32) {
            ERR_new();
            ERR_set_debug("crypto/http/http_client.c",0x4d8,"redirection_ok");
            ERR_set_error(0x3d,0x73,0);
LAB_00102e2c:
            CRYPTO_free(local_48);
            goto LAB_00102e41;
          }
          if (((*local_48 != '/') && (iVar1 = strncmp(__s1_00,"https:",6), iVar1 == 0)) &&
             (iVar1 = strncmp(__s1,"https:",6), iVar1 != 0)) {
            ERR_new();
            ERR_set_debug("crypto/http/http_client.c",0x4df,"redirection_ok");
            ERR_set_error(0x3d,0x70,0);
            goto LAB_00102e2c;
          }
          tVar2 = time((time_t *)0x0);
          if (lVar6 != 0) {
            if (lVar6 < tVar2) {
              ERR_new();
              ERR_set_debug("crypto/http/http_client.c",0x219,"may_still_retry");
              ERR_set_error(0x3d,0x81,0);
              goto LAB_00102e2c;
            }
            local_c8 = 0x7fffffff;
            if (lVar6 - tVar2 < 0x80000000) {
              local_c8 = lVar6 - tVar2;
            }
          }
          BIO_ctrl(param_4,1,0,(void *)0x0);
          CRYPTO_free(__s1_00);
          __s1_00 = local_48;
          if (*local_48 != '/') goto LAB_00102d10;
          local_50 = CRYPTO_strdup(local_48,"crypto/http/http_client.c",0x51f);
          if (local_50 == (char *)0x0) {
            CRYPTO_free(local_60);
            CRYPTO_free(local_58);
            OSSL_HTTP_close(lVar3,1);
            BIO_free((BIO *)0x0);
            CRYPTO_free(__s1_00);
            goto LAB_00102f08;
          }
        } while( true );
      }
      pBVar7 = (BIO *)0x0;
LAB_00102dc1:
      CRYPTO_free(__s1_00);
      goto LAB_00102dd1;
    }
  }
LAB_00102f08:
  pBVar7 = (BIO *)0x0;
LAB_00102dd1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar7;
LAB_00102d10:
  CRYPTO_free(local_60);
  CRYPTO_free(local_58);
  OSSL_HTTP_close(lVar3,1);
  goto LAB_00102ac0;
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
        goto LAB_00102fb5;
      }
    }
  }
  iVar1 = OSSL_HTTP_set1_request
                    (lVar3,param_4,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                     param_20);
  if ((iVar1 == 0) || (pBVar2 = (BIO *)OSSL_HTTP_exchange(lVar3,0), pBVar2 == (BIO *)0x0)) {
    uVar4 = 0;
    a = (BIO *)0x0;
LAB_00102f9e:
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
      goto LAB_00102f9e;
    }
  }
  if (param_1 == (long *)0x0) {
    return pBVar2;
  }
LAB_00102fb5:
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
LAB_0010314a:
    uVar9 = 0;
    if (b == (BIO *)0x0) goto LAB_00103156;
LAB_00103265:
    uVar9 = 0;
  }
  else {
    if ((buf == (char *)0x0) || (b == (BIO *)0x0)) {
      BIO_printf(param_7,"%s: out of memory",param_8);
      goto LAB_0010314a;
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
          goto LAB_0010322f;
        }
      }
      else {
        sVar4 = strlen(param_5);
        uVar7 = uVar7 + sVar4;
        sVar4 = uVar7 + 1;
        f = (uchar *)CRYPTO_malloc((int)sVar4,"crypto/http/http_client.c",0x5be);
        local_48 = param_5;
        if (f != (uchar *)0x0) {
LAB_0010322f:
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
                goto LAB_00103346;
              }
              CRYPTO_free(t);
            }
          }
          CRYPTO_clear_free(f,uVar7,"crypto/http/http_client.c");
        }
      }
      goto LAB_00103265;
    }
LAB_00103346:
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
        goto LAB_00103265;
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
      goto LAB_00103265;
    }
    if ((buf[5] != '1') || (buf[6] != '.')) {
      ERR_new();
      ERR_set_debug("crypto/http/http_client.c",0x5f7,"OSSL_HTTP_proxy_connect");
      ERR_set_error(0x3d,0x6a,0);
      BIO_printf(param_7,"%s: HTTP CONNECT failed, bad HTTP version %.*s\n",param_8,3,buf + 5);
      goto LAB_00103265;
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
      goto LAB_00103265;
    }
    do {
      iVar2 = BIO_gets(b,buf,0x2000);
    } while (2 < iVar2);
    uVar9 = 1;
  }
  BIO_ctrl(b,0xb,0,(void *)0x0);
  BIO_pop(b);
  BIO_free(b);
LAB_00103156:
  CRYPTO_free(buf);
  return uVar9;
}


