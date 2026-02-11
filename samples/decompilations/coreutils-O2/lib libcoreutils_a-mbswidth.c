
int mbsnwidth(byte *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  ushort **ppuVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  wchar_t local_4c;
  undefined8 local_48;
  long local_40;
  
  pbVar1 = param_1 + param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar4 = __ctype_get_mb_cur_max();
  if (sVar4 < 2) {
    iVar8 = 0;
    if (param_1 < pbVar1) {
      ppuVar6 = __ctype_b_loc();
      iVar8 = 0;
      do {
        bVar2 = *param_1;
        param_1 = param_1 + 1;
        if (((*ppuVar6)[bVar2] & 0x4000) == 0) {
          if ((param_3 & 2) != 0) goto LAB_001000c6;
          if (((*ppuVar6)[bVar2] & 2) == 0) goto LAB_00100179;
        }
        else {
LAB_00100179:
          if (iVar8 == 0x7fffffff) goto LAB_00100181;
          iVar8 = iVar8 + 1;
        }
      } while (pbVar1 != param_1);
    }
  }
  else {
    iVar8 = 0;
    if (param_1 < pbVar1) {
      do {
        if ((int)(char)*param_1 - 0x20U < 0x5f) {
LAB_00100050:
          param_1 = param_1 + 1;
          iVar8 = iVar8 + 1;
        }
        else {
          local_48 = 0;
          lVar5 = rpl_mbrtoc32(&local_4c,param_1,(long)pbVar1 - (long)param_1,&local_48);
          if (lVar5 == -1) {
            if ((param_3 & 1) == 0) goto LAB_00100050;
            goto LAB_001000c6;
          }
          if (lVar5 == -2) {
            if ((param_3 & 1) == 0) {
              iVar8 = iVar8 + 1;
            }
            else {
LAB_001000c6:
              iVar8 = -1;
            }
            break;
          }
          lVar7 = 1;
          if (lVar5 != 0) {
            lVar7 = lVar5;
          }
          iVar3 = wcwidth(local_4c);
          if (iVar3 < 0) {
            if ((param_3 & 2) != 0) goto LAB_001000c6;
            iVar3 = iswcntrl(local_4c);
            if (iVar3 == 0) {
              if (iVar8 == 0x7fffffff) goto LAB_00100181;
              iVar8 = iVar8 + 1;
            }
          }
          else {
            if (0x7fffffff - iVar8 < iVar3) goto LAB_00100181;
            iVar8 = iVar8 + iVar3;
          }
          param_1 = param_1 + lVar7;
        }
      } while (param_1 < pbVar1);
    }
  }
LAB_0010009a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100181:
  iVar8 = 0x7fffffff;
  goto LAB_0010009a;
}



void gnu_mbswidth(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  mbsnwidth(param_1,sVar1,param_2);
  return;
}


