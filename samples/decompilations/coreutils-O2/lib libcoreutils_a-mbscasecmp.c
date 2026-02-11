
/* WARNING: Type propagation algorithm not settling */

int mbscasecmp(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  wint_t wVar3;
  wint_t wVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  __int32_t **pp_Var8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  wint_t __wc;
  long in_FS_OFFSET;
  wint_t local_4c [3];
  long local_40;
  
  iVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != param_1) {
    sVar5 = __ctype_get_mb_cur_max();
    if (sVar5 < 2) {
      do {
        bVar12 = *param_1;
        bVar1 = *param_2;
        param_1 = param_1 + 1;
        iVar10 = 0;
        param_2 = param_2 + 1;
        if (bVar1 != bVar12) {
          pp_Var8 = __ctype_tolower_loc();
          uVar13 = (*pp_Var8)[bVar12];
          bVar12 = (byte)uVar13;
          if (bVar1 != bVar12) {
            iVar10 = (uVar13 & 0xff) - (uint)*(byte *)(*pp_Var8 + bVar1);
          }
        }
      } while (bVar12 != 0 && iVar10 == 0);
    }
    else {
      do {
        uVar13 = (uint)(char)*param_1;
        if ((char)*param_1 < '\0') {
          pbVar9 = param_1 + (2 - (ulong)(param_1[1] == 0));
          local_4c[1] = 0;
          lVar6 = mbrtoc32(local_4c,param_1,
                           pbVar9 + (*pbVar9 != 0) +
                           ((ulong)(pbVar9[*pbVar9 != 0] != 0) - (long)param_1),local_4c + 1);
          if (lVar6 < 0) {
            lVar6 = 1;
            __wc = 0;
          }
          else {
            uVar13 = 0;
            __wc = local_4c[0];
          }
        }
        else {
          lVar6 = 1;
          __wc = uVar13;
          uVar13 = 0;
        }
        bVar12 = *param_2;
        param_1 = param_1 + lVar6;
        if ((char)bVar12 < '\0') {
          local_4c[1] = 0;
          pbVar9 = param_2 + (2 - (ulong)(param_2[1] == 0));
          uVar7 = mbrtoc32(local_4c,param_2,
                           pbVar9 + (*pbVar9 != 0) +
                           ((ulong)(pbVar9[*pbVar9 != 0] != 0) - (long)param_2));
          if ((long)uVar7 < 0) {
            uVar11 = (uint)bVar12;
            uVar7 = 1;
            wVar4 = 0;
          }
          else {
            uVar7 = uVar7 & 0xff;
            uVar11 = 0;
            wVar4 = local_4c[0];
          }
        }
        else {
          uVar11 = 0;
          uVar7 = 1;
          wVar4 = (int)(char)bVar12;
        }
        param_2 = param_2 + uVar7;
        iVar2 = (uVar13 & 0xff) - uVar11;
        iVar10 = iVar2 * 0x4000 + (__wc - wVar4);
        if (iVar10 != 0 && iVar2 == 0) {
          wVar3 = towlower(__wc);
          wVar4 = towlower(wVar4);
          iVar10 = wVar3 - wVar4;
        }
      } while (__wc != 0 && iVar10 == 0);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}


