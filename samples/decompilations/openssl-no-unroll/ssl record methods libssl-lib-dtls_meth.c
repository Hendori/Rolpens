
ulong satsub64be(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  uVar3 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
          (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
          (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  uVar4 = uVar3 - uVar1;
  if ((uVar3 <= uVar1) || (uVar2 = 0x80, -1 < (long)uVar4)) {
    if ((uVar3 < uVar1) && (0 < (long)uVar4)) {
      uVar2 = 0xffffff80;
    }
    else {
      uVar2 = 0x80;
      if (((long)uVar4 < 0x81) && (uVar2 = 0xffffff80, -0x81 < (long)uVar4)) {
        uVar2 = uVar4 & 0xffffffff;
      }
    }
  }
  return uVar2;
}



void dtls_set_in_init(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1110) = param_2;
  return;
}



long dtls_get_max_record_overhead(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x1020) != 0) {
    uVar2 = EVP_CIPHER_CTX_get0_cipher();
    iVar1 = EVP_CIPHER_get_mode(uVar2);
    if (iVar1 == 2) {
      iVar1 = EVP_CIPHER_CTX_get_block_size(*(undefined8 *)(param_1 + 0x1020));
      lVar3 = (long)iVar1;
      goto LAB_00100088;
    }
  }
  lVar3 = 0;
LAB_00100088:
  return lVar3 + 0xd + *(long *)(param_1 + 0x10d8) + *(long *)(param_1 + 0x1030);
}



bool dtls_free(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  pitem *ppVar4;
  pqueue p_Var5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  uVar6 = 1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x6c0) != 0) {
    uVar6 = BIO_write_ex(*(undefined8 *)(param_1 + 0x48),
                         *(long *)(param_1 + 0x6b8) + *(long *)(param_1 + 0x6a0),
                         *(long *)(param_1 + 0x6c0),auStack_38);
    *(undefined8 *)(param_1 + 0x6c0) = 0;
  }
  p_Var5 = *(pqueue *)(param_1 + 0x10e0);
  if (p_Var5 != (pqueue)0x0) {
    while (ppVar4 = pqueue_pop(p_Var5), ppVar4 != (pitem *)0x0) {
      puVar1 = (undefined8 *)ppVar4->data;
      uVar2 = BIO_write_ex(*(undefined8 *)(param_1 + 0x48),*puVar1,puVar1[1],auStack_38);
      uVar6 = uVar6 & uVar2;
      CRYPTO_free((void *)puVar1[2]);
      CRYPTO_free(ppVar4->data);
      pitem_free(ppVar4);
      p_Var5 = *(pqueue *)(param_1 + 0x10e0);
    }
    pqueue_free(*(pqueue *)(param_1 + 0x10e0));
  }
  p_Var5 = *(pqueue *)(param_1 + 0x10e8);
  if (p_Var5 != (pqueue)0x0) {
    while (ppVar4 = pqueue_pop(p_Var5), ppVar4 != (pitem *)0x0) {
      CRYPTO_free(*(void **)((long)ppVar4->data + 0x10));
      CRYPTO_free(ppVar4->data);
      pitem_free(ppVar4);
      p_Var5 = *(pqueue *)(param_1 + 0x10e8);
    }
    pqueue_free(*(pqueue *)(param_1 + 0x10e8));
  }
  iVar3 = tls_free(param_1);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3 != 0 && uVar6 != 0;
}



int dtls_new_record_layer
              (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
              undefined8 param_5,undefined4 param_6,undefined2 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
              undefined8 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20)

