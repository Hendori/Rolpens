
undefined8 ossl_punycode_decode(long param_1,ulong param_2,long param_3,uint *param_4)

{
  uint *__src;
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint local_60;
  
  uVar2 = *param_4;
  if (param_2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar12 = 0;
    uVar18 = 0;
    do {
      uVar6 = (ulong)((int)uVar18 + 1);
      if (*(char *)(param_1 + uVar18) == '-') {
        uVar12 = uVar18;
      }
      uVar18 = uVar6;
    } while (uVar6 < param_2);
    uVar11 = (uint)uVar12;
    if (uVar11 == 0) {
      uVar18 = 0;
      uVar6 = 0;
    }
    else {
      uVar18 = 0;
      if (uVar2 < uVar11) {
        return 0;
      }
      do {
        if (0x7f < (uint)(int)*(char *)(param_1 + uVar18)) {
          return 0;
        }
        *(int *)(param_3 + uVar18 * 4) = (int)*(char *)(param_1 + uVar18);
        uVar18 = uVar18 + 1;
      } while (uVar12 != uVar18);
      uVar6 = (ulong)(uVar11 + 1);
      uVar12 = uVar6;
      if (param_2 <= uVar6) goto LAB_00100272;
    }
    local_60 = 0x80;
    uVar11 = 0x48;
    uVar9 = 0;
    do {
      if (param_2 <= uVar6) {
        return 0;
      }
      uVar10 = (ulong)uVar9;
      uVar15 = 0x24;
      uVar17 = -uVar11;
      uVar7 = 1;
      while( true ) {
        uVar17 = uVar17 + 0x24;
        cVar1 = *(char *)(param_1 + uVar6);
        iVar13 = (int)cVar1;
        if ((byte)(cVar1 + 0xbfU) < 0x1a) {
          uVar14 = iVar13 - 0x41;
        }
        else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
          uVar14 = iVar13 - 0x61;
        }
        else {
          if (9 < (byte)(cVar1 - 0x30U)) {
            return 0;
          }
          uVar14 = iVar13 - 0x16;
        }
        uVar6 = (ulong)((int)uVar12 + 1);
        if ((uint)(~(uint)uVar10 / uVar7) < uVar14) {
          return 0;
        }
        uVar16 = (uint)uVar10 + uVar14 * (int)uVar7;
        uVar10 = CONCAT44(0,uVar16);
        uVar8 = 1;
        if ((uVar11 < uVar15) && (uVar8 = 0x1a, uVar15 < uVar11 + 0x1a)) {
          uVar8 = uVar17;
        }
        uVar12 = uVar6;
        if (uVar14 < uVar8) break;
        uVar7 = (0x24 - uVar8) * uVar7;
        if ((int)(uVar7 >> 0x20) != 0) {
          return 0;
        }
        uVar7 = uVar7 & 0xffffffff;
        uVar15 = uVar15 + 0x24;
        if (param_2 <= uVar6) {
          return 0;
        }
      }
      if (uVar9 == 0) {
        uVar7 = uVar10 / 700;
      }
      else {
        uVar7 = (ulong)(uVar16 - uVar9 >> 1);
      }
      uVar9 = (int)(uVar7 / ((int)uVar18 + 1)) + (int)uVar7;
      iVar13 = 0;
      uVar11 = uVar9;
      if (0x1c7 < uVar9) {
        do {
          iVar13 = iVar13 + 0x24;
          uVar9 = uVar11 / 0x23;
          bVar3 = 0x3e57 < uVar11;
          uVar11 = uVar9;
        } while (bVar3);
      }
      uVar7 = uVar18 + 1;
      uVar11 = (uVar9 * 0x24) / (uVar9 + 0x26) + iVar13;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar10;
      uVar10 = uVar10 % uVar7;
      if ((ulong)~local_60 < SUB168(auVar5 / auVar4,0)) {
        return 0;
      }
      local_60 = local_60 + SUB164(auVar5 / auVar4,0);
      if (uVar2 <= uVar18) {
        return 0;
      }
      __src = (uint *)(param_3 + uVar10 * 4);
      memmove((void *)(param_3 + 4 + uVar10 * 4),__src,(uVar18 - uVar10) * 4);
      *__src = local_60;
      uVar9 = (int)uVar10 + 1;
      uVar18 = uVar7;
    } while (uVar6 < param_2);
    uVar11 = (uint)uVar7;
  }
