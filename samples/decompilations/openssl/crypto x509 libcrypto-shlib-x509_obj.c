
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * X509_NAME_oneline(X509_NAME *a,char *buf,int size)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  char *__s;
  size_t sVar8;
  long lVar9;
  undefined4 extraout_var;
  void *pvVar10;
  byte *pbVar11;
  undefined4 extraout_var_00;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  BUF_MEM *local_d8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (buf == (char *)0x0) {
    local_d8 = BUF_MEM_new();
    if ((local_d8 != (BUF_MEM *)0x0) &&
       (iVar6 = BUF_MEM_grow(local_d8,200), CONCAT44(extraout_var_00,iVar6) != 0)) {
      *local_d8->data = '\0';
      if (a == (X509_NAME *)0x0) {
        lVar14 = 199;
        buf = local_d8->data;
        CRYPTO_free(local_d8);
        sVar8 = 200;
        goto LAB_001004ac;
      }
      size = 200;
      goto LAB_00100053;
    }
LAB_0010046d:
    ERR_new();
    ERR_set_debug("crypto/x509/x509_obj.c",0xb4,"X509_NAME_oneline");
    ERR_set_error(0xb,0x80007,0);
LAB_001003dc:
    BUF_MEM_free(local_d8);
  }
  else if (size != 0) {
    local_d8 = (BUF_MEM *)0x0;
    if (a == (X509_NAME *)0x0) {
      sVar8 = (size_t)size;
      lVar14 = sVar8 - 1;
LAB_001004ac:
      strncpy(buf,"NO X509_NAME",sVar8);
      buf[lVar14] = '\0';
      goto LAB_001003e7;
    }
LAB_00100053:
    lVar14 = 0;
    iVar17 = 0;
    iVar6 = -1;
    iVar5 = OPENSSL_sk_num(a->entries);
    if (0 < iVar5) {
      do {
        puVar7 = (undefined8 *)OPENSSL_sk_value(a->entries,iVar17);
        iVar5 = OBJ_obj2nid((ASN1_OBJECT *)*puVar7);
        if ((iVar5 == 0) || (__s = OBJ_nid2sn(iVar5), __s == (char *)0x0)) {
          i2t_ASN1_OBJECT(local_98,0x50,(ASN1_OBJECT *)*puVar7);
          __s = local_98;
        }
        sVar8 = strlen(__s);
        puVar3 = (uint *)puVar7[1];
        uVar2 = *puVar3;
        if (0x100000 < (int)uVar2) {
          ERR_new();
          uVar15 = 0x4b;
LAB_001003bd:
          ERR_set_debug("crypto/x509/x509_obj.c",uVar15,"X509_NAME_oneline");
          ERR_set_error(0xb,0x86,0);
          goto LAB_001003dc;
        }
        lVar13 = *(long *)(puVar3 + 2);
        if ((puVar3[1] == 0x1b) && ((uVar2 & 3) == 0)) {
          uStack_a0 = 0;
          local_a8 = 0;
          if (0 < (int)uVar2) {
            lVar9 = 0;
            do {
              if (*(char *)(lVar13 + lVar9) != '\0') {
                *(undefined4 *)((long)&local_a8 + (ulong)((uint)lVar9 & 3) * 4) = 1;
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 != (int)uVar2);
            if (((int)local_a8 == 0 && local_a8._4_4_ == 0) && (int)uStack_a0 == 0) {
              uStack_a0 = CONCAT44(1,(int)uStack_a0);
            }
            else {
              local_a8 = __LC2;
              uStack_a0 = _UNK_00100548;
            }
            goto LAB_00100101;
          }
          uStack_a0 = 0x100000000;
LAB_00100398:
          iVar5 = 0;
        }
        else {
          local_a8 = __LC2;
          uStack_a0 = _UNK_00100548;
          if ((int)uVar2 < 1) goto LAB_00100398;
LAB_00100101:
          lVar9 = 0;
          iVar5 = 0;
          do {
            while (*(int *)((long)&local_a8 + (ulong)((uint)lVar9 & 3) * 4) == 0) {
LAB_00100113:
              lVar9 = lVar9 + 1;
              if ((int)uVar2 == lVar9) goto LAB_00100155;
            }
            bVar1 = *(byte *)(lVar13 + lVar9);
            if ((bVar1 & 0xfb) == 0x2b) {
              iVar5 = iVar5 + 2;
              goto LAB_00100113;
            }
            iVar16 = iVar5 + 1;
            iVar5 = iVar5 + 4;
            if ((byte)(bVar1 - 0x20) < 0x5f) {
              iVar5 = iVar16;
            }
            lVar9 = lVar9 + 1;
          } while ((int)uVar2 != lVar9);
        }
LAB_00100155:
        iVar5 = iVar5 + 2 + (int)sVar8 + (int)lVar14;
        if (0x100000 < iVar5) {
          ERR_new();
          uVar15 = 0x79;
          goto LAB_001003bd;
        }
        if (local_d8 == (BUF_MEM *)0x0) {
          pcVar4 = buf;
          if (size <= iVar5) goto LAB_001002d2;
        }
        else {
          iVar16 = BUF_MEM_grow(local_d8,(long)(iVar5 + 1));
          if (CONCAT44(extraout_var,iVar16) == 0) goto LAB_0010046d;
          pcVar4 = local_d8->data;
        }
        pcVar4[lVar14] = (*(int *)(puVar7 + 2) != iVar6) * '\x04' + '+';
        pvVar10 = memcpy(pcVar4 + lVar14 + 1,__s,sVar8 & 0xffffffff);
        puVar12 = (undefined1 *)((long)pvVar10 + (long)(int)sVar8);
        *puVar12 = 0x3d;
        pbVar11 = puVar12 + 1;
        lVar14 = *(long *)(puVar7[1] + 8);
        if (0 < (int)uVar2) {
          lVar13 = 0;
          do {
            while (*(int *)((long)&local_a8 + (ulong)((uint)lVar13 & 3) * 4) == 0) {
LAB_00100236:
              lVar13 = lVar13 + 1;
              if ((int)uVar2 == lVar13) goto LAB_00100287;
            }
            bVar1 = *(byte *)(lVar14 + lVar13);
            if (bVar1 - 0x20 < 0x5f) {
              if ((bVar1 & 0xfb) == 0x2b) {
                *pbVar11 = 0x5c;
                pbVar11 = pbVar11 + 1;
              }
              *pbVar11 = bVar1;
              pbVar11 = pbVar11 + 1;
              goto LAB_00100236;
            }
            lVar13 = lVar13 + 1;
            *(undefined2 *)pbVar11 = _LC3;
            lVar9 = ossl_to_hex(pbVar11 + 2);
            pbVar11 = pbVar11 + 2 + lVar9;
          } while ((int)uVar2 != lVar13);
        }
LAB_00100287:
        *pbVar11 = 0;
        iVar6 = *(int *)(puVar7 + 2);
        iVar17 = iVar17 + 1;
        lVar14 = (long)iVar5;
        iVar5 = OPENSSL_sk_num(a->entries);
      } while (iVar17 < iVar5);
    }
    if (local_d8 != (BUF_MEM *)0x0) {
      buf = local_d8->data;
      CRYPTO_free(local_d8);
    }
LAB_001002d2:
    if (iVar17 == 0) {
      *buf = '\0';
    }
    goto LAB_001003e7;
  }
  buf = (char *)0x0;
LAB_001003e7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return buf;
}


