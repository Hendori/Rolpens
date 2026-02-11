
uint mbsnwidth(byte *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  ushort **ppuVar7;
  long lVar8;
  uint uVar9;
  long in_FS_OFFSET;
  wchar_t local_4c;
  undefined8 local_48;
  long local_40;
  
  pbVar1 = param_1 + param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar5 = __ctype_get_mb_cur_max();
  if (sVar5 < 2) {
    if (param_1 < pbVar1) {
      ppuVar7 = __ctype_b_loc();
      uVar9 = param_3 & 2;
      if (uVar9 == 0) {
        do {
          bVar2 = *param_1;
          param_1 = param_1 + 1;
          uVar3 = (*ppuVar7)[bVar2];
          if (((uVar3 & 0x4000) != 0) || ((uVar3 & 2) == 0)) {
            if (uVar9 == 0x7fffffff) goto LAB_00100170;
            uVar9 = uVar9 + 1;
          }
        } while (pbVar1 != param_1);
      }
      else {
        uVar9 = 0;
        do {
          bVar2 = *param_1;
          param_1 = param_1 + 1;
          if ((*(byte *)((long)*ppuVar7 + (ulong)bVar2 * 2 + 1) & 0x40) == 0) goto LAB_001001a0;
          if (uVar9 == 0x7fffffff) goto LAB_00100170;
          uVar9 = uVar9 + 1;
        } while (param_1 != pbVar1);
      }
      goto LAB_001000a4;
    }
  }
  else if (param_1 < pbVar1) {
    if ((param_3 & 1) == 0) {
      uVar9 = 0;
      do {
        if ((int)(char)*param_1 - 0x20U < 0x5f) {
LAB_00100060:
          param_1 = param_1 + 1;
          uVar9 = uVar9 + 1;
        }
        else {
          local_48 = 0;
          lVar6 = rpl_mbrtoc32(&local_4c,param_1,(long)pbVar1 - (long)param_1,&local_48);
          if (lVar6 == -1) goto LAB_00100060;
          if (lVar6 == -2) {
            uVar9 = uVar9 + 1;
            break;
          }
          lVar8 = 1;
          if (lVar6 != 0) {
            lVar8 = lVar6;
          }
          iVar4 = wcwidth(local_4c);
          if (iVar4 < 0) {
            if ((param_3 & 2) != 0) goto LAB_001001a0;
            iVar4 = iswcntrl(local_4c);
            if (iVar4 == 0) {
              if (uVar9 == 0x7fffffff) goto LAB_00100170;
              uVar9 = uVar9 + 1;
            }
          }
          else {
            if ((int)(0x7fffffff - uVar9) < iVar4) goto LAB_00100170;
            uVar9 = uVar9 + iVar4;
          }
          param_1 = param_1 + lVar8;
        }
      } while (param_1 < pbVar1);
    }
    else if ((param_3 & 2) == 0) {
      uVar9 = 0;
      do {
        if ((int)(char)*param_1 - 0x20U < 0x5f) {
          param_1 = param_1 + 1;
          uVar9 = uVar9 + 1;
        }
        else {
          local_48 = 0;
          lVar6 = rpl_mbrtoc32(&local_4c,param_1,(long)pbVar1 - (long)param_1,&local_48);
          if ((lVar6 == -1) || (lVar6 == -2)) goto LAB_001001a0;
          lVar8 = 1;
          if (lVar6 != 0) {
            lVar8 = lVar6;
          }
          iVar4 = wcwidth(local_4c);
          if (iVar4 < 0) {
            iVar4 = iswcntrl(local_4c);
            if (iVar4 == 0) {
              if (uVar9 == 0x7fffffff) goto LAB_00100170;
              uVar9 = uVar9 + 1;
            }
          }
          else {
            if ((int)(0x7fffffff - uVar9) < iVar4) goto LAB_00100170;
            uVar9 = uVar9 + iVar4;
          }
          param_1 = param_1 + lVar8;
        }
      } while (param_1 < pbVar1);
    }
    else {
      uVar9 = 0;
      do {
        if ((int)(char)*param_1 - 0x20U < 0x5f) {
          param_1 = param_1 + 1;
          uVar9 = uVar9 + 1;
        }
        else {
          local_48 = 0;
          lVar6 = rpl_mbrtoc32(&local_4c,param_1,(long)pbVar1 - (long)param_1,&local_48);
          if ((lVar6 == -1) || (lVar6 == -2)) goto LAB_001001a0;
          lVar8 = 1;
          if (lVar6 != 0) {
            lVar8 = lVar6;
          }
          iVar4 = wcwidth(local_4c);
          if (iVar4 < 0) goto LAB_001001a0;
          if ((int)(0x7fffffff - uVar9) < iVar4) goto LAB_00100170;
          uVar9 = uVar9 + iVar4;
          param_1 = param_1 + lVar8;
        }
      } while (param_1 < pbVar1);
    }
    goto LAB_001000a4;
  }
  uVar9 = 0;
  goto LAB_001000a4;
LAB_001001a0:
  uVar9 = 0xffffffff;
  goto LAB_001000a4;
LAB_00100170:
  uVar9 = 0x7fffffff;
LAB_001000a4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



void gnu_mbswidth(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  mbsnwidth(param_1,sVar1,param_2);
  return;
}


