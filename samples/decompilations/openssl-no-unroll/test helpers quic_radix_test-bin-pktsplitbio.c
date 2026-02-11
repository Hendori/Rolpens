
undefined8
pkt_split_dgram_recvmmsg
          (BIO *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
          ulong *param_6)

{
  long lVar1;
  size_t __n;
  int iVar2;
  BIO *pBVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined8 local_a8;
  size_t local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pBVar3 = BIO_next(param_1);
  puVar4 = (undefined8 *)BIO_get_data(param_1);
  iVar2 = test_ptr("test/helpers/pktsplitbio.c",0x3a,&_LC0,pBVar3);
  if ((iVar2 != 0) &&
     (iVar2 = test_ptr("test/helpers/pktsplitbio.c",0x3a,"bdata",puVar4), iVar2 != 0)) {
    if (param_4 == 0) {
LAB_00100123:
      iVar2 = BIO_recvmmsg(pBVar3,param_2,param_3,param_4,param_5,param_6);
      if (iVar2 != 0) {
        uVar7 = *param_6;
        if (param_4 != uVar7) {
          uVar10 = 0;
          puVar9 = param_2;
          if (uVar7 != 0) {
            do {
              if ((long)puVar9[1] < 0) goto LAB_00100080;
              local_a8 = *puVar9;
              local_a0 = puVar9[1];
              iVar2 = ossl_quic_wire_decode_pkt_hdr(&local_a8,*puVar4,0,0,local_98,0);
              __n = local_a0;
              uVar5 = 0;
              if (iVar2 != 1) goto LAB_00100080;
              if (local_a0 != 0) {
                if (uVar10 < uVar7) {
                  uVar6 = uVar7;
                  puVar8 = param_2 + uVar7 * 5;
                  do {
                    iVar2 = bio_msg_copy(puVar8,puVar8 + -5,uVar5);
                    if (iVar2 == 0) goto LAB_00100080;
                    uVar6 = uVar6 - 1;
                    uVar5 = extraout_RDX;
                    puVar8 = puVar8 + -5;
                  } while (uVar10 != uVar6);
                }
                lVar1 = puVar9[1];
                puVar9[6] = __n;
                uVar7 = uVar7 + 1;
                puVar9[1] = lVar1 - __n;
                memmove((void *)puVar9[5],(void *)((long)puVar9[5] + (lVar1 - __n)),__n);
              }
              uVar10 = uVar10 + 1;
              puVar9 = puVar9 + 5;
            } while (uVar10 < uVar7);
          }
          *param_6 = uVar7;
        }
        uVar5 = 1;
        goto LAB_00100082;
      }
    }
    else {
      uVar7 = 0;
      uVar5 = param_2[1];
      puVar9 = param_2 + 1;
      do {
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 5;
        if (param_4 == uVar7) goto LAB_00100123;
        iVar2 = test_size_t_eq("test/helpers/pktsplitbio.c",0x47,"msg[i].data_len","data_len",
                               *puVar9,uVar5);
      } while (iVar2 != 0);
    }
  }
LAB_00100080:
  uVar5 = 0;
LAB_00100082:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8
pkt_split_dgram_sendmmsg
          (BIO *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  BIO *pBVar1;
  undefined8 uVar2;
  
  pBVar1 = BIO_next(param_1);
  if (pBVar1 != (BIO *)0x0) {
    uVar2 = BIO_sendmmsg(pBVar1,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  return 0;
}



long pkt_split_dgram_ctrl(BIO *param_1,int param_2,long param_3,void *param_4)

{
  BIO *bp;
  long lVar1;
  
  bp = BIO_next(param_1);
  if ((param_2 != 0xc) && (bp != (BIO *)0x0)) {
    lVar1 = BIO_ctrl(bp,param_2,param_3,param_4);
    return lVar1;
  }
  return 0;
}



long bio_f_pkt_split_dgram_filter(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = method_pkt_split_dgram;
  if ((((method_pkt_split_dgram == 0) &&
       (method_pkt_split_dgram = BIO_meth_new(0x281,"Packet splitting datagram filter"),
       method_pkt_split_dgram != 0)) &&
      (iVar1 = BIO_meth_set_ctrl(method_pkt_split_dgram,pkt_split_dgram_ctrl), iVar1 != 0)) &&
     ((iVar1 = BIO_meth_set_sendmmsg(method_pkt_split_dgram,pkt_split_dgram_sendmmsg), iVar1 != 0 &&
      (iVar1 = BIO_meth_set_recvmmsg(method_pkt_split_dgram,0x100000), iVar1 != 0)))) {
    lVar2 = method_pkt_split_dgram;
  }
  return lVar2;
}



void bio_f_pkt_split_dgram_filter_free(void)

{
  BIO_meth_free(method_pkt_split_dgram);
  return;
}


