
undefined4
qrx_decrypt_pkt_body_constprop_0
          (long param_1,uchar *param_2,uchar *param_3,ulong param_4,long *param_5,uchar *param_6,
          ulong param_7,ulong param_8,int param_9,uint param_10,long *param_11)

{
  char cVar1;
  EVP_CIPHER_CTX *ctx;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uchar *iv;
  uchar *puVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  int local_60 [2];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60[0] = 0;
  local_60[1] = 0;
  lVar5 = ossl_qrl_enc_level_set_get(param_1 + 0xa8,param_9,1);
  if (((((param_7 | param_4) < 0x80000000) && (lVar5 != 0)) && (*(uint *)(lVar5 + 100) < param_4))
     && (uVar10 = *(ulong *)(param_1 + 0x3f0),
        uVar6 = ossl_qrl_get_suite_max_forged_pkt(*(undefined4 *)(lVar5 + 0x60)), uVar10 < uVar6)) {
    if (param_9 == 3) {
      cVar1 = *(char *)(lVar5 + 0x68);
      if (cVar1 == '\x03') {
        lVar2 = *(long *)(lVar5 + 0x50);
        *param_11 = lVar2;
        uVar10 = (ulong)((uint)lVar2 & 1);
      }
      else {
        uVar10 = (ulong)(param_10 & 0xff);
        if (cVar1 == '\x01') {
          *param_11 = (ulong)((uint)*(long *)(lVar5 + 0x50) & 1 ^ param_10 & 0xff) +
                      *(long *)(lVar5 + 0x50);
        }
        else if (((cVar1 == '\x02') &&
                 (uVar11 = (uint)*(long *)(lVar5 + 0x50) & 1,
                 *param_11 = *(long *)(lVar5 + 0x50) - (ulong)(uVar11 ^ param_10 & 0xff),
                 uVar11 != (param_10 & 0xff))) && (*(ulong *)(param_1 + 0x3f8) <= param_8))
        goto LAB_00100091;
      }
    }
    else {
      *param_11 = 0;
      uVar10 = 0;
    }
    ctx = *(EVP_CIPHER_CTX **)(lVar5 + 0x30 + uVar10 * 8);
    iVar4 = EVP_CIPHER_CTX_get_iv_length(ctx);
    if (7 < iVar4) {
      iv = (uchar *)__memcpy_chk(local_58,lVar5 + 0x6a + uVar10 * 0x10,(long)iVar4);
      iVar9 = 0;
      puVar7 = iv + iVar4;
      do {
        bVar8 = (byte)iVar9;
        iVar9 = iVar9 + 8;
        puVar7[-1] = puVar7[-1] ^ (byte)(param_8 >> (bVar8 & 0x3f));
        puVar7 = puVar7 + -1;
      } while (iVar9 != 0x40);
      iVar4 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,iv,0);
      if ((iVar4 == 1) &&
         (iVar4 = EVP_CIPHER_CTX_ctrl(ctx,0x11,*(uint *)(lVar5 + 100),
                                      param_3 + (param_4 - *(uint *)(lVar5 + 100))), iVar4 == 1)) {
        iVar4 = EVP_CipherUpdate(ctx,(uchar *)0x0,local_60,param_6,(int)param_7);
        if ((iVar4 == 1) &&
           (iVar4 = EVP_CipherUpdate(ctx,param_2,local_60,param_3,
                                     (int)param_4 - *(int *)(lVar5 + 100)), iVar4 == 1)) {
          iVar4 = EVP_CipherFinal_ex(ctx,(uchar *)0x0,local_60 + 1);
          if (iVar4 == 1) {
            *param_5 = (long)local_60[0];
            uVar3 = 1;
            goto LAB_00100093;
          }
          *(long *)(param_1 + 0x3f0) = *(long *)(param_1 + 0x3f0) + 1;
        }
      }
    }
  }
LAB_00100091:
  uVar3 = 0;
LAB_00100093:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void * qrx_ensure_free_rxe_part_0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  if (0xfffffffffffffe2e < param_2) {
    return (void *)0x0;
  }
  pvVar3 = CRYPTO_malloc((int)param_2 + 0x1d0,"ssl/quic/quic_record_rx.c",0x229);
  if (pvVar3 != (void *)0x0) {
    lVar1 = *(long *)(param_1 + 0x68);
    *(ulong *)((long)pvVar3 + 0x60) = param_2;
    *(undefined8 *)((long)pvVar3 + 0x58) = 0;
    *(undefined8 *)((long)pvVar3 + 0x68) = 0;
    if (lVar1 != 0) {
      *(void **)(lVar1 + 0x48) = pvVar3;
    }
    lVar2 = *(long *)(param_1 + 0x60);
    *(long *)((long)pvVar3 + 0x50) = lVar1;
    *(undefined8 *)((long)pvVar3 + 0x48) = 0;
    *(void **)(param_1 + 0x68) = pvVar3;
    if (lVar2 == 0) {
      *(void **)(param_1 + 0x60) = pvVar3;
    }
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
    return pvVar3;
  }
  return (void *)0x0;
}



bool qrx_validate_hdr(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = *(char *)(param_2 + 0x70) - 2;
  iVar1 = 0;
  if ((bVar2 < 4) && (iVar1 = 0, *(int *)(CSWTCH_147 + (ulong)bVar2 * 4) != 0)) {
    iVar1 = (*(int *)(CSWTCH_147 + (ulong)bVar2 * 4) != 2) + 1;
  }
  iVar1 = ossl_quic_wire_decode_pkt_hdr_pn
                    (param_2 + 0xa2,*(byte *)(param_2 + 0x71) >> 2 & 0xf,
                     *(undefined8 *)(param_1 + 0x90 + (long)iVar1 * 8),param_2 + 200);
  return iVar1 != 0;
}



bool qrx_validate_hdr_late(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  bVar1 = *(char *)(param_2 + 0x70) - 2;
  if ((bVar1 < 4) && (*(int *)(CSWTCH_147 + (ulong)bVar1 * 4) != 0)) {
    cVar3 = (*(int *)(CSWTCH_147 + (ulong)bVar1 * 4) != 2) + '\x01';
  }
  if (*(code **)(param_1 + 0x400) != (code *)0x0) {
    iVar2 = (**(code **)(param_1 + 0x400))
                      (*(undefined8 *)(param_2 + 200),cVar3,*(undefined8 *)(param_1 + 0x408));
    return iVar2 != 0;
  }
  return true;
}



void * qrx_resize_rxe(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  if (param_2 == (void *)0x0) {
    return (void *)0x0;
  }
  if (0xfffffffffffffe2e < param_3) {
    return (void *)0x0;
  }
  lVar1 = *(long *)((long)param_2 + 0x50);
  lVar2 = *(long *)((long)param_2 + 0x48);
  if (param_2 == (void *)*param_1) {
    *param_1 = lVar2;
    pvVar3 = (void *)param_1[1];
  }
  else {
    pvVar3 = (void *)param_1[1];
  }
  if (param_2 == pvVar3) {
    param_1[1] = lVar1;
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x48) = lVar2;
    lVar2 = *(long *)((long)param_2 + 0x48);
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x50) = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  *(undefined1 (*) [16])((long)param_2 + 0x48) = (undefined1  [16])0x0;
  if (*(long *)((long)param_2 + 0x68) != 0) {
    return (void *)0x0;
  }
  pvVar3 = CRYPTO_realloc(param_2,(int)param_3 + 0x1d0,"ssl/quic/quic_record_rx.c",0x266);
  if (pvVar3 != (void *)0x0) {
    if (lVar1 == 0) {
      lVar1 = *param_1;
      if (lVar1 != 0) {
        *(void **)(lVar1 + 0x50) = pvVar3;
      }
      lVar2 = param_1[1];
      *(long *)((long)pvVar3 + 0x48) = lVar1;
      *(undefined8 *)((long)pvVar3 + 0x50) = 0;
      *param_1 = (long)pvVar3;
      if (lVar2 != 0) goto LAB_001004f9;
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x48);
      *(long *)((long)pvVar3 + 0x48) = lVar2;
      *(long *)((long)pvVar3 + 0x50) = lVar1;
      if (lVar2 != 0) {
        *(void **)(lVar2 + 0x50) = pvVar3;
      }
      *(void **)(lVar1 + 0x48) = pvVar3;
      if (lVar1 != param_1[1]) goto LAB_001004f9;
    }
    param_1[1] = (long)pvVar3;