LAB_00100272:
  *param_4 = uVar11;
  return 1;
}



int ossl_a2ulabel(char *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  uint local_88c;
  undefined1 local_888 [64];
  uint local_848 [512];
  uint local_48;
  undefined1 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    iVar2 = WPACKET_init_static_len(local_888,param_2,param_3,0);
    if (iVar2 != 0) {
      iVar2 = 1;
      do {
        pcVar4 = strchr(param_1,0x2e);
        if (pcVar4 == (char *)0x0) {
          sVar5 = strlen(param_1);
        }
        else {
          sVar5 = (long)pcVar4 - (long)param_1;
        }
        iVar3 = strncmp(param_1,"xn--",4);
        if (iVar3 == 0) {
          local_88c = 0x200;
          iVar3 = ossl_punycode_decode(param_1 + 4,sVar5 - 4,local_848,&local_88c);
          if (iVar3 < 1) {
LAB_001003f3:
            iVar2 = -1;
            goto LAB_001003f8;
          }
          iVar3 = iVar2;
          if (local_88c != 0) {
            lVar8 = 0;
            do {
              uVar1 = local_848[lVar8];
              uVar6 = (undefined1)uVar1;
              if (uVar1 < 0x80) {
                local_48 = CONCAT31((int3)(local_48 >> 8),uVar6) & 0xffff00ff;
                uVar7 = 1;
              }
              else if (uVar1 < 0x800) {
                uVar7 = 2;
                local_48 = CONCAT22((short)(local_48 >> 0x10),CONCAT11(uVar6,(char)(uVar1 >> 6))) &
                           0xff003fff | 0x80c0;
              }
              else if (uVar1 < 0x10000) {
                uVar7 = 3;
                local_48 = (CONCAT21(CONCAT11(uVar6,(char)(uVar1 >> 6)),(char)(uVar1 >> 0xc)) &
                            0xff3fff | 0x8000) & 0x3fffff | 0x8000e0;
              }
              else {
                if (0x10ffff < uVar1) goto LAB_001003f3;
                local_44 = 0;
                uVar7 = 4;
                local_48 = (((uVar1 & 0x3f) << 8 | uVar1 >> 6 & 0x3f) << 8 | uVar1 >> 0xc & 0x3f) <<
                           8 | uVar1 >> 0x12 & 0xff | _LC1;
              }
              iVar3 = WPACKET_memcpy(local_888,&local_48,uVar7);
              if (iVar3 == 0) {
                iVar2 = 0;
              }
              lVar8 = lVar8 + 1;
              iVar3 = iVar2;
            } while ((uint)lVar8 < local_88c);
          }
        }
        else {
          iVar3 = WPACKET_memcpy(local_888,param_1,sVar5);
          if (iVar3 != 0) {
            iVar3 = iVar2;
          }
        }
        if (pcVar4 == (char *)0x0) goto LAB_00100480;
        iVar2 = WPACKET_put_bytes__(local_888,0x2e,1);
        if (iVar2 != 0) {
          iVar2 = iVar3;
        }
        param_1 = pcVar4 + 1;
      } while( true );
    }
  }
  iVar2 = -1;
LAB_00100400:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100480:
  iVar2 = WPACKET_put_bytes__(local_888,0,1);
  if (iVar2 != 0) {
    iVar2 = iVar3;
  }
LAB_001003f8:
  WPACKET_cleanup(local_888);
  goto LAB_00100400;
}


