
long buffer_callback_ctrl(long param_1,int param_2,fp *param_3)

{
  long lVar1;
  
  if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
    lVar1 = BIO_callback_ctrl(*(BIO **)(param_1 + 0x48),param_2,param_3);
    return lVar1;
  }
  return 0;
}



undefined8 buffer_new(long param_1)

{
  undefined4 *ptr;
  void *pvVar1;
  
  ptr = (undefined4 *)CRYPTO_zalloc(0x28,"crypto/bio/bf_buff.c",0x2f);
  if (ptr != (undefined4 *)0x0) {
    *ptr = 0x1000;
    pvVar1 = CRYPTO_malloc(0x1000,"crypto/bio/bf_buff.c",0x34);
    *(void **)(ptr + 2) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      ptr[1] = 0x1000;
      pvVar1 = CRYPTO_malloc(0x1000,"crypto/bio/bf_buff.c",0x3a);
      *(void **)(ptr + 6) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        *(undefined4 *)(param_1 + 0x28) = 1;
        *(undefined4 **)(param_1 + 0x40) = ptr;
        *(undefined4 *)(param_1 + 0x30) = 0;
        return 1;
      }
      CRYPTO_free(*(void **)(ptr + 2));
      CRYPTO_free(ptr);
      return 0;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



int buffer_gets(BIO *param_1,char *param_2,int param_3)

{
  char cVar1;
  bio_st *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  _func_603 *p_Var8;
  
  param_3 = param_3 + -1;
  iVar6 = 0;
  pbVar2 = param_1->prev_bio;
  BIO_clear_flags(param_1,0xf);
  do {
    p_Var8 = pbVar2->callback;
    iVar3 = *(int *)&pbVar2->cb_arg;
    while (0 < iVar3) {
      iVar5 = *(int *)((long)&pbVar2->cb_arg + 4);
      if (0 < param_3) {
        p_Var8 = p_Var8 + iVar5;
        iVar5 = 0;
        pcVar7 = param_2;
        do {
          cVar1 = (char)*p_Var8;
          param_2 = pcVar7 + 1;
          iVar5 = iVar5 + 1;
          *pcVar7 = cVar1;
          if (cVar1 == '\n') {
            iVar6 = iVar6 + iVar5;
            pbVar2->cb_arg =
                 (char *)CONCAT44(iVar5 + (int)((ulong)pbVar2->cb_arg >> 0x20),
                                  (int)pbVar2->cb_arg - iVar5);
            goto LAB_001001d7;
          }
          iVar3 = *(int *)&pbVar2->cb_arg;
          p_Var8 = p_Var8 + 1;
          iVar4 = param_3;
          if (iVar3 <= param_3) {
            iVar4 = iVar3;
          }
          pcVar7 = param_2;
        } while (iVar5 < iVar4);
        iVar3 = iVar3 - iVar5;
        param_3 = param_3 - iVar5;
        iVar6 = iVar6 + iVar5;
        iVar5 = *(int *)((long)&pbVar2->cb_arg + 4) + iVar5;
      }
      *(int *)&pbVar2->cb_arg = iVar3;
      *(int *)((long)&pbVar2->cb_arg + 4) = iVar5;
      if (param_3 == 0) {
LAB_001001d7:
        *param_2 = '\0';
        return iVar6;
      }
      p_Var8 = pbVar2->callback;
      iVar3 = *(int *)&pbVar2->cb_arg;
    }
    iVar3 = BIO_read(*(BIO **)&param_1->references,p_Var8,*(int *)&pbVar2->method);
    if (iVar3 < 1) {
      BIO_copy_next_retry(param_1);
      *param_2 = '\0';
      if (0 < iVar6) {
        return iVar6;
      }
      if (iVar3 != 0) {
        iVar6 = iVar3;
      }
      return iVar6;
    }
    *(int *)&pbVar2->cb_arg = iVar3;
    *(undefined4 *)((long)&pbVar2->cb_arg + 4) = 0;
  } while( true );
}



int buffer_read(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  int iVar2;
  int iVar3;
  BIO *b;
  int iVar4;
  
  if (param_2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    pbVar1 = param_1->prev_bio;
    iVar4 = 0;
    if ((pbVar1 != (bio_st *)0x0) && (iVar4 = 0, *(long *)&param_1->references != 0)) {
      BIO_clear_flags(param_1,0xf);
      iVar2 = *(int *)&pbVar1->cb_arg;
      if (iVar2 != 0) {
        iVar4 = 0;
        goto LAB_001002a3;
      }
      b = *(BIO **)&param_1->references;
      iVar4 = 0;
      if (*(int *)&pbVar1->method < param_3) {
LAB_00100362:
        while (iVar2 = BIO_read(b,param_2,param_3), 0 < iVar2) {
          iVar4 = iVar4 + iVar2;
          if (param_3 == iVar2) {
            return iVar4;
          }
          b = *(BIO **)&param_1->references;
          param_3 = param_3 - iVar2;
          param_2 = (void *)((long)param_2 + (long)iVar2);
        }
        BIO_copy_next_retry(param_1);
        if (iVar2 == 0) {
          return iVar4;
        }
        if (0 < iVar4) {
          return iVar4;
        }
        return iVar2;
      }
      iVar2 = BIO_read(b,pbVar1->callback,*(int *)&pbVar1->method);
      iVar4 = 0;
      while (0 < iVar2) {
        *(undefined4 *)((long)&pbVar1->cb_arg + 4) = 0;
        *(int *)&pbVar1->cb_arg = iVar2;
LAB_001002a3:
        iVar3 = iVar2;
        if (param_3 <= iVar2) {
          iVar3 = param_3;
        }
        memcpy(param_2,pbVar1->callback + *(int *)((long)&pbVar1->cb_arg + 4),(long)iVar3);
        iVar4 = iVar4 + iVar3;
        pbVar1->cb_arg =
             (char *)CONCAT44((int)((ulong)pbVar1->cb_arg >> 0x20) + iVar3,
                              (int)pbVar1->cb_arg - iVar3);
        if (param_3 <= iVar2) {
          return iVar4;
        }
        param_3 = param_3 - iVar3;
        b = *(BIO **)&param_1->references;
        param_2 = (void *)((long)param_2 + (long)iVar3);
        if (*(int *)&pbVar1->method < param_3) goto LAB_00100362;
        iVar2 = BIO_read(b,pbVar1->callback,*(int *)&pbVar1->method);
      }
      BIO_copy_next_retry(param_1);
      if ((iVar4 < 1) && (iVar2 != 0)) {
        iVar4 = iVar2;
      }
    }
  }
  return iVar4;
}



size_t buffer_ctrl(BIO *param_1,int param_2,size_t param_3,BIO *param_4)

{
  uint uVar1;
  bio_st *pbVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  code *pcVar21;
  code *pcVar22;
  code *pcVar23;
  code *pcVar24;
  code *pcVar25;
  code *pcVar26;
  undefined1 auVar27 [14];
  undefined1 auVar28 [12];
  unkbyte10 Var29;
  undefined1 auVar30 [12];
  unkbyte9 Var31;
  undefined6 uVar32;
  undefined2 uVar33;
  uint uVar34;
  int iVar35;
  _func_603 *p_Var36;
  size_t sVar37;
  _func_603 *p_Var38;
  void *pvVar39;
  _func_603 *p_Var40;
  BIO *pBVar41;
  void *ptr;
  int iVar42;
  int iVar43;
  long in_FS_OFFSET;
  long lVar44;
  long lVar45;
  undefined4 uVar47;
  char cVar56;
  undefined8 uVar49;
  short sVar57;
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  undefined1 auVar64 [16];
  undefined4 uVar65;
  short sVar71;
  short sVar72;
  short sVar74;
  short sVar75;
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 local_41;
  long local_40;
  undefined4 uVar46;
  undefined6 uVar48;
  undefined1 auVar51 [12];
  undefined1 auVar50 [12];
  undefined1 auVar52 [14];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [12];
  undefined1 auVar68 [16];
  long lVar73;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  
  pbVar2 = param_1->prev_bio;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x1d < param_2) {
    iVar35 = (int)param_3;
    if (param_2 == 0x75) {
      iVar42 = iVar35;
      iVar43 = iVar35;
      if (param_4 != (BIO *)0x0) {
        if (*(int *)&param_4->method == 0) {
          iVar43 = *(int *)((long)&pbVar2->method + 4);
        }
        else {
          iVar42 = *(int *)&pbVar2->method;
        }
      }
      pvVar39 = *(void **)&pbVar2->init;
      p_Var38 = pbVar2->callback;
      if ((iVar42 < 0x1001) || (*(int *)&pbVar2->method == iVar42)) {
        if (iVar43 < 0x1001) goto LAB_00100ae0;
        ptr = pvVar39;
        if (iVar43 != *(int *)((long)&pbVar2->method + 4)) goto LAB_00100b06;
      }
      else {
        if (((long)param_3 < 1) ||
           (p_Var38 = (_func_603 *)CRYPTO_malloc(iVar35,"crypto/bio/bf_buff.c",0x143),
           p_Var38 == (_func_603 *)0x0)) goto LAB_0010080b;
        if ((0x1000 < iVar43) && (*(int *)((long)&pbVar2->method + 4) != iVar43)) {
LAB_00100b06:
          pvVar39 = CRYPTO_malloc(iVar35,"crypto/bio/bf_buff.c",0x148);
          if (pvVar39 == (void *)0x0) {
            if (pbVar2->callback != p_Var38) {
              sVar37 = 0;
              CRYPTO_free(p_Var38);
              goto LAB_001006d0;
            }
            goto LAB_0010080b;
          }
        }
        if (pbVar2->callback != p_Var38) {
          CRYPTO_free(pbVar2->callback);
          pbVar2->callback = p_Var38;
          pbVar2->cb_arg = (char *)0x0;
          *(int *)&pbVar2->method = iVar42;
        }
        ptr = *(void **)&pbVar2->init;
      }
      if (pvVar39 != ptr) {
        CRYPTO_free(ptr);
        *(void **)&pbVar2->init = pvVar39;
        pbVar2->flags = 0;
        pbVar2->retry_reason = 0;
        *(int *)((long)&pbVar2->method + 4) = iVar43;
      }
    }
    else {
      if (param_2 < 0x76) {
        if (param_2 == 0x65) {
          if (*(long *)&param_1->references == 0) goto LAB_0010080b;
          BIO_clear_flags(param_1,0xf);
          sVar37 = BIO_ctrl(*(BIO **)&param_1->references,0x65,param_3,param_4);
          BIO_copy_next_retry(param_1);
        }
        else {
          if (param_2 != 0x74) goto switchD_001003f5_caseD_4;
          uVar1 = *(uint *)&pbVar2->cb_arg;
          p_Var38 = pbVar2->callback;
          if ((int)uVar1 < 1) goto LAB_0010080b;
          iVar35 = *(int *)((long)&pbVar2->cb_arg + 4);
          if (uVar1 - 1 < 0xf) {
            uVar34 = 0;
            sVar37 = 0;
          }
          else {
            lVar44 = 0;
            lVar45 = 0;
            p_Var36 = p_Var38 + iVar35;
            p_Var40 = p_Var36 + (ulong)(uVar1 >> 4) * 0x10;
            do {
              cVar56 = (char)*p_Var36;
              pcVar12 = p_Var36 + 1;
              pcVar13 = p_Var36 + 2;
              pcVar14 = p_Var36 + 3;
              pcVar15 = p_Var36 + 4;
              pcVar16 = p_Var36 + 5;
              pcVar17 = p_Var36 + 6;
              pcVar18 = p_Var36 + 7;
              pcVar19 = p_Var36 + 8;
              pcVar20 = p_Var36 + 9;
              pcVar21 = p_Var36 + 10;
              pcVar22 = p_Var36 + 0xb;
              pcVar23 = p_Var36 + 0xc;
              pcVar24 = p_Var36 + 0xd;
              pcVar25 = p_Var36 + 0xe;
              pcVar26 = p_Var36 + 0xf;
              p_Var36 = p_Var36 + 0x10;
              bVar3 = cVar56 == _LC1;
              cVar56 = -(*pcVar18 == UNK_00100f77);
              bVar4 = *pcVar19 == UNK_00100f78;
              bVar5 = *pcVar20 == UNK_00100f79;
              bVar6 = *pcVar21 == UNK_00100f7a;
              bVar7 = *pcVar22 == UNK_00100f7b;
              uVar33 = CONCAT11(-(*pcVar18 == UNK_00100f77),cVar56);
              uVar47 = CONCAT31(CONCAT21(uVar33,-(*pcVar17 == UNK_00100f76)),
                                -(*pcVar17 == UNK_00100f76));
              uVar32 = CONCAT51(CONCAT41(uVar47,-(*pcVar16 == UNK_00100f75)),
                                -(*pcVar16 == UNK_00100f75));
              Var31 = CONCAT72(CONCAT61(uVar32,-(*pcVar15 == UNK_00100f74)),
                               CONCAT11(-(*pcVar15 == UNK_00100f74),cVar56));
              lVar73 = (long)((unkuint9)Var31 >> 8);
              Var29 = CONCAT91(CONCAT81(lVar73,-(*pcVar14 == UNK_00100f73)),
                               -(*pcVar14 == UNK_00100f73));
              auVar28._2_10_ = Var29;
              auVar28[1] = -(*pcVar13 == UNK_00100f72);
              auVar28[0] = -(*pcVar13 == UNK_00100f72);
              auVar27._2_12_ = auVar28;
              auVar27[1] = -(*pcVar12 == UNK_00100f71);
              auVar27[0] = -(*pcVar12 == UNK_00100f71);
              auVar67._0_2_ = CONCAT11(-bVar3,-bVar3);
              auVar67._2_14_ = auVar27;
              uVar46 = CONCAT13(-bVar5,CONCAT12(-bVar5,CONCAT11(-bVar4,-bVar4)));
              uVar48 = CONCAT15(-bVar6,CONCAT14(-bVar6,uVar46));
              uVar49 = CONCAT17(-bVar7,CONCAT16(-bVar7,uVar48));
              auVar50._0_10_ =
                   CONCAT19(-(*pcVar23 == UNK_00100f7c),CONCAT18(-(*pcVar23 == UNK_00100f7c),uVar49)
                           );
              auVar50[10] = -(*pcVar24 == UNK_00100f7d);
              auVar50[0xb] = -(*pcVar24 == UNK_00100f7d);
              auVar52[0xc] = -(*pcVar25 == UNK_00100f7e);
              auVar52._0_12_ = auVar50;
              auVar52[0xd] = -(*pcVar25 == UNK_00100f7e);
              auVar53[0xe] = -(*pcVar26 == UNK_00100f7f);
              auVar53._0_14_ = auVar52;
              auVar53[0xf] = -(*pcVar26 == UNK_00100f7f);
              sVar71 = (short)Var29;
              sVar72 = (short)((unkuint9)Var31 >> 8);
              uVar8 = (ushort)(sVar72 < 0);
              sVar74 = (short)uVar32;
              uVar10 = (ushort)(sVar74 < 0);
              sVar75 = (short)uVar47;
              sVar57 = (short)((unkuint10)auVar50._0_10_ >> 0x40);
              uVar9 = (ushort)(sVar57 < 0);
              uVar11 = (ushort)(auVar50._10_2_ < 0);
              auVar79._0_12_ = auVar67._0_12_;
              auVar79._12_2_ = sVar71;
              auVar79._14_2_ = -(ushort)(sVar71 < 0);
              auVar78._12_4_ = auVar79._12_4_;
              auVar78._0_10_ = auVar67._0_10_;
              auVar78._10_2_ = -(ushort)(auVar28._0_2_ < 0);
              auVar77._10_6_ = auVar78._10_6_;
              auVar77._0_8_ = auVar67._0_8_;
              auVar77._8_2_ = auVar28._0_2_;
              auVar30._4_8_ = auVar77._8_8_;
              auVar30._2_2_ = -(ushort)(auVar27._0_2_ < 0);
              auVar30._0_2_ = auVar27._0_2_;
              auVar76._0_4_ = CONCAT22(-(ushort)bVar3,auVar67._0_2_);
              auVar76._4_12_ = auVar30;
              uVar65 = CONCAT22(-uVar8,sVar72);
              auVar66._0_8_ = CONCAT26(-uVar10,CONCAT24(sVar74,uVar65));
              auVar66._8_2_ = sVar75;
              auVar66._10_2_ = -(ushort)(sVar75 < 0);
              auVar68._12_2_ = uVar33;
              auVar68._0_12_ = auVar66;
              auVar68._14_2_ = -(ushort)(lVar73 < 0);
              auVar63._12_2_ = (short)((ulong)uVar49 >> 0x30);
              auVar63._0_12_ = auVar50;
              auVar63._14_2_ = -(ushort)bVar7;
              auVar62._12_4_ = auVar63._12_4_;
              auVar62._10_2_ = -(ushort)bVar6;
              auVar62._0_10_ = auVar50._0_10_;
              auVar61._10_6_ = auVar62._10_6_;
              auVar61._8_2_ = (short)((uint6)uVar48 >> 0x20);
              auVar61._0_8_ = uVar49;
              auVar60._8_8_ = auVar61._8_8_;
              auVar60._6_2_ = -(ushort)bVar5;
              auVar60._0_6_ = uVar48;
              auVar59._6_10_ = auVar60._6_10_;
              auVar59._4_2_ = (short)((uint)uVar46 >> 0x10);
              auVar59._0_4_ = uVar46;
              auVar58._4_12_ = auVar59._4_12_;
              auVar58._0_4_ = CONCAT22(-(ushort)bVar4,CONCAT11(-bVar4,-bVar4));
              uVar47 = CONCAT22(-uVar9,sVar57);
              auVar51._0_8_ = CONCAT26(-uVar11,CONCAT24(auVar50._10_2_,uVar47));
              auVar51._8_2_ = auVar52._12_2_;
              auVar51._10_2_ = -(ushort)(auVar52._12_2_ < 0);
              auVar54._12_2_ = auVar53._14_2_;
              auVar54._0_12_ = auVar51;
              auVar54._14_2_ = -(ushort)(auVar53._14_2_ < 0);
              auVar83._0_8_ = auVar76._0_8_;
              auVar83._8_4_ = auVar30._0_4_;
              auVar83._12_4_ = -(uint)(auVar30._0_4_ < 0);
              auVar80._0_8_ = CONCAT44(-(uint)(auVar77._8_4_ < 0),auVar77._8_4_);
              auVar80._8_4_ = auVar78._12_4_;
              auVar80._12_4_ = -(uint)(auVar77._10_6_ < 0);
              auVar82._8_4_ = (int)((ulong)auVar66._0_8_ >> 0x20);
              auVar82._0_8_ = auVar66._0_8_;
              auVar82._12_4_ = -(uint)(uVar10 != 0);
              auVar69._0_8_ = CONCAT44(-(uint)(auVar66._8_4_ < 0),auVar66._8_4_);
              auVar69._8_4_ = auVar68._12_4_;
              auVar69._12_4_ = -(uint)(auVar68._12_4_ < 0);
              auVar81._0_8_ = auVar58._0_8_;
              auVar81._8_4_ = auVar59._4_4_;
              auVar81._12_4_ = -(uint)(auVar59._4_4_ < 0);
              auVar64._0_8_ = CONCAT44(-(uint)(auVar61._8_4_ < 0),auVar61._8_4_);
              auVar64._8_4_ = auVar62._12_4_;
              auVar64._12_4_ = -(uint)(auVar61._10_6_ < 0);
              auVar70._8_4_ = (int)((ulong)auVar51._0_8_ >> 0x20);
              auVar70._0_8_ = auVar51._0_8_;
              auVar70._12_4_ = -(uint)(uVar11 != 0);
              auVar55._0_8_ = CONCAT44(-(uint)(auVar51._8_4_ < 0),auVar51._8_4_);
              auVar55._8_4_ = auVar54._12_4_;
              auVar55._12_4_ = -(uint)(auVar54._12_4_ < 0);
              lVar44 = (((((((lVar44 - CONCAT44(-(uint)(bVar3 != 0),auVar76._0_4_)) - auVar80._0_8_)
                           - CONCAT44(-(uint)(uVar8 != 0),uVar65)) - auVar69._0_8_) -
                         CONCAT44(-(uint)(bVar4 != 0),auVar58._0_4_)) - auVar64._0_8_) -
                       CONCAT44(-(uint)(uVar9 != 0),uVar47)) - auVar55._0_8_;
              lVar45 = (((((((lVar45 - auVar83._8_8_) - auVar80._8_8_) - auVar82._8_8_) -
                          auVar69._8_8_) - auVar81._8_8_) - auVar64._8_8_) - auVar70._8_8_) -
                       auVar55._8_8_;
            } while (p_Var40 != p_Var36);
            uVar34 = uVar1 & 0xfffffff0;
            sVar37 = lVar44 + lVar45;
            if ((uVar1 & 0xf) == 0) goto LAB_001006d0;
          }
          if (p_Var38[(int)(iVar35 + uVar34)] == (_func_603)0xa) {
            sVar37 = sVar37 + 1;
          }
          if ((int)(uVar34 + 1) < (int)uVar1) {
            if (p_Var38[(int)(uVar34 + 1 + iVar35)] == (_func_603)0xa) {
              sVar37 = sVar37 + 1;
            }
            if ((int)(uVar34 + 2) < (int)uVar1) {
              if (p_Var38[(int)(uVar34 + 2 + iVar35)] == (_func_603)0xa) {
                sVar37 = sVar37 + 1;
              }
              if ((int)(uVar34 + 3) < (int)uVar1) {
                if (p_Var38[(int)(uVar34 + 3 + iVar35)] == (_func_603)0xa) {
                  sVar37 = sVar37 + 1;
                }
                if ((int)(uVar34 + 4) < (int)uVar1) {
                  if (p_Var38[(int)(uVar34 + 4 + iVar35)] == (_func_603)0xa) {
                    sVar37 = sVar37 + 1;
                  }
                  if ((int)(uVar34 + 5) < (int)uVar1) {
                    if (p_Var38[(int)(uVar34 + 5 + iVar35)] == (_func_603)0xa) {
                      sVar37 = sVar37 + 1;
                    }
                    if ((int)(uVar34 + 6) < (int)uVar1) {
                      if (p_Var38[(int)(uVar34 + 6 + iVar35)] == (_func_603)0xa) {
                        sVar37 = sVar37 + 1;
                      }
                      if ((int)(uVar34 + 7) < (int)uVar1) {
                        if (p_Var38[(int)(uVar34 + 7 + iVar35)] == (_func_603)0xa) {
                          sVar37 = sVar37 + 1;
                        }
                        if ((int)(uVar34 + 8) < (int)uVar1) {
                          if (p_Var38[(int)(uVar34 + 8 + iVar35)] == (_func_603)0xa) {
                            sVar37 = sVar37 + 1;
                          }
                          if ((int)(uVar34 + 9) < (int)uVar1) {
                            if (p_Var38[(int)(uVar34 + 9 + iVar35)] == (_func_603)0xa) {
                              sVar37 = sVar37 + 1;
                            }
                            if ((int)(uVar34 + 10) < (int)uVar1) {
                              if (p_Var38[(int)(uVar34 + 10 + iVar35)] == (_func_603)0xa) {
                                sVar37 = sVar37 + 1;
                              }
                              if ((int)(uVar34 + 0xb) < (int)uVar1) {
                                if (p_Var38[(int)(uVar34 + 0xb + iVar35)] == (_func_603)0xa) {
                                  sVar37 = sVar37 + 1;
                                }
                                if ((int)(uVar34 + 0xc) < (int)uVar1) {
                                  if (p_Var38[(int)(uVar34 + 0xc + iVar35)] == (_func_603)0xa) {
                                    sVar37 = sVar37 + 1;
                                  }
                                  if ((int)(uVar34 + 0xd) < (int)uVar1) {
                                    if (p_Var38[(int)(uVar34 + 0xd + iVar35)] == (_func_603)0xa) {
                                      sVar37 = sVar37 + 1;
                                    }
                                    if (((int)(uVar34 + 0xe) < (int)uVar1) &&
                                       (p_Var38[(int)(uVar34 + 0xe + iVar35)] == (_func_603)0xa)) {
                                      sVar37 = sVar37 + 1;
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
        goto LAB_001006d0;
      }
      if (param_2 != 0x7a) {
switchD_001003f5_caseD_4:
        pBVar41 = *(BIO **)&param_1->references;
        if (pBVar41 != (BIO *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00100727:
            sVar37 = BIO_ctrl(pBVar41,param_2,param_3,param_4);
            return sVar37;
          }
          goto LAB_00100bc2;
        }
        goto LAB_0010080b;
      }
      if ((long)*(int *)&pbVar2->method < (long)param_3) {
        if (((long)param_3 < 1) ||
           (p_Var38 = (_func_603 *)CRYPTO_malloc(iVar35,"crypto/bio/bf_buff.c",0x124),
           p_Var38 == (_func_603 *)0x0)) goto LAB_0010080b;
        CRYPTO_free(pbVar2->callback);
        pbVar2->callback = p_Var38;
      }
      else {
        p_Var38 = pbVar2->callback;
      }
      *(int *)&pbVar2->cb_arg = iVar35;
      *(undefined4 *)((long)&pbVar2->cb_arg + 4) = 0;
      memcpy(p_Var38,param_4,(long)iVar35);
    }
LAB_00100ae0:
    sVar37 = 1;
    goto LAB_001006d0;
  }
  switch(param_2) {
  case 1:
    pBVar41 = *(BIO **)&param_1->references;
    pbVar2->cb_arg = (char *)0x0;
    pbVar2->flags = 0;
    pbVar2->retry_reason = 0;
    if (pBVar41 != (BIO *)0x0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100bc2;
      param_2 = 1;
      goto LAB_00100727;
    }
    goto LAB_0010080b;
  case 2:
    if (*(int *)&pbVar2->cb_arg < 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pBVar41 = *(BIO **)&param_1->references;
        param_2 = 2;
        goto LAB_00100727;
      }
      goto LAB_00100bc2;
    }
LAB_0010080b:
    sVar37 = 0;
    break;
  case 3:
    sVar37 = (size_t)pbVar2->flags;
    break;
  default:
    goto switchD_001003f5_caseD_4;
  case 10:
    sVar37 = (size_t)*(int *)&pbVar2->cb_arg;
    if (sVar37 == 0) {
      pBVar41 = *(BIO **)&param_1->references;
      if (pBVar41 != (BIO *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          param_2 = 10;
          goto LAB_00100727;
        }
        goto LAB_00100bc2;
      }
      goto LAB_0010080b;
    }
    break;
  case 0xb:
    pBVar41 = *(BIO **)&param_1->references;
    if (pBVar41 == (BIO *)0x0) goto LAB_0010080b;
    if (0 < pbVar2->flags) {
      while( true ) {
        BIO_clear_flags(param_1,0xf);
        if (pbVar2->flags < 1) break;
        iVar35 = BIO_write(*(BIO **)&param_1->references,
                           (void *)((long)pbVar2->retry_reason + *(long *)&pbVar2->init),
                           pbVar2->flags);
        sVar37 = (size_t)iVar35;
        BIO_copy_next_retry(param_1);
        if (iVar35 < 1) goto LAB_001006d0;
        uVar49._0_4_ = pbVar2->flags;
        uVar49._4_4_ = pbVar2->retry_reason;
        uVar49 = CONCAT44((int)((ulong)uVar49 >> 0x20) + iVar35,(int)uVar49 - iVar35);
        pbVar2->flags = (int)uVar49;
        pbVar2->retry_reason = (int)((ulong)uVar49 >> 0x20);
      }
      pbVar2->flags = 0;
      pbVar2->retry_reason = 0;
      pBVar41 = *(BIO **)&param_1->references;
    }
    sVar37 = BIO_ctrl(pBVar41,0xb,param_3,param_4);
    BIO_copy_next_retry(param_1);
    break;
  case 0xc:
    lVar44 = BIO_int_ctrl(param_4,0x75,(long)*(int *)&pbVar2->method,0);
    if (lVar44 < 1) goto LAB_0010080b;
    lVar44 = BIO_int_ctrl(param_4,0x75,(long)*(int *)((long)&pbVar2->method + 4),1);
    sVar37 = (size_t)(0 < lVar44);
    break;
  case 0xd:
    sVar37 = (size_t)pbVar2->flags;
    if (sVar37 == 0) {
      pBVar41 = *(BIO **)&param_1->references;
      if (pBVar41 != (BIO *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          param_2 = 0xd;
          goto LAB_00100727;
        }
        goto LAB_00100bc2;
      }
      goto LAB_0010080b;
    }
    break;
  case 0x1d:
    buffer_read(param_1,&local_41,0);
    sVar37 = (long)*(int *)&pbVar2->cb_arg;
    if ((long)param_3 < (long)*(int *)&pbVar2->cb_arg) {
      sVar37 = param_3;
    }
    memcpy(param_4,pbVar2->callback + *(int *)((long)&pbVar2->cb_arg + 4),sVar37);
  }
LAB_001006d0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar37;
  }
LAB_00100bc2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 buffer_free(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    CRYPTO_free(*(void **)(lVar1 + 8));
    CRYPTO_free(*(void **)(lVar1 + 0x18));
    CRYPTO_free(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 1;
  }
  return 0;
}



int buffer_write_part_0(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pbVar1 = param_1->prev_bio;
  if (pbVar1 == (bio_st *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    if (*(long *)&param_1->references != 0) {
      BIO_clear_flags(param_1,0xf);
      iVar3 = *(int *)((long)&pbVar1->method + 4);
      iVar4 = pbVar1->flags;
      iVar6 = pbVar1->retry_reason;
      iVar5 = iVar4 + iVar6;
      iVar8 = iVar3 - iVar5;
      iVar2 = param_3;
      if (iVar8 < param_3) {
        do {
          if (iVar4 != 0) {
            if (0 < iVar8) {
              param_3 = param_3 - iVar8;
              iVar7 = iVar7 + iVar8;
              memcpy((void *)((long)iVar5 + *(long *)&pbVar1->init),param_2,(long)iVar8);
              iVar6 = pbVar1->retry_reason;
              param_2 = (void *)((long)param_2 + (long)iVar8);
              iVar4 = pbVar1->flags + iVar8;
              pbVar1->flags = iVar4;
            }
            do {
              iVar4 = BIO_write(*(BIO **)&param_1->references,
                                (void *)((long)iVar6 + *(long *)&pbVar1->init),iVar4);
              if (iVar4 < 1) goto LAB_00100d6b;
              iVar6 = pbVar1->retry_reason + iVar4;
              iVar4 = pbVar1->flags - iVar4;
              pbVar1->retry_reason = iVar6;
              pbVar1->flags = iVar4;
            } while (iVar4 != 0);
            iVar3 = *(int *)((long)&pbVar1->method + 4);
          }
          pbVar1->retry_reason = 0;
          while (iVar3 <= param_3) {
            iVar4 = BIO_write(*(BIO **)&param_1->references,param_2,param_3);
            if (iVar4 < 1) {
LAB_00100d6b:
              BIO_copy_next_retry(param_1);
              if (iVar4 == 0) {
                return iVar7;
              }
              if (0 < iVar7) {
                return iVar7;
              }
              return iVar4;
            }
            iVar7 = iVar7 + iVar4;
            param_2 = (void *)((long)param_2 + (long)iVar4);
            param_3 = param_3 - iVar4;
            if (param_3 == 0) {
              return iVar7;
            }
            iVar3 = *(int *)((long)&pbVar1->method + 4);
          }
          iVar4 = pbVar1->flags;
          iVar6 = pbVar1->retry_reason;
          iVar5 = iVar4 + iVar6;
          iVar8 = iVar3 - iVar5;
        } while (iVar8 < param_3);
        iVar2 = iVar7 + param_3;
      }
      iVar7 = iVar2;
      memcpy((void *)((long)iVar5 + *(long *)&pbVar1->init),param_2,(long)param_3);
      pbVar1->flags = pbVar1->flags + param_3;
    }
  }
  return iVar7;
}



undefined8 buffer_write(undefined8 param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (0 < param_3)) {
    uVar1 = buffer_write_part_0();
    return uVar1;
  }
  return 0;
}



undefined8 buffer_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_2);
  if (0 < (int)sVar1) {
    uVar2 = buffer_write_part_0(param_1,param_2,sVar1 & 0xffffffff);
    return uVar2;
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_f_buffer(void)

{
  return (BIO_METHOD *)methods_buffer;
}