LAB_001004f9:
    param_1[2] = param_1[2] + 1;
    *(ulong *)((long)pvVar3 + 0x60) = param_3;
    return pvVar3;
  }
  if (lVar1 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      *(void **)(lVar1 + 0x50) = param_2;
    }
    lVar2 = param_1[1];
    *(long *)((long)param_2 + 0x48) = lVar1;
    *(undefined8 *)((long)param_2 + 0x50) = 0;
    *param_1 = (long)param_2;
    if (lVar2 != 0) goto LAB_0010054e;
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x48);
    *(long *)((long)param_2 + 0x48) = lVar2;
    *(long *)((long)param_2 + 0x50) = lVar1;
    if (lVar2 != 0) {
      *(void **)(lVar2 + 0x50) = param_2;
    }
    *(void **)(lVar1 + 0x48) = param_2;
    if (lVar1 != param_1[1]) goto LAB_0010054e;
  }
  param_1[1] = (long)param_2;
LAB_0010054e:
  param_1[2] = param_1[2] + 1;
  return (void *)0x0;
}



undefined8
qrx_relocate_buffer_constprop_0
          (long param_1,long *param_2,long *param_3,undefined8 *param_4,ulong param_5)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  if (param_5 == 0) {
    return 1;
  }
  lVar3 = *param_2;
  if ((*(ulong *)(lVar3 + 0x60) < param_5) &&
     (lVar3 = qrx_resize_rxe(param_1 + 0x60,lVar3,param_5), lVar3 == 0)) {
    return 0;
  }
  lVar1 = *param_3;
  *param_2 = lVar3;
  pvVar2 = memcpy((void *)(lVar3 + 0x1d0 + lVar1),(void *)*param_4,param_5);
  *param_3 = *param_3 + param_5;
  *param_4 = pvVar2;
  return 1;
}



undefined8 * ossl_qrx_new(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    if (param_1[4] != 0) {
      puVar9 = (undefined8 *)CRYPTO_zalloc(0x440,"ssl/quic/quic_record_rx.c",0xca);
      if (puVar9 != (undefined8 *)0x0) {
        uVar3 = param_1[5];
        uVar4 = param_1[6];
        uVar5 = *param_1;
        uVar6 = param_1[1];
        uVar7 = param_1[3];
        uVar8 = param_1[4];
        puVar9[0x14] = param_1[7];
        uVar2 = param_1[2];
        puVar9[0x12] = uVar3;
        puVar9[0x13] = uVar4;
        puVar9[2] = uVar2;
        uVar1 = *(undefined1 *)(param_1 + 8);
        *puVar9 = uVar5;
        puVar9[1] = uVar6;
        *(undefined1 *)(puVar9 + 0x84) = uVar1;
        puVar9[3] = uVar7;
        puVar9[4] = uVar8;
      }
    }
    return puVar9;
  }
  return (undefined8 *)param_1[2];
}



void ossl_qrx_free(void *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  void *pvVar8;
  int iVar9;
  int iVar10;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  pvVar5 = *(void **)((long)param_1 + 0x60);
  pvVar8 = pvVar5;
  if (pvVar5 != (void *)0x0) {
    while( true ) {
      pvVar1 = *(void **)((long)pvVar8 + 0x48);
      if (pvVar8 == pvVar5) {
        *(void **)((long)param_1 + 0x60) = pvVar1;
      }
      lVar2 = *(long *)((long)pvVar8 + 0x50);
      if (pvVar8 == *(void **)((long)param_1 + 0x68)) {
        *(long *)((long)param_1 + 0x68) = lVar2;
      }
      pvVar5 = pvVar1;
      if (lVar2 != 0) {
        *(void **)(lVar2 + 0x48) = pvVar1;
        pvVar5 = *(void **)((long)pvVar8 + 0x48);
      }
      if (pvVar5 != (void *)0x0) {
        *(long *)((long)pvVar5 + 0x50) = lVar2;
      }
      *(long *)((long)param_1 + 0x70) = *(long *)((long)param_1 + 0x70) + -1;
      *(undefined1 (*) [16])((long)pvVar8 + 0x48) = (undefined1  [16])0x0;
      CRYPTO_free(pvVar8);
      if (pvVar1 == (void *)0x0) break;
      pvVar5 = *(void **)((long)param_1 + 0x60);
      pvVar8 = pvVar1;
    }
  }
  pvVar5 = *(void **)((long)param_1 + 0x78);
  pvVar8 = pvVar5;
  if (pvVar5 != (void *)0x0) {
    while( true ) {
      pvVar1 = *(void **)((long)pvVar8 + 0x48);
      if (pvVar5 == pvVar8) {
        *(void **)((long)param_1 + 0x78) = pvVar1;
        lVar2 = *(long *)((long)pvVar8 + 0x50);
        pvVar5 = *(void **)((long)param_1 + 0x80);
      }
      else {
        lVar2 = *(long *)((long)pvVar8 + 0x50);
        pvVar5 = *(void **)((long)param_1 + 0x80);
      }
      if (pvVar8 == pvVar5) {
        *(long *)((long)param_1 + 0x80) = lVar2;
      }
      pvVar5 = pvVar1;
      if (lVar2 != 0) {
        *(void **)(lVar2 + 0x48) = pvVar1;
        pvVar5 = *(void **)((long)pvVar8 + 0x48);
      }
      if (pvVar5 != (void *)0x0) {
        *(long *)((long)pvVar5 + 0x50) = lVar2;
      }
      *(long *)((long)param_1 + 0x88) = *(long *)((long)param_1 + 0x88) + -1;
      *(undefined1 (*) [16])((long)pvVar8 + 0x48) = (undefined1  [16])0x0;
      CRYPTO_free(pvVar8);
      if (pvVar1 == (void *)0x0) break;
      pvVar5 = *(void **)((long)param_1 + 0x78);
      pvVar8 = pvVar1;
    }
  }
  pauVar6 = *(undefined1 (**) [16])((long)param_1 + 0x30);
  pauVar7 = pauVar6;
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    while( true ) {
      pauVar3 = *(undefined1 (**) [16])*pauVar7;
      if (pauVar7 == pauVar6) {
        *(undefined1 (**) [16])((long)param_1 + 0x30) = pauVar3;
        puVar4 = *(undefined8 **)(*pauVar7 + 8);
        pauVar6 = *(undefined1 (**) [16])((long)param_1 + 0x38);
      }
      else {
        puVar4 = *(undefined8 **)(*pauVar7 + 8);
        pauVar6 = *(undefined1 (**) [16])((long)param_1 + 0x38);
      }
      if (pauVar7 == pauVar6) {
        *(undefined8 **)((long)param_1 + 0x38) = puVar4;
      }
      pauVar6 = pauVar3;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = pauVar3;
        pauVar6 = *(undefined1 (**) [16])*pauVar7;
      }
      if (pauVar6 != (undefined1 (*) [16])0x0) {
        *(undefined8 **)(*pauVar6 + 8) = puVar4;
      }
      *(long *)((long)param_1 + 0x40) = *(long *)((long)param_1 + 0x40) + -1;
      *pauVar7 = (undefined1  [16])0x0;
      ossl_quic_demux_release_urxe(*(undefined8 *)((long)param_1 + 0x10));
      if (pauVar3 == (undefined1 (*) [16])0x0) break;
      pauVar6 = *(undefined1 (**) [16])((long)param_1 + 0x30);
      pauVar7 = pauVar3;
    }
  }
  pauVar6 = *(undefined1 (**) [16])((long)param_1 + 0x48);
  pauVar7 = pauVar6;
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    while( true ) {
      pauVar3 = *(undefined1 (**) [16])*pauVar7;
      if (pauVar7 == pauVar6) {
        *(undefined1 (**) [16])((long)param_1 + 0x48) = pauVar3;
        puVar4 = *(undefined8 **)(*pauVar7 + 8);
        pauVar6 = *(undefined1 (**) [16])((long)param_1 + 0x50);
      }
      else {
        puVar4 = *(undefined8 **)(*pauVar7 + 8);
        pauVar6 = *(undefined1 (**) [16])((long)param_1 + 0x50);
      }
      if (pauVar7 == pauVar6) {
        *(undefined8 **)((long)param_1 + 0x50) = puVar4;
      }
      pauVar6 = pauVar3;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = pauVar3;
        pauVar6 = *(undefined1 (**) [16])*pauVar7;
      }
      if (pauVar6 != (undefined1 (*) [16])0x0) {
        *(undefined8 **)(*pauVar6 + 8) = puVar4;
      }
      *(long *)((long)param_1 + 0x58) = *(long *)((long)param_1 + 0x58) + -1;
      *pauVar7 = (undefined1  [16])0x0;
      ossl_quic_demux_release_urxe(*(undefined8 *)((long)param_1 + 0x10));
      if (pauVar3 == (undefined1 (*) [16])0x0) break;
      pauVar6 = *(undefined1 (**) [16])((long)param_1 + 0x48);
      pauVar7 = pauVar3;
    }
  }
  iVar9 = 0;
  do {
    iVar10 = iVar9 + 1;
    ossl_qrl_enc_level_set_discard((long)param_1 + 0xa8,iVar9);
    iVar9 = iVar10;
  } while (iVar10 != 4);
  CRYPTO_free(param_1);
  return;
}



