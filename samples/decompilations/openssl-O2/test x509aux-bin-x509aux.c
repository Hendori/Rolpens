
undefined8 test_certs(int param_1)

{
  uint uVar1;
  bool bVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  BIO *bp;
  X509 *b;
  X509 *a;
  ulong uVar8;
  undefined8 uVar9;
  size_t sVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  code *local_b8;
  char *local_78;
  char *local_70;
  uchar *local_68;
  size_t local_60;
  uchar *local_58;
  uchar *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (char *)0x0;
  local_70 = (char *)0x0;
  local_68 = (uchar *)0x0;
  pcVar7 = (char *)test_get_argument((long)param_1);
  bp = BIO_new_file(pcVar7,"r");
  iVar4 = test_ptr("test/x509aux.c",0x21,&_LC1,bp);
  if (iVar4 != 0) {
    iVar4 = 0;
    do {
      iVar5 = PEM_read_bio(bp,&local_78,&local_70,&local_68,(long *)&local_60);
      pcVar7 = local_78;
      if (iVar5 == 0) break;
      iVar5 = strcmp(local_78,"TRUSTED CERTIFICATE");
      local_50 = (uchar *)0x0;
      local_58 = local_68;
      if (iVar5 == 0) {
        pcVar11 = d2i_X509_AUX;
        local_b8 = (code *)&i2d_X509_AUX;
LAB_001000ca:
        b = (X509 *)(*pcVar11)(0,&local_58,local_60);
        if ((b == (X509 *)0x0) || ((long)local_58 - (long)local_68 != local_60)) {
          test_error("test/x509aux.c",0x39,"error parsing input %s",local_78);
          goto LAB_0010025b;
        }
        iVar6 = (*local_b8)(b,0);
        if (local_60 != (long)iVar6) {
          a = (X509 *)0x0;
          bVar2 = true;
          test_error("test/x509aux.c",0x41,"encoded length %ld of %s != input length %ld",
                     (long)iVar6,local_78);
          goto LAB_0010013d;
        }
        local_50 = (uchar *)CRYPTO_malloc((int)local_60,"test/x509aux.c",0x46);
        local_48 = local_50;
        if (local_50 == (uchar *)0x0) {
          test_perror("malloc");
LAB_0010025b:
          a = (X509 *)0x0;
        }
        else {
          iVar6 = (*local_b8)(b,&local_48);
          puVar3 = local_50;
          sVar10 = local_60;
          if (local_60 != (long)iVar6) {
            test_error("test/x509aux.c",0x4d,"encoded length %ld of %s != input length %ld",
                       (long)iVar6,local_78);
            goto LAB_0010025b;
          }
          if (local_60 != (long)local_48 - (long)local_50) {
            test_error("test/x509aux.c",0x54,"unexpected buffer position after encoding %s",local_78
                      );
            goto LAB_0010025b;
          }
          iVar6 = memcmp(local_50,local_68,local_60);
          if (iVar6 != 0) {
            test_error("test/x509aux.c",0x59,"encoded content of %s does not match input",local_78);
            goto LAB_0010025b;
          }
          local_58 = puVar3;
          a = (X509 *)(*pcVar11)(0,&local_58,sVar10);
          if (a == (X509 *)0x0) {
            test_error("test/x509aux.c",0x60,"second d2i call failed for %s",local_78);
            goto LAB_0010025b;
          }
          iVar6 = X509_cmp(a,b);
          if (iVar6 == 0) {
            CRYPTO_free(local_50);
            local_50 = (uchar *)0x0;
            iVar6 = (*local_b8)(b,&local_50);
            puVar3 = local_50;
            sVar10 = (size_t)iVar6;
            if (local_60 == sVar10) {
              iVar6 = memcmp(local_50,local_68,sVar10);
              if (iVar6 == 0) {
                bVar2 = false;
                if (iVar5 != 0) goto LAB_0010013d;
                CRYPTO_free(puVar3);
                local_50 = (uchar *)0x0;
                iVar5 = (*local_b8)(b,&local_50);
                sVar10 = (size_t)iVar5;
                if ((long)local_60 < (long)sVar10) {
                  test_error("test/x509aux.c",0x83,"encoded length %ld of %s > input length %ld",
                             sVar10,local_78);
                }
                else {
                  iVar5 = memcmp(local_50,local_68,sVar10);
                  if (iVar5 == 0) goto LAB_0010013d;
                  test_error("test/x509aux.c",0x89,"encoded cert content does not match input");
                }
              }
              else {
                test_error("test/x509aux.c",0x76,"encoded content of %s does not match input",
                           local_78);
              }
            }
            else {
              test_error("test/x509aux.c",0x70,"encoded length %ld of %s != input length %ld",sVar10
                         ,local_78);
            }
          }
          else {
            test_error("test/x509aux.c",0x66,"X509_cmp for %s resulted in %d",local_78,iVar6);
          }
        }
        bVar2 = true;
      }
      else {
        iVar6 = strcmp(pcVar7,"CERTIFICATE");
        if (iVar6 == 0) {
LAB_00100223:
          pcVar11 = d2i_X509;
          local_b8 = i2d_X509;
          goto LAB_001000ca;
        }
        iVar6 = strcmp(pcVar7,"X509 CERTIFICATE");
        if (iVar6 == 0) goto LAB_00100223;
        a = (X509 *)0x0;
        b = (X509 *)0x0;
        bVar2 = true;
        test_error("test/x509aux.c",0x32,"unexpected PEM object: %s",pcVar7);
      }
LAB_0010013d:
      iVar4 = iVar4 + 1;
      X509_free(b);
      X509_free(a);
      CRYPTO_free(local_50);
      CRYPTO_free(local_78);
      CRYPTO_free(local_70);
      CRYPTO_free(local_68);
    } while (!bVar2);
    BIO_free(bp);
    uVar8 = ERR_peek_last_error();
    uVar1 = (uint)uVar8 & 0x7fffff;
    if ((uVar8 & 0x80000000) != 0) {
      uVar1 = (uint)uVar8 & 0x7fffffff;
    }
    if ((iVar4 != 0) && (uVar1 == 0x6c)) {
      ERR_clear_error();
      uVar9 = 1;
      goto LAB_00100437;
    }
  }
  uVar9 = 0;
LAB_00100437:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/x509aux.c",0xaf,"Error parsing test options\n");
  }
  else {
    uVar2 = test_get_argument_count();
    if (uVar2 != 0) {
      add_all_tests("test_certs",0x100000,uVar2 & 0xffffffff,1);
      return 1;
    }
  }
  return 0;
}


