
void RSAZ_1024_mod_exp_avx2
               (ulong *param_1,undefined8 param_2,byte *param_3,ulong *param_4,undefined8 param_5,
               undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  ulong local_16c8;
  ulong local_16c0;
  ulong local_16b8;
  ulong local_16b0;
  ulong local_16a8;
  ulong local_16a0;
  ulong local_1698;
  ulong local_1690;
  ulong local_1688;
  ulong local_1680;
  ulong local_1678;
  ulong local_1670;
  ulong local_1668;
  ulong local_1660;
  ulong local_1658;
  ulong local_1650;
  undefined1 local_1648 [8];
  undefined1 local_1640 [320];
  undefined1 local_1500 [320];
  undefined1 local_13c0 [320];
  undefined1 local_1280 [4672];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = local_1640;
  puVar4 = local_13c0;
  puVar5 = local_1500;
  if ((ulong)((uint)local_1640 & 0xfff) + 0x140 >> 0xc == 0) {
    puVar3 = local_1500;
    puVar4 = local_1640;
    puVar5 = local_13c0;
  }
  rsaz_1024_norm2red_avx2(puVar4,param_4);
  rsaz_1024_norm2red_avx2(puVar5,param_2);
  rsaz_1024_norm2red_avx2(local_1280,param_5);
  rsaz_1024_mul_avx2(local_1280,local_1280,local_1280,puVar4,param_6);
  rsaz_1024_mul_avx2(local_1280,local_1280,two80,puVar4,param_6);
  rsaz_1024_mul_avx2(puVar3,local_1280,one,puVar4,param_6);
  rsaz_1024_mul_avx2(puVar5,puVar5,local_1280,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0);
  rsaz_1024_scatter5_avx2(local_1280,puVar5,1);
  rsaz_1024_sqr_avx2(puVar3,puVar5,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,2);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,4);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,8);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x10);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x11);
  rsaz_1024_gather5_avx2(puVar3,local_1280,2);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,3);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,6);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0xc);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x18);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x19);
  rsaz_1024_gather5_avx2(puVar3,local_1280,4);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,5);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,10);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x14);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x15);
  rsaz_1024_gather5_avx2(puVar3,local_1280,6);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,7);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0xe);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x1c);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x1d);
  rsaz_1024_gather5_avx2(puVar3,local_1280,8);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,9);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x12);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x13);
  rsaz_1024_gather5_avx2(puVar3,local_1280,10);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0xb);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x16);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x17);
  rsaz_1024_gather5_avx2(puVar3,local_1280,0xc);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0xd);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x1a);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x1b);
  rsaz_1024_gather5_avx2(puVar3,local_1280,0xe);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0xf);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,1);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x1e);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_scatter5_avx2(local_1280,puVar3,0x1f);
  rsaz_1024_gather5_avx2(puVar3,local_1280,param_3[0x7f] >> 3);
  iVar6 = 0x3f6;
  do {
    rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,5);
    iVar7 = iVar6 + -5;
    rsaz_1024_gather5_avx2
              (puVar5,local_1280,
               (int)(uint)CONCAT11(param_3[(long)(iVar6 >> 3) + 1],param_3[iVar6 >> 3]) >>
               ((byte)iVar6 & 7) & 0x1f);
    rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
    iVar6 = iVar7;
  } while (iVar7 != -1);
  rsaz_1024_sqr_avx2(puVar3,puVar3,puVar4,param_6,4);
  rsaz_1024_gather5_avx2(puVar5,local_1280,*param_3 & 0xf);
  rsaz_1024_mul_avx2(puVar3,puVar3,puVar5,puVar4,param_6);
  rsaz_1024_mul_avx2(puVar3,puVar3,one,puVar4,param_6);
  rsaz_1024_red2norm_avx2(param_1,puVar3);
  uVar1 = bn_sub_words(&local_16c8,param_1,param_4,0x10);
  uVar2 = uVar1 - 1;
  uVar1 = -uVar1;
  *param_1 = uVar1 & *param_1 | local_16c8 & uVar2;
  param_1[1] = param_1[1] & uVar1 | local_16c0 & uVar2;
  param_1[2] = param_1[2] & uVar1 | local_16b8 & uVar2;
  param_1[3] = param_1[3] & uVar1 | local_16b0 & uVar2;
  param_1[4] = param_1[4] & uVar1 | local_16a8 & uVar2;
  param_1[5] = param_1[5] & uVar1 | local_16a0 & uVar2;
  param_1[6] = param_1[6] & uVar1 | local_1698 & uVar2;
  param_1[7] = param_1[7] & uVar1 | local_1690 & uVar2;
  param_1[8] = param_1[8] & uVar1 | local_1688 & uVar2;
  param_1[9] = param_1[9] & uVar1 | local_1680 & uVar2;
  param_1[10] = param_1[10] & uVar1 | local_1678 & uVar2;
  param_1[0xb] = param_1[0xb] & uVar1 | local_1670 & uVar2;
  param_1[0xc] = param_1[0xc] & uVar1 | local_1668 & uVar2;
  param_1[0xd] = param_1[0xd] & uVar1 | local_1660 & uVar2;
  param_1[0xf] = uVar2 & local_1650 | uVar1 & param_1[0xf];
  param_1[0xe] = param_1[0xe] & uVar1 | local_1658 & uVar2;
  OPENSSL_cleanse(local_1648,0x1600);
  OPENSSL_cleanse(&local_16c8,0x80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void RSAZ_512_mod_exp(ulong *param_1,undefined8 param_2,byte *param_3,ulong *param_4,
                     undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  long in_FS_OFFSET;
  bool bVar7;
  ulong local_548;
  ulong local_540;
  ulong local_538;
  ulong local_530;
  ulong local_528;
  ulong local_520;
  ulong local_518;
  ulong local_510;
  undefined1 local_508 [8];
  undefined1 local_500 [1024];
  undefined1 local_100 [64];
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = -*param_4;
  local_b8 = ~param_4[1];
  local_b0 = ~param_4[2];
  local_a8 = ~param_4[3];
  local_a0 = ~param_4[4];
  local_98 = ~param_4[5];
  local_90 = ~param_4[6];
  local_88 = ~param_4[7];
  rsaz_512_scatter4(local_500,&local_c0,0);
  rsaz_512_mul(local_100,param_2,param_6,param_4,param_5);
  rsaz_512_scatter4(local_500,local_100,1);
  rsaz_512_sqr(&local_c0,local_100,param_4,param_5,1);
  rsaz_512_scatter4(local_500,&local_c0,2);
  iVar4 = 3;
  do {
    iVar5 = iVar4 + 1;
    rsaz_512_mul_scatter4(&local_c0,local_100,param_4,param_5,local_500,iVar4);
    iVar4 = iVar5;
  } while (iVar5 != 0x10);
  bVar1 = param_3[0x3f];
  rsaz_512_gather4(&local_c0,local_500,bVar1 >> 4);
  rsaz_512_sqr(&local_c0,&local_c0,param_4,param_5,4);
  rsaz_512_mul_gather4(&local_c0,&local_c0,local_500,param_4,param_5,bVar1 & 0xf);
  pbVar6 = param_3 + 0x3e;
  do {
    bVar1 = *pbVar6;
    rsaz_512_sqr(&local_c0,&local_c0,param_4,param_5,4);
    rsaz_512_mul_gather4(&local_c0,&local_c0,local_500,param_4,param_5,bVar1 >> 4);
    rsaz_512_sqr(&local_c0,&local_c0,param_4,param_5,4);
    rsaz_512_mul_gather4(&local_c0,&local_c0,local_500,param_4,param_5,bVar1 & 0xf);
    bVar7 = pbVar6 != param_3;
    pbVar6 = pbVar6 + -1;
  } while (bVar7);
  rsaz_512_mul_by_one(param_1,&local_c0,param_4,param_5);
  uVar2 = bn_sub_words(&local_548,param_1,param_4,8);
  uVar3 = uVar2 - 1;
  uVar2 = -uVar2;
  *param_1 = local_548 & uVar3 | *param_1 & uVar2;
  param_1[1] = param_1[1] & uVar2 | local_540 & uVar3;
  param_1[2] = param_1[2] & uVar2 | local_538 & uVar3;
  param_1[3] = param_1[3] & uVar2 | local_530 & uVar3;
  param_1[4] = param_1[4] & uVar2 | local_528 & uVar3;
  param_1[5] = param_1[5] & uVar2 | local_520 & uVar3;
  param_1[7] = uVar3 & local_510 | uVar2 & param_1[7];
  param_1[6] = param_1[6] & uVar2 | local_518 & uVar3;
  OPENSSL_cleanse(local_508,0x4c0);
  OPENSSL_cleanse(&local_548,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


