
/* hb_parse_int(char const**, char const*, int*, bool) */

undefined8 hb_parse_int(char **param_1,char *param_2,int *param_3,bool param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  char *local_70;
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (int)param_2 - (int)*param_1;
  if (0x1f < uVar5) {
    uVar5 = 0x1f;
  }
  strncpy(local_68,*param_1,(ulong)uVar5);
  local_68[uVar5] = '\0';
  local_70 = local_68;
  piVar2 = __errno_location();
  *piVar2 = 0;
  iVar1 = __isoc23_strtol(local_68,&local_70,10);
  *param_3 = iVar1;
  if ((*piVar2 == 0) && (local_70 != local_68)) {
    lVar3 = (long)local_70 - (long)local_68;
    if ((!param_4) || ((long)param_2 - (long)*param_1 == lVar3)) {
      uVar4 = 1;
      *param_1 = *param_1 + lVar3;
      goto LAB_001000a6;
    }
  }
  uVar4 = 0;
LAB_001000a6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_parse_uint(char const**, char const*, unsigned int*, bool, int) */

undefined8 hb_parse_uint(char **param_1,char *param_2,uint *param_3,bool param_4,int param_5)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  char *local_70;
  char local_68 [40];
  long local_40;
  
  uVar4 = (int)param_2 - (int)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x1f < uVar4) {
    uVar4 = 0x1f;
  }
  strncpy(local_68,*param_1,(ulong)uVar4);
  local_68[uVar4] = '\0';
  local_70 = local_68;
  piVar1 = __errno_location();
  *piVar1 = 0;
  uVar4 = __isoc23_strtoul(local_68,&local_70,param_5);
  *param_3 = uVar4;
  if ((*piVar1 == 0) && (local_70 != local_68)) {
    lVar2 = (long)local_70 - (long)local_68;
    if ((!param_4) || (lVar2 == (long)param_2 - (long)*param_1)) {
      uVar3 = 1;
      *param_1 = *param_1 + lVar2;
      goto LAB_0010018b;
    }
  }
  uVar3 = 0;
LAB_0010018b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_parse_double(char const**, char const*, double*, bool) */