void ossl_qrx_inject_urxe(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(undefined1 *)(param_2 + 0x24) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  *(undefined1 (*) [16])(param_2 + 4) = (undefined1  [16])0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  param_2[1] = puVar1;
  *param_2 = 0;
  *(undefined8 **)(param_1 + 0x38) = param_2;
  if (lVar2 == 0) {
    *(undefined8 **)(param_1 + 0x30) = param_2;
  }
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  if (*(code **)(param_1 + 0x428) != (code *)0x0) {
    (**(code **)(param_1 + 0x428))
              (0,1,0x200,param_2 + 0x25,param_2[2],*(undefined8 *)(param_1 + 0x438),
               *(undefined8 *)(param_1 + 0x430));
    return;
  }
  return;
}



undefined4 ossl_qrx_validate_initial_packet(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  byte bVar24;
  undefined8 extraout_RDX;
  long lVar25;
  undefined4 uVar26;
  long in_FS_OFFSET;
  undefined8 uVar27;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined1 local_68 [40];
  long local_40;
  
  lVar22 = *(long *)(param_2 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)(param_2 + 0x120) = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0xffffffffffffffff;
  *(undefined1 (*) [16])(param_2 + 0x20) = (undefined1  [16])0x0;
  if (-1 < lVar22) {
    lVar20 = *(long *)(param_1 + 0x60);
    lVar1 = param_2 + 0x128;
    local_78 = lVar1;
    local_70 = lVar22;
    if ((lVar20 != 0) ||
       (lVar20 = qrx_ensure_free_rxe_part_0(param_1,lVar22), local_a0 = lVar20, lVar20 != 0)) {
      uVar27 = 0;
      local_a0 = lVar20;
      iVar19 = ossl_quic_wire_decode_pkt_hdr(&local_78,0,1,0,lVar20 + 0x70,local_68);
      if ((iVar19 != 0) && ((*(char *)(lVar20 + 0x70) == '\x01' && (*(uint *)(lVar20 + 0x74) < 2))))
      {
        iVar19 = ossl_qrl_enc_level_set_have_el(param_1 + 0xa8,0,extraout_RDX,uVar27);
        if (iVar19 == 1) {
          if (*(char *)(lVar20 + 0x70) == '\x01') {
            local_80 = *(undefined8 *)(lVar20 + 0xa8);
            iVar19 = qrx_relocate_buffer_constprop_0
                               (param_1,&local_a0,&local_98,&local_80,*(undefined8 *)(lVar20 + 0xb0)
                               );
            if (iVar19 == 0) goto LAB_00100ac0;
            *(undefined8 *)(local_a0 + 0xa8) = local_80;
          }
          local_78 = lVar1;
          local_70 = lVar22;
          uVar27 = ossl_qrl_enc_level_set_get(param_1 + 0xa8,0,1);
          iVar19 = ossl_quic_hdr_protector_decrypt(uVar27,local_68);
          lVar20 = local_a0;
          if (iVar19 != 0) {
            *(ulong *)(param_2 + 0x28) = *(ulong *)(param_2 + 0x28) | 1;
            iVar19 = ossl_quic_wire_decode_pkt_hdr(&local_78,0,0,0,local_a0 + 0x70,0,0);
            if ((iVar19 == 1) &&
               (iVar19 = qrx_validate_hdr(param_1,lVar20,0x100b61), lVar2 = local_98, iVar19 != 0))
            {
              lVar4 = *(long *)(lVar20 + 0xc0);
              lVar23 = *(long *)(lVar20 + 0xb8);
              lVar25 = lVar4;
              if (*(ulong *)(lVar20 + 0x60) < (ulong)(lVar23 + local_98)) {
                lVar20 = qrx_resize_rxe(param_1 + 0x60,lVar20,lVar23 + local_98);
                local_a0 = lVar20;
                if (lVar20 == 0) goto LAB_00100ac0;
                lVar23 = *(long *)(lVar20 + 0xb8);
                lVar25 = *(long *)(lVar20 + 0xc0);
              }
              lVar2 = lVar20 + 0x1d0 + lVar2;
              iVar19 = qrx_decrypt_pkt_body_constprop_0
                                 (param_1,lVar2,lVar25,lVar23,&local_90,lVar1,lVar4 - lVar1,
                                  *(undefined8 *)(lVar20 + 200),0,*(byte *)(lVar20 + 0x71) >> 1 & 1,
                                  &local_88);
              if ((iVar19 != 0) && (iVar19 = qrx_validate_hdr_late(param_1,lVar20), iVar19 != 0)) {
                *(ulong *)(param_2 + 0x20) = *(ulong *)(param_2 + 0x20) | 1;
                *(long *)(lVar20 + 0xc0) = lVar2;
                *(undefined8 *)(lVar20 + 0xb8) = local_90;
                *(undefined8 *)(lVar20 + 0x58) = local_90;
                *(long *)(lVar20 + 0x1b8) = lVar22;
                *(undefined8 *)(lVar20 + 0x1c0) = local_88;
                bVar24 = *(char *)(lVar20 + 0x70) - 2;
                uVar21 = 0;
                if (bVar24 < 4) {
                  uVar3 = *(uint *)(CSWTCH_147 + (ulong)bVar24 * 4);
                  uVar21 = (ulong)uVar3;
                  if (uVar3 != 0) {
                    if (uVar3 == 2) {
                      uVar21 = 1;
                    }
                    else {
                      uVar21 = 2;
                    }
                  }
                }
                if (*(ulong *)(param_1 + 0x90 + uVar21 * 8) < *(ulong *)(lVar20 + 200)) {
                  *(ulong *)(param_1 + (uVar21 + 0x12) * 8) = *(ulong *)(lVar20 + 200);
                }
                uVar27 = *(undefined8 *)(param_2 + 0x40);
                uVar5 = *(undefined8 *)(param_2 + 0x48);
                uVar6 = *(undefined8 *)(param_2 + 0x50);
                uVar7 = *(undefined8 *)(param_2 + 0x58);
                uVar8 = *(undefined8 *)(param_2 + 0x60);
                uVar9 = *(undefined8 *)(param_2 + 0x68);
                uVar10 = *(undefined8 *)(param_2 + 0x70);
                uVar11 = *(undefined8 *)(param_2 + 0x78);
                uVar12 = *(undefined8 *)(param_2 + 0x80);
                uVar13 = *(undefined8 *)(param_2 + 0x88);
                uVar14 = *(undefined8 *)(param_2 + 0x90);
                *(undefined8 *)(lVar20 + 0xd0) = *(undefined8 *)(param_2 + 0x38);
                *(undefined8 *)(lVar20 + 0xd8) = uVar27;
                uVar15 = *(undefined8 *)(param_2 + 0x98);
                uVar16 = *(undefined8 *)(param_2 + 0xa0);
                uVar27 = *(undefined8 *)(param_2 + 0x118);
                *(undefined8 *)(lVar20 + 0xe0) = uVar5;
                *(undefined8 *)(lVar20 + 0xe8) = uVar6;
                uVar5 = *(undefined8 *)(param_2 + 0xa8);
                uVar6 = *(undefined8 *)(param_2 + 0xb0);
                uVar17 = *(undefined8 *)(param_2 + 0xb8);
                uVar18 = *(undefined8 *)(param_2 + 0xc0);
                *(undefined8 *)(lVar20 + 0xf0) = uVar7;
                *(undefined8 *)(lVar20 + 0xf8) = uVar8;
                *(undefined8 *)(lVar20 + 0x100) = uVar9;
                *(undefined8 *)(lVar20 + 0x108) = uVar10;
                uVar7 = *(undefined8 *)(param_2 + 200);
                uVar8 = *(undefined8 *)(param_2 + 0xd0);
                uVar9 = *(undefined8 *)(param_2 + 0xd8);
                uVar10 = *(undefined8 *)(param_2 + 0xe0);
                *(undefined8 *)(lVar20 + 0x110) = uVar11;
                *(undefined8 *)(lVar20 + 0x118) = uVar12;
                uVar11 = *(undefined8 *)(param_2 + 0xe8);
                uVar12 = *(undefined8 *)(param_2 + 0xf0);
                *(undefined8 *)(lVar20 + 0x120) = uVar13;
                *(undefined8 *)(lVar20 + 0x128) = uVar14;
                uVar13 = *(undefined8 *)(param_2 + 0xf8);
                uVar14 = *(undefined8 *)(param_2 + 0x100);
                *(undefined8 *)(lVar20 + 0x130) = uVar15;
                *(undefined8 *)(lVar20 + 0x138) = uVar16;
                uVar15 = *(undefined8 *)(param_2 + 0x108);
                uVar16 = *(undefined8 *)(param_2 + 0x110);
                *(undefined8 *)(lVar20 + 0x1b0) = uVar27;
                uVar27 = *(undefined8 *)(param_2 + 0x30);
                *(undefined8 *)(lVar20 + 0x140) = uVar5;
                *(undefined8 *)(lVar20 + 0x148) = uVar6;
                *(undefined8 *)(lVar20 + 0x1c8) = uVar27;
                *(undefined8 *)(lVar20 + 0x150) = uVar17;
                *(undefined8 *)(lVar20 + 0x158) = uVar18;
                *(undefined8 *)(lVar20 + 0x160) = uVar7;
                *(undefined8 *)(lVar20 + 0x168) = uVar8;
                *(undefined8 *)(lVar20 + 0x170) = uVar9;
                *(undefined8 *)(lVar20 + 0x178) = uVar10;
                *(undefined8 *)(lVar20 + 0x180) = uVar11;
                *(undefined8 *)(lVar20 + 0x188) = uVar12;
                *(undefined8 *)(lVar20 + 400) = uVar13;
                *(undefined8 *)(lVar20 + 0x198) = uVar14;
                *(undefined8 *)(lVar20 + 0x1a0) = uVar15;
                *(undefined8 *)(lVar20 + 0x1a8) = uVar16;
                lVar22 = *(long *)(lVar20 + 0x48);
                if (*(long *)(param_1 + 0x60) == lVar20) {
                  *(long *)(param_1 + 0x60) = lVar22;
                }
                lVar1 = *(long *)(lVar20 + 0x50);
                if (*(long *)(param_1 + 0x68) == lVar20) {
                  *(long *)(param_1 + 0x68) = lVar1;
                }
                if (lVar1 != 0) {
                  *(long *)(lVar1 + 0x48) = lVar22;
                  lVar22 = *(long *)(lVar20 + 0x48);
                }
                if (lVar22 != 0) {
                  *(long *)(lVar22 + 0x50) = lVar1;
                }
                *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
                *(undefined1 (*) [16])(lVar20 + 0x48) = (undefined1  [16])0x0;
                lVar22 = *(long *)(param_1 + 0x80);
                if (lVar22 != 0) {
                  *(long *)(lVar22 + 0x48) = lVar20;
                }
                lVar1 = *(long *)(param_1 + 0x78);
                *(long *)(lVar20 + 0x50) = lVar22;
                *(undefined8 *)(lVar20 + 0x48) = 0;
                *(long *)(param_1 + 0x80) = lVar20;
                if (lVar1 == 0) {
                  *(long *)(param_1 + 0x78) = lVar20;
                }
                *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
                uVar26 = 1;
                goto LAB_00100ac2;
              }
            }
          }
        }
      }
    }
  }
LAB_00100ac0:
  uVar26 = 0;
LAB_00100ac2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar26;
}