{
  long lVar1;
  long lVar2;
  int iVar3;
  pqueue p_Var4;
  undefined8 *puVar5;
  long *in_stack_000000d0;
  
  iVar3 = tls_int_new_record_layer();
  if (iVar3 != 1) {
    return iVar3;
  }
  lVar1 = *in_stack_000000d0;
  p_Var4 = pqueue_new();
  *(pqueue *)(lVar1 + 0x10e0) = p_Var4;
  lVar1 = *in_stack_000000d0;
  p_Var4 = pqueue_new();
  lVar2 = *in_stack_000000d0;
  *(pqueue *)(lVar1 + 0x10e8) = p_Var4;
  if ((*(long *)(lVar2 + 0x10e0) == 0) || (*(long *)(lVar2 + 0x10e8) == 0)) {
    dtls_free();
    *in_stack_000000d0 = 0;
    ERR_new();
    ERR_set_debug("ssl/record/methods/dtls_meth.c",0x290,"dtls_new_record_layer");
    ERR_set_error(0x14,0x80014,0);
    return -2;
  }
  *(undefined4 *)(lVar2 + 0x10) = 1;
  *(undefined2 *)(lVar2 + 0x30) = param_7;
  *(undefined4 *)(lVar2 + 0x1110) = 1;
  if (param_3 == 0x1ffff) {
    puVar5 = (undefined8 *)&dtls_any_funcs;
  }
  else {
    if ((0x1ffff < (int)param_3) || (((param_3 & 0xfffffffd) != 0xfefd && (param_3 != 0x100)))) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/dtls_meth.c",0x2a3,"dtls_new_record_layer");
      iVar3 = -2;
      ERR_set_error(0x14,0xc0103,0);
      goto LAB_00100392;
    }
    puVar5 = (undefined8 *)&dtls_1_funcs;
  }
  *(undefined8 **)(lVar2 + 0x1148) = puVar5;
  iVar3 = (*(code *)*puVar5)(lVar2,param_6,param_10,param_11,param_12,param_13,param_14,param_15,
                             param_16,param_17,param_18,param_19,param_20);
  if (iVar3 == 1) {
    return 1;
  }
LAB_00100392:
  dtls_free(*in_stack_000000d0);
  *in_stack_000000d0 = 0;
  return iVar3;
}



undefined8 dtls_get_more_records(long param_1)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  byte bVar3;
  long *plVar4;
  byte *pbVar5;
  pqueue pq;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  pitem *ppVar12;
  undefined8 uVar13;
  undefined4 extraout_var;
  undefined8 *data;
  pitem *ppVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  ushort uVar18;
  undefined8 uVar19;
  long lVar20;
  size_t len;
  long in_FS_OFFSET;
  ulong local_a0;
  void *local_98;
  int local_90;
  undefined1 local_88 [72];
  long local_40;
  
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x6d0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 0xfd0) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  if ((*(long *)(param_1 + 0x6a0) == 0) && (iVar11 = tls_setup_read_buffer(), iVar11 == 0)) {
LAB_00100b62:
    uVar13 = 0xfffffffe;
    goto LAB_00100640;
  }
  lVar2 = param_1 + 0x1000;
