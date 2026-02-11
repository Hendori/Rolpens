
/* WARNING: Type propagation algorithm not settling */

int mbscasecmp(byte *param_1,byte *param_2)

{
  byte bVar1;
  wint_t wVar2;
  wint_t wVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  __int32_t **pp_Var7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  wint_t __wc;
  long in_FS_OFFSET;
  wint_t local_4c [3];
  long local_40;
  
  iVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != param_1) {
    sVar4 = __ctype_get_mb_cur_max();
    if (sVar4 < 2) {
      do {
        bVar11 = *param_1;
        bVar1 = *param_2;
        param_1 = param_1 + 1;
        iVar8 = 0;
        param_2 = param_2 + 1;
        if (bVar1 != bVar11) {
          pp_Var7 = __ctype_tolower_loc();
          uVar13 = (*pp_Var7)[bVar11];
          bVar11 = (byte)uVar13;
          if (bVar1 != bVar11) {
            iVar8 = (uVar13 & 0xff) - (uint)*(byte *)(*pp_Var7 + bVar1);
          }
        }
      } while (bVar11 != 0 && iVar8 == 0);
    }
    else {
      do {
        uVar13 = (uint)(char)*param_1;
        if ((char)*param_1 < '\0') {
          pbVar10 = param_1 + (2 - (ulong)(param_1[1] == 0));
          local_4c[1] = 0;
          uVar5 = mbrtoc32(local_4c,param_1,
                           pbVar10 + (*pbVar10 != 0) +
                           ((ulong)(pbVar10[*pbVar10 != 0] != 0) - (long)param_1),local_4c + 1);
          if ((long)uVar5 < 0) {
            uVar5 = 1;
            __wc = 0;
          }
          else {
            uVar5 = uVar5 & 0xff;
            uVar13 = 0;
            __wc = local_4c[0];
          }
        }
        else {
          uVar5 = 1;
          __wc = uVar13;
          uVar13 = 0;
        }
        bVar11 = *param_2;
        param_1 = param_1 + uVar5;
        if ((char)bVar11 < '\0') {
          pbVar10 = param_2 + (2 - (ulong)(param_2[1] == 0));
          local_4c[1] = 0;
          lVar6 = mbrtoc32(local_4c,param_2,
                           pbVar10 + (*pbVar10 != 0) +
                           ((ulong)(pbVar10[*pbVar10 != 0] != 0) - (long)param_2),local_4c + 1);
          if (lVar6 < 0) {
            uVar12 = (uint)bVar11;
            lVar6 = 1;
            wVar3 = 0;
          }
          else {
            uVar12 = 0;
            wVar3 = local_4c[0];
          }
        }
        else {
          uVar12 = 0;
          lVar6 = 1;
          wVar3 = (int)(char)bVar11;
        }
        param_2 = param_2 + lVar6;
        iVar9 = (uVar13 & 0xff) - uVar12;
        iVar8 = iVar9 * 0x4000 + (__wc - wVar3);
        if (iVar8 != 0 && iVar9 == 0) {
          wVar2 = towlower(__wc);
          wVar3 = towlower(wVar3);
          iVar8 = wVar2 - wVar3;
        }
      } while (__wc != 0 && iVar8 == 0);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}