undefined8
ossl_qrx_provide_secret
          (undefined8 *param_1,uint param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  
  if (3 < param_2) {
    return 0;
  }
  iVar3 = ossl_qrl_enc_level_set_provide_secret
                    (param_1 + 0x15,*param_1,param_1[1],param_2,param_3,param_4,param_5,param_6,
                     *(undefined1 *)(param_1 + 0x84),0);
  if (iVar3 != 0) {
    pauVar4 = (undefined1 (*) [16])param_1[9];
    do {
      if (pauVar4 == (undefined1 (*) [16])0x0) {
        return 1;
      }
      while( true ) {
        lVar5 = *(long *)*pauVar4;
        plVar2 = *(long **)(*pauVar4 + 8);
        param_1[9] = lVar5;
        if (pauVar4 == (undefined1 (*) [16])param_1[10]) {
          param_1[10] = plVar2;
        }
        if (plVar2 != (long *)0x0) {
          *plVar2 = lVar5;
          lVar5 = *(long *)*pauVar4;
        }
        if (lVar5 != 0) {
          *(long **)(lVar5 + 8) = plVar2;
        }
        param_1[0xb] = param_1[0xb] + -1;
        *pauVar4 = (undefined1  [16])0x0;
        puVar1 = (undefined8 *)param_1[7];
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = pauVar4;
        }
        lVar5 = param_1[6];
        *(undefined8 **)(*pauVar4 + 8) = puVar1;
        *(undefined8 *)*pauVar4 = 0;
        param_1[7] = pauVar4;
        if (lVar5 == 0) break;
        pauVar4 = (undefined1 (*) [16])param_1[9];
        param_1[8] = param_1[8] + 1;
        if (pauVar4 == (undefined1 (*) [16])0x0) {
          return 1;
        }
      }
      param_1[6] = pauVar4;
      pauVar4 = (undefined1 (*) [16])param_1[9];
      param_1[8] = param_1[8] + 1;
    } while( true );
  }
  return 0;
}



undefined8 ossl_qrx_discard_enc_level(long param_1,uint param_2)

{
  if (3 < param_2) {
    return 0;
  }
  ossl_qrl_enc_level_set_discard(param_1 + 0xa8);
  return 1;
}



bool ossl_qrx_processed_read_pending(long param_1)

{
  return *(long *)(param_1 + 0x88) != 0;
}



bool ossl_qrx_unprocessed_read_pending(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(long *)(param_1 + 0x40) == 0) {
    bVar1 = *(long *)(param_1 + 0x58) != 0;
  }
  return bVar1;
}



