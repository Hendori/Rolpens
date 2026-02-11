
int smaz_compress(char *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  size_t __n;
  char cVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  int local_184;
  char *local_180;
  int local_160;
  uint local_15c;
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    local_180._0_4_ = 0;
  }
  else {
    local_184 = 0;
    local_15c = 0;
    local_180 = param_3;
    local_160 = param_4;
LAB_00100060:
    do {
      cVar1 = *param_1;
      uVar4 = cVar1 * 8;
      if (1 < param_2) {
        uVar8 = (int)param_1[1] + uVar4;
        iVar7 = 2;
        if (param_2 != 2) {
          local_15c = (int)param_1[2] ^ uVar8;
          iVar7 = 7;
          if (param_2 < 8) {
            iVar7 = param_2;
          }
        }
LAB_001000a7:
        __n = (size_t)iVar7;
LAB_00100107:
        do {
          if (iVar7 == 1) {
LAB_001002e8:
            pcVar9 = *(char **)(Smaz_cb + (ulong)(uVar4 % 0xf1) * 8);
            lVar5 = (long)*pcVar9;
            if (*pcVar9 == '\0') goto LAB_0010023e;
            iVar7 = 1;
          }
          else if (iVar7 == 2) {
            pcVar9 = *(char **)(Smaz_cb + (ulong)(uVar8 % 0xf1) * 8);
            lVar5 = (long)*pcVar9;
            if (*pcVar9 == '\0') {
              __n = __n - 1;
              goto LAB_001002e8;
            }
          }
          else {
            pcVar9 = *(char **)(Smaz_cb + (ulong)(local_15c % 0xf1) * 8);
            lVar5 = (long)*pcVar9;
            if (*pcVar9 == '\0') {
              iVar7 = iVar7 + -1;
              __n = __n - 1;
              goto LAB_00100107;
            }
          }
          do {
            cVar3 = (char)lVar5;
            if ((cVar3 == iVar7) && (iVar2 = memcmp(pcVar9 + 1,param_1,__n), iVar2 == 0)) {
              if (local_184 == 0) {
                if (local_160 < 1) goto LAB_0010032c;
                param_2 = param_2 - iVar7;
                param_1 = param_1 + __n;
                local_160 = local_160 + -1;
                *local_180 = pcVar9[(long)cVar3 + 1];
                local_180 = local_180 + 1;
                goto LAB_00100269;
              }
              if (local_184 == 1) {
                lVar5 = 2;
                iVar2 = 2;
              }
              else {
                iVar2 = local_184 + 2;
                lVar5 = (long)iVar2;
              }
              if (local_160 - iVar2 < 1) goto LAB_0010032c;
              param_2 = param_2 - iVar7;
              pcVar6 = local_180 + lVar5 + 1;
              param_1 = param_1 + __n;
              local_180[lVar5] = pcVar9[(long)cVar3 + 1];
              local_160 = (local_160 - iVar2) + -1;
              if (local_180 == (char *)0x0) goto LAB_0010025f;
              goto LAB_001001c8;
            }
            pcVar9 = pcVar9 + lVar5 + 2;
            lVar5 = (long)*pcVar9;
          } while (*pcVar9 != '\0');
          __n = __n - 1;
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) goto LAB_0010023e;
        } while( true );
      }
      if (param_2 == 1) {
        uVar8 = uVar4;
        iVar7 = 1;
        goto LAB_001000a7;
      }
LAB_0010023e:
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      local_148[local_184] = cVar1;
      local_184 = local_184 + 1;
      pcVar6 = local_180;
LAB_0010025f:
      local_180 = pcVar6;
      if (local_184 == 0x100) {
LAB_00100287:
        iVar7 = local_184 + 2;
        lVar5 = (long)iVar7;
LAB_00100291:
        local_160 = local_160 - iVar7;
        if (local_160 < 0) {
LAB_0010032c:
          local_180._0_4_ = param_4 + 1;
          goto LAB_00100205;
        }
        pcVar6 = local_180 + lVar5;
        if (local_180 != (char *)0x0) {
LAB_001001c8:
          if (local_184 == 1) {
            *local_180 = -2;
            local_180[1] = local_148[0];
          }
          else {
            *local_180 = -1;
            local_180[1] = (char)local_184 + -1;
            memcpy(local_180 + 2,local_148,(long)local_184);
          }
          local_184 = 0;
        }
      }
      else {
LAB_00100269:
        pcVar6 = local_180;
        if (0 < local_184) {
          if (param_2 == 0) {
            if (local_184 != 1) goto LAB_00100287;
            param_2 = 0;
            lVar5 = 2;
            iVar7 = 2;
            goto LAB_00100291;
          }
          goto LAB_00100060;
        }
      }
      local_180 = pcVar6;
    } while (param_2 != 0);
    local_180._0_4_ = (int)local_180 - (int)param_3;
  }
