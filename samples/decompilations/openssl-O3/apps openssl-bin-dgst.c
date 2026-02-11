
void show_digests(long param_1,undefined8 *param_2)

{
  int iVar1;
  byte *__haystack;
  undefined8 uVar2;
  char *pcVar3;
  ushort **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  EVP_MD *pEVar8;
  
  __haystack = *(byte **)(param_1 + 8);
  pcVar3 = strstr((char *)__haystack,"rsa");
  if (((pcVar3 == (char *)0x0) && (pcVar3 = strstr((char *)__haystack,"RSA"), pcVar3 == (char *)0x0)
      ) && (ppuVar4 = __ctype_b_loc(),
           (*(byte *)((long)*ppuVar4 + (ulong)*__haystack * 2 + 1) & 2) != 0)) {
    uVar5 = app_get0_propq();
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar6 = app_get0_libctx();
    lVar7 = EVP_MD_fetch(uVar6,uVar2,uVar5);
    if ((lVar7 != 0) ||
       (pEVar8 = EVP_get_digestbyname(*(char **)(param_1 + 8)), pEVar8 != (EVP_MD *)0x0)) {
      BIO_printf((BIO *)*param_2,"-%-25s",*(undefined8 *)(param_1 + 8));
      iVar1 = *(int *)(param_2 + 1);
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (iVar1 + 1 == 3) {
        BIO_printf((BIO *)*param_2,"\n");
        *(undefined4 *)(param_2 + 1) = 0;
      }
      else {
        BIO_printf((BIO *)*param_2," ");
      }
      EVP_MD_free(lVar7);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_out(BIO *param_1,byte *param_2,int param_3,int param_4,int param_5,char *param_6,
              long param_7,char *param_8)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  undefined1 auVar26 [14];
  undefined1 auVar27 [12];
  unkbyte10 Var28;
  undefined1 auVar29 [12];
  unkbyte9 Var30;
  undefined6 uVar31;
  undefined2 uVar32;
  size_t sVar33;
  char *pcVar34;
  undefined1 *ptr;
  ulong uVar35;
  bool bVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  char cVar47;
  short sVar48;
  undefined1 auVar46 [16];
  undefined4 uVar49;
  short sVar55;
  short sVar56;
  short sVar58;
  short sVar59;
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 uVar77;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  long lVar66;
  long lVar67;
  undefined4 uVar78;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined6 uVar39;
  undefined8 uVar40;
  undefined1 auVar42 [12];
  undefined1 auVar41 [12];
  undefined1 auVar43 [14];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar50 [12];
  undefined1 auVar52 [16];
  long lVar57;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar60 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar68 [16];
  
  if (param_5 != 0) {
    BIO_write(param_1,param_2,param_3);
    return;
  }
  if (param_4 != 2) {
    if (param_6 == (char *)0x0) {
      if (param_7 != 0) {
        BIO_printf(param_1,"%s(%s)= ",param_7,param_8);
        goto LAB_0010019b;
      }
    }
    else {
      BIO_puts(param_1,param_6);
      if (param_7 != 0) {
        BIO_printf(param_1,"-%s");
      }
    }
    BIO_printf(param_1,"(%s)= ",param_8);
LAB_0010019b:
    if (0 < param_3) {
      uVar35 = 0;
      do {
        if (((int)uVar35 != 0) && (param_4 != 0)) {
          BIO_printf(param_1,":");
        }
        BIO_printf(param_1,"%02x",(ulong)param_2[uVar35]);
        bVar36 = param_3 - 1 != uVar35;
        uVar35 = uVar35 + 1;
      } while (bVar36);
    }
    BIO_printf(param_1,"\n");
    return;
  }
  sVar33 = strlen(param_8);
  if (sVar33 == 0) {
    ptr = (undefined1 *)app_malloc(1,param_8);
    *ptr = 0;
    goto LAB_0010058b;
  }
  if (sVar33 - 1 < 0xf) {
    lVar66 = 0;
    uVar35 = 0;
LAB_001003c2:
    if (param_8[uVar35] == '\n') {
      lVar66 = lVar66 + 1;
    }
    if (uVar35 + 1 < sVar33) {
      if (param_8[uVar35 + 1] == '\n') {
        lVar66 = lVar66 + 1;
      }
      if (uVar35 + 2 < sVar33) {
        if (param_8[uVar35 + 2] == '\n') {
          lVar66 = lVar66 + 1;
        }
        if (uVar35 + 3 < sVar33) {
          if (param_8[uVar35 + 3] == '\n') {
            lVar66 = lVar66 + 1;
          }
          if (uVar35 + 4 < sVar33) {
            if (param_8[uVar35 + 4] == '\n') {
              lVar66 = lVar66 + 1;
            }
            if (uVar35 + 5 < sVar33) {
              if (param_8[uVar35 + 5] == '\n') {
                lVar66 = lVar66 + 1;
              }
              if (uVar35 + 6 < sVar33) {
                if (param_8[uVar35 + 6] == '\n') {
                  lVar66 = lVar66 + 1;
                }
                if (uVar35 + 7 < sVar33) {
                  if (param_8[uVar35 + 7] == '\n') {
                    lVar66 = lVar66 + 1;
                  }
                  if (uVar35 + 8 < sVar33) {
                    if (param_8[uVar35 + 8] == '\n') {
                      lVar66 = lVar66 + 1;
                    }
                    if (uVar35 + 9 < sVar33) {
                      if (param_8[uVar35 + 9] == '\n') {
                        lVar66 = lVar66 + 1;
                      }
                      if (uVar35 + 10 < sVar33) {
                        if (param_8[uVar35 + 10] == '\n') {
                          lVar66 = lVar66 + 1;
                        }
                        if (uVar35 + 0xb < sVar33) {
                          if (param_8[uVar35 + 0xb] == '\n') {
                            lVar66 = lVar66 + 1;
                          }
                          if (uVar35 + 0xc < sVar33) {
                            if (param_8[uVar35 + 0xc] == '\n') {
                              lVar66 = lVar66 + 1;
                            }
                            if (uVar35 + 0xd < sVar33) {
                              if (param_8[uVar35 + 0xd] == '\n') {
                                lVar66 = lVar66 + 1;
                              }
                              if ((uVar35 + 0xe < sVar33) && (param_8[uVar35 + 0xe] == '\n')) {
                                lVar66 = lVar66 + 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar66 = 0;
    lVar67 = 0;
    uVar35 = sVar33 & 0xfffffffffffffff0;
    pcVar34 = param_8;
    do {
      cVar47 = *pcVar34;
      pcVar11 = pcVar34 + 1;
      pcVar12 = pcVar34 + 2;
      pcVar13 = pcVar34 + 3;
      pcVar14 = pcVar34 + 4;
      pcVar15 = pcVar34 + 5;
      pcVar16 = pcVar34 + 6;
      pcVar17 = pcVar34 + 7;
      pcVar18 = pcVar34 + 8;
      pcVar19 = pcVar34 + 9;
      pcVar20 = pcVar34 + 10;
      pcVar21 = pcVar34 + 0xb;
      pcVar22 = pcVar34 + 0xc;
      pcVar23 = pcVar34 + 0xd;
      pcVar24 = pcVar34 + 0xe;
      pcVar25 = pcVar34 + 0xf;
      pcVar34 = pcVar34 + 0x10;
      bVar36 = cVar47 == _LC5;
      cVar47 = -(*pcVar17 == UNK_00102b37);
      bVar3 = *pcVar18 == UNK_00102b38;
      bVar4 = *pcVar19 == UNK_00102b39;
      bVar5 = *pcVar20 == UNK_00102b3a;
      bVar6 = *pcVar21 == UNK_00102b3b;
      uVar32 = CONCAT11(-(*pcVar17 == UNK_00102b37),cVar47);
      uVar38 = CONCAT31(CONCAT21(uVar32,-(*pcVar16 == UNK_00102b36)),-(*pcVar16 == UNK_00102b36));
      uVar31 = CONCAT51(CONCAT41(uVar38,-(*pcVar15 == UNK_00102b35)),-(*pcVar15 == UNK_00102b35));
      Var30 = CONCAT72(CONCAT61(uVar31,-(*pcVar14 == UNK_00102b34)),
                       CONCAT11(-(*pcVar14 == UNK_00102b34),cVar47));
      lVar57 = (long)((unkuint9)Var30 >> 8);
      Var28 = CONCAT91(CONCAT81(lVar57,-(*pcVar13 == UNK_00102b33)),-(*pcVar13 == UNK_00102b33));
      auVar27._2_10_ = Var28;
      auVar27[1] = -(*pcVar12 == UNK_00102b32);
      auVar27[0] = -(*pcVar12 == UNK_00102b32);
      auVar26._2_12_ = auVar27;
      auVar26[1] = -(*pcVar11 == UNK_00102b31);
      auVar26[0] = -(*pcVar11 == UNK_00102b31);
      auVar51._0_2_ = CONCAT11(-bVar36,-bVar36);
      auVar51._2_14_ = auVar26;
      uVar37 = CONCAT13(-bVar4,CONCAT12(-bVar4,CONCAT11(-bVar3,-bVar3)));
      uVar39 = CONCAT15(-bVar5,CONCAT14(-bVar5,uVar37));
      uVar40 = CONCAT17(-bVar6,CONCAT16(-bVar6,uVar39));
      auVar41._0_10_ =
           CONCAT19(-(*pcVar22 == UNK_00102b3c),CONCAT18(-(*pcVar22 == UNK_00102b3c),uVar40));
      auVar41[10] = -(*pcVar23 == UNK_00102b3d);
      auVar41[0xb] = -(*pcVar23 == UNK_00102b3d);
      auVar43[0xc] = -(*pcVar24 == UNK_00102b3e);
      auVar43._0_12_ = auVar41;
      auVar43[0xd] = -(*pcVar24 == UNK_00102b3e);
      auVar44[0xe] = -(*pcVar25 == UNK_00102b3f);
      auVar44._0_14_ = auVar43;
      auVar44[0xf] = -(*pcVar25 == UNK_00102b3f);
      sVar55 = (short)Var28;
      sVar56 = (short)((unkuint9)Var30 >> 8);
      uVar7 = (ushort)(sVar56 < 0);
      sVar58 = (short)uVar31;
      uVar9 = (ushort)(sVar58 < 0);
      sVar59 = (short)uVar38;
      sVar48 = (short)((unkuint10)auVar41._0_10_ >> 0x40);
      uVar8 = (ushort)(sVar48 < 0);
      uVar10 = (ushort)(auVar41._10_2_ < 0);
      auVar63._0_12_ = auVar51._0_12_;
      auVar63._12_2_ = sVar55;
      auVar63._14_2_ = -(ushort)(sVar55 < 0);
      auVar62._12_4_ = auVar63._12_4_;
      auVar62._0_10_ = auVar51._0_10_;
      auVar62._10_2_ = -(ushort)(auVar27._0_2_ < 0);
      auVar61._10_6_ = auVar62._10_6_;
      auVar61._0_8_ = auVar51._0_8_;
      auVar61._8_2_ = auVar27._0_2_;
      auVar29._4_8_ = auVar61._8_8_;
      auVar29._2_2_ = -(ushort)(auVar26._0_2_ < 0);
      auVar29._0_2_ = auVar26._0_2_;
      uVar77 = CONCAT22(-(ushort)bVar36,auVar51._0_2_);
      auVar60._4_12_ = auVar29;
      uVar49 = CONCAT22(-uVar7,sVar56);
      auVar50._0_8_ = CONCAT26(-uVar9,CONCAT24(sVar58,uVar49));
      auVar50._8_2_ = sVar59;
      auVar50._10_2_ = -(ushort)(sVar59 < 0);
      auVar52._12_2_ = uVar32;
      auVar52._0_12_ = auVar50;
      auVar52._14_2_ = -(ushort)(lVar57 < 0);
      auVar73._12_2_ = (short)((ulong)uVar40 >> 0x30);
      auVar73._0_12_ = auVar41;
      auVar73._14_2_ = -(ushort)bVar6;
      auVar72._12_4_ = auVar73._12_4_;
      auVar72._10_2_ = -(ushort)bVar5;
      auVar72._0_10_ = auVar41._0_10_;
      auVar71._10_6_ = auVar72._10_6_;
      auVar71._8_2_ = (short)((uint6)uVar39 >> 0x20);
      auVar71._0_8_ = uVar40;
      auVar70._8_8_ = auVar71._8_8_;
      auVar70._6_2_ = -(ushort)bVar4;
      auVar70._0_6_ = uVar39;
      auVar69._6_10_ = auVar70._6_10_;
      auVar69._4_2_ = (short)((uint)uVar37 >> 0x10);
      auVar69._0_4_ = uVar37;
      auVar68._4_12_ = auVar69._4_12_;
      uVar78 = CONCAT22(-(ushort)bVar3,CONCAT11(-bVar3,-bVar3));
      uVar38 = CONCAT22(-uVar8,sVar48);
      auVar42._0_8_ = CONCAT26(-uVar10,CONCAT24(auVar41._10_2_,uVar38));
      auVar42._8_2_ = auVar43._12_2_;
      auVar42._10_2_ = -(ushort)(auVar43._12_2_ < 0);
      auVar45._12_2_ = auVar44._14_2_;
      auVar45._0_12_ = auVar42;
      auVar45._14_2_ = -(ushort)(auVar44._14_2_ < 0);
      auVar75._4_4_ = -(uint)(auVar61._8_4_ < 0);
      auVar75._0_4_ = auVar61._8_4_;
      auVar75._8_4_ = auVar62._12_4_;
      auVar75._12_4_ = -(uint)(auVar61._10_6_ < 0);
      auVar64._0_8_ = auVar60._0_8_;
      auVar64._8_4_ = auVar29._0_4_;
      auVar64._12_4_ = -(uint)(auVar29._0_4_ < 0);
      auVar65._4_4_ = -(uint)(auVar50._8_4_ < 0);
      auVar65._0_4_ = auVar50._8_4_;
      auVar65._8_4_ = auVar52._12_4_;
      auVar65._12_4_ = -(uint)(auVar52._12_4_ < 0);
      auVar53._8_4_ = (int)((ulong)auVar50._0_8_ >> 0x20);
      auVar53._0_8_ = auVar50._0_8_;
      auVar53._12_4_ = -(uint)(uVar9 != 0);
      auVar54._4_4_ = -(uint)(auVar71._8_4_ < 0);
      auVar54._0_4_ = auVar71._8_4_;
      auVar54._8_4_ = auVar72._12_4_;
      auVar54._12_4_ = -(uint)(auVar71._10_6_ < 0);
      auVar74._0_8_ = auVar68._0_8_;
      auVar74._8_4_ = auVar69._4_4_;
      auVar74._12_4_ = -(uint)(auVar69._4_4_ < 0);
      auVar76._8_4_ = (int)((ulong)auVar42._0_8_ >> 0x20);
      auVar76._0_8_ = auVar42._0_8_;
      auVar76._12_4_ = -(uint)(uVar10 != 0);
      auVar46._0_8_ = CONCAT44(-(uint)(auVar42._8_4_ < 0),auVar42._8_4_);
      auVar46._8_4_ = auVar45._12_4_;
      auVar46._12_4_ = -(uint)(auVar45._12_4_ < 0);
      lVar66 = (lVar66 - auVar46._0_8_) +
               ((SUB168(auVar54 & __LC6,0) - CONCAT44(-(uint)(bVar3 != 0),uVar78)) -
               CONCAT44(-(uint)(uVar8 != 0),uVar38)) +
               (SUB168(auVar65 & __LC6,0) - CONCAT44(-(uint)(uVar7 != 0),uVar49)) +
               (SUB168(auVar75 & __LC6,0) - CONCAT44(-(uint)(bVar36 != 0),uVar77));
      lVar67 = (lVar67 - auVar46._8_8_) +
               ((SUB168(auVar54 & __LC6,8) - auVar74._8_8_) - auVar76._8_8_) +
               (SUB168(auVar65 & __LC6,8) - auVar53._8_8_) +
               (SUB168(auVar75 & __LC6,8) - auVar64._8_8_);
    } while (pcVar34 != param_8 + uVar35);
    lVar66 = lVar66 + lVar67;
    if (sVar33 != uVar35) goto LAB_001003c2;
  }
  ptr = (undefined1 *)app_malloc(lVar66 + 1 + sVar33,param_8);
  uVar32 = _LC7;
  pcVar34 = param_8 + sVar33;
  lVar66 = 0;
  bVar36 = false;
  do {
    while( true ) {
      bVar3 = bVar36;
      cVar47 = *param_8;
      if (cVar47 != '\n') break;
      param_8 = param_8 + 1;
      *(undefined2 *)(ptr + lVar66) = uVar32;
      lVar66 = lVar66 + 2;
      bVar3 = true;
      bVar36 = true;
      if (param_8 == pcVar34) goto LAB_0010057b;
    }
    param_8 = param_8 + 1;
    ptr[lVar66] = cVar47;
    lVar66 = lVar66 + 1;
    bVar36 = bVar3;
  } while (param_8 != pcVar34);
LAB_0010057b:
  ptr[lVar66] = 0;
  if (bVar3) {
    BIO_puts(param_1,"\\");
  }
LAB_0010058b:
  pbVar1 = param_2 + (ulong)(param_3 - 1) + 1;
  if (0 < param_3) {
    do {
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      BIO_printf(param_1,"%02x",(ulong)bVar2);
    } while (param_2 != pbVar1);
  }
  BIO_printf(param_1," *%s\n",ptr);
  CRYPTO_free(ptr);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
do_fp_oneshot_sign(BIO *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,long param_7,int param_8,undefined8 param_9,
                  undefined8 param_10)

{
  int iVar1;
  void *ptr;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  iVar1 = bio_to_mem(&local_48,0x1000000);
  if (iVar1 < 1) {
    uVar3 = 1;
    BIO_printf(_bio_err,"Read error in %s\n",param_10);
    goto LAB_0010074d;
  }
  lVar2 = (long)iVar1;
  if (param_7 == 0) {
    if (param_6 == 0) {
      BIO_printf(_bio_err,"key must be set for one-shot algorithms\n");
LAB_001007ae:
      ptr = (void *)0x0;
      uVar3 = 1;
    }
    else {
      iVar1 = EVP_DigestSign(param_2,0,&local_50,local_48,lVar2);
      if (iVar1 == 1) {
        ptr = (void *)app_malloc(local_50,"Signature buffer");
        iVar1 = EVP_DigestSign(param_2,ptr,&local_50,local_48,lVar2);
        if (iVar1 == 1) {
          uVar3 = 0;
          print_out(param_1,ptr,local_50,param_4,param_5,param_9,0,param_10);
        }
        else {
          BIO_printf(_bio_err,"Error signing data\n");
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 1;
        BIO_printf(_bio_err,"Error getting maximum length of signed data\n");
        ptr = (void *)0x0;
      }
    }
  }
  else {
    iVar1 = EVP_DigestVerify(param_2,param_7,(long)param_8,local_48,lVar2);
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        BIO_printf(param_1,"Verification failure\n");
      }
      else {
        BIO_printf(_bio_err,"Error verifying data\n");
      }
      goto LAB_001007ae;
    }
    ptr = (void *)0x0;
    BIO_printf(param_1,"Verified OK\n");
    uVar3 = 0;
  }
  CRYPTO_free(ptr);
  CRYPTO_clear_free(local_48,lVar2,"apps/dgst.c",0x2e6);
LAB_0010074d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
do_fp(BIO *param_1,uchar *param_2,BIO *param_3,undefined4 param_4,undefined4 param_5,int param_6,
     long param_7,uchar *param_8,uint param_9,undefined8 param_10,undefined8 param_11,
     undefined8 param_12)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uchar *puVar4;
  long in_FS_OFFSET;
  EVP_MD_CTX *local_58;
  EVP_MD_CTX *local_50;
  EVP_MD_CTX *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (EVP_MD_CTX *)0x2000;
  do {
    lVar3 = BIO_ctrl(param_3,10,0,(void *)0x0);
    if (((int)lVar3 == 0) && (lVar3 = BIO_ctrl(param_3,2,0,(void *)0x0), (int)lVar3 != 0)) break;
    iVar1 = BIO_read(param_3,param_2,0x2000);
    if (iVar1 < 0) {
      BIO_printf(_bio_err,"Read error in %s\n",param_12);
      goto LAB_001009a4;
    }
  } while (iVar1 != 0);
  if (param_8 == (uchar *)0x0) {
    puVar4 = (uchar *)0x0;
    if (param_7 == 0) {
      if (param_6 < 1) {
        iVar1 = BIO_gets(param_3,(char *)param_2,0x2000);
        local_58 = (EVP_MD_CTX *)(long)iVar1;
        if (iVar1 < 0) goto LAB_001009a4;
      }
      else {
        local_58 = (EVP_MD_CTX *)(long)param_6;
        puVar4 = (uchar *)0x0;
        if ((EVP_MD_CTX *)0x2000 < local_58) {
          param_2 = (uchar *)app_malloc(local_58,"Digest buffer");
          puVar4 = param_2;
        }
        BIO_ctrl(param_3,0x78,0,&local_48);
        iVar1 = EVP_DigestFinalXOF(local_48,param_2,local_58);
        if (iVar1 == 0) {
          BIO_printf(_bio_err,"Error Digesting Data\n");
          uVar2 = 1;
          goto LAB_00100a6d;
        }
      }
LAB_00100a48:
      print_out(param_1,param_2,local_58,param_4,param_5,param_10,param_11,param_12);
      uVar2 = 0;
    }
    else {
      BIO_ctrl(param_3,0x78,0,&local_50);
      iVar1 = EVP_DigestSignFinal(local_50,(uchar *)0x0,(size_t *)&local_48);
      if (iVar1 == 0) {
        BIO_printf(_bio_err,"Error getting maximum length of signed data\n");
        goto LAB_001009a4;
      }
      if ((EVP_MD_CTX *)0x2000 < local_48) {
        local_58 = local_48;
        param_2 = (uchar *)app_malloc(local_48,"Signature buffer");
        puVar4 = param_2;
      }
      iVar1 = EVP_DigestSignFinal(local_50,param_2,(size_t *)&local_58);
      if (iVar1 != 0) goto LAB_00100a48;
      BIO_printf(_bio_err,"Error signing data\n",local_58);
      uVar2 = 1;
    }
LAB_00100a6d:
    if (puVar4 != (uchar *)0x0) {
      CRYPTO_clear_free(puVar4,local_58,"apps/dgst.c",0x2b2);
    }
  }
  else {
    BIO_ctrl(param_3,0x78,0,&local_48);
    iVar1 = EVP_DigestVerifyFinal(local_48,param_8,(ulong)param_9);
    if (0 < iVar1) {
      BIO_printf(param_1,"Verified OK\n");
      uVar2 = 0;
      goto LAB_001009b0;
    }
    if (iVar1 == 0) {
      BIO_printf(param_1,"Verification failure\n");
    }
    else {
      BIO_printf(_bio_err,"Error verifying data\n");
    }
LAB_001009a4:
    uVar2 = 1;
  }
LAB_001009b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dgst_main(undefined4 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *__nptr;
  long lVar13;
  char *filename;
  ENGINE *impl;
  BIO_METHOD *pBVar14;
  BIO *b;
  BIO *pkey;
  size_t sVar15;
  long lVar16;
  EVP_MD *pEVar17;
  undefined8 uVar18;
  void *data;
  char *pcVar19;
  BIO *pBVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined1 auVar22 [16];
  long local_150;
  long local_148;
  ENGINE *local_140;
  EVP_MD_CTX *local_130;
  BIO *local_128;
  BIO *local_120;
  uint local_114;
  char *local_110;
  BIO **local_108;
  BIO *local_100;
  undefined8 local_f8;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_c4;
  void *local_c0;
  EVP_MD *local_b8;
  EVP_MD_CTX *local_b0;
  BIO *local_a8;
  undefined4 local_a0;
  int local_98;
  short local_94;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = (void *)0x0;
  local_b8 = (EVP_MD *)0x0;
  local_c4 = 0;
  uVar10 = app_malloc(0x2000,"I/O buffer");
  local_b8 = EVP_get_digestbyname((char *)*param_2);
  pcVar19 = (char *)local_b8;
  if (local_b8 != (EVP_MD *)0x0) {
    pcVar19 = (char *)*param_2;
  }
  filename = (char *)0x0;
  opt_set_unknown_name("digest");
  uVar11 = opt_init(param_1,param_2,dgst_options);
  bVar21 = false;
  lVar16 = 0;
  local_e4 = 0;
  bVar3 = false;
  bVar2 = false;
  local_114 = 0xffffffff;
  bVar4 = false;
  local_e8 = 0;
  local_120 = (BIO *)0x0;
  local_f8 = 0;
  local_100 = (BIO *)0x0;
  local_110 = (char *)0x0;
  local_150 = 0;
  local_148 = 0;
  local_140 = (ENGINE *)0x0;
switchD_00100d86_caseD_0:
  iVar6 = opt_next();
  if (iVar6 != 0) goto LAB_00100d6d;
LAB_00100e10:
  iVar7 = opt_num_rest();
  puVar12 = (undefined8 *)opt_rest();
  if ((1 < iVar7) && (lVar16 != 0)) {
    BIO_printf(_bio_err,"%s: Can only sign or verify one file.\n",uVar11);
    goto LAB_00100eaa;
  }
  iVar8 = app_RAND_load();
  if (iVar8 == 0) goto LAB_00100eaa;
  if (((EVP_MD *)pcVar19 != (EVP_MD *)0x0) && (iVar8 = opt_md(pcVar19,&local_b8), iVar8 == 0))
  goto switchD_00100d86_caseD_ffffffff;
  if ((filename == (char *)0x0) && (bVar3)) {
    BIO_printf(_bio_err,"No signature to verify: use the -signature option\n");
    goto LAB_00100eaa;
  }
  impl = (ENGINE *)0x0;
  if (bVar21) {
    impl = local_140;
  }
  pBVar14 = BIO_s_file();
  b = BIO_new(pBVar14);
  pBVar14 = BIO_f_md();
  local_128 = BIO_new(pBVar14);
  if ((b != (BIO *)0x0) && (local_128 != (BIO *)0x0)) {
    if (bVar4) {
      BIO_set_callback_ex(b,&BIO_debug_callback_ex);
      BIO_set_callback_arg(b,(char *)_bio_err);
    }
    iVar8 = app_passwd(local_f8,0,&local_c0,0);
    if (iVar8 == 0) {
      BIO_printf(_bio_err,"Error getting password\n");
    }
    else {
      if (local_114 == 0xffffffff) {
        local_114 = (uint)(lVar16 != 0);
        bVar21 = lVar16 == 0;
      }
      else {
        bVar21 = local_114 == 0;
      }
      local_120 = (BIO *)bio_open_default(local_120,0x77,(-(uint)bVar21 & 0x7fff) + 2);
      if (local_120 != (BIO *)0x0) {
        if (1 < (int)((((uint)(lVar16 != 0) - (uint)(local_100 == (BIO *)0x0)) + 2) -
                     (uint)(local_110 == (char *)0x0))) {
          data = (void *)0x0;
          pkey = (BIO *)0x0;
          BIO_printf(_bio_err,"MAC and signing key cannot both be specified\n");
          local_130 = (EVP_MD_CTX *)0x0;
          goto LAB_00100ece;
        }
        if (lVar16 == 0) {
          bVar2 = false;
          local_130 = (EVP_MD_CTX *)0x0;
          pkey = (BIO *)0x0;
          if (local_100 == (BIO *)0x0) {
            if (local_110 != (char *)0x0) goto LAB_001014ad;
            local_a8 = (BIO *)0x0;
            lVar16 = BIO_ctrl(local_128,0x78,0,&local_a8);
            if (lVar16 < 1) {
              BIO_printf(_bio_err,"Error getting context\n");
            }
            else {
              if (local_b8 == (EVP_MD *)0x0) {
                local_b8 = EVP_sha256();
              }
              iVar8 = EVP_DigestInit_ex((EVP_MD_CTX *)local_a8,local_b8,impl);
              if (iVar8 != 0) {
                pkey = (BIO *)0x0;
                data = (void *)0x0;
                iVar8 = 0;
                local_130 = (EVP_MD_CTX *)0x0;
                goto LAB_00101960;
              }
              BIO_printf(_bio_err,"Error setting digest\n");
            }
            data = (void *)0x0;
            pkey = (BIO *)0x0;
            local_130 = (EVP_MD_CTX *)0x0;
            goto LAB_00100ece;
          }
        }
        else {
          if (bVar2) {
            pkey = (BIO *)load_pubkey(lVar16,local_c4,0,0,local_140,"public key");
          }
          else {
            pkey = (BIO *)load_key(lVar16,local_c4,0,local_c0,local_140,"private key");
          }
          if (pkey == (BIO *)0x0) {
            local_130 = (EVP_MD_CTX *)0x0;
            data = (void *)0x0;
            goto LAB_00100ece;
          }
          pBVar20 = pkey;
          iVar8 = EVP_PKEY_get_default_digest_name(pkey,&local_98,0x50);
          bVar2 = false;
          if (iVar8 == 2) {
            if ((local_98 != 0x45444e55) || (bVar5 = 0, local_94 != 0x46)) {
              bVar5 = 1;
            }
            bVar2 = (bool)(bVar5 ^ 1);
          }
          local_130 = (EVP_MD_CTX *)EVP_MD_CTX_new();
          if (local_130 == (EVP_MD_CTX *)0x0) goto LAB_00101833;
          if (local_100 == (BIO *)0x0) goto LAB_001014a5;
        }
        local_a8 = (BIO *)0x0;
        iVar8 = init_gen_str(&local_a8,local_100,impl,0,0,0);
        if (iVar8 == 0) goto LAB_00101833;
        iVar8 = 0;
        if (local_150 == 0) goto LAB_00101476;
        goto LAB_00101463;
      }
    }
  }
  local_130 = (EVP_MD_CTX *)0x0;
  data = (void *)0x0;
  pkey = (BIO *)0x0;
  local_120 = (BIO *)0x0;
  goto LAB_00100ece;
LAB_00100d6d:
  while (0x17 < iVar6) {
    if (iVar6 < 0x5df) {
      if ((iVar6 < 0x5dd) || (iVar6 = opt_rand(iVar6), iVar6 != 0)) goto switchD_00100d86_caseD_0;
LAB_00100da9:
      data = (void *)0x0;
      iVar6 = 1;
      pkey = (BIO *)0x0;
      b = (BIO *)0x0;
      local_130 = (EVP_MD_CTX *)0x0;
      local_120 = (BIO *)0x0;
      local_128 = (BIO *)0x0;
      goto LAB_00100ed4;
    }
    if (3 < iVar6 - 0x641U) goto switchD_00100d86_caseD_0;
    iVar6 = opt_provider(iVar6);
    if (iVar6 == 0) goto LAB_00100da9;
    iVar6 = opt_next();
    if (iVar6 == 0) {
      iVar6 = 0;
      goto LAB_00100e10;
    }
  }
  if (iVar6 < -1) goto switchD_00100d86_caseD_0;
  switch(iVar6) {
  default:
    goto switchD_00100d86_caseD_0;
  case 1:
    opt_help(dgst_options);
    goto LAB_001010f5;
  case 2:
    BIO_printf(_bio_out,"Supported digests:\n");
    local_a0 = 0;
    local_a8 = _bio_out;
    OBJ_NAME_do_all_sorted(1,show_digests,&local_a8);
    BIO_printf(_bio_out,"\n");
LAB_001010f5:
    local_130 = (EVP_MD_CTX *)0x0;
    data = (void *)0x0;
    pkey = (BIO *)0x0;
    b = (BIO *)0x0;
    local_120 = (BIO *)0x0;
    local_128 = (BIO *)0x0;
    goto LAB_00101119;
  case 3:
    local_e8 = 1;
    goto switchD_00100d86_caseD_0;
  case 4:
    local_e8 = 2;
    goto switchD_00100d86_caseD_0;
  case 5:
    local_120 = (BIO *)opt_arg();
    goto switchD_00100d86_caseD_0;
  case 6:
    lVar16 = opt_arg();
    goto switchD_00100d86_caseD_0;
  case 7:
    local_f8 = opt_arg();
    goto switchD_00100d86_caseD_0;
  case 8:
    lVar16 = opt_arg();
    bVar3 = true;
    bVar2 = true;
    goto switchD_00100d86_caseD_0;
  case 9:
    lVar16 = opt_arg();
    bVar3 = true;
    goto switchD_00100d86_caseD_0;
  case 10:
    filename = (char *)opt_arg();
    goto switchD_00100d86_caseD_0;
  case 0xb:
    uVar18 = opt_arg();
    iVar6 = opt_format(uVar18,0xffe,&local_c4);
    break;
  case 0xc:
    uVar18 = opt_arg();
    local_140 = (ENGINE *)setup_engine_methods(uVar18,0xffffffff,0);
    goto switchD_00100d86_caseD_0;
  case 0xd:
    bVar21 = true;
    goto switchD_00100d86_caseD_0;
  case 0xe:
    local_114 = 0;
    goto switchD_00100d86_caseD_0;
  case 0xf:
    local_114 = 1;
    goto switchD_00100d86_caseD_0;
  case 0x10:
    bVar4 = true;
    goto switchD_00100d86_caseD_0;
  case 0x11:
    local_110 = "etaonrishdlcupfm";
    goto switchD_00100d86_caseD_0;
  case 0x12:
    local_110 = (char *)opt_arg();
    goto switchD_00100d86_caseD_0;
  case 0x13:
    local_100 = (BIO *)opt_arg();
    goto switchD_00100d86_caseD_0;
  case 0x14:
    if ((local_148 == 0) && (local_148 = OPENSSL_sk_new_null(), local_148 == 0))
    goto switchD_00100d86_caseD_ffffffff;
    opt_arg();
    iVar6 = OPENSSL_sk_push(local_148);
    break;
  case 0x15:
    if ((local_150 == 0) && (local_150 = OPENSSL_sk_new_null(), local_150 == 0))
    goto switchD_00100d86_caseD_ffffffff;
    opt_arg();
    iVar6 = OPENSSL_sk_push(local_150);
    break;
  case 0x16:
    __nptr = (char *)opt_arg();
    lVar13 = strtol(__nptr,(char **)0x0,10);
    local_e4 = (int)lVar13;
    goto switchD_00100d86_caseD_0;
  case 0x17:
    pcVar19 = (char *)opt_unknown();
    goto switchD_00100d86_caseD_0;
  case -1:
    goto switchD_00100d86_caseD_ffffffff;
  }
  if (iVar6 != 0) goto switchD_00100d86_caseD_0;
switchD_00100d86_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar11);
LAB_00100eaa:
  local_130 = (EVP_MD_CTX *)0x0;
  data = (void *)0x0;
  pkey = (BIO *)0x0;
  b = (BIO *)0x0;
  local_120 = (BIO *)0x0;
  local_128 = (BIO *)0x0;
  goto LAB_00100ece;
LAB_00101463:
  iVar9 = OPENSSL_sk_num(local_150);
  if (iVar9 <= iVar8) goto LAB_00101476;
  uVar11 = OPENSSL_sk_value(local_150,iVar8);
  iVar9 = pkey_ctrl_string(local_a8,uVar11);
  if (iVar9 < 1) {
    EVP_PKEY_CTX_free((EVP_PKEY_CTX *)local_a8);
    BIO_printf(_bio_err,"MAC parameter error \"%s\"\n",uVar11);
    goto LAB_00101833;
  }
  iVar8 = iVar8 + 1;
  goto LAB_00101463;
LAB_00101476:
  pkey = (BIO *)app_keygen(local_a8,local_100,0,0);
  pBVar20 = local_a8;
  EVP_PKEY_CTX_free((EVP_PKEY_CTX *)local_a8);
  if (pkey == (BIO *)0x0) {
LAB_00101833:
    data = (void *)0x0;
LAB_00100ece:
    iVar6 = 1;
  }
  else {
LAB_001014a5:
    if (local_110 != (char *)0x0) {
LAB_001014ad:
      if (local_b8 == (EVP_MD *)0x0) {
        local_b8 = EVP_sha256();
        pcVar19 = "SHA256";
      }
      sVar15 = strlen(local_110);
      pBVar20 = (BIO *)0x357;
      pkey = (BIO *)EVP_PKEY_new_raw_private_key(0x357,impl,local_110,sVar15);
      if (pkey == (BIO *)0x0) goto LAB_00101833;
    }
    local_b0 = (EVP_MD_CTX *)0x0;
    local_a8 = (BIO *)0x0;
    if (bVar2) {
      local_b0 = local_130;
    }
    else {
      pBVar20 = local_128;
      lVar16 = BIO_ctrl(local_128,0x78,0,&local_b0);
      if (lVar16 < 1) {
        BIO_printf(_bio_err,"Error getting context\n");
        goto LAB_00101833;
      }
    }
    if (bVar3) {
      if (impl == (ENGINE *)0x0) {
        uVar11 = app_get0_propq();
        uVar18 = app_get0_libctx();
        iVar8 = EVP_DigestVerifyInit_ex(local_b0,&local_a8,pcVar19,uVar18,uVar11,pkey,0,pBVar20);
      }
      else {
        iVar8 = EVP_DigestVerifyInit
                          (local_b0,(EVP_PKEY_CTX **)&local_a8,local_b8,impl,(EVP_PKEY *)pkey);
      }
    }
    else if (impl == (ENGINE *)0x0) {
      uVar11 = app_get0_propq();
      auVar22 = app_get0_libctx();
      iVar8 = EVP_DigestSignInit_ex
                        (local_b0,&local_a8,pcVar19,auVar22._0_8_,uVar11,pkey,0,auVar22._8_8_);
    }
    else {
      iVar8 = EVP_DigestSignInit(local_b0,(EVP_PKEY_CTX **)&local_a8,local_b8,impl,(EVP_PKEY *)pkey)
      ;
    }
    if (iVar8 == 0) {
      BIO_printf(_bio_err,"Error setting context\n");
      goto LAB_00101833;
    }
    iVar8 = 0;
    if (local_148 != 0) {
      for (; iVar9 = OPENSSL_sk_num(local_148), iVar8 < iVar9; iVar8 = iVar8 + 1) {
        uVar11 = OPENSSL_sk_value(local_148,iVar8);
        iVar9 = pkey_ctrl_string(local_a8,uVar11);
        if (iVar9 < 1) {
          BIO_printf(_bio_err,"Signature parameter error \"%s\"\n",uVar11);
          goto LAB_00101833;
        }
      }
    }
    if (filename != (char *)0x0) {
      pBVar20 = BIO_new_file(filename,"rb");
      if (pBVar20 == (BIO *)0x0) {
        data = (void *)0x0;
        BIO_printf(_bio_err,"Error opening signature file %s\n",filename);
      }
      else {
        iVar8 = EVP_PKEY_get_size(pkey);
        data = (void *)app_malloc((long)iVar8,"signature buffer");
        iVar8 = BIO_read(pBVar20,data,iVar8);
        BIO_free(pBVar20);
        if (0 < iVar8) goto LAB_001015d1;
        BIO_printf(_bio_err,"Error reading signature file %s\n",filename);
      }
      goto LAB_00100ece;
    }
    iVar8 = 0;
    data = (void *)0x0;
LAB_001015d1:
    local_100 = (BIO *)0x0;
    pEVar17 = (EVP_MD *)0x0;
    if (!bVar2) {
LAB_00101960:
      local_108 = &local_a8;
      local_100 = BIO_push(local_128,b);
      if (local_b8 == (EVP_MD *)0x0) {
        BIO_ctrl(local_128,0x78,0,local_108);
        pEVar17 = (EVP_MD *)EVP_MD_CTX_get1_md(local_a8);
        bVar2 = false;
        local_b8 = pEVar17;
        if (pEVar17 == (EVP_MD *)0x0) goto LAB_001015ea;
      }
      pEVar17 = (EVP_MD *)EVP_MD_get0_name();
      bVar2 = false;
    }
LAB_001015ea:
    if (0 < local_e4) {
      iVar9 = EVP_MD_xof(local_b8);
      if (iVar9 == 0) {
        BIO_printf(_bio_err,"Length can only be specified for XOF\n");
      }
      else {
        if (pkey == (BIO *)0x0) {
          if (iVar7 != 0) goto LAB_00101b9e;
          goto LAB_00101746;
        }
        BIO_printf(_bio_err,"Signing key cannot be specified for XOF\n");
      }
      goto LAB_00100ece;
    }
    if (iVar7 == 0) {
LAB_00101746:
      BIO_ctrl(b,0x6a,0,_stdin);
      if (bVar2) {
        iVar6 = do_fp_oneshot_sign(local_120,local_130,b,local_e8,local_114,pkey,data,iVar8,0,
                                   "stdin");
      }
      else {
        iVar6 = do_fp(local_120,uVar10,local_100,local_e8,local_114,local_e4,pkey,data,iVar8,0,
                      pEVar17,"stdin");
      }
    }
    else {
      if ((pkey == (BIO *)0x0) || (local_114 != 0)) {
LAB_00101b9e:
        uVar11 = 0;
      }
      else {
        uVar11 = EVP_PKEY_get0_type_name(pkey);
      }
      if (iVar7 < 1) {
LAB_00101119:
        iVar6 = 0;
        goto LAB_00100ee0;
      }
      puVar1 = puVar12 + iVar7;
      do {
        lVar16 = BIO_ctrl(b,0x6c,3,(void *)*puVar12);
        if ((int)lVar16 < 1) {
          iVar6 = 1;
          perror((char *)*puVar12);
        }
        else {
          if (bVar2) {
            iVar7 = do_fp_oneshot_sign(local_120,local_130,b,local_e8,local_114,pkey,data,iVar8,
                                       uVar11,*puVar12);
          }
          else {
            iVar7 = do_fp(local_120,uVar10,local_100,local_e8,local_114,local_e4,pkey,data,iVar8,
                          uVar11,pEVar17,*puVar12);
          }
          if (iVar7 != 0) {
            iVar6 = 1;
          }
          BIO_ctrl(local_128,1,0,(void *)0x0);
        }
        puVar12 = puVar12 + 1;
      } while (puVar1 != puVar12);
    }
    if (iVar6 == 0) goto LAB_00100ee0;
  }
LAB_00100ed4:
  ERR_print_errors(_bio_err);
LAB_00100ee0:
  CRYPTO_clear_free(uVar10,0x2000,"apps/dgst.c",0x1e9);
  BIO_free(b);
  CRYPTO_free(local_c0);
  BIO_free_all(local_120);
  EVP_MD_free(local_b8);
  EVP_PKEY_free((EVP_PKEY *)pkey);
  EVP_MD_CTX_free(local_130);
  OPENSSL_sk_free(local_148);
  OPENSSL_sk_free(local_150);
  CRYPTO_free(data);
  BIO_free(local_128);
  release_engine(local_140);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 dgst_main_cold(void)

{
  long lVar1;
  undefined8 *unaff_RBP;
  EVP_PKEY *unaff_R12;
  BIO *unaff_R13;
  void *unaff_R14;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  BIO *in_stack_00000030;
  BIO *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  int in_stack_00000060;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  void *in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_00000118;
  
  do {
    perror((char *)*unaff_RBP);
    while( true ) {
      unaff_RBP = unaff_RBP + 1;
      if (in_stack_00000050 == unaff_RBP) {
        ERR_print_errors(_bio_err);
        CRYPTO_clear_free(in_stack_00000020,0x2000,"apps/dgst.c",0x1e9);
        BIO_free(unaff_R13);
        CRYPTO_free(in_stack_00000098);
        BIO_free_all(in_stack_00000038);
        EVP_MD_free(in_stack_000000a0);
        EVP_PKEY_free(unaff_R12);
        EVP_MD_CTX_free(in_stack_00000028);
        OPENSSL_sk_free(in_stack_00000010);
        OPENSSL_sk_free(in_stack_00000008);
        CRYPTO_free(unaff_R14);
        BIO_free(in_stack_00000030);
        release_engine(in_stack_00000018);
        if (in_stack_00000118 == *(long *)(in_FS_OFFSET + 0x28)) {
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar1 = BIO_ctrl(unaff_R13,0x6c,3,(void *)*unaff_RBP);
      if ((int)lVar1 < 1) break;
      if (in_stack_00000060 == 0) {
        do_fp(in_stack_00000038,in_stack_00000020,in_stack_00000058,uStack0000000000000070,
              in_stack_00000040._4_4_,uStack0000000000000074);
      }
      else {
        do_fp_oneshot_sign(in_stack_00000038,in_stack_00000028);
      }
      BIO_ctrl(in_stack_00000030,1,0,(void *)0x0);
    }
  } while( true );
}