undefined8 ossl_qrx_read_pkt(long param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  long lVar24;
  void *pvVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  byte bVar30;
  long lVar31;
  long *plVar32;
  ulong uVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  bool bVar35;
  bool bVar36;
  ulong local_110;
  long local_d8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  ulong local_80;
  undefined1 local_78 [32];
  byte local_58;
  undefined7 uStack_57;
  undefined5 uStack_50;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar21 = ossl_qrx_processed_read_pending();
  if (iVar21 == 0) {
    pauVar7 = *(undefined1 (**) [16])(param_1 + 0x30);
    while (pauVar7 != (undefined1 (*) [16])0x0) {
      uVar8 = *(ulong *)pauVar7[1];
      *(long *)(param_1 + 1000) = *(long *)(param_1 + 1000) + uVar8;
      uStack_47 = 0;
      local_58 = 0xff;
      uStack_57 = 0;
      uStack_50 = 0;
      uStack_4b = 0;
      if (((long)uVar8 < 0) ||
         (local_88 = (undefined8 *)(pauVar7[0x12] + 8), local_80 = uVar8, uVar8 < 7)) {
        bVar19 = false;
        lVar28 = *(long *)*pauVar7;
        pauVar5 = *(undefined1 (**) [16])(param_1 + 0x30);
      }
      else {
        bVar19 = false;
        uVar33 = 0;
LAB_001012d8:
        uVar27 = local_80;
        puVar6 = local_88;
        local_a0 = 0;
        lVar28 = *(long *)(param_1 + 0x60);
        local_98 = 0xffffffffffffffff;
        if ((lVar28 == 0) && (lVar28 = qrx_ensure_free_rxe_part_0(param_1,local_80), lVar28 == 0)) {
LAB_00101756:
          uVar33 = uVar33 + 1;
          if ((uVar33 == 0x40) || (local_80 < 7)) goto LAB_00101168;
          goto LAB_001012d8;
        }
        uVar34 = *(ulong *)pauVar7[2];
        bVar35 = (*(ulong *)(pauVar7[2] + 8) >> (uVar33 & 0x3f) & 1) == 0;
        local_b0 = lVar28;
        iVar21 = ossl_quic_wire_decode_pkt_hdr
                           (&local_88,*(undefined8 *)(param_1 + 0x18),bVar35,0,lVar28 + 0x70,
                            local_78,0);
        puVar20 = local_88;
        bVar30 = (byte)uVar33;
        if (iVar21 != 0) {
          bVar36 = (uVar34 >> (uVar33 & 0x3f) & 1) != 0;
          if (uVar33 == 0) {
            local_58 = (byte)*(undefined8 *)(lVar28 + 0x78);
            uStack_57 = (undefined7)((ulong)*(undefined8 *)(lVar28 + 0x78) >> 8);
            uStack_50 = (undefined5)*(undefined8 *)(lVar28 + 0x80);
            uStack_4b = (undefined4)*(undefined8 *)(lVar28 + 0x85);
            uStack_47 = (undefined4)((ulong)*(undefined8 *)(lVar28 + 0x85) >> 0x20);
            if (((!bVar36) && (*(uint *)(lVar28 + 0x74) < 2)) &&
               (bVar2 = *(byte *)(lVar28 + 0x70), bVar2 != 2)) {
              if ((bVar2 & 0xfd) != 4) goto LAB_001013b3;
              uVar27 = *(ulong *)(lVar28 + 0xb8);
              if (*(ulong *)(lVar28 + 0x60) < uVar27) {
                lVar28 = qrx_resize_rxe(param_1 + 0x60,lVar28);
                local_b0 = lVar28;
                if (lVar28 == 0) {
                  uVar34 = 1;
                  goto LAB_00101a6e;
                }
                uVar27 = *(size_t *)(lVar28 + 0xb8);
              }
              pvVar25 = memcpy((void *)(lVar28 + 0x1d0),*(void **)(lVar28 + 0xc0),uVar27);
              uVar23 = *(undefined8 *)(pauVar7[3] + 8);
              uVar10 = *(undefined8 *)pauVar7[4];
              *(ulong *)pauVar7[2] = *(ulong *)pauVar7[2] | 1;
              uVar11 = *(undefined8 *)(pauVar7[4] + 8);
              uVar12 = *(undefined8 *)pauVar7[5];
              uVar13 = *(undefined8 *)(pauVar7[5] + 8);
              uVar14 = *(undefined8 *)pauVar7[6];
              *(void **)(lVar28 + 0xc0) = pvVar25;
              uVar15 = *(undefined8 *)(pauVar7[6] + 8);
              uVar16 = *(undefined8 *)pauVar7[7];
              uVar17 = *(undefined8 *)(pauVar7[7] + 8);
              uVar18 = *(undefined8 *)pauVar7[8];
              *(undefined8 *)(lVar28 + 0xd0) = uVar23;
              *(undefined8 *)(lVar28 + 0xd8) = uVar10;
              *(undefined8 *)(lVar28 + 0xe0) = uVar11;
              *(undefined8 *)(lVar28 + 0xe8) = uVar12;
              uVar23 = *(undefined8 *)(pauVar7[8] + 8);
              uVar10 = *(undefined8 *)pauVar7[9];
              uVar11 = *(undefined8 *)(pauVar7[9] + 8);
              uVar12 = *(undefined8 *)pauVar7[10];
              *(undefined8 *)(lVar28 + 0xf0) = uVar13;
              *(undefined8 *)(lVar28 + 0xf8) = uVar14;
              uVar13 = *(undefined8 *)(pauVar7[10] + 8);
              uVar14 = *(undefined8 *)pauVar7[0xb];
              *(undefined8 *)(lVar28 + 0x58) = *(undefined8 *)(lVar28 + 0xb8);
              *(undefined8 *)(lVar28 + 0x100) = uVar15;
              *(undefined8 *)(lVar28 + 0x108) = uVar16;
              uVar15 = *(undefined8 *)(pauVar7[0xb] + 8);
              uVar16 = *(undefined8 *)pauVar7[0xc];
              *(undefined8 *)(lVar28 + 0x110) = uVar17;
              *(undefined8 *)(lVar28 + 0x118) = uVar18;
              uVar17 = *(undefined8 *)(pauVar7[0xc] + 8);
              uVar18 = *(undefined8 *)pauVar7[0xd];
              *(undefined8 *)(lVar28 + 0x120) = uVar23;
              *(undefined8 *)(lVar28 + 0x128) = uVar10;
              uVar23 = *(undefined8 *)(pauVar7[0xd] + 8);
              uVar10 = *(undefined8 *)pauVar7[0xe];
              *(undefined8 *)(lVar28 + 0x130) = uVar11;
              *(undefined8 *)(lVar28 + 0x138) = uVar12;
              uVar11 = *(undefined8 *)(pauVar7[0xe] + 8);
              uVar12 = *(undefined8 *)pauVar7[0xf];
              *(ulong *)(lVar28 + 0x1b8) = uVar8;
              *(undefined8 *)(lVar28 + 0x140) = uVar13;
              *(undefined8 *)(lVar28 + 0x148) = uVar14;
              *(undefined8 *)(lVar28 + 0x150) = uVar15;
              *(undefined8 *)(lVar28 + 0x158) = uVar16;
              *(undefined8 *)(lVar28 + 200) = 0xffffffffffffffff;
              *(undefined8 *)(lVar28 + 0x1c0) = 0;
              *(undefined8 *)(lVar28 + 0x160) = uVar17;
              *(undefined8 *)(lVar28 + 0x168) = uVar18;
              *(undefined8 *)(lVar28 + 0x170) = uVar23;
              *(undefined8 *)(lVar28 + 0x178) = uVar10;
              *(undefined8 *)(lVar28 + 0x180) = uVar11;
              *(undefined8 *)(lVar28 + 0x188) = uVar12;
              lVar24 = *(long *)(param_1 + 0x60);
              uVar10 = *(undefined8 *)(pauVar7[0xf] + 8);
              uVar11 = *(undefined8 *)pauVar7[0x10];
              uVar12 = *(undefined8 *)(pauVar7[0x10] + 8);
              uVar13 = *(undefined8 *)pauVar7[0x11];
              *(undefined8 *)(lVar28 + 0x1b0) = *(undefined8 *)(pauVar7[0x11] + 8);
              uVar23 = *(undefined8 *)pauVar7[3];
              *(undefined8 *)(lVar28 + 400) = uVar10;
              *(undefined8 *)(lVar28 + 0x198) = uVar11;
              *(undefined8 *)(lVar28 + 0x1c8) = uVar23;
              lVar26 = *(long *)(lVar28 + 0x48);
              *(undefined8 *)(lVar28 + 0x1a0) = uVar12;
              *(undefined8 *)(lVar28 + 0x1a8) = uVar13;
              if (lVar24 == lVar28) {
                *(long *)(param_1 + 0x60) = lVar26;
                lVar24 = *(long *)(lVar28 + 0x50);
                lVar9 = *(long *)(param_1 + 0x68);
              }
              else {
                lVar24 = *(long *)(lVar28 + 0x50);
                lVar9 = *(long *)(param_1 + 0x68);
              }
              if (lVar9 == lVar28) {
                *(long *)(param_1 + 0x68) = lVar24;
              }
              if (lVar24 != 0) {
                *(long *)(lVar24 + 0x48) = lVar26;
                lVar26 = *(long *)(lVar28 + 0x48);
              }
              if (lVar26 != 0) {
                *(long *)(lVar26 + 0x50) = lVar24;
              }
              *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
              *(undefined1 (*) [16])(lVar28 + 0x48) = (undefined1  [16])0x0;
              lVar24 = *(long *)(param_1 + 0x80);
joined_r0x00101722:
              if (lVar24 != 0) {
                *(long *)(lVar24 + 0x48) = lVar28;
              }
              *(long *)(lVar28 + 0x50) = lVar24;
              *(undefined8 *)(lVar28 + 0x48) = 0;
              *(long *)(param_1 + 0x80) = lVar28;
              if (*(long *)(param_1 + 0x78) == 0) {
                *(long *)(param_1 + 0x78) = lVar28;
              }
              *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
              goto LAB_00101756;
            }
            uVar34 = 1;
LAB_001017ee:
            local_110 = local_80;
            if (puVar20 == (undefined8 *)0x0) goto LAB_00101163;
            *(ulong *)pauVar7[2] = *(ulong *)pauVar7[2] | uVar34;
            uVar27 = 0;
          }
          else {
            if (((((bVar36) || (1 < *(uint *)(lVar28 + 0x74))) ||
                 (bVar2 = *(byte *)(lVar28 + 0x70), bVar2 == 2)) ||
                (((bVar2 & 0xfd) == 4 || (0x13 < local_58)))) ||
               ((local_58 != *(byte *)(lVar28 + 0x78) ||
                (iVar21 = memcmp(&uStack_57,(void *)(lVar28 + 0x79),(ulong)local_58), iVar21 != 0)))
               ) {
              uVar34 = 1L << (bVar30 & 0x3f);
              goto LAB_001017ee;
            }
LAB_001013b3:
            if ((byte)(bVar2 - 2) < 4) {
              iVar21 = *(int *)(CSWTCH_147 + (ulong)(byte)(bVar2 - 2) * 4);
              iVar22 = ossl_qrl_enc_level_set_have_el(param_1 + 0xa8);
              if (iVar22 != 0) {
                if (iVar22 != 1) goto LAB_00101a58;
                if ((iVar21 != 3) || (*(char *)(param_1 + 0x421) != '\0')) goto LAB_001013fa;
              }
LAB_00101b00:
              bVar19 = true;
              if ((ulong)((long)puVar20 - (long)local_88) <= local_80) {
                local_80 = local_80 - ((long)puVar20 - (long)local_88);
                local_88 = puVar20;
              }
              goto LAB_00101756;
            }
            iVar21 = ossl_qrl_enc_level_set_have_el(param_1 + 0xa8,0);
            if (iVar21 == 0) goto LAB_00101b00;
            if (iVar21 == 1) {
              iVar21 = 0;
LAB_001013fa:
              local_d8 = param_1 + 0xa8;
              local_a8 = 0;
              uVar34 = 1L << (bVar30 & 0x3f);
              if (*(char *)(lVar28 + 0x70) == '\x01') {
                local_90 = *(undefined8 *)(lVar28 + 0xa8);
                iVar22 = qrx_relocate_buffer_constprop_0
                                   (param_1,&local_b0,&local_a8,&local_90,
                                    *(undefined8 *)(lVar28 + 0xb0));
                if (iVar22 == 0) goto LAB_00101a6e;
                *(undefined8 *)(local_b0 + 0xa8) = local_90;
              }
              local_88 = puVar6;
              local_80 = uVar27;
              lVar24 = ossl_qrl_enc_level_set_get(local_d8,iVar21,1);
              lVar28 = local_b0;
              if (bVar35) {
                iVar22 = ossl_quic_hdr_protector_decrypt(lVar24,local_78);
                lVar28 = local_b0;
                if (iVar22 != 0) {
                  *(ulong *)(pauVar7[2] + 8) = *(ulong *)(pauVar7[2] + 8) | uVar34;
                  iVar22 = ossl_quic_wire_decode_pkt_hdr
                                     (&local_88,*(undefined8 *)(param_1 + 0x18),0,0,local_b0 + 0x70,
                                      0,0);
                  if (iVar22 == 1) goto LAB_00101465;
                }
              }
              else {
LAB_00101465:
                iVar22 = qrx_validate_hdr(param_1,lVar28);
                if (iVar22 != 0) {
                  if (*(code **)(param_1 + 0x428) != (code *)0x0) {
                    (**(code **)(param_1 + 0x428))
                              (0,1,0x201,puVar6,
                               (undefined1 *)
                               ((long)puVar20 + (-*(long *)(lVar28 + 0xb8) - (long)puVar6)),
                               *(undefined8 *)(param_1 + 0x438),*(undefined8 *)(param_1 + 0x430));
                  }
                  lVar26 = local_a8;
                  lVar9 = *(long *)(lVar28 + 0xc0);
                  lVar29 = *(long *)(lVar28 + 0xb8);
                  lVar31 = lVar9;
                  if (*(ulong *)(lVar28 + 0x60) < (ulong)(lVar29 + local_a8)) {
                    lVar28 = qrx_resize_rxe(param_1 + 0x60,lVar28,lVar29 + local_a8);
                    local_b0 = lVar28;
                    if (lVar28 == 0) goto LAB_00101163;
                    lVar29 = *(long *)(lVar28 + 0xb8);
                    lVar31 = *(long *)(lVar28 + 0xc0);
                  }
                  lVar26 = lVar28 + 0x1d0 + lVar26;
                  iVar21 = qrx_decrypt_pkt_body_constprop_0
                                     (param_1,lVar26,lVar31,lVar29,&local_a0,puVar6,
                                      lVar9 - (long)puVar6,*(undefined8 *)(lVar28 + 200),iVar21,
                                      *(byte *)(lVar28 + 0x71) >> 1 & 1,&local_98);
                  if ((iVar21 != 0) && (iVar21 = qrx_validate_hdr_late(param_1,lVar28), iVar21 != 0)
                     ) {
                    if ((*(char *)(lVar28 + 0x70) == '\x05') &&
                       ((*(byte *)(lVar28 + 0x71) >> 1 & 1) !=
                        ((uint)*(undefined8 *)(lVar24 + 0x50) & 1))) {
                      uVar23 = *(undefined8 *)(lVar28 + 200);
                      iVar21 = ossl_qrl_enc_level_set_key_update(local_d8,3);
                      if (iVar21 != 0) {
                        *(undefined8 *)(param_1 + 0x3f8) = uVar23;
                        if (*(code **)(param_1 + 0x410) != (code *)0x0) {
                          (**(code **)(param_1 + 0x410))(uVar23,*(undefined8 *)(param_1 + 0x418));
                        }
                      }
                    }
                    *(ulong *)pauVar7[2] = *(ulong *)pauVar7[2] | uVar34;
                    *(long *)(lVar28 + 0xc0) = lVar26;
                    *(undefined8 *)(lVar28 + 0xb8) = local_a0;
                    *(undefined8 *)(lVar28 + 0x58) = local_a0;
                    *(ulong *)(lVar28 + 0x1b8) = uVar8;
                    *(undefined8 *)(lVar28 + 0x1c0) = local_98;
                    bVar30 = *(char *)(lVar28 + 0x70) - 2;
                    uVar27 = 0;
                    if (bVar30 < 4) {
                      uVar3 = *(uint *)(CSWTCH_147 + (ulong)bVar30 * 4);
                      uVar27 = (ulong)uVar3;
                      if (uVar3 != 0) {
                        uVar27 = (ulong)((uVar3 != 2) + 1);
                      }
                    }
                    if (*(ulong *)(param_1 + 0x90 + uVar27 * 8) < *(ulong *)(lVar28 + 200)) {
                      *(ulong *)(param_1 + (uVar27 + 0x12) * 8) = *(ulong *)(lVar28 + 200);
                    }
                    uVar10 = *(undefined8 *)pauVar7[4];
                    uVar11 = *(undefined8 *)(pauVar7[6] + 8);
                    uVar12 = *(undefined8 *)pauVar7[7];
                    uVar23 = *(undefined8 *)(pauVar7[0x11] + 8);
                    *(undefined8 *)(lVar28 + 0xd0) = *(undefined8 *)(pauVar7[3] + 8);
                    *(undefined8 *)(lVar28 + 0xd8) = uVar10;
                    uVar10 = *(undefined8 *)pauVar7[5];
                    *(undefined8 *)(lVar28 + 0xe0) = *(undefined8 *)(pauVar7[4] + 8);
                    *(undefined8 *)(lVar28 + 0xe8) = uVar10;
                    uVar10 = *(undefined8 *)(pauVar7[5] + 8);
                    uVar13 = *(undefined8 *)pauVar7[6];
                    *(undefined8 *)(lVar28 + 0x100) = uVar11;
                    *(undefined8 *)(lVar28 + 0x108) = uVar12;
                    uVar11 = *(undefined8 *)(pauVar7[8] + 8);
                    uVar12 = *(undefined8 *)pauVar7[9];
                    *(undefined8 *)(lVar28 + 0xf0) = uVar10;
                    *(undefined8 *)(lVar28 + 0xf8) = uVar13;
                    uVar10 = *(undefined8 *)(pauVar7[7] + 8);
                    uVar13 = *(undefined8 *)pauVar7[8];
                    *(undefined8 *)(lVar28 + 0x120) = uVar11;
                    *(undefined8 *)(lVar28 + 0x128) = uVar12;
                    uVar11 = *(undefined8 *)(pauVar7[10] + 8);
                    uVar12 = *(undefined8 *)pauVar7[0xb];
                    *(undefined8 *)(lVar28 + 0x110) = uVar10;
                    *(undefined8 *)(lVar28 + 0x118) = uVar13;
                    uVar10 = *(undefined8 *)(pauVar7[9] + 8);
                    uVar13 = *(undefined8 *)pauVar7[10];
                    *(undefined8 *)(lVar28 + 0x140) = uVar11;
                    *(undefined8 *)(lVar28 + 0x148) = uVar12;
                    uVar11 = *(undefined8 *)(pauVar7[0xc] + 8);
                    uVar12 = *(undefined8 *)pauVar7[0xd];
                    *(undefined8 *)(lVar28 + 0x130) = uVar10;
                    *(undefined8 *)(lVar28 + 0x138) = uVar13;
                    uVar10 = *(undefined8 *)(pauVar7[0xb] + 8);
                    uVar13 = *(undefined8 *)pauVar7[0xc];
                    *(undefined8 *)(lVar28 + 0x160) = uVar11;
                    *(undefined8 *)(lVar28 + 0x168) = uVar12;
                    uVar11 = *(undefined8 *)(pauVar7[0xe] + 8);
                    uVar12 = *(undefined8 *)pauVar7[0xf];
                    *(undefined8 *)(lVar28 + 0x150) = uVar10;
                    *(undefined8 *)(lVar28 + 0x158) = uVar13;
                    uVar10 = *(undefined8 *)(pauVar7[0xd] + 8);
                    uVar13 = *(undefined8 *)pauVar7[0xe];
                    *(undefined8 *)(lVar28 + 0x180) = uVar11;
                    *(undefined8 *)(lVar28 + 0x188) = uVar12;
                    uVar11 = *(undefined8 *)(pauVar7[0x10] + 8);
                    uVar12 = *(undefined8 *)pauVar7[0x11];
                    *(undefined8 *)(lVar28 + 0x170) = uVar10;
                    *(undefined8 *)(lVar28 + 0x178) = uVar13;
                    uVar10 = *(undefined8 *)(pauVar7[0xf] + 8);
                    uVar13 = *(undefined8 *)pauVar7[0x10];
                    *(undefined8 *)(lVar28 + 0x1b0) = uVar23;
                    uVar23 = *(undefined8 *)pauVar7[3];
                    *(undefined8 *)(lVar28 + 400) = uVar10;
                    *(undefined8 *)(lVar28 + 0x198) = uVar13;
                    *(undefined8 *)(lVar28 + 0x1c8) = uVar23;
                    *(undefined8 *)(lVar28 + 0x1a0) = uVar11;
                    *(undefined8 *)(lVar28 + 0x1a8) = uVar12;
                    lVar24 = *(long *)(lVar28 + 0x48);
                    if (*(long *)(param_1 + 0x60) == lVar28) {
                      *(long *)(param_1 + 0x60) = lVar24;
                    }
                    lVar26 = *(long *)(lVar28 + 0x50);
                    if (*(long *)(param_1 + 0x68) == lVar28) {
                      *(long *)(param_1 + 0x68) = lVar26;
                    }
                    if (lVar26 != 0) {
                      *(long *)(lVar26 + 0x48) = lVar24;
                      lVar24 = *(long *)(lVar28 + 0x48);
                    }
                    if (lVar24 != 0) {
                      *(long *)(lVar24 + 0x50) = lVar26;
                    }
                    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
                    *(undefined1 (*) [16])(lVar28 + 0x48) = (undefined1  [16])0x0;
                    lVar24 = *(long *)(param_1 + 0x80);
                    goto joined_r0x00101722;
                  }
                }
              }
            }
            else {
LAB_00101a58:
              uVar34 = 1L << (bVar30 & 0x3f);
            }
LAB_00101a6e:
            local_110 = local_80;
            if (puVar20 == (undefined8 *)0x0) goto LAB_00101163;
            *(ulong *)pauVar7[2] = *(ulong *)pauVar7[2] | uVar34;
            uVar27 = (long)puVar20 - (long)local_88;
            if (local_80 < uVar27) goto LAB_00101756;
          }
          local_80 = local_110 - uVar27;
          local_88 = puVar20;
          goto LAB_00101756;
        }
        uVar34 = 1L << (bVar30 & 0x3f);
LAB_00101163:
        *(ulong *)pauVar7[2] = *(ulong *)pauVar7[2] | uVar34;
LAB_00101168:
        lVar28 = *(long *)*pauVar7;
        pauVar5 = *(undefined1 (**) [16])(param_1 + 0x30);
      }
      if (pauVar5 == pauVar7) {
        *(long *)(param_1 + 0x30) = lVar28;
        plVar4 = *(long **)(*pauVar7 + 8);
        pauVar5 = *(undefined1 (**) [16])(param_1 + 0x38);
      }
      else {
        plVar4 = *(long **)(*pauVar7 + 8);
        pauVar5 = *(undefined1 (**) [16])(param_1 + 0x38);
      }
      if (pauVar5 == pauVar7) {
        *(long **)(param_1 + 0x38) = plVar4;
      }
      if (plVar4 != (long *)0x0) {
        *plVar4 = lVar28;
        lVar28 = *(long *)*pauVar7;
      }
      if (lVar28 != 0) {
        *(long **)(lVar28 + 8) = plVar4;
      }
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
      *pauVar7 = (undefined1  [16])0x0;
      if (bVar19) {
        cVar1 = pauVar7[0x12][0];
        if ((cVar1 == '\0') && (*(ulong *)(param_1 + 0x20) <= *(ulong *)(param_1 + 0x28)))
        goto LAB_00101a41;
        puVar6 = *(undefined8 **)(param_1 + 0x50);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = pauVar7;
        }
        lVar28 = *(long *)(param_1 + 0x48);
        *(undefined8 **)(*pauVar7 + 8) = puVar6;
        *(undefined8 *)*pauVar7 = 0;
        *(undefined1 (**) [16])(param_1 + 0x50) = pauVar7;
        if (lVar28 == 0) {
          *(undefined1 (**) [16])(param_1 + 0x48) = pauVar7;
        }
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
        if (cVar1 == '\0') {
          pauVar7[0x12][0] = 1;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        }
      }
      else {
        if (pauVar7[0x12][0] != '\0') {
          pauVar7[0x12][0] = 0;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
        }
LAB_00101a41:
        ossl_quic_demux_release_urxe(*(undefined8 *)(param_1 + 0x10),pauVar7);
      }
      pauVar7 = *(undefined1 (**) [16])(param_1 + 0x30);
    }
    iVar21 = ossl_qrx_processed_read_pending(param_1);
    if (iVar21 != 0) goto LAB_0010105b;
  }
  else {
LAB_0010105b:
    plVar4 = *(long **)(param_1 + 0x78);
    if (plVar4 != (long *)0x0) {
      lVar28 = plVar4[9];
      lVar24 = plVar4[10];
      *(long *)(param_1 + 0x78) = lVar28;
      if (plVar4 == *(long **)(param_1 + 0x80)) {
        *(long *)(param_1 + 0x80) = lVar24;
      }
      if (lVar24 != 0) {
        *(long *)(lVar24 + 0x48) = lVar28;
        lVar28 = plVar4[9];
      }
      if (lVar28 != 0) {
        *(long *)(lVar28 + 0x50) = lVar24;
      }
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
      *plVar4 = (long)(plVar4 + 0xe);
      plVar4[0xd] = 1;
      plVar4[4] = plVar4[0x19];
      *(undefined1 (*) [16])(plVar4 + 9) = (undefined1  [16])0x0;
      plVar4[5] = plVar4[0x36];
      plVar4[3] = plVar4[0x37];
      iVar21 = BIO_ADDR_family(plVar4 + 0x1a);
      plVar32 = plVar4 + 0x1a;
      if (iVar21 == 0) {
        plVar32 = (long *)0x0;
      }
      plVar4[1] = (long)plVar32;
      iVar21 = BIO_ADDR_family(plVar4 + 0x28);
      plVar4[6] = param_1;
      uVar23 = 1;
      plVar32 = plVar4 + 0x28;
      if (iVar21 == 0) {
        plVar32 = (long *)0x0;
      }
      plVar4[7] = plVar4[0x38];
      plVar4[8] = plVar4[0x39];
      plVar4[2] = (long)plVar32;
      *param_2 = plVar4;
      goto LAB_00101124;
    }
  }
  uVar23 = 0;
