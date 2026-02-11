
char * DES_fcrypt(char *buf,char *salt,char *ret)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  long lVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  byte local_d0 [8];
  DES_key_schedule local_c8;
  uchar local_48 [8];
  byte abStack_40 [8];
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
      if (*buf == '\0') {
        lVar8 = 0;
      }
      else {
        local_48[0] = *buf * '\x02';
        if (buf[1] == '\0') {
          lVar8 = 1;
        }
        else {
          local_48[1] = buf[1] * '\x02';
          if (buf[2] == '\0') {
            lVar8 = 2;
          }
          else {
            local_48[2] = buf[2] * '\x02';
            if (buf[3] == '\0') {
              lVar8 = 3;
            }
            else {
              local_48[3] = buf[3] * '\x02';
              if (buf[4] == '\0') {
                lVar8 = 4;
              }
              else {
                local_48[4] = buf[4] * '\x02';
                if (buf[5] == '\0') {
                  lVar8 = 5;
                }
                else {
                  local_48[5] = buf[5] * '\x02';
                  if (buf[6] == '\0') {
                    lVar8 = 6;
                  }
                  else {
                    local_48[6] = buf[6] * '\x02';
                    if (buf[7] != '\0') {
                      local_48[7] = buf[7] * '\x02';
                      goto LAB_00100115;
                    }
                    lVar8 = 7;
                  }
                }
              }
            }
          }
        }
      }
      uVar6 = 8 - (int)lVar8;
      puVar7 = local_48 + lVar8;
      if (uVar6 < 8) {
        if ((uVar6 & 4) == 0) {
          if ((uVar6 != 0) && (*puVar7 = '\0', (uVar6 & 2) != 0)) {
            *(undefined2 *)((long)local_c8.ks + (ulong)uVar6 + lVar8 + 0x7e) = 0;
          }
        }
        else {
          puVar7[0] = '\0';
          puVar7[1] = '\0';
          puVar7[2] = '\0';
          puVar7[3] = '\0';
          *(undefined4 *)((long)local_c8.ks + (ulong)uVar6 + lVar8 + 0x7c) = 0;
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
        *(undefined8 *)((long)local_c8.ks + (ulong)uVar6 + lVar8 + 0x78) = 0;
        uVar6 = uVar6 + ((int)puVar7 - (int)((ulong)(abStack_40 + lVar8) & 0xfffffffffffffff8)) &
                0xfffffff8;
        if (7 < uVar6) {
          uVar5 = 0;
          do {
            uVar3 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8 *)(((ulong)(abStack_40 + lVar8) & 0xfffffffffffffff8) + uVar3) = 0;
          } while (uVar5 < uVar6);
        }
      }
LAB_00100115:
      DES_set_key_unchecked(&local_48,&local_c8);
      fcrypt_body(local_d0,&local_c8,(ulong)bVar4 << 2,(ulong)bVar2 << 6);
      local_38 = 0;
      bVar4 = 0x80;
      uVar3 = 0;
      pcVar9 = ret + 2;
      do {
        uVar6 = (uint)((bVar4 & local_d0[0]) != 0);
        uVar5 = uVar6 * 2;
        if (bVar4 >> 1 == 0) {
          uVar3 = (ulong)((int)uVar3 + 1);
          if ((char)abStack_40[uVar3] < '\0') {
            uVar5 = uVar5 | 1;
            bVar4 = 0x40;
            goto LAB_00100190;
          }
          uVar6 = uVar6 * 4;
          if ((abStack_40[uVar3] & 0x40) != 0) {
            uVar6 = uVar6 | 1;
          }
          bVar4 = 0x20;
LAB_00100287:
          uVar5 = uVar6 * 2;
          if ((abStack_40[uVar3] & bVar4) != 0) {
            uVar5 = uVar6 * 2 | 1;
          }
          bVar4 = bVar4 >> 1;
          if (bVar4 == 0) {
            uVar3 = (ulong)((int)uVar3 + 1);
            if ((char)abStack_40[uVar3] < '\0') {
              uVar6 = uVar5 * 2 + 1;
              bVar4 = 0x40;
              goto LAB_001002c8;
            }
            uVar5 = uVar5 << 2;
            bVar4 = 0x20;
            if ((abStack_40[uVar3] & 0x40) != 0) {
              uVar5 = uVar5 | 1;
              bVar4 = 0x20;
            }
          }
          else {
LAB_001001d5:
            uVar6 = uVar5 * 2;
            if ((abStack_40[uVar3] & bVar4) != 0) {
              uVar6 = uVar5 * 2 | 1;
            }
            bVar4 = bVar4 >> 1;
            if (bVar4 != 0) goto LAB_001002c8;
            uVar3 = (ulong)((int)uVar3 + 1);
            uVar5 = uVar6 * 2;
            bVar4 = 0x40;
            if ((char)abStack_40[uVar3] < '\0') {
              uVar5 = uVar5 | 1;
            }
          }
        }
        else {
          if ((bVar4 >> 1 & local_d0[0]) != 0) {
            uVar5 = uVar5 | 1;
          }
          bVar4 = bVar4 >> 2;
          if (bVar4 == 0) {
            uVar3 = (ulong)((int)uVar3 + 1);
            if ((char)abStack_40[uVar3] < '\0') {
              uVar6 = uVar5 * 2 + 1;
              bVar4 = 0x40;
              goto LAB_00100287;
            }
            uVar5 = uVar5 << 2;
            if ((abStack_40[uVar3] & 0x40) != 0) {
              uVar5 = uVar5 | 1;
            }
            bVar4 = 0x20;
            goto LAB_001001d5;
          }
LAB_00100190:
          uVar6 = uVar5 * 2;
          if ((abStack_40[uVar3] & bVar4) != 0) {
            uVar6 = uVar5 * 2 | 1;
          }
          bVar4 = bVar4 >> 1;
          if (bVar4 != 0) goto LAB_00100287;
          uVar3 = (ulong)((int)uVar3 + 1);
          if ((char)abStack_40[uVar3] < '\0') {
            uVar5 = uVar6 * 2 + 1;
            bVar4 = 0x40;
            goto LAB_001001d5;
          }
          uVar6 = uVar6 << 2;
          if ((abStack_40[uVar3] & 0x40) != 0) {
            uVar6 = uVar6 | 1;
          }
          bVar4 = 0x20;
LAB_001002c8:
          uVar5 = uVar6 * 2;
          if ((abStack_40[uVar3] & bVar4) != 0) {
            uVar5 = uVar6 * 2 | 1;
          }
          bVar4 = bVar4 >> 1;
          if (bVar4 == 0) {
            uVar3 = (ulong)((int)uVar3 + 1);
            bVar4 = 0x80;
          }
        }
        *pcVar9 = cov_2char[uVar5];
        if (pcVar9 + 1 == ret + 0xd) goto LAB_00100370;
        local_d0[0] = abStack_40[uVar3];
        pcVar9 = pcVar9 + 1;
      } while( true );
    }
  }
  ret = (char *)0x0;
  goto LAB_00100377;
LAB_00100370:
  ret[0xd] = '\0';
LAB_00100377:
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