LAB_00100548:
  do {
    ppVar12 = pqueue_pop(*(pqueue *)(param_1 + 0x10e8));
    if (ppVar12 != (pitem *)0x0) goto code_r0x0010055c;
    if ((*(int *)(param_1 + 0xfe8) != 0xf1) || (*(ulong *)(param_1 + 0xff8) < 0xd)) {
      uVar13 = (**(code **)(*(long *)(param_1 + 0x1148) + 0x20))
                         (param_1,0xd,*(undefined8 *)(param_1 + 0x6b0),0,1,&local_a0);
      if (0 < (int)uVar13) {
        if (*(long *)(param_1 + 0xff8) == 0xd) {
          pbVar5 = *(byte **)(param_1 + 0xff0);
          *(undefined4 *)(param_1 + 0xfe8) = 0xf1;
          *(uint *)(param_1 + 0x6d4) = (uint)*pbVar5;
          bVar3 = pbVar5[1];
          uVar18 = *(ushort *)(pbVar5 + 1) << 8 | *(ushort *)(pbVar5 + 1) >> 8;
          *(uint *)(param_1 + 0x6d0) = (uint)uVar18;
          *(ushort *)(param_1 + 0x708) = *(ushort *)(pbVar5 + 3) << 8 | *(ushort *)(pbVar5 + 3) >> 8
          ;
          *(undefined4 *)(param_1 + 0x1002) = *(undefined4 *)(pbVar5 + 5);
          *(undefined2 *)(param_1 + 0x1006) = *(undefined2 *)(pbVar5 + 9);
          *(ulong *)(param_1 + 0x6d8) =
               (ulong)(ushort)(*(ushort *)(pbVar5 + 0xb) << 8 | *(ushort *)(pbVar5 + 0xb) >> 8);
          if (*(code **)(param_1 + 0x1128) != (code *)0x0) {
            (**(code **)(param_1 + 0x1128))
                      (0,uVar18,0x100,pbVar5,0xd,*(undefined8 *)(param_1 + 0x1118));
          }
          iVar11 = *(int *)(param_1 + 0x14);
          if (((*(int *)(param_1 + 0x10d4) != 0) || (*(int *)(param_1 + 0x6d4) == 0x15)) ||
             (*(int *)(param_1 + 0x6d0) == iVar11)) {
            uVar10 = iVar11 >> 8;
            if (iVar11 == 0x1ffff) {
              uVar10 = 0xfe;
            }
            if (((uVar10 == bVar3) && (uVar16 = *(ulong *)(param_1 + 0x6d8), uVar16 < 0x4541)) &&
               (uVar16 <= *(int *)(param_1 + 0x104c) + 0x140)) {
              if (*(long *)(param_1 + 0xff8) - 0xdU < uVar16) goto LAB_00100695;
              goto LAB_00100800;
            }
          }
          goto LAB_001006d5;
        }
        goto LAB_0010053d;
      }
      goto LAB_00100640;
    }
    uVar16 = *(ulong *)(param_1 + 0x6d8);
    if (*(ulong *)(param_1 + 0xff8) - 0xd < uVar16) {
LAB_00100695:
      iVar11 = (**(code **)(*(long *)(param_1 + 0x1148) + 0x20))
                         (param_1,uVar16,uVar16,1,1,&local_a0);
      if ((0 < iVar11) && (local_a0 == uVar16)) goto LAB_00100800;
      goto LAB_001006c7;
    }
LAB_00100800:
    bVar9 = false;
    *(undefined4 *)(param_1 + 0xfe8) = 0xf0;
    puVar17 = (ulong *)(param_1 + 0x10f0);
    if (*(ushort *)(param_1 + 0x708) != *(ushort *)(param_1 + 0x30)) {
      if ((uint)*(ushort *)(param_1 + 0x708) != *(ushort *)(param_1 + 0x30) + 1) goto LAB_001006d5;
      puVar17 = (ulong *)(param_1 + 0x1100);
      bVar9 = true;
    }
    iVar11 = satsub64be(lVar2,puVar17 + 1);
    if ((iVar11 < 1) && ((iVar11 < -0x3f || ((*puVar17 >> ((ulong)(uint)-iVar11 & 0x3f) & 1) != 0)))
       ) goto LAB_001006d5;
    ossl_tls_rl_record_set_seq_num(pauVar1,lVar2);
    uVar16 = *(ulong *)(param_1 + 0x6d8);
  } while (uVar16 == 0);
  if (bVar9) {
    if (*(int *)(param_1 + 0x1110) != 0) {
      pq = *(pqueue *)(param_1 + 0x10e0);
      iVar11 = pqueue_size(pq);
      if (CONCAT44(extraout_var,iVar11) < 100) {
        data = (undefined8 *)CRYPTO_malloc(0x88,"ssl/record/methods/dtls_meth.c",0x123);
        ppVar12 = pitem_new((uchar *)(param_1 + 0x70a),data);
        if ((data == (undefined8 *)0x0) || (ppVar12 == (pitem *)0x0)) {
          CRYPTO_free(data);
          pitem_free(ppVar12);
          ERR_new();
          ERR_set_debug("ssl/record/methods/dtls_meth.c",0x128,"dtls_rlayer_buffer_record");
          ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
          goto LAB_00100b62;
        }
        uVar7 = *(undefined8 *)(param_1 + 0x6a8);
        uVar13 = *(undefined8 *)(param_1 + 0xff0);
        uVar19 = *(undefined8 *)(param_1 + 0x710);
        data[2] = *(undefined8 *)(param_1 + 0x6a0);
        data[3] = uVar7;
        uVar7 = *(undefined8 *)(param_1 + 0x6b0);
        uVar8 = *(undefined8 *)(param_1 + 0x6b8);
        *data = uVar13;
        uVar13 = *(undefined8 *)(param_1 + 0xff8);
        data[4] = uVar7;
        data[5] = uVar8;
        uVar7 = *(undefined8 *)(param_1 + 0x6c0);
        uVar8 = *(undefined8 *)(param_1 + 0x6c8);
        data[1] = uVar13;
        data[6] = uVar7;
        data[7] = uVar8;
        uVar13 = *(undefined8 *)*pauVar1;
        uVar7 = *(undefined8 *)(param_1 + 0x6d8);
        data[0x10] = uVar19;
        data[8] = uVar13;
        data[9] = uVar7;
        uVar13 = *(undefined8 *)(param_1 + 0x6e8);
        data[10] = *(undefined8 *)(param_1 + 0x6e0);
        data[0xb] = uVar13;
        uVar13 = *(undefined8 *)(param_1 + 0x6f8);
        data[0xc] = *(undefined8 *)(param_1 + 0x6f0);
        data[0xd] = uVar13;
        uVar13 = *(undefined8 *)(param_1 + 0x708);
        data[0xe] = *(undefined8 *)(param_1 + 0x700);
        data[0xf] = uVar13;
        ppVar12->data = data;
        *(undefined8 *)(param_1 + 0xff0) = 0;
        *(undefined8 *)(param_1 + 0xff8) = 0;
        *(undefined1 (*) [16])(param_1 + 0x6a0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x6b0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x6c0) = (undefined1  [16])0x0;
        *(undefined8 *)(param_1 + 0x710) = 0;
        *pauVar1 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x6e0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x6f0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x700) = (undefined1  [16])0x0;
        iVar11 = tls_setup_read_buffer(param_1);
        if (iVar11 == 0) {
          CRYPTO_free((void *)data[2]);
          CRYPTO_free(data);
          pitem_free(ppVar12);
          goto LAB_00100b62;
        }
        ppVar14 = pqueue_insert(pq,ppVar12);
        if (ppVar14 == (pitem *)0x0) {
          CRYPTO_free((void *)data[2]);
          CRYPTO_free(data);
          pitem_free(ppVar12);
        }
      }
    }
    goto LAB_001006d5;
  }
  local_90 = 0;
  local_98 = (void *)0x0;
  lVar15 = *(long *)(param_1 + 0xff0) + 0xd;
  *(long *)(param_1 + 0x6f8) = lVar15;
  if (uVar16 < 0x4541) {
    *(long *)(param_1 + 0x6f0) = lVar15;
    *(ulong *)(param_1 + 0x6e0) = uVar16;
    if (*(long *)(param_1 + 0x1038) == 0) {
LAB_00100b18:
      len = 0;
    }
    else {
      lVar15 = EVP_MD_CTX_get0_md();
      if (lVar15 == 0) {
        len = 0;
      }
      else {
        iVar11 = EVP_MD_get_size(lVar15);
        len = (size_t)iVar11;
        if (0x3f < iVar11 - 1U) {
          ERR_new();
          ERR_set_debug("ssl/record/methods/dtls_meth.c",0x9b,"dtls_process_record");
          ossl_rlayer_fatal(param_1,0x50,0x80006);
          goto LAB_001006c7;
        }
      }
      if ((*(int *)(param_1 + 0x10b0) != 0) && (*(long *)(param_1 + 0x1038) != 0)) {
        if (*(ulong *)(param_1 + 0x6e0) < len) {
          ERR_new();
          ERR_set_debug("ssl/record/methods/dtls_meth.c",0xa6,"dtls_process_record");
          ossl_rlayer_fatal(param_1,0x32,0xa0);
        }
        else {
          lVar15 = *(long *)(param_1 + 0x6f0);
          lVar20 = *(long *)(param_1 + 0x6d8) - len;
          *(long *)(param_1 + 0x6d8) = lVar20;
          iVar11 = (**(code **)(*(long *)(param_1 + 0x1148) + 0x10))(param_1,pauVar1,local_88);
          if ((iVar11 != 0) &&
             (iVar11 = CRYPTO_memcmp(local_88,(void *)(lVar15 + lVar20),len), iVar11 == 0))
          goto LAB_00100b18;
          ERR_new();
          ERR_set_debug("ssl/record/methods/dtls_meth.c",0xad,"dtls_process_record");
          ossl_rlayer_fatal(param_1,0x14,0x119);
        }
        goto LAB_001006c7;
      }
    }
    ERR_set_mark();
    iVar11 = (**(code **)(*(long *)(param_1 + 0x1148) + 8))(param_1,pauVar1,1,0,&local_98,len);
    if (iVar11 == 0) {
      ERR_pop_to_mark();
      if (*(int *)(param_1 + 0x1008) == -1) {
        *(undefined8 *)(param_1 + 0x6d8) = 0;
        *(undefined8 *)(param_1 + 0xff8) = 0;
        if (local_90 == 0) goto LAB_001006d5;
      }
      else if (local_90 == 0) goto LAB_00100b62;
LAB_00100c65:
      CRYPTO_free(local_98);
    }
    else {
      ERR_clear_last_mark();
      if (((*(int *)(param_1 + 0x10b0) == 0) && (*(long *)(param_1 + 0x1020) != 0)) &&
         (lVar15 = EVP_MD_CTX_get0_md(*(undefined8 *)(param_1 + 0x1038)), lVar15 != 0)) {
        iVar11 = (**(code **)(*(long *)(param_1 + 0x1148) + 0x10))(param_1,pauVar1,local_88);
        if (((iVar11 == 0) || (local_98 == (void *)0x0)) ||
           ((iVar11 = CRYPTO_memcmp(local_88,local_98,len), iVar11 != 0 ||
            (uVar16 = *(ulong *)(param_1 + 0x6d8), len + 0x4400 < uVar16)))) {
          *(undefined8 *)(param_1 + 0x6d8) = 0;
          *(undefined8 *)(param_1 + 0xff8) = 0;
          if (local_90 == 0) goto LAB_001006c7;
          goto LAB_00100c65;
        }
      }
      else {
        uVar16 = *(ulong *)(param_1 + 0x6d8);
      }
      if (*(long *)(param_1 + 0x1040) == 0) {
LAB_00100cb7:
        if (uVar16 <= *(uint *)(param_1 + 0x104c)) {
          *(undefined8 *)(param_1 + 0x6e8) = 0;
          *(undefined8 *)(param_1 + 0xff8) = 0;
          uVar10 = satsub64be(lVar2,puVar17 + 1);
          if ((int)uVar10 < 1) {
            if (-0x40 < (int)uVar10) {
              *puVar17 = *puVar17 | 1L << (-(byte)uVar10 & 0x3f);
            }
          }
          else {
            uVar16 = 1;
            if (uVar10 < 0x40) {
              uVar16 = *puVar17 << ((byte)uVar10 & 0x3f) | 1;
            }
            *puVar17 = uVar16;
            puVar17[1] = *(ulong *)(param_1 + 0x1000);
          }
          if (local_90 != 0) {
            CRYPTO_free(local_98);
          }
          pcVar6 = *(code **)(*(long *)(param_1 + 0x1148) + 0x38);
          if ((pcVar6 == (code *)0x0) || (iVar11 = (*pcVar6)(param_1,pauVar1), iVar11 != 0))
          goto LAB_00100626;
          goto LAB_00100b62;
        }
        ERR_new();
        ERR_set_debug("ssl/record/methods/dtls_meth.c",0xfe,"dtls_process_record");
        uVar13 = 0x92;
        uVar19 = 0x16;
      }
      else if (uVar16 < 0x4401) {
        iVar11 = tls_do_uncompress(param_1,pauVar1);
        if (iVar11 != 0) {
          uVar16 = *(ulong *)(param_1 + 0x6d8);
          goto LAB_00100cb7;
        }
        ERR_new();
        ERR_set_debug("ssl/record/methods/dtls_meth.c",0xf4,"dtls_process_record");
        uVar13 = 0x6b;
        uVar19 = 0x1e;
      }
      else {
        ERR_new();
        ERR_set_debug("ssl/record/methods/dtls_meth.c",0xef,"dtls_process_record");
        uVar13 = 0x8c;
        uVar19 = 0x16;
      }
      ossl_rlayer_fatal(param_1,uVar19,uVar13);
      if (local_90 != 0) {
        CRYPTO_free(local_98);
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("ssl/record/methods/dtls_meth.c",0x8d,"dtls_process_record");
    ossl_rlayer_fatal(param_1,0x16,0x96);
  }
LAB_001006c7:
  if (*(int *)(param_1 + 0x1008) != -1) goto LAB_00100b62;
LAB_001006d5:
  *(undefined8 *)(param_1 + 0x6d8) = 0;
LAB_0010053d:
  *(undefined8 *)(param_1 + 0xff8) = 0;
  goto LAB_00100548;
code_r0x0010055c:
  plVar4 = (long *)ppVar12->data;
  ossl_tls_buffer_release(param_1 + 0x6a0);
  *(long *)(param_1 + 0xff0) = *plVar4;
  *(long *)(param_1 + 0xff8) = plVar4[1];
  lVar2 = plVar4[3];
  *(long *)(param_1 + 0x6a0) = plVar4[2];
  *(long *)(param_1 + 0x6a8) = lVar2;
  lVar2 = plVar4[5];
  *(long *)(param_1 + 0x6b0) = plVar4[4];
  *(long *)(param_1 + 0x6b8) = lVar2;
  lVar2 = plVar4[7];
  *(long *)(param_1 + 0x6c0) = plVar4[6];
  *(long *)(param_1 + 0x6c8) = lVar2;
  lVar2 = plVar4[9];
  *(long *)(param_1 + 0x6d0) = plVar4[8];
  *(long *)(param_1 + 0x6d8) = lVar2;
  lVar2 = plVar4[0xb];
  *(long *)(param_1 + 0x6e0) = plVar4[10];
  *(long *)(param_1 + 0x6e8) = lVar2;
  lVar2 = plVar4[0xd];
  *(long *)(param_1 + 0x6f0) = plVar4[0xc];
  *(long *)(param_1 + 0x6f8) = lVar2;
  lVar2 = plVar4[0xf];
  *(long *)(param_1 + 0x700) = plVar4[0xe];
  *(long *)(param_1 + 0x708) = lVar2;
  *(long *)(param_1 + 0x710) = plVar4[0x10];
  lVar2 = *plVar4;
  *(undefined4 *)(param_1 + 0x1002) = *(undefined4 *)(lVar2 + 5);
  *(undefined2 *)(param_1 + 0x1006) = *(undefined2 *)(lVar2 + 9);
  CRYPTO_free(ppVar12->data);
  pitem_free(ppVar12);
LAB_00100626:
  *(undefined8 *)(param_1 + 0xfd0) = 1;
  uVar13 = 1;
LAB_00100640:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
dtls_prepare_record_header
          (long param_1,undefined8 param_2,long param_3,undefined1 param_4,undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x1040);
  *param_5 = 0;
  lVar4 = *(long *)(param_3 + 0x10);
  if (lVar1 != 0) {
    lVar4 = lVar4 + 0x400;
  }
  iVar2 = WPACKET_put_bytes__(param_2,param_4,1);
  if ((((((iVar2 == 0) ||
         (iVar2 = WPACKET_put_bytes__(param_2,*(undefined4 *)(param_3 + 4),2), iVar2 == 0)) ||
        (iVar2 = WPACKET_put_bytes__(param_2,*(undefined2 *)(param_1 + 0x30),2), iVar2 == 0)) ||
       ((iVar2 = WPACKET_memcpy(param_2,param_1 + 0x1002,6), iVar2 == 0 ||
        (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 == 0)))) ||
      ((*(long *)(param_1 + 0x1030) != 0 &&
       (iVar2 = WPACKET_allocate_bytes(param_2,*(long *)(param_1 + 0x1030),0), iVar2 == 0)))) ||
     ((lVar4 != 0 && (iVar2 = WPACKET_reserve_bytes(param_2,lVar4,param_5), iVar2 == 0)))) {
    ERR_new();
    ERR_set_debug("ssl/record/methods/dtls_meth.c",0x2cc,"dtls_prepare_record_header");
    ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



undefined8 dtls_post_encryption_processing(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = tls_post_encryption_processing_default();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = tls_increment_sequence_ctr(param_1);
  return uVar2;
}