LAB_00101124:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar23;
}



void ossl_qrx_pkt_release(undefined1 (*param_1) [16])

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != (undefined1 (*) [16])0x0) {
    plVar1 = (long *)(param_1[6] + 8);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      lVar2 = *(long *)param_1[3];
      *(undefined8 *)param_1[1] = 0;
      *param_1 = (undefined1  [16])0x0;
      lVar3 = *(long *)(lVar2 + 0x68);
      if (lVar3 != 0) {
        *(undefined1 (**) [16])(lVar3 + 0x48) = param_1;
      }
      lVar4 = *(long *)(lVar2 + 0x60);
      *(long *)param_1[5] = lVar3;
      *(undefined8 *)(param_1[4] + 8) = 0;
      *(undefined1 (**) [16])(lVar2 + 0x68) = param_1;
      if (lVar4 == 0) {
        *(undefined1 (**) [16])(lVar2 + 0x60) = param_1;
      }
      *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x70) + 1;
      return;
    }
  }
  return;
}



void ossl_qrx_pkt_orphan(long param_1)

{
  if (param_1 != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
  }
  return;
}



void ossl_qrx_inject_pkt(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  ossl_qrx_pkt_orphan(param_2);
  if (*(long *)(param_2 + 0x68) == 0) {
    lVar1 = *(long *)(param_1 + 0x80);
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x48) = param_2;
    }
    lVar2 = *(long *)(param_1 + 0x78);
    *(long *)(param_2 + 0x50) = lVar1;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(long *)(param_1 + 0x80) = param_2;
    if (lVar2 == 0) {
      *(long *)(param_1 + 0x78) = param_2;
    }
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  }
  return;
}