uint hb_parse_double(char **param_1,char *param_2,double *param_3,bool param_4)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  double *pdVar8;
  char cVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  pbVar2 = (byte *)*param_1;
  pbVar11 = pbVar2;
  if (pbVar2 < param_2) {
    do {
      bVar1 = *pbVar11;
      if (((0x20 < bVar1) || ((0x100003400U >> ((ulong)bVar1 & 0x3f) & 1) == 0)) &&
         ((bVar1 & 0xfd) != 9)) {
        if ((byte *)param_2 != pbVar11) goto LAB_0010023a;
        break;
      }
      pbVar11 = pbVar11 + 1;
    } while ((byte *)param_2 != pbVar11);
    dVar17 = 0.0;
LAB_001003f8:
    *param_3 = dVar17;
    if (pbVar2 != pbVar11) {
      *param_1 = (char *)pbVar11;
      return param_4 ^ 1 | (uint)CONCAT71((int7)((ulong)pbVar11 >> 8),(byte *)param_2 == pbVar11);
    }
  }
  else {
    if (pbVar2 != (byte *)param_2) {
LAB_0010023a:
      dVar19 = 0.0;
      cVar9 = '\x0f';
      bVar4 = false;
      uVar14 = 0;
      bVar5 = false;
      uVar15 = 0;
      dVar16 = 0.0;
      dVar17 = 0.0;
      bVar3 = false;
      iVar7 = 1;
LAB_001002b0:
      iVar12 = (int)(char)*pbVar11;
      if (iVar12 < (int)(uint)(byte)_double_parser_trans_keys[iVar7 * 2]) goto LAB_00100327;
      if ((int)(uint)(byte)_double_parser_trans_keys[(long)(iVar7 * 2) + 1] < iVar12)
      goto LAB_00100327;
      lVar13 = (long)(int)(iVar12 - (uint)(byte)_double_parser_trans_keys[iVar7 * 2]);
LAB_001002d8:
      iVar7 = (int)(char)_double_parser_trans_targs[(char)_double_parser_indicies[lVar13 + uVar14]];
      bVar6 = bVar4;
      switch(_double_parser_trans_actions[(char)_double_parser_indicies[lVar13 + uVar14]]) {
      case 1:
        bVar3 = true;
        if (iVar7 != 0) goto LAB_0010030c;
        goto LAB_00100340;
      case 2:
        dVar17 = dVar17 * __LC6 + (double)((char)*pbVar11 + -0x30);
        break;
      case 3:
        if (dVar16 <= _LC7) {
          dVar19 = dVar19 + _LC1;
          dVar16 = dVar16 * __LC6 + (double)((char)*pbVar11 + -0x30);
        }
        break;
      case 4:
        bVar5 = true;
        break;
      case 5:
        uVar10 = (char)*pbVar11 + -0x30 + uVar15 * 10;
        bVar6 = true;
        if (uVar10 < 0x800) {
          uVar15 = uVar10;
          bVar6 = bVar4;
        }
      }
      bVar4 = bVar6;
      if (iVar7 == 0) {
LAB_00100340:
        if (dVar19 != 0.0) {
          pdVar8 = (double *)&_pow10(unsigned_int)::_powers_of_10;
          uVar10 = 0x100;
          dVar18 = _LC1;
          do {
            if (((uint)(long)dVar19 & uVar10) != 0) {
              dVar18 = dVar18 * *pdVar8;
            }
            pdVar8 = pdVar8 + 1;
            uVar10 = uVar10 >> 1;
          } while (pdVar8 != (double *)_double_parser_trans_actions);
          dVar17 = dVar17 + dVar16 / dVar18;
        }
        if (bVar3) {
          dVar16 = (double)((ulong)dVar17 ^ __LC8);
          if (bVar4) {
            bVar3 = dVar17 != 0.0;
            dVar17 = (double)((ulong)dVar17 ^ __LC8);
            if ((bVar3) && (dVar17 = _LC2, !bVar5)) {
              dVar17 = _LC5;
            }
          }
          else {
LAB_001003b6:
            dVar17 = dVar16;
            if (uVar15 != 0) {
              pdVar8 = (double *)&_pow10(unsigned_int)::_powers_of_10;
              uVar10 = 0x100;
              dVar17 = _LC1;
              if (bVar5) {
                do {
                  if ((uVar10 & uVar15) != 0) {
                    dVar17 = dVar17 * *pdVar8;
                  }
                  pdVar8 = pdVar8 + 1;
                  uVar10 = uVar10 >> 1;
                } while (pdVar8 != (double *)_double_parser_trans_actions);
                dVar17 = dVar16 / dVar17;
              }
              else {
                do {
                  if ((uVar10 & uVar15) != 0) {
                    dVar17 = dVar17 * *pdVar8;
                  }
                  pdVar8 = pdVar8 + 1;
                  uVar10 = uVar10 >> 1;
                } while (pdVar8 != (double *)_double_parser_trans_actions);
                dVar17 = dVar16 * dVar17;
              }
            }
          }
        }
        else {
          dVar16 = dVar17;
          if (!bVar4) goto LAB_001003b6;
          if ((dVar17 != 0.0) && (dVar17 = _LC3, !bVar5)) {
            dVar17 = _LC4;
          }
        }
        goto LAB_001003f8;
      }
LAB_0010030c:
      pbVar11 = pbVar11 + 1;
      if ((byte *)param_2 == pbVar11) goto LAB_00100340;
      uVar14 = (ulong)(byte)_double_parser_index_offsets[iVar7];
      cVar9 = _double_parser_key_spans[iVar7];
      if (cVar9 < '\x01') goto LAB_00100327;
      goto LAB_001002b0;
    }
    *param_3 = 0.0;
  }
  return 0;
LAB_00100327:
  lVar13 = (long)cVar9;
  goto LAB_001002d8;
}