LAB_00100205:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)local_180;
}



int smaz_decompress(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  char *__s;
  uint uVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  byte *__dest;
  byte *pbVar10;
  byte bVar11;
  int local_48;
  
  bVar11 = 0;
  __dest = param_3;
  iVar9 = param_4;
  if (param_2 == 0) {
    return 0;
  }
  do {
    while( true ) {
      bVar2 = *param_1;
      if (bVar2 != 0xfe) break;
      if (iVar9 < 1) {
LAB_00100530:
        return param_4 + 1;
      }
      pbVar1 = param_1 + 1;
      param_2 = param_2 + -2;
      pbVar10 = __dest + 1;
      param_1 = param_1 + 2;
      *__dest = *pbVar1;
      __dest = pbVar10;
      iVar9 = iVar9 + -1;
      if (param_2 == 0) goto LAB_00100497;
    }
    if (bVar2 == 0xff) {
      bVar2 = param_1[1];
      uVar3 = bVar2 + 1;
      if (iVar9 < (int)uVar3) goto LAB_00100530;
      sVar4 = (size_t)(int)uVar3;
      pbVar10 = param_1 + 2;
      if (uVar3 < 8) {
        if ((uVar3 & 4) == 0) {
          if ((uVar3 != 0) && (*__dest = *pbVar10, (uVar3 & 2) != 0)) {
            *(undefined2 *)(__dest + ((ulong)uVar3 - 2)) = *(undefined2 *)(param_1 + uVar3);
          }
        }
        else {
          *(undefined4 *)__dest = *(undefined4 *)pbVar10;
          *(undefined4 *)(__dest + ((ulong)uVar3 - 4)) =
               *(undefined4 *)(param_1 + ((ulong)uVar3 - 2));
        }
      }
      else {
        *(undefined8 *)__dest = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(__dest + ((ulong)uVar3 - 8)) = *(undefined8 *)(param_1 + ((ulong)uVar3 - 6))
        ;
        lVar5 = (long)__dest - (long)((ulong)(__dest + 8) & 0xfffffffffffffff8);
        pbVar10 = pbVar10 + -lVar5;
        puVar8 = (undefined8 *)((ulong)(__dest + 8) & 0xfffffffffffffff8);
        for (uVar6 = (ulong)((int)lVar5 + uVar3 >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *(undefined8 *)pbVar10;
          pbVar10 = pbVar10 + ((ulong)bVar11 * -2 + 1) * 8;
          puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
        }
      }
      iVar7 = bVar2 + 3;
      param_2 = param_2 - iVar7;
      param_1 = param_1 + iVar7;
    }
    else {
      __s = *(char **)(Smaz_rcb + (ulong)bVar2 * 8);
      sVar4 = strlen(__s);
      uVar3 = (uint)sVar4;
      if (iVar9 < (int)uVar3) goto LAB_00100530;
      sVar4 = (size_t)(int)uVar3;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      memcpy(__dest,__s,sVar4);
    }
    pbVar10 = __dest + sVar4;
    __dest = pbVar10;
    iVar9 = iVar9 - uVar3;
  } while (param_2 != 0);
LAB_00100497:
  local_48 = (int)param_3;
  return (int)pbVar10 - local_48;
}