void ossl_qrx_pkt_up_ref(long param_1)

{
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  return;
}



undefined8 ossl_qrx_get_bytes_received(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 1000);
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 1000) = 0;
  }
  return uVar1;
}



undefined8 ossl_qrx_set_late_validation_cb(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x400) = param_2;
  *(undefined8 *)(param_1 + 0x408) = param_3;
  return 1;
}



undefined8 ossl_qrx_set_key_update_cb(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x410) = param_2;
  *(undefined8 *)(param_1 + 0x418) = param_3;
  return 1;
}



undefined8 ossl_qrx_get_key_epoch(long param_1)

{
  long lVar1;
  
  lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0xa8,3,1);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x50);
  }
  return 0xffffffffffffffff;
}



bool ossl_qrx_key_update_timeout(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  param_1 = param_1 + 0xa8;
  lVar2 = ossl_qrl_enc_level_set_get(param_1,3,1);
  if (lVar2 == 0) {
    return false;
  }
  if ((*(char *)(lVar2 + 0x68) == '\x02') &&
     (iVar1 = ossl_qrl_enc_level_set_key_update_done(param_1,3), iVar1 == 0)) {
    return false;
  }
  bVar3 = true;
  if ((param_2 != 0) && (*(char *)(lVar2 + 0x68) == '\x03')) {
    iVar1 = ossl_qrl_enc_level_set_key_cooldown_done(param_1,3);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



undefined8 ossl_qrx_get_cur_forged_pkt_count(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3f0);
}



undefined8 ossl_qrx_get_max_forged_pkt_count(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0xa8,param_2,1);
  if (lVar1 != 0) {
    uVar2 = ossl_qrl_get_suite_max_forged_pkt(*(undefined4 *)(lVar1 + 0x60));
    return uVar2;
  }
  return 0xffffffffffffffff;
}



