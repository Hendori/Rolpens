
char * DES_fcrypt(char *buf,char *salt,char *ret)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  uchar *puVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  byte local_d0 [8];
  DES_key_schedule local_c8;
  uchar local_48 [8];
  byte local_40 [8];
  undefined1 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *salt;
  *ret = cVar1;
  if ((int)cVar1 - 1U < 0x7f) {
    bVar4 = con_salt[(uint)(int)cVar1];
    cVar1 = salt[1];
    ret[1] = cVar1;
    if ((int)cVar1 - 1U < 0x7f) {
      bVar2 = con_salt[(uint)(int)cVar1];
      lVar6 = 0;
      do {
        if (buf[lVar6] == '\0') {
          uVar3 = 8 - (int)lVar6;
          puVar7 = *&local_48 + lVar6;
          if (uVar3 < 8) {
            if ((uVar3 & 4) == 0) {
              if ((uVar3 != 0) && (*puVar7 = '\0', (uVar3 & 2) != 0)) {
                *(undefined2 *)((long)local_c8.ks + (ulong)uVar3 + lVar6 + 0x7e) = 0;
              }
            }
            else {
              puVar7[0] = '\0';
              puVar7[1] = '\0';
              puVar7[2] = '\0';
              puVar7[3] = '\0';
              *(undefined4 *)((long)local_c8.ks + (ulong)uVar3 + lVar6 + 0x7c) = 0;
            }
          }
          else {
            puVar7[0] = '\0';
            puVar7[1] = '\0';
            puVar7[2] = '\0';
            puVar7[3] = '\0';
            puVar7[4] = '\0';
            puVar7[5] = '\0';
            puVar7[6] = '\0';
            puVar7[7] = '\0';
            *(undefined8 *)((long)local_c8.ks + (ulong)uVar3 + lVar6 + 0x78) = 0;
            uVar3 = uVar3 + ((int)puVar7 - (int)((ulong)(local_40 + lVar6) & 0xfffffffffffffff8)) &
                    0xfffffff8;
            if (7 < uVar3) {
              uVar5 = 0;
              do {
                uVar9 = (ulong)uVar5;
                uVar5 = uVar5 + 8;
                *(undefined8 *)(((ulong)(local_40 + lVar6) & 0xfffffffffffffff8) + uVar9) = 0;
              } while (uVar5 < uVar3);
            }
          }
          break;
        }
        (*&local_48)[lVar6] = buf[lVar6] * '\x02';
        lVar6 = lVar6 + 1;
      } while (lVar6 != 8);
      DES_set_key_unchecked(&local_48,&local_c8);
      fcrypt_body(local_d0,&local_c8,(ulong)bVar4 << 2,(ulong)bVar2 << 6);
      uVar9 = 0;
      local_38 = 0;
      bVar4 = 0x80;
      pcVar10 = ret + 2;
      while( true ) {
        iVar8 = 6;
        uVar3 = 0;
        while( true ) {
          uVar3 = uVar3 * 2;
          if ((local_d0[0] & bVar4) != 0) {
            uVar3 = uVar3 | 1;
          }
          bVar4 = bVar4 >> 1;
          if (bVar4 == 0) {
            uVar9 = (ulong)((int)uVar9 + 1);
            bVar4 = 0x80;
          }
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) break;
          local_d0[0] = local_40[uVar9];
        }
        *pcVar10 = cov_2char[uVar3 & 0xff];
        if (ret + 0xd == pcVar10 + 1) break;
        local_d0[0] = local_40[uVar9];
        pcVar10 = pcVar10 + 1;
      }
      ret[0xd] = '\0';
      goto LAB_00100157;
    }
  }
  ret = (char *)0x0;
LAB_00100157:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ret;
}



char * DES_crypt(char *buf,char *salt)

{
  char *pcVar1;
  
  pcVar1 = DES_fcrypt(buf,salt,buff_0);
  return pcVar1;
}