void ossl_qrx_allow_1rtt_processing(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x421) == '\0') {
    pauVar1 = *(undefined1 (**) [16])(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x421) = 1;
    while (pauVar1 != (undefined1 (*) [16])0x0) {
      lVar4 = *(long *)*pauVar1;
      plVar3 = *(long **)(*pauVar1 + 8);
      *(long *)(param_1 + 0x48) = lVar4;
      if (pauVar1 == *(undefined1 (**) [16])(param_1 + 0x50)) {
        *(long **)(param_1 + 0x50) = plVar3;
      }
      if (plVar3 != (long *)0x0) {
        *plVar3 = lVar4;
        lVar4 = *(long *)*pauVar1;
      }
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar3;
      }
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
      *pauVar1 = (undefined1  [16])0x0;
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = pauVar1;
      }
      lVar4 = *(long *)(param_1 + 0x30);
      *(undefined8 **)(*pauVar1 + 8) = puVar2;
      *(undefined8 *)*pauVar1 = 0;
      *(undefined1 (**) [16])(param_1 + 0x38) = pauVar1;
      if (lVar4 == 0) {
        *(undefined1 (**) [16])(param_1 + 0x30) = pauVar1;
      }
      pauVar1 = *(undefined1 (**) [16])(param_1 + 0x48);
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    }
  }
  return;
}



void ossl_qrx_set_msg_callback(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x428) = param_2;
  *(undefined8 *)(param_1 + 0x438) = param_3;
  return;
}



void ossl_qrx_set_msg_callback_arg(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x430) = param_2;
  return;
}



undefined8 ossl_qrx_get_short_hdr_conn_id_len(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


